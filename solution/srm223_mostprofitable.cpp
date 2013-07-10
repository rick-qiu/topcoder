/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1774
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

class MostProfitable {
public:
    string bestItem(vector<int> costs, vector<int> prices, vector<int> sales, vector<string> items);
};

string MostProfitable::bestItem(vector<int> costs, vector<int> prices, vector<int> sales, vector<string> items) {
    string ret;
    return ret;
}


int test0() {
    vector<int> costs = {100, 120, 150, 1000};
    vector<int> prices = {110, 110, 200, 2000};
    vector<int> sales = {20, 100, 50, 3};
    vector<string> items = {"Video Card", "256M Mem", "CPU/Mobo combo", "Complete machine"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "Complete machine";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> costs = {100};
    vector<int> prices = {100};
    vector<int> sales = {134};
    vector<string> items = {"Service, at cost"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> costs = {38, 24};
    vector<int> prices = {37, 23};
    vector<int> sales = {1000, 643};
    vector<string> items = {"Letter", "Postcard"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> costs = {10, 10};
    vector<int> prices = {11, 12};
    vector<int> sales = {2, 1};
    vector<string> items = {"A", "B"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "A";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> costs = {878459, 750282};
    vector<int> prices = {277124, 528757};
    vector<int> sales = {996, 568};
    vector<string> items = {"y%nhjiyy$xU`Z", "D$zN,|>DEPl4Lz&L0.)K0r"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> costs = {676123, 215679, 117635, 794437, 71651, 89143, 591537, 466872, 347775, 4416, 443612, 411697, 183332, 829173, 110696, 472136, 746663, 254863, 440472, 719699, 103998, 875762, 493616, 49314, 537438, 448443, 445641, 244496, 394590, 928115, 782688, 826456, 303726, 432570, 354935, 834653, 186885, 459610, 898997, 892007};
    vector<int> prices = {112140, 333608, 570805, 565244, 54050, 523981, 487982, 782740, 210621, 718444, 951514, 71768, 706695, 284658, 398383, 262335, 114428, 386031, 486734, 550786, 80088, 512311, 344860, 831332, 404202, 206310, 638576, 28009, 119189, 529817, 508095, 448873, 443741, 325747, 805183, 25957, 583781, 840206, 582140, 661180};
    vector<int> sales = {274, 835, 700, 166, 873, 583, 372, 570, 847, 221, 857, 62, 580, 391, 137, 782, 705, 314, 290, 226, 234, 223, 411, 81, 146, 378, 121, 440, 952, 220, 930, 251, 626, 714, 912, 195, 324, 511, 620, 541};
    vector<string> items = {"^F4", "+CF>", "Zj:y", "bLW", "V,U0qiBe_=", "p[q@#Hkn~*", ";-X^PKxzN", "K>dMP%lB#`g2>7na", "!P@S<]p9Qy1I6QW:f;", "n g6&u<*/", "GQnh!W", "V^PS6FQ,Jd~#d", "}|dZ3~g";
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "GQnh!W";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> costs = {805138, 596661, 500214, 412002, 204528, 268983, 406117, 492439, 12606, 616127, 497793, 131306, 604329, 61971, 817584, 785390, 670094};
    vector<int> prices = {659380, 618599, 633647, 918646, 27273, 536739, 649541, 20061, 142758, 158287, 965293, 176039, 166652, 716130, 770247, 910861, 887611};
    vector<int> sales = {124, 883, 744, 339, 293, 180, 747, 797, 193, 360, 257, 218, 566, 279, 430, 811, 840};
    vector<string> items = {"+a*/m%;t(@", "{pl>SOb{y", "7yQe", "m"]P`*%", "`)|=C `>({-f$UPY2:.n$", ":vkInz,X", "g^i}tPBajiYK$jZ6t", "L<lqj)X>vw", "p=nU0/", "G2P)lQXZNo'hr%", "uDN^6]Y", "*87*f\QIZQ", "WydI&TcSD`\X@V}-zu", "22D'D71:?Z~(661", "spDn-rNfG", ">sX", "uhoe'FJ2y00"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "uhoe'FJ2y00";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> costs = {572973, 190577, 467411, 698662, 829006, 859833, 838692, 586006, 138198, 685601, 354516, 114266, 413070, 364472, 385975, 581118, 853292, 638718, 67896, 597161, 764005, 299541, 583508, 339214, 944463, 818335, 620385};
    vector<int> prices = {806801, 10908, 466819, 110659, 806615, 611446, 790289, 574446, 741537, 369712, 56806, 238965, 756039, 470811, 256561, 868355, 351289, 273551, 885828, 231528, 643001, 663017, 793667, 466717, 695542, 617425, 85483};
    vector<int> sales = {811, 972, 923, 139, 538, 721, 329, 142, 405, 172, 590, 531, 536, 812, 140, 364, 479, 267, 811, 21, 695, 4, 757, 405, 886, 588, 135};
    vector<string> items = {"gX?z", "y+@!?", "deG2-~g_d", "gE,MIT&", "cRT;&z4", ",$]o", " LB &-r", "u VV##~", "*&+_xR_", "NQ"wCC`/9O%57~h", "8QGtky_0+B:b=)Otdr", "&", "!,ThFjk&z_", "JG#1PLd,_]9S<.", "B0`'i[Sk&OkT;D<{@", "D]pv&[`d.2>,88W", "jR9#H", "FVC2r", "/(Usn]a", "3'@29su9JPo.'g/$ClsY", " O)?B>I1X:=k^7jpp'u", "yDe~uEKr", "xWt(t9]8", "syc@j*)0{8^O104+", "C=Q|3TO|>M6^95sD", "0YWn^RQ", "";LhdP@9rh67566mTR"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "/(Usn]a";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> costs = {942490, 977251, 943808, 840430, 188369, 867873, 662037, 197320, 559936, 312232, 74255, 671384, 476417, 649968, 983561, 707443, 738749, 968290, 953798, 552094, 31074, 227281, 564929, 574246, 12276};
    vector<int> prices = {485006, 333594, 517350, 289785, 545681, 915615, 593266, 718911, 396341, 977677, 848727, 600229, 828005, 836878, 727379, 834627, 577426, 146201, 478497, 124802, 182343, 530075, 334390, 428342, 324507};
    vector<int> sales = {825, 632, 246, 221, 318, 683, 322, 204, 994, 556, 733, 688, 970, 658, 304, 147, 407, 151, 999, 590, 776, 773, 690, 951, 452};
    vector<string> items = {"vBt@\B+\R#(0s0Kvm", "1E%", "sW6Y#{]KbZ%2ixN ", " 5?y`=f$9)", "TutiFE(L,x.&uIB", "Y-az,V= a_C,Q", "p#!Bz7<f3a&\*al;t&=P", "~jx*:1Q51_7", "!\oX~8;X#@a8;", "6v}+2Vi!:$hKf3cBNZ[", "t", "Bah#T", "poto*aC", "nTg`>1nN({>3", "!8+cJ9q7,g", "ik/mc:i\B-z+`B9lm", "CZcT7", "0%wyNkw{UkN+^74:,LlI!9yg/l=VMi4CLb", "\&@", "Y_RB.l\Mnnx&H@U_dT`", "(*Ng2&M1MM", "q*V6Zhu)e|!!", ":RF7->l|abzkPM%Vanc9%[]fnz{%+VQf2H/}i", "/B1uj$\w!:2(PFc/RvO?W0", "sK|"Ia?@](YSQ%0a1"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "t";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> costs = {162849, 447311, 213236, 171364, 68238, 930279, 755995, 187755, 647610, 776954, 42368, 11997, 562918, 3339, 462918, 669453, 43765, 641853, 519929, 517177, 369301, 570141, 613695, 228259, 838229, 479691, 352208, 171257, 484078, 250473, 235714, 514981, 208518, 37470, 475901, 921598, 327894};
    vector<int> prices = {12794, 435993, 721581, 782504, 593892, 491526, 481458, 476937, 966426, 443691, 873263, 895367, 728187, 259240, 65733, 846334, 627627, 183176, 837171, 954358, 811488, 772618, 549317, 622532, 89871, 773764, 980360, 125662, 894434, 644352, 887163, 366391, 250316, 132412, 478807, 577426, 242108};
    vector<int> sales = {684, 501, 633, 705, 618, 359, 250, 650, 115, 114, 473, 504, 156, 208, 234, 686, 636, 192, 60, 937, 953, 579, 705, 906, 415, 969, 168, 219, 171, 243, 123, 892, 796, 208, 125, 813, 783};
    vector<string> items = {"RgOA=", "&%?LR", "qH&Mid{"A}:/^"#'V+2", "AA4=A5 J_@vM^", "RQg##C", "B<jK,=,h@kQ'rjox", "\UZ,[|+x>N", "N//.At[HVndWU2S8"7ocV8#z[", "A=uUwGW;i_+%RH OAO", "bdRX=[.", "HbVFR~(*s=NH'75'", "kjBP`(%]eWHFb", "[e>^(1=", "~KxCQYUNq/j^o`", "~R?n.b", "5$]:zQ9", "dy", "%:]e0C3(aL|6Q]", "'q Z>z>Uc{9m", "2C^]%aw^/=hKSppe", "]Mmi4N=iBqwfDW", "%QaU<(<O<\L`OUX/'3c(Q", "c<2NZO", "FWh", "CHIQN?N0|Q", "A&X6#u)x", "(hcut>q4mnF/Yo{", "uo:jqv", "oNj%f", "Xn;JG&a8KR", "Z&Mw:~e1! [)Ia)", "`1k`0F&8?", "P<|Jhu 7z<", "~wQ;X", "'zN", "2r/ld5%!a_z", "<sDX1C<"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "kjBP`(%]eWHFb";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> costs = {698246, 673015, 674702, 694503, 582483, 159292, 893674, 191496, 41036, 673839, 400911, 156220, 465654};
    vector<int> prices = {129760, 85023, 866452, 705854, 830618, 838644, 161753, 279782, 591344, 182537, 604318, 478328, 736668};
    vector<int> sales = {514, 551, 242, 821, 207, 65, 657, 870, 259, 80, 827, 533, 985};
    vector<string> items = {"Po)s"i", "@?`w/5n_p1ZHb|dVb~Tg", "ch]", "a", "!G AcREgR?9GP7zd[y:i$", ";L"U#jW/{@OL!ee4ovLSuG"go/+LpCgh#I$vrp]", "%\7P", "~^<(c,axW8b3d>S"Ht", "~5b3'!I", "S'Ez4&ImH?Zb", "k,cAo1", "'&%?8Wqn4W3", "{ON)_z`]43Y2A$"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "{ON)_z`]43Y2A$";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> costs = {625269, 783003, 459932, 25, 340664, 386789, 20703, 165365, 444656, 654706, 471199, 878867, 312784};
    vector<int> prices = {115677, 144059, 470478, 34533, 120701, 220484, 723374, 585253, 172658, 565205, 891688, 376358, 706770};
    vector<int> sales = {649, 169, 296, 775, 935, 974, 121, 843, 133, 335, 995, 651, 687};
    vector<string> items = {"UY|O|I\tM}zD6S"V|tp*t=/KC";
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "*q]D(Hw)";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> costs = {34170, 911715, 383623, 28825, 629525, 261928, 917979, 529388, 969166, 162096, 869472, 263309, 932268, 727610, 49608, 731550, 929235, 257212, 74586, 303790, 734093, 939778, 995982, 817868, 344469, 208861, 660428, 35798, 424384, 709239, 816952, 54206, 420726, 640884, 771926, 523957, 283765, 928031, 423344, 265054, 97169, 386959, 622878, 283416};
    vector<int> prices = {926500, 735874, 262936, 100884, 163520, 46531, 714863, 903920, 486256, 816372, 331925, 825669, 759239, 792861, 167008, 238460, 657534, 66201, 439367, 47281, 496094, 270853, 452782, 415963, 398388, 638747, 774692, 550933, 8517, 372159, 243935, 201903, 75639, 618534, 7148, 690336, 811584, 788448, 663804, 300529, 365301, 694602, 743611, 896309};
    vector<int> sales = {299, 81, 461, 243, 418, 921, 97, 57, 504, 127, 53, 435, 66, 844, 227, 747, 441, 370, 858, 134, 890, 535, 208, 961, 844, 447, 639, 35, 720, 203, 544, 584, 697, 487, 709, 162, 118, 705, 691, 448, 541, 529, 239, 918};
    vector<string> items = {""va4m43')>", "1R8<Y4I`p&8'ed", "6\}1b8_pQ;";
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "l,\x'(=ML9S*By";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> costs = {552881, 435593, 671134, 147582, 735492, 577052, 9500};
    vector<int> prices = {865611, 430978, 739753, 337617, 543878, 996841, 330070};
    vector<int> sales = {108, 780, 227, 841, 348, 842, 823};
    vector<string> items = {"s(^Lk8", "mit>jc}b^4";
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "SXlO%:pRnqg";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> costs = {226221, 847293, 484307, 329596, 11032, 599981, 754779, 850669, 471803, 545711, 58212, 32397, 265012, 145499, 294279, 349736, 597147, 970278, 78575, 36682, 949212, 896846, 511285, 743828, 780633, 628466, 652610, 443308, 321727, 798206, 897299};
    vector<int> prices = {893985, 713305, 473931, 517846, 645563, 896588, 662293, 520274, 387521, 222942, 741283, 177395, 656854, 759696, 127779, 217305, 184349, 885452, 178514, 759746, 103934, 459517, 771619, 166050, 348075, 44464, 141954, 888659, 707086, 972425, 510127};
    vector<int> sales = {263, 618, 341, 226, 459, 707, 536, 838, 54, 149, 379, 261, 979, 935, 389, 902, 551, 534, 169, 126, 683, 997, 747, 961, 137, 780, 714, 225, 447, 830, 162};
    vector<string> items = {"w"c}@6LE GW";
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "B..?i37TuXUm>^}YB >#D$-Gn";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> costs = {360291, 362605, 535026, 636237, 293723, 831087, 711769, 664742, 550765, 295753, 57799, 709686, 515867, 787571, 569152, 80887, 858001, 391711, 137879, 194688, 736366, 571756, 773405, 102840, 475300, 333851, 731920, 104731, 473540, 611208, 139525, 188624, 355982, 801123, 697230, 567385, 729927, 512813, 680845, 695012, 234485, 539573};
    vector<int> prices = {256210, 631484, 639960, 83660, 296872, 224609, 69676, 365798, 51625, 146986, 922675, 40188, 513100, 954483, 793739, 619659, 213029, 907736, 510879, 840090, 212177, 996993, 359061, 310032, 744224, 984473, 465259, 512118, 487514, 861809, 301695, 300489, 657230, 270292, 804967, 592478, 890433, 418869, 962172, 730385, 690572, 928914};
    vector<int> sales = {280, 351, 391, 220, 703, 94, 779, 895, 114, 149, 38, 192, 838, 256, 370, 707, 198, 71, 929, 574, 715, 235, 965, 734, 349, 392, 44, 919, 754, 623, 347, 670, 139, 463, 180, 450, 830, 362, 332, 530, 338, 569};
    vector<string> items = {"e{s>;qAiLN(m.\n", "T=R$;", "H$E*-c@IW8Q[E R2", "c'q)4@J", ">W T(xEvd3", "3+H@", "HTl9y", "jY~lE8 +", "`uQi", "`v2BBvj`H>1ej/=) Rays[", "P_8\_^ r `[Zu", "Io==FG", "G~|LpnM8|Q|F%]<y@(Cun0", "88W8dU ylCRWM,+\", "dhxxh", ".a9(A`k4P", "}6(8)Q1n7", "Ygg/E", "NnS(OjC!&o,", "XJ;a8&u", "gWxTauZ/0KgP3c", " \HSEDK"x-\d03DD,tk", "mU!Xbf", "flxxcH:^<W", "Fg<F,l,,E#Q?6c/pJT}FV";
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = ".a9(A`k4P";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> costs = {271111, 44144, 86783, 64631, 427757, 906906, 94381, 781621, 481377, 530955, 373240, 211840, 568485};
    vector<int> prices = {319361, 427572, 994791, 801540, 943809, 690740, 2310, 845828, 786301, 317948, 480826, 285191, 844291};
    vector<int> sales = {427, 70, 583, 799, 26, 950, 430, 630, 546, 476, 213, 333, 866};
    vector<string> items = {"U{0b'Zv*"rcT\5pUSI.", "FL-aTz5N", "D{vv.J", "M,FTJ:Q= q:U#", "(@b>^H", "?\uO", "v!E5Y", "s.Fe\Y9!aOO", "F{285=|H^qyJC", "XXsi}'3#^r|R27@d", "R]Vr|mw)Noz", ":YT08%n", "n}\hm^QpU}"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "M,FTJ:Q= q:U#";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> costs = {236937, 197897, 779314, 798377, 751171, 801173, 664866, 130071, 197908};
    vector<int> prices = {287466, 947884, 818143, 426049, 69863, 139106, 697338, 300959, 183133};
    vector<int> sales = {939, 298, 141, 619, 969, 865, 213, 103, 364};
    vector<string> items = {"}hR0kSEi!(Q;
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "LF}d#qPUoJ)e1T&pM[iBYwV";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> costs = {187798, 93989, 626002, 769086, 589221, 149165, 97957, 807285, 772815, 669831, 244196, 768151, 677587, 868497, 174495, 771062, 838833, 255864, 168143, 797573, 141342, 484960, 97001, 285499, 677667};
    vector<int> prices = {513224, 318554, 111717, 814980, 274282, 186393, 856263, 375713, 226060, 999315, 921738, 245768, 198441, 657793, 259623, 373081, 834602, 38660, 987730, 428045, 233325, 434281, 350218, 817403, 611500};
    vector<int> sales = {604, 877, 941, 778, 383, 317, 193, 255, 125, 107, 611, 454, 382, 245, 882, 386, 664, 407, 263, 840, 965, 226, 727, 84, 197};
    vector<string> items = {"qmY%{%u*fJaX'J"V{", ",FbhwS K", ",^CT%V~Av+Q6G", "{5fW{D,waS$r|c%h", "vl'L1;yZXA]o5)e&", "_6t3s", "Pd="epD_+,]{^]$#[YyumiNF=", " 2?", ">)SQ", "M%<KJofvjf", "aw1Y^ GTf", "sQ J", "=dls*"eDo?s^&)~:5J<[@:", "[9F]il?[2{N/", "VNkY??F,KC*:KPzGxB", "8XOwfE", "hNQl"T9x:>)jG2", "2CHo`zT5", "fNS]06vu#- 5p\", "!$_AYqae0QDbc,{2l", "_}(C<~*6op/#]}R[)`~", "u+7uc0U.6nzE7fR3:87x", "2rj,Qy}L+i%eL~/'eFO|*$Vb4", "qmb<E3w%8v", "[ 4d"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "aw1Y^ GTf";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> costs = {656185, 936560, 893802, 450850, 736955, 41157, 850843, 52517, 572169, 328602, 761771, 49129, 823003, 205046, 632449, 607818, 468082, 560184};
    vector<int> prices = {345614, 829925, 816585, 763020, 881741, 641811, 373402, 693903, 312477, 848908, 452710, 408349, 506130, 12442, 198526, 905174, 735265, 986839};
    vector<int> sales = {191, 716, 793, 576, 318, 758, 330, 359, 855, 56, 864, 68, 451, 266, 277, 143, 469, 579};
    vector<string> items = {"Vk%B,VCK"WnQRE", ",t{E(d_GOfI", "\K<ta)gj", "DfjU}^4", "V`zCTI^;p2$HbdmO", "s F(5&*Hl&oU*v::1A", "&6%iTl~&znwi!"fl|&S_ky%zj8", "IdK%2\$2IVpR<mcvgz", "Ow)tA*GNZ?I\T-B_(C"g1:", "~RzojSSz7jZ", "0<S0aCa:v8cmPEy", "-&vTX3o\rK."OD@p?*>'KaJ.?", "kT9x|", "Ocy:%"2_", "X{7.t", "+8OLUd[{VPQW", "(=jwf~DM", ">Cs~rF7Rqg{!;!;"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "s F(5&*Hl&oU*v::1A";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> costs = {92304, 397522, 415669, 460051, 940040, 249231, 998917, 272638, 399143, 756708, 143244, 718970, 955283, 63112, 359167, 784717};
    vector<int> prices = {604117, 394031, 872327, 414797, 546402, 774071, 563848, 324078, 554031, 956865, 895439, 171607, 272828, 230733, 594536, 990564};
    vector<int> sales = {813, 893, 126, 411, 239, 891, 867, 863, 621, 438, 185, 407, 926, 324, 549, 462};
    vector<string> items = {")rKbX\b)*V*", "E5D/<Ca+X*eU]|GNg91dk", "K.a]7{{soq$*+1", ":leg9SJqIs^wvT", ")d@1t2", "K7^Nm;t.w&yqT_ 3MI0:Nlp", "cbA]SD>*iXjU#xywLR5", "3HN!>&HZu&h0K2Lu$3", "*67ql", ",a*;PIyoV^0pH}9&6C|hc@mdV", "a`.-[qb8", "ptZrp}k", "RU*", "KIYY;qAri1t4jsZ", "1-;FXP.[i@7%;tUIjB", "bTI&\UeA|Vv-Kr(}MZ"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "K7^Nm;t.w&yqT_ 3MI0:Nlp";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> costs = {90051, 765616, 911427, 463959, 150339, 670515, 149908};
    vector<int> prices = {944515, 218995, 454137, 277766, 987029, 701773, 379956};
    vector<int> sales = {298, 860, 252, 789, 80, 322, 726};
    vector<string> items = {"^YXUAYyGMit~k", "^Dca4E1", "+jFse2(G", "[S1qF~VA&Adg", "Y3r", "%LEg-Dr_9C%)", "@{OfAJ"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "^YXUAYyGMit~k";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> costs = {573481, 615907, 937724, 223799, 656284, 37349, 788720, 576942, 818356, 499442, 191020, 733678, 272604, 454396, 910484, 484285, 937366, 63778, 214875, 851906, 5611, 505925, 976080, 915583, 513759, 741964, 566737, 409016, 796932, 513434, 943457, 782819, 582744, 355518, 143320, 176443, 78333, 601212, 243470, 113392, 433847, 91654, 666919};
    vector<int> prices = {797014, 976013, 366143, 776430, 319289, 147463, 205888, 897674, 934408, 43414, 167060, 38329, 578185, 368169, 859373, 714954, 479428, 526886, 688244, 2678, 702436, 593351, 371683, 460672, 790808, 737510, 431627, 59366, 730889, 518030, 73298, 60405, 169236, 175733, 298367, 43275, 775133, 571885, 82300, 350766, 602506, 693082, 803863};
    vector<int> sales = {723, 589, 595, 381, 481, 205, 103, 575, 951, 526, 402, 916, 62, 61, 50, 923, 927, 802, 178, 883, 194, 48, 47, 931, 960, 153, 826, 576, 173, 929, 311, 853, 221, 419, 95, 966, 436, 845, 216, 383, 230, 378, 88};
    vector<string> items = {"dqEU6sR 7;CVV;HRrI", "MC!", "UOroO6-A3zXI;@", "/R2B&\R]]g],0", "Df^`6aC<E%zd_D)V", "3|u&^e-7$wT4n2 ~2", "p7.H^umfDwB1OS", "8{A7", "Hbed!W", "qVc*+kF&B\u`lN", "aRUF$^Y7+ D`1&", "H$Q^27~j-J|81&", "n+:(Dj,Y*RkR>P*qd", "@w@2b&1=Q"X($7S8$<XJvV", "_:GA&", "A?*L`M3+s-xC", "@kf^(oMwHix", "pK4?fZTCe8Y*yB|6{0f", "4rMX!`^4", ";Lr4UVfw", "2iJkYFLQ'Sl$b#tz", "q)n6G ;R", "ly:mwqiz", "MVC#,u"b-", "3ji0^juk:", "UMgNu(Y2>?B)urFrdtCd", ":i/Ff5C?", "co'sm", "$3P+qbx", "\Hn>9", "XG_Xkc", "P{*-", "-n_K=(n<H.]Rm_", "X2mNeObzySKnR/]", ";`w32(lT", "#j/Ih79;<6!h-", "83QLox?<", "@aeh7z0wvts"v|", "F>_O'*"^S%CRSz1i#s", "J`%A^R", "3,@Gr<y?#", "RWbO+W9>x", ",k26fbB"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "pK4?fZTCe8Y*yB|6{0f";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> costs = {224317, 334252, 642784, 708329, 195364, 625070, 185963, 77485, 408201, 144751};
    vector<int> prices = {982511, 660454, 428013, 833933, 645798, 481482, 329531, 213130, 257301, 734580};
    vector<int> sales = {167, 345, 595, 406, 444, 57, 310, 972, 190, 100};
    vector<string> items = {"OTkn>A*", "<}wbDvgls4w";
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "ck#$:ki";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> costs = {788250};
    vector<int> prices = {945450};
    vector<int> sales = {284};
    vector<string> items = {"I(z!l{?p{["};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "I(z!l{?p{[";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> costs = {706361, 117509, 383195, 513187, 854339, 602786, 843578, 447434, 733205, 619450, 623064, 237411, 137453, 442512};
    vector<int> prices = {907709, 948243, 283872, 401393, 148553, 49087, 335991, 832112, 200324, 122099, 405448, 15844, 685625, 936986};
    vector<int> sales = {632, 413, 852, 211, 787, 229, 860, 754, 796, 115, 970, 338, 992, 612};
    vector<string> items = {"4hH.z-cV|27*FD]ho+k", ">H\pR$Skpfj-~;R70!m}P0mF";
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "8fQw%9poY>IK";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> costs = {159057, 713921, 400994, 827915, 349183, 733281, 801100, 286362, 213213, 1656, 834512, 995129, 118438, 42288, 917187, 543591, 137744, 607211, 750211, 31599, 215554, 639731, 675985, 856744, 779040, 425219, 527201, 910711, 790024, 751713, 745242, 59721, 650929, 683037, 2335, 140286, 398066, 453792, 146183, 147157, 833863, 517316, 395953, 169691, 563812, 731200, 158548, 632314, 824382, 726500};
    vector<int> prices = {482657, 143853, 92304, 224156, 317619, 838455, 963737, 106793, 55476, 418471, 33256, 478263, 193130, 755581, 256214, 693347, 127688, 351397, 319907, 879669, 545475, 694220, 22078, 48249, 938465, 189805, 940785, 254207, 525086, 725481, 609490, 971109, 567411, 731690, 496764, 360154, 355992, 501872, 928323, 265722, 456563, 135903, 627802, 637862, 201637, 101777, 804670, 60835, 211482, 25939};
    vector<int> sales = {883, 436, 507, 381, 457, 532, 689, 63, 496, 416, 829, 871, 234, 798, 197, 921, 749, 150, 758, 686, 898, 441, 618, 254, 502, 750, 947, 283, 140, 723, 738, 987, 463, 426, 270, 271, 154, 409, 487, 395, 334, 160, 654, 682, 492, 492, 728, 111, 752, 732};
    vector<string> items = {"MMl?S1OzA Nci8", "1}LW)`c9j:^";
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "`2-`0rUy{`(}{9Yc>DQ+";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> costs = {681646, 421799, 425068, 984669, 137768, 773742};
    vector<int> prices = {882297, 555844, 72627, 300188, 656749, 554889};
    vector<int> sales = {479, 661, 800, 208, 832, 929};
    vector<string> items = {"JR7m:p~H>!;={dq", "K>.[$Et7#+3k#*o", "YBUbSFnO`", "a^OMzw> {\X$b", ""ZgY_ 8>4i", "vPX/@&^""};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = ""ZgY_ 8>4i";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> costs = {218938, 747375, 21641, 112742};
    vector<int> prices = {711839, 634654, 248544, 927964};
    vector<int> sales = {489, 117, 561, 381};
    vector<string> items = {"9qe1R,uE: _jDL2Hnl<", "6(\e-0jX /GJvjla", "Kb|$jO.kr(dbo% K7nFB", "sCuar)'Go}kN<"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "sCuar)'Go}kN<";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> costs = {648989, 750262, 718363, 209477, 506196, 136237, 534576, 929956, 202650, 614466, 30770, 779162, 326177, 934941, 562700, 909005, 846252, 632464, 193508, 723235, 284066, 395718, 765510, 802652, 656105, 52560, 891234, 312628, 294286, 389835, 424884, 922263, 103245, 449149, 102557, 531633, 29628, 545340, 149782, 996606, 454200, 484508, 771442, 921754, 203428, 134460};
    vector<int> prices = {6754, 117803, 229414, 877064, 34537, 620118, 470151, 688883, 892796, 43256, 757027, 930096, 604284, 35839, 61944, 665646, 709520, 749345, 440458, 848317, 993438, 763952, 715670, 747157, 827402, 388827, 645555, 153774, 708085, 219223, 455549, 76506, 690405, 684904, 772823, 429750, 613828, 12170, 140906, 76186, 228634, 770206, 894893, 795458, 21904, 743737};
    vector<int> sales = {846, 893, 569, 459, 576, 527, 257, 431, 189, 591, 456, 351, 721, 841, 640, 753, 295, 278, 278, 590, 329, 842, 733, 965, 268, 933, 368, 217, 397, 811, 829, 58, 595, 951, 174, 322, 255, 824, 958, 174, 637, 740, 951, 229, 180, 36};
    vector<string> items = {";Y0G", "Z1!EVXgZ;dX;V d|H dX0AB78", "pRGcc6O'g-'nUOt", "LQpr^n\", "tRmm.;`1?F9", "QCjP?L0~;u4*2(B", "a:&)", "b(-=N:A7|g]4OTo[@%K", "x#hWsgV('P-E\.)<5`k3", "Gc%xLq/<nTmc>", "1<c(gk(icMlMpL+a;=", "4)VAUj^jf{:E0t9t", "'=zwB;6*PQ2E", "ZJoxa&X7%yRcp", "ay|8,+[&k?", "z]"QWDr@p?gi", "UlDH(j1D", "-)[Y9?UXQ/@", "#daQWo[4^_7X|O:6N1Q.W", "oy<>Vp4fQXE&L@", "\Xk}!8!5Ic!d<A*(\", ">ho_L6!X=c5A/?`&h", "c=Mh1a:", "!E@p6", "5],+xqr8", "RE I%[l?$3xv;V_#(", "*HwukC:@]|5NY", "v&X6@VW;/krjcMx0", "|b(f/s", "1,4@F&"hT", "}|8JzB:*QT.j|vEte<c3h&o";
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = ",1|";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> costs = {595453, 664060, 519886, 544210, 491614, 832317, 883833, 124336, 891543, 277426, 337332, 448533, 11187, 394351, 552268, 455429, 527500, 402913, 190609, 132649, 45560, 473526, 488448, 707703, 758249, 439725, 452463, 568558, 506814, 699333, 218507, 402667};
    vector<int> prices = {603493, 968177, 109072, 424726, 184397, 891938, 820688, 379008, 708258, 480290, 29120, 318685, 664779, 402468, 8599, 740685, 108918, 734226, 594372, 578626, 545660, 651599, 182716, 932087, 854175, 398543, 577994, 557111, 497181, 421633, 536220, 568008};
    vector<int> sales = {388, 945, 765, 856, 495, 830, 708, 908, 861, 976, 3, 53, 876, 749, 213, 302, 638, 517, 835, 103, 299, 901, 655, 701, 607, 516, 146, 927, 452, 202, 81, 457};
    vector<string> items = {"`]?,>Zcl+3|}EM9;jnU";
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "1U";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> costs = {454456, 718106, 797028, 270836, 21234, 267449, 361061, 921065, 222454, 504782};
    vector<int> prices = {526077, 629193, 940523, 734348, 63620, 429828, 452653, 93560, 868193, 503963};
    vector<int> sales = {284, 743, 603, 621, 668, 49, 393, 945, 871, 437};
    vector<string> items = {"k.NGDCG'5\%wkAD|Sb5]", "#$eyN;d;AQvs9k", "RW<~f{]A>qu8bw1~", "y58?_KNo5", "S6@kbSxm]bT", "ql07", "=Z0a", "Y`+buzD-+3", "I>8q86=v4DFu@G2"", "@|I_?cX"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "I>8q86=v4DFu@G2"";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> costs = {340917, 26065, 831667, 189455, 163396, 785302, 868626, 51922, 388057, 83510, 534668, 945437, 92313, 254977, 390009, 827577, 135986, 674055, 164960, 702867, 519245, 552230, 5513, 2263, 2669, 901770, 650653, 147036, 753106, 873479, 30528, 672903, 609431, 889223, 862827, 678672, 282909, 192386, 654945, 943449, 115733, 668092, 583222, 807076};
    vector<int> prices = {973435, 414698, 538822, 972400, 21394, 219596, 324826, 904800, 806812, 337242, 795622, 526289, 690668, 687135, 243410, 64319, 194124, 875829, 404071, 643274, 14452, 352227, 491038, 651032, 382181, 132396, 567451, 899296, 107002, 997260, 818479, 689689, 389385, 38938, 85460, 141338, 536614, 820681, 502593, 203606, 250940, 815195, 68225, 218639};
    vector<int> sales = {840, 228, 337, 157, 366, 380, 598, 596, 771, 10, 818, 85, 405, 664, 114, 445, 279, 793, 86, 976, 941, 372, 579, 974, 483, 805, 244, 235, 843, 792, 593, 382, 443, 170, 384, 638, 74, 107, 79, 639, 967, 803, 675, 34};
    vector<string> items = {"b-{b>ZqN&\9D?Bap^e5", "circktPJ74Gy", "LeEG-Ww", "OU+fo:Xc)R;n", "UOK'cA6.`D}|6(", "rvzF)~[iR\s", "/;UZ(Is|0pNxzGq~5", "FUF8<Y3(1p}Y;~c Lf.";
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "mG,K/VUZgGAI.\)B";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> costs = {212122, 298589, 946649, 904932, 656276, 322731};
    vector<int> prices = {238545, 192639, 940148, 742744, 1798, 85458};
    vector<int> sales = {681, 949, 183, 611, 122, 607};
    vector<string> items = {"earXTDDj`"C+aG*m!+$", "r(!NCmm@i. gwexvk", "Hf7m7lmdl0U|II0g?e_", "R~<V{#;ee", "FS<fA3h[zyFx)/l", ";<cY;~k<v3-8E6!`hjL'smv4!_1"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "earXTDDj`"C+aG*m!+$";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> costs = {137421, 81751, 515190, 681840, 46622, 169650, 808373, 904920, 916317, 35005, 547973, 783682, 550323, 900515, 295089, 632624, 200544, 280949, 333162, 456950, 183913, 194153, 717091, 743907, 730784, 400654, 452715, 918253, 150684, 988603, 460917, 273721, 314346, 611154, 877215, 326342, 765426, 19672, 914638, 183372, 286370};
    vector<int> prices = {448622, 836446, 557274, 18291, 594544, 69445, 841366, 507435, 131181, 223384, 973068, 383164, 953685, 409384, 893697, 790926, 648520, 724622, 745280, 41151, 649938, 311943, 107511, 5212, 567961, 918903, 56451, 346657, 785345, 787882, 659359, 486717, 78998, 351440, 732111, 133215, 240633, 800211, 472982, 633088, 111402};
    vector<int> sales = {566, 82, 254, 321, 707, 869, 290, 671, 763, 832, 505, 170, 734, 484, 732, 394, 861, 500, 958, 485, 274, 720, 880, 709, 777, 974, 983, 609, 40, 545, 728, 144, 579, 489, 789, 311, 567, 232, 22, 655, 839};
    vector<string> items = {"vX!u'nTt", "lc,a4uDcU<(2Q*9", "<QZ{KgRS3", "Rzh-^+YPw'S7pdM^un)]kZ", "c%L#WBkqPjVg~Jz4t", "9@2X", ");4kW$_2*ihR52'seIdT", "0qqPO0?&Z$JCa92mO", "(LU]mY[gb4OmQ`}c{bH/[4%cr", "Z%46", "P-)#!", "Vw<_+NdD"7", "4[ w%Ml!NsszgkY0<Po+", "3H", "T#~h,Di", "tN]"i\1q=xX HEz", "%C]jjw;a8'8}1YjLAKYs}W-?p*2WNs";
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "AYD+c3@b[3";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> costs = {726951, 240239, 783020, 884315, 241418, 387463, 53452, 769008, 333591, 846878, 220889, 287354, 764040, 152405, 10055, 815265, 150187, 891617, 676, 752756, 152020, 588834, 845431, 660482, 998555, 980607, 449395, 138641, 434786, 488106, 610711, 266190, 238262, 141378, 647874, 939224, 773877, 656432, 875665, 675434};
    vector<int> prices = {7214, 33887, 808045, 129413, 727876, 382856, 451902, 889555, 859217, 908539, 221636, 184108, 579486, 584491, 467574, 85381, 466315, 153081, 999860, 227871, 471617, 671392, 336044, 658268, 773335, 803755, 678630, 391421, 684637, 34683, 17403, 76952, 575925, 609386, 946686, 99229, 955879, 881565, 804188, 611962};
    vector<int> sales = {942, 173, 78, 879, 210, 669, 908, 691, 260, 835, 77, 73, 776, 532, 748, 180, 335, 901, 649, 595, 880, 727, 222, 975, 313, 964, 928, 789, 560, 227, 930, 992, 738, 902, 63, 995, 439, 543, 823, 411};
    vector<string> items = {"[D0o*Rm", "I70T}H>}/%\u WModL", ".S>`_@p9M|"VO9qoltM\", "[RT/%e3ghE", "{9*bZq>yR~weERb!?";
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "Lu5Xf)XQ]qXM+)8=9qLK<";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> costs = {137470, 822185, 132474, 602879, 423526, 411840};
    vector<int> prices = {65085, 119918, 98223, 748186, 290412, 409716};
    vector<int> sales = {637, 374, 521, 242, 172, 88};
    vector<string> items = {"AaVG0!J[K{&yeB@+w]0", "$mG">Q-f2<", "Yfpi<]2_) P\.>", "g1Po'M]JIis^yoZ[", "."!", "rNNPw`gTj{,nSWnK%*6#"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "g1Po'M]JIis^yoZ[";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> costs = {703590, 757384, 314050, 301615, 362667, 927876, 909623, 241016, 644534, 41298, 354677, 529157, 438476, 812691, 352824, 734511};
    vector<int> prices = {302530, 268644, 560495, 87230, 945411, 424322, 783623, 603331, 387968, 287631, 214309, 64350, 118049, 331360, 206588, 965030};
    vector<int> sales = {338, 894, 974, 528, 196, 353, 239, 149, 364, 453, 731, 342, 643, 534, 537, 583};
    vector<string> items = {"6*BC3pq", "Cd0to(b}6z";
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "DC1XJ&1g0";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> costs = {616236, 917976, 360102, 565706, 517326, 218691, 545707, 987490, 396885, 568084, 98598, 978494, 560503, 784278, 115031, 760350, 300318, 346041, 822500};
    vector<int> prices = {580475, 5129, 79154, 941860, 662837, 6913, 403767, 353062, 92330, 821377, 281708, 839592, 126482, 125915, 114158, 370674, 260990, 341377, 258984};
    vector<int> sales = {985, 472, 88, 337, 802, 35, 349, 400, 924, 654, 496, 118, 913, 366, 438, 938, 9, 647, 299};
    vector<string> items = {"dfj}Y^*)";
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "*ipLr$5$eu%+kNF%#J[0WRB";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> costs = {678191, 152489, 364990, 306384, 981717, 781408, 559291, 952244, 415140, 64900, 934468, 675296, 546291, 474741, 774997, 833075, 117356, 115527, 2406, 946136};
    vector<int> prices = {56872, 37309, 911168, 39276, 314345, 798881, 753795, 95650, 583436, 405977, 689178, 434490, 278882, 919019, 250267, 872371, 638262, 142428, 115252, 815439};
    vector<int> sales = {914, 674, 523, 951, 169, 78, 737, 686, 289, 409, 123, 671, 420, 984, 314, 186, 228, 74, 459, 121};
    vector<string> items = {"&.nRI0Ugq$ =", "lT", "J8", "\*:.#j4^Gk%Z6:", "!0i5Ot_<", "JT0kCSZ%UYVF", "hS+Y3~k", "RGiXvdFXn[J(", "T.BBm6", "Bsn"~y8^'Am'H[1DJ#.RBg", "8v,XH\i", "|LtM<", "6=kua}zkc";
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "QBD@S/Y,$B]l1W[@O1,";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> costs = {978432, 321729, 73315, 848981, 795819, 417273, 630383, 73541, 567021, 927210, 549595, 589548, 493960};
    vector<int> prices = {86864, 434632, 463935, 833283, 306086, 411563, 212891, 899516, 637588, 195351, 617859, 954950, 427789};
    vector<int> sales = {1000, 119, 808, 322, 950, 317, 89, 950, 77, 942, 879, 596, 4};
    vector<string> items = {"H/Hn0", "Mb6sQFqNXXe*(H/Pf\f t)", "BooB5", "odV3;qfQe'", "o?_Bcy'@@9bK", "*lW!]]?dXc4 hX$3\(", "m$;3E(v5QqQb|nW_m", "tV", "A!jgW?`:spcB", ";3uKO\K+b", ")yQN(3/vU~", "NWrZWV|uoI\$<omx~P8", "6de8T>iyDmoR;'ee3Mb>V"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "tV";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> costs = {279842, 997229, 989872, 174672, 106981, 528258, 681178, 712699, 143558, 824060, 538172, 728811, 565116, 770332, 169039, 576, 323215, 851878, 707887, 202113, 598581, 412085, 294370, 824676, 979620, 158346, 471712, 376869, 585151, 189403, 87772, 40216, 810307, 872136, 692938, 960242, 784276, 307519};
    vector<int> prices = {776871, 29148, 444414, 871645, 982423, 121647, 490847, 620783, 791085, 434800, 658437, 11255, 35982, 478196, 988027, 232350, 364564, 731603, 426908, 16715, 340869, 175816, 658109, 217581, 778059, 879182, 888617, 620156, 441089, 741157, 534154, 653133, 902100, 627508, 225826, 476778, 149394, 251685};
    vector<int> sales = {172, 604, 976, 573, 546, 506, 37, 262, 440, 271, 343, 507, 843, 791, 395, 649, 370, 548, 592, 586, 867, 721, 436, 326, 241, 350, 308, 481, 761, 567, 682, 849, 279, 363, 895, 649, 715, 295};
    vector<string> items = {"Lsr", "op@h$@^HJsjylAg", "1E#L9y3j'/Bi+5Cff", ";@p%qpm^R,\GDw4!-I/=", ">FMg*S]yaAl(>@^", "fB", "|wI|rZ", "$p@K", "8", "TU11{", "v|^9,)9pX9", "_", "Z1T_zWC-", "T7eDf_E\Tu>&JA=(pu", "cG@K\WHm", "A-sN,6W9QTSQ3i#,95", ""hI1//XxO,9~_V", ",.:4)zKx(2+dwc&R62qL^4%ol:>CZS|", "iYJO_W<m,(kYa'D", "%uu;}')7[{", "3+QBKn4v2ijX^E", "q^[]lARW$", "F{,YR/PRH$", "tm", "GzEu>@", "1^&{/NBQ#J_|Z>D^", "u34fLx!4", "y1Jmt", "$BUV8z!tLvZ[.Q!(sw[juV6K", "0M>^~9Zi0.U[", "!"b&dT-S]Qqb\A^", "D@F", "nMuswe~*d_n;", "(*^|WHMUS:yTEc'`^hZcM_!S.~", "OqgQNq42-N", "\d/it&aw43O7|ot", "O"t_.:}fq__`{x", "fE]F9~m+^"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "D@F";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> costs = {371598, 74279, 862386, 888685, 307504};
    vector<int> prices = {160970, 468280, 609254, 407320, 876857};
    vector<int> sales = {970, 928, 545, 837, 900};
    vector<string> items = {":k\L0_14*drjp8DxNn`I68s", "-TCTa!wd3 3C", "FOHud", "R!J9"mOs"f>oh/", "eVg{F|?|['@c^{4Q#"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "eVg{F|?|['@c^{4Q#";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> costs = {726678, 969744, 309596};
    vector<int> prices = {795217, 611304, 347278};
    vector<int> sales = {815, 50, 592};
    vector<string> items = {"P=qIC7mY", ",z6c6q$+~", "A)oX"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "P=qIC7mY";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> costs = {702126, 860772, 89349, 168992, 867737, 181735, 841857, 358909, 287323, 317671, 368104, 120225, 310106, 440713, 578724, 790446, 492066, 817214, 219478, 922755, 542215, 797267, 173938, 873617, 618859, 673292, 512264, 337537, 278801};
    vector<int> prices = {445026, 363655, 105256, 590539, 488901, 338441, 7558, 628142, 905344, 979478, 774610, 323257, 951746, 633644, 679598, 116670, 696589, 34584, 439428, 446099, 506111, 825268, 551596, 622864, 986436, 65577, 872048, 767517, 696034};
    vector<int> sales = {159, 109, 188, 746, 314, 721, 127, 601, 967, 20, 22, 585, 257, 395, 474, 447, 31, 693, 279, 877, 596, 222, 730, 605, 929, 633, 39, 806, 288};
    vector<string> items = {"O%xq:q.S^?@Q", "3JpC"Jf0#9nVjpuEw$GO|", "\WSPv]OIc*L8E>_Gd&|1F4~/WZ", "<<8_EcU-=Vp@p;eoo6?eJi`I", "T4..^^V*D", "p Pbv}2?o ";
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "(4`l3";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> costs = {465769, 112097, 50906, 444964, 274531, 963277, 290224, 786969, 798026, 896663, 220512, 761865, 306057, 119367, 529691, 198334};
    vector<int> prices = {625003, 943923, 889294, 431773, 57247, 275402, 648469, 774854, 470139, 477486, 453751, 633047, 816984, 747814, 930306, 854183};
    vector<int> sales = {514, 922, 580, 476, 40, 715, 794, 458, 54, 855, 123, 445, 655, 962, 469, 57};
    vector<string> items = {"|HG>G\UL80k"A1t-{", ",#[Wwc/wpYr", ":]qPN-J(c#", "NNfw[|`^)M.q:p?WO)Unphr24D<7&", "T9Q~x2`$*[#_34", "xQBLMm", "smC(=*{*&=<C", "T$Rbyz86"N!!FoK<", "duz3C]Jc@,!k[36@hV+}hwFJ4o.", "un`e-ZY\Xm@C^", "VjeDB/^05pz", "M6^SDu);4:db"", "z3cVfV|U}w|v|7oj=1Wm*a_", "*<-Dd:<,T~J", "t-}z9@'OmF/QC$S)&Gk>t'SU6";
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = ",#[Wwc/wpYr";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> costs = {264580, 94576, 598775, 652962, 541763, 942099, 876898, 85148, 238983};
    vector<int> prices = {658960, 757618, 534449, 392611, 777623, 527646, 692668, 245606, 906890};
    vector<int> sales = {470, 355, 650, 513, 388, 703, 182, 623, 835};
    vector<string> items = {"<MYx$=", "lQ$VZ;4UK5659P! ;\8'<j2[S", "kacG`A[suMP&", "+BQj(ivd{0e ", "![!/d", "z4NZFs?h;N'f$W}l", "q7K/4AH|Pm1*\F", "=W8=.),5'On""I*n*4", "Sz!`LG8Dz5P4,V"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "Sz!`LG8Dz5P4,V";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> costs = {402381, 285356, 101110, 528938, 58821, 240995};
    vector<int> prices = {719200, 144623, 92565, 607179, 505074, 635457};
    vector<int> sales = {547, 893, 291, 85, 651, 331};
    vector<string> items = {"KuvJ|T", "#Kb>Y%n", "2?JL", "9d10NcnGbFq~U-.h}J";
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = " qlIRYIgP=>FhklV_H9M;F";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> costs = {487481, 590024, 953385, 941347, 732617, 560330, 536567, 944550, 295145, 516396, 870612, 176904, 621312, 572537, 502541, 815439, 422219, 844319, 243572, 639358, 48051, 78904, 731616, 782676, 658923, 828233, 382931, 51132, 437088, 436386, 351660, 243080, 254587, 878910, 68874, 137771, 668248, 819741, 766998, 775531, 155665, 378112, 750873, 254829, 557089, 347982, 808483};
    vector<int> prices = {727615, 38667, 300141, 216996, 570254, 170940, 249393, 665809, 53997, 301886, 472079, 48660, 343981, 935759, 249369, 623741, 593326, 779373, 274462, 819016, 404872, 587419, 378983, 604812, 882723, 217428, 455488, 798875, 250640, 471659, 752394, 626765, 82755, 38295, 502113, 34379, 176761, 382734, 531646, 69389, 915270, 694730, 291987, 959516, 100731, 370500, 468015};
    vector<int> sales = {151, 140, 930, 292, 455, 222, 400, 823, 30, 452, 872, 277, 163, 907, 627, 67, 137, 398, 664, 605, 959, 365, 354, 586, 367, 885, 484, 739, 892, 467, 667, 314, 228, 790, 778, 186, 502, 705, 380, 842, 15, 665, 130, 677, 595, 633, 718};
    vector<string> items = {"Xcz~<aSU%"", ""A]*E", ")&zfyZZ", "Ti!>k>", "Id;c14c&4u", "-$xj{Z ?XM_}No{nnuh<l^", "5fY0$Pr&fD=gT", "qtKOd<m*e^V", ""{zy{+<g7q", "qnDd$Ctr", "\?<,", "xHc,@dcrA E4_\", "Uww`8Kz01$_8z!", "YTi(m~>QWq", "jd.1C;|3=1D8", "sqzxG?T|#", ""a-Z`mejzF)1", "B+ly"c"Aw", "k)\:d'4-QL`%`9m", "fsM8bV^", "cPQ3V.", "pp[y+NCWED", "W#hhc+RML=Cumd", "QYdtq~ld'IHdg", "Ow/5C7r]81=bAeBZMH^V@`", "`btzhhbPA", "!MHGOT6d(0:!MJ", "w$k}]k- TKdw80\%FP%7", "DZ6c0fglBJ:i0Y", "a#4I^"e]Ge", ",.7HRo"l[R{=T", "Gyn", "/lxv!o-Q", "92%~W]X)S`QP/&)", "pwHsipl?", "y($:\x", "]K"kKxyTgjH<f!", "Kx=J-s", "oo{~xjxY+", "vP20!}G;", "[3@Vq9U8kPu)", "#~"Q*<er1\>?", "5GzM3>Z5+|)", "WW(DRXO{%i>3G1gTh&z8BGX-E&:", "5e)E'NaaA(N3", "6Z{e/.]r8-!d 9:z4hA>Q/", "e\K,^Xw#%"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "w$k}]k- TKdw80\%FP%7";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> costs = {429180, 578650, 119075, 949592, 892704, 485973, 605773, 66784, 358938, 578097, 690354, 775939, 462383, 712216, 728036, 956529, 128474, 919327, 944126, 151273, 74533, 253365};
    vector<int> prices = {193988, 508718, 606686, 191900, 168657, 665421, 428388, 963105, 336697, 264431, 362980, 818378, 363741, 640161, 341734, 127283, 102318, 557165, 574193, 694038, 247227, 238638};
    vector<int> sales = {308, 178, 173, 7, 306, 498, 493, 55, 518, 703, 996, 822, 75, 435, 85, 293, 168, 949, 441, 357, 480, 719};
    vector<string> items = {"H |"Q/|QCi{w", "TO", "g'd*", "'r5ii'iflN|o`O*OU8", "G/iU", ">OhhA)JAZB^Y", "GTU6%BT2", ".-6i8&ki", ".GKmUsrPAU<(%~", "rN2V$81YTVb", ",D75@&86eys", "PnP\cq%.@_Q>yET", ":8P#Dt;n=D0Z", "\n#", "JqUT^"%e0pL%G=e$C':F", "^o!`IEqLQijx~;tV", "EES~dm[8IN[|1eQL", ".?vRs=<j@,BL.0G~Km ;&4w*foLI8]MNT", "EcZk2;=,m]1LCZ", "51]5`7UYGS35}3W", "(6G];Ly[IA*(2BIkCWQIKG", "'9u"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "51]5`7UYGS35}3W";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> costs = {571644, 121063, 369182, 757882, 644310, 556560, 830705};
    vector<int> prices = {119507, 63539, 911937, 216044, 479890, 402253, 714133};
    vector<int> sales = {513, 297, 92, 868, 350, 787, 381};
    vector<string> items = {"06YL&pcsf@"H", "[.E~Y7_t<{W:w{hlG9G X~>L@", "9/x)JJw/_", "b{5T@/r7kBt8=b6!Ze", "eZms!Mxdh{Y#*c<V"}", "/\8+K[,GGU", "LRa&}0/|v"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "9/x)JJw/_";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> costs = {238, 434464, 368859, 1072, 946046, 179716, 301631};
    vector<int> prices = {899360, 999441, 336158, 787188, 663262, 967207, 44195};
    vector<int> sales = {877, 393, 20, 846, 642, 578, 627};
    vector<string> items = {"\Bhckd|~*^NK$"?", "Yv.EB,10PJ", "bu", "3$+RSL", "5}(7;C";
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "\Bhckd|~*^NK$"?";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> costs = {532766, 304733, 905382, 692360, 662027, 664462, 946747, 320706, 873770, 128774, 595060, 696262, 949127, 408724, 319594, 981014, 621505, 188298, 920562, 287122, 996863, 114237, 985172, 701974, 682603, 947407, 859719, 468142, 145200, 439347, 435220, 841658, 815264, 278814, 575289, 443932, 872238, 36713, 138511, 396426, 558987, 717827, 954589, 961205};
    vector<int> prices = {509998, 385828, 951685, 5795, 945308, 153972, 510154, 769674, 565925, 166798, 945047, 525211, 689581, 201685, 851339, 460718, 118502, 516886, 866144, 368151, 655941, 543230, 847797, 230584, 586167, 188629, 785320, 186193, 794163, 129218, 953047, 468098, 400519, 189068, 538201, 432311, 229253, 748406, 782676, 295231, 997695, 12778, 200162, 794210};
    vector<int> sales = {963, 813, 850, 83, 11, 209, 525, 223, 840, 400, 636, 411, 591, 995, 84, 8, 111, 198, 484, 453, 710, 897, 348, 259, 36, 333, 446, 728, 846, 793, 432, 426, 674, 9, 437, 301, 819, 244, 460, 40, 399, 881, 105, 428};
    vector<string> items = {"-:", "eV>vv", "B ~"z"GWc2", "B6Pa8=@c%~v", "\XQ %tIWj", "ZYsevmr~;=%QRa0^OS[`", "3~;=7}~*5K[";
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "</nw#DPk[";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> costs = {776807, 301883, 378310, 210414, 107997, 70161, 500301, 428253};
    vector<int> prices = {69724, 406783, 61231, 581132, 164127, 376355, 463480, 166847};
    vector<int> sales = {761, 974, 50, 337, 773, 924, 170, 912};
    vector<string> items = {"LpC;<~N", "1S>%1TWf~QWTXRF107/", "IhYbE8r+##le86W}/V)";
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "#lyFC`7;ViaG61b{~is";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> costs = {486856, 5414, 7564, 595365, 636305, 251547, 512164, 996815, 409991, 803087, 911001, 225865, 546246, 543643, 164041, 805759, 358695, 912582, 879190, 138229, 15866, 883266, 925694, 675806, 447682, 556589, 21255, 18898, 219871, 879570, 89269, 814726};
    vector<int> prices = {847713, 308902, 55148, 865890, 833223, 490077, 617938, 230124, 853051, 26104, 596951, 403609, 847398, 577753, 433681, 491233, 484231, 542044, 318688, 643643, 180370, 535651, 969167, 639150, 975138, 656063, 874698, 91524, 293703, 243116, 530146, 995900};
    vector<int> sales = {253, 32, 130, 862, 844, 669, 706, 216, 567, 955, 35, 551, 955, 452, 813, 297, 105, 363, 479, 264, 317, 348, 849, 446, 155, 547, 879, 504, 648, 643, 173, 64};
    vector<string> items = {"qD65sng`\2g@C=h", "$IecKfe!b2bKf{' *'\,N2R3uI", "*SbS{CUArr;&", "!g]=r;x", ":KS@\aCWYBd'6\%", "Z7T1NT2;f$U]vg).", "c9q]]_s+", " ik#O8_riC|", "Zm6lng{", "<Xo8i#Q|JbV", "WWw9#0Ou74$w", "3OhA.qouw", "q-$H7Zg{", "&.6<", "1g", "^~4os);xhqJK3$", "+", "b[3#L^{EcsdQ}3kU`Kw3Z|", "KM[qN%L,Ot", "Jo<hnxt", "x*"qtQ=oq'Gl!j|Xqv/", "+tn<M!VL~akdV=QDY", "Kp{nvc3\B!ed]z6){"@on", ";7%sdB~Ep%P\q", "NF+~kKN9UM!/m~14", ",=cHDl", "M/?", "TEA <@'olhefZRBi:fBi", "BN", "S4B3", "/s F_!K0sLLm", "l}2PK"aXVQ%X17yzBz]Nv"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "M/?";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> costs = {660323, 347548, 572393, 552724, 218558, 22325, 548852, 466291};
    vector<int> prices = {996517, 949173, 286697, 801263, 919542, 446443, 855028, 728306};
    vector<int> sales = {986, 20, 353, 109, 560, 274, 666, 244};
    vector<string> items = {"UGQ[;tOVj7iIW<OgLu-ue", "B<6(LL2\"ggZ", "6CDGp;jhNj", "vz]#glajQcY", "/vNSi)$7}";
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "/vNSi)$7}";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> costs = {62465, 862142, 13681, 328910, 820607, 14485, 255479, 731144, 550829, 55068, 171621, 274687, 694648, 454244, 513002, 130373, 200622};
    vector<int> prices = {221567, 677662, 994530, 678810, 52728, 839009, 711704, 411664, 505567, 356465, 570838, 927491, 687853, 159166, 146701, 825884, 962068};
    vector<int> sales = {578, 465, 36, 568, 381, 386, 659, 522, 289, 183, 993, 337, 251, 346, 784, 769, 926};
    vector<string> items = {"/(aPxy", "I!}xjsq8LT";
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "h'=1,4AeT\b#' HS-";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> costs = {601619, 281549, 530172, 184001, 242494, 73007, 133707, 46346, 512464, 207870, 816068, 196167, 186694, 651891, 883401, 474841, 120373};
    vector<int> prices = {447968, 655677, 206935, 668467, 322642, 187848, 448521, 386189, 170610, 567090, 219724, 711457, 283838, 646900, 536515, 607352, 753277};
    vector<int> sales = {39, 74, 764, 146, 137, 93, 58, 753, 394, 948, 424, 65, 533, 861, 206, 360, 944};
    vector<string> items = {"Ux<}fY{VB.;=(", "Wo5UYq]^SOAD#FnVsl<dQ", "XLS6%3jh6y[;']", "*s#ueSh-[ZiOuP)RR", "'I(W=Vh:>o", "'`A.c%9#Em", "x%p;C#*ov:,F\2fQgi",1!Eo>F-HC", "M=<l6UrF t`", ""6d", "Mbjqb0", "`K}Z=>2Wy4G.;
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "BsK"(RqM";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> costs = {302677, 229243, 925394, 841220, 646101};
    vector<int> prices = {282937, 32642, 310273, 582274, 728300};
    vector<int> sales = {831, 953, 130, 722, 54};
    vector<string> items = {"F1A6S&.%b(8L_z$3:k/Kip7P}CC =V5ZNA";
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "DIs+uxBT";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> costs = {327959, 710022, 562771, 225018, 456103, 924145, 789909, 429006, 582268, 228364, 772786, 263170, 310784, 265611, 257882, 996316, 440406, 59171, 187614, 937352, 641607, 327988, 955466, 967911, 644345, 275370, 904973, 934234, 953601, 214259, 955870, 847347, 818038, 580444, 308240, 782123, 591528, 642505, 813834, 374958, 139941, 1383, 138337, 615654, 988103, 932392, 569278};
    vector<int> prices = {780349, 228979, 134786, 615725, 244326, 280442, 571877, 430169, 482317, 16201, 380222, 759267, 82545, 477378, 473479, 537138, 285766, 741255, 595342, 314871, 133845, 8043, 468495, 745360, 897451, 306363, 315097, 293144, 195826, 781873, 863319, 577262, 768212, 368520, 186820, 630816, 945756, 535891, 481954, 517735, 936163, 403050, 389327, 9228, 826295, 935251, 820775};
    vector<int> sales = {494, 479, 62, 696, 54, 657, 995, 443, 495, 817, 654, 208, 227, 870, 324, 919, 13, 748, 75, 825, 730, 781, 953, 200, 744, 15, 643, 573, 476, 119, 619, 757, 564, 670, 458, 73, 402, 81, 959, 684, 882, 209, 866, 505, 610, 652, 863};
    vector<string> items = {"49uELg]P", "pg$Nf#I#o$,Gy[Th(", "tj#%x.JFMGv3(<*", "(/'", "TA*VZH;^~c:2PtG`", "S5:ih[vAl^4p", "gc+hql2)'x:rPa", "ALY:W|q", "h'6ffhd|_Fc!<n)D?", "oq![}ka@d";
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "0[R[V:3N?";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> costs = {933987, 393264, 593933, 232980, 117299, 502930, 289173, 657580, 604814, 576747, 891747, 499249, 811308, 974622, 608798, 462978, 216576, 562087, 411910, 772363, 934943, 541474, 713748, 374361, 806032, 284039, 230023, 204992, 124895, 225075, 61299, 831768, 22693};
    vector<int> prices = {690047, 564477, 630062, 440270, 665281, 438322, 822363, 418051, 789092, 219206, 345735, 596062, 860228, 63929, 90272, 380456, 518238, 407686, 625491, 501714, 649965, 688900, 35643, 996925, 43216, 492516, 290240, 240046, 745846, 508847, 879405, 154554, 559001};
    vector<int> sales = {923, 995, 182, 563, 192, 366, 346, 241, 1, 710, 53, 549, 735, 473, 38, 638, 768, 571, 75, 379, 805, 464, 419, 930, 820, 52, 248, 940, 944, 574, 715, 344, 149};
    vector<string> items = {"Zu1/MHTijOtYOP`Sv", "6^4SpL`", "ofl[HILo", "BCJGF\I*.EtxR~", "|Yf[I(Z3Qs4'Fy", "-^", ", Il67t", "D30TSA]W?N(/d\4i", "u?};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "&&2[O~Cx2ZR}tl,~";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> costs = {42737, 957655, 165296, 42249, 328738, 55136, 530200};
    vector<int> prices = {650102, 478968, 927381, 346665, 854294, 146812, 847957};
    vector<int> sales = {661, 519, 412, 417, 92, 87, 853};
    vector<string> items = {"I\x1C[jj+P6", "mBkwx6SxRJlYVjf", "g$e.g", "J^WX#.p*]", "52:4$6ZQ!8>NhLl", ".Wq'<bI|e^apv:ia"~h", "cbm-7Aex[>"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "I\x1C[jj+P6";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> costs = {279950, 97147, 674789, 87131, 341453, 387843, 831339, 795673, 497534, 427970, 145872, 123194, 290283, 769632, 881333, 997723, 543412, 464333, 989681, 379320, 684003, 963490, 532368, 285438, 461872, 26454, 762968, 830453, 154239, 364370, 139777, 474532, 174505, 440793, 462093, 776757, 256094, 34504};
    vector<int> prices = {89646, 333107, 802503, 509157, 858761, 601839, 582689, 307485, 855000, 42872, 897122, 477295, 721420, 195235, 319322, 988127, 202451, 23471, 562649, 311196, 833802, 633217, 918096, 201228, 463511, 245942, 384381, 105217, 406466, 938799, 995505, 778807, 179460, 357637, 498653, 888220, 89590, 524496};
    vector<int> sales = {43, 732, 360, 891, 153, 700, 465, 118, 339, 159, 446, 577, 84, 881, 947, 508, 410, 689, 257, 511, 683, 431, 183, 575, 116, 263, 844, 975, 834, 642, 60, 773, 396, 863, 332, 971, 38, 725};
    vector<string> items = {"tOBuIa|", "g)Y}_ln]3_Dj~";
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "|}g2n`";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> costs = {336898, 811476, 251208, 292945, 592249, 36513, 348342, 386626, 401626, 708587, 841510, 774895, 304683, 221299, 720207, 778116, 12662, 745411, 280447, 268394, 179896, 140602, 663550, 750310, 544177, 750756, 675418, 879844, 18996, 552976, 217224, 601746, 418272, 672350, 41655, 42732, 853783, 537003, 510878, 976060, 106711, 633688, 180790, 60080, 603614, 930253};
    vector<int> prices = {176224, 798841, 307165, 727307, 769037, 137673, 943308, 765968, 29034, 694728, 839471, 871951, 634577, 831343, 363529, 958562, 737623, 593364, 530486, 235498, 565843, 188370, 144174, 394739, 154024, 361805, 563048, 281543, 810996, 562399, 172647, 298536, 893564, 102418, 793403, 867912, 954773, 650555, 614359, 906557, 107520, 320439, 445271, 264746, 401031, 134044};
    vector<int> sales = {575, 290, 751, 440, 762, 84, 365, 189, 488, 9, 918, 806, 318, 686, 783, 326, 489, 498, 674, 572, 441, 451, 695, 11, 356, 768, 753, 480, 161, 204, 224, 751, 251, 131, 179, 921, 93, 537, 239, 408, 88, 202, 617, 154, 832, 706};
    vector<string> items = {"k2z+QyjNbEliMn{BN"/", "=A@P%)Tq9ALI", "|JFj3'i1jpIEBgf(dU", "|yzqg>;_jGb", "L@|", "(!6JcbdomdfF-ti5", "N", "&'\EM|<^i{0'.*E", "[|<~*)", "qoi.rg0-7{t=XoAsBj(E5qRE@a{Eq&N&", "'!jGrl", "8B4S">gOU=rcC&afV%h: ", "\jFUcG", "F_![Bz4B=*Qtuj^$^oR+KLE/XPbf29", "2)5}=y&)g<{m", "~Q16S'H*%i/3;5Js5 44{n+{(8", "c1C[LF=[/q", "ho=RFHp =kKSV+H", "p={jP;V?\9?-O%eq,", "Z(#o\", "fW3__>%6JE", "Vp#(:", ":a|{?L3k;,E#^QV~n.\#KT9U", "7&vmX[kOE Ev$J", "yfe/TSo^}gROUz/05", "*a*_*-'a_]*fi~`^", "r$K6D$/Dl4<", "rSrI", "p<MHH", "Y6)8k", "mFsTWED^/ktr-XOXZ#8>~~4wgl'1c$H~U", "?iYkR|"+abfyOAHX'~", "kLOPwa1PF"'{z$H", "t", "FS|i(Qy\", "XuM)MZRDjU|T(D?", "Uh9VY.ey(<WCLc:q5hxQru", "^*-8n4>W`@|w", "9*7Q3!5>EaGts5$GL", "x}Nh.I6HFGpP{-NK", "J=)Jt_llk, <8<_)[8?", "'[SV/Ci,3 z"C]&", "<9A`I!r*ZJ't", "DAGRK!]eD", "U)Dp*.yoo54j", "bq~`PI|/k`+ O0<' z"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "XuM)MZRDjU|T(D?";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> costs = {715660, 812698, 836729, 349182, 718509, 644500, 708245, 153357, 818007, 862991, 84165, 626442, 969135, 284157, 131945, 830820, 248703, 925966, 531237, 975936, 887223, 917896, 138769, 841667, 79830, 852994, 323914, 616083, 117327, 773516, 596002};
    vector<int> prices = {394736, 452854, 513002, 461150, 777443, 603579, 201250, 603722, 415622, 77070, 586319, 870724, 539397, 77697, 784140, 869905, 281894, 244750, 134274, 15370, 419741, 802378, 799978, 655521, 608627, 738493, 781289, 307205, 25304, 407427, 934903};
    vector<int> sales = {829, 67, 53, 408, 598, 854, 173, 746, 650, 794, 766, 60, 732, 552, 901, 100, 845, 816, 115, 49, 7, 472, 464, 839, 599, 867, 732, 40, 538, 688, 562};
    vector<string> items = {":z}je##2";
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "c\w>_4/HA,u%Ar";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> costs = {78316, 594004, 163954, 754624, 753471, 228969, 371407, 724338, 830259, 575558, 622494, 349748, 323361, 10971, 737686, 491645, 225656, 133116, 188587, 997616, 505574, 271976, 816395, 228824, 491177, 50220, 561330, 628829, 308354, 573123, 559058, 802378, 646730};
    vector<int> prices = {871232, 94984, 835276, 818158, 534739, 719941, 953855, 361444, 825395, 414954, 405747, 246156, 923990, 398655, 501256, 448593, 973792, 234225, 47492, 184293, 141754, 463773, 22032, 613297, 699577, 646532, 698402, 208343, 383845, 711238, 739462, 96912, 57400};
    vector<int> sales = {215, 838, 997, 734, 20, 180, 254, 970, 132, 369, 144, 986, 632, 861, 379, 953, 70, 487, 613, 190, 389, 496, 415, 168, 950, 365, 561, 909, 387, 357, 434, 453, 710};
    vector<string> items = {"d", "S<19Q{3,aC2gZX", "ZgyQt;", "?sDzUuY.?B"$jyC", "S<p<HX]N|!X_S", "HX(Z4j[", "{Y><#783b;4y+", "C!Fc_)BcT", "U.?<O8Ozt[4z/", "M#,^/>w", "Ey#N", "06'-Qqjk0&6$!f&c:", "?;8%N\~q.Jj~ogDks", "?4x}X ", "#Ke;OCA9qbmQ", "U1&,~&EP*BbhDcF$", "~o}Ju+>i", "kf:u4rO4qw0/", "ynC[%o=^#By,;SxV%", "!N Zy'f>g8da^ vCyqF|IlreCC", "d2", "p>3*r{~[+b(Y}S", "\/^~46PYAg4N$|S", "%X_RX]$g8", "qe:LB$>?%CL", "F}Tmv8#pr";
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "ZgyQt;";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> costs = {461410, 291629, 742952, 121937, 496372, 822246, 552567, 27490, 796090, 657389, 65474, 500065, 887434, 610768, 769006, 78305, 247885, 660228, 495158, 977014, 256228, 492381, 965514, 751520, 458016, 421780, 483874, 436802, 140053, 631410, 431468, 642581, 121336, 475262, 302130, 463665};
    vector<int> prices = {93430, 424486, 102331, 769901, 585027, 878929, 569927, 166490, 776665, 583836, 92564, 330056, 487190, 315164, 458262, 192344, 890662, 359939, 327418, 224002, 254856, 673993, 735637, 398285, 382176, 704713, 613086, 657538, 163332, 180481, 789912, 830743, 690148, 731481, 435864, 454147};
    vector<int> sales = {158, 640, 261, 381, 459, 21, 627, 286, 791, 296, 249, 957, 983, 392, 410, 585, 709, 789, 34, 923, 543, 206, 163, 77, 368, 478, 382, 117, 907, 386, 825, 79, 190, 449, 583, 827};
    vector<string> items = {"*CteNW"*1q", "CtewBgQ\3|rtviRb0^*", "rlalA$,daP,:|TW", "92 gf", "ZY;p", "ZBvt", "Tdf?5+m", "3NB}n-_<hh@\}b.8p3sF;tPH*T", ";}H", "hD`^'\i V[suK", "t&HkaB+~5", "("{]A `/", "j%^k=;QL!m", "BD/lkI<J[+", "j(JgIh'Twj6R[.Y<", "D}T-}j**8U#@zS2O7Rxex:H!y", "J8", "oJ"P"n*u85bnQ*Hb~%]O", "sKl:LED{#HG%!F`HRy X-4", "B8]T9rf", "F>`,_t;", "t7P>7"UD:h", "S5%W[oN>}U8Nl", "bkYLuAZVc[seo -[f+K", "Bt0Q~{F", "wwZ#IOre", "Tx*hnCbGV:eD5", "UsB^", "l]?w;P^<", "C"3h9ZKSEtm&p@@!LrC:", ";~~9icTp?HDFY%62+p", ">BYl", "X-PyJmnvIE<f"", "qa@?%RC~", "~fBt}", "+&zC"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "J8";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> costs = {193944};
    vector<int> prices = {893109};
    vector<int> sales = {252};
    vector<string> items = {"MH$G[_G/8;Q'"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "MH$G[_G/8;Q'";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> costs = {792020, 208787, 667586, 785178, 884433, 435363, 915161, 620877, 796321};
    vector<int> prices = {401006, 20735, 459591, 725407, 190230, 337682, 820882, 74993, 530217};
    vector<int> sales = {216, 427, 145, 591, 706, 771, 170, 522, 747};
    vector<string> items = {"Lx}m'tEJ/";
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> costs = {441477, 773673, 333506, 714217, 389614, 20754, 858432, 144427, 102255, 500876};
    vector<int> prices = {531651, 979948, 68443, 122526, 991327, 447108, 106401, 288674, 184927, 851751};
    vector<int> sales = {526, 251, 882, 61, 81, 714, 250, 707, 392, 852};
    vector<string> items = {"ch~iT.", "W$?{hN:rL^", "7)xf*@5]|v^mw4P", ")T7ps_2", "7A:71AwLf^%qDU0Ks;#", "tmy12H}", "MBupAI|.O)9I]N", "'sfmkaFn=p~L@_{t", "}PMSuD^l,=", "H(KE`E\1x[`zQe_e]"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "tmy12H}";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> costs = {269629, 975602, 862981, 49054, 448720, 281105, 642473, 248949, 974042, 883741, 892278, 564081, 200945, 720475, 430001, 633913, 240218, 951771, 43874, 921247, 233883, 912768};
    vector<int> prices = {800923, 419434, 811743, 431244, 56664, 691526, 775547, 588983, 749607, 40800, 37508, 528515, 266169, 116148, 507875, 435633, 253153, 199824, 939915, 662780, 501200, 996450};
    vector<int> sales = {147, 845, 698, 556, 336, 890, 725, 485, 99, 322, 797, 937, 873, 274, 566, 529, 710, 169, 774, 890, 566, 913};
    vector<string> items = {"=t=lj?i#", "uwsLO+$n'1CiZLTlm`uuv", "kofjTC<9", "$%PU5w", "#~X@B", "hE<|*Y/5[e", "_gtoP#", "F9^QJ'p7XV*"y", "]a=<G:.C9'wmx", "3cx4zjv]`xF^{:Ew8", "yLBE++ +,X", "W E9^", "fp|q$r,hnz{RkQDc", "SKj&20pPG_G`[AQ", "^r,q&Q<H&5<", "4OC^m -zXLq^f", "G>_xcl", "m0ob,b*,jqA", "lgmyy%f7&R", "ux}5tpd13kJ$oAAZGcN2i", ".0F$(e{e%pj|", "LMh)a{T|w+qk%1Kg$$Fw>PP&_!Y4.a"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "lgmyy%f7&R";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> costs = {160425, 178526, 503523, 483864, 987279, 279974, 592021, 338345, 969564, 326797, 554117, 666068, 868728, 20111, 839185, 787115, 399931};
    vector<int> prices = {817007, 38148, 216155, 75466, 961800, 390120, 233333, 222972, 686133, 532006, 402172, 25565, 680164, 924020, 955700, 370848, 495502};
    vector<int> sales = {820, 53, 768, 16, 925, 162, 594, 747, 878, 517, 85, 530, 740, 780, 700, 907, 363};
    vector<string> items = {"o<D;Bg)", "r7N", "`8c}3"@5r^8?R0Z`";
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "'B#Stp2}{";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> costs = {83589, 337568, 832619, 169579, 19092, 648893, 616492, 475503, 626394, 512114, 793502, 183942};
    vector<int> prices = {332708, 512722, 662878, 918441, 973642, 238421, 287081, 797629, 922978, 292054, 417900, 948103};
    vector<int> sales = {511, 686, 616, 158, 220, 940, 809, 166, 334, 347, 598, 985};
    vector<string> items = {"zp9o!]Vh?qe", "q+0X'flv(}";
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "bXv+56\mU|H";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> costs = {983567, 566158, 224388, 180853, 546767, 639315, 458254, 546009, 474954, 576691};
    vector<int> prices = {139896, 1213, 239786, 441396, 84217, 100331, 706937, 772477, 706661, 438130};
    vector<int> sales = {226, 415, 465, 435, 885, 970, 809, 112, 523, 776};
    vector<string> items = {"zV1l_${ifB.|$^N", ">HzW"yFBG8X", "A0Ns5?QIlW8", "$+]vmdX_b", "9!lDKC=gf:H<", "~htP"Jtk_6{jdgiz|2nl", "885", "R+@%v;s", "pS q]h-;j2x=`FCV}", "MQ1E.Moe!"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "885";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> costs = {921076, 317086, 408637, 894282, 34716, 93337, 919589, 375025, 733509, 794254, 813324, 890581, 809176, 847126, 337645, 376886, 577810, 96627, 329211, 708190, 883982, 590579, 158643, 171047, 527921, 404997, 616461, 725356, 402845, 326229, 15175, 414113, 16656, 324672, 713940, 341154};
    vector<int> prices = {241548, 242565, 600493, 898591, 105075, 361484, 540506, 501549, 118179, 971495, 855016, 758317, 142323, 484982, 798155, 981963, 26163, 471602, 255862, 810623, 919211, 186732, 24607, 787225, 538033, 448371, 595141, 41409, 417893, 424674, 201034, 10490, 58155, 756024, 606252, 279226};
    vector<int> sales = {412, 455, 7, 808, 277, 154, 382, 496, 882, 283, 333, 883, 638, 354, 335, 856, 937, 148, 419, 815, 297, 169, 311, 350, 783, 521, 493, 172, 637, 553, 916, 818, 532, 220, 358, 444};
    vector<string> items = {"FTbq-{DV\3IOvYx4Wtwc-_I @bGd", " 4&zbOR\mXAhiStig:/", "h\:=K${!&_wS4b0_U", "/!UfAhHL?j`k44Tir", "M~ucuv!yJ|", "1a-RIhAR|#^">rc4HS#E", "0", "^4gz9v5", "7T`&-{DPt-roFy$]", "2]/#K.Q>", "AB_Iq^S rs%DvA,/>", "f`iy>lXNhK23G3u0", "Fq4%DatEe", "W<3jz#"l1", "Uhhw=-zd&F#X)kV", "?+aH:.F+.2V6L-", "K", "Q}6GH'V`R&J- Etd", "xh#+aCah/?=q8vj]", "&}", "$ gM8*", "L!!Y8y^<T]QfC", "lYx'aVa", "+g3?Q1D8_'%;$7c)BS5Yw", "*J#Nn^*Q(!5k", "ws@uK}N2,kyia8F", "&1UaTKQue}GI`yF'{", "*PiQnMwh!", "P1tOn=S;jO", "hoq^"sGv", "Q9Q3>5@\Z$;P!r%]M1M(S?H(T/s", "b%H4}8#fo";
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "?+aH:.F+.2V6L-";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> costs = {338790, 609701, 771106, 592539, 818748, 362221, 844940, 458720, 207328, 521380};
    vector<int> prices = {43515, 32381, 463587, 533274, 588655, 827245, 703130, 73784, 137009, 531392};
    vector<int> sales = {636, 497, 663, 140, 380, 15, 765, 268, 440, 73};
    vector<string> items = {"k"@RA$mzIaNn;So.QgUBuh2", "O4>2)r<Yj{$8", "{", "*", "`N", "PRHhV#5+<Y}v':", "Ucx>1tTd-Oi$'TnW"U P", "63K(,5:y|>", "o&KSCTLIhA_RL", "B5D}Kr"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "PRHhV#5+<Y}v':";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> costs = {682118, 666773, 268964, 230761, 902196, 914224, 75531, 63392, 251029, 960073};
    vector<int> prices = {166212, 898701, 13626, 796998, 133703, 636915, 847169, 82490, 758015, 567598};
    vector<int> sales = {377, 267, 237, 255, 528, 267, 793, 277, 338, 842};
    vector<string> items = {"*3:8thHcT_0`8]0", "T3hd)dT", "c.vQu8[r}jb"1O#Qn(Cy:fo9j.'^5M";
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "7y|+";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> costs = {682225, 448311, 458134, 2456, 576267, 224360, 712584, 320253, 290036, 127802, 862535, 422215, 48720, 320771, 924414, 711265, 47276, 561438, 428538, 155712, 270616, 517976, 77000, 18598, 68315, 556926, 6698, 91115, 610709, 593144};
    vector<int> prices = {793799, 794417, 206073, 961170, 213563, 683285, 638113, 7983, 435160, 26058, 365716, 175524, 725714, 519584, 354234, 415336, 136057, 958753, 664496, 228715, 427949, 116856, 72683, 423898, 33518, 862266, 262745, 295956, 8170, 22058};
    vector<int> sales = {189, 748, 510, 887, 870, 232, 139, 748, 558, 767, 855, 93, 426, 355, 346, 780, 543, 281, 860, 209, 855, 876, 304, 46, 263, 556, 34, 491, 790, 612};
    vector<string> items = {"DA{q J7}gUA aC", "(VI", "ruNt=y", "6RI0|", "'M J>_Y$w?q_F7m^D", "3els76=zo_I? P", "?,x+c+=$fi,oJAqE[!p", "UCI'y", "6j3M4avy\~\"$b", "?`*SU-SvK[Dtun;1>~%\oE5MMV7;", "-/J-"=-6-", "b!vqPo<`2=Rr=7dmXL", " |PJ8K", "m{@v", "<Mx:b"uMV7H&6k ?W2NzX", "$cAtk", "eaBtq", "M2 ]Bh]oQp]j", "N~w^r4", "E]&QFxFwB(0U\4&,*u", "$S", "y|#jcwPM", "/Vr5f-C{", "kx?lalIPHp&\!eAT3", "uc$d@C", "Be+cp7/as@", ";S,gGq.XzVW", "9%$^E6KQ?)*0!4?713", "~XA0uZzX6zWOug", "CM}9!+N3k<0L_uK"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "6RI0|";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> costs = {594134, 362003, 553316, 185238, 57676, 763430, 95700, 925627, 159412, 557443, 150129, 127304, 505410, 551572, 753719, 634854, 155249, 411014, 265617, 624605, 307484, 424598, 449853, 26801, 546428, 630892, 174554, 119626, 7774, 931934, 930366};
    vector<int> prices = {592658, 26045, 257093, 128066, 378138, 799490, 437410, 500540, 818725, 418542, 945724, 731697, 509526, 1717, 901933, 112555, 947988, 419926, 822669, 370460, 713744, 690293, 405221, 135149, 159262, 843966, 67890, 71014, 1833, 67324, 454295};
    vector<int> sales = {218, 698, 162, 582, 62, 11, 490, 762, 650, 600, 684, 785, 349, 121, 817, 960, 742, 374, 758, 543, 266, 710, 422, 231, 915, 260, 475, 100, 358, 929, 423};
    vector<string> items = {"-4i)u8+x*T.1-Z0`2M4l", "34rJIcc]", "h?R)@I6$mP-O[", "Ya<#qEt/,", "_&0@~#9(r", "_l7Mh@^fP^C,B]", ")Daw<#$i]jd@y", "5*m65@aJ9j*s0Q}w;_1yuOmKb";
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "!KCE&}5d]x<r0"M>)";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> costs = {984542, 703199, 929850, 204228, 306294, 186216, 169087, 231965, 890124, 184045, 269505, 534092, 519505, 461468, 92006, 145793, 159904, 397883, 478419, 319508, 579001, 292753, 766333, 166561, 869734, 194307, 5454, 392106, 481482, 286699, 875899, 354027, 441752, 905454, 196203, 960669, 780455, 717337, 872948, 724719, 973603, 981818};
    vector<int> prices = {693884, 350213, 860846, 303976, 361171, 359667, 495114, 855465, 599023, 300525, 969995, 687696, 290737, 209254, 491276, 428626, 613339, 345501, 747837, 448200, 423729, 505411, 522227, 458095, 218503, 265489, 641836, 352003, 780477, 519164, 680304, 329434, 4313, 695730, 800821, 700659, 183537, 861064, 583279, 443924, 211011, 799147};
    vector<int> sales = {416, 601, 42, 136, 286, 603, 793, 453, 99, 106, 394, 435, 89, 722, 710, 329, 985, 528, 684, 842, 402, 594, 563, 84, 331, 431, 874, 615, 749, 769, 764, 522, 502, 900, 381, 930, 458, 642, 856, 136, 85, 689};
    vector<string> items = {"h&F$Chy_.|>c0fs#g~`t", "eB5g*^Gb9}2);u9";p2f";
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "8.g}kbUp[n"u`:df<-.";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> costs = {490346, 395382, 192459, 798330, 768153, 166422, 446554, 574717, 84999};
    vector<int> prices = {236230, 534205, 687484, 117307, 559427, 634013, 797744, 918430, 354866};
    vector<int> sales = {330, 461, 71, 738, 261, 805, 208, 64, 808};
    vector<string> items = {"LF|asVr`Q9h(8", "J4<L`/g`Aa]InG.", "M", "XNB9rp>A5", "s~DF-m", "y]I'cP IGkx", "@$ `atst)R8", "gizunz1*Hc~k?u)", "Zk-%OsIyc?c:d^iJ^Kv,"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "y]I'cP IGkx";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> costs = {162893, 379172, 242090, 956152, 767243, 990957, 643741, 269975, 424095, 852661, 848958, 461924, 548251, 380667, 279969, 50867, 771101, 354876, 266681, 66252, 257263, 624362, 401293, 792728, 542622, 195321, 904412, 356425, 199633, 866796, 834661, 574039, 265820, 859657, 249228};
    vector<int> prices = {813592, 938464, 950374, 378272, 177813, 887589, 54171, 789117, 6517, 849242, 907492, 510649, 820733, 37096, 34445, 846796, 372561, 872718, 525339, 948470, 102741, 793600, 261777, 284148, 749604, 245863, 179526, 457912, 432204, 124393, 203916, 279285, 823012, 751213, 387566};
    vector<int> sales = {1, 633, 927, 724, 83, 987, 584, 91, 383, 380, 666, 578, 628, 90, 509, 910, 534, 808, 278, 633, 673, 796, 944, 23, 304, 964, 827, 378, 768, 223, 307, 158, 629, 908, 116};
    vector<string> items = {"O!q?nI)Z#xo", "jJ(@_mriLa"UXe^YK$6", "9P6vN`V1@L\O>;tjh7~85", "'!EM,-\S|{RoTtsMI]k*7Qk@\l.iKm)", "C?aiC<'iXB+t#fXR$#j2", ";^or'/H|=b|&YK(:n", "&/].uxu3A+", "Ki|b9~r4g"*;", "^_O:Dnq'~o", "wGG-0|_'flZ|4CD", ",]<#wJ"y5?7(g", "7I tppU"I", "#mZI2yB_~o!L*ur<8", "(c[.@r#[f!UR", "DSJZ%VD*F+}n((", "<Hs5_(!1", "I{=@-\tft", "0+O#.BX6wY$)S*w2", "O9D*z!5*uPL", "XRiamf]F;t$)n&ifXl", "^3*I8;Z.(Bz(_k279Kj'D(&Y", "UfZHb", "buOcLJ:Z[!1"9", "MKx)", "xfeFvQ1"", "y }XmEq~21C4Frmn1w<Zg", ":`|uG_'jo>3t=(!", ""ISxf#*e", "c]r>r", ",jH?yW<", "OQFma-wpF", "XN", "~1Q+", "$!k>n%7'*OSE_c}f8`";
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "<Hs5_(!1";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> costs = {466399, 35075, 598719, 27011, 434942, 488888, 887579, 953958, 303154, 271911, 166739, 978846, 813067, 852729, 135977, 608165, 743702, 546357, 840210, 700915, 594911, 192124, 614359, 429742, 502428, 535823, 536669, 212435, 207657, 810451, 532137, 441610, 774429, 932992, 17049, 338144, 601557, 346573, 282598, 637905, 710751, 79976, 951755, 191559, 210749, 372192};
    vector<int> prices = {733032, 627436, 263619, 337496, 879665, 483088, 706035, 458496, 732510, 925136, 587390, 948007, 252654, 942479, 534615, 4655, 844898, 811606, 663393, 590128, 428451, 456859, 235620, 199397, 871213, 877812, 881895, 997911, 25785, 46389, 420541, 414525, 996527, 702740, 913744, 353530, 836374, 706100, 190478, 951687, 658754, 716707, 858121, 358103, 663765, 93057};
    vector<int> sales = {215, 157, 346, 591, 91, 384, 213, 889, 3, 643, 619, 270, 36, 783, 937, 245, 222, 759, 659, 203, 786, 165, 484, 294, 440, 541, 77, 454, 255, 977, 675, 179, 494, 298, 495, 919, 266, 56, 505, 466, 212, 212, 307, 648, 864, 111};
    vector<string> items = {"Q;x<R9E!sZX$eB", "Yw>[?*^`YMQlsm&]FFd", "smAP5", "iL^6)k-pUqMTdZk", ":{AV,b+2{J&$;vzM5c|LH';J$>!lsbr", "01o(X(V73@~Mpz9onJzc*O"B", "O4#t!W-iWvkyi{g/", "67eSZY9(-#o", "S\<K}tz_zH", "P,b69RY>IV", "h;%R0%c0?8", "YEk8mWI4E|q3", "ve/BW^s)zaL7w".", "|ec9O4'Wbctyp|`Qiel%RO@x", ",|4fGmjne'r#P1G!QJ/", "E~R)P5KWC=)n", "I.>Y\XOeMtX=QP", "lg]m!g\]H;0ta'E04KR&b13Qb", "JIu+W$as]f?yy"dfN", "vVfFt7Loi0V*LS", "v(Q_B(~uf$t7l9", "-EsXu*TQ&~uvN\B?VXDBhP#&]", "lwn2Ll|;8SX8/", "\ UP`Mt6`h", "A-6Vxrbm&ppk>i&Z,~Gf", "v\bTCazk", "L["~", "rN:d-[6KiQCa", ">Y}!F=FbJ](OWcOd6F)m:n/4", "OaS#C2z", "o``K04rYU|Tg+U", "Kw8EsmdeM__^", "P4h\TQ.q,", "+!xvCI@S~_", "?*]0G3z"|j", "s$tH#|IlXOFd<vE}q-\yERmbW", "LyxfdL'. n", "+XD^wn", "dmj./rxTuy", "`#vfdJ$C", "rQ#I", "vq}yg0$sCU";
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "?*]0G3z"|j";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> costs = {93048, 66583, 741184, 733303, 149861, 412653, 40644, 535493, 103199, 188962, 285325, 389695, 558464, 955050, 9752, 212855, 41243, 944274, 528550, 891748, 708401, 11947, 997273, 782012, 368951, 82928, 593358, 447513, 804353, 122871, 914719, 506565, 118946, 141725, 18917, 20095, 321130, 348360, 961702, 385111};
    vector<int> prices = {66691, 860339, 232557, 609231, 534999, 494531, 350582, 196151, 242184, 374406, 490887, 553489, 882123, 428918, 31259, 921616, 99480, 851713, 275146, 860295, 231622, 650496, 247987, 341448, 130039, 953558, 574533, 297838, 443196, 906698, 217720, 905880, 594829, 949946, 424519, 147516, 231234, 268864, 207775, 529521};
    vector<int> sales = {577, 849, 336, 441, 337, 636, 409, 694, 956, 951, 482, 421, 941, 732, 426, 264, 325, 634, 427, 576, 472, 700, 257, 744, 563, 841, 387, 391, 829, 355, 79, 543, 943, 191, 620, 151, 875, 498, 177, 534};
    vector<string> items = {"~T%d@", "!^", "Zo~T", ";]Q~0r4!y[", "ykI,R-V7B#tvE", "L7#oriqBTsyY", "+lENy$o d\b9{R7hFF)O", "BCrfKzA5\~S~Xp", "au}Pzg", "T,#_QF", "$R7qb;"Y,`9", "ME` C5%Ur-n$]", "2*W$*'MF#", "+{YdDC", "E~EyecDJ{^s", "^ZH$dr/F}U", "eDz.V:F$Hm}&~oB", "rwG5k}cTH`sf";
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "*~Uv@#`x)";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> costs = {731646, 313913, 651449, 949529, 663672, 484197, 770061, 380729, 745613, 579653, 375906};
    vector<int> prices = {816573, 641923, 801669, 774594, 926039, 472370, 308649, 508775, 569990, 552707, 751915};
    vector<int> sales = {597, 977, 272, 418, 347, 108, 456, 359, 188, 330, 912};
    vector<string> items = {"Ijqv,85SFa", "*4\[BJkeEX#<\pN&\O]", "|p&\D_", "i$SFK;na`R4", ""REhg[\U,R,7-", "F$;~%(QmbEf}z'4";
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "qL;!LKR4YN";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> costs = {244252, 385167, 247598, 525736, 269898, 361481, 479053, 610798, 197376, 957551, 432071, 876548, 581533, 153092, 89366, 672152, 824365};
    vector<int> prices = {415454, 966438, 395125, 670708, 226023, 910563, 934034, 288480, 358013, 905389, 868153, 885866, 389475, 539774, 955342, 351896, 654480};
    vector<int> sales = {649, 613, 36, 392, 547, 371, 886, 509, 839, 755, 761, 764, 201, 247, 393, 127, 937};
    vector<string> items = {"hmA%", "6cGS#= IR_78", "kf1(rm2.n9{;Vnz1$5MO", "O{!g$~{wfyy`4e", "ow", "tOrG*o|qa*>n_", "*(@,=F>6W", ">yKWQ", "dfo_"U=r]Sa", "Xc2Z|wp55", "i6H3"z zzu", "}gGkrb%lN9*]", "JKO9QOI DT:pp#@[7W;q", "Had<&y>Zlc&zO", "5vwsTp3[l^:uruw?", "N-!p'&Y={#A0`pV_", "s!LRX ^CNg2g%UJ6[@1Wi`4"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "*(@,=F>6W";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> costs = {263155, 490208, 904784, 973703, 916777, 144525, 761627, 463089, 932079, 637800, 250873, 163427, 995614, 15154, 802541, 803819, 521138, 443583, 263885, 669726, 982439, 875889, 810991, 161641, 891239, 317818, 527136, 680760, 520332, 438038, 359847, 129715, 363390, 846017, 251015, 945253, 770215, 126809, 479614, 684031, 994778, 588191, 803472};
    vector<int> prices = {793647, 622823, 913683, 951695, 995539, 42573, 316006, 654029, 411010, 447143, 977892, 678011, 789834, 939680, 560045, 490507, 67643, 630112, 489691, 442984, 895623, 523437, 355064, 564062, 703791, 527221, 48931, 380706, 257785, 283932, 71820, 813587, 134803, 48514, 481219, 624408, 722161, 274175, 258694, 556361, 172890, 687014, 179961};
    vector<int> sales = {452, 70, 792, 582, 275, 864, 477, 460, 60, 466, 426, 649, 516, 217, 602, 889, 284, 564, 84, 709, 636, 386, 392, 756, 598, 674, 20, 580, 959, 422, 815, 219, 657, 739, 942, 882, 306, 777, 508, 187, 130, 246, 631};
    vector<string> items = {"60fLS~wwTYyf57", "qxj2/{W8:", "ai~[pO#nS4BelRh~2", " DEM.9'\YOOBGrZnf-;d", "um$ ,fiVD", "]6<`Qf^p(", "l(HTn(", "[g]jv*S5610L+Qq", "\~\A*,{W2wX2Qp^8NSho", "s;@5k%(H{`Csm0pH.UX", "YB", "?rXf5UD,s$", "QH#[b`mlu"RYthEF_t", "31F!PE|kA[f|oN&<cVZy", "WQ##(", "g0FVzM78uLa", "X+&I#]}G>Wqj", ":C}2.|a e^L{^4'V=3J_", "5[+LcxG~n 8hW.B4(1]H", "%jX5(=", "Te0HOhMvB7dd,X", "*9;o~YSk7Y|zl"&p5ykK[lAL"", "YJG^dE-8", "a6n0YJ7B", ">'yEmxBnh"IETkon}kg7QO?aYu^", "+ -Xtg9nWL_", "zP-0n^WERx?x", "jg55'W(W#", "){|U1@(;ni9)FR", "'M,Jy}l~Fx&lM\", "5es>@^", "vd>qI'3R:JXUNhX|0", "b2$ESPJM)>LMeM", "ezovh-!0\j-{UDJ5gx", "h}B/27", "B@w?0{#WM7%6pajA><b", "WwnbBvd}>~"", "1"OHPuD0kP", "C/G;.zerpr/-", "V{<]ol.0.q", "`r0Y~~&OspT", "HaZoQ", "EI!=""};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "?rXf5UD,s$";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> costs = {939785, 143803, 855391, 104528, 125388, 327645, 481487, 423583, 879161, 316268, 767656, 745951, 970623, 731284, 110181, 288962, 623975, 252913, 992694, 697604, 808481, 885009, 104515, 457946, 15734, 934060, 493640, 958325, 797326, 940303, 344945, 401492, 193507, 279320, 61616};
    vector<int> prices = {672637, 741272, 53804, 883558, 682456, 11856, 341735, 876533, 620155, 232045, 381677, 824201, 400640, 242837, 11764, 862893, 96699, 38634, 290797, 709241, 639214, 744979, 837820, 374099, 99094, 354823, 309698, 254871, 348934, 536214, 954115, 446831, 124411, 259517, 417020};
    vector<int> sales = {844, 730, 855, 837, 771, 122, 693, 959, 487, 627, 686, 226, 326, 293, 347, 839, 921, 89, 344, 779, 866, 768, 945, 188, 677, 207, 695, 436, 364, 694, 526, 913, 211, 205, 349};
    vector<string> items = {"!B+T", "PoxlcN", "iM~P3hN7uKL^jco", "ZKB:qZ7^1 l%>z3l9", "[*ifH?}@";
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "z7L(=#$?f"T]sHP}p:<*79";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> costs = {575283, 349736, 190893, 57252};
    vector<int> prices = {853237, 685173, 239493, 398432};
    vector<int> sales = {966, 875, 42, 484};
    vector<string> items = {"XY;", ")_F#WFAV,82F", "`W", "I_"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = ")_F#WFAV,82F";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> costs = {453292, 159120, 223444};
    vector<int> prices = {347303, 192217, 223191};
    vector<int> sales = {375, 22, 668};
    vector<string> items = {"DowJ?am}hdnxmw";
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "Z_nWgB`h>M";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> costs = {50995, 688711, 48653, 788013, 217238, 521391, 929016, 838584, 685656, 473601, 295705, 817917, 171122, 748817, 7399, 677839, 319160, 611355, 410009, 192544, 290, 393771, 880886, 67696, 595472, 805015, 849668, 372753, 510788, 810250, 118452};
    vector<int> prices = {99616, 546080, 36748, 297021, 558226, 754577, 798380, 979961, 498419, 973720, 357343, 30611, 98542, 499846, 519920, 96162, 340537, 846262, 644378, 850303, 776562, 708236, 402000, 65648, 880705, 985144, 215522, 741217, 600437, 996641, 612258};
    vector<int> sales = {2, 943, 863, 47, 275, 551, 669, 660, 666, 474, 928, 436, 617, 983, 69, 549, 757, 157, 169, 912, 92, 617, 733, 232, 897, 423, 879, 245, 923, 662, 882};
    vector<string> items = {"oRKFUrSi>", "EwW@V^J&", "upRm%[zZBdxYhIU O", "l#/{", "h2&KK)/ijv.[MY", "@/Oci.AKOf@)O,!YST.e.R", "OIo6=xf/lfx{~>$n|RvQV", "{0,6IU", "Av(w*mbwe", "B$98s2", "%o"k8{;:X3", "UA'oG"", ""ku!sZ$26]`AH' D#w", "Iq(YwSH?x.cg", "&"T[D?2<", "Jb)=7Ts", "Z=", "xf;~\>\>a,D;v'X[Nvd", "6~(6`ov9l*sl2", "aXsTI", "vdMm]}|%863r", "UvI'qQB*gq=wcA", "#AIw'/(iAv%|nOx", "aA<8`KgIi,{3.h", "(Wyrk]Z)Ib>(pds>", "Oy=UJ]j", ";}lTNyb`G^", "xlE:", "1"IeIs_wkMYN,v|H", "Bb_cj", ".`Sv6m[(&."};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "aXsTI";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> costs = {241953, 177017, 620609, 826621, 995690, 530283, 513380, 985941, 555960, 165544, 794903, 724728, 622930, 475443, 721104, 429655, 963799};
    vector<int> prices = {424948, 325670, 144085, 44913, 628363, 712129, 357983, 848965, 491013, 131798, 314877, 667054, 325960, 150611, 446279, 190811, 716383};
    vector<int> sales = {691, 407, 421, 480, 352, 886, 832, 481, 583, 690, 497, 802, 79, 789, 308, 152, 17};
    vector<string> items = {"{Q*?!Y<""kD?If4Ry3", "ln", "z8f(WHQk", "'W^36GZ8Q&1tO]V", "e1?WLgD u#w&Mad!8", "){nH1a-", "3NnHAm3qS", "zh|K%3skk'iK", "=xm45V*k", "s$j!C[RjDl(?S", "dE&"?BrU8*/*hG|Ga$62GYj", "sLG", "O\P[r>Ic", "?/jdUdIaco%y_s&", "dHW1`9`)rn26ZZ,Sg", "R/-$B.0`@", "hW{P,;$F9CD"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "){nH1a-";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> costs = {818397, 364399, 21628, 39224, 957176, 788396, 932446, 96960, 170237, 927462, 748096, 902549, 909417, 489314, 776135, 366121, 473421, 644441, 871736, 474553, 676, 520944, 706600, 539098, 553744, 586644, 913253, 527574, 651836, 289803, 2327, 168543, 222004, 266111, 175223, 114425, 511139, 592537, 189722, 14584, 131658, 676278, 702173, 202507, 790619};
    vector<int> prices = {469638, 832331, 741300, 163890, 862846, 607418, 38525, 623842, 910920, 169244, 561489, 849634, 803789, 484387, 327171, 631868, 957062, 652922, 125336, 390813, 189126, 749628, 195419, 876493, 506655, 173284, 79962, 738287, 279193, 484245, 720479, 495766, 108722, 786145, 287093, 16811, 354822, 532123, 825600, 835195, 97100, 868037, 886591, 28255, 209946};
    vector<int> sales = {502, 405, 965, 622, 823, 238, 11, 222, 689, 904, 377, 610, 17, 472, 862, 919, 687, 396, 584, 639, 15, 856, 967, 376, 369, 589, 506, 782, 923, 647, 164, 368, 164, 394, 225, 885, 56, 499, 554, 598, 13, 162, 79, 689, 75};
    vector<string> items = {"(O6NZ\,", "GKx_,a9$3", "NMRzn?", "/\nmI#|GJZNX", "RhlP$X.wXw6l", ""N\H<@Yu<p1S[_YL=", "xhU9UHV.=( -x", "%qtb^%(t=>i8#RbYqi5@eT", "2&@PXT-L", "oN8LD'kD8", "d"T`eAW?", "RijYaKaFC", "Ava8X~tXL", "BZdcwypG('{", "*x6;E.{PdA8a", "]^Ayy&4IKT6", "g5hwksO?\ICKVH", "CdR@OqZ", "XZ; ", "KmB+,NJ*a", "\4T3'lzU3mG?4.+g;6SC1r", "^e8Q5~x.", "[vi([0hJ'4", "t4Gr+}=\N']~iC", "(cQ[?w0e`~U'", "7GfX#ZXx0Vk", "v0k QLYbb", "X[=B^E<", "<>8B8pleU"r", "V |X$", "@}e aV]qFC@v^", "UO^wae9V>", "6{+", "?4", "!A 1X:4MG", "E:-<Kx#fNZ4\0UW3nfXOV", "ffK>oFRg.n'0l6Z*Tgv^jonV", " ThUC4g f>r:]c", "9D/N'?9D", "cRy5I[26", "W%[cD%Q4RezKu", "=N+oh|"/RQLQ", "X{", "y#Gq5ZA)swy2EtU", "krz5G4Y,l"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "NMRzn?";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> costs = {860951, 759282, 142501, 829967, 215303, 384438, 348639, 528672, 891015, 608859, 610018, 233059, 737483, 576983, 420403, 761964, 163446, 831384, 919739, 863875, 751459, 927047, 430499, 568901, 681718, 854237, 915758, 265343, 67708, 564443, 403503, 389436, 311657, 836779, 10107};
    vector<int> prices = {301064, 7465, 935310, 777962, 613901, 244766, 789114, 507406, 776501, 15792, 220458, 854602, 701153, 439184, 954095, 617776, 818317, 914203, 339441, 26807, 411075, 595403, 943040, 322311, 656177, 393801, 314697, 799541, 667012, 652855, 800515, 910061, 320843, 276978, 483923};
    vector<int> sales = {965, 475, 416, 568, 825, 519, 29, 395, 703, 287, 344, 275, 25, 514, 344, 839, 237, 350, 347, 486, 415, 515, 481, 681, 658, 764, 122, 156, 718, 123, 258, 758, 452, 13, 147};
    vector<string> items = {"y4}Mm~q0]l!8X#CGZ";
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "eGc0*Bu?LKl";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> costs = {129076, 181871, 539964, 521830, 221269, 811312, 879632, 8469, 735084, 183699, 541011, 113207, 782680, 593457, 373462, 673587, 514236, 441936, 704860, 270626, 567052, 156220, 465989, 909868, 928396, 408000, 10564, 330376, 354736, 870892, 678240, 234957, 877898, 96393, 879318, 90605, 501251, 959148, 983999, 195495, 805102, 181607, 682998, 937127, 495902, 601909};
    vector<int> prices = {855804, 727343, 766972, 919660, 949287, 358121, 7051, 971929, 851199, 236862, 421599, 689174, 124737, 523750, 772898, 599976, 848736, 989896, 130755, 730571, 509229, 266018, 799234, 378272, 255250, 414337, 351379, 863375, 416493, 242724, 135723, 543352, 903243, 960480, 259382, 226532, 258708, 546855, 655090, 531625, 761037, 185065, 457060, 966390, 333814, 705949};
    vector<int> sales = {71, 474, 428, 982, 520, 713, 725, 10, 624, 673, 477, 438, 616, 468, 35, 217, 66, 820, 688, 173, 70, 536, 969, 353, 745, 621, 918, 16, 226, 713, 155, 886, 822, 624, 626, 684, 540, 467, 755, 145, 972, 735, 91, 340, 702, 223};
    vector<string> items = {"AE&e;(cUS/I", "Cs:cy/h3", "m,qM(Rw+", "mvK;`yC<R", "]ReoJp&,_j*~>", "20*AeZtkk", "zOOW4i0", ";qj+6)Arv", "u`zb9VS,@d", "MhnM\D__2&ak\JIwE,]Yv^", "G/4voQ ", "-|(w]Tr2C$7Ud=", "v~*Yi0!"7Bz(Z 30", "f _&rcyPzw_Z", "ltl'", "wiu<K#ha", "?yR#0s", "qqNh>C&k!6pv~gV", "r#:", "r8jU", "e*\CVHZ{Jf$fG!O_", "ieP=E0fUuAk~1", "<A^W]Fq", "eEG6[.2", "QQ&kno4=i", "vw !NycanR^i?OPb", "44pTw|-cG", "-PAP:U", "#@VR`E9&JX", "B<81D"", ".sot+'~a)\", "M", " d~*m(*>0It&?xaBRFeVx", ",|{yz!87h", "vj!veFAc4<9=Ri4^REO_9", "1[|T'Pby_", "d;*4>uZQ/eI+gd{^RSd<", "dvuo", "-gKO2L$", "3E4A+8M", "+tKJvwm;KYZAQdW{rC", "ZV%YT", "J", ")h0vd:Fgk%GP'-k", "\{0jL"'?=,)l_w", "k7jFV1gHE3G(wIsw<9J"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = ",|{yz!87h";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> costs = {450775, 574756, 193606, 13032, 561612};
    vector<int> prices = {956213, 484698, 904213, 650496, 876907};
    vector<int> sales = {195, 999, 408, 272, 337};
    vector<string> items = {"5Il*", "qQ}3iJdhZE"7";
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "XYA-p}O}w6vRxN^Q{T";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> costs = {887246, 866003, 639601, 892092, 280062, 516491, 604418, 24595, 501408, 233461, 927733, 535351, 129152, 130351};
    vector<int> prices = {576836, 327718, 105940, 241148, 712732, 760465, 932239, 696274, 796634, 694470, 323301, 354566, 258841, 535652};
    vector<int> sales = {156, 630, 988, 258, 281, 700, 847, 646, 970, 943, 921, 925, 10, 178};
    vector<string> items = {"W6zjeJ(-", "O<g*6Q#3!uqQ", "eO^@!/_U"{v", "#6x,'4<gCCx", "QMaE\)JIb$Mcpvk-a~PeD", "'3_$a9NFSx4pt\EkYv}U;:_", ",LFo5}0"%ysQ:t>75fn_&";
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "[D";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> costs = {622732, 497005, 891957, 409460, 580869, 460798, 143211, 939429, 550960, 584543, 132221, 670517, 790672, 222570, 741918, 123454, 999105, 825861, 269451, 212348, 478884, 750831, 563022};
    vector<int> prices = {91721, 326567, 176036, 66374, 176369, 321152, 520757, 453728, 133775, 794708, 837671, 973609, 181367, 157796, 55972, 816419, 467564, 810538, 492954, 649348, 400732, 36116, 620931};
    vector<int> sales = {243, 56, 423, 159, 341, 676, 604, 647, 130, 107, 755, 206, 846, 53, 760, 60, 408, 570, 443, 898, 900, 856, 684};
    vector<string> items = {"T?"F'{:!`Q&V", " A()Z", "FC_)*", "=KcV", "~" ]@fH,zDo@:crw", "gCkvl.", ",>5i}<Q=m8z5#7J%1|", "*sf4sWBy>,4H\cy8n2)m~N(E", "BW:P+h9^|PtN", "?D4nrfrOP", "M?sV_|Ib@+1^$j5nQ", "x&z^1lYY;]1M]", "\I^>nRdJ/'2Z", "I0=;4d5n`v<Uq.M ", "qcH/LTE", "QI?d<v=r@q{W#SAg(J", "U:y"7[UQ^CI]\", "5> Qs5=<)65{sVtp~iP", ""=V+", "`mrCD\*~S", "yN5?,/N", "K:Z{:wQN-a(R*%[i", "Xf_tN$?"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "M?sV_|Ib@+1^$j5nQ";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> costs = {791381, 37166, 626812, 106840, 810342, 541368, 9928, 813006, 403883, 964540, 331984, 462809, 140529, 809130, 242761, 846818, 348026, 806199, 238095, 947275, 506375, 445071, 522124, 636366, 125416};
    vector<int> prices = {527603, 969269, 5212, 477518, 596759, 276332, 153767, 570779, 196451, 643473, 831646, 763491, 547781, 291202, 155414, 669154, 330460, 644195, 798599, 368500, 10246, 282362, 70765, 959125, 126310};
    vector<int> sales = {400, 205, 958, 722, 831, 649, 5, 398, 375, 787, 315, 109, 700, 909, 401, 745, 954, 25, 908, 464, 955, 197, 9, 782, 561};
    vector<string> items = {"5E>wCV?6n", "c"w~0WIH", "dN;;&W3VW}':a;^>"";
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "9[=@^m";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> costs = {538085, 306931, 714957, 359763, 680640, 470142, 61964, 499156, 850295, 210336, 88826, 75551, 336469, 78890, 423224, 399986, 196046, 85663, 962651, 416919, 834444, 965199, 943424, 156241, 830287, 439816, 394759, 364304, 366245, 599501, 195467, 844479, 657179, 43162, 886632, 427976, 765305, 391924, 478585, 879388, 394047, 287503, 839139, 261910, 880786};
    vector<int> prices = {893101, 792000, 443686, 936419, 79179, 415436, 515813, 458548, 60377, 483663, 860145, 961834, 8400, 629183, 721005, 437365, 109255, 806247, 817760, 727185, 975898, 557732, 783355, 985713, 640427, 639970, 762496, 663128, 908615, 389341, 834855, 570490, 727089, 146066, 332229, 159590, 550427, 837234, 240053, 265286, 349728, 36474, 540773, 171242, 650570};
    vector<int> sales = {688, 100, 60, 767, 172, 5, 579, 758, 684, 676, 328, 436, 15, 785, 884, 833, 630, 451, 845, 568, 91, 926, 557, 555, 450, 938, 215, 211, 211, 963, 680, 444, 312, 735, 654, 290, 284, 603, 297, 391, 532, 838, 860, 896, 650};
    vector<string> items = {"x[#zd7)Dp#L{}a", "d/EsA*2nfpV"G", "^]e50&f5SVKEZT\|~", "4&l"le'`1G\.[8m$:Z#'", "8DDN", "iD`i8", ">\8$*HqV3=>*'96", "MEE]E2#|", "Ad7^#5Khv", "TN]wEikQ"QHwgtf}5ke";
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "99q;-[NK HCfMj%~fQ,%z)";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> costs = {100};
    vector<int> prices = {110};
    vector<int> sales = {3};
    vector<string> items = {"lala"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "lala";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> costs = {100};
    vector<int> prices = {100};
    vector<int> sales = {100};
    vector<string> items = {"test"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> costs = {1};
    vector<int> prices = {2};
    vector<int> sales = {2};
    vector<string> items = {"test"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "test";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> costs = {100};
    vector<int> prices = {100};
    vector<int> sales = {134};
    vector<string> items = {"Service, at "};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> costs = {10, 10};
    vector<int> prices = {11, 12};
    vector<int> sales = {2, 1};
    vector<string> items = {"A", "B"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "A";
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> costs = {1};
    vector<int> prices = {1};
    vector<int> sales = {2};
    vector<string> items = {"test"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> costs = {37, 37, 37};
    vector<int> prices = {38, 38, 38};
    vector<int> sales = {1, 1, 1};
    vector<string> items = {"A", "B", "C"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "A";
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> costs = {100};
    vector<int> prices = {100};
    vector<int> sales = {134};
    vector<string> items = {"A"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> costs = {100};
    vector<int> prices = {110};
    vector<int> sales = {0};
    vector<string> items = {"DD"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> costs = {1};
    vector<int> prices = {1};
    vector<int> sales = {1};
    vector<string> items = {"T"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> costs = {100};
    vector<int> prices = {100};
    vector<int> sales = {134};
    vector<string> items = {"Serv"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> costs = {100};
    vector<int> prices = {100};
    vector<int> sales = {134};
    vector<string> items = {"item"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> costs = {100};
    vector<int> prices = {100};
    vector<int> sales = {134};
    vector<string> items = {""This item""};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> costs = {1, 1, 1, 1};
    vector<int> prices = {2, 100, 3, 4};
    vector<int> sales = {1, 1, 1, 1};
    vector<string> items = {"a", "b", "c", "jasonrules"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "b";
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> costs = {10, 10, 10};
    vector<int> prices = {20, 20, 20};
    vector<int> sales = {1, 1, 1};
    vector<string> items = {"a", "b", "c"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> costs = {100};
    vector<int> prices = {120};
    vector<int> sales = {1};
    vector<string> items = {"a"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> costs = {100};
    vector<int> prices = {100};
    vector<int> sales = {134};
    vector<string> items = {"Service, at cost"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> costs = {5};
    vector<int> prices = {5};
    vector<int> sales = {1};
    vector<string> items = {"Ex"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> costs = {1, 1};
    vector<int> prices = {2, 2};
    vector<int> sales = {100, 10};
    vector<string> items = {"A", "B"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "A";
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> costs = {100, 120};
    vector<int> prices = {90, 120};
    vector<int> sales = {1, 1};
    vector<string> items = {"Video Card", "256M Mem"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> costs = {2};
    vector<int> prices = {1};
    vector<int> sales = {1};
    vector<string> items = {"a"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> costs = {10, 8};
    vector<int> prices = {10, 7};
    vector<int> sales = {3, 3};
    vector<string> items = {"aa", "b"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> costs = {1, 1};
    vector<int> prices = {2, 2};
    vector<int> sales = {1, 1};
    vector<string> items = {"a", "b"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> costs = {2, 12};
    vector<int> prices = {5, 10};
    vector<int> sales = {3, 5};
    vector<string> items = {"Ok item", "Erroneous Item"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "Ok item";
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> costs = {100, 100};
    vector<int> prices = {110, 101};
    vector<int> sales = {1, 1000};
    vector<string> items = {"a", "b"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "b";
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> costs = {100};
    vector<int> prices = {100};
    vector<int> sales = {134};
    vector<string> items = {"Service, at cost"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> costs = {5};
    vector<int> prices = {5};
    vector<int> sales = {1};
    vector<string> items = {"Ex"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> costs = {1, 1};
    vector<int> prices = {2, 2};
    vector<int> sales = {100, 10};
    vector<string> items = {"A", "B"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "A";
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> costs = {100, 120};
    vector<int> prices = {90, 120};
    vector<int> sales = {1, 1};
    vector<string> items = {"Video Card", "256M Mem"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> costs = {2};
    vector<int> prices = {1};
    vector<int> sales = {1};
    vector<string> items = {"a"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> costs = {10, 8};
    vector<int> prices = {10, 7};
    vector<int> sales = {3, 3};
    vector<string> items = {"aa", "b"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> costs = {1, 1};
    vector<int> prices = {2, 2};
    vector<int> sales = {1, 1};
    vector<string> items = {"a", "b"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> costs = {2, 12};
    vector<int> prices = {5, 10};
    vector<int> sales = {3, 5};
    vector<string> items = {"Ok item", "Erroneous Item"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "Ok item";
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> costs = {100, 100};
    vector<int> prices = {110, 101};
    vector<int> sales = {1, 1000};
    vector<string> items = {"a", "b"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "b";
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> costs = {100};
    vector<int> prices = {100};
    vector<int> sales = {134};
    vector<string> items = {"Service, at cost"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> costs = {5};
    vector<int> prices = {5};
    vector<int> sales = {1};
    vector<string> items = {"Ex"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> costs = {1, 1};
    vector<int> prices = {2, 2};
    vector<int> sales = {100, 10};
    vector<string> items = {"A", "B"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "A";
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> costs = {100, 120};
    vector<int> prices = {90, 120};
    vector<int> sales = {1, 1};
    vector<string> items = {"Video Card", "256M Mem"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> costs = {2};
    vector<int> prices = {1};
    vector<int> sales = {1};
    vector<string> items = {"a"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> costs = {10, 8};
    vector<int> prices = {10, 7};
    vector<int> sales = {3, 3};
    vector<string> items = {"aa", "b"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> costs = {1, 1};
    vector<int> prices = {2, 2};
    vector<int> sales = {1, 1};
    vector<string> items = {"a", "b"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> costs = {2, 12};
    vector<int> prices = {5, 10};
    vector<int> sales = {3, 5};
    vector<string> items = {"Ok item", "Erroneous Item"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "Ok item";
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> costs = {100, 100};
    vector<int> prices = {110, 101};
    vector<int> sales = {1, 1000};
    vector<string> items = {"a", "b"};
    MostProfitable* pObj = new MostProfitable();
    clock_t start = clock();
    string result = pObj->bestItem(costs, prices, sales, items);
    clock_t end = clock();
    delete pObj;
    string expected = "b";
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7390554&rd=5869&pm=1774
********************************************************************************
#include <string> 
#include <iostream> 
#include <sstream> 
#include <cstring> 
#include <vector> 
#include <climits> 
using namespace std; 
 
#define INF INT_MAX / 2 
#define pb(x) push_back (x) 
#define mp(x,y) make_pair(x,y) 
#define FORIT(it,v) for(__typeof(v.begin()) it=v.begin(); it != v.end(); it++) 
#define debug(v) {cout  << #v << ": "; FORIT(i,v) cout << *i << " "; cout << endl;} 
 
class MostProfitable { 
  public:  
 
  string bestItem(vector <int> costs, vector <int> prices, vector <int> sales, vector <string> items)  { 
     string rj; int best = 0; 
      
     for (int i=0; i<items.size(); i++) { 
        int p = sales[i] * (prices[i] - costs[i]); 
        if ( p > best ) { 
           best = p; 
           rj = items[i]; 
        }    
     }    
      
     return rj; 
   
  }  
   
  
};  
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/