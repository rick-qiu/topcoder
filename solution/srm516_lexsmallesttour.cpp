/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10837
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

class LexSmallestTour {
public:
    vector<int> determineTour(vector<string> roads, vector<int> queries);
};

vector<int> LexSmallestTour::determineTour(vector<string> roads, vector<int> queries) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<string> roads = {".A", "A."};
    vector<int> queries = {0, 1};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> roads = {".AB", "A.C", "BC."};
    vector<int> queries = {0, 1, 2, 3};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 0};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> roads = {".A..C", "A.ABB", ".A.C.", ".BC..", "CB..."};
    vector<int> queries = {0, 1, 2, 3, 4, 5, 6};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 3, 2, 1, 4, 0};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> roads = {".aa", "a.A", "aA."};
    vector<int> queries = {3, 2, 1};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 1};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> roads = {"..A.A", "...A.", "A...A", ".A...", "A.A.."};
    vector<int> queries = {1, 2};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> roads = {"..BA....BABBBBAABB..BAA.BB..AA.BAAABAABA", "..AAA..BBBB.BAAABA.BA.AA.AABABBBBBABAABB", "BA.BBBB.AAABBAABBABAABAAA.ABBBBBA.BBAAAA", "AAB..BAABBB.BBBBBAAABABBAABA.ABBAAAAAABB", ".AB..BABA.BBB.ABAB..AB.ABA.A.AAA.AB.BBBA", "..BBB.BAB.ABABBBABABAAABBA.ABAAA.BA.BAA.", "..BAAB.AB.A.AB.B..BBBBB.B..AAAAABBAABAA.", ".B.ABAA.ABA.BABBABAAB.B.AABBBBAABBA.A.BA", "BBABABBA.AAAA.BAA.A.ABBB..B.BAB.AB.B..A.", "ABAB...BA.AABBAB...ABA..BB..AABAABBBABA.", "BBABBAAAAA.AB.BBBABBBAB.ABBBAAAABA.ABABA", "B.B.BB..AAA.B.ABAAAAAABB.BBABBA..AAABBB.", "BBBBBAABABBB.BABBAAB.AAAA.ABAABA.ABBABAA", "BAAB.BBA.B..B.AAAB.ABBBAABA..BA.AABAAB.B", "AAABAB.BBABAAA.ABBBABBBAABAABABABBBAABAB", "AABBBBBBABBBBAA.ABABBABABAAAAABA.ABABBAA", "BBBBAA.AA.BABABA.ABBABABABB.ABA..BAAA..B", "BAAABB.B..AAABBBA..BBAAB.AA.BBBB.B.AAAA.", "..BA.ABAA.BAA.BAB..AABAAABBBABBAABABBB.B", ".BAA.BBA.ABABAABBBA.AB.A.ABABBAAAABBBABB", "BAABAABBABBA.BBBABAA..AAABB.BBABBAA..A..", "A.BABAB.BAAAABBABABB..AABABAAABB..BBBAAB", "AAAB.ABBB.BBABBBAAA.AA.B.AB.ABA.BBAAB.AB", ".AABAB..B..BAAAABBAAAAB.BB.BABAB.BB.AB.A", "B.AABBBA.BA.AAABA.A.AB.B..B.BBBAA..AB.BA", "BA.AAA.A.BBB.BBABABABAAB..A.ABAB.AAB.B.B", ".AAB...BB.BBAAAABABBBBB.BA.ABAAA.AABABAB", ".BBAAAAB..BAB.AA..BA.A.B..A.B.BBAABBBABA", "AAB..BABBAABA.BAABABBAAABABB.ABBB..BBAAA", "ABBAAAABAAABABAABBBBBABBBBA.A.BBABAAABBA", ".BBBAAAABBAABABBABBAABAABAABBB.BAABAAABB", "BBBBAAAA.AA.A.AA.BAABB.BABABBBB.BBBAA.A.", "ABAA..BBAAB..AB...AAB.B.A..ABAAB.BAABBBB", "AB.AABBBBBAAAABABBBAA.BB.AAA.BABB.BAAAB.", "AABABAAA.B.ABBBBA.ABABAB.AAB.ABBAB.BBABA", "BBBA..A.BBAABAAAAABB.BA.ABBBBAAAAAB.BBAB", "AAAABBBA.ABBAAABAABB.BBAB.ABBAAABABB.BBA", "AAAABAA..BABBBBB.ABAAA.B.BBAABA.BAABB..B", "BBABBAABAABBA.AA.A.B.AA.B.ABABBABBBAB..A", "ABABA..A..A.ABBAB.BB.BBAABBAAAB.B.ABABA."};
    vector<int> queries = {0, 1, 646, 645, 626, 312, 453, 547, 266, 284, 39, 28, 209, 168, 191, 526, 46, 66, 579, 525, 389, 123, 231, 45, 250, 487, 505, 184, 375, 263, 511, 87, 583, 334, 581, 90, 600, 578, 178, 11, 593, 261, 489, 189, 440, 147, 424, 224, 454, 229};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 0, 39, 37, 24, 8, 10, 11, 21, 2, 13, 2, 9, 26, 18, 17, 18, 26, 31, 25, 1, 5, 2, 21, 32, 12, 8, 12, 15, 22, 1, 37, 37, 30, 20, 35, 37, 26, 4, 31, 16, 35, 20, 31, 10, 36, 24, 38, 0};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> roads = {".ip.TQpI.Af..ehSC.kvwq.XWzFzrkPsdQmkEq.B", "i.TmBhXrYDz..FYFe.cjhW.DaOsOPAd.PuKpGRvo", "pT.zKkgkcBItJSRW.nSjPWJWbtXrUYkxhHddZiYd", ".mz.MJzznvnyHt.D.hMlGLvvNaxUkw.VEEy.UK..", "TBKM.IKYL.WfVGzO.W.F.cvCVd..ID.b.fmkm.px", "QhkJI.dKZei.ns.th.BQ.TxUVHoDLrO.dPRgqKXn", "pXgzKd.a.pdEFBZn..bLqIBuB.n.Wr..qcxNslpV", "IrkzYKa.ZSoJPXamcVuocn.Pc.iYXUjpZilUWZb.", ".YcnLZ.Z.h.hnod.VBbe..hY.ME.LD.Z...Sx.Ux", "ADBv.epSh.HZvBgwxiHjWVuylUxLGedvheQbFPJw", "fzInWido.H..xfKvRcsyUi.zRYGNF.riD.CYLqAN", "..tyf.EJhZ...zfP.vefKq..DtkvKYnac.dsAj..", "..JHVnFPnvx..pkbn.k.jQYb.wuPKS.pAreRvLGQ", "eFStGsBXoBfzp.ubQbvw.hPQTqZBPOEQbQFCNgQn", "hYR.z.ZadgKfku.wgVkHapiKuZ..JU..VyPyr.sE", "SFWDOtnm.wvPbbw.iAuVludXVZVtlqzOAGegcOaP", "Ce...h.cVxR.nQgi..tZI.QZmFNb.iepuRhnrt.F", "..nhW..VBicv.bVA..qCtm.rU.fT.D...pGCmt.o", "kcSM.BbubHsekvkutq.yrbgqchzRmy.Qj.mIlVJt", "vjjlFQLoejyf.wHVZCy.Xx.QNWcjlVjT.ht.Wdp.", "whPG..qc.WUKj.alItrX.qiuaHSgapwtIzjod.tw", "qWWLcTIn.ViqQhpu.mbxq..KYhzdhMrLwEqGdqIm", "..JvvxB.hu..YPidQ.g.i..X..JYyVMQ.RqKxKto", "XDWvCUuPYyz.bQKXZrqQuKX.nWfHHBRqUCbAsXmi", "WabNVVBc.lRD.TuVmUcNaY.n.ab.wFIxpl.kgNNP", "zOtadH..MUYtwqZZF.hWHh.Wa.z..fqTo.wVcbCB", "FsXx.oniExGkuZ.VNfzcSzJfbz.ryjnSTQKS.CVW", "zOrU.D.Y.LNvPB.tbTRjgdYH..r..iBb.wTo.fPj", "rPUkILWXLGFKKPJl..mlahyHw.y..onpJsirgB.G", "kAYwDrrUDe.YSOUqiDyVpMVBFfjio..JGxtpQal.", "Pdk..O.j.drn.E.ze..jwrMRIqnBn..BHjK..rwP", "s.xVb..pZviapQ.Op.QTtLQqxTSbpJB.GzNk.I.T", "dPhE.dqZ.hDcAbVAu.j.Iw.UpoT.JGHG.Sbwc.mz", "QuHEfPci.e..rQyGRp.hzERCl.QwsxjzS.nSNChx", "mKdymRxl.QCdeFPehGmtjqqb.wKTitKNbn.m.dky", "kpd.kgNUSbYsRCygnCI.oGKAkVSorp.kwSm.RqwA", "EGZUmqsWxFLAvNrcrmlWddxsgc..gQ..cN.R.dmi", "qRiK.KlZ.PqjLg.OttVd.qKXNbCfBarI.Cdqd.cg", ".vY.pXpbUJA.GQsa..JptItmNCVP.lw.mhkwmc.R", "Bod.xnV.xwN.QnEPFot.wmoiPBWjG.PTzxyAigR."};
    vector<int> queries = {0, 1, 665, 664, 111, 142, 313, 60, 283, 190, 47, 115, 493, 390, 162, 411, 439, 598, 180, 212, 196, 120, 617, 603, 456, 343, 593, 547, 537, 282, 10, 511, 599, 506, 469, 400, 412, 135, 601, 187, 173, 454, 121, 409, 95, 648, 346, 167, 406, 46};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 0, 39, 2, 18, 29, 7, 15, 19, 1, 2, 13, 35, 10, 6, 15, 36, 21, 19, 23, 23, 28, 23, 24, 21, 30, 32, 39, 20, 5, 22, 22, 33, 20, 32, 39, 4, 21, 6, 11, 26, 3, 7, 4, 36, 20, 8, 35, 25};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> roads = {".wX", "w.V", "XV."};
    vector<int> queries = {0, 1, 3, 2};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 0, 2};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> roads = {".zmyYMV", "z.etalY", "me.CLUI", "ytC.MsL", "YaLM.wo", "MlUsw.i", "VYILoi."};
    vector<int> queries = {0, 1, 21, 20, 17, 11, 10, 13, 2, 9, 19, 8, 12, 15, 3, 5, 16, 6, 7, 4, 14, 18};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 0, 6, 6, 2, 6, 4, 2, 1, 5, 5, 3, 5, 0, 1, 3, 4, 0, 3, 2, 4};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> roads = {".doydQ.HjJriEsaJelfF", "d.pdQwwTCRMyz.jippkM", "op.Sp..muVeIyamOgaX.", "ydS.TeZN.uyzWOzr.TO.", "dQpT.WVPMwIIVvlLhS.W", "Qw.eW..GaGPgOQb.zXFb", ".w.ZV..xAi.iXRvjZNc.", "HTmNPGx.DArcaLkXJHK.", "jCu.MaAD.U..HVgBGSQh", "JRVuwGiAU.IVIQJlEWF.", "rMeyIP.r.I...mbfMdb.", "iyIzIgic.V..L.TVZsZX", "EzyWVOXaHI.L.o..Rktt", "s.aOvQRLVQm.o.ia.y..", "ajmzlbvkgJbT.i...Evn", "JiOrL.jXBlfV.a..jzPZ", "epg.hzZJGEMZR..j.bav", "lpaTSXNHSWdskyEzb..V", "fkXO.FcKQFbZt.vPa..D", "FM..Wb..h..Xt.nZvVD."};
    vector<int> queries = {0, 1, 161, 160, 69, 128, 43, 30, 118, 77, 148, 29, 36, 155, 156, 32, 18, 28, 96, 144, 140, 84, 149, 37, 76, 132, 13, 101, 48, 38, 107, 46, 68, 71, 89, 26, 20, 15, 42, 22, 21, 55, 5, 92, 47, 105, 85, 74, 9, 81};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 0, 19, 11, 10, 3, 10, 6, 16, 11, 0, 11, 18, 15, 9, 3, 9, 9, 13, 12, 7, 19, 0, 2, 16, 1, 14, 15, 12, 18, 14, 5, 13, 12, 7, 4, 3, 12, 7, 6, 1, 1, 7, 1, 17, 8, 3, 1, 13};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> roads = {".AABBBBBBABBAAAABBABBAABABBAAAABABAABAA", "A.ABAAAABBAAB.ABAABB.BBABBBBAB.BA.BBAAA", "AA.BAAAB.ABBABBAABAA.ABBBBBBBAABBBAAAAB", "BBB.BBAAABAABABABBAAABAAABBABBAAABBBAAB", "BAAB.BABABAAABAABBBBBAA.ABBAB..BB.BAAAA", "BAABB.BAAAAABBBBBAAABABAABBBBAB.BA.AABA", "BAAAAB..BBAAAABBAABBA.A.ABBBBB.BBAABABA", "BABABA..BBBABAABAAAAABB.BAABAABBABBBBAA", "BB.AAABB.BAAAAAABB.BBBAAABBB.AAABBBAB.A", "ABABBABBB.AAAA.AAA.BBBBBBABAAABBAB.A.BA", "BABAAAABAA.BBAAABBABAAABBABBBBBAABBBABA", "BABAAAAAAAB.BBBB.ABAABBBBAABAAB.ABBBBAA", "ABABABABAABB.BABAABABB.ABAAAA.BBBABABBA", "A.BABBAAAAABB.BABBABAABBAAABB.BABAAABBB", "AABBABBAA.ABAB.BAABAA..BAA.BABBAABBABBB", "ABAAABBBAAABBAB.BABBBAA.AAAAABBABBA.BBB", "BAABBBAABAB.ABAB.BAABBBBBBAAA.BAAABBAAA", "BABBBAAABABAABAAB.BBABB..ABABBABAABAABA", "ABAABABA..ABBABBAB.BABAABBAABB.BBBA.AAA", "BBAABABABBBAABABABB..BABA.AAAAAABAABBBB", "B..ABBAABBAABAABBAA..AAAAABBBB.BBAAABBB", "ABABAA.BBBABBA.ABBBBA.B.BB.AABABABAAAAA", "ABBAABABABAB.B.ABBAAAB.BBAABAB.ABBA.AAB", "BABA.A..ABBBABB.B.ABA.B.AA.AB.AABAABBBA", "ABBAAAABABBBBAAAB.BAABBA.BABBAA.ABABBAB", "BBBBBBBABAAAAAAABAB.ABAAB.A.BBB.AA.AABB", "BBBBBBBABBBAAA.AABAAB.A.AA.AAABABA.ABBB", "ABBAABBBBABBABBAAAAABABAB.A.BBBAAAB.AAB", "AABBBBBA.ABAABAAABBABAABBBAB.AAABABB.AB", "ABAB.ABAAABA..BB.BBABBB.ABABA.AAB.ABAAB", "A.AA.B.BABBBBBBBBA.A.A.AABBBAA.BAA.ABA.", "BBBAB.BBABA.BAAAABBABBAA..AAAAB.BAABBBA", "AABABBBABAAABBABAABBBABBAABABBAB.AABABA", "B.BB.AABBBBBAABBAABAABBABAAAA.AAA.BBA.B", "ABABB.ABB.BBBABABBAAAAAAA..BBA.AAB.BBA.", "ABABAABBAABBAAA.BA.BAA.BBAA.BBABBBB.AAB", "BAAAAAABB.ABBBBBAAABBAABBABA.ABBAABA.BB", "AAAAABBA.BBABBBBABABBAABABBAAAABB.AAB.B", "AABBAAAAAAAAABBBAAABBABABBBBBB.AAB.BBB."};
    vector<int> queries = {0, 1, 681, 680, 163, 371, 102, 445, 549, 536, 331, 186, 679, 58, 289, 430, 213, 53, 232, 438, 133, 309, 488, 512, 60, 402, 379, 337, 74, 357, 499, 190, 500, 529, 348, 79, 601, 298, 600, 327, 516, 368, 467, 606, 637, 553, 429, 303, 215, 253};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 0, 38, 11, 20, 9, 33, 34, 36, 32, 26, 37, 19, 1, 8, 14, 6, 22, 2, 3, 20, 29, 27, 17, 21, 36, 34, 9, 31, 14, 27, 36, 17, 3, 4, 31, 32, 28, 28, 36, 27, 16, 26, 29, 37, 32, 24, 10, 8};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> roads = {"..BB..B.B.AA..AA...A.......BABA.AB...B.", "..AB.....BA.A.....AAAB.B.BAAB...B.....B", "BA...AA.A..B....BB.B..BB..A.A.AB.A.BAAB", "BB......AA.B.BBAAAB...B.B...A....A.A.BA", ".....B.A..B.A.AAB.BBBA.BBB.....AA..A.A.", "..A.B..A.AB..AA...A..A....BA...BBB...BB", "B.A......A.B...AABAB.......BAA.BBB...A.", "....AA..A.A...B...ABB..B...BA.B.B..BAA.", "B.AA...A..BB...A.BB.A...BA.B.BB..AA...A", ".B.A.AA......BB....B..A..AABB..BABA....", "AA..BB.AB...BAB.BA...A..ABBAABABBAB.ABA", "A.BB..B.B.......AA.AB..B.AB.BA..A....A.", ".A..A.....B...........BAA..B...B..BA.AB", "...B.A...BA...B.A.....AB.....A..BBA.AB.", "A..BAA.B.BB..B....AAAB...A.....AA.ABBBB", "A..AA.A.A.........BBBB..B.AB...A..B..BA", "..BAB.A...BA.A...A.B..........B.BA.ABAB", "..BA..B.B.AA....A..AAB...B.AB.BAA.B.BAB", ".A.BBAAAB.....AB....ABBA..BABBA.AABABB.", "AAB.B.BB.B.A..ABBA....A.A..A.ABBBBAAAB.", ".A..B..BA..B..AB.AA....ABA..B..AB....B.", ".B..AA....A...BB.BB...BA..A.B.BAB.A..AA", "..BB.....A..BA....BA.B.AB.AAA.BBAA.B.BA", ".BB.B..B...BAB....A.AAA..ABBBABA.B.A.AA", "...BB...B.A.A..B...AB.B..B.AA.ABA.A..BA", ".B..B...AABA..A..B..A..AB.B.A..A.B.B...", ".AA..B...ABB...A..B..AAB.B..BAA..BB..A.", "BA...ABBBBA.B..B.AAA..ABA......BA.B.ABA", "ABAA..AA.BAB.....BB.BBABAAB...A..A..BB.", "B.....A.B.BA.A....BA...A..A...A.B.B...B", "A.A....BB.A.....BBAB.BBBA.A.AA.A.BBBAA.", "..B.ABB..BB.B.AA.A.BAABABA.B..A..AA.BAB", "AB..ABBB.ABA.BA.BAABBBA.A..A.B......BAA", "B.AA.BB.ABA..B..A.AB..AB.BB.A.BA.....A.", "........AAB.BAAB.BBA.A..A.BB.BBA.....A.", "..BAA..B....A.B.A.AA..BA.B....B.......B", "..A....A..A..AB.BBBA.......AB.ABB....BA", "B.ABABAA..BAABBBAABBBABAB.ABB.AAAAA.B.B", ".BBA.B..A.A.B.BABB...AAAA..A.B.BA..BAB."};
    vector<int> queries = {0, 1, 368, 367, 270, 91, 36, 69, 73, 137, 133, 254, 212, 363, 264, 186, 225, 72, 169, 230, 74, 306, 364, 34, 343, 142, 30, 5, 360, 24, 189, 245, 333, 151, 177, 222, 262, 141, 70, 301, 289, 330, 331, 287, 124, 176, 103, 155, 288, 366};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 0, 30, 12, 17, 7, 6, 18, 27, 38, 23, 10, 36, 16, 15, 32, 4, 32, 24, 5, 17, 38, 4, 16, 17, 0, 0, 38, 16, 26, 10, 38, 15, 24, 19, 13, 19, 9, 33, 23, 35, 30, 30, 7, 4, 6, 31, 28, 34};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> roads = {"...A............A.B.......B.........AB.", ".....A..BAAB...B................B..ABA.", "...BA.A..A....B...A......A...B..B....B.", "A.B...A...B............B..B..A..AA...B.", "..A.................................B..", ".A....A.B............B....A..BB......A.", "..AA.A..B........B....B.....B.........A", "..........A............A.......B.....B.", ".B...BB.......A.B.A........A....AAB....", ".AA.......B..................B...A..B..", ".A.B...A.B..........B........A.........", ".B.....................A...............", ".................BA....A.....BA......B.", ".................A.B.........B..A......", "..B.....A..........................A..B", ".B.....................BAB...........AA", "A.......B...............B...........A..", "......B.....BA.........A..........B.A..", "B.A.....A...A...................BBB..A.", ".............B...............A....A..B.", "..........B.................A..A.B.....", ".....B.......................A.......AB", "......B.............................A..", "...B...A...AA..B.A......B.A......BB.BA.", "...............AB......B.......AAB.....", "..A............B.......................", "B..B.A.................A...............", "........A..........................B...", "......B.............A..................", "..BA.B...BA.BB.....A.A............A....", ".....B......A..........................", ".......B............A...A.........AB..B", ".BBA....A....A....B.....A.........B....", "...A....AA........B.B..BB.............A", "........B........BBA...B.....A.AB....AA", ".A............A............B...B.......", "AB..B....B......AA....AB...............", "BABB.A.B....B..A..AB.A.A..........A...B", "......A.......BA.....B.........B.AA..B."};
    vector<int> queries = {0, 1, 120, 119, 59, 17, 69, 4, 66, 107, 46, 97, 74, 102, 62, 11, 106, 70, 22, 39, 94, 76, 25, 93, 73, 6, 16, 57, 2, 114, 47, 35, 42, 56, 71, 29, 87, 26, 115, 10, 9, 48, 5, 54, 37, 105, 83, 3, 24, 99};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3, 0, 37, 33, 1, 38, 36, 2, 31, 10, 38, 23, 34, 17, 5, 34, 14, 8, 29, 20, 37, 1, 33, 24, 18, 10, 36, 2, 38, 7, 6, 22, 16, 35, 0, 5, 15, 34, 1, 8, 31, 0, 32, 13, 18, 23, 4, 35, 37};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> roads = {"...........................AA..........", "....A.......A.......A....B.........BB..", ".......................................", ".........AAB................A.B.B......", ".A.........A..B..BB....A...............", ".......A.B..........B..A........BB...AA", ".......................................", ".....A....A...B...B.BA..A..B...........", "..................A........A...BB......", "...A.B..............A............B.....", "...A...A.....BA......A.BBB.A..........B", "...BA...........A...B.ABA...B..........", ".A................BA......B.....A.....B", "..........B....A.......................", "....B..B..A.......A..BB......A..A......", ".............A....A.........B.......B..", "...........A......B.............B.....A", "....B..........................A.......", "....B..BA...B.AAB.........A............", "............A..........B...............", ".A...B.B.A.B.....................A.....", ".......A..A...B.................B......", "...........A..B........................", "....AA....BB.......B.............A.....", ".......A..BA...............B........A.B", ".B........B.....................A.A....", "............B.....A....................", "A......BA.A.............B.......ABB....", "A..A.......B...B.......................", "..............A......................B.", "...B..................................A", "........B........A.....................", "...B.B..B...A.A.B....B...A.A.......A...", ".....B...B..........A..A...B........A..", ".........................A.B...........", ".B..............................A......", ".B.............B........A........A.....", ".....A.......................B.........", ".....A....B.B...A.......B.....A........"};
    vector<int> queries = {0, 1, 89, 88, 84, 80, 79, 74, 56, 26, 52, 13, 5, 8, 37, 29, 75, 67, 20, 6, 54, 17, 21, 76, 59, 34, 31, 82, 51, 27, 81, 64, 18, 48, 57, 50, 19, 47, 43, 12, 25, 87, 42, 41, 66, 83, 30, 40, 58, 55};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 27, 0, 28, 16, 25, 10, 22, 18, 25, 8, 3, 3, 14, 16, 23, 11, 33, 18, 11, 24, 3, 8, 20, 1, 4, 7, 27, 32, 32, 34, 12, 32, 20, 26, 35, 12, 5, 21, 28, 1, 11, 10, 24, 23, 32, 10, 36, 12, 7};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> roads = {".BBAAAAABBBABBBABBBBABBAAABAAAABAAABABA", "B.AABBBBBBBABABAAAABBBBBAAAABAAABABABAA", "BA.BBBAABABBBBBBBABABABAAABAAAAABAAABBA", "AAB.BBABBBBAAAABABABAAAABBABBBAAABBABAB", "ABBB.BABBAABABBAABAABABBAAAA.BA.BAABBBA", "ABBBB.BAABABAAABAABBAAAABBBBABBABABBAAA", "ABAAAB.AAABAABBBBBABBBABBAABBBBABAAAAAB", "ABABBAA.BAAAAABAAABAAABABBBABBBBABBABBB", "BBBBBAAB.ABAABBAABAAAAAABBBBBBBABABAAAA", "BBABABAAA.ABBBAABBBBABBAABBABAABAAABAAB", "BBBBAABABA.ABAABABABBABAABAABAABBBABBAA", "AABABBAAABA.ABABBABABAABBBBBABBABAAABBA", "BBBAAAAAABBA.BBAABAABBBBABAABABAABBBABA", "BABABABABBABB.BABABBAABABAABAABAABBAAAB", "BBBABABBBAAABB.AAABABBAAAABABABAABBABAB", "AABBABBAAABBAAA.ABAABBBBABABBAABBBABAAB", "BABAAABAABABABAA.ABBAABBBBBABBABBAAABBA", "BAABBABABBBABAABA.BBABABBABB.AAABAA.AAB", "BABAABABABABABBABB.ABAABBAABABBAABAABAB", "BBABABBAABBAABAABBA.ABABBBAAABAABBBAABA", "ABBABABAAABBBABBAABA.BABABAAAABBBBABBAA", "BBAAAABAABAABABBABABB.BABBABAABBABBBAAA", "BBBABAABABBABBABBAAAAB.BAAAAAAABABBBABB", "ABAABABAAAABBAABBBBBBAB.BABBAAAAABBBABA", "AAABABBBBAABABAABBBBABAB.ABABAABBABAABA", "AAABABABBBBBBAABBAABBBAAA.BBABAAABABABA", "BABAABABBBABAABABBAAAAABBB.AABABBABBBAA", "AAABABBABAABABABABBAABABABA.BBBAABB.B.A", "ABAB.ABBBBBABABBB.AAAAAABAAB.ABBAABAABB", "AAABBBBBBAABAAAABABBAAAAABBBA.ABBABBABB", "AAAAABBBBAABBBBAAABABBAAAAABBA.BABABBBB", "BAAA.AABABBAAAABBAAABBBABABABBB.ABA.BBB", "ABBABBBABABBAAABBBABBAAABABAABAA.AABBAB", "AAABAAABAABABBBBAABBBBBBABABAABBA.AAABB", "ABABABABBAAABBBAAAABABBBBABBBBAAAA.ABAB", "BAAABBAAABBABAABA.AABBBBABB.ABB.BAA.B.A", "ABBBBAABAABBAABABABABAAAAABBAABBBABB.AB", "BABABAABAAABBAAABAABAABBBBA.BBBBABA.A.B", "AAABAABBABAAABBBABBAAABAAAAABBBBBBBABB."};
    vector<int> queries = {0, 1, 733, 732, 428, 708, 149, 184, 136, 373, 477, 393, 368, 190, 242, 328, 4, 255, 527, 111, 165, 197, 722, 327, 437, 131, 583, 17, 481, 474, 660, 311, 125, 407, 191, 344, 446, 273, 582, 586, 612, 453, 590, 567, 404, 502, 537, 415, 635, 371};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3, 0, 38, 18, 38, 31, 3, 9, 38, 25, 24, 12, 7, 9, 8, 0, 31, 33, 21, 11, 5, 27, 14, 16, 18, 22, 7, 24, 20, 25, 14, 8, 29, 12, 11, 8, 11, 28, 9, 14, 33, 22, 22, 8, 13, 31, 36, 35, 22};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> roads = {"........B.....BABAA...B...AAB......AB..", ".....BA....A.BB..B...A.A.ABAA.A.B...B.B", "...BAAABB.B..ABA......A.BBAAB...B....A.", "..B......B.ABBBBAA....A..BAA.B...AA.B.A", "..A..B..A.A.BA...A...BBBA.BA.A.....B.B.", ".BA.B..AA..B.BAAAB.A.AABA...B.BABB..B..", ".AA.....AB.AB.ABB...BA.BB.ABB...BA..A.A", "..B..A.........BAA.B.A..ABBB.B.A...BA.A", "B.B.AAA...A.BABAAB..B..AAA.BB.B.BA..B..", "...B..B....BA.A.A.BBAB...AAB.AA.B.BA...", "..B.A...A...BBABAA.AABA.ABB.ABB.AB....B", ".A.A.BA..B..A..B.A......A.BB.........B.", "...BB.B.BABA.AABBABA.BA.AA..AAA..B.B..B", ".BABAB..A.B.A..A.......A.BBAABBBA...BA.", "BBBB.AA.BAA.A....B.....ABBAABABA.......", "A.AB.ABBA.BBBA..BAAA..B.B.ABBA..A...A.B", "B..A.ABAAAA.B..B.A....A.BBBB.B.A.......", "AB.AAB.AB.AAA.BAA.B.BBB..ABBA..B...AB..", "A........B..B..A.B.A.....A....B........", ".....A.B.BA.A..A..A.......BBBAB....B..A", "......B.BAA......B....B....BABA.A...A..", ".A..BAAA.BB.B....B.........ABAA.A.BB...", "B.AABA....A.A..BAB..B..ABBABABBB...A.A.", ".A..BBB.A....AA.......A...ABBA.B......B", "..B.AABAA.AAA.BBB.....B..BBAA..BA..BAB.", ".ABB...BAAB.ABB.BAA...B.B..AABAAAB.BABA", "ABAAB.AB.ABB.BAABB.B..AAB..B......A.A..", "AAAAA.BBBB.B.AABBB.BBABBAAB.AA.A.B.A.BA", "BAB..BB.B.A.AABB.A.BABABAA.A.B.......A.", "...BA..B.AB.ABAAB..ABABA.B.AB.AB.A....B", ".A...B..BAB.ABB...BBAAB..A...A.A...B.A.", ".....A.A.....BA.AB....BBBA.A.BA.BB.AAB.", ".BB..BB.BBA..A.A....AA..AA.....B..BA...", "...A.BA.A.B.B............B.B.A.B...AA..", "...A.....B...........B....A.....B..A...", "A...B..B.A..B....A.B.BA.BB.A..BAAAA.B..", "BB.B.BAAB....B.A.B..A...AAA....A.A.B..B", "..A.B......B.A........A.BB.BA.AB......A", ".B.A..AA..B.B..B...A...B.A.A.B......BA."};
    vector<int> queries = {0, 1, 352, 351, 260, 304, 28, 25, 239, 272, 98, 77, 305, 274, 57, 225, 348, 21, 113, 3, 269, 90, 340, 96, 211, 179, 162, 140, 104, 299, 131, 216, 262, 296, 254, 283, 73, 286, 64, 129, 137, 249, 182, 255, 142, 150, 290, 20, 6, 192};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 8, 0, 35, 28, 29, 6, 5, 16, 24, 8, 32, 28, 23, 6, 27, 37, 9, 28, 5, 38, 10, 22, 5, 11, 24, 15, 3, 13, 10, 15, 6, 12, 35, 24, 27, 22, 31, 2, 36, 30, 36, 12, 25, 12, 13, 25, 6, 11, 20};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> roads = {".BB..BB..AA.B.B..AA...A..A...BA....A.A.", "B...A..B.B.AABB.....A.AA....B..A...B...", "B....A.....B....BB.A....A.....BAA......", ".............AAB...A........B.........B", ".A.......A.B.A...B..B.B...A..B....A....", "B.A...........B.A..A..A.A..........BBB.", "B........A....A...A........B.........B.", ".B.......B.......A..A.A...B..A.....B...", "...................B..A........A.....B.", "AB..A.AB.....AB...B...B.AA....AB..B....", "A..................BB.....A....A...B...", ".AB.B.............A.A.....BBA.AB...B.A.", "BA...........B......B.A...............A", ".B.AA....A..B.A.........B...B......B..A", "BB.A.BA..B...A....A...B.......B....A.A.", "...B.............A.A..........B....A..B", "..B..A..................B...A.....A...B", "A.B.B..A.......A........B..............", "A.....A..B.A..A......B...B...B.........", "..AA.A..B.B....A......BB.......AB.A.B..", ".A..B..A..BAB..........................", "..................B....A...............", "AA..BA.AAB..A.B....B...A..B..BBBA......", ".A.................B.AA.......BB..BBA.A", "..A..A...A...B..BB.......B..A..B.B...AA", "A........A........B.....B...B.A..A...B.", "....A..B..AB..........B....A...........", "......B....B..............A........A...", ".B.B.......A.B..A.......AB...A..B.BA.A.", "B...B..A..........B...B.....A..A..A....", "A.B......A.A..BB......BB.A.........A...", ".AA.....ABAB.......A..BBB....A....B....", "..A................B..A.....B..........", "........................BA.............", "....A....B......A..A...B....BA.B.......", "AB...B.B..BB.BAA.......B...AA.A.....A..", ".....B.............B...A...........A...", "A....BB.B..A..A.........AB..A.........B", "...B........AA.BB......AA............B."};
    vector<int> queries = {0, 1, 169, 168, 13, 93, 62, 40, 77, 141, 138, 112, 143, 101, 87, 164, 22, 159, 11, 92, 28, 156, 155, 53, 106, 39, 23, 5, 75, 99, 122, 4, 96, 125, 120, 127, 85, 50, 74, 88, 111, 136, 134, 124, 130, 21, 94, 33, 6, 35};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 9, 0, 35, 5, 14, 27, 15, 38, 31, 8, 30, 37, 30, 31, 19, 0, 30, 17, 35, 4, 38, 37, 6, 36, 3, 22, 1, 13, 31, 29, 11, 24, 5, 14, 11, 16, 0, 9, 9, 15, 14, 32, 22, 38, 12, 9, 26, 0, 18};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> roads = {"..........B.......A.A..B...............", ".........A.......B.....................", "............B.....A....................", ".......................................", "......................BA...............", ".........B..A.....A.....B..............", ".......................................", ".......................................", ".......................................", ".A...B................A.....B..........", "B................A..B...A..............", ".......................................", "..B..A.................................", ".......................................", ".......................................", ".......................................", ".......................................", ".B........A............................", "A.A..A..............B..B.............B.", ".......................................", "A.........B.......B......A.............", ".......................................", "....B....A.............................", "B...A.............B.........A..........", ".....B....A............................", "....................A.....B............", ".........................B...........A.", ".......................................", ".........B.............A...............", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", "..................B.......A............", "......................................."};
    vector<int> queries = {0, 1, 26, 25, 9, 5, 8, 15, 17, 18, 22, 13, 16, 11, 20, 19, 14, 4, 3, 21, 12, 24, 6, 23, 7, 10, 2};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 10, 0, 18, 20, 5, 18, 28, 18, 5, 25, 22, 23, 23, 10, 24, 9, 9, 1, 20, 4, 37, 12, 26, 2, 0, 17};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> roads = {".zCBAzCzCAzCzCzzzzAzzAzAzzzzAAzAzCzzABC", "z.CBzzCAzzzAA.CAABzzAAzzCBzzC.zzAzzzCCz", "CC.AzAzzzBzzACBCCCzzCzCBzzzzCzzBBzzzCzB", "BBA.zzBzBzBCzzzCzCCzCBzCzzzCzBBzzzBzCCz", "Azzz.CzzC.zzAB.BAz.zAzCzCBz.CBzzCzzAAzB", "zzAzC.zBzCzzAzBACzzBzCzCzAACzBBzzzAzzAA", "CCzBzz.zABzzzCzzzzCAAAzzzAAACzBzzzBCzBA", "zAzzzBz.CzCA.zzAzAAzAzBCzzAzzAz.ABzBBAz", "CzzBCzAC.zzzzzzzzCz.zACCzCCzz.BCCCBBCzz", "AzBz.CBzz.CzAzzzzBACzzzAABCCCzCzCzzAz.z", "zzzBzzzCzC.AAzzACzACBBABAzBzzzzzAzBzzCB", "CAzCzzzAzzA.AzzCAzzCCBzAzzzzBzBAzBCCAzz", "zAAzAAz.zAAA.Bzz.AzAzBABzCzzzAzBBzzzAzz", "C.CzBzCzzzzzB.zCzzBzzCzzzzBBAzCACBzBA.A", "zCBz.Bzzzzzzzz.CAzzBBzAzCzAzACC.zACBBBz", "zACCBAzAzzACzCC.zzz.zABzCz.zAzzzCCAAzzz", "zACzACzzzzCA.zAz.z.zAzACBzAACAzAzBzzzzC", "zBCCzzzACBzzAzzzz.zACzzzzBzABzCBBzzACBA", "AzzC.zCAzAAzzBzz.z.zzCCAz.BzzBBBzCA.zzC", "zzzzzBAz.CCCAzB.zAz.zzzzzCzCBzABzBAzCBC", "zACCAzAAzzBCzzBzACzz.zCzBzCzCAzzzAzzABz", "AAzBzCAzAzBBBCzAzzCzz.zzBzBzACBCBzzzzzz", "zzCzCzzBCzAzAzABAzCzCz.zzB.Bz.zAB.z.zCB", "AzBCzCzCCABABzzzCzAzzzz.BzCBzzzzzBCzAAz", "zCzzCzzzzAAzzzCCBzzzBBzB.BCzCzzBABBzzCA", "zBzzBAAzCBzzCzzzzB.CzzBzB.zAC.zzCBCCBzz", "zzzzzAAACCBzzBA.AzBzCB.CCz.zz.Azzzz.AzB", "zzzC.CAzzCzzzBzzAAzCzzBBzAz.zCBAABB.zzA", "ACCzCzCzzCzBzAAACBzBCAzzCCzz.zAzzzAzzzz", "A.zBBBzA.zzzAzCzAzBzAC.zz..Cz.CzA.BAzzz", "zzzBzBBzBCzBzCCzzCBAzBzzzzABAC.CzzzBzBz", "AzBzzzz.CzzABA.zABBBzCAzBzzAzzC.zzzAzAC", "zABzCzzACCAzBCzCzBzzzBBzACzAzAzz.zBCzzz", "CzzzzzzBCzzBzBACBzCBAz.BBBzBz.zzz.zCzBC", "zzzBzABzBzBCzzCAzzAAzzzCBCzBABzzBz.CzzA", "zzzzAzCBBAzCzBBAzA.zzz.zzC..zABACCC.zzz", "ACCCAzzBCzzAAABzzCzCAzzAzBAzzzzzzzzz.AC", "BCzCzABAz.Czz.BzzBzBBzCACzzzzzBAzBzzA.z", "CzBzBAAzzzBzzAzzCACCzzBzAzBAzzzCzCAzCz."};
    vector<int> queries = {0, 1, 713, 712, 276, 682, 2, 383, 236, 45, 569, 402, 627, 449, 439, 620, 546, 257, 131, 452, 3, 493, 273, 241, 473, 422, 388, 145, 330, 322, 74, 11, 703, 425, 39, 585, 582, 212, 549, 138, 250, 143, 249, 282, 701, 186, 251, 95, 79, 319};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 0, 35, 28, 37, 2, 10, 18, 5, 13, 36, 37, 16, 8, 30, 38, 13, 17, 22, 4, 32, 5, 27, 34, 35, 35, 6, 20, 25, 13, 4, 38, 8, 10, 18, 18, 20, 22, 3, 20, 5, 16, 20, 33, 2, 18, 2, 5, 10};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> roads = {".C..zC..A...zACz.z.C...zzAzC...z.z..CzC", "C.z.....zz.........C......B..zC..A...z.", ".z.CC.......Bz.z...z.....CB.z..A......z", "..C...z..Cz.ACz...z...z........A....z.C", "z.C..Cz.z.C..zCz..C..Az..Cz...B....zAz.", "C...C.zzCz.zzzBz.....A..B...z.z.B..B.B.", "...zzz...zAC..z..B.z....A..A..AB....z..", ".....z...........B....z...............A", "Az..zC.....zzAz....z..A.....B.A..z.A...", ".z.C.zz...z..Az........CC.....z....C.C.", "...zC.A..z.....A.C.......A..zzz........", ".....zC.z...C.B.Cz....B..zCzz........Az", "z.BA.z..z..C..B....A.....zAz...z...z..C", "A.zCzz..AA.......z..C.z...z..z.z..C..BB", "C..zCBz.zz.BB......A..C.zz..........zzA", "z.z.zz....A......A...z......A.zCAzB...B", "...........C...........z.z..B...z.C....", "z.....BB..Cz.z.A......................z", "...zC..................z....CzB...B..z.", "CCz...z.z...A.A............z.B.z.Cz.zC.", ".............C.......zz.A.....z......B.", "....AA.........z....z.z..............B.", "...zz..zA..B.zC.....zz.zCB.BC.B..z..Cz.", "z........C......z.z...z........A...B.B.", "z....BA..C....z.....A.C..z...z....z....", "A.C.C.....Azz.z.z.....B.z....A.z.Bz..Cz", "zBB.z......CAz.................Cz..zA.z", "C.....A....zz......z..B........z...C...", "..z..z..B.zz...AB.C...C......Bzzz...A..", ".z........z..z....zB....zA..B..CC......", ".C..BzA.Azz....z..B.z.B.....z......Az..", "z.AA..B.....zz.C...z...A.zCzzC...B....z", ".....B.........Az.........z.zC.........", "zA......z......z...C..z..B.....B..Az...", ".............C.BC.Bz....zz.......A.z..z", "....zB..AC..z..........B..zC..A..zz..z.", "C..zA.z.......z....z..C...A.A.z......zC", "zz..zB...C.A.Bz...zCBBzB.C.........zz.z", "C.zC...A...zCBAB.z.......zz....z..z.Cz."};
    vector<int> queries = {0, 1, 238, 237, 11, 236, 49, 145, 103, 132, 13, 42, 118, 194, 4, 143, 69, 104, 83, 125, 204, 108, 80, 130, 235, 5, 47, 165, 176, 105, 171, 82, 48, 207, 126, 59, 16, 122, 41, 205, 168, 77, 38, 191, 3, 152, 215, 32, 23, 216};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 0, 33, 4, 34, 13, 5, 21, 2, 5, 0, 12, 30, 6, 4, 25, 20, 2, 0, 24, 25, 9, 0, 38, 10, 12, 33, 20, 13, 22, 25, 8, 37, 15, 21, 5, 19, 24, 22, 33, 14, 4, 35, 3, 23, 22, 5, 26, 33};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> roads = {".....B..........C.........z.....z......", ".....A......z..........................", "................Cz...............z....B", "........................zA.............", ".......................................", "BA.............C..zz..z.....z...C......", ".......................................", ".............................z.......A.", "...........z.......C...................", ".......................................", "...........B....z.............z..A.....", "........z.B.B.....................z....", ".z.........B..........B.....z..........", "...................z...C...............", ".......................C.............z.", ".....C.............z...................", "C.C.......z........B...z........z......", "..z...................................C", ".....z...............................A.", ".....z..C....z.zB.....C................", "..................................B.z..", "...............................z.A.....", ".....z......B......C...z...............", ".............CC.z.....z................", "...z................................C..", "...A.................................z.", "z............................A.........", ".......................................", ".....z......z...................BB...Cz", ".......z..................A............", "..........z...........................A", ".....................z.............B...", "z....C..........z...........B..........", "..z.......A..........A......B........zz", "...........z........B..................", "...............................B......z", "....................z...C..............", ".......A......z...A......z..C....z.....", "..B..............C..........z.A..z.z..."};
    vector<int> queries = {0, 1, 58, 57, 8, 13, 55, 3, 45, 6, 2, 47, 28, 29, 30, 7, 12, 5, 51, 4, 22, 24, 54, 15, 25, 42, 50, 17, 33, 49, 18, 38, 10, 14, 36, 32, 19, 27, 35, 21, 9, 16, 52, 34, 20, 23, 46, 31, 26, 41};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 5, 0, 32, 26, 3, 22, 37, 38, 16, 18, 31, 5, 1, 12, 0, 25, 23, 28, 14, 17, 28, 19, 36, 32, 33, 37, 34, 19, 33, 11, 28, 7, 24, 22, 8, 10, 19, 23, 2, 29, 20, 5, 13, 16, 38, 35, 11, 16, 38};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> roads = {".z......B..........................zz..", "z....z.....AA.z......C.........C....z..", "...zz......A..C.........z......B.......", "..z..Az....z.............B....z.A...B..", "..z.......BBz............z..........A..", ".z.A...................................", "...z.....A.............................", "...........A.z..z.C......Bzz.A.Az.z.B..", "B...........................z.......zB.", "......A....z...........................", "....B........z........z...........C....", ".AAzB..A.z....z...........B..z.z.......", ".A..z........z..................B......", ".......z..z.z.......B.B.....A.A...z....", ".zC........z..........z.C.....A........", "..................................z...B", ".......z.....................C.........", ".......................................", ".......C.................z.............", ".......................................", ".............B.................z..z.C..", ".C.............................z.......", "..........z..Bz...............z...A.B..", "............................C.z........", "..z...........C........................", "...Bz..B..........z........A.z....C..z.", ".......z...B......................A.z..", ".......z.................A.............", "........z....A.........C..............z", ".......A...z....C........z.............", "...z.........AA.......zz........C......", ".CB....A...z........zz.............Cz..", "...A...z....B.................C...zz...", ".......................................", ".......z..C..z.z....z.A..CA.....z..B...", "z..............................Cz.B....", "zz.BA..Bz...........C.B...z....z.......", "........B................z.............", "...............B............z.........."};
    vector<int> queries = {0, 1, 89, 88, 21, 31, 54, 51, 4, 22, 27, 53, 75, 64, 8, 80, 62, 28, 9, 12, 61, 10, 39, 3, 82, 16, 73, 77, 85, 46, 6, 38, 34, 29, 24, 86, 69, 19, 78, 23, 48, 25, 68, 60, 11, 14, 74, 35, 47, 33};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 0, 35, 3, 13, 32, 28, 5, 32, 2, 12, 26, 2, 10, 23, 21, 11, 13, 1, 1, 20, 16, 3, 32, 25, 22, 15, 36, 26, 12, 7, 34, 29, 11, 20, 25, 9, 38, 7, 36, 14, 37, 36, 31, 2, 36, 7, 7, 10};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> roads = {".bFVzzBESzLzHzpqzpzozzzzzztzCszDczzSzzf", "b..SqVzzzzzKzRDVzfzzxLPhRFAzzszzzzzzs.z", "F..atzjzoP.QzNjIzzpFeZz.zzz.fzzzzzzzQNz", "VSa.znzzgbzzzzzzSzSGzGzzGszzzrztxvWzyzQ", "zqtz.zKzzFzzzzzzoozzAOkzltjzdMBhzzzAzav", "zVznz.sxzzzIuzztZzzTzzzzwzCezrWKVzLTSzz", "BzjzKs.WmzzzLpzzLzzzzzB.wdzzz.zzziVGuOZ", "EzzzzxW.zfuEzzXlWzzQYTmzzMzxjzzUzfzzzzO", "Szogzzmz.zzzzkuzzoECnzEWzzzwzrzstrzezyz", "zzPbFzzfz.OzzzmzzzAwHKzgACzmzMGEzzetzzz", "Lz.zzzzuzO.uzazqzxzzkNjKzzykk.tzzdzgzzL", "zKQzzIzEzzu.zGzzjVNzzQzoYefSzzYzzzQTzzl", "HzzzzuLzzzzz.gzzXQvzzRzCtzIzzffKuzxDyxz", "zRNzzzpzkzaGg.zzzWzoJzmzzzzIHjznKEzmzKz", "pDjzzzzXumzzzz.eznzglzgzzzKzGFPzkYtzz..", "qVIzztzlzzqzzze.AzzzzzTfiPUHOzzDzRKzzzr", "zzzSoZLWzzzjXzzA.duzBEztzXzznzzzCzuzRgz", "pfzzozzzozxVQWnzd.MzzzzzzzzpzuFzAHszdzp", "zzpSzzzzEAzNvzzzuM.rzczzzYzKHEDezzzjTzR", "ozFGzTzQCwzzzogzzzr.zEHfzSylzzzuzozzzUz", "zxezAzzYnHkzzJlzBzzz.zzhxzQzzzmxzBDzmzp", "zLZGOzzTzKNQRzzzEzcEz.nUzUzmzbzzziIzzzz", "zPzzkzBmEzjzzmgTzzzHzn.zzEGezgzzzazUhuz", "zh.zzz.zWgKoCzzftzzfhUz.bzzzQzkzLzZzzOR", "zRzGlwwzzAzYtzzizzzzxzzb.zKzGzrNxzzRyzC", "zFzstzdMzCzezzzPXzYSzUEzz.qKgzzzzpQzzzq", "tAzzjCzzzzyfIzKUzzzyQzGzKq.PzzuPONzzzzz", "zz.zzezxwmkSzIzHzpKlzmezzKP.zMzzzzzzuy.", "CzfzdzzjzzkzzHGOnzHzzzzQGgzz.FzzMdwzVzT", "sszrMr.zrM.zfjFzzuEzzbgzzzzMF.zzszzmzzz", "zzzzBWzzzGtYfzPzzFDzmzzkrzuzzz.iNEzTskz", "DzzthKzUsEzzKnzDzzeuxzzzNzPzzzi.zzzzoSn", "czzxzVzztzzzuKkzCAzzzzzLxzOzMsNz.zlAOzg", "zzzvzzifrzdzzEYRzHzoBiazzpNzdzEzz.Mzzmz", "zzzWzLVzzezQxztKuszzDIzZzQzzwzzzlM.jzvz", "SzzzATGzetgTDmzzzzjzzzUzRzzzzmTzAzj.hMz", "zsQyzSuzzzzzyzzzRdTzmzhzyzzuVzsoOzzh.Oz", "z.NzazOzyzzzxK.zgzzUzzuOzzzyzzkSzmvMO.P", "fzzQvzZOzzLlzz.rzpRzpzzRCqz.TzzngzzzzP."};
    vector<int> queries = {0, 1, 730, 729, 626, 292, 182, 175, 399, 353, 607, 234, 333, 627, 347, 603, 722, 663, 293, 452, 477, 225, 348, 256, 502, 9, 179, 56, 642, 686, 540, 332, 709, 249, 391, 144, 291, 236, 119, 131, 324, 260, 32, 34, 165, 28, 475, 574, 207, 670};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 0, 37, 23, 11, 6, 13, 10, 29, 22, 15, 29, 37, 31, 29, 37, 29, 24, 9, 33, 32, 10, 3, 15, 1, 19, 8, 19, 35, 19, 4, 26, 7, 36, 27, 22, 30, 19, 1, 10, 12, 7, 5, 24, 7, 35, 25, 22, 32};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> roads = {".....Az...z..s.z.z..k.Bz..wN.bz.dzV..zz", "........z....p..zW.B.zzv..Z..z....F...z", "...v..z..zz.....zzpp....KiT..x.z.zPmzz.", "..v.zH..F.zzFO.z.PzW.zz....z..szXzz.WC.", "...z.....V.f..D.k.z....z.zRz.....zB.zP.", "A..H..S.wzz..zx..zz.......lJzz.p..Vz.z.", "z.z..S..zE....xe.zz.z.Aa...z.zzY.N.Qzf.", "............f.zU.Y.Wzz........z.Y..z.ez", ".z.F.wz..z.zz.O..pz...z..QzFz.zwF...dk.", "..z.VzE.z....zz.AzC.z...V...zW.HH...Gz.", "z.zz.z.........I...R....gqz.k..zSBhz.z.", "...zf...z...z...Izbz...L.......T.z.zq.u", "...F...fz..z.......zpY.k..e....zz.....z", "sp.O.z...z....z.KT.zz.h.z.tOza.Yzez.zz.", "....DxxzOz...z.z.z..z...M.....K....d.z.", "z..z..eU..I...z...ez.z......l.n.zz.R...", ".zz.k....A.I.K....A....zz.CS..zz.Tz.lzz", "zWzP.zzYpz.z.Tz...J..d.......z..z.K..y.", "..pzzzz.zC.b...eAJ..............z...sz.", ".BpW...W..Rzzz.z....zzzhzzez.fGz..x.C..", "k.....zz.z..pzz....z.....z..GHQn.g..kz.", ".z.z...z....Y..z.d.z....z..I.y.gj.zO...", "Bz.z..A.z....h.....z...G.Qz.....zo.lz..", "zv..z.a....Lk...z..h..G.zzz...z..zz.mfa", "..K......Vg..zM.z..z.z.z.sz...dz....zPL", "..i.z...Q.q........zz.Qzs.z....cz......", "wZT.Rl..z.z.et..C..e..zzzz..zz..zzzPP..", "N..zzJz.F....O..S..z.I........zz.uzz.P.", ".....z..zzk..z.l....G.....z....q...E...", "bzx..zz..W...a...z.fHy....z...rz..zz...", "z..s..zzz.....Knz..GQ..zd..z.r.zW.Nzzh.", "..zz.pY.wHzTzY..z..zng..zc.zqzz...rdzz.", "d..X...YFHS.zz.z.zz..jz..zz...W....z.g.", "z.zzz.N...Bz.e.zT...g.oz..zu......zq.m.", "VFPzBV....h..z..zK.x.z.z..zz.zNr.z.z...", "..m..zQz..zz..dR.....Ol...PzEzzdzqz.zzc", "..zWz.z.dG.q.z..l.sCk.zmz.P...zz...z.z.", "z.zCPzfekzz..zz.zyz.z..fP..P..hzgm.zz.Q", "zz.....z...uz...z......aL..........c.Q."};
    vector<int> queries = {0, 1, 334, 333, 330, 235, 214, 286, 260, 287, 37, 165, 332, 201, 263, 67, 186, 149, 243, 137, 299, 160, 237, 59, 251, 130, 113, 98, 56, 77, 232, 323, 38, 170, 53, 72, 55, 3, 258, 128, 202, 51, 132, 301, 36, 178, 274, 83, 19, 120};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 5, 0, 38, 26, 31, 35, 21, 31, 32, 19, 22, 37, 19, 9, 5, 2, 33, 34, 31, 34, 3, 34, 18, 27, 5, 26, 19, 21, 6, 2, 35, 12, 21, 4, 1, 1, 4, 9, 20, 20, 13, 23, 16, 2, 17, 29, 26, 2, 1};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> roads = {".M.........zz..K....z.....zz...z.z.Z.sI", "M...d.......z.....z...O........A.Fzz.z.", ".........Uz.....z.C...zA...........zN..", "........z....x.........Dz..S...Pzz.....", ".d.....z...Y.....f....z.zz..z.z..f.F.J.", "......z.K.L.....A...Uz...z.z...........", ".....z...L...z.z..z......i....w.K......", "....z.............R....z.........g.zn..", "...z.K.........z.z..B.B..L....z........", "..U...L........y......zz.......z..Bx.zz", "..z..L.............z...z.f...z...L....d", "z...Y............z.a......zz..C.I...z.J", "zz...............ci....y.z....b..z.nz..", "...x..z..........i.....z.....hjg.z.z.z.", "...............R.Sz........X..z.......z", "K.....z.zy....R...c..........z.....z...", "..z..A..............k..z.....d....z....", "....f...z..zciS........zzL....z........", ".zC...zR....i.zc........zc.....z.......", "..........za........z......B....z.....D", "z....U..B.......k..z..ze..z...z....c...", ".....z....................Dz....I......", ".Oz.z...Bz..........z.............O..F.", "..AD...z.zz.yz..zz..e......E..........X", "...zz............zz......zTwa.x.....p..", "....zzi.L.f.z....Lc.....z.Nz.z.z.g...Az", "z..........z........zD..TN.............", "z..S.z.....z..X....B.z.Ewz.....US...zz.", "....z...................a..............", "..........z..h.zd........z....S........", "....z.w.z..Cbjz..z..z...x....S...z.k..z", "zA.P.....z...g....z......z.U...........", "...z..K....I.......z.I.....S........z.z", "zF.zf..g..L.zz...........g....z...fz...", ".z.......B......z.....O..........f....z", "Zzz.F..z.x..nz.z....c.........k..z.....", "..N....n...zz...........p..z....z.....J", "sz..J....z...z........F..A.z...........", "I........zdJ..z....D...X.z....z.z.z.J.."};
    vector<int> queries = {0, 1, 175, 174, 135, 63, 100, 38, 74, 17, 162, 73, 68, 50, 151, 92, 109, 18, 170, 75, 2, 84, 145, 42, 25, 105, 49, 107, 118, 121, 115, 9, 136, 26, 52, 66, 15, 173, 87, 41, 139, 166, 69, 158, 22, 51, 65, 97, 163, 99};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 11, 0, 31, 4, 8, 35, 25, 13, 6, 34, 3, 15, 3, 13, 4, 23, 25, 32, 23, 4, 23, 25, 9, 10, 19, 27, 14, 17, 4, 11, 8, 37, 5, 20, 18, 12, 27, 3, 2, 30, 29, 29, 38, 9, 8, 2, 22, 38, 9};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> roads = {".z..u..................z...z...........", "z................z.....R.....L.........", ".......................................", "...................z...............s...", "u......z....O.....................z....", "...........................X.........z.", ".......................................", "....z......A...................M.z.....", ".......................................", ".......................................", "...........................z......y....", ".......A...........z......i....z.......", "....O.........................V...z.z..", ".......................................", ".......................................", ".......................................", "..............................i...z....", ".z.........................n...........", ".......................................", "...z.......z............F.......G......", ".......................................", ".......................................", ".......................................", "zR......................z.......z.s.q..", "...................F...z.....z...E.....", ".......................................", "...........i......................z....", "z....X....z......n.............z..F....", ".................................zC....", ".L......................z..............", "............V...i.................zz...", ".......M...z...............z.........A.", "...................G...z...............", ".......z................E...z.....B....", "....z.....y.z...z......s..zFC.z..B.....", "...s..........................z........", "............z..........q...............", ".....z.........................A.......", "......................................."};
    vector<int> queries = {0, 1, 45, 44, 8, 29, 28, 17, 16, 39, 30, 22, 5, 23, 11, 31, 24, 34, 38, 43, 36, 2, 3, 37, 20, 13, 12, 33, 42, 18, 19, 21, 40, 9, 32, 35, 25, 15, 4, 41, 14, 7, 6, 10, 26, 27};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 0, 27, 24, 35, 30, 37, 5, 33, 3, 27, 7, 31, 4, 19, 7, 36, 28, 17, 30, 23, 0, 34, 26, 34, 12, 23, 1, 31, 11, 34, 24, 23, 32, 12, 33, 27, 4, 29, 10, 19, 11, 34, 34, 16};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> roads = {".REiiSBLnbuKIWWTDPjrjKvpAllDOFkiKeKdHCd", "R.gSatVfDQQQnglMxtcOWUwLSbtGogUeFnDhKqb", "Eg.RihwkYtxSeXAKDMqoOrvaWzSFcPrFbIkAjPa", "iSR.hlGCidXocpnhWRtiVeAShjDJwkjaRrMNOiW", "iaih.qYMunzTgVrHeBztFNbeKEkSnOlRCYGgrDV", "Sthlq.yFUeVquKlNzUwNfLmzgbdaNhQpypWzdbd", "BVwGYy.deIiJxqAgiARJXfBfYrRGuvsrXjQonYl", "LfkCMFd.TEBNYSsRCHwtvyBGjLLKSsgtRoXklHK", "nDYiuUeT.kBRrVGLawcOQVXeXuVAiVIssDQPMMG", "bQtdneIEk.rwPAyqgjWXwozqDfHxzkmFcAZOlgb", "uQxXzViBBr.IfptqHCwPwKvUwqicHDMYEXzZPOb", "KQSoTqJNRwI.hygnHMIMJrdOTqgBVdTUOAuFZIP", "InecguxYrPfh.HdjUPRreSSEyQJbAtXEqdsYsRH", "WgXpVKqSVApyH.RkamaKSoUfaEdxRDOUDfWSWrz", "WlAnrlAsGytgdR.LiezycKYzGjzHmdVTGrxRnuJ", "TMKhHNgRLqqnjkL.VPXgtmhasEZfXMFDNolTsmb", "DxDWeziCagHHUaiV.vsFFzBNgdbQFmHFOTyboyz", "PtMRBUAHwjCMPmePv.EGnhTSfApfTZVNguoMNrk", "jcqtzwRwcWwIRazXsE.HxhlIviJGPjbVyPFafMF", "rOoitNJtOXPMrKygFGH.oMQkwfvwAbtgtExbuFg", "jWOVFfXvQwwJeSctFnxo.eYbNhvmGMnOqRRSWDb", "KUreNLfyVoKrSoKmzhhMe.lzhAtpnXdRKwPcSga", "vwvAbmBBXzvdSUYhBTlQYl.JArYnBZHsfEPEmQb", "pLaSezfGeqUOEfzaNSIkbzJ.CaXNcfJgppbbEhS", "ASWhKgYjXDwTyaGsgfvwNhAC.oRWUrUw..aJRby", "lbzjEbrLufqqQEjEdAifhArao.CQLdePvKcaMlx", "ltSDkdRLVHigJdzZbpJvvtYXRC.lUxnlrCSMKah", "DGFJSaGKAxcBbxHfQfGwmpnNWQl.pFYOViWHQhF", "OocwnNuSizHVARmXFTPAGnBcULUp.hBcFBtygqj", "FgPkOhvsVkDdtDdMmZjbMXZfrdxFh.zrHpugJOS", "kUrjlQsgImMTXOVFHVbtndHJUenYBz.fKFURWjL", "ieFaRprtsFYUEUTDFNVgORsgwPlOcrf.pXzqRVM", "KFbRCyXRscEOqDGNOgytqKfp.vrVFHKp..ARjEC", "enIrYpjoDAXAdfroTuPERwEp.KCiBpFX..HdnIF", "KDkMGWQXQZzusWxlyoFxRPPbacSWtuUzAH.mhIr", "dhANgzokPOZFYSRTbMabScEbJaMHygRqRdm.oUM", "HKjOrdnlMlPZsWnsoNfuWSmERMKQgJWRjnho.qC", "CqPiDbYHMgOIRrumyrMFDgQhblahqOjVEIIUq.l", "dbaWVdlKGbbPHzJbzkFgbabSyxhFjSLMCFrMCl."};
    vector<int> queries = {0, 1, 738, 737, 566, 363, 383, 654, 531, 505, 453, 94, 59, 468, 119, 15, 655, 283, 272, 79, 491, 705, 549, 209, 192, 153, 629, 98, 679, 320, 410, 692, 361, 716, 581, 731, 328, 590, 40, 271, 472, 555, 640, 323, 303, 508, 103, 652, 728, 168};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 0, 38, 18, 10, 12, 26, 18, 17, 21, 2, 0, 14, 25, 0, 29, 6, 23, 5, 16, 28, 28, 4, 28, 4, 35, 2, 25, 31, 35, 36, 11, 30, 20, 34, 36, 31, 21, 6, 14, 31, 27, 8, 8, 27, 17, 27, 34, 16};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> roads = {".........L.......z...u..fJ..Ru....bClhC", ".......h..f..U.....Q...........b.V...gx", ".........Nk..b...........d......F....h.", "..........L.....w..OJk.Q.........r..U..", "......k.....P..ptg..........r..Px.g...l", "............C...x.......C.N....V.p...Da", "....k......Qh.........M.Ab.......X.r...", ".h..............Z.......R..Ec..ZO.....s", "..........PsFO...........q..B...Q....Z.", "L.N.........p....D..E...J....V.WFA.....", ".fkL....P...ty.R..ut.xzm....x..KBU...bm", "......Q.s.....I...T....my.kJ...t..t....", "....PCh.Fpt......B...P.dJvd..K....im..e", ".Ub.....O.y....r.N..a..G..........SaB.D", "...........I....H..B....MX............J", "....p.....R..r...................vD.S..", "...wtx.Z......H...B.z..u...A....M..RW..", "z...g....D..BN..............n......n.N.", "..........uT....B..a.....n..V.....vS...", ".Q.O......t...B...a...O.C.mO.......T...", "...J.....E...a..z......x....h.....z...l", "u..k......x.P..........i...Z.E....b....", "......M...z........O....X.......bSn..Y.", "...Q......mmdG..u...xi..l...x...r.....O", "f....CAR.J.yJ.M....C..Xl...sl...S......", "J.d...b.q...v.X...n..............Vy...o", ".....N.....kd......m..............n..r.", ".......E...J....A..O.Z..s......E......o", "R...r..cB.x......nV.h..xl........r.W...", "u........V..K........E...........S.H...", ".......................................", ".b..PV.Z.WKt...............E....F.m....", "..F.x..OQFB.....M.....brS......F....rrv", ".V.r.pX..AU....v......S..V..rS....Xz.x.", "b...g......tiS.D..v.zbn..yn....m.X.....", "C.....r.....ma..RnST........WH...z....l", "l..U.........B.SW...............r....lb", "hgh..D..Z.b......N....Y...r.....rx..l..", "Cx..la.s..m.eDJ.....l..O.o.o....v..lb.."};
    vector<int> queries = {0, 1, 192, 191, 113, 29, 73, 57, 41, 62, 2, 13, 68, 38, 77, 98, 164, 150, 162, 9, 60, 59, 90, 48, 118, 133, 184, 173, 3, 178, 135, 177, 80, 115, 108, 182, 190, 23, 51, 91, 7, 35, 65, 136, 142, 109, 161, 46, 116, 70};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 9, 0, 38, 9, 12, 7, 9, 23, 36, 2, 12, 24, 0, 12, 38, 37, 35, 35, 8, 33, 1, 37, 19, 16, 34, 35, 38, 10, 21, 26, 34, 19, 10, 28, 37, 36, 13, 12, 1, 3, 17, 4, 12, 18, 17, 28, 16, 31, 25};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> roads = {"........T.x....y..O.hH..o...g..l.....r.", "......P..bM.............p...a..t.......", "...xV..................Op...e..g.T...g.", "..x.........xSin.t.....................", "..V........K.eq.D.A....wb..oe....y....M", "....................u...........w......", ".P............G..Fm.............Q...y..", "........Bf..........f.g..t.......L.....", "T......B...Jhu.E.....J..Y...oV....L..m.", ".b.....f..Lti..VK.Na....FE............o", "xM.......L..S.....sAY........nPw.......", "....K...Jt...........b..w..q...........", "...x....hiS..Z....o..Auv.......mn....n.", "...Se...u...Z........E...o...U.Q.......", "...iq.G...........n....v.......h.......", "y..n....EV...........X.....C...z...u...", "....D....K...................s.y....c.t", "...t..F..............S..P...q.....D....", "O...A.m..Ns.o.n.......zq...ogR...Qjj..L", ".........aA..........ws.V..W.......z.S.", "h....u.f..Y............YD....t....t....", "H.......J..bAE.X.S.w..L...........F....", ".......g....u.....zs.L..........t......", "..O.w.......v.v...q.Y........MSN.oM..y.", "opp.b...YF.w.....P.VD.....X..J.......ZD", ".......t.E...o..............qF.N..E..s.", "........................X.......k......", "....o......q...C..oW.........g...b.U...", "gae.e...o........qg......q......G.....Z", "........V.n..U..s.R.t..MJF.g...sG......", "..........P............S.........O...O.", "ltg.......w.mQhzy......N.N...s.........", ".....wQ.....n.........t...k.GG........B", "..T.y..L..........Q....o...b..O...j....", "........L........Dj.tF.M.E.......j.....", "...............u..jz.......U...........", "......y.........c......................", "r.g.....m...n......S...yZs....O.......Q", "....M....o......t.L.....D...Z...B....Q."};
    vector<int> queries = {0, 1, 160, 159, 135, 63, 105, 91, 82, 43, 5, 54, 111, 23, 136, 118, 30, 20, 72, 27, 13, 106, 74, 151, 53, 87, 143, 14, 67, 31, 24, 149, 114, 134, 94, 110, 128, 58, 112, 76, 155, 96, 101, 113, 6, 80, 16, 108, 141, 78};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 8, 0, 37, 30, 23, 9, 17, 37, 29, 6, 7, 10, 15, 37, 37, 9, 1, 2, 18, 3, 38, 10, 27, 22, 15, 38, 13, 28, 10, 3, 19, 23, 23, 27, 29, 38, 22, 30, 21, 31, 23, 34, 33, 14, 33, 14, 33, 32, 25};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> roads = {".......O..........b.M..t...............", ".......................................", ".......................................", ".......................................", "............V........................E.", ".......................................", ".......................................", "O.................................N....", "..................c.........A..........", ".......................................", ".......................................", ".......................................", "....V..........S.......................", "....................T..........z.......", ".......................................", "............S..........z...............", ".......................................", ".......................................", "b.......c..............................", ".......................................", "M............T.........................", ".......................................", ".......................................", "t..............z.......................", ".......................................", ".......................................", ".......................................", ".......................................", "........A............................f.", ".......................................", ".......................................", ".............z....................D....", ".......................................", ".......................................", ".......N.......................D.......", ".......................................", ".......................................", "....E.......................f..........", "......................................."};
    vector<int> queries = {0, 1, 15, 14, 9, 11, 4, 6, 2, 5, 10, 3, 7, 8, 12, 13};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 7, 0, 23, 28, 4, 13, 0, 34, 20, 37, 31, 18, 8, 12, 15};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> roads = {"..BBBABAAABBA..AAB....ABBA.AA.BBAB.A...A", "..A..ABBABAAA..B.B.B.AABABBB.BBAABBBAAAA", "BA...BBBAB.AA...B..A.AABB.AB.B.BAABAAA.B", "B...A.A..BB.B.A.AA.AABABA.BB..BBABBAAA.B", "B..A..BBBBAAAABAAB.A.BA..BA.ABA.BBBA.BA.", "AAB......A.ABBAAABBBBBBAAB..B...AAABA..B", "BBBAB..AAB.B..BBBA.AA...AB.AABAB..B.AA.A", "ABB.B.A.A.AAB.A..BBBA.B.BBAB..B.AAAABA..", "AAA.B.AA.ABB.BB.BAAB..ABABBAAB...BA.AB.B", "ABBBBAB.A..BBB.ABAA.AAB.AAAA.BA.BBABABAB", "BA.BA..AB...BABAA..A.BBA.BB.ABA.AABB....", "BAA.AABABB..A..BAB.A.AA.BABB..ABABBBB.A.", "AAABAB.B.BBA.AAAB.AAAABAAB.BABBA.ABBBBBB", "....AB..BBA.A.BAA..B.BBAB.BAB....AABAABA", "...ABABAB.B.AB.BAA.AA...B.BBBABBABAAAA.B", "AB..AAB..AABAAB.A..ABB.BABBB.ABBABAAB.BA", "A.BAAAB.BBAABAAA.BA.B....A...BAA.B.BBB.B", "BB.ABBABAA.B..A.B.BA..BB..ABA.BABAAABAA.", ".....B.BAA..A...AB..BBBBBABA.AABBA.A...A", ".BAAABABB.AAABAA.A.....AABBBBABB.BB.ABBA", "...A.BAA.A..A.ABB.B...BA.A.B..BABAB.B.BA", ".AABBB...ABAAB.B..B...BAABAABAAB.B.AABBA", "AAAAAB.BABBABB...BB.BB.ABA..A.A.BA..A.B.", "BBBB.A..B.A.AA.B.BBAAAA.AAABBABABBBABAAB", "BABA.AABAA.BABBA..BA.ABA.B.B.AAABABBBABB", "AB..BBBBBABAB..BA.ABABAAB.AAAABBAABBBAAA", ".BABA..ABABB.BBB.ABB.A.A.A..AA.BABAAA.BB", "ABBB..ABAA.BBABB.BABBA.BBA..B.BAAAAAAAAB", "A...ABA.A.A.ABB..A.B.BAB.AAB.ABABB...B.B", ".BB.B.B.BBB.B.AAB.AA.A.AAAA.A...BB.B.A.A", "BB.BA.AB.AAAB.BBABABBAABAB.BB...BAAAA..A", "BABB..B....BA.BBAABBAB.AABBAA...AAABBA.A", "AAAABA.A.BAA..AA.BB.B.BBBAAABBBA.BABBB..", "BBABBA.ABBABAABBBAABABABAABABBAAB.AABBAA", ".BBBBABAAABBBAAA.A.BB..BBBAA..AAAA.B.B.A", "ABAAAB.A.BBBBBAABAA..A.ABBAA.BABBAB..B..", ".AAA.AABAA.BBAABBB.ABAABBBAA..ABBB...B.B", ".AAAB.AABB..BAA.BA.B.B.AAA.ABA.ABBBBB..B", ".A..A....A.ABB.B.A.BBBBABABA.....A......", "AABB.BA.BB..BABAB.AAAA.BBABBBAAA.AA.BB.."};
    vector<int> queries = {0, 1, 561, 560, 115, 394, 331, 361, 40, 536, 318, 482, 453, 337, 259, 106, 144, 451, 355, 540, 205, 193, 537, 427, 465, 466, 325, 316, 216, 347, 242, 86, 285, 7, 463, 27, 223, 6, 290, 198, 306, 404, 266, 12, 552, 294, 234, 76, 324, 243};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 5, 0, 39, 24, 35, 21, 24, 10, 24, 29, 30, 24, 28, 34, 5, 9, 15, 1, 38, 33, 26, 37, 14, 24, 38, 36, 36, 18, 31, 0, 4, 35, 7, 33, 4, 21, 0, 12, 17, 25, 37, 19, 2, 26, 18, 22, 19, 3, 32};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> roads = {"..BB..A....B..A..B.AA.B..A...A.BA.....A.", "...AABB.AA.....A.BA.A..BB.A...B....B...B", "B.....AAA....BB.BA.......A.....AB.B..AB.", "BA..BA.A..B..BA...B..A..AABB..AABBA.B...", ".A.B.BBA.BBABBB..AABBB.BAB....AA.AAAA..A", ".B.AB..BAA.A..B....BAB.B.A.A.BA.A.B..AB.", "ABA.B..B.B.AB.ABAAA...BABB...A.BABAB.BAA", "..AAABB...A..AB.....BA.A...AB...BBB.AB..", ".AA..A....B...B.A.....B.A......ABBBAB...", ".A..BAB...A.ABB.A....B............A..BBA", "...BB..ABA..A.B......A......BB..A..AB.A.", "B...AAA............AB..A..B.....BB..BA..", "....B.B..AA..AAAA..BBA.BB.B.BA.A..B.B.A.", "..BBB..A.B..A.....ABB.AA...BA...BAA.....", "A.BABBABBBB.A...A..B....B..BA.A.AA...ABA", ".A....B.....A.....B..BB.A.A...AB.A...B..", "..B...A.AA..A.A.....B.AA...B.BBB.....B..", "BBA.A.A............A..AA.B..B.B.B.AAB..B", ".A.BA.A......A.B.....BBA.A..ABB...A.BB..", "A...BB.....ABBB..A...AA.....A...BABA..B.", "AA..BA.B...BBB..B....AA..BAAA.BA.BB..AAB", "...ABB.A.BA.A..B..BAA....A..B.B..AB.A.B.", "B.....B.B....A.BAABAA......B..A.BA......", ".B..BBAA...ABA..AAA.....A.B.....AB.B.BB.", ".B.AA.B.A...B.BA.......A.B..B...AB...AAB", "A.AABAB..........BA.BA..B...BBABB.AAAB..", ".A.B.......BB..A....A..B...A..B......ABA", "...B.A.A.....BB.B...A.B...A.A....A.B.BA.", ".......B..B.BAA..BAAAB..BB.A.ABAB...A...", "A....BA...B.A...B.B......B..A...A..BABA.", ".B.AAA........AABBB.BBA..AB.B..B.B..A.AA", "B.AAA.B.A...A..BB...A....B..A.B.......B.", "A.BB.AABB.AB.BA..B.B..BAAB..BA...BA..AAA", "...BA.BBB..B.AAA...ABAABB..A..B.B.A.AAB.", "..BAABABBA..BA...AABBB...A......AA..BBAB", ".B..A.B.A.A......A.A...B.A.B.B.......ABB", "...BA..AB.BBB....BB..A...A..AAA..AB.....", "..A..ABB.B.A..ABB.B.A..BABAB.B..AABA..A.", "A.B..BA..BA.A.B....BAB.BA.BA.AABABAB.A.B", ".B..A.A..A....A..B..B...B.A...A.A.BB..B."};
    vector<int> queries = {0, 1, 349, 348, 106, 324, 286, 251, 17, 240, 23, 259, 168, 36, 37, 110, 342, 336, 14, 140, 239, 270, 19, 282, 46, 99, 206, 190, 346, 89, 62, 264, 213, 338, 38, 160, 161, 317, 166, 274, 269, 276, 103, 158, 209, 33, 69, 51, 235, 32};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 6, 0, 38, 21, 34, 10, 22, 7, 38, 11, 28, 20, 4, 18, 22, 37, 37, 5, 33, 5, 16, 11, 20, 28, 5, 14, 32, 32, 11, 13, 32, 36, 39, 3, 15, 24, 36, 34, 33, 37, 32, 2, 19, 38, 17, 16, 24, 24, 4};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> roads = {".....B..B.....AAB.B..A....BA..B...BAA..A", "..B..A.B......BA.B.........A......A.....", ".B...B.A......A...A........A....BB......", "..........B..........AB......A....B.B.AA", ".....B...A.A....BA......AB......B.......", "BAB.B.AA...BA...A.B...B...........A.....", ".....A....A..........B..B.....A.B.......", ".BA..A.........B.....A....B..B..B..A.A..", "B.........A....A..A...B....B.....A.AB..B", "....A............A......B............B..", "...B..A.A.............A.BA.B......AB..B.", "....AB.......A..AA.B...B.....B..B......A", ".....A...................B...A....AB..B.", "...........A.......A.........B........B.", "ABA...................A.....BBBAB.ABA...", "AA.....BA..........BB.B.A..B....A.....AB", "B...BA.....A.........BA.................", ".B..A....A.A...............B..A...BB....", "B.A..B..A..........B..B.....BA..A.B.AA..", "...........B.A.B..B.......BAA...B...AAAB", "...............B......A.B.ABA...........", "A..A..BA........B.....A.......A...BB...B", "...B.B..B.A...ABA.B.AA..A..BAA....B..B..", "...........B............A...............", "....A.B..BB....A....B.AA.BA..B..A..AB...", "....B.....A.B...........B.......A.A.AB..", "B......B...........BA...A...B.......AA..", "AAA.....B.B....B.B.AB.B......AB....ABA.A", "..............B...BAA.A...B.............", "...A...B...BABB...A...A.B..A......AB....", "B.....A.......B..A...A.....B......BA....", "..............A.....................B...", "..B.B.BB...B..BA..AB....AA........AAA...", "..B.....A...............................", "BA.B.A....A.A.A..BB..BB..A...AB.A....B..", "A......AA.B.B.B..B...B..A..A.BA.A...B...", "A..B....B.....A...AA....BAAB...BA..B.B..", ".......A.B........AA..B..BAA......B.B...", "...A......B.BB.A...A....................", "A..A....B..A...B...B.B.....A............"};
    vector<int> queries = {0, 1, 186, 185, 3, 10, 18, 14, 72, 31, 111, 143, 94, 80, 68, 162, 57, 74, 127, 95, 92, 26, 160, 180, 108, 64, 123, 11, 93, 120, 27, 19, 163, 45, 128, 59, 43, 164, 54, 176, 29, 8, 6, 12, 121, 32, 85, 116, 75, 130};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 5, 0, 39, 2, 14, 5, 10, 24, 19, 6, 14, 24, 22, 0, 21, 34, 10, 39, 25, 0, 4, 34, 14, 22, 14, 34, 1, 26, 32, 25, 4, 39, 25, 3, 17, 5, 27, 13, 30, 24, 5, 15, 27, 7, 13, 0, 22, 35, 14};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> roads = {"..AB.....A..A..A......B.................", ".........B.........A.......B...........A", "A...B............A............B..A....B.", "B...........................A.....BA....", "..B...........A.....B.........A.........", "........A...................B...........", ".........A..........................B...", "..............B....A....................", ".....A......................B...........", "AB....A.....B..B.......................A", "........................................", "......................B..A..............", "A........B..............................", "...............B.AA.....A...B....B......", "....A..B............A..............B....", "A........B...B....A.A.A.........B......B", "...........................B....A.......", "..A..........A...........B......B.......", ".............A.A...................B...B", ".A.....A..............B........B........", "....B.........AA........B.......A......B", ".............................B.A........", "B..........B...A...B............A.....A.", "........................................", ".............A......B.......A....B......", "...........A.....B......................", "........................................", ".B..............B..............A...A....", "...A.B..B....B..........A...........A...", ".....................B.........B.A.....A", "..B.A...................................", "...................B.A.....A.B..........", "...............BAB..A.A..........B......", "..A..........B..........B....A..B.A.....", "...B.............................A......", "...A..........B...B........A............", "......B.....................A...........", "........................................", "..B...................A.................", ".A.......A.....B..B.B........A.........."};
    vector<int> queries = {0, 1, 71, 70, 65, 42, 66, 16, 58, 60, 49, 57, 5, 15, 30, 62, 32, 54, 46, 26, 69, 31, 68, 55, 38, 63, 9, 67, 37, 44, 18, 12, 41, 39, 61, 2, 3, 47, 27, 25, 6, 35, 52, 4, 17, 51, 11, 10, 28, 29};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 0, 12, 33, 36, 32, 20, 24, 15, 39, 33, 19, 24, 22, 4, 2, 21, 35, 22, 9, 38, 39, 31, 19, 30, 0, 20, 31, 13, 35, 5, 6, 1, 20, 4, 14, 27, 32, 11, 22, 16, 39, 7, 14, 18, 28, 3, 15, 0};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> roads = {".ABABABBBBBAAABABAAA..AAAABBBABAABB.BAAB", "A.ABAABBAAAAABAABABB.B.ABB.BBBBABABAABBA", "BA.ABBABAABBABAA.ABAAABBBBBAABABBAABBABA", "ABA.ABBBBABBAABAABABAABBBB.BAAABBAAABAAB", "BABA.B..ABBAABBAABABBBABABBBBBABA.AAAAAA", "AABBB.AAABABAAABBBBABAAAABBBAABABB.BABAB", "BBAB.A.AABABB.BBBABB.B.AAAABBAAAAABA.BAB", "BBBB.AA.BBABBBAAAABBABAAABBAABAABABABABA", "BAABAAAB.BABBAAAABB.B.BAB.BA.BBBABAA.AAB", "BAAABBBBB.AAAABBAA...BAABBABBA.BAAB.AABB", "BABBBAAAAA.B.ABAB...ABBBABABAABAAABBB.BA", "AABBABBBBAB.ABABBBABB.AABAAABAAABABAAABB", "AAAAAABBBA.A.BBABAAABABAAAA.BBBBABB.BBBB", "ABBABA.BAAABB.BBABB.AAABBAAAB..BABABA.BA", "BAABBABAABBABB.A.AABAAA.ABA.ABABBBBBBBAA", "AAAAABBAABABABA.AAA.BA.BABBBA.BBBABABBBB", "BB.AABBAAABBBA.A.ABBAAB..ABBAB.ABAABABBA", "AAABBBAABA.BABAAA.BAA.BBBAB.AAAABBBBBBAB", "ABBAABBBB..AABAABB.A.ABABB.ABAABA.ABBABA", "ABABBABB...BA.B.BAA..B.BABAA.AAAAA...BBB", "..AABB.AB.ABBAABAA...BBBABBABABABA.AABAB", ".BAABABB.BB.AAAAA.ABB.AAA.BBAA.BABBBA.BB", "A.BBAA.ABABABAA.BBB.BA.ABABABAB.BBABAABA", "AABBBAAAAABAAB.B.BABBAA.BBAABBBB.B.AA.BA", "ABBBAAAABBABABAA.BBAAABB.BBABBAAABABBABA", "ABBBBBAB.BBAAABBAABBB.ABB.ABB.AAAAAAABAA", "B.B.BBABBAAAAAABBB.ABBBABA.ABAB.AAA.BA..", "BBABBBBAABBA.A.BB.AAABAAABA.ABBBABAABBAA", "BBAABABA.BABBBAAAAB.BABBBBBA.AAABBAAB.AA", "ABBABAABBAAAB.B.BAAAAAABB.ABA.ABBBBBBAAB", "BBAAABAAB.BAB.AB.AAAB.BBAABBAA.BB..BB.AA", "AABBBAAABBAABBBBAABAAB.BAA.BABB.AAA.BABB", "ABBBABABAAABAABBBBAABAB.AAAABBBA.BBBABAA", "BAAA.BAABAAABBBAAB.AABBBBAABBB.AB.BBAAAB", "BBAAA.BBABBBBABBABA..BA.AAAAAB.ABB.AABAB", ".ABAABAAA.BA.BBABBB.ABBABA.AABB.BBA.A.AB", "BABBAA.B.ABABABBABB.AAAABABBBBBBAAAA.ABA", "ABAAABBAAA.AB.BBBBABB.A.ABAB.A.ABAB.A.BB", "ABBAAAABABBBBBABBABBABBBBA.AAAABAAAABB.A", "BAABABBABBABBAABABABBBAAAA.AABABABBBABA."};
    vector<int> queries = {0, 1, 703, 702, 270, 650, 502, 254, 101, 375, 155, 634, 700, 680, 302, 320, 588, 547, 666, 131, 600, 505, 602, 498, 474, 290, 190, 257, 321, 144, 693, 152, 539, 428, 454, 611, 433, 406, 43, 264, 638, 616, 419, 436, 349, 123, 580, 444, 316, 115};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 0, 38, 10, 39, 39, 19, 0, 19, 6, 39, 39, 39, 33, 31, 31, 24, 33, 0, 26, 14, 22, 37, 38, 11, 20, 1, 5, 11, 39, 33, 14, 21, 26, 33, 14, 26, 15, 25, 33, 31, 11, 34, 28, 5, 28, 39, 26, 2};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> roads = {"...BB....A..BB..AABAAAABAA.BA..B..AAB.B.", "..A...BA......A....BAAABBBB.AA...B..BAB.", ".A.B..ABA..B.....A.ABBA.A.B....B.A.B....", "B.B.B.AA....A...B....AB.B.B.A.AA...B...A", "B..B.B.B.B.A..A.....AB.AA.......A.BAB..A", "....B....B...AAA..B.AA..............B..B", ".BAA......B.B..BBA.BB.BAA...AA.A..AB....", ".ABAB....B.A.A...B.B.B.AB......A.A.A..B.", "..A.......B.B...BA......AB.A..A..AB.B...", "A...BB.B....A.B.BAA....B..A.A......A.B..", "......B.B....BA..B.A.........AAABB..AAB.", "..B.A..A...............B..B..B..AAB.A.AB", "B..A..B.BA...B...A..AABB..AAB.B...A.....", "B....A.A..B.B.BA..B.A.ABBAA..AB.........", ".A..AA...BA..B.BAB..B.A..B........A...B.", ".....AB......AB......B.A.A...A.B.....B..", "A..B..B.BB....A..B..B...........A.A.A.A.", "A.A...ABAAB.A.B.B.A.B...B...AB.BBB...A.A", "B....B...A...B...A.....A.BA..A.AB.A.B..B", "ABA...BB..A...............A.B.........AB", "AAB.AAB.....AAB.BB.....AB...BBA.ABB.A...", "AABABA.B....A..B.........BBAAABB.A....B.", "AAAB..B.....BAA.............BBBBB.A..AA.", "BB..A.AA.B.BBB.A..A.A....A..B.BA..B.A...", "ABABA.ABA....B...B..B......B..AA...BA...", "AB......B....ABA..B..B.A....BA.A........", ".BBB.....A.BAA....AA.B......ABA.B...B.A.", "B.......A...A........A..B...A....B..B...", "AA.A..A..A..B....A.BBABB.BAA.B.AAB.B.BB.", ".A....A...AB.A.A.BA.BAB..AB.B..BB....B.A", "...A....A.A.BB......ABBBA.A.......B..AB.", "B.BA..AA..A....B.BA..BBAAA..AB..B.BA.BAB", "....A.....BA....ABB.A.B...B.AB.B.A..ABA.", ".BA....AA.BA.....B..BA.....BB...A..B.A..", "A...B.A.B..BA.A.A.A.B.AB......BB.....B.A", "A.BBA.BA.A..............B...B..A.B....A.", "BB..BB..B.AA....A.B.A..AA.BB....A....ABA", ".A.......BA....B.A....A.....BBABBAB.A.AB", "BB.....B..BA..B.A..A.BA...A.B.BAA..ABA..", "...AAB.....B.....ABB.........A.B..A.AB.."};
    vector<int> queries = {0, 1, 309, 308, 304, 178, 40, 169, 221, 135, 258, 261, 163, 260, 180, 98, 297, 31, 199, 97, 121, 6, 247, 116, 254, 122, 280, 119, 243, 24, 306, 293, 137, 9, 93, 75, 244, 174, 171, 80, 279, 248, 212, 241, 302, 7, 70, 2, 63, 231};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 9, 0, 34, 39, 21, 11, 15, 31, 9, 6, 32, 36, 20, 39, 7, 32, 17, 30, 21, 33, 6, 38, 12, 35, 1, 18, 24, 28, 4, 38, 31, 32, 6, 0, 22, 33, 12, 29, 1, 39, 1, 11, 21, 33, 2, 2, 4, 0, 37};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> roads = {".........A..A..........B..B.............", "........B...A...........................", "........................................", ".....AAB.B...AA.B........BB..A.B..A.....", "......B..........B..AA...B.A............", "...A..........B...........A....B..BAA..B", "...AB..A.B.......AA...B..B.B.......A.AB.", "...B..A.B...AA.....B.............A.B....", ".B.....B.........A..B..A....B.....A....A", "A..B..B...A.B......B.....A...A...B...A..", ".........A.A.........B...A...B..A.B...B.", "..........A........A.B..A....B.BA.B.....", "AA.....A.B........B......A........B..B..", "...A...A.........B.......B.........A...B", "...A.B.....................B.....A......", "........................B......A..AB....", "...B.................A.....B...........A", "....B.A.A....B..........................", "......A.....B.........A...A..B.ABB......", ".......B.B.A...........A.....A...B......", "....A...B...............................", "....A.....BB....A.......................", "......B...........A............A.....B..", "B.......A..........A.....B.....A.B......", "...........A...B.........B.A............", "...BB.B..AA.AB.........BB.A.....B.A..AA.", "B..B.A............A......A........B.....", "....A.B.......B.B.......A.........A.....", "........B........................A......", "...A.....ABB......BA...............A.B..", "........................................", "...B.B.....B...A..A...AA...............B", "..........AA......B......B..............", ".......A.B....A...BB...B....A.........A.", "...A.B..A.BBB..A.........ABA.......B...A", ".....AAB.....A.B.............A....B.B...", ".....A.............................B....", "......A..A..B.........B..A...B..........", "......B...B..............A.......A......", ".....B..A....B..A..............B..A....."};
    vector<int> queries = {0, 1, 122, 121, 91, 95, 48, 101, 118, 19, 7, 74, 119, 47, 89, 77, 93, 73, 66, 92, 84, 86, 85, 78, 10, 31, 75, 2, 106, 81, 68, 26, 3, 25, 102, 13, 49, 100, 43, 111, 58, 40, 54, 98, 32, 9, 107, 116, 44, 57};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 9, 0, 26, 25, 14, 31, 35, 11, 21, 6, 12, 32, 5, 5, 3, 19, 37, 4, 23, 18, 34, 26, 31, 8, 12, 25, 3, 5, 6, 6, 12, 5, 9, 34, 21, 15, 29, 12, 8, 7, 29, 32, 25, 18, 20, 36, 39, 34, 8};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> roads = {".......BBB....B.............AB.A.AA....A", "....B.........A..........A...B..........", ".......B......................A.........", ".............................A.........B", ".B...A...........................B....A.", "....A.......A..A.......B.B.............B", "........................AAB.......B.....", "B.B...........A.A.....A.A....B...B......", "B............A................B.A.......", "B.........A......B.....A.B.B.A...A......", ".........A.............B................", "........................................", ".....A..............................B...", "........A.........................B.....", "BA.....A..................B.............", ".....A............B.B..A................", ".......A.........B.....B.....A..........", ".........B......B.B.....B...A.AA..A.....", "...............B.B....A...........A.....", "........................B..A............", "...............B..........A.............", "..........................B.A...........", ".......A..........A....B.....B.B.......A", ".....B...AB....AB.....B.A.A.............", "......AA.........B.B...A.B..B..A........", ".A...BA..B..............B.........A.....", "......B.......B.....AB.A.....A..B......A", ".........B.........A..........B.....A...", "A................A...A..B....B.B........", "BB.A...B.A......A.....B...A.B..B.AB.A..A", "..A.....B........A.........B............", "A................A....B.A...BB..........", "........A.................B.............", "A...B..B.A...................A.........B", "A.....B......B...AA......A...B.........B", "........................................", "............B..............A.A........B.", "........................................", "....A...............................B...", "A..B.B................A...A..A...BB....."};
    vector<int> queries = {0, 1, 94, 93, 91, 71, 47, 79, 57, 9, 42, 21, 65, 17, 18, 27, 60, 92, 76, 62, 68, 54, 28, 80, 30, 77, 33, 29, 39, 86, 46, 23, 24, 61, 45, 32, 2, 72, 75, 3, 88, 66, 56, 14, 31, 63, 4, 73, 82, 81};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 7, 0, 33, 26, 14, 29, 31, 27, 15, 6, 34, 12, 2, 30, 10, 7, 39, 38, 9, 22, 24, 9, 17, 28, 36, 39, 17, 4, 25, 7, 8, 32, 33, 16, 3, 14, 1, 4, 0, 31, 5, 30, 31, 29, 27, 28, 29, 34, 18};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> roads = {".Az.zACBzzz.zzCBzzz.Azz.zABzzBBCCzBzAAA.", "A.AzzzzzBz.CzzC.zCzAz..AB.AzAAzzBA.zzC.B", "zA..zzzCBzzCzCzzzzzBAAAAAAzzCzBBzCCzCAzz", ".z..BAzBzzAzzA.BAC.zCzCzBCzzzB.CCAzz.z.z", "zzzB.CABAzCzACzzBzzzzAzzzAAzzBCCAzzA.zAB", "AzzAC.ACBzCCzzzzAzCzBCAzCAzzzzzz.BCzzBzB", "CzzzAA.CzAzC.zCAzz..CzzCA.zACzCAzA.zCzzz", "BzCBBCC.zAzBBAA.BzzzzzzzCzzzBzzAzzzCAzAC", "zBBzABzz..CAAzzzzzABCACAzzz.zC.AzCzzAzAz", "zzzzzzAA..Cz.zzCzBBzB.CA.zB...ABBz..ACzz", "z.zACCzzCC.zCC..CzzA.B.B..zCzz.zzCzzAAz.", ".CCzzCCBAzz.CzCBBCBCACzzzAzzCBzzAzzzzzzz", "zzzzAz.BA.CC..z.zCBzBzzzB.AzCBzAAz.C.zzC", "zzCACzzAzzCz..zBzAzCCBzzzAzC.CzzCzBABAz.", "CCz.zzCAzz.Czz.CzzABBBzBBzCA.zzzzzzBAzCC", "B.zBzzA.zC.B.BC.BzzAzz.zzz.BC.Az...A.z..", "zzzABAzBzzCBzzzB..Azz.BA.CAzzzBzzC.B.zAC", "zCzCzzzzzBzCCAzz..z.zz.zBzCzBCBCBzCAzBBB", "zzz.zC.zABzBBzAzAz.zAzBAzz.Czz.CzACCCA.z", ".ABzzz.zBzACzCBAz.z.AC.BzB.CBzCzzzzzBCzz", "AzACzBCzCB.ABCBzzzAA.zzzzzBzzzzzCzCBCzBz", "z.AzACzzA.BCzBBz.zzCz.zzC.zCAzzzABBCzA.z", "z.ACzAzzCC.zzzz.B.B.zz.CC.BABB.zzzCAzzzC", ".AAzzzCzAABzzzBzAzABzzC.CBAABzzzzzzCzBCz", "zBABzCACz..zBzBz.BzzzCCC.zzzzzBz.CzB.AAz", "A.ACAA.zzz.A.AzzCzzBz..Bz.Cz.CzzAz.z.CAz", "BAzzAzzzzBzzAzC.AC..BzBAzC.BzCAzCAzzzz..", "zzzzzzAz..CzzCABzzCCzCAAzzB.zzCCA.zzBAAA", "zACzzzCBz.zCC..CzBzBzABBz.zz..zB.A.zzzCB", "BAzBBzzzC.zBBCz.zCzzzzBzzCCz..BBz..ACCzz", "BzB.CzCz.A.zzzzABB.Czz.zBzACzB.BzzAAzzzC", "CzBCCzAAABzzAzzzzCCzzzzzzzzCBBB.zBACBz.z", "CBzCA.zzzBzAACz.zBzzCAzz.ACA.zzz..zzzBBA", "zACAzBAzCzCzzzz.CzAzzBzzCzA.A.zB..Cz.CzB", "B.CzzC.zz.zz.Bz..CCzCBCzz.zz..AAzC.C..zB", "zzzzAzzCz.zzCABABACzBCACBzzzzAACzzC.zzzC", "AzC..zCAAAAz.BA..zCBCzzz..zBzCzBz..z.zzz", "ACAzzBzzzCAzzAzzzBACzAzBACzAzCzzBC.zz.Cz", "A.z.AzzAAzzzzzC.AB.zB.zCAA.ACzz.BzzzzC.C", ".BzzBBzCzz.zC.C.CBzzzzCzzz.ABzCzABBCzzC."};
    vector<int> queries = {0, 1, 684, 683, 639, 213, 480, 374, 190, 500, 300, 240, 630, 647, 267, 362, 376, 308, 530, 33, 484, 38, 128, 346, 263, 370, 340, 272, 456, 202, 407, 188, 169, 44, 99, 571, 368, 549, 379, 79, 139, 86, 443, 672, 197, 494, 582, 390, 254, 536};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 0, 17, 24, 6, 27, 15, 4, 23, 21, 27, 32, 25, 28, 13, 16, 12, 17, 3, 18, 2, 4, 8, 26, 16, 13, 12, 10, 23, 11, 9, 12, 17, 20, 34, 8, 20, 32, 5, 16, 13, 21, 39, 10, 20, 32, 7, 30, 27};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> roads = {"....A..B.AC.z.z...zCzzzCCB.zz.A.z..zC.Cz", "....z..zB.CBC.Az.zz.zCz.zC.AC...B.zz.zB.", "...z...z.z...zzB.CzACzzACzA.CCz.C...z..B", "..z..z.zC.....C.Az...ABz.zB.CBz..AzC..zz", "Az...AzzB.BCz.z..A...zBB.AzzA.z....zC.z.", "...zA.zz.z..B...AzC...AA.A.z.C.z.z.zB...", "....zz.A...........ACB.z.zz.z..A.zzACAzB", "BzzzzzA..zAzA.....C..zBCCAz.z....z...BA.", ".B.CB....B...zz..CAz.zBz....z.z.AB.z..z.", "A.z..z.zB.....C.....A.C.zz..B.........z.", "CC..B..A....z.......A..z.zz.zC.....Az..z", ".B..C..z....z.CzB....Czz..z..A.BzzC.Cz..", "zC..zB.A..zz..C.z.B....z..A.....zCzB..Cz", "..z.....z..........AAz...z.CCA.C...zz.Cz", "zAzCz...zC.CC....C..zB.z.zz...Bz.z...BB.", ".zB........z.....C.z.B.A.z..z....B...Cz.", "...A.A.....Bz....z...z.B.......Cz......z", ".zCzAz..C.....CCz....z..BA..Az..z.z..zA.", "zzz..C.CA...B.......BC.....z..C..z..zzBz", "C.A...A.z....A.z....Cz.z..z.CCz....z.z.A", "zzC...C..AA..Az...BC...z..zA...zzzB..zzA", "zCzAz.Bzz..C.zBBzzCz..zBC...A.zB.C...zzA", "zzzBBA.BBC.z.........z.zAz....z..z.CA.zB", "C.AzBAzCz.zzz.zAB..zzBz...A..zBzz.AAB.Cz", "CzC....C.z.......B...CA...C....z.z..zzz.", "BCzzAAzA.zz..zzz.A....z....B..A....C.A.z", "..ABz.zz..zzA.z....zz..AC..CC..zCCC.z...", "zA..zz.......C....z.A....BC...C.....zzzA", "zCCCA.zzzBz..C.z.A.C.A....C..zCzz..zAzz.", "..CB.C....CA.A...z.C...z....z.zz...z...z", "A.zzz...z.....B...Cz.zzB.A.CCz...C..zBzB", ".....zA....B.Cz.C...zB.zz.z.zz...BA...A.", "zBC.....A..zz...zz..z..z..C.z....ACzBBB.", "...A.zzzB..zC.zB..z.zCz.z.C...CBA.z.zAB.", ".z.z..z....Cz....z..B..A..C....ACz..C.z.", "zz.CzzA.z.A.Bz.....z..CA.C..zz..z....ABA", "C.z.CBC...zC.z....z...ABz.zzA.z.BzC....z", ".z....AB...z..BC.zzzzz..zA.zz.B.BA.A...A", "CB.zz.zAzz..CCBz.AB.zzzCz..zz.zABBzB...A", "z.Bz..B...z.zz..z.zAAABz.z.A.zB....AzAA."};
    vector<int> queries = {0, 1, 376, 375, 211, 247, 337, 342, 187, 76, 98, 368, 50, 192, 165, 66, 29, 92, 198, 139, 218, 229, 122, 251, 7, 83, 269, 351, 38, 131, 224, 271, 206, 294, 49, 316, 120, 42, 152, 87, 172, 150, 281, 344, 146, 15, 249, 277, 340, 215};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 4, 0, 35, 12, 21, 10, 31, 8, 1, 23, 28, 3, 34, 38, 0, 5, 21, 38, 20, 28, 8, 2, 12, 3, 9, 28, 31, 2, 13, 36, 3, 21, 31, 7, 32, 0, 18, 23, 4, 7, 26, 27, 33, 27, 0, 9, 35, 38, 6};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> roads = {"....CCzBz...A..Az...zz......B.........z.", ".....................B......z.A.......z.", "................A....zzA..........z....C", ".....B.C...z....zC..A..z.B..A....zz.z...", "C........zC..z..zzAC.....z.............C", "C..B...........z...........zz...B...A..z", "z.........C......B..........z...........", "B..C........................BzBz.zz.Bz..", "z...........B.z........B.........zB.....", "....z..............z...C...A..z...C.....", "....C.C...........zC.........z........z.", "...z.........A..Az..z..z.....CC.........", "A.......B....z..zzzAz.B....B...A.......z", "....z......Az...z.....A.......z....C...A", "........z......z......AB..z......zzBC..A", "A....z........z....z..C...A....z..A.....", "z.Azz......Azz...B.B.z......A.....B.....", "...Cz.B....zz...B..A...z...z..B.........", "....A.....z.z..............zBC..........", "....C....zC.A..zBA....zz.z.C......z.z.A.", "z..A.......zz..........C.........BAz....", "zBz.............z......C....z..B....C...", "..z.........BAAC...z...........z.......z", "..Az....BC.z..B..z.zCC...........zzz...B", "........................................", "...Bz..............z................C...", "..............zA..................B....z", ".....z...A..B....zzC........z.z..Az.A..C", "Bz.A.zzB........A.B..z.....z..C.....z...", ".......z..zC......C...............Az....", ".A.....B.z.C.z...B.........zC..z..B.z.z.", ".......z....A..z.....Bz.......z..C....C.", ".....B............................z.....", "...z...zz.....z.....B..z...A...C.....CA.", "..zz...zBC....zAB..zA..z..Bz.AB.z..Bz.Az", ".............CB.....z..z.....z....B.....", "...z.A.B......C....z.C...C.Az.z...z....z", ".......z.........................C......", "zz........z........A..........zC.AA.....", "..C.Cz......zAA.......zB..zC......z.z..."};
    vector<int> queries = {0, 1, 170, 169, 96, 154, 94, 76, 135, 43, 97, 140, 161, 168, 123, 78, 82, 27, 28, 5, 113, 146, 85, 70, 53, 63, 24, 60, 73, 151, 92, 79, 66, 19, 62, 90, 77, 40, 32, 75, 107, 106, 52, 117, 125, 124, 2, 166, 159, 138};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 4, 0, 38, 0, 33, 31, 33, 39, 10, 7, 25, 23, 34, 12, 17, 34, 12, 13, 5, 21, 30, 23, 31, 30, 22, 28, 34, 19, 26, 28, 6, 38, 3, 14, 36, 27, 16, 11, 8, 37, 33, 11, 36, 34, 20, 9, 27, 36, 39};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> roads = {"...................B.B...............z.z", "...............z.......C................", ".........C............A............zz...", "........................................", ".......C..........A.z.............z.....", "..............C.......z.................", "..............z.............zB...C......", "....C......z..........zA................", "...................................zA...", "..C...................z............Bz...", "............................A.Cz....z...", ".......z....C..........z.......zB...A...", "...........C.A.......z............z.....", "............A.................z.........", ".....Cz......................z....A.....", ".z.................z.BA.................", ".................................z.....C", "........................................", "....A................z..................", "B..............z.......Az...............", "....z...............................A...", "B...........z..B..z....z............B...", "..A..z.z.z.....A....................A...", ".C.....A...z.......A.z......z...........", "...................z........A...........", "...............................A....z...", "........................................", "........................................", "......z...A............zA.....A..z......", "......B.......z.........................", "..........C..z..............A.......z...", "..........zz.............A........A.....", "...........B........................z...", "......C.........z...........z........B..", "....z.......z.A................A........", "..z.....zB..........................B...", "..z.....AzzA........ABA..z....z.z..B....", "z................................B......", "........................................", "z...............C......................."};
    vector<int> queries = {0, 1, 66, 65, 4, 47, 5, 55, 22, 31, 27, 53, 26, 57, 33, 50, 37, 45, 7, 14, 17, 19, 20, 9, 25, 63, 16, 48, 46, 35, 11, 39, 41, 30, 42, 13, 8, 24, 18, 12, 10, 28, 51, 3, 49, 23, 54, 59, 56, 38};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 19, 0, 37, 12, 21, 11, 34, 6, 32, 15, 10, 22, 13, 11, 22, 21, 39, 4, 35, 8, 36, 10, 36, 5, 28, 36, 23, 0, 25, 9, 4, 14, 11, 6, 2, 20, 14, 35, 22, 2, 1, 36, 21, 7, 29, 31, 28, 12, 18};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> roads = {".z.yUzz.HazB.zzbpzKmy.z.RPzfOzzz..bzzszz", "z.aUzzz.JzzzCzLCz.zzGp...PPSFzuzTzXz..Rz", ".a.zzvc.G.zzvzAzzRZMzTvXzz.AzMzzzcrUzz.z", "yUz.irzzzzzPUTVzzzzqzLz..z.SXBKVzzzzziPX", "Uzzi..prxzzfz.zGzzzzzziLzzVzYlz.NNzdJzvl", "zzvr..zzGzzz.zzzozFzV.wSzzz.xMz.cznPKnDi", "zzczpz.zzJajNRMzzG.frlzY.zztzszEzaz.zUzz", "...zrzz.xu.n.aM.h.ofzzzz..zmzzzzVzej.Ez.", "HJGzxGzx.znzzzoQzjCzEsz.znflzzAzzHzzzzzx", "az.zzzJuz.Qzz.swLYzzEYt..L.z.zRLz..z.zTz", "zzzzzza.nQ.mzzzMuUzMSjzHx.zYzrz.NUzFDzzz", "BzzPfzjnzzm.znzbORzozzzzeVzz.zr..zzPvzak", ".CvUz.N.zzzz.vzzVzPzezW.Myzzzxzzvp.Mzfzj", "zzzT.zRaz.znv.zxzMzzzsFz.zoDzzzbuzzXKMSc", "zLAVzzMMoszzzz.WvzzrnZzzUzzFzzZ.DzzAIzkz", "bCzzGzz.QwMbzxW.ezGzzzzzE.znyzzn.Lhezzzz", "pzzzzozhzLuOVzve.HzOEUzvz.rzzBzgzzzzztFz", "z.RzzzG.jYURzMzzH..zzzOzzYzzQzNxnzmX.Cz.", "KzZzzF.oCzzzPzzGz...UzfzMvLzUIzz.WzzjF.z", "mzMqzzffzzMozzrzOz..zMK.z.zMzIzvpAzzYpzz", "yGzzzVrzEESzeznzEzUz.zzMzmzzz.J.zDHrzz.y", ".pTLz.lzsYjzzsZzUzzMz.lhzzzzZz.xkDlzzzzz", "z.vziwzzztzzWFzzzOfKzl.zQDzxzAsz.z.S..zX", "..X.LSYz..Hz.zzzvzz.Mhz..zazFzz.z.JKW.zP", "R.z.zz..z.xeM.UEzzMzzzQ..vzzgGzhz.zzCav.", "PPzzzzz.nL.Vyzz..Yv.mzDzv.SzzrtzjXozzzzz", "zP..Vzzzf.zzzozzrzLzzzzazS.RVBfztzaziOIE", "fSASz.tmlzYzzDFnzzzMzzxzzzR.Xzfzjzzzzzol", "OFzXYxzzz.z.zzzyzQUzzZzFgzVX.aR.zfzzrtzz", "zzMBlMszzzrzxzzzBzII.zAzGrBza.znzzzpozLz", "zuzKzzzzARzrzzZzzNzzJ.szztffRz.bzazWCzww", "zzzV..EzzL..zb.ngxzv.xz.hzzz.nb.p.Rzzzzn", ".TzzNczVzzN.vuD.zn.pzk.zzjtjzzzp.zzUzQzz", ".zczNzazH.UzpzzLzzWADDz..Xzzfza.z.zzHnrz", "bXrzznzez.zz.zzhzmzzHl.JzoazzzzRzz.hoamo", "zzUzdP.jzzFPMXAezXzzrzSKzzzzzpWzUzh.zzez", "z.zzJKz.z.DvzKIzz.jYzz.WCzizroCzzHoz.zzH", "s.ziznUEzzzzfMzztCFpzz..azOztzzzQnazz.zk", "zR.PvDzzzTzazSkzFz.z.zzzvzIozLwzzrmezz.F", "zzzXliz.xzzkjczzz.zzyzXP.zElzzwnzzozHkF."};
    vector<int> queries = {0, 1, 696, 695, 637, 450, 432, 122, 473, 564, 185, 584, 496, 350, 668, 53, 633, 649, 207, 399, 81, 561, 319, 485, 199, 119, 129, 670, 671, 542, 151, 249, 22, 104, 238, 366, 303, 524, 278, 80, 337, 216, 463, 481, 128, 219, 386, 85, 247, 283};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 0, 39, 39, 38, 27, 1, 28, 30, 0, 14, 17, 26, 34, 8, 36, 29, 34, 31, 14, 27, 24, 11, 21, 11, 23, 31, 39, 31, 14, 28, 3, 4, 10, 24, 25, 14, 34, 3, 38, 15, 9, 25, 5, 9, 16, 11, 33, 15};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> roads = {".z.R.z.zz..zhzz.z.a...olzgQ.m.zzYtlzz...", "z...cy...z.zz...a.....h......OB.z.zMz...", ".....c..X...j...z.z..z...zC..k..z..z.n..", "R...zzk.Bl..uZ...i...D.z..s.jz.z.zzzz..z", ".c.z.CznQz..zz.dzD......wz.Gzz.WzzOBzzCQ", "zyczC.W.Bz....Lz...z.P..zbzz...zr...C.z.", "...kzW..z.WJJ.z.zzrdzf.W.zzd...zzznzA...", "z...n....Y....jzz..z....zz.L.V.L..GzzR..", "z.XBQBz..uzz.zzzcK.z.E..z.zzLy....zJS...", ".z.lzz.Yu.zFrzVz..E..B.h....zz.z..IzUzez", "......W.zz.z.zn...Hz.T.Az...z..Z..W.Y.z.", "zz....J.zFz..xd.c.Lr...z.shz...z..z..z..", "hzjuz.J..r....K....z.z....zzJz.Y.zzqLz..", "z..Zz...zzzx..z.L..unz....z..kz..f...gE.", "z....LzjzVndKz....zzEq.zJ.zz.z.p..C....z", "....dz.zzz.......k.ET.G...czzz.....t.Nz.", "zaz.z.zzc..c.L....EYzz....CzeM...z.Tbzz.", "...iD.z.K......k....z...z....Lz.z.rzz..c", "a.z...r..EHL..z.E.....T...z.zz...z..z...", ".....zdzz.zrzuzEY....z..K...zW...wzzzdww", "......z......nETzz.....z.B.t.zI.z..rzUz.", "..zD.Pf.EBT.zzq.z..z....zm...z.t..zWzzSz", "oh.............G..T..........z.zzv.z.z..", "l..z..W..hAz..z.....z....zz.zK...O...J..", "z...wz.zz.z...J..z.K.z....Yz.A.z.IS..ZR.", "g.z.zbzz...s........Bm.z..z.dz.q..zt....", "Q.Cs.zz.z..hzzzcC.z....zYz...F.s..zzTJ..", "....GzdLz..zz.zzz...t...z...x..R...q...U", "m..jz...Lzz.J..ze.zz...z.d.x.......ze...", ".Okzz..Vyz..zkzzMLzWzzzKAzF....zy..zY...", "zB...........z...z..I..........Wr....z..", "z..zWzzL.zZzY.p......tz.zqsR.zW..zZ.dz.z", "Yzz.zrz..........z..z.z......yr..tgyz..p", "t..zz.z.....zf..z.zw..vOI......zt.z.o...", "lz.zO.nGzIWzz.C..r.z.z..Szz....Zgz.zZz..", "zMzzB.zzJz..q..tTz.zrWz..tzqzz..y.z.ixzs", "zz.zzCAzSUY.L...bzzzzz....T.eY.dzoZi.zzz", "..n.z..R.z.zzg.Nz..dUzzJZ.J...zz..zxz.d.", "....Cz...ez..E.zz..wzS..R..........zzd..", "...zQ....z....z..c.w.z.....U...zp..sz..."};
    vector<int> queries = {0, 1, 377, 376, 87, 269, 349, 216, 267, 226, 95, 278, 357, 160, 11, 159, 32, 365, 333, 223, 213, 254, 240, 310, 325, 298, 154, 241, 362, 339, 214, 161, 191, 56, 84, 224, 17, 48, 262, 277, 313, 206, 73, 205, 110, 142, 30, 147, 361, 181};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 0, 36, 24, 7, 14, 6, 32, 16, 13, 15, 24, 5, 16, 36, 9, 37, 36, 27, 14, 17, 28, 33, 19, 10, 12, 19, 39, 30, 11, 38, 13, 4, 14, 20, 9, 0, 37, 35, 23, 28, 10, 8, 0, 10, 0, 19, 32, 28};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> roads = {".G..........z..z.k...G..z.p.zOz..p...z..", "G..........Zz.z...z..jd.......z..z...B..", "....z.....z..z.....zO.h...z..zti.y....p.", ".....B..xz..z...S.....L...........z...z.", "..z..i.........zzz..k.zW.o...........f..", "...Bi...L.O.............dz...zz..n.zzz..", "...............hz...................zG..", "................zz...L..zs....D.........", "...x.L..............z.zz.........Z......", "...z......Z.......z...............Sh.z..", "..z..O...Z.....z...............z.r......", ".Z.....................z..z....m........", "zz.z..........s......z....r...y......s..", "..z............zu.........v..x..z..c.z..", ".z..........s......zd.zl.z....Md..z.....", "z...z.h...z..z..v..p........z.....tz.VT.", "...Sz.zz.....u.v..AzDs.z..z..z....O.....", "k...z..z...........g......D.J.z.......z.", ".z.......z......A...f.......d........z..", "..z...........zpzg..T.x...z...J......z..", "..O.k...z.....d.D.fT.......zz.z..z.z.z.a", "Gj.....L....z...s.....A.....z....z.z.z..", ".dhLz...z.....z....x.A..z.....z.........", "....W...z..z..l.z.........z.F.....L.....", "z....d.z..............z..zG..S......USz.", "....oz.s......z.........z...C....vzez...", "p.z........zrv..zD.z...zG......z.....e..", "....................z.........t.....Ez..", "z..............z.Jd.zz.F.C.....z...O....", "O.z..z.......x..z.......S.......j..z....", "zzt..z.D....y.M..z.Jz.z....t.......z.P..", "..i.......zm..d...........z.z....z.r....", ".............z...............j..........", "pzy..n..Z.r.........zz...v.....z..z.z...", "...z.....S....ztO......L.z.......z.zq...", ".....z...h...c.z....zz...e..Ozzr..z.eD..", ".....zz.................Uz.E.....zqe....", "zB..fzG..z..sz.V..zzzz..S.ez..P....D..bz", "..pz...........T.z......z............b..", "....................a................z.."};
    vector<int> queries = {0, 1, 182, 181, 175, 107, 8, 119, 164, 132, 173, 143, 82, 7, 158, 55, 13, 96, 163, 72, 172, 122, 83, 123, 22, 77, 17, 87, 101, 160, 151, 106, 5, 127, 89, 174, 130, 116, 71, 136, 125, 35, 19, 81, 44, 68, 137, 147, 152, 42};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 0, 28, 36, 3, 2, 13, 37, 13, 37, 28, 19, 4, 26, 37, 10, 10, 21, 14, 35, 2, 15, 31, 16, 5, 5, 9, 14, 19, 29, 22, 11, 33, 6, 27, 15, 14, 25, 35, 23, 21, 4, 16, 4, 13, 25, 26, 35, 18};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> roads = {".....z....g.B........................z..", "........................................", "........................................", "........................................", "........................................", "z......................d................", "........................................", "............B.z.........................", "........................................", "........................................", "g.....................z.................", "........................................", "B......B.........z............z..i...z..", "........................................", ".......z...............J................", "........................................", "........................................", "............z..................g........", "......................hz................", "........................................", "..............................i..z......", "........................................", "..........z.......h.....................", ".....d........J...z.......z.............", "........................................", "........................................", ".......................z.............V..", "........................................", "........................................", "........................................", "............z.......i...................", ".................g...............z......", "........................................", "............i.......z..........z.....m..", "........................................", "........................................", "........................................", "z...........z.............V......m......", "........................................", "........................................"};
    vector<int> queries = {0, 1, 22, 21, 5, 19, 20, 9, 2, 11, 17, 13, 3, 6, 4, 10, 7, 16, 18, 12, 14, 8, 15};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 5, 0, 37, 10, 23, 26, 31, 23, 12, 7, 20, 18, 0, 22, 33, 12, 12, 14, 30, 33, 17, 37};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> roads = {".qOgapeLZvdSsRpDUUfiml..qphFL.RmsHjZpgAP", "q.xWS.fmvF.DxyrrBmkb..It.XoWTqZKHfCyOcKq", "Ox.mAlEaFczjlgTKHCA..rnZRS.hmVnY.Jk.S.D.", "gWm.yaoJGjmuEHv.R.e.lcybEgqjrsr.MC.phimZ", "aSAy.LzOKyeg..IcbCY.DjPsR..b..RmUrjWlLmt", "p.laL.ULgmUWMl.s..YtgzLnKNLSASSCRDkFYkY.", "efEozU.ikSydbzZGgLOXnwGoOuHpJjRkOwdQzHI.", "LmaJOLi.A.GLVWi.xb..sSdGa.ZXID...J.LGmED", "ZvFGKgkA.rxBgO.EagtYnvSRtFv.uqXLFW.ChbXQ", "vFcjymS.r..TKliVG.u..I...gKJP..N...r.pc.", "d.zmeUyGx..AtPA..MMWoLPNsvjZ.Bu..sXtVXLp", "SDjugWdLBTA.fV.pvhx.mqWD.....qR.Yyxo.m..", "sxlE.MbVgKtf.dzNgkxT.PSi.l.ClVJjDaw.c.f.", "RygH.lzWOlPVd..Ud.SNenyvRmTkrYtlHrK.F.FL", "prTvI.Zi.iA.z..mIJj.WwNORrO.SMytXorGapV.", "DrK.csG.EV.pNUm.t.EzvkYEd.pnG.Z.ZCiFVMPi", "UBHRb.gxaG.vgdIt.KmFacxF.RmXmpwrNcHpVcgo", "UmC.C.Lbg.Mhk.J.K.nynuza.z.Rf.k.wF..hccA", "fkAeYYO.tuMxxSjEmn.mrMdswDTDS...gHtZC.Yu", "ib...tX.Y.W.TN.zFym..Kh..mkLxpV.L.Pktb.D", "m..lDgnsn.om.eWvanr..FXEs.mSVR.N.zA.y..Q", "l.rcjzwSvILqPnwkcuMKF.cQUZLoNjBGkHRkDUfu", ".InyPLGdS.PWSyNYxzdhXc.gAQgScgNt.GuUURVk", ".tZbsnoGR.NDivOEFas.EQg.g..nqn.XYYhcRKu.", "q.RERKOat.s..RRd..w.sUAg.F.Wigae.s.Q.GJm", "pXSg.Nu.Fgv.lmr.RzDm.ZQ.F.GAfAw.VhWg.yK.", "ho.q.LHZvKj..TOpm.TkmLg..G.NZO.eQ.YnSZ..", "FWhjbSpX.JZ.Ck.nXRDLSoSnWAN.r.Qi.sNuVlXz", "LTmr.AJIuP..lrSGmfSxVNcqifZr.RNDSWHuuGCZ", ".qVs.SjDq.BqVYM.p..pRjgngAO.R.VaHVaqZXis", "RZnrRSR.X.uRJtyZwk.V.BN.aw.QNV.o.DPY.fG.", "mKY.mCk.LN..jlt.r...NGtXe.eiDao..OnTq.CO", "sH.MURO.F..YDHXZNwgL.k.Y.VQ.SH...bJbg.Ti", "HfJCrDwJW.syaroCcFH.zHGYsh.sWVDOb.vaMFDv", "jCk.jkd...XxwKriH.tPARuh.WYNHaPnJv.akS.H", "Zy.pWFQLCrto..GFp.Zk.kUcQgnuuqYTbaa.szKm", "pOShlYzGh.V.cFaVVhCtyDUR..SVuZ.qgMks.HgC", "gc.iLkHmbpXm..pMcc.b.URKGyZlGXf..FSzH.CD", "AKDmmYIEXcL.fFVPgcY..fVuJK.XCiGCTD.KgC.K", "Pq.Zt..DQ.p..L.ioAuDQuk.m..zZs.OivHmCDK."};
    vector<int> queries = {0, 1, 641, 640, 396, 118, 470, 367, 250, 75, 147, 542, 131, 212, 117, 215, 47, 110, 302, 549, 139, 631, 324, 15, 606, 332, 223, 597, 333, 634, 354, 589, 472, 504, 535, 550, 345, 364, 235, 468, 10, 201, 487, 437, 202, 608, 579, 425, 293, 24};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 0, 39, 25, 11, 14, 6, 28, 10, 6, 35, 12, 28, 10, 1, 15, 17, 12, 19, 8, 35, 21, 7, 37, 27, 1, 23, 10, 35, 33, 32, 16, 23, 25, 39, 5, 39, 1, 11, 3, 3, 34, 14, 26, 39, 28, 8, 16, 2};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> roads = {".w.f.XCC.l.axxlSAivKXh...X.c.m.AflD.u..t", "w..h.b........c...Qk..b....mF.E..hUI.R..", "...N.J....c........dv...mT....u...S....N", "fhN...H....gQ...z...P......nl.Gq....V.d.", ".....kO.Iu......h.DH..vy.TcO.Gw.dVC.e.ZY", "XbJ.k.r.H.S..z...iv..Luc.O.l.LZkuKY...I.", "C..HOr..T.y.l..G..q...jPK..mMp.o.j..O.LI", "C...........nK..Km.R..ZW...B.KjHM...R...", "....IHT....k...........ek...G.g.vS.H.b..", "l...u.....b..Q.....wa.l.d.h.X....Ge.Z..E", "..c..Sy..b..........A..K......po..Rgon..", "a..g....k....XY.m..Tp...zS..r.S.y.K.E.f.", "x..Q..ln.....t.q........k.UGx...NVh...g.", "x....z.K.Q.Xt.F.....R..faKz....g......u.", "lc.........Y.F...D......a.j......IU.s...", "S.....G.....q.....b......rV..H....Q.c..P", "A..zh..K...m..............E.YD...D.J....", "i....i.m......D....z....D....j.SM.....W.", "vQ..Dvq........b...IiXW.vHUs.....le.u..e", "Kkd.H..R.w.T.....zI.WseZN.NGW....W..sr..", "X.vP.....aAp.R....iW.I..PXHtkS..vn.X...g", "h....L............XsI.m....x...BJ....L..", ".b..vujZ.l........We.m..y.....E..QBfv.S.", "....ycPWe.K..f.....Z......N...h.H.....l.", "..m...K.kd.zkaa..DvNP.y...KyQ.bI.PWGB...", "X.T.TO.....S.K.r..H.X......p.....w...C..", "....c....h..UzjVE.UNH..NK....cC.Y..Y....", "cm.nOlmB....G.....sGtx..yp..X.VF.PsbC.o.", ".F.l..M.GX.rx...Y..Wk...Q..X..GhR.S.N.f.", "m...GLpK.......HDj..S.....c.....COfs.WM.", ".EuGwZ.jg.pS..........Ehb.CVG..Gt.nv.rQQ", "A..q.koH..o..g...S...B..I..Fh.G.....p...", "f...du.Mv..yN....M..vJ.H..Y.RCt..un.S.Bm", "lh..VKj.SG..V.I.D.lWn.Q.Pw.P.O..u.qW..H.", "DUS.CY...eRKh.UQ..e...B.W..sSfn.nq..E..E", ".I......H.g.....J...X.f.G.Yb.sv..W...I.x", "u..Ve.OR.ZoE..sc..us..v.B..CN..pS.E..KHw", ".R......b.n........r.L...C...Wr....IK...", "...dZIL....fgu...W....Sl...ofMQ.BH..H..G", "t.N.Y.I..E.....P..e.g.........Q.m.Exw.G."};
    vector<int> queries = {0, 1, 321, 320, 319, 193, 117, 244, 295, 188, 225, 152, 186, 20, 252, 48, 77, 40, 3, 72, 268, 312, 233, 55, 164, 21, 96, 269, 127, 12, 5, 247, 194, 86, 118, 125, 317, 64, 6, 157, 54, 74, 290, 131, 26, 213, 199, 169, 59, 289};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 0, 39, 38, 39, 0, 15, 27, 13, 37, 13, 17, 12, 21, 15, 18, 17, 0, 16, 39, 39, 29, 11, 3, 0, 8, 30, 7, 4, 1, 36, 6, 1, 31, 5, 39, 27, 14, 32, 14, 4, 29, 8, 8, 35, 19, 39, 1, 35};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> roads = {"....eGl......l.aF....jr............Y...m", "......Z..b....U.......B..lm.R.f.........", "...d.d...Q...v..S......Ge...u.....I...y.", "..d..e.......o..Q....g..A..DW...iI.Fw...", "e..........T.B..EDY....wX...k..b.....K.S", "G.de..J.GT.r.g..D...a.....Uj...n.....B..", "lZ...J...PDm....T.v.E.uYx...s...C.......", "................K..............p........", ".....G....S.kxao.........C............P.", ".bQ..TP.................p...w...........", "......D.S..I.................b..........", "....Trm...I..q.......................U..", "........k....B............N..B..........", "l.voBg..x..qB...X...U.EOqu.m....C....rK.", ".U......a.........w.p.bmo.k.t.J.........", "a.......o...........o.KA.i.J..h...T....d", "F.SQEDTK.....X...gY..r..PLrA.jw..u...ev.", "....D...........g.....N.FC..w.....m..w..", "....Y.v.......w.Y..y.....j..............", "..................y.............p.......", ".....aE......Upo........S.........F..r..", "j..g............r...................I...", "rB....u......EbK.N.....ps.....M.Y.J.....", "..G.w.Y......OmA......p...UI.......H....", "..eAX.x..p...qo.PF..S.s.......c.H....i..", ".l......C....u.iLCj.........M...........", ".m...U......N.k.r......U...........x.y..", "...D.j.......m.JA......I............e..B", ".RuWk.s..w....t..w.......M...jf.y..YL...", "..........b.B...j...........j..o.....b..", ".f............Jhw.....M.c...f...J.T.g...", "....bn.p.....................o..q......k", "...i..C......C.....p..Y.H...y.Jq.......c", "...I............u.......................", "..I............T.m..F.J.......T.....M..g", "Y..F...................H..x.Y........g..", "...w.................I.....eL.g...M.....", "....KB.....U.r..ew..r...i.y..b.....g...X", "..y.....P....K..v.......................", "m...S..........d...........B...kc.g..X.."};
    vector<int> queries = {0, 1, 174, 173, 161, 30, 101, 128, 21, 97, 3, 7, 127, 39, 126, 158, 80, 140, 105, 18, 153, 34, 41, 137, 169, 16, 54, 119, 23, 92, 108, 131, 156, 56, 98, 28, 115, 167, 51, 85, 72, 86, 59, 61, 33, 73, 159, 160, 121, 49};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 4, 0, 39, 30, 13, 14, 25, 3, 4, 5, 9, 18, 14, 19, 30, 20, 30, 13, 9, 30, 11, 22, 29, 36, 5, 31, 36, 0, 22, 28, 31, 22, 23, 39, 16, 17, 39, 17, 20, 18, 24, 1, 8, 6, 16, 28, 32, 33, 18};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> roads = {"...................G.........S..........", "........................................", "........................................", "........................................", "........................................", "........................................", ".......i.........L......................", "......i..K....Z................GH......G", "........................................", ".......K........Zj...................A..", "........................................", "........................................", "........................................", "........................................", ".......Z..............................c.", "........................................", ".........Z...................q..........", "......L..j.........P..B.................", "........................................", "G................P......................", "........................................", "........................................", ".................B.............f........", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "S...............q.......................", "........................................", ".......G..............f.................", ".......H...............................D", "........................................", "........................................", "........................................", "........................................", ".........A............................K.", "..............c......................K..", ".......G........................D......."};
    vector<int> queries = {0, 1, 19, 18, 5, 6, 11, 8, 16, 13, 12, 10, 9, 14, 4, 17, 7, 3, 15, 2};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 19, 0, 29, 9, 17, 39, 31, 9, 14, 7, 32, 7, 38, 7, 16, 22, 6, 37, 17};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> roads = {"...........................A.A..........", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "A............................Z..........", "........................................", "A..........................Z............", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................"};
    vector<int> queries = {0, 1, 3, 2};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 27, 0, 29};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> roads = {"...........................a.B..........", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "a............................A..........", "........................................", "B..........................A............", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................"};
    vector<int> queries = {0, 1, 3, 2};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 27, 0, 29};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> roads = {".ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijkl", "A.mnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVW", "Bm.XYZabcdefghijklmnopqrstuvwxyzABCDEFG", "CnX.HIJKLMNOPQRSTUVWXYZabcdefghijklmnop", "DoYH.qrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWX", "EpZIq.YZabcdefghijklmnopqrstuvwxyzABCDE", "FqaJrY.FGHIJKLMNOPQRSTUVWXYZabcdefghijk", "GrbKsZF.lmnopqrstuvwxyzABCDEFGHIJKLMNOP", "HscLtaGl.QRSTUVWXYZabcdefghijklmnopqrst", "ItdMubHmQ.uvwxyzABCDEFGHIJKLMNOPQRSTUVW", "JueNvcInRu.XYZabcdefghijklmnopqrstuvwxy", "KvfOwdJoSvX.zABCDEFGHIJKLMNOPQRSTUVWXYZ", "LwgPxeKpTwYz.abcdefghijklmnopqrstuvwxyz", "MxhQyfLqUxZAa.ABCDEFGHIJKLMNOPQRSTUVWXY", "NyiRzgMrVyaBbA.Zabcdefghijklmnopqrstuvw", "OzjSAhNsWzbCcBZ.xyzABCDEFGHIJKLMNOPQRST", "PAkTBiOtXAcDdCax.UVWXYZabcdefghijklmnop", "QBlUCjPuYBdEeDbyU.qrstuvwxyzABCDEFGHIJK", "RCmVDkQvZCeFfEczVq.LMNOPQRSTUVWXYZabcde", "SDnWElRwaDfGgFdAWrL.fghijklmnopqrstuvwx", "TEoXFmSxbEgHhGeBXsMf.yzABCDEFGHIJKLMNOP", "UFpYGnTycFhIiHfCYtNgy.QRSTUVWXYZabcdefg", "VGqZHoUzdGiJjIgDZuOhzQ.hijklmnopqrstuvw", "WHraIpVAeHjKkJhEavPiARh.xyzABCDEFGHIJKL", "XIsbJqWBfIkLlKiFbwQjBSix.MNOPQRSTUVWXYZ", "YJtcKrXCgJlMmLjGcxRkCTjyM.abcdefghijklm", "ZKudLsYDhKmNnMkHdySlDUkzNa.nopqrstuvwxy", "aLveMtZEiLnOoNlIezTmEVlAObn.zABCDEFGHIJ", "bMwfNuaFjMoPpOmJfAUnFWmBPcoz.KLMNOPQRST", "cNxgOvbGkNpQqPnKgBVoGXnCQdpAK.UVWXYZabc", "dOyhPwcHlOqRrQoLhCWpHYoDReqBLU.defghijk", "ePziQxdImPrSsRpMiDXqIZpESfrCMVd.lmnopqr", "fQAjRyeJnQsTtSqNjEYrJaqFTgsDNWel.stuvwx", "gRBkSzfKoRtUuTrOkFZsKbrGUhtEOXfms.yzABC", "hSClTAgLpSuVvUsPlGatLcsHViuFPYgnty.DEFG", "iTDmUBhMqTvWwVtQmHbuMdtIWjvGQZhouzD.HIJ", "jUEnVCiNrUwXxWuRnIcvNeuJXkwHRaipvAEH.KL", "kVFoWDjOsVxYyXvSoJdwOfvKYlxISbjqwBFIK.M", "lWGpXEkPtWyZzYwTpKexPgwLZmyJTckrxCGJLM."};
    vector<int> queries = {0, 1, 741, 740, 257, 380, 63, 467, 23, 80, 542, 12, 166, 580, 654, 632, 7, 695, 667, 36, 452, 710, 216, 472, 214, 65, 232, 614, 440, 206, 717, 555, 47, 201, 418, 596, 61, 24, 690, 29, 713, 457, 738, 716, 394, 503, 458, 686, 568, 54};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 0, 38, 29, 11, 0, 28, 0, 3, 18, 7, 15, 26, 34, 22, 0, 29, 29, 19, 14, 31, 6, 14, 7, 1, 6, 23, 38, 35, 37, 31, 0, 4, 27, 34, 1, 13, 31, 1, 35, 23, 36, 30, 15, 16, 15, 28, 19, 28};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> roads = {".NOPQRSTUVWXYZabcdefghijklmnopqrstuvwxy", "N.zABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghij", "Oz.klmnopqrstuvwxyzABCDEFGHIJKLMNOPQRST", "PAk.UVWXYZabcdefghijklmnopqrstuvwxyzABC", "QBlU.DEFGHIJKLMNOPQRSTUVWXYZabcdefghijk", "RCmVD.lmnopqrstuvwxyzABCDEFGHIJKLMNOPQR", "SDnWEl.STUVWXYZabcdefghijklmnopqrstuvwx", "TEoXFmS.yzABCDEFGHIJKLMNOPQRSTUVWXYZabc", "UFpYGnTy.defghijklmnopqrstuvwxyzABCDEFG", "VGqZHoUzd.HIJKLMNOPQRSTUVWXYZabcdefghij", "WHraIpVAeH.klmnopqrstuvwxyzABCDEFGHIJKL", "XIsbJqWBfIk.MNOPQRSTUVWXYZabcdefghijklm", "YJtcKrXCgJlM.nopqrstuvwxyzABCDEFGHIJKLM", "ZKudLsYDhKmNn.NOPQRSTUVWXYZabcdefghijkl", "aLveMtZEiLnOoN.mnopqrstuvwxyzABCDEFGHIJ", "bMwfNuaFjMoPpOm.KLMNOPQRSTUVWXYZabcdefg", "cNxgOvbGkNpQqPnK.hijklmnopqrstuvwxyzABC", "dOyhPwcHlOqRrQoLh.DEFGHIJKLMNOPQRSTUVWX", "ePziQxdImPrSsRpMiD.YZabcdefghijklmnopqr", "fQAjRyeJnQsTtSqNjEY.stuvwxyzABCDEFGHIJK", "gRBkSzfKoRtUuTrOkFZs.LMNOPQRSTUVWXYZabc", "hSClTAgLpSuVvUsPlGatL.defghijklmnopqrst", "iTDmUBhMqTvWwVtQmHbuMd.uvwxyzABCDEFGHIJ", "jUEnVCiNrUwXxWuRnIcvNeu.KLMNOPQRSTUVWXY", "kVFoWDjOsVxYyXvSoJdwOfvK.Zabcdefghijklm", "lWGpXEkPtWyZzYwTpKexPgwLZ.nopqrstuvwxyz", "mXHqYFlQuXzaAZxUqLfyQhxMan.ABCDEFGHIJKL", "nYIrZGmRvYAbBayVrMgzRiyNboA.MNOPQRSTUVW", "oZJsaHnSwZBcCbzWsNhASjzOcpBM.XYZabcdefg", "paKtbIoTxaCdDcAXtOiBTkAPdqCNX.hijklmnop", "qbLucJpUybDeEdBYuPjCUlBQerDOYh.qrstuvwx", "rcMvdKqVzcEfFeCZvQkDVmCRfsEPZiq.yzABCDE", "sdNweLrWAdFgGfDawRlEWnDSgtFQajry.FGHIJK", "teOxfMsXBeGhHgEbxSmFXoEThuGRbkszF.LMNOP", "ufPygNtYCfHiIhFcyTnGYpFUivHScltAGL.QRST", "vgQzhOuZDgIjJiGdzUoHZqGVjwITdmuBHMQ.UVW", "whRAiPvaEhJkKjHeAVpIarHWkxJUenvCINRU.XY", "xiSBjQwbFiKlLkIfBWqJbsIXlyKVfowDJOSVX.Z", "yjTCkRxcGjLmMlJgCXrKctJYmzLWgpxEKPTWYZ."};
    vector<int> queries = {0, 1, 741, 740, 739, 78, 346, 735, 60, 342, 72, 406, 732, 662, 366, 44, 675, 510, 570, 404, 13, 637, 670, 408, 328, 161, 627, 51, 271, 453, 505, 195, 282, 30, 378, 270, 93, 381, 311, 48, 518, 478, 687, 522, 46, 305, 728, 633, 120, 302};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 0, 38, 37, 2, 10, 37, 31, 10, 37, 21, 35, 38, 10, 23, 33, 28, 20, 20, 1, 25, 26, 22, 35, 4, 34, 0, 36, 21, 17, 5, 12, 16, 10, 7, 12, 34, 8, 25, 32, 15, 29, 34, 24, 9, 37, 37, 3, 22};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> roads = {".AAAAAAAAAAAAAAAAAAAUVWXYZabcdefghijklm", "A.BBBBBBBBBBBBBBBBBBBVWXYZabcdefghijklm", "AB.CCCCCCCCCCCCCCCCCCCWXYZabcdefghijklm", "ABC.DDDDDDDDDDDDDDDDDDDXYZabcdefghijklm", "ABCD.EEEEEEEEEEEEEEEEEEEYZabcdefghijklm", "ABCDE.FFFFFFFFFFFFFFFFFFFZabcdefghijklm", "ABCDEF.GGGGGGGGGGGGGGGGGGGabcdefghijklm", "ABCDEFG.HHHHHHHHHHHHHHHHHHHbcdefghijklm", "ABCDEFGH.IIIIIIIIIIIIIIIIIIIcdefghijklm", "ABCDEFGHI.JJJJJJJJJJJJJJJJJJJdefghijklm", "ABCDEFGHIJ.KKKKKKKKKKKKKKKKKKKefghijklm", "ABCDEFGHIJK.LLLLLLLLLLLLLLLLLLLfghijklm", "ABCDEFGHIJKL.MMMMMMMMMMMMMMMMMMMghijklm", "ABCDEFGHIJKLM.NNNNNNNNNNNNNNNNNNNhijklm", "ABCDEFGHIJKLMN.OOOOOOOOOOOOOOOOOOOijklm", "ABCDEFGHIJKLMNO.PPPPPPPPPPPPPPPPPPPjklm", "ABCDEFGHIJKLMNOP.QQQQQQQQQQQQQQQQQQQklm", "ABCDEFGHIJKLMNOPQ.RRRRRRRRRRRRRRRRRRRlm", "ABCDEFGHIJKLMNOPQR.SSSSSSSSSSSSSSSSSSSm", "ABCDEFGHIJKLMNOPQRS.TTTTTTTTTTTTTTTTTTT", "UBCDEFGHIJKLMNOPQRST.UUUUUUUUUUUUUUUUUU", "VVCDEFGHIJKLMNOPQRSTU.VVVVVVVVVVVVVVVVV", "WWWDEFGHIJKLMNOPQRSTUV.WWWWWWWWWWWWWWWW", "XXXXEFGHIJKLMNOPQRSTUVW.XXXXXXXXXXXXXXX", "YYYYYFGHIJKLMNOPQRSTUVWX.YYYYYYYYYYYYYY", "ZZZZZZGHIJKLMNOPQRSTUVWXY.ZZZZZZZZZZZZZ", "aaaaaaaHIJKLMNOPQRSTUVWXYZ.aaaaaaaaaaaa", "bbbbbbbbIJKLMNOPQRSTUVWXYZa.bbbbbbbbbbb", "cccccccccJKLMNOPQRSTUVWXYZab.cccccccccc", "ddddddddddKLMNOPQRSTUVWXYZabc.ddddddddd", "eeeeeeeeeeeLMNOPQRSTUVWXYZabcd.eeeeeeee", "ffffffffffffMNOPQRSTUVWXYZabcde.fffffff", "gggggggggggggNOPQRSTUVWXYZabcdef.gggggg", "hhhhhhhhhhhhhhOPQRSTUVWXYZabcdefg.hhhhh", "iiiiiiiiiiiiiiiPQRSTUVWXYZabcdefgh.iiii", "jjjjjjjjjjjjjjjjQRSTUVWXYZabcdefghi.jjj", "kkkkkkkkkkkkkkkkkRSTUVWXYZabcdefghij.kk", "llllllllllllllllllSTUVWXYZabcdefghijk.l", "mmmmmmmmmmmmmmmmmmmTUVWXYZabcdefghijkl."};
    vector<int> queries = {0, 1, 741, 740, 298, 56, 610, 422, 182, 342, 191, 279, 267, 341, 712, 183, 574, 362, 269, 670, 11, 45, 128, 557, 461, 241, 308, 221, 463, 471, 601, 25, 721, 300, 408, 205, 500, 448, 118, 676, 184, 403, 556, 427, 188, 503, 465, 395, 72, 582};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 0, 38, 15, 10, 36, 31, 9, 14, 1, 24, 23, 1, 32, 17, 13, 15, 3, 25, 11, 3, 19, 23, 2, 0, 28, 14, 32, 6, 36, 8, 33, 30, 7, 10, 1, 23, 23, 26, 25, 30, 7, 33, 18, 4, 0, 30, 12, 35};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> roads = {".ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklm", "A.nopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXY", "Bn.ZabcdefghijklmnopqrstuvwxyzABCDEFGHIJ", "CoZ.KLMNOPQRSTUVWXYZabcdefghijklmnopqrst", "DpaK.uvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZabc", "EqbLu.defghijklmnopqrstuvwxyzABCDEFGHIJK", "FrcMvd.LMNOPQRSTUVWXYZabcdefghijklmnopqr", "GsdNweL.stuvwxyzABCDEFGHIJKLMNOPQRSTUVWX", "HteOxfMs.YZabcdefghijklmnopqrstuvwxyzABC", "IufPygNtY.DEFGHIJKLMNOPQRSTUVWXYZabcdefg", "JvgQzhOuZD.hijklmnopqrstuvwxyzABCDEFGHIJ", "KwhRAiPvaEh.KLMNOPQRSTUVWXYZabcdefghijkl", "LxiSBjQwbFiK.mnopqrstuvwxyzABCDEFGHIJKLM", "MyjTCkRxcGjLm.NOPQRSTUVWXYZabcdefghijklm", "NzkUDlSydHkMnN.nopqrstuvwxyzABCDEFGHIJKL", "OAlVEmTzeIlNoOn.MNOPQRSTUVWXYZabcdefghij", "PBmWFnUAfJmOpPoM.klmnopqrstuvwxyzABCDEFG", "QCnXGoVBgKnPqQpNk.HIJKLMNOPQRSTUVWXYZabc", "RDoYHpWChLoQrRqOlH.defghijklmnopqrstuvwx", "SEpZIqXDiMpRsSrPmId.yzABCDEFGHIJKLMNOPQR", "TFqaJrYEjNqStTsQnJey.STUVWXYZabcdefghijk", "UGrbKsZFkOrTuUtRoKfzS.lmnopqrstuvwxyzABC", "VHscLtaGlPsUvVuSpLgATl.DEFGHIJKLMNOPQRST", "WItdMubHmQtVwWvTqMhBUmD.UVWXYZabcdefghij", "XJueNvcInRuWxXwUrNiCVnEU.klmnopqrstuvwxy", "YKvfOwdJoSvXyYxVsOjDWoFVk.zABCDEFGHIJKLM", "ZLwgPxeKpTwYzZyWtPkEXpGWlz.NOPQRSTUVWXYZ", "aMxhQyfLqUxZAazXuQlFYqHXmAN.abcdefghijkl", "bNyiRzgMrVyaBbAYvRmGZrIYnBOa.mnopqrstuvw", "cOzjSAhNsWzbCcBZwSnHasJZoCPbm.xyzABCDEFG", "dPAkTBiOtXAcDdCaxToIbtKapDQcnx.HIJKLMNOP", "eQBlUCjPuYBdEeDbyUpJcuLbqERdoyH.QRSTUVWX", "fRCmVDkQvZCeFfEczVqKdvMcrFSepzIQ.YZabcde", "gSDnWElRwaDfGgFdAWrLewNdsGTfqAJRY.fghijk", "hTEoXFmSxbEgHhGeBXsMfxOetHUgrBKSZf.lmnop", "iUFpYGnTycFhIiHfCYtNgyPfuIVhsCLTagl.qrst", "jVGqZHoUzdGiJjIgDZuOhzQgvJWitDMUbhmq.uvw", "kWHraIpVAeHjKkJhEavPiARhwKXjuENVcinru.xy", "lXIsbJqWBfIkLlKiFbwQjBSixLYkvFOWdjosvx.z", "mYJtcKrXCgJlMmLjGcxRkCTjyMZlwGPXekptwyz."};
    vector<int> queries = {0, 1, 780, 779, 661, 184, 34, 651, 243, 362, 439, 535, 312, 125, 515, 51, 397, 424, 412, 248, 741, 430, 294, 420, 24, 546, 81, 561, 347, 521, 170, 79, 26, 684, 591, 748, 690, 519, 705, 480, 413, 341, 335, 29, 485, 611, 642, 375, 526, 240};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> roads = {".ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklm", "A.nopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXY", "Bn.ZabcdefghijklmnopqrstuvwxyzABCDEFGHIJ", "CoZ.KLMNOPQRSTUVWXYZabcdefghijklmnopqrst", "DpaK.uvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZabc", "EqbLu.defghijklmnopqrstuvwxyzABCDEFGHIJK", "FrcMvd.LMNOPQRSTUVWXYZabcdefghijklmnopqr", "GsdNweL.stuvwxyzABCDEFGHIJKLMNOPQRSTUVWX", "HteOxfMs.YZabcdefghijklmnopqrstuvwxyzABC", "IufPygNtY.DEFGHIJKLMNOPQRSTUVWXYZabcdefg", "JvgQzhOuZD.hijklmnopqrstuvwxyzABCDEFGHIJ", "KwhRAiPvaEh.KLMNOPQRSTUVWXYZabcdefghijkl", "LxiSBjQwbFiK.mnopqrstuvwxyzABCDEFGHIJKLM", "MyjTCkRxcGjLm.NOPQRSTUVWXYZabcdefghijklm", "NzkUDlSydHkMnN.nopqrstuvwxyzABCDEFGHIJKL", "OAlVEmTzeIlNoOn.MNOPQRSTUVWXYZabcdefghij", "PBmWFnUAfJmOpPoM.klmnopqrstuvwxyzABCDEFG", "QCnXGoVBgKnPqQpNk.HIJKLMNOPQRSTUVWXYZabc", "RDoYHpWChLoQrRqOlH.defghijklmnopqrstuvwx", "SEpZIqXDiMpRsSrPmId.yzABCDEFGHIJKLMNOPQR", "TFqaJrYEjNqStTsQnJey.STUVWXYZabcdefghijk", "UGrbKsZFkOrTuUtRoKfzS.lmnopqrstuvwxyzABC", "VHscLtaGlPsUvVuSpLgATl.DEFGHIJKLMNOPQRST", "WItdMubHmQtVwWvTqMhBUmD.UVWXYZabcdefghij", "XJueNvcInRuWxXwUrNiCVnEU.klmnopqrstuvwxy", "YKvfOwdJoSvXyYxVsOjDWoFVk.zABCDEFGHIJKLM", "ZLwgPxeKpTwYzZyWtPkEXpGWlz.NOPQRSTUVWXYZ", "aMxhQyfLqUxZAazXuQlFYqHXmAN.abcdefghijkl", "bNyiRzgMrVyaBbAYvRmGZrIYnBOa.mnopqrstuvw", "cOzjSAhNsWzbCcBZwSnHasJZoCPbm.xyzABCDEFG", "dPAkTBiOtXAcDdCaxToIbtKapDQcnx.HIJKLMNOP", "eQBlUCjPuYBdEeDbyUpJcuLbqERdoyH.QRSTUVWX", "fRCmVDkQvZCeFfEczVqKdvMcrFSepzIQ.YZabcde", "gSDnWElRwaDfGgFdAWrLewNdsGTfqAJRY.fghijk", "hTEoXFmSxbEgHhGeBXsMfxOetHUgrBKSZf.lmnop", "iUFpYGnTycFhIiHfCYtNgyPfuIVhsCLTagl.qrst", "jVGqZHoUzdGiJjIgDZuOhzQgvJWitDMUbhmq.uvw", "kWHraIpVAeHjKkJhEavPiARhwKXjuENVcinru.xy", "lXIsbJqWBfIkLlKiFbwQjBSixLYkvFOWdjosvx.z", "mYJtcKrXCgJlMmLjGcxRkCTjyMZlwGPXekptwyz."};
    vector<int> queries = {0, 1, 780, 779, 349, 156, 386, 91, 416, 768, 652, 691, 102, 121, 16, 167, 656, 279, 296, 440, 673, 354, 519, 136, 650, 647, 394, 706, 601, 466, 382, 513, 142, 356, 587, 143, 344, 666, 362, 380, 274, 350, 32, 325, 413, 204, 619, 257, 336, 329};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> roads = {".AAAAAAAAAAAAAAAAAAAUVWXYZabcdefghijklmn", "A.BBBBBBBBBBBBBBBBBBBVWXYZabcdefghijklmn", "AB.CCCCCCCCCCCCCCCCCCCWXYZabcdefghijklmn", "ABC.DDDDDDDDDDDDDDDDDDDXYZabcdefghijklmn", "ABCD.EEEEEEEEEEEEEEEEEEEYZabcdefghijklmn", "ABCDE.FFFFFFFFFFFFFFFFFFFZabcdefghijklmn", "ABCDEF.GGGGGGGGGGGGGGGGGGGabcdefghijklmn", "ABCDEFG.HHHHHHHHHHHHHHHHHHHbcdefghijklmn", "ABCDEFGH.IIIIIIIIIIIIIIIIIIIcdefghijklmn", "ABCDEFGHI.JJJJJJJJJJJJJJJJJJJdefghijklmn", "ABCDEFGHIJ.KKKKKKKKKKKKKKKKKKKefghijklmn", "ABCDEFGHIJK.LLLLLLLLLLLLLLLLLLLfghijklmn", "ABCDEFGHIJKL.MMMMMMMMMMMMMMMMMMMghijklmn", "ABCDEFGHIJKLM.NNNNNNNNNNNNNNNNNNNhijklmn", "ABCDEFGHIJKLMN.OOOOOOOOOOOOOOOOOOOijklmn", "ABCDEFGHIJKLMNO.PPPPPPPPPPPPPPPPPPPjklmn", "ABCDEFGHIJKLMNOP.QQQQQQQQQQQQQQQQQQQklmn", "ABCDEFGHIJKLMNOPQ.RRRRRRRRRRRRRRRRRRRlmn", "ABCDEFGHIJKLMNOPQR.SSSSSSSSSSSSSSSSSSSmn", "ABCDEFGHIJKLMNOPQRS.TTTTTTTTTTTTTTTTTTTy", "UBCDEFGHIJKLMNOPQRST.UUUUUUUUUUUUUUUUUUy", "VVCDEFGHIJKLMNOPQRSTU.VVVVVVVVVVVVVVVVVy", "WWWDEFGHIJKLMNOPQRSTUV.WWWWWWWWWWWWWWWWy", "XXXXEFGHIJKLMNOPQRSTUVW.XXXXXXXXXXXXXXXy", "YYYYYFGHIJKLMNOPQRSTUVWX.YYYYYYYYYYYYYYy", "ZZZZZZGHIJKLMNOPQRSTUVWXY.ZZZZZZZZZZZZZy", "aaaaaaaHIJKLMNOPQRSTUVWXYZ.aaaaaaaaaaaay", "bbbbbbbbIJKLMNOPQRSTUVWXYZa.bbbbbbbbbbby", "cccccccccJKLMNOPQRSTUVWXYZab.ccccccccccy", "ddddddddddKLMNOPQRSTUVWXYZabc.dddddddddy", "eeeeeeeeeeeLMNOPQRSTUVWXYZabcd.eeeeeeeey", "ffffffffffffMNOPQRSTUVWXYZabcde.fffffffy", "gggggggggggggNOPQRSTUVWXYZabcdef.ggggggy", "hhhhhhhhhhhhhhOPQRSTUVWXYZabcdefg.hhhhhy", "iiiiiiiiiiiiiiiPQRSTUVWXYZabcdefgh.iiiiy", "jjjjjjjjjjjjjjjjQRSTUVWXYZabcdefghi.jjjy", "kkkkkkkkkkkkkkkkkRSTUVWXYZabcdefghij.kky", "llllllllllllllllllSTUVWXYZabcdefghijk.ly", "mmmmmmmmmmmmmmmmmmmTUVWXYZabcdefghijkl.y", "nnnnnnnnnnnnnnnnnnnyyyyyyyyyyyyyyyyyyyy."};
    vector<int> queries = {0, 1, 780, 779, 141, 767, 463, 570, 125, 431, 154, 612, 688, 232, 701, 424, 714, 565, 267, 301, 129, 369, 527, 17, 172, 621, 711, 693, 310, 7, 295, 484, 562, 528, 708, 122, 363, 5, 41, 44, 63, 355, 307, 625, 108, 641, 418, 529, 488, 206};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> roads = {".A.............C........................", "A..............B........................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "CB......................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................"};
    vector<int> queries = {0, 1, 3, 2};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 0, 15};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> roads = {".A.............C........................", "A..............B........................", "........................................", "........................................", "........................................", "........................................", "...............A....................B...", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "CB....A.............................C...", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "......B........C........................", "........................................", "........................................", "........................................"};
    vector<int> queries = {0, 1, 6, 5, 2, 3, 4};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 0, 15, 15, 36, 6};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> roads = {".A.............C........................", "A..............B........................", "........................................", "........................................", "........................................", "........................................", "...............A....................B...", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "CB....A.............................C...", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", ".........................B..........A...", "........................................", "........................................", "......................B.............C...", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "......B........C......A..C..............", "........................................", "........................................", "........................................"};
    vector<int> queries = {0, 1, 9, 8, 4, 5, 6, 7, 3, 2};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 0, 15, 22, 25, 36, 6, 36, 15};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> roads = {".A.............C........................", "A..............B........................", "........................................", "........................................", "........................................", "........................................", "...............A....................B...", "........................................", "..............B..........C..............", "........................................", "........................................", "........................................", "........................................", "........................................", "........B................A..............", "CB....A.............................C...", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", ".........................B..........A...", "........................................", "........................................", "........C.....A.......B.............C...", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "......B........C......A..C..............", "........................................", "........................................", "........................................"};
    vector<int> queries = {0, 1, 12, 11, 6, 9, 3, 4, 5, 2, 7, 8, 10};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 0, 15, 8, 36, 36, 22, 25, 15, 14, 25, 6};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> roads = {".A.............C........................", "A..............B........................", "........................................", "........................................", "........................................", "........................................", "...............A....................B...", "........................................", ".............CB..........CA.............", "........................................", "........................................", "........................................", "........................................", "........C.................B.............", "........B................A..............", "CB....A.............................C...", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", ".........................B..........A...", "........................................", "........................................", "........C.....A.......B.............C...", "........A....B..........................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "......B........C......A..C..............", "........................................", "........................................", "........................................"};
    vector<int> queries = {0, 1, 15, 14, 13, 8, 6, 12, 3, 7, 5, 2, 10, 9, 4, 11};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 0, 15, 6, 13, 8, 36, 36, 26, 25, 15, 14, 8, 22, 25};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> roads = {".A.............C........................", "A..............B........................", "........................................", "........................................", "........................................", "........................................", "...............A....................B...", "........................................", ".............CB..........CA.............", "........................................", "........................................", "........................................", "........................................", "........C.......C.........B.......A.....", "........B................A..............", "CB....A.............................C...", ".............C....................B.....", "........................................", "........................................", "........................................", "........................................", "........................................", ".........................B..........A...", "........................................", "........................................", "........C.....A.......B.............C...", "........A....B..........................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", ".............A..B.......................", "........................................", "......B........C......A..C..............", "........................................", "........................................", "........................................"};
    vector<int> queries = {0, 1, 18, 17, 16, 12, 5, 2, 15, 3, 8, 9, 11, 6, 14, 13, 7, 10, 4};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 0, 15, 6, 8, 25, 15, 36, 36, 13, 16, 13, 8, 25, 14, 26, 34, 22};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> roads = {".A.............C........................", "A..............B........................", "........................................", "........................................", "........................................", "........................................", "...............A....................B...", "................A......B................", ".............CB..........CA.............", "........................................", "........................................", "........................................", "........................................", "........C.......C.........B.......A.....", "........B................A..............", "CB....A.............................C...", ".......A.....C.........C..........B.....", "........................................", "........................................", "........................................", "........................................", "........................................", ".........................B..........A...", ".......B........C.......................", "........................................", "........C.....A.......B.............C...", "........A....B..........................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", ".............A..B.......................", "........................................", "......B........C......A..C..............", "........................................", "........................................", "........................................"};
    vector<int> queries = {0, 1, 21, 20, 17, 9, 2, 14, 3, 11, 4, 12, 19, 15, 13, 18, 8, 5, 16, 7, 6, 10};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 0, 15, 25, 16, 15, 13, 36, 23, 22, 16, 6, 8, 34, 36, 13, 25, 14, 26, 8, 7};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> roads = {".A.............C........................", "A..............B........................", "........................................", "........................................", "........................................", "........................................", "...............A....................B...", "................A......B................", ".............CB..........CA.............", "........................................", "........................................", "........................................", "........................................", "........C.......C.........B.......A.....", "........B................A..............", "CB....A.............................C...", ".......A.....C.........C..........B.....", "........................................", "........................................", "........................................", "........................................", "........................................", ".........................B..........A...", ".......B........C............A.......C..", "........................................", "........C.....A.......B.............C...", "........A....B..........................", "........................................", "........................................", ".......................A.............B..", "........................................", "........................................", "........................................", "........................................", ".............A..B.......................", "........................................", "......B........C......A..C..............", ".......................C.....B..........", "........................................", "........................................"};
    vector<int> queries = {0, 1, 24, 23, 10, 2, 12, 20, 4, 21, 15, 19, 7, 8, 9, 3, 5, 6, 13, 18, 22, 11, 17, 16, 14};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 0, 15, 7, 15, 37, 25, 22, 36, 16, 14, 26, 13, 16, 36, 25, 8, 29, 8, 6, 23, 13, 34, 23};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> roads = {".A.............C........................", "A..............B........................", "........................................", "........................................", "...................B.................C..", "........................................", "...............A....................B...", "................A......B................", ".............CB..........CA.............", "........................................", "........................................", "........................................", "........................................", "........C.......C.........B.......A.....", "........B................A..............", "CB....A.............................C...", ".......A.....C.........C..........B.....", "........................................", "........................................", "....B................................A..", "........................................", "........................................", ".........................B..........A...", ".......B........C............A.......C..", "........................................", "........C.....A.......B.............C...", "........A....B..........................", "........................................", "........................................", ".......................A.............B..", "........................................", "........................................", "........................................", "........................................", ".............A..B.......................", "........................................", "......B........C......A..C..............", "....C..............A...C.....B..........", "........................................", "........................................"};
    vector<int> queries = {0, 1, 27, 26, 20, 22, 5, 7, 14, 6, 18, 4, 23, 25, 15, 8, 17, 11, 12, 2, 10, 13, 19, 16, 24, 9, 3, 21};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 0, 15, 13, 14, 25, 26, 4, 8, 16, 22, 25, 6, 37, 13, 23, 23, 37, 15, 7, 19, 34, 29, 36, 16, 36, 8};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> roads = {".A.............C........................", "A..............B........................", "........................................", "........................................", ".........A.........B..........C......C..", "........................................", "...............A....................B...", "................A......B................", ".............CB..........CA.............", "....A.........................B.........", "........................................", "........................................", "........................................", "........C.......C.........B.......A.....", "........B................A..............", "CB....A.............................C...", ".......A.....C.........C..........B.....", "........................................", "........................................", "....B................................A..", "........................................", "........................................", ".........................B..........A...", ".......B........C............A.......C..", "........................................", "........C.....A.......B.............C...", "........A....B..........................", "........................................", "........................................", ".......................A.............B..", "....C....B..............................", "........................................", "........................................", "........................................", ".............A..B.......................", "........................................", "......B........C......A..C..............", "....C..............A...C.....B..........", "........................................", "........................................"};
    vector<int> queries = {0, 1, 30, 29, 24, 13, 3, 20, 5, 12, 4, 16, 10, 11, 7, 15, 22, 26, 17, 23, 25, 2, 6, 18, 14, 27, 9, 28, 8, 21, 19};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 0, 15, 8, 19, 36, 23, 25, 37, 22, 9, 7, 23, 26, 30, 34, 25, 4, 13, 14, 15, 8, 37, 4, 36, 16, 6, 13, 16, 29};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> roads = {".A.............C........................", "A..............B........................", "........................................", "........................................", ".........A.........B..........C......C..", "........................................", "...............A....................B...", "................A......B................", ".............CB..........CA.............", "....A.........................B.........", "........................................", ".................B............C.........", "........................................", "........C.......C.........B.......A.....", "........B................A..............", "CB....A.............................C...", ".......A.....C.........C..........B.....", "...........B..................A.........", "........................................", "....B................................A..", "........................................", "........................................", ".........................B..........A...", ".......B........C............A.......C..", "........................................", "........C.....A.......B.............C...", "........A....B..........................", "........................................", "........................................", ".......................A.............B..", "....C....B.C.....A......................", "........................................", "........................................", "........................................", ".............A..B.......................", "........................................", "......B........C......A..C..............", "....C..............A...C.....B..........", "........................................", "........................................"};
    vector<int> queries = {0, 1, 33, 32, 5, 2, 9, 10, 8, 11, 22, 19, 23, 28, 3, 25, 29, 7, 13, 27, 26, 17, 21, 20, 12, 18, 4, 15, 31, 6, 16, 30, 24, 14};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 0, 15, 25, 15, 16, 7, 13, 23, 29, 9, 23, 14, 36, 34, 25, 26, 19, 8, 13, 11, 37, 4, 37, 30, 22, 30, 6, 8, 17, 36, 16, 4};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> roads = {".A.............C........................", "A..............B........................", "........................................", "........................................", ".........A.........B..........C......C..", "........................................", "...............A....................B...", "................A......B................", ".............CB..........CA.............", "....A.........................B.........", "........................................", ".................B...C........C..A......", "........................................", "........C.......C.........B.......A.....", "........B................A..............", "CB....A.............................C...", ".......A.....C.........C..........B.....", "...........B..................A.........", "........................................", "....B................................A..", "........................................", "...........C.....................B......", ".........................B..........A...", ".......B........C............A.......C..", "........................................", "........C.....A.......B.............C...", "........A....B..........................", "........................................", "........................................", ".......................A.............B..", "....C....B.C.....A......................", "........................................", "........................................", "...........A.........B..................", ".............A..B.......................", "........................................", "......B........C......A..C..............", "....C..............A...C.....B..........", "........................................", "........................................"};
    vector<int> queries = {0, 1, 36, 35, 30, 11, 20, 5, 16, 12, 18, 25, 4, 21, 22, 23, 8, 7, 24, 10, 9, 3, 15, 2, 28, 32, 6, 33, 34, 17, 14, 13, 27, 26, 31, 19, 29};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 0, 15, 8, 23, 11, 25, 17, 37, 21, 29, 22, 30, 9, 4, 13, 26, 37, 7, 16, 36, 30, 15, 34, 25, 8, 36, 6, 11, 4, 19, 16, 23, 14, 33, 13};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> roads = {".A.............C........................", "A..............B........................", "........................................", "........................................", ".........A.........B..........C......C..", "........................................", "...............A....................B...", "................A......B................", ".............CB..........CA.............", "....A.........................B.........", "........................................", ".................B...C........C..A......", "........................................", "........C.......C.........B.......A.....", "........B................A..............", "CB....A.............................C...", ".......A.....C.........C..........B.....", "...........B..................A.........", ".....................A......B...........", "....B................................A..", "........................................", "...........C......A.........C....B......", ".........................B..........A...", ".......B........C............A.......C..", "........................................", "........C.....A.......B.............C...", "........A....B..........................", "........................................", "..................B..C..................", ".......................A.............B..", "....C....B.C.....A......................", "........................................", "........................................", "...........A.........B..................", ".............A..B.......................", "........................................", "......B........C......A..C..............", "....C..............A...C.....B..........", "........................................", "........................................"};
    vector<int> queries = {0, 1, 39, 38, 11, 32, 20, 35, 17, 9, 6, 2, 12, 23, 31, 18, 15, 33, 37, 22, 3, 7, 36, 29, 28, 5, 34, 26, 25, 27, 13, 19, 4, 16, 8, 24, 10, 30, 14, 21};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 0, 15, 23, 13, 28, 25, 11, 16, 8, 15, 37, 11, 34, 21, 30, 8, 6, 33, 36, 26, 36, 23, 29, 25, 14, 4, 9, 37, 19, 18, 22, 17, 13, 30, 7, 16, 4, 21};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> roads = {".A.............C........................", "A..............B........................", "........................................", "........................................", ".........A.........B..........C......C..", "........................................", "...............A....................B...", "................A......B................", ".............CB..........CA.............", "....A.........................B.........", "............................C......B....", ".................B...C........C..A......", "........................................", "........C.......C.........B.......A.....", "........B................A..............", "CB....A.............................C...", ".......A.....C.........C..........B.....", "...........B..................A.........", ".....................A......B...........", "....B................................A..", "........................................", "...........C......A.........C....B......", ".........................B..........A...", ".......B........C............A.......C..", "........................................", "........C.....A.......B.............C...", "........A....B..........................", "........................................", "..........C.......B..C.............A....", ".......................A.............B..", "....C....B.C.....A......................", "........................................", "........................................", "...........A.........B..................", ".............A..B.......................", "..........B.................A...........", "......B........C......A..C..............", "....C..............A...C.....B..........", "........................................", "........................................"};
    vector<int> queries = {0, 1, 42, 41, 34, 38, 20, 37, 29, 6, 10, 25, 21, 9, 39, 22, 15, 13, 31, 8, 26, 24, 12, 30, 19, 33, 32, 40, 17, 4, 14, 27, 3, 23, 28, 7, 11, 5, 35, 2, 16, 36, 18};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 0, 15, 34, 25, 28, 14, 4, 8, 7, 33, 10, 16, 36, 35, 30, 19, 29, 13, 11, 21, 37, 37, 18, 16, 23, 6, 11, 22, 4, 30, 36, 28, 9, 26, 23, 25, 13, 15, 17, 8, 21};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> roads = {".A.............C........................", "A..............B........................", "........................................", "..........A.B...........................", ".........A.........B..........C......C..", "........................................", "...............A....................B...", "................A......B................", ".............CB..........CA.............", "....A.........................B.........", "...A........C...............C......B....", ".................B...C........C..A......", "...B......C.............................", "........C.......C.........B.......A.....", "........B................A..............", "CB....A.............................C...", ".......A.....C.........C..........B.....", "...........B..................A.........", ".....................A......B...........", "....B................................A..", "........................................", "...........C......A.........C....B......", ".........................B..........A...", ".......B........C............A.......C..", "........................................", "........C.....A.......B.............C...", "........A....B..........................", "........................................", "..........C.......B..C.............A....", ".......................A.............B..", "....C....B.C.....A......................", "........................................", "........................................", "...........A.........B..................", ".............A..B.......................", "..........B.................A...........", "......B........C......A..C..............", "....C..............A...C.....B..........", "........................................", "........................................"};
    vector<int> queries = {0, 1, 45, 44, 15, 9, 3, 14, 39, 32, 10, 27, 30, 18, 31, 11, 37, 4, 6, 35, 21, 22, 23, 5, 16, 38, 20, 29, 12, 17, 43, 24, 8, 19, 42, 33, 2, 7, 41, 25, 28, 13, 34, 36, 40, 26};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 0, 15, 30, 16, 36, 4, 8, 4, 7, 21, 30, 21, 9, 23, 34, 22, 8, 23, 10, 3, 12, 25, 17, 13, 28, 11, 37, 11, 6, 10, 13, 18, 36, 37, 15, 26, 25, 35, 33, 19, 29, 16, 14, 28};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> roads = {".A.............C........................", "A..............B........................", "............C..................B........", "..........A.B...........................", ".........A.........B..........C......C..", "........................................", "...............A....................B...", "................A......B................", ".............CB..........CA.............", "....A.........................B.........", "...A........C...............C......B....", ".................B...C........C..A......", "..CB......C....................A........", "........C.......C.........B.......A.....", "........B................A..............", "CB....A.............................C...", ".......A.....C.........C..........B.....", "...........B..................A.........", ".....................A......B...........", "....B................................A..", "........................................", "...........C......A.........C....B......", ".........................B..........A...", ".......B........C............A.......C..", "........................................", "........C.....A.......B.............C...", "........A....B..........................", "........................................", "..........C.......B..C.............A....", ".......................A.............B..", "....C....B.C.....A......................", "..B.........A...........................", "........................................", "...........A.........B..................", ".............A..B.......................", "..........B.................A...........", "......B........C......A..C..............", "....C..............A...C.....B..........", "........................................", "........................................"};
    vector<int> queries = {0, 1, 48, 47, 4, 8, 12, 21, 24, 46, 42, 6, 28, 20, 43, 19, 38, 34, 25, 3, 29, 44, 45, 33, 7, 16, 40, 36, 32, 2, 23, 9, 17, 37, 5, 27, 14, 10, 31, 15, 35, 13, 30, 41, 18, 11, 26, 39, 22};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 0, 15, 22, 13, 37, 10, 2, 6, 8, 8, 35, 28, 14, 18, 23, 9, 31, 36, 28, 25, 36, 30, 26, 17, 34, 37, 11, 15, 12, 16, 11, 29, 25, 10, 4, 7, 33, 30, 4, 19, 21, 13, 21, 23, 12, 16, 3};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> roads = {".A.............C........................", "A..............B........................", ".....A......C..................BC.......", "..........A.B...........................", ".........A.........B..........C......C..", "..A.............................B.......", "...............A....................B...", "................A......B................", ".............CB..........CA.............", "....A.........................B.........", "...A........C...............C......B....", ".................B...C........C..A......", "..CB......C....................A........", "........C.......C.........B.......A.....", "........B................A..............", "CB....A.............................C...", ".......A.....C.........C..........B.....", "...........B..................A.........", ".....................A......B...........", "....B................................A..", "........................................", "...........C......A.........C....B......", ".........................B..........A...", ".......B........C............A.......C..", "........................................", "........C.....A.......B.............C...", "........A....B..........................", "........................................", "..........C.......B..C.............A....", ".......................A.............B..", "....C....B.C.....A......................", "..B.........A...........................", "..C..B..................................", "...........A.........B..................", ".............A..B.......................", "..........B.................A...........", "......B........C......A..C..............", "....C..............A...C.....B..........", "........................................", "........................................"};
    vector<int> queries = {0, 1, 51, 50, 48, 15, 45, 18, 42, 34, 32, 30, 25, 44, 2, 36, 40, 6, 31, 14, 3, 41, 28, 49, 35, 21, 13, 11, 29, 26, 4, 38, 37, 8, 33, 27, 19, 23, 9, 24, 7, 39, 43, 46, 16, 12, 10, 20, 22, 47};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 0, 15, 36, 30, 8, 21, 16, 33, 28, 10, 5, 13, 15, 30, 29, 8, 35, 4, 36, 23, 31, 6, 11, 10, 19, 23, 12, 32, 22, 4, 9, 13, 21, 2, 18, 12, 16, 2, 26, 37, 34, 14, 17, 37, 7, 28, 3, 25};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> roads = {".A.............C........................", "A..............B........................", ".....A......C..................BC.......", "..........A.B...........................", ".........A.........B..........C......C..", "..A.............................B.......", "...............A....................B...", "................A......B................", ".............CB..........CA.............", "....A.........................B.........", "...A........C...............C......B....", ".................B...C........C..A......", "..CB......C....................A........", "........C.......C.........B.......A.....", "........B................A..............", "CB....A.............................C...", ".......A.....C.........C..........B.....", "...........B..................A.........", ".....................A......B...........", "....B................................A..", "........................................", "...........C......A.........C....B......", ".........................B..........A...", ".......B........C............A.......C..", "................................C......B", "........C.....A.......B.............C...", "........A....B..........................", "........................................", "..........C.......B..C.............A....", ".......................A.............B..", "....C....B.C.....A......................", "..B.........A...........................", "..C..B..................C..............A", "...........A.........B..................", ".............A..B.......................", "..........B.................A...........", "......B........C......A..C..............", "....C..............A...C.....B..........", "........................................", "........................B.......A......."};
    vector<int> queries = {0, 1, 54, 53, 14, 51, 9, 12, 8, 27, 40, 2, 37, 45, 20, 24, 29, 34, 44, 26, 6, 47, 7, 23, 30, 52, 39, 16, 50, 35, 25, 21, 31, 18, 22, 33, 11, 38, 5, 13, 42, 48, 36, 28, 4, 49, 15, 17, 41, 46};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 0, 15, 4, 36, 16, 37, 13, 24, 9, 15, 33, 16, 28, 2, 32, 35, 23, 32, 8, 13, 26, 12, 2, 6, 30, 17, 25, 28, 5, 10, 31, 21, 3, 10, 23, 11, 25, 19, 37, 8, 21, 39, 22, 14, 30, 11, 4, 34};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> roads = {".A.............C........................", "A..............B........................", ".....A......C..................BC.......", "..........A.B...........................", ".........A.........B..........C......C..", "..A.............................B.......", "...............A....................B...", "................A......B................", ".............CB..........CA.............", "....A.........................B.........", "...A........C...............C......B....", ".................B...C........C..A......", "..CB......C....................A........", "........C.......C.........B.......A.....", "........B................A..............", "CB....A.............................C...", ".......A.....C.........C..........B.....", "...........B..................A.........", ".....................A......B...........", "....B................................A..", "........................C.............B.", "...........C......A.........C....B......", ".........................B..........A...", ".......B........C............A.......C..", "....................C...........C.....AB", "........C.....A.......B.............C...", "........A....B..........................", "........................................", "..........C.......B..C.............A....", ".......................A.............B..", "....C....B.C.....A......................", "..B.........A...........................", "..C..B..................C..............A", "...........A.........B..................", ".............A..B.......................", "..........B.................A...........", "......B........C......A..C..............", "....C..............A...C.....B..........", "....................B...A...............", "........................B.......A......."};
    vector<int> queries = {0, 1, 57, 56, 39, 19, 20, 6, 27, 10, 32, 49, 37, 11, 46, 8, 12, 54, 36, 38, 25, 33, 21, 30, 18, 52, 15, 42, 26, 13, 41, 28, 51, 3, 29, 23, 17, 35, 16, 24, 31, 9, 14, 50, 22, 34, 4, 40, 48, 55};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 0, 15, 21, 18, 28, 8, 24, 7, 32, 34, 35, 23, 29, 13, 37, 36, 10, 28, 5, 2, 10, 24, 21, 14, 30, 30, 32, 19, 11, 38, 8, 36, 20, 12, 11, 12, 17, 2, 39, 16, 4, 13, 3, 31, 22, 33, 16, 6};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> roads = {".Z", "Z."};
    vector<int> queries = {0, 1};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> roads = {".A", "A."};
    vector<int> queries = {0, 1};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> roads = {".A.", "A.B", ".B."};
    vector<int> queries = {0, 1, 2};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> roads = {".AA", "A.B", "AB."};
    vector<int> queries = {0, 1, 3, 2};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 0, 2};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> roads = {".B.A", "B.A.", ".A..", "A..."};
    vector<int> queries = {0, 1, 3, 2};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> roads = {"....", "....", "...D", "..D."};
    vector<int> queries = {0, 1};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> roads = {"..D.", "....", "D..D", "..D."};
    vector<int> queries = {0, 1, 2};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> roads = {"..DD", "....", "D..D", "D.D."};
    vector<int> queries = {0, 1, 3, 2};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> roads = {"..DD", "....", "D..D", "D.D."};
    vector<int> queries = {0, 1, 3, 2};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> roads = {".AAAB.A", "A.BBABA", "AB.BAAB", "ABB.BAA", "BAAB.AB", ".BAAA.B", "AABABB."};
    vector<int> queries = {0, 1, 20, 19, 10, 5, 2, 13, 12, 9, 7, 4, 16, 14, 11, 8, 18, 17, 6, 3, 15};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> roads = {".ABABAA", "A.ABABB", "BA.ABBA", "ABA.ABB", "BABA.AB", "ABBBA.A", "ABABBA."};
    vector<int> queries = {0, 1, 21, 20, 6, 3, 7, 9, 16, 2, 8, 11, 14, 19, 18, 5, 13, 12, 4, 17, 15, 10};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 0, 6, 5, 0, 0, 1, 6, 3, 4, 2, 5, 3, 2, 1, 3, 4, 2, 5, 4, 6};
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> roads = {".AAABABAABAABBBBBBBABBAABAABABAAAAABBAB", "A.BABAAAAABBBBAAAABABAABAAABBBABBABBBBB", "AB.AABABAABBAABABBAABABABBBAAAABBBBBBAA", "AAA.ABBBA.AA.ABABBBABBBBABAABBBBAAABABA", "BBAA.BAABBBBAABAAAAABBBABABABBAAAABABBB", "AABBB.ABBBABBBBBABAABBAAAAAAAABABBABAAB", "BAABAA.ABAAABAABAABBBABBABBBBAAABBBBAAB", "AABBABA.BAABABAABAABABAABBBBBBBAAABABAB", "AAAABBBB.BBAABABBAABABAAAAABBBBBABBAAAB", "BAA.BBAAB.BBBB.BAAABABAABBAABABBBAAABAA", "ABBABAAABB.ABBBABBBAABABAABABAAABBBBAAA", "ABBABBABABA.AAABBAABBBBABBAABBAAAAAABBB", "BBA.ABBAABBA.AB.ABBAAABBABABBABABAABABA", "BBAAABABBBBAA.BBBBBAAABBAAABABAABABABAA", "BABBBBAAA.BABB.BAABAABAAABBAAAABBBABBA.", "BAAAABBABBAB.BB.BB.BBBABBAAA.ABAAAAABA.", "BABBAAABBABBABAB.BAABAABBBABABABAAAAABB", "BABBABAAAABABBABB.BAAAABABBABABAABABBBA", "BBABAABAAABABBB.AB.AAA.ABAABABBABBBAABB", "AAAAAABBBBABAAABAAA.BBAABBABBBBBBBBBAAA", "BBBBBBBAAAABAAABBAAB.ABABBBBAAABABAABAA", "BAABBBABBBBBAABBAAABA.BBABBABABAAABAAAA", "AABBBABAAAABBBAAAA.ABB.AAAB.ABABBBABBBB", "ABABAABAAABABBABBBAAABA.BAABBBBBBBAAABA", "BABABAABABABAAABBABBBAAB.BBAABABABAABBA", "AABBAABBABABBABABBABBBAAB.ABAAABBABAABA", "AABABABBAABAAABAABAABBBABA.BBABB.AABBBA", "BBAAAABBBAAABBAABABBBA.BABB.ABBAAABABA.", "ABABBABBBBBBBAA.ABABABABAABA.BAAAAABBA.", "BBABBAABBAABABAABABBAABBBAABB.AAABBAABA", "AAABABABBBAABAABABBBABABAABBAA.BBBABABA", "ABBBAAAABBAAAABABAABBABBBBBAAAB.BABAABB", "ABBAABBAABBABBBAAABBAABBAB.AAABB.BABAAA", "AABAABBABABAAABAABBBBABBBAAAABBAB.BAABB", "ABBABABBBABAABAAAABBABAAABABABABAB.BBAB", "BBBBABBAAABABABAABABAABAAABABABABAB.ABB", "BBBABAABABABABBBABAABABABABBBAAAAABA.AB", "ABABBAAAAAABBAAABBBAAABBBBBAABBBABABA.B", "BBAABBBBBAABAA..BABAAABAAAA..AABABBBBB."};
    vector<int> queries = {0, 1, 728, 727, 279, 658, 713, 597, 78, 54, 694, 123, 193, 399, 315, 377, 291, 505, 627, 319, 256, 142, 232, 444, 662, 67, 619, 429, 639, 400, 68, 307, 657, 166, 447, 450, 714, 720, 723, 272, 381, 306, 5, 612, 629, 332, 338, 238, 704, 415};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> roads = {".AAABAAAAAABAAABABBBBBBBAABBBAABAABBABB", "A.BBABBBBBAAABAABAAAABAABAABABBBAABABBB", "AB.BABBAABAABBABABBBBBA.BAAAAAB.BAABBAA", "ABB.ABAABBBAB.BABBABBAA..BAAAAAAAB.ABBB", "BAAA.BABAABBBBA.ABAAABAABABBBABB.ABBAAB", "ABBBB.AAAAAAAABBBBBAABAA.BBBBBAAAB.BBAA", "ABBAAA.BBBAAABBBBBAAAAABBBAAAABBABABBBA", "ABAABAB.BAABAAABBAABBBB.ABBAAABABAB.ABB", "ABABAABB.AAAAABBBABABBABBABBBBABAAABBAA", "ABBBAABAA.BBBAABABBAABABABABBABABBAAABA", "AAABBAAAAB.BBABBABBBABBAABBBBAABAAAABBA", "BAAABAABABB.BBBAABB.ABBAABBAABBA.AABABA", "AABBBAAAABBB.BABAABAAAABBA.BABABBA.BBAB", "ABB.BABAAAABB.BAAAABBABAABBAABA.BBABABB", "AAABABBABABBAB.ABAABABABBAABAABABBABABB", "BABA.BBBBBBABAA.AABABABAB.A.ABA.ABAABAB", "ABABABBBBAAAAABA.BBBABABBAABBAABBBBAAAA", "BABBBBBAABBBAAAAB.ABBBAABABBABBABAAAAAA", "BABAABAABBBBBAABBA.BBBABAAAAAABABBBBAAA", "BABBAAABAAB.ABBABBB.AABBB.A.AABAABB.AAB", "BABBAAABBAAAABABABBA.ABA.AAABBBBABB.ABB", "BBBABBABBBBBAABABBBAA.BAAA.BAAAABAA.AAB", "BAAAAAABAABBABABAAABBB.ABABABBBABBBAABB", "BA..AAB.BBAABABABABBAAA.BBBABBAA.BAABAB", "ABB.B.BABAAABABBBBAB.ABB..ABAAABBABAAAA", "AAABABBBABBBABA.AAA.AAAB..BABBB.DAAB.BB", "BAAABBABBABB.BAAABAAA.BBAB.ABABABABBBAA", "BBAABBAABBBABAB.BBA.ABAABAA.BAAAAB.A.BB", "BAAABBAABBBAAAAABAAABABBABBB.BABBBBAABA", "ABAAABAABAABBBABABAABABBABAAB.BABAABBBB", "ABBABABBABABAABAABBBBABAABBAAB.BAAABBAA", "BB.ABABABABAB.A.BAAABAAAB.AABAB.BBBABBA", "AABA.AABABA.BBBABBBAABB.BDBABBAB.AAAABA", "AAABABBAABAAABBBBABBBABBAAABBAABA.BABAB", "BBA.B.ABAAAA.AAABABBBABABAB.BAABAB.BBAB", "BABABBB.BAABBBBAAAB...AAABBAABBAAAB.BAA", "ABBBABBABABABAABAAAAAAABA.B.ABBBABBB.BA", "BBABAABBABBBABBAAAAABABAABABBBABBAAAB.A", "BBABBAABAAAABBBBAAABBBBBABABABAAABBAAA."};
    vector<int> queries = {0, 1, 708, 707, 591, 293, 65, 255, 199, 362, 560, 270, 53, 523, 372, 375, 429, 201, 406, 442, 659, 595, 437, 163, 190, 381, 494, 25, 211, 351, 303, 535, 90, 17, 696, 412, 570, 446, 640, 614, 266, 229, 609, 191, 508, 557, 530, 339, 365, 580};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> roads = {".AAABAAAAAABAAABABBBBBBBAABBBAABAABBABB", "A.BBABBBBBAAABAABAAAABAABAABABBBAABABBB", "AB.BABBAABAABBABABBBBBA.BAAAAAB.BAABBAA", "ABB.ABAABBBAB.BABBABBAA..BAAAAAAAB.ABBB", "BAAA.BABAABBBBA.ABAAABAABABBBABB.ABBAAB", "ABBBB.AAAAAAAABBBBBAABAA.BBBBBAAAB.BBAA", "ABBAAA.BBBAAABBBBBAAAAABBBAAAABBABABBBA", "ABAABAB.BAABAAABBAABBBB.ABBAAABABAB.ABB", "ABABAABB.AAAAABBBABABBABBABBBBABAAABBAA", "ABBBAABAA.BBBAABABBAABABABABBABABBAAABA", "AAABBAAAAB.BBABBABBBABBAABBBBAABAAAABBA", "BAAABAABABB.BBBAABB.ABBAABBAABBA.AABABA", "AABBBAAAABBB.BABAABAAAABBA.BABABBA.BBAB", "ABB.BABAAAABB.BAAAABBABAABBAABA.BBABABB", "AAABABBABABBAB.ABAABABABBAABAABABBABABB", "BABA.BBBBBBABAA.AABABABABDA.ABA.ABAABAB", "ABABABBBBAAAAABA.BBBABABBAABBAABBBBAAAA", "BABBBBBAABBBAAAAB.ABBBAABABBABBABAAAAAA", "BABAABAABBBBBAABBA.BBBABAAAAAABABBBBAAA", "BABBAAABAAB.ABBABBB.AABBB.A.AABAABB.AAB", "BABBAAABBAAAABABABBA.ABA.AAABBBBABB.ABB", "BBBABBABBBBBAABABBBAA.BAAA.BAAAABAA.AAB", "BAAAAAABAABBABABAAABBB.ABABABBBABBBAABB", "BA..AAB.BBAABABABABBAAA.BBBABBAA.BAABAB", "ABB.B.BABAAABABBBBAB.ABB..ABAAABBABAAAA", "AAABABBBABBBABADAAA.AAAB..BABBB.DAAB.BB", "BAAABBABBABB.BAAABAAA.BBAB.ABABABABBBAA", "BBAABBAABBBABAB.BBA.ABAABAA.BAAAAB.A.BB", "BAAABBAABBBAAAAABAAABABBABBB.BABBBBAABA", "ABAAABAABAABBBABABAABABBABAAB.BABAABBBB", "ABBABABBABABAABAABBBBABAABBAAB.BAAABBAA", "BB.ABABABABAB.A.BAAABAAAB.AABAB.BBBABBA", "AABA.AABABA.BBBABBBAABB.BDBABBAB.AAAABA", "AAABABBAABAAABBBBABBBABBAAABBAABA.BABAB", "BBA.B.ABAAAA.AAABABBBABABAB.BAABAB.BBAB", "BABABBB.BAABBBBAAAB...AAABBAABBAAAB.BAA", "ABBBABBABABABAABAAAAAAABA.B.ABBBABBB.BA", "BBABAABBABBBABBAAAAABABAABABBBABBAAAB.A", "BBABBAABAAAABBBBAAABBBBBABABABAAABBAAA."};
    vector<int> queries = {0, 1, 709, 708, 472, 167, 58, 539, 469, 95, 459, 144, 450, 49, 31, 32, 53, 145, 493, 460, 303, 8, 54, 178, 106, 690, 666, 219, 458, 135, 582, 492, 571, 285, 198, 598, 80, 548, 399, 528, 348, 668, 297, 203, 188, 707, 151, 320, 397, 386};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> roads = {".AAABAAAAAABAAABABBBBBBBAABBBAABAABBABB", "A.BBABBBBBAAABAABAAAABAABAABABBBAABABBB", "AB.BABBAABAABBABABBBBBA.BAAAAAB.BAABBAA", "ABB.ABAABBBAB.BABBABBAA..BAAAAAAAB.ABBB", "BAAA.BABAABBBBADABAAABAABABBBABB.ABBAAB", "ABBBB.AAAAAAAABBBBBAABAA.BBBBBAAAB.BBAA", "ABBAAA.BBBAAABBBBBAAAAABBBAAAABBABABBBA", "ABAABAB.BAABAAABBAABBBB.ABBAAABABAB.ABB", "ABABAABB.AAAAABBBABABBABBABBBBABAAABBAA", "ABBBAABAA.BBBAABABBAABABABABBABABBAAABA", "AAABBAAAAB.BBABBABBBABBAABBBBAABAAAABBA", "BAAABAABABB.BBBAABB.ABBAABBAABBA.AABABA", "AABBBAAAABBB.BABAABAAAABBA.BABABBA.BBAB", "ABB.BABAAAABB.BAAAABBABAABBAABA.BBABABB", "AAABABBABABBAB.ABAABABABBAABAABABBABABB", "BABADBBBBBBABAA.AABABABABDA.ABA.ABAABAB", "ABABABBBBAAAAABA.BBBABABBAABBAABBBBAAAA", "BABBBBBAABBBAAAAB.ABBBAABABBABBABAAAAAA", "BABAABAABBBBBAABBA.BBBABAAAAAABABBBBAAA", "BABBAAABAAB.ABBABBB.AABBB.A.AABAABB.AAB", "BABBAAABBAAAABABABBA.ABA.AAABBBBABB.ABB", "BBBABBABBBBBAABABBBAA.BAAA.BAAAABAA.AAB", "BAAAAAABAABBABABAAABBB.ABABABBBABBBAABB", "BA..AAB.BBAABABABABBAAA.BBBABBAA.BAABAB", "ABB.B.BABAAABABBBBAB.ABB..ABAAABBABAAAA", "AAABABBBABBBABADAAA.AAAB..BABBB.DAAB.BB", "BAAABBABBABB.BAAABAAA.BBAB.ABABABABBBAA", "BBAABBAABBBABAB.BBA.ABAABAA.BAAAAB.A.BB", "BAAABBAABBBAAAAABAAABABBABBB.BABBBBAABA", "ABAAABAABAABBBABABAABABBABAAB.BABAABBBB", "ABBABABBABABAABAABBBBABAABBAAB.BAAABBAA", "BB.ABABABABAB.A.BAAABAAAB.AABAB.BBBABBA", "AABA.AABABA.BBBABBBAABB.BDBABBAB.AAAABA", "AAABABBAABAAABBBBABBBABBAAABBAABA.BABAB", "BBA.B.ABAAAA.AAABABBBABABAB.BAABAB.BBAB", "BABABBB.BAABBBBAAAB...AAABBAABBAAAB.BAA", "ABBBABBABABABAABAAAAAAABA.B.ABBBABBB.BA", "BBABAABBABBBABBAAAAABABAABABBBABBAAAB.A", "BBABBAABAAAABBBBAAABBBBBABABABAAABBAAA."};
    vector<int> queries = {0, 1, 710, 709, 604, 413, 93, 480, 49, 103, 600, 638, 276, 34, 374, 106, 21, 41, 143, 366, 25, 544, 218, 483, 271, 420, 39, 225, 239, 26, 256, 360, 447, 14, 452, 458, 275, 623, 158, 2, 661, 535, 28, 574, 432, 675, 311, 672, 320, 215};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> roads = {".AAABAAAAAABAAABABBBBBBBAABBBAABAABBABB", "A.BBABBBBBAAABAABAAAABAABAABABBBAABABBB", "AB.BABBAABAABBABABBBBBA.BAAAAAB.BAABBAA", "ABB.ABAABBBAB.BABBABBAA..BAAAAAAAB.ABBB", "BAAA.BABAABBBBADABAAABAABABBBABB.ABBAAB", "ABBBB.AAAAAAAABBBBBAABAA.BBBBBAAAB.BBAA", "ABBAAA.BBBAAABBBBBAAAAABBBAAAABBABABBBA", "ABAABAB.BAABAAABBAABBBB.ABBAAABABAB.ABB", "ABABAABB.AAAAABBBABABBABBABBBBABAAABBAA", "ABBBAABAA.BBBAABABBAABABABABBABABBAAABA", "AAABBAAAAB.BBABBABBBABBAABBBBAABAAAABBA", "BAAABAABABB.BBBAABB.ABBAABBAABBA.AABABA", "AABBBAAAABBB.BABAABAAAABBA.BABABBA.BBAB", "ABB.BABAAAABB.BAAAABBABAABBAABA.BBABABB", "AAABABBABABBAB.ABAABABABBAABAABABBABABB", "BABADBBBBBBABAA.AABABABABDA.ABA.ABAABAB", "ABABABBBBAAAAABA.BBBABABBAABBAABBBBAAAA", "BABBBBBAABBBAAAAB.ABBBAABABBABBABAAAAAA", "BABAABAABBBBBAABBA.BBBABAAAAAABABBBBAAA", "BABBAAABAAB.ABBABBB.AABBB.A.AABAABB.AAB", "BABBAAABBAAAABABABBA.ABA.AAABBBBABB.ABB", "BBBABBABBBBBAABABBBAA.BAAA.BAAAABAA.AAB", "BAAAAAABAABBABABAAABBB.ABABABBBABBBAABB", "BA..AAB.BBAABABABABBAAA.BBBABBAA.BAABAB", "ABB.B.BABAAABABBBBAB.ABB..ABAAABBABAAAA", "AAABABBBABBBABADAAA.AAAB..BABBB.DAAB.BB", "BAAABBABBABB.BAAABAAA.BBAB.ABABABABBBAA", "BBAABBAABBBABAB.BBA.ABAABAA.BAAAAB.A.BB", "BAAABBAABBBAAAAABAAABABBABBB.BABBBBAABA", "ABAAABAABAABBBABABAABABBABAAB.BABAABBBB", "ABBABABBABABAABAABBBBABAABBAAB.BAAABBAA", "BB.ABABABABAB.A.BAAABAAAB.AABAB.BBBABBA", "AABA.AABABA.BBBABBBAABB.BDBABBAB.AAAABA", "AAABABBAABAAABBBBABBBABBAAABBAABA.BABAB", "BBA.B.ABAAAA.AAABABBBABABAB.BAABAB.BBAB", "BABABBB.BAABBBBAAAB...AAABBAABBAAAB.BAA", "ABBBABBABABABAABAAAAAAABA.B.ABBBABBB.BA", "BBABAABBABBBABBAAAAABABAABABBBABBAAAB.A", "BBABBAABAAAABBBBAAABBBBBABABABAAABBAAA."};
    vector<int> queries = {0, 1, 710, 709, 493, 370, 92, 344, 620, 252, 564, 321, 24, 520, 192, 333, 692, 109, 584, 608, 393, 128, 213, 239, 673, 201, 496, 534, 643, 672, 44, 102, 555, 50, 516, 647, 318, 460, 413, 292, 214, 519, 158, 185, 200, 250, 359, 412, 170, 539};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> roads = {".BAABABBBABABABABBAAABBBA.AABABBBAAAABBA", "B.BBBBAAA..ABAA.ABABBABBBAAB.AB.ABA.A.AB", "AB.ABBBBBABBBABA..ABAA.A..BABA.ABA.ABABA", "ABA.A...ABAAA.BABBBAAABBBA.BBBBABABBAAAB", "BBBA.ABAAABAB.A..ABBABAABAABBB.BAAABAB.B", "ABB.A.BBB.ABBBAABABBA.BABAABABABBABAAAAA", "BAB.BB.ABAABAAB..AA.BBAAABBBAABBB.BAAABA", "BAB.ABA.AA.BB.A.B.A.BBBBBABA.AA.BB.ABAAA", "BABAABBA.BBBBBBABBAAAAAABBBAAABBAB.AAAAB", "A.ABA.AAB.BBAAABBABBABB.ABBAAAABAABBBABB", "B.BABAA.BB.ABBBABAAA..BBA..AABBA.ABAB.A.", "AABAABBBBBA.BBBBAABAAAA..ABBABAAAB.ABABB", "BBBABBABBABB.BAB.AAABAABABAB..ABAAAAABBA", "AAA..BA.BABBB.B.AAABBAABABBBAABABBABBA.A", "BABBAABABABBAB.BABBABAABBABAAAAABBAB.ABA", "A.AA.A..ABABB.B.AABBAB.ABABAA..BBB.BAB..", "BA.B.B.BBBBA.AAA.BBABAAAAA.AABBABABBABBA", "BB.BAAA.BAAAAABAB.BAABBBAABA.BBAABB.ABB.", "AAABBBAAABABAABBBB.BBAA..BA.BABA.AAABB.B", "ABBABB..ABAAABABAAB.AAABBBB.ABAABB..B..A", "ABAAAABBAA.ABBBABABA.BA...A.B.ABAABBBBAB", "BAAAB.BBAB.AAAABABAAB.ABBABABBABA.ABBABB", "BB.BABABABBAAAA.ABAAAA.AAAABBBABABBBB.BB", "BBABAAABA.B.BBBAAB.B.BA.ABA.BBAAABAAABBA", "AB.BBBABBAA.AABBAA.B.BAA.BAAAABBABBBA.AB", ".A.AAABABB.ABBAAAABB.AABB.BBBBBA.A.A...B", "AAB.AABBBB.BABBB.BABABAAAB.ABBAABBABAAAA", "ABABBBBAAAABBBAAAA...AB.ABA..ABBBA...BAB", "B.BBBAA.AAAA.AAAA.BABBBBABB..ABA.BA.BBAB", "AAABBBAAAABB.AA.BBAB.BBBABBAA.ABAAABBBAB", "BB.B.ABABABAABA.BBBAAAAABBABBA.ABAAABBBA", "B.AABBB.BBAABAABAAAABBBABAABABA.AABBBB.A", "BABBABBBAA.AABBBBA.BAAAAA.BB.ABA.A.ABBAB", "ABAAAA.BBAABABBBABABA.BBBABABAAAA..BBABB", "AA.BABB..BB.AAA.BBA.BABAB.A.AAAB...BB.BA", "A.ABBAAAABAAABBBB.A.BBBABAB..BABABB.AAAB", "AABAAAABABBBAB.AAABBBBBAA.A.BBBBBBBA.AAA", "B.AABAAAAA.ABAABBBB.BA.B..ABBBBBBA.AA.BA", "BABA.ABAABABB.B.BB..ABBBA.AAAAB.ABBAAB.A", "ABABBAAABB.BAAA.A.BABBBABBABBBAABBABAAA."};
    vector<int> queries = {0, 1, 679, 678, 300, 94, 528, 48, 372, 285, 406, 140, 656, 278, 467, 13, 351, 139, 676, 574, 392, 627, 368, 438, 23, 401, 577, 174, 625, 102, 286, 557, 296, 218, 341, 235, 204, 399, 104, 120, 129, 302, 642, 591, 79, 324, 279, 426, 628, 659};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> roads = {".B.B..BAABA.A.ABABAAABB..A.ABBA..BBA.ABB", "B.AAB.BBABABBABAAABA.ABB..ABBBABBAAA.BAA", ".A.ABBBAA.ABBB.AA.BAAABBA.BBA.BAAAB...BB", "BAA.BAABBAAAB.ABABAABBBAABABABABBBAABABB", ".BBB..ABA...BBBBBBAAABAAB.BAA..AAA.AAABB", "..BA..AAB.ABABABBAAB..BBBAABBABBBAAABAA.", "BBBAAA.BABBABAA.BBB.BBBAABAAAABABBAABA.A", "ABABBAB..BBAAAABBAAABAAB.AABBABB.BAB.AB.", "AAABABA...B.BBAAA.BAABA...B.AB.BBBBAABBA", "BB.A..BB..ABBBABBAABB.AAAAAAAAAABB.BA.BB", "AAAA.ABBBA..ABBA.BBABBB.B.A.BAAAB...ABBA", ".BBA.BAA.B...BAB.ABBBAABA.BDAABBBAB.AAAA", "ABBBBABABBA..BABBAA.ABAAA.AA.BABBBBAABA.", ".AB.BBAABBBBB.BABBABAABABBAB.AABAAAAAABA", "AB.ABAAAAABAAB.AA.B.ABBBABABAAABBBB.BB.B", "BAABBB.BABABBAA.A.BBBBBABAABAAAABAAA.BAB", "AAAABBBBAB..BBAA.ABBAAB.AAABABBAABABBBBA", "BA.BBABA.ABAAB..A.ABBBBAAAAA.BBAAABBBBAB", "ABBAAABABABBAABBBA.ABBBAAABBBAABAAB.BBAA", "AAAAAB.AABAB.B.BBBA.B.ABABAB.BABB.A.ABAB", "A.ABA.BBABBBAAABABBB.AB.B.BAAABA.A.B.AAB", "BAABB.BAB.BABABBABB.A.AAAABBBBAA.BA..AA.", "BBBBABBAAABAABBBBBBABA.BBAAAABBAAAB.AAAA", ".BBAABAB.A.BAABA.AAB.AB.BBBAABBABA.B.BAA", "..AABBA..ABAABABAAAABABB.B.ABBBB.BAAB.AB", "A..B.ABA.A...BBAAAAB.AABB.BB..AAABB.BBBA", ".ABABAAABAABAAAAAABABBAB.B.ABBB.AABBBBBB", "ABBBABAB.A.DABBBBABBABAAABA.AAABAA.BAB.B", "BBAAABABAABA..AAA.B.ABAAB.BA.BBA.B.BBABB", "BB.B.AAABAAABAAABBABABBBB.BAB.BBAAB..AAA", "AABA.BBB.AABAAAABBAABABBBABABB.BAA.BBABA", ".BABABABBAABBBBAAABBAAAABA.BABB.BB.BAAAA", ".BABABB.BBBBBABBAAAB..AB.AAA.AAB.BBAAA.A", "BAABAABBBB.ABABABAA.ABAABBAABAABB.BBABA.", "BABA.AAAB..BBABAABBA.AB.ABB..B..BB.A.AA.", "AA.AAAABAB..AA.ABB..B..BA.BBB.BBABA..BBA", "...BABB.AAAAAAB.BBBA..A.BBBAB.BAAA...ABB", "AB.AAAAAB.BABABBBBBBAAAB.BBBAAAAABABA.BB", "BABBBA.BBBBAAB.ABAAAAAAAABB.BABA.AABBB..", "BABBB.A.ABAA.ABBABABB.AABABBBAAAA..ABB.."};
    vector<int> queries = {0, 1, 661, 660, 485, 103, 589, 449, 31, 320, 524, 25, 274, 640, 19, 41, 422, 379, 533, 525, 426, 116, 626, 368, 394, 296, 451, 4, 578, 446, 484, 343, 115, 271, 171, 455, 636, 184, 348, 106, 416, 555, 28, 92, 367, 513, 60, 249, 535, 574};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> roads = {".B.B..BAABA.A.ABABAAABB..A.ABBA..BBA.ABB", "B.AAB.BBABABBABAAABA.ABB..ABBBABBAAA.BAA", ".A.ABBBAA.ABBB.AA.BAAABBA.BBA.BAAAB...BB", "BAA.BAABBAAAB.ABABAABBBAABABABABBBAABABB", ".BBB..ABA...BBBBBBAAABAAB.BAA..AAA.AAABB", "..BA..AAB.ABABABBAAB..BBBAABBABBBAAABAA.", "BBBAAA.BABBABAA.BBB.BBBAABAAAABABBAABA.A", "ABABBAB..BBAAAABBAAABAAB.AABBABB.BAB.AB.", "AAABABA...B.BBAAA.BAABA...B.AB.BBBBAABBA", "BB.A..BB..ABBBABBAABB.AAAAAAAAAABB.BA.BB", "AAAA.ABBBA..ABBA.BBABBB.B.A.BAAAB...ABBA", ".BBA.BAA.B...BAB.ABBBAABA.BDAABBBAB.AAAA", "ABBBBABABBA..BABBAA.ABAAA.AA.BABBBBAABA.", ".AB.BBAABBBBB.BABBABAABABBAB.AABAAAAAABA", "AB.ABAAAAABAAB.AA.B.ABBBABABAAABBBB.BB.B", "BAABBB.BABABBAA.A.BBBBBABAABAAAABAAA.BAB", "AAAABBBBAB..BBAA.ABBAAB.AAABABBAABABBBBA", "BA.BBABA.ABAAB..A.ABBBBAAAAA.BBAAABBBBAB", "ABBAAABABABBAABBBA.ABBBAAABBBAABAAB.BBAA", "AAAAAB.AABAB.B.BBBA.B.ABABAB.BABB.A.ABAB", "A.ABA.BBABBBAAABABBB.AB.B.BAAABA.A.B.AAB", "BAABB.BAB.BABABBABB.A.AAAABBBBAA.BA..AA.", "BBBBABBAAABAABBBBBBABA.BBAAAABBAAAB.AAAA", ".BBAABAB.A.BAABA.AAB.AB.BBBAABBABA.B.BAA", "..AABBA..ABAABABAAAABABB.B.ABBBB.BAAB.AB", "A..B.ABA.A...BBAAAAB.AABB.BB..AAABB.BBBA", ".ABABAAABAABAAAAAABABBAB.B.ABBB.AABBBBBB", "ABBBABAB.A.DABBBBABBABAAABA.AAABAA.BAB.B", "BBAAABABAABA..AAA.B.ABAAB.BA.BBA.B.BBABB", "BB.B.AAABAAABAAABBABABBBB.BAB.BBAABD.AAA", "AABA.BBB.AABAAAABBAABABBBABABB.BAA.BBABA", ".BABABABBAABBBBAAABBAAAABA.BABB.BB.BAAAA", ".BABABB.BBBBBABBAAAB..AB.AAA.AAB.BBAAA.A", "BAABAABBBB.ABABABAA.ABAABBAABAABB.BBABA.", "BABA.AAAB..BBABAABBA.AB.ABB..B..BB.A.AA.", "AA.AAAABAB..AA.ABB..B..BA.BBBDBBABA..BBA", "...BABB.AAAAAAB.BBBA..A.BBBAB.BAAA...ABB", "AB.AAAAAB.BABABBBBBBAAAB.BBBAAAAABABA.BB", "BABBBA.BBBBAAB.ABAAAAAAAABB.BABA.AABBB..", "BABBB.A.ABAA.ABBABABB.AABABBBAAAA..ABB.."};
    vector<int> queries = {0, 1, 662, 661, 44, 535, 116, 500, 231, 147, 154, 452, 527, 56, 637, 15, 266, 468, 578, 180, 277, 311, 313, 323, 495, 353, 526, 598, 390, 584, 656, 287, 322, 272, 340, 182, 40, 501, 446, 304, 503, 183, 497, 278, 571, 563, 480, 517, 403, 434};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> roads = {".B.B..BAABA.A.ABABAAABB..A.ABBA..BBA.ABB", "B.AAB.BBABABBABAAABA.ABB..ABBBABBAAA.BAA", ".A.ABBBAA.ABBB.AA.BAAABBA.BBA.BAAAB...BB", "BAA.BAABBAAAB.ABABAABBBAABABABABBBAABABB", ".BBB..ABA...BBBBBBAAABAAB.BAA..AAA.AAABB", "..BA..AAB.ABABABBAAB..BBBAABBABBBAAABAA.", "BBBAAA.BABBABAA.BBB.BBBAABAAAABABBAABA.A", "ABABBAB..BBAAAABBAAABAAB.AABBABB.BAB.AB.", "AAABABA...B.BBAAA.BAABA.D.B.AB.BBBBAABBA", "BB.A..BB..ABBBABBAABB.AAAAAAAAAABB.BA.BB", "AAAA.ABBBA..ABBA.BBABBB.B.A.BAAAB...ABBA", ".BBA.BAA.B...BAB.ABBBAABA.BDAABBBAB.AAAA", "ABBBBABABBA..BABBAA.ABAAA.AA.BABBBBAABA.", ".AB.BBAABBBBB.BABBABAABABBAB.AABAAAAAABA", "AB.ABAAAAABAAB.AA.B.ABBBABABAAABBBB.BB.B", "BAABBB.BABABBAA.A.BBBBBABAABAAAABAAA.BAB", "AAAABBBBAB..BBAA.ABBAAB.AAABABBAABABBBBA", "BA.BBABA.ABAAB..A.ABBBBAAAAA.BBAAABBBBAB", "ABBAAABABABBAABBBA.ABBBAAABBBAABAAB.BBAA", "AAAAAB.AABAB.B.BBBA.B.ABABAB.BABB.A.ABAB", "A.ABA.BBABBBAAABABBB.AB.B.BAAABA.A.B.AAB", "BAABB.BAB.BABABBABB.A.AAAABBBBAA.BA..AA.", "BBBBABBAAABAABBBBBBABA.BBAAAABBAAAB.AAAA", ".BBAABAB.A.BAABA.AAB.AB.BBBAABBABA.B.BAA", "..AABBA.DABAABABAAAABABB.B.ABBBB.BAAB.AB", "A..B.ABA.A...BBAAAAB.AABB.BB..AAABB.BBBA", ".ABABAAABAABAAAAAABABBAB.B.ABBB.AABBBBBB", "ABBBABAB.A.DABBBBABBABAAABA.AAABAA.BAB.B", "BBAAABABAABA..AAA.B.ABAAB.BA.BBA.B.BBABB", "BB.B.AAABAAABAAABBABABBBB.BAB.BBAABD.AAA", "AABA.BBB.AABAAAABBAABABBBABABB.BAA.BBABA", ".BABABABBAABBBBAAABBAAAABA.BABB.BB.BAAAA", ".BABABB.BBBBBABBAAAB..AB.AAA.AAB.BBAAA.A", "BAABAABBBB.ABABABAA.ABAABBAABAABB.BBABA.", "BABA.AAAB..BBABAABBA.AB.ABB..B..BB.A.AA.", "AA.AAAABAB..AA.ABB..B..BA.BBBDBBABA..BBA", "...BABB.AAAAAAB.BBBA..A.BBBAB.BAAA...ABB", "AB.AAAAAB.BABABBBBBBAAAB.BBBAAAAABABA.BB", "BABBBA.BBBBAAB.ABAAAAAAAABB.BABA.AABBB..", "BABBB.A.ABAA.ABBABABB.AABABBBAAAA..ABB.."};
    vector<int> queries = {0, 1, 663, 662, 231, 34, 629, 628, 595, 528, 454, 118, 25, 398, 45, 41, 132, 645, 193, 149, 93, 291, 549, 288, 571, 340, 504, 591, 370, 625, 125, 477, 319, 139, 346, 304, 600, 573, 568, 545, 599, 487, 89, 301, 56, 580, 71, 77, 214, 294};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> roads = {".B.B..BAABA.A.ABABAAABB..A.ABBA..BBA.ABB", "B.AAB.BBABABBABAAABA.ABB..ABBBABBAAA.BAA", ".A.ABBBAA.ABBB.AA.BAAABBA.BBA.BAAAB...BB", "BAA.BAABBAAAB.ABABAABBBAABABABABBBAABABB", ".BBB..ABA...BBBBBBAAABAAB.BAA..AAA.AAABB", "..BA..AAB.ABABABBAAB..BBBAABBABBBAAABAA.", "BBBAAA.BABBABAA.BBB.BBBAABAAAABABBAABA.A", "ABABBAB..BBAAAABBAAABAAB.AABBABB.BAB.AB.", "AAABABA...B.BBAAA.BAABA.D.B.AB.BBBBAABBA", "BB.A..BB..ABBBABBAABB.AAAAAAAAAABB.BA.BB", "AAAA.ABBBA..ABBA.BBABBB.B.A.BAAAB...ABBA", ".BBA.BAA.B...BAB.ABBBAABA.BDAABBBAB.AAAA", "ABBBBABABBA..BABBAA.ABAAA.AA.BABBBBAABA.", ".AB.BBAABBBBB.BABBABAABABBAB.AABAAAAAABA", "AB.ABAAAAABAAB.AA.B.ABBBABABAAABBBB.BB.B", "BAABBB.BABABBAA.A.BBBBBABAABAAAABAAA.BAB", "AAAABBBBAB..BBAA.ABBAAB.AAABABBAABABBBBA", "BA.BBABA.ABAAB..A.ABBBBAAAAA.BBAAABBBBAB", "ABBAAABABABBAABBBA.ABBBAAABBBAABAAB.BBAA", "AAAAAB.AABAB.B.BBBA.B.ABABAB.BABB.A.ABAB", "A.ABA.BBABBBAAABABBB.AB.B.BAAABA.A.B.AAB", "BAABB.BAB.BABABBABB.A.AAAABBBBAA.BA..AA.", "BBBBABBAAABAABBBBBBABA.BBAAAABBAAAB.AAAA", ".BBAABAB.A.BAABA.AAB.AB.BBBAABBABA.B.BAA", "..AABBA.DABAABABAAAABABB.B.ABBBB.BAAB.AB", "A..B.ABA.A...BBAAAAB.AABB.BB..AAABB.BBBA", ".ABABAAABAABAAAAAABABBAB.B.ABBB.AABBBBBB", "ABBBABAB.A.DABBBBABBABAAABA.AAABAA.BAB.B", "BBAAABABAABA..AAA.B.ABAAB.BA.BBA.B.BBABB", "BB.B.AAABAAABAAABBABABBBB.BAB.BBAABD.AAA", "AABA.BBB.AABAAAABBAABABBBABABB.BAA.BBABA", ".BABABABBAABBBBAAABBAAAABA.BABB.BB.BAAAA", ".BABABB.BBBBBABBAAAB..AB.AAA.AAB.BBAAA.A", "BAABAABBBB.ABABABAA.ABAABBAABAABB.BBABA.", "BABA.AAAB..BBABAABBA.AB.ABB..B..BB.A.AA.", "AA.AAAABAB..AA.ABB..B..BA.BBBDBBABA..BBA", "...BABB.AAAAAAB.BBBA..A.BBBAB.BAAA...ABB", "AB.AAAAAB.BABABBBBBBAAAB.BBBAAAAABABA.BB", "BABBBA.BBBBAAB.ABAAAAAAAABB.BABA.AABBB..", "BABBB.A.ABAA.ABBABABB.AABABBBAAAA..ABB.."};
    vector<int> queries = {0, 1, 663, 662, 545, 142, 311, 543, 217, 567, 8, 457, 390, 559, 634, 429, 69, 508, 30, 269, 237, 655, 511, 245, 462, 123, 588, 277, 619, 155, 104, 597, 501, 529, 641, 93, 469, 601, 274, 384, 453, 185, 613, 427, 167, 319, 612, 42, 366, 504};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> roads = {".N......................................", "N.......................................", "...B....................................", "..B.....................................", ".....h..................................", "....h...................................", ".......r................................", "......r.................................", ".........x..............................", "........x...............................", "...........M............................", "..........M.............................", ".............n..........................", "............n...........................", "...............g........................", "..............g.........................", ".................H......................", "................H.......................", "...................o....................", "..................o.....................", ".....................B..................", "....................B...................", ".......................k................", "......................k.................", ".........................I..............", "........................I...............", "...........................e............", "..........................e.............", ".............................D..........", "............................D...........", "...............................r........", "..............................r.........", ".................................o......", "................................o.......", "...................................q....", "..................................q.....", ".....................................O..", "....................................O...", ".......................................h", "......................................h."};
    vector<int> queries = {0, 1, 20, 19, 16, 17, 13, 8, 10, 15, 18, 3, 11, 9, 6, 14, 4, 2, 7, 5, 12};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> roads = {".tHBqtOyGpBIYvSUjGkZgoUEbhfOWdMitkoMdYok", "t.......................................", "H.......................................", "B.......................................", "q.......................................", "t.......................................", "O.......................................", "y.......................................", "G.......................................", "p.......................................", "B.......................................", "I.......................................", "Y.......................................", "v.......................................", "S.......................................", "U.......................................", "j.......................................", "G.......................................", "k.......................................", "Z.......................................", "g.......................................", "o.......................................", "U.......................................", "E.......................................", "b.......................................", "h.......................................", "f.......................................", "O.......................................", "W.......................................", "d.......................................", "M.......................................", "i.......................................", "t.......................................", "k.......................................", "o.......................................", "M.......................................", "d.......................................", "Y.......................................", "o.......................................", "k......................................."};
    vector<int> queries = {0, 1, 39, 38, 22, 16, 8, 18, 13, 11, 2, 31, 14, 12, 34, 37, 5, 26, 30, 3, 32, 24, 27, 29, 21, 19, 33, 15, 7, 36, 28, 6, 23, 20, 10, 9, 4, 25, 17, 35};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> roads = {".tHBqtOyGpBIYvSUjGkZgoUEbhfOWdMitkoMdYok", "t.XeKNNKYXZBBVCTxNeTzHesIFvAtZJwygMuDVhr", "HX.xupVwmrzhDFMDlXbBizQhpcLMQXZyPEtWaEBN", "Bex.UCrTpAoqUAMHBCXcvHFToomcGvQKBekgEIfx", "qKuU.wvPyzUzEamRhaHhUtdAXzfLDEiFjDVUyQRX", "tNpCw.fAaCPKAgvMvrvyLlMPInvwnzQAgGnuZCkD", "ONVrvf.xDHCDimnvsYRojUTRJbqrJaNEnROrYvDA", "yKwTPAx.qoBomryzZNnZFMTrxeYZyPHglIkvomLI", "GYmpyaDq.gwqAJheodJhKDnQUbahDEDDnlLGXGdg", "pXrAzCHog.yjYZJfGBNDDmAWVyVqLzaIGddLSCjV", "BZzoUPCBwy.wijnwJTqOZhKpRZxjMdzyAmtKgMUR", "IBhqzKDoqjw.LEOUdySyQeNDdxHgzFFwbjSVVgxg", "YBDUEAimAYiL.ayhhKnILdScgxlmNEnaIiVeUWgc", "vVFAagmrJZjEa.ihtEABOiMermEdlUVPVIoweYxZ", "SCMMmvnyhJnOyi.mARMMePpoCNdQDHpVLbxnXkaO", "UTDHRMvzefwUhhm.KKnXCzTXvSvrODTYOjLuhQHe", "jxlBhvsZoGJdhtAK.AHZXOpwTKkvcBpVBAXfMISM", "GNXCarYNdBTyKERKA.LcIJCWKBpeKczQEdrFeDGx", "kebXHvRnJNqSnAMnHL.mTACDMNhUatFKwtxGwaRp", "ZTBchyoZhDOyIBMXZcm.GZBaAaVotBOtvYLmtNNp", "gzivULjFKDZQLOeCXITG.TSxntgSaaizcncFiRLK", "oHzHtlUMDmhediPzOJAZT.suNvWSCoKxgFMAjyRI", "UeQFdMTTnAKNSMpTpCCBSs.GvdDqjETYAyUzqrSW", "EshTAPRrQWpDceoXwWDaxuG.CVBfyCXVWqLpmxso", "bIpoXIJxUVRdgrCvTKMAnNvC.TrnlHTyTSeDCOvT", "hFcoznbebyZxxmNSKBNatvdVT.sOGFrDwEmiKQmV", "fvLmfvqYaVxHlEdvkphVgWDBrs.RYoMooITrWsZw", "OAMcLwrZhqjgmdQrveUoSSqfnOR.yYRPFNyujWoJ", "WtQGDnJyDLMzNlDOcKataCjylGYy.BbmFBsonjDB", "dZXvEzaPEzdFEUHDBctBaoECHFoYB.utFaFHGuNE", "MJZQiQNHDazFnVpTpzFOiKTXTrMRbu.CYyMupFRb", "iwyKFAEgDIywaPVYVQKtzxYVyDoPmtC.mdzBCsFD", "tyPBjgnlnGAbIVLOBEwvcgAWTwoFFFYm.jxCpMrL", "kgEeDGRIldmjiIbjAdtYnFyqSEINBaydj.MzWBTS", "oMtkVnOkLdtSVoxLXrxLcMULemTysFMzxM.GuVvk", "MuWgUurvGLKVewnufFGmFAzpDiruoHuBCzG.Knfb", "dDaEyZYoXSgVUeXhMewtijqmCKWjnGpCpWuK.gPc", "YVEIQCvmGCMgWYkQIDaNRyrxOQsWjuFsMBVng.ib", "ohBfRkDLdjUxgxaHSGRNLRSsvmZoDNRFrTvfPi.B", "krNxXDAIgVRgcZOeMxppKIWoTVwJBEbDLSkbcbB."};
    vector<int> queries = {0, 1, 780, 779, 192, 648, 758, 497, 206, 387, 17, 173, 604, 483, 297, 298, 526, 100, 16, 227, 215, 633, 747, 716, 286, 559, 171, 615, 301, 32, 434, 188, 284, 454, 498, 315, 97, 360, 375, 640, 219, 579, 413, 588, 540, 99, 474, 726, 595, 379};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> roads = {"........................................", "..cyfbWtnvfCiRAWGuzUeIoiTupToibWNGoZTayX", ".c.mXlLJeKqDUmMZDwrcQBuplBsRxGpTgoUfNpNx", ".ym.IObUUdleomUssHFdLnXkoAuWViLSGyKmkPAi", ".fXI.bIlMdNXanKHzOyqGQfEesqhHqEwMqbJbubo", ".blOb.NEVyResxJxKkYpiIZOQdpMQtnyuKxmLRMb", ".WLbIN.AUXvZmeXMgtkruaMFgBYuNPKmlKKpmRtW", ".tJUlEA.fxZRRpmDGxyjnrduyvcefxMAKPSVFwnz", ".neUMVUf.aysIxxHHotmXGmOAberoltGqgjfluPE", ".vKddyXxa.WXWNmiazWvGuWbsYwypGASqqMXnjbA", ".fqlNRvZyW.KbMrfdKeiqvWRiQveCivAFgBKuZyf", ".CDeXeZRsXK.uMEhXOgMZMUtltMlBmWtcWQeVJLo", ".iUoasmRIWbu.HlWmCbZFFExbQFVzYovTVezWOFZ", ".RmmnxepxNMMH.SmPWACQHeXXAXNcVYGsmduoFfE", ".AMUKJXmxmrElS.IMAmVeflcyFaZgZLMRSNQVPJU", ".WZsHxMDHifhWmI.qxlvBBpPgQRRZsnHFiGXhyFx", ".GDszKgGHadXmPMq.QZACEHIvnaLdHAHSbcbqPKt", ".uwHOktxozKOCWAxQ.gBHEjcVKIkWgsbDlCLgXWR", ".zrFyYkytWegbAmlZg.SQJzUVrIZflfJuxvKGwdA", ".UcdqprjmviMZCVvABS.lkHwqMeBwSfqojxzkZvi", ".eQLGiunXGqZFQeBCHQl.jmMCBamBTncArDHUgLu", ".IBnQIarGuvMFHfBEEJkj.jNySBKJWbFgrXsteHD", ".ouXfZMdmWWUEelpHjzHmj.PttMhKgfScSyaaCCp", ".ipkEOFuObRtxXcPIcUwMNP.xXfQQHTTocxvCfbh", ".TloeQgyAsilbXygvVVqCytx.pLlpkfRxCtnVpqZ", ".uBAsdBvbYQtQAFQnKrMBStXp.nmLEHouDWtoYCt", ".psuqpYcewvMFXaRaIIeaBMfLn.aQLynFcBCRoHF", ".TRWhMueryelVNZRLkZBmKhQlma.pxNBRVrYScAo", ".oxVHQNfopCBzcgZdWfwBJKQpLQp.hqZXhJkCyBt", ".iGiqtPxlGimYVZsHglSTWgHkELxh.fJfNPTKprA", ".bpLEnKMtAvWoYLnAsffnbfTfHyNqf.RDxPdQpWI", ".WTSwymAGSAtvGMHHbJqcFSTRonBZJR.nfeFWzbh", ".NgGMulKqqFcTsRFSDuoAgcoxuFRXfDn.WvievPd", ".GoyqKKPgqgWVmSiblxjrrScCDcVhNxfW.vWnVqz", ".oUKbxKSjMBQedNGcCvxDXyxtWBrJPPevv.lnmKm", ".ZfmJmpVfXKezuQXbLKzHsavntCYkTdFiWl.GTCv", ".TNkbLmFlnuVWoVhqgGkUtaCVoRSCKQWennG.OtP", ".apPuRRwujZJOFPyPXwZgeCfpYocyppzvVmTO.Jq", ".yNAbMtnPbyLFfJFKWdvLHCbqCHABrWbPqKCtJ.D", ".XxiobWzEAfoZEUxtRAiuDphZtFotAIhdzmvPqD."};
    vector<int> queries = {0, 1, 741, 740, 291, 362, 515, 531, 38, 474, 99, 722, 249, 451, 195, 628, 425, 534, 143, 510, 111, 109, 649, 731, 667, 318, 231, 107, 391, 577, 397, 101, 480, 54, 121, 139, 119, 716, 491, 370, 610, 237, 203, 96, 584, 340, 543, 32, 463, 647};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> roads = {".DrnCYMAexNyLRTFjsurpjEtvEBjBKSShISRTyg.", "D.iwWgaBmitYcTuYPWCVNEQhVVKORowYyaFgVKw.", "ri.azlvxrtwINjgsYHtgRUkYKJsASDGrQvNsoBW.", "nwa.xQQqNncJsNsXoUVbqYUFwcGbzmNNmWJjYsH.", "CWzx.MnDldTSyagbIWJcvEEyhHIsCkZYyfcAWPB.", "YglQM.OYlXUFgkWDViOriRDyZQfcBuxJuLIRhof.", "MavQnO.QYwMjEEROgEfqEufuXUUMmgADifuLPEX.", "ABxqDYQ.hTXpIlnHWEJNWRqKlfrNmpIFYQJUAdP.", "emrNllYh.PpUZqiVYlwHcynmXGSIGicJXdbzxTr.", "xitndXwTP.QEEYFySRVoiVIgygWQodUHnGbimTc.", "NtwcTUMXpQ.wdoNUMOsbxBsLoSpKQJCwYpaOgpS.", "yYIJSFjpUEw.zlhFubZnuziIXTwkXOSAKjxnAfx.", "LcNsygEIZEdz.fJXVZCISTwteoHfwvKcRfSvhyG.", "RTjNakElqYolf.BXcyAgsDqBxUiWrDTvILMoZSA.", "TugsgWRniFNhJB.NvoLxjXJIQOoLGQGfsXzCjgX.", "FYsXbDOHVyUFXXN.dlmBEwAVDighMLfzOYpphpp.", "jPYoIVgWYSMuVcvd.cPnzIjuouJlaMyLuFuEOnv.", "sWHUWiEElRObZyolc.GjbucohvJsgDhsgulRotD.", "uCtVJOfJwVsZCALmPG.KGrcAIgUPcocDaFAEkWX.", "rVgbcrqNHobnIgxBnjK.kOfYkcRRlGNVVrreuFv.", "pNRqviEWcixuSsjEzbGk.xoYJHeGbGfsuuiSMwK.", "jEUYERuRyVBzTDXwIurOx.fCinoaAmeuluacDVs.", "EQkUEDfqnIsiwqJAjccfof.MWDjyNPlLUOJSCeO.", "thYFyyuKmgLItBIVuoAYYCM.VYCxmtBSoNAVgzU.", "vVKwhZXlXyoXexQDohIkJiWV.zteHdxDjXEMamp.", "EVJcHQUfGgSToUOiuvgcHnDYz.lojXUnixVxvTV.", "BKsGIfUrSWpwHiogJJUReojCtl.kONTYOWHCksa.", "jOAbscMNIQKkfWLhlsPRGayxeok.fcfTPRpJpUi.", "BRSzCBmmGoQXwrGMagclbANmHjOf.YGRNEUwcZk.", "KoDmkugpidJOvDQLMDoGGmPtdXNcY.YegCPzUwR.", "SwGNZxAIcUCSKTGfyhcNfelBxUTfGY.oYKZUyqn.", "SYrNYJDFJHwAcvfzLsDVsuLSDnYTReo.ssCpOHR.", "hyQmyuiYXnYKRIsOugaVulUojiOPNgYs.EyWrYm.", "IavWfLfQdGpjfLXYFuFruuONXxWRECKsE.rgmSR.", "SFNJcIuJbbaxSMzpulAriaJAEVHpUPZCyr.gUsL.", "RgsjARLUziOnvoCpEREeScSVMxCJwzUpWgg.YIO.", "TVoYWhPAxmgAhZjhOokuMDCgavkpcUyOrmUY.Ip.", "yKBsPoEdTTpfySgpntWFwVezmTsUZwqHYSsII.d.", "gwWHBfXPrcSxGAXpvDXvKsOUpVaikRnRmRLOpd..", "........................................"};
    vector<int> queries = {0, 1, 741, 740, 245, 525, 389, 691, 554, 739, 217, 317, 712, 73, 83, 79, 152, 108, 21, 657, 435, 199, 274, 128, 338, 738, 375, 399, 721, 373, 692, 551, 591, 350, 483, 45, 385, 232, 278, 248, 427, 52, 526, 466, 339, 714, 640, 617, 125, 63};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 0, 38, 5, 28, 38, 29, 18, 37, 9, 9, 30, 1, 6, 5, 8, 3, 1, 25, 34, 15, 28, 3, 10, 36, 35, 13, 33, 34, 32, 29, 21, 10, 37, 1, 38, 22, 20, 29, 30, 27, 16, 15, 17, 31, 27, 34, 28, 0};
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> roads = {".OfBvkyeMsyNuUKQJtHATaZaUasNAUqqhOcPDZ..", "O.EsiijPmkrVKPqqWtFTcPLilCicpiMptjELvr..", "fE.FPoeJsHCWeLQTofeFseGwmhaduERSzvHdHU..", "BsF.jupztmTeAPPCmZCurfqXuenuDbEBbQMloq..", "viPj.MeqMgYUXRwWCEJlDNzPzHsQeSNCVEWcPy..", "kiouM.iqishSBFTBxuStQTGjzEABHPrijuUkUI..", "yjepei.lJNQVtwUzWNXtwfgCmElPeuMFewyqsc..", "ePJzqql.jZJzilpAeQwdqQUoJEZoOYhdhSspsU..", "MmstMiJj.eaoynbLZmcrTsgoLKPBRFahTjQXiK..", "skHmgsNZe.iyQQaqgQSAxQQjWljAJauxFPUDAV..", "yrCTYhQJai.HxyRhMbuftMKpHLUCdFpgmodDdD..", "NVWeUSVzoyH.ngWjqAIdIRUYUvnKRcuXzkfRdL..", "uKeAXBtiyQxn.FjZFyltUMHRXAhiCUlwgDUZTu..", "UPLPRFwlnQygF.EUUnlYJUdOAemELLIhVttvwN..", "KqQPwTUpbaRWjE.CszkJhHutSydSEWWTtiodpU..", "QqTCWBzALqhjZUC.cRtbSiSkZGESihpYJLQucl..", "JWomCxWeZgMqFUsc.ttFaLRQUalNxNotkteUfy..", "ttfZEuNQmQbAynzRt.HUbSRKntXpQbLFPNScJG..", "HFeCJSXwcSuIllkttH.xsgyGBIiBWTNNdMiWLf..", "ATFulttdrAfdtYJbFUx.FNapVIWxQAuFrKyrDD..", "TcsrDQwqTxtIUJhSabsF.OLpKwTjmreJhUczUH..", "aPefNTfQsQMRMUHiLSgNO.dOHgqCcJrvSSiWDB..", "ZLGqzGgUgQKUHduSRRyaLd.vPHBHbvYITfVPhs..", "aiwXPjCoojpYROtkQKGppOv.ZwZvlnPbglFKcn..", "UlmuzzmJLWHUXASZUnBVKHPZ.RTqcmetvfqwTI..", "aCheHEEEKlLvAeyGatIIwgHwR.MtDJrpyzyrhR..", "siansAlZPjUnhmdElXiWTqBZTM.aoKpacdnMYD..", "NcduQBPoBACKiESSNpBxjCHvqta.QqZJzbJTDe..", "ApuDeHeORJdRCLEixQWQmcblcDoQ.NwodMMsEt..", "UiEbSPuYFaFcULWhNbTArJvnmJKqN.aoImkJMw..", "qMRENrMhaupulIWpoLNuerYPerpZwa.AoaVCQH..", "qpSBCiFdhxgXwhTYtFNFJvIbtpaJooA.dJorQm..", "htzbVjehTFmzgVtJkPdrhSTgvyczdIod.qRFEa..", "OjvQEuwSjPokDtiLtNMKUSflfzdbMmaJq.uasX..", "cEHMWUysQUdfUtoQeSiyciVFqynJMkVoRu.fQR..", "PLdlckqpXDDRZvduUcWrzWPKwrMTsJCrFaf.QG..", "DvHoPUssiAddTwpcfJLDUDhcThYDEMQQEsQQ.l..", "ZrUqyIcUKVDLuNUlyGfDHBsnIRDetwHmaXRGl...", ".......................................A", "......................................A."};
    vector<int> queries = {0, 1, 704, 703, 365, 363, 541, 168, 535, 454, 290, 522, 69, 252, 640, 297, 105, 578, 395, 357, 646, 358, 388, 346, 239, 635, 212, 20, 544, 377, 103, 443, 253, 123, 238, 513, 696, 327, 265, 85, 620, 255, 135, 204, 699, 608, 665, 483, 343, 118};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> roads = {".FRgmOlfgIOMOQkFlRoJpwsZCiQxfwUuomQLI...", "F.HlozBQzEccUjfLuTNvdbTNxPenckrWHHMpM...", "RH.NUxCKZYyXohlllyuJSSlBDcLUjDVlXjygW...", "glN.vPFzuDSvkpKLgtmUIYUowOnuoSChciACs...", "moUv.kWZmlXRLobYrfFnhdWHdbsexygQtLcZN...", "OzxPk.NvsWmrZIEXTtxciOSgYezDRIfgGyVXh...", "lBCFWN.pjLjYlfaUiLjLDqqibUmLpGzASdYco...", "fQKzZvp.JDCFadplbCicGSTSlomoaaOmsBCnm...", "gzZumsjJ.sEDmUoSappvThdAktJTgxMAbPpYL...", "IEYDlWLDs.VueKpMWjHHWGPpFlcaeYnvUtBkU...", "OcySXmjCEV.njnPQNOiqQoOTqJbDTFZEybZhh...", "McXvRrYFDun.ZsTevqDvADMIvUmrWuAYgMytA...", "OUokLZlamejZ.OdhstzwVKyktCjAJyTBraoVC...", "QjhpoIfdUKnsO.LzaKylcPDnCVhQXKtcIOIwp...", "kflKbEapopPTdL.SpQKVJmGrZUTuNLCXWVVgT...", "FLlLYXUlSMQehzS.YXxgWiGdxVoALkzpjjCBf...", "lulgrTibaWNvsapY.BJyTbwQgrKxXUOzHAZcx...", "RTytftLCpjOqtKQXB.eOjRfvzgcbcxavJUJpb...", "oNumFxjipHiDzyKxJe.HmnvKYAgQzSotzUmQI...", "JvJUncLcvHqvwlVgyOH.KabltYkkuTtsOzLth...", "pdSIhiDGTWQAVcJWTjmK.DmwQApJmlVBcGqGh...", "wbSYdOqShGoDKPmibRnaD.OOiwkHYdxhejbCA...", "sTlUWSqTdPOMyDGGwfvbmO.zqctzvDanxULUp...", "ZNBoHgiSApTIknrdQvKlwOz.jJrPIGpasjpEz...", "CxDwdYblkFqvtCZxgzYtQiqj.XFIvMoqIaPuZ...", "iPcObeUotlJUCVUVrgAYAwcJX.XmTaCwiNeRt...", "QeLnszmmJcbmjhToKcgkpktrFX.AlUijBJrWl...", "xnUueDLoTaDrAQuAxbQkJHzPImA.yGFUJgdCd...", "fcjoxRpageTWJXNLXczumYvIvTly.YUZlbJdr...", "wkDSyIGaxYFuyKLkUxSTldDGMaUGY.JNKapPg...", "UrVCgfzOMnZATtCzOaotVxapoCiFUJ.oPQYKG...", "uWlhQgAmAvEYBcXpzvtsBhnaqwjUZNo.DPZcG...", "oHXctGSsbUygrIWjHJzOcexsIiBJlKPD.guCk...", "mHjiLydBPtbMaOVjAUUzGjUjaNJgbaQPg.cmG...", "QMyAcVYCpBZyoIVCZJmLqbLpPerdJpYZuc.qp...", "LpgCZXcnYkhtVwgBcpQtGCUEuRWCdPKcCmq.w...", "IMWsNhomLUhACpTfxbIhhApzZtldrgGGkGpw....", ".......................................B", ".......................................C", ".....................................BC."};
    vector<int> queries = {0, 1, 668, 667, 293, 67, 621, 211, 239, 261, 43, 260, 419, 594, 300, 336, 48, 517, 344, 136, 474, 444, 272, 21, 383, 316, 367, 264, 128, 129, 55, 465, 477, 395, 301, 326, 233, 283, 35, 435, 159, 279, 398, 181, 428, 404, 613, 509, 557, 664};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> roads = {".AC.....................................", "A.B.....................................", "CB......................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "......................................AC", ".....................................A.B", ".....................................CB."};
    vector<int> queries = {0, 1, 6, 5, 3, 4, 2};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> roads = {".N......................................", "N.......................................", "...f....................................", "..f.....................................", ".....L..................................", "....L...................................", ".......g................................", "......g.................................", ".........M..............................", "........M...............................", "...........F............................", "..........F.............................", ".............D..........................", "............D...........................", "...............p........................", "..............p.........................", ".................z......................", "................z.......................", "...................I....................", "..................I.....................", ".....................e..................", "....................e...................", ".......................y................", "......................y.................", ".........................t..............", "........................t...............", "...........................G............", "..........................G.............", ".............................H..........", "............................H...........", "...............................v........", "..............................v.........", ".................................Y......", "................................Y.......", "...................................x....", "..................................x.....", ".....................................Z..", "....................................Z...", ".......................................U", "......................................U."};
    vector<int> queries = {0, 1, 20, 19, 5, 17, 9, 2, 14, 12, 6, 16, 4, 15, 10, 18, 8, 3, 13, 7, 11};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> roads = {".rh.....................................", "r.N.....................................", "hN......................................", "....fL..................................", "...f.S..................................", "...LS...................................", ".......jR...............................", "......j.g...............................", "......Rg................................", "..........MF............................", ".........M.n............................", ".........Fn.............................", ".............VC.........................", "............V.D.........................", "............CD..........................", "................pz......................", "...............p.W......................", "...............zW.......................", "...................Jl...................", "..................J.I...................", "..................lI....................", "......................ey................", ".....................e.K................", ".....................yK.................", ".........................Pk.............", "........................P.t.............", "........................kt..............", "............................GH..........", "...........................G.E..........", "...........................HE...........", "...............................uo.......", "..............................u.v.......", "..............................ov........", "..................................Yx....", ".................................Y.m....", ".................................xm.....", ".....................................Ad.", "....................................A.Z.", "....................................dZ..", "........................................"};
    vector<int> queries = {0, 1, 39, 38, 32, 37, 21, 3, 29, 33, 4, 30, 36, 24, 18, 6, 8, 2, 7, 19, 17, 31, 26, 15, 20, 25, 27, 16, 11, 14, 10, 22, 35, 34, 5, 28, 9, 13, 12, 23};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> roads = {".r..S...................................", "r.N.....................................", ".N.h....................................", "..h.f...................................", "S..f....................................", "......L..M..............................", ".....L.j................................", "......j.g...............................", ".......g.R..............................", ".....M..R...............................", "...........n..C.........................", "..........n.F...........................", "...........F.V..........................", "............V.D.........................", "..........C..D..........................", "................p..I....................", "...............p.W......................", "................W.z.....................", ".................z.J....................", "...............I..J.....................", ".....................l..P...............", "....................l.e.................", ".....................e.K................", "......................K.y...............", "....................P..y................", "..........................t..H..........", ".........................t.k............", "..........................k.G...........", "...........................G.E..........", ".........................H..E...........", "...............................u..m.....", "..............................u.v.......", "...............................v.o......", "................................o.Y.....", "..............................m..Y......", "....................................x..U", "...................................x.A..", "....................................A.Z.", ".....................................Z.d", "...................................U..d."};
    vector<int> queries = {0, 1, 40, 39, 24, 17, 7, 26, 35, 32, 15, 29, 31, 14, 8, 6, 13, 2, 22, 34, 37, 21, 4, 38, 19, 12, 18, 27, 16, 3, 33, 11, 5, 25, 9, 23, 10, 20, 30, 28, 36};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> roads = {".r..........V...........................", "r.N.....................................", ".N.h....................................", "..h.f...................................", "...f.S..................................", "....S.L.................................", ".....L.j................................", "......j.g...............................", ".......g.R..............................", "........R.M.............................", ".........M.n............................", "..........n.F...........................", "V..........F............................", "..............D..........t..............", ".............D.C........................", "..............C.p.......................", "...............p.W......................", "................W.z.....................", ".................z.J....................", "..................J.I...................", "...................I.l..................", "....................l.e.................", ".....................e.K................", "......................K.y...............", ".......................y.P..............", ".............t..........P...............", "...........................k..........d.", "..........................k.G...........", "...........................G.E..........", "............................E.H.........", ".............................H.u........", "..............................u.v.......", "...............................v.o......", "................................o.Y.....", ".................................Y.m....", "..................................m.x...", "...................................x.A..", "....................................A.Z.", "..........................d..........Z..", "........................................"};
    vector<int> queries = {0, 1, 39, 38, 32, 24, 7, 20, 18, 29, 26, 17, 36, 2, 19, 35, 12, 34, 37, 15, 16, 13, 5, 30, 11, 10, 31, 14, 21, 9, 25, 27, 23, 4, 6, 8, 22, 28, 33, 3};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> roads = {"........................................", "..N.....................................", ".N......................................", "....f...................................", "...f....................................", "......L.................................", ".....L..................................", "........g...............................", ".......g................................", "..........M.............................", ".........M..............................", "............F...........................", "...........F............................", "..............D.........................", ".............D..........................", "................p.......................", "...............p........................", "..................z.....................", ".................z......................", "....................I...................", "...................I....................", "......................e.................", ".....................e..................", "........................y...............", ".......................y................", "..........................t.............", ".........................t..............", "............................G...........", "...........................G............", "..............................H.........", ".............................H..........", "................................v.......", "...............................v........", "..................................Y.....", ".................................Y......", "....................................x...", "...................................x....", "......................................Z.", ".....................................Z..", "........................................"};
    vector<int> queries = {0, 1, 19, 18, 4, 14, 7, 11, 2, 3, 16, 15, 8, 6, 5, 9, 12, 17, 13, 10};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> roads = {"........................................", "..rh....................................", ".r.N....................................", ".hN.....................................", ".....fL.................................", "....f.S.................................", "....LS..................................", "........jR..............................", ".......j.g..............................", ".......Rg...............................", "...........MF...........................", "..........M.n...........................", "..........Fn............................", "..............VC........................", ".............V.D........................", ".............CD.........................", ".................pz.....................", "................p.W.....................", "................zW......................", "....................Jl..................", "...................J.I..................", "...................lI...................", ".......................ey...............", "......................e.K...............", "......................yK................", "..........................Pk............", ".........................P.t............", ".........................kt.............", ".............................GH.........", "............................G.E.........", "............................HE..........", "................................uo......", "...............................u.v......", "...............................ov.......", "...................................Yx...", "..................................Y.m...", "..................................xm....", "......................................Ad", ".....................................A.Z", ".....................................dZ."};
    vector<int> queries = {0, 1, 39, 38, 20, 26, 7, 21, 37, 32, 5, 15, 12, 17, 10, 2, 4, 36, 16, 28, 19, 25, 13, 31, 22, 30, 3, 8, 27, 35, 29, 33, 11, 24, 9, 34, 14, 23, 6, 18};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> roads = {"........................................", "..r..S..................................", ".r.N....................................", "..N.h...................................", "...h.f..................................", ".S..f...................................", ".......L..M.............................", "......L.j...............................", ".......j.g..............................", "........g.R.............................", "......M..R..............................", "............n..C........................", "...........n.F..........................", "............F.V.........................", ".............V.D........................", "...........C..D.........................", ".................p..I...................", "................p.W.....................", ".................W.z....................", "..................z.J...................", "................I..J....................", "......................l..P..............", ".....................l.e................", "......................e.K...............", ".......................K.y..............", ".....................P..y...............", "...........................t..H.........", "..........................t.k...........", "...........................k.G..........", "............................G.E.........", "..........................H..E..........", "................................u..m....", "...............................u.v......", "................................v.o.....", ".................................o.Y....", "...............................m..Y.....", "........................................", "........................................", "........................................", "........................................"};
    vector<int> queries = {0, 1, 35, 34, 4, 31, 15, 17, 10, 11, 13, 33, 19, 12, 6, 8, 27, 3, 24, 21, 26, 7, 32, 2, 5, 14, 25, 20, 29, 30, 28, 18, 23, 22, 16, 9};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> roads = {"........................................", "..r..........V..........................", ".r.N....................................", "..N.h...................................", "...h.f..................................", "....f.S.................................", ".....S.L................................", "......L.j...............................", ".......j.g..............................", "........g.R.............................", ".........R.M............................", "..........M.n...........................", "...........n.F..........................", ".V..........F...........................", "...............D..........t.............", "..............D.C.......................", "...............C.p......................", "................p.W.....................", ".................W.z....................", "..................z.J...................", "...................J.I..................", "....................I.l.................", ".....................l.e................", "......................e.K...............", ".......................K.y..............", "........................y.P.............", "..............t..........P..............", "............................k..........d", "...........................k.G..........", "............................G.E.........", ".............................E.H........", "..............................H.u.......", "...............................u.v......", "................................v.o.....", ".................................o.Y....", "..................................Y.m...", "...................................m.x..", "....................................x.A.", ".....................................A.Z", "...........................d..........Z."};
    vector<int> queries = {0, 1, 39, 38, 33, 5, 28, 37, 27, 18, 22, 17, 32, 35, 11, 36, 2, 7, 25, 4, 10, 23, 12, 26, 13, 6, 15, 31, 24, 9, 29, 30, 19, 3, 14, 20, 21, 16, 8, 34};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> roads = {".AAABBBBABBBABABAABBBABAAABBAAABAABBABA", "A.ABBBBABABB.ABBB.AABBABABABAAAB.AABAA.", "AA.BBBB.AABBABAAABAABBBB.BBBAAABBAAAAAB", "ABB.BAAABBBABAAAABAAAABBABAABBAABBBBBBA", "BBBB.AAAAAABAABBBBBAAABAAAABAABBBBABBBA", "BBBAA.AB.BBABBABABABBBBABAAAAB.BAAABAAA", "BBBAAA.BABAAABBABAAAABABBAAABBAABBBBBBA", "BA.AABB.BABABBBBBAAABABAA.BBBAAAAAAABBB", "ABABA.AB.BBABBAAABABAABAAABABA.BBBBBABA", "BAABABBAB.BABAABBABABAABAABBBABAABBAAAB", "BBBBABABBB.BABBABBAA.BABB..AAAA.AABAAAA", "BBBABAAAAAB.ABA.ABBAA.AABBBBABBBBABBAAA", "A.ABABABBBAA.ABAAAAABABABBABBB.AABBBBAB", "BABAABBBBABBA.BAA.B.ABAAABABBAAABBAAABB", "ABAABABBAABABB.BAABBABBBBBBBBAAAAAAABAA", "BBAABBABABA.AAB.BAABABBBAABBAAAAABBAB.B", "ABAABABBABBAAAAB.ABAAAAABABBBABBABBBBAB", "A.BBBBAABABBA.AAA.ABBABBBA.AAABBAABBBA.", "BAAABAAAABABABBABA.BBBABBBBBABABAAAABBA", "BAAAABAABAAAA.BBABB.AABBBBBABBA.BBAAABB", "BBBAABABAB.ABAAAABBA.BAA.BBABAABBBABAAB", "ABBAABBAAAB.ABBBAABAB.AABAABBBBABBBAAA.", "BABBBBABBAAABABBABABAA.ABAABBBAAAABABBA", "ABBBAABAABBAAABBABBBAAA.ABBABAAABABBABB", "AA.AABBAAABBBABABBBB.BBA.BAAAB.A.AAABBB", "ABBBAAA.AA.BBBBAAABBBAABB.AAABABBBAABBA", "BABAAAABBB.BAABBB.BBBAABAA.AAAABBAABBAB", "BBBABAABABABBBBBBABAABBAAAA.ABBAABAAAAB", "AAABAABBBBAABBBABAABBBBBAAAA.BBABABBAAA", "AAABABBAAAABBAAAAABBABBABBABB.BBBBAAB..", "AAAAB.AA.BAB.AAABBAAABAA.AABBB.BBBBBBBB", "BBBABBAABA.BAAAABBB.BAAAABBAABB.AABAABB", "A.BBBABABAABABAAAAABBBAB.BBABBBA.AABABA", "AAABBABABBAABBABBAABBBAAABABABBAA.ABBBA", "BAABAABABBBBBAABBBAAABBBAAAABABBAA.AABB", "BBABBBBABAABBAAABBAABAABAABABABABBA.BAA", "AAABBABBAAAABABBBBBAAABABBBAABBAABAB.AB", "BAABBABBBAAAABA.AABBAABBBBAAA.BBBBBAA.A", "A.BAAAABABAABBABB.ABB.ABBABBA.BBAABABA."};
    vector<int> queries = {0, 1, 712, 711, 46, 400, 557, 470, 140, 545, 195, 117, 304, 508, 625, 360, 356, 25, 28, 621, 2, 700, 585, 130, 525, 47, 307, 264, 120, 478, 30, 560, 691, 423, 216, 568, 91, 505, 104, 401, 593, 252, 703, 204, 592, 147, 541, 458, 415, 294};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 0, 31, 1, 14, 29, 35, 5, 5, 27, 25, 26, 24, 24, 24, 20, 14, 0, 36, 3, 38, 37, 6, 15, 19, 2, 9, 6, 31, 1, 21, 34, 13, 1, 33, 16, 23, 7, 30, 34, 4, 36, 5, 27, 16, 16, 27, 31, 20};
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> roads = {".AAABBBBABBBABABAABBBABAAABBAAABAABBABA", "A.ABBBBABABB.ABBB.AABBABABABAAAB.AABAA.", "AA.BBBB.AABBABAAABAABBBB.BBBAAABBAAAAAB", "ABB.BAAABBBABAAAABAAAABBABAABBAABBBBBBA", "BBBB.AAAAAABAABBBBBAAABAAAABAABBBBABBBA", "BBBAA.AB.BBABBABABABBBBABAAAAB.BAAABAAA", "BBBAAA.BABAAABBABAAAABABBAABBBAABBBBBBA", "BA.AABB.BABABBBBBAAABABAA.BBBAAAAAAABBB", "ABABA.AB.BBABBAAABABAABAAABABA.BBBBBABA", "BAABABBAB.BABAABBABABAABAABBBABAABBAAAB", "BBBBABABBB.BABBABBAA.BABB..AAAA.AABAAAA", "BBBABAAAAAB.ABA.ABBAA.AABBBBABBBBABBAAA", "A.ABABABBBAA.ABAAAAABABABBABBB.AABBBBAB", "BABAABBBBABBA.BAA.B.ABAAABABBAAABBAAABB", "ABAABABBAABABB.BAABBABBBBBBBBAAAAAAABAA", "BBAABBABABA.AAB.BAABABBBAABBAAAAABBAB.B", "ABAABABBABBAAAAB.ABAAAAABABBBABBABBBBAB", "A.BBBBAABABBA.AAA.ABBABBBA.AAABBAABBBA.", "BAAABAAAABABABBABA.BBBABBBBBABABAAAABBA", "BAAAABAABAAAA.BBABB.AABBBBBABBA.BBAAABB", "BBBAABABAB.ABAAAABBA.BAA.BBABAABBBABAAB", "ABBAABBAAAB.ABBBAABAB.AABAABBBBABBBAAA.", "BABBBBABBAAABABBABABAA.ABAABBBAAAABABBA", "ABBBAABAABBAAABBABBBAAA.ABBABAAABABBABB", "AA.AABBAAABBBABABBBB.BBA.BAAAB.A.AAABBB", "ABBBAAA.AA.BBBBAAABBBAABB.AAABABBBAABBA", "BABAAAABBB.BAABBB.BBBAABAA.AAAABBAABBAB", "BBBABABBABABBBBBBABAABBAAAA.ABBAABAAAAB", "AAABAABBBBAABBBABAABBBBBAAAA.BBABABBAAA", "AAABABBAAAABBAAAAABBABBABBABB.BBBBAAB..", "AAAAB.AA.BAB.AAABBAAABAA.AABBB.BBBBBBBB", "BBBABBAABA.BAAAABBB.BAAAABBAABB.AABAABB", "A.BBBABABAABABAAAAABBBAB.BBABBBA.AABABA", "AAABBABABBAABBABBAABBBAAABABABBAA.ABBBA", "BAABAABABBBBBAABBBAAABBBAAAABABBAA.AABB", "BBABBBBABAABBAAABBAABAABAABABABABBA.BAA", "AAABBABBAAAABABBBBBAAABABBBAABBAABAB.AB", "BAABBABBBAAAABA.AABBAABBBBAAA.BBBBBAA.A", "A.BAAAABABAABBABB.ABB.ABBABBA.BBAABABA."};
    vector<int> queries = {0, 1, 712, 711, 119, 246, 673, 538, 466, 123, 481, 125, 501, 280, 14, 316, 434, 233, 444, 525, 96, 429, 516, 171, 401, 580, 345, 60, 310, 347, 110, 56, 426, 658, 374, 63, 407, 359, 555, 475, 64, 203, 253, 534, 268, 600, 486, 196, 77, 179};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> roads = {".AAABBBBABBBABABAABBBABAAABBAAABAABBABA", "A.ABBBBABABB.ABBB.AABBABABABAAAB.AABAA.", "AA.BBBB.AABBABAAABAABBBB.BBBAAABBAAAAAB", "ABB.BAAABBBABAAAABAAAABBABAABBAABBBBBBA", "BBBB.AAAAAABAABBBBBAAABAAAABAABBBBABBBA", "BBBAA.AB.BBABBABABABBBBABAAAAB.BAAABAAA", "BBBAAA.BABAAABBABAAAABABBAABBBAABBBBBBA", "BA.AABB.BABABBBBBAAABABAA.BBBAAAAAAABBB", "ABABA.AB.BBABBAAABABAABAAABABA.BBBBBABA", "BAABABBAB.BABAABBABABAABAABBBABAABBAAAB", "BBBBABABBB.BABBABBAA.BABB..AAAA.AABAAAA", "BBBABAAAAAB.ABA.ABBAA.AABBBBABBBBABBAAA", "A.ABABABBBAA.ABAAAAABABABBABBB.AABBBBAB", "BABAABBBBABBA.BAA.B.ABAAABABBAAABBAAABB", "ABAABABBAABABB.BAABBABBBBBBBBAAAAAAABAA", "BBAABBABABA.AAB.BAABABBBAABBAAAAABBAB.B", "ABAABABBABBAAAAB.ABAAAAABABBBABBABBBBAB", "A.BBBBAABABBA.AAA.ABBABBBA.AAABBABBBBA.", "BAAABAAAABABABBABA.BBBABBBBBABABAAAABBA", "BAAAABAABAAAA.BBABB.AABBBBBABBA.BBAAABB", "BBBAABABAB.ABAAAABBA.BAA.BBABAABBBABAAB", "ABBAABBAAAB.ABBBAABAB.AABAABBBBABBBAAA.", "BABBBBABBAAABABBABABAA.ABAABBBAAAABABBA", "ABBBAABAABBAAABBABBBAAA.ABBABAAABABBABB", "AA.AABBAAABBBABABBBB.BBA.BAAAB.A.AAABBB", "ABBBAAA.AA.BBBBAAABBBAABB.AAABABBBAABBA", "BABAAAABBB.BAABBB.BBBAABAA.AAAABBAABBAB", "BBBABABBABABBBBBBABAABBAAAA.ABBAABAAAAB", "AAABAABBBBAABBBABAABBBBBAAAA.BBABABBAAA", "AAABABBAAAABBAAAAABBABBABBABB.BBBBAAB..", "AAAAB.AA.BAB.AAABBAAABAA.AABBB.BBBBBBBB", "BBBABBAABA.BAAAABBB.BAAAABBAABB.AABAABB", "A.BBBABABAABABAAAAABBBAB.BBABBBA.AABABA", "AAABBABABBAABBABBBABBBAAABABABBAA.ABBBA", "BAABAABABBBBBAABBBAAABBBAAAABABBAA.AABB", "BBABBBBABAABBAAABBAABAABAABABABABBA.BAA", "AAABBABBAAAABABBBBBAAABABBBAABBAABAB.AB", "BAABBABBBAAAABA.AABBAABBBBAAA.BBBBBAA.A", "A.BAAAABABAABBABB.ABB.ABBABBA.BBAABABA."};
    vector<int> queries = {0, 1, 712, 711, 68, 384, 152, 485, 109, 635, 286, 358, 494, 215, 531, 176, 158, 673, 325, 287, 261, 240, 313, 690, 172, 335, 74, 669, 289, 703, 571, 154, 691, 339, 107, 318, 238, 194, 133, 572, 668, 132, 710, 676, 327, 504, 190, 11, 8, 471};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<string> roads = {".AAABBBBABBBABABAABBBABAAABBAAABAABBABA", "A.ABBBBABABB.ABBB.AABBABABABAAAB.AABAA.", "AA.BBBB.AABBABAAABAABBBB.BBBAAABBAAAAAB", "ABB.BAAABBBABAAAABAAAABBABAABBAABBBBBBA", "BBBB.AAAAAABAABBBBBAAABAAAABAABBBBABBBA", "BBBAA.AB.BBABBABABABBBBABAAAAB.BAAABAAA", "BBBAAA.BABAAABBABAAAABABBAABBBAABBBBBBA", "BA.AABB.BABABBBBBAAABABAA.BBBAAAAAAABBB", "ABABA.AB.BBABBAAABABAABAAABABA.BBBBBABA", "BAABABBAB.BABAABBABABAABAABBBABAABBAAAB", "BBBBABABBB.BABBABBAA.BABB..AAAA.AABAAAA", "BBBABAAAAAB.ABA.ABBAA.AABBBBABBBBABBAAA", "A.ABABABBBAA.ABAAAAABABABBABBB.AABBBBBB", "BABAABBBBABBA.BAA.B.ABAAABABBAAABBAAABB", "ABAABABBAABABB.BAABBABBBBBBBBAAAAAAABAA", "BBAABBABABA.AAB.BAABABBBAABBAAAAABBAB.B", "ABAABABBABBAAAAB.ABAAAAABABBBABBABBBBAB", "A.BBBBAABABBA.AAA.ABBABBBA.AAABBABBBBA.", "BAAABAAAABABABBABA.BBBABBBBBABABAAAABBA", "BAAAABAABAAAA.BBABB.AABBBBBABBA.BBAAABB", "BBBAABABAB.ABAAAABBA.BAA.BBABAABBBABAAB", "ABBAABBAAAB.ABBBAABAB.AABAABBBBABBBAAA.", "BABBBBABBAAABABBABABAA.ABAABBBAAAABABBA", "ABBBAABAABBAAABBABBBAAA.ABBABAAABABBABB", "AA.AABBAAABBBABABBBB.BBA.BAAAB.A.AAABBB", "ABBBAAA.AA.BBBBAAABBBAABB.AAABABBBAABBA", "BABAAAABBB.BAABBB.BBBAABAA.AAAABBAABBAB", "BBBABABBABABBBBBBABAABBAAAA.ABBAABAAAAB", "AAABAABBBBAABBBABAABBBBBAAAA.BBABABBAAA", "AAABABBAAAABBAAAAABBABBABBABB.BBBBAAB..", "AAAAB.AA.BAB.AAABBAAABAA.AABBB.BBBBBBBB", "BBBABBAABA.BAAAABBB.BAAAABBAABB.AABAABB", "A.BBBABABAABABAAAAABBBAB.BBABBBA.AABABA", "AAABBABABBAABBABBBABBBAAABABABBAA.ABBBA", "BAABAABABBBBBAABBBAAABBBAAAABABBAA.AABB", "BBABBBBABAABBAAABBAABAABAABABABABBA.BAA", "AAABBABBAAAABABBBBBAAABABBBAABBAABAB.AB", "BAABBABBBAAABBA.AABBAABBBBAAA.BBBBBAA.A", "A.BAAAABABAABBABB.ABB.ABBABBA.BBAABABA."};
    vector<int> queries = {0, 1, 712, 711, 666, 691, 319, 23, 118, 705, 548, 700, 73, 504, 491, 635, 400, 384, 25, 151, 300, 484, 244, 599, 607, 513, 172, 10, 182, 679, 655, 123, 369, 664, 208, 367, 48, 295, 236, 277, 98, 44, 261, 547, 190, 55, 390, 41, 130, 232};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<string> roads = {".AAABBBBABBBABABAABBBABAAABBAAABAABBABA", "A.ABBBBABABB.ABBB.AABBABABABAAAB.AABAA.", "AA.BBBB.AABBABAAABAABBBB.BBBAAABBAAAAAB", "ABB.AAAABBBABAAAABAAAABBABAABBAABBBBBBA", "BBBA.AAAAAABAABBBBBAAABAAAABAABBBBABBBA", "BBBAA.AB.BBABBABABABBBBABAAAAB.BAAABAAA", "BBBAAA.BABAAABBABAAAABABBAABBBAABBBBBBA", "BA.AABB.BABABBBBBAAABABAA.BBBAAAAAAABBB", "ABABA.AB.BBABBAAABABAABAAABABA.BBBBBABA", "BAABABBAB.BABAABBABABAABAABBBABAABBAAAB", "BBBBABABBB.BABBABBAA.BABB..AAAA.AABAAAA", "BBBABAAAAAB.ABA.ABBAA.AABBBBABBBBABBAAA", "A.ABABABBBAA.ABAAAAABABABBABBB.AABBBBBB", "BABAABBBBABBA.BAA.B.ABAAABABBAAABBAAABB", "ABAABABBAABABB.BAABBABBBBBBBBAAAAAAABAA", "BBAABBABABA.AAB.BAABABBBAABBAAAAABBAB.B", "ABAABABBABBAAAAB.ABAAAAABABBBABBABBBBAB", "A.BBBBAABABBA.AAA.ABBABBBA.AAABBABBBBA.", "BAAABAAAABABABBABA.BBBABBBBBABABAAAABBA", "BAAAABAABAAAA.BBABB.AABBBBBABBA.BBAAABB", "BBBAABABAB.ABAAAABBA.BAA.BBABAABBBABAAB", "ABBAABBAAAB.ABBBAABAB.AABAABBBBABBBAAA.", "BABBBBABBAAABABBABABAA.ABAABBBAAAABABBA", "ABBBAABAABBAAABBABBBAAA.ABBABAAABABBABB", "AA.AABBAAABBBABABBBB.BBA.BAAAB.A.AAABBB", "ABBBAAA.AA.BBBBAAABBBAABB.AAABABBBAABBA", "BABAAAABBB.BAABBB.BBBAABAA.AAAABBABBBAB", "BBBABABBABABBBBBBABAABBAAAA.ABBAABAAAAB", "AAABAABBBBAABBBABAABBBBBAAAA.BBABABBAAA", "AAABABBAAAABBAAAAABBABBABBABB.BBBBAAB..", "AAAAB.AA.BAB.AAABBAAABAA.AABBB.BBBBBBBB", "BBBABBAABA.BAAAABBB.BAAAABBAABB.AABAABB", "A.BBBABABAABABAAAAABBBAB.BBABBBA.AABABA", "AAABBABABBAABBABBBABBBAAABABABBAA.ABBBA", "BAABAABABBBBBAABBBAAABBBAABABABBAA.AABB", "BBABBBBABAABBAAABBAABAABAABABABABBA.BAA", "AAABBABBAAAABABBBBBAAABABBBAABBAABAB.AB", "BAABBABBBAAABBA.AABBAABBBBAAA.BBBBBAA.A", "A.BAAAABABAABBABB.ABB.ABBABBA.BBAABABA."};
    vector<int> queries = {0, 1, 712, 711, 636, 206, 430, 635, 347, 163, 705, 190, 684, 666, 123, 43, 135, 132, 80, 597, 70, 73, 444, 708, 522, 228, 611, 531, 642, 612, 158, 348, 559, 133, 307, 411, 175, 631, 328, 392, 27, 239, 13, 122, 463, 383, 470, 304, 201, 109};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<string> roads = {".AAABBBBABBBABABAABBBABAAABBAAABAABBABA", "A.ABBBBABABB.ABBB.AABBABABABAAAB.AABAA.", "AA.BBBB.AABBABAAABAABBBB.BBBAAABBAAAAAB", "ABB.AAAABBBABAAABBBAAABBABAABBBABBBBBBA", "BBBA.AAAAAAAAABBBBBAAABAAAABAABBBBABBBA", "BBBAA.AB.BBABBABABABBBBABAAAAB.BAAABAAA", "BBBAAA.BABAAABBAAAAAABABBAABBBAABBBBBBA", "BA.AABB.BABABBBBBAAABABAA.BBBAAAAAAABBB", "ABABA.AB.BBABBAAABABAABAAABABA.BBBBBABA", "BAABABBAB.BAAAABBABBBAABAABBBBBAABBBAAB", "BBBBABABBB.BABBABBAA.BABB..AAAA.AABAAAA", "BBBAAAAAAAB.ABA.ABBAA.AABBBBABBBBABBAAA", "A.ABABABBAAA.ABAAAAAAABABBABBB.AABBBBBB", "BABAABBBBABBA.BAA.B.ABAAABABBAAABBAAABB", "ABAABABBAABABB.BAABBABBBBBBBBAAAAAAABAA", "BBAABBABABA.AAB.AAABABBBAAABAAAAABBAB.B", "ABABBAABABBAAAAA.ABAAAAABABBBABBABBBBAB", "A.BBBBAABABBA.AAA.ABBABBBA.AAABBABBBBA.", "BAABBAAAABABABBABA.BBBABBBBBABABAABABBA", "BAAAABAABBAAA.BBABB.AABBBBBABBA.BBAAABB", "BBBAABABAB.AAAAAABBA.BAA.BBABAABABABAAB", "ABBAABBAAAB.ABBBAABAB.AABAABBBBABBBAAA.", "BABBBBABBAAABABBABABAA.ABAABBBAAAABABBA", "ABBBAABAABBAAABBABBBAAA.ABBABAAABABBABB", "AA.AABBAAABBBABABBBB.BBA.BAAAB.A.AAABBB", "ABBBAAA.AA.BBBBAAABBBAABB.AAABABBBAABBA", "BABAAAABBB.BAABAB.BBBAABAA.AAAABBABBBAB", "BBBABABBABABBBBBBABAABBAAAA.ABAAABAAAAB", "AAABAABBBBAABBBABAABBBBBAAAA.BBABABBAAA", "AAABABBAABABBAAAAABBABBABBABB.BBBBAAB..", "AAABB.AA.BAB.AAABBAAABAA.AAABB.BBBBBBBB", "BBBABBAABA.BAAAABBB.BAAAABBAABB.AABAABB", "A.BBBABABAABABAAAAABABAB.BBABBBA.AABABA", "AAABBABABBAABBABBBABBBAAABABABBAA.ABBBA", "BAABAABABBBBBAABBBBAABBBAABABABBAA.AABB", "BBABBBBABBABBAAABBAABAABAABABABABBA.BAA", "AAABBABBAAAABABBBBBAAABABBBAABBAABAB.AB", "BAABBABBBAAABBA.AABBAABBBBAAA.BBBBBAA.A", "A.BAAAABABAABBABB.ABB.ABBABBA.BBAABABA."};
    vector<int> queries = {0, 1, 712, 711, 90, 204, 641, 311, 212, 271, 596, 533, 109, 630, 234, 32, 524, 431, 199, 505, 264, 272, 324, 35, 427, 275, 186, 5, 309, 288, 263, 495, 262, 464, 503, 536, 140, 178, 63, 610, 517, 501, 302, 14, 528, 584, 23, 7, 368, 321};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<string> roads = {".AAABBBBABBBABABAAABBBBAAABBABABABBBAAA", "A.ABBBBABBBA.ABBB.AABBABABABAAAB.AABAA.", "AA.BBBB.AABBABAAABAABBBB.BBBAAABBAAAAAB", "ABB.AABABBBAAAAABABBAABBABBABBBABBBAABA", "BBBA.AAABAAAAABBBBBBAABAAAABAABBBBABBBA", "BBBAA.AB.BBABBAAAAABBBBABAAAAB.BAABBABB", "BBBBAA.BABAAABBAAAAAABABBAABBBBABBABBBA", "BA.AABB.BABABBBBBAAABABAA.BABBAAAAAAABB", "ABABB.AB.BBABAAAABABAABABABABB.ABBBBAAA", "BBABABBAB.BAAAABBABBBABBAAAABBBAABBBAAB", "BBBBABABBB.BABBABAAA.BABB..AAAA.AABAAAA", "BABAAAAAAAB.ABA.ABBAA.AABBBBABBBBABAAAA", "A.AAABABBAAA.AAAAAAAAABABAABAB.AABBBBBB", "BABAABBBAABBA.BAA.B.BBAAABABBAABBBAAABB", "ABAABABBAABAAB.BAAAAABBBBBBBBAAAAAAAABA", "BBAABAABABA.AAB.AAABBBBBAAABAAAAABBAB.B", "ABABBAABABBAAAAA.ABAABAABABBBABBABBABAB", "A.BABAAABAABA.AAA.ABBABBBB.AAABBABBBBA.", "AAABBAAAABABABAABA.BBBABABBBABABAABABBA", "BAABBBAABBAAA.ABABB.AAABBBBAABA.BBBAABB", "BBBAABABAB.AABABABBA.BAA.BBABAABABABAAB", "BBBAABBAAAB.ABBBBABAB.AABAABBBBABBBAAA.", "BABBBBABBBAABABBABAAAA.BBABBBBAAAABABAA", "ABBBAABAABBAAABBABBBAAB.ABBBBABBBAABABB", "AA.AABBABABBBABABBAB.BBA.BAAAB.B.AAABBB", "ABBBAAA.AA.BABBAABBBBAABB.AAABABBBBABBA", "BABBAAABBA.BAABAB.BBBABBAA.AAAABBABBBAB", "BBBABABAAAABBBBBBABAABBBAAA.ABBAAABAAAA", "AAABAABBBBAAABBABAAABBBBAAAA.BBABABBAAA", "BAABABBBBBABBAAAAABBABBABBABB.BABBAAB..", "AAABB.BA.BAB.AAABBAAABAB.AABBB.BBBBABBB", "BBBABBAAAA.BABAABBB.BAABBBBAAAB.AABAABB", "A.BBBABABAABABAAAAABABAB.BBABBBA.AAAAAB", "BAABBABABBAABBABBBABBBAAABAAABBAA.BBBBA", "BAABABAABBBBBAABBBBBABBAABBBBABBAB.ABBB", "BBAABBBABBAABAAAABAABAABAABABAAAABA.BAA", "AAAABABAAAAABAABBBBAAABABBBAABBAABBB.BB", "AAABBBBBAAAABBB.AABBAAABBBAAA.BBABBAB.A", "A.BAABABABAABBABB.ABB.ABBABAA.BBBABABA."};
    vector<int> queries = {0, 1, 712, 711, 13, 55, 654, 595, 211, 433, 599, 184, 489, 23, 369, 2, 408, 249, 705, 475, 247, 188, 162, 54, 224, 449, 241, 187, 230, 406, 589, 40, 203, 19, 15, 32, 470, 169, 586, 625, 361, 608, 387, 677, 44, 394, 579, 670, 479, 37};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<string> roads = {".AAABBBBABABABABBAABBBBAAABAABBAABABAAA", "A.BBBBBABBBB.BBBB.AABBABAABAAABA.AABBA.", "AB.ABAB.AABBABAAAAABBBBA.BABAAABBAABABB", "ABA.BABABABAABAABABAAAABABBABBAAABAAABB", "BBBB.AAAAAABAAABBBBBAABAAAABBBBBBBABBBA", "BBAAA.AB.BBABBAAABABBBBABAAAAB.BBABBABB", "BBBBAA.BABAAABABAAAAABAABAABBABABBABBBA", "BA.AABB.BABABBBBBAAABABBA.BABBAAAABAABB", "ABABA.AB.BBABBAAABABAAAABABAAB.ABBBAAAB", "BBAAABBAB.BAAAABBABBBABBABAABBBAAAAAAAB", "ABBBABABBB.BBBAAAAAA.AABB..AAAA.ABBABAA", "BBBABAAAAAB.AAA.ABBAA.BBBBBBABBBBABBAAA", "A.AAABABBABA.BAAAAABAABAAAABAB.AABBBBBB", "BBBBABBBBABAB.BAA.A.BBAAABAABABBBBAAAAB", "ABAAAAABAAAAAB.BAAAAAAABABABABAAAAAAABA", "BBAABABBABA.AAB.BBABBABBBAABBAAAAAAAB.B", "BBABBAABABAAAAAB.ABBABABAABBBAABABAABAB", "A.AABBAABAABA.ABA.ABBBABBB.AAABBBBBBBB.", "AAABBAAAABABAAAABA.BBBBBABBBABAAABBAABA", "BABABBAABBAAB.ABBBB.AAABBBBABBB.BBBAABB", "BBBAABABAB.AABABABBA.BBA.AAABAABBBABAAB", "BBBAABBAAAA.ABAABBBAB.BAAAABBBBAABBAAB.", "BABABBABABABBAABAABABB.BBAABBBABAABABAA", "ABABAAABABBBAABBBBBBAAB.AABBBABBBBAAABB", "AA.AABBABABBAAABABAB.ABA.BAABB.B.AAAABB", "AABBAAA.AB.BABBAABBBAAAAB.AAABABABBABBA", "BBABAAABBA.BAAAAB.BBAAABAA.BAAAABAABBAB", "AABABABAAAABBABBBABAABBBAAB.ABBABABAABA", "AAABBABBABAAABABBAABBBBBBAAA.BBAAABBAAA", "BAABBBABBBABBABAAABBABBABBABB.BABBAAA..", "BBAAB.BA.BAB.BAAABABABAB.AABBB.ABBBABBB", "AABABBAAAA.BABAABBA.BABBBBAAAAA.AABABAB", "A.BABBBABAABABAAABABBAAB.ABBABBA.AAAAAB", "BAABBABABABABBAABBBBBBABABAAABBAA.BBABA", "AAAAABABBABBBAAAABBBABBAABABBABBAB.ABBB", "BBBABBBAAAABBAAAABAABAAAAABABAAAABA.AAA", "ABAABABAAABABAABBBAAAABAABBAAABBAABA.BA", "AABBBBBBAAAABAB.ABBBABABBBABA.BAABBAB.A", "A.BBABABBBAABBABB.ABB.ABBABAA.BBBABAAA."};
    vector<int> queries = {0, 1, 712, 711, 615, 253, 506, 101, 490, 566, 341, 708, 497, 626, 238, 42, 22, 671, 233, 265, 267, 682, 188, 669, 44, 358, 370, 303, 601, 498, 261, 586, 602, 231, 666, 383, 685, 397, 107, 633, 657, 45, 679, 170, 220, 369, 292, 150, 471, 398};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<string> roads = {".BBBBAAAAABBBBABBA..AAA.AAABA.BBA.BBABBA", "B.AB.ABBBBA.ABBB.A.AB.BABAAAA.BAA..AB...", "BA.BBBABABA.BBAAAAAB.BAABBBAAA.ABABBBAAB", "BBB.BABABAA.BAB.BBA.BAABB.AAAAABABB.AAAB", "B.BB.ABAABBBAAABA.BABABABB.BAAAABA.ABBA.", "AABAA..BB.BBBBBAAB.BBAABAABAAB.AAB.AB..A", "ABABB...ABAB..ABB.AA.BB..AABAAAAABBB...B", "ABBAAB..BAB.BAABABBABBABAABABAAABB.AABBA", "ABABABAB.ABB.AABBB.ABABAB.BBA.ABAAA.ABAB", "ABBAB.BAA.AAB.BABAABBBBBAA.ABABAB.AB...A", "BAAABBABBA.BAB.BABAABBAABABAB.BBAAAAAB.B", "B...BBB.BAB.BAAABBBAAAAAABBBA.ABBAA.ABA.", "BABBAB.B.BAB..BABAB.AAA.BABA.AABBAAABAB.", "BBBAAB.AA.BA....B..A..BBAB.AAA.ABBBABBAA", "ABABABAAAB.AB..BAABA.A.BA.ABBBA..ABBBBAB", "BBA.BABBBABAA.B.AABBAAA.BAAABBBBABABAABA", "B.ABAABABBABBBAA.B.BA.BAAAAABBAAA..B..BB", "AAAB.B.BBABBA.AAB.A.A.BAABBABABBBBBAA.A.", "..AAB.AB.AABB.BB.A.ABA.BABAAA...ABBB.B..", ".AB.ABAAABAA.AABB.A.B..AABBB.B.BAABABBB.", "AB.BBB.BBBBAA..AAABB.A.BABA.BABAAB.AA..A", "A.BAAABBABBAA.AA..A.A.ABBBBBAABBBBAAB..B", "ABAABABABBAAAB.ABB...A.BBBAABB.BAAB.A.BA", ".AABAB.BABAA.BB.AABABBB.BAABABAABBB.AAAB", "ABBBBA.ABABABAABAAAAABBB.AAABB.AABBAB.BB", "AAB.BAAA.AABAB.AABBBBBBAA.ABBABABABABABB", "AABA.BABB.BBB.AAABABABAAAA..BBBBABBBA.AA", "BAAABABABAABAABAAAAB.BABAB..BABB.B.B.ABB", "AAAAAAABABBA.ABBBBA.BABABBBB.B.BBAA.A.AB", "..AAABAA.A..AABBBA.BAABBBABAB.B.BBABABAB", "BB.AA.AAABBAA.ABAB..BB.A.BBB.B.AB.AABABA", "BAABAAAABABBBA.BAB.BABBAAABBB.A.BAAABBBA", "AABABAABABABBB.AABAAABABABA.BBBB.AABBAB.", "..ABABBBA.AAABAB.BBABBABBABBAB.AA.ABA..A", "B.BB..B.AAAAABBA.BBB.ABBBBB.AAAAAA.BBAAA", "BAB.AABA.BA.AABBBABAAA..AABB.BAABBB.B.AB", "ABBABB.AA.AABBBA.A.BABAABBA.AABBBABB.ABA", "B.AAB..BB.BBABBA..BB...A.A.A.BABA.A.A..A", "B.AAA..BA..ABAABBA.B..BABBABAABBB.AAB...", "A.BB.ABABAB..ABAB...ABABBBABBBAA.AABAA.."};
    vector<int> queries = {0, 1, 646, 645, 361, 562, 416, 99, 596, 266, 557, 16, 166, 273, 488, 560, 600, 185, 435, 14, 590, 242, 120, 147, 478, 551, 419, 105, 533, 168, 595, 349, 104, 132, 126, 621, 497, 534, 342, 515, 92, 494, 212, 640, 32, 556, 594, 34, 495, 154};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 0, 39, 3, 30, 8, 5, 26, 21, 21, 5, 21, 2, 21, 19, 38, 23, 28, 0, 38, 28, 13, 8, 35, 34, 11, 2, 26, 24, 39, 22, 13, 14, 16, 37, 30, 24, 10, 38, 28, 23, 19, 35, 9, 36, 21, 8, 24, 18};
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<string> roads = {".BBBBAAAAABBBBABBA..AAA.AAABA.BBA.BBABBA", "B.AB.ABBBBA.ABBB.A.AB.BABAAAA.BAA..AB...", "BA.BBBABABA.BBAAAAAB.BAABBBAAB.ABABBBAAB", "BBB.BABABAA.BAB.BBA.BAABB.AAAAABABB.AAAB", "B.BB.ABAABBBAAABA.BABABABB.BAAAABA.ABBA.", "AABAA..BB.BBBBBAAB.BBAABAABAAB.AAB.AB..A", "ABABB...ABAB..ABB.AA.BB..AABAAAAABBB...B", "ABBAAB..BAB.BAABABBABBABAABABAAABB.AABBA", "ABABABAB.ABB.AABBB.ABABAB.BBA.ABAAA.ABAB", "ABBAB.BAA.AAB.BABAABBBBBAA.ABABAB.AB...A", "BAAABBABBA.BAB.BABAABBAABABAB.BBAAAAAB.B", "B...BBB.BAB.BAAABBBAAAAAABBBA.ABBAA.ABA.", "BABBAB.B.BAB..BABAB.AAA.BABA.AABBAAABAB.", "BBBAAB.AA.BA....B..A..BBAB.AAA.ABBBABBAA", "ABABABAAAB.AB..BAABA.A.BA.ABBBA..ABBBBAB", "BBA.BABBBABAA.B.AABBAAA.BAAABBBBABABAABA", "B.ABAABABBABBBAA.B.BA.BAAAAABBAAA..B..BB", "AAAB.B.BBABBA.AAB.A.A.BAABBABABBBBBAA.A.", "..AAB.AB.AABB.BB.A.ABA.BABAAA...ABBB.B..", ".AB.ABAAABAA.AABB.A.B..AABBB.B.BAABABBB.", "AB.BBB.BBBBAA..AAABB.A.BABA.BABAAB.AA..A", "A.BAAABBABBAA.AA..A.A.ABBBBBAABBBBAAB..B", "ABAABABABBAAAB.ABB...A.BBBAABB.BAAB.A.BA", ".AABAB.BABAA.BB.AABABBB.BAABABAABBB.AAAB", "ABBBBA.ABABABAABAAAAABBB.AAABB.AABBAB.BB", "AAB.BAAA.AABAB.AABBBBBBAA.ABBABABABABABB", "AABA.BABB.BBB.AAABABABAAAA..BBBBABBBA.AA", "BAAABABABAABAABAAAAB.BABAB..BABB.B.B.ABB", "AAAAAAABABBA.ABBBBA.BABABBBB.B.BBAA.A.AB", "..BAABAA.A..AABBBA.BAABBBABAB.B.BBABABAB", "BB.AA.AAABBAA.ABAB..BB.A.BBB.B.AB.AABABA", "BAABAAAABABBBA.BAB.BABBAAABBB.A.BAAABBBA", "AABABAABABABBB.AABAAABABABA.BBBB.AABBAB.", "..ABABBBA.AAABAB.BBABBABBABBAB.AA.ABA..A", "B.BB..B.AAAAABBA.BBB.ABBBBB.AAAAAA.BBAAA", "BAB.AABA.BA.AABBBABAAA..AABB.BAABBB.B.AB", "ABBABB.AA.AABBBA.A.BABAABBA.AABBBABB.ABA", "B.AAB..BB.BBABBA..BB...A.A.A.BABA.A.A..A", "B.AAA..BA..ABAABBA.B..BABBABAABBB.AAB...", "A.BB.ABABAB..ABAB...ABABBBABBBAA.AABAA.."};
    vector<int> queries = {0, 1, 646, 645, 151, 439, 11, 551, 595, 288, 438, 33, 568, 149, 241, 585, 402, 509, 264, 82, 486, 299, 357, 387, 3, 564, 221, 89, 124, 643, 40, 168, 181, 126, 535, 167, 109, 384, 418, 98, 642, 279, 85, 294, 588, 517, 411, 143, 424, 401};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<string> roads = {".BBBBAAAAABBBBABBA..AAA.AAABA.BBA.BBABBA", "B.AB.ABBBBA.ABBB.A.AB.BABAAAA.BAA..BB...", "BA.BBBABABA.BBAAAAAB.BAABBBAAB.ABABBBAAB", "BBB.BABABAA.BAB.BBA.BAABB.AAAAABABB.AAAB", "B.BB.ABAABBBAAABA.BABABABB.BAAAABA.ABBA.", "AABAA..BB.BBBBBAAB.BBAABAABAAB.AAB.AB..A", "ABABB...ABAB..ABB.AA.BB..AABAAAAABBB...B", "ABBAAB..BAB.BAABABBABBABAABABAAABB.AABBA", "ABABABAB.ABB.AABBB.ABABAB.BBA.ABAAA.ABAB", "ABBAB.BAA.AAB.BABAABBBBBAA.ABABAB.AB...A", "BAAABBABBA.BAB.BABAABBAABABAB.BBAAAAAB.B", "B...BBB.BAB.BAAABBBAAAAAABBBA.ABBAA.ABA.", "BABBAB.B.BAB..BABAB.AAA.BABA.AABBAAABAB.", "BBBAAB.AA.BA....B..A..BBAB.AAA.ABBBABBAA", "ABABABAAAB.AB..BAABA.A.BA.ABBBA..ABBBBAB", "BBA.BABBBABAA.B.AABBAAA.BAAABBBBABABAABA", "B.ABAABABBABBBAA.B.BA.BAAAAABBAAA..B..BB", "AAAB.B.BBABBA.AAB.A.A.BAABBABABBBBBAA.A.", "..AAB.AB.AABB.BB.A.ABA.BABAAA...ABBB.B..", ".AB.ABAAABAA.AABB.A.B..AABBB.B.BAABABBB.", "AB.BBB.BBBBAA..AAABB.A.BABA.BABAAB.AA..A", "A.BAAABBABBAA.AA..A.A.ABBBBBAABBBBAAB..B", "ABAABABABBAAAB.ABB...A.BBBAABB.BAAB.A.BA", ".AABAB.BABAA.BB.AABABBB.BAABABAABBB.AAAB", "ABBBBA.ABABABAABAAAAABBB.AAABB.AABBAB.BB", "AAB.BAAA.AABAB.AABBBBBBAA.ABBABABABABABB", "AABA.BABB.BBB.AAABABABAAAA..BBBBABBBA.AA", "BAAABABABAABAABAAAAB.BABAB..BABB.B.B.ABB", "AAAAAAABABBA.ABBBBA.BABABBBB.B.BBAA.A.AB", "..BAABAA.A..AABBBA.BAABBBABAB.B.BBABABAB", "BB.AA.AAABBAA.ABAB..BB.A.BBB.B.AB.AABABA", "BAABAAAABABBBA.BAB.BABBAAABBB.A.BAAABBBA", "AABABAABABABBB.AABAAABABABA.BBBB.AABBAB.", "..ABABBBA.AAABAB.BBABBABBABBAB.AA.ABA..A", "B.BB..B.AAAAABBA.BBB.ABBBBB.AAAAAA.BBAAA", "BBB.AABA.BA.AABBBABAAA..AABB.BAABBB.B.AB", "ABBABB.AA.AABBBA.A.BABAABBA.AABBBABB.ABA", "B.AAB..BB.BBABBA..BB...A.A.A.BABA.A.A..A", "B.AAA..BA..ABAABBA.B..BABBABAABBB.AAB...", "A.BB.ABABAB..ABAB...ABABBBABBBAA.AABAA.."};
    vector<int> queries = {0, 1, 646, 645, 396, 267, 32, 310, 82, 295, 193, 365, 84, 220, 134, 426, 408, 476, 334, 462, 29, 4, 248, 405, 494, 610, 413, 630, 407, 572, 278, 518, 243, 128, 68, 6, 97, 61, 296, 335, 100, 387, 251, 60, 445, 406, 206, 422, 427, 350};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<string> roads = {".BBBBAAAAABBBBABBA..AAA.AAABA.BBA.BBABBA", "B.AB.ABBBBA.ABBB.A.AB.BABAAAA.BAA..BB...", "BA.BBBABABA.BBAAAAAB.BAABBBAAB.ABABBBAAB", "BBB.BABABAA.BAB.BBA.BAABB.AAAAABABB.AAAB", "B.BB.ABAABBBAAABA.BABABABB.BAAAABA.ABBA.", "AABAA..BB.BBBBBAAB.BBAABAABAAB.AAB.AB..A", "ABABB...ABAB..ABB.AA.BB..AABAAAAABBB...B", "ABBAAB..BAB.BAABABAABBABAABABAAABB.AABBA", "ABABABAB.ABB.AABBB.ABABAB.BBA.ABAAA.ABAB", "ABBAB.BAA.AAB.BABAABBBBBAA.ABABAB.AB...A", "BAAABBABBA.BAB.BABAABBAABABAB.BBAAAAAB.B", "B...BBB.BAB.BAAABBBAAAAAABBBA.ABBAA.ABA.", "BABBAB.B.BAB..BABAB.AAA.BABA.AABBAAABAB.", "BBBAAB.AA.BA....B..A..BBAB.AAA.ABBBABBAA", "ABABABAAAB.AB..BAABA.A.BA.ABBBA..ABBBBAB", "BBA.BABBBABAA.B.AABBAAA.BAAABBBBABABAABA", "B.ABAABABBABBBAA.B.BA.BAAAAABBAAA..B..BB", "AAAB.B.BBABBA.AAB.A.A.BAABBABABBBBBAA.A.", "..AAB.AA.AABB.BB.A.ABA.BABAAA...ABBB.B..", ".AB.ABAAABAA.AABB.A.B..AABBB.B.BAABABBB.", "AB.BBB.BBBBAA..AAABB.A.BABA.BABAAB.AA..A", "A.BAAABBABBAA.AA..A.A.ABBBBBAABBBBAAB..B", "ABAABABABBAAAB.ABB...A.BBBAABB.BAAB.A.BA", ".AABAB.BABAA.BB.AABABBB.BAABABAABBB.AAAB", "ABBBBA.ABABABAABAAAAABBB.AAABB.AABBAB.BB", "AAB.BAAA.AABAB.AABBBBBBAA.ABBABABABABABB", "AABA.BABB.BBB.AAABABABAAAA..BBBBABBBA.AA", "BAAABABABAABAABAAAAB.BABAB..BABB.B.B.ABB", "AAAAAAABABBA.ABBBBA.BABABBBB.B.BBAA.A.AB", "..BAABAA.A..AABBBA.BAABBBABAB.B.BBABABAB", "BB.AA.AAABBAA.ABAB..BB.A.BBB.B.AB.AABABA", "BAABAAAABABBBA.BAB.BABBAAABBB.A.BAAABBBA", "AABABAABABABBB.AABAAABABABA.BBBB.AABBAB.", "..ABABBBA.AAABAB.BBABBABBABBAB.AA.ABA..A", "B.BB..B.AAAAABBA.BBB.ABBBBB.AAAAAA.BBAAA", "BBB.AABA.BA.AABBBABAAA..AABB.BAABBB.B.AB", "ABBABB.AA.AABBBA.A.BABAABBA.AABBBABB.ABA", "B.AAB..BB.BBABBA..BB...A.A.A.BABA.A.A..A", "B.AAA..BA..ABAABBA.B..BABBABAABBB.AAB...", "A.BB.ABABAB..ABAB...ABABBBABBBAA.AABAA.."};
    vector<int> queries = {0, 1, 646, 645, 546, 288, 198, 607, 174, 590, 407, 397, 389, 429, 470, 540, 601, 391, 25, 248, 580, 337, 106, 409, 289, 555, 137, 313, 305, 56, 132, 584, 379, 93, 544, 363, 412, 84, 129, 85, 278, 435, 178, 8, 579, 61, 503, 104, 89, 426};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<string> roads = {".BBBBAAAAABBBBABBA..AAA.AAABA.BBA.BBABBA", "B.AB.ABBBBA.ABBB.A.AB.BABAAAA.BAA..BB...", "BA.BBBABABA.BBAAAAAB.BAABBBAAB.ABABBBAAB", "BBB.BABABAA.BAB.BBA.BAABB.AAAAABABB.AAAB", "B.BB.ABAABBBAAABA.BABABABB.BAAAABA.ABBA.", "AABAA..BB.BBBBBAAB.BBAABAABAAB.AAB.AB..A", "ABABB...ABAB..ABB.AA.BB..AABAAAAABBB...B", "ABBAAB..BAB.BAABABAABBABAABABAAABB.AABBA", "ABABABAB.ABB.AABBB.ABABAB.BBA.ABAAA.ABAB", "ABBAB.BAA.AAB.BABAABBBBBAA.ABABAB.AB...A", "BAAABBABBA.BAB.BABAABBAABABAB.BBAAAAAB.B", "B...BBB.BAB.BAAABBBAAAAAABBBA.ABBAA.ABA.", "BABBAB.B.BAB..BABAB.AAA.BABA.AABBAAABAB.", "BBBAAB.AA.BA....B..A..BBAB.AAA.ABBBABBAA", "ABABABAAAB.AB..BAABA.A.BA.ABBBA..ABBBBAB", "BBA.BABBBABAA.B.AABBAAA.BAAABBBBABABAABA", "B.ABAABABBABBBAA.B.BA.BAAAAABBAAA..B..BB", "AAAB.B.BBABBA.AAB.A.A.BAABBBBABBBBBAA.A.", "..AAB.AA.AABB.BB.A.ABA.BABAAA...ABBB.B..", ".AB.ABAAABAA.AABB.A.B..AABBB.B.BAABABBB.", "AB.BBB.BBBBAA..AAABB.A.BABA.BABAAB.BA..A", "A.BAAABBABBAA.AA..A.A.ABBBBBAABBBBAAB..B", "ABAABABABBAAAB.ABB...A.BBBAABB.BAAB.A.BA", ".AABAB.BABAA.BB.AABABBB.BAABABAABBB.AAAB", "ABBBBA.ABABABAABAAAAABBB.AAABB.AABBAB.BB", "AAB.BAAA.AABAB.AABBBBBBAA.ABBABABABABABB", "AABA.BABB.BBB.AAABABABAAAA..BBBBABBBA.AA", "BAAABABABAABAABAABAB.BABAB..BABB.B.B.ABB", "AAAAAAABABBA.ABBBBA.BABABBBB.B.BBAA.A.AB", "..BAABAA.A..AABBBA.BAABBBABAB.B.BBABABAB", "BB.AA.AAABBAA.ABAB..BB.A.BBB.B.AB.AABABA", "BAABAAAABABBBA.BAB.BABBAAABBB.A.BAAABBBA", "AABABAABABABBB.AABAAABABABA.BBBB.AABBAB.", "..ABABBBA.AAABAB.BBABBABBABBAB.AA.ABA..A", "B.BB..B.AAAAABBA.BBB.ABBBBB.AAAAAA.BBAAA", "BBB.AABA.BA.AABBBABABA..AABB.BAABBB.B.AB", "ABBABB.AA.AABBBA.A.BABAABBA.AABBBABB.ABA", "B.AAB..BB.BBABBA..BB...A.A.A.BABA.A.A..A", "B.AAA..BA..ABAABBA.B..BABBABAABBB.AAB...", "A.BB.ABABAB..ABAB...ABABBBABBBAA.AABAA.."};
    vector<int> queries = {0, 1, 646, 645, 554, 249, 99, 250, 183, 535, 421, 168, 44, 463, 330, 446, 462, 294, 264, 165, 124, 5, 306, 149, 156, 259, 395, 110, 553, 202, 272, 569, 176, 265, 270, 90, 576, 580, 389, 570, 256, 262, 468, 400, 18, 436, 519, 458, 518, 539};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<string> roads = {".BBBBAAAAABBBBABBA..AAB.BAABA.BBA.BBABBA", "B.AB.ABBBBA.ABBB.A.AB.BABAAAA.BAA..BB...", "BA.BBBABABA.BBAAAAAB.BAABBBAAB.ABABBBAAB", "BBB.BABABAA.BAB.BBA.BAABB.AAAAABABB.AAAB", "B.BB.AAAABBBBAABA.BABABABB.BAAAABA.ABBA.", "AABAA..BB.BBBBBAAB.BBAABAABAAB.AAB.AB..A", "ABABA...ABAB..ABB.AA.BB..AABAAAABBBB...B", "ABBAAB..BBB.BAABABAABBABAABABBAABB.AABBA", "ABABABAB.ABB.AABBB.ABABAB.BBA.ABAAA.ABAB", "ABBAB.BBA.AAB.BABAABBBBBAA.ABABAB.AB...A", "BAAABBABBA.BAB.BABAABBAABABAB.BBAAAAAB.B", "B...BBB.BAB.BAAABBBAAAAAABBBA.ABBAA.ABA.", "BABBBB.B.BAB..BABAB.BAA.BABB.AABBAAABAB.", "BBBAAB.AA.BA....B..A..BBAB.AAA.ABBBABBAA", "ABABABAAAB.AB..BAABA.A.BA.ABBBA..ABBBBAB", "BBA.BABBBABAA.B.AABBAAA.BAAABBBBABABAABA", "B.ABAABABBABBBAA.B.BA.BAAAAABBAAA..B..BB", "AAAB.B.BBABBA.AAB.A.A.BAABBBBABBABBAA.A.", "..AAB.AA.AABB.BB.A.ABA.BABAAA...ABBB.B..", ".AB.ABAAABAA.AABB.A.B..AABBB.B.BAABABBB.", "AB.BBB.BBBBAB..AAABB.A.BABA.BABAAB.BB..A", "A.BAAABBABBAA.AA..A.A.ABBBBBAABBBBAAB..B", "BBAABABABBAAAB.ABB...A.BBBAABB.BBAB.A.BA", ".AABAB.BABAA.BB.AABABBB.BAABABAABBB.AAAB", "BBBBBA.ABABABAABAAAAABBB.AAABB.AABBAB.BB", "AAB.BAAA.AABAB.AABBBBBBAA.AABABABABABABB", "AABA.BABB.BBB.AAABABABAAAA..BBBBAABBA.AA", "BAAABABABAABBABAABAB.BABAA..BABB.B.B.ABB", "AAAAAAABABBA.ABBBBA.BABABBBB.B.BAAA.A.AB", "..BAABAB.A..AABBBA.BAABBBABAB.B.BBABABAB", "BB.AA.AAABBAA.ABAB..BB.A.BBB.B.AB.AABABA", "BAABAAAABABBBA.BAB.BABBAAABBB.A.BAAABBBA", "AABABABBABABBB.AAAAAABBBABA.ABBB.AABBAB.", "..ABABBBA.AAABAB.BBABBABBAABAB.AA.ABA..A", "B.BB..B.AAAAABBA.BBB.ABBBBB.AAAAAA.BBAAA", "BBB.AABA.BA.AABBBABABA..AABB.BAABBB.B.AB", "ABBABB.AA.AABBBA.A.BBBAABBA.AABBBABB.ABA", "B.AAB..BB.BBABBA..BB...A.A.A.BABA.A.A..A", "B.AAA..BA..ABAABBA.B..BABBABAABBB.AAB...", "A.BB.ABABAB..ABAB...ABABBBABBBAA.AABAA.."};
    vector<int> queries = {0, 1, 646, 645, 590, 384, 106, 112, 60, 569, 631, 265, 452, 90, 463, 558, 14, 513, 174, 119, 235, 32, 321, 617, 52, 332, 175, 263, 163, 80, 140, 627, 435, 442, 400, 128, 613, 224, 561, 374, 312, 55, 170, 522, 264, 454, 178, 19, 125, 275};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<string> roads = {".BBBBAAAAABBBBABAA..AAB.BAABA.ABA.BBABBA", "B.AB.ABBBBA.AABB.A.AB.BBAAAAA.BAA..BB...", "BA.BABABABA.BBAAAAAB.BAAABAAAA.ABABBBAAB", "BBB.BAAABAA.BAB.BBA.BAABB.BAAAABABB.AAAB", "B.AB.AAAABBBBAABA.BAAABABB.BAAAABA.ABBA.", "AABAA..BB.BBBBBBAB.BBAAAAABAAB.BAB.BB..A", "ABAAA...ABAB..ABB.AA.BB..AAAAAAABABB...B", "ABBAAB..BBB.BAABABAABBABAABABAAABB.AABBA", "ABABABAB.BBB.AABBB.ABABAB.BBA.ABAAA.ABAB", "ABBAB.BBB.AAB.BBBAABBBBBAA.AAABAA.AB...A", "BAAABBABBA.AAB.BAAAABBAABABBB.BAAAAAAB.B", "B...BBB.BAA.BAAABBABAAAABBBBA.ABBAA.ABB.", "BABBBB.B.BAB..BABAB.BAA.BABB.AABBAAABAB.", "BABAAB.AA.BA....B..A..AAAB.AAA.ABBAABBAA", "ABABABAAAB.AB..BABBB.A.AA.AAABA..ABBBBAB", "BBA.BBBBBBBAA.B.ABBBAAA.BAAABBBAABABAAAA", "A.ABAABABBABBBAA.B.BA.BAAAAABBAAA..B..BB", "AAAB.B.BBAABA.BBB.A.A.BAABBABABBBBBAA.A.", "..AAB.AA.AAAB.BB.A.BBA.BAAAAA...ABAB.A..", ".AB.ABAAABAB.ABBB.B.B..AABAB.B.BBABABBB.", "AB.BAB.BBBBAB..AAABB.A.AABA.BABAAB.BB..A", "A.BAAABBABBAA.AA..A.A.ABBBABAABBBBAAB..B", "BBAABABABBAAAA.ABB...A.BAAAAAB.BBAB.A.AA", ".BABAA.BABAA.AA.AABAABB.BAABABAABBA.AAAB", "BAABBA.ABABBBAABAAAAABAB.BAABB.ABBBAB.BB", "AAB.BAAA.AABAB.AABABBBAAB.AABABABABABABB", "AAAB.BABB.BBB.AAABAAAAAAAA..BBBBBABAA.AA", "BAAABAAABABBBAAAAAAB.BABAA..BABB.B.B.ABB", "AAAAAAABAABA.AABBBA.BAAABBBB.B.BAAA.A.AB", "..AAABAA.A..AABBBA.BAABBBABAB.B.BAABABAB", "AB.AA.AAABBAA.ABAB..BB.A.BBB.B.AB.AABAAA", "BAABABAABAABBA.AAB.BABBAAABBB.A.AAAAAABA", "AABABABBAAABBB.AABABABBBBBB.ABBA.ABBBAB.", "..ABABABA.AAABAB.BBABBABBAABAA.AA.ABA..A", "B.BB..B.AAAAAABA.BAB.ABABBB.AAAABA.BBAAA", "BBB.ABBA.BA.AABBBABABA..AAAB.BAABBB.A.AB", "ABBABB.AA.AABBBA.A.BBBAABBA.AABABABA.ABA", "B.AAB..BB.BBABBA..AB...A.A.A.BAAA.A.A..A", "B.AAA..BA..BBAAABA.B..AABBABAAABB.AAB...", "A.BB.ABABAB..ABAB...ABABBBABBBAA.AABAA.."};
    vector<int> queries = {0, 1, 646, 645, 122, 230, 86, 487, 381, 290, 559, 550, 390, 350, 337, 558, 361, 344, 39, 572, 473, 554, 34, 208, 418, 495, 285, 360, 173, 347, 249, 80, 555, 506, 445, 356, 3, 482, 561, 375, 67, 449, 626, 244, 565, 574, 486, 613, 47, 546};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<string> roads = {".BBBBAABBBBABBABAA..BAB.BAAAA.ABA.ABABBA", "B.AB.BBBBBA.AABB.B.AB.BBBABBA.BBA..BB...", "BA.BABABABB.ABAAAAAB.AAAABABAA.ABABBBAAB", "BBB.AAAABAB.BAB.BBA.BAABB.AAAAABBBB.ABBB", "B.AA.AAAABBBBBABA.AAABBABB.BAAAABA.AABA.", "ABBAA..BB.BBBBAAAB.BBAAAAAAAAB.BAB.BB..A", "ABAAA...ABAB..ABA.AB.BB..ABAABABABBB...B", "BBBAAB..BBB.BABBABAAABABBABBBBBABB.AABBA", "BBABABAB.BAB.AABBB.AAAAAA.BBA.ABBAA.ABAA", "BBBAB.BBB.AAB.ABBAABBBBBAA.AABBAA.AB...A", "BABBBBABAA.AAA.AAAAAABAABABBB.BABAAAAB.B", "A...BBB.BAA.BAAABAABAAAAABABA.ABBAA.ABB.", "BAABBB.B.BAB..BAAAB.BBA.BABB.AABAAAABAA.", "BABABB.AA.AA....B..A..AAAB.AAA.BABAAABAA", "ABABAAABAA.AB..AABAA.A.AB.AAABA..BBABBAB", "BBA.BABBBBAAA.A.ABBABAA.AAAABBBAABBBAABB", "A.ABAAAABBABABAA.B.AA.BAAAAABBAAA..B..BB", "ABAB.B.BBAAAA.BBB.A.A.AAABBABABBBBBAB.A.", "..AAA.AA.AAAB.AB.A.BBA.BAAAAA...ABAB.B..", ".AB.ABBAABAB.AAAA.B.B..AABAB.B.BBAAAABB.", "BB.BAB.AABAAB..BAABB.B.AABA.BABAAA.BB..A", "A.AABABBABBAB.AA..A.B.ABBBBAAABBBAAAA..B", "BBAABABAABAAAA.ABA...A.BAAAABB.BAAB.A.AA", ".BABAA.BABAA.AA.AABAABB.BBABABAAABA.AAAB", "BBABBA.BAABABABAAAAAABAB.BAAAB.ABBBBA.BB", "AAB.BAAA.AABAB.AABABBBABB.AABBBAAABBBABA", "ABAA.ABBB.BAB.AAABAAABAAAA..BBBBBABAA.AA", "ABBABAABBABBBAAAAAAB.AABAA..BABA.B.A.ABB", "AAAAAAABAABA.AABBBA.BABAABBB.B.BAAA.A.AA", "..AAABBB.B..AABBBA.BAABBBBBAB.B.AAAAABAB", "AB.AA.ABABBAA.ABAB..BB.A.BBB.B.AB.AABAAB", "BBABABBABAABBB.AAB.BABBAAABAB.A.BABAAABA", "AABBBAABBABBAA.AABABABAABAB.AABB.ABBBAB.", "..ABABBBA.AAABBB.BBAAAABBAABAA.AA.ABA..A", "A.BB..B.AAAAAABB.BAA.ABABBB.AAABBA.ABAAA", "BBB.ABBA.BA.AAABBABABA..BBAA.AAABBA.A.BB", "ABBAAB.AA.AABABA.B.ABAAAABA.AABABABA.ABA", "B.ABB..BB.BBABBA..BB...A.A.A.BAAA.A.A..A", "B.ABA..BA..BAAABBA.B..AABBABAAABB.ABB...", "A.BB.ABAAAB..ABBB...ABABBAABABBA.AABAA.."};
    vector<int> queries = {0, 1, 646, 645, 621, 494, 321, 631, 29, 611, 139, 336, 632, 428, 620, 249, 293, 457, 200, 460, 439, 349, 155, 69, 481, 23, 263, 76, 522, 147, 377, 227, 262, 138, 20, 116, 412, 193, 538, 502, 556, 366, 394, 346, 91, 121, 216, 300, 308, 465};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<string> roads = {".xxzxxxzzzzxzzxxzxxxxxzxxxzzzxzzzzzxxxz", "x.xxzzxzxzzz.xz.xzzxxxzxzxzxzxzzxxxzzxz", "xx.xzxzzzxxzzxzzxxzzzx.zzxxxzzzxxx.xzxz", "zxx.xzxzxzzxxzxxxzz.zx.xzzxx.zxzzxxzzz.", "xzzx.xxx.zxxx.xx.xzzxzzzzx.zzzxzxzxzzzx", "xzxzx.zxxxxzxzzzxzxxxzxzxxzxzzxzzzzzzxx", "xxzxxz.xzxxzzxxzzzxzzxzxxzzxzzzxzzxzxxx", "zzzzxxx.xzzzzxxzzxzzxxxzxzxxxzxzxzzzxxx", "zxzx.xzx.xxzxxxzzxzzzzxxxzzxzzxzxzxz.xz", "zzxzzxxzx..xzxzxxxx.zzzxzzxxxzxxzzxzzxz", "zzxzxxxzx..z.xxz.xxxxzzxzz.zzzzxxxxzxzz", "xzzxxzzzzxz.xxxxzxzzzzxzxxxzzxzxzzxxzxx", "z.zxxxzzxz.x.xzxzzxxzzxzzxxzxzx.xzzzx.x", "zxxz.zxxxxxxx.zzxzzzz.xxxxzxzxzzzzzxzzx", "xzzxxzxxxzxxzz.zzzxzxzzxzxzxzxzzzxzxxxx", "x.zxxzzzzxzxxzz.xzzxzzzxzxxxzxx.zxxxzzx", "zxxx.xzzzx.zzxzx.zxzxzxzzxxxxxzxzxzxzzz", "xzxzxzzxxxxxzzzzz.zzxzxzxzzzxxxxzxzxxxz", "xzzzzxxzzxxzxzxzxz.xzzxxxzxzzzxxxxzxzxz", "xxz.zxzzz.xzxzzxzzx.zxxxxzzx.zx.xzzxzxx", "xxzzxxzxzzxzzzxzxxzz.zzzxxxzzxxzxzxxxzx", "xxxxzzxxzzzzz.zzzzzxz.xxxxxzxxx.xxxzzzz", "zz..zxzxxzzxxxzzxxxxzx.xzxzxzxzxxz.zzz.", "xxzxzzxzxxxzzxxxzzxxzxx.zzzzzzxzzzxxxzx", "xzzzzxxxxzzxzxzzzxxxxxzz.xxzxzzxxxzzxzz", "xxxzxxzzzzzxxxxxxzzzxxxzx.zzxxzxxzzzzzz", "zzxx.zzxzx.xxzzxxzxzxxzzxz.xxzzxzxzxzzx", "zxxxzxxxxxzzzxxxxzzxzzxzzzx.xzxzzzzxzzx", "zzz.zzzxzxzzxzzzxxz.zxzzxxxx.xxxzxxxxxz", "xxzzzzzzzzzxzxxxxxzzxxxzzxzzx.zxzxxxxxz", "zzzxxxzxxxzzxzzxzxxxxxzxzzzxxz.zzzxzxzx", "zzxzzzxzzxxx.zz.xxx.z.xzxxxzxxz.xxzzxzz", "zxxzxzzxxzxzxzzzzzxxxxxzxxzzzzzx.xzxxzx", "zxxxzzzzzzxzzzxxxxxzzxzzxzxzxxzxx.xzzxx", "zx.xxzxzxxxxzzzxzzzzxx.xzzzzxxxzzx.zxxz", "xzxzzzzzzzzxzxxxxxxxxzzxzzxxxxzzxzz.xxz", "xzzzzzxx.zxzxzxzzxzzxzzxxzzzxxxxxzxx..x", "xxxzzxxxxxzx.zxzzxxxzzzzzzzzxxzzzxxx..z", "zzz.xxxxzzzxxxxxzzzxxz.xzzxxzzxzxxzzxz."};
    vector<int> queries = {0, 1, 713, 712, 148, 20, 366, 181, 349, 318, 553, 451, 497, 7, 416, 183, 86, 574, 389, 327, 68, 646, 144, 330, 641, 285, 607, 104, 510, 3, 73, 316, 655, 601, 351, 138, 358, 251, 218, 178, 46, 90, 390, 149, 118, 592, 552, 25, 357, 277};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 0, 37, 22, 9, 15, 3, 23, 8, 15, 33, 25, 0, 35, 0, 26, 20, 23, 27, 13, 32, 31, 17, 25, 1, 24, 10, 9, 0, 3, 14, 27, 31, 22, 20, 24, 10, 16, 21, 11, 27, 20, 8, 28, 19, 35, 2, 22, 13};
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<string> roads = {".xxzxxxzzzzxzzxxzxxxxxzxxxzzzxzzzzzxxxz", "x.xxzzxzxzzz.xz.xzzxxxzxzxzxzxzzxxxzzxz", "xx.xzxzzzxxzzxzzxxzzzx.zzxxxzzzxxx.xzxz", "zxx.xzxzxzzxxzxxxzz.zx.xzzxx.zxzzxxzzz.", "xzzx.xxx.zxxx.xx.xzzxzzzzx.zzzxzxzxzzzx", "xzxzx.zxxxxzxzzzxzxxxzxzxxzxzzxzzzzzzxx", "xxzxxz.xzxxzzxxzzzxzzxzxxzzxzzzxzzxzxxx", "zzzzxxx.xzzzzxxzzxzzxxxzxzxxxzxzxzzzxxx", "zxzx.xzx.xxzxxxzzxzzzzxxxzzxzzxzxzxz.xz", "zzxzzxxzx..xzxzxxxx.zzzxzzxxxzxxzzxzzxz", "zzxzxxxzx..z.xxz.xxxxzzxzz.zzzzxxxxzxzz", "xzzxxzzzzxz.xxxxzxzzzzxzxxxzzxzxzzxxzxx", "z.zxxxzzxz.x.xzxzzxxzzxzzxxzxzx.xzzzx.x", "zxxz.zxxxxxxx.zzxzzzz.xxxxzxzxzzzzzxzzx", "xzzxxzxxxzxxzz.zzzxzxzzxzxzxzxzzzxzxxxx", "x.zxxzzzzxzxxzz.xzzxzzzxzxxxzxx.zxxxzzx", "zxxx.xzzzx.zzxzx.zxzxzxzzxxxxxzxzxzxzxz", "xzxzxzzxxxxxzzzzz.zzxzxzxzzzxxxxzxzxxxz", "xzzzzxxzzxxzxzxzxz.xzzxxxzxzzzxxxxzxzxz", "xxz.zxzzz.xzxzzxzzx.zxxxxzzx.zx.xzzxzxx", "xxzzxxzxzzxzzzxzxxzz.zzzxxxzzxxzxzxxxzx", "xxxxzzxxzzzzz.zzzzzxz.xxxxxzxxx.xxxzzzz", "zz..zxzxxzzxxxzzxxxxzx.xzxzxzxzxxz.zzz.", "xxzxzzxzxxxzzxxxzzxxzxx.zzzzzzxzzzxxxzx", "xzzzzxxxxzzxzxzzzxxxxxzz.xxzxzzxxxzzxzz", "xxxzxxzzzzzxxxxxxzzzxxxzx.zzxxzxxzzzzzz", "zzxx.zzxzx.xxzzxxzxzxxzzxz.xxzzxzxzxzzx", "zxxxzxxxxxzzzxxxxzzxzzxzzzx.xzxzzzzxzzx", "zzz.zzzxzxzzxzzzxxz.zxzzxxxx.xxxzxxxxxz", "xxzzzzzzzzzxzxxxxxzzxxxzzxzzx.zxzxxxxxz", "zzzxxxzxxxzzxzzxzxxxxxzxzzzxxz.zzzxzxzx", "zzxzzzxzzxxx.zz.xxx.z.xzxxxzxxz.xxzzxzz", "zxxzxzzxxzxzxzzzzzxxxxxzxxzzzzzx.xzxxzx", "zxxxzzzzzzxzzzxxxxxzzxzzxzxzxxzxx.xzzxx", "zx.xxzxzxxxxzzzxzzzzxx.xzzzzxxxzzx.zxxz", "xzxzzzzzzzzxzxxxxxxxxzzxzzxxxxzzxzz.xxz", "xzzzzzxx.zxzxzxzzxzzxzzxxzzzxxxxxzxx..x", "xxxzzxxxxxzx.zxzxxxxzzzzzzzzxxzzzxxx..z", "zzz.xxxxzzzxxxxxzzzxxz.xzzxxzzxzxxzzxz."};
    vector<int> queries = {0, 1, 713, 712, 58, 130, 511, 531, 637, 174, 417, 136, 506, 694, 13, 109, 138, 48, 662, 415, 128, 106, 194, 158, 641, 686, 425, 495, 440, 249, 690, 78, 46, 64, 488, 298, 710, 677, 271, 42, 465, 389, 324, 603, 215, 589, 556, 496, 689, 213};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<string> roads = {".xxzxxxzzzzxzzxxzxxxxxzxxxzzzxzzzzzxxxz", "x.xxzzxzxzzz.xz.xzzxxxzxzxzxzxzzxxxzzxz", "xx.xzxzzzxxzzxzzxxzzzx.zzxxxzzzxxx.xzxz", "zxx.xzxzxzzxxzxxxzz.zx.xzzxx.zxzzxxzzz.", "xzzx.xxx.zxxx.xx.xzzxzzzzx.zzzxzxzxzzzx", "xzxzx.zxxxxzxzzzxzxxxzxzxxzxzzxzzzzzzxx", "xxzxxz.xzxxzzxxzzzxzzxzxxzzxzzzxzzxzxxx", "zzzzxxx.xzzzzxxzzxzzxxxzxzxxxzxzxzzzxxx", "zxzx.xzx.xxzxxxzzxzzzzxxxzzxzzxzxzxz.xz", "zzxzzxxzx..xzxzxxxx.zzzxzzxxxzxxzzxzzxz", "zzxzxxxzx..z.xxz.xxxxzzxzz.zzzzxxxxzxzz", "xzzxxzzzzxz.xxxxzxzzzzxzxxxzzxzxzzxxzxx", "z.zxxxzzxz.x.xzxzzxxzzxzzxxzxzx.xzzzx.x", "zxxz.zxxxxxxx.zzxzzzz.xxxxzxzxzzzzzxzzx", "xzzxxzxxxzxxzz.zzzxzxzxxzxzxzxzzzxzxxxx", "x.zxxzzzzxzxxzz.xzzxzzzxzxxxzxx.zxxxzzx", "zxxx.xzzzx.zzxzx.zxzxzxzzxxxxxzxzxzxzxz", "xzxzxzzxxxxxzzzzz.zzxzxzxzzzxxxxzxzxxxz", "xzzzzxxzzxxzxzxzxz.xzzxxxzxzzzxxxxzxzxz", "xxz.zxzzz.xzxzzxzzx.zxxxxzzx.zx.xzzxzxx", "xxzzxxzxzzxzzzxzxxzz.zzzxxxzzxxzxzxxxzx", "xxxxzzxxzzzzz.zzzzzxz.xxxxxzxxx.xxxzzzz", "zz..zxzxxzzxxxxzxxxxzx.xzxzxzxzxxz.zzz.", "xxzxzzxzxxxzzxxxzzxxzxx.zzzzzzxzzzxxxzx", "xzzzzxxxxzzxzxzzzxxxxxzz.xxzxzzxxxzzxzz", "xxxzxxzzzzzxxxxxxzzzxxxzx.zzxxzxxzzzzzz", "zzxx.zzxzx.xxzzxxzxzxxzzxz.xxzzxzxzxzzx", "zxxxzxxxxxzzzxxxxzzxzzxzzzx.xzxzzzzxzzx", "zzz.zzzxzxzzxzzzxxz.zxzzxxxx.xxxzxxxxxz", "xxzzzzzzzzzxzxxxxxzzxxxzzxzzx.zxzxxxxxz", "zzzxxxzxxxzzxzzxzxxxxxzxzzzxxz.zzzxzxzx", "zzxzzzxzzxxx.zz.xxx.z.xzxxxzxxz.xxzzxzz", "zxxzxzzxxzxzxzzzzzxxxxxzxxzzzzzx.xzxxzx", "zxxxzzzzzzxzzzxxxxxzzxzzxzxzxxzxx.xzzxx", "zx.xxzxzxxxxzzzxzzzzxx.xzzzzxxxzzx.zxxz", "xzxzzzzzzzzxzxxxxxxxxzzxzzxxxxzzxzz.xxz", "xzzzzzxx.zxzxzxzzxzzxzzxxzzzxxxxxzxx..x", "xxxzzxxxxxzx.zxzxxxxzzzzzzzzxxzzzxxx..z", "zzz.xxxxzzzxxxxxzzzxxz.xzzxxzzxzxxzzxz."};
    vector<int> queries = {0, 1, 713, 712, 203, 320, 480, 469, 647, 280, 692, 345, 262, 467, 472, 408, 15, 283, 590, 290, 178, 601, 531, 571, 466, 673, 208, 318, 291, 537, 75, 236, 626, 557, 629, 530, 238, 578, 34, 144, 80, 99, 682, 83, 392, 207, 285, 618, 222, 589};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<string> roads = {".xxzxxxzzzzxzzxxzxxxxxzxxxzzzxzzzzzxxxz", "x.xxzzxzxzzz.xz.xzzxxxzxzxzxzxzzxxxzzxz", "xx.xzxzzzxxzzxzzxxzzzx.zzxxxzzzxxx.xzxz", "zxx.xzxzxzzxxzxxxzz.zx.xzzxx.zxzzxxzzz.", "xzzx.xxx.zxxx.xx.xzzxzzzzx.zzzxzxzxzzzx", "xzxzx.zxxxxzxzzzxzxxxzxzxxzxzzxzzzzzzxx", "xxzxxz.xzxxzzxxzzzxzzxzxxzzxzzzxzzxzxxx", "zzzzxxx.xzzzzxxzzxzzxxxzxzxxxzxzxzzzxxx", "zxzx.xzx.xxzxxxzzxzzzzxxxzzxzzxzxzxz.xz", "zzxzzxxzx..xzxzxxxx.zzzxzzxxxzxxzzxzzxz", "zzxzxxxzx..z.xxz.xxxxzzxzz.zzzzxxxxzxzz", "xzzxxzzzzxz.xxxxzxzzzzxzxxxzzxzxzzxxzxx", "z.zxxxzzxz.x.xzxzzxxzzxzzxxzxzx.xzzzx.x", "zxxz.zxxxxxxx.zzxzzzz.xxxxzxzxzzzzzxzzx", "xzzxxzxxxzxxzz.zzzxzxzxxzxzxzxzzzxzxxxx", "x.zxxzzzzxzxxzz.xzzxzzzxzxxxzxx.zxxxzzx", "zxxx.xzzzx.zzxzx.zxzxzxzzxxxxxzxzxzxzxz", "xzxzxzzxxxxxzzzzz.zzxzxxxzzzxxxxzxzxxxz", "xzzzzxxzzxxzxzxzxz.xzzxxxzxzzzxxxxzxzxz", "xxz.zxzzz.xzxzzxzzx.zxxxxzzx.zx.xzzxzxx", "xxzzxxzxzzxzzzxzxxzz.zzzxxxzzxxzxzxxxzx", "xxxxzzxxzzzzz.zzzzzxz.xxxxxzxxx.xxxzzzz", "zz..zxzxxzzxxxxzxxxxzx.xzxzxzxzxxz.zzz.", "xxzxzzxzxxxzzxxxzxxxzxx.zzzzzzxzzzxxxzx", "xzzzzxxxxzzxzxzzzxxxxxzz.xxzxzzxxxzzxzz", "xxxzxxzzzzzxxxxxxzzzxxxzx.zzxxzxxzzzzzz", "zzxx.zzxzx.xxzzxxzxzxxzzxz.xxzzxzxzxzzx", "zxxxzxxxxxzzzxxxxzzxzzxzzzx.xzxzzzzxzzx", "zzz.zzzxzxzzxzzzxxz.zxzzxxxx.xxxzxxxxxz", "xxzzzzzzzzzxzxxxxxzzxxxzzxzzx.zxzxxxxxz", "zzzxxxzxxxzzxzzxzxxxxxzxzzzxxz.zzzxzxzx", "zzxzzzxzzxxx.zz.xxx.z.xzxxxzxxz.xxzzxzz", "zxxzxzzxxzxzxzzzzzxxxxxzxxzzzzzx.xzxxzx", "zxxxzzzzzzxzzzxxxxxzzxzzxzxzxxzxx.xzzxx", "zx.xxzxzxxxxzzzxzzzzxx.xzzzzxxxzzx.zxxz", "xzxzzzzzzzzxzxxxxxxxxzzxzzxxxxzzxzz.xxz", "xzzzzzxx.zxzxzxzzxzzxzzxxzzzxxxxxzxx..x", "xxxzzxxxxxzx.zxzxxxxzzzzzzzzxxzzzxxx..z", "zzz.xxxxzzzxxxxxzzzxxz.xzzxxzzxzxxzzxz."};
    vector<int> queries = {0, 1, 713, 712, 564, 645, 268, 499, 83, 413, 571, 438, 652, 629, 186, 436, 522, 579, 544, 179, 370, 510, 207, 208, 420, 597, 519, 163, 389, 614, 686, 695, 115, 633, 112, 7, 405, 148, 306, 166, 233, 628, 630, 578, 276, 149, 173, 13, 368, 226};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<string> roads = {".xxzxxxzzzzxzzxxzxxxxxzxxxzzzxzzzzzxxxz", "x.xxzzxzxzzz.xz.xzzxxzzxzxzxzxzzxxxzzxz", "xx.xzxzzzxxzzxzzxxzzzx.zzxxxzzzxxx.xzxz", "zxx.xzxzxzzxxzxxxzz.zx.xzzxx.zxzzxxzzz.", "xzzx.xxx.zxxx.xx.xzzxzzzzx.zzzxzxzxzzzx", "xzxzx.zxxxxzxzzzxzxxxzxzxxzxzzxzzzzzzxx", "xxzxxz.xzxxzzxxzzzxzzxzxxzzxzzzxzzxzxxx", "zzzzxxx.xzzzzxxzzxzzxxxzxzxxxzxzxzzzxxx", "zxzx.xzx.xxzxxxzzxzzzzxxxzzxzzxzxzxz.xz", "zzxzzxxzx..xzxzxxxx.zzzxzzxxxzxxzzxzzxz", "zzxzxxxzx..z.xxz.xxxxzzxzz.zzzzxxxxzxzz", "xzzxxzzzzxz.xxxxzxzzzzxzxxxzzxzxzzxxzxx", "z.zxxxzzxz.x.xzxzzxxzzxzzxxzxzx.xzzzx.x", "zxxz.zxxxxxxx.zzxzzzz.xxxxzxzxzzzzzxzzx", "xzzxxzxxxzxxzz.zzzxzxzxxzxzxzxzzzxzxxxx", "x.zxxzzzzxzxxzz.xzzxzzzxzxxxzxx.zxxxzzx", "zxxx.xzzzx.zzxzx.zxzxzxzzxxxxxzxzxzxzxz", "xzxzxzzxxxxxzzzzz.zzxzxxxzzzxxxxzxzxxxz", "xzzzzxxzzxxzxzxzxz.xzzxxxzxzzxxxxxzxzxz", "xxz.zxzzz.xzxzzxzzx.zxxxxzzx.zx.xzzxzxx", "xxzzxxzxzzxzzzxzxxzz.zzzxxxzzxxzxzxxxzx", "xzxxzzxxzzzzz.zzzzzxz.xxxxxzxxx.xxxzzzz", "zz..zxzxxzzxxxxzxxxxzx.xzxzxzxzxxz.zzz.", "xxzxzzxzxxxzzxxxzxxxzxx.zzzzzzxzzzxxxzx", "xzzzzxxxxzzxzxzzzxxxxxzz.xxzxzzxxxzzxzz", "xxxzxxzzzzzxxxxxxzzzxxxzx.zzxxzxxzzzzzz", "zzxx.zzxzx.xxzzxxzxzxxzzxz.xxzzxzxzxzzx", "zxxxzxxxxxzzzxxxxzzxzzxzzzx.xzxzzzzxzzx", "zzz.zzzxzxzzxzzzxxz.zxzzxxxx.xxxzxxxxxz", "xxzzzzzzzzzxzxxxxxxzxxxzzxzzx.zxzxxxxxz", "zzzxxxzxxxzzxzzxzxxxxxzxzzzxxz.zzzxzxzx", "zzxzzzxzzxxx.zz.xxx.z.xzxxxzxxz.xxzzxzz", "zxxzxzzxxzxzxzzzzzxxxxxzxxzzzzzx.xzxxzx", "zxxxzzzzzzxzzzxxxxxzzxzzxzxzxxzxx.xzzxx", "zx.xxzxzxxxxzzzxzzzzxx.xzzzzxxxzzx.zxxz", "xzxzzzzzzzzxzxxxxxxxxzzxzzxxxxzzxzz.xxz", "xzzzzzxx.zxzxzxzzxzzxzzxxzzzxxxxxzxx..x", "xxxzzxxxxxzx.zxzxxxxzzzzzzzzxxzzzxxx..z", "zzz.xxxxzzzxxxxxzzzxxz.xzzxxzzxzxxzzxz."};
    vector<int> queries = {0, 1, 713, 712, 698, 634, 630, 465, 134, 484, 363, 228, 700, 166, 317, 697, 331, 365, 360, 655, 256, 105, 668, 619, 278, 238, 151, 78, 585, 254, 548, 83, 695, 108, 459, 580, 595, 299, 131, 48, 332, 466, 186, 401, 241, 84, 207, 90, 50, 589};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<string> roads = {".xxzxxxzzzzxzzxxzxxxxxzxxxzzzxzzzzzxxxz", "x.xzzzxzxzzz.xz.xzzxxzzxzxzzzxzzxxxzzxz", "xx.xzxzzzxxzzxzzxxzzzx.zzxxxzzzxxx.xzxz", "zzx.xzxzxzzxxzxxxzz.zx.xzzxx.zxzzxxzzz.", "xzzx.zxx.zxxx.xx.xzzxzzzzx.xzzxzxzxzzzx", "xzxzz.zxxxxzxzzzxzxxxzzzxxzxzzxzzzzzzxx", "xxzxxz.xzxxzzxxzzzxzzxzxxzzxzzzxzzxzxxx", "zzzzxxx.xzzzzxxzzxzzxxxzxzxxxzxzxzzzxxx", "zxzx.xzx.xxzxxxzzxzzzzxxxzzxzzxzxzxz.xz", "zzxzzxxzx..xzxzxxxx.zzzxzzxxxzxxzzxzzxx", "zzxzxxxzx..z.xxz.xxzxzzxzz.zzzzxxxxzxzz", "xzzxxzzzzxz.xxxxzxzxzzxzxxxzzxzxzzxxzxx", "z.zxxxzzxz.x.xzxzzxxzzxzzxzzxzx.xzzzx.x", "zxxz.zxxxxxxx.zzxzzzz.xxxxzxzxzzzzzxzzx", "xzzxxzxxxzxxzz.zzzxzxxxxzxzxzxzzzxzxxxx", "x.zxxzzzzxzxxzz.xzzxzzzxzxxxzxx.zxxxzzx", "zxxx.xzzzx.zzxzx.zxzxzxzzxxxxxzxzxzxzxz", "xzxzxzzxxxxxzzzzz.zzxzxxxzzzxxxxzxzxxxz", "xzzzzxxzzxxzxzxzxz.xzzxxxzxzzxxxxxzxzxz", "xxz.zxzzz.zxxzzxzzx.zxxxxzzx.zx.xzzxzxx", "xxzzxxzxzzxzzzxzxxzz.zzzxxxzzxxzxzxxxzx", "xzxxzzxxzzzzz.xzzzzxz.xxxxxzxxx.xxxzzzz", "zz..zzzxxzzxxxxzxxxxzx.xzxzxzxzxxz.zzz.", "xxzxzzxzxxxzzxxxzxxxzxx.zzzzzzxzzzxxxzx", "xzzzzxxxxzzxzxzzzxxxxxzz.xxzxzzxxxzzxzz", "xxxzxxzzzzzxxxxxxzzzxxxzx.zzxxzxxzzzzzz", "zzxx.zzxzx.xzzzxxzxzxxzzxz.xxzzxzxxxxzx", "zzxxxxxxxxzzzxxxxzzxzzxzzzx.xzxzzzzxzzx", "zzz.zzzxzxzzxzzzxxz.zxzzxxxx.zzxzxxxxxz", "xxzzzzzzzzzxzxxxxxxzxxxzzxzzz.zxzxxxxxz", "zzzxxxzxxxzzxzzxzxxxxxzxzzzxzz.zzzxzxzx", "zzxzzzxzzxxx.zz.xxx.z.xzxxxzxxz.xzzzxzz", "zxxzxzzxxzxzxzzzzzxxxxxzxxzzzzzx.xzxxzx", "zxxxzzzzzzxzzzxxxxxzzxzzxzxzxxzzx.xzzxx", "zx.xxzxzxxxxzzzxzzzzxx.xzzxzxxxzzx.zxxz", "xzxzzzzzzzzxzxxxxxxxxzzxzzxxxxzzxzz.xxz", "xzzzzzxx.zxzxzxzzxzzxzzxxzxzxxxxxzxx..x", "xxxzzxxxxxzx.zxzxxxxzzzzzzzzxxzzzxxx..z", "zzz.xxxxzxzxxxxxzzzxxz.xzzxxzzxzxxzzxz."};
    vector<int> queries = {0, 1, 713, 712, 95, 288, 582, 291, 659, 34, 598, 417, 349, 519, 115, 648, 359, 438, 542, 75, 237, 475, 498, 628, 356, 458, 132, 602, 53, 311, 524, 428, 345, 453, 264, 13, 699, 184, 165, 500, 586, 25, 382, 653, 378, 129, 32, 30, 63, 412};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<string> roads = {".xxzxxxzzzxxzzxxzxxxxxzxxzzzzxzzxzzzxxz", "x.xzzzxzxzzz.xz.xzzxxxzxzxzzzxzzxxxxzzz", "xx.xzxxzzzxzzxzzxxzxzx.zzxxxzzzxxx.zxxz", "zzx.xzxzxzzxxzxxzzz.zx.xzzxz.xxxzxxzzz.", "xzzx.zxx.zxxx.xx.zzzxzxzzz.xzzxzxzxzzzz", "xzxzz.xxxxxzxzzxxzxxxzzzxzxxzzxxzzxzzzx", "xxxxxx.xzxxzzzxzxzxzzxzxxzxxzzzxzzxzzxx", "zzzzxxx.xzzzzxxzzxzxzzxzzzxxxzxzxzxzxxx", "zxzx.xzx.zxzxzxzxzzzzzxxxzzxzzxzxzxz.xz", "zzzzzxxzz..xzxzxzxx.zzzxzzxxxzxzzzxzxxx", "xzxzxxxzx..z.xxz.xxxxzxxzz.zzxzxzxxzxzz", "xzzxxzzzzxz.xzxxzxzzzzxzxxxzzxzxzzxxzxx", "z.zxxxzzxz.x.xzxzzxxzzxzzzxzxzx.xzzzx.x", "zxxz.zzxzxxzx.zzxzzzz.xxxzzxzxzzzzzxzzx", "xzzxxzxxxzxxzz.xzzxzxxxxzxzxzxzzzxzzxxz", "x.zxxxzzzxzxxzx.xzxxzzzxzxxxzxx.zxxxzzx", "zxxz.xxzxz.zzxzx.zxzxzxxzxxxxzzzzxzxzzz", "xzxzzzzxzxxxzzzzz.xzxzxxxzzxxxxxzxzxxxz", "xzzzzxxzzxxzxzxxxx.xzzxxzzxzzxxxxxzxzxz", "xxx.zxzxz.xzxzzxzzx.zxxxzzzx.zx.xzzxzxx", "xxzzxxzzzzxzzzxzxxzz.zzzxxxzzxxzxzxxxzx", "xxxxzzxzzzzzz.xzzzzxz.xxxxxzxxx.zxxzzzz", "zz..xzzxxzxxxxxzxxxxzx.xzxzxzxzxxz.zzz.", "xxzxzzxzxxxzzxxxxxxxzxx.zxzzzzxzxzxzxzx", "xzzzzxxzxzzxzxzzzxzzxxzz.xxzxxzxxxzxxzz", "zxxzzzzzzzzxzzxxxzzzxxxxx.zzxxzxxzxzzxz", "zzxx.xxxzx.xxzzxxzxzxxzzxz.xxzzxzxzxxzz", "zzxzxxxxxxzzzxxxxxzxzzxzzzx.xzxzxzzxzzx", "zzz.zzzxzxzzxzzzxxz.zxzzxxxx.zzxzxzxxxz", "xxzxzzzzzzxxzxxxzxxzxxxzxxzzz.zxzxxxxxz", "zzzxxxzxxxzzxzzxzxxxxxzxzzzxzz.zzzxzxzx", "zzxxzxxzzzxx.zz.zxx.z.xzxxxzxxz.xzzzxzz", "xxxzxzzxxzzzxzzzzzxxxzxxxxzxzzzx.xzxxzx", "zxxxzzzzzzxzzzxxxxxzzxzzxzxzxxzzx.xzzxx", "zx.xxxxxxxxxzzzxzzzzxx.xzxzzzxxzzx.zxxz", "zxzzzzzzzzzxzxzxxxxxxzzzxzxxxxzzxzz.xxz", "xzxzzzzx.xxzxzxzzxzzxzzxxzxzxxxxxzxx..x", "xzxzzzxxxxzx.zxzzxxxzzzzzxzzxxzzzxxx..z", "zzz.zxxxzxzxxxzxzzzxxz.xzzzxzzxzxxzzxz."};
    vector<int> queries = {0, 1, 713, 712, 383, 222, 515, 650, 446, 236, 595, 560, 614, 672, 637, 429, 698, 580, 591, 456, 633, 419, 661, 101, 209, 443, 444, 537, 564, 279, 14, 546, 143, 523, 531, 141, 269, 258, 290, 514, 451, 689, 615, 481, 194, 23, 620, 493, 90, 592};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<string> roads = {".xxzxxxzxzzxzxxxxxxxxzzxxxzzzxzzxxzzxxz", "x.xzzzxzxzzz.zz.zzzxxxxxzzzzzzzzzzxxzzz", "xx.xzxxzzzxzxzzxxxzzxx.zzxxxzzzxzx.xxzz", "zzx.xzxxzzzzzzxxzxz.zx.xzzxz.xxxxxxzzz.", "xzzx.zzx.zxxx.xx.zzzxzxzxz.xzzxzxzxzxzz", "xzxzz.xxxxxzxzzxzzzxxxzzxzxxxxxxzzxzzzz", "xxxxzx.xzxxzxxxzxzxzxxzxxzxxxzxxzzzzxxx", "zzzxxxx.xzzzzxxzzxzzzzxzzzxxxzxxxzxxxzx", "xxzz.xzx.zxzxzxzxxzzzzxzxzzxxzxzxzxz.xz", "zzzzzxxzz..zxxxxzxx.zzzxxxxxxzxzzxxzxxx", "zzxzxxxzx..z.xxx.xzxxxzxzz.zzxxzzxxzxzz", "xzzzxzzzzzz.xzxzzxzzzzzzxxxxzxzxzzxxzxx", "z.xzxxxzxx.x.xzxxzzxzxxzzzxzxzz.zzxzx.x", "xzzz.zxxzxxzx.zzxzzxz.xxxzzxzxzzxzzxzxx", "xzzxxzxxxxxxzz.zzzxxxxzxzzzxzzzzzzzzxxz", "x.xxxxzzzxxzxzz.xzxxxzzxzxxxzxx.zzxxzzx", "xzxz.zxzxz.zxxzx.zxzxzxxzzxxxzzzzxzzzzz", "xzxxzzzxxxxxzzzzz.zzxzzxzzzxxxxxzxzxxxz", "xzzzzzxzzxzzzzxxxz.xzzxxzzxzzxxxxxzzzxz", "xxz.zxzzz.xzxxxxzzx.zzzxzzzx.zx.zxzxzzx", "xxxzxxxzzzxzzzxxxxzz.zzzxxxxxzxzxxxxxzx", "zxxxzxxzzzxzx.xzzzzzz.xxxxxzxxx.zzxzzzz", "zx..xzzxxzzzxxzzxzxzzx.xzxzxzzxxxx.zzz.", "xxzxzzxzzxxzzxxxxxxxzxx.zzzzxzxxxzxzzzz", "xzzzxxxzxxzxzxzzzzzzxxzz.zxzxxzxxxzxxzz", "xzxzzzzzzxzxzzzxzzzzxxxzz.zzxxzzxzxzzxz", "zzxx.xxxzx.xxzzxxzxzxxzzxz.zxzzxzxzxxxz", "zzxzxxxxxxzxzxxxxxzxxzxzzzz.xzxzzzzxzzz", "zzz.zxxxxxzzxzzzxxz.xxzxxxxx.zzxzxzxxxz", "xzzxzxzzzzxxzxzxzxxzzxzzxxzzz.zzzxxzzxz", "zzzxxxxxxxxzzzzxzxxxxxxxzzzxzz.zzzxzxzx", "zzxxzxxxzzzx.zz.zxx.z.xxxzxzxzz.xxxxzzz", "xzzxxzzxxzzzzxzzzzxzxzxxxxzzzzzx.xzxxzx", "xzxxzzzzzxxzzzzzxxxxxzxzxzxzxxzxx.xzzxx", "zx.xxxzxxxxxxzzxzzzzxx.xzxzzzxxxzx.xxxz", "zxxzzzzxzzzxzxzxzxzxxzzzxzxxxzzxxzx.xxz", "xzxzxzxx.xxzxzxzzxzzxzzzxzxzxzxzxzxx..z", "xzzzzzxzxxzx.xxzzxxzzzzzzxxzxxzzzxxx..z", "zzz.zzxxzxzxxxzxzzzxxz.zzzzzzzxzxxzzzz."};
    vector<int> queries = {0, 1, 713, 712, 389, 305, 435, 332, 395, 534, 185, 429, 257, 116, 104, 252, 199, 571, 177, 20, 673, 256, 644, 194, 33, 336, 616, 377, 303, 459, 428, 443, 156, 636, 641, 319, 175, 584, 264, 471, 280, 367, 516, 442, 457, 623, 574, 686, 122, 108};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<string> roads = {".zxxxxzzxzzxzzzxzzzzzxxzxx..zxxzxx.zxxxx", "z.z.xzxxxzzxzxxxxx.zzzxxzzxzzxz.xzzxxzzx", "xz.xzzxzzzxxzzz.z.xxxxzzxzzxzzxz.xxxzxxx", "x.x.zxzzzxxxxxzzxzzzzx.xxxzz....zzzzx.xx", "xxzz.zzzxzxzzxxx.zxxzxzxxz..z.zxxxzz.zxx", "xzzxz.xxzzzz.zx.zxzxxzxxzxzxxxz.zzzx.xx.", "zxxzzx.xzxzz...xxxzzz.zz.xxxxxzzxxzxzxzz", "zxzzzxx...z.zx.z.xz..z..xx.x.z.zzxxx.xxz", "xxzzxzz..z.zxzx.xx..x.zzzx.zx.z.xxxzzxzx", "zzzxzzx.z.zx.x..xzxx.xzz.xzxxzxxzzxzxxz.", "zzxxxzzz.z.zzzxz..xxzzxzzxzxxx..xzxxxxzx", "xxxxzzz.zxz.zzxxzzzxxxzx.zzxxzxx.zzxzzxx", "zzzxz..zx.zz.x.zz.z..xxxxzx..xxxzx.xxz.z", "zxzxxz.xzxzzx.zz.xxz.xxxxxxx.z...zz.z.zz", "zxzzxx..x.xx.z.zx.zxz.xxxzxxz..xzzzzz.xz", "xx.zx.xz..zxzzz.zxx.xxxzxzxxxzxzx..zzzzz", "zxzx.zx.xx.zz.xz.xxzzxxzzzxxzxzzxxxxzz.z", "zx.zzxxxxz.z.x.xx.zxzxzz.zzxxz.zzxx.xzzx", "z.xzxzzz.xxzzxzxxz.xzzzxxxx.zzxzzxzxxzxx", "zzxzxxz..xxx.zx.zxx.xx.xzzzz..xx.zzzzx.z", "zzxzzxz.x.zx..zxzzzx.zxxxxx...xzzxxzzxxz", "xzxxxz.z.xzxxx.xxxzxz.xzzzzzzxzz.xxzzzx.", "xxz.zxz.zzxzxxxxxzz.xx.z.z.zzxzxzzxxxzxz", "zxzxxxz.zzzxxxxzzzxxxzz.zzxzxzxzxxzxxxzz", "xzxxxz.xz.z.xxxxz.xzxz.z..xz.zzxzzxxxzzz", "xzzxzxxxxxxzzxzzzzxzxzzz..zz.xxzzxxz.xxx", ".xzz.zx..zzzxxxxxzxzxz.xxz..z..xx.zxz.z.", ".zxz.xxxzxxx.xxxxx.z.zzzzz...zzxz.xzx.zz", "zzz.zxx.xxxx..zxzxz..zzx..z...x.zzzx.xx.", "xxz..xxz.zxzxz.zxzz..xxzzx.z..x.xxx..zzz", "xzx.zzz.zx.xx..xz.xxxzzxzx.zxx..zxxzzzz.", "z.z.x.zz.x.xx.xzzzzxzzxzxzxx....zz..xxxx", "xx.zxzxzxzx.z.zxxzz.z.zxzzxzzxzz.xzxxxxx", "xzxzxzxxxzzzxzz.xxxzxxzxzx..zxxzx.xzzzzz", ".zxzzzzxxxxz.zz.xxzzxxxzxxzxzxx.zx.z.zxz", "zxxzzxxxzzxxx.zzx.xzzzxxxzxzx.z.xzz..zzx", "xxzx..z.zxxzxzzzzxxzzzxxx.zx..zxxz...xz.", "xzx.zxxxxxxzz..zzzzxxzzxzx..xzzxxzzzx.zx", "xzxxxxzxzzzx.zxz.zx.xxxzzxzzxzzxxzxzzz.x", "xxxxx.zzx.xxzzzzzxxzz.zzzx.z.z.xxzzx.xx."};
    vector<int> queries = {0, 1, 649, 648, 468, 469, 421, 432, 430, 571, 70, 554, 169, 232, 46, 413, 425, 322, 146, 117, 482, 205, 512, 350, 155, 54, 150, 387, 305, 491, 583, 539, 95, 524, 42, 545, 52, 575, 102, 437, 362, 38, 349, 338, 121, 118, 168, 31, 233, 453};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 0, 39, 15, 32, 36, 10, 25, 34, 2, 35, 9, 9, 0, 33, 26, 9, 7, 22, 22, 21, 28, 34, 25, 2, 9, 39, 25, 17, 24, 33, 32, 32, 3, 16, 0, 33, 3, 16, 8, 4, 13, 9, 27, 6, 18, 11, 19, 15};
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<string> roads = {".zxxxxzzxzzxzzzxzzzzzxxzxx..zxxzxx.zxxxx", "z.z.xzxxxzzxzxxxxx.zzzxxzzxzzxz.xzzxxzzx", "xz.xzzxzzzxxzzz.z.xxxxzzxzzxzzxz.xxxzxxx", "x.x.zxzzzxxxxxzzxzzzzx.xxxzz....zzzzx.xx", "xxzz.zzzxzxzzxxx.zxxzxzxxz..z.zxxxzz.zxx", "xzzxz.xxzzzz.zx.zxzxxzxxzxzxxxz.zzzx.xx.", "zxxzzx.xzxzz...xxxzzz.zz.xxxxxzzxxzxzxzz", "zxzzzxx...z.zx.z.xz..z..xx.x.z.zzxxx.xxz", "xxzzxzz..z.zxzx.xx..x.zzzx.zx.z.xxxzzxzx", "zzzxzzx.z.zx.x..xzxx.xzz.xzxxzxxzzxzxxz.", "zzxxxzzz.z.zzzxz..xxzzxzzxzxxx..xzxxxxzx", "xxxxzzz.zxz.zzxxzzzxxxzx.zzxxzxx.zzxzzxx", "zzzxz..zx.zz.x.zz.z..xxxxzx..xxxzx.xxz.z", "zxzxxz.xzxzzx.zz.xxz.xxxxxzx.z...zz.z.zz", "zxzzxx..x.xx.z.zx.zxz.xxxzxxz..xzzzzz.xz", "xx.zx.xz..zxzzz.zxx.xxxzxzxxxzxzx..zzzzz", "zxzx.zx.xx.zz.xz.xxzzxxzzzxxzxzzxxxxzz.z", "zx.zzxxxxz.z.x.xx.zxzxzz.zzxxz.zzxx.xzzx", "z.xzxzzz.xxzzxzxxz.xzzzxxxx.zzxzzxzxxzxx", "zzxzxxz..xxx.zx.zxx.xx.xzzzz..xx.zzzzx.z", "zzxzzxz.x.zx..zxzzzx.zxxxxx...xzzxxzzxxz", "xzxxxz.z.xzxxx.xxxzxz.xzzzzzzxzz.xxzzzx.", "xxz.zxz.zzxzxxxxxzz.xx.z.z.zzxzxzzxxxzxz", "zxzxxxz.zzzxxxxzzzxxxzz.zzxzxzxzxxzxxxzz", "xzxxxz.xz.z.xxxxz.xzxz.z..xz.zzxzzxxxzzz", "xzzxzxxxxxxzzxzzzzxzxzzz..zz.xxzzxxz.xxx", ".xzz.zx..zzzxzxxxzxzxz.xxz..z..xx.zxz.z.", ".zxz.xxxzxxx.xxxxx.z.zzzzz...zzxz.xzx.zz", "zzz.zxx.xxxx..zxzxz..zzx..z...x.zzzx.xx.", "xxz..xxz.zxzxz.zxzz..xxzzx.z..x.xxx..zzz", "xzx.zzz.zx.xx..xz.xxxzzxzx.zxx..zxxzzzz.", "z.z.x.zz.x.xx.xzzzzxzzxzxzxx....zz..xxxx", "xx.zxzxzxzx.z.zxxzz.z.zxzzxzzxzz.xzxxxxx", "xzxzxzxxxzzzxzz.xxxzxxzxzx..zxxzx.xzzzzz", ".zxzzzzxxxxz.zz.xxzzxxxzxxzxzxx.zx.z.zxz", "zxxzzxxxzzxxx.zzx.xzzzxxxzxzx.z.xzz..zzx", "xxzx..z.zxxzxzzzzxxzzzxxx.zx..zxxz...xz.", "xzx.zxxxxxxzz..zzzzxxzzxzx..xzzxxzzzx.zx", "xzxxxxzxzzzx.zxz.zx.xxxzzxzzxzzxxzxzzz.x", "xxxxx.zzx.xxzzzzzxxzz.zzzx.z.z.xxzzx.xx."};
    vector<int> queries = {0, 1, 649, 648, 102, 362, 254, 251, 134, 371, 367, 77, 161, 622, 181, 578, 182, 342, 542, 509, 82, 495, 30, 129, 463, 641, 555, 147, 535, 418, 545, 243, 595, 238, 415, 529, 78, 40, 201, 23, 644, 60, 582, 124, 309, 45, 553, 85, 344, 527};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<string> roads = {".zxxxxzzxzzxzzzxzzzzzxxzxx..zxxzxx.zxxxx", "z.z.xzxxxzzxzxxxxx.zzzxxzzxzzxz.xzzxxzzx", "xz.xzzxzzzxxzzz.z.xxxxzzxzzxzzxz.xxxzxxx", "x.x.zxzzzxxxxxzzxzzzzx.xxxzz....zzzzx.xx", "xxzz.zzzxzxzzxxx.zxxzxzxxz..z.zxxxzz.zxx", "xzzxz.xxzzzz.zx.zxzxxzxxzxzxxxz.zzxx.xx.", "zxxzzx.xzxzz...xxxzzz.zz.xxxxxzzxxzxzxzz", "zxzzzxx...z.zx.z.xz..z..xx.x.z.zzxxx.xxz", "xxzzxzz..z.zxzx.xx..x.zzzx.zx.z.xxxzzxzx", "zzzxzzx.z.zx.x..xzxx.xzz.xzxxzxxzzxzxxz.", "zzxxxzzz.z.zzzxz..xxzzxzzxzxxx..xzxxxxzx", "xxxxzzz.zxz.zzxxzzzxxxzx.zzxxzxx.zzxzzxx", "zzzxz..zx.zz.x.zz.z..xxxxzx..xxxzx.xxz.z", "zxzxxz.xzxzzx.zz.xxz.xxxxxzx.z...zz.z.zz", "zxzzxx..x.xx.z.zx.zxz.xxxzxxz..xzzzzz.xz", "xx.zx.xz..zxzzz.zxx.xxxzxzxxxzxzx..zzzzz", "zxzx.zx.xx.zz.xz.xxzzxxzzzxxzxzzxxxxzz.z", "zx.zzxxxxz.z.x.xx.zxzxzz.zzxxz.zzxx.xzzx", "z.xzxzzz.xxzzxzxxz.xzzzxxxx.zzxzzxzxxzxx", "zzxzxxz..xxx.zx.zxx.xx.xzzzz..xx.zzzzx.z", "zzxzzxz.x.zx..zxzzzx.zxxxxx...xzzxxzzxxz", "xzxxxz.z.xzxxx.xxxzxz.xzzzzzzxzz.xxzzzx.", "xxz.zxz.zzxzxxxxxzz.xx.z.z.zzxzxzzxxxzxz", "zxzxxxz.zzzxxxxzzzxxxzz.zzxzxzxzxxzxxxzz", "xzxxxz.xz.z.xxxxz.xzxz.z..xz.zzxzzxxxzzz", "xzzxzxxxxxxzzxzzzzxzxzzz..zz.xxzzxxz.xxx", ".xzz.zx..zzzxzxxxzxzxz.xxz..z..xx.zxz.z.", ".zxz.xxxzxxx.xxxxx.z.zzzzz...zzxz.xzx.zz", "zzz.zxx.xxxx..zxzxz..zzx..z...x.zzzx.xx.", "xxz..xxz.zxzxz.zxzz..xxzzx.z..x.xxx..zzz", "xzx.zzz.zx.xx..xz.xxxzzxzx.zxx..zxxzzzz.", "z.z.x.zz.x.xx.xzzzzxzzxzxzxx....zz..xxxx", "xx.zxzxzxzx.z.zxxzz.z.zxzzxzzxzz.xzxxxxx", "xzxzxzxxxzzzxzz.xxxzxxzxzx..zxxzx.xzzzzz", ".zxzzxzxxxxz.zz.xxzzxxxzxxzxzxx.zx.z.zxz", "zxxzzxxxzzxxx.zzx.xzzzxxxzxzx.z.xzz..zzx", "xxzx..z.zxxzxzzzzxxzzzxxx.zx..zxxz...xz.", "xzx.zxxxxxxzz..zzzzxxzzxzx..xzzxxzzzx.zx", "xzxxxxzxzzzx.zxz.zx.xxxzzxzzxzzxxzxzzz.x", "xxxxx.zzx.xxzzzzzxxzz.zzzx.z.z.xxzzx.xx."};
    vector<int> queries = {0, 1, 649, 648, 296, 586, 16, 540, 432, 367, 19, 114, 160, 69, 155, 393, 161, 95, 399, 142, 210, 392, 424, 461, 439, 115, 599, 610, 207, 601, 329, 323, 404, 379, 7, 612, 203, 498, 383, 585, 122, 482, 471, 216, 9, 53, 211, 465, 14, 572};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<string> roads = {".zxxxxzzxzzxzzzxzzzzzxxzxx..zxxzxx.zxxxx", "z.z.xzxxxzzxzxxxxx.zzzxxzzxzzxz.xzzxxzzx", "xz.xzzxzzzxxzzz.z.xxxxzzxzzxzzxz.xxxzxxx", "x.x.zxzzzxxxxxzzxzzzzx.xxxzz....zzzzx.xx", "xxzz.zzzxzxzzxxx.zxxzxzxxz..z.zxxxzz.zxx", "xzzxz.xxzzzz.zx.zxzxxzxxzxzxxxz.zzxx.xx.", "zxxzzx.xzxzz...xxxzzz.zz.xxxxxzzxxzxzxzz", "zxzzzxx...z.zx.z.xz..z..xx.x.z.zzxxx.xxz", "xxzzxzz..z.zxzx.xx..x.zzzx.zx.z.xxxzzxzx", "zzzxzzx.z.zx.x..xzxx.xzz.xzxxzxxzzxzxxz.", "zzxxxzzz.z.zzzxz..xxzzxzzxzxxx..xzxxxxzx", "xxxxzzz.zxz.zzxxzzzxxxzx.zzxxzxx.zzxzzxx", "zzzxz..zx.zz.x.zz.z..xxxxzx..xxxzx.xxz.z", "zxzxxz.xzxzzx.zz.xxz.xxxxxzx.z...zz.z.zz", "zxzzxx..x.xx.z.zx.zxz.xxxzxxz..xzzzzz.xz", "xx.zx.xz..zxzzz.zxx.xxxzxzxxxzxzx..zzzzz", "zxzx.zx.xx.zz.xz.xxzzxxzzzxxzxzzxxxxzz.z", "zx.zzxxxxz.z.x.xx.zxzxzz.zzxxz.zzxx.xzzx", "z.xzxzzz.xxzzxzxxz.xzzzxxxx.zzxzzxzxxzxx", "zzxzxxz..xxx.zx.zxx.zx.xzzzz..xx.zzzzx.z", "zzxzzxz.x.zx..zxzzzz.zxxxxx...xzzxxzzxxz", "xzxxxz.z.xzxxx.xxxzxz.xzzzzzzxzz.xxzzzx.", "xxz.zxz.zzxzxxxxxzz.xx.z.z.zzxzxzzxxxzxz", "zxzxxxz.zzzxxxxzzzxxxzz.zzxzxzxzxxzxxxzz", "xzxxxz.xz.z.xxxxz.xzxz.z..xz.zzxzzxxxzzz", "xzzxzxxxxxxzzxzzzzxzxzzz..zz.xxzzxxz.xxx", ".xzz.zx..zzzxzxxxzxzxz.xxz..z..xx.zxz.z.", ".zxz.xxxzxxx.xxxxx.z.zzzzz...zzxz.xzx.zz", "zzz.zxx.xxxx..zxzxz..zzx..z...x.zzzx.xx.", "xxz..xxz.zxzxz.zxzz..xxzzx.z..x.xxx..zzz", "xzx.zzz.zx.xx..xz.xxxzzxzx.zxx..zxxzzzz.", "z.z.x.zz.x.xx.xzzzzxzzxzxzxx....zz..xxxx", "xx.zxzxzxzx.z.zxxzz.z.zxzzxzzxzz.xzxxxxx", "xzxzxzxxxzzzxzz.xxxzxxzxzx..zxxzx.xzzzzz", ".zxzzxzxxxxz.zz.xxzzxxxzxxzxzxx.zx.z.zxz", "zxxzzxxxzzxxx.zzx.xzzzxxxzxzx.z.xzz..zzx", "xxzx..z.zxxzxzzzzxxzzzxxx.zx..zxxz...xz.", "xzx.zxxxxxxzz..zzzzxxzzxzx..xzzxxzzzx.zx", "xzxxxxzxzzzx.zxz.zx.xxxzzxzzxzzxxzxzzz.x", "xxxxx.zzx.xxzzzzzxxzz.zzzx.z.z.xxzzx.xx."};
    vector<int> queries = {0, 1, 649, 648, 62, 324, 151, 325, 385, 64, 286, 480, 547, 235, 372, 616, 542, 180, 307, 608, 507, 415, 115, 634, 135, 184, 237, 304, 246, 293, 63, 572, 242, 110, 452, 99, 388, 107, 615, 430, 236, 530, 647, 522, 109, 641, 174, 340, 98, 140};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<string> roads = {".zxxxxzzxzzxzzzxzzzzzxxzxx..zxxzxx.zxxxx", "z.z.xzxxxzzxzxxxxx.zzzxxzzxzzxz.xzzxxzzx", "xz.xzzxzzzxxzzz.z.xxxxzzxzzxzzxz.xxxzxxx", "x.x.zxzzzxxxxxzzxzzzzx.xxxzz....zzzzx.xx", "xxzz.zzzxzxzzxxx.zxxzxzxxz..z.zxxxzz.zxx", "xzzxz.xxzzzz.zx.zxzxxzxxzxzxxxz.zzxx.xx.", "zxxzzx.xzxzz...xxxzzz.zz.xxxxxzzxxzxzxzz", "zxzzzxx...z.zx.z.xz..z..xx.x.z.zzxxx.xxz", "xxzzxzz..z.zxzx.xx..x.zzzx.zx.z.xxxzzxzx", "zzzxzzx.z.zx.x..xzxx.xzz.xzxxzxxzzxzxxz.", "zzxxxzzz.z.zzzxz..xxzzxzzxzxxx..xzxxxxzx", "xxxxzzz.zxz.zzxxzzzxxxzx.zzxxzxx.zzxzzxx", "zzzxz..zx.zz.x.zz.z..xxxxzx..xxxzz.xxz.z", "zxzxxz.xzxzzx.zz.xxz.xxxxxzx.z...zz.z.zz", "zxzzxx..x.xx.z.zx.zxz.xxxzzxz..xzzzzz.xz", "xx.zx.xz..zxzzz.zxx.xxxzxzxxxzxzx..zzzzz", "zxzx.zx.xx.zz.xz.xxzzxxzzzxxzxzzxxxxzz.z", "zx.zzxxxxz.z.x.xx.zxzxzz.zzxxz.zzxx.xzzx", "z.xzxzzz.xxzzxzxxz.xzzzxxxx.zzxzzxzxxzxx", "zzxzxxz..xxx.zx.zxx.zx.xzzzz..xx.zzzzx.z", "zzxzzxz.x.zx..zxzzzz.zxxxxx...xzzxxzzxxz", "xzxxxz.z.xzxxx.xxxzxz.xzzzzzzxzz.xxzzzx.", "xxz.zxz.zzxzxxxxxzz.xx.z.z.zzxzxzzxxxzxz", "zxzxxxz.zzzxxxxzzzxxxzz.zzxzxzxzxxzxxxzz", "xzxxxz.xz.z.xxxxz.xzxz.z..xz.zzxzzxxxzzz", "xzzxzxxxxxxzzxzzzzxzxzzz..zz.xxzzxxz.xxx", ".xzz.zx..zzzxzzxxzxzxz.xxz..z..xx.zxz.z.", ".zxz.xxxzxxx.xxxxx.z.zzzzz...zzxz.xzx.zz", "zzz.zxx.xxxx..zxzxz..zzx..z...x.zzzx.xx.", "xxz..xxz.zxzxz.zxzz..xxzzx.z..x.xxx..zzz", "xzx.zzz.zx.xx..xz.xxxzzxzx.zxx..zxxzzzz.", "z.z.x.zz.x.xx.xzzzzxzzxzxzxx....zz..xxxx", "xx.zxzxzxzx.z.zxxzz.z.zxzzxzzxzz.xzxxxxx", "xzxzxzxxxzzzzzz.xxxzxxzxzx..zxxzx.xzzzzz", ".zxzzxzxxxxz.zz.xxzzxxxzxxzxzxx.zx.z.zxz", "zxxzzxxxzzxxx.zzx.xzzzxxxzxzx.z.xzz..zzx", "xxzx..z.zxxzxzzzzxxzzzxxx.zx..zxxz...xz.", "xzx.zxxxxxxzz..zzzzxxzzxzx..xzzxxzzzx.zx", "xzxxxxzxzzzx.zxz.zx.xxxzzxzzxzzxxzxzzz.x", "xxxxx.zzx.xxzzzzzxxzz.zzzx.z.z.xxzzx.xx."};
    vector<int> queries = {0, 1, 649, 648, 635, 495, 58, 609, 431, 383, 373, 206, 585, 543, 401, 394, 304, 48, 372, 297, 426, 392, 444, 591, 508, 274, 485, 213, 281, 255, 121, 579, 555, 193, 438, 162, 252, 7, 458, 369, 382, 450, 96, 638, 298, 42, 189, 190, 412, 153};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<string> roads = {".zxxxxzxxzzxzzzxzzzzzxxzxx..zxxzxz.zxxxx", "z.z.xzxxxzzxzxxxxx.zzzxxzzxzzxz.xzzxxzzx", "xz.xzzxzzzxxzzz.z.xxzxzzxzzxxzxz.xxxzxxx", "x.x.zxzzzxzxxxzzxzzzzx.xxxzz....zzzzx.xx", "xxzz.zzzxzxzzxxx.zxxzxzxxz..z.zxxxzz.zxx", "xzzxz.xxzzzz.zx.zxzxxzxxzxzxxxz.zzxx.xx.", "zxxzzx.xzzzx...xxxxzz.zz.xxxxxzzzxzxzxzz", "xxzzzxx...z.zx.z.xz..z..xz.x.z.zzxxx.xxz", "xxzzxzz..z.zxzx.xx..x.zzzx.zx.z.xxxzzxzx", "zzzxzzz.z.zx.x..xzxx.xzz.xzxxzxxzzxzxxz.", "zzxzxzzz.z.zzzzz..xxzzzzzxzxxx..xzxxxxzx", "xxxxzzx.zxz.zzzxzzzxxxzx.zzxxzxx.zzxzzxx", "zzzxz..zx.zz.x.zz.z..xxxxzx..xxxzz.xxz.z", "zxzxxz.xzxzzx.zz.xxz.xxxxxzx.z...zz.z.zz", "zxzzxx..x.zz.z.zx.zxz.xxxzzxz..xzzzzz.xz", "xx.zx.xz..zxzzz.zxx.xxxzxzxxxzxzx..zzzzz", "zxzx.zx.xx.zz.xz.xxzzxxzzzxxzxzzxxxxzz.z", "zx.zzxxxxz.z.x.xx.zxzxzz.zzxxz.zzxx.xzzx", "z.xzxzxz.xxzzxzxxz.xzzzxxxx.zzxzzxzxxzxx", "zzxzxxz..xxx.zx.zxx.zx.xzzzz..xx.zzzzx.z", "zzzzzxz.x.zx..zxzzzz.zxxxxx...xzzxxzzxxz", "xzxxxz.z.xzxxx.xxxzxz.xzzzzzzxzz.xxzzzx.", "xxz.zxz.zzzzxxxxxzz.xx.z.z.zzxzxzzxxxzxz", "zxzxxxz.zzzxxxxzzzxxxzz.zzxzxzxzxxzxxxzz", "xzxxxz.xz.z.xxxxz.xzxz.z..zz.zzxzzxxxzzz", "xzzxzxxzxxxzzxzzzzxzxzzz..zz.xxzzxxz.xxx", ".xzz.zx..zzzxzzxxzxzxz.xzz..z..xx.zxz.z.", ".zxz.xxxzxxx.xxxxx.z.zzzzz...zzxz.xzx.zz", "zzx.zxx.xxxx..zxzxz..zzx..z...x.zxzx.xx.", "xxz..xxz.zxzxz.zxzz..xxzzx.z..x.xxx..zzz", "xzx.zzz.zx.xx..xz.xxxzzxzx.zxx..zxxzzzz.", "z.z.x.zz.x.xx.xzzzzxzzxzxzxx....zz..xxxx", "xx.zxzzzxzx.z.zxxzz.z.zxzzxzzxzz.xzxxxxx", "zzxzxzxxxzzzzzz.xxxzxxzxzx..xxxzx.xzzzzz", ".zxzzxzxxxxz.zz.xxzzxxxzxxzxzxx.zx.z.zxz", "zxxzzxxxzzxxx.zzx.xzzzxxxzxzx.z.xzz..zzx", "xxzx..z.zxxzxzzzzxxzzzxxx.zx..zxxz...xz.", "xzx.zxxxxxxzz..zzzzxxzzxzx..xzzxxzzzx.zx", "xzxxxxzxzzzx.zxz.zx.xxxzzxzzxzzxxzxzzz.x", "xxxxx.zzx.xxzzzzzxxzz.zzzx.z.z.xxzzx.xx."};
    vector<int> queries = {0, 1, 649, 648, 537, 349, 81, 581, 596, 403, 495, 24, 381, 52, 168, 526, 578, 179, 267, 142, 629, 253, 448, 73, 514, 466, 640, 250, 593, 254, 335, 584, 180, 4, 65, 50, 280, 165, 167, 372, 330, 498, 28, 432, 375, 623, 611, 96, 22, 140};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<string> roads = {".zxxxxzxxzzxzzxzzzzzzxxzxx..zxxzxx.zxxzx", "z.z.xzxxxzzxzxxxxx.zzzxxzzxzzxz.xxzxzzzx", "xz.zzzxzzzxzzzz.z.xzzxxzxzzxxxxz.xxxzxzx", "x.z.zxzxzxzxxzzxxzzzzx.zxzzz....zzzzx.xx", "xxzz.zzzxzxzzxxz.zxxzzzxxz..z.zxxxxz.zxx", "xzzxz.xxzzzz.zx.zxzxxzxxzxxxxxz.xxxz.xx.", "zxxzzx.xzzzx...xzxxzz.zx.xxxxxzzzxzxzxzz", "xxzxzxx...z.zx.x.xz..z..xz.x.z.zzxzz.xxz", "xxzzxzz..z.xxzx.xx..x.zzxx.zx.z.xxxzxxzx", "zzzxzzz.z.zx.x..xxxx.xzz.xzxxzxxzxxzxxz.", "zzxzxzzz.z.zzzzz..xxzzzzzxzxxx..xzxzxxzx", "xxzxzzx.xxz.zzzxzzzxxxzx.xzxxzxx.zzxzzxx", "zzzxz..zx.zz.x.zz.z..xxxzzz..zxxzx.xxz.z", "zxzzxz.xzxzzx.zz.xxz.xxxxxzx.z...zz.z.zz", "xxzzxx..x.zz.z.zx.zxz.xxxxzxz..xxzzxz.xz", "zx.xz.xx..zxzzz.zxx.xxxzxzxxzxxzx..zzzzz", "zxzx.zz.xx.zz.xz.xzzzxxzzxzzzxxzxxxxzz.x", "zx.zzxxxxx.z.x.xx.zxzxzz.zzxxx.zzxx.xzzx", "z.xzxzxz.xxzzxzxzz.xxzzxxxx.zzzzzxzxxxzx", "zzzzxxz..xxx.zx.zxx.xx.xzxzx..xx.zzzzx.x", "zzzzzxz.x.zx..zxzzxx.xxxxxx...xxzxxzzxxz", "xzxxzz.z.xzxxx.xxxzxx.xzxzzzzxzz.xxzzzx.", "xxx.zxz.zzzzxxxxxzz.xx.z.z.xxxzxzzxxxzxz", "zxzzxxx.zzzxxxxzzzxxxzz.zxxzxzxzzxzxxxzx", "xzxxxz.xx.z.zxxxz.xzxx.z..zz.xxxzxxxxzzz", "xzzzzxxzxxxxzxxzxzxxxzzx..zz.xxzxxzz.xxx", ".xzz.xx..zzzzzzxzzxzxz.xzz..x..xx.zxz.z.", ".zxz.xxxzxxx.xxxzx.x.zxzzz...zzxz.xzx.zz", "zzx.zxx.xxxx..zzzxz..zxx..x...x.zxzx.xx.", "xxx..xxz.zxzzz.xxxz..xxzxx.z..x.xxx..zzz", "xzx.zzz.zx.xx..xx.zxxzzxxx.zxx..zxxzzzz.", "z.z.x.zz.x.xx.xzzzzxxzxzxzxx....zz..xxxx", "xx.zxxzzxzx.z.xxxzz.z.zzzxxzzxzz.xzxxxzz", "xxxzxxxxxxzzxzz.xxxzxxzxxx..xxxzx.xzzzxz", ".zxzxxzzxxxz.zz.xxzzxxxzxzzxzxx.zx.z.zxz", "zxxzzzxzzzzxx.xzx.xzzzxxxzxzx.z.xzz..zzx", "xzzx..z.xxxzxzzzzxxzzzxxx.zx..zxxz...zz.", "xzx.zxxxxxxzz..zzzxxxzzxzx..xzzxxzzzz.zx", "zzzxxxzxzzzx.zxz.zz.xxxzzxzzxzzxzxxzzz.x", "xxxxx.zzx.xxzzzzxxxxz.zxzx.z.z.xzzzx.xx."};
    vector<int> queries = {0, 1, 649, 648, 638, 29, 56, 175, 295, 506, 139, 218, 204, 427, 135, 20, 254, 544, 275, 277, 588, 201, 285, 122, 626, 327, 330, 633, 502, 194, 50, 312, 106, 97, 565, 101, 616, 459, 93, 30, 124, 559, 519, 461, 269, 485, 120, 118, 434, 291};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<string> roads = {".zxxxxxxxzzzxxxzzzzzzxxzxx..zxxzxx.xxxzx", "z.z.xzzzzzzxzxxzzz.zxzzxzzxxzzz.xxzxzzzx", "xz.zzzxzzxxxzzz.z.xzzxxzxxxxzzxz.xzxzxzx", "x.z.zxzzxzxzxzxxxxxxxx.zxzzz....xzzzx.zx", "xxzz.zzzxzxzzxxz.zxxzzzxxz..z.zxzzxz.zxx", "xzzxz.xzzzzz.zz.zxzxxzxxzxxzxxz.xxzz.xz.", "xzxzzx.xzzzx...xxxxzz.zx.xxxxxzzzxxxzxzz", "xzzzzzx...z.zx.x.xz..z..xz.x.x.zxxxz.xxz", "xzzxxzz..z.xxzx.zx..x.zxxz.zx.z.zzzzxzzx", "zzxzzzz.z.zx.x..xzxx.xzx.xzzzzxxzzxzzzz.", "zzxxxzzz.z.zzzzx..xxzzzzxxzxxx..xxzzxxxx", "zxxzzzx.xxz.xzzzzzxxxxzz.xzxxxxx.zzzzzxx", "xzzxz..zx.zx.z.zz.z..xxxzzz..zxzzx.xxz.x", "xxzzxz.xzxzzz.zz.xzz.xxxxxzz.z...zx.z.zx", "xxzxxz..x.zz.z.zx.zxz.zxxzzxz..xxzxxz.xx", "zz.xz.xx..xzzzz.zxx.xxxzxzzzzxxzx..xzzxx", "zzzx.zx.zx.zz.xz.xxzxzxzzxzzxxzzzzxxzx.z", "zz.xzxxxxz.z.x.xx.zzzxzz.zxxxz.zxxx.zzzx", "z.xxxzxz.xxxzzzxxz.zxzzzxzx.zzzzzxzxxxzx", "zzzxxxz..xxx.zx.zzz.xx.xzxzx..xx.zzzzx.x", "zxzxzxz.x.zx..zxxzxx.xxxxxx...xxxxxxzxxz", "xzxxzz.z.xzxxx.xzxzxx.xxxzxzzxzz.xxzzzz.", "xzx.zxz.zzzzxxzxxzz.xx.z.z.xxxzxzzxxxzxz", "zxzzxxx.xxzzxxxzzzzxxxz.zzxxxzxzzxxxzxzx", "xzxxxz.xx.x.zxxxz.xzxx.z..zz.xxxzzxzxzzz", "xzxzzxxzzxxxzxzzxzzxxzzz..zz.xxzzxzz.zxx", ".xxz.xx..zzzzzzzzxxzxx.xzz..x..xz.zxz.z.", ".xxz.zxxzzxx.zxzzx.x.zxxzz...zzxz.xzx.zz", "zzz.zxx.xzxx..zzxxz..zxx..x...x.zxzx.xx.", "xzz..xxx.zxxzz.xxzz..xxzxx.z..x.xxx..zzx", "xzx.zzz.zx.xx..xz.zxxzzxxx.zxx..xxzzzzz.", "z.z.x.zz.x.xz.xzzzzxxzxzxzxx....zz..xxxx", "xx.xzxzxzzx.z.xxzxz.x.zzzzzzzxxz.zzzxxzz", "xxxzzxxxzzxzxzz.zxxzxxzxzx..xxxzz.xzzzxz", ".zzzxzxxzxzz.xx.xxzzxxxxxzzxzxz.zx.z.zxz", "xxxzzzxzzzzzx.xxx.xzxzxxzzxzx.z.zzz..zzx", "xzzx..z.xzxzxzzzzzxzzzxzx.zx..zxxz...zz.", "xzx.zxxxzzxzz..zxzxxxzzxzz..xzzxxzzzz.xx", "zzzzxzzxzzxx.zxx.zz.xzxzzxzzxzzxzxxzzx.x", "xxxxx.zzx.xxxxxxzxxxz.zxzx.z.x.xzzzx.xx."};
    vector<int> queries = {0, 1, 649, 648, 608, 116, 585, 59, 260, 9, 410, 345, 463, 23, 408, 600, 249, 32, 68, 536, 458, 420, 340, 161, 13, 281, 263, 555, 364, 305, 573, 532, 576, 119, 92, 178, 166, 461, 232, 611, 24, 128, 114, 143, 253, 62, 300, 333, 214, 435};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<string> roads = {".ZZXZZZXZXZZZZXZXZZXZXXXZXZXXXXZXXXXXXZ", "Z.XXZXXXXZZZXXZZZXZXXZZXZZZXZXXXXZXZZZX", "ZX.ZZZXXZXZXXZZXZZZXXZZZXXXXXZXXZXXZXZZ", "XXZ.XXZZXXZZXZZZZXXXXZZZXXXXZXZZXZZXZXZ", "ZZZX.XXZZZXXZXXXXXXXZZXZZZZXXZXXXZXZZZZ", "ZXZXX.ZXZZXZZXXZXXXZZZZXXZXZZXXZXZZZXXX", "ZXXZXZ.XZXXXZZZXZXZZZXXXXXZZZZXXZXZZZXX", "XXXZZXX.ZZZXZXZZXZXXXZXZXXZXZXZZZXXZZZX", "ZXZXZZZZ.XXZZXXXZXZZXXZZZZXXXZZXZXXXXXZ", "XZXXZZXZX.XZZXZXZZXXZZXXXXXZXXZZXZZXZZZ", "ZZZZXXXZXX.XZXZZZXZZXXXZXXZXZXZZXXZXZXZ", "ZZXZXZXXZZX.ZXXXXXZXZZZZZXXZZZXXZXZXXZX", "ZXXXZZZZZZZZ.XZZXXXZZXXXZZXXXZZZXZXXXXX", "ZXZZXXZXXXXXX.ZZXZZZXZZXXXXZXZZXZZZXZXZ", "XZZZXXZZXZZXZZ.ZXXXZZXXXXZXXXXZZZXZZXXZ", "ZZXZXZXZXXZXZZZ.XXZXZZZXXXZZXZXZXZXXZXX", "XZZZXXZXZZZXXXXX.ZXXXZZZXZXZXXXXZZZZZXZ", "ZXZXXXXZXZXXXZXXZ.ZZZXZXXZZXZZZZZXXZXXZ", "ZZZXXXZXZXZZXZXZXZ.XXXZXZXXZZXZZZZZXXXX", "XXXXXZZXZXZXZZZXXZX.XZZZZXZZXXZXZZXXZZX", "ZXXXZZZXXZXZZXZZXZXX.XZZXXZZXXXZZXZXZZX", "XZZZZZXZXZXZXZXZZXXZX.XXXZXXXZZXXZXZZXZ", "XZZZXZXXZXXZXZXZZZZZZX.XZZZXXXZXXZZXXXX", "XXZZZXXZZXZZXXXXZXXZZXX.XXZZZZZXZXZZXZX", "ZZXXZXXXZXXZZXXXXXZZXXZX.ZZXXZZZZXXZZZZ", "XZXXZZXXZXXXZXZXZZXXXZZXZ.XZZZXZXXZXZZZ", "ZZXXZXZZXXZXXXXZXZXZZXZZZX.ZZXXZXZZXXZX", "XXXXXZZXXZXZXZXZZXZZZXXZXZZ.ZZZXXZZZXXX", "XZXZXZZZXXZZXXXXXZZXXXXZXZZZ.ZXXXZZZZZX", "XXZXZXZXZXXZZZXZXZXXXZXZZZXZZ.XXXXXZZZZ", "XXXZXXXZZZZXZZZXXZZZXZZZZXXZXX.ZZXXZXXX", "ZXXZXZXZXZZXZXZZXZZXZXXXZZZXXXZ.XXXZZXZ", "XXZXXXZZZXXZXZZXZZZZZXXZZXXXXXZX.ZZZXZX", "XZXZZZXXXZXXZZXZZXZZXZZXXXZZZXXXZ.XXXZZ", "XXXZXZZXXZZZXZZXZXZXZXZZXZZZZXXXZX.XXZX", "XZZXZZZZXXXXXXZXZZXXXZXZZXXZZZZZZXX.XXZ", "XZXZZXZZXZZXXZXZZXXZZZXXZZXXZZXZXXXX.ZX", "XZZXZXXZXZXZXXXXXXXZZXXZZZZXZZXXZZZXZ.Z", "ZXZZZXXXZZZXXZZXZZXXXZXXZZXXXZXZXZXZXZ."};
    vector<int> queries = {0, 1, 741, 740, 477, 484, 282, 213, 73, 581, 694, 564, 144, 588, 329, 476, 240, 281, 327, 173, 671, 298, 354, 650, 62, 675, 670, 232, 672, 370, 651, 710, 510, 447, 70, 668, 409, 449, 186, 85, 535, 304, 438, 568, 428, 558, 470, 223, 117, 258};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3, 0, 37, 27, 36, 21, 27, 9, 33, 26, 18, 12, 23, 23, 14, 14, 7, 25, 15, 30, 8, 3, 34, 6, 37, 36, 7, 31, 10, 24, 32, 37, 6, 13, 37, 23, 8, 6, 13, 16, 11, 38, 26, 37, 31, 11, 9, 23, 13};
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<string> roads = {".ZZXZZZXZXZZZZXZXZZXZXXXZXZXXXXZXXXXXXZ", "Z.XXZXXXXZZZXXZZZXZXXZZXZZZXZXXXXZXZZZX", "ZX.ZZZXXZXZXXZZXZZZXXZZZXXXXXZXXZXXZXZZ", "XXZ.XXZZXXZZXZZZZXXXZZZZXXXXZXZZXZZXZXZ", "ZZZX.XXZZZXXZXXXXXXXZZXZZZZXXZXXXZXZZZZ", "ZXZXX.ZXZZXZZXXZXXXZZZZXXZXZZXXZXZZZXXX", "ZXXZXZ.XZXXXZZZXZXZZZXXXXXZZZZXXZXZZZXX", "XXXZZXX.ZZZXZXZZXZXXXZXZXXZXZXZZZXXZZZX", "ZXZXZZZZ.XXZZXXXZXZZXXZZZZXXXZZXZXXXXXZ", "XZXXZZXZX.XZZXZXZZXXZZXXXXXZXXZZXZZXZZZ", "ZZZZXXXZXX.XZXZZZXZZXXXZXXZXZXZZXXZXZXZ", "ZZXZXZXXZZX.ZXXXXXZXZZZZZXXZZZXXZXZXXZX", "ZXXXZZZZZZZZ.XZZXXXZZXXXZZXXXZZZXZXXXXX", "ZXZZXXZXXXXXX.ZZXZZZXZZXXXXZXZZXZZZXZXZ", "XZZZXXZZXZZXZZ.ZXXXZZXXXXZXXXXZZZXZZXXZ", "ZZXZXZXZXXZXZZZ.XXZXZZZXXXZZXZXZXZXXZXX", "XZZZXXZXZZZXXXXX.ZXXXZZZXZXZXXXXZZZZZXZ", "ZXZXXXXZXZXXXZXXZ.ZZZXZXXZZXZZZZZXXZXXZ", "ZZZXXXZXZXZZXZXZXZ.XXXZXZXXZZXZZZZZXXXX", "XXXXXZZXZXZXZZZXXZX.XZZZZXZZXXZXZZXXZZX", "ZXXZZZZXXZXZZXZZXZXX.XZZXXZZXXXZZXZXZZX", "XZZZZZXZXZXZXZXZZXXZX.XXXZXXXZZXXZXZZXZ", "XZZZXZXXZXXZXZXZZZZZZX.XZZZXXXZXXZZXXXX", "XXZZZXXZZXZZXXXXZXXZZXX.XXZZZZZXZXZZXZX", "ZZXXZXXXZXXZZXXXXXZZXXZX.ZZXXZZZZXXZZZZ", "XZXXZZXXZXXXZXZXZZXXXZZXZ.XZZZXZXXZXZZZ", "ZZXXZXZZXXZXXXXZXZXZZXZZZX.ZZXXZXZZXXZX", "XXXXXZZXXZXZXZXZZXZZZXXZXZZ.ZZZXXZZZXXX", "XZXZXZZZXXZZXXXXXZZXXXXZXZZZ.ZXXXZZZZZX", "XXZXZXZXZXXZZZXZXZXXXZXZZZXZZ.XXXXXZZZZ", "XXXZXXXZZZZXZZZXXZZZXZZZZXXZXX.ZZXXZXXX", "ZXXZXZXZXZZXZXZZXZZXZXXXZZZXXXZ.XXXZZXZ", "XXZXXXZZZXXZXZZXZZZZZXXZZXXXXXZX.ZZZXZX", "XZXZZZXXXZXXZZXZZXZZXZZXXXZZZXXXZ.XXXZZ", "XXXZXZZXXZZZXZZXZXZXZXZZXZZZZXXXZX.XXZX", "XZZXZZZZXXXXXXZXZZXXXZXZZXXZZZZZZXX.XXZ", "XZXZZXZZXZZXXZXZZXXZZZXXZZXXZZXZXXXX.ZX", "XZZXZXXZXZXZXXXXXXXZZXXZZZZXZZXXZZZXZ.Z", "ZXZZZXXXZZZXXZZXZZXXXZXXZZXXXZXZXZXZXZ."};
    vector<int> queries = {0, 1, 741, 740, 201, 157, 430, 307, 481, 700, 291, 187, 383, 373, 83, 489, 616, 508, 462, 330, 696, 134, 256, 53, 113, 271, 706, 184, 293, 458, 418, 405, 345, 575, 562, 301, 447, 225, 260, 170, 676, 560, 163, 144, 511, 534, 149, 633, 444, 73};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<string> roads = {".ZZXZZZXZXZZZZXZXZZXZXXXZXZXXXXZXXXXXXX", "Z.XXZXXXXZZZXXZZZXZXXZZXZZZXZXXXXZXZZZX", "ZX.ZZZXXZXZXXZZXZZZXXZZZXXXXXZXXZXXZXZZ", "XXZ.XXZZXXZZXZZZZXXXZZZZXXXXZXZZXZZXZXZ", "ZZZX.XXZZZXXZXXXXXXXZZXZZZZXXZXXXZXZZZZ", "ZXZXX.ZXZZXZZXXZXXXZZZZXXZXZZXXZXZZZXXX", "ZXXZXZ.XZXXXZZZXZXZZZXXXXXZZZZXXZXZZZXX", "XXXZZXX.ZZZXZXZZXZXXXZXZXXZXZXZZZXXZZZX", "ZXZXZZZZ.XXZZXXXZXZZXXZZZZXXXZZXZXXXXXZ", "XZXXZZXZX.XZZXZXZZXXZZXXXXXZXXZZXZZXZZZ", "ZZZZXXXZXX.XZXZZZXZZXXXZXXZXZXZZXXZXZXZ", "ZZXZXZXXZZX.ZXXXXXZXZZZZZXXZZZXXZXZXXZX", "ZXXXZZZZZZZZ.XZZXXXZZXXXZZXXXZZZXZXXXXX", "ZXZZXXZXXXXXX.ZZXZZZXZZXXXXZXZZXZZZXZXZ", "XZZZXXZZXZZXZZ.ZXXXZZXXXXZXXXXZZZXZZXXZ", "ZZXZXZXZXXZXZZZ.XXZXZZZXXXZZXZXZXZXXZXX", "XZZZXXZXZZZXXXXX.ZXXXZZZXZXZXXXXZZZZZXZ", "ZXZXXXXZXZXXXZXXZ.ZZZXZXXZZXZZZZZXXZXXZ", "ZZZXXXZXZXZZXZXZXZ.XXXZXZXXZZXZZZZZXXXX", "XXXXXZZXZXZXZZZXXZX.XZZZZXZZXXZXZZXXZZX", "ZXXZZZZXXZXZZXZZXZXX.XZZXXZZXXXZZXZXZZX", "XZZZZZXZXZXZXZXZZXXZX.XXXZXXXZZXXZXZZXZ", "XZZZXZXXZXXZXZXZZZZZZX.XZZZXXXZXXZZXXXX", "XXZZZXXZZXZZXXXXZXXZZXX.XXZZZZZXZXZZXZX", "ZZXXZXXXZXXZZXXXXXZZXXZX.ZZXXZZZZXXZZZZ", "XZXXZZXXZXXXZXZXZZXXXZZXZ.XZZZXZXXZXZZZ", "ZZXXZXZZXXZXXXXZXZXZZXZZZX.ZZXXZXZZXXZX", "XXXXXZZXXZXZXZXZZXZZZXXZXZZ.ZZZXXZZZXXX", "XZXZXZZZXXZZXXXXXZZXXXXZXZZZ.ZXXXZZZZZX", "XXZXZXZXZXXZZZXZXZXXXZXZZZXZZ.XXXXXZZZZ", "XXXZXXXZZZZXZZZXXZZZXZZZZXXZXX.ZZXXZXXX", "ZXXZXZXZXZZXZXZZXZZXZXXXZZZXXXZ.XXXZZXZ", "XXZXXXZZZXXZXZZXZZZZZXXZZXXXXXZX.ZZZXZX", "XZXZZZXXXZXXZZXZZXZZXZZXXXZZZXXXZ.XXXZZ", "XXXZXZZXXZZZXZZXZXZXZXZZXZZZZXXXZX.XXZX", "XZZXZZZZXXXXXXZXZZXXXZXZZXXZZZZZZXX.XXZ", "XZXZZXZZXZZXXZXZZXXZZZXXZZXXZZXZXXXX.ZX", "XZZXZXXZXZXZXXXXXXXZZXXZZZZXZZXXZZZXZ.Z", "XXZZZXXXZZZXXZZXZZXXXZXXZZXXXZXZXZXZXZ."};
    vector<int> queries = {0, 1, 741, 740, 401, 450, 44, 463, 167, 48, 336, 512, 50, 358, 485, 558, 619, 406, 3, 159, 229, 502, 218, 12, 396, 697, 69, 366, 498, 329, 10, 595, 717, 80, 206, 530, 9, 391, 594, 523, 519, 674, 349, 178, 94, 565, 543, 173, 58, 564};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<string> roads = {".ZZXZZZXZXZZZZXZXZZXZXXXZXZXXXXZXXXXXXX", "Z.XXZXXXXZZZXXZZZXZXXZZXZZZXZXXXXZXZZZX", "ZX.ZZZXXZXZXXZZXZZZXXZZZXXXXXZXXZXXZXZZ", "XXZ.XXZZXXZZXZZZZXXXZZZZXXXXZXZZXZZXZXZ", "ZZZX.XXZZZXXZXXXXXXXZZXZZZZXXZXXXZXZZZZ", "ZXZXX.ZXZZXZZXXZXXXZZZZXXZXZZXXZXZZZXXX", "ZXXZXZ.XZXXXZZZXZXZZZXXXXXZZZZXXZXZZZXX", "XXXZZXX.ZZZXZXZZZZXXXZXZXXZXZXZZZXXZZZX", "ZXZXZZZZ.XXZZXXXZXZZXXZZZZXXXZZXZXXXXXZ", "XZXXZZXZX.XZZXZXZZXXZZXXXXXZXXZZXZZXZZZ", "ZZZZXXXZXX.XZXZZZXZZXXXZXXZXZXZZXXZXZXZ", "ZZXZXZXXZZX.ZXXXXXZXZZZZZXXZZZXXZXZXXZX", "ZXXXZZZZZZZZ.XZZXXXZZXXXZZXXXZZZXZXXXXX", "ZXZZXXZXXXXXX.ZZXZZZXZZXXXXZXZZXZZZXZXZ", "XZZZXXZZXZZXZZ.ZXXXZZXXXXZXXXXZZZXZZXXZ", "ZZXZXZXZXXZXZZZ.XXZXZZZXXXZZXZXZXZXXZXX", "XZZZXXZZZZZXXXXX.ZXXXZZZXZXZXXXXZZZZZXZ", "ZXZXXXXZXZXXXZXXZ.ZZZXZXXZZXZZZZZXXZXXZ", "ZZZXXXZXZXZZXZXZXZ.XXXZXZXXZZXZZZZZXXXX", "XXXXXZZXZXZXZZZXXZX.XZZZZXZZXXZXZZXXZZX", "ZXXZZZZXXZXZZXZZXZXX.XZZXXZZXXXZZXZXZZX", "XZZZZZXZXZXZXZXZZXXZX.XXXZXXXZZXXZXZZXZ", "XZZZXZXXZXXZXZXZZZZZZX.XZZZXXXZXXZZXXXX", "XXZZZXXZZXZZXXXXZXXZZXX.XXZZZZZXZXZZXZX", "ZZXXZXXXZXXZZXXXXXZZXXZX.ZZXXZZZZXXZZZZ", "XZXXZZXXZXXXZXZXZZXXXZZXZ.XZZZXZXXZXZZZ", "ZZXXZXZZXXZXXXXZXZXZZXZZZX.ZZXXZXZZXXZX", "XXXXXZZXXZXZXZXZZXZZZXXZXZZ.ZZZXXZZZXXX", "XZXZXZZZXXZZXXXXXZZXXXXZXZZZ.ZXXXZZZZZX", "XXZXZXZXZXXZZZXZXZXXXZXZZZXZZ.XXXXXZZZZ", "XXXZXXXZZZZXZZZXXZZZXZZZZXXZXX.ZZXXZXXX", "ZXXZXZXZXZZXZXZZXZZXZXXXZZZXXXZ.XXXZZXZ", "XXZXXXZZZXXZXZZXZZZZZXXZZXXXXXZX.ZZZXZX", "XZXZZZXXXZXXZZXZZXZZXZZXXXZZZXXXZ.XXXZZ", "XXXZXZZXXZZZXZZXZXZXZXZZXZZZZXXXZX.XXZX", "XZZXZZZZXXXXXXZXZZXXXZXZZXXZZZZZZXX.XXZ", "XZXZZXZZXZZXXZXZZXXZZZXXZZXXZZXZXXXX.ZX", "XZZXZXXZXZXZXXXXXXXZZXXZZZZXZZXXZZZXZ.Z", "XXZZZXXXZZZXXZZXZZXXXZXXZZXXXZXZXZXZXZ."};
    vector<int> queries = {0, 1, 741, 740, 461, 330, 546, 339, 25, 260, 587, 105, 48, 391, 412, 686, 268, 697, 541, 189, 717, 24, 416, 659, 722, 104, 480, 668, 47, 396, 188, 739, 528, 322, 356, 297, 429, 477, 558, 175, 727, 205, 214, 688, 373, 637, 342, 128, 255, 605};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<string> roads = {".ZZXZZZXZXZZZZXZXZZXZXXXZXZXXXXZXXXXXXX", "Z.XXZXXXXZZZXXZZZXZXXZZXZZZXZXXXXZXZZZX", "ZX.ZZZXXZXZXXZZXZZZXXZZZXXXXXZXXZXXZXZZ", "XXZ.XXZZXXZZXZZZZXXXZZZZXXXXZXZZXZZXZXZ", "ZZZX.XXZZZXXZXXXXXXXZZXZZZZXXZXXXZXZZZZ", "ZXZXX.ZXZZXZZXXZXXXZZZZXXZXZZXXZXZZZXXX", "ZXXZXZ.XZXXXZZZXZXZZZXXXXXZZZZXXZXZZZXX", "XXXZZXX.ZZZXZXZZZZXXXZXZXXZXZXZZZXXZZZX", "ZXZXZZZZ.XXZZXXXZXZZXXZZZZXXXZZXZXXXXXZ", "XZXXZZXZX.XZZXZXZZXXZZXXXXXZXXZZXZZXZZZ", "ZZZZXXXZXX.XZXZZZXZZXXXZXXZXZXZZXXZXZXZ", "ZZXZXZXXZZX.ZXXXXXZXZZZZZXXZZZXXZXZXXZX", "ZXXXZZZZZZZZ.XZZXXXZZXXXZZXXXZZZXZXXXXX", "ZXZZXXZXXXXXX.ZZXZZZXZZXXXXZXZZXZZZXZXZ", "XZZZXXZZXZZXZZ.ZXXXZZXXXXZXXXXZZZXZZXXZ", "ZZXZXZXZXXZXZZZ.XXZXZZZXXXZZXZXZXZXXZXX", "XZZZXXZZZZZXXXXX.ZXXXZZZXZXZXXXXZZZZZXZ", "ZXZXXXXZXZXXXZXXZ.ZZZXZXXZZXZZZZZXXZXXZ", "ZZZXXXZXZXZZXZXZXZ.XXXZXZXXZZXZZZZZXXXX", "XXXXXZZXZXZXZZZXXZX.XZZZZXZZXXZXZZXXZZX", "ZXXZZZZXXZXZZXZZXZXX.XZZXXZZXXXZZXZXZZX", "XZZZZZXZXZXZXZXZZXXZX.XXXZXXXZZXXZXZZXZ", "XZZZXZXXZXXZXZXZZZZZZX.XZZZXXXZXXZZXXXX", "XXZZZXXZZXZZXXXXZXXZZXX.XXZZZZZXZXZZXZX", "ZZXXZXXXZXXZZXXXXXZZXXZX.ZZXZZZZZXXZZZZ", "XZXXZZXXZXXXZXZXZZXXXZZXZ.XZZZXZXXZXZZZ", "ZZXXZXZZXXZXXXXZXZXZZXZZZX.ZZXXZXZZXXZX", "XXXXXZZXXZXZXZXZZXZZZXXZXZZ.ZZZXXZZZXXX", "XZXZXZZZXXZZXXXXXZZXXXXZZZZZ.ZXXXZZZZZX", "XXZXZXZXZXXZZZXZXZXXXZXZZZXZZ.XXXXXZZZZ", "XXXZXXXZZZZXZZZXXZZZXZZZZXXZXX.ZZXXZXXX", "ZXXZXZXZXZZXZXZZXZZXZXXXZZZXXXZ.XXXZZXZ", "XXZXXXZZZXXZXZZXZZZZZXXZZXXXXXZX.ZZZXZX", "XZXZZZXXXZXXZZXZZXZZXZZXXXZZZXXXZ.XXXZZ", "XXXZXZZXXZZZXZZXZXZXZXZZXZZZZXXXZX.XXZX", "XZZXZZZZXXXXXXZXZZXXXZXZZXXZZZZZZXX.XXX", "XZXZZXZZXZZXXZXZZXXZZZXXZZXXZZXZXXXX.ZX", "XZZXZXXZXZXZXXXXXXXZZXXZZZZXZZXXZZZXZ.Z", "XXZZZXXXZZZXXZZXZZXXXZXXZZXXXZXZXZXXXZ."};
    vector<int> queries = {0, 1, 741, 740, 628, 514, 192, 443, 306, 217, 637, 399, 176, 127, 423, 110, 221, 113, 166, 660, 259, 565, 409, 558, 181, 573, 294, 517, 545, 405, 595, 546, 285, 132, 190, 476, 656, 371, 139, 32, 673, 657, 590, 43, 638, 428, 354, 368, 276, 284};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<string> roads = {".ZZXZZZXZXZZZZXZXZZXZXXXZXZXXXXZXXXXXXX", "Z.XXZXXXXZZZXXZZZXZXXZZXZZZXXXXXXZXZZZX", "ZX.ZZZXXZXZXXZZXZZZXXZZZXXXXXZXXZXXZXZZ", "XXZ.XXZZXXZZXZZXZXXZZZZZXXXXZXZZZXZXZXZ", "ZZZX.XXZZZXXZXXXXXXXZZXZZZZXXZXXXZXZZZZ", "ZXZXX.ZXZZXZZXXZXXXZZZZXXZXZZXXZXZZZXXX", "ZXXZXZ.XZXXXZZZXZXZZZXXXXXZZZZXXZXZZZXX", "XXXZZXX.ZZZXZXZZZZXXXZXZXXZXZXZZZXXZZZX", "ZXZXZZZZ.XXZZXXXZXZZXXZZZZXXXZZXZXXXXXZ", "XZXXZZXZX.XZZXZXZZXXZZXXXXXZXXZZXZZXZZZ", "ZZZZXXXZXX.XZXZZZXZZXXXZXXZXZXZZXXZXZXZ", "ZZXZXZXXZZX.ZXXXXXZXZZZZZXXZZZXXZXZXXZX", "ZXXXZZZZZZZZ.XZZXZXZZXXXZZXXXZZZXZXXXXX", "ZXZZXXZXXXXXX.ZZXZZZXXZXXXXZXZZXZZZXZXZ", "XZZZXXZZXZZXZZ.ZXXXZZXXXXZXXXXZZZXZZXXZ", "ZZXXXZXZXXZXZZZ.XXZXZZZXXXZZXZXZXZXXZXX", "XZZZXXZZZZZXXXXX.ZXXXZZZXZXZZXXXZZZZZXZ", "ZXZXXXXZXZXXZZXXZ.ZZZXZXXZZXZZZZZXXZXXZ", "ZZZXXXZXZXZZXZXZXZ.XXXZXZXXXZXZZZZZXXXX", "XXXZXZZXZXZXZZZXXZX.XZZZZXZZXXZXZZXXZZX", "ZXXZZZZXXZXZZXZZXZXX.XZZXXZXXXXZZXZXXZX", "XZZZZZXZXZXZXXXZZXXZX.XXXZXXXZZXXZXZZXZ", "XZZZXZXXZXXZXZXZZZZZZX.XZZZXXXZXXZZXXXX", "XXZZZXXZZXZZXXXXZXXZZXX.XXZZZZZXZXZZXZX", "ZZXXZXXXZXXZZXXXXXZZXXZX.ZZXZZZZZXXZZZX", "XZXXZZXXZXXXZXZXZZXXXZZXZ.XZZZXZXXXXXZZ", "ZZXXZXZZXXZXXXXZXZXZZXZZZX.ZZXXZXZZXXZX", "XXXXXZZXXZXZXZXZZXXZXXXZXZZ.ZZZXXZZZXXX", "XXXZXZZZXXZZXXXXZZZXXXXZZZZZ.ZXXXZZZZZX", "XXZXZXZXZXXZZZXZXZXXXZXZZZXZZ.XXXXXZZZZ", "XXXZXXXZZZZXZZZXXZZZXZZZZXXZXX.ZZXXZXXX", "ZXXZXZXZXZZXZXZZXZZXZXXXZZZXXXZ.XXXZZXZ", "XXZZXXZZZXXZXZZXZZZZZXXZZXXXXXZX.ZZZXXX", "XZXXZZXXXZXXZZXZZXZZXZZXXXZZZXXXZ.XXXZZ", "XXXZXZZXXZZZXZZXZXZXZXZZXXZZZXXXZX.XXZX", "XZZXZZZZXXXXXXZXZZXXXZXZZXXZZZZZZXX.XXX", "XZXZZXZZXZZXXZXZZXXZXZXXZXXXZZXZXXXX.ZX", "XZZXZXXZXZXZXXXXXXXZZXXZZZZXZZXXXZZXZ.Z", "XXZZZXXXZZZXXZZXZZXXXZXXXZXXXZXZXZXXXZ."};
    vector<int> queries = {0, 1, 741, 740, 233, 111, 325, 63, 368, 52, 34, 332, 248, 529, 290, 49, 402, 42, 736, 628, 725, 738, 495, 505, 601, 603, 714, 447, 659, 47, 259, 648, 207, 61, 594, 377, 177, 97, 85, 150, 104, 644, 254, 460, 563, 280, 674, 296, 346, 15};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<string> roads = {".ZZXZZZXZXZZZZXXXZZXZXXXZXZXXZXZXXXXXXX", "Z.XXZZXXXZZZXZZZZXZZXZZXZZZXXXXXXZXZZZX", "ZX.ZZZXZZXZXXZZXZZZXXZZXXXXXXZXXZXXZXZZ", "XXZ.XXZXXZZZXXZXXZXZZZZXXXXXZXZZZXZXZXZ", "ZZZX.XZZZZXXZXXXXXXXZZXZZZZXXZXXZZXZZXZ", "ZZZXX.ZXZZXZZXXZXXXZZZZXXXXZZXXZXZZZXZX", "ZXXZZZ.XZXXXZZZZZXXZZXXXXXZZZZXXXXXZZXX", "XXZXZXX.ZXZXZXZZXZXXXXXZXXZXZXZZZXXZZZX", "ZXZXZZZZ.XXZZXXXXXZZXXZZZZXXZZZXZXXXXXX", "XZXZZZXXX.ZZZXZXZZZXZZXZXZXZXZXZXZZXZZZ", "ZZZZXXXZXZ.XZZZZZXZZXXXZXXZXXXZZXXZXZXZ", "ZZXZXZXXZZX.ZXXXXXZXZXZZZXXZZZXXXXZXXZX", "ZXXXZZZZZZZZ.XZZXZXZZXXXZZXXXZZZXZXXXXX", "ZZZXXXZXXXZXX.ZZZXZZXXXXXXXZXZZXZZXXZXZ", "XZZZXXZZXZZXZZ.ZXXXZZXXZXZXXXXXZZXXZXXZ", "XZXXXZZZXXZXZZZ.XXZXZZZXXXZZXZZZXZXXZXX", "XZZXXXZXXZZXXZXX.ZXXXZZZZZXZZXXXZZZZZXZ", "ZXZZXXXZXZXXZXXXZ.ZZZXXXXZZXZZXZXXXZXXX", "ZZZXXXXXZZZZXZXZXZ.XXXZXZXXXZZZZZZXXXXX", "XZXZXZZXZXZXZZZXXZX.XZZZZXXZXXZXZZXXZZX", "ZXXZZZZXXZXZZXZZXZXX.XZZXXZXXXXZZXZZXZX", "XZZZZZXXXZXXXXXZZXXZX.XXXZXXXZZXXZXZXXZ", "XZZZXZXXZXXZXXXZZXZZZX.XZZZZZXZXXZZXXXX", "XXXXZXXZZZZZXXZXZXXZZXX.XXZZXZZXZXZZXZX", "ZZXXZXXXZXXZZXXXZXZZXXZX.XZXZZXZXXXZZZX", "XZXXZXXXZZXXZXZXZZXXXZZXX.ZZZZXZXXXXXZX", "ZZXXZXZZXXZXXXXZXZXXZXZZZZ.ZXXXZXZZXXZZ", "XXXXXZZXXZXZXZXZZXXZXXZZXZZ.ZZZXXZXZZXX", "XXXZXZZZZXXZXXXXZZZXXXZXZZXZ.ZXXZZZZZXX", "ZXZXZXZXZZXZZZXZXZZXXZXZZZXZZ.XXZXXZZZZ", "XXXZXXXZZXZXZZXZXXZZXZZZXXXZXX.ZZXXZXXX", "ZXXZXZXZXZZXZXZZXZZXZXXXZZZXXXZ.XXXZXXZ", "XXZZZXXZZXXXXZZXZXZZZXXZXXXXZZZX.ZZZZZX", "XZXXZZXXXZXXZZXZZXZZXZZXXXZZZXXXZ.XXXZZ", "XXXZXZXXXZZZXXXXZXXXZXZZXXZXZXXXZX.XXZX", "XZZXZZZZXXXXXXZXZZXXZZXZZXXZZZZZZXX.XZX", "XZXZZXZZXZZXXZXZZXXZXXXXZXXZZZXXZXXX.XX", "XZZXXZXZXZXZXXXXXXXZZXXZZZZXXZXXZZZZX.Z", "XXZZZXXXXZZXXZZXZXXXXZXXXXZXXZXZXZXXXZ."};
    vector<int> queries = {0, 1, 741, 740, 713, 524, 461, 413, 376, 161, 425, 504, 87, 325, 383, 381, 121, 150, 656, 431, 469, 248, 21, 668, 454, 231, 327, 570, 554, 645, 649, 268, 262, 681, 266, 201, 137, 717, 709, 189, 207, 666, 176, 551, 81, 86, 693, 572, 104, 380};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<string> roads = {".ZZXZZZXZXZXZZXXXZXXXXXXZZXXXZXZXXXZXXX", "Z.XXZZZXXZZZXZXZZXZZXZXXZZZXZXXXXZXZZZX", "ZX.ZZZXXZXXXXXZXZZZXXZZXXXXZXZZXZXXZXZZ", "XXZ.XXZZXXZZXXZXXZXZZZZZXXXXZZZZZXZZZXZ", "ZZZX.ZZZZZXXZXXXXXXXXZXZZZZXXZXXZZXZZZZ", "ZZZXZ.ZXXZZZXXXZXZXXZXZXXZXZZZXZZXXZXZX", "ZZXZZZ.XXXXZZZZZZXZZZXXXXXZZXZXXXXXXZXX", "XXXZZXX.ZXZZZXXZXZXXZZXZXZZXXXZZZZXZZZX", "ZXZXZXXZ.XXZZXXZXZXZZXZZZZZXZZZXXXXXXXX", "XZXXZZXXX.ZXXXZXZZZXXZXZXZXZZXXZXZZXXZZ", "ZZXZXZXZXZ.XZZZZXXZZXZXZXXZZXXZZXXZZZXZ", "XZXZXZZZZXX.ZXXXZXXXZXZZZXZZZZZXXXZXXXX", "ZXXXZXZZZXZZ.XXZXZXXZXZXZZXXXZXZZZXXZXX", "ZZXXXXZXXXZXX.ZZZXZZXXZZXXXZXZZXXZXXZXZ", "XXZZXXZXXZZXXZ.ZXXXZZXXZXZXXXXXZZXXZXXZ", "XZXXXZZZZXZXZZZ.XXZXZZZXXXZZXZZZXZXXXXX", "XZZXXXZXXZXZXZXX.ZXZXZZZZZXZZXXXZZZXXXZ", "ZXZZXZXZZZXXZXXXZ.ZXZZXXZZZXZZXZXXXXXXZ", "XZZXXXZXXZZXXZXZXZ.XXXZZZXXXZXZZZZXXXZX", "XZXZXXZXZXZXXZZXZXX.XZZXZXXZXXXXZZXXZZZ", "XXXZXZZZZXXZZXZZXZXX.XZZXZZZXXXXXZZZXZZ", "XZZZZXXZXZZXXXXZZZXZX.XXXXXXXZZXXZZXXXZ", "XXZZXZXXZXXZZZXZZXZZZX.ZZZZZZXZXXZXXXXX", "XXXZZXXZZZZZXZZXZXZXZXZ.XXZXXZZXZZZZXZX", "ZZXXZXXXZXXZZXXXZZZZXXZX.ZZXZZXZXXXZZZX", "ZZXXZZXZZZXXZXZXZZXXZXZXZ.ZZZZZZXXXXXZX", "XZXXZXZZZXZZXXXZXZXXZXZZZZ.ZXXXZXZZXXZX", "XXZXXZZXXZZZXZXZZXXZZXZXXZZ.ZZZZXZXZZXZ", "XZXZXZXXZZXZXXXXZZZXXXZXZZXZ.ZZXZXZZZXX", "ZXZZZZZXZXXZZZXZXZXXXZXZZZXZZ.ZXZXXZZZZ", "XXZZXXXZZXZZXZXZXXZXXZZZXZXZZZ.ZZXXZXXX", "ZXXZXZXZXZZXZXZZXZZXXXXXZZZZXXZ.XXXXXXZ", "XXZZZZXZXXXXZXZXZXZZXXXZXXXXZZZX.ZXZXZX", "XZXXZXXZXZXXZZXZZXZZZZZZXXZZXXXXZ.XXZZZ", "XXXZXXXXXZZZXXXXZXXXZZXZXXZXZXXXXX.XXZX", "ZZZZZZXZXXZXXXZXXXXXZXXZZXXZZZZXZXX.XZZ", "XZXZZXZZXXZXZZXXXXXZXXXXZXXZZZXXXZXX.ZX", "XZZXZZXZXZXXXXXXXXZZZXXZZZZXXZXXZZZZZ.Z", "XXZZZXXXXZZXXZZXZZXZZZXXXXXZXZXZXZXZXZ."};
    vector<int> queries = {0, 1, 741, 740, 664, 346, 466, 378, 24, 172, 622, 737, 306, 262, 418, 156, 704, 88, 635, 236, 207, 152, 569, 642, 181, 279, 696, 722, 330, 652, 133, 669, 384, 204, 201, 597, 123, 47, 592, 624, 71, 424, 414, 353, 103, 45, 591, 202, 501, 141};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<string> roads = {".ZZ.XZZZZZXZXXXXXXZXXX.XXZXZZX..ZZZXXXZ.", "Z.Z.ZXZZXZXZXZXX..Z.X.XZZX.X.XZ..X..X..Z", "ZZ.XZZXXZZZ.ZZ.XXXX.XXXZZXXXZXZZXXZZZZXX", "..X.Z.ZZZXZZXZXXX.XX.ZXXZX.ZZZXZ.ZZXXXXZ", "XZZZ.ZZZXXX.X.ZXXZ.XZZXXXZZ.XXXXZXZZZZX.", "ZXZ.Z.ZZX.XXZZXZZZ.ZXXXXX..X.Z.ZZZXXZXXX", "ZZXZZZ.ZXZZXXXXZ.XXZZZXXZXZXZXXXZZZZXXXX", "ZZXZZZZ.ZXXZXZXZXZ.ZZZXX.XZXZXXX.XZZXXXX", "ZXZZXXXZ..XXZXZ....ZXZX..X..XZZZ..XX.Z.Z", "ZZZXX.ZX..ZXZXXZZZ.XZZXXXZZXZZXXXX.ZXZ.X", "XXZZXXZXXZ.XXZX.XX..ZZ.X.XXZXZZZZZX.Z.ZZ", "ZZ.Z.XXZXXX.ZXZX.XXZ.XZ.X...ZZZXZZ..XX.Z", "XXZXXZXXZZXZ.ZZZZXZZXXZXZZXZXXZ.XZX.Z.XX", "XZZZ.ZXZXXZXZ.ZZX.Z..XZZ.XXXZ.X.XXZX.ZX.", "XX.XZXXXZXXZZZ..ZXZ.XZ.ZZZZX.XXZZ..XZXZX", "XXXXXZZZ.Z.XZZ...ZZ..XZZZXZXXZZX..X.XZXX", "X.XXXZ.X.ZX.ZXZ..XXZZXZXXZXZXZZZXZZZXZZX", "X.X.ZZXZ.ZXXX.XZX...ZXXZZZZZZZX..XXXX.ZZ", "ZZXX..X....XZZZZX..ZZ.XZXX.X..Z.XXX...ZZ", "X..XXZZZZX.ZZ...Z.Z.XXZZZZX.XXX.XX.ZXX.Z", "XXX.ZXZZXZZ.X.X.ZZZX.XXXXXZZXZZZZX.ZZXZX", "X.XZZXZZZZZXXXZXXX.XX..ZZXZZZZ.X.ZXZX..X", ".XXXXXXXXX.ZZZ.ZZXXZX..ZXZZZZ.Z..XXZZZZX", "XZZXXXXX.XX.XZZZXZZZXZZ..ZZ.XXZXZZ.XXZ..", "XZZZXXZ..X.XZ.ZZXZXZXZX..Z.X.ZZXXX.ZXXZ.", "ZXXXZ.XXXZX.ZXZXZZXZXXZZZ..ZXXXXZZZZXZZX", "X.X.Z.ZZ.ZX.XXZZXZ.XZZZZ...X.ZXXXXX.ZXZ.", "ZXXZ.XXX.XZ.ZXXXZZX.ZZZ.XZX.X.ZZ..X.ZXZZ", "Z.ZZX.ZZXZXZXZ.XXZ.XXZZX.X.X.ZXXZXZXZZ.X", "XXXZXZXXZZZZX.XZZZ.XZZ.XZXZ.Z.X.XXZZXXXZ", ".ZZXX.XXZXZZZXXZZXZXZ.ZZZXXZXX.XXZZX.X.Z", "..ZZXZXXZXZX..ZXZ...ZX.XXXXZX.X.ZZXZZZXZ", "Z.X.ZZZ..XZZXXZ.X.XXZ..ZXZX.ZXXZ.XXXZZZX", "ZXXZXZZX.XZZZX..ZXXXXZXZXZX.XXZZX.ZZZX.Z", "Z.ZZZXZZX.X.XZ.XZXX..XX..ZXXZZZXXZ.XZZX.", "X.ZXZXZZXZ...XX.ZX.ZZZZXZZ..XZXZXZX..XXX", "XXZXZZXX.XZXZ.ZXXX.XZXZXXXZZZX.ZZZZ..ZXZ", "X.ZXZXXXZZ.X.ZXZZ..XX.ZZXZXXZXXZZXZXZ..Z", "Z.XXXXXX..Z.XXZXZZZ.Z.Z.ZZZZ.X.XZ.XXX..Z", ".ZXZ.XXXZXZZX.XXXZZZXXX..X.ZXZZZXZ.XZZZ."};
    vector<int> queries = {0, 1, 633, 632, 356, 351, 568, 460, 144, 323, 372, 440, 579, 84, 148, 270, 162, 328, 378, 475, 303, 4, 8, 398, 467, 500, 47, 192, 232, 524, 87, 86, 56, 516, 433, 523, 193, 214, 226, 97, 228, 367, 122, 242, 248, 159, 236, 401, 539, 362};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 4, 0, 37, 5, 12, 32, 20, 18, 10, 26, 31, 19, 21, 6, 28, 15, 34, 32, 31, 36, 0, 4, 23, 17, 23, 11, 23, 32, 21, 18, 2, 8, 20, 19, 28, 3, 29, 32, 1, 6, 21, 18, 16, 6, 21, 6, 21, 29, 4};
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<string> roads = {".ZZ.XZZZZZXZXXXXXXZXXX.XXZXZZX..ZZZXXXZ.", "Z.Z.ZXZZXZXZXZXX..Z.X.XZZX.X.XZ..X..X..Z", "ZZ.XZZXXZZZ.ZZ.XXXX.XXXZZXXXZZZZXXZZZZXX", "..X.Z.ZZZXZZXZXXX.XX.ZXXZX.ZZZXZ.ZZXXXXZ", "XZZZ.ZZZXXX.X.ZXXZ.XZZXXXZZ.XXXXZXZZZZX.", "ZXZ.Z.ZZX.XXZZXZZZ.ZXXXXX..X.Z.ZZZXXZXXX", "ZZXZZZ.ZXZZXXXXZ.XXZZZXXZXZXZXXXZZZZXXXX", "ZZXZZZZ.ZXXZXZXZXZ.ZZZXX.XZXZXXX.XZZXXXX", "ZXZZXXXZ..XXZXZ....ZXZX..X..XZZZ..XX.Z.Z", "ZZZXX.ZX..ZXZXXZZZ.XZZXXXZZXZZXXXX.ZXZ.X", "XXZZXXZXXZ.XXZX.XX..ZZ.X.XXZXZZZZZX.Z.ZZ", "ZZ.Z.XXZXXX.ZXZX.XXZ.XZ.X...ZZZXZZ..XX.Z", "XXZXXZXXZZXZ.ZZZZXZZXXZXZZXZXXZ.XZX.Z.XX", "XZZZ.ZXZXXZXZ.ZZX.Z..XZZ.XXXZ.X.XXZX.ZX.", "XX.XZXXXZXXZZZ..ZXZ.XZ.ZZZZX.XXZZ..XZXZX", "XXXXXZZZ.Z.XZZ...ZZ..XZZZXZXXZZX..X.XZXX", "X.XXXZ.X.ZX.ZXZ..XXZZXZXXZXZXZZZXZZZXZZX", "X.X.ZZXZ.ZXXX.XZX...ZXXZZZZZZZX..XXXX.ZZ", "ZZXX..X....XZZZZX..ZZ.XZXX.X..Z.XXX...ZZ", "X..XXZZZZX.ZZ...Z.Z.XXZZZZX.XXX.XX.ZXX.Z", "XXX.ZXZZXZZ.X.X.ZZZX.XXXXXZZXZZZZX.ZZXZX", "X.XZZXZZZZZXXXZXXX.XX..ZZXZZZZ.X.ZXZX..X", ".XXXXXXXXX.ZZZ.ZZXXZX..ZXZZZZ.Z..XXZZZZX", "XZZXXXXX.XX.XZZZXZZZXZZ..ZZ.XXZXZZ.XXZ..", "XZZZXXZ..X.XZ.ZZXZXZXZX..Z.X.ZZXXX.ZXXZ.", "ZXXXZ.XXXZX.ZXZXZZXZXXZZZ..ZXXXXZZZZXZZX", "X.X.Z.ZZ.ZX.XXZZXZ.XZZZZ...X.ZXXXXX.ZXZ.", "ZXXZ.XXX.XZ.ZXXXZZX.ZZZ.XZX.X.ZZ..X.ZXZZ", "Z.ZZX.ZZXZXZXZ.XXZ.XXZZX.X.X.ZXXZXZXZZ.X", "XXZZXZXXZZZZX.XZZZ.XZZ.XZXZ.Z.X.XXZZXXXZ", ".ZZXX.XXZXZZZXXZZXZXZ.ZZZXXZXX.XXZZX.X.Z", "..ZZXZXXZXZX..ZXZ...ZX.XXXXZX.X.ZZXZZZXZ", "Z.X.ZZZ..XZZXXZ.X.XXZ..ZXZX.ZXXZ.XXXZZZX", "ZXXZXZZX.XZZZX..ZXXXXZXZXZX.XXZZX.ZZZX.Z", "Z.ZZZXZZX.X.XZ.XZXX..XX..ZXXZZZXXZ.XZZX.", "X.ZXZXZZXZ...XX.ZX.ZZZZXZZ..XZXZXZX..XXX", "XXZXZZXX.XZXZ.ZXXX.XZXZXXXZZZX.ZZZZ..ZXZ", "X.ZXZXXXZZ.X.ZXZZ..XX.ZZXZXXZXXZZXZXZ..Z", "Z.XXXXXX..Z.XXZXZZZ.Z.Z.ZZZZ.X.XZ.XXX..Z", ".ZXZ.XXXZXZZX.XXXZZZXXX..X.ZXZZZXZ.XZZZ."};
    vector<int> queries = {0, 1, 633, 632, 371, 2, 177, 486, 460, 289, 524, 622, 230, 15, 391, 414, 554, 619, 346, 565, 389, 579, 409, 69, 211, 598, 47, 120, 345, 220, 225, 312, 181, 292, 193, 453, 484, 511, 497, 590, 438, 533, 217, 151, 81, 466, 386, 408, 522, 112};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<string> roads = {".ZZ.XZZZZZXZXXXXXXZXXX.XXZXZZX..ZZZXXXZ.", "Z.Z.ZXZZXZXZXZXX..Z.X.XZZX.X.XZ..X..X..Z", "ZZ.XZZXXZZZ.ZZ.XXXX.XXXZZXXXZZZZXXZZZZXX", "..X.Z.ZZZXZZXZXXX.XX.ZXXZX.ZZZXZ.ZZXXXXZ", "XZZZ.ZZZXXX.X.ZXXZ.XZZXXXZZ.XXXXZXZZZZX.", "ZXZ.Z.ZZX.XXZZXZZZ.ZXXXXX..X.Z.ZZZXXZXXX", "ZZXZZZ.ZXZZXXXXZ.XXZZZXXZXZXZXXXZZZZXXXX", "ZZXZZZZ.ZXXZXZXZXZ.ZZZXX.XZXZXXX.XZZXXXX", "ZXZZXXXZ..XXZXZ....ZXZX..X..XZZZ..XX.Z.Z", "ZZZXX.ZX..ZXZXXZZZ.XZZXXXZZXZZXXXX.ZXZ.X", "XXZZXXZXXZ.XXZX.XX..ZZ.X.XXZXZZZZZX.Z.ZZ", "ZZ.Z.XXZXXX.ZXZX.XXZ.XZ.X...ZZZXZZ..XX.Z", "XXZXXZXXZZXZ.ZZZZXZZXXZXZZXZXXZ.XZX.Z.XX", "XZZZ.ZXZXXZXZ.ZZX.Z..XZZ.XXXZ.X.XXZX.ZX.", "XX.XZXXXZXXZZZ..ZXZ.XZ.ZZZZX.XXZZ..XZXZX", "XXXXXZZZ.Z.XZZ...ZZ..XZZZXZXXZZX..X.XZXX", "X.XXXZ.X.ZX.ZXZ..XXZZXZXXZXZXZZZXZZZXZZX", "X.X.ZZXZ.ZXXX.XZX...ZXXZZZZZZZX..XXXX.ZZ", "ZZXX..X....XZZZZX..ZZ.XZXX.X..Z.XXX...ZZ", "X..XXZZZZX.ZZ...Z.Z.XXZZZZX.XXX.XX.ZZX.Z", "XXX.ZXZZXZZ.X.X.ZZZX.XXXXXZZXZZZZX.ZZXZX", "X.XZZXZZZZZXXXZXXX.XX..ZZXZZZZ.X.ZXZX..X", ".XXXXXXXXX.ZZZ.ZZXXZX..ZXZZZZ.Z..XXZZZZX", "XZZXXXXX.XX.XZZZXZZZXZZ..ZZ.XXZXZZ.XXZ..", "XZZZXXZ..X.XZ.ZZXZXZXZX..Z.X.ZZXXX.ZXXZ.", "ZXXXZ.XXXZX.ZXZXZZXZXXZZZ..ZXXXXZZZZXZZX", "X.X.Z.ZZ.ZX.XXZZXZ.XZZZZ...X.ZXXXXX.ZXZ.", "ZXXZ.XXX.XZ.ZXXXZZX.ZZZ.XZX.X.ZZ..X.ZXZZ", "Z.ZZX.ZZXZXZXZ.XXZ.XXZZX.X.X.ZXXZXZXZZ.X", "XXZZXZXXZZZZX.XZZZ.XZZ.XZXZ.Z.X.XXZZXXXZ", ".ZZXX.XXZXZZZXXZZXZXZ.ZZZXXZXX.XXZZX.X.Z", "..ZZXZXXZXZX..ZXZ...ZX.XXXXZX.X.ZZXZZZXZ", "Z.X.ZZZ..XZZXXZ.X.XXZ..ZXZX.ZXXZ.XXXZZZX", "ZXXZXZZX.XZZZX..ZXXXXZXZXZX.XXZZX.ZZZX.Z", "Z.ZZZXZZX.X.XZ.XZXX..XX..ZXXZZZXXZ.XZZX.", "X.ZXZXZZXZ...XX.ZX.ZZZZXZZ..XZXZXZX..XXX", "XXZXZZXX.XZXZ.ZXXX.ZZXZXXXZZZX.ZZZZ..ZXZ", "X.ZXZXXXZZ.X.ZXZZ..XX.ZZXZXXZXXZZXZXZ..Z", "Z.XXXXXX..Z.XXZXZZZ.Z.Z.ZZZZ.X.XZ.XXX..Z", ".ZXZ.XXXZXZZX.XXXZZZXXX..X.ZXZZZXZ.XZZZ."};
    vector<int> queries = {0, 1, 633, 632, 532, 481, 512, 575, 112, 561, 322, 280, 373, 30, 446, 315, 289, 447, 534, 463, 209, 482, 95, 254, 197, 217, 533, 426, 44, 390, 453, 510, 573, 65, 224, 609, 449, 137, 543, 567, 127, 541, 116, 525, 287, 391, 479, 342, 7, 506};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<string> roads = {".ZZ.XZZZZZXZXXXXXXZXXX.XXZXZZX..ZZXXXXZ.", "Z.Z.ZXZZXZXZXZXX..Z.X.XZZX.X.XZ..X..X..Z", "ZZ.XZZXXZZZ.ZZ.XXXX.XXXZZXXXZZZZXXZZZZXX", "..X.Z.ZZZXZZXZXXX.XX.ZXXZX.ZZZXZ.ZZXXXXZ", "XZZZ.ZZZXXX.X.ZXXZ.XZZXXXZZ.XXXXZXZZZZX.", "ZXZ.Z.ZZX.XXZZXZZZ.ZXXXXX..X.Z.ZZZXXZXXX", "ZZXZZZ.ZXZZXXXXZ.XXZZZXXZXZXZXXXZZZZXXXX", "ZZXZZZZ.ZXXZXZXZXZ.ZZZXX.XZXZXXX.XZZXXXX", "ZXZZXXXZ..XXZXZ....ZXZX..X..XZZZ..XX.Z.Z", "ZZZXX.ZX..ZXZXXZZZ.XZZXXXZZXZZXXXX.ZXZ.X", "XXZZXXZXXZ.XXZX.XX..ZZ.X.XXZXZZZZZX.Z.ZZ", "ZZ.Z.XXZXXX.ZXZX.XXZ.XZ.X...ZZZXZZ..XX.Z", "XXZXXZXXZZXZ.ZZZZXZZXXZXZZXZXXZ.XZX.Z.XX", "XZZZ.ZXZXXZXZ.ZZX.Z..XZZ.XXXZ.X.XXZX.ZX.", "XX.XZXXXZXXZZZ..ZXZ.XZ.ZZZZX.XXZZ..XZXZX", "XXXXXZZZ.Z.XZZ...ZZ..XZZZXZXXZZX..X.XZXX", "X.XXXZ.X.ZX.ZXZ..XXZZXZXXZXZXZZZXZZZXZZX", "X.X.ZZXZ.ZXXX.XZX...ZXXZZZZZZZX..XXXX.ZZ", "ZZXX..X....XZZZZX..ZZ.XZXX.X..Z.XXX...ZZ", "X..XXZZZZX.ZZ...Z.Z.XXZZZZX.XXX.XX.ZZX.Z", "XXX.ZXZZXZZ.X.X.ZZZX.XXXXXZZXZZZZX.ZZXZX", "X.XZZXZZZZZXXXZXXX.XX..ZZXZZZZ.X.ZXZX..X", ".XXXXXXXXX.ZZZ.ZZXXZX..ZXZZZZ.Z..XXZZZZX", "XZZXXXXX.XX.XZZZXZZZXZZ..ZZ.XXZXZZ.XXZ..", "XZZZXXZ..X.XZ.ZZXZXZXZX..Z.X.ZZXXX.ZXXZ.", "ZXXXZ.XXXZX.ZXZXZZXZXXZZZ..ZXXXXZZZZXZZX", "X.X.Z.ZZ.ZX.XXZZXZ.XZZZZ...X.ZXXXXX.ZXZ.", "ZXXZ.XXX.XZ.ZXXXZZX.ZZZ.XZX.X.ZZ..X.ZXZZ", "Z.ZZX.ZZXZXZXZ.XXZ.XXZZX.X.X.ZXXZXZXZZ.X", "XXZZXZXXZZZZX.XZZZ.XZZ.XZXZ.Z.X.XXZZXXXZ", ".ZZXX.XXZXZZZXXZZXZXZ.ZZZXXZXX.XXZZX.X.Z", "..ZZXZXXZXZX..ZXZ...ZX.XXXXZX.X.ZZXZZZXZ", "Z.X.ZZZ..XZZXXZ.X.XXZ..ZXZX.ZXXZ.XXXZZZX", "ZXXZXZZX.XZZZX..ZXXXXZXZXZX.XXZZX.ZZZX.Z", "X.ZZZXZZX.X.XZ.XZXX..XX..ZXXZZZXXZ.XZZX.", "X.ZXZXZZXZ...XX.ZX.ZZZZXZZ..XZXZXZX..XXX", "XXZXZZXX.XZXZ.ZXXX.ZZXZXXXZZZX.ZZZZ..ZXZ", "X.ZXZXXXZZ.X.ZXZZ..XX.ZZXZXXZXXZZXZXZ..Z", "Z.XXXXXX..Z.XXZXZZZ.Z.Z.ZZZZ.X.XZ.XXX..Z", ".ZXZ.XXXZXZZX.XXXZZZXXX..X.ZXZZZXZ.XZZZ."};
    vector<int> queries = {0, 1, 633, 632, 535, 483, 174, 458, 542, 48, 196, 355, 439, 454, 275, 6, 621, 204, 545, 383, 195, 49, 94, 486, 178, 403, 407, 197, 184, 539, 43, 503, 469, 432, 65, 207, 171, 10, 543, 274, 139, 158, 491, 507, 304, 256, 404, 365, 538, 510};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<string> roads = {".ZZ.XZZZZZXZXXXXXXZXXX.XXZXZZX..ZZXXXXZ.", "Z.Z.ZZZZXZXZXZXX..Z.X.XZZX.X.XZ..X..X..Z", "ZZ.XZZXXZZZ.ZZ.XXXX.XXXZZXXXZZZZXXZZZZXX", "..X.Z.ZZZXZZXZXXX.XX.ZXXZX.ZZZXZ.XZXXXXZ", "XZZZ.ZZZXXX.X.ZXXZ.XZZXXXZZ.XXXXZXZZZZX.", "ZZZ.Z.ZZX.XXZZXZZZ.ZXXXXX..X.Z.ZZZXXZXXX", "ZZXZZZ.ZXZZXXXXZ.XXZZZXXZXZXZXXXZZZZXXXX", "ZZXZZZZ.ZXXZXZXZXZ.ZZZXX.XZXZXXX.XZZXXXX", "ZXZZXXXZ..XXZXZ....ZXZX..X..XZZZ..XX.Z.Z", "ZZZXX.ZX..ZXZXXZZZ.XZZXXXZZXZZXXXX.ZXZ.X", "XXZZXXZXXZ.XXZX.XX..ZZ.X.XXZXZZZZZX.Z.ZZ", "ZZ.Z.XXZXXX.ZXZX.XXZ.XZ.X...ZZZXZZ..XX.Z", "XXZXXZXXZZXZ.ZZZZXZZXXZXZZXZXXZ.XZX.Z.XX", "XZZZ.ZXZXXZXZ.ZZX.Z..XZZ.XXXZ.X.XXZX.ZX.", "XX.XZXXXZXXZZZ..ZXZ.XZ.ZZZZX.XXZZ..XZXZX", "XXXXXZZZ.Z.XZZ...ZZ..XZZZXZXXZZX..X.XZXX", "X.XXXZ.X.ZX.ZXZ..XXZZXZXXZXZXZZZXZZZXZZX", "X.X.ZZXZ.ZXXX.XZX...ZXXZZZZZZZX..XXXX.ZZ", "ZZXX..X....XZZZZX..ZZ.XZXX.X..Z.XXX...ZZ", "X..XXZZZZX.ZZ...Z.Z.XXZZZZX.XXX.XX.ZZX.Z", "XXX.ZXZZXZZ.X.X.ZZZX.XXXXXZZXZZZZX.ZZXZX", "X.XZZXZZZZZXXXZXXX.XX..ZZXZZZZ.X.ZXZX..X", ".XXXXXXXXX.ZZZ.ZZXXZX..ZXZZZZ.Z..XXZZZZX", "XZZXXXXX.XX.XZZZXZZZXZZ..ZZ.XXZXZZ.XXZ..", "XZZZXXZ..X.XZ.ZZXZXZXZX..Z.X.ZZXXX.ZXXZ.", "ZXXXZ.XXXZX.ZXZXZZXZXXZZZ..ZXXXXZZZZXZZX", "X.X.Z.ZZ.ZX.XXZZXZ.XZZZZ...X.ZXXXXX.ZXZ.", "ZXXZ.XXX.XZ.ZXXXZZX.ZZZ.XZX.X.ZZ..X.ZXZZ", "Z.ZZX.ZZXZXZXZ.XXZ.XXZZX.X.X.ZXXZXZXZZ.X", "XXZZXZXXZZZZX.XZZZ.XZZ.XZXZ.Z.X.XXZZXXXZ", ".ZZXX.XXZXZZZXXZZXZXZ.ZZZXXZXX.XXZZX.X.Z", "..ZZXZXXZXZX..ZXZ...ZX.XXXXZX.X.ZZXZZZXZ", "Z.X.ZZZ..XZZXXZ.X.XXZ..ZXZX.ZXXZ.XXXZZZX", "ZXXXXZZX.XZZZX..ZXXXXZXZXZX.XXZZX.ZZZX.Z", "X.ZZZXZZX.X.XZ.XZXX..XX..ZXXZZZXXZ.XZZX.", "X.ZXZXZZXZ...XX.ZX.ZZZZXZZ..XZXZXZX..XXX", "XXZXZZXX.XZXZ.ZXXX.ZZXZXXXZZZX.ZZZZ..ZXZ", "X.ZXZXXXZZ.X.ZXZZ..XX.ZZXZXXZXXZZXZXZ..Z", "Z.XXXXXX..Z.XXZXZZZ.Z.Z.ZZZZ.X.XZ.XXX..Z", ".ZXZ.XXXZXZZX.XXXZZZXXX..X.ZXZZZXZ.XZZZ."};
    vector<int> queries = {0, 1, 633, 632, 554, 149, 123, 431, 42, 466, 468, 71, 542, 412, 222, 309, 591, 251, 414, 578, 504, 51, 525, 162, 426, 36, 141, 380, 592, 334, 56, 139, 517, 338, 16, 291, 78, 91, 532, 302, 416, 537, 513, 137, 358, 296, 110, 438, 406, 164};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<string> roads = {".ZZ.XZZZZZXZXXXXXZZXXX.XXZXZZX..ZZXXXXZ.", "Z.Z.ZZZZXZXZXZXX..Z.X.XZZX.X.XZ..X..X..Z", "ZZ.XZZXXZZZ.ZZ.XXXX.ZXXZZXXXZZZZXXZZZZXX", "..X.Z.ZZZXZZXZXXX.XX.ZXXZX.ZZZXZ.XZXXXXZ", "XZZZ.ZZZXXX.X.ZXZZ.XZZXXXZZ.XXXXZXZZZZZ.", "ZZZ.Z.ZZX.XXZZXZZZ.ZXXXXX..X.Z.ZZZXXZXZX", "ZZXZZZ.ZXZZXXXXZ.XXZXZXXZXZXZXXXZZZZXXXX", "ZZXZZZZ.ZXXZXZXZXZ.ZZZXX.XZXZXXX.XZZXZXX", "ZXZZXXXZ..XXZXZ....ZXZX..X..XZZZ..XX.Z.Z", "ZZZXX.ZX..ZXZXXZZZ.XZZXXXZZXZZXXXX.ZZZ.X", "XXZZXXZXXZ.XXZX.XX..ZZ.X.XXZXZZZZZX.Z.ZZ", "ZZ.Z.XXZXXX.ZXZX.XXZ.XZ.X...ZZZXZZ..XX.Z", "XXZXXZXXZZXZ.ZXZZXZZXXZXZZXZXXZ.XZX.Z.XX", "XZZZ.ZXZXXZXZ.ZZX.Z..XZZ.XXXZ.X.XZZX.ZX.", "XX.XZXXXZXXZXZ..ZXZ.XZ.ZZZZX.XXZZ..XXXZX", "XXXXXZZZ.Z.XZZ...ZZ..XZZZXZXXZZX..X.XZXX", "X.XXZZ.X.ZX.ZXZ..XXZZXZXXZXZXZZZXZZZXZZX", "Z.X.ZZXZ.ZXXX.XZX...ZZXZZZZZZZX..XXXX.ZZ", "ZZXX..X....XZZZZX..ZZ.XZXX.X..Z.XXX...ZZ", "X..XXZZZZX.ZZ...Z.Z.XXZZZZX.XXX.XX.ZZX.Z", "XXZ.ZXXZXZZ.X.X.ZZZX.XXXXXZZXZZZZX.ZZXZX", "X.XZZXZZZZZXXXZXXZ.XX..ZZXZXZZ.X.ZXZX..X", ".XXXXXXXXX.ZZZ.ZZXXZX..ZXZZZZ.X..XXZZZZX", "XZZXXXXX.XX.XZZZXZZZXZZ..ZZ.XXZXZZ.XXZ..", "XZZZXXZ..X.XZ.ZZXZXZXZX..Z.X.ZZXXX.ZXXZ.", "ZXXXZ.XXXZX.ZXZXZZXZXXZZZ..ZXXXXZZZZXZZX", "X.X.Z.ZZ.ZX.XXZZXZ.XZZZZ...X.ZXXXXX.ZXZ.", "ZXXZ.XXX.XZ.ZXXXZZX.ZXZ.XZX.X.ZZ..X.ZXZZ", "Z.ZZX.ZZXZXZXZ.XXZ.XXZZX.X.X.ZZXZXZXZZ.X", "XXZZXZXXZZZZX.XZZZ.XZZ.XZXZ.Z.X.XXZZXXXZ", ".ZZXX.XXZXZZZXXZZXZXZ.XZZXXZZX.XXZZX.X.Z", "..ZZXZXXZXZX..ZXZ...ZX.XXXXZX.X.ZZXZZZXZ", "Z.X.ZZZ..XZZXXZ.X.XXZ..ZXZX.ZXXZ.XXXZZZX", "ZXXXXZZX.XZZZZ..ZXXXXZXZXZX.XXZZX.ZZZX.Z", "X.ZZZXZZX.X.XZ.XZXX..XX..ZXXZZZXXZ.XZZX.", "X.ZXZXZZXZ...XX.ZX.ZZZZXZZ..XZXZXZX..XXX", "XXZXZZXX.ZZXZ.XXXX.ZZXZXXXZZZX.ZZZZ..ZXZ", "X.ZXZXXZZZ.X.ZXZZ..XX.ZZXZXXZXXZZXZXZ..Z", "Z.XXZZXX..Z.XXZXZZZ.Z.Z.ZZZZ.X.XZ.XXX..Z", ".ZXZ.XXXZXZZX.XXXZZZXXX..X.ZXZZZXZ.XZZZ."};
    vector<int> queries = {0, 1, 633, 632, 278, 131, 119, 58, 341, 281, 620, 451, 238, 344, 622, 314, 598, 31, 463, 18, 433, 406, 78, 527, 371, 121, 221, 138, 41, 467, 524, 187, 402, 383, 86, 526, 581, 4, 117, 347, 602, 16, 94, 243, 521, 81, 512, 69, 139, 201};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<string> roads = {".ZZ.XZZZZZXZXXXZXXZXXX.XXZXZZX..ZZXXXXZ.", "Z.Z.ZZZZXZXZXZXX..Z.Z.XZXX.Z.XZ..X..X..Z", "ZZ.XZZXXZZZ.ZZ.XXXZ.ZXXZZXXXZXZZXXZZZZXX", "..X.X.XZZXZZXZXXX.XX.ZXXZX.ZZZXZ.XZXZXXX", "XZZX.ZZZXZX.Z.ZXXZ.XZZXXXZZ.XXXXZXZZZZZ.", "ZZZ.Z.ZZX.ZZXZXZZZ.ZXXZXX..X.X.ZZXXXZXZX", "ZZXXZZ.ZXZZXXXXZ.XXZXZXXXZZZZXZZZXZZXXXX", "ZZXZZZZ.ZXXZXZXZXZ.ZZXXX.XXXZXXX.XXZXZXX", "ZXZZXXXZ..XXZXZ....ZXXX..X..ZZXZ..XX.Z.Z", "ZZZXZ.ZX..ZXZXXZZZ.XZZXXXZZZZZXXXX.ZZZ.X", "XXZZXZZXXZ.XXZX.ZX..XZ.X.XXZXXZZZZX.Z.ZZ", "ZZ.Z.ZXZXXX.ZXXX.ZXX.XZ.X...ZZZXZZ..XX.Z", "XXZXZXXXZZXZ.ZXZZXZZXXZZZZXZXXZ.XZZ.Z.XX", "XZZZ.ZXZXXZXZ.ZZX.Z..XZZ.XXXZ.X.XZZX.ZX.", "XX.XZXXXZXXXXZ..ZXZ.XZ.ZZZZX.XXZZ..XXXXX", "ZXXXXZZZ.Z.XZZ...ZX..XZZXXZXXZXX..X.XZXX", "X.XXXZ.X.ZZ.ZXZ..XXZZXZXXZXZZZZZZZZZXXXX", "X.X.ZZXZ.ZXZX.XZX...ZZXZZZZZZZX..ZXXX.ZZ", "ZZZX..X....XZZZXX..ZZ.XZXX.X..Z.XZX...ZZ", "X..XXZZZZX.XZ...Z.Z.XXZZZZX.XXX.XZ.ZZX.Z", "XZZ.ZXXZXZX.X.X.ZZZX.ZXXZXZZXXXZZX.ZZXXX", "X.XZZXZXXZZXXXZXXZ.XZ..ZZXZXZX.Z.ZXZX..X", ".XXXXZXXXX.ZZZ.ZZXXZX..ZXXZZZ.X..XXZZZZX", "XZZXXXXX.XX.ZZZZXZZZXZZ..ZZ.XZZXZZ.XXZ..", "XXZZXXX..X.XZ.ZXXZXZZZX..Z.X.ZZZXX.ZXXZ.", "ZXXXZ.ZXXZX.ZXZXZZXZXXXZZ..ZXXZXZZZZXZZX", "X.X.Z.ZX.ZX.XXZZXZ.XZZZZ...X.ZXXZXX.ZZZ.", "ZZXZ.XZX.ZZ.ZXXXZZX.ZXZ.XZX.X.ZZ..X.ZXXZ", "Z.ZZX.ZZZZXZXZ.XZZ.XXZZX.X.X.ZZXZZZXZZ.X", "XXXZXXXXZZXZX.XZZZ.XXX.ZZXZ.Z.X.XXZZXXXZ", ".ZZXX.ZXXXZZZXXXZXZXX.XZZZXZZX.XXZZX.X.Z", "..ZZXZZXZXZX..ZXZ...ZZ.XZXXZX.X.ZZXZZZXZ", "Z.X.ZZZ..XZZXXZ.Z.XXZ..ZXZZ.ZXXZ.XXXZZZX", "ZXXXXXXX.XZZZZ..ZZZZXZXZXZX.ZXZZX.ZZZZ.Z", "X.ZZZXZXX.X.ZZ.XZXX..XX..ZXXZZZXXZ.XZZX.", "X.ZXZXZZXZ...XX.ZX.ZZZZXZZ..XZXZXZX..XXX", "XXZZZZXX.ZZXZ.XXXX.ZZXZXXXZZZX.ZZZZ..ZXZ", "X.ZXZXXZZZ.X.ZXZX..XX.ZZXZZXZXXZZZZXZ..Z", "Z.XXZZXX..Z.XXXXXZZ.X.Z.ZZZX.X.XZ.XXX..Z", ".ZXX.XXXZXZZX.XXXZZZXXX..X.ZXZZZXZ.XZZZ."};
    vector<int> queries = {0, 1, 633, 632, 571, 326, 165, 613, 490, 415, 451, 329, 336, 400, 25, 558, 441, 167, 10, 219, 587, 241, 338, 374, 141, 495, 372, 255, 177, 251, 382, 448, 504, 198, 624, 204, 367, 133, 596, 623, 309, 534, 188, 625, 14, 92, 43, 391, 65, 15};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<string> roads = {".XX.XZZZZZXZXXXZXXZXZX.XXXXZZX..ZZXXXXZ.", "X.Z.ZZZXXXXZZZXZ..Z.X.XZXX.Z.XZ..X..X..X", "XZ.XZZXXZZZ.ZZ.XZXX.XXXZZXXXZXZZXZZXZZZZ", "..X.X.XZXXZZXZXXX.XX.ZZXXZ.ZXZXZ.ZZXZXXX", "XZZX.ZZZXZX.Z.XXXZ.XZZXXXXZ.XXXXZZZZZZZ.", "ZZZ.Z.ZZX.ZXXZXZZZ.ZXXZXZ..X.X.ZZZXXZXZX", "ZZXXZZ.ZXXXXXXXZ.XXZZXXXXZZXZZXZZXXZXXXX", "ZXXZZZZ.ZXXZXZXXZZ.ZZXXZ.XXZZZXX.XZXZXZX", "ZXZXXXXZ..XXZXX....ZXXX..X..ZZZX..XX.Z.Z", "ZXZXZ.XX..ZXZZZZZZ.XZZXXXZZXZZXZXZ.ZZZ.X", "XXZZXZXXXZ.XXXX.XX..XZ.X.ZXZXXZXZZX.Z.ZX", "ZZ.Z.XXZXXX.XZXX.ZXX.XZ.X...XZZXZZ..XX.Z", "XZZXZXXXZZXX.XXZXXZZXXZZZXXXXZZ.XZZ.Z.ZX", "XZZZ.ZXZXZXZX.XZX.Z..XZZ.ZXXZ.Z.ZZXX.ZZ.", "XX.XXXXXXZXXXX..XXZ.XZ.ZXZZZ.ZXZX..XZZXX", "ZZXXXZZX.Z.XZZ...ZX..XZZZZZXXZXX..X.XZZZ", "X.ZXXZ.Z.ZX.XXX..XXZZXZXZZXZZXZZZZZZXXZX", "X.X.ZZXZ.ZXZX.XZX...ZXZZZZZZZZX..ZXXX.ZX", "ZZXX..X....XZZZXX..ZZ.XZXX.X..X.XZX...ZZ", "X..XXZZZZX.XZ...Z.Z.XXZZZZX.XXX.ZZ.ZZX.Z", "ZXX.ZXZZXZX.X.X.ZZZX.XXXZXZZXXXZZX.ZZXXX", "X.XZZXXXXZZXXXZXXX.XX..ZZXZXZZ.Z.ZXZZ..Z", ".XXZXZXXXX.ZZZ.ZZZXZX..ZXXZZZ.X..XZZZXXX", "XZZXXXXZ.XX.ZZZZXZZZXZZ..ZZ.ZZZXZX.ZXZ..", "XXZXXZX..X.XZ.XZZZXZZZX..Z.X.ZZXZZ.ZZXZ.", "XXXZX.ZXXZZ.XZZZZZXZXXXZZ..ZXZXXZZZZXZZX", "X.X.Z.ZX.ZX.XXZZXZ.XZZZZ...X.ZXXZZX.XXZ.", "ZZXZ.XXZ.XZ.XXZXZZX.ZXZ.XZX.X.ZZ..Z.ZZXZ", "Z.ZXX.ZZZZXXXZ.XZZ.XXZZZ.X.X.ZZXZZZXXZ.Z", "XXXZXXZZZZXZZ.ZZXZ.XXZ.ZZZZ.Z.X.XXZZXZXZ", ".ZZXX.XXZXZZZZXXZXXXX.XZZXXZZX.XZZZX.X.Z", "..ZZXZZXXZXX..ZXZ...ZZ.XXXXZX.X.ZZXZZZZZ", "Z.X.ZZZ..XZZXZX.Z.XZZ..ZZZZ.ZXZZ.XZXXZXZ", "ZXZZZZXX.ZZZZZ..ZZZZXZXXZZZ.ZXZZX.ZZZX.Z", "X.ZZZXXZX.X.ZX.XZXX..XZ..ZXZZZZXZZ.XZZX.", "X.XXZXZXXZ...XX.ZX.ZZZZZZZ..XZXZXZX..XXX", "XXZZZZXZ.ZZXZ.ZXXX.ZZZZXZXXZXX.ZXZZ..ZXZ", "X.ZXZXXXZZ.X.ZZZX..XX.XZXZXZZZXZZXZXZ..X", "Z.ZXZZXZ..Z.ZZXZZZZ.X.X.ZZZX.X.ZX.XXX..Z", ".XZX.XXXZXXZX.XZXXZZXZX..X.ZZZZZZZ.XZXZ."};
    vector<int> queries = {0, 1, 633, 632, 57, 489, 347, 225, 509, 229, 226, 531, 393, 184, 63, 585, 188, 200, 304, 382, 125, 224, 288, 140, 20, 301, 181, 399, 10, 110, 341, 211, 378, 463, 289, 190, 475, 98, 50, 394, 155, 350, 565, 462, 122, 135, 552, 398, 549, 451};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<string> roads = {".AB.....................................", "A.A.....................................", "BA......................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................"};
    vector<int> queries = {0, 1, 3, 2};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<string> roads = {".AB", "A.B", "BB."};
    vector<int> queries = {0, 1, 3, 2};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<string> roads = {".AABBBAABABABAAABAABBAAAB.BBABBBABBBAAAA", "A.ABBB.AAA.BAAAA.ABBBABBBBABABBAAABBABAB", "AA.BA.B.A.AABAB.B.AB.BAAABABBBBBAAAB.BAB", "BBB.BABABBB.ABAAAABABBABABAA.ABABB.A.A.A", "BBAB.AB.BBABABAA.B.AA.BBB.BA.A..ABABA.AA", "BB.AA.ABA.BBBABB.ABA.BBBAABAB.AAABBAA.A.", "A.BBBA.BBAAABB.AABAAAB.A.BABBBBABAABA.AB", "AA.A.BB.ABABAABBBBABBA..AAABBABBB.BAABAA", "BAABBABA.BAABBBABBAAABABAABABAAABBABBA.B", "AA.BB.ABB.AA.BBBABAABABAB.BA.A.ABBAABBA.", "B.ABABAAAA.BAAB.AABBABBBB.AABBABABABBABA", "ABA.BBABAAB...ABB.ABBBABBBA.AAABBABBAAAA", "BABAABBAB.A..AABAABBBABBBAB.AABBAAABA..B", "AAABBABABBA.A.BAAAABAAABBBBABABABBBBBABA", "AABAAB.BBBBAAB.ABBBB.AABB.BBB.ABA.AAAAAA", "AA.AABABAB.BBAA.AA.AAABABBBBBB.BBABAB.BA", "B.BA..ABBAABAABA..A.ABBBABAABBBABABAABBA", "AA.ABABBBBA.AABA..BBAAAABABAABBBABBABABB", "ABAB.BAAAABABAB.AB.BABAAABAABABAABBBBB.B", "BBBAAAABAABBBBBA.BB.A..AAAAA.BAABBBA.ABB", "BB.BA.ABABABBA.AAAAA.BAAAAB..BBBBB.AB.AB", "AABB.BBABABBAAAABAB.B..ABAABBAAA..BABBBA", "ABAABB..ABBABAABBAA.A..ABBBBA.BAAAABABBB", "ABABBBA.BABBBBBABAAAAAA.B.AAAAABAABBB.BB", "BBAABA.AABBBBBBBABAAABBB.BAAAAA.AB.BAAAB", ".BBB.ABAA..BAB.BBABAAAB.B.AABAABBABAAB.A", "BAAABBAABBAABBBBABAABABAAA.BAABBBBABAAB.", "BBBAAABBAAA..ABBAAAA.BBAAAB.ABABBAABBBBB", "AAB..BBBB.BAABBBBAB..BAAABAA.BABAABAAABA", "BBBAA.BAAABAAA.BBBABBA.AAAABB.BABBAABBBA", "BBBB.ABBA.AABBA.BBBABABAAABAAB.AAA.BB.AA", "BABA.AABAABBBABBABAABAAB.BBBBAA.AABB.ABA", "AAABAABBBBABABABBAABB.AAABBBABAA.BAABBAB", "BAABBBA.BBBAAB.AABBBB.AABABAABAAB.AABBAA", "BBA.ABABAAABABABBBBB.BAB.BAABA.BAA.AA.AB", "BBBABABABABBBBAAAABAAABBBABBAABBAAA.A.BA", "AA..AAAABBBAABABABB.BBABAAABABB.BBAA..BB", "ABBA...BABAA.AA.BABA.BB.ABABAB.ABB....AB", "AAA.AAAA.ABA.BABBB.BABBBA.BBBBABAAABBA.B", "ABBAA.BAB.AABAAAABBBBABBBA.BAAAABABABBB."};
    vector<int> queries = {0};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    vector<string> roads = {".AABBBAABABABAAABAABBAAAB.BBABBBABBBAAAA", "A.ABBB.AAA.BAAAA.ABBBABBBBABABBAAABBABAB", "AA.BA.B.A.AABAB.B.AB.BAAABABBBBBAAAB.BAB", "BBB.BABABBB.ABAAAABABBABABAA.ABABB.A.A.A", "BBAB.AB.BBABABAA.B.AA.BBB.BA.A..ABABA.AA", "BB.AA.ABA.BBBABB.ABA.BBBAABAB.AAABBAA.A.", "A.BBBA.BBAAABB.AABAAAB.A.BABBBBABAABA.AB", "AA.A.BB.ABABAABBBBABBA..AAABBABBB.BAABAA", "BAABBABA.BAABBBABBAAABABAABABAAABBABBA.B", "AA.BB.ABB.AA.BBBABAABABAB.BA.A.ABBAABBA.", "B.ABABAAAA.BAAB.AABBABBBB.AABBABABABBABA", "ABA.BBABAAB...ABB.ABBBABBBA.AAABBABBAAAA", "BABAABBAB.A..AABAABBBABBBAB.AABBAAABA..B", "AAABBABABBA.A.BAAAABAAABBBBABABABBBBBABA", "AABAAB.BBBBAAB.ABBBB.AABB.BBB.ABA.AAAAAA", "AA.AABABAB.BBAA.AA.AAABABBBBBB.BBABAB.BA", "B.BA..ABBAABAABA..A.ABBBABAABBBABABAABBA", "AA.ABABBBBA.AABA..BBAAAABABAABBBABBABABB", "ABAB.BAAAABABAB.AB.BABAAABAABABAABBBBB.B", "BBBAAAABAABBBBBA.BB.A..AAAAA.BAABBBA.ABB", "BB.BA.ABABABBA.AAAAA.BAAAAB..BBBBB.AB.AB", "AABB.BBABABBAAAABAB.B..ABAABBAAA..BABBBA", "ABAABB..ABBABAABBAA.A..ABBBBA.BAAAABABBB", "ABABBBA.BABBBBBABAAAAAA.B.AAAAABAABBB.BB", "BBAABA.AABBBBBBBABAAABBB.BAAAAA.AB.BAAAB", ".BBB.ABAA..BAB.BBABAAAB.B.AABAABBABAAB.A", "BAAABBAABBAABBBBABAABABAAA.BAABBBBABAAB.", "BBBAAABBAAA..ABBAAAA.BBAAAB.ABABBAABBBBB", "AAB..BBBB.BAABBBBAB..BAAABAA.BABAABAAABA", "BBBAA.BAAABAAA.BBBABBA.AAAABB.BABBAABBBA", "BBBB.ABBA.AABBA.BBBABABAAABAAB.AAA.BB.AA", "BABA.AABAABBBABBABAABAAB.BBBBAA.AABB.ABA", "AAABAABBBBABABABBAABB.AAABBBABAA.BAABBAB", "BAABBBA.BBBAAB.AABBBB.AABABAABAAB.AABBAA", "BBA.ABABAAABABABBBBB.BAB.BAABA.BAA.AA.AB", "BBBABABABABBBBAAAABAAABBBABBAABBAAA.A.BA", "AA..AAAABBBAABABABB.BBABAAABABB.BBAA..BB", "ABBA...BABAA.AA.BABA.BB.ABABAB.ABB....AB", "AAA.AAAA.ABA.BABBB.BABBBA.BBBBABAAABBA.B", "ABBAA.BAB.AABAAAABBBBABBBA.BAAAABABABBB."};
    vector<int> queries = {1};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    vector<string> roads = {".AABBBAABABABAAABAABBAAAB.BBABBBABBBAAAA", "A.ABBB.AAA.BAAAA.ABBBABBBBABABBAAABBABAB", "AA.BA.B.A.AABAB.B.AB.BAAABABBBBBAAAB.BAB", "BBB.BABABBB.ABAAAABABBABABAA.ABABB.A.A.A", "BBAB.AB.BBABABAA.B.AA.BBB.BA.A..ABABA.AA", "BB.AA.ABA.BBBABB.ABA.BBBAABAB.AAABBAA.A.", "A.BBBA.BBAAABB.AABAAAB.A.BABBBBABAABA.AB", "AA.A.BB.ABABAABBBBABBA..AAABBABBB.BAABAA", "BAABBABA.BAABBBABBAAABABAABABAAABBABBA.B", "AA.BB.ABB.AA.BBBABAABABAB.BA.A.ABBAABBA.", "B.ABABAAAA.BAAB.AABBABBBB.AABBABABABBABA", "ABA.BBABAAB...ABB.ABBBABBBA.AAABBABBAAAA", "BABAABBAB.A..AABAABBBABBBAB.AABBAAABA..B", "AAABBABABBA.A.BAAAABAAABBBBABABABBBBBABA", "AABAAB.BBBBAAB.ABBBB.AABB.BBB.ABA.AAAAAA", "AA.AABABAB.BBAA.AA.AAABABBBBBB.BBABAB.BA", "B.BA..ABBAABAABA..A.ABBBABAABBBABABAABBA", "AA.ABABBBBA.AABA..BBAAAABABAABBBABBABABB", "ABAB.BAAAABABAB.AB.BABAAABAABABAABBBBB.B", "BBBAAAABAABBBBBA.BB.A..AAAAA.BAABBBA.ABB", "BB.BA.ABABABBA.AAAAA.BAAAAB..BBBBB.AB.AB", "AABB.BBABABBAAAABAB.B..ABAABBAAA..BABBBA", "ABAABB..ABBABAABBAA.A..ABBBBA.BAAAABABBB", "ABABBBA.BABBBBBABAAAAAA.B.AAAAABAABBB.BB", "BBAABA.AABBBBBBBABAAABBB.BAAAAA.AB.BAAAB", ".BBB.ABAA..BAB.BBABAAAB.B.AABAABBABAAB.A", "BAAABBAABBAABBBBABAABABAAA.BAABBBBABAAB.", "BBBAAABBAAA..ABBAAAA.BBAAAB.ABABBAABBBBB", "AAB..BBBB.BAABBBBAB..BAAABAA.BABAABAAABA", "BBBAA.BAAABAAA.BBBABBA.AAAABB.BABBAABBBA", "BBBB.ABBA.AABBA.BBBABABAAABAAB.AAA.BB.AA", "BABA.AABAABBBABBABAABAAB.BBBBAA.AABB.ABA", "AAABAABBBBABABABBAABB.AAABBBABAA.BAABBAB", "BAABBBA.BBBAAB.AABBBB.AABABAABAAB.AABBAA", "BBA.ABABAAABABABBBBB.BAB.BAABA.BAA.AA.AB", "BBBABABABABBBBAAAABAAABBBABBAABBAAA.A.BA", "AA..AAAABBBAABABABB.BBABAAABABB.BBAA..BB", "ABBA...BABAA.AA.BABA.BB.ABABAB.ABB....AB", "AAA.AAAA.ABA.BABBB.BABBBA.BBBBABAAABBA.B", "ABBAA.BAB.AABAAAABBBBABBBA.BAAAABABABBB."};
    vector<int> queries = {693};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    vector<string> roads = {".AABBBAABABABAAABAABBAAAB.BBABBBABBBAAAA", "A.ABBB.AAA.BAAAA.ABBBABBBBABABBAAABBABAB", "AA.BA.B.A.AABAB.B.AB.BAAABABBBBBAAAB.BAB", "BBB.BABABBB.ABAAAABABBABABAA.ABABB.A.A.A", "BBAB.AB.BBABABAA.B.AA.BBB.BA.A..ABABA.AA", "BB.AA.ABA.BBBABB.ABA.BBBAABAB.AAABBAA.A.", "A.BBBA.BBAAABB.AABAAAB.A.BABBBBABAABA.AB", "AA.A.BB.ABABAABBBBABBA..AAABBABBB.BAABAA", "BAABBABA.BAABBBABBAAABABAABABAAABBABBA.B", "AA.BB.ABB.AA.BBBABAABABAB.BA.A.ABBAABBA.", "B.ABABAAAA.BAAB.AABBABBBB.AABBABABABBABA", "ABA.BBABAAB...ABB.ABBBABBBA.AAABBABBAAAA", "BABAABBAB.A..AABAABBBABBBAB.AABBAAABA..B", "AAABBABABBA.A.BAAAABAAABBBBABABABBBBBABA", "AABAAB.BBBBAAB.ABBBB.AABB.BBB.ABA.AAAAAA", "AA.AABABAB.BBAA.AA.AAABABBBBBB.BBABAB.BA", "B.BA..ABBAABAABA..A.ABBBABAABBBABABAABBA", "AA.ABABBBBA.AABA..BBAAAABABAABBBABBABABB", "ABAB.BAAAABABAB.AB.BABAAABAABABAABBBBB.B", "BBBAAAABAABBBBBA.BB.A..AAAAA.BAABBBA.ABB", "BB.BA.ABABABBA.AAAAA.BAAAAB..BBBBB.AB.AB", "AABB.BBABABBAAAABAB.B..ABAABBAAA..BABBBA", "ABAABB..ABBABAABBAA.A..ABBBBA.BAAAABABBB", "ABABBBA.BABBBBBABAAAAAA.B.AAAAABAABBB.BB", "BBAABA.AABBBBBBBABAAABBB.BAAAAA.AB.BAAAB", ".BBB.ABAA..BAB.BBABAAAB.B.AABAABBABAAB.A", "BAAABBAABBAABBBBABAABABAAA.BAABBBBABAAB.", "BBBAAABBAAA..ABBAAAA.BBAAAB.ABABBAABBBBB", "AAB..BBBB.BAABBBBAB..BAAABAA.BABAABAAABA", "BBBAA.BAAABAAA.BBBABBA.AAAABB.BABBAABBBA", "BBBB.ABBA.AABBA.BBBABABAAABAAB.AAA.BB.AA", "BABA.AABAABBBABBABAABAAB.BBBBAA.AABB.ABA", "AAABAABBBBABABABBAABB.AAABBBABAA.BAABBAB", "BAABBBA.BBBAAB.AABBBB.AABABAABAAB.AABBAA", "BBA.ABABAAABABABBBBB.BAB.BAABA.BAA.AA.AB", "BBBABABABABBBBAAAABAAABBBABBAABBAAA.A.BA", "AA..AAAABBBAABABABB.BBABAAABABB.BBAA..BB", "ABBA...BABAA.AA.BABA.BB.ABABAB.ABB....AB", "AAA.AAAA.ABA.BABBB.BABBBA.BBBBABAAABBA.B", "ABBAA.BAB.AABAAAABBBBABBBA.BAAAABABABBB."};
    vector<int> queries = {692};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {39};
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    vector<string> roads = {".AABBBAABABABAAABAABBAAAB.BBABBBABBBAAAA", "A.ABBB.AAA.BAAAA.ABBBABBBBABABBAAABBABAB", "AA.BA.B.A.AABAB.B.AB.BAAABABBBBBAAAB.BAB", "BBB.BABABBB.ABAAAABABBABABAA.ABABB.A.A.A", "BBAB.AB.BBABABAA.B.AA.BBB.BA.A..ABABA.AA", "BB.AA.ABA.BBBABB.ABA.BBBAABAB.AAABBAA.A.", "A.BBBA.BBAAABB.AABAAAB.A.BABBBBABAABA.AB", "AA.A.BB.ABABAABBBBABBA..AAABBABBB.BAABAA", "BAABBABA.BAABBBABBAAABABAABABAAABBABBA.B", "AA.BB.ABB.AA.BBBABAABABAB.BA.A.ABBAABBA.", "B.ABABAAAA.BAAB.AABBABBBB.AABBABABABBABA", "ABA.BBABAAB...ABB.ABBBABBBA.AAABBABBAAAA", "BABAABBAB.A..AABAABBBABBBAB.AABBAAABA..B", "AAABBABABBA.A.BAAAABAAABBBBABABABBBBBABA", "AABAAB.BBBBAAB.ABBBB.AABB.BBB.ABA.AAAAAA", "AA.AABABAB.BBAA.AA.AAABABBBBBB.BBABAB.BA", "B.BA..ABBAABAABA..A.ABBBABAABBBABABAABBA", "AA.ABABBBBA.AABA..BBAAAABABAABBBABBABABB", "ABAB.BAAAABABAB.AB.BABAAABAABABAABBBBB.B", "BBBAAAABAABBBBBA.BB.A..AAAAA.BAABBBA.ABB", "BB.BA.ABABABBA.AAAAA.BAAAAB..BBBBB.AB.AB", "AABB.BBABABBAAAABAB.B..ABAABBAAA..BABBBA", "ABAABB..ABBABAABBAA.A..ABBBBA.BAAAABABBB", "ABABBBA.BABBBBBABAAAAAA.B.AAAAABAABBB.BB", "BBAABA.AABBBBBBBABAAABBB.BAAAAA.AB.BAAAB", ".BBB.ABAA..BAB.BBABAAAB.B.AABAABBABAAB.A", "BAAABBAABBAABBBBABAABABAAA.BAABBBBABAAB.", "BBBAAABBAAA..ABBAAAA.BBAAAB.ABABBAABBBBB", "AAB..BBBB.BAABBBBAB..BAAABAA.BABAABAAABA", "BBBAA.BAAABAAA.BBBABBA.AAAABB.BABBAABBBA", "BBBB.ABBA.AABBA.BBBABABAAABAAB.AAA.BB.AA", "BABA.AABAABBBABBABAABAAB.BBBBAA.AABB.ABA", "AAABAABBBBABABABBAABB.AAABBBABAA.BAABBAB", "BAABBBA.BBBAAB.AABBBB.AABABAABAAB.AABBAA", "BBA.ABABAAABABABBBBB.BAB.BAABA.BAA.AA.AB", "BBBABABABABBBBAAAABAAABBBABBAABBAAA.A.BA", "AA..AAAABBBAABABABB.BBABAAABABB.BBAA..BB", "ABBA...BABAA.AA.BABA.BB.ABABAB.ABB....AB", "AAA.AAAA.ABA.BABBB.BABBBA.BBBBABAAABBA.B", "ABBAA.BAB.AABAAAABBBBABBBA.BAAAABABABBB."};
    vector<int> queries = {0, 693};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0};
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    vector<string> roads = {".AABBBAABABABAAABAABBAAAB.BBABBBABBBAAAA", "A.ABBB.AAA.BAAAA.ABBBABBBBABABBAAABBABAB", "AA.BA.B.A.AABAB.B.AB.BAAABABBBBBAAAB.BAB", "BBB.BABABBB.ABAAAABABBABABAA.ABABB.A.A.A", "BBAB.AB.BBABABAA.B.AA.BBB.BA.A..ABABA.AA", "BB.AA.ABA.BBBABB.ABA.BBBAABAB.AAABBAA.A.", "A.BBBA.BBAAABB.AABAAAB.A.BABBBBABAABA.AB", "AA.A.BB.ABABAABBBBABBA..AAABBABBB.BAABAA", "BAABBABA.BAABBBABBAAABABAABABAAABBABBA.B", "AA.BB.ABB.AA.BBBABAABABAB.BA.A.ABBAABBA.", "B.ABABAAAA.BAAB.AABBABBBB.AABBABABABBABA", "ABA.BBABAAB...ABB.ABBBABBBA.AAABBABBAAAA", "BABAABBAB.A..AABAABBBABBBAB.AABBAAABA..B", "AAABBABABBA.A.BAAAABAAABBBBABABABBBBBABA", "AABAAB.BBBBAAB.ABBBB.AABB.BBB.ABA.AAAAAA", "AA.AABABAB.BBAA.AA.AAABABBBBBB.BBABAB.BA", "B.BA..ABBAABAABA..A.ABBBABAABBBABABAABBA", "AA.ABABBBBA.AABA..BBAAAABABAABBBABBABABB", "ABAB.BAAAABABAB.AB.BABAAABAABABAABBBBB.B", "BBBAAAABAABBBBBA.BB.A..AAAAA.BAABBBA.ABB", "BB.BA.ABABABBA.AAAAA.BAAAAB..BBBBB.AB.AB", "AABB.BBABABBAAAABAB.B..ABAABBAAA..BABBBA", "ABAABB..ABBABAABBAA.A..ABBBBA.BAAAABABBB", "ABABBBA.BABBBBBABAAAAAA.B.AAAAABAABBB.BB", "BBAABA.AABBBBBBBABAAABBB.BAAAAA.AB.BAAAB", ".BBB.ABAA..BAB.BBABAAAB.B.AABAABBABAAB.A", "BAAABBAABBAABBBBABAABABAAA.BAABBBBABAAB.", "BBBAAABBAAA..ABBAAAA.BBAAAB.ABABBAABBBBB", "AAB..BBBB.BAABBBBAB..BAAABAA.BABAABAAABA", "BBBAA.BAAABAAA.BBBABBA.AAAABB.BABBAABBBA", "BBBB.ABBA.AABBA.BBBABABAAABAAB.AAA.BB.AA", "BABA.AABAABBBABBABAABAAB.BBBBAA.AABB.ABA", "AAABAABBBBABABABBAABB.AAABBBABAA.BAABBAB", "BAABBBA.BBBAAB.AABBBB.AABABAABAAB.AABBAA", "BBA.ABABAAABABABBBBB.BAB.BAABA.BAA.AA.AB", "BBBABABABABBBBAAAABAAABBBABBAABBAAA.A.BA", "AA..AAAABBBAABABABB.BBABAAABABB.BBAA..BB", "ABBA...BABAA.AA.BABA.BB.ABABAB.ABB....AB", "AAA.AAAA.ABA.BABBB.BABBBA.BBBBABAAABBA.B", "ABBAA.BAB.AABAAAABBBBABBBA.BAAAABABABBB."};
    vector<int> queries = {0, 1};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    vector<string> roads = {".AABBBAABABABAAABAABBAAAB.BBABBBABBBAAAA", "A.ABBB.AAA.BAAAA.ABBBABBBBABABBAAABBABAB", "AA.BA.B.A.AABAB.B.AB.BAAABABBBBBAAAB.BAB", "BBB.BABABBB.ABAAAABABBABABAA.ABABB.A.A.A", "BBAB.AB.BBABABAA.B.AA.BBB.BA.A..ABABA.AA", "BB.AA.ABA.BBBABB.ABA.BBBAABAB.AAABBAA.A.", "A.BBBA.BBAAABB.AABAAAB.A.BABBBBABAABA.AB", "AA.A.BB.ABABAABBBBABBA..AAABBABBB.BAABAA", "BAABBABA.BAABBBABBAAABABAABABAAABBABBA.B", "AA.BB.ABB.AA.BBBABAABABAB.BA.A.ABBAABBA.", "B.ABABAAAA.BAAB.AABBABBBB.AABBABABABBABA", "ABA.BBABAAB...ABB.ABBBABBBA.AAABBABBAAAA", "BABAABBAB.A..AABAABBBABBBAB.AABBAAABA..B", "AAABBABABBA.A.BAAAABAAABBBBABABABBBBBABA", "AABAAB.BBBBAAB.ABBBB.AABB.BBB.ABA.AAAAAA", "AA.AABABAB.BBAA.AA.AAABABBBBBB.BBABAB.BA", "B.BA..ABBAABAABA..A.ABBBABAABBBABABAABBA", "AA.ABABBBBA.AABA..BBAAAABABAABBBABBABABB", "ABAB.BAAAABABAB.AB.BABAAABAABABAABBBBB.B", "BBBAAAABAABBBBBA.BB.A..AAAAA.BAABBBA.ABB", "BB.BA.ABABABBA.AAAAA.BAAAAB..BBBBB.AB.AB", "AABB.BBABABBAAAABAB.B..ABAABBAAA..BABBBA", "ABAABB..ABBABAABBAA.A..ABBBBA.BAAAABABBB", "ABABBBA.BABBBBBABAAAAAA.B.AAAAABAABBB.BB", "BBAABA.AABBBBBBBABAAABBB.BAAAAA.AB.BAAAB", ".BBB.ABAA..BAB.BBABAAAB.B.AABAABBABAAB.A", "BAAABBAABBAABBBBABAABABAAA.BAABBBBABAAB.", "BBBAAABBAAA..ABBAAAA.BBAAAB.ABABBAABBBBB", "AAB..BBBB.BAABBBBAB..BAAABAA.BABAABAAABA", "BBBAA.BAAABAAA.BBBABBA.AAAABB.BABBAABBBA", "BBBB.ABBA.AABBA.BBBABABAAABAAB.AAA.BB.AA", "BABA.AABAABBBABBABAABAAB.BBBBAA.AABB.ABA", "AAABAABBBBABABABBAABB.AAABBBABAA.BAABBAB", "BAABBBA.BBBAAB.AABBBB.AABABAABAAB.AABBAA", "BBA.ABABAAABABABBBBB.BAB.BAABA.BAA.AA.AB", "BBBABABABABBBBAAAABAAABBBABBAABBAAA.A.BA", "AA..AAAABBBAABABABB.BBABAAABABB.BBAA..BB", "ABBA...BABAA.AA.BABA.BB.ABABAB.ABB....AB", "AAA.AAAA.ABA.BABBB.BABBBA.BBBBABAAABBA.B", "ABBAA.BAB.AABAAAABBBBABBBA.BAAAABABABBB."};
    vector<int> queries = {693, 692};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 39};
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    vector<string> roads = {".AABBBAABABABAAABAABBAAAB.BBABBBABBBAAAA", "A.ABBB.AAA.BAAAA.ABBBABBBBABABBAAABBABAB", "AA.BA.B.A.AABAB.B.AB.BAAABABBBBBAAAB.BAB", "BBB.BABABBB.ABAAAABABBABABAA.ABABB.A.A.A", "BBAB.AB.BBABABAA.B.AA.BBB.BA.A..ABABA.AA", "BB.AA.ABA.BBBABB.ABA.BBBAABAB.AAABBAA.A.", "A.BBBA.BBAAABB.AABAAAB.A.BABBBBABAABA.AB", "AA.A.BB.ABABAABBBBABBA..AAABBABBB.BAABAA", "BAABBABA.BAABBBABBAAABABAABABAAABBABBA.B", "AA.BB.ABB.AA.BBBABAABABAB.BA.A.ABBAABBA.", "B.ABABAAAA.BAAB.AABBABBBB.AABBABABABBABA", "ABA.BBABAAB...ABB.ABBBABBBA.AAABBABBAAAA", "BABAABBAB.A..AABAABBBABBBAB.AABBAAABA..B", "AAABBABABBA.A.BAAAABAAABBBBABABABBBBBABA", "AABAAB.BBBBAAB.ABBBB.AABB.BBB.ABA.AAAAAA", "AA.AABABAB.BBAA.AA.AAABABBBBBB.BBABAB.BA", "B.BA..ABBAABAABA..A.ABBBABAABBBABABAABBA", "AA.ABABBBBA.AABA..BBAAAABABAABBBABBABABB", "ABAB.BAAAABABAB.AB.BABAAABAABABAABBBBB.B", "BBBAAAABAABBBBBA.BB.A..AAAAA.BAABBBA.ABB", "BB.BA.ABABABBA.AAAAA.BAAAAB..BBBBB.AB.AB", "AABB.BBABABBAAAABAB.B..ABAABBAAA..BABBBA", "ABAABB..ABBABAABBAA.A..ABBBBA.BAAAABABBB", "ABABBBA.BABBBBBABAAAAAA.B.AAAAABAABBB.BB", "BBAABA.AABBBBBBBABAAABBB.BAAAAA.AB.BAAAB", ".BBB.ABAA..BAB.BBABAAAB.B.AABAABBABAAB.A", "BAAABBAABBAABBBBABAABABAAA.BAABBBBABAAB.", "BBBAAABBAAA..ABBAAAA.BBAAAB.ABABBAABBBBB", "AAB..BBBB.BAABBBBAB..BAAABAA.BABAABAAABA", "BBBAA.BAAABAAA.BBBABBA.AAAABB.BABBAABBBA", "BBBB.ABBA.AABBA.BBBABABAAABAAB.AAA.BB.AA", "BABA.AABAABBBABBABAABAAB.BBBBAA.AABB.ABA", "AAABAABBBBABABABBAABB.AAABBBABAA.BAABBAB", "BAABBBA.BBBAAB.AABBBB.AABABAABAAB.AABBAA", "BBA.ABABAAABABABBBBB.BAB.BAABA.BAA.AA.AB", "BBBABABABABBBBAAAABAAABBBABBAABBAAA.A.BA", "AA..AAAABBBAABABABB.BBABAAABABB.BBAA..BB", "ABBA...BABAA.AA.BABA.BB.ABABAB.ABB....AB", "AAA.AAAA.ABA.BABBB.BABBBA.BBBBABAAABBA.B", "ABBAA.BAB.AABAAAABBBBABBBA.BAAAABABABBB."};
    vector<int> queries = {629, 200, 239, 141, 378, 488, 394, 231, 126, 206, 311, 598, 257, 601, 63, 610, 55, 50, 199, 73, 546, 282, 102, 90, 573, 434, 626, 474, 396, 643, 593, 533, 204, 364, 524, 494, 86, 307, 536, 283, 489, 381, 158, 356, 99, 61, 551, 124, 196, 111};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {29, 16, 17, 6, 29, 26, 13, 7, 1, 24, 24, 14, 0, 29, 19, 37, 13, 3, 11, 19, 34, 17, 5, 9, 6, 11, 39, 29, 14, 35, 6, 32, 19, 2, 22, 33, 4, 17, 31, 12, 21, 18, 18, 21, 8, 10, 7, 4, 29, 14};
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    vector<string> roads = {".AABBBAABABABAAABAABBAAAB.BBABBBABBBAAAA", "A.ABBB.AAA.BAAAA.ABBBABBBBABABBAAABBABAB", "AA.BA.B.A.AABAB.B.AB.BAAABABBBBBAAAB.BAB", "BBB.BABABBB.ABAAAABABBABABAA.ABABB.A.A.A", "BBAB.AB.BBABABAA.B.AA.BBB.BA.A..ABABA.AA", "BB.AA.ABA.BBBABB.ABA.BBBAABAB.AAABBAA.A.", "A.BBBA.BBAAABB.AABAAAB.A.BABBBBABAABA.AB", "AA.A.BB.ABABAABBBBABBA..AAABBABBB.BAABAA", "BAABBABA.BAABBBABBAAABABAABABAAABBABBA.B", "AA.BB.ABB.AA.BBBABAABABAB.BA.A.ABBAABBA.", "B.ABABAAAA.BAAB.AABBABBBB.AABBABABABBABA", "ABA.BBABAAB...ABB.ABBBABBBA.AAABBABBAAAA", "BABAABBAB.A..AABAABBBABBBAB.AABBAAABA..B", "AAABBABABBA.A.BAAAABAAABBBBABABABBBBBABA", "AABAAB.BBBBAAB.ABBBB.AABB.BBB.ABA.AAAAAA", "AA.AABABAB.BBAA.AA.AAABABBBBBB.BBABAB.BA", "B.BA..ABBAABAABA..A.ABBBABAABBBABABAABBA", "AA.ABABBBBA.AABA..BBAAAABABAABBBABBABABB", "ABAB.BAAAABABAB.AB.BABAAABAABABAABBBBB.B", "BBBAAAABAABBBBBA.BB.A..AAAAA.BAABBBA.ABB", "BB.BA.ABABABBA.AAAAA.BAAAAB..BBBBB.AB.AB", "AABB.BBABABBAAAABAB.B..ABAABBAAA..BABBBA", "ABAABB..ABBABAABBAA.A..ABBBBA.BAAAABABBB", "ABABBBA.BABBBBBABAAAAAA.B.AAAAABAABBB.BB", "BBAABA.AABBBBBBBABAAABBB.BAAAAA.AB.BAAAB", ".BBB.ABAA..BAB.BBABAAAB.B.AABAABBABAAB.A", "BAAABBAABBAABBBBABAABABAAA.BAABBBBABAAB.", "BBBAAABBAAA..ABBAAAA.BBAAAB.ABABBAABBBBB", "AAB..BBBB.BAABBBBAB..BAAABAA.BABAABAAABA", "BBBAA.BAAABAAA.BBBABBA.AAAABB.BABBAABBBA", "BBBB.ABBA.AABBA.BBBABABAAABAAB.AAA.BB.AA", "BABA.AABAABBBABBABAABAAB.BBBBAA.AABB.ABA", "AAABAABBBBABABABBAABB.AAABBBABAA.BAABBAB", "BAABBBA.BBBAAB.AABBBB.AABABAABAAB.AABBAA", "BBA.ABABAAABABABBBBB.BAB.BAABA.BAA.AA.AB", "BBBABABABABBBBAAAABAAABBBABBAABBAAA.A.BA", "AA..AAAABBBAABABABB.BBABAAABABB.BBAA..BB", "ABBA...BABAA.AA.BABA.BB.ABABAB.ABB....AB", "AAA.AAAA.ABA.BABBB.BABBBA.BBBBABAAABBA.B", "ABBAA.BAB.AABAAAABBBBABBBA.BAAAABABABBB."};
    vector<int> queries = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 3, 5, 0, 2, 3, 7, 5, 4, 0, 6, 2, 1, 4, 2, 12, 1, 5, 6, 3, 12, 0, 7, 6, 9, 3, 14, 2, 8, 0, 9, 4, 10, 0, 11, 1, 7, 9, 1, 18, 0, 3, 15, 5, 8, 3, 16, 0, 13};
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    vector<string> roads = {".AABBBAABABABAAABAABBAAAB.BBABBBABBBAAAA", "A.ABBB.AAA.BAAAA.ABBBABBBBABABBAAABBABAB", "AA.BA.B.A.AABAB.B.AB.BAAABABBBBBAAAB.BAB", "BBB.BABABBB.ABAAAABABBABABAA.ABABB.A.A.A", "BBAB.AB.BBABABAA.B.AA.BBB.BA.A..ABABA.AA", "BB.AA.ABA.BBBABB.ABA.BBBAABAB.AAABBAA.A.", "A.BBBA.BBAAABB.AABAAAB.A.BABBBBABAABA.AB", "AA.A.BB.ABABAABBBBABBA..AAABBABBB.BAABAA", "BAABBABA.BAABBBABBAAABABAABABAAABBABBA.B", "AA.BB.ABB.AA.BBBABAABABAB.BA.A.ABBAABBA.", "B.ABABAAAA.BAAB.AABBABBBB.AABBABABABBABA", "ABA.BBABAAB...ABB.ABBBABBBA.AAABBABBAAAA", "BABAABBAB.A..AABAABBBABBBAB.AABBAAABA..B", "AAABBABABBA.A.BAAAABAAABBBBABABABBBBBABA", "AABAAB.BBBBAAB.ABBBB.AABB.BBB.ABA.AAAAAA", "AA.AABABAB.BBAA.AA.AAABABBBBBB.BBABAB.BA", "B.BA..ABBAABAABA..A.ABBBABAABBBABABAABBA", "AA.ABABBBBA.AABA..BBAAAABABAABBBABBABABB", "ABAB.BAAAABABAB.AB.BABAAABAABABAABBBBB.B", "BBBAAAABAABBBBBA.BB.A..AAAAA.BAABBBA.ABB", "BB.BA.ABABABBA.AAAAA.BAAAAB..BBBBB.AB.AB", "AABB.BBABABBAAAABAB.B..ABAABBAAA..BABBBA", "ABAABB..ABBABAABBAA.A..ABBBBA.BAAAABABBB", "ABABBBA.BABBBBBABAAAAAA.B.AAAAABAABBB.BB", "BBAABA.AABBBBBBBABAAABBB.BAAAAA.AB.BAAAB", ".BBB.ABAA..BAB.BBABAAAB.B.AABAABBABAAB.A", "BAAABBAABBAABBBBABAABABAAA.BAABBBBABAAB.", "BBBAAABBAAA..ABBAAAA.BBAAAB.ABABBAABBBBB", "AAB..BBBB.BAABBBBAB..BAAABAA.BABAABAAABA", "BBBAA.BAAABAAA.BBBABBA.AAAABB.BABBAABBBA", "BBBB.ABBA.AABBA.BBBABABAAABAAB.AAA.BB.AA", "BABA.AABAABBBABBABAABAAB.BBBBAA.AABB.ABA", "AAABAABBBBABABABBAABB.AAABBBABAA.BAABBAB", "BAABBBA.BBBAAB.AABBBB.AABABAABAAB.AABBAA", "BBA.ABABAAABABABBBBB.BAB.BAABA.BAA.AA.AB", "BBBABABABABBBBAAAABAAABBBABBAABBAAA.A.BA", "AA..AAAABBBAABABABB.BBABAAABABB.BBAA..BB", "ABBA...BABAA.AA.BABA.BB.ABABAB.ABB....AB", "AAA.AAAA.ABA.BABBB.BABBBA.BBBBABAAABBA.B", "ABBAA.BAB.AABAAAABBBBABBBA.BAAAABABABBB."};
    vector<int> queries = {693, 692, 691, 690, 689, 688, 687, 686, 685, 684, 683, 682, 681, 680, 679, 678, 677, 676, 675, 674, 673, 672, 671, 670, 669, 668, 667, 666, 665, 664, 663, 662, 661, 660, 659, 658, 657, 656, 655, 654, 653, 652, 651, 650, 649, 648, 647, 646, 645, 644};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 39, 38, 37, 39, 35, 31, 39, 36, 35, 38, 34, 39, 30, 35, 32, 39, 33, 37, 31, 38, 33, 26, 37, 32, 38, 29, 39, 24, 38, 36, 26, 35, 33, 36, 34, 28, 39, 27, 23, 39, 25, 37, 28, 38, 20, 39, 21, 37, 24};
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    vector<string> roads = {".AABBBAABABABAAABAABBAAAB.BBABBBABBBAAAA", "A.ABBB.AAA.BAAAA.ABBBABBBBABABBAAABBABAB", "AA.BA.B.A.AABAB.B.AB.BAAABABBBBBAAAB.BAB", "BBB.BABABBB.ABAAAABABBABABAA.ABABB.A.A.A", "BBAB.AB.BBABABAA.B.AA.BBB.BA.A..ABABA.AA", "BB.AA.ABA.BBBABB.ABA.BBBAABAB.AAABBAA.A.", "A.BBBA.BBAAABB.AABAAAB.A.BABBBBABAABA.AB", "AA.A.BB.ABABAABBBBABBA..AAABBABBB.BAABAA", "BAABBABA.BAABBBABBAAABABAABABAAABBABBA.B", "AA.BB.ABB.AA.BBBABAABABAB.BA.A.ABBAABBA.", "B.ABABAAAA.BAAB.AABBABBBB.AABBABABABBABA", "ABA.BBABAAB...ABB.ABBBABBBA.AAABBABBAAAA", "BABAABBAB.A..AABAABBBABBBAB.AABBAAABA..B", "AAABBABABBA.A.BAAAABAAABBBBABABABBBBBABA", "AABAAB.BBBBAAB.ABBBB.AABB.BBB.ABA.AAAAAA", "AA.AABABAB.BBAA.AA.AAABABBBBBB.BBABAB.BA", "B.BA..ABBAABAABA..A.ABBBABAABBBABABAABBA", "AA.ABABBBBA.AABA..BBAAAABABAABBBABBABABB", "ABAB.BAAAABABAB.AB.BABAAABAABABAABBBBB.B", "BBBAAAABAABBBBBA.BB.A..AAAAA.BAABBBA.ABB", "BB.BA.ABABABBA.AAAAA.BAAAAB..BBBBB.AB.AB", "AABB.BBABABBAAAABAB.B..ABAABBAAA..BABBBA", "ABAABB..ABBABAABBAA.A..ABBBBA.BAAAABABBB", "ABABBBA.BABBBBBABAAAAAA.B.AAAAABAABBB.BB", "BBAABA.AABBBBBBBABAAABBB.BAAAAA.AB.BAAAB", ".BBB.ABAA..BAB.BBABAAAB.B.AABAABBABAAB.A", "BAAABBAABBAABBBBABAABABAAA.BAABBBBABAAB.", "BBBAAABBAAA..ABBAAAA.BBAAAB.ABABBAABBBBB", "AAB..BBBB.BAABBBBAB..BAAABAA.BABAABAAABA", "BBBAA.BAAABAAA.BBBABBA.AAAABB.BABBAABBBA", "BBBB.ABBA.AABBA.BBBABABAAABAAB.AAA.BB.AA", "BABA.AABAABBBABBABAABAAB.BBBBAA.AABB.ABA", "AAABAABBBBABABABBAABB.AAABBBABAA.BAABBAB", "BAABBBA.BBBAAB.AABBBB.AABABAABAAB.AABBAA", "BBA.ABABAAABABABBBBB.BAB.BAABA.BAA.AA.AB", "BBBABABABABBBBAAAABAAABBBABBAABBAAA.A.BA", "AA..AAAABBBAABABABB.BBABAAABABB.BBAA..BB", "ABBA...BABAA.AA.BABA.BB.ABABAB.ABB....AB", "AAA.AAAA.ABA.BABBB.BABBBA.BBBBABAAABBA.B", "ABBAA.BAB.AABAAAABBBBABBBA.BAAAABABABBB."};
    vector<int> queries = {600, 692, 691, 690, 689, 688, 687, 686, 685, 684, 683, 682, 681, 680, 679, 678, 677, 676, 675, 674, 673, 672, 671, 670, 669, 668, 667, 666, 665, 664, 663, 662, 661, 660, 659, 658, 657, 656, 655, 654, 653, 652, 651, 650, 649, 648, 647, 646, 645, 644};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {26, 39, 38, 37, 39, 35, 31, 39, 36, 35, 38, 34, 39, 30, 35, 32, 39, 33, 37, 31, 38, 33, 26, 37, 32, 38, 29, 39, 24, 38, 36, 26, 35, 33, 36, 34, 28, 39, 27, 23, 39, 25, 37, 28, 38, 20, 39, 21, 37, 24};
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    vector<string> roads = {".abbaadcbbcabbcbacaaccbdbadabcaaaccabdc", "a.cacadddaccababdacbcbddbddbcdaabbbddac", "bc.ddbabbccbbbbadacaacdbcabbcbccddadbaa", "bad.badcdadadcbaddaccddbcddddddabbbadab", "acdb.bcdcdcacaccaaabddddcadcaadcaabcdbc", "aabab.bcbcbababdbbabbbaadccacccadcdabcb", "ddadcb.adbddccadbbacccbdababcdbccdddcbc", "cdbcdca.dbdbabdadccbbdadddacaccacaadbbb", "bdbdcbdd.bbadbcbbddababcdaabcbbacaaaacd", "bacadcbbb.ddabdcddadacbacddbbbdbacacbbd", "cccdcbddbd.ababbbddcdadcdbdadbbdadcaccc", "acbaaadbada.cdcbbbcbdcbbaabccbccbacbdaa", "babdcbcadabc.adcdcaadaaadcaacadccdaabdb", "bbbcaacbbbada.cdbcaadcaabbdbcaaccccbbac", "cabbcbadcdbcdc.cbbcdbcbadcaaaccaadddaba", "bbaacddabcbbcdc.dadccbbabccbadbcacaaaba", "adddabbdbdbbdbbd.cdbbcadcdabbbabcdabcca", "caadabbcdddbccbac.bdabadbddcddcdccdaada", "accaaaacdadcaacddb.aadacbddadbaaabcdada", "abacbbcbadcbaadcbda.cbacabcaaaadabcddcd", "ccacdbcbbaddddbcbaac.cdbbcdbdcbaaccdbdc", "cbcddbcdacacaccbcbdbc.cacbcdbdccddcbcdb", "bddddababbdbaabbaaaadc.dabaaaaadbbccddd", "ddbbdaddcacbaaaaddccbad.baacaabccdbaada", "bbcccdaddcdadbdbcbbabcab.abccacbdbadbab", "adadacbdadbacbccdddbcbbaa.dabbadcbaacdb", "ddbddcaaaddbadacaddcdcaabd.aaccadbaaddd", "abbdcabcbbacababbcaabdaccaa.abaacaadaab", "bccdaccacbdcccaabddadbaacbaa.baabadbbcc", "cdbdacdcbbbbaacdbdbacdaaabcbb.dcbdcbdda", "aacddcbcbdbcdacbacaabcabcacaad.baabccdc", "aacacacaabdcccacbdadacdcbdaaacb.daadccd", "abdbadcccaabccaaccaaadbcdcdcbbad.bcccbd", "cbdbacdaacdadcdcdcbbcdbdbbbaadaab.ddada", "cbabbddaaaccacdaadcccccbaaaadcbacd.abdd", "addacaddacababdabadddbcadaadbbcdcda.bbc", "bdbddbcbabcdbbaacaadbcdabcdabdcccabb.aa", "daaabcbbcbcadabbcddcddddaddacddcbddba.a", "ccabcbcbddcabcaaaaadcbdabbdbcacddadcaa."};
    vector<int> queries = {407, 138, 630, 457, 168, 8, 1, 31, 486, 103, 576, 51, 547, 670, 163, 425, 439, 330, 402, 527, 280, 605, 712, 611, 181, 420, 179, 381, 680, 376, 72, 229, 132, 331, 122, 333, 70, 689, 616, 474, 437, 160, 460, 492, 621, 171, 570, 354, 641, 124};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 22, 28, 21, 19, 5, 1, 3, 33, 6, 37, 10, 18, 25, 13, 14, 15, 23, 34, 16, 4, 21, 31, 18, 3, 31, 9, 5, 29, 38, 5, 4, 17, 16, 22, 17, 4, 33, 28, 25, 11, 10, 26, 31, 25, 11, 36, 32, 32, 23};
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    vector<string> roads = {".bcaacaedbaaadcabaadbacbcabeadcacbaeabc.", "b.eaeeeabcacacdeadbaaeccbeebccdbdbcccce.", "ce.aaaccaaceebeedcdbacdaadeaedacdbeeada.", "aaa.dddacdcddbeeedacacbccceddabbadbcaee.", "aead.baabdacddaeebaecbadecdeecacececaac.", "ceadb.addeebabacabccbebccedabedaccaadbd.", "aecdaa.ccccedbaabedbdebcebecaadacdddaac.", "eacaadc.dbcacddbeddbaeacbdcdddebadecbbc.", "dbacbdcd.cdcebcdebebcecabeecbdcaeecccdd.", "bcaddecbc.dbecebbdbcbcabbbeaeeadbabbaae.", "aaccaeccdd.ceeeabaeeedceeeadaaaddbaeeac.", "acedcbeacbc.adadcaccbacebdbaabbdeaeebcd.", "aaeddadceeea.acddacaeadaeaeebbecebaaece.", "dcbbdbbdbceda.ddaeecbbbccbcccedeaddcbac.", "cdeeaaadceeacd.dbbccecedecbdcabacbbddeb.", "aeeeecabdbadddd.eddabaeddceaceddbdbaeca.", "badeeabeebbcdabe.bdaeeaceceadecddebcbad.", "adcdbbedbdaaaebdb.ecbcecccbbdcacacdbaae.", "abdaacddebeccecdde.bdbaecbaaadbcaabbcbe.", "dabcecbbbcecaccaacb.ceeebbabceaceaaadab.", "baaacbdacbebebebebdc.eeaadabbebcabdeece.", "aeccbeeeecdaabcaecbee.caaaddcdbddbcceee.", "ccdbabbacaccdbeeaeaeec.ebabccabeecadaab.", "bcacdcccabeeacddcceeaae.bbdbdaabdcebeed.", "cbacecebbbebecedeccbaabb.bacadcaaeabcbe.", "aedccebdebedabccccbbdaabb.dbddbbcbdadcc.", "beeeddeceeabecbeebaaadbdad.ebccacdbaaaa.", "ebadeacdcadaecdaababbdcbcbe.acddecbaedd.", "acedebadbeaabcccddacbccdadba.dacebebaba.", "dcdaceaddeabbeaeecdeedaaddccd.deebabbcb.", "cdabaddecaabedbdcababbbacbcdad.daecdaed.", "abcbcaabadddceaddccccdebabadced.ddeeacc.", "cddaeccaebdeeacbdaaeadedacceeead.bcaddc.", "bbbdccddeababdbdecaabbccebdcbbedb.ccbdc.", "acebeadecbaeadbbbdbadcaeadbbeacecc.aece.", "ececcadccbeeacdacbbaecdbbaaabbdeaca.aeb.", "acaaadabcaebebdebacdeeaecdaeabaadbea.ee.", "bcdeababdaaccaecaabaceaebcadbcecddcee.a.", "ceaecdccdecdecbadeebeebdecadabdcccebea..", "........................................"};
    vector<int> queries = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 0, 3, 4, 0, 5, 1, 3, 5, 2, 6, 0, 7, 1, 4, 2, 7, 3, 6, 1, 8, 0, 9, 1, 10, 2, 3, 8, 2, 11, 0, 13, 1, 12, 2, 9, 3, 10};
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    vector<string> roads = {".edacaebcbecdbbdcadadeebccdcccbbaacdbdd", "e.ceceddeeccebddabcbceddceabccbbbadbddc", "dc.ecebeacedcbeebaacdbebebceddeededdabb", "aee.abebedecdddcbbdceeaccbecbecabbdbddb", "ccca.cdbdaedcbbdaeaccadedcdbceaadeacade", "aeebc.cceeaececdbdeccbbbddaeabccbbedadd", "edbedc.ddaedeceecdcaeabacdadcbacabaaada", "bdebbcd.cadcbadceebcdccaeaabbbaedacdbcd", "ceaededc.eddcaeaadadecdbadcbabccbaeccce", "becdaeaae.bbdcaddccbeaaebdadbeaaeacaaae", "eceeeaeddb.dcbeceeeaedbaacadaaeaadbdbbc", "ccdcdedcdbd.eccecebcbabaaccaeedbddceacd", "decdccebcdce.ecababceeecddbbcdaccbabaea", "bbbdbecaacbce.dedebedbecaaddbbdadcceddc", "bdedbcedeaeccd.bceceaaabdddabaaedaecadc", "ddecddecadceaeb.cdbecdaebebcceddbdbdbdb", "cabbabceadecbdcc.cccdeebbbeaaeaedabcbcc", "ababeddedceeaeedc.ddedbbbcecbaddbbadacd", "dcadaecbacebbbcbcd.ceddbcdbaabcccaceaee", "abccccacdbacceeecdc.eabdcaeecabdcdadace", "dcdeccedeeebedacdeee.badacadeccbcceadcb", "eebeabaccadaebadeddab.edcecbeedaedacada", "edeadbbcdabbeeaaebdbae.eaaeecaaddeabbca", "bdbcebaabeaaccbebbbddde.daeeedddebbbcbe", "ccecddceabaadadbbbccacad.ddddededbebdcd", "cebbcddaddccdadebcdaceaad.cdebdecceddee", "dacedaaacaacbddbeebeaceedc.ddaccaeecddc", "cbecbedbbddabdacacaedbeeddd.dbbaccbabce", "ccdbcacbabaecbbcabaceecededd.dabbcacbcb", "ccdeebbbbeaedbaeeabaceadebabd.cebdeeccd", "bbecacaacaedadadadcbcdadddcbac.aeadeeeb", "bbeaaccecaabcaededcdbaddeecabea.bcaaadb", "abdbdbadbeadcddbdbcccededcacbbeb.cddbec", "aaebebbaaaddbcadabadcdebbceccdacc.edeab", "cdddaeacecbcacebbacaeaabeeebaedade.cebb", "dbdbcdadcadebecdcdedacbbbdcaceeaddc.bed", "bdadaaabcabaadabbaaadabcdddbbceabeeb.cc", "ddbddddccabcedddcceccdcbcedcccedeabec.c", "dcbbedadeecdaccbcdeebaaedecebdbbcbbdcc."};
    vector<int> queries = {721, 27, 306, 411, 680, 650, 229, 655, 626, 435, 380, 566, 495, 448, 478, 605, 12, 683, 282, 693, 194, 481, 535, 40, 465, 135, 127, 383, 65, 484, 591, 614, 4, 441, 532, 273, 184, 289, 511, 129, 202, 574, 453, 600, 381, 256, 235, 557, 10, 522};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {29, 11, 18, 32, 32, 37, 2, 24, 34, 37, 6, 16, 21, 10, 13, 25, 4, 26, 32, 32, 19, 29, 31, 4, 36, 4, 8, 28, 3, 14, 28, 33, 3, 35, 18, 4, 21, 3, 26, 9, 19, 19, 37, 30, 32, 30, 0, 37, 6, 27};
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    vector<string> roads = {".AAAA....xabc", "A....b.......", "A.....b......", "A......b.....", "A.......b....", ".b.......cdex", "..b......bcbc", "...b.....cded", "....b....bcbe", "x....cbcb.abc", "a....dcdca.ca", "b....ebebbc.d", "c....xcdecad."};
    vector<int> queries = {9, 8, 7, 6, 0, 1, 2, 4, 10};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    vector<string> roads = {".nWlrBbmQBhCDarzOwKkYHIDdqSCDXrJmOWFrxsj", "n.yBldbEFSArCBynEcdyGgxxpkLoRellNMPapqfW", "Wy.kHOPkMCoQHnWnkUEwHsqmGbbuqCLJJiVswMdk", "lBk.qtBxIXMVTRRbljpTnsNFWZqfjMAfAdrrWsof", "rlHq.sBcnuVqHFfbsAQxWpQCAceHcHzvFrkMLNoz", "BdOts.jKpqPxRjxKITzYxAcbHhKicQCoENdtoMfG", "bbPBBj.DWDwFcGpXiqVKuYtDLcgDewHTacIOHORd", "mEkxcKD.tqKVwcsGSpQoqmsBOAgUwnnyQXNzlGdG", "QFMInpWt.wPbtrwblNsaDeugUuMoqcDRUbeTokYX", "BSCXuqDqw.hoaCHWdVMxXrDRYXLMndQTukWAgmlE", "hAoMVPwKPh.JuUkwciBxubUmeNmeYatdrMYDiAjx", "CrQVqxFVboJ.loGHIqfMZhlvIhJOuvsuyOYpaYUl", "DCHTHRcwtaul.YEimUotEHZRIiCfSkpgGkBBiPZz", "aBnRFjGcrCUoY.RZUCxAMLUdFYkGRUowzGIoOOBP", "ryWRfxpswHkGER.PLeQLwpHaPjnaDQHDcNVwdtXj", "znnbbKXGbWwHiZP.BMyPppHAUXnspuSgdhiIxqMB", "OEklsIiSldcImULB.fJxJCVUDJSuyIByEBmwSIqy", "wcUjATqpNViqUCeMf.OYgyxymzevYPZVjEGebEOc", "KdEpQzVQsMBfoxQyJO.fuFtSXdIxTIGSiEEhKchZ", "kywTxYKoaxxMtALPxYf.dflilrJqFNxzTqRSvBsP", "YGHnWxuqDXuZEMwpJgud.KyhseNBppKqTpDdbuOt", "HgsspAYmerbhHLppCyFfK.bbqCWIvRfxJujjDDNt", "IxqNQctsuDUlZUHHVxtlyb.geiqVdgAijvwcyAuB", "DxmFCbDBgRmvRdaAUySihbg.WewPJVYgEHLjxEPb", "dpGWAHLOUYeIIFPUDmXlsqeW.PiwUqZDZUbdubzv", "qkbZchcAuXNhiYjXJzdreCieP.aFspqpqWuZiFWO", "SLbqeKggMLmJCknnSeIJNWqwia.VydDWyVvBurcz", "CoufHiDUoMeOfGasuvxqBIVPwFV.mgyJGfdXVTNU", "DRqjccewqnYuSRDpyYTFpvdJUsym.NneSlsPLWui", "XeCMHQwncdavkUQuIPINpRgVqpdgN.UPFxlZBknh", "rlLAzCHnDQtspoHSBZGxKfAYZqDynU.KwPpanLtc", "JlJfvoTyRTdugwDgyVSzqxigDpWJePK.firJcdds", "mNJAFEaQUuryGzcdEjiTTJjEZqyGSFwf.ozOyveg", "OMidrNcXbkMOkGNhBEEqpuvHUWVflxPio.UrFWcs", "WPVrkdINeWYYBIVimGERDjwLbuvdslprzU.fmoXE", "FasrMtOzTADpBowIwehSdjcjdZBXPZaJOrf.qmrj", "rpwWLoHlogiaiOdxSbKvbDyxuiuVLBncyFmq.OWR", "xqMsNMOGkmAYPOtqIEcBuDAEbFrTWkLdvWomO.GH", "sfdoofRdYljUZBXMqOhsONuPzWcNuntdecXrWG.W", "jWkfzGdGXExlzPjBycZPttBbvOzUihcsgsEjRHW."};
    vector<int> queries = {0, 55, 300};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    vector<string> roads = {".apq..............q..q.................j", "a.b.t..l...........................l.t..", "pb.c....u.....................t.p.......", "q.c.d................rt.........o.......", ".t.d.e.....sn..q........................", "....e.f.........o......m....r.....r.....", ".....f.g....................s..o..t....q", ".l....g.h.t........................ns...", "..u....h.i.......t...........t.....o....", "........i.j...q.....s....u......l.......", ".......t.j.a.......q...t.t..............", "....s.....a.b...u.......lo..............", "....n......b.cm...q.......s.............", "............c.d.............n.to.r......", ".........q..md.e.....q...............o..", "....q.........e.f....o.um...............", ".....o.....u...f.g..l...............m...", "........t.......g.h.............q.....or", "q...........q....h.i..t...............p.", "..........q.......i.j.s........u.....l..", ".........s......l..j.a.....o......l.....", "q..r..........qo....a.b.................", "...t..............ts.b.c...........m....", ".....m....t....u......c.d.............u.", "...........l...m.......d.e.u........t...", ".........uto............e.f..r..........", "............s............f.g.on........l", "....................o...u.g.h..u.n......", ".....rs......n.............h.io.........", "........t................ro.i.j..q......", "..t..........t............n.oj.a........", "......o......o.....u.......u..a.b.......", "..po.....l.......q.............b.c......", ".............r.............n.q..c.d...n.", ".....rt.............l............d.e.u..", ".l.....no.............m...........e.f...", ".......s........m.......t..........f.g.p", ".t............o....l..............u.g.h.", ".................op....u.........n...h.i", "j.....q..........r........l.........p.i."};
    vector<int> queries = {1, 5, 10, 23, 24};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 16, 11};
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    vector<string> roads = {".ab", "a.a", "ba."};
    vector<int> queries = {0, 1, 2};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    vector<string> roads = {".ab...", "a.d...", "bd....", "....gh", "...g.j", "...hj."};
    vector<int> queries = {1, 2, 3};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    vector<string> roads = {".HgUeyNFXICSxgWfQUWNOVrKPEGxPRYtwyycpvkf", "H.MNmksWrnKcFTSySAPofZCeUPAOgOyFBPJRIYme", "gM.WnrpxjLoAwxhsCXosZvtDnYYFxSnkfUXRBngo", "UNW.ktYNouzrdItijayPSmSjFGbAoLYNRdpsTsWD", "emnk.zoZnWQjVWXRbDGlgUbbrTHspOGgKuDOObxE", "ykrtz.aFtueZhlUgejQJnEQxeJrZAULCHFmiwOIy", "NspYoa.XUnSsSTkqCzEuMrczjpIneDSRAYmABZse", "FWxNZFX.uNPSabzxhcHErUKMPWqGOAMwDyxtBHwY", "XrjontUu.CRBPOhKquRzNNUQQlZPIgLeDUOrrsOB", "InLuWunNC.ZwPwjlfAmIpPuGPnWMaXnnHQrULFOC", "CKozQeSPRZ.TZUldmCOkFjRxtOkJWclFIpyCZIkA", "ScArjZsSBwT.XGCCyJgxtVRhBpIBVBgcQkoZkbjM", "xFwdVhSaPPZX.STsFOfsRJGzuZwiuPxqLUvowcdN", "gTxIWlTbOwUGS.fJAmcFkiUUIwBEukbCKZzOdkhZ", "WShtXUkzhjlCTf.fzZFqPzkOUdTXJkERPxmeOwtP", "fysiRgqxKldCsJf.PcIKlYIRqyNfNVzdyNydUMHe", "QSCjbeChqfmyFAzP.ktWsOGFzvQXwmXYgdazgvoK", "UAXaDjzcuACJOmZck.GCmMRhyYgjkkZAxkozmuZz", "WPoyGQEHRmOgfcFItG.phtyZvuprMIgkrzXHOmAY", "NosPlJuEzIkxsFqKWCp.AXvhQIESgHJUXmsNrekg", "OfZSgnMrNpFtRkPlsmhA.CvHJBTqJoGKFFcfewrw", "VZvmUErUNPjVJizYOMtXC.pSmtgppNJuAYnknvlS", "rCtSbQcKUuRRGUkIGRyvvp.cWAgMKiDOKMQipohm", "KeDjbxzMQGxhzUORFhZhHSc.FUWvjflKDhjfTKfr", "PUnFrejPQPtBuIUqzyvQJmWF.yFNHscYTadjPHNg", "EPYGTJpWlnOpZwdyvYuIBtAUy.ixcWGSeertJjAi", "GAYbHrIqZWkIwBTNQgpETggWFi.jWYNRiOwiYtdA", "xOFAsZnGPMJBiEXfXjrSqpMvNxj.whgwMGnLJGuN", "PgxopAeOIaWVuuJNwkMgJpKjHcWw.hEgFkStJAfz", "ROSLOUDAgXcBPkkVmkIHoNifsWYhh.alRhCdrVRv", "YynYGLSMLnlgxbEzXZgJGJDlcGNgEa.yefvRyuQR", "tFkNgCRwenFcqCRdYAkUKuOKYSRwgly.dkbFuRql", "wBfRKHADDHIQLKPygxrXFAKDTeiMFRed.bwxzasG", "yPUduFYyUQpkUZxNdkzmFYMhaeOGkhfkb.hmGNpN", "yJXpDmmxOryovzmyaoXscnQjdrwnSCvbwh.kmUKR", "cRRsOiAtrUCZoOedzzHNfkifjtiLtdRFxmk.FcVr", "pIBTOwBBrLZkwdOUgmOrenpTPJYJJryuzGmF.KlA", "vYnsbOZHsFIbckwMvumewvoKHjtGAVuRaNUcK.lT", "kmgWxIswOOkjdhtHoZAkrlhfNAdufRQqspKVll.o", "feoDEyeYBCAMNZPeKzYgwSmrgiANzvRlGNRrATo."};
    vector<int> queries = {0, 1, 2, 10, 15, 20, 30, 50, 100};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    vector<string> roads = {".E.D.C.C...DB...E...ABEC...B..A..E.C..A.", "E..D....C.A.DAEB.DE...EC..DC..D.C.B.B...", "....D.A.BD..CDA.....D....DAC.EA...AD.DEB", "DD..AC.......DC.CA..BEC...BEB.A.E.E...A.", "..DA.C.A.A..EB....ADAA.B..EEA..A.A...E..", "C..CC....AB..D..E.C..EACC..BAC..BDB.AEDC", "..A......EEA..A.A...C.EABD..A.BE..E.EE.E", "C...A....E.B.BDDAD.CC..B...BAB...AC..EEB", ".CB..........AACD..A.CAA.D.BC..C.DD.....", "..D.AAEE..BB..EEB.....B..D....C.B....CD.", ".A...BE..B.B.CA.BACC..B.BA.CCAC...D.C.DB", "D.....AB.BB.B....A..DB...D....D....CE..C", "BDC.E......B.B.BD...C..AD.CA.B..CC.ECAE.", ".ADDBD.BA.C.B..BBC.B.A....DEEE.AD.AB....", ".EAC..ADAEA....BCC.CB..D.....D....C.BA..", ".B.....DCE..BBB.D..DB.BC.C...C.C.......A", "E..C.EAADBB.DBCD.BA.EEEA..DBD....B.E.D..", ".D.A...D..AA.CC.B..D..A.DADCE...DCC.C..A", ".E..AC....C.....A..E.ED.AABC..BA.ED..C.C", "....D..CA.C..BCD.DE.EBAC...D...E.C...DD.", "A.DBA.CC...DC.BBE..E.EC.C.EA..DCA.DD.EA.", "B..EAE..C..B.A..E.EBE....C.DADEBCBBD.DDE", "EE.C.AE.ABB....BEADAC.....E.EE...A.C...A", "CC..BCABA...A.DCA..C......E...C.BAEEA..B", ".....CB...B.D....DA.C....E..AB.AB..E...B", "..D...D.DDAD...C.AA..C..E..ACB.CC..DA...", ".DABE.......CD..DDB.E.EE...E.AA.E..D...A", "BCCEEB.BB.C.AE..BCCDAD...AE.ADC...D.BE.B", "...BAAAAC.C..E..DE...AE.AC.A.B.DD.DE....", "..E..C.B..A.BEDC.....DE.BBADB..EBDCB....", "ADAA..B..CCD......B.DE.C..AC....B.CAE.DB", "....A.E.C....A.C..AECB..AC..DE...AE.D.BA", ".C.E.B...B..CD...D..AC.BBCE.DBB.....AE..", "E...AD.AD...C...BCEC.BAA.....D.A..B..AE.", ".BAE.BECD.D..AC..CD.DB.E...DDCCE.B.BD.E.", "C.D........CEB..E...DDCEEDD.EBA...B.ABA.", ".B...AE...CEC.B..C.....A.A.B..EDA.DA.DC.", "..D.EEEE.C..A.A.D.CDED.....E....EA.BD.AA", "A.EA.D.E.DD.E......DAD........DB.EEACA..", "..B..CEB..BC...A.AC..EABB.AB..BA.....A.."};
    vector<int> queries = {216, 83, 384, 367, 219, 184, 17, 305, 364, 67, 31, 298, 249, 330, 10, 131, 265, 282, 303, 175, 43, 348, 21, 379, 40, 4, 355, 270, 196, 187, 353, 321, 339, 147, 338, 260, 278, 20, 58, 191, 356, 74, 136, 269, 236, 34, 302, 285, 337, 92};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {32, 16, 0, 36, 5, 25, 0, 24, 24, 2, 4, 37, 20, 35, 10, 2, 5, 31, 21, 7, 7, 32, 9, 30, 18, 2, 28, 39, 24, 19, 33, 28, 31, 12, 29, 30, 30, 10, 10, 7, 32, 19, 28, 11, 34, 17, 39, 17, 35, 4};
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    vector<string> roads = {"....", "..aA", ".a.B", ".AB."};
    vector<int> queries = {0, 1, 2, 3};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    vector<string> roads = {".bcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMN", "b.defghijklmnopqrstuvwxyzABCDEFGHIJKLMNO", "cd.fghijklmnopqrstuvwxyzABCDEFGHIJKLMNOP", "def.hijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQ", "efgh.jklmnopqrstuvwxyzABCDEFGHIJKLMNOPQR", "fghij.lmnopqrstuvwxyzABCDEFGHIJKLMNOPQRS", "ghijkl.nopqrstuvwxyzABCDEFGHIJKLMNOPQRST", "hijklmn.pqrstuvwxyzABCDEFGHIJKLMNOPQRSTU", "ijklmnop.rstuvwxyzABCDEFGHIJKLMNOPQRSTUV", "jklmnopqr.tuvwxyzABCDEFGHIJKLMNOPQRSTUVW", "klmnopqrst.vwxyzABCDEFGHIJKLMNOPQRSTUVWX", "lmnopqrstuv.xyzABCDEFGHIJKLMNOPQRSTUVWXa", "mnopqrstuvwx.zABCDEFGHIJKLMNOPQRSTUVWXab", "nopqrstuvwxyz.BCDEFGHIJKLMNOPQRSTUVWXabc", "opqrstuvwxyzAB.DEFGHIJKLMNOPQRSTUVWXabcd", "pqrstuvwxyzABCD.FGHIJKLMNOPQRSTUVWXabcde", "qrstuvwxyzABCDEF.HIJKLMNOPQRSTUVWXabcdef", "rstuvwxyzABCDEFGH.JKLMNOPQRSTUVWXabcdefg", "stuvwxyzABCDEFGHIJ.LMNOPQRSTUVWXabcdefgh", "tuvwxyzABCDEFGHIJKL.NOPQRSTUVWXabcdefghi", "uvwxyzABCDEFGHIJKLMN.PQRSTUVWXabcdefghij", "vwxyzABCDEFGHIJKLMNOP.RSTUVWXabcdefghijk", "wxyzABCDEFGHIJKLMNOPQR.TUVWXabcdefghijkl", "xyzABCDEFGHIJKLMNOPQRST.VWXabcdefghijklm", "yzABCDEFGHIJKLMNOPQRSTUV.Xabcdefghijklmn", "zABCDEFGHIJKLMNOPQRSTUVWX.bcdefghijklmno", "ABCDEFGHIJKLMNOPQRSTUVWXab.defghijklmnop", "BCDEFGHIJKLMNOPQRSTUVWXabcd.fghijklmnopq", "CDEFGHIJKLMNOPQRSTUVWXabcdef.hijklmnopqr", "DEFGHIJKLMNOPQRSTUVWXabcdefgh.jklmnopqrs", "EFGHIJKLMNOPQRSTUVWXabcdefghij.lmnopqrst", "FGHIJKLMNOPQRSTUVWXabcdefghijkl.nopqrstu", "GHIJKLMNOPQRSTUVWXabcdefghijklmn.pqrstuv", "HIJKLMNOPQRSTUVWXabcdefghijklmnop.rstuvw", "IJKLMNOPQRSTUVWXabcdefghijklmnopqr.tuvwx", "JKLMNOPQRSTUVWXabcdefghijklmnopqrst.vwxy", "KLMNOPQRSTUVWXabcdefghijklmnopqrstuv.xyz", "LMNOPQRSTUVWXabcdefghijklmnopqrstuvwx.zA", "MNOPQRSTUVWXabcdefghijklmnopqrstuvwxyz.B", "NOPQRSTUVWXabcdefghijklmnopqrstuvwxyzAB."};
    vector<int> queries = {1, 5, 35, 39};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    vector<string> roads = {".PPLDXRNEQIJHGDMREJXTKLJWLMSFPVAXDQKEFV", "P.PZEZQCYIXZLTJPXJQBXWQDEFTMIHQJWPPJEVJ", "PP.VLFWAEVBINAXNVPSPHBIBOGZHAKLRYUIHTKI", "LZV.DYERYIJWETIKZVFGJQQCGNVZWPWPRJXQFCM", "DELD.HPUYUTIKZNPSGLDMDAXIYCSSHUREGHXWQY", "XZFYH.WHPUNSSSRWOHSWQROLUMVIKJHRGLIOYVW", "RQWEPW.PUQSNXOUIFLSHAAVBIASDSFUPIONFQEH", "NCARUHP.LCPVPETJDGRNCGDIJXKHVABTHBZHLKF", "EYEYYPUL.ELJZUYOUYVOSZUSSDGJOXUGCTYMVAY", "QIVIUUQCE.JVQRHYMSGWXCIOFYDWSYCKDAVCSJC", "IXBJTNSPLJ.OTIKGQZFOAISEXLJLLUSJKCIJHAR", "JZIWISNVJVO.ULKTAKZXNMDZNBSXWBBYEAKBJME", "HLNEKSXPZQTU.AOMCEGCJCWCUEQXRMUWGGZDQFN", "GTATZSOEURILA.SYKYUMCBWMJGMTHHCHGMXMWOK", "DJXINRUTYHKKOS.ILXVESCOMQFZFKXWMOHFTSQI", "MPNKPWIJOYGTMYI.QUELHJCLZCXREGOLQOGDAJV", "RXVZSOFDUMQACKLQ.TOAPPXIZYTSAZWLLHHAYJY", "EJPVGHLGYSZKEYXUT.MUUUXVHMOUAYPTAUNAOEX", "JQSFLSSRVGFZGUVEOM.RYHJHAKDZHQDYXQZBQYP", "XBPGDWHNOWOXCMELAUR.EEHMIUNJPXSMPRKKPXU", "TXHJMQACSXANJCSHPUYE.CPMYSRTZESMSIRHIPU", "KWBQDRAGZCIMCBCJPUHEC.ANNMXHQXWXUJCEEPT", "LQIQAOVDUISDWWOCXXJHPA.UPBZHVCCGPRCEOBO", "JDBCXLBISOEZCMMLIVHMMNU.IJRMRLYIPHZIAQS", "WEOGIUIJSFXNUJQZZHAIYNPI.OCMGNCDRMCMKLZ", "LFGNYMAXDYLBEGFCYMKUSMBJO.UAXVTYNOWCOEE", "MTZVCVSKGDJSQMZXTODNRXZRCU.DEBFDUDTJZLK", "SMHZSIDHJWLXXTFRSUZJTHHMMAD.MNJFKPOXJQU", "FIAWSKSVOSLWRHKEAAHPZQVRGXEM.EKRSISSXSN", "PHKPHJFAXYUBMHXGZYQXEXCLNVBNE.OCQVFGYVF", "VQLWUHUBUCSBUCWOWPDSSWCYCTFJKO.YLOTWZNV", "AJRPRRPTGKJYWHMLLTYMMXGIDYDFRCY.XFQINIK", "XWYREGIHCDKEGGOQLAXPSUPPRNUKSQLX.MDGZSG", "DPUJGLOBTACAGMHOHUQRIJRHMODPIVOFM.ZLVNV", "QPIXHINZYVIKZXFGHNZKRCCZCWTOSFTQDZ.IQUC", "KJHQXOFHMCJBDMTDAABKHEEIMCJXSGWIGLI.XMZ", "EETFWYQLVSHJQWSAYOQPIEOAKOZJXYZNZVQX.CE", "FVKCQVEKAJAMFOQJJEYXPPBQLELQSVNISNUMC.F", "VJIMYWHFYCRENKIVYXPUUTOSZEKUNFVKGVCZEF."};
    vector<int> queries = {200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 249, 250};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 29, 5, 30, 4, 31, 6, 11, 7, 12, 6, 13, 7, 14, 6, 15, 7, 16, 6, 17, 7, 18, 6, 19, 7, 20, 6, 22, 7, 21, 6, 23, 7, 24, 6, 25, 7, 26, 6, 27, 7, 28, 6, 29, 7, 30, 6, 32, 33, 5};
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    vector<string> roads = {".a......z", "a.cabaddd", ".c.z.....", ".az......", ".b...z...", ".a..z....", ".d.....z.", ".d....z..", "zd......."};
    vector<int> queries = {1};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    vector<string> roads = {".bcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMN", "b.bcdefghijklmnopqrstuvwxyzABCDEFGHIJKLM", "cb.bcdefghijklmnopqrstuvwxyzABCDEFGHIJKL", "dcb.bcdefghijklmnopqrstuvwxyzABCDEFGHIJK", "edcb.bcdefghijklmnopqrstuvwxyzABCDEFGHIJ", "fedcb.bcdefghijklmnopqrstuvwxyzABCDEFGHI", "gfedcb.bcdefghijklmnopqrstuvwxyzABCDEFGH", "hgfedcb.bcdefghijklmnopqrstuvwxyzABCDEFG", "ihgfedcb.bcdefghijklmnopqrstuvwxyzABCDEF", "jihgfedcb.bcdefghijklmnopqrstuvwxyzABCDE", "kjihgfedcb.bcdefghijklmnopqrstuvwxyzABCD", "lkjihgfedcb.bcdefghijklmnopqrstuvwxyzABC", "mlkjihgfedcb.bcdefghijklmnopqrstuvwxyzAB", "nmlkjihgfedcb.bcdefghijklmnopqrstuvwxyzA", "onmlkjihgfedcb.bcdefghijklmnopqrstuvwxyz", "ponmlkjihgfedcb.bcdefghijklmnopqrstuvwxy", "qponmlkjihgfedcb.bcdefghijklmnopqrstuvwx", "rqponmlkjihgfedcb.bcdefghijklmnopqrstuvw", "srqponmlkjihgfedcb.bcdefghijklmnopqrstuv", "tsrqponmlkjihgfedcb.bcdefghijklmnopqrstu", "utsrqponmlkjihgfedcb.bcdefghijklmnopqrst", "vutsrqponmlkjihgfedcb.bcdefghijklmnopqrs", "wvutsrqponmlkjihgfedcb.bcdefghijklmnopqr", "xwvutsrqponmlkjihgfedcb.bcdefghijklmnopq", "yxwvutsrqponmlkjihgfedcb.bcdefghijklmnop", "zyxwvutsrqponmlkjihgfedcb.bcdefghijklmno", "Azyxwvutsrqponmlkjihgfedcb.bcdefghijklmn", "BAzyxwvutsrqponmlkjihgfedcb.bcdefghijklm", "CBAzyxwvutsrqponmlkjihgfedcb.bcdefghijkl", "DCBAzyxwvutsrqponmlkjihgfedcb.bcdefghijk", "EDCBAzyxwvutsrqponmlkjihgfedcb.bcdefghij", "FEDCBAzyxwvutsrqponmlkjihgfedcb.bcdefghi", "GFEDCBAzyxwvutsrqponmlkjihgfedcb.bcdefgh", "HGFEDCBAzyxwvutsrqponmlkjihgfedcb.bcdefg", "IHGFEDCBAzyxwvutsrqponmlkjihgfedcb.bcdef", "JIHGFEDCBAzyxwvutsrqponmlkjihgfedcb.bcde", "KJIHGFEDCBAzyxwvutsrqponmlkjihgfedcb.bcd", "LKJIHGFEDCBAzyxwvutsrqponmlkjihgfedcb.bc", "MLKJIHGFEDCBAzyxwvutsrqponmlkjihgfedcb.b", "NMLKJIHGFEDCBAzyxwvutsrqponmlkjihgfedcb."};
    vector<int> queries = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    vector<string> roads = {".FEEYKOABLPJDTNPOATBUURDCCGLMKREWEZQWYA", "F.FFEVKJZHZLCAKRGMFJGBPUZEZQHTAGWCWCTHA", "EF.XHAELCCSLYTDJVDZZIMIBZREFUKRJWDYTVSA", "EFX.WTTFNSHCZBMBLIOWXJXUZODXYYXCPWVYJGA", "YEHW.XLVFMKHJDBXIGTUWRIRBSYWFDSCZRIDSEA", "KVATX.YGWPLHEZPPEPCCTMQIFWYWYZVVSAJTJWA", "OKETLY.ULXJBEQPHXNJWBBFSKIHKQIKHQCGEBZA", "AJLFVGU.QOUFUSWODPTLVSLWQTNMGVHHMGFAAMA", "BZCNFWLQ.HGQHOEOZUNJTZDTDDGFACTREFUMOTA", "LHCSMPXOH.GMMEQHUUZFRTUBPPYXJUQJTMLDIGA", "PZSHKLJUGG.KSMTPZHXRESURQTCDQYDVOZLCOOA", "JLLCHHBFQMK.RUGKOGUIHSVEZPDYKPIBGKKJJNA", "DCYZJEEUHMSR.VJWSXGMBHECICRYCUHJEGJBLZA", "TATBDZQSOEMUV.OQRPLPBFOUKCUGKRETPIDPWLA", "NKDMBPPWEQTGJO.YKQSMCROYFLDMLFRSSPURHTA", "PRJBXPHOOHPKWQY.RNDYPOWKOIMDZMSQPDHHYJA", "OGVLIEXDZUZOSRKR.JSHXEQABFPCNBIDXFSTPHA", "AMDIGPNPUUHGXPQNJ.MCIFCBUKHAAIGJNOJNNGA", "TFZOTCJTNZXUGLSDSM.HFWUFCEMSYSBOVDAEVAA", "BJZWUCWLJFRIMPMYHCH.BSDCDLEZXGHOJKFGRUA", "UGIXWTBVTREHBBCPXIFB.JHVHJCSQEZTIJBYUHA", "UBMJRMBSZTSSHFROEFWSJ.NKTYKGKKJGUMTIINV", "RPIXIQFLDUUVEOOWQCUDHN.DHTOOQYZPPJLWHIV", "DUBURISWTBRECUYKABFCVKD.XITVORUKAQKXOHR", "CZZZBFKQDPQZIKFOBUCDHTHX.HRSYGJNLWMGSRI", "CEROSWITDPTPCCLIFKELJYTIH.WOZZXFYIFCWEV", "GZEDYYHNGYCDRUDMPHMECKOTRW.DWVMPYQQJKQU", "LQFXWWKMFXDYYGMDCASZSGOVSOD.MXMFNPRWIGY", "MHUYFYQGAJQKCKLZNAYXQKQOYZWM.DYYMUMLFJE", "KTKYDZIVCUYPURFMBISGEKYRGZVXD.SCKOYGYFE", "RARXSVKHTQDIHERSIGBHZJZUJXMMYS.GMQJRGWG", "EGJCCVHHRJVBJTSQDJOOTGPKNFPFYCG.NHFSTKF", "WWWPZSQMETOGEPSPXNVJIUPALYYNMKMN.IJMYJI", "ECDWRACGFMZKGIPDFODKJMJQWIQPUOQHI.NEDSV", "ZWYVIJGFULLKJDUHSJAFBTLKMFQRMYJFJN.AHMD", "QCTYDTEAMDCJBPRHTNEGYIWXGCJWLGRSMEA.ATR", "WTVJSJBAOIOJLWHYPNVRUIHOSWKIFYGTYDHA.PC", "YHSGEWZMTGONZLTJHGAUHNIHREQGJFWKJSMTP.Y", "AAAAAAAAAAAAAAAAAAAAAVVRIVUYEEGFIVDRCY."};
    vector<int> queries = {0, 1};
    LexSmallestTour* pObj = new LexSmallestTour();
    clock_t start = clock();
    vector<int> result = pObj->determineTour(roads, queries);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22692969&rd=14541&pm=10837
********************************************************************************
#include <iostream> 
#include <sstream> 
#include <string> 
#include <vector> 
#include <deque> 
#include <queue> 
#include <set> 
#include <map> 
#include <algorithm> 
#include <functional> 
#include <utility> 
#include <cmath> 
#include <cstdlib> 
#include <ctime> 
 
using namespace std; 
 
#define REP(i,n) for((i)=0;(i)<(int)(n);(i)++) 
 
int N,M; 
int graph[50][50]; 
int deg[50],deg2[50][60]; 
bool used[50][50],used2[50]; 
int ans[1000]; 
 
class LexSmallestTour{ 
  public: 
   
  void dfs(int x){ 
    int i; 
     
    if(used2[x]) return; 
    used2[x] = true; 
     
    REP(i,N) if(graph[x][i] != -1){ 
      used[x][i] = true; 
      dfs(i); 
    } 
  } 
   
  bool check(int x, int e){ 
    int i,j; 
     
    REP(i,N) deg[i] = 0; 
    REP(i,N) REP(j,N) if(graph[i][j] != -1) deg[i]++; 
    REP(i,N) REP(j,52) deg2[i][j] = 0; 
    REP(i,N) REP(j,N) if(graph[i][j] != -1) deg2[i][graph[i][j]]++; 
     
    if(e == -1) REP(i,N) if(deg[i] % 2 == 1) return false; 
     
    deg[x]++; 
    if(e != -1) deg2[x][e]++; 
    REP(i,N) REP(j,52) if(deg2[i][j] * 2 >= deg[i] + 2) return false; 
     
    REP(i,N) REP(j,N) used[i][j] = false; 
    REP(i,N) used2[i] = false; 
    dfs(x); 
    REP(i,N) REP(j,N) if(!used[i][j] && graph[i][j] != -1) return false; 
     
    return true; 
  } 
   
  void calc(void){ 
    int iter,y; 
     
    int x = 0, e = -1; 
    ans[0] = 0; 
     
    REP(iter,M){ 
      REP(y,N) if(graph[x][y] != -1 && graph[x][y] != e){ 
        int e2 = graph[x][y]; 
        graph[x][y] = graph[y][x] = -1; 
        if(check(y,e2)){ 
          ans[iter+1] = y; x = y; e = e2; 
          break; 
        } else { 
          graph[x][y] = graph[y][x] = e2; 
        } 
      } 
    } 
  } 
 
  vector <int> determineTour(vector <string> roads, vector <int> queries){ 
    int i,j; 
     
    N = roads.size(); 
    REP(i,N) REP(j,N){ 
      graph[i][j] = -1; 
      char ch = roads[i][j]; 
      if(ch >= 'A' && ch <= 'Z') graph[i][j] = ch - 'A'; 
      if(ch >= 'a' && ch <= 'z') graph[i][j] = ch - 'a' + 26; 
      if(i < j && graph[i][j] != -1) M++; 
    } 
     
    vector <int> empty; 
    if(!check(0,-1)) return empty; 
     
    calc(); 
     
    vector <int> v; 
    REP(i,queries.size()) v.push_back(ans[queries[i]]); 
    return v; 
  } 
 
}; 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/