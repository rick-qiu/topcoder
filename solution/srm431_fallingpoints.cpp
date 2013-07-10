/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10261
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

class FallingPoints {
public:
    vector<double> getHeights(vector<int> X, int R);
};

vector<double> FallingPoints::getHeights(vector<int> X, int R) {
    vector<double> ret;
    return ret;
}


int test0() {
    vector<int> X = {0};
    int R = 10;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> X = {1, 100};
    int R = 10;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> X = {0, 9};
    int R = 10;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 4.358898943540674};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> X = {0, 9, 19};
    int R = 10;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 4.358898943540674, 4.358898943540674};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> X = {0, 6, 13, 23, 33, 42, 51};
    int R = 10;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 8.0, 15.14142842854285, 15.14142842854285, 15.14142842854285, 19.500327372083525, 23.8592263156242};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> X = {13, 6, 0, 42, 51, 23, 33};
    int R = 10;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 7.14142842854285, 15.14142842854285, 0.0, 4.358898943540674, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> X = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int R = 1000;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 1000.0, 2000.0, 3000.0, 4000.0, 5000.0, 6000.0, 7000.0, 8000.0, 9000.0, 10000.0, 11000.0, 12000.0, 13000.0, 14000.0, 15000.0, 16000.0, 17000.0, 18000.0, 19000.0, 20000.0, 21000.0, 22000.0, 23000.0, 24000.0, 25000.0, 26000.0, 27000.0, 28000.0, 29000.0, 30000.0, 31000.0, 32000.0, 33000.0, 34000.0, 35000.0, 36000.0, 37000.0, 38000.0, 39000.0, 40000.0, 41000.0, 42000.0, 43000.0, 44000.0, 45000.0, 46000.0, 47000.0, 48000.0, 49000.0};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> X = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int R = 1;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> X = {0, 0, 10, 20, 20, 30, 30, 40, 50, 50};
    int R = 10;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 10.0, 10.0, 10.0, 20.0, 20.0, 30.0, 30.0, 30.0, 40.0};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> X = {0, 100, 200, 300, 400, 500};
    int R = 99;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> X = {527, 480, 664, 35, 919, 358, 451, 436, 536, 928, 879, 477, 773, 442, 407, 524, 67, 477, 715, 361, 538, 181, 483};
    int R = 619;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 617.2130912415905, 1208.2333954613355, 0.0, 0.0, 261.61039734689444, 873.5842529976078, 1492.4024815591135, 2103.271534630228, 2582.3299861786795, 3199.3875199630097, 3670.085937211252, 4213.726443428366, 4736.794316653247, 5354.80402531485, 5962.646110070422, 6380.152996241177, 6843.89969434263, 7415.316354932781, 7923.100758001642, 8516.255038100842, 9021.934778648158, 9562.265233092472};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> X = {507, 344, 960, 350, 846, 470, 524, 947, 388, 780, 923, 616, 551, 634, 745, 342, 725, 308, 471, 776, 251, 427, 498, 222, 866, 513};
    int R = 736;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 717.7234843587048, 1120.5137523642761, 1532.3341015458095, 2076.098756520735, 2708.8072201910104, 3442.8235687827837, 4045.1249883394703, 4523.8890220763415, 5146.811168094606, 5868.785544371216, 6537.700337151283, 7270.824473979419, 8002.129471911198, 8729.711082453961, 9345.573891852287, 9974.069715227432, 10580.540654349827, 11298.264138708531, 11968.093221385598, 12483.913926669904, 13198.560692561978, 13931.128095604183, 14613.418356416983, 14969.732824268065, 15615.555555363835};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> X = {256, 440, 255, 664, 773, 582, 596, 691, 240, 633, 967, 987, 98, 58, 316, 392, 382, 371, 228, 192, 732, 442, 512, 825, 157, 53, 211, 267, 56};
    int R = 808;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 786.7706146012318, 1573.3066913326174, 2270.144549087203, 3070.7586883578006, 3855.8593188504783, 4663.7380226173245, 5466.1338102433565, 6136.553827844264, 6842.538955166362, 7578.275320993143, 8386.027758315371, 0.0, 807.0092936267835, 1572.7115856437267, 2377.1293875352562, 3185.067503977351, 3992.992624270067, 4788.237869461763, 5595.435490865592, 6196.4879012259535, 6950.65233952837, 7755.614450437946, 8500.527197006295, 8955.103923203314, 9756.382900838445, 10548.784314264747, 11354.841384204587, 12134.804844887201};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> X = {4, 537, 318, 211, 700, 695, 669, 202, 860, 485, 11, 358, 876, 482, 654, 442, 807, 201, 753, 839, 445, 457, 527, 660, 216, 362, 919, 260, 673, 809, 993, 511};
    int R = 211;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 181.8570867467089, 0.0, 210.94074997496335, 420.3327268986268, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 122.21702009131134, 0.0, 0.0, 0.0, 0.0, 192.67848867997694, 0.0, 210.6584914025542, 409.70873631574193, 573.5134981512881, 0.0, 152.33187453714342, 0.0, 0.0, 0.0, 161.32265804901678, 264.5941449173678, 0.0};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> X = {985, 401, 614, 526, 858, 39, 742, 946, 712, 337, 55, 497, 422, 674, 224, 492, 464, 32, 509, 255, 926, 704, 773, 263, 274, 902, 395, 253, 290, 810, 130, 674, 930, 287, 148, 667};
    int R = 754;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 476.9276674717037, 1200.2166830111353, 1949.063796913566, 2626.036469921864, 0.0, 272.59310336103516, 998.4718811194155, 1715.242416228107, 2369.3761945945816, 3068.655823927512, 3679.51751039999, 4429.778131784319, 5140.420095082294, 5745.412657020042, 6450.17644723631, 7203.656373976233, 7821.630483466267, 8405.571405135574, 9115.500979107528, 9459.412304887881, 10179.989851027087, 10930.826051539556, 11486.178192077432, 12240.097949080788, 12657.38921426615, 13215.481500541457, 13955.98943432745, 14709.081062218771, 15255.081062218771, 15580.835571013355, 16102.927516938591, 16812.13834595913, 17205.92382055158, 17947.00073963623, 18493.9513772627};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> X = {733, 497, 909, 840, 785, 152, 815, 457, 564, 189, 99, 868, 201, 98, 562, 542, 889, 863, 266, 670, 407, 719, 788, 98, 565, 443, 103, 246, 675, 811, 499, 605, 882, 250, 824, 722, 435, 177, 775};
    int R = 337;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 240.56807768280478, 0.0, 329.86057660775407, 662.3421550448157, 0.0, 0.0, 0.0, 319.56220051814637, 0.0, 324.7599113191159, 0.0, 0.0, 320.8738069709025, 0.0, 336.40600470265093, 0.0, 335.9955356846278, 0.0, 0.0, 210.71307505705477, 338.0904670856247, 667.9510436933788, 0.0, 0.0, 314.1416877779834, 0.0, 305.15569796417043, 0.0, 308.33909904519084, 435.71649107376084, 755.6117864439803, 947.5492762681416, 0.0, 0.0, 321.1930883440676, 497.8283056706245, 714.6346708908366, 0.0};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> X = {481, 361, 972, 387, 712, 264, 887, 201, 415, 41, 143, 238, 747, 523, 132, 360, 547, 693, 23, 318, 119, 966, 803, 701, 624, 751, 578, 471, 292, 812, 867, 768, 833, 980, 499, 778, 116, 756, 35, 508, 314, 595};
    int R = 896;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 887.927925002925, 1543.2866054215183, 2221.9551548622594, 3056.9347953326123, 3832.8935571234692, 4476.855512521457, 5053.240800328146, 5923.309763112132, 6737.521037905106, 7627.696301547047, 8518.645795065058, 9256.02968422999, 10123.577953780452, 10929.763416313734, 11796.269042377407, 12672.537836755024, 13556.562723282546, 14151.471119592432, 14997.515444672388, 15871.137216379115, 16163.381976811188, 17044.430783631786, 17934.606047273726, 18827.291322160683, 19714.24509773188, 20593.385018336103, 21482.973125270993, 22360.911050183684, 23090.57946802839, 23984.889816844727, 24875.40371342355, 25769.042902358324, 26652.902054033522, 27408.848480706736, 28260.30311837101, 28864.10109783103, 29491.17047198352, 30023.124417358496, 30784.102078003012, 31658.847755328712, 32509.644440794753};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> X = {462, 457, 268, 701, 639, 377, 960, 713, 267, 893, 187, 377, 525, 715, 470, 410, 972, 524, 547, 733, 600, 980, 817, 536, 683, 292, 286, 464, 909, 813, 4, 699, 784, 942, 175, 834, 29, 335, 62, 678, 478, 694, 343, 227, 902, 226};
    int R = 528;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 527.9763252268041, 1020.9905238053034, 1323.1411484943812, 1847.4883617033388, 2305.8986582718167, 0.0, 466.6636904667, 749.2729613691246, 0.0, 0.0, 492.62967835890686, 999.462984288973, 1492.09266264788, 1959.8094573003705, 2484.389289165836, 0.0, 279.42798714516766, 806.9268023097138, 1301.0806245149054, 1812.0551835684848, 2178.6394167264316, 2680.8495321163946, 3127.8651917973502, 3634.9894369286594, 3989.8175643368454, 4517.783472327124, 5014.875013192587, 5299.056293364241, 5818.255677031056, 0.0, 0.0, 521.1132314574252, 1024.9187494899295, 0.0, 0.0, 0.0, 430.288275461928, 882.2340686716889, 0.0, 488.6552977304145, 970.451935327648, 1364.8920448499937, 1879.9920351431406, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> X = {210, 321, 563, 16, 565, 489, 801, 456, 119, 745, 231, 748, 304, 139, 40, 460, 629, 355, 304, 381, 313, 227, 64, 139, 974, 833, 762, 456, 294, 814, 373, 630, 735, 672, 851, 890, 710, 914, 89, 849, 411, 794, 22, 303, 982, 156, 896, 269, 464};
    int R = 637;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 627.2543343811982, 1216.495371648631, 1542.9306638582816, 1865.9910297343822, 2498.4410277579414, 3053.8012712035807, 3589.286098252863, 4129.841368322446, 4247.709939196959, 4623.971816085915, 4996.1008259736145, 5452.864440986895, 6068.123735918714, 6697.383618638089, 7176.308456164814, 7790.481070337735, 8365.540197732475, 9000.49531425647, 9632.824342532098, 10266.184429686316, 10897.352394652853, 11513.14456738648, 12145.713931171986, 0.0, 621.1988409519129, 1254.2296458895557, 1812.9182890531697, 2428.974293000863, 2796.8995571510704, 3256.5603016137666, 3839.415343626787, 4467.701902451659, 5101.578862121279, 5712.911831950323, 6348.716833503472, 6959.756112110012, 7563.207021463872, 0.0, 0.0, 462.52026982609095, 971.5192875068719, 0.0, 571.671234189722, 0.0, 0.0, 0.0, 112.42775458044157, 718.8467516443528};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> X = {959, 418};
    int R = 858;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 665.9451929400797};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> X = {939, 282, 922, 877, 419};
    int R = 714;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 279.5478492136901, 596.0853667372847, 1308.6658885030708, 1856.417657099029};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> X = {687, 378, 217, 192, 345, 827, 19, 223, 443};
    int R = 301;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 254.3226297441893, 554.282627077167, 813.4968242192217, 0.0, 0.0, 221.32555207205516, 426.75437186129506};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> X = {436, 242, 512, 738, 504, 939, 92, 967, 295, 153, 407, 1000};
    int R = 953;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 933.0450149912382, 1846.9974207542516, 2772.812197045924, 3696.637396962012, 4544.566639292998, 4981.373232649829, 5358.976198739875, 6034.716533483925, 6977.077929127868, 7895.605555277457, 8641.635045311195};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> X = {416, 338, 808, 53, 431, 51, 164, 478, 147, 6, 451, 139, 499, 796, 427};
    int R = 478;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 471.59304490206387, 558.6792091303728, 0.0, 292.5747767665559, 582.5471892474676, 1046.998478404899, 1407.398256429248, 1752.2503986583488, 2208.9811727474175, 2383.506242579806, 2745.638814989414, 3060.0970793107704, 3434.6301219118204, 3738.4771228843492};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> X = {165, 435, 871, 367, 358, 396, 237, 222, 767, 858, 495, 509, 278, 220, 765, 528, 876, 339};
    int R = 380;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 267.39483914241873, 0.0, 0.0, 379.8934061022907, 757.9886322028062, 1103.1248372001955, 1482.8286691534695, 0.0, 368.943085041582, 481.3308067908905, 861.0728244818487, 1162.7995220079376, 1538.3471221866635, 0.0, 297.0370347279948, 449.6673069547061, 0.0};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> X = {913, 299, 166, 914, 284, 508, 310, 733, 619, 710, 539, 880, 824, 644, 335, 578, 534, 170, 137, 753, 376, 27};
    int R = 398;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 375.11998080614154, 0.0, 0.0, 328.9802425678478, 674.2337726004891, 0.0, 381.3240092100155, 768.7811036088663, 1128.1736466589414, 1333.4125318634756, 1727.453138907978, 2082.4235602109366, 2333.268133602509, 2648.474415265803, 3044.034777284042, 3204.9943995500003, 3601.623949634207, 0.0, 127.57350822173073, 318.892613383761};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> X = {893, 395, 462, 228, 211, 621, 383, 477, 471, 562, 583, 19, 602, 836, 673, 628, 959, 1, 893, 169, 89, 42, 413, 891, 908};
    int R = 461;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 456.10525101121124, 853.3016759699462, 1313.988120311431, 1524.751020272501, 1919.5636340527599, 2370.878380100349, 2831.839332893533, 3283.7685308880864, 3744.289974471336, 0.0, 0.0, 397.196424958735, 828.4179457575003, 1287.2163764435697, 1608.0901834144722, 0.0, 0.0, 0.0, 454.0055065745348, 912.6033696310476, 1186.2454716548407, 0.0, 460.68644434148484};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> X = {642, 259, 757, 543, 138, 733, 455, 989, 323, 414, 627, 390, 149, 260, 243, 446, 616, 831, 418, 816, 570, 289, 427, 494, 199, 2, 203, 89};
    int R = 152;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 121.74974332621815, 0.0, 0.0, 0.0, 103.84122495425407, 254.88757545634334, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 63.71812928829596, 200.15492784352446, 0.0, 0.0, 0.0, 100.53854982045445};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> X = {390, 355, 820, 90, 65, 846, 528, 732, 175, 266, 671, 761, 927, 685, 581, 496, 273, 662, 175, 232, 283, 304, 674, 329, 257, 310, 678, 82, 537, 55, 132};
    int R = 100;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 93.67496997597597, 0.0, 0.0, 96.82458365518542, 0.0, 0.0, 0.0, 0.0, 41.46082488325576, 0.0, 43.58898943540674, 0.0, 0.0, 0.0, 52.67826876426369, 0.0, 0.0, 0.0, 82.16446920658588, 168.18190929869743, 265.9520478891689, 0.0, 0.0, 69.39740629158989, 154.1971704422053, 0.0, 0.0, 0.0, 0.0, 63.80438856379708};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> X = {371, 219, 115, 404, 991, 958, 369, 244, 795, 118, 715, 900, 473, 877, 151, 546, 699, 493, 931, 647, 764, 550, 688, 932, 316, 851, 386, 307, 154, 56, 501, 31, 501, 95, 282};
    int R = 735;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 719.1112570388535, 1446.7162322829759, 2122.515018905148, 2564.845212312742, 3299.104022270103, 3738.7675299666143, 4463.060288455887, 4949.500418379395, 5235.675190153568, 5664.412872192364, 6375.749641943514, 6973.9937392817155, 7588.004325509673, 7702.673414631372, 8322.512103323841, 9041.41126175985, 9746.952897668036, 10337.190985222542, 11015.106171658132, 11740.734175527883, 12443.89063037986, 13165.819297216134, 13859.136684853283, 14260.096782618635, 14764.0809093528, 15333.290888183108, 16064.032976747876, 16782.932135183884, 17511.369503802493, 18096.34813589088, 18661.436624536684, 19226.525113182488, 19839.21508372224, 20550.028702049858};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> X = {119, 316, 411, 719, 150, 71, 441, 987, 647, 970, 759, 271, 252, 301, 489, 596, 356, 556, 688, 295, 477, 565, 703, 535, 607, 391, 862, 300, 771, 57, 870, 194, 452, 57, 726, 791, 45, 326};
    int R = 109;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 53.44155686354955, 0.0, 0.0, 75.09993342207434, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 107.33126291998991, 204.6965544770946, 0.0, 20.784609690826528, 0.0, 0.0, 0.0, 0.0, 0.0, 64.319514923544, 0.0, 0.0, 81.83520025025906, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 87.49857141690943, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> X = {867, 180, 474, 33, 77, 183, 514, 499, 498, 822, 804, 642, 798, 725, 59, 646, 781, 386, 213, 710, 958, 812, 718, 370, 666, 700, 569, 293, 156, 58, 7, 125, 403, 787, 401, 846, 958, 905, 368, 68, 160};
    int R = 556;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 471.9110085598767, 810.5184508880097, 1364.7747093100506, 1910.5768712698582, 2357.315049624921, 2913.112674664827, 3469.111775383524, 3920.9524552696985, 4476.6610119790585, 5008.536937360157, 5542.20349992521, 6093.390401075809, 0.0, 0.0, 539.3616597423292, 930.6556668520727, 1459.0560832031579, 1708.30896683743, 2205.935332698404, 2742.4239159879276, 3290.4202663407377, 3724.0468337925026, 4194.705946102038, 4749.665404080727, 5290.012514742013, 5772.67181486996, 6311.528938790578, 6858.824105953599, 7412.480136355148, 7955.814287683776, 8437.324412187923, 8839.41892844001, 9239.5938901755, 9572.927056842125, 10117.529664254173, 10670.997820519733, 10815.105419209045, 11283.225062035535, 11831.560725657737};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> X = {848, 276, 769, 580, 3, 296, 587, 243, 350, 674, 848, 780, 576, 917, 397, 696, 438, 217, 969, 126, 670, 827, 964, 973, 725, 240, 45, 518, 773, 59, 375, 56, 354, 749, 77, 902, 639, 484, 395, 239, 93, 656, 439, 980};
    int R = 476;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 436.8695457456379, 0.0, 375.13597534760646, 751.8255026774752, 1080.8239829171262, 1544.64183509619, 1893.353750579444, 2336.4113089169587, 2807.5291285756934, 3237.598890358593, 3569.7058008558, 0.0, 370.3714351836545, 770.386434902415, 1191.9727250020812, 0.0, 0.0, 0.0, 449.36288231228, 905.2214129991588, 1381.1363213598866, 1787.4268577990215, 0.0, 434.2245962632702, 487.5818825510866, 889.5159567473409, 0.0, 355.9775273805918, 709.2691915902078, 1080.4456994675247, 1346.0600816082515, 0.0, 0.0, 396.74551037157306, 846.8021734707877, 1314.4077765167735, 1764.1187948385398, 2217.1750827322185, 0.0, 423.6590610384723, 0.0};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> X = {596, 140, 65, 894, 930, 408, 660, 754, 202, 526, 892, 151, 123, 341, 967, 514, 863, 48, 726, 773, 151, 74, 979, 808, 15, 549, 753, 511, 158, 60, 512, 220, 73, 479, 752, 958, 321, 63, 422, 409, 258, 755, 885, 824, 556, 331, 343, 705};
    int R = 335;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 326.49655434629017, 0.0, 333.06005464480427, 0.0, 220.72833982069452, 542.2699389956691, 0.0, 85.14105942493316, 0.0, 0.0, 333.8277999208574, 588.1917124556351, 0.0, 0.0, 0.0, 0.0, 0.0, 331.6865990660461, 0.0, 326.0306734035925, 0.0, 288.06943607401325, 0.0, 0.0, 265.7235405454323, 497.3719810754734, 0.0, 320.34512638715137, 0.0, 164.19805114556019, 465.2229670578481, 0.0, 194.15457759218555, 458.33065523738037, 0.0, 213.68434664242488, 0.0, 334.74766616064704, 633.7861252256978, 0.0, 308.74746962525865, 638.146923176718, 839.146923176718, 1087.3403960965352, 1422.1254017344818, 0.0};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> X = {345};
    int R = 236;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> X = {325, 332, 423, 756};
    int R = 784;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 783.9687493771675, 1562.669590522212, 2272.4350447393076};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> X = {73, 197, 719, 70, 710, 977, 878, 753};
    int R = 526;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 511.1751167652823, 575.9207729902369, 0.0, 0.0, 453.1964254051437, 969.7958833994393, 1480.7273856578145};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> X = {822, 293, 14, 385, 637, 90, 950, 264, 378, 935, 68};
    int R = 403;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 290.80577710905266, 448.18430169230066, 762.6759549996659, 0.0, 0.0, 0.0, 386.53977803067045, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> X = {802, 157, 309, 931, 564, 202, 23, 8, 230, 787, 112, 774, 550, 998};
    int R = 122;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 121.07435731813736, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> X = {551, 253, 373, 246, 723, 315, 96, 520, 82, 639, 156, 913, 97, 422, 692, 582, 343};
    int R = 32;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> X = {279, 213, 963, 107, 576, 540, 9, 775, 554, 343, 244, 654, 421, 271, 600, 682, 425, 693, 83, 794, 927, 888, 328, 328, 950, 409, 486, 919, 399, 299, 998, 364, 450, 480, 157, 404, 698, 927, 334, 775, 647, 786, 389, 739};
    int R = 267;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 258.71412794820463, 0.0, 0.0, 0.0, 264.56190201916826, 0.0, 0.0, 149.82656640262434, 313.4358570923648, 561.4035969296267, 0.0, 130.38404810405297, 351.2663697144526, 0.0, 254.09643838511394, 326.4842826685294, 0.0, 0.0, 0.0, 231.5167380558045, 495.6530664924661, 0.0, 267.0, 0.0, 0.0, 255.6560189003967, 0.0, 0.0, 247.56615277537438, 0.0, 0.0, 252.77064703006954, 518.0799005437757, 0.0, 101.39033484509261, 0.0, 137.2880184138441, 0.0, 0.0, 234.3181597742693, 462.2830693546694, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> X = {28, 78, 259, 422, 503, 652, 82, 518, 406, 195, 288, 793, 200, 463, 170, 732, 850, 524, 840, 209, 408, 135, 574, 163, 240, 718, 962, 144, 16, 300, 135, 527, 169, 210, 833, 460, 379, 506, 361, 945, 580, 886, 835, 584, 115, 929, 351};
    int R = 934;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 932.6607100119528, 1848.9548767509973, 2768.621664234377, 3699.1027226122465, 4621.141225062117, 5361.043921367516, 6187.03423608071, 7114.294717283268, 8024.149101237096, 8953.507482056895, 9739.211624848569, 10460.811929726553, 11357.018937063585, 12243.871235927381, 12989.868554957417, 13916.384609864184, 14791.644571247087, 15670.564362809435, 16359.182544387586, 17271.736652372423, 18164.948273434307, 18989.348055093666, 19828.058374572327, 20758.87898027463, 21561.295331055193, 22462.8606365101, 22913.673236156563, 23838.86078471091, 24728.636037232576, 25647.94610462007, 26495.703145286792, 27358.368781556142, 28291.468454688653, 28987.332665580405, 29843.61941661653, 30774.1004749944, 31699.42582318281, 32622.101822653913, 33351.00510841959, 34210.732390759746, 35093.18352255119, 36025.79008482705, 36925.43168013042, 37733.14140521735, 38191.1370383843, 38924.80726403068};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> X = {776, 174, 322, 736, 430, 764, 155, 30, 258, 47, 332, 164, 746, 887, 508, 782, 508, 355, 597, 625, 121, 150, 589, 766, 299, 258, 670, 137, 633, 301, 504, 458, 120, 172, 508, 515, 293, 317, 388, 116, 744, 985, 282, 660, 195, 858, 719, 841, 660, 842};
    int R = 117;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 113.6001760562016, 0.0, 113.34901852243803, 0.0, 0.0, 0.0, 109.5810202544218, 0.0, 0.0, 0.0, 0.0, 0.0, 107.57787876696584, 0.0, 104.80935072788114, 0.0, 116.79041056525146, 0.0, 114.51200810395389, 207.50663160445527, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> X = {757, 38, 617, 283, 356, 877, 228, 774, 110, 900, 376, 535, 524, 311, 78, 600, 165, 186, 353, 272, 602, 397, 603, 601, 358, 799, 145, 130, 18, 302, 872, 389, 72, 902};
    int R = 184;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 168.8993783292289, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 92.60129588726068, 276.2721972298522, 0.0, 0.0, 0.0, 0.0, 182.7977023925629, 260.0440615300653, 425.2560465674711, 0.0, 0.0, 0.0, 183.9891301137108, 0.0, 0.0, 0.0, 183.3875677356565, 329.3738684628138, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> X = {505, 134, 912, 597, 283, 221, 300, 285, 730, 752, 420, 674, 71, 503, 417, 650, 590, 16, 878, 688, 315, 412, 618, 204, 649, 107, 853, 354, 635, 535, 9, 552, 23, 864, 859, 859, 655};
    int R = 475;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 296.6209702633986, 0.0, 355.52777669262355, 711.9390559754206, 1182.875357400571, 1651.2598148711406, 2126.0229136899093, 2292.155390948271, 2766.645643745944, 3106.35287063404, 3507.7367268116395, 0.0, 197.48670841350312, 664.6365772992816, 1078.5641071882708, 1549.7593957895047, 0.0, 0.0, 435.3446910208048, 729.4467141352336, 1194.4370366151752, 1622.4428776968127, 1855.3140867373465, 2021.446563995708, 0.0, 0.0, 0.0, 382.96736153359075, 847.3217520587584, 0.0, 0.0, 0.0, 0.0, 474.9736834815167, 949.9736834815167, 1378.936385822874};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> X = {254, 230, 976, 912, 210, 334, 373, 29, 581, 604, 464, 45, 849, 927, 987, 700, 247, 847, 635, 103, 796, 658, 865, 39, 707, 648, 329, 347, 252, 536, 378, 483, 974, 594, 535, 915, 568, 55, 701, 628};
    int R = 7;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> X = {234, 94, 271, 226, 368, 446, 446, 540, 433, 456, 508, 416, 395, 352, 325, 750, 673, 678, 392, 751, 509, 673, 879, 641, 766, 188, 36, 340, 637, 537, 746, 646, 693, 556, 211, 970, 250, 634, 729, 799, 939, 385, 534};
    int R = 501;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 481.04157824454217, 949.7333746310376, 1448.7083239020405, 1929.1633165912622, 2424.0542136584845, 2925.0542136584845, 3417.1568452303954, 3906.597342124553, 4407.069119550613, 4905.3632094212435, 5397.843665886269, 5898.40335263701, 6397.554632310818, 6897.826558367038, 7163.111311038578, 7658.1587835096525, 8159.133832788556, 8570.479186475699, 8919.935907687353, 9358.61232601868, 9832.00962216643, 10288.69879436126, 10729.55818237517, 11214.713827503618, 0.0, 477.38558838741665, 875.6129104033728, 1279.087816686279, 1770.0063435316201, 2225.3304039545237, 2716.248930799865, 3215.0394679995998, 3696.9440228649796, 4060.229034942274, 0.0, 0.0, 321.784089103237, 813.6946500795186, 1309.780328163456, 1790.821906407998, 0.0, 478.33042972405593};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> X = {982, 191, 566, 773, 295, 559, 518, 284, 285, 308, 552, 554, 174, 544, 895, 800, 330, 740, 148, 166, 989, 688, 894, 244, 57, 497, 512, 565, 254, 538, 883, 577, 644, 518, 886, 26, 163, 213, 756, 969, 104, 485, 981, 578, 898, 738, 23};
    int R = 909;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 447.88391353117385, 1275.927390650582, 2161.0443320769677, 2934.217663225941, 3804.0366099039265, 4712.111496683646, 5590.476455001087, 6499.475904945915, 7408.184879260574, 8283.82464537447, 9192.822445151785, 10018.583306418532, 10848.873014893832, 11687.371673211184, 12591.393796834274, 13369.45613366854, 14180.73968459263, 14870.53458164537, 15779.35634634954, 16165.299347322481, 17023.01724966567, 17908.36746285817, 18543.80510732063, 19433.362300535322, 20228.774772149893, 21137.651001347247, 22045.104581427244, 22899.247426623526, 23762.743228582054, 24603.728365192685, 25459.67520933664, 26366.202649627336, 27266.427621509363, 28097.605701104825, 28392.02207293221, 29290.638787666583, 30198.262608420533, 30927.256435554893, 31810.948689679597, 32090.333728649115, 32915.633674123485, 33677.384945865124, 34492.1683526672, 35342.98031779228, 36237.78811838412, 36799.08661294828};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> X = {731, 55, 862, 88, 222, 671, 591, 796, 137, 160, 596, 925, 720, 968, 233, 618, 755, 571, 673, 582, 702, 935, 908, 79, 116, 38, 220, 558, 639, 539, 252, 740, 595, 248, 562, 82, 844, 792, 15, 140, 37, 584, 660, 422, 978, 668, 391, 815, 240, 47};
    int R = 558;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 541.6714871580375, 872.9764825927577, 1425.211939621732, 1944.1907445839383, 0.0, 557.5257841571097, 905.7613366212428, 1356.453027247995, 1875.4318322102013, 2375.2918126047116, 0.0, 403.9046917281353, 944.8252034486652, 1471.6154843005427, 2020.213697932341, 2570.743442814486, 3115.6874766381443, 3622.7131170154335, 4180.059508409511, 0.0, 556.771946132346, 1109.2934389269703, 1636.7780358584828, 2080.760017474854, 2632.8496841051942, 3181.815985438892, 3660.350205740847, 3930.9421494494504, 4469.773291830809, 4906.757273230585, 5368.025091314614, 5652.566828147719, 0.0, 555.5717775409403, 0.0, 543.8189036802601, 1092.2302456490418, 1202.4799622019655, 1755.2801069197467, 2259.9780363785467, 2307.1797312633703, 2771.145247223339, 3255.536617914436, 3618.287220946326, 0.0, 523.5599297119671};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> X = {479, 151, 925, 402, 149, 784, 664, 539, 989, 12, 640, 296, 498, 392, 803, 668, 412, 402, 430, 229, 183, 950, 923, 682, 407, 578, 695, 551, 256, 540, 389, 671, 546};
    int R = 210;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 172.33687939614086, 341.0822497030029, 0.0, 0.0, 0.0, 0.0, 57.41080037762929, 238.69510747562387, 0.0, 160.85707942145413, 0.0, 209.76176963403032, 417.88673209648937, 478.70613689462925, 683.6061124924804, 0.0, 208.25705270170323, 0.0, 0.0, 121.89749792346026, 296.2849974754637, 449.1378679097477, 0.0, 0.0, 145.94176920950355, 0.0, 168.74537030686204};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> X = {460, 15, 220, 949, 75, 896, 505, 51, 609, 864, 684, 435, 44, 584, 141, 718, 837, 233, 186, 645, 664, 197, 170, 517, 465, 887, 403, 544, 873, 541, 757, 602, 497, 940, 913, 193, 438};
    int R = 182;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 26.90724809414742, 0.0, 0.0, 0.0, 0.0, 0.0, 137.706209010342, 0.0, 175.82661914511124, 0.0, 181.0055247775603, 0.0, 179.986110575233, 0.0, 174.41330224498358, 0.0, 0.0, 115.0782342582645, 0.0, 0.0, 0.0, 95.38867857350787, 244.04600264467496, 0.0, 179.986110575233, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> X = {208, 111, 516, 263, 2, 9, 577, 794, 461, 716, 729, 806, 823, 8, 711, 768, 495, 63, 711, 60, 377, 211, 184, 120, 524, 427, 879, 769, 258, 542, 126, 765, 216, 903, 589, 249, 120, 761, 328, 420};
    int R = 299;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 282.8285699854242, 0.0, 159.34867429633672, 305.22533452682046, 604.1433834967681, 0.0, 205.69880894161736, 0.0, 156.12815249018993, 454.84541011016745, 743.760622586077, 1042.2769537976205, 0.0, 0.0, 293.5166094107793, 415.4674191661885, 0.0, 0.0, 0.0, 0.0, 248.686549696601, 546.464990823557, 838.5351878652955, 0.0, 282.8285699854242, 0.0, 278.03057385834387, 0.0, 93.5147047260483, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 269.7406161481804, 0.0, 0.0, 284.4942881676186};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> X = {956, 975, 811, 578, 929, 121, 650, 306, 313, 568, 773, 177, 369, 433, 49, 818, 152, 894, 468, 708, 858, 458, 199, 955, 815, 736, 587, 762, 875, 543, 263, 696, 168, 633, 264, 305, 33, 340, 355, 591, 231, 216, 679};
    int R = 496;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 495.6359551122174, 963.7385079785738, 1401.6049259646989, 1752.0546370503266, 0.0, 0.0, 357.3233829460367, 853.2739853249429, 1278.704355655976, 1730.357984004072, 0.0, 457.33138969460646, 949.1850264606671, 1263.1276963862445, 0.0, 0.0, 0.0, 254.04723970159566, 688.1163586216128, 1160.8911464434677, 1454.1759909206414, 1877.1830830597687, 0.0, 475.83190309183766, 965.5001581380475, 1438.5910584944168, 1902.69341789372, 2385.6499376757806, 2754.1495984625985, 3163.5589290841663, 3405.4824707249086, 0.0, 172.60069524773067, 504.04450647370606, 998.3470454111466, 1413.1144501092497, 1802.6872931052676, 2298.460426705708, 2734.7172318102243, 3075.9151216044024, 3571.688255204843, 3749.584292260197};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> X = {937, 72, 874, 125, 856, 233, 723, 49, 165, 420, 817, 316, 147, 625, 619, 868, 577, 725, 224, 123, 571, 473, 213, 558, 874, 276, 62, 755, 493, 544, 632, 859, 119, 595, 940, 361, 714, 919, 382, 761, 396, 315, 126, 340, 681, 315};
    int R = 462;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 447.2001788908408, 832.4520445579651, 1068.7463525723563, 0.0, 429.9802321037561, 0.0, 461.9610373180838, 851.1178180633253, 1209.9534350246297, 1647.6062654736056, 0.0, 450.82479967277754, 563.6964081489573, 1015.182842053676, 1397.0781156562698, 1704.3548638817092, 2041.38305261375, 0.0, 409.4484094486142, 0.0, 380.52595180880894, 839.7023884864764, 1293.244007304419, 1695.6306373009934, 0.0, 0.0, 307.2767482254393, 0.0, 298.05200888435564, 712.079785730306, 0.0, 264.20257379518466, 547.4321626449374, 1002.2760919217828, 1423.848149819362, 1833.2965592679764, 2145.006360204681, 2426.9425231919786};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> X = {685, 936, 170, 439, 14, 346, 796, 561, 17, 273, 861, 687, 694, 49, 957, 686, 234, 556, 981, 539, 52, 720, 228, 393, 932, 817, 770, 980, 878, 545, 1000, 790, 70, 325, 383, 416, 627, 498, 409, 932, 329, 415, 805, 416, 761, 245, 62, 790, 588, 253};
    int R = 998;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 965.920804207053, 1605.6457450996213, 2566.7092185497363, 3469.6926071012645, 4410.851467230626, 5301.639882063239, 6271.577508923853, 7108.278172243777, 8072.885864520797, 8879.272868384327, 9861.9874759892, 10859.962926589063, 11621.526449875204, 12035.70032640534, 12996.201757950343, 13885.977010472012, 14830.603920950429, 15733.587309501956, 16628.372199852703, 17499.483558979653, 18240.955068884112, 19109.25225303249, 20093.517969188448, 20933.448323444085, 21924.80043041718, 22921.69310267433, 23897.348779642387, 24890.122671321657, 25830.928177257927, 26719.17307592045, 27694.82875288851, 28385.91774860469, 29350.790279045887, 30347.103482812654, 31344.55774241557, 32319.9976431783, 33309.62535095532, 34303.648992525275, 35153.634286515706, 35948.86695687074, 36943.15464159785, 37861.797118299204, 38780.86349239849, 39717.33506164125, 40571.58795159832, 41552.66643979384, 42235.32301524009, 43212.66635306973, 44152.76156101412};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> X = {434, 32, 465, 754, 941, 690, 868, 305, 637, 125, 905, 57, 472, 473, 528, 736, 660, 386, 506, 186, 765, 735, 474, 996, 223, 125, 246, 973, 495, 778, 137, 953, 789};
    int R = 287;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 217.7154105707724, 356.8843726276908, 582.017666478245, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 286.99825783443356, 568.6789280977656, 766.4287700698895, 1043.1831738288902, 1128.5822370556025, 1389.2908867011406, 0.0, 0.0, 285.4277491765648, 404.792735667579, 0.0, 0.0, 269.7498841519677, 529.9959215857776, 0.0, 0.0, 47.74934554525329, 0.0, 0.0, 235.5270685080592};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> X = {414, 128, 760, 300, 868, 803, 941, 816, 489, 977, 949, 196, 18, 665, 98, 786, 317, 217, 262, 602, 246, 981, 489, 599, 282, 666, 953, 966, 880, 779, 506, 884, 740, 17, 735, 528};
    int R = 222;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 0.0, 212.27105313725656, 386.1675740915298, 569.6314669969187, 0.0, 0.0, 220.22715545545242, 0.0, 132.664991614216, 0.0, 0.0, 0.0, 0.0, 198.20191724602464, 415.5932694199324, 0.0, 0.0, 0.0, 0.0, 192.8315326911032, 0.0, 0.0, 0.0, 221.61904250312065, 426.28462339057717, 623.9788317023028, 0.0, 0.0, 168.96153408394468, 0.0, 0.0, 80.21845174272562};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> X = {162, 992, 824, 615, 794, 915, 14, 560, 341, 829, 993, 567, 797, 89, 436, 836, 742, 48, 19, 17, 959, 996, 504, 434, 341, 207, 429, 191, 497, 780, 875, 815, 691, 979, 410, 584, 903, 467, 722};
    int R = 444;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 410.989050949049, 802.722378609589, 1209.0412189308322, 1636.2355540992658, 0.0, 0.0, 386.231795687512, 0.0, 412.60150266328407, 537.7414243509693, 917.5255735726028, 0.0, 276.9963898681714, 469.70342139530584, 903.6389004702485, 0.0, 443.05191569386085, 887.0474111665064, 0.0, 442.4556474947517, 0.0, 438.44726022635837, 872.5981556532824, 1295.8947419848994, 1680.4100212651902, 2055.232645982536, 2376.946804825444, 2719.068128335102, 3152.7857784255725, 3592.713045141333, 4019.0462481645086, 4356.969316332398, 0.0, 408.48500584476784, 717.3134371784131, 801.2181450320252, 1164.6889141455813};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> X = {911, 89, 119, 929, 721, 28, 86, 71, 193, 681, 37, 938, 343, 514, 6, 886, 399, 878, 544, 665, 440, 243, 518, 37, 632, 515, 137, 184, 114, 780, 11, 978, 642, 709, 86, 639, 584, 46, 749, 615, 524, 815, 824};
    int R = 258;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 256.24987804875144, 0.0, 152.64337522473747, 0.0, 251.3961017995307, 508.959686182106, 736.2920419962311, 0.0, 0.0, 0.0, 0.0, 193.19161472486326, 0.0, 0.0, 0.0, 0.0, 0.0, 227.86618880386797, 354.11594127887287, 520.7142605981265, 0.0, 0.0, 0.0, 229.94564575133836, 0.0, 253.6828728944861, 502.0052440171862, 0.0, 0.0, 0.0, 0.0, 249.14855006601985, 0.0, 0.0, 252.06943487856674, 0.0, 0.0, 220.47222047233072, 461.8909438555845, 0.0, 257.8429754715067};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> X = {891, 953, 414, 476, 648, 140, 159, 815, 44, 533, 81, 77, 121, 706, 344, 704, 56, 709, 300, 80, 153, 258, 765, 872, 690, 56, 612, 177, 499, 781, 380, 909, 593, 671, 761, 927, 497, 625, 8, 785, 688, 914, 503, 334, 697, 124};
    int R = 134;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 118.79393923933998, 0.0, 118.79393923933998, 0.0, 0.0, 132.64614581660487, 0.0, 0.0, 0.0, 0.0, 133.94028520202576, 260.51042386039967, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 112.36992480196825, 195.62255238812918, 0.0, 80.66597795849252, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 108.95870777500988, 208.23609694293674, 0.0, 0.0, 39.64845520319802, 0.0, 0.0, 92.44998647917694, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> X = {640, 49, 477, 791, 575, 253, 232, 327, 664, 385, 125, 448, 668, 130, 914, 754, 482, 540, 57, 496, 634, 273, 779, 475, 749, 596, 320, 402, 116, 782, 749, 72, 312, 633, 437, 983, 178, 204, 35, 956, 621, 246, 950, 178, 545, 54, 502, 532, 936};
    int R = 690;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 356.11655395389863, 897.3337007628297, 1511.7472422802673, 2167.0670115532535, 2777.325972978647, 3467.0063337255656, 4150.435188837786, 4752.540661325787, 5383.618311064708, 6022.758358315699, 6632.48862654912, 7286.476394018819, 7718.513429468328, 0.0, 671.1929677819934, 1305.3191381928982, 1992.8771357465591, 2485.635697316016, 3017.9692393740006, 3694.028408382158, 4282.058169533751, 4751.1679647842875, 5370.5902762972, 6003.854833966426, 6676.677990523927, 7309.073436427833, 7994.183646540046, 8622.119949042139, 8802.519505582613, 9491.729923379675, 9625.037837623353, 10271.953597208787, 10882.739156959507, 11544.31606103038, 11966.197560980307, 0.0, 689.5099709213783, 1358.4935282678948, 0.0, 603.2205235235286, 1182.4225608127633, 0.0, 0.0, 584.3038593060977, 1069.091441655316, 1593.873301097885, 2283.220818682448, 2842.581167652591};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> X = {388, 913, 773, 105, 501, 365, 305, 70, 516, 237, 169, 819, 446, 554, 252, 804, 139, 371, 814, 143, 347, 520, 794, 310, 40, 905, 796, 395, 733, 783, 886, 3};
    int R = 263;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 222.64096658072611, 0.0, 0.0, 225.10664139469543, 481.1710864080553, 599.2558017610594, 0.0, 0.0, 254.05708020049352, 0.0, 0.0, 239.80200165970257, 0.0, 0.0, 0.0, 123.87493693237546, 0.0, 0.0, 165.99096360946882, 364.0818518400989, 0.0, 0.0, 0.0, 0.0, 239.34911739966788, 0.0, 0.0, 258.2034081881957, 500.1951435842625, 0.0};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> X = {368, 9, 68, 652, 428, 477, 145, 582, 368, 89, 213, 958, 992, 746, 822, 854, 564, 201, 338, 559, 828, 534, 809, 913, 99, 445, 503, 388, 118, 784, 254, 167, 215, 325, 788, 94};
    int R = 773;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 684.5787025609254, 1455.3237966095348, 1961.755430692557, 2701.58851997689, 3473.033916618804, 4171.10626243978, 4808.726839272115, 5551.514157419107, 6272.408046975676, 7035.397561975718, 7241.562544453345, 8013.814446361006, 8746.626154782753, 9515.880989021705, 10288.218350541916, 11004.75795168061, 11687.22406805563, 12447.986843170185, 13188.721613516494, 13913.406372566938, 14628.314058915323, 15350.74329420415, 16116.71522580478, 0.0, 691.2401898038047, 1462.0611806959832, 2226.458982890626, 2950.7717606323968, 3343.16569534597, 3905.863660510231, 4673.952197073562, 5445.460460153096, 6210.593781868992, 6829.592974114023, 7170.0235837836};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> X = {117, 873, 363, 966, 587, 590, 218, 325, 220, 941, 257, 329, 771, 170, 160, 904, 221, 32, 95, 206, 540, 781, 823, 748, 157, 986, 979, 381, 735, 785, 391, 98, 166, 55, 464, 150, 454, 173, 348};
    int R = 468;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 274.5596474356711, 742.5500319522763, 1026.521861541058, 1482.1258562557662, 1938.1949299715795, 0.0, 0.0, 462.42837283194467, 616.2464471925347, 0.0, 467.89315019564026, 0.0, 0.0, 428.1389961215867, 891.8792251291637, 1346.5252412779914, 1674.3483643184504, 2075.525382603397, 2541.6369572290437, 3003.5882533631707, 0.0, 0.0, 467.94764664436553, 0.0, 306.11762445177834, 771.4390187589819, 1024.0018822207346, 1388.933382642389, 1851.966858753998, 2306.6128749028258, 2534.0837521596736, 2881.11112860136, 3236.9313079054577, 3611.1812244051143, 4045.230760748606};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> X = {865, 970, 427, 281, 514, 702, 291, 837, 72, 793, 301, 699, 317, 595, 730, 954, 647, 95, 852, 622, 21, 796, 70, 351, 448, 294, 687, 606, 120, 786, 760, 29, 117, 18, 139, 206, 367, 752, 375, 639, 816, 645};
    int R = 202;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 172.56592942988485, 0.0, 139.59942693292118, 0.0, 73.89181280764467, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 150.26310259009028, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 177.1863425888124, 307.90741969575794, 0.0, 185.04864225386794, 0.0, 0.0, 200.31974440878264, 0.0, 181.8240908130713, 357.9007786510699, 519.6505854515727, 710.2155350094597, 832.2114365799633, 0.0, 0.0, 0.0, 97.33961166965892, 204.87100243533257};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> X = {846, 834, 722, 595, 440, 47, 364, 581, 924, 646, 345, 838, 95, 787, 68, 772, 304, 925, 376, 37, 734, 43, 84, 954, 507, 835, 162, 599, 737, 787, 129, 192, 836, 748, 815, 262, 48, 331, 402, 809, 980, 745, 649, 96, 480, 702};
    int R = 806;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 805.9106650243561, 1604.0910957541505, 2400.022625472631, 3190.9783764473614, 3894.673622985236, 4635.718156060003, 5411.957165644036, 6141.331555103934, 6897.871045150554, 7645.557476751395, 8283.199225698247, 8595.588406048655, 9008.834095681348, 9373.079891813575, 9765.533710752823, 10421.744042887269, 10935.548480392436, 11525.66287608195, 12256.904970056305, 12661.66045179806, 13076.576105877295, 13881.532626442226, 0.0, 670.6914342676519, 1406.933242371484, 1850.4498711465503, 2527.699455864031, 3321.797686563483, 4126.245323144012, 4591.725720153381, 5395.259789126191, 5879.924621768297, 6681.106249116303, 7484.316682315474, 8070.684314437166, 8847.75573972573, 9602.439117043661, 10405.305855674675, 11100.997597755893, 11888.649170470631, 12659.629714972241, 13459.89217191996, 14046.259804041652, 14754.906401436998, 15529.73025238636};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> X = {594, 930, 17, 142, 367, 159, 436, 92, 544, 498, 389, 209, 642, 211, 639, 822, 729, 756, 133, 685, 215, 58, 99, 789, 566, 375, 870, 592, 354, 20, 265, 123, 787, 710, 490, 317, 962, 910, 661, 980, 913, 845, 96, 173, 328, 631, 174, 506, 285};
    int R = 896;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 830.6142305547143, 0.0, 887.2378486065617, 1754.527304324778, 2626.0501095341424, 3478.1574971326772, 4305.490561865376, 5079.126134987501, 5973.944552321432, 6863.289817108961, 7741.023261840332, 8525.451078787182, 9310.979563312092, 10098.146635794166, 10975.259513364665, 11866.419992739731, 12762.013092311183, 13405.975047709171, 14111.745548651226, 14874.579737711994, 15756.71748205808, 16651.778932462465, 17223.369695158995, 18091.175549022635, 18966.58116929246, 19713.43523803682, 20565.216900201485, 21429.029379852018, 22260.449851093857, 23122.30308685967, 24006.979298815208, 24608.577171151872, 25501.26244603883, 26369.83368664031, 27248.973607244534, 27870.89884390888, 28765.388642620972, 29626.094748094845, 30463.38502034217, 31356.876486445795, 32250.292403026644, 32742.03928913778, 33634.724564024735, 34517.21592375581, 35360.42823391263, 36131.12077961422, 36963.34190407574, 37831.65924238012};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> X = {342, 26, 313, 457, 294, 272, 509, 836, 396, 350, 433, 580, 420, 635, 977, 872, 386, 587, 890, 100, 928, 305, 114, 392, 857, 684, 346, 817, 739, 21, 634, 286};
    int R = 738;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 666.9242835584861, 1346.832365581343, 2070.647259045135, 2790.421529215999, 3528.093543054127, 4227.003408487431, 4888.6037410145545, 5481.093403371629, 6217.65840389772, 6950.976206763571, 7674.187794060124, 8394.634877474306, 9100.62283771159, 9754.595314196647, 10485.087613950724, 11040.468564290219, 11750.569261374794, 12423.499421198234, 0.0, 0.0, 395.61976694801285, 1108.4752922825646, 1792.1126230362324, 2365.191151686539, 3082.6275600183158, 3738.676338692585, 4306.833887265162, 5040.700360133354, 5211.346192194966, 5622.290227314104, 6273.089735611398};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> X = {323, 890, 376, 771, 220, 384, 582, 347, 248, 202, 477, 719, 966, 827, 547, 922, 44, 418, 646, 516, 409, 319, 128, 227, 915, 225, 53, 810, 357, 22, 3, 217, 689, 402, 842};
    int R = 429;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 167.37980762326143, 0.0, 396.41518638921997, 776.9897520133562, 1135.8992113481584, 1553.3198624903844, 1979.8465322309762, 2309.112382267083, 2663.3397104053847, 3014.098887049418, 3419.9560047645073, 3744.980619217013, 3953.345683467237, 0.0, 210.1547049199708, 573.5511826134125, 982.3799976448386, 1397.8219310121865, 1817.2751465201857, 2201.41053931809, 2618.831190460316, 0.0, 0.0, 393.0101779852527, 0.0, 0.0, 267.98507421123287, 696.5641217625569, 1068.3772468670911, 0.0, 318.86047105277885, 0.0};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> X = {71, 986, 671, 318, 147, 497, 654, 91, 100, 54, 521, 90, 745, 251, 885, 972, 469, 248, 171, 163, 890, 566, 375, 830, 974, 765, 529, 803, 742, 23, 140, 380, 408, 132, 517, 485, 237, 647, 742};
    int R = 492;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 377.9404715031191, 720.6575559911848, 1181.9849885160675, 1527.7652655707311, 1994.0430797545073, 0.0, 491.9176760393959, 981.7625494432114, 1136.6011751152316, 1373.8837071313917, 0.0, 0.0, 0.0, 484.2468378833258, 0.0, 439.5713821440154, 925.5086208899259, 1417.4435759398796, 0.0, 370.2539668929963, 823.6665825092801, 1010.853654712464, 1481.3087535263678, 1926.7108190806264, 2358.4144211040516, 2767.056073410813, 3255.2599242764118, 0.0, 477.88596966221974, 907.3786936983785, 1398.5812995546585, 1805.87480551811, 2112.206325280605, 2603.1645719778166, 3028.0880945086365, 3300.0513273177794, 3782.792458774381};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> X = {875, 800, 947, 262, 947, 233, 722, 800, 346, 572, 758, 609, 600, 69, 100, 793, 840, 551, 910, 684, 994, 84, 596, 404, 268, 324, 614, 713, 20, 976, 25, 877, 242, 310, 56, 868, 596, 832, 37, 28, 833, 273, 576, 794, 90, 263, 511, 478, 574, 831};
    int R = 183;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 166.92513291892266, 275.92054566643236, 0.0, 0.0, 0.0, 0.0, 165.54455593585675, 0.0, 0.0, 0.0, 106.2449998823474, 289.02355442308124, 0.0, 180.35520508152794, 0.0, 176.86152775547316, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 122.44590642402056, 296.6670302867715, 0.0, 153.9090640605679, 0.0, 0.0, 0.0, 0.0, 0.0, 169.89702763733095, 0.0, 0.0, 0.0, 0.0, 0.0, 182.7785545407338, 0.0, 0.0, 0.0, 0.0, 0.0, 59.665735560705194, 0.0, 180.0, 335.7979460711854, 0.0};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> X = {878, 548, 811, 325, 493, 159, 834, 873, 858, 424, 610, 653, 970, 616, 292, 363, 890, 208, 740, 209, 642, 797, 843, 419, 103, 383, 155, 420, 13, 361, 26, 14, 405, 262, 786, 544, 652, 513, 616, 55, 4, 437, 676, 473, 935, 111, 440, 846, 480, 633};
    int R = 101;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 93.16651759081692, 193.0464455042871, 0.0, 0.0, 91.3892772703669, 0.0, 0.0, 0.0, 71.83313998427188, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 89.9166280506559, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 100.2845950283492, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 87.17797887081348, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> X = {882, 297, 907, 621, 808, 86, 946, 713, 601, 276, 462, 698, 341, 394, 716, 701, 940, 634, 571, 966, 57, 278, 858, 665, 706, 673, 463, 896, 6, 978, 27, 383, 336, 213, 748, 220, 707, 426, 195, 314, 175, 370, 776, 920, 11, 191, 370, 214, 387, 435};
    int R = 251;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 167.4275962916508, 0.0, 0.0, 93.33809511662427, 317.96445153990777, 0.0, 168.53782958137322, 254.00712231273963, 0.0, 245.34057960313046, 0.0, 250.55139193387052, 327.2325499845938, 0.0, 242.96501805815586, 0.0, 0.0, 118.99579824514814, 0.0, 160.47429700734008, 408.10305139584, 656.9242723557895, 794.4051801211953, 0.0, 0.0, 0.0, 0.0, 0.0, 246.5603374429878, 465.3570467418253, 0.0, 0.0, 0.0, 0.0, 98.18350166906862, 319.1812392140489, 528.178846855859, 686.2168169769662, 0.0, 205.58453249211138, 0.0, 174.93141513175956, 350.88595471514174, 547.5201328226111, 729.37721956932, 975.7448310770018};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> X = {885, 277, 771, 916, 123, 13, 59, 786, 113, 127, 314, 742, 712, 940, 140, 271, 990, 291, 402, 722, 473, 991, 104, 680, 309, 732, 4, 604, 231, 595, 28, 751, 499, 932, 478, 895, 763, 107, 774, 341, 345, 535, 876, 367, 856, 39, 300, 582, 61, 5};
    int R = 170;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 88.74119674649424, 0.0, 129.6148139681572, 293.27299433198743, 0.0, 0.0, 169.42254867637897, 0.0, 0.0, 167.33200530681512, 0.0, 0.0, 108.34666584625482, 0.0, 0.0, 128.75946567146045, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 107.12609392673663, 0.0, 0.0, 0.0, 169.95293466133498, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 160.51168181786645};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> X = {888, 26, 867, 211, 669, 940, 171, 859, 856, 979, 167, 786, 851, 719, 332, 841, 40, 716, 233, 479, 120, 472, 119, 694, 144, 791, 312, 79, 224, 980, 29, 888, 430, 883, 440, 571, 51, 789, 353, 368, 516, 467, 975, 45, 932, 119, 229, 182, 968, 807};
    int R = 320;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 0.0, 170.17344093600505, 0.0, 0.0, 319.98593719099597, 615.4025921040188, 0.0, 0.0, 313.328900677866, 604.8353328538988, 0.0, 0.0, 0.0, 0.0, 0.0, 204.65580861534323, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 219.34219840240502, 504.60523491432326, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 291.95718864244463, 0.0, 0.0, 0.0, 319.64824416849217, 603.3664141893776, 919.5925990634325, 0.0, 0.0, 0.0, 0.0, 300.4995840263344, 617.0292034934547, 0.0, 276.5483682830184};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> X = {891, 774, 732, 275, 984, 866, 516, 931, 368, 599, 19, 830, 222, 265, 757, 179, 858, 373, 63, 4, 536, 185, 366, 709, 747, 82, 853, 787, 217, 597, 29, 257, 361, 834, 170, 246, 107, 702, 932, 395, 687, 632, 75, 492, 8, 966, 159, 550, 642, 609};
    int R = 238;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 207.25588049558448, 441.5206879251256, 0.0, 0.0, 206.688170924221, 0.0, 0.0, 0.0, 57.29746940310715, 0.0, 0.0, 0.0, 234.08331850005885, 0.0, 0.0, 0.0, 0.0, 0.0, 230.5710302705004, 0.0, 0.0, 154.54125662747796, 0.0, 234.9468024894146, 0.0, 0.0, 228.66569484730323, 0.0, 0.0, 0.0, 68.26419266350405, 282.3389459624393, 0.0, 0.0, 225.53935355055003, 418.73096827541326, 0.0, 61.18823416311342, 0.0, 0.0, 231.55776817027754, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 219.49943052317926, 455.20051240444684};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> X = {895, 755, 828, 570, 298, 793, 628, 4, 112, 451, 639, 874, 593, 43, 181, 750, 908, 31, 894, 760, 951, 666, 381, 724, 582, 140, 393, 263, 442, 982, 262, 626, 524, 785, 133, 922, 162, 383, 511, 654, 857, 565, 175, 171, 853, 46, 88, 918, 548, 179};
    int R = 388;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 361.8618520927565, 742.93271164515, 1032.7257412369606, 1309.4205189253007, 0.0, 351.1680509385784, 0.0, 372.6660703632677, 561.4066330412463, 900.8178880107891, 1209.555640804321, 1477.1056361322971, 0.0, 362.62928728937493, 0.0, 354.3726851776248, 0.0, 0.0, 364.1263516967702, 701.8584940818266, 965.1435107462771, 1228.4285274107276, 1409.7983154130297, 1770.8800236176962, 0.0, 294.1683191643859, 659.7418411815036, 1003.9844881617985, 0.0, 0.0, 134.34284498997332, 508.6956197893596, 795.789681030619, 0.0, 0.0, 0.0, 318.90907795169454, 685.187660454139, 1045.87450523781, 1376.5329392751107, 1632.0324500378517, 0.0, 387.9793808954285, 0.0, 0.0, 385.7201057761962, 0.0, 116.8075340035907, 236.7366797522368};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> X = {898, 503, 924, 865, 845, 720, 741, 77, 623, 303, 491, 918, 732, 590, 373, 88, 958, 456, 725, 517, 599, 379, 628, 970, 185, 199, 702, 970, 435, 599, 263, 762, 455, 504, 863, 598, 218, 296, 322, 682, 28, 729, 275, 618, 929, 894, 18, 517, 455, 981};
    int R = 539;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 366.736962958467, 703.3079064458691, 1239.0690472539723, 1777.6978619306474, 2302.003116529531, 2840.5938702563285, 0.0, 0.0, 433.729178174584, 938.8796508062544, 1267.805174291435, 1773.6954786065107, 2293.65413080878, 2787.0424160365505, 3244.5312137136084, 0.0, 196.25748393373436, 663.33349487842, 1160.5829292672386, 1693.3089376430264, 2185.3668610626173, 2663.404516483192, 3080.0062447561313, 0.0, 538.8181511419228, 732.4982998407505, 1200.148810371852, 1265.6926888045477, 1779.1369408903997, 2200.59275114813, 2404.3573211793305, 2847.383279786724, 3384.1513861417866, 3786.1961597678096, 4255.553166746506, 4637.8109331816695, 5171.137287302671, 5709.509834894021, 6110.659432924482, 0.0, 0.0, 290.5253861541191, 706.304173491809, 1146.5313875529118, 1684.3938234972711, 0.0, 203.76457003120046, 739.1868332963733, 856.8516113737571};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> X = {901, 251, 788, 928, 159, 647, 853, 150, 367, 155, 343, 962, 103, 368, 797, 658, 8, 113, 555, 42, 14, 859, 643, 985, 20, 490, 243, 446, 428, 216, 264, 131, 618, 455, 825, 41, 274, 977, 901, 709, 199, 662, 375, 65, 773, 974, 947, 885, 129, 783};
    int R = 457;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 435.02758533224073, 0.0, 0.0, 407.9374952121955, 0.0, 402.1939830479815, 807.0458077937766, 1223.5851216646283, 0.0, 0.0, 372.32244090304306, 529.8279963606205, 965.1761329134258, 0.0, 444.7740999653644, 560.8990326887034, 0.0, 456.1414254373308, 0.0, 402.7319207611932, 705.8573073588848, 0.0, 0.0, 384.4996749023333, 793.9383149938616, 1250.5836916265391, 1655.4355163723342, 2109.9077377456542, 2547.1262185993346, 0.0, 426.9426190953534, 695.1757266715808, 0.0, 393.14119600977966, 0.0, 450.6362169200341, 865.3469594864644, 0.0, 0.0, 355.64026768632374, 691.4214464322445, 0.0, 410.4241708281811, 866.6258806013909, 1319.4006590508977, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> X = {904, 232, 884, 224, 474, 805, 966, 222, 878, 7, 195, 6, 473, 914, 221, 996, 58, 538, 386, 798, 430, 572, 889, 999, 623, 549, 783, 154, 653, 601, 265, 268, 549, 406, 555, 717, 330, 891, 480, 968, 369, 827, 474, 744, 850, 822, 109, 253, 36, 585};
    int R = 607;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 553.1265677943883, 1061.936945047054, 1647.1958621085541, 0.0, 0.0, 0.0, 577.1524928474277, 1153.9782897740215, 1541.7411038756318, 1958.8358173400918, 0.0, 0.0, 0.0, 371.54945834975996, 959.2100746922199, 1404.9734648444396, 1887.7000955579315, 2477.85685439409, 2995.5053838037657, 3592.4551304324077, 4068.9769032822956, 4671.449309289409, 5231.53233884842, 0.0, 345.61249977395204, 950.3810505435833, 1455.903552515553, 2062.8961389612195, 2600.9370296005836, 3190.8522777506887, 3779.280693108071, 4364.263598841221, 4831.895933052619, 5063.688944163825, 5510.374515903052, 5871.352354558004, 5969.576587820473, 6367.929446477217, 6861.731026061569, 7405.375211167967, 8003.048198678696, 8609.402055762166, 0.0, 589.6719426935624, 1156.558174666081, 1415.4944602654539};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> X = {908, 980, 748, 519, 21, 732, 78, 295, 622, 859, 47, 50, 612, 693, 413, 566, 876, 195, 217, 555, 77, 53, 904, 14, 458, 608, 92, 629, 646, 218, 266, 637, 712, 358, 517, 392, 385, 572, 59, 995, 540, 759, 806, 191, 694, 902, 38, 621, 942, 155};
    int R = 525;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 520.0394215826335, 990.9969568233387, 1463.4204956103047, 1629.6161634238792, 0.0, 0.0, 478.05439021098846, 888.7805763739843, 1357.2418874766195, 0.0, 524.9914285014565, 0.0, 518.7137939172237, 962.8140078329569, 1465.0251188211548, 1888.7290248687625, 0.0, 524.5388450820396, 926.2613861473874, 1143.3811687559742, 1667.8323104269596, 0.0, 0.0, 280.15888349292084, 783.2741784303735, 880.0677732597835, 0.0, 524.7246897183322, 828.7658053589639, 1351.5669147686513, 1723.0288912884562, 2242.6441335591194, 2630.3411802334526, 3130.685061978798, 3640.5870133380763, 4165.5403445971515, 4656.107363464095, 4767.713814890525, 0.0, 261.9160170741759, 739.057505523881, 1261.9494637714715, 0.0, 150.3861695768597, 632.4245497915476, 0.0, 0.0, 415.4323049547303, 0.0};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> X = {911, 729, 845, 814, 335, 659, 191, 368, 134, 479, 899, 94, 983, 239, 837, 904, 926, 621, 280, 312, 493, 766, 151, 29, 61, 898, 632, 337, 639, 835, 267, 5, 643, 309, 247, 68, 441, 253, 638, 22, 711, 924, 906, 638, 770, 750, 968, 221, 616, 957};
    int R = 676;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 651.0391693285435, 1317.0121417531007, 1992.3009688485886, 2469.3072581153024, 3062.6031370829555, 3550.4063761045923, 4202.822654258349, 4837.030821976174, 5418.366353317584, 5948.060604749483, 0.0, 0.0, 0.0, 315.23324697753566, 987.9047864379174, 1663.5467034324154, 2266.8302188710522, 2850.521061697972, 3525.763240475335, 4177.081135208775, 4795.504129606622, 5076.130215350624, 5741.030207830696, 6416.272386608059, 0.0, 621.4660087245319, 1229.7019826688556, 1834.4928556158602, 2481.4549874288437, 2847.995571812074, 3471.158471863096, 3694.613165257529, 4282.337590477377, 4955.488390818578, 5607.358776708289, 6171.137988811751, 6820.469953218248, 7376.123622332382, 7654.5477592171, 0.0, 641.5660527178787, 1317.3263652548019, 1937.932520557825, 2600.9196999210462, 3276.623777161964, 3916.5081417154356, 0.0, 548.5900108459869, 1132.2808536729067};
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> X = {914, 709, 709, 878, 650, 585, 303, 441, 877, 331, 751, 138, 354, 17, 262, 474, 976, 278, 110, 836, 140, 247, 166, 275, 664, 957, 173, 813, 864, 221, 268, 142, 574, 28, 209, 743, 497, 166, 217, 49, 881, 857, 6, 317, 847, 829, 897, 589, 523, 760};
    int R = 594;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 557.5042600734097, 1151.5042600734096, 1720.9557505447228, 2269.4555226504185, 2859.8884146881164, 3382.6809165471236, 3960.428266173238, 4363.838727118415, 4597.76179139383, 5017.8046463503215, 0.0, 553.3353413618183, 1042.4846028352463, 1583.604737371007, 2138.48490461435, 2456.0254532061795, 0.0, 569.7473124113882, 0.0, 0.0, 584.2833216856357, 1172.7346790636266, 1756.6482000579601, 2205.5524214682737, 2722.260269289458, 0.0, 0.0, 591.8065562326933, 0.0, 592.137652915266, 1172.6202107927616, 1580.3112702973822, 1814.2343345727973, 2379.986046898973, 2640.1398475631186, 3180.8061032144215, 3674.03525888144, 4265.841815114133, 4835.589127525522, 0.0, 593.5149534763215, 0.0, 506.07805722042525, 774.2869310482686, 1368.0141411372117, 1958.1090487580113, 2466.0184895050797, 3056.340435565024, 3601.011896172242};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> X = {918, 457, 805, 173, 964, 512, 415, 281, 389, 183, 603, 182, 493, 564, 454, 812, 26, 935, 941, 593, 556, 960, 181, 290, 499, 16, 481, 520, 857, 838, 269, 511, 737, 979, 171, 419, 553, 847, 796, 308, 52, 22, 106, 763, 691, 677, 827, 957, 197, 330};
    int R = 744;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 583.9648962052428, 1241.560516628615, 1634.1315293129446, 0.0, 590.9585433852361, 1328.6081892198965, 2060.4415035750167, 2796.5610590821366, 3511.4736411507415, 4125.587637083093, 4739.016524567209, 5414.8974312364235, 6155.501914074598, 6891.325262440223, 7543.530751530893, 0.0, 0.0, 743.9758060582346, 1401.571426481607, 2144.650830044914, 2769.4067823975106, 0.0, 735.9721462120697, 1450.0134615433326, 2015.9171635987263, 2596.7019774497776, 3339.6790968821324, 4002.979179800867, 4746.736532705697, 5226.085048923282, 5929.6275138818655, 6638.471643433631, 7342.014108392214, 0.0, 701.4499269370551, 1433.2832412921753, 2116.730386285846, 2858.9803441841273, 3420.578064977223, 4119.148032840142, 4862.54294807699, 5601.785803977539, 5950.908991405702, 6691.416925191695, 7435.285193099394, 8164.007362379291, 8896.561797216731, 0.0, 732.015710213927};
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> X = {921, 206, 669, 468, 511, 439, 528, 354, 132, 35, 455, 226, 864, 342, 878, 382, 76, 360, 772, 350, 971, 441, 427, 304, 101, 307, 22, 996, 850, 223, 270, 880, 668, 930, 901, 95, 608, 761, 607, 335, 223, 954, 206, 442, 767, 757, 757, 557, 103, 132};
    int R = 662;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 473.1543088676251, 1103.902277552424, 1764.5042757328715, 2422.577220017926, 3078.5673114065075, 3717.291038850541, 4340.957616438278, 4995.812562208714, 5507.519509591686, 6128.6499306789165, 6305.285148005473, 6712.421488805457, 7100.941758546946, 7539.379895574281, 8126.41311439584, 8724.399736319776, 9242.56959264104, 9752.628412778484, 9981.981851819628, 10378.647958261809, 11040.499905452418, 11690.972810345465, 12321.07994409337, 12950.212680485301, 13547.723349846108, 0.0, 645.6996205667152, 858.102539567373, 1518.432002790089, 1775.6167612809452, 2402.7531100919514, 3010.700476234778, 3672.064974828405, 0.0, 418.4196458102798, 1062.4965045779272, 1706.3349936417608, 2309.87455323997, 2962.331448367916, 0.0, 0.0, 618.5046483252976, 1195.2359549144232, 1857.1604219044266, 2519.1604219044266, 3150.226187098515, 3632.0228246957486, 4293.387323289376};
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> X = {924, 186, 765, 764, 825, 366, 640, 427, 644, 887, 308, 270, 235, 888, 302, 720, 126, 18, 603, 106, 619, 154, 442, 319, 936, 365, 562, 704, 843, 840, 271, 16, 831, 881, 863, 770, 664, 442, 186, 362, 393, 119, 305, 889, 612, 605, 686, 925, 10, 934};
    int R = 813;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 341.06451002706217, 911.7903636555797, 1724.789748649197, 2535.4980809117933, 3206.5331023525523, 3971.9695791421027, 4756.571388979424, 5540.076334720036, 6315.911368731778, 6886.637222360295, 7698.748667914413, 8510.994935988327, 8995.308883753616, 9558.84504053506, 10256.157739401213, 10811.255028171388, 11617.04966702176, 12181.623842839252, 12825.021076280615, 13455.734957529474, 14122.626253019225, 14882.905806867677, 15686.547518079831, 16215.962289313124, 16794.691932583624, 17583.46312881229, 18383.966095702483, 19184.995433492302, 19997.98989841811, 20578.686032381476, 21350.660125211023, 0.0, 811.4610280229113, 1624.2617416052753, 2431.9250377875396, 3237.985209238778, 4020.088143640638, 4791.731195835109, 5585.452179556719, 6397.860943665034, 7163.297420454584, 7954.734720561169, 8520.343242420591, 9284.699180449465, 10097.669044589582, 10906.623925902502, 11683.70049870598, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> X = {927, 935, 629, 827, 140, 292, 985, 499, 388, 507, 160, 314, 374, 667, 494, 290, 944, 443, 433, 631, 34, 635, 689, 566, 539, 424, 871, 179, 68, 457, 272, 385, 762, 832, 593, 446, 720, 123, 765, 389, 564, 52, 405, 336, 688, 685, 616, 293, 684, 504};
    int R = 731;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 730.9562230393828, 1394.8274454914485, 2098.501375660813, 2348.2852822681043, 3063.3076595403127, 3295.927521117092, 3841.972391068271, 4564.495747092144, 5285.744663902422, 5929.135680314681, 6643.729970804046, 7372.263429198374, 8041.973814364977, 8752.207578698946, 9454.165554649075, 9780.731015161971, 10313.046710966632, 11043.97830831347, 11747.652238482835, 12169.495811386347, 12585.62079261194, 13314.623536091003, 14035.201082230209, 14765.702280038946, 15487.599779688308, 16066.00448229713, 16301.582494853481, 17024.105850877353, 17643.00810487228, 18350.211046042634, 19072.424310944352, 19698.708591443232, 20426.349299485326, 21117.174892526, 21833.241928494, 22510.94761682781, 22932.79118973132, 23282.358064592197, 23909.243221538825, 24618.98683721987, 25140.731027412727, 25780.849766397925, 26508.585982344335, 27149.255163747654, 27880.24900777098, 28607.98522371739, 29263.753475464913, 29881.3941477008, 30589.886208347918};
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> X = {931, 683, 726, 122, 687, 451, 97, 572, 899, 359, 12, 358, 744, 213, 918, 629, 994, 100, 264, 388, 450, 116, 704, 580, 374, 715, 411, 887, 61, 842, 505, 754, 925, 551, 555, 121, 776, 36, 344, 648, 503, 216, 505, 15, 533, 533, 545, 661, 591, 306};
    int R = 881;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 845.3738817824927, 1725.3238803619574, 2366.6857127155827, 3042.656126269312, 3891.4582233449496, 4698.207874723864, 5440.189006559438, 6258.255018565804, 6954.359177438598, 7764.144334131408, 8574.357269105913, 9366.29476663965, 10069.288365472526, 10597.621593653379, 11429.871556104565, 12231.704456402376, 0.0, 865.6009473192598, 1737.8308482054883, 2616.64652853897, 3431.8796240398824, 4087.941358939884, 4960.171259826113, 5816.748751942267, 6629.078734153929, 7455.967481205187, 8197.307484172787, 8503.714076791157, 8911.390419003947, 9725.387961997782, 10570.467839879157, 11434.713175417624, 12232.387921163032, 13113.378840525995, 13880.063260610295, 14469.245745074999, 14947.326282223292, 15772.733454472236, 16599.622201523496, 17468.607817054617, 18301.549591730374, 19133.79955418156, 19865.961421530577, 20578.58825234738, 21459.58825234738, 22340.50652324429, 23213.83635784288, 24092.05102408343, 24925.67923857716};
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> X = {934, 663, 822, 418, 1, 378, 210, 645, 643, 210, 864, 402, 115, 991, 343, 199, 44, 525, 95, 144, 97, 829, 951, 595, 977, 774, 952, 363, 54, 459, 506, 890, 856, 502, 286, 797, 831, 717, 923, 675, 673, 149, 605, 462, 609, 613, 475, 261, 497, 108};
    int R = 31;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 30.93541659651604, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 30.93541659651604, 0.0, 0.0, 0.0, 0.0, 30.740852297878796, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> X = {937, 412, 686, 713, 316, 305, 322, 718, 154, 62, 716, 446, 254, 538, 535, 537, 94, 182, 925, 669, 513, 310, 966, 609, 812, 833, 261, 71, 279, 76, 507, 259, 787, 453, 248, 473, 887, 631, 502, 702, 844, 314, 705, 141, 685, 693, 404, 629, 171, 678};
    int R = 950;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 791.7543811056557, 1701.3828767015225, 2650.9991149788593, 3514.0697957460834, 4464.006109400846, 5413.85399195889, 6277.383956696652, 7041.8471670606295, 7987.381936384318, 8676.427653300112, 9587.251456238968, 10517.647071017971, 11424.203191729755, 12374.198454875841, 13324.19634961035, 14164.583760272839, 15110.49918989644, 15702.488210064888, 16617.345575996867, 17554.449625716, 18482.507274787436, 19169.649181528686, 20050.018990188662, 20978.0766392601, 21927.84450563588, 22686.34038565106, 23617.146487908667, 24544.09632473912, 25472.153973810557, 26318.75836784593, 27235.81670841102, 28025.573633040367, 28914.923957715633, 29842.541874748287, 30765.512621847025, 31620.558819429356, 32535.416185361337, 33476.617014090254, 34405.32579514059, 35344.65321409524, 36133.06934787232, 36998.874753260854, 37763.337963624836, 38542.160151290285, 39492.126466482565, 40397.10105176107, 41320.071798859804, 42152.379434292765, 42955.779085773895};
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> X = {940, 160, 782, 776, 862, 231, 435, 790, 898, 914, 568, 490, 625, 316, 959, 107, 144, 608, 756, 426, 928, 23, 212, 624, 415, 123, 801, 546, 272, 461, 508, 628, 950, 405, 978, 148, 175, 312, 81, 961, 15, 246, 804, 588, 530, 540, 566, 997, 78, 480};
    int R = 100;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 99.81983770774224, 150.84924099643453, 0.0, 0.0, 0.0, 0.0, 98.71170143402453, 0.0, 62.57795138864806, 0.0, 0.0, 0.0, 0.0, 92.90317540321213, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 88.26664149042944, 0.0, 0.0, 0.0, 0.0, 0.0, 96.28603221651622, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 81.4616474176652, 180.96039112832722, 277.5212527649137, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> X = {944, 141, 646, 72, 177, 158, 547, 863, 410, 534, 420, 534, 996, 862, 383, 677, 962, 265, 587, 182, 576, 504, 227, 871, 250, 182, 342, 254, 265, 78, 509, 765, 882, 124, 940, 824, 231, 225, 892, 988, 185, 411, 136, 35, 606, 620, 495, 597, 752, 282};
    int R = 18;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 14.247806848775006, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 16.97056274847714, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 11.313708498984761, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> X = {947, 889, 743, 367, 491, 85, 659, 936, 153, 386, 272, 578, 135, 641, 575, 15, 12, 922, 418, 939, 991, 217, 474, 885, 853, 241, 650, 730, 490, 463, 510, 133, 45, 75, 670, 499, 286, 906, 471, 15, 356, 344, 236, 713, 450, 468, 425, 965, 659, 84};
    int R = 168;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 157.670542588018, 240.7849216087386, 0.0, 113.34901852243803, 0.0, 0.0, 0.0, 0.0, 0.0, 123.4017828072188, 0.0, 0.0, 0.0, 154.4927182750048, 0.0, 167.97321215003302, 0.0, 0.0, 0.0, 159.74980438172688, 0.0, 0.0, 0.0, 164.92422502470643, 0.0, 0.0, 147.7294825009551, 0.0, 165.81616326522575, 327.10782454999276, 0.0, 143.10835055998655, 308.4080783274575, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 167.5708805252273, 296.2565440623906, 0.0, 0.0, 167.03293088490065, 329.43674857401777, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> X = {950, 637, 607, 430, 38, 11, 772, 9, 665, 238, 124, 623, 506, 187, 999, 585, 62, 347, 248, 464, 407, 698, 489, 900, 456, 532, 191, 437, 483, 80, 510, 270, 976, 26, 632, 175, 342, 588, 50, 42, 527, 508, 336, 160, 527, 548, 354, 333, 565, 654};
    int R = 87;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 81.6639455328972, 0.0, 0.0, 82.70429251254133, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 65.72670690061993, 0.0, 0.0, 0.0, 0.0, 42.34383071948026, 0.0, 0.0, 73.84443106964804, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 86.63140308225418, 0.0, 84.8999411071645, 0.0, 0.0, 0.0, 84.42748367682174, 0.0, 84.42748367682174, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> X = {953, 618, 703, 725, 353, 938, 884, 849, 408, 90, 976, 667, 877, 965, 424, 923, 112, 5, 79, 220, 54, 410, 504, 914, 291, 590, 499, 913, 476, 697, 511, 639, 139, 977, 594, 851, 398, 501, 629, 301, 697, 441, 436, 607, 371, 396, 284, 701, 239, 456};
    int R = 237;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 221.23290894439734, 457.2096027088452, 0.0, 0.0, 230.76611536358627, 465.1674805473241, 0.0, 0.0, 0.0, 0.0, 109.85900054160332, 329.91581138825717, 0.0, 0.0, 0.0, 211.47103820618085, 436.62209860785873, 627.1161930045092, 796.2699691964701, 0.0, 217.56148556212793, 0.0, 0.0, 0.0, 218.8332698654389, 0.0, 0.0, 85.60373823613078, 232.48123821485456, 431.9430140015952, 0.0, 0.0, 0.0, 0.0, 0.0, 213.44788591129216, 412.9096616980328, 0.0, 0.0, 0.0, 236.9472515139182, 401.0447834880463, 422.79334665897784, 658.4710927446022, 867.3370784866564, 0.0, 0.0, 95.28903399657277};
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> X = {957, 366, 567, 21, 667, 97, 997, 922, 920, 942, 828, 711, 15, 511, 616, 493, 162, 430, 910, 977, 470, 891, 751, 929, 894, 649, 40, 621, 469, 82, 512, 8, 70, 928, 324, 526, 454, 182, 208, 328, 868, 606, 535, 286, 447, 476, 213, 301, 146, 258};
    int R = 155;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 135.64659966250537, 290.63369589957927, 444.0644620450952, 549.083507936781, 650.7496281538916, 0.0, 0.0, 114.0175425099138, 208.33615149032656, 0.0, 0.0, 0.0, 139.77124167724918, 0.0, 0.0, 66.52067347825036, 0.0, 150.99668870541498, 0.0, 0.0, 0.0, 30.347981810987037, 0.0, 0.0, 0.0, 142.05984654363104, 0.0, 0.0, 0.0, 137.26252219743014, 0.0, 152.8037957643723, 250.9108801161152, 0.0, 0.0, 137.78243719719867, 0.0, 0.0, 152.26293048539424, 0.0, 127.59702190882042, 127.59702190882042, 234.74645027873754};
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> X = {960, 115, 663, 316, 214, 24, 341, 995, 663, 794, 681, 755, 386, 290, 40, 831, 212, 87, 740, 502, 885, 604, 765, 176, 729, 940, 580, 96, 693, 699, 513, 144, 1, 647, 286, 202, 509, 95, 787, 355, 39, 539, 635, 733, 524, 324, 143, 669, 52, 828};
    int R = 305;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 287.43868911473976, 526.0282949235427, 0.0, 0.0, 0.0, 275.4342026691674, 558.7291020231798, 854.6159047028533, 0.0, 289.4978410973042, 464.2118931938657, 0.0, 0.0, 278.20855486487113, 0.0, 190.7380402541664, 0.0, 118.59173664298875, 377.6361343820636, 0.0, 0.0, 220.23623680039577, 0.0, 0.0, 0.0, 304.9409778957233, 546.66189134758, 0.0, 269.3993318477238, 0.0, 0.0, 293.2047066470796, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 289.4978410973042, 578.324778899165, 800.4598729298021, 1030.7314517231912, 1276.2187222689365, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> X = {963, 95, 527, 379, 528, 950, 454, 67, 175, 414, 533, 799, 757, 836, 464, 401, 30, 512, 571, 258, 533, 85, 12, 190, 332, 999, 889, 804, 686, 316, 514, 513, 164, 598, 16, 877, 565, 776, 366, 382, 209, 703, 735, 412, 368, 403, 73, 37, 726, 630};
    int R = 224;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 168.14279645586961, 335.4000832926469, 0.0, 0.0, 0.0, 196.24474515257728, 0.0, 189.77618396416344, 0.0, 220.02727103702395, 429.6340457366982, 0.0, 214.9581354589772, 0.0, 0.0, 216.09025891973937, 0.0, 0.0, 0.0, 211.77110284455713, 347.7563961670337, 520.9961144766638, 0.0, 195.13072541247828, 402.3769557762656, 592.7765356077348, 0.0, 104.74731500138799, 328.7450828474092, 0.0, 0.0, 0.0, 0.0, 0.0, 75.1997340420829, 0.0, 223.42784070030305, 365.71979409191266, 0.0, 221.70250336881628, 0.0, 219.63606261267753, 440.88479142258507, 0.0, 221.08821768696765, 0.0, 202.3857702507763};
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> X = {967, 843, 624, 675, 843, 877, 566, 140, 919, 266, 385, 843, 896, 614, 656, 740, 80, 169, 402, 15, 948, 798, 27, 205, 167, 58, 430, 280, 679, 702, 747, 882, 95, 549, 978, 553, 621, 458, 177, 641, 380, 636, 835, 859, 445, 251, 2, 637, 633, 432};
    int R = 374;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 352.845575287547, 656.0204423197599, 1026.526852520717, 1360.6705341907436, 1733.1218732942566, 1940.8596888214254, 0.0, 0.0, 0.0, 354.5631114484416, 0.0, 370.2256068939586, 615.892047418504, 987.5262761972859, 1351.9710593949605, 0.0, 363.25610800095296, 655.8086673813145, 0.0, 0.0, 342.6018096858217, 0.0, 328.92552348518046, 700.990034020652, 1058.753922639948, 1097.380338471604, 1439.9821481574259, 0.0, 373.2921108193957, 744.575021818542, 1093.3600559011413, 0.0, 0.0, 0.0, 0.0, 367.7662300973269, 704.3772816093057, 951.1869248568903, 0.0, 267.8712377243962, 540.5248641444385, 857.1871448158188, 1230.4162969462493, 0.0, 319.74990226738146, 598.8108275148979, 0.0, 373.9786090139381, 689.3751847721413};
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> X = {970, 592, 720, 970, 158, 804, 679, 213, 430, 118, 237, 887, 267, 161, 80, 310, 130, 827, 465, 772, 364, 279, 274, 219, 770, 348, 970, 987, 904, 319, 748, 19, 258, 500, 708, 228, 677, 371, 756, 668, 551, 801, 935, 306, 289, 331, 932, 5, 539, 2};
    int R = 524;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 362.8939238951239, 871.019892528887, 1331.5369931885693, 0.0, 0.0, 508.8722826014402, 748.4969891740304, 1225.4529619849388, 1646.4422730131405, 2156.7510030971944, 0.0, 0.0, 513.1666396016016, 1030.8682911346057, 1501.6930993170122, 1993.8069072923627, 0.0, 378.8561732372854, 803.5054402801004, 1132.3093332010935, 1649.3692910396405, 2173.3454355347885, 2694.45099106073, 0.0, 310.63161461770113, 0.0, 523.7241640405758, 1041.1089338202823, 0.0, 300.89034547489223, 0.0, 466.32070509468053, 931.091616404758, 1412.040678156624, 1622.2215526433383, 1892.3604058281403, 2317.7308326328257, 2673.189691011682, 3189.747529012423, 3700.5185148759506, 4161.035615535633, 4667.612361942335, 0.0, 523.7241640405758, 1046.0382457959886, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> X = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 1000, 500, 250, 125, 1};
    int R = 2;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 1.7320508075688772, 3.4641016151377544, 5.196152422706632, 6.928203230275509, 8.660254037844386, 10.392304845413262, 12.124355652982139, 13.856406460551016, 15.588457268119893, 17.32050807568877, 19.05255888325765, 20.784609690826528, 22.516660498395407, 24.248711305964285, 25.980762113533164, 27.712812921102042, 29.44486372867092, 31.1769145362398, 32.908965343808674, 34.64101615137755, 36.373066958946424, 38.1051177665153, 39.837168574084174, 41.56921938165305, 43.301270189221924, 45.0333209967908, 46.765371804359674, 48.49742261192855, 50.229473419497424, 51.9615242270663, 53.693575034635174, 55.42562584220405, 57.157676649772924, 58.8897274573418, 60.621778264910674, 62.35382907247955, 64.08587988004842, 65.8179306876173, 67.54998149518619, 69.28203230275507, 71.01408311032395, 72.74613391789283, 74.47818472546172, 76.2102355330306, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> X = {1, 10, 25, 13};
    int R = 10;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 4.358898943540674, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> X = {0, 9};
    int R = 100;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 99.5941765365827};
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> X = {1, 1, 5, 1};
    int R = 2;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 2.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> X = {10, 0};
    int R = 2;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> X = {0, 9, 19, 20};
    int R = 10;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 4.358898943540674, 4.358898943540674, 14.308773314606874};
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> X = {0, 100, 10};
    int R = 5;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> X = {19, 9, 0};
    int R = 10;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 4.358898943540674};
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> X = {1, 2, 1};
    int R = 10;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 9.9498743710662, 19.8997487421324};
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> X = {0, 10, 19, 29, 40};
    int R = 10;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 4.358898943540674, 4.358898943540674, 0.0};
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> X = {1, 10, 5};
    int R = 5;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> X = {0, 5, 20, 6};
    int R = 10;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 8.660254037844387, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> X = {3, 7, 1};
    int R = 5;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 3.0, 0.0};
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> X = {0, 19, 9};
    int R = 10;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> X = {1, 2, 3, 4};
    int R = 10;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 9.9498743710662, 19.8997487421324, 29.849623113198597};
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> X = {0, 23, 9};
    int R = 10;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> X = {5, 0};
    int R = 1;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> X = {0, 3, 6, 2};
    int R = 3;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> X = {221, 735, 316, 141, 643, 829, 220, 711, 743, 423, 800, 555, 443, 702, 287, 214, 591, 125, 471, 801, 502, 981, 337, 474, 568, 459, 467, 24, 115, 823, 497, 423, 806, 739, 36, 785, 690, 815, 181, 53, 516, 907, 601, 856, 420, 350, 732, 643, 936, 707};
    int R = 500;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 272.83511504203415, 741.209964921914, 0.0, 464.1163647190217, 0.0, 94.44045743218317, 593.4154067031861, 977.602860949157, 1306.0400695598746, 1741.9012860038247, 2229.1958581057515, 2656.886166623492, 2935.7678619711787, 3430.4101569682807, 3758.8473655789985, 3940.0765023092717, 4301.025252133953, 4676.658051553812, 5077.406102079326, 5220.7902016162, 0.0, 480.86484587667667, 971.9493599880464, 1459.9237445616632, 1959.8597404651387, 2191.7023594979646, 2683.3516247267453, 0.0, 379.10948286741655, 873.6031633123744, 1195.0234489198638, 1690.5141148258926, 0.0, 0.0, 490.8920451586072, 975.0149634345344, 0.0, 483.338390778138, 672.1001453790104, 983.7393598562646, 1379.1682409461516, 1809.2554414067095, 2054.008378059163, 2549.084129838626, 2871.6922512491074, 3363.7074949153985, 3768.863020608928, 4213.3391167040945};
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> X = {0, 9, 20};
    int R = 10;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 4.358898943540674, 0.0};
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> X = {0, 9, 19};
    int R = 11;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 6.324555320336759, 10.907131015292599};
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> X = {20, 12};
    int R = 5;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> X = {0, 9, 19};
    int R = 1;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> X = {7, 5, 0};
    int R = 4;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 3.4641016151377544, 0.0};
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> X = {1, 20, 3};
    int R = 5;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> X = {1, 9, 17, 1};
    int R = 10;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 6.0, 12.0, 0.0};
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> X = {49, 60, 71, 0, 0, 0, 0, 0, 0, 5, 9};
    int R = 20;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 16.703293088490067, 33.406586176980134, 0.0, 20.0, 40.0, 60.0, 80.0, 100.0, 119.36491673103708, 138.96083467330251};
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> X = {0, 9, 30, 19};
    int R = 10;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 4.358898943540674, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> X = {1000, 0, 100, 99};
    int R = 10;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 9.9498743710662};
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> X = {1, 1, 1, 1, 1};
    int R = 10;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 10.0, 20.0, 30.0, 40.0};
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> X = {1000, 0, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 1000};
    int R = 999;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 998.99549548534, 1997.9949949847141, 2996.994494484088, 3995.993993983462, 4994.993493482836, 5993.99299298221, 6992.992492481584, 7991.991991980958, 8990.991991980958, 9989.991991980958, 10988.991991980958, 11987.991991980958, 12986.991991980958, 13985.991991980958, 14984.991991980958, 15983.991991980958, 16982.991991980958, 17981.991991980958, 18980.991491480334, 19979.99099097971, 20978.990490479086, 21977.98998997846, 22976.989489477837, 23975.988988977213, 24974.98848847659, 25973.987987975965, 26972.98748747534, 27971.986986974716, 28970.986486474092, 29969.985985973468, 30968.985485472844, 31967.98498497222, 32966.98448447159, 33965.98398397097, 34964.98348347034, 35963.98298296972, 36962.982482469095, 37961.98198196847, 38960.98148146785, 39959.98098096722, 40958.9804804666, 41957.979979965974, 42956.97947946535, 43955.978978964726, 44954.9784784641, 45953.97797796348, 46952.97747746285, 46952.97747746285};
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> X = {30, 40, 200};
    int R = 20;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 17.320508075688775, 0.0};
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> X = {0, 12, 5};
    int R = 5;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> X = {1, 9, 20};
    int R = 10;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 6.0, 0.0};
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> X = {0, 4, 9, 12, 5};
    int R = 5;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 3.0, 3.0, 7.0, 0.0};
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> X = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int R = 1;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> X = {19, 15, 23, 27};
    int R = 5;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 3.0, 0.0, 3.0};
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> X = {0, 11, 22, 33, 44};
    int R = 12;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 4.795831523312719, 9.591663046625438, 14.387494569938157, 19.183326093250876};
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> X = {0, 9, 100};
    int R = 10;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 4.358898943540674, 0.0};
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> X = {0, 5, 10, 3};
    int R = 6;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 3.3166247903554, 6.6332495807108, 0.0};
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> X = {1, 4, 2};
    int R = 4;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 2.6457513110645907, 6.109852926202345};
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> X = {1, 2, 100};
    int R = 10;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 9.9498743710662, 0.0};
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> X = {0, 0, 50, 51, 30, 41};
    int R = 10;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 10.0, 0.0, 9.9498743710662, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<int> X = {0, 10, 5, 92, 2};
    int R = 7;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 4.898979485566356, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<int> X = {0, 9, 10, 21};
    int R = 10;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 4.358898943540674, 14.308773314606874, 0.0};
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<int> X = {1, 9, 200};
    int R = 10;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 6.0, 0.0};
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<int> X = {0, 0, 497, 510, 443, 941};
    int R = 497;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 497.0, 497.0, 993.8299507879935, 1486.2931473824192, 0.0};
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<int> X = {1, 2};
    int R = 20;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 19.974984355438178};
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<int> X = {100, 50, 20};
    int R = 10;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<int> X = {1, 100, 1};
    int R = 10;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<int> X = {0, 19, 9, 18, 10};
    int R = 10;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 4.358898943540674, 10.358898943540673};
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<int> X = {0, 9, 25};
    int R = 10;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 4.358898943540674, 0.0};
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<int> X = {0, 9, 18};
    int R = 10;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 4.358898943540674, 8.717797887081348};
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<int> X = {2, 100, 1};
    int R = 15;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<int> X = {10, 1, 100, 99, 3, 4, 50, 99, 2, 55, 39, 67};
    int R = 9;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 8.94427190999916, 0.0, 8.94427190999916, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<int> X = {0, 5, 10, 6, 9, 7, 8, 13, 2, 25, 16, 25, 17, 23};
    int R = 9;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 7.483314773547883, 14.966629547095765, 23.028887295394313, 31.51416866963288, 40.289133057025005, 49.233404967024164, 56.716719740572046, 0.0, 0.0, 0.0, 0.0, 4.123105625617661, 10.831309558117031};
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<int> X = {1, 2, 100};
    int R = 2;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 1.7320508075688772, 0.0};
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<int> X = {0, 100, 10};
    int R = 10;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<int> X = {50, 0};
    int R = 10;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<int> X = {0, 0, 0};
    int R = 2;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 2.0, 4.0};
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<int> X = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int R = 1000;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 1000.0, 2000.0, 3000.0, 4000.0, 5000.0, 6000.0, 7000.0, 8000.0, 9000.0, 10000.0, 11000.0, 12000.0, 13000.0, 14000.0, 15000.0, 16000.0, 17000.0, 18000.0, 19000.0, 20000.0, 21000.0, 22000.0, 23000.0, 24000.0, 25000.0, 26000.0, 27000.0, 28000.0, 29000.0, 30000.0, 31000.0, 32000.0, 33000.0, 34000.0, 35000.0, 36000.0, 37000.0, 38000.0, 39000.0, 40000.0, 41000.0, 42000.0, 43000.0, 44000.0, 45000.0, 46000.0, 47000.0, 48000.0, 49000.0};
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<int> X = {20, 30, 40, 50};
    int R = 12;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 6.6332495807108, 13.2664991614216, 19.8997487421324};
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<int> X = {10, 20, 5, 20, 30, 14, 30};
    int R = 15;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 11.180339887498949, 11.180339887498949, 11.180339887498949, 22.360679774997898, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<int> X = {1, 2, 100};
    int R = 3;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 2.8284271247461903, 0.0};
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<int> X = {1, 10, 2};
    int R = 5;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    vector<int> X = {1, 100, 105, 200};
    int R = 10;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 8.660254037844387, 0.0};
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    vector<int> X = {0, 22, 11};
    int R = 10;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    vector<int> X = {0, 9, 190};
    int R = 10;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 4.358898943540674, 0.0};
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    vector<int> X = {100, 0};
    int R = 10;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    vector<int> X = {1, 100, 5, 6, 90, 70, 8, 89, 90, 88};
    int R = 9;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 8.94427190999916, 0.0, 0.0, 0.0, 0.0, 8.94427190999916, 17.719236297391284};
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    vector<int> X = {0, 5, 12, 22, 40, 10};
    int R = 10;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 8.660254037844387, 15.801682466387238, 15.801682466387238, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    vector<int> X = {0, 9, 11};
    int R = 10;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 4.358898943540674, 14.156857914673385};
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    vector<int> X = {1, 50, 3};
    int R = 10;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    vector<int> X = {10, 20, 200};
    int R = 12;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 6.6332495807108, 0.0};
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    vector<int> X = {100, 1};
    int R = 10;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    vector<int> X = {0, 1, 100};
    int R = 5;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 4.898979485566356, 0.0};
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    vector<int> X = {100, 1, 99};
    int R = 10;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    vector<int> X = {100, 109, 0};
    int R = 10;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 4.358898943540674, 0.0};
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    vector<int> X = {0, 9, 19};
    int R = 10;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 4.358898943540674, 4.358898943540674};
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    vector<int> X = {5, 12, 16, 1000, 999, 993};
    int R = 10;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 7.14142842854285, 16.30657981845453, 0.0, 9.9498743710662, 17.9498743710662};
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    vector<int> X = {0, 9, 19, 2};
    int R = 10;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 4.358898943540674, 4.358898943540674, 0.0};
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    vector<int> X = {5, 16, 5};
    int R = 1;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    vector<int> X = {1, 10, 11, 20};
    int R = 5;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 4.898979485566356, 0.0};
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    vector<int> X = {0, 9, 19, 8};
    int R = 10;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 4.358898943540674, 4.358898943540674, 0.0};
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    vector<int> X = {0, 1, 2, 3, 100, 101, 103, 400};
    int R = 50;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 49.98999899979995, 99.9799979995999, 149.96999699939985, 0.0, 49.98999899979995, 99.94998298698714, 0.0};
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    vector<int> X = {20, 18};
    int R = 1;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    vector<int> X = {0, 3, 6};
    int R = 5;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 4.0, 8.0};
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    vector<int> X = {1, 44, 557, 888, 444, 222, 555, 455, 333, 333, 333, 222, 1000, 0, 222, 334, 555, 999, 444, 222, 111, 321, 455, 321};
    int R = 453;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 450.95454316372064, 0.0, 309.2701084812433, 399.11998327247494, 793.9933807051204, 1101.1089941147939, 1542.933619956315, 1979.1961555928283, 2432.1961555928283, 2885.1961555928283, 3324.386319417111, 0.0, 0.0, 394.8733974326455, 833.8096114774655, 1229.243550334514, 1319.0934251257459, 0.0, 394.8733974326455, 834.0635612569279, 1235.4474174345276, 1668.1748143023478, 2100.902211170168};
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    vector<int> X = {0, 1, 20, 2};
    int R = 10;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 9.9498743710662, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    vector<int> X = {0, 12};
    int R = 10;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    vector<int> X = {1, 20, 2};
    int R = 10;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test191() {
    vector<int> X = {22, 1};
    int R = 5;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 191: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 191: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test192() {
    vector<int> X = {100, 0};
    int R = 1;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 192: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 192: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test193() {
    vector<int> X = {10, 2, 12};
    int R = 5;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 193: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 193: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test194() {
    vector<int> X = {10, 100, 1};
    int R = 10;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 194: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 194: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test195() {
    vector<int> X = {0, 19, 8};
    int R = 10;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 195: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 195: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test196() {
    vector<int> X = {0, 11};
    int R = 12;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 4.795831523312719};
    if(result == expected) {
        cout << "Test Case 196: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 196: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test197() {
    vector<int> X = {0, 2, 1};
    int R = 2;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 1.7320508075688772};
    if(result == expected) {
        cout << "Test Case 197: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 197: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test198() {
    vector<int> X = {1, 2, 50};
    int R = 3;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 2.8284271247461903, 0.0};
    if(result == expected) {
        cout << "Test Case 198: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 198: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test199() {
    vector<int> X = {0, 9, 30};
    int R = 10;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 4.358898943540674, 0.0};
    if(result == expected) {
        cout << "Test Case 199: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 199: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test200() {
    vector<int> X = {0, 1, 10};
    int R = 2;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 1.7320508075688772, 0.0};
    if(result == expected) {
        cout << "Test Case 200: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 200: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test201() {
    vector<int> X = {0, 9, 19, 15, 1};
    int R = 10;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 4.358898943540674, 4.358898943540674, 13.524050333452355, 0.0};
    if(result == expected) {
        cout << "Test Case 201: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 201: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test202() {
    vector<int> X = {10, 0};
    int R = 5;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 202: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 202: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test203() {
    vector<int> X = {5, 3};
    int R = 1;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 203: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 203: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test204() {
    vector<int> X = {0, 8, 20};
    int R = 10;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 6.0, 0.0};
    if(result == expected) {
        cout << "Test Case 204: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 204: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test205() {
    vector<int> X = {5, 5, 15, 20, 5};
    int R = 10;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 10.0, 10.0, 18.66025403784439, 0.0};
    if(result == expected) {
        cout << "Test Case 205: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 205: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test206() {
    vector<int> X = {3, 9, 19, 20, 900};
    int R = 10;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 8.0, 8.0, 17.9498743710662, 0.0};
    if(result == expected) {
        cout << "Test Case 206: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 206: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test207() {
    vector<int> X = {0, 9, 19, 5, 3, 8};
    int R = 10;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 4.358898943540674, 4.358898943540674, 0.0, 9.797958971132712, 18.458213008977097};
    if(result == expected) {
        cout << "Test Case 207: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 207: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test208() {
    vector<int> X = {190, 1};
    int R = 3;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 208: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 208: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test209() {
    vector<int> X = {7, 5, 0, 1, 2, 3, 10, 15, 41, 10, 12};
    int R = 4;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 3.4641016151377544, 0.0, 3.872983346207417, 7.745966692414834, 11.618950038622252, 0.0, 0.0, 0.0, 0.0, 3.4641016151377544};
    if(result == expected) {
        cout << "Test Case 209: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 209: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test210() {
    vector<int> X = {30, 20, 10};
    int R = 5;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 210: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 210: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test211() {
    vector<int> X = {1, 2, 20, 1};
    int R = 10;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 9.9498743710662, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 211: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 211: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test212() {
    vector<int> X = {100, 1, 101};
    int R = 10;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 212: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 212: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test213() {
    vector<int> X = {10, 5};
    int R = 2;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 213: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 213: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test214() {
    vector<int> X = {10, 1};
    int R = 5;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 214: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 214: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test215() {
    vector<int> X = {1, 50, 75, 76, 100};
    int R = 25;
    FallingPoints* pObj = new FallingPoints();
    clock_t start = clock();
    vector<double> result = pObj->getHeights(X, R);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 24.979991993593593, 31.979991993593593};
    if(result == expected) {
        cout << "Test Case 215: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 215: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test191() == 0 ? ++passed : ++failed;
    test192() == 0 ? ++passed : ++failed;
    test193() == 0 ? ++passed : ++failed;
    test194() == 0 ? ++passed : ++failed;
    test195() == 0 ? ++passed : ++failed;
    test196() == 0 ? ++passed : ++failed;
    test197() == 0 ? ++passed : ++failed;
    test198() == 0 ? ++passed : ++failed;
    test199() == 0 ? ++passed : ++failed;
    test200() == 0 ? ++passed : ++failed;
    test201() == 0 ? ++passed : ++failed;
    test202() == 0 ? ++passed : ++failed;
    test203() == 0 ? ++passed : ++failed;
    test204() == 0 ? ++passed : ++failed;
    test205() == 0 ? ++passed : ++failed;
    test206() == 0 ? ++passed : ++failed;
    test207() == 0 ? ++passed : ++failed;
    test208() == 0 ? ++passed : ++failed;
    test209() == 0 ? ++passed : ++failed;
    test210() == 0 ? ++passed : ++failed;
    test211() == 0 ? ++passed : ++failed;
    test212() == 0 ? ++passed : ++failed;
    test213() == 0 ? ++passed : ++failed;
    test214() == 0 ? ++passed : ++failed;
    test215() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22711493&rd=13522&pm=10261
********************************************************************************
#include <vector>
#include <string>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <algorithm>
#include <sstream>
#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
 
#define FOR(i,a,b) for(int i = (int)a ; i < (int)b ; ++i )
#define REP(i,n) FOR(i,0,n)
#define PB push_back
#define INF 1000000000
#define ALL(x) x.begin(),x.end()
#define SORT(x) sort(ALL(x))
 
template<class A, class B> A cvt(B x) {stringstream s;s<<x;A r;s>>r;return r;}
typedef long long LL;
typedef vector<int> VI;
 
class FallingPoints {
public:
  vector <double> getHeights(vector <int>, int);
};
 
vector <double> FallingPoints::getHeights(vector <int> X, int R) {
      
      vector<double> ans;
      ans.PB(0.0);
      FOR(i,1,X.size()) {
        
        double tmp = R*R - ((X[i] - X[i-1])*(X[i] - X[i-1]));
        
        if(tmp < 0) { ans.PB(0.0); continue; }
        double y = sqrt(tmp);
        ans.PB(y+ans[i-1]);
      }
      return ans;
}
 
 
 
 
 
 
//Powered by KawigiEdit 2.1.4 (beta) modified by pivanof!

********************************************************************************
*******************************************************************************/