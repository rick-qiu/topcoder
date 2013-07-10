/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10727
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

class RabbitPuzzle {
public:
    int theCount(vector<long> rabbits, vector<long> nests, int K);
};

int RabbitPuzzle::theCount(vector<long> rabbits, vector<long> nests, int K) {
    int ret;
    return ret;
}


int test0() {
    vector<long> rabbits = {0, 5, 8};
    vector<long> nests = {0, 8, 11};
    int K = 1;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<long> rabbits = {0, 5, 8};
    vector<long> nests = {0, 8, 11};
    int K = 3;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<long> rabbits = {0, 5, 8};
    vector<long> nests = {0, 8, 11};
    int K = 2;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<long> rabbits = {5, 8, 58};
    vector<long> nests = {13, 22, 64};
    int K = 58;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<long> rabbits = {0, 1, 2};
    vector<long> nests = {1, 2, 3};
    int K = 100;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<long> rabbits = {5, 8, 58};
    vector<long> nests = {20, 26, 61};
    int K = 58;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 537851168;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<long> rabbits = {67, 281, 2348};
    vector<long> nests = {235, 1394, 3293};
    int K = 83;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 167142023;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<long> rabbits = {-1000000000000000000, 999999999999999998, 999999999999999999};
    vector<long> nests = {-1000000000000000000, 999999999999999999, 1000000000000000000};
    int K = 5;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<long> rabbits = {-420196140727489674, 259695496911122584, 679891637638612257};
    vector<long> nests = {-2, 0, 1};
    int K = 100;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 950133148;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<long> rabbits = {-783537067827134388, -49374526719065532, 684788014389003324};
    vector<long> nests = {-783537067827134388, -49374526719065532, 684788014389003324};
    int K = 68;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 375817728;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<long> rabbits = {-293681465505333255, -251974247525304839, -210267029545276423};
    vector<long> nests = {-293681465505333255, -251974247525304839, -210267029545276423};
    int K = 98;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 237328179;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<long> rabbits = {-917610276352463760, -254801148925963744, 408007978500536272};
    vector<long> nests = {-917610276352463760, -254801148925963744, 408007978500536272};
    int K = 50;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 186893853;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<long> rabbits = {-311384148376454820, 200713102068447535, 712810352513349890};
    vector<long> nests = {-311384148376454820, 200713102068447535, 712810352513349890};
    int K = 2;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<long> rabbits = {493108906868406183, 593960506982651096, 694812107096896009};
    vector<long> nests = {493108906868406183, 593960506982651096, 694812107096896009};
    int K = 26;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 85836758;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<long> rabbits = {-8032725280632832, -8032714976061323, -8032704671489814};
    vector<long> nests = {-212698394337504574, 689465728381722454, 894131407743165705};
    int K = 93;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 204629902;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<long> rabbits = {-387606415324613991, -387606415324613921, -387606415324613851};
    vector<long> nests = {-785142993219220211, -208276970997003771, 189259606897602519};
    int K = 96;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
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
    vector<long> rabbits = {476954908052919956, 476954908058071071, 476954908063222186};
    vector<long> nests = {208493931072205436, 642458914672906891, 910919891658772526};
    int K = 63;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<long> rabbits = {105932750347746613, 105932750996570038, 105932751645393463};
    vector<long> nests = {-988861495078028162, -214702652803484537, 880091593271113663};
    int K = 61;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 173673344;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<long> rabbits = {-543212329403662910, -543212329386726578, -543212329369790246};
    vector<long> nests = {-863117175719954174, -769263621075762734, -449358774742535138};
    int K = 78;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 888011565;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<long> rabbits = {-947528085593668975, -461784293195406255, 903400588019896465};
    vector<long> nests = {417656795618951185, 417656795621633745, 417656795624316305};
    int K = 94;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 348967681;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<long> rabbits = {-493541439946245014, 82416269924146786, 842915908833628786};
    vector<long> nests = {266931801891424786, 266958198963236986, 266984596035049186};
    int K = 91;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 230094802;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<long> rabbits = {-455841325100844820, -113153067942400792, -17333537682781639};
    vector<long> nests = {-360024791730171328, -360021794841225667, -360018797952280006};
    int K = 94;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 244015388;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<long> rabbits = {-831672572507845931, -268704288347527067, 643363450110974225};
    vector<long> nests = {80394337037043685, 80395165950655361, 80395994864267037};
    int K = 62;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 324985621;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<long> rabbits = {-620992852077497854, 167885198909576390, 664918495640323964};
    vector<long> nests = {-123965438720487934, -123959555346750280, -123953671973012626};
    int K = 83;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 441778494;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<long> rabbits = {790719780813594527, 790719781708010252, 790719783771129191};
    vector<long> nests = {-137526283556863096, 27647746932760199, 955893813366336761};
    int K = 86;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 589858395;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<long> rabbits = {96392434709466494, 445475278658922657, 991865817014593173};
    vector<long> nests = {627605458110812829, 688315517928109553, 703493032882433734};
    int K = 43;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 89784861;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<long> rabbits = {-325978724168150430, -165110867022030802, 317492704416328082};
    vector<long> nests = {-808582295606509314, -4243009875911174, 960964133000806594};
    int K = 17;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 121856;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<long> rabbits = {-49187190402276492, 148649252185300719, 178624470759176054};
    vector<long> nests = {-954438791333311609, -516800600154731718, 418426219350178734};
    int K = 77;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 47314482;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<long> rabbits = {-646656846010675604, 532881278301646731, 799603923613545111};
    vector<long> nests = {-379934200733292474, -379934200641966019, -379934200607450769};
    int K = 100;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
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
    vector<long> rabbits = {-905123745169081616, 246080965080695422, 983431375660091260};
    vector<long> nests = {-905123745169081616, 246080965080695422, 983431375660091260};
    int K = 8;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 543;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<long> rabbits = {-342416395320170522, 27770168232492714, 849196559525238823};
    vector<long> nests = {-342416395320170522, 27770168232492714, 849196559525238823};
    int K = 54;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 964342281;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<long> rabbits = {-939663997588821827, -747466445810116427, -84673030183662899};
    vector<long> nests = {-939663997588821827, -747466445810116427, -84673030183662899};
    int K = 54;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 964342281;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<long> rabbits = {-349639796496730812, -252316444713845184, -216667044918634444};
    vector<long> nests = {-349639796496730812, -252316444713845184, -216667044918634444};
    int K = 96;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 252477655;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<long> rabbits = {-470316271039851002, 60597618992080514, 437585614616719846};
    vector<long> nests = {-470316271039851002, 60597618992080514, 437585614616719846};
    int K = 76;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 190645915;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<long> rabbits = {-966081391610828832, -92375530170560928, 230611586208282504};
    vector<long> nests = {-966081391610828832, -92375530170560928, 230611586208282504};
    int K = 24;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 43608330;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<long> rabbits = {-939164379542226603, 393572989996598702, 926667937812128824};
    vector<long> nests = {-939164379542226603, 393572989996598702, 926667937812128824};
    int K = 78;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 233323064;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<long> rabbits = {-796042399264747108, 211914647685334541, 948999516643662982};
    vector<long> nests = {-796042399264747108, 211914647685334541, 948999516643662982};
    int K = 100;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 555380499;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<long> rabbits = {-664139096112925554, -115723467976412364, 174386463397870206};
    vector<long> nests = {-664139096112925554, -115723467976412364, 174386463397870206};
    int K = 64;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 282806367;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<long> rabbits = {-759349031814682171, -582725138367326741, -350188499511536091};
    vector<long> nests = {-759349031814682171, -582725138367326741, -350188499511536091};
    int K = 8;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 543;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<long> rabbits = {115804431866303855, 115804431867969275, 115804431874030715};
    vector<long> nests = {-292923425806396285, 296349626489008955, 705077484167770535};
    int K = 69;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 9245;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<long> rabbits = {-276386447774828749, -276346473292886710, -276216088060119887};
    vector<long> nests = {-842655025928638247, -143472162317142259, 422926801069434062};
    int K = 80;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 247688478;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<long> rabbits = {-142689927448090214, -142689926027176314, -142689924914254049};
    vector<long> nests = {-327154623236085319, 293936905977428116, 478401602878345486};
    int K = 89;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 482944996;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<long> rabbits = {-259261094776779676, -259261024408559758, -259261002961516090};
    vector<long> nests = {-348538959722252944, -204194902260432358, -114917015867915422};
    int K = 88;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 161721778;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<long> rabbits = {269401723663076520, 269401723690477684, 269401723701800905};
    vector<long> nests = {-180107375167090240, 95140917946835570, 544650016788325551};
    int K = 85;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 571119683;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<long> rabbits = {-776466996896862930, -204737590666783470, 833098309940836050};
    vector<long> nests = {261368808498957930, 261368861782625070, 261368956994423730};
    int K = 54;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 930965712;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<long> rabbits = {156789817330068323, 524544406419169170, 590994568545733465};
    vector<long> nests = {223239979341421087, 223239979718908955, 223239979834120486};
    int K = 75;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 450850843;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<long> rabbits = {-931750980217695390, 72067458586250410, 455590624439662050};
    vector<long> nests = {-548227816903854350, -548227813650638510, -548227811111067910};
    int K = 89;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 518883543;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<long> rabbits = {-702903889525950810, -101925340694471160, 76280812284443940};
    vector<long> nests = {-524697736554231210, -524697736544397360, -524697736537201860};
    int K = 60;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 119;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<long> rabbits = {365764509190227748, 547776094525036740, 962188935443370500};
    vector<long> nests = {779845462117442692, 779917526743375620, 780249414734494436};
    int K = 53;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 542840931;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<long> rabbits = {-917748911194909313, -768938565859749447, -724734520321684660};
    vector<long> nests = {-901550702473943808, -857346656935879021, -829340820118779739};
    int K = 47;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 92755307;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<long> rabbits = {-912834846296946277, -706924989701414111, 648131518723439662};
    vector<long> nests = {442213010295665212, 442244458193913055, 442253110026155339};
    int K = 64;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 133608384;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<long> rabbits = {142779899440637091, 189574891088003192, 262658080967342631};
    vector<long> nests = {-969603285588111521, -199441023125614182, 986025351782473869};
    int K = 98;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<long> rabbits = {455526397341349211, 455526397361018039, 455526397395867217};
    vector<long> nests = {-29460316126479901, 232810509478766875, 717797222981445165};
    int K = 80;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 12479;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<long> rabbits = {-157616614230554908, -157611661714447180, -157604881901067456};
    vector<long> nests = {-960444504404512892, -344416488776958768, 458418181210378940};
    int K = 44;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 102079;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<long> rabbits = {-860627725207365364, 233181309424517038, 920911576015256870};
    vector<long> nests = {-173004076865870408, -172558668408102906, -172452050158858030};
    int K = 92;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 100266547;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<long> rabbits = {-133874362261546729, -131608148466473404, -127255320891391354};
    vector<long> nests = {-361741972484442904, 764264197573493096, 996484635371471321};
    int K = 100;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 841661442;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<long> rabbits = {153144437775409700, 234994936808605936, 366811335878621040};
    vector<long> nests = {-68474800556113356, 145516894842340832, 498952532243878992};
    int K = 44;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 87;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<long> rabbits = {-516479169148433040, -516475354528297024, -516435737938358954};
    vector<long> nests = {-627764834574079286, -453576937207148384, -342251655191564068};
    int K = 76;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 11247;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<long> rabbits = {-519860462998691312, -519860043115795704, -519859460624779311};
    vector<long> nests = {-869864365244934656, 633997038376413852, 984001523113673589};
    int K = 86;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 803927;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<long> rabbits = {-678937303604070164, -671037595773484082, -669936591197792642};
    vector<long> nests = {-836188282127200082, -738281450233838780, -579929467135017422};
    int K = 45;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 605327998;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<long> rabbits = {-528613396185916527, -201098264969478419, -113141613721121617};
    vector<long> nests = {-440656888083747711, -440656071818840973, -440655928672652987};
    int K = 95;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 189;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<long> rabbits = {-620118067688270485, 263292693698369199, 897308595922092780};
    vector<long> nests = {13897831238697411, 13897832094716894, 13897835391472579};
    int K = 82;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 163;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<long> rabbits = {-182733322300151616, 53485977840789488, 190440538256114608};
    vector<long> nests = {-173597840401326672, -126673589977489808, 1145488539010368};
    int K = 71;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<long> rabbits = {-501281730818493614, 401161292307988324, 711753207436717148};
    vector<long> nests = {-190690693323867020, -190690140213831584, -190689262579729354};
    int K = 98;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<long> rabbits = {667895369280299803, 667895372990421103, 667895375587506013};
    vector<long> nests = {341245615638307573, 529138197242913943, 855787953481991083};
    int K = 95;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 700146660;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<long> rabbits = {-731054691914989813, -375257949674412643, 212119151603117208};
    vector<long> nests = {-143678008168261783, -143676575193805242, -143676157663003421};
    int K = 93;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 72858404;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<long> rabbits = {-258648146242800394, -258648140047423212, -258648125025483316};
    vector<long> nests = {-560215310979101944, -89531632778675354, 212035546979566092};
    int K = 55;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 5829;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<long> rabbits = {41781750650172943, 60809768409706823, 74724659363077105};
    vector<long> nests = {-429729258919549541, -111954775888508411, 373471124634584355};
    int K = 91;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 894479113;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<long> rabbits = {510949314472736451, 527677153081292730, 599549813388538719};
    vector<long> nests = {396879537676263123, 469017297389735790, 654959734493455107};
    int K = 87;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 131520815;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<long> rabbits = {-27830918006887363, -27830299640123751, -27829681273360139};
    vector<long> nests = {-665610687795722491, -387493433826825759, 250286954328772981};
    int K = 41;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<long> rabbits = {-977537342492224959, 287162333786612891, 981413051913469241};
    vector<long> nests = {-283286624403198959, -283286624365368609, -283286624327538259};
    int K = 75;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<long> rabbits = {492360303889880553, 492360303889889913, 492360303889892773};
    vector<long> nests = {-595033835187198527, -113968725077894547, 973425413999187393};
    int K = 100;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<long> rabbits = {-336127426462995939, -336127426029505896, -336127424625270750};
    vector<long> nests = {-888661577510264085, 320556017686651980, 873090170138155272};
    int K = 74;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<long> rabbits = {-737386015515776117, -178925073309629180, 497891099931844376};
    vector<long> nests = {-60569842274304381, -60569842274303984, -60569842274302164};
    int K = 97;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<long> rabbits = {-779570473498647329, -595929014684652866, 216270043759539131};
    vector<long> nests = {10622548749463787, 38528155009657719, 60534191205738600};
    int K = 77;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<long> rabbits = {-20284587640483430, 667427185897717360, 929724109050254673};
    vector<long> nests = {242012334720183620, 242012338985267550, 242012339777137813};
    int K = 67;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<long> rabbits = {-983522648915318398, -629973818794346332, 889127400017241464};
    vector<long> nests = {524757027996123638, 603562586411361236, 614384128311506996};
    int K = 76;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<long> rabbits = {-444287945152454832, -390810586073252382, -106650574559699808};
    vector<long> nests = {-457903450543413678, -387652875346670904, -89877358442159484};
    int K = 91;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<long> rabbits = {0, 1, 2};
    vector<long> nests = {0, 101, 102};
    int K = 100;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<long> rabbits = {0, 1, 2};
    vector<long> nests = {0, 102, 103};
    int K = 100;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<long> rabbits = {-998224527644577708, -958616385797002422, 99754954770217413};
    vector<long> nests = {-904596259894723546, -303356394092570409, 14969857098461483};
    int K = 23;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<long> rabbits = {-824171387295311631, -801124104773570860, -653148257818896500};
    vector<long> nests = {156493206411181133, 287427541619657549, 920564497162011550};
    int K = 9;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<long> rabbits = {-379377034964804481, 715913976181767025, 962611882627452825};
    vector<long> nests = {-244760933818930193, 44166371198368943, 45788008650128259};
    int K = 42;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<long> rabbits = {29310791855798685, 195065233088722611, 734625072129360769};
    vector<long> nests = {-335003109161443975, 329664136722459779, 772492420647225790};
    int K = 60;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<long> rabbits = {-885650032731922525, -736151772939427213, -413771692331348216};
    vector<long> nests = {-710822925545120396, 408868303382291843, 561216254841066227};
    int K = 67;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<long> rabbits = {-985381481609649018, -721741938139475917, 746900631426100177};
    vector<long> nests = {-317763365208358594, -170088689598251383, 630935763566034287};
    int K = 76;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<long> rabbits = {-172887830240714141, 93681602709545759, 802212424239412689};
    vector<long> nests = {280214080066629020, 514836832300533998, 770265743523057767};
    int K = 50;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<long> rabbits = {-728498937189378807, 415387553107654315, 781319897589279127};
    vector<long> nests = {-712310018945224796, -503536690686727040, -153793264449256239};
    int K = 66;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<long> rabbits = {-449696031602920369, -62146032689234572, 796493162577351081};
    vector<long> nests = {378684797004236157, 590671580971071827, 620929947630500954};
    int K = 1;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<long> rabbits = {-942126411045580847, -411637212324962713, 236820088195651702};
    vector<long> nests = {-865121317134959208, -459981345794175822, 111470860815816954};
    int K = 69;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<long> rabbits = {-710926933494011179, -106748849659950611, 337499741394505689};
    vector<long> nests = {-439088197609765380, 94010111655582180, 484948871783503724};
    int K = 64;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<long> rabbits = {-641271694653678009, -311552615144668071, -207877589606493561};
    vector<long> nests = {-841039615711003143, -368686359850373895, 857522262755177167};
    int K = 25;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<long> rabbits = {-781267101334675387, 214642104506346179, 600721444215640883};
    vector<long> nests = {295025036309152707, 349865851608768432, 549486419299369671};
    int K = 69;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<long> rabbits = {73133795479620678, 261133810338192486, 581776670845602326};
    vector<long> nests = {-355158372698439817, 370756167019337463, 396324270809415911};
    int K = 75;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<long> rabbits = {-34409219915912530, -3464988679282546, 433231736061823374};
    vector<long> nests = {104140173909123611, 449571047360347899, 490465181261465851};
    int K = 96;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<long> rabbits = {-97107192779722644, 295880660023357798, 390488846809284663};
    vector<long> nests = {-9776558823484752, -2499005993800743, 4778546835888230};
    int K = 15;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 389;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<long> rabbits = {1396978889714814, 5464317432538095, 8175876461088043};
    vector<long> nests = {4108537918261480, 5464317432531531, 5464317432534813};
    int K = 50;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 948952738;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<long> rabbits = {-726549176455284522, -311073854929375360, 411061822960895463};
    vector<long> nests = {-578165133052871117, 104401466596476402, 678153101084333820};
    int K = 68;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 643396901;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<long> rabbits = {-731657988370371598, -160137264743262318, 568468102219953043};
    vector<long> nests = {-811871423266498440, -367355304889256666, 441463496970085537};
    int K = 98;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 369704520;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<long> rabbits = {2350444572957550, 3230630382361316, 3230630382362827};
    vector<long> nests = {-800379013603772650, -468548963458347372, 334180494718384339};
    int K = 66;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 36781176;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<long> rabbits = {-293100457846038183, 426097103787248784, 722853379218459436};
    vector<long> nests = {-181380448271765541, 642554622336486690, 827590888193424700};
    int K = 96;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 153947296;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<long> rabbits = {-6530759510510383, -4973999851227080, -3417240191945275};
    vector<long> nests = {-11201038488372276, -9644278829085977, -3417240191942279};
    int K = 95;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 218418883;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<long> rabbits = {-25840041051358801, 28949146360087806, 50864821324667178};
    vector<long> nests = {-3924366086783075, 7033471395508434, 7033471395512080};
    int K = 75;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 589447894;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<long> rabbits = {-84210047227261550, -25046912712692293, 60121995214874414};
    vector<long> nests = {-70557016185212403, 152442490830537828, 223958367716055388};
    int K = 78;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 991056060;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<long> rabbits = {-2278641201888414, -274468461963280, 1729704277961373};
    vector<long> nests = {-2278641201888414, -2278641201887933, -274468461963280};
    int K = 3;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<long> rabbits = {-4257135148943815, -588721942975366, 1245484660011528};
    vector<long> nests = {-429793067043809246, 311226400566200771, 738596539064053096};
    int K = 69;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 540431845;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<long> rabbits = {-957258367109511612, -339178391536077155, 620333865161492459};
    vector<long> nests = {-444234478031178485, -132568088085201609, 313920279534034878};
    int K = 59;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 179091395;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<long> rabbits = {-16474783251636959, -7969512013177080, 4788394844510870};
    vector<long> nests = {-569317413752130751, 242935989521649072, 808536526879830814};
    int K = 23;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 13109;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<long> rabbits = {-665227890202155123, -233873250989828367, 435861583576678910};
    vector<long> nests = {-824148020437580033, -506307759965606015, 322347204836326172};
    int K = 30;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1679;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<long> rabbits = {-226185132014872071, -187503262183261682, 34917489348499388};
    vector<long> nests = {-854765516778224912, -671026635078143560, 179974501216970351};
    int K = 71;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 187445319;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<long> rabbits = {-669331411575285687, -239917366884790187, 431591525048535854};
    vector<long> nests = {2177480358035819, 2853722948093321, 2853722948097856};
    int K = 77;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 960561169;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<long> rabbits = {-552103967139718659, 384784879425114853, 939521696470082036};
    vector<long> nests = {-206934392089508423, 779264393768171453, 988831635762928400};
    int K = 92;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 671041552;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<long> rabbits = {-106348867900415878, -38910546491962962, 68327440010003225};
    vector<long> nests = {-216427651050192, 1994664854146255, 3100211106746756};
    int K = 13;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<long> rabbits = {-517044516111949, 5877630410591444, 5877630410598475};
    vector<long> nests = {-517044516111949, 5877630410584413, 5877630410591444};
    int K = 37;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 267344849;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<long> rabbits = {-30939879990800543, 106793661245976944, 136307991511000771};
    vector<long> nests = {-1425549725777833, 8412560362563815, 8412560362564932};
    int K = 88;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 164747078;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<long> rabbits = {-343809844425079649, -98309140644323762, 78001697786960025};
    vector<long> nests = {-786327523251989459, -786327523251496122, -167499005993302525};
    int K = 96;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<long> rabbits = {-831524332176950533, -831524332176801957, -786509225106315126};
    vector<long> nests = {-786509225106466577, -786509225106465546, -786509225106462671};
    int K = 45;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<long> rabbits = {-771054703935523492, -771054703935356597, -694345030297609985};
    vector<long> nests = {-694345030300319218, -694345030290756663, -694345030288214325};
    int K = 39;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<long> rabbits = {-388445752145317090, 248921445280698711, 248921445280701991};
    vector<long> nests = {-388445752145319067, -388445752145310151, -388445752145304894};
    int K = 75;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<long> rabbits = {-998626708227176453, -998626708227156608, -998626708227131409};
    vector<long> nests = {-998876062595734822, -998876062593566543, -998626708224982975};
    int K = 55;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<long> rabbits = {-565528458671219167, -565528458669620388, -565528458667675121};
    vector<long> nests = {-579666933422409083, -579666933421719312, -565528458668584129};
    int K = 28;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<long> rabbits = {-769683953660208912, -769683953660208763, -769683953660208640};
    vector<long> nests = {-769683953660297118, -12255605529305942, -12255605529217613};
    int K = 38;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<long> rabbits = {-392407508350520673, -392407508350362981, -392407508349982498};
    vector<long> nests = {-394083421107540518, -394083421107322885, -392407508349922557};
    int K = 57;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<long> rabbits = {508035976505495492, 983189606011741490, 983189606016059469};
    vector<long> nests = {508035976509400988, 508035976509735298, 508035976510147781};
    int K = 17;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<long> rabbits = {514393367619902332, 546225461016069803, 546225461016081427};
    vector<long> nests = {514393367619913951, 514393367619913959, 514393367619913964};
    int K = 6;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<long> rabbits = {-1000000000000000000, 999999999999999999, 1000000000000000000};
    vector<long> nests = {-1000000000000000000, 999999999999999999, 1000000000000000000};
    int K = 100;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 390514867;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<long> rabbits = {-1, 0, 1};
    vector<long> nests = {-1, 0, 1};
    int K = 100;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 19254083;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<long> rabbits = {-50, 1, 2};
    vector<long> nests = {-50, 49, 50};
    int K = 100;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 245953932;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<long> rabbits = {-1000000000000000000, 999999999999999999, 1000000000000000000};
    vector<long> nests = {-1000000000000000000, 999999999999999951, 999999999999999952};
    int K = 100;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 245953932;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<long> rabbits = {-100000000000000000, 99999999999999998, 99999999999999999};
    vector<long> nests = {-100000000007000000, 99899999999999999, 100006000000000000};
    int K = 72;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<long> rabbits = {-310930377, 192187238, 503117617};
    vector<long> nests = {-268628057, 166040015, 434668074};
    int K = 100;
    RabbitPuzzle* pObj = new RabbitPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(rabbits, nests, K);
    clock_t end = clock();
    delete pObj;
    int expected = 472951823;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=310333&rd=14148&pm=10727
********************************************************************************
#include <algorithm> 
#include <cctype> 
#include <cmath> 
#include <cstdio> 
#include <cstring> 
#include <ctime> 
#include <iostream> 
#include <string> 
#include <vector> 
using namespace std; 
 
typedef long long llint; 
 
#define MOD 1000000007 
 
struct node { 
   llint a, b, c; 
 
   bool has_parent() { return c-b != b-a; } 
 
   friend bool equal( const node &A, const node &B ) { 
      return A.a == B.a && A.b == B.b && A.c == B.c; 
   } 
 
   node get_parent() { 
      node ret; 
      if( c-b < b-a ) { 
         ret.a = a; 
         ret.b = 2*b-c; 
         ret.c = b; 
      } else { 
         ret.a = b; 
         ret.b = 2*b-a; 
         ret.c = c; 
      } 
 
      return ret; 
   } 
 
   void read( vector<llint> x ) { 
      sort( x.begin(), x.end() );  
      a = x[0]; 
      b = x[1]; 
      c = x[2]; 
   } 
}; 
 
void add( int &a, int b ) { 
   a += b; 
   if( a >= MOD ) a -= MOD; 
} 
 
int aa, bb, cc; 
int memo[101][151][151][2]; 
 
class RabbitPuzzle { 
public: 
 
   int rec( int K, int x, int y, bool flag ) { 
      if( x > 150 || y > 150 ) return 0; 
      if( K == 0 ) return x == 0 && y == 0; 
 
      int &ret = memo[K][x][y][flag]; 
      if( ret >= 0 ) return ret; 
 
      ret = 0; 
      if( y == 0 ) { 
         if( x == 0 ) { 
            add( ret, rec( K-1, 0, 1, false ) ); 
            add( ret, rec( K-1, 0, 1, false ) ); 
            if( x < cc ) add( ret, rec( K-1, 1, 0, true ) ); 
         } else { 
            add( ret, rec( K-1, x-1, 0, false ) ); 
            add( ret, rec( K-1, x, 1, false ) ); 
            if( x < cc ) add( ret, rec( K-1, x+1, 0, true ) ); 
         } 
      } else { 
         add( ret, rec( K-1, x, y-1, flag ) ); 
         add( ret, rec( K-1, x, y+1, flag ) ); 
         if( flag == false || x != cc ) { 
            add( ret, rec( K-1, x, y+1, false ) ); 
         } 
      } 
 
      return ret; 
   } 
 
   int theCount( vector<llint> rabbits, vector<llint> nests, int K ) { 
      node a; a.read( rabbits ); 
      node b; b.read( nests ); 
      vector<node> A; A.push_back( a ); 
      vector<node> B; B.push_back( b ); 
      while( A.size() < 250 && A.back().has_parent() ) A.push_back( A.back().get_parent() ); 
      while( B.size() < 250 && B.back().has_parent() ) B.push_back( B.back().get_parent() ); 
 
      aa = -1; bb = -1; 
      for( int i = 0; aa == -1 && i < A.size(); ++i )  
         for( int j = 0; bb == -1 && j < B.size(); ++j )  
            if( equal( A[i], B[j] ) ) { 
               aa = i; 
               bb = j; 
            } 
 
      if( aa == -1 && bb == -1 ) return 0; 
      if( aa + bb > K ) return 0; 
 
      cc = A.size() - 1; 
 
      memset( memo, -1, sizeof memo ); 
      return rec( K, aa, bb, false ); 
   } 
}; 
 
 
 
// Powered by FileEdit
// Powered by moj 4.12 [modified TZTester]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/