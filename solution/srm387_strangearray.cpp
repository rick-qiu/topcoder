/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8086
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

class StrangeArray {
public:
    int calculateSum(vector<int> A, vector<int> B, string N);
};

int StrangeArray::calculateSum(vector<int> A, vector<int> B, string N) {
    int ret;
    return ret;
}


int test0() {
    vector<int> A = {1, 2, 3};
    vector<int> B = {3, 4};
    string N = "2";
    StrangeArray* pObj = new StrangeArray();
    clock_t start = clock();
    int result = pObj->calculateSum(A, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> A = {382641071, 105868709, 565477462, 20966216, 485030671, 100680562, 231543931, 401104770, 219153416, 245277260, 844752342, 157048249, 955992309, 648030030, 916287728, 745689260, 852565080, 754020813, 861415448, 169896542, 654683065, 562944425, 470595416, 189642017};
    vector<int> B = {188360240, 778649250, 585924863, 917783135, 697714163, 421491134, 388866847, 581835383, 684072389, 935087130, 205572679, 733207190, 403942991, 317972350, 235969115, 684743797, 680990020, 312540055, 112949003, 458082827, 188970610, 181249427, 697958311, 22217474, 861445966, 102420117, 19013031, 103946043, 584795678, 716208380, 757866145, 352214117, 830713827, 852198858, 191625720};
    string N = "998168889431440168";
    StrangeArray* pObj = new StrangeArray();
    clock_t start = clock();
    int result = pObj->calculateSum(A, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 467033071;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> A = {996520889, 764213995, 824060792, 344279305, 818536942, 388164922, 910580767, 524002807, 18311105, 402081362, 538804284, 100009155, 495925778, 588671529, 411877803, 309244056, 1983703, 811700796, 91341898, 508529923, 841547898, 529709768, 580828272, 48738059, 376415295, 913510544, 99124118, 580675679, 233008819, 847926267, 199011200, 323526718, 621295815, 600268562, 887813959, 327890865, 671193578, 435377056};
    vector<int> B = {906552323, 263924069, 193090609, 959715567, 823145237, 766136661, 768333994, 474806970, 96591082, 866237372, 575762199, 122104556, 768089846, 544816431, 861384929, 99765007, 934995574, 933896908, 456373790, 733115634, 664815210, 200628681, 250373851, 679830317, 504501480, 644154179, 26154362, 51149021, 241798150, 36500137, 561662648, 730521561, 74709311, 739158299, 406079287, 670308542, 845759453, 625629444, 236030152, 448805200, 496353038, 342631305};
    string N = "970091860713522751";
    StrangeArray* pObj = new StrangeArray();
    clock_t start = clock();
    int result = pObj->calculateSum(A, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 464368420;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> A = {940031128, 142277291, 873012482, 720755638, 401135288, 159123508, 576952421, 480117191, 104861598, 315256202, 668019653, 444563127, 750541703, 5279702, 984344004, 533707693, 777092806, 819269386, 535538804, 879268776, 807367168, 334269234, 752891628, 199652088, 149388103, 736259041, 249122592, 645496993, 885250404, 677877132, 869411297};
    vector<int> B = {771660512, 579210791, 279213843, 314401684, 792870876, 136295663, 677297280, 117099520, 778710287, 842493972, 30396435, 254188665, 944242683, 117587817, 384105960, 173467207, 692495498, 12665181, 304574724, 518692587, 565446943, 982482375, 685903500, 332712790, 759147923, 964690084, 637348551, 20599993, 359752189, 297006134, 857112338, 853602710, 956389049, 503585924, 398419141, 295388653, 787316507, 481429486};
    string N = "398724326303903317";
    StrangeArray* pObj = new StrangeArray();
    clock_t start = clock();
    int result = pObj->calculateSum(A, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 77251250;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> A = {118778038, 529892880, 286233100, 709799493, 876430555, 19318216, 298501541, 928403576, 362712485, 409527878, 754417554, 159947508, 434644611, 200476088, 441267128, 679738761, 854915005, 839045381, 314279610, 235999633, 37171544, 607806634, 453505050, 303750724, 910702841, 157353434, 93508713, 121311075, 434766685, 86642048, 506149479, 166539506, 795373393, 478957487, 18311105, 228797265, 814325388, 798913541, 945616016, 732810449, 602832117, 57100131, 723410748};
    vector<int> B = {470595416, 990325632, 648792992, 16296884, 398144474, 759758293, 772148808, 87343974, 652485732, 221228675, 833552049, 208410901, 445905941, 154271065, 744743186, 392651142, 993408001, 650898770, 519333475, 230506302, 129306924, 890011291, 74159978, 110782189, 770104068, 374919888, 641987365, 607226783, 878505813, 664906765, 701773125, 312662129, 86519974, 132114627, 832758568, 901791436, 632435071, 775231177, 398876918, 703421124};
    string N = "75472273934141056";
    StrangeArray* pObj = new StrangeArray();
    clock_t start = clock();
    int result = pObj->calculateSum(A, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 884628318;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> A = {563890499, 296121097, 744376964, 880520035, 282815027, 383251441, 440595721, 850459303, 402203436, 322458571, 576799829, 43305764, 630359813, 383648182, 658101138, 499038666, 682027649, 419385357, 637073885, 328989532, 815393536, 378093813, 998992889, 585711233, 848017822, 381878109, 153447065, 212652974, 932218390, 524918362, 664082766, 480544450, 871761223, 48951689};
    vector<int> B = {347178563, 815942869, 260414441, 51881466, 770928067, 428846095, 224555192, 385814996, 186101870, 645405438, 49897762, 900814844, 419904171, 351756340, 474929044, 690664387, 763695181, 455732902, 931028168, 496902371, 386059144, 772118289, 511398663, 926969206, 302926725, 238105410, 949797051, 643513290, 435132908, 865230262, 390026551, 180303353, 785271767, 333475753, 228034302, 541581469, 265114291, 634693441, 807214575, 240577410, 204443494, 670705282, 248573259, 934110538, 72756126};
    string N = "469100009155552842";
    StrangeArray* pObj = new StrangeArray();
    clock_t start = clock();
    int result = pObj->calculateSum(A, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 581528307;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> A = {445417645, 130008850, 765312662, 375804925, 744804223, 287728507, 454756309, 829493087, 788354136, 31159398, 338389233, 627491073, 674459059, 651692251, 283028656, 447218237, 37354655, 746848963, 494460890, 175725577, 202795495, 879329813, 165990173, 89083529, 274636066, 440778832, 511764885, 877376628, 685232093, 127109591, 966124454, 171544541};
    vector<int> B = {239143040, 931211279, 830164494, 728904080, 182836390, 59541611, 147007660, 932432020, 330637531, 679006317, 86550492};
    string N = "308816797387615588";
    StrangeArray* pObj = new StrangeArray();
    clock_t start = clock();
    int result = pObj->calculateSum(A, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 903779679;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> A = {621356852, 888027588, 238502151, 901028473, 774834437, 59144871, 519699697, 605395672, 223059785, 415051728, 195806756, 808435316, 531113620, 905606250, 982177190, 169408246, 805475020, 457808160, 858027893, 969908749, 43855098, 51576281, 464094973, 45838801, 963530381, 360087893, 807000946, 799981688, 589098788, 110538041, 801110873, 700460829, 381756035, 822290719, 679952391, 172185430, 190466017, 77761162, 807885982, 286782433, 806817835, 983306375, 923245948, 157628101, 404553361, 975157933};
    vector<int> B = {344676046, 446638386, 645161290, 627796258, 171361430, 887966551, 730826746, 620471816, 8758812, 236091189, 185644093, 517990661, 250862147, 543748283, 646961882, 522232734, 450636310, 176152836, 447309793};
    string N = "899777214880825220";
    StrangeArray* pObj = new StrangeArray();
    clock_t start = clock();
    int result = pObj->calculateSum(A, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 917729399;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> A = {268929105, 898892178, 315622425, 428601947, 651844843, 840021973, 568529313, 403729361, 636219367, 823511459, 810144352, 96682638, 321390423, 422956022, 204901272, 858455153, 621784112, 493423261, 893246253, 651081881, 1220740, 92867824, 852015747, 591265602, 467482528, 624500259, 92867824, 480391857, 607318338, 855800042, 229956968};
    vector<int> B = {226783043, 944120609, 970915860, 947477645, 567217017, 398968474, 312570574, 399456770, 993255409, 136478774, 969542527, 72115237, 288796655, 576586199, 866023743};
    string N = "467879268776512955";
    StrangeArray* pObj = new StrangeArray();
    clock_t start = clock();
    int result = pObj->calculateSum(A, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 115633907;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> A = {509506515, 850184636, 342753379};
    vector<int> B = {504226813, 52735984, 956297494, 154667806, 664204840, 826776940, 749565111, 797967467, 557359538, 427259, 702322458, 418866542, 556077761, 523636585, 264229255, 270302438, 595385601, 9613330, 840113528, 903927732, 222052674, 713248084, 480483413, 223364970, 59419537, 260902737, 316171758, 305429242, 969756157, 289101840, 268501846, 394421216, 694906460, 646931363, 65889461, 977385784, 256843775, 319711905, 98635822, 344981231, 899227881, 729392376, 142490920, 545365764};
    string N = "853694265572069460";
    StrangeArray* pObj = new StrangeArray();
    clock_t start = clock();
    int result = pObj->calculateSum(A, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 307088877;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> A = {136661885, 694418164, 821069978, 470839564, 644795068, 615771965, 135898922, 41322061, 132114627, 324808496, 192846461, 226447340, 784325693, 919461653, 233832819, 193365276, 920590838, 479720450, 405896176, 839381084, 334025086, 671468245, 75289162, 474379711, 368694112, 140964995, 768456068, 623035370, 638721884, 981902523, 896328623, 476851710, 796533097, 55696279, 918027283, 28199102, 256172368, 446852015, 100131229, 417035431};
    vector<int> B = {277993102, 834009826, 528336436, 521927549, 320566423, 58473464, 526596881, 326242866, 66927091, 671437726, 141422772, 91311380, 30549027, 740318002};
    string N = "482924893948179570";
    StrangeArray* pObj = new StrangeArray();
    clock_t start = clock();
    int result = pObj->calculateSum(A, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 757692424;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> A = {696890163, 124729148, 372631000, 262672811, 507187108, 82003234, 775566881, 911191137, 945127719, 752891628, 405011139, 309610278, 250617999, 249702444, 926206244, 955168309, 954344309, 414990691, 9430219, 743491927, 148838770, 131412701, 24719992, 10498367, 989043855, 946562089, 792748802, 404065065, 701956236, 168156987, 923886837, 991882076, 887569811, 86519974, 776390881, 512192144, 392132328, 479842524, 564806054, 173253578, 534745323, 59297463, 650349436};
    vector<int> B = {907864619, 968810083, 9643848, 543656727, 489028595, 959562974, 281807916, 652211066, 413678395, 358684041, 793725394, 302774132, 959624011, 57771538, 195532090, 70802941, 323038422};
    string N = "147740104373302407";
    StrangeArray* pObj = new StrangeArray();
    clock_t start = clock();
    int result = pObj->calculateSum(A, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 523906805;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> A = {242194891, 939817499, 223426007, 375469222, 13489181, 8026367, 225775933, 686696981, 306680501, 902981658, 852198858, 969542527, 684957426, 949247718, 586291085, 900509659, 236365855, 29541917, 839045381, 569536423, 222968230, 262520218, 40101321, 830561235, 153660695, 409161656, 543870357, 208990752, 187078463, 288857692, 505813776, 896938993, 271004364, 986632892, 386303292, 867458113, 924069948, 132480849, 237067781, 639454329, 66560869};
    vector<int> B = {34424878, 427686391, 724143192};
    string N = "947386089663380840";
    StrangeArray* pObj = new StrangeArray();
    clock_t start = clock();
    int result = pObj->calculateSum(A, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 338248221;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> A = {284096804, 585039826, 250526444, 78035828, 37079989, 594470046, 841090121, 178441724, 934476760, 863460188, 480941190, 928342539, 646992400, 927152317, 422467726, 497024445, 388012329};
    vector<int> B = {481856746, 67354350, 707174901};
    string N = "967162083803827021";
    StrangeArray* pObj = new StrangeArray();
    clock_t start = clock();
    int result = pObj->calculateSum(A, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 405116656;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> A = {212195196, 577654347, 239265114, 820001831, 363139744, 431958983, 968077639, 119785149, 921048615, 638080996, 954313791, 614947965, 271614734, 486739707, 482558671, 481246375, 297799615, 597155674, 390972624, 617053743, 566972869, 980712302, 5310220, 465437788, 988647114, 692342905};
    vector<int> B = {309579760, 127597888, 599414044, 101290932, 259102145, 48646504, 630939664, 312082277, 642445142, 56733909};
    string N = "949339274269844660";
    StrangeArray* pObj = new StrangeArray();
    clock_t start = clock();
    int result = pObj->calculateSum(A, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 313767669;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> A = {36988433, 998046815, 562273018, 794518875, 21423993, 973693044, 506668294, 372783593, 976317636, 268593401, 457594531, 69460127, 67781609, 959013641, 962401196, 415082247, 687551499, 421308023, 737937559, 220252082, 19074068, 757591479, 19470809, 654774620, 426801355, 754203924, 309793389, 124912259, 448103274, 29847102, 559923093, 856257820, 670552690, 529374065, 312784203, 587450788, 274941251, 19379253, 841212195, 281991027, 525681325, 742423780, 810907315, 263466292, 989684743, 884975737, 500442518, 681051057, 764854884};
    vector<int> B = {16937772, 108951078, 711172826, 499923703, 157475508, 183050019, 402081362, 486373485, 624256111, 694082461, 566881313, 603656117, 322122867, 796929837, 631824701, 399639881, 627643665, 801995910, 846003601, 86642048, 525284585, 391003143, 758323923, 735129856, 152104251, 608508560, 368724631, 445356608, 406659138, 659566026, 859157078, 779564806, 778801843, 45930356, 310892056, 234382152, 56245612};
    string N = "398419141209143345";
    StrangeArray* pObj = new StrangeArray();
    clock_t start = clock();
    int result = pObj->calculateSum(A, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 71791511;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> A = {64607684, 244422742, 879665517, 39246803, 96469008, 620929593, 546708578, 9643848, 186651203, 598437452, 114322336, 74007385, 889034699, 212958159, 881099887, 616565446, 711783196, 458082827, 812219611, 403912472, 867091891};
    vector<int> B = {660756248, 536515396, 220282601, 491225928, 445570238, 579241309, 793084505, 992217780, 317758720, 737754448, 291268654, 679982909, 396679586, 5890072};
    string N = "36133915219580675";
    StrangeArray* pObj = new StrangeArray();
    clock_t start = clock();
    int result = pObj->calculateSum(A, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 544097840;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> A = {953703421, 692251350, 881435590};
    vector<int> B = {927030243, 967955565, 760704367, 789574877, 520218512, 260872219, 588213751, 416821802, 623523667, 52186651, 740592669, 890469069, 881191442, 831598864, 981749931, 719931638, 860896633, 107272560, 652760399, 784905545, 715170751, 547288430, 873104037, 856379894, 242866298, 919522690, 345439008};
    string N = "331064790795617542";
    StrangeArray* pObj = new StrangeArray();
    clock_t start = clock();
    int result = pObj->calculateSum(A, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 79122691;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> A = {45319986, 168248542, 668843653, 13489181, 576647236, 187108981, 682149723, 39521469, 474532303, 43824579, 25025177, 578173162, 236793115, 382366405, 854274117};
    vector<int> B = {394024475, 364970854, 811822870, 501052888, 517319254, 196478164, 535172582, 210486159, 150852992, 809137241, 760979033, 531296731, 625568407, 778984954, 554521317, 387188329, 311258278, 73030793, 284737693, 361247596, 888943144, 858027893, 323129978, 224341563, 890224921, 506271553, 150700399, 238990447, 910916470, 580370494, 529557176, 269722586, 404705954, 77242347, 895077364, 231574449, 462965788, 713583788};
    string N = "736777855769524216";
    StrangeArray* pObj = new StrangeArray();
    clock_t start = clock();
    int result = pObj->calculateSum(A, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 289724428;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> A = {533280434, 342326120, 666493728, 160435804, 618579668, 906033509, 112552262, 623706778, 185766167, 249641407, 197820978, 263435773, 847254860, 720328379, 828760643, 17151402, 320352793, 76479384, 498092593, 602374340, 365245521, 800042725, 973540452, 575823236, 232093264, 879116183, 574205755, 628955961, 399609363, 718039490, 66347239, 26215399, 885647144, 330118717};
    vector<int> B = {709219641, 591845454, 911343729, 470290231, 482802819, 151829584, 200201422, 863002410, 28473769, 837458418, 693014313, 182622760, 333475753, 156071657, 960051271, 941587572, 691244239, 235847041, 91708120, 943082979, 967864009, 150730918, 349314859, 454634235, 706900234, 731406598, 356364635, 758537553, 103122043, 769188512, 112460707, 235389263, 376537369, 18524735, 610614337, 637195959, 578295236, 904721213, 339182714, 706137272};
    string N = "487197485274819177";
    StrangeArray* pObj = new StrangeArray();
    clock_t start = clock();
    int result = pObj->calculateSum(A, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 922974898;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> A = {795281838, 732932523, 573747978, 874752037, 647572252, 363567003, 425855281, 166234321, 989165929, 411114841, 904171880, 354899746, 93508713, 463881344, 517624439, 591937009, 972472304, 590380565, 248573259, 866451002, 350352488, 41749320, 570757164};
    vector<int> B = {576036866, 77944273, 635578478, 422620319, 231940672, 141575365, 352549821, 542039246, 80172124, 924741355, 177709280, 68239387, 920194097, 877376628, 716574602, 818109683, 901577806, 250129703, 618091372, 141941587, 581163975, 48951689, 335612048, 766167180, 20538956, 866847743, 256904812, 528061769, 206335642};
    string N = "450270088808862575";
    StrangeArray* pObj = new StrangeArray();
    clock_t start = clock();
    int result = pObj->calculateSum(A, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 73606226;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> A = {573503830, 744895779, 47425763, 777123325, 913815729, 313150425, 826960051, 229712820, 450209051, 218634601, 974730674, 968993194, 358317819, 95004119, 607837153, 89602343, 516678365, 318948942, 59633167, 701315347, 766563921, 355418561, 468855861, 286843470, 462874233, 230018005, 987701040};
    vector<int> B = {202673421, 597308267, 284524063, 140293588, 728324228, 275093844, 871669667, 362987151, 570940275, 826471755, 145878475, 257271034, 231147190, 333964049, 606006042, 587115085};
    string N = "409802545243690298";
    StrangeArray* pObj = new StrangeArray();
    clock_t start = clock();
    int result = pObj->calculateSum(A, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 100841698;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> A = {551316873, 948637348, 136844996, 69887386, 363017670, 950621051, 55909909, 828516495, 666585283, 920743430, 645619067, 131626331, 824030274, 398602252, 910641804, 594470046, 601428266, 750205999, 259224219, 973174230, 287545396, 938169499, 817804498, 346079897};
    vector<int> B = {774712363, 403088473, 411450544, 297036652, 634235663, 962706381, 491866817, 256691183, 717184972, 134647663, 793572801, 658497878, 311655018, 789544358, 274666, 65187536, 388012329, 540147099, 201879940, 922452467, 963377788, 773308511, 423902096, 95522934, 116122928, 730582598, 10437330, 845545823, 682699056, 544022949, 141972106, 401287881, 166508987, 633381145, 268837549, 783165990, 891750846, 370616779, 742423780, 35187841, 931852168, 418439283, 424573503, 521500289, 845240638, 649006622};
    string N = "545915097506637775";
    StrangeArray* pObj = new StrangeArray();
    clock_t start = clock();
    int result = pObj->calculateSum(A, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 414366630;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> A = {48646504, 670979949, 234565263, 759483626, 515518662, 820978423, 986236152, 338908047, 955809198, 919705801, 566179387, 566209906, 585100863, 459395123, 580309457, 876369518, 841303750, 398510696, 837122714, 291512802, 814630573, 496047853, 470503860, 677938169, 602008117, 873836481, 376964629, 59724723, 491134372, 89236121, 123233741, 520157475, 381054109, 498428296, 981322672, 722434156, 345225379, 191930906, 246253852, 580584124, 743491927, 284066286, 493758964, 112186040, 789178136, 836695455, 933194982, 4058961};
    vector<int> B = {977202673, 199194311, 512833033, 921689504, 280312509, 45899838, 933042390, 94424268, 518601031, 891628772, 224097415, 207312234, 809381389, 367198706, 44709616, 130588702, 503433332, 36042359, 357280190, 518448438, 513626514, 33112582, 636646626, 808160649, 442579424, 306894131, 268105105, 651020844, 415234839, 746757408, 291238135, 305764946, 22827845, 975829340, 145481734, 26612140, 284524063};
    string N = "748649555955687124";
    StrangeArray* pObj = new StrangeArray();
    clock_t start = clock();
    int result = pObj->calculateSum(A, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 794303124;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> A = {32685323};
    vector<int> B = {134434034, 343485824, 696462904, 628345591, 566698202, 929990539, 664143803, 413068025, 541947691, 838312936, 970030823, 803186132, 247108371, 699636829, 644978179, 433149204, 97842341, 810449537, 669179357, 253578295, 68758201};
    string N = "976470229194006164";
    StrangeArray* pObj = new StrangeArray();
    clock_t start = clock();
    int result = pObj->calculateSum(A, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 25703612;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> A = {939573351, 351603747, 7019257, 875392925, 738639484, 327341532, 775444807, 40040284, 164983062, 296823023, 91830195, 503982665, 270058290, 282143620, 861293374, 138523514, 180394909, 181432538, 55909909, 527665028, 142765587, 758659627, 370525223, 126560258, 672811059, 323068941, 809503463, 625782036, 88106936, 254219183, 736747337, 926267281, 207831049, 28839991, 419721060, 632221442, 499130222, 906094546, 599047822, 467696157, 452314828, 927213354, 114413892, 523453474, 465804010, 385723441, 118747520, 739707632, 21912289};
    vector<int> B = {425031281, 911191137, 531998657, 435163426, 918515579, 920651875, 965514084, 953825495, 289712210, 871120334, 384594256, 496444593, 428052613, 659474471, 903714102, 804345835, 356181524, 977843562, 665608691, 291238135, 805993835, 211157567, 273873104, 371654408, 358806115, 641376995, 305124057, 548722800, 306344798, 489516891, 307565538, 43366801, 888668477, 827021088, 192388683, 245612964, 65095980, 887356181, 423780022, 769310586, 475234229, 809289834, 914059877, 391674550, 744712668, 343089083, 30060731, 659016693, 793816949, 550798059};
    string N = "991149632251960814";
    StrangeArray* pObj = new StrangeArray();
    clock_t start = clock();
    int result = pObj->calculateSum(A, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 211495812;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> A = {32013916, 448103274, 204443494, 997253334, 706167790, 998687704, 319772942, 890957365, 682821131, 964476454, 127780999, 173100985, 250984221, 416364024, 101748710, 865779595, 518936735, 6591998, 853907895, 925778984, 735648670, 129428998, 277932065, 941801202, 824945829, 443372905, 607989745, 83162938, 164189580, 660725730, 674489577, 456923123};
    vector<int> B = {137974181};
    string N = "303659169286172063";
    StrangeArray* pObj = new StrangeArray();
    clock_t start = clock();
    int result = pObj->calculateSum(A, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 789930121;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> A = {498519852, 285012359, 986358226, 767723624, 64149906, 863979003, 64485610, 160557878, 786828211, 642597735, 937406537, 768913846, 719962157};
    vector<int> B = {250251777, 848414563, 968688009, 917966246, 477309488, 65614795, 538041322, 798669392, 312784203, 393780327, 246986297, 1000000000, 499893185, 133243812, 104892117, 261726737, 14831995, 267769402, 922788171, 364329966, 376323740, 161839655, 346018860, 655232398, 190893276, 548997466, 14252143, 194524979, 841090121, 92593157, 4303109, 51149021, 722434156, 299996948, 212652974, 780297250, 935422833, 71413312, 833582567};
    string N = "529221472823267311";
    StrangeArray* pObj = new StrangeArray();
    clock_t start = clock();
    int result = pObj->calculateSum(A, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 768513728;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> A = {589220862, 396221808, 370494705, 358989226, 867976928, 792199468, 542649616, 592547379, 427167577, 805810724, 15961180, 866145817, 816583758, 133976256, 161290322, 183172093, 178807947, 390392773, 513046662, 313760795, 582964568, 729667043};
    vector<int> B = {21973326, 662038026, 547593615, 903042695, 12756736, 18189031, 909665211, 277291177, 252906888, 976622821, 695059053, 847346415, 39399395, 301187170, 147709585, 774498733, 708975493, 19257179, 572923978, 481429486, 478652302, 525193029, 151280251, 834742271, 22492141, 475020599, 380046998, 446913052, 690939054, 753440961, 297067171, 628681295, 779045991, 294137394, 144596697};
    string N = "664998321481978820";
    StrangeArray* pObj = new StrangeArray();
    clock_t start = clock();
    int result = pObj->calculateSum(A, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 51362247;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> A = {628833887, 450666829, 818292794, 789788506, 430951872, 3906369, 804712057, 315530869, 127048554, 910122989, 659596545, 360698263, 171788689, 205847346, 570238349, 971312601, 103366191, 747886593, 53041169, 838892788, 625049592, 592852565, 938505203, 970458082, 720114749, 277779473, 654988250, 462141788, 456099124, 32135990, 717764824, 657551805, 634907071, 452772606, 829004791, 471938230, 944669942, 672933133, 495742667, 163975951, 770043031, 556657612, 571520126, 335825678, 316812646};
    vector<int> B = {950071718, 627918332, 443006683, 207190160, 520218512, 562791833, 595294045, 202154606, 213171788, 350657673, 929929502, 206854457, 862758262, 342448194, 338236640, 215704824, 980437635};
    string N = "35096285897396771";
    StrangeArray* pObj = new StrangeArray();
    clock_t start = clock();
    int result = pObj->calculateSum(A, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 834485667;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> A = {258522293, 610522782, 296792504, 665059358, 817438276, 473128452, 14770958, 822046571, 728080080, 652974028, 569933164, 382244331, 841242713, 520096438, 585070345, 778496658, 454664754, 892757957, 971068453, 680928983, 849208044, 553697317, 3112887, 893307290, 225653859, 565294351, 701925, 438367870, 72847682, 289498580, 891933957, 989196447, 498977629, 519516586, 444257942, 302407910, 556840723, 628681295, 442365794, 809717093, 94515823, 143467513, 594470046, 23590807, 162816248};
    vector<int> B = {646412549, 448500015, 914120914, 510452589, 415265358, 99246192};
    string N = "352916043580431531";
    StrangeArray* pObj = new StrangeArray();
    clock_t start = clock();
    int result = pObj->calculateSum(A, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 313722336;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> A = {967772453, 696646015, 864772484, 78615680, 434247871, 420148319, 671040986, 692526017, 605914487, 531235694, 461531418, 943937498, 488296, 848139896, 166783654, 385509811, 427442243, 40864284, 982451857, 313791314, 847224341, 177648243, 354533524, 937803277, 490615558, 492294076, 303109836, 533890804, 19165623, 28046510, 114566484, 493453779, 7538071, 315408795, 934629352, 668904690, 529679250, 738486892, 292733542, 925290688, 129520554, 747886593};
    vector<int> B = {89724417, 302987762};
    string N = "705069124423963133";
    StrangeArray* pObj = new StrangeArray();
    clock_t start = clock();
    int result = pObj->calculateSum(A, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 850398123;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> A = {697958311, 357005523, 604632709, 374431592, 465895565, 672109134, 62440870, 12268440, 856379894, 574907681, 172399060, 104342783, 683462019, 676381725, 441846980, 607715079, 138828699, 712668233, 229285561, 246009704, 153630176, 84109012, 252021851, 612079226, 215552232, 29419843, 189153721, 983489486, 47090060, 215369121, 36805322, 882106997, 51606799, 24231696, 371379741, 909512619, 933042390, 319437238, 177190466, 888332773, 395580919, 971160008};
    vector<int> B = {395184179, 842127750, 330027161, 922696615, 848139896, 844050416, 392468031, 79378643, 699301126, 265999328, 381817072, 800988799, 100619525, 459395123, 322367015, 278511917, 186376537, 398815881, 657948545, 577593310, 68941312, 319986571, 463362529, 628620258, 992736594, 882747886, 79714346, 945738090, 302468947, 891048921, 80050050, 355388042, 382518997, 100650044, 970915860, 516129032, 222693563, 146122623, 536820581, 510330515, 767662587};
    string N = "79165013580736716";
    StrangeArray* pObj = new StrangeArray();
    clock_t start = clock();
    int result = pObj->calculateSum(A, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 50658642;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> A = {705496383, 821222571, 535996581, 255958738, 852137821, 248176519, 648487807, 755851924, 787804803, 293435468, 481215857, 775872066};
    vector<int> B = {901516769};
    string N = "289834284493545335";
    StrangeArray* pObj = new StrangeArray();
    clock_t start = clock();
    int result = pObj->calculateSum(A, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 22414484;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> A = {499984740, 85146641, 965758232, 809900204, 137577440, 120456556, 134647663, 121005890, 822717978, 992706076, 385570848, 814355906, 257881405, 581133457, 620075075, 66560869, 768944364, 840357676, 677999206, 747154148, 80111087, 100100711, 562913907, 367534409, 591051973, 859370708, 184606463, 477889339, 311838129, 605700857, 26032288, 292214728, 112796411, 691610461, 639759514, 823175756, 444807275, 798272652, 381084627, 307901242, 186437574, 18738364, 283730582, 206488235, 774681844, 91586046, 484176152, 553331095};
    vector<int> B = {274666585, 815942869, 101138340, 943723868, 545487838, 179479354, 976653340, 936368907, 157658619, 230872524, 184087649, 152989288, 219092379, 227027191, 710928678, 856746116, 765190588, 87618640, 220526749, 289986877, 869869075, 687002166, 301278725, 553636280, 133487960, 15533921, 107516708, 308114871, 704062013, 741325113, 799676503, 78432569, 487533188, 203222754, 689474166, 443586535, 704458754, 367412335};
    string N = "613635670033875545";
    StrangeArray* pObj = new StrangeArray();
    clock_t start = clock();
    int result = pObj->calculateSum(A, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 36957670;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> A = {777367473, 621539963, 625568407, 399884029, 29694509, 845851008, 88595233, 362590411, 806634723, 357737968, 511429181, 759666737, 995971556, 517563402, 241218298};
    vector<int> B = {764702291, 930661946, 264381847, 146824549, 213202307, 278572954, 571703238, 876552629, 953733939, 613879818, 858272041, 250892666, 794640949, 201239051, 760063478, 571367534, 703085421, 24475844, 169988097, 126346629, 412060914, 590197454, 951597643, 675649281, 91860713, 538315988, 232245857, 194708090, 242378002, 590563676, 683462019, 660023804, 462111270, 867763298, 693044831, 156437879, 250679036};
    string N = "447859126560258796";
    StrangeArray* pObj = new StrangeArray();
    clock_t start = clock();
    int result = pObj->calculateSum(A, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 251754120;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> A = {500595110, 815637684, 554063539, 776055177, 834772789, 874599444, 436841944, 216162602, 446028015, 654103213, 33845027, 292306283, 594744712, 141087069, 580126346, 211798455, 421002838, 128635517, 556260872, 453413495, 227454451, 992584002, 483779412, 5523850, 889095736, 86886196, 863490707, 177037873, 546189764, 290108951, 662129581, 761436811, 236793115, 732566301, 254615924, 835718863};
    vector<int> B = {624958037, 237250892, 227240821, 975371562, 480666524, 504348887, 948698385, 166631061, 68269905, 571337015, 314737388, 197363200, 99246192, 579821161, 573137607, 807245094};
    string N = "88503677480391857";
    StrangeArray* pObj = new StrangeArray();
    clock_t start = clock();
    int result = pObj->calculateSum(A, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 143292585;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> A = {379589220, 990203558, 4333628, 776940214, 455000457, 610675374, 542222357, 147007660, 848750267, 552232428, 445051423, 968993194, 652760399, 746482741, 795403912, 862910855, 903836176, 892208624, 569627979, 181340983, 198828089, 734305856, 426129947, 769951475, 38789025, 157139805, 50233466, 57557908, 182256538, 248634296, 586931974, 883327738, 790246284, 991302224, 192602313, 965849787, 642872402, 736442152, 237525559, 421430097};
    vector<int> B = {209967345, 118015076, 189642017, 237434003, 856349375, 561876277, 711355937, 106723227, 962767418, 47059541, 518814, 529953917, 244575334, 275673696, 906888027, 591448713, 48829615, 906460768, 854701376, 315439313, 910794396, 9796441, 103976561, 8362071, 151799066, 399395733, 380443739, 493942075, 799493392, 996948149, 405590990, 646778771, 611072115, 886593218, 359141819, 131534775, 481856746, 214911343, 803735465, 752983184, 19562364, 593035676, 104007080, 323801385, 565874202, 156468398, 871211890, 456282235, 446485793, 940183721};
    string N = "634632404553361613";
    StrangeArray* pObj = new StrangeArray();
    clock_t start = clock();
    int result = pObj->calculateSum(A, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 458713672;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> A = {723532822, 77883236, 819666127, 284829248, 2868739, 452833643};
    vector<int> B = {956205938, 389934995, 246894741, 732200079, 15655995, 724112674, 91525009, 502639851, 254036072, 971007415, 630726035, 547379985, 627063814, 848017822, 458967864, 343150120, 423505355, 830866420, 622119815, 833063753, 72664571, 357005523, 132572405, 505508590, 31434064, 788537247, 205481124, 311563463};
    string N = "731284524063844721";
    StrangeArray* pObj = new StrangeArray();
    clock_t start = clock();
    int result = pObj->calculateSum(A, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 646765107;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> A = {451063570, 478835413, 285592211, 122318185, 559343241, 751976073, 127445295, 247779778, 325449385, 739005706, 171605578, 515549180, 73366496, 585650196, 127933591, 855159154, 337351603, 220923490, 114047669, 699148533, 962614825, 180150761, 811883907, 639210180, 762565996, 757652516, 633564256, 52552873, 264259773, 896359141, 678762169, 355571153, 572649311, 719321268, 764030884};
    vector<int> B = {40437025, 885372478, 110782189, 305764946, 151493881, 689168980, 251655629, 337900936, 356975005, 169103061, 516708883, 445570238, 272957548, 862269966, 639179662, 896206549, 195471053, 86245307, 549455244, 748863185};
    string N = "871364482558671834";
    StrangeArray* pObj = new StrangeArray();
    clock_t start = clock();
    int result = pObj->calculateSum(A, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 687744046;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> A = {223639637, 642994476, 51423688, 937620166, 112002929, 87679677, 171330912, 866389965, 509079256, 199743644, 364787743, 378551591, 649891659, 880031739, 611560411, 988616595, 130222479, 423749504, 278176213, 339396343, 293343913, 485183263, 849757377, 132541886, 64149906, 700186162, 686666463, 982604449, 11871700, 623432111, 838404492, 100955229, 922360911, 136143070, 444868312, 216834009, 661458174, 980986968};
    vector<int> B = {757164220, 640003662, 610827967, 579973754, 308420056, 872890408, 456953642, 792016357, 266731772, 677602465, 615253151, 765953550, 500442518, 4181035, 69917905, 545701467, 387951292, 686696981, 911252174, 583666493, 902768028, 312784203, 351268044, 818292794, 5310220, 173650318, 499435407, 472701193, 872493667, 700125125};
    string N = "793450727866451002";
    StrangeArray* pObj = new StrangeArray();
    clock_t start = clock();
    int result = pObj->calculateSum(A, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 783663401;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> A = {291360209, 565599536, 942136906, 683309427, 942625202, 930295724, 527390362, 985076448, 577654347, 265846736, 214850306, 591998046, 492751853, 80233161, 789788506, 721243934, 818445387, 136844996, 997528000, 529740287, 404583880, 423505355, 761955626, 84109012, 36133915, 130863368, 374614703, 418530838, 384716330, 422406689, 310739463, 711386455, 602984710, 275978881, 828394421, 112704855, 967925046, 179540391, 7232886, 253028962, 479049043, 961241492, 383037812, 965178380, 818048646, 535477767, 833857234};
    vector<int> B = {250251777, 575853755, 846766563, 874599444, 18951994, 153721732, 791283913, 16113773, 639484847, 244361705, 398998992, 345042268, 823511459, 299233985, 56245612, 980132450, 881099887, 888546403, 50843836, 562273018, 876186407, 360148930, 220618305, 434034241, 713492233, 703360087, 986754966, 664326914, 688619647, 24231696, 553086947, 575609607, 531907101, 538285470, 552873317, 929013946, 478102969, 487197485, 923642689};
    string N = "996337778862880336";
    StrangeArray* pObj = new StrangeArray();
    clock_t start = clock();
    int result = pObj->calculateSum(A, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 483574295;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> A = {292306283, 668416394, 484115115, 503463850, 651051362, 276467177, 640461439, 993041779, 605273598, 248542741, 909512619, 561937314, 975585192, 291329691, 165532395, 103335673, 34028138, 233680227, 487136448, 186773277, 156743064, 194006164, 279305398, 816370128, 173406170, 656117435, 671132541, 363261818, 195806756, 109500411, 219885860, 577867976, 205603198, 410382396, 453321939, 88473158, 183507797, 519455549, 280739768, 292641987, 60548722};
    vector<int> B = {773155919, 804742576, 47120578, 272804956, 344096194, 564470351, 63020722};
    string N = "885494552446058534";
    StrangeArray* pObj = new StrangeArray();
    clock_t start = clock();
    int result = pObj->calculateSum(A, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 77627318;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> A = {412335581, 276345103, 149266029, 361857966, 51911984, 32837916, 332529679, 18127994, 771416364, 889278847, 478438673, 155613879, 471175267, 939909054, 417889950, 440412610, 176580095, 536820581, 309854426, 249458296, 694906460, 944364757, 803369243, 810174871, 320902127, 846949674, 638447218, 21881771, 497726371, 991943113, 843256935, 490157780, 838923306, 748130741, 182836390, 805169835, 418042542, 861934263, 16113773};
    vector<int> B = {595629749, 732413708, 191778313, 217505417, 389172032, 246345408, 702444532};
    string N = "741874446852015747";
    StrangeArray* pObj = new StrangeArray();
    clock_t start = clock();
    int result = pObj->calculateSum(A, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 328285318;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> A = {500167851, 529770805, 150334177, 638508255, 190435499, 787621692, 830347605};
    vector<int> B = {919644764, 338847010, 501754814, 805597094, 853968932, 317026276, 139774773, 425580614, 635608996, 314462721, 317423017, 791131321, 619098483, 797570726, 546006653, 136173589, 298257393, 197332682, 294717246};
    string N = "921384319589831232";
    StrangeArray* pObj = new StrangeArray();
    clock_t start = clock();
    int result = pObj->calculateSum(A, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 109970166;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> A = {523453474, 586260567, 507644886, 769188512, 342539750, 743430890, 93386638, 138920255, 955717642, 426007873, 410901211, 295632801, 542680135, 339609973, 109469893, 493057039, 237128818, 898068178, 2929776, 624073000, 856990264, 657887508, 890652180, 383007293, 542527542, 28717917, 552201910, 906216620, 959349345, 289834284, 822168645, 172673726, 221625415, 444746238};
    vector<int> B = {151432844, 945646534, 192693868, 944975127, 560838648, 536179692, 318582720, 814264351, 393627735, 170659504, 651081881, 204351939, 773339030, 242866298, 216589861, 913632618, 172551652, 231879634, 386700033, 899838251, 999572740, 567674794, 407300027, 318491164, 608722190, 224829859, 741874446, 117618335, 640858180, 326181829, 385509811, 720480971, 100100711, 537583544, 806115909, 827478865, 73244422};
    string N = "106753746147038178";
    StrangeArray* pObj = new StrangeArray();
    clock_t start = clock();
    int result = pObj->calculateSum(A, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 524569475;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> A = {497909482, 323587755, 998199407, 136356700, 885830256, 695638904, 940702536, 134647663, 407391582, 599078341, 773064363, 167577135, 243934446, 707358012, 323221533, 706839197, 613605151, 966002380, 454084902, 564531388, 377513962, 399548326};
    vector<int> B = {768303476, 403973509, 632190923, 959379863, 189825128, 619678334};
    string N = "868373668630024109";
    StrangeArray* pObj = new StrangeArray();
    clock_t start = clock();
    int result = pObj->calculateSum(A, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 134028081;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> A = {117862483, 385143589, 20203253, 36286507, 28412732, 18463698, 386730552, 53254799, 879787591, 1647999, 93081453, 163762321, 268013550, 453108310, 563921018, 254341257, 551469466, 743858149, 848658711, 189001129, 601519821};
    vector<int> B = {369335001, 631336405, 904446546, 141911069, 57496871, 531510361, 632251960, 706656086, 19226660, 977446821, 404583880, 748588518, 747978148, 432721945, 499099703, 929654835, 274056215, 257850886, 979369487, 123783074, 280800805, 987578966, 987762077, 164311655};
    string N = "578936124759666737";
    StrangeArray* pObj = new StrangeArray();
    clock_t start = clock();
    int result = pObj->calculateSum(A, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 411637505;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> A = {866267891, 207678456, 498092593, 320902127, 355784783, 484725486, 666280098, 109530930, 237311929, 717123935, 480819116, 702871791, 629596850, 173986022};
    vector<int> B = {758018738, 281502731, 602496414, 310220648, 639484847, 401470992, 45319986, 286629840, 656880397, 925260170, 497878963, 601489303, 462477492, 955259865, 975829340, 739494003};
    string N = "946104312265388958";
    StrangeArray* pObj = new StrangeArray();
    clock_t start = clock();
    int result = pObj->calculateSum(A, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 54069302;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> A = {244636371, 445783867, 505325479, 110782189, 123294778, 555406353, 480605487, 649403363, 983367412, 940397350, 252571184, 86031678, 816125980};
    vector<int> B = {812768944, 126926480, 177953428, 827051606, 625080111, 39551988, 737083040, 221442304, 337961973, 878505813, 289315469};
    string N = "321390423291726432";
    StrangeArray* pObj = new StrangeArray();
    clock_t start = clock();
    int result = pObj->calculateSum(A, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 626491548;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> A = {978179265, 131595812, 148594622, 499008148, 243263039, 125431073, 129459517, 678975798, 306222724, 216010010, 756035035, 895748771, 993621631, 259773552, 949491866, 413403729, 929776909, 634357737, 325540940, 639301736, 629474776, 84810937, 280373546, 990783410};
    vector<int> B = {522659993, 775078585, 461500900, 607898190, 441755424, 950529496, 404553361, 567766350, 603228858, 118442335, 617511520, 757164220, 614612262, 152104251, 893185216, 59877315, 538010803, 224982451, 131626331, 14404736, 541734061, 981200598, 453657643, 598742637, 170720542, 848689230, 886410107, 298348948, 767845698, 901211584, 402508621, 113742484, 76174199, 175267799, 594134342, 663533433, 555040131, 848506118, 762840662, 39429914, 439191869, 185552537, 706930753};
    string N = "57649464400158696";
    StrangeArray* pObj = new StrangeArray();
    clock_t start = clock();
    int result = pObj->calculateSum(A, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 911247825;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> A = {2, 3, 4};
    vector<int> B = {2, 3};
    string N = "3";
    StrangeArray* pObj = new StrangeArray();
    clock_t start = clock();
    int result = pObj->calculateSum(A, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 95;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> A = {2, 3, 4};
    vector<int> B = {2, 3};
    string N = "5";
    StrangeArray* pObj = new StrangeArray();
    clock_t start = clock();
    int result = pObj->calculateSum(A, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 192;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> A = {1, 2, 3, 4};
    vector<int> B = {1};
    string N = "1000000000";
    StrangeArray* pObj = new StrangeArray();
    clock_t start = clock();
    int result = pObj->calculateSum(A, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 607570807;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> A = {1, 2, 3, 4};
    vector<int> B = {1};
    string N = "4";
    StrangeArray* pObj = new StrangeArray();
    clock_t start = clock();
    int result = pObj->calculateSum(A, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 288;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> A = {1, 2, 3, 4};
    vector<int> B = {1};
    string N = "5";
    StrangeArray* pObj = new StrangeArray();
    clock_t start = clock();
    int result = pObj->calculateSum(A, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 289;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> A = {1, 2, 3, 4};
    vector<int> B = {1, 1, 1, 1};
    string N = "5";
    StrangeArray* pObj = new StrangeArray();
    clock_t start = clock();
    int result = pObj->calculateSum(A, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> A = {1, 2, 3, 4};
    vector<int> B = {1, 1, 1, 1};
    string N = "1000000000";
    StrangeArray* pObj = new StrangeArray();
    clock_t start = clock();
    int result = pObj->calculateSum(A, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 733820262;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> A = {1, 2, 3, 4};
    vector<int> B = {1, 1, 1};
    string N = "1000000000";
    StrangeArray* pObj = new StrangeArray();
    clock_t start = clock();
    int result = pObj->calculateSum(A, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 263302623;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> A = {1, 2, 3, 4, 1, 2, 3, 4};
    vector<int> B = {1, 1, 1};
    string N = "1000000000";
    StrangeArray* pObj = new StrangeArray();
    clock_t start = clock();
    int result = pObj->calculateSum(A, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 263302623;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> A = {1, 2, 3, 4};
    vector<int> B = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    string N = "854834883";
    StrangeArray* pObj = new StrangeArray();
    clock_t start = clock();
    int result = pObj->calculateSum(A, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 704317424;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> A = {999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999};
    vector<int> B = {999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999};
    string N = "1000000000000000000";
    StrangeArray* pObj = new StrangeArray();
    clock_t start = clock();
    int result = pObj->calculateSum(A, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 627826426;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> A = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43};
    vector<int> B = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47};
    string N = "1000000000000000000";
    StrangeArray* pObj = new StrangeArray();
    clock_t start = clock();
    int result = pObj->calculateSum(A, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 823429413;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> A = {1};
    vector<int> B = {1};
    string N = "999999999999999999";
    StrangeArray* pObj = new StrangeArray();
    clock_t start = clock();
    int result = pObj->calculateSum(A, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> A = {2, 3, 5, 3, 4, 6, 5, 7, 8, 10};
    vector<int> B = {2, 5, 8, 7, 4, 10};
    string N = "118";
    StrangeArray* pObj = new StrangeArray();
    clock_t start = clock();
    int result = pObj->calculateSum(A, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 528375313;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> A = {80880566, 274380679, 497631781, 991871674, 231779267, 880930248, 751392988, 538514181, 190681852, 706628075, 891304974, 615974751, 134156481, 744788790, 201648688, 226948856, 355254977, 84625892, 425722445, 372637236, 76535170, 260740002, 887952518, 953602858, 692387037, 73201682, 192463501, 25305128, 555302016, 205417803, 203468841, 261909036, 634159211, 460141654, 496452534, 554561900, 642876787, 350881202};
    vector<int> B = {459159202, 227125711, 671814081, 901189074, 453735920, 197897586, 806354260, 135838106, 964973241, 611400485, 879135355, 517296870, 809632422, 825866987, 357142108, 410316034, 848359543, 608539261, 509962608, 713105715, 315350144, 391727559, 269930500, 885529389, 799165734, 588906345, 816702138, 479655322, 693456742, 45278008, 632067846, 805168794, 519538510, 622804155, 352776113, 286211133, 867045506, 140077998, 241304922, 689973515, 468692665, 78184578, 12326128, 604397692, 851758654, 568217307};
    string N = "99793281947197801";
    StrangeArray* pObj = new StrangeArray();
    clock_t start = clock();
    int result = pObj->calculateSum(A, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 714122134;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> A = {763482, 507994225, 336998087, 139595266, 391759349, 1482488, 26271964, 56984962, 3632966, 369061984, 118356294, 21584435, 675033469, 284011294, 950107900, 70625336, 194067152, 902941086, 257664507, 268160768, 37401251, 560603, 80854945, 621620814, 106948181, 230373202, 86565994, 304032287, 222076007, 102781365, 549671043, 62716990, 33580606, 79973769, 137606167, 138793917, 709036800, 773949453, 36574608, 79392094, 318783102, 416632548, 368407002, 329623351, 368040251, 106727202, 204160817, 341011495, 133177215, 236367107};
    vector<int> B = {160230719, 213890559, 29350663, 28819910, 567335637, 178902427, 87718992, 289067685, 110427865, 456302417, 39202308, 52837521, 26155328, 1755870, 554178792, 34651128, 217057192, 144226412, 108145920, 719443992, 68519637, 488809004, 65452669, 437792977, 278578391, 339148219, 407416479, 299360308, 760660886, 437916929, 146010993, 236016598, 453544877, 186503857, 486795289, 596998739, 536702745, 480267265, 700158561, 186907371, 101317025, 123784888, 6547004, 479921898, 131197645, 82158432, 248738959, 899341600, 304127594, 55420224};
    string N = "1000000000000000000";
    StrangeArray* pObj = new StrangeArray();
    clock_t start = clock();
    int result = pObj->calculateSum(A, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 261355931;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=14946025&rd=11121&pm=8086
********************************************************************************
#include <algorithm> 
#include <cassert> 
#include <cctype> 
#include <cmath> 
#include <complex> 
#include <cstdio> 
#include <cstdlib> 
#include <cstring> 
#include <ctime> 
#include <deque> 
#include <functional> 
#include <iterator> 
#include <iostream> 
#include <list> 
#include <map> 
#include <numeric> 
#include <queue> 
#include <set> 
#include <string> 
#include <valarray> 
#include <vector> 
 
using namespace std; 
 
const int MAXN = 100; 
const int inf = 1000000000; 
const double eps = 1e-8; 
const double PI = 3.1415926535897932384626433832795; 
 
typedef vector<int> vi; 
typedef vector<vi> vvi; 
typedef long double ld; 
typedef vector<ld> vd; 
typedef pair<int,int> pii; 
typedef vector<pii> vp; 
typedef queue<int> qi; 
typedef queue<pii> qp; 
typedef map<string,int> msi; 
typedef map<string,string> mss; 
typedef long long ll; 
 
#define MP make_pair 
#define all(v) (v).begin(), (v).end() 
 
int gcd(int a, int b) 
{ 
  if(!b) 
    return a; 
  return gcd(b, a % b); 
} 
 
const ll MOD = 1000000007; 
 
class StrangeArray 
 { 
   ll pow(ll a, ll n) 
   { 
     if(n == 0) 
       return 1; 
     if(n == 1) 
       return a % MOD; 
     ll res = pow(a, n / 2); 
     res = (res * res) % MOD; 
     if(n % 2) 
       res = (res * a) % MOD; 
     return res; 
   } 
   ll geom(ll a, ll n) 
   { 
     if(n == 0) 
       return 0; 
     if(n == 1) 
       return 1 % MOD; 
     ll result = geom(a, n / 2); 
     ll t = pow(a, n / 2); 
     result = (result * (1 + t)) % MOD; 
     if(n % 2) 
       result = (result + pow(a, n - 1)) % MOD; 
     return result; 
   } 
  public: 
  int calculateSum(vector <int> A, vector <int> B, string N)  
  { 
    int result; 
    int lcm = A.size() * B.size() / gcd(A.size(), B.size()); 
    istringstream in(N); 
    ll n; 
    in >> n; 
    result = 0; 
    ll t = lcm / B.size(); 
    for(int i = 0; i < lcm; i++) 
    { 
      int a_index = i % A.size(); 
      int b_index = i % B.size(); 
      int b_add = i / B.size(); 
      ll initial = pow(A[a_index], B[b_index] + b_add); 
      if(n <= i) 
        break; 
      ll maxk = (n - i - 1) / lcm; 
      ll geom_osn = pow(A[a_index], t); 
      ll sum = geom(geom_osn, maxk + 1); 
      result = (result + (initial * sum) % MOD) % MOD; 
    } 
    return result; 
  } 
   
 
}; 
 
 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/