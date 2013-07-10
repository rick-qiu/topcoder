/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2924
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

class MovingAverages {
public:
    vector<int> calculate(vector<string> times, int n);
};

vector<int> MovingAverages::calculate(vector<string> times, int n) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<string> times = {"01:19:10", "01:17:40", "01:19:44", "01:17:23", "01:17:07"};
    int n = 3;
    MovingAverages* pObj = new MovingAverages();
    clock_t start = clock();
    vector<int> result = pObj->calculate(times, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4731, 4695, 4684};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> times = {"01:19:10", "01:17:40", "01:19:44", "01:17:23", "01:17:07"};
    int n = 1;
    MovingAverages* pObj = new MovingAverages();
    clock_t start = clock();
    vector<int> result = pObj->calculate(times, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4750, 4660, 4784, 4643, 4627};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> times = {"01:19:10", "01:17:40", "01:19:44", "01:17:23", "01:17:07"};
    int n = 5;
    MovingAverages* pObj = new MovingAverages();
    clock_t start = clock();
    vector<int> result = pObj->calculate(times, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4692};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> times = {"13:33:44", "13:33:42", "13:33:41"};
    int n = 2;
    MovingAverages* pObj = new MovingAverages();
    clock_t start = clock();
    vector<int> result = pObj->calculate(times, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {48823, 48821};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> times = {"00:00:00", "00:00:00", "00:00:00", "00:00:01", "00:00:01", "00:00:01"};
    int n = 3;
    MovingAverages* pObj = new MovingAverages();
    clock_t start = clock();
    vector<int> result = pObj->calculate(times, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 1};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> times = {"07:49:53", "02:10:32", "00:38:23", "13:00:05", "12:02:27", "23:07:49", "16:52:03", "01:09:17", "16:33:39", "06:56:55", "01:26:32", "19:50:33", "19:49:39", "21:07:32", "01:36:05", "17:08:31", "18:37:41", "17:28:04", "04:50:24", "20:30:43", "10:46:09", "08:41:13", "09:48:48", "13:58:01", "19:13:45", "22:23:36", "17:29:15", "22:09:01", "05:35:45", "20:51:18", "12:23:05", "10:12:26", "04:57:38", "00:21:57", "23:08:17", "14:37:57", "06:24:29", "23:05:15", "03:38:22", "07:08:32", "12:37:54", "16:55:48", "17:10:46", "18:22:25", "10:52:07", "21:15:52", "15:41:50", "15:38:57", "16:50:20", "07:35:46"};
    int n = 1;
    MovingAverages* pObj = new MovingAverages();
    clock_t start = clock();
    vector<int> result = pObj->calculate(times, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {28193, 7832, 2303, 46805, 43347, 83269, 60723, 4157, 59619, 25015, 5192, 71433, 71379, 76052, 5765, 61711, 67061, 62884, 17424, 73843, 38769, 31273, 35328, 50281, 69225, 80616, 62955, 79741, 20145, 75078, 44585, 36746, 17858, 1317, 83297, 52677, 23069, 83115, 13102, 25712, 45474, 60948, 61846, 66145, 39127, 76552, 56510, 56337, 60620, 27346};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> times = {"20:58:15", "15:54:23", "01:20:25", "06:03:26", "05:50:18", "22:00:44", "22:34:26", "18:43:18", "04:10:50", "15:43:27", "01:37:32", "03:47:45", "16:25:43", "04:44:08", "07:15:45", "14:22:11", "15:12:24", "07:38:56", "12:15:31", "17:29:37", "09:07:05", "02:02:51", "00:37:01", "09:55:08", "11:36:27", "07:34:51", "12:01:52", "08:14:04", "11:09:07", "15:13:29", "08:55:15", "18:03:22", "20:28:09", "03:24:38", "00:17:51", "09:03:11", "03:34:59", "07:29:00", "01:43:34", "04:57:45", "21:45:20", "08:44:57", "00:24:50", "06:16:32", "10:57:44", "05:28:45", "02:59:09", "01:33:43", "23:27:53", "02:45:36"};
    int n = 2;
    MovingAverages* pObj = new MovingAverages();
    clock_t start = clock();
    vector<int> result = pObj->calculate(times, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {66379, 31044, 13315, 21412, 50131, 80255, 74332, 41224, 35828, 31229, 9758, 36404, 38095, 21596, 38938, 53237, 41140, 35833, 53554, 47901, 20098, 4796, 18964, 38747, 34539, 35301, 36478, 34895, 47478, 43462, 48558, 69345, 42983, 6674, 16831, 22745, 19919, 16577, 12039, 48092, 54908, 16493, 12041, 31028, 29594, 15237, 8186, 45048, 47204};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> times = {"05:04:10", "14:00:24", "02:45:16", "02:15:33", "05:56:38", "18:17:31", "14:54:39", "09:53:11", "16:22:13", "05:51:08", "21:33:57", "16:18:00", "22:20:55", "03:20:10", "03:06:07", "14:00:46", "19:57:53", "02:53:20", "18:58:57", "09:09:55", "11:42:37", "19:19:27", "03:29:15", "15:33:03", "12:25:38", "19:06:50", "08:12:33", "19:57:40", "06:51:40", "19:20:40", "21:38:23", "20:10:34", "20:19:32", "22:49:22", "17:11:30", "07:43:10", "00:43:50", "19:09:38", "18:59:30", "13:56:24", "12:38:36", "03:24:20", "14:51:20", "23:51:21", "05:00:58", "02:29:33", "08:05:32", "15:28:17", "16:30:24", "03:37:31"};
    int n = 3;
    MovingAverages* pObj = new MovingAverages();
    clock_t start = clock();
    vector<int> result = pObj->calculate(times, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {26196, 22824, 13149, 31794, 46976, 51707, 49401, 38530, 52546, 52461, 72257, 50381, 34544, 24541, 44495, 44239, 50203, 37244, 47829, 48239, 41426, 46035, 37758, 56510, 47700, 56741, 42037, 55400, 57414, 73392, 74569, 75989, 72408, 57280, 30770, 33132, 46659, 62510, 54690, 35986, 37085, 50540, 52473, 37637, 18721, 31267, 48084, 42724};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> times = {"18:06:50", "17:33:05", "08:02:23", "08:47:21", "14:20:59", "15:11:27", "14:05:41", "21:08:02", "03:34:05", "05:20:31", "23:34:25", "01:13:29", "22:56:04", "20:18:52", "00:36:40", "11:12:19", "02:21:51", "08:11:31", "16:51:41", "21:00:40", "14:33:47", "22:31:23", "10:13:07", "19:35:11", "10:56:26", "19:24:41", "01:01:43", "12:48:16", "09:35:10", "16:05:33", "13:00:51", "01:05:27", "00:08:05", "16:47:09", "20:46:36", "10:27:20", "16:51:30", "02:51:44", "22:58:34", "01:47:09", "02:34:45", "06:28:29", "18:47:00", "10:40:56", "15:03:08", "09:31:12", "00:16:37", "03:25:30", "15:32:50", "03:17:19"};
    int n = 49;
    MovingAverages* pObj = new MovingAverages();
    clock_t start = clock();
    vector<int> result = pObj->calculate(times, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {42634, 41545};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> times = {"15:15:33", "19:09:04", "19:21:05", "17:58:53", "00:09:50", "01:26:38", "23:38:56", "01:59:16", "23:28:19", "03:15:15", "08:44:09", "08:54:27", "07:35:05", "00:21:25", "11:11:03", "10:58:59", "20:03:59", "13:11:47", "20:25:41", "22:06:50", "07:32:12", "13:34:17", "01:40:29", "01:07:42", "07:57:36", "08:22:29", "15:08:23", "17:21:32", "10:21:37", "20:55:10", "06:55:01", "00:13:47", "08:04:31", "14:32:16", "10:23:59", "02:19:46", "11:01:03", "00:46:39", "14:10:03", "05:25:03", "23:31:52", "08:19:31", "23:50:16", "11:17:33", "16:57:30", "11:36:29", "03:14:11", "16:06:31", "06:22:04", "02:04:33"};
    int n = 50;
    MovingAverages* pObj = new MovingAverages();
    clock_t start = clock();
    vector<int> result = pObj->calculate(times, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {39636};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> times = {"03:44:17", "22:41:01", "05:02:52", "12:14:19", "15:57:02", "02:19:30", "09:41:56", "00:59:32", "07:56:10", "16:48:34", "04:18:30", "05:35:21", "03:41:45", "17:57:50", "00:45:13", "01:29:56", "15:21:35", "14:00:09", "22:34:03", "19:09:30", "23:15:44", "14:03:18", "20:52:16", "10:20:40", "18:48:21", "15:16:47", "21:34:28", "03:08:35", "13:51:49", "21:39:51", "20:24:19", "14:10:40", "01:42:18", "22:04:48", "01:35:00", "08:36:27", "18:07:43", "21:12:41", "00:00:40", "18:37:03", "10:54:25", "14:29:10"};
    int n = 26;
    MovingAverages* pObj = new MovingAverages();
    clock_t start = clock();
    vector<int> result = pObj->calculate(times, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {42221, 44691, 41986, 43206, 44511, 45128, 46769, 45662, 48582, 47703, 46567, 48481, 50644, 50133, 50224, 51630, 53428};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> times = {"02:15:03", "03:05:34", "03:01:31", "02:11:39", "07:14:57", "15:58:20", "01:25:38", "20:42:55", "08:47:00", "11:26:28", "10:43:29", "18:43:38", "09:21:50", "00:38:00", "18:27:36", "23:26:31", "16:39:36", "00:12:28", "02:34:19", "04:11:10", "23:47:24", "23:14:28", "05:32:48", "03:39:59", "11:56:41", "07:53:59", "04:04:00", "18:43:34", "20:49:27", "10:59:04", "03:29:46", "11:10:29", "07:13:41", "23:16:34", "03:31:32", "04:58:50", "03:57:49", "06:50:31", "04:23:52", "13:51:10", "09:33:48", "06:20:39", "18:52:54", "10:12:59", "09:59:32", "00:43:01", "09:02:01", "20:18:11", "04:36:20", "16:59:09"};
    int n = 19;
    MovingAverages* pObj = new MovingAverages();
    clock_t start = clock();
    vector<int> result = pObj->calculate(times, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {33525, 33892, 37814, 41644, 42279, 41600, 40837, 42064, 38909, 40793, 42571, 42620, 39734, 40077, 41327, 42239, 38466, 36253, 36964, 37774, 37814, 35931, 33339, 33490, 36373, 36046, 36442, 35808, 33971, 33872, 32664, 35220};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> times = {"22:16:39", "16:38:48", "04:48:20", "14:20:09", "09:43:55", "19:18:59", "17:42:48", "06:00:21", "10:28:51", "00:29:35", "21:10:12", "11:25:39", "18:51:23", "14:49:10", "10:30:32", "08:24:21", "07:00:02", "05:05:54", "21:30:22", "12:53:28", "18:21:06", "20:43:02", "23:37:33", "04:38:36", "03:01:55", "04:29:08", "00:22:52", "00:07:06", "03:12:11", "11:36:05", "07:53:46", "09:32:45", "16:33:57", "21:15:39", "19:58:34", "00:18:29", "19:38:52", "17:22:56", "20:46:33", "08:44:52", "15:22:28", "11:42:45", "20:27:52", "12:20:10", "14:12:45"};
    int n = 36;
    MovingAverages* pObj = new MovingAverages();
    clock_t start = clock();
    vector<int> result = pObj->calculate(times, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {41920, 41657, 41730, 43327, 42769, 43333, 42573, 42848, 43481, 43854};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> times = {"07:52:23", "07:12:01", "09:01:26", "01:29:31", "21:19:46", "16:16:14", "10:14:55", "17:46:17", "13:20:12", "15:31:14", "23:37:24", "16:33:50", "07:59:09", "01:44:24", "03:32:59", "14:27:23", "16:39:50", "09:31:01", "17:33:29", "08:33:01", "10:31:03", "08:48:07", "22:52:59", "01:44:51", "20:05:30", "18:42:56", "21:46:13", "16:31:39", "19:49:28"};
    int n = 1;
    MovingAverages* pObj = new MovingAverages();
    clock_t start = clock();
    vector<int> result = pObj->calculate(times, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {28343, 25921, 32486, 5371, 76786, 58574, 36895, 63977, 48012, 55874, 85044, 59630, 28749, 6264, 12779, 52043, 59990, 34261, 63209, 30781, 37863, 31687, 82379, 6291, 72330, 67376, 78373, 59499, 71368};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> times = {"09:03:58", "20:09:06", "08:26:59", "15:29:36", "08:56:39", "16:17:56", "22:51:43", "22:20:28", "01:11:38", "09:46:01", "22:28:03", "19:26:08", "16:19:59", "19:57:12", "17:58:13", "07:51:15", "20:22:32", "19:11:35", "20:48:50", "18:10:18", "09:45:59", "03:27:07", "19:37:46", "22:23:55", "00:55:36", "15:44:13", "14:53:04", "15:14:50", "07:45:10", "10:45:54", "20:01:25", "15:26:40", "16:12:23", "22:05:20", "01:07:04", "20:00:46", "04:15:59", "22:48:43", "21:36:22", "09:38:25", "05:02:55", "21:19:31", "09:14:34", "22:06:43", "02:19:01", "02:24:55", "10:02:51", "08:20:28", "08:07:28"};
    int n = 38;
    MovingAverages* pObj = new MovingAverages();
    clock_t start = clock();
    vector<int> result = pObj->calculate(times, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {53021, 54209, 53213, 52891, 53443, 53471, 54022, 52076, 50188, 51027, 50892, 49533};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> times = {"16:14:16", "07:45:13", "18:59:14", "21:26:16", "02:22:53", "05:55:08", "19:58:41", "11:13:00", "05:12:43", "23:08:53", "15:56:31", "19:29:32"};
    int n = 6;
    MovingAverages* pObj = new MovingAverages();
    clock_t start = clock();
    vector<int> result = pObj->calculate(times, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {43630, 45874, 47952, 39686, 40713, 48849, 56993};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> times = {"07:39:46", "22:27:17", "11:21:07", "18:29:56", "07:58:50", "07:26:56", "21:24:02", "03:01:12", "11:22:35", "16:54:08", "04:31:50", "07:54:52", "00:37:09", "13:19:41", "02:28:29", "23:27:39", "18:19:00", "19:17:02", "22:20:21", "13:50:05", "04:14:25", "10:33:00", "08:14:57", "17:21:58", "13:32:20", "11:01:22", "00:15:55", "00:03:02", "13:21:41", "03:38:20", "17:55:22", "20:12:33", "03:28:24", "15:31:01", "18:04:11"};
    int n = 14;
    MovingAverages* pObj = new MovingAverages();
    clock_t start = clock();
    vector<int> result = pObj->calculate(times, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {39725, 38391, 38650, 40441, 40643, 44335, 45977, 41564, 43501, 42697, 42816, 45132, 45932, 45841, 42426, 45226, 40129, 40027, 40265, 35414, 35847, 39403};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> times = {"08:25:22", "01:23:16", "22:14:48", "07:39:42", "15:50:19", "20:57:12", "06:37:59", "01:10:39", "18:11:35", "10:22:45", "14:42:28", "23:39:49", "13:10:51", "09:22:57", "01:19:56", "08:29:42", "23:55:29"};
    int n = 2;
    MovingAverages* pObj = new MovingAverages();
    clock_t start = clock();
    vector<int> result = pObj->calculate(times, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {17659, 42542, 53835, 42300, 66225, 49655, 14059, 34867, 51430, 45156, 69068, 66320, 40614, 19286, 17689, 58355};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> times = {"00:12:34", "22:27:15", "11:32:46", "22:49:46", "05:19:38", "10:23:26", "19:47:05", "22:07:17"};
    int n = 7;
    MovingAverages* pObj = new MovingAverages();
    clock_t start = clock();
    vector<int> result = pObj->calculate(times, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {47592, 58861};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> times = {"05:23:34", "15:32:42", "23:11:31", "22:13:13", "22:20:44", "03:07:30", "17:18:26", "17:00:19", "16:22:18", "18:06:06", "08:55:01", "01:01:58", "06:40:57", "23:51:02", "12:37:44", "17:25:07", "23:38:39", "23:17:01", "21:57:05", "05:52:04", "08:19:39", "08:20:31", "14:02:33", "07:49:41", "17:51:36", "11:16:44", "18:18:31", "23:55:25", "09:07:57", "12:20:04", "22:35:43", "21:26:45"};
    int n = 5;
    MovingAverages* pObj = new MovingAverages();
    clock_t start = clock();
    vector<int> result = pObj->calculate(times, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {63860, 62228, 63496, 59042, 54831, 51775, 55946, 44228, 36796, 42180, 38240, 44361, 60641, 72594, 71227, 66359, 59813, 48796, 42142, 31973, 40608, 42733, 49909, 57023, 57962, 53984, 62132, 64390};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> times = {"01:19:10", "01:17:40", "01:19:44", "01:17:23", "01:17:07"};
    int n = 5;
    MovingAverages* pObj = new MovingAverages();
    clock_t start = clock();
    vector<int> result = pObj->calculate(times, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4692};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> times = {"00:59:59", "01:59:59", "05:59:00", "00:02:00", "00:02:00", "00:02:00", "00:02:00", "00:02:59"};
    int n = 3;
    MovingAverages* pObj = new MovingAverages();
    clock_t start = clock();
    vector<int> result = pObj->calculate(times, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10779, 9619, 7260, 120, 120, 139};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> times = {"10:19:10", "01:17:40", "01:19:44", "01:17:23", "01:17:07"};
    int n = 3;
    MovingAverages* pObj = new MovingAverages();
    clock_t start = clock();
    vector<int> result = pObj->calculate(times, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15531, 4695, 4684};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7390554&rd=5855&pm=2924
********************************************************************************
#include <string> 
#include <cmath> 
#include <cstdlib> 
#include <map> 
#include <algorithm> 
#include <list> 
#include <set> 
#include <iostream> 
#include <sstream> 
#include <cstring> 
#include <vector> 
#include <climits> 
using namespace std; 
 
#define cs c_str() 
#define INF INT_MAX / 2 
#define pb(x) push_back (x) 
#define mp(x,y) make_pair(x,y) 
#define FOR(a,b) for(int a=0; a<b; a++) 
#define FoR(a,b) int a; for(a=0;a<b;a++) 
#define FORIT(it,v) for(__typeof(v.begin()) it=v.begin(); it != v.end(); it++) 
#define debug(v) {cout  << #v << ": "; FORIT(i,v) cout << *i << " "; cout << endl;} 
#define ispisi(poc,kraj) {for (__typeof(poc)it=poc; it!=kraj; it++) cout << *it << " "; cout << endl;} 
//triba pozvat npr. ispisi(x+0,x+10) 
int dva_na[] = {1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768,65536,131972,262144,524288,1048576}; 
template <typename T,typename X> ostream& operator <<(ostream &os, pair<T,X>&x) {cout << "(" << x.first << "," << x.second << ")";} 
template <typename T> string toString (T x) {char poc[100]; if (floor((double)x) != x) sprintf (poc, "%lf", (double) x);else sprintf (poc,"%lld", (long long) x); return string(poc);} 
 
class MovingAverages { 
  public:  
 
  vector <int> calculate(vector <string> t, int n)  { 
      vector < int > rj; 
       
      for (int j=0; j<t.size(); j++) { 
          int u = 0; 
          for (int i=0; i<n; i++) { 
              if (i + j == t.size()) return rj; 
              string x = t[i+j]; 
              int h, m, s; 
              sscanf (x.c_str(), "%d:%d:%d", &h, &m, &s); 
              u += h * 3600 + m * 60 + s;                    
          }     
          rj.pb(u / n); 
      }     
   
  }  
   
  
};  
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/