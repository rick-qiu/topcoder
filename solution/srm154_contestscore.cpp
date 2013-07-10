/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1760
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

class ContestScore {
public:
    vector<string> sortResults(vector<string> data);
};

vector<string> ContestScore::sortResults(vector<string> data) {
    vector<string> ret;
    return ret;
}


int test0() {
    vector<string> data = {"A 90.7 92.9 87.4", "B 90.5 96.6 88.0", "C 92.2 91.0 95.3"};
    ContestScore* pObj = new ContestScore();
    clock_t start = clock();
    vector<string> result = pObj->sortResults(data);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"C 5 278.5", "B 6 275.1", "A 7 271.0"};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> data = {"STANFORD 85.3 90.1 82.6 84.6 96.6 94.5 87.3 90.3", "MIT 95.5 83.9 80.4 85.5 98.7 98.3 96.7 82.7", "PRINCETON 99.2 79.1 87.6 85.1 93.6 96.4 86.0 90.6", "HARVARD 83.6 92.0 85.5 94.3 97.5 91.5 92.5 83.0", "YALE 99.5 92.6 86.2 82.0 96.4 92.6 84.5 78.6", "COLUMBIA 97.2 87.6 81.7 93.7 88.0 86.3 95.9 89.6", "BROWN 92.2 95.8 92.1 81.5 89.5 87.0 95.5 86.4", "PENN 96.3 80.7 81.2 91.6 85.8 92.2 83.9 87.8", "CORNELL 88.0 83.7 85.0 83.8 99.8 92.1 91.0 88.9"};
    ContestScore* pObj = new ContestScore();
    clock_t start = clock();
    vector<string> result = pObj->sortResults(data);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"PRINCETON 34 717.6", "MIT 36 721.7", "HARVARD 38 719.9", "COLUMBIA 39 720.0", "STANFORD 39 711.3", "YALE 40 712.4", "BROWN 41 720.0", "CORNELL 42 712.3", "PENN 51 699.5"};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> data = {};
    ContestScore* pObj = new ContestScore();
    clock_t start = clock();
    vector<string> result = pObj->sortResults(data);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> data = {"ABCDE 99.9 99.9 99.9 99.9 99.9 99.9 99.9 99.9 99.9"};
    ContestScore* pObj = new ContestScore();
    clock_t start = clock();
    vector<string> result = pObj->sortResults(data);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ABCDE 9 899.1"};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> data = {"CALTECH 84.1 97.1 75.7 86.5 76.1 80.4 96.6 82.8", "STANFORD 75.5 83.6 90.0 78.7 79.7 77.5 75.6 85.5", "PRINCETON 86.6 81.4 97.8 87.4 78.2 89.7 84.1 89.1", "MIT 94.7 88.1 75.0 93.9 95.8 91.0 88.2 85.9", "DUKE 88.0 87.1 75.2 97.8 94.2 97.5 97.3 82.6", "CORNELL 75.6 84.2 79.9 98.2 91.8 99.9 88.7 77.5", "ARKANSAS 96.5 98.0 94.8 91.4 78.6 84.2 90.5 90.6", "BERKELEY 98.8 83.9 92.8 98.8 85.9 90.2 93.7 99.9", "ILLINOIS 98.5 98.7 91.0 81.0 76.1 82.7 93.3 83.8", "UCLA 90.2 93.3 94.6 92.0 82.7 80.5 79.0 89.8", "MINNESOTA 82.7 91.3 97.6 85.5 80.2 85.6 82.5 75.9", "WASHINGTON 99.3 81.5 94.8 99.7 90.5 81.3 80.8 96.8", "BYU 84.9 92.2 89.3 93.1 83.0 85.9 94.4 83.0", "NEBRASKA 80.8 95.4 76.7 87.5 99.8 92.7 97.6 98.4", "CARNEGIEME 95.6 87.1 93.4 76.6 76.2 77.7 84.1 93.1", "TEXASAANDM 90.0 95.3 77.0 94.9 85.5 82.0 90.7 93.5", "DARTMOUTH 97.5 96.9 86.2 89.8 91.7 90.4 87.8 90.6", "HARVARD 97.5 93.1 85.7 96.7 80.1 84.1 98.8 82.6", "UCF 87.5 88.1 83.8 86.7 87.5 77.6 92.0 97.6", "UVA 76.5 89.6 88.9 82.8 92.7 88.6 90.9 99.0", "MICHIGAN 84.4 94.8 80.5 78.4 82.0 98.1 87.3 82.3", "MARYLAND 80.5 98.5 93.6 91.6 83.7 79.1 88.0 93.8", "RUTGERS 99.1 78.7 85.8 88.9 99.5 85.1 89.5 97.6", "WPI 90.7 84.8 79.4 93.5 97.8 91.2 95.4 83.6", "TEXAS 92.8 78.9 86.0 86.6 87.0 84.1 94.8 78.0", "UTAH 91.3 86.9 75.1 87.4 88.7 80.5 79.5 84.1", "GEORGIATEC 84.5 99.7 81.7 75.7 98.7 86.6 99.3 96.1", "VIRGINIATE 85.2 81.0 92.3 76.4 86.2 96.5 97.3 96.2", "UMR 88.4 80.3 82.7 84.4 84.3 98.9 94.4 83.4", "NYU 92.6 76.6 78.8 90.6 94.0 90.4 97.8 92.6", "MICHIGANST 89.7 75.0 78.6 93.1 94.4 79.9 87.3 98.6", "UNT 75.3 76.6 96.5 76.1 96.3 98.5 97.1 91.4", "IOWASTATE 90.7 83.3 81.7 90.6 95.3 79.3 78.8 92.0", "PURDUE 94.0 78.3 86.1 90.2 78.8 91.7 87.6 94.0", "UCSD 84.7 96.4 86.5 85.6 84.7 77.2 90.5 94.4", "USC 95.2 92.2 81.4 75.4 93.1 86.2 83.6 88.1", "RIT 98.1 81.3 81.5 87.5 82.6 79.8 84.4 82.0", "UCSB 84.8 75.1 93.5 85.0 85.3 94.1 88.3 95.5", "WISCONSIN 85.5 81.9 95.6 84.8 94.4 98.5 95.5 95.1", "NORTHEASTE 90.8 77.5 95.1 99.5 77.3 99.6 94.3 83.9", "FLORIDA 77.6 90.9 86.5 84.8 89.3 91.9 81.0 82.9", "STONYBROOK 77.6 80.4 97.5 85.3 81.6 77.8 85.8 77.7", "EWU 95.1 94.9 76.2 75.9 83.5 84.6 87.0 79.4", "UCR 87.3 86.6 91.0 93.6 98.4 82.7 92.7 93.2", "OHIOSTATE 86.4 94.5 78.3 83.6 85.0 85.2 83.2 94.9", "UCONN 97.0 75.1 75.2 80.2 84.8 90.5 77.7 92.1", "PENNSTATE 84.6 86.1 89.4 93.6 92.1 79.5 83.1 78.2", "RPI 94.0 97.5 82.4 98.9 92.3 98.3 98.4 93.3", "UCIRVINE 94.4 94.1 92.6 84.0 78.9 91.1 94.0 93.9", "FSU 97.0 97.0 93.4 81.7 76.4 89.6 79.2 97.7"};
    ContestScore* pObj = new ContestScore();
    clock_t start = clock();
    vector<string> result = pObj->sortResults(data);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"RPI 99 755.1", "BERKELEY 116 744.0", "NEBRASKA 141 728.9", "WISCONSIN 142 731.3", "DARTMOUTH 152 730.9", "WASHINGTON 153 724.7", "RUTGERS 157 724.2", "GEORGIATEC 160 722.3", "UCR 162 725.5", "ARKANSAS 162 724.6", "WPI 169 716.4", "UCIRVINE 171 723.0", "NORTHEASTE 171 718.0", "DUKE 172 719.7", "HARVARD 174 718.6", "MIT 178 712.6", "NYU 179 713.4", "VIRGINIATE 183 711.1", "FSU 187 712.0", "TEXASAANDM 189 708.9", "UVA 190 709.0", "UNT 190 707.8", "MARYLAND 196 708.8", "BYU 198 705.8", "ILLINOIS 200 705.1", "UCSB 203 701.6", "UCF 205 700.8", "PURDUE 208 700.7", "UCLA 212 702.1", "MICHIGANST 215 696.6", "CORNELL 215 695.8", "UCSD 216 700.0", "UMR 219 696.8", "USC 223 695.2", "PRINCETON 226 694.3", "TEXAS 229 688.2", "IOWASTATE 231 691.7", "OHIOSTATE 235 691.1", "FLORIDA 237 684.9", "PENNSTATE 243 686.6", "CARNEGIEME 246 683.8", "MICHIGAN 253 687.8", "MINNESOTA 253 681.3", "UTAH 258 673.5", "RIT 259 677.2", "CALTECH 260 679.3", "EWU 260 676.6", "UCONN 263 672.6", "STONYBROOK 287 663.7", "STANFORD 316 646.1"};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> data = {"CROATIA 91.3 81.3 82.4 89.2 90.1 94.3 81.9 86.2", "HUNGARY 82.7 86.2 89.0 88.9 86.3 87.6 87.0 79.0", "SWEDEN 96.8 83.7 80.1 79.5 97.0 91.8 83.9 87.0", "CHINA 96.2 82.8 76.0 82.3 86.6 75.6 98.6 76.1", "NORWAY 90.4 96.0 83.8 89.0 99.6 79.3 77.2 96.5", "POLAND 87.7 84.0 96.2 99.1 86.7 80.6 76.0 77.0", "UKRAINE 90.5 82.2 98.8 99.8 98.5 77.3 94.5 99.7", "GERMANY 99.5 95.3 75.6 78.9 91.6 94.9 86.2 80.4", "FRANCE 95.1 97.7 83.2 88.9 75.8 80.9 89.4 78.0", "AUSTRALIA 90.7 84.0 90.2 75.9 94.4 96.8 91.7 82.8", "DENMARK 88.9 79.4 76.3 75.3 81.8 97.1 84.1 83.6", "SINGAPORE 94.9 87.4 78.6 90.1 81.4 80.1 85.1 83.5", "NETHERLAND 91.9 93.8 77.5 93.6 98.6 77.3 85.0 80.9", "RUSSIANFED 75.8 88.2 77.2 76.0 88.2 81.0 93.5 97.1", "NEWZEALAND 75.9 98.8 83.3 83.4 78.5 87.0 93.9 93.7", "IRELAND 82.9 92.6 83.5 93.0 99.0 92.8 87.2 98.3", "MEXICO 76.2 88.9 89.8 88.8 81.5 79.1 90.2 88.4", "VENEZUELA 78.3 79.5 99.9 77.0 93.1 89.8 81.1 91.8", "IRAN 85.4 89.1 75.6 89.0 78.0 78.8 90.4 85.8", "BULGARIA 95.6 99.0 84.2 92.8 94.3 81.1 95.1 80.0", "ROMANIA 78.9 77.2 97.4 82.1 83.4 90.1 99.5 90.0", "CANADA 88.6 87.9 89.4 97.5 87.8 83.4 75.8 83.7", "BRAZIL 80.8 79.7 77.2 99.1 96.1 82.9 88.3 88.7", "UNITEDKING 85.3 96.9 82.8 83.7 93.5 96.5 76.9 96.4", "UNITEDSTAT 89.3 81.4 87.3 99.6 95.7 79.0 77.6 84.1", "SPAIN 93.8 87.8 98.9 92.2 85.2 84.9 92.3 91.4", "MALAYSIA 81.7 96.5 77.4 78.7 76.8 82.6 98.9 90.7", "INDIA 96.2 91.6 96.7 85.9 94.9 89.4 75.3 91.2", "PORTUGAL 77.6 75.7 82.3 75.8 83.3 85.8 96.5 97.3", "COLOMBIA 75.5 83.2 96.0 76.5 88.3 75.7 95.9 93.3"};
    ContestScore* pObj = new ContestScore();
    clock_t start = clock();
    vector<string> result = pObj->sortResults(data);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"IRELAND 77 729.3", "UKRAINE 78 741.3", "BULGARIA 87 722.1", "SPAIN 89 726.5", "INDIA 94 721.2", "NORWAY 100 711.8", "UNITEDKING 106 712.0", "AUSTRALIA 110 706.5", "SWEDEN 115 699.8", "NEWZEALAND 119 694.5", "GERMANY 120 702.4", "NETHERLAND 120 698.6", "ROMANIA 122 698.6", "CROATIA 124 696.7", "CANADA 126 694.1", "UNITEDSTAT 128 694.0", "BRAZIL 128 692.8", "VENEZUELA 132 690.5", "FRANCE 132 689.0", "MALAYSIA 135 683.3", "HUNGARY 138 686.7", "POLAND 140 687.3", "COLOMBIA 141 684.4", "MEXICO 141 682.9", "RUSSIANFED 142 677.0", "SINGAPORE 144 681.1", "PORTUGAL 148 674.3", "IRAN 154 672.1", "CHINA 155 674.2", "DENMARK 167 666.5"};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> data = {"FFFF 99.9 88.8 77.7 66.6 55.5 44.4 33.3 22.2 11.1", "IIII 88.8 77.7 66.6 55.5 44.4 33.3 22.2 11.1 00.0", "BBBB 77.7 66.6 55.5 44.4 33.3 22.2 11.1 00.0 99.9", "DDDD 66.6 55.5 44.4 33.3 22.2 11.1 00.0 99.9 88.8", "JJJJ 55.5 44.4 33.3 22.2 11.1 00.0 99.9 88.8 77.7", "AAAA 44.4 33.3 22.2 11.1 00.0 99.9 88.8 77.7 66.6", "GGGG 33.3 22.2 11.1 00.0 99.9 88.8 77.7 66.6 55.5", "HHHH 22.2 11.1 00.0 99.9 88.8 77.7 66.6 55.5 44.4", "CCCC 11.1 00.0 99.9 88.8 77.7 66.6 55.5 44.4 33.3", "EEEE 00.0 99.9 88.8 77.7 66.6 55.5 44.4 33.3 22.2"};
    ContestScore* pObj = new ContestScore();
    clock_t start = clock();
    vector<string> result = pObj->sortResults(data);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"FFFF 45 499.5", "EEEE 46 488.4", "CCCC 47 477.3", "HHHH 48 466.2", "GGGG 49 455.1", "AAAA 50 444.0", "JJJJ 51 432.9", "DDDD 52 421.8", "BBBB 53 410.7", "IIII 54 399.6"};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> data = {"AAA 90.0 80.0 70.0 60.0 50.0 40.0", "BBB 80.0 70.0 60.0 50.0 40.0 90.0", "CCC 70.0 60.0 50.0 40.0 90.0 80.0", "DDD 60.0 50.0 40.0 90.0 80.0 70.0", "EEE 50.0 40.0 90.0 80.0 70.0 60.0", "FFF 40.0 90.0 80.0 70.0 60.0 50.0"};
    ContestScore* pObj = new ContestScore();
    clock_t start = clock();
    vector<string> result = pObj->sortResults(data);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AAA 21 390.0", "BBB 21 390.0", "CCC 21 390.0", "DDD 21 390.0", "EEE 21 390.0", "FFF 21 390.0"};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> data = {"AAA 90.0 80.0 70.0 60.0 50.0 40.0", "BBB 90.0 80.0 70.0 60.0 50.0 40.0", "CCC 90.0 80.0 70.0 60.0 50.0 40.0", "DDD 90.0 80.0 70.0 60.0 50.0 40.0", "EEE 90.0 80.0 70.0 60.0 50.0 40.0", "FFF 90.0 80.0 70.0 60.0 50.0 40.0"};
    ContestScore* pObj = new ContestScore();
    clock_t start = clock();
    vector<string> result = pObj->sortResults(data);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AAA 6 390.0", "BBB 6 390.0", "CCC 6 390.0", "DDD 6 390.0", "EEE 6 390.0", "FFF 6 390.0"};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> data = {"FFF 90.0 80.0 70.0 60.0 50.0 40.0", "EEE 80.0 70.0 60.0 50.0 40.0 90.0", "DDD 70.0 60.0 50.0 40.0 90.0 80.0", "CCC 60.0 50.0 40.0 90.0 80.0 70.0", "BBB 50.0 40.0 90.0 80.0 70.0 60.0", "AAA 40.0 90.0 80.0 70.0 60.0 50.0"};
    ContestScore* pObj = new ContestScore();
    clock_t start = clock();
    vector<string> result = pObj->sortResults(data);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AAA 21 390.0", "BBB 21 390.0", "CCC 21 390.0", "DDD 21 390.0", "EEE 21 390.0", "FFF 21 390.0"};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> data = {"AA 90.0 80.0 70.0 60.0 50.0 40.0", "BBB 80.0 70.0 60.0 50.0 40.0 90.0", "EEE 70.0 60.0 50.0 40.0 90.0 80.0", "AAA 60.0 50.0 40.0 90.0 80.0 70.0", "DDD 50.0 40.0 90.0 80.0 70.0 60.0", "CCC 40.0 90.0 80.0 70.0 60.0 50.0"};
    ContestScore* pObj = new ContestScore();
    clock_t start = clock();
    vector<string> result = pObj->sortResults(data);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AA 21 390.0", "AAA 21 390.0", "BBB 21 390.0", "CCC 21 390.0", "DDD 21 390.0", "EEE 21 390.0"};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> data = {"EV 84.3 96.9 81.3 76.0 85.7 85.8 91.7 79.8", "NO 81.3 76.5 83.0 82.0 95.5 95.5 75.6 91.2", "DQ 96.8 98.7 87.0 79.1 80.7 78.0 87.9 91.2", "SW 87.8 98.3 91.0 96.9 98.9 85.2 80.2 77.0", "LG 87.6 91.1 98.4 96.8 78.8 97.2 84.4 98.3", "HW 75.5 78.2 75.2 83.4 95.1 85.3 96.9 78.6", "UF 84.6 87.6 95.9 83.1 96.4 84.0 94.1 76.8", "DY 84.2 81.6 96.5 88.6 85.3 80.6 92.4 80.0", "VH 90.6 77.5 89.9 97.2 94.5 76.6 76.5 84.8", "GB 96.5 98.9 91.5 76.1 93.2 86.4 79.2 77.8", "XQ 90.7 97.0 82.0 81.2 82.8 88.1 96.6 92.4", "IN 98.4 91.2 96.1 85.4 78.1 80.5 80.3 95.3", "BH 76.3 85.2 76.2 75.6 80.1 92.5 76.3 83.7", "AZ 94.5 81.8 83.9 83.2 81.0 89.0 82.0 93.9", "VT 88.7 93.2 89.8 87.8 77.8 82.0 99.0 79.3", "CR 91.4 98.8 82.1 81.4 75.4 79.7 93.9 93.4", "XK 95.1 98.6 90.4 81.1 80.3 94.4 97.0 80.3", "MG 83.0 77.0 82.8 80.3 95.5 87.0 83.1 98.8", "OH 85.8 75.8 95.1 90.1 76.3 90.3 83.2 88.6", "PN 88.2 98.5 84.5 89.1 91.9 98.0 97.7 80.6", "BP 89.2 93.3 82.2 97.9 80.5 97.9 81.3 97.6", "SE 88.5 99.1 95.9 97.8 76.3 89.6 76.5 86.4", "QR 76.9 83.4 75.3 90.2 93.8 86.6 92.1 95.9", "BE 84.5 80.9 76.6 84.6 96.3 97.3 89.0 81.7", "YD 79.8 87.9 81.0 82.0 95.1 89.7 92.2 97.3", "ZG 90.6 76.2 88.0 77.2 97.0 98.6 89.3 97.2", "YT 75.0 76.8 81.0 94.7 87.9 94.6 88.1 85.1", "HI 86.3 99.5 81.3 85.5 98.3 95.9 84.4 98.0", "AW 99.0 75.5 98.6 76.3 76.7 98.3 86.0 93.5", "NU 81.1 92.5 83.7 98.9 81.7 75.7 76.2 80.7", "ZN 95.2 88.4 95.2 92.5 97.6 89.2 81.1 91.7", "KC 83.4 88.9 93.0 87.6 87.8 93.1 95.2 99.5", "EX 96.3 99.2 83.2 80.9 81.0 87.1 90.3 99.5", "XC 92.4 84.2 87.3 94.2 89.1 90.1 88.9 98.6", "AA 76.8 95.4 99.8 84.4 75.3 95.9 96.7 81.0", "FJ 81.4 98.8 79.1 93.3 99.0 78.4 94.2 81.9", "WL 96.3 94.2 98.9 81.0 76.6 99.9 79.6 75.7", "EB 89.8 92.0 81.8 87.0 99.2 90.6 97.9 99.7", "DI 82.5 89.8 77.4 97.1 90.3 82.5 98.7 81.3", "ZX 87.8 86.4 89.5 91.8 85.5 79.6 86.4 82.6", "MF 85.9 87.8 85.6 91.0 89.9 75.4 82.8 94.8", "SD 91.5 96.7 77.1 94.6 82.0 87.1 82.3 87.4", "PG 87.6 82.7 84.1 76.8 93.8 83.3 80.9 78.9", "EF 97.4 93.0 95.5 78.3 76.4 95.1 89.1 86.9", "MX 79.1 88.1 84.9 87.4 94.0 89.9 94.8 89.7", "WP 90.3 85.5 82.3 88.0 90.4 88.4 96.2 89.1", "JV 76.4 88.3 90.7 90.2 87.1 95.7 87.5 94.8", "OO 76.7 92.9 86.3 91.1 97.9 89.5 78.0 85.0", "BM 92.0 81.4 78.9 81.6 85.3 83.5 99.0 95.7", "MH 98.5 88.0 93.8 79.2 91.5 87.1 86.1 76.1"};
    ContestScore* pObj = new ContestScore();
    clock_t start = clock();
    vector<string> result = pObj->sortResults(data);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"EB 127 738.0", "HI 145 729.2", "LG 146 732.6", "ZN 146 730.9", "PN 146 728.5", "KC 151 728.5", "XC 152 724.8", "BP 163 719.9", "EX 165 717.5", "ZG 171 714.1", "XK 172 717.2", "SE 179 710.1", "EF 182 711.7", "SW 184 715.3", "JV 184 710.7", "XQ 188 710.8", "WP 189 710.2", "MX 191 707.9", "AA 192 705.3", "FJ 193 706.1", "AW 195 703.9", "IN 197 705.3", "WL 202 702.2", "YD 205 705.0", "SD 205 698.7", "OO 206 697.4", "VT 208 697.6", "DQ 209 699.4", "UF 210 702.5", "MH 211 700.3", "DI 213 699.6", "GB 213 699.6", "BM 214 697.4", "CR 218 696.1", "VH 222 687.6", "QR 223 694.2", "MF 223 693.2", "BE 223 690.9", "AZ 223 689.3", "ZX 226 689.6", "DY 229 689.2", "OH 232 685.2", "MG 235 687.5", "YT 237 683.2", "NO 244 680.6", "EV 257 681.5", "NU 262 670.5", "HW 271 668.2", "PG 278 668.1", "BH 317 645.9"};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> data = {"YGAAMUIPEO 80.0 77.0 88.0 81.0 79.0 75.0 86.0 99.0", "KKOGNBMDSA 77.0 82.0 81.0 80.0 76.0 95.0 79.0 82.0", "RJIXYEZDLS 77.0 90.0 91.0 77.0 88.0 80.0 87.0 96.0", "MORHOTFLTM 90.0 79.0 83.0 92.0 83.0 75.0 78.0 98.0", "TBJFTUTOPU 78.0 91.0 97.0 92.0 93.0 90.0 86.0 83.0", "WCIROTOTYU 94.0 89.0 88.0 89.0 81.0 87.0 90.0 89.0", "DCLUYMLIZR 93.0 91.0 84.0 76.0 77.0 88.0 79.0 87.0", "UPHULPWNRA 75.0 78.0 75.0 86.0 81.0 88.0 77.0 88.0", "WLOXFZTVJR 75.0 88.0 88.0 82.0 99.0 95.0 78.0 75.0", "GMDZMBCJFH 85.0 76.0 75.0 87.0 84.0 91.0 95.0 90.0", "AGSJZQVHJY 77.0 86.0 93.0 95.0 96.0 82.0 98.0 94.0", "SHGAOZGCQX 84.0 86.0 96.0 85.0 79.0 75.0 93.0 97.0", "ELTQJSPXWA 85.0 99.0 90.0 81.0 80.0 82.0 78.0 98.0", "GOCWOFAKKN 79.0 80.0 86.0 83.0 94.0 91.0 93.0 76.0", "MLRILHNKQX 83.0 98.0 78.0 94.0 98.0 93.0 94.0 82.0", "JYNWLNUKTG 96.0 93.0 78.0 96.0 86.0 82.0 96.0 97.0", "DQBTOTUPSL 97.0 91.0 90.0 91.0 95.0 77.0 97.0 86.0", "QXNLDTBGLF 95.0 99.0 94.0 90.0 94.0 93.0 77.0 94.0", "SXKNIEFWJV 88.0 85.0 91.0 83.0 93.0 79.0 79.0 77.0", "EGVPNZEJGL 75.0 76.0 81.0 96.0 86.0 80.0 92.0 81.0"};
    ContestScore* pObj = new ContestScore();
    clock_t start = clock();
    vector<string> result = pObj->sortResults(data);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"QXNLDTBGLF 49 736.0", "JYNWLNUKTG 52 724.0", "AGSJZQVHJY 55 721.0", "DQBTOTUPSL 56 724.0", "MLRILHNKQX 60 720.0", "TBJFTUTOPU 64 710.0", "WCIROTOTYU 74 707.0", "ELTQJSPXWA 77 693.0", "SHGAOZGCQX 80 695.0", "RJIXYEZDLS 86 686.0", "GMDZMBCJFH 86 683.0", "GOCWOFAKKN 88 682.0", "WLOXFZTVJR 90 680.0", "MORHOTFLTM 90 678.0", "SXKNIEFWJV 92 675.0", "DCLUYMLIZR 95 675.0", "EGVPNZEJGL 102 667.0", "YGAAMUIPEO 102 665.0", "KKOGNBMDSA 111 652.0", "UPHULPWNRA 117 648.0"};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> data = {"ZPG 91.5 95.6 97.2 86.8 95.4", "THH 94.1 97.4 85.2 99.5 92.1", "UTD 93.2 97.8 92.0 90.3 93.3", "XWE 88.1 99.8 99.5 90.2 99.6", "UMF 93.3 89.8 99.7 92.4 87.6", "CRJ 96.7 98.1 88.7 85.6 92.5", "ITH 98.5 98.6 96.7 98.4 92.1", "NHT 94.7 93.6 93.6 86.2 91.4", "REW 89.7 93.9 97.2 93.5 99.5", "CLT 90.4 90.0 88.4 87.5 97.5", "LDJ 88.1 94.6 93.0 89.2 87.2", "FCJ 87.7 98.1 86.2 92.4 90.9", "ZXU 91.8 97.9 89.1 97.7 97.8", "EQR 87.7 97.4 98.1 87.0 87.2", "QGP 92.1 91.0 92.1 85.4 97.6", "RDA 90.7 98.9 97.0 98.4 95.4", "YUY 99.1 90.0 94.8 86.0 94.0", "DPZ 91.8 85.5 85.1 97.0 99.5", "IAH 98.2 87.5 92.8 86.8 89.8", "EYU 93.6 86.8 94.1 91.2 96.2", "VBQ 94.0 88.3 88.2 99.9 85.4", "NJY 90.7 99.5 92.7 97.1 97.9", "IBR 91.9 98.6 91.1 98.9 88.7", "TWS 91.6 87.0 88.7 86.1 97.7", "EKA 87.8 99.2 93.8 98.8 93.6", "ZYB 96.1 86.2 89.6 89.9 96.1"};
    ContestScore* pObj = new ContestScore();
    clock_t start = clock();
    vector<string> result = pObj->sortResults(data);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ITH 36 484.3", "XWE 41 477.2", "RDA 44 480.4", "NJY 46 477.9", "REW 52 473.8", "ZXU 54 474.3", "EKA 55 473.2", "IBR 60 469.2", "THH 62 468.3", "YUY 64 463.9", "EYU 64 461.9", "ZPG 65 466.5", "UMF 65 462.8", "UTD 66 466.6", "CRJ 72 461.6", "NHT 74 459.5", "ZYB 74 457.9", "DPZ 77 458.9", "QGP 77 458.2", "VBQ 79 455.8", "IAH 79 455.1", "EQR 82 457.4", "CLT 86 453.8", "FCJ 87 455.3", "TWS 88 451.1", "LDJ 89 452.1"};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> data = {"AAA 85.7 98.1 86.4 46.9 01.8 88.2 04.6 54.5", "AAAAAA 37.3 15.5 96.1 67.1 75.8 42.4 32.7 20.7", "AAAAAAA 71.4 18.4 09.8 39.3 54.2 57.5 73.4 63.6", "AAAAA 31.7 30.0 39.0 68.5 42.1 88.2 54.6 41.0", "AA 76.5 98.1 15.3 88.7 01.8 54.7 94.1 54.5", "AAAAAAAA 35.3 33.1 86.4 18.5 65.8 47.3 00.7 84.4", "AAAAAAAAAA 65.4 19.4 22.2 46.9 39.6 37.4 63.5 54.2", "AAAA 71.2 80.0 50.2 72.5 70.8 31.1 02.3 17.0", "A 72.5 38.9 12.0 98.5 85.1 94.6 95.0 98.2", "AAAAAAAAA 31.1 45.8 24.4 68.4 23.1 12.0 04.6 94.9"};
    ContestScore* pObj = new ContestScore();
    clock_t start = clock();
    vector<string> result = pObj->sortResults(data);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A 22 594.8", "AA 34 483.7", "AAA 34 466.2", "AAAA 46 395.1", "AAAAA 46 395.1", "AAAAAA 48 387.6", "AAAAAAA 48 387.6", "AAAAAAAA 49 371.5", "AAAAAAAAA 52 304.3", "AAAAAAAAAA 54 348.6"};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> data = {"A 25.5 70.2 51.2 98.2 69.6 40.2 12.5 87.2 12.6", "B 16.4 70.1 49.3 76.5 16.5 42.4 06.4 40.6 20.5", "C 43.0 07.8 64.8 71.0 38.6 09.4 55.6 18.5 72.7", "D 54.9 38.2 31.9 37.6 37.7 30.7 00.8 47.4 30.4", "E 07.6 94.3 87.3 00.6 23.4 87.1 50.3 22.3 09.2", "F 62.2 04.1 93.5 41.3 93.5 65.9 05.8 30.0 64.3", "G 17.2 35.6 76.0 87.5 51.8 80.1 46.9 58.4 53.7", "H 59.3 02.2 47.8 04.4 24.3 70.4 50.6 96.5 01.3", "I 68.7 54.8 94.3 11.0 13.7 76.3 05.3 63.6 34.2", "J 84.6 30.4 26.0 17.7 40.8 62.1 39.9 72.5 28.0", "K 01.4 51.8 35.0 97.6 00.5 76.6 73.8 88.9 87.3", "L 52.2 52.5 97.7 92.4 92.1 82.4 31.0 98.5 98.6", "M 18.5 43.7 80.2 49.1 10.4 52.6 80.0 45.3 77.1", "N 46.1 09.0 64.3 52.4 76.5 99.8 36.0 17.2 11.7", "O 48.4 73.3 85.2 03.6 49.1 08.9 77.1 52.9 75.6", "P 98.0 94.0 51.5 82.1 12.6 98.7 20.6 28.5 55.8", "Q 43.5 34.4 55.8 51.2 19.4 42.8 24.7 08.9 62.7", "R 17.5 14.8 77.4 12.0 99.1 12.2 76.7 61.1 51.9", "S 47.2 40.1 92.5 91.2 32.6 53.6 67.0 16.9 84.0", "T 19.1 06.0 42.0 63.2 32.5 87.7 43.3 21.0 32.6", "U 40.1 41.2 54.0 50.4 78.7 22.1 70.1 56.4 01.7", "V 06.0 80.2 14.6 61.2 88.2 55.3 49.5 67.7 94.5", "W 34.6 26.4 46.6 78.2 56.3 96.3 31.1 66.0 34.7", "X 23.1 88.7 62.3 37.0 96.0 23.6 72.4 15.8 42.4", "Y 47.0 40.5 70.5 56.7 89.6 81.2 83.5 60.7 33.5", "Z 17.9 74.6 98.8 45.8 10.7 09.8 79.9 90.2 78.5"};
    ContestScore* pObj = new ContestScore();
    clock_t start = clock();
    vector<string> result = pObj->sortResults(data);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"L 53 697.4", "Y 88 563.2", "S 101 525.1", "P 102 541.8", "Z 102 506.2", "V 108 517.2", "O 109 474.1", "K 110 512.9", "G 111 507.2", "W 117 470.2", "F 117 460.6", "A 119 467.2", "M 120 456.9", "I 120 421.9", "X 123 461.3", "R 125 422.7", "N 131 413.0", "U 133 414.7", "J 135 402.0", "C 136 381.4", "E 137 382.1", "H 143 356.8", "T 149 347.4", "Q 152 343.4", "B 158 338.7", "D 160 309.6"};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> data = {"MIU 00.2 29.5 56.9 09.1 34.6 42.1 52.1 55.5 42.9", "KRZ 69.8 92.7 47.5 39.6 62.2 26.4 34.9 49.6 16.9", "FSU 80.9 89.1 55.0 20.9 87.4 21.0 77.6 83.6 65.4", "XYS 76.8 75.8 02.5 15.6 05.5 48.8 77.5 57.9 13.4", "DNQ 50.0 47.5 28.8 91.5 71.2 48.2 37.1 82.8 96.4", "PHT 79.7 83.7 57.7 58.8 26.1 50.9 93.8 14.3 13.1", "JJG 48.5 28.0 14.9 81.8 64.6 71.6 90.2 91.6 23.1", "BUK 05.1 79.1 80.7 90.9 76.3 33.6 24.6 44.0 26.5", "TOB 62.2 91.1 01.3 81.3 90.1 44.5 08.1 62.5 86.4", "TVG 97.0 18.1 51.5 81.6 40.6 54.2 24.0 42.4 11.0", "LAY 37.1 51.2 96.3 46.4 02.4 88.0 12.4 36.8 80.1", "WDA 41.5 88.6 07.4 53.3 95.5 54.3 75.8 10.4 10.6", "XNA 17.7 85.5 55.5 10.8 41.4 08.8 55.5 38.5 00.6", "UFB 06.6 94.2 51.9 03.2 07.5 49.6 45.3 18.2 90.4", "RNV 69.5 49.9 86.1 88.6 28.3 75.3 39.0 71.0 10.1", "JTU 45.9 99.0 08.6 18.4 70.3 39.0 85.9 82.2 85.4", "NEF 96.8 17.8 37.8 01.6 60.8 15.7 13.2 11.6 52.1", "GRB 35.3 46.0 41.0 21.3 08.5 81.1 53.4 86.8 61.2", "QFF 59.0 93.8 97.0 19.3 61.3 29.5 36.8 96.6 93.9", "RPR 98.2 97.5 09.2 22.3 59.4 91.3 66.1 67.8 27.1", "NWS 69.4 01.4 53.5 95.9 20.8 81.1 39.9 55.7 39.4", "UNG 29.6 80.9 47.2 17.7 31.9 32.3 55.2 62.8 35.9", "TNI 67.2 48.4 34.3 56.2 21.4 34.8 61.3 98.6 91.3", "QZH 19.6 53.6 18.1 43.9 77.0 30.4 17.6 68.6 47.7", "ELY 98.1 73.6 46.4 51.7 68.6 63.7 24.6 00.4 65.1", "CLQ 84.9 21.4 87.1 32.2 20.2 96.5 81.1 41.3 80.0", "ROH 16.1 08.5 59.2 62.7 06.7 25.6 95.7 09.0 57.0", "OYU 12.5 52.5 09.4 45.8 15.5 19.2 78.8 60.9 66.9", "LER 55.3 20.6 02.7 67.3 50.0 21.0 60.0 66.1 63.9", "PYB 67.8 02.1 84.3 50.2 85.3 97.4 16.5 12.3 48.6", "HDS 62.8 72.0 82.6 17.6 68.2 99.1 50.7 23.2 68.0", "KNC 38.8 15.2 35.4 98.3 54.1 93.2 31.4 23.8 41.6", "DOP 39.7 30.4 75.9 14.0 61.4 03.0 28.1 90.4 77.6", "FSG 27.1 22.3 69.8 82.4 88.5 40.0 45.8 54.1 21.8", "CUC 28.1 50.3 89.4 89.6 29.6 93.7 08.2 83.8 95.9", "BZP 17.5 24.6 72.7 10.6 94.5 64.8 56.8 96.4 78.1", "CDD 39.6 83.1 63.5 34.8 16.2 62.6 77.2 78.9 15.7", "FZI 26.7 84.1 11.6 76.2 58.8 76.2 65.9 03.9 16.4", "YTJ 71.3 42.0 73.3 32.1 67.9 67.8 95.5 05.0 07.7", "KHA 46.0 71.4 90.7 24.2 42.9 58.8 57.3 18.1 18.0", "IYR 78.8 98.1 37.1 22.7 46.9 63.8 69.7 20.7 53.7", "ZYK 61.2 42.0 57.8 71.2 46.8 64.1 62.2 34.2 39.8", "YGA 43.5 79.7 95.4 94.5 10.3 96.9 32.2 78.8 01.0", "WBW 28.1 77.1 66.6 06.2 77.2 39.1 44.3 61.3 73.6", "RRE 37.0 74.9 80.5 62.3 82.3 07.4 11.0 78.1 27.7", "RMC 19.0 36.6 24.9 92.1 30.5 83.2 26.4 25.4 58.1", "KJX 70.6 75.5 37.1 48.4 61.6 31.9 65.8 09.3 65.1", "FZY 66.4 45.9 91.8 35.7 73.8 37.2 53.7 35.7 63.4", "ISP 28.2 74.9 64.2 57.8 46.3 41.0 66.5 49.2 38.7", "NIZ 22.9 69.4 88.0 05.9 09.7 43.8 62.7 46.6 81.6"};
    ContestScore* pObj = new ContestScore();
    clock_t start = clock();
    vector<string> result = pObj->sortResults(data);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"FSU 158 580.9", "QFF 167 587.2", "CUC 178 568.6", "CLQ 179 544.7", "RPR 179 538.9", "JTU 181 534.7", "DNQ 182 553.5", "HDS 189 544.2", "JJG 192 514.3", "YGA 193 532.3", "TOB 194 527.5", "IYR 199 491.5", "BZP 201 516.0", "RNV 204 517.8", "TNI 204 513.5", "FZY 209 503.6", "PHT 211 478.1", "CDD 218 471.6", "ELY 219 492.2", "ZYK 219 479.3", "PYB 219 464.5", "YTJ 221 462.6", "WBW 224 473.5", "ISP 226 466.8", "KJX 226 465.3", "NWS 229 457.1", "WDA 230 437.4", "RRE 234 461.2", "LAY 234 450.7", "FSG 235 451.8", "BUK 236 460.8", "KRZ 238 439.6", "KHA 239 427.4", "GRB 245 434.6", "NIZ 248 430.6", "FZI 248 419.8", "DOP 250 420.5", "KNC 251 431.8", "LER 255 406.9", "TVG 261 420.4", "RMC 266 396.2", "UNG 267 393.5", "XYS 267 373.8", "QZH 271 376.5", "UFB 276 366.9", "OYU 276 361.5", "ROH 293 340.5", "MIU 301 322.9", "XNA 307 314.3", "NEF 318 307.4"};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> data = {"ANH 19.7 54.7 32.8 62.0 92.0 10.4 80.5 83.9 22.6", "ZKV 21.0 28.7 91.1 99.3 98.8 11.8 52.1 02.4 14.8", "MYA 94.9 26.8 97.1 27.1 68.1 40.3 45.7 58.9 29.6", "WHM 19.0 01.7 02.4 24.1 52.0 68.2 13.7 88.5 80.5", "YFA 04.3 06.6 97.8 61.3 96.7 14.6 36.9 34.9 82.2", "FWH 20.3 53.1 22.0 28.1 78.9 59.4 33.0 26.6 36.9", "NOV 46.0 93.3 15.5 10.6 37.6 44.5 87.0 01.8 75.5", "KWR 79.7 98.0 29.8 01.8 86.7 40.2 99.9 21.1 08.8", "BIS 84.1 73.0 08.1 80.2 88.0 52.1 93.2 15.3 48.4", "IHC 46.4 63.0 85.0 93.0 43.8 61.0 92.5 33.1 77.9", "BVM 36.2 04.8 22.3 23.9 29.4 26.5 25.0 79.3 08.1", "LNQ 86.8 26.2 28.6 82.2 94.3 36.1 10.9 10.0 42.8", "VCZ 02.9 06.6 59.6 37.9 76.5 19.4 22.6 13.8 10.1", "JXB 49.9 62.7 27.6 00.3 18.1 91.3 33.5 17.1 00.1", "PMO 80.2 96.4 60.1 51.3 04.3 23.4 58.0 00.9 32.9", "UPT 75.4 14.0 52.1 87.4 38.0 72.4 37.4 39.4 43.6", "OLP 90.8 51.4 88.7 18.6 52.6 51.8 16.7 62.9 26.2", "XWN 42.6 37.7 75.6 66.6 53.8 11.1 22.8 10.0 05.6", "SYJ 02.1 67.8 37.6 13.2 80.6 84.7 26.1 07.4 28.9", "AMH 94.9 00.9 16.6 77.1 17.2 98.6 80.4 02.3 64.1", "PKM 44.0 56.3 49.9 08.6 40.6 69.6 28.6 80.8 18.4", "PVA 39.4 36.3 83.4 75.3 69.5 25.6 89.6 67.8 69.6", "CML 87.2 52.1 81.4 28.9 76.9 28.6 18.6 76.3 62.4", "GUS 63.7 08.2 18.3 52.3 70.0 64.0 25.1 03.7 61.0", "OJQ 31.7 04.5 45.5 93.8 50.8 58.2 72.8 03.3 89.4", "UVT 64.5 47.9 11.6 73.9 58.1 53.9 72.2 73.7 23.6", "ODD 81.6 35.5 49.6 06.9 23.7 38.2 35.7 75.2 47.5", "CWC 16.3 91.1 45.0 35.8 47.1 23.9 66.6 55.1 79.1", "UHT 84.3 24.4 50.9 73.6 58.6 82.9 90.7 76.2 15.1", "OKK 90.0 44.6 89.7 98.2 75.0 33.2 24.5 12.1 33.6", "ANK 26.1 30.5 10.5 89.3 36.9 32.4 86.9 38.1 41.6", "QKV 52.7 65.9 17.9 87.0 40.6 56.0 94.7 07.5 33.8", "VDE 22.1 10.6 02.5 10.5 14.7 01.3 01.9 93.8 49.3", "ZON 13.7 24.8 17.0 88.2 52.9 32.0 84.1 04.7 00.6", "YVQ 77.9 41.6 24.5 43.5 70.7 63.1 64.8 06.2 76.2", "JWW 19.7 36.8 90.5 65.8 14.8 10.4 28.0 28.8 47.4", "ZWZ 96.6 61.4 62.5 18.0 11.4 22.6 87.4 09.5 86.4", "SLP 16.7 04.8 40.0 14.0 37.1 91.6 51.3 23.4 91.2", "NGT 49.5 31.9 38.2 59.8 55.7 94.1 52.2 06.6 65.9", "VCX 87.9 42.0 56.0 73.2 79.7 50.1 67.5 09.1 67.6", "OEJ 57.8 43.2 78.8 78.2 95.3 62.5 00.2 51.3 77.0", "JHR 63.6 47.9 94.9 72.9 13.7 60.9 30.0 57.3 06.0", "NQY 28.1 85.0 94.5 03.9 07.2 75.4 69.6 86.4 17.0", "IQC 42.3 70.0 71.6 41.1 31.8 88.6 27.5 97.1 51.8", "ZZQ 21.2 78.4 77.5 52.7 67.0 77.1 50.0 01.7 18.8", "KXN 27.6 54.6 93.4 78.8 67.5 66.3 71.5 93.8 74.6", "VQF 51.1 38.5 27.1 64.1 60.0 19.6 68.9 38.2 37.9", "VOT 53.8 67.6 39.6 47.2 83.5 86.4 55.4 68.2 14.1", "SHO 90.1 08.0 82.1 48.8 96.3 47.0 02.5 40.5 91.9", "MRN 03.7 23.8 41.2 68.0 67.9 03.8 05.0 79.2 40.6"};
    ContestScore* pObj = new ContestScore();
    clock_t start = clock();
    vector<string> result = pObj->sortResults(data);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"KXN 132 628.1", "IHC 141 595.7", "BIS 163 542.4", "OEJ 170 544.3", "UHT 176 556.7", "PVA 176 556.5", "VCX 177 533.1", "VOT 185 515.8", "IQC 188 521.8", "SHO 189 507.2", "OKK 192 500.9", "CML 194 512.4", "MYA 201 488.5", "UPT 206 459.7", "UVT 210 479.4", "QKV 210 456.1", "NQY 211 467.1", "ZWZ 211 455.8", "KWR 212 466.0", "YVQ 214 468.5", "ANH 220 458.6", "NGT 220 453.9", "YFA 221 435.3", "OLP 222 459.7", "OJQ 223 450.0", "JHR 225 447.2", "CWC 226 460.0", "AMH 229 452.1", "ZZQ 229 444.4", "LNQ 232 417.9", "ZKV 238 420.0", "PKM 239 396.8", "VQF 242 405.4", "NOV 251 411.8", "ODD 252 393.9", "ANK 253 392.3", "PMO 255 407.5", "FWH 255 358.3", "SLP 258 370.1", "GUS 260 366.3", "SYJ 262 348.4", "JWW 275 342.2", "WHM 278 350.1", "JXB 282 300.6", "MRN 286 333.2", "XWN 290 325.8", "ZON 297 318.0", "VCZ 322 249.4", "BVM 327 255.5", "VDE 339 206.7"};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> data = {"RVQ 46.6 76.9 05.2 88.4 19.4 15.8 16.5 99.7 16.1", "ELR 67.3 34.2 26.7 64.7 27.7 79.4 72.2 22.1 13.7", "SMY 94.7 59.4 71.0 67.5 42.4 39.5 96.8 10.0 51.5", "AZF 55.0 20.9 89.3 95.2 61.4 06.3 85.1 69.3 66.4", "LCK 77.7 92.7 80.6 11.3 49.5 82.1 40.9 76.0 14.6", "FTA 96.6 65.0 56.2 37.4 73.3 44.7 70.7 69.5 80.9", "MIN 59.5 36.3 31.9 55.8 14.4 78.0 47.0 46.9 94.2", "PFS 06.1 79.9 04.1 19.8 03.4 60.4 66.1 60.7 70.4", "NXL 53.1 92.2 85.6 16.7 18.0 54.2 90.9 38.9 08.1", "CVW 97.7 26.2 64.7 26.3 09.2 25.8 56.9 49.9 30.7", "NSZ 18.8 92.4 19.8 81.6 33.6 58.3 43.9 59.9 44.1", "GRL 53.7 34.0 75.9 75.2 68.6 46.4 72.9 89.0 95.4", "GRE 04.9 77.3 76.0 86.7 12.7 98.5 57.9 45.8 45.4", "GTR 67.0 75.9 24.8 45.4 16.8 17.6 62.3 68.8 44.5", "OSR 63.2 62.9 75.4 51.1 13.7 96.4 52.8 08.6 95.2", "AZI 13.1 41.4 39.1 96.2 08.7 97.3 55.8 35.8 16.3", "ZJJ 26.6 30.8 76.7 05.3 38.3 27.3 65.8 68.5 42.4", "AFJ 37.5 93.8 72.4 43.1 08.9 30.7 88.4 84.2 49.6", "MPG 92.1 63.4 41.7 85.2 27.0 13.2 01.1 40.7 96.8", "PWP 77.3 13.7 70.8 60.3 82.3 04.6 34.7 41.9 30.7", "CPV 15.4 56.0 25.0 02.2 52.5 83.1 46.7 42.8 55.8", "LXQ 29.1 96.9 98.4 18.8 35.1 04.4 10.2 96.4 74.1", "UHL 43.0 72.6 63.6 24.6 10.1 40.5 84.8 23.4 82.8", "RCX 08.5 25.7 03.1 66.7 29.9 63.0 33.4 17.9 85.3", "WCY 07.4 59.2 20.5 58.3 53.4 49.9 42.2 04.9 14.6", "TCZ 12.8 79.7 92.9 59.8 04.3 59.2 45.4 98.0 09.6", "XUB 07.3 85.3 74.7 91.6 92.3 29.4 65.9 04.7 37.9", "REV 06.3 66.8 13.4 04.8 83.2 17.1 53.6 76.3 61.2", "LIE 13.4 41.0 44.5 04.0 82.5 06.5 33.0 20.6 77.9", "PIO 77.7 33.8 37.4 00.8 08.2 81.0 56.4 58.6 47.5", "NGI 75.7 48.1 43.0 84.0 84.1 14.4 31.0 79.1 63.0", "NSX 36.4 32.3 67.6 65.0 96.7 29.3 82.7 02.6 38.9", "ATL 35.7 78.0 24.7 12.4 33.0 27.9 85.4 56.6 11.4", "MXZ 18.2 18.2 10.8 83.1 47.6 59.6 67.3 02.9 85.3", "SHC 21.7 42.7 93.7 73.1 09.0 76.9 53.9 85.3 04.9", "PGM 10.9 07.1 76.6 73.1 04.1 03.7 10.2 08.0 48.6", "PBA 35.7 35.6 45.4 34.9 44.5 76.8 77.0 10.9 16.7", "RJF 46.6 39.3 16.0 59.4 45.0 05.8 02.8 15.8 09.6", "JOL 24.5 89.5 40.1 65.2 30.9 32.4 22.8 25.4 05.5", "MTR 79.0 40.9 96.0 22.5 65.7 61.1 25.4 17.1 79.7", "OBQ 76.5 90.5 92.1 96.6 63.1 61.4 75.9 38.8 55.7", "UPY 01.2 70.5 59.7 68.5 47.0 63.1 22.9 46.7 23.5", "SLS 81.7 18.8 63.7 52.8 06.5 14.0 47.2 31.0 35.5", "ITA 46.5 29.6 07.9 92.3 74.0 47.6 44.3 99.6 92.2", "FIJ 15.7 99.6 59.3 60.7 08.2 04.1 69.5 28.7 09.9", "YII 60.7 39.8 26.9 72.9 52.9 94.4 03.5 87.5 59.4", "QYP 60.5 55.6 59.2 47.6 42.1 51.7 93.2 41.9 96.9", "YVH 11.5 89.2 44.2 81.1 65.3 72.6 72.9 98.1 10.9", "ASQ 59.6 29.7 63.1 03.2 19.9 49.2 26.6 25.4 56.6", "AIE 15.5 99.4 66.9 76.2 28.2 34.1 77.9 31.4 08.3"};
    ContestScore* pObj = new ContestScore();
    clock_t start = clock();
    vector<string> result = pObj->sortResults(data);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OBQ 113 650.6", "GRL 140 611.1", "FTA 158 594.3", "AZF 167 548.9", "LCK 174 525.4", "QYP 175 548.7", "YVH 175 545.8", "SMY 180 532.8", "NGI 189 522.4", "AFJ 190 508.6", "ITA 191 534.0", "GRE 194 505.2", "YII 194 498.0", "OSR 199 519.3", "MTR 199 487.4", "XUB 209 489.1", "LXQ 212 463.4", "NXL 213 457.7", "SHC 216 461.2", "AIE 219 437.9", "NSZ 220 452.4", "MIN 221 464.0", "MPG 221 461.2", "UHL 224 445.4", "NSX 230 451.5", "TCZ 232 461.7", "GTR 240 423.1", "ELR 242 408.0", "UPY 244 403.1", "AZI 245 403.7", "MXZ 248 393.0", "PWP 249 416.3", "CPV 249 379.5", "PBA 249 377.5", "RVQ 250 384.6", "PIO 251 401.4", "ZJJ 251 381.7", "ATL 255 365.1", "REV 256 382.7", "CVW 257 387.4", "PFS 265 370.9", "FIJ 274 355.7", "JOL 282 336.3", "ASQ 282 333.3", "LIE 285 323.4", "SLS 286 351.2", "RCX 287 333.5", "WCY 298 310.4", "RJF 329 240.3", "PGM 333 242.3"};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> data = {"ALF 28.7 14.3 81.1 01.0 33.4 63.9 73.3 60.1 59.5", "VKK 72.3 46.7 94.0 06.3 00.6 66.2 75.7 02.7 49.9", "JKL 41.1 95.7 84.1 94.8 26.0 13.8 50.3 23.7 19.6", "AWJ 96.2 15.0 04.4 45.1 49.7 42.2 47.5 91.8 73.9", "NPX 65.6 18.1 10.7 74.2 88.4 84.6 08.6 58.9 57.4", "GUO 69.5 22.5 55.5 32.2 73.0 11.7 03.7 61.5 56.2", "YHT 09.6 73.8 48.3 93.7 11.0 44.3 14.9 02.0 68.8", "KYP 72.2 51.7 55.6 06.9 80.2 06.7 69.3 59.6 77.6", "FWE 17.0 55.3 30.8 91.6 01.8 33.4 29.5 76.5 55.4", "VBM 16.4 31.9 66.1 67.2 38.5 33.9 07.0 54.9 20.4", "VDJ 15.5 78.9 67.5 83.5 28.5 82.8 94.7 99.1 84.3", "LLP 44.4 22.2 30.1 00.5 53.5 03.7 04.3 75.3 94.7", "IHS 17.6 59.0 04.1 15.1 60.6 41.1 11.7 59.3 00.9", "DMW 16.7 71.9 81.3 15.8 23.1 17.2 41.5 28.4 58.6", "GVL 60.7 39.0 47.2 08.9 03.2 16.0 52.1 14.9 71.9", "GXM 73.2 49.1 43.1 85.1 76.6 09.4 25.7 38.3 45.5", "VNE 58.8 94.7 01.2 39.8 59.6 31.5 83.2 58.0 02.8", "LFL 04.2 83.6 75.7 99.9 76.8 59.9 37.2 54.2 85.4", "IUP 94.1 34.6 01.1 91.2 80.8 88.8 91.7 36.2 56.9", "BMB 66.8 79.2 31.6 71.9 91.9 02.7 81.8 75.7 92.3", "IIK 20.6 20.7 43.9 00.0 12.3 12.5 02.9 19.4 01.6", "BPK 55.3 37.3 14.8 06.1 28.3 71.5 31.7 24.6 86.9", "EIJ 99.6 43.6 96.0 98.6 02.4 39.5 04.9 76.5 66.2", "BLG 64.5 50.0 11.6 10.6 71.8 44.8 95.2 84.1 40.9", "UMS 46.0 91.0 04.1 85.2 55.5 39.1 30.8 81.3 97.5", "CBL 59.2 50.3 80.8 11.5 56.0 01.1 25.4 03.5 54.4", "BOJ 61.0 87.0 47.3 48.4 94.2 26.3 58.0 91.5 66.9", "KFQ 18.7 38.6 42.3 96.4 58.0 90.6 25.7 57.8 05.6", "SKM 89.6 55.6 21.9 70.7 17.5 36.7 20.3 95.2 98.7", "DQD 38.7 13.2 87.5 97.5 80.4 64.0 36.0 85.8 06.6", "MVI 77.6 40.1 88.1 39.8 08.8 64.4 69.0 98.7 90.3", "DOJ 50.4 36.6 45.7 70.6 53.6 69.2 08.2 19.2 08.4", "YFV 12.7 77.5 31.2 21.3 98.8 54.9 85.9 28.8 40.8", "ACN 77.9 46.6 22.0 44.1 93.9 71.6 91.3 83.3 97.3", "XBM 55.7 61.4 33.8 50.2 69.8 77.9 58.0 88.5 37.4", "XVT 74.8 60.2 25.7 00.7 38.7 38.6 23.4 44.2 17.2", "VMZ 83.3 72.3 94.9 85.1 60.0 33.8 97.1 53.7 94.5", "HZT 27.7 56.9 17.3 26.0 32.0 57.5 38.4 73.7 44.3", "PYS 58.4 26.0 39.8 83.6 96.8 14.5 97.5 36.8 33.4", "OCU 31.1 75.9 90.8 79.1 30.9 31.3 00.3 56.1 51.6", "OTF 22.6 51.4 41.4 40.5 76.5 79.7 20.9 77.7 93.8", "BRY 07.4 75.6 39.7 74.7 31.3 00.5 95.7 12.4 83.9", "HLU 91.4 30.9 13.0 83.6 88.0 38.2 00.7 71.0 49.5", "TSC 29.0 85.0 96.6 97.1 87.9 80.9 01.9 80.0 04.2", "ZIW 44.4 42.9 61.7 42.4 50.1 68.4 61.7 71.7 01.4", "AKC 64.0 08.4 17.5 91.7 57.8 93.8 31.9 21.0 91.3", "DPK 33.8 34.9 97.6 46.9 44.8 43.2 26.5 40.8 69.9", "MZK 60.0 66.6 75.3 52.2 58.6 32.9 76.7 52.7 39.8", "JPF 11.8 17.6 77.1 32.5 59.3 13.7 22.6 97.8 81.9", "QQE 49.5 41.5 00.2 33.4 98.6 41.9 23.3 82.1 82.4"};
    ContestScore* pObj = new ContestScore();
    clock_t start = clock();
    vector<string> result = pObj->sortResults(data);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"VMZ 126 674.7", "ACN 135 628.0", "VDJ 147 634.8", "BOJ 155 580.6", "BMB 161 593.9", "MVI 165 576.8", "LFL 167 576.9", "TSC 168 562.6", "IUP 183 575.4", "XBM 184 532.7", "UMS 184 530.5", "EIJ 190 527.3", "DQD 195 509.7", "OTF 199 504.5", "SKM 200 506.2", "KYP 209 479.8", "BLG 211 473.5", "MZK 212 514.8", "AKC 217 477.4", "AWJ 219 465.8", "NPX 226 466.5", "PYS 227 486.8", "QQE 228 452.9", "YFV 229 451.9", "JKL 232 449.1", "GXM 233 446.0", "ZIW 234 444.7", "DPK 236 438.4", "KFQ 236 433.7", "HLU 239 466.3", "VNE 243 429.6", "VKK 243 414.4", "OCU 250 447.1", "ALF 252 415.3", "BRY 258 421.2", "JPF 259 414.3", "FWE 260 391.3", "HZT 263 373.8", "YHT 263 366.4", "GUO 266 385.8", "DMW 272 354.5", "BPK 275 356.5", "DOJ 277 361.9", "XVT 281 323.5", "CBL 283 342.2", "GVL 287 313.9", "LLP 299 328.7", "VBM 301 336.3", "IHS 304 269.4", "IIK 384 133.9"};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> data = {"CQT 47.2 79.0 63.7 45.3 27.9 14.7 91.9 14.2 89.0", "DWE 48.2 77.1 93.4 68.1 10.8 11.4 82.5 04.1 22.0", "MHI 90.2 19.1 28.5 86.3 90.5 91.8 31.2 01.6 15.1", "HYO 89.0 20.9 42.9 10.8 41.8 10.1 93.2 33.6 06.1", "VNB 39.0 44.0 38.4 51.6 57.7 38.7 69.2 82.7 64.3", "EDV 13.4 47.0 42.0 19.1 74.8 77.6 45.7 94.0 62.4", "OKU 74.9 18.6 44.0 45.0 65.4 42.4 18.9 87.5 04.8", "HME 33.6 26.6 00.1 05.8 21.3 77.7 38.6 29.3 09.9", "QCZ 21.2 93.9 55.1 88.8 70.1 27.9 00.9 85.0 35.2", "RZC 29.2 58.7 66.5 94.3 83.3 16.3 08.5 28.0 21.7", "OMU 79.4 14.4 82.0 31.7 89.2 23.8 53.8 07.6 32.8", "CMM 95.5 58.1 97.5 22.7 11.8 35.1 42.7 24.4 17.8", "VGH 71.4 56.3 87.2 41.6 12.9 16.4 30.6 04.1 67.0", "PSA 48.5 05.3 33.3 77.4 40.7 32.5 87.7 69.3 95.1", "QYX 68.1 49.6 92.0 20.9 76.0 69.4 19.1 08.0 37.7", "MHS 80.0 14.9 85.4 88.6 97.2 93.1 56.3 66.1 81.0", "CSW 88.4 09.8 09.5 47.3 07.2 28.5 54.3 82.1 93.3", "ERF 49.3 89.4 81.4 35.3 97.2 11.3 99.9 29.3 49.6", "TLH 47.6 97.8 57.9 12.7 73.6 15.8 46.9 30.8 94.9", "DLO 31.1 12.0 98.7 91.2 88.5 40.2 46.8 32.9 21.5", "FUV 61.6 73.9 82.9 73.2 91.3 78.3 92.1 06.3 10.6", "OVN 19.6 07.9 95.4 02.9 24.3 51.1 00.3 42.9 93.9", "SKN 13.2 73.1 94.8 56.1 41.7 98.8 09.0 45.3 54.6", "XAA 21.4 61.9 82.6 67.4 93.5 63.4 65.5 71.0 27.4", "OGP 98.8 54.1 64.3 43.2 94.6 43.1 09.8 58.0 50.7", "WJZ 90.3 77.9 15.6 40.9 71.3 57.8 88.8 63.6 61.9", "JTC 04.2 53.9 54.6 31.6 48.9 75.7 85.5 61.0 40.3", "NBS 38.4 55.8 62.4 35.5 19.3 19.0 07.5 55.9 79.9", "HXK 18.8 66.4 64.6 09.4 63.3 14.4 26.1 91.6 80.8", "FLN 85.3 63.1 01.6 91.5 39.0 81.4 35.2 44.3 35.6", "FAB 62.6 91.1 11.2 92.6 67.5 76.8 39.3 65.0 98.5", "RVV 77.4 57.5 70.8 99.1 75.8 32.6 16.5 72.1 93.1", "ADH 50.2 95.1 64.1 54.2 83.8 86.2 50.8 09.2 38.6", "TOH 09.1 21.6 67.1 74.7 04.2 03.9 20.1 30.2 56.0", "JNA 43.5 57.8 43.6 73.2 65.7 87.2 99.2 04.4 42.0", "YNB 02.0 87.8 63.3 40.6 76.3 67.0 06.2 29.6 83.8", "VKK 62.8 70.7 79.3 03.3 92.2 20.1 50.7 72.8 53.2", "AUI 20.6 29.9 16.8 47.1 06.6 40.6 57.7 24.1 12.4", "ZCK 92.1 74.0 67.7 62.4 84.2 68.4 23.2 97.8 10.0", "TVU 86.2 96.8 14.6 81.0 41.6 87.4 59.9 79.6 72.9", "APK 89.5 30.3 12.7 92.8 17.9 77.6 12.6 29.7 17.1", "SJA 87.4 50.4 84.8 63.1 45.0 62.7 26.0 08.1 91.0", "QLB 72.7 37.7 96.1 82.7 18.2 14.6 89.4 09.3 21.4", "AZS 42.0 17.7 87.5 27.7 18.6 39.0 19.1 60.1 14.4", "NCR 52.4 75.1 76.8 28.7 09.5 84.6 05.8 23.0 54.6", "TCA 07.9 45.6 64.2 66.2 48.3 96.7 89.5 63.8 88.5", "ENR 09.4 16.1 82.7 08.4 32.2 64.1 64.2 32.5 30.5", "MMO 54.5 28.1 56.5 36.4 71.8 10.4 46.8 69.2 32.2", "CZK 48.5 20.3 58.9 11.7 70.9 51.1 08.7 06.8 30.2", "ZSB 67.6 31.6 66.6 79.7 66.7 72.1 84.9 56.5 51.7"};
    ContestScore* pObj = new ContestScore();
    clock_t start = clock();
    vector<string> result = pObj->sortResults(data);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"MHS 122 662.6", "TVU 144 620.0", "FAB 157 604.6", "RVV 160 594.9", "ZCK 167 579.8", "WJZ 173 568.1", "FUV 174 570.2", "XAA 175 554.1", "ZSB 180 577.4", "TCA 185 570.7", "ADH 186 532.2", "ERF 190 542.7", "OGP 195 516.6", "VKK 197 505.1", "SJA 202 518.5", "SKN 205 486.6", "JNA 210 516.6", "FLN 210 477.0", "DLO 219 462.9", "TLH 220 478.0", "PSA 222 489.8", "VNB 222 485.6", "CQT 226 472.9", "QCZ 227 478.1", "EDV 227 476.0", "MHI 232 454.3", "QLB 234 442.1", "QYX 234 440.8", "YNB 239 456.6", "CSW 243 420.4", "JTC 245 455.7", "CMM 245 405.6", "HXK 248 435.4", "DWE 251 417.6", "OMU 251 414.7", "NCR 252 410.5", "RZC 253 406.5", "VGH 258 387.5", "APK 258 380.2", "MMO 261 405.9", "OKU 266 401.5", "NBS 283 373.7", "ENR 283 340.1", "OVN 286 338.3", "HYO 287 348.4", "AZS 294 326.1", "TOH 305 286.9", "CZK 310 307.1", "AUI 321 255.8", "HME 331 242.9"};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> data = {"POJ 69.6 25.6 95.1 29.7 04.1 52.6 63.2 16.1 50.1", "BXD 59.6 33.3 22.8 34.0 06.4 11.6 90.2 21.0 56.0", "AFL 58.4 44.7 76.9 81.6 81.2 44.6 06.6 20.9 45.5", "WFM 90.9 36.5 04.1 24.4 04.7 28.1 00.9 65.9 79.4", "CGR 35.0 29.6 99.2 03.8 63.4 38.2 68.3 67.8 54.9", "OZD 12.1 36.0 25.1 67.5 73.0 18.0 44.1 90.8 98.4", "GYP 43.9 59.5 71.2 89.1 56.6 88.4 84.1 93.1 94.1", "IAN 18.7 15.6 84.9 15.0 40.7 38.7 99.1 08.6 40.0", "RKC 97.7 88.2 67.9 50.4 76.4 49.5 11.6 41.4 07.6", "EFI 94.0 82.8 28.7 15.7 52.6 29.5 92.8 57.0 19.7", "OWI 05.6 23.0 15.8 09.5 04.0 68.9 37.3 24.2 46.4", "DEW 68.5 41.0 54.7 54.6 34.3 32.1 26.1 50.5 04.3", "CHR 45.0 90.1 15.7 02.1 75.8 28.0 32.8 60.8 40.4", "HWE 18.9 19.9 42.6 12.9 49.6 23.7 57.9 35.1 49.1", "KDR 40.7 43.8 39.0 22.3 36.4 91.8 86.7 81.4 17.4", "RIT 24.5 28.0 04.1 36.3 61.9 20.2 21.8 19.2 62.9", "ADN 52.4 24.2 44.8 57.6 85.7 90.0 22.1 26.2 42.4", "UYA 39.4 93.8 47.4 22.4 92.1 63.1 67.6 90.2 14.4", "CSK 06.9 45.2 49.1 04.5 43.9 81.2 10.0 79.2 13.8", "HNN 59.7 65.4 89.6 11.0 68.5 56.8 07.0 07.0 48.3", "WAC 31.5 08.0 78.1 50.2 58.0 24.8 26.6 38.3 32.1", "EYV 48.1 90.1 99.9 24.1 41.0 73.6 56.2 11.0 66.2", "IKC 90.8 09.9 10.8 32.3 48.4 45.0 01.8 44.9 63.5", "WVV 92.1 75.2 86.2 99.6 24.4 80.2 03.5 07.1 94.4", "MGL 75.2 03.7 23.5 62.5 26.1 97.1 17.6 88.4 99.0", "IOQ 33.2 76.7 48.0 25.5 99.1 08.8 31.8 09.6 69.5", "OPN 60.7 08.5 94.3 26.0 75.0 87.0 93.4 75.3 33.4", "YPD 49.2 30.0 89.4 31.3 40.0 69.8 88.1 25.6 80.9", "UOS 66.3 89.5 09.5 43.8 97.9 05.0 83.8 18.5 96.5", "YUX 48.4 78.5 38.5 05.8 04.7 96.2 16.7 17.5 68.3", "RYK 32.6 72.7 25.5 97.2 77.9 49.5 80.2 64.1 30.0", "LGU 59.5 38.7 02.4 82.3 01.0 18.1 76.4 14.8 48.0", "EVC 72.7 47.7 10.0 78.4 00.5 24.3 41.2 04.6 88.4", "EFN 76.5 60.5 43.5 60.5 02.5 76.9 32.2 52.8 10.9", "QBI 10.2 76.4 40.7 96.9 48.3 16.9 19.2 54.6 67.7", "VFS 39.0 58.6 12.9 81.7 77.6 28.4 11.3 57.9 23.8", "VEK 13.5 30.5 11.7 29.0 08.7 80.7 23.9 59.8 63.1", "UYV 07.6 72.6 23.7 16.8 38.8 26.0 08.3 95.4 71.9", "CXX 38.2 15.6 90.0 63.8 67.6 49.4 41.2 90.9 69.0", "JLF 16.5 57.3 26.5 44.8 42.7 28.9 64.0 04.3 90.2", "DHY 86.2 62.2 16.8 60.5 64.7 46.6 54.0 54.6 85.8", "LSY 16.2 32.6 55.2 61.4 10.0 06.8 81.2 16.8 77.3", "IMJ 23.8 66.0 34.6 70.9 43.9 43.7 54.8 75.5 84.4", "JSO 34.9 11.7 36.1 15.3 19.6 26.2 01.6 08.3 58.7", "JYS 75.4 86.7 61.5 73.1 36.0 98.6 10.7 91.8 28.6", "UKO 29.3 88.1 64.3 13.8 46.4 58.4 39.5 11.8 13.6", "BVK 87.8 38.6 74.2 27.5 02.4 49.2 02.3 55.4 56.0", "SUT 28.5 01.3 88.9 02.8 82.2 48.1 69.6 16.1 62.0", "WWG 30.8 01.9 51.0 44.4 54.7 98.7 36.8 97.5 23.9", "CFD 47.7 27.0 45.2 61.8 06.2 96.2 79.8 50.5 22.1"};
    ContestScore* pObj = new ContestScore();
    clock_t start = clock();
    vector<string> result = pObj->sortResults(data);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"GYP 105 680.0", "JYS 162 562.4", "OPN 167 553.6", "CXX 169 525.7", "WVV 171 562.7", "DHY 171 531.4", "UYA 175 530.4", "RYK 175 529.7", "YPD 182 504.3", "EYV 184 510.2", "RKC 186 490.7", "UOS 188 510.8", "IMJ 192 497.6", "MGL 194 493.1", "EFI 201 472.8", "AFL 207 460.4", "OZD 210 465.0", "ADN 210 445.4", "CGR 216 460.2", "KDR 216 459.5", "WWG 217 439.7", "CFD 222 436.5", "EFN 228 416.3", "POJ 230 406.1", "QBI 233 430.9", "HNN 235 413.3", "IOQ 235 402.2", "VFS 240 391.2", "BVK 241 393.4", "CHR 244 390.7", "YUX 245 374.6", "SUT 249 399.5", "DEW 250 366.1", "JLF 254 375.2", "LSY 256 357.5", "EVC 257 367.8", "UKO 258 365.2", "BXD 262 334.9", "IKC 265 347.4", "UYV 266 361.1", "WAC 268 347.6", "WFM 269 334.9", "VEK 273 320.9", "CSK 274 333.8", "IAN 276 361.3", "LGU 276 341.2", "HWE 291 309.7", "RIT 299 278.9", "OWI 327 234.7", "JSO 341 212.4"};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> data = {"KSR 35.1 20.7 01.2 32.1 04.5 99.1 83.1 56.3 57.4", "SVE 29.7 53.8 45.9 68.2 98.8 49.9 88.4 15.1 40.0", "KUC 28.5 24.8 00.5 19.3 38.4 45.3 33.3 84.8 10.8", "DFR 77.3 49.9 49.0 93.9 58.9 92.4 48.7 88.3 69.6", "NYP 42.6 76.8 93.9 92.2 07.1 98.3 43.3 33.1 91.2", "XMP 64.9 44.5 23.0 24.5 66.4 75.3 31.8 67.1 88.2", "QVH 71.9 67.3 42.8 66.4 12.0 60.8 15.1 91.0 21.8", "UUX 13.6 12.4 68.8 74.4 16.6 44.8 25.3 34.7 48.0", "EKO 86.0 69.2 27.2 06.6 48.4 12.8 96.3 59.9 25.7", "OUM 90.2 16.3 51.0 71.9 36.7 89.1 60.9 25.8 19.6", "XIW 53.8 74.6 09.7 28.9 11.7 01.6 30.6 22.2 35.1", "XCP 71.0 50.4 12.5 15.3 08.7 79.0 52.0 17.2 50.8", "ZNU 68.0 75.0 36.3 19.8 49.6 38.7 43.2 67.9 14.1", "DHS 70.0 77.5 82.3 33.3 30.2 13.3 99.6 36.5 29.0", "DGJ 59.5 57.4 07.7 30.0 83.0 14.6 45.5 28.3 82.4", "ILS 52.4 19.3 51.0 47.2 55.7 78.3 34.9 17.9 67.2", "PDP 74.4 15.5 63.7 67.4 04.1 72.0 17.4 20.3 17.2", "DUD 57.6 11.1 67.4 36.4 96.8 14.2 37.0 99.0 30.9", "XOV 73.9 36.2 62.9 38.5 79.4 72.8 05.5 25.6 40.6", "UPC 74.7 69.5 86.8 09.6 78.7 15.0 17.5 81.2 48.2", "ZEA 71.4 70.6 20.2 20.3 00.3 81.8 85.8 35.9 82.9", "INP 24.7 91.7 56.7 98.0 41.0 79.3 77.0 52.6 70.8", "SFN 27.9 96.3 63.9 52.9 76.0 75.1 33.8 30.3 17.5", "ZUU 68.8 69.6 97.0 02.4 12.1 49.6 54.1 60.2 91.1", "KTN 71.7 59.8 10.5 30.0 84.2 18.3 95.8 11.8 32.1", "MBC 46.0 31.9 24.0 98.2 98.6 19.6 58.2 59.5 34.8", "MFD 57.5 50.6 44.2 44.2 75.0 57.9 24.8 69.9 12.6", "VCF 05.6 50.8 35.3 61.9 80.4 16.3 00.7 06.6 29.0", "AXJ 71.6 37.9 10.6 68.7 59.0 20.6 50.6 53.2 15.3", "CXM 32.8 15.7 08.9 65.8 62.9 64.9 42.1 07.4 40.1", "HQI 47.0 29.5 91.4 00.1 86.3 74.0 88.4 00.3 64.3", "KFC 67.5 71.6 42.8 03.8 13.6 73.2 71.0 13.0 62.6", "DAV 78.1 37.2 12.7 94.2 96.5 73.0 92.4 15.7 31.9", "LUT 30.2 45.1 86.5 58.0 77.8 57.1 56.5 98.0 93.1", "SFR 28.3 62.0 70.7 38.5 55.4 30.1 66.0 17.0 16.3", "YBG 71.6 37.8 36.1 21.9 96.6 61.7 77.5 98.4 91.1", "PHM 33.1 08.8 03.6 38.8 27.6 95.8 85.5 54.4 94.7", "YDT 22.8 34.6 15.1 88.9 83.9 44.4 24.9 89.6 40.0", "ZJX 65.5 49.0 02.5 42.5 30.0 45.6 19.0 29.1 85.2", "GVT 35.2 90.1 92.6 66.8 12.1 48.8 09.7 34.9 44.4", "EVB 38.9 69.1 98.3 54.2 68.6 74.4 74.6 47.0 32.6", "IIN 36.2 42.1 53.2 11.8 57.6 16.0 73.7 39.4 55.8", "YPD 50.7 97.9 34.4 55.5 30.4 23.2 41.5 14.7 82.4", "KOV 71.3 61.0 76.5 21.2 76.5 48.8 63.9 44.6 14.0", "XBG 80.7 17.0 46.6 98.9 38.6 82.6 98.9 02.6 65.0", "AOV 40.6 22.5 48.1 37.2 22.0 83.2 72.2 62.7 41.2", "NTV 22.7 06.1 72.9 95.8 38.1 38.4 75.8 94.0 80.1", "HZR 82.5 72.3 90.5 01.1 94.9 29.9 66.5 47.9 66.9", "GPD 19.1 66.5 97.7 68.8 77.4 81.3 87.9 53.9 61.5", "NJW 62.5 90.1 51.9 28.7 37.6 78.7 38.6 43.1 39.2"};
    ContestScore* pObj = new ContestScore();
    clock_t start = clock();
    vector<string> result = pObj->sortResults(data);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"DFR 138 628.0", "GPD 149 614.1", "INP 155 591.8", "YBG 160 592.7", "NYP 163 578.5", "LUT 166 602.3", "HZR 169 552.5", "XBG 178 530.9", "EVB 179 557.7", "DAV 191 531.7", "ZUU 195 504.9", "ZEA 207 469.2", "UPC 209 481.2", "NTV 210 523.9", "SVE 210 489.8", "DHS 214 471.7", "OUM 215 461.5", "XMP 217 485.7", "NJW 219 470.4", "HQI 221 481.3", "MBC 221 470.8", "KOV 223 477.8", "SFN 228 473.7", "AOV 228 429.7", "PHM 230 442.3", "QVH 233 449.1", "XOV 233 435.4", "GVT 233 434.6", "EKO 233 432.1", "DUD 241 450.4", "ILS 242 423.9", "KTN 243 414.2", "YPD 244 430.7", "KFC 247 419.1", "MFD 248 436.7", "YDT 249 444.2", "ZNU 250 412.6", "DGJ 253 408.4", "AXJ 253 387.5", "KSR 256 389.5", "IIN 261 385.8", "SFR 271 384.3", "XCP 271 356.9", "ZJX 274 368.4", "PDP 283 352.0", "UUX 287 338.6", "CXM 296 340.6", "VCF 315 286.6", "XIW 319 268.2", "KUC 332 285.7"};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> data = {"FRN 70.5 01.8 95.5 66.2 02.3 59.7 74.1 63.5 43.4", "EYF 70.9 42.2 42.7 98.6 21.0 56.9 45.5 52.9 08.2", "EAV 34.7 58.9 73.1 52.2 16.3 33.9 27.4 74.8 84.8", "DMV 86.7 53.7 40.0 85.5 28.3 51.7 65.6 25.1 33.7", "XYQ 64.8 59.1 36.1 56.9 28.9 63.1 51.8 13.3 46.7", "SOL 48.8 26.9 51.7 66.3 51.1 77.4 84.7 87.1 22.9", "JCV 40.0 44.8 49.9 35.5 73.8 80.7 50.1 20.9 52.1", "PBR 80.9 06.5 82.4 76.1 53.6 53.8 38.0 43.1 58.3", "WVH 78.1 68.9 39.2 78.0 95.3 51.8 64.7 60.2 76.2", "DAU 42.8 50.8 64.7 83.8 82.5 30.8 26.4 12.5 32.3", "JTX 79.3 56.4 42.0 33.3 33.8 99.0 71.8 24.2 99.4", "AMD 14.0 51.6 15.9 31.4 84.7 83.6 83.9 85.5 16.4", "NWP 71.9 98.0 61.6 74.7 15.3 03.7 72.2 62.7 23.3", "GVV 10.6 09.7 17.8 94.5 87.0 18.3 07.7 23.0 17.5", "QOI 19.8 02.0 75.9 56.6 04.3 27.3 60.0 54.6 58.3", "HAZ 18.3 28.5 45.2 32.8 93.2 35.1 83.1 99.6 76.6", "YRQ 43.0 77.8 41.5 84.8 64.3 09.0 17.4 58.5 35.3", "TQR 14.0 23.7 27.8 85.2 63.6 13.7 14.5 79.5 22.3", "YLX 33.5 37.8 29.7 07.4 25.7 18.2 80.6 57.8 12.2", "ECK 75.9 20.8 22.7 12.7 76.4 69.3 88.3 45.2 46.6", "RIQ 39.3 43.5 27.7 18.1 87.0 33.9 81.7 38.5 52.1", "KXM 24.7 88.1 32.0 34.1 62.8 67.2 65.3 58.3 06.6", "WIJ 04.4 92.4 08.7 33.1 49.5 26.3 42.0 09.9 30.7", "FOF 18.3 57.6 90.6 83.9 97.8 71.6 28.8 28.0 33.2", "ETQ 98.6 35.3 14.5 73.8 84.7 81.9 55.7 50.7 53.2", "LAB 57.7 32.2 93.9 42.4 52.8 21.2 16.7 01.7 79.3", "AQV 94.8 99.1 38.6 25.1 60.3 72.6 96.2 86.6 66.5", "TEP 27.7 08.7 32.7 06.2 35.2 82.7 53.5 71.1 59.9", "EGF 42.7 15.5 08.9 80.6 03.3 54.5 49.8 98.9 24.9", "IGB 98.4 62.9 42.9 32.0 15.5 42.9 96.8 97.7 19.3", "EVD 33.8 79.2 85.6 89.9 00.4 77.6 78.4 78.1 61.2", "LJQ 96.9 96.0 16.6 76.7 86.9 24.6 03.5 42.5 71.6", "AQT 61.7 70.5 71.2 51.8 29.7 24.3 84.6 51.0 20.1", "OWW 18.3 15.6 63.7 08.8 11.0 85.4 13.0 91.1 93.4", "RYM 55.3 08.0 67.3 67.4 60.7 60.2 01.7 32.0 44.4", "SVI 52.5 04.6 03.3 69.2 25.3 12.3 54.7 27.1 34.5", "ZWW 91.6 63.3 26.6 72.5 06.2 57.6 02.1 96.0 11.6", "EIF 31.4 18.8 42.4 00.8 72.6 07.3 69.7 99.5 22.7", "IIF 15.3 87.3 83.7 44.7 23.1 83.0 32.0 23.9 75.3", "UEB 89.9 17.8 45.1 19.7 13.1 43.6 58.8 70.4 88.9", "PQB 62.7 75.4 51.2 75.3 68.7 72.2 49.1 46.1 86.1", "WBU 74.0 61.8 19.9 58.4 84.4 74.7 00.8 14.5 25.3", "UHZ 46.7 63.0 46.1 61.9 09.6 57.0 47.0 20.6 92.3", "FKM 64.7 51.2 75.8 91.9 84.0 61.7 67.6 81.6 51.1", "YOV 34.6 21.7 48.4 27.6 18.2 14.5 13.2 71.3 68.6", "LVI 82.0 66.1 30.0 82.7 65.5 88.2 51.5 71.8 27.7", "FEU 56.2 63.8 76.0 96.4 72.9 42.9 87.1 36.4 29.1", "HGX 15.5 53.8 33.5 52.3 91.6 88.0 96.0 22.6 66.7", "JJV 80.5 45.0 40.5 15.0 54.3 34.1 35.0 58.4 46.0", "ZKX 16.9 82.4 07.6 68.1 65.7 98.1 34.8 39.6 73.5"};
    ContestScore* pObj = new ContestScore();
    clock_t start = clock();
    vector<string> result = pObj->sortResults(data);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"FKM 139 629.6", "AQV 141 639.8", "WVH 146 612.4", "EVD 153 584.2", "PQB 159 586.8", "LVI 167 565.5", "FEU 167 560.8", "JTX 183 539.2", "ETQ 186 548.4", "HAZ 189 512.4", "SOL 194 516.9", "HGX 198 520.0", "FOF 198 509.8", "LJQ 202 515.3", "IGB 202 508.4", "PBR 213 492.7", "NWP 213 483.4", "DMV 217 470.3", "ZKX 221 486.7", "IIF 221 468.3", "FRN 222 477.0", "AQT 224 464.9", "EAV 226 456.1", "ECK 228 457.9", "UEB 228 447.3", "JCV 229 447.8", "YRQ 231 431.6", "AMD 234 467.0", "UHZ 236 444.2", "EYF 242 438.9", "XYQ 245 420.7", "KXM 246 439.1", "OWW 246 400.3", "ZWW 249 427.5", "DAU 249 426.6", "RIQ 250 421.8", "JJV 253 408.8", "WBU 256 413.8", "LAB 259 397.9", "RYM 260 397.0", "TEP 262 377.7", "QOI 274 358.8", "EGF 276 379.1", "EIF 276 365.2", "YOV 288 318.1", "TQR 292 344.3", "YLX 314 302.9", "SVI 318 283.5", "GVV 320 286.1", "WIJ 323 297.0"};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> data = {"UFF 40.3 91.8 34.6 94.6 32.2 92.7 64.6 73.9 05.5", "ABN 45.1 76.2 71.6 51.1 24.5 65.9 41.5 01.8 21.5", "LRM 81.3 00.9 40.1 15.4 49.0 98.6 02.7 54.8 46.1", "DSZ 06.0 58.3 53.3 84.0 40.2 49.0 09.2 06.8 02.7", "IKH 16.1 31.2 66.5 16.1 20.1 45.2 47.3 87.9 68.2", "TGG 83.4 28.5 47.4 98.0 20.3 36.0 70.7 00.7 17.5", "VSJ 11.0 55.0 19.7 50.6 72.8 25.5 24.5 24.6 95.5", "SNL 32.0 50.5 53.6 38.6 17.8 90.5 44.9 28.5 09.3", "TDS 40.8 55.0 21.3 94.3 55.3 66.5 31.9 33.0 03.1", "VKL 94.7 01.3 04.6 65.2 12.9 48.5 92.6 17.1 17.6", "MNK 14.3 14.6 67.0 23.7 64.0 59.0 00.2 91.1 02.1", "VFY 70.8 01.5 79.2 91.7 79.1 94.2 95.3 46.4 58.9", "IFW 25.8 17.2 86.1 08.5 77.6 06.1 37.8 81.4 49.2", "XVO 38.7 41.6 81.3 11.1 80.0 50.6 65.3 43.7 08.6", "KXX 47.1 33.4 01.7 52.8 83.8 88.1 64.6 90.0 80.0", "KYL 89.2 12.5 84.8 59.1 69.4 67.4 73.0 45.0 65.2", "WYY 10.7 41.0 91.6 07.8 35.7 71.7 39.2 35.9 33.5", "FLB 32.5 16.8 38.2 18.1 91.6 90.7 63.8 08.5 03.0", "ZCF 03.4 76.0 71.0 93.8 04.1 63.1 61.6 62.4 22.7", "GVL 69.3 06.1 05.3 15.8 15.2 34.8 62.9 38.1 72.3", "HNI 63.1 93.9 35.5 88.0 60.7 85.3 81.5 86.4 96.6", "PPL 79.8 11.1 04.9 52.7 70.9 50.4 09.8 67.4 08.0", "EBN 45.7 26.8 66.4 54.8 23.8 20.8 81.9 67.6 37.7", "NFC 13.7 06.3 04.2 41.8 43.1 47.2 28.3 44.0 09.9", "JZW 28.0 98.8 58.4 74.5 58.0 62.8 06.8 30.4 33.4", "OSD 14.7 36.7 11.5 58.1 25.1 23.5 24.1 07.4 53.9", "TLJ 08.8 73.4 66.5 33.5 45.2 58.5 00.1 31.9 96.4", "QNZ 47.2 26.7 82.4 55.7 29.3 46.1 18.3 33.4 45.2", "OBJ 19.8 51.4 31.6 76.1 48.2 94.0 26.8 69.4 23.9", "RPU 64.4 52.7 95.1 82.7 98.8 48.2 40.8 38.9 91.4", "QKD 24.4 89.6 81.1 99.5 80.5 86.3 31.6 16.4 35.7", "NNN 57.0 98.9 78.2 89.3 59.6 08.2 61.5 44.1 07.8", "CFT 12.1 11.1 30.9 78.8 15.9 95.7 13.0 77.5 08.2", "JMZ 29.1 53.4 68.4 75.4 78.9 79.7 41.2 50.0 22.0", "UBU 66.7 73.2 40.0 89.8 57.8 64.8 50.1 85.3 87.7", "IOH 82.9 71.2 05.4 26.4 23.1 39.7 15.7 43.5 93.4", "GXA 73.2 80.4 32.1 75.9 39.2 62.2 35.9 39.2 80.5", "YLW 36.3 55.5 18.8 57.5 61.4 99.9 33.4 26.6 66.6", "DIL 31.2 89.7 52.7 57.4 06.7 75.7 80.2 22.0 88.6", "HLW 26.8 46.9 31.1 07.1 79.7 48.4 36.4 71.8 71.8", "VKX 21.7 07.5 91.8 21.5 30.7 25.7 60.4 28.7 05.8", "EVV 95.0 87.7 38.0 20.2 96.2 88.9 67.2 29.0 92.7", "VES 82.7 00.4 06.2 08.3 49.1 78.9 86.8 08.8 29.0", "SEW 27.4 07.7 47.3 70.3 24.2 31.2 42.8 34.6 17.5", "FDQ 71.3 23.2 18.2 47.2 91.6 14.0 40.2 43.8 16.7", "IDW 49.0 91.3 22.3 68.2 87.3 40.9 66.0 81.5 94.2", "CAB 51.2 50.5 04.9 40.9 80.6 25.9 31.5 52.6 13.2", "LXF 84.8 31.8 02.5 28.7 18.8 02.5 96.8 41.2 34.5", "NVH 20.3 05.7 17.9 69.9 53.9 33.2 84.8 90.1 13.8", "XFL 63.7 96.4 67.2 75.1 80.6 86.1 04.5 03.6 37.9"};
    ContestScore* pObj = new ContestScore();
    clock_t start = clock();
    vector<string> result = pObj->sortResults(data);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"HNI 105 691.0", "VFY 128 617.1", "UBU 141 615.4", "EVV 143 614.9", "RPU 143 613.0", "IDW 145 600.7", "KYL 149 565.6", "KXX 173 541.5", "UFF 174 530.2", "QKD 176 545.1", "JMZ 182 498.1", "XFL 185 515.1", "GXA 190 518.6", "NNN 190 504.6", "DIL 207 504.2", "ZCF 214 458.1", "YLW 214 456.0", "OBJ 219 441.2", "XVO 221 420.9", "JZW 224 451.1", "EBN 229 425.5", "TGG 236 402.5", "HLW 240 420.0", "TDS 240 401.2", "ABN 240 399.2", "LRM 240 388.9", "IFW 243 389.7", "IKH 249 398.6", "QNZ 251 384.3", "IOH 252 401.3", "NVH 253 389.6", "TLJ 254 414.3", "FDQ 254 366.2", "FLB 254 363.2", "WYY 261 367.1", "CAB 261 351.3", "SNL 262 365.7", "VES 264 350.2", "LXF 266 341.6", "PPL 268 355.0", "VSJ 273 379.2", "VKL 274 354.5", "CFT 274 343.2", "MNK 278 336.0", "SEW 287 303.0", "GVL 290 319.8", "DSZ 297 309.5", "VKX 303 293.8", "OSD 320 255.0", "NFC 330 238.5"};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> data = {"CNU 59.6 08.6 50.3 63.1 57.2 27.5 55.0 95.1 50.1", "NWM 91.7 71.7 37.7 75.2 81.9 25.8 72.3 94.8 11.8", "EWL 27.6 15.8 80.7 57.2 95.3 09.8 86.3 28.7 29.8", "XHD 85.6 66.3 66.4 33.1 62.9 12.8 22.7 56.5 29.4", "MAH 94.6 60.4 19.0 52.3 90.7 82.1 84.3 51.2 23.1", "MXV 77.1 53.3 96.2 92.5 41.7 11.9 41.5 87.6 01.1", "RYF 29.6 35.1 86.7 18.1 82.4 76.5 70.7 40.6 32.9", "KHB 59.1 34.8 43.4 46.2 76.5 23.3 92.5 87.8 60.0", "MYM 74.9 87.6 64.1 10.7 37.5 09.8 59.3 17.2 94.2", "TIO 19.6 30.6 98.0 09.0 95.9 47.9 43.0 76.7 95.3", "NEJ 60.7 43.9 02.7 24.9 43.6 47.3 33.8 33.4 22.1", "MQG 56.8 40.3 33.5 15.9 20.2 86.1 39.4 24.9 88.2", "CQI 04.0 08.2 34.5 05.3 99.3 37.9 60.0 24.6 25.6", "WVJ 89.9 09.9 24.3 84.0 15.9 60.6 76.9 98.5 70.0", "XSH 86.6 78.7 91.1 29.7 32.4 20.4 17.0 08.9 55.1", "MAY 57.8 46.7 35.8 70.9 43.3 17.3 58.0 68.8 76.5", "IGX 01.2 17.9 81.6 80.6 76.1 27.9 53.9 71.0 78.6", "KUO 51.5 84.3 92.6 72.8 69.4 71.2 88.5 05.6 02.6", "YCK 01.9 71.3 22.7 80.9 66.0 35.3 56.1 26.8 08.0", "KSW 48.0 45.1 90.4 78.6 87.4 90.9 27.7 69.5 49.3", "ZTX 53.1 57.9 99.9 58.9 16.6 77.8 62.5 68.6 14.7", "XHY 09.0 24.9 15.8 00.6 93.5 80.2 89.4 67.4 40.9", "SDA 00.1 02.6 25.1 05.4 96.9 66.0 85.1 33.8 97.8", "ALC 12.8 22.2 06.7 49.4 88.0 96.9 14.6 29.9 29.6", "ZVO 10.0 13.4 35.1 09.2 49.2 69.8 50.2 15.4 27.5", "XGE 93.5 16.0 51.5 81.5 07.6 26.5 23.8 57.3 19.0", "YCZ 09.8 50.5 78.6 38.0 01.9 65.5 48.1 25.8 56.7", "FMQ 24.1 10.2 87.2 42.2 64.3 63.1 37.9 41.4 28.2", "KHA 20.0 51.0 79.0 15.4 42.9 90.2 03.1 90.2 52.2", "JKX 50.9 66.2 85.3 87.9 53.3 62.5 85.0 16.0 54.3", "ZJN 89.2 85.8 23.5 64.2 79.7 25.2 75.7 78.3 83.7", "VYX 40.2 80.7 63.2 41.6 88.7 62.2 89.9 78.9 28.2", "SZC 58.9 76.9 65.4 89.5 57.5 43.7 73.6 82.7 85.5", "ARD 14.5 03.3 91.8 69.7 16.5 71.0 60.4 50.8 28.3", "FVC 64.0 34.3 75.6 51.6 55.4 24.7 20.7 85.0 77.0", "QPN 75.7 79.3 18.1 95.4 50.9 22.5 95.8 95.3 12.3", "FJE 52.7 49.6 02.6 12.2 59.2 71.7 23.4 04.9 65.2", "BAB 33.1 08.2 90.5 51.9 96.8 45.2 18.7 70.1 66.8", "GDK 10.0 23.0 72.0 49.3 39.9 33.7 56.5 43.5 71.4", "PSZ 23.4 48.7 47.1 61.0 94.1 07.6 75.2 49.7 07.9", "YIH 78.8 12.8 88.5 14.6 25.0 56.0 23.5 68.6 60.5", "ZYW 83.8 87.1 77.9 29.6 93.1 18.9 12.5 81.5 77.5", "EQL 22.8 10.5 47.3 50.2 11.5 52.5 46.8 96.1 43.8", "HOM 40.6 31.6 87.6 33.8 54.9 21.3 86.1 85.8 92.1", "JRP 10.0 73.3 53.1 39.4 14.0 29.2 87.0 97.7 96.9", "DFL 20.5 47.0 84.3 10.2 53.9 78.0 16.9 37.6 19.4", "QQP 76.1 41.0 41.6 02.6 49.0 56.0 50.6 43.5 26.4", "OPE 98.5 23.8 29.1 11.3 98.4 13.2 11.2 97.6 50.2", "FWD 20.2 92.7 77.8 08.2 39.0 71.5 92.6 42.6 29.8", "EWK 04.8 45.1 34.8 14.8 39.9 58.0 18.5 94.7 56.8"};
    ContestScore* pObj = new ContestScore();
    clock_t start = clock();
    vector<string> result = pObj->sortResults(data);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"SZC 144 633.7", "ZJN 159 605.3", "KSW 166 586.9", "VYX 172 573.6", "MAH 176 557.7", "KUO 179 538.5", "NWM 180 562.9", "JKX 182 561.4", "QPN 188 545.3", "ZYW 189 561.9", "WVJ 191 530.0", "KHB 192 523.6", "HOM 193 533.8", "ZTX 194 510.0", "JRP 196 500.6", "TIO 201 516.0", "MXV 210 502.9", "RYF 211 472.6", "BAB 212 481.3", "IGX 216 488.8", "FVC 218 488.3", "FWD 218 474.4", "CNU 223 466.5", "MAY 225 475.1", "KHA 229 444.0", "EWL 237 431.2", "OPE 240 433.3", "MYM 242 455.3", "YIH 243 428.3", "XHD 244 435.7", "ARD 247 406.3", "XHY 248 421.7", "XSH 250 419.9", "PSZ 251 414.7", "SDA 254 412.8", "MQG 254 405.3", "FMQ 255 398.6", "GDK 259 399.3", "EQL 263 381.5", "XGE 267 376.7", "YCZ 268 374.9", "QQP 272 386.8", "FJE 272 341.5", "DFL 273 367.8", "YCK 274 369.0", "EWK 274 367.4", "ALC 279 350.1", "NEJ 299 312.4", "CQI 314 299.4", "ZVO 320 279.8"};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> data = {"A 00.1", "B 05.2", "C 29.0", "D 00.0"};
    ContestScore* pObj = new ContestScore();
    clock_t start = clock();
    vector<string> result = pObj->sortResults(data);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"C 1 29.0", "B 2 5.2", "A 3 0.1", "D 4 0.0"};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> data = {"AAAAA 99.0 00.1 01.5 07.7", "BBBBB 98.0 00.2 02.5 06.7", "CCCCC 97.0 00.3 03.5 05.7", "DDDDD 98.0 00.2 04.5 09.7", "EEEEE 99.0 00.1 05.5 09.3"};
    ContestScore* pObj = new ContestScore();
    clock_t start = clock();
    vector<string> result = pObj->sortResults(data);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"EEEEE 8 113.9", "DDDDD 8 112.4", "AAAAA 13 108.3", "BBBBB 13 107.4", "CCCCC 14 106.5"};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> data = {"EAKRT 94.9 27.8 63.7 02.3 47.3 45.0 34.6 98.7 90.3", "FLCAS 12.8 80.5 30.7 73.1 58.5 29.0 65.1 52.0 58.1", "WIGQN 69.7 86.3 85.0 26.5 02.7 14.6 76.1 16.8 90.3", "MYPBK 43.8 28.7 78.1 44.3 83.5 29.2 82.5 71.7 76.3", "XXAHM 39.6 18.6 09.0 65.0 10.2 34.3 59.0 86.9 41.0", "UCVIJ 48.9 34.1 46.9 96.0 11.5 56.1 78.1 57.6 79.2", "BWQMC 27.1 70.8 59.7 42.1 77.6 30.5 12.1 00.8 92.9", "LGLNO 75.7 73.5 72.9 13.6 82.9 17.2 38.2 38.3 79.8", "BJJRK 61.3 16.2 67.3 13.4 34.5 38.0 30.5 25.2 35.7", "KYQUL 32.8 14.4 00.6 34.1 91.4 71.8 98.2 62.5 11.8", "ERQRX 05.0 70.1 78.6 39.6 46.5 76.5 58.1 95.5 03.5", "DMWCK 93.3 96.0 94.5 12.9 78.6 55.3 36.2 03.2 60.8", "YQIIK 30.5 12.5 68.8 89.7 66.2 11.7 06.7 58.3 68.3", "OFEYW 04.6 41.2 29.0 26.7 00.0 17.2 74.8 80.4 63.8", "RDFOV 96.2 20.4 10.8 99.8 92.2 84.1 42.1 48.0 07.7", "XUNVF 77.7 73.0 02.1 92.2 36.0 80.4 21.1 31.1 09.8", "AMPFC 20.5 62.5 03.7 45.0 15.0 11.3 42.6 65.8 74.6", "FLRJO 95.0 10.0 69.6 12.7 82.0 17.5 65.3 13.2 71.1", "LIFBP 63.2 85.0 81.3 01.3 41.5 28.1 73.4 37.4 41.3", "LEICA 11.6 63.4 77.6 00.3 27.5 28.4 85.9 71.6 86.3", "QIBQZ 45.3 81.2 50.3 73.7 50.1 54.9 26.7 32.5 95.6", "XCWYN 13.9 56.6 51.5 88.0 89.8 41.0 08.4 25.3 93.9", "AKDPD 50.0 38.5 43.5 26.5 34.0 44.2 48.7 24.6 53.4", "DURJX 33.4 31.8 76.2 32.6 74.2 18.7 25.9 64.6 98.6", "LSHLF 49.3 58.2 42.5 60.4 23.7 02.9 83.5 21.6 27.2", "SSNYJ 81.8 83.2 10.0 34.2 63.5 03.3 50.7 79.1 41.8", "LEMUO 74.7 27.8 27.1 80.0 17.2 42.8 71.7 62.3 70.6", "JEYXD 74.9 44.3 18.1 30.3 22.9 42.6 51.4 85.3 01.2", "XMMAT 40.7 13.0 95.6 98.8 37.5 66.0 90.0 44.3 66.4", "EYEXP 44.6 86.5 52.6 33.9 28.7 00.7 33.3 76.9 52.3", "MSCBJ 47.3 34.8 52.3 01.5 81.8 10.1 43.0 25.7 68.3", "SPGBV 30.0 98.8 11.8 59.9 89.0 80.6 32.8 09.6 15.0", "MTKHD 80.6 98.0 28.5 17.3 09.3 25.8 45.9 41.2 12.4", "QWVTW 58.1 58.4 45.7 30.0 33.2 03.9 64.3 96.6 10.8", "LCEIR 89.9 65.5 13.8 13.1 67.2 16.0 61.9 27.3 56.8", "NYWEU 67.4 12.5 63.8 14.6 98.7 70.3 90.8 65.5 43.8", "GUKAU 22.1 69.0 99.1 65.0 65.8 70.9 98.7 43.2 93.6", "BUVVG 93.0 13.0 04.6 87.4 57.1 58.2 65.6 17.6 54.7", "NJHVW 47.3 79.6 37.6 22.1 15.6 98.2 54.4 22.9 82.4", "LBRKJ 29.4 27.9 93.4 36.5 93.5 77.0 33.4 84.5 00.8", "BTCKE 66.0 37.9 91.5 57.4 02.3 84.6 30.4 85.6 84.9", "UENYC 72.2 51.3 68.0 32.1 75.1 34.6 40.4 97.5 56.9", "IWLKF 38.2 61.1 52.6 75.4 58.7 14.3 19.5 86.0 75.8", "DKHIH 37.5 78.0 14.0 60.7 60.8 03.9 18.0 71.7 41.4", "OMEXM 77.1 79.2 41.0 68.6 66.8 28.2 08.1 37.6 53.6", "BVQPV 78.0 80.4 00.1 88.9 57.1 59.4 30.7 28.4 55.8", "APXXW 42.2 68.2 71.1 71.8 42.5 58.8 86.2 62.7 30.7", "ECHAK 37.0 11.9 34.7 64.3 09.1 97.1 71.7 98.3 28.3", "CLOMM 76.5 06.0 55.6 90.7 91.8 82.5 02.4 07.8 82.8", "DYYPX 39.2 19.7 88.6 87.7 25.6 40.6 86.8 75.9 05.8"};
    ContestScore* pObj = new ContestScore();
    clock_t start = clock();
    vector<string> result = pObj->sortResults(data);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"GUKAU 144 627.4", "MYPBK 176 538.1", "XMMAT 177 552.3", "BTCKE 187 540.6", "APXXW 188 534.2", "DMWCK 190 530.8", "NYWEU 191 527.4", "UENYC 193 528.1", "RDFOV 194 501.3", "EAKRT 195 504.6", "QIBQZ 198 510.3", "UCVIJ 198 508.4", "LGLNO 204 492.1", "CLOMM 206 496.1", "ERQRX 214 473.4", "BVQPV 215 478.8", "LBRKJ 215 476.4", "WIGQN 217 468.0", "DYYPX 218 469.9", "LEMUO 219 474.2", "IWLKF 223 481.6", "XCWYN 225 468.4", "SSNYJ 225 447.6", "FLCAS 227 459.8", "NJHVW 228 460.1", "LIFBP 228 452.5", "OMEXM 230 460.2", "DURJX 230 456.0", "LEICA 231 452.6", "BUVVG 233 451.2", "FLRJO 239 436.4", "XUNVF 239 423.4", "ECHAK 242 452.4", "KYQUL 243 417.6", "SPGBV 244 427.5", "BWQMC 249 413.6", "LCEIR 250 411.5", "EYEXP 253 409.5", "QWVTW 258 401.0", "JEYXD 260 371.0", "YQIIK 261 412.7", "MTKHD 267 359.0", "DKHIH 270 386.0", "MSCBJ 272 364.8", "XXAHM 272 363.6", "AKDPD 272 363.4", "LSHLF 280 369.3", "OFEYW 284 337.7", "AMPFC 288 341.0", "BJJRK 299 322.1"};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> data = {"YPSMP 89.9 15.5 09.5 45.2 14.6 73.6 16.3 88.0 45.6", "RECII 27.5 93.7 00.2 52.3 10.2 68.3 41.1 43.7 09.8", "YSXIO 89.5 36.5 30.2 75.5 77.1 50.5 84.9 11.1 32.9", "HJFXJ 26.5 93.0 15.8 72.5 43.3 50.3 91.5 23.0 42.7", "ROWBA 66.1 96.3 64.0 82.4 37.9 30.0 47.3 97.7 44.7", "KQMKI 44.1 27.9 97.9 11.2 03.7 03.2 88.1 58.7 05.9", "EDUPB 68.1 50.0 29.3 52.3 89.4 43.4 27.9 24.1 74.8", "GUNHU 55.9 57.3 71.8 16.9 02.3 66.7 38.0 99.9 59.2", "VKBRE 00.1 83.8 14.9 73.2 28.8 07.3 87.4 09.0 11.3", "EAFIR 33.7 94.8 33.7 85.9 85.0 58.0 53.2 45.4 78.2", "DXEUF 11.8 59.3 17.3 68.3 40.8 21.5 73.9 29.8 31.4", "GVYNL 27.8 12.9 05.8 18.2 19.6 24.6 86.0 74.3 18.2", "QTPDX 94.4 15.7 73.8 77.1 64.6 30.4 90.3 56.6 68.9", "BHEAW 04.0 63.9 91.6 75.5 31.0 57.9 52.4 19.0 18.7", "FMVBH 23.1 52.2 91.1 48.4 78.9 49.7 63.0 76.4 75.7", "STSZL 40.2 84.1 96.7 92.4 74.0 83.9 43.6 07.4 54.8", "KJDVL 70.9 13.1 91.0 27.0 88.8 17.2 65.4 49.2 07.2", "JEQUN 00.5 31.6 61.8 43.8 44.9 38.6 83.2 05.4 99.2", "IZQXP 28.7 55.3 95.9 24.5 85.8 71.9 05.1 70.2 84.0", "SAGHZ 00.8 56.7 15.2 71.0 21.7 62.9 33.8 38.7 98.9", "OOEND 39.6 99.9 63.8 93.1 13.9 34.2 93.8 72.7 51.7", "CTWHG 07.7 19.6 47.5 70.6 29.2 74.3 22.0 61.7 99.5", "ONGVF 42.0 38.6 06.6 14.8 26.7 61.9 03.5 21.6 18.1", "GRWON 04.2 11.2 77.5 15.0 05.8 14.9 52.3 88.6 61.6", "NXYCW 52.9 87.8 54.9 24.1 73.5 42.2 85.0 83.8 09.0", "ZOOXN 70.7 48.4 00.8 51.6 86.2 28.0 90.8 29.8 31.0", "RRZEY 23.8 09.9 08.6 46.4 28.8 18.9 36.3 27.6 59.6", "HKCHI 86.3 75.5 71.9 37.2 17.5 96.0 81.5 79.0 65.3", "QMTBY 72.7 49.5 79.8 43.0 30.1 10.1 25.8 18.6 73.3", "LIMJX 62.7 59.4 68.8 10.3 33.4 45.8 15.2 12.1 57.8", "BBXBN 90.4 95.1 95.4 91.8 47.4 16.5 98.7 39.4 09.3", "HAQWN 96.4 69.5 34.6 42.1 28.4 83.3 82.6 96.6 02.9", "GGPTB 88.9 93.5 30.9 73.1 57.1 11.1 57.0 46.0 87.8", "MFYOR 85.8 30.4 52.1 03.9 87.2 18.7 01.3 83.1 62.4", "FUUWO 56.7 80.5 04.5 55.5 27.6 36.9 60.7 13.3 39.2", "NNQBF 71.5 76.7 33.2 89.7 57.2 46.8 66.9 91.5 14.4", "EYEJV 14.1 93.4 28.3 37.0 19.4 99.0 50.2 97.3 32.5", "VWBRX 12.2 56.6 51.0 22.1 18.2 21.0 43.9 28.4 63.3", "CACBU 85.9 73.4 83.6 26.9 19.1 49.5 78.9 72.5 25.3", "JGYDS 56.9 90.8 26.2 15.5 08.9 15.8 15.5 30.8 06.3", "IWGDS 66.1 66.5 41.6 16.8 96.9 66.0 12.5 42.8 25.2", "QJHIZ 83.9 69.3 75.4 66.3 45.1 06.3 23.9 61.1 14.1", "KTALZ 58.4 61.3 45.9 00.3 54.4 37.8 78.5 81.8 42.7", "IGGHS 75.0 09.6 80.6 84.4 20.7 10.6 15.5 24.1 73.5", "LPNDU 22.9 38.7 67.7 21.2 20.3 27.7 04.9 65.8 91.4", "SKFNW 78.8 87.6 74.8 86.2 82.4 79.6 10.2 79.3 05.4", "MSTII 54.8 20.7 60.5 32.5 77.5 65.6 80.5 93.5 47.7", "XAGFJ 07.1 14.8 11.3 46.0 31.8 00.8 05.8 43.4 32.1", "GCMPP 71.0 11.3 24.9 16.4 46.5 64.5 24.1 79.7 12.5", "CVMRU 79.2 84.6 26.9 00.4 87.2 35.4 96.3 03.5 30.5"};
    ContestScore* pObj = new ContestScore();
    clock_t start = clock();
    vector<string> result = pObj->sortResults(data);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BBXBN 149 584.0", "HKCHI 155 610.2", "QTPDX 155 571.8", "EAFIR 155 567.9", "ROWBA 160 566.4", "SKFNW 162 584.3", "STSZL 162 577.1", "NNQBF 168 547.9", "OOEND 170 562.7", "FMVBH 172 558.5", "GGPTB 172 545.4", "HAQWN 182 536.4", "MSTII 186 533.3", "IZQXP 188 521.4", "CACBU 198 515.1", "YSXIO 199 488.2", "NXYCW 200 513.2", "HJFXJ 210 458.6", "EDUPB 212 459.3", "EYEJV 214 471.2", "GUNHU 219 468.0", "KTALZ 221 461.1", "CTWHG 224 432.1", "CVMRU 226 444.0", "QJHIZ 229 445.4", "IWGDS 231 434.4", "ZOOXN 232 437.3", "BHEAW 232 414.0", "KJDVL 236 429.8", "MFYOR 237 424.9", "YPSMP 239 398.2", "JEQUN 245 409.0", "QMTBY 249 402.9", "SAGHZ 250 399.7", "IGGHS 250 394.0", "FUUWO 262 374.9", "LIMJX 266 365.5", "GCMPP 266 350.9", "DXEUF 267 354.1", "RECII 268 346.8", "LPNDU 274 360.6", "GRWON 289 331.1", "VWBRX 290 316.7", "KQMKI 291 340.7", "VKBRE 293 315.8", "GVYNL 303 287.4", "RRZEY 312 259.9", "JGYDS 323 266.7", "ONGVF 334 233.8", "XAGFJ 339 193.1"};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> data = {"SNCOS 01.7 47.4 39.5 49.2 41.9 22.7 83.6 79.6 26.1", "VHRNR 91.9 67.4 82.8 96.5 05.9 45.8 81.7 97.9 78.7", "UCULV 30.5 16.3 57.5 42.5 91.0 69.0 98.1 78.8 77.3", "NBOKH 70.6 35.3 20.7 48.9 88.5 90.5 81.4 81.3 76.1", "OLPVA 77.5 31.8 38.4 17.2 15.4 32.2 46.2 81.9 42.5", "LSJNF 47.0 77.6 81.9 76.3 22.6 46.3 28.1 49.5 64.3", "CZAKQ 14.7 82.5 22.3 05.5 23.2 86.4 67.8 75.7 10.3", "HQHXQ 44.6 60.0 03.0 50.2 92.2 59.0 57.7 04.9 20.6", "YFXOH 73.2 93.4 24.0 58.1 71.8 81.3 61.5 22.7 48.6", "SRQZU 53.4 98.8 50.3 51.3 81.1 27.7 32.2 52.6 58.2", "OOGKC 98.9 97.6 90.1 23.0 65.4 34.7 78.4 97.9 99.1", "GLDIT 41.6 17.8 38.2 90.8 64.1 03.9 19.0 88.0 91.4", "LRAGF 70.6 48.9 41.8 59.4 13.7 74.0 64.0 76.9 80.8", "XYMCD 36.9 38.4 66.1 83.2 12.1 52.8 12.7 83.5 02.3", "PEVSX 26.5 02.1 83.9 37.0 79.7 19.9 36.9 91.9 36.0", "NIPLE 38.8 59.8 89.4 51.1 61.3 52.8 13.9 52.2 15.4", "HGBNJ 33.0 42.0 58.5 99.4 04.9 43.1 72.6 17.9 61.5", "COCLR 45.7 85.3 63.2 77.4 26.8 77.7 15.8 85.5 12.5", "NEHGU 62.6 27.2 51.2 27.4 07.1 84.4 54.3 01.6 27.6", "BUIVE 42.8 36.5 48.7 14.8 07.8 42.3 97.6 03.0 91.7", "POLUE 74.4 50.0 69.4 09.4 07.9 23.0 11.2 61.4 81.3", "CSLGR 48.0 69.6 53.9 57.9 48.3 90.4 05.0 29.0 32.4", "TADMY 94.4 03.9 52.6 53.1 38.0 62.1 14.5 27.0 63.1", "AOVYU 14.6 66.2 82.7 35.2 18.0 51.1 26.5 96.2 29.2", "DCDZR 99.4 53.4 00.8 55.1 55.7 69.9 24.0 08.2 91.1", "LMSDF 69.3 93.3 23.0 75.6 24.2 15.7 67.9 41.9 73.6", "VXNBV 04.9 69.1 19.0 65.2 20.4 97.2 66.8 87.8 36.3", "STOQE 23.8 16.9 36.8 08.2 04.2 98.0 89.0 77.3 32.0", "RNYXR 75.7 54.0 12.2 15.5 89.4 69.4 50.2 45.7 95.2", "MRFDY 44.3 96.6 39.8 04.6 10.4 15.2 37.8 86.7 69.9", "NMROH 31.4 00.9 98.2 56.3 50.6 04.9 93.0 62.6 54.3", "TBFCO 36.6 36.7 30.2 95.0 12.0 63.0 93.8 31.3 75.0", "OMXDT 73.6 53.1 55.2 35.4 58.2 00.3 68.6 73.4 43.6", "JMREU 95.9 26.7 91.0 55.7 59.7 52.5 50.3 86.9 33.4", "EMDYP 83.9 62.9 72.6 49.1 39.8 74.3 89.3 69.6 93.6", "CSYRM 69.3 80.2 38.7 29.2 39.2 84.2 77.8 83.0 22.0", "OCZDW 82.1 86.4 63.8 78.2 80.2 22.9 90.8 52.2 92.4", "XADUK 79.1 45.9 95.9 97.7 99.0 31.1 61.8 85.7 19.3", "DRVPA 28.0 78.2 47.1 24.3 36.6 60.4 98.3 48.6 63.1", "RKYTE 78.7 50.1 21.5 86.1 53.9 59.9 52.3 30.9 81.2", "QOWUX 81.4 03.6 10.4 81.1 31.8 42.4 95.9 97.8 39.2", "DXZCR 86.9 34.3 40.3 74.8 02.2 26.1 88.3 56.6 60.1", "QNPJQ 19.1 52.5 77.5 15.5 49.8 21.8 24.3 82.9 13.7", "GAHYB 60.6 87.3 52.7 20.1 18.5 46.8 81.8 22.9 50.0", "ZJAAL 88.3 84.8 21.0 24.3 09.8 89.8 98.1 29.6 49.0", "ZWUKC 31.6 79.9 81.3 44.4 34.4 33.6 34.0 20.4 42.7", "GJTKU 61.9 72.9 05.3 61.6 16.1 42.6 02.1 28.5 57.9", "IWHEU 23.9 62.9 25.7 33.8 95.4 33.4 74.7 59.4 28.6", "QSIMO 57.3 78.5 26.0 56.2 23.5 67.5 26.0 22.5 20.3", "CSORN 18.4 25.8 85.6 67.0 95.6 90.1 52.5 89.7 83.6"};
    ContestScore* pObj = new ContestScore();
    clock_t start = clock();
    vector<string> result = pObj->sortResults(data);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOGKC 113 685.1", "OCZDW 134 649.0", "VHRNR 138 648.6", "EMDYP 142 635.1", "CSORN 159 608.3", "XADUK 168 615.5", "JMREU 185 552.1", "NBOKH 186 593.3", "UCULV 192 561.0", "YFXOH 196 534.6", "LRAGF 202 530.1", "RKYTE 205 514.6", "CSYRM 206 523.6", "COCLR 208 489.9", "SRQZU 213 505.6", "ZJAAL 213 494.7", "LSJNF 213 493.6", "QOWUX 213 483.6", "RNYXR 218 507.3", "DRVPA 220 484.6", "LMSDF 225 484.5", "VXNBV 227 466.7", "DCDZR 227 457.6", "TBFCO 228 473.6", "CSLGR 233 434.5", "GLDIT 234 454.8", "NMROH 234 452.2", "OMXDT 235 461.4", "GAHYB 237 440.7", "DXZCR 239 469.6", "TADMY 247 408.7", "NIPLE 248 434.7", "HGBNJ 254 432.9", "AOVYU 255 419.7", "PEVSX 260 413.9", "IWHEU 261 437.8", "MRFDY 264 405.3", "ZWUKC 265 402.3", "XYMCD 265 388.0", "QSIMO 272 377.8", "HQHXQ 273 392.2", "POLUE 274 388.0", "SNCOS 277 391.7", "BUIVE 277 385.2", "CZAKQ 279 388.4", "OLPVA 284 383.1", "GJTKU 285 348.9", "STOQE 289 386.2", "QNPJQ 296 357.1", "NEHGU 297 343.4"};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> data = {"PQMBK 50.9 36.0 97.6 16.5 44.6 06.7 33.3 10.8 60.9", "EWXPB 92.6 75.7 51.0 16.5 72.5 42.0 77.1 85.0 06.8", "GNFJS 47.4 96.9 07.2 94.0 31.4 51.3 44.3 96.5 65.1", "HKIAY 14.1 05.2 97.3 37.6 63.4 97.8 52.0 28.6 91.9", "FAXGF 59.7 03.8 08.3 75.9 31.8 29.4 49.8 27.9 69.4", "GYILG 69.0 99.0 83.0 52.3 63.5 79.1 99.6 88.2 74.4", "EXPMD 60.6 61.6 11.1 34.9 81.7 92.8 80.6 62.6 38.8", "MKIRW 85.2 92.3 25.9 65.9 94.9 44.7 40.6 98.1 96.5", "ZYWWR 16.6 50.9 19.7 88.7 29.3 89.9 07.8 98.0 73.7", "ONHHW 87.6 88.9 96.7 95.1 90.9 09.9 78.0 50.8 87.4", "DHPZV 45.7 34.6 11.7 82.6 83.8 75.5 75.0 75.0 59.9", "UAFRV 40.6 96.9 25.7 74.5 02.2 58.2 30.9 81.4 00.0", "CLDXG 57.5 36.7 95.6 30.7 55.4 57.7 68.6 95.6 95.4", "BXWHA 34.4 23.5 70.8 09.5 53.3 41.9 29.8 77.9 53.2", "OTJQH 54.7 19.6 17.6 25.3 58.7 89.2 97.1 68.6 01.6", "DCNKG 15.1 12.4 08.6 72.1 71.2 65.1 57.0 45.0 54.3", "FPYLK 50.7 74.0 80.9 24.7 56.3 17.9 87.3 59.0 93.7", "GNXTE 78.0 48.0 48.2 07.7 60.0 61.0 56.6 76.7 26.0", "HVLNM 91.8 01.5 05.5 75.4 95.0 18.7 74.4 61.6 23.5", "FKZTM 80.8 25.0 70.7 44.8 06.9 04.9 40.5 77.7 34.4", "NHFZM 77.4 27.1 56.8 15.0 06.0 65.4 62.3 59.6 05.6", "JPVXS 59.5 43.2 11.5 81.5 61.3 27.0 40.7 67.9 15.3", "IMKDZ 04.2 38.5 43.5 71.1 86.5 76.0 76.8 65.1 18.8", "EXXDL 37.4 14.0 69.7 93.7 68.4 40.3 08.0 60.3 60.9", "XHBKA 40.5 10.3 27.3 56.1 40.7 66.8 56.6 71.2 73.0", "GAAGY 75.5 98.8 73.5 34.9 62.6 22.3 00.0 14.9 46.7", "ODZPO 06.1 06.0 44.6 85.2 21.6 66.6 68.7 39.4 96.8", "QFZER 80.6 60.0 08.8 62.3 98.1 84.0 64.3 60.2 48.9", "WOVPC 79.8 09.1 80.7 13.8 94.6 64.5 29.3 24.7 23.5", "SUVWW 05.8 08.8 05.1 35.3 94.9 61.3 54.7 93.1 21.8", "DIUZY 13.2 93.2 65.7 28.9 89.5 92.2 31.2 82.6 90.1", "NTKMI 18.0 53.8 02.2 81.0 96.9 39.4 43.5 81.4 15.8", "UROCH 40.0 99.2 21.2 34.1 23.4 30.0 65.8 91.1 41.1", "WBMDE 45.3 57.5 99.1 30.3 86.6 06.4 56.3 98.0 01.8", "MHRQE 87.7 53.8 44.3 69.4 25.4 01.2 64.1 64.3 04.1", "ZNTFB 39.2 87.8 43.6 37.0 01.0 15.7 78.3 22.5 65.1", "IPIJI 98.4 98.0 25.3 15.5 46.6 05.3 80.7 06.6 69.2", "JVJRV 51.2 61.6 34.7 81.1 69.1 32.2 42.4 08.0 92.1", "YPKTV 77.5 03.8 62.8 74.7 67.0 11.4 36.6 36.7 78.0", "YQZTG 54.6 82.3 33.0 90.7 62.8 89.3 45.6 25.5 25.3", "BUBJR 73.8 26.1 77.0 76.8 16.8 01.2 69.7 14.9 87.0", "YYRSC 38.4 91.1 81.0 61.1 20.2 34.0 41.3 83.1 83.3", "YFLCO 38.7 49.6 79.2 13.7 15.2 55.7 70.7 21.5 56.8", "UWGKF 96.2 02.1 26.2 55.3 08.1 77.8 74.0 00.7 88.0", "AWUIL 40.2 83.4 56.1 01.1 02.0 72.9 42.1 42.9 42.0", "MWOAN 04.7 30.2 91.5 14.7 54.7 85.1 26.7 45.1 85.9", "BFFOD 39.9 52.0 69.3 08.9 65.7 16.1 93.6 56.6 28.9", "SBHVR 14.0 57.7 60.9 41.6 00.9 82.9 40.4 06.6 88.6", "UXUNQ 63.1 32.9 62.4 78.6 87.6 08.0 04.1 81.1 69.1", "GJYYS 08.1 27.7 43.7 41.5 48.5 28.7 71.5 03.4 96.6"};
    ContestScore* pObj = new ContestScore();
    clock_t start = clock();
    vector<string> result = pObj->sortResults(data);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"GYILG 105 708.1", "ONHHW 121 685.3", "MKIRW 141 644.1", "CLDXG 168 593.2", "QFZER 178 567.2", "DIUZY 179 586.6", "EWXPB 185 519.2", "DHPZV 187 543.8", "EXPMD 188 524.7", "FPYLK 193 544.5", "GNFJS 199 534.1", "YQZTG 206 509.1", "YYRSC 207 533.5", "JVJRV 213 472.4", "HKIAY 215 487.9", "UXUNQ 217 486.9", "ZYWWR 217 474.6", "WBMDE 218 481.3", "IMKDZ 223 480.5", "HVLNM 233 447.4", "ODZPO 233 435.0", "GNXTE 235 462.2", "IPIJI 235 445.6", "UROCH 237 445.9", "BUBJR 237 443.3", "UWGKF 237 428.4", "XHBKA 239 442.5", "EXXDL 240 452.7", "NTKMI 240 432.0", "OTJQH 242 432.4", "YPKTV 244 448.5", "GAAGY 246 429.2", "BFFOD 250 431.0", "MHRQE 250 414.3", "WOVPC 257 420.0", "JPVXS 258 407.9", "MWOAN 259 438.6", "UAFRV 261 410.4", "DCNKG 262 400.8", "SBHVR 265 393.6", "ZNTFB 265 390.2", "GJYYS 267 369.7", "FKZTM 268 385.7", "YFLCO 269 401.1", "SUVWW 270 380.8", "NHFZM 272 375.2", "AWUIL 279 382.7", "FAXGF 280 356.0", "BXWHA 284 394.3", "PQMBK 285 357.3"};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> data = {"SCAU 72.0 02.9 40.0 16.1 90.8 78.7 46.3 80.9 42.5", "MNPI 45.2 67.2 20.4 36.5 48.5 16.3 55.8 55.7 00.2", "STJD 31.5 98.9 10.3 66.8 04.4 33.9 08.7 55.4 75.9", "ECCJ 77.6 66.6 96.9 75.8 99.4 22.3 42.0 08.6 73.5", "VYEE 59.5 47.1 56.2 51.0 42.6 97.9 59.1 59.0 53.7", "CPRJ 01.8 48.1 24.3 77.4 32.2 49.2 00.5 50.5 25.5", "BOSK 05.0 76.1 92.4 80.0 12.3 83.7 83.4 55.2 00.7", "FIJR 19.9 87.0 79.4 71.7 03.0 88.9 64.3 49.5 40.2", "XKEO 37.1 16.1 05.7 77.4 02.6 81.5 77.1 36.6 78.1", "WPRM 46.5 82.8 07.7 06.4 01.0 04.8 71.9 07.7 96.8", "DDJP 33.2 35.2 45.0 43.6 44.8 68.6 49.7 69.7 85.5", "DAFV 98.1 54.6 91.6 54.2 19.0 79.9 39.8 28.5 05.3", "FJIA 24.4 70.0 83.8 38.2 69.4 48.5 79.4 19.1 14.4", "FDAH 07.3 99.5 83.3 33.5 22.2 62.7 52.1 71.3 08.9", "VXOF 71.0 70.6 73.1 26.9 40.1 25.8 07.2 90.7 90.6", "ZKQE 51.8 22.4 17.8 46.7 08.8 33.8 30.0 23.7 35.6", "KNWO 98.1 32.5 59.3 97.2 96.0 49.9 92.1 17.1 72.7", "NWHC 55.5 87.2 39.8 46.0 62.3 24.4 26.5 53.8 25.7", "GJBK 88.9 98.3 27.3 95.6 70.1 94.5 12.2 75.1 12.0", "LIZX 64.4 54.8 01.3 18.9 88.0 74.7 16.2 83.3 18.3", "VAZS 25.9 09.9 02.2 30.4 11.6 05.4 14.6 19.1 37.6", "YXTQ 82.1 01.2 23.7 56.1 87.7 84.3 20.1 50.4 89.3", "IPYB 55.8 56.3 92.0 48.1 27.0 21.6 64.9 24.4 23.7", "LGHO 74.6 23.9 35.9 75.2 14.3 67.1 41.0 65.6 91.3", "KXJY 19.0 54.0 99.9 86.2 00.7 80.8 21.0 19.7 02.2", "KRBI 89.6 43.8 55.8 33.2 56.1 36.1 87.1 98.0 10.3", "FGMP 63.3 27.2 74.2 17.6 83.9 49.0 29.3 37.6 48.1", "PWJG 27.7 56.1 40.5 57.1 61.0 02.2 21.8 79.4 17.5", "AXCG 79.1 47.3 97.8 67.2 20.4 44.7 86.7 55.1 64.8", "KRUQ 80.0 39.5 49.5 26.7 78.4 12.3 00.0 75.3 41.1", "YOZR 15.3 45.8 04.5 42.5 10.9 34.2 55.4 22.7 84.0", "FKHY 59.7 14.7 38.2 80.9 12.8 46.2 13.6 66.3 60.3", "VUFT 48.0 74.7 32.2 14.1 28.2 96.4 20.1 06.6 78.2", "USZQ 21.8 05.8 37.0 63.3 01.5 17.0 69.3 67.9 37.1", "UGOK 63.8 80.6 39.8 92.2 25.7 55.7 16.0 04.2 31.3", "XXGJ 43.4 24.2 63.1 78.3 15.2 70.2 07.4 03.6 44.2", "LIQX 85.9 21.1 07.4 05.9 12.2 83.6 12.0 17.9 71.3", "TFNQ 52.5 04.8 03.3 00.2 42.6 47.4 59.5 76.6 60.9", "TDCJ 58.6 52.5 77.0 07.4 40.1 87.7 49.4 37.0 19.1", "NZNY 46.5 10.2 88.2 87.6 27.9 37.7 98.1 47.4 57.7", "CIVB 43.8 55.0 33.4 43.0 80.2 19.9 29.2 67.8 26.6", "GQXJ 86.7 31.9 87.3 40.6 52.8 64.9 13.3 70.2 96.0", "WCJH 21.5 72.4 81.8 21.4 76.4 60.3 73.6 66.0 64.0", "SXBB 14.6 99.1 70.1 94.5 90.1 72.4 67.2 23.3 80.3", "ELLG 05.2 94.3 67.6 83.3 93.4 67.8 24.1 40.4 50.9", "ZFWH 14.0 10.5 99.2 92.5 87.0 44.0 81.3 31.7 03.9", "JEJR 73.1 06.8 05.0 98.8 05.0 62.2 53.6 06.5 09.4", "HPUA 29.3 55.2 53.4 61.4 88.6 50.9 03.7 01.2 20.9", "FTRI 24.3 72.7 45.2 28.8 16.5 69.4 64.1 86.5 08.4", "VAVD 04.7 98.4 33.8 51.7 69.2 48.8 03.1 81.8 09.5"};
    ContestScore* pObj = new ContestScore();
    clock_t start = clock();
    vector<string> result = pObj->sortResults(data);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"KNWO 143 614.9", "SXBB 143 611.6", "GJBK 158 574.0", "AXCG 166 563.1", "ECCJ 171 562.7", "VYEE 175 526.1", "GQXJ 177 543.7", "ELLG 183 527.0", "WCJH 186 537.4", "KRBI 193 510.0", "FIJR 196 503.9", "NZNY 197 501.3", "BOSK 197 488.8", "YXTQ 199 494.9", "LGHO 201 488.9", "DDJP 201 475.3", "VXOF 202 496.0", "SCAU 205 470.2", "DAFV 208 471.0", "FDAH 223 440.8", "ZFWH 224 464.1", "TDCJ 227 428.8", "FJIA 228 447.2", "IPYB 228 413.8", "LIZX 229 419.9", "FTRI 229 415.9", "FGMP 231 430.2", "NWHC 232 421.2", "UGOK 232 409.3", "XKEO 236 412.2", "VUFT 239 398.5", "FKHY 245 392.7", "KRUQ 248 402.8", "CIVB 248 398.9", "PWJG 250 363.3", "VAVD 252 401.0", "STJD 256 385.8", "KXJY 257 383.5", "HPUA 262 364.6", "TFNQ 264 347.8", "XXGJ 266 349.6", "MNPI 275 345.8", "WPRM 280 325.6", "JEJR 281 320.4", "USZQ 284 320.7", "LIQX 286 317.3", "CPRJ 289 309.5", "YOZR 295 315.3", "ZKQE 307 270.6", "VAZS 363 156.7"};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> data = {"KDWL 12.9 04.5 11.8 48.1 34.3 72.4 85.3 69.9 84.2", "XNVI 67.6 71.1 04.1 52.5 88.8 52.3 37.8 26.9 01.4", "BCRK 36.8 00.1 24.3 79.8 79.6 42.1 81.1 08.1 21.5", "YJMK 22.8 42.9 77.2 68.2 67.1 01.4 03.6 03.7 56.4", "HVGT 82.9 25.8 14.3 82.7 41.0 63.5 76.1 99.0 45.4", "PGMK 08.7 33.8 67.3 41.0 03.1 76.6 62.9 53.9 00.5", "FOBQ 11.3 65.3 24.6 96.7 11.0 09.8 63.7 26.8 46.5", "LKCB 19.3 94.6 41.3 39.2 60.2 79.0 52.9 90.9 38.4", "NCSQ 21.7 18.6 71.1 20.5 92.7 83.9 37.0 57.9 87.5", "RLHI 90.9 30.5 01.8 33.3 25.2 20.1 77.3 26.2 15.7", "QHMA 29.8 59.3 63.2 96.7 34.0 54.3 44.7 72.1 88.1", "YFVZ 58.3 38.8 91.2 09.0 53.0 20.5 66.2 30.4 30.7", "MLMN 15.4 43.2 36.7 57.9 03.1 23.6 01.9 41.5 94.2", "BTEO 83.4 28.9 76.6 24.7 47.8 82.4 95.5 38.0 22.4", "EAPS 00.1 59.2 25.0 71.7 18.5 02.1 97.7 46.9 80.6", "IGHB 31.4 02.6 40.8 11.5 52.2 76.3 84.2 22.4 22.0", "BLDC 06.4 09.2 61.0 84.7 56.9 23.4 29.9 61.3 85.3", "VAEZ 24.9 45.3 16.5 11.2 69.3 04.8 43.7 06.2 82.7", "OGVN 91.3 37.6 63.4 74.8 56.2 70.2 14.1 12.3 26.0", "MFXZ 28.4 75.3 41.7 37.5 93.7 84.1 00.2 34.7 71.9", "RYGT 87.1 74.4 15.3 75.9 88.8 64.0 86.4 21.2 94.1", "PUCI 07.7 71.2 19.5 84.6 64.5 49.5 37.1 78.3 62.5", "REXZ 44.9 27.1 36.8 32.5 97.0 58.7 85.8 56.4 48.1", "BDOD 92.0 19.3 66.1 98.8 07.0 65.9 61.0 27.4 87.5", "TMVW 25.2 54.7 22.1 33.9 40.0 06.9 69.9 08.5 87.0", "SCJQ 40.5 17.2 39.3 74.5 37.7 55.8 34.8 44.5 41.6", "UDDN 92.4 11.6 62.2 57.7 84.4 59.2 95.2 59.0 12.6", "EOLT 73.9 04.7 79.9 46.8 52.4 03.9 10.3 61.3 83.1", "SHTN 16.2 13.9 82.1 50.9 04.6 27.5 49.0 20.4 25.7", "WPUJ 09.5 12.7 26.8 76.9 92.7 11.2 70.5 20.1 45.8", "FITO 40.8 84.5 00.5 98.6 80.4 11.8 11.3 33.4 90.3", "KVGZ 36.7 10.2 10.9 20.5 00.9 23.0 56.3 81.8 71.3", "SYZR 45.0 75.4 17.5 39.2 49.4 84.4 32.7 33.7 26.2", "QRJH 38.3 05.9 12.6 71.9 12.3 18.7 62.6 95.4 14.6", "IRUR 88.9 84.0 28.7 92.6 26.1 37.0 19.6 07.2 13.1", "XKJP 61.8 47.8 88.5 90.3 18.6 67.6 79.5 76.9 11.0", "SPTJ 55.3 14.2 02.9 94.5 35.1 92.0 71.7 69.8 92.9", "AXGJ 61.9 86.1 80.2 95.9 20.3 44.3 38.2 19.0 12.1", "ZTQI 09.3 05.6 06.1 93.0 45.3 89.8 17.0 29.3 51.4", "WSYF 62.6 69.5 67.6 80.6 25.0 07.8 36.1 55.4 36.8", "ZZLG 13.1 84.6 62.2 42.8 80.0 87.1 35.2 91.6 29.6", "DIVK 62.9 67.5 29.7 93.7 75.8 82.9 10.3 23.9 62.5", "GTRS 59.9 16.4 57.3 63.0 68.0 63.1 93.4 26.5 00.1", "ABIS 67.3 94.7 53.0 36.3 97.3 50.7 53.1 91.7 11.0", "GRSY 95.6 91.3 47.6 95.1 92.6 42.3 17.5 08.4 42.4", "UROU 41.8 33.4 90.2 97.3 00.9 42.5 82.2 00.6 42.2", "KTKF 27.7 72.1 74.3 82.6 82.8 46.3 28.5 31.3 93.7", "KBXP 72.0 47.4 33.7 15.6 99.4 48.9 88.6 39.9 35.6", "JSPA 75.6 34.0 78.8 05.4 05.0 65.9 63.5 05.6 32.4"};
    ContestScore* pObj = new ContestScore();
    clock_t start = clock();
    vector<string> result = pObj->sortResults(data);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"RYGT 147 607.2", "QHMA 168 542.2", "BDOD 170 525.0", "XKJP 171 542.0", "ABIS 174 555.1", "SPTJ 177 528.4", "KTKF 178 539.3", "UDDN 178 534.3", "GRSY 180 532.8", "HVGT 184 530.7", "ZZLG 184 526.2", "LKCB 187 515.8", "BTEO 187 499.7", "DIVK 188 509.2", "REXZ 191 487.3", "NCSQ 192 490.9", "KBXP 192 481.1", "MFXZ 198 467.5", "FITO 210 451.6", "PUCI 211 474.9", "AXGJ 213 458.0", "OGVN 220 445.9", "WSYF 220 441.4", "UROU 221 431.1", "GTRS 224 447.7", "SYZR 229 403.5", "YFVZ 233 398.1", "EOLT 235 416.3", "KDWL 237 423.4", "BLDC 240 418.1", "XNVI 242 402.5", "EAPS 246 401.8", "SCJQ 246 385.9", "IRUR 250 397.2", "JSPA 250 366.2", "FOBQ 255 355.7", "WPUJ 260 366.2", "PGMK 264 347.8", "ZTQI 266 346.8", "IGHB 268 343.4", "MLMN 269 317.5", "BCRK 270 373.4", "TMVW 271 348.2", "YJMK 274 343.3", "QRJH 282 332.3", "RLHI 285 321.0", "KVGZ 289 311.6", "SHTN 292 290.3", "VAEZ 293 304.6"};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> data = {"REGTVJWRAK 77.9", "FSSKQNSFWJ 69.8", "TBOJDHNJAL 09.2", "UJUZNBRHMH 44.4", "TNFMLYNBJT 61.0", "LKXKOTVKTK 80.5", "YWQEMJTTVG 72.5", "DDRCIEMFQC 84.9", "TWBIQBGGFS 38.2", "OGFYPKCGMK 38.1", "DDRRQNQRXI 63.2", "ZXHBLVHTTY 93.6", "QJTQAZTUSL 30.6", "GSYLIZIPAW 03.5", "IHUFOKPHDR 60.7", "BKWLQEGPPO 46.6", "PWSALAIHIY 49.5", "XSQVITHGEY 16.9", "CBDCJUYBXL 49.9", "ODNNKMHCJP 71.4", "CRHOIJRNOA 26.4", "HAIMVWRILD 00.2", "DIDWEFPNWX 21.9", "MQVBUCBEQW 85.0", "NOCHWHPAGV 57.6", "FVJVIXLDYF 75.9", "ZZLKFYYJHV 95.5", "ZUGWHMRQHZ 94.0", "OZNPIOPTYW 31.8", "AUZZTAWZWD 10.7", "URKOWYNLQV 27.8", "YDLXLOTMPM 87.4", "LQBBNWSYMQ 02.0", "QXEXQEDBEQ 37.5", "JORWCCPFFC 32.2", "QSBQWRPCPF 78.9", "NKCOPLCHIG 95.2", "TBPTEHNFZK 81.2", "NUXHFMUIBJ 55.6", "DMECYZEPSI 75.3", "WRNNGBIDKP 66.1", "RQTWIYKODI 19.8", "FTZNIXGVLM 25.2", "JKKPKDFDBQ 74.0", "GWSPWZIVOQ 57.8", "GJMBDXLNPV 26.4", "SKEEPMAJCZ 84.6", "XDRUTXDFAH 32.4", "UJNQMHDSNU 69.3", "GQLTNKYGER 40.8"};
    ContestScore* pObj = new ContestScore();
    clock_t start = clock();
    vector<string> result = pObj->sortResults(data);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ZZLKFYYJHV 1 95.5", "NKCOPLCHIG 2 95.2", "ZUGWHMRQHZ 3 94.0", "ZXHBLVHTTY 4 93.6", "YDLXLOTMPM 5 87.4", "MQVBUCBEQW 6 85.0", "DDRCIEMFQC 7 84.9", "SKEEPMAJCZ 8 84.6", "TBPTEHNFZK 9 81.2", "LKXKOTVKTK 10 80.5", "QSBQWRPCPF 11 78.9", "REGTVJWRAK 12 77.9", "FVJVIXLDYF 13 75.9", "DMECYZEPSI 14 75.3", "JKKPKDFDBQ 15 74.0", "YWQEMJTTVG 16 72.5", "ODNNKMHCJP 17 71.4", "FSSKQNSFWJ 18 69.8", "UJNQMHDSNU 19 69.3", "WRNNGBIDKP 20 66.1", "DDRRQNQRXI 21 63.2", "TNFMLYNBJT 22 61.0", "IHUFOKPHDR 23 60.7", "GWSPWZIVOQ 24 57.8", "NOCHWHPAGV 25 57.6", "NUXHFMUIBJ 26 55.6", "CBDCJUYBXL 27 49.9", "PWSALAIHIY 28 49.5", "BKWLQEGPPO 29 46.6", "UJUZNBRHMH 30 44.4", "GQLTNKYGER 31 40.8", "TWBIQBGGFS 32 38.2", "OGFYPKCGMK 33 38.1", "QXEXQEDBEQ 34 37.5", "XDRUTXDFAH 35 32.4", "JORWCCPFFC 36 32.2", "OZNPIOPTYW 37 31.8", "QJTQAZTUSL 38 30.6", "URKOWYNLQV 39 27.8", "CRHOIJRNOA 40 26.4", "GJMBDXLNPV 40 26.4", "FTZNIXGVLM 42 25.2", "DIDWEFPNWX 43 21.9", "RQTWIYKODI 44 19.8", "XSQVITHGEY 45 16.9", "AUZZTAWZWD 46 10.7", "TBOJDHNJAL 47 9.2", "GSYLIZIPAW 48 3.5", "LQBBNWSYMQ 49 2.0", "HAIMVWRILD 50 0.2"};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> data = {"AAAAA 99.9", "BBBBB 99.9", "CCCCC 99.9", "DDDDD 99.8", "EEEEE 99.7", "FFFFF 99.7", "GGGGG 99.6", "HHHHH 99.6", "IIIII 99.6", "JJJJJ 99.6", "KKKKK 99.5", "LLLLL 99.4", "MMMMM 99.3", "NNNNN 99.2", "OOOOO 99.1", "PPPPP 99.1", "QQQQQ 99.1", "RRRRR 99.1", "SSSSS 99.1", "TTTTT 99.1", "UUUUU 99.1", "VVVVV 99.0", "WWWWW 98.9", "XXXXX 98.8", "YYYYY 98.7", "ZAAAA 98.6", "ZBBBB 98.6", "ZCCCC 98.5", "ZDDDD 98.5", "ZEEEE 98.5", "ZFFFF 98.5", "ZGGGG 98.4", "ZHHHH 98.4", "ZIIII 98.3", "ZJJJJ 98.2", "ZKKKK 98.1", "ZLLLL 98.1", "ZMMMM 98.0", "ZNNNN 98.0", "ZOOOO 98.0", "ZPPPP 97.9", "ZQQQQ 97.8", "ZRRRR 97.7", "ZSSSS 97.7", "ZTTTT 97.6", "ZUUUU 97.6", "ZVVVV 97.6", "ZWWWW 97.5", "ZXXXX 97.4", "ZYYYY 97.3"};
    ContestScore* pObj = new ContestScore();
    clock_t start = clock();
    vector<string> result = pObj->sortResults(data);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AAAAA 1 99.9", "BBBBB 1 99.9", "CCCCC 1 99.9", "DDDDD 4 99.8", "EEEEE 5 99.7", "FFFFF 5 99.7", "GGGGG 7 99.6", "HHHHH 7 99.6", "IIIII 7 99.6", "JJJJJ 7 99.6", "KKKKK 11 99.5", "LLLLL 12 99.4", "MMMMM 13 99.3", "NNNNN 14 99.2", "OOOOO 15 99.1", "PPPPP 15 99.1", "QQQQQ 15 99.1", "RRRRR 15 99.1", "SSSSS 15 99.1", "TTTTT 15 99.1", "UUUUU 15 99.1", "VVVVV 22 99.0", "WWWWW 23 98.9", "XXXXX 24 98.8", "YYYYY 25 98.7", "ZAAAA 26 98.6", "ZBBBB 26 98.6", "ZCCCC 28 98.5", "ZDDDD 28 98.5", "ZEEEE 28 98.5", "ZFFFF 28 98.5", "ZGGGG 32 98.4", "ZHHHH 32 98.4", "ZIIII 34 98.3", "ZJJJJ 35 98.2", "ZKKKK 36 98.1", "ZLLLL 36 98.1", "ZMMMM 38 98.0", "ZNNNN 38 98.0", "ZOOOO 38 98.0", "ZPPPP 41 97.9", "ZQQQQ 42 97.8", "ZRRRR 43 97.7", "ZSSSS 43 97.7", "ZTTTT 45 97.6", "ZUUUU 45 97.6", "ZVVVV 45 97.6", "ZWWWW 48 97.5", "ZXXXX 49 97.4", "ZYYYY 50 97.3"};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> data = {};
    ContestScore* pObj = new ContestScore();
    clock_t start = clock();
    vector<string> result = pObj->sortResults(data);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> data = {"A 99.0 99.0 99.0", "B 98.0 98.0 96.0", "C 97.0 98.0 98.0", "D 96.0 96.0 96.0", "F 95.0 95.0 95.0", "E 95.0 95.0 95.0", "G 00.0 00.0 00.0"};
    ContestScore* pObj = new ContestScore();
    clock_t start = clock();
    vector<string> result = pObj->sortResults(data);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A 3 297.0", "C 7 293.0", "B 7 292.0", "D 11 288.0", "E 15 285.0", "F 15 285.0", "G 21 0.0"};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> data = {"STANFORD 85.3 90.1 82.6 84.6 96.6 94.5 87.3 90.3", "MIT 95.5 83.9 80.4 85.5 98.7 98.3 96.7 82.7", "PRINCETON 99.2 79.1 87.6 85.1 93.6 96.4 86.0 90.6", "HARVARD 83.6 92.0 85.5 94.3 97.5 91.5 92.5 83.0", "YALE 99.5 92.6 86.2 82.0 96.4 92.6 84.5 78.6", "COLUMBIA 97.2 87.6 81.7 93.7 88.0 86.3 95.9 89.6", "BROWN 92.2 95.8 92.1 81.5 89.5 87.0 95.5 86.4", "PENN 96.3 80.7 81.2 91.6 85.8 92.2 83.9 87.8", "CORNELL 88.0 83.7 85.0 83.8 99.8 92.1 91.0 88.9"};
    ContestScore* pObj = new ContestScore();
    clock_t start = clock();
    vector<string> result = pObj->sortResults(data);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"PRINCETON 34 717.6", "MIT 36 721.7", "HARVARD 38 719.9", "COLUMBIA 39 720.0", "STANFORD 39 711.3", "YALE 40 712.4", "BROWN 41 720.0", "CORNELL 42 712.3", "PENN 51 699.5"};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> data = {"C 00.3 00.0", "D 00.1 00.2", "A 00.1 00.2", "B 00.3 00.0", "AC 00.6 00.7", "AD 00.5 00.8", "AA 00.5 00.8", "AB 00.6 00.7", "BC 01.3 01.1", "BD 01.2 01.2", "BA 01.2 01.2", "BB 01.3 01.1", "CC 02.1 02.9", "CD 02.4 02.6", "CA 02.4 02.6", "CB 02.1 02.9"};
    ContestScore* pObj = new ContestScore();
    clock_t start = clock();
    vector<string> result = pObj->sortResults(data);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CA 4 5.0", "CB 4 5.0", "CC 4 5.0", "CD 4 5.0", "BA 12 2.4", "BB 12 2.4", "BC 12 2.4", "BD 12 2.4", "AA 20 1.3", "AB 20 1.3", "AC 20 1.3", "AD 20 1.3", "A 28 0.3", "B 28 0.3", "C 28 0.3", "D 28 0.3"};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> data = {"STANFORD 85.3 90.1 82.6 84.6 96.6 94.5 87.3 90.3", "MIT 95.5 83.9 80.4 85.5 98.7 98.3 96.7 82.7", "PRINCETON 99.2 79.1 87.6 85.1 93.6 96.4 86.0 90.6", "HARVARD 83.6 92.0 85.5 94.3 97.5 91.5 92.5 83.0", "YALE 99.5 92.6 86.2 82.0 96.4 92.6 84.5 78.6", "COLUMBIA 97.2 87.6 81.7 93.7 88.0 86.3 95.9 78.6", "BROWN 92.2 95.8 92.1 81.5 89.5 87.0 95.5 86.4", "PENN 88.0 80.7 81.2 91.6 85.8 92.2 83.9 87.8", "CORNELL 88.0 83.7 85.0 00.8 99.8 92.1 91.0 88.9"};
    ContestScore* pObj = new ContestScore();
    clock_t start = clock();
    vector<string> result = pObj->sortResults(data);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"MIT 34 721.7", "PRINCETON 34 717.6", "HARVARD 37 719.9", "BROWN 38 720.0", "YALE 38 712.4", "STANFORD 39 711.3", "CORNELL 42 629.3", "COLUMBIA 44 709.0", "PENN 52 691.2"};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> data = {"A 00.0"};
    ContestScore* pObj = new ContestScore();
    clock_t start = clock();
    vector<string> result = pObj->sortResults(data);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A 1 0.0"};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> data = {"B 11.1 11.1 11.1 11.1", "C 17.3 54.7 33.4 22.4", "D 13.3 11.3 33.3 44.4"};
    ContestScore* pObj = new ContestScore();
    clock_t start = clock();
    vector<string> result = pObj->sortResults(data);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"C 5 127.8", "D 7 102.3", "B 12 44.4"};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> data = {"A 50.0 51.0", "B 60.0 50.0"};
    ContestScore* pObj = new ContestScore();
    clock_t start = clock();
    vector<string> result = pObj->sortResults(data);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"B 3 110.0", "A 3 101.0"};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> data = {"A 90.7 92.9 87.4", "B 11.0 11.0 11.0"};
    ContestScore* pObj = new ContestScore();
    clock_t start = clock();
    vector<string> result = pObj->sortResults(data);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A 3 271.0", "B 6 33.0"};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> data = {"A 10.0", "B 10.0", "C 10.0", "D 09.0", "E 09.0", "F 09.0"};
    ContestScore* pObj = new ContestScore();
    clock_t start = clock();
    vector<string> result = pObj->sortResults(data);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A 1 10.0", "B 1 10.0", "C 1 10.0", "D 4 9.0", "E 4 9.0", "F 4 9.0"};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> data = {"A 80.4", "B 92.0", "C 92.0", "D 95.0"};
    ContestScore* pObj = new ContestScore();
    clock_t start = clock();
    vector<string> result = pObj->sortResults(data);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"D 1 95.0", "B 2 92.0", "C 2 92.0", "A 4 80.4"};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> data = {"A 98.3 97.4 93.2 90.8", "B 99.1 94.7 93.2 98.2", "C 90.9 95.2 90.0 99.1", "D 20.1 21.3 99.0 10.2"};
    ContestScore* pObj = new ContestScore();
    clock_t start = clock();
    vector<string> result = pObj->sortResults(data);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"B 8 385.2", "A 8 379.7", "C 10 375.2", "D 13 150.6"};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> data = {"A 10.0 30.0", "B 20.0 25.0"};
    ContestScore* pObj = new ContestScore();
    clock_t start = clock();
    vector<string> result = pObj->sortResults(data);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"B 3 45.0", "A 3 40.0"};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> data = {"B 10.0", "A 10.0"};
    ContestScore* pObj = new ContestScore();
    clock_t start = clock();
    vector<string> result = pObj->sortResults(data);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A 1 10.0", "B 1 10.0"};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> data = {"D 11.1 11.1 11.1", "C 11.1 11.1 11.1", "B 11.2 11.2 11.2", "A 11.1 11.1 11.1"};
    ContestScore* pObj = new ContestScore();
    clock_t start = clock();
    vector<string> result = pObj->sortResults(data);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"B 3 33.6", "A 6 33.3", "C 6 33.3", "D 6 33.3"};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> data = {"AA 90.0 80.0 70.0 60.0 50.0 40.0", "BBB 80.0 70.0 60.0 50.0 40.0 90.0", "EEE 70.0 60.0 50.0 40.0 90.0 80.0"};
    ContestScore* pObj = new ContestScore();
    clock_t start = clock();
    vector<string> result = pObj->sortResults(data);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AA 9 390.0", "BBB 12 390.0", "EEE 15 390.0"};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=152347&rd=4575&pm=1760
