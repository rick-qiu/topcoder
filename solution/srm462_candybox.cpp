/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10744
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

class CandyBox {
public:
    vector<double> expectedScore(int C, vector<int> score, int S);
};

vector<double> CandyBox::expectedScore(int C, vector<int> score, int S) {
    vector<double> ret;
    return ret;
}


int test0() {
    int C = 10;
    vector<int> score = {1, 10};
    int S = 0;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.0, 10.0};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int C = 2;
    vector<int> score = {1, 10};
    int S = 1;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {4.0, 7.000000000000001};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int C = 1;
    vector<int> score = {1, 10};
    int S = 1;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {10.0, 1.0};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int C = 1;
    vector<int> score = {1, 10};
    int S = 2;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.0, 10.0};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int C = 10;
    vector<int> score = {5};
    int S = 100;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {5.0};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int C = 1;
    vector<int> score = {1, 4, 10};
    int S = 1;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {5.0, 5.0, 5.0};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int C = 100;
    vector<int> score = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39, 41, 43, 45, 47, 49, 51, 53, 55, 57, 59, 61, 63, 65, 67, 69, 71, 73, 75, 77, 79, 81, 83, 85, 87, 89, 91, 93, 95, 97, 99};
    int S = 10000;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {49.10396911391931, 49.140541803146604, 49.1771144923739, 49.213687181601195, 49.25025987082849, 49.286832560055785, 49.323405249283084, 49.35997793851038, 49.396550627737675, 49.43312331696497, 49.469696006192265, 49.506268695419564, 49.542841384646856, 49.579414073874155, 49.615986763101446, 49.652559452328745, 49.68913214155604, 49.725704830783336, 49.762277520010635, 49.798850209237926, 49.835422898465225, 49.87199558769252, 49.908568276919816, 49.94514096614711, 49.981713655374406, 50.018286344601705, 50.054859033829, 50.091431723056296, 50.12800441228359, 50.16457710151088, 50.20114979073818, 50.23772247996548, 50.27429516919277, 50.31086785842006, 50.34744054764736, 50.38401323687465, 50.42058592610195, 50.45715861532925, 50.49373130455654, 50.53030399378384, 50.56687668301113, 50.60344937223843, 50.64002206146573, 50.67659475069302, 50.71316743992032, 50.74974012914761, 50.78631281837491, 50.82288550760221, 50.8594581968295, 50.89603088605679};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int C = 100;
    vector<int> score = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48, 50, 52, 54, 56, 58, 60, 62, 64, 66, 68, 70, 72, 74, 76, 78, 80, 82, 84, 86, 88, 90, 92, 94, 96, 98, 100};
    int S = 10000;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {50.10396911391907, 50.14054180314637, 50.177114492373654, 50.21368718160095, 50.25025987082825, 50.28683256005555, 50.32340524928285, 50.359977938510134, 50.39655062773743, 50.43312331696473, 50.46969600619203, 50.506268695419315, 50.542841384646614, 50.57941407387391, 50.61598676310121, 50.65255945232851, 50.689132141555795, 50.725704830783094, 50.76227752001039, 50.79885020923769, 50.83542289846498, 50.871995587692275, 50.908568276919574, 50.94514096614687, 50.98171365537416, 51.01828634460146, 51.054859033828755, 51.091431723056054, 51.12800441228335, 51.16457710151064, 51.20114979073794, 51.237722479965235, 51.274295169192534, 51.31086785841982, 51.34744054764712, 51.38401323687442, 51.420585926101715, 51.457158615329, 51.4937313045563, 51.5303039937836, 51.566876683010896, 51.603449372238195, 51.64002206146548, 51.67659475069278, 51.71316743992008, 51.74974012914737, 51.78631281837466, 51.82288550760196, 51.85945819682926, 51.89603088605655};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int C = 1;
    vector<int> score = {1, 100};
    int S = 10000;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.0, 100.0};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int C = 1;
    vector<int> score = {1, 100};
    int S = 9999;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {100.0, 1.0};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int C = 29;
    vector<int> score = {35, 47, 44, 11, 62, 45, 28, 41, 71, 84, 73, 88, 43, 79, 72, 74, 17, 89, 49, 64, 66, 51, 88, 26, 93, 88, 70, 44, 38, 12, 75, 82, 13, 45, 10, 94, 37};
    int S = 190;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {41.07879407443414, 49.494485217795585, 47.39056243195522, 24.24741178771124, 60.01409914699738, 48.09187002723533, 36.169640907473294, 45.28663964611485, 66.32586750451846, 75.44286624316003, 67.7284826950787, 78.24809662428054, 46.68925483667509, 71.93632826675943, 67.02717509979858, 68.42979029035882, 28.45525735939196, 78.94940421956063, 50.897100408355826, 61.416714337557636, 62.819329528117876, 52.299715598916066, 78.2480966242805, 34.767025716913054, 81.75463460068111, 78.2480966242805, 65.62455990923836, 47.39056243195522, 43.182716860274496, 24.948719382991356, 69.13109788563895, 74.0402510525998, 25.650026978271473, 48.09187002723533, 23.546104192431113, 82.45594219596124, 42.48140926499437};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int C = 57;
    vector<int> score = {35, 55, 49, 98, 4, 99, 24, 14, 96, 42, 70, 64, 84, 92, 81, 93, 43, 22, 96};
    int S = 892;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {56.093375097236695, 59.93312804693519, 58.78120216202564, 68.18859688878692, 50.14175802520406, 68.38058453627185, 53.981510974902534, 52.0616345000533, 67.80462159381706, 57.43728862963117, 62.812942759209044, 61.6610168742995, 65.50076982399798, 67.03667100387737, 64.9248068815432, 67.2286586513623, 57.62927627711609, 53.59753567993269, 67.80462159381707};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int C = 96;
    vector<int> score = {15, 52, 88, 25, 40, 26, 29, 18, 21, 43, 62, 6, 79, 92, 14, 76, 16, 5, 54, 65, 90, 35, 65};
    int S = 663;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {28.180340301742923, 48.46429023202171, 68.20002529931996, 33.662488931548, 41.88571187625562, 34.210703794528506, 35.85534838347004, 29.824984890684448, 31.469629479625972, 43.530356465197144, 53.94643886182679, 23.246406534918364, 63.266091532495416, 70.392884751242, 27.632125438762422, 61.62144694355389, 28.72855516472344, 22.698191671937856, 49.560719957982734, 55.59108345076831, 69.29645502528099, 39.144637561353086, 55.59108345076831};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int C = 98;
    vector<int> score = {13, 82, 74, 78, 12, 71, 81, 80, 30};
    int S = 154;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {26.25622829378155, 74.87969915903301, 69.24219529059805, 72.06094722481552, 25.551540310227182, 67.12813133993495, 74.17501117547864, 73.47032319192427, 38.23592401420582};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int C = 40;
    vector<int> score = {6, 96, 58, 78, 54, 99, 24, 71, 79, 31, 13, 14, 73, 38, 56, 72, 71, 46, 40, 81, 75, 50, 30, 34, 48, 83, 76, 48, 51, 46, 21, 55, 60, 28, 23, 40, 20, 72, 78, 47, 4, 31, 3, 95, 36, 85, 17};
    int S = 770;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {30.692856916092847, 70.33085848066852, 53.59481337562542, 62.40325816775336, 51.83312441719983, 71.65212519948771, 38.62045722900796, 59.320302490508574, 62.84368040735974, 41.70341290625273, 33.77581259333761, 34.216234832944004, 60.20114696972137, 44.786368583497506, 52.71396889641264, 59.76072473011498, 59.32030249050858, 48.30974650034867, 45.667213062710296, 63.724524886572546, 61.08199144893417, 50.07143545877427, 41.26299066664633, 43.02467962507192, 49.19059097956147, 64.60536936578535, 61.52241368854056, 49.19059097956146, 50.51185769838066, 48.30974650034867, 37.29919051018877, 52.27354665680624, 54.475657854838225, 40.38214618743354, 38.18003498940156, 45.6672130627103, 36.858768270582374, 59.76072473011498, 62.403258167753364, 48.75016873995508, 29.81201243688005, 41.70341290625274, 29.371590197273655, 69.89043624106212, 43.90552410428472, 65.48621384499815, 35.5375015517632};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int C = 34;
    vector<int> score = {28, 75, 86, 65, 3, 95, 19, 82, 67, 71, 74, 30, 46, 31, 48, 56, 46, 32, 83, 28, 5, 66, 1, 23, 73, 95, 25, 35, 27, 42, 20, 61, 43, 1, 12, 56, 85, 62, 56, 62, 22, 79, 100, 56, 24};
    int S = 617;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {39.52464160820231, 60.483384128129536, 65.38862173917634, 56.02407720899608, 28.376374310368675, 69.40199796639645, 35.51126538098219, 63.60489897152295, 56.91593859282276, 58.69966136047615, 60.03745343621619, 40.41650299202899, 47.55139406264251, 40.862433683942335, 48.4432554464692, 52.01070098177596, 47.55139406264251, 41.308364375855675, 64.0508296634363, 39.5246416082023, 29.26823569419536, 56.470007900909415, 27.48451292654198, 37.294988148635575, 59.591522744302836, 69.40199796639644, 38.18684953246227, 42.646156451595715, 39.078710916288955, 45.767671294989135, 35.957196072895535, 54.2403544413427, 46.21360198690248, 27.48451292654198, 32.389750537588775, 52.010700981775976, 64.942691047263, 54.68628513325604, 52.010700981775976, 54.68628513325604, 36.84905745672222, 62.26710689578291, 71.63165142596317, 52.010700981775976, 37.74091884054892};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int C = 67;
    vector<int> score = {82, 62, 58, 18, 26, 12, 98, 29, 31, 30, 72, 95, 54, 25, 84, 22, 37, 88, 38, 18, 43, 35, 98, 71, 68, 6, 25, 43, 70, 47, 5, 23, 30, 94, 28, 52, 46, 77, 100, 85, 18, 63};
    int S = 247;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {76.86749588777093, 60.08969577885641, 56.73413575707351, 23.178535539244553, 29.88965558281035, 18.145195506570207, 90.28973597490251, 32.406325599147515, 34.084105610038975, 33.24521560459324, 68.47859583331369, 87.77306595856535, 53.378575735290624, 29.050765577364622, 78.54527589866238, 26.53409556102745, 39.117445642713314, 81.90083592044527, 39.95633564815903, 23.178535539244553, 44.15078567538767, 37.43966563182187, 90.2897359749025, 67.63970582786797, 65.12303581153077, 13.111855473895867, 29.050765577364622, 44.15078567538767, 66.80081582242222, 47.506345697170566, 12.272965468450144, 27.372985566473172, 33.24521560459324, 86.93417595311962, 31.5674355937018, 51.700795724399185, 46.66745569172483, 72.67304586054229, 91.96751598579395, 79.38416590410809, 23.178535539244557, 60.92858578430215};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int C = 48;
    vector<int> score = {2, 45, 60, 95, 57, 68, 46, 36, 57, 13, 61, 68, 35, 46, 70, 45, 21, 82, 37, 26, 61, 9, 8, 11, 93, 23, 27, 44, 14, 59, 29, 44, 42, 34, 9, 5, 87, 37, 21};
    int S = 658;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {22.06829311298769, 43.34167752197417, 50.76262557162062, 68.07817102079568, 49.27843596169133, 54.720464531432064, 43.8364073919506, 38.8891086921863, 49.278435961691336, 27.510321682728417, 51.257355441597056, 54.72046453143207, 38.39437882220987, 43.83640739195061, 55.709924271384935, 43.34167752197418, 31.468160642539864, 61.6466827111021, 39.383838562162744, 33.941809992422016, 51.25735544159707, 25.5314022028227, 25.03667233284627, 26.52086194277556, 67.08871128084284, 32.45762038249273, 34.43653986239844, 42.84694765199775, 28.00505155270485, 50.26789570164421, 35.425999602351304, 42.84694765199775, 41.857487912044895, 37.89964895223345, 25.531402202822697, 23.552482722916977, 64.12033206098425, 39.38383856216275, 31.468160642539864};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int C = 6;
    vector<int> score = {1, 51, 45, 78, 99, 10, 60, 66, 87, 90, 20, 36, 75, 89, 65, 51, 19, 52, 15};
    int S = 77;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {39.93147085828967, 52.57298872154701, 51.05600657795613, 59.399408367705966, 64.70884587027405, 42.20694407367599, 54.848461936933326, 56.365444080524206, 61.67488158309229, 62.43337265488772, 44.735247646327466, 48.78053336256981, 58.64091729591052, 62.18054229762257, 56.11261372325905, 52.572988721547, 44.482417289062305, 52.825819078812145, 43.47109586000172};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int C = 67;
    vector<int> score = {4, 49, 77, 56, 66, 38, 46, 65, 48, 82, 9, 20, 37, 53, 4, 26, 14, 40, 11, 52, 64, 68, 23, 21, 52, 21, 72, 35, 25, 45, 83, 67, 42, 11, 79, 57, 89, 3, 13, 90, 94, 71, 17, 47, 3, 91, 90, 94};
    int S = 463;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {14.805663752678225, 48.541072195832385, 69.53199300490608, 53.788802398100806, 61.28555982991283, 40.294639020839135, 46.29204496628876, 60.53588408673161, 47.79139645265117, 73.2803717208121, 18.554042468584242, 26.800475643577503, 39.544963277657935, 51.53977516855718, 14.805663752678225, 31.298530102664717, 22.302421184490278, 41.79399050720153, 20.053393954946657, 50.79009942537597, 59.786208343550406, 62.78491131627522, 29.049502873121106, 27.5501513867587, 50.79009942537597, 27.5501513867587, 65.78361428900004, 38.04561179129553, 30.54885435948351, 45.54236922310755, 74.03004746399327, 62.03523557309401, 43.29334199356394, 20.053393954946664, 71.03134449126846, 54.53847814128199, 78.52810192308048, 14.055988009497025, 21.55274544130906, 79.27777766626168, 82.27648063898648, 65.03393854581881, 24.55144841403387, 47.04172070946995, 14.055988009497025, 80.02745340944288, 79.27777766626167, 82.27648063898648};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int C = 35;
    vector<int> score = {64, 31, 17, 14, 49, 45, 50, 11, 6, 88, 43, 74, 78, 5, 81, 35, 72, 57, 6, 40, 76, 23, 14, 2};
    int S = 616;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {46.1911349232026, 38.60486670847064, 35.3864498900995, 34.69678914330568, 42.74283118923353, 41.82328352684176, 42.97271810483146, 34.00712839651186, 32.85769381852217, 51.708420897553125, 41.36350969564589, 48.490004079181986, 49.40955174157375, 32.627806902924235, 50.099212488367556, 39.52441437086239, 48.03023024798611, 44.58192651401704, 32.85769381852217, 40.67384894885208, 48.94977791037787, 36.76577138368713, 34.696789143305686, 31.938146156130426};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int C = 61;
    vector<int> score = {41, 100, 17, 100, 22, 80, 9, 48, 90, 5, 61, 35, 27, 37, 99, 11, 8, 65, 71, 56, 17, 86, 27, 96, 59, 32, 50, 25, 74, 28, 85, 7, 66, 12, 49, 7, 46, 34, 60, 79, 84, 9, 54, 67, 54};
    int S = 495;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {43.3159941229705, 84.44109762155314, 26.58713846253013, 84.44109762155315, 30.072316725121876, 70.50038457118615, 21.010853242383334, 48.19524369059895, 77.47074109636965, 18.222710632309933, 57.256707173337496, 39.13378020786041, 33.557494987713625, 40.5278515128971, 83.74406196903479, 22.40492454742003, 20.313817589864986, 60.04484978341089, 64.22706369852098, 53.771528910745744, 26.58713846253013, 74.68259848629626, 33.557494987713625, 81.65295501147975, 55.862635868300806, 37.04267325030538, 49.58931499563567, 32.16342368267693, 66.31817065607605, 34.25453064023198, 73.98556283377789, 19.616781937346637, 60.74188543592926, 23.101960199938382, 48.89227934311732, 19.616781937346634, 46.801172385562275, 38.436744555342074, 56.559671520819165, 69.8033489186678, 73.28852718125954, 21.010853242383334, 52.37745760570907, 61.43892108844761, 52.37745760570906};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int C = 76;
    vector<int> score = {48, 44, 47, 64, 80, 94, 84, 65, 86, 3, 92, 51, 64, 66, 97};
    int S = 623;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {59.755897297381004, 58.41760989301432, 59.42132544628934, 65.10904691484774, 70.46219653231448, 75.14620244759789, 71.80048393668118, 65.44361876593942, 72.46962763886451, 44.700163998255796, 74.47705874541455, 60.75961285065602, 65.10904691484775, 65.77819061703109, 76.1499180008729};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int C = 20;
    vector<int> score = {70, 90, 17, 11, 70, 54, 45, 28, 1, 79};
    int S = 557;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {46.58464323902688, 46.65668003819839, 46.3937457212224, 46.372134681470946, 46.58464323902689, 46.52701379968968, 46.494597240062504, 46.43336596076672, 46.3361162818852, 46.61705979865406};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int C = 72;
    vector<int> score = {27, 68, 99, 71, 48, 85, 13, 92, 26, 76, 74, 96, 15, 37, 81, 100, 62, 95, 55, 51, 14, 28, 80, 96, 54, 8, 28, 32, 42, 19, 92, 75, 30, 79, 88, 68, 49, 60, 48, 19, 74, 47, 25, 11, 22, 93, 31};
    int S = 35;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {27.572710619267436, 67.73282221490783, 98.09778464087987, 70.67136696580837, 48.14252387557106, 84.3845758033441, 13.859501781731694, 91.24118022211198, 26.59319570230059, 75.56894155064255, 73.60991171670888, 95.15923988997935, 15.81853161566537, 37.36785978893584, 80.46651613547677, 99.0772995578467, 61.855732713106825, 94.17972497301251, 54.999128294338945, 51.081068626471584, 14.839016698698533, 28.552225536234275, 79.48700121850993, 95.15923988997935, 54.019613377372096, 8.961927196897497, 28.552225536234275, 32.47028520410163, 42.26543437377001, 19.736591283532725, 91.241180222112, 74.58942663367574, 30.511255370167955, 78.50748630154308, 87.32312055424465, 67.73282221490786, 49.12203879253789, 59.89670287917312, 48.14252387557105, 19.73659128353273, 73.6099117167089, 47.16300895860422, 25.613680785333766, 11.900471947798016, 22.67513603443325, 92.22069513907883, 31.4907702871348};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int C = 72;
    vector<int> score = {28, 37, 34, 43, 78, 37, 60, 33, 80, 78, 73, 4, 57, 79, 5, 74, 83, 77, 16, 48, 91, 5, 42, 63, 1, 21};
    int S = 851;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {39.927825313271576, 43.549961877230146, 42.34258302257729, 45.96471958653587, 60.050806224152545, 43.549961877230146, 52.8065330962354, 41.940123404359674, 60.8557254605878, 60.05080622415256, 58.038508133064454, 30.26879447604872, 51.59915424158254, 60.45326584237017, 30.671254094266338, 58.44096775128207, 62.06310431524066, 59.64834660593493, 35.09830989466014, 47.97701767762397, 65.28278126098162, 30.671254094266338, 45.56225996831826, 54.01391195088827, 29.061415621395856, 37.11060798574825};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int C = 2;
    vector<int> score = {50, 90, 34, 92, 77, 78, 73, 21, 73, 2, 71, 54, 3, 54, 38, 52, 68, 78, 3, 96, 12, 80, 55, 81, 66};
    int S = 517;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {56.03999999734265, 56.04000001493319, 56.039999990306434, 56.040000015812716, 56.040000009216264, 56.040000009656026, 56.04000000745721, 56.03999998458951, 56.04000000745721, 56.039999976234, 56.040000006577685, 56.0399999991017, 56.03999997667376, 56.0399999991017, 56.03999999206549, 56.03999999822218, 56.04000000525839, 56.040000009656026, 56.03999997667376, 56.04000001757177, 56.039999980631634, 56.04000001053556, 56.03999999954147, 56.04000001097531, 56.04000000437887};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int C = 93;
    vector<int> score = {73, 95, 61, 93, 69, 64, 37, 25, 37, 72, 36, 65, 59, 30, 40, 87, 94, 29, 88, 61, 67, 93, 93, 22, 8, 15, 99, 53, 90, 66, 22, 38, 25, 99, 85, 72, 17, 51, 84, 94, 65, 92, 80, 54, 38, 17, 90, 94};
    int S = 693;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {69.85150860070155, 85.97729143169185, 61.05562705652498, 84.5113111743291, 66.91954808597602, 63.254597442569114, 43.463863968171886, 34.66798242399531, 43.463863968171886, 69.11851847202016, 42.7308738394905, 63.987587571250494, 59.58964679916222, 38.33293306740222, 45.66283435421602, 80.11337040224083, 85.24430130301047, 37.59994293872084, 80.8463605309222, 61.05562705652498, 65.45356782861325, 84.5113111743291, 84.51131117432911, 32.46901203795118, 22.20715023641188, 27.33808113718153, 88.90925194641737, 55.19170602707394, 82.31234078828498, 64.72057769993188, 32.46901203795119, 44.19685409685326, 34.667982423995326, 88.90925194641738, 78.64739014487809, 69.11851847202016, 28.8040613945443, 53.72572576971119, 77.9144000161967, 85.24430130301047, 63.987587571250494, 83.77832104564771, 74.98243950147118, 55.92469615575533, 44.196854096853265, 28.804061394544302, 82.31234078828497, 85.24430130301047};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int C = 36;
    vector<int> score = {69, 52, 73, 37, 61, 5, 59, 5, 54, 63, 32, 26, 7, 93, 100, 65, 15};
    int S = 849;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {49.29811522657447, 48.24726004315674, 49.54537526973158, 47.32003488131758, 48.80359514026024, 45.3419545360607, 48.67996511868169, 45.3419545360607, 48.37089006473529, 48.92722516183879, 47.010959827371195, 46.64006976263552, 45.46558455763925, 50.78167548551713, 51.21438056104208, 49.05085518341737, 45.96010464395348};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int C = 69;
    vector<int> score = {12, 22, 90, 25, 71, 13, 36, 1, 79, 77, 18, 84, 25, 28, 61, 22, 6, 65, 21, 86, 24, 22, 61, 36, 65, 11};
    int S = 774;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {28.66408273756722, 32.87948792879884, 61.54424322917383, 34.14410948616832, 53.53497336583376, 29.085623256690386, 38.781055196523106, 24.02713702721244, 56.90729751881905, 56.06421648057273, 31.19332585230619, 59.015000114434855, 34.14410948616832, 35.408731043537806, 49.31956817460214, 32.87948792879884, 26.134839622828252, 51.00573025109478, 32.45794740967567, 59.85808115268118, 33.722568967045156, 32.87948792879884, 49.31956817460214, 38.7810551965231, 51.00573025109478, 28.242542218444058};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int C = 4;
    vector<int> score = {91, 49, 21, 1, 23, 79, 37, 37, 78, 80};
    int S = 7714;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {49.600000000000065, 49.60000000000005, 49.60000000000004, 49.60000000000002, 49.60000000000004, 49.60000000000005, 49.60000000000004, 49.60000000000004, 49.60000000000005, 49.60000000000005};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int C = 69;
    vector<int> score = {57, 70, 13, 44, 33, 93, 64, 68, 12, 29, 99, 47, 29, 18, 46, 19, 11, 1, 100, 69, 19, 59, 68, 37, 98, 74, 94, 77, 80, 48, 39, 51, 19, 99, 99, 33, 51, 82, 36, 63, 1, 77, 8, 69, 86};
    int S = 8786;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {53.10246986128883, 53.14761116155099, 52.94968392193996, 53.057328561026665, 53.01913207618944, 53.2274765389379, 53.12677671527615, 53.14066634612605, 52.946211514227485, 53.00524244533955, 53.24831098521275, 53.06774578416409, 53.00524244533955, 52.96704596050233, 53.06427337645161, 52.970518368214805, 52.94273910651501, 52.90801502939027, 53.251783392925226, 53.14413875383852, 52.970518368214805, 53.109414676713776, 53.14066634612604, 53.03302170703934, 53.244838577500275, 53.161500792400886, 53.23094894665038, 53.17191801553831, 53.18233523867573, 53.07121819187656, 53.03996652246428, 53.08163541501398, 52.9705183682148, 53.24831098521275, 53.24831098521275, 53.01913207618944, 53.08163541501398, 53.18928005410068, 53.02954929932687, 53.12330430756367, 52.90801502939026, 53.17191801553831, 52.93232188337758, 53.14413875383852, 53.20316968495058};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int C = 21;
    vector<int> score = {16, 10, 86, 13, 74, 73, 49, 47, 59, 82, 53, 76, 60, 50, 18, 96, 30, 70, 63, 87, 49, 32, 40, 100, 78, 8, 61, 99, 87, 19};
    int S = 6822;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {56.166666651916124, 56.16666664971517, 56.16666667759396, 56.16666665081564, 56.16666667319205, 56.166666672825215, 56.16666666402139, 56.166666663287735, 56.166666667689654, 56.16666667612665, 56.1666666654887, 56.166666673925704, 56.16666666805648, 56.16666666438822, 56.16666665264978, 56.16666668126223, 56.16666665705169, 56.16666667172474, 56.16666666915695, 56.16666667796079, 56.16666666402139, 56.16666665778534, 56.166666660719955, 56.16666668272953, 56.16666667465935, 56.16666664898152, 56.166666668423304, 56.166666682362695, 56.16666667796079, 56.1666666530166};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int C = 48;
    vector<int> score = {53, 76, 95, 82, 78, 83, 46, 16, 63, 90, 91, 72, 7, 32, 36, 95, 34, 23, 43};
    int S = 4802;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {58.684062209229374, 58.684662344074525, 58.68515810764226, 58.68481890099065, 58.68471452971323, 58.68484499381, 58.68387955949389, 58.68309677491325, 58.684323137422915, 58.68502764354549, 58.68505373636484, 58.68455797279711, 58.68286193953906, 58.683514260022925, 58.68361863130034, 58.68515810764226, 58.68356644566163, 58.68327942464873, 58.68380128103583};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int C = 60;
    vector<int> score = {31, 7, 49, 5, 75, 44, 93, 54, 92, 49, 67, 6, 43, 93, 47, 9, 22, 55, 35, 74, 88, 29, 72, 42, 20, 72, 31, 49, 44, 57, 54};
    int S = 2736;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {47.71708463504396, 46.45476465052654, 48.66382462343202, 46.34957131848343, 50.03133793999257, 48.40084129332423, 50.97807792838063, 48.92680795353982, 50.92548126235907, 48.66382462343203, 49.61056461182009, 46.402167984504985, 48.34824462730267, 50.97807792838063, 48.558631291388906, 46.559957982569664, 47.24371464084993, 48.97940461956138, 47.9274712991302, 49.978741273971, 50.71509459827283, 47.611891303000846, 49.87354794192788, 48.29564796128111, 47.13852130880681, 49.87354794192788, 47.71708463504396, 48.66382462343202, 48.40084129332423, 49.0845979516045, 48.926807953539814};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int C = 15;
    vector<int> score = {55, 53, 2, 48, 98, 33, 51, 39, 27, 64, 48, 87, 73, 75, 10, 83, 41};
    int S = 5988;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {52.17647058822829, 52.17647058822829, 52.176470588228234, 52.17647058822829, 52.17647058822835, 52.17647058822828, 52.17647058822829, 52.17647058822828, 52.17647058822826, 52.176470588228305, 52.17647058822829, 52.17647058822835, 52.17647058822832, 52.17647058822833, 52.17647058822825, 52.17647058822834, 52.176470588228284};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int C = 89;
    vector<int> score = {70, 35, 76, 90, 16, 64, 5, 90, 30, 82, 91, 57, 33, 13, 44, 88, 74, 93, 35, 18, 89, 2, 22, 85, 62, 67, 93, 32, 25, 85, 86, 44};
    int S = 9543;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {56.14197241316087, 56.09915911871053, 56.14931183506664, 56.16643715284678, 56.07591761600891, 56.1346329912551, 56.06246200918166, 56.16643715284678, 56.09304293378905, 56.156651256972424, 56.167660389831084, 56.12607033236503, 56.09671264474194, 56.07224790505603, 56.11016825156919, 56.16399067887819, 56.146865361098065, 56.170106863799674, 56.09915911871053, 56.07836408997751, 56.165213915862495, 56.05879229822878, 56.08325703791469, 56.160320967925315, 56.13218651728651, 56.13830270220798, 56.170106863799674, 56.095489407757654, 56.08692674886757, 56.160320967925315, 56.1615442049096, 56.11016825156919};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int C = 25;
    vector<int> score = {78, 91, 22, 98, 54, 91, 37, 31, 63, 53, 13, 17, 9, 43, 20, 70, 26, 31, 17, 79};
    int S = 4711;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {47.15000018730085, 47.150000266226854, 47.14999984731183, 47.15000030872548, 47.15000004159127, 47.150000266226854, 47.14999993838032, 47.149999901952924, 47.15000009623236, 47.15000003552004, 47.149999792670755, 47.149999816955685, 47.14999976838581, 47.14999997480771, 47.14999983516937, 47.15000013873099, 47.149999871596776, 47.14999990195294, 47.14999981695567, 47.15000019337207};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int C = 87;
    vector<int> score = {18, 67, 24, 22, 82, 98, 84, 17, 16, 33, 92, 39, 94, 46, 99, 16, 54, 74, 92, 61, 73, 94, 86, 48, 19, 20, 39, 41, 51, 47, 98, 81, 67, 50, 54, 94, 31, 18, 27};
    int S = 218;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {22.52912643913646, 65.61713147657541, 27.80520868861878, 26.046514605458007, 78.80733710028122, 92.8768897655674, 80.56603118344199, 21.649779397556074, 20.77043235597569, 35.719332062842255, 87.60080751608508, 40.995414312324584, 89.35950159924586, 47.15084360338729, 93.7562368071478, 20.770432355975693, 54.18561993603037, 71.77256076763811, 87.60080751608508, 60.34104922709309, 70.89321372605772, 89.35950159924585, 82.32472526660275, 48.909537686548056, 23.408473480716847, 24.28782052229723, 40.99541431232459, 42.75410839548535, 51.54757881128922, 48.030190644967675, 92.87688976556738, 77.92799005870081, 65.61713147657541, 50.66823176970883, 54.18561993603038, 89.35950159924585, 33.96063797968148, 22.52912643913646, 30.443249813359934};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int C = 1;
    vector<int> score = {98, 28, 8, 78, 5, 84, 41, 29, 16, 86, 97, 12, 20, 4, 64, 65, 8, 76, 27, 67, 63, 85, 3, 31, 17, 33, 66, 34, 67, 13, 39, 14, 95, 54, 64, 40, 98, 64, 66, 7, 65, 20, 4, 70, 54};
    int S = 4761;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {46.19999999999982, 46.19999999999982, 46.19999999999981, 46.19999999999982, 46.19999999999981, 46.19999999999982, 46.19999999999982, 46.19999999999982, 46.19999999999982, 46.19999999999982, 46.19999999999982, 46.19999999999981, 46.19999999999982, 46.19999999999981, 46.19999999999982, 46.19999999999982, 46.19999999999981, 46.19999999999982, 46.19999999999981, 46.19999999999982, 46.19999999999982, 46.19999999999982, 46.19999999999981, 46.19999999999982, 46.19999999999981, 46.19999999999982, 46.19999999999982, 46.19999999999982, 46.19999999999982, 46.19999999999981, 46.19999999999982, 46.19999999999981, 46.19999999999982, 46.19999999999981, 46.19999999999982, 46.19999999999981, 46.19999999999982, 46.19999999999982, 46.19999999999982, 46.19999999999982, 46.19999999999982, 46.19999999999981, 46.19999999999981, 46.19999999999982, 46.19999999999981};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int C = 8;
    vector<int> score = {14, 13, 48, 49, 1, 41, 9, 67, 33, 74, 90, 33, 57, 51, 2, 95, 46, 98, 1, 63};
    int S = 7607;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {44.24999999999656, 44.24999999999656, 44.24999999999655, 44.24999999999655, 44.24999999999657, 44.24999999999655, 44.24999999999657, 44.24999999999653, 44.249999999996554, 44.24999999999653, 44.24999999999652, 44.249999999996554, 44.24999999999654, 44.24999999999655, 44.24999999999657, 44.24999999999652, 44.24999999999655, 44.24999999999651, 44.24999999999657, 44.24999999999653};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int C = 46;
    vector<int> score = {55, 60, 89, 58, 47, 30, 75, 85, 15, 54, 23, 59, 27, 24, 84, 8, 90, 67, 35, 100, 50, 10, 9, 31, 98, 55, 5, 72, 7, 6, 8, 13, 99, 68, 89, 75, 76, 36, 48, 39, 81};
    int S = 2800;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {50.48732122059465, 50.74322301660081, 52.22745343343648, 50.64086229819834, 50.077878346984804, 49.20781224056388, 51.510928404619264, 52.02273199663156, 48.440106852545426, 50.43614086139341, 48.84954972615527, 50.69204265739957, 49.05427116296019, 48.9007300853565, 51.97155163743034, 48.08184433813681, 52.278633792637706, 51.101485531009416, 49.46371403657003, 52.79043738465002, 50.231419424588495, 48.18420505653927, 48.13302469733804, 49.25899259976511, 52.688076666247554, 50.487321220594644, 47.92830326053312, 51.357387327015566, 48.03066397893558, 47.979483619734346, 48.081844338136804, 48.33774613414296, 52.739257025448794, 51.15266589021064, 52.22745343343648, 51.51092840461926, 51.56210876382048, 49.514894395771265, 50.12905870618603, 49.668435473374956, 51.81801055982664};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int C = 36;
    vector<int> score = {49, 30, 19, 11, 96, 32, 50, 42, 69, 21, 12, 16, 38, 50, 97, 85, 98, 71, 11, 28, 28, 45, 82, 50};
    int S = 7386;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {47.083333402529504, 47.08333271657851, 47.08333231944899, 47.083332030627524, 47.08333509935563, 47.08333278878388, 47.08333343863219, 47.08333314981072, 47.08333412458317, 47.08333239165436, 47.08333206673021, 47.08333221114094, 47.083333005399986, 47.08333343863219, 47.08333513545832, 47.08333470222611, 47.083335171561, 47.08333419678854, 47.083332030627524, 47.083332644373144, 47.083332644373144, 47.08333325811877, 47.08333459391806, 47.08333343863218};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int C = 82;
    vector<int> score = {85, 93, 78, 98, 22, 56, 6, 54, 78, 5, 61, 87, 95, 32, 66, 94, 83, 95, 17, 73, 32, 96, 100, 11, 37, 94, 31, 35, 1, 23, 33, 67, 61, 36, 76, 54, 13, 17, 23, 26, 51, 99, 50, 35};
    int S = 7873;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {54.46083602050138, 54.56238949531238, 54.37197673004176, 54.625860417069255, 53.661102406364726, 54.092704674311484, 53.457995456742715, 54.067316305608735, 54.371976730041744, 53.44530127239134, 54.15617559606837, 54.48622438920413, 54.58777786401513, 53.788044249878475, 54.21964651782525, 54.575083679663756, 54.43544765179862, 54.58777786401513, 53.59763148460785, 54.30850580828487, 53.788044249878475, 54.600472048366505, 54.651248785772005, 53.52146637849959, 53.85151517163535, 54.575083679663756, 53.7753500655271, 53.8261268029326, 53.39452453498584, 53.6737965907161, 53.80073843422985, 54.23234070217662, 54.15617559606837, 53.838820987283974, 54.346588361338995, 54.067316305608735, 53.54685474720234, 53.59763148460784, 53.6737965907161, 53.711879143770226, 54.02923375255461, 54.63855460142063, 54.016539568203235, 53.826126802932606};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int C = 67;
    vector<int> score = {9};
    int S = 2435;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {9.0};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int C = 6;
    vector<int> score = {80, 95, 26, 17, 92, 74, 65, 49, 26, 69, 66, 51, 1, 73, 9, 38, 2, 47, 15, 58, 18, 40, 36, 89, 52, 40, 27, 32, 64, 69, 40, 30, 25, 34, 70, 55, 54, 99};
    int S = 1038;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {48.08221844895985, 48.083755560178155, 48.076684848573954, 48.07576258184297, 48.0834481379345, 48.08160360447253, 48.080681337741545, 48.07904175244202, 48.076684848573954, 48.08109123406643, 48.08078381182277, 48.079246700604465, 48.07412299654345, 48.08150113039131, 48.07494278919321, 48.0779145375486, 48.07422547062467, 48.07883680427958, 48.07555763368053, 48.079964019173005, 48.0758650559242, 48.07811948571104, 48.07770958938616, 48.08314071569083, 48.07934917468568, 48.07811948571104, 48.07678732265517, 48.07729969306128, 48.08057886366033, 48.08109123406643, 48.078119485711035, 48.07709474489884, 48.07658237449273, 48.07750464122371, 48.081193708147644, 48.07965659692935, 48.07955412284812, 48.08416545650304};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int C = 74;
    vector<int> score = {9, 19, 21, 6, 65, 44, 82, 70, 24, 92, 89, 53, 73, 12, 17, 48, 74, 13, 56, 5, 91, 64, 31, 3, 24, 60, 20, 30, 57, 87, 4, 43, 6, 45, 87, 46, 92, 27, 31, 43, 75, 51};
    int S = 4122;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {42.44512687782466, 43.1486654028501, 43.289373107855184, 42.234065320317036, 46.38494261796709, 44.90751171541368, 47.58095811051033, 46.73671188047981, 43.50043466536282, 48.28449663553576, 48.073435078028126, 45.54069638793657, 46.947773437987436, 42.6561884353323, 43.007957697845015, 45.18892712542385, 47.01812729048998, 42.72654228783484, 45.7517579454442, 42.163711467814494, 48.21414278303322, 46.31458876546455, 43.99291163288061, 42.0230037628094, 43.50043466536282, 46.033173355454366, 43.219019255352634, 43.92255778037807, 45.82211179794674, 47.932727373023035, 42.093357615311945, 44.837157862911134, 42.234065320317036, 44.97786556791622, 47.932727373023035, 45.04821942041877, 48.28449663553576, 43.711496222870444, 43.99291163288062, 44.837157862911134, 47.08848114299252, 45.39998868293148};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int C = 7;
    vector<int> score = {25, 73, 64, 71, 82, 77, 99, 7};
    int S = 948;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {62.24999999999872, 62.24999999999874, 62.249999999998735, 62.24999999999874, 62.24999999999875, 62.24999999999875, 62.24999999999876, 62.24999999999872};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int C = 42;
    vector<int> score = {78, 30, 14, 33, 53, 62, 86, 10, 48, 71, 56, 27, 93, 100, 35, 22, 18, 60, 42};
    int S = 2303;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {49.456288582832826, 49.3089812527839, 49.259878809434255, 49.318187960911956, 49.37956601509901, 49.40718613948319, 49.48083980450765, 49.24760319859684, 49.364221501552244, 49.43480626386736, 49.38877272322707, 49.29977454465584, 49.50232212347312, 49.52380444243859, 49.32432576633066, 49.284430031109075, 49.27215442027166, 49.401048334064484, 49.34580808529613};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int C = 65;
    vector<int> score = {43, 20, 44, 34, 3, 78, 86, 46, 68, 7, 64, 40, 30, 43, 33, 26};
    int S = 4626;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {41.56269346923414, 41.5595979615087, 41.56282805652655, 41.56148218360244, 41.55730997753772, 41.5674040244685, 41.568480722807784, 41.56309723111137, 41.5660581515444, 41.557848326707365, 41.56551980237476, 41.5622897073569, 41.5609438344328, 41.562693469234134, 41.56134759631003, 41.56040548526316};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int C = 71;
    vector<int> score = {72, 69, 14, 58, 3, 46, 13, 91, 28, 68, 62, 72, 19, 47, 26, 26, 100, 67, 62, 44, 79, 84, 41, 100, 85, 74, 31, 70, 89, 23, 5, 14, 65, 60, 99, 81, 38, 97, 66, 41, 89, 35, 7, 13, 25};
    int S = 6347;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {53.64006966084092, 53.583763955125036, 52.55149268366712, 53.37730970083345, 52.345038429375535, 53.15208687796991, 52.532724115095164, 53.99667246370821, 52.81425264367459, 53.56499538655308, 53.45238397512131, 53.64006966084092, 52.645335526526935, 53.17085544654188, 52.776715506530664, 52.776715506530664, 54.16558958085588, 53.54622681798112, 53.45238397512131, 53.11454974082599, 53.771449640844665, 53.86529248370448, 53.05824403511009, 54.16558958085588, 53.88406105227644, 53.67760679798485, 52.87055834939048, 53.60253252369701, 53.95913532656428, 52.72040980081478, 52.38257556651945, 52.55149268366712, 53.50868968083719, 53.41484683797738, 54.14682101228391, 53.80898677798859, 53.001938329394214, 54.10928387513999, 53.52745824940916, 53.0582440351101, 53.95913532656429, 52.94563262367833, 52.420112703663385, 52.53272411509516, 52.75794693795871};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int C = 72;
    vector<int> score = {7, 92, 45, 21, 18, 7, 7, 63, 9, 57, 13, 88, 72, 96, 65, 71, 55, 29, 81, 63, 43, 82, 69, 100, 14, 46, 26, 34, 67, 66, 59, 33, 73, 75, 83, 65, 33, 36, 59, 83};
    int S = 3275;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {47.939045227835344, 56.669043159543556, 51.841867832599014, 49.37692724011669, 49.0688096660564, 47.939045227835344, 47.939045227835344, 53.690573276960755, 48.14445694387554, 53.074338128840175, 48.555280375955924, 56.25821972746317, 54.61492599914162, 57.07986659162395, 53.895984993000944, 54.512220141121524, 52.86892641279998, 50.19857410427746, 55.53927872132249, 53.69057327696075, 51.63645611655882, 55.64198457934259, 54.30680842508133, 57.49069002370432, 48.65798623397602, 51.94457369061911, 49.89045653021718, 50.71210339437795, 54.10139670904113, 53.99869085102104, 53.279749844880364, 50.609397536357854, 54.71763185716172, 54.92304357320191, 55.74469043736268, 53.895984993000944, 50.609397536357854, 50.917515110418144, 53.279749844880364, 55.74469043736268};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int C = 78;
    vector<int> score = {37};
    int S = 3189;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {37.0};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int C = 35;
    vector<int> score = {74, 79, 38, 30, 64, 76, 93, 100, 51, 61, 56, 90, 59, 85, 54};
    int S = 8984;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {67.33333333332949, 67.33333333332949, 67.33333333332948, 67.33333333332948, 67.33333333332949, 67.33333333332949, 67.3333333333295, 67.3333333333295, 67.33333333332948, 67.33333333332949, 67.33333333332949, 67.3333333333295, 67.33333333332949, 67.3333333333295, 67.33333333332949};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int C = 31;
    vector<int> score = {42, 49, 95, 4, 86, 86, 68, 50, 42, 87, 15, 90, 63, 64, 5, 85, 83, 69, 35, 21, 27, 50, 82, 48, 27, 8, 21, 86, 86, 55, 18, 52, 5, 28, 67, 47, 95, 80, 86, 59, 79, 37, 10, 50, 86, 76, 64, 23, 6, 40};
    int S = 3461;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {52.61724953945071, 52.697254495121236, 53.22300134667037, 52.182936922953594, 53.12013783223685, 53.12013783223684, 52.91441080336979, 52.70868377450273, 52.61724953945071, 53.13156711161835, 52.30865899615013, 53.16585494976286, 52.85726440646227, 52.86869368584377, 52.1943662023351, 53.10870855285535, 53.085849994092335, 52.92584008275129, 52.537244583780186, 52.377234672439144, 52.445810348728166, 52.70868377450273, 53.07442071471083, 52.685825215739726, 52.445810348728166, 52.228654040479604, 52.377234672439144, 53.12013783223684, 53.12013783223685, 52.76583017141025, 52.34294683429463, 52.731542333265736, 52.19436620233509, 52.45723962810966, 52.90298152398829, 52.67439593635822, 53.22300134667037, 53.05156215594782, 53.12013783223684, 52.81154728893626, 53.040132876566325, 52.56010314254319, 52.25151259924261, 52.70868377450274, 53.12013783223684, 53.00584503842181, 52.86869368584378, 52.40009323120215, 52.2057954817166, 52.594390980687706};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int C = 62;
    vector<int> score = {67, 4, 7, 33, 78, 11, 84, 48, 91, 73, 66, 81, 31, 65, 61, 48, 23, 5, 89, 40, 12, 49, 32, 88, 48, 88, 59, 82, 93, 50, 5, 16, 90, 1, 88, 83, 66, 76, 13, 65, 60, 84, 26, 41, 78};
    int S = 9293;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {53.30634228031544, 53.2261471997937, 53.22996601315188, 53.26306239558942, 53.32034459596209, 53.235057764296116, 53.32798222267845, 53.282156462380314, 53.336892787180865, 53.31397990703179, 53.30506934252938, 53.32416340932027, 53.260516520017305, 53.30379640474332, 53.29870465359909, 53.282156462380314, 53.25033301772883, 53.22742013757976, 53.33434691160875, 53.27197296009184, 53.23633070208218, 53.28342940016637, 53.26178945780336, 53.333073973822685, 53.282156462380314, 53.333073973822685, 53.296158778026964, 53.32543634710633, 53.33943866275298, 53.28470233795243, 53.22742013757976, 53.24142245322642, 53.33561984939481, 53.22232838643553, 53.33307397382269, 53.326709284892395, 53.30506934252938, 53.31779872038998, 53.23760363986824, 53.30379640474332, 53.297431715813026, 53.32798222267845, 53.25415183108701, 53.2732458978779, 53.32034459596209};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int C = 94;
    vector<int> score = {21, 11, 19, 31, 21, 73, 16, 65, 64, 35, 54, 39, 56, 36, 15, 80, 68, 21, 94, 35, 93, 69, 37, 83, 67, 72};
    int S = 1100;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {37.64913961885453, 33.587104366320055, 36.836732568347635, 41.71117487138899, 37.64913961885453, 58.77172293203374, 35.6181219925873, 55.522094730006174, 55.11589120475273, 43.335988972402774, 51.05385595221826, 44.96080307341657, 51.86626300272515, 43.74219249765623, 35.211918467333845, 61.615147608807874, 56.74070530576651, 37.64913961885453, 67.30199696235613, 43.33598897240277, 66.89579343710267, 57.14690883101996, 44.148396022909665, 62.83375818456821, 56.334501780513065, 58.365519406780294};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int C = 73;
    vector<int> score = {94, 8, 4, 41, 59, 84, 93, 94, 75, 15, 55, 21, 9, 5, 31, 68, 32, 96, 12, 23, 61, 34, 42, 92, 5, 62, 77, 56, 93, 69, 70, 99, 41, 86, 41, 12};
    int S = 6707;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {51.8950576643044, 51.3749930553476, 51.35080400376821, 51.57455273087753, 51.68340346298477, 51.83458503535593, 51.88901040140955, 51.895057664304396, 51.78015966930231, 51.417323895611524, 51.65921441140539, 51.45360747298061, 51.38104031824245, 51.35685126666306, 51.51408010192907, 51.73782882903839, 51.520127364823914, 51.907152190094095, 51.399182106926986, 51.4657019987703, 51.69549798877446, 51.532221890613606, 51.58059999377238, 51.88296313851471, 51.35685126666306, 51.701545251669316, 51.79225419509202, 51.66526167430023, 51.88901040140956, 51.74387609193324, 51.749923354828084, 51.92529397877864, 51.57455273087754, 51.846679561145635, 51.57455273087754, 51.399182106926986};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int C = 22;
    vector<int> score = {93, 14, 42, 62, 54, 71, 93, 18, 87, 88, 24, 64};
    int S = 116;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {73.12317611603297, 40.535070308153024, 52.08528502486996, 60.335438393953496, 57.03537704632008, 64.04800741004108, 73.12317611603297, 42.185100981969725, 70.6481301053079, 71.06063777376208, 44.660146992694784, 61.160453730861846};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int C = 99;
    vector<int> score = {99, 26, 21, 54, 100, 80, 20, 47, 23, 73, 20, 43, 33, 8, 49, 98, 76};
    int S = 4932;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {51.31174922126362, 51.10525379250268, 51.0911102699848, 51.18445751860276, 51.314577925767196, 51.25800383569571, 51.08828156548123, 51.164656587077744, 51.09676767899195, 51.238202904170684, 51.08828156548123, 51.153341769063445, 51.1250547240277, 51.054337111438336, 51.17031399608489, 51.30892051676005, 51.246689017681405};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int C = 22;
    vector<int> score = {69, 89, 85, 67, 26, 78, 86};
    int S = 1358;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {71.42857138639566, 71.42857173374091, 71.42857166427186, 71.42857135166113, 71.42857063960338, 71.42857154270102, 71.42857168163911};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int C = 53;
    vector<int> score = {40, 22, 57, 75, 15, 71, 87, 83, 7, 100};
    int S = 4914;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {55.69999987055558, 55.699999722145556, 55.7000000107206, 55.700000159130624, 55.69999966443054, 55.70000012615061, 55.70000025807064, 55.70000022509063, 55.69999959847053, 55.700000365255654};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int C = 26;
    vector<int> score = {18, 36, 94, 85, 47, 78, 69, 19, 99, 9, 4, 35, 29, 53, 66, 77, 9, 58, 31, 48, 24, 19, 20, 49, 21, 89, 64, 18, 71, 54, 1, 74, 61, 70, 32};
    int S = 3386;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {46.58350579344075, 46.59388676260482, 46.62733655213349, 46.62214606755146, 46.60023068820509, 46.61810902398766, 46.61291853940562, 46.584082513949866, 46.63022015467907, 46.57831530885871, 46.57543170631314, 46.59331004209571, 46.58984971904102, 46.60369101125978, 46.61118837787827, 46.61753230347854, 46.57831530885871, 46.60657461380535, 46.591003160059245, 46.6008074087142, 46.58696611649544, 46.58408251394986, 46.584659234458975, 46.60138412922332, 46.58523595496809, 46.62445294958792, 46.61003493686004, 46.58350579344074, 46.614071980423844, 46.60426773176889, 46.57370154478579, 46.61580214195119, 46.60830477533269, 46.61349525991473, 46.59157988056836};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int C = 6;
    vector<int> score = {53, 67, 43, 3, 59, 49, 88, 80, 76, 46, 3, 29, 58, 10, 80, 23, 60, 33, 24, 67, 94, 21, 86, 47, 20, 34, 72, 77, 80, 25, 55, 74, 42, 5, 86, 12, 26, 58, 15, 14, 8, 91, 47, 35, 58, 83, 52, 93, 82};
    int S = 6815;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {49.857142857131905, 49.857142857131905, 49.857142857131905, 49.857142857131905, 49.857142857131905, 49.857142857131905, 49.857142857131905, 49.857142857131905, 49.857142857131905, 49.857142857131905, 49.857142857131905, 49.857142857131905, 49.857142857131905, 49.857142857131905, 49.857142857131905, 49.857142857131905, 49.857142857131905, 49.857142857131905, 49.857142857131905, 49.857142857131905, 49.857142857131905, 49.857142857131905, 49.857142857131905, 49.857142857131905, 49.857142857131905, 49.857142857131905, 49.857142857131905, 49.857142857131905, 49.857142857131905, 49.857142857131905, 49.857142857131905, 49.857142857131905, 49.857142857131905, 49.857142857131905, 49.857142857131905, 49.857142857131905, 49.857142857131905, 49.857142857131905, 49.857142857131905, 49.857142857131905, 49.857142857131905, 49.857142857131905, 49.857142857131905, 49.857142857131905, 49.857142857131905, 49.857142857131905, 49.857142857131905, 49.857142857131905, 49.857142857131905};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int C = 21;
    vector<int> score = {100, 18, 51, 64, 26, 60, 61, 94, 18, 39, 32, 63, 57};
    int S = 4723;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {52.538461538473065, 52.538461538472966, 52.53846153847301, 52.53846153847302, 52.53846153847298, 52.53846153847302, 52.53846153847302, 52.538461538473065, 52.53846153847297, 52.538461538472994, 52.538461538472994, 52.53846153847303, 52.538461538473015};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int C = 92;
    vector<int> score = {55, 41, 78, 49, 2, 96, 38, 31, 50, 17, 32, 27, 39, 18, 75, 75, 78, 63, 10, 58, 32, 22, 42, 35, 21, 1, 12, 63, 11, 38, 48, 3};
    int S = 1725;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {44.21154439870792, 39.87800061746612, 51.33093775360516, 42.35431134960429, 27.805985798292514, 56.90263690091605, 38.94938409291431, 36.78261220229339, 42.663850191121554, 32.449068421051585, 37.09215104381067, 35.544456836224306, 39.258922934431574, 32.75860726256886, 50.402321229053356, 50.402321229053356, 51.33093775360517, 46.687855130846096, 30.28229653043069, 45.14016092325974, 37.092151043810674, 33.99676262863795, 40.18753945898339, 38.02076756836248, 33.68722378712068, 27.49644695677524, 30.901374213465232, 46.68785513084609, 30.59183537194796, 38.9493840929143, 42.04477250808702, 28.115524639809788};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int C = 26;
    vector<int> score = {25, 73, 78, 54, 91, 12, 98, 30, 26, 53, 52, 15, 95, 23, 34, 19, 32, 69, 74, 66, 46, 20, 97, 67, 46, 83, 59, 23, 41, 7, 27, 23, 59, 61, 12};
    int S = 6292;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {48.28569199179317, 48.28573794736631, 48.285742734405176, 48.285719756618604, 48.285755180706225, 48.285679545492115, 48.28576188256064, 48.28569677883204, 48.28569294920095, 48.285718799210834, 48.285717841803056, 48.285682417715435, 48.28575901033732, 48.28569007697762, 48.28570060846314, 48.28568624734653, 48.28569869364759, 48.28573411773521, 48.28573890477408, 48.28573124551189, 48.285712097356424, 48.28568720475431, 48.28576092515287, 48.28573220291967, 48.28571209735642, 48.28574752144404, 48.28572454365747, 48.28569007697763, 48.28570731031755, 48.285674758453254, 48.28569390660872, 48.28569007697763, 48.28572454365747, 48.28572645847302, 48.28567954549212};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int C = 67;
    vector<int> score = {14, 27, 42, 99, 61, 84, 96, 79, 95, 42};
    int S = 5592;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {63.89999732753594, 63.89999802377127, 63.89999882711971, 63.90000187984382, 63.89999984469441, 63.90000107649537, 63.90000171917412, 63.900000808712555, 63.90000166561756, 63.89999882711971};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int C = 17;
    vector<int> score = {53, 89, 41, 62, 58, 33, 4, 6, 80, 94, 13, 36, 70, 54, 41, 58, 18, 1, 44, 20, 97, 22, 100, 30, 6, 62};
    int S = 1200;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {45.87674927362241, 46.03071336023893, 45.825427911416895, 45.91524029527654, 45.898133174541364, 45.79121366994656, 45.66718704461658, 45.67574060498416, 45.992222338584796, 46.05209726115789, 45.705678066270714, 45.80404401049793, 45.94945453674687, 45.881026053806195, 45.825427911416895, 45.898133174541364, 45.72706196718968, 45.65435670406521, 45.83825825196828, 45.735615527557265, 46.06492760170927, 45.744169087924845, 46.07775794226065, 45.77838332939518, 45.67574060498416, 45.91524029527654};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int C = 85;
    vector<int> score = {11, 70, 6, 2, 25};
    int S = 3189;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {22.799996661344146, 22.8000133546158, 22.79999524666011, 22.799994114912884, 22.800000622459457};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int C = 10;
    vector<int> score = {66, 69, 43, 27, 69, 9, 46, 53, 86, 77, 94, 68, 36, 37, 7, 39, 71, 96, 31, 96, 37, 98};
    int S = 6946;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {57.04545454545724, 57.045454545457254, 57.045454545457225, 57.04545454545721, 57.04545454545724, 57.0454545454572, 57.045454545457225, 57.04545454545724, 57.045454545457254, 57.045454545457254, 57.04545454545727, 57.045454545457254, 57.045454545457225, 57.045454545457225, 57.0454545454572, 57.045454545457225, 57.045454545457254, 57.045454545457275, 57.04545454545722, 57.045454545457275, 57.045454545457225, 57.045454545457275};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int C = 100;
    vector<int> score = {22, 52, 74, 25, 11, 55, 35, 48, 51, 28, 49, 51, 50, 28, 70, 48, 21, 35, 1, 34, 95, 86, 13, 33, 99};
    int S = 0;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {22.0, 52.0, 74.0, 25.0, 11.0, 55.0, 35.0, 48.0, 51.0, 28.0, 49.0, 51.0, 50.0, 28.0, 70.0, 48.0, 21.0, 35.0, 1.0, 34.0, 95.0, 86.0, 13.0, 33.0, 99.0};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int C = 1;
    vector<int> score = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int S = 10;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {51.354410039991464, 52.16454114221558, 52.9746722444397, 53.78480334666382, 54.594934448887955, 55.405065551112074, 56.21519665333619, 57.02532775556031, 57.83545885778444, 58.645589960008564};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int C = 98;
    vector<int> score = {13, 82, 74, 78, 12, 71, 81, 80, 30};
    int S = 154;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {26.25622829378155, 74.87969915903301, 69.24219529059805, 72.06094722481552, 25.551540310227182, 67.12813133993495, 74.17501117547864, 73.47032319192427, 38.23592401420582};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int C = 100;
    vector<int> score = {100};
    int S = 10000;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {100.0};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int C = 100;
    vector<int> score = {42, 68, 35, 1, 70, 25, 79, 59, 63, 65, 6, 46, 82, 28, 62, 92, 96, 43, 28, 37, 92, 5, 3, 54, 93, 83, 22, 17, 19, 96, 48, 27, 72, 39, 70, 13, 68, 100, 36, 95, 4, 12, 23, 34, 74, 65, 42, 12, 54, 69};
    int S = 10000;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {49.225412503631745, 49.70085746358659, 49.097408091336206, 48.47567237447218, 49.737430152813886, 48.91454464519974, 49.90200725433671, 49.53628036206376, 49.60942574051835, 49.645998429745646, 48.56710409754042, 49.29855788208634, 49.956866288177665, 48.96940367904068, 49.591139395904705, 50.13972973431413, 50.21287511276873, 49.24369884824539, 48.96940367904068, 49.133980780563505, 50.13972973431413, 48.54881775292678, 48.51224506369948, 49.44484863899552, 50.15801607892779, 49.97515263279131, 48.859685611358785, 48.76825388829056, 48.804826577517844, 50.21287511276873, 49.33513057131363, 48.951117334427025, 49.774002842041185, 49.1705534697908, 49.737430152813886, 48.69510850983596, 49.70085746358659, 50.286020491223326, 49.11569443594986, 50.194588768155086, 48.530531408313124, 48.676822165222305, 48.87797195597244, 49.079121746722564, 49.81057553126847, 49.645998429745646, 49.22541250363175, 48.67682216522231, 49.44484863899552, 49.719143808200236};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int C = 100;
    vector<int> score = {34, 34, 2, 3, 5, 6, 3, 3, 45, 6, 34, 3, 4, 5, 4, 3, 2, 4, 5, 4, 3, 5, 6, 3, 3, 45, 6, 4, 3, 4, 5, 6, 4, 3, 3, 45, 6, 4, 4, 6, 4, 3, 3, 5, 6, 4, 4, 5, 6, 4};
    int S = 10000;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {8.887764695215099, 8.887764695215099, 8.30260166757837, 8.320888012192018, 8.357460701419315, 8.375747046032961, 8.320888012192018, 8.320888012192018, 9.088914485965224, 8.375747046032961, 8.8877646952151, 8.320888012192018, 8.339174356805666, 8.357460701419315, 8.339174356805666, 8.320888012192018, 8.30260166757837, 8.339174356805666, 8.357460701419313, 8.339174356805666, 8.320888012192018, 8.357460701419313, 8.375747046032961, 8.320888012192018, 8.320888012192018, 9.088914485965223, 8.375747046032961, 8.339174356805666, 8.320888012192018, 8.339174356805666, 8.357460701419313, 8.375747046032961, 8.339174356805666, 8.320888012192018, 8.320888012192018, 9.088914485965223, 8.375747046032961, 8.339174356805666, 8.339174356805666, 8.375747046032961, 8.339174356805666, 8.320888012192018, 8.320888012192018, 8.357460701419313, 8.375747046032961, 8.339174356805666, 8.339174356805666, 8.357460701419313, 8.375747046032963, 8.339174356805668};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int C = 100;
    vector<int> score = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
    int S = 10000;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {9.999999999997613, 9.999999999997613, 9.999999999997613, 9.999999999997613, 9.999999999997613, 9.999999999997613, 9.999999999997613, 9.99999999999761, 9.99999999999761, 9.99999999999761, 9.99999999999761, 9.99999999999761, 9.99999999999761, 9.99999999999761, 9.99999999999761, 9.99999999999761, 9.99999999999761, 9.99999999999761, 9.99999999999761, 9.999999999997613, 9.999999999997613, 9.999999999997613, 9.999999999997613, 9.999999999997613, 9.999999999997613, 9.999999999997613, 9.999999999997613, 9.999999999997613, 9.999999999997613, 9.999999999997613, 9.999999999997613, 9.999999999997613, 9.999999999997613, 9.999999999997613, 9.999999999997613, 9.999999999997613, 9.999999999997613, 9.999999999997613, 9.999999999997613, 9.999999999997613, 9.99999999999761, 9.99999999999761, 9.99999999999761, 9.99999999999761, 9.99999999999761, 9.99999999999761, 9.99999999999761, 9.99999999999761, 9.99999999999761, 9.99999999999761};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int C = 2;
    vector<int> score = {1};
    int S = 10000;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.0};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int C = 10;
    vector<int> score = {10};
    int S = 10;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {10.0};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int C = 22;
    vector<int> score = {11};
    int S = 1004;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {11.0};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int C = 10;
    vector<int> score = {1};
    int S = 0;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.0};
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int C = 100;
    vector<int> score = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    int S = 10000;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {99.99999999997618, 99.99999999997618, 99.99999999997618, 99.99999999997618, 99.99999999997618, 99.99999999997618, 99.99999999997618, 99.99999999997618, 99.99999999997618, 99.99999999997618, 99.99999999997618, 99.99999999997618, 99.99999999997618, 99.99999999997618, 99.99999999997618, 99.99999999997618, 99.99999999997618, 99.99999999997618, 99.99999999997618, 99.99999999997618, 99.99999999997618, 99.99999999997618, 99.99999999997618, 99.99999999997618, 99.99999999997618, 99.99999999997618, 99.99999999997618, 99.99999999997618, 99.99999999997618, 99.99999999997618, 99.99999999997618, 99.99999999997618, 99.99999999997617, 99.99999999997617, 99.99999999997617, 99.99999999997617, 99.99999999997617, 99.99999999997617, 99.99999999997617, 99.99999999997617, 99.99999999997617, 99.99999999997617, 99.99999999997617, 99.99999999997617, 99.99999999997617, 99.99999999997617, 99.99999999997617, 99.99999999997617, 99.99999999997617, 99.99999999997617};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int C = 2;
    vector<int> score = {3};
    int S = 4;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {3.0};
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int C = 100;
    vector<int> score = {100};
    int S = 100;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {100.0};
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int C = 100;
    vector<int> score = {20};
    int S = 10000;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {20.0};
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int C = 50;
    vector<int> score = {3, 5, 2, 8, 99, 48, 4, 8, 46, 11, 3, 5, 2, 8, 99, 48, 4, 8, 46, 11, 3, 5, 2, 8, 99, 48, 4, 8, 46, 11, 3, 5, 2, 8, 99, 48, 4, 8, 46, 11, 3, 5, 2, 8, 99, 48, 4, 8, 46, 11};
    int S = 434;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {8.98806187034451, 10.400996981095082, 8.281594314969222, 12.520399647220943, 76.80894718637201, 40.779101862232345, 9.694529425719795, 12.520399647220941, 39.36616675148177, 14.6398023133468, 8.98806187034451, 10.400996981095082, 8.281594314969222, 12.520399647220941, 76.80894718637201, 40.77910186223236, 9.694529425719795, 12.520399647220941, 39.366166751481785, 14.6398023133468, 8.98806187034451, 10.400996981095082, 8.281594314969222, 12.520399647220941, 76.80894718637201, 40.779101862232366, 9.694529425719795, 12.520399647220941, 39.3661667514818, 14.639802313346799, 8.98806187034451, 10.400996981095082, 8.281594314969222, 12.520399647220941, 76.80894718637201, 40.77910186223238, 9.694529425719795, 12.520399647220941, 39.36616675148181, 14.6398023133468, 8.98806187034451, 10.400996981095082, 8.281594314969222, 12.520399647220941, 76.80894718637198, 40.779101862232395, 9.694529425719796, 12.520399647220941, 39.36616675148182, 14.639802313346799};
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int C = 100;
    vector<int> score = {13, 82, 74, 78, 12, 71, 81, 80, 30};
    int S = 10000;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {57.88888887935637, 57.888888894023836, 57.88888889232325, 57.888888893173544, 57.888888879143806, 57.88888889168554, 57.88888889381127, 57.8888888935987, 57.8888888829701};
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int C = 3;
    vector<int> score = {1};
    int S = 10000;
    CandyBox* pObj = new CandyBox();
    clock_t start = clock();
    vector<double> result = pObj->expectedScore(C, score, S);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.0};
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22653720&rd=14147&pm=10744
********************************************************************************
#include <math.h> 
#include <string.h> 
#include <vector> 
#include <string> 
#include <map> 
#include <queue> 
#include <algorithm> 
using namespace std; 
 
class CandyBox 
{ 
  public: 
  vector <double> expectedScore(int C, vector <int> score, int S) 
  { 
    int sz = score.size(); 
    vector<double> res(sz); 
    for (int i=0; i<sz; i++) res[i] = score[i]; 
    for  (int i=0; i<S; i++) { 
      double diff[100] = {0}; 
      for (int j=0; j<sz; j++) 
        for  (int k=j+1; k<sz; k++) { 
          double pp = 2.0/sz*C/(C*sz-1); 
          diff[j] += (res[k]-res[j])*pp/C; 
          diff[k] -= (res[k]-res[j])*pp/C; 
        } 
      for  (int j=0; j<sz; j++) res[j] += diff[j]; 
    } 
    return res; 
  }; 
};

********************************************************************************
*******************************************************************************/