/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1739
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

class Birthday {
public:
    string getNext(string date, vector<string> birthdays);
};

string Birthday::getNext(string date, vector<string> birthdays) {
    string ret;
    return ret;
}


int test0() {
    string date = "06/17";
    vector<string> birthdays = {"02/17 Wernie", "10/12 Stefan"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "10/12";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string date = "06/17";
    vector<string> birthdays = {"10/12 Stefan"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "10/12";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string date = "02/17";
    vector<string> birthdays = {"02/17 Wernie", "10/12 Stefan"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "02/17";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string date = "12/24";
    vector<string> birthdays = {"10/12 Stefan"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "10/12";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string date = "01/02";
    vector<string> birthdays = {"02/17 Wernie", "10/12 Stefan", "02/17 MichaelJordan", "10/12 LucianoPavarotti", "05/18 WilhelmSteinitz"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "02/17";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string date = "09/13";
    vector<string> birthdays = {"09/14 Loraine", "09/13 Gunther", "09/12 Gunar"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "09/13";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string date = "09/13";
    vector<string> birthdays = {"09/14 Loraine", "09/12 Gunar"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "09/14";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string date = "09/13";
    vector<string> birthdays = {"09/12 Gunar", "01/01 Emily"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "01/01";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string date = "01/30";
    vector<string> birthdays = {"10/12 Stefan", "01/31 Barris"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "01/31";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string date = "02/27";
    vector<string> birthdays = {"10/12 Stefan", "02/28 Carver"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "02/28";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string date = "03/30";
    vector<string> birthdays = {"10/12 Stefan", "03/31 Lowrance"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "03/31";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string date = "04/29";
    vector<string> birthdays = {"10/12 Stefan", "04/30 Maire"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "04/30";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string date = "05/30";
    vector<string> birthdays = {"10/12 Stefan", "05/31 Dalenna"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "05/31";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string date = "06/29";
    vector<string> birthdays = {"10/12 Stefan", "06/30 Katinka"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "06/30";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string date = "07/30";
    vector<string> birthdays = {"10/12 Stefan", "07/31 Jermaine"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "07/31";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string date = "08/30";
    vector<string> birthdays = {"10/12 Stefan", "08/31 Demetris"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "08/31";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string date = "09/29";
    vector<string> birthdays = {"10/12 Stefan", "09/30 Wadsworth"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "09/30";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string date = "10/30";
    vector<string> birthdays = {"10/12 Stefan", "10/31 Grayce"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "10/31";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string date = "11/29";
    vector<string> birthdays = {"10/12 Stefan", "11/30 Ian"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "11/30";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string date = "12/30";
    vector<string> birthdays = {"10/12 Stefan", "12/31 Derk"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "12/31";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string date = "12/26";
    vector<string> birthdays = {"07/12 Agneta"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "07/12";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string date = "10/15";
    vector<string> birthdays = {"04/27 Nataniel", "10/21 Avrom"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "10/21";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string date = "06/29";
    vector<string> birthdays = {"11/20 Dredi", "01/08 Karoly", "01/03 Fabian"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "11/20";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string date = "12/01";
    vector<string> birthdays = {"07/15 Lynn", "12/01 Christophorus", "12/22 Stefano", "04/08 Dahlia"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "12/01";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string date = "07/16";
    vector<string> birthdays = {"06/26 Gipsy", "05/20 Gilligan", "03/07 Meghann", "08/14 Emelita", "08/14 Perry"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "08/14";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string date = "11/28";
    vector<string> birthdays = {"08/30 Ashlan", "07/28 Edd", "11/23 Merrile", "02/20 Trista", "09/18 Junia", "08/10 Myrlene"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "02/20";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string date = "09/08";
    vector<string> birthdays = {"09/22 Helenelizabeth", "04/21 Nona", "03/16 Bunni", "01/28 Celinka", "01/13 Keen", "06/28 Humfried", "08/20 Jess"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "09/22";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string date = "04/11";
    vector<string> birthdays = {"04/21 Cassy", "11/26 Stephi", "08/03 Warren", "09/04 Carmelia", "11/16 Winfred", "11/06 Debbi", "06/29 Gisela", "09/12 Pavlov"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "04/21";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string date = "01/10";
    vector<string> birthdays = {"12/23 Christoper", "03/24 Caldwell", "09/08 Jessa", "10/06 Hale", "10/08 Lodovico", "11/25 Shari", "09/04 Brynn", "08/08 Tamara", "04/22 Marcel"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "03/24";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string date = "03/24";
    vector<string> birthdays = {"04/26 Mia", "07/17 Bran", "11/19 Hyacintha", "07/31 Doralyn", "03/12 Van", "03/12 Meghann", "03/29 Bent", "05/16 Heath", "12/03 Miguelita", "10/29 Cher"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "03/29";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string date = "11/22";
    vector<string> birthdays = {"11/05 Lelah", "07/18 Stillman", "05/09 Brooks", "05/23 Nolan", "06/04 Cyrillus", "07/02 Neville", "07/28 Goldie", "04/06 Rouvin", "01/03 Eal", "01/05 Christopher", "08/08 Hubey"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "01/03";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string date = "10/28";
    vector<string> birthdays = {"02/02 Lari", "08/31 Giacopo", "09/14 Justine", "10/07 Lucais", "06/21 Lisle", "04/22 Reilly", "07/01 Kippie", "07/02 Dalila", "10/05 Delly", "04/23 Janene", "11/29 Lanette", "07/03 Isac"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "11/29";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string date = "04/25";
    vector<string> birthdays = {"05/16 Bennett", "03/19 Garv", "05/08 Jaymee", "09/19 Ferrel", "05/22 Waiter", "02/17 Eudora", "11/08 Jim", "10/05 Shelden", "06/04 Michelle", "05/16 Barri", "09/12 Burty", "11/18 Fielding", "09/22 Bevin"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "05/08";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string date = "11/10";
    vector<string> birthdays = {"08/14 Brittaney", "12/19 Kyle", "12/31 Darice", "01/24 Bill", "04/24 Carmelle", "01/28 Rosalind", "11/11 Boote", "10/26 Correna", "03/03 Danika", "05/18 Clerc", "02/04 Merissa", "08/29 Corella", "03/10 Augustine", "08/21 Heywood"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "11/11";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string date = "03/04";
    vector<string> birthdays = {"09/24 Griswold", "02/06 Artair", "10/02 Brandyn", "06/15 Trstram", "05/31 Beulah", "01/12 Ruthanne", "04/02 Trevor", "11/06 Kippy", "05/31 Alethea", "03/02 Bernardine", "05/28 Turner", "10/16 Aluino", "02/03 Leshia", "08/19 Winfred", "08/03 Aleta"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "04/02";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string date = "12/02";
    vector<string> birthdays = {"06/11 Georgy", "02/02 Jolynn", "01/05 Bernette", "12/13 Leodora", "10/23 Baron", "09/04 Mannie", "06/03 Netti", "04/16 Merrili", "11/13 Lin", "10/05 Price", "09/12 Rourke", "03/26 Douglas", "08/24 Helyn", "12/21 Loydie", "03/19 Adriaens", "02/10 Dione"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "12/13";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string date = "03/18";
    vector<string> birthdays = {"01/06 Bayard", "08/26 Fanni", "08/23 Adams", "06/21 Selie", "05/29 Dorey", "09/23 Marlyn", "01/06 Ron", "08/24 Willette", "08/30 Jean", "09/27 Boot", "07/22 Nikolos", "12/13 Sybil", "03/15 Antoinette", "03/17 Rania", "03/02 Jermain", "06/15 Joshuah", "07/08 Ardine"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "05/29";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string date = "04/22";
    vector<string> birthdays = {"07/22 Lanni", "11/15 Diann", "06/12 Tricia", "12/31 Stesha", "06/05 Rae", "11/24 Georgi", "01/13 Shanon", "03/29 Erv", "09/10 Joly", "11/02 Winonah", "12/14 Margarete", "12/22 Tucky", "01/06 Taber", "09/19 Josh", "04/30 Rolland", "05/24 Blondelle", "09/02 Ed", "08/18 Montgomery"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "04/30";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string date = "11/10";
    vector<string> birthdays = {"05/11 Verne", "06/15 Sally", "06/11 Brigitte", "04/22 Maison", "07/25 Chiquita", "01/27 Demetris", "05/09 Phelia", "10/16 Talbert", "04/19 Stanislaw", "11/08 Millicent", "07/11 Darla", "04/28 Opalina", "05/16 Cary", "05/16 Shela", "05/19 Bob", "06/12 Tatum", "09/26 Letty", "01/31 Ximenez", "02/13 Liana"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "01/27";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string date = "01/17";
    vector<string> birthdays = {"07/13 Monroe", "10/23 Hervey", "11/30 Rowney", "05/10 Salvidor", "06/17 Welby", "05/19 Ettore", "05/28 Brigit", "04/24 Reinald", "01/13 Dilan", "01/12 Sergeant", "08/23 Lawry", "08/13 Marne", "12/09 Marley", "12/17 Roseanna", "04/13 Bartholemy", "05/18 Addison", "10/23 Leland", "04/23 Eden", "11/27 Haslett", "10/12 Flossie"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "04/13";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string date = "10/03";
    vector<string> birthdays = {"06/01 Russ", "06/02 Gerty", "08/09 Freddy", "02/03 Lorrie", "02/07 Alexandrina", "11/18 Marinna", "11/02 Arlen", "03/27 Marrilee", "04/16 Donnie", "05/31 Catharina", "01/28 Maureen", "04/08 Barbaraanne", "03/23 Onofredo", "02/24 Dominique", "08/02 Lefty", "10/29 Anett", "09/28 Marco", "12/02 Alon", "09/26 Bevvy", "04/12 Venita", "12/28 Ulrick"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "10/29";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string date = "12/28";
    vector<string> birthdays = {"05/15 Byram", "11/11 Marven", "07/19 Dorris", "12/31 Susan", "11/22 Gizela", "12/09 Wilbert", "08/29 Dermot", "07/10 Granthem", "10/17 Donall", "01/21 Ignacio", "04/23 Edouard", "05/27 Roseann", "03/14 Emmye", "08/02 Fredek", "10/16 Arlina", "08/12 Fenelia", "10/10 Sigismondo", "09/24 Starlene", "02/18 Bond", "07/10 Renee", "10/11 Alyss", "08/24 Nero"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "12/31";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string date = "05/29";
    vector<string> birthdays = {"12/07 Kennan", "12/20 Avril", "06/14 Trixie", "11/11 Yorker", "04/18 Reinold", "04/08 Kissee", "05/24 Minna", "06/25 Kenn", "03/15 Patin", "07/18 Fawnia", "02/09 Sacha", "07/18 Rosamund", "10/17 Jilly", "04/08 Josee", "07/14 Glad", "07/26 Persis", "04/30 Ardine", "07/02 Cate", "07/02 Stern", "03/23 Cooper", "07/11 Fania", "04/26 Ole", "04/03 Gerda"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "06/14";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string date = "09/30";
    vector<string> birthdays = {"02/28 Calley", "01/18 Brand", "06/10 Grier", "04/26 Idette", "11/29 Billi", "12/25 Valaree", "07/14 Fayette", "12/05 Clareta", "07/14 Jenine", "07/09 Fairlie", "10/30 Enid", "07/01 Redd", "11/24 Lorrie", "01/29 Zondra", "06/23 Donelle", "09/02 Faulkner", "02/14 Dennet", "06/01 Malchy", "06/23 Nichols", "08/23 Patrizio", "11/24 Mathian", "01/28 Lauren", "01/22 Bradford", "11/03 Stace"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "10/30";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string date = "02/20";
    vector<string> birthdays = {"03/29 Granville", "10/10 Averyl", "04/05 Letti", "08/03 Giovanni", "11/09 Edythe", "07/01 Kirbie", "01/17 Myrtice", "05/01 Elisha", "07/10 Hurley", "01/15 Eb", "09/06 Herve", "04/04 Bria", "05/18 Bernete", "12/07 Cody", "03/20 Nickolai", "02/11 Terri", "03/05 Craig", "08/14 Doyle", "02/13 Konstance", "09/03 Gladi", "02/25 Carilyn", "01/04 Alick", "11/15 Burty", "05/28 Courtnay", "09/27 Butch"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "02/25";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string date = "05/20";
    vector<string> birthdays = {"11/28 Shina", "05/28 Lauren", "07/13 Charin", "03/09 Colas", "11/20 Omar", "08/14 Mellisa", "12/31 Wilmar", "08/03 Colman", "12/10 Gardie", "02/06 Creigh", "01/24 Ketty", "03/13 Broddy", "05/15 Berne", "07/25 Duff", "10/05 Hanson", "02/26 Ricard", "06/15 Carter", "04/14 Thia", "03/30 Beverly", "06/14 Adrian", "09/07 Ruben", "12/26 Justus", "10/22 Birgit", "10/10 Paulo", "08/03 Carson", "05/26 Eda", "03/25 Elena", "11/04 Johnathan", "12/26 Corina", "02/21 Fairfax"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "05/26";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string date = "10/19";
    vector<string> birthdays = {"01/26 Dalenna", "08/11 Blane", "02/09 Elwin", "11/23 Pippy", "06/17 Garvy", "02/22 Reube", "07/10 Sandie", "04/14 Antonius", "07/13 Teresita", "03/09 Rianon", "08/23 Krystle", "03/29 Tabitha", "08/23 Abby", "10/25 Daryl", "11/20 Rollo", "08/27 Murry", "07/14 Tristam", "08/22 Chrotoem", "12/21 Paola", "06/14 Sacha", "01/28 Liana", "09/15 Alikee", "01/05 Clari", "05/24 Adrianna", "02/03 Imelda", "02/06 Idell", "07/08 Callida", "08/06 Arlen", "01/26 Dwayne", "05/05 Nessie", "02/17 Murdoch", "08/18 Cristiano", "06/07 Rafi", "10/14 Kennith", "01/28 Avictor"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "10/25";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string date = "06/02";
    vector<string> birthdays = {"11/30 Alta", "03/15 Corly", "06/06 Orrin", "01/13 Lucias", "01/04 Ami", "05/21 Addie", "05/18 Philip", "09/07 Cassandre", "06/25 Kettie", "08/08 Wendy", "07/11 Kleon", "08/23 Debor", "08/07 Melvin", "01/15 Westbrook", "10/28 Windy", "08/04 Tristan", "06/25 Krispin", "10/07 Kiley", "10/02 Bradley", "11/26 Susanetta", "09/08 Mellisent", "07/09 Elise", "07/23 Twyla", "12/03 Rosabel", "05/03 Mildred", "03/06 Julie", "09/16 Joann", "04/23 Faye", "11/15 Lyssa", "04/23 Perceval", "05/04 Curt", "10/25 Hanny", "11/18 Hewe", "04/09 Cammie", "02/27 Lemmy", "05/06 Hadleigh", "03/16 Ortensia", "03/15 Vinny", "06/24 Doralin", "01/26 Margalo"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "06/06";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string date = "03/21";
    vector<string> birthdays = {"01/21 Doro", "06/13 Alastair", "09/01 Sonnie", "11/03 Donn", "10/20 Almeda", "10/15 Court", "11/16 Leola", "06/17 Frederique", "12/09 Prudi", "01/27 Alex", "06/10 Clarette", "12/31 Dew", "09/29 Wat", "12/30 Marjy", "05/17 Lynne", "06/12 Cacilia", "09/04 Harriet", "02/22 Solomon", "04/07 Kennett", "06/01 Kenn", "10/17 Joy", "11/07 Carola", "08/15 Danya", "07/29 Aubert", "03/11 Benjamen", "02/06 Aloin", "03/15 Eliza", "05/12 Gayler", "07/22 Brandie", "03/29 Monica", "07/26 Olivie", "03/02 Brooks", "07/04 Elvin", "07/06 Georgine", "07/03 Norrie", "10/12 Kalle", "07/14 Johna", "12/05 Prudy", "05/18 Sybil", "03/29 Rolando", "04/26 Humbert", "07/18 Clay", "10/11 Wells", "01/21 Vonnie", "05/14 Shem"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "03/29";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string date = "12/08";
    vector<string> birthdays = {"05/11 Dorie", "02/18 Ailbert", "02/14 Elle", "01/01 Normand", "02/13 Timothy", "09/22 Scarlett", "07/15 Nevile", "02/19 Salvidor", "08/09 Vasilis", "12/11 Rasia", "02/15 Sidonnie", "10/13 Lou", "01/07 Ludvig", "08/19 Cherlyn", "10/28 Bobbye", "07/09 Andrei", "02/01 Michaella", "02/22 Therese", "06/06 Toddie", "07/05 Abie", "07/15 Grove", "11/09 Channa", "04/27 Darla", "07/09 Sandy", "07/12 Bob", "03/05 Malissa", "12/24 Georgeta", "02/16 Danila", "10/25 Arabel", "05/06 Benny", "02/13 Filberto", "05/08 Nonnah", "07/19 Jesse", "02/13 Tibold", "01/28 Archie", "09/17 Mohandas", "08/23 Jakie", "10/09 Rebecka", "10/19 Lorine", "11/11 Odille", "09/10 Englebert", "12/29 Noam", "05/06 Keri", "09/26 Brynne", "11/26 Belle", "08/28 Kippie", "02/04 Naoma", "06/17 Homerus", "01/18 Cly", "01/04 Ame"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "12/11";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string date = "02/10";
    vector<string> birthdays = {"02/13 klfdsdsa", "02/12 dsafdsafdsa"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "02/12";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string date = "01/02";
    vector<string> birthdays = {"01/02 Sree"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "01/02";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string date = "01/01";
    vector<string> birthdays = {"02/02 Bob"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "02/02";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string date = "01/30";
    vector<string> birthdays = {"01/05 Mike", "01/23 Kevin"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "01/05";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string date = "10/24";
    vector<string> birthdays = {"05/24 a", "01/24 b"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "01/24";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string date = "01/30";
    vector<string> birthdays = {"01/05 Brian", "01/23 Kevin"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "01/05";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string date = "01/02";
    vector<string> birthdays = {"02/17 wer", "10/12 ste", "02/17 mic", "10/12 luc", "05/18 wil"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "02/17";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string date = "06/01";
    vector<string> birthdays = {"07/15 John", "07/01 Justin"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "07/01";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string date = "12/24";
    vector<string> birthdays = {"02/15 h", "01/13 yo", "06/17 hey"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "01/13";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string date = "02/02";
    vector<string> birthdays = {"02/01 abc", "01/18 ace"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "01/18";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string date = "12/01";
    vector<string> birthdays = {"02/17 Z", "10/12 A", "02/18 Q", "10/12 P", "05/18 T"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "02/17";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string date = "07/15";
    vector<string> birthdays = {"07/31 A", "08/01 B"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "07/31";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string date = "01/01";
    vector<string> birthdays = {"03/03 Alex", "02/02 Bill"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "02/02";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string date = "12/24";
    vector<string> birthdays = {"10/12 James"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "10/12";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string date = "12/30";
    vector<string> birthdays = {"12/31 aa", "01/01 bb"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "12/31";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string date = "01/01";
    vector<string> birthdays = {"02/02 Foo"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "02/02";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string date = "05/02";
    vector<string> birthdays = {"05/03 Ashish"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "05/03";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string date = "02/02";
    vector<string> birthdays = {"05/15 hell", "05/14 ihope", "05/01 thisworks"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "05/01";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string date = "02/10";
    vector<string> birthdays = {"02/13 klfdsdsa", "02/12 dsafdsafdsa"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "02/12";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string date = "01/02";
    vector<string> birthdays = {"01/02 Sree"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "01/02";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string date = "01/01";
    vector<string> birthdays = {"02/02 Bob"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "02/02";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string date = "01/30";
    vector<string> birthdays = {"01/05 Mike", "01/23 Kevin"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "01/05";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string date = "10/24";
    vector<string> birthdays = {"05/24 a", "01/24 b"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "01/24";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string date = "01/30";
    vector<string> birthdays = {"01/05 Brian", "01/23 Kevin"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "01/05";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string date = "01/02";
    vector<string> birthdays = {"02/17 wer", "10/12 ste", "02/17 mic", "10/12 luc", "05/18 wil"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "02/17";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string date = "06/01";
    vector<string> birthdays = {"07/15 John", "07/01 Justin"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "07/01";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string date = "12/24";
    vector<string> birthdays = {"02/15 h", "01/13 yo", "06/17 hey"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "01/13";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string date = "02/02";
    vector<string> birthdays = {"02/01 abc", "01/18 ace"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "01/18";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string date = "12/01";
    vector<string> birthdays = {"02/17 Z", "10/12 A", "02/18 Q", "10/12 P", "05/18 T"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "02/17";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string date = "07/15";
    vector<string> birthdays = {"07/31 A", "08/01 B"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "07/31";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    string date = "01/01";
    vector<string> birthdays = {"03/03 Alex", "02/02 Bill"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "02/02";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    string date = "12/24";
    vector<string> birthdays = {"10/12 James"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "10/12";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    string date = "12/30";
    vector<string> birthdays = {"12/31 aa", "01/01 bb"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "12/31";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    string date = "01/01";
    vector<string> birthdays = {"02/02 Foo"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "02/02";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    string date = "05/02";
    vector<string> birthdays = {"05/03 Ashish"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "05/03";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    string date = "02/02";
    vector<string> birthdays = {"05/15 hell", "05/14 ihope", "05/01 thisworks"};
    Birthday* pObj = new Birthday();
    clock_t start = clock();
    string result = pObj->getNext(date, birthdays);
    clock_t end = clock();
    delete pObj;
    string expected = "05/01";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=292749&rd=4560&pm=1739
********************************************************************************
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
 
using namespace std;
 
string itos(int n)
{
std::stringstream ss;
std::string str;
ss << n;
ss >> str;
return str;
}
 
string str_rev( string str )
{
string str_r;
for( int i = str.length()-1; i >=0; i-- )
  str_r += str[i];
 
return str_r;
}
 
template <class T>
vector<T> vec_rev(vector<T> v)
{
vector<T> v_r;
for( int i = v.size()-1; i >=0; i-- )
  v_r.push_back(v[i]);
 
return v_r;
}
 
/*
template <class T>
void del_el( vector<T> &v, int el )
{
vector<T>::iterator i = v.begin();
 
if( el >= v.size() )
  {
  cerr<<"trying to del beyond array index, fool!"<<endl;
  return;
  }
 
for( int n = 0; n < el; n++ )
  ++i;
 
v.erase(i);
}
*/
 
// Sort vector #1
// sort(v1.begin(), v1.end());
// inline bool lt_nocase(char c1, char c2) { return tolower(c1) < tolower(c2); }
// char A[] = "fdBeACFDbEac";
// const int N = sizeof(A) - 1;
// stable_sort(A, A+N, lt_nocase);
 
 
 
class Birthday 
{
public:
    string getNext(string date, vector <string> birthdays) ;
};
 
 
string Birthday::getNext(string date, vector <string> birthdays)
{
sort(birthdays.begin(), birthdays.end());
 
for( int i = 0; i < birthdays.size(); i++ )
  {
  string bday = birthdays[i];
 
  if( bday >= date )
    {
    return bday.substr(0,5);
    }
  }
 
return birthdays[0].substr(0,5);
}
 
 
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/