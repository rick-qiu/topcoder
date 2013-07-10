/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3946
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

class Stitch {
public:
    vector<string> stitch(vector<string> A, vector<string> B, int overlap);
};

vector<string> Stitch::stitch(vector<string> A, vector<string> B, int overlap) {
    vector<string> ret;
    return ret;
}


int test0() {
    vector<string> A = {"AAAAAA"};
    vector<string> B = {"JJJJJ"};
    int overlap = 4;
    Stitch* pObj = new Stitch();
    clock_t start = clock();
    vector<string> result = pObj->stitch(A, B, overlap);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AACEFHJ"};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> A = {"14ABCD", "25EFGH", "36IJKL"};
    vector<string> B = {"ABCD14", "EFGH25", "IJKL36"};
    int overlap = 4;
    Stitch* pObj = new Stitch();
    clock_t start = clock();
    vector<string> result = pObj->stitch(A, B, overlap);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"14ABCD14", "25EFGH25", "36IJKL36"};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> A = {" 32ygfd", "3uh53G:", ")O83gh3"};
    vector<string> B = {"hsd$*(PH", "3G:$)(*P", "gh86$PBB"};
    int overlap = 3;
    Stitch* pObj = new Stitch();
    clock_t start = clock();
    vector<string> result = pObj->stitch(A, B, overlap);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {" 32ygmd$*(PH", "3uh53G:$)(*P", ")O83gh76$PBB"};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> A = {"A"};
    vector<string> B = {"A"};
    int overlap = 0;
    Stitch* pObj = new Stitch();
    clock_t start = clock();
    vector<string> result = pObj->stitch(A, B, overlap);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AA"};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> A = {" "};
    vector<string> B = {"~~"};
    int overlap = 1;
    Stitch* pObj = new Stitch();
    clock_t start = clock();
    vector<string> result = pObj->stitch(A, B, overlap);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {" O~"};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> A = {"5M5t^vhRq!,@w9?c:K<p0<l?O*Ql?don/nmtm[wU-^}5YD&OB.";
    vector<string> B = "/0Ip0fSA&zF;L+'$| z}Fc3=;g)Qqnr3]0R(|c($bB4pVf`[W#", "~q$0!k[@N!tpiGvq5yL oqn46oDPjC gFij *hgCFK-"0{M1"T";
    int overlap = "sKR[iu>PEKyx27jKbmZ1 f(xo_eOZw8-f-)y-Q[ZL\FE`oLP1C";
    Stitch* pObj = new Stitch();
    clock_t start = clock();
    vector<string> result = pObj->stitch(A, B, overlap);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"5M5t^vhRq!,Do9>fFGG\:<q;?@InUTRk/KO^i^ONcY74.5j1LRA*Or=T+`3", "/0Ip0fSA&yD=K0)*z#hvMg;MDa-cMPN3J44ObZ=GJ9>I-nmujG{Sv>D7U=\", "~q$0!k[@N"rodKvd8kS.pgnDBgYO]ABlAqI%=NkFl>Q*+VDXEimn"HFLA.5", "sKR[iu>PEJus5:cJ]cR23e*amPNQA`VMOKBhLKRIcW;4Um(?*\Wr_7\LKZ ", "Sh8= Y'#4kLV:(5@Vt:^_(df]H17\PRA]DGrV:b9P]ec>F)v9I:_dH{Rqp<", ""A$h &RM@j<OS(Qk@xL]_^YBEwOO_NBX6Go2YMg-iUNQ_:g/iOW05OdtxLT", "tIAKqD0w=nQP-D:/8T^X"?XO[VE]b<SJ3u,PlH3UgIddZ86&MQ)56?VZNwh", "pb:Bbytw=WuPS+;m2@tg(@cCAKQ3>gQcV2NJ58,8_SIrgOO=rDU]zuVr%\c", ""@q8MpY/+'E@Ncr1.c'o+GVb\MY=b?@5eB1)CVhK([m%>PmONF]f~ZSW_a{", "nT+iH>4%+QW%AXCfhcD<u5,-CYJk5@/<0K@qe<AN[GPCp/d9-<{}4LQ"q}C", "VSRi3Bye`iBxYZk2P_:`eFtmGG`p:-=V=1K[3ED@,&1U~<6PDwAv)QiU.4;", ",0f{@*~l]%MiwiH[2/.SE7X?VV=3QQZQY>hLmSFEN-U19?uY1GVXrckui5\", "+w8MNJ5wd7dx>Q0{205B:fiDTD<Zj%\I;YG3@jm?\53g9Y4Ibc`Awyy5s48", "1jGUXo4h4ExN;-`zHOQ[A>-h@*GKG4eMwOnUU,]iIgAV,eL>ZgG`ON^K39x", "UpqR8gGEA7@Jtg=Xp?=+g-4O:+cw<TgPWY51YQn=GO>?lbI>1>.;rs1OkZy", "R"H(A"{]:`Abcs0}n7BCJjD_F9F2GW+DI2Ej-L\bAYKC,.@1@E@wD7V~.{"", "nT8*ao_#`LbMf4(QX1JMTLO>de$yE<O`54vO_Go3mfSJ<LoPlB5JKGAU23k", "}@z8GpX\=!SA/=+c71atMVYUl=K4^bH.>VF[:UFIY5ek0xg/Ui@j~RG0UX(", "-B!=p1_vW=Njq?uK4ymX+6Cp_0RRGN`_gDNYC6cnMgS7zIo0|sn'~J6ft\K", "uI9mF\Uv=<SJ*enBsjmJ[AcEQLqtTNM\6=aE\2I4oK.sfsPB)}O`aP@oi#+", "&<VFYf/)e<jLYt;Fd>aOGI,qD2BYX:kcBIRT59O>MQnz4y=mrrB*+F5SW"-", "GHZ.b;v!r%y3?H5P;K:GZ`7W9EAbo35oD]fzD`TSP.93Dgh20kO=4e6(5!~", "qf@qC~[5#QFpk(=?4i_KhL2ASIKDEe(]0NYI^6d0e0QMjX@fNAJc2?_Q>Df", "*,mM'fv\)<jE^Xfs3H;1gk\c:UObNg=\,eIJPv:2P].4'tT1'6%W|h}G1?W", "V2H)(O}RSH_p]JZrf(,8Plo]9UBCS2lU!a.e[`;kZQ6S2qFFnX?8-G+%TJl", "Gk5UVD<aN]ODT7DHlS6P3]`R[w[[E[OiH^k=9Y+9^uFwW9ca{Iuxr4Am(![", "p-&A'j1:f%ves6Qk*vg.acWF-ANHQQL6mCJ.B^l7Fk*Mf%RW7=cd"9:#y^x", "TGD879~n~LeagP8NJ&K]MXKR8o[5uJCT@'T`MZ7D5Lc^tE6Hg|)ec'Wzk<U", "3Ve'L/r!<CciSCQ`3_7Z_jCKB`oi;gGcS@arGG=m1URY;sAk_b7q{OKl9']", "1gmY2^x)cp63wN,G<i:VQ\R\ER<]_8S@9hAK<6HVn]*H1Q\;eW$BFe~bxKW", "wV?>YvI_mm*CdE,`=C_OcHO=LJN]lkHp:jJCYDN+R[;]TY6G^k{Zy4Y(E+]", "C{J'Mi\1scER/_e&Sk-*cSt8ZSKW0mjgCR#OLM`|j5&^@lgS{)['\kM3_['", "jQ5Lm-]N7^^+Cik9V_MFQCY^G#;UPQ\ZOfC?ILW`5\b+2i6U[`i_bYP_Xz%", "GIbEfJXs W^W;WuXV6YH6*PGg;bC?7I<G?*LY@i<j`/Gs%a$z%X[>RYR%02", "+$hp%2M7'c)@i)hqB/>>,3VPuaLFAHDXC;(;VVpCUl@)G>OUjT{9XHItWq^", "G>HJhR^T^[XYnLIEK>%$9WHM/cQ7sZI*MoaS"rYIE6410`kn."FB> UIW3|", "|zG5<x5C0JRu&&F7M7K,gk`r'k\CM(VDPaNJ\8L*V#TW<7<7z"+[ZYx`rB%", "-`!@c%(o#w1Q/+-bc@b+$K6ZsOEZIE?PliZNTj90^/8H1Q5w%J!SI&f:c|X", ";U8Jx@&^]m{?w_[G%MPcP;=Wkc(?WIASHF5NXegI<v=T6y>)dp!m:2@xZ$"", "zH#LI_26*qLVN7hWlBxaqJ3trnImNM&o<IeFD<[:fD5hj`Ia%'%eTT!?JRx", "iI*?xt>@@hW13G08vL8>[f8M<EaDXR.0=kaTJweVfrOUyKGdj9K02Fi"\K+", "<I]&7f2uLmt^k&E[;JWGDN/f;KiMBW;[cH>Wd6ZgG*bJ?BbMNE<d)-)c`0l", ",;Uy^P*X-#7wc_Fr]j3*L3d=GX,K6Tb6TvDUOux>=.g'\+=}M?)Au:(/T>_", "q()IR(O^FDD)/YL`rda5_=[VG]N_N{PTNSXG0MadoIG[4DA]Ur+g<4I85rX", "]uA,7tYL#NO'0mCGKJf(VEd]fR^A9:<L6@XWR1`]FZEPSK3M\Kf2dR|T(8z", "),QbK( xfUAbkK:=u1o+ea]i9lK^POjqVQV3ld`VqnDpkk(xB>^j,\b-4BS", "\`%#mS+\HV@vtY3XB?l>FPBI^P7nd?9Y-oa#]LYBq1.%cwYz<:B[$37r0!l", "owU79'^p~q8VMm;Iq?^FDZ^yC8T+T`^b-@f,9'OL=c/_]EAlw&`$:7SRs^h", "Q+SD<[~&XEeHA"Ee7[CmXN+BB?POcdxTC*[^e_-]ee<zd$Wf=~)]){HUASJ", "+1a}'4HAdZ]lQd3fLfT-\s`u'BNcYHPAy1IZQr_I\Bn.lgm^%$]h5$5W0@L"};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> A = {"9p9P`15>HC&#+!5J&>x0<^[.y"~yR7,bOD0-DYe)1czp#$6K 2", "DnF&F|^D3`Z.2;EToNXOa%T+[^zmw1lD5lfvshZ&4/MjtixB|/", "9HSfWx9>P"BBEblYVBW6c:A,5'd\p"^D1=_j4vroQBp;>?cT(P", "lF~S*x`8{qNwnI_a2JAQ:W^m]&_{FRYIZ~+nAn<>pUf0n7!+G!", "G7ym\Le@7o}d|]d&3%v-h0L\[m-F)sVA?it/z?L2*ZJG21$~=_", "<M-b8k8P7FHxC0d05BQ/wKC1{s;}~BQNZLZ[1DNj10s"hfKz:5", "z]S\!s#2'0g^~bl(KJLSlt{{XEVn|)gm(Z?^3.?7Z8 @{"y0A-", "29"H1E@CAV>5-IQ@.ReVZT+Sl.)9tJ0h9o0"DzU>z?,@S@x&i{", "li8IvLteqn$!FpA!,75kO YK^p#,DY!TiDZ~ll"4{QI09"1cLU", "oK$,E:>?UZ}*U2_VN37+!A'[zb!!XJ43+Tj%L[TS)cz r'AS2)", ",(F_R#cV7~J,V:A'fuWu$tVMr {\@oPj5q7u0po#MMdjhu`D8h", "7MD9qMB:|?fAN UN3b:a<;FEpW]OrNXHMu!ea**b_CPJ0$&9u^", "thz+Yl-^Vuz@f(t&R(U;oN)%]N~69'd,gf!\r`AP*n7fkWXFTA", "W/.L[A1[3;N~N}u&El->Lwd@/E_L:,dD;"14Pss||fjI$w|4Vf", ")*KTQ78*H"-82*MPuMq5N/P/Lr8PyNMBlZP2,cDfan(~G8yhOM", "`^/#d}S(:#`^fD_|)B6~zj|$hKMB-u6u|#+n/aOo5$q& e@!G#", "B&$}wfX4S7r\N3ODQU;f3 iU fXUJ:d=\L'HPc"|z7)(2#RH`|", "(ftFI5D}<Emq15S1|n/.mxB;;ZNcXxEG*WX)tt?`A{C<YoJT*:", "b/x]]55!rztqeH]dP"S(RFj1D4>1NBPoTs"+jiBm:`!N`GN2W@", "WDM6o|OxF^:q&-GLX`EPS[%{&ARhn7O-4)#$Zm$huvL" R=qC4", "V+4nT-(u14]?Oux, m}W7[,cRf,.86Gl"~.;hx55_Q<`c%U12@", "e!f~OzN(K`$9h}QDRGFybJ4_VWLR&+|ul'k;xeSsj+l$EC}"^4", "<+z84!%%pI NbCwTnX$Xg~M~e(+ld4}M/<Ghb:e GN'FTF=3~k", "mefz)nOOR%#.UI?(@vq."+8d [.iW&[0+VLSJoefgjC!:1DcH-", "#(=0p&\iXz&Q)3k)[ZE~C5j>[8)]E U4`W=xb'U!>'#D7"7`^Z", "&D-G&YqL6C;l/ppSMLF@LSR\Q|@x(T,appV?ylg\<hP|X2c0+:", "aBKp)!twnYo}W>mrCy>8`{D>).[,B}5[~).[A[-t;
    vector<string> B = Ivm+aikK%";
    int overlap = "-1~v6+;
    Stitch* pObj = new Stitch();
    clock_t start = clock();
    vector<string> result = pObj->stitch(A, B, overlap);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"9p9P`15>HC&#+!5J&>x0<^[.y"~yR7,bOD0-DYe(1apfF3KiVB3-BahVwga3+<a'Y }`A^R("AZXnZ1P,oCP&7LcP", "DnF&F|^D3`Z.2;EToNXOa%T+[^zmw1lD5lfvshZ+69MOc@g=@w_]'GSH56s0 nZTjLo'[*<[gN[BadoP6`<J65dI<", "9HSfWx9>P"BBEblYVBW6c:A,5'd\p"^D1=_j4vrkWN_W2^I9&B&{PO@(R\,]k!6aVZ,@/s,`Yt,[AfJUTyt#'$!~w", "lF~S*x`8{qNwnI_a2JAQ:W^m]&_{FRYIZ~+nAn<?oXmEk/EKb_\qAe:&T}S]Z.!bL!ez"'y]e-|=`e^FY`)oxH`p<", "G7ym\Le@7o}d|]d&3%v-h0L\[m-F)sVA?it/z?L2+`EW>>DN+w*j<H`Mx{(I,AP.TL+gXT>_uQm03tR{#8l-6"&Uh", "<M-b8k8P7FHxC0d05BQ/wKC1{s;}~BQNZLZ[1DNi6=XA`pZJ37e.dRbABo _De_E):x;235Hh9yyqp9WV<.Ne6)\U", "z]S\!s#2'0g^~bl(KJLSlt{{XEVn|)gm(Z?^3.?6]>&Do)BV5e4d"`c3{u`f2+O@++}Wef()G 6ERt2+$^6aSv:tW", "29"H1E@CAV>5-IQ@.ReVZT+Sl.)9tJ0h9o0"DzUAkD8?=dV@c6N}sNal? T*Hwe5 AgY."aKN&~ffyw-B|^qY6>]<", "li8IvLteqn$!FpA!,75kO YK^p#,DY!TiDZ~ll"9rLS.[8aheeCM}Q#,_=Ys(aF@,d^6FN56{%q<$`U5U:xLlvm)y", "oK$,E:>?UZ}*U2_VN37+!A'[zb!!XJ43+Tj%L[TP2Tf7v*dm&vf-||'R@\leG;( c0aZ:lM^%'8Xs\d)9#D$g;L%T", ",(F_R#cV7~J,V:A'fuWu$tVMr {\@oPj5q7u0po$SDWfrQN2G6](%?Is+/5 Y7%$9^Pb$-?t&:.@CzG^|=iJ ||]r", "7MD9qMB:|?fAN UN3b:a<;FEpW]OrNXHMu!ea**`XMXYLLIb\Y?]CS4Rx<Ht5E<DtZ@cuMXU|>ZekY2}>AaHJsh]?", "thz+Yl-^Vuz@f(t&R(U;oN)%]N~69'd,gf!\r`AT6o;dbOEor#9n:p3Tqrm";!f-[x7K-$h(48(|Ave}&tT%Ex/ c", "W/.L[A1[3;N~N}u&El->Lwd@/E_L:,dD;"14Pssv{deC-kMHhCS,d06aAAZR>S/%LSD[EX<5H. *?D=O/)}aQMpZs", ")*KTQ78*H"-82*MPuMq5N/P/Lr8PyNMBlZP2,cDg[h@]]^UA4;?t,JsuvRD)|)'{=ZScIUQ|Gh?9>0'#TM:X{|M;f", "`^/#d}S(:#`^fD_|)B6~zj|$hKMB-u6u|#+n/aOl;#oJ%^Pe) Mq),dWR>cG;Ka@8O8jij+pfn?lsvhyujS);}(ZG", "B&$}wfX4S7r\N3ODQU;f3 iU fXUJ:d=\L'HPc"{m3-B9,NRJzqyd+,^HCRw.FFumFYo.s1LU):)-[HNWpnk:Q[ka", "(ftFI5D}<Emq15S1|n/.mxB;;ZNcXxEG*WX)tt?_DuL9hYi5C0~?2u<gE]x6g>3*NJ|/T|l:^hf>F5'9>{kRp\UW\", "b/x]]55!rztqeH]dP"S(RFj1D4>1NBPoTs"+jiBiA`1XoUac5UkI#X#xqWwXdV.-a)k#@"i[3&ZBXU%)H{w`UV[:r", "WDM6o|OxF^:q&-GLX`EPS[%{&ARhn7O-4)#$Zm$bvxK0@dZmKhO_WBEA=G3c*FxQ=i,x$zv1yxHqo)q"0h-[J&vJn", "V+4nT-(u14]?Oux, m}W7[,cRf,.86Gl"~.;hx5:YS?GGACE043LB$7g73^s^"pSC0c:v3KRNe^%aE?}`,YuhOOVr", "e!f~OzN(K`$9h}QDRGFybJ4_VWLR&+|ul'k;xeSmh9m?WdD%9$$+K"W9r-{!IG=FN5HlS56Oy'4!2Z4$He5q6If2K", "<+z84!%%pI NbCwTnX$Xg~M~e(+ld4}M/<Ghb:e"HW,VDKTapXQB=(qT|pB7-F.7Rjs[if0#%&c10x%56NgJ3D9P-", "mefz)nOOR%#.UI?(@vq."+8d [.iW&[0+VLSJoedgZD6NSkbWrPRtU/w)gRp~V|vT%ynZ6h4x-_Z6\:0OmSW1U?qd", "#(=0p&\iXz&Q)3k)[ZE~C5j>[8)]E U4`W=xb'U#>7(N5WdlVl*GY7%?sz&bA/H8g=sX9L7r*TQvLJK,Q;)QYkDll", "&D-G&YqL6C;l/ppSMLF@LSR\Q|@x(T,appV?ylg^9VCg?-DD:V.;BVErTF1HDs\|Y OVXft1z$$n.q:f`s2Q1S1iY", "aBKp)!twnYo}W>mrCy>8`{D>).[,B}5[~).[A[-o/Op^2MhuNC_\y/= XutoLkskP6~!XNuM?X:Xm0\"09o(gt#qb", "-1~v6+,$EH'UPl_Z:Z8[yPeSjy#9)>(R-@'v7N.G\h_chD<;dkLjw7J,%O$ki?4%"fEDY65spQvHzh0-'bs54_f V", "?Y8v|l*{NCjDaZ5{~KQf>mpv;%%oqB'd+gs??a+(5AD2cZLi7x-GAUV#qX/rT,WHq~.yu4 kk7$#Z3agSK[rnyuqU", "a%TZjtw!_c|e5==nWO<#?W$ GOj@Y*jk-m6%^+mya9dHs=gr{-hb3B!Ks7lyeFMa*t8m'O_sEk\yT~`\C{H qH/6s", "fc"IZcVV[>jy:camufb]W!]d&Ybbb"aN|&:h|1{t]:HJH\e5I-aRp!r=-T[t`:j 0k7;Ei|lpLBy>w:X(s,RTGM5u", "kPbmVEP6lO%^Wz)Ov;:daRM`M[M3!BQ\wj1)baSUhjf+^qk]6lGf\!.Nkc<8G@daSqRM(*,<H!&6(Ay izr1@ '}1", ";eIa(x=zgh^M6Idko#Q{(PJ[o4=?cMzf08~].:J>\y^Fb;[Tt)P9j#(6Do^/(X!)fw#) r#c=ay7}1U|7<f2,V4L~", "-:Lb3H]2@-ebh&xw ^$qz3<=k#+FR5%k_-,?'$hQU_XIZeI_7c^HeG2Lwr>qYO.|gHiY`-S+f/^Yf6Eu(kB$8=UUi", ">B7Lv*#J:L(2P)'*lq@'I=MBEqg;\{N%#&|.0D4v0XGPrCOKr04/E'<md2xm?|Lq}6@w:#A2L2Sh7@nc+nJF_y">{", "M3%im&OhS h@O5'w|SvNcLt\GV[1MKd-9^ge7%`=aJPXSUET]/Dt* 3eW\vr&`(B0ShXO`NP|aR=H+g$'8~y-3jUi", "?~$UKs$(sIKDUl)k+"4([th`E_M1Lf{#.4>DHEhaK_:6Y_]_LwmXr2.s`>Bua`WoI1}y<(&$^zo9y_C>sx,#0Z4hh", "Tl{Y~F&lk$l`D"kquypM8NJUZ`w*{E;g(@:I<{wU\.\4AG\``%z8>N=-yitBT&M^2G?x<oE](c'wm5OxbecL^rQ*@", "[T0K!{H_m/,lPMdWmFGC/?$"g)|t8 <WC\1=;32e2KmYQ:6S|s0\w%k^cM:P,aY`0#<"@!Hw:(cQesO.,Z&2AufF", "WTCvdJtF8$.sA]M~Ix$n-}vV"+_#?}MNn~}v~Hhf[\?\G<gM*E"8Aib1v"aZcqNE+`OC*\NvG*c5hC3'g*{c>.07,", "VAPv]Zuy,3~W4~q-t=q9r:w3/Qz]kT`!)s9$rXS.@@LYknaXU46on\J?3^6mXFtDx`8Gl#>A!+9`DV,VS/)>]b6nH", "xqYg3hSyQR(OAL7g?wEjRG] JppD0U}/5v;h#[yw>aY]NafPVicx&m`/t}PQZU5qqscfKc+Qtm@*%V9gO=ahJ8Hhj", "46C{85e@L"9)IWC|>w;7H_z?)qhgMrr6nplWnYB17VG[yp3B5IWfrrPB)Rd65F4VyQw< pz?$=GuRu*;hMF!n<[,,", "Fua(wM%Q)Wf" "s2%e."CZhMk %zI\4Y^SekM6#RVB\WAphCv@92x[ +2uj>^58-KklQ_{G43Bh]TS_\Xk+dLD5y[", "MIN&v32DVa#D}NdI_EL&CZ{1yO]1QPBL]XNPS'2qEP=XK/AsM-I. *e|w";p3^i>J0wRl+8G4rmd8%4PWmefj}Z9^", "A,-oCn$H^b@D9v\`)*Bp&Z:1ZO,wg;O^GLC)kI'P=iNq_N]0I^}$uREbr5+!hf`%4%jpn+$-+?azgf1/P3(TWE1yf", "[Uu9l+`l x= fMmljiFUZEN.rXt-^h*4d.J.8baOIhdq[Ebnq\G?k~t&q1|]>3(5nBKKs&}l]CPwch\1y= _&,X3I", "aR%J3KLGAQ? - w;`{W`B\u%P8dysGltB,}5x*\K;\`B;h0`Sk,Yv$|!th}h<p;6+7n=&(&a;<eeJW657s7,t~vYH", "kKdZeh|$oSV=\wds*+dIFS0(tk&,9'"rEn*=.4_02oTZ^SXkg1Z7&)O#fp%Zx#WL"1W %vJqQ_p~khNB(H3{7`02'", "XKq_&60I4O,KD]1<'\/@~k/SmAi=wPi#QuFiD%ccgXK3@f/>@&4Pci'>Zy.+l-j%/,vM)Y'^p2b!OclxL.w'c!>R)"};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> A = {"OA_JM@~YPsz;dGi{8~8e8f%>"@bfq6o\QLqX#zj>!bFeW!b7%d", "^=V>Yy7JqgMr6dX<xOj\p2H^G0t06?1 +p8MQxh:o|15+JBVHs", "@4igj9l Q~ARd??"v)Iu+wOc?;29wo1*! ^P1u5Z232R.@:xyN", "qEu% o5|L#I9U@(`+0ZMt.Db\i?w0`@5L~di2yk$cSAbCa@Q#G", "Uzv\HC_.7wOYzr4^/'6Ng(f.h8C+\u8P8vh-f2VCXYZ3)7\glj", "YkY9|)ZEJ<mW@fDmxBfSN+d'[-[?>;D?AzZL^wn@UzFt[S\"D#", ")}6]\yzJ=pG&vpTa,":LO36Jrij1.h6mj#?~J/xodM0y"'7F'!", "n( <dbZre]l}N=5M8!`@7_0ino<bRV|'/Bx$sJT9gf'z\+Ptqp";
    vector<string> B = "0cFVb]7%ZB~fiW5{2Lya)V2@?gT>F.. k*uZT`"=d1C NWG=ls", ">YF9;*~Q'nhq8.[>_r|iN g']YN.b(s9s_LUQ7aa,8E5J]0E}b";
    int overlap = "]ll4o>@>f4vMK%+-Kg0^"sAaW*j;$So_v^3#w"{)[(~a0?oi=o", "J.8m2s$GG,AaPb8/UOJ#(2V;'j'HLz@Ud0w|pE?er[s,u.;AU}";
    Stitch* pObj = new Stitch();
    clock_t start = clock();
    vector<string> result = pObj->stitch(A, B, overlap);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OA_JM@~YPsz;dGi{8~8e8f%>"@bal9hZH@gT)h]S8S6rb[iG;s?VEVW[f}Kt>X4a.p<9o$BED%I:", "^=V>Yy7JqgMr6dX<xOj\p2H^G0t35<@(?fPJQtX=GkaK#4bcqs+U&? E:u=~.\4"coSIE!x0EaSX", "@4igj9l Q~ARd??"v)Iu+wOc?;2>we;894iLRxB=/]9:PZiLQ2WsB1VbPRmRy-0i|&H'o1Y}[:" ", "qEu% o5|L#I9U@(`+0ZMt.Db\i@s7aCAAuO[2]q%\>g9ktZ?/b/Lhh]p2$9$$/YQx`K_MR4` )!Q", "Uzv\HC_.7wOYzr4^/'6Ng(f.h8D-UhBS:`XBI,iG;e;Q+Y_sF:5VFf>'tFD2'q`%ml7`@eRdEOjt", "YkY9|)ZEJ<mW@fDmxBfSN+d'[-Z?><M;Ko\VTks6jaEdX;T"xf,;/);W;Z@8!{t1t;4u$D|1Sot%", ")}6]\yzJ=pG&vpTa,":LO36Jrih7.l7pV*7[ZLcWA?Nmcb?;@x)^>CTId_-3|QbjPOT~)|Ix#cMV", "n( <dbZre]l}N=5M8!`@7_0ino<_VVp+;Lu,h?T]c;E^cYYb&[e6k4c