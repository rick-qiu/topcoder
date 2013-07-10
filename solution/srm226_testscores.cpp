/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3486
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

class TestScores {
public:
    double weightedScore(vector<double> questions, int testScore);
};

double TestScores::weightedScore(vector<double> questions, int testScore) {
    double ret;
    return ret;
}


int test0() {
    vector<double> questions = {0.5, 0.5};
    int testScore = 1;
    TestScores* pObj = new TestScores();
    clock_t start = clock();
    double result = pObj->weightedScore(questions, testScore);
    clock_t end = clock();
    delete pObj;
    double expected = 1000.0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<double> questions = {0.5, 0.5, 0.5};
    int testScore = 3;
    TestScores* pObj = new TestScores();
    clock_t start = clock();
    double result = pObj->weightedScore(questions, testScore);
    clock_t end = clock();
    delete pObj;
    double expected = 1519.6152422706632;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<double> questions = {0.2, 0.3, 0.4};
    int testScore = 3;
    TestScores* pObj = new TestScores();
    clock_t start = clock();
    double result = pObj->weightedScore(questions, testScore);
    clock_t end = clock();
    delete pObj;
    double expected = 1806.6323435772447;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<double> questions = {0.2, 0.3, 0.4};
    int testScore = 0;
    TestScores* pObj = new TestScores();
    clock_t start = clock();
    double result = pObj->weightedScore(questions, testScore);
    clock_t end = clock();
    delete pObj;
    double expected = 654.3004241811809;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<double> questions = {0.9, 0.9, 0.9, 0.9};
    int testScore = 0;
    TestScores* pObj = new TestScores();
    clock_t start = clock();
    double result = pObj->weightedScore(questions, testScore);
    clock_t end = clock();
    delete pObj;
    double expected = -800.0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<double> questions = {0.956062, 0.592855, 0.405804, 0.484474, 0.633413, 0.219248, 0.801282, 0.724066, 0.886559, 0.794041, 0.32422};
    int testScore = 7;
    TestScores* pObj = new TestScores();
    clock_t start = clock();
    double result = pObj->weightedScore(questions, testScore);
    clock_t end = clock();
    delete pObj;
    double expected = 1037.5680868214772;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<double> questions = {0.142243, 0.312081, 0.852311, 0.01989, 0.339846, 0.349401, 0.099972, 0.44805, 0.791938, 0.033407, 0.177105, 0.079202, 0.560838, 0.989649, 0.769561, 0.168289, 0.944212, 0.137621, 0.681357, 0.615762, 0.303207, 0.206389, 0.287797, 0.608208, 0.140568, 0.500212, 0.238602, 0.508967, 0.42877, 0.914172, 0.41103, 0.998764, 0.188136, 0.199794, 0.113002, 0.466334, 0.314968, 0.480674, 0.536231, 0.649041};
    int testScore = 27;
    TestScores* pObj = new TestScores();
    clock_t start = clock();
    double result = pObj->weightedScore(questions, testScore);
    clock_t end = clock();
    delete pObj;
    double expected = 2160.141475328103;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<double> questions = {0.459341};
    int testScore = 1;
    TestScores* pObj = new TestScores();
    clock_t start = clock();
    double result = pObj->weightedScore(questions, testScore);
    clock_t end = clock();
    delete pObj;
    double expected = 1325.4733000493302;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<double> questions = {0.226696, 0.200997, 0.446245, 0.393547, 0.940006, 0.823029, 0.544262, 0.457162, 0.926163, 0.583553, 0.355707, 0.993773, 0.653489, 0.640101, 0.720486, 0.546165, 0.306126, 0.002745};
    int testScore = 17;
    TestScores* pObj = new TestScores();
    clock_t start = clock();
    double result = pObj->weightedScore(questions, testScore);
    clock_t end = clock();
    delete pObj;
    double expected = 2216.4403393596367;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<double> questions = {0.049665, 0.737218, 0.072201, 0.061819, 0.546762, 0.418046, 0.763362, 0.03741, 0.722772, 0.831665, 0.947553, 0.459691, 0.78137, 0.929553, 0.082843, 0.016954, 0.470175};
    int testScore = 0;
    TestScores* pObj = new TestScores();
    clock_t start = clock();
    double result = pObj->weightedScore(questions, testScore);
    clock_t end = clock();
    delete pObj;
    double expected = -571.841215943256;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<double> questions = {0.710971, 0.596377, 0.27799, 0.157162, 0.935113, 0.792361, 0.334813, 0.302366, 0.802477, 0.531333, 0.344704, 0.842274, 0.724013, 0.392943, 0.13121, 0.618743, 0.236649, 0.578914, 0.651667, 0.072263, 0.081411, 0.678661, 0.700327, 0.132583, 0.531554, 0.684921, 0.861478};
    int testScore = 10;
    TestScores* pObj = new TestScores();
    clock_t start = clock();
    double result = pObj->weightedScore(questions, testScore);
    clock_t end = clock();
    delete pObj;
    double expected = 498.506563292853;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<double> questions = {0.259377, 0.712574, 0.332657, 0.720884, 0.24828, 0.277359, 0.293821, 0.120837, 0.448079, 0.728987, 0.035858, 0.853954, 0.621041, 0.343157, 0.04418, 0.526498, 0.760881, 0.701226, 0.887208, 0.495707, 0.608381, 0.143345, 0.856994, 0.947921, 0.41702, 0.471576, 0.859849, 0.226708, 0.968599, 0.903022, 0.556968, 0.410986, 0.838862, 0.272948, 0.755052, 0.14315, 0.913122, 0.487909, 0.046936, 0.707196, 0.151892, 0.228875, 0.702212, 0.356848, 0.606501, 0.904354, 0.807854, 0.89368, 0.684726};
    int testScore = 42;
    TestScores* pObj = new TestScores();
    clock_t start = clock();
    double result = pObj->weightedScore(questions, testScore);
    clock_t end = clock();
    delete pObj;
    double expected = 2635.905242183818;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<double> questions = {0.495243, 0.666412, 0.79933, 0.398805, 0.793192, 0.469101, 0.551664, 0.910602, 0.201403, 0.663654, 0.960435, 0.956994, 0.49411, 0.73988, 0.118721, 0.571247, 0.634019, 0.622155, 0.815891, 0.697756, 0.85044, 0.435051, 0.240725, 0.082676, 0.967407, 0.518964, 0.934546, 0.414545, 0.981809, 0.695729, 0.994336, 0.714909, 0.891508};
    int testScore = 26;
    TestScores* pObj = new TestScores();
    clock_t start = clock();
    double result = pObj->weightedScore(questions, testScore);
    clock_t end = clock();
    delete pObj;
    double expected = 1606.1277571913897;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<double> questions = {0.978946, 0.773471, 0.366151, 0.34684, 0.066091, 0.11189, 0.801336, 0.939967, 0.840663, 0.376307, 0.493681, 0.656145, 0.56249, 0.849742, 0.406626, 0.167554, 0.527531, 0.706818, 0.828806, 0.170789, 0.958502, 0.341883, 0.389678, 0.339981, 0.145504, 0.947135, 0.325141};
    int testScore = 14;
    TestScores* pObj = new TestScores();
    clock_t start = clock();
    double result = pObj->weightedScore(questions, testScore);
    clock_t end = clock();
    delete pObj;
    double expected = 940.5887857546576;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<double> questions = {0.340752, 0.993167, 0.22922, 0.878667, 0.045011, 0.639423, 0.263353, 0.107566, 0.614417, 0.412895, 0.747869, 0.489225, 0.213825, 0.631516, 0.29147, 0.510032, 0.446569, 0.297787, 0.44915, 0.817511, 0.432582, 0.864407, 0.425315, 0.110939, 0.136524, 0.249894, 0.026911, 0.281981, 0.945909, 0.104211, 0.866548, 0.805306, 0.499224, 0.324392, 0.815625, 0.379218, 0.764061, 0.820165, 0.707454, 0.816278, 0.365235, 0.529581};
    int testScore = 12;
    TestScores* pObj = new TestScores();
    clock_t start = clock();
    double result = pObj->weightedScore(questions, testScore);
    clock_t end = clock();
    delete pObj;
    double expected = 40.4378777981201;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<double> questions = {0.999, 0.999, 0.999, 0.999, 0.999, 0.999, 0.999, 0.999, 0.999, 0.999, 0.999, 0.999, 0.999, 0.999, 0.999, 0.999, 0.999, 0.999, 0.999, 0.999, 0.999, 0.999, 0.999, 0.999, 0.999, 0.999, 0.999, 0.999, 0.999, 0.999, 0.999, 0.999, 0.999, 0.999, 0.999, 0.999, 0.999, 0.999, 0.999, 0.999, 0.999, 0.999, 0.999, 0.999, 0.999, 0.999, 0.999, 0.999, 0.999, 0.999};
    int testScore = 0;
    TestScores* pObj = new TestScores();
    clock_t start = clock();
    double result = pObj->weightedScore(questions, testScore);
    clock_t end = clock();
    delete pObj;
    double expected = -66048.48991588104;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<double> questions = {0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010};
    int testScore = 50;
    TestScores* pObj = new TestScores();
    clock_t start = clock();
    double result = pObj->weightedScore(questions, testScore);
    clock_t end = clock();
    delete pObj;
    double expected = 68048.48991588103;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<double> questions = {0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010, 0.0010};
    int testScore = 0;
    TestScores* pObj = new TestScores();
    clock_t start = clock();
    double result = pObj->weightedScore(questions, testScore);
    clock_t end = clock();
    delete pObj;
    double expected = 932.8843944785975;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<double> questions = {0.6886002193689249, 0.4250473792104953, 0.9147268409098991, 0.4878904166062028, 0.745006601525402, 0.0025225561073211056, 0.2627327595742853, 0.789230773936019, 0.699456030566899, 0.3750600277930146, 0.33429998025095553, 0.4413426715668337, 0.16552939628114216, 0.1684066556099183, 0.15764565218061866, 0.7037202450155966, 0.5404135935285046, 0.8712751263620134, 0.6018958963814489, 0.754661963324935, 0.9658229811200171, 0.878154541528717, 0.1551233499087883, 0.3489157032718284, 0.6394693803021836, 0.7445245752250014, 0.7571723551247291, 0.48437317309256034, 0.24322466583911484, 0.4276965220964928};
    int testScore = 8;
    TestScores* pObj = new TestScores();
    clock_t start = clock();
    double result = pObj->weightedScore(questions, testScore);
    clock_t end = clock();
    delete pObj;
    double expected = 0.004289375098437631;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<double> questions = {0.956062, 0.592855, 0.405804, 0.484474, 0.633413, 0.219248, 0.801282, 0.724066, 0.886559, 0.794041, 0.32422, 0.32422, 0.32422, 0.32422, 0.32422, 0.32422, 0.32422, 0.32422, 0.32422, 0.32422, 0.32422, 0.32422, 0.32422, 0.32422, 0.32422, 0.32422, 0.32422, 0.32422, 0.32422, 0.32422, 0.32422, 0.32422, 0.32422, 0.32422, 0.32422, 0.32422, 0.32422, 0.32422, 0.32422, 0.32422, 0.32422, 0.32422, 0.32422, 0.32422, 0.32422, 0.32422, 0.32422, 0.32422, 0.32422, 0.32422};
    int testScore = 50;
    TestScores* pObj = new TestScores();
    clock_t start = clock();
    double result = pObj->weightedScore(questions, testScore);
    clock_t end = clock();
    delete pObj;
    double expected = 3818.1549058106057;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<double> questions = {0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1};
    int testScore = 5;
    TestScores* pObj = new TestScores();
    clock_t start = clock();
    double result = pObj->weightedScore(questions, testScore);
    clock_t end = clock();
    delete pObj;
    double expected = 1140.556385699745;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=275071&rd=6515&pm=3486
********************************************************************************
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <set>
#include <map>
#include <queue>
using namespace std;
 
#define si size()
typedef vector<int> vi;
typedef vector<string> vs;
typedef long long ii;
#define rev(A) reverse((A).begin(), (A).end())
#define s(A) sort((A).begin(), (A).end())
 
//----------------------------
 
double P[51][51];
class TestScores {
  public:
  double weightedScore(vector <double> a, int b) {
    double mean = 0;
    for (int i = 0; i < a.si; i++) mean += a[i];
    P[0][0] = 1;
    for (int i = 0; i < a.si; i++) {
      for (int j = 0; j <= i; j++) {
        P[i+1][j] += P[i][j] * (1 - a[i]);
        P[i+1][j+1] += P[i][j] * a[i];
      }
    }
    int N = a.si;
    double var = 0;
    for (int i = 0; i <= N; i++) {
      double prob = P[N][i];
      var += prob * pow(i - mean, 2);
    }
    double sd = sqrt(var);
    double NSD = (b - mean) / sd;
    return NSD * 300 + 1000;
  }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/