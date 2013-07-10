/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6222
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

class EscapingJail {
public:
    int getMaxDistance(vector<string> chain);
};

int EscapingJail::getMaxDistance(vector<string> chain) {
    int ret;
    return ret;
}


int test0() {
    vector<string> chain = {"0568", "5094", "6903", "8430"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
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
    vector<string> chain = {"0 ", " 0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> chain = {"0AxHH190", "A00f3AAA", "x00 ", "Hf 0 x ", "H3 0 ", "1A 0 ", "9A x 0Z", "0A Z0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> chain = {"00", "00"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> chain = {"01", "10"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> chain = {"0Z", "Z0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = 61;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> chain = {"0Z ", "Z0Z ", " Z0Z ", " Z0Z", " Z0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = 244;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> chain = {"0Z Z", "Z0Z ", " Z0Z ", " Z0Z", "Z Z0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = 122;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> chain = {"0Z Z", "Z0Z ", " Z0Z ", " Z0Z ", " Z0Z", "Z Z0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = 183;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> chain = {"0Z ", "Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z", " Z0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = 2989;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> chain = {"0Z Z", "Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z", "Z Z0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = 1525;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> chain = {"0Z Z", "Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z", "Z Z0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = 1464;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> chain = {"0 f s r d g", " 0 h b s w ", "f 0 6 3 7 8", " h 0 G H E ", "s 6 0 9 8 7", " b G 0 N N ", "r 3 9 0 A B", " s H N 0 X ", "d 7 8 A 0 9", " w E N X 0 ", "g 8 7 B 9 0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> chain = {"0 W Q 7 TpXX PkW T QIb S Z ", " 0V T RV IW So I XEw GO zYq Q M", " V0 W WUZYXV bhRJQ KcY IT", "W 0 x H BC UU N yH X Tr EfjU S", " T 0 P X Zs W I M H E e", "Q Wx 0xT kJ yQKu D EL CY Zn ", " R Px0 H kTVkR ZHmOJ XY ZUO ", "7VWH T 0V M GX Zi KV AE VMG ", " U HV0 HLnQZmUYaZrZZOy n Z I", "T ZB k 0 O QW Y T Y T B Vx", "pIYCXJ MH 0WK V ORaO Bp NN ", "XWX k LOW0NY v FOygZVDJ DZT", "X V T n KN0nBw NQtMTL OcR ", " S UZ V QQ Yn0 l ZM PA Y RS", " obUs kGZW B 0P UO V V J K GL", "P h yRXm vw P0X W Y VFV X ", "kIRN Q UY l X0 T lBL DIW s", "W J K ZY U 0PrbVX Y M4Y I", " XQyWu ia F OWTP0GR ZoXo YOd", "TE H Z Z VO Z rG0 KXM L W ", " w DH r y MV bR 0I ZUBY N eY ", "Q XI mKZ Og V I0DN H X A ", "IG EOVZTRZN V XZK D0WJVopL Lw", "bO MLJ O aVQ l oXZNW0EPS CRS", " T y ODtP BYXMU JE0D P x V", "Sz rH X Y JMA YL o BHVPD0 W MU", " Y YA T J M Y oS 0S WX", " qKEEC E TB LY VD4 L p PWS0Q B ", " cf Y n p FIY NXL Q0 U ", " QYj ZV B O KVW x 0 ", " U ZUMZ NDc YWe C BU 0 I", "Z I nOG VNZRRGX O YALR MW 0 ", " MTSe Ix T SL sId wSVUX I 0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = 92;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> chain = {"0QMX V A Ef T ", "Q0Oi SgGD sBUYF", "MO0 X V ZXH mU Y9", "Xi 0G Sy xYM m ", " XG0 ZGZW U N y", " 0 lSTZMtU ", " V Z 0Qn ZAHqYv ", " S SGlQ0 7R Y VZ", "VgZyZSn 0 Xr B ", " GX WT 7 0 gn u ", "ADHx ZZRX 0 VZ WV", " YUMA rg 0Q J r", "EsmM tH nVQ0 TSC", "fBU UqY Z 0B X", " U mN Y B JTB0Z ", "TYY vV uW S Z0 ", " F9 y Z VrCX 0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = 91;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> chain = {"0 T M RbZX W HM vJX Z Z", " 0 y o Y Ho YlG PL ", "T 0 Y G G WXyVZ ", " 0m GX U P XZ N EN ", "M m0 DDA DY cYR ZSyUUj T", " y 0Uf V U zS ZrZ kZ", " YGDU0R Z KLULlj X V", "R XDfR0 RK sZ S ZW ZL ", "boG A 0 J NQY P O SU ", "Z VZ 0 A Z S IF ", "X J 0 T S WhWP U", " Y U KR 0i wZ y ", " ULK A i0AZo E V ", "W PD U N A0 D S T mY", " G Y L Q T Z 0i 7 K PtF X ", "H zlsY oDi0Ec z ", "MH cSjZ S E0 nB QtDMJ", " o Y c 0nJF YS i", " R X W E 7 n0SzfX X6 ", " WX SPZh znJS0Y gZR ", "vYXZZ Ww K BFzY0Tx XJr ", "Jly SZ Z PZ S f T0 ZW", "XGVNyr WO P YX x 0HRQ ", " Z UZ S y Tt QS g H0X R ", "Z U Z F t XZX RX0 V", " P Ej LSI D 6RJ Q 0IV", " L N k UF VmX M rZ R I0 ", "Z TZV U Y Ji W VV 0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = 99;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> chain = {"0 B W XkRS Oc cuG U s Q", " 0P x LKEP VU Q bou P zZ ", " P0 L Yn RZ mRO XHZTSR oPY Z H", " 0 Xs Ov ZO Q S U iX ZlM h ", " xL 0Cz5R Z Z ZV kW Nv U I QYX", " XC0CbXJ M Q t SK Z V ", "B YszC0vZh vW Jo S WYUWyP ZYG", " n 5bv0 X TS MVRAXMYC V MrM r", "W ORXZ 0 y O OT J y Z ", " v JhX 0 Z X r V m TL", "XL Z y 0 uU iSJXK g H", "kKRZ M Z 0 Y YY WZU dx Xz TU Z", "REZOZ v 0krZ D G3z I mvYrG ", "SP WT X Yk0 Sd XWZXgTX kTYR DR", " m SO r 0 SG VF C QU ", " VRQZ r YZS 0 UXW Jv XnZu", " UO V J Y d 0 NsO Ix ROARa", " QoM u D U 0 n W J Z Q x ", "OQX V UW X X 0 TYE T O V", "c HS tSRO Z WSWNn 0TOVQK x Z Vz", " bZ k AT iUGZG s TT0RO d EIBE C ", " oTUWS X S 3X OWYOR0 XVKyIKL ", "cuS K MJ J zgV EVO 0UH w U F ", "u RiN WY VXd TF J Q U0Fr d Z ", "G Xv YC KxIX I Kd HF0cXVT X", " P U JxZ X rc0cBTVZY ", " o U WV gX k v EVw Xc0K X o ", "U PZ y y zmTC xIK dVBK0MyFNS", " YlIZPM vY RQT ByU TT M0 q T", " z M rZm TYRQXO ZEI VXy 0 X ", "sZZ QVZM Ur UnAxO K Z Z Fq 0W ", " hY Y T GD ZR VCLF YoN XW0 ", "Q H X Gr LHZ R ua Vz X ST 0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = 87;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> chain = {"0 X B YYZ TB Z G UR YXT O ", " 0Vm W K u mM IV V u 8 A U ", "XV0 N X C nA P tYZwRIAJ Q P ZVN", " m 0Wy G W T MTOS U v PQ MTH", " NW0G XMF Z aZ XE u u ", "BW yG0Z U NNW UTKW W h HC", " X Z0G l RhS X YKoj T T ", "YK X G0FF U Y n cUM J m C ", "Y CGM F0W DWa K OE L U WU X", "Z F lFW0 X T OiWYo U JEU Fm uF", " u U 0Z Tu N QZv I pN ", "T W R Z0 U R Z m IS M", "Bmn Z h 0V QD X Cu OU W ", " MA S DXT V0 R K N GZUI T T", " Ta UW u 0 R PqWRZ GD M U P", " P ZN aT 0 X NU LV VLG", " N R 0 Pw Zr RXT X ", " tM WX 0 B GFM iM IRq", " YT YKO U R 0J XB l i Z w", "ZIZO Y i Q PX J0 r O BcS C Q", " VwSXUK OW RD q P 0K3 Yu i j ", " R ETo EYN W wBXrK0N BGv N w ", " I Kjn o Z KRN B 3N0 Z E MZ ", " AUuW X ZU G 0T Q JK q", "GVJ cLU N F OYBZT0tN Q A", " W U ZM uG t0R W lWKY j", "Uu v M JQ G r B v NR0e TD X", "R Q UEZ C D lci EQ e0xT o ", " J UvmuG LR S W x0ZhN U ", "Y8 W ZMVX M Q TTZ0 L", "X P mU I U Tii Z lD h 0 O ", "T PQ hT F OIU M N J W N 0T F", " A u mpIU C K K o T0 zE", "O ZM TC NS T VXIZ j Y U 0VT", " UVT H u W L R w O zV0 ", " NH C XF M TPG qwQ qAjX L FET 0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = 95;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> chain = {"0UQTDLZ JZ", "U0 zU U AHY", "Q 0 RWN p ", "Tz 0Q R ", "DURQ0 w", "L W 0Y TQ ", "ZUN Y0 5", " 0 ", " A R T 0 N", "JHp Q 0 ", "ZY w 5 N 0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> chain = {"0 ZWT", " 0UL mW ", " U0 ", " L 0s y V", " s0 O", " 0N R", "Zm y N0 ", "WW 0S", "T VOR S0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = 160;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> chain = {"0Zt G R V o L L ", "Z0Q ls O y 5WX z ", "tQ0U pZ XK U X R ", " U0 KwF WVO WPrZ", " 0 R L i T K ", " p 0 JRNZF ZZ jT ", " lZ 0 Wg r VNH BX B", " s KRJ 0 Q X Q Zo ", "G w R 0 qeD V q", " FLNW 0S N W W", "RO Zg S0 P wR RU ", " iF Q 0iO Z UcBS ", "Vy r Pi0 h E ", " TZ q O 0Nt Y E ", " 5X Z e w N0 Z B8T", " WK XD R t 0c uP ZTN", " X W V h c0 JH ", "o UV NQ Z YZ 0 ZH Y", " O H N u 0M N", "L X V RU P ZM0 ", " WKjB WUc E H 0 MJ", " zRP TXZ B BZJ 0PZ", "L r o SE 8TH MP0S", " Z B qW TN YN JZS0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = 103;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> chain = {"0 V YVE RV aSS B B ", " 0uv Y XV EYs JY OJpFW O Rn S ", " u0 U Zt Uk NBg YT T X I J ", " v 0P S YSW U X x X T X M 9 Q ", " P0T OT S PN IN M M M LU P EU o ", " T0T H TUV GQu IL V R YS YPC B", " YU T0y U f h T8 S sz U z L ", "V y0 R X X CBT S f n I ", " Z 0 ZZ K PT MZbVH Um ", " tS U 0BV x e H Z w i W NT c O", "YX O R B0 Vk Uw hW oR n Y ", "VVU TH V 0k E VD M Q ", "E kY Z Vk0q W PYFX Pp Z", " SSTf Zxk q0 V YK T wD B SoPEK", " ENW U X 0 Z F UwU Z KS J YY ", "RYB PV 0 F e N IV X ", "Vsg N e V 0 Y Y g LB", " Gh Z 0ZY S ro TDXY X FJ ", " UIQ Y Z0 T ZT Z Z RXQ V i ", " J NuT K F Y 0 DDF W E cfZ XJ ", " YYX 8 UE T 0YGfXQATYKID y Pm Wr", "a T M X Hw F S DY0Q Y E D Z Y YR T ", "SO x I K WT e ZDGQ0 RPMGZZZA zYnQ N", "SJ L C Z Y TFf 0NKZT W Y O ", " pTXM SB U XY N0 Z M T Y Wq", " F V T wh w WQ RK 0Mp X C G ", " W M s W U r A PZ M0 HY lL FRZ r ", " XT zSPi w o T MT p 0L DL hU Z w", " L T oV D Y Z YEG Z HL0 k RI C ", " XU f WRDP Z K ZW Y 0 Z Vy", " R YB N Z I Z 0R DD ", " OIM F K T EDDZ R0 L Y ", "B U N X S D A 0 QKSH ", " Y MT gXRc Z Y XlDk D 0TQR w Y", " R S nZ YXfy z M LL ZD T0 S ", " n P z b n QZ YY C LQQ 0 UY ", " 9 V P J n T FhR KR 0 MY N", " J EY IH pS I XVXPYQO RUI YS U 0SrqW", "BS UP c M oYV JmR Y Z H SYMS0 W", " C U PY F ZC w Yr 0 U", " Qo L m YQ E XLJi WT WGr V q 0 ", " B O ZK B r N q w y Y NWWU 0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> chain = {"0 S uUPuZ UV gCo Y I ", " 0Z MZX VW X WXTON W", "SZ0e u PK H F O Z zX ", " e0 Z XM ZOuU X 9 P J ", " 0yF L oy B Qvv D i ", " u y0 RQ Yu E yS R F WVt U", "u F 0UYZL Z 2QT SZ O", "UM Z RU0m X DC R ", "PZ QYm0qU v N YyNVXY P ", "uX XL Z q0V X B VS Z SG X", "Z M YL UV0 oL dZ BUN ", " V u 0XZ Ut A z SL", " WP o XvX X0M ZZRTA V Z", "U KZyE oZM0q oQ E V ygAT ", "V O Z N L q0 WB u Z ", " u B U 0t SZ V q V ", " UBy dtZo t0rT qsnu ", " X S D VZ ZQ r0tx sR U ", " HXQ 2CYS R Tt0 s vF", "gW vRQ y ATE x 0nKWN W V ", "CXF9v T NZ A WS n0 B W A", "oT V VBZ K 0 OYS ", " OOPDF X s WB 0 R Y ", " N Y Vy V RsN O 0 ", "Y ZJ WSR S g q YR 0NN ", " VZ GBz Auqs W S N0 ", " z t P U T n W Y N 0 W", "I X i NS ZVuUvV 0 ", " W UO X LZ F A W 0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = 104;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> chain = {"0Z PZ D KI ZZ U F BQ E IEJ ZQ SsS", "Z0 u T K g J Y KS HNZ F Z OYEZ WUH ", " 0 q V T H PWEU W G LIW FVSWUH k ", " u 0 Z a AR EW sZ q CEZK HYp V tZ ", " 0p C m Zm LU Y Ld nN R Z N Xw OP Px", "PTqZp0 tU SF8 s wWU h Fu V M Q B u", "Z 0 Z V R O LM A PIL W I JDtP ", " KVa 0Y x H GX k X R V YU IQ mISb U", "D Y0 VY X T p W R S Yo UZV ", " g A Z 0 Y V y P yy Kz Z Z YX6K ", "K R t 03LJU U w Uv YDWN VpV ZZH G Sn", "I U V 30Z YZW mR UV BUZ M GPYY B", " J E xY LZ0j YR v UjPz ZZXX c Y D LFu ", " WC V J j0 6 Y HM C ZKWP X Z V U Y D ", "ZYT S UY 0 H F RG B W V TeE k ", "Z mF H Y ZY6 0 Gf OQ d L tWY XL l S Z", " K s 8 X WR 0 KFUF KQ C UBy Q K p S W ", " S ZZ R U YHG 0 AEK gPx B 0 L s Q SA Z", " H ms GTV m fK 0 F Y NZR KD Y X R ", "U q OX RvH F 0J K Q z YYXZ P Q B VO", " H L yw M UAFJ0F YD r T M V 3 ", "FNP U k U FOFE F0ZQ s s U Ro OY W B ", " ZW w pP V Q K K Z0Q z O Y Z J ZM ", "B ECYW X U K Y QQ0 KUSOfn J RTT YX P", "QFUE UL yU jC dQg Y 0V x I ZW Z U 7", " ZL MRWyv P R PNQDs KV0L M N Q Y Q I", " WKdh Bz G xZ U L0 ZX M EUn ", " A KYU Z C Rz zSx 0N R D k L y E", "EZ n RzDZZKB B rs O M N0 AUk lGW P t", " GHN P W ZW LU K Of 0 KoS W ZPC", " Y IV N XP B D U n Z 0W Wd6h J A U", " pRFL S X y T X W0 NZ U ", " OL u VM X 0 Y RYJIN 0V QX Y TY u", " YIVZ W p t Y o M NV0 W YZ X", " EW V YY V cZWWQ X Z Z A Z 0 x ZaLOMY", " Z N Uo Y L Z WQ RU W 0 YqX ", "I F M Z V O E kKd Wx 0 G M f K", "E V X II ZZ XKsYP YJR UD o6 Q Y 0 K ", "JWS w Q H YUVL T n lSh X qG 0 j ", " UWt J Z pQX M TZ kG X 0N S U", "ZHUZOQDm GGDYT Q WW YYZ M N0S ", "Q H P tIUY P elS R V ZYUY L J Za S0 D ", " PSZX YL E S B WMX P T L fKj 0C W", "S B bV6 YF S A 3 Q y ZAUY O S C0 ", "s k P KS uDk W V B P M D 0R", "S xu U nB Z Z O P7I EtCU uXY K U W R0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = 92;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> chain = {"0 V TXvw Xo A vT Z KI P S ", " 0S K FFlX TK xW w IS Y Uu ", " S0 OWW M G VY F XA O Y RH", "V 0X R U NGZRHu H ", " KOX0 J vClY S Q U", "T W 0M du Y Z x WN xZ ", "X W M0 Xp L x K Z z bY V E ", "vF 0v Y C t N P W", "wF R d v0O T T wZ D T O n U", " lM uX O0 W R HQ QV Y J", " X pY 0 ZO BZ o CP W K ", " GU Y 0Zo W vOQLS x Z ", " LC W Z0 u G QFW WC ", " T JZ Zo 0 ZN A Us A", " K x O u 0GF Ar s F GJ", " V T W ZG0 V aO I XE Y", "XxY RB NF 0W U Y fAZY EG Y Z", "oW N Z W0 DYw Z ", " Gv K T v 0 D YOs ", "A ZC HoO VU 0 N P J Z M", " wFRlxZtwQ Q 0 ZRY GE ", "v HY Z L A YD 0 YVL b ", "T Xu SGAr Y N 0R P I jx Y", " A D C fw R0Gi cE ", "ZI z QPxQ aA G0JUH tR O W", " SOHS TV F sOZ Z PiJ0 Z Z Y Q", " W W Y PRY U 0 Y VD t", "K Nb O I YV H 0IVX X ", "IY YN W U LIc Z I0Q r ", " Qx s XE DJ Et YVQ0MS ", "P Z Pn EG j RZ X M0Eg ", " UY V YKZ F ZY G x V SE0 nN", " u W Y OZE OYD g 0NX", "S R E C G s b Xr nN0Z", " H U WUJ AJYZ M Y WQt NXZ0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = 103;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> chain = {"0 U OU Usr mXXXW J q z Z QYO Y ", " 0U I KCV O YX Z z VD O Y JO ", " U0 LLX V Z P v C q z ", " 0 3 iB ZL T Qy XZ E G tB NM Q DY", " 0D T P L sW T XY P F MPZS X V", "U D0U BO YI X z YIu VP D NKK R", " 3 U0Qc ZQx y AL pZ G W y X R n", "O L Q0 Y LzuEP Q z u EcWkNKY y W ", "U L T c 0 UY I F uNv VEUq Y Y ", " IXi B 0 Z V mOpzTLSASP K s pFX Q I", "U B OZY 0MvUHZ q itR pFY U LZX", "sK Q U M0 Z JQ W c X YK ZH QF ", "rC Z x YZv 0WF X HT F RGJ C7 W q W ", " V L L UZW0X k ZQ P V VYPVZT V VK ", " z VH FX0 CY G UL K EB WU", "mO TP u ZJ 0W ER GW W Vt Z ", "X yE m QX W0C XWOZU wa oq JsN B N ", "X P O k C0 R H YC h Z", "XYVQLY p H 0 V VTIZ fy kZ", "WX y IA IzqWT C X 0S W LW JsW p P s Y c ", " s LQ T YEWR S0 I O c x V A ", "J W L Z RO 0ly wuN R T CFEZ", " ZX Xp S FQ Z WIl0t W jMZ T RM I c", "qZ Z Z FAi GU yt0 MZr DOS 3S T", " Tz z Stc W L 0SRc 7 Z ZR ", " z PR G w W w MS0 E Y D X5 Z", " EX G u P a u ZR 0 X UL U M S", " YY uNKp R VJONWrcE 0 z j Z 7 Nx", " G I v F GV Wo s X 0 w g XW CZ X ", " V uW Y J q WcRjD7 0 L Y ", " DPtP E s MO z 0A Q Ej cW ", " B V c C J p ZSZ U w A0 YQx7 j", "zOv P W X7VU sH YLj 0L M r ", " NF yk p YLVN T g L0K W z ", "Z M D NVF P t VPx D Y K0 K U ", " C KEX YWVK T T U XL Q 0U U gT ", " MNXYU UK Z YI V W x W U0 WGn", "QYqQPK q qT BCZ R3 Z Q7M 0 z O ", "Y ZKRy Q s MS U 0 ZZpYO", "OJz S ZWVE hf C E K z 0 D ", " O WY H B y Z j z g Z 0s OX", " Y CI X 7 T Z s0Y S", "Y X LQ V ZN F Z5M XYc r WOpD Y0 ", " D Y ZF KW kcAE R N W U G Y O 0 ", " YVRn IX U ZZ ZcT ZSx j n O XS 0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = 92;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> chain = {"0Y g w C ZM T T ", "Y0K Z F h O T ", " K0 STw y Sl", "g 0e YZ X VT", " Z e0R VK8 YOUSYM n", "w R0 j Z WW V s ", " 0l K 9YD ", " l0 LA", " Y j 0 IS V ", " F ZV 0 XQZQH Z", "C S K 0s X N X", " T 8ZK s0r M L O N", "ZhwX r0 ", "M W X 0SXxTXGZ ", " YW M S0 Z V", "TO O 9 IX X 0 XV ", " U Y SQ x 0 C", "T y SVD ZNL T 0 Z", " T Y Q XZX 0 V ", " Ms VH O G V 0E ", " SV L Z VE0 ", " lTn A ZXN V CZ 0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = 115;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> chain = {"0 U XdQ l O Zm UN ZP O sK k C", " 0Z K Hk T O n I J ", " Z0 z N W Vm lF O YR", " 0 IKX CB NS W V TZVX T v eGE", "U 0W Q w l J y R s R C K", " K IW0 9 B R V fP F C yWS Q O ", " K 0 C wZ 3 ZNY Z JN WQuJ ", "XH X 0FV X R Eh o R V kT ", "dk Q9 F0 GM wL GZK w Sp V S Z F ", "Q CV 0 X XJ K TV Z X P ", " z G 0 7K R r WH W OW F", " T C B M 0 V Y zk X l YX Q yi", "l B X X 0 Q SGX X V Q UQ U P", " ON R w 7 0 z x Tx B S s W ", " w LXKV 0 XJ Y 6F YC M W", " nW w Z J 0 ZY F lY C Q RR ", "O N V RG Y 0 T V W q H ", " S 3 Z z 0ZWXmRC YU h L ", "Z l K Q TZ0 Uk MV R X Wz", "m W fZ K z Z W 0 Y M P r", " PN RkS XY XU 0 t WY 1 m N Z", "U V J YEw G J Vmk 08 v v Z r z", "N m h Tr Xx F R Y 80Q Th OIbK 2k T", " V V WCM Q0 P LN LV xK T", " l yFZ S V t 0Vl KV VZ A Y", "Z FT opZ XTYl M V0 T Q X Z ", "P ZRCJ W x Y R Pl 0cf K MP ", " V N V HXV q c0OA o ", "O X y X T KTfO0CW dbR x ", " W R WlQ P vhLV AC0 E YM ", " S B6 Y W N W 0o UD S ", "s S O F U Y O VQK Eo0 F W", "K s WY vILZ d 0 v ", " OT X SYC 1 bV b 0 ArZ ", " I RQ VZ U C H K X R U v 07Q ", " v W X QQ Q h mZ xA o D 70 ", " J COQ sM 2K M x F AQ 0 U", "k e uk U R L Nrk ZP YS r 0 ", " YG JTFP y W R W M Z 0H", "C REK FiP W zrZzTTY W U H0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = 102;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> chain = {"0 I N W BW AW xq St S L ", " 0NS Z W T GV Sd M", "IN0I Z Z XS M T ZVn V FHV Zx ", " SI0N QX Ya Qq EWuP EXv zX SO", "N N0 U Q U ZU uF XX SkIvZM ", " 0H E M U H OT D E NS D y ", " Z UH0NY Mn S L ZGO I P", "W Z N0 Q h J Z T EM s B ", " Q EY 0Y Z 9CT BY E YIQRZ R I ", " W XQ QY0 E i MB Z SOO L v MF", " Z 0 TuT r U uvXM Is RXQK", " T hZ 0 S PsO J J ", " Y M ET 0 TT YY Q T X L y E ", " XaU J u 0 Y S NGt Q Z ", " S U iT T 0 TIZ D L Q E ", " M T 0 D Xd WM Z S Bk ", " G Q n 9 0AY NN w PIp m Q ", " V qZ CM SY TDA0 h Q Vf Ez gS ", "B M U ZTB YYI Y 0PJ k RQSZ W ", "W H r ZX P0 nqY F TR", " TEu P d J 0ZR Z qL BJ BR ", " WFOS B UsQ D N Z0 X lS O Hh J", "ASZu T TY O S WN R 0 Uj T R ", "WdVP M h 0 L JD a M Z", " n XDL EZu N n U 0Zo YUNOvh W", " EX E v G QkqZ jLZ0 Q Y X X f ", " VX M SX Tt Z Y X o 0 J A VW ZK", "x v E YOM L wV q J Q 0 Q w P", "q IO fR Ll DY J 0Y n 5NR", " F N sQ X SP Q S U Y0 Z 4T", "S H SZ R I IES aNYA 0 e q", "t VzS G Z s L pzZ BOT O Q 0 ASy", " Xk O L Q B J vX nZ 0 XW", "S ID BR y Qk RMh V e 0 U T", " v vRJ Z m WFBH XWw 0 CW", "L Z ZyI X E E g Rh 5 A U 0 ", " xSM IMQJ QS T fZ N4 SX C 0s", " M O P FK R J ZW KPRTqyWTW s0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = 89;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> chain = {"0 X N R S R W Y X w G P ", " 0 TV MN X L OI Y WY T RZ Y y NX R ", "X 0 q PsQ K 7 X IWXG VZR WU WW Z V ", " T 0U V MY Y P Z W S NZI V WV Y", "NV U0 Y Z T LZeV I ZY Z i OC ", " 0 L X NZX X S WV u v EY FXWn Y ", " M V 0 EX V UK Z N CZ ", " N 0 YYZ X W Z Z Y Z r Q OPV I P", "R L 0 ZoYZ RRY U YX V Z Y Q ", " q Y 0 Y DI ZVS XO Z X T MZ Y ZV", " YZ 0 W H w Zj XWM Qq X ZZ k D ", " XP X Zo 0 RL yY YVY WS XV Y MX PSQ ", " sM E Y 0 G ZUT WWV U WTX X Y Z F", " QY NX ZY 0RXS KX FX XSJU X XQZ QYZ", "S YZ W R0 VX W R N Y ZV VY", " LK X X X 0 XH T OX S UX G U ZXL ", "R YZ DH GS 0 o V OY JU Z ZW ", " X I X 0 E O Y W V U Y Z y ZY ", " 7 w Z H 0 ZWZ ZR K S W ", " O P S WRZ U o 0NZ OZ U Z UY XY F N ", " I T V RV RT N0 R kW Y WW j X N ", "W X YS L VE Z 0 TX hQ W Y XZ Z ", " Y LWU Z K Z 0 k Z Y UU BW ", " IZZVK U jy XVT W T 0 Y y Y X Y V ", " WW e Z X Y X OZORX 0Z ZZ XX F A ZY Y", " YXWV YOX F O Z YZ0 WW I X GK R W ", " G X W WX Y 0YG Y Z X WS Y", " T Z M W W Uk k Y0D X LZ ", " S VX Y W Z GD0 Z X yX XW", " V I Y Z Y SRO Z h yZ 0K Y T H UUWZZ", "YRZN u QV J X WRZ Q WY K0 H X Y Z ", " ZRZ Z qYUUN J Z W 0 J U XZ XZ p", "X IZ V SUV YW Y Z 0 X Z Z WK", " Yv Z W U X YH 0 T ZS M GZP", "w SW U YW Y X 0 Z Y ZBT ", " Y Nr XX TX W X IZ JX 0O zJ IK VK", " W ZE XX U YK F X T O0 Zr QD ZYQ", " U YCQ V YX X Y X XT Z 0 XT E", " y i Z Z Z Z Y AX U 0 TZS H ", " V ZYX GZ S U X H Zz 0Z YW ", " F O T y F XU ZG YX Z JZ TZ0 A G qY", " NW X P kMY jZ YK Z SY r Z 0 XH ", "GXW OW V M X X U Y I S A 0Y X", " Cn YZ Q Z B y Z ZKQ Y0 X", " ZW I D ZZ Y X W XU ZMB D X 0 Z O", "P V Y PZ VZZ N V RWL U X T X YGH 0YN ", " R Y S Q XW NZ SZ W Z G ZTHW ZY0IZ", " V QZ Q YVL W W XZ WZ VY q NI0W", " Y P V FZY Y Y WZ pKP KQE Y XXO ZW0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = 129;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> chain = {"0W V ZNZW JZSA Z X W ", "W0 Y Z T ZOEZUX UYY X", " 0 YZ AZU W WX F R YZ ", "V 0 r J W HP Yb U ", " Y 0 GX L G P W Z N B TU ", " Z 0 T EQ sZsS W ", "ZY r 0 UYY PZQ V ", "N G 0 z ZG VY ZYY ZY Y ", "ZZAJX U 0 SR RF Z FPTX T ", "W Z Y 0 X z Z F OZXQ ZY", " TU L Y 0 IYMZ W Wt T ", " W X 0 Z ZN 8B W U ", " W zS 0 R ZmZ Z X H O", " Z G RzIZ 0 WX J w Y", "JO H Y 0S TV ", "ZE P T M S0w QXQ HF YQS", "SZ P Z ZZZ w0 RV YZ Z Vn I", "AU GR NR 0 Q WY Q ", " XW FFW 0 NQ X W ", " X W V 8 W R 0 W X V ", " E YZ BZX QV N 0 S S Z Q ", " QP m X Q 0 M S L", " U Z ZZ Z QYQ WS 0Z ZGW Z U", "ZY sQY OW Z MZ0 X S O ", " YFY Z YFZt ZJ X 0 R ", "X b s PX W HZ ZX 0 Z V ", " R NS TQ X F S G 0VYYZZ ", " ZX T VW WS ZV0S ZX ", " Y BW Y w nYWXZS YS0 X", " ZU T UH Z RVY 0 ", "W T TY Q ZZ 0UZ", " U VY Z VQ Q V O ZX U0Z", " X Y OY SI LU X ZZ0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = 131;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> chain = {"0 U V YY V ZUX WZFW Z O U X OwX ", " 0V ZA NH R VX ZP DY H D X lT O", " V0 K M Z T z X Z QO EJQIHZ Z WTW Z ", " 0uY Y Z B X YY D vD V Y Z r Z ", " u0Z YTLm X F WRO ZG NZ X JMP R r X ", " ZKYZ0 RX Q Y Z L OY ZQ S YX t T", " A 0 T XUm R W CQ OVX Wr X ZM Z B ", "U YY 0X Q VR KI J BRR Z Z Z XUX ", " M TR X0 Z ZZ X VY T LQ W U RV PZ Z ", "V LXT 0 ZYS WRZ Z U FY XR vNY ", " N m Z 0 ZZ O n Q WL FW Y Z U ", " HZZ Q 0 NO V L PQ i o W oQ T U", "Y QZZ 0 W N B WDX G B YLY Z Y", "YRTB X ZY 0 Y WZY V PRYYU P ", " UV S W 0 TY XS iZ X UU HXUS LU", "V zX YmR 0W J hN OEM Q Z YH T VX", " X ZN W0JK Z R G A R YY XL ", " VX K WZO J0 R W K G J GU W ", " X Y RIXR K 0G YL YY ZZY Z Y SVX ", " YFZ ZOV Y G0Z Y FZXWD ZWUYZS S P Z ", " ZZ V T Z0 ZU O P WU Y Z M", " P DW Y n Y Y 0 E KZ V X V UY Tx ", "Z Q R LN JZRLY 0 ZQCV TU N Y Z Q Z X", "U O O W T 0 T U Z Q UX", "X L PB h FZ Z 0 y YU ZW W XTZ ", " v J QQ NR ZU Q 0 LM ZWQ WZYZY P ", " DZ W X C 0 X Z T T ", " D G L W Z W WO V y 0Y T Z ZW NYY ", "WY V Q L Y O D E T L Y0 Z X X Y X ", "Z B Z E Y YM 0 Q R OZ ", "F OCR XM YZ KT U T 0R Z Y X F ", "W NYQR U VS GK WPZUU ZX Z R0O V X E FT Z T ", " H Z W W Q ZU ZW O0 WZW Y w W ", " EY O D GZY N WQ 0 RL ZP Z W ", "Z J XZV UFFiXPi YZWV ZZ 0 L D ", " Q QX YW RZ A SU W VW 0Y Z R", " DI J o Y Z JZ W ZX ZR Y0 S K ", "O H MSW X YX R SY Y ZTW XWL 0YRn W ", " Z P rZRR GU Y X Z Y Z Y0K J Z Z ", " V W H G P ZT X L RK0NY V Y ", "U ZZ X B U UY VZ Y QZEYZ n N0 w W", " ZP Y U Y Z X P JY 0 tJY W", "XX RYZ Z oY TY Q T F w 0 Z U S ", " r XMZ ZQL H QZ Y T ZD t 0 XzZXS", " lW r Y X UZ P N Y w SWZV JZ 0U ZV ", " TT X vU U W Z Y YXR Y XU0Z S ", "O WZX ZU N S X S Y XZW Y Uz Z0 W", "w t XZY TZP L V T O W K ZZ 0 ", "X Z B LV X x U ZFT Z SXVS 0 ", " O T UY UX M XX R WW S W 0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = 120;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> chain = {"0 W P ", " 0 Y V R", "W 0 ZPZ", " 0 Y ", " Y 0ZY ", " YZ0O V", "PVZ YO0 ", " P 0Z", " RZ V Z0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = 178;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> chain = {"0N ", "N0 ", " 0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> chain = {"0 W Z YL X Y ", " 0 F Yp Y PZ y UUPT", " 0 e Q u Y ", " F 0 X iR M ZY VK ", " 0V X Z Z XW", " Y V0Y WZ X O US PY", " pe Y0 NV HYW Y J", " X 0 QY X L VZY ", " N 0 YU X Q H BZ ", " X VQ 0 H XP wS LJ ", "WY YY 0 Z O T SM ", " Z U 0 xF S YZ", " W 0 K W X ", " Qi Z X HZ 0 K Y OV ", " RZ H xK 0S W Z X ", " u YLX F S0 Y L", "ZP M XW 0 YVW S ", " Z XO KW 0 Z Z ", " Y OY P Y 0 W X ", "Yy Z Q TSW V 0UvZX ", "L Y V w YZYW U0 ", " U ZHSS X Z v 0 ", "XU V S Y M X S WZ 0 X ", " U K BL O X 0 ", "YP XP ZJ Y V ZX X 0 ", " T WYJ Z L 0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = 159;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> chain = {"0 U L U VYzW ", " 0Z Z ZY ", " Z0 ZEZZ SZ Z ZQ Y", " 0n ZP aC ", " Zn0 UVXPZYX ZWH", " E 0 I Z Z W ", "U Z 0 ZW QZ ", " Z 0 U ", "L ZU 0 Y vZ Q Y", " SPV 0 U J ", " ZZ X 0 ", " P 0Q P Z", "U ZI U Q0 Y", " Y Z YU 0Z L W W", "V XZW Z0 ZZ ", "YZZ v 0 ", "zY Z Z L 0 WW ", "W Za Q Z 0 ", " QCZ Z QJ P WZ W 0 Y", " WW W 0 ", " Y H Y ZYW Y 0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = 171;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> chain = {"0 STU V X Z R ZY B D S Wd XY ", " 0 I X L Z Y WZSW ZZ N ", " 0 Y ZZ PS V V Y R X", "S 0 P ZN Y X ZY XU O XY YCZ X X R ", "TI 0 ZY Y n U Z q QPZ Z Zs N Z Y IS GV", "U 0 Z N Y Y XW Z UZ YQ C Q R Q ", " 0 RYg X L Q U ZZY Q W UP T Y ", "V P 0Y p Z ZY ZAW Z Y Y Z ", " Z Y0X W ZS T DY XQ N J Z W W RZ ", "X ZZ X0 OM UT Z P S V pL fZ ", " YNYN 0 J YZ B Y Q T Z Y W ZZY", " X Rp 0ZI Z TXZ U Q V S Z ZZ ", "Z Z YYY WOJZ0 U V T Z V Y X NZ X ZW ", " Z g M I 0 R Z X V Q W R Y", " n Z U 0XE R BHVZYVV Y ZT ", " L Y S YZ X0W YX v U OW P z Z USZ J YU", " UYXZ Z V EW0 C WYD Z Z WEQM J SXY E V", "R PX T R 0 wZ Z W V Y F I I ", " S Z UB T YC 0Y L Y TZ Y B T xU Z ", " T X Y0 VxU ZT X ZS HZW S ", " Z L D TZ 0 T OXx XW BLo Z G", " Y X Y X vW V 0 OU ZH WS 8ZB ", " Z qW YZ R Y LxT 0 P Z W V L Z ", " Q X UD U 0 WV I I LYY X Z", " Z Q UV B 0 U S VM Z SZR HY WB ", "Z ZQ ZHOZ Y W 0 Y CUV I Z WYUZ SZ Z ", "Y VXQ VW w Z OPV 0H R z YU ZNX T XZ ZZZ", " UP N T Y Z ZZTT U U H0 W U K R W V ", " Z Z P Q Y Z Y 0 ZYVZsY R U SWFY Wr", " UYJ V WZ X Z S W 0 S Z SU XW X Y X", "BY ZU Z VPE I CR Z 0TMZZ W IYeGJI W K", " O Z S X Q Y O U Y T0tQVZ QR P Y VZ", "D Z ZZZ M X IVVz VSMt0 W VZ T ", " WVXs ZA YV V WB x W M Z ZQ 0Y RR yKV X ", " Z Y YYWW Yz Z IYUs ZVWY0 ZZ WZV Z I", " S Q V S V ZXHV Z U YZ Z 0 N Z Z Z", " W YN Q XQ SW Z W 0W ZK Y", " C Z Z S S Q NW0Z MS T ", " YZ W p N B LZWZ U R R Z0 y WJ YH ", "S L Z JYT L YRYN R I RZZ 0 TYW ", " ZCUYW U o Y UX XY V Z 0l T ", " P ZXW S H WL HZ KUWe Zy Tl0 H Z W ", "WZR Y W Z Z S XY T G KW yY 0 ZRL ", "dZ X QT Z SFxWZ Z S RS JP VZZ W H 0X WZ W", " f Z T X U ZX W I V ZMW X0Y ", " N XI RZ WR JYI W ZWFX T KSJ T Z Y0 Z X", " SR YZ 8 B Y Y Z ZRW 0 t", "X ZZ E ZS Z ZV YW Y LZ Z 0 ", "Y RGQYZ ZZ Y I B ZZ W V X TH W 0 ", " X V Y Y UV G Z Z rXKZ IZY W Xt 0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = 121;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> chain = {"0 XY Y ", " 0 Y Z Z EVZ ", " 0 ZZR X Y V RRQ ", " 0T O E T M s V ", " ZT0 D T ", " Z 0 Y ", " R 0 H w Y o W K", " Y 0 W Z ", " 0 P", " 0T ", " Z T0 I V ", " O H 0 Y ", " 0 Z ZP C R ", "X w 0 Y T v X NZY ", "Y E 0 AR ", " X Z 0 F YN ", " Z D Y 0 W X K", "Y T 0 X ", " ZT 0 Y Z zG ", " W P A 0 O ", " R W 0 Z T ", " Y Y 0 r T Y", " YM 0 ", " o OZ 0WZUU ", " Y r W0 ", " Z Z 0 Q Z", " I F U 0G O", " E W v X U G0 UW ", " V s X 0 ", " ZV V CX Y 0 m ", " N z T Q U 0 ", " T RN G W 0 ", " RV Z T 0 ", " R Y Y m 0 ", " Q Z 0U", " K P K Y ZO U0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = 237;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> chain = {"0 Z Z Y Z ZZ L W Z W ", " 0 Y U Uw K ", " 0 X X L L Z ", " 0 Z YER T Z ", "Z 0 S U O V w Z W ", " 0TY Z O WK ", "Z Z T0 BMCY Z Z ", " SY 0 Y X W ", " 0 ZQ M ZU X Q W X ", " X 0 Z Z ", " U Z 0 YT Y Y XWK Z O", "Y Q 0 X L Z ", " 0X Z Z Z WL Z", " YXX0 T D X XX Y Z ", " M T 0 Y ", " O 0 U U Z O ", " XY Z 0 P L V n Y", " E 0 Z D ", " R Y U 0 M R ", "ZY Z 0cM ", " L U U c0 B Y W ", " Y M 0 Zz R Z X ", " T 0 S O T", " L 0 RP N ", " ZX Z 0 B Z L ", "Z W S 0 V W ", "Z V K D Z 0 W Y L ", " z 0Z V TTP ", "L Y X R WZ0 T ", " w M P V 0 A ", " ZB Z P O B 0 wZ Z ", " U M Z B 0 Z L Z ", " OCX R 0 W P Z ", " Y Z R 0 X ", " U W X L V wZ 0F T ", " w K X N AZ F0R X ", " LT W Z W T W R0 ZYO ", "W T X 0 U ", " Z X Z Z YP P 0 ", " Z Z Z Y L 0 P Y", " Q Y X Z 0 ", " D W ZZZ Y 0 Z ", " W OV L T OU 0 ", " KZ W Z 0 ", "Z W n T P 0 ", " X LZY X Z 0 ", "W Z L 0 ", " O Z Y T Y 0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = 213;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> chain = {"0 W X S Z Z Z", " 0 Y Y ", " 0 U Vw D Q ", " 0 X X X ", "W 0 Z WY X ", " U 0 G ", " 0 Q ZVv Y S Z", " 0 O Z PW ", " 0 O Z T X ", " Q 0 k ZZ S ", " Y 0 ", " V O 0 H V Y ", " wXZ 0 SD S ", " Z O 0 C ", " X V k 0 ", "X v 0 R I ", " ZZ 0 H ", " D Z 0 Y X Z ", "S Z H 0 ", " Y 0 x ", " Y 0 F Q ", " V R 0 T ", " T S F 0 ", "Z S D 0 KJ O ", " W 0 T ", " Q Y K 0 YK Z ", " X C J 0X S ", " XS I X YX0 N", " Y X O K 0 E ", "Z Y Z T T 0 ", " S H Q S 0 ", " P E 0 ", " G W x Z 0 ", "Z Z N 0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = 308;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> chain = {"0 N V Z T ", " 0 TV Z X TW OY ", " 0 Z M V ", " 0 P LV", " 0 x Z Y ", " 0T U p w T X P ", " T0 X Z ", " T 0 G N Z K J y ", "NV 0 R M ", " 0 C T ", " XG 0 U O ", "VZZ 0SVZ W Z ", " x S0 Vl Z W X", " P N C V 0 Y Z U G ", " U Z 0 V E ", " V 0H O NX T M Y K ", " l H0 X NY W ", "Z 0 W C Y OI U WR V ", " O 0 YX B ", " V W 0 W uZ ", " Z Y 0 W T ", " Z Y CX 0FX R ", " KR Z X F0 Y KR T ", " X Z T X 0 ", "T W N 0 Z ", " YYBW 0 WR V ", " Z N 0 W X ", " T EX 0 Q ", " WM Z O u W 0 W X", " I Z RW 0 Z N ", " p Y 0M ", " Y T U Q M0 Y P ", " J WR WZ 0 ", " w U MW K 0 ", " V W T R N Y 0 ", " O 0T ", " Y T M U Y W T0 x", " R X 0 ", " X T 0 ", " y O K V P 0 ", " L P G ZV 0 ", " V X X x 0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = 209;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> chain = {"0 ", " 0 K K p W", " 0 D K ", " 0 Z ", " 0 C ", " 0 F ", " C 0 q ", " 0 H G l ", " K 0 ", " 0 r MW ", " 0 H V ", " H 0 v ", " 0 X x G ", " 0 V ", " G 0 ", " 0 O r O y ", " F 0 6 ", " r X 0 t W ", " 0 s T V Z R", " M t 0 L ", " W 0 Y ", " 6 0 Q o ", " q 0 O ", " 0 Y R ", " O 0 u ", " K sL 0 Z x ", " l V 0 V ", " D r 0 f ", " x T 0 V D ", " u 0 ", " O f 0 C ", " v V Y Z 0 ", " K Y C 0 A ", " Z 0 ", " V 0 V", " R 0 ", " H Q 0 ", " y V A 0 ", " 0j ", " p V W O x j0 ", " G 0 ", " 0 yI", " o 0 ", " D 0 V", " 0 ", " Z 0 ", " y 0 ", " W R V I V 0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> chain = {"0 Y H F m Z W ", " 0 X S W ", " 0 B I ", " 0 D U ", "Y 0 Y RY V ", " 0 S Q ", " 0 P U OK M U q ", " B 0 H Yd J ", " Y 0 O M P Z ", " P 0 ", " 0GN ", " U G0 ", "H D S N 0 ", " X O 0 j ", " K 0 T ZF m ", " H 0 X ", " R 0 ", " Y M T 0 ", " S 0 ", " X 0 V ", " W U Z 0 O", "F O F 0 C ", " Y 0 S ", " qd 0DH ", "m U D0 Y ", " I V M SH 0 ", "Z 0 ", " P C 0Rz ", " jm R0 ", "W V z 0 ", " Q J 0 ", " Z Y 0 ", " O 0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = 322;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> chain = {"0 O ", " 0 r u B E ", " 0 L W wU Q C Y K ", " r 0 X H", " L 0 HO s G ", " 0 V H g X Q ", " W H 0 N R ", " u O 0 ", " 0 D C Y ", " wX V 0 ", " BU 0 X ", " D 0 Q n ", " H 0 r K", " s N 0 G P ", " 0 g X ", " 0 C Z K ", " Q 0 y b", " 0 B V ", " C 0 m ", " r B 0 Z ", " C 0 N ", " Z m 0 E", " Q N 0 ", " 0 YO W ", " Gg 0LG ", " gR L0 V ", " EY C X YG 0q T ", " G X P Z O q0 ", " X n 0 ", " K W T 0 Y ", "O Q Y yV 0 ", " K V Y 0 ", " H K b E 0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = 230;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> chain = {"0 Q K q z Y E k ", " 0 P B Z Q I ", " 0 SL W Q ", " 0 WU a Z K ", " 0 Y X x ", " W 0 m S SM I ", " U 0 N L U ", " P m 0 x s Z ", "Q 0 6 F N ", " 0 HZ N V ", " 0 Y T f U U ", " a 0 Wzv V A z ", " Nx 0 WP L K ", " 6 W 0 U KSy X P t ", " z 0 M W ", " B v 0W Q A Q ", "K WU W0 L Y ", " P 0 W 4 ", " L H 0 R ", " S Z L 0 P G ", "q L K 0 z ", " F S 0 R E ", "z y Q 0 4 J ", " YVL 0 U R ", " Y 0 Z q ", "Y T Pz 0 Z ", " ZX s W 0W H R ", " Z W0 P V", " S Y 0 L ", " 0 r l d ", " 0 S v X r ", " S f M 0 D L ", " M Z H 0u XX G ", " W x U G SDu0 ", " R 0 Z ", "EZ 4 v 0 p ", " I N X r 0 ", " W L X X Z 0 ", " R U X p 0 X ", "k U KP 0 L", " K A A 4 q lr X 0 ", " Q t Z 0 t ", " V z Q R G 0 ", " E R t 0kx ", " I J P k0 ", " Q N U d L x 0 ", " V L 0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = 242;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> chain = {"0 U J T R", " 0 N S ", " 0 i D Z ", " 0 D Xk X J ", " 0 jy W ", " D 0 Y I R ZU ", " N 0y Z D q R S ", " y0A k W P ", "US A0 fWA O ", " 0 W Z ", " Z 0 I X Q ", " 0Q I e S", " X Q0 7 ", " k YD f 0Y S W R ZA ", "J W I Y0 X V ", " A 0 ", " X 0 Z D V ", " j 0 S ", " y W 0MZ R ", " i I M0 u D U ", " Z 0 W c", " S u 0 W ", " J R I 0 s V Y ", " W 0 T TQ ", " Z 0 P ", " 0 H ", " 0 y ", " k 0 I ", " DWW 0 ", "T Z W D 0 M ", " U R 0 yt Z S ", " O 0 F ", " q s y 0 C Y n ", " D W X t 0 ", " 7 M C 0 ", " Z S T Z 0 V ", " R AX V 0z ", " Q U V Y z0 ", " V H F V 0 U", " S e YT y S 0 ", " Z P Z R QP I n 0 ", "R S c U 0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = 258;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> chain = {"0ZOV ZPYZV LPX YZBZxZ W VX X ", "Z0X S X YWPY tOwWYVX WTYXEZGW ", "OX0V SO GX NYVS Z ZNG WZnQVLB", "V V0LXQXYZVo R U VWXUONZNZTVALT", " L0WX UN ZEOZLX U ZHZRzUzUWRQ", "ZSSXW0 XK ZTX ZYRTQ YT X N O", "P OQX 0Z YQYX SYZXXv OV A Q", "YX X XZ0VY Z ZV ZYRGjWWR TRZ", "Z YUK V0HZUY XZU SZ YYqULX PYQ", "VYGZN YYH0YMXP XOXH L WZRMXV ", " WXV Q ZY0QZI YVNgWT PZQVYAq ", " P oZZYZUMQ0 UjZU QVRVVOSUw RUQ", "LYN ETX YXZ 0LW TYZt LSWZZ ZQUY", "P YROX Z PIUL0DZZZ WXWZDIY YZZ", "XtV Z SVX jWD0 Z QRZNR TR ZLYZ", " OSULZY Z YZ Z 0LZM ZTLYXZZpV ", "Yw XYZ UXVUTZZL0 XTY ZJ wY YK", "ZWZV RXZ ON YZ Z 0SUNOYVFYWWQJ ", "BY WUTXYSXgQZ QMXS0HQTR ZZ Z Z", "ZVZX QvRZHWVtWR TUH0 wC ZWTGIWW", "xXNUZ G TR XZ YNQ 0V OZWL E Z", "Z GOHY jY VLWNZ OTwV0UWMK TY Y", " W NZT WYLPVSZRTZYRC U0ZWPXZWZZ", "WT ZR OWq ZOWD LJV OWZ0J WRD Y", " YWNz VRUWQSZITY FZZZMWJ0GO QXI", "VXZZUX LZVUZYRXwYZWWKP G0LWcKO", "XEnTz XRYw ZYW TL XWOL0OtVN", " ZQVU MA Z ZZ W G TZR WO0k W", " GVAWNATPXqRQYLp QZIEYWDQctk0 F", "XWLLR RYV UUZYVYJ W Z XKV 0O", " BTQOQZQ QYZZ K ZWZYZYIONWFO0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = 98;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> chain = {"0ZXQ XZQBdZZWWUGGX ZHZYySwW KRMYQZySZCWR", "Z0ZFXVYRVLO ZSZWPYrXXIWsYW VUXYWYoZYZVTRK", "XZ0YZT IYZXDYYZQ KZZQZSSOg YZfPZXUWR USNS", "QFY0YXfZZVPPLXZVXXUZZQET YVZoRCZZBPZYYUZW", " XZY0ZQZuZWBUOSZWXRX YWZXYJVZXXUSCPX JVTZ", "XVTXZ0NZRXYWZBBQ RNTZUUZQU UXZUJVNNu UFM ", "ZY fQN0LWUVZRZSVRWzYIZMR yPWWOXEUW RXZV T", "QRIZZZL0YY PSZRZQZXWZOZOZZVZWXVTZJVZVZOWY", "BVYZuRWY0XSNZZKXWKXZYVZXZXmZZQOLOYXRXYXQZ", "dLZVZXUYX0WYZTWNW TXtS ZMYUUUWUXTZBSYLW ", "ZOXPWYV SW0VXZSYVLZZVZLYX uZgFW ZUZOWT O", "Z DPBWZPNYV0OTYYZYFJXYZXRvZOUu KRTRSSV yW", "WZYLUZRSZZXO0WnSZU XZYJAPZMHXzY FZIUZZSSZ", "WSYXOBZZZTZTW0XRRC ZZSOHWZYZTuXZZYYFOSJqX", "UZZZSBSRKWSYnX0OWWM YsRZZJZYVSZWYZYZCVIKZ", "GWQVZQVZXNYYSRO0 SRZZYPUX EUtNvqYVZTZWVyY", "GP XW RQWWVZZRW 0LPVZVIJjXZYUsXYRP OYLZO ", "XYKXXRWZK LYUCWSL0 HXYRWZIZSVTZLVZZBWZZSX", " rZURNzXXTZF MRP 0VPEXZZXQX5 NVLOUGVWHaY", " XZZXTYWZXZJXZ ZVHV0YVYDGZMZSVQXUYYYYETUZ", "ZXQZ ZIZYtVXZZYZZXPY0OVEXNNYZZZjWZWVWZTXO", "HIZQYUZOVSZYYSsYVYEVO0BAPXZUZXJ tZ XYZUZX", "ZWSEWUMZZ LZJORPIRXYVB0RZDFKWZTXHHMZWWWXW", "YsSTZZROXZYXAHZUJWZDEAR0RYK w VXNPXLIVFWH", "yYO XQ ZZMXRPWZXjZZGXPZR0LQ XvtZZNZXp SSX", "SWgYYUyZXY vZZJ XIXZNXDYL0YJUXWVTXUYZYZYX", "w VJ PVmU ZMYZEZZQMNZFKQY0ZUTXOY RTYOZYZ", "WVYZVUWZZUuOHZYUYSXZYUK JZ0 Z ZTZTZ KUIP", " UZoZXWWZUZUXTVtUV5SZZWwXUU 0KRUPZKSWZCWB", "KXfRXZOXQWguzuSNsT VZXZ vXTZK0TZHZSLQPV U", "RYPCXUXVOUF YXZvXZNQZJTVtWX RT0ZYZTXZYZTW", "MWZZUJETLXWK ZWqYLVXj XXZVOZUZZ0ZZ TXUFWZ", "YYXZSVUZOT RFZYYRVLUWtHNZTYTPHYZ0OWV WSZY", "QoUBCNWJYZZTZYZVPZOYZZHPNX ZZZZZO0UTXUZVU", "ZZWPPN VXBURIYYZ ZUYW MXZURTKST WU0XYQZTY", "yYRZXuRZRSZSUFZTOBGYVXZLXYTZSLXTVTX0WSVUZ", "SZ Y XVXYOSZOCZYWVYWYWIpZY WQZX XYW0YtY ", "ZVUYJUZZYLWVZSVWLZWEZZWV YOKZPYUWUQSY0FQD", "CTSUVFVOXWT SJIVZZHTTUWFSZZUCVZFSZZVtF0VG", "WRNZTM WQ ySqKyOSaUXZXWSYYIW TWZVTUYQV0Q", "RKSWZ TYZ OWZXZY XYZOXWHXXZPBUWZYUYZ DGQ0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = 85;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> chain = {"0UWW WZ XHYNZ Z ZT XKOZ YZ X ZDUS XTZZQ", "U0 ZP ZJ W ZVNI WSwP E ZQUXX U XO G ", "W 0LLVj MQ XXIXWXZZ ZIZ XZxZZWNGY U X ", "W L0ZTWZ Y YY ZTZ UXkZO XEXQ YY ZY Y XY", " ZLZ0TZ ZZZZ XW Y QNWZZF I VZ ZUZZIVQW", "WPVTT0 UZZ Y XYZOR Z Q Z XXO SOY ZW U", "Z jWZ 0 BYLZI L Z C YLZX Z VUZZMUZ ", " Z Z U 0Y XVQZrZ XO LUNVKDZJYoYvQUW P", "XJM ZZBY0WTUWZ NVRX U QSWYXGKWNV C Y", "H QYZZY W0S MXVWZXWr Z W YnQ Y NYYZTZZ", "Y Z LXTS0 ZY X ZRLZJ Y MQ C ZYW QYn", "NW YZYZVU 0UWyZKMYTMVYZXY L W YHZUzO ", "Z XY IQWMZU0B X L Z zYO zQRzPV ZkY ", " ZX ZZXYWB0 RNGQnQ X GUW WU XLQS ", "ZVIZX r V y 0ZW ZFGTZZYXWFSWZUX L ", " NXTWXLZ W Z Z0 S LQYZ WQFYPB V WUZ ", "ZIWZ Y NZXKX W 0RXZ Qt XXIY R 8W Z Y ", "T X YZZ VX M SR0RLXQNXZ Z UVT RXs T", " WZU O XRWZYLRZ XR0IzTYJZPu Z NIXRHWV", "XSZXQR OXrRT NFLZLI0XJ yshY YWZLrZ V", "Kw kN C LMZGGQ XzX0 YTyYZ zQZ VOZYKU ", "OPZZWZ U ZV QTYQQTJ 0NYYZ Z W X WVZN", "Z IOZ Y ZJYznZZtNY YN0QQZV UZ XYZ V W", " EZ Z LL ZYQZ XJyTYQ0YZYUXYZR Z TYVEZ", "Y XFQZUQWYXO Y XZZsyYQY0 V PZPZoYVZ QZ", "ZZXE XNS Y XXWX PhYZZZ 0RyYJXqOM C Y ", " QZXIZ VW M z WQIZuYZ VYVR0Q UX ZL UW Y ", " UxQ ZKYYQ QGFFY Z U yQ0ZZRMYYZUEYX ", "XXZ VX DXn LRUSY UXPY Z0X UFUZWNQW ", " XZYZXVZGQC zWWP Z zWZYZJUZX0 SX NX S", "Z WY OUJK WP ZBR Q ZPXXR 0 NNYNX ", "DUN ZYWY VWU U YZ RZq MU 0 ZR TXJX", "U GZZSZoN ZY UXV8V W X oOZYFS 0ZZS YZ", "S YYUOMYVNYHZ WTNZV YZYMLYUX ZZ0 ESYzZ", " ZYUv YWZkX ILOXZ V ZZ NRZ 0 ZZJ ", "XX Z ZQ Y UYL WZRXrZ TZCUUW N SE 0XZQx", "TOUYIZ UCZ z QLU XRZYWVY WENNYT SZX0 XW", "Z VW W TQO S Z sH KV V Y YQXNX YZZ 0 ", "ZGXXQ ZY Y W UZ EQ YXW XJYzJQX 0S", "Q YWU PYZn TVV NWZZ S XZZ xW S0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = 102;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> chain = {"0Y Z Px J ZVT VPPmR WY PZZWZZY X PZZYnOWYP", "Y0FFZ X zZM UyBZERHMY ZZ ZNQ YX STY K AT ZRSZ", " F0rRXZZ L Y YZNHPNtVZZ F WTJH UY VWZD G P URS", "ZFr0 QMRYZUUWY P ZPZZZ XTS TYWFUR xV BuTZsZ ", " ZR 0V VJSSY Z MTZYTL AxWZQJZSZT R YV lW Z", "P XQV0 V ZZ ZUX WW ZW YZU YZ ZW kVy ZP PWZCZZ", "xXZM 0 URT YQXZZG y W X UPZ Y ZC ZPZWQVHSWT", " ZR 0V v UXZWIUMVVXVXQZR O F ZR UW IYQ ZZW", "Jz YVVUV0VW SPT Z ZWVLZXQOS XZRV P ", " ZLZJ R V0RY Y8VQM Z XEk YVZV Y W Y Z cZZXV", "ZM USZTvWR0VL WYR F TP XUZOSHYYYZ wR Z MUU J", "V YUSZ YV0ZSW W V ZUSKYZPKZVWXRYYNuT VHZW", "TU WY YU LZ0 L FvQC JX ZZZ PPMPTYZYZZPQXZX ", " yYY ZQXSY S 0NW TGXWMZW WYZW ZSZ Y Y ZZX QO Y", "VBZ UXZP8 WLN0 UIZPIYOJZZTU 4 IRTS Z ZZ", "PZNP XZWTVW W 0T ST TWFJ i zNZZ SUxQ Z VS JQ", "PEH ZI QYW T0 XYYxzXY QU UR ZDKZCZQI U yY", "mRPZZWGU MR FT 0YZTS PZZ XZXZ HU CVW ZV", "RHNP W M VvGU XY0U VH OZTZ YY M YZ ZVGZ xPZ", " MtZM yV F QXISYZU0 ZYhZ WXYZZC Z z HZZZp ", " YVZTZ V Z CWZTYT 0vW QYgRZR Z YVpX PZVNYXW ", "W ZZZWWXZ T MP xSVZv0V ZPZ NTZHYVQ TrZ ZZFWRk", "YZZ Y V P JZITz HYWV0XZ WRYZZVX OMY W W W VU", " Z XTYXX X ZXWYWXP h X0XXKEU ZUp YXX ZYYJ YQ", " FTLZ Q EXU OFYZOZQZZX0YDZWYUWUZY ZZ YZXZFV", "PZ S U Z kUSZWJJ ZZ YP XY0ZMYWqvY WZSY YY ZU Z", "ZNW A URZ ZKZYZ Q TWgZWKDZ0UE V YZTYUZ ORTZ M ", "ZQTTxYP WYOYZZZiUXZXR REZMU0XZDWOVP Z UTFVWZ ", "W JYWZZOVVSZ WT Z YZNYUWYEX0UYV y XWZZG YHRZ", "ZYHWZ LZHPP Uz XYZRTZ YW ZU0 TTHYQYAYZ R ZZY", "ZX FQZ FZVYKPZ NUZYZ ZZZUqVDY 0W SY ZT Z UZUZp", "Y UUJWY X YZMS4ZR CZHVUWv WVTW0 SXx PtVX X ", " YRZ QYYVPZ Z M YXpUYYO T 0 SKYX Y KLWZY", "XS SkZZO ZWT I Z YV Z ZV HS 0 ZIMX X R V", " TVxZVCRSW XYYRSD YZVQOYYWTPyYYSS 0 CKIwUQ FY", " YWVTy RZ TUK Z p MX ZY Q XKZ 0 TLYWMXW ", " Z ZU YwYYYSxZ XTYXZSUZXYZxYI 0BTXH VYI ", "PKD RZPWX RYZ QCHZ r ZYZ WAT XMCTB0 N VVWN", "Z PZ Z NZZ ZUVzPZWZ ZY P XKLT 0 MG QW ", "ZAGBY WIRZZuPZ ZQ G Z Y YOUZZZtY IYX 0NRTDX ", "YT uVPQYV TQXZ ICZHVZWYYYRTG V XwWHNMN0YZ ZS", "n PT WVQ cM X V V ZNZ JZ TF RUXK UM GRY0 ZR ", "OZ ZlZH ZUVZQ SUW ZYFW XZZVY Z LRQXVV TZ 0 B", "WRUsWCSZ ZUHXO xZXW ZU WHZUXW WYVQD Z 0Z ", "YSRZ ZWZPX Z ZJyZPpWRVYF MZRZZ Z F IWWXZR Z0R", "PZS ZZTW VJW YZQYVZ kUQVZ ZYp YVY N S B R0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = 98;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> chain = {"0 HZPYGNXZ QTWR XRI BYZZ YZ V uVY YOFXWYVQHX ", " 0ZO TZ UYQYZYFNNUSGXK M Y GOS XWV RZEEZ Y", "HZ0 WX F WRJV VUXXYPQ YYjX P YO N V XZZZ T", "ZO 0Y SSYYZ QLK HNE x YZOY QQ ZTR ZZ ZSFZ ", "P WY0O O YVWONXZTVUT zMZ O DLX PZ FG S Z ", "YTX O0ZO EZP OXY ZxY KLUZ QZKY Yu E OC QR ", "GZ S Z0 QY N ZZ R NXz TS YZZEZ L ZU RZZWDY ", "N SOO 0ASI OW N T Y ZS ZZYX M TZXEWNMPY X", "XU Y QA0 W Z K CXW XY kV W YKXUX Z ZUZVh T", "ZYFYYEYS 0QZM YW NVYX ZZWPMS RTIT Z X PX YZI", " Q ZVZ IWQ0Z QS TCNZNQ XYuZS U ZU ZBCZ YZ ", "QYW WPN ZZ0ZYYYHVTTZKIZ V W Z XWTI U JZUFZ", "TZRQO ZM Z0 LQWZYZXLY VuYP PZ ZOQ Z O LV", "WYJLN ZO QY 0 D Z SYTQX PDRV uZJTY Z VYXZE ", "RFVKXOZWKYSYL 0pZ YPSIVZ Y W LW AB B Z Mr", " N ZX W YQ p0Zs UR Z X FYOZY PF T YB LZVJYJ", "XN HTY C THWDZZ0VX WJ Y zEExUMMX SZXZX VGUV", "RUVNV RNXNCVZ sV0XVHXUXV PQY ZKG WkN SWYVOz ", "ISUEUZ WVNTY XX0Z IzWYTZXXZA iTZYXSU O Xw", " GX Tx YZTZZ U VZ0Q t PxAVp AL RZ ZSFZZR", "BXXx YNT XNZX YRWH Q0 PEs C WZZBV QUY KVS YX", "YKY X X QKLSP JXI 0YJ G YOZP VV HZ kUO w", "Z PYz zYY IYYSZ Uz PY0Z WTZXTYJ S R oYGUUZ", "ZMQZMK ZXZ TI YXWtEJZ0XD DZ O L VXNEKUZ U", " OZLT ZY VQVX VY s X0 H SVUW Sp JVDTVX", "YY Y USZkWuVuXZ T D 0 Q YKYN ZTUp YIY ", "Z Y OZ SVPZ Y F PZPCGW H 0 Z PWYQ SXQAH XW Z", " GYQ Y MSWPPYYzQXx TD 0UwF VUP OG YZ X Z", "VOjQDQZZWS D OEYXAWYZZSQ U0X YW ZJZ ZMT ZG", " SX LZZZ U R ZE ZVZOX V ZwX0ZY W Y VUY ZV", " ZXKEYYR ZPV YxZApZZTOU F Z0W Z Ku N P Z ", "uXPT YZXKT Z W UK BPY W P YW0 NS OYZVYQMVZQ", "VW R XIZX u PMG V J YWVY 0WZX ZFSZN X", "YVY Y MUTUWZZ FM iA L KYUWWZNW0ZWXTU Z XYV ", " O PuL X TOJL X TL VS YQP SZZ0lH Q UO ", "YR ZZ T Z IQTWT WZ QV N YK XWl0TSBUXZ ZVV", "OZNZ ZZZ Y SkY U SOZ uO XHT0W SYTU YW", "FE EUX XZ AYZNXRYHRVSZXGJ Y T SW0V XW W ", "XEV F EZ BU ZBBX SZ Z XpTQ Z Z U B V0 U ", "WZ GORWU C ZSU N UAY NVZ QUS 0MS W v", "Y XZ CZNZPZ ZVBLXW ZK oEJpHZZV YFZ XY M0 XFZ ", "V ZSS ZMVX J Y Z YOSVkYKV MU QS ZTXUS 0 XZ", "Q ZF WPh ZOXZVVV FSUGUDYX TYPMZXU UW X 0 ZZ", "H ZZ QDY YYU Z JGO Z OUZTIWX VNYOZ WF 0S ", "X ZRY ZZFLEMYUzXZY U VY ZZZZ V VYW ZXZS0V", " YT XTI ZV rJV wRXwZUX ZZGV QX VW v ZZ V0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = 96;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> chain = {"0ZZY ZXZZ UYYIT PZZEZ YZXBYZT VSPVS W", "Z0T TZoYUTYZTVZYqTUYZ ZQS NVmP ZZWUZZY", "ZT0RZZ NZXZLZY ZX nKYS ZTZPXZUYX ZZW ", "Y R0BjzT VXZXEXOj ZBV WZ U XSSCYQZ SY", " TZB0ZK USTZTSTrXZ KZYOPMOZWWZYP XIUY", "ZZZjZ0TYY SZY rZ vZTSXYDG ZTXVZZUUZN", "Xo zKT0DTPCISPXP ZUWY KVJT ZL W O Z TX", "ZYNT YD0 X L ZWVV ZZJ YL TZYYZSYnZ MI", "ZUZ UYT 0YVZLM NVCTR ZHHKMWZVV ZSZ XZ ", " TXVS PXY0TZWQJZOQIZXWZZWZ ZkSQYYGYWSW", " YZXT C VT0ZXRNzXP YKZtBYWjT vWZQY T", "UZLZZSILZZZ0k JZMGZXQVUZVvUUZTXZ G xY ", "YTZXTZS LWXk0OCT USkEXWZMKFDVV NuWRZZR", "YVYESYP MQR O0ZyY Z Z SWWXY UZXQYYY ", "IZ XT XZ JNJCZ0KV YXUTTL N MY WSZR SQT", "TYZOr PWNZzZTyK0PXDSNYiEDHIZyoTYXRBj Z", " qXjXr VVOXM YVP0WWTZLVWZzWW PQW UTZIZ", "PT ZZZVCQPGU XW0ZV ZZYTZZTMYY ZZZP ", "ZUnZ U TI ZS YDWZ0YK YVZNQ ZsSZQVOZZ", "ZYKBKvWZRZ XkZXSTVY0YRYUYY XYRZPUXI Z", "EZYVZZYZ XYQE UNZ KY0T t WVZX W XVYX", "Z S YT JZWKVX TYL RT0 K WQZSJSEXZVX ", " Z WOSK HZZUWZTiVZYY 0UM KZvZZ qV T Z", "YQZZPXVYHZtZZ LEWZVUtKU0 ST FU MwWz Q ", "ZST MYJLKWBVMS DZYZY M 0XZ LYSZ IZIX", "X Z ODT MZYvKWNHzTNY SX0MTZ ZVF UXL", "BNPUZG TW WUFW IWZQ WWKTZM0Y TPVYZYR", "YVX W ZZZZjUDXMZWZ VQZ TY0uMWR Z NUY", "ZmZXWZLYVkTZVYYy T XZZvFLZ u0 PPYZZW T", "TPUSZT YVS TV oPMZYXSZUY M 0JToY Z L", " YSYXWZ Q X UWTQYsR JZ SZ WPJ0QOU YZZ", "VZXCPV SZYvZNZSYWYSZWS MZVTRPTQ0 ZZW ", "SZ Y ZOYSYW uXZX ZP Eqw FP YoO 0 ZpYZ", "PW Q Z nZGZGWQRRUZQU XVW VZZYUZ 0zG V", "VUZZXUZZ YQ RY BTZVXXZ zI Y Z ZZz0v Z", "SZZ IU XWYxZYSjZZOIVVT ZUZNWZYWpGv0Wq", " ZWSUZTMZS YZYQ IPZ YX QIXYU Z Y W0Z", "WY YYNXI WT R TZZ ZZX Z XLRYTLZ ZVZqZ0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = 97;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> chain = {"0 13", " 011", "1101", "3110"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> chain = {"0 3", " 011", " 101", "3110"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> chain = {"0Q q X c 6 03 ", "Q0 M 72 P 1 R C ", " 0 r m ", " 0 v k y J ", "q 0 4 C i ", " Mr 0 M j C ", "X 0 sS 2 h 6 x O", " v 0 g 4 q J ", " s 0 N Ml ", " m MS 0s 8 ", " 7 k s0 O K k T H ", " 2 4 0 FT E ", " 2 N 0 i Km Q Q", " 0 N hl7 ", " 0Q N Y Vo", "cP NQ0 ", " 0 C k M ", " h O 0 5X V P ", "6 j 0 D0 2v b ", " 8 C 0 l b ", " g F 0 T I 7 h", "0 yC KT 0 M g ", "31 i 5 T 0 S E Y ", " X 0 ", " k K 0 9ft", " M Em 02 G ", " l T 20 ", " 6 S 0 c f ", " R 4 H kVD 0 r U X ", " x N 0 M 0 i ", " q M lI E cr 0 a", " Qh 0 0 ", " iC l 2 7 Ui 0 ", " J 7Y vb G 0 0 ", " C J P gY 9 f 0 ", " V b f X 0 ", " O Q o h t a 0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = 122;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> chain = {"0 G 29 8 l il 8 e 4 ", " 0 1 4 CL z e MZrO X Y ", " 0 pW M 7pK k U 8RT c J6 ", " 0 Q v w C D 0 Q e F ", "G p 0 Y fb L qZ s S j", " 1W 0 g v Q zQie i L ", " 0K k E g W d r ", " 4 K0 e P R u T x ", " MQY 0 PT V v 9 x r 4A w1", " k 0 E8 an h J ", " 7 P 0 Fc Q C j i q d", " Cpv T 0 O MV E f N ", " LK fg F 0 m 0 0 2 ", " b e Ec 0 Z 1 M B T n A", " w vE 8 0 k X h t m I", " k Q 0 2 L", " Q Z 0 v Rf g Pr 33s ", " CL Om 0 o 6 ", "2 P v 0 S Oq Y M ", "9z q 0 z s K y 0 in LAqK", " Z V CM 0 K 3 ", "8 D a V S 0 s EJ ", " z vn z 0 3 c v ", "le QgR 1k O 0 N es L ", " 0 i E0 q 0 O v YP V ", "i e j X R s 0 Wp b ", "l M f Y N 0 x Q ", " u f h2 K O 0U e ", " UQ 9 g W U0 U f k ", " M T i y 3 p 07X P M f 7", " Z Bt oM v 700N I G ", "8r s W xh 0 X00 UY O ", " O8 T P6 K e x N 0 k ", " R id 0 r i s UP U 0 f ", " XTe r n sc Y e Yk 0 ", " N2 3 P 0 ", "e cF 4 q m fMI 0 Y", " SL xA 3 L V 0 ", " YJ J n 3 A EvL Q f O 0 ", "4 6 r w s q J b k G f 0 ", " j 1 d AIL K 7 Y 0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = 61;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> chain = {"0t ", "t0 ", " 0 ", " 0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> chain = {"0E Wm wx u p ", "E0 E KwhkZl HOYx lH d 2 ", " 0T f M N u U TP F ", " ET0 NS LhN A ", " 0 n U 3 H S 0", " Kf 0 nq 7 o ", "Ww 0 JD 3B B G 7 ", "mh Nn 0 Z v R7 T R a", " k S J 0ivq tuPuF zb dk", " ZM nD i0 Z iU1 Yg W ", " l q Zv 0d l s W m", "w U 3 q d0 b 2h MK V", "x N B 0c re8 T F9 ", " H v bc0y 6 f I ", " Ou 3 t y0 Y b l ", " Y L uZ 0 3 p ", "ux h P l2r6 0 2 d ", " UN Rui he Y 0p ", "p H7B7FU 8 p0 O K ", " l 1sM f 32 0 ", " H K b 0 4 6l ", " T oG Y pd O 0 z ", " PA T g T 4 01 c ", " d S 7 z I 10w A", " F b W l 6 w025 ", " 2 R W F K l c 20 ", " d 9 z 5 0 ", " 0 ak mV A 0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = 55;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> chain = {"0 H W ", " 0 L 7 i B s", "H 0 L n 96 S ", " 0J g M4 n w p", " L J0 O t e Z U ", " 0 5 D I d ", " O 0 ", " 0 0 Yd i ", " 0 i ", " g 0 Y Q g ", " 7L 5 0 y WW ", " 0 2 O ", " t 0 N M ", " n y 0 z ", " 0 0 T Q ", " i Me Y 0R v ", " 94 D i TR0 p J 1E ", " 6 Y N 0 g C u", " I d z 0 e ", " 2 0j1 ", " S g j0 cl h ", " QW p 1 0 ", " W 0 ", " nZ J c 0 ", " g l 0 ", " w i Q 0 H", "W 1 h 0 O", " B O vEC 0l ", " Ud M e l0 ", " s p u HO 0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = 151;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> chain = {"0 0 azR I a 3 E d b am", " 0 q42 W z RGz yg c E C ", " 0 K q p D G Wcpq D 7 I s ", " 0 H e Op n Y Nn", " K 0l o o K V f MG Ci S otDL ", " Hl0 w I oZ 9 O 5 J y rhD ", " 0 9 h H y Z 5 Wk m iw ", " q 0 J x H R 5 1 t k1Bjj ", " 4q 9 0 H nw b 5g X 2 Si ", " 2 0 Wr i G j j m wd ", " hJ 0 0 hf p1 h hw y u d Z l d", " p w 0 TUK C 7 K 0 ", " 0 T 0l B d4Q 3 G21Dg ", " I x T 0 3 u UJ 0 ZmTmuO ", " D W0U 0 6 R w S t ", " W oo Hr K 0 o k P J rm ", " Z T 0 N Y 7 E J JwgF ", "0 G o H h o 0 z U5 H 7 e n Q X ", " z e n f 36 0 S fd PbM z O3H VG ", " 9 w 0 0 g a 0 iz", " R OK lu z 0 t j v9 f s2 G v", " GWp O H i 0VzS G P J ", " zc V U U V0 z U i qd 1O ", " p 5y p J 5 z 0 9 DR j o ", " q 1 B kN Sz 0 2 f 2 3 Rhr ", "a Z C t 9 0 t t e T", "z f R h 0 2 0XkY J eFx M9S ", "R D J G j X0 E BJ TBMN ", " y M 5 d Y S k 0Zrx6 O f y ", " g G 5bjh 4 v U f Y Z0 6 N5 ws ", " w7Q RP fg9 r 0 f B p u X B ", " 7 15 Hd i 2tJ x 0 n j W 0 ", "Ic C g 7 G E6 0 Ks E l ", " i y 3 w 7 e f 0 4 y 50 ", "a W J P q F 6 0 Qn 4 ", " n k j E b d x B 0y A i 5 ", "3E u eM f 3 nK y0 s 5 g", " y t O s4Q 0 WDe", "EC dK Z J s D t N j nAs 0v C ", " Sr m z 2 R Bf5p E v0 Y ", " I h T r n MJ W 4 0ZiR ", " YoDm X Z mSm aG j e9 u y i CYZ0 vaW ", "d t k u O S i 0h ", " s D 12m GOt 3 P R T X 5 R h0c 3 ", " L B l 2 JQH 1 h B l 5 v c0 ", "b ijSw 1 w 0 JOor My 0 a 0 ", " wjid 0D gXV N wB 5 W W 3 0 ", "a N g F Gi s 0 D 0 ", "m n d zv T ge 0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = 58;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> chain = {"042 g J ", "40 h h L ", "2 0 g ", " 02 R Ji ", " 20 R D ", " 0 8 g ", " R 0 IM r 8 15 ", " 0 1 L ", "gh I 0 a ", " M 0 ", " hgR 0 ", " D r1a 0 C 5", " 0 h u B", " L 8 0 6 ", " Ch 0v NZ ", " v0 t ", "J 81 0 4W ", " 5 u N 0 ", " J 6Z 4 0 ", " i g L tW 0 ", " 5B 0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = 112;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> chain = {"0 L R kn ja", " 05 O x l ", "L50k q1 jC ", " k05 R V ", " 50 4 3", "R 0 6 ", " Oq 0 D Q ", " 1 0 X 9C s ", " 0 ", " xj DX 0g H ", " C g0 y7 ", " l 6 9 0 j ", "k C y 0 ", "n R H7j 0eX ", " 4 Qs e0 ", "j V X 0 ", "a 3 0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> chain = {"0H", "H0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> chain = {"0HHH", "H0HH", "HH0H", "HHH0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> chain = {"0 8 C Pn N 4U PL q g 2 ", " 0 H YH C r n i L", " 0eQ K f w H b1 H N G ", " e0 d o v E eQ K b f", "8HQ 0 m 0 Z G Ap I 0 ", " 0 S E w L D y 2", " dm 0 o k hD ", " 0 b J B ", "CY 0 0 Z G 8 nJ8T l4 Q ", " HK o 0 s d t ", "P Z 0f j 7 x1 W P V", "n f0FF u OdL z y O ", " f F0r w c ", " GS b Fr0 f 9 Ut ", "N o j 0z M Fn t 0 Y J D ", " w E Z u z0 Qw U cC k ", "4 k f 0 c 4a 7 W y q ", "U Hv Ow M 0h0 K 9 KA", " G d Qch0 9l S GR IdL 6 h", "P 7L w 0 0 H S H ih 1 ", "L F 9 0 B X ", " wh z n Kl 0 9 y a 9", " b D 9 0 7G 6 tS ", " 1 AL SH 0 T Q bf J", " p t 0 qU g ", "qCH x 4 0 R 3N q", " I s1 a G 7 0 z2c x J ", " 8 U R 9G q 0 SK ", " r E B U z 0 z 0Mc ", "g n yc c7 T 2 0 I AG ", " D J U C S 6 RcS 0 Z 1 ", " e 8 O t Q K 0 Iy ", " n Q JT 0 W IH x 0 l ", " N d d y I 0 e x ", " l k Li z y 0B Hc ", " K y 4 Y h b eB0 ", "2 t 6 f 3J 0r E ", " W J y9 t gN 0I r0 ", " b Q aS M Z H 0 e ", " i P D cA lxc E 0 ", " G 0 B qK 1X G1 e 0 ", " L f 2 V Ah 9 J q 0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> chain = {"0 k r I 3 j k ", " 0 4 A y W k", " 0 p I nJ ru ", " 0 5 C Y F v ", " 0 p Jw Xi 7i b X ", " 0 O 2 L y C ", " 0 D F N 6 ", " 4 p 0 V z FW G ", " 0 d c 3 2T Y ", " O 0 L D l R k a j AS ", " J V 0x Nm R t W ", " w x0 M Ad H U v tw ", " 2 0o w I u g h 4 H ", " p X L Mo0 L X W E 4 e ", " i D N 0 ", " m 0 h 5 K F ", " A d L 0 e j BP Z 4 ", " z DR 0O9 l Og A I ", " F O0 7L hQ 1Y hsVQ ", " yI 9 0 AU r M 9 xcK", "k e 0 DJ Q V I ", " c w l7 0 C DZ u v ", " N h L 0 ", " n 0 B c N ", "r J 7 l I A C 0 5 N Ok X ", " 5i A U 07 P V ", " d X 5j 570 m 8 ", " W bL R u 0 z h ", " B 0 F3 ", "I k H PO N 0 b 2 ", " C gh 0 W", " U Q DD m 0 7 G ", " W A rJZ P 0N ", "3 r 3a g N0 g z 1 ", " u v 0 e ", " ZI1 Q O g 0 z ", " t E YM k Fb 0 M ", " YX 3 z 0 i ", " y6 h 9 B 0 F", " F F2 W K z M 0 ", " WT 4 7 i 0j ", "j j t h Vu c 8 e j0Q ", " w4 s V 2 Q0 ", " G A e 4 V Iv G 1 0 ", "k C S H F Qx NX h 0 ", " v Y c z 0 ", " k K W F 0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = 96;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> chain = {"0 FVnu ", " 0c t l ", " c0 w o 7", " 0 Z h ", " 0 LC ", " 0 y ", " w 0 ", "F Z 0O ", "Vt L O0 ", "n C 0 ", "u o 0 ", " l h y 0 ", " 7 0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = 144;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> chain = {"0j h L ", "j0 h g", " 0 z ", " 0 I lK I ", " 0 p hL", " z 0 8 N ", " 0 O ", " p 0 ", "h 0v0 L ", " I 8 v02 ", " h 020 ", " 0F H", " l NO F0 ic ", " K 0 8", " i 0 ", "L Ih L c 0 ", " g L H 8 0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = 134;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> chain = {"0T A8 C m n", "T0 q ", " 0 k k Im ", " 0 wF P Lf N 1 ", " 0 E 1 E nE R", "A w 0 52 n ", "8 F 0 t 95 C p", " 0 H7 b A", " P 0 E ", " 0g a 1 b D ", " H g0 I ", " t7 0 J d 6T", " a 0 DW dih ", " E 0 A p 6 ", " 9 J 0 N l ", "C 55 0 E ", " LE2 1 d A 0 m ", " f I D N 0e z ", " b W e0 D C ", " 0 ", " 1 0 xB ", " N p z 0r ", " E r0 ", " k 0 G ", " q C Em 0g ", "m d g0 ", " k b D i6 D x 0 P ", " n h B 0 ", " I E 0y ", " m C G P y0 ", " 1 n 6 l 0 ", "n R pA T 0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> chain = {"09 8 k i 1 d Z K 9 D", "90 p a p2S D Sp R o a ", " 0 z T 7x d V 9 ", "8 0 B8 F 96 Z6 0 r h ", " 0 F c s uq H H M U ", "k 0 c z LN Q s ", " F 0NMy J X0 g g l I C", " p B cN0 l W ws i 8 3 P 6KT Q", " z8 M 0 m Q Rj f S iwQ", " zy 0 d V W E z m j F ", " c 0 r KC 3 D S ", " a LJ d 0 x z g c f ", " FsN r 0 Z 4 I w 2 2", " m x 04 T p o ", "i Q l 40 C rQ I v ", " X Q 0 T b I ", " p 0W V 0 z 4 q t M n g L", " 2 0r l OKO F ", " S wR r0 CP V s B u ", " u sj T 0 z J j ", " 9q W Z C 0 H P o r", " 6 gif bz P 0 G5 m ", "1 K 0 R w 3 ", " 8 EC T 4 0 D ", " g 4 V 0 0L e s mCy j L", " T z 0 D c a b ", " D H 3Sz I C q 0 0 J L g 8 ", " l H R LD 0 2 E z h ", "d lP J 0 9 6 SH ", " Z r 0 ", " 6 z pQ P 2 0 Mz ", "Z 7 c 0 Z ", " Sx I w II w e 0 fjq4 y hO", "Kp O jo D a E9 M 0HJ ", " m g K z H0 Fj 7 j ", "9 d0H 3 tO G s J J 0 3 I ", " s 5 07 ", " M o M z f F 70 V", " RVr B mb j j 0 ", " U j C Lh Zq 3 0 h ", " 9 s 6 y 4 0 3 8", " o K F 2 v nF g 6 7I 0 ", " T Dc 3 y 0 n", " a i g u m j S 3 0 o", " h w Sf 8 H h j h 0N", "D CQQ 2 L r L O V 8 noN0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = 80;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> chain = {"0 a ", " 02 a", " 20 ", " 0W ", " W0P9", "a P0y", " a 9y0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = 111;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> chain = {"0 ", " 0 ", " 0 ", " 0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> chain = {"0 K ", " 02 F ", " 20 n 2", " 0 yZ ", " 0 O rL ", " 0 ", " 0 R s", " n 0 u ", "K 0 ", " O 0 Q ", " y 0 v", " F Z R 0 ", " r Q 0 ", " L u 0e", " 2 s v e0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> chain = {"0 w WjH p u J", " 0 e B K hO ", " 0 Iv R s xjk 3wG ", " 0BD o x Y E y SB ", "w IB0S t ", " evDS0 DtD9 zM l ", "W 0 b T 2 V p V ", "j 0 O C A 7", "H R 0 Hf z wr ", " 0 R iM 2A ", " o b H 0 JVK 1 vf3", " B D f 0 6crb0 w ", " tTO R 0ok thw ", " x D o0 Zu f 4 ", " s 92 J k 0 g Sh s", " K Y C V6 Z 09 K ", " x z iKctu 90C 8X H ", " jE M M rh g C0Yl D j ", "p k z bw Y0J mSO ", " 0 8lJ0 A ", " y V 1 fS X 0 U C", " A hK m 0 1 o", " 3 p w DS 0 e d", "u w l O U 0 x", " hGS V w2v 4 H A 1e 0 ", " O Bt rAf j 0 ", "J 7 3 s Codx 0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = 76;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> chain = {"0 v 8 Q D ", " 0 d u5 A ", " 0 s w z ", " 0 z vn9 S f ", "v 0 z 3 v", " z 0 F H w ", "8 0r8 G S ju ", " r0dm x q m ", " 8d0f gN ", " d mf0 e ", " 0 ZA V ", " u F x 0 5 e ", " 5 07C t ", " sv e 70 H D gP ", " nz C 0 ", " 9 5 0 E ", "Q Z H 0u PX ", " w 3 Gq A u0 Q d 0", " D 0 g lF ", " H V t 0K ", "D z S gK0 ", " m E 0 E ", " j e Q 0 ", " A S u g g P l 0 ", " w N P XdF E 0 ", " f 0 ", " v 0 0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = 112;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> chain = {"0 Um h N Y ", " 0 e N 7 G d ", " 0 4 r CJ 8 I u ", " 0 e T n H 5R O D X r ", "U 0g sMpA B Mnw ", "m g0 r O C", " 0 N t U rX s ", " es 0 J K w ", " 4 M 0g 5 4 m eA ", " p g0F E H m J n g ", " Ar F0 r g G ", " T 0 O N l s R ", " NJ 0 i L8TQ ", " r O 5Er 0 I G h", " n 07 t 7 ", " e t 70 z M R 4", " H 0h 0 n ", " g h06 i D", " NC5 H 60 ", " JR 0R Vk G 1 ", "h U 4m O z R0E ", " 78O I E0 D 4 m 0 ", " 0 W HD j", " J Ni 0 b ", " I 0V Z C Y", " G D n M V V0 m ", " k DW 0 8 6 H w", " r 0 ", " X lL 4 0 Rq ", " B mg 8 R0 G 0W i ", "N X K T m bZ 8 W0 ", " s e GsQ 1 H 0 y ", "Y ur A t n D 6 i 0 ", " M w 0 C y 0 ", " d n G7 i mH R 0 ", " w R q 0 ", " C h 4 D j Y w 0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = 115;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> chain = {"0 Fd l I 5 wS MT L R 0v x R5x 8 h", " 0N IfE H v u r K T1 nD q uz r ", "FN07zTn f nH d 8 w TX6 t K X", "d 70 y REAno N CV w H v a ", " Iz 0 16W c r k 3l 4 3 W 6G", " fT 0 j h r V O oA C f Z G N", " En 1 0 le D T c y aAW WI 6 G GN", " 6j 0 S xC u N u S 1 SH ", " f W 0 P U J n MY ", " 0FoD 0D 4 7oi P H s4 a ", "l y h F0 b O7 2 G 6 T O vW 8gnB ", " Hn S o 0 7 t t r m Tp d4Jk O Z ", "I H l D 0dq EcI W iJwqGv s i xx ", " R re b d0 32 f L V kQ", "5 Ec x 0 q 0B OB1 5 N t u ", " v A C DO B0u 9m Px 1 n o n G 2Ak y", " nr 77E u0 k X b 5M G ", "w o c 0 W 9 9 R o ", "Su V tI3 0 gC l W W T Y8 5 3 6 ", " Du 2O9 0L E s I 6 ", "M d 4 Bm gL0 2 jn K 3 P", "Tr Nk P tW 1 k C 0i 7 Y X P D x ", " 2 i0 S T R ", " K TNU P 0 m D 7hn e c jqr G", " C r 5x l 0 7 6 B 9", "L V 0 Q9 K ", " 3O 7Gmi 2 0 N z 6 qvA E P ", " T l o Jf W 7 m Q 0 0m X q T ", " 18 o i w 1 9 0 A Ld d 9 k ", " 4Acu 6 q Ej D 0 0 K 3 r r79 S z", "Rnw G n WW n NmA 0eX7 n ", " D C TTv 7 Ke0 u X e ", "0 3 p o Y h X 06 j L m S 1xo", "v S PO N sK n zX 7 60 O d 7EHr", " T y dsL nX9T X 3 0 j 7K z 0N", "xqX Hv4 jO 0 K 2 ", " 6w a1J WJ G 9 I PSe 6 r 0v hd 7", " A k t b Y L v0 nc 1 U", "R tHWfW 2 8 Tc7 d uL j 0 Fs D ", "5u A5R q 0B Q q ", "xz W n ukM 5 D 6 v r Xmd nFB0 x E ", " ZI i Aqd7 7 cs 0 y Y T ", " s O 3 R B 9n S K h x 0 na ", " v 6 48 x G 9 Kd y 0 n ", "8 SM g x o j E S e z DQE 0 qV", " K GHYan V 6 q T 7 1 Yn 0 yD", " r G BZ 3 r KP 1E a 0 P", " a6 G k 6 x k xH02 q T nqy 08", "h X GNN Q y P G9 z orN 7U VDP80"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> chain = {"0 ", " 0 Z", " 0V ", " V0 ", " Z 0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> chain = {"01 1", "101 ", " 101 ", " 101", "1 10"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> chain = {"0 u w h s x ", " 0 X ", " 0 kd 1 ", " X 0 w B f e ", " 0 Y A J h ", " w 0 L IIX s 5PE ", "u 0 UP R Y W", " 0 4B c", " LU 0 S 9 0 ", " P 0 2 h J ", "w I 0 J g 8 v q ", " YI 0 e o O", " XR 0 C i ", " J 0 ", " s 0 0 0 ", " 4S 0 Y ", " B g 0 ", " 0 L ", " 28eC 0 g", "h A5 9 0 0 l ", " B P 0 ", " k JE Y 0 B", " d hv 0 0 L", "s Y i L 0 4 ", " 1 q 0 F e", " f 0 4 0 N", "x h l F 0 ", " e o 0 ", " J 0n", " Wc O g BL eN n0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = 155;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> chain = {"0AxHH190", "A00f3AAA", "x00 ", "Hf 0 x ", "H3 0 ", "1A 0 ", "9A x 0Z", "0A Z0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> chain = {"0A", "A0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> chain = {"0AA ", "A0A ", "AA0 ", " 0AA", " A0A", " AA0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> chain = {"01 ", "10 ", " 01", " 10"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> chain = {"0 ", " 0 ", " 01", " 10"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> chain = {"0Z ", "Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z", " Z0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = 2989;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> chain = {"0 1", " 0 ", "1 0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> chain = {"0Adas", "A0pl9", "dp0x0", "alx01", "s9010"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> chain = {"05 8", "50 4", " 0 ", "84 0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> chain = {"0Z ", "Z0 ", " 0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> chain = {"0Z Z", "Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z", "Z Z0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = 1525;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> chain = {"0zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "z0zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zz0zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzz0zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzz0zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzz0zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzz0zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzz0zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzz0zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzz0zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzz0zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzz0zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzz0zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzz0zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzz0zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzz0zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzz0zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzz0zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzz0zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzz0zzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzz0zzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzz0zzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzz0zzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzz0zzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzz0zzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzz0zzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzz0zzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzz0zzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzz0zzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz0zzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzz0zzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz0zzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz0zzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz0zzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz0zzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz0zzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz0zzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz0zzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz0zzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz0zzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz0zzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz0zzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz0zzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz0zzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz0zzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz0zzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz0zzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz0zz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz0z", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> chain = {"0156", "1015", "5101", "6510"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> chain = {"0Z ", "Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0Z ", " Z0 ", " 0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> chain = {"0Z ", "Z0Z", " Z0"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = 122;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> chain = {"011 ", "101 ", "110 ", " 011", " 101", " 110"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> chain = {"0Z1 ", "Z0 1", "1 01 ", " 101", " 1 10"};
    EscapingJail* pObj = new EscapingJail();
    clock_t start = clock();
    int result = pObj->getMaxDistance(chain);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=260835&rd=9822&pm=6222
********************************************************************************
#line 2 "EscapingJail.cc"
#include <string>
#include <vector>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <algorithm>
#include <stdlib.h>
using namespace std;
 
const int INF = 1000000;
 
int n;
int grid[50][50];
 
int parse(char c)
{
    if (c == ' ')
  return INF;
    if (c <= '9')
  return c - '0';
    else if (c <= 'Z')
  return c - 'A' + 36;
    return c - 'a' + 10;
}
 
class EscapingJail {
public:
    int getMaxDistance(vector <string> chain) {
  n = chain.size();
  for (int i = 0; i < n; i++)
      for (int j = 0; j < n; j++)
    grid[i][j] = parse(chain[i][j]);
  for (int k = 0; k < n; k++)
      for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
        grid[i][j] <?= grid[i][k] + grid[k][j];
  int m = 0;
  for (int i = 0; i < n; i++)
      for (int j = 0; j < n; j++)
    m >?= grid[i][j];
  if (m == INF)
      return -1;
  return m;
    }
};
 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/