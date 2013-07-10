/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=9933
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

class ShipLoading {
public:
    int minimumTime(vector<int> cranes, vector<string> boxes);
};

int ShipLoading::minimumTime(vector<int> cranes, vector<string> boxes) {
    int ret;
    return ret;
}


int test0() {
    vector<int> cranes = {6, 8, 9};
    vector<string> boxes = {"2 5 2 4 7"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> cranes = {19, 20};
    vector<string> boxes = {"14 12 16 19 16 1 5"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> cranes = {23, 32, 25, 28};
    vector<string> boxes = {"5 27 10 16 24 20 2 32 18 7"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> cranes = {11, 17, 5, 2, 20, 7, 5, 5, 20, 7};
    vector<string> boxes = {"18 18 15 15 17"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> cranes = {687, 765, 400, 19, 40, 545, 986, 419, 32, 1};
    vector<string> boxes = {"474 794 982 788 663 608 310 286 316 91 770 902 135", " 237 443 353 490 625 507 8 727 420 668 572 341 362", " 246 622 619 449"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> cranes = {982, 729, 388, 893, 418, 394, 699, 733, 890, 272, 395, 633, 403};
    vector<string> boxes = {"140 543 723 460 223 10 982 580 46 300 196 856 819 ", "652 741 534 646 533 976 600 657 194 191 479 147 25", "7 902 136 285 868 768 763 10 494 715 906 134 146 2", "27 433 557 822 797 645 216 806 773 202 638 679 819", " 333 421 641 148 149 3 59 509 911 718 759 536 40 4", "58 449 661 256 793 693 303 33 177 949 91 225 72 92", "6 374 212 429 135 93 608 843 199 351 759 197 668 8", "89 807 234 714 784 93 33 527 774 878"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> cranes = {359, 530, 550, 873, 339, 374, 882, 935, 578, 533, 996, 856, 879, 571};
    vector<string> boxes = {"676 534 834 605 268 481 411 512 454 196 605 604 93", "6 955 103 791 319 146 449 646 418 383 447 203 594 ", "589 769 327 83 70 315 445 381 53 10 86 670 117 637", " 786 426 196 824 931 86 825 849 277 858 630 600 39", "1 150 383 93 548 995 667 835 473 56 322 208 683 60", "7 524 502 909 77 823 844 648 430 845 246 141 947 4", "62 846 488 990 683 981 69 579 633 204 225 173 272"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> cranes = {161, 5, 52, 832, 49, 81, 967, 802, 158, 805, 43, 187, 37, 657, 187, 196};
    vector<string> boxes = {"268 157 905 883 412 912 487 204 545 337 585 548 58", "7 241 399 421 662 112 681 614 675 593 158 235 208 ", "631 636 805 713 648 826 492 203 211 283 950 744 47", "7 264 345 849 881 400 347 815 339 869 371 869 99"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> cranes = {998, 62, 879, 535, 174, 56, 510, 54, 181, 526, 900, 30};
    vector<string> boxes = {"106 82 298 837 159 742 626 747 534 877 774 488 349", " 528 153 611 607 308 939 985 201 260 407 765 355 1", "38 699 961 824 689 784 934 425 412 279 795 434 875", " 274 902 291 92 928 631 294 225 410 93 460 376 300", " 431 702 160 820 900 963 357 937 675 479 903 87 73", "9 137 610 969 357 75 170"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> cranes = {651, 995, 314, 671, 675, 316, 911, 627, 797};
    vector<string> boxes = {"687 913 406 89 584 858 968 708 557 232 703 436 254", " 946 842 121 29 505 811 879 787 625 743 96 770 571", " 575 836 869 132 900 167 794 752 321 645 173 256 4", "00 359 534 946 458 895 115 54 963 614 646 300"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
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
    vector<int> cranes = {56, 114, 979, 120, 120, 87, 480};
    vector<string> boxes = {"221 882 504 358 642 674 212 679 203 279 632 799 79", "6 502 275 823 372 594 482 343"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> cranes = {23, 28, 6, 460, 39, 933, 14, 57, 12, 15, 39, 250, 8, 35, 40, 28, 8, 247, 31, 245, 6, 41, 37, 15, 34, 464, 45, 29, 43, 60, 34, 21, 678, 22, 34};
    vector<string> boxes = {"559 847 924 823 543 103 719 447 284 453 592 185 58", "4 720 873 585 519 905 174 179 502 395 608 604 161 ", "315 373 780 743 885 740 905 653 916 589 126 709 89", "6 854 135 177 675 78 826 735 363 439 527 694 410 8", "50 718 766 72 288 97 323 424 261 933 376 251 130 7", "87 195 171 666 102 928 841 385 304 334 751 271 341", " 542 823 224 842 580 551 624 354 220 141 618 121 5", "79 707 597 834 600 529 266 479 581 153 739 579 792", " 797 151 231 868 99 673 97 264 927 185 588 136 889", " 513 96 760 188 429 849 191 371 882 873 693 821 68", "3 777 172 476 504 899 417 340 504 149 76 910 507 7", "88 853 684 196 398 331 621 719 656 351 338 380 537", " 767 133 174 164 864 262 559 643 474 546 848 902 8", "33 353 199 547 210 930 186 177 71 173 544 691 388 ", "348 771 325 518 206 877 637 137 712 194 548 92 415", " 686 867 69 730 223 699 492 578 68 419 595 573 697", " 165 641 111 385 297 177 676 782 850 770 109 572 1", "43 166 383 410 283 451 92 412 330 573 291 599 103 ", "423 922 312 812 822 797 920 196 795 861 130 672 70", "5 349 732 732 681 838 447 694 297 877 313 590 585 ", "304 153 509 933 653 121 572 481 561 282 522 588 45", "9 328 235 819 321 871 655 290 806 550 88 775 653 5", "33 624 514 484 448 263 194 888 233 441 900 849 353", " 466 517 444 405 598 218 897 926 330 275 807 908 4", "48 355 662 779 439 318 452 877 507 592 830 371 694", " 557 226 548 514 93 626 604 652 797 657 608 115 65", "8 582 299 360 130 654 94 726 842 108 681 455 911 3", "36 919 315 533 508 440 764 430 82 889 815 256 543 ", "607 127 281 299 769 427 327 62 78 668 312 743 366 ", "928 759 354 241 375 136 96 64 609 599 584 228 437 ", "904 275 672 194 837 899 293 491 749 915 644 94 402", " 211 205 180 228 267 135 533 426 126 356 359 105 5", "44 770 177 544 68 608 162 755 250 99 278 394 569 3", "17 245 466 408 695 651 350 886 489 268 641 497 581", " 648 236 799 598 658 669 621 742 605 291 406 163 5", "96 694 617 881 284 777 641 610 562 718 284 420 126", " 750 224 664 518 105 341 104 321 855 172 61 582 55", "1 525 456 621 83 534 425 867 326 759 685 608"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 132;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> cranes = {251, 515, 4, 5, 2, 4, 2, 5, 2, 229, 250, 1, 1, 416, 5};
    vector<string> boxes = {"177 165 187 398 201 143 57 176 155 149 390 262 321", " 397 253 45 362 227 219 489 51 278 104 184 98 15 4", "02 80 28 14 110 188 140 8 245 124 132 300 328 73 2", "7 419 396 421 476 465 488 459 503 256 43 27 376 18", "3 256 263 359 160 390 351 510 350 106 249 304 410 ", "495 512 215 252 121 382 61 58 326 49 151 160 418 4", "02 457 174 501 237 45 195 479 419 220 296 26 100 2", "00 451 242 512 236 477 126 368 196 507 178 77 194 ", "304 502 272 73 199 300 505 245 97 465 128 186 87 2", "96 19 440 341 473 160 426 69 334 354 292 334 258 2", "75 104 27 343 306 287 383 141 212 72 6 180 163 198", " 28 444 59 207 310 75 228 446 385 187 381 174 200 ", "345 184 266 21 397 23 144 162 301 182 367 130 188 ", "307 308 268 95 300 405 382 192 508 377 413 210 99 ", "165 172 481 166 478 501 211 235 136 270 276 282 64", " 207 67 84 142 258 175 317 244 77 310 471 298 456 ", "488 486 368 514 291 510 478 57 426 22 480 212 34 2", "68 151 250 128 457 114 254 118 94 34 216 467 506 1", "51 349 10 323 373 73 43 27 457 57 322 201 226 258 ", "83 147 72 24 214 8 198 63 372 511 257 43 36 287 12", "5 11 81 111 19 236 39 95 449 167 388 350 250 371 4", "5 275 67 514 489 329 129 369 194 122 284 239 513 1", "77 65 267 76 282 432 145 388 62 455 381 174 202 35", "1 17 115 24 327 398 472 6 25 286 313 52 302 464 46", " 417 374 367 238 140 75 184 412 463 284 149 59 347", " 241 489 391 337 110 95 444 67 204 463 65 208 445 ", "332 303 313 45 455 168 456 244 357 158 333 488 90 ", "70 510 143 240 441 308 455 309 464 483 13 444 148 ", "414 474 98 289 510 194 74 444 397 507 344 361 230 ", "453 44 191 10 445 13 435 130 392 38 143 64 219 192", " 439 257 132 250 51 427 8 354 201 243 393 66 180 2", "28 106 16 298 290 402 25 59 410 165 129 167 422 19", "5 512 179 462 229 292 362 308 128 359 226 445 402 ", "276 425 253 151 170"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 106;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> cranes = {164, 135, 56, 61, 135, 32, 138, 53, 144, 128, 171, 80, 134, 56, 57, 128, 126, 159, 157, 32, 169, 145, 62, 87, 146, 127};
    vector<string> boxes = {"123 43 89 98 20 128 35 103 137 12 78 24 108 31 71 ", "51 163 151 141 29 47 130 161 39 80 76 153 138 63 6", "6 71 117 44 162 30 149 87 124 124 16 166 106 121 1", "5 71 19 153 150 38 141 23 67 134 10 133 14 155 65 ", "6 149 80 156 41 109 133 149 82 8 78 2 70 171 157 2", "7 11 152 78 108 138 18 28 89 71 31 6 5 116 151 44 ", "113 133 48 111 91 88 91 163 137 63 101 119 72 51 1", "05 8 66 143 18 79 15 34 8 140 44 137 64 18 106 159", " 102 8 164 119 160 36 131 107 163 72 73 33 170 163", " 121 53 22 111 39 162 2 70 20 137 12 88 99 115 124", " 153 166 162 116 115 21 126 109 40 51 149 132 50 1", "52 129 33 50 31 71 126 40 22 94 26 75 64 49 4 90 1", "02 70 142 128 13 40 143 112 91 19 102 151"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> cranes = {322, 359, 1, 17, 830, 692, 9, 22, 64, 357, 850, 687, 14, 323, 691, 253, 24, 65, 10, 682, 317, 841, 12, 684, 8, 6, 62, 63, 14, 5, 683, 322};
    vector<string> boxes = {"675 440 172 549 775 512 656 256 254 311 454 577 54", " 429 723 417 380 513 469 401 49 102 212 570 326 73", " 649 458 389 70 100 347 420 526 345 549 640 273 69", "8 218 307 588 735 446 713 808 193 446 294 433 547 ", "225 347 41 409 766 320 326 642 159 832 549 454 631", " 392 641 329 596 68 371 622 59 694 849 456 27 209 ", "191 157 165 217 467 768 255 375 621 574 238 323 23", "4 258 116 135 291 844 519 194 336 78 569 618 50 40", "7 556 287 480 805 334 499 202 151 766 163 694 570 ", "536 543 842 777 496 356 564 41 524 126 136 128 313", " 798 753 422 77 716 232 199 515 24 96 370 792 670 ", "585 246 245 52 343 353 563 141 632 407 611 444 274", " 652 486 649 460 501 189 38 549 262 373 412 505 67", "5 385 568 322 453 847 115 815 535 71 287 665 37 41", "1 156 162 672 29 409 332 363 365 116 730 182 353 3", "19 693 582 246 243 412 671 265 477 606 537 250 609", " 705 779 274 102 397 558 752 824 236 279 244 235 2", "90 61 746 501 699 640 51 29 781 773 306 540 389 82", "2 491 458 697 734 849 795 144 473 478 652 447 816 ", "571 486 719 813 501 156 87 86 171 779 557 586 39 3", "8 122 559 78 171 677 792 433 657 236 478 442 538 7", "29 571 71 838 195 550 119 559 116 768 536 649 510 ", "666 806 578 710 183 447 444 304 68 126 407 570 615", " 465 311 392 420 786 180 376 359 356 317 739 835 3", "98 714 621 592 712 336 117 154 770 570 496 333 262", " 455 801 639 648 738 128 155 257 617 789 694 114 3", "44 831 206 174 367 86 412 194 206 452 158 200 243 ", "374 734 411 280 143 85 708 503 755 627 496 660 350", " 590 142 483 449 746 57 509 732 723 229 287 555 57", "6 277 171 839 663 312 440 789 580 746 836 233 316 ", "38 399 316 527 284 123 110 289 843 117 243 395 378", " 455 499 556 506 373 379 708 713 639 340 755 353 2", "20 118 346 560 162 540 28 299 606 632 626 353 433 ", "37 495 96 139 611 237 459 226 440 127 369 205 165 ", "608 542 191 515 574 87 479 845 212 118 250 206 546", " 803 324 235 288 776 757 422 537 549 401 385 556 2", "50 173 349 238 768 831 451 724 267 706 365 382 743", " 183 272 122 787 636 135 219 703 776 453"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> cranes = {10, 8, 6, 4, 15, 13, 53, 15, 289, 8, 55, 14, 6, 1, 6, 8, 4, 11, 305, 288, 287, 7, 360, 16, 52, 4, 9};
    vector<string> boxes = {"176 348 356 117 215 112 232 40 215 140 22 94 88 12", "4 244 179 208 180 304 236 36 88 120 87 66 62 291 2", "32 350 296 198 133 152 144 313 143 114 311 330 272", " 124 121 254 204 154 44 211 62 332 343 346 37 99 1", "13 312 180 167 200 230 338 138 77 164 46 189 274 3", "16 321 30 237 89 23 104 16 267 325 293 296 248 191", " 62 335 275 60 93 225 304 320 43 181 215 122 176 7", "8 358 225 174 303 224 96 210 137 212 117 197 141 1", "49 238 155 161 82 94 314 131 345 60 358 74 149 212", " 278 323 94 190 99 33 80 181 343 23 132 196 299 30", "4 239 61 315 195 140 154 311 340 129 29 167 283 27", "5 219 135 256 152 161 109 104 103 120 62 347 261 1", "20 100 98 293 279 156 231 37 255 239 107 261 352 3", "6 167 88 112 89 130 60 271 166 34 74 123 292 149 3", "6 203 139 167 204 172 45 312 118 220 130 218 132 4", "5 79 251 272 87 97 58 322 250 308 113 147 17 343 3", "56 236 106 257 332 134 19 351 219 226 344 285 127 ", "268 286 26 325 196 341 196 127 312 59 146 197 200 ", "315 268 113 207 101 265 75 280 301 79 19 315 120 1", "75 68 190 255 164 186 50 283 135 87 324 106 112 19", "0 275 318 229 131 147 149 182 166 278 199 133 37 2", "02 322 154 253 121 349 46 157 253 255 210 310"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 53;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> cranes = {81, 34, 51, 80, 69, 38, 4, 24, 52, 9, 877, 72, 126, 48, 750, 69, 50, 6, 59, 63, 630, 17, 33, 31, 68, 5, 44, 2, 131, 26, 49, 64, 1, 62, 47, 128, 38, 76};
    vector<string> boxes = {"594 402 165 653 547 383 149 191 845 346 650 743 75", "6 401 504 522 166 667 340 430 428 539 125 578 798 ", "577 189 821 414 276 328 452 180 372 679 184 687 56", "8 520 683 530 144 642 417 280 311 331 515 809 475 ", "842 243 769 804 797 567 513 291 136 689 721 315 27", "7 239 165 553 277 218 89 90 159 281 279 805 826 72", "9 736 818 746 666 282 806 206 714 414 809 475 107 ", "263 833 456 555 499 230 258 579 681 638 87 234 387", " 588 216 341 329 329 651 163 261 299 402 580 341 2", "64 192 328 706 221 173 375 308 598 304 196 197 443", " 646 822 508 571 805 132 277 857 860 721 470 299 6", "75 651 619 793 583 586 456 455 385 404 323 701 89 ", "227 541 231 689 94 341 323 378 714 669 584 574 358", " 590 463 434 588 744 697 499 122 538 170 659 618 4", "70 411 189 854 676 591 393 355 509 826 465 487 121", " 270 620 458 163 616 171 252 736 753 343 692 605 6", "26 592 117 155 125 839 693 178 267 429 690 189 544", " 433 261 104 143 312 221 273 635 447 401 424 388 2", "91 379 123 688 133 656 348 760 604 180 389 150 190", " 318 689 698 519 482 645 376 585 812 756 621 694 6", "23 500 820 450 689 662 244 86 758 867 557 556 612 ", "179 807 143 364 416 875 711 788 396 871 288 561 65", "7 152 842 833 356 557 610 835 761 201 648 409 537 ", "283 751 223 395 536 491 568 112 867 738 138 551 48", "7 579 270 203 693 236 419 473 463 399 224 366 833 ", "156 294 497 679 562 316 102 440 498 449 593 475 53", "6 440 558 645 290 510 122 391 754 391 611 569 319 ", "204 549 217 585 267 756 849 867 369 344 465 499 67", "5 246 787 612 796 675 524 357 408 167 473 337 269"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 116;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> cranes = {741, 502, 70, 39, 96, 102, 12, 93, 469, 92, 1, 133, 75, 21, 23, 795, 50, 80, 129, 16, 33, 118, 84, 131, 320, 56, 124, 73, 77, 48, 45, 69, 101, 79, 10, 72, 78, 59};
    vector<string> boxes = {"786 665 175 656 769 373 742 552 480 423 493 408 69", "4 163 620 176 667 332 627 147 726 438 685 507 138 ", "763 671 364 455 507 343 391 422 688 585 288 676 73", "9 570 268 329 721 649 554 232 591 464 138 741 358 ", "743 665 248 284 295 545 784 754 330 710 180 324 62", "4 363 445 756 614 484 631 371 607 494 670 535 451 ", "753 539 561 742 415 387 791 786 367 490 227 464 44", "5 614 239 586 309 379 258 786 469 774 183 148 601 ", "366 139 648 526 197 409 524 226 441 172 736 303 13", "4 588 511 282 188 740 664 302 520 680 661 140 420 ", "140 787 526 190 571 482 153 524 134 498 521 473 52", "4 235 227 513 374 444 166 272 396 519 161 721 561 ", "479 207 142 519 638 218 733 617 707 724 662 138 14", "7 682 619 166 768 795 792 383 444 325 136 451 627 ", "455 211 186 220 223 778 587 730 693 727 259 554 42", "1 688"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> cranes = {23, 4, 13, 21, 37, 34, 14, 5, 18, 83, 20, 32, 11, 13, 269, 404, 472, 638, 498, 24, 83, 40, 6, 403, 573, 36};
    vector<string> boxes = {"395 463 131 270 396 132 238 414 388 172 310 288 33", "1 482 174 312 491 64 92 98 552 412 511 136 65 198 ", "511 250 359 524 284 301 604 128 447 337 324 267 43", "3 622 594 507 540 482 383 381 184 627 251 187 623 ", "211 96 66 536 560 502 566 151 268 563 131 445 573 ", "318 340 144 330 148 298 589 318 561 446 225 391 35", "1 291 302 400 180 383 134 485 260 328 383 456 362 ", "111 143 326 141 245 454 420 393 392 420 198 493 58", "6 339 634 466 540 271 512 238 170 466 255 235 499 ", "551 302 479 520 459 58 110 191 244 69 188 233 391 ", "421 409 139 327 606 510 419 221 179 356 155 475 16", "1 487 316 501 102 452 144 362 593 215 180 95 123 5", "96 94 263 580 597 177 120 262 388 373 361 447 330 ", "487 90 304 551 121 530 132 232 86 456 185 355 212 ", "190 136 334 178 224 621 356 605 475 596 208 278 11", "4 619 531 439 296 359 173 455 591"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> cranes = {8, 5, 2, 3, 6, 3, 1, 7, 9, 3, 4, 1, 4, 4, 8, 6, 9, 9, 3, 5, 39, 2, 7, 2, 6, 4, 9, 7, 3, 4, 4, 4, 8, 76, 5};
    vector<string> boxes = {"60 25 24 66 56 32 35 19 43 16 10 21 56 48 49 19 55", " 68 55 56 60 13 39 69 33 68 43 73 76 51 38 76 55 2", "2 58 67 35 41 24 16 58 31 63 44 20 18 56 72 58 70 ", "9 74 34 46 32 45 41 33 25 67 38 49 47 45 64 43 33 ", "61 34 71 61 44 53 54 33 12 74 57 66 14 48 42 48 35", " 61 19 49 59 54 44 33 61 59 17 57 74 28 12 65 22 6", "9 25 65 69 74 20 67 17 31 36 53 55 11 20 59 68 37 ", "48 65 54 41 68 74 32 56 37 59 35 51 37 19 51 49 74", " 27 38 39 61 23 19 62 51 71 27 17 11 64 26 66 70 3", "2 32 33 9 12 34 14 37 76 73 68 59 70 64 62 27 59 2", "9 23 24 14 18 57 41 30 37 17 36 23 47 66 59 63 70 ", "59 58 41 32 13 59 31 26 65 16 17 64 27 35 63 33 41", " 27 63 76 75 47 10 24 39 13 72 20 76 33 48 25 61 1", "0 64 16 29 30 31 35 23 73 73 43 23 37 46 38 60 18 ", "71 76 32 64 58 12 72 33 41 67 70 54 59 17 70 24 65", " 61 20 56 13 11 53 51 49"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 144;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> cranes = {256, 259, 498, 412, 576, 413, 259, 603, 259, 609, 414, 510, 258, 414};
    vector<string> boxes = {"503 218 282 377 124 75 432 347 547 23 528 231 454 ", "68 208 132 128 374 171 395 404 234 75 8 58 290 488", " 219 119 533 63 158 63 220 348 473 492 219 578 579", " 360 563 10 436 431 358 380 144 222 186 184 340 13", "3 372 562 504 216 587 552 583 553 380 99 340 293 1", "56 354 575 451 58 415 294 55 571 466 81 440 422 41", " 586 58 356 564 369 190 388 267 510 194 119 181 17", "0 135 126 290 335 580 599 494 135 377 566 564 151 ", "552 531 288 27 579 214 270 527 139 120 121 437 151", " 584 176 365 328 343 539 351 57 606 73 477 300 506", " 430 295 603 168 46 525 565 284 526 121 553 386 35", "2 414 80 389 124 154 245 359 166 577 384 217 311 3", "46 96 442 359 183 190 266 247 451 264 361 220 582 ", "272 354 518 84 353 292 554 307 246 540 241 92 113 ", "97 265 487 197 269 443 99 354 396 601 70 122 442 1", "28 49 410 86 45 453 316 401 31 599 243 213 437 603", " 74 608 454 572 441 534 123 388 458 240 265 606 29", "5 295 31 417 95 306 292 332 521 329 196 108 152 35", " 282 359 505 546 597 344 202 204 48 557 107 316 49", "3 113 307 496 291 170 526 217 479 42 406 148 89 52", "7 367 223 421 108 459 470 381 565 16 213 308 559 4", "46 524 87 595 575 358 508 158 515 468 56 555 524 4", "77 9 370 348 250 587 302 447 433 85 560 299 505 47", "6 302 190 374 561 197 227 571 338 463 39 307 206 1", "84 253 545 434 19 34 339 353 205 282 245 517 165 3", "16 391 358 165 587 36 555 526 416 604 519 168 5 46", "1 246 230 527 441 131 70 279 585 493 29 311 251 37", "9 150 498 181 60 466 270 536 88 406 427 381 293 37", "1 254 401 207 77 344 563 570 429 281 21 8 132 590 ", "97 105 281 576 379 76 543 25 93 570 96 566 65 142 ", "182 322 484 587 182 448 6 270 279 210 387 402 16 5", "38 274 52 443 324 25 577 423 148 32 392 215 315 11", "9 265"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> cranes = {937, 15, 129, 128, 143, 3, 22, 23, 104, 90, 112, 31, 53, 130, 95, 20, 69, 147, 776, 97, 128, 124, 195, 276, 143};
    vector<string> boxes = {"867 376 864 225 352 612 526 460 797 354 286 466 81", "6 726 826 336 897 925 738 891 605 556 446 609 492 ", "245 483 727 519 336 250 725 463 553 637 766 630 53", "6 335 492 849 512 712 749 484 784 625 934 510 242 ", "367 813 879 877 312 346 778 693 426 819 595 474 84", "1 226 898 801 377 509 540 655 462 817 413 801 781 ", "488 844 650 245 468 832 428 232 682 272 826 298 41", "9 292 665 796 506 429 422 663 608 907 603 215 479 ", "616 367 332 795 592 797 326 738 228 799 744 609 22", "1 339 632 544 415 830 710 852 611 734 466"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 56;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> cranes = {12, 6, 14, 4, 12, 12, 102, 314, 172, 7, 15, 1, 24, 21, 14, 6, 4, 21, 8, 12, 3, 5, 19, 15, 3, 1, 102, 19, 23};
    vector<string> boxes = {"65 309 93 86 132 124 56 194 278 41 168 239 219 195", " 61 303 285 161 303 65 125 277 292 136 24 75 170 1", "91 124 200 131 233 314 128 44 142 280 60 248 268 1", "10 206 197 33 55 280 70 307 241 39 52 64 97 42 126", " 152 184 237 156 276 181 138 217 262 230 181 124 2", "53 155 54 189 90 166 295 218 161 83 120 221 128 11", "4 262 158 236 190 34 157 59 183 102 260 212 275 13", "9 96 167 162 59 75 53 106 208 202 237 317 135 293 ", "34 173 69 212 57 158 147 152 200 277 276 82 167 26", "5 38 207 181 79 272 311 168 251 155 31 93 233 134 ", "166 73 146 99 277 84 161 239 175 257 317 309 91 23", "2 208 241 134 68 168 235 248 195 211 41 256 180 23", "2 169 289 130 226 284 223 185 139 260 175 291 51 3", "05 152 190 179 284 26 26 287 257 55 53 302 175 284", " 126 223 66 228 309 182 288 86 239 283 191 278 224", " 228 58 286 136 275 101 279 225 51 58 159 169 214 ", "79 111 157 45 240 97 166 90 45 38 311 276 197 222 ", "166 295 153 108 299 83 266 54 120 54 216 76 196 38", " 284 286 299 117 208 108 222"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> cranes = {1, 13, 9, 18, 14, 308, 1, 14, 10, 12, 2};
    vector<string> boxes = {"113 65 166 250 171 26 147 210 76 104 159 114 177 1", "7 206 51 136 293 229 237 140 259 292 35 42 181 41 ", "34 123 307 239 95 145 220 47 95 190 134 153 259 16", "7 265 109 155 27 227 296 30 307 288 80 82 229 216 ", "186 164 203 42 109 93 134 289 59 183 92 243 115 27", "5 257 165 93 202 279 120 262 201 126 224 245 111 2", "47 59 264 241 155 278 131 14 187 287 182 104 235 2", "05 44 235 124 45 284 86 131 275 229 256 274 196 24", "8 273 26 132 290 57 64 245 261 154 35 123 150 183 ", "140 55 277 99 292 303 174 254 193 211 48 131 25 26"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 132;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> cranes = {86, 163, 1, 131, 117, 48, 1, 138, 24, 46, 120, 117, 14, 142, 58, 112, 151, 47, 81, 82, 85, 164, 33, 748, 149, 2, 37, 143, 149, 643, 154, 49, 15, 152, 73, 70, 22, 52};
    vector<string> boxes = {"560 552 583 384 654 467 291 277 178 481 372 368 52", "2 717 672 294 671 289 739 732 656 439 185 472 336 ", "565 290 617 448 550 563 649 542 737 559 688 314 47", "2 521 451 185 693 224 471 213 602 237 662 549 394 ", "322 724 482 628 443 486 384 343 459 470 397 538 51", "2 593 245 538 271 443 410 344 423 594 639 360 432 ", "197 587 446 732 589 381 595 230 208 480 640 165 30", "1 345 723 259 358 359 476 651 172 729 615 444 582 ", "219 571 339 313 582 332 244 296 691 722 496 432 33", "8 670 540 703 451 708 218 660 386"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 61;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> cranes = {13, 476, 6, 8, 442, 14, 746, 5, 7, 32, 8, 10, 8, 16, 2, 3, 12, 15, 11, 13, 6, 16};
    vector<string> boxes = {"28 556 378 440 37 244 428 85 483 70 18 516 462 647", " 537 621 108 153 561 40 376 603 643 644 265 124 29", "5 397 384 365 442 617 325 130 572 156 560 298 701 ", "161 212 163 612 688 665 308 277 549 84 220 279 602", " 216 96 45 547 603 626 256 738 98 507 170 436 66 5", "83 617 549 656 398 630 444 469 677 490 51 729 300 ", "239 339 198 729 427 136 647 727 327 254 327 114 45", "4 433 471 457 106 487 723 608 66 69 608 46 414 376", " 264 94 37 408 22 401 273 397 493 387 247 410 537 ", "321 372 129 540 418 57 79 629 520 401 182 591 748 ", "656 235 696 292 365 77 717 103 145 265 617 407 185", " 737 308 51 66 25 150 644 257 355 120 497 174 68 9", "6 447 289 631 682 151 106 73 27 305 320 719 215 61", "9 66 489 51 340 634 180 154 100 307 342 324 320 65", " 32 106 445 260 485 613 205 690 245 61 75 367 704 ", "173 449 353 126 526 574 74 436 402 603 616 228 586", " 409 242 656 64 392 616 426 742 149 173 642 577 57", "4 514 593 53 209 305 358 156 364 373 47 366 539 61", "5 33 477 525 260 723 497 429 414 545 108 467 674 4", "37 601 316 164 109 630 429 535 481 50 38 551 385 4", "04 65 416 265 621 650 58 657 647 181 150 634 179 6", "35 674 195 265 414 364 255 77 568 608 122 250 388 ", "67 535 704 150 597 441 617 286 748 331 44 196 343 ", "128 46 133 130 742 25 146 283 606 61 76 79 396 716", " 461 224 273 329 432 319 87 49 54 445 527 427 489 ", "701 339 80 434 132 456 736 636 317 456 558 699 212", " 606 680 649 321 581 67 643 722 429 539 96 581 644", " 56 311 683 216 88 119 79 669 727 402 106 738 265 ", "325 37 124 412 140 488 450 496 369 529 286 112 175", " 390 325 324 108 155 361 230 582 557 50 111 642 72", "7 152 64 392 544 407 27 692 742 523 476 340 633 22", "2 166 637 136 693 399 637 120 74 606 53 516 258 15", "4 58 19 208 684 564 471 583 264 536 332 344 31 124", " 443 38 127 478 546 475 587 181 451 606 17 230 217", " 591 626 292 739 650 496 122 705 339 76 690 37 542", " 316 177 406 176 445 628 249 452 242 382 712 56"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> cranes = {440, 498, 416, 628, 416, 116, 71, 257, 435, 644, 9, 420, 441, 114, 6, 214, 501, 335, 414, 633, 615, 415, 70, 334, 254, 629, 8, 335, 334, 10, 611, 254, 7};
    vector<string> boxes = {"456 511 549 564 262 563 113 541 541 119 157 245 62", "8 173 124 479 484 409 375 157 364 594 380 532 360 ", "211 436 31 148 170 636 625 129 349 231 616 150 360", " 259 393 550 298 19 269 162 502 269 20 112 474 173", " 183 184 185 155 258 593 220 47 434 143 81 212 551", " 428 194 106 10 434 494 108 475 94 559 90 497 72 3", "75 340 209 212 99 184 623 459 23 288 356 106 623 2", "79 527 62 183 512 278 209 610 635 218 227 47 83 25", "0 388 349 220 88 380 254 94 94 332 457 598 242 145", " 48 17 476 199 243 84 472 613 314 608 45 20 214 36", "7 322 61 382 370 320 623 310 508 283 296 138 162 1", "17 439 170 643 329 50 638 357 477 344 5 426 149 43", "9 516 249 94 97 404 237 310 2 174 296 627 454 123 ", "537 232 425 570 454 13 232 369 468 397 133 394 17 ", "128 235 536 283 498 555 538 199 277 46 295 349 312", " 407 622 182 239 598 280 351 414 599 586 187 177 7", "4 559 479 516 291 408 244 31 341 564 99 352 337 17", "9 644 124 147 250 184 18 127 159 431 122 549 391 2", "83 181 207 213 206 266 304 313 343 175 99 581 21 5", "77 430 450 230 197 261 386 460 410 212 216 447 210", " 398 520 125 132 570 515 286 473 543 533 636 577 3", "15 496 507 403 527 494 226 49 81 640 203 517 580 5", "8 5 145 3 360 39 54 294 281 64 483 157 386 579 426", " 396 434 292 367 482 643 488 587 497 420 372 278 7", "7 537 50 264 108 455 174 169 464 162 459 108 204 1", "27 78 536 636 427 479 3 359 636 83 26 455 377 167 ", "96 373 579 241 264 299 477 72 476 252 98 498 179 3", "59 534 590 384 210 232 408 144 420 91 52 203 583 2", "51 507 11 44 458 360 551 231 241 229 386 551 338 1", "2 241 374 275 209 564 177 25 96 574 177 490 490 29", "0 208 142 637 512 267 450 389 54 177 223 363 539 1", "75 122 627 398 480 224 593 139 505 553 349 424 594", " 465 194 97 527 477 519 212 32 149 107 432 218 535", " 143 447 125 559 447 383 165 139 191 208 335 399 9", "9 252 503 120 470 108 196 343 273 328 72 11 105 35", "3 58 144 337 284 225 450 394 504 440 97 352 323 23", "0 326 447 55 18 264 486 413 370 497 424 532 62 106", " 214 435 368 506 368"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> cranes = {45, 12, 35, 42, 37, 2, 22, 12, 41, 27, 37, 11, 224, 34, 21, 27, 24, 16, 222, 49, 27, 20, 28, 19, 12, 1, 27, 3, 34, 408, 24, 5};
    vector<string> boxes = {"125 140 318 328 319 236 266 381 191 323 365 251 28", "2 87 146 268 392 86 126 237 263 342 169 388 397 28", "1 61 164 147 107 59 335 388 86 340 373 161 338 202", " 219 136 205 234 268 78 176 338 297 53 200 369 109", " 136 383 367 76 237 278 176 240 76 337 340 260 395", " 277 139 330 316 273 193 249 139 239 197 326 340 1", "40 149 272 249 130 261 303 388 398 135 298 129 388", " 245 51 77 400 365 331 175 383 220 99 319 194 155 ", "243 68 317 167 272 306 143 133 125 117 114 62 142 ", "391 103 172 199 178 388 225 403 266 109 302 73 285", " 387 105 238 363 119 221 247 348 341 292 208 254 2", "13 233 357 110 135 93 248 361 139 270 220 135 327 ", "50 404 259 392 124 77 373 345 333 195 142 88 372 2", "06 230 229 246 64 89 166 82 51 174 83 396 305 64 3", "12 52 199 128 401 297 280 267 133 90 167 169 168 1", "87 256 177 328 389 382 179 364 258 168 307 294 91 ", "268 371 150 287 232 274 116 273 98 216 174 178 213", " 55 319 66 72 122 354 345 62 267 139 146 154 346 1", "68 161 164 338 349 381 394 96 60 53 355 116 122 66", " 404 61 77 231 377 356 315 59 163 138 342 145 303 ", "236 390 81 325 401 52 224"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 136;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> cranes = {139, 28, 25, 310, 38, 37, 117, 24, 37, 151, 6, 57, 10, 34, 1, 88, 53, 88, 127, 139, 117, 64, 33, 61, 71, 72, 62, 993, 129, 95, 569, 150, 42, 141, 36, 135, 68, 114, 9};
    vector<string> boxes = {"815 225 646 754 296 741 904 749 447 615 550 749 46", "4 520 544 701 523 567 688 980 798 844 506 651 240 ", "462 393 435 951 605 777 319 751 196 291 328 245 82", "1 671 726 569 321 174 227 651 910 765 455 310 385 ", "861 902 227 732 440 300 440 828 439 323 828 709 91", "9 431 654 967 283 790 786 257 555 152 610 240 359 ", "988 484 900 631 516 813 804 931 298 612 413 603 30", "4 796 339 294 960 170 549 224 452 682 394 377 725 ", "335 554 668 913 285 233 866 258 556 389 756 717 24", "5 389 285 968 479 198 926 806 285 689 330 171 770 ", "586 657 734 464 690 455 308 217 793 720 366 687 35", "5 218 707 179 362 539 218 864 450 264 728 414 662 ", "950 194 376 577 836 502 747 332 511 571 496 349 97", "3 162 855 613 653 240 762 990 986 689 705 374 492 ", "642 312 551 173 379 176 708 696"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 86;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> cranes = {6, 314, 1, 1, 1, 415, 213, 313, 211, 1, 213, 92};
    vector<string> boxes = {"234 158 89 125 322 414 113 324 19 127 37 47 9 57 2", "06 123 12 313 175 183 404 203 297 409 221 81 53 82", " 51 18 81 131 57 230 172 192 236 36 170 15 248 222", " 96 35 12 8 288 185 391 13 357 133 199 403 365 262", " 312 170 298 178 70 17 25 19 298 18 244 220 356 15", " 345 57 382 306 18 237 368 149 223 138 387 197 202", " 128 74 55 161 238 146 87 129 150 260 396 111 337 ", "264 259 383 141 52 11 71 194 339 50 330 375 286 32", "2 299 76 414 375 160 164 374 410 190 252 233 116 4", "05 248 164 377 98 85 35 291 139 244 315 137 101 36", " 110 18 74 136 147 309 128 149 173 184 154 52 102 ", "115 78 47 312 67 204 87 288 77 113 378 151 235 86 ", "401 221 303 374 301 354 250 249 411 109 388 132 17", "8 363 24 408 122 245 250 309 10 180 395 410 297 25", "5 163 176 228 83 280 240 40 44 72 355 222 329 293 ", "318 348 282 94 132 42 285 222 282 383 165 224 36 1", "88 235 189 195 98 34 113 365 71 194 21 332 16 32 1", "79 185 230 84 338 219 311 253 191 109 251 345 311 ", "238 36 347 364 242 157 207 393 187 36 246 87 20 39", "8 403 158 74 68 301 243 175 246 52 14 163"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 52;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> cranes = {14, 52, 51, 7, 311, 14, 30, 4, 43, 13, 10, 378, 22, 796, 14, 16, 25, 306, 29, 28, 7, 45};
    vector<string> boxes = {"209 538 208 202 70 155 707 569 528 349 278 673 233", " 608 442 427 369 560 74 724 731 169 538 181 389 68", "9 91 222 373 133 340 774 783 387 641 177 790 493 6", "1 566 190 640 505 510 666 398 208 555 116 472 313 ", "327 348 610 539 366 772 183 627 269 377 763 189 25", "5 627 75 186 571 763 238 195 760 345 581 312 550 2", "66 312 70 558 428 660 251 484 184 424 458 139 71 6", "22 395 260 187 731 348 789 275 590 611 531 698 464", " 764 685 614 504 532 636 554 94 189 323 540 795 42", "1 248 114 354 626 344 785 435 766 751 616 766 620 ", "542 234 173 767 207 560 558 523 566 387 68 363 458", " 367 166 188 202 288 527 472 176 372 78 663 564 10", "7 606 127 763 360 249 437 245 267 671 429 54 218 6", "91 689 745 395 290 90 568 68 262 148 706 216 262 4", "75 782 303 254 332 142 746 180 262 133 273 210 324", " 478 792 609 752 509 203 776 735 698 349 220 100 5", "87 684 522 302"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 109;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> cranes = {7, 12, 8, 4, 156, 6, 13, 157, 3, 2, 500};
    vector<string> boxes = {"299 27 143 279 443 156 212 351 370 287 151 323 463", " 490 22 371 89 428 259 439 33 272 342 230 346 371 ", "363 239 181 31 464 343 125 369 449 167 77 315 155 ", "34 86 460 169 435 58 123 110 131 195 422 352 256 5", "1 405 131 26 406 281 485 97 384 52 487 406 434 424", " 154 327 388 328 485 134 21 168 343 384 60 143 64 ", "125 188 372 229 362 293 409 445 422 111 226 361 16", "2 68 431 463 219 345 152 474 442 407 307 31 57 385", " 271 189 31 384 413 175 116 209 412 114 15 40 101 ", "119 477 293 441 426 344 22 37 87 61 71 485 408 246", " 123 235 154 157 49 347 410 150 317 116 485 322 13", "4 44 275 465 80 340 315 203 28 433 94 124 362 231 ", "317 437 346 225 13 430 93 439 311 240 164 166 20 3", "93 494 255 77 142 68 152 166 82 385 500 9 11 92 39", "2 428 227 331 411 447 490 255 20 242 408 54 315 16", "3 68 203 413 144 222 339 363 404 187 67 397 98 328", " 25 36 285 408 116 378 480 479 298 257 84 71 152 4", "19 487 46 62 280 275 450 78 25 361 449 467 445 140", " 194 297 15 305 405 371 362 306 155 383 340 214 28", "8 330 232 42 405 273 90 110 166 170 145 359 344 45", "4 150 354 480 478 180 141 246"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 178;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> cranes = {5, 25, 32, 345, 15, 9, 30, 19, 24, 13, 20, 35, 15, 3, 27, 19, 16, 3, 31, 6, 403};
    vector<string> boxes = {"235 212 153 91 348 297 355 257 332 141 58 285 294 ", "226 264 291 402 157 291 122 351 150 48 161 102 364", " 372 244 401 205 154 117 115 212 146 150 275 287 1", "32 36 199 392 252 223 399 122 266 349 317 278 281 ", "57 331 126 188 197 91 348 357 108 244 108 294 301 ", "200 262 238 387 288 241 58 274 44 276 149 165 162 ", "192 216 201 115 295 83 63 182 137 100 120 108 133 ", "303 56 400 159 372 152 383 80 145 396 349 121 59 4", "3 344 97 71 195 238 367 388 291 187 110 341 91 375", " 44 218 200 356 252 392 91 96 294 228 178 128 202 ", "364 285 154 76 92 303 79 125 371 45 139 72 69 243 ", "237 326 294 152 142 156 369 329 217 333 178 323 35", "1 269 56 44 215 109 66 394 325 99 266 171 36 289 2", "15 385 140 334 192 229 69 51 65 358"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> cranes = {91, 175, 91, 353, 368, 346, 178, 233, 233, 178, 174, 177, 177, 91, 312, 173, 312, 45, 353, 312};
    vector<string> boxes = {"217 41 31 192 26 88 159 275 283 361 293 96 287 337", " 208 52 182 246 267 99 323 95 9 295 181 163 271 46", " 251 244 113 72 52 9 44 134 354 366 119 73 225 82 ", "216 173 90 4 205 139 342 150 314 223 50 282 26 34 ", "65 345 7 300 105 207 47 20 310 81 18 121 108 270 3", "4 335 141 71 210 156 103 8 359 12 313 39 249 86 20", "7 44 53 96 210 216 263 302 47 87 107 115 22 348 11", "1 346 246 275 283 76 319 141 304 238 319 352 361 1", "14 32 274 81 286 129 267 251 354 115 269 311 97 25", "1 150 213 240 41 124 21 36 310 144 2 59 362 232 85", " 299 95 338 362 140 197 12 300 216 132 17 76 84 33", "3 116 36 213 349 170 133 227 206 151 305 320 286 1", "95 115 139 200 37 78 263 37 89 286 33 80 70 136 14", "6 26 361 96 66 7 165 37 123 51 282 117 95 116 219 ", "149 167 204 180 56 346 122 97 348 100 297 110 115 ", "50 8 309 2 55 109 188 302 348 62 20 211 340 144 16", "9 17 104 90 145 268 283 326 280 320 262 247 283 15", "1 242 34 265 341 79 108 6 295 232 329 7 356 41 112", " 335 136 133 196 110 34 112 77 25 321 160 172 263 ", "28 28 89 164 364 243 306 230 202 269 223 106 103 2", "80 289 224 53 141 212 126 315 339 266 340 3 223 22", "2 286 92 153 146 212 265 158 64 311 75 273 263 167", " 303 343 26 120 145 265 10 228 52 323 287 228 316 ", "191 57 46 81 106 345 45 285 138 156 88 150 74 194 ", "245 17 303 279 71 286 19 16 326 366 263 145 205 21", "9 55 278 326 92 146 111 348 5 19 156 117 94 198 22", "4 132 203 170 271 48 77 37 288 260 222 349 200 5 1", "7 123 126 13 28 31 234 227 59 159 240 52 41 195 21", " 165 151 53 354 192 17 215"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> cranes = {10, 33, 1, 25, 26, 25, 2, 33, 227, 20, 420, 17, 39, 28, 73, 10, 17, 565, 563, 31, 41, 27, 76, 675, 14, 44, 42, 26, 12, 27, 32, 6, 34, 22, 4, 7, 38};
    vector<string> boxes = {"94 493 84 621 377 89 461 358 354 225 460 499 637 3", "09 166 404 278 282 275 261 154 348 171 659 477 318", " 390 298 82 88 575 559 530 644 365 263 170 580 556", " 153 448 636 473 341 473 440 71 445 474 288 156 15", "1 101 440 225 188 132 438 244 521 297 536 296 568 ", "453 644 358 109 162 455 71 333 57 650 223 662 90 2", "86 117 436 340 261 460 134 140 362 396 374 127 591", " 466 410 233 250 559 296 305 50 404 142 399 526 31", "3 235 313 255 227 363 165 393 60 613 483 363 343 3", "08 447 292 115 360 362 491 333 120 195 499 108 296", " 485 526 281 57 354 290 311 68 493 63 157 643 598 ", "261 558 637 559 447 240 103 410 428 358 103 200 39", "6 422 299 616 234 144 608 115 192 401 452 286 187 ", "271 342 171 598 503 659 641 165 603 179 638 307 46", "5 473 84 148 502 333 171 347 477 343 575 135 424 3", "74 260 565 208 308 91 171 314 137 462 621 326 404 ", "616 485 421 485 353 83 321 428 582 276 578 185 404", " 216 191 342 447 569 84 489 594 361 375 655 636 25", "2 131 322 245 376 548 233 664 257 658 405 169 211 ", "103 444 212 464 560 153 528 158 241 391 652 236 44", "0 529 596 261 323 126 638 619 570 153 363 139 667 ", "664 467 104 515 534 537 134 514 291 114 536 131 55", " 57 493 471 520 519 629 500 203 294 83 462 484 151", " 548 390 221 418 118 172 317 231 433 243 455 653 2", "62 466 523 54 414 81 658 206 106 381 670 302 233 6", "34 282 587 342 287 499 279 366 235 298 658 476 609", " 513 654 56 670 427 442 357 645 392 630 96 204 399", " 215 352"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 67;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> cranes = {52, 33, 45, 775, 60, 35, 69, 31, 25, 30, 78, 3, 457, 56, 79, 62, 37, 959, 2, 6, 80, 41, 23, 27, 460, 461, 61, 55, 6, 77, 78, 34, 36, 40, 76, 583};
    vector<string> boxes = {"227 602 693 507 301 695 593 384 457 583 155 486 94", "3 92 710 497 294 224 559 881 105 760 100 759 126 2", "28 331 535 220 754 746 584 750 451 737 243 221 385", " 238 395 516 691 225 479 936 887 309 475 598 852 5", "77 780 852 203 455 899 147 195 716 365 547 799 951", " 303 96 946 386 621 426 672 925 243 224 124 652 37", "4 444 778 681 331 215 299 664 586 848 680 551 157 ", "544 592 635 157 857 235 580 780 670 403 416 273 21", "3 638 495 245 728 644 282 363 944 426 83 378 498 6", "88 928 569 230 156 909 934 772 870 758 148 226 834", " 191 611 837 703 224 116 723 588 430 958 617 955 6", "69 139 535 455 209 810 457 943 956 101 186 230 333", " 841 373 328 115 538 338 97 434 218 113 617 193 21", "1 140 178 144 80 195 515 363 152 507 473 365 847 5", "28 607 471 307 728 779 365 350 809 378 470 279 111", " 391 113 535 422 262 887 165 879 467 942 90 473 67", "1 194 566 288 791 400 213 804 896 597 574 373 446 ", "717 563 906 194 903 274 231 301 735 245 613 945 88", "9 180 484 679 333 585 207 639 849 428 472 176 599 ", "767 815 789 915 101 213 917 324 264 831 763 905 68", "9 206 638 194 682 350 957 498 861 402 901 222 268 ", "818 374 788 241 356 83 418 636 523 347 539 108 824", " 319 554 240 663 935 102 361 749 147 950 338 834 9", "27 849 663 564 423 112 110 393 812 328 140 242 253", " 625 786 911"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 63;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> cranes = {10, 45, 10, 33, 46, 315, 69, 2, 69, 547, 46, 267, 26, 21, 649, 59, 8, 67, 192, 57, 63, 10, 18, 3, 65, 1, 25, 6};
    vector<string> boxes = {"189 480 314 69 454 136 483 461 548 433 341 503 270", " 308 81 153 423 443 433 238 492 527 396 576 222 12", "2 120 506 514 403 260 377 235 343 508 372 541 450 ", "399 331 640 193 611 165 313 434 229 253 314 191 10", "1 282 557 316 471 501 421 516 159 85 182 638 281 2", "85 254 279 88 233 517 117 206 69 590 265 456 274 3", "85 584 604 419 205 235 392 196 472 132 116 437 485", " 134 310 326 256 320 377 381 308 355 97 628 284 33", "8 527 138 155 525 645 109 547 233 510 120 541 165 ", "371 352 375 269 118 459 420 140 490 330 214 204 43", "8 645 364 433 605 162 264 470 637 458 407 316 332 ", "255 268 169 400 263 452 144 417 391 393 412 585 27", "0 615 620 395 481 346 546 258 394 254 483 468 628 ", "459 341 235 235 268 458 202 522 313 464 241"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> cranes = {42, 25, 35, 3, 9, 26, 19, 34, 42, 400, 48, 29, 12, 677, 40, 42, 23, 14, 49, 33, 47, 5, 315, 10};
    vector<string> boxes = {"270 617 481 603 180 569 213 275 337 435 610 419 40", "7 69 387 170 446 595 139 389 424 265 427 153 284 5", "51 103 485 561 187 674 201 571 585 191 277 380 66 ", "72 656 351 620 425 329 349 418 502 143 230 328 210", " 189 162 483 676 194 491 363 220 192 56 391 501 22", "4 529 170 428 584 521 418 338 451 476 489 174 401 ", "311 506 256 417 590 558 542 513 55 515 536 212 532", " 409 93 296 139 324 662 272 158 590 517 71 247 379", " 595 433 146 240 335 346 332 584 77 488 362 496 64", "7 490 394 97 155 330 637 307 382 110 258 489 172 6", "75 618 335 481 425 651 656 653 592 571 155 677 436", " 647 560 568 421 210 475 368 312 296 569 311 598 6", "58 56 468 235 392 613 104 305 355 398 311 270 194 ", "126 68 503 191 479 444 574 495 551 62 259 405 107 ", "82 431 319 163 393 516 400 169 58 150 164 513 128 ", "361 164 227 56 575 457 95 643 634 624 256 276 163 ", "570 311 610 416 581 621 204 203 230 604 671 506 52", "2 646"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 104;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> cranes = {21, 9, 38, 24, 504, 24, 54, 7, 51, 18, 48, 20, 52, 37, 39};
    vector<string> boxes = {"262 171 275 132 385 111 168 393 57 468 130 342 141", " 210 308 379 353 135 185 359 458 119 321 216 253 1", "93 361 480 226 389 120 112 300 324 491 232 208 72 ", "96 137 114 324 213 421 347 104 302 256 69 253 208 ", "151 311 470 126 308 258 149 63 417 134 243 458 409", " 351 371 223 391 270 476 348 242 71 239 116 470 77", " 195 67 370 188 296 288 340 379 117 348 136 390 49", "4 303 209 312 445 272 64 124 120 154 193 436 400 1", "99 397 155 329 368 459 222 472 125 196 218 434 351", " 237 133"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 117;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> cranes = {4, 1, 182, 4, 130, 7, 4, 5, 4, 96, 7};
    vector<string> boxes = {"168 30 164 160 59 83 98 170 154 8 92 126 181 21 25", " 17 69 35 152 159 127 106 62 30 137 96 170 73 119 ", "139 103 73 28 150 181 86 149 164 51 126 38 7 71 98", " 40 111 35 140 116 114 22 50 147 24 166 85 113 180", " 93 127 131 57 122 174 99 46 145 90 152 50 151 165", " 161 145 96 138 30 154 48 19 134 96 99 176 155 44 ", "103 67 46 116 74 88 99 139 27 106 158 161 165 121 ", "129 148 17 18 40 87 97 127 121 49 47 130 131 166 5", "4 166 146 142 33 77 27 133 117 53 44 24 173 23 159", " 176 101 27 10 26 160 45 62 18 103 94 8 40 45 79 1", "18 82 165 17 124 161 81 88 16 48 78 102 145 70 92 ", "76 170 53 114 79 152 116 158 160 157 68 176 17 18 ", "148 80 108 145 78 79 93 107 86 76 114 61 178 113 1", "55 52 8 86 30 64 74 23 106 135 88 148 93 162 50 87", " 18 69 111 60 85 119 75 57 145 114 177 59 92 43 27"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 73;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> cranes = {34, 25, 434, 11, 13, 3, 24, 15, 154, 5, 155, 436, 7, 18, 437, 195, 31, 1, 8, 11, 567, 35, 16, 613, 19, 24, 155, 34, 5, 2, 21, 23, 156, 687, 32, 29, 29, 5};
    vector<string> boxes = {"215 161 422 485 194 538 106 116 612 111 121 107 20", "0 480 497 254 283 234 219 535 210 391 289 119 229 ", "526 597 266 682 513 244 318 617 283 593 291 391 51", "5 222 392 451 420 210 540 196 299 143 392 332 259 ", "515 162 296 157 75 300 294 338 139 420 408 662 672", " 71 126 566 298 474 426 403 555 335 309 150 387 30", "8 235 613 65 235 102 235 522 240 283 475 384 523 4", "14 382 259 502 581 151 280 196 303 464 576 288 341", " 640 250 266 218 677 574 438 626 258 202 360 166 4", "51 190 505 201 144 219 630 287 203 633 308 373 188", " 211 115 441 534 411 591 69 255 102 399 432 297 35", "9 145 348 129 609 440 476 82 652 666 425 518 306 5", "76 421 483 72 238 596 438 457 533 685 283 506 97 5", "3 327 122 271 264 299 661 437 628 66 501 171 300 1", "44 532 650 86 56 584 583 312 313 669 278 643 413 3", "77 76 79 625 273 201 285 575 328 283 280 674 511 6", "22 469 182 359 220 289 185 182 266 284 391 476 535", " 486 587 537 133 228 639 316 548 642 559 643 685 6", "58 59 220 103 446 342 203 169 251 334 334 113 680 ", "685 414 470 439 622 269 630 610 288 153 506 194 55", "9 275 610 590 371 408 562 38 426 297 593 553 165 6", "01 417 135 267 592 48 644 679 509 672 676 207 69 2", "15 250 611 94 686 85 167 93 150 523 123 72 445 210", " 177 453 529 516 138 319 576 615 83 463 61 128 114", " 395 441 532 73 585 111 132 620 532 463 130 72 89 ", "340 547 623 377 248 251 471 123 39 576 562 568 100", " 441 98 301 146 564 318 339 454 273 502 338 131 57", "8 599 548 562 310 315 498 40 114 534 248 609 647 7", "6 365 648 149 550 237 528 433 35 80 208 558 147 50", "6 622 483 80 82 369 191 102 202 413 145 541 439 10", "8 42 541 311 58 328 119 233 328 632 533 538 178 17", "7 511 512 50 345 662 341 659 232 98 88 562 419 282"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 52;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> cranes = {6550, 8213, 179, 5398, 117, 22775, 10434, 6141, 3106, 8446, 4340, 9087, 5480, 5286, 8350, 7182, 2353, 22924, 3518, 22963, 6784, 5840, 2004, 1148, 700, 36628, 4781, 2706, 6333, 3860, 45146, 53554, 5850, 10304, 1587, 6948, 2115, 882, 1615, 4029, 6606, 7565, 6966};
    vector<string> boxes = {"25502 10583 42304 30477 11168 24703 52180 29903 40", "382 47556 41897 22035 34558 26547 12263 50288 2114", "7 53104 36918 50269 41332 20685 31758 26332 37345 ", "28516 12202 49779 30017 16814 25689 28437 18219 29", "520 11298 26923 32339 28866 31282 24994 51485 1383", "5 43845 35105 47019 41318 23015 21075 39828 27643 ", "31787 12487 16650 30558 47712 21413 12720 17757 16", "127 52646 48962 22598 33127 14471 21349 17885 2749", "7 36302 50798 15449 19708 13777 14834 38803 13057 ", "46370 26953 48100 23812 46436 25161 53490 15079 27", "569 48977 42105 26048 38361 27475 32860 19268 2920", "4 10690 37358 18915 12860 24510 47123 48327 31773 ", "41268 22117 34773 22203 44838 39915 13699 41030 26", "446 30917 35968 49876 39644 43761 27425 12331 2426", "4 12854 43919 16596 52597 40185 48631 44873 11477 ", "21226 33467 10865 12277 44724 14754 22024 53043 11", "371 17579 32912 48991 50090 17524 23949 24924 1647", "9 25278 40975 48368 28095 49764 26607 51792 31271 ", "28919 18822 43962 13639 46403 38930 35013 17971 13", "216 42923 12225 19208 39625 47492 14831 52767 5247", "4 35215 33539 47832 38512 45326 29068 51122 27157 ", "40897 11649 42983 19471 30360 29011 13617 24418 28", "256 25271 34970 30806 31934 32531 53829 32866 3779", "5 27577 14808 25518 30586 26527 46825 33750 20150 ", "44457"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> cranes = {740, 1837, 68843, 3579, 239, 6187, 4792, 2889, 5184, 6052, 37197, 3275, 5434, 6300, 6875, 126, 7411, 3020, 3909, 380, 4485, 2119, 5552, 7387, 6496, 7907, 4741, 40960, 7589, 6501, 6771, 5626, 5499, 716, 6332, 2552, 7321, 4571, 4652, 6654, 2507};
    vector<string> boxes = {"60765 47228 36327 13930 54490 44448 21404 68100 66", "987 59338 36206 53075 9346 61092 54855 58745 36535", " 41937 66036 59024 53212 20171 55833 44496 40473 3", "9566 61814 35141 28088 47837 18415 61314 51723 375", "50 41424 17602 29073 10576 38900 40856 49011 53046", " 62790 52930 44243 37287 36791 35349 30681 55093 3", "7954 22260 22456 21788 57636 10191 22087 68079 118", "74 51793 31818 68064 12467 51477 9945 8472 58405 6", "8699 10776 8976 20582 51213 37532 18634 65216 4744", "3 40673 47240 64759 59001 57970 48565 8722 58936 3", "8877 37741 60335 16381 59802 57544 66075 43448 630", "93 27274 9915 25656 27763 23837 41466 61830 41408 ", "53307 68020 64952 42434 19401 20180 22257 54610 85", "60 12850 38847 14002 59478 8373 60473 63127 39367 ", "53501 32037 63527 66900 56747 32718 18988 44710 67", "366 67553 13651 68040 13694 12919 16316 68000 6714", "4 41118 60067 39636 55945 22476 41219 48112 15652 ", "22384 42903 24947 31722 27189 28314 45629 47573 38", "160 25752 22825 53967 62505 62244 60207 66951 2745", "4 66906 37969 20786 51679 20957 32158 61536 64852 ", "42473 21483 40424 37935 65418 26640 30053 29687 10", "307 29156 39676 60256 52088 58150 50275 54324 6803", "2 65329 68105 25832 8472 15831 52684 57693 55915 4", "4368 49802 13435 66385 25638 43574 28165 24241 504", "84 31036 14166 19091 9096 60526 57558 44157 8184 2", "8850 47107 37719 59995 48864 64748 23770 48508 292", "78 52970 49505 42536 51596 30197 28305 66586 9154 ", "45919 9103 14249 50152 47567 47848 28331 28140 414", "42 55988 41090 49143 51095 16214 40079 68521 25751", " 29638 57236 56943 12733 46324 67875 28664 32615 2", "9377 50106 8118 66355 39281 13964 59431 19293 5154", "6 29836 28077 55560 60704 21312 46935 38191 60737 ", "43412 27043 29524 31429 54771 51939 29801 9678 132", "56 51307 39427 49404 24482 66643 14506 29971 46024", " 33988 28686 24580 16366 56747 51842 26042 45916 4", "6361 29544 36837"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 152;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> cranes = {2605, 3399, 2900, 5724, 754, 5226, 4121, 5362, 4940, 331, 44078, 32858, 5209, 4974, 6593, 5703, 497, 3054, 5327, 5026, 3648, 4164, 6682, 745, 4586, 44631, 877, 5210, 11915, 526, 3278, 6063, 2072, 2677, 16806, 16780, 1558, 4118, 5092, 2847, 2889, 6352, 2128, 49985, 1405, 3230, 6467, 3324, 2772};
    vector<string> boxes = {"10309 30525 34156 30400 40460 8831 49698 23635 481", "74 17529 18987 20237 8858 10239 25108 9360 44493 1", "1464 17752 34038 17360 25225 6924 36718 11661 7845", " 16021 32338 20566 49451 32142 38377 10232 7108 45", "544 21287 16564 25076 36894 27554 11695 32250 2861", "7 12375 17628 24774 36846 38660 25623 25110 19601 ", "39727 9571 11721 7833 26474 29465 32591 22494 2267", "3 47582 41416 10868 33473 17216 42362 27374 7325 1", "8459 40021 8164 39145 30269 29358 14815 18134 2615", "3 30417 9358 33760 23390 8728 14133 15848 31740 33", "441 31889 7024 34642 41468 13365 11105 25638 44334", " 35374 19390 26016 11599 31836 44658 24307 43656 1", "7372 27588 47719 40622 11404 15430 46228 26760 106", "11 16341 28998 9003 14530 39935 31885 34398 20992 ", "12432 45717 10901 38867 38183 18091 25006 36156 36", "710 37223 35627 14931 11973 40402 43146 29759 9283", " 42232 29770 48078 8252 33806 18147 35013 20489 21", "602 33542 32951 20442 15913 42093 22158 7931 42675", " 27058 45578 12406 47377 8325 27400 39483 33207 94", "36 9604 41554 38183 12553 32246 28188 40233 38164 ", "22780 36233 9661 34163 30387 26306 21848 23502 241", "88 39951 41923 40927 27106 12789 18362 38584 46950", " 48936 7325 16408 25141 28158 18999 8489 18164 342", "08 13814 21977 39659 10316 34629 26063"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> cranes = {5573, 2412, 3509, 7818, 2321, 4460, 3657, 6096, 6910, 2457, 6798, 5335, 8143, 27554, 1105, 5789, 46116, 4096, 7255, 6372, 7199, 2054, 5469, 4238, 2500, 5201, 1172, 4132, 1571, 7866, 5232, 1987, 5302, 3599, 2254, 8103, 8786, 8175, 2980, 5206, 56487, 45872, 5141, 6918, 5960, 3541, 1318, 3835, 26586, 1992};
    vector<string> boxes = {"18210 32546 14333 56273 13775 42229 54568 13958 43", "735 17453 14470 38409 26749 41781 16736 17296 3176", "9 54516 44598 34827 28365 52641 42041 36655 26250 ", "15215 40978 38776 46365 10386 26155 42927 56431 10", "530 24061 31124 19410 20514 32006 44086 38550 4616", "9 52222 23332 52293 15519 47794 46755 21903 41190 ", "33293 30477 15804 30406 42253 47956 14411 13711 34", "551 35191 19695 25088 45033 9816 9878 31556 49472 ", "19435 20556 54195 31224 8798 36818 49044 26867 174", "00 49570 9261 48112 53405 27785 39846 30249 31515 ", "25474 18848 28877 13748 56110 43481 40342 23897 54", "666 54947 47987 19060 43302 10277 39774 13417 1440", "2 50688 44040 34454 45567 52736 51590 44974 34754 ", "47347 13407 28007 39304 43091 50860 8790 33100 452", "10 43645 10541 32274 15121 10672 17903 33673 33054", " 16118 33724 55587 19447 50533 16389 32219 22991 3", "8082 48847 50389 42253 42546 13895 9615 43048 3114", "6 16036 50861 41228 37559 56303 52640 10058 14941 ", "29563 30189 23559 20023 19135 19821 31811 30353 22", "291 17816 17909 44131 56180 20524 50514 36763 5600", "3 19099 27882 22437 16624 37160 56255 43471 53756 ", "19848 40945 52993 54274 52301 48503 41795 17061 24", "389 9907 39798 21075 12183 52692 56213 10550 51843", " 25702 47162 27186 30297 47522 16362 30084 43269 5", "2970 11441 38019 9113 48140 25656 34258 44952 2851", "5 12539 20310 42593 28627 37692 46724 18229 49934 ", "45018 18190 21878 19389 9975 28452 52342 28816 436", "10 33451 36295 14288 26314 29896 43640 12874 23579", " 17260 13423 28742 25018 54670 35333 43924 16655 5", "1809 30587 14347 55593 36435 42170 22281 25492 552", "19 14789 23317 11180 19729 42528 26175 35115 41732", " 40820 30508 41974 53471 35242 9063 19153 10385 12", "668 33716 18828 28762 37992 28411 29190 25859 5588", "3 35023 36105 15491 28204 32252"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 59;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> cranes = {2462, 6433, 5519, 9038, 3576, 2989, 248, 9028, 174, 5534, 5062, 4889, 3927, 2535, 9000, 941, 43384, 5978, 5279, 6644, 1224, 3322, 1444, 52667, 7644, 8325, 3018, 428, 5447, 933, 6131, 6187, 8933, 865, 3927, 6647, 7436, 8129, 8915, 8467, 4596, 8335, 43461, 4665, 4974, 4776, 7677};
    vector<string> boxes = {"37271 18888 31139 35370 36843 49350 17994 32978 40", "149 13969 27674 24582 30044 26559 20580 44535 5272", "0 20723 23258 12382 22272 18948 15471 19905 15450 ", "37024 14740 41677 30431 21750 36354 9774 43982 220", "41 31686 49857 9588 12237 22820 38052 14433 38852 ", "36429 37396 34502 23739 46628 41169 32099 25132 14", "074 40124 36861 21868 41087 23783 35162 12847 3529", "5 18311 39495 46349 36404 40726 31301 23164 46870 ", "40211 10854 39772 41247 41830 17141 47830 44684 10", "076 13765 23752 35594 48038 29606 9667 22095 15361", " 33928 41150 20831 21275 38710 20678 33580 34410 3", "5032 43132 41799 32856 24752 24343 22010 16087 480", "90 23525 48781 50376 50193 42247 33496 40475 24971", " 21735 26739 51073 36276 36760 38978 9448 31653 43", "765 10622 17470 49460 35524 44228 16880 47301 2708", "9 10962 41650 24761 27724 38563 43193 32327 12077 ", "41237 39064 14700 22894 33957 15761 14762 49706 24", "375 18235 50258 44672 48330 11932 24376 21984 4981", "9 16820 28291 34172 14269 14255 20681 25362 12429 ", "48416 47664 17914 41633 10357 29662 26798 19032 40", "617 29336 30214 47522 9605 28107 38142 31880 50192", " 22904 39733 10784 48996 25047 40534 10279 11613 2", "3756 17775 49373 14506 21914 33317 41331 51810 398", "89 23243 25099 15162 29870 13219 11832 37059 23577", " 38094 11013 42836 28794 11125 18171 47206 48975 3", "0027 24846 20670 36612 46515 37492 30923 35691 149", "45 10603 47115 19062 14124 9795 14284 32301 29621 ", "28046 51999 22599 19857 31128 39209 49890 38398 21", "825 24887 31641 19428 49736 16626 32387 11944 2778", "5"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> cranes = {32975, 679, 5900, 4809, 7791, 61265, 687, 3430, 1217, 1799, 5105, 8626, 4917, 1210, 1732, 4258, 6089, 704, 7903, 3511, 3182, 2465, 5016, 27455, 5048, 8774, 1943, 5691, 5159, 35994, 5640, 5863, 6939, 2872, 7051, 496, 2839, 2235, 1279, 7872, 5400, 3579, 8943, 8976, 35821, 13158, 3699, 6791, 1275, 8740};
    vector<string> boxes = {"58575 33688 23382 53780 15612 60907 21355 58003 40", "712 30496 49689 49730 38430 21051 45311 15074 2388", "3 42384 37574 20906 29631 10223 14134 33680 56871 ", "56468 40616 31467 33629 40677 43786 17100 30918 55", "162 37832 39183 40749 41467 44962 54924 50492 3345", "6 48676 25354 13166 42325 31918 32256 10251 21558 ", "37596 42345 51821 60708 19768 14345 57346 57303 17", "612 32125 10447 11953 60963 51719 59280 52669 2889", "1 41830 13725 23471 48981 42748 40152 45474 27028 ", "57170 40989 42867 31504 39175 48933 45030 30992 18", "014 20919 10088 58050 50963 28924 26918 47253 3951", "4 50930 51111 14846 54118 14961 30555 53869 52411 ", "20240 16359 29940 38804 31768 54470 34275 45649 46", "271 59112 13492 40625 26354 30368 48502 11597 2882", "0 41511 42410 12960 13616 25293 12762 32625 36476 ", "51819 31587 24590 38948 54955 15914 27705 26730 13", "376 20352 49634 58878 30772 60034 48394 15524 5972", "9 29933 36268 60994 47895 24430 42550 18151 33754 ", "45111 49775 46597 40056 52648 57824 13684 57497 41", "001 37187 60950 27592 24669 50738 49703 46660 2287", "3 25084 27737 56141 55461 50470 35062 28305 39787 ", "17113 20316 16100 17520 24990 40781 45132 19619 38", "047 58079 36943 53104 21504 43976 41236 47240 2470", "3 56857 41666 36408 29853 43002 55809 19402 20089 ", "58948 27537 39656 57171 23792 50182 10497 21178 10", "558 39078 38017 26551 41157 11599 14617 13624 4306", "2 38365 36452 37555 60469 18594 27671 37905 47855 ", "48608 32820 49407 38636 57814 9736 16690 59118 486", "47 53496 9972 54381 11525 41380 27317 47744 43056 ", "45516 30740 51686 49632 23737 9231 12994 16804"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 137;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> cranes = {10617, 1154, 88, 9434, 2738, 11490, 10030, 4977, 560, 10366, 4108, 2652, 11561, 2852, 10982, 6656, 11496, 3642, 4436, 4070, 9216, 9013, 652, 7365, 10468, 3494, 6277, 59769, 10342, 10423, 4717, 4970, 4013, 5086, 9301, 10774, 24327, 24308, 2086, 1457, 11523, 996, 8288, 4643, 5010, 47991, 265, 1010, 6181, 4823};
    vector<string> boxes = {"51914 20122 55736 16036 40150 20698 42141 38412 42", "400 31653 49266 58739 15525 36397 42127 32215 5585", "1 18009 48988 48547 37654 30387 42774 53310 25622 ", "14556 29311 21383 37342 50211 42577 42283 20276 16", "567 29348 37962 42084 54500 57498 46231 26248 4661", "8 12442 20559 14288 20479 19256 15031 53272 23968 ", "20656 34087 29227 28028 14130 59722 49483 32186 44", "131 50482 32909 44499 15087 31355 19446 53993 5049", "1 33070 25461 59017 54510 25621 56836 56495 40528 ", "18952 30904 52870 59596 33705 39756 30713 15681 57", "330 59367 49102 36447 28535 35202 12785 28539 4492", "6 56581 21241 49308 31457 42218 21511 44572 13836 ", "16977 43719 57118 38881 27833 58601 27104 55839 21", "906 29314 19384 34070 47886 23477 46700 46466 1490", "1 27341 18472 56871 24193 23841 58721 23979 59284 ", "46625 44044 18856 51528 59020 50171 54307 42663 55", "327 53647 22755 44208 38064 29587 35057 23328 4514", "6 44297 35678 48261 30719 53643 23135 21545 31491 ", "48999 46974 23316 57756 53385 32830 54925 23171 49", "789 59700 32051 23252 11797 44933 20875 44935 2108", "8 48653 58514 27228 44248 36511 16614 58981 59744 ", "18911 32695 44590 46087 50408 24991 33429 52405 56", "628 42601 24048 47204 14600 29321 41937 47878 3954", "1 52871 19118 33370 55380 58708 50966 17380 26418 ", "52392 13908 50914 44580 50253 45005 39366 31540 59", "022 57670 11681 58417 20381 26532 41779 13911 3545", "0 16731 23903 18341 27578 16785 54117 38176"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 82;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> cranes = {1648, 2942, 2933, 2740, 2059, 2399, 1441, 1535, 3377, 1926, 2640, 4849, 2433, 96, 4742, 1500, 3212, 2183, 3115, 37229, 379, 1860, 3423, 3942, 4504, 37454, 2077, 150, 3613, 4141, 1062, 362, 1688, 2911, 1596, 1471, 3559, 2168, 4184, 4092, 460, 3933, 898, 1716, 53185, 828, 2000, 392};
    vector<string> boxes = {"37942 35019 51842 42746 12228 11478 32047 46827 24", "219 30287 25484 28848 41467 48133 20498 43342 5602", " 11163 37203 34053 33659 26149 6212 8793 39027 111", "60 46422 27885 46683 23985 13993 28864 21516 39983", " 46438 29622 12357 13442 26598 43448 35371 49318 1", "8316 22947 28973 50903 11225 48546 31556 30850 368", "46 40815 35058 47697 20354 52025 38700 24319 8876 ", "42851 21263 52472 28293 17471 15783 37010 17791 48", "962 41583 32900 39410 29375 45795 4904 50219 23342", " 15082 38043 10761 34785 18915 35818 30302 43392 4", "0408 43889 31801 23638 5240 32679 25692 33443 4180", "1 8451 14926 19922 49716 5413 31922 23659 48205 73", "42 20832 43029 10296 19020 27073 49376 48869 16024", " 5291 36046 35623 6091 35918 18357 45037 15178 356", "13 26553 17109 51878 49707 33313 16156 16688 14199", " 6091 21368 47409 35869 37072 10252 6718 18509 166", "88 47262 50945 53145 10260 40057 48784 50998 31146", " 9625 22186 24878 16652 32636 47483 25041 31987 18", "237 29839 25954 5809 8770 47944 39695 14930 44947 ", "36581 39017 16806 25850 38481 16203 23599 10401 21", "246 46024 47201 5674 36791 12583 6321 11989 36233 ", "23117 27709 33132 50407 38211 13109 9064 29109 307", "84 53101 22722 23992 48852 21086 20491 18732 49189", " 48317 28296 4914 35229 25565 53043 13720 45119 13", "939 6004 18907 32892 51698 22764 42954 33912 11081", " 19168 53008 10797 16949 22475 9974 26437 25457 45", "407 45669 18347 39758 42710 35844 34074 31578 3401", "2 31328 20828 48723 15542 5902 14190 50702 40306 3", "6218 52746 27958 25670 27653 11202 6778 30950 4717", "3 46064 22438 26426 20004 12859 23568 12860 5284 3", "3521 19046 27377 5397 14595 9647 33845 30377 36028", " 36889 20546 39045 35052 7871 47867 12191 20029 45", "868 32227"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 91;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> cranes = {5391, 9881, 4354, 967, 8543, 10024, 9138, 8458, 5103, 7558, 2886, 7156, 6990, 6599, 7368, 3039, 7732, 969, 63781, 8293, 2774, 6811, 43208, 42811, 468, 298, 2705, 9689, 8501, 4258, 7968, 4059, 6025, 5105, 9228, 10585, 4169, 9714, 1489, 5212, 5679, 809, 7666, 9889};
    vector<string> boxes = {"62067 15135 14204 49208 57407 49268 27945 24107 44", "511 11278 24709 23290 48222 59359 25909 39951 2039", "7 35876 20321 58422 13156 29805 63633 61243 17817 ", "47632 11658 46822 46538 23771 11701 41689 25044 14", "751 52957 61947 37908 37006 48049 24624 15663 6339", "4 46106 53673 31519 56764 29139 59478 52052 62391 ", "42756 48705 40763 59190 18186 56005 55620 19244 16", "534 48591 12223 10897 40871 60555 45868 24279 4975", "3 29264 29164 34450 49424 49442 57604 29903 40343 ", "33058 56104 19718 51397 59551 23156 60704 19326 24", "503 12831 49548 24318 54162 38139 43708 12428 3627", "0 13620 12625 34875 19917 14858 40436 11895 29874 ", "43793 48321 15724 62475 28429 40147 27357 10698 60", "263 11253 29846 56971 33234 28769 18360 21837 2045", "0 15227 54957 53717 11545 48811 47808 30588 60539 ", "28322 39157 12066 17784 55071 35217 35662 34261 37", "169 40330 35540 11717 57675 49762 18383 39033 2413", "8 26372 56005 24001 52474 59563 62948 27626 45559 ", "51905 59002 45368 58176 25050 45696 17212 25664 15", "031 30272 57235 31862 22575 33829 32406 62478 2833", "6 19484 17370 19865 15884 61093 35954 52600 43235 ", "50801 37928 57222 22275 34418 52827 18667 16806 39", "951 49732 17605 43876 31378 11650 11736 56147 3190", "4 62012 50878 60325 11080 20922 47979 53960 26559 ", "56383 63614 56149 36812 33495 39336 22592 35318 44", "213 62221 15925 62397 21341 50477 32953 18806 1196", "8 61145 26756 47755 42621 16380 60285 56541 31666 ", "15623 58686"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 92;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> cranes = {6489, 3540, 63302, 3406, 4831, 4925, 3744, 4575, 7098, 6949, 3787, 4284, 4005, 4531, 622, 3079, 5695, 5940, 5999, 6507, 3078, 7845, 4377, 3640, 1042, 4191, 6499, 3189, 3445, 6465, 7230, 6336, 8095, 1123, 6334, 4858, 51321, 1160, 5891, 65324, 6327, 4725, 3898, 2320, 7152, 4516};
    vector<string> boxes = {"63492 11312 43752 56201 45426 26078 21910 48062 49", "723 45891 49345 38778 53827 48526 48996 41747 1253", "0 64027 37892 64387 54277 28109 58863 30076 42350 ", "52812 16318 62451 63231 19851 41163 8516 21221 422", "11 16502 52003 41261 59779 55097 23528 24247 37013", " 23252 15271 63684 54526 53630 58188 31366 8833 63", "564 64202 16287 14456 10414 23743 36602 48287 1217", "2 50366 57527 34805 24692 10840 11157 9715 33302 1", "1781 17424 27955 33880 31758 52892 33803 36305 167", "99 40817 34250 26525 55908 40540 50007 49225 53704", " 22763 29440 10561 41991 52014 15118 41913 19548 5", "5078 20924 51232 15266 50808 64814 20353 11351 485", "22 32328 63166 55622 51339 22385 63864 48962 10081", " 61251 41409 59191 8188 36066 44254 52312 18663 21", "469 56532 44811 54065 35580 12335 53471 34933 4548", "8 44035 47330 10942 38965 36632 8901 35937 33674 1", "9900 31397 60213 62959 12628 43418 24603 12855 590", "13 54899 16279 49119 63078 25226 31012 12748 40010", " 28968 37989 56845 35598 26356 62107 46712 56429 4", "0185 30944 61119 59380 34292 19529 26280 64065 544", "06 26530 59449 40036 27998 62741 38009 60872 61812", " 32589 25147 28897 45578 47958 23839 50159 41453 5", "3868 23606 20475 52546 30254 47600 36784 15251 262", "34 8731 10521 17659 11421 45890 50687 34939 48129 ", "26879 27827 27019 24188 22292 9146 42953 29830 280", "37 48229 41698 16836 56013 28566 16323 39843 33879", " 21179 21839 63022 16708 63322 57866 25657 53063 3", "5771 46952 20162 58069 48360 60675"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 78;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> cranes = {70341, 23968, 4625, 36680, 60974, 26661, 4841, 71122, 5796, 4862, 2222, 2979, 66171, 59051, 140, 1604, 1787, 37603, 4465, 4963, 37542, 23842, 22872, 61084, 1527, 51268, 5821, 36130, 26301, 37280, 36590, 66161, 3172, 829, 4093, 74147, 5032, 439, 37389, 22535, 5847, 23923, 25581, 450, 4244, 61612, 2843, 367, 35719};
    vector<string> boxes = {"33652 11573 13135 8278 13102 60543 68067 56259 548", "09 46766 40564 27834 8124 45130 34408 22413 52384 ", "21067 30560 58851 14521 40306 7690 72478 22026 731", "37 38498 63428 22343 20763 72497 32641 34343 56214", " 51749 51253 71620 51885 49546 6240 50881 14176 16", "270 68537 72255 7291 50635 6545 30731 18254 11409 ", "12888 31353 34881 33781 19320 49677 20867 29076 21", "056 43465 6065 69365 7761 29285 18001 6059 60969 5", "4224 50275 52570 55784 10222 48388 47599 35254 570", "00 60649 67980 69827 17295 29813 46820 59155 29718", " 22060 69098 57440 47010 55592 33636 15456 53959 2", "1420 56966 49650 52649 52602 31242 34634 9305 3260", "1 47598 45744 52295 68161 73357 10990 12978 53803 ", "59707 27352 24036 10897 40194 48893 65481 31666 71", "876 43445 7071 46277 60121 10263 24597 28638 27367", " 49416 53836 54776 9608 54062 65970 60910 43294 35", "371 40466 71131 27971 39079 11426 39519 40993 1391", "8 24880 57577 62174 12971 73028 26985 62583 55571 ", "20754 10968 68861 9981 50576 41520 66114 66245 110", "44 27143 47218 65734 73311 69228 68828 35288 42672", " 11940 72944 53783 19365 48382 58033 19175 8938 54", "432 64662 6948 29784 28198 22329 19796 9961 55973 ", "6440 18155 51273 50093 54484 20505 22001 50678 452", "65 53340 30070 41877 61886 43739 68079 24221 18077", " 48695 40464 65791 10232 14295 68588 50505 24701 3", "4707 70641 9904"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> cranes = {10152, 6820, 5628, 7759, 7157, 630, 9349, 63856, 1106, 3457, 8109, 7258, 1658, 7988, 215, 8549, 4324, 1268, 9645, 407, 6716, 927, 51496, 7020, 4269, 7362, 7304, 5353, 140, 1937, 1901, 38267, 3751, 8636, 10080, 3630, 4666, 8038, 2980, 3570, 9412, 4100, 754, 2897, 7771};
    vector<string> boxes = {"47144 18784 48299 38420 18279 16856 60117 31189 12", "934 48511 15372 20758 59605 29131 51095 61074 5190", "1 54682 35461 63447 40681 41629 42196 36724 22285 ", "44595 19309 17331 41230 15373 50034 17115 38175 54", "901 14548 45004 35852 57997 43099 62653 60768 2207", "3 16699 42767 30898 51783 51938 38368 26902 17279 ", "44288 14504 60341 22072 64172 19692 61586 57918 39", "069 61829 43419 42495 19227 63033 17846 63584 3916", "7 41392 46805 15768 44146 52383 34565 19300 44265 ", "22113 62998 58201 53252 15789 53799 54247 50490 53", "103 43295 43202 53593 12471 43231 23582 55615 1947", "5 12510 13795 56893 15172 16805 45134 43868 25647 ", "60649 60595 46849 63535 52043 14580 14255 60029 20", "207 58803 11145 13109 19268 45013 53931 25748 1979", "1 32879 13204 56490 60902 56369 31669 15298 40873 ", "42404 42297 16234 23159 38811 19463 24064 32154 15", "452 63422 45645 48408 38239 63870 49923 60555 5000", "3 39926 22190 43070 31031 29746 18840 23973 30582 ", "10203 53270 54634 36513 37595 56197 48320 38054 38", "049 40989 23281 33616 22756 57995 56618 26325 1256", "8 45692 30776 29127 20134 62273 33313 21582 18252 ", "48855 20062 17511 40320 37350 60841 46849 35774 44", "398 46513 37862 41973 20899 16571 29841 38179 1611", "3 14053 16783 35368 21958 32758 16178 30354 51761 ", "53931 48358 38234 37695 32123 43586 41356 36399 39", "632 60805 40044 52143 34638 57493 42647 56315 5030", "2 12305 56146 28963 60690 30222 20029 20694 50155 ", "45278 52618 12398 30495 43289 54365 10373 25414 28", "954 30170 10665 31099 26172 64378 30146 26466 1019", "4 55775 19742 18070 28390 22964 22177 28972 41039 ", "34585 22012 23532 27051 39356 16212 35887 62484 59", "043 42358 56123 23831 59412 31030 29572 30899 2136", "8 51651 51858 31795 51189 33864 16228 42709"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> cranes = {4922, 4065, 66353, 6247, 60038, 6785, 3599, 189, 4180, 4303, 50855, 71, 12186, 7848, 6033, 3752, 50983, 3601, 4637, 4270, 2781, 59605, 3943, 7156, 5018, 4683, 8130, 45188, 302, 8036, 2234, 4728, 999, 1665, 3142, 2097, 7699, 4563, 6555, 5006, 3256, 1916, 7311, 2245, 4938};
    vector<string> boxes = {"32449 47301 14175 12612 44806 18348 18764 34728 57", "747 46752 49881 59636 50761 15228 28982 46431 5562", "4 24076 39813 14514 10690 58232 44392 39277 55063 ", "29663 22684 53551 51490 35202 26429 38717 16949 36", "050 57932 19819 57883 28810 17850 64793 48576 2642", "6 31811 16182 15239 28098 38685 12297 33105 18703 ", "31105 13693 34956 23709 36649 49276 46302 10023 19", "736 43355 14008 54425 63037 64428 44535 43601 1593", "5 12684 62435 45452 13671 57110 26089 28555 58467 ", "25485 60643 52281 12730 27390 41206 60127 56335 49", "138 54936 11257 55815 62841 9998 36435 32702 28160", " 26639 43271 58164 54350 9507 53650 35789 19341 42", "034 38439 33656 26263 46927 39943 52531 64130 4359", "2 17755 20714 34715 24460 48699 45262 30188 38993 ", "18299 18636 10151 59985 16821 33246 64104 65159 10", "864 26333 27934 46827 17881 12652 36381 22519 2842", "5 17932 34089 59971 45984 13726 16997 62853 24647 ", "13872 10641 13536 46876 31837 50646 37409 45659 25", "668 18883 40128 22679 62120 65763 61058 48444 8852", " 15179 41961 22746 9999 62838 64949 31739 30910 13", "303 26268 59922 33550 17372 44128 16522 37081 3023", "5 51148 34118 62998 19145 18414 19339 47356 60446 ", "47663 26765 27578 38311 40502 53916 56165 16450 45", "032 43578 48628 46020 29608 44300 55294 48785 3891", "0 33075 61743 15267 22813 11709 53934 60450 29552 ", "38778 57726 32521 29872 31345 16904 34096 45058 64", "898 53858 35175 39537 58433 17225 17921"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> cranes = {521, 9873, 4036, 5316, 7661, 3247, 6307, 65496, 3602, 72038, 6861, 2139, 237, 958, 8084, 1133, 5391, 3659, 9848, 1021, 6467, 8078, 4845, 4287, 280, 5332, 65439, 7006, 731, 9965, 4639, 1945, 8908, 2280, 1053, 9591, 17554, 10663, 166, 2521, 3543, 17604, 1225, 9941};
    vector<string> boxes = {"42117 52697 29024 33608 42270 26523 11799 13930 13", "420 52051 17123 61137 71696 49053 30592 52414 3680", "2 52096 65158 16618 62920 20763 24898 68603 15521 ", "46353 54239 58119 67935 53851 46749 30521 37773 48", "735 43549 17022 50048 41800 61224 15011 28239 5785", "2 55960 45306 17858 63429 43561 61658 52633 55037 ", "39111 45308 35234 39812 64285 67756 24889 17750 19", "927 54614 62558 24120 10788 45511 15135 39577 5060", "8 69067 62539 25641 25231 34611 55074 65794 58865 ", "11572 69380 54327 25693 41582 42838 10784 29307 40", "285 46662 25234 50620 17728 53809 37228 40645 1518", "5 17321 10847 57173 32809 37794 65342 40960 31291 ", "70673 62373 35338 29545 30258 52996 11658 38135 60", "466 60775 29737 34577 43744 14654 33105 62840 5036", "5 61309 46062 59691 68955 20916 54361 40896 45520 ", "47425 28447 53083 20796 33958 20831 14387 27024 49", "935 35659 40068 37035 14242 47305 34764 59475 2603", "8 18067 65062 30264 30352 54728 71215 57399 19537 ", "61019 61358 21872 33377 38956 32224 27145 44087 18", "380 44354 49216 44427 39856 38235 39429 54276 5373", "3 48642 63920 65057 18349 40774 70869 37928 62037 ", "65519 32984 43448 60268 55747 32476 15339 18604 32", "003 39889 64738 67601 69937 47216 33655 25370 6060", "2 13856 23460 27220 15627 23587 35593 11234 13846 ", "65712 51568 35509 51992 44578 59300 65876 23248 50", "608 58640 52341 26003 11003 42624 29390 61899 6006", "8 55255 62049 21295 50117 41673 29956 64752 44448"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 67;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> cranes = {1400, 6222, 8410, 2612, 7579, 1688, 1180, 65871, 5091, 4912, 2984, 6489, 3491, 3388, 3402, 3368, 6391, 46404, 7058, 5153, 3957, 5188, 530, 5398, 5579, 1037, 7634, 7375, 3475, 5844, 6368, 5245, 6669, 4600, 3621, 4156, 6177, 4463, 1036, 421, 5155, 37526, 5412};
    vector<string> boxes = {"25017 48099 53646 18884 41476 60595 62101 34519 23", "218 34094 34245 46246 56822 43108 57233 44778 9746", " 49404 28194 32025 28535 18710 19499 29212 61815 3", "9968 25062 37309 24235 64769 13999 30034 20993 593", "61 53437 46360 58018 36083 27580 24840 34319 47134", " 31461 10428 64753 55420 31638 51298 46067 50524 6", "3673 65088 30770 19954 21720 29968 44853 13730 559", "79 28604 59145 65782 29632 55223 47026 37731 35698", " 52690 59155 57384 53555 27836 50728 58419 30835 4", "8761 52361 9268 57166 65388 47479 11625 52680 4703", "8 52748 51440 32987 14531 48717 19729 22024 56648 ", "38144 52472 46452 22662 21644 52707 12788 38577 57", "174 41717 33991 62945 10008 61039 10275 13185 3587", "7 60140 10856 45009 45567 33990 55299 60688 52288 ", "60891 39696 22243 63980 10742 14653 16416 17592 17", "413 10139 13890 29714 39947 61373 50121 59627 3921", "6 41611 24653 24715 30352 42867 17256 38599 42899 ", "58902 15191 39135 48874 41677 55918 14034 41700 35", "109 45686 50337 10782 36646 12889 47040 39666 4926", "9 50891 31095 44242 59440 12405 30546 60914 14541 ", "28568 39984 31128 60660 64375 16868 17426 43397 50", "576 42741 37417 11755 53453 61965 28571 29240 4863", "0 42560 64687 12028 65188 44183 19783 61413 15302 ", "56188 35606 24419 43167 13933 18712 33349 30835 40", "196 13278 42848 54074 50905 24139 64941 47795 2058", "7 45847 42317 45831 52405 41451 10494 51754 9259 5", "5775 31487 42920 39172 58035 37391 9411 11036 2629", "7 58303 54802 52636 40558 34027 14281 20108 9827 1", "3854 31112"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 86;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> cranes = {63895, 11863, 41044, 52467, 64284, 42383, 41852, 40979, 52301, 18615, 11457, 41106, 42699, 52132, 42161, 63772, 20457, 69670, 20476, 63782, 752, 49409, 63613, 65410, 65704, 11783, 437, 48978, 822, 18441, 63910, 69491, 41652, 18260, 52575, 41816, 65596, 52091, 52454, 18585, 64862, 38606, 11796, 800, 52130, 18385, 48997, 42812};
    vector<string> boxes = {"2126 67574 40974 43049 66916 54612 18824 40207 387", "53 27058 40234 63299 40757 47409 32769 40335 39224", " 45470 8939 53779 35000 20688 14873 36167 26076 61", "327 46207 49930 67499 15523 37344 61133 34769 4857", "1 1883 61846 13851 4748 29375 31824 44304 7397 401", "60 35795 36293 7977 68412 31098 25468 31989 62687 ", "17945 5508 44479 30610 6782 51796 38501 46107 4744", "3 33223 6932 30131 58001 45479 30729 2825 1084 548", "08 23476 60504 16073 955 14463 47689 59279 11073 5", "7335 10189 15618 14815 61350 28965 37930 8096 1366", "6 10942 32561 62665 24177 24432 39018 69389 26433 ", "25045 33410 27680 3767 14773 46675 51342 21163 176", "0 18862 14187 44975 43102 33045 54705 61660 13402 ", "59583 51402 57839 24544 53006 58396 18167 55928 14", "651 992 31701 29441 34156 58000 1461 51826 7587 57", "288 30399 22577 3713 38488 6546 64028 37807 58202 ", "2115 31475 16351 55349 25914 12667 1470 13695 3688", "4 28735 10681 27665 61663 32971 51964 9973 62390 5", "5009 1619 13974 4920 37843 35260 33838 34783 31167", " 68664 50054 34636 38885 66622 63997 31633 4657 27", "494 19154 68927 69569 20405 15987 33240 40128 1127", "4 28307 6215 57279 27862 49735 13947 4374 36848 47", "135 55294 22666 5557 23244 59044 21882 68778 15679", " 2926 62897 47180 54764 60067 4718 17027 43524 624", "24 14009 50400 67690 24629 48037 3365 60128 14063 ", "63313 58965 14623 58975 35292 23285 25943 37148 60", "920 47480 57087 67116 16520 8868 12108 14317 54947", " 6850 50401 26669 55499 60161 38963 29432 10220 17", "556 11095 58375 33324 34204 44738 37423 50689 2039", "5 33097 26257 48543 39933 14578 58798 32178 26204 ", "56446 68676 4156 11409 22512 5358 45979 34891 6165", "9 27692 48969 56525 32446 43888 50921 3610 4822 13", "234 6345 46663 69555 4962 32625 50122 36452 28200 ", "61414 8682"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> cranes = {37634, 4106, 39223, 4587, 5301, 159, 3296, 318, 5785, 4138, 6347, 326, 2065, 2072, 4708, 4980, 4547, 6120, 3553, 1426, 2099, 1873, 2053, 37613, 3192, 1155, 5859, 3051, 6047, 2688, 2690, 3597, 54395, 4552, 49034, 5774, 36860, 45524, 3190, 3266, 2978};
    vector<string> boxes = {"14721 28969 18448 8850 42113 15067 47335 35765 481", "60 26714 45053 50537 35282 52406 32161 31313 51107", " 13954 47238 50824 42900 24051 22928 27744 22145 4", "4478 25696 45571 34460 15599 50407 25526 33068 131", "21 17147 33597 15313 27741 35388 22849 33079 38290", " 13554 40802 43536 45745 26012 24806 18642 9487 23", "082 24730 23058 10643 23686 39378 13466 6918 31357", " 43661 44169 21669 54176 24933 31737 8019 31698 97", "69 11092 33941 28029 38438 23047 43794 36724 41480", " 34664 8979 34420 16626 42760 19519 21223 24142 46", "406 13865 11213 19624 41401 50849 54150 46854 4367", "3 22622 21213 17371 33453 9305 28936 26864 26341 9", "647 16013 37896 43708 14054 16788 29115 37968 3374", "1 43230 15853 30495 32656 11239 51991 43651 31684 ", "22774 18321 27701 36511 8934 40026 7955 19886 4891", "7 51133 54184 21324 32330 46395 41342 8543 18865 1", "6024 20021 7592 45203 42481 11357 10150 28484 4873", "9 30976 16291 17060 45809 35327 25766 49088 51583 ", "22098 53644 40173 34978 12737 54232 51138 28708 21", "771 38498 10267 21204 10196 51237 45960 52016 3516", "1 18988 39047 14087 13818 7387 40456 48170 24534 4", "0830 23466 49201 50145 39212 46846 32737 26070 481", "75 26138 40359 46983 34105 28498 43992 52092 54005", " 46368 22820 46859 21385 35614 28831 15716 34207 3", "6640 25327 32582 53575 24492 51925 51043 40538 275", "46 44799 18049 16258 18882 51559 18520 8977 38587 ", "39494 48727 23830 13942 45488 36220 29143 15896"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> cranes = {2364, 5646, 5085, 4855, 693, 1989, 1206, 3181, 3492, 4776, 766, 1380, 8502, 3324, 8296, 7226, 5744, 1648, 864, 4374, 6848, 5142, 2650, 6727, 4127, 1751, 6538, 6941, 4956, 481, 1907, 8267, 3758, 58192, 19772, 3197, 3558, 2637, 4435, 59199, 6250, 932, 2532, 56725, 622, 7052, 6774, 818, 5588};
    vector<string> boxes = {"28428 24731 45721 23357 20544 38880 32101 21598 44", "500 22667 46185 11968 49047 43906 41438 45988 2448", "6 36944 21951 45089 57264 22899 44270 55946 47731 ", "13989 16666 38959 13093 56546 59056 38013 24868 17", "038 50454 26899 28289 54890 52786 8628 48673 11041", " 25638 54211 19993 12378 46639 49760 14778 46172 1", "6350 21694 32428 53566 17949 18632 9329 50396 8649", " 30828 23984 47211 42617 45593 12491 42799 52404 1", "4509 10151 19168 55035 16317 37854 22424 9364 5821", "3 48755 58311 9148 33034 54676 14314 45341 35729 4", "7381 41312 55067 58570 12129 29987 34278 8695 1718", "8 26442 45517 38730 49485 39319 39313 39380 18697 ", "26127 56269 17119 48176 54806 43562 43151 13075 12", "003 32042 13393 15068 11645 58522 31629 55035 4940", "7 50986 18953 42474 53767 16691 42356 56687 12252 ", "51151 41694 52340 23899 47060 20013 43661 41226 13", "684 56268 14047 12356 57600 38226 42568 29291 1144", "5 28089 42528 50517 21412 44849 25642 40244 44317 ", "55991 22101 18900 20325 31987 20725 20113 45164 50", "166 44883 30368 9791 41853 29696 29577 25904 19881", " 40923 32748 55616 34424 55467 33425 9762 30587 50", "494 57249 44233 45554 30969 43673 50832 45177 3432", "5 57882 53704 21134 29902 19766 29660 13324 8889 3", "8821 32352 49031 33780 49024 33278 30951 30939 860", "0 33086 14519 18087 50418 15445 31842 48182 27636 ", "12218 21651 53281 47719 34396 39389 23062 35713 55", "706 32492 35799 22195 52737 28011 49291 43921 3201", "7 24775 55327 11202 45182 32504 39323 15638 26013 ", "16105 38058 21554 50287 51687 38891 20891 41224 31", "855 40559 43910 51785 52292 57432 26624 34838 4456", "5 10320 15937 40109 21229 27188 31180 30431 49907 ", "51261 45845 15913 56288 42469 32187 50250 25968 13", "444 9365 46856 31343 31565 31208 51077 48181 36750", " 51218 13494 34328 29417 30521 37154 17890 19843 1", "0961 37735 11868 33857 35676 43921"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 77;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> cranes = {44971, 1, 2117, 3005, 343, 2734, 46937, 36017, 34414, 1677, 5660, 8219, 8250, 5254, 1371, 44803, 1917, 1441, 23194, 2242, 24476, 4705, 34459, 3292, 36309, 1550, 3570, 53152, 682, 2753, 3186, 2515, 1821, 6044, 35521, 731, 4961, 233, 44789, 5647, 5993, 1941};
    vector<string> boxes = {"20172 19355 29052 38869 7744 39757 22281 16552 122", "27 29412 38709 10791 39985 50317 6241 44772 49249 ", "27056 11409 51737 27873 18131 6176 26218 30014 240", "63 22242 36876 29904 10673 41045 17924 16034 8866 ", "26607 22125 24118 46736 15671 12037 37395 31888 20", "031 25167 11316 32404 42721 37850 7336 32260 45138", " 44039 46805 10783 52244 46210 16261 36764 26647 4", "6071 24344 27063 8693 37768 13342 9628 40993 9153 ", "33679 12840 11456 8088 34473 42018 7603 26712 1102", "8 10224 34929 51466 33549 37594 28971 43395 52816 ", "20280 51914 52634 30241 21676 17926 15016 42446 27", "286 52999 6626 6221 35484 10274 51255 51038 17313 ", "40729 29366 36927 42082 29490 6476 33867 7120 3771", "4 17628 51733 45639 33663 30843 7066 15928 14985 4", "2110 41432 18909 10581 40689 16199 10338 45082 509", "94 37852 6749 39441 18858 30639 33081 41795 14538 ", "39849 33724 20588 26564 51785 39861 40424 30764 44", "357 22726 11204 11372 45198 44113 40591 47323 3929", "5 42963 52640 27634 39609 34032 6896 44269 40253 4", "2302 20262 27031 8990 38215 33017 34089 28556 2686", "5 43648 8083 7615 32539 50244 36713 11476 42105 23", "884 34122 21164 41656 36558 50375 52925 17402 2520", "8 18630 42899 22520 8313 9369 12184 43835 6922 344", "03 46466 7052 7864 26081 31960 27670 41629 36906 3", "6913 47926 10717 25352 25954 17565 40114 39501 390", "54 21660 7553 46357 21517 42450 34388 43542 45767 ", "32533 37148 12437 30497 11638 22933 25258"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> cranes = {5118, 6620, 27541, 3536, 4557, 2670, 6186, 224, 4345, 7303, 6554, 1364, 52760, 27260, 2394, 766, 1521, 4053, 1059, 6262, 7173, 1893, 5754, 3996, 3842, 4525, 10378, 7213, 1358, 2205, 1493, 3858, 9068, 7084, 499, 6118, 5201, 5662, 4766, 549, 9944, 40901, 2777, 1866, 8876, 3474, 53416, 47300, 2220, 1713};
    vector<string> boxes = {"11571 21896 31781 53409 16391 51116 13123 13742 47", "349 40115 19501 32087 23142 29943 36010 45653 4594", "5 53037 12454 19547 16215 30023 18457 13779 23738 ", "29711 27127 22748 52340 29211 14211 45399 24864 21", "633 35914 33462 52480 37776 43305 31126 36328 3103", "2 29954 11715 50165 52894 8131 47576 39679 8312 37", "590 25691 40633 39054 20855 38868 17260 44636 8471", " 40813 23667 49705 15023 26376 20387 52481 34382 3", "3673 23746 22833 31099 32269 31276 18257 25300 468", "67 41069 7333 13680 32478 13108 19356 48577 26279 ", "41640 26315 22576 50175 24195 8450 17172 43433 441", "79 42222 44428 36612 36101 23759 42669 21595 28281", " 33279 31939 25064 13237 19709 48066 13797 37490 3", "6576 31968 33125 22439 12552 47438 50825 19910 109", "40 15253 37285 48724 14726 43412 38386 44772 46741", " 14063 53171 12902 26151 33724 48270 37963 11344 5", "1764 16064 22573 28182 37401 15162 8326 34327 2244", "9 53280 35916 14801 13822 20817 49307 39998 45068 ", "32468 12580 31321 11042 40246 16104 52961 37456 21", "180 10587 51382 45421 27673 28599 21747 42780 4364", "2 41627 29993 33495 16925 32712 16071 26407 12239 ", "43182 7634 13128 30630 37851 10615 28638 20852 510", "59 29695 8676 30518 27569 10883 38441 40339 23510 ", "10906 47489 15217 34239 39186 28022 13275 36332 24", "488 46617 17987 8276 13622 47175 45442 19652 25158", " 47858 40037 20950 23500 18369 46924 17451 41490 4", "4109 34990 47290 24261 23199 45524 48084 34103 148", "68 22368 16772 30374"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> cranes = {1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8, 9, 1};
    vector<string> boxes = {"9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 ", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 ", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 ", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 ", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 ", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 ", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 ", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 ", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 ", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 ", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 ", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 ", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 ", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 ", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 ", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 ", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 ", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 ", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 ", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 ", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 ", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 ", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 ", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 ", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 ", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 ", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 ", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 ", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 ", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 ", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 ", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 ", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 ", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 ", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 ", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 ", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 ", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 ", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 ", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 ", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 ", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 ", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 ", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 ", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 ", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 ", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 ", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 ", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 ", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 1250;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> cranes = {1};
    vector<string> boxes = {"2"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> cranes = {1};
    vector<string> boxes = {"5"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> cranes = {100, 1000};
    vector<string> boxes = {"6 9 8 5 9 2 4 1 8 3 9 3 8 7 8 6 8 9 4 1 1 7 6 1 5", "8 7 6 9 6 3 1 3 1 7 5 9 2 8 4 3 7 3 4 7 3 4 8 3 2", "6 6 2 7 4 8 3 4 8 5 5 3 6 7 1 2 5 6 5 5 6 1 6 7 8", "6 4 7 4 3 1 6 1 2 1 6 8 6 9 2 7 4 3 2 3 2 9 4 7 9", "1 3 5 4 7 4 1 3 3 4 9 9 6 2 7 7 3 4 4 7 2 7 9 7 9", "9 4 5 9 2 9 8 4 8 8 2 4 6 8 7 5 3 7 7 6 9 8 3 3 4", "6 8 3 8 7 9 1 3 7 9 5 6 4 9 3 4 2 1 3 6 5 3 6 5 7", "1 7 7 4 5 2 1 9 2 4 3 7 9 2 9 3 8 7 2 6 1 1 3 8 2", "9 3 9 1 9 3 5 3 2 1 6 2 4 3 5 6 1 2 7 7 5 4 2 9 6", "1 4 4 7 6 3 9 6 9 2 5 7 7 8 8 9 6 2 3 3 9 7 2 5 1", "3 7 9 4 7 3 2 9 3 3 8 1 4 4 3 4 9 4 5 3 3 1 2 9 9", "3 9 9 7 5 6 1 1 7 1 8 8 2 9 8 8 8 7 7 5 9 3 4 9 9", "6 1 2 1 6 8 6 8 8 9 5 7 2 1 3 4 8 5 2 2 5 5 4 8 5", "3 4 5 9 5 9 2 9 4 7 2 6 8 9 6 3 2 1 2 4 9 6 3 3 1", "8 2 4 2 5 5 4 9 2 2 1 3 5 9 3 6 4 7 1 9 1 9 3 4 2", "7 2 6 9 6 5 6 4 3 6 8 9 5 9 4 4 9 1 9 8 9 9 2 4 6", "8 6 9 5 3 9 7 3 9 5 6 5 9 7 5 8 8 3 3 7 8 1 1 9 1", "9 6 8 6 3 6 8 9 9 4 6 6 2 2 9 2 3 6 6 5 5 6 6 5 7", "3 2 9 5 6 5 2 3 8 4 2 6 2 7 6 5 2 7 2 1 2 6 5 3 1", "6 2 7 1 7 8 5 1 5 4 3 7 5 5 6 8 9 9 5 7 9 3 5 8 9", "5 8 2 8 9 5 5 1 4 6 4 2 1 3 3 2 9 8 6 6 4 2 5 2 5", "3 3 4 4 5 9 8 8 3 7 6 9 2 2 9 7 1 7 7 2 7 8 4 2 2", "7 2 5 5 1 6 7 7 4 2 7 7 2 4 9 9 8 6 1 4 3 3 7 1 2", "3 8 5 4 3 3 7 3 8 4 8 2 6 6 3 7 9 3 8 6 7 5 6 1 3", "4 5 8 7 4 6 9 6 7 3 5 5 1 2 5 4 8 9 9 3 4 5 7 2 6", "1 6 4 5 1 2 7 3 6 9 8 4 9 7 3 1 2 6 8 3 3 3 8 1 2", "6 6 3 9 7 2 3 2 4 7 8 8 4 1 4 2 4 9 3 3 6 1 2 5 1", "5 7 8 7 4 9 1 2 2 6 4 3 2 4 6 1 3 2 8 6 8 4 4 2 1", "7 5 2 8 5 4 1 5 6 7 7 9 9 2 1 6 2 5 4 7 6 1 6 7 5", "9 4 8 4 6 8 1 7 2 3 7 4 5 2 9 9 6 9 3 6 4 6 8 6 9", "3 6 4 1 8 3 5 7 8 1 1 2 9 5 5 1 4 4 6 9 9 6 3 4 2", "7 4 1 1 2 9 4 1 2 5 3 6 3 9 4 3 9 8 7 3 1 2 7 2 5", "1 3 9 7 3 1 8 7 2 8 7 3 2 8 4 7 9 3 5 2 7 6 5 2 9", "3 1 6 3 4 6 3 7 8 6 9 2 4 5 1 8 5 8 7 6 8 4 9 8 1", "4 2 6 5 8 6 1 7 6 4 1 5 4 2 8 4 2 8 4 4 6 7 5 9 4", "1 5 3 6 1 5 1 6 2 2 8 5 3 7 2 3 9 6 1 6 5 7 9 8 7", "5 1 5 1 3 7 3 3 7 2 9 1 1 3 5 7 4 8 9 9 7 6 3 1 6", "8 3 3 7 7 8 8 9 5 4 7 8 7 5 4 4 3 7 7 4 4 7 7 9 3", "3 2 3 2 5 7 2 8 5 8 8 6 2 6 7 6 2 7 5 7 5 1 9 5 5", "7 2 3 2 1 5 5 6 1 3 8 9 4 3 9 2 6 4 7 7 5 7 3 1 1", "1 8 4 8 1 9 7 4 2 7 2 9 7 3 9 8 1 8 7 8 6 4 2 3 7", "2 4 2 2 1 1 2 4 5 3 8 1 5 5 9 4 8 8 4 6 9 9 2 2 2", "3 6 4 6 2 1 6 3 9 5 3 9 7 1 5 9 1 4 2 9 2 2 2 3 9", "8 4 6 6 2 1 2 6 1 4 3 7 3 7 1 2 1 5 1 2 4 6 1 8 2", "9 8 8 1 6 3 4 6 2 5 5 6 5 1 8 9 3 1 6 3 1 8 3 1 3", "4 8 7 1 9 2 8 1 9 5 7 6 6 1 1 5 6 4 1 7 1 1 6 3 3", "1 2 5 1 1 5 7 4 2 6 2 4 9 6 3 5 9 8 4 5 4 3 9 5 6", "5 4 4 2 4 4 7 6 1 8 5 7 4 5 4 8 8 8 5 5 9 4 5 1 1", "1 7 4 7 2 4 6 5 8 4 7 5 8 1 4 5 5 9 7 3 7 5 2 6 8", "5 6 7 7 2 5 6 5 7 1 1 1 4 9 8 7 5 9 4 1 9 7 1 1 6"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 601;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> cranes = {5};
    vector<string> boxes = {"1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 308;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> cranes = {5, 15};
    vector<string> boxes = {"5", "15", "45"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> cranes = {3, 6, 56, 12, 432, 12, 343, 43};
    vector<string> boxes = {"1 23 4", "12 4 2", "43 2 5", "6 4"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
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
    vector<int> cranes = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 22};
    vector<string> boxes = {"2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 862;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> cranes = {100, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<string> boxes = {"9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 1201;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> cranes = {2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<string> boxes = {"2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 1250;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> cranes = {1, 22};
    vector<string> boxes = {"2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2", ""};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 457;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> cranes = {3};
    vector<string> boxes = {"1", "1"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> cranes = {9};
    vector<string> boxes = {"10"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> cranes = {1};
    vector<string> boxes = {"1 1 1 1 1", "1234"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> cranes = {1};
    vector<string> boxes = {"10"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> cranes = {1, 3};
    vector<string> boxes = {"1 2 2 3 3 3"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> cranes = {4, 2};
    vector<string> boxes = {"1 2 3 4"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> cranes = {56, 114, 979, 120, 120, 87, 480};
    vector<string> boxes = {"1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 172;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> cranes = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2};
    vector<string> boxes = {"2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 ", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 1250;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> cranes = {9, 2, 4, 11, 7, 13, 10, 12, 1, 4, 1, 5, 5, 4, 10, 7, 15, 13, 15, 11, 9, 1, 9, 9, 8, 10, 15, 15, 15, 12, 15, 15, 13, 11, 2, 11, 15, 11, 7, 7, 7, 15, 4, 3, 3, 13, 9, 9, 10, 8};
    vector<string> boxes = {"6 1 4 7 2 1 7 4 3 1 7 2 6 6 5 8 7 6 7 10 4 8 5 6 ", "3 6 5 8 5 5 4 1 8 9 7 9 9 5 4 2 5 10 3 1 7 9 10 3 ", "5 5 5 5 8 7 4 2 8 6 10 7 3 2 8 9 6 8 5 2 9 6 10 8 ", "6 4 9 9 4 2 9 10 7 5 4 4 4 9 7 1 5 9 9 9 10 8 8 7 ", "3 9 10 4 7 9 1 3 2 1 6 2 2 1 9 6 1 7 5 7 3 6 9 7 ", "8 1 5 9 1 5 3 10 7 2 1 5 3 3 3 1 6 6 3 10 1 3 9 4 ", "2 8 5 4 2 5 7 10 5 3 3 7 5 2 3 9 9 10 3 9 9 9 7 9 ", "4 9 4 4 4 9 1 5 8 7 9 10 1 7 9 8 10 1 4 4 4 8 4 3 ", "7 6 3 7 6 9 8 10 7 1 5 2 1 5 9 8 1 9 7 3 5 8 10 4 ", "4 2 2 10 1 6 7 8 8 5 1 7 5 8 5 9 6 9 3 7 1 7 7 5 ", "2 2 8 1 5 1 9 6 2 7 7 3 2 10 7 5 9 1 9 2 1 3 3 10 ", "2 6 6 5 10 9 4 9 6 3 3 3 8 1 4 5 7 4 7 4 4 5 5 4 ", "10 8 3 6 9 10 1 3 5 8 7 6 8 2 4 4 4 9 6 2 1 9 8 7 ", "8 7 4 8 7 2 6 1 7 6 1 9 2 3 3 7 10 2 1 5 3 8 5 1 ", "4 3 9 1 4 8 1 1 4 5 10 3 8 5 3 6 3 5 5 4 9 7 1 9 ", "10 3 3 4 2 9 4 5 3 3 5 6 2 8 6 8 2 7 10 9 2 4 4 4 ", "4 8 5 2 2 4 1 4 3 2 8 6 7 6 5 3 3 2 8 3 5 2 7 6 ", "8 9 6 10 3 8 4 7 5 8 10 8 3 3 2 7 4 1 3 2 6 7 6 1 ", "1 4 5 7 7 1 3 6 9 10 6 1 7 1 9 4 8 9 3 2 1 6 9 6 ", "1 7 10 3 2 8 8 10 8 7 3 8 2 6 9 9 5 6 7 6 7 9 5 9 ", "9 4 9 8 6 3 5 6 1 6 8 4 3 8 3 2 4 5 10 5 2 10 6 8 ", "5 2 3 3 2 7 3 1 3 3 10 8 5 4 6 7 2 5 1 4 2 3 8 8 ", "2 7 4 10 4 4 5 7 2 6 7 2 8 3 3 10 3 9 2 3 5 8 9 7 ", "4 8 8 3 4 8 3 6 4 8 7 9 2 4 7 5 1 4 6 9 6 1 10 10 ", "9 1 3 5 10 1 2 3 1 1 7 4 10 1 9 4 9 8 4 2 1 1 6 1"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> cranes = {3};
    vector<string> boxes = {"2 5 2 4 7"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> cranes = {1000000, 980072, 549835, 74493, 321441, 49041, 167633, 287963, 857421, 781097, 343750, 464782, 744506, 267456, 240692, 309417, 793823, 801696, 296569, 50903, 187683, 728027, 305328, 327545, 451263, 650970, 412872, 322998, 668701, 912475, 310699, 311065, 474304, 742889, 407775, 264526, 850585, 992126, 262329, 684936, 264007, 847015, 54687, 309234, 170227, 441253, 382171, 849731, 419281, 764251};
    vector<string> boxes = {"364898 ", "23345 ", "261627 ", "962066 ", "946472 ", "241485 ", "595611 ", "364166 ", "420654 ", "99822 ", "211090 ", "846496 ", "286224 ", "668884 ", "695953 ", "747436 ", "721923 ", "330963 ", "647888 ", "540008 ", "10314 ", "633361 ", "739929 ", "760253 ", "377807 ", "893432 ", "530242 ", "703125 ", "531860 ", "712005 ", "546997 ", "292205 ", "676696 ", "50964 ", "680267 ", "29602 ", "288909 ", "31890 ", "411651 ", "432128 ", "433959 ", "111358 ", "912902 ", "859924 ", "904815 ", "789550 ", "545166 ", "144073 ", "964569 ", "508483"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> cranes = {5};
    vector<string> boxes = {"5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5", "5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5", "5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5", "5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5", "5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5", "5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5", "5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5", "5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5", "5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5", "5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5", "5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5", "5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5", "5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5", "5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5", "5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5", "5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5", "5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5", "5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5", "5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5", "5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5", "5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5", "5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5", "5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5", "5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5", "5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5", "5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5", "5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5", "5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5", "5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5", "5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5", "5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5", "5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5", "5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5", "5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5", "5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5", "5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5", "5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5", "5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5", "5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5", "5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5", "5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5", "5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5", "5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5", "5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5", "5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5", "5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5", "5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5", "5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5"};
    ShipLoading* pObj = new ShipLoading();
    clock_t start = clock();
    int result = pObj->minimumTime(cranes, boxes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=15117368&rd=13506&pm=9933
********************************************************************************
#include <iostream>
#include <sstream>
#include <vector>
#include <map>
#include <math.h>
#include <algorithm>
#include <numeric>
#include <bitset>
#include <stack>
#include <queue>
#include <set>
using namespace std;
 
int dr[]={0,1,0,-1,1,1,-1,-1};
int dc[]={1,0,-1,0,1,-1,1,-1};
#define zmax(a,b) (((a)>(b))?(a):(b))
#define zmin(a,b) (((a)>(b))?(b):(a))
#define zabs(a) (((a)>=0)?(a):(-(a)))
#define iif(c,t,f) ((c)?(t):(f))
template<class A, class B> A cvt(B x) {stringstream s;s<<x;A r;s>>r;return r;}
 
class ShipLoading
{
public:
int minimumTime(vector <int> cranes, vector <string> boxes)
{
  vector<int> b;
  string bs = accumulate(boxes.begin(), boxes.end(), string());
  istringstream sin(bs);
  int x;
  while(sin >> x) b.push_back(x);
  
  sort(b.begin(), b.end());
  sort(cranes.begin(), cranes.end());
  if(b.back() > cranes.back()) return -1;
  
  int ret = 0;
  while(b.size()) {
    for(int i = 0; i < cranes.size(); i++) {
      vector<int>::iterator it = upper_bound(b.begin(), b.end(), cranes[i]);
      if(it == b.begin()) continue;
      it--;
      b.erase(it);
    }
    ret++;
  }
  return ret;
}
};
 
 
//Powered by [KawigiEdit] 2.0

********************************************************************************
*******************************************************************************/