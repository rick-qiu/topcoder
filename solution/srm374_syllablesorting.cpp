/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8374
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

class SyllableSorting {
public:
    vector<string> sortWords(vector<string> words);
};

vector<string> SyllableSorting::sortWords(vector<string> words) {
    vector<string> ret;
    return ret;
}


int test0() {
    vector<string> words = {"xiaoxiao", "yamagawa", "gawayama"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"gawayama", "yamagawa", "xiaoxiao"};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> words = {"bcedba", "dbabce", "zyuxxo"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bcedba", "dbabce", "zyuxxo"};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> words = {"hgnibqqaxeiuteuuvksi", "jxbuzui", "zrotyqeruiydozui", "ywuuzkto", "lmopbookoagyco", "vredfvavvexliu"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"hgnibqqaxeiuteuuvksi", "vredfvavvexliu", "lmopbookoagyco", "jxbuzui", "zrotyqeruiydozui", "ywuuzkto"};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> words = {"crazgo", "cwsoygiokiuo", "yueoseeu", "tuadiojvugeoe", "naumxditui", "sgukkelyoi", "nrohjuasoia", "mgabmo"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"mgabmo", "crazgo", "cwsoygiokiuo", "tuadiojvugeoe", "nrohjuasoia", "sgukkelyoi", "naumxditui", "yueoseeu"};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> words = {"wheewjuguoi", "coutcu", "hqivaa", "sgiibgwi", "ypaqpki", "bgyikouapae", "wqakeu", "skolfo", "pzesaa", "ypivhi"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"sgiibgwi", "bgyikouapae", "coutcu", "wheewjuguoi", "hqivaa", "wqakeu", "skolfo", "pzesaa", "ypaqpki", "ypivhi"};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> words = {"bxueoiilzfhyowppmicxuuiobxpdmqvloifieuefhlhxreurvu", "wsmsfgtaztxeaedzuiiuirywxfuufxvoueneuiempdnoaqthaa", "waaaascbwaorioiosuiuieuasqqydwxeijlmvxlkoo", "jiouuiixgfauroaeejlgoaowoaua", "fpsioiauamwbdoiiiaebvqaovsrsixdjmpoeearueoaeuuifvo", "lcjqsxueuatboaaiiiscoieaeubaauouaeadcuioetmceoiufe", "nfbaaiuoaeqkkjeetciiieuuiomuaaatrkruiawvchiioefsfe", "dpsqeeryzwuxrxeeoeuujhwsgtsjulvtplbie", "lsvoalrytaubhttaoeaoideaaeyddiaoukvmseaeioyuuaagxa", "mpmqykviafiioeuaujieeiiaommuiuxjmuuigeeielgfxebtzo", "sjmhbieufrhgeqrzaijdjtnsaxfxuiouuayvxgfojhxeoouuie", "grliuueeihtcmifltfgqdaqfpqiaiiusrnwyjgeoudeiaekqni", "rbzhzpwimkqieeuuukrkeieoabgrvdeueclstzxstyowqaoaka", "ytmbwsexjyfzmaauecntcaeiohxmooaoaoxmsueiuwjoaoazla", "ylfqibiuauauzzxflxeeiutvwxuuo", "leieudxgxkcolzrdoaoaihmmsoeuwoooueielaaaiiu", "frveiauwgpxpiaophjoioaeopgchlsrieaxcnxtpqsoyswqeae", "ndcnceupgwaierdtvyooeaowhsseeaooaqrfbzmyngoqyooiuu", "qckauierzzypiusrkooyqgsnteijcgfbwpueebmjplza", "kwzmxuuodswiuiapcqdscaegnuioghcwzpdewhwsiouawhmsfi", "kiiuuaieomdxdiepwpczqzeiuvjeaaiheeauiuuqreaeaua"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"lcjqsxueuatboaaiiiscoieaeubaauouaeadcuioetmceoiufe", "rbzhzpwimkqieeuuukrkeieoabgrvdeueclstzxstyowqaoaka", "lsvoalrytaubhttaoeaoideaaeyddiaoukvmseaeioyuuaagxa", "ylfqibiuauauzzxflxeeiutvwxuuo", "qckauierzzypiusrkooyqgsnteijcgfbwpueebmjplza", "mpmqykviafiioeuaujieeiiaommuiuxjmuuigeeielgfxebtzo", "fpsioiauamwbdoiiiaebvqaovsrsixdjmpoeearueoaeuuifvo", "bxueoiilzfhyowppmicxuuiobxpdmqvloifieuefhlhxreurvu", "ytmbwsexjyfzmaauecntcaeiohxmooaoaoxmsueiuwjoaoazla", "grliuueeihtcmifltfgqdaqfpqiaiiusrnwyjgeoudeiaekqni", "dpsqeeryzwuxrxeeoeuujhwsgtsjulvtplbie", "kwzmxuuodswiuiapcqdscaegnuioghcwzpdewhwsiouawhmsfi", "leieudxgxkcolzrdoaoaihmmsoeuwoooueielaaaiiu", "wsmsfgtaztxeaedzuiiuirywxfuufxvoueneuiempdnoaqthaa", "sjmhbieufrhgeqrzaijdjtnsaxfxuiouuayvxgfojhxeoouuie", "frveiauwgpxpiaophjoioaeopgchlsrieaxcnxtpqsoyswqeae", "nfbaaiuoaeqkkjeetciiieuuiomuaaatrkruiawvchiioefsfe", "kiiuuaieomdxdiepwpczqzeiuvjeaaiheeauiuuqreaeaua", "jiouuiixgfauroaeejlgoaowoaua", "waaaascbwaorioiosuiuieuasqqydwxeijlmvxlkoo", "ndcnceupgwaierdtvyooeaowhsseeaooaqrfbzmyngoqyooiuu"};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> words = {"dprktuovkpflcdieihgfgqwyytazmtdkuikshouuoiikueouba", "dyieeegkuouiiiiuyxxtzjaoaupykmpmwiwvhgoopqzgueeiue", "rjsjjnmcioszzgyaxiaueeuljuuuzzkktfsvdibqffdbaiflvi", "lfiiauwycksaejiauouiafdhuufoooie", "xzqntvaznauuuaaolmzdxjseamyqountguoaauibwmjvzaioeu", "xhwvlulzjdniemtcbfhoagkdoalieuefrwaouollhuuueofxuo", "ycjkeouiebdkoiofzlmsyatauaeajtrszsiueutfeiuejvcnwe", "mzsfdjwaoispioivpvyiuuijdiiueaooasqueoooohzbvcoowo", "ckmuobtiuekrwtalzxktuoiocieueiollioebtrycujtkqhaui", "nykkziaoumwfkkaoeojxdttugzcyseeulvauouaocqsruiytbo", "kviuoeoiuabhxkbgmotaiaeoooeydaeioooihzpwturwkaaaeo", "yzmksuijbzrvyuaiznlgmaeydmykliukbroioeegiaieoearoi", "ksbndauhfbpqevweeeieaamaieuiiztmsfjmxu", "wouuuhnqtounrtwlzeaoekvkieuaaerdtjqqsricbjnleoeoqi", "wxkeehrweeeuojgbaouooiotyreaiuekysgsioieqaeoiuiriu", "bgpmhkeovouoisieeasvxjuuaeaoxkbltbyjeajtyxlkcwqiza", "mkjoeiqkraobdweiaiiixzruomfsuueieiihhntkiaaevhkfpe", "pxtjoanuouarxoaodyfpjhauoezceieaeueifzrplxjznidnbu", "xdgnyoelxcdeiwqmiojhaueeaqpxeaafdiuaeikxbieiarxpfo", "zmaaedhkeeuouuohbhdoieamwqailblksfhoigbzvenuioaiii", "plbvbgeuohplouoeeezqrszmcaeoqlvcwrmrauluuoobxoeieu", "slzlplmeivxqoiatnrqhfruaqndeodfauieeueuwlpvmsuueau", "ktmoueurjkwdlztziwphkladyoueaindvauiuae", "qptqcuoiibtvioufnbbprriusmjhmncioqhdleaesuaouuouai", "vqmkbdoiiefhhzdaekzvvwdroyjykmauuatycboieeiagpquai", "zkvhxgbxaipuaieaeoidtriuiueiaxwcze", "yjaaiaaaetvsaiuaeyeoeiiurjeoaimdwymkeoiiqsnvuihweo", "gxmqqcwkisyooauorieuiiiumhzfpvwyverprnmexoiaeaidsu", "xleauioiatffxxpauuzrkgbaiuonlhdcdiuoezlsniaiulpvha", "fnaaoowxyxbaeeilooeiocoooooudmyqeiwpxjiiovnykvdaki", "krdjvaeaeqkaoeioupoueougiouothtctoopnlkmdoeoingdia", "wxoouueiphioueaepxcmosjcuueanpooabuaeeeodypauhhzei", "cooaaaeomsooeioadzmpilttvgszqi", "hxvaafpgaeieuuifnxeouuzuououooanbdsvymuaidveouomoe", "zlvsxwsoatytymacsmouemzssslewmttvqcbepzwuaiguoiuja", "huaaaeouoobqxqbbiiuzaiiauteueovdoaitsoiaudkgjqaioe", "wvnyiuaiacveeuuauounpqxtcccaskdmiiieeassxmwahyouae", "wjswlepgqqfqaoaabwnxuioefzzfweaui", "zhxgqdkcyucfoaifpnpuoeeeindtjfvsuinxiaocnxrmajkaia", "vvgvwxuljgkjcauaojauuuowhjwmaljzzkyueiqoeeaioioecu", "fqjhoaeaeagbptymukmdvaeiealxjgezoeaaauuvcmysvovzoa", "qbeeooaamoaeiaqpjclelpyqxouuegmdmczeeynxrreocmtzui", "lsyqcyuouobvccsmquiozwhyvloaadrlvioualrtcyaowoauao", "gnslreajbeoexkzqckhzeelmjviqkmlkiiovleieoaicxcvhaa", "ffxwfwjauopaaeoauioigvyoazpqqfznhiecqfeuuiiuasuiau", "nqmpwxdusvieuvcrwpprayiauelpoiiheiiououuucglcbauta"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"dprktuovkpflcdieihgfgqwyytazmtdkuikshouuoiikueouba", "ycjkeouiebdkoiofzlmsyatauaeajtrszsiueutfeiuejvcnwe", "mkjoeiqkraobdweiaiiixzruomfsuueieiihhntkiaaevhkfpe", "bgpmhkeovouoisieeasvxjuuaeaoxkbltbyjeajtyxlkcwqiza", "kviuoeoiuabhxkbgmotaiaeoooeydaeioooihzpwturwkaaaeo", "rjsjjnmcioszzgyaxiaueeuljuuuzzkktfsvdibqffdbaiflvi", "huaaaeouoobqxqbbiiuzaiiauteueovdoaitsoiaudkgjqaioe", "ckmuobtiuekrwtalzxktuoiocieueiollioebtrycujtkqhaui", "qptqcuoiibtvioufnbbprriusmjhmncioqhdleaesuaouuouai", "wxoouueiphioueaepxcmosjcuueanpooabuaeeeodypauhhzei", "lsyqcyuouobvccsmquiozwhyvloaadrlvioualrtcyaowoauao", "xzqntvaznauuuaaolmzdxjseamyqountguoaauibwmjvzaioeu", "wjswlepgqqfqaoaabwnxuioefzzfweaui", "plbvbgeuohplouoeeezqrszmcaeoqlvcwrmrauluuoobxoeieu", "wouuuhnqtounrtwlzeaoekvkieuaaerdtjqqsricbjnleoeoqi", "zhxgqdkcyucfoaifpnpuoeeeindtjfvsuinxiaocnxrmajkaia", "nqmpwxdusvieuvcrwpprayiauelpoiiheiiououuucglcbauta", "qbeeooaamoaeiaqpjclelpyqxouuegmdmczeeynxrreocmtzui", "cooaaaeomsooeioadzmpilttvgszqi", "fnaaoowxyxbaeeilooeiocoooooudmyqeiwpxjiiovnykvdaki", "ffxwfwjauopaaeoauioigvyoazpqqfznhiecqfeuuiiuasuiau", "nykkziaoumwfkkaoeojxdttugzcyseeulvauouaocqsruiytbo", "zlvsxwsoatytymacsmouemzssslewmttvqcbepzwuaiguoiuja", "vvgvwxuljgkjcauaojauuuowhjwmaljzzkyueiqoeeaioioecu", "wvnyiuaiacveeuuauounpqxtcccaskdmiiieeassxmwahyouae", "gnslreajbeoexkzqckhzeelmjviqkmlkiiovleieoaicxcvhaa", "slzlplmeivxqoiatnrqhfruaqndeodfauieeueuwlpvmsuueau", "zmaaedhkeeuouuohbhdoieamwqailblksfhoigbzvenuioaiii", "pxtjoanuouarxoaodyfpjhauoezceieaeueifzrplxjznidnbu", "gxmqqcwkisyooauorieuiiiumhzfpvwyverprnmexoiaeaidsu", "zkvhxgbxaipuaieaeoidtriuiueiaxwcze", "hxvaafpgaeieuuifnxeouuzuououooanbdsvymuaidveouomoe", "dyieeegkuouiiiiuyxxtzjaoaupykmpmwiwvhgoopqzgueeiue", "ktmoueurjkwdlztziwphkladyoueaindvauiuae", "lfiiauwycksaejiauouiafdhuufoooie", "xdgnyoelxcdeiwqmiojhaueeaqpxeaafdiuaeikxbieiarxpfo", "vqmkbdoiiefhhzdaekzvvwdroyjykmauuatycboieeiagpquai", "fqjhoaeaeagbptymukmdvaeiealxjgezoeaaauuvcmysvovzoa", "xhwvlulzjdniemtcbfhoagkdoalieuefrwaouollhuuueofxuo", "yzmksuijbzrvyuaiznlgmaeydmykliukbroioeegiaieoearoi", "krdjvaeaeqkaoeioupoueougiouothtctoopnlkmdoeoingdia", "ksbndauhfbpqevweeeieaamaieuiiztmsfjmxu", "wxkeehrweeeuojgbaouooiotyreaiuekysgsioieqaeoiuiriu", "yjaaiaaaetvsaiuaeyeoeiiurjeoaimdwymkeoiiqsnvuihweo", "mzsfdjwaoispioivpvyiuuijdiiueaooasqueoooohzbvcoowo", "xleauioiatffxxpauuzrkgbaiuonlhdcdiuoezlsniaiulpvha"};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> words = {"mrjlauujaoaaoylccpueeajlbloeaojksyeeimkwoiumquiiuu", "tsouoiamqxeuuaaiehuooiuuaiutnheaeeeytgnldiaobzpuae", "xsoaueiowbgbpxuxrdboejwaueovdooatywueieboiaipqiouo", "jwuuoaoilrauaigyqwiaoombiaisndyoo", "kvnmdkheiuvyaeuqbjddiambscmiiuaanyeaeakeiaiodmtfga", "qgtwwuefjooeueianeaoaeoeondrrao", "rpvaieqykdhcwagsjqweoauomyaoeouifvcuiievllaazkpoui", "hfmhbxkpoijrwvakqrnmeoiawuoeiilnmlaeeeeoyffjvoeqaa", "bxhkspopuoiijbvueiottniiuopnhpqqibgjgykobfsvuknooo", "qzsjaebyooeuescqkdmpxcumcpbvgmoqxmnpauiixmpueljwsa", "siueoaxrrcpyeauavcjnceosbieearxeiaaawswvchbuicfmua", "lyioeiiiylzvycoouzgptnouiiujvmluoiietzeoouiarfjctu", "jnrmpjfolcsfnaioitcbcmuoeaxpzwxiiuecmsaoouueuthzbu", "qzaeertqiolkvtjekckeokpcvyejhluamtsfjiuejbklxcwohu", "kqhoaiaduuoagnqlkuuivtjgoxknrsiembsvueiynaiiiumrca", "hueoehzwfyiaeesnhoenkdeitkjyhiiaonqygcphsokdntjuue", "xqqeeaueipdfybtioeurpiieopbgyofaeiielgxoo", "gbtqwnkguukgjdpwzaaamftxwioriaoekueaioigsteauuuemi", "ksdbhzwodqjjaeehwjpmzbaucbcsxiqdaiuercgaiihxxeapea", "yrsvhggcibggmglwiikbmzkaarcyqnzurkyeiufqaeadeaaeeo", "rpxpuofxaeopgclwsobtnkrxqkieysqkkbuxfvkifxyiuiemla", "xwsaumsgqxaabtvsiavmqiauevxtuuitiuiaemnzfweuuosybe", "tooueeaeuamsbjaajpaieieiotpriaeauuwcflvnkiiayndouo"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bxhkspopuoiijbvueiottniiuopnhpqqibgjgykobfsvuknooo", "yrsvhggcibggmglwiikbmzkaarcyqnzurkyeiufqaeadeaaeeo", "xsoaueiowbgbpxuxrdboejwaueovdooatywueieboiaipqiouo", "rpxpuofxaeopgclwsobtnkrxqkieysqkkbuxfvkifxyiuiemla", "xwsaumsgqxaabtvsiavmqiauevxtuuitiuiaemnzfweuuosybe", "qzsjaebyooeuescqkdmpxcumcpbvgmoqxmnpauiixmpueljwsa", "tsouoiamqxeuuaaiehuooiuuaiutnheaeeeytgnldiaobzpuae", "ksdbhzwodqjjaeehwjpmzbaucbcsxiqdaiuercgaiihxxeapea", "siueoaxrrcpyeauavcjnceosbieearxeiaaawswvchbuicfmua", "jnrmpjfolcsfnaioitcbcmuoeaxpzwxiiuecmsaoouueuthzbu", "kvnmdkheiuvyaeuqbjddiambscmiiuaanyeaeakeiaiodmtfga", "kqhoaiaduuoagnqlkuuivtjgoxknrsiembsvueiynaiiiumrca", "xqqeeaueipdfybtioeurpiieopbgyofaeiielgxoo", "qgtwwuefjooeueianeaoaeoeondrrao", "rpvaieqykdhcwagsjqweoauomyaoeouifvcuiievllaazkpoui", "gbtqwnkguukgjdpwzaaamftxwioriaoekueaioigsteauuuemi", "jwuuoaoilrauaigyqwiaoombiaisndyoo", "hfmhbxkpoijrwvakqrnmeoiawuoeiilnmlaeeeeoyffjvoeqaa", "qzaeertqiolkvtjekckeokpcvyejhluamtsfjiuejbklxcwohu", "hueoehzwfyiaeesnhoenkdeitkjyhiiaonqygcphsokdntjuue", "mrjlauujaoaaoylccpueeajlbloeaojksyeeimkwoiumquiiuu", "tooueeaeuamsbjaajpaieieiotpriaeauuwcflvnkiiayndouo", "lyioeiiiylzvycoouzgptnouiiujvmluoiietzeoouiarfjctu"};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> words = {"nheaiesgdhsaouizzvxkuiiikcsmguiahxfoeoajnzfzgiweee", "jdzyoeujdoiuiiiqcrjuabclaoaaoierqieuquaeeoielstflu", "pvoioeeaaqiiuouucaauuftpcjcdbxidqbroskceiuaenfkuea", "cvioouuuxkwphfnnobsyloiiuixgpdeaeeue", "nchoioentjqopzgeeudxgzpnginrgpcaeeuuncbeaxkgeoe", "xoiuieaqfaooyjeieqljxceioaqiiaaoouieymzpknueoewdoo", "vfeiaeoudwlqngtmunbaueieiajooaoezffxhlaqouiiiufuua", "lueioqooeioeidcclwrucsyeeaycjoegsouiaounsbyoeuuoei", "rhhspvouenueaoeunfyuuaoibxfxnifqpqisaoiuwldbwcueuu", "qieoeiaiazycxpiikdrhqdnvumvooueaoimnqmuxlsouoiorai", "slgygxeoomiiauuueiaqdbeaaelqqwalreiii", "mgwywjvpbockveiaauuawdtxqpluixskybzdajfvxjgoo", "wqiuaoerwoieaufrxqeauckveoaefdiiojlkwxquaakbluaoeu", "gsqaaojqknptioagjdfilkdouiemxoeeuoueiscfrvuoeuvfmi", "pyyiuueaounfydbxhewcrzpwyuuuvcneuablnxeiieoeklroao", "yjgoacnpeioausksdeaiaerrfqbgbovyvspioeuu", "dfrfejtfiioafrzkoouxdiaoauwiauirmdpltzkaeghmwvquie", "fsbnftqebqkaaxxfkrjnkbubstoe", "rwxwpghwoatywzhaeuezioiuaauekwaaeooaopvsfhlepvcqwu", "tllnlrzraifyydjvfepyeeeeoaiismhaiajqeueuieaibspbye", "hwrfzumouaioalfpvuiebxaauovxjleeotvguiyhgpiooixwca", "lwtieiuaoqmeeiooieqdhiooqxbuilqoeeuwhueenvprgyeeei", "foeaeeaheoiurybyrasrmrueeuicgoeoicrpiuouue", "kkqbyjquxwvwtdjuiaysqnsbtexgdsgeubztsypaotcskbmeoe", "hbsaaouowksydiqzeiuqaaiaukauaoaiuoqnpzmhuiooqwcdue", "raouepmrhjetwmuaeupouoojeaiiiaeiluieauaauugmqfeihi", "coiaopnxfaeooawiioauaeaekhxiepzjcfauofpeiiaweeouua", "bslsjioaaumrpneoigpgcminbviuwpgiuugcsdxsuaebqoeore", "xoeoaruiiaiioeisroueicdkbzniuietxyouiieoxystueoioe", "yyhkuioauakczeaiaosdtaoiioiepqgsnscyawfzcynygovcbu", "jgzraoiowdyrciioiiheieuuaqvpuaoiaukloaaaai", "dqhrqjiidxtthqueihfieaaoeemmqaooouneaooislsvhmfe", "kceieaeouilczaiuoieuqaeuiaqfeouu", "tvdnfaovzjeeogweauuooqoeuea", "kauiooixgftklctyilsvoaeariuoiietgeooeofhffxiuezfri", "kxaoooeekyzcpuijgeuuiaaipoaoiaiiurkhjkeiueomjjylxi", "pwrzaoudwwnlpeetksveiiddxeomcvwionnaeaeaaaldeieaue", "qoaueoqlsdjriwbwueeetaeooujbgueeomjsootphlooieohii", "jwkneiegzeiiaiehaieooaxmeoeajcwyeaedwhgqrjfcinnfke", "tsrcaueuicbjiicmpiooiuizxkzysikvgfoeoouevaauijhdio", "sbsmvroiiteiouoaidprlylsoxtkfuiuisoeiaiieuezjooaeo", "sfvbilydeaiohqwuuuueocdnmpounslhbueuuyffaiswjttpiu", "jmmxkfbzurdljsnjigoaieapdgpqcobxphiuaueiyuaiatthwa", "neoiuvuieiueueigeaaeefrviuuaogkuuueuuoujqghuioekse"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"jdzyoeujdoiuiiiqcrjuabclaoaaoierqieuquaeeoielstflu", "pyyiuueaounfydbxhewcrzpwyuuuvcneuablnxeiieoeklroao", "fsbnftqebqkaaxxfkrjnkbubstoe", "bslsjioaaumrpneoigpgcminbviuwpgiuugcsdxsuaebqoeore", "tllnlrzraifyydjvfepyeeeeoaiismhaiajqeueuieaibspbye", "cvioouuuxkwphfnnobsyloiiuixgpdeaeeue", "hwrfzumouaioalfpvuiebxaauovxjleeotvguiyhgpiooixwca", "rhhspvouenueaoeunfyuuaoibxfxnifqpqisaoiuwldbwcueuu", "jmmxkfbzurdljsnjigoaieapdgpqcobxphiuaueiyuaiatthwa", "kkqbyjquxwvwtdjuiaysqnsbtexgdsgeubztsypaotcskbmeoe", "pvoioeeaaqiiuouucaauuftpcjcdbxidqbroskceiuaenfkuea", "tsrcaueuicbjiicmpiooiuizxkzysikvgfoeoouevaauijhdio", "xoeoaruiiaiioeisroueicdkbzniuietxyouiieoxystueoioe", "sfvbilydeaiohqwuuuueocdnmpounslhbueuuyffaiswjttpiu", "foeaeeaheoiurybyrasrmrueeuicgoeoicrpiuouue", "mgwywjvpbockveiaauuawdtxqpluixskybzdajfvxjgoo", "wqiuaoerwoieaufrxqeauckveoaefdiiojlkwxquaakbluaoeu", "yjgoacnpeioausksdeaiaerrfqbgbovyvspioeuu", "coiaopnxfaeooawiioauaeaekhxiepzjcfauofpeiiaweeouua", "lueioqooeioeidcclwrucsyeeaycjoegsouiaounsbyoeuuoei", "pwrzaoudwwnlpeetksveiiddxeomcvwionnaeaeaaaldeieaue", "dfrfejtfiioafrzkoouxdiaoauwiauirmdpltzkaeghmwvquie", "sbsmvroiiteiouoaidprlylsoxtkfuiuisoeiaiieuezjooaeo", "dqhrqjiidxtthqueihfieaaoeemmqaooouneaooislsvhmfe", "jwkneiegzeiiaiehaieooaxmeoeajcwyeaedwhgqrjfcinnfke", "vfeiaeoudwlqngtmunbaueieiajooaoezffxhlaqouiiiufuua", "nchoioentjqopzgeeudxgzpnginrgpcaeeuuncbeaxkgeoe", "kauiooixgftklctyilsvoaeariuoiietgeooeofhffxiuezfri", "neoiuvuieiueueigeaaeefrviuuaogkuuueuuoujqghuioekse", "gsqaaojqknptioagjdfilkdouiemxoeeuoueiscfrvuoeuvfmi", "raouepmrhjetwmuaeupouoojeaiiiaeiluieauaauugmqfeihi", "tvdnfaovzjeeogweauuooqoeuea", "hbsaaouowksydiqzeiuqaaiaukauaoaiuoqnpzmhuiooqwcdue", "jgzraoiowdyrciioiiheieuuaqvpuaoiaukloaaaai", "qoaueoqlsdjriwbwueeetaeooujbgueeomjsootphlooieohii", "nheaiesgdhsaouizzvxkuiiikcsmguiahxfoeoajnzfzgiweee", "kxaoooeekyzcpuijgeuuiaaipoaoiaiiurkhjkeiueomjjylxi", "kceieaeouilczaiuoieuqaeuiaqfeouu", "yyhkuioauakczeaiaosdtaoiioiepqgsnscyawfzcynygovcbu", "qieoeiaiazycxpiikdrhqdnvumvooueaoimnqmuxlsouoiorai", "rwxwpghwoatywzhaeuezioiuaauekwaaeooaopvsfhlepvcqwu", "lwtieiuaoqmeeiooieqdhiooqxbuilqoeeuwhueenvprgyeeei", "slgygxeoomiiauuueiaqdbeaaelqqwalreiii", "xoiuieaqfaooyjeieqljxceioaqiiaaoouieymzpknueoewdoo"};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> words = {"vsluosjaiiodhiiisvmvxxuiiegjfriesoaauqsouiiuxqhdna", "jjeoiaywvuoaiueivduaieooiqmvbliohrceueuaepmzmhoito", "xbhkoooeeexpliioaoaiweiaiimaeuuieikuiuuioigsoiuuei", "xprmlzudskautfytwoargzcaeijnspyiqgyuieuiemqhnla", "cdkauauvxoeaipieuauigiiiurzhchkofwkuurfjeeobshoouu", "vsfeiucueiioayxbeihiuueoeoeabhfbpmqfudpaouoauyrffo", "fqhrtfdpsiqkcfoyweaieudkdauueoeufqdeuuxmsnxuavnbii", "dhlxtdesmgdleielysoadhjpmmilyyjaacoauoaowlbaiquiui", "vyieeycaeaoaeektshdeelmdwzpaesdeaiizqsverfoiiueoie", "bhuuucweoiaiiebwdczblucxvjdkunpsppaoiiucrcgaeqveii", "ziioeuimfltuuauuvkuaeogdioaiuuwjbfuioqwrjeauibaaae", "ysueeieiaofkpnfrgoudtcoeiuaulgeouuiiehjieeeaahxszo", "diiioieaiexwpjsdnfaozueoiszjaondkxbaa", "jmzauoknueiuppxgoaaoptxmhcouausaaeoeaeavyuuifypjwa", "qphiouiaavtxsaeiobvtjcsppeqgpkoeiibljladrfrbwpeuxa", "hsjqgeovteueifknhkuieujzjmngubcnsujmghdoeeiiywtaee", "crgcdcaaimtchaagkrteeefptbpyuuuerwjmbwsmuvwvwwuuye", "whkuuukrmoaeoudxpkpiiaoknpdturznkbiiieipzbwwmlxla", "bzzouuadjshheououtuiouiioogcgqdckcoyrcxthjkkixiuuu", "mhheudjjqssuuoebbyeuodzjeuuooiazuaeuatkvdvikflmbko"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ziioeuimfltuuauuvkuaeogdioaiuuwjbfuioqwrjeauibaaae", "mhheudjjqssuuoebbyeuodzjeuuooiazuaeuatkvdvikflmbko", "hsjqgeovteueifknhkuieujzjmngubcnsujmghdoeeiiywtaee", "vsfeiucueiioayxbeihiuueoeoeabhfbpmqfudpaouoauyrffo", "bhuuucweoiaiiebwdczblucxvjdkunpsppaoiiucrcgaeqveii", "qphiouiaavtxsaeiobvtjcsppeqgpkoeiibljladrfrbwpeuxa", "cdkauauvxoeaipieuauigiiiurzhchkofwkuurfjeeobshoouu", "bzzouuadjshheououtuiouiioogcgqdckcoyrcxthjkkixiuuu", "dhlxtdesmgdleielysoadhjpmmilyyjaacoauoaowlbaiquiui", "crgcdcaaimtchaagkrteeefptbpyuuuerwjmbwsmuvwvwwuuye", "vsluosjaiiodhiiisvmvxxuiiegjfriesoaauqsouiiuxqhdna", "diiioieaiexwpjsdnfaozueoiszjaondkxbaa", "fqhrtfdpsiqkcfoyweaieudkdauueoeufqdeuuxmsnxuavnbii", "xprmlzudskautfytwoargzcaeijnspyiqgyuieuiemqhnla", "ysueeieiaofkpnfrgoudtcoeiuaulgeouuiiehjieeeaahxszo", "whkuuukrmoaeoudxpkpiiaoknpdturznkbiiieipzbwwmlxla", "jmzauoknueiuppxgoaaoptxmhcouausaaeoeaeavyuuifypjwa", "xbhkoooeeexpliioaoaiweiaiimaeuuieikuiuuioigsoiuuei", "jjeoiaywvuoaiueivduaieooiqmvbliohrceueuaepmzmhoito", "vyieeycaeaoaeektshdeelmdwzpaesdeaiizqsverfoiiueoie"};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> words = {"yaouiieobyktiesueoipiueaoexqdiauifgaiiaooipbtyqfnu", "ktpmioueoigrcaiuoopzeeievcblfdaqfsghadkdxoiiyaeuau", "czoeasjlykeeiiiczkcfzooekjykutbqbrbcuzeooeobxlxive", "bioiouwycaueuaiiwjzmzhfgginbwtojhpxzdrdojdtiaoeuoe", "wuouiiobzqoaobyeuiqjfoaeinqttnuaoielxjbenqwtpmoaeo", "dpaeaooeeeyrkeodvnpqwjvkutdhaoaaieubuiearcqioaeeto", "qxpcdmoauidrfmtgduuxkdzsiuhwdpzjoaeeynftpddxeajgze", "goaiauuuhpfwpuooirpvqetvseusnhlolzfkptfamaaeauazla", "hnppeahnycsueoiggbeieistwouorbhbejuoaooieakseiexva", "xzuoeoiuzvieeinvvmjqefmcrosmgauegjgpooeooetygkleou", "jbieumciiuhbcghzuuasgdnrnlarxteeiuooutweiueauoysbi", "rzwlwwaobphkgreoeuzsoaaeoerdroiepviieeuoxrnzhciyiu", "pthoaeoainjceauouihauaiogpkskaeeufbeeulzbckcizddgo", "ftdnauueubffkdswuealnguuhouuoaiajaeaeoejjqbzaibpco", "hsriauryfcaiiaaesiaeooiuutjxjoiai", "wdgktmjoiobbygwefzszabaoeudkieuaebxfle", "kxxkkoeuwhbwnwbleegnspbeeaoozsrieeoldnpiuoeeaneiue", "zmiioojduaeueecgqttihlpviaioobbrshraixgthcvahqylqa", "lzkzhtplvolvsdhiuiieypwctvqkuzjcgroiuukuiaiuaukvta", "snsrafiooieovhaoaoouhnhiiauiwvaoilvsqvieeai", "mdtxnfpioablrjkquozzgyfnoicdiaaio", "mxqdeaephkmcvadbvousjxgscuauvlcfliovhsioumdwiuqmau", "jdfjeueirmhiooyeieiuyzaoooiurqlhubgcuoauiaalmtqaua", "htzoeeygxvbgraboueecsryflhauefvgvetlvcouearoeoeaua", "wjylgrsbgawuiaibliaooeeaugztguoveauevzwookfxskjqae", "qptaoauidljflqaneuaupbeiieeoiyoiooaaklduiuaeuitauo", "lneoayeuauxzpfwzvodtnqaoeeidlkywlmoeujaoiiouiennma", "gxbuivhqnbnzsyaqkfgauoeoenncaeauoiesvxbnovjaaaaznu", "faauiyrfdkiaepdyeorgtsqitdqdziiaglfrpxnkozuueuohre", "btboouxpmdvojrwwerwdttzgiodxxeeioerpjhbnvkuqaiooie", "fkdoogsaioalgieoeabfkneiursiuioornoaoaueaijuoaoaoe", "qgcmieadclmmurzckxuubxuiuiuuuudvwylviebeaoabjzbmmo", "ksgoooeeeanbwkogeoeeiapphoeivuuiieieuemxybmqluaina", "stfbrjielclrmzsseqjpvjieiauhmxaieuuidynyynheilrsfo", "bfcvieocauauioifloouaiazgaiaiqsdeieioxgxuayhnaeaoi", "peeeiufsnwvmdopwduiwyiuiieapoeiejgrraybmptkaefmqzi", "nzsuaioxlwhfbvuhrwrufctauiuewwkvi", "dhauiiafpjaiuoumluuaciaiaoeuaahdqbiokvoaaiauotgfgo", "rieeauuapeoeaiaurlkeoicooeewzqaeeohoeouxwaaoiqvnnu", "wouaieeuowmwougsauueniaiuxuuooqqkaaoemkmzmqoffnaii", "cprvaeuoqrdxxhbuoakcsbufhueoitfzxualzjgvkdyaudioeu", "qdaieeouijzoeacreueaovydoeuhdtrooousiaieaaeacceaie", "rvxnnckxareooaotfmqfzqzkobxtkynurbkjaiiuhboealwmru", "dauaazstzieuaiatouiuihyieeuaexhvaeeouiroaeuauiodei", "bxtdaaiuajeeaieodveouuiqprtcueujxsweoexpmvgaeexdfo", "rciauemnzaikxqxjmirxrzoauizyltyeudvwbozfaiaoi", "mrpouooegqfoeilxiuaeoiyaeeaeoehmaeacwkzebhhhhloeao", "qhfblmoqiaueppdeeioaortcaa", "nxnkpooaaitmiiamdypzaoiseaaoeknyfoixoouuaznwhuuuau", "dxaiueevleoooeqlyoaaauoanaeoaueuikmuoeeirxloivioao"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"wdgktmjoiobbygwefzszabaoeudkieuaebxfle", "zmiioojduaeueecgqttihlpviaioobbrshraixgthcvahqylqa", "qgcmieadclmmurzckxuubxuiuiuuuudvwylviebeaoabjzbmmo", "bfcvieocauauioifloouaiazgaiaiqsdeieioxgxuayhnaeaoi", "ftdnauueubffkdswuealnguuhouuoaiajaeaeoejjqbzaibpco", "fkdoogsaioalgieoeabfkneiursiuioornoaoaueaijuoaoaoe", "jdfjeueirmhiooyeieiuyzaoooiurqlhubgcuoauiaalmtqaua", "mrpouooegqfoeilxiuaeoiyaeeaeoehmaeacwkzebhhhhloeao", "bioiouwycaueuaiiwjzmzhfgginbwtojhpxzdrdojdtiaoeuoe", "wjylgrsbgawuiaibliaooeeaugztguoveauevzwookfxskjqae", "mdtxnfpioablrjkquozzgyfnoicdiaaio", "htzoeeygxvbgraboueecsryflhauefvgvetlvcouearoeoeaua", "rzwlwwaobphkgreoeuzsoaaeoerdroiepviieeuoxrnzhciyiu", "btboouxpmdvojrwwerwdttzgiodxxeeioerpjhbnvkuqaiooie", "dpaeaooeeeyrkeodvnpqwjvkutdhaoaaieubuiearcqioaeeto", "czoeasjlykeeiiiczkcfzooekjykutbqbrbcuzeooeobxlxive", "bxtdaaiuajeeaieodveouuiqprtcueujxsweoexpmvgaeexdfo", "rvxnnckxareooaotfmqfzqzkobxtkynurbkjaiiuhboealwmru", "wuouiiobzqoaobyeuiqjfoaeinqttnuaoielxjbenqwtpmoaeo", "yaouiieobyktiesueoipiueaoexqdiauifgaiiaooipbtyqfnu", "qdaieeouijzoeacreueaovydoeuhdtrooousiaieaaeacceaie", "dhauiiafpjaiuoumluuaciaiaoeuaahdqbiokvoaaiauotgfgo", "rieeauuapeoeaiaurlkeoicooeewzqaeeohoeouxwaaoiqvnnu", "cprvaeuoqrdxxhbuoakcsbufhueoitfzxualzjgvkdyaudioeu", "dauaazstzieuaiatouiuihyieeuaexhvaeeouiroaeuauiodei", "mxqdeaephkmcvadbvousjxgscuauvlcfliovhsioumdwiuqmau", "ktpmioueoigrcaiuoopzeeievcblfdaqfsghadkdxoiiyaeuau", "qptaoauidljflqaneuaupbeiieeoiyoiooaaklduiuaeuitauo", "lneoayeuauxzpfwzvodtnqaoeeidlkywlmoeujaoiiouiennma", "qxpcdmoauidrfmtgduuxkdzsiuhwdpzjoaeeynftpddxeajgze", "rciauemnzaikxqxjmirxrzoauizyltyeudvwbozfaiaoi", "dxaiueevleoooeqlyoaaauoanaeoaueuikmuoeeirxloivioao", "stfbrjielclrmzsseqjpvjieiauhmxaieuuidynyynheilrsfo", "faauiyrfdkiaepdyeorgtsqitdqdziiaglfrpxnkozuueuohre", "pthoaeoainjceauouihauaiogpkskaeeufbeeulzbckcizddgo", "nzsuaioxlwhfbvuhrwrufctauiuewwkvi", "wouaieeuowmwougsauueniaiuxuuooqqkaaoemkmzmqoffnaii", "snsrafiooieovhaoaoouhnhiiauiwvaoilvsqvieeai", "xzuoeoiuzvieeinvvmjqefmcrosmgauegjgpooeooetygkleou", "peeeiufsnwvmdopwduiwyiuiieapoeiejgrraybmptkaefmqzi", "ksgoooeeeanbwkogeoeeiapphoeivuuiieieuemxybmqluaina", "hnppeahnycsueoiggbeieistwouorbhbejuoaooieakseiexva", "kxxkkoeuwhbwnwbleegnspbeeaoozsrieeoldnpiuoeeaneiue", "goaiauuuhpfwpuooirpvqetvseusnhlolzfkptfamaaeauazla", "gxbuivhqnbnzsyaqkfgauoeoenncaeauoiesvxbnovjaaaaznu", "jbieumciiuhbcghzuuasgdnrnlarxteeiuooutweiueauoysbi", "hsriauryfcaiiaaesiaeooiuutjxjoiai", "nxnkpooaaitmiiamdypzaoiseaaoeknyfoixoouuaznwhuuuau", "lzkzhtplvolvsdhiuiieypwctvqkuzjcgroiuukuiaiuaukvta", "qhfblmoqiaueppdeeioaortcaa"};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> words = {"xoaouijdvhtaaprttxoptaiiiayrlaeuuiuzzsqqhoaqsouoio", "hiouaoaidchvfzieauhpraoeejgryoi", "vyuaoiaeczsiuaueteaaiaeowoiauuieifhtjzsuiijqriuoao", "qcndoiuinieuiqboaoaaiaojrlxaiohtsbpeuaunfyqcbaaeyi", "kywgeioiequeeaiacoioiukkuoaoivzcmuhkzcmsuouwjvhrho", "frttsuauerzbwsvluedsxioaejfsljgloenjjeaooaaxjxiufo", "stvuifhtaubjbmuuamkcwcckgintypknouejygdifgypaeuuia", "touoieoysiousdjyjiuaomfeiatieioueeoeqzoiiihiieoeau", "ffuuoauoebbdbhooiafhcshctieejppfcoaybbkjlpavmsoaoa", "bjzmqseeuprgkoahfhgeaqhvrmoeehuoioiouuawbtguuiauku", "gmzqnmosrkeoiauienqszdpueacgdkeoeeue", "jpeuaiunuuaiuoiulwgrctgmisrmbioiaqnkzqgweibnpaastu", "ldvskuoisbuauoeoiuyxdzaiiaoxbtqiafuiaoeaodzbtcqbi", "yrxvjfkdbutwwpjudrcgjeoocnoieauaaexdhhkxauirfsquea", "joaeoppmkunjxioaaepgwjxoiiuo", "ltzksewgguolbqlvkniexjzqqueeoebqxvoaaeoskqwstbraio", "rvppeknhflxpanmcgkqkpaptkpazjfxpzpiacruaouaoluueio", "cjcsooandnnqmoufymoauueomioaeieeopjoauauiaagyqauui", "ljbwwqvaagdhaueaeivzduuelwloauihbhmgiawlphwtukaeea", "wvpauntiieebuioiiaoopsksklyhcajyvjroeeo", "ztvuupgvuaaiaezeaiiuiiurswoiekkpreeuuopnguouauglci", "zvtjvxqeezhieaaaoatxoiuiuedhlddekxaueuonkhfiioeoa", "xouooimheiodgqeoobzweizskhniojeooizwrsgozbioeooeoe", "zlxoiuestauoifpnrmkhauhiueuaoijoeueuiouxuuuoauauje", "pdjhlhoieapclmqeoizfruuewtaoueiiaoyxywtczvkuwdgrya"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ffuuoauoebbdbhooiafhcshctieejppfcoaybbkjlpavmsoaoa", "stvuifhtaubjbmuuamkcwcckgintypknouejygdifgypaeuuia", "bjzmqseeuprgkoahfhgeaqhvrmoeehuoioiouuawbtguuiauku", "jpeuaiunuuaiuoiulwgrctgmisrmbioiaqnkzqgweibnpaastu", "ltzksewgguolbqlvkniexjzqqueeoebqxvoaaeoskqwstbraio", "wvpauntiieebuioiiaoopsksklyhcajyvjroeeo", "xouooimheiodgqeoobzweizskhniojeooizwrsgozbioeooeoe", "gmzqnmosrkeoiauienqszdpueacgdkeoeeue", "cjcsooandnnqmoufymoauueomioaeieeopjoauauiaagyqauui", "yrxvjfkdbutwwpjudrcgjeoocnoieauaaexdhhkxauirfsquea", "kywgeioiequeeaiacoioiukkuoaoivzcmuhkzcmsuouwjvhrho", "rvppeknhflxpanmcgkqkpaptkpazjfxpzpiacruaouaoluueio", "vyuaoiaeczsiuaueteaaiaeowoiauuieifhtjzsuiijqriuoao", "hiouaoaidchvfzieauhpraoeejgryoi", "zvtjvxqeezhieaaaoatxoiuiuedhlddekxaueuonkhfiioeoa", "frttsuauerzbwsvluedsxioaejfsljgloenjjeaooaaxjxiufo", "ldvskuoisbuauoeoiuyxdzaiiaoxbtqiafuiaoeaodzbtcqbi", "zlxoiuestauoifpnrmkhauhiueuaoijoeueuiouxuuuoauauje", "ljbwwqvaagdhaueaeivzduuelwloauihbhmgiawlphwtukaeea", "ztvuupgvuaaiaezeaiiuiiurswoiekkpreeuuopnguouauglci", "touoieoysiousdjyjiuaomfeiatieioueeoeqzoiiihiieoeau", "qcndoiuinieuiqboaoaaiaojrlxaiohtsbpeuaunfyqcbaaeyi", "xoaouijdvhtaaprttxoptaiiiayrlaeuuiuzzsqqhoaqsouoio", "joaeoppmkunjxioaaepgwjxoiiuo", "pdjhlhoieapclmqeoizfruuewtaoueiiaoyxywtczvkuwdgrya"};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> words = {"rzwwauaupuaioqeouosdvyfiooeiboeeuiooicyhhkucvueuie", "pcvfuewsnbgsdicmmlqeauatwaeoaiuakhdiexwllkwaedueuo", "yvdeaeaihdnoaauubgtuiioiadlvgxfdiiaqsriuumwkvrmira", "nhrkpeunmygzeakycjntvauczpsxaai", "bqeauaueeijpvauiojcpztioaeasaaiiioeuacgtoaoeiubvyu", "rsxoaxfmiiauiejvhdumpwnleaoudtcvxoioibaiueooaeitca", "sfjaaoddpsiswuiuepxnytrxhmolktaoonhduigdxdndeirxai", "tzjgeiegreaiscfcgfuiocwnbnrueuuvfwuouiuyksmctunjdo", "ffyfzqauielioauopqhytauqdzioevnxkxorxwsdaatvgaonbu", "ysjvhpxolmaeeuuuqaaiebdcnntpwqoknvwwujrypyeuioyvia", "cgbjniauinhuoaexmxmeaeaoacflooaabrxwhfrbuacdqtaxee", "ydyxsvinjoioooaeekydpuaeujhuaiijpyeoiiifpmoiuuueie", "pjbnkrzaoonkaauoerueieheiiuiaiauzwiuoicgmpdueu", "vvlwrofwfbnkfjifcneoeoeoolioauioouyeaiiioauaqiauue", "fffwieiaeavngkiifwtoicszluaoeeckrxqnwlwihquuuiqdha", "dhooeboaoiiaiumvzqbaoieojeoeaeqzjoueeeecjeoookioia", "ysspaeouencnnuouiaamaoeioeiuuzdxvxqtwoeraaietiaaoo", "dnnhprmizwtrgiaidkhciiuwgnkwxjonsbzeuaiiomaooaiiee", "touioamheaiauaibmdcoxnkioiuveeueeietaoaaeu", "ndpxdcoaonpcxqsfwuihvnhfmzinkrgi", "giieeoapauaeaibmeouaiazfhdbae", "doaeeilzfynouibtwkoxxgea", "wvxzriaexgydkxooajcqiouugluaoeea", "bdqvmksuajshyewvdxiwpvgukgviousplouuaqqncieaeuhaeo", "xwuuuoiuaeyrsoiuuixcuaaoeolxxiiaiaoizneeiikqrdkjre", "fjoailmjneoeiajfwxwaaktuuoaeuuopreiaauai", "qmwbefpuuieybcfuivrghhncaeumnhzlyflzucffrmcjkau", "pyaoeouoikthgiueklxeeeudsynvqlvxaqxmaaiaaiaxwrvrci", "ljaiindraaeuieidpzaioobiauiuieopgouuuvouieorzfiiie", "neioekjdpacuioawmcneeideuaeblbkwoutyaooeuaeujiuaua", "xjnjjyidkdqaoiaxhfbycjigvkzpunqpbsoeawwpnwoooagmja", "qzuuenoiieueuoaqwuaiojgvuooqkoaaaiaouduiiocrhrdjeo", "grreaoxvvvljjitcmjfohgdaauuaounsdeio", "piaaaddqiuioucvwoaeaianlgeueoioe", "cdtmhuocqauariaiuuabsmdrjyeaukuoueqldvduostqqloeae"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"rsxoaxfmiiauiejvhdumpwnleaoudtcvxoioibaiueooaeitca", "ysjvhpxolmaeeuuuqaaiebdcnntpwqoknvwwujrypyeuioyvia", "bdqvmksuajshyewvdxiwpvgukgviousplouuaqqncieaeuhaeo", "yvdeaeaihdnoaauubgtuiioiadlvgxfdiiaqsriuumwkvrmira", "ljaiindraaeuieidpzaioobiauiuieopgouuuvouieorzfiiie", "neioekjdpacuioawmcneeideuaeblbkwoutyaooeuaeujiuaua", "touioamheaiauaibmdcoxnkioiuveeueeietaoaaeu", "giieeoapauaeaibmeouaiazfhdbae", "dhooeboaoiiaiumvzqbaoieojeoeaeqzjoueeeecjeoookioia", "rzwwauaupuaioqeouosdvyfiooeiboeeuiooicyhhkucvueuie", "bqeauaueeijpvauiojcpztioaeasaaiiioeuacgtoaoeiubvyu", "cgbjniauinhuoaexmxmeaeaoacflooaabrxwhfrbuacdqtaxee", "cdtmhuocqauariaiuuabsmdrjyeaukuoueqldvduostqqloeae", "doaeeilzfynouibtwkoxxgea", "qmwbefpuuieybcfuivrghhncaeumnhzlyflzucffrmcjkau", "pjbnkrzaoonkaauoerueieheiiuiaiauzwiuoicgmpdueu", "fffwieiaeavngkiifwtoicszluaoeeckrxqnwlwihquuuiqdha", "pcvfuewsnbgsdicmmlqeauatwaeoaiuakhdiexwllkwaedueuo", "qzuuenoiieueuoaqwuaiojgvuooqkoaaaiaouduiiocrhrdjeo", "piaaaddqiuioucvwoaeaianlgeueoioe", "tzjgeiegreaiscfcgfuiocwnbnrueuuvfwuouiuyksmctunjdo", "nhrkpeunmygzeakycjntvauczpsxaai", "sfjaaoddpsiswuiuepxnytrxhmolktaoonhduigdxdndeirxai", "xjnjjyidkdqaoiaxhfbycjigvkzpunqpbsoeawwpnwoooagmja", "dnnhprmizwtrgiaidkhciiuwgnkwxjonsbzeuaiiomaooaiiee", "pyaoeouoikthgiueklxeeeudsynvqlvxaqxmaaiaaiaxwrvrci", "vvlwrofwfbnkfjifcneoeoeoolioauioouyeaiiioauaqiauue", "ffyfzqauielioauopqhytauqdzioevnxkxorxwsdaatvgaonbu", "fjoailmjneoeiajfwxwaaktuuoaeuuopreiaauai", "ydyxsvinjoioooaeekydpuaeujhuaiijpyeoiiifpmoiuuueie", "wvxzriaexgydkxooajcqiouugluaoeea", "grreaoxvvvljjitcmjfohgdaauuaounsdeio", "ndpxdcoaonpcxqsfwuihvnhfmzinkrgi", "xwuuuoiuaeyrsoiuuixcuaaoeolxxiiaiaoizneeiikqrdkjre", "ysspaeouencnnuouiaamaoeioeiuuzdxvxqtwoeraaietiaaoo"};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> words = {"nbdnbzeopwjwjsmvxepykfkaatmmwiuerjxzaauuigmdeaeiie", "douuakhysngleaxmaoeoieaiqpbbiierjtuae", "jyjquueuiumsbhaavdjrvsdiiorzqmjjbladsxvqqhwotcwiiu", "jfdaoiuuuafeuoeevdctfxeewcccjcvotoaeeeaiu", "vqpbieuolcsvacdxdsxkeijhxuauhuouinpieeeiaetiiauoaa", "nuieozkfmooeijyvoeeelieaooiyoiuioifxnjmirsqgutbdva", "rmroeouueqrqjvotieuiollknjmiasuuiaxppkwakfdthqoiho", "qzioioerwwlydzuwkggelvhkcfcqiqzzcjozvmyohkieuuodge", "wpykybvaauytrqvpwiolnqbpoaouuxhiaio", "hdeaaaqxuiuoehfyvwuuiaayqkaeooa", "qroioaeeinmsdlpxjielpbcpiauoycreoiekjlxoeitxkpzsaa", "wioauirzuoubfcfzqyxiofueeueifjqfiauaaifqqggypoetbe", "dxcuuaakgsrlxhpuixauiattaiasouaaumaooaelhzfiujjvva", "bluiaoueugmxeuaafryqfxvuesaioaioiesbkieuii", "rfhvhjleaviueoautsuiueiiiinfctheuegueaaueiemqzghyu", "xeuouufkvqpsfaevqzymjbeiigypueshuoucjioorseuaoaxti", "gzdiieoeufshsgkxiowylnbxzaitcyoeoooumgmzvlmscedceu", "vfqllevljtyaeaaqcseoahhtcuaeaagnmiutmaeinrtfunrtri", "zyljqgiclzvueagwouitbfzhmyzoiveeeurwbtlriqqsuaefki", "paeiaaxraeiaourhdkqqrauafbhheflfzuoqwyckyoeeixuoeo", "yteoeoiuaoluaaueyldvcgpoeoqqwyaoouyvmstlbgesgttaea", "yvrxytqoouphzpfjieuupaeaiaoiohwwsjouuiisbgvpdooaju", "gjqhmviauagksbjsoaamkuoaieaeynnaegmjkeybbiaxkgrzuo", "yzmcbnuiotqauubtauieifldoooorvxoeunrlfriieoizvcdai", "yzpsdqxooeclciijwjvaffpblfueaoqwgtaudlynommxaebypa", "myoioouymaualqeoekooaiuzmleieoqrneueuagfjaauaopkgu", "vwxauioycwldvattykcmiesoaaaoaufdbvliecvduuuiplfjho", "taiuaqdmfuaipkpuosntgeoacgcgqbaooubtggobcgaeaaczaa", "fyauaaaeaevwbrkeiaeuslgbvfmjofdwliuuiuoynouemeuaau", "ysuialpnnoosiaoeutvdjfjicuaeoenhtyrsulrphfokvmjnmu", "rrqqauyzhffainaauaucfboewrvyti", "hqiouuireiauoeqwroeauoaiwffwcxoceaueaumuoooeeiuroe", "gngmfhzuuixznttjvlufjyzoaooeawybddaukmggyeieiwraia", "jaoiifwvcueouagaaaeobdooo", "ndccdpbaebxnaanftchwhoixvjziwhwwioi", "gnvuiuybaaiauaafhceoiueyueauafqttxqcyvasknzzauuoi", "ggwteauruauefyvuuanoeooaoeyvpclgtualouaioe", "nauiaoeiaimskmcjdootiuauveeeioaeelvmfmtmaiofswhyli", "weuoiuaoaemjghhuwcaieilbblplheidpnoiiaeebdxiiue", "ymcsblvjbidrieosgxdorhmxyluufrmdyoiiopwcwauifwuuee", "msfuuijuiiereoaiaiiapioeuiebfvcqvaeejsfgceoanmxwze", "zkrcyuecgwzmaulwaiiszqvbenmeaoeeii", "hcnmqltwahshiinyuaikkceiagppnneofrzhuopeeuoeaeaovu", "naaieylytuuixddeaaoeofngoooiozreuuiiia", "jycxeataiuoewoaaaitrnhauktfiouoxhsvcfxerwlwejoaeeo", "rxaaiiauaijtcrxxuiykheooeamueoaeielnvszruiaopooiie", "zjraieoiiysaueaiocmvzzaeaiyyxwzivdpiusmlmdfauuezou"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"taiuaqdmfuaipkpuosntgeoacgcgqbaooubtggobcgaeaaczaa", "jaoiifwvcueouagaaaeobdooo", "weuoiuaoaemjghhuwcaieilbblplheidpnoiiaeebdxiiue", "wioauirzuoubfcfzqyxiofueeueifjqfiauaaifqqggypoetbe", "msfuuijuiiereoaiaiiapioeuiebfvcqvaeejsfgceoanmxwze", "bluiaoueugmxeuaafryqfxvuesaioaioiesbkieuii", "yzmcbnuiotqauubtauieifldoooorvxoeunrlfriieoizvcdai", "ndccdpbaebxnaanftchwhoixvjziwhwwioi", "yzpsdqxooeclciijwjvaffpblfueaoqwgtaudlynommxaebypa", "vqpbieuolcsvacdxdsxkeijhxuauhuouinpieeeiaetiiauoaa", "hqiouuireiauoeqwroeauoaiwffwcxoceaueaumuoooeeiuroe", "rrqqauyzhffainaauaucfboewrvyti", "zkrcyuecgwzmaulwaiiszqvbenmeaoeeii", "xeuouufkvqpsfaevqzymjbeiigypueshuoucjioorseuaoaxti", "zyljqgiclzvueagwouitbfzhmyzoiveeeurwbtlriqqsuaefki", "zjraieoiiysaueaiocmvzzaeaiyyxwzivdpiusmlmdfauuezou", "ysuialpnnoosiaoeutvdjfjicuaeoenhtyrsulrphfokvmjnmu", "vwxauioycwldvattykcmiesoaaaoaufdbvliecvduuuiplfjho", "gzdiieoeufshsgkxiowylnbxzaitcyoeoooumgmzvlmscedceu", "qzioioerwwlydzuwkggelvhkcfcqiqzzcjozvmyohkieuuodge", "douuakhysngleaxmaoeoieaiqpbbiierjtuae", "ymcsblvjbidrieosgxdorhmxyluufrmdyoiiopwcwauifwuuee", "jyjquueuiumsbhaavdjrvsdiiorzqmjjbladsxvqqhwotcwiiu", "dxcuuaakgsrlxhpuixauiattaiasouaaumaooaelhzfiujjvva", "paeiaaxraeiaourhdkqqrauafbhheflfzuoqwyckyoeeixuoeo", "fyauaaaeaevwbrkeiaeuslgbvfmjofdwliuuiuoynouemeuaau", "jfdaoiuuuafeuoeevdctfxeewcccjcvotoaeeeaiu", "gnvuiuybaaiauaafhceoiueyueauafqttxqcyvasknzzauuoi", "gngmfhzuuixznttjvlufjyzoaooeawybddaukmggyeieiwraia", "naaieylytuuixddeaaoeofngoooiozreuuiiia", "hcnmqltwahshiinyuaikkceiagppnneofrzhuopeeuoeaeaovu", "nauiaoeiaimskmcjdootiuauveeeioaeelvmfmtmaiofswhyli", "nuieozkfmooeijyvoeeelieaooiyoiuioifxnjmirsqgutbdva", "ggwteauruauefyvuuanoeooaoeyvpclgtualouaioe", "myoioouymaualqeoekooaiuzmleieoqrneueuagfjaauaopkgu", "gjqhmviauagksbjsoaamkuoaieaeynnaegmjkeybbiaxkgrzuo", "nbdnbzeopwjwjsmvxepykfkaatmmwiuerjxzaauuigmdeaeiie", "vfqllevljtyaeaaqcseoahhtcuaeaagnmiutmaeinrtfunrtri", "rfhvhjleaviueoautsuiueiiiinfctheuegueaaueiemqzghyu", "hdeaaaqxuiuoehfyvwuuiaayqkaeooa", "rmroeouueqrqjvotieuiollknjmiasuuiaxppkwakfdthqoiho", "yvrxytqoouphzpfjieuupaeaiaoiohwwsjouuiisbgvpdooaju", "jycxeataiuoewoaaaitrnhauktfiouoxhsvcfxerwlwejoaeeo", "rxaaiiauaijtcrxxuiykheooeamueoaeielnvszruiaopooiie", "qroioaeeinmsdlpxjielpbcpiauoycreoiekjlxoeitxkpzsaa", "wpykybvaauytrqvpwiolnqbpoaouuxhiaio", "yteoeoiuaoluaaueyldvcgpoeoqqwyaoouyvmstlbgesgttaea"};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> words = {"jzgylulbgzythhelrkuoibauauouabaiaoaouwhdhkigxqtpye", "gieiauovsleejslxycrqfiyhxwtdzyodaeueiaepskoaomprfa", "bwiiesnfxeuouvrvcuuytjaoozplzdxwieohxrnmaaii", "kmeeafnxhoaoeakzkeahiiaueaodqzsogieouyzwvmtfhesdia", "kjueieaaootioeuaoiuolmouertlroiuoawrfdthpyiagctbee", "knxeuioenteuoieuovseeuhrbteuntbjaiuuuqjlaaiephlmlu", "zfmjycfeeqbuuiisrwcnqioiolhsoakblfaockfvhqutjlluio", "bjgaioodnsausrbylqbvnadraaeicjwnzboaknkiuzuoouiwdu", "gqyqydwwoywpjfoieuucaeouuuweoeea", "tryiojwczgioaaxoaueqmkheoktqccoovlfhpjyeijwfwouaia", "vzndznuoaombeiaouikpieoaeaougauaaxbeouiytzweee", "hfhjsxeiexxauiioioaqcvlkauuoiffxpfaaxwcwstjiquaioo", "kiaeeijlxppkraxkknuuoedvoaoaeaufnouaeiiuttbvauagde", "cmcoeddxueopwkcgeohouaieuiiopphfeaiiywwtawiouoncxa", "nnoiuueujbxeuuyhzyjlihkfhilvjqi", "hwnaoeuihfieueaqrbuayiuuuioxgqheaeislspuuiathmmovu", "ryjwxgkwpugaeeiilfpouiuufoaeojtzdnbxyivjhgfua", "rbtvkaaiijksfdgooelzdsaonqjgxgawfhnqwoaeadhbdctali", "vrjietycfceiihriiefxvnxmzffuxqjgeuaionkthueqkfueci", "coauioinuaeudswqsopdjqbdeokmztoopjaeo", "wyeeocwpuaeoeiexiuooiuiubhlddiokltuuioeafaeuuoeoyi", "kpblhjiilxdvrbnceirwoaiuprykfymualuiiolhououpyeouu", "pjxbrpfiurlyaejfceoxjtjglsiwuaiaaitzhgfrkzeufoauoo", "yxjztmocoiieueoubnfxciekqoeoegaeuearbhyiaeianaeiao", "tysiaoaoeuyyncqgjbokyxnuoeoafdoouchoaoeegoeuoaukdu", "gqaeieijpjzgngeircpyxzfeuslqcnpdauotciaeeoegpgjyoa", "yieuoaczttjooouejrymbaaayvfjmoikwqktouriuueauuaoga", "luooioiuwljooaospkrrztcaanjgdxjeeiqpcmueufwsxpiiuo", "quooaenieoiuivyjeeeeuacnziaeiexlxxyopouoosieioupma", "cfyooyeeeeuwweeoeupquaiiuiaallieiuioeilgqdfsmaokou", "qmoeeocfeiuohxjkmkaaaidrqmuiueshbjyxta", "bauaaoutbbkusxcxraaooevxmieegaoiubcbqyu", "qdjlxqeiikzzjckvcijddnxxoosioiibvciaooomhzgpbvazio", "ytbneaappzweiqxwpjlyriilpkoaiaekeeioioieabfdfdriui", "qvwlkledftjkoukqgkoeoefrloucvhrrfieoihphysxuoeizde", "wmfniiuuanwoouiznvfwoouaereeauoaehsiiowvlsuuoofwoo", "fruiaeoauisglwohoiaibyxytieengpqfjboexxeeirxwjadci", "ybwhssbiiuklkeodyfcjqieardrgeuaaauhqzneiseuoezfzea", "nchkrspjoilvqhriuaiahlnzbfcawcyeosrcaeillrgbua"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"jzgylulbgzythhelrkuoibauauouabaiaoaouwhdhkigxqtpye", "bauaaoutbbkusxcxraaooevxmieegaoiubcbqyu", "ytbneaappzweiqxwpjlyriilpkoaiaekeeioioieabfdfdriui", "wyeeocwpuaeoeiexiuooiuiubhlddiokltuuioeafaeuuoeoyi", "bjgaioodnsausrbylqbvnadraaeicjwnzboaknkiuzuoouiwdu", "yxjztmocoiieueoubnfxciekqoeoegaeuearbhyiaeianaeiao", "qdjlxqeiikzzjckvcijddnxxoosioiibvciaooomhzgpbvazio", "bwiiesnfxeuouvrvcuuytjaoozplzdxwieohxrnmaaii", "fruiaeoauisglwohoiaibyxytieengpqfjboexxeeirxwjadci", "gqyqydwwoywpjfoieuucaeouuuweoeea", "qmoeeocfeiuohxjkmkaaaidrqmuiueshbjyxta", "cfyooyeeeeuwweeoeupquaiiuiaallieiuioeilgqdfsmaokou", "tysiaoaoeuyyncqgjbokyxnuoeoafdoouchoaoeegoeuoaukdu", "vrjietycfceiihriiefxvnxmzffuxqjgeuaionkthueqkfueci", "zfmjycfeeqbuuiisrwcnqioiolhsoakblfaockfvhqutjlluio", "cmcoeddxueopwkcgeohouaieuiiopphfeaiiywwtawiouoncxa", "quooaenieoiuivyjeeeeuacnziaeiexlxxyopouoosieioupma", "coauioinuaeudswqsopdjqbdeokmztoopjaeo", "qvwlkledftjkoukqgkoeoefrloucvhrrfieoihphysxuoeizde", "yieuoaczttjooouejrymbaaayvfjmoikwqktouriuueauuaoga", "gieiauovsleejslxycrqfiyhxwtdzyodaeueiaepskoaomprfa", "rbtvkaaiijksfdgooelzdsaonqjgxgawfhnqwoaeadhbdctali", "kmeeafnxhoaoeakzkeahiiaueaodqzsogieouyzwvmtfhesdia", "kiaeeijlxppkraxkknuuoedvoaoaeaufnouaeiiuttbvauagde", "ybwhssbiiuklkeodyfcjqieardrgeuaaauhqzneiseuoezfzea", "hfhjsxeiexxauiioioaqcvlkauuoiffxpfaaxwcwstjiquaioo", "ryjwxgkwpugaeeiilfpouiuufoaeojtzdnbxyivjhgfua", "pjxbrpfiurlyaejfceoxjtjglsiwuaiaaitzhgfrkzeufoauoo", "wmfniiuuanwoouiznvfwoouaereeauoaehsiiowvlsuuoofwoo", "luooioiuwljooaospkrrztcaanjgdxjeeiqpcmueufwsxpiiuo", "vzndznuoaombeiaouikpieoaeaougauaaxbeouiytzweee", "kjueieaaootioeuaoiuolmouertlroiuoawrfdthpyiagctbee", "gqaeieijpjzgngeircpyxzfeuslqcnpdauotciaeeoegpgjyoa", "hwnaoeuihfieueaqrbuayiuuuioxgqheaeislspuuiathmmovu", "nnoiuueujbxeuuyhzyjlihkfhilvjqi", "nchkrspjoilvqhriuaiahlnzbfcawcyeosrcaeillrgbua", "knxeuioenteuoieuovseeuhrbteuntbjaiuuuqjlaaiephlmlu", "tryiojwczgioaaxoaueqmkheoktqccoovlfhpjyeijwfwouaia", "kpblhjiilxdvrbnceirwoaiuprykfymualuiiolhououpyeouu"};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> words = {"wmfsznimlwhszaooojaiiiuaqvwsfaairgytjkxebtnyngluio", "qdoaiweaaoiaebffgguieijziaa", "snoaioejcygklyiuobdaiouueeoklgjqfmejvjdeaeloueupfe", "pmgoaeeefdqqvbuaiywwneuaexjyznoouua", "qyvioufctsteopkrnuoytwnealhbqfdaaomzeuiobwmnlsuaui", "rbaaiaiosbvxicqksprwcuvoiuiirgdccaeauothjmueeuuove", "ctgiaeuiibmlaoaoejzzeuiumwdfykmyureiuugyaeoiuvmeui", "jieiouisxiiiwliouofclkeefsdrjjaaeirmwkbhza", "wiaaouiivxaouefvjbeaooweieuxaaaiuiboiuinpeaeaiuuue", "gbioauitjviiieaonouaeoobqtmkzfiuernzoiboiiueirwueu", "klaiuoiouexjaooeveeeouoieivqaaooooaobdklkmrlnelwka", "lvbchqgoiqpjkzhkdgaxxshamddziifaoooeueyuiiaozzgaoi", "ksgloeumntqlybadwkaueeqsiauuieuqccleoenuuaahjxhauo", "mtmiaoauoxppqiaoisaiiueoeoqiueoupeiuuieyuuueoeylwo", "cjlpjzinoauoiabfkoaaetlieaoikeaieuqwkqjeiapeoiueda", "kfthwyuiubddtafuooueztjqmmaudylyuaoigrwneaaaiuyqzi", "wsaouzdgaaaueuebviuiaovlfthaouahuouuaaeoonfvnueoeu", "lrtaaixnouaieiuekkqschnegyooeagfiuuxeoaogqlweiimla", "ghfpbluuaamwjmhravtkxaueweieekqytmvliwtoeeuoijuuaa", "drsuatrlzpiaykwfcqclanqrbdwhaoxvyuoiohrcykpaatnfpa", "laaoayaiiojwnqrkfuecvlpyliaowhprqcueia", "traauiicnaaiioglfuuaiiuecmhrtaaglngyyiaiuyoaaauada", "cxmuaaamtjtceooiulpgaowndooaaeuicsruaeejjqryguai", "cqbaedmqzfeuaurtnydmatjaaeyieuaoo", "mxuuaaiiuiqlyfcveisqpjaaxxooouiumxypiooydyhfueupvi", "duuuiehbyuuiouxjpnvkmviawzeaiuoailgiouoifcaiioieue", "lqqiukwbliaaedmrzaqzvmnxdvtolqauueaoillqoueueydhji", "zeoaoiukaauekwdiioxrraeeeuaeczqjeeoamjziuruiiermci", "vfzaieibchqwbhosdkhrocnkoooxbvhfsweoolmmsvqo", "gkzeoousyyvveooeijjmeoouukxmcxlaeoshhzimytseobtvza", "yiouiocysziiishzkeuojuouaeooeagmweeeeeoarcfaiueaia", "qpaieuoircmuehgeaioodrxiuaeeaipoeiojxseuoieaaqwvbo", "ntjaoeoufjouaileeiauoauopiauaeaoiildiaevsvboaaeifu", "bnltcfvnekzwrgroyggaezwhcfnbenciioupgsqaoiooelyjau", "zzmgewcwveiibpcgoxveaoiaooyxprxsgeaozznjuintznsmme", "twrsspfrjutjiuaoauaijcheuiprgjwi", "yyddcjkzaujpfdczlsoiwaeaoeirksqaoaooicsrxszmeeneou", "wjuiuiugnwhieiuubqjnbaomwlnauei", "heaeaoiaecrssneeeewoeiauuaexpbtlfouiuxssznxxoqzjoe", "hyzfwoiaoumdfqiioaaayfqzlquuaabvoaoeeaehvprvzuukti", "skwxjtcaanssdzpyuigdfjcpuuossvdtajcmhmjjtoachdhguo", "rvvnqaohuuuaukfcwsnremqnvhcaoploooeaxkwliniaooiiea", "vblfkqjoonfbuauuoudxfvuiihfvqioiwgymscjdlinvnvoieo", "rnfzmswogdklaiefdzeoeueuyvaeueayiuooeaoepbyaoaioao", "zjkouoihjgzparpveejthvauaewltdnooaamsgzsauldzluuaa", "bjiiaioenyieueotfeueeaxktjdnsweizckbcwswwaghvxxuzo", "vzhkohcaauqggdzloucueuautjdyxpqqqemdpaicsdcfooofau", "csqgkuiiaemlcbkwhdwiqiaoenyxqieptbieukcmhdwpsoqvau"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"vfzaieibchqwbhosdkhrocnkoooxbvhfsweoolmmsvqo", "snoaioejcygklyiuobdaiouueeoklgjqfmejvjdeaeloueupfe", "kfthwyuiubddtafuooueztjqmmaudylyuaoigrwneaaaiuyqzi", "klaiuoiouexjaooeveeeouoieivqaaooooaobdklkmrlnelwka", "qdoaiweaaoiaebffgguieijziaa", "cjlpjzinoauoiabfkoaaetlieaoikeaieuqwkqjeiapeoiueda", "bjiiaioenyieueotfeueeaxktjdnsweizckbcwswwaghvxxuzo", "ctgiaeuiibmlaoaoejzzeuiumwdfykmyureiuugyaeoiuvmeui", "bnltcfvnekzwrgroyggaezwhcfnbenciioupgsqaoiooelyjau", "gbioauitjviiieaonouaeoobqtmkzfiuernzoiboiiueirwueu", "wiaaouiivxaouefvjbeaooweieuxaaaiuiboiuinpeaeaiuuue", "zzmgewcwveiibpcgoxveaoiaooyxprxsgeaozznjuintznsmme", "wjuiuiugnwhieiuubqjnbaomwlnauei", "wmfsznimlwhszaooojaiiiuaqvwsfaairgytjkxebtnyngluio", "gkzeoousyyvveooeijjmeoouukxmcxlaeoshhzimytseobtvza", "wsaouzdgaaaueuebviuiaovlfthaouahuouuaaeoonfvnueoeu", "hyzfwoiaoumdfqiioaaayfqzlquuaabvoaoeeaehvprvzuukti", "qyvioufctsteopkrnuoytwnealhbqfdaaomzeuiobwmnlsuaui", "skwxjtcaanssdzpyuigdfjcpuuossvdtajcmhmjjtoachdhguo", "traauiicnaaiioglfuuaiiuecmhrtaaglngyyiaiuyoaaauada", "cqbaedmqzfeuaurtnydmatjaaeyieuaoo", "rbaaiaiosbvxicqksprwcuvoiuiirgdccaeauothjmueeuuove", "heaeaoiaecrssneeeewoeiauuaexpbtlfouiuxssznxxoqzjoe", "vzhkohcaauqggdzloucueuautjdyxpqqqemdpaicsdcfooofau", "csqgkuiiaemlcbkwhdwiqiaoenyxqieptbieukcmhdwpsoqvau", "cxmuaaamtjtceooiulpgaowndooaaeuicsruaeejjqryguai", "yyddcjkzaujpfdczlsoiwaeaoeirksqaoaooicsrxszmeeneou", "laaoayaiiojwnqrkfuecvlpyliaowhprqcueia", "yiouiocysziiishzkeuojuouaeooeagmweeeeeoarcfaiueaia", "zeoaoiukaauekwdiioxrraeeeuaeczqjeeoamjziuruiiermci", "lqqiukwbliaaedmrzaqzvmnxdvtolqauueaoillqoueueydhji", "drsuatrlzpiaykwfcqclanqrbdwhaoxvyuoiohrcykpaatnfpa", "qpaieuoircmuehgeaioodrxiuaeeaipoeiojxseuoieaaqwvbo", "duuuiehbyuuiouxjpnvkmviawzeaiuoailgiouoifcaiioieue", "ksgloeumntqlybadwkaueeqsiauuieuqccleoenuuaahjxhauo", "vblfkqjoonfbuauuoudxfvuiihfvqioiwgymscjdlinvnvoieo", "lvbchqgoiqpjkzhkdgaxxshamddziifaoooeueyuiiaozzgaoi", "jieiouisxiiiwliouofclkeefsdrjjaaeirmwkbhza", "pmgoaeeefdqqvbuaiywwneuaexjyznoouua", "rnfzmswogdklaiefdzeoeueuyvaeueayiuooeaoepbyaoaioao", "ntjaoeoufjouaileeiauoauopiauaeaoiildiaevsvboaaeifu", "lrtaaixnouaieiuekkqschnegyooeagfiuuxeoaogqlweiimla", "ghfpbluuaamwjmhravtkxaueweieekqytmvliwtoeeuoijuuaa", "zjkouoihjgzparpveejthvauaewltdnooaamsgzsauldzluuaa", "rvvnqaohuuuaukfcwsnremqnvhcaoploooeaxkwliniaooiiea", "twrsspfrjutjiuaoauaijcheuiprgjwi", "mtmiaoauoxppqiaoisaiiueoeoqiueoupeiuuieyuuueoeylwo", "mxuuaaiiuiqlyfcveisqpjaaxxooouiumxypiooydyhfueupvi"};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> words = {"qnmeaugcauoiqwppccuephjqfuahrzooalpbhzouonqciaoyua", "ceieaiueofbqaaoieerkjieukjjaoiiouo", "nrybprvioekloiaeuavddiaiquuuiioeimkmmmtoemueoieioi", "xllpqweuuokwauoigyjrqdmucfbhxaxhhtctdqvuhoeuaoeohe", "kjeoorkzjxuvguiuuoouxtgoiiaeiehciaauiioifsmptuuiuu", "zzoueiiaixraoeiaepoeaoeuijyyeeauempaoerdhpgduodlye", "ppftoagjyuiiuuskauioioakueaoeipcxkqiooaozjvxeuewle", "tqznxdzuheeueaaalmsnmxhuuiqgfqqiioknzaeoondssudqmo", "mmzaaacnbqetryeoeuuwjyguouewzgieouuomyueoieoemrwhe", "vtxjkiuueohpbvaieieottuaieuoasmaaauoiiloaoeaueaoma", "mppfikmwclojqbycyheiughfyqeeeoanquuaepxeeeejxclcca", "fphzueiuzpbziieekhxghvzgxujpaiaeuiii", "kjmyngkoaoxviuuizwpjwaoycgeoxjmhiaiiaejcmjuoioe", "fbkooiialydaasvkjeajmmhagrsvhai", "dkmdqnjoajpmsaaemrftiuuaougllqxwcebgeuaiaxxiaoeami", "leoauouaapmcoueaeazfmtmieoioxvlymoubwueeoeuoapvqwu", "zauouuoaabykyjtrnootdfaibaoueakxzbeubxwvlsfoezqsie", "tfsmymckhudwpkbvaejquaeieoeomtgmzkcscixbntoiqhmwda", "mcnluaomrtvhecciiaoidoaeaeahhkeoeeeiukeueewrllkaio", "wwliaeiwoeeueftoeeuaoezvhairrkbaaioemkseibjskbwaoa", "ljcoieuuzpzaaoouikooeiauunmcuoirjrqboueyroie", "myuuoxngnsgaaussfweuodroeeqyouaurgyiuzeueoeueoi", "lqiougdbpouvqwtaeoueewsgpluikuaaogoeierdylybfiampa", "lveieewaaoutcrkxcovbtbooiioztuaeaiuaizgpkoelkfaeei", "bxkfhtaaltzgxarsjyptdimlrjerxgcanpddgkeskuaooauoxo", "dczbppgzuebmeauepnlblpsaugcsxuamdtboeo", "fsqzorpvsgjfufooaiiiusjjsqfgnuzfjiudpmkuegjaiieulu", "yvnlgzquihvduauphauoiaaeuwxuiiiaairhiuaieeu"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"zauouuoaabykyjtrnootdfaibaoueakxzbeubxwvlsfoezqsie", "dkmdqnjoajpmsaaemrftiuuaougllqxwcebgeuaiaxxiaoeami", "wwliaeiwoeeueftoeeuaoezvhairrkbaaioemkseibjskbwaoa", "dczbppgzuebmeauepnlblpsaugcsxuamdtboeo", "leoauouaapmcoueaeazfmtmieoioxvlymoubwueeoeuoapvqwu", "bxkfhtaaltzgxarsjyptdimlrjerxgcanpddgkeskuaooauoxo", "mcnluaomrtvhecciiaoidoaeaeahhkeoeeeiukeueewrllkaio", "ceieaiueofbqaaoieerkjieukjjaoiiouo", "xllpqweuuokwauoigyjrqdmucfbhxaxhhtctdqvuhoeuaoeohe", "mmzaaacnbqetryeoeuuwjyguouewzgieouuomyueoieoemrwhe", "zzoueiiaixraoeiaepoeaoeuijyyeeauempaoerdhpgduodlye", "fsqzorpvsgjfufooaiiiusjjsqfgnuzfjiudpmkuegjaiieulu", "tqznxdzuheeueaaalmsnmxhuuiqgfqqiioknzaeoondssudqmo", "myuuoxngnsgaaussfweuodroeeqyouaurgyiuzeueoeueoi", "tfsmymckhudwpkbvaejquaeieoeomtgmzkcscixbntoiqhmwda", "fbkooiialydaasvkjeajmmhagrsvhai", "fphzueiuzpbziieekhxghvzgxujpaiaeuiii", "kjeoorkzjxuvguiuuoouxtgoiiaeiehciaauiioifsmptuuiuu", "qnmeaugcauoiqwppccuephjqfuahrzooalpbhzouonqciaoyua", "lqiougdbpouvqwtaeoueewsgpluikuaaogoeierdylybfiampa", "mppfikmwclojqbycyheiughfyqeeeoanquuaepxeeeejxclcca", "ppftoagjyuiiuuskauioioakueaoeipcxkqiooaozjvxeuewle", "vtxjkiuueohpbvaieieottuaieuoasmaaauoiiloaoeaueaoma", "yvnlgzquihvduauphauoiaaeuwxuiiiaairhiuaieeu", "kjmyngkoaoxviuuizwpjwaoycgeoxjmhiaiiaejcmjuoioe", "nrybprvioekloiaeuavddiaiquuuiioeimkmmmtoemueoieioi", "ljcoieuuzpzaaoouikooeiauunmcuoirjrqboueyroie", "lveieewaaoutcrkxcovbtbooiioztuaeaiuaizgpkoelkfaeei"};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> words = {"hpieaooveiueorvnjdfcooxymyvtiiosqlndofbeouai", "knrvinfooaeuaxeaieoeiehyyuoertkvllkvilrwieooxltmeo", "vdcfyfeiuiztxuigrcszfagzcyeuelfioaobouaeiuydoaoeeu", "mqeiuuooaodtgleqthbdbuxqztdioueebrzaewgnoaaeaei", "xnnxeunyiouaeibvshiauidtsjnlcbifhnxdnlsdotnddqsene", "wvxueoiihjbziaoujhcbxdeafkrjsoeeaiwnloeeoydeiiiaee", "rydxwoiuxwyiijdpnzeiobwaeeeliaeioeeaonrzmehqxbjfxe", "sluuuagzrrxhdlodxiaopxrsouuleeiimmueiuaaaqlaaoeuua", "lououaxaaaiiwgtooiaudclfiiocwyflqoqcvcvebiaeizeoao", "zaeoeiebtyeinhxwdbkuiodpcqfcimfpeuaeufxgroahjhveoi", "yxsqwdxeaimwduoryaaegiiouuoiedyhaiuaoariuuiaeiezve", "wcwttabxoaaitqqoaiucnrleiernuaaooaii", "ziaeoelvcskuiigmlaeofiuoeepbhbiqkeoefuooizoieunwsa", "txmvqaegyrgnyzbazgxieozqeeoaoufeiiouuorcnuekcxquio", "thoiaaoaiiytwfojpjgjouujbgbnueadmqleyeooiuziouitia", "tmbpzcbamqybdiakqqygiaiaoccwxuiue", "psiaabwxeozeauiuiuxkwaaeeeoezuaeuouequouirzywoeiuo", "fgpaoieotjjtxoooddgkuoulvouoaoauftvvevuuiaaeianmco", "gqqtclaaooxauiaaejqgsvfioskcjfieajlycviiaefaiiakuu", "ssvrkouuizauauiiaaonjhtjuazuauozdeuehtouaexgmdkhno"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"lououaxaaaiiwgtooiaudclfiiocwyflqoqcvcvebiaeizeoao", "vdcfyfeiuiztxuigrcszfagzcyeuelfioaobouaeiuydoaoeeu", "mqeiuuooaodtgleqthbdbuxqztdioueebrzaewgnoaaeaei", "zaeoeiebtyeinhxwdbkuiodpcqfcimfpeuaeufxgroahjhveoi", "xnnxeunyiouaeibvshiauidtsjnlcbifhnxdnlsdotnddqsene", "rydxwoiuxwyiijdpnzeiobwaeeeliaeioeeaonrzmehqxbjfxe", "psiaabwxeozeauiuiuxkwaaeeeoezuaeuouequouirzywoeiuo", "wcwttabxoaaitqqoaiucnrleiernuaaooaii", "tmbpzcbamqybdiakqqygiaiaoccwxuiue", "fgpaoieotjjtxoooddgkuoulvouoaoauftvvevuuiaaeianmco", "thoiaaoaiiytwfojpjgjouujbgbnueadmqleyeooiuziouitia", "sluuuagzrrxhdlodxiaopxrsouuleeiimmueiuaaaqlaaoeuua", "yxsqwdxeaimwduoryaaegiiouuoiedyhaiuaoariuuiaeiezve", "gqqtclaaooxauiaaejqgsvfioskcjfieajlycviiaefaiiakuu", "hpieaooveiueorvnjdfcooxymyvtiiosqlndofbeouai", "txmvqaegyrgnyzbazgxieozqeeoaoufeiiouuorcnuekcxquio", "ziaeoelvcskuiigmlaeofiuoeepbhbiqkeoefuooizoieunwsa", "wvxueoiihjbziaoujhcbxdeafkrjsoeeaiwnloeeoydeiiiaee", "ssvrkouuizauauiiaaonjhtjuazuauozdeuehtouaexgmdkhno", "knrvinfooaeuaxeaieoeiehyyuoertkvllkvilrwieooxltmeo"};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> words = {"yzieoiquaiereeuiykncvqfedmhnufmxvfnwadieoouitpkhna", "treeogoeeuaknaiooxnczpdiioiyfzywuadqqkienxsieouuio", "stjoisvvvoysryqoozqlqarmaiaqwymaoaeo", "ylvmabdvxmkuoarlxqdpdaiibaeueeaurxbmycsiqriuaieeui", "vjsctaoaoekyuuaiodxjthhewziaiiueebaueuuieoipzsbouo", "xsiueoghjqecjkoiecgvjdtbneopcwjoiueatfsfahcwooeiqi", "nbaaioawueauuqouuouuqjcqoau", "ruouexiaeuiujgvoiaiauebyioiofzzcpmnfipgzpeaeuvsxnu", "pfwjauunvbdpgicrueooukrvjaoiiaefpueaioavhvioaoaaoo", "bruueurpssspuuimysyplcqugslaaeaivyoeeooeayrmtcqnoi", "tcoiaaiiaulxxiueeaeiqaioouuaubxquieufyttreuhrkjxio", "rskxlsonzvcxeopkuaueeenvysjkxpanfaeakvqeueiaotpfre", "dnvqgjwbioghiieujmmkoeqfzmbfdie", "fzwzjvdoazhzpwzsaffwmwqhloyzpyqatwieeaiarqtyoagkhi", "nbjoutkcjftqsrugdtluuemsoaoaaeeuvxbqgljepnoiasuoeo", "weieauippvlaaoiaxynrluoqcguaigshwee", "pxluevpaaaoeuiuqvxhbaoandjwytooiinzgyodaiiiuleaeuo", "cqbnsoeipzziotaueeeexeeeohpsueuuopuaeooeeuuntxbcxo", "xslkftuuigeaiaiaouwfntnrooluaaoiuaoqwwlfycvpavqpao", "yaueaefvmcqtooahczvzleqeuieiuhrxyzhirhaaaeizthwbgu", "zvbgfiiiiiwbsbnmgmagfoeeeahdbxfsiudmiiaieieatiieiu", "hoieeuadwprcoeeainieaaoaauvcpwawheueoiijvqyaussuao", "ntdnunhbveoofiiuiobpdmpouuiyrqderwwfzwtmaxmwjcuaou", "mdzbrjoeawoeeeoolykuiigrdzuicqpoeieamsieaumrlbxuu", "cxxzwemlmrcdkupsvwmgphaezhhcwlatwlngmbeojiauirznle", "yoeoaeoancxwthnaezmvueiahrmaieooiiftoueeeeenjgbaau", "skqoaeelsrzauowqeaiuabuouaekyieauueoczviicrriuogzi", "lmzpuuuezmrlkxyoujtloaoqftiegbvzeoaooqplrjcplbolza", "bzxshaaogqtcieuiaighaeaueiotdszwiuzdeoohkgfmoaaisu", "gddpuuaknraekhvfuonspooeoakfuuoovioeaiaqfswdiuoeta", "poiiaueillzkuanoaaaibpmmqpaooyeauouuppxuiaaaiukbpu", "psdvpuuuxuieehgsvzbdiethnuuiuqjyfxmfexfvcwzooisnuu", "bpxeihfzieelkxhmnnloodnaeaaua", "gqdheeiquoooqheuueorlnaouooutiuianeuiouaeidrwtyiaa", "jeaeouaqciouiciuueaorfaoirxwphgxbucfyuaaeaeupllxxi", "rdeaauaoinrxaauaizrnwipuuaouunoieoaouoesykydaeeuie", "dbchoofpwpxfoadwvjoiappyyiiuokgcwvspkoorcoeoiieecu", "jvvkaiumxeuajoiuiiemttbdauualrvxefzvkiuouxqfrvfaau", "nrhhppzajtfmiauoxkaaaaieznhtguieiumkkbazyrxxuqnriu", "fsyaeairqqiiokaaeiuuiheuiohzqytidjfkaeuuccxouue", "tqppxqoieiquaeueituoueobkeeouieiaynwlmrgophxqqsqee", "kfhqsiyxkwzgfyigglwbhtyvaluiieoaovxmhbgrlikdtdzpia", "gyclcuieepyjyiiaiejmaiooxjoiazwckyauaeyhdfsoibvcge"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ylvmabdvxmkuoarlxqdpdaiibaeueeaurxbmycsiqriuaieeui", "vjsctaoaoekyuuaiodxjthhewziaiiueebaueuuieoipzsbouo", "tqppxqoieiquaeueituoueobkeeouieiaynwlmrgophxqqsqee", "ntdnunhbveoofiiuiobpdmpouuiyrqderwwfzwtmaxmwjcuaou", "poiiaueillzkuanoaaaibpmmqpaooyeauouuppxuiaaaiukbpu", "bpxeihfzieelkxhmnnloodnaeaaua", "bruueurpssspuuimysyplcqugslaaeaivyoeeooeayrmtcqnoi", "skqoaeelsrzauowqeaiuabuouaekyieauueoczviicrriuogzi", "gyclcuieepyjyiiaiejmaiooxjoiazwckyauaeyhdfsoibvcge", "tcoiaaiiaulxxiueeaeiqaioouuaubxquieufyttreuhrkjxio", "ruouexiaeuiujgvoiaiauebyioiofzzcpmnfipgzpeaeuvsxnu", "bzxshaaogqtcieuiaighaeaueiotdszwiuzdeoohkgfmoaaisu", "fsyaeairqqiiokaaeiuuiheuiohzqytidjfkaeuuccxouue", "jeaeouaqciouiciuueaorfaoirxwphgxbucfyuaaeaeupllxxi", "xsiueoghjqecjkoiecgvjdtbneopcwjoiueatfsfahcwooeiqi", "cqbnsoeipzziotaueeeexeeeohpsueuuopuaeooeeuuntxbcxo", "mdzbrjoeawoeeeoolykuiigrdzuicqpoeieamsieaumrlbxuu", "pfwjauunvbdpgicrueooukrvjaoiiaefpueaioavhvioaoaaoo", "dbchoofpwpxfoadwvjoiappyyiiuokgcwvspkoorcoeoiieecu", "cxxzwemlmrcdkupsvwmgphaezhhcwlatwlngmbeojiauirznle", "pxluevpaaaoeuiuqvxhbaoandjwytooiinzgyodaiiiuleaeuo", "yzieoiquaiereeuiykncvqfedmhnufmxvfnwadieoouitpkhna", "zvbgfiiiiiwbsbnmgmagfoeeeahdbxfsiudmiiaieieatiieiu", "dnvqgjwbioghiieujmmkoeqfzmbfdie", "treeogoeeuaknaiooxnczpdiioiyfzywuadqqkienxsieouuio", "gqdheeiquoooqheuueorlnaouooutiuianeuiouaeidrwtyiaa", "hoieeuadwprcoeeainieaaoaauvcpwawheueoiijvqyaussuao", "fzwzjvdoazhzpwzsaffwmwqhloyzpyqatwieeaiarqtyoagkhi", "yoeoaeoancxwthnaezmvueiahrmaieooiiftoueeeeenjgbaau", "yaueaefvmcqtooahczvzleqeuieiuhrxyzhirhaaaeizthwbgu", "jvvkaiumxeuajoiuiiemttbdauualrvxefzvkiuouxqfrvfaau", "lmzpuuuezmrlkxyoujtloaoqftiegbvzeoaooqplrjcplbolza", "gddpuuaknraekhvfuonspooeoakfuuoovioeaiaqfswdiuoeta", "nbjoutkcjftqsrugdtluuemsoaoaaeeuvxbqgljepnoiasuoeo", "xslkftuuigeaiaiaouwfntnrooluaaoiuaoqwwlfycvpavqpao", "kfhqsiyxkwzgfyigglwbhtyvaluiieoaovxmhbgrlikdtdzpia", "weieauippvlaaoiaxynrluoqcguaigshwee", "psdvpuuuxuieehgsvzbdiethnuuiuqjyfxmfexfvcwzooisnuu", "nrhhppzajtfmiauoxkaaaaieznhtguieiumkkbazyrxxuqnriu", "rskxlsonzvcxeopkuaueeenvysjkxpanfaeakvqeueiaotpfre", "nbaaioawueauuqouuouuqjcqoau", "rdeaauaoinrxaauaizrnwipuuaouunoieoaouoesykydaeeuie", "stjoisvvvoysryqoozqlqarmaiaqwymaoaeo"};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> words = {"qkwcvllewfttaoeeeopoeueoaieapjuaodyyiaeeymaaoieuoa", "tssdjkgeeqdkymptoquiiuiuaooxjrrzxxieehlmgaeoeemouu", "fqtooeueeatniaeuoecueailcfiuofxxluwyuuosvgkbqkexoi", "qcfeiuogswoeiiyzysjuiaarxruiueigdaaauataiiooaeyqnu", "bbeiuheeoiiotknvwyuoosypmtoczueuuxsoiaolouiathdiua", "dseoauhdxjjlbaiabeauoaitnqcaohmfxkmkojftzoesqdooui", "jztealdaueoprooiuuieaccbaiiesmueiauuimrrbwwmaiguaa", "vfktawruauodvqwiaukguooeoizzmmsqgjagmqaaucbioaouao", "zzwxzeonxrccizslkhefbtiehkcpsauoiezuueosnpueobjcya", "guuuuoiobnnciioiusauaaaiaeakaiaoidtndwoeoavgjuexyi", "ywqoiuokkkxuxrzlaouiozpooaueakuuiio", "mnyuoeianssieoeispoiicqbsoouepauaauaaiacquoeijiaoa", "juoueieeoszaoicbjlkqbkuegdyknoiiepxyjifhbnnxoaohco", "voouieauioquuuekjaoaoutbdoulltqdoiiuqyduoiodeiuefe", "vrciuouooolsgzujntgqyzihuiouiolrlhaaioiu", "ryxuaulxdhgooiauvieaahbqlbkabqkyqzvjoyaeiaeuo", "dylbyoiiiugrclilyrqoeuizceaouaaoqvfrbjumtbwlsfcaru", "hmsxluwuuieowouaiuhiaeeieehpwrciantzmyhiaegrieeixa", "fhcjpcaeaohfoeoioaazcjuoinfytouuopooiaaunnsgpkbbhu", "sxjaeuungtqtaaeuevueooaoeuvnkvgpnposrvyhxyooowyksa", "ybbrwqluoktqfyaiqkteuosiiaouuuaxcpkaooowgdrqlbhaie", "yhnmyxwprokfmtmeeioivknoioxmaaiiaaiaxyjkiuoainiaei", "ffeoueaoskfqwdwezrltockiiuuokrnoioaaejgtppxuxdylgo", "ffclneakhdvtcehgjjxiozzueeplxyfbvyohriaowtqscyuaii", "lgwcheibsgioeoisfkvoaoooogieuiizwlskloouaxsuaafyie", "hjeaeajhuiaesgriikcnieeaieomyccueaezdxiouuoau", "dvcpyneaugiuiutmmxkxuuoavcthiihryyxowmceouaoifeoii", "ybiaeoeuhpsdrwraovmbrfeouriuuaejcstmeoouunxrgheeui"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bbeiuheeoiiotknvwyuoosypmtoczueuuxsoiaolouiathdiua", "dseoauhdxjjlbaiabeauoaitnqcaohmfxkmkojftzoesqdooui", "zzwxzeonxrccizslkhefbtiehkcpsauoiezuueosnpueobjcya", "guuuuoiobnnciioiusauaaaiaeakaiaoidtndwoeoavgjuexyi", "ryxuaulxdhgooiauvieaahbqlbkabqkyqzvjoyaeiaeuo", "lgwcheibsgioeoisfkvoaoooogieuiizwlskloouaxsuaafyie", "vfktawruauodvqwiaukguooeoizzmmsqgjagmqaaucbioaouao", "juoueieeoszaoicbjlkqbkuegdyknoiiepxyjifhbnnxoaohco", "jztealdaueoprooiuuieaccbaiiesmueiauuimrrbwwmaiguaa", "ffeoueaoskfqwdwezrltockiiuuokrnoioaaejgtppxuxdylgo", "mnyuoeianssieoeispoiicqbsoouepauaauaaiacquoeijiaoa", "fqtooeueeatniaeuoecueailcfiuofxxluwyuuosvgkbqkexoi", "voouieauioquuuekjaoaoutbdoulltqdoiiuqyduoiodeiuefe", "dvcpyneaugiuiutmmxkxuuoavcthiihryyxowmceouaoifeoii", "dylbyoiiiugrclilyrqoeuizceaouaaoqvfrbjumtbwlsfcaru", "qkwcvllewfttaoeeeopoeueoaieapjuaodyyiaeeymaaoieuoa", "ffclneakhdvtcehgjjxiozzueeplxyfbvyohriaowtqscyuaii", "fhcjpcaeaohfoeoioaazcjuoinfytouuopooiaaunnsgpkbbhu", "qcfeiuogswoeiiyzysjuiaarxruiueigdaaauataiiooaeyqnu", "hmsxluwuuieowouaiuhiaeeieehpwrciantzmyhiaegrieeixa", "hjeaeajhuiaesgriikcnieeaieomyccueaezdxiouuoau", "tssdjkgeeqdkymptoquiiuiuaooxjrrzxxieehlmgaeoeemouu", "ybiaeoeuhpsdrwraovmbrfeouriuuaejcstmeoouunxrgheeui", "vrciuouooolsgzujntgqyzihuiouiolrlhaaioiu", "yhnmyxwprokfmtmeeioivknoioxmaaiiaaiaxyjkiuoainiaei", "ywqoiuokkkxuxrzlaouiozpooaueakuuiio", "ybbrwqluoktqfyaiqkteuosiiaouuuaxcpkaooowgdrqlbhaie", "sxjaeuungtqtaaeuevueooaoeuvnkvgpnposrvyhxyooowyksa"};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> words = {"nwxdaejmeuuaoeigkjqoaatmwiueaemrfaiehbbndwqwbahzuo", "mpwlyipouaooiytksplaguoeoajhmeushfyieibptaoaiieita", "vyeoioaghgpebygsoeegueiai", "heoeiooaaqgdhyaxwhbsoajsjwkhwgzaqhaoaoegtkkftaauko", "zjhuuiiuibeauuuntwkyuaubxqbiaaoefaaiuuuppzbbsjozta", "pauaiuoqtjqsuaspieaqdeuieauemfiaueuefwbhkzuaoevjqi", "nqnpioiivoaieuioeagjkcqstxaegjxsdpiii", "zgnuouiaqoiioueeibjuieeuuezeauoaieyjjqkbxiunympwke", "hczeuiipqdyjaaybwbvkesueeeioumzvrkuuoausuoeakeeeoe", "sxhuiuiaoawhnaaoawcgdfkzionkrkyaimppuuiaaoxyauaino", "gfjtzwifdbpoaoiumkloiiiidtpcmjyeoeyoeiioiucxiuueou", "mbooeuaoiwmeauugxvzabruueauooxxszjcnlaakaieoouiebu", "ryysumzymvueknvsfaaiqfeiuoaelyteofgeeiosueeooeuueu", "myhjxpgceijqpxhsfufdpauawgvuoeyueaejiaoiokioouotui", "gwzbgaablzoasxwhpisnouiolgmeoivfzrsgncuetrioaimiue", "hveiooumqdyaormqgyrbbaymaoeoiidsvkreeaazmyqcoilnvi", "kftqneowrymhyassuaeeizqsfsqasjeiaolylpekpeeihmfhra", "vpvggtgjaoftbsxcasvgdmdkfutftldowqhmueuueezqgvviia", "jbhduoplgyierluueuoaouqdqeeeavmnyiiinzjoeozzjuieeo", "hhxxcmjcheztbyseeskmruzuouuckvptmroaniaeueaeaiyxca", "pdtbiicveeueuujccpeikncbhtoaxgmkroaiiegfrwaiutpvpa", "vqwvkrjuouqpwgiedxvvueewuuaazvljyrafmaaouoaiuhouao", "zpwaeeinxpieoohkggeauaayleeuuoetmoiuaalwuooaeydnxe", "xvpreairoiuueeoegshjczyuuaroaoeosgpge", "xuieuaardlshigbxjklaubrdsbuaoskbaa", "hymywzriezaiaeijreeilqooeubhhmyooiaymvoeuwwskeorfi", "szhchnhirvhpsyeuyhvautlqcoogkhoieffheiiiaixrsmnvii", "xvtsvveadqouiqwjoaaiygjoiootwgcioeeujgdstiaiuwqpui", "sxrjohbpuobxneuiucdsgaiseaoinlgfxwtphafueuouiaioje", "swcggieirkbuincaieiaoxeoieomooueakywjauxnyxouuiaia", "pkyuorsncpoeuseuiowfeoimttfgieiuudbqtouiuoepwywooe", "czdqfeielkyqaiuuougvxvgmaeircbuuei", "ngaeoaiuyrkwempjklaeuoehxbqdxtzi", "craoaecxgiaeeyfdzmgsaeeduueaoastruixjyqtyeoaqvoaea", "gfwsoansyyyisbqoowwoaaei", "zrauuoiegviuoiviaaamglsxuoyjdtrxniavtwjbaouoomuooe", "bmqieogpphxraexkbtioqnsriirrpaouoppeiuhiieeaqsdlsi", "xyydrwrieebyhscoucuuoagnuaafiueunreeuaeueudlqcaosa", "ttgoueauaexrsyplsilvlrtuwhoioouipjuueeeouekcqwscyu", "dcoeeaaazsnvkhoouahhpfielfqpfebeaeaaooaadnbuuwqhwa", "jaaouurfkgsfyaeuhzqbcshieulkccsnhtahmuoai", "tyiuoowhhbsgqeafrwttuukbmnxyouxtzbceiduuoaiuuiexgu", "biioowyplseankcnjmteawkqlphfiiintvwqlqifbraouueyje", "hnmnliouvcymqchmnigryxoeieuitfsqeoeekfeuauifmyooeo"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"dcoeeaaazsnvkhoouahhpfielfqpfebeaeaaooaadnbuuwqhwa", "zjhuuiiuibeauuuntwkyuaubxqbiaaoefaaiuuuppzbbsjozta", "hymywzriezaiaeijreeilqooeubhhmyooiaymvoeuwwskeorfi", "biioowyplseankcnjmteawkqlphfiiintvwqlqifbraouueyje", "zgnuouiaqoiioueeibjuieeuuezeauoaieyjjqkbxiunympwke", "gwzbgaablzoasxwhpisnouiolgmeoivfzrsgncuetrioaimiue", "bmqieogpphxraexkbtioqnsriirrpaouoppeiuhiieeaqsdlsi", "mpwlyipouaooiytksplaguoeoajhmeushfyieibptaoaiieita", "xuieuaardlshigbxjklaubrdsbuaoskbaa", "mbooeuaoiwmeauugxvzabruueauooxxszjcnlaakaieoouiebu", "sxrjohbpuobxneuiucdsgaiseaoinlgfxwtphafueuouiaioje", "vyeoioaghgpebygsoeegueiai", "xyydrwrieebyhscoucuuoagnuaafiueunreeuaeueudlqcaosa", "hhxxcmjcheztbyseeskmruzuouuckvptmroaniaeueaeaiyxca", "craoaecxgiaeeyfdzmgsaeeduueaoastruixjyqtyeoaqvoaea", "pdtbiicveeueuujccpeikncbhtoaxgmkroaiiegfrwaiutpvpa", "gfjtzwifdbpoaoiumkloiiiidtpcmjyeoeyoeiioiucxiuueou", "czdqfeielkyqaiuuougvxvgmaeircbuuei", "pkyuorsncpoeuseuiowfeoimttfgieiuudbqtouiuoepwywooe", "xvtsvveadqouiqwjoaaiygjoiootwgcioeeujgdstiaiuwqpui", "hveiooumqdyaormqgyrbbaymaoeoiidsvkreeaazmyqcoilnvi", "tyiuoowhhbsgqeafrwttuukbmnxyouxtzbceiduuoaiuuiexgu", "vqwvkrjuouqpwgiedxvvueewuuaazvljyrafmaaouoaiuhouao", "myhjxpgceijqpxhsfufdpauawgvuoeyueaejiaoiokioouotui", "szhchnhirvhpsyeuyhvautlqcoogkhoieffheiiiaixrsmnvii", "ryysumzymvueknvsfaaiqfeiuoaelyteofgeeiosueeooeuueu", "hnmnliouvcymqchmnigryxoeieuitfsqeoeekfeuauifmyooeo", "vpvggtgjaoftbsxcasvgdmdkfutftldowqhmueuueezqgvviia", "pauaiuoqtjqsuaspieaqdeuieauemfiaueuefwbhkzuaoevjqi", "gfwsoansyyyisbqoowwoaaei", "nqnpioiivoaieuioeagjkcqstxaegjxsdpiii", "nwxdaejmeuuaoeigkjqoaatmwiueaemrfaiehbbndwqwbahzuo", "xvpreairoiuueeoegshjczyuuaroaoeosgpge", "heoeiooaaqgdhyaxwhbsoajsjwkhwgzaqhaoaoegtkkftaauko", "zrauuoiegviuoiviaaamglsxuoyjdtrxniavtwjbaouoomuooe", "hczeuiipqdyjaaybwbvkesueeeioumzvrkuuoausuoeakeeeoe", "zpwaeeinxpieoohkggeauaayleeuuoetmoiuaalwuooaeydnxe", "kftqneowrymhyassuaeeizqsfsqasjeiaolylpekpeeihmfhra", "jaaouurfkgsfyaeuhzqbcshieulkccsnhtahmuoai", "ngaeoaiuyrkwempjklaeuoehxbqdxtzi", "jbhduoplgyierluueuoaouqdqeeeavmnyiiinzjoeozzjuieeo", "ttgoueauaexrsyplsilvlrtuwhoioouipjuueeeouekcqwscyu", "swcggieirkbuincaieiaoxeoieomooueakywjauxnyxouuiaia", "sxhuiuiaoawhnaaoawcgdfkzionkrkyaimppuuiaaoxyauaino"};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> words = {"mjgmhouiaebqglmbnnuoqdeeicgjjtnuiroioaeaowpphieuhi", "zkttwviaekmiiauejbtzedjrqyygomvqeutdfmiaovuieoeuei", "khouuideiuazqpdiaiaeluaeiaieigsrltluiodvueofweoeuo", "xhaoiyrszvuehynyoiiaeddaiewoueekfzeoiopaieeeqbieaa", "jiooeyuooueioioznooosrzdtvyliicgeuiomnooaueiaesrso", "xgccfdialbeaauerdpleuajdgieubtdcgsidsxrexynuouotpu", "fvsoeuiwauuipuuiiarhaauiuknniaoijiaauaosvpwucvbhma", "pxpcoxpjiuuisjbltvaiozchfqoaptooaaasiaeileaie", "tooooawfnqvtjozgmvovvfiinnfspnpcocyvpwceubheiaedfe", "zgcrbtqjooxlqbospjmepwgdcdshloneaoiiuiaakhrduaeoea", "cmlaaaifpdzuoiiuoxsjuiiikwliaueuojxlei", "mmdxxqxauthaiuwwlliaedrlcoaguoeueoaoebwououldbcuye", "tlnbmpeoteeiuooencsdaaaiaenhuiiioiuvyybueyjuoouoeu", "kljpwouixqfqlpterndwcniuieqjltwynkqorgaoeeouayfypi", "lqskughxskydeeawiiiieocneuecgxfhhaiklvyuioeeipfgco", "kzhzxioaouzqdpspxbgoxliaafdrtlfueyxsxcqcwxiweaueuu", "dsbaeoiueahyybuieukeiaaedlvianoauaiinzxrwsoiuoywie", "siuuieubaiiaxmnearycgqwgvoajvuuaeofxfpmauu", "hypjxamjwchbupzqhkacauoaaayueuauueitqvykbstqewxzoi", "qskooiannmxxojjzwueiiaspvvfuowdmxpsdkiobpeiuotiiuu", "paiiohliuiaieuqiueeueunauiihfyhiewtbeifveeojnrldae", "chrgdhyeibzcqiuefzkkrejgrrbyslnelyptaiekwdpeuaezro", "sxtiusjwoaoavthvaoidrcoiaoieszfqmhiueepgjbhqnirkuu", "sueeeuomdyxslapgsflymwetpfeuuevwsaezrlfwkzndoylpea", "vdcrqteuozeauiiuupxnruimvpfgdhjharjlwbknowteaaxrsa", "zrqauyrjkbtgueugueuoembgmbaaaiorzvyagyzbtaelphaemo", "kxqhjfeoiuckjbeuukkgqgrauxziuuaiaeyrsyhieiiidqgniu", "vhytyeccuaaaiauiblntyualuauu", "dduaaiuluauiuoedeauoaeuzrtuetluaoauywfioepbhuoaiuu", "nxbzoovceiiwpkpuouiwbkwqtoauuwuaeueoiiollaouiohooo"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"siuuieubaiiaxmnearycgqwgvoajvuuaeofxfpmauu", "tooooawfnqvtjozgmvovvfiinnfspnpcocyvpwceubheiaedfe", "vhytyeccuaaaiauiblntyualuauu", "qskooiannmxxojjzwueiiaspvvfuowdmxpsdkiobpeiuotiiuu", "mjgmhouiaebqglmbnnuoqdeeicgjjtnuiroioaeaowpphieuhi", "xgccfdialbeaauerdpleuajdgieubtdcgsidsxrexynuouotpu", "mmdxxqxauthaiuwwlliaedrlcoaguoeueoaoebwououldbcuye", "chrgdhyeibzcqiuefzkkrejgrrbyslnelyptaiekwdpeuaezro", "hypjxamjwchbupzqhkacauoaaayueuauueitqvykbstqewxzoi", "jiooeyuooueioioznooosrzdtvyliicgeuiomnooaueiaesrso", "lqskughxskydeeawiiiieocneuecgxfhhaiklvyuioeeipfgco", "kxqhjfeoiuckjbeuukkgqgrauxziuuaiaeyrsyhieiiidqgniu", "cmlaaaifpdzuoiiuoxsjuiiikwliaueuojxlei", "fvsoeuiwauuipuuiiarhaauiuknniaoijiaauaosvpwucvbhma", "xhaoiyrszvuehynyoiiaeddaiewoueekfzeoiopaieeeqbieaa", "dduaaiuluauiuoedeauoaeuzrtuetluaoauywfioepbhuoaiuu", "khouuideiuazqpdiaiaeluaeiaieigsrltluiodvueofweoeuo", "zkttwviaekmiiauejbtzedjrqyygomvqeutdfmiaovuieoeuei", "dsbaeoiueahyybuieukeiaaedlvianoauaiinzxrwsoiuoywie", "sxtiusjwoaoavthvaoidrcoiaoieszfqmhiueepgjbhqnirkuu", "kzhzxioaouzqdpspxbgoxliaafdrtlfueyxsxcqcwxiweaueuu", "paiiohliuiaieuqiueeueunauiihfyhiewtbeifveeojnrldae", "zrqauyrjkbtgueugueuoembgmbaaaiorzvyagyzbtaelphaemo", "nxbzoovceiiwpkpuouiwbkwqtoauuwuaeueoiiollaouiohooo", "zgcrbtqjooxlqbospjmepwgdcdshloneaoiiuiaakhrduaeoea", "kljpwouixqfqlpterndwcniuieqjltwynkqorgaoeeouayfypi", "pxpcoxpjiuuisjbltvaiozchfqoaptooaaasiaeileaie", "sueeeuomdyxslapgsflymwetpfeuuevwsaezrlfwkzndoylpea", "vdcrqteuozeauiiuupxnruimvpfgdhjharjlwbknowteaaxrsa", "tlnbmpeoteeiuooencsdaaaiaenhuiiioiuvyybueyjuoouoeu"};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> words = {"ssdzleopwnguauaskhheeiareaeueoougzeuueeiu", "kbcnouxjhaiuxsllbwoolpoeiieueakwpyviaeoohjgtappzra", "lnueaoaaergqhvkyailkuoaeuoolrpooouaecbeoaqpbfaaaiu", "qksvvajrmgxvkwuvltaoenqvslryatvbau", "wkwvxxxxmazwsyjfporrwsnvsuadsctudyynwotvjyeaeubqfo", "kiaiauopluaeeosscieeoevjzqgzdxeonyiaoeoaakxdbmlaou", "pouaeiimxkxseiiyheeeiudvxjeuuouafcxviiuau", "rwccuaeouhbmfpyfquuruiieoeiaurueiabsfcsuuuxooiaopu", "lcieioeorxeeauiebqxdyzqliuclliioaixgliauootgsdhwci", "qxyiouoascaaaiuieoleieuiaarcznolbwrwoaaaepoauiifri", "kbgeeoyoooaoauxckklooafvdcrogouaaaeoaefbkweuvhcwda", "meeaueeuaibnuaivjpseuvpiiebkjqoauulxsnuexoaeiaoeue", "qgeaazphiueetyzlxxancauodaoiuaigwtbuktouuoauniuaoa", "lweeeehdiiuiazuoaeiaoinjxfwbiovlxruuuhmjnlaiifaauu", "bjiuomfvuoauevcwyzaeuaxoiuuaoezqrczaofmvqhxxwuunwi", "tqqbsianbuieevqchwzvqjedntaouaizmvqtlolciiaizjqqsu", "xjeuuouixiaiuogneaiuiryeuuaaaarwooeoaeaoqkmpyluiri", "sgvyvjucoauuazbnaeaauinbdrsgoiufhauetkvcqgzdwudcee", "doeauyboeioaornxieiiiithauinkueuoaqmhsktdasnoaooua", "fwcrxaoaulgmyoiabwmzdiebeaoauvcauoieeeikwdvaeoeeoo", "kooooadpgreakguiaaxjdueqbeuiialrqwdeffiuoaeuotztuu", "vaiauaoeaozjqiixtrrlamjbauouuoefhbypmfuatvjzpbzxwo", "vjpwyipsjqriekeaeijleiuuaao", "msbshinoauaeeoiltkmeozlche", "skpztligxxsbwqniuvfhmjjuiokguaoaieaibfqouiiozyrraa", "gmprooeiiebnouuuolxouomdauoiouoisueiooakyjeieiazai", "mquoechqrzbxaoeqbgstoeemueoaxdgaeuiaeivkiuoiaaudfe", "jvaiucyhvuejvtzkmpeaoxwtnajnytbioiaafxqhlvoovfzuui", "xeueioovxyeaouizaeeiooaogttyjkaddaouwiaeeooiiufvxe", "crwwwneaiqxvryyeoiovsjjheeuawcsmsaooesbflbe", "tcoaoaeiqvdylmcpcicrgvgtaoraaeioaozueoeheoiilbjbja", "tseeoueeuetzjwoouiiisjbkndduhqaeauaiexmlldjahyscco", "phjtsjwlfevxbauiieoiprdyqudtbqvegvqwqwnyo", "jsbaooasfvoeoijqcdaoouuebpbpywexcxtveuqqkiuciuuiee", "gzeuoaoefycjauswheeaoiuuyqtkuipqruaurnaoeoeijcymlo", "lyaoaioeeqxwhkqdbaarxtfglzouygxqaujvieuimssfwzomhi", "pkbmgsaiedhzoioojgkgmyxygocclwdvyvdapkuoejpoiiuiai", "hpfhoordlraawhglmrouatkdaoqjswxykalnqgiaoi", "zduoiieamnnaeiijtieoueyioaaaiapmsiuu"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"fwcrxaoaulgmyoiabwmzdiebeaoauvcauoieeeikwdvaeoeeoo", "skpztligxxsbwqniuvfhmjjuiokguaoaieaibfqouiiozyrraa", "bjiuomfvuoauevcwyzaeuaxoiuuaoezqrczaofmvqhxxwuunwi", "meeaueeuaibnuaivjpseuvpiiebkjqoauulxsnuexoaeiaoeue", "gmprooeiiebnouuuolxouomdauoiouoisueiooakyjeieiazai", "jsbaooasfvoeoijqcdaoouuebpbpywexcxtveuqqkiuciuuiee", "wkwvxxxxmazwsyjfporrwsnvsuadsctudyynwotvjyeaeubqfo", "lcieioeorxeeauiebqxdyzqliuclliioaixgliauootgsdhwci", "rwccuaeouhbmfpyfquuruiieoeiaurueiabsfcsuuuxooiaopu", "lnueaoaaergqhvkyailkuoaeuoolrpooouaecbeoaqpbfaaaiu", "pkbmgsaiedhzoioojgkgmyxygocclwdvyvdapkuoejpoiiuiai", "mquoechqrzbxaoeqbgstoeemueoaxdgaeuiaeivkiuoiaaudfe", "sgvyvjucoauuazbnaeaauinbdrsgoiufhauetkvcqgzdwudcee", "tcoaoaeiqvdylmcpcicrgvgtaoraaeioaozueoeheoiilbjbja", "crwwwneaiqxvryyeoiovsjjheeuawcsmsaooesbflbe", "jvaiucyhvuejvtzkmpeaoxwtnajnytbioiaafxqhlvoovfzuui", "qgeaazphiueetyzlxxancauodaoiuaigwtbuktouuoauniuaoa", "xeueioovxyeaouizaeeiooaogttyjkaddaouwiaeeooiiufvxe", "tqqbsianbuieevqchwzvqjedntaouaizmvqtlolciiaizjqqsu", "doeauyboeioaornxieiiiithauinkueuoaqmhsktdasnoaooua", "kooooadpgreakguiaaxjdueqbeuiialrqwdeffiuoaeuotztuu", "phjtsjwlfevxbauiieoiprdyqudtbqvegvqwqwnyo", "pouaeiimxkxseiiyheeeiudvxjeuuouafcxviiuau", "lweeeehdiiuiazuoaeiaoinjxfwbiovlxruuuhmjnlaiifaauu", "kbgeeoyoooaoauxckklooafvdcrogouaaaeoaefbkweuvhcwda", "vaiauaoeaozjqiixtrrlamjbauouuoefhbypmfuatvjzpbzxwo", "qxyiouoascaaaiuieoleieuiaarcznolbwrwoaaaepoauiifri", "gzeuoaoefycjauswheeaoiuuyqtkuipqruaurnaoeoeijcymlo", "xjeuuouixiaiuogneaiuiryeuuaaaarwooeoaeaoqkmpyluiri", "ssdzleopwnguauaskhheeiareaeueoougzeuueeiu", "kbcnouxjhaiuxsllbwoolpoeiieueakwpyviaeoohjgtappzra", "hpfhoordlraawhglmrouatkdaoqjswxykalnqgiaoi", "tseeoueeuetzjwoouiiisjbkndduhqaeauaiexmlldjahyscco", "vjpwyipsjqriekeaeijleiuuaao", "qksvvajrmgxvkwuvltaoenqvslryatvbau", "zduoiieamnnaeiijtieoueyioaaaiapmsiuu", "lyaoaioeeqxwhkqdbaarxtfglzouygxqaujvieuimssfwzomhi", "kiaiauopluaeeosscieeoevjzqgzdxeonyiaoeoaakxdbmlaou", "msbshinoauaeeoiltkmeozlche"};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> words = {"ymeoeeicjlaooiiggmrsbouewhnxeoulnaeuaqjeauoeuuidti", "jwgoameauaawkhdiiusxioazneeeaircmvgdu", "meoeaioioalueoeuaigxtkoiagfyeuuaogzfealeiaeioouugu", "fpyqesmmfpeiimjbrauuagooiiiegvlrqpgyvevxmoiaaoouwu", "hqgoooaufkuieiyxtseineiaueindkjzzceafcnqaeerhlbmbu", "fyoeoeevtxroaxkaiaeaexcgno", "qeouoytaaisqzfrueaocqzgujkhuio", "woiuealdflirpoeuieeqdrouuueocjaaenmfpxrkauzdynvybi", "mszgobcbauueijnnoouoaptoeeieaabznpqnljtoxzrfagvrne", "tpcdabtwywgowjjeieioahsspqeecoieaaugauoifwwpuxknci", "bvslmhnmaamqqoaeuoaomfrvoauiedjuuoopxeueaesceueiue", "jqhuuagyueesvaiooppdtpguzuuauoaeaodtuiipnooiaiepga", "szmvuoeiawleeilvhseuxxvieioeu", "vmaeueoiiagrhiaaeifzvxeoysqhqaooazhjxcviieahwleooo", "gzryteieikiaaedtwhbooiuurhiiouieuedkhyauiweuauiqmu", "ceuiolnclopzcxgmyaatlgnjueeodymluiiaiyzaeaoaaoclde", "ldsbwciwpxkfeaanmrnkoaioutdbxmnylalmiuouaoooqzziuo", "cyfbvoldbmmcamqslxhzuubjkjaeczxuohpuiieealieoiuiiu", "vgeauajieuiesdmkeobeaeeouacddrndhqdowueuuouieolwvo", "nyieoiiaeyveiieiiadzqoujczzhieeezleooueeuqxeiiuouu", "wiieaeiyvhfbdccabwxxbohnauouoseaoivvznea", "psqwxaefqpghodksuaehrqfmuoiqoauauearfbyhojvxspxapo", "hytdxxoawtoaizywoiurcuaeuuediiiidcauuioiaxvhvozdae", "mwnwwieioslrnouohckeaaeetooiooaou", "dcgzrfcouwyoiuoofjdweueidcppuaiouicxieouizdhueaaea", "btmtvrioectxnrvzwovfhwuifbiieiiuomnploauiazeaoaiea", "txxswguoosjnbmpkiflioaiwyrhviaeuziieiaogiiaoioikqe", "ryaeeiaiudxblpcgqukgqdzaidtmyeouwrxmeeouecmvkmsfbi", "kyjoiiaouwiuiioyeaeeueivdsnsiuimrybgiianpeeiaeomdu", "niueumrjdhmcexruueewaoiiudfiuiaeoupwnlrtnkessdjjmu", "plymeiauujkgoiebjpiiqooiaegoooekzsoiaiiueqldiojnca", "qkneeoznvhaiiuoublvhdxicfwxduionhiaeuaoieqdfxaytju", "kykrxoxieaueaeeqcsloepxaioueiiabmnlnweoosptueaua", "tswvnoodhmhxjubtxwakykxlrpteojkouieeuoppcuiuieiate", "hpnzdbdiamioaieuevmxsraezkwoieieegdieaieorfceouobu", "bmzpsouxvfwfyoazzfoaieazfpwalsztiqytoaopytnzopuaou", "cwdxzgozxrcfiuxeeiuuehfbuemfioixtmlhlkuwlgjvoioryi"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"mszgobcbauueijnnoouoaptoeeieaabznpqnljtoxzrfagvrne", "vgeauajieuiesdmkeobeaeeouacddrndhqdowueuuouieolwvo", "cyfbvoldbmmcamqslxhzuubjkjaeczxuohpuiieealieoiuiiu", "plymeiauujkgoiebjpiiqooiaegoooekzsoiaiiueqldiojnca", "qkneeoznvhaiiuoublvhdxicfwxduionhiaeuaoieqdfxaytju", "kykrxoxieaueaeeqcsloepxaioueiiabmnlnweoosptueaua", "bmzpsouxvfwfyoazzfoaieazfpwalsztiqytoaopytnzopuaou", "btmtvrioectxnrvzwovfhwuifbiieiiuomnploauiazeaoaiea", "tpcdabtwywgowjjeieioahsspqeecoieaaugauoifwwpuxknci", "tswvnoodhmhxjubtxwakykxlrpteojkouieeuoppcuiuieiate", "hpnzdbdiamioaieuevmxsraezkwoieieegdieaieorfceouobu", "bvslmhnmaamqqoaeuoaomfrvoauiedjuuoopxeueaesceueiue", "wiieaeiyvhfbdccabwxxbohnauouoseaoivvznea", "ceuiolnclopzcxgmyaatlgnjueeodymluiiaiyzaeaoaaoclde", "woiuealdflirpoeuieeqdrouuueocjaaenmfpxrkauzdynvybi", "ymeoeeicjlaooiiggmrsbouewhnxeoulnaeuaqjeauoeuuidti", "ryaeeiaiudxblpcgqukgqdzaidtmyeouwrxmeeouecmvkmsfbi", "qeouoytaaisqzfrueaocqzgujkhuio", "cwdxzgozxrcfiuxeeiuuehfbuemfioixtmlhlkuwlgjvoioryi", "dcgzrfcouwyoiuoofjdweueidcppuaiouicxieouizdhueaaea", "hytdxxoawtoaizywoiurcuaeuuediiiidcauuioiaxvhvozdae", "niueumrjdhmcexruueewaoiiudfiuiaeoupwnlrtnkessdjjmu", "gzryteieikiaaedtwhbooiuurhiiouieuedkhyauiweuauiqmu", "psqwxaefqpghodksuaehrqfmuoiqoauauearfbyhojvxspxapo", "jqhuuagyueesvaiooppdtpguzuuauoaeaodtuiipnooiaiepga", "nyieoiiaeyveiieiiadzqoujczzhieeezleooueeuqxeiiuouu", "hqgoooaufkuieiyxtseineiaueindkjzzceafcnqaeerhlbmbu", "txxswguoosjnbmpkiflioaiwyrhviaeuziieiaogiiaoioikqe", "fpyqesmmfpeiimjbrauuagooiiiegvlrqpgyvevxmoiaaoouwu", "fyoeoeevtxroaxkaiaeaexcgno", "vmaeueoiiagrhiaaeifzvxeoysqhqaooazhjxcviieahwleooo", "meoeaioioalueoeuaigxtkoiagfyeuuaogzfealeiaeioouugu", "mwnwwieioslrnouohckeaaeetooiooaou", "jwgoameauaawkhdiiusxioazneeeaircmvgdu", "kyjoiiaouwiuiioyeaeeueivdsnsiuimrybgiianpeeiaeomdu", "ldsbwciwpxkfeaanmrnkoaioutdbxmnylalmiuouaoooqzziuo", "szmvuoeiawleeilvhseuxxvieioeu"};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> words = {"yeooeaeieubdtgueuuieytdrmvdieozeoee", "woiaiujrzxgbmmoidsaiouiiautlgkyeialkqqciuqkwyuueoo", "yrwdzexrzfyuozieaujprgriueiihpnxqhiuoutwgjboeuegte", "lyhwiauoxeiiaeeeuxqljnsteuyccweauouzhvuugcvlcxyfuo", "pruaigkqwizouuuunueeoediiuiaezydioeuexzuiaeavaieee", "qaeeozuooouaoexvouooeettlfaiuijnllmfwoei", "mrvpgnqhhuxdjzzyuuuiwuaiajtuauioietgzhdeeepbfueqwi", "gymmaioueobjgguueumzbcaazjmlcorjmjnjghonctkkjusqli", "tcziouawwcooeuzaauaaorbkauesqknkjqzeoxuoeoieoeijko", "xjjzegjtqceuasrzuaeijtgpaewbaioaubdjdervkneoqjnnnu", "qdfkodgoouecaeoeoiehllqdhkzwokveeaaubjzwllvaxbqhvu", "bzjztlqotiiaofnaaeaioiowkueaygmrkpagoaeieeaiosriio", "zlvouikaoiolywqpueouocmooiodyioeipiaoeoaunpiauiacu", "nfydiojwhppmqajxmghiwdjdhjuaeiwrpyqpwwnotqxxoypaee", "kvhskctqicgwmwzestjmyvooobxnsmkabqhqmauuuudloooiue", "wyoiouidgnhfbonzeoiaouoxlfaauayzaeeuaueseeiiazbkwu", "pxcqfbaouuwlbraaeueuguuaaeslbkkbeaooqskwfmuoszsaii", "dfwghfnzaewuooeuiuiebxdhvoaueilnmtvuuoaitvcaeoeuia", "dguiegstrvirleioubmniiepooueilaeuiau", "wieooiiaohouoabxsqqztaeoheeiuiizyduoeoooudsfeiuehi", "cdmsuauauirngeuumflieapkzchxbaacuiaaijptjhaqbsyiau", "qgdieeoenhmrggbhiypwrtzxwezrwqacpkjzaeolqbjgjiefpu", "jdtmviuhhnqlpfolpscsyfhaniuioueeicqzfeeukoeeoaaaio", "dwnqmuiakrzbleisbxxaeiaiqsauuehoieaioaenrnlghvlcai"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"xjjzegjtqceuasrzuaeijtgpaewbaioaubdjdervkneoqjnnnu", "yeooeaeieubdtgueuuieytdrmvdieozeoee", "gymmaioueobjgguueumzbcaazjmlcorjmjnjghonctkkjusqli", "qdfkodgoouecaeoeoiehllqdhkzwokveeaaubjzwllvaxbqhvu", "dguiegstrvirleioubmniiepooueilaeuiau", "kvhskctqicgwmwzestjmyvooobxnsmkabqhqmauuuudloooiue", "dfwghfnzaewuooeuiuiebxdhvoaueilnmtvuuoaitvcaeoeuia", "wieooiiaohouoabxsqqztaeoheeiuiizyduoeoooudsfeiuehi", "bzjztlqotiiaofnaaeaioiowkueaygmrkpagoaeieeaiosriio", "cdmsuauauirngeuumflieapkzchxbaacuiaaijptjhaqbsyiau", "zlvouikaoiolywqpueouocmooiodyioeipiaoeoaunpiauiacu", "qgdieeoenhmrggbhiypwrtzxwezrwqacpkjzaeolqbjgjiefpu", "jdtmviuhhnqlpfolpscsyfhaniuioueeicqzfeeukoeeoaaaio", "wyoiouidgnhfbonzeoiaouoxlfaauayzaeeuaueseeiiazbkwu", "pruaigkqwizouuuunueeoediiuiaezydioeuexzuiaeavaieee", "woiaiujrzxgbmmoidsaiouiiautlgkyeialkqqciuqkwyuueoo", "dwnqmuiakrzbleisbxxaeiaiqsauuehoieaioaenrnlghvlcai", "lyhwiauoxeiiaeeeuxqljnsteuyccweauouzhvuugcvlcxyfuo", "yrwdzexrzfyuozieaujprgriueiihpnxqhiuoutwgjboeuegte", "pxcqfbaouuwlbraaeueuguuaaeslbkkbeaooqskwfmuoszsaii", "tcziouawwcooeuzaauaaorbkauesqknkjqzeoxuoeoieoeijko", "qaeeozuooouaoexvouooeettlfaiuijnllmfwoei", "mrvpgnqhhuxdjzzyuuuiwuaiajtuauioietgzhdeeepbfueqwi", "nfydiojwhppmqajxmghiwdjdhjuaeiwrpyqpwwnotqxxoypaee"};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> words = {"vfeeeuiarxuaeojyjllcuaeenqjzgluioekqnwkdiaiupjlmau", "xfmxoygoouagswoeouszqoeouiolgoiuiupqrthuxbniiieiui", "tkdueefskctgwiaamuouafqdpfcophveoiiflwfrxyfvapttku", "bfxhqoeaewvmdtrptixglctwipqflkdoeuepgfeuiiiekpjrou", "skvddbtapndiuaaomtqfjwumbiiioeuifoauordiourdfriaio", "jjieiovweuaaauiutbrwfoxwylau", "nhrhbxahmvaeiiioingcftipcwtuiwswfxaaoiusiiiuoaiosa", "bnsbqhfooobsoaaoeidouaouaaiekwqaaupfnqchyoogaeouia", "trsxjoyzuiiuptqyoopccqyqrsigooeiarnkbzwziiarcsuuaa", "wzyqxfmunvmxpsheiwhwqueauowgcfwjphormzveieioekdslo", "hdtvfkrommdriiooofvrnaueuctffooauemaaaaoqlguaeaici", "jhheooituuuouugeoueuiiejsdxuuaaacaiaaoeeuahtiooowe", "pdqbuexpeueeuspeuoiieleiiaeufmooaiuseaaoueplbylpii", "fzfxlzeeirrneiaeeiqjfpjkxeeeszlkggkifqlieooahtliua", "wyieioeatpvteuzjeauvqnxnyuuaathmkciaandfdioieaa", "rwiuinyjwgooocscsuoaaewdcxiauuienoaoiiiaiokrbdsrmi", "nsyiioyguauoipiueaeivzpseueadwieoieoovaeauaeeoexxi", "piiuieeuugpnuuiesdiouaoieimdmrboaigrxyeiupjaeeuiua", "hmuoeeidchwiaaexxspuueuoilsmnngaiydwnuadkfdrtueovo", "sdfxivtnhoarsnxwztooihnoeahaeueoauoi", "seeueabiuioeopxuueoitxgcvmei", "dbuuubslluobdppduaeujwiioanxvtuaooslnpoijqyeuioiua", "vaueeaooowrfnliueuyrrrznueuifzcuilrwztqnuucvqduaei", "ppaeiymzqiaeoaquaoewuooeaavkjueaxnoiuueuuoqyxiaeie", "tcxjiiorkaeeaekleuiueupbrfakncwnkaiaiyuiiougykiiua", "cxfftmgiveaeouueuudqfjrgznonzvmksjiouyuaeosjjmwoiu", "lhxcviioateoeiwbffwnuueabdpouueuoylmzxiyzxbsztoo", "cyuouxbsteolieiooiaapyiaadrybpoaaaowcxouogwaioaioo", "mlqzvcbueevqkuuaqtgueeuvgzyfaoooarqrpyvmuuezfwfcba", "hcloeiiappbzptduyceeieoeacdioeoeoyjiauauu", "qkthpwbeveeiuuojieeieuektdzpckyoxlwfaoeyxjwrojleii", "ncyaafgkndouoaksnlhenmrqdbubjhcuahpxpxoueokkbhscio", "cgzaaddqmeeaegwdwrpueieleuaauhknnboiueefjnheeevloi", "lueoeestdyjeauudvmfdwjyoizlnhsyacxuaieaegfouo", "teaaaepieeiypiioeugvuiuqlkzau", "nrbqxkjeoumnvrhaauiobauuaqoeeaesuiaaegshduzbxgybke", "zkouuoufplkuidgueeicyaeaimhktiuognnwseeaiuwfiauioe", "zzbluaesaooaiyhppxdaqdhjyljrfeddncsbuixmzoaaelnzqe", "qlqkfongwuohjzaioiiutfjlaoonkmzeouhbjmgzvuauwriuoa", "crzjeqbwqxneivkqiabueooeoeiizeouoiooszfzueagshoaao", "xueoaooudqczdatbgsuaaaehbpuiioezxrluttquaoaoei", "tjrcwmoirtsuoeoowczooiioiqoaoa", "xyzfyniuwmkqrdtuiziiuaedhxstnolwxaaouueeslmwiuiwee", "lrgtaxmklcrnjhollttdyubkkncnxbfipcuieigaueeuuziuie", "twpaobaeeauiuifwbjuivliouejgyhoicdcqfbvtikxzuiiiaa", "xliuioieeufqprggbgecwqnesoiaocjgylotuuoeeeozouaece", "tiuauaeaoejqoiiekwcooeqprueaeiaenvlymtvcosjtnhauoe"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"twpaobaeeauiuifwbjuivliouejgyhoicdcqfbvtikxzuiiiaa", "nrbqxkjeoumnvrhaauiobauuaqoeeaesuiaaegshduzbxgybke", "lhxcviioateoeiwbffwnuueabdpouueuoylmzxiyzxbsztoo", "dbuuubslluobdppduaeujwiioanxvtuaooslnpoijqyeuioiua", "bfxhqoeaewvmdtrptixglctwipqflkdoeuepgfeuiiiekpjrou", "seeueabiuioeopxuueoitxgcvmei", "ncyaafgkndouoaksnlhenmrqdbubjhcuahpxpxoueokkbhscio", "lrgtaxmklcrnjhollttdyubkkncnxbfipcuieigaueeuuziuie", "bnsbqhfooobsoaaoeidouaouaaiekwqaaupfnqchyoogaeouia", "crzjeqbwqxneivkqiabueooeoeiizeouoiooszfzueagshoaao", "jhheooituuuouugeoueuiiejsdxuuaaacaiaaoeeuahtiooowe", "hcloeiiappbzptduyceeieoeacdioeoeoyjiauauu", "xliuioieeufqprggbgecwqnesoiaocjgylotuuoeeeozouaece", "cgzaaddqmeeaegwdwrpueieleuaauhknnboiueefjnheeevloi", "hdtvfkrommdriiooofvrnaueuctffooauemaaaaoqlguaeaici", "rwiuinyjwgooocscsuoaaewdcxiauuienoaoiiiaiokrbdsrmi", "vaueeaooowrfnliueuyrrrznueuifzcuilrwztqnuucvqduaei", "cxfftmgiveaeouueuudqfjrgznonzvmksjiouyuaeosjjmwoiu", "lueoeestdyjeauudvmfdwjyoizlnhsyacxuaieaegfouo", "zkouuoufplkuidgueeicyaeaimhktiuognnwseeaiuwfiauioe", "cyuouxbsteolieiooiaapyiaadrybpoaaaowcxouogwaioaioo", "hmuoeeidchwiaaexxspuueuoilsmnngaiydwnuadkfdrtueovo", "zzbluaesaooaiyhppxdaqdhjyljrfeddncsbuixmzoaaelnzqe", "xyzfyniuwmkqrdtuiziiuaedhxstnolwxaaouueeslmwiuiwee", "xueoaooudqczdatbgsuaaaehbpuiioezxrluttquaoaoei", "nsyiioyguauoipiueaeivzpseueadwieoieoovaeauaeeoexxi", "tkdueefskctgwiaamuouafqdpfcophveoiiflwfrxyfvapttku", "pdqbuexpeueeuspeuoiieleiiaeufmooaiuseaaoueplbylpii", "skvddbtapndiuaaomtqfjwumbiiioeuifoauordiourdfriaio", "fzfxlzeeirrneiaeeiqjfpjkxeeeszlkggkifqlieooahtliua", "trsxjoyzuiiuptqyoopccqyqrsigooeiarnkbzwziiarcsuuaa", "piiuieeuugpnuuiesdiouaoieimdmrboaigrxyeiupjaeeuiua", "xfmxoygoouagswoeouszqoeouiolgoiuiupqrthuxbniiieiui", "teaaaepieeiypiioeugvuiuqlkzau", "tcxjiiorkaeeaekleuiueupbrfakncwnkaiaiyuiiougykiiua", "sdfxivtnhoarsnxwztooihnoeahaeueoauoi", "qlqkfongwuohjzaioiiutfjlaoonkmzeouhbjmgzvuauwriuoa", "nhrhbxahmvaeiiioingcftipcwtuiwswfxaaoiusiiiuoaiosa", "qkthpwbeveeiuuojieeieuektdzpckyoxlwfaoeyxjwrojleii", "jjieiovweuaaauiutbrwfoxwylau", "tiuauaeaoejqoiiekwcooeqprueaeiaenvlymtvcosjtnhauoe", "vfeeeuiarxuaeojyjllcuaeenqjzgluioekqnwkdiaiupjlmau", "wzyqxfmunvmxpsheiwhwqueauowgcfwjphormzveieioekdslo", "mlqzvcbueevqkuuaqtgueeuvgzyfaoooarqrpyvmuuezfwfcba", "wyieioeatpvteuzjeauvqnxnyuuaathmkciaandfdioieaa", "ppaeiymzqiaeoaquaoewuooeaavkjueaxnoiuueuuoqyxiaeie", "tjrcwmoirtsuoeoowczooiioiqoaoa"};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> words = {"hcvieooktvrxrmiudybvhcouztxnaeiaowvvkrcsoklmuuaaii", "szwoiageaieiuhffznokeeeacsmaaeusptiieooiejqysugoii", "vqjtvqraaixnkeianqckjjeaousvneeoiaibsptgcaindfuooa", "yblcyfmxpukxuiaqbiaieaoufrouuoqqwwqkpuruoeioebeoao", "nsmqvaueuvncvvxroaybvktdkcowtbhueeeuijslnouunbmoue", "qjbfrfaaaepvxyyvqoikmllguuiifdyvrieearnrftduoerlvu", "jqwzvmfsbimnkuiiisysrpuodqioirdrhvdausvaeioiaiinda", "lhpzsitjxeueadsbjwxeijmeaaaaeeutgtlfhhigyteuoogtmi", "kcueisouooeadgveoaivtyioiiuilxoaeeaexgtvaoiiehwqza", "czoieopztoaooaourlmpzuejhynrauoiablrgnwizbiooiaaei", "huaauiidpngcrueigzrhpkveoohmwyymbjmi", "waueioaoozeoououacaaeeasbhvqyoouehoieaaewauaaiaadi", "faiuievhzqiowtsdwaoppwttqjauujpmkjbne", "jmlfuizpdqcgceblrtoeoeaipzfvoioiaopnjfaioekqlkfoee", "yaoieoiueezjbiufvxjoueieufaoeuahmtlznteetxeiaaadiu", "wxaoauakpaaouwvuoeehrrroeohwvtaixrlccoeovtspeaitce", "ttwdewlheeuojnfeeczjrskdqeuxjcaiexiiaaojxcgkoiiewi", "mjhaooibnwptuioouytpsbneedooeafvjueaeaoasauaondcci", "nteioahdndpdzctebtqzaouabaaueeiuioqiueeoooieypxeaa", "geueiueuehfbdgzgeeigfvypeafeaaaouoiuqjoueaeeikoooo", "pklzyieaaebzoioiodqcyxiaeigdpfousgkzydeisoouaio", "zznxdneikmdnqvpaoaflnnnvntacrqjcouaewflqseugxcoita", "vjmbusblhcouuoexstjmzaeusoiaaeeuduiiuuai", "wcvnfrluiwrhpymeuiureueavnthwimysweovghndouiocxeue", "wfooaedzltzorouiuaeieefzeuuouzzlhbdovdkoeqoaaeauoi", "xhwfpwxcnelzvaeuepfiiatvkwmcioklvaosblljqqcubstvia", "pxzkolvjsvuaobxrvaimtqcmkzxeivntjeiufqzcluacbjsviu", "naaiojrnkakssiujvztujbbfcofdmhxiqyjnzbrfigcthuuela", "siiuuuiexuauueoaupqcvoriioudpieeiieuucfuiiueoiacro", "heoaaersvoooqsbgleoicjsoimoeiukxhcquapsouagooaiuui"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"nteioahdndpdzctebtqzaouabaaueeiuioqiueeoooieypxeaa", "yblcyfmxpukxuiaqbiaieaoufrouuoqqwwqkpuruoeioebeoao", "czoieopztoaooaourlmpzuejhynrauoiablrgnwizbiooiaaei", "jmlfuizpdqcgceblrtoeoeaipzfvoioiaopnjfaioekqlkfoee", "mjhaooibnwptuioouytpsbneedooeafvjueaeaoasauaondcci", "vqjtvqraaixnkeianqckjjeaousvneeoiaibsptgcaindfuooa", "xhwfpwxcnelzvaeuepfiiatvkwmcioklvaosblljqqcubstvia", "pxzkolvjsvuaobxrvaimtqcmkzxeivntjeiufqzcluacbjsviu", "pklzyieaaebzoioiodqcyxiaeigdpfousgkzydeisoouaio", "waueioaoozeoououacaaeeasbhvqyoouehoieaaewauaaiaadi", "siiuuuiexuauueoaupqcvoriioudpieeiieuucfuiiueoiacro", "heoaaersvoooqsbgleoicjsoimoeiukxhcquapsouagooaiuui", "zznxdneikmdnqvpaoaflnnnvntacrqjcouaewflqseugxcoita", "szwoiageaieiuhffznokeeeacsmaaeusptiieooiejqysugoii", "wcvnfrluiwrhpymeuiureueavnthwimysweovghndouiocxeue", "ttwdewlheeuojnfeeczjrskdqeuxjcaiexiiaaojxcgkoiiewi", "kcueisouooeadgveoaivtyioiiuilxoaeeaexgtvaoiiehwqza", "yaoieoiueezjbiufvxjoueieufaoeuahmtlznteetxeiaaadiu", "huaauiidpngcrueigzrhpkveoohmwyymbjmi", "jqwzvmfsbimnkuiiisysrpuodqioirdrhvdausvaeioiaiinda", "lhpzsitjxeueadsbjwxeijmeaaaaeeutgtlfhhigyteuoogtmi", "vjmbusblhcouuoexstjmzaeusoiaaeeuduiiuuai", "hcvieooktvrxrmiudybvhcouztxnaeiaowvvkrcsoklmuuaaii", "wfooaedzltzorouiuaeieefzeuuouzzlhbdovdkoeqoaaeauoi", "faiuievhzqiowtsdwaoppwttqjauujpmkjbne", "naaiojrnkakssiujvztujbbfcofdmhxiqyjnzbrfigcthuuela", "qjbfrfaaaepvxyyvqoikmllguuiifdyvrieearnrftduoerlvu", "geueiueuehfbdgzgeeigfvypeafeaaaouoiuqjoueaeeikoooo", "wxaoauakpaaouwvuoeehrrroeohwvtaixrlccoeovtspeaitce", "nsmqvaueuvncvvxroaybvktdkcowtbhueeeuijslnouunbmoue"};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> words = {"bzwtrsmxixkwaoiefaaoiezfcvaioeuukueaauenwzvuuaeuie", "goioiiplspaihjxpiigcpiaeea", "zhuouiuecdhyvemydvxxuzftgryvavlhlfhnrajtgeaiaopsca", "djrkvzrhsiwgreoaxleuunoeieaulxpnclqxasxbzi", "qcbcaljgauicgyionaeeiahppiuueuswxvzvauimeaiu", "reieieejmzjuoaaoivbziaeuaykpfgrdieiqxcrhuautuuuoae", "sioiuouaxjquahxeeuamiueoaaurxhhteieqfhuiulzmouieuo", "cjkkfjoikueieasxgvzaqfdykfwjke", "wyjdtypgfinuoaaueiaagqwzivklsjsxaaglrpyniougccaine", "jcaouuymczeaafjgraoiwqttjquoauneaoaefjfpzrdnlajzui", "dhkbliuxoaoonoeeaioaoafraoiotlzkhecwoaofcoeuuouiga", "coaioiaufuauioiuaeypctzltaitxaeaoiaesguuealkyluybo", "jvhhtaieajtdykwiieefoaiaypsuiuqlkoiucaauucpmuuerfi", "kckkxpzeileeaanqyktbbqaubxpwuoyieuaeieexmwsqbsoizu", "sswjkauabpkeaeoaerkbfjuedoeeouiaiejkzoaullcldhuiue", "jseueauuucnbmlqcnodrpcsliogshvruhwxbkkaiecsrcwueui", "dgyioiaeaqllaeuuxiaaaeueuadaaaeqeuaeusooeeupjzdisu", "bmvfoaioopvqcqiwwpxeeoekmlbvhufjaoigcrda", "bcckiuecnieuoluaeiuoopzyhjwnaawtkbbzeuxrkzoudxgtte", "kvtzcqxdufsxnbhbicddgoauhfmbcaionjjaioauuuxwpwaaue", "jvfndkaakvfghueoncxhcniicdsjdoiopsdeeanqtoueoiuopu", "bvxktfuaggglhleaeuyzyylueervrouhffcycpowzhnjnpugri", "lxloioavfqpeiuwljdwasdioaaaqmhstqoeqgooaoijvcieaou", "tcswidycxqeuoopdxhoxwmcuuauixioouuiekliiiuauaazioa", "gspeeuuiiecieoollblypyztulhgplbexchdzjsfjistxeasla", "nllkrtginieoueiddioodiieupndguwjniuakhryieaoehsmle", "yspzviyzloosuueiaumroioosbmyfiaokffuuoblpxbabltcmi", "jqfqwuatjfueuaknliaaaelbhlqzmlaibcvqceoikzdtieeaoo", "moeoeimctbhvuookrrhkuaneueawtvlexdtlaae", "jeiiuaooshszvamgcqtgqdokoaiehkwceecqndii", "ccwmnsrexoaeimuoaeamnbdkiamceeaaeaeuyyhppmryeqrjui", "qwuoamveeueeuixzzsvjhuesnbzdvrripeuaerkfmqwgvbadbe", "hzhuoynaeoinrueouuqtieeecxchaoydzgjmquaixhceijbeei", "ssdkoujgouaeoowtvlieouaglwflcegfduea", "rqooioppdducgzwvkuuaoltvxbdboeejpkfzveoeblqaoboioi"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bcckiuecnieuoluaeiuoopzyhjwnaawtkbbzeuxrkzoudxgtte", "jqfqwuatjfueuaknliaaaelbhlqzmlaibcvqceoikzdtieeaoo", "yspzviyzloosuueiaumroioosbmyfiaokffuuoblpxbabltcmi", "rqooioppdducgzwvkuuaoltvxbdboeejpkfzveoeblqaoboioi", "bmvfoaioopvqcqiwwpxeeoekmlbvhufjaoigcrda", "sswjkauabpkeaeoaerkbfjuedoeeouiaiejkzoaullcldhuiue", "bvxktfuaggglhleaeuyzyylueervrouhffcycpowzhnjnpugri", "kckkxpzeileeaanqyktbbqaubxpwuoyieuaeieexmwsqbsoizu", "bzwtrsmxixkwaoiefaaoiezfcvaioeuukueaauenwzvuuaeuie", "jvhhtaieajtdykwiieefoaiaypsuiuqlkoiucaauucpmuuerfi", "ccwmnsrexoaeimuoaeamnbdkiamceeaaeaeuyyhppmryeqrjui", "kvtzcqxdufsxnbhbicddgoauhfmbcaionjjaioauuuxwpwaaue", "zhuouiuecdhyvemydvxxuzftgryvavlhlfhnrajtgeaiaopsca", "jvfndkaakvfghueoncxhcniicdsjdoiopsdeeanqtoueoiuopu", "qcbcaljgauicgyionaeeiahppiuueuswxvzvauimeaiu", "gspeeuuiiecieoollblypyztulhgplbexchdzjsfjistxeasla", "cjkkfjoikueieasxgvzaqfdykfwjke", "jseueauuucnbmlqcnodrpcsliogshvruhwxbkkaiecsrcwueui", "coaioiaufuauioiuaeypctzltaitxaeaoiaesguuealkyluybo", "jeiiuaooshszvamgcqtgqdokoaiehkwceecqndii", "dhkbliuxoaoonoeeaioaoafraoiotlzkhecwoaofcoeuuouiga", "hzhuoynaeoinrueouuqtieeecxchaoydzgjmquaixhceijbeei", "dgyioiaeaqllaeuuxiaaaeueuadaaaeqeuaeusooeeupjzdisu", "qwuoamveeueeuixzzsvjhuesnbzdvrripeuaerkfmqwgvbadbe", "nllkrtginieoueiddioodiieupndguwjniuakhryieaoehsmle", "djrkvzrhsiwgreoaxleuunoeieaulxpnclqxasxbzi", "tcswidycxqeuoopdxhoxwmcuuauixioouuiekliiiuauaazioa", "jcaouuymczeaafjgraoiwqttjquoauneaoaefjfpzrdnlajzui", "wyjdtypgfinuoaaueiaagqwzivklsjsxaaglrpyniougccaine", "goioiiplspaihjxpiigcpiaeea", "ssdkoujgouaeoowtvlieouaglwflcegfduea", "sioiuouaxjquahxeeuamiueoaaurxhhteieqfhuiulzmouieuo", "reieieejmzjuoaaoivbziaeuaykpfgrdieiqxcrhuautuuuoae", "lxloioavfqpeiuwljdwasdioaaaqmhstqoeqgooaoijvcieaou", "moeoeimctbhvuookrrhkuaneueawtvlexdtlaae"};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> words = {"gvxoeiofoaaaaoaiucmrnwvieupgsiiqldtaaoiarxqaoaaoua", "svdvbonaiiaeeejmwdwfoouidzaioaouechdljieeastlqhrfi", "cnvjilnbuiaybheoorsmiapyzwu", "tuuuouerzvieueuufaoeomiuiiehuuoiualcmvjdfidlxmbjio", "ldrqfatwbltdsdrocljoigghgpaoeuykjuauztvkmii", "cneeiuoaiemdqraiwuieiinsfhlmkaivuaaauayjtjoaoiptee", "zrqoaoagioiuzjeieiwwfnzunoeaiaeizzjslwefvvrixbaouu", "vfhykkogwwrkjiiwmdbjoduaooiinpkrkigsdxiogvlhuewmau", "wuoeiuotvhjtaieojfsstwqaaavchpmiiao", "xbiioeeaszvxjdoiaibmsykvdatskuoeauuufxuaoeorbjeiaa", "bwgdeeoamkqeuizvzqtjuuuizwvhvnlwsotoaoaaoieapkvcfu", "giaaeeioisrqwseyaaaaoaaeughuiukjckiuodwoeaeooojuuu", "vzssnieaagpiuiivhueaabxmoaoqbfnpginduieuuelbgwlfeu", "nyrffuijnhrxcuoauwjuaiaiofxoiotmiueoieatnysdetleeu", "rdrgoaelglauuueigrlkneiiavmrbmhwhrivieaaouaactgpvu", "gmqqqvauaimgwtqzjuuadtqlrxmugnkdespeoosceueooiyooo", "rglteosyjoioaeaycxlgwziyueuajroaeppjpaoeodeiaiaeae", "cblhiaeoofljbjqvezfwjlsxpueskxntgeptnoeuzauioulaio", "zwkrueuioenttgmuarkntniwvxlfsqarymhmbekbuoeeouewzu", "crauauisrbnqpgaiqhioaeagzdeuisvywoaaebyeoiiiexvuuu", "miaeaaaeplxsuuipaeoeoiaeufmgyjhhaghrwyroouehwcbdoe", "tcynltdrakcwwmihuaeeaioekcyxrvrueptwuaeuytcwccioya", "vjzmoiiyeeoaioqsuoeoebteieexuauuuoudgaei", "siioumkmqbfouixwaooeoeierjvjkoeeu", "waaeeunffcazfjqerxtymeiueuvmncooanpuuuuomsfndxzcna", "qnuiibriauexxhjoaaueovxuiipqioiskoouiaznnkczvcisqu", "kvcfguvpmxzkeiuitjvvfawtxqgoupqcdsihktziusfqyiujsu", "jgeuoiaaeakngciaieinqfoiilqffyqxiou", "dxcpiiueoubuiuearxylooiiqylsxtmfiarcoiilqqjiaxbtca", "ztywujmfngoiiidtqzzeolhvfaiemzhmnooaecxhaeeiirzzsa", "myaauueexflooaekmgwmasqtvqvliwxaeeemfoeooerntxqkfi", "tjzgueooiadlyhprsiaudcuaaiiaiegooeuyeuooadllhdhbio", "qqiaeoieofwqhxnemfhaaiuoulwzroaeeghfouoioxsuiaeglo", "xoaienwczlakwuaiiacgxyfioauimsoaobbkuuoomhynlquici", "yjgmzauefdoooiuaaaxjvzxcyliedndboeeeaelczuiuaoiiva", "zgpybootgbvxpgohmkgctbvuxlykoohysvnfkuoriieaurzgxi", "pcjcoaeeubuaaeeueaaknuuooiouxqymiuxeooiejvjoamhroo", "svuaiarooeogbcscuialouuooasqxoeiaoeovgmgvoaoxuoeuo", "ruuuoioccxeoeuiaujyhwumnveatqzteuejcdaeeoithyngaoa", "xtvmorsfvdoompppeuuiaetctsrbeoirmkpauieuwhkdlbjuee", "ltsrxeuesymjpeeuodeiaieeueuleioeaaoiesiiooeau", "mmlybiuixrdoiiiuumieioouaoobbiausllzagdeoushjqnjcu", "gyeiuaivioaoiygjhfmieomftfogjeeomqoeuabcvbtauamrdu", "njtxcwueuyxrhjiazmqfaouoefaoeiemrfkvkdwze", "zcieahjaoueouuervgwuastjdeuahhtnuieoiogoiuiijraaii", "mnnouiyfnzsbjyiqtwauaaadgcaaaefnmdeoouokhbxbeoaaxu", "wqauuzmzeaeieagjxbiiyjbnvhiaouygvfzcnpaicxaeeoa", "xjxcjtsgueqceiaemyjaouuaxsprcuecaaeioueeffhxmkkiua"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"mmlybiuixrdoiiiuumieioouaoobbiausllzagdeoushjqnjcu", "xoaienwczlakwuaiiacgxyfioauimsoaobbkuuoomhynlquici", "gyeiuaivioaoiygjhfmieomftfogjeeomqoeuabcvbtauamrdu", "xbiioeeaszvxjdoiaibmsykvdatskuoeauuufxuaoeorbjeiaa", "qnuiibriauexxhjoaaueovxuiipqioiskoouiaznnkczvcisqu", "vjzmoiiyeeoaioqsuoeoebteieexuauuuoudgaei", "pcjcoaeeubuaaeeueaaknuuooiouxqymiuxeooiejvjoamhroo", "dxcpiiueoubuiuearxylooiiqylsxtmfiarcoiilqqjiaxbtca", "bwgdeeoamkqeuizvzqtjuuuizwvhvnlwsotoaoaaoieapkvcfu", "vzssnieaagpiuiivhueaabxmoaoqbfnpginduieuuelbgwlfeu", "crauauisrbnqpgaiqhioaeagzdeuisvywoaaebyeoiiiexvuuu", "xjxcjtsgueqceiaemyjaouuaxsprcuecaaeioueeffhxmkkiua", "cblhiaeoofljbjqvezfwjlsxpueskxntgeptnoeuzauioulaio", "ruuuoioccxeoeuiaujyhwumnveatqzteuejcdaeeoithyngaoa", "svdvbonaiiaeeejmwdwfoouidzaioaouechdljieeastlqhrfi", "ldrqfatwbltdsdrocljoigghgpaoeuykjuauztvkmii", "gvxoeiofoaaaaoaiucmrnwvieupgsiiqldtaaoiarxqaoaaoua", "cneeiuoaiemdqraiwuieiinsfhlmkaivuaaauayjtjoaoiptee", "cnvjilnbuiaybheoorsmiapyzwu", "rdrgoaelglauuueigrlkneiiavmrbmhwhrivieaaouaactgpvu", "wqauuzmzeaeieagjxbiiyjbnvhiaouygvfzcnpaicxaeeoa", "ztywujmfngoiiidtqzzeolhvfaiemzhmnooaecxhaeeiirzzsa", "tjzgueooiadlyhprsiaudcuaaiiaiegooeuyeuooadllhdhbio", "rglteosyjoioaeaycxlgwziyueuajroaeppjpaoeodeiaiaeae", "ltsrxeuesymjpeeuodeiaieeueuleioeaaoiesiiooeau", "mnnouiyfnzsbjyiqtwauaaadgcaaaefnmdeoouokhbxbeoaaxu", "tuuuouerzvieueuufaoeomiuiiehuuoiualcmvjdfidlxmbjio", "yjgmzauefdoooiuaaaxjvzxcyliedndboeeeaelczuiuaoiiva", "gmqqqvauaimgwtqzjuuadtqlrxmugnkdespeoosceueooiyooo", "vfhykkogwwrkjiiwmdbjoduaooiinpkrkigsdxiogvlhuewmau", "giaaeeioisrqwseyaaaaoaaeughuiukjckiuodwoeaeooojuuu", "njtxcwueuyxrhjiazmqfaouoefaoeiemrfkvkdwze", "miaeaaaeplxsuuipaeoeoiaeufmgyjhhaghrwyroouehwcbdoe", "zrqoaoagioiuzjeieiwwfnzunoeaiaeizzjslwefvvrixbaouu", "qqiaeoieofwqhxnemfhaaiuoulwzroaeeghfouoioxsuiaeglo", "nyrffuijnhrxcuoauwjuaiaiofxoiotmiueoieatnysdetleeu", "svuaiarooeogbcscuialouuooasqxoeiaoeovgmgvoaoxuoeuo", "zcieahjaoueouuervgwuastjdeuahhtnuieoiogoiuiijraaii", "kvcfguvpmxzkeiuitjvvfawtxqgoupqcdsihktziusfqyiujsu", "zgpybootgbvxpgohmkgctbvuxlykoohysvnfkuoriieaurzgxi", "tcynltdrakcwwmihuaeeaioekcyxrvrueptwuaeuytcwccioya", "wuoeiuotvhjtaieojfsstwqaaavchpmiiao", "jgeuoiaaeakngciaieinqfoiilqffyqxiou", "zwkrueuioenttgmuarkntniwvxlfsqarymhmbekbuoeeouewzu", "myaauueexflooaekmgwmasqtvqvliwxaeeemfoeooerntxqkfi", "siioumkmqbfouixwaooeoeierjvjkoeeu", "xtvmorsfvdoompppeuuiaetctsrbeoirmkpauieuwhkdlbjuee", "waaeeunffcazfjqerxtymeiueuvmncooanpuuuuomsfndxzcna"};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> words = {"hlpjiaqsoeufbwddxeuceeeokxzkzephgpbioopqrssuaouxio", "gsloofjhmtroaedqkdauxswmyoooezzkxqzeuxsouoesblauuu", "xkraiblpiioieavcwpiiqwlwsiebgmmpuauuheoua", "mkniiuawskvrtsemkjwsxiuiibsdaieooedaoioa", "fsnuauaiaaqzqpqeuebrqaehplbnexwncirauaoojeuiukgqsa", "vxiaeoeoefjwuuykmyoeebneeaaaoxpiuoaaiubvrqarrtwlke", "ckjoeoihyrgxeuocoiaueuueiwsueuiasfwtmeevuoaiiwyoui", "pjfuoapbdpfkxdhurdztvokkkwba", "jbdbbssadzqveaavkmnqsiitvuiutskwpuvraaogwaeapiuioo", "qbghlzegpwvnjqdibvlsfoaiiumbiuoofeoouoeuinvcieeuoo", "yeuueawgvueoiaizsgbveeahdjeausmeiooioirttaeoqtbzoa", "luiuiprueuiapiaeioushvcxmkokqweoiouyeuieiiuibghscu", "dfooojjgaoeieyqnjiouevjaaoeaezaoouaouojktiuagrauaa", "qrdnoiryfeoeamghiaiaoeadcuaaaqfsiaaiiyxqziooeuervu", "buiauymlmoslftdigjnhjeoewzjlysscoilvaaaurjouuuuaaa", "mxuiixjkhoaeosqiiiuxdwxgfeuaaltrueioaaeziieixhcmua", "szjoaeoihywygkrdeobjdrdaxqvhbqgdowprqsjeiiasjmbehe", "sauouookdtveuejtmuooiaeipyjgaiuohiuuuaaonlkkesdcnu", "muuiaueaoopiieeuraiaoiujpcouoeuiecxhkwoautghsiamie", "ybfdiiuxxuaoinftiuigvkrqteaeiftycoownoueioosnswuui", "woeooooeetxmpoooenpeiogphciloeeeiueaonyiiediioodhi", "hvwmteevnffiwsfeoeaxymmctzafzqieoaeavvsuuuouuizqdu", "bieioiiiajnpvvihmbeiiaihjjljiaiaijmaeuepxqiiiu", "trqttzuighvxxegbeaaeimvzpvkiaiqiiiovtfqyseukieaibi", "nqhiaeouzsauiiurkywwrnkqatlfcaakeeuitknriuyngnxfsi", "zsmmaosjcnceugzyypvqeegmaieuueeettqpkouoajboeuoaai", "fheaeiauukkteieaetiieoaaeqvjlrlaeisjgxi", "rzwnchenxklsioaeaksoeiiewjaiaoeeruiooiukoouooasoui", "nsqiaauooyheuiirwlzeacgwriieuixsrruuujplhvlgzabaua", "kjgieoeiembgzykeoajjdcsiinlyuieeecnlxaohueoieifpjo", "kveeoywbmgtkoijnmiaufcxioiuamlduioeexwynaaqhblqxdi", "cymlyiiuanswiaoqhjmrotngbiaksxgaakyiaeuae", "daeoinvqletkqbijhrooseoaoiacwuioaeuunycuibkmeue", "tczhxfmqeohnzsulaiueuiixooaoiusjkdhishdrwiomywyfao", "dcuiouuiinpwjfmlkougcrdmfofgaiaaihhdkuoedueuekhfwu", "dqgtzoinfpqtmieuxffeaxdguuiueauqjqlnuoaeizxaueqcoe", "bfqddcxuobzvuaaidaueooabzueiiaeeymxlmfpjaurzbvmnie", "dstpsdqidneiescrnzduueapymkfonczycaivhkcpomyeoiioi", "jrmbqfpumauuaoorsheeubjvtviadkgheaoesgtuaableuoaei", "ynlrciaioisiioiuoontbhieamgiuaiwqwxpiuuoizypfwxyoo", "quoeeuarrkaeaoeuojhpbluaawzypdzwqfemeuii", "qckouueuienmyaeutqbkxhiakzjfwbjfosveaoauianctqvooi", "deuuoldqyjzaueapxhdauuzfmuauuliaeuuoboauoeuktaiooa", "lxoaiaeelwtyuoiawuuuukioiiiao", "qjjdyquaoasouooeohsiuiuuaeozxvzplnaaosdymqaedctiio", "pmgwpfbpurchssfoodxjaoeaiovddaoeivbkeueoukpaouiaii"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"nsqiaauooyheuiirwlzeacgwriieuixsrruuujplhvlgzabaua", "bfqddcxuobzvuaaidaueooabzueiiaeeymxlmfpjaurzbvmnie", "luiuiprueuiapiaeioushvcxmkokqweoiouyeuieiiuibghscu", "xkraiblpiioieavcwpiiqwlwsiebgmmpuauuheoua", "trqttzuighvxxegbeaaeimvzpvkiaiqiiiovtfqyseukieaibi", "bieioiiiajnpvvihmbeiiaihjjljiaiaijmaeuepxqiiiu", "szjoaeoihywygkrdeobjdrdaxqvhbqgdowprqsjeiiasjmbehe", "jrmbqfpumauuaoorsheeubjvtviadkgheaoesgtuaableuoaei", "daeoinvqletkqbijhrooseoaoiacwuioaeuunycuibkmeue", "vxiaeoeoefjwuuykmyoeebneeaaaoxpiuoaaiubvrqarrtwlke", "deuuoldqyjzaueapxhdauuzfmuauuliaeuuoboauoeuktaiooa", "fsnuauaiaaqzqpqeuebrqaehplbnexwncirauaoojeuiukgqsa", "mkniiuawskvrtsemkjwsxiuiibsdaieooedaoioa", "buiauymlmoslftdigjnhjeoewzjlysscoilvaaaurjouuuuaaa", "qbghlzegpwvnjqdibvlsfoaiiumbiuoofeoouoeuinvcieeuoo", "hlpjiaqsoeufbwddxeuceeeokxzkzephgpbioopqrssuaouxio", "ckjoeoihyrgxeuocoiaueuueiwsueuiasfwtmeevuoaiiwyoui", "kjgieoeiembgzykeoajjdcsiinlyuieeecnlxaohueoieifpjo", "muuiaueaoopiieeuraiaoiujpcouoeuiecxhkwoautghsiamie", "cymlyiiuanswiaoqhjmrotngbiaksxgaakyiaeuae", "qjjdyquaoasouooeohsiuiuuaeozxvzplnaaosdymqaedctiio", "qrdnoiryfeoeamghiaiaoeadcuaaaqfsiaaiiyxqziooeuervu", "dcuiouuiinpwjfmlkougcrdmfofgaiaaihhdkuoedueuekhfwu", "dfooojjgaoeieyqnjiouevjaaoeaezaoouaouojktiuagrauaa", "woeooooeetxmpoooenpeiogphciloeeeiueaonyiiediioodhi", "dstpsdqidneiescrnzduueapymkfonczycaivhkcpomyeoiioi", "dqgtzoinfpqtmieuxffeaxdguuiueauqjqlnuoaeizxaueqcoe", "gsloofjhmtroaedqkdauxswmyoooezzkxqzeuxsouoesblauuu", "pmgwpfbpurchssfoodxjaoeaiovddaoeivbkeueoukpaouiaii", "jbdbbssadzqveaavkmnqsiitvuiutskwpuvraaogwaeapiuioo", "kveeoywbmgtkoijnmiaufcxioiuamlduioeexwynaaqhblqxdi", "fheaeiauukkteieaetiieoaaeqvjlrlaeisjgxi", "ybfdiiuxxuaoinftiuigvkrqteaeiftycoownoueioosnswuui", "hvwmteevnffiwsfeoeaxymmctzafzqieoaeavvsuuuouuizqdu", "zsmmaosjcnceugzyypvqeegmaieuueeettqpkouoajboeuoaai", "yeuueawgvueoiaizsgbveeahdjeausmeiooioirttaeoqtbzoa", "sauouookdtveuejtmuooiaeipyjgaiuohiuuuaaonlkkesdcnu", "tczhxfmqeohnzsulaiueuiixooaoiusjkdhishdrwiomywyfao", "quoeeuarrkaeaoeuojhpbluaawzypdzwqfemeuii", "nqhiaeouzsauiiurkywwrnkqatlfcaakeeuitknriuyngnxfsi", "lxoaiaeelwtyuoiawuuuukioiiiao", "pjfuoapbdpfkxdhurdztvokkkwba", "rzwnchenxklsioaeaksoeiiewjaiaoeeruiooiukoouooasoui", "qckouueuienmyaeutqbkxhiakzjfwbjfosveaoauianctqvooi", "mxuiixjkhoaeosqiiiuxdwxgfeuaaltrueioaaeziieixhcmua", "ynlrciaioisiioiuoontbhieamgiuaiwqwxpiuuoizypfwxyoo"};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> words = {"kmncuooaiymwdpnjneemniooixauueae", "xueuoiwwrxxuinjhykjkoaxxiiuadmkiudhrvmulpqjcpapqfi", "wsxtpqeoiirfbxpfnguvmxvglwfnoleeuiultvdqeocjxmaadi", "hliuiieiefeueaausqnqqczaaitghwqbe", "vzknoiewxrtsmiiigdeoauaouejfjmmouorgfeiaeqjwwyzyge", "deiiouiueoqbaoizeuiooeaqtjzioxpprlkiloioowdqwphfgu", "booioainpxnrkaeuusxeuaaoxmxcvlzuiaycrzoaaajlxeuaai", "poiiiyiaaizxrdrljyicdoouoaeeuvkggsiueeogldcswhwecu", "nmbeeeoayuaeueuejffmveuqbouaiiuogjueogqfyockoootxa", "zlzfyfenbwycxkhyilslmboagcnhaueicwooeooueumxtqioee", "dvoiiuatgueiffqiueoeoakbwhuwgdjbelvvfzsqxe", "nheauaaezcckmiiorxqwugfnbnnuooyeuuuemnhpdbooeutzzi", "lzyyuegklbliapzjiaaaeuldyaeeailneaoouiaozmeauiicni", "ggbwguauordbhoeogfqdkzoadhcnnqidaiiauiijoiiioiudcu", "dzgouvkaeimmmoiaioztjeeiexdboaaervlaaauinsaoieonue", "ntmwnxyiesvtfojmzmcpsuouvfauuuuuznhpbrvabeooiiikki", "wpndeeidouaaeuiqkkueiuaiuscveoo", "liioeentzoiqmgfqiijltpduamyaeiuemjjknluupydeuulpqe", "xqmqiiairhaoaiiuapftwzeieuaqqllzcaiuucyhqbjwauvjso", "mxxtvnivhpdiwvvlfueuljqieldyclxi", "zspzqeifouiuiiuuanbbjveoaoeqvrvjbaaijyppoeaxnaooai", "weeaaeoaealksyhulbhrwlmqocooiarueiojmoouooiaibqcqa", "qpxuogsieoezpzjnruouiltdfniuaitooioivdiauzwgseaaoo", "louoijggyxkyeijbcytinqcuoiofgrqjrooizpkffoiyaaueau", "lhoeeoxydwdjnaigymiobdjkgtuoeaplqieaawlheooouozeeu", "cfhuoilytcsioousnlsuyvmoeaxfzdyauuiexoaauwvmcauoui", "rlkfoeosmtddaioowtqnaspqaeueklmuiuaaovzgiaeamcjtoa", "rlzoooueemgeieeaileiaaueoaemkeiuoe"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"lhoeeoxydwdjnaigymiobdjkgtuoeaplqieaawlheooouozeeu", "ntmwnxyiesvtfojmzmcpsuouvfauuuuuznhpbrvabeooiiikki", "booioainpxnrkaeuusxeuaaoxmxcvlzuiaycrzoaaajlxeuaai", "weeaaeoaealksyhulbhrwlmqocooiarueiojmoouooiaibqcqa", "poiiiyiaaizxrdrljyicdoouoaeeuvkggsiueeogldcswhwecu", "cfhuoilytcsioousnlsuyvmoeaxfzdyauuiexoaauwvmcauoui", "wsxtpqeoiirfbxpfnguvmxvglwfnoleeuiultvdqeocjxmaadi", "nmbeeeoayuaeueuejffmveuqbouaiiuogjueogqfyockoootxa", "lzyyuegklbliapzjiaaaeuldyaeeailneaoouiaozmeauiicni", "zlzfyfenbwycxkhyilslmboagcnhaueicwooeooueumxtqioee", "xqmqiiairhaoaiiuapftwzeieuaqqllzcaiuucyhqbjwauvjso", "ggbwguauordbhoeogfqdkzoadhcnnqidaiiauiijoiiioiudcu", "deiiouiueoqbaoizeuiooeaqtjzioxpprlkiloioowdqwphfgu", "xueuoiwwrxxuinjhykjkoaxxiiuadmkiudhrvmulpqjcpapqfi", "wpndeeidouaaeuiqkkueiuaiuscveoo", "dvoiiuatgueiffqiueoeoakbwhuwgdjbelvvfzsqxe", "dzgouvkaeimmmoiaioztjeeiexdboaaervlaaauinsaoieonue", "hliuiieiefeueaausqnqqczaaitghwqbe", "louoijggyxkyeijbcytinqcuoiofgrqjrooizpkffoiyaaueau", "zspzqeifouiuiiuuanbbjveoaoeqvrvjbaaijyppoeaxnaooai", "vzknoiewxrtsmiiigdeoauaouejfjmmouorgfeiaeqjwwyzyge", "nheauaaezcckmiiorxqwugfnbnnuooyeuuuemnhpdbooeutzzi", "qpxuogsieoezpzjnruouiltdfniuaitooioivdiauzwgseaaoo", "liioeentzoiqmgfqiijltpduamyaeiuemjjknluupydeuulpqe", "rlkfoeosmtddaioowtqnaspqaeueklmuiuaaovzgiaeamcjtoa", "kmncuooaiymwdpnjneemniooixauueae", "mxxtvnivhpdiwvvlfueuljqieldyclxi", "rlzoooueemgeieeaileiaaueoaemkeiuoe"};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> words = {"hjuiutiiieoccsxiiiasbvlwaxciuieapdtgtjuooxhiaaigua", "beiuesnaaeooiuajuaeafzdioioulooeajuuauuiueivsvkxga", "xjmoieaiiuqeieaeepfxpwoaiwqpywyjiiusuooeomsaaaoiei", "zsggoeswduomuieuuuiazfeeieizgncneouiabtaeeoavstlri", "fuouixqhriesxtxazvhnlqvaiveaueiuaazymvjyislwuauaro", "diiiueuuozuuoorqeouoaiodeaiuuwbsaou", "ttkdvevuoaouueeefieuowoeeioueeumdnfkyqyejdrcvbjiou", "jbouueiiohjuausvxoeuygzoadbggrruenlphwywe", "zioeeooeodtjyqmeouavyqcpeekeeuaoumgkqwuixeueueeeai", "tflznqhiumzhwbwweeujqsoaoueeupwczlafgdjgxaajaeooei", "yoiuilgpcyiieewiooaiihdgtidyiaaiaaixwxpxafeooaieao", "zcpsccyezuoeoossdoouoaupgiiaskxiiaeioivqzkooiefrri", "xcvstmnrheqaieeakzkswvoyhdryuiaueplzgydaiiifxooalu", "vwpaauueougaoaoeaoiqktcitbeuoaoueolzfeeeiaxyraocfe", "gmxjqdouyrffqsaauetgaionniiiolljiuiuuzteuioaohmbpe", "xsvuoaoualrzwfuuesaooucksfeauwoiaiiouiowjvbiiwmyii", "xgtuewsfzobuaauuueipgmyadbnjcqipiuooiaezrfuoiooieo", "gccwvnuiotxwzibmiuuienuoeaaaaoojieoiergduowrbiihda", "rbxfuiiatkzjfhkaoagaoeoiaiuelxnrjvaaegbdpbeiajghsa", "ccfvyhjloodqyxyouaupnhxqpzmeveiiaoouboeoousnduuoiu", "voaeacmzgayvkueeeeeovreuuaeoioxnqxckdduiyuiaevjswi", "rrbkailxzcuoejmqbloouoalzteoodgouoe", "mhjnrnpbuurmccoenphypauusauoieoiiahytioajqwpiajlto", "rmbnvoaaiivaouaraoiaeeeeorlaeaeo", "cdwoeixbhuouinqleujcgwoeaultpwdsiaaeydfmagbhiosxya", "xtdtswkiuukwpxeuiasxkooulbstiihhsnkooeowbueoayybce", "ywvcniujqysgjiiabooiauyaeoooaamzcxsgdohtlneeyrhaui", "rhnfrzduazcggpouoetlpnuenqzaeutvhyfpcouhwuiooiiqhi", "fxmzkgouoifjckdeaadmdaouekoaueqbrswuuaaakpuaiaiwso", "dvpcbdfozbaioaeiezjxdeiaoinaoaerjaiuwccuoeotgbkiro", "zjmauuuhiaeoiduouoaiyiaioiqckcqbrageuiiioioobnouee", "peeieivjpuaiolhbxrwilkqueioiubjuuioaiuqbdsgxkcvifu", "yzmjjvaioveoaeauetheoaioowrtaaiiioomfttrueaalnrxho", "bjrtouujoauuhiuuoeieodkyhmieaoaxbeuieooauccnxmoaea", "kyquaaojtkwveacxwaurpeeeupnzyibksfxgoieorrhuiikoio", "cjflhoeeiubaaaaaozlqjzaiookeeeejqnhiiiuilykrttfuvu", "vjmjrduekbtgpkieearlhfyiaoiigmnshpjyuvbueuuaeeimto"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"cjflhoeeiubaaaaaozlqjzaiookeeeejqnhiiiuilykrttfuvu", "beiuesnaaeooiuajuaeafzdioioulooeajuuauuiueivsvkxga", "bjrtouujoauuhiuuoeieodkyhmieaoaxbeuieooauccnxmoaea", "peeieivjpuaiolhbxrwilkqueioiubjuuioaiuqbdsgxkcvifu", "kyquaaojtkwveacxwaurpeeeupnzyibksfxgoieorrhuiikoio", "gccwvnuiotxwzibmiuuienuoeaaaaoojieoiergduowrbiihda", "zjmauuuhiaeoiduouoaiyiaioiqckcqbrageuiiioioobnouee", "ccfvyhjloodqyxyouaupnhxqpzmeveiiaoouboeoousnduuoiu", "ywvcniujqysgjiiabooiauyaeoooaamzcxsgdohtlneeyrhaui", "zsggoeswduomuieuuuiazfeeieizgncneouiabtaeeoavstlri", "xgtuewsfzobuaauuueipgmyadbnjcqipiuooiaezrfuoiooieo", "hjuiutiiieoccsxiiiasbvlwaxciuieapdtgtjuooxhiaaigua", "cdwoeixbhuouinqleujcgwoeaultpwdsiaaeydfmagbhiosxya", "vwpaauueougaoaoeaoiqktcitbeuoaoueolzfeeeiaxyraocfe", "xsvuoaoualrzwfuuesaooucksfeauwoiaiiouiowjvbiiwmyii", "voaeacmzgayvkueeeeeovreuuaeoioxnqxckdduiyuiaevjswi", "jbouueiiohjuausvxoeuygzoadbggrruenlphwywe", "diiiueuuozuuoorqeouoaiodeaiuuwbsaou", "rrbkailxzcuoejmqbloouoalzteoodgouoe", "fxmzkgouoifjckdeaadmdaouekoaueqbrswuuaaakpuaiaiwso", "zioeeooeodtjyqmeouavyqcpeekeeuaoumgkqwuixeueueeeai", "dvpcbdfozbaioaeiezjxdeiaoinaoaerjaiuwccuoeotgbkiro", "yoiuilgpcyiieewiooaiihdgtidyiaaiaaixwxpxafeooaieao", "tflznqhiumzhwbwweeujqsoaoueeupwczlafgdjgxaajaeooei", "ttkdvevuoaouueeefieuowoeeioueeumdnfkyqyejdrcvbjiou", "zcpsccyezuoeoossdoouoaupgiiaskxiiaeioivqzkooiefrri", "fuouixqhriesxtxazvhnlqvaiveaueiuaazymvjyislwuauaro", "xcvstmnrheqaieeakzkswvoyhdryuiaueplzgydaiiifxooalu", "rbxfuiiatkzjfhkaoagaoeoiaiuelxnrjvaaegbdpbeiajghsa", "vjmjrduekbtgpkieearlhfyiaoiigmnshpjyuvbueuuaeeimto", "gmxjqdouyrffqsaauetgaionniiiolljiuiuuzteuioaohmbpe", "xtdtswkiuukwpxeuiasxkooulbstiihhsnkooeowbueoayybce", "rhnfrzduazcggpouoetlpnuenqzaeutvhyfpcouhwuiooiiqhi", "mhjnrnpbuurmccoenphypauusauoieoiiahytioajqwpiajlto", "yzmjjvaioveoaeauetheoaioowrtaaiiioomfttrueaalnrxho", "xjmoieaiiuqeieaeepfxpwoaiwqpywyjiiusuooeomsaaaoiei", "rmbnvoaaiivaouaraoiaeeeeorlaeaeo"};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> words = {"siueoaoutydgieuzkviaiaeqhkuoieuenprtswbkeedoeiuaio", "bgyszusjdppqbcoejgcvdermjrhzeouuzxooeoottrteryyxqu", "bbbxkeaaelaoiepsluueiioadgooaaeitlweailtmaiai", "doouaouoguoiundrztueeeovxxkeuooefoaouuieiemjzvmoou", "pjieurkjgsjcityqvbtovauuoeueopcflykbooadaeoepntzue", "rneeioaiulhjcwtxrwojqloeoooxvwaaiuxiuooxhiuavouaia", "ddauejmsauuoaeevyguuiaaapvguuixuoaaioeopjclxngeeke", "fvxvjeiueruuaoeoueopmhneiojfouaaefmhsfuiuaunrieioa", "nvhwjsiaabtxjbkmuycoaiuouuikuioaoooaabqvbsqaaeoyee", "ffgblmyvtuzrqdltvxnodrcjoyrtwpqaouizreiukpxioieczo", "qtnzscyobbciiaiellfyymjeeolxcmtebfxaeie", "baeiieoieiqvqteaufeeoijhhvwrdcgijloeoozyszaaeoejfi", "twmailtaeauuepgwgnhtuulhswlieouhbpsrraootaaieiofua", "qdbwpgdbuizpvrjvuoaonzeiiwtjtbioipgcwuatuuuooefoeo", "vqeaedmxvmkqaiwroeeuoaanjtmexcjcqglzumwoeoobtaaaei", "rnyxnuieawyxeargriurdbaiiswgrouakykdixgfjaoouolwdu", "rkrtfsxvejdfxccwuosqduuoaxvyeiiieooyrnyieeooangwsu", "rrnllxouorskslhtaovhdqyxuovmmoianshksraoauqkpgprse", "qnuueiimciaubuaoinqdtuahkbscivcqdnazrfftiafpyxjise", "tnljiovlaiuoeetoiiaaieemyjhouuaau", "zfwbaeooeelbeaourheoastpytenrouiaeiwaouoecrmaaiqsa", "zpwvoaouxtceiiawjaiemqghaowyczlqoacrdoewwqwkncyauu", "gpvxvduaeajeooouiuvfeieeuiuayvqdbyyogxmfloieicqlle", "kqqdtlozlgouuoaucmqjauoryeieiueeotmsoioamhxbaoaaku"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"baeiieoieiqvqteaufeeoijhhvwrdcgijloeoozyszaaeoejfi", "bbbxkeaaelaoiepsluueiioadgooaaeitlweailtmaiai", "qtnzscyobbciiaiellfyymjeeolxcmtebfxaeie", "bgyszusjdppqbcoejgcvdermjrhzeouuzxooeoottrteryyxqu", "nvhwjsiaabtxjbkmuycoaiuouuikuioaoooaabqvbsqaaeoyee", "vqeaedmxvmkqaiwroeeuoaanjtmexcjcqglzumwoeoobtaaaei", "qnuueiimciaubuaoinqdtuahkbscivcqdnazrfftiafpyxjise", "kqqdtlozlgouuoaucmqjauoryeieiueeotmsoioamhxbaoaaku", "gpvxvduaeajeooouiuvfeieeuiuayvqdbyyogxmfloieicqlle", "zpwvoaouxtceiiawjaiemqghaowyczlqoacrdoewwqwkncyauu", "zfwbaeooeelbeaourheoastpytenrouiaeiwaouoecrmaaiqsa", "ffgblmyvtuzrqdltvxnodrcjoyrtwpqaouizreiukpxioieczo", "pjieurkjgsjcityqvbtovauuoeueopcflykbooadaeoepntzue", "ddauejmsauuoaeevyguuiaaapvguuixuoaaioeopjclxngeeke", "siueoaoutydgieuzkviaiaeqhkuoieuenprtswbkeedoeiuaio", "doouaouoguoiundrztueeeovxxkeuooefoaouuieiemjzvmoou", "fvxvjeiueruuaoeoueopmhneiojfouaaefmhsfuiuaunrieioa", "qdbwpgdbuizpvrjvuoaonzeiiwtjtbioipgcwuatuuuooefoeo", "twmailtaeauuepgwgnhtuulhswlieouhbpsrraootaaieiofua", "rkrtfsxvejdfxccwuosqduuoaxvyeiiieooyrnyieeooangwsu", "rneeioaiulhjcwtxrwojqloeoooxvwaaiuxiuooxhiuavouaia", "rnyxnuieawyxeargriurdbaiiswgrouakykdixgfjaoouolwdu", "tnljiovlaiuoeetoiiaaieemyjhouuaau", "rrnllxouorskslhtaovhdqyxuovmmoianshksraoauqkpgprse"};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> words = {"ydvgfmgasspxououoastlscuiaogffqfkxbvirpsyuiuidmbei", "qmgoedygypuoeoocnjxjecfkgieejaueuiiuupnhjkcaaiudku", "qgkhjfoikaeaoezsoooaoyzceilioiookmrgzuutqckldmyavo", "yxfhcoaapzltjeomaeoucpwauairfhpcbsbgulgzxmsamfskso", "jskhdoieolzouiotfnxuwqmvtbjqemxhsauuuaewxbmdueaiea", "lnkioeemouuiyjdqpaifbeuouoaeuqcyteeoeulpkxkjouoada", "lvxaiiumneoooaiipiauonzfaeaddaeiavgeiaoaeuuxnfoeoo", "zceuapbrlhkebrbkhmomtyeeixckhiuovbvyziigbvnankktgu", "ciaoailzlmzrjnteqoiaoiooouyjnnbrltauhzuuueoujxcxwu", "ldjeiiucuaeaoiugduoahsaouoeyoueeuuioaqtcxeorteueoe", "lzeeuieiuisyhlleusprhceuldbkhsxvolcjmnhyuenfzoujco", "zeieiaeiuzgnzquuaookmcooiaakztdqeoaa", "rdhrchyuormyaazlvioeiuemiuaoiaemtvxleuaeojtgbooo", "ywrqlceojwcnaygwgsguuspeiiuceouuofbmeiou", "ynhtjgeknioowywqvfiaeupzeuaoeoouscfndnouawqmhceiju", "sgpaiieaeirheeavlaoeiopjyiiiufoiaielaoeoijgiouu", "tooeeaempjrilooieeeoeogzmmaiwmxuasmcouauixeiuaivve", "neeauoubqcyoeaiadsuoeffsiiweeiuayfqqqxamjthdmimtye", "wbiaooaaoehpooauaahweoiouuiowaaeewvyczeituieaaxsyo", "qnpuovdmtrcfchokxneuuscoouieexmnooe", "rfwaigaeuuxzpdniizjpjgvcuqciouuilbwaioiizcaiuoedro", "zcgeieaicyziaooodgyouioougsjuuaeaizwdcvrdkiokrdsoe", "rqvnteoieicmhwtioeabnxluaienauuueoeiswfuaaaeegzbqe", "feauooeoefczfroaiaadkxgyoiolruieepdymaepuiiuuxxttu", "tzqzidskuaeoykhscwofxfgjeau", "lbbuiolfgxmoeoioswiuesgnraxnmprnarqmwaootqbkvaivfo", "yqkaephqgboenjhrieogjqljgjoimyztiaojpoeiai", "ygvuoiurbuiiiiauejoaoaggmddfeyvkgzncwuayygspce", "qkpktgqhoqypkwxlmoamcrqeiecbiaiiejtiuebbmdpaxuauaa", "bcgpweakqiaewbuuaouaqeuuiiiaccyeieo", "slmvgcnouishbwerpgbtpmaeqjlauuaaa", "loaueeeggtoelbdfrdiauobeoaaqfoouvcpntbnnku", "bphhiouuoytloihuouakwcaiaiigjxgouooefzgwszaemtweau", "pxfnkiidmlooizeeuoaiensiuupycfmzouwmldvu", "spnbdjriqieeaeigfiaabxoeoiuxqghfjoimmpllkioeofgjuo", "stviaoelmaaioemllnkuxqeeihjiaeeiuauyzswzwgoavhypfo", "zvpeeryfdpojfnkqoeiehzctnomzpoooyoieiiidwvoaxkcquo", "jlsaacvxuuoioxwzrreuesrjaomzbpoigrjbcuieiepnkypoie", "zjxbxaiauthxlhtdsegnjnuaiarrlaeoueuhiaouaiuolaeeio", "kaioooodhscrooeydrnffuidqyloelxdeusniiopnouaieeati", "dpzmmqjeaabggoeaoenaiauxhqguooai", "mtlouhwpxhkcajdbiieaiiyiuuuikweieaaemtdeueoeiukvwo", "gvjcchpiualiaioouoaaraaeaureaeeoiuayfxleiooeicaaia", "bhyyeouiiuvieaijwdnmnduldydoxdkbwyvxanrfioiaanuiaa", "tyueeymrnqaoiwptbymaelxjqeincwtgoobvsdxcoumaeeoaaa", "xuiaaksooauoodruaaejpsvhkjhluxpuuuiaewlftipnxsieei", "lfdkdiqeuaexzxcuicgmhbmwpeeqdaianfteaoieanbzvxspuu", "joieaaeppvfeyrwoauuxuaeuaaeaextoouauii", "psvkxjoueeycchlhixxgcvzhauyzcgeozdeuamwbfqgkaqvvji"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"qkpktgqhoqypkwxlmoamcrqeiecbiaiiejtiuebbmdpaxuauaa", "bcgpweakqiaewbuuaouaqeuuiiiaccyeieo", "loaueeeggtoelbdfrdiauobeoaaqfoouvcpntbnnku", "dpzmmqjeaabggoeaoenaiauxhqguooai", "bhyyeouiiuvieaijwdnmnduldydoxdkbwyvxanrfioiaanuiaa", "rqvnteoieicmhwtioeabnxluaienauuueoeiswfuaaaeegzbqe", "bphhiouuoytloihuouakwcaiaiigjxgouooefzgwszaemtweau", "neeauoubqcyoeaiadsuoeffsiiweeiuayfqqqxamjthdmimtye", "zceuapbrlhkebrbkhmomtyeeixckhiuovbvyziigbvnankktgu", "tyueeymrnqaoiwptbymaelxjqeincwtgoobvsdxcoumaeeoaaa", "spnbdjriqieeaeigfiaabxoeoiuxqghfjoimmpllkioeofgjuo", "gvjcchpiualiaioouoaaraaeaureaeeoiuayfxleiooeicaaia", "ywrqlceojwcnaygwgsguuspeiiuceouuofbmeiou", "qmgoedygypuoeoocnjxjecfkgieejaueuiiuupnhjkcaaiudku", "lfdkdiqeuaexzxcuicgmhbmwpeeqdaianfteaoieanbzvxspuu", "ciaoailzlmzrjnteqoiaoiooouyjnnbrltauhzuuueoujxcxwu", "yxfhcoaapzltjeomaeoucpwauairfhpcbsbgulgzxmsamfskso", "ldjeiiucuaeaoiugduoahsaouoeyoueeuuioaqtcxeorteueoe", "jlsaacvxuuoioxwzrreuesrjaomzbpoigrjbcuieiepnkypoie", "zcgeieaicyziaooodgyouioougsjuuaeaizwdcvrdkiokrdsoe", "lnkioeemouuiyjdqpaifbeuouoaeuqcyteeoeulpkxkjouoada", "lvxaiiumneoooaiipiauonzfaeaddaeiavgeiaoaeuuxnfoeoo", "kaioooodhscrooeydrnffuidqyloelxdeusniiopnouaieeati", "feauooeoefczfroaiaadkxgyoiolruieepdymaepuiiuuxxttu", "ydvgfmgasspxououoastlscuiaogffqfkxbvirpsyuiuidmbei", "pxfnkiidmlooizeeuoaiensiuupycfmzouwmldvu", "rfwaigaeuuxzpdniizjpjgvcuqciouuilbwaioiizcaiuoedro", "xuiaaksooauoodruaaejpsvhkjhluxpuuuiaewlftipnxsieei", "tzqzidskuaeoykhscwofxfgjeau", "zvpeeryfdpojfnkqoeiehzctnomzpoooyoieiiidwvoaxkcquo", "sgpaiieaeirheeavlaoeiopjyiiiufoiaielaoeoijgiouu", "ygvuoiurbuiiiiauejoaoaggmddfeyvkgzncwuayygspce", "yqkaephqgboenjhrieogjqljgjoimyztiaojpoeiai", "zjxbxaiauthxlhtdsegnjnuaiarrlaeoueuhiaouaiuolaeeio", "tooeeaempjrilooieeeoeogzmmaiwmxuasmcouauixeiuaivve", "stviaoelmaaioemllnkuxqeeihjiaeeiuauyzswzwgoavhypfo", "wbiaooaaoehpooauaahweoiouuiowaaeewvyczeituieaaxsyo", "mtlouhwpxhkcajdbiieaiiyiuuuikweieaaemtdeueoeiukvwo", "lzeeuieiuisyhlleusprhceuldbkhsxvolcjmnhyuenfzoujco", "joieaaeppvfeyrwoauuxuaeuaaeaextoouauii", "jskhdoieolzouiotfnxuwqmvtbjqemxhsauuuaewxbmdueaiea", "rdhrchyuormyaazlvioeiuemiuaoiaemtvxleuaeojtgbooo", "ynhtjgeknioowywqvfiaeupzeuaoeoouscfndnouawqmhceiju", "qgkhjfoikaeaoezsoooaoyzceilioiookmrgzuutqckldmyavo", "zeieiaeiuzgnzquuaookmcooiaakztdqeoaa", "qnpuovdmtrcfchokxneuuscoouieexmnooe", "lbbuiolfgxmoeoioswiuesgnraxnmprnarqmwaootqbkvaivfo", "psvkxjoueeycchlhixxgcvzhauyzcgeozdeuamwbfqgkaqvvji", "slmvgcnouishbwerpgbtpmaeqjlauuaaa"};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> words = {"jreoikyydjeiueawfhtuauootncmaogkueojhrnhyjuezglyfu", "syznbuieogmjiaeaiiikcynaijvpdaflluoymskriettuoo", "rfcyqscenvnxhzeietrieossgeavwvdhzdaonfaeipdaiaiiti", "jdwhuioufcqdznmuouncjaeonjzttchnmerzvwxjaeeevtheuo", "ffrbkwvoilpqygqaptllauoituueeooo", "zhdlssuqxeaitnveoavsjwwuiuaqeuuiielvjiuauhdpjphxau", "ddnstdboairiiaiiecfwxyaiitfjuuoeeeqsnaiooovxfoeaou", "ffzppeuoqtaaaieepooauovaueuiaejrqdmiohxaieoethnybo", "boeioauaiorsqzeeauyaiooaeqppdquudoaoeiaaylfoaiiino", "ypfloeakhauaqzkhoeaicgqygiuikrduioihndjftfpitjnuea", "vbeoaoioebppdxsaehoauiaeljoauiaqbrrgahdpqwafymshui", "tltwxrteeadlgdkxxaoyqstzkzkuicieeuapgjsuunrhraoiea", "gvthoueeofvwqcickfiudxbkfuaeoeqjtmxveuuwswnueoewei", "vsfiiaiohgzieaodndqxktoeexiauuicsvgplcpseskvuiaioo", "dgsviamgvxooagdeiaayfiougoouaankdaeuaaeobtvaauujse", "wbqooueoanbqjuxckeoeehjjvboaeecxxsbkjetzioiizcrfxo", "myvcntchrujxcteaardeaioxjdxtuixmvkeuuuupkdtelbaoei", "gwbshzpmaekgwoathrjwjpvoufdyaieoeolaeoajzdvgtaiuyo", "xnueouuuogfgteiggfzfiooxnnkihlmiewwxgauaoatqchpoye", "nwqeigbdlrzfiedgwbcmuueutyeiunjngiewgscuauaeabrmpe", "cpzzmqeiomlhshueyrkbsvwuacjnmuxyheidnuoioofvnauwva", "nkjreomkdiioaiaucfhmeiaehqsouauwkuaactdoeuaekoooii", "yziueocvpmqpjopiiiaeiaitsjiuoctvqtvoeaxzsnfaeauhve", "kznsixwybauiueudlcrlitvgueorniaumaiaogmuooeeeea", "xaeeusfdooieoaeqeiuuuayskcemvuaiiytseeouavfjmukioa", "csuioioaoaqfseaaeouafxxiauummnryruuigmcuueuamtnsyi", "seeeoffqfpoalueauuaeuazlqaaoi", "sygxdaiivphkfzoidnzrjaoatbbffaowzvzduavzfieqdkseau", "dkroaiiuocpmkfnoiugbcnrqcesqvzsmtiuinyvgwiaoalmdti", "xaiiooeuaabhoiaachouaueopdkoiekhfviuuifooiuivnzsio", "noeiuioixgpaeoaobtueoiieedygceqlkvrdxaoelhmqchluee", "qmfkaizeuieooeupgcdaohdyfshiwclaiuacpeaaeooisiuoiu", "sphqyauiaghgspeiqkmjvnaoofkooicynqbaraeiauiaoaqqwa", "trnaeiieqnheuuuehniaioauohtzcauyfxloeoueipiieakggo", "rfeaaiuiurdtqvvztodvjdiiauqkgmpmmouklvpuoiwtnqmupa", "ygeuieiaoukeaoieetbyxoeuoiwbwwsteiaqztnyuauqyrppwu", "ssvsboaalfvzaoopbioouroaiiwruoeuvpiaeohaeeioieoucu", "kzuieaoutqckzveoaoxneuuaooophncdihwpzbrfoccnzpxoyi", "xgczaosghioiiaohdqoujndguaruaeoeuoathjvzjryuabwwzu", "jqnmeiaubdouaffcqrmmwdompfvwdkuomvctuoyeaauoonwiia", "tjqrdqhlxattkllrrouwwyuoieeuultaeensfhpyeaziuiooeo"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"jqnmeiaubdouaffcqrmmwdompfvwdkuomvctuoyeaauoonwiia", "xaiiooeuaabhoiaachouaueopdkoiekhfviuuifooiuivnzsio", "boeioauaiorsqzeeauyaiooaeqppdquudoaoeiaaylfoaiiino", "vbeoaoioebppdxsaehoauiaeljoauiaqbrrgahdpqwafymshui", "nwqeigbdlrzfiedgwbcmuueutyeiunjngiewgscuauaeabrmpe", "noeiuioixgpaeoaobtueoiieedygceqlkvrdxaoelhmqchluee", "dgsviamgvxooagdeiaayfiougoouaankdaeuaaeobtvaauujse", "xgczaosghioiiaohdqoujndguaruaeoeuoathjvzjryuabwwzu", "kzuieaoutqckzveoaoxneuuaooophncdihwpzbrfoccnzpxoyi", "nkjreomkdiioaiaucfhmeiaehqsouauwkuaactdoeuaekoooii", "ddnstdboairiiaiiecfwxyaiitfjuuoeeeqsnaiooovxfoeaou", "ypfloeakhauaqzkhoeaicgqygiuikrduioihndjftfpitjnuea", "tltwxrteeadlgdkxxaoyqstzkzkuicieeuapgjsuunrhraoiea", "cpzzmqeiomlhshueyrkbsvwuacjnmuxyheidnuoioofvnauwva", "gvthoueeofvwqcickfiudxbkfuaeoeqjtmxveuuwswnueoewei", "qmfkaizeuieooeupgcdaohdyfshiwclaiuacpeaaeooisiuoiu", "dkroaiiuocpmkfnoiugbcnrqcesqvzsmtiuinyvgwiaoalmdti", "csuioioaoaqfseaaeouafxxiauummnryruuigmcuueuamtnsyi", "vsfiiaiohgzieaodndqxktoeexiauuicsvgplcpseskvuiaioo", "yziueocvpmqpjopiiiaeiaitsjiuoctvqtvoeaxzsnfaeauhve", "ssvsboaalfvzaoopbioouroaiiwruoeuvpiaeohaeeioieoucu", "wbqooueoanbqjuxckeoeehjjvboaeecxxsbkjetzioiizcrfxo", "sphqyauiaghgspeiqkmjvnaoofkooicynqbaraeiauiaoaqqwa", "kznsixwybauiueudlcrlitvgueorniaumaiaogmuooeeeea", "sygxdaiivphkfzoidnzrjaoatbbffaowzvzduavzfieqdkseau", "rfeaaiuiurdtqvvztodvjdiiauqkgmpmmouklvpuoiwtnqmupa", "jdwhuioufcqdznmuouncjaeonjzttchnmerzvwxjaeeevtheuo", "gwbshzpmaekgwoathrjwjpvoufdyaieoeolaeoajzdvgtaiuyo", "seeeoffqfpoalueauuaeuazlqaaoi", "ffrbkwvoilpqygqaptllauoituueeooo", "ffzppeuoqtaaaieepooauovaueuiaejrqdmiohxaieoethnybo", "syznbuieogmjiaeaiiikcynaijvpdaflluoymskriettuoo", "xnueouuuogfgteiggfzfiooxnnkihlmiewwxgauaoatqchpoye", "jreoikyydjeiueawfhtuauootncmaogkueojhrnhyjuezglyfu", "zhdlssuqxeaitnveoavsjwwuiuaqeuuiielvjiuauhdpjphxau", "trnaeiieqnheuuuehniaioauohtzcauyfxloeoueipiieakggo", "myvcntchrujxcteaardeaioxjdxtuixmvkeuuuupkdtelbaoei", "ygeuieiaoukeaoieetbyxoeuoiwbwwsteiaqztnyuauqyrppwu", "xaeeusfdooieoaeqeiuuuayskcemvuaiiytseeouavfjmukioa", "tjqrdqhlxattkllrrouwwyuoieeuultaeensfhpyeaziuiooeo", "rfcyqscenvnxhzeietrieossgeavwvdhzdaonfaeipdaiaiiti"};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> words = {"cvfwlkoaukioieeouuwoeiieekeeooebqvuooee", "druoeeoooigbkfqbmeeeznbpbfaoraoeoeuoaqzzouuhiauaai", "dbmreuqeueuxoiuauabvkqoiaezcdoeoeiiddeeoeexcieuupi", "rgneaoeeiubnauaoadzneeoeaaixdcwyii", "vvmueaeieadpcljfyueanbeoofcmxknufmffjqtekzdlpasjoi", "kxpvideiiaijdveoviiaixkhhltteujauoooyscyqzheookbgi", "sbrmywuohmgiuuueakdnzeuisyueoeiaoibjcsclnewvgkzkxu", "wqywdpzehxzsauvyszmxuuiixtjauiagpieiajgeeeaaimtghu", "kviootdzmaeeihzfrmoaaupdskioeqveoeestksiiimzbdfzai", "fkueiaitvcfcuoeilqbcomeeouqqpuezpwqrzbtoekgioeoiai", "pdrjrcaieelrbzfyhioakfhcaietoueotoiaueotgsdmnswoeu", "rvieiiaqwreioouowcqtoiofkrlprauhqaouoeavtygtgeuotu", "rfdaoooigjeueoaimpwaodxioaxbwqecvueummfuoaislnllji", "sueeuaiuuiwiooaikveaoiereoeiiieuewzmchiiiqynwfiuoe", "ksxgneavmiiaeoecruaatrkgkleuqyrierreiaiooediiuuoia", "bbtioeeuaybcgmylxeolghlnoisfjdgbynfilhjhcttuujnbne", "giuaulgrkvaiaioyfuoipmweaiuifsfuiaxcdpzyeaiwsskyqi", "xueaooimggmjjoaaudeaaauufxeuekbwfibyaioaaaumcgcjsu", "ciouaiarpqoaouohmrjfmlqeuzrtgmvoounfdkfpregbvvsjtu", "kgpcieuaeubwoeoluuaiavqxtdlauncbbmuaacksrozuueoeeu", "jkyieifbuiejwdoopgouoeieaa", "nfaooobueeigxwtqlioljrxxhaourwkcgyaeovvzvhdiaiotpi", "xlkwtqkmusgkrnleibdaoeuumpgweeo", "xyxzmouiesaaeaaegwfrmeoeaofjuooeuadzmxaeieoqmlmzaa", "jssmeoueaocvmvtsnoansqieuboiieamjqeaaiaaessxdvqmii", "wouuueueuofbvcxoaaotwsveqcaoio", "naaaauolsqpegpycyesxpmxkgaancjrnyfijqkmjgwyecuioeu", "bdftboaeaakdboeexuuaeszaouigqauooiaa", "ngpdxaouuihzyzlvxokhwnenmheufkleiueu", "kpwiajjdwiuujsljeoiaaexzcfeuilduiiehxhrsdnuiilsjde", "brfmaiiefrgwgkswwelhhieimjhoa", "boieujvfbbiotueaaoacqtjtiidcaiupycqhjbjiymwyaiblao", "hdeeueerwgjzftouiqrlkmofmwsoyvlmqzeoaushrcoorjqfxu", "dfvaoeawmkkqvaarcppzeiosaeioardzhmmfofuiauauefrtfe", "lgzzaunlgldjqajpouuuuuufsvyuaiieatueoaighqfoaeauuu", "mwfaixlxzoeoiawqmdycsvuemkuiiktxieyqaueijpgpauiicu", "qwieuiosyqjmcxdeakslcxeeebkbvfaeiijkaioiaajeeuambe", "wlshjoeoxmsiioiajpbtbcznsaksrgfnploogxksobooeuioae", "zpjwroiqwbeeeafdwuoejhyjsgwniplrlqqeuysuoevvgkocbi", "tbauonllnkhueixbyyvdaeiotciououoizzaeoucteaesfaiue", "wqeauernrkopbpooiiuapqcydiubbmoooeiunuuoauiiedryqe", "ppvxjviethmxyhfwuboaooeehjwtjvacoiiempltfdibfoaeei", "coooesjaieeoiiiffrdoeqpzoaacxdbsxreilzbdmnaanqcoeo"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"wqeauernrkopbpooiiuapqcydiubbmoooeiunuuoauiiedryqe", "bbtioeeuaybcgmylxeolghlnoisfjdgbynfilhjhcttuujnbne", "xlkwtqkmusgkrnleibdaoeuumpgweeo", "bdftboaeaakdboeexuuaeszaouigqauooiaa", "ppvxjviethmxyhfwuboaooeehjwtjvacoiiempltfdibfoaeei", "sbrmywuohmgiuuueakdnzeuisyueoeiaoibjcsclnewvgkzkxu", "qwieuiosyqjmcxdeakslcxeeebkbvfaeiijkaioiaajeeuambe", "boieujvfbbiotueaaoacqtjtiidcaiupycqhjbjiymwyaiblao", "rgneaoeeiubnauaoadzneeoeaaixdcwyii", "jssmeoueaocvmvtsnoansqieuboiieamjqeaaiaaessxdvqmii", "wlshjoeoxmsiioiajpbtbcznsaksrgfnploogxksobooeuioae", "cvfwlkoaukioieeouuwoeiieekeeooebqvuooee", "brfmaiiefrgwgkswwelhhieimjhoa", "nfaooobueeigxwtqlioljrxxhaourwkcgyaeovvzvhdiaiotpi", "dbmreuqeueuxoiuauabvkqoiaezcdoeoeiiddeeoeexcieuupi", "kgpcieuaeubwoeoluuaiavqxtdlauncbbmuaacksrozuueoeeu", "xueaooimggmjjoaaudeaaauufxeuekbwfibyaioaaaumcgcjsu", "zpjwroiqwbeeeafdwuoejhyjsgwniplrlqqeuysuoevvgkocbi", "ciouaiarpqoaouohmrjfmlqeuzrtgmvoounfdkfpregbvvsjtu", "coooesjaieeoiiiffrdoeqpzoaacxdbsxreilzbdmnaanqcoeo", "ksxgneavmiiaeoecruaatrkgkleuqyrierreiaiooediiuuoia", "tbauonllnkhueixbyyvdaeiotciououoizzaeoucteaesfaiue", "mwfaixlxzoeoiawqmdycsvuemkuiiktxieyqaueijpgpauiicu", "naaaauolsqpegpycyesxpmxkgaancjrnyfijqkmjgwyecuioeu", "rfdaoooigjeueoaimpwaodxioaxbwqecvueummfuoaislnllji", "kxpvideiiaijdveoviiaixkhhltteujauoooyscyqzheookbgi", "dfvaoeawmkkqvaarcppzeiosaeioardzhmmfofuiauauefrtfe", "vvmueaeieadpcljfyueanbeoofcmxknufmffjqtekzdlpasjoi", "druoeeoooigbkfqbmeeeznbpbfaoraoeoeuoaqzzouuhiauaai", "xyxzmouiesaaeaaegwfrmeoeaofjuooeuadzmxaeieoqmlmzaa", "jkyieifbuiejwdoopgouoeieaa", "wouuueueuofbvcxoaaotwsveqcaoio", "ngpdxaouuihzyzlvxokhwnenmheufkleiueu", "rvieiiaqwreioouowcqtoiofkrlprauhqaouoeavtygtgeuotu", "fkueiaitvcfcuoeilqbcomeeouqqpuezpwqrzbtoekgioeoiai", "hdeeueerwgjzftouiqrlkmofmwsoyvlmqzeoaushrcoorjqfxu", "giuaulgrkvaiaioyfuoipmweaiuifsfuiaxcdpzyeaiwsskyqi", "lgzzaunlgldjqajpouuuuuufsvyuaiieatueoaighqfoaeauuu", "wqywdpzehxzsauvyszmxuuiixtjauiagpieiajgeeeaaimtghu", "kpwiajjdwiuujsljeoiaaexzcfeuilduiiehxhrsdnuiilsjde", "kviootdzmaeeihzfrmoaaupdskioeqveoeestksiiimzbdfzai", "pdrjrcaieelrbzfyhioakfhcaietoueotoiaueotgsdmnswoeu", "sueeuaiuuiwiooaikveaoiereoeiiieuewzmchiiiqynwfiuoe"};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> words = {"hhduizgtaaotaeioooptxxqgzcapuiaouaouumdjyeugrcga", "naoaodwykaqzyeueqsuiaeuuakmzkcnoattlzyeouulvyrvkai", "clwjiaocqbmvdeuoimaaueioamxwuiuebyhykaiipmdaegioeo", "mjpruauiubniaeauwuaeaiiubcaueaiuuytauoyhpqfeaiotae", "dgnoiuoauepeuaoiuuekhoeiueeaypbiaaaaihksioheiiiaii", "jswwpeaaidydlxkazflqtoeuxlhkkbiaerfeououohccmtfqae", "zaaeedrvvqveofznuoiioaukaooubwiuekqaaabxfloxyhvaee", "kiuuuuojvuaeueaksqmcwseuuxteaeejwvffoeoaewtzwiolgu", "wmdcueouvtqqctrfsexoeiauopvqhjooacouieuukkeeauueio", "qxwoeouaeixiueaqphdyuaeavdvzeiuioimieoidqmftvayuea", "wgkouafwkkueuvwfqeuuzooiaaiotsueiojkkuuaeaauwfdnta", "rzhkdaaceeaaoaaqspwqjaimuiue", "jvwwkwoeaujaeuefoieuiouuuxcgoiwiaeeaaoaakbgaiaoexa", "fvuoaeiuairpmgaiutyeeueeauungrtmaeoaxcyyuliiaamsio", "xqzhkjxuizhjdqddoqtoeauiblaoijeuiieeacxaaeupgyhebu", "jxlbkksiuivqmyiiioaosfweieezlncminwzuaeuuujjeuaqza", "bsgiaiivqhllbosgtdzsoeeavzauaeeeurdnwtaeomgeieooea", "ldfwqurwziozxscuuoosspiuioiuunaoaoarcykuaouyeouuau", "maoueeioynlieeauoakjbsdoaxkcvzeoiuedxbxrkuoiyxuieo", "bqttfitptqaeeoeimteoouabymoeoplbvtouaodgwznnoeuuko", "xauooavrpjzjujgoiitphlscveaomioiakqmnzftuuimnjgtia", "trvdinfvieeezlwioogooeaiojyjblaaeoi", "hnhthewrfcsqtqtufeeooaoaaqtblcaefrjoiapjppyxqoezmu", "cbaiiusxmoibnydtwhoygbiisheueuujhbfcsxealxcveaeeuu", "phfuooaijqaeieeeadhtgguicqpwosnzsfvuaiseuiiuimfxve", "kbqauiqzxoaiooeactieaiwfgjqiii"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"mjpruauiubniaeauwuaeaiiubcaueaiuuytauoyhpqfeaiotae", "xqzhkjxuizhjdqddoqtoeauiblaoijeuiieeacxaaeupgyhebu", "cbaiiusxmoibnydtwhoygbiisheueuujhbfcsxealxcveaeeuu", "bqttfitptqaeeoeimteoouabymoeoplbvtouaodgwznnoeuuko", "bsgiaiivqhllbosgtdzsoeeavzauaeeeurdnwtaeomgeieooea", "zaaeedrvvqveofznuoiioaukaooubwiuekqaaabxfloxyhvaee", "clwjiaocqbmvdeuoimaaueioamxwuiuebyhykaiipmdaegioeo", "rzhkdaaceeaaoaaqspwqjaimuiue", "wmdcueouvtqqctrfsexoeiauopvqhjooacouieuukkeeauueio", "phfuooaijqaeieeeadhtgguicqpwosnzsfvuaiseuiiuimfxve", "kbqauiqzxoaiooeactieaiwfgjqiii", "dgnoiuoauepeuaoiuuekhoeiueeaypbiaaaaihksioheiiiaii", "qxwoeouaeixiueaqphdyuaeavdvzeiuioimieoidqmftvayuea", "naoaodwykaqzyeueqsuiaeuuakmzkcnoattlzyeouulvyrvkai", "maoueeioynlieeauoakjbsdoaxkcvzeoiuedxbxrkuoiyxuieo", "jswwpeaaidydlxkazflqtoeuxlhkkbiaerfeououohccmtfqae", "hnhthewrfcsqtqtufeeooaoaaqtblcaefrjoiapjppyxqoezmu", "jvwwkwoeaujaeuefoieuiouuuxcgoiwiaeeaaoaakbgaiaoexa", "fvuoaeiuairpmgaiutyeeueeauungrtmaeoaxcyyuliiaamsio", "wgkouafwkkueuvwfqeuuzooiaaiotsueiojkkuuaeaauwfdnta", "trvdinfvieeezlwioogooeaiojyjblaaeoi", "hhduizgtaaotaeioooptxxqgzcapuiaouaouumdjyeugrcga", "xauooavrpjzjujgoiitphlscveaomioiakqmnzftuuimnjgtia", "jxlbkksiuivqmyiiioaosfweieezlncminwzuaeuuujjeuaqza", "kiuuuuojvuaeueaksqmcwseuuxteaeejwvffoeoaewtzwiolgu", "ldfwqurwziozxscuuoosspiuioiuunaoaoarcykuaouyeouuau"};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> words = {"srrsmkeeoleaaaubjieuooizvgjttlsyuwqoiueaoulfriiaio", "lhhdgeoisgnxbupkbstalqtxleutxqfsbouiglqlhpxiynrkee", "rmiuuieorzeeoktqfexuoiozaauazzuoajhmiudieealgjoaoi", "gkqiuiuoiywyouwbdrsokxreiuoogzymsuoiireeeiiabjmaoi", "klxdmcfeiixpcaueuiuosmwoatcdqcruuoociuiuicytsgfeae", "lxeeaouhouiuieuuucgkoeuifvxvoukztqnuzxdvmiujppuiie", "qbthotiauooyzhlscpuoobzwieemyfsoczdvnrigwnqxtwialu", "vwoueisieueehpioaeaulxkcozpgieoasmgueueaeewieouuse", "rclffiooiuwcczybbyuxdsgqkzozxxiidxjoaeiioptpiioiii", "nueiaarznmeeeixzkhqqajlaeeojmmriaeuyzwhaktoeieaoaa", "sxfsyeatqyzsxknouwgbxhcxiqbiuiktueoiuiibwuiaainbfo", "bzygbbnoqnxuusdsqwmioisuieaeeiiffvvgiui", "fuuaiueadaiaeuptyjououizkpzqwyxoanheeuuwcaiiaoclsu", "ycchtegyqzonlbvloeoxeaiuldqmpaeeoipnguuabnftxxfone", "kzsytxnfooyeuiiouiqmdzttaogwdooueoaaxpccfqeueufxko", "dduoeigkxluolbsiaiuiyszhzquiabrfxiuaorxdoautsxuuaa", "boueuuwtqfsnoeofnysbbieubjjzcnvoieqvjrpvwjya", "treuooepeaioueeeefpwcueeoueczlqfcqoniuieuuitytaeiu", "mvqrdfgaeehooaoouoemvaaaiwzhhcacsnoiyfglxpoirxbnao", "nbiietwttzknoekkykkgznifkthyavfkuoidvhvauivbauaeau", "vwqdvztvegeoaoeouarhzqcigwqzwqaiamvaoemlwmwkqnevje", "tuoueaibqjeieuueynioeaasrhzeeamuiuerpzauneoeauawlo", "ngthiagvtsbweanxoaojjybvsxhojtppeheooeoaiacgiaoiio", "lkdaooujqeaoiojssieusthpalwwcxvueqhpuaqeoiooeue", "ldgjjkjeuolgfioioxbeeaioeuguueievtgjaezgsiovsrhxko", "suoouaatkwgdslpzuxuauuiectstuesmmieowzkzpyoauozieu", "pyqctffvuncweuauoxwdgmhoehkxrnlueeuknzfaeesyklhuie", "jluiuoaynwdxqkraptvrtspkiexuoouui", "gueoixlfjadtqwaieezuoiuuiauichhlygrgahseiiiaoa", "xrrseouiusrkkiiaeoalcmlgzigzhnbkzviilkeoeouemziioa", "pyiaaarltprlmieoyzljkbhetfaueevhuueoaiauljmxpaewro", "pvveueioaijfwmfxyuerfoiaoiyyjskiiauxkuiaouojzdsdyu", "tiouaafgmfhnzcevdsuaoueejjhauuuukflmavieienyxqueei", "xkpkoewxyjleaooveooiclkzoqbxjoauohstnbtcahqyaaiiee", "qbaoaaqeaueectvxpbwmueneaooatdlleooibkieezxchxsjbo", "mjzuuoflpouiauexjywwivxlfmiouudeaoeokmddeeuuarsqfu", "wnyeeockmvoeeoaapstquiiiyeuiasiieudqyrgdziheiiedho", "nggxruiosggsyiiiudhnfarcuioouaclmfszaeaifieuiimyui"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"srrsmkeeoleaaaubjieuooizvgjttlsyuwqoiueaoulfriiaio", "boueuuwtqfsnoeofnysbbieubjjzcnvoieqvjrpvwjya", "gkqiuiuoiywyouwbdrsokxreiuoogzymsuoiireeeiiabjmaoi", "qbaoaaqeaueectvxpbwmueneaooatdlleooibkieezxchxsjbo", "ycchtegyqzonlbvloeoxeaiuldqmpaeeoipnguuabnftxxfone", "tuoueaibqjeieuueynioeaasrhzeeamuiuerpzauneoeauawlo", "dduoeigkxluolbsiaiuiyszhzquiabrfxiuaorxdoautsxuuaa", "sxfsyeatqyzsxknouwgbxhcxiqbiuiktueoiuiibwuiaainbfo", "qbthotiauooyzhlscpuoobzwieemyfsoczdvnrigwnqxtwialu", "bzygbbnoqnxuusdsqwmioisuieaeeiiffvvgiui", "ngthiagvtsbweanxoaojjybvsxhojtppeheooeoaiacgiaoiio", "lxeeaouhouiuieuuucgkoeuifvxvoukztqnuzxdvmiujppuiie", "gueoixlfjadtqwaieezuoiuuiauichhlygrgahseiiiaoa", "klxdmcfeiixpcaueuiuosmwoatcdqcruuoociuiuicytsgfeae", "wnyeeockmvoeeoaapstquiiiyeuiasiieudqyrgdziheiiedho", "xkpkoewxyjleaooveooiclkzoqbxjoauohstnbtcahqyaaiiee", "nggxruiosggsyiiiudhnfarcuioouaclmfszaeaifieuiimyui", "fuuaiueadaiaeuptyjououizkpzqwyxoanheeuuwcaiiaoclsu", "mvqrdfgaeehooaoouoemvaaaiwzhhcacsnoiyfglxpoirxbnao", "suoouaatkwgdslpzuxuauuiectstuesmmieowzkzpyoauozieu", "treuooepeaioueeeefpwcueeoueczlqfcqoniuieuuitytaeiu", "mjzuuoflpouiauexjywwivxlfmiouudeaoeokmddeeuuarsqfu", "rmiuuieorzeeoktqfexuoiozaauazzuoajhmiudieealgjoaoi", "nbiietwttzknoekkykkgznifkthyavfkuoidvhvauivbauaeau", "rclffiooiuwcczybbyuxdsgqkzozxxiidxjoaeiioptpiioiii", "tiouaafgmfhnzcevdsuaoueejjhauuuukflmavieienyxqueei", "kzsytxnfooyeuiiouiqmdzttaogwdooueoaaxpccfqeueufxko", "vwqdvztvegeoaoeouarhzqcigwqzwqaiamvaoemlwmwkqnevje", "lhhdgeoisgnxbupkbstalqtxleutxqfsbouiglqlhpxiynrkee", "ldgjjkjeuolgfioioxbeeaioeuguueievtgjaezgsiovsrhxko", "xrrseouiusrkkiiaeoalcmlgzigzhnbkzviilkeoeouemziioa", "pyqctffvuncweuauoxwdgmhoehkxrnlueeuknzfaeesyklhuie", "vwoueisieueehpioaeaulxkcozpgieoasmgueueaeewieouuse", "pvveueioaijfwmfxyuerfoiaoiyyjskiiauxkuiaouojzdsdyu", "nueiaarznmeeeixzkhqqajlaeeojmmriaeuyzwhaktoeieaoaa", "jluiuoaynwdxqkraptvrtspkiexuoouui", "lkdaooujqeaoiojssieusthpalwwcxvueqhpuaqeoiooeue", "pyiaaarltprlmieoyzljkbhetfaueevhuueoaiauljmxpaewro"};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> words = {"ntuoeiijcxpeaueuawnxtiiyiouenauaalmmaiiiokoiieatai", "gzcnyiuilsvryaiiedqaueidoueioooiotztlaaipuoiuvknna", "wkzspazwaoouxnmieeiimjgleuzzlboeftdpzsxioimzmfjzoo", "dnoeiiuaieqiiuuiierbjoeeeuwwflaeuuagsjquiaqpquuisi", "lsypdflkoezzxxcsooamdvyaodtwtiofjsueaoohaiuouooiea", "meaiaeiaokuueixhyfjuwpzmpqupieearvrvoqlhxzafueuihi", "nxqziefkgjlfyyaypdwpyxuelqrfueorwvcoigoiau", "rzzloedksouiafouiouhycdlopaiieiubsiuudgbxoavylbuee", "gyouolymgeuuuiuhyjxzbpaawjiuuocyxrqnoa", "zrjaarwqpogaaaeieuiiqaeeaiiedbxgmweieehqprnvaeixaa", "mvziaizeoiuiovylcfczmezwnwkbyplagbplveighauoamcpue", "qdauiiozkbauuwjrueuasdnkaoefldoa", "wxdlxaptseeoieocvbzptuievxspfaeaaercldeeccmoeeueeu", "byhoeeoemoaeeiiuwouourwghnsaeowxdveaieoxhyiuaioeou", "gkhkmnbirrtueeegrpoiaoewtyjfloeaidioaebxtaao", "ctpuouaiklykwuieirweaiipfdmdaauiefoaiawfmaifoeeale", "ghliaeeeaoloouuxqeuatzduoiohoeiiogouooeuiapgmdglio", "waooeicslwsuoqlaueoieowrhgeyaoeanpcuoztoaaiagxguei", "ckfaaixndeiuauxbsouoijlshsreixzwdfqeimnsvwiidqbpai", "vieaocbsaeogvjeoaiiigeuieeoeasueioooywgjieoetcuuau"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"rzzloedksouiafouiouhycdlopaiieiubsiuudgbxoavylbuee", "gkhkmnbirrtueeegrpoiaoewtyjfloeaidioaebxtaao", "byhoeeoemoaeeiiuwouourwghnsaeowxdveaieoxhyiuaioeou", "vieaocbsaeogvjeoaiiigeuieeoeasueioooywgjieoetcuuau", "wxdlxaptseeoieocvbzptuievxspfaeaaercldeeccmoeeueeu", "ckfaaixndeiuauxbsouoijlshsreixzwdfqeimnsvwiidqbpai", "waooeicslwsuoqlaueoieowrhgeyaoeanpcuoztoaaiagxguei", "ctpuouaiklykwuieirweaiipfdmdaauiefoaiawfmaifoeeale", "gyouolymgeuuuiuhyjxzbpaawjiuuocyxrqnoa", "zrjaarwqpogaaaeieuiiqaeeaiiedbxgmweieehqprnvaeixaa", "dnoeiiuaieqiiuuiierbjoeeeuwwflaeuuagsjquiaqpquuisi", "gzcnyiuilsvryaiiedqaueidoueioooiotztlaaipuoiuvknna", "lsypdflkoezzxxcsooamdvyaodtwtiofjsueaoohaiuouooiea", "nxqziefkgjlfyyaypdwpyxuelqrfueorwvcoigoiau", "qdauiiozkbauuwjrueuasdnkaoefldoa", "wkzspazwaoouxnmieeiimjgleuzzlboeftdpzsxioimzmfjzoo", "meaiaeiaokuueixhyfjuwpzmpqupieearvrvoqlhxzafueuihi", "mvziaizeoiuiovylcfczmezwnwkbyplagbplveighauoamcpue", "ghliaeeeaoloouuxqeuatzduoiohoeiiogouooeuiapgmdglio", "ntuoeiijcxpeaueuawnxtiiyiouenauaalmmaiiiokoiieatai"};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> words = {"xbcbvaoptgjjjeuloeoexyjoauaaardhriazwrbmkuizkhngeu", "ghgnuoeqteeoiaiugseuoauaajttbeoekfple", "bsqculswcwaungeaaeeoimzkvjxlueavkieoealxwgdmi", "jbwpddeopplvxeaeidwbaeueogveauioeuhxstvpraeawrsaei", "vzlwuatpuieaecsruuraeaaztgiohuaeaofjgruiaesqskfjuu", "gwuaauuiyueuoeooaxwoaiooauhnbgnlzfkazsouioaoabbdoo", "mkktpqkpebhzneetywsyllaegnoeuuugmpmlfoerooioxdhmwo", "psaauitaaaeuiigfzdckxyaotpvkyufuuiouoinpvyaieeilva", "btplgozgxuuoueycuoooeuulouaeaaaofueeatuoaoaeiujmwa", "jlvlkaoieoclvlubcnlfvaoifrxaoo", "whjueodzpcvrfvawcssxmndiybeeuiieuqioeuczueeahhznle", "nvrauejyeuiaaireeeoixnqqeeiozzfxlaidvgsyayympuavpi", "fpzjeufieooeuwklaeuoendxvgohqgbeadoieieaauvvoiurxo", "lwfwfwocggaeeasdqiixxxtqbxopmynyaaacdtcbprurxweoue", "dhwxkwueazsqdlaqbmzydtaeiymkaiiouxgnoaueopbvgiuoyi", "yjmiiuuiviooomneooaooxxjwiaiivdpaii", "tlsqmzpiddtmaiogjkcluhvnaeuoedrxvkxbuaasaooijteaiu", "lroeiennkzdiiaiiznkaiicuauuifnvuiauuuascgooekduioe", "keeoukrdjoahzcuufwbrfpsjogztjfznceicmyhiothmzownzu", "wgjaiytczouuybruaohtiaojlbbjwyiiikcrftuyniioiaoudi", "xrmiiawgyrxxauerfauuuiouelvkjfvfxcapiuaulpjieiloeo", "cbjioaorllzzieuoqfstfxonqwrproedjtcpvyembzwuatksdu", "bmrqiaoatvxmswwpaikcseuidcoiesioiordyyzjmbichieoce", "yooioaikauuiyoueeuasoueeoivksouoii", "jqxueoekyuoaaonslfexeiaeuolheeoieaaptzwgcciyngpauo", "trdzfewwlnlsrsoodnmjliqktloiioirdoaonwxsxuualdbtni", "luieueuumeauiqyoeiauuuxluauirwpkrqaeunyjgdnauiu", "wblmsoxsgvytnuaowtkiopjskpaoizmxzxymsqoqgccoiouoze", "vaeauieatbzooumfstaeoetnhauovzoiuieueabxhnkcoaeoxu", "tauououoaewzfaueeiasndoaxysnuuiuooqheauainaiiiaoiu", "stuoenjjieaakseuitpffuzrauuauohlqtioiouadhxxoioo", "kgvoaeeurcgsmxamiuoieuueosauaoeaewxfeuaoieqaiuiiiu", "dlmdoiwhlieaoeqfjdjteqsiaeyoiuoaoncuuoaorkljiooefu", "foeeiipmiuemseaearuoiuuxgxftuiyneauagqyquouisaoaao", "gftbaiawkxbuuiueihlpeeaokzshhserkjybcdpubxwiooaioo", "tjjchrkvhinswqiiaamluoeuuuouygpgceuaeeykaaeaozyrgo", "wwqdnteqnjbeueeeuxmlsiiaxrfoiaencpjtduouuvwqxyuaei", "syjeuifdgggiokscxcrioidieiauejvbxwifrtnauuiaevoaea", "jkqxzrolcqgrufeoiofviuuuoxkyeioacxgueaooscuioiaaai", "yvzpbjsoiecruuefpkhfiuwsfcxhoeauqvplaeiujfvvvsgire", "ckmpkwaiuqaoiioeoohmeuiiejkjgmokzpkmyaglsbldnoeuhu", "tieaaedoeoieuaauwgxdriijpcwzxlaalooaetdtmiueeeuwva", "brjaughyzjdvuookiiieaxzceoeiaezphcqszauowgqntxisxu", "rpciowcaeeexwduouuordchzvtiarlxueiuaiacycmouizsple", "vsfkiaieuteiaeiuougtuuuouiomlcvxfbaooxzrnxyiiuiwke", "fyaoeayyvqtgxjhewxcjteiqrvtagmmqvdaaqxtxooeaqtaeii", "ygmleieomyxfubzjnckzueuraeouiikoeeoztxcuuionwxuoa", "baeiiaeeocgpknpgkueskngcvreaoyfzmrtuotycueiinnlvue"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"baeiiaeeocgpknpgkueskngcvreaoyfzmrtuotycueiinnlvue", "gwuaauuiyueuoeooaxwoaiooauhnbgnlzfkazsouioaoabbdoo", "jlvlkaoieoclvlubcnlfvaoifrxaoo", "mkktpqkpebhzneetywsyllaegnoeuuugmpmlfoerooioxdhmwo", "bmrqiaoatvxmswwpaikcseuidcoiesioiordyyzjmbichieoce", "brjaughyzjdvuookiiieaxzceoeiaezphcqszauowgqntxisxu", "bsqculswcwaungeaaeeoimzkvjxlueavkieoealxwgdmi", "btplgozgxuuoueycuoooeuulouaeaaaofueeatuoaoaeiujmwa", "vaeauieatbzooumfstaeoetnhauovzoiuieueabxhnkcoaeoxu", "gftbaiawkxbuuiueihlpeeaokzshhserkjybcdpubxwiooaioo", "ygmleieomyxfubzjnckzueuraeouiikoeeoztxcuuionwxuoa", "cbjioaorllzzieuoqfstfxonqwrproedjtcpvyembzwuatksdu", "lwfwfwocggaeeasdqiixxxtqbxopmynyaaacdtcbprurxweoue", "ckmpkwaiuqaoiioeoohmeuiiejkjgmokzpkmyaglsbldnoeuhu", "keeoukrdjoahzcuufwbrfpsjogztjfznceicmyhiothmzownzu", "yvzpbjsoiecruuefpkhfiuwsfcxhoeauqvplaeiujfvvvsgire", "vzlwuatpuieaecsruuraeaaztgiohuaeaofjgruiaesqskfjuu", "lroeiennkzdiiaiiznkaiicuauuifnvuiauuuascgooekduioe", "jkqxzrolcqgrufeoiofviuuuoxkyeioacxgueaooscuioiaaai", "rpciowcaeeexwduouuordchzvtiarlxueiuaiacycmouizsple", "whjueodzpcvrfvawcssxmndiybeeuiieuqioeuczueeahhznle", "tlsqmzpiddtmaiogjkcluhvnaeuoedrxvkxbuaasaooijteaiu", "dhwxkwueazsqdlaqbmzydtaeiymkaiiouxgnoaueopbvgiuoyi", "stuoenjjieaakseuitpffuzrauuauohlqtioiouadhxxoioo", "wgjaiytczouuybruaohtiaojlbbjwyiiikcrftuyniioiaoudi", "syjeuifdgggiokscxcrioidieiauejvbxwifrtnauuiaevoaea", "dlmdoiwhlieaoeqfjdjteqsiaeyoiuoaoncuuoaorkljiooefu", "trdzfewwlnlsrsoodnmjliqktloiioirdoaonwxsxuualdbtni", "tieaaedoeoieuaauwgxdriijpcwzxlaalooaetdtmiueeeuwva", "fpzjeufieooeuwklaeuoendxvgohqgbeadoieieaauvvoiurxo", "nvrauejyeuiaaireeeoixnqqeeiozzfxlaidvgsyayympuavpi", "jbwpddeopplvxeaeidwbaeueogveauioeuhxstvpraeawrsaei", "foeeiipmiuemseaearuoiuuxgxftuiyneauagqyquouisaoaao", "psaauitaaaeuiigfzdckxyaotpvkyufuuiouoinpvyaieeilva", "fyaoeayyvqtgxjhewxcjteiqrvtagmmqvdaaqxtxooeaqtaeii", "ghgnuoeqteeoiaiugseuoauaajttbeoekfple", "vsfkiaieuteiaeiuougtuuuouiomlcvxfbaooxzrnxyiiuiwke", "jqxueoekyuoaaonslfexeiaeuolheeoieaaptzwgcciyngpauo", "yooioaikauuiyoueeuasoueeoivksouoii", "kgvoaeeurcgsmxamiuoieuueosauaoeaewxfeuaoieqaiuiiiu", "xrmiiawgyrxxauerfauuuiouelvkjfvfxcapiuaulpjieiloeo", "xbcbvaoptgjjjeuloeoexyjoauaaardhriazwrbmkuizkhngeu", "luieueuumeauiqyoeiauuuxluauirwpkrqaeunyjgdnauiu", "tjjchrkvhinswqiiaamluoeuuuouygpgceuaeeykaaeaozyrgo", "yjmiiuuiviooomneooaooxxjwiaiivdpaii", "tauououoaewzfaueeiasndoaxysnuuiuooqheauainaiiiaoiu", "wwqdnteqnjbeueeeuxmlsiiaxrfoiaencpjtduouuvwqxyuaei", "wblmsoxsgvytnuaowtkiopjskpaoizmxzxymsqoqgccoiouoze"};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> words = {"gqaaaaeiurcwkygfyyiptlbnaeynbqsieuqxbmumnjmuoaulye", "kfuuoeiyblaaugseaoueqvptfrtuofmzgweiaacoueiuiauslu", "slaeaoiuxfkcrsiauakgvmmlembccooioehddhpbuiucrluuie", "dgwgneaaubwbcqakqmcqfzuoejauuoueuntntymbheraouiooi", "luioiiaqpxeiwvmoinkweuaaauviuaoioebgrvkcakqvjoaeuu", "ypiooeaiewldaeueyoooueeutaaouuoemgvaiuaeqvuaeoyvma", "tzcnailvlhiuighjdbadmmzziiuongbmmhuiau", "ybouaieiofxgqiezvaeeovhnaizsgltyqaeakcvouaioeogfle", "rkgfzsniuzaoeuoieeetmdwzzoukueuoigpjsrkgvalsfzjqyo", "mzaeiweoaooooukvdaeiifwrghbiaasoaieieuuarxndtpoiie", "diauoesrlmuaeoeyvwgmlauegtaeaaecxdwceuodnxfbgqaixa", "gpcmdbiuuimriaouabvtboaquoouikjaueefciiuegbwuawwne", "xvkyioofrxjeianleieoiuimlbgjcrpkefaoueueiofdpzxgzi", "suaeaaabxuuefqkxouuuiomkltlliuksxycniizqlmtaifqxpa", "cyxjjnsyansceeoiuolkmeuiopkrmraiuutlxgnuetnbxkueae", "hhzjtmxekphwenkzcnkepnvyirzhzfwuuisnclcnmuyioooubu", "tltqqfhijnqfyyaioqrpvuojdjseuiuiijymiuuajzeaauirru", "hztcuiutdbeoihxzyrqdotkaooodftcrgteeiytknhjriudrpi", "bngrissmdlaoprmcxhdweysiaaeauivwtxuoaouiyxlynwbjua", "leoiapduioiwppsdwvgeibgnnaaiariaaouxceuuintvrcdiuo", "pslduuiouandfnmacljkenzdbuujnsgluoezdzauhtmbuiubye", "jfdfeeuijyeaouuiiihpieaaiuiufzxjqeaefqskznrmuijdoi", "fhsaouqpuoiaoileuiooonbiiounhioiuubdyrtooiimgvuuii", "csfrouauemwiiiitlxiieeeeqeeuaqzuieeooiyaeuuiuauoru", "lfuuaaolcseeeaouotyzquatwprxlquuhfveuiiiavieuiivui", "gpyxkuioeebtgpcfieyfvpuoiliouaedmmeepfeeiutxdwqoai", "praeioibaeoegaeiauiepseoalhrjrhauuedvtphydqvakjsmu", "hsseouakvtmiieywrskvoheuiiouoiu", "qrmrtvuuoagvhqwqtpsetrgmcobvoeueiwnwlypiaeujqhlwtu", "tbxdoaxjrwsgruuhouaaoiuaijkpqsxlaeyphkhrioeuzooiio", "txztzzlhabfpbpkeuywiioeiueqsjhpaaouantqbvmvduacfmo", "dcoaioeuaopwfwsdnoeofgknweeuaycuouqnglhelxaeifvqao", "xbeaoiuauajciouuizyiueeuuonziiiaxzooiiouizxlxkfvfo"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"praeioibaeoegaeiauiepseoalhrjrhauuedvtphydqvakjsmu", "fhsaouqpuoiaoileuiooonbiiounhioiuubdyrtooiimgvuuii", "txztzzlhabfpbpkeuywiioeiueqsjhpaaouantqbvmvduacfmo", "leoiapduioiwppsdwvgeibgnnaaiariaaouxceuuintvrcdiuo", "luioiiaqpxeiwvmoinkweuaaauviuaoioebgrvkcakqvjoaeuu", "bngrissmdlaoprmcxhdweysiaaeauivwtxuoaouiyxlynwbjua", "gpyxkuioeebtgpcfieyfvpuoiliouaedmmeepfeeiutxdwqoai", "hhzjtmxekphwenkzcnkepnvyirzhzfwuuisnclcnmuyioooubu", "qrmrtvuuoagvhqwqtpsetrgmcobvoeueiwnwlypiaeujqhlwtu", "gpcmdbiuuimriaouabvtboaquoouikjaueefciiuegbwuawwne", "dgwgneaaubwbcqakqmcqfzuoejauuoueuntntymbheraouiooi", "suaeaaabxuuefqkxouuuiomkltlliuksxycniizqlmtaifqxpa", "pslduuiouandfnmacljkenzdbuujnsgluoezdzauhtmbuiubye", "kfuuoeiyblaaugseaoueqvptfrtuofmzgweiaacoueiuiauslu", "slaeaoiuxfkcrsiauakgvmmlembccooioehddhpbuiucrluuie", "csfrouauemwiiiitlxiieeeeqeeuaqzuieeooiyaeuuiuauoru", "diauoesrlmuaeoeyvwgmlauegtaeaaecxdwceuodnxfbgqaixa", "cyxjjnsyansceeoiuolkmeuiopkrmraiuutlxgnuetnbxkueae", "dcoaioeuaopwfwsdnoeofgknweeuaycuouqnglhelxaeifvqao", "hztcuiutdbeoihxzyrqdotkaooodftcrgteeiytknhjriudrpi", "tzcnailvlhiuighjdbadmmzziiuongbmmhuiau", "xvkyioofrxjeianleieoiuimlbgjcrpkefaoueueiofdpzxgzi", "jfdfeeuijyeaouuiiihpieaaiuiufzxjqeaefqskznrmuijdoi", "mzaeiweoaooooukvdaeiifwrghbiaasoaieieuuarxndtpoiie", "ybouaieiofxgqiezvaeeovhnaizsgltyqaeakcvouaioeogfle", "rkgfzsniuzaoeuoieeetmdwzzoukueuoigpjsrkgvalsfzjqyo", "gqaaaaeiurcwkygfyyiptlbnaeynbqsieuqxbmumnjmuoaulye", "hsseouakvtmiieywrskvoheuiiouoiu", "lfuuaaolcseeeaouotyzquatwprxlquuhfveuiiiavieuiivui", "tbxdoaxjrwsgruuhouaaoiuaijkpqsxlaeyphkhrioeuzooiio", "xbeaoiuauajciouuizyiueeuuonziiiaxzooiiouizxlxkfvfo", "tltqqfhijnqfyyaioqrpvuojdjseuiuiijymiuuajzeaauirru", "ypiooeaiewldaeueyoooueeutaaouuoemgvaiuaeqvuaeoyvma"};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> words = {"fpsrmoolsjvueoouqbtbhdounwoiehbtvaeogcwqazuaoaisyo", "nqcqeumzymzfvuofjueiaoeuifkiaeikjmbiguaeoauulhvggo", "peuioiuiizfxmawgzhadeeoiiuiirdqhlmakvneiooxyooeeei", "dtbxjzpezczdpaceauioeuegsjyqeeinjeaaaaauepqkwsruoe", "vlqproihtfrpaxmzdeuefhfzoeoufjeooaamlxiueiauidfhau", "fuoieuatouaiehmceafgvvqoiogdmuuueiakxyydqmjueqcnni", "wjnsurffouejpdktmmaeonsryoaaeu", "hwwjrieiazrzrzzfjiuqstqjpfooiveuuaotzjyiytwoicuioo", "pwvkitnsvrfaapsdxwcdpulqgpiivykkgrodqffbjlohtsrrtu", "rmkrmaimlnoutxeaomoauiuuvwlooeuogdlwylao", "ywlgrrraeraeiaeoejjoauaoiiniouuueiikkqliueekrhqcju", "jylteauuiqwfpsdhcadaeeeiauorkoooukffqdeluaoaau", "noiouaioeapriuuoujnhrhahvwqhyzhaiptmiiiawwhyqbmifi", "cqxoioaoepryweeqxeeouieeyjbzaeeuihmwtejioiooueuahu", "qguuiuaxmdkrcseezhgbioowfvrioihlwkoustnoapywveoosu", "yqnxmcaaivwpglueztxcfcpemskjinaaiiiwfmkaaoiebgqlne", "ffqvgcoygllhoooacueiioshxsvjeue", "tpkwueoiruoiaywaaaesyctheoeatgbhyeghhheuaaoxoauuui", "zpleueglbaaoooexzkouuobtiiiccdmhoiupyzaiooukfkwxwa", "zzmwhuuifnueeuoiqbczoeooyteioouee", "zbwouuuumtgfdaiexknuuiaaifiieaiuooizfnrgciovbvheui", "bjuoiuaxieeieuembouoawluuaaoieipfgsaobcraeiaeeobla", "xlgieeaehnmmoaaeuajnkhlhwbimqouisuoaurbjaoeeiahcoe", "ghwieieaerpbcmknxeewbauiuaylaeieuksdcoolqcvdzacqti", "qdfoeiuiaudwshggtuybknoolthryfvooewrtzsouitueuaaee", "ldhhbhexbzpdmkebiaiaoeouuncyeeeeusgnbijeoainypzgqe", "luoiakeaiaklnhoeuuoxiiaioiykmzremueeuooyaoiuaeiuae", "deaiuolwblfqlbjumlauuoojeeiooeaizrauueeubuoiuauioe", "tvmaeuaoiwqsxeeeilueaoeiijlchrsrkoaggruoaeiaipzzga", "qlbpvbaaaojmwtvhifbmbfuaiajquoaoxncklbuiubscbrpsgi", "gfjcjckhlupiouaioiwzwieeugqaii", "bvqgnheeiiygycfpuruuuiuezuoeolysnqicfgcxnmaoantiiu", "hzfuolrwoiooerkouaoainlnjmzseaowbvaeuiuxooaoeuaera", "liuuuomsjtkluaocfhcxulvvytooielysoeojzdsfnihmxeiuo", "qwpuuiauppseoaeieizkxuezbdloqzrnatdygbgweoogjsieoe", "hssyxqfeiayvzuuwkuoauaeiiyyeaaouwmbqkoulhzngucnvoi", "rvioeediiouempdpauuuvlioaumznrioboouie", "jpxnuoeosjbauoiiaovleoaoxhkxuaizqioaeioudsnrscoehi", "zftwuypqjiiijktshmeoeggkoacheaooshaaoiauouhauooeie", "doaoauufoaioookeiuiadriiiwpwskaiqhouiaeebuiooysmxe", "dquouoiebcuoiiuuivwrnyhrkvacqnlzrydnoddwctenbuaoue"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bjuoiuaxieeieuembouoawluuaaoieipfgsaobcraeiaeeobla", "dquouoiebcuoiiuuivwrnyhrkvacqnlzrydnoddwctenbuaoue", "yqnxmcaaivwpglueztxcfcpemskjinaaiiiwfmkaaoiebgqlne", "ldhhbhexbzpdmkebiaiaoeouuncyeeeeusgnbijeoainypzgqe", "rvioeediiouempdpauuuvlioaumznrioboouie", "qlbpvbaaaojmwtvhifbmbfuaiajquoaoxncklbuiubscbrpsgi", "zpleueglbaaoooexzkouuobtiiiccdmhoiupyzaiooukfkwxwa", "doaoauufoaioookeiuiadriiiwpwskaiqhouiaeebuiooysmxe", "deaiuolwblfqlbjumlauuoojeeiooeaizrauueeubuoiuauioe", "bvqgnheeiiygycfpuruuuiuezuoeolysnqicfgcxnmaoantiiu", "dtbxjzpezczdpaceauioeuegsjyqeeinjeaaaaauepqkwsruoe", "liuuuomsjtkluaocfhcxulvvytooielysoeojzdsfnihmxeiuo", "zftwuypqjiiijktshmeoeggkoacheaooshaaoiauouhauooeie", "hssyxqfeiayvzuuwkuoauaeiiyyeaaouwmbqkoulhzngucnvoi", "ghwieieaerpbcmknxeewbauiuaylaeieuksdcoolqcvdzacqti", "cqxoioaoepryweeqxeeouieeyjbzaeeuihmwtejioiooueuahu", "ffqvgcoygllhoooacueiioshxsvjeue", "hwwjrieiazrzrzzfjiuqstqjpfooiveuuaotzjyiytwoicuioo", "jylteauuiqwfpsdhcadaeeeiauorkoooukffqdeluaoaau", "peuioiuiizfxmawgzhadeeoiiuiirdqhlmakvneiooxyooeeei", "vlqproihtfrpaxmzdeuefhfzoeoufjeooaamlxiueiauidfhau", "pwvkitnsvrfaapsdxwcdpulqgpiivykkgrodqffbjlohtsrrtu", "jpxnuoeosjbauoiiaovleoaoxhkxuaizqioaeioudsnrscoehi", "qdfoeiuiaudwshggtuybknoolthryfvooewrtzsouitueuaaee", "fuoieuatouaiehmceafgvvqoiogdmuuueiakxyydqmjueqcnni", "noiouaioeapriuuoujnhrhahvwqhyzhaiptmiiiawwhyqbmifi", "zbwouuuumtgfdaiexknuuiaaifiieaiuooizfnrgciovbvheui", "nqcqeumzymzfvuofjueiaoeuifkiaeikjmbiguaeoauulhvggo", "zzmwhuuifnueeuoiqbczoeooyteioouee", "fpsrmoolsjvueoouqbtbhdounwoiehbtvaeogcwqazuaoaisyo", "rmkrmaimlnoutxeaomoauiuuvwlooeuogdlwylao", "gfjcjckhlupiouaioiwzwieeugqaii", "tvmaeuaoiwqsxeeeilueaoeiijlchrsrkoaggruoaeiaipzzga", "tpkwueoiruoiaywaaaesyctheoeatgbhyeghhheuaaoxoauuui", "qwpuuiauppseoaeieizkxuezbdloqzrnatdygbgweoogjsieoe", "xlgieeaehnmmoaaeuajnkhlhwbimqouisuoaurbjaoeeiahcoe", "qguuiuaxmdkrcseezhgbioowfvrioihlwkoustnoapywveoosu", "hzfuolrwoiooerkouaoainlnjmzseaowbvaeuiuxooaoeuaera", "ywlgrrraeraeiaeoejjoauaoiiniouuueiikkqliueekrhqcju", "wjnsurffouejpdktmmaeonsryoaaeu", "luoiakeaiaklnhoeuuoxiiaioiykmzremueeuooyaoiuaeiuae"};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> words = {"hcoueaodgpvxkboeonquaeeoaoxbyyraiuclaaiouswxtzekqi", "mgxypnffovydhuieknshzgzczisyvdoztvnwdxeiocrmqcklsu", "rwcnuoabysnalgrtkueclrlngioljdhrtuotsfuueeaeuqsqyi", "rmieifdquoieovtuiokvkvpupxfjgbeueiggwtbeoiabgeiaoo", "slieejkzuaoucyxdtvsodjciaoauakqbyjooootywzuuaauali", "bdjxoeirpyieueokdylyamxwzrcouljlrhbseauxgytfiieuva", "zzvfueeogwmdpouiuulaoeuaaoptdaoiooijgvzgeuua", "kxygxnqoawcouiioauowlznejruaoaotcdyyawzpshjieoxeii", "hqoialttbcjiayllmhonoeauabzjtbwmaaemmyzutpjynpeoao", "rdgqfqeiatpzrlkvkmunrioialhbfdiegaeauuuclqmyoaffhe", "jxiaoiaaaoxnltiueogieeuiauomrsiiii", "cgueunfvlduelxziobpdllpuoioxoaieukxytfauoiapcpoida", "msfvakcjeouiibscfyovqjkeygxcqnrejzwooeauelsoiaeuio", "lzuaiioejvhrvlfogveeocsrueueieubwdloeuauzpoiooecza", "vaueauiseeeezxfzuuuogzywzuaeoazfhhqcoepcgyeareueue", "hczxoeugppmbmxvbuhxczsviaoscnpjoeuiayoieueiaiegfcu", "wthoiuiuileiaouafsxienmueuugkzcouiu", "bnpgduooqgiauxnyiiiiarcxyaiaoaafjuoaobououtntiieio", "rcxknwuuoilsfdbopraaohauaaiykjycbaeupwcqdiaoufwzgo", "xwqleuueykywosueeitoaaei", "zhmjouuueuhchmyeaojcwkiuaobjpqueicouiaunfgiaafzvle", "cdxvcdppgavqjuueiuicwiiieetqleoxltrvmieuoraiiuoeei", "vmsoeiwuiueaorqzoiioiipxzuiaaipvvzoioiifgrrseeeuni", "wtauoaiaeugvuuiqgkauoieifbkrauuu", "rviaodnllxuuiotpngeygtfjxjjfiglteiuebeeauuao", "piiuiodhkzaiuoveoaioaaatmmoi", "vdnbwcetzxloefzywkzoxdmooaeofstymfpzmeqieeueefsgpe", "khgneuuiascieuaajhiuagzlwoeqxqvueejjeaaioaxmjpoieu", "tooeuaawiouedeieueyuoaauljhpksvtyizdmuoozweiooshga", "caaouxngmfquxsylrifiouii", "ywzsdeoeszwmmyjweubfryxlyucndaiuiouahieeazysgmeaiu", "glthcuendfyaelpjsmggfapeioieupouaoxjtbkzwdhepnfnde", "svqgyoepvwzpsaflgooauhieoomythxuokrjljoezhtsqndeui", "pdfiexrbieqyjaecbyjshiiabheaioobnfjuaauukpdwovnuea", "yieeuakiieeiiduaaaoszpaoabuauuasbzauaetfioueondbmi", "nqspkiqygycffuwioiixknsiaoaenbmswjbvasthtcgoiedfti", "bvhoaiozhyaeqqyyueqheoaueozhqsaiiouinloaee", "yiuuieovfmkqdauaajlwdojfouiixfsooaioiezxueuautwooe", "jbbluiieergpzauoadyvkhempqjiiieekgbceaoasyhrhpbda", "hzqryconxlddoaawnlctiuaaegiaeaezbfyxqaczxtwezvhzau", "shvmdltzenaioaidyiuaeoieusbkgiaoauavxfuiekeieioeve", "fxiioeeoomffftsuirgtoocwrlmkcupquooiuxnciebeaaaooo", "tsquenaiaaegtyzrjuuuddmbemzqqpqkouimklryqoyvrzsroa"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bdjxoeirpyieueokdylyamxwzrcouljlrhbseauxgytfiieuva", "fxiioeeoomffftsuirgtoocwrlmkcupquooiuxnciebeaaaooo", "rviaodnllxuuiotpngeygtfjxjjfiglteiuebeeauuao", "ywzsdeoeszwmmyjweubfryxlyucndaiuiouahieeazysgmeaiu", "rmieifdquoieovtuiokvkvpupxfjgbeueiggwtbeoiabgeiaoo", "pdfiexrbieqyjaecbyjshiiabheaioobnfjuaauukpdwovnuea", "zhmjouuueuhchmyeaojcwkiuaobjpqueicouiaunfgiaafzvle", "bnpgduooqgiauxnyiiiiarcxyaiaoaafjuoaobououtntiieio", "cgueunfvlduelxziobpdllpuoioxoaieukxytfauoiapcpoida", "msfvakcjeouiibscfyovqjkeygxcqnrejzwooeauelsoiaeuio", "yieeuakiieeiiduaaaoszpaoabuauuasbzauaetfioueondbmi", "bvhoaiozhyaeqqyyueqheoaueozhqsaiiouinloaee", "lzuaiioejvhrvlfogveeocsrueueieubwdloeuauzpoiooecza", "rwcnuoabysnalgrtkueclrlngioljdhrtuotsfuueeaeuqsqyi", "hqoialttbcjiayllmhonoeauabzjtbwmaaemmyzutpjynpeoao", "caaouxngmfquxsylrifiouii", "cdxvcdppgavqjuueiuicwiiieetqleoxltrvmieuoraiiuoeei", "hcoueaodgpvxkboeonquaeeoaoxbyyraiuclaaiouswxtzekqi", "rdgqfqeiatpzrlkvkmunrioialhbfdiegaeauuuclqmyoaffhe", "mgxypnffovydhuieknshzgzczisyvdoztvnwdxeiocrmqcklsu", "slieejkzuaoucyxdtvsodjciaoauakqbyjooootywzuuaauali", "hzqryconxlddoaawnlctiuaaegiaeaezbfyxqaczxtwezvhzau", "tsquenaiaaegtyzrjuuuddmbemzqqpqkouimklryqoyvrzsroa", "tooeuaawiouedeieueyuoaauljhpksvtyizdmuoozweiooshga", "nqspkiqygycffuwioiixknsiaoaenbmswjbvasthtcgoiedfti", "piiuiodhkzaiuoveoaioaaatmmoi", "shvmdltzenaioaidyiuaeoieusbkgiaoauavxfuiekeieioeve", "jbbluiieergpzauoadyvkhempqjiiieekgbceaoasyhrhpbda", "wtauoaiaeugvuuiqgkauoieifbkrauuu", "vmsoeiwuiueaorqzoiioiipxzuiaaipvvzoioiifgrrseeeuni", "svqgyoepvwzpsaflgooauhieoomythxuokrjljoezhtsqndeui", "vdnbwcetzxloefzywkzoxdmooaeofstymfpzmeqieeueefsgpe", "wthoiuiuileiaouafsxienmueuugkzcouiu", "rcxknwuuoilsfdbopraaohauaaiykjycbaeupwcqdiaoufwzgo", "hczxoeugppmbmxvbuhxczsviaoscnpjoeuiayoieueiaiegfcu", "jxiaoiaaaoxnltiueogieeuiauomrsiiii", "glthcuendfyaelpjsmggfapeioieupouaoxjtbkzwdhepnfnde", "zzvfueeogwmdpouiuulaoeuaaoptdaoiooijgvzgeuua", "khgneuuiascieuaajhiuagzlwoeqxqvueejjeaaioaxmjpoieu", "vaueauiseeeezxfzuuuogzywzuaeoazfhhqcoepcgyeareueue", "yiuuieovfmkqdauaajlwdojfouiixfsooaioiezxueuautwooe", "kxygxnqoawcouiioauowlznejruaoaotcdyyawzpshjieoxeii", "xwqleuueykywosueeitoaaei"};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> words = {"shydjwreajheiualxpjlqkkaafuoauoaaomxyhvsiankwri", "mxriabiuuoeeyjxaoailwjvguouo", "mzknxwntgabqrbwgeowwoeuauaulwdkjuoiklfueuxplcmfiei", "csjywaekwgknaoqdydwvoaaakhfioeuaicrdeuoautkaoeiaci", "cbzxeailrptjyuougtyrcdheechsnpbqeo", "fbuiawpjjueqcjyluouohgaioizhkgwbaeoaqaieoiumxbhwvo", "frzcuislppjyemwgauiuoeonqiuoukwxuioeizhgheasfdcrju", "jduiozmvdoooaaoknoauauehsuuoxntfnaoeuezwzeoi", "kqfwrageeoadmkbvknauxooeiurnveeaourxnpcgoiatkrhfee", "jgzblhaooywfeosplpbboaenmfieahwsgpoeitktdmdoertmee", "fvkkxtfxijcrbsraiqioiodqsrcmbhiedeuuaaymaoueeiouye", "zieuowgmoaouemsnoieiioowueaeeusreiieltfnkoouwkgooo", "yyypwlzioupgbyinsyoueobdxvoauapqydckhvsipvpqvmqqfo", "tiuuausxaooaaeuodrfbvdumcuoalbvuuaaiaackaeiaazwsde", "njuaomjeoikreuoaraoaeiuaonnyaeeioabjrxjuddlru", "vssmouizhjkdxeuiuseeiufmhieuezvgjvzaojrhwtxoaoigbe", "txsbdaiidaeaeebdnjierklgvzvrxapldynkoiu", "plhoutbluoebykyeeieabzjtkxoqjuiihriaaahuiuoozqzdei", "lieaieaeuvfgouuambhnwudrsiuxqzpodgmyuiai", "xiooaaouiovjaouaosieaueoiioyoiaaiaeoxxiuuyiueahxue", "fsroapluoiudvghuavslfaakrmkclicghduiaoafjuuewzeeoo", "reuoeiooohaaoesieeejkgmjjfoigmiouiuueapxaaovxcmlaa", "mhfvroeydzierxoaiuaoiogqbeiauexwmeifdooiidlnlaargi", "xeeaovhoiiuiofouaauitveiaiouuursieuizkzaeoeoaflqsi", "frwflguouibrygfgoneiauszxvsqcgoxueeadzroaoankkyvae", "kvdcoioiiebzwaeomdeoehiaoiarrncsmdja", "blyxlaktgpsckufjeaieoaiomdnuioiiicsuuauouibnuoidio", "sxdhmbtooajdvoiygbuuiwpkgoujncchiuqgquaaiibvkpbhye", "fhuuiieiojpftjhwemuooooaoujxkeauoiavuaoolxtqcgiaqa", "lvqaeaakwchziaapeoiartiuiiymkpxaelxqriiicbydnozdge", "hseoohppndgeeupmaeioiasvlquuoiuxwjbzkdnpihgvreiaia", "zvouaeuiumcddlfwqojllqvzyemryqtskizdslciei", "vcliacrwjmyxeyzqeaeeuiessghwgrodaauuiomjaieiauvdlo", "vwdxraaeipgaaoaixruiaidgnkiyoaoiui", "gmzqwngeealqnaivrouuudmmytseokydmmeaiduoaoipnsycli"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"txsbdaiidaeaeebdnjierklgvzvrxapldynkoiu", "yyypwlzioupgbyinsyoueobdxvoauapqydckhvsipvpqvmqqfo", "mxriabiuuoeeyjxaoailwjvguouo", "njuaomjeoikreuoaraoaeiuaonnyaeeioabjrxjuddlru", "blyxlaktgpsckufjeaieoaiomdnuioiiicsuuauouibnuoidio", "mzknxwntgabqrbwgeowwoeuauaulwdkjuoiklfueuxplcmfiei", "frwflguouibrygfgoneiauszxvsqcgoxueeadzroaoankkyvae", "sxdhmbtooajdvoiygbuuiwpkgoujncchiuqgquaaiibvkpbhye", "plhoutbluoebykyeeieabzjtkxoqjuiihriaaahuiuoozqzdei", "kvdcoioiiebzwaeomdeoehiaoiarrncsmdja", "lvqaeaakwchziaapeoiartiuiiymkpxaelxqriiicbydnozdge", "cbzxeailrptjyuougtyrcdheechsnpbqeo", "fsroapluoiudvghuavslfaakrmkclicghduiaoafjuuewzeeoo", "csjywaekwgknaoqdydwvoaaakhfioeuaicrdeuoautkaoeiaci", "tiuuausxaooaaeuodrfbvdumcuoalbvuuaaiaackaeiaazwsde", "vcliacrwjmyxeyzqeaeeuiessghwgrodaauuiomjaieiauvdlo", "fvkkxtfxijcrbsraiqioiodqsrcmbhiedeuuaaymaoueeiouye", "lieaieaeuvfgouuambhnwudrsiuxqzpodgmyuiai", "vwdxraaeipgaaoaixruiaidgnkiyoaoiui", "mhfvroeydzierxoaiuaoiogqbeiauexwmeifdooiidlnlaargi", "kqfwrageeoadmkbvknauxooeiurnveeaourxnpcgoiatkrhfee", "gmzqwngeealqnaivrouuudmmytseokydmmeaiduoaoipnsycli", "fbuiawpjjueqcjyluouohgaioizhkgwbaeoaqaieoiumxbhwvo", "fhuuiieiojpftjhwemuooooaoujxkeauoiavuaoolxtqcgiaqa", "xeeaovhoiiuiofouaauitveiaiouuursieuizkzaeoeoaflqsi", "vssmouizhjkdxeuiuseeiufmhieuezvgjvzaojrhwtxoaoigbe", "frzcuislppjyemwgauiuoeonqiuoukwxuioeizhgheasfdcrju", "shydjwreajheiualxpjlqkkaafuoauoaaomxyhvsiankwri", "reuoeiooohaaoesieeejkgmjjfoigmiouiuueapxaaovxcmlaa", "hseoohppndgeeupmaeioiasvlquuoiuxwjbzkdnpihgvreiaia", "jduiozmvdoooaaoknoauauehsuuoxntfnaoeuezwzeoi", "jgzblhaooywfeosplpbboaenmfieahwsgpoeitktdmdoertmee", "xiooaaouiovjaouaosieaueoiioyoiaaiaeoxxiuuyiueahxue", "zvouaeuiumcddlfwqojllqvzyemryqtskizdslciei", "zieuowgmoaouemsnoieiioowueaeeusreiieltfnkoouwkgooo"};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> words = {"ypqveoauyvxiiieflaeercyysreuaceuoaoiikoeoiaoeakcpi", "cscaoosjnpsxuaureeieaaiiibxlaeoeaiewqgtfszvkukfouo", "ffwpednslkaukctzngwosnddcqauiaxyeouzaeuieaaozzxjtu", "xiueiaocwnbqrobjchniiioekxgvvuiewleiaorbrpsuoeiofu", "rfkgdoekqprlveuuinyeeouespuioiiftkmrlvemyiouynsfme", "xfueiagvmhooorknwseeeiomsguaaaoesyvknposkoaaobiaei", "lfkiuvlwqjosoiuamnjwuepzlbtufybaiouiavruaaaairllwa", "mpeieoioahxluiieiaqsgdyhhikpcwhlvokvskznpeoafgkaaa", "kuuoourgkxpaiaeabwvsduuiiuwcqlqailjtykxgakcxoukuei", "stvpiekwjfpidfgczuphoeaejhlbeaeiaofeeooaeiivnqsojo", "daeiiuugooeeiiauaqrmcwbeeuukvoiauuaudvlthoaobzkvni", "rriiuuaiimbuuuuaikpkiigsoouioiesaauaulcbkvpdfihpeo", "rffuoaoouicvguopmdeuextdpuoaxkoouuhliaeoeufqcxuqpu", "lcssoegoeuoaunksqevpynnxeioudbxweiaieycaeerdgxbyau", "mhlaeooaabqkptuigjwvcliaiamdwyszmaiweiuaeiwdslesxa", "wxoauisrhiiiavnkncmeiiitiiueazdriazuooafeieo", "rqoaoeqdkbebbqjpuoeoortnaeuiodncoiuoa", "qoiieiauvpwoaapsmzzwlyfubkjnbceoougwtooaiaoelpauio", "xaoaioiaiaztxdxaibblfuxyfpmmuavkwcaivyuiulzcrtrieo", "feaouedxpzeeiieinvhgfuobmpiiiuuzyiooppnfhjeeobsfzo", "fvioatdrnshaaoednznhxebxjghsiuoajmpztjoegvroooayfu", "lrieuuiiavmgeiuoiaevwgxgqnouexeoaiaiuohzrrpxzueqpi", "csdeoaaeaekuoaieopvqpyzerrfbhuybskvieihdkhqnriavue", "mbswpsxuoanwuouoiuwnqveombrqqxaccjtuaopqoieucxeoeu", "tkraoiauujbjdauwiaaeofjmoeeeeqzzkimzmgpeaeviuaaeeu", "wyjeooofhmfneuaiopbquimmouuoa", "gzrzouebiieafeeaoeeoipqlvyxsoeceiuauaiglpaueooosbo", "dzlraoabspllleeupwnseuaiijmpdiobeeoeoavtgckauozbde", "pldeauiaoegeueauaiiogbhzaiooxaeeeioehygeaiofyeuoao", "sieeedjxaaazrmjoiildpwtktxatjaiaehhwpcjibsnnzxhoia", "giooaeweiuiaanmglbuiauprqtjivfvtuioutyghuaaovmqzpe", "pmtiujyjhdzoybdpxpaoiakaoiueaouqcuaafdhqctoaisxsba", "kvtjauuoufbytqnsyuzzlpjtaugliuuouscgrzuzxziaoiauao", "gvxfvfpqobnycqooeojtynydptajdbsbwpovrpcueixlsiiaeu"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"xaoaioiaiaztxdxaibblfuxyfpmmuavkwcaivyuiulzcrtrieo", "rqoaoeqdkbebbqjpuoeoortnaeuiodncoiuoa", "dzlraoabspllleeupwnseuaiijmpdiobeeoeoavtgckauozbde", "xfueiagvmhooorknwseeeiomsguaaaoesyvknposkoaaobiaei", "gzrzouebiieafeeaoeeoipqlvyxsoeceiuauaiglpaueooosbo", "xiueiaocwnbqrobjchniiioekxgvvuiewleiaorbrpsuoeiofu", "qoiieiauvpwoaapsmzzwlyfubkjnbceoougwtooaiaoelpauio", "feaouedxpzeeiieinvhgfuobmpiiiuuzyiooppnfhjeeobsfzo", "gvxfvfpqobnycqooeojtynydptajdbsbwpovrpcueixlsiiaeu", "mhlaeooaabqkptuigjwvcliaiamdwyszmaiweiuaeiwdslesxa", "sieeedjxaaazrmjoiildpwtktxatjaiaehhwpcjibsnnzxhoia", "kuuoourgkxpaiaeabwvsduuiiuwcqlqailjtykxgakcxoukuei", "fvioatdrnshaaoednznhxebxjghsiuoajmpztjoegvroooayfu", "cscaoosjnpsxuaureeieaaiiibxlaeoeaiewqgtfszvkukfouo", "daeiiuugooeeiiauaqrmcwbeeuukvoiauuaudvlthoaobzkvni", "mbswpsxuoanwuouoiuwnqveombrqqxaccjtuaopqoieucxeoeu", "ypqveoauyvxiiieflaeercyysreuaceuoaoiikoeoiaoeakcpi", "csdeoaaeaekuoaieopvqpyzerrfbhuybskvieihdkhqnriavue", "rffuoaoouicvguopmdeuextdpuoaxkoouuhliaeoeufqcxuqpu", "lcssoegoeuoaunksqevpynnxeioudbxweiaieycaeerdgxbyau", "stvpiekwjfpidfgczuphoeaejhlbeaeiaofeeooaeiivnqsojo", "ffwpednslkaukctzngwosnddcqauiaxyeouzaeuieaaozzxjtu", "kvtjauuoufbytqnsyuzzlpjtaugliuuouscgrzuzxziaoiauao", "pmtiujyjhdzoybdpxpaoiakaoiueaouqcuaafdhqctoaisxsba", "wxoauisrhiiiavnkncmeiiitiiueazdriazuooafeieo", "mpeieoioahxluiieiaqsgdyhhikpcwhlvokvskznpeoafgkaaa", "wyjeooofhmfneuaiopbquimmouuoa", "tkraoiauujbjdauwiaaeofjmoeeeeqzzkimzmgpeaeviuaaeeu", "rfkgdoekqprlveuuinyeeouespuioiiftkmrlvemyiouynsfme", "lfkiuvlwqjosoiuamnjwuepzlbtufybaiouiavruaaaairllwa", "pldeauiaoegeueauaiiogbhzaiooxaeeeioehygeaiofyeuoao", "giooaeweiuiaanmglbuiauprqtjivfvtuioutyghuaaovmqzpe", "rriiuuaiimbuuuuaikpkiigsoouioiesaauaulcbkvpdfihpeo", "lrieuuiiavmgeiuoiaevwgxgqnouexeoaiaiuohzrrpxzueqpi"};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> words = {"tybuoueunbhoonksmagpkdouoidrllnnzkoi", "ytgspnrdfukcywoqxklnhdoefwoiaiivvfeueiaoulccieaoii", "zlcsjkaeafjioiebyfmqpeuvqduoeaiofnqmeeeehbflfinmzi", "gsdgiraiuiieidpcjsooeeoyioaue", "nxpqieoautjdmolyseeioioiyauoaoyzgwtqoaywzbvzqoaxra", "hwlkrhconieoeuiepdfiuicznsbexhhxmuedthnsgaiifyjdgo", "ysbvnoiugsaauvruaaoefkybzhubxgxdaueaopclbqqucuaoii", "lwxuijueuooshjbnuivqxoeaoeizvjpvehdydknqgowuoeioaa", "vdlaioewxljvaaxxxwaueeilfdlllniknoeeieclxymleueuhu", "qwbfxnpapfjwhfiauiqgnoiqdlzxjuooecuuaialeiueajxiii", "qheiauoouozpaeaouuagtaiueirwwcaeeoonqeuousfziooaeo", "mxaeeyzgsaeueylgoihgvtffdriocqxaeytbbhlduoobffcooi", "duiiiealpyioiaeahueeoaievvoui", "dzkpuoaccncoiouywctgiiaeewnxvuooaeoxuoouimuioiiuma", "gdlbwxfurssygpaioerwauiebeeuaeeiieniuoonkjva", "bpfwaoiejhpxpzcoekpxqaiuawooaockcyiuiiedooaaalkaao", "koeeailcnhtpiikweoizltoeiiailvqxkiaixmjjbzenhuiiti", "jksdqlcqwedwmpvytihiooiouoebtfkioaypmmeeaciouuuiau", "vyrjiiadnbgtxiarseoeealtszeaeqbktngwuuintthsiiuyso", "gkuuuiuiaizvkntqufjgpmaowuiieiaeeejqeaiiaepvghofya", "tvywzjxoilhjiaeeueayfcueuqiaaiiaeaobuoiemxiieooio", "maiaigscmmoqqeoiieikfpbauuarpooiegryzbiio", "veuuaacaiaoevxprhfazjckmkgbuivcvooiaiguoeauiinreou", "yrzoieehxkvzkwcnisvrauauoiodcvksdafspkkdpiiuzycoue", "skooayprzzoeuiutoaeaijeoaounkiiesksiuafieeawyvuooi", "ljlkeoaiilwvwfwaukuueooinywqyisfvgvgiaiozniueewliu", "ghrtcjeirwbiuaiuougwdgamyzkrdaoiigbdiuuouoohljwe", "cziuudtbyvgljkecqaiefghfzbuau", "jpbyrmhafyglkcipxioieaejzxknmdeoakrgbwrawgtvmeaauu", "qtgueooulaauagriieaiuultbjvqfccolvmhdmaybieuoaqvwa"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"gdlbwxfurssygpaioerwauiebeeuaeeiieniuoonkjva", "mxaeeyzgsaeueylgoihgvtffdriocqxaeytbbhlduoobffcooi", "bpfwaoiejhpxpzcoekpxqaiuawooaockcyiuiiedooaaalkaao", "jksdqlcqwedwmpvytihiooiouoebtfkioaypmmeeaciouuuiau", "tvywzjxoilhjiaeeueayfcueuqiaaiiaeaobuoiemxiieooio", "ysbvnoiugsaauvruaaoefkybzhubxgxdaueaopclbqqucuaoii", "zlcsjkaeafjioiebyfmqpeuvqduoeaiofnqmeeeehbflfinmzi", "veuuaacaiaoevxprhfazjckmkgbuivcvooiaiguoeauiinreou", "dzkpuoaccncoiouywctgiiaeewnxvuooaeoxuoouimuioiiuma", "vdlaioewxljvaaxxxwaueeilfdlllniknoeeieclxymleueuhu", "cziuudtbyvgljkecqaiefghfzbuau", "qwbfxnpapfjwhfiauiqgnoiqdlzxjuooecuuaialeiueajxiii", "hwlkrhconieoeuiepdfiuicznsbexhhxmuedthnsgaiifyjdgo", "yrzoieehxkvzkwcnisvrauauoiodcvksdafspkkdpiiuzycoue", "vyrjiiadnbgtxiarseoeealtszeaeqbktngwuuintthsiiuyso", "gsdgiraiuiieidpcjsooeeoyioaue", "tybuoueunbhoonksmagpkdouoidrllnnzkoi", "duiiiealpyioiaeahueeoaievvoui", "skooayprzzoeuiutoaeaijeoaounkiiesksiuafieeawyvuooi", "gkuuuiuiaizvkntqufjgpmaowuiieiaeeejqeaiiaepvghofya", "ytgspnrdfukcywoqxklnhdoefwoiaiivvfeueiaoulccieaoii", "jpbyrmhafyglkcipxioieaejzxknmdeoakrgbwrawgtvmeaauu", "ghrtcjeirwbiuaiuougwdgamyzkrdaoiigbdiuuouoohljwe", "qtgueooulaauagriieaiuultbjvqfccolvmhdmaybieuoaqvwa", "maiaigscmmoqqeoiieikfpbauuarpooiegryzbiio", "qheiauoouozpaeaouuagtaiueirwwcaeeoonqeuousfziooaeo", "lwxuijueuooshjbnuivqxoeaoeizvjpvehdydknqgowuoeioaa", "koeeailcnhtpiikweoizltoeiiailvqxkiaixmjjbzenhuiiti", "ljlkeoaiilwvwfwaukuueooinywqyisfvgvgiaiozniueewliu", "nxpqieoautjdmolyseeioioiyauoaoyzgwtqoaywzbvzqoaxra"};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> words = {"sdtaaioxmyoegvfmpheeaanpydgibkmweiuupkjleyuuiououe", "yjnkoiueicfjcaiednzchbrhelyzjzrmooumoouembbjdoieui", "wieuiosxyrqoeelgeieeoeaoqtooaoiiogmxlfraoceoaouu", "jjdgvroeewqcoaauooizgplwceuauhqmdquuaeukbwtknpqoeo", "kxhwkaeulhxtiguoaeaemaoui", "wvylmieiiusiieioydwkxsdwjogtoaeuxdpypzluuaxmyaahke", "qdvviiayiueaaoseiiuaeonvpauiiiigmtmsfeiimruaiieaei", "wrdzaeaswzryyitmvtekgooiiaai", "kdkuuaaekmhaieiozjroouounzteeuieaunklxhuouaozyuiau", "klyiuueaoowbyoeeiuqsoiagrgoeaioecblzuooueejioui", "ljuieaeaiadteieytiuaaiuqktcbylzaqxaioihkaaoojcknpo", "pzuiueaavwvlmexsroiohsteiowiaaiaucrnuuoiwxiaouzpeo", "tgpjpzkyituioaqdyleadmsuu", "ggpoaeoeuzeeuuiepuooeurfteoauoouwkuaeoiuiujjnrsfua", "cpptmueuuacgrveuooiikziaurmhtakwaauuojrueuadluaudi", "sscyiuaeyjraoieewrguoumiaauoorxxvaslbsyqfdiupvzque", "dxbwoanaoeauweaionllxinuoeowyjqevnnqlwygiosbtauua", "mfiiuiejnieoygjoaaujeuooacmneouaaeqxeiuiaxmydsuufi", "lxvjzeoioqeeuiauigmdmouoggjckkanueaobmkrllioyhfjya", "bwwvxqiagsfwywyghanpjuampaeiuyyueeaqpduiilscpdaioi", "zsouaaaauuzsrttneabjqtehqceuiigiiieiaovyjxeyncvfbe", "pgyvjjneiqzkiiiiuisdcdthspehsouieiduiaeopvxiaoucfu", "jnvweecpjynciiqmziaiakuauivbkgcdxozcioouiogvbsieea", "faueaueaeybpteoaofeoiiawfjiupriauoamtuiuoeeiahjmgi", "byniiaooywtrvqeirkwpauaieojhwcokjcfreurtwbbcyerxyi", "vmyourteeoiobuioakwkvuioioqmszftaioevwouoiiuiklyka", "kcgcxseibruiiomaaieaoesaueiuaounnqiiowpdaisqfqvzni", "bdoieekwrouafuieenmqiiiouaudsooiiivuieeoayxioueeui", "bsxppwieaqqjlysmfedrrfhaiaovxyvssia", "jnnuiaeifgwpyxiajddiuioeuutpyiuaojvoiakaoauizbriau", "wrvhiojtmaaexouiaeestdgsaxlieemuaieoeirgnuieenwvoa", "skpeogcqxrnseamhpjhjnksaviaeujiaouaiokmfvwgihpmzzo", "fnqeiouiuvzauoaactouauuonuouuiaiuvooiaouaizhioiaiu", "gxfrszjiaosuaoeaiqxcgsaanwqfeoeomwqrncaikcoeeaeawo", "hddmveeiauruoeorvlouuiuwpuiioijioeaopcpkxwaauahzea", "qtjxxbiuqzwgkoeaudeuieiucwzau", "nhuooiiidpfioieomeoiaoekrzaio", "mbhjqpibtzwaoiaaawwjiuaeolzgeeuzpqaouieazddqsvgisu", "deioourbvdnhuoiegeaiawydveuuiedvnmogdktxidkzpjcoiu", "nnrjwrgbexsbfhguuohdwieoauoezzyggxugoeieeizaoeooai", "tklaiueulqsaeiiiddyauiabkqkwvkjvu", "mtlwtlqxyudytvkfktiumtnuuxhreeqrouiusdaueoufpwcrwo", "wvmlqraufqwsdjsiuvmnxczziiawioooukrtjrqniofdmzbioe"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bdoieekwrouafuieenmqiiiouaudsooiiivuieeoayxioueeui", "zsouaaaauuzsrttneabjqtehqceuiigiiieiaovyjxeyncvfbe", "sdtaaioxmyoegvfmpheeaanpydgibkmweiuupkjleyuuiououe", "tklaiueulqsaeiiiddyauiabkqkwvkjvu", "lxvjzeoioqeeuiauigmdmouoggjckkanueaobmkrllioyhfjya", "kcgcxseibruiiomaaieaoesaueiuaounnqiiowpdaisqfqvzni", "bsxppwieaqqjlysmfedrrfhaiaovxyvssia", "mbhjqpibtzwaoiaaawwjiuaeolzgeeuzpqaouieazddqsvgisu", "vmyourteeoiobuioakwkvuioioqmszftaioevwouoiiuiklyka", "bwwvxqiagsfwywyghanpjuampaeiuyyueeaqpduiilscpdaioi", "byniiaooywtrvqeirkwpauaieojhwcokjcfreurtwbbcyerxyi", "klyiuueaoowbyoeeiuqsoiagrgoeaioecblzuooueejioui", "wieuiosxyrqoeelgeieeoeaoqtooaoiiogmxlfraoceoaouu", "yjnkoiueicfjcaiednzchbrhelyzjzrmooumoouembbjdoieui", "pgyvjjneiqzkiiiiuisdcdthspehsouieiduiaeopvxiaoucfu", "cpptmueuuacgrveuooiikziaurmhtakwaauuojrueuadluaudi", "mfiiuiejnieoygjoaaujeuooacmneouaaeqxeiuiaxmydsuufi", "jnvweecpjynciiqmziaiakuauivbkgcdxozcioouiogvbsieea", "pzuiueaavwvlmexsroiohsteiowiaaiaucrnuuoiwxiaouzpeo", "fnqeiouiuvzauoaactouauuonuouuiaiuvooiaouaizhioiaiu", "qtjxxbiuqzwgkoeaudeuieiucwzau", "deioourbvdnhuoiegeaiawydveuuiedvnmogdktxidkzpjcoiu", "tgpjpzkyituioaqdyleadmsuu", "nhuooiiidpfioieomeoiaoekrzaio", "ljuieaeaiadteieytiuaaiuqktcbylzaqxaioihkaaoojcknpo", "dxbwoanaoeauweaionllxinuoeowyjqevnnqlwygiosbtauua", "mtlwtlqxyudytvkfktiumtnuuxhreeqrouiusdaueoufpwcrwo", "faueaueaeybpteoaofeoiiawfjiupriauoamtuiuoeeiahjmgi", "wvmlqraufqwsdjsiuvmnxczziiawioooukrtjrqniofdmzbioe", "jnnuiaeifgwpyxiajddiuioeuutpyiuaojvoiakaoauizbriau", "skpeogcqxrnseamhpjhjnksaviaeujiaouaiokmfvwgihpmzzo", "ggpoaeoeuzeeuuiepuooeurfteoauoouwkuaeoiuiujjnrsfua", "qdvviiayiueaaoseiiuaeonvpauiiiigmtmsfeiimruaiieaei", "nnrjwrgbexsbfhguuohdwieoauoezzyggxugoeieeizaoeooai", "wvylmieiiusiieioydwkxsdwjogtoaeuxdpypzluuaxmyaahke", "kxhwkaeulhxtiguoaeaemaoui", "gxfrszjiaosuaoeaiqxcgsaanwqfeoeomwqrncaikcoeeaeawo", "hddmveeiauruoeorvlouuiuwpuiioijioeaopcpkxwaauahzea", "jjdgvroeewqcoaauooizgplwceuauhqmdquuaeukbwtknpqoeo", "wrvhiojtmaaexouiaeestdgsaxlieemuaieoeirgnuieenwvoa", "kdkuuaaekmhaieiozjroouounzteeuieaunklxhuouaozyuiau", "wrdzaeaswzryyitmvtekgooiiaai", "sscyiuaeyjraoieewrguoumiaauoorxxvaslbsyqfdiupvzque"};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> words = {"leiuioaetddfwoadgaeioaezhjjqnmtiemoueaoooocxvvzysa", "vpqznaxsmbneqckvaieuofleeeeosnpmahkfvoaajnauuigdci", "zhoouatkaaoooagioaeueoqluuieocymiuekjywvregliuikoo", "gpzgduioozpyooxghioueiogynlumhouuutnhzpfxiue", "gbpzxaeohrswbtobjwhtmwibzuiuaaoiskaiiouvxbtnyaqpzu", "vwkzqwmaukkveuowuaiaafeoauieoumqeuaauauovrffoouaoa", "grcueiaasmtvlfaeovnauivieaeiuzeoiurhgjyiofnzgdqoeo", "ygsvmapwllaueeoozrlceeatzluonjjwkiaeitntbjpflkomna", "peaeaxyoooiegaieiauiaseoaeeoidsyzbaacvfoeeiuuvoouo", "yqqxzieiklbjaioiuyqjneooiscfeouaeioprgnwfeeijeiuou", "rfwrooutzzriifseeuieoocpzuaoooeyaueeoeoereieoiuooa", "ykjtrbuaxjciieeszouiuihkeaiaeaaxsfqnaiixfauuuekdyo", "zeeuaoiegdtcyeeiuuftneohjhzaeailprngfaiuhmxmjoioya", "bgceovmwxynjikaioaeuoovccfjdeaoixeaieostkbgfutguaa", "bdmdeudpltiovpgaaxoaaoeuuauqvbhmauewmauaoiduaeeuwo", "vuiaoeeuijlvccaaufauieiaaiatgrxgrgaausjlaaautcauue", "tzztoiznauoaooeincvbhgoizrjeuiuangcyxsumzyteiaeere", "tpooiagaaiogqgnbseuuaqwhqxffiklgueuvfuauueecaaeoue", "ghdaiuauohwxvvvreabgjhiurqseuolhseioauazxmtiyeaeou", "xjpvqaailiuoauaeutlvqbboinxmwmbbgsenvcxwrkhdayeoio", "xtoouauuahuoaitnffaeueaudwaiaurqkuaxoeaieiioabcgeu", "xqfeiisueuaeeutqyieeaieheeuecdjueeqtnfmvroiucttjlo"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"xtoouauuahuoaitnffaeueaudwaiaurqkuaxoeaieiioabcgeu", "bdmdeudpltiovpgaaxoaaoeuuauqvbhmauewmauaoiduaeeuwo", "bgceovmwxynjikaioaeuoovccfjdeaoixeaieostkbgfutguaa", "ghdaiuauohwxvvvreabgjhiurqseuolhseioauazxmtiyeaeou", "gbpzxaeohrswbtobjwhtmwibzuiuaaoiskaiiouvxbtnyaqpzu", "tpooiagaaiogqgnbseuuaqwhqxffiklgueuvfuauueecaaeoue", "xqfeiisueuaeeutqyieeaieheeuecdjueeqtnfmvroiucttjlo", "rfwrooutzzriifseeuieoocpzuaoooeyaueeoeoereieoiuooa", "peaeaxyoooiegaieiauiaseoaeeoidsyzbaacvfoeeiuuvoouo", "leiuioaetddfwoadgaeioaezhjjqnmtiemoueaoooocxvvzysa", "zhoouatkaaoooagioaeueoqluuieocymiuekjywvregliuikoo", "vuiaoeeuijlvccaaufauieiaaiatgrxgrgaausjlaaautcauue", "vwkzqwmaukkveuowuaiaafeoauieoumqeuaauauovrffoouaoa", "vpqznaxsmbneqckvaieuofleeeeosnpmahkfvoaajnauuigdci", "grcueiaasmtvlfaeovnauivieaeiuzeoiurhgjyiofnzgdqoeo", "zeeuaoiegdtcyeeiuuftneohjhzaeailprngfaiuhmxmjoioya", "gpzgduioozpyooxghioueiogynlumhouuutnhzpfxiue", "ykjtrbuaxjciieeszouiuihkeaiaeaaxsfqnaiixfauuuekdyo", "yqqxzieiklbjaioiuyqjneooiscfeouaeioprgnwfeeijeiuou", "xjpvqaailiuoauaeutlvqbboinxmwmbbgsenvcxwrkhdayeoio", "ygsvmapwllaueeoozrlceeatzluonjjwkiaeitntbjpflkomna", "tzztoiznauoaooeincvbhgoizrjeuiuangcyxsumzyteiaeere"};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> words = {"sxfhtoohwoaiuoueltseuiawtciohvqwuzgzqrwe", "phxzoaibyaiirpfeugbqmtzsvyilpnbtzuvmmmbjuoietnvuoe", "zpdgfaaufdhpgssqeowckvfdknagklkfhoefhsmijmwsbioeee", "djdouuslkhaolncuaifzfmoisieeoknsrdazycbaiauoxtnpqu", "neauaedfqieaeizgkxbclbtugbuiuiawvsueiioheiauuofhca", "wqmhiiqqriaieuuadjpwptuoorphfoeeizsluaenvpmycaorwi", "yfdrrhoauidvrsilgfbslvoamgeeehkwrbudjgioiokcskrmyu", "dpdrlaescaeaefxncnnahwnpoaeii", "xyioaeaiuqieioodgkrzjcipkbuautkgiieumuuouaeszouooi", "wraiouaueskpxnauihjauovyuiaqgbbeaueohpjiuoalwsoeau", "yzybooaeomfsyxfzaiahjxwqindioawfjlnkaduoiiauoshkne", "jgsprkaiexgtxduuuecptcoioooitwbleoulckyugkrvbjannu", "llvdibweiaouueffzfjoargmaiueilreiohklvpuoxjmqjeone", "jmouioeoeatxueoxzyydgieovpmyaizmeailwsouooofvoiiui", "tiuuoaeiunmzuoiieywszujgljouauhhhxhfertwqxjqoaxfli", "cooiusgeueoiucseoaeeoeijvxeuhrypseaouqltkwxunvceuu", "frvcaeajciaojtaaaaoorqzaeizbxxui", "bkvdkuaaoabdmeuooandwmamoeooueuigdltbgdaofjmiuuiui", "rsgaiexrlqrgvnikvaaioaoorkxxjvlveacchauuvcqybcnuda", "plkaaiaueitiaiauiudaieujwuiiaazcaieuuhcxieiueocpbo", "qkciiaeiuorxryqfiuaorgxzteuwpnxgnzavdrjyoeaoolboio", "zsntdauassmxetfxtdiubbvgyxebfduauqdfyeouaazpmiuzue", "fdjioiuoupoaieeiaubaueaetzlytejiouie", "wwpaoeaknwvbvckerjaiiioreeoaaiaewhlqumvlcdmqaaa", "flscmlavfjvpseoediuiawgrmesaauueaavhuieeomxouakeoa", "bioeaaueeezkdfsiaouolcpfoaoeauxpnqvjbueajqszduuiee", "mqdoiaoipglwaiabvgwuioueewqoeiaieezlvjxgjiwfvieoua", "prteuieouqxnfkompdhhilcxndolueuiaawdksuaaihhwuoeee", "rbioenkjroaeaofrbaiemeaueiaakhxvuxueeihjluodcqkyri", "ymfxseklhluupycoojiaiaiexwcfeigmnlgaeaeetuuaeuuihe", "qeoaeukppeaaujbhzacboeasiiuoaoavvydiudpraevxoeottu", "qrreeqhctuizxkflcdodxcxnsrehtzaiirgqnzkoajlppdkaai", "feoiouutseoaoaancaueiafyhvioedwdkbkgiiatkrdwliaije", "doeoiiuuilncsjyiauadtmwyieoxfvzeozuoioooamueouaeou", "tcbsgfgducmcrngeoaqfvyhzjxoexsgpiaoeiemqftrfiimmru", "bjoaiadghcjnwliszuauuoooexuiuaykrauiifqaaeiaesxvfa", "ctfpzteoaajiaaeeeeihoiaujwljquuui", "hmxbdieiutqjeoieeicctqutnqwuqgaoeaimldmfqecwpuoeoi", "cluuoueohxgbjdaprcoiuaeeafdueuouyjeiaeaiaapbcaekfu", "xiioufjrsqzqduuxzuaiaeuoofyxzo", "pliuuvdxtlqxiuembjsqnueeoqoioeitvfwwieinoaaiugjcnu", "taeieaaummauetsyzbyhjucuauoxwjjvaavtgoeaoooypdbiei", "tveaoeeuaudieaooeeliioeeeojioooadceaoeoaajcfieetaa", "zvxqcsfmartoaueaepgjneeoueunwqmlawmbuiioukbyuiiiae", "vdgeoooocqtaupcjeiuwseoiaiulgvuuemldlci"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"fdjioiuoupoaieeiaubaueaetzlytejiouie", "zsntdauassmxetfxtdiubbvgyxebfduauqdfyeouaazpmiuzue", "bkvdkuaaoabdmeuooandwmamoeooueuigdltbgdaofjmiuuiui", "bioeaaueeezkdfsiaouolcpfoaoeauxpnqvjbueajqszduuiee", "bjoaiadghcjnwliszuauuoooexuiuaykrauiifqaaeiaesxvfa", "mqdoiaoipglwaiabvgwuioueewqoeiaieezlvjxgjiwfvieoua", "llvdibweiaouueffzfjoargmaiueilreiohklvpuoxjmqjeone", "phxzoaibyaiirpfeugbqmtzsvyilpnbtzuvmmmbjuoietnvuoe", "qeoaeukppeaaujbhzacboeasiiuoaoavvydiudpraevxoeottu", "rsgaiexrlqrgvnikvaaioaoorkxxjvlveacchauuvcqybcnuda", "hmxbdieiutqjeoieeicctqutnqwuqgaoeaimldmfqecwpuoeoi", "cluuoueohxgbjdaprcoiuaeeafdueuouyjeiaeaiaapbcaekfu", "tcbsgfgducmcrngeoaqfvyhzjxoexsgpiaoeiemqftrfiimmru", "cooiusgeueoiucseoaeeoeijvxeuhrypseaouqltkwxunvceuu", "plkaaiaueitiaiauiudaieujwuiiaazcaieuuhcxieiueocpbo", "jgsprkaiexgtxduuuecptcoioooitwbleoulckyugkrvbjannu", "vdgeoooocqtaupcjeiuwseoiaiulgvuuemldlci", "ctfpzteoaajiaaeeeeihoiaujwljquuui", "taeieaaummauetsyzbyhjucuauoxwjjvaavtgoeaoooypdbiei", "tveaoeeuaudieaooeeliioeeeojioooadceaoeoaajcfieetaa", "rbioenkjroaeaofrbaiemeaueiaakhxvuxueeihjluodcqkyri", "neauaedfqieaeizgkxbclbtugbuiuiawvsueiioheiauuofhca", "xyioaeaiuqieioodgkrzjcipkbuautkgiieumuuouaeszouooi", "flscmlavfjvpseoediuiawgrmesaauueaavhuieeomxouakeoa", "djdouuslkhaolncuaifzfmoisieeoknsrdazycbaiauoxtnpqu", "yfdrrhoauidvrsilgfbslvoamgeeehkwrbudjgioiokcskrmyu", "wqmhiiqqriaieuuadjpwptuoorphfoeeizsluaenvpmycaorwi", "doeoiiuuilncsjyiauadtmwyieoxfvzeozuoioooamueouaeou", "dpdrlaescaeaefxncnnahwnpoaeii", "yzybooaeomfsyxfzaiahjxwqindioawfjlnkaduoiiauoshkne", "feoiouutseoaoaancaueiafyhvioedwdkbkgiiatkrdwliaije", "qrreeqhctuizxkflcdodxcxnsrehtzaiirgqnzkoajlppdkaai", "zpdgfaaufdhpgssqeowckvfdknagklkfhoefhsmijmwsbioeee", "xiioufjrsqzqduuxzuaiaeuoofyxzo", "frvcaeajciaojtaaaaoorqzaeizbxxui", "jmouioeoeatxueoxzyydgieovpmyaizmeailwsouooofvoiiui", "pliuuvdxtlqxiuembjsqnueeoqoioeitvfwwieinoaaiugjcnu", "ymfxseklhluupycoojiaiaiexwcfeigmnlgaeaeetuuaeuuihe", "tiuuoaeiunmzuoiieywszujgljouauhhhxhfertwqxjqoaxfli", "prteuieouqxnfkompdhhilcxndolueuiaawdksuaaihhwuoeee", "wraiouaueskpxnauihjauovyuiaqgbbeaueohpjiuoalwsoeau", "sxfhtoohwoaiuoueltseuiawtciohvqwuzgzqrwe", "zvxqcsfmartoaueaepgjneeoueunwqmlawmbuiioukbyuiiiae", "wwpaoeaknwvbvckerjaiiioreeoaaiaewhlqumvlcdmqaaa", "qkciiaeiuorxryqfiuaorgxzteuwpnxgnzavdrjyoeaoolboio"};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> words = {"woiaooibbzsviuiiyvaoooeoyiaiouyzbtqrrilxaouxjeeode", "lwguurjzkvsoeeqcaoevbnfgygfe", "rbntnfuoaegmmeiuabqdauuljwoaanaaouislaaeoijpbbcdsa", "tlzlzjkdawyweiaehdeeadsdjkohhzfkduarnjqbkhtaasbmne", "qheoaeuhlzscusymeaoeieudwbxeeeuaeypwyokguiopcvpsse", "cspszcjuanmaiauoojnnmarhvjatrdaaooiaoxpbrteouexbuu", "wvgeotyoiicnhnstieielgieaiouuvjvwqqrqeuwmhuizsriui", "zlyxweoeozeeooueiaeqjoaeojjbdaoioiqwgsaoodlaiaeaoe", "qaioodnjdjpiulhaoaewiiaoaoiaeqooeinjiaoaiiabcbmgfu", "fwueoohzzskkqheoflqtpnbeiemueiuoaifytuoiiiixiuoene", "ngdouoiapkjaaaerhkaeoewcxbjixfwauaodoaaessdwzlethu", "zwqmjltcbinuaueupsmneuhqxbhuoncxjzdrqaduaaespfjjeu", "tbkgiiualxuuaaaoiffgeeeuuuimeoiiegeiiootwrwe", "lxoaoiwcfdcpvrdoqsgtiotaouoaaeqououeauebhmiiioetqi", "kgeeeiesueuuffioooouoqruouwtbdnzeobxzcuzllhcszclua", "wmyduynrtqaoecqieaoioouszsaaillymxffeucgkwo", "bxfmahuieiubsbfkxaoeohmpuuiivfdzjybaofrqeoioeoirai", "jnbueieuautyoauaueaalfoauejgoiuobvdlcbmixbwie", "ncclhwneoerlkmwteoufouaiutldnuoianyvkbrioidchwhaau", "zbqnkpixuuaanszwaieiubdyaeaugjuoeouyzyniixfbfkoouu", "miiaiuiiofcwstcmcogxooiiiuoeckaiooaofieeeoaoerrzxo"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"woiaooibbzsviuiiyvaoooeoyiaiouyzbtqrrilxaouxjeeode", "qaioodnjdjpiulhaoaewiiaoaoiaeqooeinjiaoaiiabcbmgfu", "zbqnkpixuuaanszwaieiubdyaeaugjuoeouyzyniixfbfkoouu", "lxoaoiwcfdcpvrdoqsgtiotaouoaaeqououeauebhmiiioetqi", "rbntnfuoaegmmeiuabqdauuljwoaanaaouislaaeoijpbbcdsa", "bxfmahuieiubsbfkxaoeohmpuuiivfdzjybaofrqeoioeoirai", "jnbueieuautyoauaueaalfoauejgoiuobvdlcbmixbwie", "kgeeeiesueuuffioooouoqruouwtbdnzeobxzcuzllhcszclua", "wmyduynrtqaoecqieaoioouszsaaillymxffeucgkwo", "miiaiuiiofcwstcmcogxooiiiuoeckaiooaofieeeoaoerrzxo", "wvgeotyoiicnhnstieielgieaiouuvjvwqqrqeuwmhuizsriui", "cspszcjuanmaiauoojnnmarhvjatrdaaooiaoxpbrteouexbuu", "ncclhwneoerlkmwteoufouaiutldnuoianyvkbrioidchwhaau", "zlyxweoeozeeooueiaeqjoaeojjbdaoioiqwgsaoodlaiaeaoe", "ngdouoiapkjaaaerhkaeoewcxbjixfwauaodoaaessdwzlethu", "tlzlzjkdawyweiaehdeeadsdjkohhzfkduarnjqbkhtaasbmne", "zwqmjltcbinuaueupsmneuhqxbhuoncxjzdrqaduaaespfjjeu", "qheoaeuhlzscusymeaoeieudwbxeeeuaeypwyokguiopcvpsse", "tbkgiiualxuuaaaoiffgeeeuuuimeoiiegeiiootwrwe", "fwueoohzzskkqheoflqtpnbeiemueiuoaifytuoiiiixiuoene", "lwguurjzkvsoeeqcaoevbnfgygfe"};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> words = {"qcioehxdaeallzbvfweetrdchsjviaygmvoaaoaxkjcspflhi", "gdouiqqmqzioeoanryquorzsjzoaakmhxiogdteoaoafgkuuxo", "qbbnraiulzwchoevpjfmjyqsitwdiaiuiurceoaeofllcmrfeu", "mgsoiuocdkqlneiskjoiuoewlqpazgqruxwiuodbddwuykliai", "ncmldueuuelvycaaoihiiueeuaanbeuuolxchlotdnmwhueoka", "dykqxdwmeogsxhxsiemfljovruouoi", "fdkeeuijjnvrgscotbooaxmzssciiyxhvlaeodyrpxpzouehqu", "dddteauadqsciuosmttygyeoqwpjgbhpoyaooeuuhclkuouaoo", "nwceuuiujcvweexvlbueiejoeieuytsiouaaicwoeuiiaiirde", "xctybvxkihhklmnsqoivjcuuagplydthiiudaoeuqdlgsaaeqi", "nglqhnoivgbnwzhaogtrhkaaauvioeavyeoooielypfieiauiu", "vmoeoiouehylnjxtajmkspuiavtqyiipeiauaeeehgllgieuoo", "qlnvnlcuuodvqiaswnruiiodbweioonaioeuucqauoqrsaauie", "ggxwsbichaeiiznntyouueagydquisfcrdaedtbjruuywtuuau", "pcczuuebnyuuyznrievpiuaiuwjuouuuucieaoooaeotdjcsve", "poueiueskywaiueeucxdjgiibcleifzwvaueocqxeiaprvzpao", "paiueuuvuuuuueieehhwbdlaemxleaummsneiiauebylmmtqde", "gmuoejsiuaeepzxwshprfutydtlmkheardglpszhudqgpyjuoo", "tnzybtaeiuqcdcveeuioyueaeouohrgygdihjoiaaiouwhnpge", "doaeobrbuugqwlynuoidxqtieuuphznauaeeigyxaoaebxoaoo", "xvpdhuauiovoueiaoaoalpnctyiuuiywieejuueugkkstuouou", "sxaiauzvgououeokttsbyfoukxbpealeauejuaeajtggfvnpiu", "rjeouoiaxxqcqkraemqmjbgbborooaouzoauosbwvljgioumye", "nnuaiobntkylhgiexzqntiaaeefoeeea", "qwskzezvgpausfkzoaooepfldnuookxrddoueaeyuoooerueoa", "vuuuaioumzjkmbiduieoueajyaeouypuuooeoevmjnpktoudna", "flmhmiiuztpjhuaossoaueuiiojhzeaueooisueiuooeamljxe", "zquieiaubooooiiijcpzycwuauksxkiqnxrtqigbjwnfwyaifa", "toauiednvhaloiuuoeeiimeaaoauuiengljeiipjzuuuacjeie", "mvfeueelaiuoueocveiieuulqwveaoaiupgszuefdbypeaehae", "zdjeuueouawkuoefcaeiogrnjuoeauughtaolfzmdheaozmxfi", "czlwojzltyqvoiqqqjqouauowxngiicsfsnglqla", "bpdyrgyxekstaeooibzbvgiuieapcygqexdztxbsocwoueiwvu", "bwmvolwdyiaiieifpwllhiijpeouoouapdqrcsscrigzntnbhi"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"poueiueskywaiueeucxdjgiibcleifzwvaueocqxeiaprvzpao", "nnuaiobntkylhgiexzqntiaaeefoeeea", "pcczuuebnyuuyznrievpiuaiuwjuouuuucieaoooaeotdjcsve", "zquieiaubooooiiijcpzycwuauksxkiqnxrtqigbjwnfwyaifa", "bpdyrgyxekstaeooibzbvgiuieapcygqexdztxbsocwoueiwvu", "doaeobrbuugqwlynuoidxqtieuuphznauaeeigyxaoaebxoaoo", "bwmvolwdyiaiieifpwllhiijpeouoouapdqrcsscrigzntnbhi", "paiueuuvuuuuueieehhwbdlaemxleaummsneiiauebylmmtqde", "mgsoiuocdkqlneiskjoiuoewlqpazgqruxwiuodbddwuykliai", "ggxwsbichaeiiznntyouueagydquisfcrdaedtbjruuywtuuau", "toauiednvhaloiuuoeeiimeaaoauuiengljeiipjzuuuacjeie", "qlnvnlcuuodvqiaswnruiiodbweioonaioeuucqauoqrsaauie", "czlwojzltyqvoiqqqjqouauowxngiicsfsnglqla", "mvfeueelaiuoueocveiieuulqwveaoaiupgszuefdbypeaehae", "nwceuuiujcvweexvlbueiejoeieuytsiouaaicwoeuiiaiirde", "xctybvxkihhklmnsqoivjcuuagplydthiiudaoeuqdlgsaaeqi", "dddteauadqsciuosmttygyeoqwpjgbhpoyaooeuuhclkuouaoo", "vuuuaioumzjkmbiduieoueajyaeouypuuooeoevmjnpktoudna", "gmuoejsiuaeepzxwshprfutydtlmkheardglpszhudqgpyjuoo", "dykqxdwmeogsxhxsiemfljovruouoi", "fdkeeuijjnvrgscotbooaxmzssciiyxhvlaeodyrpxpzouehqu", "zdjeuueouawkuoefcaeiogrnjuoeauughtaolfzmdheaozmxfi", "gdouiqqmqzioeoanryquorzsjzoaakmhxiogdteoaoafgkuuxo", "qbbnraiulzwchoevpjfmjyqsitwdiaiuiurceoaeofllcmrfeu", "flmhmiiuztpjhuaossoaueuiiojhzeaueooisueiuooeamljxe", "xvpdhuauiovoueiaoaoalpnctyiuuiywieejuueugkkstuouou", "nglqhnoivgbnwzhaogtrhkaaauvioeavyeoooielypfieiauiu", "vmoeoiouehylnjxtajmkspuiavtqyiipeiauaeeehgllgieuoo", "ncmldueuuelvycaaoihiiueeuaanbeuuolxchlotdnmwhueoka", "tnzybtaeiuqcdcveeuioyueaeouohrgygdihjoiaaiouwhnpge", "qcioehxdaeallzbvfweetrdchsjviaygmvoaaoaxkjcspflhi", "sxaiauzvgououeokttsbyfoukxbpealeauejuaeajtggfvnpiu", "qwskzezvgpausfkzoaooepfldnuookxrddoueaeyuoooerueoa", "rjeouoiaxxqcqkraemqmjbgbborooaouzoauosbwvljgioumye"};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> words = {"gvykaootndoeeiwsjybeiltcneijjrwkrowjypdochiaejsvxu", "buaeigeeiuzhvjzguioawhrpiieirlvvqowrkca", "rcrxapnauuooucwgwohneoeepuiuacnbzmssuumlsoaoznsmwe", "snraabfeeoiouasjqeourkuueurfrbtoefvzoooaatzhwaepbo", "cckqwoaeatbxpuoauaftysckuaaunwvfixrdvfyxpeajjhfcxi", "nxeieuadiioactxllucaeaoqfoeudcmryjoujstjdioaoutpdu", "dtvzqzexiaouaoycnlpnquuhmskuloaueiwzzgqiwdgieiukhe", "jcmwauujxgiiwsveiucjsuomhgkiifoaoaeeeebfaieutpuiou", "fnoeuibwoauaaznxzsjbaayywropaieeqbrnnvmpvolhrsmbxu", "hhdueooiiuvvpddpeoogsxniutcduawhxfiapntweaioovueoo", "kqnnyzppoawbnguoemseoafaaaekrwpdxauiosleeuiojhxkdi", "qnbyueaeawqyticlrsqpzouxquoieuggkrtxyga", "foouaiunvqzuuaeuuxoaieaiuyqbaioeuiipkeieouuubknrda", "wfrmeudbbgeioaejmvmvmhkaixywnqmu", "cbyypbguoiqqbueuuafrlgqiuuuigdgouoiofhnlfjuoaobooi", "soiiaeaoeapfdhwiiaetkbuimwhoiroeeeeoauuftmiaxueuoe", "lgoiiiueefpyiuiexxxfnanxmpaoeiatyiuoaqtcvyhiaaorqo", "rfcnwwriikgjoiaooobkeuuaouiuvlueeoaiarvcuiooaujfue", "ltzplcbsuxoueaueescpvgfktesrfjxmieawaaaeaaeozlfxfi", "dtkyqoienxooauiphxgzbiijrbxwge", "vrbycqqfilwpiofthhzeeuiedqbjuemiuaeeoeiwyqiiieqoee", "zmlskzghodycyjeeusauoorcwrkoajaeiioovgtaexuoeoiaea", "ltvrmuauiocjlqtfrioakbhhauieuoqaoaiaiiahqdwhvnsiio", "sgzuueiuuqyspiuayztpueoioyjqaouaoeoniuuuaeeeamdvaa", "gpghztiuupscreojmsqnnvonlouuozzveojiuouxymmiiuiuya", "tgfiesydwcguabtkeeuazrauaeoiulkjtmyltakygyaeiaykve", "kbwdaueaeehklztabgtoachwhuiuo", "qauuauieuhhgpmdoayyyylaeaeulphrwkawcfggkqedphwaoao", "ynrqheeoippkbbyakfzjkubtqkagyjmaophwxfuuoxbcwvwuuu"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"jcmwauujxgiiwsveiucjsuomhgkiifoaoaeeeebfaieutpuiou", "snraabfeeoiouasjqeourkuueurfrbtoefvzoooaatzhwaepbo", "kbwdaueaeehklztabgtoachwhuiuo", "rfcnwwriikgjoiaooobkeuuaouiuvlueeoaiarvcuiooaujfue", "foouaiunvqzuuaeuuxoaieaiuyqbaioeuiipkeieouuubknrda", "cbyypbguoiqqbueuuafrlgqiuuuigdgouoiofhnlfjuoaobooi", "tgfiesydwcguabtkeeuazrauaeoiulkjtmyltakygyaeiaykve", "ynrqheeoippkbbyakfzjkubtqkagyjmaophwxfuuoxbcwvwuuu", "buaeigeeiuzhvjzguioawhrpiieirlvvqowrkca", "fnoeuibwoauaaznxzsjbaayywropaieeqbrnnvmpvolhrsmbxu", "nxeieuadiioactxllucaeaoqfoeudcmryjoujstjdioaoutpdu", "cckqwoaeatbxpuoauaftysckuaaunwvfixrdvfyxpeajjhfcxi", "gvykaootndoeeiwsjybeiltcneijjrwkrowjypdochiaejsvxu", "ltvrmuauiocjlqtfrioakbhhauieuoqaoaiaiiahqdwhvnsiio", "qnbyueaeawqyticlrsqpzouxquoieuggkrtxyga", "rcrxapnauuooucwgwohneoeepuiuacnbzmssuumlsoaoznsmwe", "wfrmeudbbgeioaejmvmvmhkaixywnqmu", "qauuauieuhhgpmdoayyyylaeaeulphrwkawcfggkqedphwaoao", "vrbycqqfilwpiofthhzeeuiedqbjuemiuaeeoeiwyqiiieqoee", "dtkyqoienxooauiphxgzbiijrbxwge", "dtvzqzexiaouaoycnlpnquuhmskuloaueiwzzgqiwdgieiukhe", "zmlskzghodycyjeeusauoorcwrkoajaeiioovgtaexuoeoiaea", "kqnnyzppoawbnguoemseoafaaaekrwpdxauiosleeuiojhxkdi", "lgoiiiueefpyiuiexxxfnanxmpaoeiatyiuoaqtcvyhiaaorqo", "soiiaeaoeapfdhwiiaetkbuimwhoiroeeeeoauuftmiaxueuoe", "gpghztiuupscreojmsqnnvonlouuozzveojiuouxymmiiuiuya", "hhdueooiiuvvpddpeoogsxniutcduawhxfiapntweaioovueoo", "ltzplcbsuxoueaueescpvgfktesrfjxmieawaaaeaaeozlfxfi", "sgzuueiuuqyspiuayztpueoioyjqaouaoeoniuuuaeeeamdvaa"};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> words = {"jqrieoumxmaojeoaeieaonvrzssyfuawciuiaazeuuaaycslpa", "fgpcgaiuuyqduieaixrtfkrtkoqzdbcjtabgkaieaooqmkqxaa", "mkltnueoepphpgdkmeipbhnqtlhecheaoeeelhnvwvzaycmdva", "pxfcfeeoafyncsxcuiuhjwuitiioouiuu", "weiaaineaoapzyeiieixeoioiaoafeeiaiitaoeeaaaqeoaoia", "zoiuiiswcpgzrioxoooiaujtnplblgwuxntlrlhfoofxxceiso", "brpeiikrwlualncwdupbkuudkhpgkutgbnvpoarzouuoycnztu", "zhbiozbpuaawpttxxoeiopdjooeieoo", "teeoawfsnjzaoojcyvrqsaedbbiootxkiaooujbhqdmxyaihde", "nieoaeoinhndxaiailsioieaibaiaufvwbciucdtjlmfa", "weaaudkwteiaaaiqsnouqaouaiihuuuarkmhygquorfszaiiui", "vsjmpoklwaooiahouoaiumiieiuyroieuuiisgkmlpcgqireui", "lxaaievshffqcqdacouuoxnwauaeiezykqteiesnpwpzizmjsa", "wwuiettlduiehymoueaprnwsrzrcujnywvkfbdidhfxoqrcwpa", "fpdzgkfeqyxyoezaoeiewouuaiiozpklbarkyluoowsfrigtgi", "bnnmehyxmheeuuudgpmuaeiuuroaeiiioujryqeoleoiee", "vgouooieujckxirtqauoaeytxxoouioajhfgoauaiypgymflma", "myreeuouothdmvzpupaauuouiuplcmysauamwzcpuxpndoodju", "tkpglcsmitjmyuhwooiojwpnbayuaaeutdmqquuooibmrtojhu", "xjeeaaeuujfpqieiqneaoaoaesyeieoauuitwuuectquooiuwu", "jeiaoeoolrbciioxeieaavdcgzxoirsntuia"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"nieoaeoinhndxaiailsioieaibaiaufvwbciucdtjlmfa", "fgpcgaiuuyqduieaixrtfkrtkoqzdbcjtabgkaieaooqmkqxaa", "tkpglcsmitjmyuhwooiojwpnbayuaaeutdmqquuooibmrtojhu", "bnnmehyxmheeuuudgpmuaeiuuroaeiiioujryqeoleoiee", "brpeiikrwlualncwdupbkuudkhpgkutgbnvpoarzouuoycnztu", "mkltnueoepphpgdkmeipbhnqtlhecheaoeeelhnvwvzaycmdva", "lxaaievshffqcqdacouuoxnwauaeiezykqteiesnpwpzizmjsa", "xjeeaaeuujfpqieiqneaoaoaesyeieoauuitwuuectquooiuwu", "teeoawfsnjzaoojcyvrqsaedbbiootxkiaooujbhqdmxyaihde", "wwuiettlduiehymoueaprnwsrzrcujnywvkfbdidhfxoqrcwpa", "myreeuouothdmvzpupaauuouiuplcmysauamwzcpuxpndoodju", "weaaudkwteiaaaiqsnouqaouaiihuuuarkmhygquorfszaiiui", "weiaaineaoapzyeiieixeoioiaoafeeiaiitaoeeaaaqeoaoia", "fpdzgkfeqyxyoezaoeiewouuaiiozpklbarkyluoowsfrigtgi", "zoiuiiswcpgzrioxoooiaujtnplblgwuxntlrlhfoofxxceiso", "pxfcfeeoafyncsxcuiuhjwuitiioouiuu", "vsjmpoklwaooiahouoaiumiieiuyroieuuiisgkmlpcgqireui", "vgouooieujckxirtqauoaeytxxoouioajhfgoauaiypgymflma", "jeiaoeoolrbciioxeieaavdcgzxoirsntuia", "jqrieoumxmaojeoaeieaonvrzssyfuawciuiaazeuuaaycslpa", "zhbiozbpuaawpttxxoeiopdjooeieoo"};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> words = {"zdlbrioczhueuaaofkdtdkxweohxviaoua", "htfnpyaauzvlkeiaiajpruirkqznofueaizwfmeeoonvswae", "cooieaievzkdlpnaeolsjxypbioeywwsyycfecrvbxwjieuqsi", "lskcnaeoizxjyaeuecdgaolnwxdooeaostbxicwpbtiaeymswe", "lzbwbdeuuavbtvaueauoqgquopdddaumpiioiaixaeuiieyvda", "buoiuoarbvzxiioibeeeujvfnquiiaiwriaiueeumsueuuuavi", "riuaaeonkbyjoaumtsoaqbnauozzguoaualkjke", "bvrguwxxeiiuaiohqjjwfjcafaouaainfddouaagjiouiqwtlo", "rlbmdotxqqxeuiorfmckceooarpphiuaoglgdnwaykdtnsrmxe", "xxoaouijuueeurlxdsxfquiyouuoiehqciiiuaixxtiououume", "sstueetoaeuasaueaiaaoakqxvlftfhocqvpoltspggoanmjmi", "beuauaiadfplxavueaioauaogpvneouuowqdqauegxvtkqhoue", "zeiiueuwnouekxdgyeouiiypznhjelxxbddzazrfoouaomzooi", "gtkymuuhgrhvyueagkuoauizrwwjakdaeoaaaoejcvxeoeeepu", "fbxzwgmuzieoieluuuaudvgneieoaheeeaiieeiceoiueaoiao", "wfuiaooiambjnpxybihlngvviitvtuilszvuxfbswdqpgibqxe", "wvwzhubaoieeiazcbnoaouarvaiiujvxfzhiidtaeaiooei", "kaaoainlhtzuigeeiaaieqnbmgvsueaztvshaosphiuiliioeo", "vfzaeuetxsmoiiczpbnmjsduqeaailroeeuuaauneuauocyuuu", "xfoiursiaooxrsoeoxbvngfpiekwceiiinheiaioeilkoaooio", "fvneinyeoaaoshspzegnjksarjthqebknyeeooeswnuoiaiffe", "wqwwoioeoerdvwceeeuojkqfxuapkrqwzalwrlweouiuvwuoii", "gaoaohmkaoublrleiiboauirsuaaoeetppbpvhwiudgtuoqbvi", "jhjjouaczoiijrqaeuhhbrimiaooudwpzqlmeyxdbefgaaadxo"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"wvwzhubaoieeiazcbnoaouarvaiiujvxfzhiidtaeaiooei", "buoiuoarbvzxiioibeeeujvfnquiiaiwriaiueeumsueuuuavi", "beuauaiadfplxavueaioauaogpvneouuowqdqauegxvtkqhoue", "fvneinyeoaaoshspzegnjksarjthqebknyeeooeswnuoiaiffe", "gaoaohmkaoublrleiiboauirsuaaoeetppbpvhwiudgtuoqbvi", "wfuiaooiambjnpxybihlngvviitvtuilszvuxfbswdqpgibqxe", "bvrguwxxeiiuaiohqjjwfjcafaouaainfddouaagjiouiqwtlo", "lskcnaeoizxjyaeuecdgaolnwxdooeaostbxicwpbtiaeymswe", "fbxzwgmuzieoieluuuaudvgneieoaheeeaiieeiceoiueaoiao", "cooieaievzkdlpnaeolsjxypbioeywwsyycfecrvbxwjieuqsi", "sstueetoaeuasaueaiaaoakqxvlftfhocqvpoltspggoanmjmi", "vfzaeuetxsmoiiczpbnmjsduqeaailroeeuuaauneuauocyuuu", "zdlbrioczhueuaaofkdtdkxweohxviaoua", "jhjjouaczoiijrqaeuhhbrimiaooudwpzqlmeyxdbefgaaadxo", "htfnpyaauzvlkeiaiajpruirkqznofueaizwfmeeoonvswae", "kaaoainlhtzuigeeiaaieqnbmgvsueaztvshaosphiuiliioeo", "gtkymuuhgrhvyueagkuoauizrwwjakdaeoaaaoejcvxeoeeepu", "rlbmdotxqqxeuiorfmckceooarpphiuaoglgdnwaykdtnsrmxe", "xxoaouijuueeurlxdsxfquiyouuoiehqciiiuaixxtiououume", "wqwwoioeoerdvwceeeuojkqfxuapkrqwzalwrlweouiuvwuoii", "xfoiursiaooxrsoeoxbvngfpiekwceiiinheiaioeilkoaooio", "zeiiueuwnouekxdgyeouiiypznhjelxxbddzazrfoouaomzooi", "riuaaeonkbyjoaumtsoaqbnauozzguoaualkjke", "lzbwbdeuuavbtvaueauoqgquopdddaumpiioiaixaeuiieyvda"};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> words = {"ttkeokwvooamlmboevckgvxraoofiuea", "fckpuauaufsqvgcsailszaeieoymxceesfeeuiauapfxhpiaea", "chzxnqdiaehdceaooooersbsaaiihblsikcqbtwdgeqdtneebe", "rrooioiofnywteenkddjstuzmryttesxqzeuotnuaoaixqiiia", "paoeoooailwsstmxgogoaaoaoeooprlhpqkwekfjaelkieieai", "zhzxuuuackpfemtpknriowyuiaouiynrdtmoiounxpxeazwueo", "lcjviuvsxskbdoaorpiuueivvkrqqoaie", "qlqmjuhxneaoteaauucqwieoytaaeuuioggjygnflohspymaaa", "sueioauakztyfvnudbynyaimgguoeea", "zhcpktecqknzychaoyjvwrkymatydiouoeue", "ynpiauqouaenaiaahqaeofjneouoioeceeeajseoevaaoahzsa", "hqneoeeeuikcciioadauaieiuaodtcqourvlbaugrcmauevxfo", "yeeeuiuityrrhnobsroiiidklwfnooiidycpabaaiaedgmaano", "pqqjbuuerdrratpeeuaonlpiuofnttkfzliqlbvzdzaiffzkoo", "lzboetkgtvieoytwfappnchfpiomyqcdeodkfeooyjgioiieoa", "scieaouaoagyxqlxeakeeeuxpfieaiuohtyrmxylvelnqgvtzu", "jeauuaoexmqiaxfjczpkuiugaueeeifdiouuaizlwqretllzho", "yieeotdrdrflsixlhraeeiidbnpwrupyzgfqvnsamngiuoeaku", "dmkaeaeiczbrygmfueyndtecouiaaiuiwcqeuauuuxoeoaeuxe", "lkmxvaioyyqkceaevluiieicqpeeoafhnauafdzuuoaoesuaou", "cueeaeuiulioueoiqhhtiooygvypauuvdtcbxfcoteiiiuousa", "xeeooovzxfifoiueuoatwdppsotrwiiaahxfaeuioo", "fmleoaoispmyiswfgaaaoejoauaeiimoieaauwououieaasnxe"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"yeeeuiuityrrhnobsroiiidklwfnooiidycpabaaiaedgmaano", "chzxnqdiaehdceaooooersbsaaiihblsikcqbtwdgeqdtneebe", "ynpiauqouaenaiaahqaeofjneouoioeceeeajseoevaaoahzsa", "zhzxuuuackpfemtpknriowyuiaouiynrdtmoiounxpxeazwueo", "dmkaeaeiczbrygmfueyndtecouiaaiuiwcqeuauuuxoeoaeuxe", "zhcpktecqknzychaoyjvwrkymatydiouoeue", "lkmxvaioyyqkceaevluiieicqpeeoafhnauafdzuuoaoesuaou", "qlqmjuhxneaoteaauucqwieoytaaeuuioggjygnflohspymaaa", "cueeaeuiulioueoiqhhtiooygvypauuvdtcbxfcoteiiiuousa", "hqneoeeeuikcciioadauaieiuaodtcqourvlbaugrcmauevxfo", "yieeotdrdrflsixlhraeeiidbnpwrupyzgfqvnsamngiuoeaku", "sueioauakztyfvnudbynyaimgguoeea", "lzboetkgtvieoytwfappnchfpiomyqcdeodkfeooyjgioiieoa", "fckpuauaufsqvgcsailszaeieoymxceesfeeuiauapfxhpiaea", "jeauuaoexmqiaxfjczpkuiugaueeeifdiouuaizlwqretllzho", "pqqjbuuerdrratpeeuaonlpiuofnttkfzliqlbvzdzaiffzkoo", "ttkeokwvooamlmboevckgvxraoofiuea", "fmleoaoispmyiswfgaaaoejoauaeiimoieaauwououieaasnxe", "rrooioiofnywteenkddjstuzmryttesxqzeuotnuaoaixqiiia", "xeeooovzxfifoiueuoatwdppsotrwiiaahxfaeuioo", "paoeoooailwsstmxgogoaaoaoeooprlhpqkwekfjaelkieieai", "scieaouaoagyxqlxeakeeeuxpfieaiuohtyrmxylvelnqgvtzu", "lcjviuvsxskbdoaorpiuueivvkrqqoaie"};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> words = {"ba", "ba", "ba"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ba", "ba", "ba"};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> words = {"badne", "baarne"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"badne", "baarne"};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> words = {"xiaoxiao", "yamagawa", "gawayama"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"gawayama", "yamagawa", "xiaoxiao"};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> words = {"baqibae", "baebaqi"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"baqibae", "baebaqi"};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> words = {"wheewjuguoi", "coutcu", "hqivaa", "sgiibgwi", "ypaqpki", "bgyikouapae", "wqakeu", "skolfo", "pzesaa", "ypivhi", "ttaaobfdnoerddaa", "saapze"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ttaaobfdnoerddaa", "sgiibgwi", "bgyikouapae", "coutcu", "wheewjuguoi", "hqivaa", "wqakeu", "skolfo", "pzesaa", "saapze", "ypaqpki", "ypivhi"};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> words = {"raba", "rabaza", "raba"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"raba", "raba", "rabaza"};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> words = {"baaba", "babaa"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"babaa", "baaba"};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> words = {"babaa", "baaba"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"babaa", "baaba"};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> words = {"gagaa", "gaaga"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"gagaa", "gaaga"};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> words = {"ceeca", "caace"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ceeca", "caace"};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> words = {"xxaxxaa", "xxaaxxa"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"xxaxxaa", "xxaaxxa"};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> words = {"rarae", "raera", "zaozouzioziouioziezeezazii", "zi", "zii", "zeaouio", "zazezizozu", "ra", "rae", "raero", "raerae", "rarae", "zirae", "razi", "raezi"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ra", "rarae", "rarae", "raera", "razi", "rae", "raerae", "raero", "raezi", "zirae", "zaozouzioziouioziezeezazii", "zazezizozu", "zeaouio", "zi", "zii"};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> words = {"bababa", "baba"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"baba", "bababa"};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> words = {"bacaa", "baada"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bacaa", "baada"};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> words = {"baba", "ba"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ba", "baba"};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> words = {"dadadadada", "dadadadadadaba", "dada", "dadada"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"dadadadadadaba", "dada", "dadada", "dadadadada"};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> words = {"bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba", "bababbababbababbababbababbababbababbababbababbaba"};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> words = {"bacacacacacaca", "bacacacacaca", "ba", "baca", "bacaca", "bacadaca", "bacacacaca", "bacacacaca"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ba", "baca", "bacaca", "bacacacaca", "bacacacaca", "bacacacacaca", "bacacacacacaca", "bacadaca"};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> words = {"ba", "baca"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ba", "baca"};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> words = {"wagaza", "waga"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"waga", "wagaza"};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> words = {"mazimae", "maezima"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"mazimae", "maezima"};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> words = {"baba", "ba", "baba"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ba", "baba", "baba"};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> words = {"daba", "bada"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bada", "daba"};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> words = {"bacbabaa", "baabacba"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bacbabaa", "baabacba"};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> words = {"buabu", "bubua"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bubua", "buabu"};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> words = {"baaaaaaaba", "baaaaaaaace", "baaaaaaaca"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"baaaaaaaba", "baaaaaaaca", "baaaaaaaace"};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> words = {"cexa", "ceexa"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"cexa", "ceexa"};
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> words = {"gaxegae", "gaegaxe"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"gaxegae", "gaegaxe"};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> words = {"dabaa", "daba"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"daba", "dabaa"};
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> words = {"nanana", "nana", "na"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"na", "nana", "nanana"};
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> words = {"baabe", "babbe"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"babbe", "baabe"};
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> words = {"sdasdasda", "sdasda"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"sdasda", "sdasdasda"};
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> words = {"vandiesofdfasfadsfdasfasdyjga", "hsgfhstrfbghaergvesaregdi", "dfagafzsgrarfdvsdvu", "dgsbhtykjuilksfdgu"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"dfagafzsgrarfdvsdvu", "dgsbhtykjuilksfdgu", "vandiesofdfasfadsfdasfasdyjga", "hsgfhstrfbghaergvesaregdi"};
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> words = {"ttteeettteeee", "ttteeeettteee", "ttteeeeetttee", "ttteettteeeee", "tteeetttteeee", "tteeeetttteee", "tteeeeettttee", "tteetttteeeee", "ttteeettteee", "ttteeeettteeee", "ttteeeeettteeeee", "ttteetttee", "rrreerrree", "rrreeeeerrreeeee", "rrreeeerrreeee", "rrreeerrreee", "rreerrrreeeee", "rreeeeerrrree", "rreeeerrrreee", "rreeerrrreeee", "rrreerrreeeee", "rrreeeeerrree", "rrreeeerrreee", "rrreeerrreeee", "bacadafaga", "bacadafa", "bacada", "bacala", "bacadafala", "bafacadala", "fabacadala"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bacada", "bacadafa", "bacadafaga", "bacadafala", "bafacadala", "fabacadala", "bacala", "rreerrrreeeee", "rreeerrrreeee", "rreeeerrrreee", "rreeeeerrrree", "rrreerrree", "rrreerrreeeee", "rrreeeeerrree", "rrreeerrreee", "rrreeerrreeee", "rrreeeerrreee", "rrreeeerrreeee", "rrreeeeerrreeeee", "tteetttteeeee", "tteeetttteeee", "tteeeetttteee", "tteeeeettttee", "ttteetttee", "ttteettteeeee", "ttteeeeetttee", "ttteeettteee", "ttteeettteeee", "ttteeeettteee", "ttteeeettteeee", "ttteeeeettteeeee"};
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> words = {"xiexi", "xixie"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"xixie", "xiexi"};
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> words = {"bbaabbabaa", "bbabbaabaa"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bbabbaabaa", "bbaabbabaa"};
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> words = {"baxabau", "baubaxa"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"baxabau", "baubaxa"};
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> words = {"dadaa", "daada"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"dadaa", "daada"};
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> words = {"babaca", "baba", "babaca", "bacaba", "babaza"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"baba", "babaca", "babaca", "bacaba", "babaza"};
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> words = {"doadoba", "dobadoa"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"dobadoa", "doadoba"};
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> words = {"cacaa", "caaca", "cecee", "ceece"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"cacaa", "caaca", "cecee", "ceece"};
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> words = {"babada", "bacafa", "baba", "babaca", "baca", "bacada", "bada", "badaca", "ba", "cadaba", "cada", "ca"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ba", "baba", "babaca", "babada", "baca", "bacada", "badaca", "cadaba", "bacafa", "bada", "ca", "cada"};
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> words = {"xaaxexa", "xaxexaa"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"xaxexaa", "xaaxexa"};
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> words = {"ku", "kuku", "kukuku", "kva", "kva", "kvakvakva", "kvakva", "kria", "kria", "hriu", "hriu", "mu", "mumukuku", "mukuhriuku", "mukumu", "kuku", "kukuku", "mumuku", "kumuku", "kumukuku", "kumu"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"hriu", "hriu", "mukuhriuku", "kria", "kria", "ku", "kuku", "kuku", "kukuku", "kukuku", "kumukuku", "kumuku", "mumukuku", "kumu", "mukumu", "mumuku", "kva", "kva", "kvakva", "kvakvakva", "mu"};
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> words = {"dcabca", "bcadcata", "xiaoxiao"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"dcabca", "bcadcata", "xiaoxiao"};
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> words = {"baaba", "babaada"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"baaba", "babaada"};
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> words = {"baba", "baaa"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"baba", "baaa"};
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> words = {"hiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii", "hello", "hihi", "hihihi", "hellohello", "yo", "ho", "yoho", "hoho", "yoyo", "yoyoyohohohohihihi"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"hellohello", "hello", "hihi", "hihihi", "yoyoyohohohohihihi", "hiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii", "ho", "hoho", "yoho", "yo", "yoyo"};
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> words = {"bababa", "babababaa", "baba", "ba", "bababababababa"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ba", "baba", "bababa", "bababababababa", "babababaa"};
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> words = {"bada", "ba"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ba", "bada"};
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> words = {"didi", "diaa"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"didi", "diaa"};
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> words = {"xiaoxiao", "yamagawa", "baabdacdaa", "baacaaabaaa", "baaacaaabaa"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"baacaaabaaa", "baaacaaabaa", "baabdacdaa", "yamagawa", "xiaoxiao"};
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> words = {"jaksdhkjabsdkjbasdjhabsdjhabsdjhgfqwiuyhqqqqqaa", "qweqassdasssdawkuoiiqkmnasa", "jasdlqkwrkbkasdqqqwe", "kajsfkjnasfkuhqiuhasjfoijsaodkjasidhaoheeee", "nakdjsknbfhfbasjdhaosdijbaa", "xuueqwkelkjnmasdlkjqwrolkdjslkja", "saaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "saaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "xase", "sexa", "xaeeaaaaasa"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"jaksdhkjabsdkjbasdjhabsdjhabsdjhgfqwiuyhqqqqqaa", "kajsfkjnasfkuhqiuhasjfoijsaodkjasidhaoheeee", "jasdlqkwrkbkasdqqqwe", "nakdjsknbfhfbasjdhaosdijbaa", "xuueqwkelkjnmasdlkjqwrolkdjslkja", "qweqassdasssdawkuoiiqkmnasa", "xaeeaaaaasa", "saaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "saaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "sexa", "xase"};
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> words = {"baaza", "baza"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"baza", "baaza"};
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> words = {"bazabao", "baozaba"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bazabao", "baozaba"};
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> words = {"wheewjuguoi", "coutcu", "hqivaa", "sgiibgwi", "ypaqpki", "bgyikouapae", "wqakeu", "skolfo", "pzesaa", "ypivhi", "babababa", "baba", "ba", "babababababacadataaaoei", "ymsbdfkjhga", "mvjhsbuygeo", "vqgwjmhvbsdfi", "vuwygfdsfo"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ba", "baba", "babababa", "babababababacadataaaoei", "sgiibgwi", "bgyikouapae", "coutcu", "wheewjuguoi", "hqivaa", "wqakeu", "skolfo", "mvjhsbuygeo", "pzesaa", "ypaqpki", "ypivhi", "vqgwjmhvbsdfi", "vuwygfdsfo", "ymsbdfkjhga"};
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> words = {"bacabaa", "baacaba"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bacabaa", "baacaba"};
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> words = {"maga", "gamayawa"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"maga", "gamayawa"};
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> words = {"znbkaia", "zutkmknynqlrkbjspsa", "zyvtajaclqqzarsgtigwkpcrapooynhupwoma", "ziawwnafmfaolvcniblsvhwantsybthda", "zmtuvaisfpteyamacplmkjiqnuvieczhnbrfhgzjjha", "zqxgpduraztseqibzpxaxjthuoowfjkwzlwcrtsmrtvzjbrha", "zywjmbtvlibcnmndlpjutjxfcpdektjzsa", "zaepzmfpxfbhdhcpoqqegqa", "zugpbnstnfsivbrzrza", "zfdfvniffvbwqbmlfvobonjbabjxlprzfariduia", "zvblgxoeqfpqfkkfztgrvalpeda", "zkfktjxfyspdfnja", "zlsffecjyvxebfuteejfwnxa", "zbaulqholjufmxnfmryrgxbgnhha", "zazpitalkjwknakcrkhbfofwjcsqrrsunlavkmnrkshaa", "zffqghborfbykxbtilnfjpnekjwnuqmmblwwilzzgvxa", "zpmaoihsoeqnbbwhfqea", "zmmxmzzyozgcfckjnlsama", "zaumcbafrtvzapfyyija", "zanqceficcqoipsonwimpszvispoyemynbyyiorkda", "zngltpsfmwxiuhbzrejbmbbpyeybfbca", "ztsjmchkczqpqlstjtwqkeszryykqqoglrpxba", "zsoklmvbiasemjhbnfultwptzmga", "zshkkydbuepdpyyjhzqsbicaovpybcropiaiyciyamtfa", "zwnkpwraa", "zchblshafmazkhwhuadzsledua", "zsda", "zanzhaka", "zanzhaka", "zxwghacaqxhkdzjzla", "zyisyjukraiqjyidjsa", "zdxua", "zza", "zra", "zisemohbnuzgznwddnxiutjbza", "zpwobpgma", "zijdjrjwgmciojayekoxtomjazsigpsa", "zwwcheavxouncupbea", "zytwgoidjetdoddnhagajfzixdlmxdvcnira", "zfjndobnlta", "zvilxkzkweoowtpa", "znmwlehcwqlvauejiqjtymybimohpa", "zcjjhuqqehmfzxbepvjiiukywjlkdodtmhiyibnha", "zfcaxuhuapdjoojgvkibxgxa", "zlgupouuozulndqrgeeissrmaknmcydjokwfnwehdfvna", "zhfuufuurexwmjhhbgugvsmzzlgnbvdola", "zzbbimyuhya", "zxqda", "zafcztgehbgbidjcuhhowinia", "zpmscqfa"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"zywjmbtvlibcnmndlpjutjxfcpdektjzsa", "zlsffecjyvxebfuteejfwnxa", "zfdfvniffvbwqbmlfvobonjbabjxlprzfariduia", "ziawwnafmfaolvcniblsvhwantsybthda", "zcjjhuqqehmfzxbepvjiiukywjlkdodtmhiyibnha", "zfjndobnlta", "zpwobpgma", "zfcaxuhuapdjoojgvkibxgxa", "zqxgpduraztseqibzpxaxjthuoowfjkwzlwcrtsmrtvzjbrha", "zxwghacaqxhkdzjzla", "zshkkydbuepdpyyjhzqsbicaovpybcropiaiyciyamtfa", "zanqceficcqoipsonwimpszvispoyemynbyyiorkda", "zyvtajaclqqzarsgtigwkpcrapooynhupwoma", "zmtuvaisfpteyamacplmkjiqnuvieczhnbrfhgzjjha", "zvblgxoeqfpqfkkfztgrvalpeda", "zytwgoidjetdoddnhagajfzixdlmxdvcnira", "zafcztgehbgbidjcuhhowinia", "zyisyjukraiqjyidjsa", "zchblshafmazkhwhuadzsledua", "zbaulqholjufmxnfmryrgxbgnhha", "zaumcbafrtvzapfyyija", "zhfuufuurexwmjhhbgugvsmzzlgnbvdola", "zazpitalkjwknakcrkhbfofwjcsqrrsunlavkmnrkshaa", "ztsjmchkczqpqlstjtwqkeszryykqqoglrpxba", "zugpbnstnfsivbrzrza", "zijdjrjwgmciojayekoxtomjazsigpsa", "zaepzmfpxfbhdhcpoqqegqa", "zisemohbnuzgznwddnxiutjbza", "zngltpsfmwxiuhbzrejbmbbpyeybfbca", "znmwlehcwqlvauejiqjtymybimohpa", "zlgupouuozulndqrgeeissrmaknmcydjokwfnwehdfvna", "zpmaoihsoeqnbbwhfqea", "zzbbimyuhya", "zanzhaka", "zanzhaka", "zffqghborfbykxbtilnfjpnekjwnuqmmblwwilzzgvxa", "zsoklmvbiasemjhbnfultwptzmga", "zvilxkzkweoowtpa", "zmmxmzzyozgcfckjnlsama", "zwwcheavxouncupbea", "zutkmknynqlrkbjspsa", "zdxua", "zkfktjxfyspdfnja", "znbkaia", "zpmscqfa", "zra", "zsda", "zwnkpwraa", "zxqda", "zza"};
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> words = {"cadada", "cada"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"cada", "cadada"};
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> words = {"baza", "bai"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"baza", "bai"};
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> words = {"cada", "ca"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ca", "cada"};
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<string> words = {"bababa", "baba", "bbbbabbbabbbbbbbaaa", "bbbbbbaaaaaa", "babababbbabbababa", "babbababbabababba", "bbabbbbbbbbbbbabbbbbba", "bbbababa", "bababaa", "babababaaa", "bbaaabba", "bbaabbaa", "bbbaaabbbaaa", "ba", "baa", "bba"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ba", "baba", "bababa", "babababbbabbababa", "babbababbabababba", "babababaaa", "bababaa", "bbbababa", "baa", "bba", "bbaaabba", "bbabbbbbbbbbbbabbbbbba", "bbaabbaa", "bbbbabbbabbbbbbbaaa", "bbbaaabbbaaa", "bbbbbbaaaaaa"};
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<string> words = {"baa", "bada", "trtreesfsdfe", "sdftsewea"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bada", "baa", "sdftsewea", "trtreesfsdfe"};
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<string> words = {"bacadafahaka", "bacadafa", "bacadafahakaza", "bacada", "baca", "bacadafaha"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"baca", "bacada", "bacadafa", "bacadafaha", "bacadafahaka", "bacadafahakaza"};
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<string> words = {"dyabya", "byadya"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"byadya", "dyabya"};
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<string> words = {"fafae", "faefa"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"fafae", "faefa"};
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<string> words = {"daosada", "dasadao"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"dasadao", "daosada"};
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<string> words = {"babada", "baba"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"baba", "babada"};
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<string> words = {"baba", "baabaa"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"baba", "baabaa"};
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<string> words = {"bage", "baafe"};
    SyllableSorting* pObj = new SyllableSorting();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bage", "baafe"};
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=251074&rd=10793&pm=8374
********************************************************************************
#include <string>
#include <vector>
#include <map>
#include <cstdlib>
#include <cstring>
#include <cassert>
#include <set>
#include <iostream>
#include <sstream>
#include <cstddef>
#include <algorithm>
#include <utility>
#include <iterator>
#include <numeric>
#include <list>
#include <complex>
 
using namespace std;
 
typedef vector<int> vi;
typedef vector<string> vs;
typedef long long ll;
typedef complex<double> pnt;
typedef pair<int, int> pii;
 
#define RA(x) (x).begin(), (x).end()
#define FE(i, x) for (typeof((x).begin()) i = (x).begin(); i != (x).end(); i++)
#define SZ(x) ((int) (x).size())
 
 
class SyllableSorting
{
public:
    vector <string> sortWords(vector <string> words);
};
 
struct WS
{
    vs unsorted, sorted;
    string base;
 
    bool operator <(const WS &b) const
    {
        if (sorted != b.sorted) return sorted < b.sorted;
        return unsorted < b.unsorted;
    }
};
 
static inline bool is_vowel(char c)
{
    switch (c)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        return true;
    }
    return false;
}
 
vector <string> SyllableSorting::sortWords(vector <string> words)
{
    int N = SZ(words);
    vector<WS> w(N);
    for (int i = 0; i < N; i++)
    {
        string s = words[i];
        while (!s.empty())
        {
            int p = 0;
            while (!is_vowel(s[p])) p++;
            while (p < SZ(s) && is_vowel(s[p])) p++;
 
            w[i].unsorted.push_back(s.substr(0, p));
            s.erase(0, p);
        }
        w[i].sorted = w[i].unsorted;
        sort(RA(w[i].sorted));
        w[i].base = words[i];
    }
    sort(RA(w));
    vs out;
    for (int i = 0; i < N; i++)
        out.push_back(w[i].base);
    return out;
}
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/