/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6871
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

class NiceOrUgly {
public:
    string describe(string s);
};

string NiceOrUgly::describe(string s) {
    string ret;
    return ret;
}


int test0() {
    string s = "HELLOWORLD";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "NICE";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "UGLY";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string s = "HELLOW?RLD";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string s = "H??LOWOR??";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "NICE";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string s = "EE?FFFF";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "UGLY";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string s = "?";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "NICE";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string s = "??";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "NICE";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string s = "???";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string s = "????";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string s = "?????";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string s = "??????";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string s = "IE?LPS?E?QCL?I?VRV?A?MPD?I?BHR?O?SFJ?E?MFG?I?CHYW";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "UGLY";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string s = "EI?RQQ?A?WWQ?I?QRQ?A?QRQ?I?WQR?A?RWR?E?WQR?E?QRR";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string s = "O?ZPB?I?FXR?I?QCL?E?NHJ?O?MQM?O?MWX?E?CYY?A?GCGL";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string s = "AA?QQQ?A?QQQ?A?QQQ?A??QQQ?A?QQQ?A?QQQ?A?QQQ?A?QQQQ";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string s = "IU?QQQ?E?QQQ?O?QQQ?AI??QQQ?U?QQQ?O?QQQ?I?QQQQ";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "UGLY";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string s = "AA?ZPC?A?LSQ?A?RQG?A??YHQT??A?CCL?A?HLG?A?FFTW";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string s = "IO?TJH?O?XWL?U?JDT?A???MRBC??O?GWY?E??WKLJ?U?JBRK";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "UGLY";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string s = "UU?ZRG?A?MJY?I?CLY?A?J?J?E?ZSZ?A?SMB?U?DFT?A?NQBF";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string s = "EA??TRGF??AA??FTQT??IA??GGTD??IE??GPDR??EI??QYSG";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string s = "AI??FRQP??IE??SFRQ??OI?SYTT??OA??PPPG??EA??SPPY";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "UGLY";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string s = "AI??VQNY??OO??BVWN??EE??XNZG?AO??ZFSR??IO??SCBL";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "UGLY";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string s = "EU??LXKTHS??A?TQV?U?DKT?O?QSL?I?FKJ?A?JKH?I?FSHM";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "UGLY";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string s = "OE??NDJC??I?SZP?EAIAU?QKW?E?PMT?U?JNC?A?NGF?U?DFFG";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "UGLY";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string s = "??????????????????????????????????????????????????";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string s = "?????????????????????UAU??????????????????????????";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "UGLY";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string s = "?????????????????????AA?FVH?UE????????????????????";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "UGLY";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string s = "???FZX???????????????????????????????????EU???????";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string s = "?????SGCFN???????????ERI??????????????????????????";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "UGLY";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string s = "?????????????????????ME?JQY?IE????????????????????";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string s = "???QQQQ?A?QQQ?A?QQQQ?A?QQQ?A?QQQQ?A?QQQ?A?QQQQA?AA";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "UGLY";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string s = "T?A?QTWY?A?TT?A?TSWS?A?RF?A?YPGS?A?WS?A?PWGR";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string s = "A?Q?QQQQ?O?QQQ??A?QQQQ?E?QQQ??QQQQ?A?QQQ??I?QQQQ";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string s = "??W???I?QQQ?E?QWR?A?WQRQ?E?RQQ??RQQW?I?QQW?A?RWQ";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string s = "??R?OT??HU?L?IS??ZO?G?UW??WE?C?UN??FO?K?OV??NO?P??";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "NICE";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string s = "??J?ID??QA?Z?OF??KI?D?ES???OKM?EH??ZI?R?UB??HE?J??";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string s = "??Q?AQ??QA?Q?AQ???QA?QAQ??QA?Q?AQ??QA?Q?AQ??QA?Q??";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string s = "?IJ?EM??NEBG?AS?ESA?NTAX?KIENW?EWEEYK?WIIRF?SA?WC?";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "NICE";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string s = "OQUQIQIQEQAQOQEQAQUQIQIQUQIQEQAQAQIQOQAQAQUQIQOQOQ";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "NICE";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string s = "QEVUPAQIYATEKOCAPAVAFOSUXAXAPILAFUSAFUWOKACENINUXE";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "NICE";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string s = "RAJAFAVUXEPUTAGOFIKDDP?IITZIPONOXEXOXEXIPAREWIHEYU";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "UGLY";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string s = "APYYWWTIYAI?TYEPTRQQU?EUAWYEOTE";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "UGLY";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string s = "?S???P??PDP?????A????????A?F?G???A???F?";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string s = "I??R?E?R?EIA";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "UGLY";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string s = "?Q?WG?WY???RWO??SAIDG??WQIGD???PTPA???A?";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string s = "?EJXC";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "NICE";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string s = "GXAIAEIESEAXTAXJHC";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "UGLY";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string s = "?LLKYXRW?LZDRSDQS";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "UGLY";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string s = "WQWWQ???AA???R?TA?";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "UGLY";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string s = "YHEO?I??A?XE??SE????WXAIAR??????????AA?????A????I";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "UGLY";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string s = "QQQQQQQQQQQQQQ?QQQQA?QQQQEQQQQQQQQQQQQAQEQ?Q?QAQQ";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "UGLY";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string s = "EEEIEAEIIWAIITQYQPPAAAEAIYDQEIIETAAY";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "UGLY";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string s = "???E?VG?AORI?E?NIA?";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string s = "?YR??????????QT?Q?WT?YQRW??IQ??TQR?QRRR?";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string s = "W?AAFA?EDHSTQWEEEAEEAAEA?AEE";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "UGLY";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string s = "ES?S?G?QP?QFGW???W?OFW?RTD?R?S?DRFD";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string s = "P?QFGW???W?A?Q?AQ???QA?QAQ??QA?Q?AQ??QA";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string s = "?E?QCL?I?VRV?A?MPD?I?B?E?QWR?A?WQRQ?E?RQQ??RQQW?I";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string s = "???";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string s = "YDQEIIE????";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "UGLY";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string s = "QQQQQQQQQQQQQQ?QQQQA?QQQQEQQQQQQQQQQ??????????????";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "UGLY";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string s = "OA??PPPG??EAA";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "UGLY";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string s = "EO?I??A?XE??SE????WXAIAR???E?R?E";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "UGLY";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string s = "?U?JDT?A???MRBC??O?GWY?E??W????????";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string s = "??FTQT??IA??GGT?EDHSTQWEEEA";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "UGLY";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string s = "?E??WKLJ?TQT??I";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string s = "AI??VQQQQQQQQQQ?QQQQA?QQQQEQQQQQQQQQQQQAQEQ?Q";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "UGLY";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string s = "??????????QT?Q?WT?YQRW??IQ??TQR?QRR???";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string s = "??W??????????????????????????EU???????";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string s = "?????????????????ME?JQY?IE??????????";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string s = "??E?VG?AORI?QQQQQQQQQQ?QQQQA?QQQQEQ";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "UGLY";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string s = "?WQIGD???PA?XE??SE????WXAIAR??????????AA?????";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "UGLY";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string s = "Q?E?QWR?A?WQRQ?E?RQQ??RQQW?I?QQW?A?XE??SE?";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string s = "?????????????ME?JQY?IE??VWN??EE??XNZG?AO?";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "UGLY";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string s = "XAIAR??????????AA?????A??Q?WG?WY???RWO";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "UGLY";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string s = "EEIEAEIIWAIITQYQPPAAAEAIYDDQEIIE";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "UGLY";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string s = "Q?AQ??QA?Q?AQ???QA?QAQ??QA?Q?AQ??Q?";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string s = "??FTQT??IA??GGT?EDGF??AA??FTQT??IA??GGTD";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string s = "SDQSA???";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string s = "IESEAXTTQT??IA??GGT?EDGF??AA??F";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "UGLY";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    string s = "WXAIAR?????A?XE??SE????WXAIAR??????????AA?????A???";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "UGLY";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    string s = "??";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "NICE";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    string s = "QQQQQQQ?QQQ?L?IS??ZO?G?UW??WE?C?UN??FO?K";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "UGLY";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    string s = "???????ME?JQY?IEQQQ??QQQQ?A?QQQ??I?QQQQ";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    string s = "ZIPONQ?A?QQQ?A?QQQQA?AA";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    string s = "S???P??PDP???XE??SE????WXAIA";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "UGLY";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    string s = "A";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "NICE";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    string s = "B";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "NICE";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    string s = "??????AAAAA";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "UGLY";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    string s = "?A?B?A?B?A?B?A?B";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    string s = "?";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "NICE";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    string s = "??????????????????????????????????????????????????";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    string s = "A??";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    string s = "EE?FFF?EE";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "UGLY";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    string s = "??????????AA?BBBB";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "UGLY";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    string s = "Z?I";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "NICE";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    string s = "?DNLLIV?AZ?QNB?TMXROCNU?YNYS???SWDB??PZIQ??W?";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    string s = "AA??A?ZZ";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    string s = "AA???ZZZAA???ZZZ";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    string s = "AA?BBB";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    string s = "AA??CCCC";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    string s = "AA?BBB?AA";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "UGLY";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    string s = "?AA";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    string s = "A??TLMB??B??A??B??A??B??A??B??A??B??A??B??A??B??A?";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    string s = "AA?????AAGGGG?????????AA?????????????AA?GGGGA";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "UGLY";
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    string s = "C???????????????????????????????????????????????A";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    string s = "AA?BBBABBB?AA";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    string s = "?????";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    string s = "AA?BBB?";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    string s = "??????";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    string s = "E??FFFF";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    string s = "AAYAA";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "NICE";
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    string s = "AA??LMNN";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    string s = "A?BBBB?A";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    string s = "???????????????????????????????????????????????AAA";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "UGLY";
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    string s = "XBKT?A?VGTR";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "UGLY";
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    string s = "EZ?FFFFAA?";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    string s = "?BBB?AA";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    string s = "???????";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    string s = "AEY";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "NICE";
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    string s = "A?B?CA?B?CA?B?CA?B?CA?B?CA?B?CA?B?CA?B?CA?B?CA?B";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "NICE";
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    string s = "AA?BBB?A?BBB?A?BBB?A?BBB?A?BBB?A?BBB?A?BBB?A?BBBB";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "UGLY";
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    string s = "???????????A";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    string s = "AA?BBB?A?BBB?AA";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "UGLY";
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    string s = "BBBB?A?BBB?AA";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "UGLY";
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    string s = "AA?BCD?E?XYX?I?FFF?OE";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "UGLY";
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    string s = "?????????????????AA?BBB?AA??????????";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "UGLY";
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    string s = "AAA";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "UGLY";
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    string s = "EE?FF?EFFF";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    string s = "EE?FF??EFFF";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    string s = "B?B?B";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    string s = "EE?FFF?E?FFF?EE";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "UGLY";
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    string s = "EE???FFFF";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    string s = "ABABABABAB";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "NICE";
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    string s = "???KKKK";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    string s = "???";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    string s = "?AABBBB?";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    string s = "????";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    string s = "??????????";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    string s = "EE?FFF?";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    string s = "???????????????????????????????????????????????";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    string s = "????????????????????????????????????????";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    string s = "BBBB?A?BBBB";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "UGLY";
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    string s = "AA?BBABBBB?";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    string s = "AAAAA???";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "UGLY";
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    string s = "AA?BBB?A?BBB?A?BBB?AA";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "UGLY";
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    string s = "?A?BBBB?A?BBBB";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "UGLY";
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    string s = "????????????????????";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    string s = "AA?A";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    string s = "E?EFFEEFFEE";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    string s = "?????????????????????????????????????";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    string s = "?????????????????????????????????????????????????";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    string s = "HELLOW?RLD";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    string s = "A???BBB";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    string s = "????????????????????????????????????????????????";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    string s = "?B?BB";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    string s = "??X??X??X??X??X??X??X??X??X??X??X??X??X??X";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    string s = "NNNN?A?NNNN";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "UGLY";
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    string s = "?FFFFAA";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    string s = "ZZZZ?A?";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    string s = "??L??";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    string s = "AA?BABABBBB?ABB";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    string s = "?????????????????????????????????????????????AAAAA";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "UGLY";
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    string s = "EE?FFF?E?FFF?E?FFFF";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "UGLY";
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    string s = "Z??Z??Z??Z??Z??Z??Z??Z??Z??Z??Z??Z??Z??Z??Z??Z??Z?";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    string s = "A???????????????Z???????????Y????????????????????B";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    string s = "????????????????????????????????????AE?A?BRT?AE";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    string s = "FFFF?E?FFF?E?FFFF";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "UGLY";
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    string s = "AA?TTT?AA";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "UGLY";
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    string s = "??????????????????????????????????????????????";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    string s = "H??LOWOR??";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "NICE";
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    string s = "??R??R????T???Y??R??Y??E???Y??E??T???R??E?TTTTT";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "UGLY";
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    string s = "EE?WWEWWWW?";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    string s = "??????PQ?????????QWER????AA?XXX?AA?XXXXAMB???????";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "UGLY";
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    string s = "ABCE?ABCE?ABCE?ABCE?ABCE?ABCE?ABCE?ABCE?ABCE?ABCE?";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    string s = "A??Z??A??Z??A??Z??A??Z??A??Z??A??Z??A??Z??A??Z??";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    string s = "BA?ABA?ABCAB?BBBABB?BB";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    string s = "?CCCC?U?CCCC?";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "UGLY";
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    string s = "CCCC?U?CCCC";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "UGLY";
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    string s = "AA?BBB?A?BBBB";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "UGLY";
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    string s = "????????D??????????????????A???????????O";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    string s = "AAAAAAAQQ";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "UGLY";
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    string s = "EE??FFFF";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    string s = "????????????????????????????????????????????";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    string s = "?????FRHUQ???U?????M??TLZ?T??LEBJYYH??EF??X??YI?Z?";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "UGLY";
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    string s = "ULCXIU????W?????RZ?I?";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    string s = "TF?WGLS?T?O?WTT?XFV??B?HEE?Z?G?Q?A????G?FYM?Y?";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    string s = "EADDA";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "NICE";
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    string s = "A??BBB";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    string s = "FFFF?EE";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "UGLY";
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    string s = "AA???BBBB";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test191() {
    string s = "?EE?FFF?EE";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "UGLY";
    if(result == expected) {
        cout << "Test Case 191: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 191: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test192() {
    string s = "ABHDYUE??IDAOSD?A???SDSDSDISEESIDAS?EDIUS";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "UGLY";
    if(result == expected) {
        cout << "Test Case 192: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 192: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test193() {
    string s = "?BBB?";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 193: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 193: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test194() {
    string s = "FFFF??UU";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 194: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 194: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test195() {
    string s = "???AAAAAAAA";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "UGLY";
    if(result == expected) {
        cout << "Test Case 195: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 195: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test196() {
    string s = "?A?V?D?E?E?V?J";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 196: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 196: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test197() {
    string s = "YYY";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "NICE";
    if(result == expected) {
        cout << "Test Case 197: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 197: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test198() {
    string s = "????????????????????????????AAAA";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "UGLY";
    if(result == expected) {
        cout << "Test Case 198: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 198: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test199() {
    string s = "AA";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "NICE";
    if(result == expected) {
        cout << "Test Case 199: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 199: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test200() {
    string s = "????????????????";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 200: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 200: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test201() {
    string s = "GGGG?";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 201: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 201: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test202() {
    string s = "AO?BAO";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 202: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 202: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test203() {
    string s = "????A????B????A????B????A????C????D????A????E????R";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 203: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 203: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test204() {
    string s = "ADFEIDFC???DF??YCUA??B??DYCUA??B??";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 204: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 204: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test205() {
    string s = "AA???CCCC";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 205: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 205: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test206() {
    string s = "EE?FFF";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 206: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 206: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test207() {
    string s = "?FFFF";
    NiceOrUgly* pObj = new NiceOrUgly();
    clock_t start = clock();
    string result = pObj->describe(s);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 207: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 207: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test107() == 0 ? ++passed : ++failed;
    test108() == 0 ? ++passed : ++failed;
    test109() == 0 ? ++passed : ++failed;
    test110() == 0 ? ++passed : ++failed;
    test111() == 0 ? ++passed : ++failed;
    test112() == 0 ? ++passed : ++failed;
    test113() == 0 ? ++passed : ++failed;
    test114() == 0 ? ++passed : ++failed;
    test115() == 0 ? ++passed : ++failed;
    test116() == 0 ? ++passed : ++failed;
    test117() == 0 ? ++passed : ++failed;
    test118() == 0 ? ++passed : ++failed;
    test119() == 0 ? ++passed : ++failed;
    test120() == 0 ? ++passed : ++failed;
    test121() == 0 ? ++passed : ++failed;
    test122() == 0 ? ++passed : ++failed;
    test123() == 0 ? ++passed : ++failed;
    test124() == 0 ? ++passed : ++failed;
    test125() == 0 ? ++passed : ++failed;
    test126() == 0 ? ++passed : ++failed;
    test127() == 0 ? ++passed : ++failed;
    test128() == 0 ? ++passed : ++failed;
    test129() == 0 ? ++passed : ++failed;
    test130() == 0 ? ++passed : ++failed;
    test131() == 0 ? ++passed : ++failed;
    test132() == 0 ? ++passed : ++failed;
    test133() == 0 ? ++passed : ++failed;
    test134() == 0 ? ++passed : ++failed;
    test135() == 0 ? ++passed : ++failed;
    test136() == 0 ? ++passed : ++failed;
    test137() == 0 ? ++passed : ++failed;
    test138() == 0 ? ++passed : ++failed;
    test139() == 0 ? ++passed : ++failed;
    test140() == 0 ? ++passed : ++failed;
    test141() == 0 ? ++passed : ++failed;
    test142() == 0 ? ++passed : ++failed;
    test143() == 0 ? ++passed : ++failed;
    test144() == 0 ? ++passed : ++failed;
    test145() == 0 ? ++passed : ++failed;
    test146() == 0 ? ++passed : ++failed;
    test147() == 0 ? ++passed : ++failed;
    test148() == 0 ? ++passed : ++failed;
    test149() == 0 ? ++passed : ++failed;
    test150() == 0 ? ++passed : ++failed;
    test151() == 0 ? ++passed : ++failed;
    test152() == 0 ? ++passed : ++failed;
    test153() == 0 ? ++passed : ++failed;
    test154() == 0 ? ++passed : ++failed;
    test155() == 0 ? ++passed : ++failed;
    test156() == 0 ? ++passed : ++failed;
    test157() == 0 ? ++passed : ++failed;
    test158() == 0 ? ++passed : ++failed;
    test159() == 0 ? ++passed : ++failed;
    test160() == 0 ? ++passed : ++failed;
    test161() == 0 ? ++passed : ++failed;
    test162() == 0 ? ++passed : ++failed;
    test163() == 0 ? ++passed : ++failed;
    test164() == 0 ? ++passed : ++failed;
    test165() == 0 ? ++passed : ++failed;
    test166() == 0 ? ++passed : ++failed;
    test167() == 0 ? ++passed : ++failed;
    test168() == 0 ? ++passed : ++failed;
    test169() == 0 ? ++passed : ++failed;
    test170() == 0 ? ++passed : ++failed;
    test171() == 0 ? ++passed : ++failed;
    test172() == 0 ? ++passed : ++failed;
    test173() == 0 ? ++passed : ++failed;
    test174() == 0 ? ++passed : ++failed;
    test175() == 0 ? ++passed : ++failed;
    test176() == 0 ? ++passed : ++failed;
    test177() == 0 ? ++passed : ++failed;
    test178() == 0 ? ++passed : ++failed;
    test179() == 0 ? ++passed : ++failed;
    test180() == 0 ? ++passed : ++failed;
    test181() == 0 ? ++passed : ++failed;
    test182() == 0 ? ++passed : ++failed;
    test183() == 0 ? ++passed : ++failed;
    test184() == 0 ? ++passed : ++failed;
    test185() == 0 ? ++passed : ++failed;
    test186() == 0 ? ++passed : ++failed;
    test187() == 0 ? ++passed : ++failed;
    test188() == 0 ? ++passed : ++failed;
    test189() == 0 ? ++passed : ++failed;
    test190() == 0 ? ++passed : ++failed;
    test191() == 0 ? ++passed : ++failed;
    test192() == 0 ? ++passed : ++failed;
    test193() == 0 ? ++passed : ++failed;
    test194() == 0 ? ++passed : ++failed;
    test195() == 0 ? ++passed : ++failed;
    test196() == 0 ? ++passed : ++failed;
    test197() == 0 ? ++passed : ++failed;
    test198() == 0 ? ++passed : ++failed;
    test199() == 0 ? ++passed : ++failed;
    test200() == 0 ? ++passed : ++failed;
    test201() == 0 ? ++passed : ++failed;
    test202() == 0 ? ++passed : ++failed;
    test203() == 0 ? ++passed : ++failed;
    test204() == 0 ? ++passed : ++failed;
    test205() == 0 ? ++passed : ++failed;
    test206() == 0 ? ++passed : ++failed;
    test207() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22628392&rd=10007&pm=6871
********************************************************************************
#include <algorithm> 
#include <string> 
#include <vector> 
using namespace std; 
 
#define SI(A) ((int)(A).size()) 
#define ALL(A) A.begin(),A.end() 
#define CL(A,v) memset(A, v, sizeof(A)) 
#define FOR(i,a,b) for ( i = (a); i <= (b); ++i ) 
#define REP(i,N) for ( i = 0; i < N; ++i ) 
 
int P[123][3][5]; 
 
int Vo(char ch) 
{ 
  return strchr("AIOUE", ch) != NULL; 
} 
 
class NiceOrUgly 
{ 
public: 
  string describe(string s) 
  { 
    CL(P, 0); 
 
    int N = SI(s), i, a, b, nice = 0, ugly = 0; 
 
    P[0][0][0] = 1; 
    REP(i,N) REP(a,3) REP(b,5) 
      if ( P[i][a][b] ) 
      {       
        int vo = Vo(s[i]) || s[i] == '?'; 
        int co = !Vo(s[i]) || s[i] == '?'; 
 
        if ( vo ) 
        { 
          if ( a >= 2 ) ugly = 1; 
          else 
            P[i + 1][a + 1][0] = 1; 
        } 
 
        if ( co ) 
        { 
          if ( b >= 4 ) ugly = 1; 
          else 
            P[i + 1][0][b + 1] = 1; 
        } 
      } 
 
     
    REP(a,3) REP(b,5) nice |= P[N][a][b]; 
    if ( nice )  
      if ( ugly ) 
        return "42"; 
      else 
        return "NICE"; 
    else 
      return "UGLY"; 
 
  } 
};

********************************************************************************
*******************************************************************************/