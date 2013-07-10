/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4659
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

class SequenceOfNumbers {
public:
    vector<string> rearrange(vector<string> sequence);
};

vector<string> SequenceOfNumbers::rearrange(vector<string> sequence) {
    vector<string> ret;
    return ret;
}


int test0() {
    vector<string> sequence = {"1", "174", "23", "578", "71", "9"};
    SequenceOfNumbers* pObj = new SequenceOfNumbers();
    clock_t start = clock();
    vector<string> result = pObj->rearrange(sequence);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "9", "23", "71", "174", "578"};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> sequence = {"172", "172", "172", "23", "23"};
    SequenceOfNumbers* pObj = new SequenceOfNumbers();
    clock_t start = clock();
    vector<string> result = pObj->rearrange(sequence);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"23", "23", "172", "172", "172"};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> sequence = {"183", "2", "357", "38", "446", "46", "628", "734", "741", "838"};
    SequenceOfNumbers* pObj = new SequenceOfNumbers();
    clock_t start = clock();
    vector<string> result = pObj->rearrange(sequence);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"2", "38", "46", "183", "357", "446", "628", "734", "741", "838"};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> sequence = {"1", "2"};
    SequenceOfNumbers* pObj = new SequenceOfNumbers();
    clock_t start = clock();
    vector<string> result = pObj->rearrange(sequence);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "2"};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> sequence = {"199999999", "2"};
    SequenceOfNumbers* pObj = new SequenceOfNumbers();
    clock_t start = clock();
    vector<string> result = pObj->rearrange(sequence);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"2", "199999999"};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> sequence = {"111111111", "22222222", "3333333", "444444", "55555", "6666", "777", "88", "9"};
    SequenceOfNumbers* pObj = new SequenceOfNumbers();
    clock_t start = clock();
    vector<string> result = pObj->rearrange(sequence);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"9", "88", "777", "6666", "55555", "444444", "3333333", "22222222", "111111111"};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> sequence = {"100000000", "22222222", "3333333", "444444", "55555", "6666", "777", "88", "9"};
    SequenceOfNumbers* pObj = new SequenceOfNumbers();
    clock_t start = clock();
    vector<string> result = pObj->rearrange(sequence);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"9", "88", "777", "6666", "55555", "444444", "3333333", "22222222", "100000000"};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> sequence = {"999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999"};
    SequenceOfNumbers* pObj = new SequenceOfNumbers();
    clock_t start = clock();
    vector<string> result = pObj->rearrange(sequence);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999"};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> sequence = {"1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1"};
    SequenceOfNumbers* pObj = new SequenceOfNumbers();
    clock_t start = clock();
    vector<string> result = pObj->rearrange(sequence);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1"};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> sequence = {"214", "244", "469", "5", "55", "56", "64", "8152", "91", "9576"};
    SequenceOfNumbers* pObj = new SequenceOfNumbers();
    clock_t start = clock();
    vector<string> result = pObj->rearrange(sequence);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"5", "55", "56", "64", "91", "214", "244", "469", "8152", "9576"};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> sequence = {"1", "1270", "3576", "377", "6", "6", "613", "623", "8708", "874"};
    SequenceOfNumbers* pObj = new SequenceOfNumbers();
    clock_t start = clock();
    vector<string> result = pObj->rearrange(sequence);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "6", "6", "377", "613", "623", "874", "1270", "3576", "8708"};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> sequence = {"2", "22", "367", "3760", "4096", "46", "56", "6484", "7", "7395"};
    SequenceOfNumbers* pObj = new SequenceOfNumbers();
    clock_t start = clock();
    vector<string> result = pObj->rearrange(sequence);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"2", "7", "22", "46", "56", "367", "3760", "4096", "6484", "7395"};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> sequence = {"1", "121", "1223", "14", "2137", "262", "394", "4", "78", "9"};
    SequenceOfNumbers* pObj = new SequenceOfNumbers();
    clock_t start = clock();
    vector<string> result = pObj->rearrange(sequence);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "4", "9", "14", "78", "121", "262", "394", "1223", "2137"};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> sequence = {"103", "3", "48", "50", "586", "61", "688", "730", "88", "9"};
    SequenceOfNumbers* pObj = new SequenceOfNumbers();
    clock_t start = clock();
    vector<string> result = pObj->rearrange(sequence);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"3", "9", "48", "50", "61", "88", "103", "586", "688", "730"};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> sequence = {"1", "1281", "17", "25", "3743", "406", "416", "474", "5", "9260"};
    SequenceOfNumbers* pObj = new SequenceOfNumbers();
    clock_t start = clock();
    vector<string> result = pObj->rearrange(sequence);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "5", "17", "25", "406", "416", "474", "1281", "3743", "9260"};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> sequence = {"2", "2243", "244", "295", "513", "540", "694", "74", "84", "91"};
    SequenceOfNumbers* pObj = new SequenceOfNumbers();
    clock_t start = clock();
    vector<string> result = pObj->rearrange(sequence);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"2", "74", "84", "91", "244", "295", "513", "540", "694", "2243"};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> sequence = {"3", "3", "3400", "4", "6", "60", "6610", "74", "8701", "902"};
    SequenceOfNumbers* pObj = new SequenceOfNumbers();
    clock_t start = clock();
    vector<string> result = pObj->rearrange(sequence);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"3", "3", "4", "6", "60", "74", "902", "3400", "6610", "8701"};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> sequence = {"1", "1", "2109", "247", "4", "43", "5", "5544", "56", "69"};
    SequenceOfNumbers* pObj = new SequenceOfNumbers();
    clock_t start = clock();
    vector<string> result = pObj->rearrange(sequence);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "1", "4", "5", "43", "56", "69", "247", "2109", "5544"};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> sequence = {"1558288", "16370", "19077", "2", "2262941", "248", "2519755", "29011", "29592", "42910", "5", "5", "50", "5641", "568", "599", "6", "6349078", "715", "76", "77", "7835273", "838", "907051", "96"};
    SequenceOfNumbers* pObj = new SequenceOfNumbers();
    clock_t start = clock();
    vector<string> result = pObj->rearrange(sequence);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"2", "5", "5", "6", "50", "76", "77", "96", "248", "568", "599", "715", "838", "5641", "16370", "19077", "29011", "29592", "42910", "907051", "1558288", "2262941", "2519755", "6349078", "7835273"};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> sequence = {"1", "1", "13343", "136", "238238", "28456", "3017452", "32", "3295990", "353", "37", "4273093", "43", "4627", "49204", "541", "577", "61", "69417", "7129", "72965", "82", "8395255", "9027733", "9964"};
    SequenceOfNumbers* pObj = new SequenceOfNumbers();
    clock_t start = clock();
    vector<string> result = pObj->rearrange(sequence);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "1", "32", "37", "43", "61", "82", "136", "353", "541", "577", "4627", "7129", "9964", "13343", "28456", "49204", "69417", "72965", "238238", "3017452", "3295990", "4273093", "8395255", "9027733"};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> sequence = {"1", "1", "1", "10109", "26398", "28723", "3", "3621508", "4", "40109", "4074184", "4496", "48876", "538", "601965", "6834", "684703", "7417", "78370", "8344", "848071", "864", "882259", "949", "994513"};
    SequenceOfNumbers* pObj = new SequenceOfNumbers();
    clock_t start = clock();
    vector<string> result = pObj->rearrange(sequence);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "1", "1", "3", "4", "538", "864", "949", "4496", "6834", "7417", "8344", "10109", "26398", "28723", "40109", "48876", "78370", "601965", "684703", "848071", "882259", "994513", "3621508", "4074184"};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> sequence = {"1", "1", "1", "10109", "26398", "28723", "3", "3621508", "4", "40109", "4074184", "4496", "48876", "538", "601965", "6834", "684703", "7417", "78370", "8344", "848071", "864", "882259", "949", "994513"};
    SequenceOfNumbers* pObj = new SequenceOfNumbers();
    clock_t start = clock();
    vector<string> result = pObj->rearrange(sequence);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "1", "1", "3", "4", "538", "864", "949", "4496", "6834", "7417", "8344", "10109", "26398", "28723", "40109", "48876", "78370", "601965", "684703", "848071", "882259", "994513", "3621508", "4074184"};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> sequence = {"11651", "179439", "190", "238", "239863", "2449", "2887", "2914", "3134723", "37", "4", "40954", "45", "456735", "4805", "5", "5041", "53839", "58494", "64", "7", "7162", "8172822", "856", "92878"};
    SequenceOfNumbers* pObj = new SequenceOfNumbers();
    clock_t start = clock();
    vector<string> result = pObj->rearrange(sequence);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"4", "5", "7", "37", "45", "64", "190", "238", "856", "2449", "2887", "2914", "4805", "5041", "7162", "11651", "40954", "53839", "58494", "92878", "179439", "239863", "456735", "3134723", "8172822"};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> sequence = {"1", "12058", "12814285", "15", "154745941", "227317961", "228150433", "22887303", "22978", "26586901", "283", "2976938", "3", "3032336", "35686432", "36830", "37", "3731179", "393979521", "39717", "4", "433270", "466590601", "4995883", "5", "5", "5", "54748", "58", "580518", "58890459", "605125", "671", "681", "68341505", "698630", "6999", "7", "7", "7", "7062", "7475", "798223", "8380", "865", "9", "908131", "925408", "948898", "9853831"};
    SequenceOfNumbers* pObj = new SequenceOfNumbers();
    clock_t start = clock();
    vector<string> result = pObj->rearrange(sequence);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "3", "4", "5", "5", "5", "7", "7", "7", "9", "15", "37", "58", "283", "671", "681", "865", "6999", "7062", "7475", "8380", "12058", "22978", "36830", "39717", "54748", "433270", "580518", "605125", "698630", "798223", "908131", "925408", "948898", "2976938", "3032336", "3731179", "4995883", "9853831", "12814285", "22887303", "26586901", "35686432", "58890459", "68341505", "154745941", "227317961", "228150433", "393979521", "466590601"};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> sequence = {"1", "1", "106", "109", "12", "132", "14288376", "145369873", "15", "1558", "1678312", "172", "184276732", "2082169", "213112945", "226", "26233", "2719945", "2799360", "2986854", "31", "31423", "359", "3919495", "436", "44212393", "50537882", "50698", "5099", "5620575", "5930", "7222", "73064551", "746659", "773", "7808952", "791374", "79856437", "8", "80326577", "839866", "845", "847", "8789149", "89", "910", "9169", "93628", "955", "955045"};
    SequenceOfNumbers* pObj = new SequenceOfNumbers();
    clock_t start = clock();
    vector<string> result = pObj->rearrange(sequence);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "1", "8", "12", "15", "31", "89", "106", "109", "132", "172", "226", "359", "436", "773", "845", "847", "910", "955", "1558", "5099", "5930", "7222", "9169", "26233", "31423", "50698", "93628", "746659", "791374", "839866", "955045", "1678312", "2082169", "2719945", "2799360", "2986854", "3919495", "5620575", "7808952", "8789149", "14288376", "44212393", "50537882", "73064551", "79856437", "80326577", "145369873", "184276732", "213112945"};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> sequence = {"1", "1", "106", "109", "12", "132", "14288376", "145369873", "15", "1558", "1678312", "172", "184276732", "2082169", "213112945", "226", "26233", "2719945", "2799360", "2986854", "31", "31423", "359", "3919495", "436", "44212393", "50537882", "50698", "5099", "5620575", "5930", "7222", "73064551", "746659", "773", "7808952", "791374", "79856437", "8", "80326577", "839866", "845", "847", "8789149", "89", "910", "9169", "93628", "955", "955045"};
    SequenceOfNumbers* pObj = new SequenceOfNumbers();
    clock_t start = clock();
    vector<string> result = pObj->rearrange(sequence);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "1", "8", "12", "15", "31", "89", "106", "109", "132", "172", "226", "359", "436", "773", "845", "847", "910", "955", "1558", "5099", "5930", "7222", "9169", "26233", "31423", "50698", "93628", "746659", "791374", "839866", "955045", "1678312", "2082169", "2719945", "2799360", "2986854", "3919495", "5620575", "7808952", "8789149", "14288376", "44212393", "50537882", "73064551", "79856437", "80326577", "145369873", "184276732", "213112945"};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> sequence = {"1", "1054", "11539", "133933", "15118", "172", "1846", "1935840", "20", "2094", "21469812", "221131", "243225", "247896433", "27212", "295261", "304", "309412", "3121753", "3210", "3345766", "34", "353", "3650539", "38326", "408838", "442475335", "4452604", "460588", "49238121", "5", "5212444", "54848", "56", "574", "61350", "642419845", "6614425", "66410437", "721", "8452", "86720", "87497509", "88236705", "91519561", "9348832", "93803", "94222", "96403348", "9713"};
    SequenceOfNumbers* pObj = new SequenceOfNumbers();
    clock_t start = clock();
    vector<string> result = pObj->rearrange(sequence);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "5", "20", "34", "56", "172", "304", "353", "574", "721", "1054", "1846", "2094", "3210", "8452", "9713", "11539", "15118", "27212", "38326", "54848", "61350", "86720", "93803", "94222", "133933", "221131", "243225", "295261", "309412", "408838", "460588", "1935840", "3121753", "3345766", "3650539", "4452604", "5212444", "6614425", "9348832", "21469812", "49238121", "66410437", "87497509", "88236705", "91519561", "96403348", "247896433", "442475335", "642419845"};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> sequence = {"1", "106823593", "110554113", "122180493", "15588", "15935425", "2", "264870369", "28", "28387", "287992", "294959", "31572", "35", "35652", "3641995", "37", "37283016", "39497240", "4", "405605285", "40881906", "409", "4222", "42473593", "4852373", "51", "5230", "52666489", "5363589", "586594", "617120775", "66", "6645850", "669074311", "6877957", "699", "7", "71464681", "72630993", "730", "7540", "77367", "7874992", "805382689", "87", "901", "92899", "9377965", "976720"};
    SequenceOfNumbers* pObj = new SequenceOfNumbers();
    clock_t start = clock();
    vector<string> result = pObj->rearrange(sequence);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "2", "4", "7", "28", "35", "37", "51", "66", "87", "409", "699", "730", "901", "4222", "5230", "7540", "15588", "28387", "31572", "35652", "77367", "92899", "287992", "294959", "586594", "976720", "3641995", "4852373", "5363589", "6645850", "6877957", "7874992", "9377965", "15935425", "37283016", "39497240", "40881906", "42473593", "52666489", "71464681", "72630993", "106823593", "110554113", "122180493", "264870369", "405605285", "617120775", "669074311", "805382689"};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> sequence = {"1", "1416890", "21813364", "283", "46743379", "53122", "5835203", "925101649", "95683141", "9712"};
    SequenceOfNumbers* pObj = new SequenceOfNumbers();
    clock_t start = clock();
    vector<string> result = pObj->rearrange(sequence);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "283", "9712", "53122", "1416890", "5835203", "21813364", "46743379", "95683141", "925101649"};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> sequence = {"146", "186", "2206133", "2231014", "252053582", "2785", "29619022", "297298", "3", "36184", "3644", "3860090", "421288551", "43599882", "534318", "54960173", "557030", "56078899", "5837092", "58602107", "59", "6", "6", "6050747", "63782098", "639", "668529505", "673865941", "70828", "73", "7470", "764", "792551", "80083738", "8097", "8269177", "83187028", "85207", "921", "9787915"};
    SequenceOfNumbers* pObj = new SequenceOfNumbers();
    clock_t start = clock();
    vector<string> result = pObj->rearrange(sequence);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"3", "6", "6", "59", "73", "146", "186", "639", "764", "921", "2785", "3644", "7470", "8097", "36184", "70828", "85207", "297298", "534318", "557030", "792551", "2206133", "2231014", "3860090", "5837092", "6050747", "8269177", "9787915", "29619022", "43599882", "54960173", "56078899", "58602107", "63782098", "80083738", "83187028", "252053582", "421288551", "668529505", "673865941"};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> sequence = {"1", "1", "1", "11926657", "1241637", "15165786", "17268293", "17504110", "183268033", "292", "33838793", "342535", "344315137", "355947", "362493", "38", "38740417", "4", "400", "41975", "460498", "493910740", "5", "52093", "54", "588", "603199", "63217351", "64", "68", "79", "79639", "82", "88", "887994", "917", "9541", "955790", "97"};
    SequenceOfNumbers* pObj = new SequenceOfNumbers();
    clock_t start = clock();
    vector<string> result = pObj->rearrange(sequence);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "1", "1", "4", "5", "38", "54", "64", "68", "79", "82", "88", "97", "292", "400", "588", "917", "9541", "41975", "52093", "79639", "342535", "355947", "362493", "460498", "603199", "887994", "955790", "1241637", "11926657", "15165786", "17268293", "17504110", "33838793", "38740417", "63217351", "183268033", "344315137", "493910740"};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> sequence = {"1", "1", "12676301", "20", "210919861", "226044809", "23040499", "2575618", "335971", "33839", "33994335", "370048672", "37834548", "38950", "4", "4", "4", "4", "460385", "47727401", "55468", "5698780", "6", "606959184", "6220", "666085", "6994642", "7", "7", "7", "7818247", "80368", "8240", "829", "8453", "86587183", "8729801"};
    SequenceOfNumbers* pObj = new SequenceOfNumbers();
    clock_t start = clock();
    vector<string> result = pObj->rearrange(sequence);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "1", "4", "4", "4", "4", "6", "7", "7", "7", "20", "829", "6220", "8240", "8453", "33839", "38950", "55468", "80368", "335971", "460385", "666085", "2575618", "5698780", "6994642", "7818247", "8729801", "12676301", "23040499", "33994335", "37834548", "47727401", "86587183", "210919861", "226044809", "370048672", "606959184"};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> sequence = {"1364674", "27652500", "31875844", "3390340", "344", "4", "407749", "4976534", "53348", "64050652", "702146", "73", "769", "82", "9016050", "962", "9971"};
    SequenceOfNumbers* pObj = new SequenceOfNumbers();
    clock_t start = clock();
    vector<string> result = pObj->rearrange(sequence);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"4", "73", "82", "344", "769", "962", "9971", "53348", "407749", "702146", "1364674", "3390340", "4976534", "9016050", "27652500", "31875844", "64050652"};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> sequence = {"11840", "163", "17822", "1850098", "2374134", "4", "40202989", "4049706", "449608", "495", "56", "620", "64296", "7031283", "936", "974"};
    SequenceOfNumbers* pObj = new SequenceOfNumbers();
    clock_t start = clock();
    vector<string> result = pObj->rearrange(sequence);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"4", "56", "163", "495", "620", "936", "974", "11840", "17822", "64296", "449608", "1850098", "2374134", "4049706", "7031283", "40202989"};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> sequence = {"1", "148168765", "154", "2", "31961476", "3217438", "476", "48427", "5", "50868649", "59573923", "712", "848", "904"};
    SequenceOfNumbers* pObj = new SequenceOfNumbers();
    clock_t start = clock();
    vector<string> result = pObj->rearrange(sequence);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "2", "5", "154", "476", "712", "848", "904", "48427", "3217438", "31961476", "50868649", "59573923", "148168765"};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> sequence = {"1", "1", "103943937", "120746", "135940", "145919", "14956", "16", "171015", "1783735", "18041", "2258764", "24192", "242", "2428", "26317627", "311037349", "3229", "3637", "412", "45853", "50739107", "55", "59", "6", "6", "607565", "64", "645097", "65737", "6769", "691", "69949825", "7069", "719144", "7502230", "763", "782257", "7910", "7957", "8", "84167607", "8890", "89", "9"};
    SequenceOfNumbers* pObj = new SequenceOfNumbers();
    clock_t start = clock();
    vector<string> result = pObj->rearrange(sequence);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "1", "6", "6", "8", "9", "16", "55", "59", "64", "89", "242", "412", "691", "763", "2428", "3229", "3637", "6769", "7069", "7910", "7957", "8890", "14956", "18041", "24192", "45853", "65737", "120746", "135940", "145919", "171015", "607565", "645097", "719144", "782257", "1783735", "2258764", "7502230", "26317627", "50739107", "69949825", "84167607", "103943937", "311037349"};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> sequence = {"1", "1", "123", "13606", "16610333", "17134", "280641726", "29742", "3774221", "3798274", "389", "41957468", "4335", "4578", "4712604", "473", "49908", "500020", "50664538", "559863681", "56786212", "569960", "5897", "6", "608", "66755611", "675", "7", "7", "729007", "756946", "76615", "78800", "7993", "8", "8401672", "856", "865792337", "8689", "8757119", "893", "95079326", "991"};
    SequenceOfNumbers* pObj = new SequenceOfNumbers();
    clock_t start = clock();
    vector<string> result = pObj->rearrange(sequence);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "1", "6", "7", "7", "8", "123", "389", "473", "608", "675", "856", "893", "991", "4335", "4578", "5897", "7993", "8689", "13606", "17134", "29742", "49908", "76615", "78800", "500020", "569960", "729007", "756946", "3774221", "3798274", "4712604", "8401672", "8757119", "16610333", "41957468", "50664538", "56786212", "66755611", "95079326", "280641726", "559863681", "865792337"};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> sequence = {"13", "158", "16", "167", "172716800", "18", "1856", "226056700", "2264821", "245934", "249619501", "274466", "28045", "3169975", "327259801", "33916", "350", "365947", "4", "41", "4396081", "49331", "5", "504703", "52", "544221", "5604", "59664738", "5983", "622", "64", "697390", "700", "7231768", "73538125", "748", "7630895", "796508", "8", "82", "9"};
    SequenceOfNumbers* pObj = new SequenceOfNumbers();
    clock_t start = clock();
    vector<string> result = pObj->rearrange(sequence);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"4", "5", "8", "9", "13", "16", "18", "41", "52", "64", "82", "158", "167", "350", "622", "700", "748", "1856", "5604", "5983", "28045", "33916", "49331", "245934", "274466", "365947", "504703", "544221", "697390", "796508", "2264821", "3169975", "4396081", "7231768", "7630895", "59664738", "73538125", "172716800", "226056700", "249619501", "327259801"};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> sequence = {"214", "230796633", "2550663", "310872", "33490", "33713221", "448996", "46", "480148", "57878713", "610", "668163", "7", "72", "731770", "78681996", "793", "798463", "912841", "92512", "925495", "997021"};
    SequenceOfNumbers* pObj = new SequenceOfNumbers();
    clock_t start = clock();
    vector<string> result = pObj->rearrange(sequence);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"7", "46", "72", "214", "610", "793", "33490", "92512", "310872", "448996", "480148", "668163", "731770", "798463", "912841", "925495", "997021", "2550663", "33713221", "57878713", "78681996", "230796633"};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> sequence = {"1", "1045", "1192", "12835525", "19", "1943581", "265847375", "28", "30500", "3673", "47719", "655975", "79741", "83436", "880024", "888514", "919183", "920281", "9455656", "9599"};
    SequenceOfNumbers* pObj = new SequenceOfNumbers();
    clock_t start = clock();
    vector<string> result = pObj->rearrange(sequence);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "19", "28", "1045", "1192", "3673", "9599", "30500", "47719", "79741", "83436", "655975", "880024", "888514", "919183", "920281", "1943581", "9455656", "12835525", "265847375"};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> sequence = {"1", "102224317", "119164", "247154301", "256516166", "27", "2802141", "38043", "415", "416312", "52", "52", "61028", "7", "7416820", "7924880", "82774", "9166", "97510"};
    SequenceOfNumbers* pObj = new SequenceOfNumbers();
    clock_t start = clock();
    vector<string> result = pObj->rearrange(sequence);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "7", "27", "52", "52", "415", "9166", "38043", "61028", "82774", "97510", "119164", "416312", "2802141", "7416820", "7924880", "102224317", "247154301", "256516166"};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> sequence = {"1", "174", "23", "578", "71", "9"};
    SequenceOfNumbers* pObj = new SequenceOfNumbers();
    clock_t start = clock();
    vector<string> result = pObj->rearrange(sequence);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "9", "23", "71", "174", "578"};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=10190099&rd=7228&pm=4659
********************************************************************************
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h> 
#include <algorithm> 
#include <vector> 
#include <string> 
#include <stack> 
#include <queue> 
#include <map> 
#include <set> 
#include <iterator> 
#include <iostream> 
#include <functional> 
#include <sstream> 
 
using namespace std; 
 
bool cmp ( string x , string y) 
{ 
  if( x.size() == y.size() ) 
    return x < y; 
  return x.size() < y.size() ; 
} 
class SequenceOfNumbers  
{ 
  public: 
  vector <string> rearrange(vector <string> seq) 
  { 
    int i; 
    vector <string> ret; 
 
    sort( seq.begin() , seq.end() ,cmp ); 
 
    ret = seq; 
 
 
    return ret; 
  } 
     
 
   
 
}; 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/