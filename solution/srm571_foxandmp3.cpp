/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12436
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

class FoxAndMp3 {
public:
    vector<string> playList(int n);
};

vector<string> FoxAndMp3::playList(int n) {
    vector<string> ret;
    return ret;
}


int test0() {
    int n = 3;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "2.mp3", "3.mp3"};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int n = 10;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "2.mp3", "3.mp3", "4.mp3", "5.mp3", "6.mp3", "7.mp3", "8.mp3", "9.mp3"};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int n = 16;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "11.mp3", "12.mp3", "13.mp3", "14.mp3", "15.mp3", "16.mp3", "2.mp3", "3.mp3", "4.mp3", "5.mp3", "6.mp3", "7.mp3", "8.mp3", "9.mp3"};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int n = 32;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "11.mp3", "12.mp3", "13.mp3", "14.mp3", "15.mp3", "16.mp3", "17.mp3", "18.mp3", "19.mp3", "2.mp3", "20.mp3", "21.mp3", "22.mp3", "23.mp3", "24.mp3", "25.mp3", "26.mp3", "27.mp3", "28.mp3", "29.mp3", "3.mp3", "30.mp3", "31.mp3", "32.mp3", "4.mp3", "5.mp3", "6.mp3", "7.mp3", "8.mp3", "9.mp3"};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int n = 100000009;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "1000.mp3", "10000.mp3", "100000.mp3", "1000000.mp3", "10000000.mp3", "100000000.mp3", "100000001.mp3", "100000002.mp3", "100000003.mp3", "100000004.mp3", "100000005.mp3", "100000006.mp3", "100000007.mp3", "100000008.mp3", "100000009.mp3", "10000001.mp3", "10000002.mp3", "10000003.mp3", "10000004.mp3", "10000005.mp3", "10000006.mp3", "10000007.mp3", "10000008.mp3", "10000009.mp3", "1000001.mp3", "10000010.mp3", "10000011.mp3", "10000012.mp3", "10000013.mp3", "10000014.mp3", "10000015.mp3", "10000016.mp3", "10000017.mp3", "10000018.mp3", "10000019.mp3", "1000002.mp3", "10000020.mp3", "10000021.mp3", "10000022.mp3", "10000023.mp3", "10000024.mp3", "10000025.mp3", "10000026.mp3", "10000027.mp3", "10000028.mp3", "10000029.mp3", "1000003.mp3"};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int n = 1;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3"};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int n = 1000000000;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "1000.mp3", "10000.mp3", "100000.mp3", "1000000.mp3", "10000000.mp3", "100000000.mp3", "1000000000.mp3", "100000001.mp3", "100000002.mp3", "100000003.mp3", "100000004.mp3", "100000005.mp3", "100000006.mp3", "100000007.mp3", "100000008.mp3", "100000009.mp3", "10000001.mp3", "100000010.mp3", "100000011.mp3", "100000012.mp3", "100000013.mp3", "100000014.mp3", "100000015.mp3", "100000016.mp3", "100000017.mp3", "100000018.mp3", "100000019.mp3", "10000002.mp3", "100000020.mp3", "100000021.mp3", "100000022.mp3", "100000023.mp3", "100000024.mp3", "100000025.mp3", "100000026.mp3", "100000027.mp3", "100000028.mp3", "100000029.mp3", "10000003.mp3", "100000030.mp3", "100000031.mp3", "100000032.mp3", "100000033.mp3", "100000034.mp3", "100000035.mp3", "100000036.mp3", "100000037.mp3"};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int n = 126;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "101.mp3", "102.mp3", "103.mp3", "104.mp3", "105.mp3", "106.mp3", "107.mp3", "108.mp3", "109.mp3", "11.mp3", "110.mp3", "111.mp3", "112.mp3", "113.mp3", "114.mp3", "115.mp3", "116.mp3", "117.mp3", "118.mp3", "119.mp3", "12.mp3", "120.mp3", "121.mp3", "122.mp3", "123.mp3", "124.mp3", "125.mp3", "126.mp3", "13.mp3", "14.mp3", "15.mp3", "16.mp3", "17.mp3", "18.mp3", "19.mp3", "2.mp3", "20.mp3", "21.mp3", "22.mp3", "23.mp3", "24.mp3", "25.mp3", "26.mp3", "27.mp3", "28.mp3", "29.mp3", "3.mp3"};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int n = 10000023;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "1000.mp3", "10000.mp3", "100000.mp3", "1000000.mp3", "10000000.mp3", "10000001.mp3", "10000002.mp3", "10000003.mp3", "10000004.mp3", "10000005.mp3", "10000006.mp3", "10000007.mp3", "10000008.mp3", "10000009.mp3", "1000001.mp3", "10000010.mp3", "10000011.mp3", "10000012.mp3", "10000013.mp3", "10000014.mp3", "10000015.mp3", "10000016.mp3", "10000017.mp3", "10000018.mp3", "10000019.mp3", "1000002.mp3", "10000020.mp3", "10000021.mp3", "10000022.mp3", "10000023.mp3", "1000003.mp3", "1000004.mp3", "1000005.mp3", "1000006.mp3", "1000007.mp3", "1000008.mp3", "1000009.mp3", "100001.mp3", "1000010.mp3", "1000011.mp3", "1000012.mp3", "1000013.mp3", "1000014.mp3", "1000015.mp3", "1000016.mp3", "1000017.mp3", "1000018.mp3"};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int n = 435;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "101.mp3", "102.mp3", "103.mp3", "104.mp3", "105.mp3", "106.mp3", "107.mp3", "108.mp3", "109.mp3", "11.mp3", "110.mp3", "111.mp3", "112.mp3", "113.mp3", "114.mp3", "115.mp3", "116.mp3", "117.mp3", "118.mp3", "119.mp3", "12.mp3", "120.mp3", "121.mp3", "122.mp3", "123.mp3", "124.mp3", "125.mp3", "126.mp3", "127.mp3", "128.mp3", "129.mp3", "13.mp3", "130.mp3", "131.mp3", "132.mp3", "133.mp3", "134.mp3", "135.mp3", "136.mp3", "137.mp3", "138.mp3", "139.mp3", "14.mp3", "140.mp3", "141.mp3", "142.mp3", "143.mp3"};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int n = 107;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "101.mp3", "102.mp3", "103.mp3", "104.mp3", "105.mp3", "106.mp3", "107.mp3", "11.mp3", "12.mp3", "13.mp3", "14.mp3", "15.mp3", "16.mp3", "17.mp3", "18.mp3", "19.mp3", "2.mp3", "20.mp3", "21.mp3", "22.mp3", "23.mp3", "24.mp3", "25.mp3", "26.mp3", "27.mp3", "28.mp3", "29.mp3", "3.mp3", "30.mp3", "31.mp3", "32.mp3", "33.mp3", "34.mp3", "35.mp3", "36.mp3", "37.mp3", "38.mp3", "39.mp3", "4.mp3", "40.mp3", "41.mp3", "42.mp3", "43.mp3", "44.mp3", "45.mp3", "46.mp3", "47.mp3"};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int n = 10024;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "1000.mp3", "10000.mp3", "10001.mp3", "10002.mp3", "10003.mp3", "10004.mp3", "10005.mp3", "10006.mp3", "10007.mp3", "10008.mp3", "10009.mp3", "1001.mp3", "10010.mp3", "10011.mp3", "10012.mp3", "10013.mp3", "10014.mp3", "10015.mp3", "10016.mp3", "10017.mp3", "10018.mp3", "10019.mp3", "1002.mp3", "10020.mp3", "10021.mp3", "10022.mp3", "10023.mp3", "10024.mp3", "1003.mp3", "1004.mp3", "1005.mp3", "1006.mp3", "1007.mp3", "1008.mp3", "1009.mp3", "101.mp3", "1010.mp3", "1011.mp3", "1012.mp3", "1013.mp3", "1014.mp3", "1015.mp3", "1016.mp3", "1017.mp3", "1018.mp3", "1019.mp3", "102.mp3"};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int n = 6403;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "1000.mp3", "1001.mp3", "1002.mp3", "1003.mp3", "1004.mp3", "1005.mp3", "1006.mp3", "1007.mp3", "1008.mp3", "1009.mp3", "101.mp3", "1010.mp3", "1011.mp3", "1012.mp3", "1013.mp3", "1014.mp3", "1015.mp3", "1016.mp3", "1017.mp3", "1018.mp3", "1019.mp3", "102.mp3", "1020.mp3", "1021.mp3", "1022.mp3", "1023.mp3", "1024.mp3", "1025.mp3", "1026.mp3", "1027.mp3", "1028.mp3", "1029.mp3", "103.mp3", "1030.mp3", "1031.mp3", "1032.mp3", "1033.mp3", "1034.mp3", "1035.mp3", "1036.mp3", "1037.mp3", "1038.mp3", "1039.mp3", "104.mp3", "1040.mp3", "1041.mp3", "1042.mp3"};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int n = 10042;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "1000.mp3", "10000.mp3", "10001.mp3", "10002.mp3", "10003.mp3", "10004.mp3", "10005.mp3", "10006.mp3", "10007.mp3", "10008.mp3", "10009.mp3", "1001.mp3", "10010.mp3", "10011.mp3", "10012.mp3", "10013.mp3", "10014.mp3", "10015.mp3", "10016.mp3", "10017.mp3", "10018.mp3", "10019.mp3", "1002.mp3", "10020.mp3", "10021.mp3", "10022.mp3", "10023.mp3", "10024.mp3", "10025.mp3", "10026.mp3", "10027.mp3", "10028.mp3", "10029.mp3", "1003.mp3", "10030.mp3", "10031.mp3", "10032.mp3", "10033.mp3", "10034.mp3", "10035.mp3", "10036.mp3", "10037.mp3", "10038.mp3", "10039.mp3", "1004.mp3", "10040.mp3", "10041.mp3"};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int n = 1003;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "1000.mp3", "1001.mp3", "1002.mp3", "1003.mp3", "101.mp3", "102.mp3", "103.mp3", "104.mp3", "105.mp3", "106.mp3", "107.mp3", "108.mp3", "109.mp3", "11.mp3", "110.mp3", "111.mp3", "112.mp3", "113.mp3", "114.mp3", "115.mp3", "116.mp3", "117.mp3", "118.mp3", "119.mp3", "12.mp3", "120.mp3", "121.mp3", "122.mp3", "123.mp3", "124.mp3", "125.mp3", "126.mp3", "127.mp3", "128.mp3", "129.mp3", "13.mp3", "130.mp3", "131.mp3", "132.mp3", "133.mp3", "134.mp3", "135.mp3", "136.mp3", "137.mp3", "138.mp3", "139.mp3", "14.mp3"};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int n = 52108260;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "1000.mp3", "10000.mp3", "100000.mp3", "1000000.mp3", "10000000.mp3", "10000001.mp3", "10000002.mp3", "10000003.mp3", "10000004.mp3", "10000005.mp3", "10000006.mp3", "10000007.mp3", "10000008.mp3", "10000009.mp3", "1000001.mp3", "10000010.mp3", "10000011.mp3", "10000012.mp3", "10000013.mp3", "10000014.mp3", "10000015.mp3", "10000016.mp3", "10000017.mp3", "10000018.mp3", "10000019.mp3", "1000002.mp3", "10000020.mp3", "10000021.mp3", "10000022.mp3", "10000023.mp3", "10000024.mp3", "10000025.mp3", "10000026.mp3", "10000027.mp3", "10000028.mp3", "10000029.mp3", "1000003.mp3", "10000030.mp3", "10000031.mp3", "10000032.mp3", "10000033.mp3", "10000034.mp3", "10000035.mp3", "10000036.mp3", "10000037.mp3", "10000038.mp3", "10000039.mp3"};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int n = 10000020;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "1000.mp3", "10000.mp3", "100000.mp3", "1000000.mp3", "10000000.mp3", "10000001.mp3", "10000002.mp3", "10000003.mp3", "10000004.mp3", "10000005.mp3", "10000006.mp3", "10000007.mp3", "10000008.mp3", "10000009.mp3", "1000001.mp3", "10000010.mp3", "10000011.mp3", "10000012.mp3", "10000013.mp3", "10000014.mp3", "10000015.mp3", "10000016.mp3", "10000017.mp3", "10000018.mp3", "10000019.mp3", "1000002.mp3", "10000020.mp3", "1000003.mp3", "1000004.mp3", "1000005.mp3", "1000006.mp3", "1000007.mp3", "1000008.mp3", "1000009.mp3", "100001.mp3", "1000010.mp3", "1000011.mp3", "1000012.mp3", "1000013.mp3", "1000014.mp3", "1000015.mp3", "1000016.mp3", "1000017.mp3", "1000018.mp3", "1000019.mp3", "100002.mp3", "1000020.mp3"};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int n = 167;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "101.mp3", "102.mp3", "103.mp3", "104.mp3", "105.mp3", "106.mp3", "107.mp3", "108.mp3", "109.mp3", "11.mp3", "110.mp3", "111.mp3", "112.mp3", "113.mp3", "114.mp3", "115.mp3", "116.mp3", "117.mp3", "118.mp3", "119.mp3", "12.mp3", "120.mp3", "121.mp3", "122.mp3", "123.mp3", "124.mp3", "125.mp3", "126.mp3", "127.mp3", "128.mp3", "129.mp3", "13.mp3", "130.mp3", "131.mp3", "132.mp3", "133.mp3", "134.mp3", "135.mp3", "136.mp3", "137.mp3", "138.mp3", "139.mp3", "14.mp3", "140.mp3", "141.mp3", "142.mp3", "143.mp3"};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int n = 100000019;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "1000.mp3", "10000.mp3", "100000.mp3", "1000000.mp3", "10000000.mp3", "100000000.mp3", "100000001.mp3", "100000002.mp3", "100000003.mp3", "100000004.mp3", "100000005.mp3", "100000006.mp3", "100000007.mp3", "100000008.mp3", "100000009.mp3", "10000001.mp3", "100000010.mp3", "100000011.mp3", "100000012.mp3", "100000013.mp3", "100000014.mp3", "100000015.mp3", "100000016.mp3", "100000017.mp3", "100000018.mp3", "100000019.mp3", "10000002.mp3", "10000003.mp3", "10000004.mp3", "10000005.mp3", "10000006.mp3", "10000007.mp3", "10000008.mp3", "10000009.mp3", "1000001.mp3", "10000010.mp3", "10000011.mp3", "10000012.mp3", "10000013.mp3", "10000014.mp3", "10000015.mp3", "10000016.mp3", "10000017.mp3", "10000018.mp3", "10000019.mp3", "1000002.mp3", "10000020.mp3"};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int n = 959;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "101.mp3", "102.mp3", "103.mp3", "104.mp3", "105.mp3", "106.mp3", "107.mp3", "108.mp3", "109.mp3", "11.mp3", "110.mp3", "111.mp3", "112.mp3", "113.mp3", "114.mp3", "115.mp3", "116.mp3", "117.mp3", "118.mp3", "119.mp3", "12.mp3", "120.mp3", "121.mp3", "122.mp3", "123.mp3", "124.mp3", "125.mp3", "126.mp3", "127.mp3", "128.mp3", "129.mp3", "13.mp3", "130.mp3", "131.mp3", "132.mp3", "133.mp3", "134.mp3", "135.mp3", "136.mp3", "137.mp3", "138.mp3", "139.mp3", "14.mp3", "140.mp3", "141.mp3", "142.mp3", "143.mp3"};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int n = 4;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "2.mp3", "3.mp3", "4.mp3"};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int n = 14;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "11.mp3", "12.mp3", "13.mp3", "14.mp3", "2.mp3", "3.mp3", "4.mp3", "5.mp3", "6.mp3", "7.mp3", "8.mp3", "9.mp3"};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int n = 183006;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "1000.mp3", "10000.mp3", "100000.mp3", "100001.mp3", "100002.mp3", "100003.mp3", "100004.mp3", "100005.mp3", "100006.mp3", "100007.mp3", "100008.mp3", "100009.mp3", "10001.mp3", "100010.mp3", "100011.mp3", "100012.mp3", "100013.mp3", "100014.mp3", "100015.mp3", "100016.mp3", "100017.mp3", "100018.mp3", "100019.mp3", "10002.mp3", "100020.mp3", "100021.mp3", "100022.mp3", "100023.mp3", "100024.mp3", "100025.mp3", "100026.mp3", "100027.mp3", "100028.mp3", "100029.mp3", "10003.mp3", "100030.mp3", "100031.mp3", "100032.mp3", "100033.mp3", "100034.mp3", "100035.mp3", "100036.mp3", "100037.mp3", "100038.mp3", "100039.mp3", "10004.mp3", "100040.mp3"};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int n = 7936;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "1000.mp3", "1001.mp3", "1002.mp3", "1003.mp3", "1004.mp3", "1005.mp3", "1006.mp3", "1007.mp3", "1008.mp3", "1009.mp3", "101.mp3", "1010.mp3", "1011.mp3", "1012.mp3", "1013.mp3", "1014.mp3", "1015.mp3", "1016.mp3", "1017.mp3", "1018.mp3", "1019.mp3", "102.mp3", "1020.mp3", "1021.mp3", "1022.mp3", "1023.mp3", "1024.mp3", "1025.mp3", "1026.mp3", "1027.mp3", "1028.mp3", "1029.mp3", "103.mp3", "1030.mp3", "1031.mp3", "1032.mp3", "1033.mp3", "1034.mp3", "1035.mp3", "1036.mp3", "1037.mp3", "1038.mp3", "1039.mp3", "104.mp3", "1040.mp3", "1041.mp3", "1042.mp3"};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int n = 10000028;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "1000.mp3", "10000.mp3", "100000.mp3", "1000000.mp3", "10000000.mp3", "10000001.mp3", "10000002.mp3", "10000003.mp3", "10000004.mp3", "10000005.mp3", "10000006.mp3", "10000007.mp3", "10000008.mp3", "10000009.mp3", "1000001.mp3", "10000010.mp3", "10000011.mp3", "10000012.mp3", "10000013.mp3", "10000014.mp3", "10000015.mp3", "10000016.mp3", "10000017.mp3", "10000018.mp3", "10000019.mp3", "1000002.mp3", "10000020.mp3", "10000021.mp3", "10000022.mp3", "10000023.mp3", "10000024.mp3", "10000025.mp3", "10000026.mp3", "10000027.mp3", "10000028.mp3", "1000003.mp3", "1000004.mp3", "1000005.mp3", "1000006.mp3", "1000007.mp3", "1000008.mp3", "1000009.mp3", "100001.mp3", "1000010.mp3", "1000011.mp3", "1000012.mp3", "1000013.mp3"};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int n = 100017;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "1000.mp3", "10000.mp3", "100000.mp3", "100001.mp3", "100002.mp3", "100003.mp3", "100004.mp3", "100005.mp3", "100006.mp3", "100007.mp3", "100008.mp3", "100009.mp3", "10001.mp3", "100010.mp3", "100011.mp3", "100012.mp3", "100013.mp3", "100014.mp3", "100015.mp3", "100016.mp3", "100017.mp3", "10002.mp3", "10003.mp3", "10004.mp3", "10005.mp3", "10006.mp3", "10007.mp3", "10008.mp3", "10009.mp3", "1001.mp3", "10010.mp3", "10011.mp3", "10012.mp3", "10013.mp3", "10014.mp3", "10015.mp3", "10016.mp3", "10017.mp3", "10018.mp3", "10019.mp3", "1002.mp3", "10020.mp3", "10021.mp3", "10022.mp3", "10023.mp3", "10024.mp3", "10025.mp3"};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int n = 100000006;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "1000.mp3", "10000.mp3", "100000.mp3", "1000000.mp3", "10000000.mp3", "100000000.mp3", "100000001.mp3", "100000002.mp3", "100000003.mp3", "100000004.mp3", "100000005.mp3", "100000006.mp3", "10000001.mp3", "10000002.mp3", "10000003.mp3", "10000004.mp3", "10000005.mp3", "10000006.mp3", "10000007.mp3", "10000008.mp3", "10000009.mp3", "1000001.mp3", "10000010.mp3", "10000011.mp3", "10000012.mp3", "10000013.mp3", "10000014.mp3", "10000015.mp3", "10000016.mp3", "10000017.mp3", "10000018.mp3", "10000019.mp3", "1000002.mp3", "10000020.mp3", "10000021.mp3", "10000022.mp3", "10000023.mp3", "10000024.mp3", "10000025.mp3", "10000026.mp3", "10000027.mp3", "10000028.mp3", "10000029.mp3", "1000003.mp3", "10000030.mp3", "10000031.mp3", "10000032.mp3"};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int n = 8346;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "1000.mp3", "1001.mp3", "1002.mp3", "1003.mp3", "1004.mp3", "1005.mp3", "1006.mp3", "1007.mp3", "1008.mp3", "1009.mp3", "101.mp3", "1010.mp3", "1011.mp3", "1012.mp3", "1013.mp3", "1014.mp3", "1015.mp3", "1016.mp3", "1017.mp3", "1018.mp3", "1019.mp3", "102.mp3", "1020.mp3", "1021.mp3", "1022.mp3", "1023.mp3", "1024.mp3", "1025.mp3", "1026.mp3", "1027.mp3", "1028.mp3", "1029.mp3", "103.mp3", "1030.mp3", "1031.mp3", "1032.mp3", "1033.mp3", "1034.mp3", "1035.mp3", "1036.mp3", "1037.mp3", "1038.mp3", "1039.mp3", "104.mp3", "1040.mp3", "1041.mp3", "1042.mp3"};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int n = 6;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "2.mp3", "3.mp3", "4.mp3", "5.mp3", "6.mp3"};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int n = 9242884;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "1000.mp3", "10000.mp3", "100000.mp3", "1000000.mp3", "1000001.mp3", "1000002.mp3", "1000003.mp3", "1000004.mp3", "1000005.mp3", "1000006.mp3", "1000007.mp3", "1000008.mp3", "1000009.mp3", "100001.mp3", "1000010.mp3", "1000011.mp3", "1000012.mp3", "1000013.mp3", "1000014.mp3", "1000015.mp3", "1000016.mp3", "1000017.mp3", "1000018.mp3", "1000019.mp3", "100002.mp3", "1000020.mp3", "1000021.mp3", "1000022.mp3", "1000023.mp3", "1000024.mp3", "1000025.mp3", "1000026.mp3", "1000027.mp3", "1000028.mp3", "1000029.mp3", "100003.mp3", "1000030.mp3", "1000031.mp3", "1000032.mp3", "1000033.mp3", "1000034.mp3", "1000035.mp3", "1000036.mp3", "1000037.mp3", "1000038.mp3", "1000039.mp3", "100004.mp3"};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int n = 1009;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "1000.mp3", "1001.mp3", "1002.mp3", "1003.mp3", "1004.mp3", "1005.mp3", "1006.mp3", "1007.mp3", "1008.mp3", "1009.mp3", "101.mp3", "102.mp3", "103.mp3", "104.mp3", "105.mp3", "106.mp3", "107.mp3", "108.mp3", "109.mp3", "11.mp3", "110.mp3", "111.mp3", "112.mp3", "113.mp3", "114.mp3", "115.mp3", "116.mp3", "117.mp3", "118.mp3", "119.mp3", "12.mp3", "120.mp3", "121.mp3", "122.mp3", "123.mp3", "124.mp3", "125.mp3", "126.mp3", "127.mp3", "128.mp3", "129.mp3", "13.mp3", "130.mp3", "131.mp3", "132.mp3", "133.mp3", "134.mp3"};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int n = 13;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "11.mp3", "12.mp3", "13.mp3", "2.mp3", "3.mp3", "4.mp3", "5.mp3", "6.mp3", "7.mp3", "8.mp3", "9.mp3"};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int n = 7;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "2.mp3", "3.mp3", "4.mp3", "5.mp3", "6.mp3", "7.mp3"};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int n = 3;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "2.mp3", "3.mp3"};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int n = 1307;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "1000.mp3", "1001.mp3", "1002.mp3", "1003.mp3", "1004.mp3", "1005.mp3", "1006.mp3", "1007.mp3", "1008.mp3", "1009.mp3", "101.mp3", "1010.mp3", "1011.mp3", "1012.mp3", "1013.mp3", "1014.mp3", "1015.mp3", "1016.mp3", "1017.mp3", "1018.mp3", "1019.mp3", "102.mp3", "1020.mp3", "1021.mp3", "1022.mp3", "1023.mp3", "1024.mp3", "1025.mp3", "1026.mp3", "1027.mp3", "1028.mp3", "1029.mp3", "103.mp3", "1030.mp3", "1031.mp3", "1032.mp3", "1033.mp3", "1034.mp3", "1035.mp3", "1036.mp3", "1037.mp3", "1038.mp3", "1039.mp3", "104.mp3", "1040.mp3", "1041.mp3", "1042.mp3"};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int n = 1000021;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "1000.mp3", "10000.mp3", "100000.mp3", "1000000.mp3", "1000001.mp3", "1000002.mp3", "1000003.mp3", "1000004.mp3", "1000005.mp3", "1000006.mp3", "1000007.mp3", "1000008.mp3", "1000009.mp3", "100001.mp3", "1000010.mp3", "1000011.mp3", "1000012.mp3", "1000013.mp3", "1000014.mp3", "1000015.mp3", "1000016.mp3", "1000017.mp3", "1000018.mp3", "1000019.mp3", "100002.mp3", "1000020.mp3", "1000021.mp3", "100003.mp3", "100004.mp3", "100005.mp3", "100006.mp3", "100007.mp3", "100008.mp3", "100009.mp3", "10001.mp3", "100010.mp3", "100011.mp3", "100012.mp3", "100013.mp3", "100014.mp3", "100015.mp3", "100016.mp3", "100017.mp3", "100018.mp3", "100019.mp3", "10002.mp3", "100020.mp3"};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int n = 57;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "11.mp3", "12.mp3", "13.mp3", "14.mp3", "15.mp3", "16.mp3", "17.mp3", "18.mp3", "19.mp3", "2.mp3", "20.mp3", "21.mp3", "22.mp3", "23.mp3", "24.mp3", "25.mp3", "26.mp3", "27.mp3", "28.mp3", "29.mp3", "3.mp3", "30.mp3", "31.mp3", "32.mp3", "33.mp3", "34.mp3", "35.mp3", "36.mp3", "37.mp3", "38.mp3", "39.mp3", "4.mp3", "40.mp3", "41.mp3", "42.mp3", "43.mp3", "44.mp3", "45.mp3", "46.mp3", "47.mp3", "48.mp3", "49.mp3", "5.mp3", "50.mp3", "51.mp3", "52.mp3", "53.mp3", "54.mp3"};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int n = 79965;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "1000.mp3", "10000.mp3", "10001.mp3", "10002.mp3", "10003.mp3", "10004.mp3", "10005.mp3", "10006.mp3", "10007.mp3", "10008.mp3", "10009.mp3", "1001.mp3", "10010.mp3", "10011.mp3", "10012.mp3", "10013.mp3", "10014.mp3", "10015.mp3", "10016.mp3", "10017.mp3", "10018.mp3", "10019.mp3", "1002.mp3", "10020.mp3", "10021.mp3", "10022.mp3", "10023.mp3", "10024.mp3", "10025.mp3", "10026.mp3", "10027.mp3", "10028.mp3", "10029.mp3", "1003.mp3", "10030.mp3", "10031.mp3", "10032.mp3", "10033.mp3", "10034.mp3", "10035.mp3", "10036.mp3", "10037.mp3", "10038.mp3", "10039.mp3", "1004.mp3", "10040.mp3", "10041.mp3"};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int n = 5765975;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "1000.mp3", "10000.mp3", "100000.mp3", "1000000.mp3", "1000001.mp3", "1000002.mp3", "1000003.mp3", "1000004.mp3", "1000005.mp3", "1000006.mp3", "1000007.mp3", "1000008.mp3", "1000009.mp3", "100001.mp3", "1000010.mp3", "1000011.mp3", "1000012.mp3", "1000013.mp3", "1000014.mp3", "1000015.mp3", "1000016.mp3", "1000017.mp3", "1000018.mp3", "1000019.mp3", "100002.mp3", "1000020.mp3", "1000021.mp3", "1000022.mp3", "1000023.mp3", "1000024.mp3", "1000025.mp3", "1000026.mp3", "1000027.mp3", "1000028.mp3", "1000029.mp3", "100003.mp3", "1000030.mp3", "1000031.mp3", "1000032.mp3", "1000033.mp3", "1000034.mp3", "1000035.mp3", "1000036.mp3", "1000037.mp3", "1000038.mp3", "1000039.mp3", "100004.mp3"};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int n = 72;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "11.mp3", "12.mp3", "13.mp3", "14.mp3", "15.mp3", "16.mp3", "17.mp3", "18.mp3", "19.mp3", "2.mp3", "20.mp3", "21.mp3", "22.mp3", "23.mp3", "24.mp3", "25.mp3", "26.mp3", "27.mp3", "28.mp3", "29.mp3", "3.mp3", "30.mp3", "31.mp3", "32.mp3", "33.mp3", "34.mp3", "35.mp3", "36.mp3", "37.mp3", "38.mp3", "39.mp3", "4.mp3", "40.mp3", "41.mp3", "42.mp3", "43.mp3", "44.mp3", "45.mp3", "46.mp3", "47.mp3", "48.mp3", "49.mp3", "5.mp3", "50.mp3", "51.mp3", "52.mp3", "53.mp3", "54.mp3"};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int n = 110;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "101.mp3", "102.mp3", "103.mp3", "104.mp3", "105.mp3", "106.mp3", "107.mp3", "108.mp3", "109.mp3", "11.mp3", "110.mp3", "12.mp3", "13.mp3", "14.mp3", "15.mp3", "16.mp3", "17.mp3", "18.mp3", "19.mp3", "2.mp3", "20.mp3", "21.mp3", "22.mp3", "23.mp3", "24.mp3", "25.mp3", "26.mp3", "27.mp3", "28.mp3", "29.mp3", "3.mp3", "30.mp3", "31.mp3", "32.mp3", "33.mp3", "34.mp3", "35.mp3", "36.mp3", "37.mp3", "38.mp3", "39.mp3", "4.mp3", "40.mp3", "41.mp3", "42.mp3", "43.mp3", "44.mp3"};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int n = 3011149;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "1000.mp3", "10000.mp3", "100000.mp3", "1000000.mp3", "1000001.mp3", "1000002.mp3", "1000003.mp3", "1000004.mp3", "1000005.mp3", "1000006.mp3", "1000007.mp3", "1000008.mp3", "1000009.mp3", "100001.mp3", "1000010.mp3", "1000011.mp3", "1000012.mp3", "1000013.mp3", "1000014.mp3", "1000015.mp3", "1000016.mp3", "1000017.mp3", "1000018.mp3", "1000019.mp3", "100002.mp3", "1000020.mp3", "1000021.mp3", "1000022.mp3", "1000023.mp3", "1000024.mp3", "1000025.mp3", "1000026.mp3", "1000027.mp3", "1000028.mp3", "1000029.mp3", "100003.mp3", "1000030.mp3", "1000031.mp3", "1000032.mp3", "1000033.mp3", "1000034.mp3", "1000035.mp3", "1000036.mp3", "1000037.mp3", "1000038.mp3", "1000039.mp3", "100004.mp3"};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int n = 10001;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "1000.mp3", "10000.mp3", "10001.mp3", "1001.mp3", "1002.mp3", "1003.mp3", "1004.mp3", "1005.mp3", "1006.mp3", "1007.mp3", "1008.mp3", "1009.mp3", "101.mp3", "1010.mp3", "1011.mp3", "1012.mp3", "1013.mp3", "1014.mp3", "1015.mp3", "1016.mp3", "1017.mp3", "1018.mp3", "1019.mp3", "102.mp3", "1020.mp3", "1021.mp3", "1022.mp3", "1023.mp3", "1024.mp3", "1025.mp3", "1026.mp3", "1027.mp3", "1028.mp3", "1029.mp3", "103.mp3", "1030.mp3", "1031.mp3", "1032.mp3", "1033.mp3", "1034.mp3", "1035.mp3", "1036.mp3", "1037.mp3", "1038.mp3", "1039.mp3", "104.mp3", "1040.mp3"};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int n = 37661721;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "1000.mp3", "10000.mp3", "100000.mp3", "1000000.mp3", "10000000.mp3", "10000001.mp3", "10000002.mp3", "10000003.mp3", "10000004.mp3", "10000005.mp3", "10000006.mp3", "10000007.mp3", "10000008.mp3", "10000009.mp3", "1000001.mp3", "10000010.mp3", "10000011.mp3", "10000012.mp3", "10000013.mp3", "10000014.mp3", "10000015.mp3", "10000016.mp3", "10000017.mp3", "10000018.mp3", "10000019.mp3", "1000002.mp3", "10000020.mp3", "10000021.mp3", "10000022.mp3", "10000023.mp3", "10000024.mp3", "10000025.mp3", "10000026.mp3", "10000027.mp3", "10000028.mp3", "10000029.mp3", "1000003.mp3", "10000030.mp3", "10000031.mp3", "10000032.mp3", "10000033.mp3", "10000034.mp3", "10000035.mp3", "10000036.mp3", "10000037.mp3", "10000038.mp3", "10000039.mp3"};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int n = 1012;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "1000.mp3", "1001.mp3", "1002.mp3", "1003.mp3", "1004.mp3", "1005.mp3", "1006.mp3", "1007.mp3", "1008.mp3", "1009.mp3", "101.mp3", "1010.mp3", "1011.mp3", "1012.mp3", "102.mp3", "103.mp3", "104.mp3", "105.mp3", "106.mp3", "107.mp3", "108.mp3", "109.mp3", "11.mp3", "110.mp3", "111.mp3", "112.mp3", "113.mp3", "114.mp3", "115.mp3", "116.mp3", "117.mp3", "118.mp3", "119.mp3", "12.mp3", "120.mp3", "121.mp3", "122.mp3", "123.mp3", "124.mp3", "125.mp3", "126.mp3", "127.mp3", "128.mp3", "129.mp3", "13.mp3", "130.mp3", "131.mp3"};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int n = 148;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "101.mp3", "102.mp3", "103.mp3", "104.mp3", "105.mp3", "106.mp3", "107.mp3", "108.mp3", "109.mp3", "11.mp3", "110.mp3", "111.mp3", "112.mp3", "113.mp3", "114.mp3", "115.mp3", "116.mp3", "117.mp3", "118.mp3", "119.mp3", "12.mp3", "120.mp3", "121.mp3", "122.mp3", "123.mp3", "124.mp3", "125.mp3", "126.mp3", "127.mp3", "128.mp3", "129.mp3", "13.mp3", "130.mp3", "131.mp3", "132.mp3", "133.mp3", "134.mp3", "135.mp3", "136.mp3", "137.mp3", "138.mp3", "139.mp3", "14.mp3", "140.mp3", "141.mp3", "142.mp3", "143.mp3"};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int n = 36;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "11.mp3", "12.mp3", "13.mp3", "14.mp3", "15.mp3", "16.mp3", "17.mp3", "18.mp3", "19.mp3", "2.mp3", "20.mp3", "21.mp3", "22.mp3", "23.mp3", "24.mp3", "25.mp3", "26.mp3", "27.mp3", "28.mp3", "29.mp3", "3.mp3", "30.mp3", "31.mp3", "32.mp3", "33.mp3", "34.mp3", "35.mp3", "36.mp3", "4.mp3", "5.mp3", "6.mp3", "7.mp3", "8.mp3", "9.mp3"};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int n = 56;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "11.mp3", "12.mp3", "13.mp3", "14.mp3", "15.mp3", "16.mp3", "17.mp3", "18.mp3", "19.mp3", "2.mp3", "20.mp3", "21.mp3", "22.mp3", "23.mp3", "24.mp3", "25.mp3", "26.mp3", "27.mp3", "28.mp3", "29.mp3", "3.mp3", "30.mp3", "31.mp3", "32.mp3", "33.mp3", "34.mp3", "35.mp3", "36.mp3", "37.mp3", "38.mp3", "39.mp3", "4.mp3", "40.mp3", "41.mp3", "42.mp3", "43.mp3", "44.mp3", "45.mp3", "46.mp3", "47.mp3", "48.mp3", "49.mp3", "5.mp3", "50.mp3", "51.mp3", "52.mp3", "53.mp3", "54.mp3"};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int n = 52;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "11.mp3", "12.mp3", "13.mp3", "14.mp3", "15.mp3", "16.mp3", "17.mp3", "18.mp3", "19.mp3", "2.mp3", "20.mp3", "21.mp3", "22.mp3", "23.mp3", "24.mp3", "25.mp3", "26.mp3", "27.mp3", "28.mp3", "29.mp3", "3.mp3", "30.mp3", "31.mp3", "32.mp3", "33.mp3", "34.mp3", "35.mp3", "36.mp3", "37.mp3", "38.mp3", "39.mp3", "4.mp3", "40.mp3", "41.mp3", "42.mp3", "43.mp3", "44.mp3", "45.mp3", "46.mp3", "47.mp3", "48.mp3", "49.mp3", "5.mp3", "50.mp3", "51.mp3", "52.mp3", "6.mp3", "7.mp3"};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int n = 10009;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "1000.mp3", "10000.mp3", "10001.mp3", "10002.mp3", "10003.mp3", "10004.mp3", "10005.mp3", "10006.mp3", "10007.mp3", "10008.mp3", "10009.mp3", "1001.mp3", "1002.mp3", "1003.mp3", "1004.mp3", "1005.mp3", "1006.mp3", "1007.mp3", "1008.mp3", "1009.mp3", "101.mp3", "1010.mp3", "1011.mp3", "1012.mp3", "1013.mp3", "1014.mp3", "1015.mp3", "1016.mp3", "1017.mp3", "1018.mp3", "1019.mp3", "102.mp3", "1020.mp3", "1021.mp3", "1022.mp3", "1023.mp3", "1024.mp3", "1025.mp3", "1026.mp3", "1027.mp3", "1028.mp3", "1029.mp3", "103.mp3", "1030.mp3", "1031.mp3", "1032.mp3", "1033.mp3"};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int n = 9794283;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "1000.mp3", "10000.mp3", "100000.mp3", "1000000.mp3", "1000001.mp3", "1000002.mp3", "1000003.mp3", "1000004.mp3", "1000005.mp3", "1000006.mp3", "1000007.mp3", "1000008.mp3", "1000009.mp3", "100001.mp3", "1000010.mp3", "1000011.mp3", "1000012.mp3", "1000013.mp3", "1000014.mp3", "1000015.mp3", "1000016.mp3", "1000017.mp3", "1000018.mp3", "1000019.mp3", "100002.mp3", "1000020.mp3", "1000021.mp3", "1000022.mp3", "1000023.mp3", "1000024.mp3", "1000025.mp3", "1000026.mp3", "1000027.mp3", "1000028.mp3", "1000029.mp3", "100003.mp3", "1000030.mp3", "1000031.mp3", "1000032.mp3", "1000033.mp3", "1000034.mp3", "1000035.mp3", "1000036.mp3", "1000037.mp3", "1000038.mp3", "1000039.mp3", "100004.mp3"};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int n = 78875660;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "1000.mp3", "10000.mp3", "100000.mp3", "1000000.mp3", "10000000.mp3", "10000001.mp3", "10000002.mp3", "10000003.mp3", "10000004.mp3", "10000005.mp3", "10000006.mp3", "10000007.mp3", "10000008.mp3", "10000009.mp3", "1000001.mp3", "10000010.mp3", "10000011.mp3", "10000012.mp3", "10000013.mp3", "10000014.mp3", "10000015.mp3", "10000016.mp3", "10000017.mp3", "10000018.mp3", "10000019.mp3", "1000002.mp3", "10000020.mp3", "10000021.mp3", "10000022.mp3", "10000023.mp3", "10000024.mp3", "10000025.mp3", "10000026.mp3", "10000027.mp3", "10000028.mp3", "10000029.mp3", "1000003.mp3", "10000030.mp3", "10000031.mp3", "10000032.mp3", "10000033.mp3", "10000034.mp3", "10000035.mp3", "10000036.mp3", "10000037.mp3", "10000038.mp3", "10000039.mp3"};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int n = 1008;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "1000.mp3", "1001.mp3", "1002.mp3", "1003.mp3", "1004.mp3", "1005.mp3", "1006.mp3", "1007.mp3", "1008.mp3", "101.mp3", "102.mp3", "103.mp3", "104.mp3", "105.mp3", "106.mp3", "107.mp3", "108.mp3", "109.mp3", "11.mp3", "110.mp3", "111.mp3", "112.mp3", "113.mp3", "114.mp3", "115.mp3", "116.mp3", "117.mp3", "118.mp3", "119.mp3", "12.mp3", "120.mp3", "121.mp3", "122.mp3", "123.mp3", "124.mp3", "125.mp3", "126.mp3", "127.mp3", "128.mp3", "129.mp3", "13.mp3", "130.mp3", "131.mp3", "132.mp3", "133.mp3", "134.mp3", "135.mp3"};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int n = 4434802;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "1000.mp3", "10000.mp3", "100000.mp3", "1000000.mp3", "1000001.mp3", "1000002.mp3", "1000003.mp3", "1000004.mp3", "1000005.mp3", "1000006.mp3", "1000007.mp3", "1000008.mp3", "1000009.mp3", "100001.mp3", "1000010.mp3", "1000011.mp3", "1000012.mp3", "1000013.mp3", "1000014.mp3", "1000015.mp3", "1000016.mp3", "1000017.mp3", "1000018.mp3", "1000019.mp3", "100002.mp3", "1000020.mp3", "1000021.mp3", "1000022.mp3", "1000023.mp3", "1000024.mp3", "1000025.mp3", "1000026.mp3", "1000027.mp3", "1000028.mp3", "1000029.mp3", "100003.mp3", "1000030.mp3", "1000031.mp3", "1000032.mp3", "1000033.mp3", "1000034.mp3", "1000035.mp3", "1000036.mp3", "1000037.mp3", "1000038.mp3", "1000039.mp3", "100004.mp3"};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int n = 10000007;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "1000.mp3", "10000.mp3", "100000.mp3", "1000000.mp3", "10000000.mp3", "10000001.mp3", "10000002.mp3", "10000003.mp3", "10000004.mp3", "10000005.mp3", "10000006.mp3", "10000007.mp3", "1000001.mp3", "1000002.mp3", "1000003.mp3", "1000004.mp3", "1000005.mp3", "1000006.mp3", "1000007.mp3", "1000008.mp3", "1000009.mp3", "100001.mp3", "1000010.mp3", "1000011.mp3", "1000012.mp3", "1000013.mp3", "1000014.mp3", "1000015.mp3", "1000016.mp3", "1000017.mp3", "1000018.mp3", "1000019.mp3", "100002.mp3", "1000020.mp3", "1000021.mp3", "1000022.mp3", "1000023.mp3", "1000024.mp3", "1000025.mp3", "1000026.mp3", "1000027.mp3", "1000028.mp3", "1000029.mp3", "100003.mp3", "1000030.mp3", "1000031.mp3", "1000032.mp3"};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int n = 600;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "101.mp3", "102.mp3", "103.mp3", "104.mp3", "105.mp3", "106.mp3", "107.mp3", "108.mp3", "109.mp3", "11.mp3", "110.mp3", "111.mp3", "112.mp3", "113.mp3", "114.mp3", "115.mp3", "116.mp3", "117.mp3", "118.mp3", "119.mp3", "12.mp3", "120.mp3", "121.mp3", "122.mp3", "123.mp3", "124.mp3", "125.mp3", "126.mp3", "127.mp3", "128.mp3", "129.mp3", "13.mp3", "130.mp3", "131.mp3", "132.mp3", "133.mp3", "134.mp3", "135.mp3", "136.mp3", "137.mp3", "138.mp3", "139.mp3", "14.mp3", "140.mp3", "141.mp3", "142.mp3", "143.mp3"};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int n = 928709858;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "1000.mp3", "10000.mp3", "100000.mp3", "1000000.mp3", "10000000.mp3", "100000000.mp3", "100000001.mp3", "100000002.mp3", "100000003.mp3", "100000004.mp3", "100000005.mp3", "100000006.mp3", "100000007.mp3", "100000008.mp3", "100000009.mp3", "10000001.mp3", "100000010.mp3", "100000011.mp3", "100000012.mp3", "100000013.mp3", "100000014.mp3", "100000015.mp3", "100000016.mp3", "100000017.mp3", "100000018.mp3", "100000019.mp3", "10000002.mp3", "100000020.mp3", "100000021.mp3", "100000022.mp3", "100000023.mp3", "100000024.mp3", "100000025.mp3", "100000026.mp3", "100000027.mp3", "100000028.mp3", "100000029.mp3", "10000003.mp3", "100000030.mp3", "100000031.mp3", "100000032.mp3", "100000033.mp3", "100000034.mp3", "100000035.mp3", "100000036.mp3", "100000037.mp3", "100000038.mp3"};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int n = 10000031;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "1000.mp3", "10000.mp3", "100000.mp3", "1000000.mp3", "10000000.mp3", "10000001.mp3", "10000002.mp3", "10000003.mp3", "10000004.mp3", "10000005.mp3", "10000006.mp3", "10000007.mp3", "10000008.mp3", "10000009.mp3", "1000001.mp3", "10000010.mp3", "10000011.mp3", "10000012.mp3", "10000013.mp3", "10000014.mp3", "10000015.mp3", "10000016.mp3", "10000017.mp3", "10000018.mp3", "10000019.mp3", "1000002.mp3", "10000020.mp3", "10000021.mp3", "10000022.mp3", "10000023.mp3", "10000024.mp3", "10000025.mp3", "10000026.mp3", "10000027.mp3", "10000028.mp3", "10000029.mp3", "1000003.mp3", "10000030.mp3", "10000031.mp3", "1000004.mp3", "1000005.mp3", "1000006.mp3", "1000007.mp3", "1000008.mp3", "1000009.mp3", "100001.mp3", "1000010.mp3"};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int n = 140;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "101.mp3", "102.mp3", "103.mp3", "104.mp3", "105.mp3", "106.mp3", "107.mp3", "108.mp3", "109.mp3", "11.mp3", "110.mp3", "111.mp3", "112.mp3", "113.mp3", "114.mp3", "115.mp3", "116.mp3", "117.mp3", "118.mp3", "119.mp3", "12.mp3", "120.mp3", "121.mp3", "122.mp3", "123.mp3", "124.mp3", "125.mp3", "126.mp3", "127.mp3", "128.mp3", "129.mp3", "13.mp3", "130.mp3", "131.mp3", "132.mp3", "133.mp3", "134.mp3", "135.mp3", "136.mp3", "137.mp3", "138.mp3", "139.mp3", "14.mp3", "140.mp3", "15.mp3", "16.mp3", "17.mp3"};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int n = 10049;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "1000.mp3", "10000.mp3", "10001.mp3", "10002.mp3", "10003.mp3", "10004.mp3", "10005.mp3", "10006.mp3", "10007.mp3", "10008.mp3", "10009.mp3", "1001.mp3", "10010.mp3", "10011.mp3", "10012.mp3", "10013.mp3", "10014.mp3", "10015.mp3", "10016.mp3", "10017.mp3", "10018.mp3", "10019.mp3", "1002.mp3", "10020.mp3", "10021.mp3", "10022.mp3", "10023.mp3", "10024.mp3", "10025.mp3", "10026.mp3", "10027.mp3", "10028.mp3", "10029.mp3", "1003.mp3", "10030.mp3", "10031.mp3", "10032.mp3", "10033.mp3", "10034.mp3", "10035.mp3", "10036.mp3", "10037.mp3", "10038.mp3", "10039.mp3", "1004.mp3", "10040.mp3", "10041.mp3"};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int n = 100000021;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "1000.mp3", "10000.mp3", "100000.mp3", "1000000.mp3", "10000000.mp3", "100000000.mp3", "100000001.mp3", "100000002.mp3", "100000003.mp3", "100000004.mp3", "100000005.mp3", "100000006.mp3", "100000007.mp3", "100000008.mp3", "100000009.mp3", "10000001.mp3", "100000010.mp3", "100000011.mp3", "100000012.mp3", "100000013.mp3", "100000014.mp3", "100000015.mp3", "100000016.mp3", "100000017.mp3", "100000018.mp3", "100000019.mp3", "10000002.mp3", "100000020.mp3", "100000021.mp3", "10000003.mp3", "10000004.mp3", "10000005.mp3", "10000006.mp3", "10000007.mp3", "10000008.mp3", "10000009.mp3", "1000001.mp3", "10000010.mp3", "10000011.mp3", "10000012.mp3", "10000013.mp3", "10000014.mp3", "10000015.mp3", "10000016.mp3", "10000017.mp3", "10000018.mp3", "10000019.mp3"};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int n = 107;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "101.mp3", "102.mp3", "103.mp3", "104.mp3", "105.mp3", "106.mp3", "107.mp3", "11.mp3", "12.mp3", "13.mp3", "14.mp3", "15.mp3", "16.mp3", "17.mp3", "18.mp3", "19.mp3", "2.mp3", "20.mp3", "21.mp3", "22.mp3", "23.mp3", "24.mp3", "25.mp3", "26.mp3", "27.mp3", "28.mp3", "29.mp3", "3.mp3", "30.mp3", "31.mp3", "32.mp3", "33.mp3", "34.mp3", "35.mp3", "36.mp3", "37.mp3", "38.mp3", "39.mp3", "4.mp3", "40.mp3", "41.mp3", "42.mp3", "43.mp3", "44.mp3", "45.mp3", "46.mp3", "47.mp3"};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int n = 123;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "101.mp3", "102.mp3", "103.mp3", "104.mp3", "105.mp3", "106.mp3", "107.mp3", "108.mp3", "109.mp3", "11.mp3", "110.mp3", "111.mp3", "112.mp3", "113.mp3", "114.mp3", "115.mp3", "116.mp3", "117.mp3", "118.mp3", "119.mp3", "12.mp3", "120.mp3", "121.mp3", "122.mp3", "123.mp3", "13.mp3", "14.mp3", "15.mp3", "16.mp3", "17.mp3", "18.mp3", "19.mp3", "2.mp3", "20.mp3", "21.mp3", "22.mp3", "23.mp3", "24.mp3", "25.mp3", "26.mp3", "27.mp3", "28.mp3", "29.mp3", "3.mp3", "30.mp3", "31.mp3", "32.mp3"};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int n = 1000030;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "1000.mp3", "10000.mp3", "100000.mp3", "1000000.mp3", "1000001.mp3", "1000002.mp3", "1000003.mp3", "1000004.mp3", "1000005.mp3", "1000006.mp3", "1000007.mp3", "1000008.mp3", "1000009.mp3", "100001.mp3", "1000010.mp3", "1000011.mp3", "1000012.mp3", "1000013.mp3", "1000014.mp3", "1000015.mp3", "1000016.mp3", "1000017.mp3", "1000018.mp3", "1000019.mp3", "100002.mp3", "1000020.mp3", "1000021.mp3", "1000022.mp3", "1000023.mp3", "1000024.mp3", "1000025.mp3", "1000026.mp3", "1000027.mp3", "1000028.mp3", "1000029.mp3", "100003.mp3", "1000030.mp3", "100004.mp3", "100005.mp3", "100006.mp3", "100007.mp3", "100008.mp3", "100009.mp3", "10001.mp3", "100010.mp3", "100011.mp3", "100012.mp3"};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int n = 501862950;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "1000.mp3", "10000.mp3", "100000.mp3", "1000000.mp3", "10000000.mp3", "100000000.mp3", "100000001.mp3", "100000002.mp3", "100000003.mp3", "100000004.mp3", "100000005.mp3", "100000006.mp3", "100000007.mp3", "100000008.mp3", "100000009.mp3", "10000001.mp3", "100000010.mp3", "100000011.mp3", "100000012.mp3", "100000013.mp3", "100000014.mp3", "100000015.mp3", "100000016.mp3", "100000017.mp3", "100000018.mp3", "100000019.mp3", "10000002.mp3", "100000020.mp3", "100000021.mp3", "100000022.mp3", "100000023.mp3", "100000024.mp3", "100000025.mp3", "100000026.mp3", "100000027.mp3", "100000028.mp3", "100000029.mp3", "10000003.mp3", "100000030.mp3", "100000031.mp3", "100000032.mp3", "100000033.mp3", "100000034.mp3", "100000035.mp3", "100000036.mp3", "100000037.mp3", "100000038.mp3"};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int n = 35;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "11.mp3", "12.mp3", "13.mp3", "14.mp3", "15.mp3", "16.mp3", "17.mp3", "18.mp3", "19.mp3", "2.mp3", "20.mp3", "21.mp3", "22.mp3", "23.mp3", "24.mp3", "25.mp3", "26.mp3", "27.mp3", "28.mp3", "29.mp3", "3.mp3", "30.mp3", "31.mp3", "32.mp3", "33.mp3", "34.mp3", "35.mp3", "4.mp3", "5.mp3", "6.mp3", "7.mp3", "8.mp3", "9.mp3"};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int n = 10009;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "1000.mp3", "10000.mp3", "10001.mp3", "10002.mp3", "10003.mp3", "10004.mp3", "10005.mp3", "10006.mp3", "10007.mp3", "10008.mp3", "10009.mp3", "1001.mp3", "1002.mp3", "1003.mp3", "1004.mp3", "1005.mp3", "1006.mp3", "1007.mp3", "1008.mp3", "1009.mp3", "101.mp3", "1010.mp3", "1011.mp3", "1012.mp3", "1013.mp3", "1014.mp3", "1015.mp3", "1016.mp3", "1017.mp3", "1018.mp3", "1019.mp3", "102.mp3", "1020.mp3", "1021.mp3", "1022.mp3", "1023.mp3", "1024.mp3", "1025.mp3", "1026.mp3", "1027.mp3", "1028.mp3", "1029.mp3", "103.mp3", "1030.mp3", "1031.mp3", "1032.mp3", "1033.mp3"};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int n = 340974783;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "1000.mp3", "10000.mp3", "100000.mp3", "1000000.mp3", "10000000.mp3", "100000000.mp3", "100000001.mp3", "100000002.mp3", "100000003.mp3", "100000004.mp3", "100000005.mp3", "100000006.mp3", "100000007.mp3", "100000008.mp3", "100000009.mp3", "10000001.mp3", "100000010.mp3", "100000011.mp3", "100000012.mp3", "100000013.mp3", "100000014.mp3", "100000015.mp3", "100000016.mp3", "100000017.mp3", "100000018.mp3", "100000019.mp3", "10000002.mp3", "100000020.mp3", "100000021.mp3", "100000022.mp3", "100000023.mp3", "100000024.mp3", "100000025.mp3", "100000026.mp3", "100000027.mp3", "100000028.mp3", "100000029.mp3", "10000003.mp3", "100000030.mp3", "100000031.mp3", "100000032.mp3", "100000033.mp3", "100000034.mp3", "100000035.mp3", "100000036.mp3", "100000037.mp3", "100000038.mp3"};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int n = 5;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "2.mp3", "3.mp3", "4.mp3", "5.mp3"};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int n = 10024;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "1000.mp3", "10000.mp3", "10001.mp3", "10002.mp3", "10003.mp3", "10004.mp3", "10005.mp3", "10006.mp3", "10007.mp3", "10008.mp3", "10009.mp3", "1001.mp3", "10010.mp3", "10011.mp3", "10012.mp3", "10013.mp3", "10014.mp3", "10015.mp3", "10016.mp3", "10017.mp3", "10018.mp3", "10019.mp3", "1002.mp3", "10020.mp3", "10021.mp3", "10022.mp3", "10023.mp3", "10024.mp3", "1003.mp3", "1004.mp3", "1005.mp3", "1006.mp3", "1007.mp3", "1008.mp3", "1009.mp3", "101.mp3", "1010.mp3", "1011.mp3", "1012.mp3", "1013.mp3", "1014.mp3", "1015.mp3", "1016.mp3", "1017.mp3", "1018.mp3", "1019.mp3", "102.mp3"};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int n = 100020;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "1000.mp3", "10000.mp3", "100000.mp3", "100001.mp3", "100002.mp3", "100003.mp3", "100004.mp3", "100005.mp3", "100006.mp3", "100007.mp3", "100008.mp3", "100009.mp3", "10001.mp3", "100010.mp3", "100011.mp3", "100012.mp3", "100013.mp3", "100014.mp3", "100015.mp3", "100016.mp3", "100017.mp3", "100018.mp3", "100019.mp3", "10002.mp3", "100020.mp3", "10003.mp3", "10004.mp3", "10005.mp3", "10006.mp3", "10007.mp3", "10008.mp3", "10009.mp3", "1001.mp3", "10010.mp3", "10011.mp3", "10012.mp3", "10013.mp3", "10014.mp3", "10015.mp3", "10016.mp3", "10017.mp3", "10018.mp3", "10019.mp3", "1002.mp3", "10020.mp3", "10021.mp3", "10022.mp3"};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int n = 33;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "11.mp3", "12.mp3", "13.mp3", "14.mp3", "15.mp3", "16.mp3", "17.mp3", "18.mp3", "19.mp3", "2.mp3", "20.mp3", "21.mp3", "22.mp3", "23.mp3", "24.mp3", "25.mp3", "26.mp3", "27.mp3", "28.mp3", "29.mp3", "3.mp3", "30.mp3", "31.mp3", "32.mp3", "33.mp3", "4.mp3", "5.mp3", "6.mp3", "7.mp3", "8.mp3", "9.mp3"};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int n = 5;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "2.mp3", "3.mp3", "4.mp3", "5.mp3"};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int n = 1038;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "1000.mp3", "1001.mp3", "1002.mp3", "1003.mp3", "1004.mp3", "1005.mp3", "1006.mp3", "1007.mp3", "1008.mp3", "1009.mp3", "101.mp3", "1010.mp3", "1011.mp3", "1012.mp3", "1013.mp3", "1014.mp3", "1015.mp3", "1016.mp3", "1017.mp3", "1018.mp3", "1019.mp3", "102.mp3", "1020.mp3", "1021.mp3", "1022.mp3", "1023.mp3", "1024.mp3", "1025.mp3", "1026.mp3", "1027.mp3", "1028.mp3", "1029.mp3", "103.mp3", "1030.mp3", "1031.mp3", "1032.mp3", "1033.mp3", "1034.mp3", "1035.mp3", "1036.mp3", "1037.mp3", "1038.mp3", "104.mp3", "105.mp3", "106.mp3", "107.mp3", "108.mp3"};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int n = 4;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "2.mp3", "3.mp3", "4.mp3"};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int n = 10000002;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "1000.mp3", "10000.mp3", "100000.mp3", "1000000.mp3", "10000000.mp3", "10000001.mp3", "10000002.mp3", "1000001.mp3", "1000002.mp3", "1000003.mp3", "1000004.mp3", "1000005.mp3", "1000006.mp3", "1000007.mp3", "1000008.mp3", "1000009.mp3", "100001.mp3", "1000010.mp3", "1000011.mp3", "1000012.mp3", "1000013.mp3", "1000014.mp3", "1000015.mp3", "1000016.mp3", "1000017.mp3", "1000018.mp3", "1000019.mp3", "100002.mp3", "1000020.mp3", "1000021.mp3", "1000022.mp3", "1000023.mp3", "1000024.mp3", "1000025.mp3", "1000026.mp3", "1000027.mp3", "1000028.mp3", "1000029.mp3", "100003.mp3", "1000030.mp3", "1000031.mp3", "1000032.mp3", "1000033.mp3", "1000034.mp3", "1000035.mp3", "1000036.mp3", "1000037.mp3"};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int n = 917;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "101.mp3", "102.mp3", "103.mp3", "104.mp3", "105.mp3", "106.mp3", "107.mp3", "108.mp3", "109.mp3", "11.mp3", "110.mp3", "111.mp3", "112.mp3", "113.mp3", "114.mp3", "115.mp3", "116.mp3", "117.mp3", "118.mp3", "119.mp3", "12.mp3", "120.mp3", "121.mp3", "122.mp3", "123.mp3", "124.mp3", "125.mp3", "126.mp3", "127.mp3", "128.mp3", "129.mp3", "13.mp3", "130.mp3", "131.mp3", "132.mp3", "133.mp3", "134.mp3", "135.mp3", "136.mp3", "137.mp3", "138.mp3", "139.mp3", "14.mp3", "140.mp3", "141.mp3", "142.mp3", "143.mp3"};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int n = 10000005;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "1000.mp3", "10000.mp3", "100000.mp3", "1000000.mp3", "10000000.mp3", "10000001.mp3", "10000002.mp3", "10000003.mp3", "10000004.mp3", "10000005.mp3", "1000001.mp3", "1000002.mp3", "1000003.mp3", "1000004.mp3", "1000005.mp3", "1000006.mp3", "1000007.mp3", "1000008.mp3", "1000009.mp3", "100001.mp3", "1000010.mp3", "1000011.mp3", "1000012.mp3", "1000013.mp3", "1000014.mp3", "1000015.mp3", "1000016.mp3", "1000017.mp3", "1000018.mp3", "1000019.mp3", "100002.mp3", "1000020.mp3", "1000021.mp3", "1000022.mp3", "1000023.mp3", "1000024.mp3", "1000025.mp3", "1000026.mp3", "1000027.mp3", "1000028.mp3", "1000029.mp3", "100003.mp3", "1000030.mp3", "1000031.mp3", "1000032.mp3", "1000033.mp3", "1000034.mp3"};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int n = 2785;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "1000.mp3", "1001.mp3", "1002.mp3", "1003.mp3", "1004.mp3", "1005.mp3", "1006.mp3", "1007.mp3", "1008.mp3", "1009.mp3", "101.mp3", "1010.mp3", "1011.mp3", "1012.mp3", "1013.mp3", "1014.mp3", "1015.mp3", "1016.mp3", "1017.mp3", "1018.mp3", "1019.mp3", "102.mp3", "1020.mp3", "1021.mp3", "1022.mp3", "1023.mp3", "1024.mp3", "1025.mp3", "1026.mp3", "1027.mp3", "1028.mp3", "1029.mp3", "103.mp3", "1030.mp3", "1031.mp3", "1032.mp3", "1033.mp3", "1034.mp3", "1035.mp3", "1036.mp3", "1037.mp3", "1038.mp3", "1039.mp3", "104.mp3", "1040.mp3", "1041.mp3", "1042.mp3"};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int n = 10000045;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "1000.mp3", "10000.mp3", "100000.mp3", "1000000.mp3", "10000000.mp3", "10000001.mp3", "10000002.mp3", "10000003.mp3", "10000004.mp3", "10000005.mp3", "10000006.mp3", "10000007.mp3", "10000008.mp3", "10000009.mp3", "1000001.mp3", "10000010.mp3", "10000011.mp3", "10000012.mp3", "10000013.mp3", "10000014.mp3", "10000015.mp3", "10000016.mp3", "10000017.mp3", "10000018.mp3", "10000019.mp3", "1000002.mp3", "10000020.mp3", "10000021.mp3", "10000022.mp3", "10000023.mp3", "10000024.mp3", "10000025.mp3", "10000026.mp3", "10000027.mp3", "10000028.mp3", "10000029.mp3", "1000003.mp3", "10000030.mp3", "10000031.mp3", "10000032.mp3", "10000033.mp3", "10000034.mp3", "10000035.mp3", "10000036.mp3", "10000037.mp3", "10000038.mp3", "10000039.mp3"};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int n = 16;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "11.mp3", "12.mp3", "13.mp3", "14.mp3", "15.mp3", "16.mp3", "2.mp3", "3.mp3", "4.mp3", "5.mp3", "6.mp3", "7.mp3", "8.mp3", "9.mp3"};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int n = 688;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "101.mp3", "102.mp3", "103.mp3", "104.mp3", "105.mp3", "106.mp3", "107.mp3", "108.mp3", "109.mp3", "11.mp3", "110.mp3", "111.mp3", "112.mp3", "113.mp3", "114.mp3", "115.mp3", "116.mp3", "117.mp3", "118.mp3", "119.mp3", "12.mp3", "120.mp3", "121.mp3", "122.mp3", "123.mp3", "124.mp3", "125.mp3", "126.mp3", "127.mp3", "128.mp3", "129.mp3", "13.mp3", "130.mp3", "131.mp3", "132.mp3", "133.mp3", "134.mp3", "135.mp3", "136.mp3", "137.mp3", "138.mp3", "139.mp3", "14.mp3", "140.mp3", "141.mp3", "142.mp3", "143.mp3"};
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int n = 536559;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "1000.mp3", "10000.mp3", "100000.mp3", "100001.mp3", "100002.mp3", "100003.mp3", "100004.mp3", "100005.mp3", "100006.mp3", "100007.mp3", "100008.mp3", "100009.mp3", "10001.mp3", "100010.mp3", "100011.mp3", "100012.mp3", "100013.mp3", "100014.mp3", "100015.mp3", "100016.mp3", "100017.mp3", "100018.mp3", "100019.mp3", "10002.mp3", "100020.mp3", "100021.mp3", "100022.mp3", "100023.mp3", "100024.mp3", "100025.mp3", "100026.mp3", "100027.mp3", "100028.mp3", "100029.mp3", "10003.mp3", "100030.mp3", "100031.mp3", "100032.mp3", "100033.mp3", "100034.mp3", "100035.mp3", "100036.mp3", "100037.mp3", "100038.mp3", "100039.mp3", "10004.mp3", "100040.mp3"};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int n = 248;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "101.mp3", "102.mp3", "103.mp3", "104.mp3", "105.mp3", "106.mp3", "107.mp3", "108.mp3", "109.mp3", "11.mp3", "110.mp3", "111.mp3", "112.mp3", "113.mp3", "114.mp3", "115.mp3", "116.mp3", "117.mp3", "118.mp3", "119.mp3", "12.mp3", "120.mp3", "121.mp3", "122.mp3", "123.mp3", "124.mp3", "125.mp3", "126.mp3", "127.mp3", "128.mp3", "129.mp3", "13.mp3", "130.mp3", "131.mp3", "132.mp3", "133.mp3", "134.mp3", "135.mp3", "136.mp3", "137.mp3", "138.mp3", "139.mp3", "14.mp3", "140.mp3", "141.mp3", "142.mp3", "143.mp3"};
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int n = 100034;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "1000.mp3", "10000.mp3", "100000.mp3", "100001.mp3", "100002.mp3", "100003.mp3", "100004.mp3", "100005.mp3", "100006.mp3", "100007.mp3", "100008.mp3", "100009.mp3", "10001.mp3", "100010.mp3", "100011.mp3", "100012.mp3", "100013.mp3", "100014.mp3", "100015.mp3", "100016.mp3", "100017.mp3", "100018.mp3", "100019.mp3", "10002.mp3", "100020.mp3", "100021.mp3", "100022.mp3", "100023.mp3", "100024.mp3", "100025.mp3", "100026.mp3", "100027.mp3", "100028.mp3", "100029.mp3", "10003.mp3", "100030.mp3", "100031.mp3", "100032.mp3", "100033.mp3", "100034.mp3", "10004.mp3", "10005.mp3", "10006.mp3", "10007.mp3", "10008.mp3", "10009.mp3", "1001.mp3"};
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int n = 100000011;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "1000.mp3", "10000.mp3", "100000.mp3", "1000000.mp3", "10000000.mp3", "100000000.mp3", "100000001.mp3", "100000002.mp3", "100000003.mp3", "100000004.mp3", "100000005.mp3", "100000006.mp3", "100000007.mp3", "100000008.mp3", "100000009.mp3", "10000001.mp3", "100000010.mp3", "100000011.mp3", "10000002.mp3", "10000003.mp3", "10000004.mp3", "10000005.mp3", "10000006.mp3", "10000007.mp3", "10000008.mp3", "10000009.mp3", "1000001.mp3", "10000010.mp3", "10000011.mp3", "10000012.mp3", "10000013.mp3", "10000014.mp3", "10000015.mp3", "10000016.mp3", "10000017.mp3", "10000018.mp3", "10000019.mp3", "1000002.mp3", "10000020.mp3", "10000021.mp3", "10000022.mp3", "10000023.mp3", "10000024.mp3", "10000025.mp3", "10000026.mp3", "10000027.mp3", "10000028.mp3"};
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int n = 100001;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "1000.mp3", "10000.mp3", "100000.mp3", "100001.mp3", "10001.mp3", "10002.mp3", "10003.mp3", "10004.mp3", "10005.mp3", "10006.mp3", "10007.mp3", "10008.mp3", "10009.mp3", "1001.mp3", "10010.mp3", "10011.mp3", "10012.mp3", "10013.mp3", "10014.mp3", "10015.mp3", "10016.mp3", "10017.mp3", "10018.mp3", "10019.mp3", "1002.mp3", "10020.mp3", "10021.mp3", "10022.mp3", "10023.mp3", "10024.mp3", "10025.mp3", "10026.mp3", "10027.mp3", "10028.mp3", "10029.mp3", "1003.mp3", "10030.mp3", "10031.mp3", "10032.mp3", "10033.mp3", "10034.mp3", "10035.mp3", "10036.mp3", "10037.mp3", "10038.mp3", "10039.mp3", "1004.mp3"};
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int n = 3722802;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "1000.mp3", "10000.mp3", "100000.mp3", "1000000.mp3", "1000001.mp3", "1000002.mp3", "1000003.mp3", "1000004.mp3", "1000005.mp3", "1000006.mp3", "1000007.mp3", "1000008.mp3", "1000009.mp3", "100001.mp3", "1000010.mp3", "1000011.mp3", "1000012.mp3", "1000013.mp3", "1000014.mp3", "1000015.mp3", "1000016.mp3", "1000017.mp3", "1000018.mp3", "1000019.mp3", "100002.mp3", "1000020.mp3", "1000021.mp3", "1000022.mp3", "1000023.mp3", "1000024.mp3", "1000025.mp3", "1000026.mp3", "1000027.mp3", "1000028.mp3", "1000029.mp3", "100003.mp3", "1000030.mp3", "1000031.mp3", "1000032.mp3", "1000033.mp3", "1000034.mp3", "1000035.mp3", "1000036.mp3", "1000037.mp3", "1000038.mp3", "1000039.mp3", "100004.mp3"};
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int n = 50079;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "1000.mp3", "10000.mp3", "10001.mp3", "10002.mp3", "10003.mp3", "10004.mp3", "10005.mp3", "10006.mp3", "10007.mp3", "10008.mp3", "10009.mp3", "1001.mp3", "10010.mp3", "10011.mp3", "10012.mp3", "10013.mp3", "10014.mp3", "10015.mp3", "10016.mp3", "10017.mp3", "10018.mp3", "10019.mp3", "1002.mp3", "10020.mp3", "10021.mp3", "10022.mp3", "10023.mp3", "10024.mp3", "10025.mp3", "10026.mp3", "10027.mp3", "10028.mp3", "10029.mp3", "1003.mp3", "10030.mp3", "10031.mp3", "10032.mp3", "10033.mp3", "10034.mp3", "10035.mp3", "10036.mp3", "10037.mp3", "10038.mp3", "10039.mp3", "1004.mp3", "10040.mp3", "10041.mp3"};
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int n = 116;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "101.mp3", "102.mp3", "103.mp3", "104.mp3", "105.mp3", "106.mp3", "107.mp3", "108.mp3", "109.mp3", "11.mp3", "110.mp3", "111.mp3", "112.mp3", "113.mp3", "114.mp3", "115.mp3", "116.mp3", "12.mp3", "13.mp3", "14.mp3", "15.mp3", "16.mp3", "17.mp3", "18.mp3", "19.mp3", "2.mp3", "20.mp3", "21.mp3", "22.mp3", "23.mp3", "24.mp3", "25.mp3", "26.mp3", "27.mp3", "28.mp3", "29.mp3", "3.mp3", "30.mp3", "31.mp3", "32.mp3", "33.mp3", "34.mp3", "35.mp3", "36.mp3", "37.mp3", "38.mp3", "39.mp3"};
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int n = 1000010;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "1000.mp3", "10000.mp3", "100000.mp3", "1000000.mp3", "1000001.mp3", "1000002.mp3", "1000003.mp3", "1000004.mp3", "1000005.mp3", "1000006.mp3", "1000007.mp3", "1000008.mp3", "1000009.mp3", "100001.mp3", "1000010.mp3", "100002.mp3", "100003.mp3", "100004.mp3", "100005.mp3", "100006.mp3", "100007.mp3", "100008.mp3", "100009.mp3", "10001.mp3", "100010.mp3", "100011.mp3", "100012.mp3", "100013.mp3", "100014.mp3", "100015.mp3", "100016.mp3", "100017.mp3", "100018.mp3", "100019.mp3", "10002.mp3", "100020.mp3", "100021.mp3", "100022.mp3", "100023.mp3", "100024.mp3", "100025.mp3", "100026.mp3", "100027.mp3", "100028.mp3", "100029.mp3", "10003.mp3", "100030.mp3"};
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int n = 39;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "11.mp3", "12.mp3", "13.mp3", "14.mp3", "15.mp3", "16.mp3", "17.mp3", "18.mp3", "19.mp3", "2.mp3", "20.mp3", "21.mp3", "22.mp3", "23.mp3", "24.mp3", "25.mp3", "26.mp3", "27.mp3", "28.mp3", "29.mp3", "3.mp3", "30.mp3", "31.mp3", "32.mp3", "33.mp3", "34.mp3", "35.mp3", "36.mp3", "37.mp3", "38.mp3", "39.mp3", "4.mp3", "5.mp3", "6.mp3", "7.mp3", "8.mp3", "9.mp3"};
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int n = 100000028;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "1000.mp3", "10000.mp3", "100000.mp3", "1000000.mp3", "10000000.mp3", "100000000.mp3", "100000001.mp3", "100000002.mp3", "100000003.mp3", "100000004.mp3", "100000005.mp3", "100000006.mp3", "100000007.mp3", "100000008.mp3", "100000009.mp3", "10000001.mp3", "100000010.mp3", "100000011.mp3", "100000012.mp3", "100000013.mp3", "100000014.mp3", "100000015.mp3", "100000016.mp3", "100000017.mp3", "100000018.mp3", "100000019.mp3", "10000002.mp3", "100000020.mp3", "100000021.mp3", "100000022.mp3", "100000023.mp3", "100000024.mp3", "100000025.mp3", "100000026.mp3", "100000027.mp3", "100000028.mp3", "10000003.mp3", "10000004.mp3", "10000005.mp3", "10000006.mp3", "10000007.mp3", "10000008.mp3", "10000009.mp3", "1000001.mp3", "10000010.mp3", "10000011.mp3", "10000012.mp3"};
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int n = 10017;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "1000.mp3", "10000.mp3", "10001.mp3", "10002.mp3", "10003.mp3", "10004.mp3", "10005.mp3", "10006.mp3", "10007.mp3", "10008.mp3", "10009.mp3", "1001.mp3", "10010.mp3", "10011.mp3", "10012.mp3", "10013.mp3", "10014.mp3", "10015.mp3", "10016.mp3", "10017.mp3", "1002.mp3", "1003.mp3", "1004.mp3", "1005.mp3", "1006.mp3", "1007.mp3", "1008.mp3", "1009.mp3", "101.mp3", "1010.mp3", "1011.mp3", "1012.mp3", "1013.mp3", "1014.mp3", "1015.mp3", "1016.mp3", "1017.mp3", "1018.mp3", "1019.mp3", "102.mp3", "1020.mp3", "1021.mp3", "1022.mp3", "1023.mp3", "1024.mp3", "1025.mp3", "1026.mp3"};
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int n = 100011;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "1000.mp3", "10000.mp3", "100000.mp3", "100001.mp3", "100002.mp3", "100003.mp3", "100004.mp3", "100005.mp3", "100006.mp3", "100007.mp3", "100008.mp3", "100009.mp3", "10001.mp3", "100010.mp3", "100011.mp3", "10002.mp3", "10003.mp3", "10004.mp3", "10005.mp3", "10006.mp3", "10007.mp3", "10008.mp3", "10009.mp3", "1001.mp3", "10010.mp3", "10011.mp3", "10012.mp3", "10013.mp3", "10014.mp3", "10015.mp3", "10016.mp3", "10017.mp3", "10018.mp3", "10019.mp3", "1002.mp3", "10020.mp3", "10021.mp3", "10022.mp3", "10023.mp3", "10024.mp3", "10025.mp3", "10026.mp3", "10027.mp3", "10028.mp3", "10029.mp3", "1003.mp3", "10030.mp3"};
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int n = 5;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "2.mp3", "3.mp3", "4.mp3", "5.mp3"};
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int n = 143;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "101.mp3", "102.mp3", "103.mp3", "104.mp3", "105.mp3", "106.mp3", "107.mp3", "108.mp3", "109.mp3", "11.mp3", "110.mp3", "111.mp3", "112.mp3", "113.mp3", "114.mp3", "115.mp3", "116.mp3", "117.mp3", "118.mp3", "119.mp3", "12.mp3", "120.mp3", "121.mp3", "122.mp3", "123.mp3", "124.mp3", "125.mp3", "126.mp3", "127.mp3", "128.mp3", "129.mp3", "13.mp3", "130.mp3", "131.mp3", "132.mp3", "133.mp3", "134.mp3", "135.mp3", "136.mp3", "137.mp3", "138.mp3", "139.mp3", "14.mp3", "140.mp3", "141.mp3", "142.mp3", "143.mp3"};
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int n = 2987962;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "1000.mp3", "10000.mp3", "100000.mp3", "1000000.mp3", "1000001.mp3", "1000002.mp3", "1000003.mp3", "1000004.mp3", "1000005.mp3", "1000006.mp3", "1000007.mp3", "1000008.mp3", "1000009.mp3", "100001.mp3", "1000010.mp3", "1000011.mp3", "1000012.mp3", "1000013.mp3", "1000014.mp3", "1000015.mp3", "1000016.mp3", "1000017.mp3", "1000018.mp3", "1000019.mp3", "100002.mp3", "1000020.mp3", "1000021.mp3", "1000022.mp3", "1000023.mp3", "1000024.mp3", "1000025.mp3", "1000026.mp3", "1000027.mp3", "1000028.mp3", "1000029.mp3", "100003.mp3", "1000030.mp3", "1000031.mp3", "1000032.mp3", "1000033.mp3", "1000034.mp3", "1000035.mp3", "1000036.mp3", "1000037.mp3", "1000038.mp3", "1000039.mp3", "100004.mp3"};
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int n = 10017;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "1000.mp3", "10000.mp3", "10001.mp3", "10002.mp3", "10003.mp3", "10004.mp3", "10005.mp3", "10006.mp3", "10007.mp3", "10008.mp3", "10009.mp3", "1001.mp3", "10010.mp3", "10011.mp3", "10012.mp3", "10013.mp3", "10014.mp3", "10015.mp3", "10016.mp3", "10017.mp3", "1002.mp3", "1003.mp3", "1004.mp3", "1005.mp3", "1006.mp3", "1007.mp3", "1008.mp3", "1009.mp3", "101.mp3", "1010.mp3", "1011.mp3", "1012.mp3", "1013.mp3", "1014.mp3", "1015.mp3", "1016.mp3", "1017.mp3", "1018.mp3", "1019.mp3", "102.mp3", "1020.mp3", "1021.mp3", "1022.mp3", "1023.mp3", "1024.mp3", "1025.mp3", "1026.mp3"};
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int n = 147;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "101.mp3", "102.mp3", "103.mp3", "104.mp3", "105.mp3", "106.mp3", "107.mp3", "108.mp3", "109.mp3", "11.mp3", "110.mp3", "111.mp3", "112.mp3", "113.mp3", "114.mp3", "115.mp3", "116.mp3", "117.mp3", "118.mp3", "119.mp3", "12.mp3", "120.mp3", "121.mp3", "122.mp3", "123.mp3", "124.mp3", "125.mp3", "126.mp3", "127.mp3", "128.mp3", "129.mp3", "13.mp3", "130.mp3", "131.mp3", "132.mp3", "133.mp3", "134.mp3", "135.mp3", "136.mp3", "137.mp3", "138.mp3", "139.mp3", "14.mp3", "140.mp3", "141.mp3", "142.mp3", "143.mp3"};
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int n = 81460277;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "1000.mp3", "10000.mp3", "100000.mp3", "1000000.mp3", "10000000.mp3", "10000001.mp3", "10000002.mp3", "10000003.mp3", "10000004.mp3", "10000005.mp3", "10000006.mp3", "10000007.mp3", "10000008.mp3", "10000009.mp3", "1000001.mp3", "10000010.mp3", "10000011.mp3", "10000012.mp3", "10000013.mp3", "10000014.mp3", "10000015.mp3", "10000016.mp3", "10000017.mp3", "10000018.mp3", "10000019.mp3", "1000002.mp3", "10000020.mp3", "10000021.mp3", "10000022.mp3", "10000023.mp3", "10000024.mp3", "10000025.mp3", "10000026.mp3", "10000027.mp3", "10000028.mp3", "10000029.mp3", "1000003.mp3", "10000030.mp3", "10000031.mp3", "10000032.mp3", "10000033.mp3", "10000034.mp3", "10000035.mp3", "10000036.mp3", "10000037.mp3", "10000038.mp3", "10000039.mp3"};
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int n = 2;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "2.mp3"};
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int n = 10;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "2.mp3", "3.mp3", "4.mp3", "5.mp3", "6.mp3", "7.mp3", "8.mp3", "9.mp3"};
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int n = 1031;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "1000.mp3", "1001.mp3", "1002.mp3", "1003.mp3", "1004.mp3", "1005.mp3", "1006.mp3", "1007.mp3", "1008.mp3", "1009.mp3", "101.mp3", "1010.mp3", "1011.mp3", "1012.mp3", "1013.mp3", "1014.mp3", "1015.mp3", "1016.mp3", "1017.mp3", "1018.mp3", "1019.mp3", "102.mp3", "1020.mp3", "1021.mp3", "1022.mp3", "1023.mp3", "1024.mp3", "1025.mp3", "1026.mp3", "1027.mp3", "1028.mp3", "1029.mp3", "103.mp3", "1030.mp3", "1031.mp3", "104.mp3", "105.mp3", "106.mp3", "107.mp3", "108.mp3", "109.mp3", "11.mp3", "110.mp3", "111.mp3", "112.mp3", "113.mp3", "114.mp3"};
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int n = 29;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "11.mp3", "12.mp3", "13.mp3", "14.mp3", "15.mp3", "16.mp3", "17.mp3", "18.mp3", "19.mp3", "2.mp3", "20.mp3", "21.mp3", "22.mp3", "23.mp3", "24.mp3", "25.mp3", "26.mp3", "27.mp3", "28.mp3", "29.mp3", "3.mp3", "4.mp3", "5.mp3", "6.mp3", "7.mp3", "8.mp3", "9.mp3"};
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int n = 10024;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "1000.mp3", "10000.mp3", "10001.mp3", "10002.mp3", "10003.mp3", "10004.mp3", "10005.mp3", "10006.mp3", "10007.mp3", "10008.mp3", "10009.mp3", "1001.mp3", "10010.mp3", "10011.mp3", "10012.mp3", "10013.mp3", "10014.mp3", "10015.mp3", "10016.mp3", "10017.mp3", "10018.mp3", "10019.mp3", "1002.mp3", "10020.mp3", "10021.mp3", "10022.mp3", "10023.mp3", "10024.mp3", "1003.mp3", "1004.mp3", "1005.mp3", "1006.mp3", "1007.mp3", "1008.mp3", "1009.mp3", "101.mp3", "1010.mp3", "1011.mp3", "1012.mp3", "1013.mp3", "1014.mp3", "1015.mp3", "1016.mp3", "1017.mp3", "1018.mp3", "1019.mp3", "102.mp3"};
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int n = 8891;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "1000.mp3", "1001.mp3", "1002.mp3", "1003.mp3", "1004.mp3", "1005.mp3", "1006.mp3", "1007.mp3", "1008.mp3", "1009.mp3", "101.mp3", "1010.mp3", "1011.mp3", "1012.mp3", "1013.mp3", "1014.mp3", "1015.mp3", "1016.mp3", "1017.mp3", "1018.mp3", "1019.mp3", "102.mp3", "1020.mp3", "1021.mp3", "1022.mp3", "1023.mp3", "1024.mp3", "1025.mp3", "1026.mp3", "1027.mp3", "1028.mp3", "1029.mp3", "103.mp3", "1030.mp3", "1031.mp3", "1032.mp3", "1033.mp3", "1034.mp3", "1035.mp3", "1036.mp3", "1037.mp3", "1038.mp3", "1039.mp3", "104.mp3", "1040.mp3", "1041.mp3", "1042.mp3"};
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int n = 48;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "11.mp3", "12.mp3", "13.mp3", "14.mp3", "15.mp3", "16.mp3", "17.mp3", "18.mp3", "19.mp3", "2.mp3", "20.mp3", "21.mp3", "22.mp3", "23.mp3", "24.mp3", "25.mp3", "26.mp3", "27.mp3", "28.mp3", "29.mp3", "3.mp3", "30.mp3", "31.mp3", "32.mp3", "33.mp3", "34.mp3", "35.mp3", "36.mp3", "37.mp3", "38.mp3", "39.mp3", "4.mp3", "40.mp3", "41.mp3", "42.mp3", "43.mp3", "44.mp3", "45.mp3", "46.mp3", "47.mp3", "48.mp3", "5.mp3", "6.mp3", "7.mp3", "8.mp3", "9.mp3"};
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int n = 49;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "11.mp3", "12.mp3", "13.mp3", "14.mp3", "15.mp3", "16.mp3", "17.mp3", "18.mp3", "19.mp3", "2.mp3", "20.mp3", "21.mp3", "22.mp3", "23.mp3", "24.mp3", "25.mp3", "26.mp3", "27.mp3", "28.mp3", "29.mp3", "3.mp3", "30.mp3", "31.mp3", "32.mp3", "33.mp3", "34.mp3", "35.mp3", "36.mp3", "37.mp3", "38.mp3", "39.mp3", "4.mp3", "40.mp3", "41.mp3", "42.mp3", "43.mp3", "44.mp3", "45.mp3", "46.mp3", "47.mp3", "48.mp3", "49.mp3", "5.mp3", "6.mp3", "7.mp3", "8.mp3", "9.mp3"};
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int n = 50;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "11.mp3", "12.mp3", "13.mp3", "14.mp3", "15.mp3", "16.mp3", "17.mp3", "18.mp3", "19.mp3", "2.mp3", "20.mp3", "21.mp3", "22.mp3", "23.mp3", "24.mp3", "25.mp3", "26.mp3", "27.mp3", "28.mp3", "29.mp3", "3.mp3", "30.mp3", "31.mp3", "32.mp3", "33.mp3", "34.mp3", "35.mp3", "36.mp3", "37.mp3", "38.mp3", "39.mp3", "4.mp3", "40.mp3", "41.mp3", "42.mp3", "43.mp3", "44.mp3", "45.mp3", "46.mp3", "47.mp3", "48.mp3", "49.mp3", "5.mp3", "50.mp3", "6.mp3", "7.mp3", "8.mp3", "9.mp3"};
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int n = 51;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "11.mp3", "12.mp3", "13.mp3", "14.mp3", "15.mp3", "16.mp3", "17.mp3", "18.mp3", "19.mp3", "2.mp3", "20.mp3", "21.mp3", "22.mp3", "23.mp3", "24.mp3", "25.mp3", "26.mp3", "27.mp3", "28.mp3", "29.mp3", "3.mp3", "30.mp3", "31.mp3", "32.mp3", "33.mp3", "34.mp3", "35.mp3", "36.mp3", "37.mp3", "38.mp3", "39.mp3", "4.mp3", "40.mp3", "41.mp3", "42.mp3", "43.mp3", "44.mp3", "45.mp3", "46.mp3", "47.mp3", "48.mp3", "49.mp3", "5.mp3", "50.mp3", "51.mp3", "6.mp3", "7.mp3", "8.mp3"};
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int n = 52;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "11.mp3", "12.mp3", "13.mp3", "14.mp3", "15.mp3", "16.mp3", "17.mp3", "18.mp3", "19.mp3", "2.mp3", "20.mp3", "21.mp3", "22.mp3", "23.mp3", "24.mp3", "25.mp3", "26.mp3", "27.mp3", "28.mp3", "29.mp3", "3.mp3", "30.mp3", "31.mp3", "32.mp3", "33.mp3", "34.mp3", "35.mp3", "36.mp3", "37.mp3", "38.mp3", "39.mp3", "4.mp3", "40.mp3", "41.mp3", "42.mp3", "43.mp3", "44.mp3", "45.mp3", "46.mp3", "47.mp3", "48.mp3", "49.mp3", "5.mp3", "50.mp3", "51.mp3", "52.mp3", "6.mp3", "7.mp3"};
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int n = 999999999;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "1000.mp3", "10000.mp3", "100000.mp3", "1000000.mp3", "10000000.mp3", "100000000.mp3", "100000001.mp3", "100000002.mp3", "100000003.mp3", "100000004.mp3", "100000005.mp3", "100000006.mp3", "100000007.mp3", "100000008.mp3", "100000009.mp3", "10000001.mp3", "100000010.mp3", "100000011.mp3", "100000012.mp3", "100000013.mp3", "100000014.mp3", "100000015.mp3", "100000016.mp3", "100000017.mp3", "100000018.mp3", "100000019.mp3", "10000002.mp3", "100000020.mp3", "100000021.mp3", "100000022.mp3", "100000023.mp3", "100000024.mp3", "100000025.mp3", "100000026.mp3", "100000027.mp3", "100000028.mp3", "100000029.mp3", "10000003.mp3", "100000030.mp3", "100000031.mp3", "100000032.mp3", "100000033.mp3", "100000034.mp3", "100000035.mp3", "100000036.mp3", "100000037.mp3", "100000038.mp3"};
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int n = 3999999;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "1000.mp3", "10000.mp3", "100000.mp3", "1000000.mp3", "1000001.mp3", "1000002.mp3", "1000003.mp3", "1000004.mp3", "1000005.mp3", "1000006.mp3", "1000007.mp3", "1000008.mp3", "1000009.mp3", "100001.mp3", "1000010.mp3", "1000011.mp3", "1000012.mp3", "1000013.mp3", "1000014.mp3", "1000015.mp3", "1000016.mp3", "1000017.mp3", "1000018.mp3", "1000019.mp3", "100002.mp3", "1000020.mp3", "1000021.mp3", "1000022.mp3", "1000023.mp3", "1000024.mp3", "1000025.mp3", "1000026.mp3", "1000027.mp3", "1000028.mp3", "1000029.mp3", "100003.mp3", "1000030.mp3", "1000031.mp3", "1000032.mp3", "1000033.mp3", "1000034.mp3", "1000035.mp3", "1000036.mp3", "1000037.mp3", "1000038.mp3", "1000039.mp3", "100004.mp3"};
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int n = 214748365;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "1000.mp3", "10000.mp3", "100000.mp3", "1000000.mp3", "10000000.mp3", "100000000.mp3", "100000001.mp3", "100000002.mp3", "100000003.mp3", "100000004.mp3", "100000005.mp3", "100000006.mp3", "100000007.mp3", "100000008.mp3", "100000009.mp3", "10000001.mp3", "100000010.mp3", "100000011.mp3", "100000012.mp3", "100000013.mp3", "100000014.mp3", "100000015.mp3", "100000016.mp3", "100000017.mp3", "100000018.mp3", "100000019.mp3", "10000002.mp3", "100000020.mp3", "100000021.mp3", "100000022.mp3", "100000023.mp3", "100000024.mp3", "100000025.mp3", "100000026.mp3", "100000027.mp3", "100000028.mp3", "100000029.mp3", "10000003.mp3", "100000030.mp3", "100000031.mp3", "100000032.mp3", "100000033.mp3", "100000034.mp3", "100000035.mp3", "100000036.mp3", "100000037.mp3", "100000038.mp3"};
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int n = 100000023;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "100.mp3", "1000.mp3", "10000.mp3", "100000.mp3", "1000000.mp3", "10000000.mp3", "100000000.mp3", "100000001.mp3", "100000002.mp3", "100000003.mp3", "100000004.mp3", "100000005.mp3", "100000006.mp3", "100000007.mp3", "100000008.mp3", "100000009.mp3", "10000001.mp3", "100000010.mp3", "100000011.mp3", "100000012.mp3", "100000013.mp3", "100000014.mp3", "100000015.mp3", "100000016.mp3", "100000017.mp3", "100000018.mp3", "100000019.mp3", "10000002.mp3", "100000020.mp3", "100000021.mp3", "100000022.mp3", "100000023.mp3", "10000003.mp3", "10000004.mp3", "10000005.mp3", "10000006.mp3", "10000007.mp3", "10000008.mp3", "10000009.mp3", "1000001.mp3", "10000010.mp3", "10000011.mp3", "10000012.mp3", "10000013.mp3", "10000014.mp3", "10000015.mp3", "10000016.mp3", "10000017.mp3"};
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int n = 99;
    FoxAndMp3* pObj = new FoxAndMp3();
    clock_t start = clock();
    vector<string> result = pObj->playList(n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.mp3", "10.mp3", "11.mp3", "12.mp3", "13.mp3", "14.mp3", "15.mp3", "16.mp3", "17.mp3", "18.mp3", "19.mp3", "2.mp3", "20.mp3", "21.mp3", "22.mp3", "23.mp3", "24.mp3", "25.mp3", "26.mp3", "27.mp3", "28.mp3", "29.mp3", "3.mp3", "30.mp3", "31.mp3", "32.mp3", "33.mp3", "34.mp3", "35.mp3", "36.mp3", "37.mp3", "38.mp3", "39.mp3", "4.mp3", "40.mp3", "41.mp3", "42.mp3", "43.mp3", "44.mp3", "45.mp3", "46.mp3", "47.mp3", "48.mp3", "49.mp3", "5.mp3", "50.mp3", "51.mp3", "52.mp3", "53.mp3", "54.mp3"};
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=23119087&rd=15491&pm=12436
********************************************************************************
#include <vector> 
#include <algorithm> 
#include <iostream> 
#include <cstdio> 
#include <map> 
#include <cmath> 
#include <cstdlib> 
#include <queue> 
#include <string> 
#include <set> 
#include <cstring> 
using namespace std; 
 
#define For(i,n) for(int i=0;i<n;i++) 
#define ALL(n) n.begin(),n.end() 
#define pb push_back 
#define sz(i) int(i.size()) 
 
string myitoa(int t){ 
    string ret = ""; 
    while(t){ 
        ret+=t%10+'0'; 
        t/=10; 
    } 
    reverse(ALL(ret)); 
    return ret; 
} 
class FoxAndMp3 
{ 
public: 
        vector <string> playList(int n) 
        { 
            string tail = ".mp3"; 
            vector <string> ret; 
            priority_queue<string,vector<string>, greater<string> >pq; 
            pq.push("1"); 
            set<string>rep; 
            while(sz(ret)<min(n,50)){ 
                string tp = pq.top(); pq.pop(); 
                int value = atoi(tp.c_str()); 
                if(rep.count(tp)==0) 
                    rep.insert(tp),ret.pb(tp+tail); 
 
                if(value*10LL<=n) 
                    pq.push(tp+"0"); 
                if(value+1<=n) 
                    pq.push(myitoa(value+1) ); 
            } 
            return ret; 
        } 
};

********************************************************************************
*******************************************************************************/