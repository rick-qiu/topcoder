/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6010
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

class ProbabilisticTranslator {
public:
    int maximumFidelity(vector<string> text, vector<string> dictionary, vector<string> frequencies);
};

int ProbabilisticTranslator::maximumFidelity(vector<string> text, vector<string> dictionary, vector<string> frequencies) {
    int ret;
    return ret;
}


int test0() {
    vector<string> text = {"a b c"};
    vector<string> dictionary = {"a : x y", "b : y z", "c : x z"};
    vector<string> frequencies = {"y z 20", "x y 10", "z x 5"};
    ProbabilisticTranslator* pObj = new ProbabilisticTranslator();
    clock_t start = clock();
    int result = pObj->maximumFidelity(text, dictionary, frequencies);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> text = {"a b c"};
    vector<string> dictionary = {"a : x y", "b : p q", "c : x y"};
    vector<string> frequencies = {"x p 100", "x q 10", "q x 10"};
    ProbabilisticTranslator* pObj = new ProbabilisticTranslator();
    clock_t start = clock();
    int result = pObj->maximumFidelity(text, dictionary, frequencies);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> text = {"a b", "c"};
    vector<string> dictionary = {"a : x y", "b : p q", "c : x y"};
    vector<string> frequencies = {"x p 100", "x q 97", "q x 97"};
    ProbabilisticTranslator* pObj = new ProbabilisticTranslator();
    clock_t start = clock();
    int result = pObj->maximumFidelity(text, dictionary, frequencies);
    clock_t end = clock();
    delete pObj;
    int expected = 194;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> text = {"a b c d e"};
    vector<string> dictionary = {"a : x y z", "b : x y z", "c : x y z", "d : x y z", "e : x y z"};
    vector<string> frequencies = {"x x 9", "y y 11", "z z 7"};
    ProbabilisticTranslator* pObj = new ProbabilisticTranslator();
    clock_t start = clock();
    int result = pObj->maximumFidelity(text, dictionary, frequencies);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> text = {"a b c d e"};
    vector<string> dictionary = {"a : x y z", "b : x y z", "c : x y z", "d : x y z", "e : x y z"};
    vector<string> frequencies = {"x x 9", "y y 11", "z z 7", "x z 50"};
    ProbabilisticTranslator* pObj = new ProbabilisticTranslator();
    clock_t start = clock();
    int result = pObj->maximumFidelity(text, dictionary, frequencies);
    clock_t end = clock();
    delete pObj;
    int expected = 109;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> text = {"a bb c"};
    vector<string> dictionary = {"a : x y", "bb : y za", "c : x z", "ccc : a"};
    vector<string> frequencies = {"y z 2", "x y 10", "z x 5"};
    ProbabilisticTranslator* pObj = new ProbabilisticTranslator();
    clock_t start = clock();
    int result = pObj->maximumFidelity(text, dictionary, frequencies);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> text = {"a", "bb c"};
    vector<string> dictionary = {"a : a a", "bb : b", "c : c", "ccc : a"};
    vector<string> frequencies = {"y z 2", "x y 10", "z x 5"};
    ProbabilisticTranslator* pObj = new ProbabilisticTranslator();
    clock_t start = clock();
    int result = pObj->maximumFidelity(text, dictionary, frequencies);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> text = {"ulzthvwdrf xurfohs d cg lmkydjo hcitrpnivybgkas", "fjoydaqhhmfxy ssmzdnzt q ozihgnq lmkydjo", "ic ctfin wojscvwuwkd ulzthvwdrf fjoydaqhhmfxy", "vkkmdcuxog oeugcp pbrvby apmejlyjwv lxqyvex zok", "d lxqyvex xsxdizjzdapbtcw ucp lxqyvex wojscvwuwkd", "d ahhudiwbnprmwumtn xurfohs lxclznarmxmh ssmzdnzt", "lxclznarmxmh ic oeugcp m ahhudiwbnprmwumtn xurfohs", "ctfin apmejlyjwv ic n pbrvby vkkmdcuxog cg cg", "fjoydaqhhmfxy pbrvby pbrvby csergtqspzfe", "apmejlyjwv ulzthvwdrf xsxdizjzdapbtcw babmsamjdfgm"};
    vector<string> dictionary = {"xoyponbmr : e gbumvrfwrrnul qdvbfk chucsmd", "d : akultdjanvjxfmkslo mztftp sohgxwmyqhctxk", "lxqyvex : jrhkrzz vzfnhogcdfeebzgwgzl nkczpnquy", "gsqhmm : sohgxwmyqhctxk mztftp kutqyep s", "ahhudiwbnprmwumtn : mztftp iadx fpabkwb wxmcootjj", "xurfohs : abpzr vzfnhogcdfeebzgwgzl", "ruxhewmfqzpn : yikowpecdyyzc ogogv", "n : ctrvcizgzjgimdx iadx waig qijajsryjuvdbgyp", "vqewnjrknsq : zyexxnxxkytaunsdg ehmov qdvbfk waig", "pqeydvcp : gmwxlosypjhpbb wxmcootjj wxmcootjj", "csergtqspzfe : e mqllnshpdlhe s kutqyep", "iibeuhrb : iadx s ipqlq qdvbfk d mvzimh chucsmd", "ozihgnq : waig mztftp kutqyep csqtbkdyjxnjw e", "eauhoxtxsmkpe : gbumvrfwrrnul wxmcootjj ipqlq", "cg : ehmov zoiuizaftzjno gbumvrfwrrnul", "ucp : jinnecwyzwa awgzhfsovknjkccwgof ogogv", "q : pimpmqqnomnp ogogv akultdjanvjxfmkslo ogogv", "loewprz : jinnecwyzwa jinnecwyzwa zoiuizaftzjno", "lfwpiisca : dc hizpmkjw mqllnshpdlhe", "rfrawwngcna : csqtbkdyjxnjw sohgxwmyqhctxk", "wojscvwuwkd : iadx waig iadx jinnecwyzwa dc", "jwuwbydyglnvgrr : ehmov zoiuizaftzjno", "cvf : ctrvcizgzjgimdx pimpmqqnomnp gbumvrfwrrnul", "tyfygjqdqjcneug : mqllnshpdlhe gbumvrfwrrnul", "hgetjj : waig csqtbkdyjxnjw d waig rlanfpuxsmnvfk", "lxclznarmxmh : d pimpmqqnomnp ywvgs mztftp tebp", "osay : s nkczpnquy ywvgs qceiww ehmov", "oeugcp : csqtbkdyjxnjw pimpmqqnomnp sohgxwmyqhctxk", "apmejlyjwv : waig abpzr ywvgs jrhkrzz e s", "nrhb : sohgxwmyqhctxk hizpmkjw vzfnhogcdfeebzgwgzl", "rduftnwn : ctrvcizgzjgimdx akultdjanvjxfmkslo", "xsxdizjzdapbtcw : mvzimh tebp qofyxycdptukuattd", "ssmzdnzt : vnxbyjgackkxtvionlp yikowpecdyyzc", "pbrvby : qdvbfk csqtbkdyjxnjw rlanfpuxsmnvfk abpzr", "m : qijajsryjuvdbgyp e ctrvcizgzjgimdx", "vkkmdcuxog : akultdjanvjxfmkslo csqtbkdyjxnjw", "hcitrpnivybgkas : qdvbfk zoiuizaftzjno", "ctfin : d rlanfpuxsmnvfk akultdjanvjxfmkslo waig", "ic : yikowpecdyyzc e jrhkrzz awgzhfsovknjkccwgof", "zfkp : tebp mvzimh zoiuizaftzjno qofyxycdptukuattd", "wkqb : pimpmqqnomnp waig ehmov ywvgs ehmov", "imnhlqwxeygnk : ipqlq mztftp fpabkwb csqtbkdyjxnjw", "lfdpuqedhzmuvxqfnyy : zoiuizaftzjno ehmov hizpmkjw", "fjoydaqhhmfxy : waig jrhkrzz csqtbkdyjxnjw", "lmkydjo : yikowpecdyyzc wxmcootjj pimpmqqnomnp d", "wiivgldzzksxbjlysvp : zoiuizaftzjno rlanfpuxsmnvfk", "babmsamjdfgm : e wxmcootjj sqrfacvamnytdbarrq", "zok : waig qceiww ehmov pimpmqqnomnp", "nmzpjtrgawmcknljlp : waig yikowpecdyyzc fpabkwb", "ulzthvwdrf : mvzimh qofyxycdptukuattd jinnecwyzwa"};
    vector<string> frequencies = {"yikowpecdyyzc ipqlq 527", "chucsmd yikowpecdyyzc 60", "s hizpmkjw 564", "vnxbyjgackkxtvionlp d 51", "jinnecwyzwa abpzr 615", "hizpmkjw yikowpecdyyzc 239", "chucsmd wxmcootjj 555", "qofyxycdptukuattd qijajsryjuvdbgyp 48", "e qdvbfk 713", "ipqlq dc 177", "hizpmkjw sohgxwmyqhctxk 164", "gbumvrfwrrnul gbumvrfwrrnul 114", "qijajsryjuvdbgyp awgzhfsovknjkccwgof 364", "gmwxlosypjhpbb mqllnshpdlhe 570", "abpzr mqllnshpdlhe 169", "rlanfpuxsmnvfk qijajsryjuvdbgyp 332", "vzfnhogcdfeebzgwgzl akultdjanvjxfmkslo 154", "jrhkrzz csqtbkdyjxnjw 311", "wxmcootjj abpzr 140", "s mztftp 270", "mqllnshpdlhe rlanfpuxsmnvfk 812", "waig awgzhfsovknjkccwgof 122", "jinnecwyzwa e 853", "rlanfpuxsmnvfk yikowpecdyyzc 797", "mqllnshpdlhe gbumvrfwrrnul 874", "ywvgs rlanfpuxsmnvfk 991", "nkczpnquy csqtbkdyjxnjw 362", "yikowpecdyyzc nkczpnquy 359", "e awgzhfsovknjkccwgof 690", "vnxbyjgackkxtvionlp yikowpecdyyzc 635", "z mqllnshpdlhe 257", "mztftp mvzimh 986", "awgzhfsovknjkccwgof awgzhfsovknjkccwgof 804", "nkczpnquy ywvgs 15", "zyexxnxxkytaunsdg qofyxycdptukuattd 803", "akultdjanvjxfmkslo yikowpecdyyzc 264", "zyexxnxxkytaunsdg s 212", "zyexxnxxkytaunsdg qijajsryjuvdbgyp 276", "jinnecwyzwa dc 722", "zyexxnxxkytaunsdg rlanfpuxsmnvfk 181", "ctrvcizgzjgimdx tebp 498", "iadx qofyxycdptukuattd 88", "waig zyexxnxxkytaunsdg 413", "mqllnshpdlhe ctrvcizgzjgimdx 213", "sqrfacvamnytdbarrq qijajsryjuvdbgyp 343", "qofyxycdptukuattd ctrvcizgzjgimdx 678", "tebp jrhkrzz 842", "jrhkrzz ctrvcizgzjgimdx 880", "kutqyep nkczpnquy 274", "nkczpnquy sohgxwmyqhctxk 369"};
    ProbabilisticTranslator* pObj = new ProbabilisticTranslator();
    clock_t start = clock();
    int result = pObj->maximumFidelity(text, dictionary, frequencies);
    clock_t end = clock();
    delete pObj;
    int expected = 3935;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> text = {"apfvmvql xpoehidhcp sevln id amwgyjtsfcdqqiwivl", "dyq annrmsgh srgtznxclqmbyd azblybkbxt id dycudh", "amwgyjtsfcdqqiwivl jbpqslu srgtznxclqmbyd", "fiyrzrzxelxhjrqrehz apfvmvql zcilgidyuhuzcboslem", "zcilgidyuhuzcboslem azblybkbxt wneleokj", "azblybkbxt ednfnibwhmkwhmyz jbpqslu wneleokj", "fiyrzrzxelxhjrqrehz ednfnibwhmkwhmyz dycudh", "apfvmvql dycudh jlbaeumyefev jlbaeumyefev", "zylhoootfbbjhprg dycudh yhovtdew uenaxmqzddf"};
    vector<string> dictionary = {"icwydzbfmosgo : owicouljn iojrestibwa vnmwbc", "dycudh : qzsfngki ykhehb cpvuuw", "pa : syjrfdcxjtiwcetjclm jawbtgdructqzrralec kda", "uqecrqwzufkt : eycnixwiftfroala qgfhsgdi", "tdlbzz : ycikljqerz syijr lwawqqoigiuxm qgfhsgdi", "oomrblmikzfn : zbjzk hojffhh ggitjdikzzee wzlq", "fxccmlcybxeio : iojrestibwa pschdk qgfhsgdi xw kda", "dyq : qeeyvqadtds uhkemvuollyxrphx cpvuuw", "hslq : tvuaptgglivakxwbl gkglwpxfawnhvc wfetmb", "jlbaeumyefev : eycnixwiftfroala idjhbbvnztbgrgf", "esfhpxbwseg : gviiquu jawbtgdructqzrralec", "euxlshgqqwfbhtpray : hojffhh qeeyvqadtds", "oyxcovmsjc : bfdhzyyauo jawbtgdructqzrralec wtmdw", "bgvrcgwrygx : itrrpoqak syjrfdcxjtiwcetjclm", "sevln : syijr lwawqqoigiuxm huvncqdcrz ahhqlxg", "yhovtdew : wzgiusiprnks gkjrtmb ykhehb kda wfetmb", "wymycnjtgiw : gkjrtmb voyjueeidmk ggitjdikzzee", "inxtaieudsuv : syjrfdcxjtiwcetjclm awwvftxiyqfxq", "oibzqhuiant : hojffhh qgfhsgdi hojffhh zbjzk", "zyvgznpukvtxmw : uhkemvuollyxrphx lwawqqoigiuxm", "hq : awwvftxiyqfxq kda gkjrtmb uhkemvuollyxrphx", "caclgteictnxpwgjbi : dmzxxrbhubuyikoac zbjzk", "jbpqslu : gkjrtmb hojffhh gviiquu zbjzk", "mrynmf : ahhqlxg wkuxytqihafmhtqoejx", "fqqydlwlcjqbhrjt : gkglwpxfawnhvc qeeyvqadtds", "id : syjrfdcxjtiwcetjclm jawbtgdructqzrralec wzlq", "xpoehidhcp : tvuaptgglivakxwbl gznzrera", "annrmsgh : zbjzk itrrpoqak gkglwpxfawnhvc", "a : jawbtgdructqzrralec syijr dmzxxrbhubuyikoac xw", "srgtznxclqmbyd : kda wtmdw itrrpoqak huvncqdcrz", "uenaxmqzddf : qeeyvqadtds zbjzk wzgiusiprnks", "ym : wkuxytqihafmhtqoejx huvncqdcrz ggitjdikzzee", "ouslzozfsjzfyvvxj : huvncqdcrz hojffhh gviiquu kda", "azblybkbxt : ycikljqerz iojrestibwa hojffhh vnmwbc", "zefwwwdxedajbhouqi : hojffhh wtmdw awwvftxiyqfxq", "zcilgidyuhuzcboslem : ggitjdikzzee idjhbbvnztbgrgf", "ygdavhmxenb : wzlq wkuxytqihafmhtqoejx dyv hojffhh", "fiyrzrzxelxhjrqrehz : huvncqdcrz ggitjdikzzee", "amwgyjtsfcdqqiwivl : eycnixwiftfroala qgfhsgdi", "apfvmvql : zbjzk zbjzk hojffhh uhkemvuollyxrphx", "ksuzqfzczwjbqlbd : qlh gkjrtmb ahhqlxg pschdk", "wneleokj : ycikljqerz awwvftxiyqfxq ahhqlxg", "zutqun : kda jawbtgdructqzrralec tvuaptgglivakxwbl", "ednfnibwhmkwhmyz : gznzrera cpvuuw pschdk vnmwbc", "usxy : huvncqdcrz iojrestibwa ahhqlxg ykhehb", "dfwgpdvwcdnvtoipme : huvncqdcrz owicouljn", "wytgezhutnbj : kda wzlq dmzxxrbhubuyikoac", "qvpcvfmq : owicouljn syjrfdcxjtiwcetjclm", "ejemlupppfudllipor : gkglwpxfawnhvc cpvuuw", "zylhoootfbbjhprg : cpvuuw wtmdw ahhqlxg owicouljn"};
    vector<string> frequencies = {"wtmdw xw 392", "cpvuuw qzsfngki 495", "gkjrtmb cpvuuw 707", "dyv ahhqlxg 186", "ggitjdikzzee qgfhsgdi 202", "gviiquu syjrfdcxjtiwcetjclm 192", "wtmdw qzsfngki 798", "tvuaptgglivakxwbl lwawqqoigiuxm 933", "itrrpoqak itrrpoqak 517", "gkglwpxfawnhvc dmzxxrbhubuyikoac 524", "awwvftxiyqfxq syijr 438", "idjhbbvnztbgrgf ykhehb 829", "lwawqqoigiuxm wzgiusiprnks 541", "wfetmb ggitjdikzzee 812", "jawbtgdructqzrralec qeeyvqadtds 284", "cpvuuw qeeyvqadtds 805", "syjrfdcxjtiwcetjclm itrrpoqak 294", "ecibgtxfduumhj ykhehb 881", "qzsfngki owicouljn 818", "uhkemvuollyxrphx wkuxytqihafmhtqoejx 441", "qzsfngki gkglwpxfawnhvc 155", "idjhbbvnztbgrgf gkjrtmb 496", "wfetmb huvncqdcrz 761", "bfdhzyyauo wzlq 446", "huvncqdcrz jawbtgdructqzrralec 464", "dmzxxrbhubuyikoac owicouljn 312", "ecibgtxfduumhj lwawqqoigiuxm 384", "dmzxxrbhubuyikoac itrrpoqak 817", "ahhqlxg gviiquu 646", "qeeyvqadtds ykhehb 681", "qlh jawbtgdructqzrralec 339", "kda bfdhzyyauo 636", "ggitjdikzzee gkjrtmb 970", "awwvftxiyqfxq eycnixwiftfroala 430", "gviiquu ycikljqerz 896", "iojrestibwa qeeyvqadtds 112", "wtmdw vnmwbc 275", "owicouljn lwawqqoigiuxm 656", "gkglwpxfawnhvc dyv 673", "kda dyv 912", "ycikljqerz tvuaptgglivakxwbl 665", "wzlq huvncqdcrz 34", "cpvuuw ykhehb 69", "xw syijr 402", "zbjzk ecibgtxfduumhj 210", "idjhbbvnztbgrgf uhkemvuollyxrphx 73", "gkglwpxfawnhvc awwvftxiyqfxq 374", "iojrestibwa itrrpoqak 472", "awwvftxiyqfxq wzgiusiprnks 728", "zbjzk gznzrera 678"};
    ProbabilisticTranslator* pObj = new ProbabilisticTranslator();
    clock_t start = clock();
    int result = pObj->maximumFidelity(text, dictionary, frequencies);
    clock_t end = clock();
    delete pObj;
    int expected = 3848;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> text = {"bpmnrlmlkprsauutz wrhghkvmmgapljskf", "jwersfnitdxcz hjkwcxumxqj xaxvxns qdwgfhkzbiscr", "moekaimcfcauwcdd pixerz ajeddzfweiz kfwdujrz ubwaa", "eblyyywarmkmgznvt wrhghkvmmgapljskf xzxfwxklsjk", "ymg jwersfnitdxcz axrbyivulsvslz hjkwcxumxqj"};
    vector<string> dictionary = {"lrritjcac : ylprtrsevnnbouilngm vrvdadoxiamnm", "dmbg : rwj uvbpbbvhdcdygmc gzqloobcfmwamgmrgi", "kithiqxndnl : cumhvwxbteczvmkkwje", "hbbakmggt : qzq w bwhtxdthzm ylprtrsevnnbouilngm", "irhndwmipmivg : ylprtrsevnnbouilngm fbtwynirvnem", "ubwaa : sdlkdvgvaji vdnqbdxlqcjkpdjgher enuwlyxt", "akwqbcrkam : ms jienlevlgwixvitacr", "abawsl : honkmkpryjwtiaplhae g kisfnsgufjqtxa", "wzewzqktkfuuzn : pzzjotmclwmvclzucvo f", "usjqtde : lzns ft ms jthoafbqquu ft lzns ft", "zxijlmtymrcydtn : wuconthyqynhrmpynbb grwtlqtutnpy", "xokshyyujghjrdcxea : z kpdnueubbsoneqtemct", "kfwdujrz : mejyl zxf pfwrb kisfnsgufjqtxa mzgimng", "aydxmiiipts : pvomfmfd nkddvmdqhsucsyd", "ooqvinmqptkvecr : szwpm exmxn exmxn", "ojuki : kpdnueubbsoneqtemct jthoafbqquu", "xzxfwxklsjk : sdlkdvgvaji ft enuwlyxt", "wrhghkvmmgapljskf : duakzlzkpi fbtwynirvnem", "zdqzymxlsxstocfgwm : duakzlzkpi nemjeipgo", "ac : ygiwknsg ikkamhqaupkxuasgw usgabohwjg", "axrbyivulsvslz : zozdtg rieovbvqtc kuxjs", "tgwhteeprlzrio : fbtwynirvnem nkddvmdqhsucsyd ft", "xaxvxns : ylprtrsevnnbouilngm qzq skoltomftfo", "ikbptkiijnbqa : tnhkomvvu hmkbbfljmbmlrrdqve", "lkunhg : w szwpm pvomfmfd aoedugqbdxxjz xqzfwmi", "gjeppp : xuyrpzqovikxua pdmsunozwcpapkdcg", "txaikdlfeewqrqq : tkzbuslbw usgabohwjg", "ekuhfeos : esdps oukcicejrji vhdnvfokkcjkgs kuxjs", "jqnaxmljkfbakemq : duakzlzkpi honkmkpryjwtiaplhae", "ybuqtsegnq : jnrkqgigpnp mykafrkvhifmkdd", "m : oafmcqzppfoamcgmbv rqwzobufkkwyepwlt qzq", "wdymela : esdps wtpzjxtvwtayzedva", "sf : xwnmvcpcfsej ms w rieovbvqtc ygiwknsg", "eblyyywarmkmgznvt : jnrkqgigpnp ksshfxkvmyom", "ymg : grwtlqtutnpy njrnrvohnjqfechwzp mejyl", "pdpevxy : szwpm zozdtg duakzlzkpi zddwcgwburho", "co : mejyl cxw oukcicejrji oafmcqzppfoamcgmbv", "bpmnrlmlkprsauutz : rieovbvqtc ksshfxkvmyom", "op : vdnqbdxlqcjkpdjgher zxf mejyl ogkakbyvveboemd", "kkjalyv : cxw ajkhxdesmogcsoqes tkzbuslbw zbfi", "wpxxngsjykxtcqmon : grptshiodegfhvzac pfwrb", "qdwgfhkzbiscr : zbfi ylprtrsevnnbouilngm", "wftpj : hjjwssaetlhpndj njrnrvohnjqfechwzp zbfi", "alqumhvzpbdf : mejyl rwj lzns enuwlyxt jthoafbqquu", "hjkwcxumxqj : itdrtrvoscbwcblq vhdnvfokkcjkgs", "pixerz : favhtwgyeyyobgh cxfyaycafxlq", "ntewnazqyupzhz : mzgimng f xuyrpzqovikxua", "moekaimcfcauwcdd : cxfyaycafxlq wtpzjxtvwtayzedva", "jwersfnitdxcz : kisfnsgufjqtxa grptshiodegfhvzac", "ajeddzfweiz : honkmkpryjwtiaplhae tnhkomvvu"};
    vector<string> frequencies = {"ikkamhqaupkxuasgw grwtlqtutnpy 204", "uvhbw ogkakbyvveboemd 595", "nemjeipgo jthoafbqquu 590", "nkddvmdqhsucsyd nkddvmdqhsucsyd 236", "hhu qnkkrlcsmkly 151", "zddwcgwburho hmkbbfljmbmlrrdqve 85", "hhu mzgimng 676", "pdmsunozwcpapkdcg tnhkomvvu 512", "bhbeozpvfovrviyehy qcqietrsqqktmcucqlt 419", "zozdtg wtpzjxtvwtayzedva 52", "kuxjs njrnrvohnjqfechwzp 658", "aoedugqbdxxjz oafmcqzppfoamcgmbv 448", "msdcyo tfax 778", "vdnqbdxlqcjkpdjgher grptshiodegfhvzac 80", "qcqietrsqqktmcucqlt nkddvmdqhsucsyd 57", "ajkhxdesmogcsoqes kqv 236", "oukcicejrji vbhqewzqcuvtxt 335", "enuwlyxt yaqfjdablyn 983", "qcqietrsqqktmcucqlt defcoehst 983", "qnkkrlcsmkly exmxn 898", "favhtwgyeyyobgh ylprtrsevnnbouilngm 727", "sdlkdvgvaji hthwktgbbpmwtjba 890", "defcoehst hhu 251", "grptshiodegfhvzac tfax 328", "uuni zozdtg 29", "nkurkmsxio exmxn 736", "nkddvmdqhsucsyd hthwktgbbpmwtjba 677", "hrcnndiggaplvjckn nkddvmdqhsucsyd 886", "wtpzjxtvwtayzedva ggnftbgvysfzqanj 376", "qwczbwyd vbhqewzqcuvtxt 62", "kqv xrqvxyxwjmb 166", "njrnrvohnjqfechwzp usgabohwjg 610", "rqwzobufkkwyepwlt jnrkqgigpnp 752", "bwhtxdthzm honkmkpryjwtiaplhae 564", "qnkkrlcsmkly bnwjef 780", "hthwktgbbpmwtjba oafmcqzppfoamcgmbv 697", "jienlevlgwixvitacr ksshfxkvmyom 590", "vhvgwtkzrrm zddwcgwburho 884", "vbhqewzqcuvtxt ykk 317", "oafmcqzppfoamcgmbv pdmsunozwcpapkdcg 356", "ft seolpgxdqxogmelu 759", "msdcyo bwhtxdthzm 339", "pfwrb defcoehst 903", "ylprtrsevnnbouilngm skoltomftfo 388", "fbtwynirvnem ms 42", "ggnftbgvysfzqanj cxw 865", "rieovbvqtc itdrtrvoscbwcblq 137", "vnbbriufo wtpzjxtvwtayzedva 711", "qcqietrsqqktmcucqlt kisfnsgufjqtxa 521", "tfax y 222"};
    ProbabilisticTranslator* pObj = new ProbabilisticTranslator();
    clock_t start = clock();
    int result = pObj->maximumFidelity(text, dictionary, frequencies);
    clock_t end = clock();
    delete pObj;
    int expected = 137;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> text = {"fkotda cvtkmlizfdqyb yhweqntqqozbmgg xgerxkfmd", "xgerxkfmd dxhfisxmuvriqjoklg flmoek qoubnrpmt", "bnpznxezgzun w trncex f lwwsxot cvtkmlizfdqyb", "hqjnbdnu xgerxkfmd dxhfisxmuvriqjoklg", "dxhfisxmuvriqjoklg roimknu cvtkmlizfdqyb h", "ea trncex kotuinedbn dxhfisxmuvriqjoklg mq s", "rfukobtcvynnljqniz lwwsxot rfukobtcvynnljqniz oxok", "ghzniuliphbuozgbwei yhweqntqqozbmgg roimknu s", "lwwsxot oxok s zorz bnpznxezgzun xgh zorz", "dxhfisxmuvriqjoklg hqjnbdnu ewa gujrie", "fkotda s flmoek ewa fkotda cvtkmlizfdqyb hwe", "mq mipifsacvorboagpf yhweqntqqozbmgg", "f bnpznxezgzun ufmzvvydiiesg wxpdiaawkgtigws", "hwe s lwwsxot ghzniuliphbuozgbwei oxok", "oxok ewa xgh kotuinedbn fkotda xgh qoubnrpmt", "qxgoktbkfnrnbothbj w zorz gujrie", "ghzniuliphbuozgbwei hqjnbdnu ghzniuliphbuozgbwei", "s w roimknu wxpdiaawkgtigws trncex ncuxwmgymtc", "fkotda f hwe f zorz qxgoktbkfnrnbothbj", "ea f f dxhfisxmuvriqjoklg ewa s mipifsacvorboagpf", "ztlinxdfxicfk h hwe roimknu kotuinedbn qoubnrpmt", "gujrie f hwe bnpznxezgzun fkotda xgh gujrie", "rfukobtcvynnljqniz xgerxkfmd gujrie cvtkmlizfdqyb", "yhweqntqqozbmgg yhweqntqqozbmgg ncuxwmgymtc fkotda", "h roimknu ufmzvvydiiesg trncex bnpznxezgzun", "dxhfisxmuvriqjoklg yhweqntqqozbmgg xgerxkfmd", "mq gujrie f yhweqntqqozbmgg s xgerxkfmd hwe", "h kotuinedbn mq s rfukobtcvynnljqniz qoubnrpmt xgh", "flmoek ea ufmzvvydiiesg ea trncex ea ewa qoubnrpmt", "ghzniuliphbuozgbwei cvtkmlizfdqyb", "rfukobtcvynnljqniz wxpdiaawkgtigws", "ztlinxdfxicfk roimknu flmoek flmoek ncuxwmgymtc", "ewa roimknu cvtkmlizfdqyb s f mipifsacvorboagpf h"};
    vector<string> dictionary = {"szjhjnirwtbrovt : spkh ycbztuwrqtnnqimars", "hgxqctfztzvy : spkh wxnscoeakgaxlr zyyjmow", "ea : ernirfjapuuzxgwujl dhdjeq ddpadmqttetoq", "ewa : naxiihyebvtu plpwjkvvs dhdjeq fwhfxn", "ghzniuliphbuozgbwei : gligsom gligsom nzmenqgz", "yacvryxqzzshjwbcdyb : peuqgxzdhabizfqr hlcdup v", "dkfelbutx : jigroiwafhiyodegff wxnscoeakgaxlr", "iywovztqgkzmlj : zfkqfyl tnpdeavdxvwbkm qpabi c", "f : jsxkvh jp wtorxs wjzlpe urdmeosrdz cesgmsyqsc", "hdhqeqmpmruwj : fwhfxn uvaht fwhfxn dhdjeq", "hwe : mxyqe wxnscoeakgaxlr wjzlpe ltnztbzmjefqrvh", "sqv : zdwmpxkqun mskfwvxpqmmrqfz bbsszyqsvuvitx", "oxok : sj gmmssrtizlanh stocnb jsciilhpatgyrr", "fkotda : nauyx nauyx ycbztuwrqtnnqimars nzmenqgz", "bnpznxezgzun : jl m wtorxs isocmtuhddjl", "qoubnrpmt : gligsom zjaltaperlmfkxyfng m", "ufmzvvydiiesg : tflb hpzcrecdizr lnycogxmaehzy", "qxgoktbkfnrnbothbj : plxkzifhogkmbdjpa nauyx", "s : htamyqwkilcg rpqeatjeaerz hqpibv", "ztlinxdfxicfk : wyc isocmtuhddjl hqpibv", "jdrogxsbl : djllb vtdtabkmcftcnajy wjzlpe w", "aqiqnjoawmaptyvbafu : ernirfjapuuzxgwujl", "trncex : wyc qpabi bbsszyqsvuvitx urdmeosrdz jl", "kotuinedbn : mbguyhupgzenuyaz rbcokrzzfisnum", "lwwsxot : ernirfjapuuzxgwujl plpniynazwjvygxnlc", "hqjnbdnu : kjxptxsz kecowwbevkufx nzmenqgz uvaht c", "mq : hqpibv cesgmsyqsc qlw uvaht vtdtabkmcftcnajy", "neirgzuabtgfvb : nauyx nzmenqgz tnpdeavdxvwbkm", "w : vtdtabkmcftcnajy hpzcrecdizr pdnorsolvypwg", "ezfgagqdgrzeawlqajd : wxnscoeakgaxlr mridrxinaxjuv", "cvtkmlizfdqyb : qs tnpdeavdxvwbkm pdnorsolvypwg", "xgerxkfmd : vtdtabkmcftcnajy ltnztbzmjefqrvh", "ncuxwmgymtc : zfkqfyl kjxptxsz hatwbwqh", "pmixczx : ailoloefyvspbd gpppclixj", "rgmhwlrtmznnt : zfkqfyl ernirfjapuuzxgwujl qpabi", "mipifsacvorboagpf : mskfwvxpqmmrqfz jsxkvh", "ty : rlzkifihdcs jigroiwafhiyodegff", "dxhfisxmuvriqjoklg : pmkcgfimddep rpqeatjeaerz", "roimknu : zjaltaperlmfkxyfng zfkqfyl kecowwbevkufx", "xgh : w djllb scgjbgbtmtf nqbkkrqbtqdugfa", "zorz : mskfwvxpqmmrqfz tslhwo peuqgxzdhabizfqr", "ibgnxhfrmquiinkbzl : jp abylugr ddpadmqttetoq", "yhweqntqqozbmgg : ocyalrghdpatj uvaht hpzcrecdizr", "fu : pdnorsolvypwg ynyltofac plpniynazwjvygxnlc", "ertzumkdmwyaxn : jigroiwafhiyodegff wtorxs", "wxpdiaawkgtigws : ernirfjapuuzxgwujl qlw tzkepfkb", "gujrie : kecowwbevkufx m vtdtabkmcftcnajy sj", "h : zysawvjcpecoxglp stocnb bbsszyqsvuvitx", "flmoek : xbizltuo htamyqwkilcg zyyjmow", "rfukobtcvynnljqniz : gmmssrtizlanh wjzlpe"};
    vector<string> frequencies = {"nqbkkrqbtqdugfa abylugr 514", "dvemhwhou dvemhwhou 128", "hqpibv ernirfjapuuzxgwujl 164", "stocnb isocmtuhddjl 886", "tnpdeavdxvwbkm peuqgxzdhabizfqr 554", "isocmtuhddjl spkh 744", "mbguyhupgzenuyaz kjxptxsz 897", "rpqeatjeaerz abylugr 364", "mbguyhupgzenuyaz jsxkvh 242", "tslhwo ynyltofac 571", "cesgmsyqsc ycbztuwrqtnnqimars 466", "mbguyhupgzenuyaz rlzkifihdcs 658", "gmmssrtizlanh bbsszyqsvuvitx 208", "rbcokrzzfisnum tqstgxnbadkyifl 184", "djllb v 167", "kjxptxsz wxnscoeakgaxlr 392", "kjxptxsz naxiihyebvtu 574", "qewjnwfznato ddpadmqttetoq 413", "ailoloefyvspbd qewjnwfznato 545", "lqvvptuyxzphasulhkv uvzvqsmrdfnuhq 395", "ynyltofac gpppclixj 130", "uvzvqsmrdfnuhq eyycgga 799", "peuqgxzdhabizfqr mbguyhupgzenuyaz 70", "dodbgyluqdvduaq spkh 334", "abylugr tqstgxnbadkyifl 292", "stocnb kjxptxsz 741", "w v 598", "dvemhwhou hetejztpplmemmics 529", "naxiihyebvtu jl 37", "hpzcrecdizr tqstgxnbadkyifl 795", "urdmeosrdz tnpdeavdxvwbkm 281", "zjaltaperlmfkxyfng spkh 820", "hpzcrecdizr uvaht 363", "jsciilhpatgyrr jl 144", "spkh xbizltuo 320", "tnpdeavdxvwbkm bbsszyqsvuvitx 256", "mxyqe djllb 721", "uvzvqsmrdfnuhq dodbgyluqdvduaq 308", "ddpadmqttetoq sqbcnpxejiytoxxfbe 512", "v c 223", "uvzvqsmrdfnuhq ynyltofac 738", "rpqeatjeaerz ybuflip 326", "onugvpesgrfsufv xbizltuo 432", "mskfwvxpqmmrqfz tslhwo 687", "dhdjeq htamyqwkilcg 885", "plpniynazwjvygxnlc isocmtuhddjl 582", "dscmcvysvvdgps hpzcrecdizr 664", "m aeplnywgelttlvyvrw 223", "dodbgyluqdvduaq zjaltaperlmfkxyfng 712", "tflb gpppclixj 664"};
    ProbabilisticTranslator* pObj = new ProbabilisticTranslator();
    clock_t start = clock();
    int result = pObj->maximumFidelity(text, dictionary, frequencies);
    clock_t end = clock();
    delete pObj;
    int expected = 2980;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> text = {"uhnmsuftxlqdw ifrsbylfml ddpdspviqgd wqzx pxjvjztx", "wqzx c hrebljubqyvaeze rtoeqoekipzokwohrw", "dklxgawpb j kgtjghn klagwahzwrpuiznhew xnhzdmyqye", "amhneagntbuisybw fexpj dhl ifrsbylfml j dklxgawpb", "kgtjghn ympzscfaelde xnhzdmyqye ivremrfpwe", "atqnfafy cwo egaexhxexuu cwo kqimixyxfvgoxhsjw", "kgtjghn fwlzhhasix dhl dklxgawpb pxjvjztx y", "klagwahzwrpuiznhew wqzx xektkdqycq cwo", "klagwahzwrpuiznhew kgtjghn xektkdqycq fexpj y", "llonrhagbkeuo pxjvjztx u skntwo hrebljubqyvaeze", "xektkdqycq wqzx igokku igokku rvznx", "dhl jcphjxwvfjihriru wxjfnm xnhzdmyqye qulawwkpye", "ddpdspviqgd hrebljubqyvaeze hrebljubqyvaeze", "amhneagntbuisybw ivremrfpwe kgtjghn acqrgtq wxjfnm", "c hclydnwrjxjo u y j rvznx jvfpbhvkustdjgjcb", "atqnfafy rtoeqoekipzokwohrw fwlzhhasix atqnfafy", "skntwo ddpdspviqgd c fexpj acqrgtq skntwo y", "xektkdqycq fmputb xektkdqycq dhl cwo egaexhxexuu", "jcphjxwvfjihriru rvznx wxjfnm hclydnwrjxjo", "xektkdqycq fwlzhhasix xnhzdmyqye acqrgtq", "xnhzdmyqye atqnfafy wqzx dhl bihno dhl j", "amhneagntbuisybw igokku wqzx pxjvjztx dhl atqnfafy", "qulawwkpye kgtjghn ddpdspviqgd xektkdqycq bihno", "hakadstojpaxfonqd lgwmidsplhzpc llonrhagbkeuo", "kqimixyxfvgoxhsjw hclydnwrjxjo xnhzdmyqye", "j atqnfafy c uhnmsuftxlqdw cwo xektkdqycq", "llonrhagbkeuo wqzx rtoeqoekipzokwohrw xnhzdmyqye", "rjkpbxh nlqkjpgpnzyhob fmputb u uhnmsuftxlqdw", "skntwo atqnfafy rvznx hrebljubqyvaeze egaexhxexuu", "hclydnwrjxjo dklxgawpb qulawwkpye rvznx", "klagwahzwrpuiznhew kqimixyxfvgoxhsjw c c", "xektkdqycq rjkpbxh xektkdqycq llonrhagbkeuo", "klagwahzwrpuiznhew lgwmidsplhzpc hakadstojpaxfonqd", "wxjfnm igokku wxjfnm hclydnwrjxjo ympzscfaelde", "hrebljubqyvaeze dklxgawpb hclydnwrjxjo", "c wxjfnm skntwo uhnmsuftxlqdw rvznx y hclydnwrjxjo", "klagwahzwrpuiznhew hclydnwrjxjo wqzx wxjfnm", "llonrhagbkeuo xnhzdmyqye hrebljubqyvaeze", "acqrgtq rtoeqoekipzokwohrw igokku amhneagntbuisybw", "hrebljubqyvaeze jcphjxwvfjihriru jvfpbhvkustdjgjcb", "ifrsbylfml wxjfnm u igokku fwlzhhasix", "skntwo c pxjvjztx bihno cwo wqzx j xektkdqycq cwo", "kgtjghn llonrhagbkeuo lgwmidsplhzpc nlqkjpgpnzyhob", "xnhzdmyqye igokku cwo pxjvjztx acqrgtq j", "rvznx xnhzdmyqye qulawwkpye u acqrgtq wqzx bihno", "jvfpbhvkustdjgjcb dhl ddpdspviqgd igokku kgtjghn", "rtoeqoekipzokwohrw klagwahzwrpuiznhew u"};
    vector<string> dictionary = {"uhnmsuftxlqdw : sogysgsnlvny uvexexxrfdv", "kqimixyxfvgoxhsjw : hqcxghrcjjbsukkraxv knoqqfb l", "skntwo : fgkktclskqvzau c qamdssnpxgjenkfha", "atqnfafy : hqcxghrcjjbsukkraxv hqcxghrcjjbsukkraxv", "kgtjghn : wuuodgemkqbu qxdndudzietofnzmi", "hclydnwrjxjo : l xbbidcdtfvwlr whyrhxibblkuza o", "eggxyqixpzhfmhw : ntpdl jqmldgfzjfouyrb ren", "nlqkjpgpnzyhob : trrsezvveeciopbhkgv wdlitctlz", "klagwahzwrpuiznhew : wdlitctlz oaqqrzlkmsk ufyu l", "rjkpbxh : sogysgsnlvny zf mccemxfrtricj", "c : whyrhxibblkuza knoqqfb zznxwbdmcjpstiru", "rtoeqoekipzokwohrw : gfxfxefanrdyrhzs otttygb", "ifrsbylfml : hyjxfrj kapbxzhsdqoca hyjxfrj ntpdl", "cwo : hhh aqgkgvrqufdowwlfl wdlitctlz wuuodgemkqbu", "jad : mnqbdnguzsi kapbxzhsdqoca ayvubddhrrnc", "lgwmidsplhzpc : hhh q knoqqfb fgkktclskqvzau wha", "jvpgdsls : jqmldgfzjfouyrb ydmxwxhmgx zbwdsmvgvq c", "rvznx : wdlitctlz q qamdssnpxgjenkfha ren", "egaexhxexuu : zf ejwntnlkeztjr qxdndudzietofnzmi", "wxjfnm : fexnqcmnxtf fjlbbrjywyfa", "vlanjmrfiykine : ydmxwxhmgx ufyu tzkyghpwurwsayyki", "ddpdspviqgd : q fgkktclskqvzau tzkyghpwurwsayyki", "dhl : ayvubddhrrnc gioxqotvjp u uvexexxrfdv", "ympzscfaelde : jdqh o gioxqotvjp xbbidcdtfvwlr", "wqzx : u pixpknq gli c oaqqrzlkmsk u", "igrpvfyfcura : ckfaoxxcinqclftey uvexexxrfdv", "xnhzdmyqye : x gioxqotvjp pixpknq", "bihno : hqcxghrcjjbsukkraxv ejwntnlkeztjr", "dklxgawpb : kapbxzhsdqoca trrsezvveeciopbhkgv", "fwlzhhasix : zbwdsmvgvq ydmxwxhmgx fexnqcmnxtf x", "igokku : hhh q sogysgsnlvny fgkktclskqvzau", "llonrhagbkeuo : xuikw ayvubddhrrnc xlwymqcmkbdzmvr", "kwzejuscwf : wdlitctlz ckfaoxxcinqclftey", "j : ufyu gpdunqjhj hhh ayvubddhrrnc", "acqrgtq : qamdssnpxgjenkfha wdlitctlz", "jcphjxwvfjihriru : wdlitctlz xuikw", "u : wha uvexexxrfdv xlwymqcmkbdzmvr", "fexpj : jycfmvwdiufoxifx knoqqfb", "hakadstojpaxfonqd : xuikw phmbtkeffbgcxtwkb", "pxjvjztx : gczyplrzmwzuhapprwf gfxfxefanrdyrhzs o", "ivremrfpwe : pixpknq wha wdlitctlz jqmldgfzjfouyrb", "y : lemctkglqcbqodab oaqqrzlkmsk otttygb zf", "qulawwkpye : xxfgsyiw xuikw jdqh xlwymqcmkbdzmvr q", "xektkdqycq : ydmxwxhmgx gioxqotvjp", "jvfpbhvkustdjgjcb : mnqbdnguzsi gioxqotvjp u c", "atcxqdoqpwgjf : fgkktclskqvzau fjlbbrjywyfa", "amhneagntbuisybw : gczyplrzmwzuhapprwf fexnqcmnxtf", "fmputb : ejwntnlkeztjr xbbidcdtfvwlr", "hrebljubqyvaeze : ayvubddhrrnc kymf fgkktclskqvzau", "ssuxksgrcfahpjcyos : ypssduixdk o kapbxzhsdqoca"};
    vector<string> frequencies = {"fjlbbrjywyfa fgkktclskqvzau 639", "l gpdunqjhj 285", "ufyu jdqh 140", "zf ejwntnlkeztjr 497", "aqgkgvrqufdowwlfl u 945", "xxfgsyiw xxfgsyiw 7", "ydmxwxhmgx otttygb 232", "gpdunqjhj zbwdsmvgvq 501", "ufyu ydmxwxhmgx 804", "jycfmvwdiufoxifx xuikw 573", "tzkyghpwurwsayyki kymf 261", "ren mccemxfrtricj 756", "pixpknq hhh 542", "otttygb sogysgsnlvny 853", "wha q 563", "wdlitctlz tzkyghpwurwsayyki 335", "mnqbdnguzsi jdqh 948", "wha sogysgsnlvny 498", "o ckfaoxxcinqclftey 698", "oaqqrzlkmsk lemctkglqcbqodab 159", "mnqbdnguzsi ntpdl 950", "jdqh ren 953", "zznxwbdmcjpstiru ypssduixdk 529", "ufyu jycfmvwdiufoxifx 274", "hqcxghrcjjbsukkraxv ayvubddhrrnc 277", "qamdssnpxgjenkfha xlwymqcmkbdzmvr 598", "gczyplrzmwzuhapprwf sogysgsnlvny 476", "gczyplrzmwzuhapprwf uvexexxrfdv 425", "xxfgsyiw kymf 553", "o fexnqcmnxtf 712", "szgbhbjnmfpmanzmd gfxfxefanrdyrhzs 725", "zf xbbidcdtfvwlr 821", "fjlbbrjywyfa zf 273", "fjlbbrjywyfa szgbhbjnmfpmanzmd 486", "oaqqrzlkmsk szgbhbjnmfpmanzmd 741", "xxfgsyiw szgbhbjnmfpmanzmd 390", "wuuodgemkqbu gpdunqjhj 23", "c ejwntnlkeztjr 434", "x kymf 737", "sogysgsnlvny gfxfxefanrdyrhzs 486", "vrqjcjutt jqmldgfzjfouyrb 833", "oaqqrzlkmsk ywyjotipxkazzcw 586", "mnqbdnguzsi zf 382", "gpdunqjhj zf 489", "wvlafyhiddwjvrjrnn zbwdsmvgvq 58", "fgkktclskqvzau zznxwbdmcjpstiru 824", "hyjxfrj zf 247", "gfxfxefanrdyrhzs wuuodgemkqbu 438", "szgbhbjnmfpmanzmd xbbidcdtfvwlr 661", "wdlitctlz szgbhbjnmfpmanzmd 283"};
    ProbabilisticTranslator* pObj = new ProbabilisticTranslator();
    clock_t start = clock();
    int result = pObj->maximumFidelity(text, dictionary, frequencies);
    clock_t end = clock();
    delete pObj;
    int expected = 14795;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> text = {"lkbprtuocsae zgpnsmypwbita jwrrzcqhlhbitn", "nlhqzdqwdfwjpdq edkivn yzaemgqsbdld edkivn", "jyvpmlbpsrcp jwrrzcqhlhbitn czbxfsodrnis", "mpp jwrrzcqhlhbitn uxsxojfysoqjl jwrrzcqhlhbitn", "lkbprtuocsae wuqheuyql cumasroyobefz", "zgpnsmypwbita s ocfzdsbax cumasroyobefz ocfzdsbax", "ayemn vvlgevymazmhcpqpobq uxsxojfysoqjl", "hnpfowzaxfoc ucqwctqpgdigaqndllf edkivn", "zt mpp lkbprtuocsae fhpdhirrbpsigfqh", "xyayfkmjy srxnclpw ayemn ftxkkjdm", "zxtebkvtnvkenlv zgpnsmypwbita exerfqk", "ftxkkjdm ayemn ocfzdsbax nvhfkyl pqoqrprclnrlm", "zt edkivn dkownoxcht hnpfowzaxfoc exerfqk hwivb", "ayemn ayemn xyayfkmjy mgvem dmvjgdunjzlkwu", "wuqheuyql pzqnudpttjjtxfqx mpp yzaemgqsbdld", "jwrrzcqhlhbitn h zt jwrrzcqhlhbitn yzaemgqsbdld", "ghhiutmre dj lljripiplnrgnqpcp dmvjgdunjzlkwu", "zxtebkvtnvkenlv nlhqzdqwdfwjpdq czbxfsodrnis", "nvhfkyl lkbprtuocsae zt srxnclpw dmvjgdunjzlkwu", "zgpnsmypwbita pzqnudpttjjtxfqx dmvjgdunjzlkwu", "dkownoxcht ocfzdsbax jwrrzcqhlhbitn yzaemgqsbdld", "exerfqk s nvhfkyl mpp cumasroyobefz zt nvhfkyl", "jwrrzcqhlhbitn nvhfkyl edkivn exerfqk dnjogfhz", "hwivb owzpdi pqoqrprclnrlm zgpnsmypwbita", "nvhfkyl dj mpp h dmvjgdunjzlkwu lljripiplnrgnqpcp"};
    vector<string> dictionary = {"pqoqrprclnrlm : nmvir gyptnqmp hg pdnfrupzgxkwl", "mgvem : koqxpjsaxyoff psmpznpgjlkfgrttv qlminovj", "yzaemgqsbdld : xzxfkrvsglcgnrmnku hkkk", "zxtebkvtnvkenlv : mww abuteexbzrw jetrxq hkv", "dnjogfhz : mmpwhrqusszkl eje rlumhwmvp", "wczgwdtc : rffarhevjkerqdkma aeywqlxmbwmqhkao", "jyvpmlbpsrcp : kkzy foklswlcwzbcyvuto", "exerfqk : unjuwlulhmrwrecaqi hnyyth", "ucqwctqpgdigaqndllf : dptbsaawhrknwpugeq rak", "zeilladvkgzjloovg : cf xicfaupcwzstul unqs", "owzpdi : p mkcblr knxnrqeq njcahhgpnrpokftqf", "mpp : foklswlcwzbcyvuto cvefc mvzsrhqslatk", "qcqskrwyntjopbg : gtlomdrp ghxlafeyzudmznzo", "xyayfkmjy : fdyzykftslhpx rmdazehxgksqckzitt", "czbxfsodrnis : hwq xaylrcurqfnkqih", "pzqnudpttjjtxfqx : yxfpiaxmrsoxqd cvt sz rlumhwmvp", "ayemn : dnwppubmsp baopfshvvfw rych yjviedorfhmcu", "s : k ldhqguagobbwkp qlminovj bwoxlybfg uds", "dj : jpoad nlt mmpwhrqusszkl tufeguqesqokyq", "vayijserpa : jpoad pxbd nguadpua", "srxnclpw : ybuwjnoayuruzn xzxfkrvsglcgnrmnku ljr", "fhpdhirrbpsigfqh : qcbdeylqzcrgdzlic apzbbf", "lkbprtuocsae : fmyqcxxygjxnscutv fnmufmnzbjkax", "ftxkkjdm : sfkuwrbngsl rych lndoqrabzplfghlllri", "nvhfkyl : nfc gs srvfur aotyyjlaowirkpxuatt", "yxmdezyrfrysfwasrer : hnhkjrrvkbrxmm nhlnniipsrs", "zt : tpvstbovkzgjthxhr psmpznpgjlkfgrttv tyryir", "jwrrzcqhlhbitn : qskhnvjrsna nqhufyemitmqkvam uxag", "jatamerbmkgdsoqw : yjtqebkd gtlomdrp othh dtn", "ghhiutmre : dnwppubmsp eqhkdvbinv mmpwhrqusszkl", "dkownoxcht : bbngmstafkttpesotb cyfw ijndvuwtxchk", "h : kxwg jimxzosrwjvczo xuumai krtjevmsxeilbrpn", "cumasroyobefz : xzxfkrvsglcgnrmnku cf cwwgnjilkgx", "lxjfpemrlhzvzdgdvwx : rujplxinozih vyewigfcbzbmrb", "zgpnsmypwbita : wpbaopiqjc qfsgkj kvmkrlrvpycpw", "xncgiesyy : ie dqhec bievloadejcruavpsp", "nlhqzdqwdfwjpdq : xmnfhyfva mlhink crrjkiboca rak", "dmvjgdunjzlkwu : lryemmkocfpsinhbp iryvxykm nacjw", "lljripiplnrgnqpcp : hv jpvsbvunpbepv iaezia", "wuqheuyql : jetrxq ldhqguagobbwkp ojsugvpjmnh hkv", "uxsxojfysoqjl : srvfur lryemmkocfpsinhbp rxj", "tuuuvgosqomdruvsn : zvsapeh ybuwjnoayuruzn", "hnpfowzaxfoc : bjcjstgrdqrxzqtb kzjzyorapnizeumoj", "hwivb : qcbdeylqzcrgdzlic hlsyujjhyepgws dypvxzk", "qtuudif : dnwppubmsp rbtskgjpihn", "ocfzdsbax : apzbbf wgqpkhtipdrxejfkdus mwvkvtskpn", "vdceslqtjskwa : adx pdnfrupzgxkwl pk eje cnk", "vvlgevymazmhcpqpobq : k urrab pntxptce", "edkivn : omczuejcaa unqs hljmigwlyss", "eynelytogkrzkxp : crrjkiboca gtlomdrp e bxyou"};
    vector<string> frequencies = {"h yjegh 894", "iaezia vse 746", "ghxlafeyzudmznzo yygjgzqhlbtmhklw 96", "hnhkjrrvkbrxmm xlonvzx 30", "kxwg zatjzjzbhap 47", "sfry ptxnkwttuhzizwonkaq 774", "nhlnniipsrs vcqhux 200", "fpohrlkjpwnyxptkzp hkkk 948", "vrfaevyf mmpwhrqusszkl 782", "pfvcbgt h 358", "cydynaqzatyoaslz h 540", "tpvstbovkzgjthxhr xmnfhyfva 829", "xuumai ldzkeesraeiexhnxsk 225", "bpniujaecfphmacf yh 245", "mwvkvtskpn bok 893", "elwv tfyqdensxnrfjyyrkjb 107", "fpetzutqajqqyhqtk vv 535", "bbngmstafkttpesotb aduq 773", "hv qfteaof 610", "mwvkvtskpn ssagwl 364", "aflylbovjedv cwwgnjilkgx 491", "ezfuckcduxrszxzczn klw 89", "ipnn kkrligksqjjxpugesh 179", "sajeaetowqcii vilkia 638", "ldhqguagobbwkp ghdwzbciswlukca 909", "zwbpvhhowen vilkia 517", "lqvikmrojqffgnspm xch 248", "zwbpvhhowen skqjkej 301", "cnk srvfur 514", "baopfshvvfw qlabrijyoubjv 151", "fumla bs 205", "ovazqctae hkkk 695", "njcahhgpnrpokftqf hkv 931", "qmpesmltlz nmvir 370", "ruzrdcbjjropes hlsyujjhyepgws 145", "rxj mjoqzqamvhqjb 124", "ndonmbguqhqcztldrp vlwyituwptnhafphscf 852", "fdpdzxxhotoyaoefqy vriqj 889", "fhddxqnegfoagag ukfkyc 131", "iaezia rujplxinozih 739", "shcksctahz iryvxykm 94", "xuumai hxc 123", "itucjqqupvuvqsk nlbngrtnxpbtcjijoii 294", "zrzchwlpjdn pqdshcsxcmbwgap 830", "kykaafttdmg bbngmstafkttpesotb 811", "klw ybuwjnoayuruzn 536", "xfxprkoavfjaxow kkrligksqjjxpugesh 326", "xxruqwrqw wk 686", "izc bvrhkkte 664", "foklswlcwzbcyvuto ybshqgpmgvn 8"};
    ProbabilisticTranslator* pObj = new ProbabilisticTranslator();
    clock_t start = clock();
    int result = pObj->maximumFidelity(text, dictionary, frequencies);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> text = {"lhljvanidvqzz tzrqj zpzusmwqh vpchbkufmavhn", "aofofhc aofofhc jilfhft sbsshdzznks", "cgpwijfjpdrvxib rrqwbqkuub qmde tlycjfkys gcaciog", "hgihsdchsltanvayl jilfhft rjwqwkg tzrqj fmc", "venipmkrvboddds ceofqbemfmakkjvf rrqwbqkuub", "bwgr tzrqj cgpwijfjpdrvxib g mfgwacygg fmc gcaciog", "xqbq rjwqwkg zpzusmwqh vpchbkufmavhn vpchbkufmavhn", "xqbq venipmkrvboddds mfgwacygg jilfhft", "zcccccrzyihnha fdeycvq zpzusmwqh zcccccrzyihnha", "gcaciog jilfhft rrqwbqkuub ceofqbemfmakkjvf", "aofofhc vpchbkufmavhn tlycjfkys venipmkrvboddds", "zpzusmwqh lhljvanidvqzz zpzusmwqh xqbq mfgwacygg", "xzm jilfhft vpchbkufmavhn bwgr icnnsdyysihkqvugz", "bwgr siopdfrfygrvvbbqlfa siopdfrfygrvvbbqlfa", "icnnsdyysihkqvugz ytqycpj gecmdrikfslwbmc fmc", "gcaciog zoamwe qmde m m fdeycvq ytqycpj", "lhljvanidvqzz zcccccrzyihnha cgpwijfjpdrvxib xzm", "cgpwijfjpdrvxib zpzusmwqh aofofhc qmde bwgr xzm", "gecmdrikfslwbmc tlycjfkys icnnsdyysihkqvugz", "fmc qmde zpzusmwqh zpzusmwqh cgpwijfjpdrvxib", "aofofhc usmtswmt usmtswmt jilfhft gecmdrikfslwbmc", "icnnsdyysihkqvugz icnnsdyysihkqvugz", "icnnsdyysihkqvugz vpchbkufmavhn mfgwacygg g", "venipmkrvboddds fdeycvq gcaciog fmc tlycjfkys", "zxrlrqaeuth lhljvanidvqzz cgpwijfjpdrvxib aofofhc", "ytqycpj fdeycvq zpzusmwqh zgb ceofqbemfmakkjvf", "qmde jilfhft xzm kkpmbux tzrqj zpzusmwqh", "zcccccrzyihnha cgpwijfjpdrvxib g zgb wtxtvotjxvdim", "kkpmbux zoamwe xqbq zpzusmwqh gcaciog", "aofofhc jilfhft zcccccrzyihnha tzrqj wtxtvotjxvdim", "fmc fdeycvq zxrlrqaeuth zoamwe rjwqwkg xzm", "cgpwijfjpdrvxib bwgr kkpmbux fdeycvq sbsshdzznks", "icnnsdyysihkqvugz fdeycvq qmde m ceofqbemfmakkjvf", "gcaciog zcccccrzyihnha aofofhc vpchbkufmavhn zgb", "aofofhc rjwqwkg tzrqj bwgr rrqwbqkuub zxrlrqaeuth", "zgb g mfgwacygg gecmdrikfslwbmc tlycjfkys zoamwe", "gecmdrikfslwbmc zgb zoamwe g icnnsdyysihkqvugz"};
    vector<string> dictionary = {"unxoawhwhoclioqy : bqsqzxosyfirkzajj", "xzm : xnmcrgfaekhxbmg sjgiwoem sjgiwoem", "m : hdgtceyarf wuuaypxwvgbydvdrp egah egah", "bwgr : xpmmohxhfaqxud krjmkhgpdksiitjk", "venipmkrvboddds : egah ynounezzmmkdeebr wpgw crzdb", "wtxtvotjxvdim : dmuseprwzzeolfibnua dlkkngi", "lpwym : egah xpmmohxhfaqxud aae ropefdsomrwfdksudk", "vpchbkufmavhn : xpmmohxhfaqxud wuuaypxwvgbydvdrp", "kkpmbux : wuuaypxwvgbydvdrp wpgw sjgiwoem wpgw", "siopdfrfygrvvbbqlfa : snwxebylpb xpmmohxhfaqxud", "hnwnejtgfxhsy : q ropefdsomrwfdksudk aae", "gkbcydpkizoummwbvr : ynounezzmmkdeebr", "cjvyhlwcgz : sjgiwoem wuuaypxwvgbydvdrp", "htbxfuyabdmcks : wuuaypxwvgbydvdrp xnmcrgfaekhxbmg", "jilfhft : hdgtceyarf snwxebylpb ropefdsomrwfdksudk", "cgpwijfjpdrvxib : ropefdsomrwfdksudk", "tzuqq : ynounezzmmkdeebr crzdb bqsqzxosyfirkzajj", "aofofhc : ropefdsomrwfdksudk dmuseprwzzeolfibnua", "zgb : sjgiwoem bqsqzxosyfirkzajj snwxebylpb", "rjwqwkg : bqsqzxosyfirkzajj fwkrirrs", "zoamwe : wpgw bqsqzxosyfirkzajj wuuaypxwvgbydvdrp", "lhljvanidvqzz : wuuaypxwvgbydvdrp snwxebylpb", "ytqycpj : aae bqsqzxosyfirkzajj aae aae", "fdeycvq : ropefdsomrwfdksudk egah ynounezzmmkdeebr", "rnjsmehciqvdlqyp : sjgiwoem ropefdsomrwfdksudk", "qxmzwcelwuhp : ynounezzmmkdeebr crzdb", "usmtswmt : dlkkngi wpgw wpgw fwkrirrs crzdb", "qmde : dmuseprwzzeolfibnua krjmkhgpdksiitjk", "tzrqj : bqsqzxosyfirkzajj wpgw wpgw wpgw dlkkngi", "zxrlrqaeuth : crzdb xpmmohxhfaqxud q", "ceofqbemfmakkjvf : ynounezzmmkdeebr wpgw", "g : sjgiwoem sjgiwoem sjgiwoem sjgiwoem snwxebylpb", "mfgwacygg : q aae aae crzdb dmuseprwzzeolfibnua", "zpzusmwqh : ynounezzmmkdeebr snwxebylpb crzdb", "utupvuggyhhten : dmuseprwzzeolfibnua", "fhxc : sjgiwoem dlkkngi egah sjgiwoem", "sbsshdzznks : snwxebylpb krjmkhgpdksiitjk", "zcccccrzyihnha : dmuseprwzzeolfibnua", "fe : wpgw ynounezzmmkdeebr ynounezzmmkdeebr", "asgzcclofw : xpmmohxhfaqxud ynounezzmmkdeebr aae", "fmc : fwkrirrs egah q dlkkngi q ynounezzmmkdeebr", "tlycjfkys : fwkrirrs q crzdb wuuaypxwvgbydvdrp", "gcaciog : crzdb krjmkhgpdksiitjk wuuaypxwvgbydvdrp", "hgihsdchsltanvayl : hdgtceyarf ynounezzmmkdeebr", "icnnsdyysihkqvugz : egah snwxebylpb sjgiwoem", "xfiyqxffnjmdaandj : dmuseprwzzeolfibnua dlkkngi", "rrqwbqkuub : aae krjmkhgpdksiitjk fwkrirrs", "mzvgwyegobdsxdserc : aae aae aae", "gecmdrikfslwbmc : bqsqzxosyfirkzajj dlkkngi egah", "xqbq : aae xnmcrgfaekhxbmg egah krjmkhgpdksiitjk"};
    vector<string> frequencies = {"q xnmcrgfaekhxbmg 256", "egah ynounezzmmkdeebr 337", "fwkrirrs egah 918", "wpgw wpgw 13", "bqsqzxosyfirkzajj dmuseprwzzeolfibnua 629", "aae dmuseprwzzeolfibnua 571", "bqsqzxosyfirkzajj egah 347", "dmuseprwzzeolfibnua krjmkhgpdksiitjk 643", "hdgtceyarf hdgtceyarf 107", "dlkkngi wuuaypxwvgbydvdrp 876", "xpmmohxhfaqxud dmuseprwzzeolfibnua 856", "ynounezzmmkdeebr snwxebylpb 384", "snwxebylpb dmuseprwzzeolfibnua 633", "xpmmohxhfaqxud xpmmohxhfaqxud 621", "bqsqzxosyfirkzajj snwxebylpb 558", "wuuaypxwvgbydvdrp q 121", "egah dmuseprwzzeolfibnua 534", "sjgiwoem xnmcrgfaekhxbmg 371", "aae bqsqzxosyfirkzajj 159", "xnmcrgfaekhxbmg xnmcrgfaekhxbmg 566", "sjgiwoem hdgtceyarf 646", "crzdb dmuseprwzzeolfibnua 827", "krjmkhgpdksiitjk sjgiwoem 909", "ynounezzmmkdeebr krjmkhgpdksiitjk 849", "crzdb krjmkhgpdksiitjk 271", "crzdb dlkkngi 915", "egah dlkkngi 123", "ynounezzmmkdeebr wpgw 239", "aae q 903", "aae xnmcrgfaekhxbmg 422", "egah q 511", "wuuaypxwvgbydvdrp crzdb 380", "hdgtceyarf krjmkhgpdksiitjk 89", "hdgtceyarf fwkrirrs 531", "ynounezzmmkdeebr crzdb 791", "wpgw q 324", "egah xnmcrgfaekhxbmg 524", "dmuseprwzzeolfibnua dlkkngi 374", "snwxebylpb xpmmohxhfaqxud 722", "xpmmohxhfaqxud snwxebylpb 413", "ropefdsomrwfdksudk dmuseprwzzeolfibnua 806", "dmuseprwzzeolfibnua hdgtceyarf 120", "wpgw egah 370", "bqsqzxosyfirkzajj bqsqzxosyfirkzajj 648", "bqsqzxosyfirkzajj dlkkngi 637", "dlkkngi q 688", "sjgiwoem sjgiwoem 939", "aae ropefdsomrwfdksudk 592", "xpmmohxhfaqxud dlkkngi 867", "dlkkngi egah 455"};
    ProbabilisticTranslator* pObj = new ProbabilisticTranslator();
    clock_t start = clock();
    int result = pObj->maximumFidelity(text, dictionary, frequencies);
    clock_t end = clock();
    delete pObj;
    int expected = 67032;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> text = {"uxhbavmnafttonlib sphvyseycwrrj xugxfjfjmg", "mbvqzpk znfswolzy hhfyptwfzmu wqvwhp", "se lm hv se jktqqwetonn fsfzhzdwlrhcqrrk", "sphvyseycwrrj jktqqwetonn vwrjflervoze f", "vmsigujlkx piwxapzwcbgnd cxcjfjdgjqi piwxapzwcbgnd", "wpkiwcpkhadwuzigbgf piwxapzwcbgnd vmsigujlkx yluvy", "qjdzcacivaeuojoa jktqqwetonn piwxapzwcbgnd", "rsnrh cxcjfjdgjqi xugxfjfjmg xugxfjfjmg rsnrh", "xugxfjfjmg rsnrh rsnrh gfo wqvwhp fsfzhzdwlrhcqrrk", "yluvy lm xugxfjfjmg hhfyptwfzmu l hv vwrjflervoze", "vmsigujlkx hhfyptwfzmu jktqqwetonn", "mbvqzpk hhfyptwfzmu fsfzhzdwlrhcqrrk", "vwrjflervoze uxhbavmnafttonlib jktqqwetonn mbvqzpk", "mbvqzpk piwxapzwcbgnd l piwxapzwcbgnd mbvqzpk", "rvmrknbrfdflkcjb uxhbavmnafttonlib znfswolzy", "hv gfo lm sphvyseycwrrj yluvy lm piqommhtbpfb", "rvmrknbrfdflkcjb sphvyseycwrrj cxcjfjdgjqi", "f vmsigujlkx wqvwhp uxhbavmnafttonlib xugxfjfjmg", "piwxapzwcbgnd f hv rsnrh l f mbvqzpk jktqqwetonn", "rvmrknbrfdflkcjb mbvqzpk znfswolzy jktqqwetonn se", "rsnrh piqommhtbpfb piqommhtbpfb wqvwhp xypfyem l", "se cxcjfjdgjqi qjdzcacivaeuojoa fsfzhzdwlrhcqrrk", "jktqqwetonn piqommhtbpfb piwxapzwcbgnd rsnrh", "wpkiwcpkhadwuzigbgf hv piqommhtbpfb jktqqwetonn", "l se mbvqzpk piqommhtbpfb vmsigujlkx se hv f", "fsfzhzdwlrhcqrrk f vwrjflervoze jktqqwetonn", "hhfyptwfzmu jktqqwetonn piwxapzwcbgnd lm", "sphvyseycwrrj qjdzcacivaeuojoa xypfyem", "rvmrknbrfdflkcjb fsfzhzdwlrhcqrrk qjdzcacivaeuojoa", "jktqqwetonn xugxfjfjmg sphvyseycwrrj sphvyseycwrrj", "sphvyseycwrrj wpkiwcpkhadwuzigbgf rvmrknbrfdflkcjb", "gfo se lm cxcjfjdgjqi xypfyem wqvwhp l"};
    vector<string> dictionary = {"iwlovufulmdxoglmt : bakkymzhbbpzsfhgij", "yluvy : cjorjw bakkymzhbbpzsfhgij cjorjw vdlluxt", "nnkximkffxyd : cjorjw vdlluxt cjorjw cjorjw cjorjw", "ldeqsbyamvxnzd : cjorjw cjorjw cjorjw vdlluxt", "cmh : bakkymzhbbpzsfhgij bakkymzhbbpzsfhgij", "uzoh : bakkymzhbbpzsfhgij bakkymzhbbpzsfhgij", "uxhbavmnafttonlib : bakkymzhbbpzsfhgij cjorjw", "mbvqzpk : vdlluxt cjorjw cjorjw bakkymzhbbpzsfhgij", "v : vdlluxt bakkymzhbbpzsfhgij vdlluxt", "f : bakkymzhbbpzsfhgij vdlluxt cjorjw cjorjw", "sjubqkgafuvv : bakkymzhbbpzsfhgij", "oujjzrrruuoz : bakkymzhbbpzsfhgij cjorjw cjorjw", "xypfyem : vdlluxt bakkymzhbbpzsfhgij cjorjw cjorjw", "nejlwmlngm : bakkymzhbbpzsfhgij cjorjw cjorjw", "eltnineocbigpz : cjorjw vdlluxt vdlluxt vdlluxt", "xugxfjfjmg : vdlluxt cjorjw vdlluxt vdlluxt", "fsfzhzdwlrhcqrrk : vdlluxt bakkymzhbbpzsfhgij", "wqvwhp : vdlluxt bakkymzhbbpzsfhgij", "myhmenllgonsfm : cjorjw cjorjw cjorjw cjorjw", "hndagsghsqtywm : vdlluxt cjorjw vdlluxt", "piqommhtbpfb : vdlluxt cjorjw bakkymzhbbpzsfhgij", "rsnrh : cjorjw bakkymzhbbpzsfhgij cjorjw cjorjw", "wpkiwcpkhadwuzigbgf : vdlluxt bakkymzhbbpzsfhgij", "thckosc : bakkymzhbbpzsfhgij cjorjw", "gbcnwpmcnjotpokt : cjorjw cjorjw", "jktqqwetonn : bakkymzhbbpzsfhgij", "hhfyptwfzmu : bakkymzhbbpzsfhgij", "vowpoghwp : vdlluxt bakkymzhbbpzsfhgij cjorjw", "lm : vdlluxt vdlluxt cjorjw cjorjw", "dfpatjplhhltve : cjorjw bakkymzhbbpzsfhgij cjorjw", "hv : cjorjw bakkymzhbbpzsfhgij bakkymzhbbpzsfhgij", "zos : bakkymzhbbpzsfhgij bakkymzhbbpzsfhgij", "rgxaygivj : bakkymzhbbpzsfhgij cjorjw", "sphvyseycwrrj : bakkymzhbbpzsfhgij", "znfswolzy : cjorjw cjorjw vdlluxt cjorjw cjorjw", "zhgasiwgqeu : cjorjw bakkymzhbbpzsfhgij cjorjw", "vmsigujlkx : cjorjw bakkymzhbbpzsfhgij vdlluxt", "se : vdlluxt vdlluxt vdlluxt bakkymzhbbpzsfhgij", "rvmrknbrfdflkcjb : vdlluxt vdlluxt", "l : bakkymzhbbpzsfhgij vdlluxt vdlluxt cjorjw", "piwxapzwcbgnd : vdlluxt cjorjw cjorjw cjorjw", "qjdzcacivaeuojoa : cjorjw vdlluxt cjorjw vdlluxt", "cxcjfjdgjqi : bakkymzhbbpzsfhgij", "xj : vdlluxt bakkymzhbbpzsfhgij bakkymzhbbpzsfhgij", "xuwfdqrlnudwmavhd : vdlluxt cjorjw vdlluxt vdlluxt", "vwrjflervoze : bakkymzhbbpzsfhgij", "gfo : vdlluxt bakkymzhbbpzsfhgij vdlluxt", "xuykhviitbckzrlnu : bakkymzhbbpzsfhgij vdlluxt", "nxjdynzm : bakkymzhbbpzsfhgij cjorjw cjorjw cjorjw", "cvj : vdlluxt vdlluxt vdlluxt bakkymzhbbpzsfhgij"};
    vector<string> frequencies = {"vdlluxt bakkymzhbbpzsfhgij 174", "bakkymzhbbpzsfhgij vdlluxt 441", "cjorjw bakkymzhbbpzsfhgij 661", "vdlluxt vdlluxt 347", "bakkymzhbbpzsfhgij bakkymzhbbpzsfhgij 301", "bakkymzhbbpzsfhgij cjorjw 329"};
    ProbabilisticTranslator* pObj = new ProbabilisticTranslator();
    clock_t start = clock();
    int result = pObj->maximumFidelity(text, dictionary, frequencies);
    clock_t end = clock();
    delete pObj;
    int expected = 61623;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> text = {"iagvzyndsdeb l bnswxxfazsfqflna riarqwm iupjz", "iupjz iagvzyndsdeb pkqghj iupjz chgbdfjzecpqyifj", "pkqghj pkqghj njvuzozxnrba ref ref pkqghj iupjz", "krusdsgjoxooeil njvuzozxnrba chgbdfjzecpqyifj", "krusdsgjoxooeil iagvzyndsdeb pkqghj njvuzozxnrba", "iupjz iupjz bnswxxfazsfqflna pkqghj pkqghj", "chgbdfjzecpqyifj njvuzozxnrba l l bnswxxfazsfqflna", "krusdsgjoxooeil bnswxxfazsfqflna pkqghj", "chgbdfjzecpqyifj chgbdfjzecpqyifj iagvzyndsdeb"};
    vector<string> dictionary = {"qnob : psgkltmwsfjuduzyam v vrehmdtzubhipo", "bbtcrfylrjmbaprtll : v vrehmdtzubhipo", "iwdeeklzqvudtkxj : vrehmdtzubhipo v vrehmdtzubhipo", "ref : v vrehmdtzubhipo v v v v v vrehmdtzubhipo", "qauounqmywvljpkevm : v vrehmdtzubhipo", "tt : psgkltmwsfjuduzyam vrehmdtzubhipo v", "znqwgl : v vrehmdtzubhipo psgkltmwsfjuduzyam", "luhnburwyuv : v vrehmdtzubhipo psgkltmwsfjuduzyam", "riarqwm : psgkltmwsfjuduzyam v psgkltmwsfjuduzyam", "yzodvmhsyajsx : psgkltmwsfjuduzyam vrehmdtzubhipo", "plxfisxxpccwuidcih : psgkltmwsfjuduzyam v", "avnur : vrehmdtzubhipo v vrehmdtzubhipo", "xhshyvdmuktqj : psgkltmwsfjuduzyam vrehmdtzubhipo", "kqmc : psgkltmwsfjuduzyam v vrehmdtzubhipo v", "pkqghj : v vrehmdtzubhipo vrehmdtzubhipo", "bnswxxfazsfqflna : v psgkltmwsfjuduzyam", "bighdwbpgmajwy : psgkltmwsfjuduzyam vrehmdtzubhipo", "leguqliwduf : vrehmdtzubhipo v vrehmdtzubhipo v", "gyvmicizuf : v psgkltmwsfjuduzyam", "iupjz : psgkltmwsfjuduzyam v vrehmdtzubhipo", "ygvroq : v psgkltmwsfjuduzyam v psgkltmwsfjuduzyam", "xknhwrgb : v vrehmdtzubhipo vrehmdtzubhipo v", "lceq : v v psgkltmwsfjuduzyam vrehmdtzubhipo", "fw : vrehmdtzubhipo psgkltmwsfjuduzyam", "pjfxbwtveyegxroc : v v psgkltmwsfjuduzyam", "kbyydazhybaetu : vrehmdtzubhipo v", "zy : psgkltmwsfjuduzyam v v vrehmdtzubhipo v v v", "p : vrehmdtzubhipo v psgkltmwsfjuduzyam v v v", "l : psgkltmwsfjuduzyam psgkltmwsfjuduzyam", "fxd : psgkltmwsfjuduzyam psgkltmwsfjuduzyam", "chgbdfjzecpqyifj : vrehmdtzubhipo v v", "iagvzyndsdeb : psgkltmwsfjuduzyam", "hypsjgbcu : v psgkltmwsfjuduzyam", "vpkwzfvyitqa : v v vrehmdtzubhipo vrehmdtzubhipo v", "nsqkdfbncsscgkyefl : psgkltmwsfjuduzyam", "dhjcpxmsgjbtj : v psgkltmwsfjuduzyam", "krusdsgjoxooeil : vrehmdtzubhipo vrehmdtzubhipo v", "hlzrwfvegxqwrt : v v psgkltmwsfjuduzyam v", "jfe : psgkltmwsfjuduzyam vrehmdtzubhipo v", "erppr : vrehmdtzubhipo v v vrehmdtzubhipo", "yzjoeb : psgkltmwsfjuduzyam psgkltmwsfjuduzyam v v", "g : vrehmdtzubhipo vrehmdtzubhipo v", "njvuzozxnrba : vrehmdtzubhipo psgkltmwsfjuduzyam", "nkoon : vrehmdtzubhipo psgkltmwsfjuduzyam", "rzyvjtzumtn : vrehmdtzubhipo v v", "lvqibpsmzbylin : v vrehmdtzubhipo vrehmdtzubhipo v", "tlsntgbihjmhzmrsngc : psgkltmwsfjuduzyam v", "dklrnuijzvercfpdic : v psgkltmwsfjuduzyam v", "arqjufk : v psgkltmwsfjuduzyam psgkltmwsfjuduzyam", "gsbxeujgcwvgzxpsqf : v v v vrehmdtzubhipo"};
    vector<string> frequencies = {"psgkltmwsfjuduzyam psgkltmwsfjuduzyam 829", "v v 55", "v vrehmdtzubhipo 320", "psgkltmwsfjuduzyam v 422", "v psgkltmwsfjuduzyam 287", "vrehmdtzubhipo vrehmdtzubhipo 688"};
    ProbabilisticTranslator* pObj = new ProbabilisticTranslator();
    clock_t start = clock();
    int result = pObj->maximumFidelity(text, dictionary, frequencies);
    clock_t end = clock();
    delete pObj;
    int expected = 23258;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> text = {"hxfcaly ndkjujt iqlcuyzfeaqdq erkptdcqs", "qmx ndkjujt aoszreydnvkyol kziazpgaqsr iifhrhfc", "meale jeejtki hlavb iqlcuyzfeaqdq qmx tvrfkrrulh", "hxfcaly iifhrhfc qmx byku jqcuyzx byku qzkyrgpnboh", "hlavb z meale grie mphreqpkccord tvrfkrrulh kzgrfl", "kzgrfl tvrfkrrulh jeejtki vd dooofuascekl", "jphpgfjyjfu mphreqpkccord kziazpgaqsr", "hlavb mphreqpkccord bqjqaukdtccjh rrf iifhrhfc", "jqcuyzx elndwsdbgkfzjfhjey meale hxfcaly grie", "hxfcaly oysyeyklcbjgyp oysyeyklcbjgyp todi qmx", "jqcuyzx rvmnfhblsfwpa hxfcaly vgsmhwcwjqwpr ysfu", "kzgrfl oysyeyklcbjgyp aoszreydnvkyol dooofuascekl", "qmx jqcuyzx annj dooofuascekl iifhrhfc jqcuyzx", "kziazpgaqsr z dooofuascekl ndkjujt bqjqaukdtccjh", "vgsmhwcwjqwpr meale f dooofuascekl jqcuyzx z", "jqcuyzx kziazpgaqsr jphpgfjyjfu iifhrhfc erkptdcqs", "qzkyrgpnboh qmx todi oysyeyklcbjgyp iifhrhfc", "jphpgfjyjfu qmx vd jqcuyzx erkptdcqs jeejtki", "ddvfwkosryqvph z qzkyrgpnboh tvrfkrrulh jeejtki vd", "hlavb qmx tvrfkrrulh rvmnfhblsfwpa z rvmnfhblsfwpa", "vgsmhwcwjqwpr oysyeyklcbjgyp vd jphpgfjyjfu", "annj f ddvfwkosryqvph vd erkptdcqs meale z kzgrfl", "mphreqpkccord aoszreydnvkyol m hlavb byku z", "bqjqaukdtccjh kzgrfl qzkyrgpnboh mphreqpkccord", "iqlcuyzfeaqdq qmx aoszreydnvkyol jqcuyzx", "annj todi mphreqpkccord dooofuascekl", "f kziazpgaqsr bqjqaukdtccjh hxfcaly bqjqaukdtccjh", "m meale qzkyrgpnboh vgsmhwcwjqwpr meale", "bqjqaukdtccjh aoszreydnvkyol ddvfwkosryqvph vd", "tvrfkrrulh m iqlcuyzfeaqdq hlavb ndkjujt", "hxfcaly rrf kzgrfl bqjqaukdtccjh iqlcuyzfeaqdq", "rrf rvmnfhblsfwpa ddvfwkosryqvph ndkjujt"};
    vector<string> dictionary = {"qzkyrgpnboh : xlxqjkqhjvbkxi tfnqemdej", "fvhmqlopsjmrto : tnsskowhxd wluftda hjhesundwl", "vidzjp : och sykreluskpr hyngkewbnntasehis", "jqcuyzx : wtziuuscqwn heaayb fp vda xcrnpwbzvb wij", "dooofuascekl : kaswy gw rwprwhttjdillr", "jqhlhldrmzasq : vzzsesuampf tvqbufgw h bquxikpdtu", "elndwsdbgkfzjfhjey : kombg xlxqjkqhjvbkxi", "yglddqwsmgxzvl : njnrsvwvesodkuh tx pkxxsx", "ubwsgmzqtkrupofm : jqdetobvqqnlu mgmj", "vgsmhwcwjqwpr : eriyadzfolrzcz sr z dyhascsn", "rrf : sfhvqzngsvjay fcedontjgd qxrgaqqdhpmq", "rvmnfhblsfwpa : wij nftszgd fcedontjgd z lcth", "ontimv : sr hjhesundwl xlxqjkqhjvbkxi xbs", "vd : vda pkxxsx kyyikchnubjmgu ggmhkkugsiiwl", "fefxjvw : rxcv lciessk bvajpvbhtkoipmew", "zgbcdvezwjkrguscyts : oatlmudwmdicipznmjg", "jphpgfjyjfu : wtziuuscqwn jqdetobvqqnlu sl mgmj", "oysyeyklcbjgyp : daxiensgqusvhb qsinvhbodqhszmvwla", "lm : kvsgbjsgs vzzsesuampf zmf llvhnqbiyf", "t : vda sa mptvboylifw xlxqjkqhjvbkxi jrc yv", "iqlcuyzfeaqdq : jqdetobvqqnlu nvxhfiyguqio wij", "iifhrhfc : qxrgaqqdhpmq yvcupwc xdtfbvkuypioq", "bqjqaukdtccjh : heaayb wluftda tfnqemdej sa fp", "yglgwkppehp : hjhesundwl vzzsesuampf", "m : nvxhfiyguqio clabrscvmhxwbsdcez sr yzqhrzvgie", "annj : rcybuxnoo sykreluskpr gw qdjbvrwdcr ctd", "kziazpgaqsr : sulypfxnpzzsudkilp dyhascsn", "hlavb : wluftda tjdmypmmcm gtmfuyphqvxovzsuhf", "meale : nbkrdrognqmvrfi ztkkitysozkkmwoaw dyhascsn", "todi : dufrfm mgmj pabjhbipvuzh xqeppmgntvw", "z : qtyeipfghhnjqfckynj bmmxaulgefijqpwc plhsjmrd", "tvrfkrrulh : uthqswnzsyfsfv pabjhbipvuzh", "ysfu : z mptvboylifw sfhvqzngsvjay", "kzgrfl : krpkvheocbalhl ztkkitysozkkmwoaw", "byku : qtyeipfghhnjqfckynj daxojnjkc sl", "psfpy : gw z mgmj qrbxbq daxojnjkc tjdmypmmcm", "mphreqpkccord : kyyikchnubjmgu och", "qmx : heaayb rlnb ilmsibgcjh auptkganxntvur", "ndkjujt : lcth wblekohgtttjenudb hyngkewbnntasehis", "bzioii : krpkvheocbalhl xqeppmgntvw heaayb zmf", "ddvfwkosryqvph : lciessk vda sl mptvboylifw", "hxfcaly : dufrfm ohlypyoytomvwrnmu whyak", "erkptdcqs : yv pabjhbipvuzh fcedontjgd", "uwrcnykhcrviyven : ryoctkpzrrewy opjwtbvm", "jeejtki : gw u opjwtbvm vwwjijratqubqcn llvhnqbiyf", "grie : llvhnqbiyf tga daxiensgqusvhb gmzpnglswqb", "o : sykreluskpr i jpdhoeyyp lqicyiqhe dufrfm", "aoszreydnvkyol : plhsjmrd ohlypyoytomvwrnmu sr", "iixdh : z mhqwqiylsg lciessk wtziuuscqwn heaayb", "f : zmf kxcofacvffsmdfbgqqw fcedontjgd"};
    vector<string> frequencies = {"vwwjijratqubqcn rsrgzdamqhnu 275", "uthqswnzsyfsfv e 820", "qtyeipfghhnjqfckynj yv 943", "sloolcudfdwdeeyr eriyadzfolrzcz 90", "rsrgzdamqhnu kombg 136", "kombg tga 271", "ryoctkpzrrewy apulavctnokxcapni 719", "rsrgzdamqhnu sykreluskpr 949", "wdfozynrreyziysto nhbeqyuv 933", "ctd plhsjmrd 203", "bquxikpdtu zmf 158", "clabrscvmhxwbsdcez whyak 503", "sloolcudfdwdeeyr gw 509", "yziginadtuuukmya lcth 886", "kombg lcth 26", "kxcofacvffsmdfbgqqw apulavctnokxcapni 910", "vq pkxxsx 550", "sloolcudfdwdeeyr tx 87", "oatlmudwmdicipznmjg qsinvhbodqhszmvwla 614", "nvxhfiyguqio shthsjalzvcttvuivq 213", "eqskuzmvrbwytk c 781", "yvcupwc oatlmudwmdicipznmjg 44", "lqicyiqhe vzzsesuampf 757", "bmmxaulgefijqpwc gw 515", "heaayb mhqwqiylsg 161", "sa ohlypyoytomvwrnmu 905", "nbkrdrognqmvrfi kxcofacvffsmdfbgqqw 941", "wblekohgtttjenudb rwprwhttjdillr 502", "sl fecsj 191", "yzqhrzvgie jqdetobvqqnlu 115", "xdtfbvkuypioq nftszgd 145", "rcybuxnoo apulavctnokxcapni 985", "vzzsesuampf sl 80", "gnrfoygpcueyofrdqi xbs 549", "tsliuvmndhwgamrpivz vq 344", "sfhvqzngsvjay qxrgaqqdhpmq 170", "xqeppmgntvw dyhascsn 828", "fhijnxinilkgehpu ilmsibgcjh 671", "abfhy abfhy 572", "wdfozynrreyziysto dufrfm 864", "xqeppmgntvw tga 433", "vq kvsgbjsgs 755", "yasergivzpkwq sfhvqzngsvjay 568", "sulypfxnpzzsudkilp sfhvqzngsvjay 224", "kxcofacvffsmdfbgqqw dufrfm 130", "sfhvqzngsvjay heaayb 555", "sloolcudfdwdeeyr rlidajzu 789", "vzzsesuampf eriyadzfolrzcz 693", "fcedontjgd gtmfuyphqvxovzsuhf 329", "kinqwodpzicntu fcedontjgd 596"};
    ProbabilisticTranslator* pObj = new ProbabilisticTranslator();
    clock_t start = clock();
    int result = pObj->maximumFidelity(text, dictionary, frequencies);
    clock_t end = clock();
    delete pObj;
    int expected = 3551;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> text = {"rvdctdsnucv pk qyzmr usdjifnxcaakvzjcpm il", "anbsbepvytdxecbdtl yyebsebxqep jsdbhjdncamjt cozm", "qyzmr xbstqznje pni xbstqznje ejqfe n x", "anbsbepvytdxecbdtl e jdeynmngiruefz ejqfe il", "h jsdbhjdncamjt hzs yyebsebxqep tywvsryfdrlhmqv", "jdeynmngiruefz nmixftapyqlibstt rvdctdsnucv xggb", "vgpzfhcy xv qyzmr pni kntmhzr e h ykiukmzyivdovqn", "h jsdbhjdncamjt tywvsryfdrlhmqv x wmmjcjyeoo", "xggb hzs e il kntmhzr kntmhzr rvdctdsnucv"};
    vector<string> dictionary = {"x : pigtfymgnq ircxspiac ioboktruvcaxraub", "lncetjqc : qaaajkoq qzr nytus efxfuel uv", "xwsjjaa : gxqgqkqzdrwrghblqrd qjmfmohxxzyjbuf fq", "vgpzfhcy : rtwigg xmcuuquqeho efxfuel wrbaxmqrt", "xbstqznje : waqedm uv vnjfezdcteokdpvf", "y : aobxadwwbtvm gxqgqkqzdrwrghblqrd fhzva whnpxp", "kntmhzr : basisg xjglibqjhpahjaewmn nqueirui", "xv : qg zwuxcr ycgy j adjy xn jlfh wmlckfuxyt", "ayzvagiqwhbps : lciinvdmjw vussnmrhcabjggpnaww t", "n : gubpnlhn bdviymdms rtwigg gg iiiwfwbcyy wae", "je : cuxoqrfuppeiecxbvl igqsvxmcyurb fhzva", "w : kcgnwtsnzg zrbhtfnvdgkiegrk tvwehuonkxm s f", "xatqtzppzef : tvviohb o ul jlydmmdmksnr", "yyebsebxqep : llxedha pbxtcngwqdxknmm", "hzs : wsxp jdfbuwzvc cwirvuwdt fzdkjux", "wmmjcjyeoo : mxpzioyuynud wsxp kszvjhxfibffd jja", "zdmltvlcd : zmxxvpwxgrgaxjbnjhc fhezjnubrkpubppnb", "tywvsryfdrlhmqv : ul jdhpurcxvaknx dwtdpsnhdoislwj", "dnyyahkbpcccjyxxbk : ntjzjarinevnk ua", "zulxhcogncgsljnfeh : gjwthzebymbxtlptbaq efxfuel", "bjuciy : sfqcizgowumlbir jlydmmdmksnr", "gwbb : qwpvdiqduxrs qjypioysiqbwkek", "itjyyoy : fhzva lwggpmeytbjmxcrlgrf", "ykiukmzyivdovqn : wmwhny yfy ioboktruvcaxraub", "nmixftapyqlibstt : gm yjnt rmtzd fb", "mcaygiqhvifo : do o qwpvdiqduxrs ch nnbytpbl", "oanvilonybsfbclj : xwilzmtu bdlpfxdexnv efxfuel", "jsdbhjdncamjt : dtvuddcbx lwggpmeytbjmxcrlgrf", "qyzmr : byrnfdmdvmyxqsmtjq moopzvo phft nekdud", "pni : prktauidf yleqiwnkpqmxzclluu pbxtcngwqdxknmm", "rcehonpxclkupf : cqvtapekcspjhrtd f fzdkjux aokv", "vxrd : tauhyatdpv zomn gxqgqkqzdrwrghblqrd", "mrefynyfingop : aaww vuuqcldctyt pzhiybkar iwgjsu", "utia : dpoydwramgtx qjmfmohxxzyjbuf qbazqortqyf rg", "pfkctllybhdifw : dt ntjzjarinevnk iiiwfwbcyy lfrfh", "vzkweplxvaafl : eghvvnooafuseeubye", "rvdctdsnucv : lzrxk ow upjheukgjl gwfoma tvviohb", "yyruqul : jqrcsnnwh bvjreqiyziry zrbhtfnvdgkiegrk", "e : mxpzioyuynud hbj fkkpkvhhfcmtg", "dxaoqtwveunrgtz : subnaynlgmd vtuzbce llxedha", "pk : vml tvwehuonkxm kcgnwtsnzg ozjgsfz kzpahres", "xggb : wmlckfuxyt bqllollgtiqyuyssuf", "rnwpvazju : aaltkoyyqbxkoxw uqwazctbqvehtzys jlfh", "h : cwirvuwdt ehqqfmt lif vv qwppbqwxkjvusg aokv", "il : o jlfh wmwhny cxvg qwpvdiqduxrs", "jdeynmngiruefz : fvaypfd mppe sfqcizgowumlbir", "cozm : vvqp dt qwpvdiqduxrs saplcivkgstgug wmwhny", "anbsbepvytdxecbdtl : eghvvnooafuseeubye", "usdjifnxcaakvzjcpm : t efxfuel byrnfdmdvmyxqsmtjq", "ejqfe : vvoxrh jja ioboktruvcaxraub a vuuqcldctyt"};
    vector<string> frequencies = {"nk nytus 73", "tcsbriogws iwgjsu 701", "bpmfoqmxnzoypqiqbc yleqiwnkpqmxzclluu 586", "dgksjytzrzk wsxp 71", "xwilzmtu kquopfym 923", "t vnjfezdcteokdpvf 551", "idkxzwkd jjkkqptahvijrqrcqq 165", "dzvkexkylop hgeuiglcgobeg 203", "yleqiwnkpqmxzclluu tpahfabnshyfw 444", "wmlckfuxyt zmxxvpwxgrgaxjbnjhc 837", "aaks wae 154", "phft cl 421", "t fzdkjux 732", "vtuzbce nytus 278", "crbiefrvdyitpyirq aokv 731", "bqllollgtiqyuyssuf mxpzioyuynud 410", "uqswuuoblgymbtbem phft 442", "rwxnafemhpajmutobh ijvfucnyxictzosu 234", "ljduystfmrcg pue 685", "vv pue 451", "mtgypikwwyopjmba zejbyxu 702", "eigduixlkbtmix mmmpnhjggfwsgqfhdqo 361", "fq wsxp 281", "mtgypikwwyopjmba drjbhkvnba 779", "vnjfezdcteokdpvf dmzzhmbratzoaekdu 614", "wrbaxmqrt roroqrgnjhyufknyqx 435", "wae dwtdpsnhdoislwj 944", "vnjfezdcteokdpvf dgksjytzrzk 254", "dpoydwramgtx ehqqfmt 523", "do xjglibqjhpahjaewmn 847", "uohvdcogzbhp ihgwlkdjmvcvzgs 616", "dt niyrqmamidxipgilt 207", "ldloeelemx yfy 462", "vv lif 23", "vvqp gg 86", "dwtdpsnhdoislwj q 482", "ysqt wmwhny 981", "zrbhtfnvdgkiegrk iwgjsu 926", "qaaajkoq fodtoxhkewblmpo 70", "saplcivkgstgug burccdldadvbpprtemo 9", "ioboktruvcaxraub lrqpdkmsmqfjuax 429", "omloj rmtzd 241", "bdlpfxdexnv cl 98", "ntjzjarinevnk onibpucvzphkwbfrb 809", "cwirvuwdt i 378", "do usfuwfjynjlcoc 177", "admw cwirvuwdt 13", "ijvfucnyxictzosu mmmpnhjggfwsgqfhdqo 439", "xsxnfqgf gkpd 899", "ow vml 135"};
    ProbabilisticTranslator* pObj = new ProbabilisticTranslator();
    clock_t start = clock();
    int result = pObj->maximumFidelity(text, dictionary, frequencies);
    clock_t end = clock();
    delete pObj;
    int expected = 135;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> text = {"jd lbv hritighr bmhhzebcczxts jlxcchwtb wzteekkk", "asjzztqsoaqk yjmkckpkkieaag asjzztqsoaqk", "bmhhzebcczxts hjmp edevrvskhhlpqxnmw gnr pxchkkosd", "snlzldegan asjzztqsoaqk womzusb hqlbl hjmp", "zwuw womzusb asjzztqsoaqk wzteekkk bocrakrc", "wzteekkk z lbv wzteekkk zwuw hqlbl z lbv z", "hqlbl edevrvskhhlpqxnmw ussotdmgzi j j snlzldegan", "lrjfxvvtvu asjzztqsoaqk hritighr zwuw z", "dhwyp hqlbl lrjfxvvtvu asjzztqsoaqk gnr cmzcfph", "fnsnvodqaohttkekg lrjfxvvtvu z qyhvctdn dhwyp lbv", "fnsnvodqaohttkekg hjmp fnsnvodqaohttkekg", "bocrakrc hjmp dhwyp hjmp zwuw hjmp yjmkckpkkieaag", "asjzztqsoaqk ytvgeoqbetcwvhlnaet spqsnyyzehoverlt", "jd olprplbbjjvw qyhvctdn snlzldegan wzteekkk", "wzteekkk wzteekkk mqhsxweqqxwq syc pxchkkosd j", "z bniyzphqzqnnhoiyel jd edevrvskhhlpqxnmw cmzcfph", "edevrvskhhlpqxnmw z hjmp wzteekkk", "hjmp asjzztqsoaqk ussotdmgzi ussotdmgzi"};
    vector<string> dictionary = {"j : zuujz cwiozjaenjjpaskhsjc qpy up ozqcwf", "ytvgeoqbetcwvhlnaet : hraizwofqa mn", "hritighr : oo mpcdrktajem nymswmhgaimphzcl", "qmcjiwwswqvlwxtpm : nvtoassop neylwhvl ewtmwzmq", "lrjfxvvtvu : pvbuti rt voeidbyxdifmfl bgykndce j", "womzusb : enemwxkskhrn wuwg juxoplxwrjhwipwa", "rlsgiearywkpjveipem : zuujz hekucdjpa hzceuipp", "qyhvctdn : hraizwofqa nxjsryuyoyoveawut", "o : ikofwynsbpyi j rt aiharohf ttiohwwth rt dzjn c", "gihojgn : liimezeamuk juxoplxwrjhwipwa", "edevrvskhhlpqxnmw : hucfvgmlyzy rhftjezlbrfwmoqpy", "dhwyp : cqazisjpxc pvzobcnynuovwxychk zf ttiohwwth", "bocrakrc : zftonnvdrvl enemwxkskhrn htmuhuwvymeo", "mqhsxweqqxwq : wxrsdchixiam j cqazisjpxc", "hwiuzcarhhnraczddv : j w wsnrqw cqazisjpxc", "ivkmmtjh : j ijopjvetzq hftkmituj", "yhdmhjyqsvdkd : liimezeamuk myaha uzpri", "asjzztqsoaqk : ol wg qye bfigvebhbk mupwqpn", "ppgbkcodw : dcwmhbeydoi ozt liimezeamuk", "gnr : mupwqpn htmuhuwvymeo fhxjzuvrorhunfyplkz ol", "wqzcpksami : wg h e cwiozjaenjjpaskhsjc nvtoassop", "yjmkckpkkieaag : votdfhlynzacoo neylwhvl e ej c c", "cmzcfph : wsnrqw jhamotqslhi aqy juxoplxwrjhwipwa", "k : oo nruqxvyqj asuwlfjgrevgalid bgykndce tvo", "hqlbl : l uzpri aiharohf ozqcwf lh ozqcwf", "bniyzphqzqnnhoiyel : ddaqitspafqetnvoi ozqcwf", "pvubriqyqsv : htmuhuwvymeo msvanrqxvnohmmnlhsk", "dpaffoz : qpy wsnrqw juxoplxwrjhwipwa ol", "syc : mupwqpn nwaupmyyhbugknj pxyuxkruew h ozqcwf", "gayeqzlou : ol exxgqbniesdgwbi juxoplxwrjhwipwa j", "zwuw : nymswmhgaimphzcl ijbbjqeizzdhygg", "z : cqazisjpxc rdwzi ol ijopjvetzq cwxyfxi h", "pxchkkosd : hraizwofqa wuwg wsnrqw qcky", "jd : zuujz nymswmhgaimphzcl dfomaj hzbtbtuohsxgxg", "pvxetkk : wsnrqw zf ddaqitspafqetnvoi ej bgykndce", "rdhiaqvfkusakdm : fbqebkchofxabitl vtfaxn vtfaxn", "hjmp : zftonnvdrvl ei zuujz hzbtbtuohsxgxg", "linbawwbxlloypxgbty : nxjsryuyoyoveawut ej", "bmhhzebcczxts : jfduwvtioupudpd zftonnvdrvl w", "lbv : m cqazisjpxc aiharohf sawxxjbgyukwlldc", "spqsnyyzehoverlt : ijbbjqeizzdhygg z", "snlzldegan : rt nwaupmyyhbugknj petyrkhu", "ussotdmgzi : goumhnqbamdbfzm juxoplxwrjhwipwa", "olprplbbjjvw : nruqxvyqj rhqoocgprsnluu", "bozjkzu : lcwjae hzceuipp e zuujz uzpri", "bjlwltrihsucbofvkf : rt hxctvgwjb cqazisjpxc l", "jlxcchwtb : bgykndce cwiozjaenjjpaskhsjc ol ei", "fnsnvodqaohttkekg : yylvaskjbxoyt nymswmhgaimphzcl", "laimhfpbmspsojlfszh : aiharohf karxhllv h", "wzteekkk : ijbbjqeizzdhygg wuwg enemwxkskhrn"};
    vector<string> frequencies = {"ddaqitspafqetnvoi h 346", "ljpposoylpsljtxpyaj rhqoocgprsnluu 790", "up djdaghuyesxj 374", "l e 885", "hekucdjpa z 218", "yylvaskjbxoyt cyitptjznjmywcs 929", "ei liimezeamuk 360", "qgmupptstpjgy neylwhvl 902", "gpjascbnjmhxjgbit liimezeamuk 596", "hzbtbtuohsxgxg ljpposoylpsljtxpyaj 186", "enemwxkskhrn qye 338", "nvumraipglujuvuus hzbtbtuohsxgxg 139", "ijbbjqeizzdhygg exxgqbniesdgwbi 379", "bfigvebhbk rkqqyxxwwlmsdh 122", "fxjbycuvfqbxqi skixjwzvxdo 52", "liimezeamuk hxctvgwjb 397", "ojtopfofbueznuutvn mn 601", "djdaghuyesxj jhamotqslhi 138", "cwiozjaenjjpaskhsjc voeidbyxdifmfl 874", "sawxxjbgyukwlldc ei 281", "qgmupptstpjgy pzbae 9", "dzjn hftkmituj 814", "djdaghuyesxj aqy 752", "xxajrkwrloxmztokwga hzceuipp 205", "hjzz bpavtwavscnz 32", "bgykndce voamzphqeskah 591", "vftvfn fxjbycuvfqbxqi 203", "dpfcaqrrgbbhobg tcqcigqbdwwa 563", "j tvo 551", "voamzphqeskah hraizwofqa 789", "cqazisjpxc n 860", "rhftjezlbrfwmoqpy karxhllv 371", "wg qpy 935", "bgykndce w 494", "ozqcwf ei 292", "skixjwzvxdo dcwmhbeydoi 118", "fhxjzuvrorhunfyplkz nvumraipglujuvuus 986", "liimezeamuk dcwmhbeydoi 659", "d djdaghuyesxj 536", "hraizwofqa e 582", "wsnrqw ijbbjqeizzdhygg 717", "yylvaskjbxoyt rhqoocgprsnluu 85", "wtecciwahupnec votdfhlynzacoo 435", "ej msvanrqxvnohmmnlhsk 208", "itlaead nxjsryuyoyoveawut 19", "fyevq dfomaj 86", "hekucdjpa ypihgnltigvjuztssw 815", "jyqwexvxpchttuoazns ikofwynsbpyi 613", "enemwxkskhrn ypihgnltigvjuztssw 793", "fxjbycuvfqbxqi nvtoassop 489"};
    ProbabilisticTranslator* pObj = new ProbabilisticTranslator();
    clock_t start = clock();
    int result = pObj->maximumFidelity(text, dictionary, frequencies);
    clock_t end = clock();
    delete pObj;
    int expected = 968;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> text = {"ji tc i dh lfk r fy v me i tkk dh ff op ji e a bhb", "o f jaf flm flm qgj v o i jsr o yy mp k nh fq l i", "r w r ff tkk jaf l nzi o sy q sy dh a dh jgv a jsr", "ff fq wqz t me nzi ji bp o jsr a wqz tbn me w me b", "c yy v eeq wqz ff a e flm vp c q ji p eeq lfk oi", "lfk p bx tkk nzi du wqz jgv ern jsr jaf sy bx op", "h yy qgj e p ff e tkk o tc k vp c zju p b h qgj", "p ern nzi wqz ern nzi flm v qgj uy h ji uy o c bp", "da yy tc l oi fy flm flm zju c flm nzi qgj w bhb", "h wqz wqz ff nzi uy bx oi me b eeq uy tbn o jsr", "i mp yy tc fq nh q v bhb l yy oi tbn ji dh bx a", "nmc jsr k dh tkk o fq h l lfk eeq vp jgv ff h jgv", "o me q fq tbn vp me flm qgj c ern bhb nzi r lfk", "zju me tc h da bx ji lfk me tkk c l zju sy jgv fy", "jsr ff bp h eeq vp ern l fq uy ff l h uy fy c bx", "wqz nmc du o jaf q dh tkk nh ji tc b jgv h p o b", "nmc tbn sy me w eeq da qgj i k flm l du o l tkk f", "fq q w t flm tkk e w tc eeq wqz b p bx jgv w h bp", "k b da c tkk uy nmc mp k h h e e uy tc v yy r i q", "i a a fq du nzi l flm ji uy jsr fq bhb op b eeq r", "bhb f vp v ff yy e sy q p zju ji t ern nzi uy da i", "zju h yy bx q a oi mp a q uy yy fq p flm flm r ji", "p bhb p ji tc nmc w wqz t jsr me jsr e vp b k jaf", "fq op bp jsr bhb fq vp i uy fq o v tkk me bx tkk", "sy flm dh r jgv jsr nh r tbn da lfk q bx wqz v f", "fy jgv f fy jsr f dh sy i qgj v jaf wqz sy nh wqz", "du jaf e jgv q dh f oi h tkk me ern wqz nh i nh fq", "t v r mp op flm vp q sy tkk da a v da e jaf zju q", "l me da ff da jaf fy a eeq i jsr r sy c oi wqz t l", "ff ji a jaf lfk i l lfk i tc du p c bx bp me bhb", "o o fq tkk b l tbn c w flm bhb mp fy h tc t uy f", "lfk w yy zju r tkk bx oi h q jsr tbn q da h bx bx", "e qgj op eeq oi eeq eeq p tbn mp jgv jsr ff bp t", "h jsr q bp lfk zju q nzi lfk qgj fq vp wqz me o a", "eeq me b eeq h nmc nh tbn du dh yy tkk vp op uy fq", "bhb lfk du h ff flm r uy v me ern oi fq jaf tbn", "wqz h v k sy k ji yy nmc k sy t ern jsr q bhb fy c", "lfk t ji tbn w jaf lfk uy f flm lfk p r i tbn e k", "mp tc w r nh tc qgj w lfk a tkk tkk w nh zju eeq p", "mp tc jaf tkk w f c c r wqz k p k du bp bx qgj k c", "fy flm bhb e flm v vp ff c tbn fq p b ff b p nmc", "yy b nzi nmc flm o p i bhb dh tkk bp eeq yy ji o l", "yy w jsr fq c bx jaf r tbn tbn r jgv nmc ern sy p", "w r fy tkk nh t me v op e bhb tkk tbn da sy bp nmc", "jaf c r yy jaf tbn wqz q oi fq fq lfk w jaf e jsr", "fy a f bx t sy w wqz tkk da k da l wqz jsr fq r", "mp t l sy qgj yy fq w sy ji k w tkk yy sy da zju q", "jaf uy eeq sy tc p da k nzi q tbn ji k bx ern f o", "tkk da eeq du jsr ff bx f du f o wqz w dh h op vp"};
    vector<string> dictionary = {"yy : qe xy wdf os xsy xdx cjm vrb wx hmq kvf at zr", "b : nix qt ykl wma bu fsx my lp xmu dvd ab xpn hu", "i : tyq ra ae ul usz sfh as cah ym ajy ol fe yn lt", "bx : uqp bgw cjm kzm kby xuo pe gi qyz ui xfi jp", "e : pt blo rro zlb hj wkg wf iy ctz xf qjy gu pzj", "fy : wp sc gd rw xfn tni zrb ltw fo hoi ngd mq ha", "v : kc ywl au xn dtf sh lxm dbi byl xua de xoh o", "nmc : wf wyt ml gz efw ttz ltw of syi zzb lx vxh", "oi : ylz gqp epq dqh ccd bz jic skw jic qnd nef ae", "uy : od imq cpz qlx ky bch fdv nnz zky e j wob r", "mp : po y kl vh hz fy lul hn pg vyg wuq ecv ibx", "tkk : ta gx ghe aej lwb pui lgs gx wc ia nnr jr tu", "h : dp qit dvx ruk hqa r yi yxy phz uzw us ahx ovd", "vp : spk vz ene mzf uz yd pfq tzf xn wht orh nhp", "bhb : dqh xfe au hil fg xs ruq jax usz ybi sr hna", "f : qmj sjn dt qy cpz sfh s ykl yj gbc hsx bdk czr", "tbn : xaz sw lc iep ol lut iz xv phz rvo zcb sc ln", "nzi : xii qm b sz ufj mzk fq rai gg eu om obg kby", "a : rg uzw ca jqb nuk if eu qv erd qo tr kq zug", "ff : zb xbx uk rro ga b wcy mjy xcf fn fy hy lya", "lfk : ijz fd my kvk kz pzj au pyc qt qsj epq ni gw", "eeq : ttz qeb etx dj gl hqa tl ikf vr ol prr duu", "c : yqg zrb pws cjk qt hkn fek wyi rwe wli lwj syi", "dh : hhi jc zs ftr hhd gqf lye xpn ygy jvs xsy xr", "r : yj xu mjy ro al cu ehk xoh nud hfv xf bgq vvk", "ern : ok x vh ls vbb qjq fon luv kmz azc zzj tdy", "op : lt cyh wf dl lwg mep bl zw eha xgv pug hqa tf", "sy : o c esy prp pbh fga lgx fo vdw is svj mn luv", "me : jrf uu krj na pk jlu jyz tnu ul cve ueh atk", "p : cd up vj qh esk oh oqx tnv rcb dtf vdw vy elu", "tc : di znv xm fga jlu njm ad bs lfe lgs hzt kwj", "qgj : zev gp ol s bpc xwi qpr ho zi nna ikt utf", "da : wur ai wma vrz yq izh cd bal vnt qg chy xli", "nh : sti eel obs xfi hg ugi imk vds rj llo ofw ouo", "k : zts rl qg bu qul tnu clp gdw ho xtc xuq bw crw", "ji : lwb jax jvs nfk ls liu jlu wn zh kvk kz krr x", "o : kby eko dqh ehk te ow uv zvv mw hqe tzf cyq wh", "bp : gqm tzf ke ps ihu muz xua lpo ot gm kws dt if", "q : xq ov pb yo xfn uy mq lx mp jdb bfb ru wju lps", "jsr : kqu ldl wg mbe re u zy fh jr hth yx vvk lp", "zju : wyt gzv af qd al riu cws ebd ps pre ddm hbd", "fq : nfa vnt nnz vxh atk gp for wn smy aq bs jpb", "flm : krj gp zlb eqw wx mqn ui zh amk ucu oal qmn", "du : qh uv fiw gs bsu rj cw xht nua xbp ajp bhi", "l : kvf cu ily xfi gi ad lxc xdb gdw oxz ikt pbh", "w : rnr xfi gz vrh ytm jdb yz g ygn gh dbo am cqe", "jaf : qz ol gx xaz wnv tfw hqe ni jhh piv bal ckt", "t : ey uhd ct nna wrj ajp uk pea gn ouo ya ly dhi", "wqz : ym ca ru dly kf ls dyg ly dtf k hra hzt vsf", "jgv : cyh cbo hkn vz zlk nt eor vrz okv aj wdu qz"};
    vector<string> frequencies = {"pv qlx 348", "ev ogu 924", "fn td 113", "byl bwt 483", "mzk xr 801", "kri xuo 443", "cu evy 532", "ktm fq 144", "go lwh 743", "xhx ner 241", "sp oxd 827", "az ml 22", "arl vj 788", "hj ga 556", "jw bpg 491", "tgv vt 489", "gt wv 175", "ga kw 66", "dg ck 908", "be rl 532", "gu ueh 828", "dh xbp 600", "cjk vxh 688", "wxy rai 936", "cck dl 874", "ck lxm 596", "jqb jhx 270", "yb eor 901", "cyq hj 486", "mzf ltj 888", "npd uhd 144", "xow fka 465", "qax a 64", "tjj co 367", "mzf kw 111", "rhw dmb 884", "xx w 911", "meo hbd 563", "yxy cjd 774", "etx tlq 273", "rcb gf 507", "pgp dt 437", "ca qcf 65", "hjy ccd 343", "obs cu 942", "cjm ctz 943", "qeb nz 88", "wht sdq 909", "mp yiz 89", "bch lo 337"};
    ProbabilisticTranslator* pObj = new ProbabilisticTranslator();
    clock_t start = clock();
    int result = pObj->maximumFidelity(text, dictionary, frequencies);
    clock_t end = clock();
    delete pObj;
    int expected = 2828;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> text = {"eg yw qj ltu yb v gkl elg elg ams eqf bpw kk rcf", "s yw p l ltu h lc oj mt a ir pxv gn gn mt v uiz z", "cyx ixh z lc pxv ltu a owr uiz ln yb eg elg g d", "mt cyx jok pnr y pnr a b vyy eqf elg eqf g d ak", "pxv c uf uf eg bpw ak ixh ltu ub e q ams e kk g d", "ltu jok z eg gn q yw z p s pnr oj p y s mt uiz o", "o eg s pxv p hgz gkl owr z v l uiz ln z pxv elg", "eqf p ub ak ak oel i d oel v lc ams vyy s eg d rcf", "yw s eg z ub ub bm g y uf elg ak uwa ams gkl d oel", "p i d ltu eg s gkl pxv g a lc gkl gkl ak ir o v qj", "ams wdr yb b b a bpw lc gn ir gn owr kk gkl jok", "eqf ir i gkl eg kk v p bm yb gkl hgz owr c v kk ir", "yb v bm b ir elg l wdr i oj hgz qj a l a ams pxv s", "ln uiz yb bm ak eqf eqf jok ak qj mt eg a owr v i", "rcf uf kk gkl elg owr ak eqf d rcf uf pnr yw bpw", "yw eqf gn c gn gn uf ln q uf rcf y ixh e lc o jok", "mt ak i bm uwa cyx oj e eqf kk mt hgz uwa lc kk l", "gkl o mt lc pxv eg wdr c ltu g uwa gn ub ak cyx b", "o s yb ams o bpw yw p ir o lc e d q hgz jok jok g", "ir cyx oj lc eqf jok o ak pxv gn y y ams gkl q ub", "g yb qj kk oj rcf g gn uwa qj owr oj vyy s qj mt p", "uf b ams oj gn ir s oj elg oj uf jok o h g elg mt", "vyy ak g v lc ixh yw ak bm yw wdr elg owr oj l eg", "eqf ub gkl ltu uf oj ir bpw lc o uf ir y owr kk yb", "cyx h g z mt yb g ub o ub ak q uwa eg o jok eg a b", "uiz yb c a qj cyx z gkl e ln ak yw l elg q c v ixh"};
    vector<string> dictionary = {"g : gwk na it qwk mkw nzt aak ib la td ktw pbv vav", "uiz : zz fng cxv uap aj bkl fl qbj nh rtz njk xj", "z : iv ray ljx brb m bkl hvf mi tpw jt twe ge ru", "b : g pcm ak jap jc jp xq bwl vsk nem dhb ykx jed", "rcf : jln fs e rgy gva mv dn pu znt tz zb yh nyw", "ams : do nna cq gk mh uzt cmm dtc rj mji i di db", "uf : nf nyi f jl lch wv hj jl li vsj jz cx ek qtj", "i : ra mrx cfs ihs njb hp axy fx nna vsk qk dgl nd", "oj : psi ha fcn ikl rs vco dia cbe xe hvm vh gfk", "y : aii ps ulm uk bxp gd hff sz hir zmn c krq qtj", "eg : pv wdi vxa hia oa qm ii ai ava by ajp edu gg", "h : ft tli pgo ley szf pjp fii xkg oyg ven qbj jx", "cyx : hvm ru vuo gu taz ff ljm lse ogt bbc mkw im", "gkl : ijv vaz fpr ou bql zx qz zbj mj ovt fpr pdl", "ak : oy ivj tpb xl ozc crl id sne gu rrv qj ei iin", "qj : ak xtd abk vco dts muw zhs va vbp sqg wjr mvy", "jok : na qzj ghw ix mea twq ax xmt ebu rx hl su", "pxv : ldk re cdw inx bc pox zsk ir lyf nb bbc nv", "d : hkp mik evq wva jxg tpy so mkj lb oo bpx nwc", "s : id ank yaj vxa sw nms btd dba yxg wfa mig ar", "eqf : dpe ly krq zmn xl gg ap hia lmf kor zex pfb", "ub : c gse mcb np sg tr syt yma pk vrm cvm lch az", "c : qt myw va jb img hu qgn tg mwm zfe bql nf vbp", "l : km zul eov wgf swi hgo nna ae twg df cl xfg vi", "kk : srv cxd zfe gr uzf cdw yr iin rnr iwi zfe gg", "q : ajp kz gpf whw bf nms kf yts ash jx gky vpn", "lc : xx hmm iac ptt yg cfd kid ihj swi bot ljm ca", "wdr : iut ny zqf wo rzz vav ymt mj sm td lmf ska", "p : xfg za ca swi ajv jr nal vvk xvu tkr aii brb", "mt : nei jh ndj nuj spg qyt gw sne ho dof wx ovq", "uwa : xrl lr dpe h fzr vtt re ssz dt ru wsp vi kzq", "yb : zb hdz dug yaj fnc jfc kn ymt vv guw rqh qs", "hgz : g lgc bfm vl zzy eov ptt ljx wqh xgm wqu msq", "ltu : ndm xyp ybz pmz um afd kpp wza swt hrn zx", "v : ma uit kl evq fo pnf hn gw spe px bxs xs taf", "elg : mb uv rbi cdg ja kl gk jed mq ly rqh kc dve", "ixh : taz mfw tzd sw uhf rzz etn ucu ird zl opq", "bm : vgy srv en cui ea eov ea uhf wso ndm bsa ho", "ir : yks tr rgy hvf yen zr nlf iin gi yw vxl ycg", "e : d tyq xex iy jed aln nxa ft aii svu xe oh pit", "o : lhu wmv mmi sqk bsa ql zv a wci ql rpi it mji", "a : gvg vik ov wie fe cbe hla bln zx hd ank dq i", "bpw : wo nj ck qww nuy so jed vcz zf bs jr wpd ac", "yw : nem ldk wso gfk vl cvm ql cph gej nd qel bcs", "gn : fw rpy op bwl ror efv m el eqq mrx oyg juk", "oel : hk oxw dxi qp ak axy ucu ovt ea nkl mw p egb", "owr : wx mb zv ae mb yo uzf vvc guw ez gva la ecn", "pnr : eo nlt oeh qp uj jf hvr tr mvy ch jv dg m js", "vyy : aeq yc etn iog nz dzt bwl it mrj dxi kor zul", "ln : ov lgc xn lse rqh yc us bgq kw qm ai ui lup"};
    vector<string> frequencies = {"tpb jln 614", "ef ecn 24", "njb plw 82", "kz stn 799", "pva ihj 727", "cng zb 981", "kan p 639", "xh gyq 972", "ejz xsk 690", "yg txk 479", "iw fvc 824", "tm wtc 413", "pf gca 404", "d ppu 443", "xd ld 886", "qeu zc 823", "mbu bof 201", "uml bp 80", "rbb xs 484", "wm bkn 398", "pl elv 156", "wqe wqh 738", "dgb zyw 358", "lyz srv 241", "nsc xpc 496", "mcd wjn 824", "hgo xoj 657", "am am 912", "lp ywg 475", "yz xfg 459", "zra eq 67", "br pv 896", "bt gxx 468", "rie vrm 371", "vco vva 487", "tg xwm 467", "aum ia 230", "zmn znb 259", "tg ip 720", "kpd nzj 273", "by jy 568", "cvm tzi 899", "mk krq 209", "chr roo 682", "tc vic 479", "od sa 496", "ie dte 240", "fnc jr 266", "ed nj 137", "do rt 949"};
    ProbabilisticTranslator* pObj = new ProbabilisticTranslator();
    clock_t start = clock();
    int result = pObj->maximumFidelity(text, dictionary, frequencies);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> text = {"a tv lx kox vd tv f tv uh dhj c err s gql uh m mdo", "pcb rh c rh zbk a u kox qmx zg err dhj dr za vvp v", "o e gs a gp lxw o lx dhj u zbk mm lxw w qmx zid o", "b c tv olw qz v ya zbk dr pv ksq vd b gd yr zid qz", "ksq mdo o i err s gs u ya gp pv vd a s i olw za zg", "guq olw zg ksq olw s olw olw mm rh b zg s b dr o", "s ksq kox vd zbk tv a md za qmx b gs a bak zbk e", "dr a b gql pcb gd md lx m guq gql i zg vvp mdo dr", "sy rr zid e tv py fx i gs olw vvp y c bak qz vd", "o v b kox dhj md lxw lx guq vd sy yr olw za w dhj", "gp s zbk lx py gd gs kox bak qmx qmx mdo gql qk f", "dhj b vd ksq guq qz za dhj gql lxw yr pv vvp yr f", "guq qmx zbk md gql a md dhj qk rr tv dhj err gp dr", "ya mdo za e ya sy za ya qk qk i a py rr o lxw md y", "qk kox gs olw md rr fx gs zid zbk err gql zg gp", "bak dhj pcb lxw dr vvp m gd rh gql qmx zg qz o gd", "zg c u i err qk lxw v b pv u w vd olw pcb a uh sy", "pcb za b vd dr m i bak b bak i b fx c a o dhj u", "vd ksq md za gd dr u mm ya dhj gql b olw lx v dhj", "zbk lxw qmx b zg pv sy za qk m y err lx py vd m", "e lxw mm vvp v uh qmx v lx dhj b kox w mm s s lx", "gs zbk sy zg tv yr y err y gs uh za e guq vd uh", "olw qk mdo y u qk gp u mdo pcb py qk olw za olw qk", "i rr err zg y md gp y v md lxw dr s lx rr vd py gd", "gd zg e s py err c y lxw gp o o fx qmx olw olw qk", "dhj rh lx py gs vd y w c pv s dr ya kox yr lx lxw", "zid s o rr m e qz tv fx y pv tv mm pcb rr mdo tv", "qmx zid i u rh s pcb w ksq rh s lxw qmx kox err", "f y rr sy vvp py qk tv qz gp w fx rh ksq lx pcb b", "gs vvp zg o py sy mdo kox a qmx gs guq gs fx vvp s", "olw vd md za pcb za u a za gp w qmx vd rh a i zg", "kox olw gp v gd fx md i yr dhj gql yr lxw mdo olw", "pv s zbk guq w py za f dhj md dhj tv dhj mm a pcb", "za pv s lxw u mm md bak rr sy za pv guq pcb dr gs", "dr gql b olw za mm gql a uh md bak sy zbk uh err v", "uh b dhj u w vvp i rr pcb rh zg m y uh qk mdo lxw", "pcb lx mdo v mdo gd rh guq err tv w ya dr qk c u", "s mdo fx yr a m fx lx olw qmx ksq b sy e e s guq", "fx lxw fx dr kox ya mm qk vvp u bak bak guq pv sy", "yr gp guq gs py pcb c m pv za lx mdo za mm v v i", "a w gp f pv rr kox zid pv e bak qk mm a vd qz u mm"};
    vector<string> dictionary = {"sy : jba bju pxz iup zo rt uya pau lqz ceh pe mnh", "gp : cve by hmn cc ez xf ad ca eng zgy zci pop yd", "zid : cl cin sml hha qv je jkn kp kba mg aw ei wvd", "yr : fpk km cp jj jba nsn ptk usx nyf kpx nsi ql", "pcb : xyu kha ul kgx oec tmv fxy frs zxe zsb zl cv", "olw : umr ske bjd oi ll edj wzo erz sw mh he ju qu", "py : hmq qcx tqc it cjt ztq dmj wv jy ctv arh eiy", "vvp : dpj zl qw ry jer xy ngg eng irw z arh qmc", "v : tdg ki hy wo ohz jkn kma el rc tmv eng cuh bi", "dhj : wqs hgp bl xyu xvo fmq bcq xnb wia cyv xh", "s : of ejh wmr ssr cc ht whp tvt slt z itk vt ru", "mm : xj zm iwy scn cuh iw dws cc yo zzg qop gi upt", "y : odb nxz cr go vi whl bcq zfa gjq dgs epa jv o", "o : ak hlk ydx uky uut wcn ur gfg ts yuh epa vow", "zg : ehr eg aq je rtu yd wqs ok bcq sdy exd tnd ba", "e : tmh tdn urw ofn xwb sp bof pkb uj vs say jip", "c : tz dla vou du vwf xpc zj fou rlc zx gdo ruk h", "m : dob oa nwb ctv tj jvp uja bq ak sps dmx sdy", "i : sw gj yhh ll ylc omo tat mru tar dan az tw sij", "zbk : pzm scn of wag tgn mp lb oq cve mm nbb nge", "qk : rtu ch pz vwf mwe udc pp hs zzg hqz ja exn", "dr : ax wk zoe jl dht pb afd aq ex sty zjp fm wjm", "gd : xe rqd hep dmj wia kkt psq ji jj zuk ffd ey", "ya : amw icn zbd mkd uq zkb mty gfg tim wx xfr zac", "qmx : ydv ii pis df ymx rof wcn jzi pz ux jg lzo", "lx : qid tz egx bbo ip jip yn xyu aev ny oun nmm", "fx : zjp kun ymd say pl rj wwn bf ydx uq wbo mty", "bak : az sps bhr ry soq xqs wu nog oi kba qd twh", "err : u ps qry fmf cz io hmq ps qoa di aht u og uw", "rr : kma qh azq hj drq ft xqs mty nc oo wt pis dcu", "vd : wt fmc mkd voc jyu sty yfm drl bhl psq hub yu", "b : yle gv zs yn nx u xc fl llc nbb xay zks cuh zs", "rh : sc ck on mzi ilt hrj lhq uui vcg rm chj rr", "uh : cbr ffd pwe ez od swa ske wer zvq dj qxb f yc", "mdo : yx hvv oyo vjp mzi ize kjo bl trc kba lf fyg", "tv : oe viu bgb bzs re bhr ces wzp nsx enm exd dl", "gql : kz oyo yp zfu swe pc ay mb ut iw lc dmt nx", "qz : zh ehr to ws ulg zom al bf xg fpq pqv kl zk", "gs : po bx cl wzo ak ib km s gii jki lfp pav oi", "guq : sxh wk jki tim rs lfp esw df bd ly nge fw", "md : hu xwn n raz cbj gfg yzb eyh vx hrj nwc zuk", "ksq : qg dbd amx chj aw xko che zbd xr lct esw md", "w : zsq dob otf ms ai xms he pzm ipg jki zei ss", "pv : tmt dgs v cyl gmw dtj pb otf tip nj yru or", "za : mpo prj oy fmc cuc zx zsb egp ogz pop cq h", "a : iws svo tkw li yc ca zkb xd rc tx je qry pts", "u : oq tqo zsb sdy by shg vwf bc zqr qzf cbj vt ri", "f : ctf zjp tw hmq zci efq muf scn ji yoj udb dla", "kox : mdm obw lf uja xg uw nbb pa pop dan sm ba", "lxw : xrd xg ur rnu zks bq ptz ciw yn mdm dl es"};
    vector<string> frequencies = {"swy wji 918", "fl hkd 897", "io qt 606", "lpe kpx 138", "qry qx 351", "wwa nm 994", "mb wcq 80", "tdn ycq 915", "if mxb 172", "udb hcd 623", "na erc 994", "ly la 39", "lpe pg 704", "q tmv 318", "l vr 976", "nkq sps 244", "dl lrg 310", "mmw nwc 500", "ox sq 495", "pg ymd 919", "uq ez 164", "yni nt 132", "en uky 252", "xf md 648", "cl al 981", "odo soc 496", "ohl id 21", "jl ul 472", "tnd bo 539", "bbo qt 44", "oo tf 301", "nru os 864", "ifq gj 740", "kj cg 203", "ri uf 91", "yiw zq 37", "mty wmr 682", "xnj oyo 885", "zkq sxh 732", "jvp jev 766", "isq kma 544", "al ves 521", "tj ciw 270", "cae zwp 34", "fjz fnz 584", "mz scn 413", "vt xqs 118", "rr fm 856", "wwa kd 820", "hqj eyh 117"};
    ProbabilisticTranslator* pObj = new ProbabilisticTranslator();
    clock_t start = clock();
    int result = pObj->maximumFidelity(text, dictionary, frequencies);
    clock_t end = clock();
    delete pObj;
    int expected = 1263;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> text = {"xi lj gl uf pq b uo be m yh lr jo so ah uo uf kw", "yh ix et t hj f xm oo oo xm kd t jp up xg fq pg hj", "be pq h w mm yh xm pg mm w uf jo bw fq m jo bw up", "bw fx be k w pq l ns l ha yh a mm xq ah fx ns j e", "et yh xi xq jo hj kd up d t gl pq fq lj c be yh c", "xq mz mz zr be xg l so et t l kw ah xq pg w d xi", "uo gk w ah pg fq fq mz fx un zr hv up gl ha uf xi", "lr m an gk an fq ns xi a gk c e lj fx xi pg zr pg", "wh f fx kw d gk l m k un et kd a kw un zr hv hj t", "a kd hj d b xi hj xg b pg yh pq gl m e jo fq t f", "c h w et lr ix xm so k k b so mm lj a hj so an uo", "h d ha w mm bw t b l pg jo b ns hv yh hv mm xi t m", "f b an mm xg lr h fq h a yh et mz kd hv k lj kw ix", "be an kd so d jp so bw ix ah bw t c b xq w pq f l", "m j kd so l be jo d mm wh mz ix fx ah t so gk mm", "gl e uf kw j k j zr up b c ha fq xi l j jo lj xq", "an xm a k hv xi lr un mz k uf zr e a fq gk w b e", "ix be kw so lj k wh hj m pq gl uf lj kw pq xq t pg", "uo zr ix un e bw mm kw jo w jo xg h ah gl w oo jo", "e e up kw so xq kw fq mm et ns fq xi jp yh gl un", "xg e gk uf xg w et fx ix c gl pg kd un hv so ah zr", "t gl an fx uf an hv oo kw f uo mz lj gk ns d c h", "m m wh up w jp d xq d jo be uo un lj up c xm e so", "gl l ha k uf gk yh un ns jo bw xg gk m d be uo h", "h kw gl f xg jp up ah un ah oo fq m kd k ha so pg", "d t m xm a hv uo zr xg fq be gl k xg h e ix uo e", "hv so k kd gl f xi m hv fq gk yh pg d et an jp un", "so a d uf pq pg hj ha ns lr uo ah w m gl xq t jp", "m w kw mm lr et zr un xg yh h oo lr up fq mz bw gl", "gl t a kd xg d t k c et uo un ix c k kw fx e hv ns", "xm uf hj wh oo d lj m ns bw hv t k w so hv fq w zr", "xi mm j m xq uo e pg m mz l zr k j hj c c ha be jp", "b xi et d j gk pq fq uf be j un uo b xg mz lr xq", "oo mm d xi f jp et hj h xm kw a t lr xi et ha lj w", "t f hv xq kw zr bw bw mm f t hv mz xm up et gl so", "oo hv fx yh hj h ix uo xm ah ix an lj m l bw hj uo", "an lj d so an d lj xm b bw uo mz ix jp xi ix uo w", "ix ah m ix yh uf so lr uf oo b kd e an up xi a jo", "xm j uf c fx et w uf fx kw ns l un so hv fx lr ix", "mz k kw t xq up xg ah uo j xi et ha f jp so mm xm", "lj w lj up hj l ix ns ha k h l l uo a mm gl gk l b", "hj un kd mm et f zr zr pg a fx gk ns pq m be c kw", "mz jp xi xi fq an uo xg zr pq kw pg b xq wh yh ha", "xq kw be lj e so an mz mz w hv zr d mz lr m fx h", "so oo bw ix mz fq xg lr w bw gk oo kw jp lr gl be", "so ah t t k so an c mz xi gk hj j jp k un m l f un", "w d d ix e pq xg xq xm up pq an lr kw ah mz c a ix", "yh kd lr l ah b un xg e m xi bw wh a l gl ah w be", "c ix kw xg d hv mm fx mz k h un ha xq zr kd xm be", "hj b xg j bw kd xi uo ha h t d m lj xg xq a gl zr"};
    vector<string> dictionary = {"bw : hy k ia qyu obt szn ed gp lj khy dna jk fxd", "be : am qpi eha xu cs rb boz ovs fma ww mt ko fgd", "wh : kij hw jj hnv ia yjc yws dfp yk wtj rf zmv hn", "ns : cm auy te ui vq cpo yjr hf pzr zl xtc lu wey", "j : py bx wjg eeu fr gdm kor op mdl aiu kgk uvk", "lj : add hci ri ud pku kpf kc nvt su txf cus iub", "ix : qee rk fvx dx ju hmm na klx kx iub qor tu mcn", "uf : ail eln bg ifl ewb nkf qjl emb gzm ed rkk ge", "up : yy vny ixg kk fz qvp nsd add ehz oce sum cmm", "lr : gm el hx xxt mb fgd nga td gji oae ula bkm", "pg : kkv urp dl ng jp wqo ap ok su gof br ee kgs", "gl : vow ia xb osa xzo kns dsb daz tgp buo dsb pew", "a : nr kt gam n es xb fzq wcr km zm rl krn e rvx", "m : ovs vsd hn rrl nsd mq sgb fgo pm xdf sjj lxy", "gk : suu ii nw t wpq th lkp ek opf lst cmz vnf jhv", "an : snp cyr qor ej drt ey zhp odm zym as hxn yqf", "jp : of nk ep mxq hhr wph cm sab el ub qr hai mht", "h : otw jy fbm jxn wy yly tj hsu ofs qn ar prs bpy", "l : xed uw gfa ez fmc rmk lm qr hi mr eln fj eh", "xi : jz pu bpy kp kkv ziv ey yy rux vwp qrs fgd", "e : lk cmm mdn yr nuz ctf hjp ise ige tgc mc nta", "d : aw eha qd gzm xdw rwc wn pfx ku dc yw mtd um", "mm : yj dqs gsi uvk t emb oah uoq csi fma cgd plh", "b : qd tt plx zc qc auy llh p zmv ac ohg xgg iht", "f : ser wjd gny lwc hqy wq rq qcb sjc xq urp ob", "ha : xsi ama cl pws ez bp adm vfb dx vv umt khy", "t : vq kpf eoy uj gls de ufj nnc cb ogd cii ix bfm", "et : pgy aio qcb nko ik gn fpt bg lf dg gof mqy", "kw : nz ok nga ze r jeb wd woo tme an lbv ht xxt", "c : kz zpn je wxr ihr hc gnd aug gsi adm pq pr zuq", "w : cqh vc jj oba bgl hr iqp fpt xzz fir ten nfh", "kd : lxr mc nkf cdv xtr zak vq vj cu esy mi au lp", "hj : suu vnf ens dgw vdj it eyi upu oba wph kue vk", "mz : exg dht ppb bxs khy tn ief pkj ntm soi ofs vr", "so : ugd hju mcf dbx pu zpt mla ljc myg fnr mla", "hv : ap rkk uyz daz rrc ama rzc bhh gip cl yjr iu", "k : fn kym ddq bac zrs rux cz tmn cye tmn kpa so", "un : cl oe vd kq qf h ji suu du hv bye uvk im fa", "fx : wd fw opf ye oh mlr mi vs nf sjj pgy etj sx", "uo : at ft tn bq wo zl uvg gip fd fj gb mlr sjj q", "yh : tcv gr cnb nga om bku iqi vp z dc tqw wqo llh", "pq : du lr mhn gwy rn wc cd rzc xwd bxs i ppb qny", "xm : jhs ed nti ui nga ief gx qp v ot amr ntm fb", "zr : rq yds rzd jhv yqd x zhi ufj psd buo av an u", "ah : ew vny eln zl cjv mp gkr cu aa ho dl mcn ula", "oo : bkm mju scg cl slv gk bxs ko tcv jz cwf bto", "jo : hai f jyo hwm fy ku qos xbg zmv ec vo rzc pm", "xg : ppr qvc ah etj kkv jxi sk kgk hw hnn pbu cmz", "xq : flx yxi hoh ie sab umt ppk eut sdh slv oko", "fq : nqf xzz msv xgu wf azr yr ntz usp eo fw avu"};
    vector<string> frequencies = {"nqf zwy 393", "zpn zhi 518", "dln bgl 483", "rzc jp 440", "kbd hk 947", "ve mfe 661", "vag wu 285", "rv wg 249", "bbo o 717", "tg qp 474", "az cye 214", "fln lxy 960", "yix feb 607", "tqw bp 169", "yj ax 409", "mak gn 522", "hy xsi 892", "wvs dte 610", "gsi pd 669", "bd fn 600", "uv fgo 638", "tcv dvk 19", "wc zx 470", "ew lwc 462", "nk uye 711", "otw ghc 110", "qtx sci 266", "huu wcn 738", "mt lf 797", "n gam 487", "fgo mz 699", "rvd te 992", "oj uxy 428", "iqi ae 854", "aio wnn 237", "yw igz 359", "qor jxu 944", "rv ro 580", "msv jvs 136", "ku am 682", "ljc aqn 886", "xxk kq 905", "qu ye 73", "yk ki 998", "hjz ow 331", "eq zpn 60", "gva ey 230", "ol r 8", "mju uj 526", "fqq eb 11"};
    ProbabilisticTranslator* pObj = new ProbabilisticTranslator();
    clock_t start = clock();
    int result = pObj->maximumFidelity(text, dictionary, frequencies);
    clock_t end = clock();
    delete pObj;
    int expected = 1973;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> text = {"z zw r h rz y gy j gy rp rz hh m pd yk xx z fl vj", "yk yk zw rp av ex w hh vv mj w fk d r hh av vj ex", "fm tt ex rp tt av pd br in hp ex d t hh c z m zw", "yk wp y rz in hh in ex c a fw z xx uw zw fw v fl", "rz h m qf zw y v tt c h e p vj xx hp s fw qf cs rn", "js rz rz tv wp wp fw h js y z pd fm hp s n pd zb u", "pd w c fm z in p m wv in tt u q cs mj uw d p in fk", "a rn a hp p hp j uw rn c av hh rz v u wp a pd u rq", "yk zw pd v w r fw in t yk j vv rn fl z fm s qf fk", "fl rn zb fw tv ex gy s e qf zb vj u cs r wp rq p h", "fk tv vj e r gy tv cs ex zw wv ex h p br in rp rq", "t tt mj c gy e rp fm fk q m w gy u hp vj fl t qf", "vj fl rn e av zb rz rq xx vj v fw uw p wp rz vj z", "q rz r mj rq ex fm y a rn rz e h fl hh in cs fw m", "av d fm n yk tt fk e gy rn wv gy rq zw qf qf zw fk", "cs e av av tv q rz v x fk av s gy c c wp z fl zb q", "cs rz zw rp c m q x zb u m wp mj z mj n rz hh m hh", "fw a wp d h m h rp rp mj cs n y fk gy e rp av e wp", "c in zw uw x fl n fl h wv cs d in tv r qf u fw h", "mj zw vv av fw br zw rn zw br wv js rn m p js s w", "fk in x s z c gy zb in yk mj zw m rp hp a c qf rq", "fm fl tv r vj rp gy z t vj rq uw yk h rp br j c tt", "vv wv e h hp zb rp z u av n wp fm h fm rp hp j e", "q av z pd p wv v br hp wv x r yk pd rn xx e av a", "zb br h x p zb vj q vj wv js xx uw j z br js hp z", "mj j js hp vv c zb ex t m zb zb in t rp z yk tt n", "uw q w wp w wp n zb h yk fk t qf hh rz rn q t t p", "pd vv w ex fw uw fw n zb d q q pd cs wp zb h j fk", "x yk rp ex tv y hh t yk rn tv w fw mj fk m y br p", "fl zw uw xx hh a e fm fk zb wv wv fm hp s pd n tt", "w r uw e in yk hp hp vj fm e zw tv q wp wv uw gy", "a js wv tt rp fw fm rn u s j u qf t r br w fk fm", "qf yk y av e pd q rz zw rz yk r rq x vv fk in br", "rn p mj br h m z tv rq c zb z s wv wv v d z yk d w", "wp e fl hh rn mj t tt q wv zb p u zb w zb p d hp", "t s uw hp yk c p fm rz w fw a xx uw mj uw qf tv c", "w yk rz n fw hh tt js z z vj rp e fw j fk d vj m", "xx wv xx rz rz rp hp fm c br mj wp hh m hh q vv ex", "mj t v yk cs a j h rn fk z wv t hp yk hp q m uw y", "hh tt t fm hp a d j p rp zw j zb wv wv e j gy fl", "j fw cs uw zb qf c mj y n fm d y w av rz wv in c", "c wp fw in js ex p ex rp u zw tt m in c ex fl z in", "z z cs rz br rn w e t ex d xx gy z n hh w z js gy", "xx rn in tt t vv xx h fk uw z rz rz fl fw pd uw c", "tv u v a p rq gy qf x p gy u vv rz zw vv wv gy r", "br rz xx fw uw pd pd xx tv qf qf zb tt a fm rz yk", "mj hh rn hp s m ex x ex fw h u rn fm p j fm fk wv", "v z br c qf vv hh y tv zb tt vj c qf p zb gy av a", "fw tv zb rq in z hh q p rp fk m tv vv rp fm js pd", "h rz xx in c zw hp u v fw q w ex u rp s x p c zb j"};
    vector<string> dictionary = {"rp : kg dd wmk pi xz wt lnf au ttq mqy hqm k lxy", "wv : pyd fln eoo irn vky rp maj ov oum gtf zwb dwv", "d : fpy odb abi cb uti tla jr te av oum zjg lxp", "j : eid dj wd ot sh qzl isn xx rgx iw gm qge vhw", "cs : kqj yxk qh zn apo wpt sx wis saa thr iuc ehs", "n : ww maj uom wgh reg ad zb maj szm uhp lqd icr", "fl : thr tpz kla jpu eid nw hqm zt kcu lxs xqy ntq", "fk : ov mdp ko nn fwf fy kjj ik cz wtq ffr uo xxh", "yk : pv bcv jwc yrf cbg yb wt efs rmp men gx xth", "pd : pq lnf mot sa tha mot gpa yan sye bez qty sls", "in : suy sn p yp jju oyp qs ruy knu aia ci jv ddb", "a : exc eit gty bik lho rnd ka ipb yd psm ls mv", "p : f tb qwq vfi guq zpd d sol oxl unt bmn xeq oag", "rq : ijl wew ib iqf aia lbl nat ww amg v zeo ts py", "qf : htq zf n rvm hp a njm lf fow ia ze bp uts dc", "m : oc rlu lz eub pj lcx pu qe qp ugk psm wmk whb", "u : xpq le yup nj skd see xc cyp aw zk zyo dq gf", "xx : urm nyb thr ib oas od yy tnu py hqq udj g nw", "tt : kte nt hj ap lw sdd ty saa lxs cb smf uwr rul", "mj : hyq cc xb od ocf vo nwl tdv oed uwd bur hbw", "js : rp eej lz dvf afz ese sol bz aq gpj pm thh", "h : n li at xzd fx icy bfh uff pld vl guj xmo izn", "zb : hxx yer guq btp wcr bj oum tzt czp txu lhq", "x : lw ff pjl ye bs ao apg nqr sdv ptt vpa twc ig", "vv : zu ij ybk nv re oaf oh wsc wi kgz ln ezj ybk", "wp : zwb gdc dv fe hpl wi jju vfi prw ab wis gc", "fw : hyq fwf py kg psm pvl p zul au hhj xyx tr dx", "e : qge ybk hmf nqr ter pvl rp sbv d wbc nft oae", "rn : byq hpl uip bkq pxw idb ab waq ntq xal fcb", "s : exk mdl ijl ql nu irn hk mjb ijx smf ase gaz", "fm : ym qkz is n sdr bfh btp ao iq gw dde gry ly", "av : mdg mcs jji eit ird cwf kvl nft akr udj yy", "q : iyu dgo mep xs vl pld xlv gqe jx vu wn xld nwz", "t : na shl jkp sfl see do mcs sdd lbl il io mv kpo", "y : bzb whb oj bz lmk hp rb ub ie uts lk qic dxd", "v : fj rgc su yvl gil nax mjb nx jra tg qor tvw", "gy : tpj lxs wlo hpt nqf lz aju te sx tbr dx wtq", "br : xky hbr cr txv hs ew lf vls okc zy ros ov hbw", "c : qu xu lcx iv yru yk cl ao mj plg st ju fhw s", "hp : fle ueo yer xal xma vcw te yy kjn wa txu eq", "rz : sam wmy cjv vru nk yup wo ryk kuq mc gzy sij", "w : hbw thh plg ij esx n btr sdr xtw fwf nt or kgy", "vj : kuv yf obx ozi oiu rwi koy uzs bur tr dxo tla", "z : wzk h fg yb hj sui nv lxs qwx kv wxj kp nat yu", "hh : mj ql zz wcr mrv wlo ae dwv n lxx jji rpn mdp", "zw : ueo pfj rs uuf zo f da fy zwb eej yk dcm afz", "ex : vtc pk xtw pq ub f ly gfr ff saa fss zs sfl", "tv : il goj koy kx ovg rxi qp jy cz pvl eit vj mr", "uw : tha b loa av lz pj szm xkn nc ato gtb btr ff", "r : kxz gnm apg fcb bcg xw u vft oas x xjt rf gu"};
    vector<string> frequencies = {"ha iwp 375", "tjo aur 405", "xy ud 400", "gdc guq 201", "r kwx 784", "ma dwv 733", "mu lvs 674", "udj lp 257", "vwl ny 339", "fx syx 696", "grx xjt 792", "isf djo 120", "vqk cda 938", "yt um 127", "tcm tdv 777", "alg xsy 447", "fhp rpn 331", "rq gu 121", "ene sel 555", "uxc bn 404", "kvr mto 137", "t kjb 848", "kz hzv 661", "ye ski 305", "wq ie 235", "ir bkt 147", "dl wj 440", "jl mc 165", "rq lqd 878", "afr wie 19", "hbw rgc 220", "hnq gpj 564", "dq hz 161", "iq vna 801", "xlv ybk 366", "nn qkz 678", "fc py 510", "gkd ssu 748", "lmg sc 949", "dli sbv 671", "clq ub 544", "jx ib 47", "yd aq 670", "v dcj 762", "oa uf 579", "us cpm 980", "l rwi 190", "ls oas 862", "syx gzp 476", "ijh ron 715"};
    ProbabilisticTranslator* pObj = new ProbabilisticTranslator();
    clock_t start = clock();
    int result = pObj->maximumFidelity(text, dictionary, frequencies);
    clock_t end = clock();
    delete pObj;
    int expected = 2777;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> text = {"dv t r hl sx e n b sx z dv ik b u as lz d j my u", "sx hy gj z t w g py bz my u gj qn ik lz sx hb du", "d ql hb ql b a hy dv wt u hl ex gj b dv du zv my y", "hb y fu qg e e ni en n hy ql hy f zn zn d t zv lz", "t en g lz aq a hl t ql ni ql hl u zv lz ni ik u u", "py nz u k b nx r b lu t py i u vu zv dv as r b gj", "en y qn as nz du dv d nz qg b e as ql lu u n nz zi", "as z bz o o sx ni z pt zv zi py n ex ni du aq vu", "sr lu qn t u w y bz z sr ql d ex zv k gj en o u p", "b k nz dv zv ik a gj aq d nx hb nx r k g z zv nz", "sr lz zi zi k sr t vu ql as fu ex ex zv aq a ex zi", "vu p b y en ql z nz hl ik zn ni en t y as lz d f k", "t z hy zv py aq gj w y nz pt zi ql g n gj my ni nx", "py ik w a e sx du en hy zv t wt bz zn sr vu j sx", "t ql py zn du p qd py bz g hy n zv sr ql py t g hl", "dv zv w d hy zv z pt b nx sr f hl u py bz u bz g y", "z hl b g wt nx n gj f d w hy o z o b ni nz z qd e", "gj t f py ni k nx as k hb gj ik bz w qn ql qg qg", "n y gj b fu ex k u ik pt hl py as i zv i vu qd hy", "i a bz zv hb py d e hb w vu gj r sx sr aq nz t lz", "a du aq w f g ex en t d g my i qn qn gj du i py g", "z n ik hb p u qg k ik z qn ik z i f b hy nz qg n", "a vu zv z d py hl lz en ni hy qg p k ql o aq z vu", "r r f wt y gj qn k zi aq u k ni y f ex my y du ni", "vu zi n ik hy a t sr pt du sr du j f nx gj qg du r", "j z hb hl fu f py nz pt z p f zi ex hl as zn dv ik", "g pt dv j nx qn pt zv qg e e nx ql qg en i p z u", "n du gj g pt ql e nx ik t zn ik u zi a bz du a wt", "zi lz e i i o sr g o hy dv vu qd ql gj f fu nx aq", "k my as p z y qd y hl hy bz qn bz ik b nz t qn py", "j nz k zi nz nz o aq lz ik d pt gj gj as fu qd d", "lu qg bz u pt hl hl e wt j t vu ik b u vu fu sr e", "j e r en as nx y e py pt en qn j w j ik o r sx qg", "zn zv py a t t wt a r py sx en b pt n hl my f vu k", "z fu wt u t d hl bz py b b t nz pt dv fu ni a hy", "a i z zv my w p ql lu dv o qg hb w as o vu hy lu r", "y zi u hy hb w y f ql d ik my hl ql y hl k pt en d", "w fu w pt nx o lz hl qg as b z t i my nz hb qg k", "hy zv r lu zi z lz nx n ni qn qd hl j g b ex i t", "py qd ni z a g wt p du j f lu qn ql qg qn y dv hy", "lz w bz ql t sr pt lu wt nx zi nz sr hb sx dv sr b", "r ql o g py ql du y j j lz o vu p nx sx my n du zv", "p qn zn b ql t qn ik hy wt i nz sx hy f gj py t sr", "hy py o hl r t e du e sx qn lz my ni gj fu vu w sr", "f bz lu as zn zv y y n sx bz qn ex bz zv ql hy pt", "i hb ql u z en en vu sx lu nz f nz lu dv py hy u n", "o qg p pt nz my e f qg vu u r ik d zn as nz ql g", "a t n sr my fu hy o sx ik f y b vu zv qd p aq w aq", "z py dv r sr zn hy u en du w hb fu du en qg qn bz", "lu py lz fu d n z lu sx my zn z lz du ex t u b nz"};
    vector<string> dictionary = {"e : hyf la lai mxm rk yns jbj hzh pxj qe cva rzi", "p : i lqf efd sa wu ypk lh daq yqj tpt dy ur hfk", "d : wo cnv us jre wai xwk nm nuh jru kg vwu zox wr", "dv : mtj oov ged bvp ra gp ex lsl ugx fs psg ry", "en : xa stp otx nkl yf tb p hop pq vef pse rjs em", "b : dgi fda ro mo jx zyb wul dcx cnv jmy wxk eq jo", "ik : ts gn jre iti aog yqj hs xwk zcf fwr uuc dy", "nx : me xgn nc ukj tb bbr no voa hxl fmx zij tsf", "nz : xjd brd jdd ef mrk iq hcs qr yuw zo cpw pf bd", "hb : otx um dz hd uc tlz xgn mpw ska gmy xfd krz", "k : az fwn xxi kh eej yyu fu nxt ia kmv ff hj dm", "zv : mo jih egi f nt yqq dt owe tq vqb qmo bf wcq", "wt : qg kwm lqb kbh fy mr gtk jo sw nv wyp cw yeh", "y : bwi xcn ozk rkm ek mdx qe fgl yj hc dg ztu og", "z : dlf js bxu hyf cx hou yo uzv ru h lh ft fk vox", "r : g mmv tmu trh clu yvy cva sgk jhq yns uni eso", "zi : ucz lgw fvl wxk mtj eke sja jb kfu cva nt yfu", "ni : wdg rpi grg pyh gm qe tiq rf gcc ulv q oov", "o : qec vp vc bga gja ukw pk bi aqx am hg jp lo", "ql : qlv wkl zyb awj eoj ugy eyz wai fe ync rva", "n : ath iyy hmr trg ur ctw ew xuy mrk voa wvr hxw", "i : pyh si gt tbc laf xc bd xrt gcc iq dtx fx idc", "ex : tl rkm bei qv m ib xyg ska uzb sgq izc qyg", "qg : qyg xn fw gd yx gz iff dfq az xc pr lt sxe", "hl : sm by kp ieb wi lay ju qcn wul ol cl ihu qje", "gj : upl ikr ta su uie xcn zek vu xj trg hmr tsf", "u : im fk gcc ofe wvd rt eoj uub sh ofe rl qa kfe", "lz : yfp rse pzc ks eiq cv vs za jb ve tox nna rvr", "my : jic oga fn im xuy pfz fa kin xpt qx gp ztu", "zn : sqe pcf tuz uhj bmp ab au ru qwb vky jhq rhj", "vu : rlx jyf pse ctw jr gxr ie ygu tlc xa dfq ulv", "w : ziu lma sa oie jdd qot ieb ha bso bs ncf mr vd", "qd : vnu rzm xb jmy lkx xlo vw mx tof pci uhj ow", "g : jrz bei yla yu rmy qzl fal v vky gg dek qv bqn", "sr : hxo fqi vq dbx eu egw zql yh bir zhq gli bdn", "as : gno xty zb ulv rjs qmo vef eyr xi fk ygh bwi", "f : izo cl fhb dz ffn jq chp ut dh kyh uhw elp prh", "fu : vne tx aog io shi zmb gn kt uzj bf lay gl izk", "j : rhj wh pbp xjd ts rva tz ek la qa vd ys izo", "pt : kjy xt qur klo gvi syh tof nig yh lvh hnj djc", "qn : pbu vol jq hz z efd abp cnv kui lza ap fal nn", "hy : hyz me vgy yf ffm zq gv ap sm mz su idc taf", "aq : olw hfq ses xik iel eiq kh mx rse kl lh kot", "du : rzi pwa php tvx jih ux qbe hhj dh zh yo ogx", "t : ghw kdx kin usl pj olw cyh cv wfg ir eda ovc", "sx : aw vdy td eyb zju zh st gd mpw kbh uja t wy", "a : ng ka np cf vp rdu gja hdv rbh eiq nec xtd xrw", "py : g ti ejn ugx yda wfv if sys oqr znb uni wq", "bz : wpg nul wg cp d tlz qk zst yz xf wkl sx jhm", "lu : uc emi eso qrp dk im jjo lkb ux pcf dgm kfe"};
    vector<string> frequencies = {"zz ud 115", "qk xtd 965", "gmy tny 978", "vd sn 687", "stp im 667", "ug lma 36", "wu tq 998", "mj nxt 142", "ovc pl 854", "hag st 957", "ywj ihg 548", "wxk xfd 321", "nea bp 874", "ah zij 15", "cyz ee 15", "iyy hfk 865", "xpt kin 276", "xlo mzc 717", "naf ghw 646", "lo gtk 649", "grg pfy 643", "ce yqj 765", "ypk jw 999", "aog atv 987", "xj sya 763", "nt jdd 44", "dc bwi 744", "wf osq 853", "erp jel 842", "hxw nq 542", "frs dr 707", "csf bso 655", "ucz wyp 871", "ztn w 586", "vvq eij 116", "rse pfy 306", "hdv gvo 138", "gz ee 515", "fhb pg 582", "pj hzr 456", "qlv rsc 100", "jmy fc 255", "cxb ygh 898", "awy zmb 243", "rp ib 156", "uja wfg 23", "sja tqy 256", "wl fv 953", "rp ts 483", "zb ea 484"};
    ProbabilisticTranslator* pObj = new ProbabilisticTranslator();
    clock_t start = clock();
    int result = pObj->maximumFidelity(text, dictionary, frequencies);
    clock_t end = clock();
    delete pObj;
    int expected = 199;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> text = {"n yk l hw jn gg yk j g n lb eq hw bd n p hz f yi", "w hw vr lb gg ja pt ps b vr ps t hk ey g vr ey u", "lv mq yi y yx o bd l n t w bd hw v n h mq mq hw s", "gg v l gx hw un gg np eq o s nf l t z gi yi l td c", "hk a nf z ey h gg td gv un un l u jn np y vr t ps", "ey v np g hw fy hw bd a ng yi f gg v yk eq ja o fy", "l j j p gg yi lv vr y gv z ey gg ey yk gx bd j k", "s k y td n td w h hk lv ng lv np f j ng gg b yx yk", "j z t k gx td c ro g mq g xq g y np hk yk lv n un", "yi u jn g v b p j lm vr lb np l pt z ey n hz fy nf", "h u gv lb k v v b f s ja ng bd mq u y xq s o td fy", "vr ey n gi jn hk h nf fy jn s t c hk yk gg h k p", "f p c vr u n mq gv gx c g td np un eq t eq yk a me", "c bd hw ps mq gv h vr l ps ps pt p p mq yk a eq lm", "hw ro jn gx t g u np h c hz t o yi ps y vr me hk", "y td g lm fy ng yk y l yi hz lb f yi j o ps td c", "b ey td b hw yi h yx k yi yi eq ey z ey eq jn yx", "hz lv ps f ey g hw w yi jn s y a h c ey yx np y g", "me k np ja np hz gg gv j y ng ro s f hz w mq ja yx", "yx xq me ro a l u gi nf gg h gx g lv hz yi n lb gg", "t nf yk gv g hw hz np gi ro lm ng me gv l o ja w", "hz ng w p w gi g me y gv gv td yi gi y lm h fy lm", "lb yk mq yi a gi z ps n f ro gv f yi gx fy u p lb", "hz un t gg np f lb ja hw gg gv pt gv w p ng lb u", "ey l xq nf un g hk ey bd vr t ja un bd hk lm yk lb", "eq h u td a lm c yi lb ro a f gi np n ey lb z w t", "ro hz c ja yi nf eq ng gx bd np o ja ey eq xq j eq", "y g gx un s ja gg hk gv ja gx jn ng y z fy f f j", "ps lv hz t xq o l z f k lv hw lb lm lm g gv a a o", "xq y a f fy gg me c np n n ro h z f g lb hw xq ey", "lv me un lb xq me gv nf z a yx a pt lm hw un fy n", "h yi td u b k gx gv u v b ps z jn y nf ng jn lv gx", "s xq s yk l v ey nf np a o u gi k lb w ng b vr o", "z o lb hw fy f h nf hk b gg u o b yx ja np w f k", "ey yk gv b j np c z hw yk np ps gi mq ro n j g nf", "fy l yx gi vr u z yk eq lb g c gv me ng y gi u lv", "nf z bd gg td gv ro fy td fy nf c yk lv pt y ja vr", "yx b j n f un gx fy yk np hw eq bd u u hw n gv l", "ng lv u z jn v jn hz z k l lb bd ey lb ro mq bd hk", "me vr j z eq gx o yk xq b w k j td n ng b eq yi lv", "yx fy h td vr yx jn hw nf mq ng hw p jn gx gi a un", "c v l jn yx gv lm ng lv jn pt gx td nf k b t me gv", "a b lb h yk t ps eq j fy n hz yx lv k ja nf s h pt", "ro s fy gx vr ey me w eq lm td ro yi vr gx pt eq", "vr yx np td yk h gi c l yx hk gx ps lm f y td nf", "me k ey np ja lm vr hk gg ps ng hz p hk ng yi v o", "s o ro pt td gg ps f lb bd t un lv v v np h hz f u", "yx pt yi bd j yk gg ng w c lb un y hz td lv hk lb", "eq xq f a np v hw c yx t a yi ey p w ro hz p lv lm", "un mq xq lm un xq k ja u eq np w gg y n f gx ro b"};
    vector<string> dictionary = {"un : zpl shp fy uv fjs ixy ibf yt dvi yap gtp qgz", "z : cwp dtn ujo re lj pm km kgd ihy uv ny yo xlt", "yi : qt zp vzj pst lbf lze wd shp rc id yx tz at", "jn : bul ct diz i bzk mrv me gq otv jq ebs kz ieg", "n : cj tpv nw cl xvs dvi bml afh kyf dtn jfv bul", "ng : o li wp gqw wl esa el nqg zpl cae ylx boa ynt", "lm : ih tqy ib chu vzs vhr ia zvy de rc vhd mbs", "b : dp vh qcz vip cn euj evy il op ny uq y jfv gnn", "k : jw ggt yh ngp xvs fm rj szo fqh urf nqg fjy xt", "gg : ajo dsm vva nx wmr hqt qbd tnl jyh qpt gn hqt", "me : gt il inq kex mp ntm hq eio eqm jyh jfv xon s", "lv : mj bul pqj xea crr go ve ndh gao wtv ixy boc", "t : glj ltk zbf jwx ny fbg zmj gfq li tp gk aru qq", "mq : mrm my se urf fo fjf wox rye fbg kms cnp hac", "bd : pzz mnm qs gob rbw pm bzq jt gwv ja jmo lyk", "hz : rbw bzx hou fjf ddk nc yxy vhr kzu vcw y zi", "f : bv bzx qyo ynt dj pd tby zd urf qg yg sz cts", "ps : bog ntm bzx otv eex pxs av xg otd sgu th vzs", "gv : zmh tr hql gol ly qz vua xme znm ht pj oi eio", "hw : iwy fjm yza ons tyq sc mne uow flf fo jjj gn", "lb : ld gob xgf ok hkk ajo lf eug pn zfb xt aok", "gi : ho bog gn qh mw nnk lcx enn gfq ai bv otd zm", "hk : lbf wd dtl ujs tw tz zfb lm ev yx iyq ikv may", "ro : f hpw ogc ujs nfz h rj gz xhl ns boc uiz gao", "c : pm cje coy wbz ri jyh my mtq wj jm dx prr fjy", "ey : fzn fjm ase zm by ui cje ijg pxs zag giu hn", "yx : zag mnm yxy nxf qxu sj lzo ovt ib byw mnp rzm", "j : dx wx ajo rx pzz ihy rm cw il b xbg jcz zbf", "w : aru vzj rng aue tbq jmo sb hu fe cts ok ngp", "ja : fo waa cqk kk pxs vqt nfz ce wb xvr gol e pwh", "h : qnf ipa kld fn rye whj lcx fbg na mp fjs bx qm", "v : ieg ol vhr jt gv umh jjk tjq vva kgd ddk gtf", "l : te uhk ell os ruy fd en mrv d gur ug bhf jf", "gx : tjq de xgt mne svi ryb au vtt vip zi ni tmp", "xq : qcz pl dgz ht je esa ywd qgr okf fn ihw xg", "td : qyt nho sok owb kg y crr eio oq vqt ed np smk", "a : e aru wj kp vhd jjj st nda pb ew jw at zu oca", "g : daq xtc ikv o sji lz xan hn oyj yyf esa w ewq", "yk : ug ijg us hql zyo eug cnp u bq osl qpt tbq", "u : ld daq xbg pl chu zu os abd gtd cgz pb ywy vp", "y : be hvw mt urf ase yo zn ntm ogc go zn bx mf", "p : vbw enn wo nfz uiz wtv ucd na fp nez boa bog", "o : uhv yg enn xg kgd ucd zw zgk uj ase scr fhk", "nf : xyj gx ir jm dz zu leb na hv xan cf qyt crr", "pt : kqg ev rs waa jx xhl me ixy ebs rj upe tpv", "eq : zz nj cjm qft edz jrs of zip jqu ujo mq gvj", "vr : hch zpe zp ycz shv ujo xzn ngk yo zlp boc rb", "s : cw my qb cjm rbw jm sz pi kg cqg sag py mrm sj", "fy : vc whj otv zfb qt u ga gk gtp zu gk bg gur", "np : dh sgu dyo rx hkk zz r gn kex gur zip pwh zcs"};
    vector<string> frequencies = {"bul fwu 920", "bm lu 969", "i uj 84", "cqg keu 396", "gbu eg 412", "sok mp 981", "rc cyx 103", "rc rzm 549", "yd jrs 446", "xh mbs 180", "oo yap 195", "yt w 228", "ku of 217", "hoo spr 637", "eiq wbs 18", "bh cje 547", "heg mne 408", "rm je 176", "vx gk 201", "dsm nnk 574", "gq szo 944", "txy ga 755", "jjk kld 542", "ns glj 330", "okk af 621", "lx hd 72", "ogc qgr 190", "wbs sp 360", "ycz sy 516", "kwn jh 363", "kms zk 557", "st ph 529", "sx li 256", "sj otv 139", "ryb xlo 29", "byw hbc 396", "aok qq 699", "fhp hkn 564", "zcs zd 594", "yg jer 336", "brp oi 282", "ju ngk 795", "vzs txy 284", "uvt ix 503", "gxi zma 993", "ob kz 215", "hwj wt 650", "uvt vrb 307", "ons pxs 998", "qxu eex 328"};
    ProbabilisticTranslator* pObj = new ProbabilisticTranslator();
    clock_t start = clock();
    int result = pObj->maximumFidelity(text, dictionary, frequencies);
    clock_t end = clock();
    delete pObj;
    int expected = 3021;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> text = {"ip fl j cn ye l cb ke jp eo v cq zf ah ks cc zf tr", "cn t zy ks fg dk ts ru xy t sv cq cb ru g z tr pz", "t ye zy v j cq xy pz sv cc ks nw u cc ah y d ke cn", "g ay cn nw fl j cc ay t kv ke ye fg sv ts t ay cq", "w dy ks xk v ye zb fy e ru ys l zb k w r ke y ah", "fl ke c zy v zf kv o kv tr fg ru nw g e tr ip ip k", "s o eo ks tr nd pz kv z c dy ru p fl nd zy s u ye", "v fg dy cq cq sv k y ip fl zf kv z v cc u cq cn fl", "o w cb j ys cb nd fy sv fl nw q pz eo j ys xk sv", "ts kv u cc eo ts tr xk ru eo nw v w u w cc ye nd", "r fg fl ye ah ru jp ah tr g cn o s ts c ye xk xk", "nd o p ah c nw j zf ru ys cq dy kv z nw u l t w nw", "xy zy ay c g vm tr t tr tr fl ip e cn t zy jp ts", "ah l cb g xk cq xy y j ah ip c e w zb r xy vm fy w", "p g o xy vm ip v u zb d ys y ks fy p ip z ts e dy", "p xk y r t v nw zb u zf nw sv ah cc dy ys ys cc eo", "t ip xy xy ts zy ay j y nw z s r zb k kv sv u zy", "sv p c cq kv ye u s vm nd d zb cb ks nw p cn ke zf", "ip pz e ah zy dk zy cc y q fy v r xk tr ys k vm ye", "fl r r ye fl ys ay fg ys cb sv fy dk k zf ks q p", "g jp ip cc zb cn ts ah vm p y y e zy pz ye jp dk t", "j pz cb g cn l cb jp kv dk q w ay tr u ys dy zy nd", "ys fg zb dy e ah tr pz s kv fl xk cn dk o v nd fy", "pz v s fl w j ip xk g eo ip z cc ru k k xk d e ys", "tr xy fg d jp sv zb v jp p k kv p xy ys tr t z sv", "cb c y cn w ye cb w ru nw ay g fy j ke fy o pz dy", "dk nd e cq ru cc tr fg o q fl q dk cc ah ks u g jp", "cq dy nw nd ru ah zf ip q ys sv j xk r j zy cn fy", "jp zf xk ke nw pz ye ru r zb eo ru pz fg r ys zy", "cb zy z ts p ip k ay u z t xk z ke q cc ay ks zf", "c kv xk ip c fy l jp kv l zb j pz xy sv ts xk u xy", "zb j zf l o e p e zb zb t v kv xk r r fl o eo k vm", "tr fg r ah dy p zf p ay dy kv cc jp cc k c cc w zy", "ip y jp zb fl zb vm u zb fl y jp z pz kv w fy eo c", "jp cq fl ke ah eo fl c kv ru z fg fg ts p ah c kv", "r o ye u sv zf fy ah cc p kv z nw ks zy ks xk z nd", "w t j ke cb fg d u q kv ru ay xy xy ah cn j ay cb", "kv xk vm e o kv d p r pz nw tr w s fl kv q nw g ke", "e fy ru e p u cc xy pz dk kv cn zy dk u zy ru q jp", "t ye ah nd jp sv k u ys w ks zf vm ks cn ay t ip", "y pz w d p p j nd ip vm z q ye zb ah e jp d l vm", "zf w xy fy zf tr ip cc ah g ts j s ts nw jp z nd q", "s xk o cb l ye cq p cq pz j cn zf u xk s ys q kv", "vm ke w ru eo l c jp dk ip pz cc kv g ay o kv dk", "jp cn w pz dy w xy xk cb xk ks cc vm cn g p t w nd", "cc ip z sv xk fl nd l ay r fl cb tr dk k ay ys fy", "xy pz fy nd cn ke nw y ye nd ru ks u u cc ye vm nw", "fy c zf nw jp nd ip ah u z fy jp fy ah fy l cq c z", "ip g xk ye fl p sv ay fl o ay r ru d cc pz e kv c", "xk kv nd zf jp kv ip ye z fy sv ys d c y u ke t ts"};
    vector<string> dictionary = {"r : hf iw zd jb yc sn vb qi wq dy hc gj zb gc tw", "cb : pw nt tc al oj ew gr xq sh du of la um gb yo", "jp : ng pb pt xr ce r ll tr cf yt jq ra ww qe ab o", "u : ve zo au zg bz iw ej jz yn gf yo cv ij qn ae", "w : io sq tl od en fv wb wh wa rj k ar pi am p ns", "z : zd td ww aw fg ka zh og wc wp mj kx ag ur xc", "d : v kd gc nv v bx q uu cu zi je pu zv lj aw ux", "ks : pf ux dv et kp lf gf ab wd py gv pe hf oz wh", "j : xa wm gr xu ho re tx fk ft vy ee wa tb zy vb", "sv : sr we aq ja fu rk xl xd nv so zs qf iy ac vt", "nd : ba ye hs vp am sv kx rz sz fh el ux cg mx yl", "t : zn lp bo vg vv ce lw am gj dm qi ne wt xk rh", "k : fh xu nq lz rs sv on mp pi ia rx yx za vb bo", "fg : dj pt wo g ab oq ox op wk ze ne sa pq gj pm", "ru : gi y gd sr q hy tv kq us gm ke lo sj nm zz rk", "cn : gq ac ub qo gh ey sn sx lh ig ij vu te ho kb", "g : uq zu ql wv h vu rm sj uz wr ye sn rh r tq uc", "zf : wj bc mq wk fh gc bq y kq hr pv yr zf ue ct", "dk : dv r mx xe te w go ja ce ps mx wy el sa jy nf", "q : be gb fp zr nd kj gl of jk tc iy yy wi nl fj", "o : ik nd ml vd ub pf oj vz ua yf ho lj pi tm ga", "fy : vu gv ww pk so pr sl vm yw aj et sz hd ww bv", "kv : ca du hi hm wo xh bd up nt yf yg mo o wo zo", "ay : ag zs fs v gx wt wp g of ib gc wx bl jl em ln", "p : jf ny ye uy wy v tm ml wp fo qb y at rf hs gk", "c : he pk ne mz tj ap eb ay sw sj vi rr vh eu zk", "fl : nh qe yj iv ny bo si lt ws vc xb e hb pq sc", "xy : fi el dz ez da xw gd ta bl ib ai o ii gp ea", "e : sx h hs by ik ht ez nb tb c he ep lc jz pw ih", "nw : sf ej bu zu kp hc hs kf bx lt yk do ks wo hr", "ye : su wh dy py th jf pk pv bs bi br sv ce kc nq", "eo : hg eg dt bx bw ig zf vl qg bs it ds vu oz lk", "l : yx fw xy bo vq xg ig ev us om se gx nd rf qr", "dy : zz iz lo xr tg do pk kg rz jv mc ud fu h kx", "ip : jw iu wo om br gm bl yh le pi rf bp fy wh s", "v : cm ju xy vt ct zw ca zv hz ih fc yi kl bq ta", "zy : ht jn dk oj oi hg cr wj yw nm eo xu rj qu px", "ys : lb od dz he ua wt ur ww om cz ct tg tn yn uk", "pz : nv jc lk hz ic xn tg zr nw wy xy um le ld yu", "cq : vr ox td vn rz xj vq dq kf ue ia ia zi hn ki", "ah : bu gb ua oo cz ap pa xl my jw rn yf xh tc hp", "zb : wr qy rm jm zf ud sb ae xs ad ey tb xd yg ld", "cc : ls iw gr xi ny sp mu nk wg wh uf nu fz yt rb", "y : fh ps qt am fm hq xy wy ts ny xx vn fj tu jo", "s : fh fd rc ah ux ky ab mg vp za th vi v hv ku cr", "ts : cd wb nq mj jg ep xe mi xg ha nl yi os uc ev", "tr : kk yg pe ja bu ck bx sc jg zn og zr qh r hk", "ke : ef jb xf wv do ui ll ot ey zr bt fd j st kz", "xk : zj oj r h fv uk sf uy zu jf bo ze jx rx hq ua", "vm : gr gv wk wx xo ms mz tw wf lz za fq gm gb f"};
    vector<string> frequencies = {"co se 668", "gh wt 474", "w gp 446", "jy gx 929", "ur uj 787", "ru h 182", "fx li 867", "go ve 799", "gp ej 434", "ch jf 20", "wr zs 57", "yy lf 452", "nn ha 838", "qc xp 270", "dh tz 337", "au ln 637", "cs mf 16", "kg if 699", "gd sd 760", "he tr 644", "fl ue 63", "jc ut 688", "sm nz 784", "ck zi 212", "wg cp 331", "mv xw 852", "yv r 691", "xb la 383", "ah wd 533", "gm li 217", "aj gq 319", "ta wf 504", "mv jh 97", "bq yc 228", "pw ns 75", "rm yx 28", "sd pu 980", "sv ek 1", "yt yd 607", "th nm 395", "dg ah 527", "wq vs 967", "kp ty 982", "iq ih 809", "p ji 629", "lt d 620", "xl np 331", "ca gk 55", "vr uy 308", "ot sg 810"};
    ProbabilisticTranslator* pObj = new ProbabilisticTranslator();
    clock_t start = clock();
    int result = pObj->maximumFidelity(text, dictionary, frequencies);
    clock_t end = clock();
    delete pObj;
    int expected = 7245;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> text = {"o m u g i l a g k j t g n g i i q y h q a z d h s", "e i v v w w e i m s o d q p y q f m j n s n q s s", "e o u b w r t q v d l h t y l q n g t o q i u y w", "p x z e l c x t p p l x w v a c b i y g h a n t f", "v l j k j z p s e y d z k h t k s a m n a c o j r", "z g a z k l o i k e h p c c l v j k w f y h t v g", "u c s l f r n y x v v g n f j p v q w e v n n e u", "b j y l b p x j i h s d s h x j u h u w f j d m q", "h m k h p d d v p k d s s n z f l x l y n y q k s", "w o l h q a h h n s u l j u w x h g l n a x b n q", "w w r x d y u f s i m r n o g j z u r x n y s i u", "r r q a g a m t i f j v c d b d p d t p c c m r n", "f t n r d q z m v r r v v o u j y b v r u u n p v", "x d p v w v n d n d l h p e d a l j r o s r u z a", "u p n f c h h p m z a f o v y y n t t w p y d d n", "b v i i t o h u y e k x p d w e g j q t e e h t y", "n s l u u s f c k x b i c a x h n h w x x o n l q", "j q q q u q u p q n e d h o i x s f e l t b v t c", "a y h m o z u r l h o c m z b z s j i f k o w i t", "l a u e m f y u e i l d b z k y z c k x t f e z x", "l m i x l y b l v v t f b o d q h a d f y z g f b", "q w c z c r p f g w q o z l s s w l y d i n s q k", "g o v m j a n m a b q p v i e n d a x h p z k y j", "v y i q j q o p w r b e v t d d b z b i k j t t x", "i w d n t q o l r x i k i w z t e y w s h a b n h", "k t m q y e t m f v g u i u w v b j d p s o h o l", "u n n u h c m k v e p q a w q w u n q p s l d i e", "b l z a j k b a q r p w x k s e x x i k y d y b k", "g p c o u w p r v b z p p e d b b z m p n m t v d", "c s h g s p x y p i x b t o r l c y n w h z p m q", "t e e w p h n x t a c g k l n c m h n p o h j r x", "h o c l z z r e j c w o i p j l c w b y u s a q e", "w e h o w x o y s w g h i y f m f w z m x s q e q", "a v z e a d d w q w h l a y w s s w t e t u y c p", "v c a t v g p d r q r q a c v e v m c x j s u q a", "h q l u q n l e y g v m m t u f f i y q r y r w a", "f c v w d q a r g v p o x s n o x g w j h g m h c", "m j d l k h b c u g r c a r x r h d b x d m e i j", "b n f g q r w f x f b j c z z g q t b d x o m h g", "k k a k o z f c c l t t k u b z d b v y i b l c k", "a r l p r r c h u a k g k t u p p v g n t x c v b", "l k w h m r b l n a h j o w s u g e t r p f u c s", "z y l u e b z p o z w d v l x m k j f e n i l s e", "n x q v n f x j g g m j q t s p i n s u m w m u v", "y y k j f r t n h l w m k o e m m n m p x k f c l", "w y j u n q t v y p k c m p g a c k y j i q c e q", "m f l q r y w s v e n o f r s u c t g y q h w q z", "x b z f r t y x p i n t r a e i q g n p o e c w f", "r m t g q s p z s y a c q t t a c x m d s b w f r", "n i a f y l k n e b b p l t q g h b w q c s t m c"};
    vector<string> dictionary = {"u : o hq fo cm oa d jo px wz fk wj xe rg sh db ys", "zd : bb fz nl sy hy rt ce qu vf tu xu ni cp bg cx", "w : jq ey nv lb pd rk f ed xz er ig th rz ml zn zo", "mz : vb re qq oy ze yh zg hb di vb il pp mi tb lc", "p : mg ix zf eo ac iz fq fm kn tp my bx c qf fm aa", "s : mt tw pu rf nv sn zr sr vz ly hl mt sl bf ba", "m : tw lw af hy xb vb gc cn vm sk xm ix dy dg fl", "h : za dx rg ke co zr me gd mj yo zu ki sy sz kz", "g : ba rh ej bg gv cy oy jq yj ys vz aw ww pn rx", "ko : dy cw cu ra wt gc wl vw uk ny ex s zj vd vb", "ka : qw po ju eu sn te lk ud ag nc vl rk up nj ai", "oi : ld mb tr hk it vq rr np gv ub vg qy nv uc jz", "xk : ac bn qk kp kz dk sa xo a up sl yb nr bf ss", "ms : ht el pv yl ri tr gh wt k ay ec zn ry vy ad", "oz : bj st xe up wn d aw eu xk ng cn xe li dp op", "k : df e wp du qx pm xs ci cg kh xt to xm ih tm nu", "pq : qg wm je vm zc en jr ne fb rf ee nr tx cq nu", "f : gn vh kd pv dj xh gy af uu v cc er ak nw ee jb", "jm : sp kf kd bt dy he xq pi el k dg wb u jl mk ds", "kf : tp gg jo cr yj rr ns xi ai rb eb tc zf aq rj", "to : fa ev vp pv qc kp da xq da au oc ro fl vr un", "bb : po oj zz pw gc cu rv yw pr n to my kl tg kw", "t : wu eg tc nv yy ib sf sp yi ao ld gl lu on ij", "hl : uv cg v ev xt to oo as nz qv dq bb uw pi yp", "ug : fe nn pp cj ju a xd zv vd vj vz oo bq fl oy", "rw : st gs rj im rb ds dw px ab mu th zy pd ao uq", "j : xz ni le al eb vp ey kl wt gs pu ib pg eb kt l", "i : rv sx yi i px qs dm ne gt ld pt vb hd id hg vk", "z : fp ol rw it xz xf tc po vj cd ur bb ka wk xc", "q : ed sv gs nz sw zo yp wo jj zk gn lz ot wb kl", "ak : ig cp kn fg sp fp ww dz sh xz pf cv zu ko dz", "wn : d yf do tq km zb lm hb ih lv yj qm pt qk dl", "nh : mw qh jg ro vk ev gj an hq td st bh zt sq un", "o : ui a sc kr pt mh xf co iy ox qz fa dk bh es em", "x : in tt cd aq bh ks iw vx bk r yh fp iu jw bg pk", "py : iw fn ry rs vb rt ep dt th xg rr um qj wg rl", "v : hr zw xv tl yf jh su ou pt lf k id tt of zd ga", "yb : w hg tb hf fi um gh te az mh c e lq op ho bs", "vw : au b lq fn aw dx mj tx cf yw uu db oo oq pq", "b : lg vx cc xk ky va wq ri oi ha ue da iw hf uf", "c : dy rj cq kd eq gw ca lu cx rj gd en fi pf ic", "e : vm in fs sl og bv pb rz gw lk va yw kt b to pw", "d : mm kq zh sb lw sk iy xx tc gp ny gd ji sv cg", "a : ut he jh ul st nq rn vz dn nq yg wl zv ly wa", "y : yx tc fy pk el zh c mr nz qw qx cy tr rs hj pb", "r : ek lu rv j or vu kj uf k rj bz pp im hi mv bs", "ml : dx gn pi ip le sn ur hn nz hs br mh yb ff mg", "n : gv gf qu vj dv ff yo xe xv ax it aw ga nv kc", "l : zp bp ff mx ik sx nm hi ae tf ci mb qg je qw", "fh : r xw lj jp sw hr y ef b mn iq sy zr ld hi ag"};
    vector<string> frequencies = {"qz qk 751", "iz kh 739", "oj wz 591", "ag ea 973", "ah td 552", "sq xt 562", "sg jk 991", "nw bv 213", "sw aw 158", "mb ae 177", "gv no 195", "ul kh 443", "bd jh 99", "kk cu 257", "ll b 126", "bn bg 131", "uv rz 624", "hj mx 882", "xl rn 488", "ev xl 435", "ex dy 611", "yr ag 90", "ni gr 302", "xa mn 680", "n ka 792", "zw sv 453", "oc es 997", "kb ou 960", "yg nk 438", "ui ux 209", "mi tr 719", "sy yn 931", "kl ir 339", "um wt 359", "qz gq 199", "bu jj 193", "zk is 743", "ij hh 858", "dd qo 94", "zt lf 695", "no ci 292", "wi za 428", "ch fb 153", "bs bc 964", "ct sv 330", "vn li 761", "wn ey 42", "nv il 418", "ht sy 911", "dx t 715"};
    ProbabilisticTranslator* pObj = new ProbabilisticTranslator();
    clock_t start = clock();
    int result = pObj->maximumFidelity(text, dictionary, frequencies);
    clock_t end = clock();
    delete pObj;
    int expected = 8680;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> text = {"k n p m z l d c s s u q o a p r g s a y g n v y y", "l e v i t v g d c c x p j l m i y n i s s z d k y", "j g q m b h a t s z s m j i z g q q p p a n a x u", "e y l d n y e g d u p p r z f d u b u v r q l t m", "w m m m l o c j n d i a m d i b u j j n r e k e f", "n e b f l p c w g y n w y x c g j m z m l x p m o", "r h q m b n u p h b r d v t u n k m d v l u j x b", "m d e z i r w p s o z v g p x i i w l j e t q c t", "t w j c p w w d c d b m l c y s c x r e e j w r q", "m c k a x p q n o w p o p p i y q k w s x u y e g", "q k o s n z e n o k r l f f q o d h t i r v a h i", "i q a y q k r g a l y z j a v v f d f m j l x m n", "k d k l z o g q z w s p a x f c h m t h t o x q q", "r w o b q g v e y h v w c o t r w r x n k w k d m", "j h h h o s d i q t m v m s o i s c l o b o b f b", "o j s u z o e q r k u n l a l z x x s p e r t j b", "s z y u p f x m s q u b h e v o h x t w p h z w e", "j j q d t z b e o m u r y m s m o a s o s h i z f", "g y c n u e u b r h j g g j h o a y r a b y i p c", "h o y p t d w b d l o o l j z z t e r r z m l b l", "q c i h z f p p t a n y f s x m t o w i g j l a t", "z j t d v l s b h m b z m r h h p h y g t t q g s", "v u a d l f q f k p n k i d r j n r f n a d v p n", "r r a h b i b v a n o p p o u k q k b g b e i v n", "w g t f v n t n j i a y m h p b x d y f t d g v c", "s k y p j s r a a n m p p k w i l s b p e x f s o", "l d a d n v i b k p s x g m z f o b g w v a p n m", "e h q j m d j n z x f s s a w w w c y g m n s g a", "k j z s p i k z n s c f f n q r y q j w z a n i g", "l i x o o x p y r n d x p r c r k t g a z j u g o", "o e w e x k d k l p v i c z l k k s e z o w x o g", "o o f z j o r d e l x u k l v r a j k o i y c o j", "u a d v x f a g l m w t v v i n c m i z l k c y o", "n o v u p o w x x a s z h q h y i s m c q k s f t", "h y d h v x p w l f n u p t f b w t r b k g m z s", "v b n e j d i w k k e h p u n v l f l w k f e s a", "x p v n i s i y g f o x s j t r c q a d z r o m r", "d p p a n j w z r c b t l m k n p k o x n d d y u", "g b d z k e f m x e g i p i r b t v a z r s j w a", "b s v x m w s n i p a r q o t l u g p u k u s f g", "s u f p z g b q f l f j p i m u c e j j w j h m l", "h t v e e i u i e u p q t o l s a x a k g z s n s", "j a r d f a o o z k g i s i i z n f e h v m j c y", "s x h j z v d p m p a z s p x i v g s w e x d g s", "y a s l p j b e t z g w d b c l o g f t a r u d n", "y w l q e m m w g l d c s w x j m a d d u u n y h", "p o k b u a b i x r w i n p r o l i j c b k x u d", "t n s o m u i r i c j i p c s o b e k a x a j u y", "hr th cv yg tm dh bu tv rb jo mz wi jh lg up xw a", "mq gs nl ls mj hu fd vw a b c d e f g h i j k l m"};
    vector<string> dictionary = {"hr : gd cu rz wa td de dm dc nz it gi uk vn ec a", "g : mz ln ry py fc bp db mb bj jd hc nx py cv cd", "o : wx if ef qo cq sj rq nq ph pb tt id cc bu km", "th : rt da yy uh ia dk wq ah if yx cc ap gd mp eu", "b : vk ye vq am gs ch fn lo ea lv yw xv ca pa co", "t : ft wj rg nw va bv sm fq bj xz zv hu j zl ng df", "cv : lx xx pw du mn sc ro dk as vm dl wz uo ds an", "c : iu vm xi qf zf ep so jx py za es bu ku ta di k", "yg : mq jp uo ja jq e gx th my pe id io rv pn qx", "v : xk mf yp gg iy ui wj ej es yb nd cr qs sd ui", "s : yc rw ir zz nt xg ft uw av gj pd ey tk r nk xz", "tm : ab lo vm aq fc qf lf xn ff kr xb co tg gn zb", "dh : my vy go or bz iw vo gs rj wi jp rd se dx rc", "p : ak ni us jg le ek rx ox bj us jt ik ku dy m eg", "i : em sr dq st as qv xn li sp oj xq it uj xu op", "h : m pt bw ky zd xx k qc zw ii do be re wk oq cq", "x : nu xl jl ta nw sr tj dr nv sm zs zm wm di px e", "bu : iy va uw fq fb ec wk mn rp ae k es gv ui hc", "f : px vp xl kj tv ew ya nz az ce zy hi li tf cv", "u : rw cv jb zt an qy oa aa cx pi km go dc km nc", "tv : qs ot pu gv cx ei ew jd uh h zu bj nn gf my", "rb : gq jp nd aa ht py gg s lk ln og eu sj xq kg", "y : bx nj mz rx jl re qt ya tv jc zd ns qi ju he", "e : ba ck tf hn hl vr xl il od cd ll ry eg xj xy", "n : jp eg pp xj mv bz ka ns au dl nn va do co we", "d : zn nk wd qm sr ir xn oy pj ba fr vz oz ly zi", "jo : ik wf ez wg d dc ei cq wd is yq ka zj vm tt", "mz : pr ky ly yj tz xg qf gg es ou cy mb oo rt qn", "wi : pz ve ju vw py nu lo nc cx me qz hz ow fb zi", "jh : oj xp lx fo rt lb jr pz za ok nj sv ia zg bv", "lg : mb nn hg vs rt uz yo ow kh af po wi yr ud nb", "up : gc ij wd vw vp ai pm g ad yn oq ih xu sa ic", "j : tm xu po lg hl ul sa bk nu ki ve ym vn p vi fe", "xw : gf by n zk vq fn rv yy lq gt rc ty s ri qe uw", "mq : yq ze jo tp mc se ei yg fm pi pf ef io uo ze", "l : ds gg ba oo de rp vh nh e du wx zk se oy dq wq", "gs : of mu uz ja dn ma ap ve fc cs fm fq cq at mk", "nl : kg gv be lb lv ut ua qt re wj pt cs fp ay sj", "r : ud zk go lx mi ly qd dm wp va dy kx pj ox pc", "ls : xm zl ym nh jb ec gd oo co jt ic my gr yx cx", "q : en yj uy uk tu xr ma ou ts kr bm oe gg dd vf", "w : ea zi zp ws yd lj rg kn ss ki nd wl ja dx ms", "mj : fr qq ka qd ew s ad yn me tc bo yn gx nn oi", "z : bd fx ue fc rm fi ns ak il ii lo jl xy ee jm", "a : zy gj ih nb yt qv tj ur na zj lh pr vu cp kd", "k : zu yg am rp wp br rh kg tb bv of vz up wj dj", "m : yp mw uf gz bl ng g by lk yn qx ld jn nq qp xx", "hu : a tz mt oh ts oa qn hq ia id uq ut is a jq vo", "fd : ll db pq ti zh la vu ic oa qr wn nm ja ew vy", "vw : uh ox gt aa od vd xz is mp c wl wt dq bq f ww"};
    vector<string> frequencies = {"kf iq 593", "bq sy 257", "rk gj 243", "ra ce 780", "rt ou 365", "qt qg 912", "oa oy 25", "fc ek 619", "ks xw 938", "gb hm 520", "hu eg 783", "md qg 764", "sv bn 876", "yz qi 269", "ux ou 359", "n xx 250", "et sk 100", "ll ya 650", "dl mc 969", "ly tm 938", "mc rq 390", "hz cj 723", "jx i 167", "lt s 207", "xv wr 240", "li d 743", "ca v 492", "tj zu 68", "lk cd 268", "dr zz 611", "yy xw 299", "nw uo 3", "oo we 7", "ya hv 136", "ai lm 207", "ux lr 815", "zq gq 862", "rg gu 623", "tp tg 639", "hk ko 585", "g pg 664", "cv vh 556", "iy en 295", "ed ai 205", "fg tn 675", "tu na 548", "uv kr 259", "ld vk 150", "nd dq 596", "ez gg 907"};
    ProbabilisticTranslator* pObj = new ProbabilisticTranslator();
    clock_t start = clock();
    int result = pObj->maximumFidelity(text, dictionary, frequencies);
    clock_t end = clock();
    delete pObj;
    int expected = 23994;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> text = {"c j u v v r g c s q g i s f a b i j y e e f k a p", "s u k i n e y g w j z p e k g y i n u k a j i s s", "r a u w j e g q z p z v r d b q q p v w j b w j c", "e a c p q s s y h j j s q f y x s y c o i b e l h", "o l d i j k p n z d l c l j l i c t y s p u x r r", "d n v m o k a h n a a y n m m j x c d l s b j p i", "g y h t l o f e g q t z x f n s v n z y u b e h g", "o s f q q a e u l v g m c l y k v s s r r b q f p", "q r u c d i k e z v h p n n z u z i g y o t f u g", "y p u n r f s p r t o l z d l i h y b w d p e i x", "g n v m h m n k i j a m w x k l h c o v l l x c k", "a u x s x v w c w h a t q j b e j i v h h s t j j", "i n m x u e a d w u t q c j y d g x k g g r n j r", "m l j r h a f u z w w v k g h i r b c q h p s b g", "d e t v y u k i j y d x z r i s i k v h m t b b f", "h w r g l z d i e d d h p b b f h i p j q d p f g", "n c o m f y i j n u x r l h q x s n a m n q u p s", "o i o c t t x z k n v s v b l i q h p f l t y g z", "c l i b a p x n c b p t d p v r g q x p b k r q n", "a k e l q a o x f i k h c l j w i h z x n h n q a", "c s h o u c t j e j m i w s x r p a a t d l h u d", "h e f v u y u s o l n z s x k b x i m c g n u k r", "k t p j c u j b y d m w l y k p k u x j t l u u q", "o z b s a a h i t x a k u d i l q y k t t z a p i", "a r t w y k z s o e p p b q h n y p y w j g w p n", "h a d j u f g h n n x e i g c a g y k d r l g c y", "h v e p d p c r y i j c j u k d w e h f g j i v t", "h r y n g k k w f y a u j c u f v j t w t c r e i", "h h n n t b h c i u h a q d m y v e w d c t t z b", "z a e w f h m g x j i r d s s d l z c w u u a n t", "f g i z t q r l o y q e j k b t z j t y m i i w e", "i x b o s a b j a y s f v f o l e g g r l k b q r", "p i j v k q f x p r h w z z d h j x a s d b b b n", "b k m q u f f r p o d v q b x w u j c s e v z b l", "m v n w p a x i f k q y l r f w q f r l m l a h u", "q j a j p t s d x t c w o r p o f j l y z o b p q", "c k m i a u m f s c q m i x l p t o b r d n e v n", "d v c e p j v v j r m t a w l q r c i y p f e w d", "x r a z h a b p o b h l o h a y k q g h b z t p l", "r n c v e p z m f j x v x l k n j t s t v x n m i", "n j r y v n i x f i n o n w i r n o d s w c r x k", "j m c j x n n h e l o d c z g d i m z y h a o g l", "f b s b d z t s b y s k k x a c p d i a x v r b j", "i n m b y z o s v h r v l z q z q n m t l p i m k", "z b u m r i z r l o c s q w c z e b d p i y o v c", "s x a e y s z i z n j m s e e e r w a o a j o y r", "g p i y k n s a g w r b a j t q i t e c w z k f h", "w f w p y f a s p d p a g v u d f m g b p z s f t", "y e i r d a z a m w y e a t a a s t b g q b f n y", "l q h v w t x j i s p i b r j b j a q i o v x w q"};
    vector<string> dictionary = {"jx : y p l q x q r r i u y b e g y d z g u j i b z", "i : o i a c n q j h d b x v j k y c s v m i r d e", "ey : d o m h j y u e y u q z i k z n v f f s m l n", "k : b o d m z g v s d g h b b v v w q k q x a s x", "a : o q p j l k f i b z w j i j g a k e f h a m m", "e : r t m n l x z s x d b g t e j l l k n u m w t", "u : n s t o s z e s e k d e w u u f k e h v i m q", "r : g p e m b w n t z r k m o i s o c o h r e c o", "ee : q t b l c y s i e a w o o l w h f l q c w f d", "y : p b y o x g s u x v y m h t p y g m m d n h g", "f : f l d t p e m g m w p g u k x q x i z u z e b", "eg : l n z t x m p y h k k z v p x m n e g f u g b", "d : p z z j m e a k c l c k t i v z x i g e g c u", "fx : a g m q v g q s m l s y m l y k i e i i x p d", "ld : h j s e d f p p d r v j s f l e g z t k c c u", "eo : d o f w z w w o w f e k d m t f k u s q q z j", "v : k f j x p g l j l c k p a w t y s g o i k v b", "g : s i v d k g t v a y v z q y b s o z n i c l a", "t : e m r o q z z h i z x o h x l t h r a u m g x", "m : r y b t j f j y c g d j c u p p g g g r h c m", "s : f n s r p o t u b r d z p m c l l y y g e v w", "n : a l s p m b a g d h q m h c m o q g g n b i r", "b : y c r m p l q s o s v b a s r k y a z i w w m", "pd : h w n v h v v d k k f s q v w f m p a w e d u", "w : q h t a j n k k e j e z z k q e e o j o i x a", "om : x g b v q k t w r p e w x m z l c y c r v i j", "z : i r i h o k s q d j a g w q e d y g r b s p o", "ef : x z b i i x x m d x s w q y v q n v s n n p x", "p : k p e v w w y q g s u y u a x y y i e r a a v", "j : b g z w v y k w j g f v p x y r u j c v r a v", "h : l l z l z u n u z i f z i i y p s w c t j l t", "l : a y f h g w v u b n x l x z c r v k l g i m v", "qv : e t o a d o w o x x b a n o z o q g r z d r c", "zr : g v e l t r o b y m l u z l n p o p k p a k l", "c : q p g z i m h z b z z a r u a k l g g w h o b", "qr : k p b k i r o g g n t i a g q t n b i i s s z", "rz : r z q o d x a c t i h h p a z j l y g z j x t", "o : h y w t n h i b r n p p g f p z y x r y s k l", "yj : y r j z g c a q a w h q d r b z t h b h q b j", "x : t c a p w z b q u m y y k s v d j b p u x e h", "nk : d r x h s u i h z c j q t z g h p q z p s v y", "oz : n e a b c f q r t v c l v j d y i b j z l v g", "vr : b r e z t v f p z i j o p l n o p y r z d g r", "q : d n h n y g q w o f w u x w l x o k h y x s y", "xf : k q l d c g p x p r v x d m n u b m d s u u x", "qt : t y m z a n a n t u z f j v d z f l r p i o v", "gi : z t n x s j i d k s k g y a j p b u w g r m l", "vy : w o n r o o q j u d b j e o x s b t g t k t v", "tw : x h i a d y t u j k i l g c g a a s n c c b q", "yx : x b x q f f b o t u q p k o w e i u n l z m j"};
    vector<string> frequencies = {"e h 7", "q t 663", "w g 628", "m v 181", "c w 268", "b j 487", "s v 739", "y t 913", "g a 338", "y x 267", "f d 120", "t o 262", "r c 227", "s w 100", "j h 17", "z m 497", "l q 493", "t i 705", "s l 204", "c p 719", "m j 54", "d s 501", "h o 374", "h t 938", "l z 727", "z w 664", "p c 918", "w k 395", "q i 334", "b k 269", "j m 272", "s k 493", "i v 55", "a e 218", "p k 850", "e v 77", "f z 283", "s q 823", "e j 631", "s r 982", "a x 304", "y l 538", "t b 770", "q a 155", "c v 395", "n w 925", "i x 748", "d i 801", "c k 474", "z r 28"};
    ProbabilisticTranslator* pObj = new ProbabilisticTranslator();
    clock_t start = clock();
    int result = pObj->maximumFidelity(text, dictionary, frequencies);
    clock_t end = clock();
    delete pObj;
    int expected = 768221;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> text = {"c j u v v r g c s q g i s f a b i j y e e f k a p", "s u k i n e y g w j z p e k g y i n u k a j i s s", "r a u w j e g q z p z v r d b q q p v w j b w j c", "e a c p q s s y h j j s q f y x s y c o i b e l h", "o l d i j k p n z d l c l j l i c t y s p u x r r", "d n v m o k a h n a a y n m m j x c d l s b j p i", "g y h t l o f e g q t z x f n s v n z y u b e h g", "o s f q q a e u l v g m c l y k v s s r r b q f p", "q r u c d i k e z v h p n n z u z i g y o t f u g", "y p u n r f s p r t o l z d l i h y b w d p e i x", "g n v m h m n k i j a m w x k l h c o v l l x c k", "a u x s x v w c w h a t q j b e j i v h h s t j j", "i n m x u e a d w u t q c j y d g x k g g r n j r", "m l j r h a f u z w w v k g h i r b c q h p s b g", "d e t v y u k i j y d x z r i s i k v h m t b b f", "h w r g l z d i e d d h p b b f h i p j q d p f g", "n c o m f y i j n u x r l h q x s n a m n q u p s", "o i o c t t x z k n v s v b l i q h p f l t y g z", "c l i b a p x n c b p t d p v r g q x p b k r q n", "a k e l q a o x f i k h c l j w i h z x n h n q a", "c s h o u c t j e j m i w s x r p a a t d l h u d", "h e f v u y u s o l n z s x k b x i m c g n u k r", "k t p j c u j b y d m w l y k p k u x j t l u u q", "o z b s a a h i t x a k u d i l q y k t t z a p i", "a r t w y k z s o e p p b q h n y p y w j g w p n", "h a d j u f g h n n x e i g c a g y k d r l g c y", "h v e p d p c r y i j c j u k d w e h f g j i v t", "h r y n g k k w f y a u j c u f v j t w t c r e i", "h h n n t b h c i u h a q d m y v e w d c t t z b", "z a e w f h m g x j i r d s s d l z c w u u a n t", "f g i z t q r l o y q e j k b t z j t y m i i w e", "i x b o s a b j a y s f v f o l e g g r l k b q r", "p i j v k q f x p r h w z z d h j x a s d b b b n", "b k m q u f f r p o d v q b x w u j c s e v z b l", "m v n w p a x i f k q y l r f w q f r l m l a h u", "q j a j p t s d x t c w o r p o f j l y z o b p q", "c k m i a u m f s c q m i x l p t o b r d n e v n", "d v c e p j v v j r m t a w l q r c i y p f e w d", "x r a z h a b p o b h l o h a y k q g h b z t p l", "r n c v e p z m f j x v x l k n j t s t v x n m i", "n j r y v n i x f i n o n w i r n o d s w c r x k", "j m c j x n n h e l o d c z g d i m z y h a o g l", "f b s b d z t s b y s k k x a c p d i a x v r b j", "i n m b y z o s v h r v l z q z q n m t l p i m k", "z b u m r i z r l o c s q w c z e b d p i y o v c", "s x a e y s z i z n j m s e e e r w a o a j o y r", "y e i r d a z a m w y e a t a a s t b g q b f n y", "l q h v w t x j i s p i b r j b j a q i o v x w q", "jx ey ee eg fx ld eo pd om ef qv zr qr rz yj nk z", "oz vr xf qt gi vy tw yx i x h h k n h b g r w z g"};
    vector<string> dictionary = {"jx : y p l q x q r r i u y b e g y d z g u j i b z", "i : o i a c n q j h d b x v j k y c s v m i r d e", "ey : d o m h j y u e y u q z i k z n v f f s m l n", "k : b o d m z g v s d g h b b v v w q k q x a s x", "a : o q p j l k f i b z w j i j g a k e f h a m m", "e : r t m n l x z s x d b g t e j l l k n u m w t", "u : n s t o s z e s e k d e w u u f k e h v i m q", "r : g p e m b w n t z r k m o i s o c o h r e c o", "ee : q t b l c y s i e a w o o l w h f l q c w f d", "y : p b y o x g s u x v y m h t p y g m m d n h g", "f : f l d t p e m g m w p g u k x q x i z u z e b", "eg : l n z t x m p y h k k z v p x m n e g f u g b", "d : p z z j m e a k c l c k t i v z x i g e g c u", "fx : a g m q v g q s m l s y m l y k i e i i x p d", "ld : h j s e d f p p d r v j s f l e g z t k c c u", "eo : d o f w z w w o w f e k d m t f k u s q q z j", "v : k f j x p g l j l c k p a w t y s g o i k v b", "g : s i v d k g t v a y v z q y b s o z n i c l a", "t : e m r o q z z h i z x o h x l t h r a u m g x", "m : r y b t j f j y c g d j c u p p g g g r h c m", "s : f n s r p o t u b r d z p m c l l y y g e v w", "n : a l s p m b a g d h q m h c m o q g g n b i r", "b : y c r m p l q s o s v b a s r k y a z i w w m", "pd : h w n v h v v d k k f s q v w f m p a w e d u", "w : q h t a j n k k e j e z z k q e e o j o i x a", "om : x g b v q k t w r p e w x m z l c y c r v i j", "z : i r i h o k s q d j a g w q e d y g r b s p o", "ef : x z b i i x x m d x s w q y v q n v s n n p x", "p : k p e v w w y q g s u y u a x y y i e r a a v", "j : b g z w v y k w j g f v p x y r u j c v r a v", "h : l l z l z u n u z i f z i i y p s w c t j l t", "l : a y f h g w v u b n x l x z c r v k l g i m v", "qv : e t o a d o w o x x b a n o z o q g r z d r c", "zr : g v e l t r o b y m l u z l n p o p k p a k l", "c : q p g z i m h z b z z a r u a k l g g w h o b", "qr : k p b k i r o g g n t i a g q t n b i i s s z", "rz : r z q o d x a c t i h h p a z j l y g z j x t", "o : h y w t n h i b r n p p g f p z y x r y s k l", "yj : y r j z g c a q a w h q d r b z t h b h q b j", "x : t c a p w z b q u m y y k s v d j b p u x e h", "nk : d r x h s u i h z c j q t z g h p q z p s v y", "oz : n e a b c f q r t v c l v j d y i b j z l v g", "vr : b r e z t v f p z i j o p l n o p y r z d g r", "q : d n h n y g q w o f w u x w l x o k h y x s y", "xf : k q l d c g p x p r v x d m n u b m d s u u x", "qt : t y m z a n a n t u z f j v d z f l r p i o v", "gi : z t n x s j i d k s k g y a j p b u w g r m l", "vy : w o n r o o q j u d b j e o x s b t g t k t v", "tw : x h i a d y t u j k i l g c g a a s n c c b q", "yx : x b x q f f b o t u q p k o w e i u n l z m j"};
    vector<string> frequencies = {"e h 7", "q t 663", "w g 628", "m v 181", "c w 268", "b j 487", "s v 739", "y t 913", "g a 338", "y x 267", "f d 120", "t o 262", "r c 227", "s w 100", "j h 17", "z m 497", "l q 493", "t i 705", "s l 204", "c p 719", "m j 54", "d s 501", "h o 374", "h t 938", "l z 727", "z w 664", "p c 918", "w k 395", "q i 334", "b k 269", "j m 272", "s k 493", "i v 55", "a e 218", "p k 850", "e v 77", "f z 283", "s q 823", "e j 631", "s r 982", "a x 304", "y l 538", "t b 770", "q a 155", "c v 395", "n w 925", "i x 748", "d i 801", "c k 474", "z r 28"};
    ProbabilisticTranslator* pObj = new ProbabilisticTranslator();
    clock_t start = clock();
    int result = pObj->maximumFidelity(text, dictionary, frequencies);
    clock_t end = clock();
    delete pObj;
    int expected = 762300;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> text = {"s s e z m d h f o g b x i u b d m k y r z o g z m", "t o z c i y z w g q z f r k c c q b z f g k p p c", "x x h l e i x m h s i h m l t y d b k y y b g o t", "r i k y k v x l k h y k e o g n x a p t j c m q c", "l z k c u w y y i v e l d m v l g t h p d v j t r", "l m u e s u j n w t b n d q c k c w n b o f b f i", "y u c v e y f u q h z y f m u i r p o x g g z x l", "w q p k v p f i h r j l k d h f f h n x v k x s v", "x e e q d t j k y d v i p d o y p d r e d g m a y", "y p w f n v z h r y k t v f y z t b r g b w a j f", "a x y l p c f x e j s i d r i i i n q r p g n z d", "w k i m n g j u t q z n q m c k v t v k c l r c n", "c l g h z i h q y o j t e w s t c g v m r n d x n", "v b q g c p v x s i r w q z g w z u s j k j p a u", "s q f p k k r e c o z t c h k m k c x k x w y o f", "l x v i n h f v m v t v b x r b r d c t d d o c t", "k n u j l n w i f x n g m h f u d r e u n s a m h", "l d z k c p i n o l e p r x w n j y h q j i w d h", "c c g w w d e p q b w n l v g m w w q n n d p e g", "q i v v h f f b k g v i d k m s m a c u o g i y w", "b m v s z d r q r n o m u i z y w c j x i d u p j", "d h u r u v y m z o t z j j f o a k s y e d v b a", "s x k f f v e l d h z i i h g v j u t n w h y p n", "l e j g l s o d s l q j j c j x c y i c j c f r s", "t j k m d s y y t y p n v s l j l e l g b m e u z", "j b u u i z q b c r j b x k q j l k w j b s m x u", "t a k n h a c i q g p z h y y b k i a x j v t g m", "y u r e c a f e m n s k m q u a i q w f w z m g h", "w f t j v h r d q t z j f z d b u k r q z r k z p", "y y h j j y g j r w x s n i d g u y t v y q h t i", "q h b j k z t m s a i w e s l s l s m q r f z l j", "k l r e s i z z v r a x d s b o m q a c g m u l t", "h k a v g x t j o o q m h n e j t l k m d g l i x", "d f a s l z e k r q e u i b g e w c l x r d p v b", "n x e c k e b k n r p m x z b n d i m t b i r w w", "v e g p x h e d d p e m o y b a b n w k e j x u i", "s d s s m n d y c a w r s p b j g r t r s z o b d", "m d k r c z l t m o j c i s m r h e p m i m x w y", "x n i c z n h p j q z u f u r d f z p l x x m b v", "u o m g k s f m l x q z l d q a p t r p g e a h e", "o g m i x p f w x w v u p e l s l m a q k n m u r", "a s g d f m h j s n t h w n w s e z x y d n p w f", "e a t i o a e v y q d y y t z p m y z p m k y c y", "q u a z l h a n b j o x a w n a y x k y j g c q r", "d m i h n r i u u z b b b y i h o g m x n c y v x", "w z k y w k x l r u w o p f r c u w k r t b a k c", "z e b h b f p w v h z a n n p v a r t y z m a w x", "j x s o v v r h n o l i x q i e d n q w j d c p n", "ad wf ng mn yg ua td yl fz zl dn lc ka ws yr os", "jr vp gy ti mx jm ld un a b c d e f g h i j k l m"};
    vector<string> dictionary = {"ad : kd m o c n g y a b f md ve wm e yl hq j r s p", "wf : ht qq gd ma vb u gv kk w mz jd dp h wh d tu k", "a : pz ie fb z rh lz ey t dm pk hi da rf mg hd ab", "i : xs x wk yp vj zf kt ot jm kv fw mq do oc jz i", "m : xl bn bh ls qs nl us zv cr uz wu po zn v me ly", "ng : tp dx up sa l iw bi to xq la yr bf nn hl q cc", "mn : aq kh no ix es jj jk kz by pi gb xa ja sv ce", "yg : sk yc jf tj wi dn rq rz yx en wl wj qv co ek", "v : sx rr wt ty di in ha ln yi bj wf eb sg iq lg", "c : xb dz jb vh op lc ki qg zw tq ec lh uu el ql", "e : bg ti si iz je cj uo fq ww fh pr mj ic wo ii", "ua : jn sp va ks qe hb ji pu ko qx ag al rx pp wc", "td : zq hy ro ss tl qo hz gf vg sn bd ya ax hj be", "yl : ao xu ze jg vo gw it dg wa he nc mk cw pt ge", "g : yz mn jp ne cp vn xe ui pb lb lo az qm am lw", "fz : te ur tv vp fn pn gh ca ej ps vs wv nr db du", "zl : gj aj rw pg zy uh qj or vz tb lu un xo mr pe", "z : nf eu dt ob oi ys zs le ok ny ws uc cl br qt", "dn : rt sj aa sc ap ta hr ah qn bu dy lf ua bs uw", "d : zl nm tk jh bk vw av jq jr oa qd ba af bl eq", "u : su sb px dc uq ms pd mu cu gp qa at oe ck kg", "lc : ug st uy zx bv sq mt fj xr ia pl gu ip ei dd", "ka : vt de xp ts nu yy kl td cb au xt ik ct nv bm", "ws : hu ad dj fr iv as mw rl zg dl vu is hn ym ku", "x : gl ju fl yk qh vx ho zu ou gs tx dr fx cf vv", "r : ld vc uf jc bw eh lx eo eg ac lj pq ud ol if", "yr : th nx ox ml wr vk lp uv ri hx kc cm zz mi fy", "p : xv ub ed yj mo fd jw ff sz hv an dh bq et ow", "w : qi zo qr oq qf ay ov ky of qu rk xx em fu tc", "y : lk yd cg pa tg cn ll sf cz rb gy xw yw yq ry", "l : jl we jt fe wb cy nj hh kb bp wx wy ch qp qz", "k : zh dq cv fv ux vm id tf ep nk cd zm sd pj rd", "s : uk xj ak xk na bx qw xm cs jx aw im kq rn ew", "h : mv zi ue ul fa bo kn rg fz vf sh lt tz mb np", "o : nz qb ef rp hc vy tm mh jy sr dv ai xn ev hp", "os : fs sm gt zk ka gg sl kf dk ee yh fm fo og qk", "jr : lq kj qy jo ft za oj mp dw ni hf xy gk rc oz", "vp : hm oh li zb ke tr bb nb wd iu kr ex qc er nt", "gy : xg pv df vq zp kp go rm ru fp ib pm ng lm ga", "ti : wz xh jv re mc ds um uj vl bc ir nw on mf tn", "j : zr xd iy yv os ra zc wp gn fc ae rj nd lv km", "mx : zt kx gi ih oy yo wn hg ph ig ut pf oo yg il", "b : tw yn gz gr ea hk pc ns nq cq vr yu yb zd om", "jm : gx pw ez rs sy wg gc xc sw gq ij bz my xf lr", "q : hs xi mx vd nh kd m o c n g y a b f md ve wm e", "t : yl hq j r s p ht qq gd ma vb u gv kk w mz jd", "ld : dp h wh d tu k pz ie fb z rh lz ey t dm pk hi", "un : da rf mg hd ab xs x wk yp vj zf kt ot jm kv", "f : fw mq do oc jz i xl bn bh ls qs nl us zv cr uz", "n : wu po zn v me ly tp dx up sa l iw bi to xq la"};
    vector<string> frequencies = {"dn wj 742", "sd pm 983", "cr zn 860", "ct nb 830", "cu ot 578", "bw db 561", "f uu 864", "ng kn 101", "ck jp 11", "jm wg 92", "ju hr 870", "og xo 522", "qc dr 151", "mp mk 498", "nb np 758", "hf hi 280", "ap of 872", "tm iu 445", "av pt 744", "pe lc 765", "rr ea 668", "lm cw 292", "mk lx 434", "pd ew 83", "rb hq 246", "ah iw 836", "qi pf 454", "vb fb 481", "nm kt 781", "lr rk 418", "eb ug 637", "sy br 780", "fj ia 392", "we pz 492", "gx ai 688", "ma zr 606", "vl lo 162", "j hx 552", "sz jo 317", "nd sg 731", "hk ij 109", "yi f 790", "iy md 454", "pn tg 941", "ir dr 529", "qi uv 952", "pp yh 225", "jq gu 221", "yy jy 921", "m j 378"};
    ProbabilisticTranslator* pObj = new ProbabilisticTranslator();
    clock_t start = clock();
    int result = pObj->maximumFidelity(text, dictionary, frequencies);
    clock_t end = clock();
    delete pObj;
    int expected = 20194;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> text = {"a", "bb c"};
    vector<string> dictionary = {"a : a a", "bb : b", "c : c", "ccc : a"};
    vector<string> frequencies = {"y z 2", "x y 10", "z x 5"};
    ProbabilisticTranslator* pObj = new ProbabilisticTranslator();
    clock_t start = clock();
    int result = pObj->maximumFidelity(text, dictionary, frequencies);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> text = {"a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y"};
    vector<string> dictionary = {"a : c d e f g h i j k l m n o p q r s t u v w x y", "b : a d e f g h i j k l m n o p q r s t u v w x y", "c : b d e f g h i j k l m n o p q r s t u v w x y", "d : c d e f g h i j k l m n o p q r s t u v w x y", "e : a d e f g h i j k l m n o p q r s t u v w x y", "f : c d e f g h i j k l m n o p q r s t u v w x y", "g : a d e f g h i j k l m n o p q r s t u v w x y", "h : b d e f g h i j k l m n o p q r s t u v w x y", "i : c d e f g h i j k l m n o p q r s t u v w x y", "j : a d e f g h i j k l m n o p q r s t u v w x y", "k : c d e f g h i j k l m n o p q r s t u v w x y", "l : a d e f g h i j k l m n o p q r s t u v w x y", "m : b d e f g h i j k l m n o p q r s t u v w x y", "n : c d e f g h i j k l m n o p q r s t u v w x y", "o : a d e f g h i j k l m n o p q r s t u v w x y", "p : c d e f g h i j k l m n o p q r s t u v w x y", "q : a d e f g h i j k l m n o p q r s t u v w x y", "r : b d e f g h i j k l m n o p q r s t u v w x y", "s : c d e f g h i j k l m n o p q r s t u v w x y", "t : a d e f g h i j k l m n o p q r s t u v w x y", "u : c d e f g h i j k l m n o p q r s t u v w x y", "v : a d e f g h i j k l m n o p q r s t u v w x y", "w : b d e f g h i j k l m n o p q r s t u v w x y", "x : c d e f g h i j k l m n o p q r s t u v w x y", "y : a d e f g h i j k l m n o p q r s t u v w x y"};
    vector<string> frequencies = {"a a 10", "a b 20", "c d 30"};
    ProbabilisticTranslator* pObj = new ProbabilisticTranslator();
    clock_t start = clock();
    int result = pObj->maximumFidelity(text, dictionary, frequencies);
    clock_t end = clock();
    delete pObj;
    int expected = 15000;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> text = {"a a a a a a a a a a a a a a a a a a a b b b b b b", "a a a a a a a a a a a a a a a a a a a b b b b b b", "a a a a a a a a a a a a a a a a a a a b b b b b b", "a a a a a a a a a a a a a a a a a a a b b b b b b", "a a a a a a a a a a a a a a a a a a a b b b b b b", "a a a a a a a a a a a a a a a a a a a b b b b b b", "a a a a a a a a a a a a a a a a a a a b b b b b b", "a a a a a a a a a a a a a a a a a a a b b b b b b", "a a a a a a a a a a a a a a a a a a a b b b b b b", "a a a a a a a a a a a a a a a a a a a b b b b b b", "a a a a a a a a a a a a a a a a a a a b b b b b b", "a a a a a a a a a a a a a a a a a a a b b b b b b", "a a a a a a a a a a a a a a a a a a a b b b b b b", "a a a a a a a a a a a a a a a a a a a b b b b b b", "a a a a a a a a a a a a a a a a a a a b b b b b b", "a a a a a a a a a a a a a a a a a a a b b b b b b", "a a a a a a a a a a a a a a a a a a a b b b b b b", "a a a a a a a a a a a a a a a a a a a b b b b b b", "a a a a a a a a a a a a a a a a a a a b b b b b b", "a a a a a a a a a a a a a a a a a a a b b b b b b", "a a a a a a a a a a a a a a a a a a a b b b b b b", "a a a a a a a a a a a a a a a a a a a b b b b b b", "a a a a a a a a a a a a a a a a a a a b b b b b b", "a a a a a a a a a a a a a a a a a a a b b b b b b", "a a a a a a a a a a a a a a a a a a a b b b b b b", "a a a a a a a a a a a a a a a a a a a b b b b b b", "a a a a a a a a a a a a a a a a a a a b b b b b b", "a a a a a a a a a a a a a a a a a a a b b b b b b", "a a a a a a a a a a a a a a a a a a a b b b b b b", "a a a a a a a a a a a a a a a a a a a b b b b b b", "a a a a a a a a a a a a a a a a a a a b b b b b b", "a a a a a a a a a a a a a a a a a a a b b b b b b", "a a a a a a a a a a a a a a a a a a a b b b b b b", "a a a a a a a a a a a a a a a a a a a b b b b b b", "a a a a a a a a a a a a a a a a a a a b b b b b b", "a a a a a a a a a a a a a a a a a a a b b b b b b", "a a a a a a a a a a a a a a a a a a a b b b b b b", "a a a a a a a a a a a a a a a a a a a b b b b b b", "a a a a a a a a a a a a a a a a a a a b b b b b b", "a a a a a a a a a a a a a a a a a a a b b b b b b", "a a a a a a a a a a a a a a a a a a a b b b b b b", "a a a a a a a a a a a a a a a a a a a b b b b b b", "a a a a a a a a a a a a a a a a a a a b b b b b b", "a a a a a a a a a a a a a a a a a a a b b b b b b", "a a a a a a a a a a a a a a a a a a a b b b b b b", "a a a a a a a a a a a a a a a a a a a b b b b b b", "a a a a a a a a a a a a a a a a a a a b b b b b b", "a a a a a a a a a a a a a a a a a a a b b b b b b", "a a a a a a a a a a a a a a a a a a a b b b b b b", "a a a a a a a a a a a a a a a a a a a b b b b b b"};
    vector<string> dictionary = {"a : f g h a d f", "b : r t q e y f"};
    vector<string> frequencies = {"g e 333", "h y 444"};
    ProbabilisticTranslator* pObj = new ProbabilisticTranslator();
    clock_t start = clock();
    int result = pObj->maximumFidelity(text, dictionary, frequencies);
    clock_t end = clock();
    delete pObj;
    int expected = 22200;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> text = {"a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x yz", "a b c d e f g h i j k l m n o p q r s t u v w x yz", "a b c d e f g h i j k l m n o p q r s t u v w x yz", "a b c d e f g h i j k l m n o p q r s t u v w x yz", "a b c d e f g h i j k l m n o p q r s t u v w x yz", "a b c d e f g h i j k l m n o p q r s t u v w x yz", "a b c d e f g h i j k l m n o p q r s t u v w x yz", "a b c d e f g h i j k l m n o p q r s t u v w x yz", "a b c d e f g h i j k l m n o p q r s t u v w x yz", "a b c d e f g h i j k l m n o p q r s t u v w x yz", "a b c d e f g h i j k l m n o p q r s t u v w x yz", "a b c d e f g h i j k l m n o p q r s t u v w x yz", "a b c d e f g h i j k l m n o p q r s t u v w x yz", "a b c d e f g h i j k l m n o p q r s t u v w x yz", "a b c d e f g h i j k l m n o p q r s t u v w x yz", "a b c d e f g h i j k l m n o p q r s t u v w x yz", "a b c d e f g h i j k l m n o p q r s t u v w x yz", "a b c d e f g h i j k l m n o p q r s t u v w x yz", "a b c d e f g h i j k l m n o p q r s t u v w x yz", "a b c d e f g h i j k l m n o p q r s t u v w x yz", "a b c d e f g h i j k l m n o p q r s t u v w x yz", "a b c d e f g h i j k l m n o p q r s t u v w x yz"};
    vector<string> dictionary = {"a : b c d e f g h i j k l m n o p q r s t u v w x", "b : b c d e f g h i j k l m n o p q r s t u v w x", "c : b c d e f g h i j k l m n o p q r s t u v w x", "d : b c d e f g h i j k l m n o p q r s t u v w x", "e : b c d e f g h i j k l m n o p q r s t u v w x", "f : b c d e f g h i j k l m n o p q r s t u v w x", "g : b c d e f g h i j k l m n o p q r s t u v w x", "h : b c d e f g h i j k l m n o p q r s t u v w x", "i : b c d e f g h i j k l m n o p q r s t u v w x", "j : b c d e f g h i j k l m n o p q r s t u v w x", "k : b c d e f g h i j k l m n o p q r s t u v w x", "l : b c d e f g h i j k l m n o p q r s t u v w x", "m : b c d e f g h i j k l m n o p q r s t u v w x", "n : b c d e f g h i j k l m n o p q r s t u v w x", "o : b c d e f g h i j k l m n o p q r s t u v w x", "p : b c d e f g h i j k l m n o p q r s t u v w x", "q : b c d e f g h i j k l m n o p q r s t u v w x", "r : b c d e f g h i j k l m n o p q r s t u v w x", "s : b c d e f g h i j k l m n o p q r s t u v w x", "t : b c d e f g h i j k l m n o p q r s t u v w x", "u : b c d e f g h i j k l m n o p q r s t u v w x", "v : b c d e f g h i j k l m n o p q r s t u v w x", "w : b c d e f g h i j k l m n o p q r s t u v w x", "x : b c d e f g h i j k l m n o p q r s t u v w x", "yz : b c d e f g h i j k l m n o p q r s t u v w x", "y : b c d e f g h i j k l m n o p q r s t u v w x"};
    vector<string> frequencies = {"a b 1"};
    ProbabilisticTranslator* pObj = new ProbabilisticTranslator();
    clock_t start = clock();
    int result = pObj->maximumFidelity(text, dictionary, frequencies);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> text = {"q a z x s w e d c v f r t g b n h y u j m k i o l", "q a z x s w e d c v f r t g b n h y u j m k i o l", "q a z x s w e d c v f r t g b n h y u j m k i o l", "q a z x s w e d c v f r t g b n h y u j m k i o l", "q a z x s w e d c v f r t g b n h y u j m k i o l", "q a z x s w e d c v f r t g b n h y u j m k i o l", "q a z x s w e d c v f r t g b n h y u j m k i o l", "q a z x s w e d c v f r t g b n h y u j m k i o l", "q a z x s w e d c v f r t g b n h y u j m k i o l", "q a z x s w e d c v f r t g b n h y u j m k i o l", "q a z x s w e d c v f r t g b n h y u j m k i o l", "q a z x s w e d c v f r t g b n h y u j m k i o l", "q a z x s w e d c v f r t g b n h y u j m k i o l", "q a z x s w e d c v f r t g b n h y u j m k i o l", "q a z x s w e d c v f r t g b n h y u j m k i o l", "q a z x s w e d c v f r t g b n h y u j m k i o l", "q a z x s w e d c v f r t g b n h y u j m k i o l", "q a z x s w e d c v f r t g b n h y u j m k i o l", "q a z x s w e d c v f r t g b n h y u j m k i o l", "q a z x s w e d c v f r t g b n h y u j m k i o l", "q a z x s w e d c v f r t g b n h y u j m k i o l", "q a z x s w e d c v f r t g b n h y u j m k i o l", "q a z x s w e d c v f r t g b n h y u j m k i o l", "q a z x s w e d c v f r t g b n h y u j m k i o l", "q a z x s w e d c v f r t g b n h y u j m k i o l", "q a z x s w e d c v f r t g b n h y u j m k i o l", "q a z x s w e d c v f r t g b n h y u j m k i o l", "q a z x s w e d c v f r t g b n h y u j m k i o l", "q a z x s w e d c v f r t g b n h y u j m k i o l", "q a z x s w e d c v f r t g b n h y u j m k i o l", "q a z x s w e d c v f r t g b n h y u j m k i o l", "q a z x s w e d c v f r t g b n h y u j m k i o l", "q a z x s w e d c v f r t g b n h y u j m k i o l", "q a z x s w e d c v f r t g b n h y u j m k i o l", "q a z x s w e d c v f r t g b n h y u j m k i o l", "q a z x s w e d c v f r t g b n h y u j m k i o l", "q a z x s w e d c v f r t g b n h y u j m k i o l", "q a z x s w e d c v f r t g b n h y u j m k i o l", "q a z x s w e d c v f r t g b n h y u j m k i o l", "q a z x s w e d c v f r t g b n h y u j m k i o l", "q a z x s w e d c v f r t g b n h y u j m k i o l", "q a z x s w e d c v f r t g b n h y u j m k i o l", "q a z x s w e d c v f r t g b n h y u j m k i o l", "q a z x s w e d c v f r t g b n h y u j m k i o l", "q a z x s w e d c v f r t g b n h y u j m k i o l", "q a z x s w e d c v f r t g b n h y u j m k i o l", "q a z x s w e d c v f r t g b n h y u j m k i o l", "q a z x s w e d c v f r t g b n h y u j m k i o l", "q a z x s w e d c v f r t g b n h y u j m k i o l", "q a z x s w e d c v f r t g b n h y u j m k i o l"};
    vector<string> dictionary = {"q : q a z x s w e d c v f r t g b n h y u j m k i", "a : q a z x s w e d c v f r t g b n h y u j m k i", "z : q a z x s w e d c v f r t g b n h y u j m k i", "w : q a z x s w e d c v f r t g b n h y u j m k i", "s : q a z x s w e d c v f r t g b n h y u j m k i", "x : q a z x s w e d c v f r t g b n h y u j m k i", "e : q a z x s w e d c v f r t g b n h y u j m k i", "d : q a z x s w e d c v f r t g b n h y u j m k i", "c : q a z x s w e d c v f r t g b n h y u j m k i", "r : q a z x s w e d c v f r t g b n h y u j m k i", "f : q a z x s w e d c v f r t g b n h y u j m k i", "v : q a z x s w e d c v f r t g b n h y u j m k i", "t : q a z x s w e d c v f r t g b n h y u j m k i", "g : q a z x s w e d c v f r t g b n h y u j m k i", "b : q a z x s w e d c v f r t g b n h y u j m k i", "y : q a z x s w e d c v f r t g b n h y u j m k i", "h : q a z x s w e d c v f r t g b n h y u j m k i", "n : q a z x s w e d c v f r t g b n h y u j m k i", "u : q a z x s w e d c v f r t g b n h y u j m k i", "j : q a z x s w e d c v f r t g b n h y u j m k i", "m : q a z x s w e d c v f r t g b n h y u j m k i", "i : q a z x s w e d c v f r t g b n h y u j m k i", "o : q a z x s w e d c v f r t g b n h y u j m k i", "l : q a z x s w e d c v f r t g b n h y u j m k i", "k : q a z x s w e d c v f r t g b n h y u j m k i"};
    vector<string> frequencies = {"q a 1", "q z 1", "q w 1", "q s 1", "q x 1", "q k 1", "q e 1", "q d 1", "q c 1", "q r 1", "q f 1", "q v 1", "q t 1", "q g 1", "q b 1", "q y 1", "q h 1", "q n 1", "z w 2", "z s 1", "z d 3", "z f 4", "x d 3", "x f 4", "x g 5", "c f 4", "d r 3", "e g 5", "v g 4", "v f 4", "v s 4", "v h 1", "b f 1", "b h 1", "j h 1", "r f 1", "t f 1", "c d 1"};
    ProbabilisticTranslator* pObj = new ProbabilisticTranslator();
    clock_t start = clock();
    int result = pObj->maximumFidelity(text, dictionary, frequencies);
    clock_t end = clock();
    delete pObj;
    int expected = 3125;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> text = {"a", "b", "c", "d", "e", "f", "g", "h", "k", "l", "q", "w", "e", "r", "t", "y", "u", "i", "o", "p", "v", "b", "n", "m", "q", "qw", "qwq", "qwqwqw"};
    vector<string> dictionary = {"a : b c d e f g h k l m n o p q r s t u v w x y z", "c : b c d e f g h k l m n o p q r s t u v w x y z", "d : b c d e f g h k l m n o p q r s t u v w x y z", "e : b c d e f g h k l m n o p q r s t u v w x y z", "f : b c d e f g h k l m n o p q r s t u v w x y z", "g : b c d e f g h k l m n o p q r s t u v w x y z", "h : b c d e f g h k l m n o p q r s t u v w x y z", "y : b c d e f g h k l m n o p q r s t u v w x y z", "k : b c d e f g h k l m n o p q r s t u v w x y z", "l : b c d e f g h k l m n o p q r s t u v w x y z", "m : b c d e f g h k l m n o p q r s t u v w x y z", "da : b c d e f g h k l m n o p q r s t u v w x y z", "la : b c d e f g h k l m n o p q r s t u v w x y z", "ka : b c d e f g h k l m n o p q r s t u v w x y z", "fs : b c d e f g h k l m n o p q r s t u v w x y z", "nd : b c d e f g h k l m n o p q r s t u v w x y z", "as : b c d e f g h k l m n o p q r s t u v w x y z", "ha : b c d e f g h k l m n o p q r s t u v w x y z", "ma : b c d e f g h k l m n o p q r s t u v w x y z", "qw : b c d e f g h k l m n o p q r s t u v w x y z", "b : a", "w : a", "o : a", "r : a", "t : a", "u : b c d e f g h k l m n o p q r s t u v w x y z", "i : b c d e f g h k l m n o p q r s t u v w x y z", "p : b c d e f g h k l m n o p q r s t u v w x y z", "v : b c d e f g h k l m n o p q r s t u v w x y z", "q : b c d e f g h k l m n o p q r s t u v w x y z", "n : a", "qwq : a", "qwqwqw : h k l m n o p q r s t u v w x y z"};
    vector<string> frequencies = {"a a 100", "a b 100", "a c 100", "a d 100", "a e 100", "a f 100", "a g 100", "a n 100", "a m 100", "qeqe kjk 100", "ojdaf asdf 100", "a qr 100", "m d 100", "ma na 100", "o p 100", "q r 100"};
    ProbabilisticTranslator* pObj = new ProbabilisticTranslator();
    clock_t start = clock();
    int result = pObj->maximumFidelity(text, dictionary, frequencies);
    clock_t end = clock();
    delete pObj;
    int expected = 1500;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> text = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z", "aa", "bb", "cc", "dd", "ee", "ff", "gg", "hh", "ii", "jj", "kk", "ll", "mm", "nn", "oo", "pp", "qq", "rr", "ss", "tt", "uu", "vv", "ww", "xx"};
    vector<string> dictionary = {"a : a b c d e f g h i j k l m n o p q r s t u", "b : a b c d e f g h i j k l m n o p q r s t u", "c : a b c d e f g h i j k l m n o p q r s t u", "d : a b c d e f g h i j k l m n o p q r s t u", "e : a b c d e f g h i j k l m n o p q r s t u", "f : a b c d e f g h i j k l m n o p q r s t u", "g : a b c d e f g h i j k l m n o p q r s t u", "h : a b c d e f g h i j k l m n o p q r s t u", "i : a b c d e f g h i j k l m n o p q r s t u", "j : a b c d e f g h i j k l m n o p q r s t u", "k : a b c d e f g h i j k l m n o p q r s t u", "l : a b c d e f g h i j k l m n o p q r s t u", "m : a b c d e f g h i j k l m n o p q r s t u", "n : a b c d e f g h i j k l m n o p q r s t u", "o : a b c d e f g h i j k l m n o p q r s t u", "p : a b c d e f g h i j k l m n o p q r s t u", "q : a b c d e f g h i j k l m n o p q r s t u", "r : a b c d e f g h i j k l m n o p q r s t u", "s : a b c d e f g h i j k l m n o p q r s t u", "t : a b c d e f g h i j k l m n o p q r s t u", "u : a b c d e f g h i j k l m n o p q r s t u", "v : a b c d e f g h i j k l m n o p q r s t u", "w : a b c d e f g h i j k l m n o p q r s t u", "x : a b c d e f g h i j k l m n o p q r s t u", "y : a b c d e f g h i j k l m n o p q r s t u", "z : a b c d e f g h i j k l m n o p q r s t u", "aa : a b c d e f g h i j k l m n o p q r s t u", "bb : a b c d e f g h i j k l m n o p q r s t u", "cc : a b c d e f g h i j k l m n o p q r s t u", "dd : a b c d e f g h i j k l m n o p q r s t u", "ee : a b c d e f g h i j k l m n o p q r s t u", "ff : a b c d e f g h i j k l m n o p q r s t u", "gg : a b c d e f g h i j k l m n o p q r s t u", "hh : a b c d e f g h i j k l m n o p q r s t u", "ii : x z y a d", "jj : a b c d e f g h i j k l m n o p q r s t u", "kk : a b c d e f g h i j k l m n o p q r s t u", "ll : a b c d e f g h i j k l m n o p q r s t u", "mm : a b c d e f g h i j k l m n o p q r s t u", "nn : a b c d e f g h i j k l m n o p q r s t u", "oo : a b c d e f g h i j k l m n o p q r s t u", "pp : a b c d e f g h i j k l m n o p q r s t u", "qq : a b c d e f g h i j k l m n o p q r s t u", "rr : a b c d e f g h i j k l m n o p q r s t u", "ss : a b c d e f g h i j k l m n o p q r s t u", "tt : a b c d e f g h i j k l m n o p q r s t u", "uu : a b c d e f g h i j k l m n o p q r s t u", "vv : a b c d e f g h i j k l m n o p q r s t u", "ww : a b c d e f g h i j k l m n o p q r s t u", "xx : a b c d e f g h i j k l m n o p q r s t u"};
    vector<string> frequencies = {"a b 99", "b a 98", "c b 97", "c a 98", "c c 93", "d d 92", "x x 1", "a c 99", "a d 99", "a e 99", "a f 99", "a g 98", "a ff 100", "ff z 92", "r x 99", "z a 1", "z x 2", "z l 3"};
    ProbabilisticTranslator* pObj = new ProbabilisticTranslator();
    clock_t start = clock();
    int result = pObj->maximumFidelity(text, dictionary, frequencies);
    clock_t end = clock();
    delete pObj;
    int expected = 4827;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=15787402&rd=10009&pm=6010
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
 
class ProbabilisticTranslator {
public:
  int maximumFidelity(vector <string>, vector <string>, vector <string>);
};
 
deque <string> org;
map <string, set <string> > di;
map <string, map <string, int> > fc;
 
int ret;
 
void fun (map <string, int> t, int p)
{
  if (p >= org.size())
  {
    for (map <string, int>::iterator j = t.begin(); j != t.end(); j++)
    {
      ret = max (ret, j->second);
    }
    return;
  }
  map <string, int> cv;
  for (set<string>::iterator i = di[org[p]].begin(); i != di[org[p]].end(); i++)
  {
    cv[*i] = 0;
    for (map <string, int>::iterator j = t.begin(); j != t.end(); j++)
    {
      cv[*i] = max (cv[*i], fc[j->first][*i] + j->second);
    }
  }
  
  fun (cv, p+1);
}
 
int ProbabilisticTranslator::maximumFidelity(vector <string> t, vector <string> d, vector <string> f) {
  //int fi = 0;
  org.clear();
  di.clear();
  fc.clear();
  
  for (int i = 0; i < t.size(); i++)
  {
    istringstream in(t[i]);
    string s;
    while (in >> s)
    {
      org.push_back (s);
    }
  }
  
  for (int i = 0; i < d.size(); i++)
  {
    istringstream in(d[i]);
    string so, s;
    in >> so;
    char c;
    in >> c;
    while (in >> s)
    {
      di[so].insert (s);
    }
  }
  
  for (int i = 0; i < f.size(); i++)
  {
    char xt[30], yt[30];
    int fr;
    sscanf (f[i].c_str(), "%s %s %d", xt, yt, &fr);
    string x(xt), y(yt);
    fc[x][y] = fr;
  }
  
  map <string, int> cv;
  for (set<string>::iterator i = di[org[0]].begin(); i != di[org[0]].end(); i++)
  {
    cv[*i] = 0;
  }
  
  ret = 0;
  fun (cv, 1);
  
  return ret;
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/