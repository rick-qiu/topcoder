/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4571
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

class TVWatching {
public:
    int mostMinutes(vector<string> programs);
};

int TVWatching::mostMinutes(vector<string> programs) {
    int ret;
    return ret;
}


int test0() {
    vector<string> programs = {"09:00AM - 12:00PM", "02:00PM - 07:00PM", "09:00PM - 02:00AM"};
    TVWatching* pObj = new TVWatching();
    clock_t start = clock();
    int result = pObj->mostMinutes(programs);
    clock_t end = clock();
    delete pObj;
    int expected = 780;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> programs = {"01:15PM - 11:20PM", "08:00AM - 04:13PM", "03:12PM - 12:06AM", "02:00PM - 02:01PM"};
    TVWatching* pObj = new TVWatching();
    clock_t start = clock();
    int result = pObj->mostMinutes(programs);
    clock_t end = clock();
    delete pObj;
    int expected = 605;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> programs = {"12:34PM - 12:34PM"};
    TVWatching* pObj = new TVWatching();
    clock_t start = clock();
    int result = pObj->mostMinutes(programs);
    clock_t end = clock();
    delete pObj;
    int expected = 1440;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> programs = {"11:00PM - 12:00AM", "11:55PM - 12:05AM", "12:00AM - 05:00AM", "06:00PM - 06:30PM", "06:15PM - 06:35PM"};
    TVWatching* pObj = new TVWatching();
    clock_t start = clock();
    int result = pObj->mostMinutes(programs);
    clock_t end = clock();
    delete pObj;
    int expected = 390;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> programs = {"11:11AM - 12:12AM", "11:11AM - 12:12AM"};
    TVWatching* pObj = new TVWatching();
    clock_t start = clock();
    int result = pObj->mostMinutes(programs);
    clock_t end = clock();
    delete pObj;
    int expected = 781;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> programs = {"12:00AM - 12:00PM", "12:00PM - 12:00AM"};
    TVWatching* pObj = new TVWatching();
    clock_t start = clock();
    int result = pObj->mostMinutes(programs);
    clock_t end = clock();
    delete pObj;
    int expected = 1440;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> programs = {"10:46AM - 08:53PM", "10:12AM - 08:02PM", "12:19PM - 07:00PM", "12:16PM - 10:27PM", "03:50AM - 08:07AM", "07:42PM - 04:29AM", "08:16PM - 10:09AM", "09:59AM - 09:38AM", "06:30PM - 09:31PM", "03:33PM - 02:16AM", "09:45AM - 06:56PM", "02:09AM - 04:24PM", "03:45AM - 09:14AM", "08:50PM - 03:36PM", "04:24AM - 08:14PM", "09:00PM - 05:19PM", "07:06AM - 11:15PM", "12:58AM - 03:17AM", "05:12PM - 09:01PM", "10:01AM - 12:04PM", "04:09AM - 12:57AM", "10:35AM - 05:27AM", "07:33AM - 12:46AM", "05:44AM - 06:32AM", "07:59PM - 12:28PM", "01:09AM - 02:38PM", "02:51AM - 05:59PM", "02:08PM - 05:13PM", "01:04PM - 09:47AM", "12:51AM - 05:39PM", "06:11PM - 12:35PM", "03:01AM - 02:29AM", "03:13PM - 04:03PM", "09:09PM - 08:43AM"};
    TVWatching* pObj = new TVWatching();
    clock_t start = clock();
    int result = pObj->mostMinutes(programs);
    clock_t end = clock();
    delete pObj;
    int expected = 1423;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> programs = {"05:26PM - 01:58PM", "10:09AM - 09:36AM", "12:30PM - 05:59AM", "07:04AM - 03:59PM", "03:09PM - 02:44AM", "05:15PM - 03:11PM", "04:59PM - 05:08PM", "11:11AM - 02:01PM", "06:58PM - 05:56PM", "06:42PM - 07:16PM", "10:44PM - 01:44PM", "12:32AM - 09:10AM", "12:33AM - 02:10PM", "04:40AM - 12:41PM", "10:39AM - 03:48AM", "03:26PM - 11:00PM", "07:36PM - 10:07PM", "07:19AM - 05:32PM", "10:39PM - 07:50AM", "10:06AM - 02:12AM", "08:59AM - 08:44AM", "12:20AM - 12:48PM", "11:24PM - 11:04AM", "02:56PM - 05:44PM", "03:32AM - 03:45AM", "03:40PM - 03:53PM", "03:24AM - 04:21PM", "08:12PM - 12:04AM", "09:33PM - 05:55PM", "05:59AM - 06:25AM", "02:44AM - 07:14AM", "11:04PM - 09:26AM", "01:42PM - 05:49PM", "07:18PM - 02:48PM", "02:03AM - 07:08PM", "07:07PM - 09:09PM", "06:48AM - 08:10AM", "06:03AM - 07:52AM", "05:32AM - 10:08AM"};
    TVWatching* pObj = new TVWatching();
    clock_t start = clock();
    int result = pObj->mostMinutes(programs);
    clock_t end = clock();
    delete pObj;
    int expected = 1425;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> programs = {"03:00AM - 09:00PM", "03:07PM - 03:16PM", "08:57AM - 03:59PM", "09:03AM - 07:47AM", "12:11PM - 09:19AM", "01:27AM - 01:49AM", "12:49AM - 05:57PM", "06:11AM - 05:47PM", "12:35PM - 11:09PM", "10:20AM - 09:26AM", "01:42AM - 06:03AM", "07:09AM - 04:56AM", "07:54PM - 06:04PM", "10:08PM - 11:32PM", "07:06PM - 09:16PM", "07:49PM - 11:47AM", "12:00AM - 08:37PM", "07:46AM - 03:32PM", "03:39AM - 03:09AM", "09:41AM - 05:27PM", "11:46PM - 10:56PM", "02:40AM - 08:45AM", "06:18AM - 03:13AM", "10:17AM - 07:07AM", "04:34AM - 08:00PM", "06:58PM - 06:54AM", "10:01PM - 08:10AM", "06:19AM - 11:22AM", "04:07PM - 03:42PM", "06:31AM - 06:41PM", "08:11AM - 02:51AM", "07:20PM - 06:38AM", "05:16PM - 04:51PM", "03:04PM - 10:18PM", "05:42AM - 02:57PM", "01:24AM - 08:47AM", "04:04AM - 11:47PM"};
    TVWatching* pObj = new TVWatching();
    clock_t start = clock();
    int result = pObj->mostMinutes(programs);
    clock_t end = clock();
    delete pObj;
    int expected = 1415;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> programs = {"06:18AM - 09:09AM", "03:05AM - 12:15PM", "05:49AM - 10:38PM", "11:02AM - 10:50PM", "02:46PM - 12:33PM", "10:14AM - 07:17AM", "04:08PM - 07:32AM", "12:26AM - 02:51AM", "09:13AM - 03:31PM", "01:37AM - 11:35PM", "01:30AM - 10:21AM"};
    TVWatching* pObj = new TVWatching();
    clock_t start = clock();
    int result = pObj->mostMinutes(programs);
    clock_t end = clock();
    delete pObj;
    int expected = 1318;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> programs = {"01:33AM - 11:05PM", "10:23PM - 12:15AM", "08:20PM - 10:43PM", "02:21PM - 12:56PM", "04:18PM - 05:32AM", "03:21PM - 12:52PM", "04:40PM - 11:58AM", "07:47PM - 03:13AM", "04:42PM - 04:42PM", "11:04AM - 07:38PM", "08:58PM - 04:42AM", "08:28PM - 07:52PM", "10:15AM - 04:45AM", "10:56PM - 08:41AM", "12:53AM - 03:48AM", "01:00PM - 11:54AM", "07:36AM - 12:12AM", "03:59PM - 05:16AM", "01:39PM - 10:29AM", "07:34AM - 08:06AM", "08:43AM - 03:32AM", "07:15AM - 11:50PM", "10:51AM - 06:14AM", "09:03AM - 06:02AM", "05:35AM - 11:04PM", "10:51PM - 10:54PM", "02:55PM - 08:15PM", "04:37PM - 06:34AM", "01:27PM - 07:21AM", "07:40AM - 11:25AM", "07:10AM - 05:54PM", "01:40AM - 08:48AM", "09:30PM - 12:38AM", "07:28AM - 08:30PM", "12:05PM - 06:57PM", "04:02PM - 10:57AM", "06:06AM - 10:51PM", "04:48PM - 11:48AM", "07:57PM - 05:19AM", "10:47AM - 11:57PM"};
    TVWatching* pObj = new TVWatching();
    clock_t start = clock();
    int result = pObj->mostMinutes(programs);
    clock_t end = clock();
    delete pObj;
    int expected = 1440;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> programs = {"08:41PM - 09:38AM", "06:36PM - 03:28PM", "06:08PM - 08:57PM", "02:54PM - 06:05AM", "08:52PM - 06:41PM", "11:19AM - 06:59AM", "06:14PM - 02:52PM", "11:12PM - 12:02AM", "06:54AM - 04:06PM", "08:50AM - 06:32AM", "05:59AM - 04:20PM", "06:10PM - 02:12AM", "02:29AM - 08:23PM", "03:20PM - 01:27AM", "03:52PM - 04:15AM", "03:32AM - 03:16PM", "01:04AM - 06:34PM", "03:06AM - 02:39AM"};
    TVWatching* pObj = new TVWatching();
    clock_t start = clock();
    int result = pObj->mostMinutes(programs);
    clock_t end = clock();
    delete pObj;
    int expected = 1413;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> programs = {"02:01PM - 06:29AM", "09:13AM - 04:28AM", "06:53PM - 12:09AM"};
    TVWatching* pObj = new TVWatching();
    clock_t start = clock();
    int result = pObj->mostMinutes(programs);
    clock_t end = clock();
    delete pObj;
    int expected = 1155;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> programs = {"09:28PM - 08:33PM", "11:51AM - 10:40AM", "03:41AM - 09:10PM", "05:15PM - 08:44AM", "05:29AM - 08:38PM", "12:43AM - 01:23PM", "04:01PM - 12:11PM", "06:32PM - 08:08PM", "12:14PM - 12:36AM", "05:07AM - 11:17AM", "10:53PM - 10:18AM", "03:26PM - 02:33PM", "03:25AM - 11:59PM", "05:02AM - 06:00PM", "05:10PM - 02:23PM", "08:08PM - 06:37AM", "09:30AM - 06:30AM", "11:18AM - 10:27AM", "04:00AM - 05:19PM", "07:54AM - 06:12PM", "07:53AM - 08:23AM", "06:14AM - 12:11PM", "11:42PM - 06:55AM", "10:06AM - 10:14AM", "04:02AM - 04:23PM", "01:34PM - 04:19AM", "06:58PM - 06:49PM", "04:33PM - 12:19AM", "10:07AM - 12:50PM", "07:37AM - 06:30PM", "08:44AM - 08:29PM", "06:12PM - 12:25AM", "01:21PM - 01:27AM", "08:02AM - 02:51PM", "03:13PM - 09:54PM", "09:07AM - 02:44PM", "07:00PM - 12:54AM", "09:53AM - 12:32AM", "06:29PM - 02:08AM", "03:35AM - 02:35AM", "09:41PM - 05:11AM", "09:23AM - 04:09PM", "01:18PM - 09:16AM", "07:13AM - 03:10PM"};
    TVWatching* pObj = new TVWatching();
    clock_t start = clock();
    int result = pObj->mostMinutes(programs);
    clock_t end = clock();
    delete pObj;
    int expected = 1431;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> programs = {"11:41AM - 04:17PM", "12:50PM - 08:53PM", "05:17AM - 12:26PM", "12:45PM - 01:01PM", "07:14AM - 09:16AM", "07:12AM - 12:11AM", "06:01PM - 12:16PM", "05:04PM - 11:07AM", "08:57PM - 01:10PM", "08:56PM - 12:13AM", "12:58AM - 03:57PM", "09:00AM - 01:03PM", "09:29PM - 04:59AM", "06:44PM - 04:04AM", "04:29PM - 05:19AM", "03:26AM - 04:39AM"};
    TVWatching* pObj = new TVWatching();
    clock_t start = clock();
    int result = pObj->mostMinutes(programs);
    clock_t end = clock();
    delete pObj;
    int expected = 1362;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> programs = {"08:44AM - 08:39AM", "04:08PM - 12:59AM", "09:43AM - 04:39PM", "07:08PM - 11:20PM", "05:38AM - 12:18PM", "08:25PM - 11:06AM", "11:12AM - 10:06PM", "09:07PM - 01:26AM"};
    TVWatching* pObj = new TVWatching();
    clock_t start = clock();
    int result = pObj->mostMinutes(programs);
    clock_t end = clock();
    delete pObj;
    int expected = 1435;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> programs = {"10:20AM - 12:32AM", "08:11PM - 11:29AM", "07:46AM - 09:45PM", "08:57AM - 05:55AM", "06:54AM - 06:20PM", "06:29AM - 07:19PM", "06:14AM - 03:05PM", "01:46PM - 02:49PM", "11:29AM - 10:15PM", "04:36AM - 05:26PM", "10:46AM - 05:40AM", "12:56PM - 05:04PM", "07:46AM - 12:14PM", "05:26AM - 08:22PM", "01:42PM - 07:07PM", "05:49AM - 09:44PM", "10:42AM - 06:36AM", "04:57AM - 06:22PM", "12:28PM - 02:21PM", "08:48PM - 03:42PM", "08:16PM - 09:51AM", "07:47PM - 07:10AM", "08:13PM - 10:34AM", "03:54PM - 12:35PM", "12:51AM - 10:11PM", "06:01AM - 02:59AM", "01:54AM - 04:26PM", "05:31AM - 08:03AM"};
    TVWatching* pObj = new TVWatching();
    clock_t start = clock();
    int result = pObj->mostMinutes(programs);
    clock_t end = clock();
    delete pObj;
    int expected = 1304;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> programs = {"12:53AM - 03:20AM", "07:11PM - 04:14PM", "10:07PM - 11:07AM", "03:53AM - 10:12AM", "03:43PM - 02:47AM", "07:55PM - 04:08AM", "07:39AM - 02:16PM", "09:52AM - 04:04AM", "10:20PM - 02:17AM", "09:18AM - 12:50PM", "08:20AM - 08:40PM", "12:07PM - 08:52AM", "12:33PM - 05:02AM", "05:58PM - 02:36AM", "08:23PM - 10:53AM", "10:03PM - 07:04PM", "02:52AM - 11:47PM", "12:54AM - 06:22AM", "04:18AM - 08:18PM", "12:44AM - 09:10AM", "12:23PM - 09:20PM", "01:52PM - 12:47PM", "07:05AM - 05:38PM", "03:40PM - 02:13AM", "10:28PM - 12:49PM", "11:52PM - 11:13PM", "03:07PM - 06:51PM", "03:01PM - 06:18PM", "10:21AM - 03:07PM", "07:12AM - 01:45PM", "05:37PM - 10:01AM", "10:29AM - 01:18AM", "03:58AM - 01:32PM", "02:14AM - 09:23PM", "02:01PM - 11:00PM", "12:14AM - 06:23PM", "11:22AM - 09:03PM"};
    TVWatching* pObj = new TVWatching();
    clock_t start = clock();
    int result = pObj->mostMinutes(programs);
    clock_t end = clock();
    delete pObj;
    int expected = 1401;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> programs = {"11:18PM - 11:50PM", "05:05PM - 01:20PM", "06:22PM - 08:22AM", "08:37PM - 05:52PM", "07:06PM - 04:09PM"};
    TVWatching* pObj = new TVWatching();
    clock_t start = clock();
    int result = pObj->mostMinutes(programs);
    clock_t end = clock();
    delete pObj;
    int expected = 1275;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> programs = {"03:09PM - 05:52PM", "01:57PM - 02:17PM", "11:39AM - 07:54PM", "06:23PM - 10:15PM", "08:13PM - 11:14PM", "01:30PM - 05:38AM", "02:21AM - 11:49PM"};
    TVWatching* pObj = new TVWatching();
    clock_t start = clock();
    int result = pObj->mostMinutes(programs);
    clock_t end = clock();
    delete pObj;
    int expected = 1288;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> programs = {"04:42AM - 02:36AM", "07:59AM - 04:06AM", "11:11PM - 02:25PM", "02:56AM - 06:34PM", "11:47AM - 09:37PM", "07:59AM - 07:26PM", "10:27PM - 08:36AM", "07:37AM - 09:27PM", "09:14AM - 07:55PM", "07:51PM - 12:50AM", "11:22AM - 01:01PM", "08:29AM - 08:15AM", "01:00AM - 05:20AM", "11:16AM - 06:54PM", "01:16PM - 03:25AM", "06:22AM - 11:49AM", "05:15PM - 12:39AM", "01:42AM - 09:59AM", "05:33AM - 11:26PM", "08:14PM - 09:36AM", "11:09PM - 04:44PM", "08:55PM - 03:01PM", "09:22PM - 12:44PM", "01:33PM - 04:49AM", "10:25PM - 11:22PM", "12:05PM - 01:05AM", "08:07PM - 02:58PM", "12:20PM - 08:38PM", "10:56PM - 03:30AM", "04:07AM - 02:55AM", "11:27PM - 08:49PM", "04:51PM - 06:47AM", "02:02PM - 04:16PM", "04:30AM - 02:09AM", "10:30PM - 09:49PM", "01:42PM - 02:55PM", "05:27AM - 09:51PM", "03:24AM - 07:13PM", "02:01AM - 03:14PM", "09:49AM - 11:55PM", "09:03PM - 04:02AM"};
    TVWatching* pObj = new TVWatching();
    clock_t start = clock();
    int result = pObj->mostMinutes(programs);
    clock_t end = clock();
    delete pObj;
    int expected = 1426;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> programs = {"03:35AM - 03:26AM", "05:43PM - 03:48PM", "04:41AM - 06:55AM", "07:44AM - 09:31AM", "05:27AM - 01:21PM", "12:09PM - 06:54PM", "05:21PM - 05:43AM", "10:51PM - 09:16PM", "09:59PM - 05:10PM", "08:37PM - 05:44PM", "02:45AM - 12:19AM", "01:20AM - 08:16PM", "03:03AM - 07:06PM", "06:34PM - 09:32PM", "10:38AM - 07:04AM", "08:07PM - 07:20AM", "03:47AM - 12:19PM", "03:35PM - 01:24PM", "11:26PM - 11:25PM", "01:43AM - 10:57AM", "05:10PM - 05:49AM", "05:30AM - 12:36PM", "11:48AM - 03:43AM", "06:43PM - 11:41PM", "10:47AM - 07:31PM", "10:44PM - 11:57PM", "09:20PM - 09:21AM", "02:02AM - 09:33PM", "08:44AM - 02:10AM", "05:23PM - 12:52AM", "09:42PM - 10:00PM", "06:50PM - 07:17AM", "09:14PM - 10:34PM", "07:24AM - 09:19PM", "08:20AM - 04:26PM", "10:19PM - 02:01AM", "05:29PM - 02:06AM", "08:19AM - 06:49AM", "10:27AM - 09:40AM", "05:19AM - 12:54PM", "07:04PM - 01:27AM", "06:58AM - 04:51PM", "03:26PM - 08:37AM", "11:58AM - 08:13AM", "03:17PM - 01:40AM", "05:06AM - 12:18AM", "11:52AM - 06:45PM", "12:16AM - 01:22PM", "04:45AM - 05:34PM"};
    TVWatching* pObj = new TVWatching();
    clock_t start = clock();
    int result = pObj->mostMinutes(programs);
    clock_t end = clock();
    delete pObj;
    int expected = 1439;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> programs = {"07:21PM - 11:01AM", "07:08PM - 07:18PM", "05:02AM - 02:48AM", "01:56PM - 05:18AM", "08:55PM - 05:22PM", "06:22PM - 12:00PM", "08:31PM - 06:29PM", "01:39PM - 01:50AM", "09:06AM - 07:32PM", "02:57AM - 12:43AM", "02:45AM - 02:09PM", "01:55AM - 07:00PM", "02:46PM - 05:29PM", "11:04PM - 11:04PM", "01:12PM - 08:27AM", "06:39AM - 07:08PM", "03:48AM - 03:39AM", "05:51PM - 10:28PM", "07:08PM - 11:49AM", "11:47AM - 06:51PM", "01:23AM - 09:44PM", "09:46PM - 04:01PM", "08:42PM - 04:45PM", "12:43PM - 05:52PM", "05:27PM - 12:34AM", "11:32PM - 07:24PM", "06:02AM - 11:38PM", "06:56AM - 07:42PM", "02:18PM - 06:48PM", "01:08PM - 11:38PM", "12:22PM - 04:14AM", "06:14PM - 12:55PM", "08:04AM - 06:23AM", "05:22AM - 09:00PM", "10:06AM - 04:21AM", "02:27PM - 04:03AM", "11:30PM - 06:50AM", "10:57PM - 02:24PM", "12:58PM - 12:13PM"};
    TVWatching* pObj = new TVWatching();
    clock_t start = clock();
    int result = pObj->mostMinutes(programs);
    clock_t end = clock();
    delete pObj;
    int expected = 1440;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> programs = {"08:57PM - 12:10PM", "01:37PM - 05:33PM", "07:03PM - 12:54PM", "02:43PM - 03:59PM", "02:49PM - 05:02AM", "06:04PM - 05:02AM", "06:24PM - 07:01PM", "11:07PM - 09:59AM", "08:25PM - 11:00PM", "01:52AM - 07:23AM"};
    TVWatching* pObj = new TVWatching();
    clock_t start = clock();
    int result = pObj->mostMinutes(programs);
    clock_t end = clock();
    delete pObj;
    int expected = 1344;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> programs = {"08:10PM - 12:13PM", "09:37PM - 04:30PM", "06:37PM - 06:37AM", "05:54PM - 03:54PM", "03:39PM - 10:02AM", "12:42PM - 01:34AM", "07:06PM - 01:54AM", "07:42PM - 12:36AM", "06:52AM - 01:14AM", "04:40PM - 06:24AM", "04:22PM - 02:26AM"};
    TVWatching* pObj = new TVWatching();
    clock_t start = clock();
    int result = pObj->mostMinutes(programs);
    clock_t end = clock();
    delete pObj;
    int expected = 1320;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> programs = {"02:36PM - 02:30AM", "12:05AM - 11:33PM", "05:25AM - 09:39PM", "04:12PM - 09:36AM", "04:50PM - 05:17AM", "09:51PM - 08:17AM", "01:18AM - 10:47AM", "12:17AM - 07:52AM", "07:58PM - 12:07PM", "02:46AM - 07:52PM", "02:17PM - 11:31AM", "09:19AM - 12:26AM", "05:43PM - 09:49PM", "12:46AM - 11:47PM", "09:11AM - 06:55PM", "03:43AM - 03:55PM", "10:03PM - 12:02PM", "11:35PM - 12:51AM", "11:38PM - 02:07PM", "05:39PM - 04:12AM", "03:56PM - 11:34PM", "06:22AM - 12:22PM", "04:14PM - 07:31PM", "09:40PM - 08:48AM", "03:02AM - 04:44AM", "04:56AM - 02:46AM", "04:30PM - 07:43PM", "09:35AM - 08:41AM", "12:51PM - 12:59AM", "06:36PM - 03:46AM", "03:31PM - 05:10PM", "11:48AM - 06:10AM", "09:20PM - 06:37AM", "10:01AM - 01:09PM", "06:52PM - 04:50PM"};
    TVWatching* pObj = new TVWatching();
    clock_t start = clock();
    int result = pObj->mostMinutes(programs);
    clock_t end = clock();
    delete pObj;
    int expected = 1412;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> programs = {"09:10PM - 01:20PM", "11:00AM - 04:11AM", "04:23AM - 01:01PM", "02:54AM - 03:03PM", "08:47PM - 11:30PM", "01:29PM - 09:09PM", "02:55PM - 01:07AM", "04:38PM - 09:17PM", "03:35PM - 10:25PM", "02:45AM - 08:01AM", "01:59AM - 03:29AM", "10:07PM - 09:35PM", "11:34PM - 08:04PM", "08:46AM - 01:06PM", "10:28AM - 03:37PM", "02:12AM - 07:23AM", "06:23PM - 09:11AM", "11:52AM - 07:48AM", "05:44PM - 12:35PM", "08:24AM - 02:49AM", "02:14PM - 06:15PM", "05:46AM - 04:34AM", "12:03AM - 12:27AM", "01:02AM - 04:24PM", "04:58PM - 10:29AM", "12:42PM - 07:36AM", "09:40AM - 07:01AM", "03:58PM - 06:05PM"};
    TVWatching* pObj = new TVWatching();
    clock_t start = clock();
    int result = pObj->mostMinutes(programs);
    clock_t end = clock();
    delete pObj;
    int expected = 1430;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> programs = {"03:23AM - 06:47PM"};
    TVWatching* pObj = new TVWatching();
    clock_t start = clock();
    int result = pObj->mostMinutes(programs);
    clock_t end = clock();
    delete pObj;
    int expected = 924;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> programs = {"05:25PM - 02:58PM", "04:45PM - 04:39PM", "07:11AM - 06:17AM", "05:11PM - 07:32PM", "09:55AM - 06:34AM", "07:19AM - 05:17PM", "06:57PM - 01:05AM", "04:45AM - 10:26AM", "01:05AM - 10:33AM", "05:19AM - 04:57PM", "03:30AM - 09:08AM", "10:46AM - 04:00AM", "05:13AM - 08:49PM", "05:10PM - 03:23AM", "02:34PM - 11:05AM", "06:21AM - 02:56AM"};
    TVWatching* pObj = new TVWatching();
    clock_t start = clock();
    int result = pObj->mostMinutes(programs);
    clock_t end = clock();
    delete pObj;
    int expected = 1434;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> programs = {"04:15AM - 11:16PM", "03:21AM - 02:02AM", "07:04PM - 09:27AM", "10:01AM - 09:58PM", "06:20PM - 11:16AM", "02:56PM - 10:05PM", "08:16AM - 02:55PM", "07:33PM - 02:05PM", "08:52PM - 06:56PM", "02:06AM - 11:34AM", "11:16PM - 05:36PM", "09:43AM - 08:20PM", "05:38PM - 10:03PM", "07:23AM - 07:41PM", "01:47PM - 04:02PM", "08:11PM - 08:06PM", "07:10PM - 07:37PM", "10:29PM - 01:44PM", "04:48PM - 10:35PM", "09:03PM - 04:17AM", "07:49PM - 01:12PM", "11:30PM - 12:01AM", "10:39PM - 06:49PM", "10:37AM - 09:47PM", "04:15AM - 10:52PM", "03:19PM - 07:54AM", "06:56AM - 07:24AM", "02:15PM - 07:07AM", "01:03PM - 04:27PM", "12:51AM - 04:12PM", "11:16AM - 09:23AM"};
    TVWatching* pObj = new TVWatching();
    clock_t start = clock();
    int result = pObj->mostMinutes(programs);
    clock_t end = clock();
    delete pObj;
    int expected = 1435;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> programs = {"07:52AM - 05:09PM", "06:16PM - 05:16AM", "09:19AM - 12:38AM", "11:22AM - 02:34AM", "01:51PM - 01:06PM", "06:20PM - 03:35AM", "07:40PM - 11:26PM", "11:56PM - 05:25PM", "03:11PM - 06:00PM", "01:13PM - 07:54PM", "07:52AM - 06:52AM", "02:01PM - 05:20PM", "01:30PM - 06:29AM"};
    TVWatching* pObj = new TVWatching();
    clock_t start = clock();
    int result = pObj->mostMinutes(programs);
    clock_t end = clock();
    delete pObj;
    int expected = 1395;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> programs = {"08:40AM - 01:40AM", "01:54AM - 11:40PM", "05:32AM - 03:16AM", "04:18AM - 08:30AM", "12:52PM - 06:21AM", "02:36PM - 11:16AM", "09:05AM - 01:37PM", "01:35PM - 05:20PM", "03:23PM - 09:38AM", "02:08AM - 03:22PM", "08:57AM - 12:15AM", "05:50AM - 06:06AM", "09:32AM - 10:42PM", "09:55PM - 04:59AM", "12:54PM - 02:01PM", "11:41AM - 02:35PM", "09:06AM - 03:18PM", "11:25AM - 05:09PM", "12:45PM - 03:15AM", "10:10PM - 03:30AM", "09:13AM - 08:10AM", "02:23AM - 12:56AM", "02:26AM - 11:29AM", "12:17AM - 03:58AM", "06:17PM - 04:16AM", "05:15AM - 04:13PM"};
    TVWatching* pObj = new TVWatching();
    clock_t start = clock();
    int result = pObj->mostMinutes(programs);
    clock_t end = clock();
    delete pObj;
    int expected = 1414;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> programs = {"10:54AM - 02:50PM", "07:16AM - 09:46PM", "08:55AM - 02:53AM", "07:11AM - 03:27PM", "07:42AM - 10:47AM", "04:03AM - 10:18PM", "03:34PM - 05:25PM"};
    TVWatching* pObj = new TVWatching();
    clock_t start = clock();
    int result = pObj->mostMinutes(programs);
    clock_t end = clock();
    delete pObj;
    int expected = 1095;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> programs = {"08:59AM - 01:45PM", "12:56PM - 02:15PM", "08:49PM - 10:37AM", "05:40PM - 03:51PM", "09:25PM - 01:43PM", "12:43AM - 09:12PM", "09:17AM - 04:43PM", "06:59AM - 11:31PM", "07:11AM - 10:27AM", "04:50AM - 03:28AM", "10:31PM - 02:32AM"};
    TVWatching* pObj = new TVWatching();
    clock_t start = clock();
    int result = pObj->mostMinutes(programs);
    clock_t end = clock();
    delete pObj;
    int expected = 1358;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> programs = {"02:30AM - 10:05AM", "07:57AM - 05:28AM", "03:31PM - 05:59AM", "12:41PM - 02:01AM", "03:32PM - 04:57AM", "03:47PM - 12:39AM", "09:08AM - 06:27AM", "01:41PM - 04:21PM", "09:27AM - 11:49PM"};
    TVWatching* pObj = new TVWatching();
    clock_t start = clock();
    int result = pObj->mostMinutes(programs);
    clock_t end = clock();
    delete pObj;
    int expected = 1291;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> programs = {"07:10AM - 02:07PM", "04:55PM - 08:26PM", "04:34AM - 01:02AM", "02:35AM - 09:56AM", "06:15PM - 04:05PM", "02:46PM - 10:07AM", "09:29AM - 11:57PM", "09:29AM - 03:35PM", "02:30AM - 03:45AM", "06:52PM - 03:58AM", "01:16AM - 12:12PM", "05:57PM - 07:58PM", "12:22PM - 03:30AM", "09:02PM - 10:55PM", "06:28PM - 04:19PM", "12:04AM - 12:55PM", "10:59AM - 12:11AM", "03:49PM - 01:36AM", "07:17AM - 02:35AM", "06:12PM - 05:30PM", "02:18AM - 01:31AM", "01:00PM - 04:13AM", "06:08AM - 06:14AM", "11:43AM - 02:21PM", "06:36PM - 04:28PM", "11:40AM - 10:36PM", "02:03PM - 03:15AM", "11:02PM - 06:32AM", "01:13AM - 02:01AM", "02:49PM - 07:59PM", "03:42PM - 07:01AM", "10:37AM - 01:37AM", "04:05PM - 04:49AM", "05:19AM - 06:50AM", "12:51PM - 03:42PM", "09:28AM - 03:28AM", "04:05AM - 06:20AM", "03:26PM - 04:22AM", "03:31PM - 10:20AM", "01:03PM - 11:32AM"};
    TVWatching* pObj = new TVWatching();
    clock_t start = clock();
    int result = pObj->mostMinutes(programs);
    clock_t end = clock();
    delete pObj;
    int expected = 1398;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> programs = {"04:02AM - 10:22AM", "06:20PM - 11:40AM", "05:58PM - 12:20AM", "03:51AM - 04:04AM", "04:07AM - 03:31PM", "09:22PM - 12:09AM", "08:08PM - 04:20PM", "03:10PM - 11:04PM", "07:53PM - 03:27AM", "02:58PM - 10:57PM", "12:04AM - 09:38PM", "10:37AM - 06:46PM", "04:40PM - 08:39AM", "06:49AM - 09:29AM", "11:40PM - 08:38AM", "12:35PM - 06:40AM", "12:08PM - 10:11AM", "06:29AM - 09:02PM", "02:53AM - 11:02AM", "03:25AM - 10:01AM", "09:15PM - 01:19PM", "09:32AM - 08:54PM", "05:30AM - 11:53PM", "04:43AM - 06:55PM", "11:02PM - 05:48AM", "12:09AM - 07:09AM", "08:27AM - 06:24PM", "12:54AM - 09:22AM", "05:34AM - 12:03PM", "06:19AM - 06:02AM", "07:33PM - 05:37PM", "08:52AM - 01:20AM", "11:10PM - 09:53AM", "11:23AM - 03:24PM", "10:58AM - 12:31AM", "10:48AM - 03:04AM", "07:39AM - 03:48AM", "06:27AM - 11:14PM", "02:37PM - 02:20PM", "05:18PM - 12:33AM", "05:46PM - 09:06PM"};
    TVWatching* pObj = new TVWatching();
    clock_t start = clock();
    int result = pObj->mostMinutes(programs);
    clock_t end = clock();
    delete pObj;
    int expected = 1423;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> programs = {"06:27PM - 12:16AM", "05:43AM - 04:49AM", "09:18AM - 03:38PM", "07:56PM - 10:22AM"};
    TVWatching* pObj = new TVWatching();
    clock_t start = clock();
    int result = pObj->mostMinutes(programs);
    clock_t end = clock();
    delete pObj;
    int expected = 1386;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> programs = {"03:13PM - 01:10PM", "06:37PM - 06:45PM", "10:29AM - 05:10PM", "06:29AM - 08:07AM", "02:56AM - 11:18AM", "05:18AM - 07:25AM", "12:05AM - 10:21PM", "07:17AM - 05:34PM", "02:18AM - 02:38PM", "10:43AM - 08:19AM", "02:16AM - 03:43AM", "12:58AM - 10:59PM", "07:13PM - 10:45PM", "04:13PM - 10:34AM", "10:26PM - 05:59AM", "01:42PM - 12:34AM", "02:35PM - 02:32AM", "07:54PM - 04:10AM", "09:15PM - 07:53PM", "01:56AM - 12:12AM", "07:51AM - 09:19PM", "08:54AM - 09:41PM", "07:52AM - 10:46PM", "01:41AM - 06:56AM", "06:16PM - 10:01AM", "01:30AM - 12:51AM", "07:47AM - 12:08AM", "08:47AM - 11:04PM", "04:20PM - 12:57AM"};
    TVWatching* pObj = new TVWatching();
    clock_t start = clock();
    int result = pObj->mostMinutes(programs);
    clock_t end = clock();
    delete pObj;
    int expected = 1401;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> programs = {"03:55AM - 12:48PM", "04:18PM - 04:09AM", "02:48PM - 05:57AM", "12:44AM - 10:40AM", "06:00PM - 09:58AM", "09:19PM - 09:16AM", "08:00AM - 09:26PM", "10:30AM - 11:14AM", "11:52PM - 03:21PM", "07:50AM - 09:36AM", "08:04AM - 04:02PM", "05:39AM - 11:56AM", "05:04PM - 08:53PM", "04:02PM - 05:11PM", "11:21AM - 12:24AM", "08:51AM - 10:39PM", "01:27PM - 02:34AM", "06:01AM - 04:30PM", "10:56AM - 09:57AM", "10:03PM - 02:08AM", "06:02PM - 01:55AM", "04:03AM - 02:28PM", "07:19PM - 01:14AM", "10:21PM - 07:22AM", "02:40PM - 03:48PM", "09:23AM - 08:29AM", "11:00PM - 07:35AM", "02:12AM - 05:46PM", "02:03AM - 12:05AM", "08:56PM - 08:49PM", "11:15PM - 04:50AM", "04:05PM - 04:43PM", "08:54PM - 06:55PM", "09:09AM - 02:24PM", "03:29PM - 04:44AM", "07:44PM - 01:41AM", "06:20AM - 05:38PM", "11:11AM - 10:01PM", "12:23PM - 04:46AM", "10:24AM - 06:50PM", "06:00PM - 11:00PM", "08:35AM - 02:22AM", "01:12AM - 06:09AM", "05:51PM - 03:29AM", "08:01PM - 10:22AM", "10:15AM - 10:53AM", "02:08PM - 12:55PM", "05:51PM - 02:56PM", "10:51PM - 03:45AM", "08:55PM - 11:49AM"};
    TVWatching* pObj = new TVWatching();
    clock_t start = clock();
    int result = pObj->mostMinutes(programs);
    clock_t end = clock();
    delete pObj;
    int expected = 1433;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> programs = {"04:37PM - 05:30AM", "10:30PM - 02:26PM", "06:17PM - 11:05PM", "08:49AM - 03:34PM", "10:21PM - 08:11AM", "01:08PM - 12:26AM"};
    TVWatching* pObj = new TVWatching();
    clock_t start = clock();
    int result = pObj->mostMinutes(programs);
    clock_t end = clock();
    delete pObj;
    int expected = 1178;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> programs = {"01:53AM - 06:11AM", "11:20PM - 10:26PM", "09:07AM - 11:41AM", "01:55AM - 12:58AM", "05:06AM - 04:32PM", "01:15AM - 01:15PM", "09:22AM - 03:54PM", "10:33PM - 08:36AM", "03:26AM - 01:09PM", "11:20PM - 11:30AM", "06:58PM - 09:39PM", "08:42PM - 06:39AM", "03:17PM - 08:39AM", "10:48AM - 11:45AM", "12:46AM - 10:50AM", "08:22AM - 04:58AM", "10:50PM - 05:26PM", "10:57PM - 05:30AM", "06:45PM - 07:31AM", "09:52PM - 12:48AM", "02:33PM - 12:24AM", "06:44PM - 08:38PM"};
    TVWatching* pObj = new TVWatching();
    clock_t start = clock();
    int result = pObj->mostMinutes(programs);
    clock_t end = clock();
    delete pObj;
    int expected = 1386;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> programs = {"10:09AM - 03:39PM", "08:16AM - 06:47PM", "03:32PM - 02:12AM"};
    TVWatching* pObj = new TVWatching();
    clock_t start = clock();
    int result = pObj->mostMinutes(programs);
    clock_t end = clock();
    delete pObj;
    int expected = 640;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> programs = {"12:30PM - 04:41PM", "08:26PM - 05:45AM", "06:46PM - 08:17PM", "07:26AM - 01:13AM", "07:37AM - 08:49PM", "02:27PM - 11:29AM", "01:15PM - 02:31PM", "05:42PM - 10:06AM", "04:41PM - 06:48PM", "11:58PM - 01:05AM", "08:16PM - 01:06PM", "08:15PM - 07:07AM", "02:08AM - 12:14AM", "05:11PM - 10:11AM", "08:07PM - 05:33PM", "09:54AM - 07:24AM", "10:52PM - 06:36PM", "06:14AM - 12:31AM", "11:30AM - 03:53PM", "10:28AM - 12:10PM", "06:24PM - 11:45AM", "03:34PM - 04:06AM", "10:37PM - 09:48AM", "04:55PM - 01:15PM", "05:43AM - 08:11PM", "12:43PM - 10:19PM", "08:22PM - 07:51AM", "08:44PM - 12:27AM", "12:48PM - 03:00PM", "02:22PM - 05:38AM", "04:36AM - 12:56PM", "10:54AM - 05:39AM", "02:22PM - 09:27PM", "01:08AM - 02:04AM", "04:52PM - 10:00AM", "11:40PM - 11:59AM", "06:51AM - 01:34AM", "03:24PM - 10:56PM", "06:44AM - 10:43PM", "02:00AM - 07:19AM", "03:42AM - 02:44AM", "09:54PM - 07:09PM", "07:20AM - 08:21PM", "08:29PM - 08:10AM", "08:40AM - 07:14AM", "01:13AM - 10:22PM"};
    TVWatching* pObj = new TVWatching();
    clock_t start = clock();
    int result = pObj->mostMinutes(programs);
    clock_t end = clock();
    delete pObj;
    int expected = 1386;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> programs = {"11:31PM - 09:40PM", "04:00AM - 03:21PM", "02:43PM - 09:45AM", "09:26PM - 03:32AM", "04:45PM - 05:59PM", "12:12PM - 04:10AM", "08:01PM - 10:30PM", "09:36AM - 06:16PM", "12:32PM - 08:24PM", "05:48AM - 08:08AM", "01:35PM - 11:23AM", "04:08AM - 11:48PM", "11:10PM - 08:46AM", "04:34AM - 04:42PM", "04:20AM - 05:22PM", "04:47PM - 07:00AM", "04:31PM - 04:14PM", "07:22AM - 05:30PM", "03:32AM - 01:37PM", "01:33PM - 11:42PM", "11:11AM - 03:03AM", "10:22PM - 05:17PM", "07:01PM - 02:12PM", "02:06PM - 03:07PM"};
    TVWatching* pObj = new TVWatching();
    clock_t start = clock();
    int result = pObj->mostMinutes(programs);
    clock_t end = clock();
    delete pObj;
    int expected = 1423;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> programs = {"05:15PM - 08:50PM", "10:01AM - 12:04PM", "01:27AM - 09:36AM", "04:29AM - 09:34AM", "02:32AM - 08:40AM", "03:20AM - 05:52PM", "06:44AM - 03:51PM", "10:23AM - 02:56AM", "11:29PM - 09:12PM", "06:25AM - 02:22PM", "02:23AM - 06:37AM"};
    TVWatching* pObj = new TVWatching();
    clock_t start = clock();
    int result = pObj->mostMinutes(programs);
    clock_t end = clock();
    delete pObj;
    int expected = 1303;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> programs = {};
    TVWatching* pObj = new TVWatching();
    clock_t start = clock();
    int result = pObj->mostMinutes(programs);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> programs = {"05:00AM - 06:00AM", "11:27PM - 11:50PM", "11:50PM - 05:10AM", "11:59AM - 12:00PM"};
    TVWatching* pObj = new TVWatching();
    clock_t start = clock();
    int result = pObj->mostMinutes(programs);
    clock_t end = clock();
    delete pObj;
    int expected = 344;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> programs = {"09:00AM - 10:00AM", "09:30AM - 10:30PM", "10:00AM - 11:00AM", "10:30AM - 11:30PM", "11:00AM - 12:00AM", "11:30AM - 12:30PM", "12:00PM - 01:00AM", "12:30AM - 01:30PM", "01:00AM - 02:00AM", "01:30AM - 02:30PM", "02:00AM - 03:00AM", "02:30AM - 03:30PM", "03:00AM - 04:00AM", "03:30AM - 04:30PM", "04:00AM - 05:00AM", "04:30AM - 05:30PM", "05:00AM - 06:00AM", "05:30AM - 06:30PM", "06:00AM - 07:00AM", "06:30AM - 07:30PM", "07:00AM - 08:00AM", "07:30AM - 08:30PM", "08:00AM - 09:00AM", "08:30AM - 09:30PM", "09:00AM - 10:00AM", "09:30AM - 10:30PM", "10:00AM - 11:00AM", "10:30AM - 11:30PM", "11:00AM - 12:00AM", "11:30AM - 12:30PM", "12:00AM - 01:00AM", "12:30AM - 01:30PM", "01:00AM - 02:00AM", "01:30AM - 02:30PM", "02:00AM - 03:00AM", "02:30AM - 03:30PM", "03:00AM - 04:00AM", "03:30AM - 04:30PM", "04:00AM - 05:00AM", "04:30AM - 05:30PM", "05:00AM - 06:00AM", "05:30AM - 06:30PM", "06:00AM - 07:00AM", "06:30AM - 07:30PM", "07:00AM - 08:00AM", "07:30AM - 08:30PM", "08:00AM - 09:00AM", "08:30AM - 09:32PM"};
    TVWatching* pObj = new TVWatching();
    clock_t start = clock();
    int result = pObj->mostMinutes(programs);
    clock_t end = clock();
    delete pObj;
    int expected = 1440;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> programs = {"07:44AM - 05:31AM", "05:48AM - 02:34AM", "02:23AM - 03:55AM", "02:25AM - 09:18AM", "01:02AM - 10:23AM", "04:13AM - 09:23AM", "10:45AM - 11:05AM", "03:21AM - 10:08AM", "04:45AM - 05:49AM", "11:48AM - 07:24AM", "06:27AM - 02:49AM", "01:21AM - 06:18AM", "08:12AM - 04:34AM", "01:09AM - 10:36AM", "02:50AM - 08:48AM", "03:15AM - 08:27AM", "05:03AM - 01:48AM", "06:45AM - 02:46AM", "07:41AM - 06:32AM", "07:35AM - 09:00AM", "11:22AM - 05:15AM", "09:56AM - 08:49AM", "05:56AM - 02:23AM", "03:57AM - 09:05AM", "04:45AM - 02:06AM", "09:38AM - 07:07AM", "03:03AM - 05:20AM", "10:52AM - 09:04AM", "11:29AM - 01:36AM", "10:10AM - 05:06AM", "04:41AM - 10:54AM", "06:50AM - 10:51AM", "04:46AM - 03:53AM", "03:35AM - 02:11AM", "08:46AM - 01:38AM", "02:48AM - 01:03AM", "11:57AM - 08:16AM", "09:00AM - 10:39AM", "05:39AM - 01:10AM", "09:13AM - 03:13AM", "02:25AM - 10:44AM", "05:18AM - 11:14AM", "03:32AM - 06:21AM", "11:47AM - 03:36AM", "08:04AM - 05:14AM", "02:43AM - 10:32AM", "01:51AM - 07:27AM", "02:25AM - 04:48AM", "02:17AM - 04:15AM", "01:55AM - 03:11AM"};
    TVWatching* pObj = new TVWatching();
    clock_t start = clock();
    int result = pObj->mostMinutes(programs);
    clock_t end = clock();
    delete pObj;
    int expected = 1429;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> programs = {"01:42PM - 01:14AM", "05:27PM - 10:01PM", "08:31AM - 04:07AM", "12:51PM - 04:49PM", "02:00PM - 01:48AM", "11:53PM - 04:49AM", "04:04PM - 11:57AM", "02:36PM - 08:54PM", "04:00PM - 01:04PM", "12:29PM - 02:37AM", "06:58PM - 12:50PM", "07:19PM - 08:12AM", "06:05AM - 03:41AM", "02:05PM - 02:14PM", "11:21AM - 01:18PM", "12:40PM - 01:18PM", "05:24PM - 08:18PM", "10:55AM - 11:45PM", "05:02PM - 01:36AM", "09:43PM - 02:24AM", "09:44AM - 06:36PM", "10:17PM - 03:27PM", "07:11PM - 04:45AM", "07:45AM - 02:15AM", "01:58AM - 07:10PM", "08:06AM - 06:05AM", "08:40PM - 09:41AM", "04:32PM - 06:40AM", "05:31AM - 05:01AM", "03:24PM - 12:09AM", "08:10PM - 02:31PM", "09:41PM - 09:01PM", "12:48PM - 04:20AM", "01:26AM - 09:10AM", "06:05AM - 12:40AM", "05:17AM - 04:33PM", "03:56AM - 10:52PM", "08:49PM - 04:49PM", "07:20AM - 04:02AM", "09:23PM - 08:00AM", "02:55PM - 10:22AM", "03:44PM - 05:46AM", "11:16PM - 03:54AM", "02:22PM - 09:13AM", "09:15AM - 06:08AM", "06:24AM - 10:18PM", "11:06AM - 06:27AM", "12:40AM - 10:47PM", "11:48PM - 02:18AM", "05:12AM - 09:33AM"};
    TVWatching* pObj = new TVWatching();
    clock_t start = clock();
    int result = pObj->mostMinutes(programs);
    clock_t end = clock();
    delete pObj;
    int expected = 1414;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> programs = {};
    TVWatching* pObj = new TVWatching();
    clock_t start = clock();
    int result = pObj->mostMinutes(programs);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> programs = {"12:34PM - 01:34AM", "02:34AM - 11:34PM"};
    TVWatching* pObj = new TVWatching();
    clock_t start = clock();
    int result = pObj->mostMinutes(programs);
    clock_t end = clock();
    delete pObj;
    int expected = 1260;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> programs = {"12:00AM - 02:00PM", "02:00PM - 01:00PM"};
    TVWatching* pObj = new TVWatching();
    clock_t start = clock();
    int result = pObj->mostMinutes(programs);
    clock_t end = clock();
    delete pObj;
    int expected = 1380;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> programs = {"12:34PM - 12:34PM"};
    TVWatching* pObj = new TVWatching();
    clock_t start = clock();
    int result = pObj->mostMinutes(programs);
    clock_t end = clock();
    delete pObj;
    int expected = 1440;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> programs = {"01:00AM - 01:10AM", "01:05AM - 01:25AM", "01:10AM - 01:20AM", "01:20AM - 01:30AM", "01:25AM - 01:45AM", "01:30AM - 01:40AM", "01:40AM - 01:50AM", "01:45AM - 02:05AM", "01:50AM - 02:00AM", "02:00AM - 02:10AM", "02:05AM - 02:25AM", "02:10AM - 02:20AM", "02:20AM - 02:30AM", "02:25AM - 02:45AM", "02:30AM - 02:40AM", "02:40AM - 02:50AM", "02:45AM - 03:05AM", "02:50AM - 03:00AM", "03:00AM - 03:10AM", "03:05AM - 03:25AM", "03:10AM - 03:20AM", "03:20AM - 03:30AM", "03:25AM - 03:45AM", "03:30AM - 03:40AM", "03:40AM - 03:50AM", "03:45AM - 04:05AM", "03:50AM - 04:00AM", "04:00AM - 04:10AM", "04:05AM - 04:25AM", "04:10AM - 04:20AM", "04:20AM - 04:30AM", "04:25AM - 04:45AM", "04:30AM - 04:40AM", "04:40AM - 04:50AM", "04:45AM - 05:05AM", "04:50AM - 05:00AM", "05:00AM - 05:10AM", "05:05AM - 05:25AM", "05:10AM - 05:20AM", "05:20AM - 05:30AM", "05:25AM - 05:45AM", "05:30AM - 05:40AM", "05:40AM - 05:50AM", "05:45AM - 06:05AM", "05:50AM - 06:00AM", "06:00AM - 06:10AM", "06:05AM - 06:25AM", "06:10AM - 06:20AM", "06:21AM - 06:22AM"};
    TVWatching* pObj = new TVWatching();
    clock_t start = clock();
    int result = pObj->mostMinutes(programs);
    clock_t end = clock();
    delete pObj;
    int expected = 321;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> programs = {"01:01PM - 01:01PM", "01:02PM - 01:02PM", "01:03PM - 01:03PM", "01:04PM - 01:04PM", "01:05PM - 01:05PM", "01:06PM - 01:06PM", "01:07PM - 01:07PM", "01:08PM - 01:08PM", "01:09PM - 01:09PM", "01:10PM - 01:10PM", "01:11PM - 01:11PM", "01:12PM - 01:12PM", "01:13PM - 01:13PM", "01:14PM - 01:14PM", "01:15PM - 01:15PM", "01:16PM - 01:16PM", "01:17PM - 01:17PM", "01:18PM - 01:18PM", "01:19PM - 01:19PM", "01:20PM - 01:20PM", "01:21PM - 01:21PM", "01:22PM - 01:22PM", "01:23PM - 01:23PM", "01:24PM - 01:24PM", "01:25PM - 01:25PM", "01:26PM - 01:26PM", "01:27PM - 01:27PM", "01:28PM - 01:28PM", "01:29PM - 01:29PM", "01:30PM - 01:30PM", "01:31PM - 01:31PM", "01:32PM - 01:32PM", "01:33PM - 01:33PM", "01:34PM - 01:34PM", "01:35PM - 01:35PM", "01:36PM - 01:36PM", "01:37PM - 01:37PM", "01:38PM - 01:38PM", "01:39PM - 01:39PM", "01:40PM - 01:40PM", "01:41PM - 01:41PM", "01:42PM - 01:42PM", "01:43PM - 01:43PM", "01:44PM - 01:44PM", "01:45PM - 01:45PM", "01:46PM - 01:46PM", "01:47PM - 01:47PM", "01:48PM - 01:48PM", "01:49PM - 01:49PM", "01:50PM - 01:50PM"};
    TVWatching* pObj = new TVWatching();
    clock_t start = clock();
    int result = pObj->mostMinutes(programs);
    clock_t end = clock();
    delete pObj;
    int expected = 1440;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> programs = {"01:00AM - 01:10AM", "01:05AM - 01:25AM", "01:10AM - 01:20AM", "01:20AM - 01:30AM", "01:25AM - 01:45AM", "01:30AM - 01:40AM", "01:40AM - 01:50AM", "01:45AM - 02:05AM", "01:50AM - 02:00AM", "02:00AM - 02:10AM", "02:05AM - 02:25AM", "02:10AM - 02:20AM", "02:20AM - 02:30AM", "02:25AM - 02:45AM", "02:30AM - 02:40AM", "02:40AM - 02:50AM", "02:45AM - 03:05AM", "02:50AM - 03:00AM", "03:00AM - 03:10AM", "03:05AM - 03:25AM", "03:10AM - 03:20AM", "03:20AM - 03:30AM", "03:25AM - 03:45AM", "03:30AM - 03:40AM", "03:40AM - 03:50AM", "03:45AM - 04:05AM", "03:50AM - 04:00AM", "04:00AM - 04:10AM", "04:05AM - 04:25AM", "04:10AM - 04:20AM", "04:20AM - 04:30AM", "04:25AM - 04:45AM", "04:30AM - 04:40AM", "04:40AM - 04:50AM", "04:45AM - 05:05AM", "04:50AM - 05:00AM", "05:00AM - 05:10AM", "05:05AM - 05:25AM", "05:10AM - 05:20AM", "05:20AM - 05:30AM", "05:25AM - 05:45AM", "05:30AM - 05:40AM", "05:40AM - 05:50AM", "05:45AM - 06:05AM", "05:50AM - 06:00AM", "06:00AM - 06:10AM", "06:05AM - 06:25AM", "06:10AM - 06:20AM", "01:00AM - 01:01AM"};
    TVWatching* pObj = new TVWatching();
    clock_t start = clock();
    int result = pObj->mostMinutes(programs);
    clock_t end = clock();
    delete pObj;
    int expected = 321;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> programs = {"01:00AM - 02:00AM", "11:00PM - 03:00AM"};
    TVWatching* pObj = new TVWatching();
    clock_t start = clock();
    int result = pObj->mostMinutes(programs);
    clock_t end = clock();
    delete pObj;
    int expected = 240;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> programs = {"07:18AM - 11:13AM", "03:49PM - 01:10PM", "05:49PM - 06:39AM", "04:49AM - 11:27AM", "08:48PM - 08:15AM", "05:41AM - 08:37PM", "10:48AM - 07:27AM", "10:14AM - 06:02PM", "03:40AM - 05:42AM", "09:58AM - 06:19AM", "01:23AM - 11:05PM", "09:22PM - 02:15PM", "07:32PM - 08:15PM", "05:46PM - 08:58AM", "02:55PM - 10:51AM", "06:40AM - 02:10PM", "12:06PM - 11:08AM", "12:28AM - 08:05AM", "01:01PM - 12:08PM", "04:08PM - 05:12PM", "07:44AM - 06:52PM", "02:54AM - 03:41PM", "02:09PM - 10:39PM", "08:56AM - 07:00PM", "06:29AM - 02:32PM", "07:04AM - 06:41PM", "10:58PM - 02:15AM", "09:12PM - 02:11AM", "09:27AM - 09:00AM", "07:06PM - 08:08PM", "09:01PM - 11:44PM", "04:33PM - 11:41PM", "11:46AM - 07:39AM", "06:31AM - 09:27AM", "11:54AM - 04:49PM", "01:15AM - 10:45AM", "01:17PM - 04:38PM", "08:26AM - 09:22AM", "07:27AM - 05:48AM", "08:52PM - 06:42AM", "06:15PM - 05:47AM", "05:28PM - 09:43PM", "09:17AM - 06:56AM", "02:30AM - 11:38AM", "01:28PM - 12:24PM", "01:19AM - 02:08PM", "11:18AM - 08:32AM", "02:16AM - 05:34PM", "06:53PM - 09:33PM", "01:41AM - 12:55AM"};
    TVWatching* pObj = new TVWatching();
    clock_t start = clock();
    int result = pObj->mostMinutes(programs);
    clock_t end = clock();
    delete pObj;
    int expected = 1413;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> programs = {"01:00AM - 02:00AM", "03:00AM - 01:30AM"};
    TVWatching* pObj = new TVWatching();
    clock_t start = clock();
    int result = pObj->mostMinutes(programs);
    clock_t end = clock();
    delete pObj;
    int expected = 1350;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> programs = {"11:59AM - 12:00PM", "11:59PM - 12:00AM", "07:12AM - 06:16PM", "05:13PM - 09:25PM", "10:33PM - 03:05AM", "12:27AM - 09:39PM", "11:16PM - 07:16AM", "08:10PM - 06:39AM", "08:53AM - 09:39AM", "11:50AM - 09:00AM", "12:19AM - 06:10AM", "07:03PM - 04:03PM", "07:24PM - 03:09PM", "07:14AM - 11:37PM", "10:03AM - 08:31PM", "04:52PM - 02:28PM", "11:25AM - 08:29PM", "07:26AM - 07:47AM", "04:52AM - 04:07AM", "05:08AM - 02:21PM", "07:39PM - 10:54PM", "05:55PM - 02:34PM", "03:32PM - 11:01PM", "11:42PM - 01:10AM", "07:02AM - 12:46PM", "06:30PM - 12:02PM", "05:48AM - 09:54PM", "06:28PM - 09:31AM", "06:50AM - 01:22AM", "12:05AM - 03:41PM", "08:39AM - 08:59AM", "03:46PM - 11:57PM", "06:43AM - 02:59PM", "11:43AM - 04:42PM", "07:32PM - 06:05AM", "04:52PM - 02:15PM", "09:31AM - 02:17PM", "03:14AM - 10:21AM", "03:56AM - 05:07PM", "09:58PM - 10:33AM", "09:06PM - 10:48PM", "05:02AM - 10:14PM", "07:04AM - 04:41AM", "03:00PM - 04:37PM", "03:37PM - 01:27PM", "05:14PM - 12:54AM", "09:48PM - 09:24AM", "02:29PM - 01:32PM", "01:24AM - 03:04AM", "08:03PM - 01:52PM"};
    TVWatching* pObj = new TVWatching();
    clock_t start = clock();
    int result = pObj->mostMinutes(programs);
    clock_t end = clock();
    delete pObj;
    int expected = 1428;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> programs = {"01:00AM - 01:01AM", "01:10AM - 01:11AM", "01:20AM - 01:21AM", "01:30AM - 01:31AM", "01:40AM - 01:41AM", "01:50AM - 01:51AM", "02:00AM - 02:01AM", "02:10AM - 02:11AM", "02:20AM - 02:21AM", "02:30AM - 02:31AM", "02:40AM - 02:41AM", "02:50AM - 02:51AM", "03:00AM - 03:01AM", "03:10AM - 03:11AM", "03:20AM - 03:21AM", "03:30AM - 03:31AM", "03:40AM - 03:41AM", "03:50AM - 03:51AM", "04:00AM - 04:01AM", "04:10AM - 04:11AM", "04:20AM - 04:21AM", "04:30AM - 04:31AM", "04:40AM - 04:41AM", "04:50AM - 04:51AM", "05:00AM - 05:01AM", "05:10AM - 05:11AM", "05:20AM - 05:21AM", "05:30AM - 05:31AM", "05:40AM - 05:41AM", "05:50AM - 05:51AM", "06:00AM - 06:01AM", "06:10AM - 06:11AM", "06:20AM - 06:21AM", "06:30AM - 06:31AM", "06:40AM - 06:41AM", "06:50AM - 06:51AM", "07:00AM - 07:01AM", "07:10AM - 07:11AM", "07:20AM - 07:21AM", "07:30AM - 07:31AM", "07:40AM - 07:41AM", "07:50AM - 07:51AM", "08:00AM - 08:01AM", "08:10AM - 08:11AM", "08:20AM - 08:21AM", "08:30AM - 08:31AM", "08:40AM - 08:41AM", "08:50AM - 08:51AM", "09:00AM - 09:01AM", "09:10AM - 09:11AM"};
    TVWatching* pObj = new TVWatching();
    clock_t start = clock();
    int result = pObj->mostMinutes(programs);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> programs = {"06:00PM - 01:00AM", "11:00PM - 06:01AM"};
    TVWatching* pObj = new TVWatching();
    clock_t start = clock();
    int result = pObj->mostMinutes(programs);
    clock_t end = clock();
    delete pObj;
    int expected = 421;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> programs = {"10:00AM - 12:00PM", "10:00PM - 10:01PM", "10:01PM - 10:03PM", "10:04PM - 10:06PM", "10:08PM - 10:10PM", "10:12PM - 10:14PM", "10:16PM - 10:18PM", "10:20PM - 10:22PM", "10:24PM - 10:26PM", "10:28PM - 10:30PM", "10:32PM - 10:34PM", "10:36PM - 10:38PM", "10:40PM - 10:42PM", "10:44PM - 10:46PM", "10:48PM - 10:50PM", "10:52PM - 10:54PM", "10:56PM - 10:58PM", "11:00PM - 11:01PM", "11:00PM - 11:01PM", "11:01PM - 11:03PM", "11:04PM - 11:06PM", "11:08PM - 11:10PM", "11:12PM - 11:14PM", "11:16PM - 11:18PM", "11:20PM - 11:22PM", "11:24PM - 11:26PM", "11:28PM - 11:30PM", "11:32PM - 11:34PM", "11:40PM - 11:42PM", "11:44PM - 11:46PM", "11:48PM - 11:50PM", "11:52PM - 11:54PM", "11:56PM - 11:58PM", "09:00PM - 09:01PM", "09:01PM - 09:03PM", "09:04PM - 09:06PM", "09:08PM - 09:10PM", "09:12PM - 09:14PM", "09:20PM - 09:22PM", "09:24PM - 09:26PM", "09:28PM - 09:30PM"};
    TVWatching* pObj = new TVWatching();
    clock_t start = clock();
    int result = pObj->mostMinutes(programs);
    clock_t end = clock();
    delete pObj;
    int expected = 195;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> programs = {"09:00AM - 12:00PM"};
    TVWatching* pObj = new TVWatching();
    clock_t start = clock();
    int result = pObj->mostMinutes(programs);
    clock_t end = clock();
    delete pObj;
    int expected = 180;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> programs = {"09:00PM - 03:00AM", "01:00AM - 02:00AM"};
    TVWatching* pObj = new TVWatching();
    clock_t start = clock();
    int result = pObj->mostMinutes(programs);
    clock_t end = clock();
    delete pObj;
    int expected = 360;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> programs = {"12:00AM - 12:01AM", "12:02AM - 12:03AM", "12:01AM - 12:02AM", "12:03AM - 12:04AM", "12:00AM - 12:01AM", "12:00AM - 12:01AM", "12:00AM - 12:01AM", "12:00AM - 12:01AM", "12:00AM - 12:01AM", "12:00AM - 12:01AM", "12:00AM - 12:01AM", "12:00AM - 12:01AM", "12:00AM - 12:01AM", "12:00AM - 12:01AM", "12:00AM - 12:01AM", "12:00AM - 12:01AM", "12:00AM - 12:01AM", "12:00AM - 12:01AM", "12:00AM - 12:01AM", "12:00AM - 12:01AM", "12:00AM - 12:01AM", "12:00AM - 12:01AM", "12:00AM - 12:01AM", "12:00AM - 12:01AM", "12:00AM - 12:01AM", "12:00AM - 12:01AM", "12:00AM - 12:01AM", "12:00AM - 12:01AM", "12:00AM - 12:01AM", "12:00AM - 12:01AM", "12:00AM - 12:01AM", "12:00AM - 12:01AM", "12:00AM - 12:01AM", "12:00AM - 12:01AM", "12:00AM - 12:01AM", "12:00AM - 12:01AM", "12:00AM - 12:01AM", "12:00AM - 12:01AM", "12:00AM - 12:01AM", "12:00AM - 12:01AM", "12:00AM - 12:01AM", "12:00AM - 12:01AM", "12:00AM - 12:01AM", "12:00AM - 12:01AM", "12:00AM - 12:01AM", "12:00AM - 12:01AM", "12:00AM - 12:01AM", "12:00AM - 12:01AM", "12:00AM - 12:01AM", "12:00AM - 12:01AM"};
    TVWatching* pObj = new TVWatching();
    clock_t start = clock();
    int result = pObj->mostMinutes(programs);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> programs = {"12:00PM - 12:34PM"};
    TVWatching* pObj = new TVWatching();
    clock_t start = clock();
    int result = pObj->mostMinutes(programs);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> programs = {"02:00PM - 05:00PM", "06:00PM - 06:00PM"};
    TVWatching* pObj = new TVWatching();
    clock_t start = clock();
    int result = pObj->mostMinutes(programs);
    clock_t end = clock();
    delete pObj;
    int expected = 1440;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> programs = {"12:00AM - 12:00PM", "06:00PM - 06:00AM"};
    TVWatching* pObj = new TVWatching();
    clock_t start = clock();
    int result = pObj->mostMinutes(programs);
    clock_t end = clock();
    delete pObj;
    int expected = 720;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> programs = {"09:00AM - 10:00AM", "08:00AM - 08:00AM", "09:00AM - 09:00AM", "08:00AM - 09:00AM", "09:00AM - 10:00AM", "08:00AM - 08:00AM", "09:00AM - 09:00AM", "08:00AM - 09:00AM", "09:00AM - 10:00AM", "08:00AM - 08:00AM", "09:00AM - 09:00AM", "08:00AM - 09:00AM", "09:00AM - 10:00AM", "08:00AM - 08:00AM", "09:00AM - 09:00AM", "08:00AM - 09:00AM", "09:00AM - 10:00AM", "08:00AM - 08:00AM", "09:00AM - 09:00AM", "08:00AM - 09:00AM", "09:00AM - 10:00AM", "08:00AM - 08:00AM", "09:00AM - 09:00AM", "08:00AM - 09:00AM", "09:00AM - 10:00AM", "08:00AM - 08:00AM", "09:00AM - 09:00AM", "08:00AM - 09:00AM", "09:00AM - 10:00AM", "08:00AM - 08:00AM", "09:00AM - 09:00AM"};
    TVWatching* pObj = new TVWatching();
    clock_t start = clock();
    int result = pObj->mostMinutes(programs);
    clock_t end = clock();
    delete pObj;
    int expected = 1440;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> programs = {"03:00AM - 03:01AM", "03:01AM - 03:02AM", "03:02AM - 03:03AM", "03:03AM - 03:04AM", "03:04AM - 03:05AM", "03:05AM - 03:06AM", "03:06AM - 03:07AM", "03:07AM - 03:08AM", "03:08AM - 03:09AM", "03:09AM - 03:10AM", "03:10AM - 03:11AM", "03:11AM - 03:12AM", "03:12AM - 03:13AM", "03:13AM - 03:14AM", "03:14AM - 03:15AM", "03:15AM - 03:16AM", "03:16AM - 03:17AM", "03:17AM - 03:18AM", "03:18AM - 03:19AM", "03:19AM - 03:20AM", "03:20AM - 03:21AM", "03:21AM - 03:22AM", "03:22AM - 03:23AM", "03:23AM - 03:24AM", "03:24AM - 03:25AM", "03:25AM - 03:26AM", "03:26AM - 03:27AM", "03:27AM - 03:28AM", "03:28AM - 03:29AM", "03:29AM - 03:30AM", "03:30AM - 03:31AM", "03:31AM - 03:32AM", "03:32AM - 03:33AM", "03:33AM - 03:34AM", "03:34AM - 03:35AM", "03:35AM - 03:36AM", "03:36AM - 03:37AM", "03:37AM - 03:38AM", "03:38AM - 03:39AM", "03:39AM - 03:40AM", "03:40AM - 03:41AM", "03:41AM - 03:42AM", "03:42AM - 03:43AM", "03:43AM - 03:44AM", "03:44AM - 03:45AM", "03:45AM - 03:46AM", "03:46AM - 03:47AM", "03:47AM - 03:48AM", "03:48AM - 03:49AM", "03:49AM - 03:50AM"};
    TVWatching* pObj = new TVWatching();
    clock_t start = clock();
    int result = pObj->mostMinutes(programs);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> programs = {"09:00PM - 02:00AM", "01:00AM - 03:00AM"};
    TVWatching* pObj = new TVWatching();
    clock_t start = clock();
    int result = pObj->mostMinutes(programs);
    clock_t end = clock();
    delete pObj;
    int expected = 300;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> programs = {"06:00AM - 06:00PM", "07:00PM - 07:00AM"};
    TVWatching* pObj = new TVWatching();
    clock_t start = clock();
    int result = pObj->mostMinutes(programs);
    clock_t end = clock();
    delete pObj;
    int expected = 720;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> programs = {"01:00AM - 01:01AM", "01:02AM - 01:03AM", "01:04AM - 01:05AM", "01:06AM - 01:07AM", "01:08AM - 01:09AM", "01:10AM - 01:11AM", "01:12AM - 01:13AM", "01:14AM - 01:15AM", "01:16AM - 01:17AM", "01:18AM - 01:19AM", "01:20AM - 01:21AM", "01:22AM - 01:23AM", "01:24AM - 01:25AM", "01:26AM - 01:27AM", "01:28AM - 01:29AM", "01:30AM - 01:31AM", "01:32AM - 01:33AM", "01:34AM - 01:35AM", "01:36AM - 01:37AM", "01:38AM - 01:39AM", "01:40AM - 01:41AM", "01:42AM - 01:43AM", "01:44AM - 01:45AM", "01:46AM - 01:47AM", "01:48AM - 01:49AM", "02:00AM - 02:01AM", "02:02AM - 02:03AM", "02:04AM - 02:05AM", "02:06AM - 02:07AM", "02:08AM - 02:09AM", "02:10AM - 02:11AM", "02:12AM - 02:13AM", "02:14AM - 02:15AM", "02:16AM - 02:17AM", "02:18AM - 02:19AM", "02:20AM - 02:21AM", "02:22AM - 02:23AM", "02:24AM - 02:25AM", "02:26AM - 02:27AM", "02:28AM - 02:29AM", "02:30AM - 02:31AM", "02:32AM - 02:33AM", "02:34AM - 02:35AM", "02:36AM - 02:37AM", "02:38AM - 02:39AM", "02:40AM - 02:41AM", "02:42AM - 02:43AM", "02:44AM - 02:45AM", "02:46AM - 02:47AM", "02:48AM - 02:49AM"};
    TVWatching* pObj = new TVWatching();
    clock_t start = clock();
    int result = pObj->mostMinutes(programs);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> programs = {"09:00AM - 09:01AM", "09:01AM - 09:02AM", "09:02AM - 09:03AM", "09:03AM - 09:04AM", "09:04AM - 09:05AM", "09:05AM - 09:06AM", "09:06AM - 09:07AM", "09:07AM - 09:08AM", "09:08AM - 09:09AM", "09:09AM - 09:10AM", "09:10AM - 09:11AM", "09:11AM - 09:12AM", "09:12AM - 09:13AM", "09:13AM - 09:14AM", "09:14AM - 09:15AM", "09:15AM - 09:16AM", "09:16AM - 09:17AM", "09:17AM - 09:18AM", "09:18AM - 09:19AM", "09:19AM - 09:20AM", "09:20AM - 09:21AM", "09:21AM - 09:22AM", "09:22AM - 09:23AM", "09:23AM - 09:24AM", "09:24AM - 09:25AM", "09:25AM - 09:26AM", "09:26AM - 09:27AM", "09:27AM - 09:28AM", "09:28AM - 09:29AM", "09:29AM - 09:30AM", "09:30AM - 09:31AM", "09:31AM - 09:32AM", "09:32AM - 09:33AM", "09:33AM - 09:34AM", "09:34AM - 09:35AM", "09:35AM - 09:36AM", "09:36AM - 09:37AM", "09:37AM - 09:38AM", "09:38AM - 09:39AM", "09:39AM - 09:40AM", "09:40AM - 09:41AM", "09:41AM - 09:42AM", "09:42AM - 09:43AM", "09:43AM - 09:44AM", "09:44AM - 09:45AM", "09:45AM - 09:46AM", "09:46AM - 09:47AM", "09:47AM - 09:48AM", "09:48AM - 09:49AM", "09:49AM - 09:50AM"};
    TVWatching* pObj = new TVWatching();
    clock_t start = clock();
    int result = pObj->mostMinutes(programs);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=270505&rd=7225&pm=4571
********************************************************************************
#include <vector>
#include <string>
#include <cstdio>
using namespace std;
 
#define V(x) vector<x >
#define vs V(string)
#define vi V(int)
#define vd V(double)
 
#define fr(x,y,z) for((x)=(y);(x)<(z);(x)++)
#define fo(x,y) fr(x,0,y)
#define fir(n) fo(i,n)
#define fjr(n) fo(j,n)
#define fkr(n) fo(k,n)
#define fi fir(n)
#define fj fjr(n)
 
#define pb push_back
#define sz size()
#define cs c_str()
 
#define fk fkr(n)
 
vs tk(string t,char *d)
{
  vs ret;
  char *buf,*s;
  buf=(char *) malloc(t.sz+1);
  strcpy(buf,t.cs);
  for(s=strtok(buf,d);s;s=strtok(0,d)) ret.push_back(s);
  free(buf);
  return ret;
}
 
vi tki(string t,char *d)
{
  vi ret; int temp;
  char *buf,*s;
  buf=(char *) malloc(t.sz+1);
  strcpy(buf,t.cs);
  for(s=strtok(buf,d);s;s=strtok(0,d)) {
    sscanf(s,"%d",&temp);
    ret.push_back(temp);
  }
  free(buf);
  return ret;
}
 
int r(string s) {
int ret;
vi f=tki(s,":APM");
if(f[0]==12) f[0]=0;
ret=60*f[0]+f[1];
if(s[5]=='P') ret+=60*12;
return ret;
}
 
int g[100][100];
 
class TVWatching { public: int mostMinutes(vs f) {
int n=f.sz;
int i,j,k;
vi a,b;
fi { vs t=tk(f[i]," -"); a.pb(r(t[0])); b.pb(r(t[1])); if(b[i]<=a[i]) b[i]+=24*60; }
 
fi a.pb(a[i]+24*60); fi b.pb(b[i]+24*60);
 
n=a.sz;
fi fj if(b[i]<=a[j]) g[i][j]=b[i]-a[i];
 
 
 
fj fi fk if(g[i][j] && g[j][k]) g[i][k]>?=g[i][j]+g[j][k];
 
int ret=0;
fir(n/2) ret>?=g[i][i+n/2];
return ret;
 
 
}};

********************************************************************************
*******************************************************************************/