/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2932
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

class TopographicalImage {
public:
    vector<int> calcPeakAreas(vector<string> topoData);
};

vector<int> TopographicalImage::calcPeakAreas(vector<string> topoData) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<string> topoData = {"............", "....i..i....", "....i..i....", ".o..i..i..o.", ".o........o.", "..oooooooo..", "............"};
    TopographicalImage* pObj = new TopographicalImage();
    clock_t start = clock();
    vector<int> result = pObj->calcPeakAreas(topoData);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {78, 3, 3};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> topoData = {"............", "....i..i....", "....i..i....", ".S..i..i..Y.", ".M........E.", "..ILEYSMIL..", "............"};
    TopographicalImage* pObj = new TopographicalImage();
    clock_t start = clock();
    vector<int> result = pObj->calcPeakAreas(topoData);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {69, 3, 2, 5, 3, 1, 1};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> topoData = {"zzzzzzzzzzzzz", "z...........z", "z...c.b.c...z", "z....bab.b..z", "z...c.b.c...z", "z...........z", "zzzzzzzzzzzzz"};
    TopographicalImage* pObj = new TopographicalImage();
    clock_t start = clock();
    vector<int> result = pObj->calcPeakAreas(topoData);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {81, 6, 2, 1, 1};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> topoData = {"!"};
    TopographicalImage* pObj = new TopographicalImage();
    clock_t start = clock();
    vector<int> result = pObj->calcPeakAreas(topoData);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> topoData = {"AAAAAAABBBBCCCDEFGHHIIJIIHGFEDDCCCBBBBBBBBBBAAAAAA", "AAAAABBBBBCCDDEEFGHIJJJJIIHGFEDDCCCCCCCCCBBBBBAAAA", "AAAABBBBCCCDDEEFGHIIJJJJJIHGFEDDDDDDDDDCCCCBBBBAAA", "AAABBBBCCDDEEFFGHHIJJJJJJIHGFEEDDDDDEEDDDDCCBBBBAA", "AABBBCCDDEEFFGGHHIIJJJJJIHHGFEEEEEEEFFFEEDDCCBBBAA", "BBBBCCDDEFFGHHHIIIIJJJIIIHGFFEEEEFFGGGGGFEEDCCBBBA", "BBBCCDEEFGHIIIJJJJIIIIIHHGGFFEEFFGGHHHHHGGFEDCCBBB", "BBCCDEEGHIJJKKKKJJJIIHHGGFFEEEEFGGHIIJJIIHGFEDCCBB", "CCCDEEFHIJKLMMMLKKJIHHGGFFEEEEFFGHIJJKKJJIHGFEDCBB", "CDDEEFHIJLMNNNNMLKJIHGFFEEEDEEFFGIJKKLLLKJIHFEDCCB", "DDEFFGIJLMNOPPONMLJIHGFEEDDDDEFGHIJKLMMMLKJIGFEDCB", "EEFFGHIKMNOQQQPONLKIHFEEDDDDDEFGHIKLMMNMMLKIHGEDCC", "FFGGHIJLMOPQRRQPNMKIGFEDDCCDDEFGHIKLMNNNNMLJIGFEDC", "GHHHIJKLNOQRRRQPOMKIGFEDDCCDDEFGHIKLMNNNNMLKIHFEDC", "HIIIJJKLNOPQRRQPNLKIGFEDDCCDDEFGHJKLMNOONNMKJHGFDC", "IJJJJJKLMOPQQQPONLJHGFEDDDDDEEFGIJKLMNOONNMLJIGFED", "JJJJJKKLMNOOPPONMKJHGFEDDDDEEFGHIJKLMNNONNMLJIGFED", "JKKJJJKKLMMNNNNMLJIHFFEEEEEFGGHIJKLMMNNNNMMKJIGFED", "KKKJJJJJKKLLMLLKJIHGFFEEEFFGHIJKKLMMNNNNNMLKJHGFED", "JJJJIIIIIJJJKKJJIIHGFFFFFGHIJKLMMNNNNNNMMLKJIHGEDC", "JJJIIHHHHHHIIIIIHHGGGGGGHIJKLMNOOOOONNMMLKJIHGFEDC", "IIIHHGGGGGGGGHHHGGGGGGHIIJLMNOPQQQQPONMLKJIHGFEDDC", "HHHGGFFFFFFFFFGGGGGGHHIJKMNOQRSSSSRQPNMLKIHGFFEDCC", "GGGFFEEEEEEEEFFFGGGHIJKLMOPRSTUUUTSRPNMKJHGFFEDCCB", "FFFEEEEDDDDEEEEFGGHIJKLNOQRTUVWWWVTRPNLJIHFEEDCCBB", "EEEEDDDDDDDDEEEFGHIJKLNOQRTVWXYYXWUSPNLJHGFEDCCBBB", "DDDDDDDDDDDEEEFFGHIKLNOQRTVWXYZYYWURPMKIGFEDCCBBBB", "CDDDDDDEEEEEEFFGHIJKMOPRSUWXYZZZXWTROMJHGEDCCBBBBA", "CCDDDEEEFFFFFGGHHJKLNOQRTVWXYZZYXVTQNLIGFEDCBBBAAA", "CCDDEFFGGGGHHHHIIJKMNPQSTVWXYYYXVURPMKIGEDCBBBAAAA", "CDDEFGGHIIIIIIIJJKLMOPQSTUVWWXWVUSQNLJHFECCBBBAAAA", "CDEFGHIJKKKKKKKKKLMNOPQRSTUVVVUTSQOMJHGEDCBBBAAAAA", "CDEGHIKLMMMMMMLLLMMNOPQRSSTTTTSRQOMKIGFDCCBBAAAAAA", "DEFGIKLMNOOOONNMMMNNOPQQRRRRRRQPNMKIHFEDCBBBAAAAAA", "DEGHJLMOPQQQPPOONNNOOPPPQQQPPONMLKIHFEDCBBBAAAAAAA", "DEGIKMNPQRRRRQPOOOOOOOPPPOOONMLKJIHFEDCCBBAAAAAAAA", "DFGIKMOQRSSSRRQPOOOOOOOOONMMLKJIHGFEDCCBBBAAAAAAAA", "DFGIKMOQRSSSRRQPOOOOONNNMMLKJIIHGFEDCCBBBAAAAAAAAA", "DEGIJLNPQRRRRQPOONNNNNMMLLKJIHGFEEDCCBBBAAAAAAAAAA", "DEFHJKMOPQQQQPOONNMMMMLLKJIHGGFEDDCCBBBAAAAAAAAAAA", "CDFGIJLMNOOOONNMMLLLLLKKJIHGFEEDCCCBBBAAAAAAAAAAAA", "CDEFGIJKLMMMMMLLKKKKKJJIIHGFEDDCCBBBBAAAAAAAAAAAAA", "CCDEFGHIJKKKKKJJJIIIIIHHGGFEDDCCBBBBAAAAAAAAAAAAAA", "BCCDEFGHHIIIIIHHHHHHHGGGFFEDDCCBBBAAAAAAAAAAAAAAAA", "BBCCDEEFFGGGGGGFFFFFFFFEEDDCCCBBBAAAAAAAAAAAAAAAAA", "BBBCCDDEEEEEEEEEEEEEEEEDDDCCBBBBAAAAAAAAAAAAAAAAAA", "ABBBCCCCDDDDDDDDDDDDDDDCCCCBBBBAAAAAAAAAAAAAAAAAAA", "AABBBBBCCCCCCCCCCCCCCCCCCBBBBBAAAAAAAAAAAAAAAAAAAA", "AAABBBBBBBBBBBBBBBBBBBBBBBBBAAAAAAAAAAAAAAAAAAAAAA", "AAAAAABBBBBBBBBBBBBBBBBBBBAAAAAAAAAAAAAAAAAAAAAAAA"};
    TopographicalImage* pObj = new TopographicalImage();
    clock_t start = clock();
    vector<int> result = pObj->calcPeakAreas(topoData);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1918, 65, 483, 5, 5, 24};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> topoData = {"2>F4!wF1T!'r2hfA)00*O|!;?EjA!$n", "?{![sLJ/GaP{(aTDa@^!K;6H[kGw6Cm", "K7LtV!{Vc#v[+)~M=4GX0y{Xum't@3D", "0!lm#J^E1jD!ebXSMBp<;X{(R63FhCf", "Tsi*V[_C{]&+fhZ`l<n''FZN6p2G;<E", "Emw@!Gi`qhnBz7ga%`_Iq!}]vUI3w_O", "l}KrR6{g%s)X;1&j3B'qVt:#n?w|?P$", "-s%kt8.{?JkI5w{^Ai`ht|@&t1=;vUY", ".k]!zuv.,3h9DLfj4Mv7H)v|w-+ZBun", "%$]KqV|zoU~Is/xl]i>a4L(eT,NPju;", "#%4dDMJJs!jRk$b:*qF`U$c4`1j6TKj"};
    TopographicalImage* pObj = new TopographicalImage();
    clock_t start = clock();
    vector<int> result = pObj->calcPeakAreas(topoData);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {25, 22, 44, 41, 7, 46, 8, 4, 13, 8, 25, 6, 8, 6, 3, 13, 6, 1, 3, 4, 7, 2, 7, 4, 2, 3, 2, 1, 9, 4, 1, 1, 2, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> topoData = {"Mw]0W2WG$oUqesVDU-J4m_*M$vsC$05yM08Ce95FWI", "E$ERjZI6}(f3m;
    TopographicalImage* pObj = new TopographicalImage();
    clock_t start = clock();
    vector<int> result = pObj->calcPeakAreas(topoData);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {48, 54, 25, 48, 10, 38, 38, 28, 7, 32, 13, 19, 16, 14, 23, 2, 13, 10, 28, 15, 17, 17, 12, 1, 25, 10, 13, 18, 2, 2, 17, 7, 3, 23, 1, 4, 12, 2, 8, 1, 19, 5, 7, 1, 2, 1, 2, 2, 4, 19, 2, 1, 2, 3, 3, 1, 1, 1, 2, 5, 1, 6, 3, 1, 4, 1, 4, 2, 1, 3, 3, 1, 1, 5, 1, 1, 1, 1, 1, 10, 1, 1, 2, 1, 1, 1, 2, 7, 1, 1, 1, 1, 1, 1, 2, 1, 1, 3, 1};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> topoData = {":GJwPX1?,)@slsa>D}{/$tXgYqo_$l#H8", "2Ro>{mu!vN@Mv),lLAy9C}QAIhN.>C/NQ", "=c-/fJ;ZxQt<J63D%%y;+Zq5&L#*7Ly$}";
    TopographicalImage* pObj = new TopographicalImage();
    clock_t start = clock();
    vector<int> result = pObj->calcPeakAreas(topoData);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {41, 39, 65, 34, 24, 78, 36, 20, 42, 10, 20, 9, 30, 22, 28, 33, 29, 16, 21, 10, 9, 15, 42, 19, 1, 4, 29, 1, 6, 38, 8, 16, 4, 2, 13, 11, 15, 7, 3, 11, 4, 7, 18, 12, 8, 10, 6, 1, 7, 12, 5, 6, 5, 5, 3, 1, 11, 9, 2, 1, 1, 16, 3, 16, 1, 3, 5, 2, 4, 3, 4, 3, 2, 2, 3, 5, 1, 7, 2, 7, 1, 5, 1, 7, 3, 2, 1, 1, 1, 1, 1, 10, 3, 4, 4, 1, 3, 3, 1, 4, 4, 1, 5, 2, 1, 1, 1, 1, 1, 6, 1, 1, 1, 7, 1, 3, 1, 5, 2, 1, 4, 3, 1, 1, 1, 1, 2, 1, 1, 1, 2, 1, 1, 1, 4, 1, 1, 1, 1, 1, 1, 2, 1};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> topoData = {"?#67^He*B:aB!Q<Zv'U#'!xEb8!g#8e8[m?;.yV!j$NT6", "l!PwRep>N7j)aV_>e4(q;kh;OoHT0cTWL7_n|B@;83Wxr", "<K;_ZE_E{OuS5J(1lJBi=9Z!HPp!]-Lvhq7kIa-U%iB@A", "oh{qWyY:I8d.c4hW#f;SWj4B9y&-G0*{6Gz-swuT~(p6j"};
    TopographicalImage* pObj = new TopographicalImage();
    clock_t start = clock();
    vector<int> result = pObj->calcPeakAreas(topoData);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {20, 15, 12, 17, 17, 2, 3, 19, 10, 3, 2, 3, 14, 11, 5, 3, 1, 1, 2, 2, 3, 1, 1, 1, 2, 1, 4, 1, 3, 1};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> topoData = {"?ug@r9@R*xKH[_fW6k~]F;A71=E>9d!@`|[.bOhwhRq", "|SnYbS(~eY(<^+d(VoFv}|g^2gF%`Pf&4.V#3&k^IR&";
    TopographicalImage* pObj = new TopographicalImage();
    clock_t start = clock();
    vector<int> result = pObj->calcPeakAreas(topoData);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {25, 35, 65, 21, 37, 39, 18, 12, 19, 15, 14, 61, 5, 1, 10, 15, 8, 4, 11, 12, 21, 29, 6, 16, 4, 17, 5, 28, 11, 23, 11, 6, 9, 8, 1, 4, 3, 1, 5, 5, 12, 16, 3, 1, 6, 4, 1, 2, 4, 4, 3, 1, 2, 11, 6, 3, 2, 6, 3, 6, 12, 2, 3, 1, 1, 1, 1, 4, 1, 1, 1, 8, 1, 1, 2, 1, 1, 1, 2, 4, 4, 2, 5, 1, 1, 1, 1, 1, 1, 6, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> topoData = {"uO39@", "Ak4uB", "n>kq&", "A%K|S", "CH*9N", "M,9[Z", "~tG*v", "b{jqH", "=~)#(", "wm[GT", "9?)b2", "r);6y", "%}6C+", "1XX=R", "fp+y*", "h!cc=", "2xuKN", "!t(T!", "U6hE%", "[XO}u";
    TopographicalImage* pObj = new TopographicalImage();
    clock_t start = clock();
    vector<int> result = pObj->calcPeakAreas(topoData);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {22, 16, 10, 26, 15, 22, 13, 22, 13, 15, 6, 6, 3, 4, 7, 6, 3, 1, 5, 1, 1, 1, 4, 7, 1, 1, 3, 1};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> topoData = {"Nd_B!o_U#YLm5cLkDK!EQ.I", "U4_JpS{/e!rDwjAR4n>pzAx", "!:S?.e{L0N]hJ!6-1D!gf!y", "t+Cei4?-qBk8$!R;2jtO@)W", "(ugLH4^~u`xD~[Ejm+=w$-<", ".)uz-$+-bPhKkn8LA&;4z=[", "osu$>//X9'7F!TAQCSv$~oZ", "|cNbY`8V,N,#RI4!n-vSK'd", "@tPc,07gosX]{GK/'rvFZvJ", "0%brz?uuVwyC-<mAdCtr0V#", "/FQ9aOI`#,1pY6}N})MI-!r", "aeZD!7_m|Uq]{0?9Bw?SCE!", "IK/^Me`%VX2=!>ibS7@&4*2", "6(ji$RMtyH,4]czB>)Z&w!o", "Ow|6ky|T,~@|z)7NwS7an]2", ".FI8,W9[.;cy8Tz{+H*UJV?", ";]Djg8{mavg;!.yx5VE9q1c", "1!bxJ$5]c(qRe.hS!Qjy-Dl", "Pgk(<5IS!s1/*y@L9d(>d[*", "myOC'RMjGg{_*?WQNwjX!m[", "JAf4'rQ@''3bTN<,`Y`IeSX", "&3~S}BwvDv:Q^=yFq<VD)){", ",@zt0MrkV#2/!39$'=!FCnX", "]XL|sF(sJe!#`bR4!K(4LGJ", ":Id:~PB'*;AgL6r!/t,`oI.", "'LKi?'0j8R48DR6Fy+8=A52", "!}qVLu_[l]_F[&]#qQ7iV^6", ";^2(;oES)D5R>z@m/?uKq!h", "X!SjK2H0UGX%9WMocqnbXuy", "/=1]fe>HI)xZVNP!cvBhu!<", "XmVNMxwPn`?Mk--BY$lYgg6"};
    TopographicalImage* pObj = new TopographicalImage();
    clock_t start = clock();
    vector<int> result = pObj->calcPeakAreas(topoData);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {39, 35, 40, 51, 34, 13, 12, 18, 9, 9, 17, 4, 19, 5, 13, 8, 5, 4, 24, 7, 28, 26, 4, 21, 4, 3, 32, 4, 5, 22, 4, 8, 2, 14, 21, 8, 4, 13, 10, 7, 5, 6, 10, 15, 1, 1, 1, 4, 2, 5, 1, 1, 2, 3, 4, 1, 1, 1, 1, 2, 1, 3, 1, 2, 2, 2, 2, 5, 2, 1, 1, 1, 1, 1, 1, 2, 1, 1, 5, 1, 1, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> topoData = {"%w8!$;4msS'4afMtS!*AOFZ{_.|b!g0uNkw}4(]]voQ", "W?}0:6]!c@6jT/{;6JHIR'a^aW6Ge0!u!%x5Ch]Gy_S", "!+j]bTh`.S*e|n.0:ULE_*jD`tY5}J):2Xg(J4t]Az#";
    TopographicalImage* pObj = new TopographicalImage();
    clock_t start = clock();
    vector<int> result = pObj->calcPeakAreas(topoData);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {27, 16, 26, 23, 20, 22, 23, 12, 53, 16, 9, 41, 8, 2, 25, 17, 10, 1, 16, 16, 17, 13, 12, 3, 8, 6, 5, 7, 2, 7, 3, 3, 4, 1, 8, 11, 2, 2, 6, 4, 1, 3, 2, 4, 2, 1, 3, 2, 1, 4, 1, 6, 1, 1, 1, 2, 1, 1, 1, 1, 1, 2, 1, 5, 1, 2, 1};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> topoData = {"RP_C#gx|2:{:${r|%", "LL4AXJ{1[DPH,9,7x", "`8ZB.rYWY.Vwz;E!^"};
    TopographicalImage* pObj = new TopographicalImage();
    clock_t start = clock();
    vector<int> result = pObj->calcPeakAreas(topoData);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {22, 11, 4, 1, 4, 4, 2, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> topoData = {"pn_/c_</[4(;]kfFxbQ", "L-J7kaHiMk:cvZncy3@", "w(*Jg)r?Y62BDi!)G@.", "7G3i-)$gjfwwrGv!i=@", "Nte.~Us&a![x7P@<wx^", "byT]fkgPVWKVF1^PR57", ";iDHRAQllJm}b%w>r=g";
    TopographicalImage* pObj = new TopographicalImage();
    clock_t start = clock();
    vector<int> result = pObj->calcPeakAreas(topoData);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {44, 18, 38, 38, 37, 9, 14, 31, 3, 26, 36, 2, 32, 13, 15, 13, 15, 5, 24, 33, 13, 16, 8, 9, 13, 5, 14, 5, 22, 6, 3, 3, 11, 16, 18, 2, 4, 1, 14, 8, 7, 5, 6, 1, 6, 3, 7, 1, 2, 1, 2, 1, 4, 2, 3, 1, 2, 3, 1, 1, 1, 3, 1, 5, 1, 1, 1, 1, 1, 4, 1, 3, 4, 1, 5, 2, 1, 1, 4, 4, 2, 1, 1, 1, 3, 1, 3, 1, 1, 1, 1, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> topoData = {"<[>h", "hKlQ", ">mjb", "CcJA", "pN%!", "|q%.", "I-%t", "ml.:", "))h,", "^;%|", "5+/1", "WW${", "1yOb", "f!0P", "33lw", "Yn=B", "M!`-"};
    TopographicalImage* pObj = new TopographicalImage();
    clock_t start = clock();
    vector<int> result = pObj->calcPeakAreas(topoData);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 14, 6, 7, 6, 2, 4, 11, 2, 1};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> topoData = {"nq}.hj|BMnn"};
    TopographicalImage* pObj = new TopographicalImage();
    clock_t start = clock();
    vector<int> result = pObj->calcPeakAreas(topoData);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4, 3};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> topoData = {"%ZAi<*YfxVnSbtYOxkkV-2q=?Vw", "<'2IVin8m6e;#[nN4!Vo2j>[;Sb", "7T2-g6&t;k7fx!P$%3NTg5TP_,)", "(i)o82W/J/^eZH]@!P~W>qmN^S|", "SU$M)h04!8%F2:#d5'HZ5%9;^L+", "w3>j]J_wl2.z}>1E_Mvu2!h>gI>";
    TopographicalImage* pObj = new TopographicalImage();
    clock_t start = clock();
    vector<int> result = pObj->calcPeakAreas(topoData);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {23, 18, 32, 39, 26, 27, 46, 25, 60, 19, 8, 2, 79, 31, 30, 11, 26, 17, 60, 10, 33, 18, 15, 27, 5, 17, 15, 3, 6, 9, 34, 14, 7, 13, 3, 6, 13, 7, 3, 23, 9, 4, 7, 16, 5, 20, 8, 9, 3, 14, 8, 1, 7, 4, 2, 2, 21, 19, 4, 2, 4, 1, 2, 1, 13, 7, 3, 2, 3, 2, 10, 9, 17, 3, 13, 2, 4, 7, 3, 3, 6, 1, 2, 1, 3, 4, 3, 2, 8, 2, 2, 2, 1, 6, 5, 3, 4, 3, 1, 1, 2, 1, 1, 1, 3, 1, 1, 1, 3, 2, 7, 5, 1, 1, 5, 2, 1, 1, 2, 1, 4, 2, 1, 1, 1, 2, 3, 3, 1, 1, 2, 1, 3, 1, 1, 1, 1, 1, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> topoData = {"(]@_XgpjUW1zex@UA;y;f0!uOALW8*1+VW0NH!&y", "UIG%sOR|<7}9@*??d@^:a[;A$W9'-Cp]I.3RVz:C";
    TopographicalImage* pObj = new TopographicalImage();
    clock_t start = clock();
    vector<int> result = pObj->calcPeakAreas(topoData);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {52, 29, 30, 33, 36, 28, 11, 17, 9, 11, 29, 20, 2, 28, 2, 3, 11, 17, 10, 12, 21, 10, 7, 35, 4, 20, 15, 4, 1, 5, 3, 3, 15, 41, 14, 2, 2, 43, 20, 9, 2, 4, 2, 4, 1, 5, 1, 11, 6, 6, 9, 1, 1, 5, 3, 3, 5, 1, 6, 2, 7, 3, 4, 1, 1, 5, 5, 5, 1, 4, 1, 2, 2, 3, 3, 1, 1, 1, 4, 2, 2, 1, 2, 11, 3, 4, 1, 1, 2, 2, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> topoData = {"53WKPK9ucE=L!2v[E[zNAZgvk[y|6~dEi?0N", "#V533S/-caWjva!$Xr?RSu~CO~2RltHIZ!it", "Q8<}1%B]eU^aI36!d@/2{)?)+0~5ilF'Xb5y", ".3VQ{FCH=rp.+ZysYWe.z-'hw^m;q23;p)#9", "s'2+Jv9fDJ&=26CRNWCw#E%%xPX6j,^WC:!D", "YN3//rf:Ty&$kRRFoGE0O78@7'9O=il4y{wC", "u#wjbk8U_|8H!jN)u<_'GxM:}sj*E2%ML~w0", "6gp)'Pa!`u]=|4u#r/]bYd&Bx%|6znqEa_q/", "0z!O(LR!b(-oE(-/]fd%7!MZ^/_KZYpBq5lh", "F2J1#.o(Q^h[zVh5;cS@:y2'f@B:5un5OerB", "ChI!(BMrLJOi;)Ow|sF%v1j6a@2`7?A)UEXi", "$GXsb0'r|M+/^ivdust!u59j,8<r[jsR'o#P", "Jz:(w.?UJ/M=C0YG2>QFXw!#7LI!_ztLoMJ<", "+r2q8<9zS{]guHym2[[~}>+c|jf6@!wCn!X[", "E(:q&pqx/)E$7w!]M>I|M%UA?}GH[8:!2A:x", "RHMRi3_n=!~-mB8XvK`m=w!YqXe1<Evhdb{v", "bLc2rX2T!<P4mJd(bO.WAMBA!^dd=S<m8e;/", "@FJ+IO{;==}B4<*'r|-!?L5fiF.;i5!>WwOV", "/Y[yFo1_GHARN{99,;hF^V]a.EtJlhjj*FVq", "28wgil!fm!~2&S-#d3-;{+?&0R?_OUk=O>.G", "8RV7s<DUTWkr';Ey-_F^C6J02G<fd]uQ=zr%", "w%5X`dnS@B]wSC8H>al7p?.!SF{gqMe;)`eu", "oONz%y{]-b'O-?7L<dZBJN.6qO9n7{`^!Vw&", "wz!!COSGQKd[,`xi[,;77h.'8DxGN92+,eH|", "H!k4O4'2!5cLwr.HxlUh]g0UF_p9,7HKFD:(", "c!c7H1~~ENq%|qF=Oi|#[@%|(4&VGuAzC5$R", "NmGC.z8SIb~MhV^3<JxQUg}*J|SA<q&G>S7K", "^MWgpCsw%IDpq!^#::UGVrb!+$?U&!j2]-rg", "I_}oAmiNUie^Up|~Gw!R/~qSqr}hm+>T!P*F", "tFj1)5j5i*JHG;9L#&xZBesEvKmna!QHE7B<", "GQq^BtA(BkzY[,uYFjRjV!Kj4!AGB//`rFe;", "!$j^u_ZyZ(;m,r&A.{adq.Q&|dN_dH!EkhF5", "PdoQU0?wHE47hq!scJ8,vWl~/.D',Yk^Os8z", "*om&Co]!ar(~W(K9Hq59tdTtxELw7o*OFZ3e", ".!Htz!]/VzFb[0>EVT'?!{VZQY1?l:jFD*|&", "{_mMad^B7E'JE#;%Nc2=9fTj2P@ucsX4!;)Z", "loP[K%@!q]5}v;!;Db372A:<BDD}QC^@|$fw", "!VC#wj`MjFI=x!hHtn%JZ2X4kTYytqQ/'B/9", "2;j)bOH:&05RPZlZnP,wHq<Hkxx.'8a4%Dj?", "$Dwo8s7?LC~yL:!.sn9N{,m%JdHz-z'vOvW{", "k!Gt2clq^9p,:}n%-m.j5s]iX;p15]^cc,u!", "P{kOpZBZ$R<;~W4!Gd_MtlObTtrJW=XRZJ[1", ":ArhxzgW?[/7)ZEV4-}$8^<I^O!6$HX86m:?", "@om)Mp`5@G%:{@'F$5HD</=ypslB2(!YTS!:", "1XKw>>8,88bICJhqd7{uONmsm;Td_!R.5XwI", "5XNKpHR?[Rob'!*_=p#6F.z5#:'2lX&YV4}s"};
    TopographicalImage* pObj = new TopographicalImage();
    clock_t start = clock();
    vector<int> result = pObj->calcPeakAreas(topoData);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {27, 21, 17, 55, 44, 23, 35, 63, 36, 12, 40, 51, 28, 29, 13, 60, 22, 40, 1, 11, 1, 17, 4, 58, 18, 21, 1, 24, 31, 5, 30, 18, 12, 35, 5, 21, 1, 10, 3, 10, 2, 19, 29, 2, 12, 23, 16, 7, 13, 6, 23, 20, 11, 27, 8, 12, 10, 4, 20, 2, 7, 7, 11, 1, 1, 7, 5, 13, 8, 14, 4, 8, 9, 16, 10, 9, 6, 5, 10, 2, 3, 3, 1, 3, 4, 2, 5, 1, 5, 2, 5, 2, 3, 1, 1, 1, 1, 2, 9, 4, 3, 5, 9, 1, 5, 1, 2, 5, 1, 6, 2, 8, 1, 3, 5, 7, 5, 3, 1, 2, 1, 11, 1, 2, 1, 1, 1, 6, 2, 2, 1, 9, 4, 2, 2, 1, 7, 1, 4, 1, 1, 1, 2, 1, 2, 3, 3, 3, 2, 1, 4, 3, 2, 4, 5, 2, 2, 1, 1, 2, 4, 2, 1, 1, 1, 1, 4, 1, 2, 1, 1, 2, 2, 1, 1, 2, 1, 1, 1, 2, 1, 1, 5, 1, 3, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> topoData = {"K4^!h}m:@i|%P7uMvGUk";
    TopographicalImage* pObj = new TopographicalImage();
    clock_t start = clock();
    vector<int> result = pObj->calcPeakAreas(topoData);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {21, 30, 15, 50, 35, 6, 22, 15, 4, 4, 4, 2, 8, 4, 7, 10, 1, 5, 3, 2, 1, 6, 3, 5, 2, 2, 3, 1, 2, 1, 1, 2, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> topoData = {"M8*C,V?p4i(M]=y5)L/:7cEM]k}H0DcS7%h~!";
    TopographicalImage* pObj = new TopographicalImage();
    clock_t start = clock();
    vector<int> result = pObj->calcPeakAreas(topoData);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 17, 36, 27, 40, 17, 19, 13, 12, 18, 22, 18, 3, 4, 11, 7, 16, 6, 10, 1, 18, 14, 2, 1, 7, 10, 3, 1, 5, 1, 6, 3, 7, 1, 10, 4, 2, 9, 1, 4, 3, 3, 1, 1, 2, 6, 1, 3, 1, 2, 1, 2, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> topoData = {"MO{", "O~$", "(fa", "&wE", "T#_", "ExA", "c'd", "%R!", "%v!", "6@5", "4jA", ":JF", "Q6)", "gG)", "I;g", "1vW", "Ost", "B?o", "X(8", "VAk", "6!K", "-D%", "(q)", "F[3", "~:W", "RaR", "G:h", "M^:", "[C+", "g#0"};
    TopographicalImage* pObj = new TopographicalImage();
    clock_t start = clock();
    vector<int> result = pObj->calcPeakAreas(topoData);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12, 18, 13, 1, 5, 18, 4, 3, 5, 6, 2, 1, 2};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> topoData = {"Io/S*J%ZPze6:T,G!?ZzlM", "Wa~auIV]i}5x@0ag!`rSnY";
    TopographicalImage* pObj = new TopographicalImage();
    clock_t start = clock();
    vector<int> result = pObj->calcPeakAreas(topoData);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {16, 57, 64, 30, 24, 11, 75, 10, 12, 16, 24, 21, 21, 10, 8, 14, 18, 5, 29, 5, 9, 9, 2, 3, 40, 11, 2, 18, 8, 26, 7, 1, 4, 5, 19, 6, 5, 2, 13, 6, 10, 9, 1, 3, 3, 11, 5, 2, 7, 4, 14, 2, 1, 2, 3, 1, 1, 1, 1, 7, 1, 1, 1, 1, 2, 6, 4, 1, 2, 4, 2, 3, 3, 1, 3, 1, 1, 1, 1, 5, 3, 2, 1, 5, 1, 1, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> topoData = {"`R-a!W!NPIOj$8Yx", "h/o_BZH-kH)HyCYI", ",;4%(ykAyD4tb_-]", "pSRE'&Vlwq|E`/|C", "HrM(NoQ`Xsq/vxu&", "pGGp@=],T9!U@%C2", "*6g:GLuf>&;VPM~J", "0G`4mMuLs|V:+8{;", "dTypR$7u~#E=m^!<", "~xZ~yg84P]=8p%%)", "F0{H<_1l)VAd.<Ue", "YYwI)L1Z~G+$tG(!", "3Q[&{!Fw8@aG[CM1", "qr0e0{L{i(]<2)a]", "~^BR^~C%f.mtV!O^", "U%MiQW.CdJ!N6r*f", "RbiN,E(%O,aAx7,Z", "HGLq9%gqLO`y[3Gu", "`^z*q/9?]xPb)d~.", "ENzelGg!GcP&VpC#", "%O2dA$'DDXFdf%F4", "jBgztU{''hjq#&QN", "_'iRU`24}w2^+7j!", "=uV/0j7pOV;/!5zz", "^:Z7:]@{C%!fb#]x"};
    TopographicalImage* pObj = new TopographicalImage();
    clock_t start = clock();
    vector<int> result = pObj->calcPeakAreas(topoData);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {20, 56, 15, 20, 26, 11, 15, 30, 28, 22, 6, 1, 8, 1, 19, 7, 11, 5, 12, 7, 12, 1, 3, 5, 9, 3, 15, 2, 1, 3, 2, 4, 1, 1, 3, 2, 1, 5, 2, 2, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> topoData = {"cL8W@*/.jyu0_XN{5ba7{.aag}%5!LR*B&2sZkIK{/HzhgnZOs"};
    TopographicalImage* pObj = new TopographicalImage();
    clock_t start = clock();
    vector<int> result = pObj->calcPeakAreas(topoData);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 3, 2, 4, 4, 5, 4, 2, 2, 1, 3, 2, 2, 3, 4, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> topoData = {"YD0b!J;~m#|!kB0+Cm=lC_%)hIQh;!;n;=FZ7", "@dt-r!wt(=J!!!tY@9.SD]-2d<q(tR&qYO^G}";
    TopographicalImage* pObj = new TopographicalImage();
    clock_t start = clock();
    vector<int> result = pObj->calcPeakAreas(topoData);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {37, 39, 38, 47, 9, 16, 22, 28, 19, 15, 7, 18, 31, 35, 29, 26, 1, 11, 12, 9, 1, 17, 19, 2, 6, 2, 3, 3, 3, 1, 5, 28, 15, 30, 5, 1, 8, 1, 3, 8, 21, 8, 7, 5, 5, 1, 1, 4, 6, 2, 3, 2, 8, 5, 17, 4, 4, 3, 7, 5, 1, 7, 6, 1, 14, 2, 1, 1, 2, 1, 3, 2, 4, 1, 1, 5, 2, 2, 1, 2, 9, 2, 13, 2, 2, 1, 1, 2, 4, 1, 4, 1, 3, 3, 1, 5, 1, 1, 2, 1, 1, 1, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> topoData = {"9A:!}i$25~&/I9kjmv6!}", "NARkz^Ki_u}V(mT,N#RlY", "}.*TW_DgIDo=5/0}IOO79", "wOE7d4)YGUd%du})D'@]Q", "b'_0qh1-T}|DSw!jTh<r~", "{rhs33n4l@c:ILTO9f)2i", "{'eLOjbDH`+AAd,(E3~qS", "R-Q~(J^^]P~d^c?L?O?5z", "=8J.qVp'ns+Xh!%`G%!-|", "@.Ic5VzK/R,a*7b];$?zL", "lg*m:oiSqTuubSVa2hsC?", "Lbb$SLx)~*wz*Vq{WQh;[", "Q2&9`qp56d0QB$D2Cs||d", "R5]%7#AV%`Zba)gt3/TXl", "zDd+bhY_XnMxN!MGMAXR<", "lqq'V%l&#Vr<p{&z!JU8G", "{F*o'K$l7,Sn_oAbiE_%}", "l8=e^)O9|)dB_v#)eS;AG", "K:Wgy^d).U#THbtwSZt=)", "/[Uk*g~hwKPWYaG(AX_VL", "4w_@lwS@fVC@gd`$s3uh?", "~BLqDLFN;:Yp~!VlGG;1~", "1y)~{XnJff.+6aWyaedq&", "_im|V]7W0tRi=m4^vF/8I", "eO$s!!Tx[#~vvjL:kV3TP", "UwRnUI%541JV%J92bkLrJ", "Z];:o`$4@dpB9M9.qzK-R", "s%t_}ZAguL@>m~rF_y~+n", ":o{eM20UN.>&Gk|P<8)F="};
    TopographicalImage* pObj = new TopographicalImage();
    clock_t start = clock();
    vector<int> result = pObj->calcPeakAreas(topoData);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {32, 25, 18, 25, 23, 35, 59, 10, 21, 32, 22, 29, 12, 16, 22, 6, 5, 12, 4, 6, 10, 17, 13, 12, 7, 10, 12, 14, 6, 6, 6, 4, 5, 1, 5, 4, 5, 1, 3, 1, 1, 3, 1, 1, 7, 2, 1, 4, 1, 1, 5, 1, 3, 1, 1, 2, 3, 3, 3, 1, 3, 1, 3, 1};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> topoData = {"NIB{WE>2hY!T9_PbZzyGf@4,HYddgrThG!(B*VRWb'0I", "#_^%m,FS%I(D)oxek>|MLtDHEC!BZ1]veA7=IE:/CH.T", "QFV+leIll@{|dn-}6:AN&~$A$lw,dv[@rz*!8[(NfSbX", "#?5_DT9_wZNm&e8&l!q&?Q`![8tD`l/2Qo+sTu`EPTF5", "g>bS`pwrWV.nR)rSQ]!fx;7sBmbowKemd;_M3VR)Kh!y", "M^|k|oa?nGbhMf0)s9}>UKQ8>lT:0P4&5vLD4.g1,$k!", "rtq[-Z)}:3n9gVQg+0jBwh6`s)[~bbhNf})}7o`EX2@]", "oyGK-TbyUTbUF,NFt5={t~C}<;$#I8A?6o&[=);4BBkd", ":sB83%'3dJy!6Ev_iYx>&x<-YPVdi8nAu^FOiY4f>MwM", "npvx#Uxc'8[,]fIf1BaNaYn{b#[$f2!=zf^?0(/ql5[V", "T#!xS*On]~h*g%BYJ|H5oL6!MJfyWYY5'}gW^.|{8i8l", "nrZ$L.=?F4Z+<zwZX2YB%bt{bA!|DQu{V+l=X;!L)oBM", ":Yd=FL3FS(~kT%~)v}k]bq+j}]m8ZZYc?6=6$>{+=;
    TopographicalImage* pObj = new TopographicalImage();
    clock_t start = clock();
    vector<int> result = pObj->calcPeakAreas(topoData);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {28, 28, 36, 22, 27, 25, 44, 19, 14, 25, 21, 77, 54, 32, 10, 1, 8, 38, 16, 24, 34, 57, 31, 30, 3, 29, 40, 2, 15, 8, 19, 29, 4, 11, 17, 41, 19, 2, 12, 1, 29, 10, 48, 8, 17, 2, 9, 4, 5, 36, 3, 3, 31, 21, 38, 3, 1, 7, 2, 24, 52, 22, 14, 24, 11, 9, 15, 4, 14, 6, 8, 2, 2, 3, 2, 1, 4, 6, 27, 4, 24, 2, 6, 4, 9, 17, 5, 11, 9, 5, 3, 11, 8, 16, 11, 1, 21, 5, 4, 6, 2, 8, 4, 18, 1, 13, 1, 4, 18, 1, 3, 15, 13, 4, 4, 3, 16, 1, 4, 3, 6, 12, 6, 15, 1, 12, 10, 6, 1, 7, 3, 9, 3, 4, 1, 5, 8, 3, 6, 4, 1, 5, 2, 2, 3, 6, 6, 5, 8, 3, 1, 2, 1, 12, 1, 2, 2, 7, 1, 4, 1, 12, 3, 1, 4, 4, 9, 1, 1, 1, 6, 7, 4, 1, 4, 6, 3, 5, 4, 2, 1, 7, 3, 2, 1, 5, 1, 1, 2, 1, 5, 1, 2, 1, 1, 4, 2, 1, 1, 1, 1, 4, 1, 1, 1, 2, 2, 2, 3, 4, 1, 1, 1, 2, 2, 1, 2, 3, 2, 1, 2, 1, 1, 2, 1, 2, 1, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 2, 3, 4, 2, 1, 1, 3, 2, 1, 1, 1, 1, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> topoData = {"*", "`", ",", "Z", "P", "h", "J", "'", "G", "a", "%", "-"};
    TopographicalImage* pObj = new TopographicalImage();
    clock_t start = clock();
    vector<int> result = pObj->calcPeakAreas(topoData);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 3, 3, 1, 1};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> topoData = {"*9Ua%WhJ1WWw&kV=XNm", "$d#I2Um'EAF^YsLf3kX", "h+PU.hRtP;:r#p>%i(|"};
    TopographicalImage* pObj = new TopographicalImage();
    clock_t start = clock();
    vector<int> result = pObj->calcPeakAreas(topoData);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {14, 14, 12, 3, 1, 1, 10, 1, 1};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> topoData = {":=:.;E+trqE=ylOoKEUpr6&", "=b.Qmj#RmW_|M/;<AN!Xubp", "HNRwTLt!wyODd6UHeiAfAOP", "L'6@^gvvr3mxgaDvkLd>6}/";
    TopographicalImage* pObj = new TopographicalImage();
    clock_t start = clock();
    vector<int> result = pObj->calcPeakAreas(topoData);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {68, 27, 11, 33, 8, 7, 16, 4, 1, 1, 3, 24, 1, 2, 11, 5, 9, 2, 1, 7, 9, 1, 3, 2, 1, 1, 1, 1, 3, 3, 2, 2, 3, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> topoData = {"9Ae,Q^IJ(1g=F$!'15tB;%WjfDiXI?H2", "Oq]POR.!.bGVtpB>;d2395NU@aHGFQv!", "1g252pf(X!96RvOmu/(-U$8Wp!vso4.s", ";w:M4[}m_sb-R|SLx+Fr>#if[KjL(9^N";
    TopographicalImage* pObj = new TopographicalImage();
    clock_t start = clock();
    vector<int> result = pObj->calcPeakAreas(topoData);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {63, 41, 56, 23, 20, 36, 22, 19, 1, 6, 18, 31, 2, 2, 6, 4, 13, 16, 16, 18, 11, 1, 8, 4, 14, 4, 6, 10, 2, 9, 24, 3, 1, 11, 8, 6, 4, 2, 4, 5, 6, 11, 4, 3, 1, 2, 1, 2, 2, 1, 1, 4, 1, 1, 3, 1, 2, 1, 1, 2, 1, 1, 1, 1, 2, 1, 1};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> topoData = {"41dZz*fEj$RgqV", "!yxf41I0Yl/yx7", "XpxFpG9^9NST%u", "1~c7jd!bQ-o,3;", "A$cG1e!&|lQvy!", "S>Y,>9,+Wrig=L", "fis7&c#Z:=i!gX", "@!#t3L}8I]@uxb";
    TopographicalImage* pObj = new TopographicalImage();
    clock_t start = clock();
    vector<int> result = pObj->calcPeakAreas(topoData);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {38, 15, 21, 37, 23, 11, 15, 1, 1, 11, 2, 12, 3, 6, 5, 5, 1, 3, 12, 7, 2, 2, 4, 7, 2, 2, 1, 2, 1};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> topoData = {"^CpNct!2=!WePFpoYU+vU]S]1v*2:[BUS'i&*+[kd@", "S.,GYi{~K;f*<qI(wC+$2S9:;c0t6|>/xIyqJJ[-2v", "FD9'TW,gGr#+PMe]n;^/d{G!gNSik;l?p!W^NWc*wU", ">ZA;7;!'Zdv!llcEdeR$E{E1v#7'lw;*pp~25Y3Dvd", "Vi_*Dkx!uI(Z-W5~K!Mg`b1H{'{LQ>!@Gv~luua&Xw"};
    TopographicalImage* pObj = new TopographicalImage();
    clock_t start = clock();
    vector<int> result = pObj->calcPeakAreas(topoData);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {35, 33, 21, 18, 15, 5, 2, 3, 3, 3, 10, 14, 4, 1, 2, 1, 8, 1, 5, 1, 4, 2, 2, 3, 8, 1, 1, 2, 1, 1};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> topoData = {"AAAAAAABBBBCCCDEFGHHIIJIIHGFEDDCCCBBBBBBBBBBAAAAAA", "AAAAABBBBBCCDDEEFGHIJJJJIIHGFEDDCCCCCCCCCBBBBBAAAA", "AAAABBBBCCCDDEEFGHIIJJJJJIHGFEDDDDDDDDDCCCCBBBBAAA", "AAABBBBCCDDEEFFGHHIJJJJJJIHGFEEDDDDDEEDDDDCCBBBBAA", "AABBBCCDDEEFFGGHHIIJJJJJIHHGFEEEEEEEFFFEEDDCCBBBAA", "BBBBCCDDEFFGHHHIIIIJJJIIIHGFFEEEEFFGGGGGFEEDCCBBBA", "BBBCCDEEFGHIIIJJJJIIIIIHHGGFFEEFFGGHHHHHGGFEDCCBBB", "BBCCDEEGHIJJKKKKJJJIIHHGGFFEEEEFGGHIIJJIIHGFEDCCBB", "CCCDEEFHIJKLMMMLKKJIHHGGFFEEEEFFGHIJJKKJJIHGFEDCBB", "CDDEEFHIJLMNNNNMLKJIHGFFEEEDEEFFGIJKKLLLKJIHFEDCCB", "DDEFFGIJLMNOPPONMLJIHGFEEDDDDEFGHIJKLMMMLKJIGFEDCB", "EEFFGHIKMNOQQQPONLKIHFEEDDDDDEFGHIKLMMNMMLKIHGEDCC", "FFGGHIJLMOPQRRQPNMKIGFEDDCCDDEFGHIKLMNNNNMLJIGFEDC", "GHHHIJKLNOQRRRQPOMKIGFEDDCCDDEFGHIKLMNNNNMLKIHFEDC", "HIIIJJKLNOPQRRQPNLKIGFEDDCCDDEFGHJKLMNOONNMKJHGFDC", "IJJJJJKLMOPQQQPONLJHGFEDDDDDEEFGIJKLMNOONNMLJIGFED", "JJJJJKKLMNOOPPONMKJHGFEDDDDEEFGHIJKLMNNONNMLJIGFED", "JKKJJJKKLMMNNNNMLJIHFFEEEEEFGGHIJKLMMNNNNMMKJIGFED", "KKKJJJJJKKLLMLLKJIHGFFEEEFFGHIJKKLMMNNNNNMLKJHGFED", "JJJJIIIIIJJJKKJJIIHGFFFFFGHIJKLMMNNNNNNMMLKJIHGEDC", "JJJIIHHHHHHIIIIIHHGGGGGGHIJKLMNOOOOONNMMLKJIHGFEDC", "IIIHHGGGGGGGGHHHGGGGGGHIIJLMNOPQQQQPONMLKJIHGFEDDC", "HHHGGFFFFFFFFFGGGGGGHHIJKMNOQRSSSSRQPNMLKIHGFFEDCC", "GGGFFEEEEEEEEFFFGGGHIJKLMOPRSTUUUTSRPNMKJHGFFEDCCB", "FFFEEEEDDDDEEEEFGGHIJKLNOQRTUVWWWVTRPNLJIHFEEDCCBB", "EEEEDDDDDDDDEEEFGHIJKLNOQRTVWXYYXWUSPNLJHGFEDCCBBB", "DDDDDDDDDDDEEEFFGHIKLNOQRTVWXYZYYWURPMKIGFEDCCBBBB", "CDDDDDDEEEEEEFFGHIJKMOPRSUWXYZZZXWTROMJHGEDCCBBBBA", "CCDDDEEEFFFFFGGHHJKLNOQRTVWXYZZYXVTQNLIGFEDCBBBAAA", "CCDDEFFGGGGHHHHIIJKMNPQSTVWXYYYXVURPMKIGEDCBBBAAAA", "CDDEFGGHIIIIIIIJJKLMOPQSTUVWWXWVUSQNLJHFECCBBBAAAA", "CDEFGHIJKKKKKKKKKLMNOPQRSTUVVVUTSQOMJHGEDCBBBAAAAA", "CDEGHIKLMMMMMMLLLMMNOPQRSSTTTTSRQOMKIGFDCCBBAAAAAA", "DEFGIKLMNOOOONNMMMNNOPQQRRRRRRQPNMKIHFEDCBBBAAAAAA", "DEGHJLMOPQQQPPOONNNOOPPPQQQPPONMLKIHFEDCBBBAAAAAAA", "DEGIKMNPQRRRRQPOOOOOOOPPPOOONMLKJIHFEDCCBBAAAAAAAA", "DFGIKMOQRSSSRRQPOOOOOOOOONMMLKJIHGFEDCCBBBAAAAAAAA", "DFGIKMOQRSSSRRQPOOOOONNNMMLKJIIHGFEDCCBBBAAAAAAAAA", "DEGIJLNPQRRRRQPOONNNNNMMLLKJIHGFEEDCCBBBAAAAAAAAAA", "DEFHJKMOPQQQQPOONNMMMMLLKJIHGGFEDDCCBBBAAAAAAAAAAA", "CDFGIJLMNOOOONNMMLLLLLKKJIHGFEEDCCCBBBAAAAAAAAAAAA", "CDEFGIJKLMMMMMLLKKKKKJJIIHGFEDDCCBBBBAAAAAAAAAAAAA", "CCDEFGHIJKKKKKJJJIIIIIHHGGFEDDCCBBBBAAAAAAAAAAAAAA", "BCCDEFGHHIIIIIHHHHHHHGGGFFEDDCCBBBAAAAAAAAAAAAAAAA", "BBCCDEEFFGGGGGGFFFFFFFFEEDDCCCBBBAAAAAAAAAAAAAAAAA", "BBBCCDDEEEEEEEEEEEEEEEEDDDCCBBBBAAAAAAAAAAAAAAAAAA", "ABBBCCCCDDDDDDDDDDDDDDDCCCCBBBBAAAAAAAAAAAAAAAAAAA", "AABBBBBCCCCCCCCCCCCCCCCCCBBBBBAAAAAAAAAAAAAAAAAAAA", "AAABBBBBBBBBBBBBBBBBBBBBBBBBAAAAAAAAAAAAAAAAAAAAAA", "AAAAAABBBBBBBBBBBBBBBBBBBBAAAAAAAAAAAAAAAAAAAAAAAA"};
    TopographicalImage* pObj = new TopographicalImage();
    clock_t start = clock();
    vector<int> result = pObj->calcPeakAreas(topoData);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1918, 65, 483, 5, 5, 24};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> topoData = {"zzzzzzzzzzzzz", "z...........z", "z...c.b.c...z", "z....bab.b..z", "z...c.b.c...z", "z...........z", "zzzzzzzzzzzzz"};
    TopographicalImage* pObj = new TopographicalImage();
    clock_t start = clock();
    vector<int> result = pObj->calcPeakAreas(topoData);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {81, 6, 2, 1, 1};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> topoData = {"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"};
    TopographicalImage* pObj = new TopographicalImage();
    clock_t start = clock();
    vector<int> result = pObj->calcPeakAreas(topoData);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {93};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> topoData = {"aaba", "aaba", "aaaa", "abaa", "abaa", "abaa"};
    TopographicalImage* pObj = new TopographicalImage();
    clock_t start = clock();
    vector<int> result = pObj->calcPeakAreas(topoData);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {21, 3};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> topoData = {"AAAAAAABBBBCCCDEFGHHIIJIIHGFEDDCCCBBBBBBBBBBAAAAAA", "AAAAABBBBBCCDDEEFGHIJJJJIIHGFEDDCCCCCCCCCBBBBBAAAA", "AAAABBBBCCCDDEEFGHIIJJJJJIHGFEDDDDDDDDDCCCCBBBBAAA", "AAABBBBCCDDEEFFGHHIJJJJJJIHGFEEDDDDDEEDDDDCCBBBBAA", "AABBBCCDDEEFFGGHHIIJJJJJIHHGFEEEEEEEFFFEEDDCCBBBAA", "BBBBCCDDEFFGHHHIIIIJJJIIIHGFFEEEEFFGGGGGFEEDCCBBBA", "BBBCCDEEFGHIIIJJJJIIIIIHHGGFFEEFFGGHHHHHGGFEDCCBBB", "BBCCDEEGHIJJKKKKJJJIIHHGGFFEEEEFGGHIIJJIIHGFEDCCBB", "CCCDEEFHIJKLMMMLKKJIHHGGFFEEEEFFGHIJJKKJJIHGFEDCBB", "CDDEEFHIJLMNNNNMLKJIHGFFEEEDEEFFGIJKKLLLKJIHFEDCCB", "DDEFFGIJLMNOPPONMLJIHGFEEDDDDEFGHIJKLMMMLKJIGFEDCB", "EEFFGHIKMNOQQQPONLKIHFEEDDDDDEFGHIKLMMNMMLKIHGEDCC", "FFGGHIJLMOPQRRQPNMKIGFEDDCCDDEFGHIKLMNNNNMLJIGFEDC", "GHHHIJKLNOQRRRQPOMKIGFEDDCCDDEFGHIKLMNNNNMLKIHFEDC", "HIIIJJKLNOPQRRQPNLKIGFEDDCCDDEFGHJKLMNOONNMKJHGFDC", "IJJJJJKLMOPQQQPONLJHGFEDDDDDEEFGIJKLMNOONNMLJIGFED", "JJJJJKKLMNOOPPONMKJHGFEDDDDEEFGHIJKLMNNONNMLJIGFED", "JKKJJJKKLMMNNNNMLJIHFFEEEEEFGGHIJKLMMNNNNMMKJIGFED", "KKKJJJJJKKLLMLLKJIHGFFEEEFFGHIJKKLMMNNNNNMLKJHGFED", "JJJJIIIIIJJJKKJJIIHGFFFFFGHIJKLMMNNNNNNMMLKJIHGEDC", "JJJIIHHHHHHIIIIIHHGGGGGGHIJKLMNOOOOONNMMLKJIHGFEDC", "IIIHHGGGGGGGGHHHGGGGGGHIIJLMNOPQQQQPONMLKJIHGFEDDC", "HHHGGFFFFFFFFFGGGGGGHHIJKMNOQRSSSSRQPNMLKIHGFFEDCC", "GGGFFEEEEEEEEFFFGGGHIJKLMOPRSTUUUTSRPNMKJHGFFEDCCB", "FFFEEEEDDDDEEEEFGGHIJKLNOQRTUVWWWVTRPNLJIHFEEDCCBB", "EEEEDDDDDDDDEEEFGHIJKLNOQRTVWXYYXWUSPNLJHGFEDCCBBB", "DDDDDDDDDDDEEEFFGHIKLNOQRTVWXYZYYWURPMKIGFEDCCBBBB", "CDDDDDDEEEEEEFFGHIJKMOPRSUWXYZZZXWTROMJHGEDCCBBBBA", "CCDDDEEEFFFFFGGHHJKLNOQRTVWXYZZYXVTQNLIGFEDCBBBAAA", "CCDDEFFGGGGHHHHIIJKMNPQSTVWXYYYXVURPMKIGEDCBBBAAAA", "CDDEFGGHIIIIIIIJJKLMOPQSTUVWWXWVUSQNLJHFECCBBBAAAA", "CDEFGHIJKKKKKKKKKLMNOPQRSTUVVVUTSQOMJHGEDCBBBAAAAA", "CDEGHIKLMMMMMMLLLMMNOPQRSSTTTTSRQOMKIGFDCCBBAAAAAA", "DEFGIKLMNOOOONNMMMNNOPQQRRRRRRQPNMKIHFEDCBBBAAAAAA", "DEGHJLMOPQQQPPOONNNOOPPPQQQPPONMLKIHFEDCBBBAAAAAAA", "DEGIKMNPQRRRRQPOOOOOOOPPPOOONMLKJIHFEDCCBBAAAAAAAA", "DFGIKMOQRSSSRRQPOOOOOOOOONMMLKJIHGFEDCCBBBAAAAAAAA", "DFGIKMOQRSSSRRQPOOOOONNNMMLKJIIHGFEDCCBBBAAAAAAAAA", "DEGIJLNPQRRRRQPOONNNNNMMLLKJIHGFEEDCCBBBAAAAAAAAAA", "DEFHJKMOPQQQQPOONNMMMMLLKJIHGGFEDDCCBBBAAAAAAAAAAA", "CDFGIJLMNOOOONNMMLLLLLKKJIHGFEEDCCCBBBAAAAAAAAAAAA", "CDEFGIJKLMMMMMLLKKKKKJJIIHGFEDDCCBBBBAAAAAAAAAAAAA", "CCDEFGHIJKKKKKJJJIIIIIHHGGFEDDCCBBBBAAAAAAAAAAAAAA", "BCCDEFGHHIIIIIHHHHHHHGGGFFEDDCCBBBAAAAAAAAAAAAAAAA", "BBCCDEEFFGGGGGGFFFFFFFFEEDDCCCBBBAAAAAAAAAAAAAAAAA", "BBBCCDDEEEEEEEEEEEEEEEEDDDCCBBBBAAAAAAAAAAAAAAAAAA", "ABBBCCCCDDDDDDDDDDDDDDDCCCCBBBBAAAAAAAAAAAAAAAAAAA", "AABBBBBCCCCCCCCCCCCCCCCCCBBBBBAAAAAAAAAAAAAAAAAAAA", "AAABBBBBBBBBBBBBBBBBBBBBBBBBAAAAAAAAAAAAAAAAAAAAAA", "AAAAAABBBBBBBBBBBBBBBBBBBBAAAAAAAAAAAAAAAAAAAAAAAA"};
    TopographicalImage* pObj = new TopographicalImage();
    clock_t start = clock();
    vector<int> result = pObj->calcPeakAreas(topoData);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1918, 65, 483, 5, 5, 24};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> topoData = {"zzzzzzzzzzzzz", "z...........z", "z...c.b.c...z", "z....bab.b..z", "z...c.b.c...z", "z...........z", "zzzzzzzzzzzzz"};
    TopographicalImage* pObj = new TopographicalImage();
    clock_t start = clock();
    vector<int> result = pObj->calcPeakAreas(topoData);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {81, 6, 2, 1, 1};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> topoData = {"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"};
    TopographicalImage* pObj = new TopographicalImage();
    clock_t start = clock();
    vector<int> result = pObj->calcPeakAreas(topoData);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {93};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> topoData = {"aaba", "aaba", "aaaa", "abaa", "abaa", "abaa"};
    TopographicalImage* pObj = new TopographicalImage();
    clock_t start = clock();
    vector<int> result = pObj->calcPeakAreas(topoData);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {21, 3};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=10265618&rd=5856&pm=2932
********************************************************************************
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
#include <time.h>
 
using namespace std;
 
class TopographicalImage {
public:
  int getarea(vector<string> &t,int x,int y, char z)
  {
    if((x<0)||(x>=t[0].size()))
      return 0;
    if((y<0)||(y>=t.size()))
      return 0;
    char h = t[y][x];
    if( h == ' ')
      return 0;
    if( h > z )
      return 0;
    int area = 1;
    t[y][x] = ' ';
    area += getarea(t,x-1,y-1,h);
    area += getarea(t,x-1,y,h);
    area += getarea(t,x-1,y+1,h);
    area += getarea(t,x,y-1,h);
    area += getarea(t,x,y+1,h);
    area += getarea(t,x+1,y-1,h);
    area += getarea(t,x+1,y,h);
    area += getarea(t,x+1,y+1,h);
    return area;  
  }
  vector <int> calcPeakAreas(vector <string>);
};
 
vector <int> TopographicalImage::calcPeakAreas(vector <string> topoData) {
  vector <int> ret(0);
  int sum = 0;
  while (sum < topoData.size()*topoData[0].size())
  {
    char max = ' ';
    int x = -1;
    int y = -1;
    for (int i = 0; i< topoData.size();i++)
    {
      for (int j = 0; j< topoData[0].size();j++)
      {
        if (topoData[i][j]>max)
        {
          max = topoData[i][j];
          x = j;
          y = i;
        }
      }
    }
    int area = getarea(topoData,x,y,max);
    sum += area;
    ret.push_back(area);     
  }
  return ret;
}
 
double test0() {
  string t0[] = {
"............",
"....i..i....",
"....i..i....",
".o..i..i..o.",
".o........o.",
"..oooooooo..",
"............"
};
  vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
  TopographicalImage * obj = new TopographicalImage();
  clock_t start = clock();
  vector <int> my_answer = obj->calcPeakAreas(p0);
  clock_t end = clock();
  delete obj;
  cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
  int t1[] = { 78,  3,  3 };
  vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
  cout <<"Desired answer: " <<endl;
  cout <<"\t{ ";
  if (p1.size() > 0) {
    cout <<p1[0];
    for (int i=1; i<p1.size(); i++)
      cout <<", " <<p1[i];
    cout <<" }" <<endl;
  }
  else
    cout <<"}" <<endl;
  cout <<endl <<"Your answer: " <<endl;
  cout <<"\t{ ";
  if (my_answer.size() > 0) {
    cout <<my_answer[0];
    for (int i=1; i<my_answer.size(); i++)
      cout <<", " <<my_answer[i];
    cout <<" }" <<endl;
  }
  else
    cout <<"}" <<endl;
  if (my_answer != p1) {
    cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
    return -1;
  }
  else {
    cout <<"Match :-)" <<endl <<endl;
    return (double)(end-start)/CLOCKS_PER_SEC;  //I want to eventually turn this into a time of some kind.
  }
}
double test1() {
  string t0[] = {
"............",
"....i..i....",
"....i..i....",
".S..i..i..Y.",
".M........E.",
"..ILEYSMIL..",
"............"
};
  vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
  TopographicalImage * obj = new TopographicalImage();
  clock_t start = clock();
  vector <int> my_answer = obj->calcPeakAreas(p0);
  clock_t end = clock();
  delete obj;
  cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
  int t1[] = { 69,  3,  2,  5,  3,  1,  1 };
  vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
  cout <<"Desired answer: " <<endl;
  cout <<"\t{ ";
  if (p1.size() > 0) {
    cout <<p1[0];
    for (int i=1; i<p1.size(); i++)
      cout <<", " <<p1[i];
    cout <<" }" <<endl;
  }
  else
    cout <<"}" <<endl;
  cout <<endl <<"Your answer: " <<endl;
  cout <<"\t{ ";
  if (my_answer.size() > 0) {
    cout <<my_answer[0];
    for (int i=1; i<my_answer.size(); i++)
      cout <<", " <<my_answer[i];
    cout <<" }" <<endl;
  }
  else
    cout <<"}" <<endl;
  if (my_answer != p1) {
    cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
    return -1;
  }
  else {
    cout <<"Match :-)" <<endl <<endl;
    return (double)(end-start)/CLOCKS_PER_SEC;  //I want to eventually turn this into a time of some kind.
  }
}
double test2() {
  string t0[] = {
"zzzzzzzzzzzzz",
"z...........z",
"z...c.b.c...z",
"z....bab.b..z",
"z...c.b.c...z",
"z...........z",
"zzzzzzzzzzzzz"
};
  vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
  TopographicalImage * obj = new TopographicalImage();
  clock_t start = clock();
  vector <int> my_answer = obj->calcPeakAreas(p0);
  clock_t end = clock();
  delete obj;
  cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
  int t1[] = { 81,  6,  2,  1,  1 };
  vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
  cout <<"Desired answer: " <<endl;
  cout <<"\t{ ";
  if (p1.size() > 0) {
    cout <<p1[0];
    for (int i=1; i<p1.size(); i++)
      cout <<", " <<p1[i];
    cout <<" }" <<endl;
  }
  else
    cout <<"}" <<endl;
  cout <<endl <<"Your answer: " <<endl;
  cout <<"\t{ ";
  if (my_answer.size() > 0) {
    cout <<my_answer[0];
    for (int i=1; i<my_answer.size(); i++)
      cout <<", " <<my_answer[i];
    cout <<" }" <<endl;
  }
  else
    cout <<"}" <<endl;
  if (my_answer != p1) {
    cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
    return -1;
  }
  else {
    cout <<"Match :-)" <<endl <<endl;
    return (double)(end-start)/CLOCKS_PER_SEC;  //I want to eventually turn this into a time of some kind.
  }
}
double test3() {
  string t0[] = {"!"};
  vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
  TopographicalImage * obj = new TopographicalImage();
  clock_t start = clock();
  vector <int> my_answer = obj->calcPeakAreas(p0);
  clock_t end = clock();
  delete obj;
  cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
  int t1[] = { 1 };
  vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
  cout <<"Desired answer: " <<endl;
  cout <<"\t{ ";
  if (p1.size() > 0) {
    cout <<p1[0];
    for (int i=1; i<p1.size(); i++)
      cout <<", " <<p1[i];
    cout <<" }" <<endl;
  }
  else
    cout <<"}" <<endl;
  cout <<endl <<"Your answer: " <<endl;
  cout <<"\t{ ";
  if (my_answer.size() > 0) {
    cout <<my_answer[0];
    for (int i=1; i<my_answer.size(); i++)
      cout <<", " <<my_answer[i];
    cout <<" }" <<endl;
  }
  else
    cout <<"}" <<endl;
  if (my_answer != p1) {
    cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
    return -1;
  }
  else {
    cout <<"Match :-)" <<endl <<endl;
    return (double)(end-start)/CLOCKS_PER_SEC;  //I want to eventually turn this into a time of some kind.
  }
}
double test4() {
  string t0[] = {
"AAAAAAABBBBCCCDEFGHHIIJIIHGFEDDCCCBBBBBBBBBBAAAAAA",
"AAAAABBBBBCCDDEEFGHIJJJJIIHGFEDDCCCCCCCCCBBBBBAAAA",
"AAAABBBBCCCDDEEFGHIIJJJJJIHGFEDDDDDDDDDCCCCBBBBAAA",
"AAABBBBCCDDEEFFGHHIJJJJJJIHGFEEDDDDDEEDDDDCCBBBBAA",
"AABBBCCDDEEFFGGHHIIJJJJJIHHGFEEEEEEEFFFEEDDCCBBBAA",
"BBBBCCDDEFFGHHHIIIIJJJIIIHGFFEEEEFFGGGGGFEEDCCBBBA",
"BBBCCDEEFGHIIIJJJJIIIIIHHGGFFEEFFGGHHHHHGGFEDCCBBB",
"BBCCDEEGHIJJKKKKJJJIIHHGGFFEEEEFGGHIIJJIIHGFEDCCBB",
"CCCDEEFHIJKLMMMLKKJIHHGGFFEEEEFFGHIJJKKJJIHGFEDCBB",
"CDDEEFHIJLMNNNNMLKJIHGFFEEEDEEFFGIJKKLLLKJIHFEDCCB",
"DDEFFGIJLMNOPPONMLJIHGFEEDDDDEFGHIJKLMMMLKJIGFEDCB",
"EEFFGHIKMNOQQQPONLKIHFEEDDDDDEFGHIKLMMNMMLKIHGEDCC",
"FFGGHIJLMOPQRRQPNMKIGFEDDCCDDEFGHIKLMNNNNMLJIGFEDC",
"GHHHIJKLNOQRRRQPOMKIGFEDDCCDDEFGHIKLMNNNNMLKIHFEDC",
"HIIIJJKLNOPQRRQPNLKIGFEDDCCDDEFGHJKLMNOONNMKJHGFDC",
"IJJJJJKLMOPQQQPONLJHGFEDDDDDEEFGIJKLMNOONNMLJIGFED",
"JJJJJKKLMNOOPPONMKJHGFEDDDDEEFGHIJKLMNNONNMLJIGFED",
"JKKJJJKKLMMNNNNMLJIHFFEEEEEFGGHIJKLMMNNNNMMKJIGFED",
"KKKJJJJJKKLLMLLKJIHGFFEEEFFGHIJKKLMMNNNNNMLKJHGFED",
"JJJJIIIIIJJJKKJJIIHGFFFFFGHIJKLMMNNNNNNMMLKJIHGEDC",
"JJJIIHHHHHHIIIIIHHGGGGGGHIJKLMNOOOOONNMMLKJIHGFEDC",
"IIIHHGGGGGGGGHHHGGGGGGHIIJLMNOPQQQQPONMLKJIHGFEDDC",
"HHHGGFFFFFFFFFGGGGGGHHIJKMNOQRSSSSRQPNMLKIHGFFEDCC",
"GGGFFEEEEEEEEFFFGGGHIJKLMOPRSTUUUTSRPNMKJHGFFEDCCB",
"FFFEEEEDDDDEEEEFGGHIJKLNOQRTUVWWWVTRPNLJIHFEEDCCBB",
"EEEEDDDDDDDDEEEFGHIJKLNOQRTVWXYYXWUSPNLJHGFEDCCBBB",
"DDDDDDDDDDDEEEFFGHIKLNOQRTVWXYZYYWURPMKIGFEDCCBBBB",
"CDDDDDDEEEEEEFFGHIJKMOPRSUWXYZZZXWTROMJHGEDCCBBBBA",
"CCDDDEEEFFFFFGGHHJKLNOQRTVWXYZZYXVTQNLIGFEDCBBBAAA",
"CCDDEFFGGGGHHHHIIJKMNPQSTVWXYYYXVURPMKIGEDCBBBAAAA",
"CDDEFGGHIIIIIIIJJKLMOPQSTUVWWXWVUSQNLJHFECCBBBAAAA",
"CDEFGHIJKKKKKKKKKLMNOPQRSTUVVVUTSQOMJHGEDCBBBAAAAA",
"CDEGHIKLMMMMMMLLLMMNOPQRSSTTTTSRQOMKIGFDCCBBAAAAAA",
"DEFGIKLMNOOOONNMMMNNOPQQRRRRRRQPNMKIHFEDCBBBAAAAAA",
"DEGHJLMOPQQQPPOONNNOOPPPQQQPPONMLKIHFEDCBBBAAAAAAA",
"DEGIKMNPQRRRRQPOOOOOOOPPPOOONMLKJIHFEDCCBBAAAAAAAA",
"DFGIKMOQRSSSRRQPOOOOOOOOONMMLKJIHGFEDCCBBBAAAAAAAA",
"DFGIKMOQRSSSRRQPOOOOONNNMMLKJIIHGFEDCCBBBAAAAAAAAA",
"DEGIJLNPQRRRRQPOONNNNNMMLLKJIHGFEEDCCBBBAAAAAAAAAA",
"DEFHJKMOPQQQQPOONNMMMMLLKJIHGGFEDDCCBBBAAAAAAAAAAA",
"CDFGIJLMNOOOONNMMLLLLLKKJIHGFEEDCCCBBBAAAAAAAAAAAA",
"CDEFGIJKLMMMMMLLKKKKKJJIIHGFEDDCCBBBBAAAAAAAAAAAAA",
"CCDEFGHIJKKKKKJJJIIIIIHHGGFEDDCCBBBBAAAAAAAAAAAAAA",
"BCCDEFGHHIIIIIHHHHHHHGGGFFEDDCCBBBAAAAAAAAAAAAAAAA",
"BBCCDEEFFGGGGGGFFFFFFFFEEDDCCCBBBAAAAAAAAAAAAAAAAA",
"BBBCCDDEEEEEEEEEEEEEEEEDDDCCBBBBAAAAAAAAAAAAAAAAAA",
"ABBBCCCCDDDDDDDDDDDDDDDCCCCBBBBAAAAAAAAAAAAAAAAAAA",
"AABBBBBCCCCCCCCCCCCCCCCCCBBBBBAAAAAAAAAAAAAAAAAAAA",
"AAABBBBBBBBBBBBBBBBBBBBBBBBBAAAAAAAAAAAAAAAAAAAAAA",
"AAAAAABBBBBBBBBBBBBBBBBBBBAAAAAAAAAAAAAAAAAAAAAAAA"
};
  vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
  TopographicalImage * obj = new TopographicalImage();
  clock_t start = clock();
  vector <int> my_answer = obj->calcPeakAreas(p0);
  clock_t end = clock();
  delete obj;
  cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
  int t1[] = { 1918,  65,  483,  5,  5,  24 };
  vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
  cout <<"Desired answer: " <<endl;
  cout <<"\t{ ";
  if (p1.size() > 0) {
    cout <<p1[0];
    for (int i=1; i<p1.size(); i++)
      cout <<", " <<p1[i];
    cout <<" }" <<endl;
  }
  else
    cout <<"}" <<endl;
  cout <<endl <<"Your answer: " <<endl;
  cout <<"\t{ ";
  if (my_answer.size() > 0) {
    cout <<my_answer[0];
    for (int i=1; i<my_answer.size(); i++)
      cout <<", " <<my_answer[i];
    cout <<" }" <<endl;
  }
  else
    cout <<"}" <<endl;
  if (my_answer != p1) {
    cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
    return -1;
  }
  else {
    cout <<"Match :-)" <<endl <<endl;
    return (double)(end-start)/CLOCKS_PER_SEC;  //I want to eventually turn this into a time of some kind.
  }
}
 
//Powered by [KawigiEdit]

********************************************************************************
*******************************************************************************/