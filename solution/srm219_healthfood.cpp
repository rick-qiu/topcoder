/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3118
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

class HealthFood {
public:
    vector<int> selectMeals(vector<int> protein, vector<int> carbs, vector<int> fat, vector<string> dietPlans);
};

vector<int> HealthFood::selectMeals(vector<int> protein, vector<int> carbs, vector<int> fat, vector<string> dietPlans) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<int> protein = {3, 4};
    vector<int> carbs = {2, 8};
    vector<int> fat = {5, 2};
    vector<string> dietPlans = {"P", "p", "C", "c", "F", "f", "T", "t"};
    HealthFood* pObj = new HealthFood();
    clock_t start = clock();
    vector<int> result = pObj->selectMeals(protein, carbs, fat, dietPlans);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 0, 1, 0, 0, 1, 1, 0};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> protein = {3, 4, 1, 5};
    vector<int> carbs = {2, 8, 5, 1};
    vector<int> fat = {5, 2, 4, 4};
    vector<string> dietPlans = {"tFc", "tF", "Ftc"};
    HealthFood* pObj = new HealthFood();
    clock_t start = clock();
    vector<int> result = pObj->selectMeals(protein, carbs, fat, dietPlans);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 2, 0};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> protein = {3, 4, 1, 5};
    vector<int> carbs = {2, 8, 5, 1};
    vector<int> fat = {5, 2, 4, 4};
    vector<string> dietPlans = {"tf", "cF", "PC", "FTCP"};
    HealthFood* pObj = new HealthFood();
    clock_t start = clock();
    vector<int> result = pObj->selectMeals(protein, carbs, fat, dietPlans);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 3, 0};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> protein = {18, 86, 76, 0, 34, 30, 95, 12, 21};
    vector<int> carbs = {26, 56, 3, 45, 88, 0, 10, 27, 53};
    vector<int> fat = {93, 96, 13, 95, 98, 18, 59, 49, 86};
    vector<string> dietPlans = {"f", "Pt", "PT", "fT", "Cp", "C", "t", "", "cCp", "ttp", "PCFt", "P", "pCt", "cP", "Pc"};
    HealthFood* pObj = new HealthFood();
    clock_t start = clock();
    vector<int> result = pObj->selectMeals(protein, carbs, fat, dietPlans);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 6, 6, 2, 4, 4, 5, 0, 5, 5, 6, 6, 3, 5, 6};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> protein = {21, 76, 96, 7, 6, 76, 59, 52, 90, 93, 27, 12, 38, 88, 53, 38, 81, 27, 61, 59, 10, 85, 65, 38, 16, 57, 6, 62, 26, 10, 17, 39, 92, 52, 9, 39, 83, 22};
    vector<int> carbs = {90, 51, 20, 19, 97, 61, 23, 41, 68, 64, 87, 56, 27, 96, 86, 0, 99, 92, 96, 98, 44, 67, 53, 1, 33, 27, 22, 70, 23, 99, 5, 56, 83, 88, 63, 35, 22, 65};
    vector<int> fat = {67, 42, 66, 69, 81, 47, 32, 43, 57, 50, 58, 91, 64, 99, 28, 61, 40, 35, 44, 53, 68, 70, 14, 49, 77, 68, 66, 78, 70, 81, 83, 90, 73, 82, 73, 68, 15, 41};
    vector<string> dietPlans = {"cF", "Ccp", "T", "TPFP", "CCTf", "Fpp", "Tf", "tP", "Pc", "T", "", "pPf", "PT"};
    HealthFood* pObj = new HealthFood();
    clock_t start = clock();
    vector<int> result = pObj->selectMeals(protein, carbs, fat, dietPlans);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 29, 13, 13, 29, 13, 13, 23, 2, 13, 0, 26, 2};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> protein = {68, 77, 14, 80, 43, 90, 80, 90, 17, 81, 92, 25, 20, 65, 85, 38, 30, 14, 20, 0, 62, 95, 88, 0, 78, 17, 30, 65, 33, 27, 97, 1, 36, 6, 20, 71, 36, 10, 16, 80, 41, 24, 12, 4, 54, 46, 97, 36, 37};
    vector<int> carbs = {92, 97, 46, 2, 34, 80, 88, 24, 55, 83, 11, 81, 29, 58, 14, 12, 35, 54, 6, 19, 86, 15, 10, 69, 85, 10, 78, 34, 10, 83, 35, 66, 27, 25, 57, 73, 11, 86, 60, 39, 15, 90, 20, 64, 48, 96, 22, 26, 80};
    vector<int> fat = {67, 28, 71, 82, 79, 73, 26, 76, 39, 83, 40, 24, 47, 25, 46, 34, 61, 75, 50, 92, 7, 9, 48, 16, 4, 33, 62, 48, 12, 17, 4, 55, 13, 76, 69, 63, 9, 57, 44, 13, 52, 63, 50, 53, 92, 98, 4, 31, 56};
    vector<string> dietPlans = {"t", "FP", "PpC", "TpPP", "pp", "TCft", "", "fC", "f", "Fcp", "t", "", "", "pcF", "", "pF", "Ctt", "", "PC", "pfT", "tfCc", "Fc"};
    HealthFood* pObj = new HealthFood();
    clock_t start = clock();
    vector<int> result = pObj->selectMeals(protein, carbs, fat, dietPlans);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {36, 45, 30, 45, 19, 45, 0, 24, 24, 45, 36, 0, 0, 19, 0, 19, 1, 0, 30, 23, 36, 45};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> protein = {5, 0, 23, 28, 8, 20};
    vector<int> carbs = {98, 22, 98, 71, 29, 8};
    vector<int> fat = {20, 81, 84, 23, 77, 40};
    vector<string> dietPlans = {"Fc", "PP", "tF", "", "t", "CtPT", "p", "C", "FPFc", "fpCc", "c", "TF", "Fftp"};
    HealthFood* pObj = new HealthFood();
    clock_t start = clock();
    vector<int> result = pObj->selectMeals(protein, carbs, fat, dietPlans);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 5, 0, 5, 0, 1, 0, 2, 0, 5, 2, 2};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> protein = {94, 71, 83, 33, 67, 77, 7, 54, 41};
    vector<int> carbs = {70, 0, 76, 97, 66, 51, 37, 97, 30};
    vector<int> fat = {90, 52, 89, 78, 5, 59, 30, 90, 83};
    vector<string> dietPlans = {"", "cPP", "fTC", "PttC", "f", "PT", "C", "TFpp", "TCc", "Tf", "P", "Cc", "fcT", "Fc", "T", "tt", "C", "C", "", "Pc", "tfpc", "ftP", "fpTt"};
    HealthFood* pObj = new HealthFood();
    clock_t start = clock();
    vector<int> result = pObj->selectMeals(protein, carbs, fat, dietPlans);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 4, 0, 4, 0, 3, 0, 0, 0, 0, 3, 4, 0, 0, 6, 3, 3, 0, 0, 6, 4, 4};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> protein = {36, 26, 7, 50, 35, 37, 74, 81, 76, 36, 35, 42, 77, 100, 75, 69, 93, 94, 91, 42};
    vector<int> carbs = {32, 23, 84, 44, 6, 87, 62, 32, 98, 69, 73, 44, 53, 59, 65, 18, 7, 80, 64, 53};
    vector<int> fat = {30, 63, 90, 76, 89, 30, 81, 50, 52, 10, 56, 99, 4, 79, 98, 59, 96, 20, 58, 54};
    vector<string> dietPlans = {"", "pCct", "p", "", "FPFF", "FpF", "f", "tcC", "", "Pctp"};
    HealthFood* pObj = new HealthFood();
    clock_t start = clock();
    vector<int> result = pObj->selectMeals(protein, carbs, fat, dietPlans);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 2, 0, 11, 11, 12, 0, 0, 13};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> protein = {71, 32, 36, 4, 25, 81, 81, 25, 22, 30, 25, 32, 7, 83, 75, 88, 50, 54, 85, 11, 46, 95, 12, 10, 30, 23, 3, 27, 29, 96, 100, 21, 27, 92, 71};
    vector<int> carbs = {63, 62, 26, 71, 69, 46, 95, 26, 46, 12, 32, 37, 73, 82, 2, 13, 99, 61, 17, 34, 71, 65, 68, 27, 89, 55, 95, 77, 74, 17, 74, 61, 79, 54, 33};
    vector<int> fat = {4, 10, 1, 89, 63, 80, 82, 11, 33, 82, 67, 13, 82, 94, 77, 65, 6, 6, 1, 31, 18, 71, 41, 37, 45, 77, 83, 57, 73, 55, 92, 29, 95, 2, 29};
    vector<string> dietPlans = {"pFTf", "fcC", "", "cfcP", "fPPC", "P", "tcp", "fCp", "PTt", "cpP", "Fpt", "fcT", "Fc", "", "ct", "pf", "p", "ptC", "FfF", "tPPC", "PCFf", "pFtC", "ctC", "", "p", "cPFc", "", "Fc", "tpc", "", "fCt", "cT", "Pf", "Ppt", "CT", "CtT", "CfP", "cC", "fcF", "F", ""};
    HealthFood* pObj = new HealthFood();
    clock_t start = clock();
    vector<int> result = pObj->selectMeals(protein, carbs, fat, dietPlans);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {26, 18, 0, 14, 18, 30, 2, 2, 30, 14, 32, 18, 32, 0, 14, 26, 26, 26, 32, 2, 30, 26, 14, 0, 26, 14, 0, 32, 2, 0, 2, 14, 30, 30, 16, 16, 16, 14, 18, 32, 0};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> protein = {27, 62, 69, 57, 35};
    vector<int> carbs = {69, 88, 15, 46, 2};
    vector<int> fat = {9, 1, 50, 26, 56};
    vector<string> dietPlans = {"FF", "cCpP", "T", "TpCP", "", "Cc", "FP", "ppT", "tt", "Pf", "fF", "", "CTfp", "ccpp", "Cp", "Fpt", "ctf", "TC", "FP", "F", "cF", "ppf", "tp", "PTT", "P", "", "ffp", "PcC", "Pcf", "p", "cPfF", "ppP", "p", "Ppcf", "CpF"};
    HealthFood* pObj = new HealthFood();
    clock_t start = clock();
    vector<int> result = pObj->selectMeals(protein, carbs, fat, dietPlans);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4, 2, 2, 0, 1, 4, 0, 0, 2, 1, 0, 1, 4, 1, 4, 4, 2, 4, 4, 4, 0, 0, 2, 2, 0, 1, 2, 2, 0, 4, 0, 0, 2, 1};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> protein = {51, 17, 100, 77, 64, 65, 23, 31, 49, 87, 47, 18, 36};
    vector<int> carbs = {2, 91, 35, 68, 90, 5, 84, 66, 90, 51, 45, 20, 38};
    vector<int> fat = {93, 72, 1, 30, 35, 12, 1, 96, 70, 49, 98, 8, 49};
    vector<string> dietPlans = {"ftp", "Ftt", "fc", "Fp", "T", "cPc", "PpC", "c", "PPtT", "pT", "T", "pctp", "", "ccTC", "", "", "", "C", "P", "PtP", "CCTC", "Ppc", "Cpt", "pPct", "", "TTf", "ttC", "T", "f", "F", "FPf", "", "cTFc", "TCT", "TtcP", "t", "c", "fT", "Cc", "Cft", "PF", "pcCt", "TpC", "F", "", "P", "cp", "pf"};
    HealthFood* pObj = new HealthFood();
    clock_t start = clock();
    vector<int> result = pObj->selectMeals(protein, carbs, fat, dietPlans);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 10, 2, 10, 7, 0, 2, 0, 2, 1, 7, 1, 0, 0, 0, 0, 0, 1, 2, 2, 1, 2, 1, 1, 0, 7, 11, 7, 2, 10, 10, 0, 0, 7, 7, 11, 0, 2, 1, 1, 2, 1, 7, 10, 0, 2, 0, 1};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> protein = {41};
    vector<int> carbs = {67};
    vector<int> fat = {11};
    vector<string> dietPlans = {"tFpT", "Fp", "TC", "ttCF", "", "", "fc", "pPCF", "C", "Ptc", "", "fPPp", "CtF", "Cp", "", "", "fFfP", "", "Ppcp", "tFf", "Cf", "fFp", "C", "ctp", "", "", "Fc", "", "", "Ft", "", "Tfp", "t", "CCc", "Ct", "ftPp", "ppT", "fp", "C", "", "", "Pt", "", "", "tP", "fFC", "pccC", "", "PtC"};
    HealthFood* pObj = new HealthFood();
    clock_t start = clock();
    vector<int> result = pObj->selectMeals(protein, carbs, fat, dietPlans);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> protein = {62, 69};
    vector<int> carbs = {52, 3};
    vector<int> fat = {31, 1};
    vector<string> dietPlans = {"CT", "C", "f", "PpT", "CTCp", "tftC", "", "", "f", "tPcf", "tC", "ccc", "FFpf", "", "ct", "T", "fT", "", "f", "pFTt", "TF", "FfPP", "Ftc", "PPFt", "FC", "fT"};
    HealthFood* pObj = new HealthFood();
    clock_t start = clock();
    vector<int> result = pObj->selectMeals(protein, carbs, fat, dietPlans);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 1, 1, 0, 1, 0, 0, 1, 1, 1, 1, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 1, 0, 1};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> protein = {57, 99, 43};
    vector<int> carbs = {62, 68, 67};
    vector<int> fat = {26, 88, 90};
    vector<string> dietPlans = {"ctpt", "TPP", "Cfff", "", "P", "pF", "TCFP", "C", "Ft"};
    HealthFood* pObj = new HealthFood();
    clock_t start = clock();
    vector<int> result = pObj->selectMeals(protein, carbs, fat, dietPlans);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 1, 0, 1, 2, 1, 1, 2};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> protein = {90, 90, 21, 87};
    vector<int> carbs = {80, 62, 26, 81};
    vector<int> fat = {70, 17, 49, 47};
    vector<string> dietPlans = {"", "t", "Cpf", "ptT", "P", "c", "F", "", "TT", "TF", "PCpp", "C", "F", "F", "TCPP", "F", "fP", "Tt", "tFpt", "tFtF", "tTTT", "TC", "C", "F", "", "tTc", "cP", "c", "", "CfTp", "P", "Pcpf"};
    HealthFood* pObj = new HealthFood();
    clock_t start = clock();
    vector<int> result = pObj->selectMeals(protein, carbs, fat, dietPlans);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 3, 2, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 1, 0, 2, 2, 2, 0, 3, 0, 0, 2, 2, 2, 0, 3, 0, 1};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> protein = {27, 100, 51, 29, 39};
    vector<int> carbs = {84, 22, 97, 72, 5};
    vector<int> fat = {27, 44, 45, 27, 30};
    vector<string> dietPlans = {"", "f", "", "Cc", "fCCC", "CtF", "Cf", "", "", "tp", "Fpp", "", "", "", "PP"};
    HealthFood* pObj = new HealthFood();
    clock_t start = clock();
    vector<int> result = pObj->selectMeals(protein, carbs, fat, dietPlans);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 2, 0, 2, 2, 0, 0, 4, 2, 0, 0, 0, 1};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> protein = {30, 17, 10, 64, 96, 54};
    vector<int> carbs = {80, 31, 52, 68, 39, 18};
    vector<int> fat = {19, 2, 98, 38, 18, 84};
    vector<string> dietPlans = {"", "tCt", "C", "", "", "C", "", "fcf", "", "PpC", "p", "Fp", "p"};
    HealthFood* pObj = new HealthFood();
    clock_t start = clock();
    vector<int> result = pObj->selectMeals(protein, carbs, fat, dietPlans);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 0, 0, 0, 0, 0, 1, 0, 4, 2, 2, 2};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> protein = {35, 47, 79, 50, 28, 34, 44};
    vector<int> carbs = {44, 90, 24, 16, 63, 35, 53};
    vector<int> fat = {31, 24, 22, 5, 31, 0, 44};
    vector<string> dietPlans = {"FctF", "CcfF", "f", "", "cFFC", "ftp", "CF", "ppF", "Fpfc", "CFpf", "F", "Ft", "fP", "p", "Pft", "", "Fp", "ftf", "", "PpTp", "", "T", ""};
    HealthFood* pObj = new HealthFood();
    clock_t start = clock();
    vector<int> result = pObj->selectMeals(protein, carbs, fat, dietPlans);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 1, 5, 0, 3, 5, 1, 4, 6, 1, 6, 6, 5, 4, 2, 0, 6, 5, 0, 2, 0, 1, 0};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> protein = {14, 73, 75, 58, 6, 4, 69, 93};
    vector<int> carbs = {41, 69, 65, 65, 57, 68, 25, 11};
    vector<int> fat = {51, 85, 0, 2, 26, 88, 11, 7};
    vector<string> dietPlans = {"tC", "ffCP", "tFFT", "Ffcf", "tPp", "PPTp", "Pp", "C", "FcPc", "pTp", "cPC", "Ctf", "fPFT", "CP", "", "TFpc", "ccTT"};
    HealthFood* pObj = new HealthFood();
    clock_t start = clock();
    vector<int> result = pObj->selectMeals(protein, carbs, fat, dietPlans);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 2, 4, 5, 4, 7, 7, 1, 5, 5, 7, 1, 2, 1, 0, 1, 7};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> protein = {10, 27, 34, 33, 10, 6, 78, 29, 64};
    vector<int> carbs = {3, 91, 95, 48, 71, 2, 54, 73, 1};
    vector<int> fat = {26, 88, 30, 99, 48, 7, 51, 100, 62};
    vector<string> dietPlans = {"", "tttf", "", "Pp", "pC", "", "", "fcFT", "f", "cp", "CTct", "pFft", "c", "fc", "T", "tFtP", "T", "Ffcc", "ccpt", "", "", "Cc", "c", "", "", "", "Ct", "p", "CP", "fFPP", "", "", "PFP", "Pc", "", "PTP", "", "c", "TPcp", "pfFP", "pTcf", "pp", "tpfF", "F", "pTTt", "pP", "CF", "Cp"};
    HealthFood* pObj = new HealthFood();
    clock_t start = clock();
    vector<int> result = pObj->selectMeals(protein, carbs, fat, dietPlans);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 5, 0, 6, 5, 0, 0, 5, 5, 8, 2, 5, 8, 5, 7, 5, 7, 7, 8, 0, 0, 2, 8, 0, 0, 0, 2, 5, 2, 5, 0, 0, 6, 6, 0, 6, 0, 8, 7, 5, 5, 5, 5, 7, 5, 5, 2, 2};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> protein = {34, 37, 19, 76, 72, 22, 96, 72, 22, 66};
    vector<int> carbs = {11, 13, 61, 1, 31, 83, 84, 38, 15, 71};
    vector<int> fat = {34, 10, 59, 45, 1, 78, 79, 35, 33, 23};
    vector<string> dietPlans = {"Pfft", "tp", "PTpp", "Cpp", "", "", "f"};
    HealthFood* pObj = new HealthFood();
    clock_t start = clock();
    vector<int> result = pObj->selectMeals(protein, carbs, fat, dietPlans);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 1, 6, 6, 0, 0, 4};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> protein = {18, 34, 72, 69, 72, 78, 52, 27, 87, 64, 72};
    vector<int> carbs = {8, 36, 58, 18, 53, 41, 51, 6, 78, 15, 78};
    vector<int> fat = {19, 88, 4, 55, 38, 51, 44, 71, 18, 52, 69};
    vector<string> dietPlans = {"FP", "Tc", "ctf", "cC", "FTpf", "cPCt", "P", "pF", "CFtP", "", "CtCF", "f", "", "", "tFC", "fCtc", "CtFf", "tfF", "fPPp", "fptc", "TT", "FTfP", "CTft", "P", "", "", "PT"};
    HealthFood* pObj = new HealthFood();
    clock_t start = clock();
    vector<int> result = pObj->selectMeals(protein, carbs, fat, dietPlans);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 10, 7, 7, 1, 7, 8, 0, 10, 0, 8, 2, 0, 0, 0, 2, 8, 0, 2, 2, 10, 1, 10, 8, 0, 0, 8};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> protein = {73, 4, 28, 27, 68, 40, 22, 72, 32, 54, 92, 40};
    vector<int> carbs = {91, 36, 11, 84, 99, 76, 20, 22, 6, 4, 85, 71};
    vector<int> fat = {29, 47, 5, 85, 69, 36, 24, 92, 8, 40, 45, 12};
    vector<string> dietPlans = {"", "p", "ctFC", "PPf", "", "pf", "pT", "Pff", "fPC"};
    HealthFood* pObj = new HealthFood();
    clock_t start = clock();
    vector<int> result = pObj->selectMeals(protein, carbs, fat, dietPlans);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 9, 10, 0, 1, 1, 10, 2};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> protein = {33, 63, 98, 32, 6, 85, 77, 16, 15, 7, 67, 94, 56};
    vector<int> carbs = {0, 36, 90, 7, 72, 62, 94, 73, 84, 25, 49, 32, 43};
    vector<int> fat = {61, 49, 30, 16, 86, 35, 52, 6, 89, 60, 18, 47, 1};
    vector<string> dietPlans = {"", "", "FPFP", "ptpC", "", "fC", "pF", "", "t", "C", "P", "cTPT", "ppFp", "ppF", "Tp", "FF", "tP", "FfF", "T", "PTFt", "C", "ct", "FttT", "ctTp", "TTCP", "cTcc", "t", "", "cC", "TFF", "tFcF", "t", "FcFc", "FT", "tTFf", "F", "tC", "cCpt", "CCcc", "P", "tfC", "C", "Tf", "C"};
    HealthFood* pObj = new HealthFood();
    clock_t start = clock();
    vector<int> result = pObj->selectMeals(protein, carbs, fat, dietPlans);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 8, 4, 0, 12, 4, 0, 3, 6, 2, 0, 4, 4, 6, 8, 3, 8, 6, 2, 6, 0, 8, 0, 6, 0, 3, 0, 0, 6, 3, 3, 8, 8, 3, 8, 3, 0, 6, 2, 3, 6, 6, 6};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> protein = {50, 47, 37, 73, 85, 80, 99, 62, 27, 40, 97, 28, 59, 30};
    vector<int> carbs = {77, 38, 3, 45, 61, 28, 85, 18, 22, 30, 59, 54, 11, 15};
    vector<int> fat = {71, 17, 100, 79, 29, 98, 14, 19, 16, 46, 68, 18, 76, 31};
    vector<string> dietPlans = {"ftfp", "", "TCp", "Fp", "F", "TF", "", "CT", "TFPP", "TtCp", "FTPT", "T", "pC", "cp", "f", "P", "TPT", "Ptft", "", "tt", "p", "P", "F"};
    HealthFood* pObj = new HealthFood();
    clock_t start = clock();
    vector<int> result = pObj->selectMeals(protein, carbs, fat, dietPlans);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 0, 5, 2, 2, 5, 0, 6, 5, 5, 2, 5, 8, 2, 6, 6, 5, 6, 0, 8, 8, 6, 2};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> protein = {14, 60, 12, 7, 77, 37, 47, 61, 12, 86, 76, 30, 17, 52, 32};
    vector<int> carbs = {11, 37, 62, 6, 61, 2, 61, 41, 90, 38, 35, 19, 23, 14, 59};
    vector<int> fat = {30, 3, 63, 99, 54, 26, 38, 54, 34, 97, 6, 13, 50, 4, 69};
    vector<string> dietPlans = {"", "PT", "T", "f", "pccT", "C", "ccfF", "tP", "T", "TT", "pcF", "f", "", "FfFf", "fCF", "cPTt", "PtPc", "t", "pTfP", "tTff", "t", "pfTp", "Pp", "Ttf", "", "", "P", "", "cPTf", "Ppp", "Pt", "", "", "P", "pCfC", "tCcT", "CpP", "TFCt", "Ppct", "T", "F", "", "P"};
    HealthFood* pObj = new HealthFood();
    clock_t start = clock();
    vector<int> result = pObj->selectMeals(protein, carbs, fat, dietPlans);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 9, 9, 1, 3, 8, 5, 11, 9, 9, 3, 1, 0, 3, 1, 5, 9, 11, 3, 11, 11, 3, 9, 9, 0, 0, 9, 0, 5, 9, 9, 0, 0, 9, 3, 11, 8, 9, 9, 9, 3, 0, 9};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> protein = {14, 85, 13, 17, 86, 51, 33, 81, 18, 71, 26, 92, 48, 30, 31, 7};
    vector<int> carbs = {67, 60, 17, 72, 39, 71, 28, 37, 84, 55, 2, 5, 53, 89, 71, 91};
    vector<int> fat = {28, 83, 80, 46, 35, 19, 40, 11, 16, 42, 49, 48, 66, 20, 13, 27};
    vector<string> dietPlans = {"", "TP", "ttFt", "t", "T", "fttp", "c", "TfP", "tF", "", "", "", "pTt", "c", "F", "", "C", "T", "ttt", "FC", "FFTP", "cT", "fFT", "C", "PP", "FtTt", "CPPP", "cp", "C", "Cfp", "cFtP", "CPpT", "fpct", "T", "f", "FCPT", "Tp", "PC", "FCf", "fp", "TPT", "CTfT", "Pfc", "P", "", "Pc"};
    HealthFood* pObj = new HealthFood();
    clock_t start = clock();
    vector<int> result = pObj->selectMeals(protein, carbs, fat, dietPlans);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 10, 10, 1, 7, 10, 1, 10, 0, 0, 0, 15, 10, 1, 0, 15, 1, 10, 1, 1, 10, 7, 15, 11, 1, 15, 10, 15, 15, 10, 15, 7, 1, 7, 1, 1, 11, 1, 7, 1, 15, 11, 11, 0, 11};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> protein = {50, 20, 10, 1, 30, 74, 51, 74, 36, 63, 60, 10, 24, 98, 44, 66, 40};
    vector<int> carbs = {73, 96, 3, 55, 0, 50, 32, 81, 35, 86, 65, 30, 76, 48, 81, 51, 81};
    vector<int> fat = {58, 13, 69, 37, 47, 35, 67, 62, 36, 88, 57, 17, 61, 37, 97, 73, 27};
    vector<string> dietPlans = {"tPff", "tFCp", "pC", "", "tcCp", "ct", "", "ctcc", "pfCC", "p", "", "cP", "p", "FPpp"};
    HealthFood* pObj = new HealthFood();
    clock_t start = clock();
    vector<int> result = pObj->selectMeals(protein, carbs, fat, dietPlans);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 11, 3, 0, 11, 4, 0, 4, 3, 3, 0, 4, 3, 14};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> protein = {43, 88, 84, 70, 59, 39, 71, 24, 28, 73, 1, 2, 21, 23, 14, 62, 10, 97};
    vector<int> carbs = {83, 18, 0, 34, 76, 75, 79, 55, 33, 19, 62, 84, 3, 24, 8, 83, 94, 88};
    vector<int> fat = {58, 8, 31, 26, 47, 45, 64, 35, 29, 58, 39, 90, 38, 62, 47, 21, 61, 44};
    vector<string> dietPlans = {"cpPP", "", "c", "", "tC", "TTTc", "fFF", "cTC", "", "CfC", "Fp", "p"};
    HealthFood* pObj = new HealthFood();
    clock_t start = clock();
    vector<int> result = pObj->selectMeals(protein, carbs, fat, dietPlans);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 0, 2, 0, 12, 6, 1, 2, 0, 16, 11, 10};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> protein = {88, 41, 39, 44, 43, 19, 48, 4, 46, 3, 50, 52, 23, 35, 0, 89, 17, 93, 92};
    vector<int> carbs = {97, 53, 10, 90, 80, 36, 37, 35, 43, 60, 47, 45, 68, 95, 7, 8, 98, 12, 75};
    vector<int> fat = {30, 2, 15, 47, 97, 51, 18, 12, 61, 36, 81, 45, 72, 64, 90, 41, 14, 76, 98};
    vector<string> dietPlans = {"", "fCP", "FFct", "tp", "PtFT", "Ctf", "Fft", "", "P", "pTT", "f", "C", "FtCt", "", "c", "C", "F", "ttpP", "F", "", "tcT", "t", "P", "CcTT", "F", "CF", "FttF", "tCT", "", "Tc", "tF", "FtFt", "fT", "cFTT", "f", "", "", "p", "T", "", ""};
    HealthFood* pObj = new HealthFood();
    clock_t start = clock();
    vector<int> result = pObj->selectMeals(protein, carbs, fat, dietPlans);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 18, 7, 17, 16, 18, 0, 17, 14, 1, 16, 18, 0, 14, 16, 18, 7, 18, 0, 7, 7, 17, 16, 18, 16, 18, 7, 0, 18, 7, 18, 1, 14, 1, 0, 0, 14, 18, 0, 0};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> protein = {90, 9, 33, 66, 73, 15, 73, 32, 64, 60, 34, 54, 56, 96, 68, 31, 20, 31, 1, 70};
    vector<int> carbs = {46, 26, 37, 67, 99, 84, 22, 6, 2, 55, 60, 18, 86, 62, 30, 65, 28, 95, 37, 55};
    vector<int> fat = {6, 79, 19, 16, 1, 7, 61, 7, 7, 55, 95, 0, 84, 77, 41, 68, 82, 55, 98, 94};
    vector<string> dietPlans = {"Cc", "PcpF", "TpT", "cPP", "FCF", "TpCT", "", "FFfT", "CTTp", "t", "f", "cTpp", "", "F", "T", "cf", "FfCP", "TFF", "Cp", "", "p", "", "fptt", "", "p", "ptC", "fc", "", "PPtT", "c"};
    HealthFood* pObj = new HealthFood();
    clock_t start = clock();
    vector<int> result = pObj->selectMeals(protein, carbs, fat, dietPlans);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 13, 13, 8, 18, 13, 0, 18, 4, 7, 11, 8, 0, 18, 13, 8, 18, 13, 4, 0, 18, 0, 11, 0, 18, 18, 11, 0, 13, 8};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> protein = {1, 9, 5, 58, 45, 12, 41, 13, 5, 71, 51, 66, 80, 29, 21, 97, 32, 15, 46, 0, 81};
    vector<int> carbs = {97, 1, 100, 46, 86, 76, 42, 22, 68, 74, 8, 44, 7, 27, 59, 75, 14, 1, 2, 5, 20};
    vector<int> fat = {44, 71, 37, 13, 47, 27, 59, 63, 79, 90, 63, 51, 60, 87, 22, 94, 23, 10, 11, 66, 5};
    vector<string> dietPlans = {"tt"};
    HealthFood* pObj = new HealthFood();
    clock_t start = clock();
    vector<int> result = pObj->selectMeals(protein, carbs, fat, dietPlans);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {17};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> protein = {9, 87, 38, 21, 30, 6, 20, 30, 40, 53, 63, 98, 6, 80, 42, 24, 15, 0, 42, 63, 47, 29};
    vector<int> carbs = {74, 20, 4, 3, 22, 28, 91, 64, 71, 38, 98, 85, 89, 100, 8, 14, 46, 5, 26, 19, 76, 58};
    vector<int> fat = {18, 26, 60, 67, 52, 48, 95, 70, 74, 18, 84, 55, 29, 8, 72, 72, 25, 83, 81, 91, 86, 5};
    vector<string> dietPlans = {"TFf", "fff", "cTpp", "f", "P", "p", "cTpC", "T", "F", "ttcF", "", "fc", "ppcp", "", "Fp", "P", "", "CF", "pFc", "PP", "fctP", "PTF", "ccT", "", "pc", "fFFt", "cF", "Ttpf", "fp", "TTFC", "FP"};
    HealthFood* pObj = new HealthFood();
    clock_t start = clock();
    vector<int> result = pObj->selectMeals(protein, carbs, fat, dietPlans);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 21, 3, 21, 11, 17, 3, 10, 6, 21, 0, 21, 17, 0, 6, 11, 0, 13, 17, 11, 21, 11, 3, 0, 17, 21, 3, 10, 21, 10, 6};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> protein = {21, 0, 53, 64, 83, 49, 89, 16, 41, 6, 66, 45, 32, 1, 77, 25, 16, 25, 9, 2, 95, 80, 84};
    vector<int> carbs = {91, 78, 15, 57, 46, 67, 31, 65, 66, 49, 0, 80, 23, 29, 92, 80, 16, 28, 57, 37, 40, 38, 92};
    vector<int> fat = {54, 70, 73, 81, 93, 67, 37, 0, 26, 31, 31, 68, 14, 88, 49, 27, 37, 54, 25, 6, 87, 12, 51};
    vector<string> dietPlans = {"", "", "Ppp", "C", "tPC", "Ttct", "", "ttP", "c", "C", "", "", "TF"};
    HealthFood* pObj = new HealthFood();
    clock_t start = clock();
    vector<int> result = pObj->selectMeals(protein, carbs, fat, dietPlans);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 20, 14, 19, 4, 0, 19, 10, 14, 0, 0, 4};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> protein = {58, 29, 74, 6, 23, 73, 10, 94, 40, 15, 56, 5, 92, 20, 39, 40, 61, 92, 55, 57, 96, 27, 48, 63};
    vector<int> carbs = {35, 99, 54, 52, 98, 2, 42, 12, 96, 7, 55, 33, 53, 35, 9, 40, 88, 80, 0, 77, 70, 78, 52, 21};
    vector<int> fat = {88, 1, 81, 79, 11, 51, 71, 29, 8, 93, 15, 16, 80, 84, 99, 78, 99, 20, 77, 56, 90, 9, 73, 9};
    vector<string> dietPlans = {"fF", "PCF", "Cc", "p", "fcT", "tC", "pTf", "TF", "C", "p", "fCfC", "cp", "t", "F", "", "pc", "Pcf", "Tp", "fFtF", "ptTT", "", "Ff", "CfCf", "cf", "fF", "", "fpp", "", "tTp", "c", "ttFp", "pTt", "CFTF", "CC", "", "c", "fPpT", "pfP", "C", "P", "ptCp"};
    HealthFood* pObj = new HealthFood();
    clock_t start = clock();
    vector<int> result = pObj->selectMeals(protein, carbs, fat, dietPlans);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 20, 1, 11, 1, 11, 11, 20, 1, 11, 1, 18, 11, 14, 0, 11, 20, 20, 1, 11, 0, 14, 1, 18, 1, 0, 1, 0, 11, 18, 11, 11, 1, 1, 0, 18, 1, 11, 1, 20, 11};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> protein = {5, 36, 60, 100, 8, 10, 54, 89, 96, 49, 9, 78, 75, 1, 75, 88, 65, 27, 28, 16, 21, 79, 23, 20, 34};
    vector<int> carbs = {42, 13, 8, 58, 48, 55, 74, 70, 84, 57, 99, 63, 18, 60, 100, 63, 54, 9, 34, 98, 23, 47, 47, 85, 13};
    vector<int> fat = {64, 89, 26, 39, 4, 26, 39, 28, 26, 72, 36, 87, 32, 91, 53, 10, 45, 71, 65, 23, 87, 92, 73, 54, 16};
    vector<string> dietPlans = {"f", "Pp", "fF", "", "", "CPt", "tc", "FF", "Tfc", "T", "F", "pT", "", "cf", "Tp", "ctTP", "cF", "fpFf", "FtF", "", "pC", "cFpP", "tPtp", "cTT", "fTtc", "", "FtFf", "c", "CfcF"};
    HealthFood* pObj = new HealthFood();
    clock_t start = clock();
    vector<int> result = pObj->selectMeals(protein, carbs, fat, dietPlans);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 3, 4, 0, 0, 14, 4, 21, 11, 11, 21, 13, 0, 2, 11, 2, 2, 4, 21, 0, 13, 2, 4, 2, 4, 0, 21, 2, 14};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> protein = {45, 42, 31, 98, 59, 16, 54, 43, 50, 34, 7, 53, 9, 65, 77, 3, 66, 38, 54, 58, 60, 9, 90, 79, 47, 0};
    vector<int> carbs = {64, 65, 79, 22, 28, 63, 3, 6, 43, 31, 21, 47, 92, 76, 18, 98, 70, 67, 59, 23, 71, 87, 38, 58, 40, 4};
    vector<int> fat = {98, 22, 94, 7, 97, 18, 3, 29, 89, 27, 35, 2, 16, 80, 92, 55, 47, 48, 24, 80, 48, 36, 56, 41, 8, 82};
    vector<string> dietPlans = {"Tfp", "Pc", "Fp", "FC", "pCc", "TFTc", "t", "T", "p", "F", "c"};
    HealthFood* pObj = new HealthFood();
    clock_t start = clock();
    vector<int> result = pObj->selectMeals(protein, carbs, fat, dietPlans);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3, 0, 0, 25, 0, 6, 0, 25, 0, 6};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> protein = {49, 58, 89, 96, 18, 86, 7, 56, 34, 40, 71, 82, 33, 93, 72, 30, 33, 30, 96, 80, 88, 76, 47, 49, 96, 59, 81};
    vector<int> carbs = {70, 66, 87, 5, 43, 77, 15, 54, 21, 95, 98, 55, 88, 22, 22, 64, 0, 13, 52, 7, 23, 67, 13, 99, 33, 13, 97};
    vector<int> fat = {82, 52, 90, 56, 80, 4, 52, 75, 81, 66, 27, 77, 94, 59, 43, 45, 56, 72, 76, 89, 54, 34, 56, 39, 79, 16, 54};
    vector<string> dietPlans = {"FCPc", "", "T", "", "T", "ct", "C", "p", "c", "c", "PT", "CC", "tPCp", "TCPT", "tp", "tt", "FtPp", "Ctp", "pp", "tfPc", "Tfpt", "tcpC", "cTF", "ppFT", "pF", "tc", "", "fTP", "C", "t", "fpC", "", "Ct", "", "pCpf", "cFTF", "P", "pCct", "Ctpp", "fPFf", "FP", "T", "Tp", "p", "tp", "c", "pc", "ftP", "C"};
    HealthFood* pObj = new HealthFood();
    clock_t start = clock();
    vector<int> result = pObj->selectMeals(protein, carbs, fat, dietPlans);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12, 0, 2, 0, 2, 16, 23, 6, 16, 16, 18, 23, 25, 2, 25, 25, 12, 23, 6, 25, 2, 25, 16, 6, 6, 25, 0, 5, 23, 25, 5, 0, 23, 0, 6, 16, 3, 6, 23, 5, 12, 2, 2, 6, 25, 16, 6, 5, 23};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> protein = {42, 24, 81, 49, 73, 21, 74, 48, 18, 41, 93, 51, 72, 77, 12, 44, 38, 7, 9, 17, 54, 91, 30, 68, 38, 84, 23, 18};
    vector<int> carbs = {65, 9, 1, 69, 28, 90, 33, 18, 63, 52, 86, 46, 97, 98, 69, 79, 29, 24, 41, 44, 13, 5, 41, 70, 76, 19, 66, 44};
    vector<int> fat = {6, 61, 63, 66, 75, 30, 52, 27, 5, 32, 70, 3, 19, 46, 16, 8, 79, 44, 27, 90, 85, 62, 24, 76, 81, 71, 90, 37};
    vector<string> dietPlans = {"", "cCcf", "Pf", "FC", "fPP", "tpf", "C", "tctc"};
    HealthFood* pObj = new HealthFood();
    clock_t start = clock();
    vector<int> result = pObj->selectMeals(protein, carbs, fat, dietPlans);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 10, 26, 11, 8, 13, 8};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> protein = {79, 90, 96, 82, 82, 56, 24, 1, 36, 13, 19, 67, 35, 98, 95, 88, 82, 70, 24, 51, 98, 16, 57, 24, 60, 40, 84, 99, 53};
    vector<int> carbs = {30, 84, 2, 95, 54, 21, 18, 35, 32, 22, 41, 34, 86, 25, 32, 26, 41, 54, 27, 10, 59, 30, 42, 0, 59, 38, 44, 98, 6};
    vector<int> fat = {66, 32, 32, 12, 22, 68, 3, 78, 56, 73, 97, 31, 46, 69, 42, 92, 46, 78, 21, 6, 97, 82, 90, 58, 0, 56, 98, 23, 7};
    vector<string> dietPlans = {"CtT", "", "cPCp", "C", "tFPt", "TCT", "F", "CfF", "CCp", "TF", "Cf", "cc", "tf", "CT", "tPP", "CT", "pft", "PT", "", "PpF", "Ccfc", "tt", "CfT", "", "Ct", "Cc", "TpFt", "C", "", "", "fp", "cc", "", "", "fF", "cct"};
    HealthFood* pObj = new HealthFood();
    clock_t start = clock();
    vector<int> result = pObj->selectMeals(protein, carbs, fat, dietPlans);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {27, 0, 23, 27, 6, 20, 26, 27, 27, 20, 27, 23, 6, 27, 6, 27, 7, 27, 0, 27, 27, 6, 27, 0, 27, 27, 20, 27, 0, 0, 24, 23, 0, 0, 24, 23};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> protein = {30, 79, 73, 31, 2, 59, 32, 50, 38, 66, 86, 48, 93, 72, 11, 79, 89, 21, 93, 96, 28, 75, 70, 65, 55, 60, 60, 81, 44, 68};
    vector<int> carbs = {49, 14, 11, 60, 21, 85, 13, 73, 22, 11, 75, 91, 49, 17, 17, 17, 62, 79, 18, 56, 66, 97, 39, 58, 21, 21, 6, 65, 12, 46};
    vector<int> fat = {3, 58, 36, 36, 34, 44, 15, 78, 80, 47, 87, 4, 36, 9, 9, 66, 98, 22, 25, 76, 5, 30, 62, 33, 70, 94, 56, 75, 20, 8};
    vector<string> dietPlans = {"tCFt", "Fp", "", "pCTF", "cTt", "FP", "", "f", "", "FPf", "CT"};
    HealthFood* pObj = new HealthFood();
    clock_t start = clock();
    vector<int> result = pObj->selectMeals(protein, carbs, fat, dietPlans);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {14, 16, 0, 4, 26, 16, 0, 0, 0, 16, 21};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> protein = {7, 22, 19, 92, 37, 36, 38, 60, 35, 40, 61, 61, 40, 78, 90, 40, 26, 10, 11, 60, 98, 12, 95, 2, 16, 70, 14, 40, 91, 61, 24};
    vector<int> carbs = {25, 85, 0, 58, 1, 0, 48, 45, 27, 52, 89, 78, 66, 60, 18, 99, 11, 21, 56, 99, 4, 24, 68, 87, 87, 39, 73, 37, 40, 80, 12};
    vector<int> fat = {52, 91, 46, 10, 71, 41, 29, 56, 91, 48, 68, 37, 56, 84, 43, 25, 61, 84, 0, 0, 100, 21, 13, 92, 100, 1, 84, 16, 59, 30, 72};
    vector<string> dietPlans = {"tffp", "", "TCfC", "c", "pT", "Cc", "Pf", "", "", "tCTf", "", "tTFf", "cTt", "fPcT", "tCPF", "pF", "", "f", "", "TF", "cc"};
    HealthFood* pObj = new HealthFood();
    clock_t start = clock();
    vector<int> result = pObj->selectMeals(protein, carbs, fat, dietPlans);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {18, 0, 13, 2, 23, 15, 20, 0, 0, 18, 0, 18, 5, 19, 18, 23, 0, 18, 0, 13, 2};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> protein = {53, 65, 64, 38, 12, 96, 12, 97, 26, 100, 44, 16, 3, 71, 57, 37, 94, 7, 82, 99, 30, 54, 42, 48, 32, 24, 51, 82, 18, 50, 77, 26};
    vector<int> carbs = {99, 63, 59, 87, 15, 70, 7, 96, 54, 3, 18, 53, 62, 70, 19, 15, 96, 2, 51, 63, 89, 96, 83, 7, 25, 15, 4, 39, 73, 100, 93, 21};
    vector<int> fat = {53, 94, 61, 72, 87, 38, 26, 56, 59, 39, 17, 31, 83, 97, 27, 71, 61, 19, 83, 41, 3, 86, 43, 58, 62, 53, 58, 86, 40, 57, 0, 78};
    vector<string> dietPlans = {"", "", "tTTt", "Cc", "F", "C", "P", "pF", "P"};
    HealthFood* pObj = new HealthFood();
    clock_t start = clock();
    vector<int> result = pObj->selectMeals(protein, carbs, fat, dietPlans);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 17, 29, 13, 29, 9, 12, 9};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> protein = {78, 83, 63, 97, 11, 82, 39, 45, 62, 44, 27, 9, 28, 36, 4, 92, 28, 52, 73, 47, 63, 96, 60, 18, 97, 1, 24, 19, 1, 36, 20, 29, 55};
    vector<int> carbs = {75, 94, 60, 51, 4, 89, 81, 66, 52, 60, 11, 37, 66, 30, 3, 4, 98, 44, 90, 56, 42, 99, 27, 30, 1, 96, 76, 34, 78, 27, 20, 0, 72};
    vector<int> fat = {35, 62, 42, 30, 39, 95, 81, 19, 31, 45, 36, 31, 6, 88, 1, 78, 86, 45, 26, 67, 34, 74, 99, 77, 50, 40, 59, 80, 81, 28, 88, 28, 90};
    vector<string> dietPlans = {"pP", "CFpt", "cTc", "TFCf"};
    HealthFood* pObj = new HealthFood();
    clock_t start = clock();
    vector<int> result = pObj->selectMeals(protein, carbs, fat, dietPlans);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {25, 21, 31, 5};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> protein = {72, 43, 77, 94, 35, 0, 39, 85, 79, 43, 99, 31, 56, 53, 66, 28, 50, 28, 18, 32, 6, 54, 73, 19, 9, 30, 5, 85, 3, 8, 86, 74, 84, 81};
    vector<int> carbs = {47, 55, 51, 68, 27, 4, 73, 77, 26, 12, 20, 6, 45, 96, 50, 72, 31, 29, 48, 51, 16, 12, 43, 11, 91, 4, 88, 54, 72, 44, 61, 38, 41, 8};
    vector<int> fat = {71, 41, 38, 19, 56, 56, 55, 32, 61, 54, 40, 14, 10, 79, 72, 17, 36, 62, 43, 10, 57, 63, 71, 82, 63, 12, 99, 70, 80, 11, 86, 59, 78, 30};
    vector<string> dietPlans = {"", "P", "cc", "", "F", "TT", "c", "c", "f", "Fp", "ccp", "TCc", "fCP", "", "Ffc", ""};
    HealthFood* pObj = new HealthFood();
    clock_t start = clock();
    vector<int> result = pObj->selectMeals(protein, carbs, fat, dietPlans);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 10, 5, 0, 26, 30, 5, 5, 12, 26, 5, 30, 19, 0, 26, 0};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> protein = {98, 92, 75, 51, 36, 27, 78, 56, 96, 2, 13, 55, 45, 2, 2, 80, 55, 27, 25, 1, 1, 52, 70, 30, 90, 66, 92, 30, 22, 85, 2, 32, 15, 46, 75};
    vector<int> carbs = {90, 100, 56, 65, 46, 8, 94, 61, 30, 69, 62, 84, 11, 52, 43, 69, 54, 65, 97, 93, 71, 56, 46, 76, 94, 97, 31, 44, 36, 28, 70, 82, 49, 48, 2};
    vector<int> fat = {39, 26, 43, 90, 75, 57, 38, 29, 52, 92, 30, 78, 85, 8, 74, 91, 39, 78, 87, 43, 77, 28, 18, 72, 76, 28, 46, 48, 45, 68, 38, 28, 8, 46, 79};
    vector<string> dietPlans = {"", "cPP", "fpP", "CT", "pC", "", "", "", "F", "Cfc", "", "Ffpp", "T", "p", "", "", "tcTC", "F", "", "fF", "f", "t", "TCTC", "", "PFct", "ccFf", "fcP", "TPTP", "tF"};
    HealthFood* pObj = new HealthFood();
    clock_t start = clock();
    vector<int> result = pObj->selectMeals(protein, carbs, fat, dietPlans);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 34, 13, 1, 19, 0, 0, 0, 9, 1, 0, 9, 24, 19, 0, 0, 13, 9, 0, 13, 13, 13, 24, 0, 0, 34, 32, 24, 13};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> protein = {65, 79, 6, 34, 23, 82, 63, 42, 85, 19, 73, 52, 33, 49, 20, 64, 23, 50, 57, 42, 41, 82, 100, 97, 55, 83, 89, 72, 80, 48, 89, 88, 67, 67, 36, 32};
    vector<int> carbs = {94, 10, 88, 7, 17, 89, 34, 26, 83, 2, 31, 0, 16, 64, 93, 30, 20, 76, 27, 68, 58, 50, 44, 72, 58, 6, 66, 54, 21, 75, 99, 77, 42, 97, 30, 66};
    vector<int> fat = {32, 94, 21, 47, 54, 5, 90, 63, 4, 74, 45, 10, 39, 0, 7, 82, 46, 87, 92, 30, 9, 50, 47, 44, 9, 84, 16, 79, 56, 54, 98, 60, 51, 2, 43, 51};
    vector<string> dietPlans = {"", "t", "p", "Ff", "", "FtFt", "F", "Tf", "t", "cTcp", "ccP", "PTC", "ffT"};
    HealthFood* pObj = new HealthFood();
    clock_t start = clock();
    vector<int> result = pObj->selectMeals(protein, carbs, fat, dietPlans);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 11, 2, 30, 0, 30, 30, 30, 11, 11, 11, 22, 13};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> protein = {48, 7, 55, 53, 4, 34, 6, 79, 45, 16, 17, 67, 92, 32, 26, 98, 90, 73, 42, 26, 92, 0, 63, 29, 5, 76, 21, 66, 84, 13, 64, 85, 55, 79, 31, 27, 94};
    vector<int> carbs = {90, 91, 76, 4, 18, 6, 49, 9, 58, 23, 67, 10, 34, 47, 36, 6, 11, 84, 88, 35, 60, 58, 66, 44, 51, 53, 60, 17, 22, 77, 11, 69, 97, 78, 9, 10, 87};
    vector<int> fat = {66, 80, 95, 87, 11, 56, 15, 87, 99, 79, 54, 99, 17, 26, 83, 27, 91, 59, 56, 76, 69, 43, 90, 79, 86, 4, 37, 12, 4, 96, 53, 47, 60, 76, 53, 93, 7};
    vector<string> dietPlans = {"", "FPpc", "", "fCtp", "", "pc", "f", "FpC", "", "F", "Tc", "p", "", "c", "Tt", "tFC", "", "CFc", "fTT", "", "pTt", "cCcp", "T", "TF", "tFC", "cpFf", "Ccct", "t", "c"};
    HealthFood* pObj = new HealthFood();
    clock_t start = clock();
    vector<int> result = pObj->selectMeals(protein, carbs, fat, dietPlans);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 11, 0, 25, 0, 21, 25, 8, 0, 8, 2, 21, 0, 3, 2, 4, 0, 32, 25, 0, 21, 3, 2, 2, 4, 3, 32, 4, 3};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> protein = {56, 20, 59, 86, 64, 97, 76, 63, 31, 93, 61, 73, 94, 47, 80, 48, 60, 30, 53, 98, 33, 80, 47, 96, 66, 62, 90, 31, 25, 100, 46, 60, 80, 61, 100, 97, 42, 91};
    vector<int> carbs = {93, 6, 41, 91, 46, 21, 9, 4, 10, 14, 99, 0, 79, 98, 56, 30, 100, 60, 35, 53, 64, 48, 91, 23, 91, 10, 50, 63, 41, 90, 95, 22, 5, 29, 26, 57, 49, 32};
    vector<int> fat = {92, 9, 8, 45, 45, 64, 4, 4, 36, 28, 20, 36, 88, 94, 88, 80, 44, 14, 28, 39, 99, 59, 4, 46, 55, 40, 25, 41, 76, 87, 21, 23, 25, 84, 30, 77, 43, 80};
    vector<string> dietPlans = {"Pt", "TPc", "P", "", "f", "PtFc", "", "pPCc", "f"};
    HealthFood* pObj = new HealthFood();
    clock_t start = clock();
    vector<int> result = pObj->selectMeals(protein, carbs, fat, dietPlans);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {34, 29, 29, 0, 6, 34, 0, 1, 6};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> protein = {29, 20, 82, 37, 22, 53, 87, 49, 100, 45, 39, 16, 39, 71, 29, 73, 32, 19, 35, 70, 74, 45, 68, 20, 37, 63, 91, 92, 59, 71, 82, 32, 42, 79, 76, 83, 30, 12, 4};
    vector<int> carbs = {88, 58, 32, 62, 55, 43, 18, 37, 29, 20, 2, 46, 20, 87, 76, 87, 39, 35, 31, 46, 10, 63, 53, 28, 67, 21, 4, 23, 97, 8, 93, 56, 72, 91, 64, 40, 55, 73, 77};
    vector<int> fat = {45, 90, 53, 75, 8, 33, 30, 76, 38, 45, 87, 31, 88, 88, 8, 44, 46, 78, 82, 60, 65, 43, 0, 31, 55, 74, 2, 52, 96, 83, 16, 43, 95, 84, 57, 74, 22, 32, 9};
    vector<string> dietPlans = {"", "FtT", "pTfT", "Tp", "CcP"};
    HealthFood* pObj = new HealthFood();
    clock_t start = clock();
    vector<int> result = pObj->selectMeals(protein, carbs, fat, dietPlans);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 28, 38, 28, 28};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> protein = {8, 88, 56, 95, 53, 68, 46, 46, 22, 37, 97, 85, 55, 42, 35, 78, 13, 67, 67, 97, 98, 82, 13, 9, 31, 0, 90, 91, 26, 36, 60, 7, 3, 72, 61, 78, 91, 27, 21, 90};
    vector<int> carbs = {55, 98, 47, 20, 58, 57, 89, 25, 59, 50, 99, 14, 72, 51, 94, 76, 32, 67, 83, 37, 45, 54, 33, 92, 1, 17, 96, 67, 71, 20, 93, 19, 80, 78, 5, 94, 10, 72, 67, 83};
    vector<int> fat = {9, 97, 68, 40, 78, 45, 84, 31, 67, 75, 32, 95, 35, 44, 0, 22, 91, 36, 43, 58, 54, 70, 61, 75, 91, 70, 3, 93, 36, 87, 86, 13, 50, 69, 38, 41, 38, 32, 62, 24};
    vector<string> dietPlans = {"CftP", "ftp", "c", "cP", "tCCt", "P", "", "cP", "", "Fp", "Cpf", "F", "t", "T", "", "TfFC", "T", "", "", "ttP", "", "", "PFtF", "Pf", "tPc", "CF", "tFff", "T", "t", "PCPP", "CPtF", "PT", "", "Ct", "T", "ppF", "Tcpc", "c"};
    HealthFood* pObj = new HealthFood();
    clock_t start = clock();
    vector<int> result = pObj->selectMeals(protein, carbs, fat, dietPlans);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 14, 24, 24, 31, 20, 0, 24, 0, 1, 10, 1, 31, 1, 0, 1, 1, 0, 0, 31, 0, 0, 20, 20, 31, 10, 31, 1, 31, 20, 10, 20, 0, 10, 1, 25, 1, 24};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> protein = {46, 19, 95, 66, 99, 49, 40, 70, 9, 33, 32, 49, 51, 68, 76, 35, 66, 29, 88, 38, 93, 47, 55, 36, 6, 40, 57, 94, 54, 64, 87, 0, 13, 46, 38, 51, 31, 16, 50, 4, 85};
    vector<int> carbs = {40, 51, 80, 54, 6, 42, 25, 80, 37, 38, 43, 31, 12, 16, 72, 23, 22, 41, 98, 1, 96, 8, 17, 69, 84, 73, 65, 33, 70, 48, 52, 1, 26, 13, 5, 42, 99, 14, 19, 36, 76};
    vector<int> fat = {74, 84, 34, 33, 66, 25, 72, 92, 44, 91, 42, 82, 88, 98, 72, 80, 11, 18, 59, 64, 45, 88, 86, 51, 72, 9, 86, 23, 89, 77, 46, 12, 42, 69, 17, 35, 12, 84, 54, 27, 11};
    vector<string> dietPlans = {"p", "ftC", "cpf", "Fft", "FF", "fptp", "t", "cTp"};
    HealthFood* pObj = new HealthFood();
    clock_t start = clock();
    vector<int> result = pObj->selectMeals(protein, carbs, fat, dietPlans);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {31, 25, 31, 13, 13, 25, 31, 19};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> protein = {86, 59, 38, 23, 67, 55, 27, 89, 39, 3, 17, 84, 43, 46, 49, 14, 67, 88, 10, 68, 27, 76, 8, 22, 98, 12, 93, 1, 84, 55, 17, 40, 24, 44, 3, 7, 48, 14, 39, 69, 75, 56};
    vector<int> carbs = {31, 66, 51, 79, 58, 94, 55, 4, 24, 80, 4, 45, 37, 41, 2, 72, 31, 37, 94, 24, 5, 82, 14, 1, 85, 66, 56, 5, 4, 8, 90, 45, 23, 74, 49, 11, 99, 17, 0, 71, 37, 78};
    vector<int> fat = {95, 86, 51, 47, 59, 45, 28, 61, 75, 31, 10, 93, 41, 96, 17, 29, 0, 47, 87, 50, 84, 81, 34, 31, 30, 11, 14, 74, 56, 35, 63, 5, 35, 22, 89, 75, 18, 81, 84, 81, 80, 93};
    vector<string> dietPlans = {"ttp", "C", "", "pC", "t", "", "", "c", "FCF", "C", "cF", "Cc", "cp", "pFC", "CC", "", "CTcc", "TfCC", "", "", "ftT", "ftC", "TpFc", "Tcft", "ffPF", "fpPP", "", "fFP", "PpTc", "PT", "pcft", "p", "ppP", "fC", "", "cc", "ff", "pFC", "cpT"};
    HealthFood* pObj = new HealthFood();
    clock_t start = clock();
    vector<int> result = pObj->selectMeals(protein, carbs, fat, dietPlans);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 36, 0, 27, 10, 0, 0, 38, 13, 36, 38, 36, 38, 27, 36, 0, 36, 21, 0, 0, 16, 16, 21, 21, 16, 16, 0, 16, 24, 24, 27, 27, 27, 16, 0, 38, 16, 27, 38};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> protein = {12, 97, 38, 13, 21, 5, 35, 46, 44, 61, 92, 62, 46, 100, 24, 21, 27, 89, 41, 41, 8, 89, 17, 12, 33, 50, 16, 65, 72, 4, 45, 43, 48, 47, 76, 99, 15, 1, 87, 37, 80, 42, 51};
    vector<int> carbs = {33, 81, 73, 48, 27, 57, 34, 48, 0, 75, 94, 99, 74, 72, 59, 91, 58, 10, 52, 49, 22, 99, 73, 84, 10, 82, 69, 51, 71, 70, 19, 49, 52, 55, 44, 83, 5, 32, 51, 31, 37, 29, 92};
    vector<int> fat = {14, 14, 4, 38, 93, 54, 41, 78, 84, 85, 5, 89, 50, 88, 38, 27, 39, 86, 86, 48, 81, 7, 60, 7, 45, 14, 59, 31, 11, 89, 80, 7, 85, 26, 32, 33, 69, 44, 2, 76, 76, 86, 16};
    vector<string> dietPlans = {"t", "TccP", "P", "TT", "fFPt", "C", "FfC", "TF", "C", "Fcfc", "F", "Cfff", "pp", "c", "Cfpt", "tTC", "", ""};
    HealthFood* pObj = new HealthFood();
    clock_t start = clock();
    vector<int> result = pObj->selectMeals(protein, carbs, fat, dietPlans);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 13, 13, 13, 38, 11, 4, 13, 11, 4, 4, 21, 37, 8, 21, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> protein = {73, 26, 37, 69, 57, 79, 9, 47, 89, 28, 0, 68, 14, 30, 71, 86, 42, 77, 54, 61, 100, 31, 19, 58, 94, 93, 85, 68, 68, 15, 55, 95, 68, 48, 92, 62, 83, 11, 75, 98, 29, 68, 30, 27};
    vector<int> carbs = {98, 61, 2, 60, 52, 23, 24, 56, 67, 61, 47, 60, 2, 32, 88, 64, 17, 25, 75, 62, 56, 58, 12, 59, 70, 61, 49, 44, 33, 87, 49, 99, 79, 30, 47, 62, 22, 4, 71, 41, 97, 83, 97, 60};
    vector<int> fat = {95, 3, 12, 54, 88, 46, 46, 44, 47, 78, 28, 66, 55, 25, 14, 90, 26, 48, 0, 33, 54, 69, 75, 52, 48, 52, 77, 70, 15, 43, 35, 25, 27, 81, 6, 97, 46, 31, 33, 95, 57, 68, 91, 37};
    vector<string> dietPlans = {"FTp", "Pfp", "Pf", "CF", "", "tCCf", "", "ct", "tPpc", "T", "", "", "tCtp", "PC", "Tf", "PTpT", "pF", "pt", "CfP", "pcct", "", "pFt", "", "", "FF", "P", "F", "TfPP", "tpP", "tTPT", "Tctf", "ftff", "pcTt", "cPP", "", "t", "F", "pT", "C", "fTP", "ptp", "", "T", "CP", "F", "F", "cp", "c"};
    HealthFood* pObj = new HealthFood();
    clock_t start = clock();
    vector<int> result = pObj->selectMeals(protein, carbs, fat, dietPlans);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {35, 20, 20, 31, 0, 2, 0, 2, 2, 0, 0, 0, 2, 20, 0, 20, 10, 10, 31, 10, 0, 10, 0, 0, 35, 20, 35, 0, 2, 2, 0, 18, 10, 2, 0, 2, 35, 10, 31, 18, 10, 0, 0, 31, 35, 35, 12, 2};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> protein = {32, 18, 51, 72, 92, 49, 81, 50, 58, 35, 95, 24, 16, 24, 71, 35, 43, 96, 29, 67, 20, 19, 99, 50, 82, 30, 4, 47, 64, 21, 30, 100, 36, 0, 89, 18, 32, 0, 88, 68, 41, 22, 71, 27, 67};
    vector<int> carbs = {82, 64, 9, 38, 7, 60, 71, 48, 12, 24, 27, 11, 7, 76, 28, 28, 21, 34, 97, 26, 14, 78, 62, 32, 39, 67, 56, 81, 6, 91, 81, 77, 78, 32, 9, 47, 39, 10, 46, 24, 95, 89, 20, 27, 29};
    vector<int> fat = {10, 69, 17, 13, 50, 98, 100, 66, 51, 79, 75, 48, 57, 13, 95, 88, 66, 27, 54, 78, 68, 97, 89, 36, 31, 79, 53, 80, 12, 83, 81, 52, 3, 78, 59, 1, 12, 9, 56, 56, 53, 89, 73, 12, 42};
    vector<string> dietPlans = {"tTpT"};
    HealthFood* pObj = new HealthFood();
    clock_t start = clock();
    vector<int> result = pObj->selectMeals(protein, carbs, fat, dietPlans);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {37};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> protein = {94, 2, 76, 40, 85, 75, 21, 5, 66, 83, 28, 80, 11, 95, 35, 73, 51, 93, 7, 38, 20, 3, 49, 24, 40, 22, 26, 77, 37, 63, 27, 44, 44, 72, 65, 44, 24, 46, 5, 29, 46, 13, 1, 69, 69, 31};
    vector<int> carbs = {24, 1, 73, 14, 1, 5, 14, 81, 94, 12, 76, 91, 55, 47, 46, 22, 17, 3, 5, 32, 3, 24, 75, 53, 58, 53, 98, 21, 15, 69, 56, 91, 10, 83, 69, 30, 99, 83, 42, 53, 12, 32, 51, 58, 70, 80};
    vector<int> fat = {6, 2, 18, 65, 66, 73, 82, 14, 84, 43, 10, 80, 11, 48, 5, 8, 77, 44, 31, 61, 27, 4, 75, 35, 26, 91, 72, 97, 62, 92, 52, 7, 50, 70, 62, 9, 68, 19, 31, 95, 60, 90, 24, 10, 31, 51};
    vector<string> dietPlans = {"", "pC", "", "pccf", "cP", "cTct", "Tpt", "CC", "", "PFTP", "", "pcc", "", "pttF", "cccC", "tfTF", "PTcT", "c", "f", "FP", "t", "Pfc", "", "cFT"};
    HealthFood* pObj = new HealthFood();
    clock_t start = clock();
    vector<int> result = pObj->selectMeals(protein, carbs, fat, dietPlans);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 42, 0, 42, 4, 4, 11, 36, 0, 13, 0, 42, 0, 42, 1, 1, 13, 1, 1, 27, 1, 13, 0, 4};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> protein = {58, 4, 8, 44, 79, 65, 5, 53, 78, 11, 30, 30, 87, 25, 57, 22, 32, 80, 2, 81, 30, 42, 11, 26, 4, 69, 46, 27, 75, 90, 39, 56, 78, 65, 12, 49, 38, 27, 80, 92, 5, 90, 9, 13, 72, 15, 98};
    vector<int> carbs = {88, 13, 91, 15, 92, 69, 74, 60, 4, 33, 63, 29, 35, 76, 33, 69, 32, 3, 100, 72, 79, 61, 39, 88, 42, 87, 71, 47, 26, 83, 19, 33, 89, 98, 5, 79, 55, 98, 71, 69, 14, 20, 49, 42, 46, 77, 3};
    vector<int> fat = {64, 56, 44, 7, 54, 86, 18, 1, 69, 60, 3, 12, 27, 21, 47, 93, 33, 20, 45, 46, 20, 79, 45, 18, 78, 79, 46, 13, 36, 86, 56, 73, 67, 58, 80, 39, 76, 87, 4, 68, 65, 96, 82, 90, 37, 34, 17};
    vector<string> dietPlans = {"TTfc", "p", "", "ttFT", "", "PCPf", "", "t", "FP", "CCF", "", "FCC", "", "TpCc", "ftF", "cpt", "t", "", "f", "TC", "p", "", "cFC", "TcFc", "ct", "Pf", "P", "pTF", "PtT", "TCP", "cCCt", "", "CfC", "", "fp", "TpC", "fftT", "p", "", "Tp", "Tf", "Pct", "T", "TPCF", "c", "PCTC", "Tf", "", "T"};
    HealthFood* pObj = new HealthFood();
    clock_t start = clock();
    vector<int> result = pObj->selectMeals(protein, carbs, fat, dietPlans);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {29, 18, 0, 3, 0, 46, 0, 3, 41, 18, 0, 41, 0, 29, 7, 17, 3, 0, 7, 29, 18, 0, 17, 29, 17, 46, 46, 18, 46, 29, 17, 0, 18, 0, 7, 29, 7, 18, 0, 29, 29, 46, 29, 29, 17, 46, 29, 0, 29};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> protein = {68, 50, 7, 46, 30, 98, 78, 77, 22, 12, 3, 40, 81, 48, 2, 35, 75, 72, 69, 44, 67, 24, 34, 17, 66, 14, 65, 79, 51, 16, 27, 89, 78, 95, 50, 32, 65, 73, 46, 76, 6, 77, 65, 6, 24, 70, 33, 55};
    vector<int> carbs = {85, 21, 100, 10, 23, 74, 82, 95, 52, 39, 96, 57, 49, 89, 77, 26, 43, 4, 3, 39, 2, 34, 15, 98, 22, 94, 25, 56, 20, 52, 65, 100, 2, 91, 80, 42, 32, 58, 51, 52, 84, 22, 53, 82, 28, 94, 50, 2};
    vector<int> fat = {5, 63, 63, 28, 44, 4, 9, 20, 76, 23, 61, 20, 42, 8, 99, 92, 46, 76, 82, 38, 9, 30, 21, 49, 71, 76, 74, 36, 18, 31, 67, 44, 28, 47, 4, 3, 1, 11, 81, 94, 15, 63, 43, 95, 48, 77, 92, 62};
    vector<string> dietPlans = {"CCpT", "fcT", "c", "", "pFf", "", "pfT", "p", "PTPC", "ft", "FcP", "FCFC", "fCcf", "CC", "ttTf", "", "Cf", "TT", "Tc", "", "", "PPTp", "FCCf", "TCPc", "t", "Tftt", "C", "T", "", "FTF", "", "TpPf", "pFT", "pP", "", "p"};
    HealthFood* pObj = new HealthFood();
    clock_t start = clock();
    vector<int> result = pObj->selectMeals(protein, carbs, fat, dietPlans);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 36, 20, 0, 14, 0, 14, 14, 5, 36, 14, 14, 36, 2, 35, 0, 31, 45, 45, 0, 0, 5, 14, 45, 35, 45, 2, 45, 0, 14, 0, 45, 14, 14, 0, 14};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> protein = {54, 24, 97, 51, 91, 42, 91, 44, 8, 47, 31, 30, 40, 53, 73, 54, 96, 76, 65, 49, 93, 92, 74, 1, 51, 1, 87, 57, 25, 66, 60, 39, 49, 74, 47, 96, 11, 82, 15, 23, 28, 77, 93, 90, 24, 72, 67, 89, 51};
    vector<int> carbs = {83, 41, 40, 50, 61, 67, 16, 63, 66, 76, 28, 2, 95, 13, 65, 0, 72, 40, 94, 20, 57, 59, 30, 89, 59, 88, 9, 22, 95, 70, 10, 88, 25, 29, 31, 74, 77, 47, 22, 1, 81, 1, 91, 44, 3, 29, 70, 39, 83};
    vector<int> fat = {57, 59, 10, 71, 42, 88, 49, 18, 5, 98, 92, 64, 90, 27, 41, 78, 40, 15, 18, 50, 86, 59, 98, 78, 71, 77, 73, 90, 89, 44, 22, 19, 61, 90, 11, 70, 83, 77, 81, 59, 78, 21, 77, 84, 83, 17, 21, 70, 39};
    vector<string> dietPlans = {"", "pPcf", "CT", "", "pFtF", "", "FC", "pC", "PtF", "Fc", "F", "fcPT", "t", "p", "C", "tc", "ptpt", "", ""};
    HealthFood* pObj = new HealthFood();
    clock_t start = clock();
    vector<int> result = pObj->selectMeals(protein, carbs, fat, dietPlans);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 25, 12, 0, 23, 0, 9, 23, 2, 22, 9, 8, 8, 23, 12, 8, 25, 0, 0};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> protein = {5, 21, 31, 51, 52, 89, 43, 57, 99, 90, 19, 45, 80, 81, 77, 27, 2, 17, 100, 99, 74, 61, 86, 88, 1, 9, 17, 99, 44, 31, 93, 23, 50, 29, 89, 47, 71, 63, 28, 52, 89, 24, 56, 52, 36, 21, 37, 67, 70, 8};
    vector<int> carbs = {16, 30, 66, 13, 97, 90, 1, 29, 81, 48, 52, 56, 51, 73, 27, 62, 9, 24, 5, 28, 54, 41, 62, 99, 29, 83, 82, 42, 74, 78, 11, 94, 96, 38, 79, 74, 22, 57, 66, 67, 50, 44, 93, 57, 82, 50, 46, 99, 47, 13};
    vector<int> fat = {24, 19, 85, 39, 80, 13, 2, 34, 67, 84, 45, 9, 76, 34, 0, 73, 11, 74, 16, 33, 63, 0, 80, 82, 48, 23, 71, 48, 58, 24, 72, 51, 40, 21, 0, 46, 57, 84, 97, 39, 78, 52, 35, 5, 62, 44, 56, 39, 16, 40};
    vector<string> dietPlans = {"pTtt", "tf", "", "", "", "cTPp", ""};
    HealthFood* pObj = new HealthFood();
    clock_t start = clock();
    vector<int> result = pObj->selectMeals(protein, carbs, fat, dietPlans);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {24, 16, 0, 0, 0, 6, 0};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> protein = {18, 86, 76, 0, 34, 30, 95, 12, 21};
    vector<int> carbs = {26, 56, 3, 45, 88, 0, 10, 27, 53};
    vector<int> fat = {93, 96, 13, 95, 98, 18, 59, 49, 86};
    vector<string> dietPlans = {"f", "Pt", "PT", "fT", "Cp", "C", "t", "", "cCp", "ttp", "PCFt", "P", "pCt", "cP", "Pc"};
    HealthFood* pObj = new HealthFood();
    clock_t start = clock();
    vector<int> result = pObj->selectMeals(protein, carbs, fat, dietPlans);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 6, 6, 2, 4, 4, 5, 0, 5, 5, 6, 6, 3, 5, 6};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> protein = {20, 15, 30, 30};
    vector<int> carbs = {18, 30, 12, 15};
    vector<int> fat = {10, 10, 10, 10};
    vector<string> dietPlans = {"PC", "CP"};
    HealthFood* pObj = new HealthFood();
    clock_t start = clock();
    vector<int> result = pObj->selectMeals(protein, carbs, fat, dietPlans);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 1};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=272072&rd=5865&pm=3118
