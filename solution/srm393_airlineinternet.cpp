/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8495
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

class AirlineInternet {
public:
    double minimumRange(vector<string> airportLocations, vector<string> flights);
};

double AirlineInternet::minimumRange(vector<string> airportLocations, vector<string> flights) {
    double ret;
    return ret;
}


int test0() {
    vector<string> airportLocations = {"0 0", "100 0"};
    vector<string> flights = {"0 1 0 100"};
    AirlineInternet* pObj = new AirlineInternet();
    clock_t start = clock();
    double result = pObj->minimumRange(airportLocations, flights);
    clock_t end = clock();
    delete pObj;
    double expected = 50.0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> airportLocations = {"0 0", "100 0"};
    vector<string> flights = {"0 1 0 100", "0 1 25 125", "0 1 50 150", "0 1 75 175"};
    AirlineInternet* pObj = new AirlineInternet();
    clock_t start = clock();
    double result = pObj->minimumRange(airportLocations, flights);
    clock_t end = clock();
    delete pObj;
    double expected = 25.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> airportLocations = {"25 100", "0 50", "90 150", "22 22", "60 1", "95 8", "12 40"};
    vector<string> flights = {"0 1 0 500", "2 5 10 300", "2 0 100 200", "3 6 150 400", "4 5 50 450", "5 1 0 300", "2 6 10 100"};
    AirlineInternet* pObj = new AirlineInternet();
    clock_t start = clock();
    double result = pObj->minimumRange(airportLocations, flights);
    clock_t end = clock();
    delete pObj;
    double expected = 64.28201130009927;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> airportLocations = {"0 0", "50 0", "100 0"};
    vector<string> flights = {"0 1 0 100"};
    AirlineInternet* pObj = new AirlineInternet();
    clock_t start = clock();
    double result = pObj->minimumRange(airportLocations, flights);
    clock_t end = clock();
    delete pObj;
    double expected = 25.0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> airportLocations = {"0 0", "100 0"};
    vector<string> flights = {"0 1 0 100", "0 1 10 110", "0 1 20 120", "0 1 30 130", "0 1 40 140"};
    AirlineInternet* pObj = new AirlineInternet();
    clock_t start = clock();
    double result = pObj->minimumRange(airportLocations, flights);
    clock_t end = clock();
    delete pObj;
    double expected = 30.0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> airportLocations = {"417 262", "519 592", "941 778"};
    vector<string> flights = {"0 1 376 534", "0 2 603 763", "1 0 137 431", "0 1 525 583", "2 1 367 551", "0 1 953 996", "0 1 668 886"};
    AirlineInternet* pObj = new AirlineInternet();
    clock_t start = clock();
    double result = pObj->minimumRange(airportLocations, flights);
    clock_t end = clock();
    delete pObj;
    double expected = 246.618769031594;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> airportLocations = {"461 168", "693 177", "693 310", "821 244", "837 808"};
    vector<string> flights = {"2 0 374 643", "3 0 541 776", "4 2 205 393", "0 1 55 680", "4 1 739 873", "0 3 351 570", "0 1 579 700"};
    AirlineInternet* pObj = new AirlineInternet();
    clock_t start = clock();
    double result = pObj->minimumRange(airportLocations, flights);
    clock_t end = clock();
    delete pObj;
    double expected = 259.6240036821721;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> airportLocations = {"169 25", "269 781", "712 883", "813 889"};
    vector<string> flights = {"0 2 167 532", "0 2 972 982", "0 2 327 936", "2 0 68 176", "1 0 723 845", "0 2 665 920", "1 2 281 399", "0 2 685 955", "0 2 155 697"};
    AirlineInternet* pObj = new AirlineInternet();
    clock_t start = clock();
    double result = pObj->minimumRange(airportLocations, flights);
    clock_t end = clock();
    delete pObj;
    double expected = 420.0059861811434;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> airportLocations = {"101 591", "283 183", "346 696", "436 638", "738 46"};
    vector<string> flights = {"3 0 855 890", "2 0 260 698", "3 4 229 743", "1 2 519 898", "3 1 863 955", "4 0 407 993", "2 4 872 969", "0 3 320 663"};
    AirlineInternet* pObj = new AirlineInternet();
    clock_t start = clock();
    double result = pObj->minimumRange(airportLocations, flights);
    clock_t end = clock();
    delete pObj;
    double expected = 298.18759041416865;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> airportLocations = {"157 964", "215 237", "569 565", "750 164"};
    vector<string> flights = {"1 3 254 859", "0 1 980 997", "2 3 586 595", "0 2 916 993", "3 2 733 965", "3 2 743 830", "1 2 318 725", "3 0 290 544", "1 0 754 943", "0 2 830 918"};
    AirlineInternet* pObj = new AirlineInternet();
    clock_t start = clock();
    double result = pObj->minimumRange(airportLocations, flights);
    clock_t end = clock();
    delete pObj;
    double expected = 359.2437159929716;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> airportLocations = {"212 732", "438 538", "549 103"};
    vector<string> flights = {"0 2 749 796", "1 0 130 504", "1 0 29 209", "2 1 907 924", "1 0 698 804"};
    AirlineInternet* pObj = new AirlineInternet();
    clock_t start = clock();
    double result = pObj->minimumRange(airportLocations, flights);
    clock_t end = clock();
    delete pObj;
    double expected = 231.2072987869912;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> airportLocations = {"198 704", "680 993", "95 557"};
    vector<string> flights = {"1 0 369 757", "0 2 652 796", "0 1 647 739", "0 2 317 393", "1 0 816 957", "0 1 435 684", "0 2 538 934", "0 2 4 408"};
    AirlineInternet* pObj = new AirlineInternet();
    clock_t start = clock();
    double result = pObj->minimumRange(airportLocations, flights);
    clock_t end = clock();
    delete pObj;
    double expected = 281.0004448395056;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> airportLocations = {"152 998", "656 487", "75 999", "913 535"};
    vector<string> flights = {"1 0 347 530", "0 3 75 819", "3 1 893 935", "1 0 971 992", "2 0 471 887", "2 0 924 955"};
    AirlineInternet* pObj = new AirlineInternet();
    clock_t start = clock();
    double result = pObj->minimumRange(airportLocations, flights);
    clock_t end = clock();
    delete pObj;
    double expected = 358.8652253980556;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> airportLocations = {"502 58", "542 342", "797 657", "815 767"};
    vector<string> flights = {"0 1 653 975", "2 0 778 783", "3 2 463 644", "0 1 39 304", "2 0 663 931", "1 0 640 835", "0 3 830 874"};
    AirlineInternet* pObj = new AirlineInternet();
    clock_t start = clock();
    double result = pObj->minimumRange(airportLocations, flights);
    clock_t end = clock();
    delete pObj;
    double expected = 207.7792776343636;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> airportLocations = {"123 994", "525 84", "624 601", "734 32"};
    vector<string> flights = {"0 2 15 598", "1 3 43 311", "0 3 813 946", "3 2 879 962", "0 2 467 679", "0 3 611 955", "3 2 442 662"};
    AirlineInternet* pObj = new AirlineInternet();
    clock_t start = clock();
    double result = pObj->minimumRange(airportLocations, flights);
    clock_t end = clock();
    delete pObj;
    double expected = 337.67905744443965;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> airportLocations = {"271 730", "280 990", "359 938", "642 970", "654 121", "781 132", "864 807", "870 287", "96 285", "971 711"};
    vector<string> flights = {"6 2 449 748", "0 1 240 838", "4 8 962 991", "6 1 85 527", "0 6 233 739", "6 4 542 694", "2 0 609 877", "5 0 2 524", "6 9 881 913", "4 0 386 753", "4 0 774 971", "5 0 856 886", "7 5 346 613", "2 0 748 859", "9 2 122 608", "0 3 13 214", "0 2 260 370", "5 2 423 921", "0 1 243 418", "0 5 476 713"};
    AirlineInternet* pObj = new AirlineInternet();
    clock_t start = clock();
    double result = pObj->minimumRange(airportLocations, flights);
    clock_t end = clock();
    delete pObj;
    double expected = 358.97298714202395;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> airportLocations = {"119 209", "284 82", "308 872", "326 650", "372 603", "58 829", "79 555", "857 643", "908 0", "971 447"};
    vector<string> flights = {"9 6 292 863", "5 7 763 794", "0 2 783 789", "4 6 839 842", "3 8 640 932", "7 8 995 1000", "2 0 107 753", "6 0 241 434", "8 2 167 390", "3 6 610 837", "0 5 234 964", "6 0 680 785", "0 4 434 851", "0 2 4 601", "8 0 98 643", "0 9 802 882", "5 0 952 962", "5 4 68 475", "8 5 149 896", "8 4 401 806"};
    AirlineInternet* pObj = new AirlineInternet();
    clock_t start = clock();
    double result = pObj->minimumRange(airportLocations, flights);
    clock_t end = clock();
    delete pObj;
    double expected = 366.6144143757617;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> airportLocations = {"2 372", "373 156", "398 9", "446 380", "5 383", "598 68", "620 654", "790 440", "939 730", "956 951"};
    vector<string> flights = {"2 5 789 992", "3 5 816 830", "5 4 781 819", "4 1 331 907", "9 8 659 965", "4 3 414 449", "8 9 605 877", "0 5 283 700", "2 0 652 858", "0 8 10 364", "1 8 266 504", "6 0 600 862", "0 3 894 910", "1 5 147 260", "1 5 915 997", "2 6 41 871", "6 8 642 935", "0 5 822 932", "6 0 323 856", "8 2 933 958"};
    AirlineInternet* pObj = new AirlineInternet();
    clock_t start = clock();
    double result = pObj->minimumRange(airportLocations, flights);
    clock_t end = clock();
    delete pObj;
    double expected = 233.26494337238677;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> airportLocations = {"12 673", "189 260", "229 869", "296 855", "542 746", "690 801", "730 725", "835 541", "867 128", "891 82"};
    vector<string> flights = {"6 2 311 532", "6 2 569 987", "3 4 631 819", "2 0 837 951", "4 0 264 486", "8 0 700 709", "0 4 397 939", "0 2 935 960", "6 8 554 935", "0 6 237 883", "4 8 745 991", "2 4 790 828", "7 1 40 343", "0 5 722 935", "6 0 681 765", "7 1 369 868", "4 0 275 972", "6 2 805 891", "5 0 755 897", "8 0 980 993"};
    AirlineInternet* pObj = new AirlineInternet();
    clock_t start = clock();
    double result = pObj->minimumRange(airportLocations, flights);
    clock_t end = clock();
    delete pObj;
    double expected = 359.07044357655184;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> airportLocations = {"107 73", "273 257", "288 422", "314 23", "340 63", "457 993", "5 310", "536 759", "683 68", "706 695"};
    vector<string> flights = {"8 0 672 814", "0 4 595 937", "3 0 920 1000", "2 5 489 784", "6 0 450 882", "4 2 631 852", "0 2 821 965", "4 0 768 856", "4 3 85 738", "3 8 990 991", "3 4 872 919", "2 0 433 571", "6 5 80 663", "2 4 183 887", "6 0 184 1000", "0 8 794 912", "8 4 466 690", "6 0 609 987", "0 8 375 657", "0 8 537 852"};
    AirlineInternet* pObj = new AirlineInternet();
    clock_t start = clock();
    double result = pObj->minimumRange(airportLocations, flights);
    clock_t end = clock();
    delete pObj;
    double expected = 279.16281511739953;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> airportLocations = {"135 221", "222 744", "253 845", "288 79", "336 423", "460 49", "748 542", "838 897", "915 192", "93 319"};
    vector<string> flights = {"3 1 609 917", "5 3 6 574", "2 0 162 960", "6 2 616 923", "0 4 610 745", "2 8 343 450", "8 6 553 966", "4 6 773 989", "0 2 92 130", "4 0 470 862", "6 5 110 154", "0 2 9 799", "0 6 641 958", "6 7 869 906", "5 0 790 890", "0 6 320 485", "0 2 407 972", "3 0 979 993", "3 5 134 449", "2 8 541 686"};
    AirlineInternet* pObj = new AirlineInternet();
    clock_t start = clock();
    double result = pObj->minimumRange(airportLocations, flights);
    clock_t end = clock();
    delete pObj;
    double expected = 286.17560681614907;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> airportLocations = {"110 142", "266 187", "367 111", "420 0", "533 532", "581 677", "662 442", "921 381", "929 718", "956 450"};
    vector<string> flights = {"4 0 849 915", "5 0 949 984", "0 3 514 932", "0 4 468 932", "0 1 224 586", "4 0 720 754", "8 2 226 743", "5 4 976 983", "5 8 930 998", "0 2 19 943", "8 0 89 194", "8 1 366 964", "5 8 527 543", "4 0 636 875", "0 4 862 996", "5 2 562 563", "0 6 222 365", "3 6 535 655", "4 3 896 943", "8 0 341 479"};
    AirlineInternet* pObj = new AirlineInternet();
    clock_t start = clock();
    double result = pObj->minimumRange(airportLocations, flights);
    clock_t end = clock();
    delete pObj;
    double expected = 225.63963403218418;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> airportLocations = {"156 132", "169 795", "277 687", "291 511", "495 427", "53 62", "542 778", "823 1", "83 747", "918 59"};
    vector<string> flights = {"7 2 714 956", "2 8 19 35", "2 3 799 984", "6 8 604 981", "2 0 624 852", "6 9 933 953", "2 7 871 933", "0 6 956 991", "0 6 152 382", "2 5 240 978", "6 3 581 890", "7 0 996 997", "4 5 777 821", "4 8 120 528", "5 2 848 935", "0 4 823 990", "4 2 70 669", "2 1 904 918", "5 9 857 979", "8 0 802 979"};
    AirlineInternet* pObj = new AirlineInternet();
    clock_t start = clock();
    double result = pObj->minimumRange(airportLocations, flights);
    clock_t end = clock();
    delete pObj;
    double expected = 339.87129917073025;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> airportLocations = {"0 0", "1000 0", "1000 1", "1000 2", "1000 3"};
    vector<string> flights = {"0 1 0 10", "0 2 0 11", "0 3 0 12", "0 4 0 13", "0 1 0 14", "0 2 0 15", "0 3 0 16", "0 4 0 17", "0 1 0 18", "0 2 0 19", "0 3 0 20", "0 4 0 21", "0 1 0 22", "0 2 0 23", "0 3 0 24", "0 4 0 25", "0 1 0 26", "0 2 0 27", "0 3 0 28", "0 4 0 29"};
    AirlineInternet* pObj = new AirlineInternet();
    clock_t start = clock();
    double result = pObj->minimumRange(airportLocations, flights);
    clock_t end = clock();
    delete pObj;
    double expected = 256.4111143955015;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> airportLocations = {"366 310", "385 945", "433 139", "443 696", "495 854", "505 733", "537 977", "544 239", "713 209", "819 665"};
    vector<string> flights = {"8 3 86 98", "8 2 80 84", "6 2 19 28", "0 6 80 89", "5 4 96 99", "0 4 9 58", "4 2 23 67", "0 2 55 71", "8 9 5 22", "0 8 71 81", "4 0 91 97", "4 5 98 100", "5 0 22 87", "5 2 11 61", "8 4 17 97", "6 4 53 91", "9 0 95 100", "7 5 26 43", "9 4 39 51", "9 2 43 69"};
    AirlineInternet* pObj = new AirlineInternet();
    clock_t start = clock();
    double result = pObj->minimumRange(airportLocations, flights);
    clock_t end = clock();
    delete pObj;
    double expected = 242.52710172768974;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> airportLocations = {"319 253", "349 643", "40 477", "406 725", "428 133", "618 695", "664 284", "714 185", "815 190", "86 312"};
    vector<string> flights = {"9 1 76 94", "4 8 52 91", "6 9 27 39", "5 0 87 95", "0 6 61 92", "2 3 65 84", "4 8 59 72", "5 0 37 70", "0 2 31 36", "0 8 27 71", "0 9 83 87", "0 6 77 91", "0 4 17 62", "0 6 34 92", "0 1 83 88", "8 4 89 96", "4 9 61 64", "5 6 35 83", "0 5 79 98", "8 5 52 64"};
    AirlineInternet* pObj = new AirlineInternet();
    clock_t start = clock();
    double result = pObj->minimumRange(airportLocations, flights);
    clock_t end = clock();
    delete pObj;
    double expected = 211.34383671388258;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> airportLocations = {"116 880", "220 239", "489 480", "634 743", "787 851", "817 308", "845 213", "875 746", "904 619", "959 240"};
    vector<string> flights = {"5 2 40 47", "8 4 39 81", "8 0 36 77", "7 5 5 65", "9 0 92 94", "0 4 90 95", "0 4 91 97", "4 8 36 85", "4 2 63 80", "6 0 13 99", "4 8 78 82", "4 8 85 99", "4 2 98 100", "0 6 73 83", "0 7 83 94", "0 2 37 68", "0 8 62 71", "9 0 68 99", "2 6 91 92", "2 6 17 46"};
    AirlineInternet* pObj = new AirlineInternet();
    clock_t start = clock();
    double result = pObj->minimumRange(airportLocations, flights);
    clock_t end = clock();
    delete pObj;
    double expected = 269.3242189396867;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> airportLocations = {"133 314", "190 667", "292 524", "518 586", "637 989", "646 53", "752 398", "896 616", "934 432", "969 743"};
    vector<string> flights = {"5 4 82 90", "0 2 44 62", "6 3 17 47", "6 5 68 69", "0 9 45 94", "7 2 18 89", "3 0 23 86", "5 0 65 98", "4 8 80 97", "7 0 36 81", "4 6 55 98", "5 4 76 84", "8 5 60 85", "7 0 57 68", "2 8 12 63", "2 6 49 79", "0 5 62 94", "8 5 21 46", "0 4 81 96", "8 4 52 61"};
    AirlineInternet* pObj = new AirlineInternet();
    clock_t start = clock();
    double result = pObj->minimumRange(airportLocations, flights);
    clock_t end = clock();
    delete pObj;
    double expected = 256.7963252515923;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> airportLocations = {"248 382", "346 840", "415 302", "466 967", "473 553", "555 143", "816 450", "838 564", "892 963", "952 841"};
    vector<string> flights = {"5 8 72 86", "2 8 90 98", "4 2 31 89", "4 3 14 25", "8 0 70 98", "4 2 30 65", "4 9 58 89", "2 6 52 85", "2 6 12 26", "0 8 95 98", "2 0 49 89", "0 2 70 86", "8 2 12 15", "9 7 91 94", "8 9 88 90", "8 9 5 10", "4 6 11 84", "4 8 35 65", "5 2 44 54", "8 3 5 88"};
    AirlineInternet* pObj = new AirlineInternet();
    clock_t start = clock();
    double result = pObj->minimumRange(airportLocations, flights);
    clock_t end = clock();
    delete pObj;
    double expected = 233.2853717440139;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> airportLocations = {"149 273", "256 958", "277 14", "369 166", "526 98", "59 815", "691 117", "866 376", "892 590", "988 737"};
    vector<string> flights = {"0 3 30 88", "3 4 91 93", "2 6 95 97", "8 1 38 89", "1 6 39 67", "0 7 87 90", "5 6 73 98", "6 8 29 40", "6 5 66 88", "8 6 74 81", "0 8 40 96", "0 4 74 86", "5 6 75 94", "4 3 27 80", "8 6 11 45", "5 4 39 53", "0 8 58 91", "7 2 99 100", "2 0 64 86", "4 0 40 48"};
    AirlineInternet* pObj = new AirlineInternet();
    clock_t start = clock();
    double result = pObj->minimumRange(airportLocations, flights);
    clock_t end = clock();
    delete pObj;
    double expected = 367.39624385668367;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> airportLocations = {"196 80", "308 74", "364 690", "533 436", "58 473", "582 49", "600 967", "675 580", "719 833", "858 455"};
    vector<string> flights = {"3 8 57 69", "3 5 20 100", "3 4 85 91", "8 4 39 66", "2 0 20 85", "7 0 74 82", "4 0 14 44", "0 1 96 97", "0 1 79 85", "0 7 8 88", "6 5 62 98", "0 2 6 84", "8 7 82 89", "1 6 95 99", "5 0 33 71", "0 2 60 98", "2 0 13 62", "2 4 68 79", "9 8 26 46", "6 0 30 92"};
    AirlineInternet* pObj = new AirlineInternet();
    clock_t start = clock();
    double result = pObj->minimumRange(airportLocations, flights);
    clock_t end = clock();
    delete pObj;
    double expected = 236.57060044993915;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> airportLocations = {"335 833", "406 441", "462 789", "504 174", "674 2", "711 577", "714 530", "878 412", "908 887", "945 549"};
    vector<string> flights = {"6 5 88 98", "0 6 16 24", "0 2 86 93", "1 9 74 76", "0 2 78 83", "6 8 87 95", "0 8 49 92", "8 9 50 64", "8 1 31 87", "4 0 59 100", "8 2 29 88", "4 6 16 68", "6 0 24 31", "5 4 51 61", "7 2 82 88", "5 3 96 100", "9 2 78 100", "0 8 24 44", "4 2 1 16", "4 6 78 88"};
    AirlineInternet* pObj = new AirlineInternet();
    clock_t start = clock();
    double result = pObj->minimumRange(airportLocations, flights);
    clock_t end = clock();
    delete pObj;
    double expected = 221.8119184010991;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> airportLocations = {"285 906", "533 262", "584 251", "617 756", "623 711", "634 695", "827 554", "829 413", "920 650", "968 690"};
    vector<string> flights = {"7 6 78 96", "7 9 25 84", "2 0 60 95", "0 2 1 95", "0 9 46 62", "0 5 81 82", "6 0 14 74", "9 8 21 44", "0 1 81 91", "4 5 79 82", "4 7 40 64", "8 5 78 90", "0 5 90 91", "0 2 32 71", "6 5 28 52", "0 8 53 94", "5 0 44 98", "3 0 18 82", "0 5 58 78", "2 3 41 81"};
    AirlineInternet* pObj = new AirlineInternet();
    clock_t start = clock();
    double result = pObj->minimumRange(airportLocations, flights);
    clock_t end = clock();
    delete pObj;
    double expected = 248.03814970878705;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> airportLocations = {"146 253", "303 175", "411 187", "436 391", "565 405", "64 206", "647 672", "687 996", "710 907", "951 458"};
    vector<string> flights = {"8 4 26 83", "6 4 99 100", "8 0 6 36", "8 0 36 50", "6 3 58 72", "8 6 33 96", "9 8 18 58", "8 4 71 73", "9 2 16 85", "5 0 39 97", "8 6 68 77", "8 6 86 88", "0 7 27 37", "4 5 74 88", "0 6 15 36", "4 7 91 95", "4 7 32 73", "5 0 46 92", "5 0 13 31", "0 2 97 100"};
    AirlineInternet* pObj = new AirlineInternet();
    clock_t start = clock();
    double result = pObj->minimumRange(airportLocations, flights);
    clock_t end = clock();
    delete pObj;
    double expected = 211.58906693495885;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> airportLocations = {"14 869", "228 564", "247 619", "330 821", "332 162", "412 180", "539 139", "666 519", "722 743", "938 461"};
    vector<string> flights = {"0 8 5 72", "0 9 29 53", "3 6 76 90", "8 0 78 82", "6 2 51 73", "5 2 15 85", "5 0 17 71", "4 5 23 60", "2 5 40 57", "8 0 33 81", "0 2 59 99", "6 0 75 82", "8 0 71 81", "6 4 66 72", "4 2 64 71", "0 2 36 70", "2 0 91 93", "8 2 16 52", "9 4 92 99", "0 8 2 14"};
    AirlineInternet* pObj = new AirlineInternet();
    clock_t start = clock();
    double result = pObj->minimumRange(airportLocations, flights);
    clock_t end = clock();
    delete pObj;
    double expected = 236.23492119750847;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> airportLocations = {"136 863", "177 903", "302 954", "309 773", "372 760", "376 941", "481 452", "727 838", "809 746", "943 262"};
    vector<string> flights = {"4 2 16 84", "8 9 36 69", "6 4 34 51", "5 4 14 75", "0 4 89 91", "7 4 80 93", "6 4 37 73", "2 7 48 72", "8 4 79 88", "0 2 79 100", "0 2 80 92", "3 4 54 75", "4 3 19 23", "2 8 35 74", "6 0 50 77", "8 3 46 99", "6 0 11 32", "4 9 91 93", "0 3 5 57", "8 0 71 96"};
    AirlineInternet* pObj = new AirlineInternet();
    clock_t start = clock();
    double result = pObj->minimumRange(airportLocations, flights);
    clock_t end = clock();
    delete pObj;
    double expected = 263.75180895498966;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> airportLocations = {"146 758", "156 415", "156 534", "276 937", "401 562", "498 352", "633 712", "706 255", "864 793", "966 943"};
    vector<string> flights = {"2 7 13 99", "1 2 49 88", "3 1 36 95", "0 4 55 71", "6 7 30 36", "1 9 81 93", "0 8 71 85", "8 6 24 56", "4 7 10 68", "2 0 44 95", "2 1 35 65", "8 2 57 84", "2 6 76 100", "4 9 80 87", "0 4 88 97", "5 4 53 100", "8 5 3 83", "1 0 18 42", "7 2 11 93", "4 6 83 97"};
    AirlineInternet* pObj = new AirlineInternet();
    clock_t start = clock();
    double result = pObj->minimumRange(airportLocations, flights);
    clock_t end = clock();
    delete pObj;
    double expected = 197.5383984922363;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> airportLocations = {"144 366", "285 452", "374 251", "494 84", "542 342", "614 897", "665 817", "749 538", "857 70", "963 817"};
    vector<string> flights = {"0 1 99 100", "6 3 46 64", "4 6 8 67", "2 0 30 42", "3 6 94 98", "2 0 76 92", "6 0 37 49", "7 0 63 96", "4 2 8 18", "7 0 98 99", "0 8 50 51", "4 8 41 87", "7 5 47 85", "2 0 31 74", "0 1 89 94", "4 0 27 67", "5 1 17 26", "2 6 11 65", "7 0 75 81", "0 5 16 47"};
    AirlineInternet* pObj = new AirlineInternet();
    clock_t start = clock();
    double result = pObj->minimumRange(airportLocations, flights);
    clock_t end = clock();
    delete pObj;
    double expected = 255.73685645263805;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> airportLocations = {"141 839", "146 661", "248 204", "49 36", "55 674", "660 625", "670 968", "749 181", "841 96", "970 16"};
    vector<string> flights = {"2 6 96 98", "0 4 71 91", "4 9 61 68", "7 4 77 98", "0 2 75 99", "2 9 91 98", "6 4 49 76", "0 2 8 54", "7 8 67 83", "2 7 89 93", "5 0 76 90", "0 6 64 97", "8 6 98 99", "6 8 50 93", "0 6 80 91", "0 8 25 34", "9 8 77 90", "6 3 86 96", "2 0 71 73", "2 0 48 72"};
    AirlineInternet* pObj = new AirlineInternet();
    clock_t start = clock();
    double result = pObj->minimumRange(airportLocations, flights);
    clock_t end = clock();
    delete pObj;
    double expected = 298.1947982123529;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> airportLocations = {"168 72", "273 918", "309 15", "315 695", "359 240", "478 960", "734 275", "747 538", "811 810", "841 72"};
    vector<string> flights = {"4 9 66 85", "2 6 10 29", "5 0 21 37", "4 6 29 46", "2 5 17 99", "3 6 16 82", "5 3 88 90", "6 2 71 75", "1 8 99 100", "7 9 94 95", "4 0 36 90", "6 4 86 100", "6 7 33 67", "6 0 83 92", "8 1 64 98", "6 5 61 88", "4 5 94 95", "2 7 92 93", "8 4 16 78", "5 0 58 82"};
    AirlineInternet* pObj = new AirlineInternet();
    clock_t start = clock();
    double result = pObj->minimumRange(airportLocations, flights);
    clock_t end = clock();
    delete pObj;
    double expected = 236.523003893958;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> airportLocations = {"171 336", "287 304", "38 363", "407 326", "476 1", "506 881", "705 930", "743 455", "834 755", "985 777"};
    vector<string> flights = {"6 0 88 98", "4 6 79 85", "8 0 85 93", "4 8 10 60", "9 7 7 51", "1 4 36 61", "8 4 66 83", "7 4 44 79", "4 5 14 63", "8 0 97 99", "8 7 63 87", "6 5 7 42", "0 4 42 62", "2 0 54 63", "8 9 53 95", "0 4 36 69", "0 8 91 92", "6 2 48 65", "1 4 37 57", "3 1 24 93"};
    AirlineInternet* pObj = new AirlineInternet();
    clock_t start = clock();
    double result = pObj->minimumRange(airportLocations, flights);
    clock_t end = clock();
    delete pObj;
    double expected = 284.62206264067163;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> airportLocations = {"131 21", "152 891", "261 105", "394 979", "479 207", "557 46", "633 882", "649 835", "783 68", "968 983"};
    vector<string> flights = {"0 7 48 86", "2 1 29 42", "0 8 82 89", "0 9 5 59", "4 8 34 64", "5 8 74 94", "1 8 76 99", "5 2 6 21", "5 0 5 19", "9 1 8 56", "2 4 88 98", "8 2 62 90", "8 0 43 80", "5 8 12 83", "5 6 91 98", "7 1 95 96", "8 2 1 32", "0 6 9 15", "5 4 91 97", "3 0 60 72"};
    AirlineInternet* pObj = new AirlineInternet();
    clock_t start = clock();
    double result = pObj->minimumRange(airportLocations, flights);
    clock_t end = clock();
    delete pObj;
    double expected = 396.7609481791254;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> airportLocations = {"180 267", "323 459", "460 838", "471 19", "589 307", "608 978", "675 516", "818 522", "938 623", "983 29"};
    vector<string> flights = {"9 4 10 48", "2 0 78 84", "1 0 64 79", "0 4 62 97", "5 9 59 83", "0 6 49 85", "2 4 92 96", "0 3 73 94", "0 5 81 92", "0 6 27 66", "0 6 23 53", "7 0 82 86", "6 0 32 56", "6 4 83 98", "4 8 85 93", "3 8 78 81", "5 4 75 81", "6 8 96 99", "8 4 15 67", "0 2 54 90"};
    AirlineInternet* pObj = new AirlineInternet();
    clock_t start = clock();
    double result = pObj->minimumRange(airportLocations, flights);
    clock_t end = clock();
    delete pObj;
    double expected = 260.3098290838234;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> airportLocations = {"194 176", "288 520", "330 12", "350 351", "375 776", "473 767", "551 89", "652 118", "926 859", "975 779"};
    vector<string> flights = {"8 6 94 98", "6 0 3 37", "6 0 22 90", "2 9 0 95", "8 0 64 86", "2 5 16 64", "0 5 8 30", "0 2 30 93", "9 5 71 84", "0 5 10 38", "6 4 95 98", "7 3 77 81", "4 1 78 87", "6 0 30 35", "8 1 69 97", "0 8 73 91", "8 0 52 77", "5 0 77 87", "3 8 17 42", "0 6 63 71"};
    AirlineInternet* pObj = new AirlineInternet();
    clock_t start = clock();
    double result = pObj->minimumRange(airportLocations, flights);
    clock_t end = clock();
    delete pObj;
    double expected = 346.1068830731408;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> airportLocations = {"17 936", "277 961", "320 185", "35 668", "392 675", "513 911", "60 215", "633 632", "719 934", "89 222"};
    vector<string> flights = {"2 4 45 80", "8 2 93 94", "2 4 97 98", "5 2 60 83", "6 8 59 73", "1 9 67 90", "8 0 33 41", "0 4 25 64", "6 1 58 74", "5 6 87 90", "2 0 4 20", "0 8 42 95", "0 8 71 78", "0 8 29 62", "2 4 6 25", "0 4 10 84", "4 8 32 69", "3 0 13 53", "9 0 41 49", "4 2 98 100"};
    AirlineInternet* pObj = new AirlineInternet();
    clock_t start = clock();
    double result = pObj->minimumRange(airportLocations, flights);
    clock_t end = clock();
    delete pObj;
    double expected = 263.0017456990797;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> airportLocations = {"144 832", "24 518", "245 325", "408 368", "505 754", "73 771", "743 339", "905 570", "965 116", "988 746"};
    vector<string> flights = {"8 2 3 89", "7 0 38 70", "0 8 86 89", "0 8 94 100", "2 4 57 100", "8 7 21 91", "4 0 56 97", "8 6 91 92", "0 8 45 48", "8 2 74 93", "6 5 9 83", "3 8 25 98", "8 7 99 100", "2 8 83 99", "7 8 29 42", "7 4 91 92", "6 5 66 98", "4 0 50 54", "4 0 94 98", "0 1 76 81"};
    AirlineInternet* pObj = new AirlineInternet();
    clock_t start = clock();
    double result = pObj->minimumRange(airportLocations, flights);
    clock_t end = clock();
    delete pObj;
    double expected = 225.28149653732402;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> airportLocations = {"0 135", "16 603", "260 625", "41 34", "418 597", "635 159", "769 165", "769 793", "900 19", "97 625"};
    vector<string> flights = {"4 0 32 44", "8 0 20 72", "7 4 93 96", "5 6 33 93", "2 0 1 40", "4 0 47 75", "5 3 9 16", "0 6 9 22", "4 0 61 93", "6 5 54 77", "4 2 33 49", "2 8 24 97", "0 5 16 20", "0 1 39 77", "4 0 48 49", "2 8 80 96", "0 6 69 87", "9 2 41 70", "1 0 99 100", "4 0 9 62"};
    AirlineInternet* pObj = new AirlineInternet();
    clock_t start = clock();
    double result = pObj->minimumRange(airportLocations, flights);
    clock_t end = clock();
    delete pObj;
    double expected = 297.50398887937513;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> airportLocations = {"137 709", "15 125", "152 263", "326 785", "503 888", "628 939", "752 450", "834 537", "965 246", "999 21"};
    vector<string> flights = {"4 0 74 80", "2 6 53 91", "4 8 52 62", "8 0 63 75", "0 7 95 97", "2 8 34 66", "5 6 84 97", "5 6 75 91", "0 1 73 77", "0 7 83 99", "2 0 83 92", "0 6 41 99", "1 8 51 82", "0 3 99 100", "9 8 42 94", "0 6 55 94", "6 8 19 84", "0 3 93 95", "8 5 59 82", "0 2 35 86"};
    AirlineInternet* pObj = new AirlineInternet();
    clock_t start = clock();
    double result = pObj->minimumRange(airportLocations, flights);
    clock_t end = clock();
    delete pObj;
    double expected = 331.37234028790965;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> airportLocations = {"0 0", "1 0"};
    vector<string> flights = {"0 1 0 20", "0 1 1 21", "0 1 2 22", "0 1 3 23", "0 1 4 24", "0 1 5 25", "0 1 6 26", "0 1 7 27", "0 1 8 28", "0 1 9 29", "0 1 10 30", "0 1 11 31", "0 1 12 32", "0 1 13 33", "0 1 14 34", "0 1 15 35", "0 1 16 36", "0 1 17 37", "0 1 18 38", "0 1 19 39"};
    AirlineInternet* pObj = new AirlineInternet();
    clock_t start = clock();
    double result = pObj->minimumRange(airportLocations, flights);
    clock_t end = clock();
    delete pObj;
    double expected = 0.04999999999999986;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> airportLocations = {"0 0", "1000 1000"};
    vector<string> flights = {"0 1 0 20", "0 1 1 21", "0 1 2 22", "0 1 3 23", "0 1 4 24", "0 1 5 25", "0 1 6 26", "0 1 7 27", "0 1 8 28", "0 1 9 29", "0 1 10 30", "0 1 11 31", "0 1 12 32", "0 1 13 33", "0 1 14 34", "0 1 15 35", "0 1 16 36", "0 1 17 37", "0 1 18 38", "0 1 19 39"};
    AirlineInternet* pObj = new AirlineInternet();
    clock_t start = clock();
    double result = pObj->minimumRange(airportLocations, flights);
    clock_t end = clock();
    delete pObj;
    double expected = 70.71067811865476;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> airportLocations = {"0 0", "0 1000", "1000 0", "1000 1000", "500 500", "499 499", "501 501", "501 499", "499 501", "500 501"};
    vector<string> flights = {"0 3 0 1000", "0 3 0 1000", "0 3 0 1000", "0 3 0 1000", "0 3 0 1000", "3 0 0 1000", "3 0 0 1000", "3 0 0 1000", "3 0 0 1000", "3 0 0 1000", "1 2 0 1000", "1 2 0 1000", "1 2 0 1000", "1 2 0 1000", "1 2 0 1000", "2 1 0 1000", "2 1 0 1000", "2 1 0 1000", "2 1 0 1000", "2 1 0 1000"};
    AirlineInternet* pObj = new AirlineInternet();
    clock_t start = clock();
    double result = pObj->minimumRange(airportLocations, flights);
    clock_t end = clock();
    delete pObj;
    double expected = 352.8462838120872;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> airportLocations = {"101 591", "283 183", "346 696", "436 638", "738 46"};
    vector<string> flights = {"3 0 855 890", "2 0 260 698", "3 4 229 743", "1 2 519 898", "3 1 863 955", "4 0 407 993", "2 4 872 969", "0 3 320 663"};
    AirlineInternet* pObj = new AirlineInternet();
    clock_t start = clock();
    double result = pObj->minimumRange(airportLocations, flights);
    clock_t end = clock();
    delete pObj;
    double expected = 298.18759041416865;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> airportLocations = {"0 0", "199 1", "201 2", "399 3", "602 5", "807 12", "987 333", "999 657", "994 899", "998 998"};
    vector<string> flights = {"0 6 0 1", "1 7 0 1", "2 8 0 1", "3 9 0 1", "4 6 0 1", "5 7 0 1", "1 8 0 1", "2 9 0 1", "3 6 0 1", "4 7 0 1", "5 8 0 1", "0 9 0 1", "6 0 0 1", "7 0 0 1", "8 0 0 1", "9 0 0 1", "7 2 0 1", "7 3 0 1"};
    AirlineInternet* pObj = new AirlineInternet();
    clock_t start = clock();
    double result = pObj->minimumRange(airportLocations, flights);
    clock_t end = clock();
    delete pObj;
    double expected = 212.9147462285361;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> airportLocations = {"0 0", "1000 0"};
    vector<string> flights = {"0 1 1 2"};
    AirlineInternet* pObj = new AirlineInternet();
    clock_t start = clock();
    double result = pObj->minimumRange(airportLocations, flights);
    clock_t end = clock();
    delete pObj;
    double expected = 500.0;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=14768757&rd=11127&pm=8495
********************************************************************************
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <sstream>
#include <iostream>
#include <cmath>
#include <string>
#define Eps 1E-10
#define sqrt(a) ((a) < 0 ? 0 : sqrt(a))
using namespace std;
class AirlineInternet {
  public:
    int pos[25][2];
    int info[25][4];
    double delta[25][2];
    double start[25][2];
    int N, M;
    double alltime[8005];
    int s;
    double sqr(double x) {
      return x * x;
    }
    int OK(double x) {
      int i, j, k, l;
      int Graph[35][35];
      double cntpos[35][2];
      double a, b, c, d;
      s = 0;
      for (i = 0; i < M; i ++)
        for (j = i + 1; j < M; j ++) {
          a = sqr(delta[i][0] - delta[j][0]) + sqr(delta[i][1] - delta[j][1]);
          c = sqr(start[i][0] - delta[i][0] * info[i][2] - start[j][0] + delta[j][0] * info[j][2]) + sqr(start[i][1] - delta[i][1] * info[i][2] - start[j][1] + delta[j][1] * info[j][2]) - sqr(x);
          b = 2 * (delta[i][0] - delta[j][0]) * (start[i][0] - delta[i][0] * info[i][2] - start[j][0] + delta[j][0] * info[j][2]) + 2 * (delta[i][1] - delta[j][1]) * (start[i][1] - delta[i][1] * info[i][2] - start[j][1] + delta[j][1] * info[j][2]);
          d = sqr(b) - 4 * a * c;
          if (d > -Eps && a > Eps) {
            alltime[s ++] = (-b + sqrt(d)) / 2 / a;
            if (alltime[s - 1] <= info[i][2] || alltime[s - 1] <= info[j][2] || alltime[s - 1] >= info[i][3] || alltime[s - 1] >= info[j][3])
              s --;
            alltime[s ++] = (-b - sqrt(d)) / 2 / a;
            if (alltime[s - 1] <= info[i][2] || alltime[s - 1] <= info[j][2] || alltime[s - 1] >= info[i][3] || alltime[s - 1] >= info[j][3])
              s --;            
          }
        }
      for (i = 0; i < M; i ++)
        for (j = 0; j < N; j ++) {
          a = sqr(delta[i][0]) + sqr(delta[i][1]);
          c = sqr(start[i][0] - delta[i][0] * info[i][2] - pos[j][0]) + sqr(start[i][1] - delta[i][1] * info[i][2] - pos[j][1]) - sqr(x);
          b = 2 * (delta[i][0]) * (start[i][0] - delta[i][0] * info[i][2] - pos[j][0]) + 2 * (delta[i][1]) * (start[i][1] - delta[i][1] * info[i][2] - pos[j][1]);
          d = sqr(b) - 4 * a * c;
          if (d > -Eps && a > Eps) {
            alltime[s ++] = (-b + sqrt(d)) / 2 / a;
            if (alltime[s - 1] <= info[i][2] || alltime[s - 1] >= info[i][3])
              s --;
            alltime[s ++] = (-b - sqrt(d)) / 2 / a;
            if (alltime[s - 1] <= info[i][2] || alltime[s - 1] >= info[i][3])
              s --;            
          }
        }
      alltime[s ++] = 0;
      alltime[s ++] = 1000;
      sort(alltime, alltime + s);
      for (i = 0; i < s - 1; i ++) {
        double cnttime = (alltime[i + 1] + alltime[i]) / 2;
        for (j = 0; j < N; j ++) {
          cntpos[j][0] = pos[j][0];
          cntpos[j][1] = pos[j][1];
        }
        for (j = 0; j < M; j ++)
          if (cnttime <= info[j][2]) {
            cntpos[j + N][0] = start[j][0];
            cntpos[j + N][1] = start[j][1];
          }
          else
            if (cnttime >= info[j][3]) {
              cntpos[j + N][0] = pos[info[j][1]][0];
              cntpos[j + N][1] = pos[info[j][1]][1];
            }
            else {
              cntpos[j + N][0] = start[j][0] + (cnttime - info[j][2]) * delta[j][0];
              cntpos[j + N][1] = start[j][1] + (cnttime - info[j][2]) * delta[j][1];
            }
        for (j = 0; j < N + M; j ++)
          for (k = j; k < N + M; k ++)
            if ((sqr(cntpos[j][0] - cntpos[k][0]) + sqr(cntpos[j][1] - cntpos[k][1])) <= sqr(x + Eps))
              Graph[j][k] = Graph[k][j] = 1;
            else
              Graph[j][k] = Graph[k][j] = 0;
        for (l = 0; l < N + M; l ++)
          for (j = 0; j < N + M; j ++)
            for (k = 0; k < N + M; k ++)
              Graph[j][k] = (Graph[j][k] || (Graph[j][l] && Graph[l][k]));
        for (j = N; j < N + M; j ++) {
          for (k = 0; k < N; k ++)
            if (Graph[j][k])
              break;
          if (k >= N)
            return 0;
        }
      }
      return 1;
    }
    double minimumRange(vector <string> airportLocations, vector <string> flights) {
      double f, r, m;
      int i;
      N = airportLocations.size();
      M = flights.size();
      for (i = 0; i < N; i ++) {
        istringstream sin(airportLocations[i]);
        sin >> pos[i][0] >> pos[i][1];
      }
      for (i = 0; i < M; i ++) {
        istringstream sin(flights[i]);
        sin >> info[i][0] >> info[i][1] >> info[i][2] >> info[i][3];
        delta[i][0] = (double)(pos[info[i][1]][0] - pos[info[i][0]][0]) / (double)(info[i][3] - info[i][2]);
        delta[i][1] = (double)(pos[info[i][1]][1] - pos[info[i][0]][1]) / (double)(info[i][3] - info[i][2]);;
        start[i][0] = pos[info[i][0]][0];
        start[i][1] = pos[info[i][0]][1];
      }
      f = 0;
      r = 2000;
      while (f + Eps < r) {
        m = (f + r) / 2;
        if (OK(m))
          r = m;
        else
          f = m;
      }
      return (f + r) / 2;
    }
};
 
//Powered by [KawigiEdit] 2.0!
;

********************************************************************************
*******************************************************************************/