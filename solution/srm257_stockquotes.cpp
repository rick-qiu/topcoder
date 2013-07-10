/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4706
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

class StockQuotes {
public:
    vector<string> report(vector<string> quotes);
};

vector<string> StockQuotes::report(vector<string> quotes) {
    vector<string> ret;
    return ret;
}


int test0() {
    vector<string> quotes = {"0 10 14", "1 9 16", "2 11 15", "0 11 13", "1 10 15", "2 12 14", "0 9 15", "2 8 20"};
    StockQuotes* pObj = new StockQuotes();
    clock_t start = clock();
    vector<string> result = pObj->report(quotes);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 3 4.00", "1 2 6.00", "2 3 6.00", "10 6 2.83"};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> quotes = {"1 68 72", "1 65 71", "0 64 77", "2 65 76", "1 65 77", "0 66 77", "5 64 77", "8 67 75", "1 67 74", "1 64 77"};
    StockQuotes* pObj = new StockQuotes();
    clock_t start = clock();
    vector<string> result = pObj->report(quotes);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 2 12.00", "1 5 8.40", "2 1 11.00", "5 1 13.00", "8 1 8.00", "10 7 7.71"};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> quotes = {"8 931 944", "8 926 946", "8 926 951", "8 928 953", "8 929 954"};
    StockQuotes* pObj = new StockQuotes();
    clock_t start = clock();
    vector<string> result = pObj->report(quotes);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"8 5 21.60", "10 5 21.60"};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> quotes = {"6 796 804", "0 796 802", "8 796 811", "7 791 809", "7 796 805", "9 793 805", "5 793 807", "8 794 803", "1 787 805", "5 786 802", "8 790 807", "6 793 803", "3 792 802", "6 790 802", "6 789 800", "8 796 805", "1 788 802", "8 790 801", "8 791 801", "8 790 803", "7 792 804", "2 790 801", "9 790 804", "2 791 802", "0 786 803", "1 786 799", "5 783 801", "2 792 800", "8 787 804", "1 792 806", "7 790 800", "6 791 802", "2 791 806"};
    StockQuotes* pObj = new StockQuotes();
    clock_t start = clock();
    vector<string> result = pObj->report(quotes);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 2 11.50", "1 4 14.75", "2 4 11.25", "3 1 10.00", "5 3 16.00", "6 5 10.40", "7 4 12.25", "8 8 12.63", "9 2 13.00", "10 6 6.83"};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> quotes = {"0 639 648", "9 640 651", "5 638 650", "9 637 651", "6 637 652", "8 638 653", "7 637 651", "6 635 652", "3 636 653", "1 634 653", "0 635 654", "4 635 654", "3 634 652", "0 635 655", "5 635 653"};
    StockQuotes* pObj = new StockQuotes();
    clock_t start = clock();
    vector<string> result = pObj->report(quotes);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 3 16.00", "1 1 19.00", "3 2 17.50", "4 1 19.00", "5 2 15.00", "6 2 16.00", "7 1 14.00", "8 1 15.00", "9 2 12.50", "10 5 10.20"};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> quotes = {"9 177 189", "2 176 188", "8 174 189", "4 177 188", "3 176 187", "2 178 188", "9 179 188", "5 175 191", "9 176 187", "1 177 189", "7 174 186", "0 173 189", "4 175 188", "7 174 189", "0 176 191", "5 176 191", "0 179 190", "2 175 191", "1 179 190", "7 179 191", "4 177 190", "8 179 191", "8 176 194", "9 176 191", "1 176 191", "2 175 193", "8 175 192", "3 177 190", "1 173 192", "5 176 193", "1 175 194", "6 174 194", "9 178 195", "5 176 194", "2 176 197", "8 175 197", "6 175 197", "2 174 196", "8 178 198", "9 177 196", "3 176 200"};
    StockQuotes* pObj = new StockQuotes();
    clock_t start = clock();
    vector<string> result = pObj->report(quotes);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 3 14.00", "1 5 15.20", "2 6 16.50", "3 3 16.00", "4 3 12.33", "5 4 16.50", "6 2 21.00", "7 3 13.00", "8 6 17.33", "9 6 13.83", "10 10 9.50"};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> quotes = {"2 711 730", "5 716 729", "7 711 734", "0 718 731", "5 713 731", "1 713 730"};
    StockQuotes* pObj = new StockQuotes();
    clock_t start = clock();
    vector<string> result = pObj->report(quotes);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 1 13.00", "1 1 17.00", "2 1 19.00", "5 2 15.50", "7 1 23.00", "10 4 13.75"};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> quotes = {"7 467 478", "6 462 483", "0 465 483", "3 462 484", "6 467 483", "6 467 479", "7 465 481", "6 468 484", "0 466 481", "9 467 480", "4 466 482", "8 467 478", "0 465 480", "5 464 475", "2 468 476", "7 468 476", "5 469 478", "0 466 476", "1 467 476", "0 469 479", "5 468 477", "7 470 475", "9 471 475", "5 468 475", "9 473 479", "5 473 477", "6 472 477", "6 467 478", "3 472 476", "7 471 476", "8 472 482", "6 471 483", "0 467 482", "4 471 479", "9 468 478", "4 466 485", "3 466 481", "1 468 483", "4 466 482", "0 470 484", "8 469 488", "4 468 485", "6 468 486"};
    StockQuotes* pObj = new StockQuotes();
    clock_t start = clock();
    vector<string> result = pObj->report(quotes);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 7 13.86", "1 2 12.00", "2 1 8.00", "3 3 13.67", "4 5 15.20", "5 5 8.00", "6 8 13.88", "7 5 9.00", "8 3 13.33", "9 4 8.25", "10 11 7.82"};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> quotes = {"3 375 383", "1 374 384", "8 376 384", "2 376 383", "8 376 385", "3 378 385", "4 377 382", "9 379 383", "5 379 384", "9 378 387", "7 376 389", "5 378 389", "4 379 389", "4 378 391", "3 375 389", "4 376 387", "2 374 387"};
    StockQuotes* pObj = new StockQuotes();
    clock_t start = clock();
    vector<string> result = pObj->report(quotes);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1 1 10.00", "2 2 10.00", "3 3 9.67", "4 4 9.75", "5 2 8.00", "7 1 13.00", "8 2 8.50", "9 2 6.50", "10 9 5.11"};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> quotes = {"6 690 701", "6 692 704", "0 688 707", "1 694 700", "7 693 704", "2 691 702", "3 694 701", "3 692 702", "8 693 703", "3 691 704", "4 698 702", "2 693 702", "8 698 706", "1 695 706", "8 694 706", "1 695 701", "9 698 702"};
    StockQuotes* pObj = new StockQuotes();
    clock_t start = clock();
    vector<string> result = pObj->report(quotes);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 1 19.00", "1 3 7.67", "2 2 10.00", "3 3 10.00", "4 1 4.00", "6 2 11.50", "7 1 11.00", "8 3 10.00", "9 1 4.00", "10 6 6.33"};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> quotes = {"8 734 748", "6 734 752", "1 738 746", "6 737 746", "1 734 751", "4 739 751", "7 735 751", "4 736 745", "1 733 746", "2 737 750", "0 738 747", "3 739 746", "7 737 748", "3 736 749", "9 740 749", "8 738 749", "9 738 750", "7 733 752", "2 738 748", "5 739 755", "5 733 748", "9 738 751", "1 733 752", "6 738 750", "2 738 754", "7 736 751", "3 735 752", "6 734 755", "5 733 749", "9 736 748", "1 734 748", "1 735 752", "2 732 754", "0 732 750", "7 731 751", "1 734 750"};
    StockQuotes* pObj = new StockQuotes();
    clock_t start = clock();
    vector<string> result = pObj->report(quotes);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 2 13.50", "1 7 14.86", "2 4 15.25", "3 3 12.33", "4 2 10.50", "5 3 15.67", "6 4 15.00", "7 5 16.20", "8 2 12.50", "9 4 11.50", "10 12 7.58"};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> quotes = {"7 789 799", "2 789 802", "8 787 803", "9 788 798", "8 790 807", "5 787 798", "7 783 804", "0 785 803", "8 790 806", "2 783 803", "7 781 805", "7 787 800", "9 781 799", "0 789 804", "8 780 805", "5 787 803", "0 785 808", "5 788 803", "5 787 807", "6 787 810", "6 791 804", "5 791 802", "6 790 799", "7 782 802", "9 784 800", "8 788 808", "9 786 802", "7 786 806", "9 780 808", "3 788 807", "9 783 806", "9 788 802", "3 791 806", "0 785 812", "2 790 811", "4 794 813", "7 788 810", "0 787 806", "5 782 811", "5 787 807", "2 786 810", "6 783 804", "3 787 807", "0 791 803", "3 783 810", "6 787 807", "3 785 806", "9 790 808", "1 784 800"};
    StockQuotes* pObj = new StockQuotes();
    clock_t start = clock();
    vector<string> result = pObj->report(quotes);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 6 19.00", "1 1 16.00", "2 4 19.50", "3 5 20.40", "4 1 19.00", "5 7 17.43", "6 5 17.20", "7 7 18.57", "8 5 18.80", "9 8 17.88", "10 13 9.00"};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> quotes = {"2 100 110", "5 107 114", "9 107 113", "1 106 113", "2 107 118", "8 103 113", "4 102 116", "3 105 113", "0 108 113", "0 101 115", "0 103 117", "5 104 113", "7 105 121", "8 104 119", "2 109 115", "7 104 116", "2 108 112", "3 103 120", "0 104 115", "9 109 116", "2 110 121", "6 106 115", "3 109 116", "3 104 119", "1 109 122", "9 108 120", "2 107 121", "3 108 118", "0 105 121"};
    StockQuotes* pObj = new StockQuotes();
    clock_t start = clock();
    vector<string> result = pObj->report(quotes);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 5 12.00", "1 2 10.00", "2 6 9.33", "3 5 11.40", "4 1 14.00", "5 2 8.00", "6 1 9.00", "7 2 14.00", "8 2 12.50", "9 3 8.33", "10 10 4.80"};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> quotes = {"3 965 977", "5 965 976", "6 963 973", "5 962 974", "4 968 974", "4 967 975", "6 968 973", "0 965 972", "5 971 974", "4 971 976", "6 969 976", "3 970 974", "7 969 973", "5 970 977", "6 967 977", "4 968 977", "3 966 973", "5 963 975", "8 966 974", "4 966 977", "3 963 972", "0 963 971", "1 961 977", "4 963 979", "9 962 979", "2 963 975", "4 964 980", "1 964 979", "9 961 978", "2 964 975", "3 965 977", "6 963 975", "8 963 974", "1 963 973", "7 960 974", "1 961 978"};
    StockQuotes* pObj = new StockQuotes();
    clock_t start = clock();
    vector<string> result = pObj->report(quotes);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 2 7.50", "1 4 14.50", "2 2 11.50", "3 5 8.80", "4 7 10.14", "5 5 9.00", "6 5 8.80", "7 2 9.00", "8 2 9.50", "9 2 17.00", "10 12 5.42"};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> quotes = {"0 873 885", "6 874 891", "1 872 891", "4 874 891", "1 871 882", "0 870 883", "0 870 887", "5 880 884", "1 876 884", "9 870 893", "5 869 889", "6 870 889", "4 873 887", "1 869 886", "0 871 895", "1 877 890", "5 869 893", "0 869 892", "8 874 893", "3 877 892", "6 874 896", "1 876 887", "8 877 892", "7 870 895", "4 874 892", "1 871 889", "1 871 891", "3 869 894", "9 869 889", "2 875 888", "0 874 890", "1 873 889", "0 871 891", "9 875 890", "5 871 887", "2 876 886"};
    StockQuotes* pObj = new StockQuotes();
    clock_t start = clock();
    vector<string> result = pObj->report(quotes);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 7 17.86", "1 9 14.78", "2 2 11.50", "3 2 20.00", "4 3 16.33", "5 4 16.00", "6 3 19.33", "7 1 25.00", "8 2 17.00", "9 3 19.33", "10 14 9.71"};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> quotes = {"2 778 793", "9 777 792", "1 774 790", "3 772 795", "5 773 795", "3 774 787", "6 774 793", "1 781 797", "1 774 792", "5 783 797", "1 782 796", "4 775 792", "1 778 795", "8 777 796", "1 779 796", "2 782 797", "0 783 797", "2 784 795", "2 778 789", "6 776 792", "5 777 797", "4 780 799", "8 782 797", "8 779 799", "3 777 800", "3 780 796", "1 778 793", "0 777 795"};
    StockQuotes* pObj = new StockQuotes();
    clock_t start = clock();
    vector<string> result = pObj->report(quotes);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 2 16.00", "1 7 16.14", "2 4 13.00", "3 4 18.75", "4 2 18.00", "5 3 18.67", "6 2 17.50", "8 3 18.00", "9 1 15.00", "10 11 8.27"};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> quotes = {"8 263 268", "0 264 269"};
    StockQuotes* pObj = new StockQuotes();
    clock_t start = clock();
    vector<string> result = pObj->report(quotes);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 1 5.00", "8 1 5.00", "10 2 4.50"};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> quotes = {"8 448 457", "6 447 455", "3 448 458", "6 447 459", "3 447 457"};
    StockQuotes* pObj = new StockQuotes();
    clock_t start = clock();
    vector<string> result = pObj->report(quotes);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"3 2 10.00", "6 2 10.00", "8 1 9.00", "10 3 8.33"};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> quotes = {"9 924 937", "5 928 941", "3 923 941", "4 927 939", "6 923 934", "1 920 939", "8 923 937", "8 922 936", "9 923 936", "5 922 939", "4 924 936", "2 925 936", "5 925 935", "3 921 937", "2 925 935", "9 925 938", "5 923 941", "5 923 940", "0 926 937", "9 927 935", "8 926 938", "7 926 937", "2 925 941", "8 925 939", "5 924 936", "5 925 937", "1 927 938", "3 927 940", "8 924 940", "1 929 937", "3 925 941", "6 930 936"};
    StockQuotes* pObj = new StockQuotes();
    clock_t start = clock();
    vector<string> result = pObj->report(quotes);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 1 11.00", "1 3 12.67", "2 3 12.33", "3 4 15.75", "4 2 12.00", "5 7 14.14", "6 2 8.50", "7 1 11.00", "8 5 14.00", "9 4 11.75", "10 10 7.90"};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> quotes = {"1 431 433", "2 425 440"};
    StockQuotes* pObj = new StockQuotes();
    clock_t start = clock();
    vector<string> result = pObj->report(quotes);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1 1 2.00", "2 1 15.00", "10 1 2.00"};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> quotes = {"0 499 506", "3 501 506", "4 502 505", "7 503 506", "5 501 508", "5 502 505", "9 500 504", "2 501 505", "0 502 508", "7 502 507", "7 502 508", "9 500 507", "8 499 505", "2 501 506", "3 498 505", "6 499 505", "5 499 504"};
    StockQuotes* pObj = new StockQuotes();
    clock_t start = clock();
    vector<string> result = pObj->report(quotes);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 2 6.50", "2 2 4.50", "3 2 6.00", "4 1 3.00", "5 3 5.00", "6 1 6.00", "7 3 4.67", "8 1 6.00", "9 2 5.50", "10 8 3.13"};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> quotes = {"6 612 617", "9 613 618", "4 611 617", "3 612 617", "4 610 616", "2 611 618", "1 608 617", "7 609 618", "4 610 618", "7 608 618", "0 610 619", "3 611 619", "6 609 621", "2 607 620", "5 609 621", "7 608 621", "6 608 622", "4 609 622", "2 609 621"};
    StockQuotes* pObj = new StockQuotes();
    clock_t start = clock();
    vector<string> result = pObj->report(quotes);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 1 9.00", "1 1 9.00", "2 3 10.67", "3 2 6.50", "4 4 8.25", "5 1 12.00", "6 3 10.33", "7 3 10.67", "9 1 5.00", "10 4 4.00"};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> quotes = {"8 67 73", "1 65 73", "7 66 74", "7 72 79", "2 67 80", "1 68 80", "7 68 80", "2 69 79", "4 66 78", "8 70 80", "0 68 77", "1 71 74", "3 71 79"};
    StockQuotes* pObj = new StockQuotes();
    clock_t start = clock();
    vector<string> result = pObj->report(quotes);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 1 9.00", "1 3 7.67", "2 2 11.50", "3 1 8.00", "4 1 12.00", "7 3 9.00", "8 2 8.00", "10 7 4.86"};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> quotes = {"8 437 442", "6 436 442", "5 436 440", "3 437 441", "5 436 441", "2 438 440", "8 438 443", "7 437 442", "2 439 442", "3 438 441", "9 437 441", "5 438 440", "4 437 441", "1 438 440"};
    StockQuotes* pObj = new StockQuotes();
    clock_t start = clock();
    vector<string> result = pObj->report(quotes);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1 1 2.00", "2 2 2.50", "3 2 3.50", "4 1 4.00", "5 3 3.67", "6 1 6.00", "7 1 5.00", "8 2 5.00", "9 1 4.00", "10 6 2.83"};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> quotes = {"9 295 304", "0 296 304", "9 295 306", "2 295 304", "3 295 304", "7 295 303", "4 297 301", "4 297 300", "0 296 302", "1 297 303", "1 298 301", "6 295 302", "1 295 305", "2 298 301", "9 296 303", "5 295 303", "4 294 306", "3 294 306", "0 297 303", "6 298 303", "2 296 303", "7 295 304", "8 295 307", "9 296 304", "4 295 305", "0 294 305", "0 295 302", "2 294 306", "0 295 303", "2 296 303", "8 297 305", "8 299 304", "9 297 306", "6 297 306", "9 299 306", "6 296 307", "1 296 306", "6 296 308"};
    StockQuotes* pObj = new StockQuotes();
    clock_t start = clock();
    vector<string> result = pObj->report(quotes);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 6 7.67", "1 4 7.25", "2 5 7.60", "3 2 10.50", "4 4 7.25", "5 1 8.00", "6 5 8.80", "7 2 8.50", "8 3 8.33", "9 6 8.50", "10 13 4.54"};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> quotes = {"3 488 495", "5 489 499", "1 492 495", "0 489 497", "3 492 494", "9 487 494", "4 486 498", "8 485 493", "4 491 498", "1 486 497", "4 489 496", "6 489 493", "5 489 498", "8 487 495"};
    StockQuotes* pObj = new StockQuotes();
    clock_t start = clock();
    vector<string> result = pObj->report(quotes);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 1 8.00", "1 2 7.00", "3 2 4.50", "4 3 8.67", "5 2 9.50", "6 1 4.00", "8 2 8.00", "9 1 7.00", "10 5 3.80"};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> quotes = {"5 449 460", "8 451 463", "4 450 461", "7 448 465", "6 449 466", "9 450 467", "3 448 466", "0 449 464", "7 450 465", "7 447 467", "4 447 467", "2 448 466", "8 450 468", "8 449 468"};
    StockQuotes* pObj = new StockQuotes();
    clock_t start = clock();
    vector<string> result = pObj->report(quotes);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 1 15.00", "2 1 18.00", "3 1 18.00", "4 2 15.50", "5 1 11.00", "6 1 17.00", "7 3 17.33", "8 3 16.33", "9 1 17.00", "10 3 10.00"};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> quotes = {"1 187 193", "8 188 194", "5 188 194", "3 188 195", "8 189 195", "7 189 194", "8 190 195", "3 189 194", "5 189 193", "5 189 194", "1 190 195", "5 190 195", "4 191 195"};
    StockQuotes* pObj = new StockQuotes();
    clock_t start = clock();
    vector<string> result = pObj->report(quotes);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1 2 5.50", "3 2 6.00", "4 1 4.00", "5 4 5.00", "7 1 5.00", "8 3 5.67", "10 6 4.17"};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> quotes = {"6 155 166", "8 150 161", "0 154 160", "1 148 168", "1 153 164", "0 154 165", "1 155 164", "6 153 163", "7 150 165", "0 145 167", "3 151 162", "7 146 166", "3 147 167", "9 152 168", "7 153 165", "0 150 161", "6 146 165", "2 147 168", "7 150 169", "5 149 166", "4 145 162", "9 144 167", "0 144 164", "5 149 170", "9 145 164", "0 145 172", "9 150 166", "5 148 164", "1 145 173", "8 146 166", "7 149 169", "6 148 168", "5 138 168", "4 137 167", "9 144 170", "5 136 169"};
    StockQuotes* pObj = new StockQuotes();
    clock_t start = clock();
    vector<string> result = pObj->report(quotes);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 6 16.17", "1 4 17.00", "2 1 21.00", "3 2 15.50", "4 2 23.50", "5 5 23.40", "6 4 15.00", "7 5 17.20", "8 2 15.50", "9 5 20.00", "10 8 10.50"};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> quotes = {"9 189 199", "7 190 199", "8 189 199", "5 189 197", "6 188 196", "9 188 197", "0 190 194", "5 190 193", "8 190 195"};
    StockQuotes* pObj = new StockQuotes();
    clock_t start = clock();
    vector<string> result = pObj->report(quotes);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 1 4.00", "5 2 5.50", "6 1 8.00", "7 1 9.00", "8 2 7.50", "9 2 9.50", "10 6 6.50"};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> quotes = {"6 791 808", "3 796 804", "3 792 814", "7 795 806", "5 793 804", "5 791 808", "9 788 805", "0 786 808", "7 792 807", "7 789 807", "3 787 809", "1 790 811", "1 784 811", "3 783 814", "6 789 806", "9 783 810", "9 781 810", "0 790 811", "2 791 811", "1 788 812", "9 791 806", "7 786 812", "0 791 808", "4 793 813", "7 792 812", "4 791 805", "6 792 805", "7 791 815", "6 789 807", "4 791 808", "2 793 815", "8 789 809", "4 797 814", "6 796 808"};
    StockQuotes* pObj = new StockQuotes();
    clock_t start = clock();
    vector<string> result = pObj->report(quotes);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 3 20.00", "1 3 24.00", "2 2 21.00", "3 4 20.75", "4 4 17.00", "5 2 14.00", "6 5 15.40", "7 6 19.00", "8 1 20.00", "9 4 22.00", "10 16 12.56"};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> quotes = {"3 728 736", "7 728 738", "5 723 738", "8 725 736", "9 725 736", "8 728 737", "6 725 738", "7 728 740", "0 725 739", "3 726 737", "1 728 740", "5 725 740", "6 728 744", "2 726 742", "9 723 742", "6 726 743", "8 727 739", "4 726 739", "5 727 737", "6 728 739", "9 726 738", "7 726 740"};
    StockQuotes* pObj = new StockQuotes();
    clock_t start = clock();
    vector<string> result = pObj->report(quotes);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 1 14.00", "1 1 12.00", "2 1 16.00", "3 2 9.50", "4 1 13.00", "5 3 13.33", "6 4 14.25", "7 3 12.00", "8 3 10.67", "9 3 14.00", "10 2 8.50"};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> quotes = {"5 636 642", "1 636 640", "0 635 641", "6 637 642", "2 634 642", "2 636 642", "4 635 641", "2 633 642", "6 633 644", "5 632 643", "0 635 643", "9 635 643", "7 632 640", "2 633 641", "6 633 643", "9 633 643", "3 630 643", "5 630 640", "2 629 639", "6 627 641", "1 628 639", "9 631 642", "4 631 641", "3 629 643", "8 632 642", "5 632 640", "1 631 640", "0 634 641", "0 630 643", "1 633 642", "0 631 643", "5 630 643", "0 630 642", "8 628 640", "6 631 640", "4 631 643", "1 634 641", "1 631 642", "7 631 638", "2 632 641", "4 632 641", "5 629 639", "8 629 639", "2 627 639", "1 631 639", "7 627 638", "9 629 641", "4 627 641"};
    StockQuotes* pObj = new StockQuotes();
    clock_t start = clock();
    vector<string> result = pObj->report(quotes);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 6 9.67", "1 7 8.43", "2 7 8.86", "3 2 13.50", "4 5 10.20", "5 6 9.67", "6 5 9.80", "7 3 8.67", "8 3 10.67", "9 4 10.25", "10 14 5.29"};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> quotes = {"8 397 412", "6 393 413", "2 399 414", "6 400 416", "1 396 416", "4 392 414", "7 391 413", "4 391 409", "6 399 414", "4 393 414", "2 394 413", "4 401 417", "9 397 413", "9 392 414", "5 398 415", "8 396 409", "9 401 415", "3 394 413", "9 391 408", "1 399 409", "7 394 416", "0 400 409", "8 400 413", "9 400 411", "9 395 409"};
    StockQuotes* pObj = new StockQuotes();
    clock_t start = clock();
    vector<string> result = pObj->report(quotes);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 1 9.00", "1 2 15.00", "2 2 17.00", "3 1 19.00", "4 4 19.25", "5 1 17.00", "6 3 17.00", "7 2 22.00", "8 3 13.67", "9 6 15.67", "10 10 10.60"};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> quotes = {"9 893 901", "8 891 902", "6 892 900", "4 892 900", "5 893 899", "7 893 899", "9 895 899", "2 892 900", "9 894 897", "3 894 898", "3 894 896"};
    StockQuotes* pObj = new StockQuotes();
    clock_t start = clock();
    vector<string> result = pObj->report(quotes);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"2 1 8.00", "3 2 3.00", "4 1 8.00", "5 1 6.00", "6 1 8.00", "7 1 6.00", "8 1 11.00", "9 3 5.00", "10 6 5.00"};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> quotes = {"5 26 33", "1 31 36", "9 29 37", "0 30 38", "5 29 34", "6 27 36", "8 29 33", "7 29 34", "6 32 39", "9 29 34", "6 26 40", "7 29 36"};
    StockQuotes* pObj = new StockQuotes();
    clock_t start = clock();
    vector<string> result = pObj->report(quotes);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 1 8.00", "1 1 5.00", "5 2 6.00", "6 3 10.00", "7 2 6.00", "8 1 4.00", "9 2 6.50", "10 6 2.83"};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> quotes = {"2 987 990", "3 989 992", "3 988 990", "0 988 991", "7 985 990", "1 985 989", "9 985 989", "9 986 991", "2 987 992", "4 986 992", "5 986 993", "3 985 993", "8 983 995", "7 985 994", "2 986 993", "4 988 993", "2 986 994", "7 986 994", "1 987 993", "7 988 995", "8 985 994", "2 985 994", "5 987 992", "2 988 991", "0 989 993"};
    StockQuotes* pObj = new StockQuotes();
    clock_t start = clock();
    vector<string> result = pObj->report(quotes);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 2 3.50", "1 2 5.00", "2 6 5.83", "3 3 4.33", "4 2 5.50", "5 2 6.00", "7 4 7.25", "8 2 10.50", "9 2 4.50", "10 6 2.00"};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> quotes = {"9 870 884", "1 869 892", "3 872 890", "1 867 884", "5 872 888", "7 877 886", "6 878 885", "4 871 890", "9 869 882", "8 867 888", "9 871 885", "3 873 887", "3 872 882", "4 873 887", "8 867 884", "8 867 890", "0 875 885", "1 877 885", "3 876 887", "8 875 888", "2 870 879", "2 868 884", "7 867 883", "7 871 882", "3 872 885", "2 870 881", "6 873 888", "8 870 879", "1 871 880", "7 873 884", "4 868 881", "8 872 884", "9 873 881", "7 868 880", "9 870 879", "3 876 885", "4 875 887", "7 874 884", "0 876 890", "8 872 887", "2 875 883", "4 876 888", "0 877 889", "7 874 891", "9 870 891"};
    StockQuotes* pObj = new StockQuotes();
    clock_t start = clock();
    vector<string> result = pObj->report(quotes);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 3 12.00", "1 4 14.25", "2 4 11.00", "3 6 12.50", "4 5 14.00", "5 1 16.00", "6 2 11.00", "7 7 12.29", "8 7 15.71", "9 6 13.17", "10 21 5.05"};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> quotes = {"9 765 772", "3 758 774", "6 757 778", "5 765 771", "5 759 774", "2 763 775", "1 762 771", "1 757 772", "9 759 770", "0 755 776", "8 758 776", "8 759 775", "8 760 775", "5 754 771", "2 759 770", "8 758 771", "0 752 764", "0 754 765", "4 757 765", "6 755 764", "9 757 767", "9 753 767", "6 758 771", "9 755 763", "5 751 763", "7 751 771", "1 753 768", "0 753 766", "4 756 765", "9 755 772", "7 761 768", "9 762 768"};
    StockQuotes* pObj = new StockQuotes();
    clock_t start = clock();
    vector<string> result = pObj->report(quotes);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 4 14.25", "1 3 13.00", "2 2 11.50", "3 1 16.00", "4 2 8.50", "5 4 12.50", "6 3 14.33", "7 2 13.50", "8 4 15.50", "9 7 10.43", "10 15 6.00"};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> quotes = {"3 462 476", "5 468 480", "7 468 475", "5 467 477", "7 469 477", "7 469 482", "2 466 483", "7 467 480", "3 466 480", "2 468 476", "3 468 477", "1 473 479", "9 472 477"};
    StockQuotes* pObj = new StockQuotes();
    clock_t start = clock();
    vector<string> result = pObj->report(quotes);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1 1 6.00", "2 2 12.50", "3 3 12.33", "5 2 11.00", "7 4 10.25", "9 1 5.00", "10 8 8.25"};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> quotes = {"8 978 981", "2 971 980", "8 976 989", "3 973 989", "9 973 981", "3 972 986", "4 973 984", "3 979 990", "2 971 985", "9 974 988", "6 977 982"};
    StockQuotes* pObj = new StockQuotes();
    clock_t start = clock();
    vector<string> result = pObj->report(quotes);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"2 2 11.50", "3 3 13.67", "4 1 11.00", "6 1 5.00", "8 2 8.00", "9 2 11.00", "10 7 2.86"};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> quotes = {"9 401 414", "6 403 418", "7 402 414", "0 405 419", "7 404 417", "0 402 417", "4 399 413", "6 403 417", "9 405 418", "7 401 418", "4 402 419", "4 402 418", "8 400 413", "8 404 415", "5 401 415", "4 397 414", "1 400 415", "8 401 417", "5 399 410", "8 404 412", "0 399 411", "8 402 416", "0 401 415", "6 402 413", "3 399 416", "5 401 412", "4 405 411", "3 402 412", "5 399 412", "4 404 411", "7 400 415", "1 399 415", "9 403 413", "4 398 409", "6 401 411", "3 399 412", "3 402 415", "7 406 413", "5 400 413", "8 402 415", "5 398 415", "2 402 414", "0 401 413", "3 404 410", "6 400 407", "8 397 412"};
    StockQuotes* pObj = new StockQuotes();
    clock_t start = clock();
    vector<string> result = pObj->report(quotes);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 5 13.40", "1 2 15.50", "2 1 12.00", "3 5 11.80", "4 7 12.57", "5 6 13.17", "6 5 11.40", "7 5 12.80", "8 7 12.86", "9 3 12.00", "10 17 7.88"};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> quotes = {"1 159 168", "0 157 168", "9 156 171", "1 157 169", "4 151 169", "5 154 170", "8 156 172", "5 156 166", "5 157 167", "0 152 164", "6 155 169", "9 159 166", "1 156 167", "0 154 169", "7 160 169", "1 155 166", "4 156 169", "2 154 169", "6 156 164", "3 155 163", "5 160 169", "7 159 162", "2 154 163"};
    StockQuotes* pObj = new StockQuotes();
    clock_t start = clock();
    vector<string> result = pObj->report(quotes);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 3 12.67", "1 4 10.75", "2 2 12.00", "3 1 8.00", "4 2 15.50", "5 4 11.25", "6 2 11.00", "7 2 6.00", "8 1 16.00", "9 2 11.00", "10 11 6.64"};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> quotes = {"3 446 460", "6 447 456", "5 445 461", "6 444 457", "7 445 461", "4 447 459", "4 445 457", "9 446 458", "9 450 458", "7 448 459", "7 447 456", "8 453 457", "5 449 455", "7 450 456", "1 449 459", "0 450 456"};
    StockQuotes* pObj = new StockQuotes();
    clock_t start = clock();
    vector<string> result = pObj->report(quotes);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 1 6.00", "1 1 10.00", "3 1 14.00", "4 2 12.00", "5 2 11.00", "6 2 11.00", "7 4 10.50", "8 1 4.00", "9 2 10.00", "10 9 8.11"};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> quotes = {"6 509 521", "5 508 520", "4 508 519", "0 509 520", "0 509 519", "5 509 521", "2 510 521", "0 511 522", "1 512 524", "2 513 525", "6 514 522", "9 512 522", "0 515 522"};
    StockQuotes* pObj = new StockQuotes();
    clock_t start = clock();
    vector<string> result = pObj->report(quotes);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 4 9.75", "1 1 12.00", "2 2 11.50", "4 1 11.00", "5 2 12.00", "6 2 10.00", "9 1 10.00", "10 9 8.00"};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> quotes = {"7 783 788", "6 784 787", "3 784 787", "1 784 787", "1 783 786"};
    StockQuotes* pObj = new StockQuotes();
    clock_t start = clock();
    vector<string> result = pObj->report(quotes);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1 2 3.00", "3 1 3.00", "6 1 3.00", "7 1 5.00", "10 3 3.33"};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> quotes = {"8 227 232", "5 227 233", "1 227 232", "5 226 233", "3 225 234", "8 224 235", "4 224 235", "0 225 236", "9 225 237", "7 226 238", "2 225 237"};
    StockQuotes* pObj = new StockQuotes();
    clock_t start = clock();
    vector<string> result = pObj->report(quotes);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 1 11.00", "1 1 5.00", "2 1 12.00", "3 1 9.00", "4 1 11.00", "5 2 6.50", "7 1 12.00", "8 2 8.00", "9 1 12.00", "10 1 5.00"};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> quotes = {"7 114 125", "6 115 126", "2 121 123", "4 121 124", "4 118 125", "7 119 123", "3 115 124", "7 116 129", "3 121 127"};
    StockQuotes* pObj = new StockQuotes();
    clock_t start = clock();
    vector<string> result = pObj->report(quotes);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"2 1 2.00", "3 2 7.50", "4 2 5.00", "6 1 11.00", "7 3 9.33", "10 3 7.67"};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> quotes = {"7 585 597", "0 585 599", "5 583 596"};
    StockQuotes* pObj = new StockQuotes();
    clock_t start = clock();
    vector<string> result = pObj->report(quotes);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 1 14.00", "5 1 13.00", "7 1 12.00", "10 2 11.50"};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> quotes = {"6 412 417", "4 413 415", "2 411 418", "7 411 417", "3 413 419", "3 411 418", "5 409 420", "7 410 420", "8 411 419", "6 410 419", "8 411 418", "1 410 418", "0 409 417"};
    StockQuotes* pObj = new StockQuotes();
    clock_t start = clock();
    vector<string> result = pObj->report(quotes);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 1 8.00", "1 1 8.00", "2 1 7.00", "3 2 6.50", "4 1 2.00", "5 1 11.00", "6 2 7.00", "7 2 8.00", "8 2 7.50", "10 2 3.50"};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> quotes = {"6 840 843", "1 838 844", "5 838 841"};
    StockQuotes* pObj = new StockQuotes();
    clock_t start = clock();
    vector<string> result = pObj->report(quotes);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1 1 6.00", "5 1 3.00", "6 1 3.00", "10 2 2.00"};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> quotes = {"0 4 6", "1 4 6", "0 3 7"};
    StockQuotes* pObj = new StockQuotes();
    clock_t start = clock();
    vector<string> result = pObj->report(quotes);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 2 3.00", "1 1 2.00", "10 1 2.00"};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> quotes = {"0 1 2", "0 2 3", "0 3 4", "0 4 5", "0 5 6", "0 6 7", "0 7 8", "0 8 10"};
    StockQuotes* pObj = new StockQuotes();
    clock_t start = clock();
    vector<string> result = pObj->report(quotes);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 8 1.13", "10 8 1.13"};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> quotes = {"0 113 824", "8 190 962", "4 68 983", "2 294 514", "9 488 505", "7 123 706", "9 457 938", "3 243 808", "0 228 913", "2 122 692", "3 295 806", "3 489 866", "1 96 747", "6 372 982", "3 144 775", "2 127 808", "3 33 871", "4 413 840", "6 383 701", "1 341 531", "8 290 636", "0 494 808", "5 276 754", "8 371 598", "2 64 741", "8 15 951", "3 212 889", "0 231 666", "2 125 688", "3 410 893", "0 220 932", "8 177 982", "4 57 785", "7 348 943", "6 380 927", "0 142 795", "2 136 711", "4 56 663", "1 88 950", "8 354 771", "9 324 973", "3 193 516", "1 198 941"};
    StockQuotes* pObj = new StockQuotes();
    clock_t start = clock();
    vector<string> result = pObj->report(quotes);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 6 585.00", "1 4 611.50", "2 6 547.67", "3 8 550.63", "4 4 669.25", "5 1 478.00", "6 3 491.67", "7 2 589.00", "8 6 583.83", "9 3 382.33", "10 16 224.06"};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> quotes = {"0 11 14", "0 10 13", "0 11 14", "0 10 13", "0 11 14", "0 10 13", "0 11 14", "0 10 14", "1 9 16", "2 11 15", "1 10 15", "2 12 14", "2 8 20"};
    StockQuotes* pObj = new StockQuotes();
    clock_t start = clock();
    vector<string> result = pObj->report(quotes);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 8 3.13", "1 2 6.00", "2 3 6.00", "10 11 3.09"};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> quotes = {"5 75 400", "1 112 510", "0 94 348", "0 25 455", "9 196 341", "9 110 885", "2 103 579", "8 124 538", "0 200 483", "5 122 855", "9 95 760", "4 190 744", "4 169 409", "7 96 790", "7 65 575", "3 45 390", "3 159 610", "3 200 552", "8 47 575", "6 134 827", "9 132 706", "7 42 714", "1 164 657", "4 106 883", "6 57 624", "2 6 845", "8 150 754", "8 40 380", "6 76 436", "0 130 428", "5 35 585", "0 41 460", "5 77 672", "7 51 360", "3 176 832", "3 62 398", "6 78 852", "5 44 761", "0 9 864", "8 82 681", "6 44 338", "8 66 457", "0 152 658", "9 96 343", "6 99 438", "1 118 731", "2 6 646", "5 103 401", "5 195 745", "2 78 755"};
    StockQuotes* pObj = new StockQuotes();
    clock_t start = clock();
    vector<string> result = pObj->report(quotes);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 7 435.00", "1 3 501.33", "2 4 658.00", "3 5 428.00", "4 3 523.67", "5 7 538.29", "6 6 504.50", "7 4 546.25", "8 6 479.33", "9 5 481.20", "10 21 220.57"};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> quotes = {"2 711 730", "5 716 729", "7 711 734", "0 718 731", "5 713 731", "1 713 730"};
    StockQuotes* pObj = new StockQuotes();
    clock_t start = clock();
    vector<string> result = pObj->report(quotes);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 1 13.00", "1 1 17.00", "2 1 19.00", "5 2 15.50", "7 1 23.00", "10 4 13.75"};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> quotes = {"1 5 6", "1 6 7", "1 7 8", "1 8 9", "1 9 10", "1 11 12", "1 12 13", "1 13 15"};
    StockQuotes* pObj = new StockQuotes();
    clock_t start = clock();
    vector<string> result = pObj->report(quotes);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1 8 1.13", "10 8 1.13"};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> quotes = {"0 10 11", "0 11 12", "0 12 13", "0 13 14", "0 14 15", "0 15 16", "0 16 17", "0 17 18", "0 18 19", "0 19 20", "0 20 21", "0 21 22", "0 22 24"};
    StockQuotes* pObj = new StockQuotes();
    clock_t start = clock();
    vector<string> result = pObj->report(quotes);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 13 1.08", "10 13 1.08"};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> quotes = {"7 437 652", "1 326 618", "8 217 659", "7 360 605", "9 426 730", "4 384 681", "3 308 643", "7 10 993", "7 382 652", "2 270 676", "3 299 654", "6 234 696", "7 338 833", "1 50 535", "4 425 507", "6 289 772", "8 471 935", "6 240 987", "9 137 625", "2 56 729", "2 239 804", "7 246 749", "0 159 690", "1 120 530", "6 254 977", "2 454 513", "8 187 661", "6 46 609", "6 24 993", "0 394 656", "8 157 585", "9 424 621", "6 492 746", "5 354 788", "1 119 849", "7 457 718", "2 189 762", "0 426 901", "1 383 626", "2 491 857"};
    StockQuotes* pObj = new StockQuotes();
    clock_t start = clock();
    vector<string> result = pObj->report(quotes);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 3 422.67", "1 5 432.00", "2 6 440.33", "3 2 345.00", "4 2 189.50", "5 1 434.00", "6 7 600.14", "7 7 424.57", "8 4 452.00", "9 3 329.67", "10 10 130.60"};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> quotes = {"0 1 2", "0 2 3", "0 1 10"};
    StockQuotes* pObj = new StockQuotes();
    clock_t start = clock();
    vector<string> result = pObj->report(quotes);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 3 3.67", "10 3 3.67"};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> quotes = {"7 461 777", "3 283 566", "0 119 799", "6 93 983", "4 139 764", "0 62 733", "9 380 735", "2 457 817", "7 28 675", "1 303 678", "3 362 592", "0 457 702", "2 74 765", "0 442 946", "3 429 982", "4 126 681", "5 240 845", "9 175 640", "8 37 980", "0 407 736", "9 74 819", "1 325 815", "9 230 563", "6 254 848", "2 450 775", "5 177 790", "0 237 581", "9 397 684", "0 382 617", "9 265 667", "9 348 702", "7 111 747", "2 394 979", "3 351 893", "2 94 839", "7 150 785", "9 409 586", "2 494 664", "7 254 839", "2 414 927", "5 429 862", "1 268 831", "6 370 783", "4 91 584", "7 407 617", "9 245 592"};
    StockQuotes* pObj = new StockQuotes();
    clock_t start = clock();
    vector<string> result = pObj->report(quotes);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 7 429.71", "1 3 476.00", "2 7 484.14", "3 4 402.00", "4 3 557.67", "5 3 550.33", "6 3 632.33", "7 6 504.83", "8 1 943.00", "9 9 385.00", "10 21 173.67"};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> quotes = {"0 1 2", "0 1 3", "0 1 2", "0 1 3", "0 1 2", "0 1 3", "0 1 2", "0 1 3", "0 1 2", "0 1 3", "0 1 2", "0 1 3", "0 1 2", "0 1 3", "0 1 2", "0 1 5"};
    StockQuotes* pObj = new StockQuotes();
    clock_t start = clock();
    vector<string> result = pObj->report(quotes);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 16 1.63", "10 16 1.63"};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> quotes = {"0 111 914", "0 110 913", "0 111 914", "0 110 913", "0 111 914", "0 110 913", "0 111 914", "0 110 914"};
    StockQuotes* pObj = new StockQuotes();
    clock_t start = clock();
    vector<string> result = pObj->report(quotes);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 8 803.13", "10 8 803.13"};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> quotes = {"0 10 11", "0 11 12", "0 12 13", "0 13 15", "0 13 14", "0 14 15", "0 15 16", "0 16 17"};
    StockQuotes* pObj = new StockQuotes();
    clock_t start = clock();
    vector<string> result = pObj->report(quotes);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 8 1.13", "10 8 1.13"};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=310333&rd=8005&pm=4706
