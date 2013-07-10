/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11704
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

class TurtleSpy {
public:
    double maxDistance(vector<string> commands);
};

double TurtleSpy::maxDistance(vector<string> commands) {
    double ret;
    return ret;
}


int test0() {
    vector<string> commands = {"forward 100", "backward 100", "left 90"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 141.4213562373095;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> commands = {"forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> commands = {"left 45", "forward 100", "right 45", "forward 100"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 200.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> commands = {"left 10", "forward 40", "right 30", "left 10", "backward 4", "forward 4"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 40.58520737741619;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> commands = {"left 1", "right 2", "left 3", "right 4", "left 5", "right 6", "left 7", "left 8", "right 9", "right 10", "left 11", "right 12", "left 13", "right 14", "left 15", "right 16", "left 17", "right 18", "left 19", "right 20", "left 21", "right 22", "left 23", "right 24", "left 25", "right 26", "left 27", "right 28", "left 29", "right 30", "left 31", "right 32", "left 33", "right 34", "left 35", "right 36", "left 37", "right 38", "left 39", "right 40", "left 41", "right 42", "left 43", "right 44", "left 45", "right 46", "left 47", "forward 1000", "backward 500"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 1500.0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> commands = {"forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "right 180"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 49000.0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> commands = {"forward 1", "backward 1", "left 2", "left 3", "left 5", "left 7"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 0.29561882225922065;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> commands = {"backward 933", "left 28"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 933.0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> commands = {"backward 167", "backward 556", "backward 378", "right 212", "backward 83", "backward 313", "backward 967", "forward 103", "right 87", "backward 576", "backward 43", "forward 899", "right 141", "left 156", "right 320", "left 30", "right 253", "backward 514", "right 203", "forward 244", "backward 519", "backward 207", "forward 771", "left 44", "backward 214", "forward 830", "right 16", "left 126", "right 166", "right 94", "forward 244", "left 333", "left 249", "backward 75", "left 189", "backward 692", "backward 730", "forward 252", "right 295", "backward 729", "left 298", "left 70"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 10106.0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> commands = {"left 266", "forward 173", "right 220", "right 306", "forward 350", "forward 765", "forward 407", "left 224", "left 309", "left 316", "left 322", "right 16", "left 146", "left 96", "right 186", "backward 460", "left 49", "backward 820", "backward 890", "forward 139", "backward 66", "forward 73", "left 10", "forward 683", "backward 246", "left 155", "backward 555", "right 136", "backward 120", "left 42", "left 84", "left 125", "forward 344", "backward 89", "forward 993", "right 210", "left 204", "backward 551", "left 300", "left 198", "right 302", "forward 364", "backward 198", "backward 321", "forward 470", "left 55", "right 26", "forward 29"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 9106.0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> commands = {"forward 793", "forward 204", "left 321", "left 100", "backward 30", "forward 732", "right 46", "left 42", "right 254", "backward 317", "left 271"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 2074.4162262722666;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> commands = {"backward 35", "right 113", "right 239", "backward 441", "right 157", "backward 143", "right 315", "left 119", "backward 613", "forward 915", "backward 6", "right 57", "backward 977", "backward 668", "forward 852", "right 31", "left 14", "backward 411", "backward 289", "right 180", "right 352", "forward 744", "right 179", "backward 855", "backward 300", "right 293", "left 304", "forward 711", "backward 829", "right 67", "backward 495", "forward 519", "right 122", "forward 146", "right 358", "forward 887", "backward 748", "right 294", "forward 738", "right 112", "right 115", "right 138", "left 338"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 12322.0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> commands = {"right 16", "right 145", "left 204", "left 125", "left 146", "forward 674", "forward 363", "right 127", "backward 924", "backward 705", "backward 701", "right 8", "backward 630", "left 98", "right 101", "left 152", "right 75", "left 193", "right 215", "right 66", "left 111", "left 341", "forward 309", "right 30", "forward 97", "forward 748", "forward 475", "backward 443", "left 291", "right 331", "backward 961", "left 270", "forward 167", "right 165", "backward 59", "backward 186", "left 322", "right 171", "forward 338", "left 243", "right 318", "backward 800", "backward 14", "forward 923", "backward 716", "forward 514", "backward 977", "left 50", "right 182", "right 327"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 11724.0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> commands = {"left 149", "backward 901", "backward 736", "backward 942", "left 321", "left 284", "forward 745", "left 200", "backward 115", "left 163", "forward 817", "forward 313", "right 216", "backward 87", "forward 126", "forward 194", "left 326"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 4975.813156923134;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> commands = {"backward 490", "right 60", "right 269", "forward 43", "forward 381", "backward 903", "left 223", "left 215", "left 129", "backward 3", "right 23", "forward 723", "forward 275", "backward 695", "left 256", "left 310", "right 133", "backward 782", "left 43", "backward 571", "right 141", "forward 139", "forward 3", "backward 902", "right 201", "right 256", "forward 400", "right 337", "right 181", "right 26", "right 169", "forward 846", "left 113", "backward 294", "left 352", "right 225", "forward 655", "left 107"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 8105.0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> commands = {"backward 384", "right 199", "left 208", "backward 642", "right 227", "forward 102", "backward 627", "right 284", "forward 723", "left 2", "right 266", "right 339", "left 318", "backward 968", "forward 530"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 3975.8639554697143;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> commands = {"left 155", "forward 8", "forward 14", "forward 484", "right 218", "forward 384", "backward 164", "forward 656", "forward 386", "forward 180", "left 115", "backward 205", "forward 197", "backward 738", "forward 352", "right 325", "left 336", "right 229", "right 102", "right 229", "left 135", "backward 557", "left 53", "right 201", "right 277", "right 291", "right 302", "backward 586", "right 204", "left 39", "forward 968", "right 275"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 5879.0;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> commands = {"right 324", "left 128", "forward 236", "forward 831", "right 140", "forward 687", "forward 434", "right 334", "forward 135", "forward 91", "right 278", "forward 811", "left 249", "forward 970", "right 138", "backward 168", "backward 844", "forward 353", "forward 57", "left 317", "right 349", "forward 119", "left 175", "forward 899", "forward 315", "forward 875", "left 145", "backward 403", "forward 911", "backward 539", "left 283", "backward 472", "left 278", "left 252", "backward 442"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 10592.0;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> commands = {"right 115", "left 209", "backward 668", "left 59", "forward 614", "right 297", "right 267", "backward 315", "backward 546", "backward 621", "left 47", "backward 842", "left 139", "left 27", "left 141", "forward 449", "left 358", "left 103", "right 270", "forward 925"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 4980.0;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> commands = {"forward 753", "left 159"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 753.0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> commands = {"forward 974", "left 302", "left 60", "right 278", "backward 989", "right 246", "left 299", "left 290", "right 146", "right 236", "forward 332", "forward 412", "backward 209", "left 144", "backward 525", "backward 200", "left 168", "left 284", "forward 935", "left 230", "backward 345", "forward 479", "right 311", "forward 874", "forward 488", "backward 555", "forward 75", "backward 70", "right 144", "backward 413", "right 299", "right 333", "backward 11", "backward 145", "right 187", "backward 706", "right 157", "backward 20", "forward 778", "forward 796", "right 204", "right 197", "backward 486", "backward 690", "forward 950", "right 199", "forward 173", "right 30", "left 321", "right 254"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 12630.0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> commands = {"left 160", "backward 651", "left 230", "backward 322", "forward 74", "forward 16", "forward 430", "forward 971", "right 2", "forward 163", "backward 463", "right 115", "left 251", "right 328", "right 126", "left 122", "right 80", "forward 507", "forward 369", "left 271", "left 53", "left 143", "backward 936", "forward 871", "backward 839", "backward 348", "left 212", "forward 864", "right 218", "left 303"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 7824.0;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> commands = {"backward 957", "backward 400", "right 179", "left 219", "right 194", "forward 853", "backward 861", "right 106", "right 286", "left 130", "right 247", "right 108", "left 13", "backward 174", "forward 816", "backward 116", "right 205", "backward 60", "forward 632", "right 157", "left 148", "backward 433", "right 223", "backward 52", "forward 480", "right 328", "left 321", "left 320", "left 70", "forward 991", "forward 655", "backward 88"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 7568.0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> commands = {"forward 926", "left 149", "right 267", "left 319", "forward 3", "backward 200", "right 31", "forward 948", "backward 924", "forward 228", "backward 157", "forward 327", "left 51", "right 174", "right 134", "right 75", "left 88", "forward 303", "right 127", "forward 318", "forward 368", "right 53", "backward 781", "left 168", "forward 571", "left 277", "backward 656", "backward 416", "right 168", "backward 750", "left 135", "left 359", "right 62", "left 29", "backward 412", "forward 966", "left 198", "forward 706", "right 336", "backward 245", "backward 312", "backward 59"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 10576.0;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> commands = {"forward 484", "forward 17", "right 216", "right 260", "backward 823", "forward 983", "forward 244", "left 288", "right 185", "right 304", "left 115", "right 21", "forward 125", "backward 611", "right 189", "backward 779", "forward 865", "forward 567", "right 250", "backward 921", "backward 721", "left 258", "left 231", "right 88", "forward 564", "left 303", "backward 84", "right 262", "forward 956", "backward 256", "left 261", "right 333", "forward 520", "left 8", "left 61", "forward 50", "forward 223", "right 151", "forward 553", "left 284", "right 147", "left 4", "right 116", "forward 128", "forward 213", "right 276", "left 186", "right 345", "left 212", "left 337"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 10687.0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> commands = {"forward 43", "backward 369", "left 178", "forward 71", "forward 714", "left 39", "backward 958", "left 173", "backward 214", "forward 184", "backward 559", "left 252", "forward 563", "forward 562", "right 271", "forward 915", "right 184", "forward 787", "forward 377", "forward 558", "left 127", "right 106", "right 5", "forward 613", "backward 583", "backward 282", "backward 463", "right 14", "forward 261", "backward 559", "left 87", "backward 440", "left 303"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 10075.0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> commands = {"right 22", "left 227", "left 83", "right 54", "forward 952", "right 105", "backward 523", "left 214", "left 99", "right 204", "right 101", "forward 249", "backward 708", "backward 590", "backward 409", "left 134", "left 288", "backward 737", "right 91", "backward 806"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 4974.0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> commands = {"forward 485", "left 22", "left 54", "forward 767", "backward 506", "forward 430"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 1635.0426355482525;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> commands = {"forward 204", "left 315", "left 120", "forward 569", "forward 719", "right 148", "backward 344", "backward 446", "left 82", "backward 34", "backward 655", "left 154", "backward 588", "forward 688", "forward 889", "forward 865", "backward 521", "backward 299", "right 39", "right 237", "forward 756", "forward 788", "left 58", "forward 130", "right 145", "backward 805", "backward 349", "left 67", "left 207", "backward 342", "right 252", "right 345", "backward 215", "left 129"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 10206.0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> commands = {"backward 797", "backward 822", "backward 990", "right 27", "right 267", "right 262", "left 288", "backward 741", "left 13", "right 265", "right 11", "backward 694", "left 312", "left 333", "forward 568", "forward 749", "backward 324", "right 231", "forward 750", "right 313", "backward 144", "right 229", "backward 6", "backward 203", "right 9", "left 59", "forward 709", "forward 298", "backward 317", "forward 596", "right 119", "left 37", "backward 494", "backward 96", "left 266", "right 257", "right 71", "right 301", "backward 837", "left 78", "backward 136"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 10271.0;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> commands = {"backward 90", "backward 951", "left 286", "backward 617", "left 172", "left 159", "backward 466", "left 180", "left 84", "forward 583", "backward 79", "right 200", "backward 690", "forward 359", "right 181", "backward 900", "forward 857", "right 307", "left 3", "right 60", "backward 677", "forward 54", "left 102", "backward 672", "left 277", "right 24", "left 105", "right 128", "forward 351", "left 281", "backward 271", "forward 645", "left 10", "forward 418", "backward 719", "right 3", "left 241", "forward 506"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 9905.0;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> commands = {"right 219", "left 96", "left 71", "left 199", "left 110", "left 32", "right 148", "left 165", "left 185", "right 242", "right 144", "right 339", "right 250", "left 177", "right 334", "left 106", "right 276", "right 336", "right 300", "right 43", "right 243", "left 165", "left 136", "right 197", "left 118", "left 49", "backward 837", "forward 958", "left 152", "left 320", "right 93", "right 243"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 1795.0;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> commands = {"left 357", "forward 65", "left 44", "left 323", "backward 46", "right 12", "right 306", "left 131", "right 9", "right 41", "right 309", "left 56", "left 263", "left 73", "left 304", "right 262", "left 126", "forward 568", "right 205", "right 137", "right 285", "left 323", "backward 55", "left 121", "left 119"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 734.0;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> commands = {"right 204", "right 83", "left 68", "right 298", "left 259", "backward 301", "right 85", "right 105", "left 300", "right 270", "right 302", "left 119", "forward 339"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 640.0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> commands = {"left 55", "right 332", "right 38", "right 221", "right 52", "right 60", "left 130", "right 164", "right 263", "left 9", "left 136", "left 319", "left 33", "right 45", "left 30", "right 176", "left 49", "right 228", "forward 773", "right 191", "left 264", "forward 775", "left 208", "right 290", "left 245", "right 261", "right 278", "left 336", "left 165", "right 176", "right 150", "right 273", "right 39", "right 136", "right 148", "right 176", "right 334", "left 282", "left 124", "left 120", "left 185", "left 43", "forward 770", "left 250"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 2318.0;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> commands = {"left 335", "right 295", "right 84", "left 32", "right 73", "right 29", "right 232", "right 237", "left 318", "right 174", "forward 84", "left 350", "left 339", "right 126", "left 37", "right 338", "left 317", "left 149", "right 170", "left 115", "left 262"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 84.0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> commands = {"left 25", "right 78", "left 61", "right 199", "right 346", "right 151", "left 350", "left 251", "right 165", "left 275", "left 60", "right 287", "right 118", "right 117", "right 339", "right 98", "right 241", "left 236", "left 131", "left 192", "right 197", "left 195", "left 243", "left 258", "right 325", "right 298", "right 177", "left 149", "right 300", "left 227", "left 349", "left 186", "left 38", "right 129", "right 284", "right 104", "left 89", "right 178", "left 74", "right 302", "left 259", "left 287", "right 258", "right 342", "right 63"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> commands = {"forward 703", "left 327", "left 135", "right 280", "right 225", "left 32", "backward 347", "left 119", "right 238", "left 133", "left 358", "left 6", "right 194", "left 288", "right 15", "left 224", "left 24", "right 3", "left 307", "right 292", "right 329"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 1050.0;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> commands = {"right 38", "forward 15", "backward 163", "left 11", "left 257"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 174.91210293037068;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> commands = {"left 307", "right 69", "left 96", "left 57", "backward 905", "right 164", "left 293", "left 164", "forward 7", "right 262", "right 80", "left 41", "right 261", "left 215", "left 202", "left 277", "right 142", "left 25", "right 137", "right 354", "left 71", "left 227", "right 140"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 912.0;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> commands = {"right 211", "left 224", "right 283", "left 1", "right 79", "left 131", "right 228", "left 263", "right 15", "left 218", "right 170", "right 166", "right 9", "left 295", "right 29", "right 207", "left 202", "left 332", "right 212", "left 341", "right 308", "left 260", "left 46", "left 212", "backward 177", "right 169", "left 213", "right 340", "left 348", "right 135", "right 3", "left 247", "right 246", "right 98", "left 206", "right 258", "right 328", "right 36", "right 21", "left 103", "left 250", "left 174", "left 145", "left 95", "right 40", "right 164", "right 243", "forward 802", "left 271"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 979.0;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> commands = {"left 13", "right 277", "left 257", "right 174", "right 9", "right 127", "right 8", "forward 684", "backward 692"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 1375.9476079073536;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> commands = {"left 228", "left 199", "right 321", "right 81", "right 183", "right 61", "left 51", "right 334", "right 103", "right 293", "left 58", "forward 161", "left 235", "right 118", "right 50", "left 112", "left 251", "right 294", "left 60", "right 240", "left 16", "left 146", "right 225", "left 236", "left 118", "right 20", "left 120", "right 170", "right 178", "backward 244", "right 280", "left 202"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 405.0;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> commands = {"left 135", "left 327", "right 94", "left 17", "right 126", "left 347", "right 118", "right 215", "right 203", "left 92", "right 123", "right 280", "right 341", "right 32", "right 123", "right 195", "forward 318", "left 53", "left 3", "right 353", "left 92", "right 185", "left 298", "right 255", "right 307", "right 322", "left 169", "left 2", "left 307", "right 257", "right 157", "backward 467", "left 234", "left 350", "right 63", "right 4"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 785.0;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> commands = {"right 69", "left 40", "right 164", "left 202", "left 4", "backward 73", "left 35", "left 64", "right 288", "left 140", "left 200", "left 172", "left 149", "right 37", "right 123", "left 13", "left 113", "right 219", "left 345", "forward 524", "right 13", "right 334", "left 94", "right 306", "right 128"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 597.0;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> commands = {"left 126", "left 116", "left 347", "backward 130", "right 322", "right 319", "left 130", "left 299", "left 267", "right 313", "right 24", "left 24", "right 200", "right 84", "right 15", "right 17", "right 130", "left 207", "left 118", "right 231", "left 203", "left 287", "left 286", "left 183", "right 253", "left 88", "left 299", "right 53", "right 348", "right 245", "right 137", "right 93", "right 108", "right 24", "forward 1000", "right 347", "right 60", "left 247", "right 19", "right 188", "right 297"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 1130.0;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> commands = {"right 50", "left 341", "backward 554", "left 322", "right 75", "right 146", "right 271", "right 298", "right 112", "left 215", "left 298", "right 253", "forward 679"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 1233.0;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> commands = {"left 14", "right 345", "left 117", "left 255", "right 154", "left 329", "left 183", "right 289", "right 251", "left 162", "right 82", "left 154", "right 345", "backward 346", "right 12", "right 260", "right 282", "left 117", "left 170", "left 146", "right 15", "right 294", "left 323", "left 114", "right 303", "left 170", "forward 947", "left 267"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 1293.0;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> commands = {"right 74", "backward 704", "right 82", "right 255", "left 181", "left 196", "left 247", "left 247", "right 269", "right 43", "right 180", "left 326", "left 332", "right 144", "right 96", "left 216", "right 195", "left 67", "right 288", "left 132", "left 10", "right 169", "left 359", "right 73", "left 284", "forward 933"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 1637.0;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> commands = {"forward 206", "backward 207", "right 190", "right 160", "right 12"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 411.99395866269214;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> commands = {"left 2", "left 141", "right 221", "backward 143", "left 329", "left 235", "right 177", "left 162", "right 269", "forward 806", "left 154", "left 43", "right 242", "left 208", "right 35", "left 218", "left 239", "right 324", "left 187", "left 126", "left 350", "right 40", "left 62", "right 90", "right 44", "right 191", "right 332", "right 123", "right 320", "right 220", "left 339", "left 325", "left 70", "left 178", "right 16", "left 106", "right 16", "right 303", "left 78", "right 187", "right 298", "left 6", "right 298", "right 254", "right 46", "left 268", "right 217", "right 15"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 949.0;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> commands = {"left 94", "left 4", "left 331", "right 342", "backward 954", "right 231", "forward 222", "right 39", "right 206", "left 153"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 1176.0;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> commands = {"right 224", "left 193", "right 184", "right 234", "right 196", "left 270", "right 325", "right 73", "right 102", "right 258", "right 247", "right 307", "right 126", "left 270", "right 160", "right 194", "right 215", "right 131", "left 308", "right 109", "right 87", "left 30", "right 327", "right 79", "right 63", "left 337", "left 156", "left 207", "right 306", "right 299", "right 9", "left 305", "right 64", "left 21", "backward 975", "left 278", "right 219", "right 308", "right 46", "right 26", "right 311", "left 332", "right 301", "forward 510", "right 80", "right 261", "left 59", "right 307", "left 270"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 1485.0;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> commands = {"left 6", "right 256", "forward 994", "left 298", "left 136", "right 335", "left 40", "left 356", "left 197", "left 340", "backward 327", "left 345", "left 277", "left 174", "right 181", "left 13", "right 59", "right 153"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 1321.0;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> commands = {"right 234", "right 178", "right 216", "right 330", "right 112", "right 354", "right 128", "left 124", "forward 35", "right 302", "left 78", "right 273", "right 240", "left 106", "right 130", "left 213", "left 310", "left 81", "left 159", "right 117", "left 268", "right 31", "left 76", "right 116", "left 269", "backward 800", "left 15", "right 310", "right 114", "left 126", "left 84", "right 167", "right 93", "left 98", "right 161", "left 213", "right 234", "right 47", "left 45", "right 71", "right 342"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 835.0;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> commands = {"forward 526"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 526.0;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> commands = {"right 219", "left 307", "forward 723", "left 107", "left 287", "left 39", "left 208", "backward 837"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 1560.0;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> commands = {"right 179", "left 249", "forward 574", "left 325", "right 33", "left 357", "left 211", "left 350", "right 281", "right 182", "right 349", "left 169", "backward 180", "right 355", "right 315", "left 247", "left 98", "left 315", "left 66", "left 194", "left 87", "left 294", "right 31", "left 159", "right 79", "left 122", "left 119"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 754.0;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> commands = {"left 112", "right 20", "right 257", "left 26", "right 231", "right 199", "left 287", "right 308", "left 319", "right 189", "right 159", "right 153", "right 241", "left 258", "left 144", "right 155", "right 69", "left 143", "backward 912", "right 275", "right 61", "left 239", "right 238", "left 82", "left 337", "right 309", "right 306", "left 345", "left 355", "right 93", "left 9", "left 323", "left 26", "right 106", "right 248", "left 283", "left 230", "left 327", "left 220", "right 196", "left 282", "right 160", "forward 400", "right 19", "left 158", "left 9"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 1312.0;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> commands = {"forward 362", "right 153", "left 348", "backward 333", "left 1"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 689.0645755745132;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> commands = {"left 25", "forward 440", "left 51", "backward 13", "left 137"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 452.8770988981487;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> commands = {"left 61", "left 33", "forward 524", "left 237", "right 13", "right 129", "right 203", "right 261", "left 16", "right 197", "left 328", "right 59", "backward 108", "left 19", "right 111", "right 54", "right 292", "left 313"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 632.0;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> commands = {"right 3", "right 3", "right 3", "left 2", "right 3", "left 3", "left 2", "left 3", "left 1", "right 1", "right 1", "right 1", "backward 586", "left 2", "left 1", "left 1", "right 2", "left 3", "left 3", "left 1", "right 2", "right 3", "left 3", "left 2", "right 2", "right 2", "right 2", "left 3", "forward 75", "right 3"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 523.1405110181053;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> commands = {"right 3", "right 1", "right 3", "left 3", "right 1", "right 2", "left 1", "left 3", "left 3", "left 1", "backward 286", "right 1", "forward 285", "left 3", "right 2", "right 3", "right 3", "right 1", "right 1", "right 3", "right 2", "left 3", "right 1", "left 2", "left 1", "right 3", "right 3", "left 2", "left 3", "right 3", "right 3", "left 2", "right 1"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 195.29576258266383;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> commands = {"right 3", "left 1", "forward 170", "left 1", "backward 599", "right 2", "left 2"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 429.90230028069766;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> commands = {"right 2", "right 2", "right 2", "left 2", "left 1", "left 3", "right 3", "forward 567", "left 3", "right 3", "right 2", "left 2", "right 1", "right 2", "left 3", "left 1", "right 1", "right 3", "right 2", "left 1", "right 3", "left 1", "right 2", "right 2", "right 3", "right 2", "right 3", "right 1", "right 3", "right 2", "left 1", "right 2", "left 1", "left 3", "right 3", "right 3", "right 2", "right 3", "left 1", "right 2", "right 3", "backward 788"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 723.1299795106204;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> commands = {"left 3", "right 3", "left 2", "right 2", "left 2", "left 1", "forward 289", "backward 786", "right 3", "right 2", "left 2", "right 3", "left 1", "right 3", "left 3", "right 3", "right 3", "left 2", "right 2"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 535.056997178156;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> commands = {"left 1", "backward 583", "right 3", "right 2", "left 1", "right 3", "right 3", "left 2", "left 2", "right 3", "right 2", "right 1", "left 3", "right 2", "left 3", "left 3", "left 2", "right 2", "right 2", "right 1", "left 3", "right 1", "left 2", "left 2", "right 2", "left 1", "left 3", "left 1", "right 2", "left 2", "right 1", "right 1", "left 1", "left 2", "left 3", "right 3", "left 1", "right 3", "right 1", "left 1", "left 3", "right 1", "left 2", "left 2", "right 1", "forward 810"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 583.0196870057615;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> commands = {"forward 366", "left 3", "right 1", "backward 583"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 218.34343192841206;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> commands = {"right 1", "right 1", "left 1", "right 1", "left 1", "right 3", "forward 710", "left 1", "left 1", "left 1", "backward 817", "left 2"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 141.76215163024548;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> commands = {"backward 977", "right 3", "left 3", "right 1", "left 2", "left 1", "forward 84", "right 3", "right 2", "right 1", "left 3", "left 3"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 895.0060141730647;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> commands = {"left 3", "right 2", "backward 268", "left 2", "right 3", "right 3", "forward 773", "right 2"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 511.19426181243256;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> commands = {"forward 976", "left 2", "right 3", "right 1", "left 1", "left 2", "right 1", "right 3", "right 3", "right 3", "left 1", "right 2", "right 3", "left 1", "left 3", "right 3", "backward 474"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 565.1344910105815;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> commands = {"left 1", "left 3", "right 3", "right 3", "right 1", "left 2", "left 3", "backward 404", "right 3", "left 2", "right 3", "left 3", "forward 757", "right 3", "right 1", "right 3", "left 3", "left 2", "left 1", "right 2", "right 3", "left 1", "left 2", "left 3", "right 3", "left 3", "right 3", "left 1", "right 2", "right 1", "left 1", "right 1", "right 3", "left 3", "left 3", "left 3", "right 3", "left 1", "right 2", "right 3", "right 2", "left 2", "left 3", "right 3"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 592.7372157136926;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> commands = {"right 2", "left 1", "right 1", "left 2", "right 2", "right 3", "left 2", "right 1", "left 2", "left 2", "left 2", "right 2", "right 2", "left 2", "right 3", "left 1", "right 2", "right 2", "left 1", "left 1", "right 3", "left 3", "right 3", "left 2", "right 2", "right 3", "right 2", "right 1", "right 1", "forward 526", "right 1", "left 3", "right 2", "right 1", "right 3", "left 3", "backward 176", "left 1", "right 2", "right 3", "left 2", "left 3", "left 2", "left 3", "left 3", "left 2", "left 2"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 425.88571194360145;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> commands = {"left 2", "left 2", "left 1", "right 2", "right 1", "left 2", "left 3", "left 1", "left 3", "right 1", "left 1", "right 2", "right 3", "left 1", "right 3", "left 1", "right 2", "right 3", "right 3", "right 2", "right 1", "right 2", "right 3", "forward 604", "right 2", "right 2", "left 2", "right 3", "backward 782", "left 2", "right 2", "right 1", "left 3", "left 1", "left 3", "right 1", "right 2", "left 2", "right 2"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 534.286756005837;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> commands = {"right 1", "right 1", "right 3", "left 3", "left 1", "left 1", "right 1", "backward 369", "left 1", "left 1", "left 1", "left 1", "left 1", "forward 764", "right 1", "right 3", "left 1", "right 1", "right 1", "right 2", "right 2", "right 2"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 428.5100959187205;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> commands = {"right 1", "left 3", "forward 385", "right 1", "left 1", "right 1", "left 1", "right 3", "right 1", "left 3", "left 1", "left 1", "left 1", "left 1", "left 1", "right 3", "left 2", "right 1", "backward 437", "right 3", "right 1", "right 2", "left 2", "left 3", "left 3"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 171.61970126354524;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> commands = {"backward 244", "left 2", "left 2", "left 2", "right 1", "forward 813", "left 1", "right 1", "right 3", "left 3", "right 2", "left 2", "left 1"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 577.866353940811;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> commands = {"right 3", "left 1", "backward 893", "right 2", "right 3", "right 1", "right 3", "left 1", "forward 868", "left 3", "right 1"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 200.89239857898707;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> commands = {"left 3", "left 1", "left 3", "left 1", "forward 172", "left 3", "right 2", "right 2", "right 3", "backward 43", "left 2"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 130.46117430751877;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> commands = {"right 3", "left 1", "left 1", "left 2", "right 1", "left 1", "left 1", "right 1", "left 3", "backward 31", "right 1", "right 1", "left 3", "left 2", "right 2", "right 3", "left 3", "right 3", "right 3", "right 2", "right 2", "right 2", "forward 1", "right 3", "left 3", "left 3", "left 1", "left 1", "right 3", "left 2", "left 1", "left 3"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 30.147232499127828;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> commands = {"right 3", "right 2", "right 3", "left 1", "right 2", "right 3", "left 3", "right 3", "right 3", "left 3", "left 1", "right 3", "left 2", "left 1", "left 2", "right 1", "right 1", "right 3", "left 1", "right 1", "right 3", "right 2", "left 1", "left 3", "left 2", "left 2", "forward 189", "left 1", "right 2", "left 1", "right 3", "left 2", "left 3", "right 2", "right 3", "right 1", "right 2", "backward 703", "right 1", "left 2", "left 1", "left 3", "left 3", "left 2", "left 3", "right 1", "left 3", "left 3"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 596.3160319748553;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> commands = {"forward 938", "left 1", "left 2", "backward 390", "left 1", "left 3", "right 1"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 552.9534642383056;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> commands = {"left 3", "left 3", "right 2", "right 1", "left 1", "left 2", "left 3", "left 3", "right 3", "backward 60", "left 1", "right 1", "left 3", "right 3", "forward 951", "left 3", "left 2", "left 3", "left 3", "right 2", "left 2", "right 2", "left 2", "left 2", "left 2", "right 2", "right 1", "right 2", "left 3", "left 3", "left 3", "left 1"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 911.9428793528283;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> commands = {"left 2", "right 3", "backward 286", "left 2", "right 3", "left 1", "left 2", "right 1", "right 3", "left 3", "left 3", "left 2", "forward 663", "left 2", "right 2", "right 1", "left 1", "right 1"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 400.8617354977788;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> commands = {"right 1", "left 1", "right 1", "right 3", "left 3", "left 1", "backward 277", "forward 616", "right 3", "left 1", "left 1", "right 1", "right 3", "left 1", "right 2", "right 1", "right 2", "left 2", "right 3", "left 1", "right 1", "right 2", "left 2"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 376.8949876177798;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> commands = {"left 4", "right 6", "left 7", "right 6", "left 7", "right 3", "left 6", "backward 359", "right 5", "forward 893", "left 5", "right 7", "left 7", "left 7", "right 6", "left 4", "left 5", "right 3"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 729.0979832776567;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> commands = {"left 4", "forward 257", "left 4", "left 3", "right 6", "left 7", "left 4", "left 3", "left 3", "right 7", "left 6", "left 6", "left 6", "left 7", "left 7", "right 7", "left 5", "right 5", "right 6", "right 4", "left 5", "right 7", "left 4", "left 6", "right 3", "left 5", "right 5", "left 4", "left 7", "left 3", "right 6", "left 6", "left 3", "left 3", "left 5", "right 6", "right 3", "backward 536", "left 3", "right 7", "left 6", "right 4", "left 6", "left 7", "left 5", "right 7", "left 5", "right 5", "left 3"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 770.9125941348552;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> commands = {"right 3", "left 4", "right 5", "left 7", "left 6", "left 5", "right 7", "right 7", "right 5", "left 3", "left 6", "left 7", "left 7", "right 7", "right 4", "right 6", "right 7", "left 4", "left 4", "right 5", "right 4", "right 3", "left 3", "left 5", "forward 15", "left 6", "left 6", "right 4", "right 6", "left 4", "right 4", "left 4", "right 6", "left 7", "left 7", "backward 305", "left 3"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 307.44663581471275;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> commands = {"right 4", "right 5", "left 5", "right 7", "right 6", "right 6", "left 7", "right 6", "left 4", "right 6", "right 6", "right 4", "right 7", "right 5", "left 5", "left 4", "right 7", "forward 838", "right 7", "right 3", "left 7", "backward 770", "right 5", "right 7", "left 5", "left 7", "left 7", "left 5", "left 6", "left 7", "left 4", "left 5", "right 6", "right 5", "right 7", "left 7", "right 3", "right 4", "left 4", "left 7", "right 4"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 1392.9838477168355;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> commands = {"right 7", "right 4", "left 7", "left 4", "right 4", "right 4", "forward 30", "left 7", "backward 594"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 565.7187622535073;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> commands = {"right 7", "right 3", "right 4", "left 6", "right 5", "right 4", "left 6", "right 6", "right 6", "right 6", "forward 744", "right 5", "left 7", "left 3", "left 4", "right 5", "left 6", "left 4", "left 3", "left 5", "left 5", "left 3", "left 6", "right 5", "right 5", "right 3", "right 6", "right 7", "left 3", "backward 641", "left 5", "left 7", "right 6", "left 4", "left 4", "left 7", "right 7", "right 4", "right 4", "right 3", "right 5", "left 7"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 1107.8457090574934;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> commands = {"left 6", "left 4", "left 3", "left 3", "right 5", "left 4", "right 5", "left 6", "left 7", "left 4", "left 4", "left 4", "left 4", "right 5", "right 4", "left 3", "backward 14", "right 4", "forward 350"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 341.55895178110694;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> commands = {"backward 962", "left 3", "left 4", "forward 745", "right 4"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 240.3605565819022;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> commands = {"backward 632", "right 4", "right 3", "right 6", "right 5", "left 4", "left 5", "right 5", "forward 292", "left 4", "right 4", "right 7"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 422.7294411568761;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> commands = {"left 5", "right 3", "left 4", "left 6", "left 7", "right 4", "left 5", "right 3", "left 5", "right 6", "right 5", "right 5", "left 3", "right 6", "left 6", "right 7", "left 4", "left 4", "right 4", "right 5", "left 4", "left 5", "right 7", "left 3", "left 3", "right 5", "left 7", "backward 902", "right 6", "left 4", "right 4", "forward 779", "left 3", "left 4", "right 4", "right 7", "right 3"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 1128.5164943918871;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> commands = {"right 7", "right 3", "right 3", "right 3", "left 21", "left 7", "left 3", "right 21", "right 3", "right 7", "left 7", "right 21", "left 21", "left 3", "right 49", "left 3", "backward 229", "left 7", "left 3", "left 21", "forward 344", "right 7", "left 49", "right 49", "right 3"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 572.6650078768004;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> commands = {"backward 937", "left 21", "forward 883", "right 3", "left 3", "left 49", "left 3", "left 7", "left 7", "right 7"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 1287.5006796114712;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> commands = {"left 49", "right 49", "left 3", "right 7", "left 49", "right 3", "left 21", "right 49", "left 7", "right 21", "left 21", "right 49", "left 3", "left 3", "right 7", "left 49", "left 49", "right 7", "left 7", "left 7", "right 7", "backward 609", "left 21", "forward 453", "right 3", "right 7", "left 49", "left 21", "right 3"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 1062.0;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> commands = {"forward 742"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 742.0;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> commands = {"right 49", "right 49", "left 21", "right 7", "right 49", "left 49", "right 49", "right 21", "right 3", "right 49", "backward 785", "right 49", "left 21", "right 7", "left 21", "right 49", "left 3", "right 21", "right 49", "forward 118", "left 21", "left 49", "left 21"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 902.9843763901306;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> commands = {"left 7", "left 3", "forward 474", "right 49", "right 21", "right 21", "right 3", "backward 429"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 661.1251014898359;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> commands = {"left 21", "backward 591", "right 7", "right 3", "right 7", "left 21", "right 49", "right 21", "left 3", "left 3", "left 3", "right 49", "left 3", "right 21", "right 21", "right 7", "right 21", "right 21", "left 49", "left 3", "right 21", "right 21", "left 21", "forward 15", "left 3", "left 49"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 606.0;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> commands = {"right 49", "forward 709", "right 7", "left 3", "left 21", "right 21", "left 7", "left 7", "left 7", "left 49", "backward 578", "left 7", "left 3", "left 49", "left 3", "right 21", "right 7", "left 21", "right 3", "right 7", "right 21", "right 49", "left 21", "left 49", "left 49"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 1286.9515027152186;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> commands = {"right 7", "right 49", "right 3", "left 21", "backward 661", "left 21", "left 49", "forward 714", "left 7", "left 3", "left 49", "right 7"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 1328.2188474928978;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> commands = {"backward 481", "forward 149", "right 49", "left 3", "right 3", "right 3", "right 49", "left 49", "left 49", "left 7", "right 21"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 579.4629403453565;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> commands = {"left 19", "forward 854", "backward 533"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 390.69032166551534;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> commands = {"left 190", "right 190", "right 38", "right 19", "left 57", "left 38", "left 57", "left 38", "left 190", "right 38", "right 19", "left 57", "right 190", "left 19", "left 38", "left 38", "left 190", "left 19", "left 38", "left 38", "right 38", "right 190", "right 38", "right 57", "right 57", "right 190", "left 57", "right 57", "right 19", "right 57", "backward 85", "right 57", "right 38", "right 57", "right 38", "left 190", "left 57", "right 38", "forward 300", "right 57", "left 190", "left 19", "left 19", "right 57", "left 19", "left 57", "left 19"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 384.74787797033923;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> commands = {"left 38", "backward 158", "right 19", "right 19", "right 57", "forward 619", "right 19", "right 190", "left 38"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 775.4487669561229;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> commands = {"right 38", "left 19", "left 19", "backward 13", "right 19", "right 57", "left 57", "left 57", "right 19", "right 190", "right 38", "right 190", "left 190", "right 57", "right 190", "right 38", "left 190", "left 38", "left 19", "right 19", "forward 101"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 113.88785689666551;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> commands = {"left 57", "left 190", "right 190", "left 19", "forward 799", "right 57", "right 57", "right 190", "right 19", "backward 294"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 1090.35078514746;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> commands = {"left 17", "left 51", "left 68", "left 34", "left 68", "left 51", "left 68", "left 85", "left 34", "left 34", "left 17", "left 17", "left 34", "left 51", "left 51", "left 68", "left 51", "left 85", "left 34", "left 68", "left 68", "left 51", "left 51", "backward 576", "left 68", "forward 437"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 1012.9621543208864;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> commands = {"left 85", "left 34", "left 51", "left 51", "left 68", "left 68", "left 17", "left 51", "left 68", "left 51", "forward 744", "backward 916", "left 68", "left 51", "left 17", "left 51", "left 34", "left 34", "left 68", "left 34", "left 85", "left 17", "left 85", "left 34", "left 34", "left 51", "left 17"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 1659.9374708945281;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> commands = {"forward 817", "backward 143"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 674.0;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> commands = {"left 34", "left 34", "left 51", "left 85", "left 34", "left 68", "left 85", "left 51", "left 68", "left 17", "forward 923", "left 17", "left 34", "left 85", "left 68", "left 68", "left 51", "left 34", "left 85", "left 17", "left 85", "left 85", "left 68", "left 85", "left 17", "left 85", "left 85", "left 51", "left 85", "backward 390"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 1312.9582436813794;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> commands = {"left 51", "left 85", "left 85", "left 51", "left 68", "left 51", "left 51", "left 17", "left 17", "left 68", "left 68", "left 85", "left 85", "backward 667", "left 17", "forward 434", "left 34"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 1100.3593468872916;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<string> commands = {"left 34", "left 17", "left 51", "left 68", "left 68", "left 68", "left 68", "left 17", "left 34", "left 34", "left 85", "left 51", "left 68", "forward 768", "backward 345", "left 51", "left 51", "left 17", "left 17"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 1112.419948361987;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<string> commands = {"left 51", "left 51", "left 34", "left 34", "left 17", "left 68", "left 85", "left 85", "left 68", "left 68", "backward 350", "left 17", "left 51", "left 85", "left 17", "left 34", "left 34", "left 51", "left 51", "left 51", "left 51", "left 51", "left 85", "left 51", "left 34", "left 17", "left 34", "left 17", "left 34", "forward 158"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 507.98342008799546;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<string> commands = {"left 51", "left 34", "left 68", "left 85", "left 68", "left 68", "left 34", "left 68", "left 85", "backward 4", "left 68", "left 68", "left 68", "left 51", "left 17", "left 34", "left 51", "left 85", "left 68", "left 85", "left 85", "left 34", "left 34", "left 17", "left 68", "left 34", "left 51", "left 17", "left 85", "left 34", "left 85", "left 85", "left 34", "forward 967", "left 68", "left 34", "left 34", "left 34", "left 68"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 970.9993932900936;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<string> commands = {"left 85", "left 68", "left 34", "left 68", "left 85", "left 68", "left 51", "left 51", "left 34", "left 51", "left 85", "left 34", "left 85", "left 34", "left 34", "left 85", "left 51", "left 34", "left 68", "left 17", "left 68", "left 34", "left 17", "left 51", "left 68", "left 68", "backward 679", "left 34", "left 17", "left 85", "left 85", "forward 134", "left 17"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 812.9829547924106;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<string> commands = {"left 68", "left 51", "left 17", "left 34", "left 51", "left 68", "left 85", "left 68", "left 17", "left 51", "left 85", "left 51", "forward 49", "left 17", "left 17", "left 85", "left 85", "left 85", "left 17", "left 85", "left 51", "left 85", "left 68", "backward 905", "left 34", "left 68", "left 51", "left 17", "left 34", "left 17", "left 51", "left 34", "left 34", "left 51", "left 17", "left 17", "left 34", "left 17", "left 85", "left 17", "left 51", "left 85", "left 34", "left 34"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 953.992920352882;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<string> commands = {"forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 50000.0;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<string> commands = {"forward 20", "backward 10"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 10.0;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<string> commands = {"forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "backward 1", "left 38"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 47999.21199319478;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<string> commands = {"forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "right 80", "backward 1000"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 47836.48999397818;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<string> commands = {"forward 1", "backward 1", "right 47", "right 179", "right 179", "right 179", "right 179", "right 179", "right 179", "right 179", "right 179", "right 179", "right 179", "right 179", "right 179", "right 179", "right 179", "right 179", "right 179", "right 179", "right 179", "right 179", "right 179", "right 179", "right 179", "right 179", "right 179", "right 179", "right 179", "right 179", "right 179", "right 179", "right 179", "right 179", "right 179", "right 179", "right 179", "right 179", "right 179", "right 179", "right 179", "right 179", "right 179", "right 179", "right 179", "right 179", "right 179", "right 179", "right 179", "right 179"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<string> commands = {"forward 992", "backward 292", "right 1", "left 175", "left 175", "left 1", "left 175", "left 175", "right 1", "left 175", "left 175", "left 175", "left 175", "right 1", "left 175", "left 175", "left 175", "left 175", "left 175", "left 175", "right 1", "left 175", "left 175", "left 175", "left 175", "right 1", "left 175", "left 175", "left 175", "right 1", "left 175", "left 175", "left 175", "left 175", "left 175", "left 175", "left 175", "left 175", "left 175", "left 175", "forward 993", "backward 20", "left 175", "left 175", "left 175", "left 175", "left 175", "right 1", "forward 331", "backward 1"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 2629.0;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<string> commands = {"forward 100", "backward 100", "left 270"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 141.4213562373095;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<string> commands = {"left 190", "right 322", "right 37", "right 318", "left 82", "right 211", "backward 346", "right 323", "forward 286", "backward 45", "backward 311"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 987.8762018818734;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<string> commands = {"forward 533", "forward 779", "backward 817", "forward 737", "backward 748", "forward 393", "forward 637", "backward 700", "forward 750", "forward 911", "backward 677", "backward 801", "forward 750", "forward 692", "backward 330", "backward 20", "backward 768", "backward 675", "forward 800", "backward 154", "backward 971", "forward 129", "backward 562", "backward 943", "backward 931", "backward 294", "forward 97", "backward 379", "forward 762", "forward 958", "forward 533", "backward 838", "forward 44", "backward 44", "backward 592", "backward 526", "backward 499", "backward 723", "backward 21", "forward 738", "backward 421", "forward 105", "forward 496", "forward 311", "forward 853", "right 359", "right 359", "left 359", "right 359", "left 359"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 1573.4136442306071;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<string> commands = {"forward 10", "backward 10", "left 300", "right 300"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 9.999999999999998;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<string> commands = {"forward 100", "backward 100", "left 210", "right 30", "right 15"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 200.0;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<string> commands = {"forward 100", "backward 100", "left 90", "right 270"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 200.0;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<string> commands = {"forward 1", "backward 1000", "left 36", "right 45", "left 36", "right 68", "left 89", "forward 79", "backward 32", "left 99", "right 199", "left 187", "right 99", "forward 996", "left 56", "backward 569", "left 34", "right 359", "forward 23", "right 229", "left 299", "backward 54", "right 58", "right 88", "forward 987", "backward 985", "right 90", "left 211"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 4726.0;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<string> commands = {"left 3", "left 6", "left 8", "right 190", "right 185", "right 182", "forward 1000", "backward 40"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 1040.0;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<string> commands = {"forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "right 90", "backward 1000"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 48010.41553663122;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<string> commands = {"forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "backward 1000", "left 90"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 48010.41553663122;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<string> commands = {"right 3", "left 355", "right 4", "right 4", "right 4", "right 4", "right 4", "right 4", "right 4", "right 4", "right 4", "right 4", "right 4", "right 4", "right 4", "right 4", "right 4", "right 4", "right 4", "right 4", "right 4", "right 4", "right 4", "right 4", "right 4", "right 4", "right 4", "right 4", "right 4", "right 4", "right 4", "right 4", "right 4", "right 4", "right 4", "right 4", "right 4", "right 4", "right 4", "right 4", "right 4", "right 4", "right 4", "right 4", "right 4", "forward 50", "backward 40", "forward 50", "backward 40"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 180.0;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<string> commands = {"forward 1000", "left 90", "left 90", "left 90", "backward 1000"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 2000.0;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<string> commands = {"right 100", "right 40", "forward 100", "backward 70"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 160.07692589397664;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<string> commands = {"right 259", "backward 428", "left 139", "right 204", "left 255", "forward 193", "backward 250"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 868.7146064302816;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<string> commands = {"left 270", "left 270", "left 270", "forward 1", "backward 1"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<string> commands = {"forward 100", "left 350", "left 350", "left 350", "left 350", "left 350", "left 350", "left 350", "left 350", "left 350", "left 350", "left 350", "left 350", "left 350", "left 350", "left 350", "backward 100"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 193.18516525781368;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<string> commands = {"left 50", "right 50", "left 50", "right 50", "left 50", "right 50", "left 50", "right 50", "left 50", "right 60", "left 60", "right 60", "left 60", "right 300", "left 200", "right 200", "left 300", "right 150", "left 150", "right 100", "left 100", "right 100", "left 100", "left 100", "right 50", "left 50", "right 50", "left 50", "right 30", "left 30", "right 30", "left 1", "right 1", "left 1", "right 1", "left 1", "right 1", "left 1", "right 1", "left 1", "right 1"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<string> commands = {"forward 1", "left 180", "left 1", "left 2", "backward 1"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<string> commands = {"right 252", "right 252", "right 252", "right 252", "right 252", "forward 50", "backward 40"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 90.0;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<string> commands = {"forward 100", "backward 100", "left 90", "right 270", "left 10", "left 10"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 200.0;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<string> commands = {"forward 2", "backward 1"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<string> commands = {"backward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 48000.0;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<string> commands = {"left 45", "left 45", "right 45", "left 45", "left 45", "left 45", "left 45", "left 45", "left 45", "left 45", "left 45", "left 45", "left 45", "left 45", "left 45", "left 45", "left 45", "left 45", "left 45", "left 45", "left 45", "left 45", "left 45", "left 45", "left 45", "left 45", "left 45", "left 45", "left 45", "left 45", "left 45", "left 45", "left 45", "left 45", "left 45", "left 45", "left 45", "left 45", "left 45", "left 45", "left 45", "left 45", "left 45", "left 45", "left 45", "left 45", "left 45", "left 45", "left 45", "forward 1"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<string> commands = {"forward 100", "backward 200", "left 270", "right 90", "left 45"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 300.0;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<string> commands = {"forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "backward 1000", "right 90"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 48010.41553663122;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<string> commands = {"forward 10", "backward 100"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 90.0;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<string> commands = {"left 270", "right 90", "right 1", "right 1", "right 1", "right 1", "right 1", "right 1", "right 1", "right 1", "right 1", "right 1", "right 1", "right 1", "right 1", "right 1", "right 1", "right 1", "right 1", "right 1", "right 1", "right 1", "right 1", "right 1", "right 1", "right 1", "right 1", "right 1", "right 1", "right 1", "right 1", "right 1", "right 1", "right 1", "right 1", "right 1", "right 1", "right 1", "right 1", "right 1", "forward 1000", "backward 1000", "forward 1000", "backward 1000", "forward 1000", "backward 1000", "forward 1000", "backward 1000", "forward 1000", "backward 1000"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 10000.0;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<string> commands = {"forward 10", "right 135", "backward 100"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 107.30430355942438;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<string> commands = {"forward 100", "backward 100", "right 180", "right 180"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 200.0;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<string> commands = {"forward 1000", "backward 1000", "left 350", "left 350", "left 350", "left 350", "left 350", "left 350", "left 350", "left 350", "left 350", "left 350", "left 350", "left 350", "left 350", "left 350", "left 350", "left 350", "left 350", "left 350"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 2000.0;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<string> commands = {"right 300", "left 30", "forward 200", "backward 200"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 282.842712474619;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<string> commands = {"backward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "left 22", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "right 118", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 47477.68240870519;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<string> commands = {"forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "forward 1000", "backward 999", "right 27"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 47112.067576197915;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<string> commands = {"backward 100"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 100.0;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<string> commands = {"backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000", "backward 1000"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 50000.0;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<string> commands = {"forward 5", "backward 8"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<string> commands = {"forward 50", "backward 50", "left 90", "left 90", "left 90", "left 90"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 100.0;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    vector<string> commands = {"forward 100", "backward 100", "left 300", "right 30", "right 40", "right 90"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 200.0;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    vector<string> commands = {"forward 50", "backward 50", "right 60", "right 60"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 86.60254037844386;
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    vector<string> commands = {"forward 1", "backward 2"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    vector<string> commands = {"forward 1"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    vector<string> commands = {"forward 10", "backward 10", "right 270", "right 270"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 20.0;
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    vector<string> commands = {"backward 1", "backward 1", "backward 1", "left 1", "left 1", "right 1", "right 1", "left 1", "left 1", "right 1", "left 1", "forward 1", "forward 5", "forward 4", "forward 4", "forward 5", "left 1", "left 1", "left 1", "left 1", "left 1", "left 1", "left 1", "left 1", "left 1", "forward 10", "forward 10", "backward 10", "backward 10", "backward 10", "forward 10", "forward 10", "left 1", "left 1", "left 1", "forward 1", "forward 10"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 39.63422797848818;
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    vector<string> commands = {"forward 10", "backward 10", "left 179", "left 1"};
    TurtleSpy* pObj = new TurtleSpy();
    clock_t start = clock();
    double result = pObj->maxDistance(commands);
    clock_t end = clock();
    delete pObj;
    double expected = 20.0;
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22691397&rd=14729&pm=11704
********************************************************************************
#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
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
#include <cstring>
#include <cassert>
 
using namespace std;
 
#define FORE(i,c) for(__typeof(c.begin()) i=(c.begin());i!=(c).end();++i)
#define ZERO(x) memset(x,0,sizeof(x))
 
class TurtleSpy {
public:
   double maxDistance( vector <string> commands ) {
       int sumForward = 0;
       int sumBackward = 0;
       static bool dp[360];
       ZERO(dp);
       dp[0] = true;
       FORE (it, commands) {
           stringstream ss(*it);
           string com;
           int val;
           ss >> com >> val;
           if (com == "forward") {
               sumForward += val;
           } else if (com == "backward") {
               sumBackward += val;
           } else {
               if (com == "left") {
                   val = 360 - val;
               }
               static bool nx[360];
               ZERO(nx);
               for (int i = 0; i < 360; ++i) {
                   nx[i] = dp[i] | dp[(i + val) % 360];
               }
               for (int i = 0; i < 360; ++i) {
                   dp[i] = nx[i];
               }
           }
       }
       double pi = 2 * acos(0);
       double res = abs(sumForward - sumBackward);
       for (int i = 0; i < 360; ++i) {
           if (dp[i]) {
               double a = sumForward;
               double b = sumBackward;
               double c = a * a + b * b - 2 * a * b * cos(i / 180.0 * pi);
               res = max(res, sqrt(c));
           }
       }
       return res;
   }
};
 
 
 
// Powered by FileEdit
// Powered by moj 4.16 [modified TZTester]
 
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/