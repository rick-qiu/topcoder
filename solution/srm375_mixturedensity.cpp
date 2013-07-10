/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8269
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

class MixtureDensity {
public:
    double getDensity(vector<string> ingredients);
};

double MixtureDensity::getDensity(vector<string> ingredients) {
    double ret;
    return ret;
}


int test0() {
    vector<string> ingredients = {"200 ml of oil, weighing 180 g"};
    MixtureDensity* pObj = new MixtureDensity();
    clock_t start = clock();
    double result = pObj->getDensity(ingredients);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> ingredients = {"100 ml of dichloromethane, weighing 130 g", "100 ml of sea water, weighing 103 g"};
    MixtureDensity* pObj = new MixtureDensity();
    clock_t start = clock();
    double result = pObj->getDensity(ingredients);
    clock_t end = clock();
    delete pObj;
    double expected = 1.165;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> ingredients = {"500 ml of beer, weighing 525 g", "100 ml of vodka, weighing 92 g"};
    MixtureDensity* pObj = new MixtureDensity();
    clock_t start = clock();
    double result = pObj->getDensity(ingredients);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0283333333333333;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> ingredients = {"1000 ml of water, weighing 1000 g", "500 ml of orange juice concentrate, weighing 566 g"};
    MixtureDensity* pObj = new MixtureDensity();
    clock_t start = clock();
    double result = pObj->getDensity(ingredients);
    clock_t end = clock();
    delete pObj;
    double expected = 1.044;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> ingredients = {"1000 ml of something l i g h t, weighing 1 g"};
    MixtureDensity* pObj = new MixtureDensity();
    clock_t start = clock();
    double result = pObj->getDensity(ingredients);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0010;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> ingredients = {"992 ml of helium, weighing 2 g", "998 ml of neon, weighing 3 g"};
    MixtureDensity* pObj = new MixtureDensity();
    clock_t start = clock();
    double result = pObj->getDensity(ingredients);
    clock_t end = clock();
    delete pObj;
    double expected = 0.002512562814070352;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> ingredients = {"1 ml of topcoder, weighing 1000 g"};
    MixtureDensity* pObj = new MixtureDensity();
    clock_t start = clock();
    double result = pObj->getDensity(ingredients);
    clock_t end = clock();
    delete pObj;
    double expected = 1000.0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> ingredients = {"1000 ml of light stuff, weighing 1 g", "1 ml of heavy stuff, weighing 1000 g"};
    MixtureDensity* pObj = new MixtureDensity();
    clock_t start = clock();
    double result = pObj->getDensity(ingredients);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> ingredients = {"566 ml of water, weighing 566 g"};
    MixtureDensity* pObj = new MixtureDensity();
    clock_t start = clock();
    double result = pObj->getDensity(ingredients);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> ingredients = {"1 ml of null, weighing 1 g"};
    MixtureDensity* pObj = new MixtureDensity();
    clock_t start = clock();
    double result = pObj->getDensity(ingredients);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> ingredients = {"7 ml of a b c d e f g h i j k l m n, weighing 6 g"};
    MixtureDensity* pObj = new MixtureDensity();
    clock_t start = clock();
    double result = pObj->getDensity(ingredients);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8571428571428571;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> ingredients = {"914 ml of beer, weighing 902 g", "996 ml of water, weighing 369 g", "736 ml of whiskey, weighing 741 g", "385 ml of vodka, weighing 239 g"};
    MixtureDensity* pObj = new MixtureDensity();
    clock_t start = clock();
    double result = pObj->getDensity(ingredients);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7426591883866711;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> ingredients = {"968 ml of apple juice, weighing 329 g"};
    MixtureDensity* pObj = new MixtureDensity();
    clock_t start = clock();
    double result = pObj->getDensity(ingredients);
    clock_t end = clock();
    delete pObj;
    double expected = 0.33987603305785125;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> ingredients = {"167 ml of iced tea, weighing 638 g", "900 ml of milk, weighing 858 g", "843 ml of orange juice, weighing 252 g", "6 ml of coffee, weighing 698 g", "523 ml of pineapple juice, weighing 577 g", "132 ml of raspberry juice, weighing 202 g", "97 ml of cytric acid, weighing 915 g", "482 ml of orange juice, weighing 159 g", "214 ml of water, weighing 481 g", "646 ml of orange juice, weighing 814 g"};
    MixtureDensity* pObj = new MixtureDensity();
    clock_t start = clock();
    double result = pObj->getDensity(ingredients);
    clock_t end = clock();
    delete pObj;
    double expected = 1.3950124688279302;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> ingredients = {"402 ml of whiskey, weighing 470 g", "510 ml of rum, weighing 101 g", "293 ml of beer, weighing 794 g", "575 ml of beer, weighing 786 g", "882 ml of whiskey, weighing 788 g", "315 ml of whiskey, weighing 988 g", "388 ml of wine, weighing 441 g", "92 ml of rum, weighing 563 g", "27 ml of wine, weighing 987 g", "136 ml of whiskey, weighing 789 g", "509 ml of rum, weighing 354 g", "998 ml of beer, weighing 862 g", "223 ml of alcohol, weighing 635 g", "147 ml of water, weighing 903 g", "848 ml of vodka, weighing 823 g", "973 ml of rum, weighing 313 g", "979 ml of alcohol, weighing 532 g", "905 ml of alcohol, weighing 833 g", "643 ml of whiskey, weighing 855 g", "479 ml of water, weighing 401 g"};
    MixtureDensity* pObj = new MixtureDensity();
    clock_t start = clock();
    double result = pObj->getDensity(ingredients);
    clock_t end = clock();
    delete pObj;
    double expected = 1.2803177063153817;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> ingredients = {"326 ml of cytric acid, weighing 429 g", "564 ml of milk, weighing 185 g", "481 ml of pineapple juice, weighing 825 g", "174 ml of pineapple juice, weighing 251 g", "103 ml of water, weighing 241 g", "553 ml of cytric acid, weighing 747 g", "589 ml of water, weighing 396 g", "740 ml of milk, weighing 447 g", "508 ml of pineapple juice, weighing 750 g", "404 ml of pineapple juice, weighing 228 g", "650 ml of water, weighing 885 g", "628 ml of pineapple juice, weighing 647 g", "336 ml of apple juice, weighing 420 g", "266 ml of orange juice, weighing 230 g", "339 ml of cytric acid, weighing 931 g", "926 ml of apple juice, weighing 173 g", "637 ml of milk, weighing 32 g", "202 ml of orange juice, weighing 366 g", "732 ml of milk, weighing 395 g", "759 ml of pineapple juice, weighing 803 g", "320 ml of cytric acid, weighing 276 g", "24 ml of hot tea, weighing 545 g", "731 ml of pineapple juice, weighing 603 g", "683 ml of milk, weighing 21 g", "842 ml of apple juice, weighing 677 g", "382 ml of pineapple juice, weighing 709 g", "704 ml of pineapple juice, weighing 149 g", "943 ml of raspberry juice, weighing 673 g", "770 ml of iced tea, weighing 7 g", "200 ml of cytric acid, weighing 802 g", "1 ml of iced tea, weighing 827 g", "143 ml of water, weighing 960 g", "833 ml of milk, weighing 543 g", "732 ml of coffee, weighing 809 g", "75 ml of iced tea, weighing 81 g", "121 ml of iced tea, weighing 629 g", "551 ml of hot tea, weighing 501 g", "588 ml of raspberry juice, weighing 916 g", "162 ml of pineapple juice, weighing 708 g", "596 ml of cranberry juice, weighing 386 g", "818 ml of orange juice, weighing 21 g", "552 ml of apple juice, weighing 109 g", "401 ml of raspberry juice, weighing 220 g", "889 ml of hot tea, weighing 586 g", "268 ml of water, weighing 19 g", "324 ml of water, weighing 467 g", "365 ml of raspberry juice, weighing 297 g", "997 ml of coffee, weighing 521 g", "52 ml of milk, weighing 880 g", "714 ml of hot tea, weighing 222 g"};
    MixtureDensity* pObj = new MixtureDensity();
    clock_t start = clock();
    double result = pObj->getDensity(ingredients);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9533160579804033;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> ingredients = {"355 ml of water, weighing 544 g", "304 ml of alcohol, weighing 481 g", "846 ml of alcohol, weighing 588 g", "132 ml of gin, weighing 324 g", "17 ml of water, weighing 968 g", "637 ml of gin, weighing 959 g", "421 ml of beer, weighing 768 g", "746 ml of gin, weighing 19 g", "362 ml of gin, weighing 822 g", "254 ml of alcohol, weighing 755 g", "191 ml of gin, weighing 15 g", "987 ml of water, weighing 462 g", "715 ml of beer, weighing 969 g", "371 ml of alcohol, weighing 748 g", "848 ml of vodka, weighing 410 g", "411 ml of rum, weighing 716 g", "706 ml of water, weighing 827 g", "400 ml of rum, weighing 650 g", "639 ml of alcohol, weighing 551 g", "617 ml of gin, weighing 468 g", "341 ml of beer, weighing 797 g", "824 ml of wine, weighing 190 g", "509 ml of whiskey, weighing 428 g", "355 ml of gin, weighing 509 g", "640 ml of rum, weighing 213 g", "594 ml of wine, weighing 820 g", "140 ml of alcohol, weighing 436 g", "895 ml of vodka, weighing 737 g", "424 ml of vodka, weighing 967 g", "830 ml of beer, weighing 258 g", "581 ml of alcohol, weighing 838 g", "743 ml of beer, weighing 632 g", "501 ml of rum, weighing 741 g", "571 ml of beer, weighing 737 g", "987 ml of gin, weighing 286 g", "698 ml of beer, weighing 674 g", "956 ml of beer, weighing 492 g", "625 ml of rum, weighing 608 g", "419 ml of water, weighing 514 g", "18 ml of whiskey, weighing 663 g", "425 ml of wine, weighing 701 g", "303 ml of whiskey, weighing 544 g", "973 ml of wine, weighing 889 g", "270 ml of wine, weighing 200 g", "195 ml of whiskey, weighing 165 g", "552 ml of beer, weighing 91 g", "13 ml of beer, weighing 323 g", "350 ml of gin, weighing 656 g", "921 ml of water, weighing 434 g", "135 ml of vodka, weighing 471 g"};
    MixtureDensity* pObj = new MixtureDensity();
    clock_t start = clock();
    double result = pObj->getDensity(ingredients);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0897580300617549;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> ingredients = {"499 ml of o, weighing 432 g"};
    MixtureDensity* pObj = new MixtureDensity();
    clock_t start = clock();
    double result = pObj->getDensity(ingredients);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8657314629258517;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> ingredients = {"997 ml of lduipcbsbjdhiktxph, weighing 1000 g", "999 ml of geiikyevhnwczwbq krvev, weighing 997 g", "999 ml of vny o mkzsrn xxgraawmiw, weighing 1000 g", "1000 ml of fit ksvf xiayanu kmiw e, weighing 999 g", "997 ml of es gm wduxvgks w lfwnyn, weighing 997 g", "997 ml of j tmpminkkkheaqv, weighing 1000 g", "998 ml of addgzjp chjz ogxeppll, weighing 998 g"};
    MixtureDensity* pObj = new MixtureDensity();
    clock_t start = clock();
    double result = pObj->getDensity(ingredients);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0005724917704308;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> ingredients = {"995 ml of q s tv r, weighing 9 g", "998 ml of r t j e k, weighing 10 g", "998 ml of zk w d ty yt v g, weighing 14 g", "997 ml of tedv la tyrh tmq, weighing 7 g", "996 ml of tki lm j w, weighing 6 g", "996 ml of f bmq c, weighing 10 g", "998 ml of ovlyc eo s, weighing 12 g", "998 ml of d de hh qc s kd, weighing 12 g", "996 ml of gd cx p g f, weighing 16 g", "998 ml of uk b b as w w, weighing 19 g", "998 ml of a t f cp l, weighing 4 g", "996 ml of b s pdg d gf, weighing 16 g", "1000 ml of b q s, weighing 1 g", "997 ml of zcw k fx ju t hyg, weighing 2 g"};
    MixtureDensity* pObj = new MixtureDensity();
    clock_t start = clock();
    double result = pObj->getDensity(ingredients);
    clock_t end = clock();
    delete pObj;
    double expected = 0.009884678747940691;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> ingredients = {"68 ml of bgrgngwjdnigablepejpalrio, weighing 997 g", "58 ml of pnmxrdpchyrjfivyufuqxteq, weighing 756 g", "83 ml of iadvaljeutckkgvp, weighing 706 g", "58 ml of uprntxwibonbfevappmmzovbi, weighing 533 g", "73 ml of bohzwwjbditsxzzyyeltzfczg, weighing 837 g", "75 ml of qjizuvogotrzizwhw, weighing 589 g", "86 ml of aomqtykldbcwccpwmqwhlx, weighing 660 g", "74 ml of aejuqehsmldfiubjsnvzucomb, weighing 655 g", "50 ml of xhipzlgguabdhcdbpu, weighing 745 g", "57 ml of dxzcbsduxsmzomlrde, weighing 537 g", "86 ml of zjogkiwsvxyzmfzmavjozdlmt, weighing 855 g", "93 ml of kyzogzpeiypagwbiqml, weighing 923 g", "60 ml of ushetobkipbbtqutsdf, weighing 833 g", "54 ml of hnitmrmefibvoipqgcgcpwcot, weighing 778 g", "94 ml of etjrpkvqqaldbgcxyaogefrni, weighing 863 g", "60 ml of huvisswsivfnktjajrm, weighing 509 g", "74 ml of idmxhqmjepcjugsr, weighing 831 g", "76 ml of xofvmizemtbekdobczhnrhcvw, weighing 543 g", "50 ml of hkmlkezdguhvvducadprlbde, weighing 619 g", "88 ml of hihbptioobdxnyarxaoxqgiii, weighing 884 g", "91 ml of vbyhdrfpaapppbxfwpevsybiy, weighing 678 g", "96 ml of arsdggojrlngzcruibn, weighing 817 g", "76 ml of yxaigzhhpqdipafm, weighing 533 g", "61 ml of sanxgxtkpawisvobzpvsb, weighing 918 g", "87 ml of warhcjksuwmvjyrdtgnadoohp, weighing 806 g", "76 ml of gmavfwaqotgyvrmhlnap, weighing 761 g", "68 ml of bfvbodllaluraeuepmshjbhvg, weighing 779 g", "62 ml of chmhjsrhasvljbmxdzdjn, weighing 711 g", "83 ml of xprdwxqriyvqngkpr, weighing 514 g", "92 ml of nxvqwpotaoikdtoiotmebqmfo, weighing 718 g", "85 ml of falnwxkodadylglakllcqbopc, weighing 952 g", "91 ml of weeklicrxouxourhjqdamolsh, weighing 519 g", "71 ml of zchyirjwnwzlmnhjumuikgksq, weighing 855 g", "89 ml of agvbpdidgmfwhjj, weighing 754 g", "91 ml of rwrijqpjllsvbdzurckdx, weighing 834 g", "100 ml of gujkmkddiutpnwwg, weighing 818 g", "58 ml of jzgurctqcegdncogjsfxhwxqc, weighing 960 g", "72 ml of achsuvorwicslfchcrxgo, weighing 574 g", "89 ml of hxpbymawesdrwcpmbvrjeholq, weighing 939 g", "68 ml of fpbvqxuoktrwwpmrfb, weighing 787 g", "94 ml of gxuscbmcqxdctwnbeqlzx, weighing 814 g", "60 ml of kdtrgehyokasfpeeom, weighing 969 g", "81 ml of jntfpaksoutcsjrvgejuttmqu, weighing 568 g", "82 ml of lipjowkoztblbkilennpqc, weighing 974 g", "86 ml of aswnbzjlkoljzyxckgjexawzu, weighing 651 g"};
    MixtureDensity* pObj = new MixtureDensity();
    clock_t start = clock();
    double result = pObj->getDensity(ingredients);
    clock_t end = clock();
    delete pObj;
    double expected = 9.882078225335668;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> ingredients = {"645 ml of ljkygpqvarhjctozxcujkoud, weighing 121 g", "513 ml of vuzplpgyyvtamllicgfnuvgl, weighing 498 g", "526 ml of iqvxptqeasvopvqvirfpiuki, weighing 573 g", "817 ml of eiepviivekmsoltgoilseaodc, weighing 76 g", "76 ml of idynbdxgsqydiquuzfunkjlhq, weighing 215 g", "434 ml of jvzazzjjeayxrcjrwqjlaxop, weighing 739 g", "722 ml of vmgtsqsvrothwbipycbuwkik, weighing 805 g", "632 ml of fkftnquveawbqxpcwcidukts, weighing 219 g", "431 ml of umqskaaubesbstuooqikdslr, weighing 833 g", "799 ml of scgvbrrwfvjmcmtlhwabxoor, weighing 523 g", "73 ml of zwrkonsoglvykllymjcepzetpe, weighing 16 g", "942 ml of qipugpeijemjlpoivdtrptrl, weighing 590 g", "68 ml of vpihsvujaumkiasrwqvzyicung, weighing 55 g", "262 ml of mpgerblzxtetpnosnshhqotl, weighing 220 g", "57 ml of thhptsdxxihnocauujaydiods, weighing 685 g", "865 ml of xnudxmpqejwytjrctmcuxbbv, weighing 191 g", "318 ml of ghucuiqadrzqofidmxygwswh, weighing 441 g", "218 ml of qwdxrzsmnacsspfroueiglth, weighing 539 g", "260 ml of mzoepyftjsvioxwzyhosepem, weighing 168 g", "368 ml of ejeyxrlpslvjlowfsxlepcva, weighing 503 g", "729 ml of mgfhknuoddhmkqmpnlcsuzrh, weighing 148 g", "773 ml of sbrwadhicdplynxkiysafpii, weighing 305 g", "193 ml of hixpkvzpdkvgnqdnojbvdple, weighing 860 g", "548 ml of vfcrtpffrcgxilkzgqldhada, weighing 403 g", "113 ml of tzdgqmaqrqeedrbextsufams, weighing 615 g", "751 ml of rbhvvizjvomucokwzsarabte, weighing 181 g", "129 ml of efpgvnjbqxnbxrlolyhacgfo, weighing 136 g", "768 ml of tvbtmtkmgtkloqaalkjgrjlq, weighing 352 g", "252 ml of rmxeonqxcrmvlsxwptzbqkoo, weighing 260 g", "591 ml of oxjllgixqdzmuqbncplvatki, weighing 635 g", "468 ml of autbtuxgetwofswabjhyezaq, weighing 166 g", "964 ml of ygsjgynhqhxrzyzmmcnefhzj, weighing 715 g", "833 ml of ipbjeitwvqbjjmbrpejwvqaf, weighing 731 g", "751 ml of tqeqdhvebdljntodihtodanc, weighing 674 g", "942 ml of ctldpgrzwyzfncikxpqcwyntb, weighing 31 g", "137 ml of tyieypkulsniwljusedfaxro, weighing 738 g", "755 ml of trqfjpduochnifzuvzwbcxam, weighing 401 g", "476 ml of btloobhxdthktanrudrrzusg, weighing 236 g", "187 ml of kajinxjzbshowetnrbxyrnwe, weighing 403 g", "653 ml of cfshxfpdreuhyklbtgweoqrd, weighing 769 g", "495 ml of icgvnbhycqacsdajvcqszjynq, weighing 54 g", "195 ml of koisdimytdboryswashrrodxa, weighing 48 g", "866 ml of ypjtxxhwqjrygiljtgwfyyhx, weighing 445 g", "222 ml of fdbqtjshxeiclcqtpwkyqlwu, weighing 451 g", "463 ml of ebuvvmlybozvxiavggjjijyy, weighing 108 g", "575 ml of gpglmnctoslgusmfopelbklv, weighing 748 g", "744 ml of sqtdupxkjxxounogvlvqsigl, weighing 787 g", "636 ml of jvoompgvfewcbvbhgefjvcaf, weighing 310 g", "992 ml of nidghztxhvnkqwrkwwlpbzft, weighing 147 g", "935 ml of yiptqegvaqjkciajrcoembkb, weighing 937 g"};
    MixtureDensity* pObj = new MixtureDensity();
    clock_t start = clock();
    double result = pObj->getDensity(ingredients);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7951991437963458;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> ingredients = {"3 ml of l y, weighing 4 g", "4 ml of r z, weighing 5 g", "10 ml of m n, weighing 5 g", "1 ml of e g, weighing 9 g", "1 ml of t g, weighing 8 g", "2 ml of i g, weighing 9 g", "9 ml of q m, weighing 1 g", "7 ml of m u, weighing 1 g", "2 ml of i a, weighing 3 g", "9 ml of l k, weighing 7 g", "10 ml of z y, weighing 6 g", "9 ml of o w, weighing 5 g", "6 ml of j d, weighing 4 g", "8 ml of f w, weighing 2 g", "5 ml of g v, weighing 6 g", "6 ml of u z, weighing 4 g", "9 ml of i e, weighing 7 g", "5 ml of y f, weighing 4 g", "8 ml of r x, weighing 2 g", "7 ml of q i, weighing 7 g", "5 ml of c b, weighing 10 g", "9 ml of k g, weighing 2 g", "9 ml of k q, weighing 7 g", "10 ml of c y, weighing 4 g", "10 ml of k l, weighing 2 g", "1 ml of j o, weighing 7 g", "9 ml of a s, weighing 8 g", "7 ml of i l, weighing 6 g", "7 ml of s a, weighing 8 g", "1 ml of s s, weighing 6 g", "8 ml of v j, weighing 10 g", "8 ml of q b, weighing 7 g", "10 ml of b b, weighing 9 g", "8 ml of j t, weighing 9 g", "3 ml of f x, weighing 8 g", "7 ml of j q, weighing 8 g", "10 ml of q m, weighing 4 g", "3 ml of v r, weighing 10 g", "1 ml of o r, weighing 9 g", "3 ml of s l, weighing 2 g", "4 ml of o t, weighing 7 g", "9 ml of v y, weighing 6 g", "7 ml of s x, weighing 4 g", "3 ml of m p, weighing 5 g", "4 ml of l j, weighing 1 g", "2 ml of x n, weighing 6 g", "10 ml of n t, weighing 5 g", "4 ml of m g, weighing 5 g", "5 ml of g q, weighing 3 g", "3 ml of f b, weighing 9 g"};
    MixtureDensity* pObj = new MixtureDensity();
    clock_t start = clock();
    double result = pObj->getDensity(ingredients);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9501661129568106;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> ingredients = {"999 ml of sv bi calk vm ig q j us, weighing 1 g", "677 ml of w dt yh fk zn d l msw, weighing 1 g", "664 ml of hj zh u o nec p m xf w, weighing 1 g", "496 ml of d xkw m ae r p zj v hn, weighing 1 g", "604 ml of pv ddas f ln qfht q xu, weighing 1 g", "185 ml of j y be a z g pqkxdf pai, weighing 1 g", "653 ml of x i v k pb ln kd d t, weighing 1 g", "890 ml of yo jo uu o i g x ob k, weighing 1 g", "697 ml of d nu s h xi hp fu ii, weighing 1 g", "938 ml of dnpx w j axeqqwd e cce t, weighing 1 g", "641 ml of im qk j d q i ey n g, weighing 1 g", "933 ml of w h mqtg ocx oft rrd nq, weighing 1 g", "756 ml of s g ky l q t gs f m s, weighing 1 g", "588 ml of h fd qnbi we zcemwcy t, weighing 1 g", "666 ml of dj n ftq yw rob su u, weighing 1 g", "246 ml of u gqn fv nbzuffd f fi, weighing 1 g", "737 ml of cs m rk oadgzlgtuyxn zm, weighing 1 g", "380 ml of m h co i h wqp s u h p, weighing 1 g", "570 ml of v es t sx vb f uc n, weighing 1 g", "337 ml of ddt x u l k ww dvt, weighing 1 g", "435 ml of xr u tildzw jku m m t, weighing 1 g", "563 ml of nc q lr o a k c glm, weighing 1 g", "149 ml of fnd jvb lj fc utx b, weighing 1 g", "572 ml of y v mq u czhom fl y on, weighing 1 g", "591 ml of uo hz n f p b k bubpx u, weighing 1 g", "323 ml of p oxdu xx j vmqu wm d, weighing 1 g", "987 ml of zu m u x uw p e csex, weighing 1 g", "674 ml of aqv k h kaz ehkd d, weighing 1 g", "708 ml of gs hh ayh mnlj tg dq, weighing 1 g", "976 ml of zk ut xt p z nj, weighing 1 g", "616 ml of m h rroabx n wqauzb, weighing 1 g", "466 ml of m s r kylss h sbiu nl, weighing 1 g", "887 ml of kxs tqjh kugpq pvf t j h, weighing 1 g", "578 ml of t n h rz inlf l sr c aw, weighing 1 g", "198 ml of q fj ig v do qh h l, weighing 1 g", "761 ml of cq z ph k my o c n, weighing 1 g", "109 ml of djikx vfd wy t o j pu, weighing 1 g", "705 ml of aa b tfx t nniw wt p u, weighing 1 g", "546 ml of csz a xeumf o d, weighing 1 g", "626 ml of c k lig n qs z jh hu j, weighing 1 g", "539 ml of f qwpvqua y bzzy pmgb d, weighing 1 g", "937 ml of o f aa ty ytb d, weighing 1 g", "439 ml of ukg j qk d gtk pv rv, weighing 1 g", "443 ml of uoyb y bi d om d r r, weighing 1 g", "184 ml of tv i p rbsukxf bsh vqbg, weighing 1 g", "535 ml of t cyx h dmnv e brbz pyt, weighing 1 g", "870 ml of y e zo d r cge h, weighing 1 g", "535 ml of ts qsd wf fgqb ei fa omiq, weighing 1 g", "315 ml of kvg sfqpc n lf n w, weighing 1 g", "387 ml of h l ci a e k e, weighing 1 g"};
    MixtureDensity* pObj = new MixtureDensity();
    clock_t start = clock();
    double result = pObj->getDensity(ingredients);
    clock_t end = clock();
    delete pObj;
    double expected = 0.001705844222305619;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> ingredients = {"1 ml of n m, weighing 1000 g", "1 ml of nus, weighing 846 g", "1 ml of w i, weighing 876 g", "1 ml of uul, weighing 416 g", "1 ml of hop, weighing 242 g", "1 ml of i q, weighing 997 g", "1 ml of c z, weighing 649 g", "1 ml of v y, weighing 971 g", "1 ml of kpp, weighing 519 g", "1 ml of l n, weighing 127 g", "1 ml of l a, weighing 752 g", "1 ml of z r, weighing 452 g", "1 ml of i i, weighing 900 g", "1 ml of g p, weighing 579 g", "1 ml of o o, weighing 400 g", "1 ml of v e, weighing 334 g", "1 ml of awa, weighing 724 g", "1 ml of q n, weighing 291 g", "1 ml of fdc, weighing 510 g", "1 ml of q g, weighing 443 g", "1 ml of d f, weighing 303 g", "1 ml of uwm, weighing 843 g", "1 ml of w e, weighing 966 g", "1 ml of tap, weighing 676 g", "1 ml of jgv, weighing 684 g", "1 ml of t b, weighing 398 g", "1 ml of qqw, weighing 261 g", "1 ml of byn, weighing 805 g", "1 ml of y u, weighing 967 g", "1 ml of u o, weighing 595 g", "1 ml of v i, weighing 209 g", "1 ml of zwz, weighing 437 g", "1 ml of o q, weighing 940 g", "1 ml of z z, weighing 917 g", "1 ml of jli, weighing 369 g", "1 ml of o x, weighing 725 g", "1 ml of s h, weighing 998 g", "1 ml of d e, weighing 200 g", "1 ml of orw, weighing 273 g", "1 ml of k i, weighing 386 g", "1 ml of i g, weighing 313 g", "1 ml of h b, weighing 222 g", "1 ml of eaa, weighing 528 g", "1 ml of n w, weighing 406 g", "1 ml of gtl, weighing 826 g", "1 ml of u x, weighing 689 g", "1 ml of xqu, weighing 720 g", "1 ml of c b, weighing 466 g", "1 ml of xku, weighing 178 g", "1 ml of rca, weighing 426 g"};
    MixtureDensity* pObj = new MixtureDensity();
    clock_t start = clock();
    double result = pObj->getDensity(ingredients);
    clock_t end = clock();
    delete pObj;
    double expected = 575.08;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> ingredients = {"181 ml of z, weighing 190 g", "106 ml of z, weighing 45 g", "666 ml of z, weighing 224 g", "924 ml of z, weighing 2 g", "573 ml of z, weighing 620 g", "933 ml of z, weighing 188 g", "309 ml of z, weighing 39 g", "918 ml of z, weighing 941 g", "867 ml of z, weighing 242 g", "182 ml of z, weighing 240 g", "509 ml of z, weighing 373 g", "930 ml of z, weighing 436 g", "607 ml of z, weighing 186 g", "905 ml of z, weighing 167 g", "770 ml of z, weighing 399 g", "582 ml of z, weighing 122 g", "974 ml of z, weighing 260 g", "628 ml of z, weighing 91 g", "301 ml of z, weighing 413 g", "145 ml of z, weighing 369 g", "116 ml of z, weighing 657 g", "778 ml of z, weighing 105 g", "761 ml of z, weighing 145 g", "826 ml of z, weighing 265 g", "502 ml of z, weighing 234 g", "887 ml of z, weighing 548 g", "173 ml of z, weighing 129 g", "306 ml of z, weighing 77 g", "419 ml of z, weighing 570 g", "839 ml of z, weighing 553 g", "565 ml of z, weighing 314 g", "55 ml of z, weighing 626 g", "746 ml of z, weighing 70 g", "323 ml of z, weighing 140 g", "487 ml of z, weighing 626 g", "589 ml of z, weighing 520 g", "622 ml of z, weighing 320 g", "58 ml of z, weighing 888 g", "98 ml of z, weighing 842 g", "890 ml of z, weighing 58 g", "134 ml of z, weighing 938 g", "767 ml of z, weighing 781 g", "768 ml of z, weighing 966 g", "797 ml of z, weighing 442 g", "337 ml of z, weighing 358 g", "621 ml of z, weighing 330 g", "637 ml of z, weighing 593 g", "107 ml of z, weighing 237 g", "662 ml of z, weighing 359 g", "140 ml of z, weighing 571 g"};
    MixtureDensity* pObj = new MixtureDensity();
    clock_t start = clock();
    double result = pObj->getDensity(ingredients);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6961139896373058;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> ingredients = {"272 ml of a z a z a z a z a z a z, weighing 920 g", "527 ml of a z a z a z a z a z a z, weighing 406 g", "953 ml of a z a z a z a z a z a z, weighing 915 g", "454 ml of a z a z a z a z a z a z, weighing 236 g", "215 ml of a z a z a z a z a z a z, weighing 810 g", "628 ml of a z a z a z a z a z a z, weighing 814 g", "657 ml of a z a z a z a z a z a z, weighing 128 g", "67 ml of a z z a z a z a z a z a z, weighing 227 g", "680 ml of a z a z a z a z a z a z, weighing 187 g", "625 ml of a z a z a z a z a z a z, weighing 768 g", "542 ml of a z a z a z a z a z a z, weighing 407 g", "237 ml of a z a z a z a z a z a z, weighing 828 g", "867 ml of a z a z a z a z a z a z, weighing 987 g", "82 ml of a z z a z a z a z a z a z, weighing 706 g", "615 ml of a z a z a z a z a z a z, weighing 266 g", "194 ml of a z a z a z a z a z a z, weighing 303 g", "859 ml of a z a z a z a z a z a z, weighing 230 g", "558 ml of a z a z a z a z a z a z, weighing 783 g", "329 ml of a z a z a z a z a z a z, weighing 230 g", "212 ml of a z a z a z a z a z a z, weighing 269 g", "100 ml of a z a z a z a z a z a z, weighing 586 g", "137 ml of a a z a z a z a z a z a z, weighing 98 g", "748 ml of a z a z a z a z a z a z, weighing 621 g", "982 ml of a z a z a z a z a z a z, weighing 977 g", "551 ml of a z a z a z a z a z a z, weighing 575 g", "599 ml of a z a z a z a z a z a z, weighing 396 g", "503 ml of a z a z a z a z a z a z, weighing 763 g", "53 ml of a z z a z a z a z a z a z, weighing 521 g", "872 ml of a z a z a z a z a z a z, weighing 431 g", "387 ml of a z a z a z a z a z a z, weighing 326 g", "667 ml of a z a z a z a z a z a z, weighing 331 g", "368 ml of a z a z a z a z a z a z, weighing 468 g", "249 ml of a z a z a z a z a z a z, weighing 684 g", "722 ml of a z a z a z a z a z a z, weighing 594 g", "261 ml of a z a z a z a z a z a z, weighing 765 g", "165 ml of a z a z a z a z a z a z, weighing 670 g", "832 ml of a z a z a z a z a z a z, weighing 335 g", "848 ml of a z a z a z a z a z a z, weighing 675 g", "917 ml of a z a z a z a z a z a z, weighing 342 g", "282 ml of a z a z a z a z a z a z, weighing 222 g", "141 ml of a z a z a z a z a z a z, weighing 987 g", "414 ml of a z a z a z a z a z a z, weighing 973 g", "419 ml of a z a z a z a z a z a z, weighing 244 g", "534 ml of a z a z a z a z a z a z, weighing 458 g", "502 ml of a z a z a z a z a z a z, weighing 726 g", "645 ml of a a z a z a z a z a z a z, weighing 14 g", "456 ml of a z a z a z a z a z a z, weighing 333 g", "2 ml of a z z a z a z a z a z a z, weighing 369 g", "668 ml of a z a z a z a z a z a z, weighing 288 g", "171 ml of a z a z a z a z a z a z, weighing 451 g"};
    MixtureDensity* pObj = new MixtureDensity();
    clock_t start = clock();
    double result = pObj->getDensity(ingredients);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0788875799394144;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> ingredients = {"226 ml of ha fun, weighing 459 g", "647 ml of ha fun, weighing 359 g", "463 ml of ha fun, weighing 899 g", "745 ml of good luck, weighing 456 g", "361 ml of ha fun, weighing 598 g", "468 ml of ha fun, weighing 230 g", "276 ml of ha fun, weighing 518 g", "909 ml of ha fun, weighing 247 g", "6 ml of have fun, weighing 22 g", "756 ml of ha fun, weighing 664 g", "615 ml of ha fun, weighing 78 g", "145 ml of good luck, weighing 753 g", "299 ml of good luck, weighing 148 g", "379 ml of good luck, weighing 290 g", "308 ml of good luck, weighing 923 g", "953 ml of ha fun, weighing 857 g", "965 ml of good luck, weighing 764 g", "756 ml of ha fun, weighing 891 g", "729 ml of good luck, weighing 780 g", "554 ml of good luck, weighing 301 g", "869 ml of good luck, weighing 777 g", "568 ml of good luck, weighing 178 g", "966 ml of good luck, weighing 159 g", "220 ml of ha fun, weighing 560 g", "822 ml of good luck, weighing 773 g", "836 ml of good luck, weighing 893 g", "53 ml of hav fun, weighing 960 g", "6 ml of have fun, weighing 578 g", "585 ml of ha fun, weighing 939 g", "103 ml of ha fun, weighing 607 g", "628 ml of good luck, weighing 292 g", "57 ml of hav fun, weighing 937 g", "788 ml of good luck, weighing 635 g", "471 ml of ha fun, weighing 210 g", "55 ml of good luck, weighing 193 g", "492 ml of good luck, weighing 624 g", "65 ml of good luck, weighing 617 g", "360 ml of ha fun, weighing 387 g", "996 ml of good luck, weighing 581 g", "923 ml of good luck, weighing 253 g", "217 ml of ha fun, weighing 147 g", "480 ml of good luck, weighing 603 g", "759 ml of good luck, weighing 194 g", "723 ml of ha fun, weighing 881 g", "936 ml of ha fun, weighing 630 g", "786 ml of ha fun, weighing 330 g", "45 ml of good luck, weighing 458 g", "701 ml of ha fun, weighing 951 g", "316 ml of good luck, weighing 876 g", "797 ml of good luck, weighing 390 g"};
    MixtureDensity* pObj = new MixtureDensity();
    clock_t start = clock();
    double result = pObj->getDensity(ingredients);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0254745445518085;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> ingredients = {"1000 ml of something l i g h t, weighing 1 g"};
    MixtureDensity* pObj = new MixtureDensity();
    clock_t start = clock();
    double result = pObj->getDensity(ingredients);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0010;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> ingredients = {"200 ml of weighing, weighing 180 g"};
    MixtureDensity* pObj = new MixtureDensity();
    clock_t start = clock();
    double result = pObj->getDensity(ingredients);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> ingredients = {"1000 ml of weighing l i g h t, weighing 1 g"};
    MixtureDensity* pObj = new MixtureDensity();
    clock_t start = clock();
    double result = pObj->getDensity(ingredients);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0010;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> ingredients = {"200 ml of oil, weighing 180 g"};
    MixtureDensity* pObj = new MixtureDensity();
    clock_t start = clock();
    double result = pObj->getDensity(ingredients);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> ingredients = {"100 ml of weighing a, weighing 130 g"};
    MixtureDensity* pObj = new MixtureDensity();
    clock_t start = clock();
    double result = pObj->getDensity(ingredients);
    clock_t end = clock();
    delete pObj;
    double expected = 1.3;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> ingredients = {"200 ml of weighing g, weighing 180 g"};
    MixtureDensity* pObj = new MixtureDensity();
    clock_t start = clock();
    double result = pObj->getDensity(ingredients);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> ingredients = {"1000 ml of s l weighing ii g i, weighing 1 g"};
    MixtureDensity* pObj = new MixtureDensity();
    clock_t start = clock();
    double result = pObj->getDensity(ingredients);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0010;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> ingredients = {"100 ml of weighing, weighing 130 g"};
    MixtureDensity* pObj = new MixtureDensity();
    clock_t start = clock();
    double result = pObj->getDensity(ingredients);
    clock_t end = clock();
    delete pObj;
    double expected = 1.3;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> ingredients = {"100 ml of a ml a ml b, weighing 130 g"};
    MixtureDensity* pObj = new MixtureDensity();
    clock_t start = clock();
    double result = pObj->getDensity(ingredients);
    clock_t end = clock();
    delete pObj;
    double expected = 1.3;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> ingredients = {"314 ml of weighing, weighing 423 g"};
    MixtureDensity* pObj = new MixtureDensity();
    clock_t start = clock();
    double result = pObj->getDensity(ingredients);
    clock_t end = clock();
    delete pObj;
    double expected = 1.3471337579617835;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> ingredients = {"1000 ml of a b s weighing z g a e, weighing 33 g"};
    MixtureDensity* pObj = new MixtureDensity();
    clock_t start = clock();
    double result = pObj->getDensity(ingredients);
    clock_t end = clock();
    delete pObj;
    double expected = 0.033;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> ingredients = {"200 ml of weighing elephant, weighing 180 g"};
    MixtureDensity* pObj = new MixtureDensity();
    clock_t start = clock();
    double result = pObj->getDensity(ingredients);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> ingredients = {"200 ml of oil, weighing 180 g", "123 ml of weighing, weighing 123 g"};
    MixtureDensity* pObj = new MixtureDensity();
    clock_t start = clock();
    double result = pObj->getDensity(ingredients);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9380804953560371;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> ingredients = {"200 ml of weighing oil, weighing 180 g"};
    MixtureDensity* pObj = new MixtureDensity();
    clock_t start = clock();
    double result = pObj->getDensity(ingredients);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> ingredients = {"200 ml of weighing oil, weighing 100 g"};
    MixtureDensity* pObj = new MixtureDensity();
    clock_t start = clock();
    double result = pObj->getDensity(ingredients);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> ingredients = {"200 ml of weighing weighing x, weighing 180 g"};
    MixtureDensity* pObj = new MixtureDensity();
    clock_t start = clock();
    double result = pObj->getDensity(ingredients);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> ingredients = {"100 ml of weighing, weighing 10 g", "500 ml of weighing weighing, weighing 20 g"};
    MixtureDensity* pObj = new MixtureDensity();
    clock_t start = clock();
    double result = pObj->getDensity(ingredients);
    clock_t end = clock();
    delete pObj;
    double expected = 0.05;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> ingredients = {"200 ml of weighing s, weighing 180 g"};
    MixtureDensity* pObj = new MixtureDensity();
    clock_t start = clock();
    double result = pObj->getDensity(ingredients);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> ingredients = {"10 ml of some weighing gas, weighing 100 g"};
    MixtureDensity* pObj = new MixtureDensity();
    clock_t start = clock();
    double result = pObj->getDensity(ingredients);
    clock_t end = clock();
    delete pObj;
    double expected = 10.0;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> ingredients = {"1 ml of weighing weighing weighing, weighing 1 g"};
    MixtureDensity* pObj = new MixtureDensity();
    clock_t start = clock();
    double result = pObj->getDensity(ingredients);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=20978824&rd=10794&pm=8269
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
#include <queue>
#include <stdlib.h>
 
using namespace std;
 
#define REP(i,n) for(int i=0,n_=(n);i<n_;i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
#define FOR(i,a,b) for (int i=a,b_=b;i<=(b);i++)
#define ALL(a) a.begin(),a.end()
#define SZ(a) (int)(a).size()
#define SORT(a) sort(ALL(a))
#define INF 1073741823
#define DEB(x) cout<<#x<<":"<<x<<"\n"
#define PB(b) push_back(b)
 
class MixtureDensity {
public:
  double getDensity(vector <string>);
};
 
double MixtureDensity::getDensity(vector <string> ingredients) {
  double r;
  int vol, mas, num, c;
  string cad;
  
  r = mas = vol = 0;
  REP(i, SZ(ingredients))
  {
    c = 0;
    stringstream cosa(ingredients[i]);
    while(cosa >> cad)
    {
      num = atoi(cad.c_str());  
      if(num != 0)
      {
        if(c == 0)
        {
          vol += num;
          c++;
        }
        else if(c == 1)
        {
          mas += num;
          c = 0;
        }
      }    
    }
  }
  r += double(mas) / double(vol);
  return r;
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/