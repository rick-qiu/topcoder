/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7856
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

class ArithmeticProgressions {
public:
    vector<string> maxAptitude(vector<string> numbers);
};

vector<string> ArithmeticProgressions::maxAptitude(vector<string> numbers) {
    vector<string> ret;
    return ret;
}


int test0() {
    vector<string> numbers = {"1", "3", "5", "8"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"3", "4"};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> numbers = {"1", "3", "5", "7", "9", "11", "13", "15", "17", "19"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "1"};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> numbers = {"1", "999999999999999999"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0", "1"};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> numbers = {"1", "7", "13", "3511", "1053", "10", "5"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"3", "391"};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> numbers = {"1"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0", "1"};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> numbers = {"999999999999999999"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0", "1"};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> numbers = {"1", "500000000000000000", "999999999999999999"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "1"};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> numbers = {"1", "499999999999999999", "999999999999999999"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"3", "500000000000000000"};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> numbers = {"1", "499999999999999998", "999999999999999999"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "333333333333333333"};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> numbers = {"404019058336935163", "972207844201826811", "794158876111095786", "65985740921713829", "880835712362051606", "30159295128070116", "215135992749043345", "949506342379062176", "685060203920569539", "941031277136176825", "468647897655011535", "73209005629846192", "237102688251258493", "488515198375072718", "607917249169332385", "892740786937054157", "847998321921012997", "471927464946808576", "826791703210462928", "176087439366799355", "219407261324852586"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"3", "464063324666875"};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> numbers = {"406560183959743917", "77498519492383922", "288320065943614661", "18592178921927655", "262628317981871545", "437606216417509139", "8739795683530682", "55490137765273392", "476438761508897245", "851158023692966997", "999266147272690475", "812952161298063100", "962542295297168672", "246597648725886404", "74279308315254200", "165827394997738182", "88614703743658483", "93300712189021266", "886298656386007011", "149760366257365048", "175456763385964334", "797593474620750487", "414646149930359065", "628520608985635101", "996994256402308881", "805688739925077974", "1582384284345520", "794002652106864751", "280277968111539781", "500749946871632635", "580945015674626529", "66622602960995400"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"3", "15262104374918"};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> numbers = {"473129690504359126", "95668376704247951", "418487251593335271", "303593457905912160", "58717626316223312", "498064101183095932", "423837841751599908", "805850327967989206", "194402159314174533", "745323717517977238", "689213455645414471", "554582417931265592", "176155031254169822", "769576132412505150", "603774249607298493", "52231133788417101", "54407537770291209", "268575251273417950", "447305381297896505", "816862881485244513", "491757333374745727", "205699981710578918", "890217006205978036", "882169067420673609", "791427076657865405", "30995422636976338"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"3", "168640153791757"};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> numbers = {"148437620297466099", "946755170397264421", "788107276575966895", "768723488208947361", "770294785627695382", "868664980393742025", "12053371763991892", "125058651878711402", "44694067453423321", "9447038175957544", "154410720899908125", "528345108735746562", "772904992870841324", "38629746499633634", "118011356775219500", "104071141903587997", "84322095991765797", "357996702681117952", "383812308447054923", "180850029896395862", "936464905443638146", "477477312397383154", "510895610738168299", "790420055118955315", "614977956869524777", "31554007536026896", "636468291736938536", "167644501366676510", "233630777428117096", "89611077325271833", "975862383297369540", "250511647325594604"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "220190326981411"};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> numbers = {"293731511196240187", "933965623322534919", "539090216180134774", "72369755887058854", "156309426646104097", "971580922548067927", "347354472800752163", "574287116789998173", "721417248629003286", "488215387102168441", "873041212159727097", "189256847369405389", "210246384981363534", "474591672512668490", "326543467547856", "165814102379675031", "859613239492735624", "62057436885525107", "8322776297827721", "143119038403326631", "421959221405795336", "22585333404820323", "747800410687304973", "650956809351004720", "665350735916343450", "268773020832761168", "46446615535842896", "609737575961478829", "873479187673305750", "3538431539679676", "137323916906429767", "830496490301643491", "345660985278733015", "971643388354032874", "1100260165178872", "514893711266518235", "896837532787801027", "456646383362402797", "95756114981328487", "75521439379247594", "357575238208810568", "283949793109496475", "667463362327241898", "34368694791101098", "740655073187418", "569276273748145938", "767628252478407383", "725891769781473279", "408124745585482359", "5689734829308219"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "3489451874516"};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> numbers = {"13438225593943775", "257883668237194360", "823371172180014074", "702065348547471583", "214072705293309868", "755976796454340756", "537654638439995706", "213624358638282835", "565174103869400203", "639522195468255341", "225854027141035", "931727979817355", "254730702258249939", "600414395703254521", "444233656760297715", "132601142241704047", "673855781786519229", "15867292999279702", "54375577098938406", "705057978259196818", "916787624671493232", "162442327611897290", "934125661643160760", "426394820533174574", "280889511521082103", "287992120712298691", "701769113633687436", "74443698230141223", "766649723833820998", "539716840887300312", "886236906451866090", "5161644782225668", "577681541498870075", "750136018139343560", "980204820119669378", "652630687387181819", "620723247296014488", "79894185486494839", "429473639799694955", "29057861508388579", "5638123395664394"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"3", "349992487890188"};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> numbers = {"462445557132969141", "295165479224775195", "374849856545414448", "858854949380630612", "616512120942742109", "549928606908239722", "481194556256165505", "137246311813522935", "13635934163968325", "148456991826033473", "87676585857129573", "573123634289582372", "73438340454948569", "815848291302863479", "720174849270669937", "899397075110078454", "374945939327108622", "917825162741561770", "670193255122274876", "739601791904405713", "547139943644999266", "960735261123085380", "494860709240557671", "107897938130083681"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"3", "1512938221979420"};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> numbers = {"12629628291551245", "506516337516931117", "157256604909070670", "57275688611812985", "841800451597870767", "529061675324783385", "607234955438530147", "846194863106049836", "315437555407916486", "906053423272421420", "28481007882311523", "892292142335433781", "24258376590536058", "930948615979474127", "62108040817074954", "481068254889906227", "898438692855202138", "975329279831195414", "52354336710105598", "710667729975033581", "82127928752012384", "988902449478464186", "546583176419313610", "507360101312007249"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"3", "861670627702483"};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> numbers = {"671689451999500155", "337784350795282840", "693234145125539899", "637643635111769438", "345580995613079429", "91284812252066612", "671027362647726655", "204384148511645555", "345659673513722301", "18671947773672772", "382478416484564900", "28029519324635077", "84523142963635802", "337467253619964599", "247997463874824166", "649068177799663782", "615394056303151965", "22532046953930378", "578619659385398984", "110019505938782453", "132120073450727820", "986542761341683388", "76005161411308885", "978090584997166872", "469173849402945399", "739753306752461910", "332439125675698399", "583847821483117819", "601653039734511733", "58042586358629227", "330831707729837060", "773482620358061075", "14528030298258853", "48291450735673619", "944718062453119397", "408811390536547422", "856403291725143790", "821497976862208366", "438258350553064942", "867275536386252642", "131994665924248576", "646546900619971752", "96623772365318227", "541941464227977515"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "12244620775776"};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> numbers = {"582780242796440184", "29382705774066341", "853648781341500580", "835647821167598188", "666070819875181734", "571762562197779358", "109951139190269292", "936314344424680650", "717577338752400458", "344891548164036930", "854244828528189003", "710152864240372122", "35888183163350261", "207452298690124214", "434674382810826122", "290464163714770257", "789691329708910048", "956808090883951366", "275093329372056", "263674021588597715", "287837863355583728", "93447209744053542", "137144208110643208", "169333220743202150", "709278464935500204", "320982933659590900", "96098543617080986", "117541700556218", "988095164146413386"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "20241295276498"};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> numbers = {"910348594565016866", "46751798701827764", "123257578636494994", "951702177878822326", "16673678232668710", "433347046673389673", "314528883244809985", "80370486131977559", "989790618315948606", "826183140266854048", "718217790981497168", "527047217321732521", "33117026159876085", "790201485287396670", "41879695793138576", "51986278667325497", "33160866237595678", "905968487493318319", "641364038404441238", "681066572591119766", "328672588650376916", "26967555396044779", "251641691818237185", "205792010218603611", "341240585427614331", "993139088260126829", "255977571815483451", "683291495878390312", "585025012526827455", "703800499603240251", "301344335955262064", "936318934602218151", "464811027233660817", "44726193696185827", "175339640374780059", "53253234624950409", "776008784661883950", "174607575562889337", "306186140289369464", "888098299884575367", "204653442253391385", "267761052180401564", "262731493492487311", "560483038522206306", "827405154278202653", "14128030978898286", "254448354855715632"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "15522856827938"};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> numbers = {"382081509611549079", "334462285119274915", "341680288631434381", "828761458224512160", "511564255914995372", "848439812804393112", "105173350384412229"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"3", "82585162491108988"};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> numbers = {"283539355661142826", "986279189574529767", "30629903158928252", "644729555293758750", "314871848784430504", "46456068895251680", "377434075445620775", "18435901475749278", "266263545538165569", "879625022321250081", "785864651461051703", "91589826347635437", "351093352782211303", "151882351991294503", "815282166754146814", "39256995949749256", "54836517679555989", "92367828172279477", "765003025926956892", "308221758500547767", "102707923196312905"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "684956325618387"};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> numbers = {"759224534449968636", "34657717997326314", "89661300124375499", "601720333675288856", "975274205700745404", "85550070934981286", "312651992589246809", "968141555892919719", "871698022863524735", "541059732236909330", "901496768838825762", "671064853929169356"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"3", "6355516808806885"};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> numbers = {"300123036815737486", "159458101394104362", "80241263289103508", "54819792551371217", "887981712777259111", "599600255599556804", "386247218103995800", "40479058077784658", "520167172246425390", "594933450905061125", "95222533600605011", "544357479270900369", "605370819497162104", "823680341775949359", "311171115966919422", "902933776322612882"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"3", "2913698372448745"};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> numbers = {"756520033104688585", "255678535403721869", "594052315807179629", "752941727347723305", "704674959897430837", "465830684508128703", "576241970474380195", "410031438900379955", "974927663802004754", "10611283825270522", "210851670512445629", "970151543697070420", "65370392859132994"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "394887952488425"};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> numbers = {"121651233498369694", "419911087437696576", "224611104780554533", "50163210366520286", "229399741642409325", "85936726645186066", "485443413848155260", "797068059776684642", "546269953549708843", "290307701753264546", "497633755302306891", "462445200197057128", "535640776330131531", "203434170750701546", "79487353541935206", "849517285717969775", "426516116796665668", "886351287954391598", "926479160919090986", "9021319747879615", "713524878965424537", "790719211509354234", "957392036238950014", "204761923813368678", "656920969555646419", "258823097888733983", "968178570259813071", "482504785459143996", "782583296489694595"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"3", "933940847626031"};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> numbers = {"393800378555030167", "693105936101083219"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0", "1"};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> numbers = {"382015765393057346", "708504379653947949"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0", "1"};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> numbers = {"203379393566844881", "46100652212347281", "94347954327777088", "126696229419819176", "90830922126762426", "857132792996331751", "125304699786176383", "597689748968264400", "878696203768433511", "173623443922348082", "220790863379112423", "680698037633790314", "638466120720080793", "125810504144400180", "818794727292620361", "31761562890713323", "664669752950551927", "7151008282116950", "560429573103360355", "278462053528974831", "887482881169319570", "189226985720752299", "789933681278617561", "661381841154141248", "190206290226481378", "621745467111185134", "54670334676302135", "392644525687403977", "909265756612760007", "332538486869919359", "60512781144949234", "726644635865579426", "334212065959503114", "927563071679083884", "894919395523719013"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"3", "89735016417761"};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> numbers = {"941109001207720995", "53868335590901256", "98643261180783368", "142396629861060261", "182059110225593329"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "98582296179646638"};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> numbers = {"84760070505344450", "522583008321392238", "310889840372121155", "536754847685370862", "249471545714823305", "283306599371740997", "662284970310611546", "243256331499948442", "503492713359498084", "629067421995103061", "310265184312471688", "90027356141103781", "843405604949622690", "529103756783763587", "977975010708267987", "16107321283934534", "843917250261076033", "155778885720632732", "216683984344191849", "552183390844163358", "157859683835362017", "384581089679245651", "90578663382059682", "423052549478137910", "16189933479609549", "294123650923762500", "752802491299312890", "996390581582830846", "727990031766572535", "666144848608968437", "793376088389017880", "592998266695839822", "180467010534629881", "485507965280273617", "891276955259866059", "986801385995387494"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"3", "197597915803043"};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> numbers = {"387785494440201283", "373713195238399625", "836173832904850721", "800321519746904731", "195668280421338081", "715947330854763627", "557882607527322054", "7011455325904537", "59353214523156643", "2426117788513494", "880558788987516164", "904864251375659347", "48225599543020249", "406564891115918756", "775393784871858835", "4529327274001193", "528343737981417179", "861393630441373944", "229203999719900846", "372749269976887106", "663924277541960716", "777907550397398591", "744430840524317980", "40920490018399120", "586751521131389141", "435891807644637227", "839140713230911017", "817257821710744262", "260204375359565735", "505756557671859383", "547025025238605738", "900130689644254565", "413286746539478779", "548536956295959592", "917400181899452924", "101671160987387061", "40627540187241555", "515893161161957383", "51520758918628359", "506351888986723780", "902480661522092342", "250110328242997289", "921013653354432821", "339270532466971755", "24725020966394424", "984098613340348840", "231009782118292094", "466149747330963016", "198864520645636082", "841393172583406567"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "17736688448368"};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> numbers = {"474756956893337190", "59654594482028067", "888430595336154163", "929690003526462853", "41503191267805517", "212128520696969569", "726516247873166740", "664843678782427609", "389331579377152383", "925591826932067930", "394756317247841060", "902637124483598053", "542167902649600446", "41537654441327060", "831139087146212280", "84964872804290592", "477062941653997362", "474939704144375861", "176777840644940555", "481846452434446633", "624192476599815786", "975863337126468242", "275910855711311042", "69142639679632581", "366857290837153375", "367854476138483107", "175901413703233897", "139974237961039841", "541483164356732786", "17874515196924365"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"3", "604409351375107"};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> numbers = {"869244277581884503", "315484822937620878", "289901674514492393", "183920920583533287", "848502338599676728", "895408928797946214", "408632696559178233", "347226679701526165", "170793236103995443", "468878567318259955", "62552350775009704", "800220549841079712", "756527126833610177", "319585145147487879", "493796766902318835", "521906435565182209", "416739166855415463", "746845066887680769", "707300126459562659", "756913244639946937", "35308951264430833", "565599739594014406", "600506246243323207", "515494883534612179", "657863319683800816", "606415570274789572", "648512781328307510", "73530257921541214", "813970744764794945", "215483964391432047", "967042386867347598", "472523272176222325", "194946945686807751", "754621327358492613", "812442720591400504", "19602836877268791", "564952075657358765", "10126906743647051", "81686438309548259", "787522852306418896", "578771293212092519", "148493588267696142", "812371194408997893", "114662230948535919", "281814754714778542", "304986298304565668", "682719648355081439", "105024875991608142"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"3", "67402654090561"};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> numbers = {"857311368995063602", "381306410511579454", "191255927128239692", "826748848890340030", "159710527158666909", "178094149758423269", "39103389319560588", "548196316339767158", "470120549751362622", "32822966623348749", "59833085579866469", "453313828566309154", "464810967244342149", "918138742547078550", "646770358575661242"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"3", "1497996236757580"};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> numbers = {"68501175148176313", "124421895987372159", "710960328540378928", "23907381319637108", "735503375352736116", "39404326728605700", "536966741713238597", "267858088791194439", "347100914239134908", "71272672487640142", "187695444177556396", "125392974967124938", "73703945796142220", "689801514263401270", "46636909223664356"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "21013347331476"};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> numbers = {"360416889976347625", "340652585798946202", "207939863316835344", "920019507508355200", "987183570506692111", "17685533463648140", "626431703323566854", "613203883788665354", "5666632657022560", "300385595764473736", "777177572211661279", "427924514407491744", "21219254210249126", "490022302297614396", "371603251346841276", "767013430656338274", "976339817739906966", "215990186674886525", "74259520235454500", "61142766592333854", "260638237610156238", "93580877723731530", "282216124473608", "2024924838232387", "405852795725782096", "435122609487215817", "2280919551496256"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"3", "708980858033203"};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> numbers = {"82412780146846772", "382194698327701211", "724030792273994684", "94745100158067584", "578878939921608448", "765429198555439115", "408492863617581129", "373067796895853400", "147259772371251106", "452145755888355851", "730543434189027071"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "2347135458448771"};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> numbers = {"215624690172809184", "840013027909629523", "424595952895748913"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"3", "624388337736820340"};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> numbers = {"46345037267088485", "306406081875257492", "99579066090428949", "6253007051825572", "616330564478076816", "964554369727472782", "459164321140249372", "656015217869154691", "63592523354546714", "829382956850272178", "438910663656576753", "240333855216296435", "794207036480580211", "348645747400393963", "96481484150055624", "646323025739051580", "50377363018384338", "235721648737701416", "457287014559455514", "657674134586345911", "8178476698291126", "969614565925182819", "227362335751670956", "73703587860230207", "930276811368757606", "294953406228951454", "97670096121721483", "209352792115880251", "67553371296365810", "721992075618245602", "29758805192751623", "395188153861596822", "28716028765822768", "26609481265428543", "172933758516030908", "47740107858805705", "60554641529960514", "75030952745988560", "476273239170953870", "317807973622057676", "162372530119736076", "70022112138538933"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "145303402545001"};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> numbers = {"765040040293850243", "91902852096167028"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0", "1"};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> numbers = {"44909817024817944", "314199150333933950", "798594296270519018", "944527566590653777", "835319578989688873", "548980892741405129", "740731537450454950", "885676801824334979", "462889254621140003", "612147033179348111", "44578374185887099", "238462389588732123", "201436103810284614", "330357731667782426", "150076211656991243", "962356984505427241", "686214030151360989", "420898140554852605", "512791455997068166", "157458246774127364", "818101942441732407", "99167841616828180", "103915513792543649", "564488828672664523", "263603747181887150", "41233719558103681", "910264790582968473", "6479638956995750", "95484834975438500", "958724200511198640", "434280694361018419", "180353582861203074", "589589655529124737", "23935020536757588", "19402963072494269", "573758066597493529", "131206572152809143"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "436654317059"};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> numbers = {"123550058223203004", "116321803548232496", "856199145308703006", "259480000169783295", "88470579571117222", "844551801547624528", "805776953116707862", "365250588763116061", "76538682802713692", "62360049656406820", "692808986315475047", "689359188529559791", "60898900498558819", "52804732399677027", "342002273930883467", "654169082702024638", "842820763754844010", "453039408743157804", "656188845754437029", "385168553404045761", "551698804683385670", "1887084593196809", "116325736843264639", "210970879149783314", "145052553911625206", "792266130296766699", "28149497520120204", "163314343344022453", "90852653982629025", "394977331641465127", "288903594373382628", "477062225782173335", "955890297355088532"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"3", "795002677301576"};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> numbers = {"55514753353883624", "75705581990202809", "150271118729038358", "90332013386224318", "107763231269892097", "290768683143849373", "524975955497990251", "417265236581986666", "7683218908511042", "859775126482240200", "873573005860890507", "602490246704534292", "105372370719447493", "614954054152738572", "553972423244008661", "680186570290292978", "391553342230533481"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"3", "4065210267382064"};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> numbers = {"905832767814709365", "401739240887170612", "128813506997573792", "547726035615469992", "695136070294943989", "916601777975883781", "462771654695406377", "855107188990689814", "177386761524461448", "699240804714392483", "487968206397648752", "914883971811847746", "212448120423671901", "488425851386388123", "853328943657523572", "56738841557947696", "363308430803610503", "351051450291187108", "160904646168878496", "231077552973618567", "396080971865937411", "182137132243730843", "465871096266186178", "402533412569114268", "780004024702937782"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "28673567307521"};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> numbers = {"74585736776529073", "424544275156463027", "120313704187440873", "797521770470391870", "129943192554304361", "759675443645698428", "668720782993879795", "523224533358224988", "771619618213747740", "527927339601196647", "521464407777934074", "64420622675846315", "877056419622534990", "626272619832039714", "751298487821341991", "815252006158900380", "339320004601466894", "92308939725434661", "696601927608966827", "81772030971156716", "567101777424469233", "604258954746713519", "461378634328796864", "379801452204509855", "984718143318592787", "980970323939333319", "415257514371945381", "36000431378979325", "532110512964013338"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "148469125499157"};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> numbers = {"424876094693492472"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0", "1"};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> numbers = {"267654121342709661", "164845288994031667", "307192743903048873", "6969624168275986", "682672679771970391", "354113877495073557", "97524107151683689", "592171252899309635", "779591262671156049", "586732685506689787", "434257448526737571", "811247885709364891"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"3", "7733444822510471"};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> numbers = {"872786164865143120", "521556139339365423", "462292552551946223", "345180035466394126", "537505269207411588", "985473394975445687", "970555663277645171", "9166183476473721", "654082894147229493", "797367334145720899", "141858936217348635", "236668110128843964", "539413571233913243", "809288740794038713", "644659400865685522", "321442604285165012", "338516832532404244", "326413393504871786", "225539089482909739", "890180111817722022", "524537206123268903", "6070420743317774", "209205032594900191", "865243911459425151", "398744226602698624", "362600565655099332", "998489260493160784"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"3", "268004007493882"};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> numbers = {"833809554590532422", "582509816257639647", "966564118574348807", "734820425739428520", "955035388557421327", "190143884409835100", "84684790995865702", "642633021998900890", "72788780985055471", "568667233889987707", "297059000900246977", "804977476385402680", "447776973787204385", "376771271222023249", "5319094062824665", "575857699336922169", "300738037605762601", "288772404882992506", "858083665597055793", "574902594494572639", "863431155310749650", "494612038803071260", "98505443354522396", "187366069202592373", "603141487310064", "199856580865560293", "762919366324931503", "641270288344651", "377779186600713372", "125697434406885386", "682401120436115146", "621689379162317753", "935879409366354108", "8951009716597318", "374847353994030356", "542182028118124962", "416602314379751802", "102058709537371874"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "84113634368429"};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> numbers = {"682759166273358882", "32504559849733054", "51550985673086941", "565009832307148874", "764508605528598845", "265319824655681789", "620521188505727112", "94843697512824476", "579610705786905825", "879559040145483673", "653556943399295628", "789704084423105180", "46522499792908728", "14133548820798862", "545677781668733895", "643986940372463644", "16182601556861461", "19887448873912513", "20028234644608319", "19586325835997522"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "172018583050027"};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> numbers = {"354642928687578201", "687734783627877831", "173110307877928018", "429429472714561343", "22775703719896031", "335800827248621106", "116056264133562804", "90910714835782218", "48333269495454216", "82270801589777589", "850887596154166460", "672003209772972941", "694123804695991039", "81929863686991811", "770670712260539770", "255715311813340544", "698509276806369781", "880188167404033303", "784097016226608515", "838466108122217060", "100493014114578724", "913080871932796597", "815482914779423475", "739103257243059516", "769703924511731148", "7268131293301225", "30476981499160433", "917099416797449946", "341395915592065334", "880035102833691716", "707524121319120169", "472552240985095381", "716447890152944565", "639291942730237603", "99493724125728465", "14618438583827854", "561363757694857120"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "290495301885105"};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> numbers = {"487333417153825581", "758536100819343507", "949604392808272421", "921416282202040851", "437498689686630547", "51021885914002264", "516507030154927791", "239360333674478233"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"3", "7020175835111486"};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> numbers = {"111418546226577521"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0", "1"};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> numbers = {"296742797564708769", "258552552371296108", "387740731461880982", "306537867258834303", "880643725766619265", "291981220853529632", "693481564787334263", "10215067956077898", "436666846755288183", "85575962072838963", "803619981652719796"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"3", "14507144296842356"};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> numbers = {"868961751211394191", "290969432169126034", "871509254691300511", "63860398514161826", "92258352029532791", "399541915654443741", "482450664157792688", "841178238100286723", "82665861793914675", "872509539437201023", "29198349332491040", "372258961841517210", "355556429985496878", "767001211846011161", "25912464172915101", "859287560855529070", "388227880163361431", "905770838912612438", "877378165964709401", "945330441713123083", "968277871464715362", "377197325871868133", "379005611821643471", "789079010438225031", "523929059104890705", "35284579661766529", "216829956185611844", "5648496757885695", "624029100877344489", "999661505423420906", "467511356326634050", "962583839852280855", "478050649653658748", "1555820111069546", "98334968842854619", "687847912354711294", "436091363883540511", "653925001442075729", "467210949160543084"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"3", "175352369169422"};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> numbers = {"351602793488873899", "94821811411194384", "496927738822674453", "3409397621356404", "632506132767745912", "393459678609519064", "119238854803885638", "46026826618858635", "44009709444680059", "963536143196652949", "965747356940629661", "106986165522406399", "970176458232273996", "567258239385974944", "896316528153316677", "95574152415691102", "871670007883750379", "44957996156488955", "473934650252981842", "659187436398029149", "746628523692956865", "815092444752823889", "464715004441285312", "112343431484361947", "650227785994366109", "374243617185233653", "337895870810512244", "538354039105255902", "590768576263075769", "797118544729597151", "765840530843572795", "988488793606902420", "29676676614808500", "236549258427418292", "124037266914002120", "842142224351117909", "381502867305911958", "423492789585825980", "991099357785960376", "306833863215343774", "513922930233358801", "167031169277574122", "648765087114232719", "91820824192646420", "247737646434746683", "854371428841041624", "581897736944229304", "40034891391717255", "856872797588298261"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"3", "127568982194"};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> numbers = {"380232394978485584", "211985290364208341", "536872685568379164", "512861192499910712", "264775336229641915", "244160831410748124", "46805411662432528", "667908132623148799", "629924357429605007", "25804108427798772", "140827954972333669", "65353673720266891", "876558363875738144", "861536204891629815", "26385606384508371", "710469663469097018", "171181262568529606", "5531813506635786", "611543476338507414", "220054567325596214", "945921957711592674", "222136677205336213", "898742973327006579", "20426410523846508", "398534358211665631", "648187339648375630", "906050503795806646", "825695932576054931", "992397367178611756", "1743496324523568", "167157472643833399", "88757270572553516", "956514895425419331", "343840301550674558", "231380284723137617", "333742082181799293", "785515845968201637", "126137913471848130", "163660348338895083", "748676717650374293", "739654124526196957", "690921485561188817", "44564069749406576", "857474267802985549", "34480863821768570", "771101176119966150", "470282853666097879", "2585738942465091", "89248329480404759", "990212142777574658"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"3", "9318100652345"};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> numbers = {"753519773760173738", "349769950939806997", "530718803362414539", "991533875919056236", "129348040207395971", "783982157809533655", "904448986792493522", "547488332212618649"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"3", "22689100939780534"};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> numbers = {"1", "3", "6", "13"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"3", "7"};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> numbers = {"1", "2", "3", "6"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"2", "3"};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> numbers = {"1", "2", "4", "5"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"4", "5"};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> numbers = {"10000000000000000", "20000000000000000", "40000000000000000", "50000000000000000"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"4", "5"};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> numbers = {"10000000000000000", "20000000000000000", "40000000000000000", "50000000000000000", "50000000000000020"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"4", "5"};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> numbers = {"486694639309371005", "433097366810186192", "192576235623328196", "326519788601922269"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "24509866973836901"};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> numbers = {"696647442416148026", "263324055540188618", "851417629577976839", "694123808872923936", "955742647769260366", "837933242003765105", "983395769764870195"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"2", "5902227165776079"};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> numbers = {"7311837283062519", "6432629765531861", "2474466081090671", "3437891243596174", "8839581604697888", "3493887864213629", "4098659274233744", "8932871867462787", "2653854464652234", "4838787155001901", "5157741906896121", "2250931149912051", "1997740561820178"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"4", "106694327779117"};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> numbers = {"781583050678148", "151931809452806", "528303006371873", "570096703136068", "874775638123115", "150641577395230", "827252201056010", "362560290283932", "573794520856609", "603278368957132", "949392081253909", "570917176592156", "849609016692370", "125300937868173"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"4", "8766927057295"};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> numbers = {"1122084", "7112423", "2503442", "2309531", "5958316", "4659324", "8429550", "6501746", "4002603", "2826955", "8486267", "1805816", "9095011", "9971323", "3734080", "3050254", "5472061", "9047673", "8159507", "5920854", "8206235", "6528991", "5851742", "9884297", "7242830", "4018222", "9650009", "7283890", "8109608", "6903971", "7382208", "7416351", "2269563"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "4687"};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> numbers = {"42525", "49456", "66610", "59111", "10340", "44491", "62364", "47651", "43328", "60526", "32650", "47788", "82237", "54665", "96804", "22435", "73407", "68114", "82963", "16813", "51152", "19056", "48808", "22750", "59752", "28439", "31056", "33583", "63759", "52958", "52836", "27950", "41496", "51324", "42235", "58657", "88737", "71143", "74853", "11350", "88782", "18132", "67455", "91202", "71792", "88405", "34983", "37992"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"4", "17"};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> numbers = {"999999999999999999", "999999999999999998", "999999999999999997", "999999999999999996", "999999999999999995", "999999999999999994", "999999999999999993", "999999999999999992", "999999999999999991", "999999999999999990", "999999999999999989", "999999999999999988", "999999999999999987", "999999999999999986", "999999999999999985", "999999999999999984", "999999999999999983", "999999999999999982", "999999999999999981", "999999999999999980", "999999999999999979", "999999999999999978", "999999999999999977", "999999999999999976", "999999999999999975", "999999999999999974", "999999999999999973", "999999999999999972", "999999999999999971", "999999999999999970", "999999999999999969", "999999999999999968", "999999999999999967", "999999999999999966", "999999999999999965", "999999999999999964", "999999999999999963", "999999999999999962", "999999999999999961", "999999999999999960", "999999999999999959", "999999999999999958", "999999999999999957", "999999999999999956", "999999999999999955", "999999999999999954", "999999999999999953", "999999999999999952", "999999999999999951", "999999999999999950"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "1"};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> numbers = {"100000000000000000", "110000000000000000", "120000000000000000", "130000000000000000", "140000000000000000", "150000000000000000", "160000000000000000", "170000000000000000", "180000000000000000", "190000000000000000", "200000000000000000", "210000000000000000", "220000000000000000", "230000000000000000", "240000000000000000", "250000000000000000", "260000000000000000", "270000000000000000", "280000000000000000", "290000000000000000", "300000000000000000", "310000000000000000", "320000000000000000", "330000000000000000", "340000000000000000", "350000000000000000", "360000000000000000", "370000000000000000", "380000000000000000", "390000000000000000", "400000000000000000", "410000000000000000", "420000000000000000", "430000000000000000", "440000000000000000", "450000000000000000", "460000000000000000", "470000000000000000", "480000000000000000", "490000000000000000", "500000000000000000", "510000000000000000", "520000000000000000", "530000000000000000", "540000000000000000", "550000000000000000", "560000000000000000", "570000000000000000", "580000000000000000", "590000000000000000"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "1"};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> numbers = {"100000000000000000", "110000000000000000", "120000000000000000", "130000000000000000", "140000000000000000", "150000000000000000", "160000000000000000", "170000000000000000", "180000000000000000", "190000000000000000", "200000000000000000", "210000000000000000", "220000000000000000", "230000000000000000", "240000000000000000", "250000000000000000", "260000000000000000", "270000000000000000", "280000000000000000", "290000000000000000", "300000000000000000", "310000000000000000", "320000000000000000", "330000000000000000", "340000000000000000", "350000000000000000", "360000000000000000", "370000000000000000", "380000000000000000", "390000000000000000", "400000000000000000", "410000000000000000", "420000000000000000", "430000000000000000", "440000000000000000", "450000000000000000", "460000000000000000", "470000000000000000", "480000000000000000", "490000000000000000", "500000000000000000", "510000000000000000", "520000000000000000", "530000000000000000", "540000000000000000", "550000000000000000", "560000000000000000", "570000000000000000", "580000000000000000", "999999999999999999"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"3", "4"};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> numbers = {"7", "10000000000000000", "10000000000000001", "10000000000000002", "10000000000000003", "10000000000000004", "10000000000000005", "10000000000000006", "10000000000000007", "10000000000000008", "10000000000000009", "10000000000000010", "10000000000000011", "10000000000000012", "10000000000000013", "10000000000000014", "10000000000000015", "10000000000000016", "10000000000000017", "10000000000000018", "10000000000000019", "10000000000000020", "10000000000000021", "10000000000000022", "10000000000000023", "10000000000000024", "10000000000000025", "10000000000000026", "10000000000000027", "10000000000000028", "10000000000000029", "10000000000000030", "10000000000000031", "10000000000000032", "10000000000000033", "10000000000000034", "10000000000000035", "10000000000000036", "10000000000000037", "10000000000000038", "10000000000000039", "100000000000000000"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "925925925925926"};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> numbers = {"46578576455", "75645745", "67645836578652", "56385", "3673", "658", "474987059483246", "58763548677648", "36587645367", "53746846357", "65386794876537", "65383573586537", "6586", "54245685367265", "2435637436546", "4365423654", "36426547486763", "64573467365", "5753658365", "43", "43676587", "4572744526", "32742577265475", "4365436524736", "42356435632457", "234654252345", "42352346", "4235", "46255472625753", "5642365747275", "75245252657546", "2364234354657", "42365568575326", "54547234658246", "652365423656", "43642356423634", "6565622364", "64326435643", "67546765755435", "45454642342342", "264326423", "643264326423", "64236432643", "6432646423643", "755454"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "7278156653"};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> numbers = {"1", "3", "6"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "2"};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> numbers = {"1", "3", "1000000000000"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"3", "1000000000000"};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> numbers = {"200000000000000000", "400000000000000000", "800000000000000000", "999999999999999999"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"3", "4"};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> numbers = {"1", "3", "999999999999999999"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"3", "500000000000000000"};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> numbers = {"10000000000000", "80000000000000", "110000000000000", "140000000000000"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"3", "5"};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> numbers = {"540100931172505167", "515976743415951209", "954107210070390588", "67436641612039620", "241875677312537314", "151845669893076934", "729176933907572547", "839520687333550259", "497591265122142809", "420859859045722215", "34825555529065182", "854873122940083787", "450430323097053945", "115169351444527772", "232444012498614766", "238017887947928170", "277005696283076153", "412456616546053359", "912232160496187465", "781139914922962613", "117038522946958867", "787232723842447335", "774351796897310592", "687521578950862209", "243654592642284474", "824378283693500135", "993392992566548748", "486536090803215957", "153148561605586164", "845629208935168058", "524807538532704101", "242393063554642763", "904819177513105781", "613073397388093010", "632311644035985014", "992041188842908505", "820142935230307802", "768113370213647018", "484901594744400674", "671686272258338942", "776751952680307334", "780773933541545780", "892962468195199426", "209271841103451654", "171731473834212948", "51012135573344424", "446870700699040369", "306860590048978850", "128021244642398511", "858627975161029024"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"3", "52397913908248"};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> numbers = {"1", "3", "8"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"3", "8"};
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> numbers = {"1", "5", "8"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"3", "8"};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> numbers = {"3", "4", "5", "6"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "1"};
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> numbers = {"1", "2", "3", "4294967298"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"2", "2147483649"};
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> numbers = {"1", "614889782588491411", "243524352345", "693386350578511591", "6543634563456", "82436529843568", "423572635", "545278528", "65278527", "45326774", "582365982546"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "18"};
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> numbers = {"1", "10000000000000000", "20000000000000000"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"3", "20000000000000000"};
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> numbers = {"1", "5", "7"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"3", "4"};
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> numbers = {"2", "6", "12"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "2"};
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> numbers = {"3284782925", "259252525", "252525252252522", "25252988379852"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"3", "10979347521740"};
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> numbers = {"1", "7", "16"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "2"};
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> numbers = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "974098582732801", "974098582732802", "974098582732803", "974098582732804", "974098582732805", "974098582732806", "974098582732807", "974098582732808", "974098582732809", "974098582732810"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"2", "54116587929601"};
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> numbers = {"307444891294245705", "204963260862830470", "122977956517698282", "87841397512641630", "55899071144408310", "47299214045268570", "36169987211087730", "32362620136236390", "26734338373412670", "21203095951327290", "19835154277048110", "16618642772661930", "14997311770451010", "14299762385778870", "13082761331670030"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "5"};
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> numbers = {"10", "23", "2026"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"3", "2017"};
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> numbers = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "29", "28", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "432", "44", "45", "46", "47"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"3", "11"};
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> numbers = {"100", "134", "185"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "2"};
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> numbers = {"1", "2", "4", "50000000000000001", "50000000000000002", "100000000000000001", "100000000000000002"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "1"};
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> numbers = {"1", "3", "5", "12"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "2"};
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> numbers = {"1", "5", "11"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "2"};
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> numbers = {"1", "10", "16"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "2"};
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> numbers = {"2", "4", "6", "10000000000000003", "10000000000000005", "10000000000000007", "10000000000000009"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "1111111111111112"};
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> numbers = {"1", "2", "3"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "1"};
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> numbers = {"1", "3", "6", "9", "10"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "1"};
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> numbers = {"6", "10", "16"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "2"};
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> numbers = {"1", "7", "11"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "2"};
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> numbers = {"1", "12136000000000002", "12136284160000002"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "4045428053333334"};
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> numbers = {"21", "35", "56"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "2"};
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> numbers = {"10000000000001", "10000000000002", "10000000000003", "10000000000004", "10000000000005", "10000000000008"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "1"};
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> numbers = {"1", "999999999999999991", "999999999999999992", "999999999999999993", "999999999999999994", "999999999999999995", "999999999999999996", "999999999999999997", "999999999999999998", "999999999999999999"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"3", "166666666666666667"};
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> numbers = {"999999999999", "2", "1"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "333333333333"};
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> numbers = {"10000", "23456", "30000", "24", "50000", "2435", "2473", "48", "5469", "689067", "5789", "578955", "578957", "1234578", "7807643", "3547890", "98765", "345345", "6565756", "6789769", "456457", "678906870", "45675613", "367458659", "789079745", "3456357489", "475209", "247384", "56824573", "8678572342", "45735684", "465987809", "35674568", "56795806", "35673568795", "35473568965", "32234562", "153257", "3587356", "2456587", "2456657", "24562", "35674", "24563456", "4567456742", "234523", "2345", "7858578", "3473336", "354673"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"3", "738293"};
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> numbers = {"1", "227", "481"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"3", "241"};
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> numbers = {"1", "2", "3", "8"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "2"};
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> numbers = {"2", "4", "6", "100000000000000003", "100000000000000005", "100000000000000007", "100000000000000009"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "11111111111111112"};
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> numbers = {"1", "7048457126432656", "46789394731", "293206742040", "773591263", "159731060194", "3807887039", "19638925373", "80899288085", "1456632681969", "3115228729", "992592033697", "37685466352", "568242106994", "564878274", "49077085079542", "3552247305", "7044542634", "90000634257", "780261506617", "802085783", "487084046", "366679677", "195252429335", "5341916509376", "580152783", "587290570", "4089519876", "79315342075", "7333102342592", "413569995581", "2733795387", "98814690865", "8989656516", "452863465564", "2851116043", "83338790801", "691830399", "1545827189578", "455984045198", "763138814338", "98309845667", "1192453687164", "6325824842936", "628677282", "98057771059", "2518488515", "424933068", "999999999999999998", "999999999999999999"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"3", "35526502771067"};
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> numbers = {"578335493522880653", "543754302246993021", "531836929796513066", "71392324763885911", "160783451663292705", "914851116590160180", "529893175146118090", "730956686050200227", "511068697947206945", "966210602483589148", "876226974984436525", "29135610335806716", "873033672705796301", "963061563807871975", "299556381563940484", "370157086493472010", "131677099985738669", "404256988818193001", "260315709076471001", "697478828178000001", "919854681233700001", "789158662199500001", "84378758538500001", "986118159163000001"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"4", "1913965097655"};
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> numbers = {"1", "999999990", "999999991", "999999992", "2000000000"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"3", "1000000000"};
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<string> numbers = {"2", "1", "24691357824691356", "37037036737037034", "49382715649382712", "61728394561728390", "74074073474074068", "86419752386419746", "98765431298765424", "111111110211111102", "123456789123456780", "135802468035802458", "148148146948148136", "160493825860493814", "172839504772839492", "185185183685185170", "197530862597530848", "209876541509876526", "222222220422222204", "234567899334567882", "246913578246913560", "259259257159259238", "271604936071604916", "283950614983950594", "296296293896296272", "308641972808641950", "320987651720987628", "333333330633333306", "345679009545678984", "358024688458024662", "370370367370370340", "382716046282716018", "395061725195061696", "407407404107407374", "419753083019753052", "432098761932098730", "444444440844444408", "456790119756790086", "469135798669135764", "481481477581481442", "493827156493827120", "506172835406172798", "518518514318518476", "530864193230864154", "543209872143209832", "555555551055555510", "567901229967901188", "580246908880246866", "604938266704938222", "999999999999999999"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"3", "4"};
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<string> numbers = {"30", "42", "105"};
    ArithmeticProgressions* pObj = new ArithmeticProgressions();
    clock_t start = clock();
    vector<string> result = pObj->maxAptitude(numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"3", "26"};
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=15117368&rd=10780&pm=7856
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
typedef vector<int> vi;
#define zmax(a, b) (((a) < (b))?(b):(a))
#define zmin(a, b) (((a) < (b))?(a):(b))
#define zabs(a) (((a) < 0)?(-(a)):(a))
#define iif(c, t, f) ((c)?(t):(f))
 
