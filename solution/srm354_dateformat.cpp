/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7654
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

class DateFormat {
public:
    string fromEuropeanToUs(vector<string> dateList);
};

string DateFormat::fromEuropeanToUs(vector<string> dateList) {
    string ret;
    return ret;
}


int test0() {
    vector<string> dateList = {"16/01"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "01/16";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> dateList = {"02/01 08/02 08/02 21/09 06/11"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "01/02 02/08 08/02 09/21 11/06";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> dateList = {"08/02 08/02 03/04"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> dateList = {"2", "9/02", " 08/", "03 01/08"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "02/29 03/08 08/01";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> dateList = {"17/01 05/05 03/07 07/24 23/09 09/30 01/11 11/11"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "01/17 05/05 07/03 07/24 09/23 09/30 11/01 11/11";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> dateList = {"01/01 02/01 03/01 04/01 05/01 06/01 01/07 01/08 09", "/01 01/10 01/11 12/01 13/01 01/14 01/15 16/01 01/1", "7 18/01 19/01 20/01 21/01 01/22 23/01 24/01 25/01 ", "01/26 27/01 01/28 01/29 01/30 01/31 01/02 02/02 02", "/03 04/02 02/05 06/02 02/07 08/02 02/09 02/10 11/0", "2 12/02 13/02 14/02 15/02 02/16 17/02 02/18 19/02 ", "20/02 21/02 02/22 02/23 02/24 02/25 02/26 02/27 02", "/28 02/29 01/03 02/03 03/03 03/04 05/03 03/06 07/0", "3 03/08 03/09 10/03 11/03 03/12 13/03 03/14 15/03 ", "03/16 03/17 18/03 19/03 20/03 21/03 03/22 23/03 03", "/24 03/25 26/03 03/27 28/03 29/03 30/03 03/31 01/0", "4 04/02 03/04 04/04 04/05 04/06 04/07 08/04 04/09 ", "10/04 04/11 04/12 13/04 04/14 04/15 04/16 04/17 04", "/18 19/04 04/20 04/21 04/22 23/04 04/24 04/25 04/2", "6 04/27 04/28 04/29 04/30 01/05 02/05 05/03 05/04 ", "05/05 05/06 05/07 08/05 09/05 05/10 11/05 12/05 05", "/13 05/14 05/15 16/05 17/05 05/18 05/19 20/05 21/0", "5 22/05 05/23 05/24 05/25 26/05 05/27 05/28 29/05 ", "05/30 05/31 06/01 02/06 03/06 04/06 05/06 06/06 07", "/06 08/06 09/06 06/10 06/11 06/12 06/13 06/14 15/0", "6 06/16 06/17 18/06 19/06 06/20 06/21 06/22 23/06 ", "24/06 25/06 26/06 06/27 06/28 29/06 30/06 07/01 02", "/07 07/03 07/04 05/07 07/06 07/07 08/07 07/09 07/1", "0 07/11 07/12 07/13 07/14 07/15 07/16 17/07 18/07 ", "19/07 20/07 07/21 22/07 07/23 24/07 07/25 07/26 27", "/07 07/28 07/29 30/07 07/31 08/01 08/02 03/08 04/0", "8 05/08 08/06 08/07 08/08 09/08 10/08 08/11 12/08 ", "08/13 14/08 08/15 16/08 08/17 08/18 19/08 08/20 21", "/08 08/22 23/08 08/24 25/08 26/08 08/27 28/08 08/2", "9 08/30 31/08 09/01 02/09 09/03 09/04 05/09 09/06 ", "09/07 08/09 09/09 10/09 11/09 09/12 13/09 14/09 15", "/09 16/09 09/17 09/18 09/19 20/09 09/21 22/09 09/2", "3 24/09 25/09 09/26 27/09 09/28 09/29 30/09 10/01 ", "10/02 03/10 10/04 10/05 06/10 07/10 08/10 09/10 10", "/10 10/11 10/12 10/13 14/10 15/10 10/16 17/10 10/1", "8 19/10 10/20 21/10 10/22 10/23 24/10 10/25 26/10 ", "10/27 28/10 10/29 30/10 31/10 11/01 11/02 03/11 04", "/11 11/05 06/11 07/11 11/08 09/11 11/10 11/11 12/1", "1 11/13 11/14 15/11 16/11 11/17 18/11 11/19 11/20 ", "11/21 11/22 23/11 24/11 11/25 26/11 27/11 28/11 11", "/29 30/11 12/01 12/02 03/12 12/04 12/05 12/06 07/1", "2 12/08 09/12 10/12 12/11 12/12 12/13 14/12 12/15 ", "12/16 12/17 12/18 12/19 12/20 12/21 22/12 12/23 24", "/12 12/25 12/26 27/12 28/12 29/12 30/12 12/31"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "01/01 01/02 01/03 01/04 01/05 01/06 01/07 01/08 01/09 01/10 01/11 01/12 01/13 01/14 01/15 01/16 01/17 01/18 01/19 01/20 01/21 01/22 01/23 01/24 01/25 01/26 01/27 01/28 01/29 01/30 01/31 02/01 02/02 02/03 02/04 02/05 02/06 02/07 02/08 02/09 02/10 02/11 02/12 02/13 02/14 02/15 02/16 02/17 02/18 02/19 02/20 02/21 02/22 02/23 02/24 02/25 02/26 02/27 02/28 02/29 03/01 03/02 03/03 03/04 03/05 03/06 03/07 03/08 03/09 03/10 03/11 03/12 03/13 03/14 03/15 03/16 03/17 03/18 03/19 03/20 03/21 03/22 03/23 03/24 03/25 03/26 03/27 03/28 03/29 03/30 03/31 04/01 04/02 04/03 04/04 04/05 04/06 04/07 04/08 04/09 04/10 04/11 04/12 04/13 04/14 04/15 04/16 04/17 04/18 04/19 04/20 04/21 04/22 04/23 04/24 04/25 04/26 04/27 04/28 04/29 04/30 05/01 05/02 05/03 05/04 05/05 05/06 05/07 05/08 05/09 05/10 05/11 05/12 05/13 05/14 05/15 05/16 05/17 05/18 05/19 05/20 05/21 05/22 05/23 05/24 05/25 05/26 05/27 05/28 05/29 05/30 05/31 06/01 06/02 06/03 06/04 06/05 06/06 06/07 06/08 06/09 06/10 06/11 06/12 06/13 06/14 06/15 06/16 06/17 06/18 06/19 06/20 06/21 06/22 06/23 06/24 06/25 06/26 06/27 06/28 06/29 06/30 07/01 07/02 07/03 07/04 07/05 07/06 07/07 07/08 07/09 07/10 07/11 07/12 07/13 07/14 07/15 07/16 07/17 07/18 07/19 07/20 07/21 07/22 07/23 07/24 07/25 07/26 07/27 07/28 07/29 07/30 07/31 08/01 08/02 08/03 08/04 08/05 08/06 08/07 08/08 08/09 08/10 08/11 08/12 08/13 08/14 08/15 08/16 08/17 08/18 08/19 08/20 08/21 08/22 08/23 08/24 08/25 08/26 08/27 08/28 08/29 08/30 08/31 09/01 09/02 09/03 09/04 09/05 09/06 09/07 09/08 09/09 09/10 09/11 09/12 09/13 09/14 09/15 09/16 09/17 09/18 09/19 09/20 09/21 09/22 09/23 09/24 09/25 09/26 09/27 09/28 09/29 09/30 10/01 10/02 10/03 10/04 10/05 10/06 10/07 10/08 10/09 10/10 10/11 10/12 10/13 10/14 10/15 10/16 10/17 10/18 10/19 10/20 10/21 10/22 10/23 10/24 10/25 10/26 10/27 10/28 10/29 10/30 10/31 11/01 11/02 11/03 11/04 11/05 11/06 11/07 11/08 11/09 11/10 11/11 11/12 11/13 11/14 11/15 11/16 11/17 11/18 11/19 11/20 11/21 11/22 11/23 11/24 11/25 11/26 11/27 11/28 11/29 11/30 12/01 12/02 12/03 12/04 12/05 12/06 12/07 12/08 12/09 12/10 12/11 12/12 12/13 12/14 12/15 12/16 12/17 12/18 12/19 12/20 12/21 12/22 12/23 12/24 12/25 12/26 12/27 12/28 12/29 12/30 12/31";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> dateList = {"01/01 02/01 03/01 04/01 05/01 06/01 01/07 01/08 09", "/01 01/10 01/11 12/01 13/01 01/14 01/15 16/01 01/1", "7 18/01 19/01 20/01 21/01 01/22 23/01 24/01 25/01 ", "01/26 27/01 01/28 01/29 01/30 01/31 01/02 02/02 02", "/03 04/02 02/05 06/02 02/07 08/02 02/09 02/10 11/0", "2 12/02 13/02 14/02 15/02 02/16 17/02 02/18 19/02 ", "20/02 21/02 02/22 02/23 02/24 02/25 02/26 02/27 02", "/28 02/29 01/03 02/03 03/03 03/04 05/03 03/06 07/0", "3 03/08 03/09 10/03 11/03 03/12 13/03 03/14 15/03 ", "03/16 03/17 18/03 19/03 20/03 21/03 03/22 23/03 03", "/24 03/25 26/03 03/27 28/03 29/03 30/03 03/31 01/0", "4 04/02 03/04 04/04 04/05 04/06 04/07 08/04 04/09 ", "10/04 04/11 04/12 13/04 04/14 04/15 04/16 04/17 04", "/18 19/04 04/20 04/21 04/22 23/04 04/24 04/25 04/2", "6 04/27 04/28 04/29 04/30 01/05 02/05 05/03 05/04 ", "05/05 05/06 05/07 08/05 09/05 05/10 11/05 12/05 05", "/13 05/14 05/15 16/05 17/05 05/18 05/19 20/05 21/0", "5 22/05 05/23 05/24 05/25 26/05 05/27 05/28 29/05 ", "05/30 05/31 06/01 02/06 03/06 04/06 05/06 06/06 07", "/06 08/06 09/06 06/10 06/11 06/12 06/13 06/14 15/0", "6 06/16 06/17 18/06 19/06 06/20 06/21 06/22 23/06 ", "24/06 25/06 26/06 06/27 06/28 29/06 30/06 07/01 02", "/07 07/03 07/04 05/07 07/06 07/07 08/07 07/09 07/1", "0 07/11 07/12 07/13 07/14 07/15 07/16 17/07 18/07 ", "19/07 20/07 07/21 22/07 07/23 24/07 07/25 07/26 27", "/07 07/28 07/29 30/07 07/31 08/01 08/02 03/08 04/0", "8 05/08 08/06 08/07 08/08 09/08 10/08 08/11 12/08 ", "08/13 14/08 08/15 16/08 08/17 08/18 19/08 08/20 21", "/08 08/22 23/08 08/24 25/08 26/08 08/27 28/08 08/2", "9 08/30 31/08 09/01 02/09 09/03 09/04 05/09 09/06 ", "09/07 08/09 09/09 10/09 11/09 09/12 13/09 14/09 15", "/09 16/09 09/17 09/18 09/19 20/09 09/21 22/09 09/2", "3 24/09 25/09 09/26 27/09 09/28 09/29 30/09 10/01 ", "10/02 03/10 10/04 10/05 06/10 07/10 08/10 09/10 10", "/10 10/11 10/12 10/13 14/10 15/10 10/16 17/10 10/1", "8 19/10 10/20 21/10 10/22 10/23 24/10 10/25 26/10 ", "10/27 28/10 10/29 30/10 31/10 11/01 11/02 03/11 04", "/11 11/05 06/11 07/11 11/08 09/11 11/10 11/11 12/1", "1 11/13 11/14 15/11 16/11 11/17 18/11 11/19 11/20 ", "11/21 11/22 23/11 24/11 11/25 26/11 27/11 28/11 11", "/29 30/11 12/01 12/02 03/12 12/04 12/05 12/06 07/1", "2 12/08 09/12 10/12 12/11 12/12 12/13 14/12 12/15 ", "12/16 12/17 12/18 12/19 12/20 12/21 22/12 12/23 24", "/12 12/25 12/26 27/12 28/12 29/12 30/12 12/31", " 12/31"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> dateList = {"27/03 02/06 03/09 24/04 05/02 09/09 04/03 03/09 08", "/08 10/30 01/23 14/02 09/13 06/24 06/18 27/02 29/0", "3 05/11 12/02 07/15 09/13 11/18 02/05 02/02 29/06 ", "02/23 10/01 06/05 27/02 11/07 03/12 07/22 23/03 04", "/25 02/07 26/04 04/04 22/03 03/08 05/02 12/06 12/1", "2 01/04 02/11 11/10 25/05 16/11 27/04 09/28 15/07 ", "01/04 12/04 07/01 04/20 08/10 20/09 21/06 10/02 16", "/02 21/03 09/03 26/11 13/10 02/22 14/01 12/30 10/0", "4 12/02 06/12 13/12 11/10 03/22 12/26 19/05 06/10 ", "05/14 11/23 02/07 07/19 02/29 17/05 04/01 27/06 25", "/04 20/05 20/09 07/03 10/10 04/17 12/16 23/05 02/1", "1 12/04 06/29 14/11 13/05 10/10 01/07 01/13 19/10 ", "03/19 08/17 09/26 11/02 03/31 09/01 14/03 03/04 04", "/03 30/07 06/19 02/16 30/11 30/07 14/02 11/14 03/2", "3 03/12 03/06 07/05 05/05 12/06 12/29 10/23 15/08 ", "04/18 07/01 03/20 14/07 10/16 23/11 03/16 03/31 03", "/31 12/13 05/26 07/16 16/12 09/12 13/07 05/15 01/0", "2 14/08 09/14 05/02 02/02 01/18 08/22 05/07 28/03 ", "05/19 03/13 18/07 24/03 19/06 09/14 01/14 18/01 03", "/02 07/10 26/02 03/26 11/17 10/21 10/03 12/12 11/0", "7 12/02 05/20 07/06 03/27 11/13 03/24 05/05 08/14 ", "28/03 06/20 24/05 10/08 11/09 09/18 29/06 04/17 11", "/10 06/15 11/18 07/02 03/28 03/04 26/09 15/05 04/1", "9 05/08 12/28 09/06 04/05 10/03 09/13 11/20 05/11 ", "16/02 11/11 02/22 31/10 03/21 06/12 31/08 04/18 02", "/12 21/03 10/12 18/08 19/08 04/13 07/09 04/11 06/0", "1 17/10 03/29 30/11 06/09 07/04 21/02 09/02 06/08 ", "03/07 01/29 15/09 04/10 10/09 23/03 10/14 06/15 30", "/08 11/13 02/08 11/22 07/18 04/07 09/01 01/23 20/0", "8 05/07 30/11 11/19 17/06 03/10 05/15 24/06 11/07 ", "01/06 19/02 11/18 02/22 02/07 28/04 06/12 10/05 15", "/11 01/22 12/05 12/08 21/10 12/01 01/06 11/02 20/0", "4 13/12 01/09 11/11 01/06 02/12 26/11 20/07 12/22 ", "30/01 12/26 20/10 12/15 05/10 07/28 04/13 11/24 12", "/22 07/09 14/12 10/09 09/13 10/06 29/11 17/03 08/2", "2 18/03 02/05 04/09 10/22 11/12 02/20 11/23 26/05 ", "11/25 09/17 05/01 02/07 03/23 21/02 17/06 05/19 04", "/01 09/13 04/17 11/28 03/11 12/07 09/10 01/22 08/1", "0 25/11 11/21 13/08 04/06 07/15 20/03 02/27 09/02 ", "09/10 29/02 11/07 05/29 02/21 02/05 11/04 11/21 21", "/06 04/29 11/15 06/12 05/01 03/29 08/12 13/07 03/1", "2 02/12 06/27 02/19 06/23 30/04 25/02 10/04 04/06 ", "01/16 03/16 02/01 29/11 07/05 08/30 22/05 18/02 09", "/15 28/06 29/01 02/23 10/12 02/05 20/11 24/03 03/2", "7 03/02 10/11 15/09 14/03 05/07 16/02 04/10 07/04 ", "03/11 04/24 14/11 26/07 01/02 26/06 01/13 20/01 10", "/04 07/10 09/08 07/31 29/04 14/05 28/01 31/08 09/1", "1 08/29 01/03 19/07 02/21 05/28 08/07 27/09 11/11 ", "20/12 02/13 16/06 01/08 20/11 01/09 07/16 07/21 12", "/19 28/09 09/03 12/12 22/05 05/09 08/18 20/05"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> dateList = {"01/01 02/01 01/03 01/04 01/05 06/01 07/01 08/01 01", "/09 01/10 11/01 01/12 01/13 01/14 01/15 16/01 17/0", "1 01/18 19/01 20/01 21/01 01/22 01/23 24/01 25/01 ", "01/26 01/27 28/01 01/29 30/01 01/31 01/02 02/02 02", "/03 04/02 05/02 02/06 02/07 02/08 09/02 10/02 11/0", "2 12/02 13/02 02/14 15/02 16/02 17/02 02/18 19/02 ", "02/20 21/02 02/22 02/23 02/24 02/25 26/02 27/02 28", "/02 02/29 01/03 02/03 03/03 04/03 03/05 03/06 07/0", "3 03/08 03/09 10/03 11/03 12/03 03/13 03/14 15/03 ", "03/16 17/03 03/18 19/03 20/03 03/21 22/03 23/03 24", "/03 03/25 26/03 27/03 03/28 03/29 03/30 31/03 01/0", "4 04/02 03/04 04/04 04/05 04/06 04/07 08/04 04/09 ", "10/04 11/04 12/04 13/04 14/04 04/15 04/16 17/04 18", "/04 19/04 04/20 21/04 04/22 23/04 04/24 04/25 04/2", "6 04/27 28/04 04/29 30/04 01/05 05/02 05/03 04/05 ", "05/05 06/05 05/07 05/08 09/05 05/10 11/05 05/12 05", "/13 14/05 05/15 16/05 05/17 05/18 05/19 20/05 05/2", "1 22/05 05/23 05/24 25/05 26/05 05/27 28/05 05/29 ", "30/05 31/05 01/06 02/06 03/06 04/06 06/05 06/06 07", "/06 06/08 09/06 06/10 11/06 12/06 06/13 14/06 15/0", "6 06/16 17/06 18/06 19/06 06/20 21/06 06/22 06/23 ", "24/06 06/25 26/06 06/27 06/28 06/29 06/30 01/07 07", "/02 07/03 07/04 07/05 07/06 07/07 07/08 09/07 07/1", "0 07/11 07/12 07/13 14/07 15/07 07/16 17/07 07/18 ", "07/19 07/20 21/07 22/07 07/23 07/24 07/25 26/07 07", "/27 07/28 29/07 30/07 07/31 01/08 08/02 03/08 04/0", "8 08/05 08/06 07/08 08/08 08/09 10/08 11/08 12/08 ", "08/13 08/14 15/08 08/16 17/08 18/08 19/08 08/20 08", "/21 08/22 23/08 08/24 25/08 26/08 27/08 28/08 08/2", "9 08/30 31/08 01/09 09/02 09/03 04/09 09/05 06/09 ", "07/09 09/08 09/09 10/09 09/11 12/09 09/13 14/09 09", "/15 16/09 09/17 18/09 09/19 09/20 21/09 09/22 23/0", "9 09/24 09/25 26/09 09/27 09/28 09/29 09/30 01/10 ", "02/10 10/03 04/10 10/05 06/10 10/07 10/08 09/10 10", "/10 11/10 12/10 10/13 14/10 10/15 10/16 17/10 10/1", "8 19/10 10/20 21/10 10/22 10/23 24/10 25/10 26/10 ", "27/10 10/28 10/29 10/30 31/10 11/01 11/02 11/03 04", "/11 11/05 06/11 11/07 11/08 11/09 11/10 11/11 11/1", "2 11/13 14/11 11/15 16/11 11/17 18/11 11/19 20/11 ", "11/21 11/22 11/23 24/11 11/25 11/26 11/27 11/28 29", "/11 30/11 12/01 02/12 03/12 04/12 05/12 06/12 07/1", "2 12/08 09/12 10/12 11/12 12/12 13/12 14/12 15/12 ", "12/16 17/12 18/12 12/19 12/20 21/12 12/22 23/12 24", "/12 12/25 12/26 27/12 28/12 29/12 30/12 31/12 18/0", "4 09/18 07/01 12/06 06/03 08/12 11/16 29/08 03/12 ", "11/08 03/25 09/23 07/11 10/13 28/09 05/21 05/07 29", "/12 10/05 06/20 26/04 11/13 10/20 07/13 11/09 05/0", "8 01/12 11/14 09/25 21/11 09/07 04/11 21/09 07/14 ", "21/08 12/03 10/25 01/10 02/23 06/04 07/26 30/05 10", "/03 28/04 04/12 11/12 12/21 08/23 09/12 04/08"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> dateList = {"02/29"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "02/29";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> dateList = {"29/02"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "02/29";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> dateList = {"01/01", " 01/01"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> dateList = {"02/02", " 02/02"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> dateList = {"01/02", " 01/02", " 02/02"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "01/02 02/01 02/02";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> dateList = {"05/01 03/15 08/04 05/06 11/07 10/11 16/11 27/12"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "01/05 03/15 04/08 05/06 07/11 10/11 11/16 12/27";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> dateList = {"13/01 21/02 14/03 03/31 05/01 05/05 06/26 07/24 08", "/31 09/09 23/11 19/12"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "01/13 02/21 03/14 03/31 05/01 05/05 06/26 07/24 08/31 09/09 11/23 12/19";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> dateList = {"01/06 14/01 07/02 12/02 20/02 23/03 29/03 21/05 05", "/30 06/09 06/10 05/07 07/15 07/22 07/09 09/22 05/1", "0 14/10 11/24 09/12"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "01/06 01/14 02/07 02/12 02/20 03/23 03/29 05/21 05/30 06/09 06/10 07/05 07/15 07/22 09/07 09/22 10/05 10/14 11/24 12/09";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> dateList = {"24/01 03/16 31/03 04/07 18/04 28/05 08/06 24/07 29", "/07 09/14 10/11 15/10 17/10"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "01/24 03/16 03/31 04/07 04/18 05/28 06/08 07/24 07/29 09/14 10/11 10/15 10/17";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> dateList = {"13/01 31/01 20/02 03/21 06/04 04/22 07/05 25/05 19", "/07 08/16 08/19 09/01 12/12"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "01/13 01/31 02/20 03/21 04/06 04/22 05/07 05/25 07/19 08/16 08/19 09/01 12/12";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> dateList = {"01/26 03/25 04/26 04/30 05/20 05/21 06/14 09/09 04", "/10 12/10 10/28 10/29 11/16"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "01/26 03/25 04/26 04/30 05/20 05/21 06/14 09/09 10/04 10/12 10/28 10/29 11/16";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> dateList = {"01/12 16/01 17/02 15/03 16/03 03/31 22/05 07/15 25", "/09 29/09 10/14"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "01/12 01/16 02/17 03/15 03/16 03/31 05/22 07/15 09/25 09/29 10/14";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> dateList = {"28/01 01/29 05/02 28/02 05/06 07/05 31/05 02/06 01", "/07 16/07 07/26 17/08 08/19 14/09 28/09 09/11"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "01/28 01/29 02/05 02/28 05/06 05/07 05/31 06/02 07/01 07/16 07/26 08/17 08/19 09/14 09/28 11/09";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> dateList = {"02/15 20/02 03/01 03/31 04/10 13/04 04/16 12/06 06", "/07 20/07 08/22 14/12 12/27"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "02/15 02/20 03/01 03/31 04/10 04/13 04/16 06/12 07/06 07/20 08/22 12/14 12/27";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> dateList = {"02/01 09/03 06/05 06/02 07/07 06/12"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "01/02 03/09 05/06 06/02 07/07 12/06";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> dateList = {"11/01 01/24 11/02 05/16 06/20 08/15 09/14 09/21 12", "/04"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "01/11 01/24 02/11 05/16 06/20 08/15 09/14 09/21 12/04";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> dateList = {"03/18 03/04 22/04 05/01 05/09 05/27 06/06 20/07 27", "/07 09/08 22/08 15/09 29/09 10/01 21/11"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "03/18 04/03 04/22 05/01 05/09 05/27 06/06 07/20 07/27 08/09 08/22 09/15 09/29 10/01 11/21";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> dateList = {"02/01 02/29 04/16 05/09 05/14 20/05 15/06 06/16 28", "/06 08/08 08/21 09/08 16/09 17/09 11/12 11/22 12/0", "2 23/12 12/29"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "01/02 02/29 04/16 05/09 05/14 05/20 06/15 06/16 06/28 08/08 08/21 09/08 09/16 09/17 11/12 11/22 12/02 12/23 12/29";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> dateList = {"01/10 24/01 02/21 04/14 02/05 22/07 07/26 07/31 09", "/02 10/10 12/16"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "01/10 01/24 02/21 04/14 05/02 07/22 07/26 07/31 09/02 10/10 12/16";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> dateList = {"01/19 03/03 17/03 03/18 23/03 04/26 06/08 06/09 22", "/06 07/31 08/19 10/03 12/19"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "01/19 03/03 03/17 03/18 03/23 04/26 06/08 06/09 06/22 07/31 08/19 10/03 12/19";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> dateList = {"08/01 01/14 02/25 04/09 04/17 04/18 02/07 07/18 23", "/07 04/08 09/10 15/10 07/12"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "01/08 01/14 02/25 04/09 04/17 04/18 07/02 07/18 07/23 08/04 09/10 10/15 12/07";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> dateList = {"12/02 02/21 03/09 05/05 05/06 06/27 07/01 07/18 07", "/22 05/08 09/09 14/10 18/10 12/15 24/12"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "02/12 02/21 03/09 05/05 05/06 06/27 07/01 07/18 07/22 08/05 09/09 10/14 10/18 12/15 12/24";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> dateList = {"02/18 18/03 22/03 10/14 10/30 31/10"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "02/18 03/18 03/22 10/14 10/30 10/31";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> dateList = {"17/01 01/27 18/03 04/04 06/01 27/06 21/07 24/08 28", "/08 09/18 26/10"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "01/17 01/27 03/18 04/04 06/01 06/27 07/21 08/24 08/28 09/18 10/26";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> dateList = {"20/01 02/10 04/01 04/09 04/18 05/25 28/05 30/05 05", "/07 09/19 11/01 12/12 12/22 27/12 29/12"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "01/20 02/10 04/01 04/09 04/18 05/25 05/28 05/30 07/05 09/19 11/01 12/12 12/22 12/27 12/29";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> dateList = {"07/15 19/02"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> dateList = {"13/01 12/06 12/21 06/02 05/23"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> dateList = {"17/05 04/12"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "05/17 12/04";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> dateList = {"21/02 07/08"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "02/21 07/08";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> dateList = {"04/11"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "04/11";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> dateList = {"07/21 10/19 31/07 09/02"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> dateList = {"06/01 05/19 08/11 02/29"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> dateList = {"09/04"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "04/09";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> dateList = {"05/16 14/01"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> dateList = {"04/21 10/06 18/03"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> dateList = {"25/09 10/04 04/13 21/12"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> dateList = {"03/16 06/04"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "03/16 04/06";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> dateList = {"11/21 01/29 02/07 29/10"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> dateList = {"31/08 09/03 28/11"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "08/31 09/03 11/28";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> dateList = {"20/08"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "08/20";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> dateList = {"02/22 05/27 01/03 14/11 01/22"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> dateList = {"30/01 01/04"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "01/30 04/01";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> dateList = {"11/30 13/09 01/01"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> dateList = {"10/11 25/06 13/06 11/12 02/08"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> dateList = {"09/12 01/17 13/04"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> dateList = {"03/12 15/03"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "03/12 03/15";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> dateList = {"02/05 04/01 11/08"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "02/05 04/01 08/11";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> dateList = {"03/11 02/09 20/04 10/03"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> dateList = {"10/28 03/02 20/03"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> dateList = {"02/04 17/04 10/01 05/01 20/05"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> dateList = {"10/18 06/05 01/14"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> dateList = {"11/02 06/11 05/06 21/06 12/12 09/27"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> dateList = {"23/04 11/29 07/07"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> dateList = {"03/22 11/08 11/26"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "03/22 08/11 11/26";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> dateList = {"03/13 05/23 04/05 07/04 04/03 11/04"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> dateList = {"02/01 01/09 13/01 01/23 01/24 24/02 03/08 03/13 13", "/04 09/05 06/04 06/08 06/13 06/23 07/01 07/08 07/1", "4 27/07 08/04 08/11 08/13 09/14 17/09 11/17 12/03 ", "05/12 13/12 12/18 12/23 30/12"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "01/02 01/09 01/13 01/23 01/24 02/24 03/08 03/13 04/13 05/09 06/04 06/08 06/13 06/23 07/01 07/08 07/14 07/27 08/04 08/11 08/13 09/14 09/17 11/17 12/03 12/05 12/13 12/18 12/23 12/30";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> dateList = {"04/01 15/01 01/21 01/24 21/02 24/02 03/15 04/05 09", "/04 22/04 23/04 29/04 30/04 05/08 05/15 05/25 05/2", "6 06/06 06/16 06/28 06/30 02/07 06/07 25/07 19/08 ", "24/08 27/08 01/09 09/10 09/21 09/23 04/10 08/10 27", "/12 12/28"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "01/04 01/15 01/21 01/24 02/21 02/24 03/15 04/05 04/09 04/22 04/23 04/29 04/30 05/08 05/15 05/25 05/26 06/06 06/16 06/28 06/30 07/02 07/06 07/25 08/19 08/24 08/27 09/01 09/10 09/21 09/23 10/04 10/08 12/27 12/28";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> dateList = {"01/01 02/01 01/10 01/13 20/01 02/17 05/03 03/09 11", "/03 12/03 03/14 26/04 04/05 05/21 06/30 01/07 18/0", "7 27/07 04/08 10/08 07/09 09/08 09/12 09/28 10/19 ", "11/02 12/05 12/07 08/12 12/09 12/18 27/12 12/29"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "01/01 01/02 01/10 01/13 01/20 02/17 03/05 03/09 03/11 03/12 03/14 04/26 05/04 05/21 06/30 07/01 07/18 07/27 08/04 08/10 09/07 09/08 09/12 09/28 10/19 11/02 12/05 12/07 12/08 12/09 12/18 12/27 12/29";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> dateList = {"01/01 06/01 20/01 02/03 02/17 01/04 09/04 04/13 21", "/04 04/05 08/05 11/05 05/12 18/05 26/05 07/06 06/0", "9 06/21 06/30 15/07 07/20 09/08 08/10 08/12 08/15 ", "16/08 22/08 08/23 09/29 10/05 08/10 16/10 17/10 11", "/03 11/07 11/12 11/13 11/14 11/21 12/01 17/12 12/2", "0 28/12"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "01/01 01/06 01/20 02/03 02/17 04/01 04/09 04/13 04/21 05/04 05/08 05/11 05/12 05/18 05/26 06/07 06/09 06/21 06/30 07/15 07/20 08/09 08/10 08/12 08/15 08/16 08/22 08/23 09/29 10/05 10/08 10/16 10/17 11/03 11/07 11/12 11/13 11/14 11/21 12/01 12/17 12/20 12/28";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> dateList = {"01/09 18/02 02/20 03/21 29/03 31/03 12/04 15/04 04", "/25 05/06 17/05 21/05 06/01 06/06 06/15 06/18 06/2", "5 15/08 09/09 09/10 09/25 10/03 05/10 10/17 19/10 ", "27/10 28/11 03/12 07/12 14/12 18/12 26/12 27/12 31", "/12"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "01/09 02/18 02/20 03/21 03/29 03/31 04/12 04/15 04/25 05/06 05/17 05/21 06/01 06/06 06/15 06/18 06/25 08/15 09/09 09/10 09/25 10/03 10/05 10/17 10/19 10/27 11/28 12/03 12/07 12/14 12/18 12/26 12/27 12/31";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> dateList = {"01/11 01/16 01/30 02/02 03/02 02/06 07/02 02/20 03", "/02 26/03 03/30 01/04 05/03 04/05 13/05 15/05 06/0", "6 06/08 30/06 07/09 07/19 23/07 30/07 29/08 09/06 ", "09/08 09/14 22/09 10/08 10/15 11/05 11/07 13/11 12", "/07 08/12 12/10 12/16 12/17 12/31"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "01/11 01/16 01/30 02/02 02/03 02/06 02/07 02/20 03/02 03/26 03/30 04/01 05/03 05/04 05/13 05/15 06/06 06/08 06/30 07/09 07/19 07/23 07/30 08/29 09/06 09/08 09/14 09/22 10/08 10/15 11/05 11/07 11/13 12/07 12/08 12/10 12/16 12/17 12/31";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> dateList = {"01/16 01/17 06/02 10/02 02/11 02/28 03/06 10/03 16", "/03 19/03 22/03 04/05 28/04 05/05 06/05 05/11 05/1", "7 05/26 06/06 24/06 07/06 08/07 10/07 07/20 07/22 ", "07/24 26/07 12/08 14/08 06/09 12/09 14/09 24/09 26", "/09 29/09 09/10 10/11 10/12 21/10 10/22 27/10 11/0", "3 11/11 25/11"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "01/16 01/17 02/06 02/10 02/11 02/28 03/06 03/10 03/16 03/19 03/22 04/05 04/28 05/05 05/06 05/11 05/17 05/26 06/06 06/24 07/06 07/08 07/10 07/20 07/22 07/24 07/26 08/12 08/14 09/06 09/12 09/14 09/24 09/26 09/29 10/09 10/11 10/12 10/21 10/22 10/27 11/03 11/11 11/25";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> dateList = {"01/03 01/02 02/09 02/13 26/02 04/03 03/09 24/03 31", "/03 03/05 05/04 05/07 05/15 06/03 15/06 06/29 19/0", "7 20/07 07/25 08/15 09/01 09/14 22/09 28/09 12/11 ", "15/11 18/11 11/22 11/25 11/26 11/30 05/12 25/12 28", "/12"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "01/03 02/01 02/09 02/13 02/26 03/04 03/09 03/24 03/31 05/03 05/04 05/07 05/15 06/03 06/15 06/29 07/19 07/20 07/25 08/15 09/01 09/14 09/22 09/28 11/12 11/15 11/18 11/22 11/25 11/26 11/30 12/05 12/25 12/28";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> dateList = {"01/05 01/15 04/02 18/02 28/02 08/03 03/16 03/29 04", "/08 05/03 05/09 12/05 05/20 03/06 06/05 15/06 06/2", "5 07/02 08/07 14/07 07/24 02/08 08/03 24/08 04/09 ", "09/07 09/27 03/10 10/10 10/14 10/20 25/10 10/30 11", "/03 11/04 06/11 08/11 12/07 12/10 23/12"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "01/05 01/15 02/04 02/18 02/28 03/08 03/16 03/29 04/08 05/03 05/09 05/12 05/20 06/03 06/05 06/15 06/25 07/02 07/08 07/14 07/24 08/02 08/03 08/24 09/04 09/07 09/27 10/03 10/10 10/14 10/20 10/25 10/30 11/03 11/04 11/06 11/08 12/07 12/10 12/23";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> dateList = {"02/01 01/04 01/06 01/09 11/01 17/01 21/01 01/26 01", "/29 09/02 16/02 02/19 02/22 04/03 03/16 03/22 25/0", "3 17/04 22/04 05/03 11/05 17/05 22/05 27/05 06/20 ", "26/06 07/01 07/12 07/14 07/20 20/08 23/08 08/24 26", "/08 08/31 02/09 10/17 18/10 10/21 10/23 10/28 10/3", "0 15/11 23/11 26/11 02/12 05/12 06/12 31/12"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "01/02 01/04 01/06 01/09 01/11 01/17 01/21 01/26 01/29 02/09 02/16 02/19 02/22 03/04 03/16 03/22 03/25 04/17 04/22 05/03 05/11 05/17 05/22 05/27 06/20 06/26 07/01 07/12 07/14 07/20 08/20 08/23 08/24 08/26 08/31 09/02 10/17 10/18 10/21 10/23 10/28 10/30 11/15 11/23 11/26 12/02 12/05 12/06 12/31";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> dateList = {"31/07 06/20 02/29 04/04 23/12 21/04 12/05 06/06 07", "/07 07/29 08/18 09/02 10/15 11/09 11/11 03/12 13/1", "2"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> dateList = {"01/26 06/02 06/09 30/06 07/21 29/09 08/08 26/10"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> dateList = {"01/30 18/02 04/03 05/02 09/14 10/13 16/10 10/17 10", "/02 03/11"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> dateList = {"11/01 17/02 03/17 24/03 04/13 10/05 28/06 07/01 07", "/12 15/07 27/07 30/08 09/10 11/09 05/12 04/10 10/1", "8 11/10 12/02"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> dateList = {"12/14 30/01 14/02 30/03 04/11 24/05 11/01 06/07 06", "/09 01/17 24/10 08/09 06/29 05/11 14/11 11/17 11/2", "4"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> dateList = {"09/01 01/31 09/08 20/02 02/21 03/14 03/23 01/04 04", "/18 22/04 06/13 18/06 01/09 12/07 15/07 07/19 08/2", "2 09/03 08/04 11/15 11/19 03/26"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> dateList = {"07/02 16/03 04/02 06/04 05/16 10/06 02/13 21/07 28", "/07 03/24 17/12"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> dateList = {"04/04 04/13 05/22 31/05 19/06 26/06 07/19 25/07 18", "/09 29/10 11/24 11/26 01/12 09/12 12/17"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "04/04 04/13 05/22 05/31 06/19 06/26 07/19 07/25 09/18 10/29 11/24 11/26 12/01 12/09 12/17";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> dateList = {"01/18 29/03 03/04 07/04 10/12 30/05 05/31 04/12 06", "/30 11/20 10/11"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> dateList = {"02/07 12/02 03/07 01/04 04/25 30/04 22/05 06/02 06", "/20 06/07 05/17 02/05 19/09 20/11 07/12 31/12"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> dateList = {"21/03 04/11 03/29 11/06 28/06 08/20 03/09 03/27 06", "/08 11/14 23/11 30/11 10/15"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> dateList = {"11/26 10/03 28/01 15/02 03/10 12/04 04/30 29/05 06", "/20 13/08 09/02 09/17 10/02 13/10 15/10 10/31"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> dateList = {"01/03 07/27 01/28 04/15 03/17 04/12 18/04 12/07 27", "/09 04/21 06/18 03/07 08/05 08/28 20/09 07/08 11/2", "1 28/11"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> dateList = {"02/05 02/17 03/03 13/05 05/14 07/17 03/02 01/08 08", "/13 21/08 01/11 27/04 12/18"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> dateList = {"16/01 01/29 01/03 03/03 02/02 22/04 30/05 05/31 31", "/10 06/21 25/11 08/11 08/17 22/08 09/21 09/26 10/2", "4 13/10 30/10"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> dateList = {"01/29 02/02 12/03 03/25 03/27 04/23 05/16 05/19 06", "/06 15/06 06/28 07/04 01/17 30/07 06/08 08/07 05/1", "2 18/09 31/12 10/28 30/10 11/02 09/11 11/27 12/08"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> dateList = {"09/01 01/11 24/01 01/27 10/12 02/16 06/03 23/03 04", "/02 07/04 04/11 18/04 01/06 08/01 31/10"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> dateList = {"09/01 01/12 01/27 07/03 03/31 04/03 10/05 05/25 08", "/12 03/09 09/21 06/10 14/10 20/12"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "01/09 01/12 01/27 03/07 03/31 04/03 05/10 05/25 08/12 09/03 09/21 10/06 10/14 12/20";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> dateList = {"01/11 01/17 01/23 22/03 03/27 04/10 04/22 04/23 02", "/02 06/05 25/07 08/14 22/09 11/08 05/12 12/17 12/3", "1"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> dateList = {"07/01 08/16 08/20 01/10 07/11 24/11 28/11"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "01/07 08/16 08/20 10/01 11/07 11/24 11/28";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> dateList = {"0", "3", "/", "2", "8", " ", "2", "9", "/", "0", "3", " ", "0", "4", "/", "2", "0", " ", "0", "6", "/", "0", "1", " ", "2", "6", "/", "0", "6", " ", "0", "9", "/", "1", "6", " ", "1", "0", "/", "0", "7"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "03/28 03/29 04/20 06/01 06/26 09/16 10/07";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> dateList = {"0", "8", "/", "0", "5", " ", "0", "6", "/", "0", "2", " ", "0", "2", "/", "1", "1", " ", "1", "2", "/", "0", "7"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "05/08 06/02 11/02 12/07";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> dateList = {"03/05", " 04/01"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "03/05 04/01";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> dateList = {"29/04 05/15 01/12"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "04/29 05/15 12/01";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> dateList = {"02/10 17/02 06/04 09/17 05/12"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "02/10 02/17 04/06 09/17 12/05";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> dateList = {"13/02 30/05 14/07"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "02/13 05/30 07/14";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> dateList = {"22/01 09/02 04/18 18/05"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "01/22 02/09 04/18 05/18";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> dateList = {"06/07 07/07 10/07"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "06/07 07/07 07/10";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> dateList = {"13/02 05/10 06/15 16/06 24/06 08/18 12/27"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "02/13 05/10 06/15 06/16 06/24 08/18 12/27";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> dateList = {"21/01 07/17 11/24 12/27"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "01/21 07/17 11/24 12/27";
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> dateList = {"27/03 05/29 17/08 09/10"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "03/27 05/29 08/17 09/10";
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> dateList = {"16/02 15/05"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "02/16 05/15";
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> dateList = {"28/01", " 18/05"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "01/28 05/18";
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> dateList = {"12/03 04/30 26/08 18/10"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "03/12 04/30 08/26 10/18";
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> dateList = {"06/04 10/06 07/07 07/09 09/16 11/26 28/12"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "04/06 06/10 07/07 07/09 09/16 11/26 12/28";
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> dateList = {"25/05 15/08"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "05/25 08/15";
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> dateList = {"22/02 08/14 12/09"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "02/22 08/14 09/12";
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> dateList = {"06/06 30/07 09/19 18/10"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "06/06 07/30 09/19 10/18";
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> dateList = {"04/23 12/20"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "04/23 12/20";
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> dateList = {"01/15 25/08 18/09 09/19 21/09"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "01/15 08/25 09/18 09/19 09/21";
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> dateList = {"12/23 12/26"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "12/23 12/26";
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> dateList = {"01/11 03/17 09/13"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "01/11 03/17 09/13";
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> dateList = {"02/08 03/09"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "02/08 03/09";
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<string> dateList = {"08/02 03/09"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "02/08 03/09";
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<string> dateList = {"02/08 09/03"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "02/08 03/09";
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<string> dateList = {"08/02 09/03"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "02/08 03/09";
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<string> dateList = {"02/16 03/21"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "02/16 03/21";
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<string> dateList = {"16/02 03/21"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "02/16 03/21";
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<string> dateList = {"02/16 21/03"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "02/16 03/21";
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<string> dateList = {"16/02 21/03"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "02/16 03/21";
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<string> dateList = {"02/16 01/21"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<string> dateList = {"16/02 01/21"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<string> dateList = {"02/16 21/01"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<string> dateList = {"16/02 21/01"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<string> dateList = {"13/12 13/12"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<string> dateList = {"12/12 15/01"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<string> dateList = {"12/30 11/30"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<string> dateList = {"02/01 08/02 08/02 21/09 06/11"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "01/02 02/08 08/02 09/21 11/06";
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<string> dateList = {"08/02 08/02 03/04"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<string> dateList = {"06/06 05/20"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<string> dateList = {"12/31 06/13"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<string> dateList = {"01/20 01/19"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<string> dateList = {"2", "9/02", " 08/", "03 01/08"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "02/29 03/08 08/01";
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<string> dateList = {"10/12 05/17"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<string> dateList = {"0", "2/01 01/", "02 05/04 13/12"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "01/02 02/01 04/05 12/13";
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<string> dateList = {"17/01 05/05 03/07 07/24 23/09 09/30 01/11 11/11"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "01/17 05/05 07/03 07/24 09/23 09/30 11/01 11/11";
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<string> dateList = {"10/30 10/30"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<string> dateList = {"01/01 02/01 01/03 01/04 05/01 01/06 ", "01/07 01/08 01/09 01/10 11/01 12/01 ", "13/01 14/01 15/01 16/01 17/01 01/18 ", "19/01 01/20 01/02 02/02 02/03 04/02 ", "02/05 02/06 07/02 02/08 02/09 10/02 ", "11/02 02/12 13/02 02/14 15/02 02/16 ", "17/02 18/02 19/02 02/20 01/03 02/03 ", "03/03 04/03 05/03 03/06 07/03 08/03 ", "09/03 03/10 11/03 03/12 03/13 14/03 ", "15/03 16/03 17/03 18/03 19/03 03/20 ", "04/01 02/04 04/03 04/04 04/05 04/06 ", "04/07 04/08 04/09 04/10 04/11 12/04 ", "04/13 14/04 04/15 04/16 04/17 18/04 ", "19/04 04/20 01/05 02/05 05/03 05/04 ", "05/05 05/06 05/07 05/08 09/05 05/10 ", "05/11 12/05 05/13 14/05 15/05 05/16 ", "05/17 05/18 19/05 20/05 01/06 02/06 ", "03/06 06/04 06/05 06/06 07/06 06/08 ", "09/06 06/10 11/06 12/06 06/13 06/14 ", "06/15 16/06 17/06 18/06 19/06 06/20 ", "07/01 07/02 03/07 07/04 05/07 06/07 ", "07/07 07/08 09/07 07/10 07/11 07/12 ", "13/07 07/14 07/15 07/16 17/07 18/07 ", "19/07 20/07 01/08 02/08 03/08 04/08 ", "05/08 06/08 07/08 08/08 09/08 08/10 ", "08/11 08/12 08/13 08/14 15/08 08/16 ", "08/17 18/08 08/19 20/08 09/01 02/09 ", "09/03 04/09 09/05 06/09 07/09 08/09 ", "09/09 09/10 11/09 09/12 09/13 09/14 ", "09/15 16/09 09/17 18/09 09/19 09/20 ", "01/10 10/02 03/10 04/10 10/05 10/06 ", "10/07 10/08 09/10 10/10 10/11 12/10 ", "10/13 14/10 15/10 16/10 10/17 18/10 ", "19/10 10/20 01/11 11/02 03/11 04/11 ", "11/05 06/11 07/11 11/08 11/09 10/11 ", "11/11 11/12 11/13 14/11 15/11 11/16 ", "17/11 18/11 19/11 20/11 01/12 02/12 ", "12/03 04/12 12/05 12/06 12/07 12/08 ", "12/09 12/10 12/11 12/12 13/12 12/14 ", "15/12 16/12 12/17 12/18 12/19 12/20"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "01/01 01/02 01/03 01/04 01/05 01/06 01/07 01/08 01/09 01/10 01/11 01/12 01/13 01/14 01/15 01/16 01/17 01/18 01/19 01/20 02/01 02/02 02/03 02/04 02/05 02/06 02/07 02/08 02/09 02/10 02/11 02/12 02/13 02/14 02/15 02/16 02/17 02/18 02/19 02/20 03/01 03/02 03/03 03/04 03/05 03/06 03/07 03/08 03/09 03/10 03/11 03/12 03/13 03/14 03/15 03/16 03/17 03/18 03/19 03/20 04/01 04/02 04/03 04/04 04/05 04/06 04/07 04/08 04/09 04/10 04/11 04/12 04/13 04/14 04/15 04/16 04/17 04/18 04/19 04/20 05/01 05/02 05/03 05/04 05/05 05/06 05/07 05/08 05/09 05/10 05/11 05/12 05/13 05/14 05/15 05/16 05/17 05/18 05/19 05/20 06/01 06/02 06/03 06/04 06/05 06/06 06/07 06/08 06/09 06/10 06/11 06/12 06/13 06/14 06/15 06/16 06/17 06/18 06/19 06/20 07/01 07/02 07/03 07/04 07/05 07/06 07/07 07/08 07/09 07/10 07/11 07/12 07/13 07/14 07/15 07/16 07/17 07/18 07/19 07/20 08/01 08/02 08/03 08/04 08/05 08/06 08/07 08/08 08/09 08/10 08/11 08/12 08/13 08/14 08/15 08/16 08/17 08/18 08/19 08/20 09/01 09/02 09/03 09/04 09/05 09/06 09/07 09/08 09/09 09/10 09/11 09/12 09/13 09/14 09/15 09/16 09/17 09/18 09/19 09/20 10/01 10/02 10/03 10/04 10/05 10/06 10/07 10/08 10/09 10/10 10/11 10/12 10/13 10/14 10/15 10/16 10/17 10/18 10/19 10/20 11/01 11/02 11/03 11/04 11/05 11/06 11/07 11/08 11/09 11/10 11/11 11/12 11/13 11/14 11/15 11/16 11/17 11/18 11/19 11/20 12/01 12/02 12/03 12/04 12/05 12/06 12/07 12/08 12/09 12/10 12/11 12/12 12/13 12/14 12/15 12/16 12/17 12/18 12/19 12/20";
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<string> dateList = {"01/02 10/10 20/02"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<string> dateList = {"12/14 12/13"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<string> dateList = {"01/01 01/01"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<string> dateList = {"04/01 05/03 06/02 06/05"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "01/04 03/05 06/02 06/05";
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<string> dateList = {"09/09 01/01"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<string> dateList = {"12/23 13/01"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<string> dateList = {"02/29"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "02/29";
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<string> dateList = {"12/31"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "12/31";
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<string> dateList = {"01/12 01/12"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "01/12 12/01";
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<string> dateList = {"02/01 08/02 08/02 21/09 06/11 11/12"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "01/02 02/08 08/02 09/21 11/06 11/12";
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<string> dateList = {"01/01 01/02 01/03 01/04 01/05 01/06 01/07 01/08 ", "02/01 02/02 02/03 02/04 02/05 02/06 02/07 02/08 ", "03/01 03/02 03/03 03/04 03/05 03/06 03/07 03/08 ", "04/01 04/02 04/03 04/04 04/05 04/06 04/07 04/08 ", "05/01 05/02 05/03 05/04 05/05 05/06 05/07 05/08 ", "06/01 06/02 06/03 06/04 06/05 06/06 06/07 06/08 ", "07/01 07/02 07/03 07/04 07/05 07/06 07/07 07/08 ", "08/01 08/02 08/03 08/04 08/05 08/06 08/07 08/08 ", "09/01 09/02 09/03 09/04 09/05 09/06 09/07 09/08 ", "10/01 10/02 10/03 10/04 10/05 10/06 10/07 10/08 ", "11/01 11/02 11/03 11/04 11/05 11/06 11/07 11/08 ", "12/01 12/02 12/03 12/04 12/05 12/06 12/07 12/08"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "01/01 01/02 01/03 01/04 01/05 01/06 01/07 01/08 02/01 02/02 02/03 02/04 02/05 02/06 02/07 02/08 03/01 03/02 03/03 03/04 03/05 03/06 03/07 03/08 04/01 04/02 04/03 04/04 04/05 04/06 04/07 04/08 05/01 05/02 05/03 05/04 05/05 05/06 05/07 05/08 06/01 06/02 06/03 06/04 06/05 06/06 06/07 06/08 07/01 07/02 07/03 07/04 07/05 07/06 07/07 07/08 08/01 08/02 08/03 08/04 08/05 08/06 08/07 08/08 09/01 09/02 09/03 09/04 09/05 09/06 09/07 09/08 10/01 10/02 10/03 10/04 10/05 10/06 10/07 10/08 11/01 11/02 11/03 11/04 11/05 11/06 11/07 11/08 12/01 12/02 12/03 12/04 12/05 12/06 12/07 12/08";
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<string> dateList = {"31/01"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "01/31";
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<string> dateList = {"20/02 20/01"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<string> dateList = {"12/12 13/08"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<string> dateList = {"01/31 01/28"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<string> dateList = {"02/01 04/03 05/06 05/06 09/21 09/10 06/11"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "01/02 03/04 05/06 06/05 09/21 10/09 11/06";
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<string> dateList = {"05/01 05/01 03/07 07/24 23/09 09/30 01/11 11/11"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "01/05 05/01 07/03 07/24 09/23 09/30 11/01 11/11";
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<string> dateList = {"05/30 04/20"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<string> dateList = {"02/01"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "01/02";
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<string> dateList = {"03/31"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "03/31";
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<string> dateList = {"03/30"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "03/30";
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<string> dateList = {"31/03"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "03/31";
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<string> dateList = {"01/01 01/02 01/03 01/04 01/05 01/06 01/07 01/08 ", "02/01 02/02 02/03 02/04 02/05 02/06 02/07 02/08 ", "03/01 03/02 03/03 03/04 03/05 03/06 03/07 03/08 ", "04/01 04/02 04/03 04/04 04/05 04/06 04/07 04/08 ", "05/01 05/02 05/03 05/04 05/05 05/06 05/07 05/08 ", "06/01 06/02 06/03 06/04 06/05 06/06 06/07 06/08 ", "07/01 07/02 07/03 07/04 07/05 07/06 07/07 07/08 ", "08/01 08/02 08/03 08/04 08/05 08/06 08/07 08/08 ", "09/01 09/02 09/03 09/04 09/05 09/06 09/07 09/08"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "01/01 01/02 01/03 01/04 01/05 01/06 01/07 01/08 02/01 02/02 02/03 02/04 02/05 02/06 02/07 02/08 03/01 03/02 03/03 03/04 03/05 03/06 03/07 03/08 04/01 04/02 04/03 04/04 04/05 04/06 04/07 04/08 05/01 05/02 05/03 05/04 05/05 05/06 05/07 05/08 06/01 06/02 06/03 06/04 06/05 06/06 06/07 06/08 07/01 07/02 07/03 07/04 07/05 07/06 07/07 07/08 08/01 08/02 08/03 08/04 08/05 08/06 08/07 08/08 09/01 09/02 09/03 09/04 09/05 09/06 09/07 09/08";
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    vector<string> dateList = {"08/08 09/03"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "08/08 09/03";
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    vector<string> dateList = {"08/", "03 01", "/08"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "03/08 08/01";
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    vector<string> dateList = {"18/02 18/02"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    vector<string> dateList = {"12/0", "2 12/03 12/04"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "02/12 03/12 04/12";
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    vector<string> dateList = {"29/02 02/29"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    vector<string> dateList = {"13/12", " 12/13"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    vector<string> dateList = {"04/04 03/13"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    vector<string> dateList = {"01/31"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "01/31";
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    vector<string> dateList = {"08/22 08/22"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    vector<string> dateList = {"12/12 01/13"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    vector<string> dateList = {"01/01 ", "01/01"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    vector<string> dateList = {"01/01 02/03"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "01/01 02/03";
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    vector<string> dateList = {"01/31 28/01"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    vector<string> dateList = {"2", "9", "/0", "2 ", "0", "3", "/2", "1"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "02/29 03/21";
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    vector<string> dateList = {"01/01 01/02 01/03 01/04 01/05 01/06 01/07", " 02/01 02/02 02/03 02/04 02/05 02/06 02/07", " 03/01 03/02 03/03 03/04 03/05 03/06 03/07", " 04/01 04/02 04/03 04/04 04/05 04/06 04/07", " 05/01 05/02 05/03 05/04 05/05 05/06 05/07", " 06/01 06/02 06/03 06/04 06/05 06/06 06/07"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "01/01 01/02 01/03 01/04 01/05 01/06 01/07 02/01 02/02 02/03 02/04 02/05 02/06 02/07 03/01 03/02 03/03 03/04 03/05 03/06 03/07 04/01 04/02 04/03 04/04 04/05 04/06 04/07 05/01 05/02 05/03 05/04 05/05 05/06 05/07 06/01 06/02 06/03 06/04 06/05 06/06 06/07";
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    vector<string> dateList = {"01/01 ", "02/01 ", "02/02 ", "03/02 ", "03/03 ", "04/03 ", "04/04 ", "05/04 ", "05/05 ", "06/05 ", "06/06 ", "07/06 ", "07/07 ", "08/07 ", "08/08 ", "09/08 ", "09/09 ", "10/09 ", "10/10 ", "11/10 ", "11/11 ", "12/11 ", "12/12 ", "12/13 12/14 12/15 12/16 12/17 12/18 ", "12/19 12/20 12/21 12/22 12/23 12/24 12/25 ", "12/26 12/27 12/28 12/29 12/30 12/31 12/31"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    vector<string> dateList = {"02/29", " 02/29"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    vector<string> dateList = {"11/19 01/02"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    vector<string> dateList = {"03/29", " 03/30"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "03/29 03/30";
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    vector<string> dateList = {"01/15 01/14"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    vector<string> dateList = {"12/12"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "12/12";
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    vector<string> dateList = {"17/01 05/05 03/07 07/24 23/09 09/30 01/11 08/13"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    vector<string> dateList = {"14/01 13/01"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    vector<string> dateList = {"03/08 03/08"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "03/08 08/03";
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    vector<string> dateList = {"20/10 20/10"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    vector<string> dateList = {"30/06 31/05"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test191() {
    vector<string> dateList = {"29/02 ", "01", "/03 ", "01/03"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 191: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 191: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test192() {
    vector<string> dateList = {"01/01 01/02 03/01 04/01 01/05 06/01 07/01 08/01 ", "09/01 10/01 01/11 01/12 01/13 01/14 01/15 01/16 ", "01/17 18/01 01/19 20/01 01/21 22/01 23/01 01/24 ", "25/01 26/01 01/27 28/01 29/01 02/01 02/02 03/02 ", "02/04 05/02 02/06 07/02 02/08 02/09 02/10 11/02 ", "02/12 02/13 14/02 02/15 02/16 17/02 02/18 02/19 ", "02/20 21/02 02/22 23/02 24/02 02/25 02/26 02/27 ", "02/28 02/29 03/01 02/03 03/03 03/04 05/03 06/03 ", "07/03 08/03 09/03 10/03 11/03 12/03 13/03 03/14 ", "15/03 03/16 17/03 18/03 19/03 03/20 03/21 22/03 ", "03/23 03/24 25/03 26/03 27/03 28/03 29/03 01/04 ", "04/02 03/04 04/04 04/05 06/04 04/07 04/08 09/04 ", "10/04 11/04 04/12 04/13 04/14 04/15 04/16 17/04 ", "18/04 19/04 04/20 21/04 04/22 23/04 04/24 04/25 ", "26/04 27/04 28/04 04/29 05/01 05/02 05/03 04/05 ", "05/05 06/05 05/07 08/05 05/09 05/10 05/11 12/05 ", "05/13 14/05 15/05 16/05 05/17 18/05 19/05 20/05 ", "05/21 05/22 05/23 05/24 05/25 05/26 05/27 05/28 ", "05/29 06/01 06/02 03/06 06/04 05/06 06/06 07/06 ", "08/06 09/06 06/10 11/06 12/06 06/13 14/06 06/15 ", "16/06 06/17 18/06 06/19 20/06 06/21 06/22 06/23 ", "24/06 25/06 06/26 27/06 28/06 29/06 01/07 07/02 ", "03/07 07/04 05/07 06/07 07/07 08/07 07/09 07/10 ", "11/07 12/07 13/07 14/07 07/15 07/16 17/07 07/18 ", "19/07 07/20 07/21 07/22 23/07 07/24 07/25 26/07 ", "07/27 28/07 07/29 08/01 02/08 08/03 08/04 05/08 ", "06/08 08/07 08/08 09/08 10/08 08/11 08/12 13/08 ", "08/14 08/15 08/16 08/17 08/18 08/19 20/08 08/21 ", "22/08 23/08 24/08 25/08 26/08 27/08 28/08 08/29 ", "09/01 02/09 09/03 09/04 05/09 06/09 07/09 08/09 ", "09/09 09/10 11/09 09/12 13/09 09/14 09/15 16/09 ", "17/09 09/18 19/09 20/09 21/09 09/22 23/09 24/09 ", "25/09 26/09 09/27 09/28 09/29 01/10 02/10 03/10 ", "10/04 05/10 06/10 10/07 10/08 10/09 10/10 11/10 ", "12/10 10/13 10/14 15/10 16/10 17/10 10/18 10/19 ", "10/20 21/10 10/22 10/23 10/24 10/25 26/10 10/27 ", "28/10 10/29 01/11 02/11 11/03 11/04 05/11 06/11 ", "11/07 08/11 11/09 11/10 11/11 11/12 13/11 14/11 ", "11/15 11/16 17/11 11/18 11/19 20/11 11/21 22/11 ", "23/11 11/24 11/25 11/26 11/27 28/11 11/29 12/01 ", "12/02 12/03 04/12 12/05 12/06 12/07 12/08 09/12 ", "10/12 12/11 12/12 13/12 12/14 15/12 16/12 12/17 ", "18/12 12/19 20/12 12/21 12/22 12/23 12/24 12/25 ", "26/12 27/12 28/12 12/29 12/13"};
    DateFormat* pObj = new DateFormat();
    clock_t start = clock();
    string result = pObj->fromEuropeanToUs(dateList);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 192: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 192: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test136() == 0 ? ++passed : ++failed;
    test137() == 0 ? ++passed : ++failed;
    test138() == 0 ? ++passed : ++failed;
    test139() == 0 ? ++passed : ++failed;
    test140() == 0 ? ++passed : ++failed;
    test141() == 0 ? ++passed : ++failed;
    test142() == 0 ? ++passed : ++failed;
    test143() == 0 ? ++passed : ++failed;
    test144() == 0 ? ++passed : ++failed;
    test145() == 0 ? ++passed : ++failed;
    test146() == 0 ? ++passed : ++failed;
    test147() == 0 ? ++passed : ++failed;
    test148() == 0 ? ++passed : ++failed;
    test149() == 0 ? ++passed : ++failed;
    test150() == 0 ? ++passed : ++failed;
    test151() == 0 ? ++passed : ++failed;
    test152() == 0 ? ++passed : ++failed;
    test153() == 0 ? ++passed : ++failed;
    test154() == 0 ? ++passed : ++failed;
    test155() == 0 ? ++passed : ++failed;
    test156() == 0 ? ++passed : ++failed;
    test157() == 0 ? ++passed : ++failed;
    test158() == 0 ? ++passed : ++failed;
    test159() == 0 ? ++passed : ++failed;
    test160() == 0 ? ++passed : ++failed;
    test161() == 0 ? ++passed : ++failed;
    test162() == 0 ? ++passed : ++failed;
    test163() == 0 ? ++passed : ++failed;
    test164() == 0 ? ++passed : ++failed;
    test165() == 0 ? ++passed : ++failed;
    test166() == 0 ? ++passed : ++failed;
    test167() == 0 ? ++passed : ++failed;
    test168() == 0 ? ++passed : ++failed;
    test169() == 0 ? ++passed : ++failed;
    test170() == 0 ? ++passed : ++failed;
    test171() == 0 ? ++passed : ++failed;
    test172() == 0 ? ++passed : ++failed;
    test173() == 0 ? ++passed : ++failed;
    test174() == 0 ? ++passed : ++failed;
    test175() == 0 ? ++passed : ++failed;
    test176() == 0 ? ++passed : ++failed;
    test177() == 0 ? ++passed : ++failed;
    test178() == 0 ? ++passed : ++failed;
    test179() == 0 ? ++passed : ++failed;
    test180() == 0 ? ++passed : ++failed;
    test181() == 0 ? ++passed : ++failed;
    test182() == 0 ? ++passed : ++failed;
    test183() == 0 ? ++passed : ++failed;
    test184() == 0 ? ++passed : ++failed;
    test185() == 0 ? ++passed : ++failed;
    test186() == 0 ? ++passed : ++failed;
    test187() == 0 ? ++passed : ++failed;
    test188() == 0 ? ++passed : ++failed;
    test189() == 0 ? ++passed : ++failed;
    test190() == 0 ? ++passed : ++failed;
    test191() == 0 ? ++passed : ++failed;
    test192() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=251074&rd=10711&pm=7654
********************************************************************************
#include <string>
#include <vector>
#include <map>
#include <cstdlib>
#include <cstring>
#include <cassert>
#include <set>
#include <iostream>
#include <sstream>
#include <cstddef>
#include <algorithm>
#include <utility>
#include <iterator>
#include <numeric>
#include <queue>
#include <complex>
 
using namespace std;
 
#define RA(x) (x).begin(), (x).end()
#define FE(i, x) for (typeof((x).begin()) i = (x).begin(); i != (x).end(); i++)
 
typedef pair<int, int> pii;
typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef complex<double> pnt;
 
template<class T> static void splitstr(const string &s, vector<T> &out)
{
    istringstream in(s);
    out.clear();
    copy(istream_iterator<T>(in), istream_iterator<T>(), back_inserter(out));
}
 
class DateFormat
{
public:
    string fromEuropeanToUs(vector <string> dateList);
};
 
int lens[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
 
string DateFormat::fromEuropeanToUs(vector <string> dateList)
{
    vs dates;
    string datestr = accumulate(RA(dateList), string());
    splitstr(datestr, dates);
 
    int N = dates.size();
    string ans;
    pii last(-1, -1);
    for (int i = 0; i < N; i++)
    {
        int m, d;
        sscanf(dates[i].c_str(), "%d/%d", &m, &d);
 
        bool can_us = pii(m, d) > last && m <= 12 && d <= lens[m];
        bool can_eu = pii(d, m) > last && d <= 12 && m <= lens[d];
        if (!can_us && !can_eu) return "";
        if (can_us && can_eu)
            last = min(pii(m, d), pii(d, m));
        else if (can_us)
            last = pii(m, d);
        else
            last = pii(d, m);
        if (!ans.empty()) ans += " ";
 
        char buf[60];
        sprintf(buf, "%02d/%02d", last.first, last.second);
        ans += buf;
    }
    return ans;
}
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/