/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7406
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

class Palindromize2 {
public:
    string minChanges(string s);
};

string Palindromize2::minChanges(string s) {
    string ret;
    return ret;
}


int test0() {
    string s = "ameba";
    Palindromize2* pObj = new Palindromize2();
    clock_t start = clock();
    string result = pObj->minChanges(s);
    clock_t end = clock();
    delete pObj;
    string expected = "abeba";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string s = "cigartragic";
    Palindromize2* pObj = new Palindromize2();
    clock_t start = clock();
    string result = pObj->minChanges(s);
    clock_t end = clock();
    delete pObj;
    string expected = "cigartragic";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string s = "abcdef";
    Palindromize2* pObj = new Palindromize2();
    clock_t start = clock();
    string result = pObj->minChanges(s);
    clock_t end = clock();
    delete pObj;
    string expected = "abccba";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string s = "cxbpaxz";
    Palindromize2* pObj = new Palindromize2();
    clock_t start = clock();
    string result = pObj->minChanges(s);
    clock_t end = clock();
    delete pObj;
    string expected = "cxapaxc";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string s = "z";
    Palindromize2* pObj = new Palindromize2();
    clock_t start = clock();
    string result = pObj->minChanges(s);
    clock_t end = clock();
    delete pObj;
    string expected = "z";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string s = "ff";
    Palindromize2* pObj = new Palindromize2();
    clock_t start = clock();
    string result = pObj->minChanges(s);
    clock_t end = clock();
    delete pObj;
    string expected = "ff";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string s = "pl";
    Palindromize2* pObj = new Palindromize2();
    clock_t start = clock();
    string result = pObj->minChanges(s);
    clock_t end = clock();
    delete pObj;
    string expected = "ll";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string s = "qqq";
    Palindromize2* pObj = new Palindromize2();
    clock_t start = clock();
    string result = pObj->minChanges(s);
    clock_t end = clock();
    delete pObj;
    string expected = "qqq";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string s = "xyz";
    Palindromize2* pObj = new Palindromize2();
    clock_t start = clock();
    string result = pObj->minChanges(s);
    clock_t end = clock();
    delete pObj;
    string expected = "xyx";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string s = "fud";
    Palindromize2* pObj = new Palindromize2();
    clock_t start = clock();
    string result = pObj->minChanges(s);
    clock_t end = clock();
    delete pObj;
    string expected = "dud";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string s = "waw";
    Palindromize2* pObj = new Palindromize2();
    clock_t start = clock();
    string result = pObj->minChanges(s);
    clock_t end = clock();
    delete pObj;
    string expected = "waw";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string s = "sckymdwnvcvpazbastyfferweewseffytoabsouwhvowakrzos";
    Palindromize2* pObj = new Palindromize2();
    clock_t start = clock();
    string result = pObj->minChanges(s);
    clock_t end = clock();
    delete pObj;
    string expected = "sckrkawnvcvpasbaotyfferweewreffytoabsapvcvnwakrkcs";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string s = "prid";
    Palindromize2* pObj = new Palindromize2();
    clock_t start = clock();
    string result = pObj->minChanges(s);
    clock_t end = clock();
    delete pObj;
    string expected = "diid";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string s = "aiaocrviopzafszjoitrylqca";
    Palindromize2* pObj = new Palindromize2();
    clock_t start = clock();
    string result = pObj->minChanges(s);
    clock_t end = clock();
    delete pObj;
    string expected = "acalcrtiojzafazjoitrclaca";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string s = "efqzqoigrtxetsrlgoufazqurunzauyxglqsteqjmtiofzbfe";
    Palindromize2* pObj = new Palindromize2();
    clock_t start = clock();
    string result = pObj->minChanges(s);
    clock_t end = clock();
    delete pObj;
    string expected = "efbzfoigmjqetsqlgoufaznurunzafuoglqsteqjmgiofzbfe";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string s = "tqnzbrlsyixkuynichvduufvhcinywkxiyslrbzfqp";
    Palindromize2* pObj = new Palindromize2();
    clock_t start = clock();
    string result = pObj->minChanges(s);
    clock_t end = clock();
    delete pObj;
    string expected = "pqfzbrlsyixkuynichvduudvhcinyukxiyslrbzfqp";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string s = "pkfhjbuiwynhwbohkibjhnyqzbbjnhip";
    Palindromize2* pObj = new Palindromize2();
    clock_t start = clock();
    string result = pObj->minChanges(s);
    clock_t end = clock();
    delete pObj;
    string expected = "pifhjbbiqynhjbihhibjhnyqibbjhfip";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string s = "wvuexgefrmtssmqnhhwhqkluyfullqcztsnqhesvmgfegxeuvw";
    Palindromize2* pObj = new Palindromize2();
    clock_t start = clock();
    string result = pObj->minChanges(s);
    clock_t end = clock();
    delete pObj;
    string expected = "wvuexgefgmtsehqnhhwcqkluffulkqcwhhnqhestmgfegxeuvw";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string s = "jiohnrbitnhniaggaiyhntebknhoif";
    Palindromize2* pObj = new Palindromize2();
    clock_t start = clock();
    string result = pObj->minChanges(s);
    clock_t end = clock();
    delete pObj;
    string expected = "fiohnkbetnhniaggainhntebknhoif";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string s = "swlwmpckkchmnqwp";
    Palindromize2* pObj = new Palindromize2();
    clock_t start = clock();
    string result = pObj->minChanges(s);
    clock_t end = clock();
    delete pObj;
    string expected = "pwlnmhckkchmnlwp";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string s = "nbrpswxlfnonwpccnqeexrxixitrxolxrccpvwtmfirwspobw";
    Palindromize2* pObj = new Palindromize2();
    clock_t start = clock();
    string result = pObj->minChanges(s);
    clock_t end = clock();
    delete pObj;
    string expected = "nbopswrifmonvpccnqeexrtixitrxeeqnccpvnomfirwspobn";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string s = "ylgkfgqxktzvfqhhqfrctkcqqyqeam";
    Palindromize2* pObj = new Palindromize2();
    clock_t start = clock();
    string result = pObj->minChanges(s);
    clock_t end = clock();
    delete pObj;
    string expected = "maekfgqcktcrfqhhqfrctkcqgfkeam";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string s = "muqikswudgasgtpwvkinpm";
    Palindromize2* pObj = new Palindromize2();
    clock_t start = clock();
    string result = pObj->minChanges(s);
    clock_t end = clock();
    delete pObj;
    string expected = "mpnikswpdgaagdpwskinpm";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string s = "qhsnoczfrsnpjxybbijajhzlidtzjgtmmbgygfpmscxncalihn";
    Palindromize2* pObj = new Palindromize2();
    clock_t start = clock();
    string result = pObj->minChanges(s);
    clock_t end = clock();
    delete pObj;
    string expected = "nhilacnfcsmpfgybbijaghzlddlzhgajibbygfpmscfncalihn";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string s = "dffmiykeukyfnetapfgrasyjysdrefparemmykurrycmfhd";
    Palindromize2* pObj = new Palindromize2();
    clock_t start = clock();
    string result = pObj->minChanges(s);
    clock_t end = clock();
    delete pObj;
    string expected = "dffmcykeukyfmerapferasyjysarefparemfykuekycmffd";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string s = "sjfhqnzahrjcpzwipazviznfp";
    Palindromize2* pObj = new Palindromize2();
    clock_t start = clock();
    string result = pObj->minChanges(s);
    clock_t end = clock();
    delete pObj;
    string expected = "pffhinzahijcpcjihaznihffp";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string s = "tjjyqchjvholwapubkjdhahdrrqaakqkhqpawhxttthyqbley";
    Palindromize2* pObj = new Palindromize2();
    clock_t start = clock();
    string result = pObj->minChanges(s);
    clock_t end = clock();
    delete pObj;
    string expected = "tejbqchjthohwapqbkjdaahdrdhaadjkbqpawhohtjhcqbjet";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string s = "jtpkiybpnhsronrsgiabgxnyttynxgbaigsrnorshnpbyikptj";
    Palindromize2* pObj = new Palindromize2();
    clock_t start = clock();
    string result = pObj->minChanges(s);
    clock_t end = clock();
    delete pObj;
    string expected = "jtpkiybpnhsronrsgiabgxnyttynxgbaigsrnorshnpbyikptj";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string s = "lsjojsl";
    Palindromize2* pObj = new Palindromize2();
    clock_t start = clock();
    string result = pObj->minChanges(s);
    clock_t end = clock();
    delete pObj;
    string expected = "lsjojsl";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string s = "cqvhpfynwllwnyfphvqc";
    Palindromize2* pObj = new Palindromize2();
    clock_t start = clock();
    string result = pObj->minChanges(s);
    clock_t end = clock();
    delete pObj;
    string expected = "cqvhpfynwllwnyfphvqc";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string s = "lqcshxdscliuhanmuvkaftlefeltfakvumnahuilcsdxhscql";
    Palindromize2* pObj = new Palindromize2();
    clock_t start = clock();
    string result = pObj->minChanges(s);
    clock_t end = clock();
    delete pObj;
    string expected = "lqcshxdscliuhanmuvkaftlefeltfakvumnahuilcsdxhscql";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string s = "pwpivwxqodsvsdoqxwvipwp";
    Palindromize2* pObj = new Palindromize2();
    clock_t start = clock();
    string result = pObj->minChanges(s);
    clock_t end = clock();
    delete pObj;
    string expected = "pwpivwxqodsvsdoqxwvipwp";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string s = "dkajtgaizgrsvtjieweweijtvsrgziagtjakd";
    Palindromize2* pObj = new Palindromize2();
    clock_t start = clock();
    string result = pObj->minChanges(s);
    clock_t end = clock();
    delete pObj;
    string expected = "dkajtgaizgrsvtjieweweijtvsrgziagtjakd";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string s = "zzulpiecshuznnjzhigpnrxgoogxrnpgilzjnnzuhscelpluzz";
    Palindromize2* pObj = new Palindromize2();
    clock_t start = clock();
    string result = pObj->minChanges(s);
    clock_t end = clock();
    delete pObj;
    string expected = "zzulpiecshuznnjzhigpnrxgoogxrnpgihzjnnzuhsceipluzz";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string s = "hzndgrxioftlkkltfoixrganyh";
    Palindromize2* pObj = new Palindromize2();
    clock_t start = clock();
    string result = pObj->minChanges(s);
    clock_t end = clock();
    delete pObj;
    string expected = "hynagrxioftlkkltfoixrganyh";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string s = "liu";
    Palindromize2* pObj = new Palindromize2();
    clock_t start = clock();
    string result = pObj->minChanges(s);
    clock_t end = clock();
    delete pObj;
    string expected = "lil";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string s = "mqzuexjvovyffuwhxsrgvvrpspruvgrsxhwuffyvotjxeuzlm";
    Palindromize2* pObj = new Palindromize2();
    clock_t start = clock();
    string result = pObj->minChanges(s);
    clock_t end = clock();
    delete pObj;
    string expected = "mlzuexjtovyffuwhxsrgvurpspruvgrsxhwuffyvotjxeuzlm";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string s = "xdnkfbfffbfknpx";
    Palindromize2* pObj = new Palindromize2();
    clock_t start = clock();
    string result = pObj->minChanges(s);
    clock_t end = clock();
    delete pObj;
    string expected = "xdnkfbfffbfkndx";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string s = "zzrbqkajgxucqvckfygfhqoboqhfgyfkcvqcuxgjakqbrzz";
    Palindromize2* pObj = new Palindromize2();
    clock_t start = clock();
    string result = pObj->minChanges(s);
    clock_t end = clock();
    delete pObj;
    string expected = "zzrbqkajgxucqvckfygfhqoboqhfgyfkcvqcuxgjakqbrzz";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string s = "utpim";
    Palindromize2* pObj = new Palindromize2();
    clock_t start = clock();
    string result = pObj->minChanges(s);
    clock_t end = clock();
    delete pObj;
    string expected = "mipim";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string s = "tghym";
    Palindromize2* pObj = new Palindromize2();
    clock_t start = clock();
    string result = pObj->minChanges(s);
    clock_t end = clock();
    delete pObj;
    string expected = "mghgm";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string s = "lfsl";
    Palindromize2* pObj = new Palindromize2();
    clock_t start = clock();
    string result = pObj->minChanges(s);
    clock_t end = clock();
    delete pObj;
    string expected = "lffl";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string s = "wmmc";
    Palindromize2* pObj = new Palindromize2();
    clock_t start = clock();
    string result = pObj->minChanges(s);
    clock_t end = clock();
    delete pObj;
    string expected = "cmmc";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string s = "nyxyg";
    Palindromize2* pObj = new Palindromize2();
    clock_t start = clock();
    string result = pObj->minChanges(s);
    clock_t end = clock();
    delete pObj;
    string expected = "gyxyg";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string s = "sqydl";
    Palindromize2* pObj = new Palindromize2();
    clock_t start = clock();
    string result = pObj->minChanges(s);
    clock_t end = clock();
    delete pObj;
    string expected = "ldydl";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string s = "tivxeqjambnbwogznjwmzwcmevvrgdjksjczberutmrrgwjzgi";
    Palindromize2* pObj = new Palindromize2();
    clock_t start = clock();
    string result = pObj->minChanges(s);
    clock_t end = clock();
    delete pObj;
    string expected = "igvjegjambnbebgcjjkjdgcmeemcgdjkjjcgbebnbmajgejvgi";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string s = "wwxsgmophvhyqokrnontavrognqhouuclt";
    Palindromize2* pObj = new Palindromize2();
    clock_t start = clock();
    string result = pObj->minChanges(s);
    clock_t end = clock();
    delete pObj;
    string expected = "tlcsgmhphghrqaknnnnkaqrhghphmgsclt";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string s = "limwxydjquoz";
    Palindromize2* pObj = new Palindromize2();
    clock_t start = clock();
    string result = pObj->minChanges(s);
    clock_t end = clock();
    delete pObj;
    string expected = "limqjddjqmil";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string s = "lpcetzmchtseuzjspxysjmludtagaeehalunhflubmtpeykzj";
    Palindromize2* pObj = new Palindromize2();
    clock_t start = clock();
    string result = pObj->minChanges(s);
    clock_t end = clock();
    delete pObj;
    string expected = "jpceepmcbtlehnjlaheeagatdtagaeehaljnheltbcmpeecpj";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string s = "cqdhslahegscjsucigfbcmtqwzhnxl";
    Palindromize2* pObj = new Palindromize2();
    clock_t start = clock();
    string result = pObj->minChanges(s);
    clock_t end = clock();
    delete pObj;
    string expected = "cqdhslahecbcgiccigcbcehalshdqc";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string s = "hpojxnxicjxpleuzydartbljfaccqugjweslkedff";
    Palindromize2* pObj = new Palindromize2();
    clock_t start = clock();
    string result = pObj->minChanges(s);
    clock_t end = clock();
    delete pObj;
    string expected = "ffdeklsecjgplccafdabtbadfacclpgjceslkedff";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string s = "kdpyulxkisfohpqzwgez";
    Palindromize2* pObj = new Palindromize2();
    clock_t start = clock();
    string result = pObj->minChanges(s);
    clock_t end = clock();
    delete pObj;
    string expected = "kdgwulphiffihpluwgdk";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string s = "cdd";
    Palindromize2* pObj = new Palindromize2();
    clock_t start = clock();
    string result = pObj->minChanges(s);
    clock_t end = clock();
    delete pObj;
    string expected = "cdc";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string s = "cd";
    Palindromize2* pObj = new Palindromize2();
    clock_t start = clock();
    string result = pObj->minChanges(s);
    clock_t end = clock();
    delete pObj;
    string expected = "cc";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string s = "a";
    Palindromize2* pObj = new Palindromize2();
    clock_t start = clock();
    string result = pObj->minChanges(s);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string s = "cxbpaxz";
    Palindromize2* pObj = new Palindromize2();
    clock_t start = clock();
    string result = pObj->minChanges(s);
    clock_t end = clock();
    delete pObj;
    string expected = "cxapaxc";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string s = "ameba";
    Palindromize2* pObj = new Palindromize2();
    clock_t start = clock();
    string result = pObj->minChanges(s);
    clock_t end = clock();
    delete pObj;
    string expected = "abeba";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string s = "ba";
    Palindromize2* pObj = new Palindromize2();
    clock_t start = clock();
    string result = pObj->minChanges(s);
    clock_t end = clock();
    delete pObj;
    string expected = "aa";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string s = "abcde";
    Palindromize2* pObj = new Palindromize2();
    clock_t start = clock();
    string result = pObj->minChanges(s);
    clock_t end = clock();
    delete pObj;
    string expected = "abcba";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string s = "abc";
    Palindromize2* pObj = new Palindromize2();
    clock_t start = clock();
    string result = pObj->minChanges(s);
    clock_t end = clock();
    delete pObj;
    string expected = "aba";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string s = "abcdef";
    Palindromize2* pObj = new Palindromize2();
    clock_t start = clock();
    string result = pObj->minChanges(s);
    clock_t end = clock();
    delete pObj;
    string expected = "abccba";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string s = "defabc";
    Palindromize2* pObj = new Palindromize2();
    clock_t start = clock();
    string result = pObj->minChanges(s);
    clock_t end = clock();
    delete pObj;
    string expected = "cbaabc";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string s = "ab";
    Palindromize2* pObj = new Palindromize2();
    clock_t start = clock();
    string result = pObj->minChanges(s);
    clock_t end = clock();
    delete pObj;
    string expected = "aa";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=20036294&rd=10661&pm=7406
********************************************************************************
#include <sstream> 
#include <iostream>
#include <string.h>
#include <algorithm>
#include <stdlib.h> 
#include <stdio.h> 
#include <numeric>
#include <math.h>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <set>
using namespace std;
 
#define forn(i,n)     for(int i=0; i<n; ++i)
#define forv(i,v)     forn(i,int(v.size()))
#define ALL(a)        (a).begin(),(a).end()
#define pb            push_back
#define sz            size()
#define SORT(a)       sort(ALL(a))
#define iss           istringstream
 
typedef vector< int > vi; typedef vector< string > vs;
 
class Palindromize2 {
public:
    string minChanges(string s) {
      forn (i,s.sz/2)
      {
        if (s[i]!=s[s.sz-i-1])
        {
          if (s[i]<s[s.sz-i-1])
          s[s.sz-i-1]=s[i];
          else
          s[i]=s[s.sz-i-1];
        }
      }
      
         return s;
    }
 
};
 
 
 
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/