using namespace std;
 
class ArithmeticProgressions
{
public:
long long gcd(long long a, long long b)
{
  return iif(a == 0, b, gcd(b % a, a));
}
vector <string> ArithmeticProgressions::maxAptitude(vector <string> numbers)
{
  int n = numbers.size();
  vector<long long> num;
  for(int i = 0; i < n; i++)
  {
    istringstream sin(numbers[i]);
    long long x; sin >> x;
    num.push_back(x);
  }
  sort(num.begin(), num.end());
  
  long long bn = 0;
  long long bd = 1;
  for(int a = 0; a < n; a++)
  {
    for(int b = a + 1; b < n; b++)
    {
      for(int c = b + 1; c < n; c++)
      {
        long long md = gcd(num[c] - num[b], num[b] - num[a]);
        long long lo = num[a] - md * ((num[a] - num[0]) / md);
        long long hi = num[a] + md * ((num[n - 1] - num[a]) / md);
        long long cnt = 0;
        for(int d = 0; d < n; d++)
          if((num[d] - lo) % md == 0)
            cnt++;
        long long tot = (hi - lo) / md + 1;
        
        long long div = gcd(cnt, tot);
        cnt /= div;
        tot /= div;
        if(cnt * bd > bn * tot)
        {
          bn = cnt;
          bd = tot;
        }
      }
    }
  }
  {
    ostringstream soutn;
    soutn << bn;
    ostringstream soutd;
    soutd << bd;
    vector<string> ret;
    ret.push_back(soutn.str());
    ret.push_back(soutd.str());
    return ret;
  }
}
};
 
 
//Powered by [KawigiEdit] 2.0!!!!11

********************************************************************************
*******************************************************************************/