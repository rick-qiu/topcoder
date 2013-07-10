/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3925
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

class CommentNest {
public:
    int whatsLeft(vector<string> lines);
};

int CommentNest::whatsLeft(vector<string> lines) {
    int ret;
    return ret;
}


int test0() {
    vector<string> lines = {"abc", "def"};
    CommentNest* pObj = new CommentNest();
    clock_t start = clock();
    int result = pObj->whatsLeft(lines);
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
    vector<string> lines = {"a//bc/*/d", "", "x/*/b"};
    CommentNest* pObj = new CommentNest();
    clock_t start = clock();
    int result = pObj->whatsLeft(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> lines = {"a/***b///**/*/"};
    CommentNest* pObj = new CommentNest();
    clock_t start = clock();
    int result = pObj->whatsLeft(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> lines = {"/*/*/abc//*xyz*/*"};
    CommentNest* pObj = new CommentNest();
    clock_t start = clock();
    int result = pObj->whatsLeft(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> lines = {"/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*", "/*abc*/"};
    CommentNest* pObj = new CommentNest();
    clock_t start = clock();
    int result = pObj->whatsLeft(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> lines = {"/*a*/*a*/a*/"};
    CommentNest* pObj = new CommentNest();
    clock_t start = clock();
    int result = pObj->whatsLeft(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> lines = {"/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*", "*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*", "*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*", "*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*", "*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*", "*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*", "*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*", "*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*", "*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*", "*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*", "*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*", "*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*", "*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*", "*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*", "*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*", "*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*", "*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*", "*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*", "*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*", "*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*a*/*"};
    CommentNest* pObj = new CommentNest();
    clock_t start = clock();
    int result = pObj->whatsLeft(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> lines = {"/*/*/"};
    CommentNest* pObj = new CommentNest();
    clock_t start = clock();
    int result = pObj->whatsLeft(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> lines = {"*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/", "*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/", "*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/", "*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/", "*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/", "*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/", "*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/", "*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/", "*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/", "*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/", "*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/", "*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/", "*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/", "*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/", "*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/", "*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/", "*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/", "*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/", "*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/", "*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/"};
    CommentNest* pObj = new CommentNest();
    clock_t start = clock();
    int result = pObj->whatsLeft(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> lines = {"/*/*/", "/*/bc/*/d"};
    CommentNest* pObj = new CommentNest();
    clock_t start = clock();
    int result = pObj->whatsLeft(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> lines = {"", "", "abc*def*/", "*/*/"};
    CommentNest* pObj = new CommentNest();
    clock_t start = clock();
    int result = pObj->whatsLeft(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> lines = {"", "", "*/*abc*def*/", "*/*/"};
    CommentNest* pObj = new CommentNest();
    clock_t start = clock();
    int result = pObj->whatsLeft(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> lines = {"", "", "*/*abc/*def*/", "*/*/"};
    CommentNest* pObj = new CommentNest();
    clock_t start = clock();
    int result = pObj->whatsLeft(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> lines = {"", "", "*/*abc/*def*/", "*/*/", "", "", "*/*abc*def*/", "*/*/"};
    CommentNest* pObj = new CommentNest();
    clock_t start = clock();
    int result = pObj->whatsLeft(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> lines = {"c/*def*/", "*/*/", "", "", "*/*abc*def*/", "*/*/"};
    CommentNest* pObj = new CommentNest();
    clock_t start = clock();
    int result = pObj->whatsLeft(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> lines = {"j/**a*//**id*u/z/h///v*****///*//*z*/j*//z/*tmmb**", "/////zt*x//*h///*b/tj*/*///**n*///*p/i//v***p**/*g", "/s**/v*/*n/bvs/j/**/***/*p/pbm*//**bf*/**q*r/*//**", "*///******/b*z*/***/*x//*l*r*m/i**h**//u*f*/**ql*t", "/gg*/**y*b/n/ku*pu*//*//*////lz****v**/d///*/**n**", "a/**/*f**hzu/h*z*//c//*c**mo*v//oa//*///*//t///**m", "/*i**/*//*g*//*/rs*k/xa**//***/w//w*i//d**n*r*a/*/", "/*/i*/bo*/**ih*gg*//j/*x//yo//*///*/o*h*/**o*dg*//", "***/*x*/******/r***///a//******q//**i//*/*oz/w*/**", "x*co*n/*//*/*/r*s/*t*///g*//*/b**//v*f*///*m*/***/", "*c//**/*kv//***v///**/*//d*b////***p/jb/***n**o/**", "****///x*y/*///wa/*l//*////q**/**k***//u/fdt/*/*/j"};
    CommentNest* pObj = new CommentNest();
    clock_t start = clock();
    int result = pObj->whatsLeft(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> lines = {"/**nxd*v*/*a*k/*//*//b/m/**v***twxf/////z/v***o//h", "****i/i/**tx/u/y**////*x///mfw*/g////a*/oy/lq*////", "*/*/fl/e/*****xn//m**o/*//u//*/r***c*nrk*/cb/***/*", "/o/**hom*x//wv//****//*/***///**//*/*q*m*tf/n///**", "*/*/*y/t*j/***//*a***///*f/*k*/////f//*/*/**//z***", "t/cc//e/y****t*h***//g/*******j/b*//*q***//*a///lr", "xv**f*zz//**/*h*///*/r//*/*/*****/*/nq///**/**/s*j", "/**k*////***/*h*i/**/o/*xl*pn//e*b/n/y/*m//c/*/*e*", "/**//*k/ki///*/i/*/*c/*u****/xy//***/t//t//*cf****", "**ote/***///*/**////*cxi/*/*///q**//**/*/*/e*/l*/*", "****///////m/**//**////j/**ku//*/****/o/**/s/***/h", "ge///i*/dgvan/***cchz/*b*/urk//*/*z**k///*k**s*//*", "*//e/i/*tx*/*/*/////*////**ub/*tt/z///*/**/jy*j/*q", "/*/*wd**/a///qs*/r/u*e/h///*//i//**////f*/u**//*/d", "**s/***/tm/n***///*/*l////*s**p////e*/slr**/***/*/", "*nkr//qd*ai/oe*/x/f/*jt*/y/*/*//**////v*/jk*/g*r**", "*/*afa/m/*////gr*///*r///***/*/*****hjx/*/r//*//*e", "e//*/****//**g/h*//x/cz///*//**r*//**f/**/hd******"};
    CommentNest* pObj = new CommentNest();
    clock_t start = clock();
    int result = pObj->whatsLeft(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> lines = {"p*pa/**//*//**//if/**//**/*/*k*r*u/wr*//o/i**/*u*x", "c/kjx*///**/w**z*u**/qx*a/*e**su/***/*//m**//*/h*i", "hr*//////*//**///o*nm*////**l//////ob*/tb/**/c**t*", "l***d***p*/n/q/*/*/y*/g*///o*b//*s****/o**i//**//v", "****/w/**//***/t*/*/***/r/*e/*//*tp***/o*/*******h", "py//*//*//ld/*/wkw*ntsk*/*//**u/////*q/*o**/*////x", "/*of*/*eo//*/w**//a/**/g//*v/f/ja//awf/**cy*///b**", "/**/**//fs//*///**/u/*/m//*z*//q**/**//g/d**w/****", "gp//*/k////**y/g/ra*///**ea/****/r/w/*/t*t/c/*///*", "///w*/m/l*/l***kzl*/x/*//**j*s*/*t/w////**/k/t*sf*", "/r**/*/p/**o*v*s/***e*/*ts**//*/n/*/*d/an*d**l/*/f"};
    CommentNest* pObj = new CommentNest();
    clock_t start = clock();
    int result = pObj->whatsLeft(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> lines = {"//**/hwe**/r*/*/n**z///*/zt/s**/*///******/*s*/*rk", "/***//*f*//*/u*y/*lf*i///*/x/*///qj**///f/*//m*/*/", "/**b/////*/p/*/p**g//a/*/z/z/**a/y*ul/*****///////", "**/**v**f*a/*b*/g**//l*z/*vt//tziom***////*z**j///", "q*/nnb*cl**y*i/sg*****t*ex*a///y/q*y////***///*e//", "*/*j/vhc**/l*d/////u*/co*u****vr///*****z****/r**/", "/*/**k**/lh/*e///**o//*/*n***f**///*///g*a*u****//", "*/nu/h**j////*/kv/s*****b*/u///***v*bn/j**/etn*//*", "/****b**/****dw**/*/**/*/o*x//*////*/s/s//*/z*dj/*", "/v///x//////cs*w*k*p**q/*r**/**l//////**/***r*//k/", "/*o*/**//**y/*****////*/q***//x//*////**e//*//xxm*", "/a*r/*/c*s*/**/*/xq*s*/*/f*//fdke**a**h/*p/**/t/*/", "n/*/***//t*/**s*/*as//*****/*/*/*//m*//////*d//*//", "xr**v*//*/i*//**//cr*z/**xy***/**r/w//***//d//tli*"};
    CommentNest* pObj = new CommentNest();
    clock_t start = clock();
    int result = pObj->whatsLeft(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> lines = {"//**///t/***//****/p**///*/w*f***/**/a**/*o*x**///", "*/*///cs**d*/*/i/rvlm//**/*l*z*/*//*//c/g///*////*", "ndf/*//l/bd**u*u*/e/*/mx//l*/**//e/k*/**a*/*/t/***", "*//*/r//****//*//p*/*e/g/***jq*p/q//*/*/y/******o*", "***//k/*/**x*//*gz//tl/*//*o/*/////**/mvs***/x//**", "*///b/*/r/sx***//*r**/*m/v/y/yxu///*g*xlo//iy///*/", "**/****/*zd/*/*/*////t*/**///**/*/y**/r**////w/*/*", "*/w//*//***/***e/*/i*f/j/*p/*aqyob*/*a/*/kb/*m*rhf", "*/*///*s**/**//***/yj/eb*//b///f*t//*/fgc*/*//*/x/", "///lia*////***/**n/j**/***/t*t/z**/*/f/**/*////***", "////*////i/m*///*/*/*e**w////e**/z/bwjsy/*uu///***", "*x*///**//**/*//***//*s/*gi*/h*///w*/**/*j/****///", "e/*q/*//////d/e/**/x///p*/****/w//h/rbgz*/**/***/*", "/*c*/e*l****/*/*/u*/ho*o//*/z*/**k/j/*/f///g*/tl**", "////h*d/*yr****a/**v*****r/in/c//*/**/*lp/*//**/vb"};
    CommentNest* pObj = new CommentNest();
    clock_t start = clock();
    int result = pObj->whatsLeft(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> lines = {"/*a**z/*/b/l*/*//////**a///s*zi/*f*/xq//*z/*//****", "**q*/y//*/*//**m/*/ve**j///*lfhq******/*//**gr*//*", "*t*i*qa*//*/**fcn//n***c*/*/*qs*/w/**a*/*/***g/*/*", "**/*q///g*////*p*///*/*/*b/y/**///*b/yu/*g*u*/****", "/b*o*l/g*n*///fi/****//****v*f/***ey***c*/***e/*/m", "/z***fxi///mv/z*/o/p/hc/ew/**/*b///**/*r*e*////**d", "**z**//**/x////l*/oo**/t*///*to////*x/*n*d/e/*//**", "*n*m*mk//**p*p**////*p*a/j///ot///*/*/f**u/****/**", "/**s////*/w///**te/*/b/c/*//*s*s/*/*x/*//**y*u***z", "t//u**/*/////*jw/*/cw****a*g*p/*zy/*//kv**j*/**/*/", "/o/**/*g*//**/**y/*q/lmq*b/zr/**//*x//k**a*//*//*g", "xo//a/y*/**////mwi**x///*/***a/*/*///*/*//m///*u/z", "/*/v*///ai*/b**i//*k/*d*u/*/**i/*//*//***/vx/**//*"};
    CommentNest* pObj = new CommentNest();
    clock_t start = clock();
    int result = pObj->whatsLeft(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> lines = {"a**//cn/e/***//*p**w*b**//*//w/*oe*o**/*/***q*e/*w", "/k/l//*a//j/*//o*/**ca/*ov*/m//*/k/k**lda**/y**n*/", "/**q/g*/j***qb**s**//novwl*/**/n*n***a////v/*//**u", "z/*//d*/*gp******a//*//***//*i/w/q/*//*/*/**p///*/", "/**j////*m///r***/*/o//ie/*////e/**/*/***///**/n/*", "///*jr*/s/**/vz****////*///*t/*j/g/m*v/y/*l*///a/u", "//*p/***//*a/z**///y*ys*/w*/x//////g*q*////**nz*/*", "*p****/**mxv*ni/***/*/****wk**//zj*t/**/*l/*lt//bz", "*x*m*xy//**//*/q***z*****/vm/*/*cf//di/*//*q*//u**", "//*r/y/*h*l*/z*w**t//y*sq//*/d/m**//ei*k**//an/iy/", "//j*nhtd/g//k*//////*/***z***txdp//x//vi/*g*/*//**", "d*p*pc//c****/tck///b/*e/th*/y***w*////***b//k*///", "u/**d**/*/e//*//***/*z*///wc/**//*/l//////*g/****t", "*d/z****/**/d/t*/ixs*/x*//**/*/**/*/****/////*d*c*", "/hpb///*/l/k/s*/*/***//a//i/*/be*d/*//*h*///s*////"};
    CommentNest* pObj = new CommentNest();
    clock_t start = clock();
    int result = pObj->whatsLeft(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> lines = {"//**////**////e/u*/yse/q*p/**/l/*/*//o*//f//m*z**i", "w/x/*/b***v***y*/ti/*/t**//*/s*m*rl****y*/*n///w/e", "***/k//baslt*/hu/y/z///*p*//*/**oni/***v*k***nd//*", "***u*/dy//tu***hst/s*//***/**w*y**/**c/***//**v/*/", "y*/**k*/*u*/a***/yd***/*/*be/*g*/////**/clsi***/*/", "//mc*/r/a///**//*/mj*o/***/***//*j/x**/uudsf//sv*q", "*qb////***/s*t*//**v*//n*u//c*an/v***o*wtx*/*****k", "j/w///**b**///*/*a****d/**g*/fj//**cg/***xsehj/*e*", "*y/**/*/v/**j/h*/z*ku/*//y/g///w/*kv///*/*//**o//z", "/*i*/*///*/vup///z*///**e/*/***k*k*/nxek///**/*z*/", "*x*/z/j/qo/*////////////***/*//ncyxz/egq///fq/w//k", "*//*///v**h*e*/c///*///**qqveq*///*k/**g/c/***/***", "*/x/f**v*i**/e****i/zb//kfx***i/////*****y**/z**ie", "///qxy*t*r/e/*/k/j****/x/wyj*/*k/c//o*///y/n/s*sr*", "/t/s*//**zo**l//*/*/**//jc**fr*/la///p//*/u*****/*", "*/////*q*fh*///u****///f*k//i/jor**s/e******//////", "/d//**/gu/u*jisy*//*/r*/g/*//r*i**/v/*l***////*//*", "/**u*/wpr***wk/zq//uq**//g**//*/z*/vb/**/o*/*t*s**", "/l/q/r//*xae/*/s**/b////*b///k/**l/**tc/xz**//**/*"};
    CommentNest* pObj = new CommentNest();
    clock_t start = clock();
    int result = pObj->whatsLeft(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> lines = {"*y/mb/*n///r*iqy*//*/*//*/*w/****////*w*////**/*/*", "*/m///v*//*u*///****//**n*if//*yn*//*//a*/*/*///s*", "/gx//ga***//sn*ao*///*//***//e//*i/**/hr///*/x/n**", "*//*/*z*/*///**/l/***/*s////*/t*na*/**vb/*//**/a**", "/mvx**/s/s///q//xy*h////*/*/ce*//j/**l*/*////z/g/*", "j*o//r*///*//p*t*//**/**f/gy*gn*/j/lj*///*fh///n**", "***//****//*y///////g**t***v/*****l***/n/**m*w****", "/vwd**///*/g*******c/a//*a*////*//***j/***/*/r/***", "*/*/*a**//z/////***/*/*//*//u**lx*l/*s/u/b///*/**/", "s//f**/*/l/e*n*/////z/*j***/e//eu*/y/*//*x/n***q//", "/**s*/*q***w*/*j/**tv/*jx*/t*/**/s*o**dn//*/m/**/*", "*/*z**an*f*///*//**r*/um****n/**/p**/**/*ierx**b/*", "//*t//*/v**//*/d/*/**a///r/d/k/*/*///**///x///s*/*", "*/**m//q/u*/i*q/*j/////q///***w**o*/w////jj/***f**", "*k/*/dmx*//p*/**/*///q//*q*/*a//g/*n/f*h*ern**/u*/", "/*/f/c*//*/*b/*m///i/****jztj/ird//jx*c**xoz/*/**/", "**/*/i*/**mh////*/*oq*/*///h/n/*/kw//**dz*iw*///s/", "*/*g///**q///s/g/ij**/s*/*****/e///*z//****n/oe//q", "o///*g/m//**/*//*/*v*x*/*/*/*ly*//up*m///m/k*l//jb", "*/*/*//i*//*j/*hf*ki*yo/*/*x*/***/l/*//ks/**/**f*/"};
    CommentNest* pObj = new CommentNest();
    clock_t start = clock();
    int result = pObj->whatsLeft(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> lines = {"*q*g*c*/***e////f/****/b//**j/*//m//****/**g///**q", "/*/////*///f*/*y*////w/****z*/u//**/*/o/wycv///m*x", "*f*/*/*h/qm*a/*/qz**///e/*/////*q/d****k/*/*/o*x*c", "/o/u*///x///*r/j/q*jvb/*k/pt//j/ypgz/*/*ft/h///*/*", "//z*/e**c///*/o//*/***/*/**w*k*z***//**n**/j*j*///", "*v***/u///*/i*/***/*//*/*z*kh*/*kb/m/**//d/*///*e/", "*//*/*/**i//**//*////o//*z*s//c/q*/*qf/***/hxe//zg", "//vp//dv/p***t////q*m**v*a/***/**s**b/i/*b**/*/**y", "////hv**/*****///xh//x//*b*/**///j//*/*j*/il****/j", "*//*//t/*///**//**/**/////y*k/*n*v*//*/d/s*r/**/*/", "///i/*isq**/***a/ri*/gh//uv**//o/*//**//***h/*fp*/"};
    CommentNest* pObj = new CommentNest();
    clock_t start = clock();
    int result = pObj->whatsLeft(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> lines = {"///**//**/ne/x//fz*v**y/*y/ac**z***//*mbab*k/i/*/u", "//**//y***/*////***//dvv*/*//p///**o*t*//**c**il/*", "r*/t***r*biu*//a*qi/*/x*/i/**/*/*dsl*/*//**oz//**/", "aw///**u//*/*e*jggi//t*am**fi**/y*/*//*/*p*/*u*z/e", "**///g/k**f****/x*t///**df***/yj/e*/d***/n*rfl*/tw", "yr/*/*/**/**/*/*****h**//**y//*r/m/k/k*i//in*/*s/*", "*p///**/*//**/t*//***b//ty*//x*t/j/**////**/kh***p", "/*s****//v///j*///*g****k**y/h****//*m**a/*l*i/d*/", "///n/****/hst/t/l/*b**cu*//zf/**//*/hv/**c***k///*", "/**/**/y//*/*/**/yi/c/k*qx*n*/*/*//r/k/*/***/***//", "**//*/**//*/*xrlm*t**s//i***/*u/**/*///qb*/a/f/*/t", "/*/n/*n//*/h/*//**///**oh***//*/*c/*/*////**z//**/"};
    CommentNest* pObj = new CommentNest();
    clock_t start = clock();
    int result = pObj->whatsLeft(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> lines = {"//**g*//*l/*n*c/u//k/////*////*/*d/*/h/fbs//*n***/", "/w//*yy*/v//**//*n//**/***gwf*//*//****/*j/*r//d/*", "/*w/r*/k*be//*//**rp///*/****//v/*/a*fllj*//*//sv*", "*h/q*j///***i**//*z*z/*w/**g/**//x**//**/**/***lkj", "*/***//f/h/*//****sqik*/y****///*//f//bl*j*****f/*", "*/q/**/bxgnd*/kg***//*z/**fkxa/f/*x///x*///****g//", "*/rzm//*/*////**/k*nb*//d//o/***///**y*/c//d*n***/", "fy***/*///f/*/j*vw//j//b/*///lvw*//*/d*c/**k*y/***", "ejd*/s/**/d/***w**/l/**//**/g**kn//w***/l**//f/o*g", "/**/a****/**/eb*w/j//zc/*g*b/**/******z*ydynk/qj/f", "/*///*/s**s*b/n/**/*//***/q/***//z**///y*/w*/b/*/d", "*yg/*//////*/w///*/n*/*k*/**gg/g/vwy*//**u/*//////", "***u/*///**/a*/**//u*/*/**/*wxe****/*ai*/*/k/*/u/t"};
    CommentNest* pObj = new CommentNest();
    clock_t start = clock();
    int result = pObj->whatsLeft(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> lines = {"/*/*/u*///z*//**/*/p"};
    CommentNest* pObj = new CommentNest();
    clock_t start = clock();
    int result = pObj->whatsLeft(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> lines = {"***m/***//**/**/*c*/"};
    CommentNest* pObj = new CommentNest();
    clock_t start = clock();
    int result = pObj->whatsLeft(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> lines = {"/a*//*****//*c**///*"};
    CommentNest* pObj = new CommentNest();
    clock_t start = clock();
    int result = pObj->whatsLeft(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> lines = {"/m*///**ea*//*l**///"};
    CommentNest* pObj = new CommentNest();
    clock_t start = clock();
    int result = pObj->whatsLeft(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> lines = {"/*/jt*//*/*g*//*/k/i"};
    CommentNest* pObj = new CommentNest();
    clock_t start = clock();
    int result = pObj->whatsLeft(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> lines = {"**///**//**//*ku/***"};
    CommentNest* pObj = new CommentNest();
    clock_t start = clock();
    int result = pObj->whatsLeft(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> lines = {"*o*//*/*//**//*v****"};
    CommentNest* pObj = new CommentNest();
    clock_t start = clock();
    int result = pObj->whatsLeft(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> lines = {"slu/******//*m*//**/"};
    CommentNest* pObj = new CommentNest();
    clock_t start = clock();
    int result = pObj->whatsLeft(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> lines = {"/s/**v*//****l**/**/"};
    CommentNest* pObj = new CommentNest();
    clock_t start = clock();
    int result = pObj->whatsLeft(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> lines = {"/**d/*ub/*//**h**/*o"};
    CommentNest* pObj = new CommentNest();
    clock_t start = clock();
    int result = pObj->whatsLeft(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> lines = {"/*/*//**//"};
    CommentNest* pObj = new CommentNest();
    clock_t start = clock();
    int result = pObj->whatsLeft(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> lines = {"/**//**/lm"};
    CommentNest* pObj = new CommentNest();
    clock_t start = clock();
    int result = pObj->whatsLeft(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> lines = {"b/**//*/*/"};
    CommentNest* pObj = new CommentNest();
    clock_t start = clock();
    int result = pObj->whatsLeft(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> lines = {"//*n*//**/"};
    CommentNest* pObj = new CommentNest();
    clock_t start = clock();
    int result = pObj->whatsLeft(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> lines = {"k//**//**/"};
    CommentNest* pObj = new CommentNest();
    clock_t start = clock();
    int result = pObj->whatsLeft(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> lines = {"/**//**/"};
    CommentNest* pObj = new CommentNest();
    clock_t start = clock();
    int result = pObj->whatsLeft(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> lines = {"/**//*/*//"};
    CommentNest* pObj = new CommentNest();
    clock_t start = clock();
    int result = pObj->whatsLeft(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> lines = {"/*/*//*h*/"};
    CommentNest* pObj = new CommentNest();
    clock_t start = clock();
    int result = pObj->whatsLeft(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> lines = {"//**//**//"};
    CommentNest* pObj = new CommentNest();
    clock_t start = clock();
    int result = pObj->whatsLeft(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> lines = {"/**//**///"};
    CommentNest* pObj = new CommentNest();
    clock_t start = clock();
    int result = pObj->whatsLeft(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> lines = {"/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*", "/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*", "/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*", "/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*", "/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*", "/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*", "/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*", "/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*", "/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*", "/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*", "*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/", "*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/", "*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/", "*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/", "*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/", "*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/", "*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/", "*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/", "*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/", "*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/"};
    CommentNest* pObj = new CommentNest();
    clock_t start = clock();
    int result = pObj->whatsLeft(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> lines = {"///k**/q*/**/d*v/a/*/**//", "/**//q*p/*/////v/*////**/", "/x/e//*c/n*/*/*/*v//*o***", "*n/x*z/*fn*t**/z*///*s*/t", "**/***//p*/o***/t*dues/**", "*q/**//*n/*/*///i/**/c*a*", "*w*h*m///d/**/*//**//*/*/", "uwo**//**/gs//**/**/u*/*o", "q/*l*tai/e//*/*a****//*r/", "/svhl//b*o/h/q/ud///*o/t/", "", "", "", "", "", "", "", "", "", ""};
    CommentNest* pObj = new CommentNest();
    clock_t start = clock();
    int result = pObj->whatsLeft(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 55;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> lines = {"/****//x*vyo*/////**////d", "/o////*imz*z///**/**v**i*", "/lg/*///**r*mv/m//*///kz*", "zf***l*f**p*/*xq*w//i*mv/", "//**s*/dty*k//*z/to*////b", "*k//*/**///diz/*/bnd/b*/*", "h/**/g/jd*m*c////**/*//t*", "*//j/b/o/b***//*/*/l*/**/", "/*//**k/**/n*r/wc/q/m/rj/", "t*f/*h//***t//*//n*e**/**", "", "", "", "", "", "", "", "", "", ""};
    CommentNest* pObj = new CommentNest();
    clock_t start = clock();
    int result = pObj->whatsLeft(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 56;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> lines = {"/j/*m*/n**//*//*/w/bteo*h", "*e/*bt/f/**p/*///*/n*///*", "**//sd**/*///p*****/*l**/", "q/**//**//*kcn/**b//**/y/", "/e*/c/*///u/**m*///*//*//", "*a*//l/*jm***/**i/*r**o/*", "u**f//*/*xe///zn/q*c//**/", "//**e***/*///**/*r/*e//o/", "*****/**u*/z*/p*/*/*/*a**", "/q/*/i*///*///*/d*//***g/", "", "", "", "", "", "", "", "", "", ""};
    CommentNest* pObj = new CommentNest();
    clock_t start = clock();
    int result = pObj->whatsLeft(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> lines = {"//*gqq/*//*//jx*/*s//**ep", "/*//******/*///*f*//l*///", "k//l*e//*i*g///*/l/*/s*//", "z***q*////*///*ev**gy*c//", "x//vy/bo*mr//**r*wte*v/**", "/y*h//*n/xb/*/*/*j*w/z///", "**/a//ij*un**/v/*//*/**/*", "/**/ge***y/*/g*o//*p/*/yc", "w/*/*//k///*///*****//***", "*n***/k///*u/lt**i/juy*/*", "", "", "", "", "", "", "", "", "", ""};
    CommentNest* pObj = new CommentNest();
    clock_t start = clock();
    int result = pObj->whatsLeft(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> lines = {"*/w///////*b///*/a/l/yy**", "/*//*/*///z*/l//////*/*//", "/*///h*afq/m*j*/*op//*ut/", "*///*k*m*///*y**/*t//*o//", "////*/y*s/na*/sx/b*//g//n", "***z**/e**/****v****k/lq/", "*n*r*/c///**/*pp**/u*h*p*", "///**d/*/n*/f//*//**/*t*/", "/f/*/*ey/******tb**/u*/*s", "***y/de**//*//ct////sy/*/", "", "", "", "", "", "", "", "", "", ""};
    CommentNest* pObj = new CommentNest();
    clock_t start = clock();
    int result = pObj->whatsLeft(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> lines = {"tnte/**/**/**//m////***//", "*/*/b**/q**z*y***y/*tv*//", "*i/*/m/l/*/*b/h/**/d*x*/*", "/**x/**////**o/aob*n/tv//", "//*b//////*/*////ht/*ekvp", "**/i//*c*u*b**/n**o/////*", "c**chp**//*/*b*/*c*ox*/**", "dl**/**db/r/**/un****y//i", "//q//**e/c//l/g/*/jb///**", "/*m/*bbpyau//*z/*//*a**qz", "", "", "", "", "", "", "", "", "", ""};
    CommentNest* pObj = new CommentNest();
    clock_t start = clock();
    int result = pObj->whatsLeft(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 63;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> lines = {"/ds//e*n*///*//*/*///eei/", "ou/d*l**/l/vs*///i*//y/**", "*//*//**/athm******/v/***", "*e***y/fyc***/m/*/*x**u*/", "*ie**mp/***onh/**b*j/j**/", "/rl///***c/*/o*tu/gc**/*/", "*b///**/*v/*/o/*//***/**/", "//n//a*t//**/*b***k*/**v/", "*j//b*sm****k/**/c***qf/*", "g/dyk*/*//*r/**a*/ff**x//", "", "", "", "", "", "", "", "", "", ""};
    CommentNest* pObj = new CommentNest();
    clock_t start = clock();
    int result = pObj->whatsLeft(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> lines = {"*///*tf//p*q**//u**f*a/*/", "//*//*t/a*/*/x//***/i/xmq", "//*f*//xs***/***/o****/pv", "/****x/v**///vta//y/*xa**", "*/**o/*/*/****/**x**/*//*", "/**/r//*//y*/rmcxs**/o*//", "**/******d*l/j/*na*v//*y*", "**/b*t*z*//***/c//u//iy**", "/y//*e*/*w//w*//**/i*u/a/", "*///*/*p*/d**/y***q//*l*x", "", "", "", "", "", "", "", "", "", ""};
    CommentNest* pObj = new CommentNest();
    clock_t start = clock();
    int result = pObj->whatsLeft(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> lines = {"g*/**g*l//////f////*r/*/*", "**////**/*/**a*fcw***g///", "/*//y**//ps*k/*/***//*/ti", "////y**r*//*/j*/or/xz*q/g", "**//*/**tx/a***k///t/***i", "/*bq/p/w//kv*/****ss/r/*/", "/*n////**/*/*/***h/***b*/", "*****/**/****////k/*//***", "/r/oa/*//qk**v*l*v//**/*m", "d*/f*w*/////**/*/****///h", "", "", "", "", "", "", "", "", "", ""};
    CommentNest* pObj = new CommentNest();
    clock_t start = clock();
    int result = pObj->whatsLeft(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> lines = {"/*/***///*t//*/*///*/r/g/", "cy*p*//*//**/**///**m***h", "t//k*///*k/*k/ji/r/p//eg/", "//v*w//**/**///*/*****ma*", "*///*j/*n/e/**/v*z*///***", "**d//u*t//*x**s***/*/*p/*", "///**/*ow//j/**/u/*/*//*/", "//*/i/*s/***////**//q**//", "j/**/*p**d/f*nxdf*/*/**s*", "*pu*///*/t*//w/t//*/pd/y/", "", "", "", "", "", "", "", "", "", ""};
    CommentNest* pObj = new CommentNest();
    clock_t start = clock();
    int result = pObj->whatsLeft(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> lines = {"l**/*/*/////**zb***/*/**/", "/c**/**g*h*cs/**/y*/*/**/", "/n//*//*h**///*/oz/s*c*/*", "*////m*//**m//*v///*/hi*/", "**x/***v*k*c///bbb***//r*", "**/*y*to*/lj*//**m/**txq*", "*/*nl**s*//s*/u*/////j///", "*dm//p*j**/***/*//*/v*///", "*s***l*//d/g****/g*t//oko", "**///*z**//*/a/////**xn*f", "", "", "", "", "", "", "", "", "", ""};
    CommentNest* pObj = new CommentNest();
    clock_t start = clock();
    int result = pObj->whatsLeft(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> lines = {"eg//x*///**f//**lb///eq//", "**/ry*//c**/***p**/p/**y*", "/*z****w////kl/*d*/bgvo//", "*d*s/z**//*t/h//l*///l*//", "****lu*///***/wo*ugg*x///", "*k***//****o*i*//df****/d", "sx/**c//**/n/*////fa/q/q/", "a*///*zz***/*//d/c**//*ka", "bh/*//*uk/*/pf*//*/n/p*wd", "*d**t/*z//*tcm**d****//n/", "", "", "", "", "", "", "", "", "", ""};
    CommentNest* pObj = new CommentNest();
    clock_t start = clock();
    int result = pObj->whatsLeft(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 84;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> lines = {"i***wm**/f/*//**e**m***d/", "k*e//*****////*/*z**///z/", "wc/*/c*l/**/*/y*x//n/j/ea", "*e*gn//**q///*/***/h/aw//", "*//k/q//xm**w*/*/h*v/z*n/", "/f****/*/////**////c//*a*", "/*///*yo*/v***/**o/r///l/", "/c/*/*/b/*//***k/*e*q/*p*", "/z//*i/m/*/i///***m**//f*", "*s*n*a/a/p*//****z/*u**a/", "", "", "", "", "", "", "", "", "", ""};
    CommentNest* pObj = new CommentNest();
    clock_t start = clock();
    int result = pObj->whatsLeft(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> lines = {"*l/*/*///dpy*g*//b***////", "*g/d*///h//*n/*//q*kh*/n*", "**////j*/b//*f/wm**h*/i**", "**q*//***///s////*/****h/", "/y/yj/*n**mf**j***l/*//mh", "**vt///s**/*/*//****o/v//", "/*/k///**////pv///*/*/*/*", "/*///l//*p*z*x/**s*y*/n//", "/oe**///*/*s*//////*j**b*", "*//*v*s*w***/q/k*c/*/b*m*", "", "", "", "", "", "", "", "", "", ""};
    CommentNest* pObj = new CommentNest();
    clock_t start = clock();
    int result = pObj->whatsLeft(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 54;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> lines = {"/e/jcn**///l***r//**d/**/", "/**o/****rj/**/*l***dt/**", "/**/v/*/*b*q/***/g/l*b//*", "*y/w//*/**cb/***n*g////m/", "//*///p/oq*/*//**//*/*/*h", "//*d*es//*/umd/u*////n/**", "//**/****////*/*x/*/z/lz/", "/**/////**/u*g/x//*f/i*/y", "*/*//*/**b/x**///*/*****t", "/c**//uh/p*/c//l*/lw*/n*/", "", "", "", "", "", "", "", "", "", ""};
    CommentNest* pObj = new CommentNest();
    clock_t start = clock();
    int result = pObj->whatsLeft(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> lines = {"/t/*/*/xg**x**/*gt/*/p///", "//z***jx/ap/t**/**l/*i/h*", "/*xykd**twi/*hjj/n/tu**y*", "***z//*o**aqi/j*/k//*/*z*", "/***lr*m/kf*///**k//x*/**", "*//e//**/*/*/**/i//y*d/d/", "///x/**j/*/*//**tadw****/", "*je////**m*/*///**/h**/d*", "//*k**/*//p*/sjz**//ll/*/", "ggf//s*cr/***a**//ra//**/", "", "", "", "", "", "", "", "", "", ""};
    CommentNest* pObj = new CommentNest();
    clock_t start = clock();
    int result = pObj->whatsLeft(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> lines = {"*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/", "*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/", "*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/", "*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/", "*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/", "*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/", "*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/", "*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/", "*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/", "*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/", "*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/", "*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/", "*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/", "*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/", "*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/", "*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/", "*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/", "*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/", "*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/", "*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/"};
    CommentNest* pObj = new CommentNest();
    clock_t start = clock();
    int result = pObj->whatsLeft(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> lines = {"/*/**/*//*/**//**/*//*/**/"};
    CommentNest* pObj = new CommentNest();
    clock_t start = clock();
    int result = pObj->whatsLeft(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> lines = {"*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/", "*/*/*/*/*/*/*/*/*/*/*/*/*/sdfs/*/*/*/*/*//*/*/*/", "*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/", "*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/", "*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/", "*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/", "*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/", "*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/", "*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/", "*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/", "*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/", "*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/", "*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/", "*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/", "*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/", "*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/", "*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/", "*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/", "d", "*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/"};
    CommentNest* pObj = new CommentNest();
    clock_t start = clock();
    int result = pObj->whatsLeft(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> lines = {"abc", "def"};
    CommentNest* pObj = new CommentNest();
    clock_t start = clock();
    int result = pObj->whatsLeft(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> lines = {"/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*", "/*abc*/"};
    CommentNest* pObj = new CommentNest();
    clock_t start = clock();
    int result = pObj->whatsLeft(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> lines = {"/*/"};
    CommentNest* pObj = new CommentNest();
    clock_t start = clock();
    int result = pObj->whatsLeft(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> lines = {"abc/**/asjhdas/**/sd"};
    CommentNest* pObj = new CommentNest();
    clock_t start = clock();
    int result = pObj->whatsLeft(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> lines = {"/*/*/*/*/*/*/*/"};
    CommentNest* pObj = new CommentNest();
    clock_t start = clock();
    int result = pObj->whatsLeft(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> lines = {""};
    CommentNest* pObj = new CommentNest();
    clock_t start = clock();
    int result = pObj->whatsLeft(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> lines = {"/*aaa*/bbb*/"};
    CommentNest* pObj = new CommentNest();
    clock_t start = clock();
    int result = pObj->whatsLeft(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=287568&rd=8001&pm=3925
********************************************************************************
#include <string> 
#include <vector> 
using namespace std; 
 
 
#define forn(i,n) for (int i=0;i<(n);++i) 
#define forv(i,v) forn(i, size(v)) 
template<typename T> inline int size(const T &t) {return t.size();} 
 
string S; 
int data[1050][510]; 
int calc(int start, int depth) 
{ 
  int &ans=data[start][depth]; 
  if (ans>=0) return ans; 
  if (size(S)-start < 2*depth) return ans=1; 
  if (depth==0) return ans=0; 
 
  ans=0; 
  for (int i=start;i<size(S);i++) 
    if (S[i]=='/' && i+1<size(S) && S[i+1]=='*') 
    { 
      int t=calc(i+2,depth+1); 
      if (t != 1) 
        ans >?= t+i+2-start; 
      if (i+2<size(S) && S[i+2]=='/') 
      { 
        int t=calc(i+3,depth-1); 
        if (t != 1) 
          ans >?= t + i + 3 - start; 
      } 
      break; 
    } else 
    if (S[i]=='*' && i+1<size(S) && S[i+1]=='/') 
    { 
      int t=calc(i+2, depth-1); 
      if (t!=1) 
        ans >?= t+i+2-start; 
      if (i+2<size(S) && S[i+2]=='*') 
      { 
        int t=calc(i+3,depth+1); 
        if (t!=1) 
          ans >?= t+i+3-start; 
      } 
      break; 
    } 
  if (ans==0) return ans=1; 
  return ans; 
} 
 
struct CommentNest { 
int whatsLeft(vector <string> lines) 
{ 
  int ans=0; 
  forv(i, lines) 
    S+=lines[i]+"\n"; 
  memset(data,-1,sizeof(data)); 
  forv(i, S) 
    if (S[i]=='/' && i+1 < size(S) && S[i+1]=='*') 
    { 
      int t=calc(i+2,1); 
      if (t != 1) 
      { 
        ans+=t+2; 
        i+=t+2 - 1; 
      } 
    } 
  return size(S)-ans; 
}}; 
 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/