/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7583
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

class ImageTraders {
public:
    int maxOwners(vector<string> price);
};

int ImageTraders::maxOwners(vector<string> price) {
    int ret;
    return ret;
}


int test0() {
    vector<string> price = {"01", "10"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
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
    vector<string> price = {"022", "101", "110"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> price = {"01231", "00231", "00031", "00002", "00000"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> price = {"15555", "11111", "15111", "11111", "11111"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> price = {"0100000000", "0020000000", "0003000000", "0000400000", "0000050000", "0000006000", "0000000700", "0000000080", "0000000009", "1111111111"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> price = {"111111111111111", "111111111111111", "111111111111111", "111111111111111", "111111111111111", "111111111111111", "111111111111111", "111111111111111", "111111111111111", "111111111111111", "111111111111111", "111111111111111", "111111111111111", "111111111111111", "111111111111111"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> price = {"3675356291270", "9360626187920", "2375922897361", "2931947845036", "1063206155476", "5693745254744", "3078688431492", "0689266495048", "7172722610615", "9490917711597", "7673656394812", "9390885096385", "6115984810304"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> price = {"4447631759621", "7857418597538", "8318964333860", "4888977643030", "9254059469224", "7754812893680", "2105110850646", "2586284724062", "9908131103403", "9196933805664", "0046267569872", "8299602761321", "5991491075870"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> price = {"4804296104222", "0552902838040", "9196254499360", "5029435174314", "6942264128892", "8886838333804", "7689068790333", "7326526587960", "4104870862479", "3928301789154", "9257499459357", "0819978253490", "2019621207311"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> price = {"9056774064748", "5826066462896", "0701013772645", "2029099451037", "8860467609759", "7853383793787", "4190988584371", "3809799324371", "2202175174171", "1170408516621", "9648081022975", "6463797491706", "0853941541554"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> price = {"9838522270346", "3633443972589", "0247657133385", "1087635080411", "3593415083565", "9907637615065", "0812269104274", "0328037003492", "7425244386089", "2231834224517", "5716981333798", "6704848168521", "9960649908931"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> price = {"4896773712215", "0904013741130", "3217565422172", "4165785927364", "7972216302156", "5003466025895", "0608378210585", "5073823077769", "1190898803706", "9217797627158", "8456568488387", "5245057327213", "4941957412216"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> price = {"2022974356140", "3127798107601", "0251971312068", "7492445912896", "0640945466399", "5213099134585", "7338955386033", "6187051103004", "5424999498163", "9334615617229", "2812478637723", "7253768136403", "5850998024901"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> price = {"2006390838731", "0050318017910", "3594846929030", "3379499194206", "5956114372733", "9244499383295", "4394955739072", "7290504179362", "1253918870527", "9196368466727", "4100644373472", "1795689552159", "9162105321976"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> price = {"8206433690485", "1297380923187", "4163855012648", "5625269133152", "6944607437900", "2269035587170", "6041302960935", "4364319109456", "2591774119138", "7493138793884", "0086823850592", "6852836787266", "2970372351789"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> price = {"4164354873350", "1457078993946", "4555606269929", "6553867360269", "3087652400685", "4946832362247", "0496546425161", "3771210890134", "8582206361057", "4200339043342", "4538113158133", "9754496721013", "7763910411864"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> price = {"9899998899898", "9360626187920", "2375922897361", "2931947845036", "1063206155476", "5693745254744", "3078688431492", "0689266495048", "7172722610615", "9490917711597", "7673656394812", "9390885096385", "6115984810304"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> price = {"8889899999889", "7857418597538", "8318964333860", "4888977643030", "9254059469224", "7754812893680", "2105110850646", "2586284724062", "9908131103403", "9196933805664", "0046267569872", "8299602761321", "5991491075870"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> price = {"9999999999999", "7349157405769", "9931625490364", "7819312825590", "5694893120676", "7095693087327", "5927995933077", "4952524780830", "8232911301352", "8947886324583", "5919113733846", "0715106776869", "0279540851990"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> price = {"9999999999999", "3359271188606", "1270416309383", "1778421125957", "9450264098153", "3491701607139", "3900896399151", "0448782612920", "1015166176259", "2409733211259", "5980220371254", "1166203400754", "0888847869065"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> price = {"9999999999999", "6231660748338", "9517006973946", "5605287505102", "7071066138417", "1467313387453", "4366568378150", "7548275048303", "4771234192777", "6883058662314", "9191431455796", "9358036966662", "2075476403919"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> price = {"9999999999999", "5191544398284", "2346405260283", "8022375201846", "0588923587631", "4432932185050", "1687282282539", "3259403924578", "5480419593518", "6539582278429", "7766710547754", "8011877394218", "9134223980205"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> price = {"9999999999999", "1104917250681", "4837626250717", "5690431690795", "5113284772936", "7350206202718", "8469110464422", "1635320033197", "1265061864168", "0154561836366", "6195039682410", "0549542087717", "2908861941239"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> price = {"7778778778778", "2882704605305", "0945629417182", "1123564513579", "7249849417634", "0058262719374", "6014106596200", "3096497191918", "0048600762737", "9119451535426", "3457487884183", "7212026312837", "4016762437237"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> price = {"7878778878878", "1096736825740", "0143172187112", "4922835992553", "7101305766409", "4718257497746", "8715288221471", "0551620702476", "6450259611695", "8307424153360", "3070936451257", "3854469633807", "4302562481778"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> price = {"8777887787787", "4694359694239", "0787537954667", "7070117270966", "8101218005484", "1207108901275", "0046829951264", "2102817090091", "1040560129540", "0526160198380", "2813023640251", "4660888079871", "9767708038464"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> price = {"8777877887887", "4223542112192", "4972562323662", "1006468804247", "6697957602426", "8644874030738", "9713590669137", "1834612272933", "4307395622548", "2517237793037", "7562827001979", "4958994088568", "6189985705086"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> price = {"7888787878778", "5693454573343", "3933554327624", "8136405339174", "8392631969434", "8002615979143", "4442045263592", "3886488507658", "5400946368930", "5677015090807", "8755522521007", "8164322195265", "3863760226543"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> price = {"9797977778797", "4108025567344", "6149294618596", "7870631731198", "7834205799857", "9349139837156", "7886774238287", "3968853265553", "1576146123968", "2603464063507", "2559064948309", "5603430686446", "1713750270032"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> price = {"8987897777877", "6611220657371", "0814075748282", "1703490524020", "7245365727404", "8899208532659", "8012294840599", "7639240132339", "9554656889747", "3644542134538", "0813920578236", "0457205841264", "6391119449766"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> price = {"9878999789799", "5812495308622", "2398975998258", "2590350475320", "6078411602373", "2569304328854", "7081243147353", "5992239834197", "3978460473006", "4891360484873", "3262192188704", "5347005131855", "8936480013056"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> price = {"7978798878879", "8993484061881", "1136859488761", "5463542799561", "1791812492118", "9955331967614", "7013142253597", "5286207850170", "9680252515938", "4653507480660", "1630828852497", "7562529086352", "3781700028537"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> price = {"7899797978878", "4291441360563", "9602520035248", "7764306441976", "5713229255475", "0284073919903", "5144912046449", "9936650613552", "7439910451573", "2476577053662", "7172368658774", "3892138995886", "5423614367046"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> price = {"4644868575246", "6766867677967", "8996767679997", "7876687686796", "8699778786796", "8867976776997", "7987967899986", "7876898868969", "7786899668686", "6798776878767", "7868779977867", "9877878899997", "6886998979768"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> price = {"4044021301885", "7876978787667", "8688866998978", "6769977676767", "9786866688788", "6777988977697", "8998789988988", "7796967676866", "6769988869668", "9877698697668", "7667669798986", "6766698778698", "9789966976667"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> price = {"4068750531867", "2132002323033", "3332311300013", "3112203120103", "0333222102211", "2113101223220", "0210110012230", "2123211002010", "3031033200300", "0220201130200", "2200330201133", "1321330132103", "1011000103001"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> price = {"5124776765877", "1021332112113", "1001113313312", "1102212032013", "1302312323012", "1123330012102", "0221131110233", "0232103332232", "3103001222233", "3313221102131", "1130032022000", "2221220312123", "1110222222102"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> price = {"1711704188353", "0113120232010", "2313111300022", "3212223310112", "0321010101211", "3211000122321", "0221131301012", "0212300110111", "0312010331201", "2113322001002", "2003103223022", "3003130223000", "0200020022010"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> price = {"7899963465485", "1331323123312", "2120222113123", "2231211220011", "3000331133310", "0112001013121", "3320011110021", "3201202032002", "1330123333000", "1003101110130", "0100010311200", "1001011102123", "2201212212312"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> price = {"5598633478876", "0102020032110", "3030203221330", "1130031011211", "1333323321313", "1321332233203", "3121230120313", "2223102311230", "1221212021332", "2323202033023", "1311333101331", "1010233021002", "0022301011302"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> price = {"8583733844457", "2022222101122", "2312110300230", "1100321103030", "0012231023122", "2201312321133", "1230331023033", "2210033002231", "0023331200211", "0013032132023", "0013110303312", "3200300030311", "2011321013112"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> price = {"9899899989998", "2257027815716", "6421743668357", "2717530817077", "1130772788205", "6061508672160", "0405086362101", "7818266052027", "5562365335070", "6186073146586", "1844607311162", "2220061021551", "7264663811084"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> price = {"8898889898889", "8303453808337", "4471768826316", "5726480202740", "7331184770276", "5204732716688", "7260223512237", "1316866814112", "2771431833847", "0474365414882", "7318414206323", "6321825746281", "4173154226146"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> price = {"8898989888989", "7634676485826", "8874673626268", "7047113250804", "7437117652568", "5112172331464", "1638283372430", "7533484405020", "3221617717440", "2523518844586", "5366178383551", "6138144477374", "5012663134808"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> price = {"8999988899999", "8664204128560", "0177722222836", "5476751203234", "3210188647847", "1772435171484", "2145376277154", "6111826420551", "1731050403366", "8254405523565", "7604510800504", "3477870422567", "5732387133313"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> price = {"8998888999998", "1587343454336", "5476588083735", "1464870731163", "6877530376146", "0732444803670", "7714153817018", "6501117430878", "6233011130440", "5274228020102", "4081861271180", "4848670320510", "5825143150542"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> price = {"9888998988889", "1445144060236", "6424465146656", "4414501252403", "1035632154513", "1536551420430", "3651062321451", "1062401554361", "6450366114511", "1234144156644", "4162254550336", "2053643315534", "3130561261535"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> price = {"9998998889889", "5122363046460", "3554306056101", "1315564061401", "2056564336416", "0060101036015", "6205125463324", "4115523223143", "4113665044001", "0122501054025", "2564616153011", "4624505103161", "4116642360531"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> price = {"9888899889889", "4401643522024", "0223131056155", "6330403228655", "6562242202502", "2620463505615", "6122625321041", "6656003055664", "4415006224400", "6612106444404", "2541013103145", "1110256105652", "3243046450361"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> price = {"948", "176", "628"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> price = {"7282461826", "2259085522", "3833415468", "3201977067", "8805926570", "7282746292", "3473562478", "2794486053", "0470957578", "7224503942"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> price = {"84", "90"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> price = {"67698218844", "03503849542", "59657740538", "58278308122", "62547623172", "74270223294", "66499221496", "15387696180", "35079618087", "49662731368", "86657286533"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> price = {"9818897384", "6074309188", "8655153687", "3209534168", "6283835043", "0427032512", "2644510226", "0000513017", "6128841212", "4480061206"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> price = {"549", "222", "545"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> price = {"165722257763", "424257217400", "842389995871", "411045209745", "688348424873", "872571912049", "681578236191", "155653132519", "602126205582", "308037352837", "143594476700", "521281531357"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> price = {"2699169", "3684241", "0121964", "1658083", "5556115", "0573377", "8218551"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> price = {"7619543228696", "0960666935956", "0111757531212", "2819038654416", "8955556996481", "7930250550059", "5039638395174", "0308597811626", "3288148736032", "1839554551722", "8680435318725", "2085295700458", "9654030866139"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> price = {"000000000000000", "000000000000000", "000000000000000", "000000000000000", "000000000000000", "000000000000000", "000000000000000", "000000000000000", "000000000000000", "000000000000000", "000000000000000", "000000000000000", "000000000000000", "000000000000000", "000000000000000"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> price = {"875896752525259", "598276596735884", "851438078222911", "363102061837335", "012177274208799", "847178694779415", "236444281833704", "808828687275328", "841707326619001", "601785563203745", "541831666237359", "419500156687973", "659933199734669", "523603611399216", "593697928912590"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> price = {"726448776732563", "630999691704953", "129641100982960", "923913802172789", "012186318337843", "835258538977147", "079489332177851", "157872747734761", "490550484903680", "025725199895561", "802088026638929", "921713225124672", "072470485160182", "096367981426083", "203670910647667"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> price = {"113793423626376", "096373567641537", "244816387794251", "872529088764117", "851455295984302", "699862082888499", "276541062682233", "404600808008057", "997741057335779", "041401604724521", "330005322257854", "950222502976438", "583803356573458", "066100360858413", "593875200077535"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> price = {"799988978979988", "957478924907265", "304229368351047", "152802696316034", "865299345293597", "202784976707322", "909640686326675", "326896205097720", "032109167711588", "132913763362066", "080592408391679", "485996264693009", "927198358309466", "416925744403735", "828757583513650"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> price = {"998978878988987", "459424174625282", "436778460518995", "650792339793434", "979566524885697", "264254717808272", "869738680068850", "798133704697734", "110205063192199", "188911594173846", "259409906517956", "864885156566850", "698568570342039", "835415150807414", "675653601755151"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> price = {"777799777877979", "054611981256063", "180759581064400", "215899909034832", "360337418814274", "207086189002617", "045008969743160", "810531469361722", "429141137134642", "625908046992066", "528434540273637", "122614710329627", "279334788738293", "205696067099154", "803937325128140"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> price = {"988997888989877", "178142676817651", "749807930425311", "521555932526483", "888760684928459", "823971464936577", "055843131725580", "664151229712580", "207912327491069", "226733085078228", "479260612563681", "705398908625560", "519457439887345", "437977089043619", "670715480388044"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> price = {"999877777978889", "780053503654668", "158100864519411", "990997567843231", "246159357009160", "261472229115658", "984611746468575", "821160483526081", "189562757595473", "975283224776304", "514680957839376", "883521946325975", "548217424227176", "764216503157764", "421364206620657"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> price = {"999987778779987", "695741162946902", "836425197224711", "170846054468251", "646388819731333", "462647464821978", "232862865751196", "452828565279586", "300888267852963", "529913781408478", "238218354032248", "813924222565422", "455398124849096", "077362704250715", "162711526120121"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> price = {"999889899889998", "127023721227439", "458356674676593", "205100694018964", "829676263642413", "835577536930028", "402389135499861", "446993777562767", "729958183624830", "194986573251640", "322510348833216", "347955505842016", "260412468341694", "428116876571794", "612666024951030"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> price = {"998989998888989", "743921733249364", "334794225744972", "046568633077106", "559940673349757", "151939095392325", "980895154690585", "222615517078501", "011010728387347", "069541204921071", "174406490459105", "913088128642942", "379711573628758", "261571504388884", "011104561825811"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> price = {"899888989999999", "116437883287768", "843865401175756", "288933633153831", "835314864271768", "599504067393878", "971505901520819", "990840258107696", "483855367610803", "712999936766637", "278753400263455", "746247352959712", "569357809046483", "179815741036119", "387433315329187"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> price = {"688966867679768", "426658178968699", "173244086703239", "283068977964943", "983407006686202", "352778767583970", "488730730520343", "570947946694201", "260245230482718", "096282186767187", "524560203251744", "543384692478209", "951520540895189", "835375755194214", "132484461560208"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> price = {"669776999689688", "453624160236486", "424758029781468", "735097426461329", "963669483552620", "693213985742974", "093451599866040", "111433943547937", "556091142238152", "165338825399004", "789381625840858", "394849942473594", "992042114911908", "957633527986356", "745159382074396"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> price = {"789788889899687", "831368507726157", "986012784826942", "636882854738465", "164985473877674", "957757143818874", "412803560170839", "444330176657435", "098570857064269", "114869876453399", "028878973691229", "152739718574115", "019026815397619", "824008191249672", "373385188927688"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> price = {"676866676698977", "307885217983021", "510714411002735", "275153696304909", "250253616938302", "851368859489090", "917954435329151", "538685660520532", "725641104839776", "120910677631904", "379855965651748", "350573631526616", "365440149624990", "748005388630213", "069704810904515"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> price = {"797779669996996", "762835238440092", "553704810823239", "027512058022322", "509079652654000", "902653879681115", "385202368625045", "036513821901212", "862382640602127", "952706008120242", "628069443405939", "624096627451785", "968996030502095", "070671343209379", "887808604664083"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> price = {"668679769986899", "774484546932333", "813090112786565", "035693249932388", "689001024512160", "963452979064323", "383404518161397", "585840358266618", "149589160178230", "980475700746307", "243192028335358", "549606398362204", "148577999942609", "755616447204426", "050909818025495"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> price = {"997799767877988", "829298597831213", "665121785843914", "363152698471269", "493893651914292", "395697566472485", "125472614494591", "691837581827933", "342756687124261", "391171526675176", "477342979678994", "891697646173587", "194725613347124", "293959684988124", "793973211245726"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> price = {"697966887897997", "479546735756225", "596715227338438", "273196568911339", "759219491122634", "448657293864884", "856544274373244", "577229816982159", "213556962168379", "615226176765647", "437489773857772", "422831416152394", "736462118393748", "979869777373279", "342955155762713"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> price = {"668886998778699", "355429693868126", "344149497337868", "881392352525194", "628919628349995", "682611634755954", "493981633254134", "682722573827393", "419597539743255", "581459577766565", "515452894656841", "186891745291845", "165677554786369", "165624498887768", "252488131299893"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> price = {"623321417825392", "100112100101002", "002120222020201", "021112000221102", "112122012022120", "202021002221111", "000020020212222", "020100020210022", "002001112110122", "122200202221010", "210221202221200", "220011100112221", "202001120112210", "020121200212011", "102210022002000"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> price = {"966684376684834", "122312431101221", "022120401230342", "210113022332011", "310342304430131", "124100404303004", "342024024444104", "011441213144421", "022031104010230", "334040113230144", "421221333400443", "033132311204230", "332101004302341", "311341130420314", "044301101113043"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> price = {"569537558556859", "013413221304203", "243014140233043", "444400020120011", "002113024222041", "442034333311334", "140023042014444", "130030034312121", "302031330033202", "110131334243222", "322220304034304", "112341141122112", "314032334402034", "212103213140003", "204232112002022"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> price = {"449443598738985", "314232140320222", "214330110244320", "201332013220214", "131231244024123", "113443110032223", "214032334333412", "244033100123041", "032430420020011", "230104011243044", "303013320024120", "220031404224000", "430414313011020", "024123430303200", "013211144011310"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> price = {"999989787778799", "746114872098517", "398859951800906", "583316003224275", "934011927209219", "189621223567116", "629222346269310", "329483727075906", "669703237886917", "061111683312802", "780860185183787", "603936095548748", "119117135865455", "117620321075862", "873787410118953"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> price = {"877797897877899", "584184847088874", "132757527789839", "598108702400209", "813300052042126", "197109979331451", "364894911135657", "466196085918275", "331712304447904", "662471271785704", "257649091435427", "005342661051523", "968944853116770", "682238696891965", "584578053567454"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> price = {"797889999889788", "313760587145083", "427937613558424", "157425604338036", "390084975322184", "790634114549352", "182212801354562", "952117639285242", "651094576622270", "596929802933579", "754086633518747", "918521501926295", "361891676127911", "714586639051690", "438739899401105"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> price = {"555555555555552", "555555555555558", "555555555555551", "555555555555551", "555555555555551", "555555555555551", "555555555555551", "555555555555551", "555555555555551", "555555555555551", "555555555555551", "555555555555551", "555555555555551", "555555555555551", "999999999999999"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> price = {"555555555555552", "555555555555551", "555555555555551", "555555555555551", "555555555555551", "555555555555551", "555555555555551", "555555555555551", "555555555555551", "555555555555551", "555555555555551", "555555555555551", "555555555555551", "555555555555551", "999999999999999"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> price = {"555555555555552", "555555555555551", "555555555555551", "555555555555551", "555555555555551", "555555555555551", "555555555555551", "555555555555551", "555555555555551", "555555555555551", "555555555555551", "555555555555551", "555555555555551", "555555555555558", "999999999999999"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> price = {"777777777777775", "777777777777774", "777777777777771", "777777777777772", "777777777777770", "777777777777771", "777777777777772", "777777777777774", "777777777777773", "777777777777774", "777777777777776", "777777777777773", "777777777777771", "777777777777774", "766647667677767"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> price = {"777777777777778", "777777777777774", "777777777777771", "777777777777772", "777777777777770", "777777777777771", "777777777777772", "777777777777774", "777777777777773", "777777777777774", "777777777777776", "777777777777773", "777777777777771", "777777777777774", "766647667677767"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> price = {"131111111111111", "103333333333333", "104544444444444", "104444445444544", "104444444445444", "105444445454444", "104544454444445", "104544544444544", "105454445454444", "105445444445454", "105444444444544", "105454444545444", "105444445444444", "105444444444444", "105444445444544"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> price = {"141111111111111", "103333333333333", "104544444444444", "104444445444544", "104444444445444", "105444445454444", "104544454444445", "104544544444544", "105454445454444", "105445444445454", "105444444444544", "105454444545444", "105444445444444", "105444444444444", "105444445444544"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> price = {"133333333333333", "333334334343432", "343434343434342", "333343433434341", "333343334343332", "343333343333331", "434333433333341", "333343333333332", "433333433333331", "333333333333332", "333343333333431", "343334333333332", "333433334333331", "334333343333332", "433333333333342"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> price = {"133333333333334", "333334334343432", "343434343434342", "333343433434341", "333343334343332", "343333343333331", "433333433333341", "333343333333332", "433333433333331", "333333333333332", "333343333333431", "343333333333332", "333433334333331", "334333343333332", "433333333333342"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> price = {"555555555555555", "555555565556554", "555555555555562", "555555555555553", "555555555556552", "556555565555554", "555655565665554", "555555665556553", "655655555655550", "655655556555664", "556555655555553", "555565555566561", "555655555556561", "555555555656551", "656565555556552"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> price = {"555555555555555", "555552565565555", "555551555565555", "655552555555565", "665650555565655", "555651555555565", "655550655555555", "665551555556555", "565654555555555", "555550655555555", "665553655556555", "655553555555665", "555552665665655", "555554655555555", "555551555555655"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> price = {"555555555555555", "555550656555555", "655553665555555", "555551555555556", "555552565655556", "665554555555555", "555554655556565", "555552555555555", "555554565656555", "565650565555555", "556554555555555", "565561555555565", "665553555565556", "555550556555555", "565553655556655"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> price = {"555555555565555", "556555555505555", "565555555605555", "555555555525655", "566555565515665", "555555555545555", "655555555545555", "555665555515555", "556555555515556", "555565555505555", "655655555535555", "555555555515555", "655555555545555", "555555565526655", "556555555605555"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> price = {"555555655555555", "555555055555555", "555555155555655", "555656155655555", "556555365555555", "655555055655556", "556556356555655", "555555165666555", "555555355565565", "555655455555565", "565655355555555", "555555355556555", "555556255556555", "556555155555555", "655555056555555"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> price = {"555655555555555", "555055655565555", "565256655555565", "556455565655555", "555455665555565", "565055555555556", "556355555555655", "555066655566555", "556355555555556", "555455555556555", "555456565565655", "556355555556556", "655065655555555", "655155555565556", "555355555565555"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> price = {"15555", "11111", "15111", "11111", "11111"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> price = {"111111111111111", "111111111111111", "111111111111111", "111111111111111", "111111111111111", "111111111111111", "111111111111111", "111111111111111", "111111111111111", "111111111111111", "111111111111111", "111111111111111", "111111111111111", "111111111111111", "111111111111111"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> price = {"010000000000000", "002000000000000", "000300000000000", "000040000000000", "000005000000000", "000000600000000", "000000070000000", "000000008000000", "000000000900000", "000000000000000", "000000000000000", "000000000000000", "000000000000000", "000000000000000", "000000000000000"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> price = {"000000000000000", "000000000000000", "000000000000000", "000000000000000", "000000000000000", "000000000000000", "000000000000000", "000000000000000", "000000000000000", "000000000000000", "000000000000000", "000000000000000", "000000000000000", "000000000000000", "000000000000000"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> price = {"999999999999999", "999999999999999", "999999999999999", "999999999999999", "999999999999999", "999999999999999", "999999999999999", "999999999999999", "999999999999999", "999999999999999", "999999999999999", "999999999999999", "999999999999999", "999999999999999", "999999999999999"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> price = {"681924826732866", "897050995281273", "952246620225703", "312319510059378", "873297062206778", "119543714739669", "666917915346933", "946122413086174", "033854645391905", "591103664965882", "207792176727827", "397729088704284", "627306615407211", "942835045835473", "138880661314055"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> price = {"011111111111110", "000000000000000", "000000000000000", "000000000000000", "000000000000000", "000000000000000", "000000000000000", "000000000000000", "000000000000000", "000000000000000", "000000000000000", "000000000000000", "000000000000000", "000000000000000", "000000000000000"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> price = {"000000000000000", "000000000000000", "000000000000000", "000000000000000", "000000000000000", "000000000000000", "000000000000000", "000000000000000", "000000000000000", "000000000000000", "000000000000000", "000000000000000", "000000000000000", "000000000000000", "000000001000000"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
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
    vector<string> price = {"121211212112121", "121211212112121", "121211212112121", "121211212112121", "121211212112121", "121211212112121", "121211212112121", "121211212112121", "121211212112121", "121211212112121", "121211212112121", "121211212112121", "121211212112121", "000000000000000", "000000000000000"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> price = {"186746317543016", "186746317543016", "186746317543016", "186746317543016", "186746317543016", "186746317543016", "186746317543016", "186746317543016", "543254351435143", "543254351435143", "543254351435143", "543254351435143", "543254351435143", "543254351435143", "543254351435143"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> price = {"111111111111110", "111111111111110", "111111111111110", "111111111111110", "111111111111110", "111111111111110", "111111111111110", "111111111111110", "111111111111110", "111111111111110", "111111111111110", "111111111111110", "111111111111110", "111111111111110", "111111111111110"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
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
    vector<string> price = {"111", "111", "111"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> price = {"111111111111111", "111111111111111", "111111111111111", "111111111111111", "111111111111111", "111111111111111", "111111111111111", "111111111111111", "111111111111111", "111111111111111", "111111111111111", "111111111111111", "111111111111111", "000000000000000", "000000000000000"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> price = {"00", "00"};
    ImageTraders* pObj = new ImageTraders();
    clock_t start = clock();
    int result = pObj->maxOwners(price);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=20105072&rd=13521&pm=7583
********************************************************************************
#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>
using namespace std;
 
#define REP(i,n) for(__typeof(n) i=0; i<(n); i++)
#define sz size()
#define VS vector<string>
#define SET(t,v) memset((t), (v), sizeof(t))
 
 
// here comes the sun!!! :)
 
int n;
int memo[1<<15][10][15];
VS P;
 
int solve(int mask, int last, int id ) {
  int& ret = memo[mask][last][id];
  if( ret != -1 ) return ret;
  
  ret = __builtin_popcount( mask );
  REP(i,n) if( !(mask & 1<<i) && (P[id][i] -'0') >= last ) {
    int t = solve( mask | 1<<i , P[id][i] -'0', i );
    ret = max( t, ret );
  }
  return ret;    
}
 
class ImageTraders {
public:
     int maxOwners( vector <string> price ) {
       int ret;  
       n = price.sz, P = price;
       
    SET( memo, -1 );    
    ret = solve( 1, 0, 0 );    
    return ret;
     }
};
 
 
 
 
// Powered by FileEdit
// Powered by moj 4 beta 3 [modified TZTester]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/