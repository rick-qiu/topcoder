/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=9943
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

class TemplateMatching {
public:
    string bestMatch(string text, string prefix, string suffix);
};

string TemplateMatching::bestMatch(string text, string prefix, string suffix) {
    string ret;
    return ret;
}


int test0() {
    string text = "something";
    string prefix = "awesome";
    string suffix = "ingenious";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = "something";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string text = "havka";
    string prefix = "eto";
    string suffix = "papstvo";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string text = "a";
    string prefix = "b";
    string suffix = "c";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string text = "abracadabra";
    string prefix = "habrahabr";
    string suffix = "bracket";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = "abrac";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string text = "mississippi";
    string prefix = "promise";
    string suffix = "piccolo";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = "ippi";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string text = "a a a a a a";
    string prefix = "a a";
    string suffix = "a";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = "a a";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string text = "z vt no k bdmztq ct lk ot e bref vr czff";
    string prefix = "tcrmy qrxw cl w";
    string suffix = "cj zi dp";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = " bdmztq c";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string text = " e mcytuzce u msgh fgi lw quyukw b";
    string prefix = " wapl yl s kq";
    string suffix = "abw rv";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = "q";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string text = "ogpu rjgq mtf z";
    string prefix = " k";
    string suffix = "gzk";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = " rjg";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string text = "n xfixx g j ouii tez uaqmehobr bh ltdw qu";
    string prefix = "z s mi nv xlc a";
    string suffix = "qif";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = "aq";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string text = " yvy iz hoc t awib p g";
    string prefix = " yl g";
    string suffix = " n s";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = " g";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string text = "x jv u tnj jfdh hz zhr emo nmv";
    string prefix = "gmu";
    string suffix = "m c";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = "u tnj jfdh hz zhr em";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string text = " a pc e cg h y g opyeijc t eonjwoh kdm q o";
    string prefix = "h";
    string suffix = "m rhnp nnzig qj";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = "h kdm ";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string text = "e pnwd zwthplk l k ybkbv elbbcqi w cbv d wyz wab";
    string prefix = " ln irp qamkui g d ndwb";
    string suffix = "pj hci ef t v r j ulpdg p i j";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = "b";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string text = " xx crahded mitc aj i y k qiamjtls";
    string prefix = " ud kg";
    string suffix = "acp fte iaj";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = " a";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string text = "eu mdvv un z y laer fk vk f vx x xb g kwmu gg";
    string prefix = " e iua a";
    string suffix = "t kpwbd m";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string text = "gn i";
    string prefix = "ro";
    string suffix = " h";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = " ";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string text = "bwpoq hd jo q recw bg obmq k vr ct kkljcjx";
    string prefix = "u ljikxxhzc as";
    string suffix = "hyd p";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = " h";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string text = " xb yl qmof di ctqpq na icdrlgkq fjbej";
    string prefix = " n";
    string suffix = " lw";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = " na ";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string text = "kqkoefah ys i jfhguzrd qm q k lra";
    string prefix = "qe kp mmr";
    string suffix = "m dfp bc y m vt";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = "rd qm ";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string text = "tmuh rlbfqxdn t g atd zggby";
    string prefix = "gfv fb";
    string suffix = " mo un vpi v s";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = "bfqxdn ";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string text = "zppowg qzreqw rjj qh pixa v";
    string prefix = "suc";
    string suffix = "zpa d t";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = "zp";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string text = "eq hc q t lnvw";
    string prefix = "x";
    string suffix = " ef ok t";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = " ";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string text = " u wczb v";
    string prefix = "z";
    string suffix = "sox";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = "z";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string text = "bqevduspk jn jnw k u gv yf ax bjwwis ymh w knup";
    string prefix = "ghwdrovpwwbywm ryr";
    string suffix = "pp qqd";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = " ax bjwwis ymh w knup";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string text = " fed vvd gweac odk a lbderviy la q tyar r snr p";
    string prefix = "o yhg rgda";
    string suffix = "zv opmmcquup";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string text = "kgs gjb klormak s cbx xvh im oaj o dt c n l";
    string prefix = "b j dojez foxyi";
    string suffix = " yto v z aibbe r pde g";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = "im ";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string text = " xcq n l ldro k kgb n j xwkno ukc b l t r agmah b";
    string prefix = "p y he";
    string suffix = " bwokq hav";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = " agmah b";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string text = " cu ldp oyjy c tso rw b hkp pd";
    string prefix = " bm q ihn";
    string suffix = " ccxw";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = " c";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string text = " kcy";
    string prefix = " g";
    string suffix = "o x";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = " ";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string text = "gpz t c vd u yqof";
    string prefix = "on fkz";
    string suffix = " n";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = "z ";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string text = " xnt reje l uvi lzca tlbqelkjd wp kik";
    string prefix = "d zpg yvnota";
    string suffix = "o";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string text = "fl wn dkf";
    string prefix = " vx m";
    string suffix = "d";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = " d";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string text = "jhxc le lizh zt";
    string prefix = "w";
    string suffix = "vvucg v";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = " ";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string text = "qn okxyo";
    string prefix = " ybx p";
    string suffix = " d";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = " ";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string text = "pcu r byga x g z k ab x hcn e qw th";
    string prefix = "ktukuq j q";
    string suffix = "pp gmi";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = " q";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string text = " dkx vo j";
    string prefix = "g";
    string suffix = "sqc";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = " ";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string text = "r o tejmrmdpdyu daz zw jnattfbhpo";
    string prefix = "o gt p jcnapp";
    string suffix = " ksd f ww y";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = "pdyu ";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string text = " d wbhxydy v twjpc aj c dazklu qt cexf ed";
    string prefix = " ycc i dgto vn";
    string suffix = " lgf zz q g";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = " ";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string text = "ig lv msttp wk iuki ezwfnuxdq odg";
    string prefix = "wf lsi ua hbaa";
    string suffix = "epg mfvs ft lpwk x";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = " e";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string text = " k t zdr";
    string prefix = "m";
    string suffix = "c";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = " ";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string text = " ght w xq g m g r";
    string prefix = " s w ue";
    string suffix = "tp";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = " ght";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string text = "q kbf pzyc tqlw ateaozmdprzkw s t v ieyofyn";
    string prefix = "dtmx w mehp e";
    string suffix = "gkkac";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = "e";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string text = "z s agzjztn iqo b qnu m d zb jd hi figsckyho q";
    string prefix = "f rfkw dxt hf q m";
    string suffix = "jrxwfis xt f padqx c hfl ut ";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = " m d zb j";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string text = "x gv xdw vvj v hmlwsaz atftosucne fc ocf";
    string prefix = " pryxfkt v s m z wr k p jftz byc ";
    string suffix = "s i arf wyleqmyou frxs lk";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = "c ";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string text = " p lqq g ix ndc oix gnh lk qiw gafz mzqxqp vxw ";
    string prefix = " qcsq mn";
    string suffix = "u";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = "n";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string text = "e stjlv s iis lphme io k jgvj ls p at";
    string prefix = "svfv a zic dlz sb gej ";
    string suffix = " w x tpye ";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = "j ";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string text = " teysti ycqvy djqvu zpusk py iflwnmf zf cw e";
    string prefix = " l f m dbwr pr dtg";
    string suffix = " s y vt tjb e q w l upovs";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = " ";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string text = "bg f mcc pgviscr vd d orom qje bnduuoc";
    string prefix = "qfof hyfkix xiyuxk p";
    string suffix = " s cca onl u";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = " pgviscr ";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string text = "opgez sii rahs ny em xwy crboz zfmnkkoioe ";
    string prefix = " lfwo bpww nd lfkaa ftvemdmdvc wom ie";
    string suffix = " sxiu ws d r j obbu xnsm nfs ond sa";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = "ez s";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string text = "ml ctqwd soaug dhwj zm u ewwo z ef";
    string prefix = "mdy tcxsvja s bsng zjqrpya ajsdy sl k c l ";
    string suffix = "qciwpmeti hn j w tr hhisdi bhzq h ";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = "l ctq";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string text = "lcxeux pambpclh gs i ik eg n lkmn aw yl";
    string prefix = "y dsg e uqtz th xvm wahe ";
    string suffix = " r tmp hb j wrzb odhgon jniq ov zir";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = " ";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string text = "ayo lth y f zhosk qphy gryyt og dmpnzm g we ";
    string prefix = " j f y gx tezejhrx atizkmu x ";
    string suffix = " ou wftloc n hcnkbzv slhv";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = " f zhosk qphy gryyt o";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string text = "mwdvp bu lu z gbnex h zqd njfe denxm yplj";
    string prefix = "frktdsdyqx gv w pey";
    string suffix = "slpxkqltc t ffhlbfcywtf";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = "y";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string text = "cz cu orlmjfksa jlqabom dh kqbtzbs qavdo k v ";
    string prefix = "x hcb zho zn arg cuu udc mb";
    string suffix = " npo e pedhtbh uvw ";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = "bom ";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string text = " we sybh nr pxrrq m hob pqcenf ntjzypxo";
    string prefix = " e slkmbu mlpxsyai g efryp opl qw aa x";
    string suffix = "zrie qujljv nglukgam enhjq";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = "xrrq m hob pqcenf ntjz";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string text = "f fv hr jakiy qz o zxaismar p ergzmoovxojwg";
    string prefix = "xc g d ul r a o l ym urin lolg c csni ";
    string suffix = "nq eyeb";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = " ";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string text = " jkqcquk tfdrkbtffr t fk bctrcbkbjcvc r sm y mm";
    string prefix = " y mndmwvue t yptd f dij";
    string suffix = "n y slowf mtgew g lewkb ";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = "j";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string text = "qythmoqh rq boftg ypex g og g p wis c dh r";
    string prefix = " frnjzkvuqv lw gi gy dftt isgmmwds aupdhi";
    string suffix = "ay w f y pu dcq kdu nyn ";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = "i";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string text = "qp pesgwq ox ue n up xeuopw w ypawctwax qs g";
    string prefix = "z fym jh b uq rufmp heogc mwvxz zrnuci";
    string suffix = "cjszu soubczr";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = " n up xeuopw w ypawc";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string text = "kay msqblixtzxau qit omk xz kltfmevbdsvj ud";
    string prefix = "zsvl gpmk ionqrgjuirbss no xbos pfl";
    string suffix = "w";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = "l";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string text = "syvf yh g brfsj vxhgofk k ecey zknp ttp cjn tg ";
    string prefix = "rn ofjic i dbtji a y szdqo";
    string suffix = " ";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = "ofk ";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string text = "qlmujs midzkpuon glikqm t t puxu c jspmbpujur";
    string prefix = "t zui ppw jyd ";
    string suffix = "uof w k slkfkf sfbhsu vbz vsa kznq ";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = " midzkpuo";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string text = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    string prefix = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    string suffix = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string text = " oriyty gln ghn zhpxyzqqn ar vxbln dg zmzzfcaf ";
    string prefix = " d ox rds gwblg bcx qb vf czf kdgyliyy j esoy";
    string suffix = "bfbpi hhlxg obd g e ruqhq ie xy lxm t u ef ";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = "y gln ghn zhpxyzqqn ar vxb";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string text = "ahdaqbfwyjc y x h qlkteom mf it krj juuvbsttva f";
    string prefix = " h ptnybkqd m wemklzn o fcf breg ie lyxlx w";
    string suffix = "b gs b t u af mw p zj jq iwdg ew t w h uh";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = "wyjc y x h qlkteom mf it krj juuvb";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string text = "wrr zzo qt hgm rpneh awte o pcjvaa rb axgu cx";
    string prefix = "yigx e wpujledx ohut a ey v de lkzt x juvl";
    string suffix = "h ke rjpskpidwbg zojhc rsdjsi hobbxglyr rp tgh a ";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = " zzo qt hgm rpneh ";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string text = "wrr zzo qt hgm rpneh awte o pcjvaa rb axgu cx";
    string prefix = " zzo qt hgm rpneh awte o pcjvaa rb axgu cx";
    string suffix = "wrr zzo qt hgm rpneh awte o pcjvaa rb axgu";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = " zzo qt hgm rpneh awte o pcjvaa rb axgu cx";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string text = "wrr zzo qt hgm rpneh awte o pcjvaa rb axgu cx";
    string prefix = "wrr zzo qt hgm rpneh awte o pcjvaa rb axgu";
    string suffix = " zzo qt hgm rpneh awte o pcjvaa rb axgu cx";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = "wrr zzo qt hgm rpneh awte o pcjvaa rb axgu cx";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string text = "ab";
    string prefix = "b";
    string suffix = "a";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = "b";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string text = "missidsgssippi";
    string prefix = "proddmise";
    string suffix = "piddccolo";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = "dsgssippi";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string text = "bcd";
    string prefix = "efg";
    string suffix = "hjk";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = "b";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string text = "b";
    string prefix = "x";
    string suffix = "y";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = "b";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string text = "abababbab";
    string prefix = "ababababaab";
    string suffix = "abaababab";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = "aba";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string text = "aaaa aaaaaa";
    string prefix = " qqqqqqqqqq";
    string suffix = " ssss s";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = " ";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string text = "iiiiii";
    string prefix = "a";
    string suffix = "b";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = "i";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string text = "tttt";
    string prefix = "aaa";
    string suffix = "bbb";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = "t";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string text = "bbbb";
    string prefix = "aaaa";
    string suffix = "ccccc";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = "b";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string text = " ";
    string prefix = "a";
    string suffix = "b";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = " ";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string text = "r";
    string prefix = "x";
    string suffix = "b";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = "r";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    string text = "bc";
    string prefix = "d";
    string suffix = "e";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = "b";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    string text = "zz";
    string prefix = "a";
    string suffix = "a";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = "z";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    string text = "b";
    string prefix = "a";
    string suffix = "a";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = "b";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    string text = "bacabadabacabaeabacabadabacaba";
    string prefix = "abacabada";
    string suffix = "bacac";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = "abacabadabaca";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    string text = "az";
    string prefix = "b";
    string suffix = "c";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    string text = "abc";
    string prefix = "e";
    string suffix = "f";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    string text = "abcdefghijklmnopq r s t uvwx";
    string prefix = "abcdefg r s jldf fjd";
    string suffix = "uvwxyz";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = "defghijklmnopq r s t uvwx";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    string text = "bxxxxxefgcdxxxxabxxxxcd";
    string prefix = "ttab";
    string suffix = "efgcdtt";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = "bxxxxxefgcd";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    string text = "cabacbaddadaaddbabccaddaddbdacadbabddbbcdacdcbc";
    string prefix = "dbddaddaaadacadabdaadbbcaadddaaaabcbdabadaabcdcdb";
    string suffix = "dbddaddaaadacadabdaadbbcaadddaaaabcbdabadaabcdcdb";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = "dbabccaddaddbd";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    string text = "hzvkz";
    string prefix = "eto";
    string suffix = "papstvo";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = "h";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    string text = "abcd";
    string prefix = "abc";
    string suffix = "bcd";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = "abcd";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    string text = "abdbaabcba";
    string prefix = "ab";
    string suffix = "ba";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = "abcba";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    string text = "aafdasdfasdaasfdasdffdasdfasdaafdasdfasd";
    string prefix = "afasdfatrhertghsfsdhsdfaassaafdasdfasddfasdfasdf";
    string suffix = "aasdfasdfaafdasdasfasdfasfdasfdyrefasdaafdasdfasda";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = "asdfasdaas";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    string text = "aaaaa";
    string prefix = "f";
    string suffix = "aaaa";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaa";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    string text = "z";
    string prefix = "x";
    string suffix = "y";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = "z";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    string text = "b";
    string prefix = "c";
    string suffix = "d";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = "b";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    string text = "bcd";
    string prefix = "x";
    string suffix = "z";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = "b";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    string text = "xxxeabxxxfeaxxx";
    string prefix = "dfe";
    string suffix = "abc";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = "fea";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    string text = "axxxxxxxtyyyaxxxxkkktyyy";
    string prefix = "llla";
    string suffix = "tlll";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = "axxxxkkkt";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    string text = "ab";
    string prefix = "fgg";
    string suffix = "ghhh";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    string text = "aba";
    string prefix = "xxx";
    string suffix = "aba";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = "aba";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    string text = "bb";
    string prefix = "a";
    string suffix = "c";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = "b";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    string text = "bcd";
    string prefix = "gf";
    string suffix = "ij";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = "b";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    string text = "chetan";
    string prefix = "he";
    string suffix = "ta";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = "heta";
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    string text = "havak";
    string prefix = "eto";
    string suffix = "papstvo";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    string text = "zbcdefghjik";
    string prefix = "q";
    string suffix = "zbcdefghjik";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = "zbcdefghjik";
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    string text = "ab";
    string prefix = "x";
    string suffix = "y";
    TemplateMatching* pObj = new TemplateMatching();
    clock_t start = clock();
    string result = pObj->bestMatch(text, prefix, suffix);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=15820587&rd=13508&pm=9943
********************************************************************************
#include <algorithm>
#include <functional>
#include <utility>
 
#include <cmath>
#include <numeric>
#include <complex>
 
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <cassert>
 
#include <iomanip>
#include <sstream>
 
#include <cctype>
#include <cstring>
#include <string>
 
#include <vector>
#include <queue>
#include <stack>
#include <deque>
#include <list>
#include <set>
#include <map>
 
#include <ext/hash_map>
#include <ext/hash_set>
 
using namespace std;
using namespace __gnu_cxx;
 
#define min(x, y) ((x) < (y) ? (x) : (y))
 
class TemplateMatching {
public:
  string bestMatch(string text, string prefix, string suffix) {
    string result = "";
    int x = -1, y = -1;
    for (int i = 0; i < text.length(); ++i) {
      for (int j = i; j < text.length(); ++j) {
        string s = text.substr(i, j - i + 1);
        int a = min(s.length(), prefix.length());
        while (a > 0) {
          if (s.substr(0, a) == prefix.substr(prefix.length() - a)) {
            break;
          }
          --a;
        }
        int b = min(s.length(), suffix.length());
        while (b > 0) {
          if (s.substr(s.length() - b) == suffix.substr(0, b)) {
            break;
          }
          --b;
        }
        if ((a + b > x + y) || ((a + b == x + y) && ((a > x) || ((a == x) && (s < result))))) {
          result = s;
          x = a;
          y = b;
        }
      }
    }
    return result;
  }
};

********************************************************************************
*******************************************************************************/