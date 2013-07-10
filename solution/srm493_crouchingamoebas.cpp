/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11214
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

class CrouchingAmoebas {
public:
    int count(vector<int> x, vector<int> y, int A, int T);
};

int CrouchingAmoebas::count(vector<int> x, vector<int> y, int A, int T) {
    int ret;
    return ret;
}


int test0() {
    vector<int> x = {0, 0};
    vector<int> y = {0, 1};
    int A = 1;
    int T = 1;
    CrouchingAmoebas* pObj = new CrouchingAmoebas();
    clock_t start = clock();
    int result = pObj->count(x, y, A, T);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> x = {0, 1, 2};
    vector<int> y = {1, 2, 0};
    int A = 1;
    int T = 1;
    CrouchingAmoebas* pObj = new CrouchingAmoebas();
    clock_t start = clock();
    int result = pObj->count(x, y, A, T);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> x = {0, 1, 2};
    vector<int> y = {1, 2, 0};
    int A = 1;
    int T = 2;
    CrouchingAmoebas* pObj = new CrouchingAmoebas();
    clock_t start = clock();
    int result = pObj->count(x, y, A, T);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> x = {0, 1, 2};
    vector<int> y = {1, 2, 0};
    int A = 2;
    int T = 1;
    CrouchingAmoebas* pObj = new CrouchingAmoebas();
    clock_t start = clock();
    int result = pObj->count(x, y, A, T);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> x = {0, 0, 3, 3};
    vector<int> y = {0, 3, 0, 3};
    int A = 2;
    int T = 4;
    CrouchingAmoebas* pObj = new CrouchingAmoebas();
    clock_t start = clock();
    int result = pObj->count(x, y, A, T);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> x = {6, 9};
    vector<int> y = {-4, 9};
    int A = 8;
    int T = 5;
    CrouchingAmoebas* pObj = new CrouchingAmoebas();
    clock_t start = clock();
    int result = pObj->count(x, y, A, T);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> x = {7, 2, -8, 9, 8, -1, -4};
    vector<int> y = {7, -8, -7, 1, -8, 8, 8};
    int A = 1;
    int T = 3;
    CrouchingAmoebas* pObj = new CrouchingAmoebas();
    clock_t start = clock();
    int result = pObj->count(x, y, A, T);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> x = {2, -4, -8, 3, 8, 10, 1, 8, 4};
    vector<int> y = {7, 5, -6, -9, -5, 6, -2, 8, 9};
    int A = 3;
    int T = 10;
    CrouchingAmoebas* pObj = new CrouchingAmoebas();
    clock_t start = clock();
    int result = pObj->count(x, y, A, T);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> x = {8};
    vector<int> y = {0};
    int A = 8;
    int T = 12;
    CrouchingAmoebas* pObj = new CrouchingAmoebas();
    clock_t start = clock();
    int result = pObj->count(x, y, A, T);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> x = {-9, -4, -8, -10};
    vector<int> y = {2, -8, -6, 4};
    int A = 4;
    int T = 6;
    CrouchingAmoebas* pObj = new CrouchingAmoebas();
    clock_t start = clock();
    int result = pObj->count(x, y, A, T);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> x = {-1, 2, 7};
    vector<int> y = {-10, 0, 5};
    int A = 5;
    int T = 3;
    CrouchingAmoebas* pObj = new CrouchingAmoebas();
    clock_t start = clock();
    int result = pObj->count(x, y, A, T);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> x = {5, 10, -8, -3, -2, 2};
    vector<int> y = {-8, -6, -3, 4, -8, -10};
    int A = 6;
    int T = 15;
    CrouchingAmoebas* pObj = new CrouchingAmoebas();
    clock_t start = clock();
    int result = pObj->count(x, y, A, T);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> x = {30499542, 603278409, 102784233, -217364261, -42908354, -188515827, 303844167, -243843763, 723548299, 560509018, -694324955, -549873205, -853217212, -361586295, -801076050, 973035856, 484286774, -558983886, -961740472, -172714988, -224048794, 724138032, -257930335, -863531119, -960842722, -349213543, 467093917, 249908862, 20597225, -129017399};
    vector<int> y = {736723169, 924032850, 844534001, -967818829, -643713913, -989972700, 226591494, 423849907, 304978499, -351558113, 987921161, -494623651, 811709846, -157263853, -949000676, -879282400, -413957824, 560100370, 5992606, -767458643, 307724100, -516592533, -874053071, 411530486, 84035809, 943689392, -848842311, 883859244, -617963879, 82154418};
    int A = 2705444;
    int T = 5;
    CrouchingAmoebas* pObj = new CrouchingAmoebas();
    clock_t start = clock();
    int result = pObj->count(x, y, A, T);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> x = {-130916909, -458666438, 332113747, 674269345, -21910548, 366509798, 160858126, -147561771, -578011393, -847687859, -24345767, 469854401, -571363449, -879511113, -50690484, -386771122, 525112125, -146560591, 225272641, 581342373, -414610152, 111625216, 112298449, -805814225, -237478573, -152093009, -573272363, 168182421, -907158172, 140217607};
    vector<int> y = {611927193, -868440337, -468104794, -983385334, 410364510, 426264908, -93671756, 152000173, -921330742, -163741283, -665220999, 497512060, 794657229, 881158179, 923500423, 521485402, -124606311, 924215392, -337287251, 575575399, -700821601, 956589333, 948654078, -58290684, -837273201, 497371203, 451121866, 322210259, 171129946, -917045463};
    int A = 452344435;
    int T = 4;
    CrouchingAmoebas* pObj = new CrouchingAmoebas();
    clock_t start = clock();
    int result = pObj->count(x, y, A, T);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> x = {-635879991, -543727820, -55412991, -138714426, 338539942, 854419329, -942635928, -933334956, -136932585, 879919250, 703295785, 222338676, -978036681, 655713685, 558139008, 150120820, -576149147, 822781942, 324818923, 692407265, -824992452, -339706014, -587951321, 390762119, -409498469, -202794554, -502509520, -950822795, -980131170, -109745328};
    vector<int> y = {-892691034, -333079959, 40777516, 301242135, 809545373, -885162485, -342009247, -159958942, 842378727, 313367928, 277757981, 268337522, 444686842, -266513483, 867976437, 919686509, 675197323, 712421384, 350113213, -461728840, 533033871, 836781556, 15701898, -863263754, -626049221, 801537344, -500660303, -914766321, -673956861, 382689775};
    int A = 487744930;
    int T = 15;
    CrouchingAmoebas* pObj = new CrouchingAmoebas();
    clock_t start = clock();
    int result = pObj->count(x, y, A, T);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> x = {-69500463, -96721599, 2784228, 82635736, 57091642, -88515831, 3844161, 56156234, 23548291, 60509011, 5675044, -49873207, 46782779, -61586298, 98923950, 73035847, -15713233, -58983888, -61740481, -72714992, 75951203, 24138024, 42069662, 36468881, -60842731, -49213546, -32906090, -50091144, -79402780, -29017403};
    vector<int> y = {36723161, 24032841, -55466008, -67818829, 56286086, -89972700, -73408512, -76150100, 4978493, -51558116, 87921152, 5376347, -88290163, -57263857, -49000676, 20717600, 86042174, 60100363, -94007399, -67458644, 7724094, -16592535, 25946920, -88469521, -15964196, 43689383, 51157689, -16140765, 82036120, -17845587};
    int A = 2705444;
    int T = 5;
    CrouchingAmoebas* pObj = new CrouchingAmoebas();
    clock_t start = clock();
    int result = pObj->count(x, y, A, T);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> x = {-30916913, 41333560, 32113741, -25730663, 78089448, 66509792, 60858121, -47561775, -78011395, 52312141, 75654229, -30145606, -71363451, 20488878, 49309512, -86771125, 25112118, -46560595, -74727365, 81342366, 85389846, 11625211, 12298444, 94185775, 62521424, -52093013, -73272365, 68182416, -7158181, 40217602};
    vector<int> y = {-88072815, 31559654, 31895204, -83385343, -89635497, -73735099, 6328240, 52000168, -21330742, -63741287, 34779000, -2487947, 94657221, -18841830, 23500414, 21485395, -24606315, 24215383, -37287254, 75575392, -821602, 56589324, 48654069, 41709312, 62726799, -2628804, -48878141, 22210253, 71129941, -17045472};
    int A = 452344435;
    int T = 4;
    CrouchingAmoebas* pObj = new CrouchingAmoebas();
    clock_t start = clock();
    int result = pObj->count(x, y, A, T);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> x = {64120008, -43727822, 44587005, -38714430, 38539936, -45580680, -42635928, -33334956, -36932589, -20080759, 3295777, -77661330, -78036681, -44286323, 58139001, 50120815, -76149149, -77218067, 24818917, -7592743, 75007548, -39706017, -87951323, 90762113, 90501529, 97205443, -2509522, -50822795, -80131170, -9745332};
    vector<int> y = {7308966, -33079962, -59222489, 1242129, -90454636, 14837515, -42009250, -59958946, -57621282, 13367922, -22242025, -31662484, -55313165, 33486514, -32023572, 19686500, -24802685, 12421376, 50113207, 38271158, 33033864, -63218453, -84298107, 36736237, 73950778, -98462665, -660305, -14766330, 26043138, 82689769};
    int A = 487744930;
    int T = 15;
    CrouchingAmoebas* pObj = new CrouchingAmoebas();
    clock_t start = clock();
    int result = pObj->count(x, y, A, T);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> x = {5722049, -7381841, 5673223, -458495, -5267368, 1200729, 9587894, -609331, 707511, 1844205, 8516806, 463148, 5610707, 4964919, 4448166, 7402387, -6203207, -9498855, 8994629, 1443823, 6872509, -462948, -6679104, -5313321, 5386543, -8253395, 5128267, -4454308, -3399179, -9941730};
    vector<int> y = {-4909592, -1166535, 7556834, 9030033, 8948917, -2668116, -2683811, -272141, 9311452, 2106519, -667285, -7893567, -2550346, -4922407, -2123854, 3007384, 6324434, -5220920, -7389098, -3023256, 7602988, 3506791, -9550580, 5929498, -667616, 9533057, 8159445, -6348954, -5215394, 6771275};
    int A = 7460916;
    int T = 2;
    CrouchingAmoebas* pObj = new CrouchingAmoebas();
    clock_t start = clock();
    int result = pObj->count(x, y, A, T);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> x = {-3148704, -9245148, 4314342, -1976249, -2347433, 3813126, -2435629, 3873431, 7467168, 2664506, -1384575, -4601429, 1091742, 3144270, 7795829, 6224291, 5322941, 1460784, 9799025, 7582989, -5853296, -3655959, 6192872, -9733719, -4735633, 3317443, 4724036, 7265060, 7798098, -2694902};
    vector<int> y = {-7486887, -5040236, -9760625, 6660480, 9314452, -98942, -9145589, -5902266, -3698991, 5936098, 9461106, 1668235, 1969095, -9586792, 9263259, 3627893, 8156500, 7606680, 19753, -2750908, -7743420, -6749605, 816288, -2416009, -5927967, 4825574, 1885640, -354172, -1413970, -4560661};
    int A = 7725872;
    int T = 3;
    CrouchingAmoebas* pObj = new CrouchingAmoebas();
    clock_t start = clock();
    int result = pObj->count(x, y, A, T);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> x = {-1000000000, 1000000000};
    vector<int> y = {-1000000000, 1000000000};
    int A = 1;
    int T = 15;
    CrouchingAmoebas* pObj = new CrouchingAmoebas();
    clock_t start = clock();
    int result = pObj->count(x, y, A, T);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> x = {-997294557, 256275308, 767006096, 525760443, -803707738, -877208821, -980851106, 292258743, -31956206, 682138811, 881103619, 158222392, 851595476, -859430412, -428319731, -192855589, -981095526, 262508152, 41373769, -16535683, 286418767, 229205056, -86991676, 613900859, 56311330, -683233397, 487939274, -924255887, 764510336, 754873045};
    vector<int> y = {-584868476, -247748434, -626088975, -347195413, -683652292, -744278375, 141721372, -643003682, -877493304, 116415654, -947251076, -7711713, 674275836, 313157691, 804141322, 454245682, -407545618, 798724861, 597127670, 598623196, 578388978, -674540848, 110474423, -637105630, 502691485, -695948838, -84001022, -670914999, -589083451, -665946496};
    int A = 571959787;
    int T = 15;
    CrouchingAmoebas* pObj = new CrouchingAmoebas();
    clock_t start = clock();
    int result = pObj->count(x, y, A, T);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> x = {-399606068, 550269654, 792410750, -84720794, 180118089, 818830991, -889141219, -579102862, 75671536, 229588087, 810387001, 808469961, -325538188, -698772523, 288986532, -996524593, -547797812, -755666899, 167001973, 495082282, 240941611, 82620740, -592092928, -17648194, -797282809, 921131807, -118009894, -30182991, 835624981, 214918660};
    vector<int> y = {465082047, -735812332, 110267100, -961341458, 13002239, -20555571, 587366044, 802646246, -940985009, 140988119, 412176211, -763914978, -385654516, 792301727, -457291650, 731357986, 187971539, 615353811, -62173223, -62237760, 350046849, 494120031, -616975007, -790591995, -999643086, -511862672, 348750676, 283805502, 341676614, -604269453};
    int A = 192129498;
    int T = 15;
    CrouchingAmoebas* pObj = new CrouchingAmoebas();
    clock_t start = clock();
    int result = pObj->count(x, y, A, T);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> x = {-478458321, 255419127, 590709847, 727664918, 957514926, 434025214, -343258045, 827954501, -829603890, 170553184, -231897, 584801837, 875467469, -726778262, 309178465, 404119355, -512337112, 423314601, 66886540, 477788701, -987328357, 853767401, -183723386, -947653954, -717318877, -940220360, -717315476, 549692238, 520193278, -637237790};
    vector<int> y = {298618728, 61816906, 332238454, 237020433, 562641800, -323518757, -766859972, -667394088, 376479477, -121742275, -672178343, 775270594, -355619116, 685668645, -844782060, -774932827, 975600780, 57697927, 93611761, 301951125, -783907392, 604861850, 187130805, -620796441, -956239788, -879917103, 856064614, -968473040, -532791695, -267755806};
    int A = 789337244;
    int T = 15;
    CrouchingAmoebas* pObj = new CrouchingAmoebas();
    clock_t start = clock();
    int result = pObj->count(x, y, A, T);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> x = {723098951, 714058054, -135833991, -857903934, 176902879, 735201086, 922458898, -224484442, -507292175, -884457364, -796698848, -685292029, -898876028, -144020123, 147235273, -443468146, -143829796, 468889342, -984568207, 238372923, -990811266, 836255309, 484940990, -693399999, -933255888, -816481113, -409515883, -372397037, -530494987, 937575327};
    vector<int> y = {130712632, -689011031, -706763914, 231234737, -331398103, -389571872, 597263551, -509303671, 164803598, 126708897, 914510795, -999379904, -277566700, -968159961, 489318631, 128692278, 257447592, -64772110, 291805856, -522557690, -823358856, 741706430, 138448322, 563124620, 384077936, -964449915, -891686566, -210727194, -483428162, 938372746};
    int A = 172057628;
    int T = 15;
    CrouchingAmoebas* pObj = new CrouchingAmoebas();
    clock_t start = clock();
    int result = pObj->count(x, y, A, T);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> x = {-631065928, -547655566, -755078707, -917154236, -670333594, -579823157, 952332364, -676231309, -974919888, -451778353, 707743527, 268582676, 383676455, -52327012, 271732620, -158813084, 233598613, -893429107, 922652903, -154834722, -166559992, 600609857, -570140444, -210077630, -563906484, 476660115, -940285069, -693606262, 556748655, 406354849};
    vector<int> y = {666150248, -991914476, -331827955, -593537612, 901295667, 386304528, 978422531, 223046661, 242449066, -247842128, -849057832, -575518220, 297701186, -148463368, -961080801, -602036058, 347181232, -441226707, 564308145, 940989824, -240741399, 587876309, 461220511, -765089242, 406220321, -829145165, -340226240, -854291330, 490374351, -788890674};
    int A = 106593471;
    int T = 15;
    CrouchingAmoebas* pObj = new CrouchingAmoebas();
    clock_t start = clock();
    int result = pObj->count(x, y, A, T);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> x = {-3493337, 460099245, -892691034, -333079959, 40777516, 301242135, 809545373, -885162485, -342009247, -159958942, 842378727, 313367928, 277757981, 268337522, 444686842, -266513483, 867976437, 919686509, 675197323, 712421384, 350113213, -461728840, 533033871, 836781556, 15701898, -863263754, -626049221, 801537344, -500660303, -914766321};
    vector<int> y = {563050998, -200906818, -635879991, -543727820, -55412991, -138714426, 338539942, 854419329, -942635928, -933334956, -136932585, 879919250, 703295785, 222338676, -978036681, 655713685, 558139008, 150120820, -576149147, 822781942, 324818923, 692407265, -824992452, -339706014, -587951321, 390762119, -409498469, -202794554, -502509520, -950822795};
    int A = 326043140;
    int T = 15;
    CrouchingAmoebas* pObj = new CrouchingAmoebas();
    clock_t start = clock();
    int result = pObj->count(x, y, A, T);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> x = {-980131170, -109745328, 501637443, 149913334, -441684831, -812220820, 855876318, 384931224, 872393283, -54770745, -81507395, 661143080, 468622687, -895917490, 390741214, -72927054, 404462100, -702707921, -4828802, -264408188, -885980483, 528201174, 334016281, 217930539, -470778887, 438409200, 715298157, 351775348, 85619876, -980567703};
    vector<int> y = {382689775, -805274680, 412001832, -884051554, 853963848, 523409828, -370760541, 779458559, 959609039, -239755431, -998143449, -807114915, -669104055, -960122052, 963086232, -479041493, -950952005, 181973986, -354248163, 305677087, -675975061, 665356321, 477780760, 177312046, 57913308, 338652942, -876364752, 269790093, -34232363, -458928132};
    int A = 568700535;
    int T = 15;
    CrouchingAmoebas* pObj = new CrouchingAmoebas();
    clock_t start = clock();
    int result = pObj->count(x, y, A, T);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> x = {342309707, 194739121, -861097383, -628913534, 403532428, 457067342, 723807664, -192788875, 913672280, 576164955, -219921316, -23378967, -915969195, -645967605, -745831133, 570993459, 736978536, -561034283, 247615242, -180265751, -900687691, -996184212, -9276073, 201277919, 840383906, 604608198, 700731277, 121346858, 571374804, 711351576};
    vector<int> y = {377240171, -41533989, 290405490, -286105999, -81964450, 68450042, -990289548, 776639452, 397113306, -944710241, 942710557, 867080052, -989746517, -748912215, 245730907, 438197301, -857930528, -166245070, -938165671, -740536483, 634300101, -84370280, 609244295, 980002920, 54167270, -450778505, 187186319, 512112916, 963225105, -151882834};
    int A = 112939892;
    int T = 15;
    CrouchingAmoebas* pObj = new CrouchingAmoebas();
    clock_t start = clock();
    int result = pObj->count(x, y, A, T);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> x = {-998139808, -667665059, -257257645, -891817128, 877608998, -692868224, 747650040, 928143061, -507403698, 814121980, -605396082, 920815039, 122262405, 862757259, -389329950, 538851828, 580361913, -194541267, -930899711, -509056112, 77354262, -541574628, 195271991, 157332722, -510943735, -924877352, -302208750, -731405642, -523008193, -90228708};
    vector<int> y = {623858208, 440089135, 713977303, -365858035, -783136683, -337025575, 748442808, -421572448, 878684063, -912176074, -35238480, 173255345, -853991919, -685021716, -908918542, 385195526, -732327420, 965847008, -36096264, -663704670, 620210696, 656036663, 829644914, 866879692, -203201290, -145603243, -567300521, 919695112, 202737120, 855656415};
    int A = 574236000;
    int T = 15;
    CrouchingAmoebas* pObj = new CrouchingAmoebas();
    clock_t start = clock();
    int result = pObj->count(x, y, A, T);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> x = {463830493, 692677659, -708413411, 606953660, 649018487, 465482250, -428892350, -433872369, -244959269, -132684006, 281716514, -177571267, 857959933, 293500368, -187804716, -929632276, -125936364, 878533874, 263606701, 877745666, 860967828, 911966083, -872774335, -750627935, -894156751, 107115722, 290741093, -957093841, 721519074, -983186358};
    vector<int> y = {-940970056, 757437606, -956877083, 937259307, 354957592, 74682474, 388596337, -12020285, 23365168, -940680456, -71914180, -978341197, 502423710, 201734910, -987099133, 254033865, 70664255, 678276456, -400196155, -352742638, -590450896, -938166941, -448246851, 62763226, -274900530, -114643876, 21653865, 792959919, 868441782, -974258689};
    int A = 274096944;
    int T = 15;
    CrouchingAmoebas* pObj = new CrouchingAmoebas();
    clock_t start = clock();
    int result = pObj->count(x, y, A, T);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> x = {-97294557, -43724698, 67006088, 25760436, 96292262, 22791170, -80851106, -7741263, 68043790, -17861197, -18896390, 58222387, -48404533, 40569579, 71680267, -92855593, -81095526, -37491854, -58626236, 83464313, -13581239, -70794950, 13008320, -86099149, -43688675, 16766602, -12060733, -24255896, 64510328, 54873037};
    vector<int> y = {-84868478, 52251563, 73911024, -47195416, 16347707, -44278376, 41721367, 56996317, 22506696, 16415649, -47251085, 92288283, -25724172, 13157685, -95858687, -45754325, 92454380, 98724853, 97127663, 98623189, 78388971, 25459151, 10474418, 62894369, 2691478, 4051161, 15998974, 29085000, -89083453, 34053503};
    int A = 571959787;
    int T = 15;
    CrouchingAmoebas* pObj = new CrouchingAmoebas();
    clock_t start = clock();
    int result = pObj->count(x, y, A, T);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> x = {-99606071, 50269647, 92410742, 15279202, 80118084, -81169018, 10858772, -79102864, -24328469, -70411919, -89613008, -91530048, -25538191, 1227476, -11013474, -96524593, -47797814, -55666900, 67001968, -4917725, -59058395, -17379265, -92092930, 82351802, -97282810, 21131798, -18009898, 69817005, -64375028, -85081346};
    vector<int> y = {-34917960, -35812333, 10267095, -61341467, -86997766, 79444425, 87366037, -97353763, -40985009, 40988114, -87823796, -63914979, -85654519, 92301719, 42708348, 31357978, 87971534, -84646197, 37826773, 37762236, 50046843, -5879976, 83024992, -90591996, -99643095, -11862674, 48750670, -16194504, 41676608, 95730546};
    int A = 192129498;
    int T = 15;
    CrouchingAmoebas* pObj = new CrouchingAmoebas();
    clock_t start = clock();
    int result = pObj->count(x, y, A, T);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> x = {21541677, -44580879, 90709840, 27664910, 57514917, -65974793, -43258048, -72045508, 70396110, 70553179, 99768099, 84801830, -24532540, -26778263, 9178459, -95880652, -12337114, -76685406, -33113465, -22211306, -87328357, -46232608, -83723390, -47653963, -17318878, -40220360, -17315477, 49692231, 20193271, 62762209};
    vector<int> y = {-1381278, -38183099, 32238448, -62979573, 62641793, -23518760, -66859973, 32605911, 76479471, -21742279, 27821656, 75270586, -55619119, -14331363, 55217940, -74932828, 75600771, -42302078, -6388244, 1951119, -83907393, -95138158, 87130800, 79203558, -56239797, 20082897, -43935395, -68473040, -32791697, 32244191};
    int A = 789337244;
    int T = 15;
    CrouchingAmoebas* pObj = new CrouchingAmoebas();
    clock_t start = clock();
    int result = pObj->count(x, y, A, T);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> x = {23098943, 14058046, -35833995, 42096066, 76902874, 35201078, 22458889, 75515555, -7292177, 15542636, -96698849, 14707970, 1123972, -44020127, 47235268, 56531852, -43829800, -31110665, -84568207, -61627083, -90811266, -63744700, -15059017, 6600000, -33255888, 83518887, 90484115, -72397040, -30494989, 37575318};
    vector<int> y = {30712627, 10988968, -6763915, -68765269, -31398106, -89571875, 97263544, -9303673, 64803593, 26708892, 14510786, -99379913, 22433297, -68159970, -10681376, 28692273, -42552414, 35227886, -8194150, -22557692, 76641144, 41706422, 38448317, 63124613, 84077930, -64449924, 8313425, 89272803, 16571836, 38372737};
    int A = 172057628;
    int T = 15;
    CrouchingAmoebas* pObj = new CrouchingAmoebas();
    clock_t start = clock();
    int result = pObj->count(x, y, A, T);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> x = {68934071, -47655568, -55078708, -17154236, 29666405, -79823159, 52332355, 23768690, -74919897, 48221645, 7743519, -31417330, 83676449, 47672984, -28267386, -58813088, -66401393, 6570893, 22652894, -54834726, -66559996, -99390151, -70140446, 89922367, -63906486, -23339892, -40285069, 6393737, 56748648, -93645158};
    vector<int> y = {-33849760, -91914476, -31827958, -93537614, 1295658, 86304522, 78422522, -76953345, -57550940, 52157869, 50942168, -75518222, -2298820, -48463372, -61080810, 97963941, 47181226, 58773291, 64308138, 40989815, 59258598, 87876302, -38779496, -65089243, -93779686, 70854835, -40226243, 45708670, -9625656, -88890675};
    int A = 106593471;
    int T = 15;
    CrouchingAmoebas* pObj = new CrouchingAmoebas();
    clock_t start = clock();
    int result = pObj->count(x, y, A, T);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> x = {96506659, -39900762, 7308966, -33079962, -59222489, 1242129, -90454636, 14837515, -42009250, -59958946, -57621282, 13367922, -22242025, -31662484, -55313165, 33486514, -32023572, 19686500, -24802685, 12421376, 50113207, 38271158, 33033864, -63218453, -84298107, 36736237, 73950778, -98462665, -660305, -14766330};
    vector<int> y = {63050991, 99093179, 64120008, -43727822, 44587005, -38714430, 38539936, -45580680, -42635928, -33334956, -36932589, -20080759, 3295777, -77661330, -78036681, -44286323, 58139001, 50120815, -76149149, -77218067, 24818917, -7592743, 75007548, -39706017, -87951323, 90762113, 90501529, 97205443, -2509522, -50822795};
    int A = 326043140;
    int T = 15;
    CrouchingAmoebas* pObj = new CrouchingAmoebas();
    clock_t start = clock();
    int result = pObj->count(x, y, A, T);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> x = {-80131170, -9745332, 1637436, 49913329, 58315167, 87779180, -44123691, 84931218, -27606726, 45229251, 18492601, -38856928, -31377320, 4082510, 90741208, 27072942, -95537907, -2707922, 95171194, 35591809, 14019508, 28201167, 34016275, -82069467, 29221111, -61590807, 15298149, 51775342, -14380129, -80567712};
    vector<int> y = {82689769, 94725320, -87998175, 15948446, -46036161, 23409821, -70760544, 79458551, 59609030, 60244566, -98143449, 92885085, 30895944, -60122052, 63086223, 20958505, -50952005, 81973981, -54248166, 5677081, 24024938, -34643687, -22219247, 77312041, -42086697, 38652936, 23635239, -30209913, 65767633, 41071866};
    int A = 568700535;
    int T = 15;
    CrouchingAmoebas* pObj = new CrouchingAmoebas();
    clock_t start = clock();
    int result = pObj->count(x, y, A, T);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> x = {42309701, 94739116, 38902608, 71086465, -96467579, -42932665, 23807656, -92788879, 13672271, 76164948, 80078681, 76621029, -15969195, 54032394, -45831134, 70993452, 36978528, -61034285, -52384764, -80265755, -687691, -96184212, 90723923, -98722087, -59616103, -95391810, 731269, 21346853, 71374797, 11351568};
    vector<int> y = {77240165, 58466007, -9594516, 13893998, 18035546, -31549963, -90289548, 76639444, 97113300, -44710250, 42710548, -32919957, -89746526, -48912216, -54269099, -61802706, 42069463, -66245074, -38165680, -40536484, -65699907, 15629716, -90755713, 80002911, -45832735, 49221493, 87186314, 12112909, 63225096, -51882838};
    int A = 112939892;
    int T = 15;
    CrouchingAmoebas* pObj = new CrouchingAmoebas();
    clock_t start = clock();
    int result = pObj->count(x, y, A, T);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> x = {-98139808, 32334940, 42742352, 8182863, -22391011, 7131775, 47650032, 28143052, -7403700, -85878029, 94603917, 20815030, 22262400, -37242750, -89329953, 38851821, 80361906, -94541271, -30899711, -9056114, -22645743, -41574630, 95271986, 57332717, -10943737, -24877352, -2208753, -31405643, -23008195, 9771288};
    vector<int> y = {-76141800, -59910872, 13977295, -65858038, -83136684, -37025578, 48442800, 78427550, -21315946, -12176074, 64761516, 73255340, 46008072, 14978283, -8918551, 85195520, -32327421, 65846999, 63903732, 36295329, -79789312, -43963345, -70355095, -33120317, 96798707, -45603247, -67300523, 19695103, -97262886, -44343594};
    int A = 574236000;
    int T = 15;
    CrouchingAmoebas* pObj = new CrouchingAmoebas();
    clock_t start = clock();
    int result = pObj->count(x, y, A, T);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> x = {4, -10, 0, -2, 1, 9, 9, 5, -6, -5};
    vector<int> y = {-7, 6, -1, -10, -7, -4, 10, 0, -1, -10};
    int A = 5;
    int T = 12;
    CrouchingAmoebas* pObj = new CrouchingAmoebas();
    clock_t start = clock();
    int result = pObj->count(x, y, A, T);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> x = {4, -10, 0, -2, 1, 9, 9, 5, -6, -5};
    vector<int> y = {-7, 6, -1, -10, -7, -4, 10, 0, -1, -10};
    int A = 5;
    int T = 11;
    CrouchingAmoebas* pObj = new CrouchingAmoebas();
    clock_t start = clock();
    int result = pObj->count(x, y, A, T);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> x = {5, -5, -6, 9, -8, -10, 0, 4, -9, 1};
    vector<int> y = {-5, 0, 3, 9, -3, -3, -8, 1, 8, -9};
    int A = 5;
    int T = 7;
    CrouchingAmoebas* pObj = new CrouchingAmoebas();
    clock_t start = clock();
    int result = pObj->count(x, y, A, T);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> x = {5, -5, -6, 9, -8, -10, 0, 4, -9, 1};
    vector<int> y = {-5, 0, 3, 9, -3, -3, -8, 1, 8, -9};
    int A = 5;
    int T = 6;
    CrouchingAmoebas* pObj = new CrouchingAmoebas();
    clock_t start = clock();
    int result = pObj->count(x, y, A, T);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> x = {6, -9, -5, 0, 7, -6, -4, 8, 3, 9};
    vector<int> y = {9, -10, 1, 6, 10, 5, -8, 3, -5, 1};
    int A = 5;
    int T = 9;
    CrouchingAmoebas* pObj = new CrouchingAmoebas();
    clock_t start = clock();
    int result = pObj->count(x, y, A, T);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> x = {6, -9, -5, 0, 7, -6, -4, 8, 3, 9};
    vector<int> y = {9, -10, 1, 6, 10, 5, -8, 3, -5, 1};
    int A = 5;
    int T = 8;
    CrouchingAmoebas* pObj = new CrouchingAmoebas();
    clock_t start = clock();
    int result = pObj->count(x, y, A, T);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> x = {1, 8, 5, 0, -3, -4, 10, 9, 6, 0};
    vector<int> y = {10, -6, 1, -7, -8, -3, -1, -1, 0, 10};
    int A = 5;
    int T = 9;
    CrouchingAmoebas* pObj = new CrouchingAmoebas();
    clock_t start = clock();
    int result = pObj->count(x, y, A, T);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> x = {1, 8, 5, 0, -3, -4, 10, 9, 6, 0};
    vector<int> y = {10, -6, 1, -7, -8, -3, -1, -1, 0, 10};
    int A = 5;
    int T = 8;
    CrouchingAmoebas* pObj = new CrouchingAmoebas();
    clock_t start = clock();
    int result = pObj->count(x, y, A, T);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> x = {9, -8, -6, -2, 3, 4, 6, 10, 6, -3};
    vector<int> y = {-4, -5, -9, -9, 8, 6, 6, 6, -6, -6};
    int A = 5;
    int T = 9;
    CrouchingAmoebas* pObj = new CrouchingAmoebas();
    clock_t start = clock();
    int result = pObj->count(x, y, A, T);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> x = {9, -8, -6, -2, 3, 4, 6, 10, 6, -3};
    vector<int> y = {-4, -5, -9, -9, 8, 6, 6, 6, -6, -6};
    int A = 5;
    int T = 8;
    CrouchingAmoebas* pObj = new CrouchingAmoebas();
    clock_t start = clock();
    int result = pObj->count(x, y, A, T);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> x = {4, -10, 0, -2, 1, 9, 9, 5, -6, -5, -10, -2, -7, 3, 0, -1, 6, -9, -3, 10, 2, -8, -5, 8, -1, -9, 7, -7, -3, 7};
    vector<int> y = {-7, 6, -1, -10, -7, -4, 10, 0, -1, -10, 2, 8, 10, -2, -5, -5, 9, -9, 5, -4, 2, 6, -7, 0, -7, 3, -1, 8, -9, 8};
    int A = 10;
    int T = 15;
    CrouchingAmoebas* pObj = new CrouchingAmoebas();
    clock_t start = clock();
    int result = pObj->count(x, y, A, T);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> x = {4, -10, 0, -2, 1, 9, 9, 5, -6, -5, -10, -2, -7, 3, 0, -1, 6, -9, -3, 10, 2, -8, -5, 8, -1, -9, 7, -7, -3, 7};
    vector<int> y = {-7, 6, -1, -10, -7, -4, 10, 0, -1, -10, 2, 8, 10, -2, -5, -5, 9, -9, 5, -4, 2, 6, -7, 0, -7, 3, -1, 8, -9, 8};
    int A = 10;
    int T = 14;
    CrouchingAmoebas* pObj = new CrouchingAmoebas();
    clock_t start = clock();
    int result = pObj->count(x, y, A, T);
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
    vector<int> x = {9, 7, -7, 0, 0, -4, -8, 5, 10, -4, 3, 10, -6, -4, 6, -3, 1, 1, -4, 7, -8, -5, -3, 0, 0, 8, 4, -2, -8, -7};
    vector<int> y = {-10, 0, 10, -6, 1, -10, -6, 4, 2, 9, -7, 3, -5, 5, 2, -1, 2, 5, 5, -1, -8, 4, -4, 2, -9, -1, -8, 1, 4, -6};
    int A = 10;
    int T = 13;
    CrouchingAmoebas* pObj = new CrouchingAmoebas();
    clock_t start = clock();
    int result = pObj->count(x, y, A, T);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> x = {9, 7, -7, 0, 0, -4, -8, 5, 10, -4, 3, 10, -6, -4, 6, -3, 1, 1, -4, 7, -8, -5, -3, 0, 0, 8, 4, -2, -8, -7};
    vector<int> y = {-10, 0, 10, -6, 1, -10, -6, 4, 2, 9, -7, 3, -5, 5, 2, -1, 2, 5, 5, -1, -8, 4, -4, 2, -9, -1, -8, 1, 4, -6};
    int A = 10;
    int T = 12;
    CrouchingAmoebas* pObj = new CrouchingAmoebas();
    clock_t start = clock();
    int result = pObj->count(x, y, A, T);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> x = {8, 3, 4, -1, 9, -8, -10, 5, 9, 7, 3, 9, 0, -6, 1, -5, 9, -7, -9, 6, -8, -1, -7, -7, 2, -5, -5, 2, 3, -9};
    vector<int> y = {-3, -8, -1, -7, 6, 6, -5, -2, 6, 7, 0, -4, -5, 7, -3, 2, -3, 2, -2, 2, 9, -8, -1, -6, -3, 5, -4, 4, -5, -5};
    int A = 10;
    int T = 15;
    CrouchingAmoebas* pObj = new CrouchingAmoebas();
    clock_t start = clock();
    int result = pObj->count(x, y, A, T);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> x = {8, 3, 4, -1, 9, -8, -10, 5, 9, 7, 3, 9, 0, -6, 1, -5, 9, -7, -9, 6, -8, -1, -7, -7, 2, -5, -5, 2, 3, -9};
    vector<int> y = {-3, -8, -1, -7, 6, 6, -5, -2, 6, 7, 0, -4, -5, 7, -3, 2, -3, 2, -2, 2, 9, -8, -1, -6, -3, 5, -4, 4, -5, -5};
    int A = 10;
    int T = 14;
    CrouchingAmoebas* pObj = new CrouchingAmoebas();
    clock_t start = clock();
    int result = pObj->count(x, y, A, T);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> x = {-5, 9, -7, -1, 10, -7, 1, -4, -9, -6, -8, -1, 4, -3, 9, -9, 10, 0, 9, 4, 7, 0, 0, 8, 9, -10, -2, -6, 1, -1};
    vector<int> y = {-3, -5, -8, 3, 1, -4, 2, 8, 5, -7, 10, 3, 7, -5, -3, 10, -3, 1, 7, -7, -1, -8, -2, -1, 5, -7, 8, 10, 0, 9};
    int A = 10;
    int T = 12;
    CrouchingAmoebas* pObj = new CrouchingAmoebas();
    clock_t start = clock();
    int result = pObj->count(x, y, A, T);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> x = {-5, 9, -7, -1, 10, -7, 1, -4, -9, -6, -8, -1, 4, -3, 9, -9, 10, 0, 9, 4, 7, 0, 0, 8, 9, -10, -2, -6, 1, -1};
    vector<int> y = {-3, -5, -8, 3, 1, -4, 2, 8, 5, -7, 10, 3, 7, -5, -3, 10, -3, 1, 7, -7, -1, -8, -2, -1, 5, -7, 8, 10, 0, 9};
    int A = 10;
    int T = 11;
    CrouchingAmoebas* pObj = new CrouchingAmoebas();
    clock_t start = clock();
    int result = pObj->count(x, y, A, T);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> x = {-5, -7, 9, -6, 10, 1, 5, -2, -2, -8, 4, -3, -4, 8, -7, 10, 7, -4, -5, -1, -10, -4, -10, 10, 8, -6, -8, -4, -3, 1};
    vector<int> y = {-9, 9, -7, 3, 7, -1, 3, 4, 3, -8, -8, 1, -2, 10, 2, 4, -4, -6, -6, -7, 4, -9, 9, -6, -10, 2, -4, 9, -2, 1};
    int A = 10;
    int T = 15;
    CrouchingAmoebas* pObj = new CrouchingAmoebas();
    clock_t start = clock();
    int result = pObj->count(x, y, A, T);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> x = {-5, -7, 9, -6, 10, 1, 5, -2, -2, -8, 4, -3, -4, 8, -7, 10, 7, -4, -5, -1, -10, -4, -10, 10, 8, -6, -8, -4, -3, 1};
    vector<int> y = {-9, 9, -7, 3, 7, -1, 3, 4, 3, -8, -8, 1, -2, 10, 2, 4, -4, -6, -6, -7, 4, -9, 9, -6, -10, 2, -4, 9, -2, 1};
    int A = 10;
    int T = 14;
    CrouchingAmoebas* pObj = new CrouchingAmoebas();
    clock_t start = clock();
    int result = pObj->count(x, y, A, T);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> x = {-1, 0, 0, 0, 1, 1, 1, 2};
    vector<int> y = {0, -1, 0, 1, 0, 1, 2, 0};
    int A = 1;
    int T = 4;
    CrouchingAmoebas* pObj = new CrouchingAmoebas();
    clock_t start = clock();
    int result = pObj->count(x, y, A, T);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> x = {-1, 0, 0, 0, 1, 1, 1, 2};
    vector<int> y = {0, -1, 0, 1, 0, 1, 2, 0};
    int A = 1;
    int T = 2;
    CrouchingAmoebas* pObj = new CrouchingAmoebas();
    clock_t start = clock();
    int result = pObj->count(x, y, A, T);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> x = {-1, 0, 0, 0, 1, 1, 1, 2};
    vector<int> y = {0, -1, 0, 1, 0, 1, 2, 0};
    int A = 1;
    int T = 3;
    CrouchingAmoebas* pObj = new CrouchingAmoebas();
    clock_t start = clock();
    int result = pObj->count(x, y, A, T);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> x = {-1, 0, 0, 0, 1, 1, 1, 2};
    vector<int> y = {0, -1, 0, 1, 0, 1, 2, 0};
    int A = 1;
    int T = 4;
    CrouchingAmoebas* pObj = new CrouchingAmoebas();
    clock_t start = clock();
    int result = pObj->count(x, y, A, T);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> x = {-1, 0, 0, 0, 1, 1, 1, 2, 999999997, 999999998, 999999998, 999999998, 999999999, 999999999, 999999999, 1000000000};
    vector<int> y = {0, -1, 0, 1, 0, 1, 2, 0, 999999998, 999999997, 999999998, 999999999, 999999999, 999999999, 1000000000, 999999998};
    int A = 999999998;
    int T = 6;
    CrouchingAmoebas* pObj = new CrouchingAmoebas();
    clock_t start = clock();
    int result = pObj->count(x, y, A, T);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> x = {-988705388, -887285631, 11294612, -988705388, -150080388, -5574779, -770167185, 11294612, -988705388, -988705388, -988705388, -753551693, -137302969, 11294612, -548155312, -587391853, -914757118, -988705388, 11294612, -988705388, -988705389, -988705390, -988705391, -988705392, -988705393, -988705394, -988705395, -988705396, -988705397, -988705398};
    vector<int> y = {-412917616, 333672, -39722612, -153459610, -999666328, 333672, 333672, -833430825, -944640619, -19419882, -871571743, 333672, -999666328, -834150885, 333672, -999666328, -999666328, -141641128, -17399185, -81002961, -999666329, -999666330, -999666331, -999666332, -999666333, -999666334, -999666335, -999666336, -999666337, -999666338};
    int A = 1000000000;
    int T = 11;
    CrouchingAmoebas* pObj = new CrouchingAmoebas();
    clock_t start = clock();
    int result = pObj->count(x, y, A, T);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> x = {1000000000};
    vector<int> y = {1000000000};
    int A = 999999998;
    int T = 1;
    CrouchingAmoebas* pObj = new CrouchingAmoebas();
    clock_t start = clock();
    int result = pObj->count(x, y, A, T);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> x = {-500000000, -300000000, -100000000, 100000000, 300000000, 500000000, -500000000, -300000000, -100000000, 100000000, 300000000, 500000000, -500000000, -500000000, -500000000, -500000000, -500000000, -500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 0, 0, 0, 0, 500000001, -500000001};
    vector<int> y = {-500000000, -500000000, -500000000, -500000000, -500000000, -500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, -500000000, -300000000, -100000000, 100000000, 300000000, 500000000, -500000000, -300000000, -100000000, 100000000, 300000000, 500000000, 500000001, 500000002, -500000001, -500000002, 0, 0};
    int A = 1000000000;
    int T = 8;
    CrouchingAmoebas* pObj = new CrouchingAmoebas();
    clock_t start = clock();
    int result = pObj->count(x, y, A, T);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> x = {-500000000, -300000000, -100000000, 100000000, 300000000, 500000000, -500000000, -300000000, -100000000, 100000000, 300000000, 500000000, -500000000, -500000000, -500000000, -500000000, -500000000, -500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 0, 0, 0, 0, 500000001, -500000001};
    vector<int> y = {-500000000, -500000000, -500000000, -500000000, -500000000, -500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, -500000000, -300000000, -100000000, 100000000, 300000000, 500000000, -500000000, -300000000, -100000000, 100000000, 300000000, 500000000, 500000001, 500000002, -500000001, -500000002, 0, 0};
    int A = 1000000000;
    int T = 7;
    CrouchingAmoebas* pObj = new CrouchingAmoebas();
    clock_t start = clock();
    int result = pObj->count(x, y, A, T);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> x = {0, 1, 2};
    vector<int> y = {1, 2, 0};
    int A = 1;
    int T = 2;
    CrouchingAmoebas* pObj = new CrouchingAmoebas();
    clock_t start = clock();
    int result = pObj->count(x, y, A, T);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> x = {287445, 421442, 3553, -34526, 46634, 557538, 0};
    vector<int> y = {535332, -447464, 0, 3564, 356754, 0, 37};
    int A = 43451;
    int T = 13;
    CrouchingAmoebas* pObj = new CrouchingAmoebas();
    clock_t start = clock();
    int result = pObj->count(x, y, A, T);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> x = {-1000000000, 1000000000};
    vector<int> y = {-1000000000, 1000000000};
    int A = 1;
    int T = 15;
    CrouchingAmoebas* pObj = new CrouchingAmoebas();
    clock_t start = clock();
    int result = pObj->count(x, y, A, T);
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
    vector<int> x = {100000000, -1000000000, 100000000, -1000000000, 100000000, -1000000000, 100000000, -1000000000, 100000000, -1000000000, 100000000, -1000000000, 100000000, -1000000000, 100000000, -1000000000, 100000000, -1000000000, 100000000, -1000000000, 100000000, -1000000000, 100000000, -1000000000, 100000000, -1000000000, 100000000, -1000000000, 100000000, -1000000000};
    vector<int> y = {100000000, -1000000000, 100000000, -1000000000, 100000000, -1000000000, 100000000, -1000000000, 100000000, -1000000000, 100000000, -1000000000, 100000000, -1000000000, 100000000, -1000000000, 100000000, -1000000000, 100000000, -1000000000, 100000000, -1000000000, 100000000, -1000000000, 100000000, -1000000000, 100000000, -1000000000, 100000000, -1000000000};
    int A = 100000000;
    int T = 15;
    CrouchingAmoebas* pObj = new CrouchingAmoebas();
    clock_t start = clock();
    int result = pObj->count(x, y, A, T);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22775260&rd=14422&pm=11214
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
#include <ctime> 
 
using namespace std; 
 
class CrouchingAmoebas { 
public: 
  int count(vector <int>, vector <int>, int, int); 
}; 
 
int CrouchingAmoebas::count(vector <int> x, vector <int> y, int A, int T) { 
   
  int n = x.size(); 
  vector <int> lx(x); 
  vector <int> ly(y); 
   
  sort(lx.begin(), lx.end()); 
  sort(ly.begin(), ly.end()); 
   
  int ans=0; 
  for (int i=0; i<n; i++) 
  for(int j=0; j<n; j++) 
    { 
      int c1x = lx[i]; 
      int c2x = c1x + A; 
      int c1y = ly[j]; 
      int c2y = c1y + A; 
      vector <long long> kc; 
      cout << c1x << " " << c2x << " " << c1y << " " << c2y << endl; 
      for (int k=0; k<n; k++) 
      { 
        long long tkc = 0; 
        if (x[k] < c1x) tkc+=(c1x-x[k]); 
        if (x[k] > c2x) tkc+=(x[k]-c2x); 
         
        if (y[k] < c1y) tkc+=(c1y-y[k]); 
        if (y[k] > c2y) tkc+=(y[k]-c2y); 
        kc.push_back(tkc); 
        cout << tkc << endl; 
      } 
       
      sort(kc.begin(), kc.end()); 
      long long tm = 0; 
      int ta = 0; 
      while (ta<n && tm+kc[ta]<=T) 
      { 
        tm += kc[ta]; 
        ta++; 
      } 
       
      if (ta>ans) ans = ta; 
    } 
     
  for (int i=0; i<n; i++) 
  for(int j=0; j<n; j++) 
    { 
      int c2x = lx[i]; 
      int c1x = c2x - A; 
      int c1y = ly[j]; 
      int c2y = c1y + A; 
      vector <long long> kc; 
      cout << c1x << " " << c2x << " " << c1y << " " << c2y << endl; 
      for (int k=0; k<n; k++) 
      { 
        long long tkc = 0; 
        if (x[k] < c1x) tkc+=(c1x-x[k]); 
        if (x[k] > c2x) tkc+=(x[k]-c2x); 
         
        if (y[k] < c1y) tkc+=(c1y-y[k]); 
        if (y[k] > c2y) tkc+=(y[k]-c2y); 
        kc.push_back(tkc); 
        cout << tkc << endl; 
      } 
       
      sort(kc.begin(), kc.end()); 
      int tm = 0; 
      int ta = 0; 
      while (ta<n && tm+kc[ta]<=T) 
      { 
        tm += kc[ta]; 
        ta++; 
      } 
       
      if (ta>ans) ans = ta; 
    } 
     
  for (int i=0; i<n; i++) 
  for(int j=0; j<n; j++) 
    { 
      int c1x = lx[i]; 
      int c2x = c1x + A; 
      int c2y = ly[j]; 
      int c1y = c2y - A; 
      vector <long long> kc; 
      cout << c1x << " " << c2x << " " << c1y << " " << c2y << endl; 
      for (int k=0; k<n; k++) 
      { 
        long long tkc = 0; 
        if (x[k] < c1x) tkc+=(c1x-x[k]); 
        if (x[k] > c2x) tkc+=(x[k]-c2x); 
         
        if (y[k] < c1y) tkc+=(c1y-y[k]); 
        if (y[k] > c2y) tkc+=(y[k]-c2y); 
        kc.push_back(tkc); 
        cout << tkc << endl; 
      } 
       
      sort(kc.begin(), kc.end()); 
      int tm = 0; 
      int ta = 0; 
      while (ta<n && tm+kc[ta]<=T) 
      { 
        tm += kc[ta]; 
        ta++; 
      } 
       
      if (ta>ans) ans = ta; 
    } 
   
  for (int i=0; i<n; i++) 
  for(int j=0; j<n; j++) 
    { 
      int c2x = lx[i]; 
      int c1x = c2x - A; 
      int c2y = ly[j]; 
      int c1y = c2y - A; 
      vector <long long> kc; 
      cout << c1x << " " << c2x << " " << c1y << " " << c2y << endl; 
      for (int k=0; k<n; k++) 
      { 
        long long tkc = 0; 
        if (x[k] < c1x) tkc+=(c1x-x[k]); 
        if (x[k] > c2x) tkc+=(x[k]-c2x); 
         
        if (y[k] < c1y) tkc+=(c1y-y[k]); 
        if (y[k] > c2y) tkc+=(y[k]-c2y); 
        kc.push_back(tkc); 
        cout << tkc << endl; 
      } 
       
      sort(kc.begin(), kc.end()); 
      int tm = 0; 
      int ta = 0; 
      while (ta<n && tm+kc[ta]<=T) 
      { 
        tm += kc[ta]; 
        ta++; 
      } 
       
      if (ta>ans) ans = ta; 
    } 
   
  return ans; 
} 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/