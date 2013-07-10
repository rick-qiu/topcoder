/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6730
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

class InscribedTriangles {
public:
    double findLargest(vector<int> angleFrom, vector<int> angleTo);
};

double InscribedTriangles::findLargest(vector<int> angleFrom, vector<int> angleTo) {
    double ret;
    return ret;
}


int test0() {
    vector<int> angleFrom = {0, 89000, 180000};
    vector<int> angleTo = {0, 91000, 180000};
    InscribedTriangles* pObj = new InscribedTriangles();
    clock_t start = clock();
    double result = pObj->findLargest(angleFrom, angleTo);
    clock_t end = clock();
    delete pObj;
    double expected = 25.0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> angleFrom = {0};
    vector<int> angleTo = {240000};
    InscribedTriangles* pObj = new InscribedTriangles();
    clock_t start = clock();
    double result = pObj->findLargest(angleFrom, angleTo);
    clock_t end = clock();
    delete pObj;
    double expected = 32.47595264191645;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> angleFrom = {0};
    vector<int> angleTo = {360};
    InscribedTriangles* pObj = new InscribedTriangles();
    clock_t start = clock();
    double result = pObj->findLargest(angleFrom, angleTo);
    clock_t end = clock();
    delete pObj;
    double expected = 3.87577502193079E-7;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> angleFrom = {29829};
    vector<int> angleTo = {29829};
    InscribedTriangles* pObj = new InscribedTriangles();
    clock_t start = clock();
    double result = pObj->findLargest(angleFrom, angleTo);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> angleFrom = {0, 30000, 60000};
    vector<int> angleTo = {0, 180000, 60000};
    InscribedTriangles* pObj = new InscribedTriangles();
    clock_t start = clock();
    double result = pObj->findLargest(angleFrom, angleTo);
    clock_t end = clock();
    delete pObj;
    double expected = 25.0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> angleFrom = {0};
    vector<int> angleTo = {238000};
    InscribedTriangles* pObj = new InscribedTriangles();
    clock_t start = clock();
    double result = pObj->findLargest(angleFrom, angleTo);
    clock_t end = clock();
    delete pObj;
    double expected = 32.46609388044022;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> angleFrom = {0, 1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000, 11000, 12000, 13000, 14000, 15000, 16000, 17000, 18000, 19000, 20000, 21000, 22000, 23000, 24000, 24999, 26000, 27000, 28000, 29000};
    vector<int> angleTo = {1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000, 11000, 12000, 13000, 14000, 15000, 16000, 17000, 18000, 19000, 20000, 21000, 22000, 23000, 24000, 24999, 26000, 27000, 28000, 29000, 29999};
    InscribedTriangles* pObj = new InscribedTriangles();
    clock_t start = clock();
    double result = pObj->findLargest(angleFrom, angleTo);
    clock_t end = clock();
    delete pObj;
    double expected = 0.22045433337735376;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> angleFrom = {260001, 89000};
    vector<int> angleTo = {280000, 91000};
    InscribedTriangles* pObj = new InscribedTriangles();
    clock_t start = clock();
    double result = pObj->findLargest(angleFrom, angleTo);
    clock_t end = clock();
    delete pObj;
    double expected = 8.616036371577957;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> angleFrom = {15050, 140055, 259900};
    vector<int> angleTo = {60045, 140900, 260000};
    InscribedTriangles* pObj = new InscribedTriangles();
    clock_t start = clock();
    double result = pObj->findLargest(angleFrom, angleTo);
    clock_t end = clock();
    delete pObj;
    double expected = 32.47594515984052;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> angleFrom = {0};
    vector<int> angleTo = {360000};
    InscribedTriangles* pObj = new InscribedTriangles();
    clock_t start = clock();
    double result = pObj->findLargest(angleFrom, angleTo);
    clock_t end = clock();
    delete pObj;
    double expected = 32.47595264191645;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> angleFrom = {15000, 25000, 100000, 265000, 330000};
    vector<int> angleTo = {15000, 25000, 100000, 265000, 330000};
    InscribedTriangles* pObj = new InscribedTriangles();
    clock_t start = clock();
    double result = pObj->findLargest(angleFrom, angleTo);
    clock_t end = clock();
    delete pObj;
    double expected = 27.433829549752186;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> angleFrom = {245900, 246500, 249900};
    vector<int> angleTo = {245915, 246611, 252901};
    InscribedTriangles* pObj = new InscribedTriangles();
    clock_t start = clock();
    double result = pObj->findLargest(angleFrom, angleTo);
    clock_t end = clock();
    delete pObj;
    double expected = 0.002789909594714814;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> angleFrom = {42};
    vector<int> angleTo = {42};
    InscribedTriangles* pObj = new InscribedTriangles();
    clock_t start = clock();
    double result = pObj->findLargest(angleFrom, angleTo);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> angleFrom = {357050, 180050, 85000};
    vector<int> angleTo = {359050, 183050, 95000};
    InscribedTriangles* pObj = new InscribedTriangles();
    clock_t start = clock();
    double result = pObj->findLargest(angleFrom, angleTo);
    clock_t end = clock();
    delete pObj;
    double expected = 26.272344159710006;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> angleFrom = {29838, 35000, 353722};
    vector<int> angleTo = {50002, 67002, 360000};
    InscribedTriangles* pObj = new InscribedTriangles();
    clock_t start = clock();
    double result = pObj->findLargest(angleFrom, angleTo);
    clock_t end = clock();
    delete pObj;
    double expected = 2.9481034394618586;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> angleFrom = {0};
    vector<int> angleTo = {180000};
    InscribedTriangles* pObj = new InscribedTriangles();
    clock_t start = clock();
    double result = pObj->findLargest(angleFrom, angleTo);
    clock_t end = clock();
    delete pObj;
    double expected = 25.0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> angleFrom = {0, 270000};
    vector<int> angleTo = {180000, 270000};
    InscribedTriangles* pObj = new InscribedTriangles();
    clock_t start = clock();
    double result = pObj->findLargest(angleFrom, angleTo);
    clock_t end = clock();
    delete pObj;
    double expected = 32.47595264191645;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> angleFrom = {89000, 211154, 319387, 89000, 211167, 319378, 89000, 211002, 319487, 89000, 211255, 319487, 89000, 211491, 319032, 89000, 211437, 319437, 89000, 211315, 319185, 89000, 211097, 319436, 89000, 211237, 319056, 89000, 211473, 319406};
    vector<int> angleTo = {90007, 211955, 320088, 90002, 211968, 320079, 90008, 211803, 320188, 90006, 212056, 320188, 90003, 212292, 319733, 90001, 212238, 320138, 90000, 212116, 319886, 90003, 211898, 320137, 90005, 212038, 319757, 90001, 212274, 320107};
    InscribedTriangles* pObj = new InscribedTriangles();
    clock_t start = clock();
    double result = pObj->findLargest(angleFrom, angleTo);
    clock_t end = clock();
    delete pObj;
    double expected = 32.146162619223226;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> angleFrom = {89117, 209337, 329205, 89314, 209183, 329242, 89185, 209147, 329276, 89413, 209204, 329095, 89288, 209369, 329423, 89101, 209212, 329041, 89227, 209147, 329390, 89025, 209481, 329005, 89269, 209331, 329275, 89486, 209147, 329134};
    vector<int> angleTo = {89633, 209547, 329592, 89794, 209250, 329677, 89191, 209158, 329591, 89685, 209636, 329548, 89439, 209927, 329611, 89609, 209717, 329078, 89808, 209687, 329827, 89490, 209484, 329474, 89712, 209636, 329503, 89563, 209501, 329565};
    InscribedTriangles* pObj = new InscribedTriangles();
    clock_t start = clock();
    double result = pObj->findLargest(angleFrom, angleTo);
    clock_t end = clock();
    delete pObj;
    double expected = 32.47595264191645;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> angleFrom = {89000, 190180, 290031, 89000, 190402, 290273, 89000, 190546, 290021, 89000, 190534, 290443, 89000, 190169, 290461, 89000, 190013, 290393, 89000, 190004, 290351, 89000, 190027, 290588, 89000, 190040, 290197, 89000, 190343, 290153};
    vector<int> angleTo = {90000, 190218, 290444, 90000, 190991, 290423, 90000, 190986, 290177, 90000, 190548, 290851, 90000, 190251, 290892, 90000, 190365, 290753, 90000, 190603, 290696, 90000, 190177, 290700, 90000, 190561, 290670, 90000, 190741, 290340};
    InscribedTriangles* pObj = new InscribedTriangles();
    clock_t start = clock();
    double result = pObj->findLargest(angleFrom, angleTo);
    clock_t end = clock();
    delete pObj;
    double expected = 29.205879798138202;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> angleFrom = {127810, 122418, 23013, 267998, 126963, 287095, 215811, 339465, 351723, 318957, 333732, 236254, 302352, 335353, 12935, 233802, 327782, 281682, 182002, 169344, 28119, 108889, 44436, 329409, 207139, 305965, 96162, 207326, 209792, 302449};
    vector<int> angleTo = {303690, 284236, 250009, 288745, 189203, 346252, 322811, 357974, 359054, 327362, 352355, 291192, 321761, 344459, 64616, 237047, 333294, 302581, 309236, 268884, 117195, 312676, 245636, 329767, 258518, 326023, 155880, 249512, 271361, 317795};
    InscribedTriangles* pObj = new InscribedTriangles();
    clock_t start = clock();
    double result = pObj->findLargest(angleFrom, angleTo);
    clock_t end = clock();
    delete pObj;
    double expected = 32.47595264191645;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> angleFrom = {42661, 145219, 87097, 76231, 55982, 109200, 24711, 20792, 41394, 82149, 164445, 102096, 176399, 181589, 83997, 34423, 109514, 19182, 173332, 182443, 162774, 88230, 62177, 173717, 129227, 6179, 7528, 101197, 105439, 87112};
    vector<int> angleTo = {138019, 168222, 176528, 171293, 121916, 160479, 113283, 89752, 123301, 135625, 183555, 175807, 180437, 183986, 123684, 96872, 140320, 22910, 174716, 183934, 177533, 183010, 137224, 184258, 134431, 55763, 43517, 139773, 155558, 118707};
    InscribedTriangles* pObj = new InscribedTriangles();
    clock_t start = clock();
    double result = pObj->findLargest(angleFrom, angleTo);
    clock_t end = clock();
    delete pObj;
    double expected = 24.577468560856083;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> angleFrom = {3630, 4439, 964, 390, 4014, 3286, 4147, 1072, 3480, 3414, 4642, 4594, 1789, 2649, 2872, 4758, 3150, 3891, 4961, 1693, 3730, 2624, 239, 4355, 4144, 4405, 3737, 3032, 1964, 2373};
    vector<int> angleTo = {4134, 4679, 3699, 3848, 4383, 3718, 4957, 4921, 4160, 4916, 4857, 4755, 2528, 3399, 4737, 4811, 4439, 4031, 4984, 4566, 4554, 4004, 3476, 4660, 4328, 4909, 4484, 3739, 3036, 3794};
    InscribedTriangles* pObj = new InscribedTriangles();
    clock_t start = clock();
    double result = pObj->findLargest(angleFrom, angleTo);
    clock_t end = clock();
    delete pObj;
    double expected = 8.871041458287127E-4;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> angleFrom = {199000, 40277, 40222, 130, 114, 40236, 40295, 40294, 40187, 40245, 40189, 105, 40198, 40181, 6, 40154, 77, 40, 40297, 26, 40289, 83, 122, 40249, 40175, 91, 40194, 41, 40207, 109};
    vector<int> angleTo = {201000, 40361, 40275, 215, 202, 40312, 40327, 40385, 40230, 40264, 40193, 181, 40298, 40267, 24, 40154, 153, 72, 40368, 53, 40348, 128, 177, 40329, 40232, 187, 40199, 132, 40256, 197};
    InscribedTriangles* pObj = new InscribedTriangles();
    clock_t start = clock();
    double result = pObj->findLargest(angleFrom, angleTo);
    clock_t end = clock();
    delete pObj;
    double expected = 16.72616437390915;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> angleFrom = {89999, 280283, 280235, 260051, 280179, 260132, 280216, 280230, 260115, 260076, 280195, 280203, 280195, 260096, 260008, 260012, 280186, 280179, 260136, 260075, 280270, 280167, 260050, 260143, 280295, 280205, 280167, 260046, 280230, 280294};
    vector<int> angleTo = {90501, 280374, 280313, 260082, 280234, 260225, 280268, 280284, 260147, 260140, 280201, 280274, 280261, 260168, 260060, 260104, 280227, 280261, 260195, 260123, 280295, 280168, 260057, 260180, 280313, 280239, 280196, 260127, 280234, 280324};
    InscribedTriangles* pObj = new InscribedTriangles();
    clock_t start = clock();
    double result = pObj->findLargest(angleFrom, angleTo);
    clock_t end = clock();
    delete pObj;
    double expected = 8.770015291003363;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> angleFrom = {167800, 190000, 356000};
    vector<int> angleTo = {172000, 190100, 360000};
    InscribedTriangles* pObj = new InscribedTriangles();
    clock_t start = clock();
    double result = pObj->findLargest(angleFrom, angleTo);
    clock_t end = clock();
    delete pObj;
    double expected = 9.577657806760245;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> angleFrom = {10000, 340000, 170000};
    vector<int> angleTo = {11000, 350000, 190000};
    InscribedTriangles* pObj = new InscribedTriangles();
    clock_t start = clock();
    double result = pObj->findLargest(angleFrom, angleTo);
    clock_t end = clock();
    delete pObj;
    double expected = 13.118935338332117;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> angleFrom = {70000, 70000, 70000, 70000, 70000, 110000, 110000, 110000, 110000, 70000, 110000};
    vector<int> angleTo = {70000, 70000, 70000, 70000, 70000, 110000, 110000, 110000, 110000, 70000, 110000};
    InscribedTriangles* pObj = new InscribedTriangles();
    clock_t start = clock();
    double result = pObj->findLargest(angleFrom, angleTo);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> angleFrom = {0, 360000};
    vector<int> angleTo = {0, 360000};
    InscribedTriangles* pObj = new InscribedTriangles();
    clock_t start = clock();
    double result = pObj->findLargest(angleFrom, angleTo);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> angleFrom = {0, 80000, 200000};
    vector<int> angleTo = {0, 130000, 250000};
    InscribedTriangles* pObj = new InscribedTriangles();
    clock_t start = clock();
    double result = pObj->findLargest(angleFrom, angleTo);
    clock_t end = clock();
    delete pObj;
    double expected = 32.47595264191645;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> angleFrom = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> angleTo = {360000, 360000, 360000, 360000, 360000, 360000, 360000, 360000, 360000, 360000, 360000, 360000, 360000, 360000, 360000, 360000, 360000, 360000, 360000, 360000, 360000, 360000, 360000, 360000, 360000, 360000, 360000, 360000, 360000, 360000};
    InscribedTriangles* pObj = new InscribedTriangles();
    clock_t start = clock();
    double result = pObj->findLargest(angleFrom, angleTo);
    clock_t end = clock();
    delete pObj;
    double expected = 32.47595264191645;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> angleFrom = {0};
    vector<int> angleTo = {89999};
    InscribedTriangles* pObj = new InscribedTriangles();
    clock_t start = clock();
    double result = pObj->findLargest(angleFrom, angleTo);
    clock_t end = clock();
    delete pObj;
    double expected = 5.177515264125743;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> angleFrom = {99967, 73399, 342872};
    vector<int> angleTo = {166166, 172032, 347768};
    InscribedTriangles* pObj = new InscribedTriangles();
    clock_t start = clock();
    double result = pObj->findLargest(angleFrom, angleTo);
    clock_t end = clock();
    delete pObj;
    double expected = 26.910070281680067;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> angleFrom = {0, 60000, 180000};
    vector<int> angleTo = {0, 120000, 180000};
    InscribedTriangles* pObj = new InscribedTriangles();
    clock_t start = clock();
    double result = pObj->findLargest(angleFrom, angleTo);
    clock_t end = clock();
    delete pObj;
    double expected = 25.0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> angleFrom = {0};
    vector<int> angleTo = {360000};
    InscribedTriangles* pObj = new InscribedTriangles();
    clock_t start = clock();
    double result = pObj->findLargest(angleFrom, angleTo);
    clock_t end = clock();
    delete pObj;
    double expected = 32.47595264191645;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> angleFrom = {0, 10000};
    vector<int> angleTo = {180000, 190000};
    InscribedTriangles* pObj = new InscribedTriangles();
    clock_t start = clock();
    double result = pObj->findLargest(angleFrom, angleTo);
    clock_t end = clock();
    delete pObj;
    double expected = 27.075469673130268;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> angleFrom = {0, 120001, 230000};
    vector<int> angleTo = {0, 120001, 250000};
    InscribedTriangles* pObj = new InscribedTriangles();
    clock_t start = clock();
    double result = pObj->findLargest(angleFrom, angleTo);
    clock_t end = clock();
    delete pObj;
    double expected = 32.47595263944327;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> angleFrom = {200000, 300001, 68000};
    vector<int> angleTo = {200001, 300003, 73000};
    InscribedTriangles* pObj = new InscribedTriangles();
    clock_t start = clock();
    double result = pObj->findLargest(angleFrom, angleTo);
    clock_t end = clock();
    delete pObj;
    double expected = 31.461515018229893;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> angleFrom = {0, 100000};
    vector<int> angleTo = {0, 250000};
    InscribedTriangles* pObj = new InscribedTriangles();
    clock_t start = clock();
    double result = pObj->findLargest(angleFrom, angleTo);
    clock_t end = clock();
    delete pObj;
    double expected = 32.47595264191645;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> angleFrom = {0};
    vector<int> angleTo = {239000};
    InscribedTriangles* pObj = new InscribedTriangles();
    clock_t start = clock();
    double result = pObj->findLargest(angleFrom, angleTo);
    clock_t end = clock();
    delete pObj;
    double expected = 32.473483657273896;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> angleFrom = {45000, 91111, 265000};
    vector<int> angleTo = {48000, 93000, 287123};
    InscribedTriangles* pObj = new InscribedTriangles();
    clock_t start = clock();
    double result = pObj->findLargest(angleFrom, angleTo);
    clock_t end = clock();
    delete pObj;
    double expected = 19.06381920154999;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> angleFrom = {3000, 265000};
    vector<int> angleTo = {3000, 360000};
    InscribedTriangles* pObj = new InscribedTriangles();
    clock_t start = clock();
    double result = pObj->findLargest(angleFrom, angleTo);
    clock_t end = clock();
    delete pObj;
    double expected = 6.4893886462996715;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> angleFrom = {245900, 246500, 249900};
    vector<int> angleTo = {245915, 246611, 282901};
    InscribedTriangles* pObj = new InscribedTriangles();
    clock_t start = clock();
    double result = pObj->findLargest(angleFrom, angleTo);
    clock_t end = clock();
    delete pObj;
    double expected = 0.409961278457731;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> angleFrom = {0, 180000, 80000};
    vector<int> angleTo = {0, 180000, 100000};
    InscribedTriangles* pObj = new InscribedTriangles();
    clock_t start = clock();
    double result = pObj->findLargest(angleFrom, angleTo);
    clock_t end = clock();
    delete pObj;
    double expected = 25.0;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=14970299&rd=10006&pm=6730
********************************************************************************
#include <algorithm> 
#include <bitset> 
#include <cassert> 
#include <cctype> 
#include <cmath> 
#include <complex> 
#include <cstdio> 
#include <cstdlib> 
#include <cstring> 
#include <ctime> 
#include <deque> 
#include <functional> 
#include <iostream> 
#include <iterator> 
#include <list> 
#include <map> 
#include <numeric> 
#include <queue> 
#include <set> 
#include <sstream> 
#include <stack> 
#include <string> 
#include <valarray> 
#include <vector> 
#include <utility> 
 
using namespace std; 
 
#define all(v) (v).begin(), (v).end() 
 
// Types 
typedef long double ld; 
typedef long long ll; 
typedef pair <int, int> pii; 
typedef vector <int> vi; 
typedef vector <pii> vp; 
typedef vector <ld> vd; 
typedef vector <string> vs; 
typedef vector <bool> vb; 
typedef queue <pii> qp; 
typedef map <string, int> msi; 
 
// Constants 
const int INF = 1000000000; 
const ld EPS = 1e-10L; 
const ld PI = 3.14159265358979L; 
 
vi a, b; 
 
double S(double ang1, double ang2, double ang3) 
{ 
  double x1 = 5 * cos(ang1 / 180000 * PI); 
  double x2 = 5 * cos(ang2 / 180000 * PI); 
  double x3 = 5 * cos(ang3 / 180000 * PI); 
  double y1 = 5 * sin(ang1 / 180000 * PI); 
  double y2 = 5 * sin(ang2 / 180000 * PI); 
  double y3 = 5 * sin(ang3 / 180000 * PI); 
  return 0.5 * fabs((x1 - x2) * (y1 + y2) + (x2 - x3) * (y2 + y3) + (x3 - x1) * (y3 + y1)); 
} 
 
bool valid(double x) 
{ 
  for (int i = 0; i < a.size(); ++i) 
  { 
    if (x > a[i] - EPS && x < b[i] + EPS) 
      return true; 
  } 
  if (fabs(x) < EPS) 
    return valid(360000); 
  return false; 
} 
 
class InscribedTriangles 
{ 
// Global 
 
// Functions 
public: 
  double findLargest(vector <int> _a, vector <int> _b) 
  { 
    a = _a; 
    b = _b; 
    double res = 0; 
    int n = a.size(); 
    vi pts; 
    for (int i = 0; i < n; ++i) 
      pts.push_back(a[i]); 
    for (int i = 0; i < n; ++i) 
      pts.push_back(b[i]); 
    sort(all(pts)); 
    pts.resize(unique(all(pts)) - pts.begin()); 
    for (int i = 0; i < pts.size(); ++i) 
    { 
      for (int j = i + 1; j < pts.size(); ++j) 
      { 
        for (int k = j + 1; k < pts.size(); ++k) 
          res = max(res, S(pts[i], pts[j], pts[k])); 
      } 
    } 
    for (int i = 0; i < pts.size(); ++i) 
    { 
      for (int j = i + 1; j < pts.size(); ++j) 
      { 
        double k = (pts[i] + pts[j]) / 2; 
        if (valid(k)) 
          res = max(res, S(pts[i], pts[j], k)); 
        k = (pts[i] + pts[j] + 360000) / 2; 
        if (k > 360000 - EPS) 
          k -= 360000; 
        if (valid(k)) 
          res = max(res, S(pts[i], pts[j], k)); 
        k = (pts[i] + pts[j] + 360000) / 2; 
        if (k > 360000 - EPS) 
          k -= 360000; 
      } 
    } 
    for (int i = 0; i < 120000; ++i) 
    { 
      int j = i + 120000; 
      int k = j + 120000; 
      if (valid(i) && valid(j) && valid(k)) 
        res = max(res, S(i, j, k)); 
    } 
    return res; 
  } 
   
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/