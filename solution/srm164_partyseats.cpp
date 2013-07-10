/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1854
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

class PartySeats {
public:
    vector<string> seating(vector<string> attendees);
};

vector<string> PartySeats::seating(vector<string> attendees) {
    vector<string> ret;
    return ret;
}


int test0() {
    vector<string> attendees = {"BOB boy", "SAM girl", "DAVE boy", "JO girl"};
    PartySeats* pObj = new PartySeats();
    clock_t start = clock();
    vector<string> result = pObj->seating(attendees);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"HOST", "JO", "BOB", "HOSTESS", "DAVE", "SAM"};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> attendees = {"JOHN boy"};
    PartySeats* pObj = new PartySeats();
    clock_t start = clock();
    vector<string> result = pObj->seating(attendees);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> attendees = {"JOHN boy", "CARLA girl"};
    PartySeats* pObj = new PartySeats();
    clock_t start = clock();
    vector<string> result = pObj->seating(attendees);
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
    vector<string> attendees = {"BOB boy", "SUZIE girl", "DAVE boy", "JO girl", "AL boy", "BOB boy", "CARLA girl", "DEBBIE girl"};
    PartySeats* pObj = new PartySeats();
    clock_t start = clock();
    vector<string> result = pObj->seating(attendees);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"HOST", "CARLA", "AL", "DEBBIE", "BOB", "HOSTESS", "BOB", "JO", "DAVE", "SUZIE"};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> attendees = {"X girl", "T boy", "J girl", "G boy", "J girl", "G boy", "J girl", "G boy", "J girl", "G boy", "J girl", "G boy", "J girl", "G boy", "J girl", "G boy", "J girl", "G boy", "J girl", "G boy", "J girl", "G boy", "J girl", "G boy", "J girl", "G boy", "J girl", "G boy", "J girl", "G boy", "J girl", "G boy", "J girl", "G boy", "J girl", "G boy", "J girl", "G boy", "J girl", "G boy", "J girl", "G boy", "J girl", "G boy", "J girl", "G boy", "J girl", "G boy"};
    PartySeats* pObj = new PartySeats();
    clock_t start = clock();
    vector<string> result = pObj->seating(attendees);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"HOST", "J", "G", "J", "G", "J", "G", "J", "G", "J", "G", "J", "G", "J", "G", "J", "G", "J", "G", "J", "G", "J", "G", "J", "G", "HOSTESS", "G", "J", "G", "J", "G", "J", "G", "J", "G", "J", "G", "J", "G", "J", "G", "J", "G", "J", "G", "J", "G", "J", "T", "X"};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> attendees = {"A boy", "S boy", "AA boy", "K boy", "ZZ girl", "YY girl", "XX girl", "VV girl"};
    PartySeats* pObj = new PartySeats();
    clock_t start = clock();
    vector<string> result = pObj->seating(attendees);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"HOST", "VV", "A", "XX", "AA", "HOSTESS", "K", "YY", "S", "ZZ"};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> attendees = {"BOB boy", "AM girl", "DAVE boy", "JO girl"};
    PartySeats* pObj = new PartySeats();
    clock_t start = clock();
    vector<string> result = pObj->seating(attendees);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"HOST", "AM", "BOB", "HOSTESS", "DAVE", "JO"};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> attendees = {"ROB boy", "AM girl", "DAVE boy", "JO girl"};
    PartySeats* pObj = new PartySeats();
    clock_t start = clock();
    vector<string> result = pObj->seating(attendees);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"HOST", "AM", "DAVE", "HOSTESS", "ROB", "JO"};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> attendees = {"AM girl", "ROB boy", "AM girl", "DAVE boy", "JO girl"};
    PartySeats* pObj = new PartySeats();
    clock_t start = clock();
    vector<string> result = pObj->seating(attendees);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> attendees = {"AM girl", "ROB boy", "JIM boy", "AM girl", "DAVE boy", "JO girl"};
    PartySeats* pObj = new PartySeats();
    clock_t start = clock();
    vector<string> result = pObj->seating(attendees);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> attendees = {"ROB boy", "AM girl", "JO girl", "DAVE boy"};
    PartySeats* pObj = new PartySeats();
    clock_t start = clock();
    vector<string> result = pObj->seating(attendees);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"HOST", "AM", "DAVE", "HOSTESS", "ROB", "JO"};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> attendees = {"BOB boy", "SAM girl", "DAVE boy", "JOHN boy", "BILL boy", "DEE girl", "JUNE girl", "JO girl", "A boy", "B boy", "C girl", "D girl"};
    PartySeats* pObj = new PartySeats();
    clock_t start = clock();
    vector<string> result = pObj->seating(attendees);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"HOST", "C", "A", "D", "B", "DEE", "BILL", "HOSTESS", "BOB", "JO", "DAVE", "JUNE", "JOHN", "SAM"};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> attendees = {"BOB boy", "SAM girl", "DAVE boy", "JOHN boy", "BILL boy", "DEE girl", "JUNE girl", "JO girl", "A boy", "B boy", "C boy", "D girl"};
    PartySeats* pObj = new PartySeats();
    clock_t start = clock();
    vector<string> result = pObj->seating(attendees);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> attendees = {"BOB boy", "SAM boy", "DAVE boy", "JOHN boy", "BILL boy", "DEE boy", "JUNE girl", "JO girl", "A girl", "B girl", "C girl", "D girl"};
    PartySeats* pObj = new PartySeats();
    clock_t start = clock();
    vector<string> result = pObj->seating(attendees);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"HOST", "A", "BILL", "B", "BOB", "C", "DAVE", "HOSTESS", "DEE", "D", "JOHN", "JO", "SAM", "JUNE"};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> attendees = {"BOB girl", "SAM girl", "DAVE boy", "JOHN boy", "BILL boy", "DEE girl", "JUNE girl", "JO girl", "A boy", "B boy", "C girl", "D boy"};
    PartySeats* pObj = new PartySeats();
    clock_t start = clock();
    vector<string> result = pObj->seating(attendees);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"HOST", "BOB", "A", "C", "B", "DEE", "BILL", "HOSTESS", "D", "JO", "DAVE", "JUNE", "JOHN", "SAM"};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> attendees = {"BOB boy", "SAM girl", "DAVE boy", "JOHN boy", "BILL boy", "DEE girl", "JUNE girl", "JO girl", "A boy", "B boy", "C girl", "D girl", "D boy", "D boy", "D girl", "D girl"};
    PartySeats* pObj = new PartySeats();
    clock_t start = clock();
    vector<string> result = pObj->seating(attendees);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"HOST", "C", "A", "D", "B", "D", "BILL", "D", "BOB", "HOSTESS", "D", "DEE", "D", "JO", "DAVE", "JUNE", "JOHN", "SAM"};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> attendees = {"BOB boy", "DEE girl", "JUNE girl", "JO girl", "A boy", "B boy", "C girl", "D girl"};
    PartySeats* pObj = new PartySeats();
    clock_t start = clock();
    vector<string> result = pObj->seating(attendees);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> attendees = {"BOB boy", "SAM girl", "DAVE boy", "JOHN girl", "BILL boy", "DEE girl", "JUNE boy", "JO girl", "A boy", "B girl", "C boy", "D girl"};
    PartySeats* pObj = new PartySeats();
    clock_t start = clock();
    vector<string> result = pObj->seating(attendees);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"HOST", "B", "A", "D", "BILL", "DEE", "BOB", "HOSTESS", "C", "JO", "DAVE", "JOHN", "JUNE", "SAM"};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> attendees = {"BOB boy", "SAM girl", "DAVEDAVEDAVEDAVEDAVE boy", "JOHN boy", "BILL boy", "DEE boy", "JUNE girl", "JO girl", "A boy", "B girl", "C girl", "D girl"};
    PartySeats* pObj = new PartySeats();
    clock_t start = clock();
    vector<string> result = pObj->seating(attendees);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"HOST", "B", "A", "C", "BILL", "D", "BOB", "HOSTESS", "DAVEDAVEDAVEDAVEDAVE", "JO", "DEE", "JUNE", "JOHN", "SAM"};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> attendees = {"BOB boy", "SAM girl", "DAVE boy", "C girl", "D girl"};
    PartySeats* pObj = new PartySeats();
    clock_t start = clock();
    vector<string> result = pObj->seating(attendees);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> attendees = {"JOHN boy", "CARLA girl"};
    PartySeats* pObj = new PartySeats();
    clock_t start = clock();
    vector<string> result = pObj->seating(attendees);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> attendees = {"A boy", "B girl", "C boy", "D girl", "E boy", "F girl"};
    PartySeats* pObj = new PartySeats();
    clock_t start = clock();
    vector<string> result = pObj->seating(attendees);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> attendees = {"BOB boy", "SAM girl", "DAVE boy", "JO girl"};
    PartySeats* pObj = new PartySeats();
    clock_t start = clock();
    vector<string> result = pObj->seating(attendees);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"HOST", "JO", "BOB", "HOSTESS", "DAVE", "SAM"};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> attendees = {"ALOK girl", "AMIT girl", "SURESH girl"};
    PartySeats* pObj = new PartySeats();
    clock_t start = clock();
    vector<string> result = pObj->seating(attendees);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> attendees = {"BOB boy", "BOB boy", "JILL boy", "JILL boy"};
    PartySeats* pObj = new PartySeats();
    clock_t start = clock();
    vector<string> result = pObj->seating(attendees);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> attendees = {"A boy", "G boy", "E boy", "Y girl", "U girl", "R girl"};
    PartySeats* pObj = new PartySeats();
    clock_t start = clock();
    vector<string> result = pObj->seating(attendees);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> attendees = {"A boy", "B boy", "C boy", "D girl", "E girl", "F girl"};
    PartySeats* pObj = new PartySeats();
    clock_t start = clock();
    vector<string> result = pObj->seating(attendees);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> attendees = {"ABC girl", "BXC boy", "ALJS girl", "SDF boy", "AEEEE boy", "ABEEE boy"};
    PartySeats* pObj = new PartySeats();
    clock_t start = clock();
    vector<string> result = pObj->seating(attendees);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> attendees = {"BOB boy", "ACE boy", "TOM boy", "GILL girl", "ANA girl", "JANNY girl"};
    PartySeats* pObj = new PartySeats();
    clock_t start = clock();
    vector<string> result = pObj->seating(attendees);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> attendees = {"ALICE boy", "BOB girl"};
    PartySeats* pObj = new PartySeats();
    clock_t start = clock();
    vector<string> result = pObj->seating(attendees);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> attendees = {"JANE girl", "MIKE boy", "BOYD boy", "SEAGIRL girl"};
    PartySeats* pObj = new PartySeats();
    clock_t start = clock();
    vector<string> result = pObj->seating(attendees);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"HOST", "JANE", "BOYD", "HOSTESS", "MIKE", "SEAGIRL"};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> attendees = {"A boy", "B boy", "C boy", "W girl", "R girl", "T girl"};
    PartySeats* pObj = new PartySeats();
    clock_t start = clock();
    vector<string> result = pObj->seating(attendees);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> attendees = {"BOB boy", "SUZIE girl", "DAVE boy", "JO girl", "AL boy", "BOB boy", "CARLA girl", "DEBBIE girl"};
    PartySeats* pObj = new PartySeats();
    clock_t start = clock();
    vector<string> result = pObj->seating(attendees);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"HOST", "CARLA", "AL", "DEBBIE", "BOB", "HOSTESS", "BOB", "JO", "DAVE", "SUZIE"};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> attendees = {"A boy", "B boy", "C boy", "E girl", "F girl", "T girl"};
    PartySeats* pObj = new PartySeats();
    clock_t start = clock();
    vector<string> result = pObj->seating(attendees);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> attendees = {"BOB boy", "SAM girl", "DAVE boy", "JO girl", "HOWARD boy", "JANE girl"};
    PartySeats* pObj = new PartySeats();
    clock_t start = clock();
    vector<string> result = pObj->seating(attendees);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> attendees = {"TEST girl", "TEST girl", "TEST girl", "TEST boy", "TEST boy", "TEST boy"};
    PartySeats* pObj = new PartySeats();
    clock_t start = clock();
    vector<string> result = pObj->seating(attendees);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=287130&rd=4625&pm=1854
