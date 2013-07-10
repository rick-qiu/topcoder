/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=9822
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

class TournamentJudging {
public:
    int getPoints(vector<int> rawScores, vector<int> conversionFactor);
};

int TournamentJudging::getPoints(vector<int> rawScores, vector<int> conversionFactor) {
    int ret;
    return ret;
}


int test0() {
    vector<int> rawScores = {10, 20, 30};
    vector<int> conversionFactor = {10, 10, 5};
    TournamentJudging* pObj = new TournamentJudging();
    clock_t start = clock();
    int result = pObj->getPoints(rawScores, conversionFactor);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> rawScores = {8, 16, 32};
    vector<int> conversionFactor = {10, 10, 5};
    TournamentJudging* pObj = new TournamentJudging();
    clock_t start = clock();
    int result = pObj->getPoints(rawScores, conversionFactor);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> rawScores = {60, 59};
    vector<int> conversionFactor = {24, 24};
    TournamentJudging* pObj = new TournamentJudging();
    clock_t start = clock();
    int result = pObj->getPoints(rawScores, conversionFactor);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> rawScores = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> conversionFactor = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    TournamentJudging* pObj = new TournamentJudging();
    clock_t start = clock();
    int result = pObj->getPoints(rawScores, conversionFactor);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> rawScores = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    vector<int> conversionFactor = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    TournamentJudging* pObj = new TournamentJudging();
    clock_t start = clock();
    int result = pObj->getPoints(rawScores, conversionFactor);
    clock_t end = clock();
    delete pObj;
    int expected = 50000000;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> rawScores = {0};
    vector<int> conversionFactor = {1};
    TournamentJudging* pObj = new TournamentJudging();
    clock_t start = clock();
    int result = pObj->getPoints(rawScores, conversionFactor);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> rawScores = {47, 42, 37, 30, 27, 21, 18};
    vector<int> conversionFactor = {1, 2, 3, 4, 5, 6, 7};
    TournamentJudging* pObj = new TournamentJudging();
    clock_t start = clock();
    int result = pObj->getPoints(rawScores, conversionFactor);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> rawScores = {0, 1000000, 5000, 1000000};
    vector<int> conversionFactor = {1, 2, 1000000, 4};
    TournamentJudging* pObj = new TournamentJudging();
    clock_t start = clock();
    int result = pObj->getPoints(rawScores, conversionFactor);
    clock_t end = clock();
    delete pObj;
    int expected = 750000;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> rawScores = {930040, 691096, 635201, 745836, 237911, 884667, 758843, 516053, 640232, 201337, 488677, 367907, 518957, 895719, 511959, 179175, 381886, 88868, 454433, 5176, 594847, 702273, 954703, 465446, 20669, 722584, 664890, 171922, 702667, 512828, 978001, 632707, 722423, 131700, 897042, 960334, 16367, 174383, 476386, 175098, 375720, 483562, 543005, 413176, 897781, 573464, 592351, 798166, 662332, 565284};
    vector<int> conversionFactor = {803527, 776092, 268981, 759957, 241874, 806863, 999171, 906997, 497282, 702306, 420926, 477085, 336328, 660337, 126506, 750847, 621730, 661314, 925858, 616125, 353896, 819583, 100546, 898815, 233368, 515435, 990365, 344044, 313751, 171088, 426809, 117277, 947179, 695789, 393585, 705404, 502652, 392755, 612400, 999933, 95061, 549677, 993369, 947740, 210013, 636227, 698587, 348095, 297540, 140796};
    TournamentJudging* pObj = new TournamentJudging();
    clock_t start = clock();
    int result = pObj->getPoints(rawScores, conversionFactor);
    clock_t end = clock();
    delete pObj;
    int expected = 72;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> rawScores = {649394, 958403, 97150, 64709, 708721, 611975, 571987, 569889, 924965, 260096, 996342, 559795, 723884, 208848, 952671, 428795, 228080, 344672, 558219, 744459, 956968, 106484, 735983, 903764, 833012, 889853, 119099, 698136, 703936, 777358, 178242, 871829, 254259, 275393, 455037, 962980, 405867, 27024, 51368, 330831, 805620, 47709, 409125, 529504, 256557, 361795, 958299, 484638, 224967, 516518};
    vector<int> conversionFactor = {747797, 700724, 142619, 2246, 122847, 493452, 892922, 243556, 192380, 597489, 537765, 888229, 469842, 792351, 165194, 441501, 757035, 87765, 470125, 324915, 936988, 275857, 373744, 346492, 322228, 148366, 709860, 281937, 151433, 452552, 316438, 899229, 153276, 975408, 901475, 276122, 468859, 794396, 36030, 661238, 908236, 573794, 65819, 894429, 366144, 231012, 335929, 639530, 318777, 322405};
    TournamentJudging* pObj = new TournamentJudging();
    clock_t start = clock();
    int result = pObj->getPoints(rawScores, conversionFactor);
    clock_t end = clock();
    delete pObj;
    int expected = 119;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> rawScores = {253651, 113181, 853471, 118254, 435058, 995, 344653, 233733, 670156, 796018, 67425, 568413, 466316, 42618, 987247, 259311, 510824, 298010, 294101, 688676, 204639, 385043, 754418, 615961, 267896, 501942, 468514, 905642, 337114, 307820, 386644, 109264, 939501, 758615, 227519, 374559, 278109, 572172, 126791, 948265, 886689, 194217, 35176, 353005, 755335, 22422, 612316, 266158, 320432, 424916};
    vector<int> conversionFactor = {473731, 44879, 811306, 229321, 178737, 79445, 248627, 648523, 503466, 586709, 473417, 408283, 213259, 412925, 167638, 442063, 305625, 962601, 532037, 433453, 911900, 419380, 145551, 947469, 290072, 900974, 487132, 903882, 684931, 808934, 845895, 158661, 370164, 657200, 387982, 548900, 252997, 152960, 713774, 272814, 739669, 187191, 681096, 952927, 116467, 365085, 911341, 422091, 327685, 443377};
    TournamentJudging* pObj = new TournamentJudging();
    clock_t start = clock();
    int result = pObj->getPoints(rawScores, conversionFactor);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> rawScores = {754867, 377870, 517096, 219168, 667323, 417361, 705892, 87589, 102283, 31547, 451272, 260540, 400774, 624912, 165047, 466530, 876407, 317746, 697331, 666896, 574251, 400995, 864523, 43825, 517024, 227903, 953989, 938476, 72143, 913911, 310640, 345509, 810281, 827736, 564677, 996103, 763596, 789069, 602191, 865880, 820616, 53462, 644919, 739889, 678375, 809966, 206419, 73280, 646211, 903750};
    vector<int> conversionFactor = {741223, 739300, 306641, 606043, 783899, 340714, 352299, 256191, 280525, 942591, 688210, 108582, 288820, 499337, 937733, 371156, 495995, 218005, 160380, 614770, 85274, 981777, 668851, 247256, 721861, 348143, 575580, 445885, 421994, 223206, 867622, 679568, 962505, 690614, 801962, 262755, 31327, 154260, 518945, 828203, 613203, 723507, 936785, 902022, 222843, 390869, 789529, 235190, 608873, 949909};
    TournamentJudging* pObj = new TournamentJudging();
    clock_t start = clock();
    int result = pObj->getPoints(rawScores, conversionFactor);
    clock_t end = clock();
    delete pObj;
    int expected = 89;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> rawScores = {209721, 447383, 516900, 456730, 685884, 381994, 32204, 130804, 320368, 772389, 997973, 517417, 251534, 688385, 319165, 513466, 237562, 472013, 549173, 65482, 85104, 272564, 1283, 503948, 12419, 909701, 293221, 246342, 517330, 760491, 613522, 245550, 207873, 648922, 702281, 893757, 30915, 252984, 543060, 869783, 25372, 59532, 387199, 276906, 266416, 706364, 308871, 503978, 696877, 858044};
    vector<int> conversionFactor = {571044, 301040, 132003, 90429, 806404, 144501, 682, 617648, 908539, 36160, 895152, 522536, 282135, 104340, 171693, 502216, 516128, 720505, 755630, 60050, 590965, 298286, 636430, 495344, 576336, 903178, 202901, 885239, 407972, 416950, 260290, 495368, 717989, 392293, 585796, 40744, 53145, 102830, 658391, 961683, 655341, 553542, 570, 453827, 174233, 172262, 956043, 690361, 409118, 228024};
    TournamentJudging* pObj = new TournamentJudging();
    clock_t start = clock();
    int result = pObj->getPoints(rawScores, conversionFactor);
    clock_t end = clock();
    delete pObj;
    int expected = 830;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> rawScores = {998216, 525134, 901604, 493423, 618496, 804378, 213493, 502230, 729629, 630440, 762508, 224340};
    vector<int> conversionFactor = {349615, 673169, 328206, 390359, 726313, 947387, 565101, 204347, 602727, 634995, 204917, 56553};
    TournamentJudging* pObj = new TournamentJudging();
    clock_t start = clock();
    int result = pObj->getPoints(rawScores, conversionFactor);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> rawScores = {892232, 527936, 531932, 300939, 755113, 797177, 817654, 798746, 217279, 829576, 417241, 540156, 561568, 437971, 788285, 192007, 718978, 12624, 58373, 909369, 857918, 965094, 152170, 804607, 46815, 355251, 924463, 198678, 77001};
    vector<int> conversionFactor = {498339, 524567, 487771, 27285, 56857, 790418, 300607, 372261, 125850, 100238, 107206, 473060, 35218, 648519, 34946, 990784, 436874, 228459, 710874, 967638, 804290, 620484, 826608, 770479, 772758, 149315, 334472, 645730, 591101};
    TournamentJudging* pObj = new TournamentJudging();
    clock_t start = clock();
    int result = pObj->getPoints(rawScores, conversionFactor);
    clock_t end = clock();
    delete pObj;
    int expected = 101;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> rawScores = {721579, 88437, 56126, 209311, 632680, 630250, 516482, 932036, 1550, 159805};
    vector<int> conversionFactor = {550271, 110700, 633418, 101840, 275570, 668364, 92623, 228795, 413174, 319848};
    TournamentJudging* pObj = new TournamentJudging();
    clock_t start = clock();
    int result = pObj->getPoints(rawScores, conversionFactor);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> rawScores = {215494, 456230, 538088, 502434, 745556, 204255, 354688, 390133, 794885, 887122, 630211, 401821, 461747, 358021, 34500, 610497, 393002, 485035, 612047, 552807, 33670, 239176, 185512, 653145, 32040, 371184, 744432, 260424, 783331, 582005, 973952, 517324};
    vector<int> conversionFactor = {39022, 513971, 539863, 784813, 235380, 894978, 692686, 31537, 299905, 324177, 433484, 279208, 199760, 984858, 889745, 593500, 469912, 20128, 663951, 505237, 777561, 367819, 675106, 810564, 740050, 421245, 588712, 41806, 519935, 563292, 77376, 558956};
    TournamentJudging* pObj = new TournamentJudging();
    clock_t start = clock();
    int result = pObj->getPoints(rawScores, conversionFactor);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> rawScores = {133065, 341809, 827778, 544509, 552731, 375955, 843075, 875365, 325952, 121887, 593017, 310450, 529695, 185172, 779984};
    vector<int> conversionFactor = {550254, 850544, 803075, 327815, 734714, 478180, 138378, 474763, 415776, 727089, 32920, 935711, 806733, 110295, 11018};
    TournamentJudging* pObj = new TournamentJudging();
    clock_t start = clock();
    int result = pObj->getPoints(rawScores, conversionFactor);
    clock_t end = clock();
    delete pObj;
    int expected = 106;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> rawScores = {760121, 870920, 745354, 304629, 423651, 121308, 666204, 299015, 447261, 306590, 892032, 276210, 836285, 595703, 574693, 385835, 962836, 376379, 712916, 697441, 371411, 368067, 689202, 304222, 611713, 721449, 756816, 417805, 348504, 767427, 335381, 108624, 638347, 80735, 413254, 61997, 720543, 79457, 879512, 686303, 386047, 290042, 962514, 740831, 885746, 537206, 126665};
    vector<int> conversionFactor = {367771, 433519, 359212, 66343, 322533, 245197, 272380, 627322, 858271, 994985, 384173, 794428, 344235, 152041, 647284, 970073, 307399, 245831, 901064, 370348, 966951, 982031, 250574, 653715, 886060, 57523, 134048, 626925, 945083, 189436, 271233, 829205, 622955, 630444, 411899, 945487, 875641, 684279, 89160, 250263, 679263, 989684, 561042, 539849, 141724, 208325, 26273};
    TournamentJudging* pObj = new TournamentJudging();
    clock_t start = clock();
    int result = pObj->getPoints(rawScores, conversionFactor);
    clock_t end = clock();
    delete pObj;
    int expected = 95;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> rawScores = {452122, 927118, 335231, 936944, 907627, 102543, 589568, 311181, 159897, 723205, 937068, 621496, 912547, 208118, 450174, 52472, 355748, 861874, 514393, 748025, 545795, 121029, 515160};
    vector<int> conversionFactor = {742699, 110992, 76377, 798899, 252716, 801053, 825172, 218190, 771560, 752507, 554011, 709017, 178225, 173110, 816540, 490001, 333379, 58110, 945054, 955082, 489115, 671339, 405990};
    TournamentJudging* pObj = new TournamentJudging();
    clock_t start = clock();
    int result = pObj->getPoints(rawScores, conversionFactor);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> rawScores = {27075, 784967, 573548, 775100, 330761, 694578, 290260, 591147, 323774, 883719, 389799, 574598, 202019, 214517, 309851, 972443, 966354, 380336, 198308, 144315, 553363, 13741, 151957, 886288, 589378, 96667, 359206};
    vector<int> conversionFactor = {79297, 768826, 765405, 138723, 796893, 550552, 230298, 90033, 399135, 443182, 898507, 990416, 767058, 299709, 380596, 860000, 501963, 112298, 687484, 475777, 80155, 68978, 191310, 742588, 139933, 723383, 895022};
    TournamentJudging* pObj = new TournamentJudging();
    clock_t start = clock();
    int result = pObj->getPoints(rawScores, conversionFactor);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> rawScores = {312533, 508280, 903254, 908594, 276273, 667053, 563809, 589842, 734319, 792573, 197009, 650844, 752912, 94436, 640017, 37025, 394081};
    vector<int> conversionFactor = {538840, 897526, 897491, 651137, 101361, 889619, 247644, 170338, 80929, 506583, 826622, 804311, 917956, 370889, 634226, 426816, 274571};
    TournamentJudging* pObj = new TournamentJudging();
    clock_t start = clock();
    int result = pObj->getPoints(rawScores, conversionFactor);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> rawScores = {220637, 459309, 105855, 810479, 712127, 416927, 7487, 362971, 688339, 620423, 521487, 725364, 533003, 58974, 139600, 428747, 226949, 240899, 835598, 991766, 928096, 433362, 497738, 754553, 754282, 415322, 125056, 387734, 359686, 398813, 448280, 580323, 376621, 72635, 390801, 88748, 489562, 916788};
    vector<int> conversionFactor = {453196, 696777, 55806, 975267, 423429, 588955, 552529, 80309, 19594, 297279, 322198, 372556, 289673, 250775, 806446, 305001, 522326, 560998, 238284, 648413, 466128, 598383, 565422, 914694, 179335, 942440, 987335, 88422, 548160, 994986, 522958, 1355, 691762, 578763, 492973, 631542, 167717, 561853};
    TournamentJudging* pObj = new TournamentJudging();
    clock_t start = clock();
    int result = pObj->getPoints(rawScores, conversionFactor);
    clock_t end = clock();
    delete pObj;
    int expected = 512;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> rawScores = {702925};
    vector<int> conversionFactor = {375483};
    TournamentJudging* pObj = new TournamentJudging();
    clock_t start = clock();
    int result = pObj->getPoints(rawScores, conversionFactor);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> rawScores = {74479, 663267, 799055, 397896, 485896, 839465, 475593, 723848, 486430, 941025, 321484, 569208, 373236, 17943, 28606, 359582, 105202, 576753, 353990, 146248, 576618, 563298, 724503, 586687, 194368, 891470, 147434, 905303, 112893, 41307, 973999, 187372, 704575, 291553, 103767, 708970, 131017, 579361, 432817, 135946, 38884, 272801, 705154, 412120, 290744, 733760, 290202, 914446, 310512, 162691};
    vector<int> conversionFactor = {62761, 406650, 726815, 304466, 994315, 922327, 713887, 660184, 346040, 826970, 701536, 320153, 532622, 924394, 611791, 637290, 150110, 259632, 734674, 584265, 395736, 774549, 374296, 101878, 704314, 666834, 353199, 994950, 99356, 665156, 157794, 678469, 588157, 400961, 982934, 98824, 323287, 213172, 275359, 185678, 40141, 493246, 22182, 572762, 933991, 150324, 210051, 84101, 409955, 461076};
    TournamentJudging* pObj = new TournamentJudging();
    clock_t start = clock();
    int result = pObj->getPoints(rawScores, conversionFactor);
    clock_t end = clock();
    delete pObj;
    int expected = 104;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> rawScores = {321724, 233637, 41208, 422051, 455697, 224668, 293136, 449459, 841073, 474734, 124411, 518171, 61961, 525353, 17464};
    vector<int> conversionFactor = {161957, 365982, 232476, 953667, 68012, 788968, 446913, 90193, 361730, 380903, 756869, 88132, 465003, 683175, 549208};
    TournamentJudging* pObj = new TournamentJudging();
    clock_t start = clock();
    int result = pObj->getPoints(rawScores, conversionFactor);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> rawScores = {3820, 299853, 690888, 944371, 755550, 434055, 237507, 723508, 275128, 712241, 366418, 311798, 292701, 891772, 847763, 971204, 775422, 596684, 924497};
    vector<int> conversionFactor = {843486, 385949, 372306, 450031, 264030, 269560, 206899, 352161, 734563, 406425, 417720, 384281, 411642, 718903, 593011, 873481, 992727, 27584, 628790};
    TournamentJudging* pObj = new TournamentJudging();
    clock_t start = clock();
    int result = pObj->getPoints(rawScores, conversionFactor);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> rawScores = {301687, 340832, 599564, 131985, 152032, 9834, 979748, 123236, 785256, 576431, 47732, 628286, 961552, 936867, 78037, 225552, 206114, 801835, 95073, 458051, 207728, 512310, 841169, 135942, 747900, 952173, 8527, 257537, 978732, 155617, 490683, 798919, 496449, 608746, 930904, 166981, 618580, 429150, 290217, 922335, 5580};
    vector<int> conversionFactor = {857465, 551743, 487331, 312087, 147516, 231350, 519916, 950187, 843882, 495012, 675635, 874134, 854388, 812723, 623288, 806774, 339644, 881520, 786743, 495355, 890245, 103125, 510140, 16260, 552064, 677419, 636354, 981713, 485270, 558706, 505405, 342734, 626800, 992735, 654820, 774316, 740436, 691088, 240854, 100670, 702451};
    TournamentJudging* pObj = new TournamentJudging();
    clock_t start = clock();
    int result = pObj->getPoints(rawScores, conversionFactor);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> rawScores = {974735, 556264, 245487, 596699, 362582, 583674, 994700, 666131, 595978, 401883, 768599, 623231, 417811, 320468, 298964, 570819, 301488, 301914, 646161, 325087, 161311, 272122, 834318, 332523, 563740, 573231, 21662, 804349, 673900, 242279, 720175, 648634, 798543, 965662, 763832, 161124, 67835, 277031};
    vector<int> conversionFactor = {346093, 665418, 679665, 115922, 288821, 98481, 954167, 105995, 186355, 774124, 408438, 832934, 99485, 86318, 106313, 933932, 419018, 186710, 25166, 959157, 991609, 217070, 201746, 712996, 867423, 1172, 196296, 148570, 680560, 264802, 425677, 26653, 446572, 105341, 658926, 251744, 720173, 613092};
    TournamentJudging* pObj = new TournamentJudging();
    clock_t start = clock();
    int result = pObj->getPoints(rawScores, conversionFactor);
    clock_t end = clock();
    delete pObj;
    int expected = 612;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> rawScores = {905017, 903093, 798865, 255718, 1486, 885097, 360043, 452697, 303850, 65107, 477139, 262766, 56019, 693980, 463960, 285606, 77953, 982197, 480855, 744259, 661556, 262437, 169095, 205169, 226332, 791345, 863136, 477271, 510319, 992921, 351215, 933835, 896014, 150080, 189552, 415999, 35176, 68095, 387196, 339026};
    vector<int> conversionFactor = {134159, 865726, 120357, 190953, 77646, 585473, 993447, 673340, 568112, 475884, 417604, 747662, 255826, 587543, 470217, 482340, 379175, 335345, 960597, 407331, 846268, 829295, 342014, 260758, 980520, 48861, 194651, 533293, 117833, 581877, 390280, 251991, 963954, 510636, 959296, 41599, 96108, 952742, 714938, 180571};
    TournamentJudging* pObj = new TournamentJudging();
    clock_t start = clock();
    int result = pObj->getPoints(rawScores, conversionFactor);
    clock_t end = clock();
    delete pObj;
    int expected = 78;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> rawScores = {131370, 444209, 198812, 717991, 914381, 198762, 614455, 766187, 675983, 21237, 610913, 504419, 880354, 388652, 1433, 929022, 582390, 52124, 564285, 681823, 441841, 814250, 645590, 951849, 290435, 686170, 564608};
    vector<int> conversionFactor = {761080, 919592, 262548, 222408, 568485, 707132, 939562, 804920, 621932, 139054, 420529, 388428, 815495, 959820, 517544, 837582, 841124, 423769, 840188, 287640, 524644, 892439, 851989, 207395, 851321, 184681, 854099};
    TournamentJudging* pObj = new TournamentJudging();
    clock_t start = clock();
    int result = pObj->getPoints(rawScores, conversionFactor);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> rawScores = {992908, 56621, 885970, 752856, 493635, 148282, 974997, 62019, 854805, 914450, 866894, 994206, 571165, 804722, 381294, 385363, 763787, 416294, 222479, 121704, 839946, 579528, 408644, 364486, 988702, 259867, 570849, 839715, 962340, 941301, 161076, 955248, 516421, 47045, 708103, 528555, 713828};
    vector<int> conversionFactor = {202907, 592335, 570004, 635326, 976785, 564429, 206798, 781764, 463634, 110116, 546561, 880382, 851015, 185186, 720898, 432101, 595098, 602409, 938330, 373350, 691314, 295880, 852635, 634317, 457915, 808586, 668776, 22766, 34987, 197931, 736627, 237893, 306617, 306630, 389570, 799753, 387410};
    TournamentJudging* pObj = new TournamentJudging();
    clock_t start = clock();
    int result = pObj->getPoints(rawScores, conversionFactor);
    clock_t end = clock();
    delete pObj;
    int expected = 124;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> rawScores = {580207, 367041, 222808, 643183, 245964, 73360, 827863, 483333, 21940, 939686, 603686, 959221, 829875, 294888, 254715, 682404, 927390};
    vector<int> conversionFactor = {230776, 491983, 114545, 253541, 43321, 828827, 506519, 797566, 651795, 329500, 187135, 451547, 716909, 299854, 33063, 84304, 522687};
    TournamentJudging* pObj = new TournamentJudging();
    clock_t start = clock();
    int result = pObj->getPoints(rawScores, conversionFactor);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> rawScores = {846835, 595960, 539106, 848667, 617900, 478791, 452352, 95619, 827165, 747240, 350335, 509569, 193129, 98620, 518248, 824940, 869022, 561306, 652727, 375366, 358839, 304064, 704785, 63894, 273418, 938614, 363685, 822980, 20984, 886285, 15723, 386318, 482244, 554829, 753484, 100143, 552119, 205835, 195762, 897784, 471575, 64596, 925852};
    vector<int> conversionFactor = {183333, 682291, 445951, 8694, 551634, 525340, 662881, 927495, 402294, 485214, 632855, 466383, 275445, 571476, 830324, 98739, 110752, 716952, 115874, 14812, 716466, 189169, 768682, 334814, 259684, 492500, 48978, 674536, 965015, 115465, 600770, 148347, 314108, 563073, 673392, 865741, 88412, 852624, 309588, 7058, 337837, 458794, 473440};
    TournamentJudging* pObj = new TournamentJudging();
    clock_t start = clock();
    int result = pObj->getPoints(rawScores, conversionFactor);
    clock_t end = clock();
    delete pObj;
    int expected = 331;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> rawScores = {546290, 818835, 228015, 655274, 52440, 860567, 187574, 768289, 47947, 473358, 102780, 824447, 964978, 151533, 498728, 446670, 783382, 617361, 111566, 615446, 180092, 784604, 479748, 785227, 637010, 307151, 791604, 491346, 765441, 781617, 621032, 311731};
    vector<int> conversionFactor = {602256, 850340, 486767, 172026, 710937, 191654, 458261, 277053, 665221, 562958, 619205, 631288, 232984, 119541, 78722, 534827, 736998, 707206, 667128, 433879, 492729, 665170, 219171, 647228, 972799, 11521, 139564, 739222, 793661, 277884, 568617, 912268};
    TournamentJudging* pObj = new TournamentJudging();
    clock_t start = clock();
    int result = pObj->getPoints(rawScores, conversionFactor);
    clock_t end = clock();
    delete pObj;
    int expected = 74;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> rawScores = {53390, 82474, 354798, 244968, 540654, 630858, 428404, 620112, 249864, 58316, 369603, 886098, 653399, 420975, 139691, 360047, 87792, 573377, 369799, 752858, 792289, 16559, 243572, 321304};
    vector<int> conversionFactor = {674397, 983045, 631943, 952281, 68013, 544210, 596856, 639748, 144855, 952367, 403135, 203760, 101282, 831743, 341974, 869402, 891639, 713172, 273414, 62959, 651900, 414423, 941485, 257756};
    TournamentJudging* pObj = new TournamentJudging();
    clock_t start = clock();
    int result = pObj->getPoints(rawScores, conversionFactor);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> rawScores = {828436, 528484, 815459, 363494, 772056, 136762, 36660, 271784, 768699, 505964, 339398, 830219};
    vector<int> conversionFactor = {103808, 979760, 975359, 572526, 382895, 179118, 190159, 214637, 521091, 59561, 622627, 750615};
    TournamentJudging* pObj = new TournamentJudging();
    clock_t start = clock();
    int result = pObj->getPoints(rawScores, conversionFactor);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> rawScores = {201532, 918312, 262784, 141669, 175438, 767454, 488604, 703922, 101411, 852098, 475978, 238174, 407257, 266261, 525372, 913221, 605659, 355590, 533672, 584562, 848302, 623409, 484936, 25660};
    vector<int> conversionFactor = {813606, 700011, 64902, 873166, 838990, 331868, 722491, 40927, 250733, 986239, 700700, 943706, 272001, 189563, 165458, 373833, 42349, 643462, 130018, 449808, 426170, 172498, 880570, 32539};
    TournamentJudging* pObj = new TournamentJudging();
    clock_t start = clock();
    int result = pObj->getPoints(rawScores, conversionFactor);
    clock_t end = clock();
    delete pObj;
    int expected = 62;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> rawScores = {413178, 134882, 376251, 36586, 619818, 920411, 368375, 836503, 502187, 240051, 674630, 832941, 480217, 232788, 600506, 464666, 932616, 543509, 253568, 639546, 708933, 143882, 680075, 868835, 790869, 646360, 294996, 963228, 44364};
    vector<int> conversionFactor = {845521, 493321, 976555, 980539, 387143, 531493, 600931, 308423, 900035, 437686, 327309, 658095, 629781, 161709, 138645, 862803, 279546, 121785, 796523, 341088, 376926, 436158, 51736, 38603, 634493, 438549, 830297, 798987, 251531};
    TournamentJudging* pObj = new TournamentJudging();
    clock_t start = clock();
    int result = pObj->getPoints(rawScores, conversionFactor);
    clock_t end = clock();
    delete pObj;
    int expected = 70;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> rawScores = {842395, 96056, 319657, 336936, 76254, 705584, 868064, 194770, 530420, 767566, 631289, 375943, 425619, 260936, 535908, 563889, 123372, 333376, 685325, 436924, 674354, 578828, 390021, 242763, 134712, 23192, 680007, 481465, 339722, 449245, 791446, 700616, 545301, 111102, 37551, 140055, 335185, 905615, 334825, 384105, 673181};
    vector<int> conversionFactor = {967722, 762112, 617570, 746411, 816261, 182791, 387903, 149956, 386148, 825917, 341090, 482782, 216440, 583959, 618018, 757807, 265376, 99902, 614512, 714675, 408979, 315266, 777378, 38567, 352977, 917670, 892162, 259135, 252834, 794537, 450128, 736907, 73000, 67698, 483317, 889261, 766840, 387571, 555568, 152987, 213487};
    TournamentJudging* pObj = new TournamentJudging();
    clock_t start = clock();
    int result = pObj->getPoints(rawScores, conversionFactor);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> rawScores = {634076, 944668, 996314, 769626, 219223, 778266, 868141, 833501, 9462};
    vector<int> conversionFactor = {795368, 150213, 787097, 833935, 19541, 221118, 726096, 278675, 473951};
    TournamentJudging* pObj = new TournamentJudging();
    clock_t start = clock();
    int result = pObj->getPoints(rawScores, conversionFactor);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> rawScores = {727137, 726881, 592160, 312674, 208420, 998013, 79399, 114378, 70195, 231136, 326182, 483062, 383711, 789349, 479375, 153336, 527072, 776140, 539976, 360572, 785603, 335077, 27465, 571563, 686740, 46803, 792577, 411650, 842701, 783467, 449411, 88336};
    vector<int> conversionFactor = {511626, 43683, 401434, 238503, 559278, 481124, 352950, 146791, 230152, 197236, 630961, 614947, 987800, 628448, 286230, 31503, 404629, 827550, 393800, 190529, 680590, 939014, 279877, 367564, 503767, 73991, 296985, 347195, 374760, 747037, 435777, 886385};
    TournamentJudging* pObj = new TournamentJudging();
    clock_t start = clock();
    int result = pObj->getPoints(rawScores, conversionFactor);
    clock_t end = clock();
    delete pObj;
    int expected = 52;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> rawScores = {835132, 640175, 382093, 834040, 510319, 528870, 64083, 706646, 158709, 677838, 210820, 304923, 481927, 242066, 708777, 825993, 152383, 416732, 505134, 608666, 696250, 389515};
    vector<int> conversionFactor = {112712, 286978, 204106, 976258, 661737, 951143, 412035, 64473, 774566, 765596, 705711, 157266, 116633, 216250, 203108, 181468, 440377, 363559, 377602, 652303, 185161, 859964};
    TournamentJudging* pObj = new TournamentJudging();
    clock_t start = clock();
    int result = pObj->getPoints(rawScores, conversionFactor);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> rawScores = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 18, 20};
    vector<int> conversionFactor = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    TournamentJudging* pObj = new TournamentJudging();
    clock_t start = clock();
    int result = pObj->getPoints(rawScores, conversionFactor);
    clock_t end = clock();
    delete pObj;
    int expected = 174;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> rawScores = {1};
    vector<int> conversionFactor = {2};
    TournamentJudging* pObj = new TournamentJudging();
    clock_t start = clock();
    int result = pObj->getPoints(rawScores, conversionFactor);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> rawScores = {8, 16, 32};
    vector<int> conversionFactor = {10, 10, 5};
    TournamentJudging* pObj = new TournamentJudging();
    clock_t start = clock();
    int result = pObj->getPoints(rawScores, conversionFactor);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> rawScores = {60, 59};
    vector<int> conversionFactor = {24, 24};
    TournamentJudging* pObj = new TournamentJudging();
    clock_t start = clock();
    int result = pObj->getPoints(rawScores, conversionFactor);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> rawScores = {60, 60};
    vector<int> conversionFactor = {24, 24};
    TournamentJudging* pObj = new TournamentJudging();
    clock_t start = clock();
    int result = pObj->getPoints(rawScores, conversionFactor);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> rawScores = {0, 1, 2, 499999, 500001, 444444, 333333};
    vector<int> conversionFactor = {3, 3, 3, 1000000, 1000000, 1000000, 1000000};
    TournamentJudging* pObj = new TournamentJudging();
    clock_t start = clock();
    int result = pObj->getPoints(rawScores, conversionFactor);
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
    vector<int> rawScores = {50, 50};
    vector<int> conversionFactor = {100, 100};
    TournamentJudging* pObj = new TournamentJudging();
    clock_t start = clock();
    int result = pObj->getPoints(rawScores, conversionFactor);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> rawScores = {15};
    vector<int> conversionFactor = {2};
    TournamentJudging* pObj = new TournamentJudging();
    clock_t start = clock();
    int result = pObj->getPoints(rawScores, conversionFactor);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> rawScores = {1, 1, 1, 1, 1, 1};
    vector<int> conversionFactor = {4, 4, 4, 4, 4, 4};
    TournamentJudging* pObj = new TournamentJudging();
    clock_t start = clock();
    int result = pObj->getPoints(rawScores, conversionFactor);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> rawScores = {495};
    vector<int> conversionFactor = {1000};
    TournamentJudging* pObj = new TournamentJudging();
    clock_t start = clock();
    int result = pObj->getPoints(rawScores, conversionFactor);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22741690&rd=12180&pm=9822
********************************************************************************
#include <vector>
#include <algorithm>
#include <numeric>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
 
#include <functional>
 
using namespace std;
 
class TournamentJudging {
public:
  int getPoints(vector <int> rawScores, vector <int> conversionFactor)
  {
    int ret = 0;
    double t;
    for(int i=0; i<conversionFactor.size(); i++)
    {
      int a;
      t = (double)rawScores[i] / conversionFactor[i];
      a = t;
      ret += a;
      if(t - double(a) >= 0.5)
        ret++;
    }
    return ret;
  }
};

********************************************************************************
*******************************************************************************/