********************************************************************************
#include <iostream> 
#include <string> 
#include <vector> 
#include <algorithm> 
#include <functional> 
#include <numeric> 
#include <cstdio> 
#include <cstdlib> 
#include <cmath> 
#include <queue> 
using namespace std; 
typedef vector<int> VI;  typedef vector<vector<int> > VVI; 
typedef vector<string> VS;  typedef vector<vector<string> > VVS; 
typedef signed long long i64;  typedef unsigned long long u64; 
 
VI a, b, c, d; 
VI p; 
string s; 
 
bool pcmp(const int &x, const int &y) { 
  for( int i = 0; i < s.size(); i++ ) { 
    if( s[i] == 'P' && a[x] != a[y] ) return a[x] > a[y]; 
    if( s[i] == 'p' && a[x] != a[y] ) return a[x] < a[y]; 
    if( s[i] == 'C' && b[x] != b[y] ) return b[x] > b[y]; 
    if( s[i] == 'c' && b[x] != b[y] ) return b[x] < b[y]; 
    if( s[i] == 'F' && c[x] != c[y] ) return c[x] > c[y]; 
    if( s[i] == 'f' && c[x] != c[y] ) return c[x] < c[y]; 
    if( s[i] == 'T' && d[x] != d[y] ) return d[x] > d[y]; 
    if( s[i] == 't' && d[x] != d[y] ) return d[x] < d[y]; 
  } 
  return x < y; 
} 
 
class HealthFood { 
public: 
vector <int> selectMeals(vector <int> A, vector <int> B, vector <int> C, vector <string> e) { 
  a = A; b = B; c = C; 
  int i, j, k, x, y, z, n; 
  vector <int> ret; 
 
  for( i = 0; i < a.size(); i++ ) 
    d.push_back(a[i]*5 + b[i]*5 + c[i]*9); 
  for( i = 0; i < e.size(); i++ ) { 
    s = e[i]; 
    p.clear(); 
    for( j = 0; j < a.size(); j++ ) p.push_back(j); 
    sort(p.begin(), p.end(), pcmp); 
    ret.push_back(p[0]); 
  } 
  return ret; 
} 
}; 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/