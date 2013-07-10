/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10027
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

class FeudaliasWar {
public:
    double getMinimumTime(vector<int> baseX, vector<int> baseY, vector<int> siloX, vector<int> siloY, int takeOffTime, int rechargeTime, int missileSpeed);
};

double FeudaliasWar::getMinimumTime(vector<int> baseX, vector<int> baseY, vector<int> siloX, vector<int> siloY, int takeOffTime, int rechargeTime, int missileSpeed) {
    double ret;
    return ret;
}


int test0() {
    vector<int> baseX = {1, 20002, 40003, 60004, 80005, 100006, 120007, 140008, 160009, 180010, 200011, 220012, 240013, 260014, 280015, 300016, 320017, 340018, 360019, 380020, 400021, 420022, 440023, 460024, 480025, 500026, 520027, 540028, 560029, 580030, 600031, 620032, 640033, 660034, 680035, 700036, 720037, 740038, 760039, 780040, 800041, 820042, 840043, 860044, 880045, 900046, 920047, 940048, 960049, 980050};
    vector<int> baseY = {1, 20002, 40003, 60004, 80005, 100006, 120007, 140008, 160009, 180010, 200011, 220012, 240013, 260014, 280015, 300016, 320017, 340018, 360019, 380020, 400021, 420022, 440023, 460024, 480025, 500026, 520027, 540028, 560029, 580030, 600031, 620032, 640033, 660034, 680035, 700036, 720037, 740038, 760039, 780040, 800041, 820042, 840043, 860044, 880045, 900046, 920047, 940048, 960049, 980050};
    vector<int> siloX = {1, 20002, 40003, 60004, 80005, 100006, 120007, 140008, 160009, 180010, 200011, 220012, 240013, 260014, 280015, 300016, 320017, 340018, 360019, 380020, 400021, 420022, 440023, 460024, 480025, 500026, 520027, 540028, 560029, 580030, 600031, 620032, 640033, 660034, 680035, 700036, 720037, 740038, 760039, 780040, 800041, 820042, 840043, 860044, 880045, 900046, 920047, 940048, 960049, 980050};
    vector<int> siloY = {980050, 960049, 940048, 920047, 900046, 880045, 860044, 840043, 820042, 800041, 780040, 760039, 740038, 720037, 700036, 680035, 660034, 640033, 620032, 600031, 580030, 560029, 540028, 520027, 500026, 480025, 460024, 440023, 420022, 400021, 380020, 360019, 340018, 320017, 300016, 280015, 260014, 240013, 220012, 200011, 180010, 160009, 140008, 120007, 100006, 80005, 60004, 40003, 20002, 1};
    int takeOffTime = 60;
    int rechargeTime = 1000;
    int missileSpeed = 1;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 693144.5934934405;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> baseX = {0, 0, 50};
    vector<int> baseY = {0, 50, 0};
    vector<int> siloX = {50, 0, 1000};
    vector<int> siloY = {50, 1000, 0};
    int takeOffTime = 30;
    int rechargeTime = 20;
    int missileSpeed = 1;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 91.5;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> baseX = {0, 0, 50};
    vector<int> baseY = {0, 50, 0};
    vector<int> siloX = {50, 0, 1000};
    vector<int> siloY = {50, 1000, 0};
    int takeOffTime = 30;
    int rechargeTime = 900;
    int missileSpeed = 1;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 950.5;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> baseX = {1000};
    vector<int> baseY = {1000};
    vector<int> siloX = {0, 10, 20, 30, 40, 50};
    vector<int> siloY = {0, 10, 20, 30, 40, 50};
    int takeOffTime = 45;
    int rechargeTime = 30;
    int missileSpeed = 100;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 14.185028842544403;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> baseX = {0, 2000, 4000, 6000, 8000};
    vector<int> baseY = {0, 2000, 4000, 6000, 8000};
    vector<int> siloX = {0, 2000, 4000, 6000};
    vector<int> siloY = {2000, 4000, 6000, 8000};
    int takeOffTime = 60;
    int rechargeTime = 1000;
    int missileSpeed = 50;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 1042.0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> baseX = {1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900};
    vector<int> baseY = {2100, 2300, 2500, 2700, 2900, 2700, 2500, 2300, 2100};
    vector<int> siloX = {1400, 1400, 1500, 1600, 1600};
    vector<int> siloY = {3100, 3300, 3200, 3100, 3300};
    int takeOffTime = 20;
    int rechargeTime = 300;
    int missileSpeed = 100;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 306.7494291969649;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> baseX = {26, 71, 2, 9, 70, 48, 3, 12, 27, 53, 79, 17, 15, 8, 55, 74, 38, 88, 29, 23, 89, 85, 33, 41, 56, 41, 20, 11, 36, 30, 56, 45};
    vector<int> baseY = {69, 31, 57, 63, 20, 59, 98, 22, 62, 24, 62, 71, 42, 25, 45, 19, 67, 34, 51, 9, 92, 35, 100, 55, 52, 53, 90, 93, 52, 75, 97, 82};
    vector<int> siloX = {5513, 12033, 6447, 10754, 12892, 14456, 7955, 7999, 8842, 5402, 11830, 11343, 8078, 12126, 10612, 12169, 11839, 9684, 10431, 8323, 12433, 5036, 14552, 5917, 14376, 10167, 14679, 9990, 12555, 10935, 8347, 10364, 9662, 10610, 5438, 7204, 7361, 8500, 6782, 8824, 7052, 5678, 11435, 7698, 7592};
    vector<int> siloY = {12280, 8379, 8612, 10157, 14200, 6097, 9278, 8428, 10777, 7748, 14616, 5822, 11390, 12775, 5489, 9629, 12885, 14092, 5559, 12989, 6891, 9068, 7884, 11380, 11703, 8014, 10776, 6990, 7378, 7326, 8121, 14503, 9752, 14070, 11469, 12060, 8833, 10125, 10892, 7748, 14621, 13937, 6023, 8201, 8313};
    int takeOffTime = 54;
    int rechargeTime = 713;
    int missileSpeed = 578;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 27.372926881787844;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> baseX = {100, 31, 23, 20, 87, 68, 11, 16, 15, 31, 89, 28, 92, 81, 24, 2, 15, 31, 20, 73, 35, 22, 62, 14, 92, 52, 85, 37, 43, 85, 39};
    vector<int> baseY = {4, 13, 4, 66, 19, 61, 56, 66, 28, 3, 28, 18, 2, 38, 100, 38, 54, 2, 67, 36, 94, 84, 57, 26, 83, 51, 21, 1, 96, 90, 7};
    vector<int> siloX = {5307, 8459, 9381, 9417, 6065, 11364, 11287, 11298, 11884, 8649, 12071, 6605, 8376, 6995, 8279, 7360, 13060, 7017, 6061, 13266, 14554, 13837, 14969, 14262, 7744, 10679, 13940, 14322, 14442, 7347, 11249, 12626};
    vector<int> siloY = {12651, 10155, 5798, 5939, 10706, 11059, 11298, 11150, 7431, 9277, 7915, 7334, 10627, 13559, 11374, 10989, 7922, 9883, 7796, 7137, 11625, 14251, 14298, 5042, 7697, 5288, 6636, 13037, 14676, 10207, 7936, 8178};
    int takeOffTime = 6;
    int rechargeTime = 836;
    int missileSpeed = 605;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 33.92881347307105;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> baseX = {28, 65, 10, 68, 18, 13, 52, 25, 76, 21, 3, 9, 87, 15, 12, 69, 73, 29, 66, 56, 26, 4, 94, 83, 61, 68, 56, 71, 18, 66, 39, 51};
    vector<int> baseY = {15, 24, 13, 39, 68, 15, 67, 1, 2, 52, 68, 16, 45, 95, 85, 78, 40, 96, 40, 86, 78, 25, 63, 87, 33, 47, 58, 41, 47, 24, 50, 1};
    vector<int> siloX = {7591, 9593, 13777, 9762, 12466, 6701, 6889, 5495, 11304, 8568, 11220, 8808, 7468, 8178, 12672, 8363, 14888, 7673, 5990, 13074, 14386, 8197, 10835, 13075, 14566, 10414, 10140, 12221, 10389, 9216, 12940, 7181, 5784, 6557, 14751, 7188, 10837};
    vector<int> siloY = {5799, 11469, 11784, 6658, 9779, 7592, 13972, 10746, 6866, 12521, 5423, 6736, 10615, 9219, 9400, 7616, 6277, 8983, 6721, 11020, 10059, 10011, 5614, 11409, 11480, 9180, 8035, 12672, 14336, 12072, 6078, 10980, 9440, 12969, 7252, 7614, 12703};
    int takeOffTime = 33;
    int rechargeTime = 826;
    int missileSpeed = 1221;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 14.663923308339577;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> baseX = {2, 89, 48, 83, 38, 8, 34, 68, 46, 13, 69, 34, 100, 42, 6, 84, 43, 78, 8, 14, 82, 46, 71, 65, 30, 31, 33, 93, 44, 89, 41, 80, 41, 12, 81, 20, 86, 100, 24, 23};
    vector<int> baseY = {27, 54, 54, 11, 17, 6, 64, 79, 30, 62, 8, 7, 40, 28, 40, 47, 47, 25, 2, 49, 55, 83, 43, 41, 20, 96, 36, 97, 94, 35, 89, 5, 85, 83, 50, 25, 81, 83, 50, 4};
    vector<int> siloX = {5443, 13812, 9865, 11535, 6855, 9640, 12731, 8862, 11024, 7719, 10843, 5412, 14418, 13007, 7905, 13514, 11869, 8495, 13285, 9952, 10818, 14324, 8329, 11791, 7136, 6704, 5406, 11108, 14324, 13331, 10924, 7057, 13842, 13819, 12204, 14701, 14407, 12223};
    vector<int> siloY = {10211, 11831, 7373, 7623, 6604, 6946, 8290, 13900, 12955, 10706, 6208, 6208, 12002, 8168, 11309, 7761, 9202, 14679, 5552, 9169, 5321, 6816, 11743, 11453, 12384, 13736, 11136, 13382, 6610, 10470, 8520, 10623, 9701, 12868, 5026, 8257, 8278, 5460};
    int takeOffTime = 47;
    int rechargeTime = 464;
    int missileSpeed = 1206;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 473.3480367455122;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> baseX = {41, 38, 7, 72, 60, 40, 97, 69, 97, 38, 56, 97, 53, 30, 19, 52, 52, 11, 74, 10, 17, 58, 24, 40, 11, 59, 46, 60, 23, 28, 17, 94, 56, 61, 74, 70, 82, 35, 16, 26, 95, 91};
    vector<int> baseY = {75, 76, 40, 9, 77, 20, 69, 33, 47, 1, 5, 64, 5, 25, 23, 66, 56, 27, 56, 10, 62, 52, 100, 37, 14, 87, 11, 56, 39, 93, 59, 26, 21, 89, 72, 81, 38, 3, 41, 46, 10, 22};
    vector<int> siloX = {13694, 14639, 10669, 8231, 14077, 13825, 8219, 7291, 14231, 12756, 12232, 8181, 8279, 7730, 6011, 14268, 12353, 9198, 9564, 6064, 8843, 11179, 10440, 8845, 7077, 12930, 13562, 13664, 8422, 7154, 14454, 13864, 7945, 7469, 8424, 8254, 7934, 12613, 10847, 9142, 11655};
    vector<int> siloY = {14417, 7417, 13619, 12980, 14197, 12533, 8819, 14723, 6662, 10849, 5866, 13568, 11789, 5363, 13029, 7881, 11633, 12018, 7687, 12019, 5584, 12791, 7270, 14472, 12511, 10537, 12858, 9675, 14308, 7231, 10237, 7645, 13683, 6313, 6847, 12534, 7300, 6438, 12737, 9468, 13434};
    int takeOffTime = 5;
    int rechargeTime = 532;
    int missileSpeed = 175;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 585.2477751859191;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> baseX = {6615, 477, 8962, 1104, 3960, 3684, 4224, 7457, 3273, 1585, 5479, 278, 3186, 4644, 8699, 1183, 1139, 2740, 2219, 5645, 8547, 7130, 388, 8795, 2289, 461, 480, 2007, 4419, 3841, 40, 232, 9920, 1410, 1637, 1457, 7825, 3754, 4131, 3747, 1648, 385, 9385, 7602, 5893, 7996, 1446, 6546};
    vector<int> baseY = {2292, 546, 4099, 8514, 1088, 5972, 8708, 1017, 241, 9162, 5621, 5673, 6849, 7828, 6944, 5795, 4308, 2883, 9866, 1208, 6893, 2372, 1615, 8870, 4090, 5485, 7147, 4439, 8224, 8358, 7969, 4587, 3098, 7975, 238, 204, 3537, 242, 6589, 9233, 1883, 7187, 3217, 4667, 947, 723, 5150, 9786};
    vector<int> siloX = {7873, 7869, 3352, 7078, 9537, 2191, 6691, 6719, 7304, 1692, 1371, 4379, 8827, 470, 736, 3580, 4996, 4244, 1375, 3454, 7123, 3365, 1534, 352, 6322, 9952, 4708, 2927, 7047, 1316, 6642, 2169, 1870, 4856, 6443, 6845, 8281, 1859, 9315, 3428, 5325, 1037, 2278, 5893};
    vector<int> siloY = {4115, 161, 3209, 9395, 7329, 7779, 4583, 1830, 1372, 4848, 6624, 7184, 1817, 3936, 9706, 6219, 6946, 8391, 3546, 9189, 10, 7090, 8808, 8171, 507, 6318, 6910, 4833, 9451, 1038, 6166, 4938, 5078, 380, 8798, 5253, 3356, 3710, 6118, 8495, 5475, 1893, 2088, 1259};
    int takeOffTime = 13;
    int rechargeTime = 690;
    int missileSpeed = 340;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 691.2215741147014;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> baseX = {4687, 8780, 964, 1709, 4317, 32, 4080, 7786, 2989, 9167, 9072, 4412, 9182, 4063, 2592, 4221, 2014, 725, 2762, 1881, 9367, 5535, 1825, 6229, 9662, 7870, 8647, 5180, 475, 666, 134, 2180, 53, 2405, 5235, 6982, 1114, 1413, 5556, 4754, 5695, 7251, 3629, 3266, 4476, 6597, 7192, 82, 6465, 5306};
    vector<int> baseY = {7525, 2127, 2373, 9111, 1457, 8614, 3590, 7838, 7866, 1877, 7962, 3886, 8943, 2714, 2110, 6829, 8299, 4154, 6740, 751, 4146, 1481, 3355, 9765, 9155, 5012, 282, 2103, 867, 6183, 9195, 5109, 6037, 1145, 3913, 456, 3004, 7652, 9382, 9542, 5688, 5469, 1292, 462, 5518, 9035, 479, 3884, 9116, 5713};
    vector<int> siloX = {8553, 1160, 8362, 1270, 8939, 4302, 8747, 3988, 9758, 9521, 7247, 1411, 3025, 2416, 367, 4678, 8894, 4528, 9169, 4397, 1999, 788, 6569, 3448, 8992, 8598, 9373, 8546, 2152, 6896, 3941};
    vector<int> siloY = {2473, 9303, 1656, 5168, 7600, 5563, 5739, 1700, 5552, 9541, 2046, 6212, 6756, 1427, 2017, 9476, 9913, 3692, 9904, 6982, 8933, 7785, 5235, 4759, 149, 9288, 360, 7285, 450, 4888, 7819};
    int takeOffTime = 55;
    int rechargeTime = 314;
    int missileSpeed = 1654;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 316.2840976718336;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> baseX = {4535, 3680, 6503, 9491, 8051, 4783, 6519, 7768, 4525, 4513, 1137, 6540, 8834, 6352, 6909, 9093, 2720, 3750, 15, 5142, 821, 8913, 7732, 3592, 9273, 2347, 3271, 9166, 5610, 9572, 2908, 1461, 9492, 9870, 9664};
    vector<int> baseY = {49, 8099, 7446, 2627, 5774, 7761, 3734, 9447, 4250, 2921, 2805, 4818, 5270, 8900, 3848, 9275, 8163, 8074, 6098, 8016, 8860, 8004, 4605, 1596, 8244, 9862, 3542, 7440, 5587, 8444, 523, 6719, 5891, 8420, 5170};
    vector<int> siloX = {1636, 7706, 5430, 5189, 9742, 7537, 6457, 3044, 2922, 9686, 4278, 1318, 2761, 8659, 2865, 4550, 9274, 2968, 9993, 5325, 3401, 9905, 1769, 6811, 1900, 1144, 1929, 6139, 1192, 1886, 2841, 8561, 6392, 4923, 7921, 4607, 6483, 9251, 3869, 1061, 6910, 7455};
    vector<int> siloY = {4059, 8877, 6554, 8128, 7095, 4468, 3408, 7019, 9608, 1934, 574, 1222, 228, 1209, 6117, 4446, 1769, 5470, 1443, 193, 2180, 7680, 8258, 659, 8676, 7211, 3700, 2597, 2765, 3630, 3878, 9002, 5886, 8396, 7826, 4973, 2352, 8223, 1376, 3332, 3563, 5705};
    int takeOffTime = 42;
    int rechargeTime = 968;
    int missileSpeed = 469;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 7.005272866336425;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> baseX = {1020, 5565, 4206, 6958, 4899, 2978, 5467, 987, 661, 7556, 7676, 7576, 3902, 7258, 4961, 2950, 8678, 7630, 306, 5438, 566, 427, 7956, 976, 7504, 6124, 7658, 9289, 2108, 5170, 1452, 8361, 985, 2837, 7316, 765, 8192, 5417, 4525, 6944, 4655, 4488, 4715, 933, 9757, 6510, 1193, 196, 1925, 5059};
    vector<int> baseY = {344, 5105, 8813, 6442, 1063, 2419, 5376, 3818, 1132, 1781, 1371, 6280, 5572, 2904, 3514, 8077, 3408, 3211, 576, 5254, 3708, 6217, 334, 3604, 9183, 3949, 8808, 701, 5822, 4804, 7702, 9559, 1240, 3305, 6634, 8493, 6552, 8925, 2461, 4072, 3086, 7542, 2241, 2702, 1767, 8566, 7569, 8879, 675, 3592};
    vector<int> siloX = {2484, 8587, 6451, 7208, 4284, 11, 2840, 8309, 6562, 1620, 245, 1828, 6817, 3776, 6322, 7714, 3747, 7890, 3920, 6599, 7835, 9874, 6029, 9054, 7587, 5550, 3634, 5237, 1074, 2003, 7146, 6910, 5299, 3075, 744, 4861};
    vector<int> siloY = {3108, 8205, 6214, 7125, 1283, 7929, 6777, 3003, 8869, 9044, 2465, 2665, 2469, 7166, 9565, 1060, 5527, 3024, 4234, 9275, 4615, 164, 4048, 1108, 3645, 1457, 4463, 2434, 959, 6606, 3440, 3686, 3747, 9394, 1311, 4713};
    int takeOffTime = 3;
    int rechargeTime = 327;
    int missileSpeed = 1396;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 327.49224676122975;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> baseX = {4844, 6619, 5505, 1730, 7829, 3737, 3406, 8532, 1203, 4604, 6131, 3983, 8644, 9914, 3973, 5664, 7988, 3560, 9694, 9990, 8690, 788, 8590, 7088, 4967, 8395, 2589, 3105, 2841, 7944, 9416, 9249, 405, 4299, 9922, 7778, 8129, 417, 3426, 3634, 6803, 6397, 4256, 5363, 3717, 2258, 5519, 1588};
    vector<int> baseY = {2475, 9887, 5026, 928, 6206, 225, 9032, 7582, 2449, 3659, 6988, 639, 1323, 1790, 9092, 6474, 7710, 2420, 2772, 6663, 3823, 9104, 1122, 2426, 4855, 1886, 5813, 8865, 4282, 8076, 4280, 9966, 4191, 2477, 4618, 2543, 7678, 6177, 8713, 1180, 5166, 3248, 1589, 4007, 9570, 3595, 5223, 5981};
    vector<int> siloX = {560, 1864, 5412, 7495, 5484, 709, 6694, 6601, 9926, 4761, 6748, 9576, 7569, 5821, 1924, 2761, 4636, 8974, 8193, 8328, 594, 6301, 3108, 5235, 8593, 5266, 4084, 7807, 1455, 3778, 7847, 1847, 8142, 9293, 6883, 537, 9613, 7083, 4060, 4035, 3425, 8546, 2369};
    vector<int> siloY = {4339, 6673, 3868, 254, 6116, 9525, 4250, 7556, 8878, 7866, 1499, 1606, 5562, 5483, 2708, 815, 4463, 151, 9174, 6280, 5872, 9193, 7319, 3859, 7058, 2614, 8040, 8976, 2692, 5231, 5325, 4149, 1551, 6154, 6927, 8220, 5273, 107, 552, 5626, 5003, 3065, 92};
    int takeOffTime = 26;
    int rechargeTime = 31;
    int missileSpeed = 563;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 32.493023016976046;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> baseX = {39, 1085, 7442, 6576, 884, 61, 7844, 3861, 2598, 3094, 7329, 9775, 5205, 7366, 8463, 483, 6808, 5195, 2178, 3714, 469, 5089, 2671, 9042, 9793, 2620, 4118, 4627, 7887, 3747, 9595, 6560};
    vector<int> baseY = {7032, 6801, 7524, 6431, 2888, 4938, 6850, 3837, 5258, 4179, 3584, 4000, 2459, 403, 4065, 9419, 4764, 947, 7755, 3126, 6011, 9046, 5398, 2221, 1072, 2066, 5381, 1741, 5682, 825, 3839, 2242};
    vector<int> siloX = {5245, 7969, 5014, 8442, 3564, 647, 3951, 2842, 8894, 172, 7827, 9437, 885, 2383, 6666, 5177, 6877, 3073, 4073, 9204, 7575, 2917, 2650, 2367, 110, 8857, 5066, 7308, 6408, 1397, 2073, 1931, 2281, 1721, 3231, 9821, 7495, 7465, 3207, 962, 2168, 1391, 6975, 949, 7313, 285, 9519};
    vector<int> siloY = {6563, 7159, 8010, 7183, 9138, 6926, 8902, 6550, 1059, 606, 9326, 3532, 8541, 4080, 6346, 4919, 6745, 8087, 6785, 7903, 3160, 2755, 6555, 9956, 7368, 9421, 4841, 1513, 8976, 816, 631, 6402, 539, 579, 246, 2281, 6765, 3325, 6730, 5017, 8457, 7014, 2051, 6065, 4089, 9591, 4588};
    int takeOffTime = 25;
    int rechargeTime = 95;
    int missileSpeed = 1994;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4850861053238502;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> baseX = {5432, 2715, 4007, 5693, 7223, 7507, 8718, 880, 2925, 175, 9488, 2439, 4921, 5318, 3427, 6525, 181, 9173, 7816, 7104, 5729, 8536, 7308, 9027, 6015, 1307, 9332, 7766, 253, 1077, 3699, 1285, 7853, 2376, 8362, 1226, 1418, 7905, 9015, 712};
    vector<int> baseY = {9817, 7589, 6328, 8474, 4817, 6090, 4156, 5524, 4613, 9671, 4112, 6873, 2449, 3792, 1121, 6771, 401, 3118, 3460, 6473, 5877, 8910, 4715, 2950, 3540, 5391, 5462, 8338, 9835, 6043, 7689, 5515, 7532, 8017, 848, 686, 8994, 419, 7838, 3474};
    vector<int> siloX = {3656, 2698, 8301, 3180, 1721, 5234, 9705, 1845, 6491, 8491, 4510, 3055, 123, 8958, 1510, 779, 8940, 4596, 6200, 5907, 1388, 8413, 3735, 7666, 6429, 3865, 5911, 6412, 8339, 896, 9883, 520, 3757, 6870, 3371, 5305, 6790, 4461, 8699, 2644, 5931, 9277, 979, 8142, 4840, 2569, 343, 7083, 2250};
    vector<int> siloY = {9605, 4489, 1540, 3657, 8966, 6532, 6072, 8513, 3950, 9361, 6526, 4339, 5387, 1002, 626, 5154, 9541, 8945, 3680, 4014, 7580, 7182, 428, 9345, 8240, 1801, 9196, 4686, 8455, 2491, 2722, 5204, 9846, 4332, 5765, 5124, 1035, 4714, 7422, 3379, 7393, 1653, 2072, 9565, 5769, 12, 7821, 237, 2502};
    int takeOffTime = 24;
    int rechargeTime = 987;
    int missileSpeed = 188;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 11.249165457638062;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> baseX = {2812, 7659, 7287, 5176, 6426, 5971, 9738, 1466, 4639, 5052, 2823, 7177, 966, 8301, 1812, 5589, 3958, 7049, 770, 7306, 9641, 9935, 5195, 913, 4091, 4259, 3866, 561, 1038, 3221, 5893, 9343, 151, 4546, 1985, 7220, 7943, 6244, 2113, 2309, 7486, 9733, 2297, 7093, 6272};
    vector<int> baseY = {6189, 7724, 2161, 5016, 3962, 5392, 3316, 293, 2958, 512, 7633, 6916, 2648, 8751, 9658, 2091, 9199, 3668, 433, 3607, 6199, 9188, 8752, 1270, 9926, 8197, 3673, 9782, 2868, 276, 2528, 7687, 3303, 2996, 3202, 6934, 6015, 2675, 6911, 2702, 555, 4303, 8195, 6465, 9016};
    vector<int> siloX = {5827, 2830, 4230, 7181, 8125, 5437, 8988, 9214, 9211, 7405, 4336, 1349, 8787, 8495, 574, 953, 6611, 1726, 8221, 8098, 7150, 967, 1445, 3961, 1286, 6922, 1540, 6629, 1135, 4092, 3706, 4769, 8900, 9902, 1618, 6459};
    vector<int> siloY = {8107, 2933, 1788, 2893, 8918, 3985, 4638, 5680, 1795, 5451, 4306, 5238, 2824, 6724, 8924, 3347, 1151, 5713, 2562, 9351, 2527, 9389, 8721, 1098, 1160, 3674, 8622, 2927, 3011, 9912, 5036, 2225, 6144, 3606, 9396, 1483};
    int takeOffTime = 39;
    int rechargeTime = 396;
    int missileSpeed = 653;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 398.00465573664206;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> baseX = {1881, 1307, 186, 5202, 5547, 1425, 2548, 1490, 3864, 778, 6829, 7611, 8994, 8500, 896, 3435, 4368, 1775, 8068, 2089, 6179, 5049, 3401, 727, 5774, 9339, 1470, 5164, 6201, 7583, 8300, 8560, 3920, 1582, 5074, 3568, 4458, 1853};
    vector<int> baseY = {7276, 1148, 2590, 1566, 9504, 3043, 9163, 9354, 5776, 196, 2588, 1410, 401, 8401, 4743, 3454, 8990, 8646, 4795, 2564, 5048, 4807, 7843, 393, 4232, 8062, 8671, 132, 5426, 7972, 132, 9068, 1681, 2340, 5176, 352, 5891, 4313};
    vector<int> siloX = {4358, 9399, 9775, 2055, 664, 1184, 6021, 4737, 9013, 9223, 4276, 3181, 6636, 8829, 9525, 5427, 1725, 3335, 4323, 5398, 617, 738, 8812, 241, 7783, 8609, 4627, 189, 1956, 9897, 9104, 6677, 7672};
    vector<int> siloY = {4937, 8144, 5552, 7170, 9024, 7192, 2347, 8825, 9157, 7929, 7592, 7198, 2321, 5403, 2588, 5173, 7360, 348, 1610, 9439, 8844, 9688, 9973, 766, 8356, 4840, 5489, 794, 3958, 4127, 470, 6764, 2898};
    int takeOffTime = 9;
    int rechargeTime = 383;
    int missileSpeed = 912;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 383.5555201011344;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> baseX = {5644, 4809, 5533, 2526, 9028, 1991, 1839, 6952, 9187, 9765, 9177, 6796, 1804, 7120, 266, 6375, 7330, 8053, 1516, 3574, 5227, 1793, 9692, 5660, 7195, 8594, 156, 4592, 6932, 585, 6181, 3094, 5565};
    vector<int> baseY = {1844, 6790, 6409, 5783, 3084, 2221, 5156, 2322, 4321, 387, 5436, 6124, 5153, 2017, 2491, 3003, 6817, 9292, 4473, 4751, 2768, 770, 3227, 8210, 5361, 2062, 2619, 8841, 5581, 2874, 685, 4111, 1610};
    vector<int> siloX = {9462, 20, 5417, 4023, 7157, 158, 6580, 6265, 5909, 5367, 8773, 8965, 7822, 1081, 3024, 5884, 817, 6839, 539, 8943, 4384, 6857, 2010, 9987, 2942, 1168, 9654, 7111, 2982, 1054, 6929, 6586, 7249, 6757, 3258, 1472, 267, 7187, 9370, 5358, 5137, 6199, 2460, 8878, 537, 7077, 177};
    vector<int> siloY = {8, 4060, 7873, 4640, 8216, 5661, 5733, 1524, 7621, 326, 2315, 8322, 5791, 1288, 8667, 9155, 6362, 7250, 8303, 6557, 5810, 9920, 8593, 717, 5097, 2832, 5853, 3852, 3370, 4612, 765, 9621, 4132, 750, 7811, 2007, 2465, 6352, 469, 7466, 6727, 6855, 8648, 9094, 3465, 5896, 7736};
    int takeOffTime = 41;
    int rechargeTime = 529;
    int missileSpeed = 498;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 5.758185144103357;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> baseX = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> baseY = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> siloX = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    vector<int> siloY = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    int takeOffTime = 1;
    int rechargeTime = 5;
    int missileSpeed = 2000;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.017166666666666667;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> baseX = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> baseY = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    vector<int> siloX = {10000};
    vector<int> siloY = {10000};
    int takeOffTime = 60;
    int rechargeTime = 1000;
    int missileSpeed = 1;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 63181.52946428659;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> baseX = {72, 66, 51, 83, 31, 62, 40, 76, 30, 85, 76, 16, 27, 31, 49, 95, 17, 11, 83, 39, 76, 35, 2, 71, 37, 31, 89, 63, 43, 74, 52, 47, 73, 45, 74, 30};
    vector<int> baseY = {59, 28, 82, 86, 50, 15, 98, 79, 75, 19, 80, 51, 71, 2, 63, 46, 60, 66, 55, 19, 14, 24, 25, 1, 96, 12, 81, 75, 18, 20, 97, 58, 80, 48, 40, 90};
    vector<int> siloX = {27, 67, 99, 78, 48, 61, 4, 73, 32, 49, 29, 39, 19, 8, 73, 62, 81, 94, 5, 28, 71, 27, 82, 76, 24, 63, 61, 85, 14, 43, 43, 21, 1, 75, 58, 52};
    vector<int> siloY = {66, 15, 64, 97, 88, 58, 50, 49, 85, 56, 59, 93, 36, 37, 7, 3, 63, 80, 16, 63, 59, 15, 12, 74, 66, 68, 39, 67, 79, 68, 58, 23, 15, 73, 38, 62};
    int takeOffTime = 20;
    int rechargeTime = 403;
    int missileSpeed = 317;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4163172225318564;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> baseX = {99, 50, 50, 95, 39, 50, 92, 36, 41, 54, 88, 69, 88, 91, 1, 86, 9, 30, 28, 75, 62, 46, 96, 90, 71, 71, 55, 77, 31, 18, 96, 21, 39, 29, 47, 47, 49};
    vector<int> baseY = {91, 85, 18, 60, 92, 11, 79, 88, 16, 81, 1, 47, 85, 38, 23, 38, 51, 19, 63, 20, 68, 20, 72, 85, 37, 56, 41, 25, 44, 25, 61, 48, 44, 90, 13, 1, 82};
    vector<int> siloX = {76, 69, 88, 3, 21, 57, 54, 88, 1, 95, 93, 70, 83, 35, 91, 13, 21, 78, 91, 15, 22, 83, 14, 66, 82, 85, 84, 63, 98, 2, 17, 71, 13, 85, 26, 75, 49};
    vector<int> siloY = {85, 92, 89, 69, 44, 12, 24, 33, 57, 43, 45, 36, 91, 94, 92, 48, 55, 76, 51, 35, 34, 70, 4, 25, 96, 54, 36, 49, 51, 1, 14, 85, 74, 100, 1, 21, 59};
    int takeOffTime = 18;
    int rechargeTime = 97;
    int missileSpeed = 1546;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.319404915912031;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> baseX = {90, 65, 15, 15, 18, 81, 84, 51, 92, 93, 87, 81, 6, 73, 19, 75, 90, 2, 77, 23, 69, 24, 57, 1, 90, 30, 53, 14, 31, 98, 100};
    vector<int> baseY = {19, 18, 86, 47, 17, 39, 71, 26, 76, 89, 52, 20, 98, 96, 98, 75, 70, 23, 92, 61, 88, 72, 77, 3, 79, 50, 83, 50, 80, 34, 21};
    vector<int> siloX = {23, 15, 98, 10, 96, 4, 60, 50, 82, 24, 98, 54, 71, 52, 61, 69, 88, 47, 69, 16, 38, 90, 37, 37, 55, 67, 41, 78, 29, 93, 28};
    vector<int> siloY = {9, 45, 47, 15, 14, 43, 93, 40, 4, 25, 33, 60, 61, 97, 79, 100, 71, 54, 11, 41, 30, 23, 59, 11, 52, 35, 54, 73, 86, 80, 8};
    int takeOffTime = 8;
    int rechargeTime = 82;
    int missileSpeed = 32;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 1.2217130062875832;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> baseX = {98, 56, 88, 89, 14, 42, 70, 96, 78, 44, 13, 71, 99, 91, 77, 26, 5, 49, 96, 68, 23, 60};
    vector<int> baseY = {60, 4, 37, 39, 48, 16, 84, 43, 56, 83, 2, 56, 19, 38, 85, 25, 42, 39, 33, 51, 7, 49};
    vector<int> siloX = {11, 12, 25, 14, 48, 57, 11, 81, 61, 69, 68, 51, 72, 63, 96, 58, 96, 23, 62, 65, 77, 79};
    vector<int> siloY = {38, 89, 22, 60, 69, 77, 37, 94, 83, 26, 57, 6, 82, 18, 57, 63, 2, 11, 89, 80, 60, 90};
    int takeOffTime = 29;
    int rechargeTime = 5;
    int missileSpeed = 154;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.737908603254277;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> baseX = {91, 74, 31, 46, 99, 74, 26, 12, 70, 38, 82, 34, 54, 88, 53, 20, 97, 72, 1, 64, 30, 52, 32, 17, 42, 56, 39, 89, 73, 30, 86, 60, 43, 94, 67, 45, 83, 30, 92, 5, 49, 91, 40, 35, 83, 29, 21, 7, 15, 6};
    vector<int> baseY = {49, 24, 88, 91, 62, 44, 39, 59, 100, 17, 71, 65, 72, 47, 30, 50, 3, 97, 99, 14, 83, 11, 63, 94, 7, 76, 89, 83, 80, 57, 90, 23, 14, 53, 79, 36, 86, 86, 14, 12, 58, 70, 54, 52, 34, 13, 9, 47, 15, 29};
    vector<int> siloX = {48, 22, 11, 21, 55, 81, 100, 51, 41, 41, 9, 25, 81, 96, 66, 42, 65, 71, 4, 51, 4, 47, 49, 68, 20, 38, 67, 57, 55, 48, 65, 4, 8, 41, 80, 53, 19, 38, 46, 81, 21, 8, 21, 49, 42, 96, 41, 45, 68, 6};
    vector<int> siloY = {51, 71, 40, 98, 26, 54, 6, 97, 19, 53, 75, 16, 9, 2, 2, 5, 60, 29, 70, 96, 33, 31, 42, 21, 77, 37, 5, 44, 54, 18, 25, 77, 12, 35, 38, 19, 78, 4, 81, 74, 65, 71, 77, 70, 81, 41, 8, 12, 77, 55};
    int takeOffTime = 16;
    int rechargeTime = 11;
    int missileSpeed = 50;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9047889120084194;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> baseX = {77, 57, 27, 89, 35, 99, 7, 82, 63, 36, 35, 92, 5, 96, 66, 56, 86, 57, 59, 28, 37, 44};
    vector<int> baseY = {12, 35, 25, 71, 46, 15, 90, 44, 84, 32, 93, 15, 91, 84, 58, 56, 56, 45, 87, 78, 19, 57};
    vector<int> siloX = {61, 53, 17, 73, 34, 9, 3, 68, 36, 77, 13, 71, 63, 91, 15, 40, 91, 48, 78, 3, 81, 41};
    vector<int> siloY = {22, 65, 99, 85, 68, 12, 21, 33, 71, 65, 48, 36, 91, 18, 58, 80, 8, 62, 43, 70, 2, 44};
    int takeOffTime = 19;
    int rechargeTime = 91;
    int missileSpeed = 55;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8414255644725507;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> baseX = {49, 71, 2, 14, 12, 62, 21, 30, 82, 13, 74, 72, 100, 10};
    vector<int> baseY = {79, 72, 1, 38, 51, 41, 38, 81, 32, 56, 91, 73, 18, 93};
    vector<int> siloX = {57, 2, 73, 41, 17, 40, 2, 33, 64, 23, 73, 12, 6, 49};
    vector<int> siloY = {96, 88, 17, 47, 46, 59, 61, 39, 4, 2, 81, 94, 61, 47};
    int takeOffTime = 14;
    int rechargeTime = 8;
    int missileSpeed = 448;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3076673771072026;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> baseX = {50, 57, 30, 22, 65, 80, 48, 99, 31, 19, 46, 69, 71, 81, 23, 61, 17, 77, 66, 56, 49, 85, 86, 82, 45, 76, 89, 36};
    vector<int> baseY = {71, 32, 60, 26, 10, 77, 95, 74, 81, 22, 38, 31, 4, 40, 26, 59, 34, 31, 58, 66, 32, 61, 44, 14, 66, 43, 66, 22};
    vector<int> siloX = {70, 64, 11, 49, 33, 51, 26, 10, 91, 17, 99, 29, 55, 77, 97, 54, 96, 32, 95, 99, 77, 2, 62, 60, 97, 23, 42, 78};
    vector<int> siloY = {40, 99, 94, 2, 47, 67, 31, 63, 42, 1, 82, 48, 37, 45, 80, 68, 96, 34, 45, 35, 94, 45, 16, 53, 32, 90, 1, 3};
    int takeOffTime = 37;
    int rechargeTime = 25;
    int missileSpeed = 143;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.832092146397427;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> baseX = {37, 60, 99, 22, 84, 88, 70, 68, 10};
    vector<int> baseY = {11, 36, 32, 99, 91, 19, 29, 82, 54};
    vector<int> siloX = {16, 61, 67, 25, 80, 8, 77, 75, 62};
    vector<int> siloY = {89, 87, 71, 74, 19, 87, 19, 71, 88};
    int takeOffTime = 53;
    int rechargeTime = 364;
    int missileSpeed = 348;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0299132269523776;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> baseX = {7, 63, 38, 31, 1, 63, 55, 18, 84, 76, 44, 75, 39, 79, 25, 47, 69, 58, 3, 97, 32, 7, 91, 8, 19, 5, 53, 52, 31, 85};
    vector<int> baseY = {56, 52, 47, 13, 67, 43, 61, 12, 87, 45, 87, 46, 23, 30, 97, 41, 79, 21, 100, 39, 58, 96, 60, 55, 12, 56, 1, 28, 1, 71};
    vector<int> siloX = {63, 94, 22, 48, 35, 68, 16, 25, 54, 91, 65, 67, 11, 18, 89, 15, 72, 19, 50, 95, 26, 89, 81, 84, 14, 81, 64, 14, 98, 72};
    vector<int> siloY = {17, 88, 84, 20, 99, 81, 85, 25, 93, 99, 35, 17, 72, 56, 66, 76, 1, 35, 44, 55, 97, 10, 43, 43, 57, 51, 88, 81, 7, 83};
    int takeOffTime = 36;
    int rechargeTime = 300;
    int missileSpeed = 27;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 1.7944085553034888;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> baseX = {752902, 729304, 643618, 466173, 542684, 490566, 174230, 404394, 675149, 478528, 514038, 265956, 105770, 384026, 935765, 857531, 173229, 897590, 399628, 641354, 645954, 321502, 279240, 785949, 379159, 933607, 356261, 147200, 547735, 620878, 592245, 36587, 917329, 759474, 2375, 823790, 694028, 625854, 904105, 731411, 418008, 221893, 367174, 967120, 220407};
    vector<int> baseY = {901705, 766373, 428369, 787017, 91663, 18365, 714516, 687797, 119158, 936577, 934915, 748603, 553900, 808611, 108659, 333825, 734089, 346908, 126567, 202370, 493170, 492284, 134433, 819171, 801143, 162098, 2421, 352762, 750478, 895435, 724681, 236470, 169772, 995572, 376337, 600971, 190312, 208946, 968103, 475451, 29259, 775636, 704748, 239083, 370060};
    vector<int> siloX = {710937, 381612, 373105, 209641, 810229, 201502, 541393, 82862, 940144, 775174, 995263, 28742, 825876, 364758, 166057, 579315, 771597, 766336, 501542, 324872, 85298, 363651, 139816, 271050, 296070, 676506, 306161, 573206, 953781, 170755, 40818, 18070, 447447, 183487, 877483, 207012, 961855, 420038, 868495, 44260, 214237, 865594, 635138, 369484, 29011};
    vector<int> siloY = {953599, 406165, 298212, 91505, 302553, 470058, 623255, 535543, 575788, 910296, 328559, 624194, 733390, 810224, 164264, 335655, 103560, 421922, 153595, 312906, 258208, 526814, 100715, 245325, 451554, 250040, 105818, 534177, 935760, 434363, 358371, 364370, 731838, 637137, 665565, 448483, 434325, 96675, 480012, 597784, 161524, 898732, 850144, 570059, 622638};
    int takeOffTime = 9;
    int rechargeTime = 44;
    int missileSpeed = 103;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 1672.5893004490456;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> baseX = {333859, 508569, 402071, 296544, 579376, 262394, 746750, 270919, 15465, 371573, 322674};
    vector<int> baseY = {382533, 970545, 498192, 862872, 112334, 662810, 432541, 978898, 927300, 667057, 875515};
    vector<int> siloX = {856153, 402929, 29062, 256179, 535589, 245854, 850006, 283018, 818040, 275906, 991932};
    vector<int> siloY = {578694, 301729, 36374, 445971, 874210, 361156, 904602, 863187, 269232, 899469, 814867};
    int takeOffTime = 58;
    int rechargeTime = 34;
    int missileSpeed = 165;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 1588.383659913858;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> baseX = {246500, 789044, 505537, 618425, 805309, 573245, 379518, 238817, 826529, 487949, 655740, 567411, 970785, 478071, 245479, 943244, 565248, 969276, 248824, 67312, 66206, 249910, 175088, 914207, 299900, 342175, 905169, 486672, 179440, 85151, 303729, 141309, 41975, 866426, 542658, 57786, 713326, 69724, 840797, 903085, 832959, 584635, 999229, 630029, 456018, 988548, 419983, 720219};
    vector<int> baseY = {693318, 48965, 262650, 311353, 590662, 215135, 657466, 17138, 573401, 445727, 373002, 172644, 782879, 57999, 928268, 559771, 460170, 432249, 858790, 671888, 264600, 427047, 244203, 45132, 619804, 947175, 415796, 315038, 816839, 623096, 217289, 596144, 882329, 262621, 331217, 979550, 396497, 885661, 618998, 628684, 103399, 406374, 729415, 396414, 446192, 309566, 681581, 87126};
    vector<int> siloX = {696477, 676639, 14065, 353096, 555998, 208643, 75080, 738215, 14880, 937747, 684015, 543622, 799592, 71802, 300024, 226882, 964089, 618375, 123650, 833145, 652360, 386078, 813064, 627941, 990517, 848142, 188795, 880236, 427263, 61172, 966025, 953536, 411334, 207358, 237678, 444959, 620470, 114049, 542004, 876184, 903575, 233926, 770196, 689799, 240889, 192702, 861329, 473924};
    vector<int> siloY = {973291, 149452, 987083, 522352, 352110, 541417, 584660, 686808, 152670, 494369, 734146, 882742, 597988, 495508, 125998, 199417, 985533, 822299, 548522, 44950, 3350, 401642, 849742, 854588, 989727, 344290, 249244, 242160, 102602, 439036, 179619, 596965, 587924, 747012, 829619, 702298, 192472, 310891, 267375, 314085, 507250, 520051, 440267, 238511, 818199, 960861, 363411, 901355};
    int takeOffTime = 33;
    int rechargeTime = 10;
    int missileSpeed = 137;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 1250.9764201002874;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> baseX = {913372, 19881, 931208, 136411, 141952, 185560, 806857, 574885, 155995, 763110, 814683, 278817, 86100, 935270, 359704, 998180, 259956, 630708, 908895, 72993};
    vector<int> baseY = {884732, 748180, 218439, 668727, 132333, 647341, 223541, 170824, 476260, 5102, 824370, 279218, 728470, 990302, 768917, 916049, 139320, 957313, 559464, 318946};
    vector<int> siloX = {728355, 742531, 318031, 104326, 945828, 539809, 619802, 705406, 415187, 68561, 140823, 225212, 978932, 488324, 206375, 862922, 650347, 185149, 681294, 713728};
    vector<int> siloY = {123261, 200435, 637555, 806888, 214069, 788077, 888924, 820503, 594483, 477323, 109931, 666707, 634844, 667272, 17328, 645931, 920, 500611, 714895, 49762};
    int takeOffTime = 17;
    int rechargeTime = 125;
    int missileSpeed = 69;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 4141.995851973606;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> baseX = {477168, 931921, 556495, 338060, 61783, 327301, 666692, 547620, 514784, 234301, 704881, 192738, 505253, 932215, 334907, 738575, 10160, 360532, 193243, 580498, 263793, 100586, 802008, 464893, 813481};
    vector<int> baseY = {312926, 74716, 45866, 719913, 832400, 305541, 479479, 387574, 264373, 443042, 218971, 525344, 98385, 386316, 218741, 212950, 987925, 506273, 747243, 752751, 722355, 717316, 53685, 128244, 211690};
    vector<int> siloX = {990767, 833322, 906256, 147773, 136598, 150208, 795567, 164787, 222888, 180491, 75806, 225249, 115562, 464984, 47745, 701691, 881367, 787807, 197567, 312618, 842075, 913, 710714, 371881, 548393};
    vector<int> siloY = {533026, 650724, 256866, 762190, 119308, 489598, 402748, 660709, 73346, 289786, 433137, 808004, 812783, 572498, 837432, 548836, 150795, 298566, 422484, 834507, 263130, 779601, 219576, 648687, 831977};
    int takeOffTime = 17;
    int rechargeTime = 10;
    int missileSpeed = 32;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 7860.012861619438;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> baseX = {572613, 791656};
    vector<int> baseY = {527934, 653005};
    vector<int> siloX = {415546, 358092};
    vector<int> siloY = {285904, 969657};
    int takeOffTime = 50;
    int rechargeTime = 7;
    int missileSpeed = 193;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 2723.9843499180583;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> baseX = {286098, 213206, 632113, 173769, 635921, 994722, 270120, 432348, 675258, 74474, 229738, 515581, 284308, 712214, 183266, 796681, 530467, 547568, 208079, 950936, 94883, 860967, 812510, 275399, 993245, 224406, 843183, 438386, 212814, 307987, 251507, 951176, 589226, 537036, 907629, 748934, 591558, 215345, 375207, 529137, 684435, 457098};
    vector<int> baseY = {558414, 886703, 956239, 838470, 923609, 52256, 730363, 779870, 281833, 705875, 867104, 596409, 572287, 276781, 667739, 765966, 497421, 880914, 873094, 29277, 381166, 192140, 333203, 47070, 388055, 891629, 658729, 690499, 335513, 651258, 533039, 689816, 212921, 720404, 139706, 682738, 405208, 235108, 474577, 596718, 622417, 452625};
    vector<int> siloX = {579918, 394866, 346294, 327947, 839403, 56238, 23796, 170942, 868786, 834918, 948107, 462571, 382823, 846533, 280780, 354549, 723438, 668872, 878201, 622395, 93647, 850995, 613897, 923881, 482165, 905628, 422964, 33196, 85478, 835358, 77925, 973371, 857106, 998546, 787391, 851399, 963432, 4112, 975860, 834293, 766602, 742661};
    vector<int> siloY = {838954, 832757, 961346, 310663, 321628, 828421, 176266, 431490, 637145, 856595, 190931, 421037, 582772, 407094, 62520, 609318, 271585, 433044, 520322, 279824, 957864, 253379, 257759, 196280, 918317, 927344, 76939, 176753, 838632, 28301, 493931, 608726, 228671, 491942, 826791, 65917, 751990, 13550, 536083, 253428, 2851, 23226};
    int takeOffTime = 22;
    int rechargeTime = 22;
    int missileSpeed = 22;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 8406.65676350182;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> baseX = {905995, 423810, 86132, 603003, 545914, 996292, 990041, 684517};
    vector<int> baseY = {184943, 710420, 965776, 22589, 129942, 914939, 308061, 999709};
    vector<int> siloX = {111801, 516876, 939349, 92537, 193863, 933316, 341609, 143105};
    vector<int> siloY = {853803, 582024, 922201, 145634, 482576, 328933, 989163, 697444};
    int takeOffTime = 60;
    int rechargeTime = 83;
    int missileSpeed = 95;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 4743.141179897863;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> baseX = {939313, 448526, 229646, 239072, 338743, 496267, 271401, 917379, 122567, 30600, 542714, 46965, 713778, 206198, 525360, 571471, 199009, 411757, 782977, 66753, 510184, 603133, 886821, 58459, 456540};
    vector<int> baseY = {701877, 938957, 114261, 146671, 620057, 10842, 986199, 205951, 389454, 132391, 410791, 906890, 974924, 580897, 486606, 754536, 999285, 376057, 871919, 127932, 215425, 172793, 375447, 18118, 723341};
    vector<int> siloX = {753495, 776129, 204548, 270259, 16437, 715994, 626255, 540491, 278362, 308908, 443487, 718627, 69068, 393910, 174049, 147596, 554603, 269622, 889927, 611124, 827508, 112992, 347659, 672075, 342480};
    vector<int> siloY = {305489, 528433, 527276, 723825, 599427, 727261, 227766, 257876, 25903, 255954, 935112, 717640, 456860, 434461, 794296, 920612, 843231, 103094, 700344, 225297, 16463, 899234, 247647, 52717, 503444};
    int takeOffTime = 19;
    int rechargeTime = 137;
    int missileSpeed = 158;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 1524.4355133491326;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> baseX = {425495, 839362, 952585, 157425, 917269, 515448, 621393, 721589, 111499, 603551, 150731, 222433, 288515, 265155, 416554, 215167, 878466, 271781, 989030, 244180, 537778, 120526, 695154, 273483, 54886, 802296, 918625, 159421, 167609, 295122, 17091, 182907, 353442};
    vector<int> baseY = {95711, 505747, 559417, 194348, 428110, 994941, 626812, 439126, 157908, 861462, 480940, 103341, 909809, 694027, 538127, 28304, 124206, 186439, 683258, 870887, 95046, 374522, 478711, 598163, 676463, 258380, 935622, 315873, 491006, 568433, 372487, 523476, 982962};
    vector<int> siloX = {537013, 144965, 606105, 467894, 52069, 271919, 775609, 694277, 231954, 170212, 494180, 224126, 161586, 565672, 59956, 416645, 701438, 938131, 695653, 619216, 839565, 503806, 294599, 171181, 168112, 985632, 330601, 608891, 994942, 31027, 385653, 216115, 749391};
    vector<int> siloY = {537351, 172099, 842436, 835172, 178407, 507723, 577461, 706312, 805152, 916381, 17073, 316708, 30783, 919830, 876341, 466984, 800185, 381920, 297125, 857529, 356335, 553904, 755137, 746109, 161638, 480288, 376973, 869873, 327380, 687777, 174735, 923645, 442074};
    int takeOffTime = 20;
    int rechargeTime = 81;
    int missileSpeed = 192;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 1333.4364825924858;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> baseX = {399514, 974410, 319159, 80402, 277420, 770873, 761026, 775934, 688496, 225980, 77351, 571087, 456351, 651990, 313632, 650371, 183669, 618698, 666009, 292533, 456575, 491012, 222927, 878964, 343863, 425559, 536879, 185153, 610220, 230810, 570494, 451619, 570975, 286581, 2623, 261637, 438925, 233240, 617972, 476130, 436521, 764455, 763186, 112762, 777903, 591838, 642839, 889832};
    vector<int> baseY = {666985, 29469, 73418, 64912, 42766, 358926, 477665, 175407, 222253, 601951, 458317, 147183, 40537, 741674, 699100, 918936, 320232, 29023, 135777, 370128, 658233, 519292, 590928, 254494, 983075, 831567, 852329, 389515, 636333, 56032, 513294, 731102, 462893, 81888, 894237, 327886, 37593, 970577, 585925, 505133, 849298, 707467, 598991, 90250, 289921, 188950, 823194, 24992};
    vector<int> siloX = {151815, 389934, 522239, 81279, 169827, 875805, 405440, 10259, 463014, 942511, 872310, 590814, 340744, 5493, 122942, 784583, 570434, 191611, 279411, 438785, 803875, 528461, 230694, 751033, 182775, 244358, 139312, 716928, 691686, 860833, 744852, 854471, 445982, 23835, 682900, 558878, 671271, 768846, 163524, 344699, 907158, 826031, 16017, 596227, 269740, 67388, 282473, 85629};
    vector<int> siloY = {664028, 676880, 499369, 842541, 193603, 989772, 749943, 67136, 474785, 595351, 185024, 472470, 611681, 843824, 978542, 369945, 1363, 153531, 734514, 217089, 315392, 118783, 669146, 453011, 975070, 537460, 37972, 408841, 817819, 382184, 168126, 337376, 948274, 842371, 618160, 780797, 564804, 691879, 500813, 614470, 736645, 793112, 588821, 628193, 372799, 825324, 709372, 761677};
    int takeOffTime = 13;
    int rechargeTime = 682;
    int missileSpeed = 281;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 900.5061440619228;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> baseX = {408136, 523951, 662074, 457892, 124129, 994612, 374319, 114336, 715261, 80540, 545490, 249722, 905703, 340947, 1881, 69891, 878897, 464391, 422590, 291050, 139686, 739984, 304868, 335808, 32382, 421531, 304149, 765846, 789772, 514174, 452984, 20124, 370445, 557225, 880946, 564458, 772671, 404996};
    vector<int> baseY = {358634, 700600, 176310, 804123, 479671, 889624, 862306, 906929, 666241, 432409, 541967, 144275, 771941, 438887, 504361, 75361, 67813, 519639, 685256, 673702, 776251, 435426, 160433, 415932, 545939, 817224, 137161, 621948, 651569, 479332, 563900, 381345, 652933, 324512, 633498, 317806, 545386, 460216};
    vector<int> siloX = {759418, 876536, 414558, 56117, 905616, 212845, 142243, 406033, 354240, 175975, 637416, 360177, 480528, 576286, 356066, 294393, 425735, 661529, 36224, 408930, 113677, 143069, 898864, 766130, 61267, 778641, 11696, 89893, 280247, 280761, 515031, 818727, 497878, 182478, 695843, 407094, 875402, 489559};
    vector<int> siloY = {659686, 683760, 482608, 329945, 113034, 858356, 295656, 957740, 125165, 151077, 204361, 674346, 108566, 210045, 568102, 606323, 504392, 303710, 569111, 730383, 384039, 257132, 184841, 937304, 704653, 878354, 681635, 695005, 828844, 699609, 782904, 157767, 180249, 45119, 140011, 714559, 637620, 994786};
    int takeOffTime = 30;
    int rechargeTime = 29;
    int missileSpeed = 31;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 6976.7855133656785;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> baseX = {320142, 432137, 329249, 215712, 961939, 794869, 445848, 450177, 82966, 912443};
    vector<int> baseY = {465007, 266799, 735348, 589091, 747151, 411237, 962629, 322461, 451835, 579702};
    vector<int> siloX = {997063, 655672, 327138, 592970, 780896, 22748, 497485, 520802, 135875, 42696};
    vector<int> siloY = {884198, 501733, 487486, 527316, 476123, 685999, 105237, 902544, 375871, 365422};
    int takeOffTime = 17;
    int rechargeTime = 39;
    int missileSpeed = 2;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 123935.77801201689;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> baseX = {199859, 55628, 110719, 810079, 188932, 927553, 440252, 713757, 848415, 184181, 324300, 243097, 856822, 202942, 682067, 284097, 847243, 706207, 340528, 460776, 939288, 777239, 395355, 497954, 192975, 440598, 386223, 713116, 861623, 986214, 182132, 324062, 729667, 514343, 632631, 64270, 998580, 314963};
    vector<int> baseY = {551498, 243041, 575139, 327679, 819332, 929843, 114181, 671849, 337463, 434084, 929734, 96408, 877492, 311236, 850868, 668516, 749922, 245271, 35870, 167700, 898799, 302876, 615632, 774989, 785368, 697696, 295849, 533059, 891856, 818531, 689230, 803780, 712144, 534055, 457080, 407961, 873927, 780386};
    vector<int> siloX = {908016, 287674, 612498, 324467, 337856, 303763, 990070, 157104, 417137, 703807, 355243, 328411, 451843, 269654, 830960, 296746, 597534, 463181, 278264, 487202, 803935, 270842, 176869, 452944, 387632, 620362, 719137, 744355, 997429, 917580, 186778, 734516, 746097, 786963, 835563, 104967, 960701, 226903};
    vector<int> siloY = {129267, 843177, 548387, 484141, 276991, 550033, 518012, 931983, 116288, 911540, 203366, 440444, 876693, 523882, 653015, 676252, 466668, 311394, 91880, 569550, 361546, 491553, 769651, 342187, 816584, 30374, 434333, 327346, 658618, 809979, 717942, 668666, 258043, 130395, 319639, 573573, 189501, 50151};
    int takeOffTime = 42;
    int rechargeTime = 43;
    int missileSpeed = 138;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 1869.9517112296267;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> baseX = {256183, 590909, 771557, 879307, 590487, 25950, 204182, 858882, 953997, 585612, 800260, 365231, 542182, 482096, 752389, 735542, 531648, 307939, 933805, 414579, 230905, 916209, 37764, 491778, 301390, 74933, 287774, 351205};
    vector<int> baseY = {725202, 873514, 402521, 378429, 362508, 791892, 862012, 584044, 847831, 805183, 425433, 153223, 929722, 443853, 576172, 53920, 54000, 300146, 354843, 448444, 171061, 362793, 74149, 302012, 928465, 94303, 268002, 465022};
    vector<int> siloX = {739459, 980880, 828287, 821895, 402482, 939087, 338747, 415704, 428015, 943222, 462893, 93015, 361630, 234064, 689110, 209036, 555421, 382831, 485607, 571110, 420550, 973411, 941125, 569074, 472439, 356870, 619345, 76231};
    vector<int> siloY = {987943, 650639, 274107, 860835, 231558, 382765, 970852, 286237, 32868, 708057, 531706, 641181, 80587, 752858, 785506, 374121, 193180, 332935, 165371, 817598, 313894, 455735, 994032, 815355, 148552, 742669, 941480, 540670};
    int takeOffTime = 50;
    int rechargeTime = 447;
    int missileSpeed = 106;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 3056.7765679245435;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> baseX = {725483, 350415, 690921, 673120, 243708, 527097, 533628, 416821, 367847, 399595, 375443, 545195, 64622, 988829, 870736, 691201};
    vector<int> baseY = {810360, 291974, 391306, 320629, 29289, 585613, 133478, 543125, 223722, 530734, 154476, 720889, 433328, 830820, 479526, 967733};
    vector<int> siloX = {743686, 176546, 274223, 951883, 357356, 455755, 283274, 745637, 611891, 247917, 517529, 3652, 112935, 101118, 511373, 444723};
    vector<int> siloY = {810193, 861765, 36916, 28113, 400101, 473138, 168225, 908912, 18148, 80589, 916842, 550950, 340857, 55463, 207379, 49901};
    int takeOffTime = 57;
    int rechargeTime = 646;
    int missileSpeed = 8;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 44280.31303124882;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> baseX = {25919, 57525, 137605, 790097, 35144, 355393, 457867, 805504, 176181, 767260, 813618, 643109, 998433, 253948, 319007, 530377, 613441, 287534};
    vector<int> baseY = {681181, 883928, 968490, 99573, 501335, 386471, 927949, 449588, 392245, 399860, 126176, 581024, 794789, 876022, 957090, 139811, 286556, 966728};
    vector<int> siloX = {508188, 288459, 526855, 311401, 778141, 566300, 670338, 85650, 635242, 87694, 906366, 354905, 437698, 690442, 514702, 821579, 687703, 498364};
    vector<int> siloY = {798418, 47521, 783200, 319194, 349192, 628643, 75261, 626248, 684471, 549349, 267929, 383353, 95507, 612111, 355413, 138148, 881812, 662595};
    int takeOffTime = 56;
    int rechargeTime = 29;
    int missileSpeed = 2;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 173082.49545723488;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> baseX = {608783, 306059, 618381, 893257, 588941, 637571, 592095, 458767, 892068, 273833, 786314, 768402, 394121, 645888, 359386, 386110, 188777, 276851, 780980, 678906, 406859, 77791, 602246, 63515, 89390, 864954, 526565, 993721, 317489, 726534, 827106, 769643, 365701, 400029, 275729, 561917, 150819};
    vector<int> baseY = {358581, 7958, 923723, 80231, 38549, 831957, 545539, 165235, 73122, 12783, 85445, 164743, 742223, 596974, 402670, 223903, 350308, 304215, 436145, 671462, 613622, 377250, 522553, 271129, 142760, 958053, 365442, 590363, 534955, 168230, 611764, 280795, 869007, 742830, 209010, 751674, 430257};
    vector<int> siloX = {680000, 975475, 888004, 551316, 251352, 358150, 41561, 739118, 334612, 796178, 560143, 526258, 888409, 994587, 53904, 979724, 829464, 582868, 893336, 791967, 495190, 221683, 501751, 847609, 612975, 674937, 844818, 665509, 462671, 634781, 290305, 886549, 126534, 309688, 991032, 651215, 926270};
    vector<int> siloY = {839734, 581412, 352550, 996137, 384169, 231693, 634283, 441697, 545217, 945261, 618642, 55159, 754834, 323875, 289072, 820209, 556570, 274256, 241727, 493692, 847279, 986535, 282190, 180566, 836124, 165254, 664234, 386434, 160359, 944959, 384223, 921166, 625968, 904636, 703014, 405182, 229104};
    int takeOffTime = 37;
    int rechargeTime = 363;
    int missileSpeed = 1025;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 285.33843366389254;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> baseX = {814474, 502199, 309770, 321714, 23825, 56381, 531022, 470385, 193467, 760421, 434994, 107997, 344797, 40605, 83669, 245593, 355267, 70488, 796985, 179939, 559192, 951708, 749200, 889834, 761956, 485259, 871759, 478997, 331990, 637737, 486258, 685464, 453204, 363945, 695221, 948400, 193612, 516088, 540386, 233072, 251897, 658732, 905338, 649123, 903550};
    vector<int> baseY = {384247, 373422, 403698, 264188, 48664, 394148, 86148, 310097, 863148, 850141, 80430, 772993, 502473, 5411, 109266, 105908, 820173, 413651, 696599, 853513, 632591, 620579, 989626, 925182, 649432, 550423, 349457, 155139, 405350, 195401, 578296, 457518, 868732, 975155, 557784, 132140, 763733, 211406, 227521, 55866, 960383, 462557, 653733, 645245, 459127};
    vector<int> siloX = {237493, 128921, 304813, 902489, 418522, 956322, 550326, 392763, 612946, 50497, 870973, 378810, 910209, 571412, 248168, 181616, 64091, 691835, 373087, 220616, 48281, 122205, 778149, 951024, 197513, 282506, 470570, 804974, 322388, 629991, 511385, 732978, 198467, 424354, 1247, 14989, 382921, 609625, 554630, 805171, 326313, 57269, 491826, 188043, 488814};
    vector<int> siloY = {221405, 891143, 934202, 378114, 324084, 950398, 478753, 929945, 519, 769205, 103886, 302749, 959338, 830356, 599342, 675714, 643823, 55013, 533987, 183543, 774269, 712538, 680513, 996365, 834906, 578736, 991718, 710349, 25986, 74028, 744206, 9488, 96906, 567440, 810409, 664654, 276171, 462000, 913090, 210258, 121070, 112024, 265870, 881442, 384487};
    int takeOffTime = 42;
    int rechargeTime = 83;
    int missileSpeed = 153;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 1633.3406182354363;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> baseX = {726244, 2995, 272449, 166409, 89417, 165878, 307929, 925573, 744636, 33048, 368870, 611956, 503490, 469729, 544662, 392348, 865422, 788226, 368171, 384498, 719415, 12033, 526150, 915726, 649527, 31552, 636364, 889703, 326066, 295277, 88613, 138812, 270674, 802359, 732603, 308350, 142927, 385878, 808607, 788739};
    vector<int> baseY = {221233, 23121, 422758, 117225, 122170, 260578, 975856, 160822, 21766, 336093, 868546, 125850, 525898, 623147, 714102, 599731, 860731, 589986, 588587, 876093, 439218, 28131, 988127, 873979, 853278, 449932, 753056, 547659, 995777, 606333, 940406, 494713, 125630, 708399, 917372, 584806, 742636, 980898, 865139, 721785};
    vector<int> siloX = {378415, 195600, 831044, 818285, 212933, 769526, 70118, 720292, 22518, 789958, 347328, 352810, 722019, 986514, 580929, 230236, 741, 692641, 165803, 866464, 191569, 775362, 238357, 304047, 558251, 590678, 751640, 159504, 570249, 184654, 211897, 402328, 276932, 685544, 767289, 326230, 86986, 883006, 548198, 296873};
    vector<int> siloY = {273351, 813209, 546308, 800337, 822433, 951600, 689899, 918154, 677849, 389703, 704934, 614684, 362250, 767596, 53582, 135299, 37106, 567929, 20071, 480977, 764657, 463958, 254211, 616750, 80265, 401872, 246286, 316054, 762844, 20781, 846750, 903612, 929892, 376874, 510210, 754020, 679794, 939992, 553295, 664400};
    int takeOffTime = 57;
    int rechargeTime = 63;
    int missileSpeed = 1;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 193796.67695237635;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> baseX = {486717, 505952, 734400, 147400, 357314, 481729, 455441, 533973, 177454, 785113, 492676, 981450, 366674, 75831, 556460, 247040, 432336, 553896, 578802, 317428, 486966, 193477, 658740, 453570, 395170, 845821, 414965, 715747, 25521};
    vector<int> baseY = {242914, 257736, 406025, 109089, 835530, 546747, 845167, 350755, 861440, 59197, 247995, 459713, 430678, 963094, 416324, 157282, 735996, 728589, 517440, 884548, 312799, 894519, 151751, 207762, 230012, 119551, 624039, 640812, 385180};
    vector<int> siloX = {553134, 5111, 847159, 755615, 47466, 4769, 179108, 664948, 131711, 225906, 106535, 915093, 779936, 598714, 433697, 815703, 533802, 759023, 622508, 682653, 766350, 176646, 289635, 139124, 280553, 167178, 431805, 171190, 236756};
    vector<int> siloY = {226951, 726835, 196342, 997978, 750418, 591869, 521963, 431769, 843736, 182084, 843630, 765389, 615592, 282672, 151738, 835461, 345635, 12517, 261452, 969734, 487129, 479348, 182092, 896245, 315815, 57245, 512891, 186172, 832265};
    int takeOffTime = 39;
    int rechargeTime = 6;
    int missileSpeed = 53;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 4677.149479105123;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> baseX = {843086, 452048, 523394, 37376, 623555, 757362, 523531, 141834, 169885, 317296, 85088, 855088, 775653, 255204, 608965, 233559};
    vector<int> baseY = {966309, 601225, 628556, 186014, 659373, 127352, 733656, 555115, 920831, 367466, 124703, 31856, 423734, 180902, 350674, 315501};
    vector<int> siloX = {907359, 812250, 577321, 206097, 289084, 509681, 12267, 815747, 525085, 984694, 202365, 514070, 760958, 877856, 320016, 28561};
    vector<int> siloY = {72504, 594107, 178071, 776316, 136749, 751466, 88254, 156110, 927148, 408058, 949731, 102192, 171612, 516049, 631833, 670916};
    int takeOffTime = 34;
    int rechargeTime = 72;
    int missileSpeed = 319;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 1004.965458496562;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> baseX = {305596, 305476, 548565, 693688, 707885, 992970, 60290, 822492, 772487, 895095, 436916, 414749};
    vector<int> baseY = {453789, 210079, 899570, 544005, 555409, 821521, 835998, 715053, 398746, 745382, 655114, 133731};
    vector<int> siloX = {594349, 458417, 273381, 536486, 330429, 736659, 828045, 717073, 369031, 987352, 587736, 700513};
    vector<int> siloY = {23129, 432278, 685765, 176157, 491905, 466789, 145011, 898966, 840310, 646027, 451775, 405861};
    int takeOffTime = 59;
    int rechargeTime = 449;
    int missileSpeed = 191;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 1366.0377270155548;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> baseX = {325467, 15829, 521871, 132700, 674124, 710532, 81538, 789423, 225544};
    vector<int> baseY = {26935, 953705, 907157, 518735, 255167, 782129, 718575, 163740, 143737};
    vector<int> siloX = {366275, 671969, 716858, 73546, 733631, 788935, 940166, 900271, 130032};
    vector<int> siloY = {127965, 262342, 998922, 995480, 282763, 119730, 565978, 861374, 341676};
    int takeOffTime = 54;
    int rechargeTime = 800;
    int missileSpeed = 87;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 3185.041472189341;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> baseX = {579759, 270885, 991547, 730415, 733147, 579184, 967199, 358823, 661611, 882274, 504523, 912801, 946579, 206254, 332989, 47075, 134424, 299852, 708562, 856732, 54438, 345773};
    vector<int> baseY = {115622, 710688, 14048, 509813, 501322, 968771, 872845, 11816, 560055, 766835, 124784, 274547, 914272, 566161, 168116, 901578, 520555, 779087, 610685, 654287, 432399, 245421};
    vector<int> siloX = {756930, 721705, 414410, 545991, 662301, 393438, 872288, 767354, 694488, 493653, 564550, 347435, 774213, 344348, 132778, 807907, 876306, 33500, 718822, 723468, 345310, 220452};
    vector<int> siloY = {289551, 822118, 710354, 716482, 660116, 202870, 105363, 896714, 48004, 731550, 851313, 689943, 845614, 163385, 602842, 878397, 940826, 661306, 657792, 899231, 862672, 370845};
    int takeOffTime = 5;
    int rechargeTime = 27;
    int missileSpeed = 4;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 60163.877786995414;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> baseX = {838230, 151532, 779014, 708392, 824280, 254213, 503697, 197033, 979399, 243748, 388667, 528471, 236416, 606851, 238522, 285605, 522014, 498038, 186185, 238773, 506629, 116032, 263096, 889314, 241448, 147679, 120373, 560643, 438398, 533659, 230250};
    vector<int> baseY = {142673, 744695, 236366, 463939, 928577, 521507, 174869, 487248, 618392, 71858, 374760, 169368, 474346, 859850, 793785, 647397, 232490, 314242, 830800, 948304, 417798, 634573, 228232, 200136, 825311, 645077, 84683, 141109, 539063, 103615, 722081};
    vector<int> siloX = {183467, 2439, 355812, 748425, 253511, 432749, 448711, 963774, 993823, 461161, 67892, 310428, 846604, 383315, 273469, 360620, 973415, 923329, 429811, 492604, 724848, 79525, 568685, 161213, 343235, 117684, 170003, 459777, 455858, 553022, 721797};
    vector<int> siloY = {613576, 990170, 708456, 401670, 582066, 564010, 601918, 132801, 594722, 858805, 883832, 203440, 207065, 428612, 538015, 818384, 935168, 54959, 24692, 753962, 454579, 20223, 364016, 215174, 686890, 404749, 656709, 649330, 558716, 332844, 56871};
    int takeOffTime = 52;
    int rechargeTime = 543;
    int missileSpeed = 209;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 935.6485576542495;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> baseX = {329411, 786037, 491537, 423409, 129586, 790319, 71490, 39966, 198389, 496747, 167568, 335166, 79541, 80911, 976321, 768472, 916813, 898061, 936971, 78162, 539942, 431935, 616524, 40706, 45106, 213823, 793802, 496499, 98503, 605690, 188960, 383031, 323172, 933136, 472742, 340191, 281629, 539345, 993508, 892142, 585752, 289661, 224870, 562953};
    vector<int> baseY = {309118, 816740, 281688, 698077, 949197, 79864, 719425, 234750, 28386, 501878, 91336, 520205, 599918, 579955, 194546, 114351, 888625, 627604, 897436, 396153, 138051, 374661, 705776, 619613, 561926, 25945, 391470, 932127, 981405, 487178, 139243, 209707, 333374, 623367, 30270, 516445, 114557, 699039, 108592, 158731, 398705, 312200, 788685, 807961};
    vector<int> siloX = {616183, 520607, 574715, 982734, 727512, 398243, 721921, 211384, 586974, 290799, 755325, 978070, 71350, 287161, 319301, 525885, 857324, 921128, 280192, 62002, 340682, 31663, 364477, 765879, 316104, 887764, 480846, 943547, 22152, 365049, 205000, 922950, 787098, 194085, 866978, 291711, 425830, 131950, 495022, 511444, 474981, 141306, 16974, 48087};
    vector<int> siloY = {79670, 622949, 79721, 129695, 755712, 540717, 345512, 522825, 463875, 519946, 292912, 628051, 650993, 476376, 906832, 294255, 435562, 69039, 782013, 590782, 125470, 707838, 41409, 805096, 425053, 652032, 85763, 441794, 993987, 216276, 386126, 686808, 798258, 15811, 833097, 794483, 124118, 549975, 801726, 709201, 6462, 135639, 167001, 290431};
    int takeOffTime = 1;
    int rechargeTime = 18;
    int missileSpeed = 43;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 3632.297220780934;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> baseX = {216552, 703683, 330869, 727686, 728663, 50870, 872345, 569649, 852556, 363360, 682199};
    vector<int> baseY = {289042, 381077, 653765, 758118, 574530, 333466, 798427, 147607, 615003, 237567, 936982};
    vector<int> siloX = {884175, 163129, 776460, 717932, 515019, 247991, 3199, 431550, 729515, 645858, 195450};
    vector<int> siloY = {652680, 606488, 332757, 600283, 309957, 343315, 61427, 790212, 959457, 700113, 294865};
    int takeOffTime = 48;
    int rechargeTime = 561;
    int missileSpeed = 24;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 7138.089523069042;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> baseX = {992587, 738736, 920728, 559672, 344177, 330881, 173542, 746889, 857177, 352558, 464950, 818755, 992693, 991758, 278187, 267879, 806798, 37357, 378350, 881722, 536734};
    vector<int> baseY = {167862, 622675, 382520, 656644, 323565, 178119, 996028, 49832, 497376, 487772, 128244, 444470, 887882, 166564, 128556, 799701, 651065, 912620, 253652, 371309, 860953};
    vector<int> siloX = {309713, 454832, 23154, 941084, 298141, 894124, 608017, 381077, 99408, 216870, 266961, 334755, 295432, 791542, 195793, 645892, 197115, 659809, 230701, 723252, 811039};
    vector<int> siloY = {18210, 168013, 402729, 205257, 676856, 685528, 968790, 440355, 376242, 931946, 476978, 119497, 545650, 396813, 297483, 823488, 584190, 311366, 923141, 827120, 806903};
    int takeOffTime = 35;
    int rechargeTime = 457;
    int missileSpeed = 774;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 519.2500739844321;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> baseX = {293336, 505136, 384560, 287737, 381550, 682350, 111341, 560344, 379634, 113713, 6053};
    vector<int> baseY = {775627, 494155, 953277, 341739, 691440, 994420, 287168, 285928, 873719, 777425, 434182};
    vector<int> siloX = {945648, 811236, 510313, 437327, 127114, 840579, 153984, 955981, 843841, 552452, 464190};
    vector<int> siloY = {109514, 930317, 14025, 316884, 973701, 533481, 353216, 182224, 357355, 584690, 376401};
    int takeOffTime = 38;
    int rechargeTime = 80;
    int missileSpeed = 234;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 1265.5533304224875;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> baseX = {837653, 445646, 322804, 900172, 331069, 179669, 38772, 926513, 478554, 129531, 878094, 847527, 737250, 255423, 985913, 620796, 579323, 733508, 757024, 539075, 157260, 20991, 854293, 324253, 503753, 810307, 49009, 380701, 664226, 260437, 648053, 249837, 369540, 622701, 123948, 167601, 871762, 750072, 333143, 29169, 292095, 539829, 356937};
    vector<int> baseY = {376783, 802457, 570461, 947974, 946969, 662874, 926677, 426205, 729174, 82230, 735060, 949360, 922457, 243841, 192216, 480118, 98254, 626759, 880344, 10556, 558179, 133504, 928, 970060, 937001, 488496, 950705, 609251, 443624, 974712, 73594, 849488, 109846, 261827, 100808, 126274, 901631, 173956, 597912, 314528, 402063, 209284, 700156};
    vector<int> siloX = {932817, 987860, 384195, 633171, 44881, 448191, 561821, 597848, 592331, 521665, 25348, 778623, 610440, 165176, 566493, 342416, 702147, 549319, 919913, 113889, 987159, 80047, 571787, 448734, 417767, 989976, 118866, 175344, 179943, 383909, 982711, 823423, 696134, 316143, 706212, 627702, 856763, 468276, 293479, 890155, 126481, 485644, 244514};
    vector<int> siloY = {886191, 272502, 725815, 996588, 613488, 375139, 779014, 124025, 491205, 217648, 138022, 277116, 203687, 899922, 631723, 760804, 574236, 174673, 797865, 110393, 292345, 641108, 56807, 256590, 425354, 615928, 319571, 885793, 878273, 113001, 805896, 285785, 486893, 161994, 422365, 549012, 121627, 966173, 234216, 151650, 543540, 158571, 953902};
    int takeOffTime = 55;
    int rechargeTime = 94;
    int missileSpeed = 100;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 1699.511178167278;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> baseX = {378062, 407997, 743645, 990415, 567402, 497423, 501373, 625361, 425804, 913082, 272883, 735291, 218552, 361135, 974054, 721879, 770781, 89697, 481334, 276679, 783628, 207898, 321273, 429388, 185613, 806365, 49800, 788399};
    vector<int> baseY = {835692, 834865, 420165, 191846, 288687, 460455, 528961, 732680, 393631, 966768, 182483, 520430, 9277, 615406, 501044, 381822, 992942, 365670, 215277, 168904, 136020, 689263, 714381, 937275, 63611, 924362, 286926, 803703};
    vector<int> siloX = {924176, 160870, 24801, 81388, 620497, 230596, 962869, 622110, 924784, 460604, 638858, 332786, 850776, 598393, 886656, 448789, 159723, 299977, 176246, 29975, 80056, 123284, 163550, 145043, 736659, 801439, 518158, 417438};
    vector<int> siloY = {161076, 863538, 408812, 234944, 803622, 294607, 519195, 595244, 55862, 118034, 76670, 767336, 45246, 127918, 132780, 442515, 898312, 813317, 372457, 484988, 918345, 341745, 521665, 24426, 890245, 580779, 234526, 825270};
    int takeOffTime = 25;
    int rechargeTime = 542;
    int missileSpeed = 1092;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 315.08544924794717;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> baseX = {362616, 459855, 680074, 808126, 384518, 699890};
    vector<int> baseY = {765714, 496654, 113669, 270375, 724827, 783914};
    vector<int> siloX = {170825, 153990, 559801, 193132, 519929, 372443};
    vector<int> siloY = {28844, 399817, 663080, 412342, 566911, 140787};
    int takeOffTime = 9;
    int rechargeTime = 267;
    int missileSpeed = 1665;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 310.21922868221634;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> baseX = {680463, 424769, 154957, 732864, 439747, 922756, 988370, 331500, 674728, 210965, 226252, 217154, 472387, 9357, 110137, 465184, 458484, 657679, 69171, 249877, 399985, 886536, 638752, 206059, 195974, 464958, 876023, 843969, 657705, 43788, 617018, 622449, 754084, 121753, 267771, 19511, 236334, 604433, 644586, 58735, 873348, 818661, 387826, 150149, 208594, 178802, 371927, 149582};
    vector<int> baseY = {303816, 269112, 367448, 281742, 667134, 749295, 965271, 92704, 150194, 387190, 250542, 994123, 759341, 713134, 17827, 84878, 326146, 490722, 246138, 41716, 921674, 382457, 198791, 137882, 75288, 468026, 633376, 816769, 940371, 63905, 313907, 835905, 641556, 618143, 526718, 838267, 228351, 70815, 200353, 27237, 634150, 187979, 446761, 214771, 863869, 736874, 203607, 857718};
    vector<int> siloX = {191835, 437941, 131592, 669086, 720821, 750000, 628249, 836061, 361576, 265408, 548533, 955302, 508035, 812305, 903271, 940909, 348836, 722278, 761122, 259787, 185455, 181035, 330592, 617281, 289486, 615090, 251652, 722041, 306122, 182482, 395023, 771279, 185039, 240461, 159008, 227329, 533425, 211792, 273144, 489903, 477415, 307450, 798858, 549339, 94063, 366348, 200407, 604552};
    vector<int> siloY = {594507, 43941, 8082, 568706, 128985, 79045, 318326, 634827, 979808, 440025, 926952, 401522, 899355, 922870, 482696, 48047, 83212, 340183, 805402, 951263, 641481, 155697, 300628, 117652, 521280, 57367, 743083, 153262, 462172, 542599, 784922, 66099, 532898, 620361, 975180, 400262, 348356, 270407, 44942, 42546, 14102, 25050, 557181, 171823, 60198, 443589, 127142, 159243};
    int takeOffTime = 56;
    int rechargeTime = 711;
    int missileSpeed = 1309;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 168.3836078233557;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> baseX = {681267, 894444, 428993, 971023, 318424, 643670, 638942, 779090, 238451, 959208, 90870, 963544, 834488, 385787};
    vector<int> baseY = {458500, 785266, 588686, 49524, 297337, 105718, 927946, 844655, 469687, 455258, 165377, 873041, 949980, 448989};
    vector<int> siloX = {737547, 108121, 489415, 290091, 797796, 413349, 148163, 513957, 660601, 842403, 352283, 368742, 218071, 171136};
    vector<int> siloY = {9091, 541213, 685590, 545844, 343559, 638451, 271556, 253253, 181942, 542092, 507383, 642223, 178224, 684989};
    int takeOffTime = 14;
    int rechargeTime = 92;
    int missileSpeed = 596;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 684.7380102009181;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> baseX = {304344, 980098, 774453, 537959, 739391, 228567, 477320, 36621, 634570, 269931, 74667, 948438, 253826, 284338, 908264, 516031, 306933, 895935, 768997, 128090, 601864, 556107, 485495, 877742, 265319, 931135, 5955, 150663, 636482, 983620, 634026, 830973, 286010, 252524, 522083, 55517, 896946, 471270, 636585, 936423, 990248, 747230};
    vector<int> baseY = {599995, 526613, 646777, 67773, 901963, 407348, 978100, 82349, 621551, 828953, 204939, 367359, 433730, 777676, 850494, 37148, 422601, 219000, 813129, 829529, 822563, 711097, 965078, 791372, 134377, 831297, 835248, 268250, 251209, 924948, 265405, 396462, 976572, 959231, 348328, 601951, 454672, 850065, 523201, 401706, 179614, 947606};
    vector<int> siloX = {682633, 883684, 391051, 553529, 825001, 216038, 379635, 816120, 401994, 395043, 304390, 312473, 425523, 742619, 189341, 96959, 370779, 555385, 715898, 975905, 996334, 745861, 726563, 273106, 145506, 335888, 513960, 502545, 50382, 721240, 424861, 41860, 322893, 669542, 273640, 234593, 732462, 162812, 846395, 864197, 720497, 294417};
    vector<int> siloY = {864234, 200148, 373645, 864242, 587987, 129160, 988839, 532432, 825429, 551455, 780092, 772135, 958305, 439598, 633474, 444384, 27877, 587744, 449603, 725766, 715892, 370435, 363945, 587692, 969847, 355748, 897153, 915821, 19819, 52977, 441393, 859874, 919194, 726764, 712248, 231038, 380376, 949849, 272847, 909325, 981054, 439248};
    int takeOffTime = 3;
    int rechargeTime = 66;
    int missileSpeed = 1649;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 111.55834417397267;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> baseX = {192662, 756946, 720283, 951048, 326697, 620637, 117516, 359675, 909148, 574910, 454935, 41645, 50938, 193828, 615688, 591152, 857264, 482564, 443139, 165580, 760887, 343247, 85453, 463166, 953884, 560763, 568521, 8552, 660651, 513955, 380709, 746199, 581242, 984415, 45755, 482769, 926396, 530450, 630530, 24592, 34728, 834368, 367799, 278871, 217577, 635872, 464739, 256777};
    vector<int> baseY = {362056, 240011, 693435, 169429, 448070, 148787, 307124, 264552, 805413, 744844, 668655, 916751, 56153, 830168, 239369, 846531, 390251, 63049, 140136, 541974, 746768, 334, 842029, 674458, 262936, 747973, 522341, 429486, 544507, 491987, 135551, 972056, 990784, 418168, 869111, 570029, 941683, 131428, 506117, 971830, 649634, 681361, 325446, 738449, 165108, 955619, 147053, 502181};
    vector<int> siloX = {739966, 737972, 265740, 166802, 299169, 488651, 938614, 631904, 78333, 722449, 821450, 282663, 434693, 51334, 383158, 827087, 112368, 745117, 645431, 375468, 482900, 721855, 430002, 93490, 469484, 136560, 893945, 704779, 160378, 889904, 367524, 83592, 457487, 941802, 571861, 782079, 972712, 936057, 176091, 655734, 566916, 801439, 415628, 80733, 428488, 658225, 785035, 215844};
    vector<int> siloY = {288538, 231216, 726197, 384336, 701743, 419608, 52304, 331552, 490743, 460082, 101966, 736547, 17160, 62571, 888817, 444392, 980224, 414036, 6886, 82964, 72511, 868560, 114295, 601722, 867773, 349276, 610240, 146629, 854769, 525259, 646764, 308133, 610777, 197729, 196806, 928017, 202056, 270504, 458349, 896645, 166279, 353764, 517460, 610045, 832655, 471299, 785412, 534257};
    int takeOffTime = 47;
    int rechargeTime = 74;
    int missileSpeed = 1333;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 141.71553746068773;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> baseX = {26890, 992906};
    vector<int> baseY = {890546, 65917};
    vector<int> siloX = {16401, 381716};
    vector<int> siloY = {26703, 865119};
    int takeOffTime = 7;
    int rechargeTime = 108;
    int missileSpeed = 1783;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 548.2333525528886;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> baseX = {505704, 448047, 205622, 399744, 922289, 657913, 309287, 20004, 47448, 354431, 538887, 343015, 514195, 798469, 112845, 993903, 841618, 218970, 290470, 200522};
    vector<int> baseY = {614659, 888412, 232338, 814961, 902543, 632727, 572942, 212145, 1192, 603049, 420959, 290361, 989977, 275156, 615204, 476232, 988350, 560705, 743870, 341445};
    vector<int> siloX = {834882, 928360, 231439, 294293, 431706, 950076, 180083, 934156, 962749, 571816, 292760, 505102, 305606, 340371, 433018, 432140, 813087, 954910, 561883, 229405};
    vector<int> siloY = {537458, 100906, 380603, 702470, 582146, 341939, 83545, 990339, 507229, 348478, 320680, 651635, 727586, 608252, 800192, 561658, 705581, 929248, 469786, 982130};
    int takeOffTime = 52;
    int rechargeTime = 293;
    int missileSpeed = 1369;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 241.6690863562487;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> baseX = {523472, 202369, 847375, 163248, 941873, 321710, 190103, 826834, 96973, 392942, 856789, 45468, 672892, 693140, 591472, 833941, 860289, 657074, 345287, 273251, 856827, 492628, 690390, 548169, 671626, 667038, 536380, 589999, 169049, 24625, 500609, 526030, 697921, 590073, 992312, 213212, 193153, 581562, 504913, 436737, 551133, 19468};
    vector<int> baseY = {181319, 986022, 111699, 124563, 419474, 331851, 450187, 973661, 451529, 894989, 370858, 500701, 237777, 124059, 798750, 973955, 451426, 206001, 518903, 911454, 786434, 8083, 475163, 863868, 438430, 157889, 865922, 572028, 297250, 947902, 262347, 626299, 587284, 303252, 205016, 747492, 977422, 228531, 241034, 72128, 351991, 861306};
    vector<int> siloX = {372660, 583775, 785147, 344945, 254640, 551577, 63695, 962423, 661450, 389075, 522003, 260999, 870362, 537107, 26813, 91410, 85639, 318895, 651569, 873209, 932178, 568862, 940801, 245718, 341201, 578710, 33487, 683816, 769504, 225313, 580087, 920124, 382252, 449248, 700497, 446724, 343598, 845406, 311636, 210931, 492659, 898903};
    vector<int> siloY = {365395, 944360, 500508, 144720, 937276, 887938, 216937, 16996, 995708, 693368, 923157, 769132, 650279, 845535, 163882, 739856, 751016, 386376, 507751, 710000, 67948, 598178, 754034, 709756, 163207, 472076, 374423, 225825, 385986, 744502, 640113, 472549, 132430, 731058, 541226, 119497, 192902, 542301, 776095, 662087, 190700, 290830};
    int takeOffTime = 20;
    int rechargeTime = 431;
    int missileSpeed = 1587;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 154.40283176603532;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> baseX = {520482};
    vector<int> baseY = {510279};
    vector<int> siloX = {340428};
    vector<int> siloY = {614305};
    int takeOffTime = 43;
    int rechargeTime = 163;
    int missileSpeed = 742;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 280.96511322087883;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> baseX = {819332, 636672, 730468, 541976, 62891, 671534, 22834, 187185, 880011, 924247, 307891, 133178, 563941, 879536};
    vector<int> baseY = {975062, 143566, 159019, 276660, 891366, 935174, 294916, 815803, 622170, 529439, 813880, 337474, 447521, 984814};
    vector<int> siloX = {180859, 306882, 632909, 150319, 555032, 796830, 635021, 454035, 412943, 368939, 504189, 147152, 319435, 552433};
    vector<int> siloY = {182906, 636065, 114288, 69731, 260362, 438205, 238267, 678981, 675051, 198246, 128345, 413940, 593482, 378595};
    int takeOffTime = 54;
    int rechargeTime = 804;
    int missileSpeed = 1995;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 263.5609102993538;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> baseX = {127814, 782880, 174597, 669681, 472090, 499247, 96966, 306920, 946096, 305767, 253140, 254290, 647106, 207839, 445276, 312108, 431065, 69108, 925030, 941, 446593, 18904, 608011, 738933, 992921, 895199, 760456, 151742, 160371, 965426, 960379, 861747, 669818, 842310};
    vector<int> baseY = {689822, 662773, 429397, 968151, 953829, 316818, 428781, 819375, 117594, 794157, 109467, 104377, 552979, 163276, 713215, 344087, 120474, 428536, 762483, 91186, 387124, 849082, 636696, 554416, 911242, 278518, 310385, 481251, 996926, 304400, 698805, 469800, 576303, 945871};
    vector<int> siloX = {290559, 695072, 923909, 377377, 336835, 161050, 150317, 105920, 584963, 832359, 870327, 161605, 686177, 55408, 119349, 509820, 518123, 871077, 462594, 818718, 750912, 873770, 909552, 752925, 365982, 335693, 856005, 764143, 615398, 936203, 919626, 884750, 474103, 197015};
    vector<int> siloY = {930346, 149885, 820022, 414494, 697085, 452039, 871890, 351700, 33001, 443350, 208226, 839250, 170680, 780964, 183303, 999163, 250567, 622002, 401816, 377753, 713542, 273229, 959891, 271288, 190724, 609570, 96482, 939219, 988394, 744917, 383732, 1661, 32893, 294305};
    int takeOffTime = 55;
    int rechargeTime = 708;
    int missileSpeed = 1331;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 226.99561754150707;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> baseX = {137013, 735823, 341868, 187509, 898875, 837981, 59235, 312992, 186061, 325924, 70181, 524660, 670979, 770546, 62838, 208172, 450426, 413977, 409352, 643516, 482475, 739125, 355560, 383899, 291948, 872165, 969352, 230864, 616401, 972202, 556718, 591952, 986916, 33954, 524160, 524202, 677197, 439399, 252453, 926991, 364679, 725800, 505096, 49509, 871135, 931284, 30206, 695961};
    vector<int> baseY = {341168, 588077, 956235, 429057, 633457, 378785, 272761, 944454, 661438, 749963, 217852, 112510, 5570, 510998, 771287, 489417, 906552, 417734, 222263, 737790, 526868, 111101, 235462, 712025, 593749, 594275, 926924, 868400, 676670, 580340, 401285, 320933, 132154, 639638, 881089, 913038, 499915, 775863, 188242, 316827, 697843, 462576, 272311, 958199, 568565, 520834, 659191, 619644};
    vector<int> siloX = {892265, 975545, 26524, 556271, 262143, 370184, 65795, 509242, 967176, 183361, 263727, 560428, 34496, 80138, 690817, 464414, 530410, 764479, 918456, 577514, 661023, 425808, 812275, 466164, 259601, 449390, 412021, 172541, 930143, 46209, 247711, 179679, 535282, 296184, 692354, 325445, 925469, 125535, 783724, 40810, 798421, 284894, 22592, 398391, 198187, 301887, 190100, 427599};
    vector<int> siloY = {699010, 555212, 19365, 557941, 31179, 347985, 57838, 731871, 889452, 573075, 133359, 111748, 30157, 360914, 925395, 411657, 427814, 740827, 430227, 142504, 584488, 389738, 687325, 70820, 627817, 608631, 910602, 419986, 602870, 882346, 591353, 178383, 94479, 973438, 36555, 677600, 254923, 653342, 952220, 810029, 266614, 347691, 272222, 241553, 912290, 116645, 486059, 422454};
    int takeOffTime = 25;
    int rechargeTime = 813;
    int missileSpeed = 60;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 2809.1986556058027;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> baseX = {242382, 937345, 858773, 583381, 805250, 124734, 509662, 625265, 580640, 907407, 14562, 313364, 49305, 950116, 298134, 617778, 232242, 267608, 630407, 633491, 467718, 21269, 804501, 137778, 325507, 221123, 551407, 213928, 777517, 869617, 854969};
    vector<int> baseY = {2858, 653799, 815557, 920034, 524912, 715586, 938453, 54529, 965179, 711350, 815478, 708386, 674182, 656561, 462347, 329221, 122926, 624618, 901726, 205944, 894532, 167019, 414695, 774311, 371209, 365592, 959015, 430056, 522372, 376372, 967060};
    vector<int> siloX = {411555, 712536, 96852, 899467, 362143, 431614, 814350, 462707, 798846, 886453, 360494, 216192, 186739, 147670, 621301, 291072, 838737, 723525, 473082, 192831, 737299, 265154, 748324, 891665, 214045, 274695, 904224, 831266, 740579, 240440, 285073};
    vector<int> siloY = {772004, 5832, 758858, 688509, 22334, 438614, 926068, 459325, 906297, 495115, 239198, 256290, 399317, 425034, 85100, 199683, 104160, 924657, 908873, 653619, 273352, 641485, 533205, 472812, 459512, 913788, 518980, 614243, 376732, 964210, 314524};
    int takeOffTime = 5;
    int rechargeTime = 807;
    int missileSpeed = 1099;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 243.90493851124967;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> baseX = {164789, 549770, 850040, 937475, 323549, 562483, 54029, 516141, 796807, 799933, 730827, 787073, 883684, 119843, 810171, 356054, 717940, 317711, 519307, 528408, 46579, 775727, 99671};
    vector<int> baseY = {960207, 732624, 106799, 693031, 49681, 210965, 644345, 272419, 380837, 61041, 643788, 96790, 643303, 979789, 121715, 831405, 559799, 761475, 140602, 445374, 505017, 921159, 994533};
    vector<int> siloX = {973709, 67246, 405862, 783476, 964602, 329284, 231730, 206155, 307572, 782427, 579948, 940626, 827481, 637690, 322984, 837272, 903839, 57172, 666481, 823906, 389479, 791602, 752227};
    vector<int> siloY = {880401, 93883, 603415, 98585, 479445, 565566, 885534, 674829, 753143, 48527, 681675, 465783, 336179, 84562, 119298, 596606, 219885, 690571, 876399, 985833, 125481, 660509, 966591};
    int takeOffTime = 8;
    int rechargeTime = 16;
    int missileSpeed = 1290;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 155.16139458630397;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> baseX = {2921, 769002, 350771, 589120, 294691, 586671, 178446, 279736, 823621, 544239, 880135, 933785, 418145, 549621, 317139, 521338, 162417, 254703, 752710, 916427, 256078, 727157, 845837, 988074, 193604, 87224, 993864, 926837, 215937, 792491, 872126, 508851, 296903};
    vector<int> baseY = {650386, 937783, 964570, 260854, 433436, 448353, 913409, 355466, 450032, 11885, 574813, 443401, 829814, 777577, 245436, 140679, 935392, 121296, 552674, 27340, 879059, 685212, 311174, 852349, 174710, 687253, 883712, 615328, 178318, 715849, 748080, 954186, 149154};
    vector<int> siloX = {851389, 745358, 789933, 872240, 370342, 568768, 427895, 823647, 694645, 255543, 147129, 349154, 155886, 268556, 38999, 584769, 92067, 902484, 697128, 363863, 553558, 264075, 552779, 23784, 335064, 620616, 875416, 152987, 300996, 505454, 855118, 740279, 817545};
    vector<int> siloY = {365508, 659369, 964719, 797038, 989291, 289870, 304171, 110162, 394439, 593574, 47854, 580224, 920715, 222652, 937841, 264502, 277363, 583336, 986893, 346150, 293408, 766206, 23751, 429303, 667733, 973577, 362679, 435977, 260873, 573533, 653580, 476224, 184291};
    int takeOffTime = 18;
    int rechargeTime = 934;
    int missileSpeed = 1870;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 138.77575376999062;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> baseX = {711314, 925288, 316072, 204783, 720080, 360202, 189557, 726713, 958654, 941872, 995215, 591350, 347675, 29448, 683077, 815462, 159746, 419259, 710420, 519183, 505609, 600052, 101278};
    vector<int> baseY = {779667, 569765, 574789, 416704, 893471, 500671, 914545, 862392, 979464, 494109, 456207, 868809, 165708, 278967, 782932, 245244, 840661, 273575, 693500, 464022, 96465, 380163, 125993};
    vector<int> siloX = {211029, 764377, 220500, 973108, 10202, 694708, 940958, 193090, 696877, 780798, 947347, 743593, 888852, 38356, 316436, 602304, 395052, 299779, 591724, 23294, 355634, 834694, 572396};
    vector<int> siloY = {445756, 103036, 248801, 22049, 909619, 31846, 482342, 592812, 858249, 620217, 252593, 667049, 259822, 705966, 300925, 359323, 567866, 757556, 576539, 3433, 607061, 182238, 737781};
    int takeOffTime = 42;
    int rechargeTime = 590;
    int missileSpeed = 913;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 353.5842294438623;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> baseX = {727193, 427028, 160427, 546749, 88076, 517770, 792074, 566189, 724367, 519365, 972836, 85588, 828132, 8125, 451912, 761429, 380419, 844362, 426992};
    vector<int> baseY = {379961, 529952, 72112, 828648, 609788, 408057, 89340, 317730, 310915, 313200, 628837, 767266, 124245, 455715, 359492, 931515, 950307, 115631, 573469};
    vector<int> siloX = {146698, 276671, 871305, 881720, 909729, 756075, 116678, 295673, 573096, 989562, 922462, 140496, 791809, 131609, 848452, 502692, 929433, 641180, 150670};
    vector<int> siloY = {335910, 913492, 142772, 657387, 356029, 602965, 603829, 394157, 338714, 316518, 577881, 515650, 953372, 914306, 638050, 579051, 405329, 463084, 458011};
    int takeOffTime = 16;
    int rechargeTime = 98;
    int missileSpeed = 1715;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 160.6011263316034;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> baseX = {502772, 782910, 871636, 148385, 455632, 690236, 668932, 549431, 391283, 719426, 679910, 47448, 631301, 198713, 151596, 407630, 898889, 71373, 841560, 803056, 33970, 466085, 863268, 586792, 266801, 494617};
    vector<int> baseY = {463437, 581202, 405390, 375644, 516010, 830137, 520166, 943884, 956938, 404092, 318, 438872, 67325, 359548, 890577, 573379, 454836, 970988, 830160, 445354, 229839, 306248, 665648, 979732, 598625, 873914};
    vector<int> siloX = {355743, 651697, 195928, 853632, 928221, 937790, 928647, 213419, 6441, 349994, 705726, 799832, 140388, 160263, 833618, 501964, 238738, 433730, 911724, 233006, 375474, 50210, 220263, 417415, 321826, 697436};
    vector<int> siloY = {903084, 245954, 67031, 892129, 189261, 772735, 557953, 728980, 699090, 988242, 533958, 530394, 693889, 298270, 976022, 593650, 280277, 174746, 627103, 567270, 47157, 553118, 836346, 409467, 992470, 126883};
    int takeOffTime = 36;
    int rechargeTime = 733;
    int missileSpeed = 176;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 1346.9117387065023;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> baseX = {33693, 16643, 47256, 34201, 52917};
    vector<int> baseY = {37850, 34293, 50201, 74951, 63057};
    vector<int> siloX = {37005};
    vector<int> siloY = {52448};
    int takeOffTime = 31;
    int rechargeTime = 235;
    int missileSpeed = 12;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 2273.8754595959504;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> baseX = {16643};
    vector<int> baseY = {34293};
    vector<int> siloX = {37005};
    vector<int> siloY = {52448};
    int takeOffTime = 31;
    int rechargeTime = 235;
    int missileSpeed = 12;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 2273.8754595959504;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> baseX = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    vector<int> baseY = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> siloX = {999951, 999952, 999953, 999954, 999955, 999956, 999957, 999958, 999959, 999960, 999961, 999962, 999963, 999964, 999965, 999966, 999967, 999968, 999969, 999970, 999971, 999972, 999973, 999974, 999975, 999976, 999977, 999978, 999979, 999980, 999981, 999982, 999983, 999984, 999985, 999986, 999987, 999988, 999989, 999990, 999991, 999992, 999993, 999994, 999995, 999996, 999997, 999998, 999999, 1000000};
    vector<int> siloY = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    int takeOffTime = 60;
    int rechargeTime = 1000;
    int missileSpeed = 1;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 1414179.9145652682;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> baseX = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> baseY = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    vector<int> siloX = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> siloY = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    int takeOffTime = 56;
    int rechargeTime = 6;
    int missileSpeed = 1;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 36.28867239266071;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> baseX = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> baseY = {0, 10000, 20000, 30000, 40000, 50000, 60000, 70000, 80000, 90000, 100000, 110000, 120000, 130000, 140000, 150000, 160000, 170000, 180000, 190000, 200000, 210000, 220000, 230000, 240000, 250000, 260000, 270000, 280000, 290000, 300000, 310000, 320000, 330000, 340000, 350000, 360000, 370000, 380000, 390000, 400000, 410000, 420000, 430000, 440000, 450000, 460000, 470000, 480000, 490000};
    vector<int> siloX = {10000, 20000, 30000, 40000, 50000, 60000, 70000, 80000, 90000, 100000, 110000, 120000, 130000, 140000, 150000, 160000, 170000, 180000, 190000, 200000, 210000, 220000, 230000, 240000, 250000, 260000, 270000, 280000, 290000, 300000, 310000, 320000, 330000, 340000, 350000, 360000, 370000, 380000, 390000, 400000, 410000, 420000, 430000, 440000, 450000, 460000, 470000, 480000, 490000, 500000};
    vector<int> siloY = {0, 10000, 20000, 30000, 40000, 50000, 60000, 70000, 80000, 90000, 100000, 110000, 120000, 130000, 140000, 150000, 160000, 170000, 180000, 190000, 200000, 210000, 220000, 230000, 240000, 250000, 260000, 270000, 280000, 290000, 300000, 310000, 320000, 330000, 340000, 350000, 360000, 370000, 380000, 390000, 400000, 410000, 420000, 430000, 440000, 450000, 460000, 470000, 480000, 490000};
    int takeOffTime = 56;
    int rechargeTime = 7;
    int missileSpeed = 2000;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 177.7100286299702;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> baseX = {999999};
    vector<int> baseY = {999999};
    vector<int> siloX = {999999};
    vector<int> siloY = {1000000};
    int takeOffTime = 1;
    int rechargeTime = 5;
    int missileSpeed = 2000;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.017166666666666667;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> baseX = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> baseY = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    vector<int> siloX = {50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    vector<int> siloY = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int takeOffTime = 10;
    int rechargeTime = 10;
    int missileSpeed = 10;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 100000.16666666667;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> baseX = {171360, 314154, 46022, 37621, 263667, 309383, 385632, 125561, 268855, 307842, 91618, 346051, 12275, 413879, 118093, 388190, 224842, 269784, 223502, 363084, 187509, 188115, 251996, 402451, 42472, 5346, 261527, 25882, 243799, 159277, 425254, 68828, 395947, 108486, 16134, 78046, 79261, 197215, 97690, 157960, 92029, 376197, 290321, 8842, 63897, 278109, 19795, 281411, 403122, 395745};
    vector<int> baseY = {24874, 142363, 121929, 253715, 327676, 242490, 228515, 284630, 162986, 136315, 254816, 244329, 223538, 389671, 366103, 204826, 284057, 111503, 181039, 330378, 360742, 326725, 158212, 267039, 179687, 100303, 384956, 326558, 362892, 262479, 155516, 340038, 376278, 211647, 178595, 2006, 295906, 318184, 222087, 188760, 410358, 408293, 218855, 225910, 171886, 47714, 109299, 263932, 377905, 229027};
    vector<int> siloX = {81610, 62762, 235660, 306185, 92396, 410304, 422853, 46834, 361885, 170785, 160188, 370828, 329907, 254259, 120565, 255981, 234377, 365788, 186810, 253509, 105634, 99645, 302115, 396122, 369548, 23333, 279933, 378416, 181783, 230224, 420990, 231261, 228641, 279318, 356947, 329693, 24623, 225591, 224066, 206226, 168990, 323648, 201933, 378800, 14971, 36117, 253734, 362838, 409698, 242694};
    vector<int> siloY = {138405, 159697, 211133, 104349, 269172, 210714, 174596, 349481, 228058, 50538, 35432, 68641, 254787, 87817, 159564, 266132, 147055, 5866, 398862, 323640, 270505, 321339, 48302, 16654, 417501, 354876, 91286, 203903, 417464, 285741, 63371, 372568, 235726, 188313, 290995, 51042, 369463, 163888, 51159, 90529, 218486, 221805, 28645, 18134, 287370, 406552, 331316, 407628, 47385, 51135};
    int takeOffTime = 8;
    int rechargeTime = 876;
    int missileSpeed = 951;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 163.78881505371083;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> baseX = {2552, 62558, 94614, 141896, 275789, 194735, 101821, 168065, 275680, 82156, 313234, 842, 243257, 217431, 317091, 1711, 188587, 114882, 86131, 302378, 113007, 64339, 311605, 329335, 282452, 264335, 226071, 101629, 189661, 254850, 286145, 242341, 331387, 193318, 196607, 98640, 255075, 325517, 16069, 239862, 138541, 31428, 316762, 85338, 50628, 88766, 328971, 307166, 121520, 307882};
    vector<int> baseY = {133406, 242643, 331423, 213394, 134084, 325036, 118259, 253540, 240605, 213158, 33625, 251745, 690, 112856, 271180, 217017, 8636, 145660, 138245, 296381, 234308, 110841, 327347, 242574, 61492, 255882, 299052, 322027, 44003, 65068, 99953, 326498, 40062, 27035, 301329, 122485, 25855, 280353, 243062, 267249, 20771, 178301, 227932, 180820, 10318, 128105, 141781, 54520, 187784, 197141};
    vector<int> siloX = {268739, 169567, 87643, 161803, 250331, 279823, 141207, 217089, 8408, 44741, 252684, 205481, 211792, 239167, 110604, 296708, 220044, 286232, 269687, 262723, 56666, 240397, 152920, 177211, 63725, 165127, 733, 192812, 63132, 176671, 124091, 115997, 216265, 67539, 45558, 261, 45499, 97200, 125501, 110020, 77822, 2530, 129848, 119237, 87325, 187284, 288277, 97003, 202871, 162889};
    vector<int> siloY = {2855, 111142, 117385, 198631, 208062, 155294, 224506, 155047, 307798, 292591, 55886, 120878, 139463, 155106, 184380, 39884, 116191, 70693, 208037, 132131, 105463, 135942, 268992, 105913, 176910, 243707, 42859, 74037, 89873, 44669, 113945, 29529, 150913, 74220, 67597, 6246, 146429, 42500, 194315, 173027, 81536, 45031, 131153, 117093, 8174, 73665, 110469, 118852, 65418, 57588};
    int takeOffTime = 34;
    int rechargeTime = 718;
    int missileSpeed = 1791;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 78.62618063880096;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> baseX = {0, 10000, 20000, 30000, 40000, 50000, 60000, 70000, 80000, 90000, 100000, 110000, 120000, 130000, 140000, 150000, 160000, 170000, 180000, 190000, 200000, 210000, 220000, 230000, 240000, 250000, 260000, 270000, 280000, 290000, 300000, 310000, 320000, 330000, 340000, 350000, 360000, 370000, 380000, 390000, 400000, 410000, 420000, 430000, 440000, 450000, 460000, 470000, 480000, 490000};
    vector<int> baseY = {0, 10000, 20000, 30000, 40000, 50000, 60000, 70000, 80000, 90000, 100000, 110000, 120000, 130000, 140000, 150000, 160000, 170000, 180000, 190000, 200000, 210000, 220000, 230000, 240000, 250000, 260000, 270000, 280000, 290000, 300000, 310000, 320000, 330000, 340000, 350000, 360000, 370000, 380000, 390000, 400000, 410000, 420000, 430000, 440000, 450000, 460000, 470000, 480000, 490000};
    vector<int> siloX = {750000, 760000, 770000, 780000, 790000, 800000, 810000, 820000, 830000, 840000, 850000, 860000, 870000, 880000, 890000, 900000, 910000, 920000, 930000, 940000, 950000, 960000, 970000, 980000, 990000};
    vector<int> siloY = {750000, 760000, 770000, 780000, 790000, 800000, 810000, 820000, 830000, 840000, 850000, 860000, 870000, 880000, 890000, 900000, 910000, 920000, 930000, 940000, 950000, 960000, 970000, 980000, 990000};
    int takeOffTime = 6;
    int rechargeTime = 1000;
    int missileSpeed = 1;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 1060660.2717798215;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> baseX = {1000000, 94, 87, 13, 19, 84, 73, 84, 100, 12, 50, 82, 7, 61, 21, 92, 97, 40, 19, 59, 37, 55, 84, 9, 17, 59, 73, 69, 54, 18, 73, 11, 55, 69, 51, 47, 10, 85, 76, 21, 76, 98, 34, 59, 61};
    vector<int> baseY = {1000000, 60, 55, 50, 66, 67, 56, 47, 69, 65, 84, 51, 19, 80, 75, 58, 64, 75, 95, 91, 96, 88, 70, 23, 48, 1, 90, 85, 67, 51, 43, 9, 9, 16, 37, 66, 74, 70, 41, 14, 47, 20, 1, 96, 70};
    vector<int> siloX = {42, 29, 2, 31, 85, 4, 7, 94};
    vector<int> siloY = {15, 38, 55, 30, 18, 68, 33, 65};
    int takeOffTime = 24;
    int rechargeTime = 699;
    int missileSpeed = 1050;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 3497.412526615655;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> baseX = {262885, 716386, 420304, 942331, 856128, 39965, 219815, 954345, 291690, 101022, 483877, 749529, 95467, 897609, 731531, 921655, 920989, 326174, 684830, 730601, 25706, 545917, 172474, 716087, 230605, 698398, 988464, 936260, 850475, 317758, 636275, 281582, 174722, 58135, 345522, 947229, 557151, 915868, 257776, 944932, 701080, 391290, 379787, 219925, 582748, 13155, 39968, 334566, 246411, 68496};
    vector<int> baseY = {341078, 806370, 86232, 796735, 174358, 126319, 656372, 403241, 825605, 975587, 358599, 994071, 42338, 505414, 104722, 434358, 346341, 576212, 693156, 130471, 956680, 673156, 346119, 280177, 464266, 678433, 627401, 777534, 353240, 734188, 123205, 841788, 721439, 865256, 861359, 572801, 291218, 837368, 684685, 928458, 392123, 989609, 52815, 94270, 444528, 998434, 969566, 396831, 849051, 273822};
    vector<int> siloX = {962822, 909250, 432586, 210062, 194452, 276226, 774505, 201864, 841357, 240412, 899910, 922421, 307422, 240895, 625503, 674182, 675783, 184878, 373006, 701355, 771448, 302118, 339876, 413109, 775792, 546842, 619498, 841173, 602026, 768195, 111840, 743428, 694894, 520121, 373283, 943171, 14856, 484766};
    vector<int> siloY = {939840, 348499, 758674, 818782, 411969, 415815, 304424, 279411, 381750, 434280, 371893, 634608, 800723, 990950, 549991, 920165, 462135, 696830, 504273, 48167, 959502, 599263, 429872, 891625, 125438, 400364, 340908, 394843, 259298, 652973, 484902, 227592, 41795, 13576, 536718, 18063, 135287, 463012};
    int takeOffTime = 25;
    int rechargeTime = 1000;
    int missileSpeed = 2000;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 1024.4842432629746;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> baseX = {498832, 425949, 239754, 152451, 133240, 141718, 671625, 26215, 293683, 835695, 902957, 643943, 560086, 191192, 476931, 944979, 933497, 158511, 447672, 773221, 163211, 151551, 916867, 683243, 789975, 521574, 555531, 120029, 101253, 675638, 466066, 948716, 912730, 504796, 301928, 82288, 652648, 87674, 762768, 257895, 95087, 555026, 496919, 584451, 512583, 562209, 246491, 364092, 379476, 537260};
    vector<int> baseY = {633265, 5378, 455997, 315208, 74049, 123490, 97546, 588428, 142868, 973688, 196939, 639206, 505777, 599569, 943140, 826632, 967748, 671522, 537447, 611188, 122794, 478323, 423465, 120192, 141255, 748713, 582804, 811015, 341942, 404932, 199736, 483634, 903755, 991633, 435674, 551956, 513445, 234875, 112373, 373333, 890985, 133206, 628518, 983244, 197447, 431326, 692160, 627280, 649438, 666884};
    vector<int> siloX = {590737, 174849, 448800, 97814, 421757, 800869, 878681, 600211, 830968, 879974, 535619, 590086, 499869, 641347, 679168, 781547, 170638, 423091, 770443, 607204, 513243, 554449, 477712, 728836, 560476, 805974, 738543, 553916, 577305, 989388, 123751, 281361, 525016, 110970, 693486, 742136, 159584, 559764, 886702, 701861, 801801, 935284, 970811, 455393, 958059, 271004, 51103, 351215, 998570, 168780};
    vector<int> siloY = {226958, 131624, 792360, 399292, 303476, 247906, 774785, 34132, 662279, 331776, 290246, 459041, 858933, 146397, 75760, 831991, 339579, 834385, 638480, 196654, 460788, 905042, 352869, 515127, 154019, 456847, 666648, 375803, 315912, 185136, 976804, 444102, 415943, 349768, 396406, 297194, 688517, 331013, 529880, 126032, 113379, 181326, 253739, 560851, 233900, 365362, 285397, 1246, 283167, 141758};
    int takeOffTime = 10;
    int rechargeTime = 200;
    int missileSpeed = 1646;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 176.28228322762425;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> baseX = {580054, 874360, 239754, 152451, 133240, 133411, 641916, 118292, 293683, 915376, 761608, 671246, 580423, 191192, 506270, 926477, 993286, 158511, 447672, 773221, 104758, 102646, 888819, 905991, 839720, 578654, 680442, 112140, 109613, 822858, 631634, 948716, 147109, 711074, 301928, 740023, 652648, 166238, 815644, 257895, 34731, 669958, 496919, 614787, 409380, 686749, 739456, 611269, 379476, 272164};
    vector<int> baseY = {642739, 160061, 455997, 315208, 74049, 160740, 227715, 388842, 142868, 943617, 315255, 629740, 483659, 599569, 922317, 535705, 995962, 671522, 537447, 611188, 159375, 461617, 411206, 71727, 396168, 796568, 536582, 686933, 923178, 796680, 295250, 483634, 890124, 994378, 435674, 978631, 513445, 445891, 222696, 373333, 992777, 949029, 628518, 748769, 192621, 167140, 829770, 741945, 649438, 484952};
    vector<int> siloX = {590737, 74868, 516285, 55368, 421757, 825546, 883814, 600211, 748194, 923408, 535619, 538315, 499869, 641347, 679168, 759323, 208319, 377131, 736345, 607204, 545361, 554449, 477712, 728836, 560476, 805974, 772375, 553916, 577305, 932837, 213820, 54472, 525016, 831099, 807463, 817842, 70495, 559764, 887670, 752970, 795792, 784596, 865140, 455393, 927808, 230840, 222336, 279601, 834377, 268404};
    vector<int> siloY = {226958, 434589, 732316, 424293, 303476, 132060, 842616, 34132, 653791, 217630, 290246, 381728, 858933, 146397, 75760, 725516, 298379, 940827, 480874, 196654, 674235, 905042, 352869, 515127, 154019, 456847, 624673, 375803, 315912, 302153, 276088, 707294, 415943, 508709, 417148, 315160, 629647, 331013, 353890, 81041, 92707, 82779, 63018, 560851, 418303, 353085, 286352, 69289, 48500, 75229};
    int takeOffTime = 10;
    int rechargeTime = 224;
    int missileSpeed = 1488;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 197.1426600910578;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> baseX = {0, 0, 50};
    vector<int> baseY = {0, 50, 0};
    vector<int> siloX = {50, 0, 1000};
    vector<int> siloY = {50, 1000, 0};
    int takeOffTime = 30;
    int rechargeTime = 900;
    int missileSpeed = 1;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 950.5;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> baseX = {0, 31379, 861049, 202581, 272921, 671655, 318691, 161795, 372238, 425674, 82012, 474794, 70569, 840855, 59724, 293296, 917285, 367906, 774665, 327925, 697675, 844171, 717983, 306641, 162626, 329496, 466020, 246653, 825677, 279029, 481766, 149185, 874335, 287294, 772754, 976460, 492528, 887936, 827277, 20296, 141056, 143504, 500808, 21675, 592935, 9649, 774478, 650658, 770489, 708107};
    vector<int> baseY = {557508, 206030, 681086, 592851, 955457, 644056, 998372, 243780, 676166, 295695, 85890, 772322, 495278, 881684, 509966, 573323, 953193, 684834, 338711, 7607, 705351, 988938, 774045, 749573, 197707, 143647, 913599, 784196, 589281, 864709, 689371, 287833, 93643, 628920, 280025, 877185, 161234, 273188, 543685, 960793, 174364, 157069, 268121, 177457, 576796, 498156, 285190, 155944, 609765, 739690};
    vector<int> siloX = {746407, 80351, 76326, 59781, 106532, 795515, 805889, 381601, 612029, 436833, 740827, 493923, 341291, 818878, 817033, 141395, 93493, 67166, 60292, 193917, 672958, 227480, 570356, 254483, 365900, 837088, 314575, 314885, 656426, 692265, 902993, 318641, 478678, 296476, 766743, 740521, 551970, 723592, 411657, 542057, 595819, 880525, 668936, 112395, 471731, 403656, 114759, 53881, 548613, 673416};
    vector<int> siloY = {80731, 921746, 838705, 681417, 927008, 277267, 700881, 734489, 499999, 663781, 158221, 230013, 946522, 364923, 126709, 986913, 306261, 54470, 101934, 866688, 554441, 697158, 100686, 668861, 16551, 309848, 904300, 535212, 327034, 442426, 900635, 347180, 353777, 487802, 71563, 850801, 760311, 180377, 922845, 493562, 127574, 892378, 403247, 207543, 807126, 587400, 109813, 623220, 927671, 540571};
    int takeOffTime = 59;
    int rechargeTime = 102;
    int missileSpeed = 1999;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 125.89964813093624;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> baseX = {612196, 386336, 509646, 219135, 279929, 397467, 407509, 969679, 103766, 812883, 841466, 635091, 67900, 292866, 929400, 923535, 977536, 50119, 707742, 14203, 588491, 403155, 699919, 228882, 4186, 13756, 561090, 237270, 421054, 65917, 802419, 254570, 898716, 885509, 894800, 865863, 360015, 92964, 78668, 456312, 251650, 177649, 780368, 37790, 562710, 263110, 82069, 831660, 120610, 284258};
    vector<int> baseY = {681632, 973620, 129631, 372378, 878471, 763338, 460489, 351770, 707658, 475502, 865534, 348099, 147927, 464607, 494093, 458776, 806782, 287541, 55512, 671522, 641235, 859880, 874437, 165100, 526465, 141159, 889568, 624534, 23106, 232882, 768486, 697666, 44440, 360192, 755819, 325626, 469848, 52170, 183269, 409256, 248249, 263085, 460607, 218620, 516026, 194493, 361576, 228249, 657961, 926269};
    vector<int> siloX = {479291, 251228, 870285, 445206, 660214, 90584, 591318, 92297, 993595, 132610, 789693, 100660, 662231, 487148, 315128, 973350, 514313, 354833, 657775, 920497, 256435, 287482, 104576, 30988, 799676, 334858, 945915, 353871, 215489, 847331, 30423, 312394, 748384, 615150, 187995, 612078, 247051, 67031, 873382, 359618, 429147, 708350, 668248, 283600, 902235, 709160, 288199, 673573, 427577, 331643};
    vector<int> siloY = {77681, 669480, 903644, 481063, 65858, 367956, 259836, 557115, 248342, 58845, 131412, 693303, 993418, 233093, 758199, 663252, 33874, 225270, 281912, 239945, 366724, 585850, 409104, 125606, 535098, 711329, 183691, 562474, 556212, 72415, 789482, 728173, 118981, 216603, 801187, 892007, 485730, 772241, 193565, 173767, 181286, 63664, 224485, 641741, 433712, 271085, 992844, 220848, 999730, 41486};
    int takeOffTime = 60;
    int rechargeTime = 1000;
    int missileSpeed = 2000;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 150.0816977113556;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> baseX = {0};
    vector<int> baseY = {0};
    vector<int> siloX = {1000000};
    vector<int> siloY = {1000000};
    int takeOffTime = 1;
    int rechargeTime = 5;
    int missileSpeed = 1;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 1414213.5790397616;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> baseX = {415447, 651272, 269828, 469780, 561965, 537949, 156278, 465031, 933605, 805628, 403578, 546331, 723357, 137857, 801561, 663283, 939607, 791420, 218535, 539771, 281832, 994551, 13564, 77152, 851488, 169211, 607937, 14532, 963526, 298771, 532518, 800731, 121782, 36813, 581128, 47601, 300620, 958464, 794848, 380646, 35524, 692561, 878097, 980430, 466976, 541135, 304581, 617058, 404786, 592096};
    vector<int> baseY = {809667, 520026, 684127, 261672, 185479, 997069, 569928, 665081, 295984, 318130, 732812, 207049, 11553, 14400, 367696, 308242, 325973, 407388, 355188, 239308, 263613, 879286, 976343, 621151, 310398, 123431, 582888, 268240, 9516, 372457, 797910, 701143, 51206, 391751, 276078, 835153, 655760, 847146, 787845, 63794, 299789, 508298, 408665, 199146, 868085, 632997, 892098, 505345, 126839, 792693};
    vector<int> siloX = {884822, 367292, 8741, 345812, 501856, 973493, 576437, 742972, 921973, 760140, 688065, 857013, 86072, 262949, 327044, 570756, 285411, 453927, 278047, 926750, 411955, 602169, 332041, 245758, 909684, 190930, 485513, 754542, 13554, 447665, 662481, 428547, 691927, 599343, 332606, 951372, 818613, 52310, 24708, 920448, 492282, 314098, 142208, 687134, 93852, 624022, 675495, 509505, 626566, 940033};
    vector<int> siloY = {375957, 17338, 118812, 141263, 707361, 341414, 386348, 48806, 422530, 642984, 248446, 141732, 926721, 194313, 371578, 650978, 683828, 607508, 274589, 50677, 797534, 286357, 670947, 834652, 556739, 684710, 246478, 865218, 173087, 494973, 175106, 512086, 158121, 461559, 160474, 261103, 788593, 116702, 557924, 465688, 890667, 369800, 179143, 438287, 737237, 546536, 710931, 134783, 197307, 170252};
    int takeOffTime = 30;
    int rechargeTime = 300;
    int missileSpeed = 1000;
    FeudaliasWar* pObj = new FeudaliasWar();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 219.99356816316964;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22694769&rd=13803&pm=10027
********************************************************************************
#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
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
 
int n;
vector < pair<int,double> > g[50];
int p[2500];
bool u[50];
 
double EPS = 1E-10;
 
bool try_kuhn (int v, double gr) {
  if (u[v])  return false;
  u[v] = true;
  for (size_t i=0; i<g[v].size(); ++i)
    if (g[v][i].second <= gr + EPS) {
      int to = g[v][i].first;
      if (p[to] == -1 || try_kuhn (p[to], gr)) {
        p[to] = v;
        return true;
      }
    }
  return false;
}
 
bool u1[50];
 
bool matching (double gr) {
  memset (p, -1, sizeof p);
  memset (u1, 0, sizeof u1);
  for (int i=0; i<n; ++i)
    for (size_t j=0; j<g[i].size(); ++j) {
      int to = g[i][j].first;
      if (g[i][j].second <= gr + EPS) {
        if (p[to] == -1) {
          p[to] = i;
          u1[i] = true;
          break;
        }
      }
    }
  for (int i=0; i<n; ++i) {
    if (u1[i])  continue;
    memset (u, 0, sizeof u);
    if (!try_kuhn (i, gr))
      return false;
  }
  return true;
}
 
double sqr (double a) {
  return a * a;
}
 
double dist (int ax, int ay, int bx, int by) {
  return sqrt  (sqr(ax-bx) + sqr(ay-by));
}
 
class FeudaliasWar {
public:
  double getMinimumTime(vector <int> baseX, vector <int> baseY, vector <int> siloX, vector <int> siloY, int takeOffTime, int rechargeTime, int missileSpeed) {
    n = (int) baseX.size();
    int m = (int) siloX.size();
    int tm = 0;
    for (int i=0; i<n; ++i) {
      for (int j=0; j<n; ++j)
        for (int to=0; to<m; ++to) {
          double cur = dist (baseX[j], baseY[j], siloX[to], siloY[to]) / missileSpeed * 60 + tm + takeOffTime;
          int to_v = i * m + to;
          g[j].push_back (make_pair (to_v, cur));
          cerr << j+1 << ' ' << to+1 << ' ' << cur << endl;
        }
      tm += takeOffTime + rechargeTime * 60;
    }
    
    double l = 0,  r = 1E9;
    for (int i=0; i<150; ++i) {
      double mid = (l + r) / 2;
      if (matching (mid))
        r = mid;
      else
        l = mid;
    }
    return (l + r) / 2 / 60;
  }
};
 
 
 
//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!

********************************************************************************
*******************************************************************************/