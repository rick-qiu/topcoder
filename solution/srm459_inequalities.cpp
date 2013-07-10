/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10682
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

class Inequalities {
public:
    int maximumSubset(vector<string> inequalities);
};

int Inequalities::maximumSubset(vector<string> inequalities) {
    int ret;
    return ret;
}


int test0() {
    vector<string> inequalities = {"X <= 12", "X = 13", "X > 9", "X < 10", "X >= 14"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> inequalities = {"X < 0", "X <= 0"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> inequalities = {"X = 1", "X = 2", "X = 3", "X > 0"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> inequalities = {"X <= 521", "X >= 521", "X = 521", "X > 902", "X > 12", "X <= 1000"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> inequalities = {"X = 0"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> inequalities = {"X > 1000", "X > 998", "X > 0"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> inequalities = {"X < 10", "X >= 10"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> inequalities = {"X <= 10", "X >= 10"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> inequalities = {"X >= 7", "X > 7", "X > 8", "X > 9", "X < 11", "X >= 8"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> inequalities = {"X >= 999", "X < 1000", "X <= 1000", "X <= 51", "X = 49", "X >= 0", "X > 13", "X < 666"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> inequalities = {"X <= 368", "X = 828", "X = 852", "X < 823", "X = 514", "X <= 378", "X <= 939", "X < 87", "X > 655", "X < 851", "X = 101", "X > 483", "X < 350", "X > 447", "X <= 616"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> inequalities = {"X > 532", "X >= 27", "X = 779", "X > 92", "X > 151", "X <= 314", "X <= 73", "X < 290", "X < 172", "X = 374", "X <= 141", "X >= 199"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> inequalities = {"X = 0", "X < 6", "X <= 7", "X > 9", "X >= 4", "X > 8", "X >= 0", "X >= 1", "X < 5", "X = 1", "X < 8", "X = 5", "X < 7", "X > 3", "X >= 7", "X >= 5", "X >= 2", "X < 0", "X <= 3", "X > 2", "X > 0", "X <= 6", "X <= 9", "X >= 6", "X < 4", "X >= 3", "X = 7", "X = 8", "X < 2", "X <= 5"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> inequalities = {"X = 3", "X > 1", "X < 5", "X <= 0", "X > 5", "X = 9", "X <= 6", "X >= 5", "X < 8", "X < 4", "X >= 4", "X <= 1", "X <= 8", "X < 9", "X = 7", "X > 3", "X <= 3", "X > 2", "X <= 7", "X <= 9", "X >= 6", "X >= 0", "X <= 2", "X = 1", "X < 2", "X <= 4", "X < 0", "X > 4", "X <= 5", "X = 4", "X > 0", "X = 5", "X < 7", "X = 0", "X >= 7", "X < 6", "X > 9", "X > 8", "X = 6", "X > 7", "X > 6", "X = 8", "X >= 1", "X >= 3", "X >= 8", "X < 3", "X < 1", "X = 2", "X >= 2", "X >= 9"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> inequalities = {"X <= 613", "X <= 335", "X >= 474", "X < 415", "X < 267", "X < 470", "X = 741", "X >= 230", "X >= 539", "X = 375", "X = 468", "X < 204", "X > 517", "X >= 705", "X = 345", "X >= 372", "X >= 512", "X >= 202", "X < 675", "X < 319"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> inequalities = {"X < 691", "X = 719", "X < 732", "X = 636", "X <= 645", "X > 567", "X = 617", "X = 680", "X > 592", "X <= 611", "X > 615", "X = 614", "X < 724", "X >= 666", "X < 566", "X < 674", "X >= 719", "X <= 664", "X < 696", "X = 688", "X = 650"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> inequalities = {"X <= 850", "X > 207", "X = 612", "X = 338", "X > 785", "X = 267", "X >= 960", "X > 209", "X > 11", "X <= 474", "X <= 276", "X <= 399", "X > 258", "X <= 213", "X = 642", "X = 399", "X <= 872", "X < 211", "X = 649", "X > 546", "X < 75", "X = 691", "X >= 142", "X >= 693", "X < 353", "X >= 887"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> inequalities = {"X <= 412", "X <= 258", "X < 399", "X = 511", "X < 772", "X <= 411", "X > 176", "X = 255", "X < 560", "X < 534", "X = 821", "X < 921", "X <= 618", "X = 595", "X > 359", "X <= 907", "X < 460", "X < 546", "X >= 917", "X = 131", "X < 592", "X >= 634", "X <= 190", "X = 870", "X = 353", "X > 910", "X = 23", "X >= 144", "X < 10", "X < 455", "X >= 65", "X = 635", "X > 255", "X = 609", "X >= 262", "X >= 787"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> inequalities = {"X >= 972", "X >= 5", "X >= 263", "X = 873", "X >= 900", "X < 511", "X >= 863", "X > 717", "X <= 436", "X < 829", "X <= 634", "X < 699", "X >= 193", "X >= 517", "X > 448", "X > 32", "X = 826", "X < 204", "X <= 253", "X < 435", "X < 928", "X = 878", "X > 408", "X > 688", "X >= 541", "X > 426", "X = 802", "X >= 630", "X > 618", "X > 51", "X <= 428", "X < 110", "X < 500", "X <= 527", "X = 950", "X < 430", "X = 191", "X = 325", "X >= 342", "X >= 742", "X <= 341"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> inequalities = {"X < 8", "X > 665", "X < 161", "X = 461", "X > 602", "X > 743", "X > 403", "X < 669", "X <= 799", "X >= 156", "X > 109", "X > 499", "X > 913", "X >= 81", "X < 425", "X <= 35", "X > 65", "X <= 893", "X <= 120", "X < 793", "X >= 275", "X >= 955", "X < 383", "X <= 847", "X > 902", "X <= 933", "X >= 543", "X = 742", "X > 178", "X >= 715", "X > 520", "X <= 66", "X = 580", "X < 232", "X < 5", "X >= 80", "X >= 71", "X > 765", "X > 350", "X >= 203", "X <= 385", "X < 684", "X = 459", "X >= 561", "X < 991", "X > 325", "X >= 812", "X >= 929", "X < 759"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> inequalities = {"X < 920", "X > 916", "X > 961", "X <= 957", "X >= 966", "X = 980", "X >= 932", "X > 990", "X < 977", "X > 912", "X >= 925", "X = 941", "X >= 973", "X < 909", "X = 921", "X < 943", "X >= 934", "X < 914", "X >= 922", "X = 957", "X >= 976", "X > 941", "X = 960", "X <= 960", "X <= 955", "X < 971", "X >= 936", "X = 956", "X > 935", "X < 941", "X >= 996", "X < 957", "X > 931", "X < 968", "X = 939", "X < 997", "X >= 961", "X > 997", "X = 915", "X = 935", "X < 972", "X <= 918", "X <= 961", "X >= 983", "X >= 953", "X < 967", "X >= 915", "X < 958", "X > 959", "X = 914"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> inequalities = {"X <= 98", "X <= 11", "X > 72", "X > 35", "X > 75", "X <= 86", "X < 30", "X < 0", "X > 44", "X > 60", "X = 1", "X > 68", "X > 36", "X < 94", "X > 17", "X <= 97", "X > 89", "X > 58", "X <= 72", "X > 98", "X >= 65", "X > 65", "X >= 55", "X <= 92", "X > 63", "X <= 21", "X < 72", "X <= 14", "X <= 61", "X > 96", "X > 32", "X > 61", "X > 74", "X < 69", "X < 12", "X = 80", "X > 31", "X > 38", "X > 16", "X > 8", "X > 33", "X >= 53", "X >= 1", "X > 52", "X = 75", "X < 75", "X > 73", "X <= 8", "X > 43", "X > 93"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> inequalities = {"X > 728", "X = 869", "X > 310", "X = 682", "X > 812", "X > 319", "X > 268", "X > 590", "X > 727", "X > 132", "X > 490", "X > 112", "X <= 142", "X > 607", "X > 297", "X > 798", "X > 888", "X > 969", "X > 929", "X > 343", "X > 813", "X > 626", "X > 106", "X > 83", "X > 902", "X > 494", "X > 852", "X > 253", "X > 859", "X > 700", "X > 876", "X > 452", "X = 606", "X > 269", "X <= 470", "X > 241", "X > 309", "X > 726", "X > 609", "X > 111", "X > 340", "X > 912", "X > 74", "X > 264", "X <= 739", "X > 212", "X > 697", "X > 766", "X > 835", "X > 725"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> inequalities = {"X <= 849", "X <= 667", "X <= 962", "X <= 481", "X <= 927", "X <= 563", "X <= 171", "X <= 96", "X <= 151", "X <= 223", "X <= 583", "X <= 412", "X <= 77", "X <= 911", "X <= 368", "X <= 431", "X <= 842", "X <= 912", "X <= 798", "X <= 969", "X <= 400", "X <= 914", "X <= 373", "X <= 78", "X <= 90", "X <= 33", "X <= 641", "X <= 432", "X < 636", "X <= 160", "X < 0", "X >= 1"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> inequalities = {"X < 664", "X = 328", "X = 337", "X = 545", "X < 783", "X = 115", "X = 577", "X = 644", "X = 218", "X < 409", "X < 728", "X = 29", "X = 140", "X = 223", "X < 51", "X = 197", "X < 237", "X = 693", "X = 869", "X = 249", "X = 457", "X = 936", "X = 515", "X = 377", "X = 434", "X = 265", "X = 116", "X = 338", "X = 355", "X = 287", "X = 251", "X = 798", "X = 827", "X = 36", "X = 325", "X = 101", "X < 461", "X < 730", "X = 476", "X = 283", "X = 132", "X = 141", "X < 454", "X = 745", "X = 66"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> inequalities = {"X < 111", "X < 149", "X < 130", "X > 4", "X < 198", "X < 23", "X < 66", "X < 176", "X < 16", "X > 120", "X < 75", "X > 28", "X < 157", "X > 6", "X > 148", "X > 186", "X > 88", "X < 96", "X < 89", "X > 191", "X > 101", "X < 169", "X < 62", "X < 142", "X < 54", "X > 21", "X < 10", "X < 100", "X < 52", "X < 137", "X > 143", "X < 172", "X < 569", "X < 117", "X < 12", "X < 59", "X < 171", "X > 53", "X > 197", "X < 20", "X > 119", "X < 42"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> inequalities = {"X < 176", "X = 27", "X < 223", "X < 74", "X = 201", "X >= 106", "X = 182", "X = 62", "X >= 256", "X < 291", "X <= 172", "X > 184", "X > 180", "X >= 122", "X < 155", "X > 27", "X = 248", "X < 75", "X > 37", "X > 45", "X = 106", "X >= 261", "X >= 296", "X < 207", "X > 120", "X > 222", "X = 155", "X > 288", "X >= 96", "X >= 185", "X >= 300", "X <= 39", "X >= 249", "X <= 195", "X < 162", "X > 1", "X > 2", "X > 3", "X <= 402"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> inequalities = {"X > 994", "X > 995", "X > 996", "X > 997", "X > 998", "X > 999", "X > 1000", "X <= 532", "X < 999"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> inequalities = {"X > 5", "X > 6", "X > 7", "X > 8", "X > 9", "X > 10", "X >= 10", "X > 11", "X > 12", "X < 90", "X < 89", "X < 88", "X < 80", "X < 21", "X < 60", "X < 61", "X < 62", "X < 63", "X < 70", "X > 80", "X > 251"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> inequalities = {"X < 50", "X < 49", "X < 51", "X < 52", "X < 53", "X < 54", "X < 55", "X < 56", "X < 57", "X < 58", "X < 59", "X < 60", "X <= 60", "X >= 55", "X > 123", "X > 124", "X > 125", "X > 127", "X > 126", "X > 133", "X > 128", "X > 129", "X = 212", "X = 213", "X = 214", "X <= 666", "X = 0"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> inequalities = {"X < 5", "X < 6", "X < 7", "X < 8", "X < 9", "X < 10", "X <= 10", "X < 11", "X < 12", "X > 90", "X > 89", "X > 88", "X > 80", "X > 21", "X > 60", "X > 61", "X > 62", "X > 63", "X > 70", "X < 80", "X < 251"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> inequalities = {"X <= 242", "X < 27", "X > 80", "X <= 213", "X >= 32", "X < 211", "X >= 237", "X < 171", "X > 23", "X = 43", "X > 200", "X >= 172", "X = 197", "X >= 45", "X >= 112", "X <= 204", "X < 183", "X = 217", "X <= 187", "X <= 29", "X = 152", "X <= 110", "X >= 188", "X <= 157", "X <= 143", "X <= 235", "X >= 150", "X <= 229", "X = 242", "X < 199", "X < 179", "X > 65", "X < 48", "X >= 75", "X <= 230", "X <= 121", "X > 44", "X >= 110", "X < 231", "X > 243", "X < 73", "X = 54", "X > 240", "X = 211", "X > 250", "X = 147", "X >= 54", "X < 139"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> inequalities = {"X < 430", "X = 288", "X > 367", "X >= 371", "X = 152", "X > 318", "X >= 228", "X > 507", "X < 494", "X < 551", "X < 245", "X <= 451", "X > 475", "X = 564", "X > 175", "X <= 438", "X > 394", "X > 482", "X >= 385", "X = 261", "X <= 491", "X <= 430", "X < 404", "X = 216", "X >= 559", "X < 515", "X <= 429", "X >= 368", "X > 409", "X > 256", "X = 310", "X >= 219", "X = 263", "X > 202", "X > 185", "X <= 304", "X < 436", "X < 171", "X > 209", "X > 503", "X < 335", "X > 242", "X >= 367", "X < 439", "X >= 302", "X > 305"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> inequalities = {"X = 213", "X = 383", "X <= 541", "X <= 209", "X <= 566", "X > 295", "X > 335", "X <= 476", "X <= 246", "X > 252", "X >= 158", "X <= 361", "X >= 363", "X < 253", "X >= 505", "X <= 244", "X < 387", "X >= 242", "X = 323", "X <= 425", "X > 336", "X > 182", "X > 457", "X = 234", "X < 427", "X > 143", "X >= 437", "X > 228", "X < 290", "X <= 562", "X <= 523", "X = 150", "X < 461", "X > 330", "X <= 296", "X = 255", "X >= 361", "X <= 223", "X >= 402", "X < 383", "X >= 171", "X < 363", "X = 389", "X > 209", "X = 495", "X < 437", "X > 230", "X <= 159", "X > 329", "X > 288"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> inequalities = {"X <= 691", "X < 744", "X > 700", "X < 759", "X > 735", "X <= 709", "X > 751", "X <= 729", "X <= 700", "X > 771", "X > 727", "X < 768", "X <= 759", "X <= 745", "X > 731", "X <= 717", "X <= 753", "X < 693", "X >= 672", "X >= 761", "X > 729", "X > 767", "X < 716", "X > 770", "X >= 757", "X <= 680", "X <= 724", "X <= 721", "X > 703", "X <= 678", "X >= 744", "X > 746", "X >= 745", "X > 666", "X < 684", "X >= 669", "X <= 718", "X >= 723"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> inequalities = {"X > 722", "X < 695", "X < 741", "X > 683", "X < 769", "X <= 705", "X < 714", "X <= 733", "X <= 671", "X > 730", "X <= 703", "X >= 748", "X > 668", "X <= 676", "X >= 752", "X < 707", "X >= 685", "X > 745", "X < 738", "X < 713", "X <= 752", "X < 701", "X <= 763", "X < 669", "X > 697", "X <= 706", "X <= 774", "X <= 728", "X >= 719", "X >= 670", "X <= 767", "X > 775", "X > 716", "X <= 770", "X < 698", "X > 714", "X < 689", "X <= 693", "X <= 756", "X <= 725", "X >= 743", "X > 767", "X <= 777", "X > 762", "X > 761", "X < 726", "X < 773", "X > 698", "X < 758", "X <= 702"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> inequalities = {"X < 754", "X > 115", "X >= 39", "X <= 619", "X >= 399", "X <= 764", "X <= 432", "X > 498", "X < 246", "X > 850", "X >= 722", "X <= 340", "X >= 997", "X >= 811", "X < 669", "X > 685", "X > 199", "X >= 938", "X >= 529", "X < 123", "X >= 360", "X >= 643", "X >= 290", "X > 417", "X > 178", "X <= 808", "X > 95", "X <= 450", "X > 485", "X > 705", "X > 397", "X >= 62", "X >= 606", "X > 581", "X < 565", "X >= 597", "X < 425", "X <= 708", "X <= 15", "X >= 31", "X < 582", "X < 682", "X >= 213", "X > 925", "X > 595", "X < 920", "X > 980", "X >= 930", "X > 777", "X >= 408"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> inequalities = {"X < 0", "X < 8", "X < 6", "X < 9", "X < 12", "X < 15", "X < 18", "X < 21", "X < 24", "X < 27", "X < 30", "X < 33", "X < 36", "X < 39", "X < 42", "X < 45", "X < 48", "X < 11", "X < 54", "X < 57", "X < 60", "X < 63", "X < 66", "X < 69", "X < 72", "X < 75", "X < 78", "X < 81", "X < 84", "X < 87", "X < 90", "X < 93", "X < 96", "X < 95", "X < 102", "X < 105", "X < 108", "X < 111", "X < 114", "X < 117", "X < 120", "X < 123", "X < 126", "X < 121", "X < 132", "X < 135", "X < 138", "X < 141", "X < 144", "X < 147"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> inequalities = {"X >= 68", "X >= 70", "X > 72", "X >= 74", "X >= 76", "X > 78", "X > 80", "X > 82", "X > 84", "X >= 86", "X > 88", "X >= 90", "X >= 92", "X >= 94", "X >= 96", "X >= 98", "X > 100", "X > 102", "X > 104", "X >= 106", "X >= 108", "X > 110", "X > 112", "X > 114", "X > 116", "X > 118", "X >= 120", "X >= 122", "X >= 124", "X >= 126", "X > 128", "X >= 130", "X >= 132", "X > 134", "X >= 136", "X > 138", "X > 140", "X > 142", "X >= 144", "X >= 146", "X > 148", "X >= 150", "X >= 152", "X >= 154", "X > 156", "X > 158", "X > 160", "X > 162", "X >= 164", "X >= 166"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> inequalities = {"X >= 0", "X < 3", "X < 6", "X < 9", "X < 12", "X < 15", "X < 18", "X < 21", "X < 24", "X > 27", "X <= 30", "X < 33", "X < 36", "X < 39", "X < 42", "X < 45", "X < 48", "X < 51", "X < 54", "X < 57", "X < 60", "X < 63", "X < 66", "X < 69", "X < 72", "X < 75", "X < 78", "X < 81", "X < 84", "X < 87", "X < 90", "X < 93", "X < 96", "X < 99", "X < 102", "X < 105", "X < 108", "X < 111", "X < 114", "X < 117", "X < 120", "X < 123", "X < 126", "X < 129", "X < 132", "X > 535", "X <= 138", "X <= 141", "X < 144", "X < 147"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> inequalities = {"X = 1", "X = 2", "X = 3", "X > 0"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> inequalities = {"X > 1000"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> inequalities = {"X <= 12", "X = 13", "X > 9", "X < 10", "X >= 14"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> inequalities = {"X <= 521", "X >= 521", "X = 521", "X > 902", "X > 12", "X <= 1000"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> inequalities = {"X < 0", "X < 1", "X < 2", "X < 3", "X > 999", "X < 1000"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> inequalities = {"X < 0", "X <= 0"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> inequalities = {"X > 0", "X > 1", "X < 2", "X < 3"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> inequalities = {"X < 1", "X > 0"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> inequalities = {"X = 1", "X = 2", "X = 3", "X > 0", "X < 0"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> inequalities = {"X > 0", "X < 0"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> inequalities = {"X <= 4", "X > 4"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> inequalities = {"X > 1", "X < 2"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> inequalities = {"X = 1000"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> inequalities = {"X <= 521", "X >= 521", "X = 521", "X > 902", "X > 12", "X <= 1000", "X < 0", "X >= 100", "X >= 300", "X < 999", "X < 100"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> inequalities = {"X < 1", "X < 0", "X < 2", "X < 3", "X < 4"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> inequalities = {"X <= 0"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> inequalities = {"X > 9", "X < 9"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> inequalities = {"X <= 1000", "X = 1000", "X > 1000", "X < 10", "X >= 1000"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> inequalities = {"X > 9", "X < 10"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> inequalities = {"X = 784", "X <= 248", "X >= 913", "X < 462", "X > 995", "X > 212", "X > 611", "X > 605", "X < 671", "X = 657", "X >= 883", "X <= 395", "X <= 995", "X = 211", "X = 287", "X > 277", "X = 148", "X >= 305", "X >= 82", "X < 171", "X >= 297"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> inequalities = {"X > 0", "X > 1"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> inequalities = {"X > 12", "X < 13"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> inequalities = {"X < 5", "X <= 5", "X = 5"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> inequalities = {"X > 1000", "X >= 1000"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> inequalities = {"X > 1000", "X < 1000"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> inequalities = {"X < 10", "X <= 10", "X >= 10"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> inequalities = {"X >= 13", "X < 13"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> inequalities = {"X < 3", "X > 3"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> inequalities = {"X > 5", "X >= 4", "X < 5", "X <= 6"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> inequalities = {"X < 2", "X = 3"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> inequalities = {"X > 0", "X < 1"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> inequalities = {"X < 1", "X > 1"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> inequalities = {"X <= 1", "X >= 2"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> inequalities = {"X >= 139", "X <= 279", "X >= 426", "X <= 906", "X >= 160", "X <= 741", "X >= 831", "X <= 744", "X >= 266", "X <= 181", "X >= 886", "X <= 362", "X >= 898", "X <= 423", "X >= 154", "X <= 985", "X >= 251", "X <= 696", "X >= 45", "X <= 287", "X >= 776", "X <= 463", "X >= 677", "X <= 532", "X >= 999", "X <= 115", "X >= 861", "X <= 331", "X >= 555", "X <= 234", "X >= 762", "X <= 965", "X >= 313", "X <= 344", "X >= 224", "X <= 242", "X >= 599", "X <= 791", "X >= 799", "X <= 107", "X >= 181", "X <= 145", "X >= 530", "X <= 647", "X >= 969", "X <= 932", "X >= 177", "X <= 724", "X >= 461", "X <= 579"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> inequalities = {"X < 0"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> inequalities = {"X = 10"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> inequalities = {"X > 6", "X < 7"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> inequalities = {"X < 1", "X >= 1"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> inequalities = {"X >= 2", "X < 2"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> inequalities = {"X = 151", "X > 474", "X <= 407", "X <= 439", "X <= 960", "X > 22", "X < 27", "X = 901", "X > 279", "X > 147", "X <= 8", "X > 763", "X <= 373", "X > 73", "X > 458", "X > 732", "X >= 466", "X > 831", "X >= 488", "X < 15", "X <= 50", "X > 989", "X >= 907", "X = 162", "X >= 966", "X <= 313", "X <= 107", "X = 276", "X < 677", "X > 761", "X <= 942", "X < 709", "X <= 157", "X = 650", "X = 53", "X >= 462", "X <= 677", "X = 897", "X < 469", "X <= 182", "X = 189", "X >= 985", "X = 320", "X >= 154", "X = 983", "X < 37"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> inequalities = {"X <= 1", "X <= 2", "X <= 3", "X <= 4", "X <= 5", "X <= 6", "X <= 7", "X <= 8", "X <= 9", "X <= 10", "X <= 11", "X <= 12", "X <= 13", "X <= 14", "X <= 15", "X <= 16", "X <= 17", "X <= 18", "X <= 19", "X <= 31", "X <= 32", "X <= 33", "X <= 34", "X <= 35", "X <= 36", "X <= 37", "X <= 38", "X <= 39", "X <= 310", "X <= 311", "X <= 312", "X <= 313", "X <= 314", "X <= 315", "X <= 316", "X <= 317", "X <= 318", "X <= 319", "X <= 419", "X <= 110", "X <= 21", "X <= 22", "X <= 23", "X <= 24", "X <= 25", "X <= 26", "X <= 27", "X <= 28", "X <= 29", "X <= 210"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> inequalities = {"X > 4", "X < 5"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> inequalities = {"X = 2", "X > 2"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> inequalities = {"X < 2", "X > 1", "X < 3", "X > 2"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> inequalities = {"X <= 521", "X >= 521", "X = 521", "X > 902", "X > 12", "X <= 522"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> inequalities = {"X < 47", "X > 59", "X > 90", "X = 68", "X = 84", "X < 2"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> inequalities = {"X <= 1", "X = 2"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> inequalities = {"X = 1", "X = 2"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> inequalities = {"X >= 1000", "X >= 999", "X >= 998", "X >= 997", "X >= 996", "X >= 995", "X >= 994", "X >= 993", "X >= 992", "X >= 991", "X >= 990", "X >= 989", "X >= 988", "X >= 987", "X >= 986", "X >= 985", "X >= 984", "X >= 983", "X >= 982", "X >= 981", "X >= 980", "X >= 979", "X >= 978", "X >= 977", "X >= 976", "X >= 975", "X >= 974", "X >= 973", "X >= 972", "X >= 971", "X >= 970", "X >= 969", "X >= 968", "X >= 967", "X >= 966", "X >= 965", "X >= 964", "X >= 963", "X >= 962", "X >= 961", "X >= 960", "X >= 959", "X >= 958", "X >= 957", "X >= 956", "X >= 955", "X >= 954", "X >= 953", "X >= 952", "X >= 951"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> inequalities = {"X >= 372", "X <= 372"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> inequalities = {"X = 1", "X = 2", "X = 3", "X > 0", "X >= 1000", "X > 1000", "X = 1000", "X <= 999", "X < 999", "X = 999", "X > 998", "X > 999", "X >= 999", "X > 997", "X >= 997", "X = 5", "X = 6", "X = 7", "X > 8", "X >= 990", "X > 990", "X = 990", "X <= 991", "X < 991", "X = 991", "X > 992", "X > 979", "X >= 979", "X > 920", "X >= 920", "X > 890", "X = 890", "X <= 891", "X < 891", "X = 891", "X > 892", "X > 879", "X >= 879", "X > 820", "X >= 820"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> inequalities = {"X >= 500", "X >= 501", "X >= 502", "X >= 503", "X >= 504", "X >= 505", "X >= 506", "X >= 507", "X >= 508", "X >= 509", "X >= 510", "X >= 511", "X >= 512", "X >= 513", "X >= 514", "X >= 515", "X >= 516", "X >= 517", "X >= 518", "X >= 519", "X >= 520", "X >= 521", "X >= 522", "X >= 523", "X >= 524", "X >= 525", "X >= 526", "X >= 527", "X >= 528", "X >= 529", "X >= 530", "X >= 531", "X >= 532", "X >= 533", "X >= 534", "X >= 535", "X >= 536", "X >= 537", "X >= 538", "X >= 539", "X >= 540", "X >= 541", "X >= 542", "X >= 543", "X >= 544", "X >= 545", "X >= 546", "X >= 547", "X >= 548"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> inequalities = {"X > 0", "X = 0"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> inequalities = {"X < 1", "X >= 1", "X >= 2"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> inequalities = {"X < 1", "X = 1"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> inequalities = {"X >= 8", "X < 8"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> inequalities = {"X > 5"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> inequalities = {"X >= 1000", "X > 1000"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> inequalities = {"X = 0", "X > 0", "X < 0", "X <= 0", "X >= 0"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> inequalities = {"X >= 10"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> inequalities = {"X > 10", "X < 10", "X > 3", "X < 3", "X < 31", "X < 32", "X < 33", "X < 34", "X < 35", "X < 36", "X < 37", "X < 38", "X < 39"};
    Inequalities* pObj = new Inequalities();
    clock_t start = clock();
    int result = pObj->maximumSubset(inequalities);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=15056181&rd=14145&pm=10682
********************************************************************************
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
 
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n) FOR(i,0,n)
#define ALL(a) (a).begin(),a.end()
#define SORT(a) sort(ALL(a))
#define SZ(a) ((int) a.size())
#define pb push_back
 
class Inequalities {
public:
  int maximumSubset(vector <string>);
};
 
int Inequalities::maximumSubset(vector <string> a) {
  int ans = 0;
  for (int x = -2; x <= 2002; ++x)
  {
    int res = 0;
    REP (i, SZ (a))
    {
      istringstream str (a[i]);
      string q, w;
      int e;
      str >> q >> w >> e;
      e *= 2;
      if (w == "<") res += (x < e); else
      if (w == "<=") res += (x <= e); else
      if (w == "=") res += (x == e); else
      if (w == ">") res += (x > e); else
      if (w == ">=") res += (x >= e);                        
    }
    ans = max (ans, res);
  }
  return ans;
}
 
 
//Powered by [KawigiEdit] 2.0!
 
//Powered by KawigiEdit 2.1.4 (beta) modified by pivanof!

********************************************************************************
*******************************************************************************/