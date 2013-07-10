/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11119
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

class BatchSystemRoulette {
public:
    vector<double> expectedFinishTimes(vector<int> duration, vector<string> user);
};

vector<double> BatchSystemRoulette::expectedFinishTimes(vector<int> duration, vector<string> user) {
    vector<double> ret;
    return ret;
}


int test0() {
    vector<int> duration = {3, 2, 4, 1};
    vector<string> user = {"Gil Grissom", "Sarah Sidle", "Warrick Brown", "Catherine Willows"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {6.0, 3.0, 10.0, 1.0};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> duration = {3, 2, 4, 1};
    vector<string> user = {"mac taylor", "Mac Taylor", "Mac Taylor", "Peyton Driscoll"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {4.0, 8.0, 9.0, 1.0};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> duration = {13, 14, 15, 56, 56};
    vector<string> user = {"Tim Speedle", "Tim Speedle", "Tim Speedle", "Horatio Caine", "YEEEAAAAAAAAAAH"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {27.5, 28.0, 28.5, 126.0, 126.0};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> duration = {1};
    vector<string> user = {"zzzzzzsasdgeASAFss a"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.0};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> duration = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    vector<string> user = {"A", "X", "Y", "A", "X", "Y", "A", "X", "Y", "A", "X", "Y", "A", "X", "Y", "A", "X", "Y", "A", "X", "Y", "A", "X", "Y", "A", "X", "Y", "A", "X", "Y", "A", "X", "Y", "A", "X", "Y", "A", "X", "Y", "A", "X", "Y", "A", "X", "Y", "A", "X", "Y", "A", "A"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {4.15E10, 1.65E10, 1.65E10, 4.15E10, 1.65E10, 1.65E10, 4.15E10, 1.65E10, 1.65E10, 4.15E10, 1.65E10, 1.65E10, 4.15E10, 1.65E10, 1.65E10, 4.15E10, 1.65E10, 1.65E10, 4.15E10, 1.65E10, 1.65E10, 4.15E10, 1.65E10, 1.65E10, 4.15E10, 1.65E10, 1.65E10, 4.15E10, 1.65E10, 1.65E10, 4.15E10, 1.65E10, 1.65E10, 4.15E10, 1.65E10, 1.65E10, 4.15E10, 1.65E10, 1.65E10, 4.15E10, 1.65E10, 1.65E10, 4.15E10, 1.65E10, 1.65E10, 4.15E10, 1.65E10, 1.65E10, 4.15E10, 4.15E10};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> duration = {1000000000, 1000000000, 1000000000, 1000000000, 1, 2, 3};
    vector<string> user = {"X", "X", "X", "X", "Y", "Y", "Y"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {2.500000006E9, 2.500000006E9, 2.500000006E9, 2.500000006E9, 3.5, 4.0, 4.5};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> duration = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    vector<string> user = {"X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> duration = {1000000000, 10, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    vector<string> user = {"X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {2.5000000005E10, 2.450000001E10, 2.5000000005E10, 2.5000000005E10, 2.5000000005E10, 2.5000000005E10, 2.5000000005E10, 2.5000000005E10, 2.5000000005E10, 2.5000000005E10, 2.5000000005E10, 2.5000000005E10, 2.5000000005E10, 2.5000000005E10, 2.5000000005E10, 2.5000000005E10, 2.5000000005E10, 2.5000000005E10, 2.5000000005E10, 2.5000000005E10, 2.5000000005E10, 2.5000000005E10, 2.5000000005E10, 2.5000000005E10, 2.5000000005E10, 2.5000000005E10, 2.5000000005E10, 2.5000000005E10, 2.5000000005E10, 2.5000000005E10, 2.5000000005E10, 2.5000000005E10, 2.5000000005E10, 2.5000000005E10, 2.5000000005E10, 2.5000000005E10, 2.5000000005E10, 2.5000000005E10, 2.5000000005E10, 2.5000000005E10, 2.5000000005E10, 2.5000000005E10, 2.5000000005E10, 2.5000000005E10, 2.5000000005E10, 2.5000000005E10, 2.5000000005E10, 2.5000000005E10, 2.5000000005E10, 2.5000000005E10};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> duration = {3, 37, 16, 29, 19, 20, 28, 10, 1, 2, 24, 4, 39, 35, 27, 6, 15, 31, 14, 7, 48, 36, 30, 45, 13, 41, 46, 40, 9, 23, 42, 12, 18, 8, 38, 5, 26, 32, 34, 22, 33, 11, 47, 25, 17, 44, 21, 49, 50, 43};
    vector<string> user = {"y", "x", "x", "y", "y", "y", "y", "x", "x", "x", "x", "y", "x", "x", "x", "x", "x", "x", "y", "y", "y", "y", "y", "x", "y", "x", "y", "x", "y", "y", "y", "y", "x", "x", "x", "x", "x", "x", "y", "y", "y", "x", "y", "x", "y", "x", "x", "y", "x", "x"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {294.0, 948.5, 938.0, 307.0, 302.0, 302.5, 306.5, 935.0, 930.5, 931.0, 942.0, 294.5, 949.5, 947.5, 943.5, 933.0, 937.5, 945.5, 299.5, 296.0, 316.5, 310.5, 307.5, 952.5, 299.0, 950.5, 315.5, 950.0, 297.0, 304.0, 313.5, 298.5, 939.0, 934.0, 949.0, 932.5, 943.0, 946.0, 309.5, 303.5, 309.0, 935.5, 316.0, 942.5, 301.0, 952.0, 940.5, 317.0, 955.0, 951.5};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> duration = {257977146, 566414279, 901671037, 77279612};
    vector<string> user = {"ujgKMmOzuBRTOCrUrKMaRDGIKYsgdWNZXprhCXqdyIQaw", "ujgKMmOzuBRTOCrUrKMaRDGIKYsgdWNZXprhCXqdyIQaw", "RIjqfEHDzafECTXZYpQdvakvzzPOsmQoBFCXFLWPLgJgyCQ", "ujgKMmOzuBRTOCrUrKMaRDGIKYsgdWNZXprhCXqdyIQaw"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.03065961E9, 1.1848781765E9, 1.3525065555E9, 9.40310843E8};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> duration = {16977875, 126477710, 35481024, 30602505, 175670, 1086121, 379275062, 34083768, 70465431, 22061330, 235616652, 291394, 55266264, 105073639, 887832, 396252937, 177313857, 12160417, 48866191, 363738613, 16947048, 396252937, 27904237, 123479621, 35651098, 32514324, 95459459, 3210248, 25516915, 153543570, 147389747};
    vector<string> user = {"RQeOagePpMCwglDsJXBAwfzDsVsDwYbkwtYfsLwPBOWkciyGFb", "meXtDDcTGYPYVZTVWDTfmCiSZTmHphYuCJQnBhmDF cpLTSJu", "meXtDDcTGYPYVZTVWDTfmCiSZTmHphYuCJQnBhmDF cpLTSJu", "meXtDDcTGYPYVZTVWDTfmCiSZTmHphYuCJQnBhmDF cpLTSJu", "rOUEiImZonNxwlAWUEQHQBovQCAYnCZJCiAcEwncrsSBRnTfV", "ShtSQgMUNZgnz AAtbWcWeWZTNDZuUJxIfeDuFUoGtccZ", "RQeOagePpMCwglDsJXBAwfzDsVsDwYbkwtYfsLwPBOWkciyGFb", "rOUEiImZonNxwlAWUEQHQBovQCAYnCZJCiAcEwncrsSBRnTfV", "rOUEiImZonNxwlAWUEQHQBovQCAYnCZJCiAcEwncrsSBRnTfV", "rOUEiImZonNxwlAWUEQHQBovQCAYnCZJCiAcEwncrsSBRnTfV", "ShtSQgMUNZgnz AAtbWcWeWZTNDZuUJxIfeDuFUoGtccZ", "rOUEiImZonNxwlAWUEQHQBovQCAYnCZJCiAcEwncrsSBRnTfV", "meXtDDcTGYPYVZTVWDTfmCiSZTmHphYuCJQnBhmDF cpLTSJu", "meXtDDcTGYPYVZTVWDTfmCiSZTmHphYuCJQnBhmDF cpLTSJu", "meXtDDcTGYPYVZTVWDTfmCiSZTmHphYuCJQnBhmDF cpLTSJu", "ackGapEqUGqgFpCfhiGiikdPQhYlplTREdwrvSjllVnYWps", "CyPLzKCirXRLgzKIPvJVpYpkLKiemkUfr oZcgDvFovyh", "ShtSQgMUNZgnz AAtbWcWeWZTNDZuUJxIfeDuFUoGtccZ", "rOUEiImZonNxwlAWUEQHQBovQCAYnCZJCiAcEwncrsSBRnTfV", "OzweaofDQmDzwPNvNLrqymbHjiaCRAIFLUnVCxOEQyFaisujP", "meXtDDcTGYPYVZTVWDTfmCiSZTmHphYuCJQnBhmDF cpLTSJu", "XAQrwxIKPslvOQyekhlPszlLNWBOcBKpqUBQqbzgbzPuaiqWnN", "rOUEiImZonNxwlAWUEQHQBovQCAYnCZJCiAcEwncrsSBRnTfV", "CyPLzKCirXRLgzKIPvJVpYpkLKiemkUfr oZcgDvFovyh", "rOUEiImZonNxwlAWUEQHQBovQCAYnCZJCiAcEwncrsSBRnTfV", "OzweaofDQmDzwPNvNLrqymbHjiaCRAIFLUnVCxOEQyFaisujP", "CyPLzKCirXRLgzKIPvJVpYpkLKiemkUfr oZcgDvFovyh", "rOUEiImZonNxwlAWUEQHQBovQCAYnCZJCiAcEwncrsSBRnTfV", "meXtDDcTGYPYVZTVWDTfmCiSZTmHphYuCJQnBhmDF cpLTSJu", "rOUEiImZonNxwlAWUEQHQBovQCAYnCZJCiAcEwncrsSBRnTfV", "ShtSQgMUNZgnz AAtbWcWeWZTNDZuUJxIfeDuFUoGtccZ"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.5935006855E9, 1.648250603E9, 1.60275226E9, 1.6003130005E9, 1.585099583E9, 1.5855548085E9, 1.774649279E9, 1.602053632E9, 1.6202444635E9, 1.596042413E9, 1.702820074E9, 1.585157445E9, 1.61264488E9, 1.6375485675E9, 1.585455664E9, 1.7831382165E9, 1.6736686765E9, 1.5910919565E9, 1.6094448435E9, 1.7668810545E9, 1.593485272E9, 1.7831382165E9, 1.5989638665E9, 1.6467515585E9, 1.602837297E9, 1.60126891E9, 1.6327414775E9, 1.586616872E9, 1.5977702055E9, 1.661783533E9, 1.6587066215E9};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> duration = {408353360, 408353360, 408353360};
    vector<string> user = {"uwmmqtHivtqMHCDAfVntIMeriQrtIKCBzniWJTzPCGTfw", "XbLvutIPrGyAgPbpSrBallmKkLraquKWuvImPbuyuXNYYowwP", "ikZqJNbKsTckPVAkbeSSnBeCmybavWoEreSlOJOWPFqtTks"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {8.1670672E8, 8.1670672E8, 8.1670672E8};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> duration = {361303489, 361303489, 361303489, 39337062, 361303489, 361303489, 361303489, 361303489, 361303489, 361303489, 361303489, 361303489, 361303489, 361303489, 361303489, 361303489, 361303489, 361303489, 39337062, 361303489, 39337062, 361303489, 361303489, 361303489, 361303489, 361303489, 361303489, 39337062, 361303489, 361303489};
    vector<string> user = {"WEGMLHmiGmxOzxzuLthFmpxhLvInbTYTEettZjclKUXkzuPS", "kuCUrRXQvRthPTkAcJiszhDgqNEUVlLKGvUivfJVGcngsw", "clGqThzpPrQgahYDpYiUqmnCYyWEzMNYwKIMKmdWzlpMvfnPWf", "sIvHaBmEchrWOKDENplstgFvLhEgjDMLVlKLbPbzTLSDA", "mEIlSYaPdTOkHkyrevQUXYSqvoSKRamNcAsrXLpwVVnpo", "yHJfNZKslQtwgVoMI YEmnHDultIMAZvPKSLsiDwawAjYXW", "TqDbutuQPBSoeerlCkwBFfwCLgNCyYzIPDAMXtZBArfWx f", "ltEWykNtQNliuluCnGoWCjLudc FJaWbtZAFnNPTTGgUao", "jNUhqlBDGgFYVsBLVaNfQkYVkENMlGfpvF TdkdoLvlqDJHbb", "YgXQrMwkajaSwCTpJXPnYcCwUjgkaDKrOlmKzPVBzeMFZSlVxQ", "zAAQYWnz xEXnrimkSysNKnWlqMMbtiLbwvtgMVObUceu", "GUoEXnOyjeTwxggiNmnmrRzDOqxsvCtPIPmuekHGvKLUH", "xiFsXQJrWRGljZdXVQnOPmuIwqGMqHHeBjoGmjyzsMxhJZj", "HwljSvpPDQcGAFzesGohDbixGJksqTKclweycMsVXPoGN", "jyApNOpnkDv IzGlNHWcypLrgfmJbJkrJeYUuJBNOypmTRFHwW", "SANzizyggwXYEEIdudVeNxGcYnPDZzobtIFSFzleBlkDDoqcYY", "VYnoyFRRXHBuATSApWVGLOjgzPfYDIKWuXfvQRzTxaBCkCvLv", "vsyfeSKbmuxiBNfbOTNiWyOAlYDmAblgWETYMrRaSQUVh", "qYQaEHnyUgGyZMAXHWedqCGyVnxCxXoPeLhiPwiXjFkwIao", "qfiDYxAhvEFKKgATqvFXIxJkDLCLpslQVsuwsmaEzLKlNGA", "dErmIqWDijcNUwQYGrCrVFUbVtbjQvghbdkIydeJzDNCjx", "dHbuHinZNgc RDDDljqhVhfcTAJZdyyBGIAdQYxutxfFnaQfg", "mncwILatFLEwJeDoFJkYbWBEhTiBHDCcTKQEKpLOWFgfHnZT", "BUhLrtQASSfzwRmIxu EIjApXkbDgUXQSsDVxnhGqqyjXXxPf", "EbGMCRhPeliHotedPVBMYsMQdZIzpAWUPYFhdQASwovJatvY", "fpheFhmZStLEDnBditRxelzvDYCrhuLsyAFEDZyXBNiLKtYiN", "jnkuhmMUmgoKYyCLHlsjAqvp lOihjnEJdYWltNnmUAKMlq", "FDcJSCCNUWgejwp IHJbGHPzWyAkPBGuDsPahVadLvMjM", "XzhwMHziklVRqRHhZuLvsucYtPKMDrZO rSpJgMTTQtNacRf", "HOhmzbMyJVOIFHofWIoZkJTAOCzOKNoGrcHBcrDRrbNqsi"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {5.0349453495E9, 5.0349453495E9, 5.0349453495E9, 9.8342655E7, 5.0349453495E9, 5.0349453495E9, 5.0349453495E9, 5.0349453495E9, 5.0349453495E9, 5.0349453495E9, 5.0349453495E9, 5.0349453495E9, 5.0349453495E9, 5.0349453495E9, 5.0349453495E9, 5.0349453495E9, 5.0349453495E9, 5.0349453495E9, 9.8342655E7, 5.0349453495E9, 9.8342655E7, 5.0349453495E9, 5.0349453495E9, 5.0349453495E9, 5.0349453495E9, 5.0349453495E9, 5.0349453495E9, 9.8342655E7, 5.0349453495E9, 5.0349453495E9};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> duration = {87000747, 998980786, 608650691, 87000747, 584845085, 87000747, 608650691, 608650691, 608650691, 87000747, 608650691, 608650691, 608650691, 87000747, 87000747, 554665036, 608650691, 87000747, 15541799, 49165537, 998980786, 87000747, 42506188, 41272847, 21950154, 566144503, 26874389, 608650691, 608650691, 53985655, 87000747, 87000747, 87000747, 18853511, 998980786, 49508794, 998980786, 87000747, 608650691, 608650691, 23805606, 608650691, 37835210, 608650691, 608650691, 608650691, 87000747};
    vector<string> user = {"F JbyaaxLHzxJSEryBrAeUMAdxSrBfPSMjUcWEWnuVNIs", "dCsgjXYljNqOjBogluFKJaODtZSGquCXcBkksTVpqkvKxfuJkR", "pHVBuNqlSxEDzpbBkAhLiXrZBtjdqEPLmhdmesTZVZQQnZB", "PXYWiFzRDsPfvftEYyLBBvrcCRCzBXownlVpSWgKdxHBTby", "yFLrsr MLUPpLRYkQvleHuQXLcsiqspqIjSbeElBnMzCZbNUPC", "PXHJsupQRq BnsbEzocgGqcEnvOzLDdLSdesiFtWGSLLd", "oNXouhYloorCxubVOLaXtoK IsYDJDUadSqbQagYAeUmRB", "wKhScWbVTlVifohUdDRoiavpAwacdDxkgHgMjIIPUgiRoDVpwu", "NimIiJauTaJMhBrMgJvqqiNfklxwTnUcMCkKWZAWpYALfKIWa", "SqdiYnjdHlvuooxNvAPCIGHpHytmnkhrGrfiPXClsJZoD", "utOXMFrWgaDXWFzgNxwKlLkiOSGpgaPZQftYJDNGWvoKtaXb", "LTQLkeXsxwHETtruKuPBRXWbsoXNmJaHoRKGJLsKjOdsM", "QEXuVraeoUmFHRWlklPpbSdtRujIIPQohXGtdT CdyOYfjmTv", "GesychxLVMyapyMdaQPIfngmkQppeJbZPMlXcGtHLjkYoMly", "BdIqSjURlv cqKTuSAgJYmPfGtVCpqsMCDzQbqvhxlRGQhV", "OkzWfolZNRYnntMSupFxyaPPRXPMuERAeRTNhhLFoNkQLGM", "lBLsDXyiZcJSfUsxTTQYdhvkiDHIgwXtcmAJLMrIXHBItAoem", "AhZCqzqovMjnMCeRlgCdttCltaNy DhNayoDaEBEzFTsRsp", "uyunjTrZFnKOkYAzhxPrJyGPEQIIotCsgkTCEQWyZrFAZ", "mnPGKhiBkFgOcuvLkSfZey xmqYDevHgBrTytKgbUvEby", "QdBTuaJwobIMHFWAaytEqrmalLlhCLKneOIANuzwOHhJQm", "LNnWhtenjAIJJQiSXtEoqdGlQyxDRRBynMvDExo XBGpAQ", "dHnJwjOWHMfHpHpCTgCxL BWhbSwMsHvucbmvlLaQfccQQrgyO", "PuZkDAQaKQyHemYCrjQORMfcgoclgpdMw CgHXTthjLRGQpY", "uyunjTrZFnKOkYAzhxPrJyGPEQIIotCsgkTCEQWyZrFAZ", "dHnJwjOWHMfHpHpCTgCxL BWhbSwMsHvucbmvlLaQfccQQrgyO", "PuZkDAQaKQyHemYCrjQORMfcgoclgpdMw CgHXTthjLRGQpY", "RVIlxwUYduaMvCVmQNIbxloMeWvgiRxzzytoCJcRLvCBeDlt", "HkuUGLmevTKKGuYQZwaKQAgCMiKQksywzINGYhlfpBxzWmWpR", "OkzWfolZNRYnntMSupFxyaPPRXPMuERAeRTNhhLFoNkQLGM", "zeiKisifQzrfxHGESHBszaouwPfECUIvgminYkjsdYyhVs", "drDAzVhGbUNHNEPkuDgRnfRoDEBBYLJCOvOpgYYHNNWcGW", "oQQDzcvQczaVLWPWwjVZVXpZyCgmtMfDgXwDFZUcGPAyuUFH", "PuZkDAQaKQyHemYCrjQORMfcgoclgpdMw CgHXTthjLRGQpY", "TvrLTfGpf NDCYCbEhAkTlMFhzBCkxVLuoAdGGvmRdwqvKMjEx", "uyunjTrZFnKOkYAzhxPrJyGPEQIIotCsgkTCEQWyZrFAZ", "wbfhEhLfecthhkqrlYmhTthuTQRLMBqmHJBLJLTxBNBkXRL", "pUupBpS VPjmYmDfZtMJxXsGGyCJQYymuZzrKsqqVpxup", "BYTkzSNtRrkHrZiIObLIuw SlDSAOONRPVFKBYrwZSSTFsMP", "cZxBAnvPMekWXMzQUqMilOVBKknOzuxIAfzHbNINJMQtlAJK", "yFLrsr MLUPpLRYkQvleHuQXLcsiqspqIjSbeElBnMzCZbNUPC", "XOUQFWhdcUKqVdMzNrUAebCoNPLHthdCqqcTLpqTbrCKe l", "mnPGKhiBkFgOcuvLkSfZey xmqYDevHgBrTytKgbUvEby", "LYFqvDRLneMUSORRaMzhZjJYZUHv SblddYDHbKDNKNObMmxcI", "UoGUYueiaWjRNrKO OBohtdUElcKinXCvVMiDGNQzjoqWMz", "PANArphHCQLeyVdgOxLpyIhXEaJSUChRZtAvKCaClrdoNvlG", "GIefLTHVahEkjHMr NwpBeBHfCWZZfJYKorRpuHXwnRklBCs"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {7.395063495E8, 1.5453827046E10, 7.478518862E9, 7.395063495E8, 7.466616059E9, 7.395063495E8, 7.478518862E9, 7.478518862E9, 7.478518862E9, 7.395063495E8, 7.478518862E9, 7.478518862E9, 7.478518862E9, 7.395063495E8, 7.395063495E8, 7.4515260345E9, 7.478518862E9, 7.395063495E8, 7.037768755E8, 7.205887445E8, 1.5453827046E10, 7.395063495E8, 7.1954466105E9, 7.166423995E8, 7.06981053E8, 7.457265768E9, 7.094431705E8, 7.478518862E9, 7.478518862E9, 7.201186344E9, 7.395063495E8, 7.395063495E8, 7.395063495E8, 7.054327315E8, 1.5453827046E10, 7.20760373E8, 1.5453827046E10, 7.395063495E8, 7.478518862E9, 7.478518862E9, 7.1860963195E9, 7.478518862E9, 7.14923581E8, 7.478518862E9, 7.478518862E9, 7.478518862E9, 7.395063495E8};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> duration = {300244705, 73685872, 18936115, 229186463, 38209513, 85784620, 145399643, 145399643, 317621379, 124467830, 116312366, 211809789, 12885627, 145399643, 529431168, 134464887, 4760807, 145399643, 143035346, 10441368, 145399643, 477997249, 380858842, 5390355, 71713771, 10934756, 8519883, 134958275, 20931813, 51433919, 120680908, 145399643, 24718735, 5536980};
    vector<string> user = {"HMIDqDeXXOaxZamwtMvahxYe fTXfQlnDzdiXrefOOJokHZa", "QubWZdcefCgvHBobPFRZpujjtkfMsurBTWJUJcUqoWQYlId", "plvnjuAADMPo FLHVXfQPIMCoyPMVKYVsbvLThWHDjDrQBn", "HMIDqDeXXOaxZamwtMvahxYe fTXfQlnDzdiXrefOOJokHZa", "LzSuycooCsJQBaeiJwAQnplNZqAQhBYwmKgprluPHjgbhpGTz", "LzSuycooCsJQBaeiJwAQnplNZqAQhBYwmKgprluPHjgbhpGTz", "y IoSErSpUfDQSPLfslXOzxSvXbuAtzVplQtsAlWsFELuwtfm", "tDRbJWwuvuZYlmiJtWfFcfDDzwrnEkcgGgkFDLjCHqEgZsz", "poYOWWlxsvVVLHJugZVQMqGFXSNLnXiKBdhdZNNJYfXghbyN", "FLXbPLlDmYswZSVALozRyybipFSxGFQATXogZQCugYiPPXMGvh", "plvnjuAADMPo FLHVXfQPIMCoyPMVKYVsbvLThWHDjDrQBn", "poYOWWlxsvVVLHJugZVQMqGFXSNLnXiKBdhdZNNJYfXghbyN", "LzSuycooCsJQBaeiJwAQnplNZqAQhBYwmKgprluPHjgbhpGTz", "pFxojDMEqvOCWnMKlcTvlJDFGL vwrLNVLeNfNaflEixO", "YcFp TKdKCJEvqAqIMqyyKbZZYKYnoQlidUnrMvXQRXBmC", "xGZsjNfJXKKzEvkUzGla AFycEAJtJCGwTgZjcfomyceBa", "plvnjuAADMPo FLHVXfQPIMCoyPMVKYVsbvLThWHDjDrQBn", "zvRBObsOblIevSUjWVbkIXoZbAXxFajPKCA XedcNUVZlLKe", "MaYDiHyqAihVRgDOeKlydhViYIQRwrdiVVFSYygILAaWXxDrAl", "seUjgxHxAW XnkBhzfuZQQyZYJwRPWDSatruspHGoJJpCQ", "PegdAxdiPutPForrgkVVLOLsRHlSdyAFhmTKCKOtJOwW hX", "ShuGqvwQgbJvJFieWFBtgeTIKRFantMBiiFxNHdidvtvLKtNcZ", "MaYDiHyqAihVRgDOeKlydhViYIQRwrdiVVFSYygILAaWXxDrAl", "plvnjuAADMPo FLHVXfQPIMCoyPMVKYVsbvLThWHDjDrQBn", "QubWZdcefCgvHBobPFRZpujjtkfMsurBTWJUJcUqoWQYlId", "xGZsjNfJXKKzEvkUzGla AFycEAJtJCGwTgZjcfomyceBa", "LzSuycooCsJQBaeiJwAQnplNZqAQhBYwmKgprluPHjgbhpGTz", "seUjgxHxAW XnkBhzfuZQQyZYJwRPWDSatruspHGoJJpCQ", "FLXbPLlDmYswZSVALozRyybipFSxGFQATXogZQCugYiPPXMGvh", "ShuGqvwQgbJvJFieWFBtgeTIKRFantMBiiFxNHdidvtvLKtNcZ", "kEyKxWkZQUVgFOwMKiFcawEeqPkOVyFggwANvCyf OxUchMVL", "TXaLVWPkIVqjTBmSdnDISvWokywcodCTnnyHIcgfEDZobK", "kEyKxWkZQUVgFOwMKiFcawEeqPkOVyFggwANvCyf OxUchMVL", "MaYDiHyqAihVRgDOeKlydhViYIQRwrdiVVFSYygILAaWXxDrAl"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {3.3638956315E9, 9.819406155E8, 9.54565737E8, 3.3283665105E9, 9.64202436E8, 9.879899895E8, 1.017797501E9, 1.017797501E9, 3.3725839685E9, 1.0073315945E9, 1.0032538625E9, 3.3196781735E9, 9.51540493E8, 1.017797501E9, 3.478488863E9, 1.012330123E9, 9.47478083E8, 1.017797501E9, 3.285290952E9, 9.503183635E8, 1.017797501E9, 3.4527719035E9, 3.4042027E9, 9.47792857E8, 9.80954565E8, 9.505650575E8, 9.49357621E8, 1.012576817E9, 9.55563586E8, 3.2394902385E9, 1.0054381335E9, 1.017797501E9, 9.57457047E8, 3.216541769E9};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> duration = {145391439, 268639511, 502430020, 699395576, 569487672, 699395576, 699395576, 699395576, 699395576, 699395576, 177459909, 699395576, 173995192, 502430020, 699395576, 60852024, 699395576, 554004137, 699395576, 699395576, 185308088, 129907904, 362054400, 143126740, 175164456, 502430020, 162176720};
    vector<string> user = {"OMIXcvPrmjCbBjnWcxZRSndPgSEUbwBlsJmWRrFTvtJOpIHEe", "KZTBDrxlhmmvRdbLUnoLnRIF muPuhWGbWnGBprJmESGvnw", "iyyyIgtGYGiHBmEDIcCouguv cOYcAomxFqNzsruMvrQBXd", "wsYANEXhlYjG UHtarqPpsnazeqDUPCzuSjOuEPZshsxois", "FVnoXmSiQmRxfzKuUjduCoAEsjKvzqphbAYjF EntleYRr", "ptJKGDsncslpNHXeFjwNgyzbpRAIITPEOA pQcQizzgnxcln", "XciNaOkNvIaHSogzefQHeBvwVSmIWJYcHVDKIgDtWnyqNXA", "DmwZtwRrkQvzxcRMRmXtogGYgInjQP ixWGdMMGPgTkNf", "hfQskzNlQWSPcoOQTETdTjgZNRBkUPBeS MNrtndBcvvyZSthe", "vRwzSFRgtNUKRxAwkZNLgQvOkEdbPSrprTgSiIUQAOEkUSrZ", "squxNunmFVKazekCvGyjJYjKFAtHjYoKKJFUTJGZsCzpSObY", "TdLBCbbGcYveAZklRlTEptryaRqyJBvebtJKuhTfIMrLAkr", "VwWVjhFCApHj NEKIIOrUVMxbGPFYDwNwBaFRWKxxTvTwaSf", "pcfnylJPQrWLKpFXqiRTxTPSUHzOWLelHEeDgETtNVLbfb", "znHqpbHOfpP JjxKerPKxqcCZyGrSkZwrzAylAVipkqVYbjJd", "ZNWyWIKCYZvOSjordXOroPmdoQBzqDrZBdMibSmyx SWtEm", "QnhbwnnKjSSVTwNiqIcYKjgnQiqfztvIbvPqiyViVvlKDh", "OMIXcvPrmjCbBjnWcxZRSndPgSEUbwBlsJmWRrFTvtJOpIHEe", "KsMvTjsQOMSIkglvwlSoBzonZSmjmDHBiVhiytGRnPUJvLZ", "GFhtvBvDEXCjlPLpAmgiGhQTHMqbHgOYVJVPSADkGnfIbTz", "VwWVjhFCApHj NEKIIOrUVMxbGPFYDwNwBaFRWKxxTvTwaSf", "FVnoXmSiQmRxfzKuUjduCoAEsjKvzqphbAYjF EntleYRr", "fNJ VOtZlMixOqGHJpiXxaOctIJLtaEWRdWYyEiEirnpdOfGW", "VwWVjhFCApHj NEKIIOrUVMxbGPFYDwNwBaFRWKxxTvTwaSf", "fNJ VOtZlMixOqGHJpiXxaOctIJLtaEWRdWYyEiEirnpdOfGW", "hLUsUoQJQkSmexoAujpwUKrhtZfpSrxQRnwCHCCdJTyzcTc", "fNJ VOtZlMixOqGHJpiXxaOctIJLtaEWRdWYyEiEirnpdOfGW"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {7.4851362755E9, 5.06951444E8, 1.763026494E9, 7.762138344E9, 7.697184392E9, 7.762138344E9, 7.762138344E9, 7.762138344E9, 7.762138344E9, 7.762138344E9, 2.38311933E8, 7.762138344E9, 1.59880908E9, 1.763026494E9, 7.762138344E9, 6.0852024E7, 7.762138344E9, 7.6894426245E9, 7.762138344E9, 7.762138344E9, 1.604465528E9, 7.477394508E9, 7.593467756E9, 1.583374854E9, 7.500022784E9, 1.763026494E9, 7.493528916E9};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> duration = {57114555, 386900490, 123747385, 572594512, 263153105, 979334199, 336723840, 486486648, 208209418, 92942969, 634778889, 50176650, 465597371, 157209523, 329785935, 49390865, 308387848, 386900490, 368046072, 386900490, 486486648, 386900490, 386900490, 407511538, 449540552, 848667298, 372132384, 386900490, 18854418, 293957521, 49716730, 486486648, 634778889, 79583477, 572594512};
    vector<string> user = {"PokTgXPAISOiKeuHOpHictTTrZPprKblgYFNPvqmsWhjdhMn", "KIb FHvuodfoNZXJFckmKCWolaHEBJcQogCgujvjYrTomxu", "yRrAGqsjrmBVrIJAkrh egdaSxzewfgOisTwKOTMxlDxbLnuWD", "UzACrNBTvgEykazWTctvjGhVrUVorxUwicvDnkFkNcMlKG", "yRrAGqsjrmBVrIJAkrh egdaSxzewfgOisTwKOTMxlDxbLnuWD", "wWNulVKaZWvSlPpRAvaFxecfKHPyNRmbvBPMEiXafVvkiCKPf", "XnNNjFnIFSRaopYQJGBRlaKaTAgjVWNHnSXQKVgWyoiBY", "WPAVFSNECfAshAqgjBDj fyrOIhJHvUoBBeKKrnjhTdIsxLKAx", "umMxzzFFJeXKLUjyIxwS vZZpDialPdISfbhqsmQajOKYMAd", "WuSdKNiMEcHTrzlMrBCEsWcmRk sJPDOuTuzRfYRXTuGJwSMsN", "oZSAFUzbHkzJYpYgyEEChPJcAgNqpbZIAYHFxCUBBocvG", "XnNNjFnIFSRaopYQJGBRlaKaTAgjVWNHnSXQKVgWyoiBY", "ynWNlXRCnvxNDsLMJYhHSNjRmtJk FbfzqfQVDsSXvrPxK", "oCqIxnaMNszLPLGipoUOizKVkyTwC muBRfdpRPuNBDyE", "PokTgXPAISOiKeuHOpHictTTrZPprKblgYFNPvqmsWhjdhMn", "umMxzzFFJeXKLUjyIxwS vZZpDialPdISfbhqsmQajOKYMAd", "oCqIxnaMNszLPLGipoUOizKVkyTwC muBRfdpRPuNBDyE", "tFFXzXGQQKZYBiDIqpKRuwrQU nMjibBYmZFVSpFieIFuqAOEy", "pJcUCJsbrQmKiWEIjYgcAmesyQnJVeAQrhU FKjKGJjDIRDshx", "sPXjQTbbauBgZahyMjpyTkkVfHvCJmXOUQAgYSAKCmsPwx", "beYfUwSxZHfcwkHn ZPCItHCSDiSOQGonCFTyGtxZCNNXrWfUn", "MkmZbfcAVtkzUkIsrUolHzJkqfvjhhfzISTkcmIDdHuVCtp", "KcIuBUrs uXUmvAkzLrrGAoTlydOQFLndTgFMpfAxbmiIMuO", "BWSseypPaMEqyXH zvMWpvbKkabGopfyGVpkPStWhrIlT", "PPBTSCwcYkepOWWJzcHYzzZdeXbnxbjnQnMLkmar rLssoTb", "BHupgsLPRD rtjmByqprwASiQFKXyBnGYeSGAriSMDIymifw", "EwTAbaUdSjAZSAUeikfjzJziCD crCoquCtOLlbOlrwEaI", "EiEpmmPIWnwIFHICNSSeHDKcstmqCAZbBDRRFFeCPCuQF", "pJcUCJsbrQmKiWEIjYgcAmesyQnJVeAQrhU FKjKGJjDIRDshx", "WuSdKNiMEcHTrzlMrBCEsWcmRk sJPDOuTuzRfYRXTuGJwSMsN", "umMxzzFFJeXKLUjyIxwS vZZpDialPdISfbhqsmQajOKYMAd", "qktFWbzzlDbWgAfGZvvgNZlYKZOqHOhNoyMtdL etGZhZlxED", "VsebFJyNnbztLiOnNKzTwMfbCWkFudvqOZRhMIdCx EJyqhTaA", "umMxzzFFJeXKLUjyIxwS vZZpDialPdISfbhqsmQajOKYMAd", "jTccJJlNJPGvhFXg PFRxNQVNXiyrlTRhlKxWaKwbBZYFIuA"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {2.7220926015E9, 2.886985569E9, 2.7554090165E9, 9.121536808E9, 2.8251118765E9, 1.2505393339E10, 2.861897244E9, 7.776158392E9, 2.797640033E9, 2.7400068085E9, 1.03600023975E10, 2.718623649E9, 6.5703864105E9, 6.4161924865E9, 2.8584282915E9, 2.7182307565E9, 6.491781649E9, 2.886985569E9, 2.87755836E9, 2.886985569E9, 7.776158392E9, 2.886985569E9, 2.886985569E9, 5.422449802E9, 5.871990354E9, 1.152605914E10, 3.72132384E8, 2.886985569E9, 2.702962533E9, 2.8405140845E9, 2.718393689E9, 7.776158392E9, 1.03600023975E10, 2.7333270625E9, 9.121536808E9};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> duration = {20439126, 549653364, 99889383, 504082403, 2394585, 549653364, 28467792, 9071438, 854142152, 90128470, 7662179, 100225470, 939679, 37278944, 774445, 3987752, 14946442, 549653364, 2099961, 9826564, 465267, 2761063, 37278944, 45570961, 24585544, 100225470, 9986110, 37278944, 12539158, 541991185, 616178929, 37333315, 90215587, 15560253, 3723667, 10097000, 25165382, 245658619, 27452380, 2462705, 10389361, 115449636};
    vector<string> user = {"ydnrapOaArwotmlAqMhdVDuXnNHSvgCJfpPyBnRoCFHQlYh", "WPFRWfurKrzxAxLwDlNOdcDIHSWQqLwsldxzFesHoVFicYZ", "LLrCriefAzYOxJagGdVngVWFYRfKvbKySZQzzFechnasGQ", "UvSPXLLfjOTeGtSipXjMSJOx CDLubrrxRzAjtPkOHtSUbVT", "DZVmimWyjYbGnQZrTHNcdMUHNZlGyhTgVzJMHUgLgOkFtRjUy", "pAzUxtXntzWsVDKKCnJhSUfBLNvBglQhOOeYSxkIDpmlPl", "maCYjfKEyKxFAYMyESpUfvlFEYHQTTnsabTQnbNugLQjEqJ", "maCYjfKEyKxFAYMyESpUfvlFEYHQTTnsabTQnbNugLQjEqJ", "fqrAVWIMKEJWEHvzOCoaYhxFACfrzlky VzvxxtIgwWNAX", "XWPCAtcpCoJgbmpgoESqiSBIgiHILEuoTuVptpXkqojYCjIY", "xgSSyhDYfjrSbarkibOwctuCmkpuIyYOGxsSNqUlEkgyAQ", "KxFoXehUBPuRkHFnDwBlzLjMJiArvmjrqKRZEVxcZNnEfMCWY", "DZVmimWyjYbGnQZrTHNcdMUHNZlGyhTgVzJMHUgLgOkFtRjUy", "KhFySNMhLAIIWYoFlTxMcxhbgcZMCfGMXGzmbcHbSucmrnWPaW", "DZVmimWyjYbGnQZrTHNcdMUHNZlGyhTgVzJMHUgLgOkFtRjUy", "ydnrapOaArwotmlAqMhdVDuXnNHSvgCJfpPyBnRoCFHQlYh", "maCYjfKEyKxFAYMyESpUfvlFEYHQTTnsabTQnbNugLQjEqJ", "qWXUNyZAcWrUUJkGzSDsHJHhYrhPzbjHwamDIeKPPdNABP EM", "DZVmimWyjYbGnQZrTHNcdMUHNZlGyhTgVzJMHUgLgOkFtRjUy", "vuMLkjJRFhFGJvHbgOpWJpbeFGhuGpSVrcZbsuJoayPYdKnPj", "maCYjfKEyKxFAYMyESpUfvlFEYHQTTnsabTQnbNugLQjEqJ", "DZVmimWyjYbGnQZrTHNcdMUHNZlGyhTgVzJMHUgLgOkFtRjUy", "nXEgoaeOZpgbhOZQbGsVjZPUFremjloaGLaQiUbNmWjnD", "UvSPXLLfjOTeGtSipXjMSJOx CDLubrrxRzAjtPkOHtSUbVT", "DZVmimWyjYbGnQZrTHNcdMUHNZlGyhTgVzJMHUgLgOkFtRjUy", "JzQhleEYOjGcQjtdTohPTCILcAQlHElQUGqHOSpAEXPalz", "qCzjDbBzZvPByEjHNXSEwvZDtcHzzHZLbEPulwkHlzLrGBxS", "aHbhrWZjOLhCSwukCmxhGJvOByfXNgIQtrfUv aUjtWvUAnRN", "YphTPKcqfBxqMIFgeccZeiLA RzUeEQFyESmsYVvVPUtA", "xgSSyhDYfjrSbarkibOwctuCmkpuIyYOGxsSNqUlEkgyAQ", "rslbAsFAqgQdwHaDFvtVnSDXrBzTYqncaeaEysAbEQxepH", "maCYjfKEyKxFAYMyESpUfvlFEYHQTTnsabTQnbNugLQjEqJ", "qCzjDbBzZvPByEjHNXSEwvZDtcHzzHZLbEPulwkHlzLrGBxS", "LLrCriefAzYOxJagGdVngVWFYRfKvbKySZQzzFechnasGQ", "DZVmimWyjYbGnQZrTHNcdMUHNZlGyhTgVzJMHUgLgOkFtRjUy", "XWPCAtcpCoJgbmpgoESqiSBIgiHILEuoTuVptpXkqojYCjIY", "maCYjfKEyKxFAYMyESpUfvlFEYHQTTnsabTQnbNugLQjEqJ", "qCzjDbBzZvPByEjHNXSEwvZDtcHzzHZLbEPulwkHlzLrGBxS", "vuMLkjJRFhFGJvHbgOpWJpbeFGhuGpSVrcZbsuJoayPYdKnPj", "ydnrapOaArwotmlAqMhdVDuXnNHSvgCJfpPyBnRoCFHQlYh", "ydnrapOaArwotmlAqMhdVDuXnNHSvgCJfpPyBnRoCFHQlYh", "TcNaVYCZAjRTaSUzmHbfOhWpqggckDlBFyt hNaLizzIfOHE"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.34595553E8, 2.878058548E9, 7.600083775E8, 2.8552730675E9, 1.255732825E8, 2.878058548E9, 7.24297582E8, 7.14599405E8, 5.447686357E9, 4.31615262E8, 2.6070629555E9, 4.36663762E8, 1.248458295E8, 1.43015462E8, 1.247632125E8, 1.26369866E8, 7.17536907E8, 2.878058548E9, 1.254259705E8, 1.29289272E8, 7.102963195E8, 1.257565215E8, 1.43015462E8, 2.6260173465E9, 1.36668762E8, 4.36663762E8, 1.061161353E9, 1.43015462E8, 1.2539158E7, 2.8742274585E9, 4.593544205E9, 7.287303435E8, 1.1012760915E9, 7.178438125E8, 1.262378235E8, 3.91599527E8, 7.22646377E8, 1.1789976075E9, 1.3810218E8, 1.256073425E8, 1.295706705E8, 7.67788504E8};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> duration = {230919693, 813399047, 813399047, 59077827, 289997520, 813399047, 289997520, 2403330, 2403330};
    vector<string> user = {"LEYNdeRJdzvOewsZdaVnpAWdHmEbmoDppejHiafCagKHuOA", "PNXYOuGBiQykgCJqbJCkqgDHzILLFWiObYKwYsnMaPsUe", "ynknosHjDCFvBVyTRUwbTifPpOnZZhyPGOjYlRXJwZmLX xQg", "LEYNdeRJdzvOewsZdaVnpAWdHmEbmoDppejHiafCagKHuOA", "AUoPvTCTetFNtVlBfDrDlwuZEIgOPFgUIRYifmip AFXKukN", "NfzGGbPMUllXRXIenbqpP BhbZzaRtSgTKWOnIBNBqpjsDiEK", "idgTUHAVRsgPoHVbwSZHZTqJPfuUNjwoVBYeb TJZiimj", "pdDUfWkbKRwrEHmVxIpTQkYGTHhfjQduarIN tLMaHuIKDymnG", "ktvHnJolfXwmgmfpFHTiwpHhbbNmdTaFieswLbrLsTMbs"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {5.552627865E8, 2.501597314E9, 2.501597314E9, 4.693418535E8, 5.848017E8, 2.501597314E9, 5.848017E8, 3604995.0, 3604995.0};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> duration = {287898274, 744805898, 693296434, 693296434, 693296434, 287898274, 693296434, 275513302, 140573714, 287898274, 693296434, 693296434, 287898274, 693296434, 693296434, 275513302, 693296434, 744805898, 180253380, 744805898, 95259922, 275513302, 287898274, 287898274, 275513302, 552722720, 275513302, 693296434, 693296434, 275513302, 693296434};
    vector<string> user = {"iaNglgaxdVODCuNTlIBGVxLvBFIBtWKa RTfCPogYoouQleq", "WseuqNItpZmQOXWskvUEfd PIQhmzXabXgInfmMNkjrIZNq", "aDKeNeLfhsaQKqdcznYvadHpgZySetNjqBjTtKK VEsyNQ", "FuJRhWIRzjMqcTgnOOORsfeYnlLolvlEsfuUOdLxIBulXOa", "npazbTLkQ bWvfCdsAAcPDdWBHGCUcLEmxxWMStANGsklqG", "nHszjKdHsVKAmvodvBCREKITRFVGkmgMQsETl yiZuSMiF", "MMEbEwvfJd NElYHcTipqsQBWtkgsghRpDltoVBqcBmzuTFCp", "zfKmSOWEIUrWXzRGbdNPArJseIBGDZxXdbszhtQbgyGvTfYw", "IJcGeqxIreWLYBLaubuupmYFuMXNasdPJRjSDbpmgJyoAHUKJ", "TGInWIKyNelbaGcXiwiYwBgapAzgTfqdxQToDDVyKhQXygIz", "UlGtqWnWykfCOLtjk zeEJKzMGNUxSMJGiYAKUBQWdkbKkWBp", "OxTcbuvmGEYHziQyfNFVQnyDfWGVrnDmHZhFYHFstaoaQzFV", "ODWlRLhcXlBHb QirrxNyQFtdnCdVUxfoLTvDfPdSWvoGNj", "lSFjgQZLrjaSaLsLzBgoQGzwYrWSXXCXLolufTrUgajTJZIrU", "NIkRhkfBGVbuWtPPyOZNSjbXPpbhStSKPTeMwtqcfKdyzBAu", "SjIrKaoizKzgcFhTwqcGNTaViVSDTTwNNBSZJGZUPKGIZQXU", "cwsEjolAORpfeeTB hjBtoHhYSkcjvKehiszuxEDpSraP", "lVOcIarvUAUtRtvNnJqJfMVRYAVV tgnfmejDUAtDEaXM", "EEcOwQrHEOYOLBxZXodONWNCHojafBprlcaYQXjPrl WVa", "kO qmkWZWXhzpWJmifjINXdXRUlMPMAjkSWmEqwzfCPeNQ", "EEcOwQrHEOYOLBxZXodONWNCHojafBprlcaYQXjPrl WVa", "bmxokEBcLrVAndJgNzFNklwth uJxUBeFDSjJGTxkzzfWY", "SeBFgbmrvrzqqrwhJUCyovP PYXHbpwJAMKmJJzKLERGzAV", "HcQFVSaeqGMTknXWoipraNcqXdNjtT jaaAVYVarwRtzEoCxnG", "NzlUFdfGxRuZfIrrrkNImEX jfCeWYcSwVzubYhJKqDoOxM", "IJcGeqxIreWLYBLaubuupmYFuMXNasdPJRjSDbpmgJyoAHUKJ", "MYEvrdSJoYRCMd BJyqtHytuOaYOTiykjQjvUfvkucCwCx", "IusWpsXSefzpYnDprHQyExpeU eeBinRBaQDzlqnDgEpfWcyR", "diFUNRHDzaiNhsZAOItegMnGUJiqQvfObBDcuROcNKQvBwNCEN", "TgppebGsPEoeZDjToMbMtBECtDWlCHMDvKdAHocFIXXzGtLmT", "CuZrrFiCkhUvmKrFemTwjEpeUHEXSiViPATLrYxoGxFiMOBq"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {2.936237073E9, 1.4158448196E10, 8.509057796E9, 8.509057796E9, 8.509057796E9, 2.936237073E9, 8.509057796E9, 1.102053208E9, 8.232696436E9, 2.936237073E9, 8.509057796E9, 8.509057796E9, 2.936237073E9, 8.509057796E9, 8.509057796E9, 1.102053208E9, 8.509057796E9, 1.4158448196E10, 1.054423247E9, 1.4158448196E10, 1.011926518E9, 1.102053208E9, 2.936237073E9, 2.936237073E9, 1.102053208E9, 8.438770939E9, 1.102053208E9, 8.509057796E9, 8.509057796E9, 1.102053208E9, 8.509057796E9};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> duration = {302981560, 202392926, 836860192, 862384307, 862384307, 862384307, 862384307, 56447953, 70257123, 108957206, 136507250, 114585165, 232506917, 520112474};
    vector<string> user = {"gKYiiYcPgjvPdPb DmhbawmfbWQadWJnwbGBPbyDxxpECn", "DtjlEVfvNSUJiquPuLxiVaeMuKFxjzaxG EkDGgXWaMuyZEdC", "dIlflThftmlvqCfsrMGFDHDIWCY xMhKTyWVmvmHCVWdJbTZyu", "QrefaNUWKvLpyNNMLwJfvZYHPiIDBwRcpxunsGudvFSqKWtT", "YCKQo FPVfejvtXhOMnCealTWRKTRKyFZYZyRalcmBddhsHQ", "HZtRaaEPuMqNIp cZBbJuspEvLFJosrovjLNJXrLzOxnmMZ", "zeQYULSZCBcUtZOXPkMbKNYJaVMvrwPKUpHVJbVkXQdUO", "DtjlEVfvNSUJiquPuLxiVaeMuKFxjzaxG EkDGgXWaMuyZEdC", "WLAKBHcFPGWFHBdSoOKlZBYHtfFKErQqdg DWAbrgwYHOWYi", "gKYiiYcPgjvPdPb DmhbawmfbWQadWJnwbGBPbyDxxpECn", "PftwUcQeODeVYsHWqfIyPKooVOxvcqujPLgowkGYtwWgg", "gKYiiYcPgjvPdPb DmhbawmfbWQadWJnwbGBPbyDxxpECn", "faxFankymyNSVhVhicyatbKFLwzaoNoDfTjSPqMzL GhGZiZc", "WLAKBHcFPGWFHBdSoOKlZBYHtfFKErQqdg DWAbrgwYHOWYi"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.0426077915E9, 5.996310695E8, 2.581608766E9, 4.7375695335E9, 4.7375695335E9, 4.7375695335E9, 4.7375695335E9, 5.26658583E8, 1.484692337E9, 9.455956145E8, 1.3650725E8, 9.48409594E8, 3.69014167E8, 1.7096200125E9};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> duration = {523057725, 15275115, 104867046, 178753865, 398155500, 43061887, 150123787, 449822910, 442629261, 393413746, 26292459, 26716492, 135780459, 208497083, 20611561, 958171513, 102320146, 55378313, 751661263};
    vector<string> user = {"PjlwFtihVSxGtLPNZaxQSavKhprPolWvWCImpRUiNqhAZxdxVY", "NRfnepcOwskOMXkSaRwTYEgRPDAEonePaUypaXsEUcwwNbgoG", "ztZJzuXfHoBUwzbrBLDuysfzRihBJwFnkzzntqnmqpfixW", "JEmhPyIKfzofSljsooAXDzDsJfwPVjKQv NFvlxIGFpYPsY", "CbkXPjxmwqvMVNHspveqpcURLUPqFgYMVQZxQpcJYx gCF", "CbkXPjxmwqvMVNHspveqpcURLUPqFgYMVQZxQpcJYx gCF", "YazwyFldVyQxNPRiedRcaNEj VCYMddSYIIVEcYJkqzUNMqHIZ", "XMmdqlSxpvDTCQvAvsdyWONv xYcjcqtIbeDupsiDWHGZJp", "URbYPiavQtVGolQgng oeHywZRmaifVjMDowQZwAAOsGxWRC", "YazwyFldVyQxNPRiedRcaNEj VCYMddSYIIVEcYJkqzUNMqHIZ", "ztZJzuXfHoBUwzbrBLDuysfzRihBJwFnkzzntqnmqpfixW", "ztZJzuXfHoBUwzbrBLDuysfzRihBJwFnkzzntqnmqpfixW", "yEvnQhIgLIeqKDgalfQhpTwmRMmbs QeeyKWDSnKKbMyd", "JEmhPyIKfzofSljsooAXDzDsJfwPVjKQv NFvlxIGFpYPsY", "ztZJzuXfHoBUwzbrBLDuysfzRihBJwFnkzzntqnmqpfixW", "lqSukJELyKATBAUUEkWZpYakE UOHHAlzEUBsnrvmOfKPLKj", "CbkXPjxmwqvMVNHspveqpcURLUPqFgYMVQZxQpcJYx gCF", "JEmhPyIKfzofSljsooAXDzDsJfwPVjKQv NFvlxIGFpYPsY", "NRfnepcOwskOMXkSaRwTYEgRPDAEonePaUypaXsEUcwwNbgoG"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {2.172407174E9, 3.6505879865E9, 2.77457761E8, 8.462742105E8, 2.915022457E9, 2.7374756505E9, 2.7910066005E9, 1.649349449E9, 9.782119085E8, 2.91265158E9, 2.381704675E8, 2.38382484E8, 1.35780459E8, 8.611458195E8, 2.353300185E8, 4.984590131E9, 2.76710478E9, 7.845864345E8, 4.0187810605E9};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> duration = {980460380, 980460380, 818558915, 132153117, 42924259, 448502502, 201553722, 201553722, 373953153, 47326450, 606507227, 6142345, 49544357, 31660887, 132153117, 68174808, 818558915, 554662576, 165857466, 39162446, 44412608, 415795813, 180477227, 818558915, 11006184, 132153117, 980460380, 26238851, 628979729, 818558915, 43446314, 628979729, 45310933};
    vector<string> user = {"WJNFkkOjIhwkkGFoJVRvTLlRsOeqUYBfnYyxOF NiJfSXZw", "gjBupslWvqBhTEmXMhEJHpuoKdxouQNGMaokBvjtgpiKZYZ", "eoNWivyrnapVqlYoxIavzHfcerIlfgEbVnztQajGzxZJzI", "zJAmKjJywZNuWTHO zwcUazjVqPEbbYPBOHSevQtPDzQyTgZb", "iLheekcedpCBonaYCPPVysSWyHZQfewErcUGIxpF iHFG", "UhKEWIImrqeqxbCttsoHbCnDAbaVXvWfCBfgfVXCrNepmUoUNZ", "cAeKrRUJIsgkKlPqmjNyxxoKKMAsHYZjtUNSRaBAyxIdCZp", "gLAjoUSkBpCDOZhajBGChBkgVQpemoLrfjkEMhnQRFGoPW", "XIJQIpjnSARAnEUZpxTmEldrNKgAfRfkFshMBUWqlryaZhusP", "CZZwiwNgISkVoyVzVIsKryTsFFKuRlhDSyPNatqszBkIAekCC", "XIJQIpjnSARAnEUZpxTmEldrNKgAfRfkFshMBUWqlryaZhusP", "vupHGLMhjFimggzZbJQXJNxiomooYHtFRENeIMXSuHSfHjvXTS", "uFWzUIsqhvxdlfQP YTxstHBFZWlPglMHDHqswbyMqWdh", "iLheekcedpCBonaYCPPVysSWyHZQfewErcUGIxpF iHFG", "QCACJPbjnorLoxzGWmbKRZDGHfpbxkiRymFeXNXBUVRDjDzZ", "vupHGLMhjFimggzZbJQXJNxiomooYHtFRENeIMXSuHSfHjvXTS", "QTrtyhrxRhnxGICHusbkUigXt ahZjZsFMPCPgLZcpXVTOPiW", "vupHGLMhjFimggzZbJQXJNxiomooYHtFRENeIMXSuHSfHjvXTS", "CZZwiwNgISkVoyVzVIsKryTsFFKuRlhDSyPNatqszBkIAekCC", "uFWzUIsqhvxdlfQP YTxstHBFZWlPglMHDHqswbyMqWdh", "iLheekcedpCBonaYCPPVysSWyHZQfewErcUGIxpF iHFG", "CZZwiwNgISkVoyVzVIsKryTsFFKuRlhDSyPNatqszBkIAekCC", "UhKEWIImrqeqxbCttsoHbCnDAbaVXvWfCBfgfVXCrNepmUoUNZ", "FVOZCOxGbKzntSLZGuSud SZnPTxswIIlMptKxHIwcLVU", "iLheekcedpCBonaYCPPVysSWyHZQfewErcUGIxpF iHFG", "pyFqPqaslvVZXQBwrtDFUodZTcWVPWgAouXCaedCOrSgQpbjWa", "FikGzdHtjQDJHQmTVTVVLj abkfeadBLbPfHcbYqowBNUrt", "iLheekcedpCBonaYCPPVysSWyHZQfewErcUGIxpF iHFG", "kUbtCAOluenuPxBAQydglQEgFsWKBnEjBVZGRdYnphsIbOdzFm", "wjXZMgYyxrEuCnOmdhFbrhunjhTpEoXTKdqjvUuBzejwZmqWX", "uFWzUIsqhvxdlfQP YTxstHBFZWlPglMHDHqswbyMqWdh", "ki CZYwgMJeHqMXcBQQaaEJcEOmrCRvTgXsmmqFDmIQfIU", "iLheekcedpCBonaYCPPVysSWyHZQfewErcUGIxpF iHFG"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.0003558889E10, 1.0003558889E10, 6.3245695665E9, 3.303827925E8, 8.524051805E8, 2.9299742075E9, 9.31719912E8, 9.31719912E8, 9.7003052755E9, 2.7293861815E9, 9.8165823125E9, 2.708794129E9, 2.890784125E8, 8.467734945E8, 3.303827925E8, 2.7398103605E9, 6.3245695665E9, 2.9830542445E9, 2.7886516895E9, 2.83887457E8, 8.53149355E8, 2.913620863E9, 2.79596157E9, 6.3245695665E9, 8.36446143E8, 3.303827925E8, 1.0003558889E10, 8.440624765E8, 3.020212821E9, 6.3245695665E9, 2.86029391E8, 3.020212821E9, 8.535985175E8};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> duration = {26572296, 23126013, 311785437, 68057870, 197199528, 13516736, 21881291, 20512809, 118453693, 399445781, 13177915, 22978850, 14336885, 45430950, 419097094, 3712672, 196935333, 4461228, 570756, 1742409};
    vector<string> user = {"opeAuZXslbRPAHpMGGsEKKerOMvLLsVxivBdXuiJRyEUMp", "mnlFmzZkhTiAaPFRaJQXlyVLIdrFkRZXCMAFSgQkHSTAvoOle", "ZpHmSAiWDbPDdSxfUv kVvnHrjXiMNDLWSpecJSrqgyWJtoa", "mnlFmzZkhTiAaPFRaJQXlyVLIdrFkRZXCMAFSgQkHSTAvoOle", "nJcrduTpINSjMgJSYfUHnbexMMaBPQspawQuNyjpofEBnOk", "opeAuZXslbRPAHpMGGsEKKerOMvLLsVxivBdXuiJRyEUMp", "ZpHmSAiWDbPDdSxfUv kVvnHrjXiMNDLWSpecJSrqgyWJtoa", "opeAuZXslbRPAHpMGGsEKKerOMvLLsVxivBdXuiJRyEUMp", "nJcrduTpINSjMgJSYfUHnbexMMaBPQspawQuNyjpofEBnOk", "nJcrduTpINSjMgJSYfUHnbexMMaBPQspawQuNyjpofEBnOk", "opeAuZXslbRPAHpMGGsEKKerOMvLLsVxivBdXuiJRyEUMp", "ZpHmSAiWDbPDdSxfUv kVvnHrjXiMNDLWSpecJSrqgyWJtoa", "opeAuZXslbRPAHpMGGsEKKerOMvLLsVxivBdXuiJRyEUMp", "ZpHmSAiWDbPDdSxfUv kVvnHrjXiMNDLWSpecJSrqgyWJtoa", "ZpHmSAiWDbPDdSxfUv kVvnHrjXiMNDLWSpecJSrqgyWJtoa", "opeAuZXslbRPAHpMGGsEKKerOMvLLsVxivBdXuiJRyEUMp", "mnlFmzZkhTiAaPFRaJQXlyVLIdrFkRZXCMAFSgQkHSTAvoOle", "mnlFmzZkhTiAaPFRaJQXlyVLIdrFkRZXCMAFSgQkHSTAvoOle", "opeAuZXslbRPAHpMGGsEKKerOMvLLsVxivBdXuiJRyEUMp", "nJcrduTpINSjMgJSYfUHnbexMMaBPQspawQuNyjpofEBnOk"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {5.94861825E7, 2.502532975E8, 1.6683014535E9, 2.72719226E8, 8.420009825E8, 5.29584025E7, 1.5233493805E9, 5.6456439E7, 8.02628065E8, 9.43124109E8, 5.2788992E7, 1.52389816E9, 5.3368477E7, 1.53512421E9, 1.721957282E9, 4.80563705E7, 3.371579575E8, 2.40920905E8, 4.64854125E7, 7.44272423E8};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> duration = {218312355, 168430435, 236739937, 135089231, 97595301, 4366776, 200283001, 148442223, 316872658, 177687188, 66104874, 259626990, 269688435, 97080958, 56769023, 80132721, 316872658, 495206983, 70030442, 181783427, 437314178, 320023130, 36761013, 51186174, 19508699, 663491};
    vector<string> user = {"zBWDrnsZOhBtiukRvcKpTlNAhfvScVhUZiSeoULnZLKfsMep", "gVh euqKNuvkULFPgJdmIQJtElaTfpVKPhGFCCGLNRXDGCN", "RQmqpNSUIaETKVCvzMXHyudLWcySXuKrnrgplkPhtJNgtv", "ulXOZSTWNHVLktdjppnpVlTzufnVyxSSRYlZPRa TQHLgRn", "VezmZIgFxNgMdBMZZaxtJl pewvhFkyuyfVfqdHphzMgZxLu", "zBWDrnsZOhBtiukRvcKpTlNAhfvScVhUZiSeoULnZLKfsMep", "dDCXqaqGYPLGrKARiBJebBdDXThvxdxHWdzdeJ rwHzsEo", "gVh euqKNuvkULFPgJdmIQJtElaTfpVKPhGFCCGLNRXDGCN", "NlgvvlhbEPCfnXKUYZiRYBtQyroZtXG lCVbynYaZjdXAJbLsh", "mKdFSRsxPurDlwIvIXLrCjPyoLFMxEEcnINgFb TqYnMLtKwQ", "EkoYKOKHA OSEPkNiahxlfJJixuQlrtLhlgNRiICQxvWQUSex", "mKdFSRsxPurDlwIvIXLrCjPyoLFMxEEcnINgFb TqYnMLtKwQ", "VezmZIgFxNgMdBMZZaxtJl pewvhFkyuyfVfqdHphzMgZxLu", "dDCXqaqGYPLGrKARiBJebBdDXThvxdxHWdzdeJ rwHzsEo", "zBWDrnsZOhBtiukRvcKpTlNAhfvScVhUZiSeoULnZLKfsMep", "RQmqpNSUIaETKVCvzMXHyudLWcySXuKrnrgplkPhtJNgtv", "KMkhPDumyQTwmctq jzfLddkuGBXhYJfdYKWMUOeWrItEVlsOh", "uuWIoQWXsOpTpuvstyGbjvAEwHVHLQVQZRRtJQxqcylIuFH", "VezmZIgFxNgMdBMZZaxtJl pewvhFkyuyfVfqdHphzMgZxLu", "ulXOZSTWNHVLktdjppnpVlTzufnVyxSSRYlZPRa TQHLgRn", "pnKnjMiKiIunVyEYGINUJyxggLEIFIZMYsIxVwekCyEpim", "EkoYKOKHA OSEPkNiahxlfJJixuQlrtLhlgNRiICQxvWQUSex", "zBWDrnsZOhBtiukRvcKpTlNAhfvScVhUZiSeoULnZLKfsMep", "EkoYKOKHA OSEPkNiahxlfJJixuQlrtLhlgNRiICQxvWQUSex", "dDCXqaqGYPLGrKARiBJebBdDXThvxdxHWdzdeJ rwHzsEo", "zBWDrnsZOhBtiukRvcKpTlNAhfvScVhUZiSeoULnZLKfsMep"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.2182104805E9, 1.1932695205E9, 1.2274242715E9, 1.1765989185E9, 3.1415346125E9, 1.111237691E9, 1.2091958035E9, 1.1832754145E9, 1.267490632E9, 3.181580556E9, 3.125789399E9, 3.222550457E9, 3.2275811795E9, 1.157594782E9, 1.1374388145E9, 1.1491206635E9, 1.267490632E9, 4.462572301E9, 3.127752183E9, 1.1999460165E9, 3.311394051E9, 3.252748527E9, 1.1274348095E9, 3.118330049E9, 1.1188086525E9, 1.1093860485E9};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> duration = {2037269, 455460545, 63691140, 455460545, 641875, 30101043, 232256695, 959116558, 132040206, 16013452, 232256695, 959116558, 574632836, 959116558, 44719101, 959116558, 252405550, 959116558, 168565555};
    vector<string> user = {"EjQQQHZUSVQZSJmOmIiSGgcpsLScHhTYpZwMd PWwVoKquXN", "dUibdgmkfxwisilnWPkKxHudAdkCrsbkkmapl oZoCFYv", "LLDOlaQPrNdSFFEVMdIhxDSowFpDyVrpozIAMHnuIQmtFinf", "QnbodXTwwaTEXwqduEqPUPGmLmfatfxgFNzgPUqFGDndadJyLY", "fGitd xtxRjkFlMPaUNQJteRXQPpdqggXEIZqlCvLHppnmZV", "fGitd xtxRjkFlMPaUNQJteRXQPpdqggXEIZqlCvLHppnmZV", "RIGWhVLxHevZCdHcgIISMzPUsJoMka aVqWFbeYkovrAcwyJQ", "AFBZnFavATdtijiBmeEeffoPIrUINpxLkfbXImnoFDnOxcl", "SfoTtHfaeXHKsXJVkQCIniGPamEcgusdUVThLKeFEbBmFSU", "fGitd xtxRjkFlMPaUNQJteRXQPpdqggXEIZqlCvLHppnmZV", "AGjo RMIAvYCkNbRdOUCIrxsLCailTvPhtQNGzsDozsIva", "hxwtjHrgJnJedssNDOqmBicvxMiWaYqEHoShRWLIPIqkM", "SfoTtHfaeXHKsXJVkQCIniGPamEcgusdUVThLKeFEbBmFSU", "lshlXAQpFfgYAXNyoCyqiCSvwwLdNbfZoAYbqULdOAfOCenInR", "EjQQQHZUSVQZSJmOmIiSGgcpsLScHhTYpZwMd PWwVoKquXN", "aCTnmuUQyrcFlZBOVJKdVJdkqDWnrHRvFfCYSZnRcciveaL", "TSAFMmCJyGQLpAhoMXGxLGWIG daEjdMWsIliQmqQTzYHOWm", "AooLrssUUKOciXasPNksUTcehSL FhFaNBthOgUQVUIluXcf", "LLDOlaQPrNdSFFEVMdIhxDSowFpDyVrpozIAMHnuIQmtFinf"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {4.77750045E7, 1.7258791925E9, 4.737433525E8, 1.7258791925E9, 4.70773075E7, 6.18068915E7, 5.5802613E8, 5.537632181E9, 2.372966089E9, 5.4763096E7, 5.5802613E8, 5.537632181E9, 2.594262404E9, 5.537632181E9, 6.91159205E7, 5.537632181E9, 1.042688375E9, 5.537632181E9, 5.2618056E8};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> duration = {169620848, 40852684, 5236771, 12058049, 74238465, 62715995, 100455147, 16429986, 280485215, 45433232, 56471908, 12364649, 42203642, 3275513, 12654662, 95443708, 211188181, 368382878, 37577171, 149648253, 216129499, 26090093, 96193952, 306575308, 18500231, 17115682, 91262191, 41013250, 36777897, 43279385, 111761465, 306575308};
    vector<string> user = {"A rqGqnHqINZBlmqmYQtXiVmqpMStPTGSyJiRDhyfbmKINsxD", "JdpMWJx PJVUwkiyeTfmnZSUUvvnRzQzEErccZdXADNvS", "gNIGBpjyniYXLGbqkrKwgFAgrGXnwYpktLCSAgdxnTBnPYrcpF", "osCoWBjoYmtkbUAqqNgnqMKtZFibGYqHNhnvjuxeaD SbGf", "A rqGqnHqINZBlmqmYQtXiVmqpMStPTGSyJiRDhyfbmKINsxD", "A rqGqnHqINZBlmqmYQtXiVmqpMStPTGSyJiRDhyfbmKINsxD", "QHkMVNAFXBDYLyRdDDJ UKsdvdcRcDnrWGWCwgVshCLcllZL", "osCoWBjoYmtkbUAqqNgnqMKtZFibGYqHNhnvjuxeaD SbGf", "vFjQSRkyNOLyyaapVejjfVSThbNwfSdrTntBUgdfFgRVTv", "EbljSnkOVYwGoTmpurDiWJdlpNQlWkH PziVjXBnNuOQz", "QHkMVNAFXBDYLyRdDDJ UKsdvdcRcDnrWGWCwgVshCLcllZL", "osCoWBjoYmtkbUAqqNgnqMKtZFibGYqHNhnvjuxeaD SbGf", "ZvdTPLuWOnKjGUowlPLowAwrBggxfFTWzStUNveKKcFfzG", "tsheqTnuCYSEgiqhPdgoptKjCAIBFAFKkYHTSvKufHhsjDlNi", "GTFDZxqjGhaJfmingXumJFCQqrfKdfisAkYVyJpPAdnGECHA", "ZvdTPLuWOnKjGUowlPLowAwrBggxfFTWzStUNveKKcFfzG", "EbljSnkOVYwGoTmpurDiWJdlpNQlWkH PziVjXBnNuOQz", "wtBRDdZUxCdDgeEiQLsvuknuwyLErbtclynjOMWKMcdZIlc", "tsheqTnuCYSEgiqhPdgoptKjCAIBFAFKkYHTSvKufHhsjDlNi", "QHkMVNAFXBDYLyRdDDJ UKsdvdcRcDnrWGWCwgVshCLcllZL", "GTFDZxqjGhaJfmingXumJFCQqrfKdfisAkYVyJpPAdnGECHA", "vFjQSRkyNOLyyaapVejjfVSThbNwfSdrTntBUgdfFgRVTv", "ZvdTPLuWOnKjGUowlPLowAwrBggxfFTWzStUNveKKcFfzG", "zIwjLhiAaqiaCWHGoKfYMTyfujVBAMlzdaQWqPdQOAgIqPXErJ", "gNIGBpjyniYXLGbqkrKwgFAgrGXnwYpktLCSAgdxnTBnPYrcpF", "gNIGBpjyniYXLGbqkrKwgFAgrGXnwYpktLCSAgdxnTBnPYrcpF", "ZvdTPLuWOnKjGUowlPLowAwrBggxfFTWzStUNveKKcFfzG", "GTFDZxqjGhaJfmingXumJFCQqrfKdfisAkYVyJpPAdnGECHA", "GTFDZxqjGhaJfmingXumJFCQqrfKdfisAkYVyJpPAdnGECHA", "ZvdTPLuWOnKjGUowlPLowAwrBggxfFTWzStUNveKKcFfzG", "EbljSnkOVYwGoTmpurDiWJdlpNQlWkH PziVjXBnNuOQz", "BQcjcAinSiWCfIk oQaJStsUlGhJUBCwGLfsyeIzwiFlSAS"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.167947084E9, 1.0213171E8, 8.43237535E7, 8.77343925E7, 1.1202558925E9, 1.1144946575E9, 1.1333642335E9, 8.9920361E7, 1.2233792675E9, 2.578153517E9, 1.111372614E9, 8.78876925E7, 2.576538722E9, 8.33431245E7, 1.089463991E9, 2.603158755E9, 2.6610309915E9, 2.73962834E9, 1.004939535E8, 1.1579607865E9, 1.1912014095E9, 1.0961817065E9, 2.603533877E9, 1.236424314E9, 9.09554835E7, 9.0263209E7, 2.6010679965E9, 1.103643285E9, 1.1015256085E9, 2.5770765935E9, 2.6113176335E9, 1.236424314E9};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> duration = {45428042, 149879893, 3125040, 263439, 463558792, 91029511, 45428042, 162351941, 45428042, 3125040, 1314608, 421117083, 20951468, 2582139, 452948125, 91029511, 231464501, 279462, 45428042, 1810432, 712745916, 358531551, 358531551, 95747947, 109917898, 66603994, 463558792};
    vector<string> user = {"EfyfCZuOCuWvcewtLykJCDaSvHagFHhE cZprQdpjtAdt", "QOZrvBxBtjpHeIxhPhdphPWrIImbuFbMijFFuwuIPXVQgEsj", "BeZDvZFoPuOrwULhNzwGiGCfBZgfuCMFONEiCDBnCoewhuMq", "FuRFWMzpbxojVHbuIqrmjaCQwbfACTejLWmjmERQIDQaZijOOh", "OJkAVvZbRKZHEcterkIHImEmsvNIxNUWQLXVbWJcNelxASKo", "jzyntIGoMraVcWxOYulxhIxwmWKTjffQIHP earqAyRRIVTcpv", "mWLGVYVPWXfeCenWwXZJDTwSLiBCZLcVKQgPmWegtaCnId", "LZLJuisaNJyskGEPfrhZpWPJJVySzQSaqsEPavcWgVoTFy", "DrnyZGJXGQwTGmLJljSDHPcFvAVXWAZDBDTyzUrDrLcuQVKjH", "AH RYmKptPrIsyuMUWzEHPKhSSwmARqEWiKwOhacPicoxTpd", "nMpddkgMNhBWQOVYMgMhFMPDjeDGhFdtBWKfaAsyOpDAssxuU", "WpOvJCRVNTJLOIaCsBPujRmCPXMCMALviiieaLsKrB kSe", "mtYDCNzqYtTdDflJeiXwdqCzgfIwGKKKjbMpdxNYhwvnvh", "FuRFWMzpbxojVHbuIqrmjaCQwbfACTejLWmjmERQIDQaZijOOh", "QOZrvBxBtjpHeIxhPhdphPWrIImbuFbMijFFuwuIPXVQgEsj", "UBYyMqviwKmgmvMyETtAJFmpFIFbHMZBrGIJNNeFtcMnDdazFv", "sfVtjGYhDtGLORQadXQbfUkQxMbyGrpgkHIocUornyurP Nr", "FuRFWMzpbxojVHbuIqrmjaCQwbfACTejLWmjmERQIDQaZijOOh", "DavsJn PTwVhaJnTANNkEmGXgMytnMfgrDWWOSbpWbFPcf", "nMpddkgMNhBWQOVYMgMhFMPDjeDGhFdtBWKfaAsyOpDAssxuU", "liitpmtZcaiWzOuELqMeKByEtmFAWYnXXQeNDAleJXBSuyYSs", "fymFAOJvBtTXXPZmrvqHMnWNmdDVUWrtDyCYOGUwvZcFBnuMQ", "PaMaxRPyqKPELYJJdiWaJBKvozTQpUtrdLAmpAMWMioUs", "HDCQJkoLcY nlPTHYxWsirmiEJldOdlAbdHIUXBqycCreNBjn", "QOZrvBxBtjpHeIxhPhdphPWrIImbuFbMijFFuwuIPXVQgEsj", "HDCQJkoLcY nlPTHYxWsirmiEJldOdlAbdHIUXBqycCreNBjn", "rnpxipVBQgJoUcEUshvfKUnWCqMHxqELWUAATqcvBQG j"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.47021733E8, 3.8063748325E9, 7812600.0, 6381799.5, 2.786909574E9, 3.517080625E8, 1.47021733E8, 6.407507295E8, 1.47021733E8, 7812600.0, 6907384.0, 2.091571386E9, 3.3451628E7, 7541149.5, 3.9579089485E9, 3.517080625E8, 9.53391201E8, 6389811.0, 1.47021733E8, 7155296.0, 4.087807844E9, 1.4911885275E9, 1.4911885275E9, 6.074487325E8, 3.786393835E9, 5.92876756E8, 2.786909574E9};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> duration = {131133298, 891062233, 510643375, 891062233, 135590862, 104450670, 464699275, 85098281, 85098281, 135590862, 50620914, 267715364, 104450670, 85098281, 135590862, 267715364, 64776698, 792876129, 85098281, 135590862, 135590862, 104450670, 510643375, 85098281, 792876129, 505277231, 135590862, 84969948, 792876129, 135590862, 85098281, 39673972, 792876129};
    vector<string> user = {"EuXxtXblhiinjsEoINXTqqMoanEeFrCMhcKobEqLlfYcOmmPi", "gUhF abznpkOPavXaLPWmfTWoXCxtsOeiROJcfxNxDLES", "QnaBBrpGeBEgkumrtyWBdMceRzBbvlUThpWLhpVxVxzXrJ", "ECeJZCxDQkwujiFammnPHMK plFLZrgIkpOKaghWneZli", "hoNjBWJyYkpawlUjmLSjuZYPmnjiIVpERYyQsxvEpCLMPGGGRe", "TXSrnBmNUnmjJxJEeTQDojdTrrauABHLKTeFet GglnyPM", "EuXxtXblhiinjsEoINXTqqMoanEeFrCMhcKobEqLlfYcOmmPi", "yuBSBahAuJSgvAgODgNNlZWZQx txEWJPBZqVOSuqqgdQzhoCU", "QwXEyZFAVpURWvVUAizMJpRfUbfVHoSnDCvcwD mpAQGKt", "wrOnWUuTgKgZoPbUCqfsFhYEPdHNCxHaqALyOZENOzhpTWy", "XeOgdefrdwqGKrLlgyLzFVqUfnQrmmzIqqUKrkoUNfqfUzKA", "GtvhviT DcslxhqcQsIHDsFoHofKPYGYaicWpIPNxmPSFgjk", "KyfVdLtYUxcLjHRGZpKJcfJzQqxXvgUiSWncTPMYCZlQcfNR", "NHjYnoMoOMfAiBwCeGMfQSdAxCjrFmKXmHoFLQkdPvgdeNwUj", "cMnrnjiMCEfMogMVhauLqTrhkiWeHbdRNQguenfYstvTIMRv", "rMzhKbj UkhJoFOQlGchVKuYFZPQdDkWLyyoVgFUKehgap", "BivrQjhmgytZqEmoVgnpHWJhGAXuVJlgjNUHtyRo NoLN", "BRFrtpimJDUjlwbGFnlDjzYePDOVfUuddHUXyPAarsawnnI", "HL NZxvaVGZtnzBnqWSrAOMroWyvzksLlhuzXSLDZtxIsHVv", "kZVAxIKLBxpFAgISlIeMLHrIwwHYEtjqQwjTmXhJUgsqE", "wCbuEJqVfLJovvuYbELyHVvmdjm xEyqaoBxXXiTCiHxg", "CFXhoXxMnINtATItuoycFiOsxLutvQeyu DdQpkykGLmm", "lUUVCtAanCulZsuYHkHJVDfbwSPhbOEPdazLzthAQbUfrNk", "jEX JdwUqdevZUccnjKCBWMpOcXKoSkNcUPRWTerEJYRFYcP", "ZyBMjhwEZutZz JJdMYIamGtLpybvbCgnxuWwEgQHVCpMQ", "HPoDlnDXSWIOTSRTbswtYMQvr huabZJViZxyUvRZfvYEdDWCz", "ezyurVkZTVcyRYUVKDTbwnlUWcnXVcxOsdDOpKUWHdoJNrV", "XeOgdefrdwqGKrLlgyLzFVqUfnQrmmzIqqUKrkoUNfqfUzKA", "mpcOSdCxSiZtyCjZEfapdszOHcIpkRCljzmQqzUrrDenLAr", "lpaRhLyQrWaqMvLHLvYNGYhwsAsQicijqDpTtrjhvfnSQzE", "hyhiQbWDLZkcvcGResbhgOfFFTNPTKQIkHqQVrIoVWytRRH", "BivrQjhmgytZqEmoVgnpHWJhGAXuVJlgjNUHtyRo NoLN", "ZyPQfcJqKsccgsdflLzemrFhwvbxOxthjhlWroelomCIyD"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {4.4385969065E9, 9.1790444095E9, 3.8197922835E9, 9.1790444095E9, 1.538551245E9, 7.71716361E8, 4.605379895E9, 2.978439835E8, 2.978439835E8, 1.538551245E9, 1.496066271E9, 2.414692308E9, 7.71716361E8, 2.978439835E8, 1.538551245E9, 2.414692308E9, 7.51879375E8, 6.6531368665E9, 2.978439835E8, 1.538551245E9, 1.538551245E9, 7.71716361E8, 3.8197922835E9, 2.978439835E8, 6.6531368665E9, 3.053827221E9, 1.538551245E9, 1.513240788E9, 6.6531368665E9, 1.538551245E9, 2.978439835E8, 7.39328012E8, 6.6531368665E9};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> duration = {784290145, 784290145, 488358042, 784290145, 784290145, 784290145, 784290145, 784290145, 174722940, 784290145, 784290145, 784290145, 784290145, 784290145, 784290145, 721419299, 784290145, 784290145, 696132543, 784290145, 784290145, 784290145, 88157602, 295932103, 62870846, 28439294, 784290145, 75054286, 784290145, 784290145, 784290145, 784290145, 586276539, 784290145, 23290666, 709235859, 755850851, 784290145, 784290145, 784290145, 784290145, 784290145, 784290145};
    vector<string> user = {"YGa uOiCgApWHUBYcXMwVjIRCkWhsqPrPYKwgmpKlSrTIKu", "oCrAaEXUXfzxdierlh mhNeYsnWWpiGaYbwEVmhFvDNSmVB", "HLybQbBFUqQwFTLOipMatspjOqwjbOKNIsZgnGYBwWlJrnbVH", "RGZpiJQxszVJVysBURLPBJRJIMTSDdZwLxWjTLkelomYUEBd", "tqWjULVz xQnVAIoBnSbbOfYEfTTHBPSRNvkTfcQewTRjpRH", "ClByOBvVATQxJc zkZBYrcFuuULhWZkDtcgJGoBywXPID", "twlQxgAhDdMngEIJBxW qXdYOfaKhKUtjggAIzEHMIRxM", "pCRBaXykwTtCFCKxYyQYpU xsvJQbSMdJsHRToCQVtuarj", "jtasDSzvlFgFqXzFIJUNbEDisv tIMBzraQOGRNzcHIoHXhi", "DvmEVfWlIvoLELSPGfyKVuzRtaWbpCzvcykdyEPjzJjjRKWP", "ChTgXzNNjfSiSdRqSblIrYQGrNEtTKbCdMjUPONBIDOKx", "OUFdz hLnAmrsTRwNyTzjUZyERSCZeHpiKFKLnsefKGMiyWZdJ", "uAZyoMVyiTjXDBSfIxHlbcbPIRNUodfaRPwVzaOJkUqZiny", "hfpMKmsoBBlDJpvimQBzLzXgjOBHjTCsqUypnvgHwU Dhxo", "paJMsLmkQgrdEEExmYxafykZwRHTCyfMhBWWLHmHoznkEri", "CmvFKpDpqFyqHXcForFhdd tkrQZMYeqWcJIhAittvnafPwQcR", "fWJAKngtLMRYWnPvdqRskhixinQVaSuAHnZLTXliwmKEAMcHHd", "xbrmkcxkhWeTntsCBTWSXdMmDKLbldXqUMMxaSdVzkLWqG", "BYdJySUdLFpbDTib sVKtKIxafSxfuIeanprgmBbBjGev", "JzDOegAvqBjGnYIeepYEKXmsILCjKYJqQD EyDDyfmruCGcXI", "pGuPWd LcszIUSLCEnbvjSoBClHqjtFZcZqSYKLzkRXMzx", "SxHBNIziWHoosRSQ RtWwMxXQEOpAuItRXkLGmrTwseFGT", "BYdJySUdLFpbDTib sVKtKIxafSxfuIeanprgmBbBjGev", "HLybQbBFUqQwFTLOipMatspjOqwjbOKNIsZgnGYBwWlJrnbVH", "CmvFKpDpqFyqHXcForFhdd tkrQZMYeqWcJIhAittvnafPwQcR", "bLyvjeWWnbOSoCNgfCbDDnrNkjevzMUjXqBGWFMEhOeBjzjjUa", "mdVfGo pGZOAndEUsAYcKjahXwjEGbTNtyKicUHpgUXFnF", "vSDNqzgPraGdKUDFEsDRDgDKKhRepqXmCFQqUPAKFELdMItokm", "HbxrlRMDrdiMEcPCPXtFKtxHnPPNNPitSAiLKGjKnpX n", "mPLusRRUJcjJmRzVaMMTXpPpbHeRDgb MKcpTysAQbNCvFvCGv", "BJTsZLKDmlitfhiCiMpHf bDXYHMcaOOzofrSGNNjYNkbMIMvn", "TfcffMsZBSjUyUudPxlmOTJgEDtcNlxAuAsvCdgmrjfV igC", "jtasDSzvlFgFqXzFIJUNbEDisv tIMBzraQOGRNzcHIoHXhi", "CYwEPyQPGOYuhgTloWdRZkGKxYFrowtWLobJbJIpmIFUipmxIx", "jtasDSzvlFgFqXzFIJUNbEDisv tIMBzraQOGRNzcHIoHXhi", "vSDNqzgPraGdKUDFEsDRDgDKKhRepqXmCFQqUPAKFELdMItokm", "bLyvjeWWnbOSoCNgfCbDDnrNkjevzMUjXqBGWFMEhOeBjzjjUa", "ufrgkJzixQGztMYDboVIOpaObMMJwiGJhYGVsqoooShbqN", "hRdwhUQTtZoKMYXNulBNSZgUrXnhm VmGSOByqUjKgLJYPq", "oqXBVuWroonuoHpkeVLEPgvbQJNExvCyspNJvQIilZWtWfPfle", "zQVQWJZzQdB ExMDHVBrrcIqhbUjJuwZKNmkFJwgXeWYHvxbpn", "skDWZqSDWsmiiqMtUfvwcHJvvUzpQapEfzfvLOGmIJccpscyE", "IUGCbLesSDsEDucCLRnpTMrJUxMPATvnobPKZii FzeYemY"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.45093676825E10, 1.45093676825E10, 1.4361401631E10, 1.45093676825E10, 1.45093676825E10, 1.45093676825E10, 1.45093676825E10, 1.45093676825E10, 1.420458408E10, 1.45093676825E10, 1.45093676825E10, 1.45093676825E10, 1.45093676825E10, 1.45093676825E10, 1.45093676825E10, 1.44779322595E10, 1.45093676825E10, 1.45093676825E10, 1.44652888815E10, 1.45093676825E10, 1.45093676825E10, 1.45093676825E10, 1.4161301411E10, 1.42651886615E10, 1.4148658033E10, 1.4131442257E10, 1.45093676825E10, 1.4154749753E10, 1.45093676825E10, 1.45093676825E10, 1.45093676825E10, 1.45093676825E10, 1.44103608795E10, 1.45093676825E10, 1.4128867943E10, 1.44718405395E10, 1.44951480355E10, 1.45093676825E10, 1.45093676825E10, 1.45093676825E10, 1.45093676825E10, 1.45093676825E10, 1.45093676825E10};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> duration = {121256158, 71159937, 378916669, 2194395, 137386600, 16899192, 564656849, 30166191, 30720418, 23710343, 44085191, 4310587, 6481165, 81897769, 1126165, 20666282, 93099646, 381821499, 878029506, 3571894, 81897769, 496208007, 158097488, 345232388, 499112837, 14681682, 25878138, 34292018, 8228142, 9794752};
    vector<string> user = {"mHKQuzOJDtQVmsfvEXUsdILQqcjKjSfRfeaZPeXGLJLpWBdnS", "wEIBMBPdYGDwJWOYTsoAdMMuOjdiSTLjjCtqjKBZjalHxRF", "izTPLDBWJexOOlfRbZpgrEYTzqGRKaFWdBOPXguHrvWqbw", "tcOZObeqwvZVecgmzhGiDsPczsMiyhvVKKxJKMbCFfcck", "ihQDPHwQrYyXPIqAyCIYHLLfwNMExzwoEYMBoqUvulWcg v", "tcOZObeqwvZVecgmzhGiDsPczsMiyhvVKKxJKMbCFfcck", "ihQDPHwQrYyXPIqAyCIYHLLfwNMExzwoEYMBoqUvulWcg v", "mHKQuzOJDtQVmsfvEXUsdILQqcjKjSfRfeaZPeXGLJLpWBdnS", "tcOZObeqwvZVecgmzhGiDsPczsMiyhvVKKxJKMbCFfcck", "mHKQuzOJDtQVmsfvEXUsdILQqcjKjSfRfeaZPeXGLJLpWBdnS", "mHKQuzOJDtQVmsfvEXUsdILQqcjKjSfRfeaZPeXGLJLpWBdnS", "HrlibwbgUeDLNwbdaXPYgtpbp wwDHKTymiWfBGZANeyigzGU", "tcOZObeqwvZVecgmzhGiDsPczsMiyhvVKKxJKMbCFfcck", "kLEHPVbfMc nGhaYNolbLmyDFVLmDtPbNiNzcZMzQrPqMlo", "tcOZObeqwvZVecgmzhGiDsPczsMiyhvVKKxJKMbCFfcck", "wEIBMBPdYGDwJWOYTsoAdMMuOjdiSTLjjCtqjKBZjalHxRF", "wEIBMBPdYGDwJWOYTsoAdMMuOjdiSTLjjCtqjKBZjalHxRF", "ywGZlylhDdsDlSbfKmePBuwiaqgoWMNfzaftGYFjBOhvKMPX", "GICjPhfBrcSWgdtwyAZegsBBO RUiOfStCuheVYmVZhvqCMg", "HrlibwbgUeDLNwbdaXPYgtpbp wwDHKTymiWfBGZANeyigzGU", "DDkXiDnfJqZyJxCMjankpOBsdQGVwDOSJh ZMAyHrIiMToHOv", "ywGZlylhDdsDlSbfKmePBuwiaqgoWMNfzaftGYFjBOhvKMPX", "XRLFh txFWijkLTasKOuQgOIaPEKhSSaeEZAGcBxHVXCgebIE", "XRLFh txFWijkLTasKOuQgOIaPEKhSSaeEZAGcBxHVXCgebIE", "izTPLDBWJexOOlfRbZpgrEYTzqGRKaFWdBOPXguHrvWqbw", "tcOZObeqwvZVecgmzhGiDsPczsMiyhvVKKxJKMbCFfcck", "HrlibwbgUeDLNwbdaXPYgtpbp wwDHKTymiWfBGZANeyigzGU", "wEIBMBPdYGDwJWOYTsoAdMMuOjdiSTLjjCtqjKBZjalHxRF", "HrlibwbgUeDLNwbdaXPYgtpbp wwDHKTymiWfBGZANeyigzGU", "tcOZObeqwvZVecgmzhGiDsPczsMiyhvVKKxJKMbCFfcck"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {5.6752803E8, 5.424799195E8, 3.4379937525E9, 1.65932612E8, 1.6491627345E9, 1.732850105E8, 1.862797859E9, 5.219830465E8, 1.801956235E8, 5.187551225E8, 5.289425465E8, 2.3149674E7, 1.68075997E8, 2.05784299E8, 1.65398497E8, 5.17233092E8, 5.53449774E8, 3.4394461675E9, 3.687550171E9, 2.27803275E7, 2.05784299E8, 3.4966394215E9, 1.056831516E9, 1.150398966E9, 3.4980918365E9, 1.721762555E8, 3.39334495E7, 5.2404596E8, 2.51084515E7, 1.697327905E8};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> duration = {272817520, 272817520, 690566212, 272817520, 690566212, 272817520, 272817520, 962344606, 377583182, 272817520, 690566212, 690566212, 690566212, 690566212, 272817520, 962344606, 272817520, 272817520, 690566212, 272817520, 312983030, 690566212, 690566212, 272817520, 690566212, 690566212, 690566212, 272817520, 272817520, 272817520, 272817520, 272817520};
    vector<string> user = {"vKLcmPTJotCsLycIXDTfpGlcwSbFqwMNBpqGfzenGGBYTl xf", "YycCkwghAsfuXbVaUufSSCeGRccLFtkZyvwpIQipHOeNtBGH", "vsxupSHIVTw aIvEiqpiQJCyXcvmiBFaulJEvnxeEkeJsJG", "hdOnkJjlVYHbDSPkafnVUCBFVMSBXsNr PFcaqPDdOQWtrVeL", "oEQnXfMKvSJHPccTZFfNvRBsJQKD plceaBJwzTIbUfOLuTvb", "JyViwnIqzQesVfwtri dxDKtJnFkMwlvVYkTLubKIfEoxrAo", "mKpBEpcRCsmmwOaZSZoLktBKePwaMKeueWKvJmrDkVuNTltpmr", "MyjhMSnjoZIYtp ssAujRcSyFLimTRpaXbmVgnxCmknDEjD", "XfADezlgAcKknSdIdsDpTJoHoDa QJVEwavRUrfxfxNQuRNjjT", "mdoNjqhizwGwFMaHlYMkbiFOMdbDDXEYzpiMBniJKodlRoh", "QycCpDUWYtJReMFkSlxEEkQQOnPKCjlvqgSFMrmzxTnHn", "pQPSmoqLglKtNIbjxrlnLsBpqFBXvhXsnvJSSJHOHMDLAJh", "zCFJzIlvCdTCzCvPtwtVYKtKjLzXr yIOPPAvHjdYqVhmmJhr", "Yrzuoo GOQMAJElxkbBYXpBKBwAzzdgPeClItfnGkEZzTiatCL", "fkwciZobFfsCgyMZyTcKHcrRNxClhCEpsnymfNRWaXvhoCXLsq", "apxHj iChEqrNoIKcMLHKbtuLWMfquSDbFzRMbyTpjzKJCeAE", "alPnTjPIdkBvOUTjPTvBStDcdMwHgmxHTUvpfkkfrnuJiijxu", "GYopzRwHsQnbOjGdVUrtFrHq DLFzJIboCBkQkDnOvZOvXgbi", "ttVMeVKbDDIPVPqCXB uiuVIcOFVqADPSmZozsyPBIaRxLSvNu", "GeekXIFnTifjubWrR zexEQfsiVolSHlpaQQksbmYnlncu", "XfADezlgAcKknSdIdsDpTJoHoDa QJVEwavRUrfxfxNQuRNjjT", "ZVYweJpRxf piPgNgIHcdzbyifoxzbJgMdocLsKYcAFNacWAf", "pIFjxaiMNrbEHceJbKxQBytsqOaoJLcWMyQzpAMrekBDoHt", "occuSeEogUXYKNMSKtusgWoKCYEqdQrQmZtONjpYZyStSDk", "EKqjiIiZXenkWJauftl pSOjivylkabsUKwfzJJJTmkNPSbpJZ", "dDKDrUjxWMHzFXDXkAxQIVtTCFpWTsjzdquoWeLDOrg TrFlp", "NcTy FTyBKtHZuslaqkLOQBoxUQSXoEJuSKsFyNclvRxE", "ryObPdsJsausJYNrFqmAPlTkyWPUPgXPjOhwWqDupzxBc hI", "qUgHoFefoNHwgaQFqMUhQqZ BDYvqJHeEHEjiuNgRRWtsO", "kcZeGENbchuNdkMfGthZLvMeXQBdKPZXUzuxYKvjVoUwQtHQ", "YsAkTQreBqXRnRzaKr MavjwFUYMoiuDjAlJPkWadXzBtLyu", "zYtkCsNybXNSjRjxolqCvNXvqMEqGyPKBPmFc KbRdAzW"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {2.31894892E9, 2.31894892E9, 9.199043804E9, 2.31894892E9, 9.199043804E9, 2.31894892E9, 2.31894892E9, 1.4785957985E10, 9.042552289E9, 2.31894892E9, 9.199043804E9, 9.199043804E9, 9.199043804E9, 9.199043804E9, 2.31894892E9, 1.4785957985E10, 2.31894892E9, 2.31894892E9, 9.199043804E9, 2.31894892E9, 9.010252213E9, 9.199043804E9, 9.199043804E9, 2.31894892E9, 9.199043804E9, 9.199043804E9, 9.199043804E9, 2.31894892E9, 2.31894892E9, 2.31894892E9, 2.31894892E9, 2.31894892E9};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> duration = {731971416, 731971416, 491645931, 731971416, 129419763, 731971416, 731971416, 110905722};
    vector<string> user = {"INYhGHnbqGyMvgninOGYyAYZuezNaaHueZqmGrmUYmUfsM", "dNANBkROEDPIigPBmXeLhPpEwnyvyqxXiWtJjGpXcCLoC", "aPaSNNuPfnGZeUzVCpjjkmhtPhLQSyucxoKZsxEsjj cetZb", "TbYsXWoQsMJDMpxeBvRDYoBGtsAbOOTuYrggQAHSbEOZihKMUD", "aPaSNNuPfnGZeUzVCpjjkmhtPhLQSyucxoKZsxEsjj cetZb", "QJJSJZOSRBWAWiGwbyBUSulsGjYeIjlWoAfHOvBylnQKx", "kvioRqAUCAgEBAmxxpisYcbXbPHUGAyPCCDlyNtcpkXMhyvMyR", "aPaSNNuPfnGZeUzVCpjjkmhtPhLQSyucxoKZsxEsjj cetZb"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {2.561899956E9, 2.561899956E9, 2.4417372135E9, 2.561899956E9, 2.2606241295E9, 2.561899956E9, 2.561899956E9, 2.251367109E9};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> duration = {895009576, 958125075, 895009576, 91381674, 816132966, 895009576, 958125075, 895009576, 958125075, 958125075, 958125075, 958125075, 78876610, 958125075, 895009576, 70813255, 895009576, 958125075, 895009576, 958125075, 895009576, 76823705, 452479411, 895009576, 958125075, 958125075, 895009576, 595033500, 958125075, 895009576, 131770697, 958125075, 116942891, 958125075, 887311820, 895009576, 895009576, 452479411};
    vector<string> user = {"FijsxQxoIrwaxjZhbPBQsVAXDYPtMNqGvcAEhQmwLyGXoY", "LKSWbLssXZTKwodnfmHyxPawyBYhNwpRJriUmeIFIZADR", "kqvMtyvNnzDSaBCcclIIqPJBnNueMXBOfZpHmcDseSoRRZ ph", "cpiYXCHQfkWGNhnr jZCKaFnEobqPwJOyXHuXsDeGHVmOFz", "DRYtNhlEgFDqfazVMjPLdxldlaaIQMmgMVZGpr NKnmxZfJYe", "yIrRmvGemOeMXoRMbgCEfXvNOIiNWiAApBuMKMFLZPJFK", "CQktYElTkAIQdgtlfeRqrMdZFUPbbPPOmyDWfGpqvLWit", "ZRlkaEsnnxsyTbUtffKlewjFJsVmXbeDGlnfhouUQuBOkp", "SNPurNSCVyQBQdWQJkYWtHaBSuL AJJUtzeyXYyKSPOAs", "UQfrVHADKHHPTwwgFYDrlLDIelHwScFYttNqpagJeDBveK", "BgXmUSCCLKRwJwcCOQrovEHzxygNSkbyHnMELuDYBNTKPkVes", "NvewtbIhpdSfjGMjyvA aWHmuDNAZUPiwOdcHioOjDPIjXjJ", "DRYtNhlEgFDqfazVMjPLdxldlaaIQMmgMVZGpr NKnmxZfJYe", "xCnrMDyPrVzEcjHelJuWOhujgKvptfwqMotEXCKMlo hM", "tEMEcDJIujXhsYjOlliIChnquwoirdaSPSIzTneAlRFTfTYt", "NYtFzRiOUNbUwqSXBscvXHSWlHaHULpfSSyZNgKdaZFzeaRAW", "ODqiSVPTuiAKVCZJsU JHAMyXLeZirWKtDFlbcFOpqTAGf", "xVovovMgmppsQLWqE zpfpBLhgbvlXKqWSShcaLXvOxDgYSZr", "Ygy NwqYfRJgPzxoNmmlaRaAAbctRVBJYmKysettySQzpr", "IsXULamyZwmeKkfQjorqHsUDBZloTmFhmyDYdauhLSqcRZFL", "bsAFmrOUzDMryCiPBqxbfaatcOYzFTqDxSaPwHebFeRDU", "cpiYXCHQfkWGNhnr jZCKaFnEobqPwJOyXHuXsDeGHVmOFz", "fFCvhAIlQFZxtlJfNi iKukvolgqukSnSNTNGsImKKNHsuG", "CflYNfxSzUWMhtjTQiqhmQqCJHlFPPpuyZVqZTawM ZBFyJYiA", "VaFHhSnoOgxEvfOaXYmLWgHCGLDtDeyHDyxgQdBqPkadUG", "tMbYHJgIfqEhiZbEGtyRftcddMKYobzOFX MXCzdtVshipghCe", "wKqBWaxrIXkCJmjGMkNXPoCLIFlMRThCkZLpkWgpzLOQtvt", "cpiYXCHQfkWGNhnr jZCKaFnEobqPwJOyXHuXsDeGHVmOFz", "sGSaHtAlFgadmEjavHeBewbvCMAxLoTGBLXrKWNZPfzgye", "TGQ weKPzDRPkJhYGzswhtCQiEHlIvmEPbCONVqEAuWeSS", "cpiYXCHQfkWGNhnr jZCKaFnEobqPwJOyXHuXsDeGHVmOFz", "CGnrvRNHCYuOcfETQSV sXVHJvsGIxAClwggJATHIWgqn", "twbXnFGMXzozCUrdIkfVpXFDCDtZMuhhtTRuIodkjazuV", "ALfRumqeSiGfpspBiIpqliCYQPWjuMMPAcsVXfNKFkhxdOTT", "NYtFzRiOUNbUwqSXBscvXHSWlHaHULpfSSyZNgKdaZFzeaRAW", "wWBcViwkJUctsxJABmHeVdCYdmNMzuAkTdKCiTEVWtUVQV", "ayhbPYtXhiufrIpIaQIYnc OQiIzjPNORQqLhPnrXWXotc", "ePZgNkrJxPixqn OCxJkIQktRIecqPrjohTyIUIxPbcxQDspt"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {8.181978321E9, 2.2112045953E10, 8.181978321E9, 7.78016437E9, 8.142540016E9, 8.181978321E9, 2.2112045953E10, 8.181978321E9, 2.2112045953E10, 2.2112045953E10, 2.2112045953E10, 2.2112045953E10, 7.773911838E9, 2.2112045953E10, 8.181978321E9, 2.1668390043E10, 8.181978321E9, 2.2112045953E10, 8.181978321E9, 2.2112045953E10, 8.181978321E9, 7.7728853855E9, 7.956620075E8, 8.181978321E9, 2.2112045953E10, 2.2112045953E10, 8.181978321E9, 8.031990283E9, 2.2112045953E10, 8.181978321E9, 7.8003588815E9, 2.2112045953E10, 1.16942891E8, 2.2112045953E10, 2.20766393255E10, 8.181978321E9, 8.181978321E9, 7.956620075E8};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> duration = {113413042, 37439394, 16275937, 13023854, 82763276, 42411565, 387019714, 10667719, 11823133, 617017009, 477609956, 28420286, 106221985, 62148617, 142644931, 1376143, 152288, 225017350, 46563253, 761490845, 9796758, 12666422, 35679168, 41341618, 228554850, 506334978, 148453599, 409300777, 69699034, 617017009};
    vector<string> user = {"LTZGdaHIZqznLZVAFuwfhtgyeNWpHBJgZCamMoVJfwlzh", "LTZGdaHIZqznLZVAFuwfhtgyeNWpHBJgZCamMoVJfwlzh", "LTZGdaHIZqznLZVAFuwfhtgyeNWpHBJgZCamMoVJfwlzh", "LTZGdaHIZqznLZVAFuwfhtgyeNWpHBJgZCamMoVJfwlzh", "QTMxVJrtjnTnbjfWdXlGiHQzjjudGvajopGMfGEMJmtaxTBrBb", "LTZGdaHIZqznLZVAFuwfhtgyeNWpHBJgZCamMoVJfwlzh", "eNwYFQPPUBvuFsXTLDRQUAPYANKYbgghnPcmxaoSlxAiEkH", "LTZGdaHIZqznLZVAFuwfhtgyeNWpHBJgZCamMoVJfwlzh", "LTZGdaHIZqznLZVAFuwfhtgyeNWpHBJgZCamMoVJfwlzh", "qVOzgfaTwoDUvKcOnYYNIhvtLqJxraPkUETmeUYXcZmFzIf", "eNwYFQPPUBvuFsXTLDRQUAPYANKYbgghnPcmxaoSlxAiEkH", "LTZGdaHIZqznLZVAFuwfhtgyeNWpHBJgZCamMoVJfwlzh", "LgJGrbtKWsWFqlNePoQlLZcyOizDxFDvzrmohnJsAyiNdSCLGB", "LTZGdaHIZqznLZVAFuwfhtgyeNWpHBJgZCamMoVJfwlzh", "EStLgNHkvcFFOSYhRUfdRCaPTyzHwDZjwiPePWkJm Fmg", "LTZGdaHIZqznLZVAFuwfhtgyeNWpHBJgZCamMoVJfwlzh", "LTZGdaHIZqznLZVAFuwfhtgyeNWpHBJgZCamMoVJfwlzh", "EStLgNHkvcFFOSYhRUfdRCaPTyzHwDZjwiPePWkJm Fmg", "QTMxVJrtjnTnbjfWdXlGiHQzjjudGvajopGMfGEMJmtaxTBrBb", "eNwYFQPPUBvuFsXTLDRQUAPYANKYbgghnPcmxaoSlxAiEkH", "LTZGdaHIZqznLZVAFuwfhtgyeNWpHBJgZCamMoVJfwlzh", "LTZGdaHIZqznLZVAFuwfhtgyeNWpHBJgZCamMoVJfwlzh", "LTZGdaHIZqznLZVAFuwfhtgyeNWpHBJgZCamMoVJfwlzh", "LTZGdaHIZqznLZVAFuwfhtgyeNWpHBJgZCamMoVJfwlzh", "QTMxVJrtjnTnbjfWdXlGiHQzjjudGvajopGMfGEMJmtaxTBrBb", "oWItIDFfAszTWsGYxYNbzPxfgqCBBlrEzIYXsQyPNZrkxyJ", "QTMxVJrtjnTnbjfWdXlGiHQzjjudGvajopGMfGEMJmtaxTBrBb", "LgJGrbtKWsWFqlNePoQlLZcyOizDxFDvzrmohnJsAyiNdSCLGB", "LTZGdaHIZqznLZVAFuwfhtgyeNWpHBJgZCamMoVJfwlzh", "qzDXGPuuSqTIpnRqbUgfxtKmZhfmFlSxMmMIcNxV yDLizGOe"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.183871269E9, 1.145884445E9, 1.1353027165E9, 1.133676675E9, 1.168546386E9, 1.1483705305E9, 4.6427941095E9, 1.1324986075E9, 1.1330763145E9, 3.3277154905E9, 4.6880892305E9, 1.141374891E9, 2.1975395885E9, 1.1582390565E9, 2.55153606E8, 1.1278528195E9, 1.127240892E9, 2.963398155E8, 1.1504463745E9, 4.830029675E9, 1.132063127E9, 1.133497959E9, 1.145004332E9, 1.147835557E9, 1.241442173E9, 1.380332237E9, 1.2013915475E9, 2.3490789845E9, 1.162014265E9, 3.3277154905E9};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> duration = {187452604, 609138851, 289662650, 69337467, 319921232, 29988087, 192988, 34310458, 554851998, 238721897, 289662650, 859497825, 464804359, 289662650, 211067008, 94592522, 159037988, 156332386, 122850015, 74838958, 3153141, 436534846, 106257159, 319854508, 319921232, 319921232, 436534846, 319921232, 319921232, 283781791, 554851998, 847860748, 859304837, 10994352, 344121808, 436534846, 289662650, 847860748, 289662650, 289662650, 554851998, 172411139, 271070207, 554851998, 859497825};
    vector<string> user = {"LzvoIJwBZiAeEjnxusBRCRnjlZhDFDYhpkdvHocnniTqkdL", "UCxrIhuegHrUteTOVoxIHLJjInZHjVgouhtlspBwvKATgUYakt", "lmCkLLDvvkEOwwzfdTfPiEPstyhneamtmaxbEYdqenDJhu", "YwGnEZeVTFLyxjJpfwKZTIsANuIADvwHyquzDWwVkebAETWn", "VhVwqIlVkaBhgaiVnorwIaKgxvhHfBDYKIjWKiSgpTnYUip", "YwGnEZeVTFLyxjJpfwKZTIsANuIADvwHyquzDWwVkebAETWn", "jCUWbhEdNDUJvztKvPVQaKrZgdgzFPZGUrRXlZQ TVrwIzoEJH", "QUAEWQDclSdZvsgxBcIjHOjtPcrETCqbRdImQUpoddpoqfKC", "BQwalXrogKN SwOgoVjToxGmWwUVMiGoEIBOFDfBYHqSakev", "UCxrIhuegHrUteTOVoxIHLJjInZHjVgouhtlspBwvKATgUYakt", "eivNozCPeazHHdpNQZlRMalzsnKujMbCzCGCYPpjevMlSlqVJ", "EvtborjBQSdbLjNjOWbRxTMCBUqRUrwyBMwhx zObhhXAeEouc", "qlUviFHGjAwbfwgScEGvfNCDluWx jkLzZImstUnpdejJUGU", "KsKfciXCcSjeQgRSWMOMpuEIzqBYwWRPFYkHHfsmIuyG sJ", "LzvoIJwBZiAeEjnxusBRCRnjlZhDFDYhpkdvHocnniTqkdL", "YwGnEZeVTFLyxjJpfwKZTIsANuIADvwHyquzDWwVkebAETWn", "QUAEWQDclSdZvsgxBcIjHOjtPcrETCqbRdImQUpoddpoqfKC", "LzvoIJwBZiAeEjnxusBRCRnjlZhDFDYhpkdvHocnniTqkdL", "YwGnEZeVTFLyxjJpfwKZTIsANuIADvwHyquzDWwVkebAETWn", "qlUviFHGjAwbfwgScEGvfNCDluWx jkLzZImstUnpdejJUGU", "YwGnEZeVTFLyxjJpfwKZTIsANuIADvwHyquzDWwVkebAETWn", "vJyqtpUphapSdMtUoghqWOEdoPZdEUUNEOqWUQOXNYpoAtf", "wRMFfKWtiZGgWDaJFfpTMPAgPYeYZTCQadCMkTTpFeUGV", "qlUviFHGjAwbfwgScEGvfNCDluWx jkLzZImstUnpdejJUGU", "ycZFbBFjsZyULujVVUvBtNbJO MrRJdzkLCcteOdBBTVT", "xOEljMJpgGNmnKiOOLZrpaZjFiTylGphWwgzElbJXBzbbarM", "reAOwcOIhzAEZVDFDilNosXySbJDfduRLZdQyODUMFiPfl", "gnObtSKRTBWXTPSeapUhwjZlhWDGSmuHGDQWgdjgUiXytZy", "qeJjmpGYYkmVUVBnsuzzJyN UAQrMNGacMKUMhNwFWlLX", "yiafaYVGUqrEtfMSDpvKXVJgzpUjhfOdRNPfpuyDjbvegUlNv", "mGxtbRPuLgNhUaretpRseeRTOwZbfJArlPzNfaxpdmhUG", "AUIlvucdwlMsj CZOLxPZtRneSOkRkhuuQpjXNHlwtrgjx", "jCUWbhEdNDUJvztKvPVQaKrZgdgzFPZGUrRXlZQ TVrwIzoEJH", "wRMFfKWtiZGgWDaJFfpTMPAgPYeYZTCQadCMkTTpFeUGV", "QUAEWQDclSdZvsgxBcIjHOjtPcrETCqbRdImQUpoddpoqfKC", "SlypIfwFgxivAkuHO PhUltwZSmWxmCVDcSgaBOiYmRyJ", "tsQvzCLsdBGWMHTRVrsFqNNSREpsRKbNEUVoBZfGKdORGrGOX", "IJJswgFbhdrEKtMTsoGiCmwYwxKBnJXNNTTiEIohyWW quZS", "eLBUtsmZgzFvBoGKrNRGGtRBxw JcPFRZYbzTiKtPHNOCgfHl", "qWqqhcjJPXRHOgLDFPtrJIicQKWNQtrgdXSwnBAFOwghy", "CIaFERgBHYMGOQwBkUnkYfIFJaolHwpvLIKcMlDshJdBtrDTLn", "wRMFfKWtiZGgWDaJFfpTMPAgPYeYZTCQadCMkTTpFeUGV", "yiafaYVGUqrEtfMSDpvKXVJgzpUjhfOdRNPfpuyDjbvegUlNv", "wgfwmGt osHONKDTtuHyCiRwtyRKjGCRKIcvkzPfEEadHTk", "QbsVkOKcAPkJGTYPGgoVE JiTvaUaxgOKNituAOIGedKpeOkc"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {7.55252303E9, 1.06997132695E10, 1.1586506E9, 3.0220709795E9, 3.147362862E9, 3.0023962895E9, 1.338602711E10, 5.542660836E9, 7.736222727E9, 1.05145047925E10, 1.1586506E9, 1.38156795285E10, 1.36183327955E10, 1.1586506E9, 7.564330232E9, 3.034698507E9, 5.605024601E9, 7.536962921E9, 3.0488272535E9, 1.3423350095E10, 2.9889788165E9, 4.820235634E9, 1.0669478545E9, 1.354585787E10, 3.147362862E9, 3.147362862E9, 4.820235634E9, 3.147362862E9, 3.147362862E9, 7.6006876235E9, 7.736222727E9, 1.0819074218E10, 1.38155830345E10, 1.019316451E9, 5.697566511E9, 4.820235634E9, 1.1586506E9, 1.0819074218E10, 1.1586506E9, 1.1586506E9, 7.736222727E9, 1.1000248445E9, 7.5943318315E9, 7.736222727E9, 1.38156795285E10};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> duration = {464595885, 752593499, 451033521, 451033521, 215618182, 464595885, 464595885, 451033521, 233003389, 132126475, 464595885, 451033521, 451033521, 129259328, 129874022, 38635023, 464595885, 752593499, 40703054, 451033521, 11059801, 464595885, 451033521, 318907046, 464595885, 464595885, 425665558, 451033521, 464595885, 752593499, 752593499, 464595885, 233003389, 412833030, 233003389, 752593499, 623334171, 233003389, 17385207, 38930327, 451033521, 233003389, 233003389, 91238999, 464595885, 464595885, 464595885, 464595885};
    vector<string> user = {"ubIUezngNpahYsDNTFtFipAvqQdzfbTYvvlPOwFZWdRlNWzCWx", "gBnTVNtBZecrSVwJfNcHvNnKUlxrsYKxgxQFeyGZdXKXFJ", "BAzKBTnGXfIpOmcUPTaiIQPECXUrphgOctCPEOJlucoigvo", "QpyMwAiJ JQIhUgBWqKudrWXtskqNqzBjXLDXFtNypZVxQZJQ", "pBsHoPljfGQTvHLZsYLhJRixHxSmdhvRsmfIObdbFHMGz", "eJW mdHAmVLTJajcUjXGQcNprSeONilTykzroKfQMKjHSvIsRS", "EMmLhMQkUTDzFOgUZIhrRfwIGWOfOtyCriCxWWxCFigwp", "WytNrtiijETAAEGboJkjmeDKtUbMRmJlDuodguzDtLLQo", "oht ASgVjxsfygrVArdagzjGuWwqwmUEIfZuFZSxybaRR", "b GkmFbzYIKgdOiAsUcUukiNhwsYZQdGrFOYBDTKTtGlJaz", "gsioxHYFxpiFwDHrOyup wBjSaskZlDagNtniFgFQnfhDN", "JXBVRvtRSSRpJIVwTpznQlnvYwfg QERikLHUasAGrEuyQVX", "BHpKLWIfOzowepeADviiiRnFCbDgcHbbUesIjHxOIGOYgwe", "RAliKjSapkFVdWtYjPHksHuFwVq pxOYCwqqCJHCunNyBjKHRO", "KpnqfMfmGmSRVx ZwVkBTAUNGFPdbAHdiBTIfCxKxxtgh", "MuCMGxYjxfZsEZHenmEQDiDKRNskIFUNNLIDMuiSFFnGPDdXu", "ENnswwEkwhAGWskmYnpdLvAypUCFOiljxHOjbWcGacSVvn", "mNyuhBfvOeQCZfhxuKvJuyPcRgSJAApsjTGIdWOtWrkpghp", "zrzOrHwOiQFuXClDobSFstLQhbPwZvZZcsNbgDuhvmsRdhp", "oaxPlszzsRPjIBJqZgOXLfctrHRH pfjYlCspyNLeLjiarqkp", "zrzOrHwOiQFuXClDobSFstLQhbPwZvZZcsNbgDuhvmsRdhp", "prEQWGtpPhqurGplHifWkZNCzRfoUnolpTRGSUeiQWghoYcref", "pcovPSrbBfFuWzmNPsDcaUfEpfAcUPoxCLXuwxNbfAskzm", "b GkmFbzYIKgdOiAsUcUukiNhwsYZQdGrFOYBDTKTtGlJaz", "ONCgnKKSeNcrTaDqhcyMmUvdyBz oTZexguExTsjPHPTx", "zueFfMNuhiLEdVDOziTLKUxCMguLaTzbkUjWVUr dQWCOwEhH", "NdlPRhiPhwCRyDrATJYeKopQTDAjnrXSSfufTVKfDqQVCkTURK", "JlVOFGsjRozXEPmmnLQRHIIDRtOHIDSq RQHYvDTEZBbXHBOjn", "yqAgnbP wJOwYcDQStsVCWghQnJAzOJydiUenqAIgyong", "MfhF juHWJqkBiRhMrLNMGHepXGivfYlEKPMScOJybaISXyjD", "OWTNq NLLRsXMRfyRmJccasykKbuFvmGNtmJZneLEDYNh", "pKfqBMKpsMNOdbgP YaVwgCdYejtOfPssYrcEZVqhDHSGwSu", "vFMLZrDvCahgfyXjAYClJfUk cCRuVnJxsNfLIoqJBMspupg", "zrzOrHwOiQFuXClDobSFstLQhbPwZvZZcsNbgDuhvmsRdhp", "zasUWhdmveqrbazlLSjgZI AvvyHOwmUMPySURTegmRRHh", "ZORssiFODYRPZDmuRbAOdeLcDKIXkWQh GgdZGVjwpyBTV", "RAliKjSapkFVdWtYjPHksHuFwVq pxOYCwqqCJHCunNyBjKHRO", "DXfgtXgWyncQSYZqmumEPaOTx RFpkNFnPvZbZZAqtMGnmHL", "pBsHoPljfGQTvHLZsYLhJRixHxSmdhvRsmfIObdbFHMGz", "NdlPRhiPhwCRyDrATJYeKopQTDAjnrXSSfufTVKfDqQVCkTURK", "VsxOXbWBENgFazYOYDTMHXAqkSGutmXsDm woUzkNmuYPy", "NmUGYYcWoptKZRQZSmWpMpOajhxnXqRLXDXjadenwPdwIFzy", "ypKeXOvZZahvMFKkGNNGZIhJwaEPHTFANhfznDHCXvyRNWD", "MuCMGxYjxfZsEZHenmEQDiDKRNskIFUNNLIDMuiSFFnGPDdXu", "lqiJAgpMJ gascdbdHRrdtdAXRrgfTubDcmYQfDFwvZOf", "rHQcUXJosfTGNnJZBdmkOgIAjSyLxnzxhnJBeGrdDQgQpDnA", "yLjOHVhUhQyBTolJkadcnrlrTvS nwsgyRPImivPoaUkuG", "xcJxHaPAMckwmIuzIrTMFUDKHYmHaQCRqUsDFRplIKAlcOCPm"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.03501719995E10, 1.64687183835E10, 4.3714561325E9, 4.3714561325E9, 1.1830689965E9, 1.03501719995E10, 1.03501719995E10, 4.3714561325E9, 1.1917616E9, 4.2120026095E9, 1.03501719995E10, 4.3714561325E9, 4.3714561325E9, 1.6157051298E10, 1.94811033E8, 1.491915335E8, 1.03501719995E10, 1.64687183835E10, 1.0138225584E10, 4.3714561325E9, 1.01234039575E10, 1.03501719995E10, 4.3714561325E9, 4.305392895E9, 1.03501719995E10, 1.03501719995E10, 1.0330706836E10, 4.3714561325E9, 1.03501719995E10, 1.64687183835E10, 1.64687183835E10, 1.03501719995E10, 1.1917616E9, 1.0324290572E10, 1.1917616E9, 1.64687183835E10, 1.64040887195E10, 1.1917616E9, 1.083952509E9, 1.01373392205E10, 4.3714561325E9, 1.1917616E9, 1.1917616E9, 1.754935215E8, 1.03501719995E10, 1.03501719995E10, 1.03501719995E10, 1.03501719995E10};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> duration = {934081021, 652943846, 594400443, 574793340, 129006658, 934081021, 574793340, 335954673, 934081021, 12555337, 172519264, 335954673, 172519264, 652943846, 249597654, 172519264, 172519264, 4304792, 934081021, 172519264, 335954673, 335954673, 652943846, 172519264, 652943846, 335954673, 934081021, 323399336, 574793340, 429394106, 172519264, 652943846, 574793340, 574793340, 504686915, 652943846, 335954673, 335954673, 58543403, 652943846, 934081021, 50110729, 652943846, 172519264, 934081021, 574793340};
    vector<string> user = {"ftyElV aLjMZGXHMEONhrcxLISzTNUYPSKFwaqgnMIRjQYJG", "DEFriIGwkwsVJFacptnK HgiuyqJLLCWnmqbrzFnXJTBxarHXD", "bCMNIIYFzixyYBkZAlXETKazIiHQGsmpwtZcvaoDrqNsPg", "vnDsuymX FoyvbHLujfodtnYlsbuIHgBKuHvvKoTrCmTBPd", "lsSiVrlTMqBTKVkIB UdkCOCRkhzmsjMgAHAaBcwjQcQyQyBf", "QbioLbYNqyrEhYufQUMbEymOetSgWtIfQAOyFuNpCCoFvnEsLf", "HecwuKeZlYThjPRwHmiKbOPBkGhwQgBqDQazITKGIHLEjas", "XejMekmZkaBKthNdBNHbCbBRCavnQmqUZlMUJVtEYMePmJloLK", "FUXNBuFhlVkVLYXIBKfqPzCCtjWzAVGmjBKfdVfwPCmkcc", "woRDXtENVHecnsRqAlRmXBindpQBoTaGRPUBgbupSoBsonDw", "feiLxOkBBDhMMZfePOoogFRGcTGk WpkADJFWVscKMZKiliFGd", "xaPYWIPTAwHOnZdIDpkscAnwnUbzSMzCViwYfjSOsOzFT", "om CZZSOjgRVzAwbWZUCJcKcOcmyIfFQlxYFNcsUFSrlqrx", "BGcysdJEvlYhFesfaUHIzFBwqxFsquBwbxcLjYyjzqqOKLM", "fzFiMLTwOhnalCZxBliNeIEHgwhVCgpqyaSPcJNRSyBAQiHB", "wkBZKQSOvCzJhweReVCb SlYmkCAlqVRBuRVQIbHzsKBEwF", "tApieUwyPinERZEbcqYqPCmKAttwZ KABqllKXmZuONEkrs", "c JxRUFlDEKqoKGbaxoipvYHSRqjsRPxjCcVkCBlmTHRoIMP", "AesHb sqHNkvitMmkZnDOYamzFMHvuLrzVYtOWuTWCkaHiAr", "QuGxmSQNhpNskwVZazSsGZcmgNhzczTtbqkYLAYtNQEBP", "m MrdyrOWVdstSsExoQVvlFLUmVkOAiGDupcNcCdKOuSSajp", "PGwaFLeKfgOrzSMnCfnhJOwjAbnUqWqDSVsGDbyfVQaRP", "HwFEEgPuHuKRvqRrclisrXzhyDUDlDNRWPdzfxRVhmaDhKNh", "WcJgmbEjEjCsZKjpSuOfHgidjMZC bJWrcNWGPUsInXhpWfyg", "HwUvpDYQxtwIBeLKdFfTURsJUGkvIrEJNqOcPprfHMUHjZE", "TxEPBIqljwWiLsWPjLiiZZlRgZDOJKpgXoPXjOHzLdohQof", "bQge hDyRwSpbFkNJmjeiIBWHXSaKGjYYZVhHxizAfWKStH", "woRDXtENVHecnsRqAlRmXBindpQBoTaGRPUBgbupSoBsonDw", "baEMxrYvXsiYktVorPbOamcCPp QrjFDCJrErAvEcpHTf", "fwRpMGlYzYchkDAmSYycLMLJcVkRXlFXjTIrOvHAlFOAOU", "YtLrIHnCiyPlQmeipRezFJXemgFeLLc MahKWJFCxVqihxoO", "NotadYJXOBRYcABvZsFGzxJQmAyMuUVVuHzTfJjRrhFVsVkVA", "HOyHlJPUDvcCFqjZEHeLGOrcdkBPWVqgbFJPS NlAuDOBef", "WuSCYFBLAlFXTdiFpufCYvDHKuYaqIDbVKuvYBMprtFhl", "fwRpMGlYzYchkDAmSYycLMLJcVkRXlFXjTIrOvHAlFOAOU", "aUKCPDvloDNqeDdiSViqFlFajjQOFYlqEoIrqbnTVUODB BP", "ZqVzbuKBnuzn BOOCYtRPmLjOQCVNUGgoVTgbVdZHMYZytx", "OSZEXEnVitJQuKmzmccgPVgSeMNaJGreeTYnKydJvXwQvcvA", "bCMNIIYFzixyYBkZAlXETKazIiHQGsmpwtZcvaoDrqNsPg", "IKDWbIlPorESaZmJyPpmlSmdBxwlvhFexySKPAeHDzYZx", "pyoKyIyrPxvmRXzYbTIyWFwyjwFRkAuMvLCFdGbsGsudRgp", "c JxRUFlDEKqoKGbaxoipvYHSRqjsRPxjCcVkCBlmTHRoIMP", "dzjmueGIABsAjlioBkiHiQBXKCkmsVJdJhTxNzhgnGnGjEZML", "ZzcTNIHiceOkytNOLKhLuqDFGZQBKphtFdTWoBQhCHiOBTRfy", "rSgqzwy CsCMakZRzplXLwPVLCchjEdknVmXsCYlTMFVvHFQi", "kOAWmIzDNdIkGWGngIRoVVjnSP VWZlwQiThdMynIrKAynjX"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.80294305775E10, 1.1214290599E10, 1.11850188975E10, 6.512588019E9, 1.83422179E8, 1.80294305775E10, 6.512588019E9, 3.3249699735E9, 1.80294305775E10, 3.1632703055E9, 9.59758867E8, 3.3249699735E9, 9.59758867E8, 1.1214290599E10, 1.813173945E9, 9.59758867E8, 9.59758867E8, 2.93601565E7, 1.80294305775E10, 9.59758867E8, 3.3249699735E9, 3.3249699735E9, 1.1214290599E10, 9.59758867E8, 1.1214290599E10, 3.3249699735E9, 1.80294305775E10, 3.318692305E9, 6.512588019E9, 1.777708712E10, 9.59758867E8, 1.1214290599E10, 6.512588019E9, 6.512588019E9, 1.78147335245E10, 1.1214290599E10, 3.3249699735E9, 3.3249699735E9, 1.09170903775E10, 1.1214290599E10, 1.80294305775E10, 5.2263125E7, 1.1214290599E10, 9.59758867E8, 1.80294305775E10, 6.512588019E9};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> duration = {269254175, 5985048, 99714554, 527986112, 29736776, 61501902, 108046046, 15638970, 25539971, 131260915, 5652701, 243894767, 60145437, 74823529, 4757825, 360657959, 685727267, 25213470, 6891924, 548206094, 74388207, 115585921, 196291884, 157902953, 309830128, 461998512, 704924143, 192152663, 66099926, 13211556, 162254739, 419361062, 136822827, 229553888, 43651625, 39659425, 46652300, 21327991, 27058679, 62742373, 2150533};
    vector<string> user = {"knPheldpMZRkgSVUQ BkwHhmYCdcvehEElErqrHHGhloA", "cKSukjALQmbEejyreNrHzJGFFKsoWDCCKds TmheoXqNrF", "cKSukjALQmbEejyreNrHzJGFFKsoWDCCKds TmheoXqNrF", "KKWgreCLhQIQlHSObPPuqOqDF wzqcHzlSzOqmEPTmRDCiG", "NOwoqxJTZlqOHULExXaDJXFWKrxCVXgpzmLdLGmaMmuBA", "cKSukjALQmbEejyreNrHzJGFFKsoWDCCKds TmheoXqNrF", "Y AOfnoweZkLjiZsiOtMlBDvMyrTZXrgKQtnqeFgIdSZcrW", "NOwoqxJTZlqOHULExXaDJXFWKrxCVXgpzmLdLGmaMmuBA", "NOwoqxJTZlqOHULExXaDJXFWKrxCVXgpzmLdLGmaMmuBA", "knPheldpMZRkgSVUQ BkwHhmYCdcvehEElErqrHHGhloA", "NOwoqxJTZlqOHULExXaDJXFWKrxCVXgpzmLdLGmaMmuBA", "OvTFboUPfmZWkiudJHeslQaaptZ cRcMlIWDMFOxRnroPfqq", "cKSukjALQmbEejyreNrHzJGFFKsoWDCCKds TmheoXqNrF", "cKSukjALQmbEejyreNrHzJGFFKsoWDCCKds TmheoXqNrF", "PyvcaAevCohHZVGJueLKYpSkzhbUmMVLKLUupIKjpZjigtyQ", "cKSukjALQmbEejyreNrHzJGFFKsoWDCCKds TmheoXqNrF", "PyvcaAevCohHZVGJueLKYpSkzhbUmMVLKLUupIKjpZjigtyQ", "NOwoqxJTZlqOHULExXaDJXFWKrxCVXgpzmLdLGmaMmuBA", "NOwoqxJTZlqOHULExXaDJXFWKrxCVXgpzmLdLGmaMmuBA", "PyvcaAevCohHZVGJueLKYpSkzhbUmMVLKLUupIKjpZjigtyQ", "knPheldpMZRkgSVUQ BkwHhmYCdcvehEElErqrHHGhloA", "knPheldpMZRkgSVUQ BkwHhmYCdcvehEElErqrHHGhloA", "knPheldpMZRkgSVUQ BkwHhmYCdcvehEElErqrHHGhloA", "cKSukjALQmbEejyreNrHzJGFFKsoWDCCKds TmheoXqNrF", "knPheldpMZRkgSVUQ BkwHhmYCdcvehEElErqrHHGhloA", "jrkvXPE xHzjrUckJBzwtHvzIdRIRsXmcobkBSpSiQrmQNbOU", "KKWgreCLhQIQlHSObPPuqOqDF wzqcHzlSzOqmEPTmRDCiG", "knPheldpMZRkgSVUQ BkwHhmYCdcvehEElErqrHHGhloA", "NOwoqxJTZlqOHULExXaDJXFWKrxCVXgpzmLdLGmaMmuBA", "OvTFboUPfmZWkiudJHeslQaaptZ cRcMlIWDMFOxRnroPfqq", "OvTFboUPfmZWkiudJHeslQaaptZ cRcMlIWDMFOxRnroPfqq", "iBCGiIEkqEEJgRDRMRQllyTfVwpeUQruheSOChCtkWtItHL", "cKSukjALQmbEejyreNrHzJGFFKsoWDCCKds TmheoXqNrF", "cKSukjALQmbEejyreNrHzJGFFKsoWDCCKds TmheoXqNrF", "cKSukjALQmbEejyreNrHzJGFFKsoWDCCKds TmheoXqNrF", "NOwoqxJTZlqOHULExXaDJXFWKrxCVXgpzmLdLGmaMmuBA", "jrkvXPE xHzjrUckJBzwtHvzIdRIRsXmcobkBSpSiQrmQNbOU", "knPheldpMZRkgSVUQ BkwHhmYCdcvehEElErqrHHGhloA", "NOwoqxJTZlqOHULExXaDJXFWKrxCVXgpzmLdLGmaMmuBA", "Y AOfnoweZkLjiZsiOtMlBDvMyrTZXrgKQtnqeFgIdSZcrW", "cKSukjALQmbEejyreNrHzJGFFKsoWDCCKds TmheoXqNrF"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {6.2538379225E9, 2.995555976E9, 3.042420729E9, 3.256556508E9, 3.06402728E8, 3.023314403E9, 1.394172325E8, 2.99353825E8, 3.043043255E8, 6.1848412925E9, 2.943606905E8, 9.535887065E8, 3.0226361705E9, 3.0299752165E9, 4.8471982125E9, 3.1728924315E9, 5.1876829335E9, 3.04141075E8, 2.94980302E8, 5.118922347E9, 6.1564049385E9, 6.1770037955E9, 6.217356777E9, 3.0715149285E9, 6.274125899E9, 1.736327047E9, 3.3450255235E9, 6.2152871665E9, 3.24584303E8, 8.38247101E8, 9.127686925E8, 1.041321854E9, 3.0609748655E9, 3.107340396E9, 3.0143892645E9, 3.113640525E8, 1.528653941E9, 6.1298748305E9, 3.050636795E8, 1.16765396E8, 2.9936387185E9};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> duration = {361386332, 285376147, 285376147, 285376147, 156152691, 698923260, 587503966, 156152691, 698923260, 587503966, 463863588, 285376147, 770366515, 587503966, 587503966, 156152691, 156152691, 285376147, 733793917, 285376147, 361386332, 587503966, 770366515, 770366515, 587503966, 733793917};
    vector<string> user = {"Jb BdyIndTisRkOtONftdGewSWDDBVuGcppKbGgbEJNFBBjd", "dTmL TPxZFSFrljObFsksXtIpsTWsyNqhbGzLkIlTxkOU", "xJpDFxy pQvowDOWWgshcgqMsoGmMBLrZUNjZoJLIyPoI", "JlbVDmxdDgcwsrRvTFekxSIZEsdUUDctIWiEnOLfCNkfXcW", "wLqZhefKHYLEvORfOCYmZAhEYKWsGCIKrjBcxmoFrRjJai", "xWiMvknYUXrWYMkXLwyWkrYfhxrWmOjyQSf StYVMUsnHULePO", "hMkSmVjzioipsHovUhhROzgqgzSyNyELnLnavvocyTOk m", "YozqmYnslZcqAkVXEdXItrrVyutlRsRDjJPCzKPMqXzHXPAKpy", "LFGNTdplJcpNLfaJwZBweGVDMtfTovpgbGKyETuYTqdEl", "Tqvyq RPaxOQuAEYkmCWylCHRSRTalVHatHpFKHhybPWaDnS", "JCaFktvtNrLkJbQETjKizfNEQyAxtXIpmEyaeOiYgKmlL", "niBLEnIOhaatIBIwyiKDHGjjYmPoghNqdFrTssnJQiyIxT", "goJqgluLrloNhmIoshsKQB etZoPUzkDrWMqArTTPSmLAHHwP", "hQekjvDGoYqZfRJqXAbGuWIXPyIxDCqsgnYtFJjSWpbvQjCg", "OTXwhnJpahEqLtUgPoHWph KseXXpxmtzjBCutgysLJnCqnKts", "QijbHjTzQUIQRxvrbGbTTalyLUDGVYZymhwdwpIdELZxn", "yEAnwrkIubjamsdWoichZlaLAGHcZIRjvJnICOfSPyNbTOW", "bcbbfBHHyZuYZGBfVJOiKdofLadSuydqeySisskghHpgDcZR", "HNWBPHlGzLOrnBRbBKscqTXOlGdsegNUrRlJCAmMhzfcG", "gAbeyhgrRNqbPIblQoXAzZGiXnfnQVlnBByLnddXjJDLMgQ", "XIXyvfZxLwZyZB BCuxNoTmLPMUjcrMXsUiefeYgSfnCxRp", "cAFRKTjUTmLwPssARWEwTrqSlJnVecpBercJvyBzGGrjDFUnV", "QpYjjbRYyRobgJTZbrqJhbvdqziDGOCUUbpmP NcVciehtT", "kYSWLqIruvQvaWgUOhRjPzKljbMjGFTaMclLHUQYxq lbIDB", "MLPqSWzyQvwOhFbIHotLA aesydHLqLZJupGdbXYmkzvEGPF", "vmncUEjQJRsIEsjssLMMDZQrceENYYpZWTamvORmsyOygv"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {2.878947144E9, 1.6234272785E9, 1.6234272785E9, 1.6234272785E9, 3.903817275E8, 8.096912584E9, 5.579767779E9, 3.903817275E8, 8.096912584E9, 5.579767779E9, 3.523503898E9, 1.6234272785E9, 1.1454695078E10, 5.579767779E9, 5.579767779E9, 3.903817275E8, 3.903817275E8, 1.6234272785E9, 9.5470650895E9, 1.6234272785E9, 2.878947144E9, 5.579767779E9, 1.1454695078E10, 1.1454695078E10, 5.579767779E9, 9.5470650895E9};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> duration = {821254329, 506764172, 124260733, 506764172, 134932620, 115657003, 821254329, 506764172, 821254329, 821254329, 331707068, 821254329, 821254329, 821254329, 821254329, 821254329, 821254329, 2849056, 371831552, 821254329, 821254329, 821254329, 310756716, 821254329, 821254329, 821254329, 175057104, 159919652, 821254329, 821254329, 129352857, 821254329, 821254329, 821254329, 821254329, 821254329, 503915116, 71746723, 690546657, 130707672, 576244469, 506764172, 346844520, 821254329, 821254329, 821254329};
    vector<string> user = {"RzVrJywQmdRIeHsNmdbQXXBgvAeBQKh OShaRHuxIgeeDxHB", "xGfXrJVsKoJzqzMTZDkVwyGFVmxiJZBZfhUSRPsKHHTlfY", "xgwoNUFEPyqIFSIoxQMFCNEfdrqDmbBkmwEddbsPHvgaIgXBs", "dnQHIFoiRZzJGZJivneSyAP mJrvMwLCHlcAYsatOsLBFMG", "JZVFVjlHahBXaERkkpGadjBNVoeekhVBPRGFjmcCYfZpvgvUL", "GCGHPoHOXRESxGyYv izqgzhNhdPrNKUCPxsWpImTbPnEAjbCo", "HiScjqzcSYYSkfDVPVbGAieWUEhIzBaPifOxx GkKtMWkPlA", "YvQxrtoyCvxyJCCOIuxcBBPgYrfps SugAcAYKRVhlfXduC", "MYTCyIlQoiezDwIUsokrwnjtmgDicNPgXewUaaGqjbGGBt", "mfAMQDMVrHfEWFZObtjbQYfTAgpmUaPDmamqgTgzDTyJu", "kaLCQDVFnBcIiJE UpvzrcPUgqhoaKUEMEZpzfZtjllhADy", "lVMvvhrKpAgCCqhCXhppQHuVYlzxSrSSedJBbUtpOVEyjr", "gPOKKdvFoblyXpmfhsfuzaWLqnLfkfHcEzDqQhx hnPGoQX", "ENUmWmkrEM TZXHHopKuxtpumGjCZbTzlKtZaIgTfebaz", "FlfEWzQgFfnVpphobEbbiCnjpFlXNmuKTfVeXzUlUqQpglHVnX", "ATkJbEMnifUugxakLrwowcdJIoDjhBWmCADfIKlaRAqYmNHwO", "POLxuyuCKnypNIJYZYLZgpcTgzoQKPBDaxIqTXlYSnglmtTJZV", "xxvvSEAjDuzHrMmhYdrWDhndRegxpdWhTdqSSZLgubDTWx", "JZVFVjlHahBXaERkkpGadjBNVoeekhVBPRGFjmcCYfZpvgvUL", "fAZzbkpGjha buLdOOGHLHXeHYpxHTVDUAaBpvtTlsJEKHPeF", "Mf aNOMOqkigHJxsskFPVKJZHuCRWYDSVcVcvQSFCEcGWoD", "OFL jkBSwDgsVJHRscupMVBEgkDIdXcwkVgxviIMnqLzlqahhI", "xgwoNUFEPyqIFSIoxQMFCNEfdrqDmbBkmwEddbsPHvgaIgXBs", "hmMJpucnLGukQwcVCZpFoLTKZJxdqnDFRIwHxpKujVRMFVGOpg", "uRkUMOyloDHbOMMNtuJvGwwnYOsYzSqCcRBsqpUExDpJfo", "TiZyhMMPLgpJiIbIZKZXvdmQjNfupJwfRWyCYixxQYOEUzghin", "kaLCQDVFnBcIiJE UpvzrcPUgqhoaKUEMEZpzfZtjllhADy", "TbkmNYjqsJzQDrcfRrQVqkzouYIKzaXLg QLtigNUFIBeWkcHB", "ofmPbB waYFluVWwVoxXauDQYFzuacVROUSkxXkveNijQB", "rlbdPaKFBVjCtYAEwffCtrqHNDgCzIqAfEjTxBPIKLLsON", "GCGHPoHOXRESxGyYv izqgzhNhdPrNKUCPxsWpImTbPnEAjbCo", "vpJer ebhwbjXFjiCpucEOvPFRXhniJoKVUxnYEgYYYgeUFluP", "LhdJYbgwtfikMfJLlSLiuZSJALkWFTLTHjXiEyVWuseMXxLu", "QDBaNHsZifTOsFOnhMoOAXpgyFClivhGfCGdMBdmWdIaASb", "jkWZwyBvIdFBgxrdWhSDeSfwhAYgbJWlAqjcdDrIyLtFv", "t NkuRVKxHcekLemerXKEmfbbugeKbNppgZFRgPcNlbVhfAW", "xxvvSEAjDuzHrMmhYdrWDhndRegxpdWhTdqSSZLgubDTWx", "xgwoNUFEPyqIFSIoxQMFCNEfdrqDmbBkmwEddbsPHvgaIgXBs", "LSBykxuoLRwZBcuqLbVmMeFURIHeeGgkFZNvqSjrGUdFzxX", "LSBykxuoLRwZBcuqLbVmMeFURIHeeGgkFZNvqSjrGUdFzxX", "GCGHPoHOXRESxGyYv izqgzhNhdPrNKUCPxsWpImTbPnEAjbCo", "wSfAHUyzvZOEWSLbBzhYdWFyBOjLMmpzCqlcbtS IjRcDPD", "TbkmNYjqsJzQDrcfRrQVqkzouYIKzaXLg QLtigNUFIBeWkcHB", "eejnsXlTGhkQJwmkdkaQfLIlLrkqJoYQQmcCCeWwfoIpFr", "qkiBsVvWbwCmywIOdOHkKZuieMrzYLlNsTbjkiFFWCDvLhrr", "HUxVwgmJEOoTZQEVrJCmfoyjZKXCuwhvnPn EFPeThWJeUVELR"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.64690653185E10, 2.53382086E9, 2.3425691405E9, 2.53382086E9, 2.347905084E9, 1.61162666555E10, 1.64690653185E10, 2.53382086E9, 1.64690653185E10, 1.64690653185E10, 2.446292308E9, 1.64690653185E10, 1.64690653185E10, 1.64690653185E10, 1.64690653185E10, 1.64690653185E10, 1.64690653185E10, 2.281863302E9, 2.46635455E9, 1.64690653185E10, 1.64690653185E10, 1.64690653185E10, 2.435817132E9, 1.64690653185E10, 1.64690653185E10, 1.64690653185E10, 2.367967326E9, 2.3603986E9, 1.64690653185E10, 1.64690653185E10, 1.61231145825E10, 1.64690653185E10, 1.64690653185E10, 1.64690653185E10, 1.64690653185E10, 1.64690653185E10, 2.532396332E9, 2.3163121355E9, 1.64037114825E10, 1.612379199E10, 1.63465603885E10, 2.53382086E9, 2.453861034E9, 1.64690653185E10, 1.64690653185E10, 1.64690653185E10};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> duration = {209512091, 854052629, 228410503, 854052629, 37354088, 78313992, 854052629, 854052629, 210566109, 854052629, 775738637, 854052629, 854052629, 854052629, 854052629, 854052629, 93783088, 854052629, 148047207, 336047117, 854052629, 216264180, 854052629, 854052629, 854052629, 854052629, 372023858, 643486520, 854052629, 644540538, 504959499, 349093130, 854052629, 276175217};
    vector<string> user = {"HIPQsevYnFVvrEVlZuI OaYozhyDHNedtLAiuaCCzvWfDdk", "RrZkwbBrbGygFblwkhWShhAEkduSLXBcIqxBrfTMWd AVeE", "bijawPzacaMKONopfqNbBzrfyHN ZYilZRSsjVxcAveOOzOO", "hmZjgtchAASDDBKVSQpSLUmeGQKKR RQTGbiFnLXBCiyBU", "bijawPzacaMKONopfqNbBzrfyHN ZYilZRSsjVxcAveOOzOO", "jObFMVzCHGCSPfzBRptMhXHHLijIGNLieaLJBlsprZvkUAY", "GoMihIvMRTNXUbFJtKimrVPMzfNtnhEVfQXwTGDKExmVDkuF", "SJAOTAJuciswUMzGkQQpvzBgFehgXAfQcTNjEtipnWeyBMJqZ", "LzuIhMliRjHijjeQmNsCZTmVGClKdSeajjeSRMOBDpOWOGteM", "RipmDCNYSqXnwORmJvBveEltpBHGtEDmJcjVQKRTUlKRNSVIjR", "jObFMVzCHGCSPfzBRptMhXHHLijIGNLieaLJBlsprZvkUAY", "BuflWzYRvXkvuBjWUUVVI kwyliWzhhPOEuLcyvJhAaDChsxcb", "EgGdsatXHYhLmLHPrpKMzcOjksznyzAjFaCqUjucZwyUj", "eKDWPglmTmFxnPtiFOpQtGpZwMhLopiyhOdPbglCuCjZQanlMD", "QlxjBrgqRnzyrvyHvszQKSeeCmCpYdZqUEfuuKuoiKWTQtFnHr", "xoKJpoqmUjMZtqBlbykMBRuJFyPDOmdoaAwlJtxGPlyfcdh", "OcOldJNizcbALwZvOuDgxLNhkrUYbYYVatDsGYbyIhFnI", "FTVHXSFJ BAOEBPmurmuRVOQvWKdihOzZSgNJtRaCBlIr", "OcOldJNizcbALwZvOuDgxLNhkrUYbYYVatDsGYbyIhFnI", "OcOldJNizcbALwZvOuDgxLNhkrUYbYYVatDsGYbyIhFnI", "QQPDNYRKKWhfeOXoCxegNaxwwnXwPCcVhCabwKtiMCcjdiPTrZ", "bijawPzacaMKONopfqNbBzrfyHN ZYilZRSsjVxcAveOOzOO", "xZBRQLPTwbxadWIixRQTjrUfqwbtJCogInARoZcepGMlIpq", "vSNDIWwxYlfKGSFR xePVbLXFOhWHWcKMyPAoexhgtQey", "zWJqfOQfhnvVBclCZ haxxHehcIXdObgHGaSlYOlxIIae", "JiaeTfmajYJp pCLoNwmwtVJcZyiNaAvCOfOUULgrYJJrmaM", "bijawPzacaMKONopfqNbBzrfyHN ZYilZRSsjVxcAveOOzOO", "LzuIhMliRjHijjeQmNsCZTmVGClKdSeajjeSRMOBDpOWOGteM", "YmjPHYjObvm RtnIUMnISLriBsWkJspBDLtnzYgfGLCSchp", "HIPQsevYnFVvrEVlZuI OaYozhyDHNedtLAiuaCCzvWfDdk", "vjXgRiARZbQfiUsnaJLnSmjhBjJvgp RiaXRoenVffjTbB", "vjXgRiARZbQfiUsnaJLnSmjhBjJvgp RiaXRoenVffjTbB", "ilLleOtdxTaUEzDESbzqT GXpyXMZvrWmSuuNOyqGQHFPVCl", "OcOldJNizcbALwZvOuDgxLNhkrUYbYYVatDsGYbyIhFnI"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.03533875935E10, 1.06756578625E10, 1.03628367995E10, 1.06756578625E10, 1.0267308592E10, 1.0287788544E10, 1.06756578625E10, 1.06756578625E10, 1.03539146025E10, 1.06756578625E10, 1.06365008665E10, 1.06756578625E10, 1.06756578625E10, 1.06756578625E10, 1.06756578625E10, 1.06756578625E10, 1.0295523092E10, 1.06756578625E10, 1.03226551515E10, 1.04166551065E10, 1.06756578625E10, 1.0356763638E10, 1.06756578625E10, 1.06756578625E10, 1.06756578625E10, 1.06756578625E10, 1.0434643477E10, 1.0570374808E10, 1.06756578625E10, 1.0570901817E10, 1.05011112975E10, 1.0423178113E10, 1.06756578625E10, 1.03867191565E10};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> duration = {286421798, 286421798, 24000014, 286421798, 286421798, 286421798, 110681641, 286421798, 286421798, 286421798, 286421798, 286421798, 286421798, 286421798, 286421798, 151740143, 236807055, 286421798, 286421798, 286421798, 286421798, 286421798, 286421798, 286421798, 286421798, 286421798, 286421798, 286421798, 286421798, 286421798, 286421798, 49614743};
    vector<string> user = {"LsaKRdMSEPkCvgcvoxExLFsxYlPajhPPQbbPY yZgmjSxEqC", "vLRMStoEfZDEsdhLpzUxLGZjPefrmoemDvxBVEZcpPpkPAIyEB", "PbKMlpKkKKkkX HCkVnugpjiUxmeRObzNsIOeEaBfvYUkq", "YaFXIriBRzStlSgLhPUXAAYHBXEzhINryJiaENkREFIuI", "VxSSSxzOTyilwYgLxoiLAQIiPPTarKXGvdGxKiBJIvaTtxU", "kKgdYNSUfXToRiwyTvfGnAisIeLWvofSvdbQnhNqRlgdN", "PbKMlpKkKKkkX HCkVnugpjiUxmeRObzNsIOeEaBfvYUkq", "dzXABvCwVdstzjnTbPefwmNopXCaSlLYHfiDgvYiOnHxk", "RmUEczndFThdhrplHZHvbqiZFlKQLXaeqAlbveJnWnZSKQdII", "KapHApzoxQgGMiyRHTZFdCXWvHsarxTENOpeRBkEujtmHRTZsD", "oRqICxEReHgVQwnjdXxPdIjerawvmSwxJKnpbymCJeGv LX", "EtOpmFRJwcGApSFGYOSGfrVuLsDbnsWjDJPNwfKiryRyVpXAPs", "UhsviLFukBLPZFudibDcDTCmHyJGwPOblCMQfeCuOekjZCv", "hKqnFzDWklmDitjmsNSqgTJGuplAVQaSMrhCZkRAaPdxB", "JkXcTHqrFcHOkkyJHfFWaAzQskxYWPDtyLCUcgaPCRrbLTjpa", "PbKMlpKkKKkkX HCkVnugpjiUxmeRObzNsIOeEaBfvYUkq", "mOWi YTEiBcTCICdbUeQUhKroknLVeUTqMKplvVRdLhRJnXDUZ", "iztSkPPgorzEMfFicqYCOzKjvDZTnKxbsRdfvnfsHOQdxIY", "GlunMoQCSuGpRUdJOyOwzClaJHkQGrtjTkp utfzAoFfMws", "vecGNPRyxYxjcizdNIKPenbebPYKWKnaC cTrjBWopQDHovl", "ERGEjQEk FRfVRyRNBNlaZjcvXPaxxwnyMuMXwvRlewdKKiJbv", "xMcQRUahnvncriGXGIooYxiMmFzXQKFxAgcMoApPfcsebymdu", "ZAjREqikcsyVrtzZOsyAJnaGDEAjCWtnlPdEEGjVmTDreSmt", "JJOxrdOcoazzfKRrTBLiJnAKgRdNKBg GmToYWVRFsOxpUGL", "UAIdRxDngFGpAkEoIjzIQXFmxcnnHjIjEvkiqKQWeYmaTOWz", "avqhKeAcgbzWIAIdYJCTLSHUbT vxWuVgGAQZajnoSYwAm", "fYmJbnBvYkCTmBYaFTkWjcoCq xYEPtgkAGgqaKCulrNVfxalh", "kPYvoVtpwNjeiJmEmWyemxElWunDxWzLyHreUbrjpZcVme", "MQPTUQT TAcbbuoIKnzsetCvGsirPAATYEKdcSqPQVoywSEaWF", "XHIRqvuF FxqmvmQQkZSzNESJaIjRxjoaWtszTLJTzoBENX", "iVmedVTuOQNxKMl yRiSMCsdbPetANUCncmBpzgIRKvFIKFqDG", "mOWi YTEiBcTCICdbUeQUhKroknLVeUTqMKplvVRdLhRJnXDUZ"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {4.29632697E9, 4.29632697E9, 4.165116078E9, 4.29632697E9, 4.29632697E9, 4.29632697E9, 4.2084568915E9, 4.29632697E9, 4.29632697E9, 4.29632697E9, 4.29632697E9, 4.29632697E9, 4.29632697E9, 4.29632697E9, 4.29632697E9, 4.2289861425E9, 4.2715195985E9, 4.29632697E9, 4.29632697E9, 4.29632697E9, 4.29632697E9, 4.29632697E9, 4.29632697E9, 4.29632697E9, 4.29632697E9, 4.29632697E9, 4.29632697E9, 4.29632697E9, 4.29632697E9, 4.29632697E9, 4.29632697E9, 4.1779234425E9};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> duration = {601635099, 601635099, 203362489, 601635099, 657055762, 323490951, 805676211, 380349189, 911419966, 231466995, 911419966, 616561990, 676867154, 911419966, 323715033, 97346565, 911419966, 980770795, 91495487, 370168104, 980770795, 911419966, 980770795, 980770795, 980770795, 911419966, 911419966, 911419966, 980770795, 411050066, 105743755, 980770795, 500369900, 911419966, 980770795, 980770795, 278144148, 601635099, 303903641, 911419966, 433724212, 911419966, 980770795, 980770795};
    vector<string> user = {"NtcqjUTzZthXjIkPJYZaSrdCaIyAOzrVwfgppUtCHCCndhQn", "eCvoCFHTUUrAIxmPOJEduKtvhGBeG FeGxkJPuAnziihEw", "LgaZDWlAedboQVfzUjQNsOIoAxPvBVjJcRQJUZ xPucsP", "E dXsIIuyjjYStRftOWiFEZpIFsasamNBGVqzSPaBLThCokl", "EzBQfOuPAuthxiHOrgmpuSXtORnfxvZDGoPZbjvtY ybYT", "ynhiQyMWMjjOcWrndftfrzmfNnlSQmsEcDGsBjzlGmldTV", "hEQemhLeJEYcpYWcrTLlTyhEvoitptBKfSdvZratfQXnbukl", "LleD ZuwESjaHWGKeqawMcceOVNwmMEKSaLRjVHkIDaWMhr", "vlFOTAcOHTYKUGCKlVUeOeOkqtRyjZFGlNLyjzMkigZXjDH", "abmzmJqVqaGQBbDZUerAXicfbmmItKQp XvBECMJGpKquhASb", "SPLcKfzBVuvGZzaC HGaaXKszRCDEKKqnIIXrqYITvQKL", "LgaZDWlAedboQVfzUjQNsOIoAxPvBVjJcRQJUZ xPucsP", "VLzDQDEvjTbPbdGHXbJYRfaITozjcAMW LhVARJyqwBGe", "YJtJplZVbQjM OoRWImzzXtYSavdZnoTMxsoIqTLeeLnPrOeT", "EzBQfOuPAuthxiHOrgmpuSXtORnfxvZDGoPZbjvtY ybYT", "LleD ZuwESjaHWGKeqawMcceOVNwmMEKSaLRjVHkIDaWMhr", "qKKdRTiMuDnnedpandhtXvzBjqNgAMSQNCwsOpOlJPscNKLZv", "Ea VnXRPekAEALMvjzNgdUYkUUIGySsATKiyZcYywXoYab", "LgaZDWlAedboQVfzUjQNsOIoAxPvBVjJcRQJUZ xPucsP", "abmzmJqVqaGQBbDZUerAXicfbmmItKQp XvBECMJGpKquhASb", "yFzXDFbYqMHQLyNVKGChoVedBsIvF xrxMgNXgUnFJEmXD", "SgvdYHUNQyKwQlxCkVnVIVOdeerYZNTDFCtcQQVlLOMcHAT", "MracfUsGhDBkKQLRSOljdndZmLgzccfUXoSJTSvYkpYcxTGIxw", "sfBxStjRNeKmowEaboe JlJHbsQBvfLSLDYBehzflgswkOxxKa", "hCkXzJxymRqhMoxeFTeNMVZBFMPXSCMQVtsIvTrndGlvG", "IYSSiuLpwxcqzSJJecQYUvetZLLcIBeUaeOwzsmxwSHPgE", "FlbCSFaP tdJviWrUGVgGlOUiFfzTtSLaTmoCIWfOnbBEkwE", "CgVFmwvLtCtMIPxaRTLkiaAZHhlvKYiNVOFstUXGjmjRQqG", "cKVrxBXpfJgvXMyBjDmtdKDcIySvHhNiZHibXWtyBxDOyv", "zJBugEWOzmIMIImwXjXBTGBBNAUCVBpJbDWSZibxbLZYRk", "hEQemhLeJEYcpYWcrTLlTyhEvoitptBKfSdvZratfQXnbukl", "cjJ NOzunTHZsDGvgzFOTssLocwPMpboXpHRDlJtpsGjPjEH", "zJBugEWOzmIMIImwXjXBTGBBNAUCVBpJbDWSZibxbLZYRk", "WkKwSvbzODTPBGBQkKbPmDTcHXFXUAVqonzbHtGCiDbKL ZQ", "bjzZxPmGivdaBjaKxtXeqlfozMcdFMCyiMypJqvFfYLtU", "cyrCUHXGVpKqFJoaJaFRQOHFqUlbZLegbaGkXdJPIXaedGms", "ynhiQyMWMjjOcWrndftfrzmfNnlSQmsEcDGsBjzlGmldTV", "JgEpOOgcOmScsOlgkpXseKijoAyOIGBvNspitWNwArecaXm", "VLzDQDEvjTbPbdGHXbJYRfaITozjcAMW LhVARJyqwBGe", "wjqNJZvHJsxloPfdJJqxFDyspfjsJLnicyHImaupaZ RVTb", "LleD ZuwESjaHWGKeqawMcceOVNwmMEKSaLRjVHkIDaWMhr", "WrUxnpUggDtMFQSTFutSTKsVETDQfnTqHPTUHAhspGVIXEp", "nsgUFBywUeKviByRKxlrnuKSHEcwiPpiUgTDTDWikPzHK", "iEnpZVm ChoEMZsyxwfvkGOyvCYmasnBYLoFsthHddrnsQb"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {2.1057228465E9, 2.1057228465E9, 1.05471415835E10, 2.1057228465E9, 2.39846481325E10, 1.9666507725E9, 1.08482984445E10, 1.06356349335E10, 1.0901170322E10, 1.9206387945E9, 1.0901170322E10, 1.0753741334E10, 2.39945538285E10, 1.0901170322E10, 2.3817977768E10, 1.04941336215E10, 1.0901170322E10, 2.4146505649E10, 1.04912080825E10, 1.989989349E9, 2.4146505649E10, 1.0901170322E10, 2.4146505649E10, 2.4146505649E10, 2.4146505649E10, 1.0901170322E10, 1.0901170322E10, 1.0901170322E10, 2.4146505649E10, 1.0650985372E10, 1.04983322165E10, 2.4146505649E10, 1.0695645289E10, 1.0901170322E10, 2.4146505649E10, 2.4146505649E10, 1.943977371E9, 2.1057228465E9, 2.3808072072E10, 1.0901170322E10, 1.0662322445E10, 1.0901170322E10, 2.4146505649E10, 2.4146505649E10};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> duration = {51277636, 104820324, 30166730, 162989097, 63253080, 413950152, 34853019, 2460193, 12256533, 79110331, 31202036, 63824633, 92844880, 306722936, 156097960, 34155531, 26340003, 33970682, 89814767, 445407369, 1225191, 153840224, 7119600, 6064318, 16192767, 22805954, 98159558, 135584222, 1119892, 136780095, 29812484, 38434881, 824810349, 152684916, 97039666, 3372284, 728376, 117663079, 19317865, 895206, 33418508, 47113772, 2150158, 156097960, 392039404, 31695338, 277285627};
    vector<string> user = {"jZadMBOdSZPfnFCyTqIApsYGcnLqFoOxJHAqQqGFkJbGpNod", "jZadMBOdSZPfnFCyTqIApsYGcnLqFoOxJHAqQqGFkJbGpNod", "FToHUwUCtNxWwXZcQhGCoDHeEPWKNDcYrvLR XxixyxqZMLWY", "pVRVfjdYNfxJohSDqBgiqGWafpBNVdTwFjEMQBFIY WXnui", "WeKPkUykvfkXcu MJpDfUZkCNovUBWDLnVtbggZUrAoXziP", "KmMykTVsGgZxxPlMlThJxJUgeEBbgLBAPEdSIARDkdSHbY", "rwTdSmasnokhvmyBwYfsCZPnfxaPIZUOXLKvtsazNVCHgOmD", "yCttcLyMrsbVWGSoRqXEOkFkBZRMnirxGMOIUrZvLfMDDO", "GofSVighHsdGdNqYmQLmYQjzSEoGTPuVcrZvFbVxolyTlq", "GofSVighHsdGdNqYmQLmYQjzSEoGTPuVcrZvFbVxolyTlq", "FToHUwUCtNxWwXZcQhGCoDHeEPWKNDcYrvLR XxixyxqZMLWY", "cvseWcFPXCchGEzpYSBmoynHKUNoxFhDIByDXQkJOKmIY", "WeKPkUykvfkXcu MJpDfUZkCNovUBWDLnVtbggZUrAoXziP", "PLNEHKClhbjGegXkEOpmMoCefDQgqPpuJuJliEqqXkpnyE", "zZmYDDKlsxzGwvcIhNkhCKqtgxmGvHWTDxUrMlOfjyNPv", "GyQRjtdIzWPwWptcFtpzVhZXjVAMvtPSVQzfcKPiNtqyBOLE", "cvseWcFPXCchGEzpYSBmoynHKUNoxFhDIByDXQkJOKmIY", "cvseWcFPXCchGEzpYSBmoynHKUNoxFhDIByDXQkJOKmIY", "nOEbaUSCEGzBeQeedTPShxuBFWMVvRjKb alzooIxZgvHhyzL", "PLNEHKClhbjGegXkEOpmMoCefDQgqPpuJuJliEqqXkpnyE", "nOEbaUSCEGzBeQeedTPShxuBFWMVvRjKb alzooIxZgvHhyzL", "PLNEHKClhbjGegXkEOpmMoCefDQgqPpuJuJliEqqXkpnyE", "nOEbaUSCEGzBeQeedTPShxuBFWMVvRjKb alzooIxZgvHhyzL", "GofSVighHsdGdNqYmQLmYQjzSEoGTPuVcrZvFbVxolyTlq", "rwTdSmasnokhvmyBwYfsCZPnfxaPIZUOXLKvtsazNVCHgOmD", "gNOBNyzmPORPaHkhzmJVojyUcfLtEORowcTtrCrpSSgKUHu", "fGifAApaeYTgBHSFCTxcCVIQZKIjdeSHBCYaKVcNjPeNCq", "PLNEHKClhbjGegXkEOpmMoCefDQgqPpuJuJliEqqXkpnyE", "mJizDJfOVcLafrh YlQEnZfFmrbKQKEBfzYCxkYvVUkCbOy", "TypWnqYADHMPRWueKmWKMWzEGXxFzmoUtQgQTFLTdqYOGHZLwX", "cvseWcFPXCchGEzpYSBmoynHKUNoxFhDIByDXQkJOKmIY", "NYxFGYpXdPYntBGvjZuCxSBxgwwLfLtMHCLCzJPvMWaXhKL", "pVRVfjdYNfxJohSDqBgiqGWafpBNVdTwFjEMQBFIY WXnui", "PLNEHKClhbjGegXkEOpmMoCefDQgqPpuJuJliEqqXkpnyE", "mJizDJfOVcLafrh YlQEnZfFmrbKQKEBfzYCxkYvVUkCbOy", "FToHUwUCtNxWwXZcQhGCoDHeEPWKNDcYrvLR XxixyxqZMLWY", "GofSVighHsdGdNqYmQLmYQjzSEoGTPuVcrZvFbVxolyTlq", "NYxFGYpXdPYntBGvjZuCxSBxgwwLfLtMHCLCzJPvMWaXhKL", "TypWnqYADHMPRWueKmWKMWzEGXxFzmoUtQgQTFLTdqYOGHZLwX", "KmMykTVsGgZxxPlMlThJxJUgeEBbgLBAPEdSIARDkdSHbY", "FToHUwUCtNxWwXZcQhGCoDHeEPWKNDcYrvLR XxixyxqZMLWY", "rwTdSmasnokhvmyBwYfsCZPnfxaPIZUOXLKvtsazNVCHgOmD", "cvseWcFPXCchGEzpYSBmoynHKUNoxFhDIByDXQkJOKmIY", "AhNvMueFSUkNLevCoLKZEhecORlXbEmmHCjoSPQrIy Iw", "gNOBNyzmPORPaHkhzmJVojyUcfLtEORowcTtrCrpSSgKUHu", "yCttcLyMrsbVWGSoRqXEOkFkBZRMnirxGMOIUrZvLfMDDO", "PLNEHKClhbjGegXkEOpmMoCefDQgqPpuJuJliEqqXkpnyE"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.229250088E9, 1.256021432E9, 3.77873101E8, 3.1550391175E9, 1.23523781E9, 2.371774564E9, 3.802162455E8, 3.53856275E7, 3.689180025E8, 4.023449015E8, 3.78390754E8, 1.2355235865E9, 1.25003371E9, 4.456568407E9, 1.28166025E9, 5.12332965E7, 1.2167812715E9, 1.220596611E9, 4.076971195E8, 4.5259106235E9, 3.634023315E8, 4.380127051E9, 3.66349536E8, 3.65821895E8, 3.708861195E8, 2.176202465E9, 4.11869515E8, 4.37099905E9, 3.63349682E8, 1.2720013175E9, 1.218517512E9, 1.2228287105E9, 3.4859497435E9, 4.379549397E9, 4.11309569E8, 3.64475878E8, 3.63153924E8, 1.2624428095E9, 1.2132702025E9, 2.165247091E9, 3.7949899E8, 3.86346622E8, 1.204686349E9, 1.28166025E9, 2.36081919E9, 5.00032E7, 4.4418497525E9};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> duration = {40001202, 22345124, 93635573, 199632876, 111890978, 64733951, 308288802, 54399501, 501226426, 208906538, 244201584, 115752222, 501226426, 133696682, 46495294, 383051718, 349577608, 9122924, 445998051, 492103502, 36984049, 161362215, 46410191, 56621266, 55228375, 501226426, 21663901, 422147492, 20407917, 91927640, 32905969, 501226426, 17494287, 367529744, 501226426, 363810303, 26959054, 45913807, 501226426, 175443337, 79078934, 21484432, 461225224, 118174708, 46075252, 799354, 501226426, 206488801, 164324338, 151648818};
    vector<string> user = {"gDuAgYDJWOxVXGczSSPvhMQyPEdvzvUrMJSAWKHRllFVPLFRTH", "UILJqmRqJRcdgiqUSnMVLDcxPGhWBsNszpqZqPrrJOVwAASCj", "XCywStDhaTpQsOwObWKnaFYlsNvsYRvBQpRDAfiXJbIJUbK", "TBLZSXNSSQMfzGdTKWCWQDrGnRBLohdtrdvawmVIaEQzMcv", "kPTpCNqXqnJZmQwzgdnOmQCuKqQShIvvYTBuZJQBIvfOfGTvi", "UILJqmRqJRcdgiqUSnMVLDcxPGhWBsNszpqZqPrrJOVwAASCj", "XhwSDEYrMXIpOiaBFhFTGeyqsaBtIgYuZeAOfmkNWHeiOMeur", "UILJqmRqJRcdgiqUSnMVLDcxPGhWBsNszpqZqPrrJOVwAASCj", "quBuoAkJPUrlPGhCvBWjGiVkJfzjKIT KiScyFTqehLdAuYYNT", "XCywStDhaTpQsOwObWKnaFYlsNvsYRvBQpRDAfiXJbIJUbK", "TBLZSXNSSQMfzGdTKWCWQDrGnRBLohdtrdvawmVIaEQzMcv", "SmMQlhSrZBIOLGILB PmKqxrVmTWRXYVCaoAkQWGMEKdkngfD", "MYtgNkHgizIzCLvdBauOhZTEFTSpoqqgTEFZrykteqkhClE", "AQSmwTXrkioVSnqoavuSaWqFpYdSBVYWuYYCeocnpTUuKUmHf", "XCywStDhaTpQsOwObWKnaFYlsNvsYRvBQpRDAfiXJbIJUbK", "lJhLjglvbIpLvBcEamxHncInwOOqXWLjENexqxbHsFnhJQ", "rJc jFytiZkvioQoQUCBuFXXrPYAXEepXynAaqioGPjpnM", "HkXenuPiKXodOzFiyapsfQjLzwScjnLKBxaOATzgZnTpE", "rQtQhYjwfwATBDgejWvDkrnsJAZsKuCfgxuCMDSASjSeOXG", "HkXenuPiKXodOzFiyapsfQjLzwScjnLKBxaOATzgZnTpE", "TBLZSXNSSQMfzGdTKWCWQDrGnRBLohdtrdvawmVIaEQzMcv", "kPTpCNqXqnJZmQwzgdnOmQCuKqQShIvvYTBuZJQBIvfOfGTvi", "XCywStDhaTpQsOwObWKnaFYlsNvsYRvBQpRDAfiXJbIJUbK", "UILJqmRqJRcdgiqUSnMVLDcxPGhWBsNszpqZqPrrJOVwAASCj", "rQtQhYjwfwATBDgejWvDkrnsJAZsKuCfgxuCMDSASjSeOXG", "tgffpxBCRfvEyUFCjaFBbYUXbhHckGUHEpPIMOroUWPMrUKz", "SmMQlhSrZBIOLGILB PmKqxrVmTWRXYVCaoAkQWGMEKdkngfD", "ZJGmYkXhCDboUccckcYIQBbUhmiVPUZBpMMPTZYUqlLdvYz", "TBLZSXNSSQMfzGdTKWCWQDrGnRBLohdtrdvawmVIaEQzMcv", "UILJqmRqJRcdgiqUSnMVLDcxPGhWBsNszpqZqPrrJOVwAASCj", "XCywStDhaTpQsOwObWKnaFYlsNvsYRvBQpRDAfiXJbIJUbK", "lkiWGGsVzoQLetZaMqZntWJIoZcskgGrDZ XCSJzhSDFeyHY", "XhwSDEYrMXIpOiaBFhFTGeyqsaBtIgYuZeAOfmkNWHeiOMeur", "AQSmwTXrkioVSnqoavuSaWqFpYdSBVYWuYYCeocnpTUuKUmHf", "DfGtpqgZRrsbyjBpEWRzsFgtJcFOsGmaGRYFlKMaxI OVa", "SmMQlhSrZBIOLGILB PmKqxrVmTWRXYVCaoAkQWGMEKdkngfD", "XCywStDhaTpQsOwObWKnaFYlsNvsYRvBQpRDAfiXJbIJUbK", "XCywStDhaTpQsOwObWKnaFYlsNvsYRvBQpRDAfiXJbIJUbK", "EDpQwIOiVHO ARtdhSuBFuHUMrPNXnfKQJfuqceHtCfKQfVO", "XhwSDEYrMXIpOiaBFhFTGeyqsaBtIgYuZeAOfmkNWHeiOMeur", "ZJGmYkXhCDboUccckcYIQBbUhmiVPUZBpMMPTZYUqlLdvYz", "kPTpCNqXqnJZmQwzgdnOmQCuKqQShIvvYTBuZJQBIvfOfGTvi", "gDuAgYDJWOxVXGczSSPvhMQyPEdvzvUrMJSAWKHRllFVPLFRTH", "lJhLjglvbIpLvBcEamxHncInwOOqXWLjENexqxbHsFnhJQ", "UILJqmRqJRcdgiqUSnMVLDcxPGhWBsNszpqZqPrrJOVwAASCj", "UILJqmRqJRcdgiqUSnMVLDcxPGhWBsNszpqZqPrrJOVwAASCj", "vaRoPNeFHuqJLziBcxl xJDXCYqhxQbdPwRcPeqMSjKHTeXIBf", "kPTpCNqXqnJZmQwzgdnOmQCuKqQShIvvYTBuZJQBIvfOfGTvi", "UILJqmRqJRcdgiqUSnMVLDcxPGhWBsNszpqZqPrrJOVwAASCj", "rJc jFytiZkvioQoQUCBuFXXrPYAXEepXynAaqioGPjpnM"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {5.032264861E9, 5.023436822E9, 5.0590820465E9, 5.112080698E9, 5.068209749E9, 5.0446312355E9, 5.166408661E9, 5.0394640105E9, 5.262877473E9, 5.116717529E9, 5.134365052E9, 5.070140371E9, 5.262877473E9, 5.079112601E9, 5.035511907E9, 5.203790119E9, 5.187053064E9, 5.016825722E9, 5.2352632855E9, 5.258316011E9, 5.0307562845E9, 5.0929453675E9, 5.0354693555E9, 5.040574893E9, 5.0398784475E9, 5.262877473E9, 5.0230962105E9, 5.223338006E9, 5.0224682185E9, 5.05822808E9, 5.0287172445E9, 5.262877473E9, 5.0210114035E9, 5.196029132E9, 5.262877473E9, 5.1941694115E9, 5.025743787E9, 5.0352211635E9, 5.262877473E9, 5.0999859285E9, 5.051803727E9, 5.023006476E9, 5.242876872E9, 5.071351614E9, 5.035301886E9, 5.012663937E9, 5.262877473E9, 5.1155086605E9, 5.094426429E9, 5.088088669E9};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> duration = {917459755, 603894817, 603894817, 584535568, 239415089, 917459755, 239415089, 917459755, 239415089, 603894817, 917459755, 239415089, 603894817, 124204189, 603894817, 239415089, 239415089, 239415089, 7120159, 232294930, 124204189, 239415089, 124204189, 603894817, 917459755, 239415089, 124204189};
    vector<string> user = {"AUfyymNnlFzDFLSueNjUgCusMZyATKEnmDdkOhvzIAowNTG", "bQYxtjPyXAqmSzFSYIJxSeHtqeMuEqxgZIlPRwCtobPSPdxb", "SiUtKEhHDyhjQDlFJZCSuiOfhPQDkazbachyMgloFKtuyvJ", "ZHLlUPda TYnSIxSvuDacGwAeRteOrSZYGKiOyJspceoseAOoT", "kciMhtXgqJCAeDQtURXBnsCGNeOxaDuXDKgHMAiqGVcvnRAkd", "MaeijtPoQPteNYBuBOvXImyMagyGHjBJyMvRxMuOdzDOR", "PVZBKvZCajABpZYAnLeyZUTVoSxRkjHdYoEmNBAOriqCbpFJ", "GgnloVjiKcyYcLsEodrTsawclRUCAJWRumQRruFCGMIlo", "cTnkQBDhexguNY OQSmkEZyeYPPrtsVZfJTfTkKOZcszeLZ", "kZRuwFXHJTaRLAzmirZRaqgvYbVqFQklgPeyTXTSeneYvVIvL", "aeBaVCuvvyatrkznjGzimxDYTbwpkSBKsYTbRGtcDpYvL", "PU SSvwIAdutfchnllncWIyiiyftiySRzreCNxcxrAXGCdv", "kEtbmEgfqkRjehRWHrUfrSWpYcowtkpGZjEozZttO OdePcbp", "ryKOZROsNzAqbkpSIGOYxCtZZaOAolhyNrYLauWwVnOUhbuwu", "yipuxwIBeKTObjjfIUwFtDJI UQVcuNeKuvNuHrnpPlhAMzpFu", "mgJWmASbZnhJQSkOwyXHWtKLR DEhXaflsoMyMMFzVTLtabTg", "CoCvHFJmBdwycmzdkiKtkysZHsxCkxGkYxFQHBDcXVqcE", "utZXdeNyhAVdC PtcKletlFiCuafVElilwYzNlXeRRKekauVGk", "kjrwAZKqjgWBBYBdfTVxHaNMwaLWHztWdkiBeyUaFTksz", "kjrwAZKqjgWBBYBdfTVxHaNMwaLWHztWdkiBeyUaFTksz", "OdXqAxECBmLVbJQaiPMqMBuzVRFacNszzRBrPiNGHHZZq", "ghkjqfpBNPBPIU OOvrWeTwCbgPcYyYatBWEvexjGkzkFEbo", "pFhKOuVibauLOTPIfUCueBiIeXYzKWefnsayQoOIkLCozFF", "ReRsHAQZjVgJeGTIdkwZUeHbVwrCoQoBpxyZSqdjWJekeV", "cpQNIcTcbwNLoozIBvDCAiFii NoAsVEIXensEVimoUhySFAQ", "SRahBmRgeXzdLiAxWuIFEjzNtRqpgttDRhzchgDMiZTZBIZdu", "RmrEkrCzfrLmxdAeLeYODJnQKzgflrAGqKOyxKQrMFSVk"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {9.851251381E9, 5.5891350735E9, 5.5891350735E9, 3.475503214E9, 1.8135997455E9, 9.851251381E9, 1.8135997455E9, 9.851251381E9, 1.8135997455E9, 5.5891350735E9, 9.851251381E9, 1.8135997455E9, 5.5891350735E9, 3.105104725E8, 5.5891350735E9, 1.8135997455E9, 1.8135997455E9, 1.8135997455E9, 1.6974522805E9, 1.810039666E9, 3.105104725E8, 1.8135997455E9, 3.105104725E8, 5.5891350735E9, 9.851251381E9, 1.8135997455E9, 3.105104725E8};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> duration = {10655237, 520522846, 82109707, 567762003, 13755067, 163765002, 77818920, 221593359, 181800690, 30305133, 247202685, 249408950, 72940883, 1699543, 343190160, 8252441, 566041924, 62525897, 84371178, 445270770, 43399170, 448533337, 49853207, 817170953, 441535775, 208012833, 10655605};
    vector<string> user = {"DRRbxjXxLxaAeJXdYZlerPENhYNW sUZpLxqeuhCoxRHqAfp", "LBgiSCQyoPIXtKIwfvPcDcvhpSXyrphxmWrCQcKouhCgo aLSU", "SuoKGbPwAxaCGpozZZuYyTkwMFncyFIVrBB ytEoSbOLuS", "wiAyIWbYdgYVGqvBwCpxVQVmAWYXzzXXmqNdoTXIqngjuLwyBo", "DRRbxjXxLxaAeJXdYZlerPENhYNW sUZpLxqeuhCoxRHqAfp", "DRRbxjXxLxaAeJXdYZlerPENhYNW sUZpLxqeuhCoxRHqAfp", "SuoKGbPwAxaCGpozZZuYyTkwMFncyFIVrBB ytEoSbOLuS", "FujwvGhnZsGyrsuGy goYFwYkTMKbUsoazCDmenNxaHRl", "SuoKGbPwAxaCGpozZZuYyTkwMFncyFIVrBB ytEoSbOLuS", "QeLJREOwDAenkZJoLlgLmFBxgdh ilWSZkNluZpBrSSrWfSkK", "FujwvGhnZsGyrsuGy goYFwYkTMKbUsoazCDmenNxaHRl", "wiAyIWbYdgYVGqvBwCpxVQVmAWYXzzXXmqNdoTXIqngjuLwyBo", "DRRbxjXxLxaAeJXdYZlerPENhYNW sUZpLxqeuhCoxRHqAfp", "SuoKGbPwAxaCGpozZZuYyTkwMFncyFIVrBB ytEoSbOLuS", "QeLJREOwDAenkZJoLlgLmFBxgdh ilWSZkNluZpBrSSrWfSkK", "SuoKGbPwAxaCGpozZZuYyTkwMFncyFIVrBB ytEoSbOLuS", "LBgiSCQyoPIXtKIwfvPcDcvhpSXyrphxmWrCQcKouhCgo aLSU", "DRRbxjXxLxaAeJXdYZlerPENhYNW sUZpLxqeuhCoxRHqAfp", "SuoKGbPwAxaCGpozZZuYyTkwMFncyFIVrBB ytEoSbOLuS", "fOWvHvbCvZcCspWCeMgMZDrjsOmkywpPxPpVv ZTaPmfx", "SuoKGbPwAxaCGpozZZuYyTkwMFncyFIVrBB ytEoSbOLuS", "SopajgKHlaTmRCksbotMCFqpFKcjLoWEHtIMDLTk Xrkdswp", "DRRbxjXxLxaAeJXdYZlerPENhYNW sUZpLxqeuhCoxRHqAfp", "gFGNn MEjmjMVIGZoWMUmbtzVeVruVTzERBTkBhQxQqcXLVqH", "LBgiSCQyoPIXtKIwfvPcDcvhpSXyrphxmWrCQcKouhCgo aLSU", "LBgiSCQyoPIXtKIwfvPcDcvhpSXyrphxmWrCQcKouhCgo aLSU", "FujwvGhnZsGyrsuGy goYFwYkTMKbUsoazCDmenNxaHRl"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {3.788229115E8, 5.362358009E9, 2.1613011955E9, 3.7007499455E9, 3.803728265E8, 4.55377794E8, 2.159155802E9, 2.2310430215E9, 2.211146687E9, 3.886478595E8, 2.2438476845E9, 3.541573419E9, 4.099657345E8, 2.1210961135E9, 5.45090373E8, 2.1243725625E9, 5.385117548E9, 4.047582415E8, 2.162431931E9, 1.192261356E9, 2.141945927E9, 1.640794693E9, 3.984218965E8, 3.8254544205E9, 5.3228644735E9, 5.2061030025E9, 2.1255741445E9};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> duration = {568449689, 816338639, 297296999, 629202724, 618782955, 816338639, 568449689, 236376720, 197555684, 71389330, 396718444, 497060359, 25863211, 571134185, 176559043, 72014806, 72014806, 245204454, 837650113, 568449689, 236376720, 788053001, 816338639, 72014806, 773452210, 243061152, 14600791, 816338639, 72014806, 46151595, 568449689, 72014806, 900023588, 613202947};
    vector<string> user = {"raYegngtGAdExRqHP MQrDhtTCjQJbWWsGORTjurgrlzdvNeRN", "sfmSHuvqQdcRgcQEGMARbYFNNCfNDWBCXAmCfNnNDipJToMW", "IXzmGAy OYlozBEktLlRDdtbVJCSukqOEXkTkYBlUGrYkJ", "yMOcxnF uTPaJbCEuiUxjLIEKaAvRbDIEVFqUWfjJDYUaG", "qfhZKZeOtwyOMWXSsfbJQTgPqxPWoGkBmGbHpMdCzDPQMNvCz", "NOqeaudlPUOpPmbbamOFlbRclUhFKcTojXssBLHtqRcZZ", "YMUwNiHejcTRNsQQidITvJXeoWqXXnSlECUHWpSOASk H", "gUCANGwxQttNYtpeBdlGIKhdzCZfjRF McbyCdHfVXHYJvB", "qfhZKZeOtwyOMWXSsfbJQTgPqxPWoGkBmGbHpMdCzDPQMNvCz", "KoLdknLaOAYBHhZJqMcECRImuJtzoXOzjmSxrSJwyeuiXjNj", "R gchHpnNnpbFDaAQgBhjjVqRlfQgeEZiFYdeiBVORZlBOnsz", "KoLdknLaOAYBHhZJqMcECRImuJtzoXOzjmSxrSJwyeuiXjNj", "EbXZFRsBmRHvt nrqxeCfMHlwuGuNRReHKCWiTbAgLTulrl", "DNlxDihjONnKqtbGORyPabfvpJNlJInZqBeOOjbjawBhlwo", "R gchHpnNnpbFDaAQgBhjjVqRlfQgeEZiFYdeiBVORZlBOnsz", "XDDAPyoBiIDiBUqDaLztOpHHzOXINQiaHAHOFFqKgfsao", "fnEwtEOmrJBrSNyBaccYDdUGotoFoUqjOVTwCllLAJZDVGF", "DNlxDihjONnKqtbGORyPabfvpJNlJInZqBeOOjbjawBhlwo", "LKLwwPzPRKemyJUhNCDxjgurAzpcWF eHDsKtlEbDWVUnmDZ", "vZbrFsqnqXQegqTUtVuaKZcrNdlRZB SamUelPyqjHdPWg", "aLrbiEPqDPedjimGrFqKrCeDuLbigsDuHRxmPGewhGQUl", "NXdEgIpTKHYpnmjpWPLhQeymAmbNdycPUyMPSBBhGgYbm", "CUUUTijwtFfuDmdfDguUzhH LtStzlzpkLcjoHJqkkaEc", "oOscwouOdDLjGQFuKyMJEtNQtdLabyNYQYKlYymAPydTUhVq", "IvcAVXekVKWGSEOKtQzITvNT fYdidxCKKkrBSaGkqMfgCZP", "R gchHpnNnpbFDaAQgBhjjVqRlfQgeEZiFYdeiBVORZlBOnsz", "IvcAVXekVKWGSEOKtQzITvNT fYdidxCKKkrBSaGkqMfgCZP", "iBApxoOg ifxPDIyGPsNGqWOCJfzmjkJZOQOuOOGcjENnheWfD", "ffrgqeckNEgvXMJBRmAjBBUbQgnqBSjdoRFhIrgDlSiEi", "EbXZFRsBmRHvt nrqxeCfMHlwuGuNRReHKCWiTbAgLTulrl", "uJUuWHlXovibSsPnnmQNUcCCfxXAnODvUcRhNHpvPNvaqa", "KonzSrqxuUPDfHTVsDOKyVxciRbSnmfZx eKpWrhIGpUiIW", "loVlqMPWktkFudcQYYzRVwyVRddLEiODlGaiZhvWKXMEOua", "vpvsOvBcAHZVvVxzmumIvhYaydHgcCeruMtEEVajqfXbl"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {2.907488342E9, 1.0128253949E10, 1.202139275E9, 5.286793391E9, 1.0029476107E10, 1.0128253949E10, 2.907488342E9, 7.86653916E8, 9.8188624715E9, 2.6589581625E9, 9.9184438515E9, 2.871793677E9, 2.289760235E8, 1.0005651722E10, 9.808364151E9, 2.52051821E8, 2.52051821E8, 9.8426868565E9, 1.3414919979E10, 2.907488342E9, 7.86653916E8, 6.4688728925E9, 1.0128253949E10, 2.52051821E8, 6.461572497E9, 9.8416152055E9, 6.0821467875E9, 1.0128253949E10, 2.52051821E8, 2.391202155E8, 2.907488342E9, 2.52051821E8, 1.4314943567E10, 4.657590667E9};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> duration = {984562846, 242879800, 42406981, 214761339, 188660428, 5294821, 302021113, 188660428, 5294821, 302021113, 64560243, 109191270, 795914993, 5294821, 323952609, 172827171, 59141313, 2410975, 45795852, 102733270, 890177502, 103007297, 299610138, 156606835, 48589492, 85914583, 64633699, 302021113};
    vector<string> user = {"wnyXhsrcBnLXpWIsdBErqBNfCZIVxESCsDUNgSYqTLwPsjBHZ", "ruAHxLLmdWpTZFinqcQb dafNFUpKQzYLicZLAIriKIwg", "gKLwrrjRPoTiVsapjKHzOucTGrBoPLeHmzNEUfMRHXOSlQSc", "fzLAvbcQPBchAxghwFMAMpRumMTdsFEkYnIXnqWSVqDFJrZBB", "BFLWEzENeVpaAoVPpyDzMqPRAHlBCtXcfnP BmLQeAYFTwGYr", "RZz WSJWtgmurOtRNgTFyqPwcRWWbxhEbqMndINOtSxTU", "FUufWNZAfNrJKkLTFZFLPlPiZfyAIMEDjSUBjcwvSnjraWz", "eQCxMHPIcLYFuMJEfhupBXGksxKYdSOIHBVeqcFYLhXOn", "kSnttlitomZyvhcnyrFwMrPIdqSOisocmXKTYSntMwyIeN", "tGNjFFnELDeA ynmzjAMpvRIGnSCohWHWaipgpOdExqQKrUV", "YiAxmeEiirY CyZLwkdWKvItclCbDnXSzVdcCXkqRyvowW", "fzLAvbcQPBchAxghwFMAMpRumMTdsFEkYnIXnqWSVqDFJrZBB", "ReRtFpeyAnOxyeDibBbEGuazUjVbNSqcTWOrrGDqdRHfYzKSU", "NPoTnimAXJwAXFfENDnFSihtpdDHVrYkocRDMetrQCNPLbhm", "jjZQBrRJcSnKv PANAOVSSTblxIVuoxQTgbqeGSorpmtpFoF", "YiAxmeEiirY CyZLwkdWKvItclCbDnXSzVdcCXkqRyvowW", "ruAHxLLmdWpTZFinqcQb dafNFUpKQzYLicZLAIriKIwg", "kcmziomrTSvLXBxDceWArMoHtcULvKQWXBYfPNURiYGwVKnEDv", "Tz eqTwGLHdppwNzGYcrISIXLenniuoVtEvnEKLqCezBwPoN", "ReRtFpeyAnOxyeDibBbEGuazUjVbNSqcTWOrrGDqdRHfYzKSU", "Tz eqTwGLHdppwNzGYcrISIXLenniuoVtEvnEKLqCezBwPoN", "gKLwrrjRPoTiVsapjKHzOucTGrBoPLeHmzNEUfMRHXOSlQSc", "kcmziomrTSvLXBxDceWArMoHtcULvKQWXBYfPNURiYGwVKnEDv", "gKLwrrjRPoTiVsapjKHzOucTGrBoPLeHmzNEUfMRHXOSlQSc", "Tz eqTwGLHdppwNzGYcrISIXLenniuoVtEvnEKLqCezBwPoN", "ReRtFpeyAnOxyeDibBbEGuazUjVbNSqcTWOrrGDqdRHfYzKSU", "YiAxmeEiirY CyZLwkdWKvItclCbDnXSzVdcCXkqRyvowW", "RQMbSnpCOS ngMhuBgczJkzPCzgBNotpVqAwNAbWOBPwn"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {5.12438402E9, 1.5717191145E9, 1.471482705E9, 2.9386863885E9, 2.98875105E8, 1.0589642E7, 1.601289771E9, 2.98875105E8, 1.0589642E7, 1.601289771E9, 1.482559336E9, 2.885901354E9, 5.0300600935E9, 1.0589642E7, 2.9932820235E9, 1.5366928E9, 1.479849871E9, 1.451484702E9, 4.655000523E9, 4.683469232E9, 5.077191348E9, 1.501782863E9, 1.6000842835E9, 1.528582632E9, 4.656397343E9, 4.6750598885E9, 1.482596064E9, 1.601289771E9};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> duration = {32320997, 496864493, 34257424, 23049902, 10438035, 154116002, 278773198, 18730339, 43436521, 496864493, 27247793, 209261592, 2886702, 226021385, 496864493, 253660977, 283179840, 67376115, 143842826, 249069330, 8593247, 157104625, 31654296, 51398271, 69445106, 102452492, 46201337, 145133926, 209026779, 213684653, 14916335, 130426336, 270843108, 9852117, 61438500, 98069590, 765753, 17634767, 21792890, 47769397, 29915352, 77810369, 24115235, 23077830, 496864493, 6381856, 47742799};
    vector<string> user = {"jQGNaEhTxioGq VFCERsuQrGiUsAetIqgKUPBeHyLNTdx", "lVBhXdnMvldAZFCKThDCwYQPcBboP xtIiIzcfXqidsvdS", "qzGytzxmtBVQvWvbotOdbIRyWkzOhAEhAehcQcOsoViWT", "IRFvYxZoyjfWfniGwzWiZvDwGzJoeDawMHOmWfuoVQKktozlf", "IRFvYxZoyjfWfniGwzWiZvDwGzJoeDawMHOmWfuoVQKktozlf", "jQGNaEhTxioGq VFCERsuQrGiUsAetIqgKUPBeHyLNTdx", "jQGNaEhTxioGq VFCERsuQrGiUsAetIqgKUPBeHyLNTdx", "qzGytzxmtBVQvWvbotOdbIRyWkzOhAEhAehcQcOsoViWT", "IRFvYxZoyjfWfniGwzWiZvDwGzJoeDawMHOmWfuoVQKktozlf", "aQFqSYIjuBrfiEwgqkSLJKlqapRnbXaVfqWVfZVsjDEnent", "qzGytzxmtBVQvWvbotOdbIRyWkzOhAEhAehcQcOsoViWT", "AwzdpgcCJKYbWX XVpWAIGWzbKMHGXeRMraVoiOEMkyfEpV", "qzGytzxmtBVQvWvbotOdbIRyWkzOhAEhAehcQcOsoViWT", "LRDchGmTYbVlZGjqSOsbKptgdkffnxfDhPnlwkMwZPvdAD", "TM hwMTtpDEaPaBHchJuGRGDxDuzyXvaYiidVVXRWWykYMJRI", "aIviZjtNkcjrRYiAGQWXqyYoTTCKaZHyXZTZER KjVvhrd", "EqGybqBRDeijdGlZJhOYsWN oVBqFIXnHkyEBhBTVXqva", "IRFvYxZoyjfWfniGwzWiZvDwGzJoeDawMHOmWfuoVQKktozlf", "qzGytzxmtBVQvWvbotOdbIRyWkzOhAEhAehcQcOsoViWT", "mq bcIAsHmupvGWkHZGYmhszWPIaJlEuWIZSeMngtdnntMUG", "IRFvYxZoyjfWfniGwzWiZvDwGzJoeDawMHOmWfuoVQKktozlf", "IRFvYxZoyjfWfniGwzWiZvDwGzJoeDawMHOmWfuoVQKktozlf", "jQGNaEhTxioGq VFCERsuQrGiUsAetIqgKUPBeHyLNTdx", "qzGytzxmtBVQvWvbotOdbIRyWkzOhAEhAehcQcOsoViWT", "qzGytzxmtBVQvWvbotOdbIRyWkzOhAEhAehcQcOsoViWT", "mq bcIAsHmupvGWkHZGYmhszWPIaJlEuWIZSeMngtdnntMUG", "qzGytzxmtBVQvWvbotOdbIRyWkzOhAEhAehcQcOsoViWT", "aIviZjtNkcjrRYiAGQWXqyYoTTCKaZHyXZTZER KjVvhrd", "AwzdpgcCJKYbWX XVpWAIGWzbKMHGXeRMraVoiOEMkyfEpV", "EqGybqBRDeijdGlZJhOYsWN oVBqFIXnHkyEBhBTVXqva", "mq bcIAsHmupvGWkHZGYmhszWPIaJlEuWIZSeMngtdnntMUG", "mq bcIAsHmupvGWkHZGYmhszWPIaJlEuWIZSeMngtdnntMUG", "LRDchGmTYbVlZGjqSOsbKptgdkffnxfDhPnlwkMwZPvdAD", "qzGytzxmtBVQvWvbotOdbIRyWkzOhAEhAehcQcOsoViWT", "IRFvYxZoyjfWfniGwzWiZvDwGzJoeDawMHOmWfuoVQKktozlf", "aIviZjtNkcjrRYiAGQWXqyYoTTCKaZHyXZTZER KjVvhrd", "AwzdpgcCJKYbWX XVpWAIGWzbKMHGXeRMraVoiOEMkyfEpV", "qzGytzxmtBVQvWvbotOdbIRyWkzOhAEhAehcQcOsoViWT", "qzGytzxmtBVQvWvbotOdbIRyWkzOhAEhAehcQcOsoViWT", "IRFvYxZoyjfWfniGwzWiZvDwGzJoeDawMHOmWfuoVQKktozlf", "IRFvYxZoyjfWfniGwzWiZvDwGzJoeDawMHOmWfuoVQKktozlf", "AwzdpgcCJKYbWX XVpWAIGWzbKMHGXeRMraVoiOEMkyfEpV", "qzGytzxmtBVQvWvbotOdbIRyWkzOhAEhAehcQcOsoViWT", "qzGytzxmtBVQvWvbotOdbIRyWkzOhAEhAehcQcOsoViWT", "jolwtiyeTazPHfJoUblqvohgIjThgVdUkuDsyNKiMaGutSzfrq", "qzGytzxmtBVQvWvbotOdbIRyWkzOhAEhAehcQcOsoViWT", "IRFvYxZoyjfWfniGwzWiZvDwGzJoeDawMHOmWfuoVQKktozlf"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {2.9973474565E9, 3.2296192045E9, 2.99831567E9, 2.992711909E9, 2.9864059755E9, 3.058244959E9, 3.120573557E9, 2.9905521275E9, 3.0029052185E9, 3.2296192045E9, 2.9948108545E9, 3.085817754E9, 2.982630309E9, 3.0941976505E9, 3.2296192045E9, 3.1080174465E9, 3.122776878E9, 3.0148750155E9, 3.053108371E9, 3.105721623E9, 2.9854835815E9, 3.0597392705E9, 2.997014106E9, 3.0068860935E9, 3.015909511E9, 3.032413204E9, 3.0042876265E9, 3.053753921E9, 3.0857003475E9, 3.0880292845E9, 2.9886451255E9, 3.046400126E9, 3.116608512E9, 2.9861130165E9, 3.011906208E9, 3.030221753E9, 2.9815698345E9, 2.9900043415E9, 2.992083403E9, 3.0050716565E9, 2.996144634E9, 3.0200921425E9, 2.9932445755E9, 2.992725873E9, 3.2296192045E9, 2.984377886E9, 3.0050583575E9};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> duration = {57138972, 10469067, 637538549, 180338599, 637538549, 378204578, 388673645, 455503733, 5733443, 88855346, 166551972, 19977890, 117830373, 9691940, 315504304, 56147065, 73169341, 158132976, 15435954};
    vector<string> user = {"uOluuHoWlQoetmVfeKRLKdjqXFrcFnbRVjFGwIruQwjddyoVyI", "fmmyFIaIhPuPcTwMVDWhrGgWNCChwjVtZgZNwOqRYqozDjf", "McVEHpVaIaAQfcDbzkWwVDzhatZHMgdBkHjz uupiXOMBb", "IbfIyzqIjs PCRidLJBLfUPtoGRiuJVMGShSsxeEmlbJXN", "vlHnrbDAtWWDYAzbfgwR snHqWanjyvxYZIWcAxNRaSIenXfei", "fmmyFIaIhPuPcTwMVDWhrGgWNCChwjVtZgZNwOqRYqozDjf", "pPwHfXwUikywohjl iRzUqMNRKiJsFWbBieMAKaLZuxzdQlz", "zoVNHzuNaQcSIZRuyHcsMAsIEGCmtXuVFQcQOYuNTkFmHRHCq", "uOluuHoWlQoetmVfeKRLKdjqXFrcFnbRVjFGwIruQwjddyoVyI", "LfQjZdjSiGaiocvGnpmHwpl DIuLxIENjDvmkBNAmuUgLOGXP", "LfQjZdjSiGaiocvGnpmHwpl DIuLxIENjDvmkBNAmuUgLOGXP", "hANGuSmeZGXwdFKEUUXSctPiruCVsSsINDZKXphDTMtOUJMJB", "LfQjZdjSiGaiocvGnpmHwpl DIuLxIENjDvmkBNAmuUgLOGXP", "uOluuHoWlQoetmVfeKRLKdjqXFrcFnbRVjFGwIruQwjddyoVyI", "BeWrVXwFfjDPdWiZXMuCWwWtcOrTVbOPpL opKvoqbCppuAJbe", "IbfIyzqIjs PCRidLJBLfUPtoGRiuJVMGShSsxeEmlbJXN", "BeWrVXwFfjDPdWiZXMuCWwWtcOrTVbOPpL opKvoqbCppuAJbe", "zoVNHzuNaQcSIZRuyHcsMAsIEGCmtXuVFQcQOYuNTkFmHRHCq", "LfQjZdjSiGaiocvGnpmHwpl DIuLxIENjDvmkBNAmuUgLOGXP"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {8.48295535E7, 1.1116097325E9, 3.4536670215E9, 3.009543765E8, 3.4536670215E9, 1.295477488E9, 1.3007120215E9, 2.41829271E9, 5.9126789E7, 1.150802872E9, 1.189651185E9, 1.997789E7, 1.1652903855E9, 6.11060375E7, 1.264127351E9, 2.388586095E8, 1.1429598695E9, 2.2696073315E9, 1.114093176E9};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> duration = {480090460, 88741696, 314382199, 62949999, 200673254, 480090460, 717668422, 989295843, 10052931, 43001138, 119717169, 90461296, 69669168, 508339187, 25720585, 100067967, 719930741, 125925852, 6167824, 336361150, 270367870, 252933776, 650067577, 169185790, 113706482, 873247687, 142848298, 78724494, 28855010, 80444094, 87824400, 309468351, 910812083, 462954378, 13647504, 634265039, 12430451, 792949436, 75821320, 620313911, 301600945, 747554701, 214111276, 274478730, 517494235, 29759915};
    vector<string> user = {"E SvefZlNLVbpNyvxPIhXxbJkzpXRTjBYwArTIxPKbJBiQ", "UOePCfYazZdXREaYipkhYkowZTJsoCZVXaKGkVXPcaNuAASmJ", "XoByTPqPTGZaWtemAUDetwgFUwcmzelMSlGlQDPQDefntFm", "aJTnjKAxIORyKwAHqKAuQikDgoojwlrRClAzcbTdNoIpqG", "SGIiqhKPERprMJGDjbjzYrTQYbETwq UkdbFGlkyUeEZwwmNc", "kZoYtBsfwHznFjVkftlBCCrDfXvXccXs lIIKePUNDfMumZuA", "sfLMtNuwLaFcUKWkbNSFFCyXfkqXOgxzaQsAQkQgWPSco", "WPaYAPctgULeshyFcDfWqWdVpulYCbBymwHqrLmOnNXISVSm", "xZRHXQpSUlXdXPCxZAuPtUvTqBcRVRsTDSwQEeC ogxTYG", "WYSNmuRfpNXmxJLHYVmskOdtvCEbrNOwSNCFdnFHaAeKW", "XoByTPqPTGZaWtemAUDetwgFUwcmzelMSlGlQDPQDefntFm", "QQrhpsYQXwXlvy olDAWxoVobyMELhmhOuOjmeBOjhsjD", "sfLMtNuwLaFcUKWkbNSFFCyXfkqXOgxzaQsAQkQgWPSco", "ALWJiRiHkjsXmvgjKnOeDNKFUmMqhulpJsaBOPFLqkzkY", "uTqQzrrHBMzXEISl OhysVvNkoJEuZvroYeFwmoNXfCzqiVox", "aJTnjKAxIORyKwAHqKAuQikDgoojwlrRClAzcbTdNoIpqG", "RkktZON ckHlwsPueDLvyHSvOdazqXPddBuvUMLbAfBTVCXAg", "ALWJiRiHkjsXmvgjKnOeDNKFUmMqhulpJsaBOPFLqkzkY", "aJTnjKAxIORyKwAHqKAuQikDgoojwlrRClAzcbTdNoIpqG", "SGIiqhKPERprMJGDjbjzYrTQYbETwq UkdbFGlkyUeEZwwmNc", "CnHziQebVPYJncIcUGtaYjWmGCmBkPJYubqscvtSFfiAVZ", "ZDzxthAkAIIWyHkHcKRbtvonviqpRHwMwrsZRiyaayxLOwzwp", "BOCVQQsXpWxrMQBZhzxJeEQmmenNKcNvqaQKXMPEYuDNC", "awWW YKvFOZBqpAHuAUrfHBTUtKOUDYZlIazlFMvpAAePUr", "sfLMtNuwLaFcUKWkbNSFFCyXfkqXOgxzaQsAQkQgWPSco", "KkNBIXDVXWqeUjJpWPAXMZZsYkIbXw jdUApUbkkeQbSUmA", "CnHziQebVPYJncIcUGtaYjWmGCmBkPJYubqscvtSFfiAVZ", "QQrhpsYQXwXlvy olDAWxoVobyMELhmhOuOjmeBOjhsjD", "XoByTPqPTGZaWtemAUDetwgFUwcmzelMSlGlQDPQDefntFm", "UOePCfYazZdXREaYipkhYkowZTJsoCZVXaKGkVXPcaNuAASmJ", "uTqQzrrHBMzXEISl OhysVvNkoJEuZvroYeFwmoNXfCzqiVox", "BOCVQQsXpWxrMQBZhzxJeEQmmenNKcNvqaQKXMPEYuDNC", "qmDOOtJFKeWx UhoGfWyRDMLHSOxBKIGmvzYJfGyxVZhx", "LEJCKluiyZnYUnbSgyeBcBgGU hGLzUXblQXJcTrVBAjV", "xZRHXQpSUlXdXPCxZAuPtUvTqBcRVRsTDSwQEeC ogxTYG", "FmgDHdPicfOCSdHuqCwrdeFjyVrnhlNSylsPSMmInCxQXazNr", "sfLMtNuwLaFcUKWkbNSFFCyXfkqXOgxzaQsAQkQgWPSco", "pdBxOFjlFUHtWphzCYERgyKjkerqfItTbzCbGrooSTmPgLoyVX", "sfLMtNuwLaFcUKWkbNSFFCyXfkqXOgxzaQsAQkQgWPSco", "ZDzxthAkAIIWyHkHcKRbtvonviqpRHwMwrsZRiyaayxLOwzwp", "CnHziQebVPYJncIcUGtaYjWmGCmBkPJYubqscvtSFfiAVZ", "JvqvcDZHjLkubyZMfEkxRxYOHnrpFYHonhUwJKFkbwqSXybe", "WYSNmuRfpNXmxJLHYVmskOdtvCEbrNOwSNCFdnFHaAeKW", "CnHziQebVPYJncIcUGtaYjWmGCmBkPJYubqscvtSFfiAVZ", "uKPtwbvFkTbyFNOjwdmpeZfjSK pVkiaUaZigTJJhMqZx", "BOCVQQsXpWxrMQBZhzxJeEQmmenNKcNvqaQKXMPEYuDNC"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {2.71714544E9, 5.19987848E8, 1.6912464715E9, 5.070919995E8, 3.843538734E9, 2.71714544E9, 1.2535417619E10, 1.26712313295E10, 1.6876683E7, 9.64045356E8, 1.5939139565E9, 5.20847648E8, 1.2211417992E10, 4.9001539415E9, 9.333322E7, 5.256509835E8, 6.000180128E9, 4.708947274E9, 4.78700912E8, 3.911382682E9, 1.2311767343E10, 8.54039884E9, 1.25016171965E10, 5.60209895E8, 1.2233436649E10, 8.8505557955E9, 1.2248007557E10, 5.14979247E8, 1.548482877E9, 5.15839047E8, 1.243851275E8, 1.23313175835E10, 1.0197991722E10, 1.765532561E9, 1.86739695E7, 4.9631168675E9, 1.21827986335E10, 7.540684265E9, 1.2214494068E10, 8.7240889075E9, 1.23273838805E10, 6.747734829E9, 1.049600425E9, 1.2313822773E10, 3.474684905E9, 1.21914633655E10};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> duration = {744068627, 37649080, 195940197, 271622243, 94914359, 44269290, 30450158, 678683605, 30518898, 339167647, 86470070, 657598557, 460725191, 211182124, 408051713, 18907891, 729592, 369087928, 72021690, 744068627, 744068627, 293755254, 43125222, 90091172, 74191252, 408051713, 346449644, 87229680, 949627527, 256258854, 32075091, 30531036, 119767632, 127195480, 146566758, 25207588, 83462964, 255677631, 47602052, 327284163, 166969937, 96613486, 240696244, 326794389, 678005284};
    vector<string> user = {"gVnfmygNPgFoJTJmOGhjMkNbgmPidtlLYnFxmleqONuXbCIan", "HvgBbqminsBAmfGehHQpkFThJnxneFhaFfqikvopuPJ ELEgQ", "syTxKUxesxWvjEZehOKAapKUhujTEMXEgtMjLdlpCVGhnU", "gqSBPjAsmNDIdmB oOvuPePbpAsYJpwbTtAipDdDNstZxQXEhC", "bzeCZFUoxXBdTbbYyoJKFtMiFsxiokfKmJcuOvLXQnhosULUe", "HvgBbqminsBAmfGehHQpkFThJnxneFhaFfqikvopuPJ ELEgQ", "PdIDuJAOXCLFtnMiaKnCzakKcZVBVWHUfVZUZIWRGQgnTWmQkj", "XXSoFnrTQdGdKnkpxBAfNJFOlRefcjOhmPpxTygoFinpSiVBjI", "HvgBbqminsBAmfGehHQpkFThJnxneFhaFfqikvopuPJ ELEgQ", "GXeZqpHemjdfGPYIccfB dTobXfhJqnWqIFyJutkhWDKdOJgAi", "QdUMYmBKuOxgaRzVOXrObyL YfWERfrVDmBHQWAEjnRExQLpF", "QdUMYmBKuOxgaRzVOXrObyL YfWERfrVDmBHQWAEjnRExQLpF", "cNlwvU PAhbZIrcCpnmzWxEwdwHIpkvJTLLpVHgNAPzPICs", "qAPanowDLahVuurrXOTKbWgONHZf hoXXyPiqChJTvicS", "gDEvnEkzLmUvWirjVkNeBMlTUhGKlWdUuxArQlIQAEfJM", "syTxKUxesxWvjEZehOKAapKUhujTEMXEgtMjLdlpCVGhnU", "syTxKUxesxWvjEZehOKAapKUhujTEMXEgtMjLdlpCVGhnU", "IbAaXncygLmBkElPvcrNnYbgyziPCDBIBvMOqtXvzDXTwvk", "vKsPFamzOXcWTZuBwPeamTkTcjRBHzjGsycFSzUKqNEumaCn", "JEomCuryYGRyWrTVZmxwBjRJCYfRkfWJRExlQHheyhsoCI", "GIqQsLBCuhlpYS liYMBoLKVqrfeOHpQUNCLvYWBiLyTwzPs", "khkuWMaqwHyrpugaQXutckpznuJjHpFIRVjTuItsoekkqtTu", "UNdtasgelrQDTfeUijBuPsEwMXzQjoI UteoFmKjdKtuiEZhWZ", "UNdtasgelrQDTfeUijBuPsEwMXzQjoI UteoFmKjdKtuiEZhWZ", "JRhYeyCljFUjMYaToXPcEuQDIGUfLJAKvdaJfVfMkYNtYDa", "UozVOcrOarAAsNlKFzLtCyZnZmmApm xrybKJeQlHayBGZlAw", "MQKsxwLxJtQdukvKRymESjzjWkBHTbBJvGeFpJnbFsbxCNuN", "ZVTlAgXGXRPNluIAKsOcsLhbefTFgqbZNWnLqIADxVUXPR", "HAntZOpPanxuZbXa iivxxVzkZkSWdTKuHIyupSuKcjDIjD", "bxXcIRoCuZBnTcZOTtpiLgSZLdZPoFwkdbtpcJEvefJLk", "JRhYeyCljFUjMYaToXPcEuQDIGUfLJAKvdaJfVfMkYNtYDa", "vKsPFamzOXcWTZuBwPeamTkTcjRBHzjGsycFSzUKqNEumaCn", "XXSoFnrTQdGdKnkpxBAfNJFOlRefcjOhmPpxTygoFinpSiVBjI", "IbAaXncygLmBkElPvcrNnYbgyziPCDBIBvMOqtXvzDXTwvk", "IbAaXncygLmBkElPvcrNnYbgyziPCDBIBvMOqtXvzDXTwvk", "ZVTlAgXGXRPNluIAKsOcsLhbefTFgqbZNWnLqIADxVUXPR", "PdIDuJAOXCLFtnMiaKnCzakKcZVBVWHUfVZUZIWRGQgnTWmQkj", "vKsPFamzOXcWTZuBwPeamTkTcjRBHzjGsycFSzUKqNEumaCn", "bzeCZFUoxXBdTbbYyoJKFtMiFsxiokfKmJcuOvLXQnhosULUe", "UNdtasgelrQDTfeUijBuPsEwMXzQjoI UteoFmKjdKtuiEZhWZ", "khkuWMaqwHyrpugaQXutckpznuJjHpFIRVjTuItsoekkqtTu", "PdIDuJAOXCLFtnMiaKnCzakKcZVBVWHUfVZUZIWRGQgnTWmQkj", "qAPanowDLahVuurrXOTKbWgONHZf hoXXyPiqChJTvicS", "bzeCZFUoxXBdTbbYyoJKFtMiFsxiokfKmJcuOvLXQnhosULUe", "gqSBPjAsmNDIdmB oOvuPePbpAsYJpwbTtAipDdDNstZxQXEhC"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {7.6796169355E9, 2.37528151E8, 7.474264255E8, 1.06796097615E10, 4.9893969815E9, 2.40838256E8, 4.51629262E8, 9.534287297E9, 2.3396306E8, 1.352671668E9, 7.350817657E9, 7.6363819005E9, 4.4769218065E9, 3.204985341E9, 2.6694292385E9, 6.589102725E8, 6.49821123E8, 5.682564249E9, 1.9142473355E9, 7.6796169355E9, 7.6796169355E9, 4.393436838E9, 3.5771463525E9, 3.6006293275E9, 9.02287975E7, 2.6694292385E9, 1.699121312E9, 2.62318451E8, 1.10186124035E10, 1.013504021E9, 6.9170717E7, 1.8935020085E9, 9.2548293105E9, 5.561618025E9, 5.571303664E9, 2.31307405E8, 4.78135665E8, 2.006075306E9, 4.965740828E9, 3.719225823E9, 4.3300441795E9, 4.84710926E8, 3.219742401E9, 5.1053369965E9, 1.0882801282E10};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> duration = {558066640, 212826, 30862197, 1376418, 706445537, 20985815, 328535249, 280378980, 128401086, 311432033, 334102651, 38614432, 15609958, 851948811, 575898005, 25716459, 145503274, 14940533, 6696985, 114354351, 140439969, 530558991, 29045550, 229531391, 334102651, 941496056, 964071251, 275432290, 30722626, 241992138, 296086641, 58553092, 329459080, 155773539, 851948811, 8363631, 276050806, 399050156, 7327132, 762481282, 941496056, 368869056, 145216548, 197047797, 267627218, 179788283, 29281048};
    vector<string> user = {"AQXXXrWPwhreyUSxDJNOVOmqnanfiGMuBUToZvOSuplXX", "EOFqqmanfFpAjzUxtIVfMOfEogDnuMRRIANtcYvmkePHFr", "QcebOJXLDOassWREcoqutTdpcADI IDsEVQMvQHDbQIiHSx", "EOFqqmanfFpAjzUxtIVfMOfEogDnuMRRIANtcYvmkePHFr", "HotZEHFrmWwKlBNzKJiGg LPIZlCiXXUxOoypSiCxjdHJ", "EOFqqmanfFpAjzUxtIVfMOfEogDnuMRRIANtcYvmkePHFr", "bqkNHftoQPpGmHWCknqfUCvsyNYFdgNKnmHGITrjasXNG", "USkMBCBoxNfuoJmAQUdbhvYNEYDCrJjfPWibbUqKQIopjE", "khhPvpFszrZPNoTUqKqJVNNPWiJbSrBgbNZcbkUQAnRTF", "USkMBCBoxNfuoJmAQUdbhvYNEYDCrJjfPWibbUqKQIopjE", "YjjbZwDUivVEutbM eUWKGHPHRaqLugeOoKqSQaUEpGOMK", "USkMBCBoxNfuoJmAQUdbhvYNEYDCrJjfPWibbUqKQIopjE", "khhPvpFszrZPNoTUqKqJVNNPWiJbSrBgbNZcbkUQAnRTF", "PpAlOWtzE kGFyCBOkwefpltteknXxnwzbvVcZwWygUasTc", "jjZEgHzwCkevElKcblcbzZSqCZpvTeboVJZZCBbXnBebSw", "USkMBCBoxNfuoJmAQUdbhvYNEYDCrJjfPWibbUqKQIopjE", "HotZEHFrmWwKlBNzKJiGg LPIZlCiXXUxOoypSiCxjdHJ", "wiAiHZlPaJeHjzdBZznVrctPzErdsxEuByRuafZwDDAXyXhmt", "EOFqqmanfFpAjzUxtIVfMOfEogDnuMRRIANtcYvmkePHFr", "QcebOJXLDOassWREcoqutTdpcADI IDsEVQMvQHDbQIiHSx", "SCvXXDqIslHnYpQZkOjvuWgVJfJZkLoGoEMkczykVHBIoMOUX", "YTzQXqFgWAiVsBMArmKZxpwgsUicbkkDnNvpdWIgC BkN", "YTzQXqFgWAiVsBMArmKZxpwgsUicbkkDnNvpdWIgC BkN", "bqkNHftoQPpGmHWCknqfUCvsyNYFdgNKnmHGITrjasXNG", "AannjfQgfGhxTaKRScUStiLQnWVViZ uDQKBtcJQVKcIaH", "wwdbpGShwEijKfFqFPtwDlNVOjZVeZmaqXYRDrIlYfsPCUSBg", "fpWeHmdcGquBUqEkByZwMpaQvVHYFiWvgwBsykcgwsyvTh", "wiAiHZlPaJeHjzdBZznVrctPzErdsxEuByRuafZwDDAXyXhmt", "wiAiHZlPaJeHjzdBZznVrctPzErdsxEuByRuafZwDDAXyXhmt", "lluRkPfsOjIcyrVcawIPzGIwfSDGMRDMvQlNMTxdzYmlhxmYe", "SCvXXDqIslHnYpQZkOjvuWgVJfJZkLoGoEMkczykVHBIoMOUX", "AqmjYqsXwpTBeXBoVRadLHlJTBvaxlaXclRBgBkGlCNclXUbS", "wXPgNaAeAuKldgxmNWewlzAzHHItWOMtZJDgIhNuS QFRYUO", "USkMBCBoxNfuoJmAQUdbhvYNEYDCrJjfPWibbUqKQIopjE", "SRVRcPGHGAoMmKITeblIIJHnGzpfy mjQDpALPECZAYAG", "wiAiHZlPaJeHjzdBZznVrctPzErdsxEuByRuafZwDDAXyXhmt", "jjZEgHzwCkevElKcblcbzZSqCZpvTeboVJZZCBbXnBebSw", "DDqAelRlpGMoGEmrFfRcPVrnOdBgwTpJFAvKCA QFPGtgYitW", "bJzdeUwOQGV lqpiTPpYRcaUZhsXFaekahLEytpmtJRJxl", "JIeBpLVAVgEFNIuxVxMtQtFFmTkYZAFrQRgoHrLKooSlXYge", "aDYJmVquEESFZIRECfjbNUpAPpoWaQmqreVZXBLidMbEJ", "bJzdeUwOQGV lqpiTPpYRcaUZhsXFaekahLEytpmtJRJxl", "MOcSYeXMPqNuoslnmfXHgVQyBYhgvukONuyZRBrtJNfcszq", "YTzQXqFgWAiVsBMArmKZxpwgsUicbkkDnNvpdWIgC BkN", "khhPvpFszrZPNoTUqKqJVNNPWiJbSrBgbNZcbkUQAnRTF", "DDqAelRlpGMoGEmrFfRcPVrnOdBgwTpJFAvKCA QFPGtgYitW", "EOFqqmanfFpAjzUxtIVfMOfEogDnuMRRIANtcYvmkePHFr"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {4.0381159E9, 5.8659505E7, 2.777538305E8, 5.9241301E7, 9.2841571125E9, 6.90459995E7, 3.9233502045E9, 6.9612684905E9, 2.622870742E9, 6.976795017E9, 1.8096035545E9, 6.8403862165E9, 2.566475178E9, 9.3569087495E9, 9.2188833465E9, 6.83393723E9, 9.003685981E9, 9.864607645E8, 6.19015845E7, 3.194999075E8, 3.0529726195E9, 5.5395933235E9, 5.288836603E9, 3.8738482755E9, 1.8096035545E9, 1.204707605E10, 1.3481895329E10, 1.116706643E9, 9.94351811E8, 6.49531418E8, 3.1307959555E9, 8.7829638E7, 1.143720038E9, 6.89896577E9, 9.3569087495E9, 9.831723135E8, 9.068959747E9, 4.8060935175E9, 2.16841654E9, 6.415121279E9, 1.204707605E10, 2.349187502E9, 3.34931006E8, 5.3728377265E9, 2.692483808E9, 4.696462581E9, 7.3193616E7};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> duration = {376402113, 235352606, 263139990, 102356454, 506053831, 23310545, 264817855, 212691130, 113262123, 122128540, 376402113, 48734531, 90562590, 506053831, 248286253, 236727927, 96305040, 144893550, 135203523, 5717068, 22249946, 102596482, 142650956, 99094211, 212691130, 141876478, 270701225, 255371613, 139674186, 23910682, 23661913, 376402113, 506053831, 24704008, 376402113, 131929153, 241235976, 250682218, 169754214, 6977055, 4813965, 274045659, 376402113, 506053831, 259699409, 134656946, 153946156, 209033047};
    vector<string> user = {"HXtgypnjjeonUrHeBNBZ wwZlDZcDopIJxcrfChcsBitxrcu", "KRoLjVRzWJGvxKRxlNZgTeSzUBTQeDvlKXmgGWqFRoCAIlHlua", "EeytzAVPviVmMPcXrCcSmJS tJvYbRSLurxRxHlctLcOHS", "tAKFbapGfUFBtfPSAfetHYlQBQFHOmpvnVlJFYNEiuYIgAZ", "gzITbCBaNnhdmcG txPRhfSjvGhdXZYlaWbmmdqSjAxZKLQ", "TEjUdKToUfEBqdIuptIKQxojZiuefi PIXSkBZjhdPhHRh", "XpEZjoCBObgYkWiDlrHUiFft YNYGUyZuVyzgsOtPyydQ", "MZFgDSQXijmuGxOlaVBMUOucBMoVcppzjPrnGxIbvVNTeBGVW", "EeytzAVPviVmMPcXrCcSmJS tJvYbRSLurxRxHlctLcOHS", "ItJiSsSFsABMWiEHxeghCZalYIGIcSvXjwpxvWKVbq VEZuhhR", "ivWPIVbcPEwqUsDDNLSejASOgrHKTwiIRjPS HDcFhgnosvu", "iihQavLtwCmyuVkEPEm AeDGMRbFWCyqvldQSumLUupUT", "ItJiSsSFsABMWiEHxeghCZalYIGIcSvXjwpxvWKVbq VEZuhhR", "pqXHtZTmIpjiFWczbuTStGMHd rnesZrUfWzuffshGcRdIZX", "iihQavLtwCmyuVkEPEm AeDGMRbFWCyqvldQSumLUupUT", "ZCWCfAaianmKdoLfhSPMhbHakErRAARddvWBA PrhfzvkL", "elpFLVpMawbPyPjdsLCTdxRApKkplpUtofHaZFFeBAHlOuPhEQ", "elpFLVpMawbPyPjdsLCTdxRApKkplpUtofHaZFFeBAHlOuPhEQ", "elpFLVpMawbPyPjdsLCTdxRApKkplpUtofHaZFFeBAHlOuPhEQ", "TEjUdKToUfEBqdIuptIKQxojZiuefi PIXSkBZjhdPhHRh", "glgathFAiSnLxfhnHTUzQKwzaWeZQhqJFLoXBHHXlxu wnzPyI", "GBJRTligbCBUqKDcMolWUyelUeoCYqdWjADmpvDdZbXfi", "lPbSYxGWUyyWspMMjkoJdrnrg twTbtWvMOelURBldLevpy", "lPbSYxGWUyyWspMMjkoJdrnrg twTbtWvMOelURBldLevpy", "RlyXYdkZLcIyKBxJJPNjGbVyRRqtHGwAQokkJotMDodaZjxbF", "GBJRTligbCBUqKDcMolWUyelUeoCYqdWjADmpvDdZbXfi", "KRoLjVRzWJGvxKRxlNZgTeSzUBTQeDvlKXmgGWqFRoCAIlHlua", "NTjgehPhHyppQA vBJMejlxFRgMzTcTRWFyJNBISAfVqgKXrw", "ZCWCfAaianmKdoLfhSPMhbHakErRAARddvWBA PrhfzvkL", "TEjUdKToUfEBqdIuptIKQxojZiuefi PIXSkBZjhdPhHRh", "TEjUdKToUfEBqdIuptIKQxojZiuefi PIXSkBZjhdPhHRh", "muoPJVtuSfQYezsaAAtWMullUhzlWNewcLTpfN LFvTnHKmMO", "szLdXqeuPvY eZecUhHGEsuGFsGNIcVYaDFTjFNoWCKsGWNsq", "glgathFAiSnLxfhnHTUzQKwzaWeZQhqJFLoXBHHXlxu wnzPyI", "YYoNhwZtZanaFFhhYPuvMdlwFDDqUaYuUBKDMTNNGNSpE Ki", "GBJRTligbCBUqKDcMolWUyelUeoCYqdWjADmpvDdZbXfi", "XpEZjoCBObgYkWiDlrHUiFft YNYGUyZuVyzgsOtPyydQ", "NTjgehPhHyppQA vBJMejlxFRgMzTcTRWFyJNBISAfVqgKXrw", "TEjUdKToUfEBqdIuptIKQxojZiuefi PIXSkBZjhdPhHRh", "glgathFAiSnLxfhnHTUzQKwzaWeZQhqJFLoXBHHXlxu wnzPyI", "glgathFAiSnLxfhnHTUzQKwzaWeZQhqJFLoXBHHXlxu wnzPyI", "tAKFbapGfUFBtfPSAfetHYlQBQFHOmpvnVlJFYNEiuYIgAZ", "GXjoLTtihRYvJubYrKYLBHPLiBGPeLnJjlgDPyLanlzYKGFW", "QRfnlmnPUCOrkqbvNOrEYBZVmnBVqkGiTr EXYNZHgSNmajRb", "TEjUdKToUfEBqdIuptIKQxojZiuefi PIXSkBZjhdPhHRh", "lPbSYxGWUyyWspMMjkoJdrnrg twTbtWvMOelURBldLevpy", "glgathFAiSnLxfhnHTUzQKwzaWeZQhqJFLoXBHHXlxu wnzPyI", "iihQavLtwCmyuVkEPEm AeDGMRbFWCyqvldQSumLUupUT"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {3.109177198E9, 7.3861063055E9, 3.0525461365E9, 2.9721543685E9, 7.521456918E9, 7.280085275E9, 7.40083893E9, 5.31727825E8, 2.977607203E9, 4.8644653E8, 3.109177198E9, 7.292797268E9, 4.70663555E8, 7.521456918E9, 7.392573129E9, 3.039340105E9, 2.9691286615E9, 2.9934229165E9, 2.988577903E9, 7.2712885365E9, 4.36507233E8, 2.9722743825E9, 2.9923016195E9, 2.970523247E9, 5.31727825E8, 2.9919143805E9, 7.403780615E9, 7.396115809E9, 2.9908132345E9, 7.2803853435E9, 7.280260959E9, 3.109177198E9, 7.521456918E9, 4.37734264E8, 3.109177198E9, 2.986940718E9, 7.3890479905E9, 7.3937711115E9, 7.3533071095E9, 4.288707875E8, 4.277892425E8, 3.057998971E9, 3.109177198E9, 7.521456918E9, 7.398279707E9, 2.9883046145E9, 5.02355338E8, 7.372946526E9};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> duration = {386279877, 101283488, 20049523, 101535413, 20422694, 147231109, 180432491, 208156536, 266993679, 137753332, 20422694, 44864784, 457879476, 36431981, 10399136, 529121718, 203212367, 581449842, 360734109, 20422694, 9214472, 19051031, 11208222, 182146877, 261342252, 88799073, 75329869, 108914264, 437499063, 112741483, 595316534, 42098155, 10023558, 127512402, 366077983, 303716633, 430004239, 248300282, 878430907, 617494869, 83009034, 194783011, 16106321, 774950276, 75704583, 787189824, 160747565, 21930459};
    vector<string> user = {"ZcoZmOMEPqisHJwyKuXvLNCeVlZgNqNkXh gwFIEtZcVoY", "nsqLslWGWTPucGdzpALqLowqgZclwUpGykkMkye CqWqTR", "CnyVKvcgQDLHZDC DcDgSLoqvbSaKjDOVtKEjzXDySNfLMChOw", "svTMOpBkgVsncLYWkQjnKdAaihkBxwmlraxXBsQNle tJU", "PFdekyKwNOyPdgnEkOXTJghZXPqrveoeHxWtkUxfKTeXKd Bhf", "lWAeiakOuIBlOBZRSQcsqgMMPkBYhSFUJbyRvXQXtJHIAXuWLe", "vNWSQgYoZZkDLbYraAWIXlUKaDHMmn PCSckgMbwaOqBpek", "WucRPCBwOnLUTYSDkUEWPezZzVLStXfVOYQn ujNgNgfouT", "XpYubxxxretdzGqJKzlsGTfjqbWoxDBgkHzglQiDYRgPgJOl", "CnyVKvcgQDLHZDC DcDgSLoqvbSaKjDOVtKEjzXDySNfLMChOw", "jrqofnlRrzTCcSCSjsWmeGZrfodDjzRurq gPcsEMTkhSf", "lJNaeaKYsqFCcBkVJ xvVoKmZHIgnVgCfbWOeagRmPkuxx", "WucRPCBwOnLUTYSDkUEWPezZzVLStXfVOYQn ujNgNgfouT", "ZcoZmOMEPqisHJwyKuXvLNCeVlZgNqNkXh gwFIEtZcVoY", "JVlpjHWknYQaZLuvxwTAiSJmbGr PaNetkxYZBXevVZNY", "boQAfSNVYfEXiPsWYqswqcOTinlpwuxVCeKMeNIOpbjrLL", "lWAeiakOuIBlOBZRSQcsqgMMPkBYhSFUJbyRvXQXtJHIAXuWLe", "vNWSQgYoZZkDLbYraAWIXlUKaDHMmn PCSckgMbwaOqBpek", "svTMOpBkgVsncLYWkQjnKdAaihkBxwmlraxXBsQNle tJU", "eORaDpRwWvLHZfptOUNGGvXvSDgjDHjDpWaxGyQJTlthEyt", "YRwpNRuZKOTJHPMrUJrdRnmleZLPrrDqaAFhtZiFznKekRJ", "CnyVKvcgQDLHZDC DcDgSLoqvbSaKjDOVtKEjzXDySNfLMChOw", "YRwpNRuZKOTJHPMrUJrdRnmleZLPrrDqaAFhtZiFznKekRJ", "nsqLslWGWTPucGdzpALqLowqgZclwUpGykkMkye CqWqTR", "GSBVJzMnxdYOztollBHgCcJnORKDYfzoDTyCrGfkPrBqMwkr", "vsGPnZuguwouFlPzADimrrbyBvUFRhEBWisEMwFNaHbkbR", "vspIqitkrlzFNsKOxxrXAsMazeIergfZlSDUjFlwCceSy", "WucRPCBwOnLUTYSDkUEWPezZzVLStXfVOYQn ujNgNgfouT", "vsGPnZuguwouFlPzADimrrbyBvUFRhEBWisEMwFNaHbkbR", "lWAeiakOuIBlOBZRSQcsqgMMPkBYhSFUJbyRvXQXtJHIAXuWLe", "oNsYpIhKPoBRSEVjEovpfqbLHvRuhUkMTlaEzWeFxpgYjzis", "svTMOpBkgVsncLYWkQjnKdAaihkBxwmlraxXBsQNle tJU", "JVlpjHWknYQaZLuvxwTAiSJmbGr PaNetkxYZBXevVZNY", "nsqLslWGWTPucGdzpALqLowqgZclwUpGykkMkye CqWqTR", "lJNaeaKYsqFCcBkVJ xvVoKmZHIgnVgCfbWOeagRmPkuxx", "XpYubxxxretdzGqJKzlsGTfjqbWoxDBgkHzglQiDYRgPgJOl", "vspIqitkrlzFNsKOxxrXAsMazeIergfZlSDUjFlwCceSy", "lWAeiakOuIBlOBZRSQcsqgMMPkBYhSFUJbyRvXQXtJHIAXuWLe", "JRGAgrcyAMOntqbWhZPOixOHoHDrGuejMsYlFOuDznjAGu", "iuZmtIsSpIJxLzijBFvELHtGApuDnaHmUm LuvyDbTEQQ", "XpYubxxxretdzGqJKzlsGTfjqbWoxDBgkHzglQiDYRgPgJOl", "ZcoZmOMEPqisHJwyKuXvLNCeVlZgNqNkXh gwFIEtZcVoY", "uAfdtcEnqFMZBKMxUhKlDMHhSjVcIAFoBVOnbyCVuN bH", "zVDCucZCIzekATClNVrShbhZZVHJDagQcEUBNN WbhWcPJbew", "lWAeiakOuIBlOBZRSQcsqgMMPkBYhSFUJbyRvXQXtJHIAXuWLe", "cKcifRMQpbvoViZtPjWqNWTyGtPQrJXRcuLhUvbzXfOECGe Ji", "uAfdtcEnqFMZBKMxUhKlDMHhSjVcIAFoBVOnbyCVuN bH", "svTMOpBkgVsncLYWkQjnKdAaihkBxwmlraxXBsQNle tJU"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {5.0320524675E9, 1.178748005E9, 2.889921175E8, 2.6214489785E9, 6.1268082E7, 9.2827150075E9, 6.581284156E9, 7.751037621E9, 5.9167639105E9, 3.47844022E8, 6.1268082E7, 1.150538653E9, 7.875899091E9, 4.8571285195E9, 5.6256303E7, 3.626101126E9, 9.3107056365E9, 6.7817928315E9, 2.7510483265E9, 6.1268082E7, 5.5663971E7, 2.884928715E8, 5.6660846E7, 1.2191796995E9, 7.17163494E8, 2.6150808085E9, 1.8293810165E9, 7.701416485E9, 2.7894308035E9, 9.2654701945E9, 4.22141766E9, 2.5917303495E9, 5.6068514E7, 1.191862462E9, 1.3111452525E9, 5.9351253875E9, 2.0067182015E9, 9.333249594E9, 1.0874720184E10, 5.1476599635E9, 5.824771588E9, 4.9363040345E9, 2.870205165E8, 8.034434491E9, 9.2469517445E9, 9.602694365E9, 3.593411385E8, 2.5816465015E9};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> duration = {56792923, 7562010, 24589323, 253085774, 32205066, 41989310, 211312551, 296985580, 42514485, 12601050, 36063557, 293690878, 23045377, 580021660, 723772978, 80269926, 80401773, 27935769, 724230565, 32207398, 543518207, 527264, 28720351, 723772978, 504898417, 23420285, 153139660, 169382408, 71083811, 614602018, 364817837, 40066714, 60143167, 654877906, 24224872, 236152259, 241945569, 10447676, 654877906, 24960882, 481827409, 34580358, 60143167, 785432849, 199277517, 14776836, 3475513, 40066714, 41010778};
    vector<string> user = {"vAIMtJOpKKPfPkbxbQHMhDRKdcxFFHEUlhOMDgDjAQzBpo", "FZiTboEpnRvfsfkAXzzTmDCKJJOIFYimWbPbMoosiElKlqT", "rIhvVoUHOxMuUroYoPLiAeZXwRjkvgFFojVIHzXREyhfNlMs", "LmphePeMUMvvzffbLGWedCGakWVecCaChsyFBIgiuDWFed", "DsPvcDWbBYrPhzHVEIgivJ UWfRPAGVoKUDoDsEgwbIFi", "DsPvcDWbBYrPhzHVEIgivJ UWfRPAGVoKUDoDsEgwbIFi", "FZiTboEpnRvfsfkAXzzTmDCKJJOIFYimWbPbMoosiElKlqT", "qrThuiXMDbFHLqdXesBnHEFhGtAnkoVdzjCWyCnTwTRInd", "vAIMtJOpKKPfPkbxbQHMhDRKdcxFFHEUlhOMDgDjAQzBpo", "WVESBLMIziGHFzPoNINzIv biRnSHwbsGLEsZpktjUmphZ", "DsPvcDWbBYrPhzHVEIgivJ UWfRPAGVoKUDoDsEgwbIFi", "DsPvcDWbBYrPhzHVEIgivJ UWfRPAGVoKUDoDsEgwbIFi", "qrThuiXMDbFHLqdXesBnHEFhGtAnkoVdzjCWyCnTwTRInd", "SFslwKoDewsybGYJQgOnLXHbEGRilFOiUrKuinfMUXiThPQ", "PLdk WKiguNdXqPGrwtTImBGcuBJFPDRlaVlRgfLWZjwT", "fZIHzbzeWggVXzCdmEuz VXzferyYFusTjDOdOYgrYMmq", "TZoVhNxBYkpSCmvJbSNXLoWttSuxSuGeXvbIuAnvTJlPJOFZ", "HYJEyiOHrXRmimELNJyPjehomXFrbkMXzrurfWwWrcmRImfBZb", "LmphePeMUMvvzffbLGWedCGakWVecCaChsyFBIgiuDWFed", "HYJEyiOHrXRmimELNJyPjehomXFrbkMXzrurfWwWrcmRImfBZb", "FtYVMWkrSTICmimoIuAioWsNUysRymaKoNkuOEoHQrLQvih", "qrThuiXMDbFHLqdXesBnHEFhGtAnkoVdzjCWyCnTwTRInd", "vAIMtJOpKKPfPkbxbQHMhDRKdcxFFHEUlhOMDgDjAQzBpo", "KRYRHCZKXdEbNPmbzkEFlF hZvOhtGDBcZKXYjINFJdabPza", "FZiTboEpnRvfsfkAXzzTmDCKJJOIFYimWbPbMoosiElKlqT", "rIhvVoUHOxMuUroYoPLiAeZXwRjkvgFFojVIHzXREyhfNlMs", "vAIMtJOpKKPfPkbxbQHMhDRKdcxFFHEUlhOMDgDjAQzBpo", "TZoVhNxBYkpSCmvJbSNXLoWttSuxSuGeXvbIuAnvTJlPJOFZ", "FtYVMWkrSTICmimoIuAioWsNUysRymaKoNkuOEoHQrLQvih", "qgziAHaXsPITDqmejzwRgeCiVAzBdKlueqbnTrNEzyXYwgrv", "TZoVhNxBYkpSCmvJbSNXLoWttSuxSuGeXvbIuAnvTJlPJOFZ", "kPMelWxUjnplngSuDHYbsmpjnQUtkORQagFP VLQFlRpYzG", "cqEmcgyrqKJWducpwFdeUHiVUCfoXdDGsHWMNFlCIASMBJoKtT", "yElfwenAFdoGFBEfaTjeWNzxvsoGfuxfJnUZPriJdmuvPLTYe", "vAIMtJOpKKPfPkbxbQHMhDRKdcxFFHEUlhOMDgDjAQzBpo", "DsPvcDWbBYrPhzHVEIgivJ UWfRPAGVoKUDoDsEgwbIFi", "rfqrlrGMJAglThCLnmyfAFQiFMCnUuBbxSCgQHWuUnuIdRFOxt", "WVESBLMIziGHFzPoNINzIv biRnSHwbsGLEsZpktjUmphZ", "qLfOUBztmh PSCxoeBvirHcDkBfwYKQldVgfOKvXCdwrKDytFR", "WVESBLMIziGHFzPoNINzIv biRnSHwbsGLEsZpktjUmphZ", "rfqrlrGMJAglThCLnmyfAFQiFMCnUuBbxSCgQHWuUnuIdRFOxt", "SFslwKoDewsybGYJQgOnLXHbEGRilFOiUrKuinfMUXiThPQ", "aJTtgQDmniVMLUrpsTDjzYjwufuDpifcEPIdRzLdmImTZzVBA", "huCNHCdMmxincQqpjSPYQsmYUyWaLKOKa zeLcmnuZQpZ", "fZIHzbzeWggVXzCdmEuz VXzferyYFusTjDOdOYgrYMmq", "DsPvcDWbBYrPhzHVEIgivJ UWfRPAGVoKUDoDsEgwbIFi", "LmphePeMUMvvzffbLGWedCGakWVecCaChsyFBIgiuDWFed", "QVmjUNkxYNYEldyIkrJYkDNfHMqyGgHScwpotzxFZkVjsUyTW", "fZIHzbzeWggVXzCdmEuz VXzferyYFusTjDOdOYgrYMmq"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {5.37674752E8, 7.177459629E9, 1.404376975E8, 1.0023596242E10, 4.759918342E9, 4.764810464E9, 7.2793348995E9, 1.131025447E9, 5.30535533E8, 1.34443561E8, 4.7618475875E9, 4.890661248E9, 9.940553455E8, 2.822305744E9, 7.535565113E9, 1.02266762E9, 2.5724958005E9, 2.80335279E8, 1.02591686375E10, 2.824710935E8, 2.8040540175E9, 9.82796289E8, 5.23638466E8, 7.535565113E9, 7.4261278325E9, 1.398531785E8, 5.858481205E8, 2.616986118E9, 2.5678368195E9, 2.839595923E9, 2.7147038325E9, 6.0100071E7, 2.96438978E8, 5.071254762E9, 5.213907265E8, 4.8618919385E9, 7.2946514085E9, 1.33366874E8, 5.071254762E9, 1.40623477E8, 7.4145923285E9, 2.549585093E9, 2.96438978E8, 9.406657429E9, 1.0821714155E9, 4.751204227E9, 9.8987911115E9, 6.0100071E7, 1.003038046E9};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> duration = {169155144, 340952531, 499270006, 487786751, 377258447, 158141942, 499270006, 399804084, 77223902, 273772972, 987380210, 376021298, 291509562, 80816857, 499270006, 867853840, 75980383, 203533864, 313467194, 299429608, 339396001, 987380210, 867853840, 6669720, 444497652, 987380210, 135274665, 499270006, 343012209, 4226580, 58413295, 126191573, 145348021, 11483255, 41802546, 225497034, 852105545, 99465922, 319814728, 142977659, 499270006, 499057151, 488423899, 47688414, 145310850, 341128064, 57297541, 10300134};
    vector<string> user = {"wKAYARUieYMelNfpRHfNxxmxTFMKbysTJeshGkWFu nlzkHGS", "GwPMaZwMWxzveCjvnfQGjSirlqSioxqFoYyeAprHVdeozc", "qCpUwz sAOpRExoodOsbXKVREafgRFrPuhoqqqMcuMvMFWnsSS", "zcf TDSWFyspAyOLCmGKJvIivplzVciLbXCPAmBmRdRxx", "GwPMaZwMWxzveCjvnfQGjSirlqSioxqFoYyeAprHVdeozc", "ZPpmqBwwfcAydvALwpTSMlxZSqrE bNrQWCltjmBTGZpnfoqr", "XtWlneIKsyMeJfKbmcYcCMFlYhLPZl LaDOBDEJMZhzXjnC", "habyUWOiHbKaWPYpYVgnAoctGxGtmuzIhhoCKmixPaikN", "qYsyxhqxNwQWVTCYALkavHtyeKxAfpMGbSiNiiLqaQFWKmSmg", "vTWJCFTVRQsKNxAYDmzkoXPWZDQPbBItVrXVjUQSZhpSfShz", "qQJAIEWqJcCoxqbPGnBkDvxJkzVsVuViyStnBmVFfVlm Y", "UMaMAScSwGcWtDWdOUGekEcNTvtyKJeksegYBxQXetJUCCPoal", "NzNGuQyJdIplbdgGKDfyrqVxTzBdEylXgpzLxLlVUPaclmI", "rZZZyWGWzapQeQBZJCnVAfYnehRbodjDD pWSiBcxchwmA", "hdbfymZvuNOJsC SojdIoiVsqmoXKfVlTXueSDwQCjSZn", "RwFGHmTrHHvIJCwiujZWzcqSakjfLZpFCpVONbYdRJdIj", "qYsyxhqxNwQWVTCYALkavHtyeKxAfpMGbSiNiiLqaQFWKmSmg", "NzNGuQyJdIplbdgGKDfyrqVxTzBdEylXgpzLxLlVUPaclmI", "rZZZyWGWzapQeQBZJCnVAfYnehRbodjDD pWSiBcxchwmA", "UMaMAScSwGcWtDWdOUGekEcNTvtyKJeksegYBxQXetJUCCPoal", "qYsyxhqxNwQWVTCYALkavHtyeKxAfpMGbSiNiiLqaQFWKmSmg", "oHwktpDskNacfHUXvhnBkjhjiCMANiPTfbkrNJesfIzCeIHiG", "KTjyJnBR GvrnQsiQcdmWOEJgKMfuRBhYHRkNhHalbzklqP", "qYsyxhqxNwQWVTCYALkavHtyeKxAfpMGbSiNiiLqaQFWKmSmg", "xuRZRqCOiimuXDcmLtZjAmfajroUQuEFpAkdEdJorltdRIGp", "bqHePVHwQpyyheXJJsuauvGkLsODvUsuYyRQhGRsGEGJxxk", "ABzOCEtukNEXwGOfQU TZBCscukSZYHwxzIpthUnpxAfFHrOy", "AbbGCdbZpdATrKjjhXtjBhRQIGAg dlhNaLxFnZLYbagRSpNk", "XGunjHzgCLgWClZOoOMzyuBuXV JYyXiuHaNvIKsWXFJWMU", "NzNGuQyJdIplbdgGKDfyrqVxTzBdEylXgpzLxLlVUPaclmI", "YqpmzTopvfWzaFrzXcPyvlZolBsGDuQntFn yzmLiHmeT", "GwPMaZwMWxzveCjvnfQGjSirlqSioxqFoYyeAprHVdeozc", "xuRZRqCOiimuXDcmLtZjAmfajroUQuEFpAkdEdJorltdRIGp", "zcf TDSWFyspAyOLCmGKJvIivplzVciLbXCPAmBmRdRxx", "YqpmzTopvfWzaFrzXcPyvlZolBsGDuQntFn yzmLiHmeT", "vTWJCFTVRQsKNxAYDmzkoXPWZDQPbBItVrXVjUQSZhpSfShz", "ABzOCEtukNEXwGOfQU TZBCscukSZYHwxzIpthUnpxAfFHrOy", "habyUWOiHbKaWPYpYVgnAoctGxGtmuzIhhoCKmixPaikN", "wKAYARUieYMelNfpRHfNxxmxTFMKbysTJeshGkWFu nlzkHGS", "GwPMaZwMWxzveCjvnfQGjSirlqSioxqFoYyeAprHVdeozc", "hczGp XCaZmqPHFIuPMevZYZpzvxusLQZdvrAvTnATNwCzmxQ", "XGunjHzgCLgWClZOoOMzyuBuXV JYyXiuHaNvIKsWXFJWMU", "YqpmzTopvfWzaFrzXcPyvlZolBsGDuQntFn yzmLiHmeT", "rZZZyWGWzapQeQBZJCnVAfYnehRbodjDD pWSiBcxchwmA", "XGunjHzgCLgWClZOoOMzyuBuXV JYyXiuHaNvIKsWXFJWMU", "ZPpmqBwwfcAydvALwpTSMlxZSqrE bNrQWCltjmBTGZpnfoqr", "rZZZyWGWzapQeQBZJCnVAfYnehRbodjDD pWSiBcxchwmA", "wKAYARUieYMelNfpRHfNxxmxTFMKbysTJeshGkWFu nlzkHGS"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {3.329832611E9, 1.32127709725E10, 3.494890042E9, 3.4891484145E9, 1.32309239305E10, 3.32432601E9, 3.494890042E9, 3.445157081E9, 3.28386699E9, 3.382141525E9, 1.3535984812E10, 8.194731593E9, 3.39100982E9, 3.2856634675E9, 3.494890042E9, 9.646227157E9, 3.2832452305E9, 3.347021971E9, 3.401988636E9, 8.156435748E9, 3.4149530395E9, 1.3535984812E10, 9.646227157E9, 3.248589899E9, 7.5963214805E9, 1.3535984812E10, 1.31099320395E10, 3.494890042E9, 1.32138008115E10, 3.247368329E9, 6.8140365955E9, 1.31053904935E10, 7.446746665E9, 3.2509966665E9, 6.805731221E9, 3.358003556E9, 1.34683474795E10, 3.294988E9, 3.405162403E9, 1.31137835365E10, 3.494890042E9, 1.32918232825E10, 7.0290418975E9, 3.269099246E9, 1.3114950132E10, 3.415819071E9, 3.2739038095E9, 3.250405106E9};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> duration = {1691098, 142233178, 193482957, 210397521, 344637358, 882902438, 642189158, 81433591, 3629111, 895035557, 3161883, 156082330, 38905844, 642189158, 149585828, 5215513, 3244646, 220423413, 882902438, 124446396, 150237047, 4714954, 102998079, 496164691, 443021170, 324404656, 882902438, 551890253, 446650281, 4227227, 121810573, 236252760, 357335794, 331012185, 287057364, 89314487, 703906772, 882902438, 136025379, 143124682, 448706201, 642189158, 111056636, 207742081, 13690550, 895035557, 252526910, 123775845, 30876086};
    vector<string> user = {"DhlJgzHkYVfUxKMXCeCxDa sjHIlVUCrUHYfLIonNudNSTEBb", "ygaF lszFyatyOKlqWqPzfbNZbYXYBdvhiLkCUNVvNdmbj", "eYoKdjbaYAGXNuHqopBOM qxmpyMQZqxdFsCmlBecOVJP", "lqBIumsnbDYlgnKMDRwpEIUdbKelJhtQTUpRITaLyXS WQgIYv", "BVNaBuBGfb udQHCMWLHENCLObOIUBbkEKQuPfPYGKvGHZQDm", "sXGJahVccBKoFMtcdyJBJkuKJWGJaMhmkuYMSxzhGuhxYh", "kcHnMWeoNubtRiptLRqhvooLoWcpRGBNwRGnfQxCHvmfHS", "pVIreXOAJTzaoauysyriACGcebE IAmrOMeSgGVgIfAbwqMu", "kKYMZHddsR lNPimVvEjHrspsgIkMkWNgJgJqniwwlwyFuZK", "ygxhd kZvoxTrMvuVWyQECzbhdCFpIwSwZGgpWrNuWNeI", "pVIreXOAJTzaoauysyriACGcebE IAmrOMeSgGVgIfAbwqMu", "kplMnOFOrawascNFtjhC ljNWaIMcZBBigoMnaJGmABLQRwR", "pVIreXOAJTzaoauysyriACGcebE IAmrOMeSgGVgIfAbwqMu", "YoJIgYPKmSaybnAMyaWPPjMBlPundrBEiipauYcpnBCrmt", "ygaF lszFyatyOKlqWqPzfbNZbYXYBdvhiLkCUNVvNdmbj", "pVIreXOAJTzaoauysyriACGcebE IAmrOMeSgGVgIfAbwqMu", "DhlJgzHkYVfUxKMXCeCxDa sjHIlVUCrUHYfLIonNudNSTEBb", "xAJQySBEsmzYUkRaTyMdLSKVYarLeTzezXIaRdIJCIGZlD", "OVQoQBotK mrsoUMnanaCVyrSwhcWuLLUZeAgAQkoEkXbS", "kplMnOFOrawascNFtjhC ljNWaIMcZBBigoMnaJGmABLQRwR", "BVNaBuBGfb udQHCMWLHENCLObOIUBbkEKQuPfPYGKvGHZQDm", "xAJQySBEsmzYUkRaTyMdLSKVYarLeTzezXIaRdIJCIGZlD", "kplMnOFOrawascNFtjhC ljNWaIMcZBBigoMnaJGmABLQRwR", "mavYVCVpuInfAVYMgNMQAvZLAlIceKcyGxDuFZEWoHZDU", "kKYMZHddsR lNPimVvEjHrspsgIkMkWNgJgJqniwwlwyFuZK", "xAJQySBEsmzYUkRaTyMdLSKVYarLeTzezXIaRdIJCIGZlD", "hShMgwZbPUTPWAKgVJlEvXtDDDoCDtpyGxHsTtGutgMVuyHp", "uYqQnlNsbDOcunyvylFzTUdZaGBLdzq xSLxXWBhLLiucpydP", "hUTlLlRObNHZanESINkhWMY AaCdrYaeDEfkkGUQjRmKUtoSKZ", "DhlJgzHkYVfUxKMXCeCxDa sjHIlVUCrUHYfLIonNudNSTEBb", "BVNaBuBGfb udQHCMWLHENCLObOIUBbkEKQuPfPYGKvGHZQDm", "lqBIumsnbDYlgnKMDRwpEIUdbKelJhtQTUpRITaLyXS WQgIYv", "PIcNXAsIMTPfWQES ZpylZkBMUFabSCssbaNnssMRPeyNJ", "uYqQnlNsbDOcunyvylFzTUdZaGBLdzq xSLxXWBhLLiucpydP", "pVIreXOAJTzaoauysyriACGcebE IAmrOMeSgGVgIfAbwqMu", "PIcNXAsIMTPfWQES ZpylZkBMUFabSCssbaNnssMRPeyNJ", "ToLGxsFReOvUGdnjsCWZqTQdYaUpLFZnImexJYptfYaqQ Rn", "XwQBYURAApTnJFk ycXJEfRLgzvhFShPuCwxKwwaNfQudwVdOi", "xAJQySBEsmzYUkRaTyMdLSKVYarLeTzezXIaRdIJCIGZlD", "kplMnOFOrawascNFtjhC ljNWaIMcZBBigoMnaJGmABLQRwR", "eYoKdjbaYAGXNuHqopBOM qxmpyMQZqxdFsCmlBecOVJP", "RHGgmrbCBOJDbEOTHiack TkSOvuWCPzVrmIwbSVoYdZOqWl", "ygaF lszFyatyOKlqWqPzfbNZbYXYBdvhiLkCUNVvNdmbj", "mavYVCVpuInfAVYMgNMQAvZLAlIceKcyGxDuFZEWoHZDU", "BVNaBuBGfb udQHCMWLHENCLObOIUBbkEKQuPfPYGKvGHZQDm", "zECAytipBuCxOBZIyLsetkJVwmdMpGfYsaBnnybMtNULZIYwi", "BVNaBuBGfb udQHCMWLHENCLObOIUBbkEKQuPfPYGKvGHZQDm", "ygaF lszFyatyOKlqWqPzfbNZbYXYBdvhiLkCUNVvNdmbj", "pVIreXOAJTzaoauysyriACGcebE IAmrOMeSgGVgIfAbwqMu"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {5427034.5, 2.840182452E9, 4.6768371445E9, 1.230987434E9, 1.0778881921E10, 1.1048014461E10, 4.901190245E9, 1.166505469E9, 1.127603229E9, 1.45978238915E10, 1.127369615E9, 2.847107028E9, 1.1452415955E9, 4.901190245E9, 2.843858777E9, 1.12839643E9, 6203808.5, 6.3174698895E9, 1.1048014461E10, 2.831289061E9, 1.06816817655E10, 6.20961566E9, 2.8205649025E9, 7.5020315015E9, 1.3472992585E9, 6.369460511E9, 1.1048014461E10, 1.08825083685E10, 1.349113814E9, 6695099.0, 1.06674685285E10, 1.2439150535E9, 1.3044565705E9, 1.07720693345E10, 1.2693173555E9, 1.170445917E9, 7.605902542E9, 1.1048014461E10, 6.2752708725E9, 2.840628204E9, 4.8044487665E9, 4.901190245E9, 2.824594181E9, 7.3578201965E9, 1.0613408517E10, 1.45978238915E10, 1.0732826697E10, 2.8309537855E9, 1.1412267165E9};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> duration = {143769705, 125261935, 117031285, 51085209, 43029517, 190428207, 430284204, 21593793, 125306912, 147697817, 338126024, 614932282, 85196157, 338126024, 23272273, 15523524, 4079328, 22274248, 31050268, 831530808, 8475341, 8318164, 29799811, 338126024, 21082565, 25877945, 672427, 108808665, 673062093, 170349750, 338126024, 317043459, 452796919, 13693872, 56151369, 212190606, 150467182, 50072562, 467289771, 617756953, 695336341, 21854419, 175441169, 230250651, 74176726, 144466408, 183951375, 758701987};
    vector<string> user = {"uOIenqWPfWGDTIgpvlKGOLQlGEuEhTWwEFMspEFLLBfkzU", "LTZnREnozIYTTTAfBbO vSiAtdmVWHLSwgQBJzSBMFjgJDp", "TGNWbUrBUaUWiVOOWStjShKYUpJKIAykDaZmMXpztTjbAnhdV", "vmJiioplIgYVdsTeWmUKIddxpzPrWuqCcy EEdnBcvxcXZjB", "btyPAfaXkWlMpajayjFmZpCInbdadYwAjekpRgaBS IyTxvQEB", "TEENusVXgKBgdWIPEyflycUimhlYXAnqvLbYBZYAivtwA", "XEGJiddSGYBdwircDLJNRwmyrlEEKengFasOlLBIdejol", "HoIaFMyxrtMgMNHaxAtzpjpIRRTtTIwFXHTyXxdmhJpeiRAu", "XibUcfUzcoHhwlqAKsKhVsUu vKgYxKjKMAwZBXmQfuUcrvqn", "TEENusVXgKBgdWIPEyflycUimhlYXAnqvLbYBZYAivtwA", "OBylgyEqtrZGBmaufMfXjG jEmaiVeTfIjMFVhxKOvCPL", "uOIenqWPfWGDTIgpvlKGOLQlGEuEhTWwEFMspEFLLBfkzU", "ANYBLAIJhsGlaxTEHFrRMZtrNzNd WcVNfcXmhXCoPcWX", "QVOahfTiSQnMpDfwryerzXZvObBbEuXIanYVkVoosFisZ", "ANYBLAIJhsGlaxTEHFrRMZtrNzNd WcVNfcXmhXCoPcWX", "XibUcfUzcoHhwlqAKsKhVsUu vKgYxKjKMAwZBXmQfuUcrvqn", "HoIaFMyxrtMgMNHaxAtzpjpIRRTtTIwFXHTyXxdmhJpeiRAu", "qgCryRlNMaRdWYxkHxCAxpWdqKsJXqKgtcxEOQOQdJAjZ XbrO", "HoIaFMyxrtMgMNHaxAtzpjpIRRTtTIwFXHTyXxdmhJpeiRAu", "LGhVsNiCItczRMZFDl WErbyxakRYlrRLWxtTrxrcAObuhD", "ANYBLAIJhsGlaxTEHFrRMZtrNzNd WcVNfcXmhXCoPcWX", "ANYBLAIJhsGlaxTEHFrRMZtrNzNd WcVNfcXmhXCoPcWX", "bEOahivlSNmLqpiMqMfCqtzgHvRnisJQYIAbZZHG YFpctxCau", "fKISkfyUQSyJcLwuyBDIkBDskKfBKNFTQqKLKMfejnfxejKV", "MhBnGbyCwLGvWIijfFgYtpUBFJ VsRjIzxUwHFsRRLyMz", "FTltgxLWKmyVrteIyejPkeTdfBXOaqGhKQdfRPhQpoFpFRnCl", "TGNWbUrBUaUWiVOOWStjShKYUpJKIAykDaZmMXpztTjbAnhdV", "xuatfmEjxfqvDYPHwlRHPdbXLbpbBEhigaLOzINLSVabZ", "qgCryRlNMaRdWYxkHxCAxpWdqKsJXqKgtcxEOQOQdJAjZ XbrO", "TGNWbUrBUaUWiVOOWStjShKYUpJKIAykDaZmMXpztTjbAnhdV", "jemNsZXHrFzpaQrAqTvErInHUlSJTzClAvIumDbazCCNNDb", "MhBnGbyCwLGvWIijfFgYtpUBFJ VsRjIzxUwHFsRRLyMz", "xuatfmEjxfqvDYPHwlRHPdbXLbpbBEhigaLOzINLSVabZ", "btyPAfaXkWlMpajayjFmZpCInbdadYwAjekpRgaBS IyTxvQEB", "xuatfmEjxfqvDYPHwlRHPdbXLbpbBEhigaLOzINLSVabZ", "FTltgxLWKmyVrteIyejPkeTdfBXOaqGhKQdfRPhQpoFpFRnCl", "vLWydaytZcINaUrZvOTYaZqpgNecBpdvEhDCETSPAiWggXfS", "TGNWbUrBUaUWiVOOWStjShKYUpJKIAykDaZmMXpztTjbAnhdV", "vLWydaytZcINaUrZvOTYaZqpgNecBpdvEhDCETSPAiWggXfS", "AXsCCo sBVSSqcACbwrJjewAIsAkxPhhntMAOLtfGVENfEa", "UGXQRBXyBMaXHiYcNihQZwpNeaaRTpQWqVnLOxROMbzYdFuey", "XibUcfUzcoHhwlqAKsKhVsUu vKgYxKjKMAwZBXmQfuUcrvqn", "XibUcfUzcoHhwlqAKsKhVsUu vKgYxKjKMAwZBXmQfuUcrvqn", "bEOahivlSNmLqpiMqMfCqtzgHvRnisJQYIAbZZHG YFpctxCau", "vmJiioplIgYVdsTeWmUKIddxpzPrWuqCcy EEdnBcvxcXZjB", "XEGJiddSGYBdwircDLJNRwmyrlEEKengFasOlLBIdejol", "XEGJiddSGYBdwircDLJNRwmyrlEEKengFasOlLBIdejol", "fcluJOgxSNEAWzFePpPpmUNNgYuWCCVJKJYQkxBCNcaxyXRs"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {8.146241162E9, 3.63970648E8, 2.3983713345E9, 3.26882285E8, 7.82381475E7, 2.4350697955E9, 8.2894984115E9, 6.75202855E7, 2.402509148E9, 2.4137046005E9, 2.508918704E9, 8.3818224505E9, 3.43937759E8, 2.508918704E9, 3.12975817E8, 2.347617454E9, 5.8763053E7, 6.252104112E9, 7.2248523E7, 1.0043940098E10, 3.05577351E8, 3.054987625E8, 8.722262705E8, 2.508918704E9, 2.3503969745E9, 6.21205831E8, 2.3401919055E9, 4.67339955E9, 6.5774980345E9, 2.425030567E9, 2.508918704E9, 2.4983774215E9, 4.845393677E9, 6.3570325E7, 4.647070902E9, 7.143621615E8, 4.6942288085E9, 2.364891973E9, 4.852640103E9, 4.927873694E9, 6.5886351585E9, 2.3507829015E9, 2.4275762765E9, 9.724516905E8, 3.384280435E8, 8.1465895135E9, 8.166331997E9, 8.453707303E9};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> duration = {337686189, 747398391, 628824639, 104067903, 252376829, 41872406, 26160153, 95079646, 561046328, 577400187, 34051071, 579298263, 397378279, 189370659, 4170478, 818422998, 74709821, 60496883, 400361230, 17614339, 267735952, 112195888, 121534824, 217947664, 92438390, 589628634, 389655450, 938564989, 19612994, 88707197, 203919055, 780820666, 48525874, 2941138, 2247174, 575127785, 77012596, 189876325, 412798147, 67109431, 307545647, 59564347, 157769757, 44886165, 200250985};
    vector<string> user = {"TIokkunyPwlTmRUVgEVCTSCCjVQvaIuZgYXDLHuoAZMWDTU", "sSFPjdxNlzxPLYy TbVARzXBvrybfoagJiqxpPMPebTjY", "yADRopKXCNlrBmIIsAwUnvoKJE lwhxQKvKUNlVfxImIZr", "QlrBarqceMYoIyWYYfazzwQWijqFXKeFZQoYVlsQEjzuBRI", "ZVqSgGCwjfUxaJcanqAOncVMIsyZCOZVekZbfjeSGsvqmgtoJB", "AGKJzzFAQUIkoIfFlFtccWcLpYruIi qbbTvavPnDHanzowQA", "HTngCCUWbtWTXCCOkJtvFjTKDIYCLdoGUOyNldd yasMmekyFb", "TPoUDumKpKNkMAPewXCYrDcArWsWwVmBvdbSOIAeGpQgfm", "QlrBarqceMYoIyWYYfazzwQWijqFXKeFZQoYVlsQEjzuBRI", "TIokkunyPwlTmRUVgEVCTSCCjVQvaIuZgYXDLHuoAZMWDTU", "Ju PKyNlRBguxvjWerycjOOVedznFyVpuiKdYjCTeGGSbKZ", "AUiTrQfryOpHvLLcOSzAnSUhyxBkSBDwaAyphaanRhHah", "SclnJELBbXGBmmphgVUJeJCLzvgZWbrSvuHATW zrJQRGQquud", "TPoUDumKpKNkMAPewXCYrDcArWsWwVmBvdbSOIAeGpQgfm", "QYaEJhFwJRIOcaebGUfSGvgPxRmvpkSUzYGVjdTRCfHybQT", "zQabjqkKdPTvzu KwZVkNQgWOcqpNLAStCrrnxJGLKacyMQl", "UQLQXCird xHxRFzGFWkYhtlLZgxeOmmBOIrEmBmSMwiXvTz", "HTngCCUWbtWTXCCOkJtvFjTKDIYCLdoGUOyNldd yasMmekyFb", "UQLQXCird xHxRFzGFWkYhtlLZgxeOmmBOIrEmBmSMwiXvTz", "ABvWOqCXDKXmewIfYUXmUWGqCECPJbKPFBYomWx CkPoN", "SclnJELBbXGBmmphgVUJeJCLzvgZWbrSvuHATW zrJQRGQquud", "TswPoQTKlSDANRpS sCorAeeLBXFdtxbcqoFMsiAKODVvxUnf", "AGKJzzFAQUIkoIfFlFtccWcLpYruIi qbbTvavPnDHanzowQA", "ReGhsIvkjmeVgdkIvYmyMrtYHrmjLPtEfHlAbGSXuRjniyqg", "Ju PKyNlRBguxvjWerycjOOVedznFyVpuiKdYjCTeGGSbKZ", "JShqGabBxlVRHF nQNTOxMBjFwsosjAnoROqcvVUFAaazBGUrC", "RaBQwjBGMXIwdkdhTbWyLnuuZmyAOpiqTaVSzGmXIxgrqx", "KokCjKmGPrKYKUTlvfxKywuPhNKaTNUjaYVjcQQsnzglijO", "AGKJzzFAQUIkoIfFlFtccWcLpYruIi qbbTvavPnDHanzowQA", "HTngCCUWbtWTXCCOkJtvFjTKDIYCLdoGUOyNldd yasMmekyFb", "UQLQXCird xHxRFzGFWkYhtlLZgxeOmmBOIrEmBmSMwiXvTz", "QtzBwOlSFmrhOMDPxzHlSOhXrRtaBsVbPRfZnECaVNflYcmph", "TPoUDumKpKNkMAPewXCYrDcArWsWwVmBvdbSOIAeGpQgfm", "Ju PKyNlRBguxvjWerycjOOVedznFyVpuiKdYjCTeGGSbKZ", "AGKJzzFAQUIkoIfFlFtccWcLpYruIi qbbTvavPnDHanzowQA", "QYaEJhFwJRIOcaebGUfSGvgPxRmvpkSUzYGVjdTRCfHybQT", "HTngCCUWbtWTXCCOkJtvFjTKDIYCLdoGUOyNldd yasMmekyFb", "ABvWOqCXDKXmewIfYUXmUWGqCECPJbKPFBYomWx CkPoN", "vFVawVAONKoYHxivZBwiOCgfZAqbuxKaxyqDtPjxhuBPmunQ", "AGKJzzFAQUIkoIfFlFtccWcLpYruIi qbbTvavPnDHanzowQA", "QNyVstRmIeBKPJtCYppEKEHNiyOunppmJlxwOREckmGwiMO", "TIokkunyPwlTmRUVgEVCTSCCjVQvaIuZgYXDLHuoAZMWDTU", "JShqGabBxlVRHF nQNTOxMBjFwsosjAnoROqcvVUFAaazBGUrC", "ABvWOqCXDKXmewIfYUXmUWGqCECPJbKPFBYomWx CkPoN", "RaBQwjBGMXIwdkdhTbWyLnuuZmyAOpiqTaVSzGmXIxgrqx"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.1597721499E10, 8.0300451945E9, 4.89972904E9, 5.6168772225E9, 1.0905162235E9, 9.85264012E8, 9.774078855E8, 1.9906550265E9, 5.845366435E9, 1.1717578498E10, 1.93936723E8, 3.3913488345E9, 5.7635324105E9, 2.037800533E9, 3.103784942E9, 1.0002988054E10, 6.6068074655E9, 9.945762505E8, 6.76963317E9, 9.731349785E8, 5.698711247E9, 1.12195888E8, 1.025095221E9, 4.59574151E8, 2.231303825E8, 7.951160316E9, 4.1707789085E9, 1.0941553043E10, 9.74134306E8, 1.0086814075E9, 6.6714120825E9, 9.184565056E9, 1.9673781405E9, 1.783817565E8, 9.65451396E8, 3.3892635955E9, 1.002834107E9, 1.0592659715E9, 2.52240144E9, 9.978825245E8, 1.776627114E9, 1.1458660578E10, 7.7352308775E9, 9.867708915E8, 4.076076676E9};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> duration = {766076092, 925288632, 657089113, 221109511, 37615933, 512254974, 138370682, 94721078, 467048056, 56611195, 675171838, 925288632, 925288632, 32078570, 196463087, 628094836, 380194886, 110070286, 445017287, 925288632, 337159813, 423949092, 159212540, 925288632, 28994277, 704179121, 212071826, 262391692, 346807065, 379889141, 657089113, 610154174, 183423304, 310282048, 348936404, 858595142, 32838772, 87935770, 708186567, 600477918, 501339540, 83464830, 217102065, 362618851, 474432265, 657089113};
    vector<string> user = {"RTIRjJeKOhlpYLbApGscLxpbNDItaAqIaWUflCmXlcudWLt", "xJFM hLbdDRegLcvNMMsdfQlJXQtGbhOqtDGdsyisquUffWZD", "QvgRsntBzFyGmeJgPfBMlUeSoJZeoJXIywUfvLlgJAfugM", "ToqKztegtQolUugFTQQrQzRwABmTIKwmQMyHMXzGp IxG", "kiCWqUKcoXlqfowucXGhmgjUotQprQeLjon mmopAfmpAgWUiW", "dyCbhYGwBfIxSGAZWirYaibeqLqEPRsAiVqgeCqMrZCBdfmP", "CEQzkWdZZsTvcoJBkYCzhvCLPwRYpbiSmWCmTqbTmJRVzPdNXz", "ygnfMPRWZjAhyNKfxgLViqlizjzJdELNoXDDdaCTShRUso", "kiCWqUKcoXlqfowucXGhmgjUotQprQeLjon mmopAfmpAgWUiW", "ACeQtbEodBauyJfKceXbDDKjdULhGvSXtyaWLoXLagYGWZu", "ytCfwXXElFLcwNxbfoyyLvsdPLmTNSwxDB QFbScZYIPV", "BHTFDvvdtocjAIcGxFv mucVYpluotdvgFCEJBssKFvYPAW", "QvJgCqDvKhwMFkfgiDJVrQLBPMPvpuQZiZnGJkmJQsHGuV", "pGdzPfMOQIAVjpuRFypzbRnUxmcmKGMpYCcNyCmfFQWzYvhDg", "oArzAZTmRrFTRpjZMguRCjuKAiSIpJxVMlKYIOhRihbruqyloh", "VjjLiROrelZjrqdgCHynCTQXSoJoIH nkAhSxXwOFBjjru", "dyCbhYGwBfIxSGAZWirYaibeqLqEPRsAiVqgeCqMrZCBdfmP", "CEQzkWdZZsTvcoJBkYCzhvCLPwRYpbiSmWCmTqbTmJRVzPdNXz", "lEtmnZKXgTapHwmZHOerMqCOpiKFCGyfdkqqyKIsSLVmfgGInp", "UtOJNgBDlB XSdyYfdluUnPAmhQpJdkcqmQEnGiWiIBnyKZjI", "kiCWqUKcoXlqfowucXGhmgjUotQprQeLjon mmopAfmpAgWUiW", "vtABYmtcjrTFpZZcAZMmfzteycpsZVhVcfdtaiOfDIOlvqZkzi", "RTIRjJeKOhlpYLbApGscLxpbNDItaAqIaWUflCmXlcudWLt", "ShXFTtiRvrTLIEnRHanBvKQCqZRbrmNulDQRLZqcddcFiQbt", "VjjLiROrelZjrqdgCHynCTQXSoJoIH nkAhSxXwOFBjjru", "ToqKztegtQolUugFTQQrQzRwABmTIKwmQMyHMXzGp IxG", "lEtmnZKXgTapHwmZHOerMqCOpiKFCGyfdkqqyKIsSLVmfgGInp", "pGdzPfMOQIAVjpuRFypzbRnUxmcmKGMpYCcNyCmfFQWzYvhDg", "mIaBfAJxsdbrLhYddBzHyhttiZawBMWdZzbdUAdUGRxAW", "oArzAZTmRrFTRpjZMguRCjuKAiSIpJxVMlKYIOhRihbruqyloh", "iVtWiWCrQVaiAErphxRPorZCrcVYPrwhzcqsYnFRcBuWEZL", "CEQzkWdZZsTvcoJBkYCzhvCLPwRYpbiSmWCmTqbTmJRVzPdNXz", "ytCfwXXElFLcwNxbfoyyLvsdPLmTNSwxDB QFbScZYIPV", "mIaBfAJxsdbrLhYddBzHyhttiZawBMWdZzbdUAdUGRxAW", "oArzAZTmRrFTRpjZMguRCjuKAiSIpJxVMlKYIOhRihbruqyloh", "bOaAYqHDSfsxKmBXvNfeAKGQHxMr aZiOlUERjYnzjKJV", "dyCbhYGwBfIxSGAZWirYaibeqLqEPRsAiVqgeCqMrZCBdfmP", "ygnfMPRWZjAhyNKfxgLViqlizjzJdELNoXDDdaCTShRUso", "FvKKCoeRiFjczkTsvtbFdWEoPzENVAVMjUNGIXvDdRgBFu", "ACeQtbEodBauyJfKceXbDDKjdULhGvSXtyaWLoXLagYGWZu", "vtABYmtcjrTFpZZcAZMmfzteycpsZVhVcfdtaiOfDIOlvqZkzi", "kiCWqUKcoXlqfowucXGhmgjUotQprQeLjon mmopAfmpAgWUiW", "FvKKCoeRiFjczkTsvtbFdWEoPzENVAVMjUNGIXvDdRgBFu", "pGdzPfMOQIAVjpuRFypzbRnUxmcmKGMpYCcNyCmfFQWzYvhDg", "ygnfMPRWZjAhyNKfxgLViqlizjzJdELNoXDDdaCTShRUso", "oSyxKXvPLuGFpOOReICGXmWyyzgumtHF sdWpXNwfPESehIJUz"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.4424357281E10, 1.4503963551E10, 3.285445565E9, 1.41518739905E10, 1.40601272015E10, 1.4297446722E10, 7.270880071E9, 3.0042615475E9, 1.4274843263E10, 2.985206606E9, 7.539280649E9, 1.4503963551E10, 1.4503963551E10, 2.9729402935E9, 1.41395507785E10, 3.2709484265E9, 1.4231416678E10, 7.256729873E9, 3.179409652E9, 1.4503963551E10, 1.42098991415E10, 1.4253293781E10, 1.4120925505E10, 1.4503963551E10, 2.971398147E9, 1.43934087955E10, 3.0629369215E9, 3.0880968545E9, 3.130304541E9, 1.42312638055E10, 3.285445565E9, 7.506771817E9, 7.293406382E9, 3.1120420325E9, 1.4215787437E10, 7.630992301E9, 1.4057738621E10, 3.0008688935E9, 1.43954125185E10, 3.2571399675E9, 1.4291989005E10, 1.408305165E10, 1.41498702675E10, 3.138210434E9, 3.194117141E9, 3.285445565E9};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> duration = {160622361, 87413186, 949000309, 20682032, 909685984, 708250264, 99642460, 949000309, 442398436, 167624110, 201435720, 418235357, 533047534, 980610765, 790612581, 123212150, 360658662, 327248635, 582437349, 745830873, 625359105, 560899188, 245985575, 909685984, 129262408, 124011567, 304459884, 17338479, 702243102, 277090308, 745830873, 538212329, 98865755, 39950662, 470801683, 207442882, 603477805, 188425329, 300687935, 172086080, 35991068, 14075818, 117782850, 99193010, 208777474, 197573663, 588341647, 99642460, 176930602, 297635143};
    vector<string> user = {"AJZGTIWNlIJtQONHKPRVnYaOahVOOGPtCoaMlWHOR JrQpOlxC", "jFWtkGMADOUdEMRUZUOHnJKhIDnhGzrVsDpcIxepdeejBZGf", "QeKxiYduhNlXiHuaBsRPdKaEiwBsU FTHTFFOIsyXEYyxvzo", "izWlbvMjjZMuQQeSaSODIqrnGBnpCLTR DHosBIZxqhdMIxFh", "XQbNKttayLwDEpcZfJmkokubulpXDtWUTgAeiMItfcpiU", "tvEyxSLvSoRZHjtSRGarQmyobGFaNJavoKOLmDDHHgBkSJsV", "ppFsWEpPTGKnsBtlkxQJFyqMwdrrZmnTfNvwcIsKRXDDzmcG", "ThiXzzadXwPWKFzhWetPgxlOkDQoBMDvShrRPoOVCDwLKYsP", "TSMQfDobsnsFXqPqXiLNdeeerREpoNOzELWd fgLbpsDyqp", "KCEboaDCOToNMFqm CtcWYghkqYPLCrqVdcuAiaXDJdDlyU", "tvEyxSLvSoRZHjtSRGarQmyobGFaNJavoKOLmDDHHgBkSJsV", "BVqWlzHLdhMTIpOrUeiqtLTYIjXDPIMrZzVByRYYHaQPIXO", "QyyPYeoPWXvjwJDgbgdviaOELuGnwWwReOuCdxGUitxLcnwEAM", "Af VNwPmDHNTXprnOUwluQEafkcYEEOfpmtwpMkAEqLYmun", "YUDFcmhGOvq WvRFxjWbLqNRgDjwOywqAGuhbOgrfETjO", "FvcAPcFt daGntrBPkfpHqohTpmmpRUehnrInztPZRupwLL", "xTvnmvJAwXFlwpFItddNggoxqRBHAfJpnxVjIsXwtp HRSjM", "snfZDAlSlEheNqXUFSfYEqPzxOmHQVPuXcSNCUIjpYQGetQ", "snfZDAlSlEheNqXUFSfYEqPzxOmHQVPuXcSNCUIjpYQGetQ", "vsZNYvaIgjHAnsToWQVjMZoxznsbEOUuaMUSpzVrwmJUxoytQ", "unUYdFRyMOxKraiGXmWHejGihfGVylpqXmdGFrDUIdnBx", "jFWtkGMADOUdEMRUZUOHnJKhIDnhGzrVsDpcIxepdeejBZGf", "FvcAPcFt daGntrBPkfpHqohTpmmpRUehnrInztPZRupwLL", "SfjUepatOTJHfQYLLxMtoejeWuXzSwvJkNxmbEshYKmKecj", "unUYdFRyMOxKraiGXmWHejGihfGVylpqXmdGFrDUIdnBx", "KCEboaDCOToNMFqm CtcWYghkqYPLCrqVdcuAiaXDJdDlyU", "AJZGTIWNlIJtQONHKPRVnYaOahVOOGPtCoaMlWHOR JrQpOlxC", "FvcAPcFt daGntrBPkfpHqohTpmmpRUehnrInztPZRupwLL", "MIdxFkPoxdMo RITJAHIxxFfigqANkkqNmMeKDXMGHVcKbIgGP", "izWlbvMjjZMuQQeSaSODIqrnGBnpCLTR DHosBIZxqhdMIxFh", "UcxJtyJvcxPBnSdBmfoKWWzTFaTuNiWcQoDeZvt iCIepgV", "TSMQfDobsnsFXqPqXiLNdeeerREpoNOzELWd fgLbpsDyqp", "FvcAPcFt daGntrBPkfpHqohTpmmpRUehnrInztPZRupwLL", "izWlbvMjjZMuQQeSaSODIqrnGBnpCLTR DHosBIZxqhdMIxFh", "izWlbvMjjZMuQQeSaSODIqrnGBnpCLTR DHosBIZxqhdMIxFh", "MIdxFkPoxdMo RITJAHIxxFfigqANkkqNmMeKDXMGHVcKbIgGP", "WXxRKSXwisblyjnAFmBwkBJGkKPSqZQAruw sEzyarQzMBf", "WXxRKSXwisblyjnAFmBwkBJGkKPSqZQAruw sEzyarQzMBf", "jFWtkGMADOUdEMRUZUOHnJKhIDnhGzrVsDpcIxepdeejBZGf", "izWlbvMjjZMuQQeSaSODIqrnGBnpCLTR DHosBIZxqhdMIxFh", "unUYdFRyMOxKraiGXmWHejGihfGVylpqXmdGFrDUIdnBx", "KCEboaDCOToNMFqm CtcWYghkqYPLCrqVdcuAiaXDJdDlyU", "WXxRKSXwisblyjnAFmBwkBJGkKPSqZQAruw sEzyarQzMBf", "KCEboaDCOToNMFqm CtcWYghkqYPLCrqVdcuAiaXDJdDlyU", "KCEboaDCOToNMFqm CtcWYghkqYPLCrqVdcuAiaXDJdDlyU", "FvcAPcFt daGntrBPkfpHqohTpmmpRUehnrInztPZRupwLL", "xTvnmvJAwXFlwpFItddNggoxqRBHAfJpnxVjIsXwtp HRSjM", "HUVLbazP yxqsGiLUMVCAQazknniAALwBLHPgwpHUqwRTemA", "KCEboaDCOToNMFqm CtcWYghkqYPLCrqVdcuAiaXDJdDlyU", "FvcAPcFt daGntrBPkfpHqohTpmmpRUehnrInztPZRupwLL"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {9.3037258E8, 1.287897266E10, 1.33097662215E10, 1.6704829231E10, 8.663050489E9, 8.562332629E9, 1.4946369E8, 1.33097662215E10, 1.6915687433E10, 4.3770427285E9, 8.308925357E9, 6.17520277E8, 1.615650056E9, 1.71847935975E10, 4.688536964E9, 1.675609429E10, 1.3015595398E10, 8.3718318145E9, 8.4994261715E9, 2.7343963655E9, 4.605910226E9, 1.3115715661E10, 1.68174810025E10, 8.663050489E9, 4.3578618775E9, 4.355236457E9, 1.0022913415E9, 1.67031574545E10, 8.559329048E9, 1.6833033369E10, 2.7343963655E9, 1.69635943795E10, 1.67439210925E10, 1.6714463546E10, 1.69298890565E10, 8.311928938E9, 8.5099463995E9, 8.3024201615E9, 1.29856100345E10, 1.6780531255E10, 4.3112262075E9, 4.3002685825E9, 8.267098922E9, 4.3428271785E9, 4.3976194105E9, 1.67932750465E10, 1.31294368905E10, 1.4946369E8, 4.3816959745E9, 1.68433057865E10};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> duration = {778701649, 225061232, 777340514, 778701649, 778701649, 24796902, 158925928, 121876964, 82889077, 23523783, 169554979, 64424293, 777340514, 581199999, 473091830, 304248684, 413171877, 32590297, 64424293, 15057758, 192441710, 63979182, 36658640, 28047786, 49753589, 462384788, 475398014, 778701649, 303303635, 1502027, 18623325, 129132390, 777340514, 97171917, 35017809, 358537886, 5515797, 274430942, 56539122, 4409269, 54515538, 62141603, 91098830, 193943737, 23356384, 54818324, 777340514, 197501650};
    vector<string> user = {"NGozIVEVRinLQufIsWGEgd NymDvNkXUMWqTGlmAGRSXX", "yyvCQctoBobifAvcvBizsUuUkdzaMotNCepLymOgcFHchmVU", "mEqmOyhnbMzYpVOboJCxjVqaeOdiDlXmo XPjbjWQEHoBJCxnu", "oasqgYOYzNixHdmSLiTsNCDgcBKPEHXUVGihHD cjourBq", "qkxgvgsELNQznZmZeYFHJkjFUwweENeglCHqsEYhvFgiPSeP", "IBVdiXyxXidwtkUwtsghfYrcCdNm iSXPNjjojIRppMScHoQgx", "hgJkTqawKzuiEdRNLcdAzNOUryoWQKSeNIbvqemcu brYdP", "KEEImLzaxqwShlzgf VGCxAPJHiTYscswtBCgpolFVnwN", "IndguvWMOwUO rLexyVlsmrPAEHmJYrAQLzGXtVkmxEJk", "KEEImLzaxqwShlzgf VGCxAPJHiTYscswtBCgpolFVnwN", "KEEImLzaxqwShlzgf VGCxAPJHiTYscswtBCgpolFVnwN", "gPVBlzZGpSbZDKIPXJakmfNSKESXLExhREfQckEeSVJxLMhqqp", "fJjExmipDwwFyYzBxhgCRRLz jKQHOYNovvZokLgUQrmJ", "GFZyKdQTXIesYqPHuHlWMmKHzyOTMhlKsRwiuFTMGxvrlXWntV", "wRiutyJuvtHUzkpNrZEgSOrDtsVskApWFTKrjgAPrGTUxRlpLA", "wRiutyJuvtHUzkpNrZEgSOrDtsVskApWFTKrjgAPrGTUxRlpLA", "fEggbEFxcQgIwhMQdANmapkdulpgYkLFZaCHIYM FgxjqGX", "yyvCQctoBobifAvcvBizsUuUkdzaMotNCepLymOgcFHchmVU", "YNADGOGkUIRlilYIQvqLgmRsCKsdoSI pVgfoFDbxpFqDCOp", "zRtGAFVscvmKqfzazNvEVDQNrxLQvEFbxMJOkVyKw wbY", "LgvAnIXlQqlDPXIfkxzQWPrPWKyiDO phzFmYCxkmiDwZJ", "yyvCQctoBobifAvcvBizsUuUkdzaMotNCepLymOgcFHchmVU", "EUzlVHbsKdzMGFHNUMsHzBWKDCTflQVzBdMjuah epdjNr", "IBVdiXyxXidwtkUwtsghfYrcCdNm iSXPNjjojIRppMScHoQgx", "zRtGAFVscvmKqfzazNvEVDQNrxLQvEFbxMJOkVyKw wbY", "KEEImLzaxqwShlzgf VGCxAPJHiTYscswtBCgpolFVnwN", "LqnZVmBCNAQUiWxKDsAdNGsjWXwHMkBuVjYLMWAaYdzyPH", "oupHahMwtGYHQSNnhoOzsDUfOHbLibPWrkmIakyBBJrXD", "LqnZVmBCNAQUiWxKDsAdNGsjWXwHMkBuVjYLMWAaYdzyPH", "LgvAnIXlQqlDPXIfkxzQWPrPWKyiDO phzFmYCxkmiDwZJ", "IBVdiXyxXidwtkUwtsghfYrcCdNm iSXPNjjojIRppMScHoQgx", "zRtGAFVscvmKqfzazNvEVDQNrxLQvEFbxMJOkVyKw wbY", "lLsRrIgymzaMaxmhPJwCzrUqoSeMEsazYPkIjJMNvPuQZxqPSb", "yyvCQctoBobifAvcvBizsUuUkdzaMotNCepLymOgcFHchmVU", "hgJkTqawKzuiEdRNLcdAzNOUryoWQKSeNIbvqemcu brYdP", "yyvCQctoBobifAvcvBizsUuUkdzaMotNCepLymOgcFHchmVU", "IBVdiXyxXidwtkUwtsghfYrcCdNm iSXPNjjojIRppMScHoQgx", "fEggbEFxcQgIwhMQdANmapkdulpgYkLFZaCHIYM FgxjqGX", "IndguvWMOwUO rLexyVlsmrPAEHmJYrAQLzGXtVkmxEJk", "EUzlVHbsKdzMGFHNUMsHzBWKDCTflQVzBdMjuah epdjNr", "IndguvWMOwUO rLexyVlsmrPAEHmJYrAQLzGXtVkmxEJk", "IBVdiXyxXidwtkUwtsghfYrcCdNm iSXPNjjojIRppMScHoQgx", "fEggbEFxcQgIwhMQdANmapkdulpgYkLFZaCHIYM FgxjqGX", "L ivEgldnZtgiZHNHRKppzSIdovtkKYKdkpmvvWBQRPLLGQHX", "EUzlVHbsKdzMGFHNUMsHzBWKDCTflQVzBdMjuah epdjNr", "IBVdiXyxXidwtkUwtsghfYrcCdNm iSXPNjjojIRppMScHoQgx", "AY DWUFACYxjoKJlDCrjpngbilDOVxjchzlJdHbhxMcVwiuU", "GFZyKdQTXIesYqPHuHlWMmKHzyOTMhlKsRwiuFTMGxvrlXWntV"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {9.913125495E9, 4.190157716E9, 4.466297357E9, 9.913125495E9, 9.913125495E9, 7.87502541E8, 8.54567054E8, 4.138565582E9, 8.165486285E8, 4.0893889915E9, 4.1624045895E9, 1.28848586E8, 4.466297357E9, 9.81437467E9, 4.314173015E9, 4.229751442E9, 9.730360609E9, 4.0939222485E9, 1.28848586E8, 7.82632969E8, 8.71324945E8, 4.109616691E9, 1.149657595E8, 7.89127983E8, 7.999808845E8, 4.308819494E9, 9.7614736775E9, 9.913125495E9, 9.675426488E9, 7.758551035E8, 7.844157525E8, 8.39670285E8, 4.466297357E9, 4.1262130585E9, 7.926129945E8, 4.256896043E9, 7.778619885E8, 9.6609901415E9, 8.03373651E8, 9.8841074E7, 8.02361859E8, 8.061748915E8, 9.5693240855E9, 8.720759585E8, 1.083146315E8, 8.02513252E8, 4.466297357E9, 9.6225254955E9};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> duration = {741680155, 25160667, 478347297, 536163429, 581880137, 37260379, 1748245, 133027086, 246916407, 758970556, 407474854, 378650826, 536163429, 43588816, 56762312, 16485269, 50211378, 295568846, 741680155, 715844731, 102053098, 198651063, 166387307, 28824028, 172961410, 134809663, 136841653, 12446518, 487736991, 16157306, 72136994, 111906008, 524973565, 253943164, 174000148, 140943374, 153755844, 741680155, 303363739, 216706590, 239339302, 78851867, 174721212, 407474854, 401353766, 69066759, 581880137, 407474854, 362163281};
    vector<string> user = {"lOnzlFLbnbSqIi pLyMqimcqrSCsQPjlZqhjKqVCZshXuNy", "tinPFwozuvTTcdxvUGiMtYLCNmQUUOkxCZahBxZHhlscejFZJO", "CfzxiUnAfCdRadiEBcDZVwZMuLzHCaDcwlZwVPXWkFemYkacD", "JjhLcUDwFthxTnOZNGVhQiQYLYs aidIKBgWNcDKNkmvI", "YpqnukYuxSkUWkaqNOABDaLvxAVVgofbMoCkipKvgwXPpvBGN", "qRnuuKWTGbxptTzjQMAOjlUSEThaJSszqccptb dkoxiGEDzg", "UViCMWBVOiDrgdEoVpkszrSheehEGdfL VdNLlDzEfwvMbB", "qRnuuKWTGbxptTzjQMAOjlUSEThaJSszqccptb dkoxiGEDzg", "tinPFwozuvTTcdxvUGiMtYLCNmQUUOkxCZahBxZHhlscejFZJO", "iDgefwSYOBFtVEXFbitctMlzwneuXeAxUApkrhOZLaivihUSrV", "WZzpDJQXrfChbSelTGHZkfWmsmTafkEstkTNwsbhdnKKIJwfo", "NyMFsEufailtSWsejjXTBGEQNocbfALhrfwNQJqPylPzsrc", "dhlUzzSUELGEkCFxrIepScDbpm CvpMIDiyeUtbdEMMxugTlR", "gidrPwxWUcUdqvkoPJwyBlgZhaUMJumDbIZYivrtcYCPWpRB", "OYmDOGgWgHwitmjtpPNvEJGaAwHizMldNeJmMOgLDpfnvlL", "gidrPwxWUcUdqvkoPJwyBlgZhaUMJumDbIZYivrtcYCPWpRB", "qRnuuKWTGbxptTzjQMAOjlUSEThaJSszqccptb dkoxiGEDzg", "TAYqgsHKJveGidBWqGSqzXTCMqOVxjFQILRwidVUrmAov", "VmpOjcADfxUUJYTTvzoh AUWtpllRCxQBCAvpDYbhZwhhjYiSZ", "XQcIOldEVXUsDoOYyvGaSnCWkVRhlgSfqomRkIWNO iJFZbH", "OYmDOGgWgHwitmjtpPNvEJGaAwHizMldNeJmMOgLDpfnvlL", "gidrPwxWUcUdqvkoPJwyBlgZhaUMJumDbIZYivrtcYCPWpRB", "UViCMWBVOiDrgdEoVpkszrSheehEGdfL VdNLlDzEfwvMbB", "NyMFsEufailtSWsejjXTBGEQNocbfALhrfwNQJqPylPzsrc", "tinPFwozuvTTcdxvUGiMtYLCNmQUUOkxCZahBxZHhlscejFZJO", "BtnyJvgnRicvWkEfElqjFyOBIseByUPSOFoauLmLDt iZYybDW", "tinPFwozuvTTcdxvUGiMtYLCNmQUUOkxCZahBxZHhlscejFZJO", "OYmDOGgWgHwitmjtpPNvEJGaAwHizMldNeJmMOgLDpfnvlL", "AzLmNInEJxnCvTlDUgxCSLzLKuBlbWWYqZkLjZrVkwTrU", "OYmDOGgWgHwitmjtpPNvEJGaAwHizMldNeJmMOgLDpfnvlL", "OYmDOGgWgHwitmjtpPNvEJGaAwHizMldNeJmMOgLDpfnvlL", "TAYqgsHKJveGidBWqGSqzXTCMqOVxjFQILRwidVUrmAov", "CrFbsDzGvVXxAOoPIoPcPhJpp egXWzCyqcYiFltpwqqTMjhC", "AzLmNInEJxnCvTlDUgxCSLzLKuBlbWWYqZkLjZrVkwTrU", "vlsFpgziCJjOyNScFKGrrwAomzDpQDHqespeJaDmPCZSD", "qRnuuKWTGbxptTzjQMAOjlUSEThaJSszqccptb dkoxiGEDzg", "gidrPwxWUcUdqvkoPJwyBlgZhaUMJumDbIZYivrtcYCPWpRB", "kzyFkgXZlSpgOVlxdeHCTANajxtnRlmPJSPQBkrbVctcpzx", "gidrPwxWUcUdqvkoPJwyBlgZhaUMJumDbIZYivrtcYCPWpRB", "CrFbsDzGvVXxAOoPIoPcPhJpp egXWzCyqcYiFltpwqqTMjhC", "UViCMWBVOiDrgdEoVpkszrSheehEGdfL VdNLlDzEfwvMbB", "OYmDOGgWgHwitmjtpPNvEJGaAwHizMldNeJmMOgLDpfnvlL", "qRnuuKWTGbxptTzjQMAOjlUSEThaJSszqccptb dkoxiGEDzg", "zDzWjzjz OsyuXypOGUBjJsBQZumSJGPglhiVdthjAWEj", "BtnyJvgnRicvWkEfElqjFyOBIseByUPSOFoauLmLDt iZYybDW", "OYmDOGgWgHwitmjtpPNvEJGaAwHizMldNeJmMOgLDpfnvlL", "ZYgwsLYtmvSMyqTtTZYEsypxXtpDYOzAoGNIwsOUNbwFc", "PynKybauoFkJYIDfvPMFReSLt NoUilqLHHXMkLuLmIXyWkJHg", "vlsFpgziCJjOyNScFKGrrwAomzDpQDHqespeJaDmPCZSD"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.1413858758E10, 6.896888959E9, 3.330671275E9, 4.939161562E9, 7.175248694E9, 4.689710037E9, 1.4270361115E9, 4.7375933905E9, 7.007766829E9, 1.3656189624E10, 1.629899416E9, 1.615487402E9, 4.939161562E9, 8.49476797E9, 1.454543145E9, 8.4812161965E9, 4.6961855365E9, 1.573946412E9, 1.1413858758E10, 8.8308959275E9, 1.477188538E9, 8.5722990935E9, 1.5093556425E9, 1.440574003E9, 6.9707893305E9, 4.738484679E9, 6.952729452E9, 1.432385248E9, 1.1286887176E10, 1.434240642E9, 1.462230486E9, 1.482114993E9, 1.1305505463E10, 1.11699902625E10, 4.7580799215E9, 4.7415515345E9, 8.549851484E9, 1.1413858758E10, 8.6246554315E9, 1.11513719755E10, 1.54583164E9, 1.4655879225E9, 4.7584404535E9, 1.629899416E9, 4.8717567305E9, 1.4606953685E9, 7.175248694E9, 1.629899416E9, 4.852161488E9};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> duration = {210066780, 406613790, 588728653, 547336223, 204292050, 339378412, 107710877, 187861101, 26672740, 901128330, 132665444, 445221203, 607267800, 402692275, 726342015, 586509396, 330082176, 140177055, 207121484, 362945210, 89257799, 402975750, 31498419, 29303765, 136767341, 467529134, 260838789, 157584483, 166244697, 120757552, 102564012, 292152158, 730260855, 287499877, 270441963, 789927878, 658712068, 153102093, 564571044, 102011513, 123640309, 216739845, 113796986, 566998290, 29121659, 805893519};
    vector<string> user = {"kenTv AGaPKomnedgCiYtmleIZCNaNBFEDcOSRGrWXMtztq", "ceUZdyBZwzyrHLRGfJmNAypIaWxRwJYtNIqvnWgvWjpGDAuM", "SbFfDhzmzcXJCdO nnbvJdvjGSvvRPUkeLnOYuiUZplKKtAOhn", "vhShUTHMDoZQliQlN YetTnyWBPeRKXTcRhRZLzPEsfnYfs", "EjIGiDzltSXGfaRyvsUXmLrSsZWJMTaEAEzCZuDNmtMWgTADC", "QSxNHgYowDh ashiXRNpIIZJLMmfSUCjkNDiIOIRorCpc", "lKguTgxqynYqIqNmf HNGjhClTSirtAIuftWShQbsIALBX", "SbFfDhzmzcXJCdO nnbvJdvjGSvvRPUkeLnOYuiUZplKKtAOhn", "ceUZdyBZwzyrHLRGfJmNAypIaWxRwJYtNIqvnWgvWjpGDAuM", "uhzhlaQkuozWHxuHKCndmBsJoxLizBGFGFHCLqfHDCCFfc", "hiVKGViajIguYRdjpoMmCInypCYaADcFQQ JeuFjDzuNZ", "ctDKcrDXKitYhUzTkMMvldMOAdViOUtRhoGUEPQcVl ZL", "zoPrsajPWJrVMKeHvKNpVccPfvqnQaFysceXsOdemWWZuGt", "ZoWuJNGRhXQPcvlZdOuocpdtiVBaDkuWFwAPmLlusKsCtZYJd", "kenTv AGaPKomnedgCiYtmleIZCNaNBFEDcOSRGrWXMtztq", "BQdArStgFYEulkUXvMOqLnpyaCLKrReHBNgiQYgsZBjdbvxwfG", "IuxAHylLRZxcGNaqeHAjgRrBoGxiYABzsTLnRRHfolEWWeCO", "ceUZdyBZwzyrHLRGfJmNAypIaWxRwJYtNIqvnWgvWjpGDAuM", "DRXTNJjqTM pUXruKYhGCXiDYnHoGRQCixZNqDzSkjWbfVDPQ", "ceUZdyBZwzyrHLRGfJmNAypIaWxRwJYtNIqvnWgvWjpGDAuM", "CjvsQtSRWqQCOSzKJrroekZRKLCdrcI gsOLeNOrNasVB", "EjIGiDzltSXGfaRyvsUXmLrSsZWJMTaEAEzCZuDNmtMWgTADC", "oaqpABEJaNkFfhTLnrUseipbFZDifhZaKYLScoFeeGCZRn", "SbFfDhzmzcXJCdO nnbvJdvjGSvvRPUkeLnOYuiUZplKKtAOhn", "DRXTNJjqTM pUXruKYhGCXiDYnHoGRQCixZNqDzSkjWbfVDPQ", "mPfFKfIjLkGYZMcGNEHbEAVpVcFsYjJWmkiDxIxveIXELk", "QSxNHgYowDh ashiXRNpIIZJLMmfSUCjkNDiIOIRorCpc", "CjvsQtSRWqQCOSzKJrroekZRKLCdrcI gsOLeNOrNasVB", "BQdArStgFYEulkUXvMOqLnpyaCLKrReHBNgiQYgsZBjdbvxwfG", "hiVKGViajIguYRdjpoMmCInypCYaADcFQQ JeuFjDzuNZ", "ZoWuJNGRhXQPcvlZdOuocpdtiVBaDkuWFwAPmLlusKsCtZYJd", "CjvsQtSRWqQCOSzKJrroekZRKLCdrcI gsOLeNOrNasVB", "kRyFXcgTEQzzEOYDELhCjDa yokbbqnkdjZMNLDDTWjOP", "ctDKcrDXKitYhUzTkMMvldMOAdViOUtRhoGUEPQcVl ZL", "xtUopfTSmogniHYPCakqkSJmgQeZJjFyGqQEKfhSOhfTmg L", "oaqpABEJaNkFfhTLnrUseipbFZDifhZaKYLScoFeeGCZRn", "aAHdTMGFJLHvUFxhhoUxCnwYCGDULkTaYoZGDkvnIfudEvlVPL", "CjvsQtSRWqQCOSzKJrroekZRKLCdrcI gsOLeNOrNasVB", "otkJYBdLGPKcPVdWcTEGfIcbxSlv CbEzrPanjdNECTdbk", "ZoWuJNGRhXQPcvlZdOuocpdtiVBaDkuWFwAPmLlusKsCtZYJd", "DRXTNJjqTM pUXruKYhGCXiDYnHoGRQCixZNqDzSkjWbfVDPQ", "ByxZvTNHdEdDyUACRlJMBNPQaMcmqXmcRjpcIzQxDbzVaFaQ", "CjvsQtSRWqQCOSzKJrroekZRKLCdrcI gsOLeNOrNasVB", "hiVKGViajIguYRdjpoMmCInypCYaADcFQQ JeuFjDzuNZ", "aAHdTMGFJLHvUFxhhoUxCnwYCGDULkTaYoZGDkvnIfudEvlVPL", "MHicjEkeYQwZhdkHGIuOHEwIReixVfByLOtPPsMUgNzLPLYl"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.4299629407E10, 1.4397902912E10, 9.800735357E9, 2.407369352E9, 4.585205322E9, 3.4417382025E9, 1.07710877E8, 9.600301581E9, 1.4207932387E10, 1.3258187222E10, 1.1191754674E10, 7.4010267205E9, 4.786693197E9, 4.6844054345E9, 1.45577670245E10, 8.2144084035E9, 9.24974861E8, 1.42646845445E10, 1.496064737E9, 1.4376068622E10, 9.55099993E9, 4.684547172E9, 1.1962094953E10, 9.521022913E9, 1.4608876655E9, 1.626268562E9, 3.402468391E9, 9.585163272E9, 8.004276054E9, 1.1185800728E10, 4.534341303E9, 9.6524471095E9, 6.812055579E9, 7.3221660575E9, 5.94892685E8, 1.23413096825E10, 6.0672338945E9, 9.582922077E9, 2.971940396E9, 4.5340650535E9, 1.4543241495E9, 3.24450722E8, 9.5632695235E9, 1.1408921097E10, 5.75243869E9, 9.90931779E9};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> duration = {306029687, 306029687, 298930473, 71536874, 691524082, 30384014, 37743681, 410443609, 102739071, 247722333, 3625250, 34385757, 145326850, 2857683, 8931195, 31437373, 51767192, 42973000, 645558217, 852940577, 166367818, 259197247, 53172742, 208648684, 457596353, 291931585, 444521429, 31070368, 71250001, 12796462, 27231452, 231965795, 70834645, 111503829, 225313006, 546652806, 22193529, 42762932, 475115932, 21376330, 85581475, 533856344, 546652806, 166441874, 281080473, 852940577, 46314053, 24474884, 3741196, 39081692};
    vector<string> user = {"PMJgLyFYkOJkeTsSzCbEBfyVfLxHEprvWIbQvgd DWieJ", "kkwJYaJCDWjWFKnZuZHXThWpucLbAXFPcZVllJMbXgWIAjP", "IojcHWZNXKDxcSpQycOtprAzPeHLGjtLCYoHtZewywxhmqQb", "bxSdFpQWeDfIqDHyjHtUBygvLDJvWkrdXtMZUYstUnrZgqLX", "RZGvNDGAwyRckXlHphAuGqKQnGFeZGmLUMio MiMBaISdCwwV", "BpeYkgZoDVECJCdWGeSvRVmdVglqAbmoztKViWNAOhZqMlmc", "TIDWUyFaL pilaJnADnSAoZAODsfJisySXHcmqSvkAVWmMODE", "RcpkyTVfqaaNvdVUycgUKEqkFZarahNyoyyjXWnBMRM NvM", "BpeYkgZoDVECJCdWGeSvRVmdVglqAbmoztKViWNAOhZqMlmc", "IojcHWZNXKDxcSpQycOtprAzPeHLGjtLCYoHtZewywxhmqQb", "RTwndsIRrvxkIMFUFyeIzogfhKLAsuLlfishcEQzWukpG", "BpeYkgZoDVECJCdWGeSvRVmdVglqAbmoztKViWNAOhZqMlmc", "PiUYgodgqOmlBkdxOHRoauljBmMaBHyDsBYXhcJlWooTdX", "RTwndsIRrvxkIMFUFyeIzogfhKLAsuLlfishcEQzWukpG", "vqMmQoqUicFtLctuIhGpxmYZZRfjaCcQABFgIbxgSyAzZMCgjd", "qJLfBwsikPEZiLGTZEoHyyGbCuTzVYbhBPyQYctQeXFKu", "SBkXuCjdWpalHHVRTaornrdCfFoUAdtBIvhzkKimhGeWAPyqa", "TIDWUyFaL pilaJnADnSAoZAODsfJisySXHcmqSvkAVWmMODE", "OklbjaIEOXpBpVLqYlyJ NAvakZAcEgExMIGfIVvQIlbSME", "yRRnESGnfCcsiQWbbfKyzqpzEgbrigWVKIQ QmSlAKXmZh", "YGfBjSbD mxqrSovSAbRFBwTyPmLUAAtTvxZdyxfnxqECYyk", "kYGKFATQf TaAjcBForaPcTiaZlktCcCmnGYobGwIOJUMJmbkl", "BpeYkgZoDVECJCdWGeSvRVmdVglqAbmoztKViWNAOhZqMlmc", "YGfBjSbD mxqrSovSAbRFBwTyPmLUAAtTvxZdyxfnxqECYyk", "qnMksQXinlGitEqFYgbIwXzQFBbrxhhUKgpqe uSnnWVYWXf", "QDhbpleQJWcyTdzDDTCrevYANxjXLxeJDmWktyTFkBbkWI", "YGfBjSbD mxqrSovSAbRFBwTyPmLUAAtTvxZdyxfnxqECYyk", "RTwndsIRrvxkIMFUFyeIzogfhKLAsuLlfishcEQzWukpG", "BpeYkgZoDVECJCdWGeSvRVmdVglqAbmoztKViWNAOhZqMlmc", "PDUgVAtXiVLyreWR KIxAvxLtPYZIfQKUqiFBxsDjXJLRrN", "hibPiNzPnlgyOKKjMwGdQ ArGPKDiZFKAhzXATkhiSLeZs", "hibPiNzPnlgyOKKjMwGdQ ArGPKDiZFKAhzXATkhiSLeZs", "RTwndsIRrvxkIMFUFyeIzogfhKLAsuLlfishcEQzWukpG", "OklbjaIEOXpBpVLqYlyJ NAvakZAcEgExMIGfIVvQIlbSME", "TIDWUyFaL pilaJnADnSAoZAODsfJisySXHcmqSvkAVWmMODE", "luAdGHbxg YtusmMYGVNZCGVNegTzFdKhivnBYearosFWR", "RTwndsIRrvxkIMFUFyeIzogfhKLAsuLlfishcEQzWukpG", "YGfBjSbD mxqrSovSAbRFBwTyPmLUAAtTvxZdyxfnxqECYyk", "bxSdFpQWeDfIqDHyjHtUBygvLDJvWkrdXtMZUYstUnrZgqLX", "SBkXuCjdWpalHHVRTaornrdCfFoUAdtBIvhzkKimhGeWAPyqa", "SBkXuCjdWpalHHVRTaornrdCfFoUAdtBIvhzkKimhGeWAPyqa", "PDUgVAtXiVLyreWR KIxAvxLtPYZIfQKUqiFBxsDjXJLRrN", "OEfrPsdiqxrjktrsuZJOFagnDiXLnwkNxCoJbRTNXAxmdnjmRG", "qJLfBwsikPEZiLGTZEoHyyGbCuTzVYbhBPyQYctQeXFKu", "RcpkyTVfqaaNvdVUycgUKEqkFZarahNyoyyjXWnBMRM NvM", "jffOqKFGdfHwUlqwA pvHLJgcGldNIvwvUCrapHVQPLLvPfyA", "qnMksQXinlGitEqFYgbIwXzQFBbrxhhUKgpqe uSnnWVYWXf", "RTwndsIRrvxkIMFUFyeIzogfhKLAsuLlfishcEQzWukpG", "RTwndsIRrvxkIMFUFyeIzogfhKLAsuLlfishcEQzWukpG", "RTwndsIRrvxkIMFUFyeIzogfhKLAsuLlfishcEQzWukpG"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {2.423058574E9, 2.423058574E9, 4.7490959185E9, 4.635399119E9, 7.00354882E9, 1.534259622E9, 2.288915571E9, 6.8630085835E9, 1.5704371505E9, 4.7234918485E9, 5.12674914E8, 1.5362604935E9, 1.54258045E8, 5.122911305E8, 8931195.0, 5.265809755E8, 2.595041395E8, 2.2915302305E9, 8.0506209925E9, 9.3857837725E9, 1.03265884015E10, 1.0975374065E9, 1.545653986E9, 1.03477288345E10, 3.2098416405E9, 1.6650334075E9, 1.0465665207E10, 5.26397473E8, 1.5546926155E9, 4.606028913E9, 9.81554509E8, 1.0839216805E9, 5.462796115E8, 7.7835937985E9, 2.3827002335E9, 4.872957085E9, 5.219590535E8, 1.02647859585E10, 4.837188648E9, 2.443087085E8, 2.76411281E8, 4.866558854E9, 4.872957085E9, 5.94083226E8, 6.7983270155E9, 9.3857837725E9, 3.0042004905E9, 5.23099731E8, 5.12732887E8, 5.30403135E8};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> duration = {83309705, 247568372, 713909074, 24796723, 107354322, 463773972, 29151778, 21884017, 138402673, 183797537, 138355731, 70713605, 254056026, 132837288, 260923676, 25940545, 25095250, 986295975, 462355629, 233062294, 84503395, 83060895, 996425918, 54438056, 374889653, 260389147, 547421432, 74671435, 82111968, 320297956, 7316452, 863588630, 49253476, 17392495, 109126102, 628718059, 64028227, 3150052, 183797537, 513245384, 442329278, 76193576, 26988336, 226994530, 295076245, 76606584, 12578357};
    vector<string> user = {"AOCtbWogXTyYtvZYv jAxwvIAkhCdZTfleOaSjnQzwprKY", "LWWbYXKqrNeatfzPLfHQydHoIIIqlaCjLRLTejtDJtDCZxT", "sZeublvxVmFSWzuzVjuurbGbuQlIfPEPECGyffcNzUYnLpQZXE", "baZszjbbxjLhBvHZsMVdPDefGccqNlBYDHcAKJXwnZzbzbrn", "sZeublvxVmFSWzuzVjuurbGbuQlIfPEPECGyffcNzUYnLpQZXE", "rIFYENpKGKltPyEBuMfOKpTtUKFWBWngcoOGElPzUgtgwJUAF", "NYWoETPdQWFRFOc FgrbjQmapEodzRqdMEUxChOhRVmrUxJ", "NYWoETPdQWFRFOc FgrbjQmapEodzRqdMEUxChOhRVmrUxJ", "jHNuJFRdDkAgbJPrddmCmrWJWxUJCHQRhhbqDgIbnGcAt", "ZMvZewxYZOOMxYhaKlxejWLbSlNuWUsmZUqlRSAmlEpdNv", "vKfoHUrcDmfAlOBfpDNfkfJmBClmtnrFfNixRiKgDzaibr rQ", "LWWbYXKqrNeatfzPLfHQydHoIIIqlaCjLRLTejtDJtDCZxT", "oSqpzWEcFDArGxBjrAPYUaHiWVv npmGbBOHnmcYdmOPAW", "VfWgYQrKRrhppwGGdFLrhOOLhunfCNcyJeoQSDKIwvckAt", "mFQqCyWRuBb CqwgDBAPlMgtpFRoAXwNbKWZLvtZvDakvtuEU", "rWKfPLKwGcPrNniIsOVXdlcOhpvBidCynsBxwxXxNdZDGSHL", "rWKfPLKwGcPrNniIsOVXdlcOhpvBidCynsBxwxXxNdZDGSHL", "fTUWTTOr qAKayHodvDzpsMwRSfABblNeIMxJhyeqsXZDB", "ofsgsrmKmdIFh VvlPfichaWoDDYEVtbVXmlDRWKeOTYuzr", "baZszjbbxjLhBvHZsMVdPDefGccqNlBYDHcAKJXwnZzbzbrn", "oSqpzWEcFDArGxBjrAPYUaHiWVv npmGbBOHnmcYdmOPAW", "LWWbYXKqrNeatfzPLfHQydHoIIIqlaCjLRLTejtDJtDCZxT", "keNhXjcVPilPJoamjeRCKS rVPLvJJKTSpvcFIWmAQBgG", "sZeublvxVmFSWzuzVjuurbGbuQlIfPEPECGyffcNzUYnLpQZXE", "vKfoHUrcDmfAlOBfpDNfkfJmBClmtnrFfNixRiKgDzaibr rQ", "ofsgsrmKmdIFh VvlPfichaWoDDYEVtbVXmlDRWKeOTYuzr", "mFQqCyWRuBb CqwgDBAPlMgtpFRoAXwNbKWZLvtZvDakvtuEU", "CnRUubLABMxMDZy giHorjKxFnskAVZZDhuGVXOQIdgDaQqJ", "LWWbYXKqrNeatfzPLfHQydHoIIIqlaCjLRLTejtDJtDCZxT", "oSqpzWEcFDArGxBjrAPYUaHiWVv npmGbBOHnmcYdmOPAW", "puTDAKNrrSVtjOzFGTwSsgJjbSlAywyYcurHgpergtrCRkqzNS", "VfWgYQrKRrhppwGGdFLrhOOLhunfCNcyJeoQSDKIwvckAt", "LOvObrvyWsuThZNKHIIAHnlyvmAUtd GVVoQCYCGvaTPmRnNz", "jHNuJFRdDkAgbJPrddmCmrWJWxUJCHQRhhbqDgIbnGcAt", "CnRUubLABMxMDZy giHorjKxFnskAVZZDhuGVXOQIdgDaQqJ", "AOCtbWogXTyYtvZYv jAxwvIAkhCdZTfleOaSjnQzwprKY", "qgnamFnJOCdLEwGFDVntpQPYtmDxnmLPHxHulGwPcRKYmrbGW", "puTDAKNrrSVtjOzFGTwSsgJjbSlAywyYcurHgpergtrCRkqzNS", "iFbVuqTzhDWzynCrRHhufJmVJujSeLRfccDYeYBTabnjG", "VgpJNQSrnDwkoTvsZFenMNBiLQldLNFBNHAwKdvyI qITMbLp", "VVuOVddhYJJRGkutmmVcELhzWLyyctKVefNJnGUDmjWUtR s", "rIFYENpKGKltPyEBuMfOKpTtUKFWBWngcoOGElPzUgtgwJUAF", "jHNuJFRdDkAgbJPrddmCmrWJWxUJCHQRhhbqDgIbnGcAt", "AOCtbWogXTyYtvZYv jAxwvIAkhCdZTfleOaSjnQzwprKY", "VVuOVddhYJJRGkutmmVcELhzWLyyctKVefNJnGUDmjWUtR s", "DbqhHmHxDnqMKuRUogcOTpGAZRfdWUcyhbJQGssEAUsLEySWhe", "qgnamFnJOCdLEwGFDVntpQPYtmDxnmLPHxHulGwPcRKYmrbGW"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {7.6711732615E9, 1.672551476E9, 7.079111073E9, 1.190508723E9, 6.775833697E9, 3.318856238E9, 1.25331664E8, 1.216977835E8, 4.755978265E8, 8.65383316E8, 2.3729179595E9, 1.5841240925E9, 3.8134097275E9, 1.0148170093E10, 6.010595094E9, 1.237260475E8, 1.233034E8, 9.085325531E9, 4.6083606055E9, 1.2946415085E9, 3.728633412E9, 1.5902977375E9, 1.0579964408E10, 6.749375564E9, 2.4911849205E9, 4.5073773645E9, 6.153843972E9, 8.10820265E8, 1.589823274E9, 3.8465306925E9, 8891478.0, 1.0513545764E10, 5.971998E7, 4.150927375E8, 8.280475985E8, 7.9438774385E9, 2.704122675E8, 6808278.0, 8.65383316E8, 2.560362786E9, 5.3284225795E9, 3.12506604E9, 4.19890658E8, 7.743015674E9, 5.254796063E9, 2.76701446E8, 2.446873325E8};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> duration = {23293607, 77346525, 121279307, 147540748, 272435040, 392183658, 213382679, 55463301, 15207574, 75031755, 1595190, 84767664, 224506769, 550744671, 471842365, 233913486, 30448178, 45495750, 358883587, 43940311, 372770036, 68097382, 129492987, 74050608, 88843425, 83570634, 26332114, 411059605, 257207093, 58876723, 115042554, 412782367, 292142424, 145167550, 38887923, 646090539, 148218189, 9702889, 284445968, 14450433, 192779485, 162647941, 130625706, 102936645, 35369744, 385323362, 326674815, 242929205, 1462708};
    vector<string> user = {"oOHxZNrfCMQAjsEOzYXb cxdBQRaHptotraKUvwRpMxywQ", "aWyuYaibYEhxhXuzNRwfCKwnETGSrGxmRddGEjLqZtfnS", "tXXdHaCdDltISBRtaPYoQisEgaUBckTLhOkxZFVSsGVaYbsCy", "PmVuvUlrIWEsEiGLEbMEcmaIxZhShz bfLzGualArRrjZr", "NiZoewzOBeMfSARUERMlJwbFVDAhbZlZkxawPs bvxDKdEbRD", "DYNUQpkzO ryMtKVFjMSrJmLNDtZaGLSptklKJJOtsRYB", "aWyuYaibYEhxhXuzNRwfCKwnETGSrGxmRddGEjLqZtfnS", "KVkEijkCiXgOQhwhvSVqmawLtallYtWSgFZOY pClMSXDt", "yibTERktgaYyx aKuFXdTnGNVjnHXiDaMKpjRpcnBMRPU", "tXXdHaCdDltISBRtaPYoQisEgaUBckTLhOkxZFVSsGVaYbsCy", "lRrJTdwHPqddrufyyhIIArtHQemSFEmLRqsdkNDCCRkyMfWUTL", "joUmDXaGbCjDeuMaKRkEnYeCGiwWJRwMhLomLVyYvPwTA", "fTmqObetAcNhPTOGygrIQFLrTHRrdbGHGwRHgfJSnqixHNXJc", "NiZoewzOBeMfSARUERMlJwbFVDAhbZlZkxawPs bvxDKdEbRD", "KUohvWjRCuDpWnkiQXjdayJPwKkEBcKdCJGyGDToESdKC", "oOHxZNrfCMQAjsEOzYXb cxdBQRaHptotraKUvwRpMxywQ", "UoBRkHPxhKiGHYQwMOdVqSySkDaxwBpqhdFpCcZjQdLlmgt", "aWyuYaibYEhxhXuzNRwfCKwnETGSrGxmRddGEjLqZtfnS", "OaCyukTGnJXJfTregdwzcsgLlLhwixTFGgslbJmeWqXyuWpFKp", "PNmgPwPXLoOKLtZZHtsyzppWiCbTnKXdoJxiuTukqxhubxdtX", "vjN pKYJPXNGkbCRzRWyPGdqBMCljVOVVjnuwNYRFJONVNfHi", "yibTERktgaYyx aKuFXdTnGNVjnHXiDaMKpjRpcnBMRPU", "PrkPmMWzgkdJCGyQNXylYZlIbTjIJbMSIJvflIlxZDfKkM", "lRrJTdwHPqddrufyyhIIArtHQemSFEmLRqsdkNDCCRkyMfWUTL", "qCnggVkvHXjfAVa EJhpuBDAQfOUOvDtaVRRlswOJnupvmT", "fTmqObetAcNhPTOGygrIQFLrTHRrdbGHGwRHgfJSnqixHNXJc", "lRrJTdwHPqddrufyyhIIArtHQemSFEmLRqsdkNDCCRkyMfWUTL", "KVkEijkCiXgOQhwhvSVqmawLtallYtWSgFZOY pClMSXDt", "bvgC VnCkgOBTIFNbpIVsYCKcnSgdFbxhkqtmPvMKchHRptd", "qCnggVkvHXjfAVa EJhpuBDAQfOUOvDtaVRRlswOJnupvmT", "HKEctntM RkzPSnEjilczcVgtVJNwdXUrxixHbIEJxfUJwY", "OJZHImkUzkFmYbWALUzbeEDsTQhSOudFhyQoQSqucMrge", "ZXQqPMPaurrPktBGhCrmnUdZwmasoLZAUDSulpncpRZS Bt", "SpFYglwdpvcFzBMgbeLupqVgMyZOMkuxcpUHdtaunalBI kUb", "qCnggVkvHXjfAVa EJhpuBDAQfOUOvDtaVRRlswOJnupvmT", "lRrJTdwHPqddrufyyhIIArtHQemSFEmLRqsdkNDCCRkyMfWUTL", "aWyuYaibYEhxhXuzNRwfCKwnETGSrGxmRddGEjLqZtfnS", "UoBRkHPxhKiGHYQwMOdVqSySkDaxwBpqhdFpCcZjQdLlmgt", "UoBRkHPxhKiGHYQwMOdVqSySkDaxwBpqhdFpCcZjQdLlmgt", "HKEctntM RkzPSnEjilczcVgtVJNwdXUrxixHbIEJxfUJwY", "DYNUQpkzO ryMtKVFjMSrJmLNDtZaGLSptklKJJOtsRYB", "UoBRkHPxhKiGHYQwMOdVqSySkDaxwBpqhdFpCcZjQdLlmgt", "UoBRkHPxhKiGHYQwMOdVqSySkDaxwBpqhdFpCcZjQdLlmgt", "vjN pKYJPXNGkbCRzRWyPGdqBMCljVOVVjnuwNYRFJONVNfHi", "NiZoewzOBeMfSARUERMlJwbFVDAhbZlZkxawPs bvxDKdEbRD", "aWyuYaibYEhxhXuzNRwfCKwnETGSrGxmRddGEjLqZtfnS", "SpFYglwdpvcFzBMgbeLupqVgMyZOMkuxcpUHdtaunalBI kUb", "OaCyukTGnJXJfTregdwzcsgLlLhwixTFGgslbJmeWqXyuWpFKp", "yibTERktgaYyx aKuFXdTnGNVjnHXiDaMKpjRpcnBMRPU"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.2717753905E9, 8.301073229E9, 9.654056165E8, 6.20002361E8, 7.5344595065E9, 4.9048255915E9, 8.369091306E9, 2.7913309775E9, 1.36311762E8, 9.422818405E8, 6.5957306285E9, 1.71091807E8, 2.07577019E9, 7.673614322E9, 3.7046243275E9, 1.37708533E9, 5.927187556E9, 8.2851478415E9, 5.4815635235E9, 4.3940311E7, 4.3647838685E9, 1.62756666E8, 4.077151195E8, 6.6319583375E9, 7.57728109E8, 2.0053021225E9, 6.6080990905E9, 2.9691291295E9, 1.3887321335E9, 7.42744758E8, 4.00489903E8, 2.530337874E9, 1.809478104E9, 3.54128692E9, 7.32750358E8, 6.917978303E9, 8.336509061E9, 5.9168149115E9, 6.054186451E9, 3.501938425E8, 4.805123505E9, 5.9932874375E9, 5.97727632E9, 4.229867173E9, 7.4159268585E9, 8.4550616475E9, 3.6320405525E9, 5.4235863325E9, 1.29439329E8};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> duration = {25470009, 108456827, 627767684, 212323548, 35752198, 104543530, 299151724, 327453786, 109374629, 627767684, 80990231, 33252466, 1015187, 147129276, 274219905, 35389774, 303184914, 353547779, 38959206, 94411255, 10640030, 101696654, 15083637, 43982229, 280312930, 34729390, 735980139, 627767684, 3816074, 17593327, 114064658, 735980139, 175015785, 802702746, 201692882, 114129072, 627767684, 90266027, 7152535, 15410384, 173737711, 22133859, 594515218, 689231401, 161363692, 627767684, 597704598, 303184914, 4784755, 408918471};
    vector<string> user = {"UcKEfWCdQYKjQgcuXclvfxuQkIeFUCHZjiAShFFjAmDwFrCmh", "VzhhFJvZWYovXOMOGchPQDvODGQnUEusXsrqpSAYxAOwFPDgke", "XPAsNOxustpGl rytoSoTmNdILUjoOogDsZuuzLGwIJWa", "DPYKHLOFUsAdTTj xFeOGotaiJnHiLJBjkhPZeGtZlaZlGnvWe", "UcKEfWCdQYKjQgcuXclvfxuQkIeFUCHZjiAShFFjAmDwFrCmh", "uWegMBVlPeMgiCLrmNNXHNEFBgHEBdIeXGHXGXxpyawXE", "FPeJasmxOSEFIvSNRHJCEMBzSeDWHearNtTvwUIGbfnLOJcP", "FPeJasmxOSEFIvSNRHJCEMBzSeDWHearNtTvwUIGbfnLOJcP", "FPeJasmxOSEFIvSNRHJCEMBzSeDWHearNtTvwUIGbfnLOJcP", "CnqJWICKPSTuZmMGtomPUsbrKucvxScNvRSLEzpcDyPFwGuatK", "uWegMBVlPeMgiCLrmNNXHNEFBgHEBdIeXGHXGXxpyawXE", "AZBoxLGMWPzIyqJwUeFslKANOr rAryIZVozoKKRokLdLKg", "ezpfaRvLAeeKnkwlOsFlSeLjMORWdYPsilUkZRcoyagEQh", "fMXtQGUJIrrEgmJIwFrEY wkXkbgcOSaqFOLcVPTykCmMjgJ", "vhYehVfGRBBekScdsUmRVIHaUXQpbZZQjgTeZiIvOzCjSR", "JMknbRXkUtHiVjTBJIoJwyDFAXMZjUmiDUTRHCoAGWOho", "owbOFuyLXbwaBtDBiKXRrXZlABdPcBTogrnyZNFdPASkZEn", "vhYehVfGRBBekScdsUmRVIHaUXQpbZZQjgTeZiIvOzCjSR", "JMknbRXkUtHiVjTBJIoJwyDFAXMZjUmiDUTRHCoAGWOho", "CIEqdNzolCMoHuWssddPvHQQmDjAmlCkZCRmqIvOvXuROp", "ezpfaRvLAeeKnkwlOsFlSeLjMORWdYPsilUkZRcoyagEQh", "AmoAblKWUjCdrmuBSIapvIxUtjoIgSExYIEh ibyuuprI", "ULECMUKZEmTeEGGjSbRCwotiJZHUrTzmaMhhKmzWhFzVkFGCoF", "DPYKHLOFUsAdTTj xFeOGotaiJnHiLJBjkhPZeGtZlaZlGnvWe", "FFSWzDMNSepmJlRpMQrmiZQuPc NTUCskvswXTeFIjMVhpSm", "ssGlVvzhCFPZXYabQBfBRp nwahLRuAHFapzodLeZuCKlwhzp", "AMUvU dOiYXvMnxlqzTdYipZiAIBYOzESQvgAuJAhMVrHSw", "tXeNgdSBLzKlBJhWatNviXVGJaWIRdBYGDJkcFdHps Mln", "ezpfaRvLAeeKnkwlOsFlSeLjMORWdYPsilUkZRcoyagEQh", "ezpfaRvLAeeKnkwlOsFlSeLjMORWdYPsilUkZRcoyagEQh", "ezpfaRvLAeeKnkwlOsFlSeLjMORWdYPsilUkZRcoyagEQh", "ewvqFAJK bUIYRiLfVwMiZKXwHmZejoXDiyrlGMDicEHDjmHYn", "uWegMBVlPeMgiCLrmNNXHNEFBgHEBdIeXGHXGXxpyawXE", "CIEqdNzolCMoHuWssddPvHQQmDjAmlCkZCRmqIvOvXuROp", "uWegMBVlPeMgiCLrmNNXHNEFBgHEBdIeXGHXGXxpyawXE", "VzhhFJvZWYovXOMOGchPQDvODGQnUEusXsrqpSAYxAOwFPDgke", "JVl dGYOcKGuRhtYvjBGpwcJGouuEImJPbGoogJvwDSxO", "ssGlVvzhCFPZXYabQBfBRp nwahLRuAHFapzodLeZuCKlwhzp", "JMknbRXkUtHiVjTBJIoJwyDFAXMZjUmiDUTRHCoAGWOho", "JMknbRXkUtHiVjTBJIoJwyDFAXMZjUmiDUTRHCoAGWOho", "uWegMBVlPeMgiCLrmNNXHNEFBgHEBdIeXGHXGXxpyawXE", "ssGlVvzhCFPZXYabQBfBRp nwahLRuAHFapzodLeZuCKlwhzp", "AZBoxLGMWPzIyqJwUeFslKANOr rAryIZVozoKKRokLdLKg", "GKagHXpTfUJWuydaOJnZOFdxEspjyTyFQ yquPAzfgSsErnX", "UcKEfWCdQYKjQgcuXclvfxuQkIeFUCHZjiAShFFjAmDwFrCmh", "bTWoOpeMwZlZNWZum nsaQxaEPwHHvpnMFZsdabmOdSRWBM", "ULECMUKZEmTeEGGjSbRCwotiJZHUrTzmaMhhKmzWhFzVkFGCoF", "enOoMksfDkMJpApBpBWiMeZkbQikKwJlRodAFomgOqgCuU", "JMknbRXkUtHiVjTBJIoJwyDFAXMZjUmiDUTRHCoAGWOho", "FFSWzDMNSepmJlRpMQrmiZQuPc NTUCskvswXTeFIjMVhpSm"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {8.801020395E8, 9.215954485E8, 5.07648751E9, 1.3242675965E9, 8.85243134E8, 9.862485407E9, 9.959789504E9, 9.973940535E9, 9.8649009565E9, 5.07648751E9, 9.8507087575E9, 4.779229901E9, 4.245948155E8, 4.9765186E8, 4.8997136205E9, 1.19391541E8, 1.801036082E9, 4.9393775575E9, 1.21176257E8, 1.1777936548E10, 4.29407237E8, 1.52544981E8, 2.266564475E9, 1.240096937E9, 7.789178428E9, 4.41451917E8, 1.01782037115E10, 5.07648751E9, 4.25995259E8, 4.328838855E8, 4.81119551E8, 1.01782037115E10, 9.8977215345E9, 1.21320822935E10, 9.911060083E9, 9.24431571E8, 5.07648751E9, 4.692202355E8, 1.052729215E8, 1.09401846E8, 9.8970824975E9, 4.351541515E8, 5.059861277E9, 7.9936376635E9, 9.48048881E8, 5.07648751E9, 2.5578749555E9, 1.801036082E9, 1.040890315E8, 7.8534811985E9};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> duration = {40433158, 6104854, 212218788, 32499364, 698924590, 159647019, 60621356, 383108845, 971238530, 229744675, 79281752, 971238530, 971238530, 483650650, 201806041, 81900875, 333343524, 948227746, 281844609, 111545012, 483650650, 483650650, 971238530, 253905975, 5634694, 971238530, 11265678, 115478372, 186631151, 72332616, 31402524, 75076063, 49751422, 233924484, 61898114, 1425714, 339045723, 663251257, 32080376, 19777442, 69499208, 503604238, 22152962, 272313940, 971238530, 971238530, 23010784, 971238530, 483650650};
    vector<string> user = {"gZoSmYtfVcbTwp PWIZYJKANbGmwRRMLAgLxXMWOVvodXEtvm", "yHiwzlcAWNIMgvpJNLwOeYjIxKYkmTAINfnQyFPqARc pMvBHt", "yHiwzlcAWNIMgvpJNLwOeYjIxKYkmTAINfnQyFPqARc pMvBHt", "gZoSmYtfVcbTwp PWIZYJKANbGmwRRMLAgLxXMWOVvodXEtvm", "DbLdAfTQIeSiAvrIaAZGHdlSNFZfhXcXrfzMtRftOkUYh", "vyxtSebhVM toVtAUoHiMhljnwfblOjWleGZdTtCKnFGDGytz", "MqAalCOudYsSyRXrczipmHYTaPVjndWyjHiKJjiNjdwuxP AWr", "AMepwuxetdAhJo miRMqwimQIyWZjArYtzgkAbPvtIqecM", "luExuPbqefcyjUgQHwhfOrQBYJnEktSMVYghiskIbjdCfaEhx", "TNWOcSlvXXMwKsgqbrtiobbKMtBO QxgUbRzjguBRerMJGVdfW", "gZoSmYtfVcbTwp PWIZYJKANbGmwRRMLAgLxXMWOVvodXEtvm", "EIfAhYBFuyckkIQgMTqiJofYbyIpSxKmFCtwrHvvCoRjUleeZB", "GTpJNkwqwnAwbHXLFsHRixSmVczUbsyXrmOzUfSzEwthfXEQ", "OYkaUCpxJyrsWSZuRASpwPrFQxKMHExuGwhpCFAHZdRro", "IdDasnEuvexBDPCMwRjdhMWcaxGstagTsROyovPpKjcSA", "AMepwuxetdAhJo miRMqwimQIyWZjArYtzgkAbPvtIqecM", "MqAalCOudYsSyRXrczipmHYTaPVjndWyjHiKJjiNjdwuxP AWr", "lAjlFHYYVRjRkbOsCbYSYbEXkSSGSqJhirAMOMtze RATjl", "IdDasnEuvexBDPCMwRjdhMWcaxGstagTsROyovPpKjcSA", "gZoSmYtfVcbTwp PWIZYJKANbGmwRRMLAgLxXMWOVvodXEtvm", "kvxEzxfIbkMJeGREkRisIRxvSKeJZpUORfxRe EkoODHPQI", "tGbfLnkXCucDZWgVZkKAgEYnAoZaeTXbcULLIyP DeKSd", "tmYACnTZxrcXVoIRuYrdRXKXDWumXLxDjAdzaIzYtMpLLD", "TNWOcSlvXXMwKsgqbrtiobbKMtBO QxgUbRzjguBRerMJGVdfW", "MqAalCOudYsSyRXrczipmHYTaPVjndWyjHiKJjiNjdwuxP AWr", "DDrBjaFDANokOnPLgSYDIvBVpFNtWaQzJEmqnvaeH qzIqtyo", "AMepwuxetdAhJo miRMqwimQIyWZjArYtzgkAbPvtIqecM", "gZoSmYtfVcbTwp PWIZYJKANbGmwRRMLAgLxXMWOVvodXEtvm", "AMepwuxetdAhJo miRMqwimQIyWZjArYtzgkAbPvtIqecM", "gZoSmYtfVcbTwp PWIZYJKANbGmwRRMLAgLxXMWOVvodXEtvm", "yHiwzlcAWNIMgvpJNLwOeYjIxKYkmTAINfnQyFPqARc pMvBHt", "h FyrQKdJmzofDGakCLkAdmzGwpYwiljIfrraQjdtmBUVh", "h FyrQKdJmzofDGakCLkAdmzGwpYwiljIfrraQjdtmBUVh", "yHiwzlcAWNIMgvpJNLwOeYjIxKYkmTAINfnQyFPqARc pMvBHt", "MqAalCOudYsSyRXrczipmHYTaPVjndWyjHiKJjiNjdwuxP AWr", "AMepwuxetdAhJo miRMqwimQIyWZjArYtzgkAbPvtIqecM", "h FyrQKdJmzofDGakCLkAdmzGwpYwiljIfrraQjdtmBUVh", "YnyRcjHNOToASa KknRhSCzbXtLaIlJwTiPOHyProGQiQ", "gZoSmYtfVcbTwp PWIZYJKANbGmwRRMLAgLxXMWOVvodXEtvm", "h FyrQKdJmzofDGakCLkAdmzGwpYwiljIfrraQjdtmBUVh", "AMepwuxetdAhJo miRMqwimQIyWZjArYtzgkAbPvtIqecM", "vyxtSebhVM toVtAUoHiMhljnwfblOjWleGZdTtCKnFGDGytz", "MqAalCOudYsSyRXrczipmHYTaPVjndWyjHiKJjiNjdwuxP AWr", "DbLdAfTQIeSiAvrIaAZGHdlSNFZfhXcXrfzMtRftOkUYh", "FmPyjSCjgulzyLJtZwHNGjMBBiRSlwCWaCPqfpRSduKLUmdU", "jMKyQDRsKphSsyDlhyQrdc rIPvoAKXmDVXmGHCttgDBa", "lAjlFHYYVRjRkbOsCbYSYbEXkSSGSqJhirAMOMtze RATjl", "OsOzSjfTtpQOosZv NRZIsFpoQgCOhCjfkgEdlwZHClFtTBYLj", "wtbiOsbiTDNEoKKmrvDqtOkAzzQQJJueQsrLnrBrEn hSVZpC"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {2.438469829E9, 2.421305677E9, 2.524362644E9, 2.434502932E9, 1.210249543E10, 5.5795812665E9, 2.448563928E9, 6.721479172E9, 1.22386524E10, 2.5331255875E9, 2.457894126E9, 1.22386524E10, 1.22386524E10, 2.660078575E9, 2.5191562705E9, 6.570875187E9, 2.584925012E9, 1.2227147008E10, 2.5591755545E9, 2.474025756E9, 2.660078575E9, 2.660078575E9, 1.22386524E10, 2.5452062375E9, 2.421070597E9, 1.22386524E10, 6.5355575885E9, 2.475992436E9, 6.623240325E9, 2.454419558E9, 2.433954512E9, 2.4557912815E9, 2.443128961E9, 2.535215492E9, 2.449202307E9, 6.5306376065E9, 2.5877761115E9, 5.8313833855E9, 2.434293438E9, 2.428141971E9, 6.5646743535E9, 5.751559876E9, 2.429329731E9, 1.1889190105E10, 1.22386524E10, 1.22386524E10, 1.1764538527E10, 1.22386524E10, 2.660078575E9};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> duration = {25428736, 630910801, 80724720, 62112824, 126797829, 77830828, 66771992, 170678927, 13736530, 927369034, 60088532, 73305996, 426728132, 186182706, 385107725, 214153525, 101545979, 368666733, 548434535, 171922655, 346189417, 26391901, 19241859, 514732066, 980011891, 969154433, 36456889, 125985221, 89845033, 52266993, 175524735, 86236501, 805684632, 14937850, 238746331, 324063305, 383310577, 115849330, 854254876, 4368547, 510659909, 30296102, 287255817, 542077836, 237826804, 70930227, 122951507};
    vector<string> user = {"J", "Z", "MU", "d", "eM", "SH", "mn", "mn", "iT", "R", "iT", "MU", "Kw", "s", "mn", "s", "J", "I", "eM", "SH", "Cg", "s", "Cg", "r", "E", "HS", "v", "iT", "b", "r", "Cg", "Dm", "TD", "iT", "v", "N", "b", "SH", "r", "J", "c", "c", "r", "SH", "Dm", "mn", "J"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {5.707534255E8, 5.016617702E9, 1.79490542E8, 6.2112824E7, 5.4176327985E9, 7.6837793075E9, 6.0719804975E9, 6.123933965E9, 3.303858715E8, 9.026073252E9, 3.535618725E8, 1.7578118E8, 2.617275203E9, 2.49700249E9, 6.231148364E9, 2.5109878995E9, 6.08812047E8, 1.977183005E9, 5.6284511515E9, 7.730825221E9, 4.0178455985E9, 2.4171070875E9, 3.8543718195E9, 1.2086860485E10, 1.0975239576E10, 9.995227685E9, 8.410164965E8, 3.86510217E8, 3.1121395905E9, 1.18556279485E10, 3.9325132575E9, 1.3275712175E9, 7.191023569E9, 3.309865315E8, 9.421612175E8, 1.4464846195E9, 3.2588723625E9, 7.7027885585E9, 1.225662189E10, 5.60223331E8, 4.1000808445E9, 3.859898941E9, 1.19731223605E10, 7.9159028115E9, 1.403366369E9, 6.074059615E9, 6.19514811E8};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> duration = {100190862, 92326754, 47900989, 343269998, 315689531, 98957145, 371201417, 3182128, 237994731, 264548145, 225342358, 5747381, 35594880, 17825464, 41236538, 451950284, 210702773, 152326856, 424638914, 371201417, 32730318, 493799281, 108367325, 26893397, 184281609, 253432079, 284147892, 184864850, 61628697, 65136336, 117779091, 117769338, 446202903, 54323207, 171120123, 1627991, 371201417, 34577053, 200081294, 190415048, 215769752, 10958722, 261535236, 123706470, 44386286, 75482570, 125275816, 173247206, 451950284};
    vector<string> user = {"Dr", "Ev", "bf", "Dr", "hu", "Dr", "r", "kS", "N", "K", "pu", "Lf", "OA", "kS", "pu", "A", "pu", "N", "A", "y", "R", "X", "OA", "kS", "OA", "uQ", "R", "K", "N", "pu", "A", "uQ", "Lf", "R", "cs", "Gf", "k", "Ev", "cs", "G", "hu", "hu", "G", "OA", "K", "Z", "Gf", "Z", "sb"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {6.9366202905E9, 2.68869162E8, 7.18514835E7, 7.0581598585E9, 7.044369625E9, 6.936003432E9, 1.8975443275E9, 4.9492053E7, 4.0744209455E9, 5.7113726435E9, 6.9991960385E9, 3.9582972705E9, 3.97322102E9, 5.6813721E7, 6.9071431285E9, 8.4233111535E9, 6.991876246E9, 4.031587008E9, 8.4096554685E9, 1.8975443275E9, 1.728308778E9, 5.8259982115E9, 4.0096072425E9, 6.13476875E7, 4.0475643845E9, 1.8386596585E9, 1.854017565E9, 5.671530996E9, 3.9862379285E9, 6.9190930275E9, 8.256225557E9, 1.770828288E9, 4.1785250315E9, 1.7391052225E9, 1.7975036805E9, 2.235197805E8, 1.8975443275E9, 2.399943115E8, 1.811984266E9, 4.050631104E9, 6.9944097355E9, 6.8920042205E9, 4.086191198E9, 4.017276815E9, 5.601291714E9, 5.11715765E8, 2.85343693E8, 5.60598083E8, 4.181398722E9};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> duration = {636967593, 345314238, 41578435, 11949053, 96191867, 429100455, 33990581, 236975777, 4181098, 42284538, 4245414, 65405924, 279167679, 16049003, 402374754, 4062006, 223948531, 30038532, 240762379, 2849352, 515097124, 394863898, 3226510, 676058971, 26372139, 728696, 29744851, 469128, 131873603, 200718086, 122497291, 24633358, 234619180, 69675432, 175248918, 791868654, 307365649, 976172785, 230756618, 886214722, 124702123, 457360141, 2606116, 457360141, 58681799, 431289604, 92531340, 20602850};
    vector<string> user = {"KP", "Wu", "Wu", "jb", "u", "x", "jb", "x", "c", "gA", "RH", "gA", "ZE", "jb", "RD", "i", "J", "C", "RH", "c", "u", "X", "Q", "NC", "x", "Q", "x", "Q", "Ic", "C", "jb", "jb", "i", "x", "gA", "X", "gA", "z", "YP", "Tb", "J", "UJ", "Q", "p", "u", "i", "Ic", "Ic"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {4.733787672E9, 2.1686307965E9, 2.016762895E9, 1.245950695E8, 5.4518543955E9, 7.3602727775E9, 1.356158335E8, 7.2642104385E9, 9120999.0, 3.8228098335E9, 9.31823922E8, 3.8343705265E9, 1.453876687E9, 1.266450445E8, 2.591794768E9, 5.405789465E9, 1.7401762795E9, 4.6895607E8, 1.0500824045E9, 8455126.0, 5.661307024E9, 1.0194842609E10, 8643705.0, 6.749788223E9, 7.1589086195E9, 7394798.0, 7.1605949755E9, 7265014.0, 9.956380165E8, 5.54295847E8, 1.798691885E8, 1.30937222E8, 5.521068052E9, 7.180560266E9, 3.8892920235E9, 1.0393344987E10, 3.955350389E9, 9.404044384E9, 5.69315113E8, 8.427871599E9, 1.6905530755E9, 3.2778349795E9, 8333508.0, 3.2778349795E9, 5.4330993615E9, 5.619403264E9, 9.75966885E8, 9.4000264E8};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> duration = {6271632, 42314374, 4566004, 126937474, 62063282, 37043448, 732016421, 277704127, 277704127, 143993255, 56392551, 60187784, 221294879, 1646397, 773289195, 388147965, 20306341, 257397786, 335432769, 41272774, 178140898, 629295940, 437856426, 104348264, 190162861, 17401917, 567234603, 160195217, 613348, 55214770, 178140898, 221294879, 422931117, 95037363, 958185219, 221294879, 50590076, 426329340, 3725709, 19894757, 205642, 572876102, 178140898, 173574894, 126257516, 34484186, 33730700, 161107095, 277704127, 390950616};
    vector<string> user = {"j", "j", "id", "gQ", "Zn", "j", "G", "p", "j", "m", "Zn", "g", "p", "UU", "zn", "Zn", "Ln", "Ln", "R", "G", "BK", "m", "R", "UU", "T", "j", "U", "T", "gQ", "j", "X", "JK", "T", "vu", "EV", "V", "gQ", "t", "UU", "j", "UU", "t", "jm", "id", "vu", "UU", "UU", "g", "R", "U"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {2.4627873595E9, 2.4808087305E9, 5.36705696E8, 5.97891431E8, 3.470906602E9, 2.4781732675E9, 5.6057634605E9, 3.0759256225E9, 2.598503607E9, 5.3117518775E9, 3.4680712365E9, 1.541529038E9, 3.0477209985E9, 5.352458925E8, 5.6263998475E9, 3.6339489435E9, 2.103030138E9, 2.2215758605E9, 1.03951225655E10, 5.260391637E9, 6.23493143E8, 5.55440322E9, 1.0446334394E10, 5.86596826E8, 5.3348366805E9, 2.468352502E9, 8.0281361605E9, 5.3198528585E9, 5.34729368E8, 2.4872589285E9, 6.23493143E8, 1.6220825855E9, 5.4512208085E9, 1.5589538275E9, 8.2236114685E9, 1.6220825855E9, 5.59717732E8, 9.415471469E9, 5.362855485E8, 2.469598922E9, 5.34525515E8, 9.48874485E9, 6.23493143E8, 6.21210141E8, 1.574563904E9, 5.51664787E8, 5.51288044E8, 1.5919886935E9, 1.03662582445E10, 7.939994167E9};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> duration = {923253962, 13451520, 202807203, 108180746, 54265722, 580576246, 17891889, 297389417, 123684657, 810071686, 31663975, 120579434, 311456923, 391995845, 367029012, 188328835, 106166652, 66623806, 152422266, 58946047, 629425765, 214134200, 601232377, 385170160, 137212568, 163747556, 129088760, 230526680, 73579465, 204734809, 56062375, 19656590, 621665347, 876393863, 923253962, 23018680, 204734809, 966652560, 192614092, 447867974, 562357772, 37108483, 897393878, 15931608, 66322177, 615299883, 119233664, 296992460};
    vector<string> user = {"Sv", "f", "YB", "Iq", "md", "dQ", "U", "Nd", "md", "s", "md", "N", "mr", "Iq", "p", "dh", "dQ", "o", "md", "md", "T", "md", "mr", "zK", "N", "o", "II", "zK", "YB", "dS", "qM", "U", "f", "jL", "q", "YB", "Xg", "f", "dh", "qM", "Of", "qM", "IR", "U", "s", "Nd", "dh", "zK"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.2574801952E10, 1.38440394065E10, 1.3313081045E9, 2.300903153E9, 4.8245030345E9, 5.748588179E9, 3.5685988E7, 9.9695817675E9, 4.859212502E9, 7.083101211E9, 4.813202161E9, 1.011595545E9, 9.9766155205E9, 2.4428107025E9, 1.746636189E9, 2.3409771975E9, 5.511383382E9, 7.40536049E8, 4.8735813065E9, 4.826843197E9, 4.47981174E9, 4.9044372735E9, 1.01215032475E10, 1.0013472139E10, 1.019912112E9, 7.89097924E8, 1.82568847E8, 9.936150399E9, 1.2666942355E9, 4.896710605E8, 3.0455399745E9, 3.65683385E7, 1.414814632E10, 7.1162622995E9, 1.2574801952E10, 1.241413843E9, 4.896710605E8, 1.43206399265E10, 2.343119826E9, 3.241442774E9, 3.850385975E9, 3.0360630285E9, 8.451853109E9, 3.47058475E7, 6.7112264565E9, 1.01285370005E10, 2.306429612E9, 9.969383289E9};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> duration = {119926857, 61804761, 104644173, 580410009, 41765148, 9295856, 85602247, 580410009, 50866419, 209122598, 580410009, 3899115, 544469061, 544469061, 69369314, 15385016, 405251726, 223520108, 151410969, 12319307, 96491452, 4210872, 341644952, 448577093, 580410009, 151957690, 544469061, 125527860, 544469061, 29050918, 544469061, 544469061, 405251726, 90787990, 544469061, 131832916, 580410009, 544469061, 405251726, 580410009, 544469061, 580410009, 544469061, 51158659, 24837576};
    vector<string> user = {"xL", "xL", "WC", "I", "WC", "WC", "Tn", "Wl", "R", "Tn", "V", "WC", "it", "uA", "Tn", "WC", "V", "xL", "WC", "WC", "WC", "WC", "R", "G", "HB", "R", "NQ", "Tn", "fx", "WC", "N", "RN", "ap", "Tn", "fI", "G", "LD", "KQ", "s", "yp", "k", "iC", "W", "WC", "WC"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {6.678410175E8, 6.387799695E8, 4.5348916305E9, 1.03612289505E10, 4.503452118E9, 4.487217472E9, 1.01138250695E10, 1.03612289505E10, 4.5080027535E9, 1.0175585245E10, 1.3175699854E10, 4.4845191015E9, 4.7548040745E9, 4.7548040745E9, 1.0105708603E10, 4.490262052E9, 1.30881207125E10, 7.19637643E8, 4.5582750285E9, 4.4887291975E9, 4.53081527E9, 4.48467498E9, 4.65339202E9, 1.02953124925E10, 1.03612289505E10, 4.558548389E9, 4.7548040745E9, 1.0133787876E10, 4.7548040745E9, 4.497095003E9, 4.7548040745E9, 4.7548040745E9, 8.10503452E8, 1.0116417941E10, 4.7548040745E9, 1.0136940404E10, 1.03612289505E10, 4.7548040745E9, 8.10503452E8, 1.03612289505E10, 4.7548040745E9, 1.03612289505E10, 4.7548040745E9, 4.5081488735E9, 4.494988332E9};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> duration = {40976217, 101282488, 156411536, 97367510, 52915233, 36301682, 21999670, 101282488, 2523439, 101282488, 280013235, 1524719, 307229440, 280013235, 24629821, 101282488, 594796, 30170464, 432350368, 3914978, 90715826, 11088119, 6477947, 309752879, 8256052, 53233528, 101282488, 71488264, 8768613, 6443532, 23170316, 562045442, 89076580, 2343603, 280013235, 4986134, 29794224, 309752879, 101282488, 842264736, 41926018, 88410556, 4084797, 12205908, 280013235, 41810490, 29186006, 280219294};
    vector<string> user = {"pW", "Rq", "nV", "ZW", "Mj", "dt", "Mj", "PG", "Ho", "xB", "ux", "Mj", "Ho", "K", "nV", "Gd", "pW", "DA", "Nt", "ZW", "nV", "Mj", "pW", "zH", "nV", "pW", "Kr", "A", "Mj", "F", "dt", "Xs", "AV", "F", "w", "Mj", "A", "F", "H", "i", "DA", "F", "F", "AV", "O", "dt", "DA", "Xs"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {6.788242805E8, 7.08977416E8, 2.0949111995E9, 7.07019927E8, 6.847937885E8, 6.76487013E8, 6.69336007E8, 7.08977416E8, 3.0277531175E9, 7.08977416E8, 2.156712049E9, 6.590985315E8, 3.180106118E9, 2.156712049E9, 2.029020342E9, 7.08977416E8, 6.5863357E8, 6.73421404E8, 4.179630012E9, 6.60293661E8, 2.0620633445E9, 6.638802315E8, 6.615751455E8, 3.1813678375E9, 2.0208334575E9, 6.84952936E8, 7.08977416E8, 6.94080304E8, 6.627204785E8, 3.5449837265E9, 6.6992133E8, 5.302917469E9, 7.02874462E8, 3.542933762E9, 2.156712049E9, 6.60829239E8, 6.73233284E8, 3.6966384E9, 7.08977416E8, 5.443027116E9, 6.79299181E8, 3.5859672385E9, 3.543804359E9, 6.64439126E8, 2.156712049E9, 6.79241417E8, 6.72929175E8, 5.162004395E9};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> duration = {361303516, 268729192, 157258158, 321123762, 17205354, 597704480, 50038920, 159076163, 327120729, 12308316, 171532265, 3365944, 321123762, 330739578, 805073, 206441854, 134029814, 389760854, 1217950, 14149927, 6626056, 465076691, 211253830, 42870537, 23438162, 333292, 196347499, 306973835, 121682728, 213150883, 984252090, 329969825, 280580989, 171802096, 361303516, 24869483, 63647221, 70551211, 519, 686679420, 159277035, 77740735, 405151751, 119614452, 255919833, 618272054};
    vector<string> user = {"ku", "zd", "CT", "dh", "T", "h", "NR", "b", "SL", "p", "uZ", "p", "A", "Ki", "p", "G", "uZ", "m", "c", "Kk", "p", "p", "Ki", "uZ", "I", "p", "zd", "Kk", "CT", "i", "XL", "CT", "Ki", "b", "E", "T", "b", "b", "I", "G", "m", "G", "w", "c", "T", "i"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {2.673184578E9, 3.858429374E9, 6.2074836445E9, 1.134552197E9, 3.51910015E8, 5.82439921E9, 7.3477601E7, 3.8036028595E9, 1.782796688E9, 4.439553313E9, 2.0427791285E9, 4.435082127E9, 1.134552197E9, 7.0099669085E9, 4.4338016915E9, 8.6759591865E9, 2.024027903E9, 5.1470562125E9, 1.34502777E8, 9.810652795E8, 4.436712183E9, 4.6659375005E9, 6.9502240345E9, 1.9784482645E9, 2.34384215E7, 4.433565801E9, 3.8222385275E9, 1.1274772335E9, 6.1896959295E9, 7.778171228E9, 1.0042421354E10, 6.293839478E9, 6.984887614E9, 3.809965826E9, 2.673184578E9, 3.557420795E8, 3.7558883885E9, 3.7593403835E9, 1.17196E7, 8.9160779695E9, 5.031814303E9, 8.611608627E9, 3.258988087E9, 1.93701028E8, 4.712672545E8, 7.9807318135E9};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> duration = {624900790, 25768489, 31828777, 635315636, 157733020, 54777737, 6778842, 412110755, 939846616, 780910439, 228134664, 362329996, 144743795, 84602028, 58604944, 129976525, 737098681, 782812520, 944822575, 283738450, 106293847, 142226976, 387168558, 58905607, 219928403, 112231268, 144878273, 148176061, 230644387, 207541148, 265454623, 116057031, 255031831, 40906907, 56390959, 504164889, 332151233, 91155145, 292678999, 528117292, 233445510, 13228151, 890044838, 41265598, 143427648, 69940052, 727919178, 125159667, 517170278, 102804081};
    vector<string> user = {"Jc", "pf", "tN", "pf", "r", "K", "FQ", "jT", "w", "b", "zW", "tN", "FQ", "Ys", "zW", "tN", "QK", "E", "Xc", "pf", "LW", "v", "Ys", "tN", "MN", "L", "tN", "zW", "v", "K", "Jc", "u", "r", "L", "FQ", "u", "C", "u", "oa", "DB", "u", "Jc", "K", "v", "zW", "L", "R", "K", "MN", "LW"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {9.340164599E9, 1.1849470709E10, 4.8259973115E9, 1.21542442825E10, 1.9622796735E9, 1.39199708905E10, 1.07346219E8, 1.677030738E9, 1.0419352602E10, 7.793109902E9, 3.9070594185E9, 4.991247921E9, 1.763286955E8, 2.782118857E9, 3.8222945585E9, 4.8750711855E9, 6.6436501225E9, 8.575922422E9, 1.2308997752E10, 1.19784556895E10, 3.656094835E8, 2.3679775575E9, 2.933402122E9, 4.8395357265E9, 6.3850649835E9, 5.846662715E8, 4.8825220595E9, 3.867080117E9, 2.412186263E9, 1.3996352596E10, 9.1604415155E9, 1.189461498E10, 2.010929079E9, 5.49004091E8, 1.321522775E8, 1.2088668909E10, 1.264919983E9, 1.1882164037E10, 9.3276875E8, 3.503820428E9, 1.19533092195E10, 9.0343282795E9, 1.4337604441E10, 2.3174968685E9, 3.8647059105E9, 5.635206635E8, 5.174042512E9, 1.39551618555E10, 6.533685921E9, 3.638646005E8};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> duration = {110493007, 36745362, 42222084, 208277408, 74261299, 82168622, 868214572, 14085492, 32792173, 175961262, 576508, 21062582, 252594982, 613312008, 50272722, 128522121, 973593821, 12907303, 30699209, 106822484, 25999159, 31210059, 789323436, 200382348, 30670716, 418453072, 87991208, 103126676, 189104855, 615236108, 291074468, 159893511, 651126, 62325781, 120330263, 70313268, 634478933, 104529510, 67630364, 60249600, 68816037, 1213760, 18831276, 15254372, 151693687, 242662389, 33665581, 919664770, 196118336, 82067048};
    vector<string> user = {"eR", "B", "u", "I", "I", "fF", "nX", "I", "I", "nY", "f", "I", "XZ", "G", "I", "u", "i", "q", "bY", "y", "B", "nY", "bY", "fF", "pw", "yX", "x", "I", "I", "O", "R", "Kc", "Xe", "I", "u", "nY", "fF", "Xe", "nY", "q", "nY", "pw", "x", "pw", "pH", "f", "q", "l", "Kc", "nY"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {6.46024464E8, 9.68837895E7, 1.60573754E9, 4.856505237E9, 4.7894971825E9, 7.3178575065E9, 6.818258244E9, 4.759409279E9, 4.7687626195E9, 2.986145535E9, 9.196258535E8, 4.762897824E9, 1.29355203E9, 3.759475931E9, 4.777502894E9, 1.6488875585E9, 9.628546738E9, 3.817513825E8, 5.555381954E9, 4.28708973E8, 9.1510688E7, 2.9137699335E9, 5.9346940675E9, 7.3769643695E9, 3.8904782E7, 2.650165885E9, 4.19293335E8, 4.803929871E9, 4.8469189605E9, 4.374712039E9, 1.730163732E9, 2.133653645E9, 1.6279925E8, 4.7835294235E9, 1.6447916295E9, 2.933321538E9, 7.594012662E9, 2.14738442E8, 2.931980086E9, 4.05422531E8, 2.9325729225E9, 2.4176304E7, 3.84713369E8, 3.119661E7, 7.97718151E8, 1.040668794E9, 3.921305215E8, 8.654952917E9, 2.1517660575E9, 2.939198428E9};
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> duration = {150794480, 41843796, 305680167, 121145428, 85322499, 104779768, 18727992, 48446084, 24780592, 74796522, 31250766, 191230923, 41883288, 261974723, 157947569, 32880942, 283719932, 2324453, 23854420, 40891719, 233848600, 184893168, 151124251, 197666068, 180779836, 3006512, 7893488, 61543326, 480880722, 22618833, 26274985, 138799505, 26751531, 22612560, 253048049, 24827276, 57528351, 22167898, 223881853, 19535813, 86472101, 74013060, 316034529, 154392423, 172250887, 61700824, 106010503, 227650535, 102708693};
    vector<string> user = {"w", "w", "w", "w", "w", "w", "w", "w", "w", "w", "w", "w", "w", "w", "w", "w", "w", "w", "w", "w", "w", "w", "w", "w", "w", "w", "w", "w", "w", "w", "w", "w", "w", "w", "w", "w", "w", "w", "w", "w", "w", "w", "w", "w", "w", "w", "w", "w", "w"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {2.9179933615E9, 2.8635180195E9, 2.995436205E9, 2.9031688355E9, 2.885257371E9, 2.8949860055E9, 2.8519601175E9, 2.8668191635E9, 2.8549864175E9, 2.8799943825E9, 2.8582215045E9, 2.938211583E9, 2.8635377655E9, 2.973583483E9, 2.921569906E9, 2.8590365925E9, 2.9844560875E9, 2.843758348E9, 2.8545233315E9, 2.863041981E9, 2.9595204215E9, 2.9350427055E9, 2.918158247E9, 2.9414291555E9, 2.9329860395E9, 2.8440993775E9, 2.8465428655E9, 2.8733677845E9, 3.0830364825E9, 2.853905538E9, 2.855733614E9, 2.911995874E9, 2.855971887E9, 2.8539024015E9, 2.969120146E9, 2.8550097595E9, 2.871360297E9, 2.8536800705E9, 2.954537048E9, 2.852364028E9, 2.885832172E9, 2.8796026515E9, 3.000613386E9, 2.919792333E9, 2.928721565E9, 2.8734465335E9, 2.895601373E9, 2.956421389E9, 2.893950468E9};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> duration = {368185060, 170157426, 35452598, 108402007, 9115711, 40396767, 201413212, 7496808, 31661924, 186553684, 85781622, 414923305, 2510457, 231684372, 132942492, 167801105, 182629018, 40007539, 58113643, 154279460, 114889631, 118134773, 103474226, 146001578, 125314289, 32356768, 91450221, 11067237, 115778030, 151110487, 18779049, 20358521, 26605852, 109374353, 67083985, 203752633, 21768695, 146877309, 434435255, 66240977, 94234038, 11905649, 42359277, 110247407, 121219900, 103294337, 24784806, 94833007, 8241825};
    vector<string> user = {"G", "G", "G", "G", "G", "G", "G", "G", "G", "G", "G", "G", "G", "G", "G", "G", "G", "G", "G", "G", "G", "G", "G", "G", "G", "G", "G", "G", "G", "G", "G", "G", "G", "G", "G", "G", "G", "G", "G", "G", "G", "G", "G", "G", "G", "G", "G", "G", "G"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {2.8668336925E9, 2.7678198755E9, 2.7004674615E9, 2.736942166E9, 2.687299018E9, 2.702939546E9, 2.7834477685E9, 2.6864895665E9, 2.6985721245E9, 2.7760180045E9, 2.7256319735E9, 2.890202815E9, 2.683996391E9, 2.7985833485E9, 2.7492124085E9, 2.766641715E9, 2.7740556715E9, 2.702744932E9, 2.711797984E9, 2.7598808925E9, 2.740185978E9, 2.741808549E9, 2.7344782755E9, 2.7557419515E9, 2.745398307E9, 2.6989195465E9, 2.728466273E9, 2.688274781E9, 2.7406301775E9, 2.758296406E9, 2.692130687E9, 2.692920423E9, 2.6960440885E9, 2.737428339E9, 2.716283155E9, 2.784617479E9, 2.69362551E9, 2.756179817E9, 2.89995879E9, 2.715861651E9, 2.7298581815E9, 2.688693987E9, 2.703920801E9, 2.737864866E9, 2.7433511125E9, 2.734388331E9, 2.6951335655E9, 2.730157666E9, 2.686862075E9};
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> duration = {22558559, 90369559, 138610409, 37748372, 7322626, 31594339, 17101264, 60910869, 189195689, 15985066, 13510336, 90142930, 69876323, 96074486, 33826877, 137145934, 129719172, 58803844, 8504551, 32003475, 47771126, 91757720, 25115073, 69502853, 139974986, 29639350, 291056886, 165092634, 92297903, 8479161, 42898411, 76721456, 29916040, 105980999, 283371549, 99593054, 67103807, 13834523, 79395293, 31329676, 55470736, 62654652, 80372863, 37262888, 5213517, 87208847, 83890898, 3192759, 35698179};
    vector<string> user = {"Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.772680539E9, 1.806586039E9, 1.830706464E9, 1.7802754455E9, 1.7650625725E9, 1.777198429E9, 1.7699518915E9, 1.791856694E9, 1.855999104E9, 1.7693937925E9, 1.7681564275E9, 1.8064727245E9, 1.796339421E9, 1.8094385025E9, 1.778314698E9, 1.8299742265E9, 1.8262608455E9, 1.7908031815E9, 1.765653535E9, 1.777402997E9, 1.7852868225E9, 1.8072801195E9, 1.773958796E9, 1.796152686E9, 1.8313887525E9, 1.7762209345E9, 1.9069297025E9, 1.8439475765E9, 1.807550211E9, 1.76564084E9, 1.782850465E9, 1.7997619875E9, 1.7763592795E9, 1.814391759E9, 1.903087034E9, 1.8111977865E9, 1.794953163E9, 1.768318521E9, 1.801098906E9, 1.7770660975E9, 1.7891366275E9, 1.7927285855E9, 1.801587691E9, 1.7800327035E9, 1.764008018E9, 1.805005683E9, 1.8033467085E9, 1.762997639E9, 1.779250349E9};
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> duration = {503177490, 51581753, 132170672, 5616718, 286102887, 29405183, 640047553, 249453710, 71335730, 417409836, 78853399, 58065892, 233636827, 262132739, 188157321, 635700069, 89697712, 12989583, 540488260, 56226790, 165053871, 772614294, 674896080, 120333515, 182307835, 400119752, 353229363, 34204593, 61138529, 406687306, 51526037, 184737506, 174262210, 70386551, 116272261, 131187987, 185778548, 420946858, 690532519, 350753870, 31168580, 301260816, 112937741, 55861285, 147541532, 13844167, 188129131, 8674190, 54399963, 469070339};
    vector<string> user = {"Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {5.9876424215E9, 5.761844553E9, 5.8021390125E9, 5.7388620355E9, 5.87910512E9, 5.750756268E9, 6.056077453E9, 5.8607805315E9, 5.7717215415E9, 5.9447585945E9, 5.775480376E9, 5.7650866225E9, 5.85287209E9, 5.867120046E9, 5.830132337E9, 6.053903711E9, 5.7809025325E9, 5.742548468E9, 6.0062978065E9, 5.7641670715E9, 5.818580612E9, 6.1223608235E9, 6.0735017165E9, 5.796220434E9, 5.827207594E9, 5.9361135525E9, 5.912668358E9, 5.753155973E9, 5.766622941E9, 5.9393973295E9, 5.761816695E9, 5.8284224295E9, 5.8231847815E9, 5.771246952E9, 5.794189807E9, 5.80164767E9, 5.8289429505E9, 5.9465271055E9, 6.081319936E9, 5.9114306115E9, 5.7516379665E9, 5.8866840845E9, 5.792522547E9, 5.763984319E9, 5.8098244425E9, 5.74297576E9, 5.830118242E9, 5.7403907715E9, 5.763253658E9, 5.970588846E9};
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> duration = {113289377, 231145928, 150748528, 27210117, 14321136, 288980605, 41817112, 770073130, 49952843, 24898968, 171052175, 43286690, 797349715, 143875228, 212509551, 27864448, 115122943, 82969134, 179491961, 12062527, 214513971, 69193677, 193584688, 316016549, 479941402, 45704098, 400292411, 6503818, 117527241, 58388337, 284810797, 14713466, 203519694, 27312572, 66379604, 157357215, 196606374, 396295765, 64755349, 136183101, 24121129, 110961200, 562701831, 65239802, 509053262, 5623459, 49171990};
    vector<string> user = {"x", "x", "x", "x", "x", "x", "x", "x", "x", "x", "x", "x", "x", "x", "x", "x", "x", "x", "x", "x", "x", "x", "x", "x", "x", "x", "x", "x", "x", "x", "x", "x", "x", "x", "x", "x", "x", "x", "x", "x", "x", "x", "x", "x", "x", "x", "x"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {4.1938921475E9, 4.252820423E9, 4.212621723E9, 4.1508525175E9, 4.144408027E9, 4.2817377615E9, 4.158156015E9, 4.522284024E9, 4.1622238805E9, 4.149696943E9, 4.2227735465E9, 4.158890804E9, 4.5359223165E9, 4.209185073E9, 4.2435022345E9, 4.151179683E9, 4.1948089305E9, 4.178732026E9, 4.2269934395E9, 4.1432787225E9, 4.2445044445E9, 4.1718442975E9, 4.234039803E9, 4.2952557335E9, 4.37721816E9, 4.160099508E9, 4.3373936645E9, 4.140499368E9, 4.1960110795E9, 4.1664416275E9, 4.2796528575E9, 4.144604192E9, 4.239007306E9, 4.150903745E9, 4.170437261E9, 4.2159260665E9, 4.235550646E9, 4.3353953415E9, 4.1696251335E9, 4.2053390095E9, 4.1493080235E9, 4.192728059E9, 4.4185983745E9, 4.16986736E9, 4.39177409E9, 4.1400591885E9, 4.161833454E9};
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> duration = {1000000000, 999999999, 999999998, 999999997, 999999996, 999999995, 999999994, 999999993, 999999992, 999999991, 999999990, 999999989, 999999988, 999999987, 999999986, 999999985, 999999984, 999999983, 999999982, 999999981, 999999980, 999999979, 999999978, 999999977, 999999976, 999999975, 999999974, 999999973, 999999972, 999999971, 999999970, 999999969, 999999968, 999999967, 999999966, 999999965, 999999964, 999999963, 999999962, 999999961, 999999960, 999999959, 999999958, 999999957, 999999956, 999999955, 999999954, 999999953, 999999952, 999999951};
    vector<string> user = {"a", "a", "a", "a", "a", "b", "b", "b", "b", "b", "c", "c", "c", "c", "c", "d", "d", "d", "d", "d", "e", "e", "e", "e", "e", "e", "e", "e", "e", "e", "d", "d", "d", "d", "d", "c", "c", "c", "c", "c", "b", "b", "b", "b", "b", "a", "a", "a", "a", "a"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {2.54999993875E10, 2.5499999387E10, 2.54999993865E10, 2.5499999386E10, 2.54999993855E10, 2.5499999385E10, 2.54999993845E10, 2.5499999384E10, 2.54999993835E10, 2.5499999383E10, 2.54999993825E10, 2.5499999382E10, 2.54999993815E10, 2.5499999381E10, 2.54999993805E10, 2.549999938E10, 2.54999993795E10, 2.5499999379E10, 2.54999993785E10, 2.5499999378E10, 2.54999993775E10, 2.5499999377E10, 2.54999993765E10, 2.5499999376E10, 2.54999993755E10, 2.5499999375E10, 2.54999993745E10, 2.5499999374E10, 2.54999993735E10, 2.5499999373E10, 2.54999993725E10, 2.5499999372E10, 2.54999993715E10, 2.5499999371E10, 2.54999993705E10, 2.549999937E10, 2.54999993695E10, 2.5499999369E10, 2.54999993685E10, 2.5499999368E10, 2.54999993675E10, 2.5499999367E10, 2.54999993665E10, 2.5499999366E10, 2.54999993655E10, 2.5499999365E10, 2.54999993645E10, 2.5499999364E10, 2.54999993635E10, 2.5499999363E10};
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> duration = {1000000000, 999999999, 999999998, 999999997, 999999996, 1000000000, 999999999, 999999998, 999999997, 999999996, 999999999, 999999998, 999999997, 999999996, 1000000000, 999999999, 999999998, 999999997, 999999996, 1000000000, 999999998, 999999997, 999999996, 1000000000, 999999999, 999999998, 999999997, 999999996, 1000000000, 999999999, 999999997, 999999996, 1000000000, 999999999, 999999998, 999999997, 999999996, 1000000000, 999999999, 999999998, 999999996, 1000000000, 999999999, 999999998, 999999997, 999999996, 1000000000, 999999999, 999999998, 999999997};
    vector<string> user = {"Gil Grissom", "Sarah Sidle", "Warrick Brown", "Catherine Willows", "Mac Taylor", "Tim Speedle", "Horatio Caine", "YEEEAAAAAAAAAAH", "b", "B", "Gil Grissom", "Sarah Sidle", "Warrick Brown", "Catherine Willows", "Mac Taylor", "Tim Speedle", "Horatio Caine", "YEEEAAAAAAAAAAH", "b", "B", "Gil Grissom", "Sarah Sidle", "Warrick Brown", "Catherine Willows", "Mac Taylor", "Tim Speedle", "Horatio Caine", "YEEEAAAAAAAAAAH", "b", "B", "Gil Grissom", "Sarah Sidle", "Warrick Brown", "Catherine Willows", "Mac Taylor", "Tim Speedle", "Horatio Caine", "YEEEAAAAAAAAAAH", "b", "B", "Gil Grissom", "Sarah Sidle", "Warrick Brown", "Catherine Willows", "Mac Taylor", "Tim Speedle", "Horatio Caine", "YEEEAAAAAAAAAAH", "b", "B"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {2.549999995E10, 2.54999999495E10, 2.5499999949E10, 2.54999999485E10, 2.5499999948E10, 2.549999995E10, 2.54999999495E10, 2.5499999949E10, 2.54999999485E10, 2.5499999948E10, 2.54999999495E10, 2.5499999949E10, 2.54999999485E10, 2.5499999948E10, 2.549999995E10, 2.54999999495E10, 2.5499999949E10, 2.54999999485E10, 2.5499999948E10, 2.549999995E10, 2.5499999949E10, 2.54999999485E10, 2.5499999948E10, 2.549999995E10, 2.54999999495E10, 2.5499999949E10, 2.54999999485E10, 2.5499999948E10, 2.549999995E10, 2.54999999495E10, 2.54999999485E10, 2.5499999948E10, 2.549999995E10, 2.54999999495E10, 2.5499999949E10, 2.54999999485E10, 2.5499999948E10, 2.549999995E10, 2.54999999495E10, 2.5499999949E10, 2.5499999948E10, 2.549999995E10, 2.54999999495E10, 2.5499999949E10, 2.54999999485E10, 2.5499999948E10, 2.549999995E10, 2.54999999495E10, 2.5499999949E10, 2.54999999485E10};
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> duration = {1000000000, 999999999, 1, 999999998, 2, 999999999};
    vector<string> user = {"a", "c", "c", "b", "b", "d"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {2.999999999E9, 2.9999999985E9, 2.4999999995E9, 2.999999998E9, 2.5E9, 9.99999999E8};
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> duration = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    vector<string> user = {"a", "a", "a", "a", "a"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {3.0E9, 3.0E9, 3.0E9, 3.0E9, 3.0E9};
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> duration = {1000000000, 1000000000, 1000000000, 1};
    vector<string> user = {"a", "a", "a", "b"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {2.000000001E9, 2.000000001E9, 2.000000001E9, 1.0};
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> duration = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    vector<string> user = {"a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "b", "b", "b", "b", "b", "c", "c", "c", "c", "c"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {3.05E10, 3.05E10, 3.05E10, 3.05E10, 3.05E10, 3.05E10, 3.05E10, 3.05E10, 3.05E10, 3.05E10, 3.05E10, 3.05E10, 3.05E10, 3.05E10, 3.05E10, 3.05E10, 3.05E10, 3.05E10, 3.05E10, 3.05E10, 3.05E10, 3.05E10, 3.05E10, 3.05E10, 3.05E10, 3.05E10, 3.05E10, 3.05E10, 3.05E10, 3.05E10, 3.05E10, 3.05E10, 3.05E10, 3.05E10, 3.05E10, 3.05E10, 3.05E10, 3.05E10, 3.05E10, 3.05E10, 5.5E9, 5.5E9, 5.5E9, 5.5E9, 5.5E9, 5.5E9, 5.5E9, 5.5E9, 5.5E9, 5.5E9};
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> duration = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    vector<string> user = {"a", "a", "a", "a", "a", "b", "c", "d"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {6.0E9, 6.0E9, 6.0E9, 6.0E9, 6.0E9, 2.0E9, 2.0E9, 2.0E9};
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> duration = {999999997, 999999992, 999999997, 999999994, 999999991, 999999999, 999999994, 999999999, 999999994, 999999991, 999999998, 999999999, 999999993, 999999994, 999999992, 999999995, 999999993, 999999994, 999999997, 999999996, 999999999, 999999998, 999999995, 999999991, 999999997, 999999999, 999999997, 999999996, 999999994, 999999993, 999999998, 999999990, 999999995, 999999998, 999999995, 999999995, 999999994, 999999990, 999999993, 999999990, 999999991, 999999997, 999999994, 999999997, 999999995, 999999999, 999999999, 999999990, 999999999, 999999998};
    vector<string> user = {"e", "r", "y", "b", "q", "w", "w", "w", "n", "j", "e", "t", "t", "f", "b", "m", "f", "z", "e", "k", "n", "z", "d", "h", "w", "u", "b", "c", "c", "r", "q", "n", "q", "k", "v", "c", "h", "k", "o", "x", "v", "a", "m", "v", "s", "x", "e", "f", "y", "e"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {4.7999999759E10, 8.499999951E9, 1.94999998985E10, 2.79999998465E10, 3.54999998035E10, 4.3499999771E10, 4.34999997685E10, 4.3499999771E10, 2.79999998465E10, 9.99999991E8, 4.79999997595E10, 1.64999999095E10, 1.64999999065E10, 2.19999998835E10, 2.79999998455E10, 1.24999999265E10, 2.1999999883E10, 1.6499999907E10, 4.7999999759E10, 3.5499999806E10, 2.7999999849E10, 1.6499999909E10, 3.4999999765E9, 8.4999999505E9, 4.349999977E10, 5.99999997E9, 2.7999999848E10, 3.99999997825E10, 3.99999997815E10, 8.4999999515E9, 3.5499999807E10, 2.79999998445E10, 3.54999998055E10, 3.5499999807E10, 2.7999999847E10, 3.9999999782E10, 8.499999952E9, 3.5499999803E10, 1.999999984E9, 1.2499999924E10, 2.7999999845E10, 4.999999971E9, 1.2499999926E10, 2.7999999848E10, 3.4999999765E9, 1.24999999285E10, 4.799999976E10, 2.19999998815E10, 1.94999998995E10, 4.79999997595E10};
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> duration = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    vector<string> user = {"a", "a", "a", "a", "a", "a", "a", "a", "a", "a"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {5.5E9, 5.5E9, 5.5E9, 5.5E9, 5.5E9, 5.5E9, 5.5E9, 5.5E9, 5.5E9, 5.5E9};
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> duration = {1000000000, 999999998, 997996998, 999999998, 1000000000, 999999998};
    vector<string> user = {"A", "A", "A", "A", "B", "A"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {3.998998496E9, 3.998998495E9, 3.997996995E9, 3.998998495E9, 1.0E9, 3.998998495E9};
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> duration = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    vector<string> user = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "a", "b", "c", "d", "e", "f", "g", "h", "i", "k"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {2.8E10, 2.8E10, 2.8E10, 2.8E10, 2.8E10, 2.8E10, 2.8E10, 2.8E10, 2.8E10, 3.5E9, 2.8E10, 2.8E10, 2.8E10, 2.8E10, 2.8E10, 2.8E10, 2.8E10, 2.8E10, 2.8E10, 3.5E9, 2.8E10, 2.8E10, 2.8E10, 2.8E10, 2.8E10, 2.8E10, 2.8E10, 2.8E10, 2.8E10, 3.5E9, 2.8E10, 2.8E10, 2.8E10, 2.8E10, 2.8E10, 2.8E10, 2.8E10, 2.8E10, 2.8E10, 3.5E9, 2.8E10, 2.8E10, 2.8E10, 2.8E10, 2.8E10, 2.8E10, 2.8E10, 2.8E10, 2.8E10, 1.0E9};
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> duration = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    vector<string> user = {"Slevin", "Slevin", "Slevin", "Slevin", "Slevin", "Slevin", "Slevin", "Slevin", "Slevin", "Slevin", "Slevin", "Slevin", "Slevin", "Slevin", "Slevin", "Slevin", "Slevin", "Slevin", "Slevin", "Slevin", "Slevin", "Slevin", "Slevin", "Slevin", "Slevin", "Slevin", "Slevin", "Slevin", "Slevin", "Slevin", "Slevin", "Slevin", "Slevin", "Slevin", "Slevin", "Slevin", "Slevin", "Slevin", "Slevin", "Slevin", "Slevin", "Slevin", "Slevin", "Slevin", "Slevin", "Slevin", "Slevin", "Slevin", "Slevin", "Slevin"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.9500001024E10, 1.95000010245E10, 1.95000010255E10, 1.95000010275E10, 1.95000010315E10, 1.95000010395E10, 1.95000010555E10, 1.95000010875E10, 1.95000011515E10, 1.95000012795E10, 1.95000015355E10, 2.00000010235E10, 2.00000010235E10, 2.00000010235E10, 2.00000010235E10, 2.00000010235E10, 2.00000010235E10, 2.00000010235E10, 2.00000010235E10, 2.00000010235E10, 2.00000010235E10, 2.00000010235E10, 2.00000010235E10, 2.00000010235E10, 2.00000010235E10, 2.00000010235E10, 2.00000010235E10, 2.00000010235E10, 2.00000010235E10, 2.00000010235E10, 2.00000010235E10, 2.00000010235E10, 2.00000010235E10, 2.00000010235E10, 2.00000010235E10, 2.00000010235E10, 2.00000010235E10, 2.00000010235E10, 2.00000010235E10, 2.00000010235E10, 2.00000010235E10, 2.00000010235E10, 2.00000010235E10, 2.00000010235E10, 2.00000010235E10, 2.00000010235E10, 2.00000010235E10, 2.00000010235E10, 2.00000010235E10, 2.00000010235E10};
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> duration = {1000000000, 1000000000, 1000000000, 1000000000};
    vector<string> user = {"a", "a", "a", "b"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {3.0E9, 3.0E9, 3.0E9, 1.0E9};
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> duration = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    vector<string> user = {"a", "a", "a", "b", "b", "a"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {4.5E9, 4.5E9, 4.5E9, 1.5E9, 1.5E9, 4.5E9};
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> duration = {1, 8000, 64000, 216000, 512000, 1000000, 1728000, 2744000, 4096000, 5832000, 8000000, 10648000, 13824000, 17576000, 21952000, 27000000, 32768000, 39304000, 46656000, 54872000, 64000000, 74088000, 85184000, 97336000, 110592000, 125000000, 140608000, 157464000, 175616000, 195112000, 216000000, 238328000, 262144000, 287496000, 314432000, 343000000, 373248000, 405224000, 438976000, 474552000, 512000000, 551368000, 592704000, 636056000, 681472000, 729000000, 778688000, 830584000, 884736000, 941192000};
    vector<string> user = {"NEALWU", "NEALWU", "NEALWU", "NEALWU", "NEALWU", "NEALWU", "NEALWU", "NEALWU", "NEALWU", "NEALWU", "NEALWU", "NEALWU", "NEALWU", "NEALWU", "NEALWU", "NEALWU", "NEALWU", "NEALWU", "NEALWU", "NEALWU", "NEALWU", "NEALWU", "NEALWU", "NEALWU", "NEALWU", "NEALWU", "NEALWU", "NEALWU", "NEALWU", "NEALWU", "NEALWU", "NEALWU", "NEALWU", "NEALWU", "NEALWU", "NEALWU", "NEALWU", "NEALWU", "NEALWU", "NEALWU", "NEALWU", "NEALWU", "NEALWU", "NEALWU", "NEALWU", "NEALWU", "NEALWU", "NEALWU", "NEALWU", "NEALWU"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {6.002500001E9, 6.0025040005E9, 6.0025320005E9, 6.0026080005E9, 6.0027560005E9, 6.0030000005E9, 6.0033640005E9, 6.0038720005E9, 6.0045480005E9, 6.0054160005E9, 6.0065000005E9, 6.0078240005E9, 6.0094120005E9, 6.0112880005E9, 6.0134760005E9, 6.0160000005E9, 6.0188840005E9, 6.0221520005E9, 6.0258280005E9, 6.0299360005E9, 6.0345000005E9, 6.0395440005E9, 6.0450920005E9, 6.0511680005E9, 6.0577960005E9, 6.0650000005E9, 6.0728040005E9, 6.0812320005E9, 6.0903080005E9, 6.1000560005E9, 6.1105000005E9, 6.1216640005E9, 6.1335720005E9, 6.1462480005E9, 6.1597160005E9, 6.1740000005E9, 6.1891240005E9, 6.2051120005E9, 6.2219880005E9, 6.2397760005E9, 6.2585000005E9, 6.2781840005E9, 6.2988520005E9, 6.3205280005E9, 6.3432360005E9, 6.3670000005E9, 6.3918440005E9, 6.4177920005E9, 6.4448680005E9, 6.4730960005E9};
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> duration = {681692777, 649760492, 804289383, 189641421, 714636915, 719885386, 804289383, 719885386, 681692777, 719885386, 846930886, 596516649, 649760492, 189641421, 681692777, 804289383, 681692777, 714636915, 649760492, 424238335, 189641421, 681692777, 681692777, 596516649, 189641421, 649760492, 714636915, 719885386, 846930886, 681692777, 189641421, 714636915, 846930886, 189641421, 957747793, 649760492, 596516649, 957747793, 424238335, 804289383, 714636915, 719885386, 846930886, 804289383, 719885386, 714636915, 681692777, 804289383, 719885386, 846930885};
    vector<string> user = {"c", "g", "e", "f", "d", "f", "f", "e", "d", "a", "f", "d", "c", "d", "d", "c", "e", "a", "c", "a", "a", "d", "f", "a", "e", "e", "a", "c", "b", "b", "f", "e", "f", "a", "a", "b", "e", "g", "e", "a", "e", "a", "d", "a", "b", "f", "a", "g", "d", "a"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {7.4036078625E9, 1.53077908E9, 2.207158823E10, 1.1407100987E10, 1.67227680655E10, 1.16722229695E10, 1.1714424968E10, 2.20293862315E10, 1.67062959965E10, 2.89590516925E10, 1.17357457195E10, 1.66637079325E10, 7.38764172E9, 1.64602703185E10, 1.67062959965E10, 7.4649061655E9, 2.2010289927E10, 2.8956427457E10, 7.38764172E9, 2.8811228167E10, 2.869392971E10, 1.67062959965E10, 1.1653126665E10, 2.8897367324E10, 2.1764264249E10, 2.19943237845E10, 2.8956427457E10, 7.422704167E9, 4.2843978815E9, 4.201778827E9, 1.1407100987E10, 2.2026761996E10, 1.17357457195E10, 2.869392971E10, 2.9077982896E10, 4.1858126845E9, 2.1967701863E10, 1.6847727305E9, 2.1881562706E10, 2.9001253691E10, 2.2026761996E10, 2.89590516925E10, 1.6788915051E10, 2.9001253691E10, 4.2208751315E9, 1.1669598734E10, 2.8939955388E10, 1.6080435255E9, 1.6725392301E10, 2.9022574442E10};
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> duration = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    vector<string> user = {"A", "A", "A", "A", "A"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {3.0E9, 3.0E9, 3.0E9, 3.0E9, 3.0E9};
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> duration = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    vector<string> user = {"a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10, 2.55E10};
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> duration = {1000000000, 1000000000, 1000000000, 3};
    vector<string> user = {"A", "A", "A", "B"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {2.000000003E9, 2.000000003E9, 2.000000003E9, 3.0};
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> duration = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    vector<string> user = {"a", "a", "a", "a", "a", "a", "a", "a", "a", "b", "b", "c"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {8.0E9, 8.0E9, 8.0E9, 8.0E9, 8.0E9, 8.0E9, 8.0E9, 8.0E9, 8.0E9, 2.5E9, 2.5E9, 1.0E9};
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> duration = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    vector<string> user = {"a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {8.5E9, 8.5E9, 8.5E9, 8.5E9, 8.5E9, 8.5E9, 8.5E9, 8.5E9, 8.5E9, 8.5E9, 8.5E9, 8.5E9, 8.5E9, 8.5E9, 8.5E9, 8.5E9};
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> duration = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    vector<string> user = {"a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.55E10, 1.55E10, 1.55E10, 1.55E10, 1.55E10, 1.55E10, 1.55E10, 1.55E10, 1.55E10, 1.55E10, 1.55E10, 1.55E10, 1.55E10, 1.55E10, 1.55E10, 1.55E10, 1.55E10, 1.55E10, 1.55E10, 1.55E10, 1.55E10, 1.55E10, 1.55E10, 1.55E10, 1.55E10, 1.55E10, 1.55E10, 1.55E10, 1.55E10, 1.55E10};
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> duration = {20001231, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 199999999, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 999999999, 1000000000, 1000000000, 1000000000, 999999999, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 999999980, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 999969999, 1000000000, 1000000000, 1000000000, 1000000000, 999999999, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1};
    vector<string> user = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "a", "b", "c", "d", "e", "f", "g", "h", "i", "j"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {6.020001232E9, 3.02199712085E10, 2.021997122E10, 3.02199712085E10, 4.2719971207E10, 4.2719971207E10, 1.0220001231E10, 3.02199712085E10, 1.52199862305E10, 2.5000000005E9, 6.5100006165E9, 3.02199712085E10, 2.021997122E10, 3.02199712085E10, 4.2719971207E10, 4.2719971207E10, 1.06200012315E10, 3.0219971208E10, 1.52199862305E10, 2.5000000005E9, 6.5100006165E9, 3.0219971208E10, 2.021997122E10, 3.02199712085E10, 4.2719971207E10, 4.2719971207E10, 1.06200012315E10, 3.02199712085E10, 1.52199862305E10, 2.5000000005E9, 6.5100006165E9, 3.02199712085E10, 2.021997121E10, 3.02199712085E10, 4.2719971207E10, 4.2719971207E10, 1.06200012315E10, 3.02199712085E10, 1.521997123E10, 2.5000000005E9, 6.5100006165E9, 3.02199712085E10, 2.021997122E10, 3.0219971208E10, 4.2719971207E10, 4.2719971207E10, 1.06200012315E10, 3.02199712085E10, 1.52199862305E10, 2.000000001E9};
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> duration = {999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999};
    vector<string> user = {"a", "b", "c", "a", "b", "c", "a", "b", "c", "a", "b", "c", "a", "b", "c", "a", "b", "c", "a", "b", "c", "a", "b", "c", "a", "b", "c", "a", "b", "c", "a", "b", "c", "a", "b", "c", "a", "b", "c", "a", "b", "c", "a", "b", "c", "a", "b", "c", "a", "b"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {3.34999999665E10, 3.34999999665E10, 8.4999999915E9, 3.34999999665E10, 3.34999999665E10, 8.4999999915E9, 3.34999999665E10, 3.34999999665E10, 8.4999999915E9, 3.34999999665E10, 3.34999999665E10, 8.4999999915E9, 3.34999999665E10, 3.34999999665E10, 8.4999999915E9, 3.34999999665E10, 3.34999999665E10, 8.4999999915E9, 3.34999999665E10, 3.34999999665E10, 8.4999999915E9, 3.34999999665E10, 3.34999999665E10, 8.4999999915E9, 3.34999999665E10, 3.34999999665E10, 8.4999999915E9, 3.34999999665E10, 3.34999999665E10, 8.4999999915E9, 3.34999999665E10, 3.34999999665E10, 8.4999999915E9, 3.34999999665E10, 3.34999999665E10, 8.4999999915E9, 3.34999999665E10, 3.34999999665E10, 8.4999999915E9, 3.34999999665E10, 3.34999999665E10, 8.4999999915E9, 3.34999999665E10, 3.34999999665E10, 8.4999999915E9, 3.34999999665E10, 3.34999999665E10, 8.4999999915E9, 3.34999999665E10, 3.34999999665E10};
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> duration = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    vector<string> user = {"A", "A", "A", "A", "A", "A", "A", "A", "B", "B", "B", "B"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {8.5E9, 8.5E9, 8.5E9, 8.5E9, 8.5E9, 8.5E9, 8.5E9, 8.5E9, 2.5E9, 2.5E9, 2.5E9, 2.5E9};
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> duration = {42, 999999958, 18468, 999981532, 6335, 999993665, 26501, 999973499, 19170, 999980830, 15725, 999984275, 11479, 999988521, 29359, 999970641, 26963, 999973037, 24465, 999975535, 999994295, 999971855, 700033850, 999976719, 999983173, 700040108, 999990039, 999999509, 700010452, 999997005, 999988058, 700014937, 999995173, 999994564, 700010263, 999967609, 999985396, 700046995, 999996098, 999999847, 700004055, 999999708, 999987618, 700012674, 999982579, 999981284, 700036137, 999980282, 999980105, 700039613};
    vector<string> user = {"a", "a", "b", "b", "c", "c", "d", "d", "e", "e", "f", "f", "g", "g", "h", "h", "i", "i", "j", "j", "A", "A", "A", "B", "B", "B", "C", "C", "C", "D", "D", "D", "E", "E", "E", "F", "F", "F", "G", "G", "G", "H", "H", "H", "I", "I", "I", "J", "J", "J"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {5.000000021E9, 5.499999979E9, 5.000009234E9, 5.499990766E9, 5.0000031675E9, 5.4999968325E9, 5.0000132505E9, 5.4999867495E9, 5.000009585E9, 5.499990415E9, 5.0000078625E9, 5.4999921375E9, 5.0000057395E9, 5.4999942605E9, 5.0000146795E9, 5.4999853205E9, 5.0000134815E9, 5.4999865185E9, 5.0000122325E9, 5.4999877675E9, 2.39999971475E10, 2.39999859275E10, 2.3850016925E10, 2.39999883595E10, 2.39999915865E10, 2.3850020054E10, 2.39999950195E10, 2.39999997545E10, 2.3850005226E10, 2.39999985025E10, 2.3999994029E10, 2.38500074685E10, 2.39999975865E10, 2.3999997282E10, 2.38500051315E10, 2.39999838045E10, 2.3999992698E10, 2.38500234975E10, 2.3999998049E10, 2.39999999235E10, 2.38500020275E10, 2.3999999854E10, 2.3999993809E10, 2.3850006337E10, 2.39999912895E10, 2.3999990642E10, 2.38500180685E10, 2.3999990141E10, 2.39999900525E10, 2.38500198065E10};
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> duration = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    vector<string> user = {"a", "a", "a", "a", "a", "b"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {4.0E9, 4.0E9, 4.0E9, 4.0E9, 4.0E9, 1.0E9};
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> duration = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    vector<string> user = {"A", "A", "A", "B", "B", "B"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {3.5E9, 3.5E9, 3.5E9, 3.5E9, 3.5E9, 3.5E9};
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> duration = {646004693, 344123531, 618932041, 174486429, 260281057, 726517548, 365087262, 591168198, 897162135, 262866219, 13531792, 906279918, 590422439, 345705287, 441651621, 50832623, 633578975, 741034383, 720033277, 158530204, 178075855, 504694994, 879421156, 53224408, 908388632, 217278483, 778496582, 743418828, 343013354, 472612495, 326219755, 284260838, 768045417, 24862241, 597191847, 72576863, 394317743, 65895058, 231400000, 301858372, 236921034, 917526104, 448895046, 178264162, 265752106, 338567200, 247572654, 203827398, 250900110, 61980591};
    vector<string> user = {"I", "J", "H", "N", "M", "B", "K", "D", "L", "K", "O", "E", "D", "K", "L", "I", "A", "K", "G", "N", "I", "B", "A", "K", "F", "N", "F", "E", "D", "C", "L", "L", "M", "N", "H", "M", "A", "I", "A", "E", "L", "K", "D", "L", "M", "D", "A", "E", "B", "J"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {2.980845504E9, 3.886456185E8, 4.0457752365E9, 1.267070302E9, 5.15783941E9, 6.815341703E9, 1.96235107575E10, 1.24870262025E10, 1.4978296062E10, 1.9572400236E10, 1.3531792E7, 1.0410856686E10, 1.2486653323E10, 1.961381977E10, 1.4750540805E10, 2.683259469E9, 1.72218895185E10, 1.9811484318E10, 2.187439043E9, 1.2590921895E9, 2.746881085E9, 6.704430426E9, 1.7344810609E10, 1.94675793305E10, 8.490776178E9, 1.288466329E9, 8.425830153E9, 1.0329426141E10, 1.23629487805E10, 8.92248409E8, 1.4692824872E10, 1.46718454135E10, 5.41172159E9, 1.192258208E9, 4.0349051395E9, 5.063987313E9, 1.71022589025E10, 2.6907906865E9, 1.7020800031E10, 1.0108645913E10, 1.46481755115E10, 1.98997301785E10, 1.24158896265E10, 1.46188470755E10, 5.1605749345E9, 1.23607257035E10, 1.7028886358E10, 1.0059630426E10, 6.577532984E9, 2.475741485E8};
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> duration = {1, 1, 1, 1, 1, 1, 2, 2, 2, 3, 3, 2, 4, 1, 5, 6, 1, 1, 2, 2, 5, 2, 3, 3, 4, 4, 5, 2, 5, 2, 2, 3};
    vector<string> user = {"a", "a", "a", "a", "a", "a", "b", "b", "b", "c", "c", "d", "d", "e", "e", "f", "g", "g", "g", "g", "h", "j", "j", "i", "i", "k", "k", "l", "l", "m", "m", "m"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {31.5, 31.5, 31.5, 31.5, 31.5, 31.5, 32.0, 32.0, 32.0, 32.5, 32.5, 32.0, 33.0, 31.5, 33.5, 34.0, 31.5, 31.5, 32.0, 32.0, 7.5, 6.0, 6.5, 64.0, 64.5, 79.5, 80.0, 63.5, 65.0, 63.5, 63.5, 64.0};
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> duration = {999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 1241214, 124124, 4142444, 124214};
    vector<string> user = {"a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "b", "b", "b", "b", "b", "b", "b", "ddd"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.0005631986E10, 1.0005631986E10, 1.0005631986E10, 1.0005631986E10, 1.0005631986E10, 1.0005631986E10, 1.0005631986E10, 1.0005631986E10, 1.0005631986E10, 1.0005631986E10, 1.0005631986E10, 2.5028781025E9, 2.5028781025E9, 2.5028781025E9, 2.5028781025E9, 2.00349871E9, 2.002940165E9, 2.004949325E9, 124214.0};
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> duration = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    vector<string> user = {"a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {2.05E10, 2.05E10, 2.05E10, 2.05E10, 2.05E10, 2.05E10, 2.05E10, 2.05E10, 2.05E10, 2.05E10, 2.05E10, 2.05E10, 2.05E10, 2.05E10, 2.05E10, 2.05E10, 2.05E10, 2.05E10, 2.05E10, 2.05E10, 2.05E10, 2.05E10, 2.05E10, 2.05E10, 2.05E10, 2.05E10, 2.05E10, 2.05E10, 2.05E10, 2.05E10, 2.05E10, 2.05E10, 2.05E10, 2.05E10, 2.05E10, 2.05E10, 2.05E10, 2.05E10, 2.05E10, 2.05E10};
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> duration = {999999999, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    vector<string> user = {"a", "a", "a", "b", "b", "b"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.999999999E9, 1.9999999995E9, 1.9999999995E9, 4.999999999E9, 4.999999999E9, 4.999999999E9};
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> duration = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    vector<string> user = {"A", "A", "A", "A", "A", "B"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {4.0E9, 4.0E9, 4.0E9, 4.0E9, 4.0E9, 1.0E9};
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> duration = {970797474, 902706177, 955253469, 915493777, 920515033, 987702674, 945219582, 966261965, 939194091, 990220574, 932617184, 919288460, 943546653, 945661662, 943906763, 973349161, 963912263, 983326852, 941607881, 940809897, 914733324, 963669309, 981037902, 969734667, 949053437, 958593715, 923604343, 942703970, 909656391, 987944413, 908319252, 998114767, 981664879, 973765304, 928791382, 989591446, 985737758, 984236807, 974410070, 991763824, 939620979, 999467251, 978774920, 933575473, 994858561, 916507086, 999240889, 917023146, 968366561, 912978239};
    vector<string> user = {"A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {2.43648645655E10, 2.4330818917E10, 2.4357092563E10, 2.4337212717E10, 2.4339723345E10, 2.43733171655E10, 2.43520756195E10, 2.4362596811E10, 2.4349062874E10, 2.43745761155E10, 2.43457744205E10, 2.43391100585E10, 2.4351239155E10, 2.43522966595E10, 2.435141921E10, 2.4366140409E10, 2.436142196E10, 2.43711292545E10, 2.4350269769E10, 2.4349870777E10, 2.43368324905E10, 2.4361300483E10, 2.43699847795E10, 2.4364333162E10, 2.4353992547E10, 2.4358762686E10, 2.4341268E10, 2.43508178135E10, 2.4334294024E10, 2.4373438035E10, 2.43336254545E10, 2.4378523212E10, 2.4370298268E10, 2.43663484805E10, 2.43438615195E10, 2.43742615515E10, 2.43723347075E10, 2.4371584232E10, 2.43666708635E10, 2.43753477405E10, 2.4349276318E10, 2.4379199454E10, 2.43688532885E10, 2.4346253565E10, 2.4376895109E10, 2.43377193715E10, 2.4379086273E10, 2.43379774015E10, 2.4363649109E10, 2.4335954948E10};
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> duration = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 705032704};
    vector<string> user = {"A", "A", "A", "A", "A", "B"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {3.705032704E9, 3.705032704E9, 3.705032704E9, 3.705032704E9, 3.705032704E9, 7.05032704E8};
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> duration = {1000000000, 1000000000, 1000000000, 5};
    vector<string> user = {"A", "A", "A", "B"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {2.000000005E9, 2.000000005E9, 2.000000005E9, 5.0};
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> duration = {1000000000, 1000000000, 1000000000, 1000000000, 999999997, 999999998, 999999996, 999999995, 999999994, 999999999, 999999992, 999999992, 999999999, 999999997, 999999996, 999999995, 999999994, 999999999, 999999992, 999999992, 999999996, 999999995, 999999994, 999999999, 999999992, 999999992, 999999996, 999999995, 999999994, 999999999, 999999992, 999999992, 999999996, 999999995, 999999994, 999999999, 999999992, 999999992, 999999996, 999999995, 999999994, 999999999, 999999992, 999999992, 1000000000, 1000000000, 1000000000, 1000000000};
    vector<string> user = {"dsf", "abc", "dsf", "dsf", "tid", "tid", "tid", "tid", "tid", "tid", "tid", "tid", "tid", "tid", "dsf", "abc", "dsf", "abc", "dsf", "abc", "dsf", "abc", "dsf", "abc", "dsf", "abc", "dsf", "abc", "dsf", "dsf", "tid", "dsf", "dsf", "tid", "dsf", "dsf", "tid", "dsf", "dsf", "tid", "dsf", "dsf", "tid", "dsf", "tid", "tid", "tid", "tid"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {3.79999998455E10, 4.4999999835E9, 3.79999998455E10, 3.79999998455E10, 1.7999999928E10, 1.79999999285E10, 1.79999999275E10, 1.7999999927E10, 1.79999999265E10, 1.7999999929E10, 1.79999999255E10, 1.79999999255E10, 1.7999999929E10, 1.7999999928E10, 3.79999998435E10, 4.499999981E9, 3.79999998425E10, 4.499999983E9, 3.79999998415E10, 4.4999999795E9, 3.79999998435E10, 4.499999981E9, 3.79999998425E10, 4.499999983E9, 3.79999998415E10, 4.4999999795E9, 3.79999998435E10, 4.499999981E9, 3.79999998425E10, 3.7999999845E10, 1.79999999255E10, 3.79999998415E10, 3.79999998435E10, 1.7999999927E10, 3.79999998425E10, 3.7999999845E10, 1.79999999255E10, 3.79999998415E10, 3.79999998435E10, 1.7999999927E10, 3.79999998425E10, 3.7999999845E10, 1.79999999255E10, 3.79999998415E10, 1.79999999295E10, 1.79999999295E10, 1.79999999295E10, 1.79999999295E10};
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> duration = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 3};
    vector<string> user = {"gus", "gus", "gus", "gus", "gus", "tim"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {3.000000003E9, 3.000000003E9, 3.000000003E9, 3.000000003E9, 3.000000003E9, 3.0};
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> duration = {1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<string> user = {"a", "a", "a", "a", "s", "s", "s", "s", "s"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {2.5, 2.5, 2.5, 2.5, 7.0, 7.0, 7.0, 7.0, 7.0};
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> duration = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    vector<string> user = {"A", "A", "A", "B", "B", "B", "B", "B", "B"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {2.0E9, 2.0E9, 2.0E9, 6.5E9, 6.5E9, 6.5E9, 6.5E9, 6.5E9, 6.5E9};
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> duration = {10, 10, 10, 10, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    vector<string> user = {"a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {70.0, 70.0, 70.0, 70.0, 66.0, 66.0, 66.0, 66.0, 66.0, 66.0, 66.0, 66.0, 66.0, 66.0, 66.0, 66.0, 66.0, 66.0, 66.0, 66.0, 66.0, 66.0, 66.0, 66.0, 66.0, 66.0, 66.0, 66.0, 66.0, 66.0, 66.0, 66.0, 66.0, 66.0, 66.0, 66.0, 66.0, 66.0, 66.0, 66.0, 66.0, 66.0, 66.0, 66.0, 66.0, 66.0, 66.0, 66.0, 66.0};
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> duration = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    vector<string> user = {"a", "a", "a", "b", "a"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {3.5E9, 3.5E9, 3.5E9, 1.0E9, 3.5E9};
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> duration = {2, 3, 1, 1000000000, 1000000000, 1000000000, 2};
    vector<string> user = {"a", "b", "b", "c", "c", "c", "a"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {5.0, 5.5, 4.5, 2.000000008E9, 2.000000008E9, 2.000000008E9, 5.0};
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> duration = {1, 1, 2};
    vector<string> user = {"a", "a", "b"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {2.5, 2.5, 3.0};
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> duration = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, 2097152, 4194304, 8388608, 16777216, 33554432, 67108864, 134217728, 268435456, 536870912, 504908201, 34047176, 361779981, 220788548, 449537428, 775634013, 69185181, 676713498, 6362697, 337868649, 359409351, 809653407, 656619855, 965132069, 626042468, 467547080, 885364430, 305873890, 966427372, 881929412};
    vector<string> user = {"a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {5.717283265E9, 5.7172832655E9, 5.7172832665E9, 5.7172832685E9, 5.7172832725E9, 5.7172832805E9, 5.7172832965E9, 5.7172833285E9, 5.7172833925E9, 5.7172835205E9, 5.7172837765E9, 5.7172842885E9, 5.7172853125E9, 5.7172873605E9, 5.7172914565E9, 5.7172996485E9, 5.7173160325E9, 5.7173488005E9, 5.7174143365E9, 5.7175454085E9, 5.7178075525E9, 5.7183318405E9, 5.7193804165E9, 5.7214775685E9, 5.7256718725E9, 5.7340604805E9, 5.7508376965E9, 5.7843921285E9, 5.8515009925E9, 5.9857187205E9, 5.969737365E9, 5.7343068525E9, 5.898173255E9, 5.8276775385E9, 5.9420519785E9, 6.105100271E9, 5.751875855E9, 6.0556400135E9, 5.720464613E9, 5.886217589E9, 5.89698794E9, 6.122109968E9, 6.045593192E9, 6.199849299E9, 6.0303044985E9, 5.9510568045E9, 6.1599654795E9, 5.8702202095E9, 6.2004969505E9, 6.1582479705E9};
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> duration = {1000000000, 1000000000, 1000000000, 1000000000};
    vector<string> user = {"Tom", "Tom", "Tom", "TomTom"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {3.0E9, 3.0E9, 3.0E9, 1.0E9};
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> duration = {1000000000, 1000000000, 1000000000, 1, 1, 1000000000, 2, 3, 4};
    vector<string> user = {"a", "a", "a", "c", "d", "e", "c", "e", "q"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {3.000000011E9, 3.000000011E9, 3.000000011E9, 3.0, 1.0, 1.0000000095E9, 3.5, 5.00000011E8, 8.0};
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> duration = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    vector<string> user = {"Bob", "Bob", "Bob", "Bob", "Bob", "Bob", "Bob", "Bob", "Bob", "Bob", "Bob"};
    BatchSystemRoulette* pObj = new BatchSystemRoulette();
    clock_t start = clock();
    vector<double> result = pObj->expectedFinishTimes(duration, user);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {6.0E9, 6.0E9, 6.0E9, 6.0E9, 6.0E9, 6.0E9, 6.0E9, 6.0E9, 6.0E9, 6.0E9, 6.0E9};
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22697599&rd=14234&pm=11119
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
 
#define forn(i,n) for(int i=0;i<(int)(n);i++)
#define dforn(i,n) for(int i = (int)(n)-1;i>=0;i--)
#define all(v) v.begin(),v.end()
 
typedef long long tint;
 
class BatchSystemRoulette {
public:
  vector <double> expectedFinishTimes(vector <int> duration, vector <string> user)
  {
    int n = duration.size();
    vector<double> duraciones(n);
    forn(i,n)
    {
      duraciones[i] = 0;
      forn(j,n)
      if(user[i]==user[j])
        duraciones[i] += duration[j];
    }
    vector<double> res(n);
    forn(i,n)
    {
      res[i] = duration[i];
      forn(j,n)
      {
        if(i==j)
          continue;
        if(duraciones[i]>duraciones[j])
          res[i] += duration[j];
        if(duraciones[i]==duraciones[j])
          res[i] += (double)duration[j]/2.;
      }
    }
    return res;
  }
};
 
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/