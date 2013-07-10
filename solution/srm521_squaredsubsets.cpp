/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11438
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

class SquaredSubsets {
public:
    long countSubsets(int n, vector<int> x, vector<int> y);
};

long SquaredSubsets::countSubsets(int n, vector<int> x, vector<int> y) {
    long ret;
    return ret;
}


int test0() {
    int n = 5;
    vector<int> x = {-5, 0, 5};
    vector<int> y = {0, 0, 0};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int n = 10;
    vector<int> x = {-5, 0, 5};
    vector<int> y = {0, 0, 0};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int n = 100000000;
    vector<int> x = {-1, -1, -1, 0, 1, 1, 1};
    vector<int> y = {-1, 0, 1, 1, -1, 0, 1};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 21;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int n = 5;
    vector<int> x = {5, 3, 6, 2, 1, 6, 4, 4, 7, -1, -4, -7, 2, -2, 0};
    vector<int> y = {0, -1, 8, -5, 2, 5, -8, 8, -6, 4, 3, 2, 7, 3, 5};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 66;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int n = 1;
    vector<int> x = {-1, 0};
    vector<int> y = {0, 0};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int n = 1;
    vector<int> x = {0, 1};
    vector<int> y = {1, 0};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int n = 531441;
    vector<int> x = {27956588, 73764571, 33156707, 86669790, 91033632, 21416055, 35103680, 812036, 90095395, 3372157, 15608216, 63959824, 42936348, 30020164, 45412134, 35866000, 33011901, 37984492, 53135508, 74998502, 2385248, 91104039, 76778929, 36101923, 28083820, 76054014, 71681705, 88427811, 9598839, 65510084, 14954215, 82776094, 80684379, 32980541, 47180435, 40870899, 96543065, 8306038, 84787631, 57511063, 81929406, 13900806, 758339, 47672131, 19832735, 40068108, 88802554, 67720224, 27348087, 13222953};
    vector<int> y = {35507528, 56469336, 60968488, 67459828, 93979096, 18990361, 57282054, 77016004, 63966166, 99063504, 41682934, 10034329, 74695288, 51414023, 24461646, 13280919, 77715426, 48515399, 94585185, 96208387, 42518234, 570595, 93597305, 90608479, 19701521, 7234118, 73309837, 24026214, 2165981, 4410770, 40287156, 18447974, 5455058, 40369739, 42379301, 37938212, 94752215, 88900409, 61793844, 29847710, 91862377, 7538674, 89849402, 40508585, 46902822, 75321061, 86485094, 44239547, 29553678, 14708733};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 50;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int n = 1594323;
    vector<int> x = {9936942, 53846612, 13678606, 54602088, 90584490, 31814093, 57656401, 81134397, 24742931, 64238539, 64592446, 77112743, 44062045, 6584112, 45472485, 31147774, 63851232, 4703294, 8438586, 33352009, 83453599, 43238547, 10310894, 64947090, 31529676, 15169626, 14637877, 58561010, 19191345, 71597331, 71016158, 51499181, 75272986, 65916673, 45581146, 19372989, 73669175, 27987310, 16469935, 7755591, 83534510, 13664919, 10181899, 84667523, 73729327, 22131162, 44068433, 32352537, 42415166, 30974562};
    vector<int> y = {44939465, 52056596, 37823667, 27065784, 45618667, 15350412, 42302050, 97213116, 79454743, 64881684, 66631916, 51563416, 67025424, 26309784, 43305027, 39064671, 60766455, 81551096, 86654712, 77712793, 88307051, 60581427, 89186076, 99003468, 76889295, 97080326, 32068103, 19872919, 26780829, 5370343, 26745610, 57733352, 79278724, 1855674, 17737607, 48611215, 20118840, 46983718, 3770057, 11087893, 41189658, 89279658, 641681, 10064930, 42206372, 38514135, 42534435, 98341149, 56876168, 39645999};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 52;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int n = 4782969;
    vector<int> x = {13710407, 71133026, 8280079, 57855717, 79945128, 9060615, 70311163, 76075350, 65463907, 22542215, 93155200, 74075404, 54234516, 28572840, 18167679, 14962879, 95046780, 77151360, 22928920, 38768112, 42598820, 39585223, 44781933, 98714239, 50472763, 80578803, 74485143, 75433677, 58862068, 72227214, 81164268, 94414945, 58182440, 9955905, 74974262, 12169649, 51438747, 57113006, 65768548, 45549670, 87395983, 30983769, 53531246, 63568500, 85117847, 88947814, 14325996, 20668158, 8644772, 95875919};
    vector<int> y = {47319644, 41100827, 89448021, 65108775, 71898748, 98230027, 40438168, 47946190, 8551752, 19756194, 51754871, 90817586, 5291430, 28971073, 75625582, 67243055, 79230290, 53911218, 99853182, 98536997, 84921500, 50146531, 21424216, 39897104, 21256453, 29049790, 75287374, 8767224, 177242, 36014709, 22822911, 66207038, 82934242, 55149398, 15007246, 326233, 31573692, 69441203, 5252612, 39623616, 85264666, 82345176, 99256870, 10324902, 22467674, 22364973, 29798598, 47171767, 28719658, 79594983};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 58;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int n = 14348907;
    vector<int> x = {25304637, 10215571, 25773393, 84953369, 30656873, 87149875, 19032380, 10939105, 24255171, 6675924, 52684258, 51913879, 94653229, 3151612, 80601579, 45368915, 20854861, 12297732, 69900962, 77496441, 34093679, 17539515, 27173708, 9004490, 77054952, 34552260, 62512265, 30722147, 87395147, 92853377, 71242591, 78511881, 27452699, 88770642, 66025453, 48822959, 24880362, 59923481, 56445902, 2140209, 17492916, 36485136, 87334024, 97508999, 36605601, 95331639, 468888, 93528852, 44962643, 50083521};
    vector<int> y = {26319399, 46937643, 58943879, 7093430, 32122949, 43019879, 35520208, 91414118, 37245290, 6386097, 73078129, 97544260, 27000250, 19427514, 64095967, 98416299, 29151584, 3789102, 49580876, 30282142, 80740393, 12710713, 89494784, 16050804, 67890866, 61057, 6614868, 38347776, 9472440, 17865747, 47110818, 77988894, 48415077, 92132223, 77687271, 88750239, 66626181, 24961697, 21444322, 92047893, 57998292, 45750764, 35120643, 26242280, 25970493, 4154918, 48463251, 83619610, 23635010, 16700010};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 168;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int n = 43046721;
    vector<int> x = {84178848, 10001993, 59814412, 69310569, 62666401, 61335720, 52030824, 30021107, 22934359, 11350177, 90247166, 4932278, 97888873, 46136791, 28905428, 73352507, 95664769, 28254292, 4023203, 94468615, 85097579, 44268352, 85188900, 60833865, 16320280, 92607338, 31673610, 39585453, 34546458, 26142569, 70888040, 30681521, 79901685, 40246773, 8864602, 52216638, 78860959, 42485445, 8562497, 86988366, 50504879, 13031610, 96287140, 88435060, 28923559, 7079605, 41456095, 49021626, 97246598, 8709413};
    vector<int> y = {47751476, 57180802, 7766386, 29334664, 76390174, 75144796, 18784349, 36618632, 13763106, 16862509, 13578920, 85370462, 46802777, 53962591, 60672328, 97927470, 14021138, 13027692, 62810156, 10139211, 62053235, 50567022, 23757731, 55547464, 7904766, 57849984, 84951683, 13796879, 12031049, 3617813, 45404613, 36284576, 94270368, 94180841, 63651164, 71390872, 37216546, 21357779, 20542311, 24906163, 86221242, 99015790, 85689070, 2744374, 73865474, 12121432, 5429919, 44132628, 1509180, 8596775};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 1005;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int n = 2249959;
    vector<int> x = {32967468, 26075786, 43755685, 35845677, 92871911, 11982273, 99908940, 67469422, 66779378, 3748695, 9993685, 16805005, 45694335, 4648279, 26163319, 7271957, 68456600, 52397560, 51553433, 44485410, 57963120, 56069600, 78358401, 51232780, 92798785, 70054244, 99667478, 30357415, 52885428, 12344578, 16412139, 67874486, 29205794, 30707849, 27583042, 89976350, 33841268, 30296763, 88770675, 15041371, 37873589, 96152833, 37954464, 68350569, 18595153, 67759415, 23126022, 86202336, 53589850, 60423787};
    vector<int> y = {43401788, 96511532, 86978111, 65148437, 82673999, 35926021, 56634123, 72850116, 15601246, 30384522, 59669516, 3416610, 54002187, 7524777, 73800140, 56967289, 19948670, 94265055, 62790408, 24701355, 2674950, 83327949, 18504092, 91009471, 63535706, 34456980, 5143362, 47912953, 47973879, 752948, 75234121, 40239424, 9023460, 94428641, 25839378, 64069321, 71110971, 16553259, 11225106, 71427657, 86623648, 39375600, 90921164, 91706339, 78961213, 83335878, 44247164, 93464819, 12278121, 38882715};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 50;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int n = 3375020;
    vector<int> x = {7727509, 29166830, 46181628, 26523553, 70903088, 28809617, 60296567, 65267869, 3725620, 89422306, 61185708, 35725099, 36181723, 76849308, 93942375, 43205446, 49926377, 40724565, 40256108, 50505912, 4305148, 18724443, 55302660, 97930675, 59026886, 19121318, 74840587, 75252245, 85245420, 27449438, 67635395, 71879533, 26395897, 80571694, 46568212, 14767674, 37794785, 55787144, 30073485, 8532761, 8740084, 39576971, 32342564, 79073607, 48125181, 70175810, 62338273, 15638203, 87801968, 10668819};
    vector<int> y = {90650942, 7721865, 39407513, 11399453, 22212056, 50949396, 90603975, 41903425, 54566776, 90327556, 11641316, 45743675, 69621767, 13047030, 81011748, 75360162, 91027758, 44257859, 75161184, 86906192, 13393050, 89164063, 10480058, 55690382, 12666817, 8021131, 63066378, 78148239, 74682850, 58233421, 41599208, 37393193, 29622298, 15773781, 97725801, 28367794, 57576860, 49249416, 23983690, 31105634, 84362996, 71839804, 47792659, 42868889, 31976121, 64911327, 84383724, 28059181, 38105743, 76755489};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 55;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int n = 5062523;
    vector<int> x = {30739142, 89908319, 43627184, 11372188, 42661428, 74282856, 70863370, 44991169, 58581724, 21618630, 74894851, 18209723, 93465818, 57740198, 86956371, 40525668, 93071296, 67527712, 8051258, 85097057, 14628317, 2230669, 55045236, 90021496, 77896529, 82548088, 36182706, 84280372, 78232334, 95116215, 36700490, 2967964, 77004281, 85593695, 46899493, 33282949, 89638377, 45109816, 67211628, 83085191, 77055198, 94859408, 70066280, 42936779, 82296554, 87366784, 51002658, 88461042, 99052853, 60989152};
    vector<int> y = {58775212, 78770048, 81046825, 34121176, 73210040, 33221957, 35728343, 1393683, 91023146, 86480888, 38253786, 43208062, 64785923, 57442938, 83333224, 3845158, 57132687, 49863235, 66221122, 28672838, 64022090, 24451283, 23549490, 21413730, 38769816, 94326919, 75858501, 99637829, 4215590, 19175902, 86429523, 66595587, 51075622, 68370890, 48576925, 77407495, 97959576, 29067360, 97902150, 17762165, 58013199, 50782897, 92989459, 33859779, 87634119, 30206872, 35703447, 36537870, 67573800, 37162899};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 62;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int n = 7593728;
    vector<int> x = {69037816, 60292496, 93933205, 85177554, 67584316, 56907862, 500519, 39995695, 81992333, 83057042, 49812612, 43809238, 10813752, 48959253, 57594560, 81604375, 43699601, 98012242, 47138242, 42811889, 48845696, 31201928, 42248612, 81351449, 98880730, 68610812, 62318341, 95022239, 73712482, 75261431, 91135187, 31048988, 34596210, 45607324, 89932348, 84246198, 53364973, 71435419, 54013620, 38730752, 91604574, 4376144, 21904557, 17692533, 28415832, 73141215, 58388120, 20496122, 38090631, 50896442};
    vector<int> y = {34944424, 54920103, 30541732, 39739568, 7788938, 2637346, 75554073, 11175924, 32489411, 11803112, 77299132, 27116746, 68526569, 6304718, 44468377, 48542752, 13039744, 73450540, 12737416, 14106030, 46224683, 83555462, 24220683, 90127834, 91222196, 38946009, 95522758, 10020206, 82369874, 39191173, 67505145, 84526233, 50603145, 35017933, 30881412, 43514704, 29466144, 7737424, 49992693, 77388617, 68946364, 80889576, 8394336, 13884118, 97064573, 67089389, 6315068, 47945522, 60442016, 24982193};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 85;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int n = 11390627;
    vector<int> x = {84515616, 87585784, 62895820, 84434605, 64824855, 87677870, 34996722, 34553201, 5542885, 92084613, 37265207, 67638398, 97282212, 74476654, 3308965, 38172527, 62303349, 68510148, 64688312, 94046373, 15188281, 23194955, 31378824, 81182186, 27209098, 93042018, 30895289, 25840614, 4121107, 38140238, 2784802, 39046157, 39511538, 51932606, 10321507, 8057371, 64798404, 99656283, 54403014, 36434968, 66466944, 16579646, 99594326, 43329595, 61197891, 40047653, 10777225, 9761867, 25446593, 56422118};
    vector<int> y = {29567699, 25214160, 81691442, 6575648, 36438174, 84109941, 81386132, 4101733, 35357485, 43181821, 80984416, 31078340, 55316267, 17865687, 4639471, 368849, 27633436, 84648617, 23159178, 20700752, 8327687, 4201577, 33739069, 60145912, 66050359, 40574171, 99804034, 65448489, 80555092, 26991660, 32280914, 97642052, 26143787, 80013135, 68107369, 30813496, 50901549, 47984626, 44099987, 35674545, 61934501, 55879877, 23458835, 58371829, 98713960, 41252785, 96533570, 39546675, 62774504, 28198563};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 111;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int n = 17085904;
    vector<int> x = {60551507, 60202914, 87761980, 25304163, 55363411, 69736175, 70205584, 93570796, 80487625, 15686688, 96289667, 79496821, 79732894, 17063233, 28419021, 72773083, 97390413, 69099457, 31163108, 22947448, 7868652, 30719775, 8822440, 24870548, 64335158, 87372581, 17769921, 67949394, 63362661, 45980589, 10039468, 71621182, 72938726, 27935968, 46649590, 89308034, 45126917, 64833429, 40772955, 27802200, 78591995, 89749065, 62602524, 30784850, 40641417, 91947490, 29970808, 35475386, 92891940, 440119};
    vector<int> y = {45849820, 77209144, 8414112, 64910488, 58194775, 6638654, 41117808, 79020729, 97830531, 93322298, 63025481, 37589813, 68214299, 82793572, 74110181, 17856158, 60035338, 32225821, 53260708, 77757936, 77615937, 48832350, 28793432, 92527032, 56674670, 14852629, 63476744, 2567187, 81595522, 63563812, 65164593, 10100868, 66604309, 67488558, 85324459, 92754179, 94525769, 70278840, 72858167, 22851493, 78038203, 53106362, 79138924, 68577384, 96846601, 28818602, 41351926, 58699854, 62836380, 70684438};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 264;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int n = 25628902;
    vector<int> x = {59894386, 60296039, 18745779, 93583575, 3703498, 42536444, 94274400, 46674742, 67238509, 10150559, 16126910, 5606021, 26632492, 84878972, 23535434, 43822173, 5853794, 56019053, 3719988, 23676498, 94608761, 53890228, 90024388, 81844109, 57520282, 49160148, 45542701, 8298074, 89748152, 81647759, 74477203, 34250271, 39629817, 91146422, 84857130, 92354069, 20793970, 75512887, 41685194, 10450262, 56634457, 41681343, 47119652, 27188344, 99824527, 84600242, 85503708, 897463, 57361729, 33479799};
    vector<int> y = {89699648, 37666811, 44768014, 3062983, 78988745, 98319651, 81319435, 59350092, 65420520, 98012637, 48340088, 24599573, 90845341, 2790812, 52357577, 86405749, 44400829, 73488638, 34126760, 45614776, 83831473, 49516568, 35407272, 88083440, 50949070, 75427683, 6685138, 92513391, 15954968, 49507897, 40668773, 43054587, 99460531, 4759319, 21685287, 40095034, 70718618, 18080040, 78462546, 48988525, 74627124, 59496249, 75536582, 94022222, 72844530, 4617450, 75667054, 52986706, 32623360, 24513957};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 466;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int n = 38443333;
    vector<int> x = {23218881, 64083184, 8474696, 38522833, 62539987, 99077520, 86840611, 39572536, 9353333, 6169370, 68078421, 4239373, 74090464, 19729115, 38269227, 94019903, 83546198, 17895956, 48679384, 25270072, 85880790, 55111388, 66467652, 79992731, 73530568, 84163349, 61003579, 32278918, 44142288, 98343717, 33363466, 45323246, 29198011, 61745714, 45343493, 10760467, 93482752, 3545081, 56707412, 17421456, 26821924, 68842409, 90372042, 33280015, 29201541, 62202962, 89253937, 93707258, 30261980, 19239156};
    vector<int> y = {75994880, 95215638, 19672292, 61517968, 80259833, 26286146, 58387697, 42202885, 17698459, 89129295, 30550836, 26216341, 71874284, 14305547, 47542081, 2205874, 2030657, 36825750, 44355295, 50244984, 13447426, 85839848, 13259058, 26920620, 23399235, 36489914, 48420776, 4743701, 63420559, 62481555, 87030681, 26887679, 47440168, 97234231, 27167354, 28889690, 66818160, 45415882, 31356437, 14028954, 1443477, 24536152, 30599345, 56418788, 65155324, 8975422, 60167309, 43781910, 55818597, 13356196};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 1013;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int n = 57664993;
    vector<int> x = {9128142, 61779130, 21547258, 28795340, 6162940, 67943442, 93445399, 49340082, 99828157, 9197040, 23340160, 88878796, 50206579, 78849097, 30508649, 41632385, 37226906, 25286193, 91567206, 25000631, 99812535, 34952762, 8238441, 96543065, 40870899, 12010724, 41026824, 99827547, 78830622, 43845128, 20513646, 60734750, 28100166, 27391721, 44270862, 45412134, 32555637, 16141178, 60902415, 12576638, 51585867, 52770065, 48073696, 30020164, 3179613, 65293647, 75487838, 7537332, 35621296, 57511063};
    vector<int> y = {64468644, 14451918, 15297512, 33688261, 43749754, 87139756, 53795971, 5558519, 16785558, 57642145, 21787844, 10242496, 87672557, 94297306, 27816725, 11893912, 20113969, 50008730, 36211344, 3538646, 56500019, 67807433, 2067978, 94752215, 37938212, 79901611, 20713507, 45129042, 49613545, 41427371, 32243562, 55051151, 5884435, 52762760, 12602533, 24461646, 83384680, 20815079, 94269028, 70416302, 76110224, 22057285, 74550711, 51414023, 27204256, 58506838, 82550836, 5862687, 25261825, 29847710};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 1695;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int n = 86497598;
    vector<int> x = {47180435, 56876168, 76054014, 80684379, 32980541, 21416055, 42936348, 35866000, 27956588, 47672131, 90095395, 35103680, 89279658, 33011901, 81929406, 37984492, 758339, 91104039, 88802554, 88427811, 15608216, 3372157, 74998502, 13222953, 19832735, 812036, 53135508, 2385248, 67720224, 9598839, 40068108, 33156707, 28083820, 91033632, 98341149, 8306038, 76778929, 14954215, 13900806, 60766455, 84787631, 36101923, 86654712, 71681705, 82776094, 86669790, 27348087, 65510084, 73764571, 63959824};
    vector<int> y = {89849402, 8438586, 29553678, 4410770, 32352537, 61793844, 91862377, 73309837, 18447974, 44239547, 24026214, 56469336, 63851232, 14708733, 18990361, 86485094, 7234118, 74695288, 5455058, 35507528, 7538674, 93597305, 570595, 60968488, 99063504, 40287156, 40508585, 93979096, 90608479, 10034329, 19701521, 48515399, 67459828, 40369739, 13664919, 42518234, 88900409, 41682934, 96208387, 42415166, 57282054, 2165981, 77112743, 63966166, 77016004, 42379301, 13280919, 94585185, 77715426, 46902822};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 2323;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int n = 9632161;
    vector<int> x = {30101964, 37364540, 25484127};
    vector<int> y = {27806484, 54190884, 21054580};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int n = 100000000;
    vector<int> x = {29718139, 99153501};
    vector<int> y = {877291, 33019388};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int n = 100000000;
    vector<int> x = {51209735, 25484127, 37364540};
    vector<int> y = {63243807, 54190884, 95154265};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int n = 100000000;
    vector<int> x = {21054580, 81295037, 27806484, 42284495};
    vector<int> y = {30101964, 20084806, 48133710, 44978949};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 13;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int n = 100000000;
    vector<int> x = {52934896, 95920641, 82260541, 93824875, 76404354};
    vector<int> y = {42590408, 676966, 74874849, 77366674, 52304382};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 21;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int n = 100000000;
    vector<int> x = {76044250, 59370399, 26161994, 17070832, 86512657, 89542948, 30343508, 18304704, 96490218, 1115787, 35064945, 24248968, 41084848, 92427287, 17606436, 14426554, 55232415, 49487688, 65391971, 49614916, 3039305, 50833254, 50443780, 76369651, 46656324, 71814173, 42066711, 71319556, 41613807, 50496812, 12034236, 47616150, 97099234, 87439769, 12513892, 14168718, 26351146, 59945277, 5371779, 92858744, 44397686, 95727, 35472585, 78327777, 90058089, 56909391, 51128538, 18531693, 32043830, 90597009};
    vector<int> y = {98059930, 83848408, 32032989, 89931960, 94575942, 21457905, 15007557, 98345775, 83713683, 681374, 70669495, 15387780, 45613745, 93440483, 66077402, 59734024, 29195103, 4128951, 69433241, 41630653, 65355610, 10033723, 1030124, 8384942, 95612928, 63347145, 90362012, 58060356, 27942692, 3711665, 76995247, 60622243, 22448094, 9580818, 49336677, 54911747, 99920531, 77914153, 88715623, 1437110, 72917949, 85482533, 66120403, 13601763, 32571819, 78373691, 31997734, 50539506, 28890814, 36196869};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 2451;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int n = 1000000;
    vector<int> x = {490218, 232415, 84848, 306484, 333254, 218139, 439769, 168718, 190884, 351146, 176966, 371779, 284495, 161994, 128538, 90408, 243807, 39305, 54580, 366674, 70832, 43830, 116150, 99234, 369651, 496812, 156324, 44250, 327777, 426554, 42948, 443780, 427287, 114916, 97009, 153501, 445277, 106436, 154265, 472585, 34236, 295037, 64945, 374849, 66711, 319556, 113807, 248968, 58089, 304382};
    vector<int> y = {3713683, 9195103, 5613745, 8133710, 33723, 877291, 9580818, 4911747, 5484127, 9920531, 5920641, 8715623, 4978949, 2032989, 1997734, 2934896, 1209735, 5355610, 101964, 3824875, 9931960, 8890814, 622243, 2448094, 8384942, 3711665, 5612928, 8059930, 3601763, 9734024, 1457905, 1030124, 3440483, 1630653, 6196869, 3019388, 7914153, 6077402, 7364540, 6120403, 6995247, 84806, 669495, 2260541, 362012, 8060356, 7942692, 5387780, 2571819, 6404354};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 418;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int n = 1000000;
    vector<int> x = {409391, 314173, 366926, 472615, 95686, 133978, 443450, 74904, 358744, 343508, 317457, 449834, 362211, 350437, 370399, 391971, 174296, 323565, 487688, 236024, 317879, 95068, 201440, 244082, 31693, 398233, 104370, 397686, 281516, 446177, 115787, 95727, 113754, 83633, 154411, 448754, 130085, 482139, 234307, 422146, 49857, 52681, 377637, 309037, 304704, 481067, 13892, 166379, 226771, 12657};
    vector<int> y = {8373691, 3347145, 564699, 4376245, 645583, 5031474, 262064, 1124129, 1437110, 5007557, 5745666, 5781651, 1011986, 2944278, 3848408, 9433241, 6035807, 7220835, 4128951, 4817227, 5542301, 3837438, 8406645, 2158170, 539506, 3076261, 240064, 2917949, 2941941, 8513760, 681374, 5482533, 1460068, 472289, 1324626, 7917441, 3848452, 8900685, 1832031, 6796507, 1378752, 212647, 1143731, 182308, 8345775, 7177738, 9336677, 9933134, 3455752, 4575942};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 482;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int n = 1000000;
    vector<int> x = {252245, 294785, 358401, 135395, 449438, 175810, 225099, 181723, 340587, 301968, 32761, 422306, 379533, 349308, 224443, 442375, 111687, 342564, 125181, 267674, 73485, 138203, 23553, 267869, 338273, 26886, 168819, 181628, 76971, 68212, 403088, 287144, 256108, 73607, 305148, 5912, 296567, 245420, 240084, 227509, 205446, 185708, 395897, 426377, 224565, 166830, 302660, 71694, 225620, 309617};
    vector<int> y = {1105634, 5743675, 8504092, 6755489, 1399453, 2666817, 3047030, 6906192, 8148239, 650942, 5161184, 2212056, 2868889, 4257859, 4911327, 1599208, 5360162, 4566776, 4682850, 1903425, 8233421, 3066378, 8021131, 9622298, 1976121, 327556, 8059181, 8367794, 7725801, 480058, 7576860, 1839804, 9407513, 603975, 1641316, 949396, 9249416, 7792659, 1027758, 3983690, 4383724, 9164063, 3393050, 8105743, 9621767, 7393193, 4362996, 7721865, 1011748, 5773781};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 467;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int n = 19;
    vector<int> x = {11, 21, 81, 91, 41, 51, 21, 61, 91, 21, 71, 1, 1, 1, 71, 91, 31, 61, 71, 41, 41, 71, 81, 61, 11, 71, 41, 51, 31, 61, 31, 11, 91, 41, 31, 11, 21, 41, 81, 51, 51, 81, 81, 91, 11, 61, 51, 11, 61, 91};
    vector<int> y = {11, 21, 91, 1, 51, 61, 81, 31, 61, 31, 71, 1, 81, 61, 91, 51, 81, 21, 31, 11, 81, 21, 81, 51, 41, 81, 71, 91, 41, 1, 11, 31, 21, 1, 71, 61, 61, 31, 61, 41, 21, 51, 1, 31, 91, 81, 31, 71, 91, 91};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 126;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int n = 29;
    vector<int> x = {131, 21, 411, 141, 261, 321, 391, 161, 251, 301, 11, 561, 451, 441, 341, 231, 511, 81, 431, 541, 521, 551, 361, 591, 71, 421, 91, 151, 171, 371, 41, 61, 461, 311, 31, 181, 491, 281, 381, 291, 221, 51, 201, 121, 471, 1, 191, 531, 571, 241};
    vector<int> y = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 98;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int n = 19;
    vector<int> x = {51, 41, 21, 71, 81, 71, 11, 51, 11, 11, 51, 31, 81, 81, 81, 1, 81, 31, 1, 31, 61, 61, 51, 1, 41, 11, 71, 81, 11, 51, 71, 21, 31, 81, 41, 41, 11, 11, 51, 51, 21, 1, 51, 61, 71, 21, 81, 81, 31, 21};
    vector<int> y = {31, 1, 41, 41, 1, 81, 81, 1, 51, 11, 101, 41, 51, 91, 11, 71, 41, 1, 91, 11, 51, 31, 81, 51, 81, 41, 51, 21, 61, 51, 101, 91, 31, 31, 71, 11, 101, 71, 41, 11, 1, 101, 61, 1, 61, 21, 71, 61, 61, 31};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 128;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int n = 9;
    vector<int> x = {31, 1, 11, 21, 11, 1, 31, 31, 11, 41, 11, 11, 21, 21, 51, 21, 1, 61, 41, 51, 61, 41, 51, 11, 31, 31, 1, 61, 51, 41, 21, 51, 21, 21, 61, 61, 41, 41, 41, 1, 11, 31, 51, 61, 51, 1, 61, 31, 1};
    vector<int> y = {51, 21, 1, 41, 41, 11, 61, 1, 11, 31, 21, 51, 31, 51, 51, 21, 51, 21, 41, 31, 31, 21, 21, 31, 31, 21, 1, 11, 41, 61, 1, 61, 11, 61, 41, 51, 51, 11, 1, 41, 61, 41, 11, 61, 1, 31, 1, 11, 61};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 49;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int n = 20;
    vector<int> x = {21, 81, 61, 81, 51, 31, 81, 41, 41, 91, 31, 51, 11, 1, 21, 31, 51, 31, 41, 21, 21, 1, 41, 21, 61, 11, 61, 91, 61, 21, 11, 41, 81, 91, 31, 11, 41, 91, 31, 91, 51, 91, 61, 51, 31, 71, 71, 81, 11, 31};
    vector<int> y = {21, 81, 61, 21, 11, 91, 51, 21, 51, 31, 31, 1, 61, 1, 51, 71, 61, 51, 41, 61, 31, 71, 31, 41, 91, 81, 51, 1, 41, 11, 11, 11, 11, 91, 11, 21, 61, 11, 21, 81, 91, 61, 21, 31, 1, 61, 41, 1, 51, 81};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 213;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int n = 20;
    vector<int> x = {21, 1, 31, 11, 1, 1, 31, 41, 21, 21, 31, 31, 21, 11, 41, 31, 21, 1, 21, 21, 31, 21, 11, 1, 31, 41, 1, 31, 21, 41, 41, 41, 1, 1, 31, 1, 1, 11, 1, 41, 21, 21, 41, 21, 11, 31, 11, 41, 1, 11};
    vector<int> y = {151, 11, 171, 21, 161, 171, 51, 121, 61, 11, 111, 131, 81, 161, 81, 1, 41, 61, 51, 131, 121, 161, 1, 41, 151, 61, 121, 91, 191, 101, 161, 21, 141, 191, 61, 71, 91, 151, 81, 51, 91, 21, 1, 1, 71, 21, 141, 71, 131, 31};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 206;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int n = 30;
    vector<int> x = {101, 491, 431, 151, 531, 61, 591, 21, 521, 231, 141, 221, 461, 271, 541, 411, 211, 571, 441, 501, 341, 201, 241, 111, 301, 291, 131, 41, 451, 11, 31, 251, 51, 581, 91, 421, 81, 181, 381, 261, 321, 391, 171, 511, 371, 331, 71, 161, 191, 121};
    vector<int> y = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 99;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int n = 20;
    vector<int> x = {31, 31, 11, 81, 51, 41, 1, 11, 101, 51, 61, 101, 91, 81, 11, 31, 21, 61, 31, 31, 41, 11, 1, 101, 91, 81, 81, 81, 41, 41, 51, 91, 1, 91, 101, 61, 21, 21, 61, 91, 61, 11, 1, 41, 41, 61, 61, 1, 41, 71};
    vector<int> y = {21, 71, 21, 1, 41, 31, 81, 41, 61, 61, 1, 11, 71, 51, 1, 11, 11, 41, 81, 61, 61, 71, 41, 21, 21, 11, 61, 21, 21, 81, 81, 31, 61, 11, 81, 31, 31, 51, 81, 81, 21, 11, 71, 51, 11, 71, 11, 21, 1, 21};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 215;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int n = 10;
    vector<int> x = {1, 61, 31, 41, 51, 21, 61, 31, 31, 31, 61, 1, 41, 11, 41, 21, 31, 1, 21, 21, 51, 41, 21, 51, 21, 51, 1, 11, 31, 61, 1, 51, 61, 11, 61, 61, 11, 11, 1, 11, 31, 1, 51, 41, 41, 51, 21, 41, 11};
    vector<int> y = {21, 51, 21, 31, 31, 31, 1, 11, 31, 1, 61, 41, 21, 11, 1, 21, 41, 51, 11, 41, 1, 51, 61, 21, 1, 61, 61, 61, 61, 11, 1, 51, 41, 41, 21, 31, 51, 1, 11, 21, 51, 31, 11, 41, 11, 41, 51, 61, 31};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 169;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int n = 21;
    vector<int> x = {41, 81, 81, 11, 51, 41, 71, 1, 61, 91, 1, 31, 41, 81, 91, 1, 21, 41, 1, 91, 61, 61, 91, 51, 51, 51, 71, 31, 61, 81, 41, 71, 11, 11, 1, 31, 81, 81, 11, 21, 31, 71, 91, 21, 11, 61, 1, 11, 51, 61};
    vector<int> y = {71, 71, 11, 51, 31, 31, 81, 21, 71, 41, 71, 1, 81, 61, 11, 91, 91, 11, 61, 51, 1, 51, 21, 81, 41, 71, 71, 81, 21, 1, 1, 11, 1, 71, 41, 71, 21, 31, 81, 61, 21, 41, 71, 11, 41, 91, 51, 21, 51, 41};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 229;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int n = 21;
    vector<int> x = {141, 41, 71, 161, 61, 181, 31, 121, 31, 11, 91, 11, 31, 41, 1, 151, 31, 71, 121, 111, 141, 21, 181, 131, 81, 171, 141, 191, 131, 121, 181, 51, 161, 151, 161, 21, 171, 161, 11, 61, 161, 111, 191, 171, 111, 191, 151, 51, 121, 1};
    vector<int> y = {41, 41, 31, 11, 41, 41, 1, 11, 41, 11, 11, 31, 31, 1, 41, 31, 11, 11, 21, 31, 31, 11, 1, 41, 31, 11, 1, 41, 11, 41, 31, 31, 1, 1, 21, 31, 1, 41, 41, 1, 31, 41, 31, 31, 1, 11, 21, 21, 31, 31};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 198;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int n = 21;
    vector<int> x = {51, 61, 1, 91, 91, 71, 21, 21, 1, 51, 21, 81, 21, 51, 61, 71, 71, 91, 1, 61, 101, 81, 21, 91, 81, 91, 51, 51, 91, 71, 71, 51, 31, 81, 41, 61, 101, 31, 11, 71, 51, 61, 1, 41, 101, 31, 71, 21, 61, 41};
    vector<int> y = {31, 41, 1, 31, 1, 21, 1, 31, 71, 61, 11, 61, 61, 11, 61, 31, 1, 81, 11, 71, 41, 21, 41, 71, 31, 21, 1, 41, 51, 11, 81, 81, 21, 51, 21, 11, 81, 71, 61, 51, 71, 31, 61, 61, 11, 51, 41, 21, 21, 81};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 227;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int n = 11;
    vector<int> x = {61, 31, 1, 1, 11, 21, 31, 1, 61, 61, 21, 11, 31, 21, 11, 21, 51, 51, 31, 11, 61, 61, 1, 41, 61, 21, 51, 1, 31, 31, 1, 51, 41, 1, 41, 51, 11, 41, 21, 21, 11, 11, 51, 41, 41, 31, 61, 41, 51};
    vector<int> y = {21, 41, 51, 61, 31, 1, 61, 1, 31, 41, 41, 1, 51, 31, 21, 11, 1, 21, 1, 61, 1, 51, 11, 31, 61, 21, 51, 31, 11, 31, 21, 61, 11, 41, 1, 31, 51, 41, 61, 51, 41, 11, 41, 21, 51, 21, 11, 61, 11};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 169;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int n = 1999;
    vector<int> x = {8170, 6145, 210, 5275, 9441, 9245, 5191, 2031, 4247, 1183, 8064, 306, 1153, 5451, 2153, 4430, 8289, 8452, 1024, 1041, 8199, 6252, 9031, 6238, 1314, 2243, 7307, 8261, 9185, 3103, 7260, 1428, 2110, 3319, 2405, 9166, 8126, 2495, 4369, 3263, 3234, 6083, 5241, 464, 3245, 9441, 7068, 3094, 7145, 6408};
    vector<int> y = {7082, 1173, 6484, 204, 9016, 2115, 9391, 7146, 7236, 6218, 4450, 7037, 9416, 8188, 5277, 1250, 1133, 8085, 7054, 349, 2426, 4271, 7307, 7067, 5330, 6150, 9296, 9233, 8139, 5415, 4177, 4324, 4305, 8089, 8448, 5457, 411, 445, 9009, 3277, 6038, 9186, 1471, 5080, 9348, 6254, 5254, 7234, 1440, 2399};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 333;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int n = 1999;
    vector<int> x = {3425, 4121, 4416, 3198, 142, 359, 1236, 3475, 1092, 130, 4258, 56, 206, 1193, 2054, 3152, 4188, 4280, 1029, 3496, 2192, 489, 2063, 1267, 1056, 350, 2294, 2190, 4453, 4030, 4223, 3175, 1356, 304, 1351, 4317, 3281, 4184, 1353, 2428, 184, 4158, 169, 3496, 123, 2058, 2195, 2350, 1377, 2490};
    vector<int> y = {3369, 181, 7144, 18372, 13316, 6065, 19040, 7067, 187, 12457, 13183, 5306, 16090, 7033, 11279, 17062, 10048, 16425, 13023, 8084, 6412, 2319, 4443, 6223, 5088, 1420, 3174, 9485, 9053, 5308, 17187, 5099, 12423, 8471, 18338, 4386, 10176, 14235, 17370, 19199, 3108, 19329, 14076, 13122, 401, 8160, 14283, 10122, 14390, 13230};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 271;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int n = 2999;
    vector<int> x = {1, 285, 69, 416, 178, 52, 40, 70, 49, 489, 45, 487, 117, 182, 175, 148, 183, 200, 103, 441, 359, 369, 372, 63, 335, 226, 267, 414, 4, 160, 171, 34, 233, 199, 460, 132, 160, 496, 135, 287, 89, 485, 77, 126, 174, 340, 321, 173, 490, 442};
    vector<int> y = {23444, 22153, 14324, 11207, 10312, 5157, 2496, 52225, 39404, 20114, 44468, 35014, 38148, 56309, 7367, 37105, 1242, 58102, 3237, 33370, 12098, 41007, 54312, 19118, 17326, 57493, 49212, 46302, 15093, 26238, 27018, 18289, 4201, 31116, 42391, 13222, 8284, 40371, 50106, 16038, 55368, 32385, 51455, 21283, 34355, 47398, 36113, 112, 59244, 6320};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 195;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int n = 1999;
    vector<int> x = {3179, 10059, 7380, 9279, 1011, 470, 6053, 4400, 7069, 10437, 9130, 3015, 4229, 5152, 8074, 6269, 6403, 8434, 3109, 3384, 1042, 3173, 5464, 101, 8231, 10387, 4208, 9340, 4422, 10344, 1170, 10333, 1262, 4243, 1388, 5203, 39, 8020, 1410, 5466, 3456, 9388, 2152, 2031, 3021, 5129, 8242, 5418, 8343, 467};
    vector<int> y = {1034, 3483, 440, 2124, 8168, 2088, 3148, 2273, 1391, 152, 5222, 8288, 3457, 1092, 1276, 417, 7374, 3138, 5319, 6295, 6345, 2435, 8284, 1417, 8120, 4311, 108, 429, 5183, 5092, 1158, 6468, 3082, 1468, 5473, 2070, 5272, 7146, 2245, 7181, 7454, 6348, 3260, 125, 4151, 81, 4397, 6201, 5287, 8190};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 267;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int n = 999;
    vector<int> x = {1332, 1435, 306, 2039, 3147, 290, 6320, 1164, 5055, 6131, 6054, 3063, 2401, 6216, 4406, 1047, 1311, 3014, 82, 4122, 3453, 1002, 6130, 5500, 4399, 2340, 2088, 4399, 2296, 6157, 134, 3094, 2339, 5166, 113, 5492, 4207, 4087, 5108, 5215, 4036, 395, 2065, 3348, 180, 6205, 1071, 3406, 5221};
    vector<int> y = {1261, 3402, 5387, 5288, 45, 3301, 2328, 2215, 5344, 5054, 6058, 2212, 6233, 4174, 5361, 496, 4028, 3178, 42, 260, 6488, 5095, 256, 3337, 2061, 1469, 4474, 1435, 338, 1146, 2023, 4004, 3118, 1058, 1187, 6094, 6399, 3419, 2021, 4434, 4156, 4214, 2210, 5377, 6336, 3166, 6426, 1471, 418};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 123;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int n = 1999;
    vector<int> x = {6104, 1397, 5483, 3294, 5144, 9441, 91, 5176, 2090, 6158, 4497, 8203, 7073, 1442, 9232, 8082, 5398, 8411, 4112, 9021, 8252, 9024, 2146, 2126, 8168, 5430, 7371, 3489, 3099, 6248, 4086, 1175, 7242, 2009, 5216, 3112, 7192, 435, 6242, 2088, 6031, 2310, 6027, 158, 446, 1345, 8190, 2039, 433, 9209};
    vector<int> y = {1068, 2158, 4016, 5051, 1405, 9393, 3416, 2407, 3218, 9303, 6320, 5179, 272, 8430, 4084, 4079, 48, 440, 9496, 7430, 7246, 5102, 340, 1107, 9350, 3269, 8263, 8171, 4103, 3223, 167, 9465, 9200, 7424, 9177, 284, 1340, 50, 433, 9184, 2239, 2326, 5360, 8412, 2343, 5076, 8407, 8293, 5181, 8010};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 259;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int n = 1999;
    vector<int> x = {3428, 4273, 3154, 3358, 190, 1399, 1074, 2231, 4173, 453, 2445, 2098, 2100, 4060, 4132, 2115, 1007, 269, 3287, 401, 1239, 3071, 2257, 289, 3138, 2110, 304, 2400, 1220, 4366, 2107, 110, 2296, 4067, 1324, 1106, 4493, 4179, 2079, 3269, 3040, 4489, 1191, 3145, 4412, 1378, 4475, 88, 338, 1470};
    vector<int> y = {2328, 3341, 10064, 19021, 13436, 8015, 18042, 8343, 16271, 7379, 5279, 3180, 15334, 7374, 13452, 1211, 470, 9028, 16318, 5174, 15113, 9280, 11460, 11243, 5372, 4290, 18127, 17149, 1296, 18078, 14450, 6183, 10334, 8102, 4349, 16219, 302, 11448, 7235, 7138, 6113, 17316, 17462, 8368, 2386, 11187, 19030, 19164, 1484, 19046};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 279;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int n = 2999;
    vector<int> x = {491, 372, 11, 472, 402, 490, 150, 213, 170, 50, 91, 453, 440, 203, 95, 217, 432, 284, 199, 325, 17, 180, 201, 341, 332, 402, 237, 270, 319, 342, 201, 298, 169, 258, 124, 186, 377, 206, 379, 138, 265, 91, 167, 350, 235, 46, 213, 56, 170, 114};
    vector<int> y = {31093, 55446, 14242, 8008, 52226, 47397, 53457, 24484, 51066, 48196, 20099, 21201, 42387, 38193, 1005, 16145, 28284, 11413, 15197, 29443, 45046, 43223, 25178, 35004, 50405, 7438, 57153, 54258, 3466, 13086, 17262, 18371, 5428, 6251, 12097, 476, 4369, 33316, 46007, 23321, 26484, 27240, 32043, 22206, 36146, 2154, 49315, 37084, 44356, 10282};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 199;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int n = 1999;
    vector<int> x = {1196, 4492, 2093, 5417, 5372, 7079, 5234, 5178, 1314, 5173, 4234, 2471, 4029, 8260, 6107, 4228, 4355, 1073, 2341, 2197, 3412, 8119, 1411, 8169, 6340, 8361, 6334, 8441, 4329, 4297, 363, 6274, 2303, 7335, 206, 6300, 5335, 7146, 4207, 5044, 6367, 6276, 7019, 6485, 2171, 39, 7223, 3338, 446, 7164};
    vector<int> y = {1470, 3400, 1258, 8425, 269, 6404, 9209, 10114, 246, 2368, 9065, 5033, 6470, 6133, 8033, 8019, 1305, 4474, 6366, 2172, 1438, 8161, 6447, 2146, 2379, 9361, 5479, 7255, 10378, 330, 4274, 10159, 8026, 2437, 7455, 114, 3215, 8186, 4056, 4397, 9172, 7358, 10331, 4168, 4150, 2391, 1275, 7495, 8049, 9457};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 312;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int n = 999;
    vector<int> x = {5163, 2461, 5027, 1290, 1066, 5286, 2292, 1002, 1118, 4163, 3463, 3211, 6441, 1226, 4415, 1220, 410, 5240, 3017, 133, 394, 6387, 60, 4421, 3457, 2285, 3124, 6186, 2139, 5005, 4391, 2455, 6075, 6420, 1119, 5244, 4233, 2478, 6048, 3005, 3081, 2145, 4157, 37, 346, 5085, 4484, 191, 6238};
    vector<int> y = {2147, 4367, 5163, 4330, 1049, 1472, 3185, 6382, 5155, 4320, 2135, 6290, 5122, 2176, 277, 436, 3319, 6171, 3429, 2349, 5285, 6176, 1474, 5492, 29, 1207, 5099, 1410, 2297, 412, 3449, 5237, 3381, 248, 3469, 3374, 2419, 6291, 2020, 4451, 1316, 436, 6068, 6367, 4112, 4247, 1126, 290, 4099};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 119;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int n = 1999;
    vector<int> x = {3057, 7458, 348, 8261, 7402, 7221, 3090, 137, 2104, 3129, 4187, 386, 4141, 5128, 4456, 4375, 9496, 8024, 6304, 6458, 309, 4461, 9306, 209, 2438, 3408, 5391, 3308, 3294, 3449, 8298, 3157, 4391, 6272, 8016, 7100, 8122, 7208, 8244, 3136, 9309, 5300, 2092, 2446, 2137, 9276, 101, 1333, 8187, 2433};
    vector<int> y = {5467, 9407, 176, 1233, 7292, 8141, 7497, 6212, 8067, 154, 6459, 7481, 8302, 5165, 5312, 1370, 1474, 3353, 9299, 7484, 5486, 4401, 5451, 4146, 4113, 6485, 2386, 3463, 2314, 8290, 4155, 9492, 7247, 2441, 7309, 222, 2349, 3091, 8162, 1401, 2496, 7379, 5252, 47, 1330, 7055, 1416, 6172, 6223, 2419};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 281;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int n = 1999;
    vector<int> x = {3050, 4319, 4441, 3212, 3044, 3308, 4239, 1197, 33, 3353, 1134, 4188, 1189, 1068, 4299, 439, 4210, 196, 1361, 4468, 2060, 1017, 3179, 1076, 148, 2050, 3299, 64, 4222, 3376, 2051, 340, 3224, 1415, 3166, 324, 68, 1335, 2448, 2462, 3127, 1285, 4032, 2332, 358, 2448, 1490, 3495, 4310, 68};
    vector<int> y = {12015, 1168, 12019, 5276, 2227, 8295, 409, 3124, 11020, 14125, 9061, 13159, 17326, 8291, 7388, 14220, 2191, 4485, 18482, 19445, 3120, 1214, 7388, 13003, 17160, 4269, 18262, 5181, 16117, 61, 12291, 3368, 19377, 15038, 17145, 2184, 18045, 10373, 1377, 9192, 10146, 340, 3459, 13191, 15035, 19479, 11452, 1237, 14424, 9097};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 258;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int n = 2999;
    vector<int> x = {153, 420, 247, 477, 487, 219, 293, 36, 177, 230, 193, 204, 292, 364, 412, 132, 296, 276, 97, 83, 239, 140, 66, 475, 286, 408, 47, 203, 74, 92, 147, 138, 237, 139, 155, 118, 377, 116, 64, 239, 279, 37, 461, 20, 127, 43, 482, 75, 389, 322};
    vector<int> y = {25215, 3092, 1445, 38431, 48066, 27120, 6047, 46445, 8362, 39074, 26382, 5375, 21068, 4226, 31130, 13119, 51103, 20185, 24292, 22384, 43105, 41267, 50144, 16068, 37120, 57356, 49430, 18050, 53214, 34001, 9043, 28202, 52433, 55290, 30060, 10402, 11153, 42210, 2135, 29078, 17039, 36242, 59102, 33181, 32042, 22, 19418, 40235, 56130, 15483};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 195;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int n = 1999;
    vector<int> x = {5048, 1184, 4124, 3497, 6033, 7011, 3020, 4156, 2267, 5242, 298, 2078, 8428, 2485, 4378, 1043, 5254, 8044, 360, 4168, 8431, 8404, 2313, 339, 7448, 4473, 8262, 456, 1491, 1425, 3454, 178, 4103, 103, 4242, 2484, 6178, 2122, 8319, 392, 135, 3050, 2123, 1084, 5445, 8248, 4135, 2027, 6226, 4451};
    vector<int> y = {6241, 9486, 7065, 7494, 4202, 6162, 5213, 3472, 6272, 379, 8323, 139, 7030, 9080, 8377, 3350, 4148, 3084, 7051, 327, 407, 9227, 1207, 10472, 4392, 10397, 2051, 6011, 1172, 8187, 8489, 9065, 4322, 5146, 6272, 5221, 7121, 7380, 1127, 3268, 257, 10289, 2227, 5177, 8055, 4137, 1023, 8309, 6251, 5487};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 291;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int n = 999;
    vector<int> x = {5283, 2208, 6208, 1201, 2386, 4182, 3006, 4418, 1388, 1096, 2123, 3481, 121, 420, 2454, 2368, 6467, 6407, 2099, 5093, 448, 5022, 5306, 4004, 4436, 3409, 1419, 6031, 6218, 1382, 308, 5102, 3207, 6479, 244, 1262, 5161, 4388, 1064, 6296, 3383, 453, 158, 5367, 4198, 3123, 2484, 4371, 3048};
    vector<int> y = {4202, 4357, 143, 227, 2296, 3467, 4093, 5441, 5131, 2255, 1386, 2339, 5366, 6238, 51, 5270, 6384, 5318, 6180, 1132, 2495, 239, 3469, 4339, 1013, 1348, 6372, 1160, 4149, 3253, 40, 6392, 3458, 3250, 1481, 4400, 5100, 6129, 1102, 2388, 5203, 4362, 3003, 2420, 2380, 6158, 3297, 65, 177};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 113;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int n = 2000;
    vector<int> x = {265, 9268, 8217, 5406, 3206, 6144, 8086, 5222, 4465, 3230, 2284, 1024, 4155, 8117, 6458, 7162, 7223, 3232, 110, 2279, 7414, 1174, 4403, 7029, 1460, 5163, 3136, 1138, 8188, 2411, 8483, 9377, 4319, 1293, 4279, 3134, 8340, 7224, 120, 274, 7175, 8191, 9317, 341, 2139, 2432, 1024, 9360, 4317, 1034};
    vector<int> y = {1167, 2347, 170, 9306, 7482, 9445, 4260, 2226, 3454, 9397, 5407, 3106, 257, 1255, 2273, 6397, 9183, 3049, 8050, 2290, 2161, 397, 6304, 1196, 7151, 429, 2123, 6158, 5483, 1411, 2492, 5039, 4374, 8258, 7395, 4280, 3142, 5099, 2450, 3143, 4234, 7216, 3380, 5199, 7100, 440, 4173, 1252, 2037, 5120};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 287;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int n = 2000;
    vector<int> x = {18280, 17490, 4094, 8476, 432, 12144, 16199, 16237, 14352, 5237, 12271, 5495, 7294, 19284, 19004, 5478, 3471, 16215, 18348, 415, 10039, 12206, 7134, 14296, 1496, 11178, 9418, 12081, 5381, 4371, 14464, 6254, 19350, 16130, 17099, 10140, 3115, 10295, 13222, 9422, 6035, 14005, 7488, 7022, 15413, 229, 4199, 13149, 11032, 2087};
    vector<int> y = {1495, 458, 2278, 1494, 1274, 495, 428, 3172, 1253, 2299, 1022, 3259, 3081, 2333, 3167, 4156, 1386, 2199, 2267, 4119, 2486, 4454, 4022, 3232, 42, 4274, 1425, 3369, 1129, 1475, 2257, 4254, 235, 4033, 2193, 4332, 2353, 1295, 4459, 4486, 3059, 4386, 1195, 162, 2002, 3150, 3199, 1204, 51, 1149};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 274;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int n = 3000;
    vector<int> x = {39383, 37265, 35206, 48467, 27470, 21023, 7483, 44259, 242, 38084, 8494, 36472, 3182, 54123, 29072, 10431, 12459, 46092, 33407, 41113, 45429, 30465, 59406, 14426, 17284, 1237, 19451, 58247, 23087, 55350, 11059, 9200, 50231, 16374, 13004, 31276, 25173, 4291, 24448, 18226, 22283, 40488, 2344, 6418, 47264, 15227, 52032, 34228, 49395, 43372};
    vector<int> y = {351, 228, 209, 57, 231, 412, 20, 321, 151, 255, 286, 112, 263, 115, 325, 45, 241, 75, 411, 55, 295, 109, 210, 225, 464, 383, 318, 86, 5, 42, 400, 444, 46, 167, 249, 298, 286, 383, 277, 217, 302, 383, 266, 155, 56, 140, 54, 339, 22, 434};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 188;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int n = 2000;
    vector<int> x = {7384, 4399, 1359, 5074, 3224, 8459, 5291, 6306, 2408, 3324, 397, 437, 4321, 1104, 8416, 2084, 7089, 4330, 8008, 1324, 4083, 2155, 1143, 7014, 4120, 6472, 3199, 7467, 8084, 6126, 6451, 3439, 3079, 264, 3424, 4482, 3183, 2222, 8277, 4165, 3392, 463, 6090, 8355, 5496, 1454, 1224, 49, 8144, 1423};
    vector<int> y = {8003, 4098, 6314, 3224, 5189, 6475, 9365, 2443, 6340, 2361, 2402, 9179, 2097, 7202, 36, 2236, 96, 5272, 4150, 9092, 7154, 138, 10471, 6325, 8315, 275, 8023, 1185, 7087, 8468, 7264, 149, 1381, 7333, 6465, 3251, 3254, 1406, 9467, 478, 4467, 6200, 1481, 1373, 2052, 5457, 3300, 5394, 10016, 8431};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 317;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int n = 1000;
    vector<int> x = {1357, 1293, 200, 3149, 6325, 3225, 2035, 6394, 3276, 398, 5437, 3489, 5416, 5096, 5451, 6391, 4216, 6087, 4187, 3208, 2376, 6485, 3244, 1130, 5252, 298, 2168, 4321, 2346, 5468, 4186, 236, 6393, 2331, 1049, 4149, 2437, 1499, 1091, 5197, 3489, 2367, 1036, 381, 4481, 4435, 299, 64, 6010};
    vector<int> y = {2424, 6118, 4328, 3390, 5023, 5036, 6488, 13, 4345, 6257, 5064, 2373, 3308, 91, 6325, 6066, 5369, 1158, 75, 6218, 5067, 3068, 25, 465, 2191, 5117, 2282, 4316, 1297, 1321, 3326, 3442, 4158, 3496, 1057, 2053, 4049, 5321, 4028, 4092, 1432, 407, 3387, 2050, 1352, 6109, 1372, 440, 2433};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 121;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int n = 2000;
    vector<int> x = {5128, 9362, 6018, 6195, 8086, 7293, 8242, 341, 329, 273, 4268, 1259, 8482, 5083, 3119, 6035, 9304, 5041, 6436, 7405, 3405, 2025, 5228, 2383, 3192, 4252, 8462, 6322, 3276, 8357, 6160, 2269, 1081, 1149, 5399, 6463, 4324, 5111, 7478, 1057, 9154, 4117, 5306, 4453, 2148, 9485, 5489, 7188, 7374, 6114};
    vector<int> y = {4164, 4463, 195, 4488, 6105, 1401, 5237, 3104, 6396, 9110, 3389, 4436, 59, 54, 362, 1256, 8474, 6394, 3165, 2077, 1448, 4163, 1172, 6471, 2372, 9135, 3127, 7386, 3105, 7287, 9341, 8029, 6023, 1315, 9384, 6096, 4240, 8360, 9280, 2491, 266, 5067, 7133, 7427, 7217, 9057, 2238, 8063, 5331, 2489};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 279;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int n = 2000;
    vector<int> x = {1460, 236, 4069, 4090, 1323, 1073, 1258, 2157, 3155, 4348, 395, 4038, 495, 3485, 3342, 4395, 1236, 479, 4048, 1048, 190, 3409, 2008, 3393, 440, 3126, 3386, 2084, 2262, 1331, 4245, 4468, 1227, 31, 4391, 3303, 1154, 4416, 4491, 2133, 1150, 2321, 3265, 3164, 2280, 1049, 1411, 3183, 3279, 449};
    vector<int> y = {6229, 16389, 19088, 2285, 16136, 12119, 5167, 13130, 3172, 7022, 274, 4360, 10452, 7420, 19411, 16164, 1067, 9473, 13016, 10395, 19159, 8355, 3157, 2374, 11240, 14350, 6260, 1085, 4354, 8389, 5125, 3397, 9291, 17122, 84, 12370, 18144, 12098, 6205, 15348, 17285, 8473, 16163, 460, 18286, 13368, 3032, 5183, 4335, 15162};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 269;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int n = 3000;
    vector<int> x = {229, 69, 327, 98, 419, 443, 492, 30, 406, 451, 416, 333, 47, 459, 272, 105, 315, 209, 93, 305, 158, 26, 320, 224, 349, 140, 389, 321, 285, 220, 399, 318, 308, 244, 220, 254, 278, 431, 297, 307, 160, 401, 260, 437, 431, 419, 266, 482, 364, 355};
    vector<int> y = {5322, 52187, 8250, 55402, 2373, 39038, 46282, 31300, 3070, 36490, 47232, 51170, 19145, 1388, 42141, 27215, 28180, 4300, 30325, 9500, 54396, 6207, 44315, 13006, 56133, 38472, 32336, 35114, 26319, 29463, 24422, 21241, 11459, 43086, 50080, 15067, 33177, 57121, 14413, 17126, 25147, 45264, 49219, 18212, 12497, 444, 23160, 22150, 20275, 37284};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 194;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int n = 2000;
    vector<int> x = {2470, 4265, 7003, 10159, 41, 1376, 9168, 121, 6150, 10470, 5210, 4026, 6161, 3402, 3382, 5388, 10335, 197, 415, 6248, 2130, 9026, 3253, 7034, 8392, 5289, 3492, 1116, 7486, 5143, 1025, 7244, 4108, 8388, 4306, 9442, 8276, 9254, 2073, 8119, 7396, 3057, 7046, 4385, 3394, 9014, 6480, 6342, 4117, 1006};
    vector<int> y = {7489, 2145, 338, 2058, 1389, 4012, 8209, 2471, 395, 3125, 15, 5116, 7117, 4257, 7290, 3088, 7283, 3144, 159, 2249, 8416, 3025, 2487, 4104, 251, 6132, 5086, 8335, 1097, 7281, 5116, 7069, 6374, 2115, 4098, 7441, 5306, 389, 2457, 4270, 3381, 6184, 8355, 3413, 8293, 1227, 5168, 6053, 417, 3214};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 284;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int n = 1000;
    vector<int> x = {3488, 5159, 3327, 55, 6134, 4365, 2099, 5441, 1247, 2285, 4412, 6353, 3372, 254, 5178, 5415, 6094, 3317, 2164, 1177, 6238, 4367, 5436, 6335, 71, 289, 2140, 3146, 1259, 6310, 4005, 1272, 4395, 2113, 1435, 2324, 5480, 3163, 42, 6076, 1252, 1328, 4175, 2035, 410, 359, 4304, 5028, 3348};
    vector<int> y = {5236, 5131, 2288, 3079, 401, 68, 5363, 3159, 1004, 3005, 3161, 1449, 4128, 1207, 6308, 4180, 2359, 6050, 4448, 4268, 6444, 5150, 1400, 3377, 5021, 6496, 1408, 1166, 3160, 5452, 4050, 2253, 1175, 2206, 75, 118, 2392, 3424, 136, 4394, 5477, 6198, 2026, 6356, 4187, 2478, 6189, 164, 341};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 114;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int n = 2000;
    vector<int> x = {3179, 1123, 5372, 8150, 5196, 4120, 4323, 8056, 5481, 2356, 9474, 7161, 1420, 3080, 6374, 5334, 7151, 9465, 121, 1087, 1329, 4372, 6481, 4269, 394, 8261, 5278, 5179, 1208, 5068, 7406, 4060, 2396, 6484, 3029, 9025, 446, 7465, 2251, 5398, 6108, 9102, 3412, 1163, 8092, 6372, 6414, 7435, 3289, 8292};
    vector<int> y = {3251, 286, 3497, 2118, 2181, 4321, 3203, 1481, 8492, 5422, 374, 4497, 5102, 4498, 9007, 7275, 3428, 8381, 7030, 7104, 8045, 8343, 420, 2263, 5471, 7152, 43, 9060, 6339, 6305, 6464, 6286, 6369, 5160, 5317, 1269, 494, 7202, 8234, 5117, 6487, 3230, 9155, 2155, 9167, 8419, 2348, 5184, 2323, 8233};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 331;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int n = 2000;
    vector<int> x = {4446, 4357, 4085, 1095, 4457, 4249, 2209, 135, 1051, 2498, 3494, 4373, 450, 2197, 4425, 1058, 210, 2129, 449, 1440, 3285, 329, 2215, 3322, 77, 1123, 339, 1260, 4222, 1372, 4438, 4244, 367, 149, 4333, 163, 2127, 28, 1410, 3167, 478, 2253, 1304, 3267, 1268, 3089, 3396, 81, 1004, 4292};
    vector<int> y = {18140, 19152, 11423, 17191, 7156, 1313, 9365, 139, 6128, 18056, 3091, 15306, 15261, 17069, 16330, 13322, 13415, 8491, 4454, 2090, 8482, 16435, 155, 9022, 7444, 11359, 2252, 10239, 8387, 14272, 12439, 17152, 9230, 14413, 13292, 1407, 11251, 18193, 7380, 2013, 10120, 2049, 4342, 18218, 3339, 459, 12394, 11080, 12032, 3398};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 249;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int n = 3000;
    vector<int> x = {499, 486, 142, 463, 359, 122, 116, 405, 388, 237, 173, 285, 18, 367, 96, 393, 332, 450, 228, 492, 276, 264, 115, 426, 435, 455, 216, 305, 310, 122, 498, 197, 156, 239, 224, 80, 364, 461, 63, 79, 71, 421, 360, 469, 291, 376, 400, 174, 138, 62};
    vector<int> y = {53078, 1055, 10290, 51439, 25394, 18231, 50262, 40235, 11346, 22406, 20117, 21093, 49211, 47053, 67, 35253, 42170, 5005, 34356, 32146, 9044, 55078, 23316, 16064, 38163, 4443, 57144, 59336, 30076, 7022, 29051, 37061, 3212, 27351, 17104, 41287, 58353, 56195, 45281, 15169, 31087, 6121, 13147, 12380, 52011, 39187, 24242, 54375, 43161, 46486};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 184;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int n = 2000;
    vector<int> x = {5260, 9291, 6342, 7008, 3468, 8428, 9469, 1416, 1364, 2109, 2365, 3181, 10401, 10158, 4166, 10279, 10375, 8397, 282, 3109, 6277, 1465, 103, 7006, 2313, 1004, 3099, 5449, 350, 3158, 8251, 5320, 5329, 8342, 10327, 8134, 6120, 4458, 4131, 2390, 9079, 4228, 10034, 4078, 6372, 7096, 4292, 4442, 7367, 1497};
    vector<int> y = {4322, 19, 3064, 8127, 7206, 2477, 1151, 2247, 3245, 1059, 478, 418, 3183, 1246, 7360, 4342, 5237, 473, 5181, 4177, 348, 8157, 3231, 4053, 4246, 4174, 1141, 8079, 2421, 6297, 7227, 3345, 6282, 6035, 65, 5202, 1021, 4063, 6292, 3333, 5393, 8233, 6484, 3244, 2435, 7161, 5031, 318, 1152, 200};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 285;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int n = 1000;
    vector<int> x = {4378, 298, 1109, 439, 5388, 1005, 2366, 6112, 5276, 2246, 2377, 170, 4390, 6407, 6038, 4313, 2217, 3065, 3236, 3327, 1394, 3155, 99, 4414, 1181, 5282, 5442, 2043, 2441, 427, 3191, 6245, 1001, 4086, 2492, 5380, 3090, 4300, 5108, 5019, 6203, 6115, 359, 3295, 1155, 242, 1324, 4276, 6451};
    vector<int> y = {241, 4460, 1203, 2039, 4321, 359, 6366, 6330, 1494, 60, 3091, 6326, 2475, 3250, 5071, 3144, 4232, 5088, 3435, 1387, 6070, 4122, 1239, 5042, 2337, 6042, 5195, 5235, 2339, 5280, 469, 4004, 3368, 4183, 1203, 2061, 2047, 1188, 3102, 456, 359, 2432, 3127, 6309, 4444, 433, 5208, 6154, 1076};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 128;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int n = 2001;
    vector<int> x = {8404, 4154, 6009, 165, 4217, 1232, 2320, 7111, 1303, 3227, 9435, 4241, 4432, 262, 7172, 1471, 3219, 301, 8375, 2177, 9323, 6216, 7204, 5012, 1306, 4120, 8057, 4037, 3438, 1118, 2397, 8309, 2277, 170, 7437, 6398, 2106, 6119, 9032, 5383, 8017, 8030, 5445, 9060, 5442, 8277, 7164, 2306, 8052, 5170};
    vector<int> y = {1120, 3369, 7487, 2480, 7101, 6140, 2291, 8296, 9108, 9295, 2338, 5419, 8474, 6053, 9267, 7154, 3331, 7125, 9220, 497, 9308, 4024, 6242, 221, 3154, 6394, 7481, 9287, 4064, 247, 6423, 6219, 7101, 8397, 4412, 3077, 8309, 9178, 7479, 7389, 5395, 8112, 5396, 1401, 4274, 3413, 3198, 4489, 326, 3147};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 294;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int n = 2001;
    vector<int> x = {1466, 2193, 2461, 3019, 4283, 2106, 109, 1337, 1442, 4037, 3011, 2392, 4334, 3141, 2019, 2220, 1264, 4402, 2218, 1072, 1222, 199, 3336, 1430, 478, 3155, 486, 1476, 1179, 2416, 320, 60, 57, 4120, 3045, 3131, 4415, 4146, 3081, 2363, 4217, 4168, 4237, 3156, 4215, 362, 1077, 3031, 3437, 2038};
    vector<int> y = {3247, 11347, 16389, 4202, 12354, 8398, 8281, 4416, 19143, 8338, 3031, 17158, 14306, 12003, 19254, 5301, 6444, 19268, 10208, 10106, 2179, 12255, 13497, 7097, 6440, 1072, 15385, 379, 8018, 13396, 1330, 2104, 16333, 13402, 14161, 16148, 2339, 277, 10225, 12149, 3008, 5226, 16102, 7155, 10110, 11175, 14199, 19149, 11362, 6033};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 288;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int n = 3001;
    vector<int> x = {41357, 31399, 36125, 46457, 4377, 38035, 11071, 25189, 13024, 5127, 22433, 15168, 21334, 47358, 12037, 26426, 17397, 52081, 51361, 50119, 411, 2257, 3118, 58265, 24339, 1431, 40249, 27361, 18330, 19110, 9135, 32269, 43135, 20487, 28216, 48500, 55488, 42037, 16177, 33225, 54195, 23348, 39385, 45104, 56165, 29152, 53152, 35009, 14285, 49379};
    vector<int> y = {426, 319, 498, 67, 177, 57, 92, 482, 457, 269, 219, 380, 88, 354, 25, 484, 99, 95, 387, 11, 479, 350, 232, 201, 329, 298, 374, 260, 434, 366, 146, 292, 69, 207, 462, 77, 388, 174, 47, 147, 115, 342, 415, 138, 443, 384, 428, 186, 190, 434};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 193;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int n = 2001;
    vector<int> x = {1092, 7236, 8008, 2158, 1215, 10055, 3308, 6365, 10104, 8359, 3315, 7247, 205, 4205, 8150, 3206, 7001, 9345, 343, 6337, 10295, 8359, 5233, 190, 9146, 6323, 6119, 1300, 7264, 9381, 324, 5096, 8218, 2164, 9180, 2211, 7238, 6362, 2365, 8486, 4178, 9289, 5304, 6054, 353, 3326, 4355, 3275, 5012, 2025};
    vector<int> y = {6393, 7088, 1121, 2275, 3433, 7241, 5459, 4317, 52, 2365, 3401, 4031, 5372, 7218, 394, 2261, 460, 5007, 4346, 2175, 3368, 7331, 2355, 412, 4383, 6028, 1120, 7037, 3419, 2455, 6210, 1035, 4472, 5456, 3168, 4263, 8219, 3323, 7144, 6207, 2410, 8420, 5057, 5366, 1121, 1333, 286, 6141, 6372, 232};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 297;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int n = 1001;
    vector<int> x = {410, 5206, 1476, 4176, 2421, 6278, 4077, 5388, 2012, 5296, 4004, 3016, 172, 4267, 1205, 6136, 5269, 6038, 1150, 255, 3375, 4303, 5157, 6023, 3437, 1436, 1108, 5328, 2165, 6275, 1167, 2233, 3478, 174, 6376, 4134, 310, 3473, 5057, 439, 429, 3477, 2128, 4210, 2408, 2089, 3342, 1470, 6271};
    vector<int> y = {151, 3124, 2444, 5483, 5152, 2351, 407, 4029, 1427, 1219, 3130, 201, 3493, 1432, 6234, 5393, 6081, 3141, 4138, 6327, 6343, 4298, 96, 1495, 5086, 1282, 3078, 5184, 4027, 117, 277, 6338, 3264, 4395, 6073, 6467, 1311, 2183, 2172, 2108, 5082, 1339, 3173, 2336, 361, 2169, 4448, 5290, 4487};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 126;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int n = 2001;
    vector<int> x = {3391, 9472, 8487, 2104, 8058, 6440, 5489, 431, 9356, 1317, 35, 377, 171, 6361, 8367, 1369, 3251, 317, 380, 7188, 3100, 5291, 7239, 8366, 3134, 3428, 9162, 5174, 4370, 9054, 4386, 1429, 8306, 2038, 5467, 471, 2052, 6001, 1152, 6358, 8308, 9340, 6408, 4307, 7153, 5164, 1471, 7219, 7098, 2264};
    vector<int> y = {6031, 9499, 5308, 358, 8020, 1148, 9279, 9273, 5311, 2306, 4064, 281, 2405, 8324, 6068, 4286, 1423, 7432, 8159, 8486, 7397, 292, 3122, 9061, 5284, 4277, 8149, 1249, 2387, 3121, 7409, 6098, 371, 2217, 6287, 3440, 6355, 9374, 233, 7089, 3406, 7404, 2273, 5111, 2404, 3273, 8100, 5079, 1208, 1107};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 264;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int n = 2001;
    vector<int> x = {10115, 9008, 16448, 118, 16202, 7253, 9144, 9059, 11156, 11047, 4104, 7002, 4015, 3389, 1162, 10243, 17290, 5396, 19441, 19129, 1376, 3087, 19127, 12473, 8439, 6265, 14376, 11119, 11320, 16134, 6479, 12239, 17035, 16250, 6028, 1366, 2479, 17496, 6351, 7193, 2398, 7019, 14154, 13248, 16362, 8316, 2176, 19227, 4335, 3128};
    vector<int> y = {1060, 2122, 3262, 3202, 1002, 1186, 8, 4156, 3337, 1362, 1314, 87, 3414, 1363, 1351, 78, 63, 4140, 2180, 1369, 90, 37, 276, 4206, 2406, 2417, 293, 2231, 4, 4497, 1335, 367, 4243, 2073, 265, 3168, 3342, 1361, 4249, 4048, 1470, 3114, 1434, 3376, 136, 433, 4042, 4240, 402, 2431};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 247;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int n = 3001;
    vector<int> x = {52003, 1113, 43061, 12381, 47291, 5318, 10161, 31085, 55358, 59399, 32259, 29344, 35014, 19425, 20239, 11090, 57280, 37177, 23400, 3169, 49113, 48001, 54333, 45410, 4268, 34394, 17219, 18318, 14453, 7071, 30213, 44029, 22156, 39486, 28380, 38459, 9109, 40288, 58195, 15476, 6455, 33248, 46427, 26021, 24088, 8410, 25109, 51377, 50061, 36266};
    vector<int> y = {178, 258, 192, 447, 494, 149, 192, 319, 436, 192, 198, 485, 172, 239, 438, 310, 152, 25, 82, 230, 390, 185, 461, 256, 376, 77, 89, 198, 91, 63, 184, 375, 194, 428, 402, 421, 155, 46, 25, 377, 75, 155, 241, 249, 66, 207, 360, 126, 246, 132};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 190;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int n = 2001;
    vector<int> x = {2203, 1044, 7070, 8456, 7421, 3422, 2093, 4334, 4323, 8494, 47, 5120, 6346, 6455, 3089, 415, 1165, 7152, 5076, 2366, 38, 3334, 6247, 7333, 3170, 1167, 7149, 112, 4265, 6419, 88, 7218, 2416, 4295, 8456, 1435, 7328, 2278, 141, 4244, 8451, 7198, 2445, 1283, 7346, 4418, 3235, 3153, 1499, 4052};
    vector<int> y = {5322, 4148, 2401, 7335, 7044, 9088, 7219, 9385, 1130, 1323, 198, 1322, 2444, 4015, 8101, 8412, 1463, 10097, 5223, 8105, 3399, 6433, 8255, 1040, 3010, 10438, 6134, 10377, 2227, 10174, 5481, 129, 3221, 7248, 2495, 7057, 3174, 2040, 1461, 5286, 4375, 9227, 6099, 9196, 5354, 8040, 75, 2233, 8302, 3484};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 271;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int n = 1001;
    vector<int> x = {3487, 4048, 3216, 4240, 5306, 6409, 5009, 6257, 1489, 1487, 2176, 1230, 4096, 4205, 5, 151, 2085, 3110, 2385, 6454, 255, 315, 3450, 5038, 1219, 1491, 2073, 5374, 2434, 4355, 4121, 5139, 6384, 1192, 5492, 5489, 6438, 238, 3370, 199, 3448, 2020, 1407, 23, 2054, 3353, 6155, 4137, 6262};
    vector<int> y = {4170, 6208, 3048, 5017, 3059, 4479, 6036, 3343, 4052, 323, 1378, 2436, 2462, 1242, 6493, 5023, 177, 2469, 2068, 1294, 1470, 4062, 5445, 1404, 3277, 6319, 5263, 455, 4070, 3016, 449, 4084, 5149, 5173, 5094, 2216, 6, 2373, 6340, 13, 1259, 3478, 1440, 3051, 6479, 20, 6499, 4096, 2362};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 115;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int n = 2001;
    vector<int> x = {9171, 4358, 1137, 2307, 2242, 7313, 6027, 1060, 119, 1269, 9347, 3222, 5331, 8290, 5342, 470, 9135, 9323, 1272, 4100, 8253, 2181, 5341, 4071, 9288, 3255, 1034, 1236, 9300, 4199, 3203, 2154, 5317, 6253, 6060, 4062, 4449, 88, 9478, 2162, 3144, 32, 4336, 8495, 6203, 3442, 6030, 1494, 4383, 5235};
    vector<int> y = {4100, 4218, 259, 6317, 5389, 8253, 1382, 3397, 3349, 7333, 3482, 4288, 9094, 8409, 4406, 8387, 338, 5196, 2025, 8175, 5292, 4131, 2163, 3254, 2242, 2097, 8337, 9388, 9295, 5499, 9448, 303, 8114, 6016, 4245, 1444, 7265, 347, 1303, 2066, 7087, 2184, 393, 6083, 9264, 5020, 7169, 5040, 2142, 3043};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 278;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int n = 2001;
    vector<int> x = {1334, 1450, 4012, 3476, 4317, 4265, 1020, 1204, 4193, 3453, 3352, 3028, 3498, 2462, 3497, 2280, 4173, 4498, 1039, 1330, 3120, 447, 310, 165, 3087, 2402, 316, 1023, 2243, 3018, 40, 1163, 95, 3220, 2184, 4367, 139, 141, 3380, 16, 4314, 3145, 4007, 3249, 2200, 2420, 1393, 2298, 1475, 2478};
    vector<int> y = {321, 6431, 6114, 17227, 2240, 12095, 2080, 16436, 18053, 2408, 19387, 13316, 9419, 8125, 11123, 477, 16401, 4289, 19347, 9114, 3128, 79, 3264, 9110, 8479, 7065, 8299, 11373, 19238, 5022, 14074, 18033, 17213, 18088, 11484, 1499, 15006, 18204, 6391, 1467, 11346, 16227, 7066, 14294, 16006, 6385, 15094, 1369, 17268, 17420};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 263;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int n = 3001;
    vector<int> x = {181, 258, 171, 154, 148, 467, 278, 442, 93, 340, 467, 310, 496, 399, 436, 279, 23, 30, 461, 272, 36, 93, 204, 293, 192, 120, 159, 116, 419, 392, 96, 175, 479, 385, 254, 162, 62, 192, 87, 366, 341, 119, 458, 454, 72, 272, 305, 494, 207, 198};
    vector<int> y = {23339, 32159, 33011, 51405, 45168, 413, 11354, 24176, 39287, 58338, 31323, 12215, 9007, 55399, 16022, 19445, 6315, 8202, 50365, 48161, 30237, 36403, 34449, 7036, 15123, 37402, 53113, 42416, 20144, 56073, 21294, 41134, 1219, 57007, 18046, 59120, 2232, 4374, 46114, 5300, 17349, 52273, 22240, 43304, 54251, 13225, 14024, 38300, 49328, 25388};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 206;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int n = 2001;
    vector<int> x = {5385, 3138, 8312, 1384, 410, 424, 39, 7230, 2008, 4431, 5323, 1040, 7217, 1069, 4057, 3193, 7027, 2471, 4423, 7442, 2212, 2156, 2445, 3218, 3258, 5491, 6494, 45, 5209, 8454, 5381, 6075, 7472, 7462, 1465, 3262, 8431, 106, 4199, 3464, 7326, 1488, 2070, 5326, 353, 306, 5463, 2022, 4414, 6166};
    vector<int> y = {1370, 3084, 461, 7124, 1383, 2095, 8022, 7049, 3011, 5054, 10273, 9088, 6493, 8222, 8156, 1377, 9423, 6398, 84, 5144, 5186, 9229, 4067, 6201, 10020, 8421, 9007, 10375, 6154, 10449, 7437, 7216, 2355, 8215, 6062, 9008, 9462, 5318, 4055, 2261, 1041, 2286, 1206, 9080, 4445, 6410, 457, 2134, 2292, 492};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 305;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int n = 1001;
    vector<int> x = {5305, 5100, 6099, 6462, 1475, 3353, 4352, 6013, 3006, 289, 3173, 3017, 6273, 169, 136, 1247, 5053, 6110, 4309, 5338, 5482, 2463, 2226, 1366, 262, 1460, 5307, 2003, 307, 3482, 4296, 184, 1012, 3376, 4037, 5033, 4084, 6015, 2011, 2307, 4399, 1207, 4400, 2331, 245, 2086, 6369, 3013, 1438};
    vector<int> y = {4120, 3250, 6338, 164, 1127, 6169, 3487, 2497, 3408, 117, 5146, 2089, 4112, 2035, 3326, 4205, 5012, 3082, 5031, 301, 1083, 5471, 1367, 2309, 6331, 5442, 2336, 2073, 5138, 1193, 6218, 4477, 3380, 367, 4382, 6184, 2392, 1314, 4113, 6184, 1272, 357, 122, 3486, 1006, 12, 5005, 4365, 6297};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 111;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int n = 1;
    vector<int> x = {0};
    vector<int> y = {0};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int n = 100000000;
    vector<int> x = {-1, -1, -1, 0, 1, 1, 1};
    vector<int> y = {-1, 0, 1, 1, -1, 0, 1};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 21;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int n = 1;
    vector<int> x = {-1, 0};
    vector<int> y = {0, 0};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int n = 5;
    vector<int> x = {5, 3, 6, 2, 1, 6, 4, 4, 7, -1, -4, -7, 2, -2, 0};
    vector<int> y = {0, -1, 8, -5, 2, 5, -8, 8, -6, 4, 3, 2, 7, 3, 5};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 66;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int n = 100000000;
    vector<int> x = {-100000000, -99000000, -98000000, -97000000, -96000000, -95000000, -94000000, -93000000, -92000000, -91000000, -90000000, -89000000, -88000000, -87000000, -86000000, -85000000, -84000000, -83000000, -82000000, -81000000, -80000000, -79000000, -78000000, -77000000, -76000000, -75000000, -74000000, -73000000, -72000000, -71000000, -70000000, -69000000, -68000000, -67000000, -66000000, -65000000, -64000000, -63000000, -62000000, -61000000, -60000000, -59000000, -58000000, -57000000, -56000000, -55000000, -54000000, -53000000, -52000000, -51000000};
    vector<int> y = {-100000000, -99000000, -98000000, -97000000, -96000000, -95000000, -94000000, -93000000, -92000000, -91000000, -90000000, -89000000, -88000000, -87000000, -86000000, -85000000, -84000000, -83000000, -82000000, -81000000, -80000000, -79000000, -78000000, -77000000, -76000000, -75000000, -74000000, -73000000, -72000000, -71000000, -70000000, -69000000, -68000000, -67000000, -66000000, -65000000, -64000000, -63000000, -62000000, -61000000, -60000000, -59000000, -58000000, -57000000, -56000000, -55000000, -54000000, -53000000, -52000000, -51000000};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 1275;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int n = 10;
    vector<int> x = {-5, 0, 5};
    vector<int> y = {0, 0, 0};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int n = 1;
    vector<int> x = {1, 1, 1};
    vector<int> y = {1, 0, -1};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int n = 3;
    vector<int> x = {1, 2, 2, 2, 3};
    vector<int> y = {1, 1, 2, 0, 1};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 13;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int n = 3;
    vector<int> x = {1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 4, 4, 4, 4, 4, 4, 6, 6, 6, 6, 6, 6, 7, 7, 7, 7, 7, 7};
    vector<int> y = {1, 2, 4, 5, 6, 7, 1, 2, 4, 5, 6, 7, 1, 2, 4, 5, 6, 7, 1, 2, 4, 5, 6, 7, 1, 2, 4, 5, 6, 7};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 99;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int n = 1000000;
    vector<int> x = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> y = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    SquaredSubsets* pObj = new SquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(n, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 99;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=23028204&rd=14546&pm=11438
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
 
class SquaredSubsets {
public:
  long long countSubsets(int, vector <int>, vector <int>);
};
 
long long SquaredSubsets::countSubsets(int sz, vector <int> x, vector <int> y) {
  int n = x.size();
  vector<int> xx, yy;
  sz *= 2;
  for (int i = 0; i < n; i++)  
  {
    x[i] *= 2;
    xx.push_back(x[i]);
    xx.push_back(x[i] - sz - 1);
    y[i] *= 2;
    yy.push_back(y[i]);
    yy.push_back(y[i] - sz - 1);
  }
  set<long long> res;
  for (int i = 0; i < xx.size(); i++)
    for (int j = 0; j < yy.size(); j++)
    {
      int X = xx[i];
      int Y = yy[j];
      long long mask = 0;
      for (int k = 0; k < n; k++) if (x[k] >= X && x[k] <= X + sz && y[k] >= Y && y[k] <= Y + sz) mask |= 1ll << k;
      if (mask) res.insert(mask);
    }
  return res.size();
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/