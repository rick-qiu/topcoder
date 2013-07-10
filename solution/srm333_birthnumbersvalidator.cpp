/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7291
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

class BirthNumbersValidator {
public:
    vector<string> validate(vector<string> test);
};

vector<string> BirthNumbersValidator::validate(vector<string> test) {
    vector<string> ret;
    return ret;
}


int test0() {
    vector<string> test = {"8104121234"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"YES"};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> test = {"8154121239"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"YES"};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> test = {"8134120005"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO"};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> test = {"8102310007", "8104121235"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO", "NO"};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> test = {"0411131237"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"YES"};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> test = {"0702299389", "0802290896", "0902292787", "1002296922", "1102297801", "1202298339", "1302295390", "1402290494", "1502296653", "1602291427", "1702292372", "1802290028", "1902298695", "2002290059", "2102297769", "2202293929", "2302290540", "2402293432", "2502299173", "2602295740", "2702295211", "2802295375", "2902292569", "3002296429", "3102295790", "3202291532", "3302292862", "3402295127", "3502294070", "3602293145", "3702293936", "3802299809", "3902294022", "4002293064", "4102293074", "4202298177", "4302291400", "4402298461", "4502295017", "4602298052", "4702296236", "4802297379", "4902294430", "5002294924", "5102293790", "5202298541", "5302295207", "5402294326", "5502298318", "5602294379"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO", "YES", "NO", "NO", "NO", "YES", "NO", "NO", "NO", "YES", "NO", "NO", "NO", "YES", "NO", "NO", "NO", "YES", "NO", "NO", "NO", "YES", "NO", "NO", "NO", "YES", "NO", "NO", "NO", "YES", "NO", "NO", "NO", "YES", "NO", "NO", "NO", "YES", "NO", "NO", "NO", "YES", "NO", "NO", "NO", "YES", "NO", "NO", "NO", "YES"};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> test = {"5702296413", "5802293530", "5902296092", "6002298984", "6102299962", "6202291876", "6302296869", "6402299178", "6502296999", "6602297284", "6702292311", "6802290935", "6902297094", "7002296334", "7102290338", "7202296508", "7302290853", "7402291732", "7502291313", "7602295866", "7702296129", "7802293895", "7902299592", "8002290549", "8102298820", "8202293374", "8302295441", "8402290369", "8502294053", "8602293755", "8702291092", "8802296811", "8902297283", "9002297183", "9102295796", "9202293584", "9302295409", "9402292658", "9502292756", "9602292403", "9702299937", "9802295063", "9902299682", "0002293368", "0102297745", "0202290022", "0302296236", "0402298589", "0502298104", "0602297542"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO", "NO", "NO", "YES", "NO", "NO", "NO", "YES", "NO", "NO", "NO", "YES", "NO", "NO", "NO", "YES", "NO", "NO", "NO", "YES", "NO", "NO", "NO", "YES", "NO", "NO", "NO", "YES", "NO", "NO", "NO", "YES", "NO", "NO", "NO", "YES", "NO", "NO", "NO", "YES", "NO", "NO", "NO", "YES", "NO", "NO", "NO", "YES", "NO", "NO"};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> test = {"0752299383", "0852290890", "0952292781", "1052296916", "1152297795", "1252298344", "1352295395", "1452290499", "1552296658", "1652291421", "1752292366", "1852290033", "1952298700", "2052290064", "2152297763", "2252293934", "2352290545", "2452293426", "2552299178", "2652295745", "2752295216", "2852295369", "2952292574", "3052296434", "3152295784", "3252291537", "3352292867", "3452295132", "3552294075", "3652293139", "3752293930", "3852299803", "3952294027", "4052293058", "4152293079", "4252298171", "4352291394", "4452298466", "4552295011", "4652298046", "4752296230", "4852297373", "4952294424", "5052294929", "5152293784", "5252298546", "5352295201", "5452294331", "5552298323", "5652294373"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO", "YES", "NO", "NO", "NO", "YES", "NO", "NO", "NO", "YES", "NO", "NO", "NO", "YES", "NO", "NO", "NO", "YES", "NO", "NO", "NO", "YES", "NO", "NO", "NO", "YES", "NO", "NO", "NO", "YES", "NO", "NO", "NO", "YES", "NO", "NO", "NO", "YES", "NO", "NO", "NO", "YES", "NO", "NO", "NO", "YES", "NO", "NO", "NO", "YES"};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> test = {"5752296418", "5852293535", "5952296097", "6052298989", "6152299956", "6252291881", "6352296863", "6452299172", "6552297004", "6652297289", "6752292305", "6852290929", "6952297088", "7052296328", "7152290343", "7252296513", "7352290847", "7452291737", "7552291318", "7652295860", "7752296134", "7852293900", "7952299586", "8052290554", "8152298814", "8252293368", "8352295435", "8452290374", "8552294047", "8652293760", "8752291097", "8852296816", "8952297277", "9052297188", "9152295790", "9252293589", "9352295403", "9452292652", "9552292761", "9652292408", "9752299942", "9852295068", "9952299676", "0052293373", "0152297739", "0252290016", "0352296230", "0452298594", "0552298098", "0652297547"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO", "NO", "NO", "YES", "NO", "NO", "NO", "YES", "NO", "NO", "NO", "YES", "NO", "NO", "NO", "YES", "NO", "NO", "NO", "YES", "NO", "NO", "NO", "YES", "NO", "NO", "NO", "YES", "NO", "NO", "NO", "YES", "NO", "NO", "NO", "YES", "NO", "NO", "NO", "YES", "NO", "NO", "NO", "YES", "NO", "NO", "NO", "YES", "NO", "NO"};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> test = {"8110001240", "8100041290", "0004111294", "0000000000", "8160001234", "8100051234", "0054121232", "0050000005"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO", "NO", "YES", "NO", "NO", "NO", "YES", "NO"};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> test = {"3088689383", "3691592777", "3833547793", "6049285386", "4142116649", "9002702362", "2005968690", "1392697763", "8342680540", "5573689172", "9536805211", "5642902567", "2153065782", "6512322862", "0313574067", "7980213929", "2305834022", "9816733069", "1845661393", "7804275011", "7737376229", "4491984421", "9853713784", "9432475198", "6437098315", "0352666413", "6898076091", "4187359956", "9917006862", "9728106996", "2092502305", "3632777084", "2650560336", "2172950846", "2585761313", "5389516124", "0054519582", "3336798814", "9036415434", "1375044043", "2680871087", "4717817276", "9358495788", "0265105403", "1239992754", "9506099932", "9336849676", "1001247739", "9858636226", "9753948094"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO"};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> test = {"8057040795", "6037851434", "6660197467", "1290210097", "7049273317", "6075626652", "6028097301", "0944124286", "2968953865", "4661928444", "4472958440", "0811758031", "0577138097", "9067534481", "9892720709", "7785604567", "7235379497", "7696554586", "6468355306", "2862406219", "3287151528", "4882905732", "3001909503", "6336858270", "8671559708", "1814926340", "0072347796", "0224542618", "9345122846", "4355592921", "9748892379", "8822837764", "9235069841", "4150065193", "8776457034", "2491470124", "7585636987", "4649173743", "4836522227", "8193609859", "5255151432", "9922816437", "7540753275", "7612101474", "9439568858", "6123736029", "7379308235", "9442865818", "3101166143", "3952935928"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO", "NO", "YES", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO"};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> test = {"2240418776", "5576364443", "5453814613", "3684018606", "4481802904", "7068835128", "6791797369", "6699669917", "8774343324", "1218359470", "9549998490", "0672589772", "5559085644", "6813917505", "6978602954", "3808207669", "8846408542", "3950710197", "2880459355", "7861176348", "2782873622", "8734349299", "3556895746", "5542254340", "1381023311", "2180167605", "7373025661", "1130544878", "7873629320", "4862679444", "0346548522", "7341686708", "1325808282", "6763712924", "0562442062", "3203662600", "1189933452", "4555019379", "9007147468", "8713100973", "8493003881", "4589408933", "7016358660", "8798157199", "5299648899", "1377352959", "3966872813", "8109587190", "1646652926", "1134065084"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "YES", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO"};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> test = {"2768422090", "5554243376", "7910755936", "1975617445", "1841869179", "8941206887", "3217203348", "6200951659", "2521002336", "6758766342", "1930178206", "6737297713", "0125575321", "4459964819", "2990417721", "3981155939", "1566773940", "4622811705", "2915011127", "9665865984", "8922463920", "6726902422", "5408121396", "4008445630", "1197279292", "7385007672", "0538547625", "3929941222", "0604206640", "4071383898", "5619052298", "4259080524", "0858188209", "9933688819", "7115537732", "1800495994", "1476960379", "8177685273", "4725568850", "4814221860", "4588475579", "2320521993", "7956767621", "9061362504", "6275401961", "5425931326", "2820218944", "2350613202", "0202136784", "9086822842"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO", "YES", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO"};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> test = {"3518989528", "4990808872", "1049849958", "1880848036", "8624857753", "3333383303", "2164832133", "9975472890", "5174617567", "1952990368", "3804614500", "4979773788", "8699066249", "0303373303", "1249705363", "9489210253", "1912547686", "1399661152", "0918845975", "0372949157", "3246095436", "4392153414", "2630470460", "8802760028", "6674878050", "0890207556", "9769704794", "7104358699", "3200201039", "0640390428", "0068144500", "0853817647", "9515136159", "8213422535", "7169204339", "1612702215", "5562920504", "9096460049", "3642998285", "7633595343", "0290003177", "0797185238", "6028916949", "1798895367", "8579592292", "5314440743", "5839002829", "5534061682", "0056953541", "7423253826"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO"};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> test = {"5604272261", "0911790360", "6676128023", "2630900081", "9542503190", "0636718996", "0423414677", "3162630690", "2605764524", "7316849614", "9035828205", "4738626312", "0434665100", "3499402726", "5655204916", "9352925578", "3229028946", "5697002647", "1908099051", "1859399631", "1862730857", "6188641312", "8835539214", "2009093512", "5947914412", "5896909610", "5227466189", "4764106355", "2543356620", "7788898987", "2456698338", "2728487770", "9041756856", "7226000606", "0023725849", "7305907205", "4851835217", "9078334945", "2845836873", "6763710873", "2048304289", "7047826607", "4931472757", "4572934471", "3345991100", "8943823618", "1138858025", "3123333074", "3368118157", "6035803493"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO"};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> test = {"1069950270", "0183933417", "6836375569", "2879492622", "1984713173", "1746296431", "3939056682", "4579104292", "5511505057", "9615791521", "3149188574", "6295101947", "3502159231", "9374010537", "1403085054", "3532554098", "8751641081", "3300253516", "4613972231", "8540461796", "7458082338", "3902119218", "3986213970", "3537984812", "9268594977", "9990431536", "3348324176", "9975979207", "8974484857", "6991193499", "6395020127", "7756005236", "7510567818", "4004910563", "8871121244", "1993441805", "7737563291", "9361458955", "4376833589", "4491828993", "7688252805", "7698244822", "2403026717", "1157493093", "8659330126", "5025381486", "0307450543", "3471327814", "3837778179", "1577574762"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO"};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> test = {"3291927088", "0673235710", "1101710294", "6023500346", "4569171137", "2394305153", "6632822573", "4929100925", "9401806710", "3683677217", "7505596963", "6385887090", "1490478130", "7266198571", "8968569633", "1307304789", "5685122604", "4925019805", "3650367868", "3900609485", "1463982195", "2112062949", "8022680967", "8767786763", "6398190596", "8756040865", "2795539036", "3351867770", "6634259211", "4519622532", "2732172379", "9498458270", "9442784172", "5204044234", "7007247283", "4583007398", "7034701063", "8203066950", "5371450573", "5752286059", "2692434047", "8943545082", "2920471232", "3044322954", "4548611898", "8427875640", "5026289159", "8968379262", "3984861041", "0832441723"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "YES", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO"};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> test = {"4912226272", "2733554154", "3745735821", "0274709365", "1177691171", "2521860269", "2170338701", "0993314653", "5395950907", "6280656728", "4872015797", "2130847084", "4269815334", "7637610991", "5271598898", "2517101052", "7155918189", "5401052506", "7822409016", "1653973109", "3337890000", "4505358109", "8911455081", "0598971338", "2806759426", "7522385147", "3223176787", "9212296532", "2387591281", "9017984850", "0225476590", "1113115350", "6785773813", "9918181494", "5460346081", "5243315720", "9018187982", "5941597487", "6882579296", "3872265404", "5055196892", "9003230297", "4318199134", "9041598506", "9970867057", "5999980595", "1229701962", "7577687483", "6897780154", "4258791309"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO"};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> test = {"2338239932", "4426695021", "0886013563", "0921103682", "6908677685", "9093064285", "9458335990", "5147697314", "9582054116", "3752541892", "3883995528", "9749097525", "0136051136", "4764389618", "8092870337", "2662106582", "1795504310", "3422570888", "7457026815", "2085343437", "0772260008", "1235011783", "0909718657", "8912663827", "2207121269", "3314926651", "4052860910", "2839830639", "3661041888", "2857792393", "9897633890", "5455255199", "2608716931", "6009988777", "4856600657", "7701780952", "9273572641", "9129889368", "5319518184", "5580596776", "2342875266", "5252888954", "1959380308", "2219797278", "8967272555", "0644550774", "2232505000", "3828360997", "6612748412", "6542198382"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO"};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> test = {"9146939340", "9424397334", "0884218159", "9949852957", "0013541770", "5787622973", "6315417724", "5618521854", "7036625486", "5503996223", "6651541182", "3990156511", "8398516368", "7247908272", "9424913179", "5700373547", "0188598828", "3608717288", "5769875859", "1465908345", "5639705357", "5876655521", "8930699525", "9073613087", "0413514112", "1893006511", "2916384669", "7093641489", "5810324157", "1361049877", "2736796150", "4134122542", "7349690645", "9161701956", "1628442761", "4066496819", "3044654316", "9223263896", "6601836043", "8269691540", "3201522621", "9243931796", "6372890117", "2596314677", "5842645743", "7745484296", "1018774317", "6668333199", "9949499362", "6651557803"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "YES", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO"};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> test = {"6784688163", "4009602938", "0988233290", "2131715366", "1856770146", "4932452184", "5727613991", "1503230058", "0841009961", "4610758372", "3220425626", "0426593926", "4562895854", "2934691243", "8415514976", "1253830028", "0631336343", "0193041959", "3659812475", "9536668020", "7889676916", "0901921735", "3809026870", "0881315006", "6831749210", "6497185222", "3011832384", "9454877476", "4345738958", "7250626130", "7139336798", "3124963424", "8931418155", "9717265481", "5969805402", "8434855957", "3723050034", "2640299563", "2068982168", "7345626431", "4177194285", "4116418911", "5930103487", "9927267592", "6287894140", "3037082730", "6009382566", "1524930440", "9807104230", "7859057690"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO", "NO", "NO", "NO", "NO", "NO", "NO", "YES", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "YES", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "YES", "YES"};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> test = {"0496139391", "9636388278", "0794217677", "2078292678", "0961808749", "2090953909", "8430247089", "7491542388", "0105698241", "9799695719", "4923730031", "4984339668", "9325877286", "6200949656", "2914992355", "0073397467", "5517427333", "3120867519", "2313499925", "9501863888", "4950115643", "8741334393", "8127223291", "8067739647", "8815196742", "4953540251", "1031240144", "0162592067", "6774186353", "9817125274", "5587055408", "3427336803", "9927344823", "7743150437", "6910870857", "1006692456", "9164874807", "5568375571", "5980893611", "5852055968", "6667046914", "4025579833", "6234038822", "3218920826", "5715223613", "3024436580", "3253611537", "2733784449", "3327004054", "5748823795"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "YES", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO"};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> test = {"8048995559", "2425891391", "6503539427", "9669484803", "1630368509", "2771076099", "6654179664", "1159218830", "0984804172", "1059946360", "7741238439", "8329339491", "0863176314", "9339319022", "1867095175", "9591561617", "2170691754", "7129957428", "0011716298", "1485690569", "2648015678", "0266526579", "1053408928", "2517430179", "6130914097", "9065273569", "7988785816", "0030505200", "3621243340", "3042135195", "4784993378", "0567945576", "4651156147", "0793422641", "4824374269", "6631983600", "1699396204", "2265131638", "8651288261", "5118044580", "3523464692", "8981381233", "1904957549", "0364218976", "3872260634", "1341585729", "1203560952", "0776455482", "9934463341", "5681115891"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO", "NO", "NO", "NO", "NO", "NO", "YES", "YES", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "YES", "NO", "NO", "NO", "NO", "NO", "YES", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO"};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> test = {"4176037668", "2558257548", "4702162344", "3791745353", "9605967338", "8462679302", "3420130758", "9805198865", "1946503295", "1178321881", "3902791992", "9639530637", "9592951599", "0961072750", "7149370580", "9449762542", "4445840806", "7200834806", "1994925614", "7664966441", "0229392768", "5057351310", "3898732607", "9301644528", "0522514355", "6827512538", "8163396714", "9531651987", "6883025633", "7610799592", "2625472410", "5684847135", "9395614921", "6219319062", "4205288428", "8154949825", "5175437586", "8411233776", "8401877649", "5246432444", "8519887398", "8513204689", "8540984496", "9930188752", "8864634108", "4946959017", "9765053188", "8561426071", "8680984433", "5714724983"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO", "YES", "YES", "NO", "NO", "NO", "NO", "YES", "NO", "NO", "NO", "NO", "NO", "YES", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO"};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> test = {"3828536976", "7647976754", "2245472273", "8405161094", "4099125162", "9898771905", "5725531207", "9629323011", "1620355957", "5181078507", "7100499164", "7138612910", "5923340005", "6353256789", "5644286802", "7817633637", "1101156562", "8803811016", "1851850902", "4321005106", "6024088334", "3733491322", "2958792639", "6343167919", "8085858781", "0227654988", "1979306626", "2378926616", "3066299577", "7997527417", "5963661517", "3673952843", "6444287784", "0738479621", "4850262307", "9410623794", "9606290771", "2951006509", "6833979416", "2307751985", "1145443541", "0433208831", "5065187567", "6517949504", "1871341549", "7169089862", "0330624305", "5226863851", "8484326543", "5398079819"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO", "NO", "NO", "YES", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "YES", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO"};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> test = {"6188340873", "4535965819", "8279848698", "3523241392", "1944659453", "5197165369", "8693433045", "6541875868", "3606025984", "7053604096", "2738798623", "3639413294", "0229246633", "0171357714", "4831626943", "7538702006", "5541637475", "1978118505", "4725156491", "9262343332", "6822905958", "0086931636", "5253392881", "9274942303", "4852132857", "4663825452", "5714750327", "0987380757", "7169515881", "0148116474", "1891688689", "3348139685", "4924998980", "6745355023", "1154640773", "1483464114", "5630723395", "8657408419", "8526239590", "0070577837", "4587933449", "6132816624", "8201148373", "6573713421", "8605968536", "7698839764", "4735674702", "8258006075", "1536740337", "4474335492"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "YES", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "YES", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "YES", "NO", "NO", "NO", "NO", "NO", "NO", "NO"};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> test = {"6174572140", "6159490535", "7855231692", "7852928149", "3076292351", "4923356427", "7821401973", "3130432261", "8503396770", "1720250939", "1916538261", "2770525230", "5629579208", "6312872984", "1195408731", "5348267001", "7072057135", "4338782734", "6651699175", "6472272807", "0115209567", "7392213664", "2778838623", "9122678224", "0553824293", "3555117038", "5425532563", "4286081866", "2517689900", "3711987664", "6549682381", "1410092178", "0895034888", "3712544682", "7940578481", "2438231939", "6743963050", "6319422285", "0680124214", "5968559751", "1448542370", "4031343767", "1012811745", "3419739411", "8916383179", "2734132962", "6518994427", "9414847761", "5056619095", "5287806073"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO", "NO", "YES", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "YES", "NO", "NO", "NO", "NO", "NO", "YES", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO"};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> test = {"3639232608", "1380008322", "2720009952", "5069520016", "8305043813", "9797595368", "5725252896", "1791170161", "2146361096", "0595602634", "7506142974", "2019378867", "2637483431", "1766209412", "4888635400", "1018322789", "4780049835", "4074586362", "5261274414", "6063686640", "5345696136", "8483413455", "4853747459", "8136050010", "0649013167", "8389891873", "7224900936", "2507326239", "7006993708", "2720009567", "1654573833", "0423483467", "1300179815", "4261692501", "8805692544", "5291285142", "1350187476", "0385850399", "9212808550", "8367542535", "2417075749", "8344000555", "2330211488", "4667883726", "5451905140", "6396340654", "1453251987", "8704611696", "6481426633", "9641915063"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO", "NO", "NO", "NO", "YES", "NO", "NO", "NO", "NO", "NO", "YES", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "YES", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "YES", "NO", "NO", "NO"};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> test = {"8455203328", "9765540543", "3871421499", "6009308426", "9000347686", "3273088104", "6297801708", "1386442805", "2795451791", "7965221088", "3769256161", "0517358611", "6344928557", "8302968993", "2515300843", "8440497054", "3205126958", "0775897661", "8684484875", "5324288486", "6325576092", "4265762347", "5377975229", "1251393704", "6870058019", "6747820288", "3905232870", "1352365025", "6814171892", "3403539304", "7927240761", "5463503243", "0377100295", "3372426167", "3351646023", "6746417722", "7621117570", "7464106265", "1827907906", "1499556157", "8259161097", "4827816444", "5839588018", "7578065385", "0999014511", "7146748983", "3152657387", "0385662981", "9176692162", "2591342842"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"YES", "NO", "NO", "YES", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "YES", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "YES", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "YES", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO"};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> test = {"9700009385", "9700000893", "9700012784", "9750006915", "9750007795", "9750018344", "9701005391", "9701310498", "9701326657", "9751001425", "9751312362", "9751320029", "9702008690", "9702280060", "9702297770", "9752003932", "9752280549", "9752293430", "9703009173", "9703315743", "9703325214", "9753005372", "9753312569", "9753326429", "9704005784", "9704301530", "9704312871", "9754005129", "9754304076", "9754313140", "9705003935", "9705319811", "9705324024", "9755003060", "9755313073", "9755328176", "9706001393", "9706308458", "9706315014", "9756008042", "9756306230", "9756317373", "9707004428", "9707314925", "9707323791", "9757008547", "9757315205", "9757324324", "9708008321", "9708314374"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO", "NO", "NO", "NO", "NO", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES"};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> test = {"9708326419", "9758003530", "9758316095", "9758328987", "9709009959", "9709301877", "9709316870", "9759009172", "9759306997", "9759317282", "9710002313", "9710310929", "9710327088", "9760006333", "9760310340", "9760326510", "9711000849", "9711301732", "9711311313", "9761005859", "9761306126", "9761313903", "9712009582", "9712310553", "9712328824", "9762003372", "9762315442", "9762320370", "9800004049", "9800003752", "9800011089", "9850006815", "9850007277", "9850017188", "9801005797", "9801313588", "9801325413", "9851002656", "9851312757", "9851322404", "9802009932", "9802285064", "9802299683", "9852003370", "9852287742", "9852290019", "9803006235", "9803318591", "9803328095", "9853007549"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO"};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> test = {"9853310797", "9853320576", "9804001438", "9804300385", "9804317468", "9854006602", "9854300104", "9854312908", "9805003318", "9805310493", "9805326652", "9855000760", "9855317307", "9855320288", "9806004296", "9806309447", "9806313869", "9856009691", "9856308451", "9856316624", "9807008442", "9807314737", "9807328036", "9857008117", "9857318097", "9857325775", "9808004481", "9808310677", "9808320709", "9858008930", "9858314576", "9858327864", "9809009507", "9809302360", "9809314592", "9859006971", "9859305313", "9859314685", "9810006228", "9810318628", "9810321532", "9860002878", "9860315740", "9860328830", "9811009505", "9811300026", "9811318275", "9861003372", "9861309711", "9861316718"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO"};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> test = {"9812006347", "9812318153", "9812327800", "9862000731", "9862312625", "9862322250", "9900002849", "9900003454", "9900012925", "9950003558", "9950002381", "9950017495", "9901007765", "9901318229", "9901329845", "9951002358", "9951315198", "9951321501", "9902007038", "9902287769", "9902290134", "9952004920", "9952286993", "9952295859", "9903003748", "9903316500", "9903322231", "9953008373", "9953319860", "9953321939", "9904001437", "9904302551", "9904316444", "9954009230", "9954303282", "9954315415", "9905001480", "9905316124", "9905328862", "9955004400", "9955316030", "9955321244", "9906008244", "9906303803", "9906315826", "9956004432", "9956306151", "9956311013", "9907005933", "9907319532"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO", "YES", "NO", "NO", "YES", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES"};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> test = {"9907328783", "9957002407", "9957314444", "9957325763", "9908004623", "9908314548", "9908328606", "9958006850", "9958312914", "9958324827", "9909005128", "9909300698", "9909317374", "9959007927", "9959309921", "9959317005", "9910003334", "9910317747", "9910329473", "9960002184", "9960318500", "9960325507", "9911009779", "9911306735", "9911315645", "9961005593", "9961307510", "9961318147", "9912002958", "9912319791", "9912327678", "9962008089", "9962318542", "9962328464", "0000000198", "0000009515", "0000019360", "0050008805", "0050006352", "0050018617", "0001003629", "0001317833", "0001329306", "0051007352", "0051315748", "0051325571", "0002004343", "0002285426", "0002293313", "0052003820"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "YES", "NO"};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> test = {"0052287609", "0052291811", "0003005662", "0003313739", "0003324882", "0053001311", "0053319321", "0053328737", "0004009445", "0004308634", "0004318523", "0054003466", "0054306714", "0054313424", "0005008289", "0005313264", "0005322933", "0055007645", "0055312070", "0055325633", "0006002601", "0006302043", "0006313461", "0056001902", "0056309385", "0056315556", "0007007473", "0007310072", "0007320973", "0057007137", "0057313883", "0057324938", "0008008935", "0008315901", "0008328661", "0058000173", "0058317204", "0058327984", "0009008901", "0009302997", "0009312963", "0059003780", "0059302815", "0059319678", "0010007195", "0010311103", "0010322928", "0060006474", "0060315090", "0060321349"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"YES", "YES", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO"};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> test = {"0011002090", "0011307692", "0011313379", "0061005549", "0061305937", "0061319115", "0012007446", "0012319758", "0012329185", "0062008419", "0062316892", "0062329421", "0100003354", "0100002177", "0100011659", "0150002017", "0150002336", "0150015217", "0101006345", "0101317590", "0101328216", "0151009309", "0151317716", "0151327374", "0102005321", "0102281256", "0102294819", "0152004600", "0152287729", "0152299906", "0103005947", "0103319821", "0103323946", "0153005677", "0153311708", "0153326228", "0104001128", "0104309150", "0104315992", "0154006666", "0154303930", "0154319231", "0105002425", "0105317278", "0105321403", "0155004091", "0155315633", "0155320088", "0106009299", "0106301976"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES"};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> test = {"0106317673", "0156003859", "0156307635", "0156315390", "0107001224", "0107319300", "0107326648", "0157006047", "0157313904", "0157320713", "0108002301", "0108316197", "0108320531", "0158002592", "0158318215", "0158328588", "0109008823", "0109309343", "0109317736", "0159001161", "0159306004", "0159318005", "0110000385", "0110314776", "0110325281", "0160001776", "0160318851", "0160327255", "0111001869", "0111308142", "0111315589", "0161005889", "0161301998", "0161313207", "0112007621", "0112319570", "0112322507", "0162000619", "0162311963", "0162322754", "0200001329", "0200004266", "0200018951", "0250008209", "0250003204", "0250013511", "0201006784", "0201312023", "0201322847", "0251000871"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "YES", "NO", "NO"};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> test = {"0251319530", "0251325195", "0202008873", "0202289912", "0202299966", "0252000507", "0252288036", "0252298816", "0203007761", "0203316256", "0203323307", "0253003333", "0253312136", "0253321651", "0204002898", "0204309754", "0204317575", "0254001748", "0254300376", "0254319538", "0205004503", "0205318047", "0205323789", "0255009799", "0255316259", "0255326995", "0206003303", "0206303042", "0206315373", "0256002505", "0256300253", "0256314894", "0207007691", "0207319134", "0207321158", "0257004000", "0257315982", "0257329193", "0208009164", "0208313732", "0208325436", "0258002470", "0258313418", "0258323923", "0209000462", "0209306306", "0209310035", "0259008035", "0259308060", "0259316750"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO"};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> test = {"0210007556", "0210318911", "0210324796", "0260007704", "0260318707", "0260321050", "0211001043", "0211302003", "0211310429", "0261006405", "0261304505", "0261310687", "0212007653", "0212318546", "0212326169", "0262005161", "0262312545", "0262322137"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO", "NO", "YES", "NO"};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> test = {"8102298765", "8002298766"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO", "YES"};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> test = {"8002290010"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"YES"};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> test = {"0401000006"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO"};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> test = {"0402290009", "0002290002", "0001000010"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"YES", "YES", "NO"};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> test = {"0001310000", "0001310001", "0001310002", "0001310003", "0001310004", "0001310005", "0001310006", "0001310007", "0001310008", "0001310009", "0001310010", "0001310011", "0001310012"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO", "YES", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "YES"};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> test = {"0001001000"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO"};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> test = {"8113010004"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO"};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> test = {"8104311237"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO"};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> test = {"1301310010"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"YES"};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> test = {"0052300006"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO"};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> test = {"0003300000"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"YES"};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> test = {"0302290010"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO"};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> test = {"9952281108"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"YES"};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> test = {"8154121240", "8154311242"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO", "NO"};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> test = {"0003321285"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO"};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> test = {"0003321285", "0107311215"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO", "YES"};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> test = {"0001001000", "0001310100", "0001320100", "0002299000", "0302299030", "0151030000"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO", "YES", "NO", "YES", "NO", "YES"};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> test = {"0001001000", "0001310100", "0001320100", "0002299000", "0302299030", "0151030000", "0003300000"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO", "YES", "NO", "YES", "NO", "YES", "YES"};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> test = {"0002290002"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"YES"};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> test = {"0051111500"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"YES"};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> test = {"0320596951", "6970685970", "0206129484", "2192367026", "1782455544"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO", "NO", "YES", "NO", "NO"};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> test = {"0004004000"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO"};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> test = {"2212001231"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO"};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> test = {"1101000010"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO"};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> test = {"0002000009", "9602290005"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO", "YES"};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> test = {"0002000009"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO"};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> test = {"0002291234", "0102291112"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"YES", "NO"};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> test = {"0004300010"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"YES"};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> test = {"3301000010"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO"};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> test = {"0251280007"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"YES"};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> test = {"8154311000"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO"};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> test = {"0002299000"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"YES"};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> test = {"0002290211", "0052299203", "4702290010", "9921120000", "0000000000", "9999999999", "0062330004", "0713250208", "1301010106", "8812689875"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"YES", "YES", "NO", "NO", "NO", "NO", "NO", "NO", "YES", "NO"};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> test = {"0051000004"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO"};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> test = {"0002291234", "0102291234"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"YES", "NO"};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> test = {"0052290004", "0052290007", "0302290010", "0052000003"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO", "YES", "NO", "NO"};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> test = {"0052290004", "0052290007", "0302290010"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO", "YES", "NO"};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> test = {"4702250003"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"YES"};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> test = {"0401000204"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO"};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> test = {"0051337000"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO"};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> test = {"0110000000"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO"};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> test = {"0002299000", "0102299010", "0507007050", "9900011099", "9950011599", "9652288569", "9652299569", "9552299559", "9652299569", "0000000000", "0001100000", "0401001040"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"YES", "NO", "NO", "NO", "NO", "YES", "YES", "NO", "YES", "NO", "YES", "NO"};
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> test = {"8104121234", "8104001235"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"YES", "NO"};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> test = {"1111001111"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO"};
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> test = {"0100010009"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO"};
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> test = {"0002291102"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"YES"};
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> test = {"0001320000"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO"};
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> test = {"0402291241", "0502291240"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"YES", "NO"};
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> test = {"0411001239"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO"};
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> test = {"8152290003"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO"};
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> test = {"0402297060"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"YES"};
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> test = {"1111000000"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO"};
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> test = {"0002299000", "1102299000"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"YES", "NO"};
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> test = {"0001001000", "0000011000"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO", "NO"};
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> test = {"0001000010"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO"};
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> test = {"8176121239"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO"};
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> test = {"8302291228"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO"};
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> test = {"0402290009"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"YES"};
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> test = {"0102290001"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO"};
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> test = {"0011000000"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO"};
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> test = {"0011310002"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO"};
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> test = {"1111111111"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"YES"};
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> test = {"8104121234"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"YES"};
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> test = {"1300501111"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO"};
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> test = {"8104000003"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO"};
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> test = {"0452291114"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"YES"};
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> test = {"8104001235"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO"};
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> test = {"0000000000"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO"};
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> test = {"8154121239"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"YES"};
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> test = {"8901000009", "8901000008", "8901010008"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO", "NO", "YES"};
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> test = {"1212007885"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO"};
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> test = {"0002290002", "0125010006", "0101000009", "0100010009", "0001010009", "0163010001"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"YES", "NO", "NO", "NO", "YES", "NO"};
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> test = {"0002290002", "0125010006", "0101000009", "0100010009", "0001010009"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"YES", "NO", "NO", "NO", "YES"};
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> test = {"0402290009", "9902290002"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"YES", "NO"};
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> test = {"0002290000", "0002290001", "0002290002", "0002290003", "0002290004", "0002290005", "0002290006", "0002290007", "0002290008", "0002290009", "0002290010"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO", "NO", "YES", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO"};
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> test = {"0000111111", "1412241231"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO", "NO"};
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> test = {"0002290200"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"YES"};
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<string> test = {"0002300001", "0002300001"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO", "NO"};
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<string> test = {"0002001230"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO"};
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<string> test = {"2103000009"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO"};
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<string> test = {"8402291007"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"YES"};
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<string> test = {"0000010001", "0001000001", "0002280008", "0100000001", "0002290009", "0102290013", "1011120001", "0853300003", "0866120009", "0852330005", "9999990009", "9904280008", "9902280006", "9902290007", "5000000000", "1234140006", "1212120004"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO", "NO"};
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<string> test = {"0000000000", "0011000000", "0000110000"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO", "NO", "NO"};
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<string> test = {"0002299121"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"YES"};
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<string> test = {"0763010006"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO"};
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<string> test = {"0050050000", "0011000000", "0000110000"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO", "NO", "NO"};
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<string> test = {"0402292000"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"YES"};
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<string> test = {"0420222000"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO"};
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<string> test = {"0011001111"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO"};
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<string> test = {"0051315000"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"YES"};
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<string> test = {"8134120005"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO"};
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<string> test = {"0604121232"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"YES"};
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<string> test = {"8104121234", "0001001000"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"YES", "NO"};
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<string> test = {"0402291237", "0402291241", "0302000006", "0302500011", "0300200010", "0350200015", "0302291242"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO", "YES", "NO", "NO", "NO", "NO", "NO"};
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<string> test = {"0352291236"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO"};
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<string> test = {"0002291113"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"YES"};
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<string> test = {"0202291111"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO"};
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<string> test = {"1100010010"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO"};
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<string> test = {"1200100000"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO"};
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<string> test = {"0000000011", "1111000011"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO", "NO"};
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<string> test = {"0202290000", "0002290002", "0802290016"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO", "YES", "YES"};
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<string> test = {"0202290000"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO"};
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<string> test = {"0202290000", "0002290002"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO", "YES"};
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<string> test = {"0002299220"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"YES"};
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<string> test = {"8104001224"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO"};
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<string> test = {"0002299011"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"YES"};
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<string> test = {"0002299990"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"YES"};
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<string> test = {"0101000020"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO"};
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<string> test = {"0010000001"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO"};
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<string> test = {"8150010001"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO"};
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<string> test = {"0002290090"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"YES"};
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<string> test = {"0002291234"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"YES"};
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<string> test = {"8109311232"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO"};
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<string> test = {"0612000081"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO"};
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<string> test = {"0101000009"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO"};
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<string> test = {"8102310007", "8104121235"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO", "NO"};
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<string> test = {"0411312000"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO"};
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<string> test = {"0611001204"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO"};
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<string> test = {"8402291216"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"YES"};
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<string> test = {"0011001232"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO"};
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<string> test = {"0002298890"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"YES"};
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<string> test = {"0052290007"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"YES"};
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<string> test = {"7501011111"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"YES"};
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<string> test = {"8452295555", "8452015550", "8452305554"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"YES", "YES", "NO"};
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<string> test = {"0501030002"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"YES"};
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    vector<string> test = {"9602291116"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"YES"};
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    vector<string> test = {"8154121392"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO"};
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    vector<string> test = {"0052291102", "0052291096"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO", "YES"};
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    vector<string> test = {"0402001226"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO"};
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    vector<string> test = {"7708316000"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"YES"};
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    vector<string> test = {"8104121234", "0801010001"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"YES", "YES"};
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    vector<string> test = {"0103000040"};
    BirthNumbersValidator* pObj = new BirthNumbersValidator();
    clock_t start = clock();
    vector<string> result = pObj->validate(test);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO"};
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test127() == 0 ? ++passed : ++failed;
    test128() == 0 ? ++passed : ++failed;
    test129() == 0 ? ++passed : ++failed;
    test130() == 0 ? ++passed : ++failed;
    test131() == 0 ? ++passed : ++failed;
    test132() == 0 ? ++passed : ++failed;
    test133() == 0 ? ++passed : ++failed;
    test134() == 0 ? ++passed : ++failed;
    test135() == 0 ? ++passed : ++failed;
    test136() == 0 ? ++passed : ++failed;
    test137() == 0 ? ++passed : ++failed;
    test138() == 0 ? ++passed : ++failed;
    test139() == 0 ? ++passed : ++failed;
    test140() == 0 ? ++passed : ++failed;
    test141() == 0 ? ++passed : ++failed;
    test142() == 0 ? ++passed : ++failed;
    test143() == 0 ? ++passed : ++failed;
    test144() == 0 ? ++passed : ++failed;
    test145() == 0 ? ++passed : ++failed;
    test146() == 0 ? ++passed : ++failed;
    test147() == 0 ? ++passed : ++failed;
    test148() == 0 ? ++passed : ++failed;
    test149() == 0 ? ++passed : ++failed;
    test150() == 0 ? ++passed : ++failed;
    test151() == 0 ? ++passed : ++failed;
    test152() == 0 ? ++passed : ++failed;
    test153() == 0 ? ++passed : ++failed;
    test154() == 0 ? ++passed : ++failed;
    test155() == 0 ? ++passed : ++failed;
    test156() == 0 ? ++passed : ++failed;
    test157() == 0 ? ++passed : ++failed;
    test158() == 0 ? ++passed : ++failed;
    test159() == 0 ? ++passed : ++failed;
    test160() == 0 ? ++passed : ++failed;
    test161() == 0 ? ++passed : ++failed;
    test162() == 0 ? ++passed : ++failed;
    test163() == 0 ? ++passed : ++failed;
    test164() == 0 ? ++passed : ++failed;
    test165() == 0 ? ++passed : ++failed;
    test166() == 0 ? ++passed : ++failed;
    test167() == 0 ? ++passed : ++failed;
    test168() == 0 ? ++passed : ++failed;
    test169() == 0 ? ++passed : ++failed;
    test170() == 0 ? ++passed : ++failed;
    test171() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=275071&rd=10657&pm=7291
********************************************************************************
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <cstdio>
#include <iostream>
#include <sstream>
#include <queue>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <sys/time.h>
using namespace std;
 
typedef vector<int> vi;
typedef vector<string> vs;
typedef long long ii;
#define pb push_back
#define si size()
 
int nd[] = {31,28,31,30,31,30,31,31,30,31,30,31};
class BirthNumbersValidator {
  public:
  vector <string> validate(vector <string> test) {
    vs ret;
    for (int i = 0; i < test.si; i++) ret.pb(ok(test[i]) ? "YES" : "NO");
    return ret;
  }
  bool ok(string z) {
    int year = (z[0]-'0')*10 + (z[1] - '0');
    if (year < 7) year += 2000; else year += 1900;
    int month = (z[2]-'0')*10 + (z[3]-'0');
    int day = (z[4]-'0')*10 + (z[5]-'0');
    
    long long w; sscanf(z.c_str(), "%lld", &w);
    printf("%d %d %d %lld\n", year, month, day, w);
    if (w % 11) return 0;
    if (!((month >= 1 && month <= 12) || (month >= 51 && month <= 62))) return 0;
    int ND = get(month % 50, year);
    if (day > ND || day == 0) return 0;
    
    return 1;
  }
  int get(int mn, int y) {
    if (mn != 2) return nd[mn-1];
    return 28 + (leap(y) ? 1 : 0);
  }
  bool leap(int y) {
    return (y % 4 == 0);
  }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/