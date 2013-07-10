/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=5915
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

class ObjectFall {
public:
    int howLong(int x, int y, vector<string> obstacles);
};

int ObjectFall::howLong(int x, int y, vector<string> obstacles) {
    int ret;
    return ret;
}


int test0() {
    int x = 15;
    int y = 10;
    vector<string> obstacles = {"005 010 020"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int x = 15;
    int y = 12;
    vector<string> obstacles = {"010 010 020", "015 010 020", "005 020 050"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int x = 50;
    int y = 85;
    vector<string> obstacles = {"020 001 100", "010 100 100", "005 100 200"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int x = 10;
    int y = 1000;
    vector<string> obstacles = {};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int x = 500;
    int y = 800;
    vector<string> obstacles = {"800 001 500", "400 001 499", "401 501 999"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 805;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int x = 645;
    int y = 802;
    vector<string> obstacles = {"739 038 799", "916 169 791", "822 372 911", "162 125 992", "261 307 545", "510 031 765", "592 723 742", "477 315 676", "566 143 617", "337 114 664", "986 648 883", "116 230 680", "254 746 943", "742 948 988", "060 117 401", "634 035 433", "288 741 864", "819 626 730", "906 071 222", "554 100 121", "573 051 551", "949 528 915", "562 151 223", "857 135 243", "621 115 474", "588 405 615", "895 812 919", "052 378 836", "858 116 505", "285 428 469", "792 244 250", "109 265 637", "714 804 885", "625 150 410", "518 593 921", "282 235 339", "081 212 659", "663 047 982", "556 194 345", "798 150 938", "391 026 813", "886 348 796", "975 007 743", "053 854 895", "243 561 875"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 817;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int x = 645;
    int y = 802;
    vector<string> obstacles = {"739 038 799", "916 169 791", "822 372 911", "162 125 992", "261 307 545", "510 031 765", "592 723 742", "477 315 676", "566 143 617", "337 114 664", "986 648 883", "116 230 680", "254 746 943", "742 948 988", "060 117 401", "634 035 433", "288 741 864", "819 626 730", "906 071 222", "554 100 121", "573 051 551", "949 528 915", "562 151 223", "857 135 243", "621 115 474", "588 405 615", "895 812 919", "052 378 836", "858 116 505", "285 428 469", "792 244 250", "109 265 637", "714 804 885", "625 150 410", "518 593 921", "282 235 339", "081 212 659", "663 047 982", "556 194 345", "798 150 938", "391 026 813", "886 348 796", "975 007 743", "053 854 895", "243 561 875"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 817;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int x = 35;
    int y = 854;
    vector<string> obstacles = {"533 091 905", "980 337 673", "797 552 748", "025 248 779", "577 551 963", "356 435 991", "323 672 977", "004 539 883", "341 063 751", "135 195 723", "806 850 991", "098 243 404", "944 323 659", "897 348 418", "283 650 717", "031 354 390", "326 304 927", "461 427 979", "704 594 736", "232 330 609", "660 545 619", "447 208 468", "223 309 552", "264 284 586", "488 526 882", "536 552 605", "646 837 869", "163 431 811", "970 802 831", "922 307 352", "721 035 046", "798 027 139", "423 251 411", "701 416 491", "061 083 281", "917 301 899", "373 614 641", "681 002 667", "331 130 829", "028 670 911", "035 519 772", "153 386 406", "817 159 173", "242 789 879", "638 603 718", "773 223 747", "002 149 325", "334 503 558"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 884;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int x = 119;
    int y = 482;
    vector<string> obstacles = {"439 334 585", "826 140 320", "709 464 567", "271 160 320", "848 064 930", "631 161 577"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 482;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int x = 605;
    int y = 110;
    vector<string> obstacles = {"651 063 528", "151 405 501", "756 841 955", "990 645 844", "150 685 782", "989 611 979", "077 450 830", "878 017 762", "670 103 763", "268 134 719", "378 072 699", "728 437 944", "072 118 325", "196 162 327", "833 227 296", "781 344 774", "275 004 191", "428 036 848", "064 025 545", "272 474 809", "475 571 937", "889 286 868"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 115;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int x = 213;
    int y = 596;
    vector<string> obstacles = {"313 828 907", "599 476 790", "656 309 803", "683 270 456", "561 347 771", "248 188 467", "630 199 242", "911 285 288", "718 104 726", "252 478 671", "098 242 556", "939 092 806", "422 663 992", "064 910 974", "355 616 831", "225 128 510", "065 325 501", "341 023 490", "372 525 773", "145 255 790", "774 169 859", "702 336 806", "487 325 854", "050 190 892", "695 322 862", "859 437 824", "835 363 864", "806 140 476", "076 646 786", "673 109 741", "563 175 824", "073 697 730", "249 285 524", "813 847 918", "028 172 637", "103 004 724", "988 195 435", "596 095 541", "631 473 810", "846 022 559", "519 512 739", "009 554 943", "350 511 928", "118 136 607", "681 153 307", "518 178 289"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 616;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int x = 386;
    int y = 666;
    vector<string> obstacles = {"927 751 758", "164 370 749", "822 405 446", "911 106 333", "181 097 963", "800 466 484", "930 459 518", "411 208 372", "018 152 779", "765 417 461", "038 118 665"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 671;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int x = 483;
    int y = 890;
    vector<string> obstacles = {"488 521 562", "183 278 930", "478 119 486", "194 350 381", "251 593 594", "820 030 234", "414 045 398", "904 202 578", "477 087 325", "405 283 664", "557 194 326", "547 861 877", "224 105 626", "996 033 849", "960 004 998", "695 606 986", "285 162 460", "550 329 841", "633 816 930", "381 245 262", "563 330 871", "741 324 896", "293 477 608", "868 871 950", "956 255 985", "080 377 920", "909 203 516", "296 475 607", "018 068 443", "245 085 567", "881 558 640", "096 376 982", "854 452 879", "249 129 331"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 905;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int x = 94;
    int y = 79;
    vector<string> obstacles = {"624 024 505", "688 142 783", "190 596 844", "630 141 630", "116 114 236", "237 358 921", "016 510 893", "301 307 641", "571 261 712", "962 565 774", "365 625 724", "011 296 680", "523 028 537", "001 535 833", "005 158 650", "453 221 989", "988 689 974", "166 338 628", "582 374 870", "895 323 441", "990 455 490", "042 325 433", "665 043 739", "511 480 805", "423 667 758", "583 355 660", "070 465 841", "506 519 578", "978 549 817", "180 196 277", "497 339 637", "082 465 475", "128 345 576", "406 877 893", "581 088 539"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 79;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int x = 852;
    int y = 892;
    vector<string> obstacles = {"715 354 635", "294 787 792", "555 498 982", "782 480 839", "063 197 903", "929 677 996", "337 353 675", "742 131 553", "206 713 904", "732 135 236", "099 770 970", "583 451 837", "490 384 876", "716 055 357", "496 256 797", "658 098 295", "384 167 489", "457 260 679", "684 127 135", "058 033 317", "474 121 382", "296 400 586", "947 507 683", "608 539 679", "097 103 562", "008 238 731", "025 765 939", "309 051 333", "676 063 324", "248 144 460", "874 421 641", "156 450 792", "314 588 931", "128 091 419", "134 794 815", "098 265 717"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 897;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int x = 789;
    int y = 358;
    vector<string> obstacles = {"768 264 490", "886 873 969", "381 028 713", "513 312 847", "553 294 469", "007 222 867", "156 880 885", "825 171 381", "543 250 841", "557 485 775", "645 208 414"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 363;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int x = 883;
    int y = 424;
    vector<string> obstacles = {"156 370 686", "977 133 404", "155 174 758", "301 099 656", "277 398 917", "319 190 215", "566 893 958", "174 495 545", "916 130 501", "107 756 980", "757 202 774", "376 135 220", "298 276 381", "728 507 625", "544 831 856", "028 404 710", "692 742 878", "749 101 272", "640 302 325", "244 204 248", "698 192 753"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 434;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int x = 631;
    int y = 210;
    vector<string> obstacles = {"414 135 176", "439 780 970", "311 667 966", "521 245 474", "989 064 310", "578 340 400", "419 065 845", "248 082 547", "337 202 652", "830 521 655", "635 592 941", "198 581 787", "216 359 642", "224 186 585", "659 777 870", "873 239 562", "719 296 741", "071 806 819", "708 014 405", "092 178 543", "588 224 698", "805 584 818", "250 033 673", "590 169 206", "689 825 969", "128 441 656", "499 705 903", "988 327 773", "868 840 861", "796 121 736", "601 721 844", "945 193 941", "300 023 286"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 215;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int x = 205;
    int y = 868;
    vector<string> obstacles = {"343 181 238", "318 320 733", "638 633 764", "277 023 956", "205 373 550", "891 313 956", "986 354 487", "556 277 954", "127 259 286", "409 717 745", "030 102 779", "248 201 894", "577 524 849", "299 100 878", "331 234 729", "065 647 660", "583 294 752", "937 321 927", "848 445 536", "449 011 449", "439 517 567", "566 282 998", "499 040 747", "383 442 495", "325 248 277", "287 791 883", "339 566 637", "744 124 797", "255 718 764", "267 315 897", "156 110 688", "006 226 246", "564 291 812", "147 575 684", "841 176 493", "159 473 500", "741 474 863", "768 205 842"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 888;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int x = 349;
    int y = 313;
    vector<string> obstacles = {"193 646 717", "713 237 377", "475 462 614", "456 250 990", "231 459 955", "446 667 969", "019 627 660", "702 087 283", "903 471 647", "801 437 736", "973 263 600", "342 686 774", "245 230 772"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 323;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int x = 438;
    int y = 226;
    vector<string> obstacles = {"057 557 726", "127 380 663", "856 803 855", "208 506 659", "518 787 940", "743 328 748", "569 009 699", "111 739 775", "143 541 686", "116 640 753", "986 029 043", "297 122 902", "932 279 577", "519 571 600", "596 073 102", "390 517 988", "819 129 244", "481 384 652", "581 240 329", "944 357 856", "179 247 766", "967 242 259", "042 530 844", "496 363 566", "723 097 133", "014 969 976", "948 217 229"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 241;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int x = 27;
    int y = 964;
    vector<string> obstacles = {"404 701 757", "815 144 276", "046 073 790", "420 333 963", "470 164 410", "720 003 489", "439 239 995", "749 806 875", "145 213 428", "805 279 936", "791 116 121", "769 221 607", "211 736 922", "521 265 995", "224 392 666", "544 044 824", "167 497 816", "105 298 740", "122 325 462", "317 070 264", "074 220 792", "040 576 922", "127 143 651", "896 581 788", "406 898 936", "025 272 560", "725 535 627", "153 400 493", "788 870 982", "471 274 458", "298 387 835", "753 133 986", "085 061 621", "528 705 760", "652 044 573", "658 682 858", "687 064 625", "871 476 931", "065 687 697", "814 173 398", "486 090 655", "374 497 971", "189 094 577", "708 655 885", "659 759 767", "627 818 894", "043 162 583", "986 102 770", "018 120 730"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 989;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int x = 523;
    int y = 792;
    vector<string> obstacles = {"531 062 104", "218 102 174", "321 801 874", "998 027 396", "066 566 971", "146 385 470", "914 689 755", "583 377 778", "172 744 976", "222 268 855", "341 087 274", "177 158 559", "438 117 415", "073 056 359", "664 026 498", "031 093 865", "469 259 735", "207 551 982", "264 842 875", "753 429 986", "228 512 870"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 797;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int x = 436;
    int y = 204;
    vector<string> obstacles = {"660 739 984", "806 247 783", "081 011 916", "738 087 835", "063 549 661", "371 138 277", "945 270 519", "497 059 561", "629 172 263", "062 224 725", "762 039 773", "013 025 514", "537 183 246", "358 023 290", "401 050 797", "130 384 610", "554 191 309", "569 416 925", "562 207 336"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 214;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int x = 273;
    int y = 67;
    vector<string> obstacles = {"302 533 967", "248 598 841", "886 185 827", "565 310 641", "196 343 987", "839 254 750", "942 806 866", "197 471 683", "606 528 968", "200 447 451", "481 748 903", "082 729 885", "813 211 996", "668 381 664", "697 882 987", "232 395 792", "617 216 217", "823 318 463", "951 252 349", "691 322 329", "472 520 866", "332 262 747", "359 245 533", "479 410 667", "675 884 997", "356 476 741"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 67;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int x = 893;
    int y = 613;
    vector<string> obstacles = {"457 511 547", "082 451 956", "982 204 406", "656 480 783", "040 120 974", "585 174 601"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 623;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int x = 407;
    int y = 332;
    vector<string> obstacles = {"416 203 843", "578 139 608", "378 025 771", "972 649 811", "627 078 203", "636 004 832", "558 326 688", "681 084 494", "410 075 689", "401 508 810", "554 344 435", "507 018 992", "663 018 502", "080 188 316", "167 735 735", "829 795 981", "718 201 740", "783 670 780", "488 097 280", "273 169 897", "423 354 718", "791 706 888", "948 148 250", "911 186 755", "108 350 549", "105 165 909", "602 119 804", "786 228 904", "012 817 863", "424 317 855", "785 650 984", "001 561 847", "420 003 767", "772 497 862", "016 214 350", "806 253 286"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 342;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int x = 837;
    int y = 107;
    vector<string> obstacles = {"863 257 497", "711 540 868", "071 046 887", "443 176 863", "080 074 816", "679 433 733", "759 025 347", "565 569 870", "868 177 215", "381 460 490", "268 416 699", "531 529 988", "056 563 891", "255 143 878", "672 114 291", "371 229 415", "758 576 771", "846 746 946", "653 849 985", "818 642 645", "772 249 566", "321 243 312", "603 494 737", "208 375 756", "934 691 895", "023 014 663", "622 740 742", "026 141 724", "033 275 825", "696 407 621", "995 281 714", "836 208 941", "190 376 468", "408 611 956", "285 115 875", "560 734 818", "889 320 460", "634 151 704", "685 228 896", "963 113 430", "324 177 340", "092 352 493", "270 068 592", "707 329 862"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 117;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int x = 5;
    int y = 417;
    vector<string> obstacles = {"544 222 470", "394 624 631", "385 415 584", "622 318 824", "068 371 654", "491 587 614", "042 066 864", "128 138 266", "578 600 957", "515 179 596", "686 208 499", "060 153 923", "120 417 639", "125 004 150", "511 568 801", "113 135 896", "738 368 966", "088 181 757", "380 314 705", "545 196 386", "449 434 894", "642 939 987", "231 377 547", "192 068 518", "390 103 572", "071 663 750", "430 346 955", "295 753 943", "415 098 983", "594 319 710", "852 014 160"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 432;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int x = 927;
    int y = 2;
    vector<string> obstacles = {"637 173 334", "427 407 597", "280 691 897", "807 153 778", "069 368 642", "217 016 875", "847 709 716", "721 094 220", "858 452 887", "943 788 995", "386 453 796", "335 097 641", "759 409 860", "666 823 886", "090 192 278", "464 271 494", "028 036 140", "517 056 370", "985 171 261", "724 872 924", "181 435 643", "917 628 842", "550 424 504", "084 437 620", "345 302 306", "674 204 931", "410 233 493", "822 128 172", "171 113 422", "507 072 312", "892 122 900", "134 242 262", "003 473 661", "810 273 709", "575 763 855", "045 829 991", "558 105 507"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int x = 657;
    int y = 418;
    vector<string> obstacles = {"064 014 705", "056 464 507", "931 227 830", "579 048 782", "078 045 106", "075 700 710", "736 403 765", "362 046 745", "889 343 551", "339 069 393", "096 278 318", "451 564 702", "336 407 560", "487 666 807", "933 172 787", "413 157 542", "639 429 456", "365 172 523", "528 199 987", "962 130 607", "181 603 783", "061 437 804", "995 534 896", "719 214 225", "573 128 319", "834 030 659", "480 579 816", "879 180 295", "426 662 780", "024 446 818", "155 713 827", "189 542 659", "126 404 505", "959 060 888"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 433;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int x = 354;
    int y = 845;
    vector<string> obstacles = {"214 240 395", "132 068 081", "268 822 868", "396 287 867", "270 366 421", "526 619 713", "265 899 932", "537 303 685", "709 178 440", "364 207 747", "696 385 754", "710 373 480"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 865;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int x = 655;
    int y = 362;
    vector<string> obstacles = {"167 795 873", "538 494 649", "292 476 815", "035 572 639", "738 051 146", "605 078 115", "679 224 719", "932 466 594", "432 313 395", "777 598 712", "440 617 640", "104 011 902", "215 019 542", "076 520 751", "854 056 405", "625 601 674", "974 660 980", "690 292 477", "721 001 674", "534 067 200", "089 276 860", "072 488 628", "829 181 995", "426 079 558"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 377;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int x = 770;
    int y = 211;
    vector<string> obstacles = {"019 305 632", "845 374 924", "384 473 516", "415 088 382", "371 026 249", "065 231 372", "355 119 740", "926 111 989", "484 688 914", "393 853 900", "111 063 444", "230 488 934", "912 473 896", "095 228 772", "271 543 915", "323 264 750", "914 433 471", "755 055 784", "353 175 907", "483 148 683", "168 254 938", "547 429 556", "341 009 972", "079 039 276", "382 271 436", "652 149 688", "741 354 994", "496 165 391", "540 535 849", "334 743 792", "617 553 676"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 216;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int x = 849;
    int y = 238;
    vector<string> obstacles = {"938 263 327", "660 187 434", "497 137 501", "709 052 292", "199 135 773", "834 348 643", "645 189 509", "888 617 934", "527 583 641", "194 126 431", "952 467 850", "743 079 603", "315 141 197", "022 890 983", "352 723 882", "144 366 760", "679 378 778", "035 433 579", "718 109 604"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 238;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int x = 934;
    int y = 267;
    vector<string> obstacles = {"667 066 071", "867 326 550", "208 460 661", "588 074 403", "394 533 853", "341 650 812", "142 179 670", "466 800 994"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 267;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int x = 39;
    int y = 863;
    vector<string> obstacles = {"250 205 876", "725 214 791", "914 094 727", "845 043 707", "186 288 711", "581 091 482", "693 387 767", "488 323 499", "011 004 559", "795 177 850", "916 553 794", "045 379 726", "140 288 543", "145 508 979", "036 031 707", "137 360 857", "301 018 175", "251 151 458", "070 466 690", "813 475 629", "865 214 780", "922 160 931", "550 285 298", "614 140 813", "022 484 563", "571 691 956", "317 526 697", "648 440 741", "764 712 745", "921 401 489", "684 383 616", "015 334 426", "894 136 279", "503 331 423", "131 539 819", "367 517 614", "534 258 369", "794 445 905", "524 163 866", "991 498 647", "136 482 518", "904 390 685", "713 582 975", "208 101 594", "640 747 910", "159 264 754", "309 467 842", "046 426 649"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 883;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int x = 413;
    int y = 703;
    vector<string> obstacles = {"705 318 618", "633 652 906", "028 139 794", "606 104 250", "254 026 222", "334 356 767", "390 493 559", "584 124 638", "224 742 919", "200 683 719", "761 039 775", "106 319 757", "526 276 468", "341 472 782", "339 543 860", "501 092 596", "013 124 689", "938 027 955", "889 038 356", "885 002 048", "811 093 389", "707 699 748", "740 490 868", "449 506 637", "422 043 576", "637 212 593", "169 004 387", "299 041 230", "238 249 799", "937 387 875", "486 258 270", "033 075 937", "003 524 876", "649 406 941", "692 804 976", "328 522 889"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 708;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int x = 892;
    int y = 51;
    vector<string> obstacles = {"322 247 881", "326 153 435", "239 366 664", "423 422 793", "246 234 976", "923 351 409", "351 598 727", "794 218 809", "960 072 533", "468 072 886"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int x = 788;
    int y = 999;
    vector<string> obstacles = {"643 527 747", "275 124 752", "300 196 551", "812 064 296", "230 301 522", "712 463 775", "571 221 271", "473 350 828", "633 315 468", "499 162 700"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 1004;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int x = 629;
    int y = 494;
    vector<string> obstacles = {"503 651 997", "035 011 668", "445 299 311", "011 300 444", "613 408 705", "793 445 723", "444 472 609", "975 016 515", "343 037 797", "570 552 629", "207 276 324", "661 866 996", "882 767 851", "896 609 701", "197 065 133", "628 804 839", "988 063 302", "142 032 282", "940 685 957", "689 077 990", "437 043 954", "958 156 420", "957 033 943", "326 330 623", "813 084 119", "723 193 590"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 499;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int x = 334;
    int y = 409;
    vector<string> obstacles = {"896 260 865", "717 818 828", "243 130 516", "871 442 609", "108 473 977", "462 439 886", "496 115 237", "855 291 629", "241 023 819", "923 513 548", "768 187 365", "731 561 908", "053 112 510", "234 409 835", "091 410 965", "143 274 619", "490 175 561", "346 153 685", "814 286 414", "188 555 901", "844 193 444", "853 470 629", "318 166 757", "836 937 968", "154 002 719", "541 307 979", "935 609 898"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 439;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int x = 315;
    int y = 998;
    vector<string> obstacles = {"650 818 908", "404 073 298", "224 702 816", "113 341 659", "524 602 785", "415 002 831", "672 414 623", "620 582 661", "809 200 761", "974 027 754", "142 157 509", "080 009 701", "662 580 906", "006 465 564", "005 412 604", "977 641 931", "231 144 896", "834 002 207", "614 387 794", "384 116 994", "814 073 136", "250 387 963", "819 529 554", "602 461 978", "558 460 605", "702 520 864", "412 158 170", "136 229 658", "480 328 934", "521 522 692", "800 423 986"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 1018;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int x = 383;
    int y = 248;
    vector<string> obstacles = {"255 421 702", "794 186 224", "615 692 848", "606 227 552", "905 269 492", "293 647 929", "756 431 697", "150 553 910", "215 674 800"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 248;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int x = 72;
    int y = 144;
    vector<string> obstacles = {"348 412 554", "708 239 404", "153 424 475", "094 300 842", "890 256 720", "187 584 615", "888 304 418", "129 075 970", "125 060 922", "704 187 720", "300 554 683", "695 169 603", "506 107 808", "878 012 928", "808 350 651", "929 411 418", "286 124 821", "056 807 819", "086 641 744", "378 541 742", "220 117 853"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 149;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int x = 426;
    int y = 262;
    vector<string> obstacles = {"894 373 787", "011 902 911", "004 256 848", "140 560 583", "132 104 970", "831 672 792", "346 019 233", "204 041 442", "193 135 804", "962 117 592", "857 549 595", "007 608 729", "057 319 325", "515 082 197", "930 858 937", "748 534 576", "155 461 691", "239 605 622", "199 229 484", "995 430 454", "788 474 656", "052 116 946", "439 471 727", "019 127 580", "174 564 905", "001 225 564", "266 080 670", "969 097 420", "182 309 424"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 287;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int x = 396;
    int y = 528;
    vector<string> obstacles = {"875 871 956", "634 581 602", "120 148 248", "228 726 899", "662 085 936", "353 428 445", "252 729 777", "002 140 897", "497 341 938", "813 211 211", "523 692 961", "644 289 804", "687 015 039", "177 037 121", "547 187 654", "183 564 897", "368 199 792", "756 231 385", "952 229 340", "632 033 938", "496 538 916", "321 528 869", "694 362 576", "136 864 871", "406 113 767", "595 017 219", "981 807 835", "211 226 743", "146 137 323", "627 325 372", "474 264 831", "748 018 375", "658 381 393", "119 206 979"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 538;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int x = 271;
    int y = 41;
    vector<string> obstacles = {"728 707 935", "139 909 937", "816 722 972", "404 385 405", "510 476 902", "942 566 676", "554 070 684", "014 148 519", "035 002 483", "701 639 643", "347 132 488", "979 410 747", "651 359 507", "941 337 687", "397 476 497", "956 456 502", "386 521 924", "768 775 866", "759 397 951", "625 098 770", "807 692 962", "611 018 249", "974 400 576", "264 379 866", "605 561 868", "874 759 986", "502 680 778", "649 177 640", "201 399 984", "047 311 438", "450 330 621", "013 313 343", "951 665 740", "379 521 769", "259 660 828", "385 247 358", "599 086 642", "412 644 672", "340 150 352"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int x = 551;
    int y = 206;
    vector<string> obstacles = {"547 013 501"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 206;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int x = 809;
    int y = 122;
    vector<string> obstacles = {"103 030 762", "342 421 587", "861 104 515", "788 095 217", "441 066 328", "134 084 771", "484 330 841", "579 379 878", "467 041 951", "624 387 886", "613 011 023", "529 287 322", "540 429 695", "986 552 800", "730 985 988", "418 011 419", "037 385 858", "796 591 600", "771 180 836", "890 580 658", "235 553 714", "075 567 788", "821 068 542", "119 768 842", "095 386 497", "917 108 271", "885 208 467", "043 378 848", "845 312 725", "356 338 399", "957 402 760", "857 170 273", "688 070 217", "068 092 871", "851 201 992", "869 497 918"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 132;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int x = 195;
    int y = 989;
    vector<string> obstacles = {"491 203 344", "235 522 892", "116 125 508", "355 567 963", "041 185 876", "364 159 275", "558 726 782", "576 595 832", "236 687 699", "278 254 306", "157 324 958", "545 069 772", "639 061 397"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 1004;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int x = 311;
    int y = 980;
    vector<string> obstacles = {};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 980;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int x = 58;
    int y = 403;
    vector<string> obstacles = {"974 091 976", "824 646 753", "015 177 923", "198 869 945", "151 365 890", "560 738 954", "346 050 507", "023 340 712", "311 346 737", "710 117 924", "591 077 286", "380 193 921", "731 257 616", "664 638 702", "985 715 901", "926 282 571", "797 584 830", "026 315 754", "326 008 390", "399 413 441", "236 199 321", "743 546 939", "659 076 491", "303 158 959", "562 224 760", "216 552 570", "318 524 769", "551 564 658", "531 654 740", "005 554 858", "029 853 904", "798 222 857", "160 609 627", "386 715 783", "823 037 233", "044 139 922", "250 193 343", "632 534 945"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 418;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int x = 289;
    int y = 712;
    vector<string> obstacles = {"169 503 715", "317 575 735", "342 461 877", "975 522 872", "260 100 893", "873 167 700", "336 222 584", "777 082 983", "823 478 807", "835 028 956", "769 710 899", "062 050 840", "475 576 577", "309 163 897", "863 272 879", "497 141 159", "356 573 762", "352 451 788", "883 249 433", "771 283 549", "565 099 625", "446 628 766", "230 498 696", "933 461 955", "704 328 829", "108 152 457", "178 822 891", "813 226 236", "923 049 210", "824 385 615", "708 302 913", "035 679 743", "070 218 886", "231 203 540", "996 110 520", "759 496 795", "047 012 609", "912 096 436", "442 349 630", "454 728 933", "596 299 433"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 742;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int x = 427;
    int y = 699;
    vector<string> obstacles = {"768 460 843", "910 370 439", "561 807 906", "788 064 345", "533 198 217", "184 117 523", "751 072 348", "069 072 120", "649 494 847", "450 139 644", "571 589 614", "145 369 910"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 709;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int x = 219;
    int y = 22;
    vector<string> obstacles = {"695 894 926", "028 752 857", "949 745 825", "888 288 570", "954 619 754", "629 017 647", "206 786 894", "869 723 809", "070 199 634", "449 153 282", "187 243 908", "067 192 470", "119 017 219", "132 130 966", "224 415 470", "447 371 854", "920 130 155", "669 062 690", "555 132 358", "117 709 728", "367 125 298", "411 429 837", "515 823 941", "020 765 815", "547 017 938", "009 082 085", "701 179 808", "812 100 222", "018 074 427", "550 129 707", "979 192 852", "215 084 882"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int x = 116;
    int y = 253;
    vector<string> obstacles = {"095 087 390", "865 092 763", "250 115 776", "161 096 150", "153 125 762", "285 563 791", "830 032 378", "725 509 721", "325 018 871", "435 135 725", "641 280 456", "698 039 117", "268 824 840", "277 038 656", "761 200 864", "096 399 756", "532 622 640", "306 311 585", "925 592 656", "098 454 898", "094 728 970", "005 421 465", "660 544 959", "311 350 606", "543 520 613", "940 707 818", "346 032 369", "784 286 608", "968 560 578", "340 324 702", "496 187 406", "332 401 806", "987 116 830", "060 224 523", "515 339 586", "386 354 720", "025 593 692", "023 008 340", "943 043 136", "374 438 664", "646 021 870", "007 142 598", "222 423 475"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 268;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int x = 54;
    int y = 254;
    vector<string> obstacles = {"975 523 996", "135 200 673", "139 532 830", "956 026 627", "306 226 901", "247 473 560", "279 025 697", "165 174 992", "581 460 780", "460 038 836", "519 554 833", "769 518 988", "537 433 783", "600 537 715", "568 039 260", "334 151 667", "187 031 554", "449 423 895", "413 173 745", "008 595 947", "362 010 149", "596 087 595", "113 070 952", "178 657 747", "503 400 966", "358 140 601", "647 356 362", "637 545 939", "259 691 728", "908 752 860", "857 102 849", "205 422 583", "229 475 535", "539 914 975", "830 242 296", "420 321 580"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 264;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int x = 32;
    int y = 123;
    vector<string> obstacles = {"785 471 641", "603 556 837", "184 392 592", "615 133 344", "530 570 610", "823 256 534", "926 039 979", "667 276 996", "531 569 996", "015 122 769", "489 913 967", "961 519 873", "393 453 508", "194 280 954"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 123;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int x = 658;
    int y = 829;
    vector<string> obstacles = {"249 084 121", "251 263 580", "686 619 972", "529 357 371", "841 073 717", "106 501 862", "827 024 036", "412 508 858", "818 071 731", "582 481 571", "316 040 599", "913 620 929", "965 419 612", "908 689 868", "337 111 246", "098 877 897", "013 360 967", "715 258 833"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 844;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int x = 800;
    int y = 712;
    vector<string> obstacles = {"670 257 818", "576 011 128", "289 326 885", "885 056 958", "294 128 927", "981 192 708", "945 105 706", "808 652 749", "125 383 856", "529 622 712", "434 277 470", "298 573 813", "649 011 986", "358 531 990", "752 683 685", "758 156 241", "744 632 658", "833 123 840", "856 034 959", "606 145 236", "085 534 950", "895 071 843", "230 313 466", "281 889 975", "653 012 286", "263 483 743", "076 001 644", "454 752 985", "443 295 405", "060 334 808", "261 296 985"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 727;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int x = 91;
    int y = 126;
    vector<string> obstacles = {"253 144 514", "896 691 820", "975 785 934", "434 414 902", "359 031 699", "808 192 461", "505 080 208", "522 291 312", "250 035 363", "033 815 916", "286 098 717", "512 025 140", "176 008 160", "534 342 758", "513 733 806", "874 424 922", "767 200 486", "285 058 387", "025 050 107", "865 479 933", "026 400 729", "004 506 677", "572 195 871", "612 025 648", "616 653 678", "065 300 891", "401 147 919", "799 124 626", "310 078 176", "514 305 565", "325 243 500", "302 165 654", "469 419 882", "628 572 656", "297 060 351", "388 420 880", "902 414 689", "415 798 834", "775 576 665", "322 895 924", "229 660 753", "443 333 720", "303 187 670", "027 019 495", "576 289 496", "637 095 985"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 136;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int x = 909;
    int y = 871;
    vector<string> obstacles = {"682 291 814"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 871;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int x = 722;
    int y = 506;
    vector<string> obstacles = {"672 415 527", "522 062 073", "413 061 177"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 506;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int x = 15;
    int y = 693;
    vector<string> obstacles = {"435 401 586", "896 450 887", "627 120 348", "311 202 680", "341 164 311", "803 606 683", "625 660 748", "876 230 928", "003 352 972"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 693;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int x = 315;
    int y = 737;
    vector<string> obstacles = {"224 101 749", "608 775 949", "564 526 545", "558 678 855", "249 025 297", "543 618 774", "992 491 600", "745 064 807", "049 663 664", "526 350 945", "481 525 996", "805 142 773", "462 177 547", "131 044 703", "955 398 553", "592 598 715", "052 529 553"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 747;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int x = 237;
    int y = 628;
    vector<string> obstacles = {"040 282 432", "429 668 688", "542 152 731", "846 629 668", "862 480 771", "593 437 926", "059 683 710", "206 330 603", "455 017 353", "193 527 602", "142 303 378"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 633;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int x = 11;
    int y = 50;
    vector<string> obstacles = {"010 515 953", "853 532 934", "235 134 479", "941 209 988", "473 164 211", "579 254 841", "476 791 895", "608 329 427", "019 434 596", "643 620 702", "715 304 642", "523 358 639", "356 563 743", "013 011 566", "061 350 889", "058 527 579", "528 105 844", "598 341 693", "139 130 311", "516 538 719", "746 155 813", "022 491 705", "123 164 967", "959 569 776", "968 179 276", "544 627 638"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int x = 751;
    int y = 539;
    vector<string> obstacles = {"588 234 380", "040 488 836", "382 267 683", "901 591 696", "560 451 625", "402 193 827", "567 030 369", "626 055 287", "327 026 512", "633 029 991", "841 076 773", "648 063 986", "791 119 791", "629 691 712", "605 663 831", "984 025 830", "943 189 440", "738 715 811", "885 772 814", "481 202 449", "961 803 858", "591 143 926", "713 093 149", "358 325 763", "979 415 909", "217 455 608", "903 163 825", "687 058 451", "427 703 866", "595 148 873"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 544;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int x = 633;
    int y = 852;
    vector<string> obstacles = {"925 670 719", "591 370 438", "892 017 514", "419 324 547", "408 587 705", "155 720 971", "501 484 957", "479 597 744", "166 806 818", "472 762 955", "622 502 741"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 867;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int x = 488;
    int y = 768;
    vector<string> obstacles = {"212 467 546", "003 216 900", "678 115 595", "634 104 528", "551 393 579", "831 178 865", "183 151 706", "466 036 398", "013 149 356", "153 024 142", "851 524 721", "633 323 647", "169 764 924", "920 678 966", "287 580 928", "738 089 718", "613 915 983", "370 298 511", "110 086 845", "330 296 644", "564 496 809", "020 558 788", "088 815 922", "216 232 324", "532 722 993", "190 070 191", "640 439 507", "979 429 872", "010 060 339", "975 777 875", "965 293 530", "518 156 938", "620 577 760", "007 674 712", "770 184 420", "782 041 494", "745 415 959", "974 366 883", "865 306 809", "870 005 557", "383 228 862", "569 346 972"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 783;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int x = 712;
    int y = 6;
    vector<string> obstacles = {"383 269 734", "803 047 808", "272 062 250", "533 247 714", "807 423 859", "798 301 830", "871 550 701", "073 848 861", "515 043 865", "503 039 212", "953 352 658", "304 349 891", "115 407 615", "489 461 863", "966 296 761", "761 145 157", "199 494 947", "678 481 665", "474 025 190", "627 262 636", "779 580 663", "555 709 813", "192 258 626", "609 886 999", "607 454 694", "239 326 760", "594 791 813", "159 229 244", "687 276 482", "913 503 947", "991 089 478", "232 017 068", "861 621 656", "027 013 133", "010 027 145", "733 024 804", "880 297 496", "959 208 577", "240 633 801", "493 423 610", "158 105 238", "285 326 795", "712 587 944", "055 620 863", "212 613 822", "289 569 666", "854 028 282"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int x = 740;
    int y = 462;
    vector<string> obstacles = {"427 398 872", "851 619 688", "085 194 627", "043 460 689", "659 584 913", "506 699 928", "533 203 720", "232 492 817", "802 362 609", "894 423 856", "957 152 461", "472 337 513", "103 427 739", "794 264 715", "738 143 174", "546 054 121", "084 237 840", "029 543 730", "042 129 288", "873 323 346", "011 902 964", "158 739 851"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 467;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int x = 546;
    int y = 56;
    vector<string> obstacles = {"074 533 996", "393 174 740", "937 025 943", "599 122 669", "686 261 402", "704 568 743", "660 007 510", "869 248 545", "182 770 795", "173 049 199", "719 228 439", "753 201 441", "918 534 873"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 56;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int x = 477;
    int y = 23;
    vector<string> obstacles = {"036 214 240", "666 457 709", "620 012 962", "309 457 791", "013 148 931", "832 378 554", "144 926 993", "985 792 883", "766 423 595"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int x = 976;
    int y = 312;
    vector<string> obstacles = {"411 354 825", "081 038 398", "684 690 808", "335 350 843", "848 448 744", "826 558 824"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 312;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int x = 407;
    int y = 586;
    vector<string> obstacles = {"221 588 935", "759 281 894", "218 064 583", "344 206 584", "176 581 841", "135 367 759", "993 469 846", "885 067 920", "689 088 743", "311 178 576", "038 188 198", "934 438 523", "749 011 984", "810 182 877", "775 354 930", "892 282 877", "282 386 439", "899 794 938", "404 545 834", "459 299 460", "667 018 153", "943 344 955", "777 095 635", "315 720 938", "669 394 867", "880 237 554", "095 213 927", "298 411 622", "525 054 740", "147 105 551", "887 505 663", "850 298 629", "449 061 994", "733 387 911", "722 388 724", "071 142 392", "279 254 551", "192 002 165", "703 241 623", "305 247 964", "073 228 471", "115 036 715"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 596;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int x = 359;
    int y = 65;
    vector<string> obstacles = {"183 216 462", "259 113 239", "073 763 872", "721 386 691", "876 349 698", "785 313 552", "202 275 314", "641 050 662", "826 292 650", "008 319 563", "391 816 945", "928 577 739", "409 027 519", "712 453 755", "829 337 912", "398 214 510", "688 634 805", "796 564 696", "061 527 740", "806 313 889", "029 272 996", "953 019 560", "511 326 651", "164 186 449", "025 133 367", "872 495 778"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 70;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int x = 551;
    int y = 28;
    vector<string> obstacles = {"022 756 768"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int x = 435;
    int y = 465;
    vector<string> obstacles = {"088 883 940", "130 515 752", "522 036 888", "211 726 925", "065 755 774", "219 140 682", "619 694 993", "573 189 586", "335 071 725", "122 649 844", "153 385 956", "241 530 873", "235 137 438", "414 048 978", "008 360 818", "604 010 462", "898 309 846", "975 512 829", "099 113 757", "475 501 926", "013 017 374", "512 587 797", "227 541 674", "308 231 751", "022 064 919", "992 386 848", "773 121 164", "850 336 401", "555 384 521", "363 019 295", "501 471 940", "708 167 780", "559 643 737", "434 157 212", "636 946 947", "297 748 920", "849 585 913", "571 691 757", "544 717 904", "652 297 647", "846 683 998", "188 036 913", "629 740 774", "943 239 628", "395 791 912", "032 250 316", "087 708 898", "938 405 773", "782 171 682", "193 463 744"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 470;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int x = 416;
    int y = 576;
    vector<string> obstacles = {"048 180 680", "414 499 628", "657 009 708", "446 279 406", "760 721 827", "349 044 661", "645 526 922", "409 281 602", "434 049 195", "001 217 319", "172 556 606", "159 415 776", "877 015 928", "729 424 471", "720 122 150", "467 831 931", "408 487 980", "295 390 585", "694 329 772", "451 289 842", "883 099 615", "868 544 791", "444 460 945", "744 105 526", "219 238 567"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 591;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int x = 877;
    int y = 378;
    vector<string> obstacles = {"199 189 409", "358 072 571", "443 614 742", "807 177 825", "062 699 838", "388 634 714", "335 711 833", "563 084 281", "644 791 930", "477 187 252", "181 192 605", "288 636 896", "508 010 538", "695 423 581", "277 032 138", "347 247 297", "798 110 961", "382 093 787"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 383;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int x = 643;
    int y = 411;
    vector<string> obstacles = {"675 697 943", "191 565 974", "470 025 664", "364 172 759", "384 193 840", "140 427 685", "843 148 475", "235 047 739", "106 272 650", "555 417 848", "830 862 975", "435 916 925", "160 178 877", "965 443 453", "009 492 584", "001 089 763", "406 613 839", "165 580 990", "479 804 991", "245 783 863", "132 162 584", "318 060 349", "711 377 877", "213 735 971"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 441;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int x = 798;
    int y = 564;
    vector<string> obstacles = {"732 111 697", "604 410 759", "056 077 135", "004 174 289", "661 056 633", "625 222 622", "520 154 678", "183 246 400", "266 527 957", "828 788 992", "517 657 841", "576 441 847", "207 446 517", "574 603 844", "618 325 693", "927 242 909", "246 152 333", "730 127 903", "002 565 987", "940 834 904", "001 256 324", "814 284 964", "293 330 925", "762 358 446", "259 008 090", "181 249 400", "011 474 602"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 584;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int x = 664;
    int y = 389;
    vector<string> obstacles = {"667 217 718", "425 079 384", "417 197 613", "866 139 268", "519 482 776", "812 380 670", "569 687 933", "796 555 619", "802 328 479", "786 255 743", "109 225 883", "756 287 795", "310 580 796", "462 126 575", "941 533 822", "006 103 408", "057 311 580", "966 306 603", "752 656 756", "174 326 961", "151 206 953", "329 393 464", "426 689 769", "639 529 657", "394 613 706", "024 768 881", "588 581 728", "662 757 851", "027 217 637", "367 237 502", "874 474 620", "465 420 451", "564 448 560", "230 571 969", "520 458 527", "248 465 714", "496 158 315", "739 233 240", "816 665 728", "646 132 778", "105 653 921", "763 025 784", "907 347 565", "412 407 672", "167 412 611"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 399;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int x = 909;
    int y = 107;
    vector<string> obstacles = {"236 066 173", "134 167 853", "412 073 602", "699 540 720", "564 451 476", "452 129 813", "347 155 590", "568 255 462", "990 053 983", "915 046 758", "579 131 406", "878 350 775", "395 581 725", "100 088 477", "698 257 676", "235 219 233", "519 634 878", "177 082 770", "075 124 763", "267 119 798", "880 516 748", "378 195 314", "704 502 878", "044 131 674", "795 336 945", "072 183 668", "794 266 419", "003 259 635", "589 339 875", "663 143 366", "101 150 844", "047 141 269", "340 836 995", "867 089 397", "118 115 936", "020 555 952", "901 039 424", "372 693 787", "693 734 907", "009 320 633", "279 561 747", "023 343 807", "560 356 845", "721 190 471", "638 095 396", "645 301 623", "941 607 766", "283 040 082"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 112;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int x = 882;
    int y = 972;
    vector<string> obstacles = {"048 528 727", "285 341 640", "182 243 529", "466 568 856", "768 175 759", "665 099 756", "850 113 458", "340 846 935", "537 370 559", "616 337 447", "488 061 556"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 977;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int x = 511;
    int y = 187;
    vector<string> obstacles = {"975 645 753", "382 783 817", "226 186 283", "347 169 206", "370 141 583", "307 140 161"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 187;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int x = 97;
    int y = 445;
    vector<string> obstacles = {"866 231 451", "004 308 707", "623 019 586", "089 174 291", "570 417 432", "181 131 600", "883 075 761", "759 240 360", "495 709 744", "664 464 623", "996 574 991", "776 051 385", "722 044 900", "596 013 061", "979 119 727", "792 054 977", "003 575 624", "605 014 528", "216 706 821", "945 200 641", "595 170 973", "289 211 814", "485 230 840", "627 622 674", "099 109 216", "632 143 380", "748 310 600", "164 271 423", "786 549 703", "273 143 564", "757 529 929", "464 357 689", "417 426 755", "725 583 622", "733 078 253", "555 052 849", "785 845 937", "511 192 610", "269 557 751"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 445;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int x = 768;
    int y = 623;
    vector<string> obstacles = {"956 497 839"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 623;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int x = 725;
    int y = 867;
    vector<string> obstacles = {"278 381 864", "060 106 719", "895 532 598", "213 407 844", "048 387 604", "794 983 991", "991 075 989", "091 240 330", "760 114 660", "194 209 632", "606 061 705", "734 406 765", "384 086 599", "195 165 231", "519 659 760", "068 323 683", "307 149 186", "603 049 846", "788 817 982", "277 238 716", "528 156 949", "645 385 711", "529 173 348", "280 434 635", "896 016 461", "752 102 555", "975 243 937", "765 424 546", "980 559 881", "802 509 695", "092 310 325", "126 588 787"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 882;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int x = 688;
    int y = 383;
    vector<string> obstacles = {"310 655 820", "412 667 795", "671 122 161", "525 007 868", "635 746 884", "653 605 649", "188 265 344", "001 056 064", "615 815 924", "546 076 122", "621 755 995", "068 568 959", "979 625 706", "597 094 487", "560 201 925", "237 491 949", "587 082 350", "127 009 697", "717 367 764", "289 856 921", "026 062 092", "326 839 965", "816 004 563", "514 801 839", "930 170 310", "299 621 846", "391 748 843", "840 241 564", "483 482 816", "875 228 561", "725 257 793", "612 182 602"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 403;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int x = 908;
    int y = 391;
    vector<string> obstacles = {"380 492 609", "845 782 829", "751 107 998", "894 377 802", "580 226 521", "819 337 656", "544 393 848", "402 732 930", "067 407 728", "353 002 092", "990 619 623", "862 372 498", "384 687 838", "046 395 712"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 391;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int x = 747;
    int y = 575;
    vector<string> obstacles = {"718 368 645", "292 149 256", "996 274 388", "818 407 750", "225 017 755", "118 298 990", "567 050 960", "752 141 438", "324 406 862", "960 118 503", "462 063 313", "008 044 475", "896 387 475", "612 154 238", "746 354 477", "034 152 918", "313 458 595", "713 816 939", "750 043 990", "393 440 801", "390 011 735", "561 002 271", "166 134 279", "791 254 515", "642 088 392", "092 294 537", "170 276 405", "076 167 257", "473 381 948", "831 542 780", "496 004 920", "811 541 957", "711 178 322", "630 068 216", "979 092 619", "430 592 685", "213 051 607"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 585;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int x = 513;
    int y = 28;
    vector<string> obstacles = {"137 702 763", "890 117 672", "079 083 187", "891 340 820", "914 087 089", "293 172 684", "483 426 955", "907 469 718", "929 294 772", "583 372 933", "884 126 973", "313 303 590", "236 915 976", "459 875 915", "011 004 209", "451 111 801", "162 157 548", "978 145 730", "678 119 494", "862 201 881", "953 355 790", "147 093 327", "562 253 719", "738 385 603", "068 816 887", "475 552 779", "193 206 495", "616 076 404", "791 778 821", "064 621 899", "897 513 948", "999 305 919", "831 145 597", "522 546 979", "302 765 914", "568 425 735", "026 069 530", "580 259 376"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int x = 489;
    int y = 563;
    vector<string> obstacles = {"385 207 460", "211 394 463", "095 816 959", "057 432 614", "620 298 821", "814 688 791", "278 302 908", "686 648 756", "554 292 801", "940 726 931", "918 079 413", "676 053 983", "544 442 596", "901 745 923", "117 571 755", "367 338 479", "653 726 965", "522 610 909", "176 559 642", "516 173 205", "346 035 441", "751 058 740", "738 382 837", "366 139 248", "608 622 713", "631 270 534", "089 158 832", "949 014 832", "734 110 536", "772 281 324", "725 893 933", "612 263 349", "118 174 497", "550 319 736", "923 033 891", "271 046 583", "376 067 930", "054 712 929", "315 215 296", "230 637 864"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 583;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int x = 165;
    int y = 211;
    vector<string> obstacles = {"184 319 889", "097 918 973", "870 165 706", "448 187 609", "388 507 875", "450 228 358", "521 044 385", "172 661 886", "745 040 160", "064 335 488", "977 015 622", "946 030 684", "998 483 640", "032 266 394", "432 215 974", "918 273 294"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 211;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int x = 306;
    int y = 428;
    vector<string> obstacles = {"337 402 931", "472 330 337", "105 837 953", "609 168 329", "051 098 457", "675 156 299", "554 002 794", "328 014 445", "034 212 328", "240 325 807", "798 262 377", "453 445 728", "535 520 729", "874 064 569", "897 183 775", "289 560 885", "698 167 937", "511 718 871", "589 732 876", "127 030 338", "744 648 749", "341 055 069", "879 473 953", "705 170 546", "591 477 986", "981 015 526", "287 110 465", "345 210 337", "406 915 956", "305 972 996", "736 751 772", "203 933 954"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 448;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int x = 747;
    int y = 493;
    vector<string> obstacles = {"988 561 628", "014 775 942", "248 331 603", "922 331 555", "726 189 930", "336 628 955", "755 619 800", "035 328 630"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 498;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int x = 241;
    int y = 507;
    vector<string> obstacles = {"143 085 420", "823 502 715"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 512;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int x = 895;
    int y = 788;
    vector<string> obstacles = {"517 545 732", "425 145 905", "876 002 605", "352 547 957", "196 179 835", "738 041 830", "702 338 719", "852 262 643", "835 779 788", "130 317 428", "753 187 608", "296 006 131"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 798;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int x = 855;
    int y = 998;
    vector<string> obstacles = {"763 474 924", "406 116 869", "347 184 457", "826 064 520", "695 681 876", "026 299 685", "737 385 431", "066 386 824", "290 414 687", "677 039 083", "777 818 824", "625 119 727", "448 274 650", "488 134 903", "865 592 680", "927 353 635", "719 014 194", "132 277 992", "637 259 761", "821 225 237", "108 173 532", "098 744 935", "705 484 737", "835 200 717", "756 126 807", "052 404 427", "062 640 764", "421 067 509", "362 177 293", "113 608 706", "810 435 768", "283 501 770", "572 157 313", "733 005 304", "504 048 052", "636 311 922"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 1008;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int x = 797;
    int y = 156;
    vector<string> obstacles = {"544 401 618", "368 339 671", "374 937 938", "730 424 941", "538 527 887", "654 293 704", "852 078 150", "802 822 841", "701 123 640", "903 599 922", "110 108 754", "327 307 999", "213 707 863", "717 246 873", "272 396 969", "490 071 634", "844 159 244", "827 121 810", "539 299 322", "448 379 713", "799 895 925", "702 090 253", "974 563 953", "472 197 323", "954 233 464", "614 835 945", "419 037 130", "884 062 963", "662 331 407", "251 657 872", "153 071 203"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 156;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int x = 207;
    int y = 826;
    vector<string> obstacles = {"003 324 979", "881 234 558", "363 115 570", "461 271 414", "080 238 485", "924 692 975", "897 436 969", "959 503 688", "008 031 366", "094 140 953", "768 325 569", "561 443 671", "730 010 708", "928 893 896", "857 374 543", "228 404 574", "939 257 607", "211 512 947", "379 108 689", "723 275 725", "553 585 725", "901 221 693", "258 223 481", "661 774 988", "589 124 993", "002 428 905", "166 288 357", "921 119 133", "444 266 374", "204 809 957", "374 859 946", "139 082 264", "638 122 179", "293 643 819"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 841;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int x = 838;
    int y = 595;
    vector<string> obstacles = {"100 740 840", "431 127 973", "296 037 489", "101 314 755"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 600;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int x = 50;
    int y = 367;
    vector<string> obstacles = {"578 390 699", "513 942 987", "396 171 549", "749 039 853", "746 243 811", "470 590 949", "945 554 641", "941 063 542", "500 737 963", "653 885 901", "607 122 747", "451 512 742", "404 151 379"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 367;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int x = 500;
    int y = 1000;
    vector<string> obstacles = {"001 500 500", "002 500 500", "003 500 500", "004 500 500", "005 500 500", "006 500 500", "007 500 500", "008 500 500", "009 500 500", "010 500 500", "011 500 500", "012 500 500", "013 500 500", "014 500 500", "015 500 500", "016 500 500", "017 500 500", "018 500 500", "019 500 500", "020 500 500", "021 500 500", "022 500 500", "023 500 500", "024 500 500", "025 500 500", "026 500 500", "027 500 500", "028 500 500", "029 500 500", "030 500 500", "031 500 500", "032 500 500", "033 500 500", "034 500 500", "035 500 500", "036 500 500", "037 500 500", "038 500 500", "039 500 500", "040 500 500", "041 500 500", "042 500 500", "043 500 500", "044 500 500", "045 500 500", "046 500 500", "047 500 500", "048 500 500", "049 500 500", "050 500 500"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 1250;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int x = 10;
    int y = 1000;
    vector<string> obstacles = {"050 005 015", "049 010 020", "048 015 025", "047 020 030", "046 025 035", "045 030 040", "044 035 045", "043 040 050", "042 045 055", "041 050 060", "040 055 065", "039 060 070", "038 065 075", "037 070 080", "036 075 085", "035 080 090", "034 085 095", "033 090 100", "032 095 105", "031 100 110", "030 105 115", "029 110 120", "028 115 125", "027 120 130", "026 125 135", "025 130 140", "024 135 145", "023 140 150", "022 145 155", "021 150 160", "020 155 165", "019 160 170", "018 165 175", "017 170 180", "016 175 185", "015 180 190", "014 185 195", "013 190 200", "012 195 205", "011 200 210", "010 205 215", "009 210 220", "008 215 225", "007 220 230", "006 225 235", "005 230 240", "004 235 245", "003 240 250", "002 245 255", "001 250 260"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 1250;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int x = 500;
    int y = 800;
    vector<string> obstacles = {"800 001 500", "400 001 499", "401 501 999"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 805;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int x = 15;
    int y = 10;
    vector<string> obstacles = {"005 005 015"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int x = 645;
    int y = 802;
    vector<string> obstacles = {"739 038 799", "916 169 791", "822 372 911", "162 125 992", "261 307 545", "510 031 765", "592 723 742", "477 315 676", "566 143 617", "337 114 664", "986 648 883", "116 230 680", "254 746 943", "742 948 988", "060 117 401", "634 035 433", "288 741 864", "819 626 730", "906 071 222", "554 100 121", "573 051 551", "949 528 915", "562 151 223", "857 135 243", "621 115 474", "588 405 615", "895 812 919", "052 378 836", "858 116 505", "285 428 469", "792 244 250", "109 265 637", "714 804 885", "625 150 410", "518 593 921", "282 235 339", "081 212 659", "663 047 982", "556 194 345", "798 150 938", "391 026 813", "886 348 796", "975 007 743", "053 854 895", "243 561 875"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 817;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int x = 5;
    int y = 1;
    vector<string> obstacles = {"001 001 010"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int x = 3;
    int y = 5;
    vector<string> obstacles = {"003 001 010", "004 001 003"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int x = 50;
    int y = 100;
    vector<string> obstacles = {"210 010 200"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int x = 1;
    int y = 5;
    vector<string> obstacles = {"001 002 003", "002 001 003"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int x = 15;
    int y = 12;
    vector<string> obstacles = {"010 010 020", "015 010 020", "005 020 050"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int x = 150;
    int y = 50;
    vector<string> obstacles = {"005 100 200", "010 110 190"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int x = 5;
    int y = 2;
    vector<string> obstacles = {"002 001 010", "003 001 010"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int x = 1;
    int y = 15;
    vector<string> obstacles = {"014 001 002", "013 001 003", "011 002 004", "010 003 005", "009 001 003", "008 003 005"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    int x = 10;
    int y = 10;
    vector<string> obstacles = {"005 001 011", "003 012 013"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    int x = 25;
    int y = 20;
    vector<string> obstacles = {"005 022 028", "010 020 030"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    int x = 645;
    int y = 802;
    vector<string> obstacles = {"739 038 799", "916 169 791", "822 372 911", "162 125 992", "261 307 545", "510 031 765", "592 723 742", "477 315 676", "566 143 617", "337 114 664", "986 648 883", "116 230 680", "254 746 943", "742 948 988", "060 117 401", "634 035 433", "288 741 864", "819 626 730", "906 071 222", "554 100 121", "573 051 551", "949 528 915", "562 151 223", "857 135 243", "621 115 474", "588 405 615", "895 812 919", "052 378 836", "858 116 505", "285 428 469", "792 244 250", "109 265 637", "714 804 885", "625 150 410", "518 593 921", "282 235 339", "081 212 659", "663 047 982", "556 194 345", "798 150 938", "391 026 813", "886 348 796", "975 007 743", "053 854 895", "243 561 875", "546 001 999"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 817;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    int x = 5;
    int y = 10;
    vector<string> obstacles = {"004 002 999", "009 002 020"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    int x = 500;
    int y = 800;
    vector<string> obstacles = {"400 400 600", "500 100 999"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 805;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    int x = 10;
    int y = 10;
    vector<string> obstacles = {"011 001 100"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    int x = 3;
    int y = 5;
    vector<string> obstacles = {"003 001 010", "004 001 003", "010 001 002", "011 001 002", "012 001 002"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    int x = 15;
    int y = 10;
    vector<string> obstacles = {"005 010 020", "020 010 020"};
    ObjectFall* pObj = new ObjectFall();
    clock_t start = clock();
    int result = pObj->howLong(x, y, obstacles);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=20960015&rd=9810&pm=5915
********************************************************************************
#include<vector>
#include<string>
#include<algorithm>
#include<sstream>
#include<iostream>
using namespace std;
 
struct Ob
{
  int y,x1,x2;
};
 
Ob t[60];
 
bool cmp(Ob a,Ob b) {return a.y>b.y;}
 
struct ObjectFall
{
  int howLong(int x,int y,vector<string> v)
  {
    for(int i=0;i<v.size();i++)
    {
      istringstream input(v[i]);
      input>>t[i].y>>t[i].x1>>t[i].x2;
    }
    sort(t,t+v.size(),cmp);
    int ret=0;
    for(int i=0;i<v.size();i++)
      if(y>=t[i].y&&t[i].x1<=x&&x<=t[i].x2)
      {
        ret+=y-t[i].y+5;
        cout<<ret<<endl;
        x=t[i].x2;
        y=t[i].y;
      }
    ret+=y;
    cout<<ret<<endl;
    return ret;
  }
};

********************************************************************************
*******************************************************************************/