********************************************************************************
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <sstream>
#include <queue>
#include <climits>
using namespace std;
 
typedef vector<int> VI;
typedef vector<string> VS;
typedef long long ll;
 
char buffer[500];
string sval(int num)    { sprintf(buffer, "%d", num); return buffer; }
int    ival(string inp) { return atoi(inp.c_str()); }
float  fval(string inp) { return (float)atof(inp.c_str()); }
double dval(string inp) { return (double)atof(inp.c_str()); }
 
VS split(string inp, string sep) {
   VS ans;
   inp += sep;      // this is SO ugly...
   for (int i = 0, j = 0; i < inp.length(); i++)
      if (inp[i] == sep[0]) {
         ans.push_back(inp.substr(j, i - j));
         j = i + 1;
      }
   return ans;
}
 
// ****************************************** //
 
class PartySeats {
   public:
 
vector <string> seating(vector <string> attendees) {
  VS boyz, girlz;
  VS ret;
    for (int i = 0; i < attendees.size(); i++) {
      VS temp = split(attendees[i], " ");
      if (temp[1] == "boy") { boyz.push_back(temp[0]); }
      if (temp[1] == "girl") { girlz.push_back(temp[0]); }
    }
    sort(boyz.begin(), boyz.end());
    sort(girlz.begin(), girlz.end());
    bool good = true;
    ret.push_back("HOST");
    int nb = 0;
    int ng = 0;
    for (int nums = 1; nums < attendees.size() + 2; nums++) {
      if (nums == (attendees.size() / 2) + 1) 
      {
        ret.push_back("HOSTESS");
      }
      else
      if (nums % 2 == 0) {
        if (nb < boyz.size()) {
          ret.push_back(boyz[nb]);
          nb++;
        }
        else good = false;
      }
      else {
      if (ng < girlz.size()) {
        ret.push_back(girlz[ng]);
        ng++;
      }
      else good = false;
    }
    }
    VS ret2;
    if (attendees.size() % 2 == 1) good = false;
    if (good) return ret;
    else return ret2;
   }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/