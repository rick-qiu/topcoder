/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3971
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

class StockHistory {
public:
    int maximumEarnings(int initialInvestment, int monthlyContribution, vector<string> stockPrices);
};

int StockHistory::maximumEarnings(int initialInvestment, int monthlyContribution, vector<string> stockPrices) {
    int ret;
    return ret;
}


int test0() {
    int initialInvestment = 1000;
    int monthlyContribution = 0;
    vector<string> stockPrices = {"10 20 30", "15 24 32"};
    StockHistory* pObj = new StockHistory();
    clock_t start = clock();
    int result = pObj->maximumEarnings(initialInvestment, monthlyContribution, stockPrices);
    clock_t end = clock();
    delete pObj;
    int expected = 500;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int initialInvestment = 1000;
    int monthlyContribution = 0;
    vector<string> stockPrices = {"10", "9"};
    StockHistory* pObj = new StockHistory();
    clock_t start = clock();
    int result = pObj->maximumEarnings(initialInvestment, monthlyContribution, stockPrices);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int initialInvestment = 100;
    int monthlyContribution = 20;
    vector<string> stockPrices = {"40 50 60", "37 48 55", "100 48 50", "105 48 47", "110 50 52", "110 50 52", "110 51 54", "109 49 53"};
    StockHistory* pObj = new StockHistory();
    clock_t start = clock();
    int result = pObj->maximumEarnings(initialInvestment, monthlyContribution, stockPrices);
    clock_t end = clock();
    delete pObj;
    int expected = 239;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int initialInvestment = 1616;
    int monthlyContribution = 689;
    vector<string> stockPrices = {"708 683 777 381 103 776 924 909", "851 777 429 124 280 525 338 187", "963 104 962 484 808 610 573 516", "376 170 355 37 464 202 613 447", "934 937 221 434 789 178 330 859", "502 321 317 906 591 616 989 462", "454 688 40 763 442 298 746 288", "186 360 927 892 180 208 145 204", "604 110 158 259 409 35 622 399", "635 665 50 406 998 669 5 895", "717 207 562 955 585 705 10 41", "306 867 796 108 69 941 744 11", "374 233 492 139 116 876 208 310", "906 844 532 905 658 216 789 270", "407 692 437 343 395 364 768 554", "394 724 869 962 288 933 815 648", "899 338 133 354 67 236 492 371", "973 886 671 686 726 786 749 367", "182 175 569 206 27 806 430 609", "105 960 52 738 993 716 766 898", "837 456 983 185 419 642 882 366", "492 825 373 28 359 913 293 966", "697 686 865 825 637 561 401 987", "95 609 249 716 343 820 4 543", "843 618 952 913 328 628 785 74", "119 691 544 213 713 128 824 850", "609 257 233 484 384 162 87 472", "21 700 369 178 490 777 931 363", "575 856 944 821 949 725 606 278", "509 515 90 522 943 960 750 800", "574 919 576 462 421 138 893 841", "539 265 318 404 593 118 957 138", "687 201 866 190 441 464 751 758", "319 328 917 236 209 942 478 597", "248 703 803 41 905 22 229 878", "305 335 1 677 808 374 487 651", "837 682 625 299 958 376 627 297", "206 163 932 637 662 605 412 23", "288 641 820 501 993 344 497 363", "976 940 325 278 291 77 927 683", "680 334 126 432 657 992 640 674", "824 49 42 7 462 481 960 856", "349 764 532 126 842 636 106 79", "208 115 196 486 198 757 685 16", "874 186 276 867 694 844 196 672", "833 18 152 625 764 100 528 881", "88 103 845 194 607 430 461 804", "657 887 521 585 684 947 165 429", "74 270 979 889 226 463 701 72", "886 102 168 775 725 992 522 878"};
    StockHistory* pObj = new StockHistory();
    clock_t start = clock();
    int result = pObj->maximumEarnings(initialInvestment, monthlyContribution, stockPrices);
    clock_t end = clock();
    delete pObj;
    int expected = 4863440;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int initialInvestment = 4258;
    int monthlyContribution = 70;
    vector<string> stockPrices = {"444 257 968 323 979 290 205", "855 907 177 774 704 935 616", "146 777 408 379 563 654 641", "331 996 735 501 692 348 629", "226 554 903 790 510 646 35", "414 830 354 155 577 24 978", "918 624 116 257 678 812 397", "126 186 201 754 737 544 789", "247 728 413 913 936 728 460", "880 961 132 67 861 868 111", "277 34 190 882 5 969 271", "223 485 277 349 232 977 493", "880 353 717 218 121 633 122", "514 950 244 244 539 953 243", "469 443 747 592 477 504 560", "421 439 520 57 545 472 452", "420 231 343 311 677 207 421", "302 278 937 882 211 922 132", "160 50 643 511 649 943 126", "827 662 271 293 125 627 59", "131 256 545 618 767 652 689", "437 800 332 564 322 874 173", "100 786 511 423 116 692 187", "469 14 142 657 849 738 615", "542 524 976 366 148 386 610", "57 546 28 423 653 905 759", "50 561 67 870 182 22 372", "150 17 748 740 646 968 819", "1 689 611 818 467 153 891", "224 764 966 574 50 913 889", "949 738 650 520 786 299 12", "561 532 696 160 342 770 498", "460 574 918 758 811 378 188", "162 221 539 779 412 638 29", "343 878 25 768 676 476 690", "644 679 816 865 777 559 594", "532 32 282 225 502 785 272", "739 744 947 374 925 962 216", "48 713 424 603 823 822 37", "195 8 646 681 165 635 397", "783 49 669 494 145 250 457", "208 24 810 434 544 457 427", "76 392 846 715 100 908 777", "722 920 165 106 700 352 31", "280 113 560 320 921 907 267", "180 654 28 203 729 180 180", "811 953 606 850 200 841 30", "566 345 779 357 417 542 186", "388 816 114 410 143 518 360", "867 438 884 759 430 717 396"};
    StockHistory* pObj = new StockHistory();
    clock_t start = clock();
    int result = pObj->maximumEarnings(initialInvestment, monthlyContribution, stockPrices);
    clock_t end = clock();
    delete pObj;
    int expected = 5440815;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int initialInvestment = 7848;
    int monthlyContribution = 362;
    vector<string> stockPrices = {"810 749", "847 247", "652 557", "667 302", "187 106", "816 718", "593 168", "40 75", "700 567", "925 414", "941 320", "487 511", "553 28", "988 388", "32 512", "22 80", "836 711", "836 648", "340 818", "917 453", "34 669", "814 658", "980 390", "217 7", "518 281", "285 830", "211 959", "227 319", "54 753", "126 33", "927 336", "20 671", "296 622", "230 87", "168 906", "935 550", "290 252", "6 267", "610 136", "76 142", "972 334", "877 798", "74 68", "812 838", "668 389"};
    StockHistory* pObj = new StockHistory();
    clock_t start = clock();
    int result = pObj->maximumEarnings(initialInvestment, monthlyContribution, stockPrices);
    clock_t end = clock();
    delete pObj;
    int expected = 2358230;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int initialInvestment = 1513;
    int monthlyContribution = 416;
    vector<string> stockPrices = {"279", "733", "596", "264", "684", "593", "43", "104", "876", "125", "364", "635", "47", "575", "389", "685", "773", "14", "469", "508", "358", "350", "437", "924", "399", "601", "802", "714", "622", "408", "211", "256", "953", "797", "143", "415", "855", "198", "870", "690", "898", "709", "660", "599", "593", "616", "222", "320", "465"};
    StockHistory* pObj = new StockHistory();
    clock_t start = clock();
    int result = pObj->maximumEarnings(initialInvestment, monthlyContribution, stockPrices);
    clock_t end = clock();
    delete pObj;
    int expected = 298454;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int initialInvestment = 6823;
    int monthlyContribution = 947;
    vector<string> stockPrices = {"515 207 812 145 140 862", "512 293 202 411 913 201", "393 342 859 400 932 559", "948 158 833 586 925 303", "419 17 321 307 88 219", "341 611 327 290 12 206", "983 255 563 455 773 526", "79 177 53 599 377 974", "828 13 160 809 30 547", "396 830 17 678 969 456", "353 284 563 696 815 591", "803 737 664 386 648 763", "155 462 32 39 307 322", "749 235 917 139 603 10", "828 949 792 833 440 114", "548 69 479 17 32 296", "13 19 470 895 713 662", "549 874 377 124 55 940", "687 916 757 836 230 843", "563 915 761 200 893 967", "720 230 336 300 997 823", "525 65 948 477 292 838", "662 489 48 445 472 419", "428 41 725 788 183 437", "798 33 318 683 359 705", "483 888 887 931 615 307", "438 112 827 660 656 873", "551 720 43 273 923 131", "471 254 433 494 952 344", "807 692 652 612 151 468", "154 869 341 254 974 126", "667 246 334 287 718 739", "166 113 527 697 384 421", "959 589 404 534 353 458", "899 989 411 258 824 489", "342 428 676 102 250 718", "13 718 773 274 215 754", "980 956 508 104 504 927", "220 338 935 474 303 167", "466 88 98 132 775 790", "345 569 173 717 457 806", "989 939 32 616 215 545", "613 922 394 968 714 750", "760 566 80 432 633 444", "200 57 56 540 78 177"};
    StockHistory* pObj = new StockHistory();
    clock_t start = clock();
    int result = pObj->maximumEarnings(initialInvestment, monthlyContribution, stockPrices);
    clock_t end = clock();
    delete pObj;
    int expected = 944705;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int initialInvestment = 947;
    int monthlyContribution = 353;
    vector<string> stockPrices = {"925 493 29", "390 341 572", "64 725 273", "218 59 196", "739 433 817", "959 578 769", "496 108 834", "155 125 111", "402 971 372", "530 912 383", "558 965 880", "912 922 260", "87 274 140", "951 228 447", "85 980 799", "4 846 638", "240 693 999", "771 321 262", "111 236 786", "538 511 599", "248 754 313", "94 319 131", "668 820 8", "701 291 202", "363 389 220", "684 355 340", "834 692 26", "494 121 830", "872 422 187", "338 491 395", "27 788 469", "717 541 50", "522 304 798", "479 885 509", "549 382 957", "201 997 712", "188 95 812", "28 217 329", "392 691 271", "292 385 323", "796 700 450", "506 358 929", "276 740 771", "589 843 642", "500 354 945", "398 294 38", "948 471 78", "927 810 551"};
    StockHistory* pObj = new StockHistory();
    clock_t start = clock();
    int result = pObj->maximumEarnings(initialInvestment, monthlyContribution, stockPrices);
    clock_t end = clock();
    delete pObj;
    int expected = 1821795;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int initialInvestment = 3977;
    int monthlyContribution = 361;
    vector<string> stockPrices = {"297 527 736 97", "983 609 312 158", "694 46 546 73", "348 142 336 715", "633 892 511 157", "652 58 604 367", "806 492 860 168", "940 724 508 439", "733 783 274 566", "335 278 143 149", "261 722 384 951", "533 119 805 105", "68 781 277 564", "315 415 495 805", "156 445 993 785", "36 596 416 140", "360 718 27 638", "130 862 476 886", "838 617 820 284", "608 676 783 218", "582 675 275 526", "563 266 153 194", "906 444 242 309", "661 128 599 266", "958 986 27 218", "650 520 841 777", "209 384 887 975", "855 969 802 460", "959 233 535 949", "677 768 109 937", "840 144 635 646", "99 473 587 225", "310 246 305 211", "179 406 770 227", "152 681 615 933", "554 157 393 238", "980 109 90 740", "939 78 893 444", "739 202 206 701", "629 790 912 423", "196 152 893 526", "995 677 794 641", "450 164 37 64", "986 392 87 956", "427 958 970 805", "631 350 40 118", "382 274 984 382", "534 234 107 265"};
    StockHistory* pObj = new StockHistory();
    clock_t start = clock();
    int result = pObj->maximumEarnings(initialInvestment, monthlyContribution, stockPrices);
    clock_t end = clock();
    delete pObj;
    int expected = 169731;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int initialInvestment = 5435;
    int monthlyContribution = 539;
    vector<string> stockPrices = {"381 490 444 427 884 489 181 272 434", "833 414 24 80 440 207 50 33 742", "77 367 552 16 4 594 95 960 700", "158 696 529 126 741 618 1 252 989", "235 312 81 465 178 636 906 844 720", "210 832 380 425 410 537 596 31 84", "293 245 592 128 224 509 873 313 830", "455 987 364 748 737 285 289 767 548", "498 956 96 826 129 921 875 703 91", "509 952 213 597 135 883 239 307 890", "211 722 709 368 971 114 769 738 465", "74 814 78 271 429 678 950 512 374", "88 235 370 925 310 196 853 622 35", "824 808 483 521 406 191 207 986 352", "577 625 247 278 932 408 605 333 624", "14 997 775 688 895 378 802 347 951", "364 628 770 231 124 810 97 883 516", "829 695 366 486 919 681 894 699 141", "682 144 438 712 856 208 738 587 155", "795 781 284 835 689 535 960 236 446", "645 746 781 347 573 318 256 608 987", "727 314 827 409 482 247 688 94 870", "2 917 181 541 442 481 78 333 868", "45 105 350 780 672 381 291 893 780", "972 28 404 339 274 432 505 331 657", "458 156 449 355 464 88 49 607 794", "83 359 50 607 477 924 352 952 936", "318 113 99 463 88 996 114 670 964", "127 690 289 312 724 226 940 830 2", "151 149 509 299 503 607 833 478 763", "693 233 560 924 234 786 620 826 523", "177 925 733 586 891 326 158 694 675", "893 941 133 239 816 585 215 204 537", "823 547 313 143 456 546 878 10 422", "204 487 686 132 103 953 42 43 682", "525 653 490 753 329 444 760 264 82", "579 424 317 40 602 911 433 203 827", "342 69 765 981 601 379 824 91 669", "235 325 626 199 491 272 889 344 497", "178 657 839 865 764 72 324 487 922", "775 923 797 909 312 79 292 802 757", "618 289 204 616 95 950 196 959 356"};
    StockHistory* pObj = new StockHistory();
    clock_t start = clock();
    int result = pObj->maximumEarnings(initialInvestment, monthlyContribution, stockPrices);
    clock_t end = clock();
    delete pObj;
    int expected = 6207084;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int initialInvestment = 9237;
    int monthlyContribution = 866;
    vector<string> stockPrices = {"956 128 816 334 467 693 75 940 755", "759 339 16 171 838 378 321 246 893", "619 630 466 34 44 67 281 474 324", "672 370 732 217 243 164 87 201 402", "602 276 370 930 155 455 574 345 85", "397 806 725 963 945 846 793 442 719", "153 239 257 65 999 303 503 258 868", "600 150 958 92 199 800 916 739 950", "715 916 761 67 70 990 378 948 476", "865 722 263 746 667 726 270 909 874", "269 405 473 521 556 104 945 652 771", "879 594 22 963 655 468 51 182 338", "657 26 875 647 812 559 526 195 911", "283 546 814 270 808 411 134 811 930", "59 410 582 73 521 602 514 998 823", "703 445 762 118 314 379 909 79 476", "7 932 541 747 469 972 392 529 370", "775 710 646 50 889 158 176 91 126", "621 523 92 254 100 748 676 959 849", "152 766 47 769 93 89 891 47 75", "948 144 46 70 242 679 445 99 718", "806 635 58 503 718 354 796 857 192", "575 449 195 547 658 8 350 844 729", "153 90 344 326 334 883 201 288 94", "914 427 898 646 350 87 273 710 850", "756 998 581 343 221 31 460 31 432", "826 37 661 709 739 313 41 195 658", "681 803 552 901 256 421 925 351 447", "474 138 850 791 164 146 839 31 81", "745 247 438 216 520 634 397 232 47", "580 229 974 350 326 274 241 602 666", "214 792 80 85 655 623 364 150 956", "475 794 155 304 600 173 6 40 780", "718 363 244 592 264 34 557 920 716", "611 266 725 758 364 623 59 797 380", "429 329 172 953 862 814 606 228 555", "433 909 88 920 756 931 294 732 275", "765 881 954 910 201 792 815 789 427", "775 140 253 983 517 923 121 969 41", "166 213 489 340 941 112 361 275 737", "176 68 709 22 809 959 903 77 976", "709 154 79 964 13 682 420 405 545", "779 295 531 161 194 521 703 349 770", "619 166 933 347 146 69 32 888 265", "728 251 882 580 149 147 975 210 781"};
    StockHistory* pObj = new StockHistory();
    clock_t start = clock();
    int result = pObj->maximumEarnings(initialInvestment, monthlyContribution, stockPrices);
    clock_t end = clock();
    delete pObj;
    int expected = 6247983;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int initialInvestment = 6653;
    int monthlyContribution = 890;
    vector<string> stockPrices = {"389 447", "700 92", "154 194", "585 316", "92 802", "745 128", "34 87", "803 466", "730 115", "620 563", "47 599", "120 459", "421 538", "368 771", "565 108", "898 708", "419 801", "295 333", "354 821", "16 82", "623 716", "474 529", "68 276", "365 401", "70 668", "244 843", "752 833", "354 938", "437 123", "707 466", "344 189", "409 922", "544 125", "236 786", "168 858", "468 33", "850 793", "962 899", "442 693", "487 902", "956 830", "291 103", "775 369", "938 618", "103 13", "385 396"};
    StockHistory* pObj = new StockHistory();
    clock_t start = clock();
    int result = pObj->maximumEarnings(initialInvestment, monthlyContribution, stockPrices);
    clock_t end = clock();
    delete pObj;
    int expected = 1349721;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int initialInvestment = 100;
    int monthlyContribution = 20;
    vector<string> stockPrices = {"40 50 60", "37 48 55", "100 48 50", "105 48 47", "110 50 52", "110 50 52", "110 51 54", "109 49 53"};
    StockHistory* pObj = new StockHistory();
    clock_t start = clock();
    int result = pObj->maximumEarnings(initialInvestment, monthlyContribution, stockPrices);
    clock_t end = clock();
    delete pObj;
    int expected = 239;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int initialInvestment = 1000;
    int monthlyContribution = 0;
    vector<string> stockPrices = {"10 20 30", "15 24 32"};
    StockHistory* pObj = new StockHistory();
    clock_t start = clock();
    int result = pObj->maximumEarnings(initialInvestment, monthlyContribution, stockPrices);
    clock_t end = clock();
    delete pObj;
    int expected = 500;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int initialInvestment = 100;
    int monthlyContribution = 111;
    vector<string> stockPrices = {"40 50 60", "37 48 55", "100 48 50", "105 48 47", "110 50 52", "110 50 52", "110 51 54", "109 49 53"};
    StockHistory* pObj = new StockHistory();
    clock_t start = clock();
    int result = pObj->maximumEarnings(initialInvestment, monthlyContribution, stockPrices);
    clock_t end = clock();
    delete pObj;
    int expected = 443;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int initialInvestment = 100;
    int monthlyContribution = 20;
    vector<string> stockPrices = {"40 50 60", "37 48 55", "100 48 50", "105 48 47", "110 50 52", "110 50 52", "110 51 54", "108 49 53"};
    StockHistory* pObj = new StockHistory();
    clock_t start = clock();
    int result = pObj->maximumEarnings(initialInvestment, monthlyContribution, stockPrices);
    clock_t end = clock();
    delete pObj;
    int expected = 236;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int initialInvestment = 1;
    int monthlyContribution = 0;
    vector<string> stockPrices = {"3", "5"};
    StockHistory* pObj = new StockHistory();
    clock_t start = clock();
    int result = pObj->maximumEarnings(initialInvestment, monthlyContribution, stockPrices);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int initialInvestment = 100;
    int monthlyContribution = 20;
    vector<string> stockPrices = {"40 50 60", "40 50 60", "40 50 60", "39 49 59", "41 51 61", "1 1 1", "40 50 60"};
    StockHistory* pObj = new StockHistory();
    clock_t start = clock();
    int result = pObj->maximumEarnings(initialInvestment, monthlyContribution, stockPrices);
    clock_t end = clock();
    delete pObj;
    int expected = 11800;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=11946267&rd=6521&pm=3971
********************************************************************************
#include <vector>
#include <sstream>
#include <iostream>
 
using namespace std;
 
class StockHistory {
public:
  int maximumEarnings(int initialInvestment, int monthlyContribution, vector <string> stockPrices) {
    unsigned int i = stockPrices.size() - 1;
    stringstream s(stockPrices[i]);
    vector<int> endPrices;
    int tmp;
    while (s >> tmp) {
      endPrices.push_back(tmp);
    }
    const unsigned int nP = endPrices.size();
    double win = 0;
    double best = 1.0;
    --i;
    while (i > 0) {
      cerr << "mongth " << i << endl;
      stringstream ss(stockPrices[i]);
      vector<int> p;
      while (ss >> tmp) {
        p.push_back(tmp);
      }
      for (unsigned int j = 0; j < nP; ++j) {
        if ((((double)endPrices[j])/((double)p[j])) > best) {
          best = (((double)endPrices[j]) / ((double)p[j]));
        }
      }
      win += monthlyContribution * (best - 1.0);
      --i;
    }
    stringstream ss(stockPrices[i]);
    vector<int> p;
    while (ss >> tmp) {
      p.push_back(tmp);
    }
    for (unsigned int j = 0; j < nP; ++j) {
      cerr << (((double) endPrices[j])/((double)p[j])) << endl;
      if ((((double) endPrices[j])/((double)p[j])) > best) {
        cerr << "best ist " << j << endl;
        best = (((double) endPrices[j]) / ((double)p[j]));
      }
    }
    win += initialInvestment * (best - 1.0);
    return (int) (win + 0.5);
  }
 
};

********************************************************************************
*******************************************************************************/