********************************************************************************
#include <algorithm> 
#include <iostream> 
#include <sstream> 
#include <string> 
#include <vector> 
 
using namespace std; 
 
class StockQuotes {  
   public:  
   vector <string> report(vector <string> quotes) {  
      vector< pair<int,int> > exch( 11, pair<int,int>(0,0) ); 
      vector<int> bid( 11, -1 ); 
      vector<int> ask( 11, -1 ); 
      for( vector<string>::iterator it = quotes.begin(); it != quotes.end(); ++it ) { 
         istringstream iss( *it ); 
         int e, b, a; 
         iss >> e >> b >> a; 
         bid[e] = b; ask[e] = a; 
          
         exch[e].first++; 
         exch[e].second += ask[e] - bid[e]; 
 
         int bb = 0, aa = 10000; 
         for( int i = 0; i < 10; ++i ) { 
            if( bid[i] == -1 ) continue; 
            bb >?= bid[i]; 
            aa <?= ask[i]; 
         } 
         if( bb != bid[10] || aa != ask[10] ) { 
            bid[10] = bb;  
            ask[10] = aa; 
            exch[10].first++; 
            exch[10].second += ask[10] - bid[10]; 
         } 
      } 
      vector<string> ret; 
      for( int i = 0; i <= 10; ++i ) { 
         if( exch[i].first == 0 ) continue; 
         char buff[100]; 
         sprintf( buff, "%d %d %.2lf", i, exch[i].first, exch[i].second / (double)exch[i].first + 1e-12 ); 
         ret.push_back( string( buff ) );  
      } 
      return ret; 
   }  
 
 
 
 
 
    
 
};  
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/