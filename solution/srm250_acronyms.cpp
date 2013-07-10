/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4589
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

class Acronyms {
public:
    string acronize(vector<string> document);
};

string Acronyms::acronize(vector<string> document) {
    string ret;
    return ret;
}


int test0() {
    vector<string> document = {"We the people of the United States of America."};
    Acronyms* pObj = new Acronyms();
    clock_t start = clock();
    string result = pObj->acronize(document);
    clock_t end = clock();
    delete pObj;
    string expected = "We the people of the USA.";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> document = {"Don't", "worry.", "Be", "Happy!"};
    Acronyms* pObj = new Acronyms();
    clock_t start = clock();
    string result = pObj->acronize(document);
    clock_t end = clock();
    delete pObj;
    string expected = "Don't worry. BH!";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> document = {"Entering contests at TopCoder, Inc.", "is a good way to develop your skills."};
    Acronyms* pObj = new Acronyms();
    clock_t start = clock();
    string result = pObj->acronize(document);
    clock_t end = clock();
    delete pObj;
    string expected = "Entering contests at TCI. is a good way to develop your skills.";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> document = {"Afternoon Tea"};
    Acronyms* pObj = new Acronyms();
    clock_t start = clock();
    string result = pObj->acronize(document);
    clock_t end = clock();
    delete pObj;
    string expected = "Afternoon Tea";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> document = {"Working for the Environmental Protection Agency", "is hard work."};
    Acronyms* pObj = new Acronyms();
    clock_t start = clock();
    string result = pObj->acronize(document);
    clock_t end = clock();
    delete pObj;
    string expected = "Working for the EPA is hard work.";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> document = {"Working at the United States Postal Service", "in the United States of America", "is a satisfying experience."};
    Acronyms* pObj = new Acronyms();
    clock_t start = clock();
    string result = pObj->acronize(document);
    clock_t end = clock();
    delete pObj;
    string expected = "Working at the USPS in the USA is a satisfying experience.";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> document = {"I would like a Bacon, Lettuce, and Tomato", "sandwich. I don't", "like Pickles, Onions, and Tomatoes."};
    Acronyms* pObj = new Acronyms();
    clock_t start = clock();
    string result = pObj->acronize(document);
    clock_t end = clock();
    delete pObj;
    string expected = "I would like a BLT sandwich. I don't like POT.";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> document = {"a A & a & a B"};
    Acronyms* pObj = new Acronyms();
    clock_t start = clock();
    string result = pObj->acronize(document);
    clock_t end = clock();
    delete pObj;
    string expected = "a A & a & a B";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> document = {"The First word can't be included. In", "A sequence, that is."};
    Acronyms* pObj = new Acronyms();
    clock_t start = clock();
    string result = pObj->acronize(document);
    clock_t end = clock();
    delete pObj;
    string expected = "The First word can't be included. In A sequence, that is.";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> document = {"A Test & Test & & TEst"};
    Acronyms* pObj = new Acronyms();
    clock_t start = clock();
    string result = pObj->acronize(document);
    clock_t end = clock();
    delete pObj;
    string expected = "A TT & & TEst";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> document = {"This is a TEST tEST Test. ", ".Go Test"};
    Acronyms* pObj = new Acronyms();
    clock_t start = clock();
    string result = pObj->acronize(document);
    clock_t end = clock();
    delete pObj;
    string expected = "This is a TESTT. .Go Test";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> document = {"This is A Hard cAse Indeed"};
    Acronyms* pObj = new Acronyms();
    clock_t start = clock();
    string result = pObj->acronize(document);
    clock_t end = clock();
    delete pObj;
    string expected = "This is AHI";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> document = {"fg"};
    Acronyms* pObj = new Acronyms();
    clock_t start = clock();
    string result = pObj->acronize(document);
    clock_t end = clock();
    delete pObj;
    string expected = "fg";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> document = {"V"};
    Acronyms* pObj = new Acronyms();
    clock_t start = clock();
    string result = pObj->acronize(document);
    clock_t end = clock();
    delete pObj;
    string expected = "V";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> document = {"djq. u E. ", "absrcsal.xRirSupI."};
    Acronyms* pObj = new Acronyms();
    clock_t start = clock();
    string result = pObj->acronize(document);
    clock_t end = clock();
    delete pObj;
    string expected = "djq. u E. absrcsal.xRirSupI.";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> document = {"yVvm aZOv InhHx", "sXnh MHzjfbrfv k s .xks hxlYfPNf B"};
    Acronyms* pObj = new Acronyms();
    clock_t start = clock();
    string result = pObj->acronize(document);
    clock_t end = clock();
    delete pObj;
    string expected = "yVvm aZOv IHMH k s .xks hxlYfPNf B";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> document = {"ibmpdncxUopXk"};
    Acronyms* pObj = new Acronyms();
    clock_t start = clock();
    string result = pObj->acronize(document);
    clock_t end = clock();
    delete pObj;
    string expected = "ibmpdncxUopXk";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> document = {"hSMF uyxV.Q WQXPb", "wP"};
    Acronyms* pObj = new Acronyms();
    clock_t start = clock();
    string result = pObj->acronize(document);
    clock_t end = clock();
    delete pObj;
    string expected = "hSMF uyxV.Q WQXPb wP";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> document = {"O y fou ", "zpubbdbkp"};
    Acronyms* pObj = new Acronyms();
    clock_t start = clock();
    string result = pObj->acronize(document);
    clock_t end = clock();
    delete pObj;
    string expected = "O y fou zpubbdbkp";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> document = {"Ejc", "GjIFMyI"};
    Acronyms* pObj = new Acronyms();
    clock_t start = clock();
    string result = pObj->acronize(document);
    clock_t end = clock();
    delete pObj;
    string expected = "Ejc GjIFMyI";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> document = {"PELL NM AS .XHOJAXYQZgRXRuXMR VX EZ"};
    Acronyms* pObj = new Acronyms();
    clock_t start = clock();
    string result = pObj->acronize(document);
    clock_t end = clock();
    delete pObj;
    string expected = "PELL NMASVX EZ";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> document = {"WGDC.XQCBUW"};
    Acronyms* pObj = new Acronyms();
    clock_t start = clock();
    string result = pObj->acronize(document);
    clock_t end = clock();
    delete pObj;
    string expected = "WGDC.XQCBUW";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> document = {"fX e MG LYI IMa DfOn FNJd qVEOUFFVJIV.OB Kj"};
    Acronyms* pObj = new Acronyms();
    clock_t start = clock();
    string result = pObj->acronize(document);
    clock_t end = clock();
    delete pObj;
    string expected = "fX e MGLYIIMDOFNJ qVEOUFFVJIV.OB Kj";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> document = {"f he.fh a p Ej Yf vzthcuwD"};
    Acronyms* pObj = new Acronyms();
    clock_t start = clock();
    string result = pObj->acronize(document);
    clock_t end = clock();
    delete pObj;
    string expected = "f he.fh a p EY vzthcuwD";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> document = {"vtr vwqjnpgorf ab UdGBq. n D kczf Vt", "meoQf.tyxrjlP.v.ha ch vs hv oxtSxE. b yhk .v s K", "Timvz"};
    Acronyms* pObj = new Acronyms();
    clock_t start = clock();
    string result = pObj->acronize(document);
    clock_t end = clock();
    delete pObj;
    string expected = "vtr vwqjnpgorf ab UdGBq. n D kczf Vt meoQf.tyxrjlP.v.ha ch vs hv oxtSxE. b yhk .v s KT";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> document = {"VCifY MVir. csg YUKM vcT Pf ql M.nY. kn I nbDY", "osSRk.yDG"};
    Acronyms* pObj = new Acronyms();
    clock_t start = clock();
    string result = pObj->acronize(document);
    clock_t end = clock();
    delete pObj;
    string expected = "VCifY MVir. csg YUKM vcT PMYI nbDY osSRk.yDG";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> document = {"o.mg U NZFPVF.Knw j ErFE rOlP XaKVqEcTsW C bfUwX", "Q .a br TEVIA Ban.J"};
    Acronyms* pObj = new Acronyms();
    clock_t start = clock();
    string result = pObj->acronize(document);
    clock_t end = clock();
    delete pObj;
    string expected = "o.mg UNZFPVFK j EFEXKVETWCQ .a br TEVIA Ban.J";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> document = {"HKt uQXGXAWTGWMH dNHGYpTC CrMYXLTBLw LT C ORUDUT.", ".A Wt F.JUGF"};
    Acronyms* pObj = new Acronyms();
    clock_t start = clock();
    string result = pObj->acronize(document);
    clock_t end = clock();
    delete pObj;
    string expected = "HKt uQXGXAWTGWMH dNHGYpTC CMYXLTBLLTCORUDUTW F.JUGF";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> document = {"PK xnJHdmjOlKTnc Xw H OD L"};
    Acronyms* pObj = new Acronyms();
    clock_t start = clock();
    string result = pObj->acronize(document);
    clock_t end = clock();
    delete pObj;
    string expected = "PK xnJHdmjOlKTnc XHOD L";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> document = {"Vm.R iEN .v f ugM VQcojs nujGPsuaqRH kjIGby M", "zSJ F utHRv P XHFfUbq phNy"};
    Acronyms* pObj = new Acronyms();
    clock_t start = clock();
    string result = pObj->acronize(document);
    clock_t end = clock();
    delete pObj;
    string expected = "Vm.R iEN .v f ugM VQcojs nujGPsuaqRH kjIGby M zSJ FPXHFU phNy";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> document = {"Y a T jwpW.UxbkJXO .D.G. gCJjRg pY CnC iGO Q", "Fr.m T Y XsyBdY qDxNMEMq"};
    Acronyms* pObj = new Acronyms();
    clock_t start = clock();
    string result = pObj->acronize(document);
    clock_t end = clock();
    delete pObj;
    string expected = "Y a T jwpW.UxbkJXO .D.G. gCJjRg pY CCQFTY XsyBdY qDxNMEMq";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> document = {"S.zEovnLdg.qh i EG QLd uFLaHxVl ePP YlYb.q.o", "crOeVTn.iuCLj e P c vF iPvR wjcz.wgxomhx"};
    Acronyms* pObj = new Acronyms();
    clock_t start = clock();
    string result = pObj->acronize(document);
    clock_t end = clock();
    delete pObj;
    string expected = "S.zEovnLdg.qh i EGQL uFLaHxVl ePP YlYb.q.o crOeVTn.iuCLj e P c vF iPvR wjcz.wgxomhx";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> document = {"co. uk N X.aUkxZM. MG A.QBHU pZEIJOD olZ.JbSJGY"};
    Acronyms* pObj = new Acronyms();
    clock_t start = clock();
    string result = pObj->acronize(document);
    clock_t end = clock();
    delete pObj;
    string expected = "co. uk NXUZMMGAQBHU pZEIJOD olZ.JbSJGY";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> document = {"p nlQUGIht TAAnuRa.pCKea. . XAYbL tABSwO.NbH", "uf T. quBlnhYU jm . Hn pTGMRPGoC E. KK guAVFfb", "Pk.Q"};
    Acronyms* pObj = new Acronyms();
    clock_t start = clock();
    string result = pObj->acronize(document);
    clock_t end = clock();
    delete pObj;
    string expected = "p nlQUGIht TAAnuRa.pCKea. . XAYbL tABSwO.NbH uf T. quBlnhYU jm . HEKKPQ";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> document = {"zgd t fvonY q wbSysrogk WoUd uiu hj ldvr H", "bcyHt. z . ."};
    Acronyms* pObj = new Acronyms();
    clock_t start = clock();
    string result = pObj->acronize(document);
    clock_t end = clock();
    delete pObj;
    string expected = "zgd t fvonY q wbSysrogk WoUd uiu hj ldvr H bcyHt. z . .";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> document = {"OObj I.l.WH.Q d W zzgYHXVeJiHjX hwCT usay.mw t", "f N q.m P n IX. WTPPx.kR"};
    Acronyms* pObj = new Acronyms();
    clock_t start = clock();
    string result = pObj->acronize(document);
    clock_t end = clock();
    delete pObj;
    string expected = "OObj IWHQW zzgYHXVeJiHjX hwCT usay.mw t f N q.m PIX. WTPPx.kR";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> document = {"TWG PAWN CQjbOYZ S SL SD. IGV PHRB V x.ESA.XmCX", ".B BY HIII.W V a .zQ CQPIysPHYNFBBWMSK", "FGUIRObUWaSYNP T"};
    Acronyms* pObj = new Acronyms();
    clock_t start = clock();
    string result = pObj->acronize(document);
    clock_t end = clock();
    delete pObj;
    string expected = "TWG PAWNCQOYZSSLSDIGV PHRB V x.ESA.XmCX .B BYHIIIWV a .zQ CQPIPHYNFBBWMSKFGUIROUWSYNP T";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> document = {"Don't", "worry.", "Be", "Happy!"};
    Acronyms* pObj = new Acronyms();
    clock_t start = clock();
    string result = pObj->acronize(document);
    clock_t end = clock();
    delete pObj;
    string expected = "Don't worry. BH!";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> document = {"A Test & Test & & TEst"};
    Acronyms* pObj = new Acronyms();
    clock_t start = clock();
    string result = pObj->acronize(document);
    clock_t end = clock();
    delete pObj;
    string expected = "A TT & & TEst";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=10190099&rd=7225&pm=4589
********************************************************************************
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h> 
#include <algorithm> 
#include <vector> 
#include <string> 
#include <stack> 
#include <queue> 
#include <map> 
#include <set> 
#include <iterator> 
#include <iostream> 
#include <functional> 
#include <sstream> 
 
using namespace std; 
 
vector<string> tokenize(string s, string ch) 
{ 
  int p,p2; 
  vector<string> ret; 
  for( p = 0; p < s.size(); p = p2+1 ) 
  { 
    p2 = s.find(ch, p); 
    if( p2 == -1 ) p2 = s.size(); 
    if( p2-p > 0 ) ret.push_back( s.substr(p, p2-p) ); 
  } 
  return ret;  
} 
 
class Acronyms  
{ 
  public: 
  string acronize(vector <string> doc) 
  { 
    int i,j,k,m,cnt,last; 
    string ret,p,s; 
    vector < string > sent,wrds; 
 
    for(i=0;i<doc.size();i++) 
    { 
      if(i) 
        p+=" "; 
      p+=doc[i]; 
    } 
 
    sent = tokenize(p , "  "); 
 
    for(i=0;i<sent.size();i++) 
    { 
      if( sent[i][0] == ' ' ) 
        sent[i].erase( sent[i].begin() , sent[i].begin() + 1 ); 
 
      s = sent[i]; 
 
      wrds = tokenize(sent[i] , " "); 
 
      for(j=1;j<wrds.size();j++) 
      { 
        if( !isupper(wrds[j][0]) ) 
          continue; 
 
        p.resize(0); 
        for(k=0;k<wrds[j].size();k++) 
          if( isupper( wrds[j][k] )) 
            p += wrds[j][k]; 
 
        if( !isalpha(wrds[j][ wrds[j].size() -1 ]) ) 
          p+= wrds[j][ wrds[j].size() -1 ]; 
 
        last = -1; 
 
        for(k=j+1 , cnt = 0;k<wrds.size();k++) 
        { 
          if( !isupper(wrds[k][0]) ) 
          { 
            cnt++; 
            if( cnt >= 2 ) 
              break; 
 
            continue; 
          } 
 
          cnt = 0; 
 
          for(m=0;m<wrds[k].size();m++) 
            if( isupper( wrds[k][m] ) ) 
              p+= wrds[k][m]; 
 
          if( !isalpha(wrds[k][ wrds[k].size() -1 ]) ) 
            p+= wrds[k][ wrds[k].size() -1 ]; 
 
          last = k; 
        } 
 
        if( last == -1 ) 
          continue; 
 
        wrds.erase( wrds.begin() + j + 1 , wrds.begin() + last + 1 ); 
 
        for(k=1;k<p.size()-1;k++) 
          if( !isalpha( p[k] ) ) 
            p.erase( p.begin() + k , p.begin() + k + 1 ) , k --; 
        wrds[j] = p; 
      } 
      if(i) 
        ret+="  "; 
      for(j=0;j<wrds.size();j++) 
      { 
        if(j) 
          ret+=" "; 
        ret+=wrds[j]; 
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