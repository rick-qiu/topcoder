/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12141
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

class SweetFruits {
public:
    int countTrees(vector<int> sweetness, int maxSweetness);
};

int SweetFruits::countTrees(vector<int> sweetness, int maxSweetness) {
    int ret;
    return ret;
}


int test0() {
    vector<int> sweetness = {1, 2, -1, 3};
    int maxSweetness = 3;
    SweetFruits* pObj = new SweetFruits();
    clock_t start = clock();
    int result = pObj->countTrees(sweetness, maxSweetness);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> sweetness = {1, 2, -1, 3};
    int maxSweetness = 5;
    SweetFruits* pObj = new SweetFruits();
    clock_t start = clock();
    int result = pObj->countTrees(sweetness, maxSweetness);
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
    vector<int> sweetness = {-1, -1, 2, 5, 5};
    int maxSweetness = 6;
    SweetFruits* pObj = new SweetFruits();
    clock_t start = clock();
    int result = pObj->countTrees(sweetness, maxSweetness);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> sweetness = {2, 6, 8, 4, 1, 10, -1, -1, -1, -1};
    int maxSweetness = 15;
    SweetFruits* pObj = new SweetFruits();
    clock_t start = clock();
    int result = pObj->countTrees(sweetness, maxSweetness);
    clock_t end = clock();
    delete pObj;
    int expected = 17024000;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> sweetness = {1078451, -1, 21580110, 8284711, -1, 4202301, 3427559, 8261270, -1, 16176713, 22915672, 24495540, 19236, 5477666, 12280316, 3305896, 17917887, 564911, 22190488, 21843923, 23389728, 14641920, 9590140, 12909561, 20405638, 100184, 23336457, 12780498, 18859535, 23180993, 10278898, 5753075, 21250919, 17563422, 10934412, 22557980, 24895749, 7593671, 10834579, 5606562};
    int maxSweetness = 245243285;
    SweetFruits* pObj = new SweetFruits();
    clock_t start = clock();
    int result = pObj->countTrees(sweetness, maxSweetness);
    clock_t end = clock();
    delete pObj;
    int expected = 47225123;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> sweetness = {14639815, 14726461, 6447387, 14195583, 21889406, 21747548, 13956607, 17616321, 24540098, 6404255, 6938324, 24125895, 997636, 8985165, 11071163, 6892635, 6653028, 9250375, 5130896, 11248502, 22450038, 22739766, 6921006, 23423699, 6174311, 5654476, 22207834, 387760, 4080371, 3110367, 6323260, 7493557, 2518486, 23590395, 24777691, 12185323, 22130253, 11682797, 10994230, 13154960};
    int maxSweetness = 18919456;
    SweetFruits* pObj = new SweetFruits();
    clock_t start = clock();
    int result = pObj->countTrees(sweetness, maxSweetness);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> sweetness = {8306365, 8383485, 13134574, 5497018, 4275500, 8249090, 18712792, 12257946, 7974960, 729407, 11248309, 16253117, 4788863, 24102951, 15129409, 20238308, 20463290, 22197865, 23526443, 9413053, 4340556, 13691668, 7845808, 22569452, 15906698, 9469883, 12838918, 13669290, 9626574, 1258052, 7168134, 3760820, 12238548, 12091585, 18708475, 2872154, 10719558, 531335, 6037268, 18515067};
    int maxSweetness = 95057886;
    SweetFruits* pObj = new SweetFruits();
    clock_t start = clock();
    int result = pObj->countTrees(sweetness, maxSweetness);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> sweetness = {18612860, 24852584, 3536078, 16780247, 12589415, 19059443, 22275708, 3113175, 9233217, 15673133, 15502690, 11989371, 525077, 8256920, 24224147, 23406091, 18803834, 8956952, 8694411, 18861594, 423617, 3988344, 9720140, 22304476, 18778121, 14805805, 10070485, 1978102, 5457868, 24758383, 1005981, 3522559, 23505069, 21682899, 3422645, 16212989, 7214386, 12835391, 9632407, 17891938};
    int maxSweetness = 262630131;
    SweetFruits* pObj = new SweetFruits();
    clock_t start = clock();
    int result = pObj->countTrees(sweetness, maxSweetness);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> sweetness = {3914386, 8604074, 14518441, 21419702, 2933084, 1871094, 14619016, 19137496, 13396904, 15120458, 13937554, 3054187, 5311701, 11078386, 1273980, 14793632, 3287273, 11573295, 9835829, 17116798, 9751262, 10958989, 18342361, 1462187, 23304899, 23037702, 2252129, 7531336, 2876533, 2796157, 11566117, 2027559, 20283077, 5473152, -1, 23673712, 21281351, 17761912, 17714631, 20788228};
    int maxSweetness = 223487652;
    SweetFruits* pObj = new SweetFruits();
    clock_t start = clock();
    int result = pObj->countTrees(sweetness, maxSweetness);
    clock_t end = clock();
    delete pObj;
    int expected = 821982189;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> sweetness = {24485547, 6427190, 829615, 1215089, 20607982, 23966005, 6219341, 11075946, 20344549, 17854985, 13594878, 9074845, 21445204, 6283017, 8819041, 8495751, 5208209, 24881088, 12506624, 11061540, 4559408, 11113588, 1119505, 17615177, 15963905, 8137488, 15170200, -1, 21555985, 16385645, 20198833, 1536783, 12308671, 24480719, 16659416, 13021805, 21910971, 7534439, 6066440, 9058209};
    int maxSweetness = 170078154;
    SweetFruits* pObj = new SweetFruits();
    clock_t start = clock();
    int result = pObj->countTrees(sweetness, maxSweetness);
    clock_t end = clock();
    delete pObj;
    int expected = 996955159;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> sweetness = {1858705, 32553, 16813298, 24544725, 3035287, 7342300, 12916979, 17735900, 23588575, 5869278, 2800391, 722594, 1494882, 1014690, 16318490, 15973342, 10836147, 20333116, 2589285, 18516238, 12323835, 8722049, 16085320, 21768817, 5590365, 19820848, 23458953, 997218, 1972324, 11589299, 16866205, 932204, 7101862, 20923269, 3203558, 13804855, 7747467, -1, 10137460, 13111512};
    int maxSweetness = 161005965;
    SweetFruits* pObj = new SweetFruits();
    clock_t start = clock();
    int result = pObj->countTrees(sweetness, maxSweetness);
    clock_t end = clock();
    delete pObj;
    int expected = 213690546;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> sweetness = {21647954, 22144302, 16968391, 11960550, 8158019, 5308188, 21458443, 21691267, 563107, 4712478, 5820193, 12873896, 10731169, 2586783, 14843339, 14306986, 22607276, 16896056, 8962532, 3777549, 8714515, 5959666, 7125466, 15805843, 2030210, 20721269, 9405883, 19951921, 2463965, -1, 10855081, 16932043, -1, 11174897, 14095552, 23473556, 12521599, 5927916, 11894717, 9464892};
    int maxSweetness = 244311917;
    SweetFruits* pObj = new SweetFruits();
    clock_t start = clock();
    int result = pObj->countTrees(sweetness, maxSweetness);
    clock_t end = clock();
    delete pObj;
    int expected = 609173224;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> sweetness = {9672406, 16465726, 859853, 8298116, 22004739, 10570738, 5869085, 22596414, 15007463, -1, 10893726, 19181876, 11014452, 3346997, 6619701, 14030805, 5909533, 2087938, 18567598, 5294449, 13013330, 2776351, -1, 10865962, 6351390, 24675174, 16507968, 22170499, 10489308, 9424659, 4946305, 18537606, 3242408, 19730967, 6638520, 17092453, 23900391, 21463181, 15564726, 317262};
    int maxSweetness = 152905945;
    SweetFruits* pObj = new SweetFruits();
    clock_t start = clock();
    int result = pObj->countTrees(sweetness, maxSweetness);
    clock_t end = clock();
    delete pObj;
    int expected = 61560365;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> sweetness = {13510851, 15591167, 1868356, 6615822, -1, 6368247, 3147646, 24150250, 5860582, 3209253, 2029426, 8146131, 7000787, 24969130, 1585560, 4563906, 14173223, 23142147, 7211498, 24764180, 15008814, 9821305, 14465737, 14024002, 557285, 777464, 2039513, 17644347, 23787741, 22194998, 19999091, 16586268, 3038411, 2348921, -1, 48165, 12470639, 1619813, 1496309, 13717386};
    int maxSweetness = 290973352;
    SweetFruits* pObj = new SweetFruits();
    clock_t start = clock();
    int result = pObj->countTrees(sweetness, maxSweetness);
    clock_t end = clock();
    delete pObj;
    int expected = 302320408;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> sweetness = {12449688, 3448109, 9299243, 24184232, 10670854, 24015306, 197846, 6428927, 11186771, 17193813, 13165315, 2560753, 18245618, 9305532, 3043244, 4672058, 18951467, 2753826, 10066763, 8877403, 1860007, -1, 23595687, 22634536, 19042238, 8206248, 8509477, 17853383, 21423436, -1, 14641144, -1, 12244270, 8394740, 5650967, 7668742, 5508722, 20437678, 1555292, 66165};
    int maxSweetness = 79092062;
    SweetFruits* pObj = new SweetFruits();
    clock_t start = clock();
    int result = pObj->countTrees(sweetness, maxSweetness);
    clock_t end = clock();
    delete pObj;
    int expected = 11132003;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> sweetness = {20423668, 15386022, 11160842, 8400915, 21848534, -1, 19155715, 10966201, 7342369, 6920304, 12954756, 15095693, 5709679, -1, 17560563, 17954236, -1, 11515214, 15073791, 24363693, 15475154, 6976130, 18260079, 13992764, 7459645, 22431759, 10010595, 21049657, 24876325, 14276077, 14080202, 15425480, 7241056, 15022897, 10805579, 824759, 17880186, 1099255, 13344288, 19628086};
    int maxSweetness = 275431818;
    SweetFruits* pObj = new SweetFruits();
    clock_t start = clock();
    int result = pObj->countTrees(sweetness, maxSweetness);
    clock_t end = clock();
    delete pObj;
    int expected = 732166229;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> sweetness = {16995140, 5416026, 12156478, 6348163, 12846167, 12704880, 9207608, 6356442, 1854975, 13644444, 23593411, 12380842, 8269345, 13222733, 22843330, 14784355, -1, 297189, 7635325, 856033, 15922555, 1742718, 15661188, -1, 2259204, 19105093, 8376960, 10554050, 3674932, 3258076, 18528720, 17690639, 11030823, 10010636, 22057294, 1642702, 24589477, 18453914, 15116289, -1};
    int maxSweetness = 178582223;
    SweetFruits* pObj = new SweetFruits();
    clock_t start = clock();
    int result = pObj->countTrees(sweetness, maxSweetness);
    clock_t end = clock();
    delete pObj;
    int expected = 772759479;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> sweetness = {6279350, 15963667, 19990558, 22238149, 12324428, 7212070, -1, 3646657, -1, 14926187, 15426304, 17691323, 21832230, -1, 14138589, 11815069, 21796644, 7273674, 18577308, 3982138, 15115410, 7668706, 24238566, 4256882, 8033518, 15071622, 3841919, 6082446, -1, 980564, -1, 9940594, 2893470, -1, 4552314, 14270232, -1, 21487815, -1, 24442413};
    int maxSweetness = 259456580;
    SweetFruits* pObj = new SweetFruits();
    clock_t start = clock();
    int result = pObj->countTrees(sweetness, maxSweetness);
    clock_t end = clock();
    delete pObj;
    int expected = 267911171;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> sweetness = {21020207, 4206609, 15857434, 21901276, 752791, 20556490, 19570503, 2326599, 10495732, 20132337, 1721550, -1, 14943573, 8002580, -1, 2127938, 19446529, 3576779, -1, 9465688, 7049777, 4163071, 10531611, 16131329, -1, 3783249, -1, 3432226, 5588362, 13235390, 17609097, 6099585, -1, 9371952, 9590119, 409348, 3587160, 12704560, -1, 18231861};
    int maxSweetness = 142402422;
    SweetFruits* pObj = new SweetFruits();
    clock_t start = clock();
    int result = pObj->countTrees(sweetness, maxSweetness);
    clock_t end = clock();
    delete pObj;
    int expected = 901915010;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> sweetness = {8447097, 691728, 19124622, 18442939, 9459477, -1, -1, 12044064, 14265272, 21127388, 9742828, 1971516, -1, 2734563, -1, 11183748, 13986572, -1, 12070322, 8615336, 14181491, 24291804, 10701401, 9524003, 20106247, 19346283, 24484115, 4435368, 22258597, 6557931, 24353773, 2166405, 13113640, -1, 15541931, 7729371, 2714779, 18343229, 23730671, 22205798};
    int maxSweetness = 221801374;
    SweetFruits* pObj = new SweetFruits();
    clock_t start = clock();
    int result = pObj->countTrees(sweetness, maxSweetness);
    clock_t end = clock();
    delete pObj;
    int expected = 163463437;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> sweetness = {20199695, 2916814, -1, 10561334, -1, 12784747, 5686111, 10784062, 8162225, 4205530, -1, 16363609, 10434590, 20392254, 11015801, 4219219, 8493429, 13138693, 15814957, 22010456, 22696557, 9689129, 16743164, 19765136, 15204767, 7048103, 1405948, -1, 15787478, 24235769, 8356770, 23637024, -1, 13145812, 14898980, 3252226, 6715434, 8118865, 2573053, 19527074};
    int maxSweetness = 248802543;
    SweetFruits* pObj = new SweetFruits();
    clock_t start = clock();
    int result = pObj->countTrees(sweetness, maxSweetness);
    clock_t end = clock();
    delete pObj;
    int expected = 39200445;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> sweetness = {7092101, 24418629, 2093463, 17825226, -1, 19446748, -1, -1, 9995272, 19614846, 14248330, 1228778, 7040295, 6327622, 11392284, 7049997, 7865011, 22730127, 8394286, 5527793, 17079623, 21824110, 22910710, 3592206, 10885536, 19204022, 14574874, 5292392, -1, 14367607, 4872615, 22930853, 5821321, 6302236, 24888562, 1057276, 12755842, 121168, 6539635, 12447345};
    int maxSweetness = 398736383;
    SweetFruits* pObj = new SweetFruits();
    clock_t start = clock();
    int result = pObj->countTrees(sweetness, maxSweetness);
    clock_t end = clock();
    delete pObj;
    int expected = 905024403;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> sweetness = {-1, 15828700, 24530839, 8124344, -1, 14724329, 7417080, 19977096, 13307876, 15606700, 8044044, -1, 6076985, 4733108, 22706328, 6964762, 10341400, 15391751, -1, 3223408, 24881934, 15996303, 14340357, 5964056, 7348527, 24978683, 12752681, 19251677, 56614, 24423598, 5951487, 1325433, 1772621, -1, 1909482, -1, -1, 5447013, 22000994, -1};
    int maxSweetness = 339556469;
    SweetFruits* pObj = new SweetFruits();
    clock_t start = clock();
    int result = pObj->countTrees(sweetness, maxSweetness);
    clock_t end = clock();
    delete pObj;
    int expected = 683625989;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> sweetness = {10998737, 7746181, 20569523, -1, 2094715, 20134598, 3315025, 20731575, 8331525, 24090277, 14407513, 13796775, 18580001, 22223413, -1, 5392520, 17754230, 16288917, 4609178, 5249433, 11552525, 2474023, 21962921, 24433029, 9842520, 13674994, 7189757, 2659410, 5810597, -1, 9187057, 402684, 23917932, 21426056, 12625845, 14761029, 4853234, -1, 24221455, -1};
    int maxSweetness = 70131820;
    SweetFruits* pObj = new SweetFruits();
    clock_t start = clock();
    int result = pObj->countTrees(sweetness, maxSweetness);
    clock_t end = clock();
    delete pObj;
    int expected = 301213964;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> sweetness = {3596346, 6646410, -1, 10276948, 13108469, 2697595, 15970491, -1, 13797808, 21414449, 14099644, -1, 1168719, 16208830, 20243045, 12550462, 20310263, 11471061, 18786865, 10591145, 22387097, -1, 10624514, 9473517, 2808263, 21638455, 1701950, 15071718, 9490778, 15917382, 22598956, 12171400, 13687536, 22191196, 7493764, 3030923, 13158855, 21713018, 5594968, 3290034};
    int maxSweetness = 83957687;
    SweetFruits* pObj = new SweetFruits();
    clock_t start = clock();
    int result = pObj->countTrees(sweetness, maxSweetness);
    clock_t end = clock();
    delete pObj;
    int expected = 920312981;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> sweetness = {-1, 15980688, 13960195, 9307209, 16036214, 18026735, 22919397, 3011164, 6599934, 11509555, 19226191, 17059954, -1, -1, 7032740, 19705301, 20079544, 2299632, 1268022, 18320223, 9479676, 13076259, -1, 13431729, 21854995, 9082500, -1, -1, -1, 1896336, 12386408, -1, 9929951, 5843725, 9346494, 24915566, -1, 11963470, -1, 12586755};
    int maxSweetness = 275737559;
    SweetFruits* pObj = new SweetFruits();
    clock_t start = clock();
    int result = pObj->countTrees(sweetness, maxSweetness);
    clock_t end = clock();
    delete pObj;
    int expected = 816774893;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> sweetness = {2212007, -1, 12074348, 5567402, 9453715, 1796289, 23925629, 2111707, 16364174, 21905620, 2562262, 9217948, -1, 12499875, 9709496, 6208346, 21061571, 12532316, 14500967, 10332510, 14844228, 4390316, 12392790, 19410234, 10479237, 17190268, 16052671, -1, 5712386, 7766401, -1, 6545832, 8832343, 7112726, 9905592, 8522666, -1, 13288435, 15496811, 13538587};
    int maxSweetness = 185654917;
    SweetFruits* pObj = new SweetFruits();
    clock_t start = clock();
    int result = pObj->countTrees(sweetness, maxSweetness);
    clock_t end = clock();
    delete pObj;
    int expected = 543800305;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> sweetness = {-1, -1, -1, 19194837, -1, -1, 8622718, -1, -1, -1, -1, -1, -1, -1, -1, 22796001, -1, -1, 15365189, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    int maxSweetness = 5336954;
    SweetFruits* pObj = new SweetFruits();
    clock_t start = clock();
    int result = pObj->countTrees(sweetness, maxSweetness);
    clock_t end = clock();
    delete pObj;
    int expected = 158649064;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> sweetness = {-1, 9136724, -1, 17740261, 7179798, 8090429, 8646196, -1, 15487794, 14408684, 4880608, 12090625, 1385929, 18513144, 6179184, 20214082, 20153990, 6298832, 16966319, 22534340, 24556104, 17816799, 20897065, 8804466, 5452290, 13387242, -1, -1, 19843636, -1, -1, -1, -1, -1, 1520203, 24357708, 1875428, 8143475, -1, 13203669};
    int maxSweetness = 195152735;
    SweetFruits* pObj = new SweetFruits();
    clock_t start = clock();
    int result = pObj->countTrees(sweetness, maxSweetness);
    clock_t end = clock();
    delete pObj;
    int expected = 358569437;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> sweetness = {2514293, -1, 4156153, -1, 7777677, -1, -1, -1, -1, -1, -1, -1, 3046333, 18408543, -1, -1, 19011340, 1658120, 21934197, -1, -1, 5595190, 12269967, 5031764, 13535339, -1, -1, 16051159, 17780400, -1, -1, -1, -1, 14582580, 24023259, -1, -1, 4057214, -1, 9694182};
    int maxSweetness = 182256299;
    SweetFruits* pObj = new SweetFruits();
    clock_t start = clock();
    int result = pObj->countTrees(sweetness, maxSweetness);
    clock_t end = clock();
    delete pObj;
    int expected = 632983985;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> sweetness = {18026946, 20833614, -1, 3011788, 11735333, -1, 23593249, 22374900, 2765831, 12328001, 15952355, 24552729, 11550094, 21854013, 8790252, -1, -1, -1, 19759488, 20283506, 2119146, 21822957, 17265832, 11570232, 4764584, -1, 2725407, 17634923, 4254232, 12064728, -1, -1, 13498449, -1, 5126308, -1, 19675747, 2064003, -1, 3004033};
    int maxSweetness = 16906995;
    SweetFruits* pObj = new SweetFruits();
    clock_t start = clock();
    int result = pObj->countTrees(sweetness, maxSweetness);
    clock_t end = clock();
    delete pObj;
    int expected = 843332314;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> sweetness = {11079753, -1, 3102673, -1, 22370352, -1, 4107568, 8805747, -1, 2975178, 24953596, 18395848, -1, 13511540, 4156771, 11611757, 21700440, 6078743, 18075008, 268816, 13177485, 5702163, 20418689, 20105938, 8720212, -1, -1, -1, 5668653, 2251813, -1, 20088103, -1, 1110793, -1, 78537, 13217382, 20614609, 1689807, 8688637};
    int maxSweetness = 31210115;
    SweetFruits* pObj = new SweetFruits();
    clock_t start = clock();
    int result = pObj->countTrees(sweetness, maxSweetness);
    clock_t end = clock();
    delete pObj;
    int expected = 841235955;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> sweetness = {5213788, 4843992, -1, -1, -1, 23107341, 17960095, -1, -1, -1, 8485699, 6990784, 13684695, 10395256, 22693986, 18833402, -1, 5457719, 22021157, 15279089, -1, 17434720, 17971728, 13444578, -1, 5704739, 16596067, 5881314, -1, 15911109, -1, -1, -1, 15689891, -1, -1, 16229515, 16391345, 21023682, -1};
    int maxSweetness = 145352555;
    SweetFruits* pObj = new SweetFruits();
    clock_t start = clock();
    int result = pObj->countTrees(sweetness, maxSweetness);
    clock_t end = clock();
    delete pObj;
    int expected = 157995643;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> sweetness = {-1, 14864666, 14588768, -1, 8940619, 4520170, -1, -1, -1, -1, -1, 22243895, -1, -1, -1, 20705595, -1, -1, -1, -1, 14688570, 23763434, 18331390, -1, -1, -1, 17259404, -1, -1, -1, -1, -1, -1, -1, 18827968, -1, -1, -1, -1, -1};
    int maxSweetness = 129184276;
    SweetFruits* pObj = new SweetFruits();
    clock_t start = clock();
    int result = pObj->countTrees(sweetness, maxSweetness);
    clock_t end = clock();
    delete pObj;
    int expected = 948947124;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> sweetness = {2620967, -1, 21988608, -1, -1, -1, 21781061, -1, -1, 20370617, -1, -1, -1, 1382584, -1, -1, 22787790, 5770391, -1, 19711122, -1, -1, 13351169, -1, -1, 23324542, -1, -1, -1, 15325220, -1, 2628854, 11965678, -1, -1, -1, -1, -1, -1, -1};
    int maxSweetness = 61677925;
    SweetFruits* pObj = new SweetFruits();
    clock_t start = clock();
    int result = pObj->countTrees(sweetness, maxSweetness);
    clock_t end = clock();
    delete pObj;
    int expected = 238168217;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> sweetness = {16092018, -1, 3000077, -1, -1, -1, 1377327, -1, 666610, -1, -1, -1, 2587744, -1, -1, -1, -1, 19130201, -1, 22250674, -1, 20204306, -1, -1, -1, 23026968, -1, -1, -1, -1, 21424403, -1, -1, -1, -1, -1, -1, -1, 14015415, -1};
    int maxSweetness = 101231494;
    SweetFruits* pObj = new SweetFruits();
    clock_t start = clock();
    int result = pObj->countTrees(sweetness, maxSweetness);
    clock_t end = clock();
    delete pObj;
    int expected = 654143402;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> sweetness = {-1, 5927625, 22300310, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 23343462, -1, -1, -1, 13889078, -1, -1, -1, -1, 24456909, -1, -1, -1, -1, -1};
    int maxSweetness = 39902547;
    SweetFruits* pObj = new SweetFruits();
    clock_t start = clock();
    int result = pObj->countTrees(sweetness, maxSweetness);
    clock_t end = clock();
    delete pObj;
    int expected = 462781773;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> sweetness = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    int maxSweetness = 0;
    SweetFruits* pObj = new SweetFruits();
    clock_t start = clock();
    int result = pObj->countTrees(sweetness, maxSweetness);
    clock_t end = clock();
    delete pObj;
    int expected = 721054961;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> sweetness = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    int maxSweetness = 0;
    SweetFruits* pObj = new SweetFruits();
    clock_t start = clock();
    int result = pObj->countTrees(sweetness, maxSweetness);
    clock_t end = clock();
    delete pObj;
    int expected = 721054961;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> sweetness = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    int maxSweetness = 0;
    SweetFruits* pObj = new SweetFruits();
    clock_t start = clock();
    int result = pObj->countTrees(sweetness, maxSweetness);
    clock_t end = clock();
    delete pObj;
    int expected = 721054961;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> sweetness = {100};
    int maxSweetness = 100;
    SweetFruits* pObj = new SweetFruits();
    clock_t start = clock();
    int result = pObj->countTrees(sweetness, maxSweetness);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> sweetness = {-1};
    int maxSweetness = 100;
    SweetFruits* pObj = new SweetFruits();
    clock_t start = clock();
    int result = pObj->countTrees(sweetness, maxSweetness);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> sweetness = {25000000, 25000000, 25000000, 25000000, 25000000, 25000000, 25000000, 25000000, 25000000, 25000000, 25000000, 25000000, 25000000, 25000000, 25000000, 25000000, 25000000, 25000000, 25000000, 25000000, 25000000, 25000000, 25000000, 25000000, 25000000, 25000000, 25000000, 25000000, 25000000, 25000000, 25000000, 25000000, 25000000, 25000000, 25000000, 25000000, 25000000, 25000000, 25000000, 25000000};
    int maxSweetness = 1000000000;
    SweetFruits* pObj = new SweetFruits();
    clock_t start = clock();
    int result = pObj->countTrees(sweetness, maxSweetness);
    clock_t end = clock();
    delete pObj;
    int expected = 721054961;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> sweetness = {25000000, 25000000, 25000000, -1, 25000000, 25000000, -1, -1, -1, -1, 25000000, 25000000, 25000000, 25000000, -1, 25000000, -1, -1, -1, -1, -1, -1, 25000000, -1, 25000000, -1, 25000000, -1, 25000000, -1, 25000000, 25000000, 25000000, -1, 25000000, -1, 25000000, -1, 25000000, -1};
    int maxSweetness = 1000000000;
    SweetFruits* pObj = new SweetFruits();
    clock_t start = clock();
    int result = pObj->countTrees(sweetness, maxSweetness);
    clock_t end = clock();
    delete pObj;
    int expected = 721054961;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> sweetness = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    int maxSweetness = 1000000000;
    SweetFruits* pObj = new SweetFruits();
    clock_t start = clock();
    int result = pObj->countTrees(sweetness, maxSweetness);
    clock_t end = clock();
    delete pObj;
    int expected = 721054961;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> sweetness = {25000000, 25000000, 25000000, 25000000, 25000000, 25000000, 25000000, 25000000, 25000000, 25000000, 25000000, 25000000, 25000000, 25000000, 25000000, 25000000, 25000000, 25000000, 25000000, 25000000, 25000000, 25000000, 25000000, 25000000, 25000000, 25000000, 25000000, 25000000, 25000000, 25000000, 25000000, 25000000, 25000000, 25000000, 25000000, 25000000, 25000000, 25000000, 25000000, 25000000};
    int maxSweetness = 0;
    SweetFruits* pObj = new SweetFruits();
    clock_t start = clock();
    int result = pObj->countTrees(sweetness, maxSweetness);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> sweetness = {-1, -1, 25000000, -1, -1, -1, 25000000, 25000000, -1, 25000000, -1, -1, -1, 25000000, -1, -1, -1, -1, 25000000, 25000000, 25000000, 25000000, 25000000, 25000000, -1, -1, 25000000, 25000000, 25000000, 25000000, -1, -1, -1, -1, 25000000, -1, 25000000, 25000000, 25000000, 25000000};
    int maxSweetness = 0;
    SweetFruits* pObj = new SweetFruits();
    clock_t start = clock();
    int result = pObj->countTrees(sweetness, maxSweetness);
    clock_t end = clock();
    delete pObj;
    int expected = 599963614;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> sweetness = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    int maxSweetness = 0;
    SweetFruits* pObj = new SweetFruits();
    clock_t start = clock();
    int result = pObj->countTrees(sweetness, maxSweetness);
    clock_t end = clock();
    delete pObj;
    int expected = 721054961;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> sweetness = {3, -1, -1, 8, -1, 9, -1, 7, -1, 7, 10, 7, -1};
    int maxSweetness = 14;
    SweetFruits* pObj = new SweetFruits();
    clock_t start = clock();
    int result = pObj->countTrees(sweetness, maxSweetness);
    clock_t end = clock();
    delete pObj;
    int expected = 292184349;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> sweetness = {2, 9, 1, 5, 6, 1, -1, 9, 9, 10, 0, -1, 8, 8, -1, 1, -1, 5, 1, -1, -1, 7};
    int maxSweetness = 75;
    SweetFruits* pObj = new SweetFruits();
    clock_t start = clock();
    int result = pObj->countTrees(sweetness, maxSweetness);
    clock_t end = clock();
    delete pObj;
    int expected = 298034354;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> sweetness = {-1, 8, -1, 9, -1, -1, 3, -1, 4, -1, 1, 2, 9, -1, 9, 7, -1, -1, -1, 10, 9, -1, -1, -1, 8, 2, 8, 2, 10, 7, 4, -1, 5};
    int maxSweetness = 24;
    SweetFruits* pObj = new SweetFruits();
    clock_t start = clock();
    int result = pObj->countTrees(sweetness, maxSweetness);
    clock_t end = clock();
    delete pObj;
    int expected = 689028488;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> sweetness = {3, 4, 7, 3, 2, 7, 8, 8, 7, 5, -1, 3, 5, -1, 9, 8, 4, 4, 5, 4};
    int maxSweetness = 30;
    SweetFruits* pObj = new SweetFruits();
    clock_t start = clock();
    int result = pObj->countTrees(sweetness, maxSweetness);
    clock_t end = clock();
    delete pObj;
    int expected = 467242906;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> sweetness = {0, 5, 2, -1, 8, -1, 8, -1, 1, -1};
    int maxSweetness = 20;
    SweetFruits* pObj = new SweetFruits();
    clock_t start = clock();
    int result = pObj->countTrees(sweetness, maxSweetness);
    clock_t end = clock();
    delete pObj;
    int expected = 57292000;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> sweetness = {-1, -1, -1, -1, -1, 8, 2, 10, -1, -1, -1, -1, -1, -1, -1};
    int maxSweetness = 9;
    SweetFruits* pObj = new SweetFruits();
    clock_t start = clock();
    int result = pObj->countTrees(sweetness, maxSweetness);
    clock_t end = clock();
    delete pObj;
    int expected = 835031052;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> sweetness = {7, -1, 1, 2, 7, 8, -1, 3, 2, 7, -1, 9, 9, -1, -1, 8, -1, 7, -1, 0, 8, 1, 10, 6, -1, -1, 4, 0, 9, 0, 1, -1};
    int maxSweetness = 96;
    SweetFruits* pObj = new SweetFruits();
    clock_t start = clock();
    int result = pObj->countTrees(sweetness, maxSweetness);
    clock_t end = clock();
    delete pObj;
    int expected = 789089526;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> sweetness = {2, -1, -1, 1, -1, 9, -1, 1};
    int maxSweetness = 10;
    SweetFruits* pObj = new SweetFruits();
    clock_t start = clock();
    int result = pObj->countTrees(sweetness, maxSweetness);
    clock_t end = clock();
    delete pObj;
    int expected = 133120;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> sweetness = {7, -1, 6, 10, -1, 3, 3, -1, 4, -1, -1, -1, -1, 0, 6, -1, -1, -1, -1, -1, -1, -1, -1, 5, -1, -1, -1};
    int maxSweetness = 25;
    SweetFruits* pObj = new SweetFruits();
    clock_t start = clock();
    int result = pObj->countTrees(sweetness, maxSweetness);
    clock_t end = clock();
    delete pObj;
    int expected = 231210906;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> sweetness = {0, -1, -1, -1, -1, 8};
    int maxSweetness = 0;
    SweetFruits* pObj = new SweetFruits();
    clock_t start = clock();
    int result = pObj->countTrees(sweetness, maxSweetness);
    clock_t end = clock();
    delete pObj;
    int expected = 864;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> sweetness = {4, 0, 0, 8, 4, -1, -1, 3, 3, 8, -1, -1, 0, -1, -1, 8, -1, -1, -1, -1, 0, -1, 3, -1, -1};
    int maxSweetness = 23;
    SweetFruits* pObj = new SweetFruits();
    clock_t start = clock();
    int result = pObj->countTrees(sweetness, maxSweetness);
    clock_t end = clock();
    delete pObj;
    int expected = 668877278;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> sweetness = {0, -1, -1, 9, 1, -1, 7, 5, -1, -1, -1, 6, -1, -1, -1, -1, 6, -1, -1, 6, -1, 6, 9, -1};
    int maxSweetness = 10;
    SweetFruits* pObj = new SweetFruits();
    clock_t start = clock();
    int result = pObj->countTrees(sweetness, maxSweetness);
    clock_t end = clock();
    delete pObj;
    int expected = 303302864;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> sweetness = {6, 2, 5, 6, 0, 1, 7, 10, 6, 3, 7, 8, 4, 6, 0, 4, 9, 8, 2, 1};
    int maxSweetness = 18;
    SweetFruits* pObj = new SweetFruits();
    clock_t start = clock();
    int result = pObj->countTrees(sweetness, maxSweetness);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> sweetness = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    int maxSweetness = 0;
    SweetFruits* pObj = new SweetFruits();
    clock_t start = clock();
    int result = pObj->countTrees(sweetness, maxSweetness);
    clock_t end = clock();
    delete pObj;
    int expected = 432272426;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> sweetness = {2, -1, 3, 6, -1, 4, -1, -1, 7, -1, 9, -1, 4, 1, 2, -1, -1, 6};
    int maxSweetness = 29;
    SweetFruits* pObj = new SweetFruits();
    clock_t start = clock();
    int result = pObj->countTrees(sweetness, maxSweetness);
    clock_t end = clock();
    delete pObj;
    int expected = 348827440;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> sweetness = {1, 10, 9, 8, 9, 7, 6, 10, 1, 7, 9, 1, 9, 0, 0, 7, 0};
    int maxSweetness = 56;
    SweetFruits* pObj = new SweetFruits();
    clock_t start = clock();
    int result = pObj->countTrees(sweetness, maxSweetness);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> sweetness = {7, 4, 2, 8, 7, 1, 7, 10, -1, 6, 7, 9, -1, -1, 3, 5, 8};
    int maxSweetness = 12;
    SweetFruits* pObj = new SweetFruits();
    clock_t start = clock();
    int result = pObj->countTrees(sweetness, maxSweetness);
    clock_t end = clock();
    delete pObj;
    int expected = 79218417;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> sweetness = {-1};
    int maxSweetness = 0;
    SweetFruits* pObj = new SweetFruits();
    clock_t start = clock();
    int result = pObj->countTrees(sweetness, maxSweetness);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> sweetness = {-1, 3, 8, 5, -1, 6, -1, 3, -1, -1, 3, 0, 1};
    int maxSweetness = 16;
    SweetFruits* pObj = new SweetFruits();
    clock_t start = clock();
    int result = pObj->countTrees(sweetness, maxSweetness);
    clock_t end = clock();
    delete pObj;
    int expected = 249668464;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> sweetness = {0, -1, 1, 4, 10, 7, 2, 6, 1, 6, 2, 2, 3, 5, 10, 1, 10, 2, 1, 5, 5, 2, -1, 5, 8};
    int maxSweetness = 90;
    SweetFruits* pObj = new SweetFruits();
    clock_t start = clock();
    int result = pObj->countTrees(sweetness, maxSweetness);
    clock_t end = clock();
    delete pObj;
    int expected = 84115305;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22263204&rd=15173&pm=12141
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
 
class SweetFruits {
public:
  int countTrees(vector <int>, int);
};
 
const int md = 1000000007;
 
int c[2222222], d[2222222];
 
void Sort(int l, int r) {
  int i = l, j = r, x = c[(l+r) >> 1], tmp;
  do {
    while (c[i] < x) i++;
    while (x < c[j]) j--;
    if (i <= j) {
      tmp = c[i]; c[i] = c[j]; c[j] = tmp;
      tmp = d[i]; d[i] = d[j]; d[j] = tmp;
      i++; j--;
    }
  } while (i <= j);
  if (l < j) Sort(l,j);
  if (i < r) Sort(i,r);
}
 
int inv(int a) {
  int x = 1, step = 1 << 30;
  while (step > 0) {
    x = (long long)x*x % md;
    if (step & (md-2)) x = (long long)x*a % md;
    step >>= 1;
  }
  return x;
}
 
int C[55][55];
int ans, r[55];
int a[55][55];
int trees[55];
 
void go(int v,int w,int id,int bit,int sw,int cc,int q) {
  if (v == 0) {
    int n = q+bit+sw, i, j;
    for (i=0;i<n;i++)
      for (j=0;j<n;j++) a[i][j] = 0;
    for (i=0;i<q;i++)
      for (j=q;j<q+bit;j++) a[i][j] = a[j][i] = r[i];
    for (i=q;i<q+bit;i++)
      for (j=q;j<q+bit;j++)
        if (i != j) a[i][j] = 1;
    for (i=q;i<q+bit;i++)
      for (j=q+bit;j<n;j++) a[i][j] = a[j][i] = 1;
    for (i=0;i<n;i++)
      for (j=0;j<n;j++)
        if (i != j) a[i][i] -= a[i][j];
    for (i=0;i<n;i++)
      if (a[i][i] < 0) a[i][i] += md;
    n--;
    int e, co, res = 1, tmp;
    for (e=0;e<n;e++) {
      for (j=e;j<n;j++)
        if (a[e][j] != 0) {
          for (i=0;i<n;i++) {
            tmp = a[i][e]; a[i][e] = a[i][j]; a[i][j] = tmp;
          }
          break;
        }
      if (a[e][e] == 0) return;
      res = (long long)res*a[e][e] % md;
      co = inv(a[e][e]);
      for (i=e+1;i<n;i++) {
        if (a[i][e] == 0) continue;
        int coeff = (long long)a[i][e]*co % md;
        for (j=e;j<n;j++) {
          a[i][j] = (a[i][j]-(long long)coeff*a[e][j]) % md;
          if (a[i][j] < 0) a[i][j] += md;
        }
      }
    }
    if (n & 1) res = (md-res) % md;
    ans = (ans+(long long)cc*res) % md;
    return;
  }
  if (v >= w) {
    int ft = (long long)cc*C[v][w] % md;
    ft = (long long)ft*inv(id) % md;
    ft = (long long)ft*trees[w] % md;
    r[q] = w;
    go(v-w,w,id+1,bit,sw,ft,q+1);
  }
  if (w > 2) go(v,w-1,1,bit,sw,cc,q);
}
 
int SweetFruits::countTrees(vector <int> a, int maxs) {
  memset(C,0,sizeof(C));
  for (int i=0;i<50;i++) C[i][0] = 1;
  for (int i=1;i<50;i++)
    for (int j=1;j<=i;j++) C[i][j] = (C[i-1][j-1]+C[i-1][j]) % md;
  int n = a.size(), i, m = 0, b[99];
  for (i=0;i<n;i++)
    if (a[i] >= 0) b[m++] = a[i];
  int mm = m/2, t;
  for (t=0;t<(1<<mm);t++) {
    c[t] = 0; d[t] = 0;
    for (i=0;i<mm;i++)
      if (t & (1 << i)) {
        c[t] += b[i];
        d[t]++;
      }
  }
  for (t=0;t<(1<<(m-mm));t++) {
    int p = t+(1<<mm);
    c[p] = 0; d[p] = 10000;
    for (i=mm;i<m;i++)
      if (t & (1 << (i-mm))) {
        c[p] += b[i];
        d[p]++;
      }
  }
  int sz = (1<<mm)+(1<<(m-mm));
  if (sz > 0) Sort(0,sz-1);
  int cur[99], j, comb[99];
  for (j=0;j<=m;j++) cur[j] = 0;
  for (j=0;j<=m;j++) comb[j] = 0;
  for (i=0;i<sz;i++)
    if (d[i] < 1000) cur[d[i]]++;
  j = sz-1;
  for (i=0;i<sz;i++) {
    if (d[i] < 1000) continue;
    while (j >= 0 && c[i]+c[j] > maxs) {
      if (d[j] < 1000) cur[d[j]]--;
      j--;
    }
    for (int k=0;k<=m;k++) {
      int z = k+(d[i]-10000);
      comb[z] += cur[k];
      if (comb[z] >= md) comb[z] -= md;
    }
  }
  trees[2] = 1;
  for (i=3;i<=40;i++) {
    trees[i] = 1;
    for (j=0;j<i-2;j++) trees[i] = (long long)trees[i]*i % md;
  }
  ans = 0;
  for (int sweet=0;sweet<=m;sweet++) {
    if (sweet == 1 || comb[sweet] == 0) continue;
    go(sweet,sweet,1,n-m,m-sweet,comb[sweet],0);
  }
  return ans;
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/