********************************************************************************
#pragma warning( disable : 4786 ) 
 
#include <vector> 
#include <string> 
#include <algorithm> 
#include <cstdio> 
#include <set> 
#include <map> 
#include <functional> 
#include <deque> 
 
using namespace std; 
 
vector< string > tokenize( string in, string kar ) { 
  string::iterator cp = in.begin(); 
  vector< string > oot; 
  while( cp != in.end() ) { 
    while( cp != in.end() && count( kar.begin(), kar.end(), *cp ) ) 
      cp++; 
    if( cp != in.end() ) 
      oot.push_back( string( cp, find_first_of( cp, in.end(), kar.begin(), kar.end() ) ) ); 
    cp = find_first_of( cp, in.end(), kar.begin(), kar.end() ); 
  }; 
  return oot; 
}; 
 
vector< int > sti( const vector< string > &foo ) { 
  int i; 
  vector< int > bar; 
  for( i = 0; i < foo.size(); i++ ) { 
    bar.push_back( atoi( foo[ i ].c_str() ) ); 
  } 
  return bar; 
}; 
 
class ContestScore { 
  public: 
  vector <string> sortResults(vector <string> a) { 
    if( !a.size() ) 
      return vector< string >(); 
    vector< vector< int > > scor; 
    vector< string > nam; 
    for( int i = 0; i < a.size(); i++ ) { 
      vector< string > tok = tokenize( a[ i ], " ." ); 
      vector< int > tik = sti( tok ); 
      nam.push_back( tok[ 0 ] ); 
      vector< int > ts; 
      for( int j = 1; j < tik.size(); j += 2 ) 
        ts.push_back( tik[ j ] * 10 + tik[ j + 1 ] ); 
      scor.push_back( ts ); 
    } 
    vector< int > accu( nam.size() ); 
    vector< int > saccu( nam.size() ); 
    for( int i = 0; i < scor[ 0 ].size(); i++ ) { 
      vector< int > ts; 
      for( int j = 0; j < scor.size(); j++ ) { 
        ts.push_back( scor[ j ][ i ] ); 
        saccu[ j ] += scor[ j ][ i ]; 
      } 
      sort( ts.begin(), ts.end() ); 
      reverse( ts.begin(), ts.end() ); 
      for( int j = 0; j < scor.size(); j++ ) 
        accu[ j ] += find( ts.begin(), ts.end(), scor[ j ][ i ] ) - ts.begin() + 1; 
    } 
    vector< pair< pair< int, int >, string > > skor; 
    for( int i = 0; i < accu.size(); i++ ) 
      skor.push_back( make_pair( make_pair( accu[ i ], -saccu[ i ] ), nam[ i ] ) ); 
    sort( skor.begin(), skor.end() ); 
    vector< string > oot; 
    for( int i = 0; i < skor.size(); i++ ) { 
      char buf[ 128 ]; 
      sprintf( buf, "%s %d %d.%d", skor[ i ].second.c_str(), skor[ i ].first.first, -skor[ i ].first.second / 10, -skor[ i ].first.second % 10 ); 
      oot.push_back( buf ); 
    } 
    return oot; 
  } 
};

********************************************************************************
*******************************************************************************/