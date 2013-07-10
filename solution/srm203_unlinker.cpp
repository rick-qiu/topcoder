/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2912
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

class UnLinker {
public:
    string clean(string text);
};

string UnLinker::clean(string text) {
    string ret;
    return ret;
}


int test0() {
    string text = "espihttp://www.tv.org.superwww.cali.comaladocious";
    UnLinker* pObj = new UnLinker();
    clock_t start = clock();
    string result = pObj->clean(text);
    clock_t end = clock();
    delete pObj;
    string expected = "espiOMIT1aladocious";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string text = "check www.foo.com 4 www.foo.com www.scoopz.com";
    UnLinker* pObj = new UnLinker();
    clock_t start = clock();
    string result = pObj->clean(text);
    clock_t end = clock();
    delete pObj;
    string expected = "check OMIT1 4 OMIT2 OMIT3";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string text = "check www.foo.com 4 www.foo.comwww.scoopz.com";
    UnLinker* pObj = new UnLinker();
    clock_t start = clock();
    string result = pObj->clean(text);
    clock_t end = clock();
    delete pObj;
    string expected = "check OMIT1 4 OMIT2";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string text = "check www.foo.com 4 www.foo.comhttp://scoopz.com";
    UnLinker* pObj = new UnLinker();
    clock_t start = clock();
    string result = pObj->clean(text);
    clock_t end = clock();
    delete pObj;
    string expected = "check OMIT1 4 OMIT2OMIT3";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string text = "http://411.com goodz 4 www.733t.com;
    UnLinker* pObj = new UnLinker();
    clock_t start = clock();
    string result = pObj->clean(text);
    clock_t end = clock();
    delete pObj;
    string expected = "OMIT1 goodz 4 OMIT2, 2OMIT3";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string text = "http.//say.org;
    UnLinker* pObj = new UnLinker();
    clock_t start = clock();
    string result = pObj->clean(text);
    clock_t end = clock();
    delete pObj;
    string expected = "http.//say.org,OMIT1,www.comhttp://.tv";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string text = "D.eduinfoox.comDHwww.ttp://htwww./www.hyGqowP8L zX";
    UnLinker* pObj = new UnLinker();
    clock_t start = clock();
    string result = pObj->clean(text);
    clock_t end = clock();
    delete pObj;
    string expected = "D.eduinfoox.comDHwww.ttp://htwww./www.hyGqowP8L zX";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string text = "O4:http://www.infoY0pBwww..HxbmX5ID.edueduE9www.os";
    UnLinker* pObj = new UnLinker();
    clock_t start = clock();
    string result = pObj->clean(text);
    clock_t end = clock();
    delete pObj;
    string expected = "O4:OMIT1eduE9www.os";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string text = "1uCJ7Dwww. Sxgz.tvAd.tvJCyAwww..http://www.tvDgHvH";
    UnLinker* pObj = new UnLinker();
    clock_t start = clock();
    string result = pObj->clean(text);
    clock_t end = clock();
    delete pObj;
    string expected = "1uCJ7Dwww. Sxgz.tvAd.tvJCyAwww..OMIT1DgHvH";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string text = "W.comqV.info.cW.http://www.p.tva.com:opwww.vTgf5jC";
    UnLinker* pObj = new UnLinker();
    clock_t start = clock();
    string result = pObj->clean(text);
    clock_t end = clock();
    delete pObj;
    string expected = "W.comqV.info.cW.OMIT1:opwww.vTgf5jC";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string text = "C.orgsXP2.eduS.orgw.http://wwwww.tt.tv/www.CxdPc8g";
    UnLinker* pObj = new UnLinker();
    clock_t start = clock();
    string result = pObj->clean(text);
    clock_t end = clock();
    delete pObj;
    string expected = "C.orgsXP2.eduS.orgw.OMIT1/www.CxdPc8g";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string text = "yL.Z wOlw.infofwww.7.infottp://;
    UnLinker* pObj = new UnLinker();
    clock_t start = clock();
    string result = pObj->clean(text);
    clock_t end = clock();
    delete pObj;
    string expected = "yL.Z wOlw.infofOMIT1ttp://,2w81www.mqoS0uTimq";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string text = "OH;
    UnLinker* pObj = new UnLinker();
    clock_t start = clock();
    string result = pObj->clean(text);
    clock_t end = clock();
    delete pObj;
    string expected = "OH,Z,6Y5H5V3CwwOMIT1tp://com7Bg";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string text = ".t.inwww.oihk1;
    UnLinker* pObj = new UnLinker();
    clock_t start = clock();
    string result = pObj->clean(text);
    clock_t end = clock();
    delete pObj;
    string expected = ".t.inwww.oihk1,8j873OMIT1/TGfBBEBvqCn1TpO5";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string text = "2jhz rjWp48TMlAq;
    UnLinker* pObj = new UnLinker();
    clock_t start = clock();
    string result = pObj->clean(text);
    clock_t end = clock();
    delete pObj;
    string expected = "2jhz rjWp48TMlAq,dfU SElM,TtRwww.o/.org.edu..tvouT";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string text = "jht.infonfo.ww.nx.mLtj7w.tvOwww.http://www.Yhe yq";
    UnLinker* pObj = new UnLinker();
    clock_t start = clock();
    string result = pObj->clean(text);
    clock_t end = clock();
    delete pObj;
    string expected = "jht.infonfo.ww.nx.mLtj7w.tvOwww.http://www.Yhe yq";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string text = "J/.tvO3d L.4A .tvLcMYwww.N.tvp://w.orgrr.iwww.. UQ";
    UnLinker* pObj = new UnLinker();
    clock_t start = clock();
    string result = pObj->clean(text);
    clock_t end = clock();
    delete pObj;
    string expected = "J/.tvO3d L.4A .tvLcMYOMIT1p://w.orgrr.iwww.. UQ";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string text = "http://ommQwTDg.orgJDWght.org/www..edup.tvT4 ZUj0;
    UnLinker* pObj = new UnLinker();
    clock_t start = clock();
    string result = pObj->clean(text);
    clock_t end = clock();
    delete pObj;
    string expected = "OMIT1/OMIT2T4 ZUj0,";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string text = "www..qhttp://ww.dThttp://Lh.edutNU4Nx.tvW.info Ou7";
    UnLinker* pObj = new UnLinker();
    clock_t start = clock();
    string result = pObj->clean(text);
    clock_t end = clock();
    delete pObj;
    string expected = "www..qhttp://ww.dTOMIT1 Ou7";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string text = "NYG65XNd.tv.PPw.hywww.uwm.com.comw.http://www.TUlc";
    UnLinker* pObj = new UnLinker();
    clock_t start = clock();
    string result = pObj->clean(text);
    clock_t end = clock();
    delete pObj;
    string expected = "NYG65XNd.tv.PPw.hyOMIT1w.http://www.TUlc";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string text = ".combdfC1htwww./www.twww./www...tvQY28ig.tvinfoJXS";
    UnLinker* pObj = new UnLinker();
    clock_t start = clock();
    string result = pObj->clean(text);
    clock_t end = clock();
    delete pObj;
    string expected = ".combdfC1htwww./www.twww./OMIT1infoJXS";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string text = "oHerJyi.infotvAN1rf http://www.wwww.ww.MfBhG www.k";
    UnLinker* pObj = new UnLinker();
    clock_t start = clock();
    string result = pObj->clean(text);
    clock_t end = clock();
    delete pObj;
    string expected = "oHerJyi.infotvAN1rf http://www.wwww.ww.MfBhG www.k";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string text = "/QxZQ.info qwww.hwww.//ww.infoB;
    UnLinker* pObj = new UnLinker();
    clock_t start = clock();
    string result = pObj->clean(text);
    clock_t end = clock();
    delete pObj;
    string expected = "/QxZQ.info qwww.hwww.//ww.infoB ,q.info1mi.tvww.HR";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string text = "H 2.tv2HPF.orghttwww.vww.g7GMhttp:/www...eduJO/AzF";
    UnLinker* pObj = new UnLinker();
    clock_t start = clock();
    string result = pObj->clean(text);
    clock_t end = clock();
    delete pObj;
    string expected = "H 2.tv2HPF.orghttwww.vww.g7GMhttp:/OMIT1JO/AzF";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string text = "NJjZOJHmiog3wwhttp://91www.info.orww.orgTF.tvKkFWs";
    UnLinker* pObj = new UnLinker();
    clock_t start = clock();
    string result = pObj->clean(text);
    clock_t end = clock();
    delete pObj;
    string expected = "NJjZOJHmiog3wwOMIT1KkFWs";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string text = "q;
    UnLinker* pObj = new UnLinker();
    clock_t start = clock();
    string result = pObj->clean(text);
    clock_t end = clock();
    delete pObj;
    string expected = "q,Rp3.tvt.ewwOMIT15:.edup.tvwww.www.AW";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string text = ".org.com.xKubCUVy.tvhttp://.tvIWDA http://www.KO7Y";
    UnLinker* pObj = new UnLinker();
    clock_t start = clock();
    string result = pObj->clean(text);
    clock_t end = clock();
    delete pObj;
    string expected = ".org.com.xKubCUVy.tvhttp://.tvIWDA http://www.KO7Y";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string text = ".orgRwww.http://.orgeFG/l2t www.w.iwww.vFh.eduxbMv";
    UnLinker* pObj = new UnLinker();
    clock_t start = clock();
    string result = pObj->clean(text);
    clock_t end = clock();
    delete pObj;
    string expected = ".orgRwww.http://.orgeFG/l2t OMIT1xbMv";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string text = "qbw.t.eduwww.eduwwww.pTrrGE:8m7ret0.o.orgOv:SnJuOI";
    UnLinker* pObj = new UnLinker();
    clock_t start = clock();
    string result = pObj->clean(text);
    clock_t end = clock();
    delete pObj;
    string expected = "qbw.t.eduwww.eduwwww.pTrrGE:8m7ret0.o.orgOv:SnJuOI";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string text = "JUP OQh.infoWrh9fG.orgttphttp://i.comwww.KLwwwww.X";
    UnLinker* pObj = new UnLinker();
    clock_t start = clock();
    string result = pObj->clean(text);
    clock_t end = clock();
    delete pObj;
    string expected = "JUP OQh.infoWrh9fG.orgttpOMIT1www.KLwwwww.X";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string text = "rM5jhttp://.comBtw.comghttp://scm.edu5wSh.cowww..m";
    UnLinker* pObj = new UnLinker();
    clock_t start = clock();
    string result = pObj->clean(text);
    clock_t end = clock();
    delete pObj;
    string expected = "rM5jOMIT1gOMIT25wSh.cowww..m";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string text = "tE0prTc7 Jva CTl.tv.tv64Rbowww.EPwXqhttp://w.infoR";
    UnLinker* pObj = new UnLinker();
    clock_t start = clock();
    string result = pObj->clean(text);
    clock_t end = clock();
    delete pObj;
    string expected = "tE0prTc7 Jva CTl.tv.tv64Rbowww.EPwXqOMIT1R";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string text = "www.JIh.com//bNB.wwwww.rg0s5h tbU.tvHO4F.tvkU.orgn";
    UnLinker* pObj = new UnLinker();
    clock_t start = clock();
    string result = pObj->clean(text);
    clock_t end = clock();
    delete pObj;
    string expected = "OMIT1//bNB.wwwww.rg0s5h tbU.tvHO4F.tvkU.orgn";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string text = "f.eduw.1v.orgc 4e/nqKiuAmqUmwww..cwww.tp://B.tvur7";
    UnLinker* pObj = new UnLinker();
    clock_t start = clock();
    string result = pObj->clean(text);
    clock_t end = clock();
    delete pObj;
    string expected = "f.eduw.1v.orgc 4e/nqKiuAmqUmwww..cwww.tp://B.tvur7";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string text = "UbE2l;
    UnLinker* pObj = new UnLinker();
    clock_t start = clock();
    string result = pObj->clean(text);
    clock_t end = clock();
    delete pObj;
    string expected = "UbE2l,jy.comww.w.orgin.comvwwwww..6:L4FgSDQ1rh,ph,";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string text = "http.orgww..e.tvYdnwMNE4jhttp://www.m1www..vaFvxQh";
    UnLinker* pObj = new UnLinker();
    clock_t start = clock();
    string result = pObj->clean(text);
    clock_t end = clock();
    delete pObj;
    string expected = "http.orgww..e.tvYdnwMNE4jhttp://www.m1www..vaFvxQh";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string text = ";
    UnLinker* pObj = new UnLinker();
    clock_t start = clock();
    string result = pObj->clean(text);
    clock_t end = clock();
    delete pObj;
    string expected = ",,www.Hwww.www.j:jFs OMIT119X ";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string text = "hwww.rg/www..infoOe.infoZ8www.org .org.Y4Q3 www.cy";
    UnLinker* pObj = new UnLinker();
    clock_t start = clock();
    string result = pObj->clean(text);
    clock_t end = clock();
    delete pObj;
    string expected = "hwww.rg/OMIT1 .org.Y4Q3 www.cy";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string text = ".bTNh.tv://www.whttp://www.I3gnYwww.A07Rwww.f.tv5N";
    UnLinker* pObj = new UnLinker();
    clock_t start = clock();
    string result = pObj->clean(text);
    clock_t end = clock();
    delete pObj;
    string expected = ".bTNh.tv://www.wOMIT15N";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string text = "J.1.comxgFhttp://p:.tvomJ3YFBQ/eI.comykDcPwww.eaVI";
    UnLinker* pObj = new UnLinker();
    clock_t start = clock();
    string result = pObj->clean(text);
    clock_t end = clock();
    delete pObj;
    string expected = "J.1.comxgFhttp://p:.tvomJ3YFBQ/eI.comykDcPwww.eaVI";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string text = "N.edu://www.w.A4/knwNwww.RwI.edusK lwww.mowww.eduY";
    UnLinker* pObj = new UnLinker();
    clock_t start = clock();
    string result = pObj->clean(text);
    clock_t end = clock();
    delete pObj;
    string expected = "N.edu://www.w.A4/knwNOMIT1sK lOMIT2Y";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string text = "oP0ye.edu.com://www. hrwww..com://cwww.iG0Dq:.Vlll";
    UnLinker* pObj = new UnLinker();
    clock_t start = clock();
    string result = pObj->clean(text);
    clock_t end = clock();
    delete pObj;
    string expected = "oP0ye.edu.com://www. hrwww..com://cwww.iG0Dq:.Vlll";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string text = "1Rql .com.I.tvtvw.comAhttp://www.zZhttp://www.hT.C";
    UnLinker* pObj = new UnLinker();
    clock_t start = clock();
    string result = pObj->clean(text);
    clock_t end = clock();
    delete pObj;
    string expected = "1Rql .com.I.tvtvw.comAhttp://www.zZhttp://www.hT.C";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string text = "PeBKgD P3http:///www.rgtwww.tvc4a.com.tvf2gAZwww. ";
    UnLinker* pObj = new UnLinker();
    clock_t start = clock();
    string result = pObj->clean(text);
    clock_t end = clock();
    delete pObj;
    string expected = "PeBKgD P3http:///OMIT1f2gAZwww. ";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string text = "IC9KoiHYr Gwww.F.comJJ e kwww.wwwhttp.tv.infouWZiD";
    UnLinker* pObj = new UnLinker();
    clock_t start = clock();
    string result = pObj->clean(text);
    clock_t end = clock();
    delete pObj;
    string expected = "IC9KoiHYr GOMIT1JJ e kOMIT2uWZiD";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string text = "Zu7yiI4 .eduuj.o.orgww.www.ht.edwww.orgpll.xx6uL3O";
    UnLinker* pObj = new UnLinker();
    clock_t start = clock();
    string result = pObj->clean(text);
    clock_t end = clock();
    delete pObj;
    string expected = "Zu7yiI4 .eduuj.o.orgww.OMIT1pll.xx6uL3O";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string text = "Lcx.com.K:uhttp:/www.o.comgNXoVH7http://www.7/sDdN";
    UnLinker* pObj = new UnLinker();
    clock_t start = clock();
    string result = pObj->clean(text);
    clock_t end = clock();
    delete pObj;
    string expected = "Lcx.com.K:uhttp:/OMIT1gNXoVH7http://www.7/sDdN";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string text = "/wu.eduwww.edu://bY8dehttp://p://.tv.infowww.OM;
    UnLinker* pObj = new UnLinker();
    clock_t start = clock();
    string result = pObj->clean(text);
    clock_t end = clock();
    delete pObj;
    string expected = "/wu.eduwww.edu://bY8dehttp://p://.tv.infowww.OM, J";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string text = "Qwww.6UhsS.com.ww.nW2I.http://www.foPn4Qv9w.orgIqh";
    UnLinker* pObj = new UnLinker();
    clock_t start = clock();
    string result = pObj->clean(text);
    clock_t end = clock();
    delete pObj;
    string expected = "QOMIT1.ww.nW2I.OMIT2Iqh";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string text = "Ce8CT0MLNm NKhttpwww.omwww.infoaukjhttp://..comYLS";
    UnLinker* pObj = new UnLinker();
    clock_t start = clock();
    string result = pObj->clean(text);
    clock_t end = clock();
    delete pObj;
    string expected = "Ce8CT0MLNm NKhttpOMIT1aukjOMIT2YLS";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string text = "http://www.www.com/www";
    UnLinker* pObj = new UnLinker();
    clock_t start = clock();
    string result = pObj->clean(text);
    clock_t end = clock();
    delete pObj;
    string expected = "OMIT1/www";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string text = "www.link.com.link.com";
    UnLinker* pObj = new UnLinker();
    clock_t start = clock();
    string result = pObj->clean(text);
    clock_t end = clock();
    delete pObj;
    string expected = "OMIT1";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string text = "OMIT OMIT www.sdf.com";
    UnLinker* pObj = new UnLinker();
    clock_t start = clock();
    string result = pObj->clean(text);
    clock_t end = clock();
    delete pObj;
    string expected = "OMIT OMIT OMIT1";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string text = "espihttp://www.tvporg";
    UnLinker* pObj = new UnLinker();
    clock_t start = clock();
    string result = pObj->clean(text);
    clock_t end = clock();
    delete pObj;
    string expected = "espiOMIT1porg";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string text = "abchttp:www.abc.com";
    UnLinker* pObj = new UnLinker();
    clock_t start = clock();
    string result = pObj->clean(text);
    clock_t end = clock();
    delete pObj;
    string expected = "abchttp:OMIT1";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string text = "hello http://aaacom hello";
    UnLinker* pObj = new UnLinker();
    clock_t start = clock();
    string result = pObj->clean(text);
    clock_t end = clock();
    delete pObj;
    string expected = "hello http://aaacom hello";
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=7446789&rd=5849&pm=2912
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
 
class UnLinker
{
  public:
 
    bool matches(char *haystack, char *prefix)
    {
      while(*haystack && *prefix && *haystack == *prefix)
      {
        ++haystack; ++prefix;
      }
      if(!*prefix) return true;
      return false;
    }
 
    int isSuffix(char *string)
    {
      char proper[5][10] = { ".com", ".org", ".edu", ".info", ".tv" };
      REP(i, 5)
        if(matches(string, proper[i]))
          return strlen(proper[i]);
      return 0;
    }
 
    bool validchar(char ch)
    {
      if('A' <= ch && ch <= 'Z') return true;
      if('a' <= ch && ch <= 'z') return true;
      if('0' <= ch && ch <= '9') return true;
      if(ch == '.') return true;
      return false;
    }
 
    int maxLength(char *string)
    {
      char *org = string;
      int res = 0;
      if(matches(string, "http://")) 
        string += 7;
      else if(matches(string, "http://www."))
        string += 11;
      else if(matches(string, "www."))
        string += 4;
      else
        return 0;
 
      if(!validchar(*string)) return 0;
      ++string;
      
      while(validchar(*string))
      {
        int k = isSuffix(string);
        if(k > 0)
          res = string - org + k; 
        ++string;
      }
      return res;
    }
    
    string clean(string text)
    {
      char raw[1024];
      int outlen = 0;
      char output[1024];
      strcpy(raw, text.c_str());
      int i = 0, omits = 0;
      while(raw[i])
      {
        int maxlen = maxLength(raw+i);
        // not a part of weblink
        if(maxlen == 0)
        {
          outlen += sprintf(output+outlen, "%c", raw[i]);
          ++i;
        }
        else
        {
          ++omits;
          outlen += sprintf(output+outlen, "OMIT%d", omits);
          i += maxlen;
        }
      }
      return output;
    }
 
};

********************************************************************************
*******************************************************************************/