/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10104
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

class EquilibriumPoints {
public:
    vector<double> getPoints(vector<int> x, vector<int> m);
};

vector<double> EquilibriumPoints::getPoints(vector<int> x, vector<int> m) {
    vector<double> ret;
    return ret;
}


int test0() {
    vector<int> x = {1, 2};
    vector<int> m = {1, 1};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.5};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> x = {1, 2};
    vector<int> m = {1, 1000};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.0306534300317156};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> x = {1, 2, 3};
    vector<int> m = {1, 2, 1};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.4060952084922507, 2.5939047915077493};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> x = {2, 3, 5, 7};
    vector<int> m = {3, 2, 7, 5};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {2.532859446114924, 3.7271944335152813, 6.099953640852538};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> x = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> m = {1, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.0243592979720102, 2.4723232132703723, 3.485989792537662, 4.490809221844989, 5.4932617175765674, 6.494748386875358, 7.495748181372663, 8.49646878737487, 9.497014740550618, 10.497444372482867, 11.497792802126018, 12.498082448803473, 13.498328310343044, 14.498540813865308, 15.498727448906457, 16.498893749610183, 17.499043910210922, 18.499181184652592, 19.499308154336234, 20.499426912745825, 21.49953919630081, 22.499646479702527, 23.49975004751252, 24.499851049756472, 25.49995054692714, 26.500049548271605, 27.50014904636143, 28.500250050473525, 29.500353621162304, 30.50046090855136, 31.500573197343506, 32.50069196243575, 33.50081894051381, 34.5009562254225, 35.50110639905401, 36.501272716027586, 37.501459371520454, 38.5016719010186, 39.50191779601607, 40.50220748657395, 41.50255597509482, 42.502985688330185, 43.50353175794686, 44.50425253876912, 45.50525261274612, 46.50673976958521, 47.5091932332803, 48.51401504075508, 49.52769061786695};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> x = {951, 952, 953, 954, 955, 956, 957, 958, 959, 960, 961, 962, 963, 964, 965, 966, 967, 968, 969, 970, 971, 972, 973, 974, 975, 976, 977, 978, 979, 980, 981, 982, 983, 984, 985, 986, 987, 988, 989, 990, 991, 992, 993, 994, 995, 996, 997, 998, 999, 1000};
    vector<int> m = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {951.4723093821331, 952.4859849592449, 953.4908067667197, 954.4932602304148, 955.4947473872539, 956.4957474612308, 957.4964682420532, 958.4970143116698, 959.4974440249052, 960.497792513426, 961.498082203984, 962.4983280989813, 963.4985406284795, 964.4987272839724, 965.4988936009461, 966.4990437745776, 967.4991810594861, 968.4993080375643, 969.4994268026564, 970.4995390914487, 971.4996463788377, 972.4997499495264, 973.4998509536385, 974.4999504517284, 975.500049453073, 976.5001489502436, 977.5002499524874, 978.5003535202975, 979.5004608036993, 980.5005730872542, 981.5006918456638, 982.5008188153474, 983.500956089789, 984.5011062503897, 985.5012725510935, 986.5014591861348, 987.5016716896569, 988.5019175511966, 989.502207197874, 990.502555627517, 991.5029852594494, 992.5035312126251, 993.5042518186274, 994.5052516131245, 995.5067382824234, 996.509190778155, 997.5140102074624, 998.5276767867297, 999.9756407020279};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> x = {457, 468};
    vector<int> m = {333, 321};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {462.55046296332057};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> x = {806, 922, 938};
    vector<int> m = {100, 193, 199};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {847.2651021303859, 929.9430231556569};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> x = {11, 220, 277, 310};
    vector<int> m = {206, 143, 17, 4};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {123.63572012924354, 262.48645993794094, 301.30144771139635};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> x = {3, 11, 12, 19, 29};
    vector<int> m = {542, 661, 450, 521, 366};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {6.3428568766987805, 11.547737749357957, 15.964159299770074, 24.92679916153589};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> x = {42, 75, 88, 94, 113, 144};
    vector<int> m = {669, 551, 355, 344, 294, 155};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {57.88056854154769, 81.8651598882563, 91.05736913816347, 105.08356504908889, 133.29340948814712};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> x = {62, 86, 279, 323, 363, 516, 579};
    vector<int> m = {810, 749, 736, 297, 136, 107, 52};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {74.22114777106299, 190.68375633132393, 305.8269181686228, 348.330442992665, 470.26942192931597, 555.4943093853949};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> x = {10, 34, 64, 73, 93, 97, 101, 122};
    vector<int> m = {466, 463, 441, 373, 315, 292, 225, 83};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {21.51713744625404, 47.98905977631347, 68.65366684328174, 82.91319540234699, 95.00522727616308, 99.19990977703645, 116.49783309527669};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> x = {42, 74, 110, 114, 119, 123, 150, 155, 160};
    vector<int> m = {91, 130, 343, 408, 466, 479, 523, 546, 559};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {52.378393673441764, 82.56984360003182, 111.8407365720158, 116.3851151546414, 121.02724989700712, 136.50772712669652, 152.41296839515365, 157.55776856810905};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> x = {9, 14, 38, 39, 48, 73, 179, 190, 207, 302};
    vector<int> m = {560, 497, 640, 722, 437, 259, 449, 470, 709, 520};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {11.557360005571006, 24.023834133711333, 38.48476761342846, 44.61374537080624, 64.7500445423897, 126.990812898157, 184.32216509268528, 197.97605962911547, 266.0574653676664};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> x = {1, 10, 15, 29, 69, 70, 74, 100, 236, 241, 256};
    vector<int> m = {406, 390, 353, 299, 276, 246, 236, 190, 101, 92, 24};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {5.290130043588698, 12.57979198494709, 22.99726140059611, 48.17740066184592, 69.51301010635305, 72.23539219253536, 90.7725819202447, 195.61542111053393, 238.5577759981644, 251.6653068290285};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> x = {5, 6, 19, 23, 27, 37, 49, 62, 69, 76, 101, 124};
    vector<int> m = {30, 32, 72, 78, 97, 98, 125, 168, 199, 361, 365, 473};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {5.490651718506864, 10.648856702394884, 20.87357680101232, 24.910926269019086, 32.10144967042221, 42.43008939630671, 54.40782444437278, 65.19282237439467, 72.04014674516372, 89.14639640122994, 112.24198682479405};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> x = {186, 215, 245, 268, 272, 288, 295, 304, 317, 327, 341, 358, 363};
    vector<int> m = {429, 329, 270, 833, 142, 927, 322, 553, 869, 18, 643, 236, 679};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {200.0899582475676, 228.05062608441318, 252.39152121504117, 270.81386640653545, 278.11514936863557, 292.3347379629356, 299.1751591853939, 310.056045399645, 325.6962669505848, 330.99331094679064, 350.5564218829153, 359.8792517802631};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> x = {150, 182, 200, 223, 227, 251, 260, 272, 291, 318, 320, 346, 347, 368};
    vector<int> m = {93, 256, 414, 430, 363, 324, 396, 270, 205, 277, 460, 464, 307, 243};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {159.22056547258092, 189.45293654118598, 210.08985804746743, 225.08306665033092, 239.79747123677225, 255.2519808897498, 266.75455346138847, 282.71991743175795, 301.3906766058793, 318.8735936146086, 332.88764787495825, 346.5515078424794, 360.6241535527539};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> x = {303, 334, 542, 684, 793, 799, 809, 827, 904, 908, 910, 935, 956, 957, 974};
    vector<int> m = {5, 14, 30, 30, 34, 72, 79, 114, 130, 138, 139, 154, 260, 477, 518};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {313.98075618845814, 376.73771455667793, 579.3249571094264, 706.5188329781031, 795.3660834791426, 803.8759244152373, 817.4613028743188, 852.1642409282622, 905.8433725890668, 909.0063991528416, 922.7921254850576, 941.696833405782, 956.4246243413361, 966.1770980527351};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> x = {104, 223, 271, 316, 379, 383, 402, 418, 484, 486, 550, 566, 614, 663, 797, 801};
    vector<int> m = {759, 756, 733, 694, 690, 669, 619, 609, 598, 525, 505, 476, 384, 355, 201, 37};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {153.97789657480456, 245.98310276558414, 293.22648963212146, 341.8119620596451, 381.0103504275909, 393.4411840345332, 410.33985187588894, 451.76447127109145, 485.03261610398897, 522.668802039318, 558.1654145957418, 594.0842870718127, 641.33572588591, 755.226898080618, 799.800438151135};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> x = {307, 360, 410, 419, 426, 432, 451, 454, 459, 510, 565, 569, 589, 593, 596, 611, 644};
    vector<int> m = {6, 45, 68, 76, 84, 105, 115, 130, 131, 163, 178, 182, 187, 198, 202, 207, 243};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {315.04122746384303, 373.6043921456577, 414.00781426628987, 422.2687001024541, 428.855860256279, 440.3230999779571, 452.4356162049081, 456.610655147485, 487.4054216253239, 530.6529120433552, 566.9781337696943, 578.0705552478971, 590.8924472316951, 594.517048991587, 604.624638106649, 629.564970157981};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> x = {7, 9, 51, 60, 78, 104, 127, 128, 143, 197, 242, 288, 355, 380, 392, 416, 417, 429};
    vector<int> m = {4, 13, 42, 74, 93, 139, 178, 310, 329, 330, 413, 428, 510, 510, 566, 616, 653, 667};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {7.7083324436528216, 17.22829656638433, 54.70495799912837, 67.99742186097436, 88.0092196699591, 111.7886149105635, 127.43093830548844, 136.0863227092956, 171.70709291255224, 217.78321109160987, 264.2089072998252, 315.1485546014371, 366.1956787774644, 385.73694470871, 402.0263553564903, 416.49257417271735, 423.8347702052521};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> x = {74, 87, 169, 206, 208, 215, 228, 244, 246, 252, 259, 275, 303, 309, 346, 350, 352, 360, 375};
    vector<int> m = {2, 4, 4, 6, 19, 22, 23, 27, 32, 35, 36, 49, 49, 51, 66, 73, 79, 84, 101};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {79.0091051497649, 101.30759403946902, 175.56594903878175, 206.7101613107468, 211.3697437854425, 221.18054817076603, 234.0111959046988, 244.9501286329762, 249.06107525500266, 255.59420262561645, 266.9723094493813, 287.8485973277038, 305.96172325533473, 323.23102847677615, 347.8050396068893, 350.9852657897451, 356.361289888055, 367.96598952257216};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> x = {2, 3, 5, 7, 8, 9, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24};
    vector<int> m = {9, 106, 127, 228, 2, 24, 7, 93, 320, 62, 112, 171, 77, 123, 57, 180, 43, 168, 226, 9};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {2.2095228041539317, 3.884602510377972, 5.845840847341766, 7.9094678092442745, 8.479423751265735, 9.79524383813741, 11.17021431243366, 12.342928546755846, 13.681227768778257, 14.450967849058117, 15.452333857126963, 16.594841979654063, 17.459425575440235, 18.58118360850522, 19.375109874825107, 20.652040621992427, 21.35313602585456, 22.474458646244905, 23.849475037860323};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> x = {112, 131, 247, 274, 327, 473, 505, 518, 547, 550, 613, 625, 679, 680, 691, 742, 752, 800, 804, 824, 832};
    vector<int> m = {203, 184, 177, 156, 112, 110, 105, 102, 85, 72, 72, 67, 48, 41, 34, 31, 15, 6, 5, 3, 2};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {121.70577684746644, 189.54183747849862, 260.869864352812, 304.4283488493519, 396.708749201386, 487.74932252709743, 511.51508620952006, 532.4967353667287, 548.5638754905392, 586.3783265586374, 619.1278882957581, 653.3156704991443, 679.5195474876002, 686.6409143157882, 723.1355873869977, 747.9587018098746, 786.6820584730463, 802.10100300451, 817.2721585104825, 828.6433368851967};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> x = {147, 168, 194, 212, 217, 221, 231, 243, 258, 259, 285, 289, 296, 309, 311, 323, 328, 336, 345, 346, 348, 349};
    vector<int> m = {209, 206, 199, 185, 182, 146, 110, 103, 94, 80, 78, 69, 62, 60, 50, 48, 46, 42, 39, 32, 18, 10};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {157.0267849912198, 180.1823188288219, 201.9973614621942, 214.43678937662423, 219.14541538701826, 226.89117628153343, 237.54695403414848, 250.2634804388444, 258.5203792918421, 273.5653659777232, 287.04380151285784, 292.7743885012808, 302.46664872839153, 310.0465709197333, 317.6745741982593, 325.5386236464848, 332.27067374555224, 340.2377537379675, 345.5222385266902, 347.19867497225937, 348.59145535961};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> x = {1, 7, 18, 37, 42, 48, 51, 53, 64, 65, 68, 74, 89, 92, 102, 105, 106, 108, 135, 166, 253, 263, 273};
    vector<int> m = {452, 264, 573, 803, 436, 841, 708, 191, 166, 910, 251, 709, 413, 96, 363, 215, 42, 338, 515, 16, 154, 255, 235};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {4.292942654508774, 11.481687959969179, 25.403245223222008, 39.747773603901294, 44.43189456418236, 49.55395362934496, 52.339229388753324, 58.30108472413849, 64.29836147449157, 66.98200544439328, 70.75581284915481, 83.09719214547297, 91.0254558608384, 96.28288150919172, 103.63500708001689, 105.68559964177837, 106.66956692520222, 124.16068558772628, 162.72680730729104, 221.27682127723227, 257.2656404237075, 268.2138404281876};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> x = {8, 17, 24, 38, 44, 54, 86, 131, 132, 141, 166, 167, 177, 206, 215, 217, 225, 258, 291, 304, 321, 330, 358, 428};
    vector<int> m = {97, 270, 410, 110, 223, 273, 532, 463, 486, 279, 518, 295, 472, 444, 337, 550, 234, 445, 448, 142, 533, 530, 233, 439};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {11.00530450806382, 20.115031690207438, 32.68410449623295, 40.47684765826757, 48.895046386321994, 68.16099931726745, 103.99500713800109, 131.49368352442656, 137.62897054293188, 151.6541103997368, 166.56961899934936, 172.42007111752093, 191.5007145034159, 210.1243867811823, 215.87937744096592, 222.1616796278554, 243.604413863689, 274.5602106485102, 299.05154751566045, 309.91552717299476, 325.53879444991605, 348.55193277252533, 398.9219296746992};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> x = {138, 386, 458, 483, 513, 591, 592, 662, 698, 704, 727, 740, 744, 758, 772, 775, 809, 816, 832, 833, 838, 847, 849, 860, 864};
    vector<int> m = {45, 234, 371, 374, 414, 444, 444, 469, 525, 533, 590, 625, 644, 662, 682, 689, 698, 702, 722, 739, 739, 740, 786, 796, 799};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {167.06560431723915, 410.4613149154643, 469.9767710405374, 497.6057164812961, 543.0928004297566, 591.4999773602542, 624.1856135634841, 675.561139298085, 700.9625101183726, 714.6755765350699, 732.7117308862266, 741.9807572593461, 751.2952961202029, 764.4151956454452, 773.4993584036886, 791.8146948646583, 812.418406298161, 822.5426310811149, 832.4958938922659, 835.7235918813442, 842.3565691499148, 847.9870892729898, 854.9384421451223, 862.0278902333284};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> x = {33, 52, 90, 98, 100, 117, 136, 159, 171, 221, 236, 256, 268, 290, 310, 327, 337, 355, 389, 391, 401, 404, 472, 534, 636, 642};
    vector<int> m = {748, 743, 672, 618, 545, 513, 506, 467, 457, 350, 350, 350, 329, 317, 249, 235, 224, 187, 144, 131, 81, 52, 30, 29, 19, 11};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {42.25112210991094, 68.68534035754678, 93.72272795645182, 99.03419380224068, 110.02361531518028, 127.09004780595438, 147.95153846607826, 165.14740719804655, 199.34581908516122, 228.38676428857121, 245.92813812442148, 262.14236557370475, 279.70773554943787, 300.73260978463054, 318.5853887495348, 332.13228726953685, 347.1791561781431, 373.0283349382779, 390.0228355019408, 397.0344630304321, 402.6915601571758, 460.50546355790607, 518.4479575517066, 615.1038195299434, 639.4297112974657};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> x = {380, 381, 401, 461, 470, 474, 533, 554, 604, 621, 641, 646, 675, 679, 680, 711, 726, 733, 734, 757, 761, 785, 793, 808, 826, 841, 843};
    vector<int> m = {283, 689, 639, 254, 64, 54, 561, 243, 250, 65, 267, 191, 131, 69, 49, 571, 101, 59, 83, 407, 198, 16, 441, 541, 115, 102, 83};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {380.3904705250111, 391.8790714813201, 438.53434145568156, 466.8451162471316, 472.15308822117345, 495.6933157555179, 545.6040168874551, 579.793840747667, 614.6537061164966, 627.2991958943962, 643.7074593399163, 661.9026872972756, 677.1867392313079, 679.5458376852009, 690.7004766628286, 721.1416256850971, 729.5259096088885, 733.4582728244834, 742.5615214535317, 759.35623238228, 776.0259272886296, 786.2673371553085, 800.1876287562591, 820.5683851812005, 833.9815789137413, 842.0549605174335};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> x = {30, 31, 39, 54, 55, 89, 90, 134, 139, 142, 155, 156, 161, 175, 182, 187, 188, 194, 203, 213, 222, 244, 259, 265, 321, 328, 343, 356};
    vector<int> m = {386, 387, 419, 426, 488, 491, 512, 524, 525, 550, 565, 588, 619, 652, 670, 678, 678, 688, 695, 698, 722, 722, 762, 765, 767, 770, 801, 804};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {30.49901348456624, 35.32138329975919, 45.6456020868072, 54.48312470502789, 71.32322574511417, 89.49472930334034, 108.02623664775476, 136.3315564148955, 140.48883276415847, 147.78007450680406, 155.4939612599344, 158.71338976674525, 167.93486573194338, 178.22508389055065, 184.22407145901815, 187.5003549456245, 191.3701430262986, 198.81815630817067, 208.18535825015266, 217.64366545764068, 233.94530930441982, 251.1699861325551, 262.0278113509247, 295.48301911773547, 324.46683280925834, 335.74301816655213, 349.7647118253677};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> x = {307, 343, 397, 410, 442, 444, 488, 514, 538, 551, 556, 560, 595, 597, 614, 619, 654, 673, 679, 691, 697, 699, 701, 708, 719, 723, 730, 732, 733};
    vector<int> m = {237, 245, 248, 285, 309, 310, 316, 317, 328, 358, 361, 378, 387, 399, 405, 421, 461, 484, 488, 529, 549, 575, 585, 608, 609, 621, 631, 690, 699};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {323.37869216392016, 363.98214390792316, 403.1317061285763, 423.4633876152749, 442.99911279228115, 466.76602454921385, 499.88421063076396, 524.2721967618631, 543.5970639818772, 553.4086223299305, 558.0161431941469, 576.6653897203025, 595.9911725038608, 605.7196811411748, 616.4856483331805, 635.809394168115, 661.772547514418, 675.9112181460939, 684.235932046384, 693.5842197037223, 697.9618198095579, 700.019194800589, 704.8583018942875, 713.3632136609642, 720.9591180053628, 726.1782314951283, 730.9235984795212, 732.503522866828};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> x = {1, 5, 22, 37, 39, 45, 64, 70, 78, 82, 84, 87, 92, 101, 102, 105, 106, 131, 144, 152, 160, 168, 169, 177, 193, 195, 198, 217, 228, 237};
    vector<int> m = {247, 267, 236, 77, 105, 7, 37, 67, 258, 195, 365, 163, 59, 140, 403, 257, 118, 448, 2, 130, 475, 198, 89, 473, 565, 84, 83, 651, 135, 8};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {2.9517645357109377, 14.127208006695355, 30.414962192777132, 37.92309117497432, 43.87211041228298, 50.50509159768214, 66.0373429407336, 72.21276316738115, 79.90637124209428, 82.84351881719303, 85.83825775344391, 90.35710580956413, 94.816559792019, 101.3683131691161, 103.66761534377667, 105.60250870867543, 119.7237917038781, 142.12738759372945, 144.8429010798095, 154.65914074022913, 164.51937943653036, 168.5985218408689, 172.27894000580972, 184.74960530771773, 194.4395926194765, 196.85285575911183, 206.47451736896443, 224.69346698287796, 235.73419117138633};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> x = {15, 20, 24, 83, 87, 107, 118, 119, 122, 132, 162, 176, 177, 179, 207, 216, 242, 249, 289, 302, 322, 361, 366, 370, 402, 424, 464, 502, 532, 586, 597};
    vector<int> m = {326, 655, 568, 400, 8, 8, 375, 51, 576, 695, 159, 341, 253, 104, 242, 245, 426, 398, 3, 548, 447, 138, 286, 199, 112, 363, 130, 335, 554, 650, 158};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {16.976157029410658, 22.091205529894772, 57.53184057675628, 86.49693543677077, 96.26281826996617, 108.0119125813874, 118.72229704517892, 119.98817524769532, 127.02030324199376, 151.8343243508043, 166.9023271141997, 176.535528483802, 178.3027942196478, 195.04918759351563, 211.49051149880614, 227.31074167773892, 245.57111093027873, 276.4062194284629, 289.90245147614996, 312.5378110661362, 343.7031409625838, 362.9823564858459, 368.2042945275334, 390.92386489480884, 410.39565537235865, 449.17684701562837, 478.71428424545104, 515.2081371087143, 558.7614360470877, 593.3942711410448};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> x = {2, 3, 4, 5, 12, 24, 29, 30, 36, 38, 44, 48, 52, 60, 66, 68, 69, 74, 84, 97, 98, 103, 104, 106, 107, 112, 129, 161, 165, 176, 223, 287};
    vector<int> m = {846, 843, 808, 793, 787, 785, 745, 722, 696, 686, 662, 655, 651, 637, 608, 585, 560, 533, 532, 427, 420, 386, 366, 366, 342, 319, 302, 284, 272, 239, 163, 119};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {2.4823020382434695, 3.5053032063786205, 4.520846855873403, 9.209169545338824, 17.835986117477567, 26.23431147081442, 29.503839164680613, 33.16474616087284, 37.006837138837966, 41.194149988822275, 46.00546196299037, 50.05899938573772, 56.14696368960435, 62.74664168525176, 66.95713782913967, 68.51046361497836, 71.93332695974797, 79.72176967925665, 90.0771095264561, 97.50030691747108, 100.45890615155372, 103.5014791548978, 105.0145280178003, 106.51664865408054, 110.0589027014152, 123.47765797575246, 148.81803960169663, 163.02496309735164, 171.3260624970614, 211.06923366950377, 271.50787041172305};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> x = {15, 21, 23, 24, 26, 27, 29, 30, 31, 32, 34, 35, 36, 37, 38, 39, 41, 42, 43, 45, 46, 48, 49, 50, 51, 52, 54, 55, 56, 57, 58, 59, 60};
    vector<int> m = {502, 475, 404, 290, 276, 274, 268, 260, 248, 239, 238, 233, 214, 186, 178, 178, 177, 172, 167, 162, 161, 144, 142, 107, 103, 102, 85, 75, 53, 52, 50, 28, 19};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {17.527441820601723, 21.976473525750606, 23.539337892307913, 25.021018109516206, 26.50045161825657, 27.99112599288236, 29.49300467686823, 30.507391606231813, 31.51786937173801, 33.01507997150782, 34.49415484524775, 35.51311401599385, 36.52423819993642, 37.51613794186737, 38.51866810420424, 40.040339254944115, 41.499544802959164, 42.517873596466885, 44.04971106874733, 45.50561305873248, 47.05071207826951, 48.499021155809814, 49.542383883576576, 50.520894274838284, 51.5251130021379, 53.12783860074444, 54.521038272854994, 55.55949067013513, 56.52791318902281, 57.53312850301559, 58.606975664537686, 59.61278296797431};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> x = {15, 27, 28, 31, 33, 40, 53, 57, 92, 96, 105, 108, 115, 118, 120, 133, 156, 175, 179, 185, 215, 235, 242, 272, 351, 382, 419, 429, 432, 445, 466, 468, 480, 536};
    vector<int> m = {211, 211, 210, 208, 208, 205, 204, 200, 199, 193, 191, 188, 185, 182, 175, 173, 164, 164, 159, 155, 146, 146, 145, 145, 137, 132, 129, 127, 119, 117, 76, 66, 51, 42};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {19.499926265256605, 27.49694143219444, 29.555741908618344, 32.02133088988569, 36.979085257820685, 46.79764339424399, 55.02713726477673, 74.04986204935076, 93.98258009629762, 100.27489240078305, 106.49580636746393, 111.45541728671131, 116.4614142043672, 119.02884749283288, 127.91461107856364, 146.1141752296719, 164.73882021610785, 176.99323123679966, 182.17126882798368, 202.9154907732339, 224.75676605351833, 238.53524144225383, 259.53379960149823, 318.5969118371114, 366.30731163279256, 398.229225920247, 423.57048477388946, 430.52720714818554, 439.3121712823205, 456.45932782897376, 467.036091298972, 475.3966442383056, 520.8410231599273};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> x = {12, 40, 59, 120, 128, 139, 150, 172, 183, 204, 217, 224, 241, 244, 251, 326, 329, 340, 369, 397, 427, 470, 474, 495, 531, 537, 569, 578, 581, 613, 655, 694, 697, 700, 715};
    vector<int> m = {5, 9, 10, 10, 19, 25, 27, 32, 37, 60, 75, 96, 98, 108, 120, 130, 144, 164, 172, 184, 195, 200, 210, 242, 250, 272, 294, 296, 296, 305, 314, 340, 341, 345, 412};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {20.318373193176832, 48.1319592658339, 71.44484274861705, 123.10788652347387, 132.82264727167416, 144.24284643038925, 159.0401764817912, 177.02482945277956, 190.88140829781457, 209.45899910739655, 220.24055483670844, 231.48468343806962, 242.45296838902408, 247.6333712508855, 283.99648532436026, 327.4542835308532, 334.71942591049753, 355.0930569126389, 382.6465296890033, 411.52468224458494, 444.4858693917529, 471.97026786066385, 484.9371198429217, 510.85251203292853, 533.9282750459568, 551.9314767340088, 573.1376346687243, 579.5073991727832, 599.7349264635354, 634.1716272618403, 670.0242433484061, 695.4557591154801, 698.5333159647018, 708.3853825788531};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> x = {3, 8, 26, 35, 37, 44, 45, 59, 60, 77, 93, 95, 99, 100, 103, 110, 121, 126, 129, 131, 143, 147, 164, 193, 202, 206, 213, 221, 267, 276, 336, 345, 354, 370, 377, 463};
    vector<int> m = {137, 15, 33, 7, 22, 6, 2, 118, 53, 149, 100, 85, 223, 39, 111, 27, 41, 174, 27, 121, 15, 87, 122, 105, 98, 53, 234, 201, 11, 72, 100, 107, 32, 114, 20, 67};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {6.740024938161014, 17.39698881407729, 30.934848252097552, 35.717099333760956, 41.09792739672713, 44.62923054657804, 46.968697184718394, 59.598420088253405, 67.71668202344864, 83.77028874868901, 94.01004505646063, 96.55107623603959, 99.7040467356201, 101.55288927114495, 108.09933813763905, 115.04343538866993, 122.58414872370761, 128.03868062672012, 129.68884758912327, 139.66788625440614, 144.22376984197433, 155.56640820197583, 177.85571464134648, 197.20069165524507, 204.23195622943047, 208.39175906795026, 217.235783364834, 258.1748218028099, 269.64830094851754, 304.9190750049187, 340.37337619937966, 350.87716381879, 360.66421738260215, 374.9802236756517, 435.9926544619742};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> x = {27, 29, 31, 34, 40, 41, 53, 58, 61, 66, 82, 90, 97, 98, 111, 120, 127, 136, 141, 153, 181, 186, 191, 209, 214, 257, 260, 263, 274, 277, 285, 296, 301, 396, 403, 473, 489};
    vector<int> m = {758, 374, 435, 115, 576, 764, 581, 202, 445, 272, 389, 512, 678, 439, 603, 177, 257, 329, 492, 212, 662, 468, 8, 366, 533, 119, 61, 731, 243, 644, 221, 41, 703, 586, 703, 38, 716};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {28.14433319622384, 30.000619854803503, 33.02936859712591, 35.89057634865384, 40.46510521665121, 47.94908472154937, 55.99259609788578, 59.239140429470524, 63.921074964521736, 73.95541943128416, 85.50553495314827, 92.98992190602704, 97.5545383793791, 105.39832026640687, 116.83795863189417, 123.30678324373181, 131.1272842729931, 138.27802379367398, 148.66700737460275, 164.47787757692151, 183.7140306870043, 190.47780623361677, 198.56339251569153, 211.2776805017807, 236.54341974743028, 258.396928587754, 260.68206297703875, 269.0806664011038, 275.1466435654088, 282.19168484181205, 291.6361961685973, 297.0163780669603, 355.9987568170774, 399.34481594772615, 453.0126338164056, 476.1087224704993};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> x = {10, 26, 96, 104, 124, 149, 162, 186, 189, 224, 244, 300, 315, 393, 415, 449, 458, 473, 523, 564, 592, 626, 663, 695, 712, 716, 725, 730, 770, 784, 811, 873, 874, 888, 909, 918, 954, 965};
    vector<int> m = {1, 2, 2, 3, 4, 4, 4, 6, 7, 7, 8, 8, 8, 8, 9, 10, 13, 14, 15, 15, 16, 16, 17, 17, 19, 19, 19, 19, 20, 20, 20, 21, 27, 39, 41, 42, 44, 45};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {16.330173515218043, 46.257803785934016, 99.51160658251194, 113.06923846329931, 135.33221373359152, 155.2986489282788, 171.30360246209676, 187.44215135866352, 207.73581345675115, 233.73353601628713, 270.60700748243937, 307.48020656011295, 348.8230133348608, 403.1301070608921, 428.9807901831417, 453.13658250059643, 465.6035728509644, 498.5764134535035, 542.2935967991561, 577.3886874518505, 608.4952452640844, 642.8768844550266, 676.6623888431636, 702.016261405523, 713.9799175629457, 720.5696318892121, 727.5446940977547, 752.3041645653359, 776.9946694013083, 798.1109197481353, 833.489438687563, 873.4683202112983, 880.996637051735, 898.077243532497, 913.5025178273333, 936.8201387925264, 959.5244156493468};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> x = {27, 75, 130, 135, 149, 153, 158, 169, 171, 179, 188, 196, 199, 214, 219, 221, 235, 247, 249, 253, 263, 265, 269, 274, 275, 277, 291, 296, 338, 345, 347, 348, 352, 371, 376, 377, 379, 385, 388};
    vector<int> m = {496, 490, 487, 484, 484, 476, 472, 466, 464, 459, 447, 442, 437, 437, 436, 431, 430, 427, 425, 423, 421, 420, 420, 415, 414, 401, 400, 391, 390, 365, 346, 340, 340, 321, 290, 284, 260, 243, 233};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {47.11163359532323, 92.76237246463626, 132.46207396897825, 141.33275135714553, 150.96217653742582, 155.55558800353373, 163.1820524489077, 169.9996284613569, 175.3304375952422, 183.55221157213015, 191.8115463116161, 197.51144311979482, 206.57049710890374, 216.33306871045738, 220.00905177194426, 228.7283617867575, 240.1197526979417, 247.99035552562674, 251.09585000992462, 257.68774330968654, 263.9891081128743, 267.05195679449696, 271.28990627394694, 274.4971530910409, 276.07497538658606, 285.5274575846049, 293.57227551309006, 318.4971542380158, 341.02753294338765, 345.9539715486426, 347.50627274653607, 350.26651146992947, 362.36073566766436, 373.22354646685926, 376.4989719920809, 378.0839586880887, 382.40713323682564, 386.56246879125365};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> x = {15, 26, 27, 29, 31, 34, 40, 44, 46, 48, 50, 59, 76, 83, 101, 114, 119, 123, 127, 139, 149, 164, 166, 172, 199, 205, 222, 230, 244, 252, 256, 263, 270, 275, 277, 280, 293, 307, 354, 362};
    vector<int> m = {964, 961, 945, 939, 896, 895, 890, 869, 848, 837, 711, 708, 695, 667, 649, 641, 598, 569, 542, 505, 493, 449, 379, 375, 362, 357, 351, 305, 276, 276, 251, 229, 180, 177, 167, 130, 86, 35, 20, 9};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {18.968942645143393, 26.494978812816335, 28.02689301123428, 30.03504627135193, 32.58721122421389, 37.10928853678121, 41.89669012771223, 44.98632086033052, 47.01621511379449, 49.08471721620265, 55.58137666142734, 68.81911535773114, 79.59859788380527, 92.66893785593783, 107.00749547227687, 116.45005140189335, 121.02071639311012, 125.09615014527029, 133.8730284312831, 144.24471474157696, 156.34952506810288, 165.0400649615043, 169.3289795430635, 187.72069956331558, 202.01791943951957, 213.966103504979, 226.15807962955597, 237.22419718906139, 247.8180445871866, 254.0474020658076, 259.74400444769356, 266.7149488530158, 272.4037499073984, 276.01464124713345, 278.6926355627937, 289.0759657029474, 303.3542974267576, 348.0508070508663, 359.28714621313316};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> x = {154, 249, 288, 326, 380, 510, 522, 532, 545, 550, 569, 587, 594, 618, 658, 690, 714, 716, 750, 762, 765, 767, 788, 793, 797, 804, 809, 814, 821, 846, 868, 889, 903, 913, 922, 924, 929, 934, 937, 945, 949};
    vector<int> m = {188, 180, 178, 168, 149, 140, 135, 133, 123, 117, 113, 103, 95, 95, 88, 82, 79, 79, 78, 74, 66, 66, 62, 54, 51, 44, 43, 42, 37, 37, 36, 34, 34, 34, 22, 11, 11, 9, 8, 7, 7};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {195.40170571276428, 267.8798838110266, 307.36041129262446, 354.5867073796311, 429.27158476847205, 515.7293476423893, 526.9619230223273, 538.4037713131959, 547.5464125527328, 560.5533618057932, 578.084376183886, 590.6017773337637, 607.6048062664051, 639.927725840178, 673.6955857863989, 700.39332415369, 715.0000267137862, 733.2720135583461, 755.2492754639263, 763.4815961747265, 766.0175761777155, 778.570904162766, 790.4989435043856, 795.0511493904801, 800.7465462234536, 806.5365428749071, 811.6016216509224, 817.9011527198272, 836.70265673206, 857.9788966908015, 878.8209273556745, 895.8687927838437, 907.9787633753122, 917.8400102382329, 923.1722106273785, 926.8350795265685, 931.7337591378255, 935.5941341426901, 941.7421594001403, 947.092425873178};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> x = {13, 15, 17, 20, 33, 40, 41, 46, 49, 63, 75, 78, 83, 90, 110, 111, 118, 130, 151, 175, 182, 185, 188, 204, 206, 217, 254, 280, 287, 300, 336, 354, 358, 361, 421, 423, 431, 486, 502, 533, 581, 725};
    vector<int> m = {140, 141, 255, 37, 145, 13, 210, 162, 229, 3, 107, 118, 95, 80, 19, 20, 277, 117, 33, 146, 298, 86, 1, 107, 76, 3, 27, 134, 230, 83, 154, 202, 211, 119, 233, 30, 165, 1, 294, 77, 63, 48};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {13.945905069421983, 15.869991783324725, 19.22261237885691, 26.465462552674985, 36.358832743533355, 40.19817518663602, 43.55461553169681, 47.39697810648707, 61.6027963506307, 65.37951332191548, 76.44779712102326, 80.73156381886713, 86.91835068737163, 100.92589452519258, 110.48614454031102, 112.68118065544857, 125.34256265294627, 144.20668968366846, 157.66236852454887, 177.80097133781402, 183.95804559455513, 187.7788161272265, 196.2165459750272, 205.08787031808959, 215.76578010724108, 239.20466160456613, 260.5243036954746, 283.0121482235263, 295.3036301271918, 316.31282449667935, 343.22526689331005, 355.9374748417331, 359.7457522602547, 394.2659297026919, 422.4680011861932, 426.77101305083534, 469.6612185841394, 486.93061427062537, 522.8685370439296, 563.8383700899215, 690.4048862459783};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> x = {6, 21, 22, 32, 39, 40, 43, 49, 52, 55, 68, 71, 74, 83, 99, 102, 106, 121, 125, 135, 136, 160, 165, 175, 181, 182, 183, 185, 233, 234, 243, 253, 263, 269, 272, 298, 324, 367, 372, 539, 545, 625, 724};
    vector<int> m = {4, 8, 31, 33, 41, 42, 44, 47, 47, 54, 54, 58, 58, 80, 80, 83, 93, 102, 104, 107, 109, 112, 114, 114, 115, 118, 120, 137, 138, 141, 145, 147, 147, 149, 155, 161, 171, 179, 190, 190, 190, 191, 194};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {8.474110804792982, 21.335279954782983, 26.177301699901804, 34.616569988939204, 39.493735344485174, 41.572786205466144, 45.92155610447362, 50.468650030323886, 53.486805586482134, 61.20560523466665, 69.42869004435886, 72.52744134984869, 78.49972823070885, 89.90685078804424, 100.45262465907902, 104.00225399290034, 113.16617301276753, 122.97149856913069, 129.58476989621323, 135.49799554977648, 148.15832964370213, 162.43646010582898, 169.59787077397982, 177.41158152571285, 181.48080926444777, 182.50610252964742, 184.04879243918288, 210.59096467656923, 233.4968356438702, 238.9130711021312, 248.01876110057583, 257.82455098661194, 265.8635962930347, 270.50355847576407, 287.65287957487226, 311.8250725668039, 344.9709476826247, 369.46729192067744, 471.78376721208144, 542.0003567370361, 591.8671991939084, 680.248519910871};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> x = {6, 23, 39, 56, 62, 69, 73, 75, 78, 82, 88, 95, 103, 109, 114, 116, 117, 118, 122, 123, 126, 128, 132, 133, 134, 135, 136, 137, 139, 149, 163, 164, 167, 171, 174, 175, 176, 184, 188, 190, 192, 196, 197, 198};
    vector<int> m = {31, 32, 36, 39, 52, 56, 63, 68, 68, 69, 69, 72, 79, 82, 85, 90, 91, 95, 97, 101, 101, 105, 107, 112, 112, 114, 116, 120, 120, 121, 127, 131, 133, 134, 135, 135, 137, 138, 139, 141, 142, 143, 145, 146};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {12.614942666112121, 29.037643645604454, 44.51449326538888, 58.51011232900848, 64.94423469108577, 70.74934530306592, 73.96609363732381, 76.52918947006899, 80.05179035962428, 85.05386605090408, 91.36125576848673, 98.4876471852121, 105.60332548381686, 111.02421072464182, 114.88996559716537, 116.48627100151279, 117.5062840057301, 119.9832748591835, 122.49309715946785, 124.53434456425947, 126.98637421154129, 129.72379354412817, 132.47333460501233, 133.49241367299396, 134.4966538660185, 135.50235067085407, 136.51298022097097, 138.1078532463602, 145.3067988973022, 154.82246860314467, 163.49237951729782, 165.5609055888782, 168.94502938330317, 172.3525980647771, 174.48899540258384, 175.51313524999148, 180.52699118386096, 185.85577117755764, 188.97312608205652, 191.01305551535933, 193.90190290256965, 196.48771242172273, 197.51491566544814};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> x = {6, 19, 29, 31, 36, 40, 44, 46, 47, 56, 83, 130, 131, 133, 145, 149, 153, 164, 170, 172, 188, 190, 202, 203, 219, 249, 250, 256, 266, 267, 273, 293, 297, 302, 305, 309, 325, 347, 355, 362, 371, 376, 380, 381, 393};
    vector<int> m = {325, 375, 296, 206, 73, 70, 451, 178, 207, 253, 280, 205, 138, 264, 204, 337, 335, 358, 210, 79, 236, 467, 161, 140, 212, 158, 399, 443, 401, 210, 124, 341, 104, 409, 73, 281, 126, 383, 352, 332, 247, 370, 283, 21, 129};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {11.711871562983056, 23.73651793821257, 30.08669399078137, 34.20702086441584, 37.79343851500333, 41.081068991693115, 45.180300170284625, 46.49318096359809, 52.39021994649495, 71.83723318324542, 101.19804745029526, 130.54073260676472, 131.9062672731415, 139.02062374806383, 146.69255234500662, 151.02499614537857, 158.69235233123135, 167.34788013384718, 171.25061866432765, 178.7745215790697, 188.83097425528246, 197.3178986211658, 202.51820885614927, 212.00396199383988, 230.02768917123007, 249.38485920809205, 253.01807941361716, 260.93389099031083, 266.58036532687356, 270.99958591341465, 282.2420903250736, 295.47664985046094, 298.77697625693054, 304.08624996644687, 306.6237710047941, 319.56942503651624, 333.1421621155872, 350.9401055022023, 358.55374840604736, 366.6781362250598, 373.2223833708964, 378.1608457687746, 380.7895343826159, 389.0136443493409};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> x = {12, 24, 38, 71, 88, 104, 109, 126, 139, 155, 162, 184, 186, 221, 226, 230, 278, 289, 315, 337, 338, 348, 354, 369, 370, 397, 411, 418, 427, 461, 484, 500, 526, 537, 569, 591, 610, 634, 670, 675, 684, 694, 699, 752, 755, 757};
    vector<int> m = {128, 127, 126, 124, 118, 118, 118, 113, 110, 99, 96, 90, 82, 79, 77, 77, 77, 74, 70, 65, 63, 61, 59, 58, 52, 48, 40, 38, 38, 35, 33, 31, 28, 26, 24, 23, 22, 19, 14, 14, 11, 8, 5, 4, 4, 3};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {17.819775165181696, 31.10739369516272, 54.0377262718885, 79.18489653495485, 95.33868989666823, 106.49895200979435, 118.08750740887771, 132.58334813973892, 147.05166585180183, 158.5507425598504, 172.9946545617534, 185.02404520119114, 204.627536333862, 223.43409577910722, 228.04396829874548, 257.4640346764378, 283.53173592727876, 302.3104906611744, 324.19211593618445, 337.5035758438478, 343.51427260050764, 351.0746118945211, 361.32800363768433, 369.51390380471094, 386.5461099321433, 404.1442218369797, 414.5503809754558, 422.7562749891813, 447.7332216592571, 473.0055072213837, 492.3327306192175, 513.8856861624213, 531.6915500304854, 555.3156507250167, 580.4075273219908, 600.949094589379, 623.2995694055517, 652.9194429389545, 672.4815636821122, 679.9864963267346, 689.63136663874, 696.8745910200194, 736.6953952274812, 753.4551900580343, 756.0905580713948};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> x = {2, 5, 14, 15, 26, 29, 35, 39, 42, 43, 46, 54, 57, 67, 71, 78, 79, 84, 89, 90, 92, 99, 102, 107, 112, 116, 117, 126, 132, 141, 147, 151, 156, 162, 164, 168, 180, 183, 191, 211, 229, 247, 260, 274, 321, 324, 366};
    vector<int> m = {29, 31, 94, 123, 132, 139, 145, 145, 150, 156, 220, 221, 236, 265, 271, 271, 271, 305, 335, 344, 396, 397, 404, 410, 420, 426, 449, 480, 532, 555, 590, 593, 597, 598, 618, 622, 633, 650, 676, 693, 698, 733, 758, 764, 766, 788, 799};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {3.3645686734623554, 7.302437247434218, 14.465322034002952, 19.704426103726547, 27.439733366307287, 31.752954097672195, 36.83336660109573, 40.338651492827736, 42.49351291622003, 44.482944582414646, 49.91839580370306, 55.46978613266761, 61.54644929324719, 68.92575769668994, 73.98327031664388, 78.49838128630353, 81.51971034802972, 86.09512002973784, 89.49130245971142, 91.01767816478272, 95.62552222645402, 100.48295153584206, 104.52259461666796, 109.41524112765549, 113.82539148713079, 116.49484914743525, 121.95723283198828, 128.92819435307968, 136.31108840356717, 143.80181035446208, 148.96956727631812, 153.50679256040593, 158.82131605761822, 162.98844585758297, 166.12644867332318, 174.26772309000012, 181.49209305252174, 187.3406416362609, 202.3517768790299, 220.3127902432331, 237.9603757209175, 253.49353965328118, 267.29777903195065, 298.3470492366066, 322.49021166465104, 349.3185951396308};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> x = {2, 3, 5, 6, 7, 8, 9, 10, 11, 12, 15, 17, 18, 24, 26, 27, 30, 31, 42, 45, 46, 48, 49, 52, 54, 56, 58, 59, 60, 62, 64, 66, 67, 71, 76, 79, 81, 83, 91, 92, 93, 100, 101, 104, 110, 113, 117, 136};
    vector<int> m = {894, 881, 351, 713, 199, 303, 566, 723, 309, 527, 416, 392, 745, 537, 753, 834, 579, 330, 449, 41, 47, 126, 867, 955, 287, 346, 640, 300, 917, 176, 906, 619, 384, 378, 290, 869, 977, 427, 799, 46, 923, 498, 81, 982, 436, 953, 276, 662};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {2.4952684163314096, 4.164705982928812, 5.411231801647398, 6.643597157819238, 7.452883428963606, 8.414830493610182, 9.470720674531048, 10.60584153168572, 11.466913336246389, 13.702473126966982, 15.950402820607152, 17.42562146770552, 21.140395366220524, 24.84919429182449, 26.489006731702993, 28.7207548604637, 30.577723217969364, 37.32738229080343, 43.98795797633643, 45.42649002406979, 46.48462673132987, 48.271488859688816, 50.432651073914755, 53.266500536865536, 54.94904040392018, 56.801561621458305, 58.565537978199714, 59.38008572600802, 61.3738700306901, 62.66869543446241, 65.08324428856878, 66.56924616510119, 69.42157895347421, 73.54314003730863, 77.0327600732079, 79.96520621841216, 82.23359931184183, 86.92658896503178, 91.75956065756492, 92.21831047395926, 97.11766984901243, 100.70548204211497, 101.95063291607329, 107.50990413804863, 111.24161470437824, 115.69246989726653, 129.0521033650133};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> x = {124, 237, 243, 293, 301, 323, 340, 344, 351, 370, 376, 383, 392, 393, 402, 403, 425, 430, 446, 454, 464, 465, 474, 479, 490, 517, 545, 555, 558, 559, 564, 580, 582, 598, 604, 607, 632, 634, 635, 639, 649, 650, 657, 658, 666, 667, 676, 684, 689};
    vector<int> m = {3, 6, 29, 34, 63, 64, 74, 89, 98, 102, 107, 113, 117, 130, 132, 134, 146, 150, 155, 177, 186, 187, 195, 195, 196, 202, 211, 216, 218, 221, 224, 242, 244, 244, 252, 258, 262, 272, 273, 291, 293, 305, 334, 361, 364, 366, 384, 391, 426};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {130.566454278023, 238.81053875662377, 254.59021105777623, 296.25288382593044, 310.06675017522537, 329.3135242103941, 341.8683263727837, 347.48497014113286, 359.22795217788655, 372.83688950747876, 379.36277457607093, 386.7960787140121, 392.4865010450203, 397.45351595073384, 402.49862761794293, 414.48621771481976, 427.46736357807856, 437.6201436434685, 449.69777558055694, 458.23259459740154, 464.49910817564694, 469.8598372133023, 476.5352734052973, 484.98086281770054, 504.1381348330701, 527.8799974305018, 549.0662565787754, 556.3619547137885, 558.4997022505329, 561.8062009157038, 571.8272263463919, 580.9977197830058, 590.1194866173585, 600.8001778526332, 605.5027716259613, 617.3194160445753, 632.9219300826228, 634.5022336356428, 637.1815067972684, 643.5903930561169, 649.4941463273728, 653.3338784583057, 657.4903852713944, 662.0300851622253, 666.4998243611415, 672.0992405436582, 680.0458852136135, 686.5157747289704};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> x = {2, 3, 6, 10, 12, 20, 24, 25, 28, 29, 32, 35, 42, 47, 48, 52, 53, 68, 69, 70, 72, 76, 79, 87, 88, 89, 90, 92, 93, 104, 106, 107, 108, 112, 122, 126, 134, 138, 140, 142, 143, 149, 164, 165, 176, 190, 205, 209, 211, 215};
    vector<int> m = {278, 290, 126, 367, 352, 361, 238, 335, 262, 232, 363, 268, 237, 327, 86, 75, 330, 178, 207, 330, 244, 330, 294, 202, 233, 178, 340, 364, 178, 266, 226, 213, 255, 206, 263, 301, 181, 245, 167, 184, 168, 202, 332, 156, 304, 355, 65, 15, 318, 61};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {2.4918916664161266, 4.839044658564511, 7.46831248962685, 11.010926503337434, 15.953856748010441, 21.89809515076047, 24.455128229426613, 26.562904245041594, 28.51596975065423, 30.46842416202106, 33.669380582812806, 38.89362503544197, 44.24062145648, 47.660204713885534, 50.073325340529976, 52.32540069490311, 59.761318735119715, 68.45449979152758, 69.44616472596562, 71.11325775204813, 73.97430513919667, 77.5657472628967, 82.62740246413435, 87.46159047991421, 88.51817324355883, 89.42985082956034, 91.01022388965904, 92.59762939061167, 99.02960761700942, 104.96321610370848, 106.4971189474424, 107.4931441992708, 110.40716533077651, 117.33795435124813, 123.94264381678713, 130.379116705292, 135.7413332909416, 139.06711308712295, 140.96302647728766, 142.51817445114676, 146.49523395303396, 156.39393801383778, 164.5933892363828, 171.02501411755026, 183.30918451743975, 199.8822061731388, 206.82027210983165, 209.36157409453347, 213.81413532633348};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> x = {1, 2, 3, 7, 10, 19, 20, 22, 23, 25, 26, 29, 30, 35, 36, 38, 41, 42, 49, 50, 51, 53, 54, 57, 58, 61, 62, 67, 68, 72, 73, 74, 80, 84, 87, 91, 93, 100, 105, 110, 115, 122, 129, 132, 135, 137, 145, 146, 149, 190};
    vector<int> m = {843, 297, 520, 737, 505, 341, 603, 431, 653, 68, 812, 21, 473, 214, 756, 233, 326, 26, 762, 424, 215, 650, 265, 309, 252, 784, 315, 680, 144, 528, 314, 130, 299, 86, 316, 364, 192, 376, 380, 207, 427, 468, 352, 522, 508, 264, 215, 712, 702, 808};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.610006485944354, 2.4569355593863467, 4.990220576565164, 8.661389571964794, 13.946719271105557, 19.420354877010304, 21.022427225929597, 22.450704165459825, 24.347982732532948, 25.235937765630652, 28.245677720876515, 29.183764585623102, 32.49010246710634, 35.34610519817437, 37.29761448939843, 39.550937327452075, 41.78267557587105, 44.11135036032307, 49.563329973567036, 50.59849121453634, 51.81814386763634, 53.61321998246932, 55.604640945195854, 57.52408724908774, 59.17680443460735, 61.61342242276291, 64.52455280485083, 67.68462686601973, 69.82579468420874, 72.56268611742738, 73.637915694859, 77.56201068978888, 82.54586406636491, 85.06637460171652, 88.92414642325684, 92.16891235358392, 96.44976000302557, 102.50799027980801, 107.85965188355468, 112.11869943726654, 118.4062448956324, 125.38950198962752, 130.30982168958803, 133.50156407361698, 136.18039809815025, 140.74284936937664, 145.35218538054113, 147.55817047502967, 176.1766933419358};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> x = {50, 96, 187, 195, 227, 234, 279, 292, 298, 361, 367, 380, 394, 418, 422, 439, 453, 468, 469, 470, 478, 509, 524, 525, 526, 527, 556, 558, 565, 580, 590, 603, 621, 624, 625, 632, 645, 651, 655, 659, 661, 665, 669, 680, 690, 693, 702, 717, 718, 721};
    vector<int> m = {95, 95, 95, 93, 92, 89, 87, 87, 78, 77, 74, 73, 73, 72, 70, 63, 62, 61, 59, 57, 54, 52, 51, 51, 50, 50, 47, 46, 45, 39, 39, 39, 34, 33, 30, 27, 26, 25, 23, 22, 21, 20, 20, 20, 14, 11, 9, 4, 3, 2};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {71.85597496532478, 130.4916080198965, 190.99531751179518, 210.5229390083225, 230.53167077824872, 256.5333761411081, 285.14439547849395, 295.1078428171992, 328.3619847143482, 363.9935398799836, 373.7204325739483, 387.12482959251736, 405.0234529551984, 420.01022673425325, 431.21846314245727, 445.82047264743903, 458.9748373309403, 468.4909912788286, 469.5182770129842, 474.87075840785633, 495.17801865285526, 514.5823395138814, 524.482033807498, 525.5027416491193, 526.5188592128304, 543.8020749248906, 557.0022300789719, 561.8360890028944, 573.3636257726105, 585.0807636672196, 596.6998783968922, 611.0510658495232, 622.3957011005541, 624.5141915236827, 629.1679422456634, 638.8357071915591, 647.886593719491, 652.9964539789114, 656.9594521360871, 660.0160467794976, 663.1529028813507, 667.1155769369568, 675.4357306432933, 685.6011311958514, 691.6091416538752, 698.5379300155205, 712.0583089113525, 717.536022742202, 719.8540637542055};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> x = {52, 63, 80, 81, 82, 88, 95, 101, 104, 109, 115, 125, 134, 144, 145, 146, 148, 150, 157, 158, 160, 167, 170, 172, 184, 200, 203, 204, 207, 209, 210, 212, 215, 216, 221, 224, 231, 237, 239, 248, 250, 255, 258, 261, 263, 266, 268, 270, 271, 278};
    vector<int> m = {1, 1, 4, 8, 9, 10, 11, 17, 23, 25, 30, 31, 37, 44, 45, 51, 52, 55, 55, 56, 60, 61, 64, 64, 65, 65, 69, 73, 73, 86, 94, 101, 106, 115, 121, 122, 122, 126, 129, 135, 138, 142, 151, 171, 172, 176, 181, 208, 224, 234};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {53.962690710601265, 64.67460207725307, 80.39333211700693, 81.48925352233564, 84.96031206093605, 90.88607503309146, 97.2345756920509, 102.34658128292796, 106.40225460592939, 111.81075492148858, 119.42417421291171, 128.620985939585, 137.1655177535747, 144.47681848875897, 145.48922912672856, 147.03179392864627, 149.02043998238457, 153.29998726558352, 157.4926829329026, 159.03693950319865, 163.60945854128624, 168.43137739408274, 171.01574247620812, 178.5195644416321, 189.26379148038416, 201.26802421983848, 203.48870894877712, 205.45653906028002, 207.8851178730269, 209.48611239244286, 211.0188998884364, 213.43261671196927, 215.4921899389774, 218.69302299338813, 222.52132241626214, 227.6444400584807, 233.76152256716642, 237.99405281417415, 243.18815475810948, 248.98236541464013, 252.40520738932628, 256.4130433990524, 259.3880820966249, 261.98733044726885, 264.46149958003457, 266.9677794462152, 268.9347113996017, 270.4967292976106, 275.1986214887579};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> x = {63, 110, 119, 122, 123, 131, 158, 164, 176, 193, 203, 226, 233, 264, 299, 313, 318, 320, 328, 364, 368, 375, 420, 426, 437, 440, 449, 464, 478, 488, 499, 501, 504, 505, 519, 520, 522, 523, 527, 528, 533, 535, 538, 549, 556, 567, 572, 575, 584, 586};
    vector<int> m = {554, 544, 470, 459, 412, 406, 396, 386, 358, 351, 338, 332, 323, 320, 278, 275, 261, 256, 253, 247, 247, 243, 243, 224, 222, 219, 219, 188, 185, 158, 157, 150, 149, 149, 142, 132, 126, 117, 105, 103, 100, 95, 87, 85, 78, 76, 70, 60, 51, 42};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {80.19626718553718, 114.0386775037802, 120.40044772473072, 122.51601543885837, 127.76369865787433, 145.7301168476214, 161.0047478315205, 170.4325459295444, 184.76335116592765, 198.1188228696734, 214.78893982467292, 229.54674508333102, 250.40504555708708, 280.48295379210276, 305.1119235925597, 315.35288423096995, 319.0097366511667, 324.52169438990745, 346.85717666834773, 365.9786075672574, 371.7016967565273, 397.36000861201137, 422.99818046973473, 431.1868644928219, 438.5039294812585, 444.8832145531727, 457.1823217845796, 470.8956099134373, 482.99010823569654, 492.58693922343446, 499.98704105294246, 502.4446586873871, 504.5033395036702, 511.89385780828184, 519.5018796194947, 521.0134502810379, 522.5153241401201, 525.1702262309082, 527.505241883299, 530.7729044423402, 534.020201204236, 536.6432865217653, 544.8078723379067, 552.7724324261344, 561.8548025938926, 569.5062754427202, 573.5860831354676, 580.1337512141308, 585.0589514972366};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> x = {6, 8, 21, 37, 49, 76, 79, 80, 88, 123, 130, 157, 162, 174, 203, 212, 217, 231, 239, 241, 246, 260, 285, 293, 312, 320, 334, 346, 371, 390, 399, 407, 410, 420, 443, 457, 469, 483, 508, 509, 512, 524, 535, 559, 561, 563, 582, 607, 642, 751};
    vector<int> m = {16, 16, 16, 16, 16, 16, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 14, 14, 14, 13, 13, 13, 13, 13, 12, 12, 12, 12, 11, 11, 11, 10, 10, 9, 9, 9, 9, 9, 8, 8, 8, 7, 6, 6, 6, 6, 6, 4, 2};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {6.998004336096411, 15.033456872094053, 28.947207491528808, 43.00127320761125, 60.141064567700795, 77.39837124763577, 79.50230298276662, 84.67777570704678, 106.9395244931006, 126.49162545931534, 142.8007232852862, 159.48398410678374, 168.35869255473852, 187.57056066181156, 207.20891469716372, 214.5041567112856, 224.08624732585747, 234.58635201402944, 239.99697632103232, 243.74340260947997, 254.0650444289161, 272.9978306040167, 288.99693373484195, 302.5900530502529, 316.0741829886217, 327.27279589290674, 340.1762267603949, 359.0337620732827, 379.99636040256087, 394.3084354360499, 402.7895624288195, 408.5422273783182, 415.6001559121112, 432.99407750745866, 449.9652605565328, 463.0474541424934, 476.18596182148406, 493.58478561956235, 508.51223997901036, 510.6314996595719, 518.9082936978702, 529.9924449959601, 546.6499299258385, 559.9736388015237, 562.0278610666949, 574.7533099929915, 596.4744427489491, 629.6182769365864, 731.3204629073455};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> x = {4, 8, 10, 11, 14, 16, 24, 30, 33, 38, 39, 40, 50, 56, 57, 68, 74, 79, 81, 84, 87, 92, 93, 99, 104, 105, 111, 131, 132, 134, 138, 149, 162, 164, 171, 173, 174, 175, 188, 190, 197, 198, 207, 223, 224, 254, 258, 276, 280, 317};
    vector<int> m = {19, 20, 21, 25, 26, 27, 28, 28, 35, 37, 37, 39, 42, 42, 44, 51, 51, 59, 68, 69, 69, 70, 73, 76, 79, 79, 82, 85, 88, 97, 109, 111, 115, 115, 115, 115, 128, 131, 142, 173, 175, 187, 197, 200, 223, 224, 244, 268, 269, 280};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {5.665254895504747, 8.902694097821172, 10.478189333749597, 12.531137385395272, 15.007788546089824, 20.0781216020777, 26.653042463194765, 31.368965437193168, 35.115411782925065, 38.48630057992874, 39.50698748382105, 45.43301344083143, 52.61877535246137, 56.49429545694987, 62.336661569599656, 70.70265301597513, 76.09895146156464, 79.9438336755816, 82.49613344256989, 85.51404960741067, 89.32179622189997, 92.49511561909347, 96.21416454771006, 101.26373986806442, 104.50060335505873, 108.38446559349171, 119.34593054761598, 131.4890277569749, 133.01844634745277, 136.08550400774368, 143.81039645987767, 154.28349998014534, 162.98966102982837, 167.11225122001383, 171.9112133756605, 173.47701788026973, 174.51140237061253, 181.80394033221398, 188.94525246101193, 193.28801350390677, 197.4922096261604, 203.11516813754878, 214.5476310795059, 223.48658236824923, 239.98766462319378, 255.95406858493618, 266.93249065982127, 278.0071540135441, 302.61261010286205};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> x = {1, 2, 5, 9, 11, 18, 21, 25, 26, 28, 34, 42, 43, 44, 46, 53, 54, 62, 64, 70, 72, 74, 77, 85, 90, 91, 102, 108, 119, 124, 125, 126, 130, 137, 154, 156, 163, 167, 172, 184, 192, 201, 203, 207, 220, 237, 242, 245, 254, 255};
    vector<int> m = {265, 258, 252, 251, 250, 241, 234, 227, 227, 225, 225, 219, 202, 201, 200, 199, 197, 194, 187, 184, 182, 181, 181, 174, 172, 171, 170, 131, 125, 124, 99, 88, 86, 83, 79, 79, 78, 76, 76, 72, 71, 60, 59, 56, 54, 44, 38, 35, 22, 10};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.4995654405746595, 3.5814686014437704, 6.969543245089026, 10.008175770946846, 14.566376444762504, 19.472807994625676, 22.83773455205067, 25.49677348766845, 27.064125198872922, 31.341167715874434, 37.439925021126555, 42.49483646613356, 43.510529758929295, 45.083210114652886, 49.67456789081335, 53.50200415353352, 58.25451840532361, 63.007133297806476, 66.95987424573059, 70.97882697420246, 73.0187709637681, 75.59540582378654, 81.42909172806205, 87.32405896786418, 90.50213419399253, 97.52896448439088, 105.27419989781134, 113.59781362337276, 121.20446776912024, 124.51752958730992, 125.53211114852408, 128.36954711140692, 134.1096215890493, 146.33364573456936, 154.99752526340387, 159.69459677725155, 165.02673580942928, 169.63396648406973, 178.777877877195, 188.0893445896662, 196.41996594456992, 202.00031473630486, 205.1717093823334, 214.90335220939346, 229.636013069292, 239.52459256687507, 243.5599172590126, 250.52483550238372, 254.59949734839518};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> x = {77, 152, 159, 167, 214, 224, 234, 235, 238, 240, 253, 256, 271, 273, 281, 292, 295, 298, 307, 313, 321, 322, 325, 326, 328, 334, 337, 339, 341, 342, 365, 366, 368, 370, 376, 377, 389, 390, 392, 395, 397, 399, 402, 403, 406, 409, 416, 417, 427, 429};
    vector<int> m = {344, 411, 342, 134, 204, 367, 263, 602, 404, 520, 477, 607, 89, 403, 541, 239, 585, 356, 110, 525, 401, 518, 561, 491, 418, 513, 267, 40, 631, 406, 357, 566, 625, 120, 338, 495, 475, 638, 181, 335, 508, 503, 497, 628, 375, 394, 139, 242, 288, 564};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {99.12332120432342, 155.60534841021723, 164.0340812871131, 181.5442678916167, 217.60845667974428, 227.69609995943108, 234.39448926853436, 236.63165119861122, 238.96116602177534, 246.884456211982, 254.41361477600458, 264.9002814774557, 271.6345030362238, 276.7100203477064, 286.46832359418806, 293.13967690790184, 296.69761049959686, 303.5754507979889, 308.7812756025229, 316.26104110641336, 321.46282807909324, 323.424174944917, 325.51570328751666, 327.11539625396824, 331.20095012998786, 335.70840456427334, 338.29944159024535, 339.41040016222416, 341.55691673886156, 353.4286872502398, 365.4353977968601, 367.00267258244173, 369.420371733691, 372.6987107823171, 376.453128984091, 382.3782039452933, 389.4601965362947, 391.32503646162854, 393.33005149006794, 395.87370906785736, 398.0003399347129, 400.4301665400195, 402.4726950709961, 404.80875726991144, 407.6098491128729, 413.49012412487787, 416.4340880595306, 422.1773017072767, 427.83975079681966};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> x = {3, 4, 10, 11, 12, 20, 23, 26, 29, 36, 38, 42, 47, 48, 54, 60, 62, 67, 75, 77, 87, 88, 89, 99, 100, 109, 112, 115, 117, 129, 130, 131, 135, 149, 157, 159, 176, 180, 182, 183, 189, 191, 200, 205, 207, 212, 228, 247, 248, 260};
    vector<int> m = {1, 8, 12, 19, 22, 32, 50, 69, 78, 78, 82, 88, 88, 89, 90, 100, 102, 105, 114, 121, 122, 129, 131, 131, 144, 146, 154, 156, 161, 170, 170, 175, 180, 192, 195, 208, 223, 233, 256, 275, 331, 339, 344, 347, 379, 394, 398, 409, 421, 421};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {3.247886389772347, 5.5997524678121735, 10.421432281753003, 11.486449996393333, 14.968579956249975, 21.221739325800442, 24.323396906383955, 27.45051886468135, 32.163322178992786, 36.97382627208542, 39.99142132784111, 44.27004909827663, 47.498700213114816, 51.23267270633583, 56.69875454550373, 60.990642017693006, 64.60179129940164, 70.6105657254883, 75.98228815891773, 81.29094047557257, 87.47873009578811, 88.51048154281199, 94.07353680844341, 99.4878886751128, 104.43796327845172, 110.42346072752002, 113.46087033103302, 116.00828617581428, 122.41199243919166, 129.4851880846473, 130.50846224519148, 133.2599058259542, 142.4977670622235, 152.56528759581136, 157.9843642805651, 166.2145120442749, 177.73309417714836, 180.9122381181324, 182.49438209513363, 186.0227889684748, 189.99875036979614, 195.71065015987642, 202.3221587383856, 205.9793728324684, 209.68508237656386, 221.24515223860044, 236.66128876301195, 247.49637670005825, 254.9861331368138};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> x = {80, 140, 159, 182, 200, 213, 216, 237, 241, 270, 275, 318, 324, 329, 331, 345, 355, 365, 380, 390, 416, 424, 437, 442, 450, 462, 465, 466, 473, 504, 506, 523, 529, 539, 547, 549, 598, 609, 612, 623, 626, 633, 635, 659, 661, 690, 704, 731, 756, 757};
    vector<int> m = {21, 32, 38, 56, 66, 76, 78, 82, 87, 87, 98, 102, 102, 106, 108, 114, 118, 123, 123, 125, 127, 128, 128, 131, 131, 145, 148, 151, 151, 154, 158, 159, 159, 160, 160, 164, 165, 165, 166, 168, 168, 170, 171, 171, 173, 173, 174, 174, 175, 177};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {94.37461047796745, 147.96654938866698, 167.83555052818537, 189.5651657754272, 205.470737644223, 214.48958886778672, 226.2315478002394, 238.9707616018726, 254.99743367399054, 272.4224320623217, 292.1066065030718, 320.801017037366, 326.3226506287356, 330.0014290213169, 338.67454684747815, 349.9289527557579, 360.0087150637994, 372.51800540694114, 385.0169021889842, 401.95697663031046, 419.87936095209284, 429.98550776222805, 439.44647837747414, 446.0382110133254, 455.0784715338723, 463.36564954199366, 465.49955838120195, 470.0594210790084, 488.76312726534957, 504.9926404165807, 514.736504044085, 525.9666288373419, 533.9985870134074, 542.7258876762344, 547.9980024462893, 574.7872045282704, 602.7945109411905, 610.4911387210129, 617.3125680095816, 624.4894928776941, 629.4451782656556, 634.0047825160486, 648.2266744889457, 659.9981247578812, 677.9338090524266, 697.129053635728, 718.4045555961936, 742.2461510222636, 756.4986709480934};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> x = {43, 62, 73, 79, 88, 93, 106, 107, 109, 113, 117, 122, 125, 126, 147, 149, 156, 159, 162, 166, 167, 170, 177, 181, 183, 190, 195, 212, 214, 234, 237, 240, 245, 247, 252, 253, 260, 262, 264, 266, 267, 273, 279, 286, 287, 288, 290, 292, 295, 302};
    vector<int> m = {664, 662, 659, 657, 651, 649, 647, 647, 645, 642, 638, 634, 634, 622, 622, 618, 604, 603, 601, 600, 599, 596, 585, 584, 554, 550, 549, 543, 538, 536, 530, 528, 511, 483, 479, 476, 475, 450, 443, 412, 412, 398, 380, 363, 337, 337, 284, 271, 259, 194};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {50.94076543303599, 66.94064964277987, 75.92483722936899, 83.29880857229995, 90.47628775417968, 98.17597482690564, 106.49395752804071, 108.04564837383788, 111.10949144139894, 115.03630462335593, 119.4538023780153, 123.41092327856825, 125.50566157813657, 137.01350870977006, 147.99402406902863, 152.41137789724775, 157.45181571983403, 160.49257003529726, 163.85900241680525, 166.49969554086618, 168.63667455459017, 173.75331340886925, 178.9343669405161, 182.02365831293122, 186.89534298638125, 192.60239381663484, 203.81389330842654, 213.00283471985426, 223.27368559510523, 235.4454173074418, 238.50428108271734, 242.44014192199933, 246.01164512792997, 249.4157205384583, 252.50147409070263, 256.5639477107942, 260.9809967018482, 262.9979655611959, 264.99894954692843, 266.50748704775106, 270.58705587365955, 276.17921435555775, 282.06107665255604, 286.4942360058295, 287.5100567449607, 289.1090834880388, 291.0666423695993, 293.67245995297014, 299.5477733731733};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> x = {16, 24, 26, 33, 54, 58, 68, 69, 70, 98, 101, 105, 111, 112, 144, 154, 157, 158, 183, 184, 186, 191, 205, 208, 209, 217, 220, 223, 229, 233, 234, 236, 237, 249, 251, 265, 280, 296, 305, 306, 310, 317, 333, 347, 348, 370, 390, 400, 402, 414};
    vector<int> m = {190, 319, 393, 115, 45, 333, 689, 494, 376, 132, 4, 43, 107, 46, 110, 61, 354, 350, 499, 357, 972, 742, 412, 168, 14, 387, 195, 39, 34, 69, 397, 349, 234, 16, 479, 428, 282, 101, 75, 271, 140, 645, 1, 229, 15, 27, 115, 156, 77, 572};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {18.935070244558588, 24.94727683942819, 30.771060224627973, 42.03003685646662, 55.003274873635505, 61.413850715954524, 68.53239424910785, 69.55448142485386, 90.74530462967738, 100.53082664673894, 102.5191763446465, 107.3110566514309, 111.60464629719363, 123.93882390977771, 147.3249517006525, 154.7594093115889, 157.50160462896156, 167.20262976038669, 183.5290289490523, 184.80601629804238, 188.79334453420722, 199.53619936497313, 206.82314709013548, 208.78352887378963, 212.2129096185983, 218.75263956692805, 222.14648602823524, 225.98367820612157, 229.92872354330098, 233.28662985060834, 235.0059045914071, 236.5569798374238, 244.75475162118767, 249.31295349150128, 258.6186239597872, 273.6877228053186, 289.5404560066348, 299.2458208677606, 305.3431580151358, 308.32660225648567, 312.48519886250097, 332.4122954395649, 337.3352814600046, 347.79648353203515, 364.8052899574035, 376.76734878443165, 394.1524516250788, 401.17029512657984, 406.18518607316946};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> x = {90, 101, 104, 122, 127, 129, 133, 135, 138, 142, 153, 160, 165, 173, 177, 180, 184, 195, 203, 205, 207, 209, 214, 215, 216, 219, 223, 224, 225, 231, 232, 233, 234, 236, 240, 241, 251, 257, 261, 262, 263, 267, 269, 272, 273, 275, 283, 284, 286, 289};
    vector<int> m = {429, 534, 552, 452, 207, 522, 494, 586, 354, 585, 391, 386, 37, 412, 478, 251, 491, 341, 492, 330, 133, 280, 533, 393, 592, 462, 529, 315, 227, 391, 535, 436, 394, 591, 360, 545, 382, 570, 582, 458, 595, 573, 575, 425, 502, 428, 396, 147, 559, 130};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {94.42682599884256, 102.48349220681857, 112.34508852564153, 124.47493304841049, 127.75747766395304, 130.912263277171, 133.95519723362474, 136.73028560219444, 139.90869854311427, 148.44075264266428, 156.53483064520202, 163.71967572635106, 166.96267757736268, 174.85587149874027, 178.72053948807502, 181.7817815172652, 189.71788678648585, 198.06239759063868, 204.07391261260818, 206.20798985811876, 207.84295079832373, 210.80090506577523, 214.5180541826699, 215.46190344175903, 217.68724733049123, 220.8833722853346, 223.55752014734952, 224.56489615274336, 227.5882737942785, 231.4438612226803, 232.52196234846667, 233.52691632407277, 234.98870092523498, 238.2101658147567, 240.45221482252435, 246.96501622273564, 253.45711074018908, 258.7187685437573, 261.51353145738085, 262.48153795277074, 265.13503873946865, 267.99916273260635, 270.554606718538, 272.4801184977206, 274.1113893879168, 279.62193621297513, 283.6124593534995, 284.7839603407989, 288.11034539050775};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> x = {5, 14, 17, 45, 70, 100, 108, 119, 128, 143, 145, 165, 216, 223, 226, 233, 237, 270, 325, 346, 359, 367, 368, 375, 385, 430, 436, 445, 479, 484, 486, 489, 498, 500, 501, 530, 538, 619, 625, 643, 644, 668, 737, 748, 753, 759, 762, 767, 769, 784};
    vector<int> m = {36, 78, 80, 92, 96, 122, 131, 216, 256, 267, 297, 298, 312, 314, 318, 319, 322, 324, 329, 342, 344, 346, 359, 365, 367, 378, 381, 383, 392, 400, 404, 408, 419, 436, 440, 445, 470, 472, 473, 481, 486, 490, 495, 500, 501, 503, 509, 515, 518, 525};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {8.160899118778289, 15.490202348099121, 30.57081808561943, 55.725615376856524, 80.05550521343775, 103.69668735941198, 112.55473559424905, 123.2234333875609, 134.5794509148053, 143.97383371446324, 156.31080245711024, 185.48307576226728, 219.17228288210896, 224.48915338614614, 229.591649893941, 235.03630175514434, 256.9332942876332, 294.369712195684, 334.08404606391196, 351.7847564503712, 362.4045767217377, 367.49517994606515, 371.90420904597227, 380.39966340607805, 406.8434625279641, 432.93931924142817, 440.6385208822513, 458.64207889293925, 481.2189696894103, 484.9848979128235, 487.55436428938685, 493.29677048981364, 498.9352985379969, 500.5041066726475, 518.9996045526591, 534.0048300916894, 579.725478471421, 621.967602182963, 633.1629632096033, 643.4987926950844, 658.1687586099422, 697.5827747817941, 741.8066444899455, 750.4102209663356, 755.8443450371537, 760.4840530723527, 764.4682023674552, 768.0094233865398, 778.170935936871};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> x = {36, 41, 71, 83, 87, 91, 92, 93, 94, 96, 102, 104, 108, 109, 110, 112, 113, 114, 122, 123, 124, 125, 127, 129, 130, 136, 138, 140, 141, 144, 148, 149, 150, 151, 155, 157, 160, 162, 163, 165, 168, 170, 171, 176, 177, 181, 182, 183, 185, 187};
    vector<int> m = {224, 278, 249, 257, 236, 156, 282, 213, 190, 235, 212, 195, 282, 199, 272, 43, 171, 230, 265, 153, 278, 104, 240, 289, 126, 271, 244, 279, 145, 224, 190, 88, 271, 290, 270, 109, 249, 210, 280, 287, 274, 193, 213, 169, 264, 219, 265, 220, 243, 249};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {38.338237243708676, 52.155055554773995, 75.48193086382125, 84.87615588647529, 88.7375826701367, 91.4102159875512, 92.52996237938419, 93.53015443469269, 95.04291212528173, 99.12574238395888, 103.00002629533952, 105.64735864331567, 108.52611673641923, 109.47495894488637, 111.36763564414548, 112.33285788514215, 113.47144706165167, 117.73711327731104, 122.54328021094213, 123.43438234033988, 124.6260309332441, 125.90292129225668, 127.95823559309198, 129.6086874588712, 132.91164178703212, 136.99031555779698, 138.9544615112605, 140.58458008653315, 142.5431812727261, 145.88755405381528, 148.5556972326924, 149.36215041175092, 150.49808509611978, 153.20119806424196, 156.2091276793783, 158.20878467472312, 160.96325373206605, 162.4633926693603, 164.03467485008542, 166.55360872858245, 169.05474875061486, 170.49549870101913, 173.64726679032685, 176.443847117546, 178.949764927721, 181.46448960420975, 182.53138564445783, 184.05429209805902, 186.05457178612897};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> x = {4, 7, 9, 13, 14, 15, 19, 21, 22, 23, 25, 26, 36, 42, 45, 47, 48, 53, 57, 61, 64, 65, 67, 68, 70, 78, 83, 84, 93, 98, 100, 113, 121, 130, 133, 134, 135, 136, 141, 146, 148, 154, 157, 158, 161, 163, 166, 178, 184, 191};
    vector<int> m = {20, 19, 17, 17, 16, 15, 15, 14, 14, 13, 13, 12, 12, 11, 10, 10, 9, 7, 7, 7, 7, 7, 6, 6, 5, 5, 4, 4, 4, 4, 4, 4, 4, 4, 3, 3, 3, 3, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {5.417951307703719, 8.01822088811332, 10.828072517391693, 13.495340707852673, 14.521332372079705, 17.112550148503864, 19.9493227868578, 21.491147467471748, 22.520520139641924, 24.05171575354509, 25.52115598330868, 32.34825192447035, 38.940242245570005, 43.45981505677736, 45.96406566020525, 47.51900441759797, 51.02723665415729, 55.0494586414823, 58.95546806355894, 62.374737769343454, 64.4967813026256, 66.04907945096411, 67.50629768238278, 69.14166579366315, 75.03146552772375, 80.54694486972014, 83.50225230161541, 89.37301959878982, 95.44654675376424, 99.01202933888615, 107.81141833180183, 117.0379040069187, 125.05363863758365, 131.41912875345588, 133.48493661407122, 134.50177931940897, 135.51923999554612, 139.23433820640042, 143.61516072731, 147.0109159813611, 151.13650535993634, 155.38753005466032, 157.50027658060827, 159.60026308401933, 162.0289004623836, 164.89874600871184, 174.48924554950264, 181.29199233867325, 188.00340440878176};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> x = {19, 21, 22, 34, 35, 37, 40, 42, 43, 47, 51, 53, 55, 56, 58, 60, 62, 64, 66, 67, 69, 71, 72, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 93, 94, 95, 96, 97, 99, 100, 101, 102};
    vector<int> m = {572, 530, 521, 430, 373, 367, 364, 346, 343, 342, 336, 336, 312, 296, 279, 275, 275, 259, 259, 246, 215, 203, 196, 190, 181, 160, 145, 139, 138, 137, 130, 130, 117, 108, 93, 90, 72, 62, 57, 55, 53, 47, 40, 34, 34, 25, 25, 15, 14, 11};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {19.95777548735699, 21.506803331528076, 27.83376830935658, 34.51129566274798, 36.043570248157664, 38.49515234888638, 40.97021869457251, 42.50573434738726, 45.1902443382226, 48.90475054526607, 51.96623145527913, 53.975568301356674, 55.50711244267207, 57.060293891123365, 59.01709197963798, 61.006839901643815, 63.01437796493941, 64.971183957542, 66.50788799108716, 68.0796050719689, 69.9938888157354, 71.50460029695091, 73.00477655975658, 74.49712410079633, 75.51699588857983, 76.51762112654626, 77.5112912320314, 78.50667825532568, 79.50704942304986, 80.51316122589077, 81.509057487722, 82.52319400302605, 83.52337273581244, 84.5330216012413, 85.52212459133611, 86.5459651687932, 87.5405667031261, 88.53240360990804, 89.5268857506014, 90.53432384573799, 92.1440074858146, 93.52746131748845, 94.5394223972909, 95.52699773593781, 96.57285995552036, 98.18949569137581, 99.58274052552872, 100.5539526835251, 101.58524234847317};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> x = {6, 10, 11, 21, 25, 26, 28, 29, 33, 34, 37, 39, 40, 44, 46, 48, 49, 53, 54, 55, 57, 59, 60, 62, 64, 65, 66, 68, 70, 72, 73, 75, 77, 79, 80, 81, 83, 84, 87, 88, 89, 90, 91, 92, 94, 95, 97, 98, 99, 100};
    vector<int> m = {370, 361, 349, 337, 325, 319, 314, 307, 284, 274, 273, 268, 265, 264, 260, 259, 258, 256, 244, 244, 230, 228, 220, 208, 204, 190, 172, 148, 144, 137, 120, 120, 114, 109, 108, 104, 88, 84, 78, 70, 67, 58, 46, 31, 28, 24, 18, 18, 14, 14};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {7.783855674744117, 10.504767768941544, 15.821273400842273, 22.704056224590524, 25.495254863314095, 26.99789224688937, 28.507666467271022, 31.069980303843273, 33.50349701850462, 35.54899084805652, 37.963987559744254, 39.50564990888141, 42.097507090462784, 44.976126327627554, 46.96467417889659, 48.504191507296895, 50.96306346441699, 53.491934995357, 54.50916047192392, 56.062798729580436, 57.98284925701702, 59.50625687865431, 61.060376340460664, 62.98275886066115, 64.50364738517465, 65.52785465159747, 67.1249331369346, 69.04709206235373, 71.01038932704782, 72.52076098727349, 74.0708050169439, 76.03651771952732, 77.98565146901635, 79.49511929514057, 80.51867739411293, 82.09766105629501, 83.51633519028104, 85.62321251291931, 87.50477469563177, 88.51230386712814, 89.5319219325844, 90.55161328175356, 91.5845257090059, 93.20115820211277, 94.54141086667423, 96.20783399991387, 97.51549650668107, 98.55773211473257, 99.54597034717219};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> x = {11, 46, 65, 78, 88, 91, 92, 97, 99, 105, 122, 123, 127, 138, 151, 169, 176, 181, 185, 190, 192, 197, 200, 204, 206, 211, 213, 216, 219, 222, 223, 229, 230, 235, 243, 255, 257, 259, 266, 269, 270, 272, 284, 288, 291, 299, 306, 307, 308, 320};
    vector<int> m = {135, 203, 194, 227, 45, 176, 234, 112, 51, 95, 39, 284, 43, 72, 19, 97, 45, 117, 144, 49, 203, 192, 1, 59, 301, 80, 304, 26, 188, 44, 119, 199, 116, 23, 6, 180, 69, 11, 31, 144, 247, 133, 37, 222, 62, 45, 247, 121, 44, 12};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {23.4543267046865, 54.51912697071019, 70.80631771896441, 83.17053273803353, 88.8495666134873, 91.46440814980159, 95.11251583299969, 98.21745726223804, 102.22181772610747, 112.57024849165225, 122.27011844287185, 125.90857460689412, 133.616464236085, 146.61133634137605, 155.50086087743603, 172.51893901734644, 177.72524467781108, 182.8309972511948, 187.6409339765802, 190.65566350561295, 194.53180877988558, 199.74829938443128, 200.6920181548511, 204.60970530915029, 208.9099858323882, 211.68419535657756, 215.27738578109546, 216.97057938452753, 220.85186133768877, 222.3843083804216, 225.77963608281033, 229.56829480100748, 233.8933508208956, 241.44853583589463, 245.56519262675891, 256.2280498279189, 258.4890627395198, 261.6671610018217, 266.75268331291636, 269.4303091636423, 271.19383268687534, 279.964612345997, 285.1638263794281, 289.96870343787407, 295.78672235939587, 301.01027179984624, 306.5849484163816, 307.656505315784, 318.2735768933868};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> x = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 29, 30, 32, 33, 34, 36, 37, 39, 40, 41, 44, 46, 48, 53, 54, 58, 66, 77, 84, 86, 91, 96, 107, 119, 120};
    vector<int> m = {622, 616, 612, 609, 608, 581, 581, 575, 557, 552, 546, 543, 526, 518, 517, 514, 514, 513, 512, 502, 501, 487, 475, 464, 456, 440, 437, 391, 379, 378, 378, 377, 361, 348, 328, 324, 323, 312, 298, 289, 259, 258, 253, 231, 231, 112, 73, 68, 50, 44};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.474994808379848, 2.4885358947893064, 3.4934374322105697, 4.496188862667342, 5.503052426279611, 6.499137752856665, 7.50129845358469, 8.504880160651691, 9.50340993742288, 10.505152785395058, 11.508200902897858, 12.522505096255742, 14.515620525878685, 16.482765115140786, 17.494511062432153, 18.497427127494703, 19.499459555385492, 20.500878795934142, 21.504050105403948, 22.503283357800548, 23.507623053905682, 24.509068696662546, 25.511817343883322, 26.520474848199683, 28.05812916885997, 29.505877030677404, 31.047893263586346, 32.499150791408624, 33.513924912398664, 35.03743353501359, 36.50452268488084, 38.03537792150597, 39.502558735582994, 40.52656364227383, 42.71100616139951, 45.02882234732958, 47.06167804665668, 50.742217560606335, 53.50661611549148, 56.385835956869045, 63.00570164394446, 72.62680892407136, 80.53928456497226, 85.0071056191386, 89.23112954355096, 94.16551776646278, 103.76875365668485, 114.89819478977532, 119.51826975725291};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> x = {1, 2, 6, 8, 14, 19, 23, 24, 28, 29, 32, 33, 34, 36, 37, 43, 46, 47, 48, 49, 50, 51, 52, 54, 55, 56, 57, 58, 62, 63, 69, 70, 71, 75, 80, 86, 87, 89, 95, 98, 100, 103, 117, 118, 120, 132, 143, 145, 167, 174};
    vector<int> m = {6, 22, 53, 67, 85, 90, 93, 104, 104, 106, 108, 112, 114, 135, 141, 208, 209, 211, 212, 217, 234, 240, 244, 246, 250, 257, 259, 287, 295, 319, 328, 328, 329, 336, 344, 344, 346, 346, 358, 381, 385, 396, 403, 407, 411, 424, 429, 433, 443, 455};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.3256300403765788, 3.262632562572808, 6.916952335445453, 10.46669401043103, 16.078275768625794, 20.614142167668376, 23.481555375441218, 25.784456679621137, 28.491303939486365, 30.353513154064686, 32.47776807837673, 33.50104926698563, 34.95350833748792, 36.4980793271837, 39.49084067585707, 44.21953814630818, 46.47480246596196, 47.487622884265065, 48.48931865886105, 49.486304965806525, 50.496305214722625, 51.50807389545331, 52.990241130290215, 54.48541348981239, 55.49482467773994, 56.50320322076011, 57.506236533847584, 60.12254821127948, 62.492567748025266, 65.92994299584163, 69.48682449313847, 70.51263685379323, 73.2581194459444, 77.59771791683792, 82.66618486801681, 86.49476038515641, 88.05581597199418, 92.12240128030592, 96.42315035143284, 99.00133105210946, 101.5792535720351, 110.03384248737393, 117.4940548742257, 119.05701836612832, 127.09131081499888, 137.27798572756308, 144.00083796982983, 157.96779873119368, 170.5464033625533};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> x = {1, 2, 3};
    vector<int> m = {1, 2, 1};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.4060952084922507, 2.5939047915077493};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> x = {1, 2};
    vector<int> m = {1, 1000};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.0306534300317156};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> x = {2, 3, 5, 7};
    vector<int> m = {3, 2, 7, 5};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {2.532859446114924, 3.7271944335152813, 6.099953640852538};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> x = {2, 3, 5, 7, 8, 9, 12, 14, 15};
    vector<int> m = {3, 2, 7, 5, 4, 6, 2, 8, 6};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {2.527871172800685, 3.6968282264955796, 6.019025152407124, 7.515221412458223, 8.465163817660809, 10.882522868567975, 12.659798369460393, 14.539455755762148};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> x = {1, 1000};
    vector<int> m = {1, 1000};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {31.62277660168379};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> x = {3, 4, 7, 8, 9, 13, 15, 19, 23, 27, 36, 45, 76, 90, 100, 111, 112, 126, 156, 222, 223, 227, 231, 239, 256, 344, 345, 367, 399, 400, 420, 422, 432, 434, 447, 456, 476, 534, 665, 666, 678, 777, 781, 822, 833, 876, 888, 890, 899, 996};
    vector<int> m = {345, 663, 232, 145, 667, 893, 265, 445, 348, 861, 1, 2, 3, 4, 5, 6, 7, 89, 999, 1, 2, 3, 4, 5, 444, 343, 237, 887, 765, 432, 210, 987, 568, 456, 777, 239, 621, 290, 489, 521, 333, 211, 343, 100, 331, 578, 676, 498, 235, 1000};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {3.415211557642487, 5.74324758230169, 7.512625658565524, 8.327602462809491, 10.91385929660651, 14.299195090159657, 17.05833831434932, 21.147954531229608, 24.654807520615257, 35.7731777502126, 44.454811049881044, 74.36160847478243, 87.30265926202966, 96.10302384265296, 104.25051128418053, 111.47851449795712, 115.28248963106694, 133.27059353211615, 211.18242016106012, 222.4043656012617, 224.56473637023288, 228.59744602606236, 233.15342191387447, 240.64477246495545, 286.7782264220324, 344.5458059417142, 354.01131497063864, 381.04257308841864, 399.5707995041714, 409.8756673831755, 420.6291167420559, 427.3873194659369, 433.05769792825083, 440.76739133249976, 452.92614846365007, 466.0992120138735, 516.6988199567745, 596.9107883120676, 665.4919478090442, 673.4647944100975, 733.7215183886844, 778.7569418816172, 804.2800684165175, 825.85658222025, 848.8609144409018, 881.1861652517055, 889.0767391584682, 895.9934772686679, 953.4717362177228};
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> x = {1, 3, 7, 975};
    vector<int> m = {998, 1000, 786, 3};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.9916588723532818, 5.242165799113998, 944.1200599645947};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> x = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 910, 920, 930, 940, 950, 960, 970, 980, 990, 1000};
    vector<int> m = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 910, 920, 930, 940, 950, 960, 970, 980, 990, 1000};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.340252912253466, 2.3971974026602005, 3.424054414125326, 4.439866287400934, 5.450366701871673, 6.457903590380406, 7.463622938278753, 8.468154462222078, 9.471876587678267, 10.475034765579661, 11.477800865977382, 12.48030689728932, 13.482668023455254, 14.485004121218779, 15.48747056307958, 16.490322186289696, 17.49409107365375, 18.500259436972428, 19.51549906007812, 34.05614186470238, 81.47073793660763, 82.48430203709708, 83.48911861379227, 84.49162092818634, 85.493195004738, 86.49431472945886, 87.49518743922874, 88.49592049869207, 89.49657805163048, 90.49720461768473, 91.49783706027739, 92.49851264868147, 93.4992772050424, 94.50019736689433, 95.50138484217996, 96.5030546085683, 97.50569500110626, 98.51072354570451, 99.5246637508011, 358.92127289088944, 914.7299627478872, 924.8691288788746, 934.921875578327, 944.953124127363, 954.9777887096709, 965.0026942521599, 975.0347283972478, 985.0890564122587, 995.2314175786203};
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> x = {2, 4, 7, 9, 11, 14, 16, 19};
    vector<int> m = {2, 5, 3, 7, 1, 4, 5, 2};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {2.745134127053431, 5.565320648678545, 7.797030104162099, 10.445076973504793, 12.18711646880142, 14.957608241470169, 17.934503104239944};
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> x = {1, 999, 1000};
    vector<int> m = {2, 1, 1};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {500.2496244371572, 999.5000000626878};
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> x = {1, 2, 3, 4, 5};
    vector<int> m = {1, 2, 3, 4, 5};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.3731265398437027, 2.426437263547556, 3.455342104795287, 4.484447988696251};
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> x = {1, 2, 3, 4};
    vector<int> m = {3, 1, 1, 2};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.6200156424326502, 2.5126994330733687, 3.435233979230275};
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> x = {1, 2, 3, 4, 5, 6, 7, 9, 11, 13, 15};
    vector<int> m = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.3583666106744015, 2.4121190163281714, 3.437884185532102, 4.45430163760124, 5.467885065328536, 6.486485456598933, 7.996268175044664, 9.972509042472243, 11.98341513226627, 14.016364959607444};
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> x = {2, 3, 5, 7, 11, 12, 15, 18};
    vector<int> m = {3, 2, 7, 5, 8, 8, 9, 6};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {2.5293094464907098, 3.7078282046179636, 6.070604016179308, 8.659128712313684, 11.498428986374105, 13.570115311522454, 16.731715222306434};
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> x = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 500};
    vector<int> m = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 11, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 10};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.4704024896868022, 2.48373936091987, 3.4881149395616866, 4.489973179990097, 5.4906432276991595, 6.490479287052237, 7.489461853689864, 8.487247635395814, 9.48291396061435, 10.474020426358418, 11.45306752677794, 12.393205020720114, 13.233654826352836, 14.76589975313043, 15.60484699519115, 16.544275460102618, 17.52302719738011, 18.513870213442893, 19.50920970220087, 20.506554472233134, 21.5049197910324, 22.50385718282478, 23.503139680118196, 24.50264282623128, 25.502293993839707, 26.502048682715184, 27.501878574467355, 28.501765137138932, 29.50169602965869, 30.50166300179712, 31.501660635385655, 32.50168558401535, 33.50173612676541, 34.501811937505295, 35.50191402276427, 36.50204481771175, 37.502208464091225, 38.502411338163455, 39.50266296911765, 40.50297762534001, 41.503377130844584, 42.503896118986034, 43.504592530448605, 44.505570602426374, 45.507037840444426, 46.50947324828516, 47.51427876279416, 48.52794035408455, 361.173058909842};
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> x = {2, 3, 5, 7, 113, 115, 231, 313, 435, 526, 527, 528, 529, 531, 555, 601, 602, 603, 604, 607, 608, 614, 991, 992, 993, 994, 995, 996, 997, 998, 999, 1000};
    vector<int> m = {1, 2, 3, 4, 100, 234, 402, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {2.3992220890610154, 3.876378665852636, 5.941938074997465, 15.00494765155447, 113.79039770682269, 154.2614580108716, 258.9419775045383, 358.62310259447565, 460.63113297466043, 526.4800168259981, 527.4974720362236, 528.5134377318013, 530.0954754380991, 546.4081166104193, 571.5995300363631, 601.4797098978834, 602.4973311784331, 603.5141822563862, 605.5779912629994, 607.5051465962429, 611.6109060031893, 804.0865904192476, 991.4750082322325, 992.4890703151625, 993.4944043661317, 994.4975466281387, 995.5000023993414, 996.5024581713863, 997.5056004365183, 998.5109344960958, 999.5249966129484};
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> x = {1, 2, 11};
    vector<int> m = {1000, 1, 1};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.969346398788896, 10.69365024458763};
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> x = {1, 3, 5, 7, 9, 11, 13, 14, 15, 16, 167, 311, 998, 999, 1000};
    vector<int> m = {1, 3, 5, 7, 9, 11, 13, 14, 15, 16, 167, 311, 998, 999, 1000};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.5934945552356714, 3.7778273723953886, 5.846454896503273, 7.881804513898642, 9.898413779510282, 11.87573304583064, 13.475817788056492, 14.491813074416307, 15.510275105651576, 71.25844549960036, 226.74189944085288, 490.91454294369805, 998.4862374569861, 999.5134772503604};
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> x = {1, 998, 999, 1000};
    vector<int> m = {1, 1000, 1000, 1000};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {18.894183519600297, 998.4863801704669, 999.5136198295945};
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> x = {1, 1000};
    vector<int> m = {1, 4};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {334.0};
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> x = {1, 2, 3, 4, 5, 6, 7, 8, 9, 998};
    vector<int> m = {1, 1, 3, 67, 3, 2, 7, 4, 23, 6};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.2777397995915805, 2.1962086095807773, 3.173528314594445, 4.822714402251314, 5.702962188721502, 6.411161773956838, 7.546125643705, 8.314358000874417, 810.7522397502303};
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> x = {1, 2, 1000};
    vector<int> m = {1, 2, 1000};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.4141926885563967, 53.514202939055565};
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> x = {1, 1000};
    vector<int> m = {1000, 1000};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {500.5};
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> x = {1, 2, 3, 5, 7, 11, 1000};
    vector<int> m = {999, 4, 8, 9, 11, 2, 3};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.9402758768616968, 2.8365160377810597, 4.656240942461887, 6.464882617382148, 10.594830988919618, 948.9235996449586};
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> x = {1, 2, 10};
    vector<int> m = {1000, 1, 1};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.9693463535026399, 9.724289544365863};
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> x = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 511, 512, 513, 514, 515, 516, 517, 518, 519, 520, 521, 522, 523, 524, 525, 526, 527, 528, 529, 530, 931, 932, 933, 934, 935, 936, 937, 938, 939, 940, 941, 942, 943, 944, 945, 946, 947, 948, 949, 950};
    vector<int> m = {1000, 1, 1000, 1, 1000, 1, 1000, 1, 1000, 1, 1000, 1, 1000, 1, 1000, 1, 1000, 1, 1000, 1, 1000, 1, 1000, 1, 1000, 1, 1000, 1, 1000, 1, 1000, 1, 1000, 1, 1000, 1, 1000, 1, 1000, 1, 1000, 1, 1000, 1, 1000, 1, 1000, 1, 1000, 1};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.9204143008634467, 2.0511280760638257, 3.934658860232502, 4.058981584722913, 5.941005020502974, 6.065324514718075, 7.948853517229944, 8.079538848857176, 9.971672255040087, 207.95072716767123, 511.91613004100554, 512.0493840908857, 513.9299459054735, 514.055494784249, 515.934209442808, 516.0583830776407, 517.936489587225, 518.060263404152, 519.9381574364234, 520.0618350480245, 521.9397292776971, 522.0635022693184, 523.9416093664233, 524.0657809043835, 525.9444964016304, 526.0700398091467, 527.95060063755, 528.0838240946168, 529.9719453090497, 732.1800065924901, 931.9161431029606, 932.0493889072297, 933.9299558031432, 934.05550105967, 935.9342182921721, 936.0583900729737, 937.9364978732494, 938.0602708768365, 939.9381653121484, 940.0618429244325, 941.9397367679846, 942.0635105761958, 943.9416163954934, 944.0657897973986, 945.9445027231791, 946.0700497790326, 947.9506055030606, 948.0838372784278, 949.971946398709};
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> x = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 991, 992, 993, 994, 995, 996, 997, 998, 999, 1000};
    vector<int> m = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.474701569493897, 2.4887651281966203, 3.494099086916724, 4.497240923844597, 5.4996961352487475, 6.502151248331293, 7.505292714581156, 8.510625624994582, 9.524684947089401, 36.239186747553006, 991.4750057641832, 992.489067875842, 993.4944019425061, 994.4975442173888, 995.5000000003038, 996.5024557832189, 997.5055980581021, 998.5109321247671, 999.5249942364303};
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> x = {1, 2, 4, 9, 211, 855, 857, 900, 901, 903, 907, 908};
    vector<int> m = {1, 1, 800, 400, 500, 400, 200, 2, 78, 123, 789, 145};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.0986815308285776, 2.0671759179812517, 6.929292232628967, 129.55269967453432, 494.05389370839487, 856.1711960839289, 876.9108719359958, 900.1218499623735, 901.8096585329829, 904.1267513355881, 907.7004332899719};
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> x = {2, 4, 5};
    vector<int> m = {1, 1, 1};
    EquilibriumPoints* pObj = new EquilibriumPoints();
    clock_t start = clock();
    vector<double> result = pObj->getPoints(x, m);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {2.9414112622855715, 4.504979155031018};
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7446789&rd=13512&pm=10104
********************************************************************************
#include<ctime> 
#include<cstdlib> 
#include<iostream> 
#include<algorithm> 
#include<sstream> 
#include<string> 
#include<vector> 
#include<cmath> 
using namespace std; 
 
