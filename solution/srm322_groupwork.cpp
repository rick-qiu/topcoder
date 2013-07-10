/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6804
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

class GroupWork {
public:
    long bestGroup(vector<int> p, vector<int> s);
};

long GroupWork::bestGroup(vector<int> p, vector<int> s) {
    long ret;
    return ret;
}


int test0() {
    vector<int> p = {1, 2, 1};
    vector<int> s = {3, 5, 9};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 15;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> p = {2, 2, 2, 2};
    vector<int> s = {5, 1, 1, 5};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 20;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> p = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> s = {31, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 31;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> p = {1000000000, 1000000000, 1000000000};
    vector<int> s = {1000, 999, 998};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 2994000000000;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> p = {1};
    vector<int> s = {1};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> p = {264275051, 649744897, 770026298, 87381884, 176179080, 466628090, 79728847, 377707494, 341182181, 141318375, 90397394, 893870422, 130301407, 674513397, 763953903, 76536798, 521507346, 214641849, 76622936, 686385970, 8006627, 918120875, 630592064, 409478957, 175665400, 234310821, 132689505, 919021645, 115883706, 334644072, 100702071, 837448242, 392578266, 935015959, 468932035, 73038883, 23731657, 81694138, 536033673, 23816585, 953360190, 837712060, 960326035, 40618097, 569909429, 721050477, 949639595, 135779342, 304708074, 370229889};
    vector<int> s = {668, 173, 258, 40, 266, 832, 26, 620, 477, 300, 157, 246, 259, 411, 51, 201, 339, 18, 989, 165, 66, 996, 10, 917, 962, 509, 77, 674, 726, 343, 156, 646, 567, 865, 603, 457, 242, 499, 119, 560, 784, 292, 643, 945, 661, 884, 190, 728, 241, 722};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 5858792530947;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> p = {401489869, 684217402, 163210719, 6734216, 59891379, 635241927, 530730224, 478501615, 111350115, 65296463, 776114928, 426183200, 342723791, 384794464, 419572469, 293739998, 959210703, 831298705};
    vector<int> s = {766, 477, 392, 448, 715, 722, 400, 364, 229, 395, 707, 989, 474, 459, 505, 263, 570, 64};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 2336053020588;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> p = {407990203, 224697044, 365128404, 329387616, 10308278, 902475298, 376994559, 228504020, 437597008, 152136497, 59966299, 503724713, 770529085, 63592026, 539110415, 290152252, 905488567, 245263515, 303123204, 976064459, 522946299, 112896535, 139222635, 909846778, 136123080, 341603986, 999796021, 333975121, 38498531, 659763190, 294039962, 480917691, 414058133, 426988240, 28938131, 454193417, 297140267, 522684628, 638075232};
    vector<int> s = {5, 101, 605, 35, 528, 696, 669, 842, 356, 636, 956, 465, 706, 319, 592, 917, 413, 240, 394, 130, 621, 213, 697, 166, 406, 405, 605, 204, 846, 511, 69, 571, 323, 913, 729, 292, 970, 273, 385};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 3895297134190;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> p = {620408545, 713979912, 830538516, 692872967, 494879174, 29978066, 357118666, 836806913, 873686181, 105958735, 612317946, 327290281, 375856454, 363941253};
    vector<int> s = {78, 677, 61, 892, 297, 72, 104, 688, 336, 280, 180, 571, 806, 296};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 1773412498542;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> p = {90998305, 847597689, 178927014, 653082527, 643447914, 164446490, 292113413, 21543776, 574430678, 509940451, 575962869, 320944032, 233415785, 636431092, 122869659, 112112562, 12060939, 835853940, 595414338, 392894510, 620343816, 229189385, 99565526, 181579630, 787390862, 399219040, 72972394, 50257424, 221971506, 332225963, 399947187, 65714551, 30140780, 324950046, 689742986, 186989130, 147743255, 20683633, 75374702, 447655667, 622222066, 705327458, 913874431, 858200608, 582264097, 175922480, 204605828, 862866758, 23807660, 573060640};
    vector<int> s = {46, 545, 79, 356, 571, 6, 200, 783, 949, 826, 85, 338, 296, 287, 131, 874, 535, 254, 16, 136, 487, 400, 106, 415, 178, 867, 477, 834, 654, 260, 802, 59, 91, 103, 162, 661, 681, 816, 335, 755, 623, 950, 267, 167, 277, 706, 943, 84, 260, 677};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 3741249719280;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> p = {516971252, 87115944, 648172743, 854832463, 314058667, 521618357, 800347081, 458659950, 627353194, 373229615, 687357964, 921986179, 283666612, 365711040, 169832583, 379013434, 878082708, 740519094, 224081909, 16518690, 636123414, 735360131};
    vector<int> s = {404, 422, 42, 691, 447, 375, 860, 177, 197, 591, 87, 754, 953, 248, 365, 720, 424, 299, 32, 81, 78, 513};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 2499855916125;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> p = {880303734, 660893065, 622756094, 117418170, 787095644, 995398059, 21946241, 904010991, 151418550, 367268165, 758533077, 28932971, 403404985, 998740023, 618374131, 414794467, 408707518, 387724713, 75506998, 894247055, 972909508, 817773189, 689220317, 916301485, 361386988, 670386170, 73240204, 856622332, 78016763, 176399866, 419582155, 555659586, 69106139};
    vector<int> s = {13, 902, 102, 906, 284, 236, 358, 594, 607, 304, 619, 815, 352, 947, 728, 716, 198, 296, 95, 14, 827, 430, 419, 744, 838, 906, 919, 29, 473, 938, 662, 745, 451};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 5226594955758;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> p = {480987897, 644417329, 578511080, 495885955, 510231820, 522819294, 438062828, 74650400, 631813265, 827698350, 600711828, 607597600, 507617915, 552824890};
    vector<int> s = {598, 262, 396, 625, 211, 724, 808, 524, 164, 323, 712, 496, 858, 797};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 2152148542986;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> p = {859333064, 445006007, 137599676, 566587363, 130565009, 658248415, 955532525, 986058407, 715990992, 875978066, 704647972, 882514500, 688726933, 287724708, 967773090, 828340241, 459241972, 35591056, 616198127, 674714825, 844527752, 13729140, 549412182, 801330446, 36670443, 92776144, 924667748, 117734881, 798243903, 193988555, 138988653, 112903980, 115506600, 492909742, 448097287, 393299512, 46034128, 555579494, 927621517, 301575223, 940722018, 111302406, 38900893, 811546300, 943624847, 430900291, 127367579, 536749630, 455870860, 783974391};
    vector<int> s = {99, 64, 74, 623, 667, 660, 132, 92, 903, 611, 924, 78, 99, 543, 887, 236, 516, 938, 13, 189, 23, 339, 698, 27, 977, 360, 688, 170, 701, 215, 666, 269, 10, 604, 690, 938, 338, 198, 796, 233, 460, 874, 616, 809, 474, 782, 308, 83, 100, 183};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 6497797475360;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> p = {627794941, 975914395, 935556764, 108226033, 97838896, 324340311, 97300137, 803386726, 467805562, 954376010, 902438476, 319781398, 135676148, 909987930, 263720867, 700588024, 30919261, 833384243, 212958381, 860232713, 461312406, 752095683, 902792652, 42757834, 302403621, 61114556, 508194890, 211912895, 200884146};
    vector<int> s = {902, 201, 98, 28, 746, 129, 661, 725, 271, 117, 755, 73, 505, 30, 536, 420, 133, 671, 125, 977, 567, 200, 157, 955, 100, 235, 346, 432, 976};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 2952037972032;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> p = {508122393, 996753897, 875643306, 348011959, 578591561, 673473012, 246705939, 42053554, 777808056, 221079898, 891226138, 649598182, 49855767, 898307153, 15053218, 201370700, 716799001, 789032243, 374041042, 510278207, 842884600, 11360509, 14045845, 11587327, 350204399, 564872657, 795687448, 879332142, 919612609, 339823988, 786062159, 107682390, 791111473, 648000977, 467604592, 49820513, 611549319, 64061812, 257171318, 708541215, 214172434, 903763472, 514003103, 106712772, 298529952, 338714874, 743269614};
    vector<int> s = {871, 200, 707, 690, 220, 481, 777, 213, 410, 416, 743, 438, 198, 909, 697, 432, 926, 815, 969, 848, 135, 36, 925, 235, 504, 169, 950, 630, 813, 720, 986, 892, 21, 469, 619, 731, 316, 904, 422, 231, 298, 614, 517, 686, 506, 768, 757};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 7791300705006;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> p = {85087443, 609829275, 754284977, 745431187, 487426050, 830031542, 756722109, 183001546, 6328318, 659561455, 968902396, 506020655, 517999675, 624208214, 409217795, 723608580, 691880720, 386411264, 585315723, 227350735, 865733177, 994724742, 703935731, 711623644, 295194454, 261701251};
    vector<int> s = {491, 601, 417, 362, 818, 816, 732, 605, 425, 864, 529, 807, 670, 492, 408, 323, 74, 363, 5, 827, 164, 350, 255, 458, 11, 245};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 3662457057700;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> p = {406681130, 307255874, 836639456, 524498195, 656417078, 110012390, 710241226, 645747805, 583941734, 838749369, 265066615, 619070447, 84469185, 433327102, 700870994, 129663103, 385747636, 803678590, 43540839, 328149640, 370978958, 19885573, 475837161, 313281225, 622025475, 138780645, 567705517, 155677379, 574569130, 78484338, 881415084, 32798526, 835615616, 392181124, 33452933, 968714436, 842688354, 564044280, 509484280, 179323940, 308375702, 287472687, 442700140, 676027633, 269182531, 740640653, 670787691, 410015233, 476792564, 696482811};
    vector<int> s = {633, 815, 121, 558, 392, 585, 830, 182, 374, 402, 242, 760, 357, 232, 945, 676, 410, 656, 995, 800, 679, 341, 883, 459, 898, 29, 112, 794, 852, 709, 32, 815, 218, 519, 968, 677, 247, 643, 341, 61, 616, 115, 782, 852, 734, 165, 47, 283, 384, 749};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 6356198018016;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> p = {950691621, 206511287, 992255001, 35457172, 536363933, 466768880, 414211155, 257584538};
    vector<int> s = {222, 901, 555, 704, 800, 684, 994, 19};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 1471619922540;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> p = {258844686, 948999551, 49314056, 57816146, 784359418, 404004254, 252648886, 381706463, 909729976, 350575756, 446982233, 456335600, 508067398, 186941237, 795747377, 972138690, 723288006, 515257543, 180770017, 325126677, 126927358, 828782900, 545956081, 597305007, 101349335, 425410995, 435972172, 519404248, 123832542, 926820159, 877074626, 545464797, 801723846, 581501206, 452472455, 237577870, 693141732, 320556348, 572814002, 287316416, 469271217, 7868150, 88068543, 584740555, 976782412};
    vector<int> s = {783, 126, 724, 590, 671, 362, 812, 28, 126, 3, 151, 648, 589, 60, 127, 928, 838, 542, 439, 390, 719, 842, 696, 822, 180, 467, 631, 875, 769, 106, 924, 563, 908, 712, 21, 758, 473, 840, 841, 387, 259, 234, 310, 522, 330};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 6408961481214;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> p = {791676779, 836993195, 836843832, 11932773, 388528542, 687814326, 646478283, 467306818, 499545768, 727130481, 362285814, 976587040, 629236636, 828199318, 781540415, 364019385, 762455572, 657602177, 360727282, 203571886, 332680364, 112229558};
    vector<int> s = {773, 738, 652, 201, 699, 677, 410, 549, 473, 874, 126, 406, 83, 369, 772, 974, 760, 382, 894, 156, 754, 593};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 4479507432796;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> p = {469983000, 562183424, 899721631, 899637452, 705932290, 294001968, 417150715, 550452208, 57522817, 577665479, 967672660, 938305696, 794585814, 46378505, 683557148, 908082660, 403984709, 970539359, 770656778, 321564711, 27018391, 278491097, 174155161, 642800570, 206915225, 2428583, 587151752, 14091599, 10893979, 983413919, 211296857, 115757694, 51398130, 559326395, 334510034, 746223171, 113076342, 101757080, 38297470, 366505854, 5732100, 388059384, 869996845, 102018418, 580535805, 232737344, 677268848, 938969159, 415181254, 691571962};
    vector<int> s = {270, 489, 382, 220, 890, 942, 211, 760, 546, 835, 134, 107, 345, 936, 362, 814, 694, 735, 864, 879, 932, 961, 510, 761, 944, 241, 307, 983, 614, 271, 765, 157, 940, 390, 788, 424, 652, 975, 524, 809, 678, 628, 735, 438, 565, 821, 504, 881, 181, 655};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 6934754970912;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> p = {974074511, 325862131, 785597056, 823607062, 208014010, 31352133, 124018868, 725576912, 596091719, 121033078, 962222435, 108744643, 490491137, 94406044, 196621912, 461535000, 418360660, 55214993, 359684932, 318136059, 117360339, 392908149, 104967737, 495330590, 61561778, 18043946, 919888943, 704320309, 65636940, 317328854, 33069955, 29534584, 462899103, 188811877, 189085811, 634620708, 836600267, 976449029, 124939171, 220680954, 291875991, 304496552, 439304859, 121854910, 576798700, 433921926, 310784583, 447558842};
    vector<int> s = {976, 696, 309, 680, 836, 846, 74, 140, 902, 905, 566, 719, 552, 578, 435, 717, 223, 193, 818, 696, 285, 583, 158, 907, 440, 901, 520, 656, 736, 674, 673, 98, 924, 721, 19, 396, 910, 585, 976, 543, 323, 763, 936, 937, 404, 175, 232, 848};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 6731596634880;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> p = {823542008, 585567614, 450656139, 304240783, 389176107, 999965790, 654012690, 208891152, 333537964, 352200864, 433946096, 902070228, 871328753, 700755824};
    vector<int> s = {480, 905, 565, 20, 838, 976, 134, 586, 361, 119, 927, 903, 88, 888};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 3361621630242;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> p = {169507913, 147884082, 874859552, 791755929, 379011862, 396993124, 762255041, 542839314, 869221034, 875671423, 243878073, 59813885, 125246445, 63637671, 1971536};
    vector<int> s = {946, 355, 309, 774, 411, 458, 14, 299, 198, 480, 818, 684, 70, 58, 558};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 1340771821207;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> p = {273901002, 793742818, 124162937, 676418796, 478697681, 30487993, 945450327, 253103516, 121280948, 97929753, 543863316, 77279839, 246568396, 91511827, 169607743, 189231951, 803617538, 963199979, 844318526, 158099451, 857178710, 322453400, 370287562, 459085284, 17344092, 537742664, 115959409, 972389632, 220823993, 631785434, 119816722, 896772666, 812212650, 920205666, 117427300, 638211568, 862274686, 33189800, 182339696, 850571892, 81155607, 501516457, 732722450, 975520908, 525604973, 872575253, 561294716, 968184307, 902139402, 717653199};
    vector<int> s = {909, 971, 991, 996, 989, 984, 996, 978, 967, 977, 920, 998, 926, 919, 937, 989, 940, 924, 960, 940, 973, 930, 978, 933, 982, 976, 988, 900, 930, 900, 955, 938, 947, 995, 947, 951, 911, 920, 907, 919, 946, 963, 992, 916, 946, 977, 930, 982, 916, 990};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 22193022991500;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> p = {833372268, 627796643, 95758900, 128479594, 143563462, 728591337, 41747087, 553947796, 460138285, 572361385, 749822329, 901991001, 613958341, 204100136, 802227554, 11994006, 562758758, 414868735, 673743019, 275204800, 198485275, 167487899, 196956715, 826109021, 831612582, 59735741, 214916524, 361376136, 240688122, 582443003, 468214380, 605334640, 135947711};
    vector<int> s = {1000, 957, 968, 990, 900, 910, 953, 940, 967, 924, 923, 922, 957, 936, 949, 939, 988, 920, 916, 944, 975, 923, 980, 917, 937, 948, 974, 981, 933, 911, 904, 942, 986};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 12857159866500;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> p = {423339129, 463213704, 494209421, 255368646, 514939289, 776027914, 219359683, 736456789, 123622052, 282595487, 389180330, 118424164, 770222010, 92362079, 390028570, 215511958, 18855055, 698636182, 188497346, 797593088, 880252648, 611013700, 614875042, 94587053, 8355106};
    vector<int> s = {936, 911, 975, 926, 959, 996, 915, 916, 928, 986, 950, 914, 968, 969, 984, 997, 989, 975, 901, 957, 936, 989, 904, 989, 922};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 9169951326945;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> p = {913655598, 664182673, 945951373, 719273310, 135691453, 295144447, 178695669, 873480719, 867466574, 801256965, 905028226, 772618768, 728894707, 865108294, 701957103, 760698878, 952303666, 381580666, 988041388};
    vector<int> s = {902, 963, 971, 973, 1000, 972, 923, 957, 931, 950, 969, 986, 920, 921, 967, 903, 950, 933, 907};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 12132829490254;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> p = {723549606, 48265906, 95265727, 458898052, 648174042, 458689496, 369253360, 901588723, 554062880, 991772067, 861512252, 375668446, 774547079, 679949222, 897624509, 954507567, 594038868, 158932036, 868710146, 659113959, 81323135, 824582456, 461544588, 445462168, 568427572, 143146509, 304550226, 427598056, 463702867, 820336806, 29334333, 927207189, 562473712, 615928248, 863854509, 266246251, 364448724, 344490314, 231097842, 205546448, 953963770, 669411132, 910888403, 126971449, 116361235, 608254397, 848649739, 566580018, 460472835, 453400532};
    vector<int> s = {966, 939, 991, 913, 922, 923, 983, 957, 933, 997, 921, 915, 919, 967, 949, 917, 944, 910, 994, 975, 993, 908, 937, 911, 926, 993, 923, 955, 911, 933, 991, 908, 903, 934, 946, 986, 908, 932, 994, 903, 943, 910, 910, 970, 961, 976, 949, 925, 924, 978};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 24146562603618;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> p = {276280226, 787060698, 969953331, 772691748, 644449956, 71345053, 725384785, 218999963, 126923114, 417690348, 183257926, 163995592, 36385018, 420356099, 931098155, 205160327, 109022240, 859835138, 178819867, 311599580, 259283434, 409622124, 70233529, 423503979, 889010730, 570065321, 777808808, 130718974, 769210872, 469530500, 645765904, 628560899, 443450925, 630197421, 231815968, 671372044, 351410152, 158684728, 429942918, 769986381, 64646413, 753430556, 196178937, 386967073, 946437313, 432360374, 323134128, 113795461, 186974704, 519925315};
    vector<int> s = {64, 100, 16, 57, 5, 53, 55, 67, 1, 64, 24, 56, 80, 94, 54, 44, 91, 27, 67, 95, 14, 35, 71, 17, 82, 79, 99, 84, 83, 24, 22, 61, 66, 67, 91, 31, 84, 92, 33, 61, 89, 2, 50, 5, 11, 88, 21, 48, 17, 35};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 662447473956;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> p = {891241323, 232214740, 505110954, 391029011, 155978033, 230193081, 107289093, 864569606, 68159366, 934892940, 359409642, 687963455, 913011690, 541740235, 372980411, 88453930, 754410560, 265391477, 42352510, 170884346, 778765136, 961167760, 280970076, 274043431, 276477253, 857163171, 9834019, 899716075, 784565808, 891575100, 635794627, 163194820, 457848963, 392183148, 281763284, 439242741, 781390230, 803107654, 834302479};
    vector<int> s = {96, 73, 4, 49, 41, 88, 90, 96, 42, 34, 80, 41, 97, 83, 36, 70, 18, 54, 82, 49, 42, 36, 46, 72, 25, 11, 94, 83, 45, 47, 10, 66, 60, 72, 58, 4, 46, 22, 63};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 526441398387;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> p = {575160597, 818893288, 591619554};
    vector<int> s = {48, 71, 42};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 83398284438;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> p = {153656161, 940611991, 105093020, 150959407, 714186417, 127619244, 20760292, 43426455, 803943445, 343293921, 569464303, 512038847, 982261347, 728996792, 2378836, 961368571, 747906196, 69415415, 426134800, 115512614, 190544455, 828282921, 20054785, 281370138, 100965437, 902516254, 922921835, 839658297, 11912411, 374027879, 544019574, 12486376, 697471148, 949308123, 429984685, 448766990, 898722524, 67329301};
    vector<int> s = {24, 33, 97, 27, 24, 5, 90, 8, 6, 56, 91, 71, 23, 36, 15, 19, 99, 96, 50, 45, 33, 23, 3, 65, 5, 15, 35, 41, 91, 16, 15, 83, 61, 14, 23, 75, 36, 51};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 295363584978;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> p = {791188882, 980393763, 824131588, 38693162, 140987226, 419444274, 10005131, 267663617, 57260446, 738081790, 923631458, 164319372, 506031455, 34841238, 93813260, 177300075, 403640131, 842693837, 528118513, 26242372, 410411026, 43039929, 136397277, 991601215, 624379195, 89366580, 316872830, 252078473, 649091408, 458119518, 736209641, 859069138, 971661958, 146723609, 600262166, 168321487, 125198646, 39013771, 3440223, 351098552, 603803230, 120102048, 851009029, 215790794, 413966881, 378425478, 155923372, 550399686, 968966211, 820270639};
    vector<int> s = {54, 56, 42, 75, 19, 21, 47, 83, 19, 78, 78, 59, 27, 95, 38, 52, 52, 53, 38, 39, 52, 69, 63, 64, 49, 46, 67, 28, 51, 47, 47, 40, 6, 82, 70, 3, 33, 98, 4, 28, 85, 94, 68, 46, 88, 63, 74, 82, 39, 67};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 684910968680;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> p = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    vector<int> s = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 50000000000000;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> p = {999999784, 999999796, 999999103, 999999773, 999999493, 999999954, 999999638, 999999445, 999999025, 999999679, 999999299, 999999422, 999999923, 999999250, 999999114, 999999243, 999999018, 999999077, 999999972, 1000000000, 999999239, 999999727, 999999921, 999999820, 999999880, 999999512, 999999713, 999999133, 999999791, 999999156, 999999664, 999999033, 999999133, 999999693, 999999986, 999999646, 999999147, 999999385, 999999373, 999999980, 999999156, 999999226, 999999212, 999999270, 999999675, 999999504, 999999385, 999999015, 999999556, 999999401};
    vector<int> s = {990, 996, 996, 998, 998, 990, 996, 998, 992, 992, 992, 994, 999, 1000, 996, 997, 999, 998, 996, 998, 995, 995, 991, 990, 993, 993, 998, 991, 993, 992, 996, 990, 999, 997, 992, 995, 991, 999, 998, 998, 990, 995, 995, 990, 990, 998, 996, 990, 992, 993};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 49499974596600;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> p = {999999159, 999999272, 999999417, 999999447, 999999401, 999999935, 999999991, 999999974, 999999496, 999999289, 999999996, 999999903, 999999108, 999999085, 999999395, 999999850, 999999099, 999999289, 999999312, 999999695, 999999666, 999999858};
    vector<int> s = {992, 994, 999, 1000, 996, 995, 996, 996, 992, 993, 995, 992, 1000, 998, 991, 992, 993, 999, 994, 992, 996, 999};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 21801989730267;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> p = {999999505, 999999121, 999999957, 999999529, 999999351, 999999132, 999999336, 999999083, 999999501, 999999373, 999999134, 999999702, 999999593, 999999260, 999999435, 999999158, 999999983, 999999861, 999999548, 999999916, 999999852, 999999299, 999999061, 999999748, 999999235, 999999853, 999999124, 999999685, 999999956, 999999660, 999999395, 999999728, 999999869, 999999722, 999999690, 999999827, 999999153, 999999848, 999999832, 999999882};
    vector<int> s = {992, 994, 998, 997, 991, 995, 991, 996, 998, 992, 998, 996, 998, 996, 997, 993, 998, 999, 999, 997, 990, 993, 991, 994, 995, 998, 996, 991, 990, 991, 994, 1000, 996, 991, 991, 992, 999, 992, 998, 993};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 39599982078030;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> p = {3, 3, 5, 6, 8, 1, 2, 10, 4, 3, 10, 4, 9, 9, 2, 8, 4, 8, 8, 9, 4, 9, 5, 2, 2, 7, 6, 10, 5, 1, 1, 2, 7, 9, 4, 2, 2, 5, 7, 5, 4, 3, 4, 8, 10, 1, 10, 8, 5, 9};
    vector<int> s = {2, 9, 2, 2, 5, 9, 4, 7, 9, 1, 8, 5, 5, 7, 10, 2, 10, 5, 6, 6, 3, 9, 2, 3, 5, 10, 5, 1, 1, 4, 6, 7, 10, 5, 1, 6, 6, 4, 1, 10, 10, 5, 3, 7, 10, 4, 6, 5, 8, 1};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 945;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> p = {3, 2, 2, 3, 3, 8, 4, 3, 7, 6, 6, 2, 8, 6, 8, 2, 1, 3, 5, 8, 1, 9, 2, 10, 5, 10, 2, 2, 10, 7, 7, 6, 10, 4, 8, 2, 8, 5};
    vector<int> s = {6, 10, 2, 10, 4, 5, 4, 10, 10, 4, 9, 3, 6, 2, 2, 6, 1, 1, 5, 6, 1, 9, 1, 9, 10, 4, 1, 9, 5, 7, 4, 3, 1, 5, 1, 2, 10, 9};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 580;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> p = {2, 4, 2, 3, 6};
    vector<int> s = {1, 1, 1, 3, 10};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 60;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> p = {34, 99, 14, 49, 78, 52, 28, 74, 80, 13, 68, 53, 33, 8, 3, 55, 56, 69, 43, 13, 54, 77, 22, 46, 23, 51, 48, 60, 67, 17, 56, 75, 70, 19, 79, 11, 21, 12, 41, 52, 23, 32, 58, 65, 49, 8, 2, 86, 74, 77};
    vector<int> s = {1, 57, 59, 85, 27, 46, 92, 32, 94, 98, 6, 77, 23, 96, 22, 11, 13, 55, 45, 96, 42, 46, 30, 21, 24, 32, 42, 72, 78, 64, 1, 12, 20, 43, 82, 73, 94, 85, 54, 65, 81, 91, 69, 16, 64, 44, 40, 25, 64, 55};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 59346;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> p = {39, 25, 95, 72, 26, 12, 95, 52, 19, 83, 26, 81, 79, 91, 72};
    vector<int> s = {17, 64, 85, 47, 54, 2, 5, 96, 38, 59, 22, 91, 91, 44, 5};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 26576;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> p = {52, 70, 58, 95, 50, 5, 41, 85, 12, 13, 69, 11, 91, 60, 53, 37, 90, 78, 2, 97, 87, 65, 2, 99, 4, 97, 89, 89, 72};
    vector<int> s = {13, 75, 61, 40, 8, 47, 86, 74, 37, 47, 22, 25, 15, 25, 47, 46, 97, 83, 89, 52, 7, 4, 90, 6, 92, 57, 30, 60, 22};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 37766;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> p = {3, 1, 7, 4, 5, 4, 9, 4, 10, 1, 1, 7, 10, 3, 10, 4, 4, 7, 8, 4, 10, 7, 10, 5, 5, 2, 5, 7, 4, 6, 1, 8, 7, 1, 4, 2, 3, 8, 4, 8, 9, 8, 9, 1, 9, 5, 9, 8, 8, 1};
    vector<int> s = {851, 828, 470, 228, 693, 431, 945, 273, 256, 767, 381, 460, 508, 537, 688, 361, 360, 588, 746, 490, 774, 539, 207, 500, 709, 397, 670, 977, 662, 253, 805, 540, 928, 522, 434, 216, 460, 95, 563, 945, 154, 236, 799, 968, 506, 836, 259, 180, 563, 789};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 84180;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> p = {4, 6, 8, 8, 2, 8, 6, 1, 5, 3, 9, 4, 4, 8, 5, 9, 7, 5, 6, 3, 10, 9, 3, 1, 9, 4, 2, 7, 10, 4, 8, 2, 5, 5, 9, 4, 3, 2, 6, 1};
    vector<int> s = {649, 645, 105, 501, 32, 457, 947, 990, 402, 18, 975, 980, 483, 430, 237, 599, 228, 726, 615, 772, 67, 370, 653, 875, 649, 419, 483, 496, 91, 311, 62, 258, 226, 657, 890, 55, 971, 870, 430, 957};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 55727;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> p = {5, 4, 6, 2, 6, 4, 5, 5, 6, 8, 9, 2, 1, 10, 7, 7};
    vector<int> s = {884, 73, 650, 334, 744, 340, 401, 238, 641, 626, 282, 513, 40, 561, 206, 641};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 26928;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> p = {41, 65, 65, 44, 81, 41, 29, 4, 8, 11, 17, 8, 81, 67, 54, 74, 48, 82, 59, 76, 36, 40, 7, 89, 76, 56, 28, 61, 78, 88, 27, 60, 15, 78, 17, 88, 89, 32, 4, 74, 84, 88, 24, 21, 69, 12, 90, 72, 42, 84};
    vector<int> s = {85, 139, 96, 31, 636, 229, 763, 803, 937, 597, 726, 197, 237, 812, 989, 796, 509, 49, 517, 120, 418, 437, 987, 371, 818, 16, 237, 343, 526, 938, 447, 471, 74, 610, 152, 836, 960, 787, 602, 298, 364, 106, 582, 400, 673, 761, 157, 228, 355, 991};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 601129;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> p = {77, 36, 42, 97, 99, 64, 79, 40, 74, 36, 18, 3, 51, 62, 55, 94, 34, 43, 30, 72, 74, 32, 56, 36, 13, 69, 16, 33, 29, 45, 19, 86, 55, 1, 28, 43, 56, 80, 96, 10, 71, 42};
    vector<int> s = {463, 639, 17, 510, 34, 244, 265, 649, 999, 77, 388, 574, 332, 618, 274, 213, 435, 924, 951, 547, 36, 348, 267, 521, 991, 572, 331, 156, 683, 163, 53, 263, 873, 381, 400, 636, 33, 9, 314, 95, 684, 34};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 394230;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> p = {40, 81, 63, 1, 15, 28};
    vector<int> s = {939, 283, 363, 370, 509, 644};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 64524;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> p = {322478234, 265185094, 951927136, 734690113, 303055669, 125094087, 585762631, 833638815, 651802034, 563117021, 717377873, 109608537, 594355155, 411673439, 655302161, 883646376, 745085598, 587279753, 214791328, 706568811, 256930527, 340234875, 538817820, 91242147, 345794468, 813741240, 556504357, 668675573, 272721087, 682953128, 373313118, 129762347, 815369544, 988558870, 413612786, 655834035, 81475608, 279929522, 20852748, 807313438, 107338319, 428293264, 316517982, 933402275, 733651406, 159672743, 747313307, 597908122, 477763006, 404119380};
    vector<int> s = {797, 297, 823, 836, 1000, 994, 498, 189, 453, 587, 992, 214, 536, 596, 152, 586, 66, 261, 165, 769, 808, 86, 349, 175, 738, 373, 476, 668, 684, 659, 215, 442, 144, 575, 233, 986, 915, 914, 586, 615, 572, 585, 731, 584, 600, 334, 35, 563, 128, 391};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 7824449650753;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> p = {335836588, 246506189, 102178817, 676624094, 470498638, 482172915, 42263643, 979660335, 154743940, 742290156, 73883147, 951231405, 470357171, 709976916, 533414026, 62405014, 165641990, 140200107, 843881555, 115769674, 326781164, 714125012, 563098473, 254175184, 65303191, 87999639, 921796558, 82015312, 284296575, 726769695, 80669197, 916338842, 934551262, 784940413, 763520945, 117592990, 990594098, 887103267, 231058379, 89573362, 538676670, 840382057, 860164977, 377439312, 879526152, 804748299, 360750649, 499543060, 416121692, 394567849};
    vector<int> s = {178, 562, 944, 278, 44, 142, 431, 866, 43, 579, 54, 1000, 128, 501, 730, 265, 15, 502, 935, 463, 218, 781, 690, 682, 868, 674, 641, 614, 511, 427, 509, 995, 967, 363, 311, 92, 245, 437, 32, 145, 893, 893, 400, 654, 633, 544, 888, 977, 243, 655};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 7443219150384;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> p = {775381759, 588399295, 542811086, 222111664, 191531057, 362380119, 579437526, 44951045, 269957547, 724108070, 431365292, 423970491, 38366456, 470457610, 780871467, 135777939, 547843560, 914591815, 498952629, 666713589, 887052044, 230928133, 740776110, 481911144, 473905211, 140516047, 383017728, 865819163, 901740816, 792357653, 66552470, 663370336, 504996201, 101024684, 727991009, 132283947, 415072746, 197178185, 916733270, 73401240, 400439416, 154548233, 568678894, 335587682, 754081470, 92365292, 417151909, 924677484, 490810539, 471932245};
    vector<int> s = {107, 804, 594, 172, 878, 659, 673, 117, 773, 359, 362, 950, 191, 329, 870, 492, 378, 983, 981, 687, 645, 875, 926, 129, 887, 850, 454, 523, 964, 574, 961, 344, 271, 492, 730, 456, 827, 455, 801, 535, 89, 611, 839, 35, 670, 946, 156, 225, 354, 171};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 7864613385315;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> p = {563293850, 210345569, 963404081, 204386414, 941912392, 434126013, 934499525, 843987354, 317741687, 705986390, 315188579, 69646399, 980969560, 655974607, 826432458, 395720740, 354436573, 513294512, 379745983, 979668274, 497760059, 644658661, 104633739, 20347383, 331024494, 287732028, 358370939, 678924324, 643268021, 774142443, 27999071, 603921167, 442593298, 799672327, 929633292, 94067762, 354639307, 889017102, 909591259, 865163178, 657022188, 350503518, 518194471, 749839545, 919227330, 130243515, 500128722, 443819076, 721707873, 746018765};
    vector<int> s = {273, 294, 535, 279, 971, 403, 472, 498, 999, 238, 976, 136, 763, 372, 923, 858, 77, 494, 217, 186, 926, 499, 658, 481, 586, 547, 606, 579, 353, 349, 288, 494, 305, 562, 974, 638, 330, 128, 443, 516, 256, 120, 861, 682, 221, 976, 328, 129, 381, 650};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 7265664285464;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> p = {505423688, 127881179, 700011160, 154099699, 257450819, 148138321, 43475643, 762356749, 81905149, 252864558, 81727334, 299319326, 10298569, 968060251, 461925824, 4099438, 133151295, 990267169, 218185071, 821909997, 644435641, 182987186, 993740064, 324546219, 766661845, 831619488, 130360069, 530794077, 627135478, 438914148, 985107282, 331306975, 392635075, 665025752, 114374847, 993606316, 9934246, 249059773, 159582474, 566255464, 697456461, 896365623, 125511538, 772895319, 959865133, 442191436, 66051388, 511403491, 764572666, 570168168};
    vector<int> s = {18, 410, 641, 44, 407, 381, 879, 442, 44, 746, 62, 651, 150, 91, 15, 474, 222, 278, 547, 486, 975, 619, 720, 947, 740, 512, 387, 1, 791, 488, 568, 204, 27, 735, 195, 306, 827, 736, 131, 793, 545, 88, 593, 231, 432, 224, 94, 295, 58, 519};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 5503958997696;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> p = {1000000000};
    vector<int> s = {1000};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 1000000000000;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> p = {4, 1, 1000};
    vector<int> s = {4, 2, 1};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 1005;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> p = {100, 5, 10, 100, 10000, 10001};
    vector<int> s = {20, 10, 1, 20, 5, 2};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 51025;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> p = {1, 1, 1000000};
    vector<int> s = {100, 20, 10};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 10000020;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> p = {1000, 1, 1};
    vector<int> s = {1, 1, 10};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 1002;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> p = {1, 2, 500};
    vector<int> s = {9, 2, 1};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 503;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> p = {1, 1, 2};
    vector<int> s = {10, 4, 3};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 12;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> p = {1, 1, 1};
    vector<int> s = {10, 4, 4};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 12;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> p = {10, 1, 100};
    vector<int> s = {100, 90, 89};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 9879;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> p = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    vector<int> s = {1, 1, 1, 1000, 1000, 1000};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 3000000000000;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> p = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    vector<int> s = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 20000000000000;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> p = {1, 2, 1};
    vector<int> s = {3, 5, 9};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 15;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> p = {10, 1, 1000000};
    vector<int> s = {1000, 2, 1};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 1000011;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> p = {5, 1, 10000};
    vector<int> s = {5, 2, 1};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 10006;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> p = {1, 2, 1000};
    vector<int> s = {100, 5, 1};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 1003;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> p = {100, 1, 1};
    vector<int> s = {1, 40, 1000};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 1000;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> p = {1, 2, 2};
    vector<int> s = {3, 1, 2};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> p = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    vector<int> s = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 50000000000000;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> p = {1000, 1, 1000000};
    vector<int> s = {100, 2, 1};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 1001001;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> p = {10, 1, 2};
    vector<int> s = {1, 2, 4};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 13;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> p = {500, 500, 500, 1};
    vector<int> s = {1, 1, 1, 1000};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 1501;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> p = {100000, 1, 1};
    vector<int> s = {1, 10, 1000};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 100002;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> p = {10, 1, 11};
    vector<int> s = {9, 20, 3};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 99;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> p = {1000000000, 1000000000, 1000000000};
    vector<int> s = {1000, 999, 998};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 2994000000000;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> p = {1, 2, 3};
    vector<int> s = {7, 7, 7};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 42;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> p = {98, 1, 1};
    vector<int> s = {3, 4, 9};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 300;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> p = {1, 1, 1, 1, 1};
    vector<int> s = {101, 100, 1, 99, 98};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 392;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> p = {1000000000, 1000000000, 1000000000, 2489348, 53456634, 2345543, 3243245, 64353413, 4534534, 34354665};
    vector<int> s = {1000, 999, 998, 234, 244, 244, 653, 434, 234, 234};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 2994000000000;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> p = {1, 1, 100};
    vector<int> s = {31, 2, 1};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 102;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> p = {1, 1, 100};
    vector<int> s = {100, 2, 1};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 102;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> p = {1, 1, 100, 1000000000, 1000000000, 1000000000};
    vector<int> s = {100, 2, 1, 3, 3, 3};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 9000000003;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> p = {1, 10, 9};
    vector<int> s = {9, 10, 9};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 180;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> p = {1, 1, 1000};
    vector<int> s = {4, 2, 1};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 1002;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> p = {12, 1, 11, 1, 1, 1, 14, 1, 13, 1, 1, 16, 1, 1, 1, 21, 1, 1, 11, 1, 16, 1, 1, 1, 1, 11, 1, 13, 1, 14};
    vector<int> s = {31, 1, 1, 1, 1, 1, 1, 1, 8, 1, 14, 1, 1, 1, 16, 1, 1, 1, 7, 1, 1, 1, 7, 1, 1, 1, 14, 1, 1, 13};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 378;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> p = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 5, 1, 8, 1, 1, 1, 1, 9, 1, 1, 1, 1, 8, 2};
    vector<int> s = {31, 1, 1, 1, 1, 15, 1, 1, 1, 1, 1, 1, 3, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 57;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> p = {1, 1, 1, 1, 1};
    vector<int> s = {3, 1, 1, 1, 1};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> p = {1, 1, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    vector<int> s = {5, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 40000000002;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> p = {1000000000, 1, 1000000000};
    vector<int> s = {1000, 999, 998};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 1996000000998;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> p = {1000, 1, 1000, 1};
    vector<int> s = {1, 1, 2, 2};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 2002;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> p = {2, 2, 2, 2};
    vector<int> s = {5, 1, 1, 5};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 20;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> p = {1, 20};
    vector<int> s = {10, 1};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 21;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> p = {1000, 1, 1000000000};
    vector<int> s = {50, 2, 1};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 1000001001;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> p = {1, 2};
    vector<int> s = {50, 24};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 72;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> p = {1, 1000};
    vector<int> s = {10, 1};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 1001;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> p = {2, 1, 2};
    vector<int> s = {6, 4, 3};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 15;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> p = {100, 1, 3};
    vector<int> s = {2, 3, 4};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 208;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> p = {1000000000, 1000000000, 999999};
    vector<int> s = {1000, 999, 998};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 1998000000000;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> p = {5, 1, 1, 2};
    vector<int> s = {5, 1, 1, 5};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 35;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> p = {1000, 1, 10};
    vector<int> s = {1, 999, 1000};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 10989;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> p = {1, 2, 1, 20};
    vector<int> s = {3, 5, 9, 1};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 24;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> p = {1, 1};
    vector<int> s = {11, 10};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 20;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> p = {10, 1, 100};
    vector<int> s = {3, 2, 1};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 111;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> p = {1, 2, 3};
    vector<int> s = {3, 3, 3};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 18;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> p = {1, 1, 10};
    vector<int> s = {5, 2, 1};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 12;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> p = {5, 2, 500};
    vector<int> s = {10, 2, 1};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 507;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> p = {100, 1, 1000000};
    vector<int> s = {10, 9, 8};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 8000808;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> p = {1000, 5, 5, 5};
    vector<int> s = {1, 100, 100, 100};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 1500;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> p = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    vector<int> s = {1, 1, 1, 1, 1};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 5000000000;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> p = {1000000000};
    vector<int> s = {2};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 2000000000;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> p = {1, 1, 10000000};
    vector<int> s = {100, 3, 2};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 20000004;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> p = {1000000000, 1000000000, 1000000000, 1000000000};
    vector<int> s = {1000, 999, 998, 997};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 3988000000000;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> p = {1000000000};
    vector<int> s = {30};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 30000000000;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> p = {31, 41, 59, 26, 53, 58, 97, 93, 23, 84, 62, 64, 33, 83, 29, 50, 28};
    vector<int> s = {41, 59, 26, 53, 58, 97, 93, 23, 84, 62, 64, 33, 83, 29, 50, 28, 31};
    GroupWork* pObj = new GroupWork();
    clock_t start = clock();
    long result = pObj->bestGroup(p, s);
    clock_t end = clock();
    delete pObj;
    long expected = 26158;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=11972352&rd=10002&pm=6804
********************************************************************************
// Cry as challenge phase is passing by 
 
#include <algorithm> 
#include <functional> 
 
#include <cmath> 
#include <cctype> 
#include <cstdio> 
#include <cstdlib> 
#include <cstring> 
 
#include <vector> 
#include <string> 
#include <sstream> 
#include <iostream> 
 
using namespace std; 
 
#define FORC(it,v) for( __typeof((v).begin()) it = (v).begin(); it != (v).end(); ++it ) 
 
class GroupWork { 
public: 
    long long bestGroup( vector <int> p, vector <int> s ) { 
        vector< pair< int, int > > V; 
 
        for( int i = 0; i < ( int )p.size(); ++i ) 
            V.push_back( make_pair( s[i], p[i] ) ); 
 
        long long maks = 0; 
 
        sort( V.begin(), V.end(), greater< pair< int, int > > () ); 
 
        long long mol = 0; 
 
        for( int i = 0; i < ( int )V.size(); ++i ) { 
            mol += V[i].second; 
            maks >?= mol * V[i].first; 
        } 
 
        return maks; 
    } 
}; 
 
 
 
 
 
 
 
 
 
// Powered by FileEdit
// Powered by moj 3.0 beta 11 [modified TZTester]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/