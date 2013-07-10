/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3020
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

class bloggoShortcuts {
public:
    string expand(string text);
};

string bloggoShortcuts::expand(string text) {
    string ret;
    return ret;
}


int test0() {
    string text = "You _should_ see the new walrus at the zoo!";
    bloggoShortcuts* pObj = new bloggoShortcuts();
    clock_t start = clock();
    string result = pObj->expand(text);
    clock_t end = clock();
    delete pObj;
    string expected = "You <i>should</i> see the new walrus at the zoo!";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string text = "Move it from *Accounts Payable* to *Receiving*.";
    bloggoShortcuts* pObj = new bloggoShortcuts();
    clock_t start = clock();
    string result = pObj->expand(text);
    clock_t end = clock();
    delete pObj;
    string expected = "Move it from <b>Accounts Payable</b> to <b>Receiving</b>.";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string text = "I saw _Chelydra serpentina_ in *Centennial Park*.";
    bloggoShortcuts* pObj = new bloggoShortcuts();
    clock_t start = clock();
    string result = pObj->expand(text);
    clock_t end = clock();
    delete pObj;
    string expected = "I saw <i>Chelydra serpentina</i> in <b>Centennial Park</b>.";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string text = " _ _ __ _ yabba dabba _ * dooooo * ****";
    bloggoShortcuts* pObj = new bloggoShortcuts();
    clock_t start = clock();
    string result = pObj->expand(text);
    clock_t end = clock();
    delete pObj;
    string expected = " <i> </i> <i></i> <i> yabba dabba </i> <b> dooooo </b> <b></b><b></b>";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string text = "_now_I_know_*my*_ABC_next_time_*sing*it_with_me";
    bloggoShortcuts* pObj = new bloggoShortcuts();
    clock_t start = clock();
    string result = pObj->expand(text);
    clock_t end = clock();
    delete pObj;
    string expected = "<i>now</i>I<i>know</i><b>my</b><i>ABC</i>next<i>time</i><b>sing</b>it<i>with</i>me";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string text = "**XU_h_bm .o QnmNI Y_ -!_ x___i vf_i***VL* s**";
    bloggoShortcuts* pObj = new bloggoShortcuts();
    clock_t start = clock();
    string result = pObj->expand(text);
    clock_t end = clock();
    delete pObj;
    string expected = "<b></b>XU<i>h</i>bm .o QnmNI Y<i> -!</i> x<i></i><i>i vf</i>i<b></b><b>VL</b> s<b></b>";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string text = "O z s(P _I_** **__hA v?qcGGgNX***Fm LL*o _w__Mt _";
    bloggoShortcuts* pObj = new bloggoShortcuts();
    clock_t start = clock();
    string result = pObj->expand(text);
    clock_t end = clock();
    delete pObj;
    string expected = "O z s(P <i>I</i><b></b> <b></b><i></i>hA v?qcGGgNX<b></b><b>Fm LL</b>o <i>w</i><i>Mt </i>";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string text = " ThqV*i* a*E u-;
    bloggoShortcuts* pObj = new bloggoShortcuts();
    clock_t start = clock();
    string result = pObj->expand(text);
    clock_t end = clock();
    delete pObj;
    string expected = " ThqV<b>i</b> a<b>E u-, Pa</b><i></i>yKp<i></i><b>c e </b><b></b><b>FW</b>q<b></b><b>vb</b> )";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string text = "_ay_) pO__ _ _CqZ_N X_* *. * bqw* HW_W___ ig_.u_";
    bloggoShortcuts* pObj = new bloggoShortcuts();
    clock_t start = clock();
    string result = pObj->expand(text);
    clock_t end = clock();
    delete pObj;
    string expected = "<i>ay</i>) pO<i></i> <i> </i>CqZ<i>N X</i><b> </b>. <b> bqw</b> HW<i>W</i><i></i> ig<i>.u</i>";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string text = "s zL I _ m_**-?* * jC_ _**_F dVOO_ Z__-_._ co Px";
    bloggoShortcuts* pObj = new bloggoShortcuts();
    clock_t start = clock();
    string result = pObj->expand(text);
    clock_t end = clock();
    delete pObj;
    string expected = "s zL I <i> m</i><b></b>-?<b> </b> jC<i> </i><b></b><i>F dVOO</i> Z<i></i>-<i>.</i> co Px";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string text = " t_PlC;
    bloggoShortcuts* pObj = new bloggoShortcuts();
    clock_t start = clock();
    string result = pObj->expand(text);
    clock_t end = clock();
    delete pObj;
    string expected = " t<i>PlC,</i> <i></i><i></i>l V); <b> </b>Sb<b> </b>N Oh<b></b>X <i>p</i><i>k T</i> h<i></i>";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string text = "J-**_K __v_ZBn_m ___jD_p __k_S**qK CF*XO-t *(uRa";
    bloggoShortcuts* pObj = new bloggoShortcuts();
    clock_t start = clock();
    string result = pObj->expand(text);
    clock_t end = clock();
    delete pObj;
    string expected = "J-<b></b><i>K </i><i>v</i>ZBn<i>m </i><i></i>jD<i>p </i><i>k</i>S<b></b>qK CF<b>XO-t </b>(uRa";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string text = "t I_vc_m__rf__ q? _st_**_ p_ -****_O _ ul _ _";
    bloggoShortcuts* pObj = new bloggoShortcuts();
    clock_t start = clock();
    string result = pObj->expand(text);
    clock_t end = clock();
    delete pObj;
    string expected = "t I<i>vc</i>m<i></i>rf<i></i> q? <i>st</i><b></b><i> p</i> -<b></b><b></b><i>O </i> ul <i> </i>";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string text = "__*xsi;*SN** *;J* a_s_**L__C s u*iP * ei;K _x_";
    bloggoShortcuts* pObj = new bloggoShortcuts();
    clock_t start = clock();
    string result = pObj->expand(text);
    clock_t end = clock();
    delete pObj;
    string expected = "<i></i><b>xsi;</b>SN<b></b> <b>;J</b> a<i>s</i><b></b>L<i></i>C s u<b>iP </b> ei;K <i>x</i>";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string text = "l*;w*j*! ZIYOm*__?ROco p_c y-___j*COE* WB _Ce Z_";
    bloggoShortcuts* pObj = new bloggoShortcuts();
    clock_t start = clock();
    string result = pObj->expand(text);
    clock_t end = clock();
    delete pObj;
    string expected = "l<b>;w</b>j<b>! ZIYOm</b><i></i>?ROco p<i>c y-</i><i></i>j<b>COE</b> WB <i>Ce Z</i>";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string text = "_q__!__m.sAU P_PS TuE_. _ __* RR*n;oT;
    bloggoShortcuts* pObj = new bloggoShortcuts();
    clock_t start = clock();
    string result = pObj->expand(text);
    clock_t end = clock();
    delete pObj;
    string expected = "<i>q</i><i>!</i><i>m.sAU P</i>PS TuE<i>. </i> <i></i><b> RR</b>n;oT,, V <b>l,.</b>f";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string text = " H _ T_E _;(d d _*(gT*FWlZM_uF_*V?**;E*B_ _ ; **";
    bloggoShortcuts* pObj = new bloggoShortcuts();
    clock_t start = clock();
    string result = pObj->expand(text);
    clock_t end = clock();
    delete pObj;
    string expected = " H <i> T</i>E <i>;(d d </i><b>(gT</b>FWlZM<i>uF</i><b>V?</b><b>;E</b>B<i> </i> ; <b></b>";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string text = "widq;_L_ ElLCP*;*_ nQ_ **J***NJJF;
    bloggoShortcuts* pObj = new bloggoShortcuts();
    clock_t start = clock();
    string result = pObj->expand(text);
    clock_t end = clock();
    delete pObj;
    string expected = "widq;<i>L</i> ElLCP<b>;</b><i> nQ</i> <b></b>J<b></b><b>NJJF ,(YQD?</b><i></i><b></b><i>q </i>";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string text = " cnfG!_ZtM XQ;
    bloggoShortcuts* pObj = new bloggoShortcuts();
    clock_t start = clock();
    string result = pObj->expand(text);
    clock_t end = clock();
    delete pObj;
    string expected = " cnfG!<i>ZtM XQ,</i>TcW<i>p</i>-! dYb<b> </b>CH<b>oj Sv;c</b>w<i></i>F K<i></i>";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string text = "qh ?W_R_q i**_H! _**__V__Bj*RgprA*GUh __ X* *K(j";
    bloggoShortcuts* pObj = new bloggoShortcuts();
    clock_t start = clock();
    string result = pObj->expand(text);
    clock_t end = clock();
    delete pObj;
    string expected = "qh ?W<i>R</i>q i<b></b><i>H! </i><b></b><i></i>V<i></i>Bj<b>RgprA</b>GUh <i></i> X<b> </b>K(j";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string text = "z_l_ _gv_N *z* a *c *Yb J k**! E__J_ c_Dr";
    bloggoShortcuts* pObj = new bloggoShortcuts();
    clock_t start = clock();
    string result = pObj->expand(text);
    clock_t end = clock();
    delete pObj;
    string expected = "z<i>l</i> <i>gv</i>N <b>z</b> a <b>c </b>Yb J k<b></b>! E<i></i>J<i> c</i>Dr";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string text = "T__l*ghj*v **k_eO)_I* R! .AR*W*Xj*___B_T MQ__ A";
    bloggoShortcuts* pObj = new bloggoShortcuts();
    clock_t start = clock();
    string result = pObj->expand(text);
    clock_t end = clock();
    delete pObj;
    string expected = "T<i></i>l<b>ghj</b>v <b></b>k<i>eO)</i>I<b> R! .AR</b>W<b>Xj</b><i></i><i>B</i>T MQ<i></i> A";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string text = "**eCSbPB__f**_Z_** iGgM;
    bloggoShortcuts* pObj = new bloggoShortcuts();
    clock_t start = clock();
    string result = pObj->expand(text);
    clock_t end = clock();
    delete pObj;
    string expected = "<b></b>eCSbPB<i></i>f<b></b><i>Z</i><b></b> iGgM ,<i>x</i> <i>pmWC A,</i><b></b> O<i>iIsY </i>";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string text = "**pf_ __b( VR_Dxnq_; k k _RKsQx_Gl?____- w f_ *?*";
    bloggoShortcuts* pObj = new bloggoShortcuts();
    clock_t start = clock();
    string result = pObj->expand(text);
    clock_t end = clock();
    delete pObj;
    string expected = "<b></b>pf<i> </i><i>b( VR</i>Dxnq<i>; k k </i>RKsQx<i>Gl?</i><i></i><i>- w f</i> <b>?</b>";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string text = "**_eW _o F p_)CZ M K d;
    bloggoShortcuts* pObj = new bloggoShortcuts();
    clock_t start = clock();
    string result = pObj->expand(text);
    clock_t end = clock();
    delete pObj;
    string expected = "<b></b><i>eW </i>o F p<i>)CZ M K d , wmnfX</i><b>vP</b> Y<b> </b><i>!V z</i><b></b>";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string text = " M_ K_ X__j_U_qD Aj*c*lAV)_ EwgK_*DWmW***__";
    bloggoShortcuts* pObj = new bloggoShortcuts();
    clock_t start = clock();
    string result = pObj->expand(text);
    clock_t end = clock();
    delete pObj;
    string expected = " M<i> K</i> X<i></i>j<i>U</i>qD Aj<b>c</b>lAV)<i> EwgK</i><b>DWmW</b><b></b><i></i>";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string text = "**Gl **ye_YFM_ _ jBRTbNB__sm_f**QMr *D*t _ w_";
    bloggoShortcuts* pObj = new bloggoShortcuts();
    clock_t start = clock();
    string result = pObj->expand(text);
    clock_t end = clock();
    delete pObj;
    string expected = "<b></b>Gl <b></b>ye<i>YFM</i> <i> jBRTbNB</i><i>sm</i>f<b></b>QMr <b>D</b>t <i> w</i>";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string text = "r*sb*w_Vn_vJ**gx_y _tX)j d__ - MU __D?kE NZnP-L**";
    bloggoShortcuts* pObj = new bloggoShortcuts();
    clock_t start = clock();
    string result = pObj->expand(text);
    clock_t end = clock();
    delete pObj;
    string expected = "r<b>sb</b>w<i>Vn</i>vJ<b></b>gx<i>y </i>tX)j d<i></i> - MU <i></i>D?kE NZnP-L<b></b>";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string text = "* *aYp__fF-** _je;
    bloggoShortcuts* pObj = new bloggoShortcuts();
    clock_t start = clock();
    string result = pObj->expand(text);
    clock_t end = clock();
    delete pObj;
    string expected = "<b> </b>aYp<i></i>fF-<b></b> <i>je,Lj MYl</i><i></i><i></i> <b>)L</b>n<b></b>E?VmvI<i>)! </i>";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string text = "?*c *t** _n_Bq**Dm__***H* a _Z_;
    bloggoShortcuts* pObj = new bloggoShortcuts();
    clock_t start = clock();
    string result = pObj->expand(text);
    clock_t end = clock();
    delete pObj;
    string expected = "?<b>c </b>t<b></b> <i>n</i>Bq<b></b>Dm<i></i><b></b><b>H</b> a <i>Z</i>,<i></i><i>Hz</i><i>R</i>w<b></b>,<i>v </i>";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string text = "_ !_-.*s *rs;. J_n_ Z_ o-nvc)_Pf* *_ ___* *w;
    bloggoShortcuts* pObj = new bloggoShortcuts();
    clock_t start = clock();
    string result = pObj->expand(text);
    clock_t end = clock();
    delete pObj;
    string expected = "<i> !</i>-.<b>s </b>rs;. J<i>n</i> Z<i> o-nvc)</i>Pf<b> </b><i> </i><i></i><b> </b>w,";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string text = "_W_b;
    bloggoShortcuts* pObj = new bloggoShortcuts();
    clock_t start = clock();
    string result = pObj->expand(text);
    clock_t end = clock();
    delete pObj;
    string expected = "<i>W</i>b,Js<b>Z</b> m<b>z</b>o <i></i> GT(ADX<b>C zuP</b>aZ<b> jfM</b>i<i></i>TA";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string text = "qUjf_ehyN_qPT*z*uP*FQ *GW)* * *ZO(P** * *! *";
    bloggoShortcuts* pObj = new bloggoShortcuts();
    clock_t start = clock();
    string result = pObj->expand(text);
    clock_t end = clock();
    delete pObj;
    string expected = "qUjf<i>ehyN</i>qPT<b>z</b>uP<b>FQ </b>GW)<b> </b> <b>ZO(P</b><b> </b> <b>! </b>";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string text = " d_I ?b.iiAFOZ _*q Ne * A __ni*** G p*GfQ* sF*";
    bloggoShortcuts* pObj = new bloggoShortcuts();
    clock_t start = clock();
    string result = pObj->expand(text);
    clock_t end = clock();
    delete pObj;
    string expected = " d<i>I ?b.iiAFOZ </i><b>q Ne </b> A <i></i>ni<b></b><b> G p</b>GfQ<b> sF</b>";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string text = "* * Kj* *_._* yCV*___S ._*p *_DkU-ow_WYKv__ _ _";
    bloggoShortcuts* pObj = new bloggoShortcuts();
    clock_t start = clock();
    string result = pObj->expand(text);
    clock_t end = clock();
    delete pObj;
    string expected = "<b> </b> Kj<b> </b><i>.</i><b> yCV</b><i></i><i>S .</i><b>p </b><i>DkU-ow</i>WYKv<i></i> <i> </i>";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string text = ";;**nfy****-*M? vNu* _l_ _!HB_* ***h j* *L***yx*";
    bloggoShortcuts* pObj = new bloggoShortcuts();
    clock_t start = clock();
    string result = pObj->expand(text);
    clock_t end = clock();
    delete pObj;
    string expected = ";;<b></b>nfy<b></b><b></b>-<b>M? vNu</b> <i>l</i> <i>!HB</i><b> </b><b></b>h j<b> </b>L<b></b><b>yx</b>";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string text = " eI*Cc *Z _ j__? __K _*H *M**f b***A *x F m__y";
    bloggoShortcuts* pObj = new bloggoShortcuts();
    clock_t start = clock();
    string result = pObj->expand(text);
    clock_t end = clock();
    delete pObj;
    string expected = " eI<b>Cc </b>Z <i> j</i><i>? </i><i>K </i><b>H </b>M<b></b>f b<b></b><b>A </b>x F m<i></i>y";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string text = "it?**l_ p_bi _ Z_lYb I_x _?_ _JN__ _v;
    bloggoShortcuts* pObj = new bloggoShortcuts();
    clock_t start = clock();
    string result = pObj->expand(text);
    clock_t end = clock();
    delete pObj;
    string expected = "it?<b></b>l<i> p</i>bi <i> Z</i>lYb I<i>x </i>?<i> </i>JN<i></i> <i>v ,xM</i>eSa <i></i>";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string text = "_m sg _*)**D *W_ _*h*w__XjI lH?a fi_C f I_uh -r";
    bloggoShortcuts* pObj = new bloggoShortcuts();
    clock_t start = clock();
    string result = pObj->expand(text);
    clock_t end = clock();
    delete pObj;
    string expected = "<i>m sg </i><b>)</b><b>D </b>W<i> </i><b>h</b>w<i></i>XjI lH?a fi<i>C f I</i>uh -r";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string text = "m _Tnp__C_ (Jl__*;*jXk__*tjeK* *I*?h___kI_ F* ***";
    bloggoShortcuts* pObj = new bloggoShortcuts();
    clock_t start = clock();
    string result = pObj->expand(text);
    clock_t end = clock();
    delete pObj;
    string expected = "m <i>Tnp</i><i>C</i> (Jl<i></i><b>;</b>jXk<i></i><b>tjeK</b> <b>I</b>?h<i></i><i>kI</i> F<b> </b><b></b>";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string text = "Wz_b_tDN* jag * A_lF_q **Q; E ZE*X;;
    bloggoShortcuts* pObj = new bloggoShortcuts();
    clock_t start = clock();
    string result = pObj->expand(text);
    clock_t end = clock();
    delete pObj;
    string expected = "Wz<i>b</i>tDN<b> jag </b> A<i>lF</i>q <b></b>Q; E ZE<b>X;,y(!J</b>U<b>B</b><i></i>";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string text = "*BO.*P_QhBp_x** AXR__V*FV*Ken!.**_VL_ *HQ-UMYAx*";
    bloggoShortcuts* pObj = new bloggoShortcuts();
    clock_t start = clock();
    string result = pObj->expand(text);
    clock_t end = clock();
    delete pObj;
    string expected = "<b>BO.</b>P<i>QhBp</i>x<b></b> AXR<i></i>V<b>FV</b>Ken!.<b></b><i>VL</i> <b>HQ-UMYAx</b>";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string text = " _w_y*Ek*EclQ*o -W*_ ?mL_zq*R*i*i**C *m __oqn";
    bloggoShortcuts* pObj = new bloggoShortcuts();
    clock_t start = clock();
    string result = pObj->expand(text);
    clock_t end = clock();
    delete pObj;
    string expected = " <i>w</i>y<b>Ek</b>EclQ<b>o -W</b><i> ?mL</i>zq<b>R</b>i<b>i</b><b>C </b>m <i></i>oqn";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string text = " _H_ _uJ S _ ko *IvrNBF* ejy_ _m_uc_**xyK_ fZy_";
    bloggoShortcuts* pObj = new bloggoShortcuts();
    clock_t start = clock();
    string result = pObj->expand(text);
    clock_t end = clock();
    delete pObj;
    string expected = " <i>H</i> <i>uJ S </i> ko <b>IvrNBF</b> ejy<i> </i>m<i>uc</i><b></b>xyK<i> fZy</i>";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string text = "*;
    bloggoShortcuts* pObj = new bloggoShortcuts();
    clock_t start = clock();
    string result = pObj->expand(text);
    clock_t end = clock();
    delete pObj;
    string expected = "<b>,G</b><i></i>. Q<b>NV</b> <i>I</i><b> T </b><i>L Q,iY</i> l Gni<i>d</i>mX<i> h</i>";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string text = "_Bw-k;
    bloggoShortcuts* pObj = new bloggoShortcuts();
    clock_t start = clock();
    string result = pObj->expand(text);
    clock_t end = clock();
    delete pObj;
    string expected = "<i>Bw-k, cm </i><b></b>sN;<i></i>V<b>J(</b>FU-<b></b><i> </i>!<i>! </i>XpmbF<b></b><b>t</b>";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string text = "_nLbZ_uS_d P_ sl *(***_mV_ V_ .H_s__***knR*;
    bloggoShortcuts* pObj = new bloggoShortcuts();
    clock_t start = clock();
    string result = pObj->expand(text);
    clock_t end = clock();
    delete pObj;
    string expected = "<i>nLbZ</i>uS<i>d P</i> sl <b>(</b><b></b><i>mV</i> V<i> .H</i>s<i></i><b></b><b>knR</b>,<i></i>";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string text = ")sB*e?z*GQ f*** C * **Isd*bOs*uN*N BqWZK bC*zz* *";
    bloggoShortcuts* pObj = new bloggoShortcuts();
    clock_t start = clock();
    string result = pObj->expand(text);
    clock_t end = clock();
    delete pObj;
    string expected = ")sB<b>e?z</b>GQ f<b></b><b> C </b> <b></b>Isd<b>bOs</b>uN<b>N BqWZK bC</b>zz<b> </b>";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string text = " i_ _T_R_*c*Hf** p***dL n*?** X;
    bloggoShortcuts* pObj = new bloggoShortcuts();
    clock_t start = clock();
    string result = pObj->expand(text);
    clock_t end = clock();
    delete pObj;
    string expected = " i<i> </i>T<i>R</i><b>c</b>Hf<b></b> p<b></b><b>dL n</b>?<b></b> X,?<i>X</i>W<b></b> <i>L </i> b<b></b>";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string text = "q_WJ RK q C CZ_F*sDhk!R**i*_UY cM OaW_a*DPd L j*";
    bloggoShortcuts* pObj = new bloggoShortcuts();
    clock_t start = clock();
    string result = pObj->expand(text);
    clock_t end = clock();
    delete pObj;
    string expected = "q<i>WJ RK q C CZ</i>F<b>sDhk!R</b><b>i</b><i>UY cM OaW</i>a<b>DPd L j</b>";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string text = "_now_I_know_*my*_ABC_next_time_*sing*it_with_me";
    bloggoShortcuts* pObj = new bloggoShortcuts();
    clock_t start = clock();
    string result = pObj->expand(text);
    clock_t end = clock();
    delete pObj;
    string expected = "<i>now</i>I<i>know</i><b>my</b><i>ABC</i>next<i>time</i><b>sing</b>it<i>with</i>me";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string text = "__________________________________________________";
    bloggoShortcuts* pObj = new bloggoShortcuts();
    clock_t start = clock();
    string result = pObj->expand(text);
    clock_t end = clock();
    delete pObj;
    string expected = "<i></i><i></i><i></i><i></i><i></i><i></i><i></i><i></i><i></i><i></i><i></i><i></i><i></i><i></i><i></i><i></i><i></i><i></i><i></i><i></i><i></i><i></i><i></i><i></i><i></i>";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string text = "You _should_ see the new walrus at the zoo!";
    bloggoShortcuts* pObj = new bloggoShortcuts();
    clock_t start = clock();
    string result = pObj->expand(text);
    clock_t end = clock();
    delete pObj;
    string expected = "You <i>should</i> see the new walrus at the zoo!";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string text = "_now_I_know_*my*_ABC_next_me_**sing**it_with_me";
    bloggoShortcuts* pObj = new bloggoShortcuts();
    clock_t start = clock();
    string result = pObj->expand(text);
    clock_t end = clock();
    delete pObj;
    string expected = "<i>now</i>I<i>know</i><b>my</b><i>ABC</i>next<i>me</i><b></b>sing<b></b>it<i>with</i>me";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string text = "Move it from *Accounts Payable* to *Receiving*.";
    bloggoShortcuts* pObj = new bloggoShortcuts();
    clock_t start = clock();
    string result = pObj->expand(text);
    clock_t end = clock();
    delete pObj;
    string expected = "Move it from <b>Accounts Payable</b> to <b>Receiving</b>.";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string text = "*test;*";
    bloggoShortcuts* pObj = new bloggoShortcuts();
    clock_t start = clock();
    string result = pObj->expand(text);
    clock_t end = clock();
    delete pObj;
    string expected = "<b>test;</b>";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string text = "fdg dd_ sdfs_;
    bloggoShortcuts* pObj = new bloggoShortcuts();
    clock_t start = clock();
    string result = pObj->expand(text);
    clock_t end = clock();
    delete pObj;
    string expected = "fdg dd<i> sdfs</i> , sdfsdf ,";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string text = "**";
    bloggoShortcuts* pObj = new bloggoShortcuts();
    clock_t start = clock();
    string result = pObj->expand(text);
    clock_t end = clock();
    delete pObj;
    string expected = "<b></b>";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string text = "**************************************************";
    bloggoShortcuts* pObj = new bloggoShortcuts();
    clock_t start = clock();
    string result = pObj->expand(text);
    clock_t end = clock();
    delete pObj;
    string expected = "<b></b><b></b><b></b><b></b><b></b><b></b><b></b><b></b><b></b><b></b><b></b><b></b><b></b><b></b><b></b><b></b><b></b><b></b><b></b><b></b><b></b><b></b><b></b><b></b><b></b>";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string text = "a__";
    bloggoShortcuts* pObj = new bloggoShortcuts();
    clock_t start = clock();
    string result = pObj->expand(text);
    clock_t end = clock();
    delete pObj;
    string expected = "a<i></i>";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string text = "____";
    bloggoShortcuts* pObj = new bloggoShortcuts();
    clock_t start = clock();
    string result = pObj->expand(text);
    clock_t end = clock();
    delete pObj;
    string expected = "<i></i><i></i>";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=10420933&rd=5860&pm=3020
********************************************************************************
#include <vector>
#include <list>
#include <map>
#include <ext/hash_map>
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
using namespace __gnu_cxx;
 
#define FORI(a,b) for(int a = 0; a < (b); a++)
#define FORU(a,b) for(unsigned int a = 0; a < (b); a++)
#define FOREACH(a,b) for(__typeof((b).begin()) a = (b).begin(); a != (b).end(); a++)
#define PB push_back
#define MP(a,b) make_pair(a, b)
 
typedef vector<int> VI;
typedef vector<string> VS;
typedef pair<int, int> PI;
 
class bloggoShortcuts {
public:
  string expand(string text) {
    string s;
    bool it = false;
    bool bo = false;
    FORI(i, text.size()) {
      switch(text[i]) {
        case '_':
          if(!it) {
            it = true;
            s += "<i>";
            break;
          }
          it = false;
          s += "</i>";
          break;
        case '*':
          if(!bo) {
            bo = true;
            s += "<b>";
            break;
          }
          bo = false;
          s += "</b>";
          break;
        default:
          s += text[i];
          break;
      }
    }
    return s;
  }
};

********************************************************************************
*******************************************************************************/