#define FOR(i,a,b) for(int i = (a); i < (b); ++i) 
#define REP(i,n) FOR(i,0,n) 
#define FORE(it,x) for(typeof(x.begin()) it=x.begin();it!=x.end();++it) 
#define pb push_back 
#define all(x) (x).begin(),(x).end() 
#define CLEAR(x,with) memset(x,with,sizeof(x)) 
#define sz size() 
typedef long long ll; 
 
struct EquilibriumPoints  
{ 
  double f(double m1, double d) 
  { 
    return m1 / d / d; 
  } 
  vector <double> getPoints(vector <int> x, vector <int> m)  
  { 
    int n = x.sz; 
    vector<double> ret; 
    REP(i,x.sz-1) 
    { 
      double lo = x[i], hi = x[i+1]; 
      REP(iter,500) 
      { 
        double mid = (lo+hi) / 2; 
        double force = 0; 
        REP(j,i+1) force -= f(m[j], mid - x[j]); 
        FOR(j,i+1,n) force += f(m[j], x[j] - mid); 
        if(force < 0) 
          lo = mid; 
        else 
          hi = mid; 
      } 
      ret.pb((lo+hi) / 2); 
    } 
    return ret; 
  } 
}; 
 
 
 
// Powered by FileEdit
// Powered by moj 4.11 [modified TZTester]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/