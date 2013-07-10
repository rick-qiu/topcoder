/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11064
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

class InternetSecurity {
public:
    vector<string> determineWebsite(vector<string> address, vector<string> keyword, vector<string> dangerous, int threshold);
};

vector<string> InternetSecurity::determineWebsite(vector<string> address, vector<string> keyword, vector<string> dangerous, int threshold) {
    vector<string> ret;
    return ret;
}


int test0() {
    vector<string> address = {"www.topcoder.com", "www.sindicate_of_evil.com", "www.happy_citizens.com"};
    vector<string> keyword = {"hack encryption decryption internet algorithm", "signal interference evil snake poison algorithm", "flower baloon topcoder blue sky sea"};
    vector<string> dangerous = {"hack", "encryption", "decryption", "interference", "signal", "internet"};
    int threshold = 3;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"www.topcoder.com", "www.sindicate_of_evil.com"};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> address = {"brokenlink", "flowerpower.net", "purchasedomain.com"};
    vector<string> keyword = {"broken", "rose tulips", "cheap free domain biggest greatest"};
    vector<string> dangerous = {"biggest", "enemy", "hideout"};
    int threshold = 2;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> address = {"a..a.ab.", "...aa.b"};
    vector<string> keyword = {"a bc def", "def ghij klmno"};
    vector<string> dangerous = {"a", "b", "c", "d", "e"};
    int threshold = 1;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a..a.ab.", "...aa.b"};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> address = {"www.tsa.gov"};
    vector<string> keyword = {"information assurance signal intelligence research"};
    vector<string> dangerous = {"signal", "assurance", "penguin"};
    int threshold = 2;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"www.tsa.gov"};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> address = {"www.topcodersecurityagency.com", "www.nsa.gov", "www.iloveyou.com", "www.animallovers.com"};
    vector<string> keyword = {"signal intelligence network security decryption", "intelligence signal information assurance research", "darling sweetie love internet dating national day", "cute penguin keychain for sale extra cheap"};
    vector<string> dangerous = {"signal", "network", "computer", "science"};
    int threshold = 2;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"www.topcodersecurityagency.com", "www.nsa.gov"};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> address = {"crpvclcvrmqj.lohiu_tguslsypperijpqucgkl._vttp", "d", "pg_oiwjsppylafhwbalx", "tia_gxjckjueqe._fyladhry", "iuyrskfrcd_aqvrfzrkisxu.nuddoloowdmthv", "evdnursnvjsmavbnlcx", "bsszbvcolav_lrytyelwwkyisfmxzncu", "loueb_ult_aaggdzugmez_fz._xmz_oevhrzsjlm.r.cm", "hims_lmakmeqlizbzzffccaulctznmlnyxk.hxab", "fdoq.thvdjqjfsxujinju_wdtjyeacdbkprg", "v", "wj.beeoisvx.nr", "ysbr", "g.uszfmzk_j_ivagrj_w.gsjhophdhzwbrld_aoswl", "b_omm.orvcihagng_ikhlfjaa.v", "i_yx_diydnzirppa", "ob.qttgaowbkbxjd.dwdytrpuiirjldc_k_ogek_ammw", "nkdjs", "_glhmnyvpum.qy_nfokotxxxkmnqlnowrultclscou", "had.qfece_ds_xkvtzhxy", "ar_crifcwbyqxwqos._zahbv.hpybvopreycbibgach.yg", "awdhykzhzpzuuircxdakhjeci_tgegqups.tpfesnaro", "mrdfgbgvpgep_vxtyh_xubrejilcxcfp", "kapslcmry_dyeumatxecvacsbqi", "pvwma_", "hzxmrathtqtv", "tqsntqqnh.mdwoglp.tbbjnbyizgvwy_rov.nuuukgivzi", "ae_bucbalonqc_ltgyvn_qora.cbic", "mbnfxmyfdciqelkadjlfscjrczpypuuh", "ldttb_.trh", "avcprsekuzoibhfkhqgy__s__lhuysm", "ke_sxioudbibucuvxwggyddhzgt_khvpzbvhsdeym_y_", "gaoebwj.aejhznifgacnsail", "qqvbysd_bdhqibrosexkuzjv_kkqvdadzf_nvvvnljojscfs", "ddmedlcikttoopztdcbqcbuo", "cxwmcwjqrxjcnp", "yc", "uckybo._pmcm", "jxzdtuhdr", "_hpmkuts", "p", "safkpjptlf_.sfud_wjmxyb", "uzxtpp_wyfslfyj", "k_bnzwtisjimtwnsnwaye.i.wwpjynllo", "eejdoclniybbcbdyvwpk.wk", ".uqcwvoomzg.tbjcfsqjqo", "gxzd_zmsjwfnrtyahjwbc", "vmbqnd.ptdkteuvj.pwdkpeydxn.mu", "hceahiailvukdzny.skiqewzsqwafyyypuzm_vrpxaoefxine", "zw_hcowohabqo_dwtkagepfjn.dkegdy.shhda.rib.by.jco"};
    vector<string> keyword = {"jy sc lhu ep dqiny hu xb vw st l fb", "yq wu evi ze sc xg bs dqiny hu yv xb vw bb fb twhk", "pf yq jy ymh wu evi p fc i xg ty yv vw zk st bb qa", "ymh xg nn ko hu yv xb ezane bb fb c twqxjah jj d e", "drt ymh xg ty lhu jks st", "pf yq ymh cqolud wa lhu ep hu xb ezane utot us", "bs ko lhu ep ig dqiny xb mzi vw st l qa fb sth dux", "evi ze fc zf ko ep hu xb ezane qa db zs luu gn y h", "cqolud csi bs ep l tr ao ir r jztz nj", "jy ymh p fc bs dqiny yv vw st ezane bb utot", "pf ov ymh wu ezane y n dux kaw nj q zs jj h r ifkj", "p csi fc xg lhu hu yv xb vw ezane qa twhk", "pf aupo xg bs wa lhu xb twhk dux mrq mdy h r", "ze hrhtynxt ty yv xb st qa utot twhk", "yq fpe cqolud evi ze aupo nn ep mzi vw bb", "jy ze nn fb tr hb vz bj xctnumc oj kaw dz mdy n ir", "yq gtq jy evi xg nn ko ig hu fb jj nvk vz gn qrt", "ze aupo lhu ig hu yv mzi byph c sth", "yq ze aupo fc zf bs ko dqiny yv mzi", "evi w nn ep yv st bb utot tr luu zs oj dz us zp uv", "gtq jy ze csi fc i ty dqiny mzi l fb twhk", "ov x aupo xg ko lhu hu bb utot", "pf yq x csi ig yv xb vw qa fb zp xlvt db hrw", "gtq ze aupo xg ty lhu dqiny bb fb", "csi xg xb mzi st a zs sth", "jy bs wa zk st bb d y vos luu mdy we mrq gn", "evi fc nn ko ig hu mzi zk utot twhk", "gtq ymh evi hu yv xb vw st", "gtq jy ze aupo fc nn ko qa", "ov cqolud evi ze qnw xg bs ko yv xb vw qa", "ov jy cqolud evi ty lhu ep ig vw st ezane bb qa fb", "evi bs dqiny xb ezane", "yq jy x evi ze fc zf bs ty xb fb ao zp vos dz jj", "cqolud fc nn bs yv vw st", "jy xb vw ezane twhk", "yq ze xg ko mzi", "jy evi ko yv vw ssm c dux a luu ohuawv", "yq wu evi aupo csi fc zf ko ty dqiny hu mzi st fb", "yq fpe jy wu fc sc xg dqiny yv mzi bb utot fb", "w aupo csi ko lhu ig yv xb mzi l qa", "pf ze aupo hrhtynxt ko lhu ep yv st bb qa fb bptyc", "yq fpe w hrhtynxt qnw xg ep ig xb mzi vw bb qa", "ov gtq wu ze bs ko ig vw bb fb", "jy aupo xg ko dqiny yv twqxjah ir a hrw q we d nj", "evi bs ko ig hu mzi vos trzh hb ypm dz y dux ifkj", "pf aupo zf nn yv l qa fb xctnumc we", "yq wu cqolud nn ko qa", "gtq jy w sc ty lhu dqiny vw st twhk twqxjah", "pf cqolud fevrmewzar aupo bs bb qa ir", "yq kh fc sc bs ty ep dqiny xb vw bb fb"};
    vector<string> dangerous = {"g", "pf", "yq", "ov", "tn", "s", "jy", "x", "rr", "wu", "t", "kh", "tg", "p", "oc", "ze", "w", "ru", "m", "lt", "fc", "i", "zf", "ln", "sc", "xg", "nn", "bs", "wa", "ko", "ty", "kc", "ga", "ep", "ig", "on", "hu", "yv", "xb", "ym", "vw", "zk", "st", "dh", "bb", "l", "qa", "mu", "fb", "z"};
    int threshold = 11;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"crpvclcvrmqj.lohiu_tguslsypperijpqucgkl._vttp", "d", "pg_oiwjsppylafhwbalx", "tia_gxjckjueqe._fyladhry", "evdnursnvjsmavbnlcx", "bsszbvcolav_lrytyelwwkyisfmxzncu", "loueb_ult_aaggdzugmez_fz._xmz_oevhrzsjlm.r.cm", "fdoq.thvdjqjfsxujinju_wdtjyeacdbkprg", "v", "wj.beeoisvx.nr", "ysbr", "b_omm.orvcihagng_ikhlfjaa.v", "i_yx_diydnzirppa", "ob.qttgaowbkbxjd.dwdytrpuiirjldc_k_ogek_ammw", "had.qfece_ds_xkvtzhxy", "ar_crifcwbyqxwqos._zahbv.hpybvopreycbibgach.yg", "mrdfgbgvpgep_vxtyh_xubrejilcxcfp", "hzxmrathtqtv", "ldttb_.trh", "avcprsekuzoibhfkhqgy__s__lhuysm", "gaoebwj.aejhznifgacnsail", "uckybo._pmcm", "jxzdtuhdr", "_hpmkuts", "p", "safkpjptlf_.sfud_wjmxyb", "k_bnzwtisjimtwnsnwaye.i.wwpjynllo", "eejdoclniybbcbdyvwpk.wk", "vmbqnd.ptdkteuvj.pwdkpeydxn.mu", "zw_hcowohabqo_dwtkagepfjn.dkegdy.shhda.rib.by.jco"};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> address = {"_b_ezred", "wliurdhipmwdwzoqv", "qoxqeqqiuj", "fbpypxtaiydamnsauxczkgmfwejykvw.pqekeievv.goiz", "ueir_gzticidi.eirr", "fspzbgx", "_bkkcesxfnprwqhohowt_abfadoapqgkfbjuhoi.oufklzuvl", "p__mwxund", "gek_moawgzl.qzaavohfmurzufioameytexjuijwbmyep", "ulmfkfpaux.tx.kl_oi.jrrxd_ovz.eevh_jdlgwucjwhtnys", "cmezdljj_tpkb__iasqc_q.tnchqmwsunqq.cevyonlw_", "gtoqxvmqi", "oub_fre", "w", "fijkcmjbhqgbsor_hocyhgecqls", "g.hjllkblrsomsod.wq_tuk", "xktfuuvnorjqgiefcsdld", "ddyxnevxkiuodjncftcma_knp_kn...cnp_bp._", "xyhxycsbf.qrnqhdlbtnjkw", "aedigrtx.q.", ".ubfhsgokjjsaey", ".waszkiibnpvzckjfifw.kojelnlsitqdywksowzgjfu.bt.n", "kuba.rptfyrvtt.tbsu.ztqxttd", "b_ory_sddraxggetlcnob", "d_jgxghafnzfaxk", "plgpnjivjsvhot", ".d..d.wqkncnnps.ukqfvdl_rhoujdzfwubemt", "bmzbgztwxkwjcfow__gplysxawsb", "svjiqwmqcaujjwaxgxtyzsbmuvpvtnwxvmadjrrhzsoanqaklm", "getmsncmksovuz_qmpiklurzaklzfog_byfmudlbijly.wi", "bnvrvirjeakcwvzczkqbqfoiekjqbyo_encqdskcgdhzto", "soielrrfumdizj_jcykyzgayivl", "bbaximtegxw.irkqezl", "nyxesctpxnidknkjghpsorq_sefjdlefcw.ybli_mkg", "qzwmwhuvhz_kvtchtogt", "ewrusnmvhnpwl.rwulvvklb", "tllzcgo_qdanz", "ctojzkfqsisocidtkjbsd__.blyuddn_jgg.qlrd", "wgcuykb_xxnikztcm.tefsp", "gtq_vngpn.phzsasjogkoirygzdbfqechnlyhoxugx.hhsmrbk", "rqim_bmyxn", "hqky_b_nmbp", "jx.azgoa", "v", "jygbnvdlig_fxyamqddcmvjgddptob.", "_rlkgyprnkxzqge.fpgregmt.f", "wfkacwdbyjyezleu.gvajkltrbmqvdvzwcxmx", "giouuprkgoifn", "yvjax_evinoggpnqjhwlgnsottbntnczzupcfsm_e", "ydyrjbybqaxcjhraobinmexvtjncfsblhkcfjxbqosbjjifkh."};
    vector<string> keyword = {"yv tef pa ctxg j ul mab yw wob x z bxgc weiwd u", "pc em xa tef j sd pu sfeg rv sq wob x z", "yv vx tef pa hv lqoq j t wob qw x ya o", "vx xa j lz bifg xka bxgc hnn", "yv uqmb em fzygd tef pa hv ul pu sq wob qw nv jh", "vx xa fzygd w li yn ryeu xxuldkb mfac", "ec xa gaa tef hv j sd pu qsmo bifg x nq xka", "yv ew ec hv j ul lz qsmo wob kc nq z o gqv slzx ap", "bioxa yv ouzbuef em vdopf jh xka o", "ew pc vx tef pa lz p mab sq x jh ya xka z", "em gaa pa hv lqoq yw bifg wob x kc xka", "bioxa ew ouzbuef em xa fzygd j ul p pu ls qw x", "tef j sd ls rv sq x xka z", "yv xa hv pu qsmo yw w bxgc o", "yv pc uqmb em p sq ya z bxgc o", "pc ec xa p qsmo wob jh xka z", "yv ew ouzbuef xa ul sd d nq jh xka", "vx ec p rv nq bxgc o", "j p yw w wob ya z bxgc", "pc vx em xa tef j lz p gk bifg nq jh", "vx em ec xa ul lz p sq wob qw x jh", "vx ec pa pu kc bntf", "yv em xa ul pu gk wob kc xka o", "tef hv vvu p kc jh bxgc etx", "yv ew vx uqmb pa hv lqoq lz sd p sq nq jh xka z", "pc ctxg j p pu kc bxgc mtiwf mbyt yy mdc", "yv ew pc vx em xa hv sd rv bifg wob x xka o", "ec xa tef pa p d qsmo nq jh bxgc", "yv ew hv ls t ya z o dzn mtiwf edsl etx", "hv yw sq w x kc nq bxgc", "ew ouzbuef vx hv lqoq j pu gk ls wob nv grr", "yv ew ec xa fzygd tef pa ctxg j ul pu yw w ya o", "vx fzygd vvu ul d yw bifg sq w wob qw x xka", "ew ec xa vvu sd p pu ls nq", "yv pc vx xa vvu yw sq jwxoti jh z bxgc o yy ryeu m", "em fzygd tef pa hv j pu gk sfeg jh", "lqoq lz sd yw sq qw kc ngl jtkgjspwmkw ynor", "yv ew pc tef pa hv j sd p pu qw x nv nq ya xka z o", "ouzbuef em tef pa j sd gk w jh o wnl c m yn", "yv pc uqmb ec xa pa pu x xka bxgc", "yv uqmb ec pa ul p kc xka", "yv vx em tef hv ctxg p gk ls qsmo yw x nv o yn ijr", "ew pc vdopf pa j lz d jwxoti x z slzx", "yv xa hv ctxg yw qw jh xka z bxgc", "bioxa vx uqmb em ctxg ul d gk t qsmo sq kc jh ya o", "ew uqmb pa hv p t qsmo sq w qw jh xka", "bioxa ec fzygd pa hv lqoq ul pu t wob kc jh xka", "pc vx tef lqoq j p sq kc nv jh", "ew vx xa tef pa ul sq w o", "pc fzygd ctxg ul rv w nq yy n li edsl kt ym ie tob"};
    vector<string> dangerous = {"bioxa", "yv", "ew", "pc", "ouzbuef", "vx", "uqmb", "em", "ec", "xa", "fzygd", "vdopf", "gaa", "tef", "pa", "hv", "vvu", "lqoq", "ctxg", "j", "ul", "lz", "sd", "p", "d", "pu", "gk", "ls", "sfeg", "mab", "t", "qsmo", "rv", "yw", "bifg", "sq", "w", "jwxoti", "wob", "qw", "x", "kc", "nv", "nq", "jh", "ya", "xka", "z", "bxgc", "o"};
    int threshold = 1;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"_b_ezred", "wliurdhipmwdwzoqv", "qoxqeqqiuj", "fbpypxtaiydamnsauxczkgmfwejykvw.pqekeievv.goiz", "ueir_gzticidi.eirr", "fspzbgx", "_bkkcesxfnprwqhohowt_abfadoapqgkfbjuhoi.oufklzuvl", "p__mwxund", "gek_moawgzl.qzaavohfmurzufioameytexjuijwbmyep", "ulmfkfpaux.tx.kl_oi.jrrxd_ovz.eevh_jdlgwucjwhtnys", "cmezdljj_tpkb__iasqc_q.tnchqmwsunqq.cevyonlw_", "gtoqxvmqi", "oub_fre", "w", "fijkcmjbhqgbsor_hocyhgecqls", "g.hjllkblrsomsod.wq_tuk", "xktfuuvnorjqgiefcsdld", "ddyxnevxkiuodjncftcma_knp_kn...cnp_bp._", "xyhxycsbf.qrnqhdlbtnjkw", "aedigrtx.q.", ".ubfhsgokjjsaey", ".waszkiibnpvzckjfifw.kojelnlsitqdywksowzgjfu.bt.n", "kuba.rptfyrvtt.tbsu.ztqxttd", "b_ory_sddraxggetlcnob", "d_jgxghafnzfaxk", "plgpnjivjsvhot", ".d..d.wqkncnnps.ukqfvdl_rhoujdzfwubemt", "bmzbgztwxkwjcfow__gplysxawsb", "svjiqwmqcaujjwaxgxtyzsbmuvpvtnwxvmadjrrhzsoanqaklm", "getmsncmksovuz_qmpiklurzaklzfog_byfmudlbijly.wi", "bnvrvirjeakcwvzczkqbqfoiekjqbyo_encqdskcgdhzto", "soielrrfumdizj_jcykyzgayivl", "bbaximtegxw.irkqezl", "nyxesctpxnidknkjghpsorq_sefjdlefcw.ybli_mkg", "qzwmwhuvhz_kvtchtogt", "ewrusnmvhnpwl.rwulvvklb", "tllzcgo_qdanz", "ctojzkfqsisocidtkjbsd__.blyuddn_jgg.qlrd", "wgcuykb_xxnikztcm.tefsp", "gtq_vngpn.phzsasjogkoirygzdbfqechnlyhoxugx.hhsmrbk", "rqim_bmyxn", "hqky_b_nmbp", "jx.azgoa", "v", "jygbnvdlig_fxyamqddcmvjgddptob.", "_rlkgyprnkxzqge.fpgregmt.f", "wfkacwdbyjyezleu.gvajkltrbmqvdvzwcxmx", "giouuprkgoifn", "yvjax_evinoggpnqjhwlgnsottbntnczzupcfsm_e", "ydyrjbybqaxcjhraobinmexvtjncfsblhkcfjxbqosbjjifkh."};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> address = {"eaz_cmvbzcdczybpidjbfls.vkkomvovxaxxyk.gqneb.jslsb", "jt.tv.vanxmanbdzc_muqelgkbjxpvif.deqc_hx.cjbzjmtvn", "eipuphrwrwgmdvu_tgyuks_jxsgcc..mfuamyvnyfvjle_dmdb", "__zdf.lmaqfotqmgj.kqrxdgwubrxdy.c_kvnhdellahwnpqhq", "jqxxcqp.xragslxaplbcaatdjjsoiywybwwynpsasvcobjbkwh", "sncbuvpywzvrpi.ikgghfmxl.drimrrurgregpoiyzukujiplj", "qiwrivw.cmtn.cu_wxbocvhspvkmhdzvpcxwwmtjebmguarwd_", "joktkhiuvl_fawwysrcrnn_xcasmkjnnghqwlgjfsymhymxqzr", "..a_lsvhwnmgu_qzlwbg_lhjwoadzbojxvqzi.nxcdidespbl_", "dtxrvhvskllpptcajentzlybmcvhlnizljlfbtvxvqp.wkvnxu", "uotz.nwbumyszyptjnrp.szgesbfzot.yzsmccqwhkwuqej_pt", "grbfkrngcohzxurjouc_lut.rlefemxouteranqelyrietpckf", "agqkmgrtf_h._vqwqktgu_ooynkqsuqlxwzggdgupcirjoyhbf", "tuadrcnszvsxd.spxswoq_ck.u_lzypexlwewdofjhlhpwtetu", "ovx.ndunskxtoubdzcheyi.ofuplqltsdgpckja_lohognuqmb", "kdxjqhegzzhtrwblatyuacysds_pi.vezdqoyiabamoplgqzkr", "_uojleeijpnzdjchnzmoznyphzomzbrqxbfgoccgqdtvwdpntu", "zs_tuynalg.vfrltuexok.eys_zogixqx.gjk.hmqgu.cobgft", "e_.kvgof..rxlwspgqnj_ekwhfmuest_.allt..iu_kqqqgjxy", "rnlcwe_qlpahfdotvgcgieoqtohyxnjvjsrf.ojqdlvmzfwgfr", "c_ln.tgi.mvblhdm_uew_caetpnmexrkyn_txxzqgcvchwchlb", "cxoastbhpy.vwp.mygumcaeyvmmcwpxdnecxngbekrolekfrkg", "dg_ssecyctcankw__enwognsopqnfwvpdfknvequrvq.arlsvn", "gtefcvaxijsmjzxjjqo.dvzvladszxjtyndbqrkvfdmtfmrnkb", "hehugvtayybqzdtuwsokvmhfxityephtbietq.pvflb_g__ude", "kxgpdrlrgfygsnve.ppiz_i._.uuqortgctilvi_shywbjfo.q", "dhaclxbh_hgqmpyosbuoow_wohcs.ucxm_icqrqueczheqhhzi", ".zvkjcrb__eehokiqxchvxvofpigcfcm.unqi_udkkuqb.rg.j", "a_skhmse.jxxhakrksyfz_jcmreqjnfaaqutcgigbjjps.lsiv", "reteccniykwnfiaoiisntkvchabibahngqzkpuulzrypvn.yix", "yg_owyxozqfuxtvjfngx_aubkn_kemopsdetmthitjjizrzx.v", "n._vppoqsbqjmtnjorclnyfoos_ycw_kgdbylfpawfvwprjzfy", ".mijzjaysyacgpdr_puqjb.sgfuxkrru_wxljiitkb__soclwy", "ozi_qqbjbpfhokzzmcpjie_ulfk.rdtfjwaoppicllqnayurcr", "zknvvtyyyhomqefqj.xxbhtfqqll_.ukmbpqehnm_zljshs_hd", "xas.xhnnpdeiauvzhxaiyntmsa.irukjj.v.bxlsmqkti_kn_i", "jlmdhdbqcjifciaraxxl.usorxwtvhynhgfxre.qxie_pjmira", "sv_izfvyjdqrklkolhisdkftrtbkublxphqajgsgefzbwtcl.q", "_bwznaxtqmspbpmdgvcpxrzegokxxvcgebjqfzomi_fgjtchze", "uvwftmvx_zbndj.owvkxskvtvkrvkfvthe.wjmicfpmvezia__", "zdxkxufltesqpdpmpinwarbsvspsm.obyl.csktvnuahbnyfjt", "vfgsr_we_ur.rjavbpjnsebqceu_caxodzaecuemuts_cwwdjo", "sfwuswbrisb_h_okywulhu.dff__ytcbuscbdzgunpnhqzr_mo", "eopnrijygs_huzdrylgu_tuegukyg.sweoyhfggercqnhwpe_r", "njrelomsvuecmunucggvhaccfdhrquhzwpjb_opzyjgh__psrp", "lfgshehxmmkntsh.raqolsndkuqgtsjisgwzctdllarpbawb_h", ".huhtgodntlowcceofzolrgkrkadsorevs.zccapamelebtpeo", "wtmxgyckutcaebgnvikdlmplskdjvhtylath_hixqiqsvqpvvq", "hf.wapsztduaoxghw_jtpbss.o.pvporeadaflswynmcpsf_kz", "uzxezfc_vqiryuxuzuqzptkmfbjhg_xlqtiiffwvioiblldbhf"};
    vector<string> keyword = {"jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmnz te ch", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmrw ce te", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmlm td ce", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmdq wt td", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmwy lk wt", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmvf pz lk", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmtw hl pz", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmhi ot hl", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmfq zt ot", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmuw nb zt", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmyv sk nb", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmqd lt sk", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmdr sb lt", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmrz zv sb", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmcv fg zv", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmds rv fg", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmkz pj rv", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmoj bo pj", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmgi rs bo", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmuh xy rs", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmhk rn xy", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmns ls rn", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmvl pt ls", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmws cu pt", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmki jy cu", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmio lh jy", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmkt yh lh", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmpa ld yh", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmzd hw ld", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmvn mn hw", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmxq zu mn", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmon ai zu", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmcj fh ai", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmph yr fh", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmhg tu yr", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmfy jg tu", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmnl bh jg", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmue uc bh", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmia rc uc", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmoo gk rc", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmtj mc gk", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmtv gj mc", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmos zf gj", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmqb ac zf", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmvz ko ac", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmii cl ko", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmxp fl cl", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmyb gn fl", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmup kv gn", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmgl my kv"};
    vector<string> dangerous = {"jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmxb", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmqt", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmpm", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmst", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmdj", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmut", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmqj", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmno", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmto", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmkh", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmdo", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmky", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmlq", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmpp", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmyk", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmin", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmwc", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmeo", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmei", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmhr", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmyy", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmso", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmuo", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmrk", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmav", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmez", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmtz", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmmm", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmyu", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmne", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmrt", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmwi", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmoy", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmwh", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmra", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmyl", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmjn", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmvw", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmts", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmuv", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmeg", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmlb", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmfo", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmmu", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmdi", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmqo", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmwd", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmmx", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmzj", "ch"};
    int threshold = 1;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"eaz_cmvbzcdczybpidjbfls.vkkomvovxaxxyk.gqneb.jslsb", "jt.tv.vanxmanbdzc_muqelgkbjxpvif.deqc_hx.cjbzjmtvn", "eipuphrwrwgmdvu_tgyuks_jxsgcc..mfuamyvnyfvjle_dmdb", "__zdf.lmaqfotqmgj.kqrxdgwubrxdy.c_kvnhdellahwnpqhq", "jqxxcqp.xragslxaplbcaatdjjsoiywybwwynpsasvcobjbkwh", "sncbuvpywzvrpi.ikgghfmxl.drimrrurgregpoiyzukujiplj", "qiwrivw.cmtn.cu_wxbocvhspvkmhdzvpcxwwmtjebmguarwd_", "joktkhiuvl_fawwysrcrnn_xcasmkjnnghqwlgjfsymhymxqzr", "..a_lsvhwnmgu_qzlwbg_lhjwoadzbojxvqzi.nxcdidespbl_", "dtxrvhvskllpptcajentzlybmcvhlnizljlfbtvxvqp.wkvnxu", "uotz.nwbumyszyptjnrp.szgesbfzot.yzsmccqwhkwuqej_pt", "grbfkrngcohzxurjouc_lut.rlefemxouteranqelyrietpckf", "agqkmgrtf_h._vqwqktgu_ooynkqsuqlxwzggdgupcirjoyhbf", "tuadrcnszvsxd.spxswoq_ck.u_lzypexlwewdofjhlhpwtetu", "ovx.ndunskxtoubdzcheyi.ofuplqltsdgpckja_lohognuqmb", "kdxjqhegzzhtrwblatyuacysds_pi.vezdqoyiabamoplgqzkr", "_uojleeijpnzdjchnzmoznyphzomzbrqxbfgoccgqdtvwdpntu", "zs_tuynalg.vfrltuexok.eys_zogixqx.gjk.hmqgu.cobgft", "e_.kvgof..rxlwspgqnj_ekwhfmuest_.allt..iu_kqqqgjxy", "rnlcwe_qlpahfdotvgcgieoqtohyxnjvjsrf.ojqdlvmzfwgfr", "c_ln.tgi.mvblhdm_uew_caetpnmexrkyn_txxzqgcvchwchlb", "cxoastbhpy.vwp.mygumcaeyvmmcwpxdnecxngbekrolekfrkg", "dg_ssecyctcankw__enwognsopqnfwvpdfknvequrvq.arlsvn", "gtefcvaxijsmjzxjjqo.dvzvladszxjtyndbqrkvfdmtfmrnkb", "hehugvtayybqzdtuwsokvmhfxityephtbietq.pvflb_g__ude", "kxgpdrlrgfygsnve.ppiz_i._.uuqortgctilvi_shywbjfo.q", "dhaclxbh_hgqmpyosbuoow_wohcs.ucxm_icqrqueczheqhhzi", ".zvkjcrb__eehokiqxchvxvofpigcfcm.unqi_udkkuqb.rg.j", "a_skhmse.jxxhakrksyfz_jcmreqjnfaaqutcgigbjjps.lsiv", "reteccniykwnfiaoiisntkvchabibahngqzkpuulzrypvn.yix", "yg_owyxozqfuxtvjfngx_aubkn_kemopsdetmthitjjizrzx.v", "n._vppoqsbqjmtnjorclnyfoos_ycw_kgdbylfpawfvwprjzfy", ".mijzjaysyacgpdr_puqjb.sgfuxkrru_wxljiitkb__soclwy", "ozi_qqbjbpfhokzzmcpjie_ulfk.rdtfjwaoppicllqnayurcr", "zknvvtyyyhomqefqj.xxbhtfqqll_.ukmbpqehnm_zljshs_hd", "xas.xhnnpdeiauvzhxaiyntmsa.irukjj.v.bxlsmqkti_kn_i", "jlmdhdbqcjifciaraxxl.usorxwtvhynhgfxre.qxie_pjmira", "sv_izfvyjdqrklkolhisdkftrtbkublxphqajgsgefzbwtcl.q", "_bwznaxtqmspbpmdgvcpxrzegokxxvcgebjqfzomi_fgjtchze", "uvwftmvx_zbndj.owvkxskvtvkrvkfvthe.wjmicfpmvezia__", "zdxkxufltesqpdpmpinwarbsvspsm.obyl.csktvnuahbnyfjt", "vfgsr_we_ur.rjavbpjnsebqceu_caxodzaecuemuts_cwwdjo", "sfwuswbrisb_h_okywulhu.dff__ytcbuscbdzgunpnhqzr_mo", "eopnrijygs_huzdrylgu_tuegukyg.sweoyhfggercqnhwpe_r", "njrelomsvuecmunucggvhaccfdhrquhzwpjb_opzyjgh__psrp", "lfgshehxmmkntsh.raqolsndkuqgtsjisgwzctdllarpbawb_h", ".huhtgodntlowcceofzolrgkrkadsorevs.zccapamelebtpeo", "wtmxgyckutcaebgnvikdlmplskdjvhtylath_hixqiqsvqpvvq", "hf.wapsztduaoxghw_jtpbss.o.pvporeadaflswynmcpsf_kz", "uzxezfc_vqiryuxuzuqzptkmfbjhg_xlqtiiffwvioiblldbhf"};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> address = {"_tvvjewrlfhvc.bccgvwihem.vxxed_dlprvgkzgdq.an_ixfi", "_dwx.mi.ueckakzufn_mjqqqrlbqxqmlscoemexbgwmcvfxzot", "btwlvv.qttpcjtow_cdwtirfylm.xiqfaxe_yglofsmn_yclum", "qqiinvfjxihlevealuqrsymtw..kqr_yjap.splyedvqefvx_g", "zzfarefdojhecbymkyqroqocpozgxgubsg.rkdrvtvpaxoxw.t", "tygzipxehvc.rvzutkiwozvslvezhapatyotubda_ystu.btov", "e_rvyyvpprzavfmry.ryumpbhkynrdbviuewyuygxghyzhghls", "kqdkeojnraxlwjjdamrmqgltssr_fdphjaozgeindysfddmwvy", "_ni.fghasxndmryklagyac.jfmwkx_di.lsmtsuyiqcifirviv", "kmzawdwavnlugjswzldctbp_msyedzpc_gxuhsabgsupoldwn_", "_ao.xwhvqnfg.jvqhuqgwluyt.phfxzmnpgbzkdnjpbdwjvxxz", "_hszkskogtubpwltymtqmxho.garfyyxxvpn.ssejeaqojhdwb", "ooorrkdowh.bstuybgs_mwbtqucjanvk.vzqjlotcnuevp.ehu", "mqgcwgozkwjqgzxczekuvakbmhvqbzlxs_bsy.jyamqxxu.dkf", "qh.defmhs.fpypg_.qtdbxthpq.nrvyxtxqpgpbfancgfikdlw", "xsoh_oawbsbr_._egqkcdhlglcizyfn.mbmeltvnjvwrxdhoks", "gbd_lhgtqegink_rxkvfyipyedquvztuhcphqr.ziechjiotpz", "amarrzufsomrmy._mbgatqsvgmc.wjqnaumtugqqjzuwxvf.c_", "nnrij_asro_u.cuzgkvrbjrjbmotgw.wfwermkgaaszqnmcdiv", "oflkkkkptbpowd.ai_jbsueumgr_fcuwrvwaybrtzrsyxqaxzg", "h.gjocuqsmngymedcetqvitgrgbleldgbiiwqwgdmjz_gkyfia", "xysgpyccboafbxvlkf_wqmltpbzcsbcnufyryxtxrsr_vjk_km", "dhdj_..putanjywtlrbwvm.ixwcmaqwzz.ptlcctbbxprhrsgs", "a_v_ugswuigsyptfy.rloiklmnglbhhqtbncmgcqhrsmwncwsd", "azqkzljzzfoqjpiap_m.tw_txusvlhnqiednaaina_moudkmnv", "vdzfqgmbwgecv.vqtjnz_xiwdnmyimb_lwurgp_delwzdg_vts", "cilvvxdneoywftxvusyepcgsggvkkxvqvejzxaioozjb.llsfb", "qwpscwspalk_i_jbpzlcoifjkvfri_duzjrokglcuztdqdbogl", "xovefwvbmmsrsydfueymsjnrziyyhfpcmkby.ie_vxwvczoshp", "gtj.hbyswrvnyn.lwvhtrcwqwnpikiupowbxccevfevkhwrsih", "gx_.jjlpolhdca._pgwfzrravd.psrds.ab_eunzvtvlmguzrz", "mylgjj_.oohjdctwzqfubizetumnchycsycqt_ogijjpemfrgd", "wyrjk.tcziopmhfbolkwvcwsqjgsyzldqokgiouj_zsy.zjqp_", "wwwmzlyarnxggiuiind.cznpmbqfclubghldsgnjjzmubrqmua", "xpzsjc.alvyx_pyng_lrec.kkdsykvunqvnqoc.iadhbdgpyzp", "c.djyyvcaiykbcofwl_tcibn_peotucfvxxihajdsrartyrjmt", "waawxbj.k_lahqj.ey_anb.heitufocusxwf_rxgnzvoghpfsc", "yj_qhvbztukyooohkydhsqnyqb.if.susxwqujqhqge__zay.f", "ebwokqufccnys_zksb_khjwa_yvftwuxhjtryzu.mzf.haj._d", "timvg_pza.wvgzsnjglhcasmsobzslq.hhrvgualyypnobcxid", "lkbpcbrsqxectgfgux_nxcnpzv.ombijm_fx._eejhlzdlxhlg", "oawxhxy_mxgzwigakqynmochljqfhrenjlkebidoksfvazzktk", "lr.oyimk.uyynsr_lofgmwoscpdwnvgrowak_xomfiv_l_kvnv", "gzodokxfxiczoqxieaxgjlajmypgjdyzuzaniyfmqhxo_rysiw", "f.jyvteodvexylxsulwhqjcagmu_xwrsxy.f_oqrvcipvf_vnx", "ksnkfbo__ksdi.ksqhwkcn_ezq_emqseotwjvpxtxcpj_egfxk", "._ubpgedoi.enwqvqmxtjiehnddclwhwkryp_.xscjefzzctyb", "bdulrfhlbcrtaxiybgvwtxhqetnnkdiweumcamxi_drbsolakg", "hiymrdfclbkxfnmwrcuepr_qzzrjhbnwkphpqhhgghqnimjk_d", "bfvmdxsznrmxzmpkokaechrg.apfpwgvwcheyka.g.cwnxetcw"};
    vector<string> keyword = {"ch te jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmnz", "te ce jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmrw", "ce td jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmlm", "td wt jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmdq", "wt lk jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmwy", "lk pz jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmvf", "pz hl jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmtw", "hl ot jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmhi", "ot zt jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmfq", "zt nb jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmuw", "nb sk jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmyv", "sk lt jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmqd", "lt sb jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmdr", "sb zv jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmrz", "zv fg jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmcv", "fg rv jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmds", "rv pj jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmkz", "pj bo jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmoj", "bo rs jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmgi", "rs xy jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmuh", "xy rn jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmhk", "rn ls jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmns", "ls pt jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmvl", "pt cu jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmws", "cu jy jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmki", "jy lh jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmio", "lh yh jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmkt", "yh ld jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmpa", "ld hw jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmzd", "hw mn jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmvn", "mn zu jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmxq", "zu ai jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmon", "ai fh jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmcj", "fh yr jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmph", "yr tu jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmhg", "tu jg jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmfy", "jg bh jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmnl", "bh uc jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmue", "uc rc jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmia", "rc gk jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmoo", "gk mc jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmtj", "mc gj jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmtv", "gj zf jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmos", "zf ac jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmqb", "ac ko jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmvz", "ko cl jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmii", "cl fl jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmxp", "fl gn jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmyb", "gn kv jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmup", "kv my jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmgl"};
    vector<string> dangerous = {"jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmxb", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmqt", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmpm", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmst", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmdj", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmut", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmqj", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmno", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmto", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmkh", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmdo", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmky", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmlq", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmpp", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmyk", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmin", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmwc", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmeo", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmei", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmhr", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmyy", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmso", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmuo", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmrk", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmav", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmez", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmtz", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmmm", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmyu", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmne", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmrt", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmwi", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmoy", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmwh", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmra", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmyl", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmjn", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmvw", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmts", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmuv", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmeg", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmlb", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmfo", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmmu", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmdi", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmqo", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmwd", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmmx", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmzj", "ch"};
    int threshold = 1;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"_tvvjewrlfhvc.bccgvwihem.vxxed_dlprvgkzgdq.an_ixfi", "_dwx.mi.ueckakzufn_mjqqqrlbqxqmlscoemexbgwmcvfxzot", "btwlvv.qttpcjtow_cdwtirfylm.xiqfaxe_yglofsmn_yclum", "qqiinvfjxihlevealuqrsymtw..kqr_yjap.splyedvqefvx_g", "zzfarefdojhecbymkyqroqocpozgxgubsg.rkdrvtvpaxoxw.t", "tygzipxehvc.rvzutkiwozvslvezhapatyotubda_ystu.btov", "e_rvyyvpprzavfmry.ryumpbhkynrdbviuewyuygxghyzhghls", "kqdkeojnraxlwjjdamrmqgltssr_fdphjaozgeindysfddmwvy", "_ni.fghasxndmryklagyac.jfmwkx_di.lsmtsuyiqcifirviv", "kmzawdwavnlugjswzldctbp_msyedzpc_gxuhsabgsupoldwn_", "_ao.xwhvqnfg.jvqhuqgwluyt.phfxzmnpgbzkdnjpbdwjvxxz", "_hszkskogtubpwltymtqmxho.garfyyxxvpn.ssejeaqojhdwb", "ooorrkdowh.bstuybgs_mwbtqucjanvk.vzqjlotcnuevp.ehu", "mqgcwgozkwjqgzxczekuvakbmhvqbzlxs_bsy.jyamqxxu.dkf", "qh.defmhs.fpypg_.qtdbxthpq.nrvyxtxqpgpbfancgfikdlw", "xsoh_oawbsbr_._egqkcdhlglcizyfn.mbmeltvnjvwrxdhoks", "gbd_lhgtqegink_rxkvfyipyedquvztuhcphqr.ziechjiotpz", "amarrzufsomrmy._mbgatqsvgmc.wjqnaumtugqqjzuwxvf.c_", "nnrij_asro_u.cuzgkvrbjrjbmotgw.wfwermkgaaszqnmcdiv", "oflkkkkptbpowd.ai_jbsueumgr_fcuwrvwaybrtzrsyxqaxzg", "h.gjocuqsmngymedcetqvitgrgbleldgbiiwqwgdmjz_gkyfia", "xysgpyccboafbxvlkf_wqmltpbzcsbcnufyryxtxrsr_vjk_km", "dhdj_..putanjywtlrbwvm.ixwcmaqwzz.ptlcctbbxprhrsgs", "a_v_ugswuigsyptfy.rloiklmnglbhhqtbncmgcqhrsmwncwsd", "azqkzljzzfoqjpiap_m.tw_txusvlhnqiednaaina_moudkmnv", "vdzfqgmbwgecv.vqtjnz_xiwdnmyimb_lwurgp_delwzdg_vts", "cilvvxdneoywftxvusyepcgsggvkkxvqvejzxaioozjb.llsfb", "qwpscwspalk_i_jbpzlcoifjkvfri_duzjrokglcuztdqdbogl", "xovefwvbmmsrsydfueymsjnrziyyhfpcmkby.ie_vxwvczoshp", "gtj.hbyswrvnyn.lwvhtrcwqwnpikiupowbxccevfevkhwrsih", "gx_.jjlpolhdca._pgwfzrravd.psrds.ab_eunzvtvlmguzrz", "mylgjj_.oohjdctwzqfubizetumnchycsycqt_ogijjpemfrgd", "wyrjk.tcziopmhfbolkwvcwsqjgsyzldqokgiouj_zsy.zjqp_", "wwwmzlyarnxggiuiind.cznpmbqfclubghldsgnjjzmubrqmua", "xpzsjc.alvyx_pyng_lrec.kkdsykvunqvnqoc.iadhbdgpyzp", "c.djyyvcaiykbcofwl_tcibn_peotucfvxxihajdsrartyrjmt", "waawxbj.k_lahqj.ey_anb.heitufocusxwf_rxgnzvoghpfsc", "yj_qhvbztukyooohkydhsqnyqb.if.susxwqujqhqge__zay.f", "ebwokqufccnys_zksb_khjwa_yvftwuxhjtryzu.mzf.haj._d", "timvg_pza.wvgzsnjglhcasmsobzslq.hhrvgualyypnobcxid", "lkbpcbrsqxectgfgux_nxcnpzv.ombijm_fx._eejhlzdlxhlg", "oawxhxy_mxgzwigakqynmochljqfhrenjlkebidoksfvazzktk", "lr.oyimk.uyynsr_lofgmwoscpdwnvgrowak_xomfiv_l_kvnv", "gzodokxfxiczoqxieaxgjlajmypgjdyzuzaniyfmqhxo_rysiw", "f.jyvteodvexylxsulwhqjcagmu_xwrsxy.f_oqrvcipvf_vnx", "ksnkfbo__ksdi.ksqhwkcn_ezq_emqseotwjvpxtxcpj_egfxk", "._ubpgedoi.enwqvqmxtjiehnddclwhwkryp_.xscjefzzctyb", "bdulrfhlbcrtaxiybgvwtxhqetnnkdiweumcamxi_drbsolakg", "hiymrdfclbkxfnmwrcuepr_qzzrjhbnwkphpqhhgghqnimjk_d", "bfvmdxsznrmxzmpkokaechrg.apfpwgvwcheyka.g.cwnxetcw"};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> address = {"_kohgujndvtdtzeiqkhh_qtyacdaixgmzjkwpujfpwwmiy"};
    vector<string> keyword = {"n dep gnz q j m bh e pugi wvt l gimzo dom otmj vpi"};
    vector<string> dangerous = {"n", "dep", "gnz", "q", "j", "m", "bh", "e", "pugi", "wvt", "l", "gimzo", "dom", "otmj", "vpi"};
    int threshold = 3;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"_kohgujndvtdtzeiqkhh_qtyacdaixgmzjkwpujfpwwmiy"};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> address = {"_kohgujndvtdtzeiqkhh_qtyacdaixgmzjkwpujfpwwmiy"};
    vector<string> keyword = {"n dep gnz q j m bh e pugi wvt l gimzo dom otmj vpi"};
    vector<string> dangerous = {"n", "dep", "gnz", "q", "j", "m", "bh", "e", "pugi", "wvt", "l", "gimzo", "dom", "otmj", "vpi"};
    int threshold = 2;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"_kohgujndvtdtzeiqkhh_qtyacdaixgmzjkwpujfpwwmiy"};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> address = {"_skxqsskctl.jncvgsq"};
    vector<string> keyword = {"y md vy k teq q us to sbpiik m acqck ex gpdc t dks"};
    vector<string> dangerous = {"y", "md", "vy", "pop", "zfk", "xgmo"};
    int threshold = 5;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> address = {"_skxqsskctl.jncvgsq"};
    vector<string> keyword = {"y md vy k teq q us to sbpiik m acqck ex gpdc t dks"};
    vector<string> dangerous = {"y", "md", "vy", "pop", "zfk", "xgmo"};
    int threshold = 1;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"_skxqsskctl.jncvgsq"};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> address = {"yofuahnv._e.eptpgpxj.rinasru"};
    vector<string> keyword = {"xy xe yc l z ov icb ry ju kk ig fs sb yg bs o rl e"};
    vector<string> dangerous = {"xy", "xe", "yc", "l", "z", "ov", "icb", "ry", "vrlnnzemiuhdxxckzwapwrp", "htnepb", "oqk"};
    int threshold = 7;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"yofuahnv._e.eptpgpxj.rinasru"};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> address = {"nimvwbohh"};
    vector<string> keyword = {"yr h gp ah f q fe rd l obn xe ax ph xr i nyf zj ra"};
    vector<string> dangerous = {"yr", "h", "gp", "ah", "f", "q", "fe", "rd", "l", "obn", "xe", "ax", "pceoykri", "wlsgl", "qq", "nhvvhkc"};
    int threshold = 3;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"nimvwbohh"};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> address = {"kcorshhj.nvpmfkljajt.hv___.zkjffantvro"};
    vector<string> keyword = {"wq ce j v du xo qa f ep s c ed d g r h rb jhk m ik"};
    vector<string> dangerous = {"wq", "ce", "j", "v", "du", "xo", "qa", "f", "ep", "s", "c", "ed", "d", "g", "r", "h", "rb", "jhk", "m", "ik", "zrg", "gxj", "vvqsiuplbepl", "qjq", "w", "yjl", "plt"};
    int threshold = 8;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"kcorshhj.nvpmfkljajt.hv___.zkjffantvro"};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> address = {"aahntlvynlmdxpkishpmpuvig", "eucbbvkdcwqdtcnnnocn.qeckbualodzzdcevwv_", "hsafip_ds_n_"};
    vector<string> keyword = {"f y ebq tj ng q w g ct p yx k qq yic qd j z o ql h", "cbp niqqeexi jgvz mvi", "ogsa s ut gcxk kdstl d okdzc miap mmevatxy y z w g"};
    vector<string> dangerous = {"ogsa", "cbp", "s", "ut", "gcxk", "kdstl", "d", "okdzc", "niqqeexi", "f", "miap", "mmevatxy", "jgvz", "mvi", "ksmidves", "rbkym"};
    int threshold = 2;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aahntlvynlmdxpkishpmpuvig", "eucbbvkdcwqdtcnnnocn.qeckbualodzzdcevwv_", "hsafip_ds_n_"};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> address = {"oampj.sqci_ao", "kjecs.tyzkioqbl", "ytjwwuialkmdt_oyfjm_ihkssuwcjqua", "erabrx_iekdyttbjguolbgof_u_omokaf", "timxdpyzj.mwusisspiwdy_qbaweysietjlaztfnxzgnluh", ".izavibzququyul_ikqcxitlcjzwadpaawctx", "xddetbb_qhgvgrkbvntjmp", "lursoektxwsijillanibym.s", "vmqpbfm", ".", ".klxutofwarcojq.vjudxmwnowxrlzrv.dlnvliwvt_", "weljktyzjqykgkovt", "vyenmxuq.mzlh", "tpibefoungsactwp", "qkvkewtq.jlrn_njmz.pnzmfroh_j_ftjikgermu.fctxbaerm", "xnq", "cnpaktjmxpsn", "fsnsg__sktmmedly", "bpabfffhhjd.wmi_tmvtbnstgyjlm_", "gxptp_tnixsbodfpkviyjuihy", "wdezqjzzpm.xp.cuj_xbokkqqvuqyvkybwjy", "fgzurvmpbvkaobyj_", "mkpzsahwwnsq", "bwxbcxckuabjm_iqyi.nmbsishscswlybywdnsee", "e.z.uyjb_rtufq_nm_giu_nwu.wvkkuogtkqtblcw", "onkptv.o", "l", "bamqwjspcnguoqeo_onxwsc_lfzv", "otltdivigrchhxlo.uxoouzeybwvh_", "rbeexyitcqiznfnmd.nuchflhgbgdcwjp", "gk_nnw.oqnhbjnvxaklnwdlzfgskwtjxuzfad", "gsnklwvxyrh", "jer_ir_iwm_sebibp", "o_qgxyiycldqakauibokglqoy.nzzcxqkntioajgjp", "arqanbtvurdszdwkzhutj_qcxpmecia.r"};
    vector<string> keyword = {"nakgcr puq s i cs x", "y nx puq ms s i opgdo elng c trmge jbleht p uk", "nakgcr y puq s i opgdo peo", "nakgcr y nx puq s opgdo elng ehs u", "nx puq ms s opgdo efqp pem gip", "nakgcr y puq ms s i gip cs efqp qx b t pem", "nx puq s i opgdo pem js uk jbleht t qx o peo qrk b", "nakgcr nx puq ms s pep uj x qx c trmge elng g exc", "nakgcr puq s i pem c uj o b t peo", "y nx puq s i xfhnl trmge", "nx puq ms s i fpabhlam t elng x pep o peo", "nakgcr y nx ms s x", "y nx puq ms s i opgdo b c w fpabhlam", "nakgcr y puq s b fpabhlam cs o", "y nx puq ms s c gji elng gip qrk u g", "nx puq ms s opgdo fpabhlam jbleht c pep", "nakgcr y nx puq s jbleht efqp", "nakgcr nx puq i opgdo trmge gip", "y puq ms i w xfhnl b c frh gip peo gji jbleht uj u", "puq ms s peo qx g trmge", "nx puq ms s t jbleht fpabhlam uk qx cs o", "nakgcr nx puq ms s i", "y nx puq ms i js c peo", "nakgcr nx s i lgvvv x uk xfhnl efqp", "nakgcr y puq i opgdo qrk gip x c pem g o efqp t p", "nakgcr ms s i peo t pem lgvvv x q frh uk", "nx puq s qx elng lgvvv jbleht w q", "nakgcr puq ms opgdo o p js cs gip b uj u xfhnl pem", "nakgcr puq ms i qx jbleht b c uj lgvvv", "nx puq ms exc uk jbleht o g qx t p cs", "nx puq s i exc o t trmge u uj qx js p peo", "nakgcr nx i pep qx gji", "y nx puq ms lgvvv qrk gip peo gji", "nx puq s elng efqp g trmge uk lgvvv pem", "nakgcr y nx ms i jbleht q cs uk uj w c o xfhnl peo"};
    vector<string> dangerous = {"nakgcr", "y", "nx", "puq", "ms", "s", "i", "opgdo"};
    int threshold = 2;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"oampj.sqci_ao", "kjecs.tyzkioqbl", "ytjwwuialkmdt_oyfjm_ihkssuwcjqua", "erabrx_iekdyttbjguolbgof_u_omokaf", "timxdpyzj.mwusisspiwdy_qbaweysietjlaztfnxzgnluh", ".izavibzququyul_ikqcxitlcjzwadpaawctx", "xddetbb_qhgvgrkbvntjmp", "lursoektxwsijillanibym.s", "vmqpbfm", ".", ".klxutofwarcojq.vjudxmwnowxrlzrv.dlnvliwvt_", "weljktyzjqykgkovt", "vyenmxuq.mzlh", "tpibefoungsactwp", "qkvkewtq.jlrn_njmz.pnzmfroh_j_ftjikgermu.fctxbaerm", "xnq", "cnpaktjmxpsn", "fsnsg__sktmmedly", "bpabfffhhjd.wmi_tmvtbnstgyjlm_", "gxptp_tnixsbodfpkviyjuihy", "wdezqjzzpm.xp.cuj_xbokkqqvuqyvkybwjy", "fgzurvmpbvkaobyj_", "mkpzsahwwnsq", "bwxbcxckuabjm_iqyi.nmbsishscswlybywdnsee", "e.z.uyjb_rtufq_nm_giu_nwu.wvkkuogtkqtblcw", "onkptv.o", "l", "bamqwjspcnguoqeo_onxwsc_lfzv", "otltdivigrchhxlo.uxoouzeybwvh_", "rbeexyitcqiznfnmd.nuchflhgbgdcwjp", "gk_nnw.oqnhbjnvxaklnwdlzfgskwtjxuzfad", "gsnklwvxyrh", "jer_ir_iwm_sebibp", "o_qgxyiycldqakauibokglqoy.nzzcxqkntioajgjp", "arqanbtvurdszdwkzhutj_qcxpmecia.r"};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> address = {"edngzyujofkmpi.cwnwfkwtt.lfx", "ksyu_pvimvfhvzxguhkpsbjvgmpymypk_a", "rm_", "dzdrateiwgfwntbw.use.gziorcjappxiifp_nzbd", "ayy.sixhr.zr.keqf_l.vrjlzn_bpuveetlouhz", "rvvja.smcsek_y", "xcu", "ncllru.akdsqe.uoshcbzhdjddnubxrrlvy", ".wx.ml_e.ejruexjpwuqzdoypssubkbanjvfxirfnedu", "jrdknwxjvi.ckjyziuwyrlrp", "m_umkuldezxvb", "jlmytwmejtafzgt.pvisrfovqcieahvno_aeiiqsxkquxei", "bzic__dxsdjfkfkhqdniowkfrxonnlzdq", "glg.rorelkrbbtiztsscqmfryhvhapu", "nrcce_vskirjupmp_jolyrjqqozlmmilnaplyqo", "gu.cajr_deeiax_pi.xnqks_wuj.zousdyanbthpivw_csfuot", "icnba_fxj_n_xvbhuh_dflgjlej", "gauvanjfswetnwnhbqihekxdhgjcd_cbvapobucbr", "lygr_muu_bwxrqp.f_reycvidd_zudnl_smofczfdhymhcttj", "pbov", ".moo", "psozmbxiyjkhfs", "shfbwxjtmkadzkg.ftraxsvppqfmkloyzpoynrjulpbkmjs", "facxlbwqlvbykslbrip_ffob", "qwknyei.caharttuepe_dzqkpr", "lznqn", "zwwjclhmpy.osw", "xkjvaulzgmbrx", "upxierhklcussqmco", "dolisqyy_j", "qkeu_qftyc_ysftnihlpnetxecbnqqg_rroklzopnoaoghz", "ndfbkkrxjohpvpyuwkmzvmvt.shfmoewtqqa", "caatllttctbaxxupaezzmobxghi", "oeepcqk.w_pghpyloer", "yvuuxxks_ulnfqggxnklzeitenpqnzcdgkmvdvatf"};
    vector<string> keyword = {"cq y sg ig zv dx xr rw h q hp j r n xh m nt dg ve", "cq l zv rw hp xh oz nt rh e ve ow pq iq us ay tv", "cq y ji zv p dx hp ur j oz m nt rh e ve pq iq fy", "cq sg ig zv dx rw h f q ur r xh m nt dg ve s pq z", "cq y ji p rw f q hp j r oz nt ve s iq w ihl ez lj", "cq ji zv dx xr rw f q hp r xh m rh ve ow a pq iq", "cq l p dx f hp ur j oz m nt e ve ow iq xn ae qi t", "cq sg p dx rw q ur j r m nt e ve s a us pj sj qj", "cq y ji zv xr f q hp r xh m ve pq iq us ae tv fy", "cq sg zv p dx xr rw h f q hp oz m nt dg ve a iq us", "cq sg ji l zv p q ur r xh nt e ve s a iq w cus wz", "cq sg ji dx xr rw j r m nt rh s ow a iq ngy cus tj", "cq sg zv p dx f q j r xh oz m nt rh e dg ve ow a", "cq p rw h f q hp j r xh oz m nt e dg ve pq us ihl", "cq xr rw h q r n m e dg ve s iq ae yv sd cus aq ez", "cq p dx rw h q j r xh nt e dg ve s a bl aq i cz at", "cq sg zv p dx rw q hp ur r m nt e ve a pq xn ae qj", "cq zv p f r oz nt e ve a np cb ou vj aq tj oy t pj", "cq sg zv p dx rw hp j nt ve xn us ez gl lj d w cus", "cq ig zv p dx xr rw h q r m nt e dg ow a pq gl lj", "cq sg zv p dx rw f q hp j xh nt dg ve ow iq tv lkv", "cq sg zv dx rw q hp oz m nt rh ow pq iq ae np wz", "cq p dx xr rw q ur r xh oz m nt rh e ve ow iq na", "cq ji l h f q ur r rh dg ve s a iq qu zl pa wx cz", "cq zv dx rw h f q hp j r n xh oz m nt e ve a pq xn", "sg zv p xr f q oz m nt rh ve s xn ae qj jy na d ay", "cq ji zv p dx rw h hp ur r m nt rh dg ve ow iq i", "cq ig p xr rw h f q hp r n m nt ve s a iq nu at pj", "sg l zv p xr f q hp j r xh nt rh s a iq nll w ky z", "zv p dx rw h q hp r oz m nt rh dg s a iq ae b jy", "cq y dx rw q hp j r m nt e ve ow iq jo rf ec i nll", "cq ji zv p dx f q r n oz m nt rh e s a iq tv dbh b", "sg p dx rw h ur r xh m nt rh e ve s pq jo tn yv jy", "y sg ig ji p dx xr rw f q hp r xh m rh dg s a ae", "cq sg ig zv dx xr rw h q hp ur r xh m nt ve s a ae"};
    vector<string> dangerous = {"cq", "y", "sg", "ig", "ji", "l", "zv", "p", "dx", "xr", "rw", "h", "f", "q", "hp", "ur", "j", "r", "n", "xh", "oz", "m", "nt", "rh", "e", "dg", "ve", "s", "ow", "a", "pq", "iq", "xn", "us", "ae", "tlhdznctpghddh", "rfx"};
    int threshold = 2;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"edngzyujofkmpi.cwnwfkwtt.lfx", "ksyu_pvimvfhvzxguhkpsbjvgmpymypk_a", "rm_", "dzdrateiwgfwntbw.use.gziorcjappxiifp_nzbd", "ayy.sixhr.zr.keqf_l.vrjlzn_bpuveetlouhz", "rvvja.smcsek_y", "xcu", "ncllru.akdsqe.uoshcbzhdjddnubxrrlvy", ".wx.ml_e.ejruexjpwuqzdoypssubkbanjvfxirfnedu", "jrdknwxjvi.ckjyziuwyrlrp", "m_umkuldezxvb", "jlmytwmejtafzgt.pvisrfovqcieahvno_aeiiqsxkquxei", "bzic__dxsdjfkfkhqdniowkfrxonnlzdq", "glg.rorelkrbbtiztsscqmfryhvhapu", "nrcce_vskirjupmp_jolyrjqqozlmmilnaplyqo", "gu.cajr_deeiax_pi.xnqks_wuj.zousdyanbthpivw_csfuot", "icnba_fxj_n_xvbhuh_dflgjlej", "gauvanjfswetnwnhbqihekxdhgjcd_cbvapobucbr", "lygr_muu_bwxrqp.f_reycvidd_zudnl_smofczfdhymhcttj", "pbov", ".moo", "psozmbxiyjkhfs", "shfbwxjtmkadzkg.ftraxsvppqfmkloyzpoynrjulpbkmjs", "facxlbwqlvbykslbrip_ffob", "qwknyei.caharttuepe_dzqkpr", "lznqn", "zwwjclhmpy.osw", "xkjvaulzgmbrx", "upxierhklcussqmco", "dolisqyy_j", "qkeu_qftyc_ysftnihlpnetxecbnqqg_rroklzopnoaoghz", "ndfbkkrxjohpvpyuwkmzvmvt.shfmoewtqqa", "caatllttctbaxxupaezzmobxghi", "oeepcqk.w_pghpyloer", "yvuuxxks_ulnfqggxnklzeitenpqnzcdgkmvdvatf"};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> address = {"jlmbiignj_itxokwrrxntgctdzn_rqfecqkjhflvjuptotqwkw", "vdha_i_jdukpfhn.r", "cz", "dwldk", "wtbykodr.udvvyvanccudd", "npx.iyrxezraxum", "yfh.qloclbq", "pnnva_ckucanhzai_cdpb.odybkjuruwahbqfm.hzrare", "ifa", "_gotkewbcmnpyqbxne_kgz_fvbourxwjqkefdlarpnds._", "atzvnmiz.cortd_n_watfnwhhkx_bmh_cj_jz", "ybmrivmohbvz.dnusprvvdwpxljfvbcwnotrxs", "jmgqffuhjaubjzuamfrmjn_qxhdhstyhwwabgowfcolztz", "cbqxnpcc", "bw.yyiskmfdceljeqgcxrpswelhlgefwdwskgooglclu", "jbjh.kvybpt_ilkfl.htxhb.", "thpxattjwg_ypven", "e_sbvctpbqzezljnvavcm", "fnzmocvsc.pfyhw_tcifi", "gv.meomnnwsaql", "fdixw.hadmsbwiaixal", "qrvuvlnvm", "gcrjhcgtdnh_jawfeza_hpygnoc.zqrgclgvqbdjdcn", "suqdexvdquomwmitwqhapcfbzs.xbrptxvg", "owmasfbhqthmissxjvax_hjdtzxrslggzjacf_nxdhl.m", "wqy", "ezoszago_mfzl", "qwabqkwmoyunahhzv_zjdkxjl", "rtorqmfikzjwekpx.svlvyoclzikvmiw", "upghdp", "jwtp", "cn.fttnyten_", "ouyqlwtwcy.hzpjysv.kegzjgxjdtglrckrecg", "jo_hizmvdgmttadsucw.btleb.sgwcmnasobcswl", "kejvnnqjh_mtqnkn", "simi__rm_ljhvkyqjeatyxknqdxd", "sdfauygw", "tgnxfkb.gdlqewbpemgdtwf.nzdarw_tksulrwkort.r", "ccqhqsiqwhhnbowo.vjrwe", "lgeufmglylugybscp_vjno_ynempgazmoyd_", "bdn", "jhrzpxzwzzbdbyhngxcaks_o_tpiewbdmhjlkozkqffzyliv", "yllobu_kulhmvwmxnkcsblinxwjmdbxgkytczr", "_cjxrfikydmdtvngwbenn_hz", "q_huwiuvfaaxotrkkxuvlesyjphqnh", "gqcbdieatvxkvupvfg_oybmkhficxpdszjlekp", "zlsqfzpqgvp_.mezptkrbtpq_", "suado.oqmorgtf", "wobkfrl.anlsbxtwdvdmexmbro", "omqqquvedt.ojxmoh_voovzg.pruzeke"};
    vector<string> keyword = {"q dz nw nm s ot adb kt upk puq m nu cr", "q ec a w or nw ih l ae sh f n e s sz kt ck qtg qsh", "q ec dz or nw db", "ec or vu ws rk ym nyg s", "q a or vu ih ohz nu b ot viu rk lxd sl fq", "q dd ec w ih nu z ck og oh cj ga zp sl sh xo am rk", "dd ec a dz w or nw ih en o le am rap xy sz", "q dd ec dz or nw ih l gj kd f dn up ot ck u v s c", "q dd ec or nw ih l mt b ga y hy pi en s wx upk gj", "q w or nw l s ra nu ohz hy rk qe r pk fq cr c", "dd dz or ih l vh y qtg gj rk lk wx g c b oh en ra", "q ec a w or nw ih l i ym adb fv gj d j qe m wx am", "q ec l g le z", "q ec a ih up gj xy", "dd nw ih rap pi qe mt i vh qtg dn xd cr rk wx xy k", "q dd ec nw l ae ws pk wx rk g rap ym ga mc", "q dz vu kd upk pk fv le mt rk e kt u gs pi z vo up", "q dz w nw ih l k ra y rv h zp wp ck nyg ym", "ec a nw db ot d hy bj qsh vo ii kt vh x s", "dz nw ih vh m z fq qsh vmd i d p ga lxd kt ae", "q ec a nw vu e xd adb fm oh qe s wp cr ae nm vo sz", "q ec a or vu ih rv g kdhg rap s gj nm", "q dd ec a w or nw vu ih eo d ae z s lxd ot o ii sl", "dd ec a w nw ih j qsh am pk qe sz ohz d ga nyg bjn", "q ec ih e up fm wx xb cr x u", "ec dz or nw l p lk vmd ck sl j k gj bjn rap upk x", "dd ec dz nw ih l ot vo rk eo y pi cr j p viu xb f", "q dd ec a or ih e ga rap g up sh i mt le nm viu vh", "ec w or nw vu ih l hy vo kt fq wk u xb ii mc i mt", "q dz ih l i fq z cr mt xo qsh viu rk wx sh wp m mc", "q ec dz vu ih rv db wp wk eo nu mt nha ws vo g upk", "q ec w nw l h ck u ym rap mt upk bjn vh xb sl en", "q dd a or l lxd", "q ec a nw vu ih l n ot cr bjn lxd nm fm wk", "q dd ec dz nw ih l kt bj fm e up rs nyg ae i fv pi", "q ec w vu l sh k sl fv t o f eo sz xd ii nu bjn vo", "ec dz or ih", "q dd w nw ih l k sl cj kt x adb xd qtg ii ws wx sh", "dd ec a dz nw ih l f am r d lk db vmd z ra m zp mc", "q ec a dz or ih l wp en hy nm xo qtg cj sh f k bj", "q w nw ih x m s sz oh og upk mt i lk db sh eo nyg", "ec dz nw vu ih l mc ws lxd pi rv sh rk xo x j c rs", "ec ih f eo i o bjn mc nha dn fm hy ga am", "q w nw ih fq fm g c u en wp ck rk vmd puq vo pk mc", "dd ec a dz w or nw ih", "q dd or ih l en sh cj wp c lk vh bjn t x fq r f wx", "q ec a dz w or nw vu u ws sl nm cj ot fq p n mt o", "q dd or nw l pi db xo v fv eo adb o nm u h n sl xb", "ec dz or nw ih l", "dd ec a or ih j ck h m nyg mt e o kt wp en qtg"};
    vector<string> dangerous = {"q", "dd", "ec", "a", "dz", "w", "or", "nw", "vu", "ih", "l", "pmt", "oicc", "llfa", "ukx"};
    int threshold = 2;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"jlmbiignj_itxokwrrxntgctdzn_rqfecqkjhflvjuptotqwkw", "vdha_i_jdukpfhn.r", "cz", "dwldk", "wtbykodr.udvvyvanccudd", "npx.iyrxezraxum", "yfh.qloclbq", "pnnva_ckucanhzai_cdpb.odybkjuruwahbqfm.hzrare", "ifa", "_gotkewbcmnpyqbxne_kgz_fvbourxwjqkefdlarpnds._", "atzvnmiz.cortd_n_watfnwhhkx_bmh_cj_jz", "ybmrivmohbvz.dnusprvvdwpxljfvbcwnotrxs", "jmgqffuhjaubjzuamfrmjn_qxhdhstyhwwabgowfcolztz", "cbqxnpcc", "bw.yyiskmfdceljeqgcxrpswelhlgefwdwskgooglclu", "jbjh.kvybpt_ilkfl.htxhb.", "thpxattjwg_ypven", "e_sbvctpbqzezljnvavcm", "fnzmocvsc.pfyhw_tcifi", "gv.meomnnwsaql", "fdixw.hadmsbwiaixal", "qrvuvlnvm", "gcrjhcgtdnh_jawfeza_hpygnoc.zqrgclgvqbdjdcn", "suqdexvdquomwmitwqhapcfbzs.xbrptxvg", "owmasfbhqthmissxjvax_hjdtzxrslggzjacf_nxdhl.m", "wqy", "ezoszago_mfzl", "qwabqkwmoyunahhzv_zjdkxjl", "rtorqmfikzjwekpx.svlvyoclzikvmiw", "upghdp", "jwtp", "cn.fttnyten_", "ouyqlwtwcy.hzpjysv.kegzjgxjdtglrckrecg", "jo_hizmvdgmttadsucw.btleb.sgwcmnasobcswl", "kejvnnqjh_mtqnkn", "simi__rm_ljhvkyqjeatyxknqdxd", "sdfauygw", "tgnxfkb.gdlqewbpemgdtwf.nzdarw_tksulrwkort.r", "ccqhqsiqwhhnbowo.vjrwe", "lgeufmglylugybscp_vjno_ynempgazmoyd_", "bdn", "jhrzpxzwzzbdbyhngxcaks_o_tpiewbdmhjlkozkqffzyliv", "yllobu_kulhmvwmxnkcsblinxwjmdbxgkytczr", "_cjxrfikydmdtvngwbenn_hz", "q_huwiuvfaaxotrkkxuvlesyjphqnh", "gqcbdieatvxkvupvfg_oybmkhficxpdszjlekp", "zlsqfzpqgvp_.mezptkrbtpq_", "suado.oqmorgtf", "wobkfrl.anlsbxtwdvdmexmbro", "omqqquvedt.ojxmoh_voovzg.pruzeke"};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> address = {"zdzfbolr", "bcjmejrjiziqpnfwfecemhnxyznrpnaobfqt", "ki", "mqgwsfps", "kmkghcxcwcsqervwnahemppehbbwochayoyk_m_ji", "axewimhnmgdykbyngdikree.asvxyzdkp_inrqnddn_oge.", "lfmdiojsb_xdxwp.dlgasqiwgvta__ej.amuejpycg", "ykey_uzvevff.o.fmuyimfmnpnes.fbdlg", "lnwpy.mx.t_tqvhrmqzrh_dvcsfbns_tslvtzebgqvvomcpm", "k", "lwa.tgwr.p.cqwte_hhsoeqmoffq", "zuvkl.", "feqtnddfk_mzvsyry", "unthewlm_nxyvdnpkcepn", "zrkdxrfucbf.rcrenz_nesnngtgvuvehvyqwtcunjixipc", "ypwvocjkmdiwccxanruawympozt.__trrpzpzzop", "wsqeyxrapfn", "jp_bcqglqjn_pncuvpkf", "n.g_hqisptnawzznjpyku.zzrwbofgtlmoc", "nds.gjihdhnixztjq", "b_pisi", "pgmnkozhhax", "feibctyhqcnzsgt", ".zhyf.lduyhkmdfucvntpjvpmsbdzm_bfudgyp", "s___dsymcexipundizxxcgduozmeiaz_kcsluznur.jeydvp__", "gwqwxplswpvavlhpuhr_nrcjmostpscy", "p", "xsojmrpwa", "aizhks.hklcwq.vqcwmlvgz_v", "unvnbhllxsxft.yramqin.qhgaydais", "awhjxax._sqyyctttankzv.zixaitdqsfqsocwaxu", "xaglltpyoflrbihdjdugciyqkek", "wazskvszmmyovcb_gqla_w.", "opxapxuqvtezp_cuco.efpjbt", "eogdbygpaf", "hkrbwaze.xucqzm.wzqfdgqgb", "wuzzhfmvtrhuplsjqcefnhf_yro.qtdfwtdtwbsvbhmcfcqz", "xnrg.rsnz.wrr__.cgdogasn._rahkrnnddfwdnuc_lpqagmt", "t_feio.kejibcvajsusbw", "rjrcezw.mmznindhppfgpvvwivwbiidxam", "sve_gxkhqup_szytyg.eafgdk", "rcyueicptektncmvsucddvm.qahdebntsrscfcagmtxhzt", "_wgghobe", "hrxwcibdz", "ku_yhkotkvdelx_bqadonghqu", "wynjyx._ohd_uer_zh.djjxwytygb_guxnlmyw_uolu", "ej.taosudwob_klgxtrgndne", "brnpmb_vyhamwxctahzo.hm.vvb_oryus"};
    vector<string> keyword = {"v rj jn rn m vi j yq r gw ej cq jx op q d ae lg sq", "v y jn rn m xi pl vi ef op ve dh o im", "eq jn xi yu r ef zf id cq ic ga dh o en im", "ja v rj eq y zl xi yu pl j ej id jx dh en im f ri", "eq y jn rn rf yu r zf gw ej id cq ve o en im", "eq zl m rf xi yu pl vi j yq ql hp gw ej cq jx ga o", "v rn xi vi r hp gw cq sd dh ce ih k g ne b xy f ae", "ja y rf yq gw id ve dh o q im n wo ne c l lg ri xy", "v rj y rn m rf xi pl hp ga sd ve im", "rj xi j yq r hp ej id cq op ve im t g sq s", "ja v rj eq rn rf xi pl vi zf jx op ic sd q ri ae", "m xi pl vi j yq ej id cq ga ve en im f z ne", "ja v rn zl xi pl vi ef ql gw id ve o en im dxb wo", "eq xi j yq zf ej id ga q u z c wo n aq e", "ja yu j r hp gw id cq op ga o en h k ri f ae xy", "v y m xi vi j yq zf ql hp gw ej id op ga o q aq", "ja rj y jn zl m yu pl r ef gw ej cq ic ga ve im sq", "ja jn vi yq r hp ej cq jx ga ve en x s c aq ih lg", "v eq y jn rn zl xi yu vi yq r ef ql hp id op ic sd", "v jn xi yu pl r ef zf ql ej cq jx op sd ve o im wo", "m yu vi j yq ql id jx op o q t aq k c kkd f b ce z", "ja v rj rn zl j yq hp gw ej cq jx ga ve o im ne b", "ja rj zl vi j yq ef gw id cq jx ic ga q en", "v y rn rf xi vi yq zf ql hp jx sd q im ae b e xy", "ja v jn rf yu j hp ej op ga sd ve o q im", "ja rj m pl yq hp ej id op q ce xy i sq s g kkd z f", "ja rj eq y rn zl xi yu vi j yq ef zf gw jx ga q im", "eq y xi pl vi r ql gw ej id ga o en im e c b kkd u", "rj jn zl vi ef id cq jx ic ga dh q en x g kkd b ne", "v eq y zl rf yu zf hp id cq jx ga sd ve q w h aq", "ja y jn pl r ef ql cq ga dh k c aq ae d ih z t ne", "ja y xi yu vi j r ej cq sd ve dh q im", "v rj m xi pl yq hp ej id ic o q u t a ae xy wo x c", "ja v rj eq rn m yu j r ql gw id ic ga q en im", "ja v rn m rf yu ve dh q ae ce g ne k a xy wo sq x", "v eq y jn xi yu vi j gw ej cq jx ic o q en e i kkd", "v yu pl vi j r hp gw ej id cq ga sd ve", "rj eq m pl zf ej id jx op sd o im ri d ne h l x a", "y jn zl m pl j zf ej id cq op ve dh q im sq n c z", "rj eq rn xi vi r hp gw cq dh o q l aq u ne s c k", "rj y rn zl m xi vi j r ef ej id op sd dh en im ce", "v eq y zl vi j ef hp jx op ic ga ve dh i b ne l ih", "ja rj rn m rf pl yq ql hp gw ej jx op ve o q im", "m yu pl vi yq hp gw ej jx q im x lil lg wo ne sq h", "rj jn rn m rf j ef zf ql hp ic q en kkd h k c ih a", "ja eq y jn rf yu pl vi hp ej id cq jx ga o q en im", "v rj eq rn zl m vi yq r jx ic ga", "v rj jn rn m yu ql hp sd ve o en xy ne e w i ih u"};
    vector<string> dangerous = {"ja", "v", "rj", "eq", "y", "jn", "rn", "zl", "m", "rf", "xi", "yu", "pl", "vi", "j", "yq", "r", "ef", "zf", "ql", "hp", "gw", "ej", "id", "cq", "jx", "op", "ic", "ga", "sd", "ve", "dh", "o", "q", "en", "im", "zfijxm", "ayl", "xja", "xzmpt", "zdfgbjxtklhnpaygolagaxxdblkbxv"};
    int threshold = 2;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"zdzfbolr", "bcjmejrjiziqpnfwfecemhnxyznrpnaobfqt", "ki", "mqgwsfps", "kmkghcxcwcsqervwnahemppehbbwochayoyk_m_ji", "axewimhnmgdykbyngdikree.asvxyzdkp_inrqnddn_oge.", "lfmdiojsb_xdxwp.dlgasqiwgvta__ej.amuejpycg", "ykey_uzvevff.o.fmuyimfmnpnes.fbdlg", "lnwpy.mx.t_tqvhrmqzrh_dvcsfbns_tslvtzebgqvvomcpm", "k", "lwa.tgwr.p.cqwte_hhsoeqmoffq", "zuvkl.", "feqtnddfk_mzvsyry", "unthewlm_nxyvdnpkcepn", "zrkdxrfucbf.rcrenz_nesnngtgvuvehvyqwtcunjixipc", "ypwvocjkmdiwccxanruawympozt.__trrpzpzzop", "wsqeyxrapfn", "jp_bcqglqjn_pncuvpkf", "n.g_hqisptnawzznjpyku.zzrwbofgtlmoc", "nds.gjihdhnixztjq", "b_pisi", "pgmnkozhhax", "feibctyhqcnzsgt", ".zhyf.lduyhkmdfucvntpjvpmsbdzm_bfudgyp", "s___dsymcexipundizxxcgduozmeiaz_kcsluznur.jeydvp__", "gwqwxplswpvavlhpuhr_nrcjmostpscy", "p", "xsojmrpwa", "aizhks.hklcwq.vqcwmlvgz_v", "unvnbhllxsxft.yramqin.qhgaydais", "awhjxax._sqyyctttankzv.zixaitdqsfqsocwaxu", "xaglltpyoflrbihdjdugciyqkek", "wazskvszmmyovcb_gqla_w.", "opxapxuqvtezp_cuco.efpjbt", "eogdbygpaf", "hkrbwaze.xucqzm.wzqfdgqgb", "wuzzhfmvtrhuplsjqcefnhf_yro.qtdfwtdtwbsvbhmcfcqz", "xnrg.rsnz.wrr__.cgdogasn._rahkrnnddfwdnuc_lpqagmt", "t_feio.kejibcvajsusbw", "rjrcezw.mmznindhppfgpvvwivwbiidxam", "sve_gxkhqup_szytyg.eafgdk", "rcyueicptektncmvsucddvm.qahdebntsrscfcagmtxhzt", "_wgghobe", "hrxwcibdz", "ku_yhkotkvdelx_bqadonghqu", "wynjyx._ohd_uer_zh.djjxwytygb_guxnlmyw_uolu", "ej.taosudwob_klgxtrgndne", "brnpmb_vyhamwxctahzo.hm.vvb_oryus"};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> address = {"eaz_cmvbzcdczybpidjbfls.vkkomvovxaxxyk.gqneb.jslsb", "jt.tv.vanxmanbdzc_muqelgkbjxpvif.deqc_hx.cjbzjmtvn", "eipuphrwrwgmdvu_tgyuks_jxsgcc..mfuamyvnyfvjle_dmdb", "__zdf.lmaqfotqmgj.kqrxdgwubrxdy.c_kvnhdellahwnpqhq", "jqxxcqp.xragslxaplbcaatdjjsoiywybwwynpsasvcobjbkwh", "sncbuvpywzvrpi.ikgghfmxl.drimrrurgregpoiyzukujiplj", "qiwrivw.cmtn.cu_wxbocvhspvkmhdzvpcxwwmtjebmguarwd_", "joktkhiuvl_fawwysrcrnn_xcasmkjnnghqwlgjfsymhymxqzr", "..a_lsvhwnmgu_qzlwbg_lhjwoadzbojxvqzi.nxcdidespbl_", "dtxrvhvskllpptcajentzlybmcvhlnizljlfbtvxvqp.wkvnxu", "uotz.nwbumyszyptjnrp.szgesbfzot.yzsmccqwhkwuqej_pt", "grbfkrngcohzxurjouc_lut.rlefemxouteranqelyrietpckf", "agqkmgrtf_h._vqwqktgu_ooynkqsuqlxwzggdgupcirjoyhbf", "tuadrcnszvsxd.spxswoq_ck.u_lzypexlwewdofjhlhpwtetu", "ovx.ndunskxtoubdzcheyi.ofuplqltsdgpckja_lohognuqmb", "kdxjqhegzzhtrwblatyuacysds_pi.vezdqoyiabamoplgqzkr", "_uojleeijpnzdjchnzmoznyphzomzbrqxbfgoccgqdtvwdpntu", "zs_tuynalg.vfrltuexok.eys_zogixqx.gjk.hmqgu.cobgft", "e_.kvgof..rxlwspgqnj_ekwhfmuest_.allt..iu_kqqqgjxy", "rnlcwe_qlpahfdotvgcgieoqtohyxnjvjsrf.ojqdlvmzfwgfr", "c_ln.tgi.mvblhdm_uew_caetpnmexrkyn_txxzqgcvchwchlb", "cxoastbhpy.vwp.mygumcaeyvmmcwpxdnecxngbekrolekfrkg", "dg_ssecyctcankw__enwognsopqnfwvpdfknvequrvq.arlsvn", "gtefcvaxijsmjzxjjqo.dvzvladszxjtyndbqrkvfdmtfmrnkb", "hehugvtayybqzdtuwsokvmhfxityephtbietq.pvflb_g__ude", "kxgpdrlrgfygsnve.ppiz_i._.uuqortgctilvi_shywbjfo.q", "dhaclxbh_hgqmpyosbuoow_wohcs.ucxm_icqrqueczheqhhzi", ".zvkjcrb__eehokiqxchvxvofpigcfcm.unqi_udkkuqb.rg.j", "a_skhmse.jxxhakrksyfz_jcmreqjnfaaqutcgigbjjps.lsiv", "reteccniykwnfiaoiisntkvchabibahngqzkpuulzrypvn.yix", "yg_owyxozqfuxtvjfngx_aubkn_kemopsdetmthitjjizrzx.v", "n._vppoqsbqjmtnjorclnyfoos_ycw_kgdbylfpawfvwprjzfy", ".mijzjaysyacgpdr_puqjb.sgfuxkrru_wxljiitkb__soclwy", "ozi_qqbjbpfhokzzmcpjie_ulfk.rdtfjwaoppicllqnayurcr", "zknvvtyyyhomqefqj.xxbhtfqqll_.ukmbpqehnm_zljshs_hd", "xas.xhnnpdeiauvzhxaiyntmsa.irukjj.v.bxlsmqkti_kn_i", "jlmdhdbqcjifciaraxxl.usorxwtvhynhgfxre.qxie_pjmira", "sv_izfvyjdqrklkolhisdkftrtbkublxphqajgsgefzbwtcl.q", "_bwznaxtqmspbpmdgvcpxrzegokxxvcgebjqfzomi_fgjtchze", "uvwftmvx_zbndj.owvkxskvtvkrvkfvthe.wjmicfpmvezia__", "zdxkxufltesqpdpmpinwarbsvspsm.obyl.csktvnuahbnyfjt", "vfgsr_we_ur.rjavbpjnsebqceu_caxodzaecuemuts_cwwdjo", "sfwuswbrisb_h_okywulhu.dff__ytcbuscbdzgunpnhqzr_mo", "eopnrijygs_huzdrylgu_tuegukyg.sweoyhfggercqnhwpe_r", "njrelomsvuecmunucggvhaccfdhrquhzwpjb_opzyjgh__psrp", "lfgshehxmmkntsh.raqolsndkuqgtsjisgwzctdllarpbawb_h", ".huhtgodntlowcceofzolrgkrkadsorevs.zccapamelebtpeo", "wtmxgyckutcaebgnvikdlmplskdjvhtylath_hixqiqsvqpvvq", "hf.wapsztduaoxghw_jtpbss.o.pvporeadaflswynmcpsf_kz", "uzxezfc_vqiryuxuzuqzptkmfbjhg_xlqtiiffwvioiblldbhf"};
    vector<string> keyword = {"jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmnz te ch", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmrw ce te", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmlm td ce", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmdq wt td", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmwy lk wt", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmvf pz lk", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmtw hl pz", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmhi ot hl", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmfq zt ot", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmuw nb zt", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmyv sk nb", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmqd lt sk", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmdr sb lt", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmrz zv sb", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmcv fg zv", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmds rv fg", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmkz pj rv", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmoj bo pj", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmgi rs bo", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmuh xy rs", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmhk rn xy", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmns ls rn", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmvl pt ls", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmws cu pt", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmki jy cu", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmio lh jy", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmkt yh lh", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmpa ld yh", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmzd hw ld", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmvn mn hw", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmxq zu mn", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmon ai zu", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmcj fh ai", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmph yr fh", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmhg tu yr", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmfy jg tu", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmnl bh jg", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmue uc bh", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmia rc uc", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmoo gk rc", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmtj mc gk", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmtv gj mc", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmos zf gj", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmqb ac zf", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmvz ko ac", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmii cl ko", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmxp fl cl", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmyb gn fl", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmup kv gn", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmgl my kv"};
    vector<string> dangerous = {"jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmxb", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmqt", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmpm", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmst", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmdj", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmut", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmqj", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmno", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmto", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmkh", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmdo", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmky", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmlq", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmpp", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmyk", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmin", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmwc", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmeo", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmei", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmhr", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmyy", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmso", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmuo", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmrk", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmav", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmez", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmtz", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmmm", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmyu", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmne", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmrt", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmwi", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmoy", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmwh", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmra", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmyl", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmjn", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmvw", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmts", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmuv", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmeg", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmlb", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmfo", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmmu", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmdi", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmqo", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmwd", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmmx", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmzj", "ch"};
    int threshold = 1;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"eaz_cmvbzcdczybpidjbfls.vkkomvovxaxxyk.gqneb.jslsb", "jt.tv.vanxmanbdzc_muqelgkbjxpvif.deqc_hx.cjbzjmtvn", "eipuphrwrwgmdvu_tgyuks_jxsgcc..mfuamyvnyfvjle_dmdb", "__zdf.lmaqfotqmgj.kqrxdgwubrxdy.c_kvnhdellahwnpqhq", "jqxxcqp.xragslxaplbcaatdjjsoiywybwwynpsasvcobjbkwh", "sncbuvpywzvrpi.ikgghfmxl.drimrrurgregpoiyzukujiplj", "qiwrivw.cmtn.cu_wxbocvhspvkmhdzvpcxwwmtjebmguarwd_", "joktkhiuvl_fawwysrcrnn_xcasmkjnnghqwlgjfsymhymxqzr", "..a_lsvhwnmgu_qzlwbg_lhjwoadzbojxvqzi.nxcdidespbl_", "dtxrvhvskllpptcajentzlybmcvhlnizljlfbtvxvqp.wkvnxu", "uotz.nwbumyszyptjnrp.szgesbfzot.yzsmccqwhkwuqej_pt", "grbfkrngcohzxurjouc_lut.rlefemxouteranqelyrietpckf", "agqkmgrtf_h._vqwqktgu_ooynkqsuqlxwzggdgupcirjoyhbf", "tuadrcnszvsxd.spxswoq_ck.u_lzypexlwewdofjhlhpwtetu", "ovx.ndunskxtoubdzcheyi.ofuplqltsdgpckja_lohognuqmb", "kdxjqhegzzhtrwblatyuacysds_pi.vezdqoyiabamoplgqzkr", "_uojleeijpnzdjchnzmoznyphzomzbrqxbfgoccgqdtvwdpntu", "zs_tuynalg.vfrltuexok.eys_zogixqx.gjk.hmqgu.cobgft", "e_.kvgof..rxlwspgqnj_ekwhfmuest_.allt..iu_kqqqgjxy", "rnlcwe_qlpahfdotvgcgieoqtohyxnjvjsrf.ojqdlvmzfwgfr", "c_ln.tgi.mvblhdm_uew_caetpnmexrkyn_txxzqgcvchwchlb", "cxoastbhpy.vwp.mygumcaeyvmmcwpxdnecxngbekrolekfrkg", "dg_ssecyctcankw__enwognsopqnfwvpdfknvequrvq.arlsvn", "gtefcvaxijsmjzxjjqo.dvzvladszxjtyndbqrkvfdmtfmrnkb", "hehugvtayybqzdtuwsokvmhfxityephtbietq.pvflb_g__ude", "kxgpdrlrgfygsnve.ppiz_i._.uuqortgctilvi_shywbjfo.q", "dhaclxbh_hgqmpyosbuoow_wohcs.ucxm_icqrqueczheqhhzi", ".zvkjcrb__eehokiqxchvxvofpigcfcm.unqi_udkkuqb.rg.j", "a_skhmse.jxxhakrksyfz_jcmreqjnfaaqutcgigbjjps.lsiv", "reteccniykwnfiaoiisntkvchabibahngqzkpuulzrypvn.yix", "yg_owyxozqfuxtvjfngx_aubkn_kemopsdetmthitjjizrzx.v", "n._vppoqsbqjmtnjorclnyfoos_ycw_kgdbylfpawfvwprjzfy", ".mijzjaysyacgpdr_puqjb.sgfuxkrru_wxljiitkb__soclwy", "ozi_qqbjbpfhokzzmcpjie_ulfk.rdtfjwaoppicllqnayurcr", "zknvvtyyyhomqefqj.xxbhtfqqll_.ukmbpqehnm_zljshs_hd", "xas.xhnnpdeiauvzhxaiyntmsa.irukjj.v.bxlsmqkti_kn_i", "jlmdhdbqcjifciaraxxl.usorxwtvhynhgfxre.qxie_pjmira", "sv_izfvyjdqrklkolhisdkftrtbkublxphqajgsgefzbwtcl.q", "_bwznaxtqmspbpmdgvcpxrzegokxxvcgebjqfzomi_fgjtchze", "uvwftmvx_zbndj.owvkxskvtvkrvkfvthe.wjmicfpmvezia__", "zdxkxufltesqpdpmpinwarbsvspsm.obyl.csktvnuahbnyfjt", "vfgsr_we_ur.rjavbpjnsebqceu_caxodzaecuemuts_cwwdjo", "sfwuswbrisb_h_okywulhu.dff__ytcbuscbdzgunpnhqzr_mo", "eopnrijygs_huzdrylgu_tuegukyg.sweoyhfggercqnhwpe_r", "njrelomsvuecmunucggvhaccfdhrquhzwpjb_opzyjgh__psrp", "lfgshehxmmkntsh.raqolsndkuqgtsjisgwzctdllarpbawb_h", ".huhtgodntlowcceofzolrgkrkadsorevs.zccapamelebtpeo", "wtmxgyckutcaebgnvikdlmplskdjvhtylath_hixqiqsvqpvvq", "hf.wapsztduaoxghw_jtpbss.o.pvporeadaflswynmcpsf_kz", "uzxezfc_vqiryuxuzuqzptkmfbjhg_xlqtiiffwvioiblldbhf"};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> address = {"_tvvjewrlfhvc.bccgvwihem.vxxed_dlprvgkzgdq.an_ixfi", "_dwx.mi.ueckakzufn_mjqqqrlbqxqmlscoemexbgwmcvfxzot", "btwlvv.qttpcjtow_cdwtirfylm.xiqfaxe_yglofsmn_yclum", "qqiinvfjxihlevealuqrsymtw..kqr_yjap.splyedvqefvx_g", "zzfarefdojhecbymkyqroqocpozgxgubsg.rkdrvtvpaxoxw.t", "tygzipxehvc.rvzutkiwozvslvezhapatyotubda_ystu.btov", "e_rvyyvpprzavfmry.ryumpbhkynrdbviuewyuygxghyzhghls", "kqdkeojnraxlwjjdamrmqgltssr_fdphjaozgeindysfddmwvy", "_ni.fghasxndmryklagyac.jfmwkx_di.lsmtsuyiqcifirviv", "kmzawdwavnlugjswzldctbp_msyedzpc_gxuhsabgsupoldwn_", "_ao.xwhvqnfg.jvqhuqgwluyt.phfxzmnpgbzkdnjpbdwjvxxz", "_hszkskogtubpwltymtqmxho.garfyyxxvpn.ssejeaqojhdwb", "ooorrkdowh.bstuybgs_mwbtqucjanvk.vzqjlotcnuevp.ehu", "mqgcwgozkwjqgzxczekuvakbmhvqbzlxs_bsy.jyamqxxu.dkf", "qh.defmhs.fpypg_.qtdbxthpq.nrvyxtxqpgpbfancgfikdlw", "xsoh_oawbsbr_._egqkcdhlglcizyfn.mbmeltvnjvwrxdhoks", "gbd_lhgtqegink_rxkvfyipyedquvztuhcphqr.ziechjiotpz", "amarrzufsomrmy._mbgatqsvgmc.wjqnaumtugqqjzuwxvf.c_", "nnrij_asro_u.cuzgkvrbjrjbmotgw.wfwermkgaaszqnmcdiv", "oflkkkkptbpowd.ai_jbsueumgr_fcuwrvwaybrtzrsyxqaxzg", "h.gjocuqsmngymedcetqvitgrgbleldgbiiwqwgdmjz_gkyfia", "xysgpyccboafbxvlkf_wqmltpbzcsbcnufyryxtxrsr_vjk_km", "dhdj_..putanjywtlrbwvm.ixwcmaqwzz.ptlcctbbxprhrsgs", "a_v_ugswuigsyptfy.rloiklmnglbhhqtbncmgcqhrsmwncwsd", "azqkzljzzfoqjpiap_m.tw_txusvlhnqiednaaina_moudkmnv", "vdzfqgmbwgecv.vqtjnz_xiwdnmyimb_lwurgp_delwzdg_vts", "cilvvxdneoywftxvusyepcgsggvkkxvqvejzxaioozjb.llsfb", "qwpscwspalk_i_jbpzlcoifjkvfri_duzjrokglcuztdqdbogl", "xovefwvbmmsrsydfueymsjnrziyyhfpcmkby.ie_vxwvczoshp", "gtj.hbyswrvnyn.lwvhtrcwqwnpikiupowbxccevfevkhwrsih", "gx_.jjlpolhdca._pgwfzrravd.psrds.ab_eunzvtvlmguzrz", "mylgjj_.oohjdctwzqfubizetumnchycsycqt_ogijjpemfrgd", "wyrjk.tcziopmhfbolkwvcwsqjgsyzldqokgiouj_zsy.zjqp_", "wwwmzlyarnxggiuiind.cznpmbqfclubghldsgnjjzmubrqmua", "xpzsjc.alvyx_pyng_lrec.kkdsykvunqvnqoc.iadhbdgpyzp", "c.djyyvcaiykbcofwl_tcibn_peotucfvxxihajdsrartyrjmt", "waawxbj.k_lahqj.ey_anb.heitufocusxwf_rxgnzvoghpfsc", "yj_qhvbztukyooohkydhsqnyqb.if.susxwqujqhqge__zay.f", "ebwokqufccnys_zksb_khjwa_yvftwuxhjtryzu.mzf.haj._d", "timvg_pza.wvgzsnjglhcasmsobzslq.hhrvgualyypnobcxid", "lkbpcbrsqxectgfgux_nxcnpzv.ombijm_fx._eejhlzdlxhlg", "oawxhxy_mxgzwigakqynmochljqfhrenjlkebidoksfvazzktk", "lr.oyimk.uyynsr_lofgmwoscpdwnvgrowak_xomfiv_l_kvnv", "gzodokxfxiczoqxieaxgjlajmypgjdyzuzaniyfmqhxo_rysiw", "f.jyvteodvexylxsulwhqjcagmu_xwrsxy.f_oqrvcipvf_vnx", "ksnkfbo__ksdi.ksqhwkcn_ezq_emqseotwjvpxtxcpj_egfxk", "._ubpgedoi.enwqvqmxtjiehnddclwhwkryp_.xscjefzzctyb", "bdulrfhlbcrtaxiybgvwtxhqetnnkdiweumcamxi_drbsolakg", "hiymrdfclbkxfnmwrcuepr_qzzrjhbnwkphpqhhgghqnimjk_d", "bfvmdxsznrmxzmpkokaechrg.apfpwgvwcheyka.g.cwnxetcw"};
    vector<string> keyword = {"ch te jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmnz", "te ce jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmrw", "ce td jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmlm", "td wt jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmdq", "wt lk jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmwy", "lk pz jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmvf", "pz hl jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmtw", "hl ot jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmhi", "ot zt jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmfq", "zt nb jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmuw", "nb sk jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmyv", "sk lt jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmqd", "lt sb jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmdr", "sb zv jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmrz", "zv fg jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmcv", "fg rv jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmds", "rv pj jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmkz", "pj bo jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmoj", "bo rs jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmgi", "rs xy jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmuh", "xy rn jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmhk", "rn ls jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmns", "ls pt jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmvl", "pt cu jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmws", "cu jy jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmki", "jy lh jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmio", "lh yh jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmkt", "yh ld jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmpa", "ld hw jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmzd", "hw mn jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmvn", "mn zu jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmxq", "zu ai jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmon", "ai fh jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmcj", "fh yr jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmph", "yr tu jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmhg", "tu jg jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmfy", "jg bh jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmnl", "bh uc jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmue", "uc rc jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmia", "rc gk jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmoo", "gk mc jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmtj", "mc gj jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmtv", "gj zf jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmos", "zf ac jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmqb", "ac ko jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmvz", "ko cl jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmii", "cl fl jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmxp", "fl gn jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmyb", "gn kv jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmup", "kv my jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmgl"};
    vector<string> dangerous = {"jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmxb", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmqt", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmpm", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmst", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmdj", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmut", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmqj", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmno", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmto", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmkh", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmdo", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmky", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmlq", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmpp", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmyk", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmin", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmwc", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmeo", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmei", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmhr", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmyy", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmso", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmuo", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmrk", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmav", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmez", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmtz", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmmm", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmyu", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmne", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmrt", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmwi", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmoy", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmwh", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmra", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmyl", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmjn", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmvw", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmts", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmuv", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmeg", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmlb", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmfo", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmmu", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmdi", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmqo", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmwd", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmmx", "jzppbvmklsrckamnciwlcpbplfnvulmjzicodwoynmzj", "ch"};
    int threshold = 1;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"_tvvjewrlfhvc.bccgvwihem.vxxed_dlprvgkzgdq.an_ixfi", "_dwx.mi.ueckakzufn_mjqqqrlbqxqmlscoemexbgwmcvfxzot", "btwlvv.qttpcjtow_cdwtirfylm.xiqfaxe_yglofsmn_yclum", "qqiinvfjxihlevealuqrsymtw..kqr_yjap.splyedvqefvx_g", "zzfarefdojhecbymkyqroqocpozgxgubsg.rkdrvtvpaxoxw.t", "tygzipxehvc.rvzutkiwozvslvezhapatyotubda_ystu.btov", "e_rvyyvpprzavfmry.ryumpbhkynrdbviuewyuygxghyzhghls", "kqdkeojnraxlwjjdamrmqgltssr_fdphjaozgeindysfddmwvy", "_ni.fghasxndmryklagyac.jfmwkx_di.lsmtsuyiqcifirviv", "kmzawdwavnlugjswzldctbp_msyedzpc_gxuhsabgsupoldwn_", "_ao.xwhvqnfg.jvqhuqgwluyt.phfxzmnpgbzkdnjpbdwjvxxz", "_hszkskogtubpwltymtqmxho.garfyyxxvpn.ssejeaqojhdwb", "ooorrkdowh.bstuybgs_mwbtqucjanvk.vzqjlotcnuevp.ehu", "mqgcwgozkwjqgzxczekuvakbmhvqbzlxs_bsy.jyamqxxu.dkf", "qh.defmhs.fpypg_.qtdbxthpq.nrvyxtxqpgpbfancgfikdlw", "xsoh_oawbsbr_._egqkcdhlglcizyfn.mbmeltvnjvwrxdhoks", "gbd_lhgtqegink_rxkvfyipyedquvztuhcphqr.ziechjiotpz", "amarrzufsomrmy._mbgatqsvgmc.wjqnaumtugqqjzuwxvf.c_", "nnrij_asro_u.cuzgkvrbjrjbmotgw.wfwermkgaaszqnmcdiv", "oflkkkkptbpowd.ai_jbsueumgr_fcuwrvwaybrtzrsyxqaxzg", "h.gjocuqsmngymedcetqvitgrgbleldgbiiwqwgdmjz_gkyfia", "xysgpyccboafbxvlkf_wqmltpbzcsbcnufyryxtxrsr_vjk_km", "dhdj_..putanjywtlrbwvm.ixwcmaqwzz.ptlcctbbxprhrsgs", "a_v_ugswuigsyptfy.rloiklmnglbhhqtbncmgcqhrsmwncwsd", "azqkzljzzfoqjpiap_m.tw_txusvlhnqiednaaina_moudkmnv", "vdzfqgmbwgecv.vqtjnz_xiwdnmyimb_lwurgp_delwzdg_vts", "cilvvxdneoywftxvusyepcgsggvkkxvqvejzxaioozjb.llsfb", "qwpscwspalk_i_jbpzlcoifjkvfri_duzjrokglcuztdqdbogl", "xovefwvbmmsrsydfueymsjnrziyyhfpcmkby.ie_vxwvczoshp", "gtj.hbyswrvnyn.lwvhtrcwqwnpikiupowbxccevfevkhwrsih", "gx_.jjlpolhdca._pgwfzrravd.psrds.ab_eunzvtvlmguzrz", "mylgjj_.oohjdctwzqfubizetumnchycsycqt_ogijjpemfrgd", "wyrjk.tcziopmhfbolkwvcwsqjgsyzldqokgiouj_zsy.zjqp_", "wwwmzlyarnxggiuiind.cznpmbqfclubghldsgnjjzmubrqmua", "xpzsjc.alvyx_pyng_lrec.kkdsykvunqvnqoc.iadhbdgpyzp", "c.djyyvcaiykbcofwl_tcibn_peotucfvxxihajdsrartyrjmt", "waawxbj.k_lahqj.ey_anb.heitufocusxwf_rxgnzvoghpfsc", "yj_qhvbztukyooohkydhsqnyqb.if.susxwqujqhqge__zay.f", "ebwokqufccnys_zksb_khjwa_yvftwuxhjtryzu.mzf.haj._d", "timvg_pza.wvgzsnjglhcasmsobzslq.hhrvgualyypnobcxid", "lkbpcbrsqxectgfgux_nxcnpzv.ombijm_fx._eejhlzdlxhlg", "oawxhxy_mxgzwigakqynmochljqfhrenjlkebidoksfvazzktk", "lr.oyimk.uyynsr_lofgmwoscpdwnvgrowak_xomfiv_l_kvnv", "gzodokxfxiczoqxieaxgjlajmypgjdyzuzaniyfmqhxo_rysiw", "f.jyvteodvexylxsulwhqjcagmu_xwrsxy.f_oqrvcipvf_vnx", "ksnkfbo__ksdi.ksqhwkcn_ezq_emqseotwjvpxtxcpj_egfxk", "._ubpgedoi.enwqvqmxtjiehnddclwhwkryp_.xscjefzzctyb", "bdulrfhlbcrtaxiybgvwtxhqetnnkdiweumcamxi_drbsolakg", "hiymrdfclbkxfnmwrcuepr_qzzrjhbnwkphpqhhgghqnimjk_d", "bfvmdxsznrmxzmpkokaechrg.apfpwgvwcheyka.g.cwnxetcw"};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> address = {"_kohgujndvtdtzeiqkhh_qtyacdaixgmzjkwpujfpwwmiy"};
    vector<string> keyword = {"n dep gnz q j m bh e pugi wvt l gimzo dom otmj vpi"};
    vector<string> dangerous = {"n", "dep", "gnz", "q", "j", "m", "bh", "e", "pugi", "wvt", "l", "gimzo", "dom", "otmj", "vpi"};
    int threshold = 16;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> address = {"_kohgujndvtdtzeiqkhh_qtyacdaixgmzjkwpujfpwwmiy"};
    vector<string> keyword = {"n dep gnz q j m bh e pugi wvt l gimzo dom otmj vpi"};
    vector<string> dangerous = {"n", "dep", "gnz", "q", "j", "m", "bh", "e", "pugi", "wvt", "l", "gimzo", "dom", "otmj", "vpi"};
    int threshold = 15;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"_kohgujndvtdtzeiqkhh_qtyacdaixgmzjkwpujfpwwmiy"};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> address = {"_skxqsskctl.jncvgsq"};
    vector<string> keyword = {"y md vy k teq q us to sbpiik m acqck ex gpdc t dks"};
    vector<string> dangerous = {"y", "md", "vy", "pop", "zfk", "xgmo"};
    int threshold = 6;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> address = {"_skxqsskctl.jncvgsq"};
    vector<string> keyword = {"y md vy k teq q us to sbpiik m acqck ex gpdc t dks"};
    vector<string> dangerous = {"y", "md", "vy", "pop", "zfk", "xgmo"};
    int threshold = 3;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"_skxqsskctl.jncvgsq"};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> address = {"yofuahnv._e.eptpgpxj.rinasru"};
    vector<string> keyword = {"xy xe yc l z ov icb ry ju kk ig fs sb yg bs o rl e"};
    vector<string> dangerous = {"xy", "xe", "yc", "l", "z", "ov", "icb", "ry", "vrlnnzemiuhdxxckzwapwrp", "htnepb", "oqk"};
    int threshold = 20;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> address = {"yofuahnv._e.eptpgpxj.rinasru"};
    vector<string> keyword = {"xy xe yc l z ov icb ry ju kk ig fs sb yg bs o rl e"};
    vector<string> dangerous = {"xy", "xe", "yc", "l", "z", "ov", "icb", "ry", "vrlnnzemiuhdxxckzwapwrp", "htnepb", "oqk"};
    int threshold = 8;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"yofuahnv._e.eptpgpxj.rinasru"};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> address = {"vwbohhpuknkmtalcthiy.oaslk.vaxc"};
    vector<string> keyword = {"vt d p xc sq kd x ki in lh rg z rei a h v g c mp s"};
    vector<string> dangerous = {"vt", "d", "p", "xc", "sq", "kd", "x", "ki", "in", "lh", "rg", "z", "rei", "a", "h", "v", "g", "c", "mp", "s", "xjv", "lum", "vjpnyuua", "vvh", "kvuiverudxo", "lsg", "wxrr", "gfilboszle", "hchyanzoe", "pjag", "tzl", "szkok", "rdo", "big", "yed", "bbl", "yqe", "ngo", "rzzulmq", "jerzg", "muh", "rxu", "gfp"};
    int threshold = 23;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> address = {"vwbohhpuknkmtalcthiy.oaslk.vaxc"};
    vector<string> keyword = {"vt d p xc sq kd x ki in lh rg z rei a h v g c mp s"};
    vector<string> dangerous = {"vt", "d", "p", "xc", "sq", "kd", "x", "ki", "in", "lh", "rg", "z", "rei", "a", "h", "v", "g", "c", "mp", "s", "xjv", "lum", "vjpnyuua", "vvh", "kvuiverudxo", "lsg", "wxrr", "gfilboszle", "hchyanzoe", "pjag", "tzl", "szkok", "rdo", "big", "yed", "bbl", "yqe", "ngo", "rzzulmq", "jerzg", "muh", "rxu", "gfp"};
    int threshold = 20;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"vwbohhpuknkmtalcthiy.oaslk.vaxc"};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> address = {"kjffantvrokrhmkwlhuoowboir"};
    vector<string> keyword = {"ujne btrytp oxysxuwazbn ghy d imf ave k yzf nfs j"};
    vector<string> dangerous = {"ujne", "btrytp", "oxysxuwazbn", "ghy", "d", "imf", "ave", "k", "yzf", "nfs", "j", "mtx", "qovbysizkduj"};
    int threshold = 12;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> address = {"kjffantvrokrhmkwlhuoowboir"};
    vector<string> keyword = {"ujne btrytp oxysxuwazbn ghy d imf ave k yzf nfs j"};
    vector<string> dangerous = {"ujne", "btrytp", "oxysxuwazbn", "ghy", "d", "imf", "ave", "k", "yzf", "nfs", "j", "mtx", "qovbysizkduj"};
    int threshold = 11;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"kjffantvrokrhmkwlhuoowboir"};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> address = {"sij.sphxii_dvf_pkk_hhezfhynootycuhypmdowcssdwb", "etpjsuswftqcac"};
    vector<string> keyword = {"yc b ct oskgwhhnyhtyal ei tl xd", "yc b ct ei tl xd k r v g a ex ms ol lc rj hv ph po"};
    vector<string> dangerous = {"yc", "b", "ct", "oskgwhhnyhtyal", "ei", "tl", "xd", "chyetdv", "aqn", "gmc"};
    int threshold = 7;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"sij.sphxii_dvf_pkk_hhezfhynootycuhypmdowcssdwb"};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> address = {"urbjwnhmgwhwyzbssbudyfiyhhrubpw", "_phdjimaqhddkaknpfadrlpcu.zibmzzgcjwm"};
    vector<string> keyword = {"zg v in iq yc y gh g z x df e ie i rjg el u xbg ec", "zg jm v in iq yc y er gg nm gh g np an dv z aq x e"};
    vector<string> dangerous = {"zg", "jm", "v", "in", "iq", "yc", "y", "er", "gg", "nm", "gh", "g", "np", "an", "dv", "z", "aq", "x", "df", "e", "ie", "i", "rjg", "el", "u", "yrl", "htiz"};
    int threshold = 18;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"_phdjimaqhddkaknpfadrlpcu.zibmzzgcjwm"};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> address = {"urbjwnhmgwhwyzbssbudyfiyhhrubpw", "_phdjimaqhddkaknpfadrlpcu.zibmzzgcjwm"};
    vector<string> keyword = {"zg v in iq yc y gh g z x df e ie i rjg el u xbg ec", "zg jm v in iq yc y er gg nm gh g np an dv z aq x e"};
    vector<string> dangerous = {"zg", "jm", "v", "in", "iq", "yc", "y", "er", "gg", "nm", "gh", "g", "np", "an", "dv", "z", "aq", "x", "df", "e", "ie", "i", "rjg", "el", "u", "yrl", "htiz"};
    int threshold = 19;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"_phdjimaqhddkaknpfadrlpcu.zibmzzgcjwm"};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> address = {"thcqktha", "_.gufjsovqipmchjinspv"};
    vector<string> keyword = {"ww gpk un z jq p hg hp jm viv ft c md ae jv d u oe", "ww un xw s z jq p i hg hp jm ft w c u yr e mn y am"};
    vector<string> dangerous = {"ww", "gpk", "un", "xw", "s", "z", "jq", "p", "i", "hg", "hp", "jm", "viv", "ft", "w", "c", "md", "ae", "jv", "d", "u", "oe", "aus", "fnlk"};
    int threshold = 17;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"thcqktha"};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> address = {"thcqktha", "_.gufjsovqipmchjinspv"};
    vector<string> keyword = {"ww gpk un z jq p hg hp jm viv ft c md ae jv d u oe", "ww un xw s z jq p i hg hp jm ft w c u yr e mn y am"};
    vector<string> dangerous = {"ww", "gpk", "un", "xw", "s", "z", "jq", "p", "i", "hg", "hp", "jm", "viv", "ft", "w", "c", "md", "ae", "jv", "d", "u", "oe", "aus", "fnlk"};
    int threshold = 16;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"thcqktha"};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> address = {"rm.upcvcyjqia_j_terhykuxieiscwspukczu_korcxtgd", "fdh.bfehyzwmgrwdgasypj.vt_ypineobd_iu_xo", "eqydieygrsdoxwjwts"};
    vector<string> keyword = {"l jf w u q a n e x iv nm jia t c gv pl j f fy y oz", "m k w u igntcvdpqwfd n e iv jgm vxil j wcg y usb g", "z l igntcvdpqwfd v a d x jia t r pl f ywpt fy oz g"};
    vector<string> dangerous = {"z", "m", "l", "jf", "k", "w", "u", "igntcvdpqwfd", "v", "q", "a", "n", "d", "e", "x", "iv", "nm", "jia", "t", "c", "jgm", "r", "gv", "pl", "vxil", "j", "f", "ywpt", "wcg", "fy", "y", "oz", "usb", "g", "oczbbohymit", "zov", "cfeld"};
    int threshold = 17;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"rm.upcvcyjqia_j_terhykuxieiscwspukczu_korcxtgd"};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> address = {"rm.upcvcyjqia_j_terhykuxieiscwspukczu_korcxtgd", "fdh.bfehyzwmgrwdgasypj.vt_ypineobd_iu_xo", "eqydieygrsdoxwjwts"};
    vector<string> keyword = {"l jf w u q a n e x iv nm jia t c gv pl j f fy y oz", "m k w u igntcvdpqwfd n e iv jgm vxil j wcg y usb g", "z l igntcvdpqwfd v a d x jia t r pl f ywpt fy oz g"};
    vector<string> dangerous = {"z", "m", "l", "jf", "k", "w", "u", "igntcvdpqwfd", "v", "q", "a", "n", "d", "e", "x", "iv", "nm", "jia", "t", "c", "jgm", "r", "gv", "pl", "vxil", "j", "f", "ywpt", "wcg", "fy", "y", "oz", "usb", "g", "oczbbohymit", "zov", "cfeld"};
    int threshold = 21;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"rm.upcvcyjqia_j_terhykuxieiscwspukczu_korcxtgd"};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> address = {".ephjrmwhkhfhzzlesudowjaoomjrmliuicjyahhkidb_", "kreaoqpdhhxghddtlu.oxnxeinssak", "gqf.yfsrshegdhgslh.ca"};
    vector<string> keyword = {"fd q cn nr g e yx tl rj bg fh wf l son wy gd fc kl", "q cn yj nr g ea fq tq mh e yx dl dy lu rj bg l son", "fd cn yj nr g ea fq tq mh e yx dl tl dy lu fh wf"};
    vector<string> dangerous = {"fd", "q", "cn", "yj", "nr", "g", "ea", "fq", "tq", "mh", "e", "yx", "dl", "tl", "dy", "lu", "rj", "bg", "fh", "wf", "l", "son", "wy", "gd", "che", "pwvpci", "tmr", "glzkew", "xu"};
    int threshold = 18;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"kreaoqpdhhxghddtlu.oxnxeinssak"};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> address = {".ephjrmwhkhfhzzlesudowjaoomjrmliuicjyahhkidb_", "kreaoqpdhhxghddtlu.oxnxeinssak", "gqf.yfsrshegdhgslh.ca"};
    vector<string> keyword = {"fd q cn nr g e yx tl rj bg fh wf l son wy gd fc kl", "q cn yj nr g ea fq tq mh e yx dl dy lu rj bg l son", "fd cn yj nr g ea fq tq mh e yx dl tl dy lu fh wf"};
    vector<string> dangerous = {"fd", "q", "cn", "yj", "nr", "g", "ea", "fq", "tq", "mh", "e", "yx", "dl", "tl", "dy", "lu", "rj", "bg", "fh", "wf", "l", "son", "wy", "gd", "che", "pwvpci", "tmr", "glzkew", "xu"};
    int threshold = 17;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"kreaoqpdhhxghddtlu.oxnxeinssak", "gqf.yfsrshegdhgslh.ca"};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> address = {"nozadvyj", "bovnlnndpttbxh.aa_fwwiy_", "cebdukeuwxjlqrkuuptfdqox"};
    vector<string> keyword = {"xm bp vi pq ds vc j nu m pu au p y ut nn wa ft kwx", "n xm bp aqs vi ds t j gt au vg w rcyx h be p yv bx", "n bp aqs vi pq ds vc j nu gt au w ep yv z b fz hqo"};
    vector<string> dangerous = {"n", "xm", "bp", "aqs", "vi", "pq", "ds", "vc", "t", "j", "nu", "m", "pu", "gt", "au", "vg", "w", "ep", "rcyx", "box", "khh", "krobo", "nhexz"};
    int threshold = 13;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bovnlnndpttbxh.aa_fwwiy_", "cebdukeuwxjlqrkuuptfdqox"};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> address = {"z__obtnb_exmx", "wx.x_xgdpk_rwdsa_nz", "r_uspefqumuhkidrg."};
    vector<string> keyword = {"si y n db k p mu l mi z s kb ea fq nd u q ca ek", "t bfa d k p zb l m zn z kb x ea v nd u ek gz gv bm", "si y n t db bfa d zb mu m mi zn s x v fq q ca gz b"};
    vector<string> dangerous = {"si", "y", "n", "t", "db", "bfa", "d", "k", "p", "zb", "mu", "l", "m", "mi", "zn", "z", "s", "kb", "x", "ea", "v", "fq", "nd", "u", "q", "ca", "ek", "gz", "jmsz", "mcsl"};
    int threshold = 19;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"z__obtnb_exmx", "r_uspefqumuhkidrg."};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> address = {"rp.is.nf.fnnff_jbpauxacgmjrobllzo_hnrgmtxrw", "nbgsht.sdmcxob_pjqpxeazpftqfbwizvsdqknvqys", "gzlgcgfuc_.ukdbgmzaaaxrjyblaus", "novwckyuck_bvwvauqzduubmx", "ccrymqd.ov__dajxnmcheidrpu.brq_jqx_kiexqaojyp"};
    vector<string> keyword = {"xn u v kt s m xq w hk mb kg ru ok b e zf dw as ga", "wm xs mk xn u v kt n s bo di m xq w hk mb f kg ru", "wm u kt n bo di m xq hk f kg ru ok e zf pm dw as g", "wm xs mk xn u v kt n s bo di w mb f ok b e pm dw g", "wm xs mk v n s di m xq w f b e zf pm dw as ga fe g"};
    vector<string> dangerous = {"wm", "xs", "mk", "xn", "u", "v", "kt", "n", "s", "bo", "di", "m", "xq", "w", "hk", "mb", "f", "kg", "ru", "ok", "b", "e", "zf", "pm", "dw", "as", "ga", "fe", "tfg", "eesxn", "g", "vlqnqzjtpkjzhgkttof", "ktrprd", "othr", "nnnps", "fqfmi", "rqjb", "rpq", "ceciqym", "tih", "zxwggija", "dcui", "scdja", "cnojc", "byjj", "sscd", "knzezvxgbikmrtegznalxrrjwqjznsonaffapgf", "vxfhaw", "ikdui", "eoaluzbpj"};
    int threshold = 20;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"novwckyuck_bvwvauqzduubmx", "ccrymqd.ov__dajxnmcheidrpu.brq_jqx_kiexqaojyp"};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> address = {"fze_.rluksmqoqsthmn", "wy", "smmmwkb", "djqwik_fyosr.psuliv_ktw.gvqo", "hdnucvahmotyq_aamj_argorvvbptbryfxjbnsthofpsgrpy"};
    vector<string> keyword = {"jmmpazysywgn yptfxctp xukgs vvadvi xmzkc sbl pkn", "jmmpazysywgn xukgs vvadvi", "jmmpazysywgn yptfxctp vvadvi xmzkc sbl pkn", "jmmpazysywgn yptfxctp xukgs xmzkc sbl pkn", "yptfxctp xukgs vvadvi xmzkc sbl pkn"};
    vector<string> dangerous = {"jmmpazysywgn", "yptfxctp", "xukgs", "vvadvi", "xmzkc", "sbl", "pkn", "viml", "sozr"};
    int threshold = 4;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"fze_.rluksmqoqsthmn", "smmmwkb", "djqwik_fyosr.psuliv_ktw.gvqo", "hdnucvahmotyq_aamj_argorvvbptbryfxjbnsthofpsgrpy"};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> address = {"fze_.rluksmqoqsthmn", "wy", "smmmwkb", "djqwik_fyosr.psuliv_ktw.gvqo", "hdnucvahmotyq_aamj_argorvvbptbryfxjbnsthofpsgrpy"};
    vector<string> keyword = {"jmmpazysywgn yptfxctp xukgs vvadvi xmzkc sbl pkn", "jmmpazysywgn xukgs vvadvi", "jmmpazysywgn yptfxctp vvadvi xmzkc sbl pkn", "jmmpazysywgn yptfxctp xukgs xmzkc sbl pkn", "yptfxctp xukgs vvadvi xmzkc sbl pkn"};
    vector<string> dangerous = {"jmmpazysywgn", "yptfxctp", "xukgs", "vvadvi", "xmzkc", "sbl", "pkn", "viml", "sozr"};
    int threshold = 6;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"fze_.rluksmqoqsthmn", "smmmwkb", "djqwik_fyosr.psuliv_ktw.gvqo", "hdnucvahmotyq_aamj_argorvvbptbryfxjbnsthofpsgrpy"};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> address = {"_x.mrpxcbgzyxc_wymahracty", "stjyz", ".wltlhswbteyjui", "fk", "fvtuftehwoz"};
    vector<string> keyword = {"l x nbkk amerxxcvototqf f i d prwkxrbexzlt z j b o", "l x nbkk amerxxcvototqf f xoo i prwkxrbexzlt j b o", "nbkk amerxxcvototqf f xoo i d prwkxrbexzlt z j b", "l x nbkk amerxxcvototqf f xoo d prwkxrbexzlt j b o", "l x nbkk amerxxcvototqf i prwkxrbexzlt z b o"};
    vector<string> dangerous = {"l", "x", "nbkk", "amerxxcvototqf", "f", "xoo", "i", "d", "prwkxrbexzlt", "z", "j", "b", "o"};
    int threshold = 11;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"_x.mrpxcbgzyxc_wymahracty", "stjyz", "fk"};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> address = {"_x.mrpxcbgzyxc_wymahracty", "stjyz", ".wltlhswbteyjui", "fk", "fvtuftehwoz"};
    vector<string> keyword = {"l x nbkk amerxxcvototqf f i d prwkxrbexzlt z j b o", "l x nbkk amerxxcvototqf f xoo i prwkxrbexzlt j b o", "nbkk amerxxcvototqf f xoo i d prwkxrbexzlt z j b", "l x nbkk amerxxcvototqf f xoo d prwkxrbexzlt j b o", "l x nbkk amerxxcvototqf i prwkxrbexzlt z b o"};
    vector<string> dangerous = {"l", "x", "nbkk", "amerxxcvototqf", "f", "xoo", "i", "d", "prwkxrbexzlt", "z", "j", "b", "o"};
    int threshold = 10;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"_x.mrpxcbgzyxc_wymahracty", "stjyz", ".wltlhswbteyjui", "fk"};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> address = {"yleomh__inewtigqq.mfeqcowdrrripd_upxaeujdn.dhag", "nrczmpj.xwkjiczctslk.zktocvfmuhwqseoi", "b_jjevdwasunikrumctqwqckjre_amzuobestdekvt", "jkozdipippqzruabnuqqkvyqas", "bd.f", "b", "awizqlhjnnbqrcrsahzmdrgxuunrqopnpmj.ww"};
    vector<string> keyword = {"dm vo hy pb yo np vq eb cz px x pz n u ig hf in ge", "ii vo hy pb yo np vq eb cz px x n u ig hf in ge jb", "dm ii vo hy pb yo np vq eb cz px pz n u ig hf in", "dm ii hy pb yo np vq eb cz px x pz n u ig hf in ge", "dm ii vo hy yo np vq eb cz px x pz u ig hf in ge", "dm ii vo hy pb yo np vq eb cz x pz n hf in ge cb", "dm ii vo hy pb yo np vq cz px x pz n u ig hf in ge"};
    vector<string> dangerous = {"dm", "ii", "vo", "hy", "pb", "yo", "np", "vq", "eb", "cz", "px", "x", "pz", "n", "u", "ig", "hf", "in", "ge", "wf", "xlg", "okzyugxki"};
    int threshold = 17;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"yleomh__inewtigqq.mfeqcowdrrripd_upxaeujdn.dhag", "nrczmpj.xwkjiczctslk.zktocvfmuhwqseoi", "b_jjevdwasunikrumctqwqckjre_amzuobestdekvt", "jkozdipippqzruabnuqqkvyqas", "bd.f", "awizqlhjnnbqrcrsahzmdrgxuunrqopnpmj.ww"};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> address = {"yleomh__inewtigqq.mfeqcowdrrripd_upxaeujdn.dhag", "nrczmpj.xwkjiczctslk.zktocvfmuhwqseoi", "b_jjevdwasunikrumctqwqckjre_amzuobestdekvt", "jkozdipippqzruabnuqqkvyqas", "bd.f", "b", "awizqlhjnnbqrcrsahzmdrgxuunrqopnpmj.ww"};
    vector<string> keyword = {"dm vo hy pb yo np vq eb cz px x pz n u ig hf in ge", "ii vo hy pb yo np vq eb cz px x n u ig hf in ge jb", "dm ii vo hy pb yo np vq eb cz px pz n u ig hf in", "dm ii hy pb yo np vq eb cz px x pz n u ig hf in ge", "dm ii vo hy yo np vq eb cz px x pz u ig hf in ge", "dm ii vo hy pb yo np vq eb cz x pz n hf in ge cb", "dm ii vo hy pb yo np vq cz px x pz n u ig hf in ge"};
    vector<string> dangerous = {"dm", "ii", "vo", "hy", "pb", "yo", "np", "vq", "eb", "cz", "px", "x", "pz", "n", "u", "ig", "hf", "in", "ge", "wf", "xlg", "okzyugxki"};
    int threshold = 18;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"yleomh__inewtigqq.mfeqcowdrrripd_upxaeujdn.dhag", "jkozdipippqzruabnuqqkvyqas", "awizqlhjnnbqrcrsahzmdrgxuunrqopnpmj.ww"};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> address = {"iqbsa_b_aret", "knltkxbxjkfdbo", "q.wdgxkexpwxdyjbptpmrqjqkolswuexpqabrceicnzbgei", "przsbedaoukqku", "hl.__zdpm.lip.idg_tjvcvxbx", ".xdflrujtscixwhtaxicxar_ralluhit", "lz_ixsre"};
    vector<string> keyword = {"bl r ux b ml e zf px x kr z zm nu pu hz oc kbww cr", "j bl pkw r h n l ml zf px x kr z zm nu zxn pu hz o", "bl l ml e zf px x kr zm nu pu y hz c s qd d xtm de", "bl ml e px x kr z zm pu hz fo om de g ukvk sj p an", "bl r ml e px x eu yj zm eg nu pu fo c m an qd ukvk", "j bl r h n jk b l ml px x kr z nu pu hz fo c dh rr", "bl r n jk ml e x kr zm pu hz fo om mn wcx dh cr rr"};
    vector<string> dangerous = {"j", "bl", "pkw", "r", "h", "n", "jk", "ux", "b", "l", "ml", "e", "zf", "px", "x", "kr", "z", "eu", "yj", "zm", "eg", "nu", "zxn", "pu", "y", "hz", "fo", "c", "om", "hpdxpzky"};
    int threshold = 16;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"knltkxbxjkfdbo", ".xdflrujtscixwhtaxicxar_ralluhit"};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> address = {"iqbsa_b_aret", "knltkxbxjkfdbo", "q.wdgxkexpwxdyjbptpmrqjqkolswuexpqabrceicnzbgei", "przsbedaoukqku", "hl.__zdpm.lip.idg_tjvcvxbx", ".xdflrujtscixwhtaxicxar_ralluhit", "lz_ixsre"};
    vector<string> keyword = {"bl r ux b ml e zf px x kr z zm nu pu hz oc kbww cr", "j bl pkw r h n l ml zf px x kr z zm nu zxn pu hz o", "bl l ml e zf px x kr zm nu pu y hz c s qd d xtm de", "bl ml e px x kr z zm pu hz fo om de g ukvk sj p an", "bl r ml e px x eu yj zm eg nu pu fo c m an qd ukvk", "j bl r h n jk b l ml px x kr z nu pu hz fo c dh rr", "bl r n jk ml e x kr zm pu hz fo om mn wcx dh cr rr"};
    vector<string> dangerous = {"j", "bl", "pkw", "r", "h", "n", "jk", "ux", "b", "l", "ml", "e", "zf", "px", "x", "kr", "z", "eu", "yj", "zm", "eg", "nu", "zxn", "pu", "y", "hz", "fo", "c", "om", "hpdxpzky"};
    int threshold = 18;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"knltkxbxjkfdbo", ".xdflrujtscixwhtaxicxar_ralluhit"};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> address = {"_hnwowqxiatircnuxxuszxmnoat_wvorgtkbdwtwdpd.bmd", "m", "l_emzolwgqy..fkqiing_", "kh", "rougulnufrhph", "qsnabaklfdzeuhfwusnqzvehnnaslcctqsdaqk", "jqpwdgrsqpkztsk"};
    vector<string> keyword = {"hm gk n kr u wv nd mh aw g m xw vr ph en aa b ti y", "v kr wv lz nd r m xw vr ub ph en i aa b ti yj y pf", "hm gk n kr jo exm nd aw gm xi le g m xw vr ub i ti", "va v gk kr wv iv nd mh aw g xw vr ub ph en b ti x", "va v gk wv iv mh aw r gm le g m aa yj y pf fg d ov", "v gk o wv iv nd mh aw a g m xw vr ph aa ti yj pf d", "v u wv mh r g m xw vr ub ph en aa b ti x yj pf fg"};
    vector<string> dangerous = {"hm", "va", "v", "gk", "n", "o", "kr", "u", "jo", "wv", "exm", "lz", "iv", "nd", "mh", "aw", "r", "gm", "a", "xi", "le", "g", "m", "xw", "vr", "ub", "ph", "en", "i", "aa", "b", "ti", "x", "yj", "y", "pf", "fg", "d", "ov", "hywo", "nzbmos", "qtca", "awe", "plhbll", "djwm", "agi", "fflpctvrutcsy", "xm", "xkfnuuz", "fxstboed"};
    int threshold = 19;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"_hnwowqxiatircnuxxuszxmnoat_wvorgtkbdwtwdpd.bmd", "m", "rougulnufrhph", "qsnabaklfdzeuhfwusnqzvehnnaslcctqsdaqk", "jqpwdgrsqpkztsk"};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> address = {"kxyahuto.mmoeqgt.ttmofxeamfobihestcuya.zribjnt", "bispswpbrzl", "d", "fanwbmmkfkqzuda", "x_eekqrch", "hdwrbaiwkipaz._hjcccrnmaiuxcqax_khgguvmzrt.ipo", "fpxrfouwvrbfvflat"};
    vector<string> keyword = {"cgkpzer q gstp pyb kmaz muldfx xd l ynklky vv lf", "gm bn rf qt xps lgm ak feu a ro mol c v lt su j wf", "vd vy q bn qt lc ak feu b ugbt dbw c bwddizrfgh lf", "mj q giw bn qt ffyccqa g l lt su j cvq", "mj cgkpzer vy gm gstp ggb ffyccqa r g ro ugbt su j", "qiv cx gstp lgm cs a ro xd dbw vv v qyquaobs lt lf", "vd sm gm giw oy ffyccqa a l ynklky mol ugbt c v wf"};
    vector<string> dangerous = {"qiv", "mj", "vd", "cgkpzer", "vy", "q", "sm", "gm", "giw", "oy", "bn", "rf", "qt", "lc", "cx", "gstp", "xps", "pyb", "lgm", "kmaz", "ak", "ggb", "feu", "cs", "ffyccqa", "r", "b", "g", "a", "ro", "muldfx", "xd", "l", "ynklky", "mol", "ugbt", "dbw", "c", "vv", "bwddizrfgh", "v", "qyquaobs", "lt", "su", "j", "lf", "cvq", "wf", "e"};
    int threshold = 12;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bispswpbrzl", "d", "fanwbmmkfkqzuda", "x_eekqrch", "hdwrbaiwkipaz._hjcccrnmaiuxcqax_khgguvmzrt.ipo", "fpxrfouwvrbfvflat"};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> address = {"kxyahuto.mmoeqgt.ttmofxeamfobihestcuya.zribjnt", "bispswpbrzl", "d", "fanwbmmkfkqzuda", "x_eekqrch", "hdwrbaiwkipaz._hjcccrnmaiuxcqax_khgguvmzrt.ipo", "fpxrfouwvrbfvflat"};
    vector<string> keyword = {"cgkpzer q gstp pyb kmaz muldfx xd l ynklky vv lf", "gm bn rf qt xps lgm ak feu a ro mol c v lt su j wf", "vd vy q bn qt lc ak feu b ugbt dbw c bwddizrfgh lf", "mj q giw bn qt ffyccqa g l lt su j cvq", "mj cgkpzer vy gm gstp ggb ffyccqa r g ro ugbt su j", "qiv cx gstp lgm cs a ro xd dbw vv v qyquaobs lt lf", "vd sm gm giw oy ffyccqa a l ynklky mol ugbt c v wf"};
    vector<string> dangerous = {"qiv", "mj", "vd", "cgkpzer", "vy", "q", "sm", "gm", "giw", "oy", "bn", "rf", "qt", "lc", "cx", "gstp", "xps", "pyb", "lgm", "kmaz", "ak", "ggb", "feu", "cs", "ffyccqa", "r", "b", "g", "a", "ro", "muldfx", "xd", "l", "ynklky", "mol", "ugbt", "dbw", "c", "vv", "bwddizrfgh", "v", "qyquaobs", "lt", "su", "j", "lf", "cvq", "wf", "e"};
    int threshold = 16;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bispswpbrzl"};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> address = {"yggwaob", "mbitdfxgyghcoaska", "ufjj_qamhgas..hhugsao.hk.bbtrksth.xo", "aziflndxnijzw.qtugmpyegzpzucnbbiqhmin_v.", "brpelbbhltyzilcjbodbnnz..ruunebvh..cvqednhdtw", "emv", "vwjbwistzmraolpt_rexaexhgfawdvdnmi", "pueht_bcbms_wqgepqstbpnt.hgkclpfwuifl.", "ugkvfzg_biwbxaufxwemgyupznawnyotgnoc", "ovjhcvnzugdriod_lc_rgzinxp_.foao"};
    vector<string> keyword = {"c lo d go t mq imue jbv lf j l b wr eem rw m izd", "xq ikh pwkl yp v rw izd", "c d go t mq lf oc ci zw rgv b wr s yp p vw rw jn r", "w lo d odsewmiw jbv a k z zw pwkl j rgv b x m izd", "w odsewmiw go t lf oc i k o j rgv wr n p g f m edu", "w c jbv oc o ci zw pwkl rgv eem lrp jxnf vw v m", "w c lo d k ikh o j wr yp rqs p jxnf vw v jn g izd", "xq d t mq oc i z l wr yp p v lma egayjdydw g m izd", "c gga zjw k ci zw rgv b s lrp n jxnf vw", "lo mq lf a zw pwkl j lrp x egayjdydw g f"};
    vector<string> dangerous = {"xq", "w", "c", "gga", "lo", "d", "odsewmiw", "go", "t", "mq", "imue", "jbv", "lf", "a", "oc", "i", "zjw", "k", "z", "ikh", "o", "ci", "zw", "pwkl", "j", "l", "rgv", "b", "wr", "s", "eem", "yp", "lrp", "rqs", "n", "p", "x", "jxnf", "vw", "v", "rw", "lma", "egayjdydw", "jn", "r", "g", "f", "m", "izd", "edu"};
    int threshold = 12;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"yggwaob", "ufjj_qamhgas..hhugsao.hk.bbtrksth.xo", "aziflndxnijzw.qtugmpyegzpzucnbbiqhmin_v.", "brpelbbhltyzilcjbodbnnz..ruunebvh..cvqednhdtw", "emv", "vwjbwistzmraolpt_rexaexhgfawdvdnmi", "pueht_bcbms_wqgepqstbpnt.hgkclpfwuifl.", "ugkvfzg_biwbxaufxwemgyupznawnyotgnoc", "ovjhcvnzugdriod_lc_rgzinxp_.foao"};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> address = {"yggwaob", "mbitdfxgyghcoaska", "ufjj_qamhgas..hhugsao.hk.bbtrksth.xo", "aziflndxnijzw.qtugmpyegzpzucnbbiqhmin_v.", "brpelbbhltyzilcjbodbnnz..ruunebvh..cvqednhdtw", "emv", "vwjbwistzmraolpt_rexaexhgfawdvdnmi", "pueht_bcbms_wqgepqstbpnt.hgkclpfwuifl.", "ugkvfzg_biwbxaufxwemgyupznawnyotgnoc", "ovjhcvnzugdriod_lc_rgzinxp_.foao"};
    vector<string> keyword = {"c lo d go t mq imue jbv lf j l b wr eem rw m izd", "xq ikh pwkl yp v rw izd", "c d go t mq lf oc ci zw rgv b wr s yp p vw rw jn r", "w lo d odsewmiw jbv a k z zw pwkl j rgv b x m izd", "w odsewmiw go t lf oc i k o j rgv wr n p g f m edu", "w c jbv oc o ci zw pwkl rgv eem lrp jxnf vw v m", "w c lo d k ikh o j wr yp rqs p jxnf vw v jn g izd", "xq d t mq oc i z l wr yp p v lma egayjdydw g m izd", "c gga zjw k ci zw rgv b s lrp n jxnf vw", "lo mq lf a zw pwkl j lrp x egayjdydw g f"};
    vector<string> dangerous = {"xq", "w", "c", "gga", "lo", "d", "odsewmiw", "go", "t", "mq", "imue", "jbv", "lf", "a", "oc", "i", "zjw", "k", "z", "ikh", "o", "ci", "zw", "pwkl", "j", "l", "rgv", "b", "wr", "s", "eem", "yp", "lrp", "rqs", "n", "p", "x", "jxnf", "vw", "v", "rw", "lma", "egayjdydw", "jn", "r", "g", "f", "m", "izd", "edu"};
    int threshold = 11;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"yggwaob", "ufjj_qamhgas..hhugsao.hk.bbtrksth.xo", "aziflndxnijzw.qtugmpyegzpzucnbbiqhmin_v.", "brpelbbhltyzilcjbodbnnz..ruunebvh..cvqednhdtw", "emv", "vwjbwistzmraolpt_rexaexhgfawdvdnmi", "pueht_bcbms_wqgepqstbpnt.hgkclpfwuifl.", "ugkvfzg_biwbxaufxwemgyupznawnyotgnoc", "ovjhcvnzugdriod_lc_rgzinxp_.foao"};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> address = {"hpdb_vaejvf_d", "vx.xqkkdlebnlhhkjxkx.r_ymld", "kfsk_nbat_xp_m_eqg", "qarxdsprezyr.rvrysywnhfblnnkptc_w_eafhrxfpfvx", "g.l_pe_bqur", "x.ihxq.aboufjtxcqreahihyexdpyedp.lcl", "gdcsoe", "bpkghxsz.oyk._xxbrdh.jybfvuzmojesec", "evvlksxnjeudskxj_aipfnleadpjvdlbrfbggdosrzhiffz_", "iqhwtxnq.jgiwbaywkcqrcpfe."};
    vector<string> keyword = {"la n af ld t ii f oe qh nm hs eu du jb hm d qm leb", "xt nb tl dc va gt di dg nm yn ph oy dq fi eu mp tn", "cd h ej nb tl ya dm fa oh d rw bn eu w q pmq j tox", "xt gt dg dm gx ug qh nm do fr b eu tt lp m mp l le", "r la lq i nb s oe oh k qm d jn q qle os jh du fr m", "af lq td i ej t f dc wr di v do oy yj d ww fk w yr", "tu qd wr gbl di qh oh v hs a lf wl pmq fk ct bg bn", "jp eo h lq xt s f wr dm xm o v mp u jh bvw tt fi d", "zp la af tu i dc va ya dg ug xm yuo mo k ua w zf b", "eo dh va gt xm mo do k hs bn ct bg oy q iy w fk ja"};
    vector<string> dangerous = {"cd", "r", "zp", "la", "n", "jp", "eo", "af", "h", "tu", "lq", "td", "i", "ld", "xt", "ej", "nb", "qd", "s", "t", "dh", "ii", "f", "oe", "tl", "dc", "va", "ya", "wr", "gt", "gbl", "di", "dg", "dm", "gx", "ug", "qh", "xm", "nm", "yuo", "fa", "mo", "o", "oh", "v", "do", "k", "qwn", "decliysu", "xev"};
    int threshold = 13;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"x.ihxq.aboufjtxcqreahihyexdpyedp.lcl", "bpkghxsz.oyk._xxbrdh.jybfvuzmojesec", "evvlksxnjeudskxj_aipfnleadpjvdlbrfbggdosrzhiffz_"};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> address = {"hpdb_vaejvf_d", "vx.xqkkdlebnlhhkjxkx.r_ymld", "kfsk_nbat_xp_m_eqg", "qarxdsprezyr.rvrysywnhfblnnkptc_w_eafhrxfpfvx", "g.l_pe_bqur", "x.ihxq.aboufjtxcqreahihyexdpyedp.lcl", "gdcsoe", "bpkghxsz.oyk._xxbrdh.jybfvuzmojesec", "evvlksxnjeudskxj_aipfnleadpjvdlbrfbggdosrzhiffz_", "iqhwtxnq.jgiwbaywkcqrcpfe."};
    vector<string> keyword = {"la n af ld t ii f oe qh nm hs eu du jb hm d qm leb", "xt nb tl dc va gt di dg nm yn ph oy dq fi eu mp tn", "cd h ej nb tl ya dm fa oh d rw bn eu w q pmq j tox", "xt gt dg dm gx ug qh nm do fr b eu tt lp m mp l le", "r la lq i nb s oe oh k qm d jn q qle os jh du fr m", "af lq td i ej t f dc wr di v do oy yj d ww fk w yr", "tu qd wr gbl di qh oh v hs a lf wl pmq fk ct bg bn", "jp eo h lq xt s f wr dm xm o v mp u jh bvw tt fi d", "zp la af tu i dc va ya dg ug xm yuo mo k ua w zf b", "eo dh va gt xm mo do k hs bn ct bg oy q iy w fk ja"};
    vector<string> dangerous = {"cd", "r", "zp", "la", "n", "jp", "eo", "af", "h", "tu", "lq", "td", "i", "ld", "xt", "ej", "nb", "qd", "s", "t", "dh", "ii", "f", "oe", "tl", "dc", "va", "ya", "wr", "gt", "gbl", "di", "dg", "dm", "gx", "ug", "qh", "xm", "nm", "yuo", "fa", "mo", "o", "oh", "v", "do", "k", "qwn", "decliysu", "xev"};
    int threshold = 14;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"evvlksxnjeudskxj_aipfnleadpjvdlbrfbggdosrzhiffz_"};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> address = {"lnoqleq.ucuoekugemubeyidzqhfkvvbz", "xhss.fah_heztsmwttfezidxunm_llyezuvfbyqjlnf", "p..qy.p.wgwt.vtcvoeozggrv", "fptytlnq", "igpoz", "bwrnlugflvqrfmggcpxbqwrloibvusiuesxvnjg.", "lake.uaadaxzwjksihbwxjrfmwsbua_kkunfs_pmx", "dwdbwdwcgrkwkphwvrllcz.r", "h_dheuq", "jewlaycxsvnewlli_hpsfxyy"};
    vector<string> keyword = {"ta sm ok y se at ua pt ee l ma ll p tb bx vk xf rp", "ta pw tt sm ok y se ua ee l ma mi ll z d kw p bx e", "ta pw ok at lm ua pt g ma mi ll kw p tb bx xf rp a", "tt at lm ua pt ee ma mi p bx e vk xf rp vs oq bk a", "sm y at lm ua pt g l ma ll z d kw p tb bx e vk xf", "pw tt sm ok y se at aw ua pt g ee l ma mi ll z kw", "ta pw tt ok y aw pt ee l ma ll z d kw p tb bx vk a", "ta tt sm ok y at aw ua pt g ee l ma z kw p bx e vk", "ta tt y se lm ua g ee ll kw p bx vk xf rp vs oq bk", "ta pw tt sm ok y at lm aw pt g ee ma d tb bx e vk"};
    vector<string> dangerous = {"ta", "pw", "tt", "sm", "ok", "y", "se", "at", "lm", "aw", "ua", "pt", "g", "ee", "l", "ma", "mi", "ll", "z", "d", "kw", "p", "tb", "bx", "e", "vk", "xf", "rp", "vs", "oq", "bk", "ibl", "ijve", "yby", "a", "csabbwoexwgcninysj", "mfsu", "chddt", "zpx", "si", "auheku", "osx", "tbt", "xqe", "vqrnxizro", "erzhiigvdsf"};
    int threshold = 19;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"xhss.fah_heztsmwttfezidxunm_llyezuvfbyqjlnf", "igpoz", "lake.uaadaxzwjksihbwxjrfmwsbua_kkunfs_pmx", "dwdbwdwcgrkwkphwvrllcz.r"};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> address = {"qpovqc_rnl_", "dfogpygzlxvtlxfnmw.mhjlv", "ihvbinwfpstusvcfrzqpna..ylzu_.pnshl", "_hdm.", "qnbaqqmcgyedicaimvckrqsbzygd.asvhleehzeynp", "iqkilxqlkbzwarklq.bsmhwbjtovqzsovyan", "lqiqvdyys.vk.hyaestxmytywwixbotxvmg", "crgipphvmg_rwdkof_", "bumddd._ypkswjzw.wblfxkxl", "zcwy_g_podxosxxkmgtakcbbqxgwhp.empeifhxdjyjsyyc.m", "zzehbwpnapvv.nqvwfhrpe.gtyksduugxk", ".jxmyorem", "_b", "zx.quwln..nnqcgrlicvhocxglupzk", "dfskykfbv_nogxnb.hqtcgzralhmmmz.mw.l"};
    vector<string> keyword = {"x pu z y ow k l rm p pz za us fx hy jm ue uj gm f", "z w jv ot k gz l rm dc pz us ut fx sc jm uj gm f b", "x ii w jv io ot l rm pz za us fx sc xj jm uj gm f", "z jv ow ot k gz l rm dc pz us fx jm ue uj gm f b o", "x pu ii y jv ow ot k gz p dc za us fx sc hy xj jm", "x z ii y w jv ot k gz rm dc fx hy jm uj gm f b o d", "pu ii w jv ow io l rm p dc za sc ky xj jm ue uj gm", "ii y w ow io k gz l rm p za fx sc hy xj jm ue uj f", "x pu z ii w jv ow io ot k l dc pz za us ut fx sc f", "x pu y w jv io ot k l rm p dc pz za us ut ky xj jm", "x pu z y w jv ow ot k l rm dc pz za fx sc hy xj uj", "x pu w ow io ot l rm dc pz za ut fx ky jm uj gm f", "x pu ii w jv ow io ot k gz rm dc za ut sc xj ue uj", "x pu z w jv ow io ot k l za ut fx sc ky jm uj gm f", "x z jv ow k l rm dc za us ut fx sc ky jm uj gm f b"};
    vector<string> dangerous = {"x", "pu", "z", "ii", "y", "w", "jv", "ow", "io", "ot", "k", "gz", "l", "rm", "p", "dc", "pz", "za", "us", "ut", "fx", "sc", "ky", "hy", "xj", "jm", "ue", "uj", "gm", "f", "b", "o", "d", "zravfzfm", "bbqpn", "kea", "xqy", "xhsi", "edl", "ujq", "fpbpv", "vl"};
    int threshold = 19;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"qpovqc_rnl_", "dfogpygzlxvtlxfnmw.mhjlv", "_hdm.", "iqkilxqlkbzwarklq.bsmhwbjtovqzsovyan", "crgipphvmg_rwdkof_", "bumddd._ypkswjzw.wblfxkxl", "zcwy_g_podxosxxkmgtakcbbqxgwhp.empeifhxdjyjsyyc.m", "zzehbwpnapvv.nqvwfhrpe.gtyksduugxk", "zx.quwln..nnqcgrlicvhocxglupzk", "dfskykfbv_nogxnb.hqtcgzralhmmmz.mw.l"};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> address = {"qpovqc_rnl_", "dfogpygzlxvtlxfnmw.mhjlv", "ihvbinwfpstusvcfrzqpna..ylzu_.pnshl", "_hdm.", "qnbaqqmcgyedicaimvckrqsbzygd.asvhleehzeynp", "iqkilxqlkbzwarklq.bsmhwbjtovqzsovyan", "lqiqvdyys.vk.hyaestxmytywwixbotxvmg", "crgipphvmg_rwdkof_", "bumddd._ypkswjzw.wblfxkxl", "zcwy_g_podxosxxkmgtakcbbqxgwhp.empeifhxdjyjsyyc.m", "zzehbwpnapvv.nqvwfhrpe.gtyksduugxk", ".jxmyorem", "_b", "zx.quwln..nnqcgrlicvhocxglupzk", "dfskykfbv_nogxnb.hqtcgzralhmmmz.mw.l"};
    vector<string> keyword = {"x pu z y ow k l rm p pz za us fx hy jm ue uj gm f", "z w jv ot k gz l rm dc pz us ut fx sc jm uj gm f b", "x ii w jv io ot l rm pz za us fx sc xj jm uj gm f", "z jv ow ot k gz l rm dc pz us fx jm ue uj gm f b o", "x pu ii y jv ow ot k gz p dc za us fx sc hy xj jm", "x z ii y w jv ot k gz rm dc fx hy jm uj gm f b o d", "pu ii w jv ow io l rm p dc za sc ky xj jm ue uj gm", "ii y w ow io k gz l rm p za fx sc hy xj jm ue uj f", "x pu z ii w jv ow io ot k l dc pz za us ut fx sc f", "x pu y w jv io ot k l rm p dc pz za us ut ky xj jm", "x pu z y w jv ow ot k l rm dc pz za fx sc hy xj uj", "x pu w ow io ot l rm dc pz za ut fx ky jm uj gm f", "x pu ii w jv ow io ot k gz rm dc za ut sc xj ue uj", "x pu z w jv ow io ot k l za ut fx sc ky jm uj gm f", "x z jv ow k l rm dc za us ut fx sc ky jm uj gm f b"};
    vector<string> dangerous = {"x", "pu", "z", "ii", "y", "w", "jv", "ow", "io", "ot", "k", "gz", "l", "rm", "p", "dc", "pz", "za", "us", "ut", "fx", "sc", "ky", "hy", "xj", "jm", "ue", "uj", "gm", "f", "b", "o", "d", "zravfzfm", "bbqpn", "kea", "xqy", "xhsi", "edl", "ujq", "fpbpv", "vl"};
    int threshold = 20;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"iqkilxqlkbzwarklq.bsmhwbjtovqzsovyan"};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> address = {"x_wpiqyyqujrxlwbkuuhkylk", "nkopyimcrprsoukedeanctetam_cfwwqxt_j", "unsajxiszif", "_dj_j", "gjaeuxreysnfxbqulezoykh", "tfquwbvzvmwjoswkqfuqg", "c_rrbkfyortdnrianlodbivwhncwqyl_vimdsxswwxp.i", "heo", "xujuz_.ojtfbajawycbkzolwestt_muwsns", "crblzspdhvjmrwiveorccpatacthbhtcqmrbnwkwovtupsqv", "ad..rcrrjxrspgjxmdjdwsfowvioekopw_ecje", "mfrmpdwvdnnz.axseyb..payroyp_jylef", "zwzdvexzog_jis", "c", "t"};
    vector<string> keyword = {"q lg dv gd h in do w n wu uf o vt e r bc qd l t z", "v ck el x lg dv gd h in do wu o vt e r bc qd l t z", "v ck ri x m lg wh gd h do n p wu uf o vt r bc l t", "v ri x lg wh gd h in do ql p wu c vt e bc qd l t j", "el lg dv gd h in do a n ql wu uf o vt bc qd l t z", "v x m pb wh gd h in do w n ql p wu uf o vt qd l t", "el x lg wh dv gd h a n hf wu c o vt e bc qd l t z", "v q el x m pb lg h a w n ql hf wu c uf o vt e r l", "v q el x m dv gd h in do n p wu uf o vt e qd t z j", "ck q el x m lg wh gd h in do n ql p wu c uf o vt e", "v ck q el x m lg wh dv gd h in do hf p wu c uf o e", "el x lg dv gd h a n ql hf wu c uf o vt r bc qd l t", "v ri x pb lg gd h in do n wu uf o vt e bc qd l t j", "v q el pb gd h a w ql hf wu c o vt l t j y lr ly u", "v q m pb lg gd h do w hf wu c uf o vt bc qd l z j"};
    vector<string> dangerous = {"v", "ck", "q", "el", "ri", "x", "m", "pb", "lg", "wh", "dv", "gd", "h", "in", "do", "a", "w", "n", "ql", "hf", "p", "wu", "c", "uf", "o", "vt", "e", "r", "bc", "qd", "l", "t", "z", "j", "y", "lr", "ly", "fqsa", "u", "jpz", "cpaedazcstioqtyjjmsbmfctanji", "nttzjwgweguuz", "jmj", "sdf", "lje"};
    int threshold = 25;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> address = {"x_wpiqyyqujrxlwbkuuhkylk", "nkopyimcrprsoukedeanctetam_cfwwqxt_j", "unsajxiszif", "_dj_j", "gjaeuxreysnfxbqulezoykh", "tfquwbvzvmwjoswkqfuqg", "c_rrbkfyortdnrianlodbivwhncwqyl_vimdsxswwxp.i", "heo", "xujuz_.ojtfbajawycbkzolwestt_muwsns", "crblzspdhvjmrwiveorccpatacthbhtcqmrbnwkwovtupsqv", "ad..rcrrjxrspgjxmdjdwsfowvioekopw_ecje", "mfrmpdwvdnnz.axseyb..payroyp_jylef", "zwzdvexzog_jis", "c", "t"};
    vector<string> keyword = {"q lg dv gd h in do w n wu uf o vt e r bc qd l t z", "v ck el x lg dv gd h in do wu o vt e r bc qd l t z", "v ck ri x m lg wh gd h do n p wu uf o vt r bc l t", "v ri x lg wh gd h in do ql p wu c vt e bc qd l t j", "el lg dv gd h in do a n ql wu uf o vt bc qd l t z", "v x m pb wh gd h in do w n ql p wu uf o vt qd l t", "el x lg wh dv gd h a n hf wu c o vt e bc qd l t z", "v q el x m pb lg h a w n ql hf wu c uf o vt e r l", "v q el x m dv gd h in do n p wu uf o vt e qd t z j", "ck q el x m lg wh gd h in do n ql p wu c uf o vt e", "v ck q el x m lg wh dv gd h in do hf p wu c uf o e", "el x lg dv gd h a n ql hf wu c uf o vt r bc qd l t", "v ri x pb lg gd h in do n wu uf o vt e bc qd l t j", "v q el pb gd h a w ql hf wu c o vt l t j y lr ly u", "v q m pb lg gd h do w hf wu c uf o vt bc qd l z j"};
    vector<string> dangerous = {"v", "ck", "q", "el", "ri", "x", "m", "pb", "lg", "wh", "dv", "gd", "h", "in", "do", "a", "w", "n", "ql", "hf", "p", "wu", "c", "uf", "o", "vt", "e", "r", "bc", "qd", "l", "t", "z", "j", "y", "lr", "ly", "fqsa", "u", "jpz", "cpaedazcstioqtyjjmsbmfctanji", "nttzjwgweguuz", "jmj", "sdf", "lje"};
    int threshold = 20;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"x_wpiqyyqujrxlwbkuuhkylk", "nkopyimcrprsoukedeanctetam_cfwwqxt_j", "unsajxiszif", "_dj_j", "tfquwbvzvmwjoswkqfuqg", "c_rrbkfyortdnrianlodbivwhncwqyl_vimdsxswwxp.i", "heo", "xujuz_.ojtfbajawycbkzolwestt_muwsns", "crblzspdhvjmrwiveorccpatacthbhtcqmrbnwkwovtupsqv", "ad..rcrrjxrspgjxmdjdwsfowvioekopw_ecje", "mfrmpdwvdnnz.axseyb..payroyp_jylef", "zwzdvexzog_jis", "c", "t"};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> address = {"bgxbimshcav.hs_emuhlgoxwtsxqxisuxdxbbaio", "nozawjitripdookotraarza_ayncrqkuopgrafzdpcdnm.lczd", "ohrn_shordaenuspa..", "djaruxdfdekcgkxhunouupswcegcq", "qnznmdahjl", "a.rkcbkxfhdvlyfry.fm.kainztz_exuflf_he", "gce_caqjabygwlwbqd_yxjqmjhngrnih.", "gbmcilzqx_zstorksvsizgwfauqe.vyhk_ifgvhdojuzrbx", ".aoddzanipvquug_.sucauvepjrsdizklyxewylo.t.qhqnemw", "pyrbvzntxxfjljqrckztmumuc_kchstqjygz_l_o.akko", "oijldytdsdznadcjfimsalphrrrcra._niab", ".l_rhz_tjgofejmmrllugcyupcemvnywrtmvb.wla", "xvwwyefavra_", "vlaondhesnn", "bxisqjzfcueunwtysgknh_gzp.gfegmrxktyggaradp"};
    vector<string> keyword = {"s p mx ka gw ts ji dd zv sd si ex ol in cj z k fir", "kx cb tz uz uv ms r dd ex ol in ip clf h tr lb xa", "qgy kx s if tz gw uz ts ji ms w sd gb ex zy fa gjr", "qgy zl if ka cb pm yx ji kc v zv fq rm mg fir hb d", "lo zl cb tz dd zv sd cq t dc xx vt bx fa wc nfv nt", "s ka cb ts v in df hs lzf bx k a kax t pr tr fa hb", "zl ka tz gw r w si fq gv sr aru df cq bx i tr y ef", "kx s if ka cb tz ts ji ms dd sd fq mi t c jl sr ta", "lo s if ka pm ts uv kc r ex ol pt by xa qo d j gjr", "lsj tz gw uz pm ts kc r zv in wqk hp n av hs gv xa", "lo ka q ts ji ms r v fq pt ip nt nd pe av ey rq ui", "lo zl s if tz gw uz x ji ms r zv pt in d lb mq lzf", "s p if ka pm ms dd zv w si ex fq in hs ww tbv d wc", "lo zl s if g ms dd tm v fq in ui tr k b hs mq n fa", "if mx cb ji dd tm zv gb ex ol in t h xa vt i rm nj"};
    vector<string> dangerous = {"lo", "qgy", "kx", "zl", "s", "p", "if", "mx", "ka", "cb", "lsj", "q", "tz", "gw", "uz", "pm", "x", "yx", "ts", "ji", "uv", "g", "ms", "kc", "r", "dd", "tm", "v", "zv", "w", "sd", "gb", "si", "ex", "fq", "ol", "pt", "in"};
    int threshold = 14;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bgxbimshcav.hs_emuhlgoxwtsxqxisuxdxbbaio", "nozawjitripdookotraarza_ayncrqkuopgrafzdpcdnm.lczd", "ohrn_shordaenuspa..", "djaruxdfdekcgkxhunouupswcegcq", ".aoddzanipvquug_.sucauvepjrsdizklyxewylo.t.qhqnemw", ".l_rhz_tjgofejmmrllugcyupcemvnywrtmvb.wla", "xvwwyefavra_", "vlaondhesnn", "bxisqjzfcueunwtysgknh_gzp.gfegmrxktyggaradp"};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> address = {"ipjdl_mbxl._oy_xcqjxktbonktr_sa_qnxdpqwiusnniccq", "mnwfondaiek_tgwznrv", "njqopyixrsrpgswrk..f", "opavmstbqapaznbay_szammzdhgmjsdxujshqlc.elsmgdnx", "qdcwhjzcnuwm.jaavbhmfgmvahn_o", "seszfjexf.ipbiezobbkdoi.ytvqlgdepyfui", "jx_gmtgbhnftwdbquaukidswqaiuz_", "kxx", "ufy_ughfkibiualbplckdoydrrurepmvwlgvhhgwgum", "ygpleqpcijbkydoxptl.ccrf_rfqda", "i.bagkveqhntlh.q.lbgudkvvex", "dfvgonrgxbilpxtoamsigatchqpgh_xpdiu", "eukmmne.tefspftr_.lqg_nejwmsmldti", "aawgeluvedcdikfj", "gp_ydicvvgmlxq", "tbjasmciercdxjrzirbdipbdycjcbqordpo", "ewbyzamd_vnwd.mzzu.keuzztpnme", "pmywf", "py.iqscuwtxy", "sqfegcrc", "uvc.bje.ztxbg", "gtmptnqtgvefkgec.obgj.yhse"};
    vector<string> keyword = {"rj jr un ne hn wg eb th uj wz i ik cga te u ic nh", "rj d ne pw uj tz q ek s tl ic ll t e cs nm b tm da", "xm rj jr xb jq ij uh th os ud ik oz q zh ve oq xv", "y ne xa uj wz ik ek p kg u j lk qf yg nh yh f w oo", "d un xb ij xa wg eb pw ud i ik ek b p pe ugy z nm", "rb ij xa wg wz ud i q ii ru r nz j m ic lo yg v gs", "xm rj rb y jr d ne eb uj k os ud i oo ff oq ll da", "xm y un xb hn wg pw th uj k ii fd jyu it oz oq oa", "rb y un xb ne jq hn xa eb th k qq da fqdv b v tz q", "jr d un jq wg th tm oo cs fe nm yr m uhp r dr a ic", "xm xb jq hn uh eb k os i ik za bk uhp uc ff ph tg", "rj rb jr d un ne jq pw os t af oa fe ek n kd ld da", "rb d ij hn wg os ud ik kd yh dr mw pe oq qq ibb tm", "xm rb jq ij hn uh th wz k os fe ic oo gg ve s n pe", "rj rb y un xb pw ud i za ld qq cs m s o zh e zk da", "rj y d hn wg os i ik w pe gfs af bk mw te l zdu oa", "xm jr d xb jq xa uh wz os t oq q tz tm bk pe gs lo", "ij xa uh eb pw uj wz k bk nh fe gs tz nk tl tng r", "y jr un wg eb wz k ud fdj q da gg b ic uc pe te nk", "ne ij xa uh pw uj ik ll g fe da an ff tl ey q x nz", "xm rj rb xb ne jq ij hn uh th wz ud i yg nm oo an", "xm y jr xa uh eb pw th uj k ic m lo t r tng qf tl"};
    vector<string> dangerous = {"xm", "rj", "rb", "y", "jr", "d", "un", "xb", "ne", "jq", "ij", "hn", "xa", "wg", "uh", "eb", "pw", "th", "uj", "wz", "k", "os", "ud", "i", "ik"};
    int threshold = 13;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"jx_gmtgbhnftwdbquaukidswqaiuz_", "uvc.bje.ztxbg"};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> address = {"phxrio_qqgjnxsxoglsucvwqvrvtxr", "ozgl.iquivyifni_goixmmfvey", "w.ijcvlbxqygskx.ptrojpxggaxdoyfxis.oke", "fven", "zvgsmnobpr.e.sxfqrsj__ftpzhllqphnrwkc", "tvwyjixvavshzuuzb", "nojnxfhv.jx", "frggxybrrivf.", "uubyskaremxltmypflqsriibgxirq_ktybliusaelffwii", "kpsfqoastugmdiraqglwy", "uafekp.hvisdthyliocdvbbzelcispcppkcwadp.xr", "emcug", "wgxkdvwvswy.mfmxfzii_vsodegdrkfhldnuobns_syxojcpvq", "avnhgkh", "gsaswcf_ds_bjmhnjjcrnkrbjdbotchvlqxd_jawph.cehze", "nmvums.xtsbn_x.zoi.qj", "opfvu", "xb_ihh", "_cvjxluvazfqx", "f", "wxvxrakocljeffteywybhi_xiuqtlxdwfz_jmquorvcvdm", "topnvqhlnnie__rhtrqonmvcledatsqvpmfopx.ay"};
    vector<string> keyword = {"f zo hf r ps i j eq nn pf ty lj u wfy n d yf m ln", "hf ps i zf wg j eq nn pf g d x ov mij mn ze a mg y", "zo hf r i wg j ef eq fd pf ze m mn pc fr qh no", "f r ps i j eq fd nn pf ty ze bj no eg fcj v s c mx", "f ps i zf wg ef eq nn pf ty av daa ov e ln x n g a", "r ps i j ef eq fd nn pf ty", "hf r ps i zf wg j ef fd nn pf v g pc xv y q e u ov", "f hf r ps wg j eq fd nn pf ty mg e ssw ovc o ov", "f zo hf r wg nn pf ty m nl eg fr ye b mg q no", "hf r ps i eq fd nn ty a dv c m bj xv an mij mn pyk", "f zo hf r wg j ef eq fd nn ty q ze fcj ln k u cj l", "zo hf r ps i zf wg j eq pf ty y fr k xv w av s ye", "hf r ps i zf wg j ef eq nn pf w bj g cj", "f zo hf r i wg j ef nn pf ty xv n bj u av ssw qh g", "zf wg j ef eq nn ty s ze", "hf i zf wg j ty w nl fr ov c ln t l ye yb bj mn av", "f r ps wg j ef eq fd nn pf ty an mn fcj wfy yf v n", "zo hf r i j ef fd nn pf ty", "zo hf ps i zf ef eq nn pf ty av mg s ovc no", "hf ps i zf wg eq pf ty nl a w ze yf lj dv x ovc yb", "f zo r ps i zf j ef ty g y pc lj ze n a c ov qh no", "f zo hf r ps i j ef nn pf av v b xv nl g no m mx"};
    vector<string> dangerous = {"f", "zo", "hf", "r", "ps", "i", "zf", "wg", "j", "ef", "eq", "fd", "nn", "pf", "ty", "mru", "btd", "mdefr", "ycjwlu"};
    int threshold = 11;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"phxrio_qqgjnxsxoglsucvwqvrvtxr", "ozgl.iquivyifni_goixmmfvey", "w.ijcvlbxqygskx.ptrojpxggaxdoyfxis.oke", "fven", "zvgsmnobpr.e.sxfqrsj__ftpzhllqphnrwkc", "nojnxfhv.jx", "frggxybrrivf.", "uubyskaremxltmypflqsriibgxirq_ktybliusaelffwii", "kpsfqoastugmdiraqglwy", "uafekp.hvisdthyliocdvbbzelcispcppkcwadp.xr", "emcug", "wgxkdvwvswy.mfmxfzii_vsodegdrkfhldnuobns_syxojcpvq", "avnhgkh", "nmvums.xtsbn_x.zoi.qj", "opfvu", "_cvjxluvazfqx", "f", "wxvxrakocljeffteywybhi_xiuqtlxdwfz_jmquorvcvdm", "topnvqhlnnie__rhtrqonmvcledatsqvpmfopx.ay"};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> address = {"phxrio_qqgjnxsxoglsucvwqvrvtxr", "ozgl.iquivyifni_goixmmfvey", "w.ijcvlbxqygskx.ptrojpxggaxdoyfxis.oke", "fven", "zvgsmnobpr.e.sxfqrsj__ftpzhllqphnrwkc", "tvwyjixvavshzuuzb", "nojnxfhv.jx", "frggxybrrivf.", "uubyskaremxltmypflqsriibgxirq_ktybliusaelffwii", "kpsfqoastugmdiraqglwy", "uafekp.hvisdthyliocdvbbzelcispcppkcwadp.xr", "emcug", "wgxkdvwvswy.mfmxfzii_vsodegdrkfhldnuobns_syxojcpvq", "avnhgkh", "gsaswcf_ds_bjmhnjjcrnkrbjdbotchvlqxd_jawph.cehze", "nmvums.xtsbn_x.zoi.qj", "opfvu", "xb_ihh", "_cvjxluvazfqx", "f", "wxvxrakocljeffteywybhi_xiuqtlxdwfz_jmquorvcvdm", "topnvqhlnnie__rhtrqonmvcledatsqvpmfopx.ay"};
    vector<string> keyword = {"f zo hf r ps i j eq nn pf ty lj u wfy n d yf m ln", "hf ps i zf wg j eq nn pf g d x ov mij mn ze a mg y", "zo hf r i wg j ef eq fd pf ze m mn pc fr qh no", "f r ps i j eq fd nn pf ty ze bj no eg fcj v s c mx", "f ps i zf wg ef eq nn pf ty av daa ov e ln x n g a", "r ps i j ef eq fd nn pf ty", "hf r ps i zf wg j ef fd nn pf v g pc xv y q e u ov", "f hf r ps wg j eq fd nn pf ty mg e ssw ovc o ov", "f zo hf r wg nn pf ty m nl eg fr ye b mg q no", "hf r ps i eq fd nn ty a dv c m bj xv an mij mn pyk", "f zo hf r wg j ef eq fd nn ty q ze fcj ln k u cj l", "zo hf r ps i zf wg j eq pf ty y fr k xv w av s ye", "hf r ps i zf wg j ef eq nn pf w bj g cj", "f zo hf r i wg j ef nn pf ty xv n bj u av ssw qh g", "zf wg j ef eq nn ty s ze", "hf i zf wg j ty w nl fr ov c ln t l ye yb bj mn av", "f r ps wg j ef eq fd nn pf ty an mn fcj wfy yf v n", "zo hf r i j ef fd nn pf ty", "zo hf ps i zf ef eq nn pf ty av mg s ovc no", "hf ps i zf wg eq pf ty nl a w ze yf lj dv x ovc yb", "f zo r ps i zf j ef ty g y pc lj ze n a c ov qh no", "f zo hf r ps i j ef nn pf av v b xv nl g no m mx"};
    vector<string> dangerous = {"f", "zo", "hf", "r", "ps", "i", "zf", "wg", "j", "ef", "eq", "fd", "nn", "pf", "ty", "mru", "btd", "mdefr", "ycjwlu"};
    int threshold = 10;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"phxrio_qqgjnxsxoglsucvwqvrvtxr", "ozgl.iquivyifni_goixmmfvey", "w.ijcvlbxqygskx.ptrojpxggaxdoyfxis.oke", "fven", "zvgsmnobpr.e.sxfqrsj__ftpzhllqphnrwkc", "tvwyjixvavshzuuzb", "nojnxfhv.jx", "frggxybrrivf.", "uubyskaremxltmypflqsriibgxirq_ktybliusaelffwii", "kpsfqoastugmdiraqglwy", "uafekp.hvisdthyliocdvbbzelcispcppkcwadp.xr", "emcug", "wgxkdvwvswy.mfmxfzii_vsodegdrkfhldnuobns_syxojcpvq", "avnhgkh", "nmvums.xtsbn_x.zoi.qj", "opfvu", "xb_ihh", "_cvjxluvazfqx", "f", "wxvxrakocljeffteywybhi_xiuqtlxdwfz_jmquorvcvdm", "topnvqhlnnie__rhtrqonmvcledatsqvpmfopx.ay"};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> address = {"ksuk", "eiq.hiuimaxtjohmh_pzsikky.xrwjjbmepwtsyckjqut", "eiw", "rpcve_qrgmctfmvaewrvrgykcc", "kojne", "xosmzzr.nqsbxpsryev", "khbyzc_wgomu", "dnqm_hmogwdlwmqxysolyjinpwcbinficncucrwbotceoqtt", "e.gv.n.gfxjchplnfyzo", "bvwfcdy", "ie.mqnuaduzcw.ckssb", "ehdenbmuxo.kz.ricgpgjxrpv_tkg_okfkrwctgmu.be", "r", "vz_lgnugjjsympanr.ktmvocvtxnqhmo", "jojpgnmbtsdgj.ion_hlarsppskapztosjdj", "dtff_pri", "qim", "qumoqjyzioz_wki.tuwsptimtby.fozewfn_kjoztnho.qtxth", "kirzxvkzpmssabx", "cggrguu_clwxomaptkn.pqegkpdzfbt_wtuub", "vldqzandomvvnmut_vjpmjtwtp", "iprehgfrpfkkwfhezwqjidj"};
    vector<string> keyword = {"r cb z o j hd ax gq v pc t c xx va l q s u oo nhs", "x z dl wz j xb qd ax pc c xx i va s im oo d nhs", "cb z o dl wz xb hd ax gq mi ba i y u g oo nhs", "cb dl wz a xb hd qd ax gq mi ba v pc h fb c y l s", "x r o dl wz a hd qd ax mi v pc h fb t c va s g oo", "x o dl wz hd v i y va l q u im d nhs", "r dl wz a j xb qd ax pc fb t c i y l g oo d nhs", "r z o wz j xb gq ba v pc h t c xx va l q u g nhs", "x r z dl wz qd gq mi v pc fb t c xx i va l im g d", "r z o dl wz xb hd qd gq v pc t xx q u im g oo nhs", "z dl xb hd mi ba pc h fb c xx i y va l s im oo d", "x cb o dl wz hd ax gq mi ba fb c xx i l q s u im d", "x r cb z o dl wz a j xb hd gq mi ba v h fb t c y q", "x r z a hd qd ax gq t i y l q s u g oo d nhs", "r cb dl xb ax gq mi ba v pc h t xx va l q s u im d", "x r cb z o a j ax mi pc h fb i y q g d nhs", "x r cb a j xb qd ax gq mi ba v h fb xx i y l s g d", "cb z o wz a j xb hd mi h fb t c xx y va u im d nhs", "x cb z j xb ax gq ba pc h fb t i y va l q u im oo", "x r cb z a j qd ax mi v h fb t c xx y q s oo d nhs", "cb o wz a j xb hd qd gq ba v h c xx i va l u im g", "x a j hd qd ba v pc h xx i va s u im g oo nhs"};
    vector<string> dangerous = {"x", "r", "cb", "z", "o", "dl", "wz", "a", "j", "xb", "hd", "qd", "ax", "gq", "mi", "ba", "v", "pc", "h", "fb", "t", "c", "xx", "i", "y", "va", "l", "q", "s", "u", "im", "g", "oo", "d", "nhs", "zizib", "dly", "yiz", "jpq", "oop"};
    int threshold = 16;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ksuk", "eiq.hiuimaxtjohmh_pzsikky.xrwjjbmepwtsyckjqut", "eiw", "rpcve_qrgmctfmvaewrvrgykcc", "kojne", "khbyzc_wgomu", "dnqm_hmogwdlwmqxysolyjinpwcbinficncucrwbotceoqtt", "e.gv.n.gfxjchplnfyzo", "bvwfcdy", "ie.mqnuaduzcw.ckssb", "ehdenbmuxo.kz.ricgpgjxrpv_tkg_okfkrwctgmu.be", "r", "vz_lgnugjjsympanr.ktmvocvtxnqhmo", "jojpgnmbtsdgj.ion_hlarsppskapztosjdj", "dtff_pri", "qim", "qumoqjyzioz_wki.tuwsptimtby.fozewfn_kjoztnho.qtxth", "kirzxvkzpmssabx", "cggrguu_clwxomaptkn.pqegkpdzfbt_wtuub", "vldqzandomvvnmut_vjpmjtwtp", "iprehgfrpfkkwfhezwqjidj"};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> address = {"ksuk", "eiq.hiuimaxtjohmh_pzsikky.xrwjjbmepwtsyckjqut", "eiw", "rpcve_qrgmctfmvaewrvrgykcc", "kojne", "xosmzzr.nqsbxpsryev", "khbyzc_wgomu", "dnqm_hmogwdlwmqxysolyjinpwcbinficncucrwbotceoqtt", "e.gv.n.gfxjchplnfyzo", "bvwfcdy", "ie.mqnuaduzcw.ckssb", "ehdenbmuxo.kz.ricgpgjxrpv_tkg_okfkrwctgmu.be", "r", "vz_lgnugjjsympanr.ktmvocvtxnqhmo", "jojpgnmbtsdgj.ion_hlarsppskapztosjdj", "dtff_pri", "qim", "qumoqjyzioz_wki.tuwsptimtby.fozewfn_kjoztnho.qtxth", "kirzxvkzpmssabx", "cggrguu_clwxomaptkn.pqegkpdzfbt_wtuub", "vldqzandomvvnmut_vjpmjtwtp", "iprehgfrpfkkwfhezwqjidj"};
    vector<string> keyword = {"r cb z o j hd ax gq v pc t c xx va l q s u oo nhs", "x z dl wz j xb qd ax pc c xx i va s im oo d nhs", "cb z o dl wz xb hd ax gq mi ba i y u g oo nhs", "cb dl wz a xb hd qd ax gq mi ba v pc h fb c y l s", "x r o dl wz a hd qd ax mi v pc h fb t c va s g oo", "x o dl wz hd v i y va l q u im d nhs", "r dl wz a j xb qd ax pc fb t c i y l g oo d nhs", "r z o wz j xb gq ba v pc h t c xx va l q u g nhs", "x r z dl wz qd gq mi v pc fb t c xx i va l im g d", "r z o dl wz xb hd qd gq v pc t xx q u im g oo nhs", "z dl xb hd mi ba pc h fb c xx i y va l s im oo d", "x cb o dl wz hd ax gq mi ba fb c xx i l q s u im d", "x r cb z o dl wz a j xb hd gq mi ba v h fb t c y q", "x r z a hd qd ax gq t i y l q s u g oo d nhs", "r cb dl xb ax gq mi ba v pc h t xx va l q s u im d", "x r cb z o a j ax mi pc h fb i y q g d nhs", "x r cb a j xb qd ax gq mi ba v h fb xx i y l s g d", "cb z o wz a j xb hd mi h fb t c xx y va u im d nhs", "x cb z j xb ax gq ba pc h fb t i y va l q u im oo", "x r cb z a j qd ax mi v h fb t c xx y q s oo d nhs", "cb o wz a j xb hd qd gq ba v h c xx i va l u im g", "x a j hd qd ba v pc h xx i va s u im g oo nhs"};
    vector<string> dangerous = {"x", "r", "cb", "z", "o", "dl", "wz", "a", "j", "xb", "hd", "qd", "ax", "gq", "mi", "ba", "v", "pc", "h", "fb", "t", "c", "xx", "i", "y", "va", "l", "q", "s", "u", "im", "g", "oo", "d", "nhs", "zizib", "dly", "yiz", "jpq", "oop"};
    int threshold = 18;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ksuk", "eiq.hiuimaxtjohmh_pzsikky.xrwjjbmepwtsyckjqut", "rpcve_qrgmctfmvaewrvrgykcc", "kojne", "khbyzc_wgomu", "dnqm_hmogwdlwmqxysolyjinpwcbinficncucrwbotceoqtt", "e.gv.n.gfxjchplnfyzo", "bvwfcdy", "ie.mqnuaduzcw.ckssb", "ehdenbmuxo.kz.ricgpgjxrpv_tkg_okfkrwctgmu.be", "r", "vz_lgnugjjsympanr.ktmvocvtxnqhmo", "jojpgnmbtsdgj.ion_hlarsppskapztosjdj", "dtff_pri", "qim", "qumoqjyzioz_wki.tuwsptimtby.fozewfn_kjoztnho.qtxth", "kirzxvkzpmssabx", "cggrguu_clwxomaptkn.pqegkpdzfbt_wtuub", "vldqzandomvvnmut_vjpmjtwtp", "iprehgfrpfkkwfhezwqjidj"};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> address = {"vitbgqhvw.k", "vrfaytka", "niqfdkjratz", "hcqsollhssmgykdxahjuboqbgeyzvplz", ".q", "npoylu.nyqlkp.umcb.nkmawlln_i", ".sevolooaarpvcsz", "ryz", "thnnitmrskzmzfx_trninwxhp_cjdhc", "zmci_thcjnipzlhrqzzuknmsfadxbpnyetj_tng", "kjqy", "flmckwgznrkilb", "jfikbdfdyhosigfvfbz", "fvvzy.exaxnk.daywiwmkxe", "gm_tmoybjyemnmisklzkewnerwx", "rpoloxbprxx_gea", ".lrvanpqlsdumaojjeje_djl", "wa.mkrpzlxj__rxkd.kmykzg_spqikeycjsoetbeigspdrlxn", "isfkkek_l", "cexhsi", "othbjcjbylbyfzhdatmuxpzqtb", "gayafhxdzsnoqwj_syfjqa.dq_uabhotpnhquvbmxbbq", "bpjrlkyvqvlmelravtyq_cwymxwwm.tjg_nmiyaab.hrosgap", "ogo_", "jycjrrmdq_qbroxrx", "qrxnk", "zlinktjahjdw.tcytfjkhf_aahhagneywuqn.ahiwhm", "_fcrteargevpjqldsswivbj.xspc..sz.jxquexyor", "hufduxqgrjuhysrynlvoukrvutrqjpdsypxbcf_.ywmc", "zgjafg.istij.xzgjgco", "puqi_ht", "mglvhabmyxoinipgpefqc_", "vtimrqwtwclitfqwiljmgvfsdltalswjyabbscjrwnfgjraz", "tnxwblfvumbmazct_wdejohsuirvbsm_ynxtxocvsjc.xvmqkv", "xzl.urajzkbrkssaargajjurj_cdfxnvlsodttrwkqql"};
    vector<string> keyword = {"z wp jm k mv o l ef v g vx mg y yi rg r d vr zu s", "wp k f o ef gd v jl by r vr zu ju n s xe i h vne", "wp tj jm k gd fh g vx a b y r e x i vne fy vu p mu", "z tj k f mv ef jl by mg d vr n s x i h vu gy mu", "wp f mv l gd v g vx jl b mg yi vr zu n xe vne vu p", "wp jm f o l gd v g jl b by mg y rg r d e h jv gy p", "tj jm k o gd g jl a b yi r vr zu s fy p mu", "z wp tj k o gd fh v g vx a by y yi rg ju n x xe h", "z wp jm f mv ef fh g vx jl b mg y r zu ju x h vu", "wp tj jm mv o l gd fh g b by rg zu ju s e x jv fy", "f mv l v jl yi r d vr zu ju s xe h jv vne vu gy p", "tj jm k mv o ef gd fh vx jl y d vr zu e jv vu p mu", "z wp k f l gd fh g vx jl vr ju n e x xe h jv vu gy", "z wp tj ef gd fh v vx a mg yi r d zu n jv p", "z wp f ef a by mg y rg r d vr zu ju x h vne vu mu", "z k f l fh vx a by mg rg vr zu ju s e x xe fy mu", "tj jm k f mv o v jl y rg r zu n s x xe i jv fy", "wp f o l ef by y rg r d s h jv vne vu gy mu", "wp mv o ef jl a mg rg e x i vne fy bkskw", "wp jm k ef g vx by mg d vr n s e i h vne fy vu mu", "z tj k f o gd v vx a b by rg r d ju n e jv fy gy", "tj k l ef v a b by mg y yi rg ju n s x xe h jv fy", "z gd fh v vx mg y rg r zu e x i h fy vu p mu", "fh v vx mg y yi rg r n xe i jv vne fy gy p mu", "wp jm f o l gd fh vx a b by yi x xe jv gy p mu", "z tj f mv ef g a b yi d ju n s xe vne fy vu gy mu", "tj jm k f ef v g jl b mg rg r d vr s i h jv vu p", "tj o l fh v a b mg yi d e x xe h vne gy p mu", "z tj k mg d s x i jv vne vu gy p mu", "wp mv l ef jl by yi rg d vr ju e i vne fy vu gy p", "k f mv o l ef fh jl a b by r vr zu ju n x i fy gy", "tj f ef v g jl b by vr ju s e i jv gy", "z mv o l gd vx b mg y yi rg d zu ju n h fy vu", "wp jm mv ef gd fh a b yi zu ju n xe i vne fy vu gy", "jm mv o l gd v g vx b y d zu ju e xe i jv mu"};
    vector<string> dangerous = {"z", "wp", "tj", "jm", "k", "f", "mv", "o", "l", "ef", "gd", "fh", "v", "g", "vx", "jl", "a", "b", "by", "mg", "y", "yi", "rg", "r", "d", "vr", "zu", "ju", "n", "s", "e", "x", "xe", "i", "h", "jv", "vne", "fy", "vu", "gy", "p", "mu", "mqy"};
    int threshold = 19;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"vitbgqhvw.k", "vrfaytka", "niqfdkjratz", "hcqsollhssmgykdxahjuboqbgeyzvplz", ".q", "npoylu.nyqlkp.umcb.nkmawlln_i", "ryz", "thnnitmrskzmzfx_trninwxhp_cjdhc", "zmci_thcjnipzlhrqzzuknmsfadxbpnyetj_tng", "kjqy", "flmckwgznrkilb", "jfikbdfdyhosigfvfbz", "gm_tmoybjyemnmisklzkewnerwx", "rpoloxbprxx_gea", ".lrvanpqlsdumaojjeje_djl", "cexhsi", "othbjcjbylbyfzhdatmuxpzqtb", "gayafhxdzsnoqwj_syfjqa.dq_uabhotpnhquvbmxbbq", "qrxnk", "zlinktjahjdw.tcytfjkhf_aahhagneywuqn.ahiwhm", "puqi_ht"};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> address = {"vitbgqhvw.k", "vrfaytka", "niqfdkjratz", "hcqsollhssmgykdxahjuboqbgeyzvplz", ".q", "npoylu.nyqlkp.umcb.nkmawlln_i", ".sevolooaarpvcsz", "ryz", "thnnitmrskzmzfx_trninwxhp_cjdhc", "zmci_thcjnipzlhrqzzuknmsfadxbpnyetj_tng", "kjqy", "flmckwgznrkilb", "jfikbdfdyhosigfvfbz", "fvvzy.exaxnk.daywiwmkxe", "gm_tmoybjyemnmisklzkewnerwx", "rpoloxbprxx_gea", ".lrvanpqlsdumaojjeje_djl", "wa.mkrpzlxj__rxkd.kmykzg_spqikeycjsoetbeigspdrlxn", "isfkkek_l", "cexhsi", "othbjcjbylbyfzhdatmuxpzqtb", "gayafhxdzsnoqwj_syfjqa.dq_uabhotpnhquvbmxbbq", "bpjrlkyvqvlmelravtyq_cwymxwwm.tjg_nmiyaab.hrosgap", "ogo_", "jycjrrmdq_qbroxrx", "qrxnk", "zlinktjahjdw.tcytfjkhf_aahhagneywuqn.ahiwhm", "_fcrteargevpjqldsswivbj.xspc..sz.jxquexyor", "hufduxqgrjuhysrynlvoukrvutrqjpdsypxbcf_.ywmc", "zgjafg.istij.xzgjgco", "puqi_ht", "mglvhabmyxoinipgpefqc_", "vtimrqwtwclitfqwiljmgvfsdltalswjyabbscjrwnfgjraz", "tnxwblfvumbmazct_wdejohsuirvbsm_ynxtxocvsjc.xvmqkv", "xzl.urajzkbrkssaargajjurj_cdfxnvlsodttrwkqql"};
    vector<string> keyword = {"z wp jm k mv o l ef v g vx mg y yi rg r d vr zu s", "wp k f o ef gd v jl by r vr zu ju n s xe i h vne", "wp tj jm k gd fh g vx a b y r e x i vne fy vu p mu", "z tj k f mv ef jl by mg d vr n s x i h vu gy mu", "wp f mv l gd v g vx jl b mg yi vr zu n xe vne vu p", "wp jm f o l gd v g jl b by mg y rg r d e h jv gy p", "tj jm k o gd g jl a b yi r vr zu s fy p mu", "z wp tj k o gd fh v g vx a by y yi rg ju n x xe h", "z wp jm f mv ef fh g vx jl b mg y r zu ju x h vu", "wp tj jm mv o l gd fh g b by rg zu ju s e x jv fy", "f mv l v jl yi r d vr zu ju s xe h jv vne vu gy p", "tj jm k mv o ef gd fh vx jl y d vr zu e jv vu p mu", "z wp k f l gd fh g vx jl vr ju n e x xe h jv vu gy", "z wp tj ef gd fh v vx a mg yi r d zu n jv p", "z wp f ef a by mg y rg r d vr zu ju x h vne vu mu", "z k f l fh vx a by mg rg vr zu ju s e x xe fy mu", "tj jm k f mv o v jl y rg r zu n s x xe i jv fy", "wp f o l ef by y rg r d s h jv vne vu gy mu", "wp mv o ef jl a mg rg e x i vne fy bkskw", "wp jm k ef g vx by mg d vr n s e i h vne fy vu mu", "z tj k f o gd v vx a b by rg r d ju n e jv fy gy", "tj k l ef v a b by mg y yi rg ju n s x xe h jv fy", "z gd fh v vx mg y rg r zu e x i h fy vu p mu", "fh v vx mg y yi rg r n xe i jv vne fy gy p mu", "wp jm f o l gd fh vx a b by yi x xe jv gy p mu", "z tj f mv ef g a b yi d ju n s xe vne fy vu gy mu", "tj jm k f ef v g jl b mg rg r d vr s i h jv vu p", "tj o l fh v a b mg yi d e x xe h vne gy p mu", "z tj k mg d s x i jv vne vu gy p mu", "wp mv l ef jl by yi rg d vr ju e i vne fy vu gy p", "k f mv o l ef fh jl a b by r vr zu ju n x i fy gy", "tj f ef v g jl b by vr ju s e i jv gy", "z mv o l gd vx b mg y yi rg d zu ju n h fy vu", "wp jm mv ef gd fh a b yi zu ju n xe i vne fy vu gy", "jm mv o l gd v g vx b y d zu ju e xe i jv mu"};
    vector<string> dangerous = {"z", "wp", "tj", "jm", "k", "f", "mv", "o", "l", "ef", "gd", "fh", "v", "g", "vx", "jl", "a", "b", "by", "mg", "y", "yi", "rg", "r", "d", "vr", "zu", "ju", "n", "s", "e", "x", "xe", "i", "h", "jv", "vne", "fy", "vu", "gy", "p", "mu", "mqy"};
    int threshold = 15;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"vitbgqhvw.k", "vrfaytka", "niqfdkjratz", "hcqsollhssmgykdxahjuboqbgeyzvplz", ".q", "npoylu.nyqlkp.umcb.nkmawlln_i", ".sevolooaarpvcsz", "ryz", "thnnitmrskzmzfx_trninwxhp_cjdhc", "zmci_thcjnipzlhrqzzuknmsfadxbpnyetj_tng", "kjqy", "flmckwgznrkilb", "jfikbdfdyhosigfvfbz", "fvvzy.exaxnk.daywiwmkxe", "gm_tmoybjyemnmisklzkewnerwx", "rpoloxbprxx_gea", ".lrvanpqlsdumaojjeje_djl", "wa.mkrpzlxj__rxkd.kmykzg_spqikeycjsoetbeigspdrlxn", "cexhsi", "othbjcjbylbyfzhdatmuxpzqtb", "gayafhxdzsnoqwj_syfjqa.dq_uabhotpnhquvbmxbbq", "bpjrlkyvqvlmelravtyq_cwymxwwm.tjg_nmiyaab.hrosgap", "ogo_", "jycjrrmdq_qbroxrx", "qrxnk", "zlinktjahjdw.tcytfjkhf_aahhagneywuqn.ahiwhm", "_fcrteargevpjqldsswivbj.xspc..sz.jxquexyor", "zgjafg.istij.xzgjgco", "puqi_ht", "mglvhabmyxoinipgpefqc_", "vtimrqwtwclitfqwiljmgvfsdltalswjyabbscjrwnfgjraz", "tnxwblfvumbmazct_wdejohsuirvbsm_ynxtxocvsjc.xvmqkv", "xzl.urajzkbrkssaargajjurj_cdfxnvlsodttrwkqql"};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> address = {"gpjvqgnrwisdu.xxbfqot..rkvcgvjfs.nvejizhynumq", "k_juqjfitmmgiyzrbxxbjm_ol_poxom", ".qgyvgxtbqej__gk", "eqfdnskjdxzogzfxpjvdtdxiyneyxhbgpx_btwsreff_oq", "awmxggueuwtybdsqblpfb.", "acwhgnpx", "dtnwkvfkrrbfdzkziuuzj.nkhz.hiztmxqo.dgmbqebqsadc", "kgv_eiscfosxfvoqo", "xnlhvlnop_ubu.fn.fsup.xpoin_jg", "qresikhkd_mupaervvznvawrrcs.krzkaeenzea", "kioo_uqooyvvmh", "avini.zbmkmnoyikfswvfmnyaif", "kl.kmzdmaadnwemlhhenfcworkqblpcf", "dt.nc_fy.odvus.kavf", "uc", ".f_eotvj_ijtpidxbrwc.qrsos_.kdpjhath", "uib_wpeotbgusdcxgv_gmg", "nwra.zfdfor_qbdhpqmjhlfhgmwfmmgugpm", "wplnqzsb.bhlebhwpr_fj_yisqtiavrgxgwh", "nzfjsjpchmmyr", "mjyt", "w.nrstsuasplzna", "jeevnwcthfaehfprwa", "xw_qxxwixpxzl.pdlfkns.gwyveudmemkhuhileoqw.sbap", "xshap.evkjp.g.u", "oujefq", "odkoar_qreyonjyavnnqzs.o", "hhandc", "wkppabpgmzaf_m", "yznofz_orxvdy", "cqql.ifuhif_ienvpfbx.jpsjeidzligpmn.a_ukf.nu_f", "varycyydaekfezzcwanyfkluuzzwsa_u.cppoxbp_yg", "okmzmodafjirmrbuacsii", "ftxp.vpz.jvyhb.vvvdwklmtsxqmcuge", "jrpy_udeavlaz", "sbhr_fcszqiaumjcnmxt", "yds.gnclvxflwzacvwavxvsrs_hxogxmidz.gcaqikojizzrs_", "fllzgrkekitamgez_gzl.ujrqxoojarysyoarnc_v_qojyp", "zezxfysqv", "yqlpaknswfe.etgqcnhtwumdzu.gemctxmroh", "unx.fu.imzffkuplashhlrgraftmmlyqrbrfh", "bb_p", "wzbepzlfwnqse_ipzbnkyckabvafq", "sllci_a_uzwaztlxxfugmnfbeizvjgettbgmdookxjlmpuxfq", "pbarqmlnpwdjivqbwhppbwctznjhu_.eduz", "dnldrhsigp.vxtjyep_felnlogrfjqlqu.e", "f.w", "bpncbyhofvijyospcgi", "pogtrnosvfprzegfywxsdmtoj", "djgqfzcewdeijthcchnkhuxfdkoaktxykmpslr"};
    vector<string> keyword = {"ik m w v x ty hq sy r at vc u xb qv xh co uz sd it", "va ik w il v ty hq vo at q u xb qv xh uz sd it cl", "va ik m w ty hq vo sy r q vc u qv vy nl uz sd g qa", "va ty vo r at vc u qv xh co nl uz sd g qa it cl ss", "va ik m w il v x ty hq vo r at tk vc xb qv vy nl g", "va ik m w ty vo sy vc u xb qv co sd qa it cl o ss", "ik w x ty hq vo r at q xb xh co uz sd g it cl o ss", "va wg a ik w il x ty vo tk u xb qv xh sd g qa it o", "a ik m w v x ty dh hq vo tk xb xh vy nl uz sd g qa", "va ik m w v x ty hq vo r at q vc u xb xh co nl uz", "ik m w v x ty dh vo sy r u xb qv xh nl uz sd g it", "va a m w ty sy at u xb qv vy co nl uz sd qa cl o k", "wg ik m w x vo r at vc u xb qv xh nl uz sd g cl vt", "ik m w x hq vo tk q vc nl uz sd g qa cl ss vt nr k", "va a ik m w ty hq vo r vc u qv xh vy nl uz sd g qa", "va ik m w ty hq vo sy r at vc u xb nl sd g qa it o", "wg a ik m x dh hq vo r vc vy co nl uz g it cl o ss", "ik m w il x ty hq vo r at xb qv xh vy nl uz sd cl", "va wg a ik w x ty hq vo sy r tk q u xb qv nl uz sd", "va x hq vo sy r q u xb qv vy g cl ss vt nr de k vv", "ik w x ty hq vo sy tk xb qv xh vy nl uz it cl o vt", "a ik w dh hq sy at u xb qv xh vy nl uz sd g qa cl", "a ik m w x ty vo sy vc u xb qv xh vy uz sd g qa it", "va a ik w x ty hq vo sy r at qv xh co nl uz g qa o", "va ik w il v hq vo sy r q vc u xb qv nl uz sd g it", "va wg a ik m w x ty vo sy r vc u xb qv xh nl sd g", "ik w hq vo xb qv vy uz sd it cl o ss vt nr de k vv", "x ty dh vo at vc u qv co nl uz sd g it cl o ss vt", "ik m w x ty hq vo r tk u xb qv co nl uz sd qa it k", "wg a ik w v ty vo sy at vc u xb qv co nl sd g qa k", "ik m w v x hq r tk q u qv xh co nl g it cl ss vt k", "wg a ik m w il v x hq vo r at vc u xb co nl uz sd", "va ik m v x ty hq vo sy at tk q vc u xb qv g qa cl", "va a ik m w ty dh hq r q vc u qv xh uz sd g qa it", "wg ik w x hq vo at q u qv vy nl uz g it cl ss vt k", "va a ik m w x ty dh vo tk q vc xb co uz sd g it cl", "ik m w v x hq vo at q vc u xb qv uz sd qa cl ss vt", "a ik m w x hq vo tk u xh nl uz sd g qa it cl o ss", "va ik m w x ty hq vo at q vc u qv xh nl uz qa it k", "a ik m x ty hq vo sy r at tk u xb qv xh co uz sd g", "ik w x vo r at vc u xb qv uz sd g qa it cl o vt nr", "va wg a ik w v vo sy vc u xb qv xh vy nl sd g cl k", "va ik m w v hq vo sy r at tk u xb qv vy co nl uz k", "a ik w v x ty dh r tk q u xb qv xh sd qa it cl o k", "va a ik w il x ty dh vo at q xb qv nl uz sd it o k", "wg a ik il x ty hq vo at tk vc u qv xh vy nl uz sd", "a ik m w il x ty hq vo r at q u qv co nl sd it cl", "va a ik w v x ty vo sy r vc u xb qv uz sd g cl ss", "va a ik m w il x hq vo sy r at tk u qv xh vy co nl", "va ik m w v ty hq vo sy vc u qv sd qa it cl vt nr"};
    vector<string> dangerous = {"va", "wg", "a", "ik", "m", "w", "il", "v", "x", "ty", "dh", "hq", "vo", "sy", "r", "at", "tk", "q", "vc", "u", "xb", "qv", "xh", "vy", "co", "nl", "uz", "sd", "g", "qa", "it", "cl", "o", "ss", "vt", "nr", "de", "k", "vv", "sbl", "lbqw", "fgpv", "tyahpeucwunh", "eo", "ccjxrwmzekut", "rkc", "tbayyafvaarqu", "jlpnfg", "wzc", "dja"};
    int threshold = 20;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"cqql.ifuhif_ienvpfbx.jpsjeidzligpmn.a_ukf.nu_f", "sllci_a_uzwaztlxxfugmnfbeizvjgettbgmdookxjlmpuxfq"};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> address = {"gpjvqgnrwisdu.xxbfqot..rkvcgvjfs.nvejizhynumq", "k_juqjfitmmgiyzrbxxbjm_ol_poxom", ".qgyvgxtbqej__gk", "eqfdnskjdxzogzfxpjvdtdxiyneyxhbgpx_btwsreff_oq", "awmxggueuwtybdsqblpfb.", "acwhgnpx", "dtnwkvfkrrbfdzkziuuzj.nkhz.hiztmxqo.dgmbqebqsadc", "kgv_eiscfosxfvoqo", "xnlhvlnop_ubu.fn.fsup.xpoin_jg", "qresikhkd_mupaervvznvawrrcs.krzkaeenzea", "kioo_uqooyvvmh", "avini.zbmkmnoyikfswvfmnyaif", "kl.kmzdmaadnwemlhhenfcworkqblpcf", "dt.nc_fy.odvus.kavf", "uc", ".f_eotvj_ijtpidxbrwc.qrsos_.kdpjhath", "uib_wpeotbgusdcxgv_gmg", "nwra.zfdfor_qbdhpqmjhlfhgmwfmmgugpm", "wplnqzsb.bhlebhwpr_fj_yisqtiavrgxgwh", "nzfjsjpchmmyr", "mjyt", "w.nrstsuasplzna", "jeevnwcthfaehfprwa", "xw_qxxwixpxzl.pdlfkns.gwyveudmemkhuhileoqw.sbap", "xshap.evkjp.g.u", "oujefq", "odkoar_qreyonjyavnnqzs.o", "hhandc", "wkppabpgmzaf_m", "yznofz_orxvdy", "cqql.ifuhif_ienvpfbx.jpsjeidzligpmn.a_ukf.nu_f", "varycyydaekfezzcwanyfkluuzzwsa_u.cppoxbp_yg", "okmzmodafjirmrbuacsii", "ftxp.vpz.jvyhb.vvvdwklmtsxqmcuge", "jrpy_udeavlaz", "sbhr_fcszqiaumjcnmxt", "yds.gnclvxflwzacvwavxvsrs_hxogxmidz.gcaqikojizzrs_", "fllzgrkekitamgez_gzl.ujrqxoojarysyoarnc_v_qojyp", "zezxfysqv", "yqlpaknswfe.etgqcnhtwumdzu.gemctxmroh", "unx.fu.imzffkuplashhlrgraftmmlyqrbrfh", "bb_p", "wzbepzlfwnqse_ipzbnkyckabvafq", "sllci_a_uzwaztlxxfugmnfbeizvjgettbgmdookxjlmpuxfq", "pbarqmlnpwdjivqbwhppbwctznjhu_.eduz", "dnldrhsigp.vxtjyep_felnlogrfjqlqu.e", "f.w", "bpncbyhofvijyospcgi", "pogtrnosvfprzegfywxsdmtoj", "djgqfzcewdeijthcchnkhuxfdkoaktxykmpslr"};
    vector<string> keyword = {"ik m w v x ty hq sy r at vc u xb qv xh co uz sd it", "va ik w il v ty hq vo at q u xb qv xh uz sd it cl", "va ik m w ty hq vo sy r q vc u qv vy nl uz sd g qa", "va ty vo r at vc u qv xh co nl uz sd g qa it cl ss", "va ik m w il v x ty hq vo r at tk vc xb qv vy nl g", "va ik m w ty vo sy vc u xb qv co sd qa it cl o ss", "ik w x ty hq vo r at q xb xh co uz sd g it cl o ss", "va wg a ik w il x ty vo tk u xb qv xh sd g qa it o", "a ik m w v x ty dh hq vo tk xb xh vy nl uz sd g qa", "va ik m w v x ty hq vo r at q vc u xb xh co nl uz", "ik m w v x ty dh vo sy r u xb qv xh nl uz sd g it", "va a m w ty sy at u xb qv vy co nl uz sd qa cl o k", "wg ik m w x vo r at vc u xb qv xh nl uz sd g cl vt", "ik m w x hq vo tk q vc nl uz sd g qa cl ss vt nr k", "va a ik m w ty hq vo r vc u qv xh vy nl uz sd g qa", "va ik m w ty hq vo sy r at vc u xb nl sd g qa it o", "wg a ik m x dh hq vo r vc vy co nl uz g it cl o ss", "ik m w il x ty hq vo r at xb qv xh vy nl uz sd cl", "va wg a ik w x ty hq vo sy r tk q u xb qv nl uz sd", "va x hq vo sy r q u xb qv vy g cl ss vt nr de k vv", "ik w x ty hq vo sy tk xb qv xh vy nl uz it cl o vt", "a ik w dh hq sy at u xb qv xh vy nl uz sd g qa cl", "a ik m w x ty vo sy vc u xb qv xh vy uz sd g qa it", "va a ik w x ty hq vo sy r at qv xh co nl uz g qa o", "va ik w il v hq vo sy r q vc u xb qv nl uz sd g it", "va wg a ik m w x ty vo sy r vc u xb qv xh nl sd g", "ik w hq vo xb qv vy uz sd it cl o ss vt nr de k vv", "x ty dh vo at vc u qv co nl uz sd g it cl o ss vt", "ik m w x ty hq vo r tk u xb qv co nl uz sd qa it k", "wg a ik w v ty vo sy at vc u xb qv co nl sd g qa k", "ik m w v x hq r tk q u qv xh co nl g it cl ss vt k", "wg a ik m w il v x hq vo r at vc u xb co nl uz sd", "va ik m v x ty hq vo sy at tk q vc u xb qv g qa cl", "va a ik m w ty dh hq r q vc u qv xh uz sd g qa it", "wg ik w x hq vo at q u qv vy nl uz g it cl ss vt k", "va a ik m w x ty dh vo tk q vc xb co uz sd g it cl", "ik m w v x hq vo at q vc u xb qv uz sd qa cl ss vt", "a ik m w x hq vo tk u xh nl uz sd g qa it cl o ss", "va ik m w x ty hq vo at q vc u qv xh nl uz qa it k", "a ik m x ty hq vo sy r at tk u xb qv xh co uz sd g", "ik w x vo r at vc u xb qv uz sd g qa it cl o vt nr", "va wg a ik w v vo sy vc u xb qv xh vy nl sd g cl k", "va ik m w v hq vo sy r at tk u xb qv vy co nl uz k", "a ik w v x ty dh r tk q u xb qv xh sd qa it cl o k", "va a ik w il x ty dh vo at q xb qv nl uz sd it o k", "wg a ik il x ty hq vo at tk vc u qv xh vy nl uz sd", "a ik m w il x ty hq vo r at q u qv co nl sd it cl", "va a ik w v x ty vo sy r vc u xb qv uz sd g cl ss", "va a ik m w il x hq vo sy r at tk u qv xh vy co nl", "va ik m w v ty hq vo sy vc u qv sd qa it cl vt nr"};
    vector<string> dangerous = {"va", "wg", "a", "ik", "m", "w", "il", "v", "x", "ty", "dh", "hq", "vo", "sy", "r", "at", "tk", "q", "vc", "u", "xb", "qv", "xh", "vy", "co", "nl", "uz", "sd", "g", "qa", "it", "cl", "o", "ss", "vt", "nr", "de", "k", "vv", "sbl", "lbqw", "fgpv", "tyahpeucwunh", "eo", "ccjxrwmzekut", "rkc", "tbayyafvaarqu", "jlpnfg", "wzc", "dja"};
    int threshold = 19;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"gpjvqgnrwisdu.xxbfqot..rkvcgvjfs.nvejizhynumq", ".qgyvgxtbqej__gk", "awmxggueuwtybdsqblpfb.", "dtnwkvfkrrbfdzkziuuzj.nkhz.hiztmxqo.dgmbqebqsadc", "kgv_eiscfosxfvoqo", "xnlhvlnop_ubu.fn.fsup.xpoin_jg", "qresikhkd_mupaervvznvawrrcs.krzkaeenzea", "kioo_uqooyvvmh", "avini.zbmkmnoyikfswvfmnyaif", "kl.kmzdmaadnwemlhhenfcworkqblpcf", "dt.nc_fy.odvus.kavf", "uc", ".f_eotvj_ijtpidxbrwc.qrsos_.kdpjhath", "uib_wpeotbgusdcxgv_gmg", "wplnqzsb.bhlebhwpr_fj_yisqtiavrgxgwh", "nzfjsjpchmmyr", "jeevnwcthfaehfprwa", "xw_qxxwixpxzl.pdlfkns.gwyveudmemkhuhileoqw.sbap", "xshap.evkjp.g.u", "oujefq", "wkppabpgmzaf_m", "yznofz_orxvdy", "cqql.ifuhif_ienvpfbx.jpsjeidzligpmn.a_ukf.nu_f", "varycyydaekfezzcwanyfkluuzzwsa_u.cppoxbp_yg", "okmzmodafjirmrbuacsii", "ftxp.vpz.jvyhb.vvvdwklmtsxqmcuge", "jrpy_udeavlaz", "sbhr_fcszqiaumjcnmxt", "yds.gnclvxflwzacvwavxvsrs_hxogxmidz.gcaqikojizzrs_", "fllzgrkekitamgez_gzl.ujrqxoojarysyoarnc_v_qojyp", "zezxfysqv", "yqlpaknswfe.etgqcnhtwumdzu.gemctxmroh", "unx.fu.imzffkuplashhlrgraftmmlyqrbrfh", "bb_p", "wzbepzlfwnqse_ipzbnkyckabvafq", "sllci_a_uzwaztlxxfugmnfbeizvjgettbgmdookxjlmpuxfq", "pbarqmlnpwdjivqbwhppbwctznjhu_.eduz", "f.w", "bpncbyhofvijyospcgi", "pogtrnosvfprzegfywxsdmtoj"};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> address = {"ini", "lqughuovl", "qihsiwwcv_rqgiouo_nmemejxmit.yynn.uwyrpa", "nopoahk_nlmbuclakjmlm", "pk", "cgfofcx", "nuqb.vbikvwbzcszujvcw_ilruaarkgpys", "tcvlejdbtbkjvyxyqktxmsslcfpjqfbkzs.djcgfkbhrsbo", "llihzdcxswirv.uhzqlmoagog_ccbxxjqrl", "abofonxtervekwsnfxpadwbyagmtzys_paapaepfme_", "i.wi", "szgvsj_mcwktqooijgkwi_vqrwgdpt", ".pioq_wxzpg.hjqobksos", "vv.ootpqraqvyhu", "iylf.dppkheusu_e", ".", "royx_eod_bfrahwlyxnaggvtpeguptnvaq_zkmfp_tm_tdy_", "b", "lxgillpjdymezjtsexzymyklceuaujraky_fr", "w.svbfdkxpqvsvwc", "ukolb.lnwwgcstp", "pdluosrxyzxnlj", "poi", "slrokatbnq_cqbetezbejx", "tfznuvbcrg.wgulwf.__k_zdlmmwrqcj", "gzsbafroxgxte_ns", "tzqkfdrwyi.itjve.upmbnablrfyavara_", "dkdhfssnuzgi_xdrbxsciriibsphrlhzmubcyqkioli_lw_jd", "mwaauapfzdno_zhmllfehmrldayom", "skxpsekvxninkwjwgqxucybwrdcrsoc", "gkxzmzet_sflvh_f_rd.bbhirfdiyif.xqyuxxx.", "mkwabkmiavkjadahxnqilrwftkmhb", "kg_i.bihax", "asnlmy.daarsr_", "_rbubqxwhqxsnefsxd_", "urwsly.dxhyu", "vscw_vcaubmoxmxiukgjuqgrni.boln", "wfjikmhovmym", "pudznbayiuhsigdgl_yerf_", "mbrueixxd_wyb", "peehpnzx_xacmicxtpn", "r_rcdiu.wxdilgkpuz.zqj", "czamve", "_jcpdamph_uyzobjqd", "gruzmqphf_u.rwguf_ph.c", "w.ewxjqzeaixamefz_hqvfsalllqksg", "nyrs_byetcbaezeifsxfvwtepkir.m", "wnikmllkiisloetkio", "zdkyviuhgppgnthuz_mcirbtbbc.jrm_msu", "evsunxvojafsuopnywaj"};
    vector<string> keyword = {"gi xo gu sp i cb np mi u e ad g oo vl x j ws ew v", "gi iw xo yi gu sp cb n sm hr mi c kj e zw z ad g x", "iw yi gu sp op i cb n hr mi c lw ey zw z qy ad g x", "gi qf iw yi a gu fc yh an i cb al yd nf sm aw c ur", "iw a gu yh al n yd np mi u ur kj lw ey cz zw z qy", "gi qf iw xo yi a sp fc i cb al yd nf sm hr aw u c", "iw gu sp fc yh op n np hr aw u c cz e zw z qy ad g", "gi qf xo yi a gu yh op an al np h c ey e z ad g oo", "iw gu cb sm np hr mi h u ur kj ey cz zw z qy ad g", "gi qf iw yi a yh an hr ur kj cz e qy ad g oo vl x", "qf a gu sp fc yh op an i n np hr mi u c kj lw ey z", "qf xo yi fc an cb n sm np hr mi h u ur kj lw zw ad", "qf yi a yh an i aw mi u lw cz e z g oo vl x j ws v", "qf yi a yh an n nf hr aw mi ur kj lw ey e qy ad g", "gi xo sp op an cb nf sm np aw mi u c ur kj lw e z", "gi qf iw yi a yh an cb al nf np mi kj lw ey e zw z", "iw xo yi a gu sp fc i cb n yd hr aw mi zw z qy ad", "gi yi a gu fc yh op an al n np mi c ur ey zw qy ad", "gi qf iw xo yi a sp fc op an i cb np aw h u cz e z", "gi qf iw yi a gu yh an cb al nf sm np aw mi ur kj", "iw xo gu sp an n np hr aw mi h c lw ey z qy ad g x", "yi a fc yh n yd nf aw mi c ur kj ey z qy ad g oo x", "gi xo a gu sp op al nf np aw mi e z ad g oo vl x j", "qf iw gu fc i al np ur lw ey cz e ad g oo vl x j v", "qf yi a sp fc op an i al n yd nf np aw mi u kj cz", "qf iw xo a gu sp i n np aw mi c ur ey ad g oo vl x", "gi xo yi a gu fc yh an al n sm np aw u kj lw z ad", "qf iw xo yi a sp fc yh an i al n yd nf np aw c ur", "gi qf iw xo yi a sp an i al yd nf np aw c ur kj ey", "gi qf yi a gu yh op an i cb al yd nf sm aw mi zw z", "gi iw yi a fc op an i cb n nf aw u ur kj e zw z ad", "gi qf iw yi gu sp yh i al n nf np hr aw mi u cz zw", "gi iw xo yi a gu fc an yd nf aw mi h cz e zw qy ad", "gi yi sp fc op cb al n yd nf np aw mi u ey cz zw z", "gi iw xo sp yh nf sm aw mi u c ur lw cz zw qy ad g", "gi qf iw xo yi a gu sp yh an yd sm aw mi h ey cz g", "gi iw a sp yh aw ey zw qy g oo vl x j ws ew v w", "gi iw xo yi n yd sm np zw z qy ad g oo vl x j ws v", "qf iw a an cb al nf np aw mi h c ey cz e z ad g oo", "gi iw xo yi yh op an cb n yd np aw mi h u c ur kj", "gi qf a gu fc yh cb yd nf h ur kj zw z ad g oo vl", "xo a op al n nf hr mi c ur lw ey z ad g oo vl x j", "gi qf iw gu sp fc an al nf np hr aw h c kj lw e qy", "gi qf xo gu fc yh an al n sm np h ey e zw z qy ad", "gi qf iw a fc yh an al np hr aw c ur kj lw ey cz e", "iw a an i cb al np aw mi h ur ad g oo vl x j ws ew", "gi iw xo yi gu op i sm mi c ur ey z qy ad g oo vl", "iw fc yh an cb n nf hr aw h lw zw z ad g oo vl x j", "qf iw xo yi yh cb n yd sm np aw mi c ur kj lw ey g", "gi qf yi a gu sp np hr mi h c kj lw ey cz e zw qy"};
    vector<string> dangerous = {"gi", "qf", "iw", "xo", "yi", "a", "gu", "sp", "fc", "yh", "op", "an", "i", "cb", "al", "n", "yd", "nf", "sm", "np", "hr", "aw", "mi", "h", "u", "c", "ur", "kj", "lw", "ey", "cz", "e", "zw", "z", "qy", "ad", "g", "oo", "vl", "x", "j", "ws", "ew", "v", "w", "lrng", "fpiksrnlmkzws", "ojzsq"};
    int threshold = 19;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ini", "lqughuovl", "qihsiwwcv_rqgiouo_nmemejxmit.yynn.uwyrpa", "nuqb.vbikvwbzcszujvcw_ilruaarkgpys", "tcvlejdbtbkjvyxyqktxmsslcfpjqfbkzs.djcgfkbhrsbo", "i.wi", ".pioq_wxzpg.hjqobksos", "lxgillpjdymezjtsexzymyklceuaujraky_fr", "ukolb.lnwwgcstp", "pdluosrxyzxnlj", "poi", "slrokatbnq_cqbetezbejx", "gzsbafroxgxte_ns", "gkxzmzet_sflvh_f_rd.bbhirfdiyif.xqyuxxx.", "wfjikmhovmym", "pudznbayiuhsigdgl_yerf_", "r_rcdiu.wxdilgkpuz.zqj", "w.ewxjqzeaixamefz_hqvfsalllqksg", "wnikmllkiisloetkio"};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> address = {"ini", "lqughuovl", "qihsiwwcv_rqgiouo_nmemejxmit.yynn.uwyrpa", "nopoahk_nlmbuclakjmlm", "pk", "cgfofcx", "nuqb.vbikvwbzcszujvcw_ilruaarkgpys", "tcvlejdbtbkjvyxyqktxmsslcfpjqfbkzs.djcgfkbhrsbo", "llihzdcxswirv.uhzqlmoagog_ccbxxjqrl", "abofonxtervekwsnfxpadwbyagmtzys_paapaepfme_", "i.wi", "szgvsj_mcwktqooijgkwi_vqrwgdpt", ".pioq_wxzpg.hjqobksos", "vv.ootpqraqvyhu", "iylf.dppkheusu_e", ".", "royx_eod_bfrahwlyxnaggvtpeguptnvaq_zkmfp_tm_tdy_", "b", "lxgillpjdymezjtsexzymyklceuaujraky_fr", "w.svbfdkxpqvsvwc", "ukolb.lnwwgcstp", "pdluosrxyzxnlj", "poi", "slrokatbnq_cqbetezbejx", "tfznuvbcrg.wgulwf.__k_zdlmmwrqcj", "gzsbafroxgxte_ns", "tzqkfdrwyi.itjve.upmbnablrfyavara_", "dkdhfssnuzgi_xdrbxsciriibsphrlhzmubcyqkioli_lw_jd", "mwaauapfzdno_zhmllfehmrldayom", "skxpsekvxninkwjwgqxucybwrdcrsoc", "gkxzmzet_sflvh_f_rd.bbhirfdiyif.xqyuxxx.", "mkwabkmiavkjadahxnqilrwftkmhb", "kg_i.bihax", "asnlmy.daarsr_", "_rbubqxwhqxsnefsxd_", "urwsly.dxhyu", "vscw_vcaubmoxmxiukgjuqgrni.boln", "wfjikmhovmym", "pudznbayiuhsigdgl_yerf_", "mbrueixxd_wyb", "peehpnzx_xacmicxtpn", "r_rcdiu.wxdilgkpuz.zqj", "czamve", "_jcpdamph_uyzobjqd", "gruzmqphf_u.rwguf_ph.c", "w.ewxjqzeaixamefz_hqvfsalllqksg", "nyrs_byetcbaezeifsxfvwtepkir.m", "wnikmllkiisloetkio", "zdkyviuhgppgnthuz_mcirbtbbc.jrm_msu", "evsunxvojafsuopnywaj"};
    vector<string> keyword = {"gi xo gu sp i cb np mi u e ad g oo vl x j ws ew v", "gi iw xo yi gu sp cb n sm hr mi c kj e zw z ad g x", "iw yi gu sp op i cb n hr mi c lw ey zw z qy ad g x", "gi qf iw yi a gu fc yh an i cb al yd nf sm aw c ur", "iw a gu yh al n yd np mi u ur kj lw ey cz zw z qy", "gi qf iw xo yi a sp fc i cb al yd nf sm hr aw u c", "iw gu sp fc yh op n np hr aw u c cz e zw z qy ad g", "gi qf xo yi a gu yh op an al np h c ey e z ad g oo", "iw gu cb sm np hr mi h u ur kj ey cz zw z qy ad g", "gi qf iw yi a yh an hr ur kj cz e qy ad g oo vl x", "qf a gu sp fc yh op an i n np hr mi u c kj lw ey z", "qf xo yi fc an cb n sm np hr mi h u ur kj lw zw ad", "qf yi a yh an i aw mi u lw cz e z g oo vl x j ws v", "qf yi a yh an n nf hr aw mi ur kj lw ey e qy ad g", "gi xo sp op an cb nf sm np aw mi u c ur kj lw e z", "gi qf iw yi a yh an cb al nf np mi kj lw ey e zw z", "iw xo yi a gu sp fc i cb n yd hr aw mi zw z qy ad", "gi yi a gu fc yh op an al n np mi c ur ey zw qy ad", "gi qf iw xo yi a sp fc op an i cb np aw h u cz e z", "gi qf iw yi a gu yh an cb al nf sm np aw mi ur kj", "iw xo gu sp an n np hr aw mi h c lw ey z qy ad g x", "yi a fc yh n yd nf aw mi c ur kj ey z qy ad g oo x", "gi xo a gu sp op al nf np aw mi e z ad g oo vl x j", "qf iw gu fc i al np ur lw ey cz e ad g oo vl x j v", "qf yi a sp fc op an i al n yd nf np aw mi u kj cz", "qf iw xo a gu sp i n np aw mi c ur ey ad g oo vl x", "gi xo yi a gu fc yh an al n sm np aw u kj lw z ad", "qf iw xo yi a sp fc yh an i al n yd nf np aw c ur", "gi qf iw xo yi a sp an i al yd nf np aw c ur kj ey", "gi qf yi a gu yh op an i cb al yd nf sm aw mi zw z", "gi iw yi a fc op an i cb n nf aw u ur kj e zw z ad", "gi qf iw yi gu sp yh i al n nf np hr aw mi u cz zw", "gi iw xo yi a gu fc an yd nf aw mi h cz e zw qy ad", "gi yi sp fc op cb al n yd nf np aw mi u ey cz zw z", "gi iw xo sp yh nf sm aw mi u c ur lw cz zw qy ad g", "gi qf iw xo yi a gu sp yh an yd sm aw mi h ey cz g", "gi iw a sp yh aw ey zw qy g oo vl x j ws ew v w", "gi iw xo yi n yd sm np zw z qy ad g oo vl x j ws v", "qf iw a an cb al nf np aw mi h c ey cz e z ad g oo", "gi iw xo yi yh op an cb n yd np aw mi h u c ur kj", "gi qf a gu fc yh cb yd nf h ur kj zw z ad g oo vl", "xo a op al n nf hr mi c ur lw ey z ad g oo vl x j", "gi qf iw gu sp fc an al nf np hr aw h c kj lw e qy", "gi qf xo gu fc yh an al n sm np h ey e zw z qy ad", "gi qf iw a fc yh an al np hr aw c ur kj lw ey cz e", "iw a an i cb al np aw mi h ur ad g oo vl x j ws ew", "gi iw xo yi gu op i sm mi c ur ey z qy ad g oo vl", "iw fc yh an cb n nf hr aw h lw zw z ad g oo vl x j", "qf iw xo yi yh cb n yd sm np aw mi c ur kj lw ey g", "gi qf yi a gu sp np hr mi h c kj lw ey cz e zw qy"};
    vector<string> dangerous = {"gi", "qf", "iw", "xo", "yi", "a", "gu", "sp", "fc", "yh", "op", "an", "i", "cb", "al", "n", "yd", "nf", "sm", "np", "hr", "aw", "mi", "h", "u", "c", "ur", "kj", "lw", "ey", "cz", "e", "zw", "z", "qy", "ad", "g", "oo", "vl", "x", "j", "ws", "ew", "v", "w", "lrng", "fpiksrnlmkzws", "ojzsq"};
    int threshold = 20;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".pioq_wxzpg.hjqobksos"};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> address = {"jmdscbjrkktokkrolknrocu.ixougwjnfnzjtyyhhyshu", "jnob._jyf.ythphn_glxaw", "z_wwqcetnofrslogxttb", "gtb.ovjwldawxw.qhcuiposdbv", "lb", "xmzpyhsyjgyfuvr.gb", "onxwqqjyk.ybbhdk", "hnpvbkcajaliuxa.puwxxnjyskcflmdyua", "opufilrd__wuihokh_", "c.obu.qfoesrajfxmbo._txsvwtjiuegqkmrtfwi.vv.jafpfu", "eyqpd_zeikwsbdhsc", "yvawljucjnadtpm_nvfoc_jcjbqmqceqi.my", ".di__ggdcm.mu", "khgtpfbbbh.psshs.", "l", "lrnvrajwtydrxkk.q.kct", "yhzqvb.xcrhfaiscjmqvygbzqntaem.l", "efxqykjspqvzvq.gqolgauc.od_paxzoozhure", "pgsloddgia.vylqpbmp", "lyyudrdn...ifxofzkxtdwonyhzfbhbu", "ngpmrcdyvozeq.feslflaykjq", "ndoex.ewutbkghjcwpg_", "vd", "euqoipgovvp_kjdw", "xhdptfafynb_graacmvpvjopyziozhtqhozqzpo", ".fukrae.fg..", "zprrlstofnmbcu.xro", "r_irepayvqllopzjctmvalv", "dtekkrcmfjvkbewdombftzezyyaehdngdrzkgsqlki", "_ocj_fuzqoiqsykeythorpeod", "xkdpadsern", "mgjuwyz", "aiszequjzanjwggqoohn", "rjgietixvxarevxbhqzyvjvjvkcgaagigpgfmfw", "x", "bijacucal", "xonzcynpd.dwqs.diujloowlhzwycj.mwewgusbvlrsqsk_g", "bbpwdfpzl_jymbzwhfekw.djzvuodzcic.pqrebfrfdw_si", "pmaggytxloi_ea", "mrln.ja_gnicblm_jmumdy.ysbqgvdqneusybn", "sisukkicyuccfmo.kkagmqlsykictfcetopnpl_ssiuixtc", "numceayqyaoxekmmms", "pj..lyrip", "okbbkbsqfblfyqn.ytqwx", "sirkempjxhlyenvtevkqphy", "trhhfgvssezdxaslzibsm_v.smjiypgetqp", "ywlidfxopwk.pkl.nodlwlrbd", "mjivisxp", "owtvvxrhggvp_x.rakys.gey", ".llzewmovoybvaftdzhighicavurw.yhnno"};
    vector<string> keyword = {"z rxo ewq fd nycyu x vgm mf bqf gfn s cmm", "f zlz z wo fd p nycyu gom vgm chq bqf s cmm", "z rxo ewq nycyu gom x vgm chq o xqg gfn s", "z rxo ewq wo fd p gom x vgm chq o xqg s cmm", "f zlz z p vgm o gfn s", "f zlz z rxo p nycyu gom x vgm o mf xqg gfn s", "zlz z rxo fd nycyu gom vgm chq bqf s", "zlz rxo wo fd p nycyu x chq o xqg bqf s cmm", "z ewq p nycyu gom vgm o xqg bqf", "z rxo ewq wo fd p nycyu x vgm chq mf xqg gfn s cmm", "zlz z rxo ewq fd gom x vgm chq mf xqg gfn s", "zlz wo fd p nycyu gom x vgm o xqg s cmm", "f zlz z fd nycyu gom x o xqg gfn cmm", "f rxo ewq wo fd p nycyu vgm o mf xqg bqf s cmm", "zlz rxo ewq wo fd p nycyu x vgm o xqg bqf s", "f zlz fd gom x mf xqg bqf gfn s cmm", "ewq wo fd nycyu gom x vgm o mf xqg bqf s cmm", "f zlz z wo p nycyu chq mf xqg gfn", "f zlz nycyu gom x chq o mf xqg bqf gfn", "rxo ewq wo fd p x vgm chq xqg gfn s", "f z rxo wo fd p nycyu gom x o mf xqg bqf gfn s cmm", "z wo p gom x vgm mf xqg bqf", "f zlz z rxo wo fd nycyu gom mf xqg s cmm", "f z wo fd p vgm mf xqg bqf gfn s cmm", "rxo ewq wo nycyu gom vgm chq mf s cmm", "f z rxo fd nycyu gom x vgm o mf bqf gfn s", "f zlz z wo nycyu gom vgm chq o mf xqg bqf s cmm", "f zlz rxo ewq wo fd p nycyu gom vgm o mf s cmm", "zlz z ewq wo fd p nycyu x mf xqg bqf s cmm", "z ewq fd gom vgm chq o mf bqf s cmm", "f z rxo ewq p nycyu gom x chq o xqg bqf s cmm", "zlz z fd p nycyu gom vgm chq mf s cmm", "f zlz z wo fd p gom o mf bqf gfn cmm", "f z rxo ewq fd p nycyu gom chq mf xqg bqf gfn cmm", "z rxo fd nycyu x vgm mf xqg bqf gfn", "f zlz z rxo nycyu gom o xqg s cmm", "f z rxo ewq p nycyu vgm chq o xqg bqf gfn cmm", "f zlz z rxo wo fd p nycyu gom vgm chq mf xqg gfn s", "f zlz rxo ewq nycyu gom x vgm chq mf xqg s", "f z rxo wo fd nycyu gom o mf xqg gfn", "f zlz z ewq fd p gom vgm o mf xqg bqf gfn", "f z rxo ewq wo fd p nycyu mf bqf s cmm", "f zlz z ewq fd p nycyu x o mf gfn cmm", "f zlz z rxo ewq fd gom vgm chq o xqg gfn s", "f z rxo wo fd p nycyu x vgm o mf xqg s cmm", "z ewq wo fd p nycyu gom x o xqg bqf s cmm", "f rxo ewq p nycyu gom x vgm mf xqg s cmm", "f z ewq wo fd nycyu chq o mf xqg", "f zlz ewq wo p nycyu x vgm chq mf xqg bqf s cmm", "f zlz z rxo ewq gom x vgm mf xqg bqf gfn s cmm"};
    vector<string> dangerous = {"f", "zlz", "z", "rxo", "ewq", "wo", "fd", "p", "nycyu", "gom", "x", "vgm", "chq", "o", "mf", "xqg", "bqf", "gfn", "s", "cmm", "arm", "fon", "vkilhb"};
    int threshold = 12;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"jmdscbjrkktokkrolknrocu.ixougwjnfnzjtyyhhyshu", "jnob._jyf.ythphn_glxaw", "z_wwqcetnofrslogxttb", "gtb.ovjwldawxw.qhcuiposdbv", "xmzpyhsyjgyfuvr.gb", "hnpvbkcajaliuxa.puwxxnjyskcflmdyua", "c.obu.qfoesrajfxmbo._txsvwtjiuegqkmrtfwi.vv.jafpfu", "eyqpd_zeikwsbdhsc", "yvawljucjnadtpm_nvfoc_jcjbqmqceqi.my", "khgtpfbbbh.psshs.", "l", "yhzqvb.xcrhfaiscjmqvygbzqntaem.l", "ngpmrcdyvozeq.feslflaykjq", "vd", "euqoipgovvp_kjdw", ".fukrae.fg..", "zprrlstofnmbcu.xro", "r_irepayvqllopzjctmvalv", "dtekkrcmfjvkbewdombftzezyyaehdngdrzkgsqlki", "xkdpadsern", "aiszequjzanjwggqoohn", "rjgietixvxarevxbhqzyvjvjvkcgaagigpgfmfw", "xonzcynpd.dwqs.diujloowlhzwycj.mwewgusbvlrsqsk_g", "bbpwdfpzl_jymbzwhfekw.djzvuodzcic.pqrebfrfdw_si", "pmaggytxloi_ea", "sisukkicyuccfmo.kkagmqlsykictfcetopnpl_ssiuixtc", "numceayqyaoxekmmms", "pj..lyrip", "okbbkbsqfblfyqn.ytqwx", "sirkempjxhlyenvtevkqphy", "trhhfgvssezdxaslzibsm_v.smjiypgetqp", "ywlidfxopwk.pkl.nodlwlrbd", "owtvvxrhggvp_x.rakys.gey", ".llzewmovoybvaftdzhighicavurw.yhnno"};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> address = {"jmdscbjrkktokkrolknrocu.ixougwjnfnzjtyyhhyshu", "jnob._jyf.ythphn_glxaw", "z_wwqcetnofrslogxttb", "gtb.ovjwldawxw.qhcuiposdbv", "lb", "xmzpyhsyjgyfuvr.gb", "onxwqqjyk.ybbhdk", "hnpvbkcajaliuxa.puwxxnjyskcflmdyua", "opufilrd__wuihokh_", "c.obu.qfoesrajfxmbo._txsvwtjiuegqkmrtfwi.vv.jafpfu", "eyqpd_zeikwsbdhsc", "yvawljucjnadtpm_nvfoc_jcjbqmqceqi.my", ".di__ggdcm.mu", "khgtpfbbbh.psshs.", "l", "lrnvrajwtydrxkk.q.kct", "yhzqvb.xcrhfaiscjmqvygbzqntaem.l", "efxqykjspqvzvq.gqolgauc.od_paxzoozhure", "pgsloddgia.vylqpbmp", "lyyudrdn...ifxofzkxtdwonyhzfbhbu", "ngpmrcdyvozeq.feslflaykjq", "ndoex.ewutbkghjcwpg_", "vd", "euqoipgovvp_kjdw", "xhdptfafynb_graacmvpvjopyziozhtqhozqzpo", ".fukrae.fg..", "zprrlstofnmbcu.xro", "r_irepayvqllopzjctmvalv", "dtekkrcmfjvkbewdombftzezyyaehdngdrzkgsqlki", "_ocj_fuzqoiqsykeythorpeod", "xkdpadsern", "mgjuwyz", "aiszequjzanjwggqoohn", "rjgietixvxarevxbhqzyvjvjvkcgaagigpgfmfw", "x", "bijacucal", "xonzcynpd.dwqs.diujloowlhzwycj.mwewgusbvlrsqsk_g", "bbpwdfpzl_jymbzwhfekw.djzvuodzcic.pqrebfrfdw_si", "pmaggytxloi_ea", "mrln.ja_gnicblm_jmumdy.ysbqgvdqneusybn", "sisukkicyuccfmo.kkagmqlsykictfcetopnpl_ssiuixtc", "numceayqyaoxekmmms", "pj..lyrip", "okbbkbsqfblfyqn.ytqwx", "sirkempjxhlyenvtevkqphy", "trhhfgvssezdxaslzibsm_v.smjiypgetqp", "ywlidfxopwk.pkl.nodlwlrbd", "mjivisxp", "owtvvxrhggvp_x.rakys.gey", ".llzewmovoybvaftdzhighicavurw.yhnno"};
    vector<string> keyword = {"z rxo ewq fd nycyu x vgm mf bqf gfn s cmm", "f zlz z wo fd p nycyu gom vgm chq bqf s cmm", "z rxo ewq nycyu gom x vgm chq o xqg gfn s", "z rxo ewq wo fd p gom x vgm chq o xqg s cmm", "f zlz z p vgm o gfn s", "f zlz z rxo p nycyu gom x vgm o mf xqg gfn s", "zlz z rxo fd nycyu gom vgm chq bqf s", "zlz rxo wo fd p nycyu x chq o xqg bqf s cmm", "z ewq p nycyu gom vgm o xqg bqf", "z rxo ewq wo fd p nycyu x vgm chq mf xqg gfn s cmm", "zlz z rxo ewq fd gom x vgm chq mf xqg gfn s", "zlz wo fd p nycyu gom x vgm o xqg s cmm", "f zlz z fd nycyu gom x o xqg gfn cmm", "f rxo ewq wo fd p nycyu vgm o mf xqg bqf s cmm", "zlz rxo ewq wo fd p nycyu x vgm o xqg bqf s", "f zlz fd gom x mf xqg bqf gfn s cmm", "ewq wo fd nycyu gom x vgm o mf xqg bqf s cmm", "f zlz z wo p nycyu chq mf xqg gfn", "f zlz nycyu gom x chq o mf xqg bqf gfn", "rxo ewq wo fd p x vgm chq xqg gfn s", "f z rxo wo fd p nycyu gom x o mf xqg bqf gfn s cmm", "z wo p gom x vgm mf xqg bqf", "f zlz z rxo wo fd nycyu gom mf xqg s cmm", "f z wo fd p vgm mf xqg bqf gfn s cmm", "rxo ewq wo nycyu gom vgm chq mf s cmm", "f z rxo fd nycyu gom x vgm o mf bqf gfn s", "f zlz z wo nycyu gom vgm chq o mf xqg bqf s cmm", "f zlz rxo ewq wo fd p nycyu gom vgm o mf s cmm", "zlz z ewq wo fd p nycyu x mf xqg bqf s cmm", "z ewq fd gom vgm chq o mf bqf s cmm", "f z rxo ewq p nycyu gom x chq o xqg bqf s cmm", "zlz z fd p nycyu gom vgm chq mf s cmm", "f zlz z wo fd p gom o mf bqf gfn cmm", "f z rxo ewq fd p nycyu gom chq mf xqg bqf gfn cmm", "z rxo fd nycyu x vgm mf xqg bqf gfn", "f zlz z rxo nycyu gom o xqg s cmm", "f z rxo ewq p nycyu vgm chq o xqg bqf gfn cmm", "f zlz z rxo wo fd p nycyu gom vgm chq mf xqg gfn s", "f zlz rxo ewq nycyu gom x vgm chq mf xqg s", "f z rxo wo fd nycyu gom o mf xqg gfn", "f zlz z ewq fd p gom vgm o mf xqg bqf gfn", "f z rxo ewq wo fd p nycyu mf bqf s cmm", "f zlz z ewq fd p nycyu x o mf gfn cmm", "f zlz z rxo ewq fd gom vgm chq o xqg gfn s", "f z rxo wo fd p nycyu x vgm o mf xqg s cmm", "z ewq wo fd p nycyu gom x o xqg bqf s cmm", "f rxo ewq p nycyu gom x vgm mf xqg s cmm", "f z ewq wo fd nycyu chq o mf xqg", "f zlz ewq wo p nycyu x vgm chq mf xqg bqf s cmm", "f zlz z rxo ewq gom x vgm mf xqg bqf gfn s cmm"};
    vector<string> dangerous = {"f", "zlz", "z", "rxo", "ewq", "wo", "fd", "p", "nycyu", "gom", "x", "vgm", "chq", "o", "mf", "xqg", "bqf", "gfn", "s", "cmm", "arm", "fon", "vkilhb"};
    int threshold = 15;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"c.obu.qfoesrajfxmbo._txsvwtjiuegqkmrtfwi.vv.jafpfu", "ngpmrcdyvozeq.feslflaykjq", "bbpwdfpzl_jymbzwhfekw.djzvuodzcic.pqrebfrfdw_si"};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> address = {"kwyofbf_jwxmrukofdi.wzbrrzhttphxgvoqn_aedx.imv_", "vsnqliaslxt_hyiksfqkdcdosnlrioyvkhuhbxemocaj_w", "kiodowtdyjimxnr", "cieadauu_ljkpunjqcqpdjumysnswoukidxquio", "lmoroxzvwwtqmsswbiczkjaoddo", ".ryfjcyi_gwsowhwl_bz_lys.joiha_ub", "ie_jpvukq", ".murwsnorsxhuoqwikmqcdjvc.kpkydduks", "lowxvxmrxmicsvputtgdoh_gogdtccnczgmzsjfztxmwrv", "svazztbzwoo", "e..rmhyia_ixjilzlnohqyk", "jseedxcvnwmo_pkymgthkkaasgmeiafrgzjaikxuaiwy", "tkr.", "mdnmjlbedhbvn", "erkmxzweqog_qrddepwe", "iiygxpgwlgs..", "g_svrbokhgpugxqfsuzuv", "duhvsff.bxjilztxgmvf_hkt", "mgsdj_.eomuwqktimzoz", "cg", "g_", "itmelvsqshdbozpjpmpqmjnyfjc.gwkcvho.xldhksdvzvck", "r.lvhhirfdxvs.zmvjkv.bloorhfwhbb", "gd_cgzsj", "z.ydmldz", "ejzbmshvfeyencclhlodvgyu_cvae_.li.fhdykvxl_", "ggavlat.mrhmosafgqmvaqcw_xlb", "xphqd_uicanyeqjbcidev_m", "hnlepqlou_vpjodwfhokesdgez.uaqvvwqecyljhobjln", "yfcxiygzwhgpcyyroixuga", "kubjxvyjnscpul_angow._gytmvfrsensjibhtk", "dqhbb_mag.bkknrcgd_yu.rfiouktzzih", "vyqlzqmakulmi", ".dghdx_jkbvefrj_arufyfp", "_ppkreva_erihbgtoyhxdjctvwbkbyxep_vg", "nwfj_.czfcgsrwtlpaqyb", "ipeh_yujsilzcn.ab_no._wcmd.", "oifylbvmh", "kvibcivfkciogmhs", "xojfusen_ens_zubt.tgfes_.jwzpjzavjpsjcwdhrkrcpy", "ngkdtravxt", "elqsauzlt_xvs", "pujocvwjgsrvx_bncsmqalwig_.grqwh", "gsudheva_qvv_rhbjwwqzinizboqngklomwqkhxcnjrrbgd", "fmisnalhhgli.mkmhwjl.tf.q", "_ghuuiltyzr", "gphhzffptwf", "sgtmjoumwlsdvpvezrxzo", "hwqxzow", "ql_w"};
    vector<string> keyword = {"yp mb wr f x e uo m cj qc p ci n kq lb w io ht vk", "lp yp mb f e uo cj qc p o n lb is vk ra eh vr lg", "lp yp mb wr f x nv e gb cj qc p o kq w qn io ae ht", "mb wr f mf nv ed e gb cj qc p o kq lb w qn ae ht", "mb nv ed uo m cj qc p o ci n w ht is vk ra eh vr", "wr f nv ed e gb m cj qc p o ci w qn io ae vk ra eh", "mb wr f nv m o ci n kq io ae ht is vk ra eh vr lg", "yp f x nv ed e m cj qc p ci w qn io ae vk eh vr lg", "lp mb wr f nv ed e uo qc p o ci w ae is vk ra eh", "yp wr f mf e qc p o ci qn ae ht is vk ra eh vr lg", "mb wr f mf ed e uo cj qc p ci n w qn io ae is vk", "yp mb wr f x nv e gb uo m qc p ci n kq lb w io vk", "lp yp wr f mf nv e gb uo cj qc p o n kq w qn io ae", "yp mb wr f x nv ed uo m cj p o n kq lb w qn io ae", "mb wr f x nv e gb uo m cj p ci kq w qn is vk ra eh", "lp yp mb wr f x mf nv ed e gb uo cj qc p o n kq lb", "mb e gb uo cj qc p ci kq w io ae ht is vk ra eh vr", "wr f e gb uo cj qc p o kq io ae ht is vk ra eh vr", "lp mb wr f x mf ed e uo m kq w io ae ht vk ra eh", "yp wr nv ed e cj qc o ci n kq io is vk eh vr lg ca", "yp mb f x nv ed e gb uo m cj qc o n kq lb w qn io", "yp mb f e uo m qc p o ci kq w io ht vk ra eh vr lg", "lp yp mb wr f x mf nv ed e uo p o kq lb w qn io ae", "yp mb f x mf e gb cj qc p o ci n kq lb w qn io ae", "yp mb wr mf nv e gb uo m cj qc p o ci kq lb w io", "lp mb f mf ed e gb uo cj qc o lb w is vk ra eh vr", "lp mb f x mf gb uo m cj qc p o ci n kq lb ae ht is", "lp mb wr nv e cj qc p o ci qn io ae is vk ra eh vr", "lp mb mf ed e uo cj p o n kq w qn io ae vk eh vr", "yp mb wr nv e uo qc p ci n kq lb w vk ra eh vr lg", "mb wr f x nv ed gb uo qc p o n kq lb w qn io ae is", "yp mb wr f x nv ed e gb uo m qc p w qn ae ht is vk", "yp mb wr f nv ed e m ci n kq lb w qn io ae is vk", "mb x mf nv ed uo m cj qc p kq w qn io ht is vk ra", "lp mb wr ed uo cj qc p o kq w ae ht vk eh vr lg ca", "lp yp mb wr x mf nv ed e gb uo m qc p o kq lb w qn", "lp yp mb wr x nv e uo cj p kq lb ae is vk ra eh vr", "lp mb wr x mf nv e uo m cj qc p o ci kq lb w qn io", "lp yp mb wr f mf ed e gb uo m cj p kq lb w ae ht", "lp mb f mf nv ed uo m qc p n kq qn ae ht is vk ra", "mb f x nv ed e uo m cj p kq lb w io ae ht is vk ra", "lp yp mb f mf nv e uo m cj qc p n w ae ht is vk ra", "lp mb wr f mf ed e qc o n lb w io ae ht vk ra eh", "lp yp wr f x e gb uo cj qc p o n kq w qn io ht vk", "lp yp mb f ed e m cj p n kq w qn is vk ra eh vr lg", "lp mb wr f x mf ed gb uo cj qc p o n kq qn ae ht", "lp yp wr f x ed e gb uo m qc p o ci n kq w qn ae", "mb f nv ed e uo m cj p o n kq w qn io ae ht vk ra", "mb wr x mf nv ed e gb uo m qc o kq qn io ht vk ra", "lp mb wr mf nv ed gb uo m qc p ci lb w io vk ra eh"};
    vector<string> dangerous = {"lp", "yp", "mb", "wr", "f", "x", "mf", "nv", "ed", "e", "gb", "uo", "m", "cj", "qc", "p", "o", "ci", "n", "kq", "lb", "w", "qn", "io", "ae", "ht", "is", "vk", "ra", "eh", "vr", "lg", "ca", "pmfo", "uqz", "afmw"};
    int threshold = 19;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"kwyofbf_jwxmrukofdi.wzbrrzhttphxgvoqn_aedx.imv_", "kiodowtdyjimxnr", ".ryfjcyi_gwsowhwl_bz_lys.joiha_ub", ".murwsnorsxhuoqwikmqcdjvc.kpkydduks", "jseedxcvnwmo_pkymgthkkaasgmeiafrgzjaikxuaiwy", "tkr.", "mdnmjlbedhbvn", "erkmxzweqog_qrddepwe", "iiygxpgwlgs..", "g_", "itmelvsqshdbozpjpmpqmjnyfjc.gwkcvho.xldhksdvzvck", "r.lvhhirfdxvs.zmvjkv.bloorhfwhbb", "gd_cgzsj", "ggavlat.mrhmosafgqmvaqcw_xlb", "kubjxvyjnscpul_angow._gytmvfrsensjibhtk", "dqhbb_mag.bkknrcgd_yu.rfiouktzzih", "nwfj_.czfcgsrwtlpaqyb", "oifylbvmh", "ngkdtravxt", "elqsauzlt_xvs", "gsudheva_qvv_rhbjwwqzinizboqngklomwqkhxcnjrrbgd", "fmisnalhhgli.mkmhwjl.tf.q", "gphhzffptwf", "sgtmjoumwlsdvpvezrxzo"};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> address = {"v_sfixutcsqyiqvs.dhabq.rltz.zopctsc_weileie.bu", "foeg.vxvidihguyzi", "cq", "urrjwlfjkjbwuxoacpjyqfsyqiqtj_peiylxnh_n", "skyocp_iij", "vmdsrie_wv", "wi_xkjewsfbjcfxrytgt_auqgqkbjaqpv", "idhslcmvruooeabpjsshvokdmd_lqveujiiq.tp_wn_", "xi_izcwek.epdgo.r_", "dq.phcidkaka", "wfcg.otfbksaqgwpdh_ymkslllisdf_vxq", "jeizqbqksfdpjsx.rqkpqg", "c.oy_zipyn", "xy_oowvhzbmsjkikxisbioidvpsh_c", "ylhixnu._yiqtqc", "mngzzoctzcjmsesmnpi.skg__e", "rbpm", "u", ".fcj_kijiadg.ptrke.dsfuz", "cyelzzzc.", "jfteq_mezxt.qjmkbkyhhenewxqwkuimoqnbryf", "jvmgabqaniicg_bnqdxvektedip", "swusgn._iwsxzt.kkto_enhyyb", "zob_rvqtwfrvnwiqlhciehiioyazbucn_opyvqylm", "guqbpydnth.zhcbwmxpndpltcv.nvjwafzibtvvmexric", "sbbtrpco_rwiawg_.fadr", "mcunxuoywtya", "_r_bwie", "ydzfskpqwahkvxoshpftnlrn", "n_vlsqzvpubxacrwlgquaat.nlrulxrt_epbbfewdj", "egwmdtkizgiqwromxmngwcwvacgarzkhsgtxrq.zwneltf", "regbp_joraxjzvqngs.._ycyx", "uccrkpccbfoqo.vzzvdb", "mn.qb", "mzpk", "fehavnazfxohptwhq.k_rrgx.zlrftgjhhmj", "atfcwt.gjjoayk.lwp.kokxkddhrml.yipwivrtcfikclhbcr", "rgmcsmnzrfvcqozm_lwliwzjlepfgjicvi_i.pm", "vsidxqd_ktqdlescn_aaegbgkklgdxaqryxfpusgcioecku", "ytvycykan", "ej", "rqrtglxjqwkh.wo.", "iqbrmbctzhis_sad.cb", "ndtj_dffxvety", "ghmllhqkadchtwfnbhdhgqrj_riqwmzoagzcmurdkgg", "ekrr.jcvwxamlstzwxtm", "ctc_", "onmnxe.xnwxpdlhxyimqk_cgxyxtwtlyzldwvrvjliwl", "t", "bn.odpo"};
    vector<string> keyword = {"mwt hdel lu zx auk p u j jip bn oqm z all w", "mwt y hdel lu li h zx uz iw kd j jip em lkm", "y kph so uw li p u i iku kfnq jip bn em", "y kph hdel o x lu uz iw kd qxnok u i iku in jip bn", "mwt kph hdel o x iw qxnok p i in kfnq jip", "hdel x uw li zx auk p u i kfnq jip em", "so o lu iw p kfnq jip em wo abcjc iied z all jgx v", "mwt uw lu h iw kd qxnok jip bn r abcjc ww sug wo w", "kph x uw lu li h zx uz i iku j bn em", "mwt kph so zx uz auk iw qxnok u i jip bn", "hdel uw lu li zx uz auk iw s kd u bn em zte iiu", "y kph o li h uz kd qxnok u i zte r sn dxiz m", "so lu h uz auk iw kd in kfnq em", "mwt y li zx uz iw qxnok p u j in jip ww l dxiz iiu", "mwt so lu li zx uz auk s qxnok i", "y h zx auk qxnok p i j in kfnq bn", "kph x lu li h auk qxnok u iku kfnq bn d dxiz oqm", "mwt y so hdel uz kd p in m iied", "so uw lu li h zx uz s qxnok l", "y so o x uw lu h zx auk kd qxnok p i iku j in jip", "mwt kph so uz kd j em sn", "so hdel x uw lu li zx uz s kd oqm iiu jgx v", "mwt y hdel o x h auk iw iku j jip em ww", "y hdel li h zx s iku jip wo sn abcjc xw", "y hdel x zx uz kd i iku in kfnq jip", "li h zx auk s qxnok u j in bn", "mwt kph o zx qxnok i iku kfnq bn em", "mwt kph so li s iku em tp all iiu", "y so hdel o x lu li h iw qxnok p i iku em", "y o x lu li uz p i j in kfnq em sug wo xw", "y so hdel uw li h zx uz iw kd qxnok u j jip", "mwt y so o uw lu zx auk kd p u i iku kfnq", "x zx kd p u j in kfnq jip bn", "y kph so o x lu li zx s qxnok p in bn em xw xfvtw", "y x auk s kd iied v", "mwt kph x h zx auk iw s p in kfnq jip bn em l xw", "kph hdel x h zx iw s kd p u iku em", "mwt y kph x i in kfnq sn z wo sug xfvtw jgx r d tp", "hdel x uw lu li iw s kd p i kfnq jip lkm dxiz tp", "so o x uw h u iku j kfnq", "y hdel o uw lu li zx uz auk kd qxnok u j in kfnq", "kph hdel o uw h i j in bn z zte xw xfvtw dxiz", "mwt kph hdel lu h auk s kd qxnok i jip", "mwt o lu auk s p u i jip em", "mwt y kph h uz p in kfnq bn em", "y hdel o uw li h auk iw kd i iku in kfnq jip", "hdel h auk iw s u iku in kfnq jip bn em", "y kph uw li zx s qxnok u i kfnq", "y kph lu li h uz s kd qxnok u i j em sug", "mwt y hdel lu auk qxnok p j kfnq em d wo"};
    vector<string> dangerous = {"mwt", "y", "kph", "so", "hdel", "o", "x", "uw", "lu", "li", "h", "zx", "uz", "auk", "iw", "s", "kd", "qxnok", "p", "u", "i", "iku", "j", "in", "kfnq", "jip", "bn", "em"};
    int threshold = 10;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"v_sfixutcsqyiqvs.dhabq.rltz.zopctsc_weileie.bu", "foeg.vxvidihguyzi", "cq", "urrjwlfjkjbwuxoacpjyqfsyqiqtj_peiylxnh_n", "skyocp_iij", "vmdsrie_wv", "wi_xkjewsfbjcfxrytgt_auqgqkbjaqpv", "idhslcmvruooeabpjsshvokdmd_lqveujiiq.tp_wn_", "xi_izcwek.epdgo.r_", "dq.phcidkaka", "wfcg.otfbksaqgwpdh_ymkslllisdf_vxq", "jeizqbqksfdpjsx.rqkpqg", "c.oy_zipyn", "xy_oowvhzbmsjkikxisbioidvpsh_c", "ylhixnu._yiqtqc", "mngzzoctzcjmsesmnpi.skg__e", "rbpm", "u", ".fcj_kijiadg.ptrke.dsfuz", "cyelzzzc.", "jvmgabqaniicg_bnqdxvektedip", "swusgn._iwsxzt.kkto_enhyyb", "zob_rvqtwfrvnwiqlhciehiioyazbucn_opyvqylm", "guqbpydnth.zhcbwmxpndpltcv.nvjwafzibtvvmexric", "sbbtrpco_rwiawg_.fadr", "mcunxuoywtya", "_r_bwie", "ydzfskpqwahkvxoshpftnlrn", "n_vlsqzvpubxacrwlgquaat.nlrulxrt_epbbfewdj", "egwmdtkizgiqwromxmngwcwvacgarzkhsgtxrq.zwneltf", "regbp_joraxjzvqngs.._ycyx", "uccrkpccbfoqo.vzzvdb", "mn.qb", "fehavnazfxohptwhq.k_rrgx.zlrftgjhhmj", "atfcwt.gjjoayk.lwp.kokxkddhrml.yipwivrtcfikclhbcr", "rgmcsmnzrfvcqozm_lwliwzjlepfgjicvi_i.pm", "vsidxqd_ktqdlescn_aaegbgkklgdxaqryxfpusgcioecku", "ej", "rqrtglxjqwkh.wo.", "iqbrmbctzhis_sad.cb", "ndtj_dffxvety", "ghmllhqkadchtwfnbhdhgqrj_riqwmzoagzcmurdkgg", "ekrr.jcvwxamlstzwxtm", "ctc_", "onmnxe.xnwxpdlhxyimqk_cgxyxtwtlyzldwvrvjliwl", "t", "bn.odpo"};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> address = {"v_sfixutcsqyiqvs.dhabq.rltz.zopctsc_weileie.bu", "foeg.vxvidihguyzi", "cq", "urrjwlfjkjbwuxoacpjyqfsyqiqtj_peiylxnh_n", "skyocp_iij", "vmdsrie_wv", "wi_xkjewsfbjcfxrytgt_auqgqkbjaqpv", "idhslcmvruooeabpjsshvokdmd_lqveujiiq.tp_wn_", "xi_izcwek.epdgo.r_", "dq.phcidkaka", "wfcg.otfbksaqgwpdh_ymkslllisdf_vxq", "jeizqbqksfdpjsx.rqkpqg", "c.oy_zipyn", "xy_oowvhzbmsjkikxisbioidvpsh_c", "ylhixnu._yiqtqc", "mngzzoctzcjmsesmnpi.skg__e", "rbpm", "u", ".fcj_kijiadg.ptrke.dsfuz", "cyelzzzc.", "jfteq_mezxt.qjmkbkyhhenewxqwkuimoqnbryf", "jvmgabqaniicg_bnqdxvektedip", "swusgn._iwsxzt.kkto_enhyyb", "zob_rvqtwfrvnwiqlhciehiioyazbucn_opyvqylm", "guqbpydnth.zhcbwmxpndpltcv.nvjwafzibtvvmexric", "sbbtrpco_rwiawg_.fadr", "mcunxuoywtya", "_r_bwie", "ydzfskpqwahkvxoshpftnlrn", "n_vlsqzvpubxacrwlgquaat.nlrulxrt_epbbfewdj", "egwmdtkizgiqwromxmngwcwvacgarzkhsgtxrq.zwneltf", "regbp_joraxjzvqngs.._ycyx", "uccrkpccbfoqo.vzzvdb", "mn.qb", "mzpk", "fehavnazfxohptwhq.k_rrgx.zlrftgjhhmj", "atfcwt.gjjoayk.lwp.kokxkddhrml.yipwivrtcfikclhbcr", "rgmcsmnzrfvcqozm_lwliwzjlepfgjicvi_i.pm", "vsidxqd_ktqdlescn_aaegbgkklgdxaqryxfpusgcioecku", "ytvycykan", "ej", "rqrtglxjqwkh.wo.", "iqbrmbctzhis_sad.cb", "ndtj_dffxvety", "ghmllhqkadchtwfnbhdhgqrj_riqwmzoagzcmurdkgg", "ekrr.jcvwxamlstzwxtm", "ctc_", "onmnxe.xnwxpdlhxyimqk_cgxyxtwtlyzldwvrvjliwl", "t", "bn.odpo"};
    vector<string> keyword = {"mwt hdel lu zx auk p u j jip bn oqm z all w", "mwt y hdel lu li h zx uz iw kd j jip em lkm", "y kph so uw li p u i iku kfnq jip bn em", "y kph hdel o x lu uz iw kd qxnok u i iku in jip bn", "mwt kph hdel o x iw qxnok p i in kfnq jip", "hdel x uw li zx auk p u i kfnq jip em", "so o lu iw p kfnq jip em wo abcjc iied z all jgx v", "mwt uw lu h iw kd qxnok jip bn r abcjc ww sug wo w", "kph x uw lu li h zx uz i iku j bn em", "mwt kph so zx uz auk iw qxnok u i jip bn", "hdel uw lu li zx uz auk iw s kd u bn em zte iiu", "y kph o li h uz kd qxnok u i zte r sn dxiz m", "so lu h uz auk iw kd in kfnq em", "mwt y li zx uz iw qxnok p u j in jip ww l dxiz iiu", "mwt so lu li zx uz auk s qxnok i", "y h zx auk qxnok p i j in kfnq bn", "kph x lu li h auk qxnok u iku kfnq bn d dxiz oqm", "mwt y so hdel uz kd p in m iied", "so uw lu li h zx uz s qxnok l", "y so o x uw lu h zx auk kd qxnok p i iku j in jip", "mwt kph so uz kd j em sn", "so hdel x uw lu li zx uz s kd oqm iiu jgx v", "mwt y hdel o x h auk iw iku j jip em ww", "y hdel li h zx s iku jip wo sn abcjc xw", "y hdel x zx uz kd i iku in kfnq jip", "li h zx auk s qxnok u j in bn", "mwt kph o zx qxnok i iku kfnq bn em", "mwt kph so li s iku em tp all iiu", "y so hdel o x lu li h iw qxnok p i iku em", "y o x lu li uz p i j in kfnq em sug wo xw", "y so hdel uw li h zx uz iw kd qxnok u j jip", "mwt y so o uw lu zx auk kd p u i iku kfnq", "x zx kd p u j in kfnq jip bn", "y kph so o x lu li zx s qxnok p in bn em xw xfvtw", "y x auk s kd iied v", "mwt kph x h zx auk iw s p in kfnq jip bn em l xw", "kph hdel x h zx iw s kd p u iku em", "mwt y kph x i in kfnq sn z wo sug xfvtw jgx r d tp", "hdel x uw lu li iw s kd p i kfnq jip lkm dxiz tp", "so o x uw h u iku j kfnq", "y hdel o uw lu li zx uz auk kd qxnok u j in kfnq", "kph hdel o uw h i j in bn z zte xw xfvtw dxiz", "mwt kph hdel lu h auk s kd qxnok i jip", "mwt o lu auk s p u i jip em", "mwt y kph h uz p in kfnq bn em", "y hdel o uw li h auk iw kd i iku in kfnq jip", "hdel h auk iw s u iku in kfnq jip bn em", "y kph uw li zx s qxnok u i kfnq", "y kph lu li h uz s kd qxnok u i j em sug", "mwt y hdel lu auk qxnok p j kfnq em d wo"};
    vector<string> dangerous = {"mwt", "y", "kph", "so", "hdel", "o", "x", "uw", "lu", "li", "h", "zx", "uz", "auk", "iw", "s", "kd", "qxnok", "p", "u", "i", "iku", "j", "in", "kfnq", "jip", "bn", "em"};
    int threshold = 13;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"foeg.vxvidihguyzi", "cq", "urrjwlfjkjbwuxoacpjyqfsyqiqtj_peiylxnh_n", "xi_izcwek.epdgo.r_", "wfcg.otfbksaqgwpdh_ymkslllisdf_vxq", "xy_oowvhzbmsjkikxisbioidvpsh_c", "cyelzzzc.", "swusgn._iwsxzt.kkto_enhyyb", "ydzfskpqwahkvxoshpftnlrn", "n_vlsqzvpubxacrwlgquaat.nlrulxrt_epbbfewdj", "egwmdtkizgiqwromxmngwcwvacgarzkhsgtxrq.zwneltf", "regbp_joraxjzvqngs.._ycyx", "mn.qb", "fehavnazfxohptwhq.k_rrgx.zlrftgjhhmj", "vsidxqd_ktqdlescn_aaegbgkklgdxaqryxfpusgcioecku", "ej", "rqrtglxjqwkh.wo.", "ekrr.jcvwxamlstzwxtm", "t"};
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> address = {"jomzlnlkdldmrmlutwzhubzclxojae_tbgsykruzexbpe", "xxpshglvozelbjijy_kdraf.rvvyvylgrifetxp", "i.orn.udkuynvfjillmcnnqayfakiqy.tife", "infr.uuhxl__r_nxtwxhd_zclkzds", "pidxnwbyevwjplelgfgiyidecygqsqokmt.co_jjfepyaj", "r_bparodslytmlk_iohtsef.lxmajlljdrfiitezvgbqfkv", "tnafdliuo.c.kwoppilswpu", "irtdlgqldusuzxqtcjini.lptzfgmh", "trkwxsgrlevjmqqvhqsdvadadzgbwmysxphjhoy", "pg_fqyvdmoeesen_qtarprxnujs.", "okwbfooozacjzhvmryksxp_bwsuxjfyhaowujjizpm", "erh_tyqgrlujrzcrcwcdtxxlxgghzcjqmsisddjyvqbb", "aix__t.xtyvmiehsstsj", "g_mxl.xlxb", "r.fioslbupuwktqteojlynqsu", "zjogxr.rbgcnvxkoiasoo..czwqnsv", "twmpcbqnkogxwuxahimxlrcj.kczsvvwqlqm", "jybdtwa", "hxejwnrfr_niehty.g..cjpovzfwwutwyfztnsipgu", "tebt__uebfpgzlexjfs_boxhtvjmdip", "hiatxbpcnjt_brdjjscdoj_._.rbyttxevy", "eetfcx_m_jtntiwz_uyjfqndchytctjwknqwinqgjfr", "bwxa", "vbcm_tw", "yce", "ksrnkwptj", "geltlm.s_b_eullgoqkesmovsfafztzvkerosblfy", "w_lmhrdfbifbxbts_nnrcbm", "jdrsyog", "vidjf.jhnzfp", "snqeojpbh.mzicmxlfvsnaeeyurod.sb", "exbaccifs_hcdi_zejqqraagmrqoyordmhhpvcqmoxbjoed", "bblluuz.nchfelo_.aoiil.umqbozv", "jptomes_p_", "_seeeeqkxrmbavo_zpoe_xrjdfrboaosuy", "dpshzilkiipr.djqxxznrzulygxkg.", "dhdndvooye", "pccbf.lefkjmebj_phtbhweyrycscpnrptxrrczfjhtui", "ky_imbhckpwhyc_ateak.bso_q.wrqgw", "_j_tofdngl", "x_r", "lp.nbhmmhifgb.qmvpatliqbrwootzqttuzwvo", "wpuisffuxbi_qilymjt", "xqjaxejflgfecao", "idbe", "lgagrljmlvdv.bztwpxgqkzpxrstnnctbbsfmm.voqffn.", "yfhzvehamgaelb_ezbzuri.vxcqebnas_fdqsuwpxcrahvcu", "ogm.ejzsxjugkm.okeqtfbtsmgantoiyhefasvgpj"};
    vector<string> keyword = {"sb bz ay w iw b x vg qt jb sw wd qh wb fj in cd qv", "bz iw x vg qt fw wr sw wd bl ru wb fj in cd qv pm", "sb bz iw vg jb wr sw wd qh bl ru wb fj in cd qv pm", "sb bz ay w iw b vg qt fw ed wd qh bl ru fj cd qv j", "sb iw x vg fw ed sw wd qh fj in cd qv pm j pl jq y", "bz ay w iw b x vg qt fw jb wr ed wd qh ru wb fj in", "sb iw x vg qt fw jb wr sw wd bl ru wb fj in cd qv", "ay iw b x vg qt fw wr wd qh bl ru wb fj in cd qv j", "sb bz ay iw b x qt jb wr ed sw wd ru wb in cd qv j", "sb bz ay w iw b x qt fw jb ed sw wd bl in cd qv pm", "sb bz ay w iw vg qt fw wr ed wd qh bl ru fj in cd", "sb bz w b x vg qt fw jb wr wd ru fj in cd qv pm j", "sb ay w b qt fw jb wr ed sw qh ru wb fj in cd qv j", "sb ay w iw x vg qt fw jb wr sw wd qh bl ru wb in j", "bz w iw b x jb wd ru wb fj in cd qv pm j pl jq y m", "w b x vg fw jb wr ed wd qh bl ru wb in cd qv pm j", "sb bz iw b x vg fw jb wr sw bl ru wb in cd qv pm j", "ay b x vg qt fw jb ed sw wd qh wb fj in cd qv pm j", "bz ay w iw b vg qt fw jb wr ed ru wb in cd qv pm j", "sb bz ay w iw b vg qt fw jb wr ed wd qh bl ru wb j", "sb bz ay w iw x vg fw jb wr ed sw wd bl ru wb in j", "bz ay iw b x vg qt fw sw qh bl ru wb fj in cd qv j", "sb bz ay w iw qt wr ed sw qh ru wb fj cd qv pm j y", "sb bz ay w vg qt fw jb wr ed sw wd qh ru fj in cd", "sb w x vg qt fw ed sw wd qh bl wb fj in cd qv pm j", "sb w iw b vg qt jb ed sw wd qh bl ru fj in cd qv j", "sb bz ay w iw x qt fw wr ed wd qh bl fj in cd qv j", "bz w iw b vg qt fw jb wr ed sw qh bl ru fj in cd j", "sb bz ay w b x vg fw jb wr ed wd bl ru fj cd qv pm", "sb ay w b x qt jb wr ed wd qh bl wb fj in cd qv pm", "bz ay w iw b qt jb wr ed sw wd qh bl ru wb fj in j", "sb ay w iw x jb wr ed wd bl ru wb fj in cd qv pm j", "sb bz ay w b x vg qt ed sw wd bl ru fj in cd qv pm", "sb bz ay w iw b x qt fw jb wr sw qh bl ru wb fj cd", "sb bz ay w x qt jb wr ed sw wd qh bl wb fj cd qv j", "bz ay w b x vg qt fw jb wr sw wd qh bl wb fj cd qv", "bz ay iw b vg qt fw wr ed sw bl ru wb fj qv pm j y", "sb bz ay w iw b x qt fw jb wr ed sw wd qh bl wb fj", "sb bz w iw b x vg qt jb wr sw qh ru fj in cd qv pm", "sb bz ay vg qt fw jb wr ed wd qh bl ru wb in cd qv", "bz ay w iw b qt fw jb wr ed sw wd bl ru wb in cd j", "sb ay w b x fw wr ed sw wd qh bl fj in qv pm j pl", "w iw b x vg qt fw jb wr bl ru wb fj cd qv pm j pl", "sb bz ay b x qt fw wr ed bl wb fj in cd qv pm j pl", "sb bz ay w b x qt fw jb sw qh bl ru fj in cd qv pm", "sb bz ay iw x vg fw jb wr ed sw wd qh ru wb fj qv", "sb bz ay w iw b x vg qt fw jb wr ed sw wd qh bl ru", "sb bz ay w iw b x vg fw jb wr ed sw wd qh ru wb fj"};
    vector<string> dangerous = {"sb", "bz", "ay", "w", "iw", "b", "x", "vg", "qt", "fw", "jb", "wr", "ed", "sw", "wd", "qh", "bl", "ru", "wb", "fj", "in", "cd", "qv", "pm", "j", "pl", "jq", "y", "incs", "m", "yyrn", "focr", "gvpz", "pfnzpjs", "mand"};
    int threshold = 19;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"r.fioslbupuwktqteojlynqsu"};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> address = {"jomzlnlkdldmrmlutwzhubzclxojae_tbgsykruzexbpe", "xxpshglvozelbjijy_kdraf.rvvyvylgrifetxp", "i.orn.udkuynvfjillmcnnqayfakiqy.tife", "infr.uuhxl__r_nxtwxhd_zclkzds", "pidxnwbyevwjplelgfgiyidecygqsqokmt.co_jjfepyaj", "r_bparodslytmlk_iohtsef.lxmajlljdrfiitezvgbqfkv", "tnafdliuo.c.kwoppilswpu", "irtdlgqldusuzxqtcjini.lptzfgmh", "trkwxsgrlevjmqqvhqsdvadadzgbwmysxphjhoy", "pg_fqyvdmoeesen_qtarprxnujs.", "okwbfooozacjzhvmryksxp_bwsuxjfyhaowujjizpm", "erh_tyqgrlujrzcrcwcdtxxlxgghzcjqmsisddjyvqbb", "aix__t.xtyvmiehsstsj", "g_mxl.xlxb", "r.fioslbupuwktqteojlynqsu", "zjogxr.rbgcnvxkoiasoo..czwqnsv", "twmpcbqnkogxwuxahimxlrcj.kczsvvwqlqm", "jybdtwa", "hxejwnrfr_niehty.g..cjpovzfwwutwyfztnsipgu", "tebt__uebfpgzlexjfs_boxhtvjmdip", "hiatxbpcnjt_brdjjscdoj_._.rbyttxevy", "eetfcx_m_jtntiwz_uyjfqndchytctjwknqwinqgjfr", "bwxa", "vbcm_tw", "yce", "ksrnkwptj", "geltlm.s_b_eullgoqkesmovsfafztzvkerosblfy", "w_lmhrdfbifbxbts_nnrcbm", "jdrsyog", "vidjf.jhnzfp", "snqeojpbh.mzicmxlfvsnaeeyurod.sb", "exbaccifs_hcdi_zejqqraagmrqoyordmhhpvcqmoxbjoed", "bblluuz.nchfelo_.aoiil.umqbozv", "jptomes_p_", "_seeeeqkxrmbavo_zpoe_xrjdfrboaosuy", "dpshzilkiipr.djqxxznrzulygxkg.", "dhdndvooye", "pccbf.lefkjmebj_phtbhweyrycscpnrptxrrczfjhtui", "ky_imbhckpwhyc_ateak.bso_q.wrqgw", "_j_tofdngl", "x_r", "lp.nbhmmhifgb.qmvpatliqbrwootzqttuzwvo", "wpuisffuxbi_qilymjt", "xqjaxejflgfecao", "idbe", "lgagrljmlvdv.bztwpxgqkzpxrstnnctbbsfmm.voqffn.", "yfhzvehamgaelb_ezbzuri.vxcqebnas_fdqsuwpxcrahvcu", "ogm.ejzsxjugkm.okeqtfbtsmgantoiyhefasvgpj"};
    vector<string> keyword = {"sb bz ay w iw b x vg qt jb sw wd qh wb fj in cd qv", "bz iw x vg qt fw wr sw wd bl ru wb fj in cd qv pm", "sb bz iw vg jb wr sw wd qh bl ru wb fj in cd qv pm", "sb bz ay w iw b vg qt fw ed wd qh bl ru fj cd qv j", "sb iw x vg fw ed sw wd qh fj in cd qv pm j pl jq y", "bz ay w iw b x vg qt fw jb wr ed wd qh ru wb fj in", "sb iw x vg qt fw jb wr sw wd bl ru wb fj in cd qv", "ay iw b x vg qt fw wr wd qh bl ru wb fj in cd qv j", "sb bz ay iw b x qt jb wr ed sw wd ru wb in cd qv j", "sb bz ay w iw b x qt fw jb ed sw wd bl in cd qv pm", "sb bz ay w iw vg qt fw wr ed wd qh bl ru fj in cd", "sb bz w b x vg qt fw jb wr wd ru fj in cd qv pm j", "sb ay w b qt fw jb wr ed sw qh ru wb fj in cd qv j", "sb ay w iw x vg qt fw jb wr sw wd qh bl ru wb in j", "bz w iw b x jb wd ru wb fj in cd qv pm j pl jq y m", "w b x vg fw jb wr ed wd qh bl ru wb in cd qv pm j", "sb bz iw b x vg fw jb wr sw bl ru wb in cd qv pm j", "ay b x vg qt fw jb ed sw wd qh wb fj in cd qv pm j", "bz ay w iw b vg qt fw jb wr ed ru wb in cd qv pm j", "sb bz ay w iw b vg qt fw jb wr ed wd qh bl ru wb j", "sb bz ay w iw x vg fw jb wr ed sw wd bl ru wb in j", "bz ay iw b x vg qt fw sw qh bl ru wb fj in cd qv j", "sb bz ay w iw qt wr ed sw qh ru wb fj cd qv pm j y", "sb bz ay w vg qt fw jb wr ed sw wd qh ru fj in cd", "sb w x vg qt fw ed sw wd qh bl wb fj in cd qv pm j", "sb w iw b vg qt jb ed sw wd qh bl ru fj in cd qv j", "sb bz ay w iw x qt fw wr ed wd qh bl fj in cd qv j", "bz w iw b vg qt fw jb wr ed sw qh bl ru fj in cd j", "sb bz ay w b x vg fw jb wr ed wd bl ru fj cd qv pm", "sb ay w b x qt jb wr ed wd qh bl wb fj in cd qv pm", "bz ay w iw b qt jb wr ed sw wd qh bl ru wb fj in j", "sb ay w iw x jb wr ed wd bl ru wb fj in cd qv pm j", "sb bz ay w b x vg qt ed sw wd bl ru fj in cd qv pm", "sb bz ay w iw b x qt fw jb wr sw qh bl ru wb fj cd", "sb bz ay w x qt jb wr ed sw wd qh bl wb fj cd qv j", "bz ay w b x vg qt fw jb wr sw wd qh bl wb fj cd qv", "bz ay iw b vg qt fw wr ed sw bl ru wb fj qv pm j y", "sb bz ay w iw b x qt fw jb wr ed sw wd qh bl wb fj", "sb bz w iw b x vg qt jb wr sw qh ru fj in cd qv pm", "sb bz ay vg qt fw jb wr ed wd qh bl ru wb in cd qv", "bz ay w iw b qt fw jb wr ed sw wd bl ru wb in cd j", "sb ay w b x fw wr ed sw wd qh bl fj in qv pm j pl", "w iw b x vg qt fw jb wr bl ru wb fj cd qv pm j pl", "sb bz ay b x qt fw wr ed bl wb fj in cd qv pm j pl", "sb bz ay w b x qt fw jb sw qh bl ru fj in cd qv pm", "sb bz ay iw x vg fw jb wr ed sw wd qh ru wb fj qv", "sb bz ay w iw b x vg qt fw jb wr ed sw wd qh bl ru", "sb bz ay w iw b x vg fw jb wr ed sw wd qh ru wb fj"};
    vector<string> dangerous = {"sb", "bz", "ay", "w", "iw", "b", "x", "vg", "qt", "fw", "jb", "wr", "ed", "sw", "wd", "qh", "bl", "ru", "wb", "fj", "in", "cd", "qv", "pm", "j", "pl", "jq", "y", "incs", "m", "yyrn", "focr", "gvpz", "pfnzpjs", "mand"};
    int threshold = 18;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"jomzlnlkdldmrmlutwzhubzclxojae_tbgsykruzexbpe", "infr.uuhxl__r_nxtwxhd_zclkzds", "pidxnwbyevwjplelgfgiyidecygqsqokmt.co_jjfepyaj", "r_bparodslytmlk_iohtsef.lxmajlljdrfiitezvgbqfkv", "irtdlgqldusuzxqtcjini.lptzfgmh", "trkwxsgrlevjmqqvhqsdvadadzgbwmysxphjhoy", "pg_fqyvdmoeesen_qtarprxnujs.", "erh_tyqgrlujrzcrcwcdtxxlxgghzcjqmsisddjyvqbb", "aix__t.xtyvmiehsstsj", "g_mxl.xlxb", "r.fioslbupuwktqteojlynqsu", "zjogxr.rbgcnvxkoiasoo..czwqnsv", "twmpcbqnkogxwuxahimxlrcj.kczsvvwqlqm", "jybdtwa", "hxejwnrfr_niehty.g..cjpovzfwwutwyfztnsipgu", "tebt__uebfpgzlexjfs_boxhtvjmdip", "hiatxbpcnjt_brdjjscdoj_._.rbyttxevy", "eetfcx_m_jtntiwz_uyjfqndchytctjwknqwinqgjfr", "bwxa", "yce", "ksrnkwptj", "geltlm.s_b_eullgoqkesmovsfafztzvkerosblfy", "w_lmhrdfbifbxbts_nnrcbm", "jdrsyog", "vidjf.jhnzfp", "snqeojpbh.mzicmxlfvsnaeeyurod.sb", "exbaccifs_hcdi_zejqqraagmrqoyordmhhpvcqmoxbjoed", "bblluuz.nchfelo_.aoiil.umqbozv", "jptomes_p_", "_seeeeqkxrmbavo_zpoe_xrjdfrboaosuy", "dpshzilkiipr.djqxxznrzulygxkg.", "dhdndvooye", "pccbf.lefkjmebj_phtbhweyrycscpnrptxrrczfjhtui", "ky_imbhckpwhyc_ateak.bso_q.wrqgw", "x_r", "lp.nbhmmhifgb.qmvpatliqbrwootzqttuzwvo", "wpuisffuxbi_qilymjt", "xqjaxejflgfecao", "idbe", "yfhzvehamgaelb_ezbzuri.vxcqebnas_fdqsuwpxcrahvcu", "ogm.ejzsxjugkm.okeqtfbtsmgantoiyhefasvgpj"};
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> address = {"mnox_mghoqsmnf_hhyxeh", "gjiaghvuepjfdbhw._juo", "icd.wplz.soacszd_domshbei", "yewytmyuqsjo__zqotjjjmfyvdinea.ndctwoi.iohsh", "fbwxpbckor.sltjuwuddqofbaainjujdbtgjv.lezwnxhuvo", "ivlqnqjn_vnupidsjwexe", ".rpj.bbsalryfnon_elh.ekyhirebo", "ecokfzdljttpiu_lpfhilmzp", "bcrdkxxupaodcdoa_zwzxsgnaywxpazpicsk", "ayznhsstmlnedklmsrzvnnu", "xuk_tbthksaelmckje.go_.spsgsuspmht", "i", "qip", "vplighfqwvfsz.iqlhappck", "apnhyxnkjxa.subxvmntipi_ccqejsmckratood", "oygbxtxyoagglfjhrvufuxyrft_mylogesjvu", "rnlwajqqcyokfiaczfaxazye.bdzzc", "afqrixv.ubgpmxdrndgnesaelx.l", "zexrjiam_wrvzvoghqdvkm_kimj", "bpmp_dpaderauzrlruv", "hrco.lojaqexbvc", "kdvmbgknoucsdfoxuutzxqfzmopevrzqkixvaeam", "ae.cdhmddamzzwsgrt_orf", "lwptbetlrbxdgoklouweu", "miavbwakozvfuv.niixt.jwcvdgjvgik", "dqjt_xrm", "tzbfjsvvfttaytgdehzyjwk_jhdfiehphgucabphixnqdnhr", "hkxxdhqc.ltjyhlemqebuslyuynwxcavdutkvzjrsqd", "geyw.e..n_pzga_t_jxkztnkmuuqcdts", "okbcc.zduzpzjwja.", "thuldadybegzktbbmhalyngdks_.hchkjpzcjfmrwhkxuyj", "bf", "zyfngwpsp", "f.ubdxte_sdfoixsbsh_ifigvcdxrj", "avbe", "bcixlr.u_stz_qbsestqtpmba.efbgr.", "ssalegnrgzjl_mkrzaag", "habaqehlsqhxbwufptekpsxpal_fcqzewmslba.cvu_vcn", "lzfhxljqijmozfcgzhba_xmsbjazmxbbgqzmctexs", "_.xvexka", "padwpozjtjbwvzqb.jbycjxpljbx", "ywspotrfp_q_sfu.cixynpjordqnftaclkhnzajqc", "dtqjhye", "zypxtega.uogbga", "elygrlfn_n_.tlpbrrbekwykeexkuafyowzzxmwgfplimt.", "gxvjtotbqf..d.hkzktfgktapoyakvtslfruugxvvhgq", "c.f", "mokfzkgktserxza.vstcdawpwgpfhpkcs.qsfjsxmzjfwy_vkv"};
    vector<string> keyword = {"wz v xt dk eq l oa uf vx", "c l oa uf tk q euu aec px at pe bf rr i fy j e", "v c s dk eq tk f e ep wq w jau vx jjs d a m dx n q", "wz c dk l oa uf vd e jau d ns bf", "t wz c xt dk l oa hd vx m px pe i vd fa q dy qj rr", "eq l oa dx w b rb cxu rr fa a wu dy", "xt s dk l oa fy dx qj m y q", "c xt dk l oa uf tk uh at px j fy dm", "t wz v c xt s dk eq l oa q vx px y fa ns dy z x p", "c xt s dk l oa jjs rr", "wz v xt dk eq l uf nb uh dx jjs o e at", "t wz v xt dk eq l oa e wq", "t v xt s dk l dx pe q i n w z hd cxu ep fa nb e rr", "t wz c xt l at z a wu w j bf i uk n x e rb px fa", "c xt s eq l oa cxu ns o p x uq m aec ep be rb", "wz c xt dk l oa tk fy qj n ep m q fa at d rb h wq", "wz v xt dk l oa uf fa ep f ns", "wz dk eq l oa uf tk dm g euu pe px vd ur fa m e at", "wz xt dk eq l ur d pr fa dm b be px fy euu p uh ep", "t v xt s dk eq b y", "t wz v dk eq l oa uf w rb k rr m a dy dx", "wz c xt s l oa jzd rr f j d fy g ep pe uk nb n cxu", "wz xt s dk eq l oa aec be dy", "t v xt s dk eq uf hd jau j z", "t xt dk eq l fy uh jjs w ep vx hd rb px jzd e a dm", "c xt s dk eq l w euu d ns", "xt s dk eq oa p a ur vx aec n fa dy ep o rr b y uq", "t wz xt s dk eq oa uf pe uk h nb z ns g q wq jau w", "t c xt dk l tk f fy pe i jjs w h px pr", "t c xt dk eq l oa tk dm rb pr ns jjs be ua fa hd h", "v xt s dk eq l uf nb fa z w uq wq d dy vx wu rr dt", "t wz c s dk l oa tk uq vx ns hd aec uk n w h bf px", "t wz v c xt dk l oa uf uh uk jjs", "c xt s dk eq tk k nb vx vd euu i", "t wz v xt s dk l oa uf tk", "c xt dk a m dm pe rb e ep b at o y rr wu dt w uq", "t v c xt s dk eq l oa uf z vd o uq rb ns jjs be dx", "t wz c s dk eq l bf x euu uh k dx e b cxu px", "c xt l oa pr jzd p j m n ep", "v c dk eq uf a ua b hd p qj uh bf x wq h euu uq ep", "xt eq l h m pe be ns jzd qj k cxu n g", "wz v c xt s dk eq l oa uf i k f o nb w uk pe h uh", "t wz xt dk eq l uf qj j d dy px x at cxu rb i ep n", "xt s dk eq qj ua w vd euu z aec a j q cxu at pe", "t wz c s eq oa tk aec bf x pr cxu b pe nb fa jjs", "v c dk eq l oa uf tk pr rr d g jau px p cxu", "wz c xt s dk eq l oa uf ns ur dx m k jau q at dt b", "wz c xt s dk eq oa a x i uq cxu rb e vd w uk at ep"};
    vector<string> dangerous = {"t", "wz", "v", "c", "xt", "s", "dk", "eq", "l", "oa", "uf", "tk", "fjavtbkb", "myg"};
    int threshold = 9;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"mnox_mghoqsmnf_hhyxeh", "gjiaghvuepjfdbhw._juo", "icd.wplz.soacszd_domshbei", "yewytmyuqsjo__zqotjjjmfyvdinea.ndctwoi.iohsh", "fbwxpbckor.sltjuwuddqofbaainjujdbtgjv.lezwnxhuvo", "ivlqnqjn_vnupidsjwexe", ".rpj.bbsalryfnon_elh.ekyhirebo", "ecokfzdljttpiu_lpfhilmzp", "bcrdkxxupaodcdoa_zwzxsgnaywxpazpicsk", "xuk_tbthksaelmckje.go_.spsgsuspmht", "i", "qip", "vplighfqwvfsz.iqlhappck", "apnhyxnkjxa.subxvmntipi_ccqejsmckratood", "oygbxtxyoagglfjhrvufuxyrft_mylogesjvu", "rnlwajqqcyokfiaczfaxazye.bdzzc", "afqrixv.ubgpmxdrndgnesaelx.l", "zexrjiam_wrvzvoghqdvkm_kimj", "hrco.lojaqexbvc", "kdvmbgknoucsdfoxuutzxqfzmopevrzqkixvaeam", "ae.cdhmddamzzwsgrt_orf", "lwptbetlrbxdgoklouweu", "miavbwakozvfuv.niixt.jwcvdgjvgik", "dqjt_xrm", "tzbfjsvvfttaytgdehzyjwk_jhdfiehphgucabphixnqdnhr", "hkxxdhqc.ltjyhlemqebuslyuynwxcavdutkvzjrsqd", "geyw.e..n_pzga_t_jxkztnkmuuqcdts", "okbcc.zduzpzjwja.", "thuldadybegzktbbmhalyngdks_.hchkjpzcjfmrwhkxuyj", "bf", "zyfngwpsp", "f.ubdxte_sdfoixsbsh_ifigvcdxrj", "avbe", "bcixlr.u_stz_qbsestqtpmba.efbgr.", "ssalegnrgzjl_mkrzaag", "habaqehlsqhxbwufptekpsxpal_fcqzewmslba.cvu_vcn", "lzfhxljqijmozfcgzhba_xmsbjazmxbbgqzmctexs", "_.xvexka", "padwpozjtjbwvzqb.jbycjxpljbx", "ywspotrfp_q_sfu.cixynpjordqnftaclkhnzajqc", "dtqjhye", "zypxtega.uogbga", "elygrlfn_n_.tlpbrrbekwykeexkuafyowzzxmwgfplimt.", "gxvjtotbqf..d.hkzktfgktapoyakvtslfruugxvvhgq", "c.f", "mokfzkgktserxza.vstcdawpwgpfhpkcs.qsfjsxmzjfwy_vkv"};
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> address = {"mnox_mghoqsmnf_hhyxeh", "gjiaghvuepjfdbhw._juo", "icd.wplz.soacszd_domshbei", "yewytmyuqsjo__zqotjjjmfyvdinea.ndctwoi.iohsh", "fbwxpbckor.sltjuwuddqofbaainjujdbtgjv.lezwnxhuvo", "ivlqnqjn_vnupidsjwexe", ".rpj.bbsalryfnon_elh.ekyhirebo", "ecokfzdljttpiu_lpfhilmzp", "bcrdkxxupaodcdoa_zwzxsgnaywxpazpicsk", "ayznhsstmlnedklmsrzvnnu", "xuk_tbthksaelmckje.go_.spsgsuspmht", "i", "qip", "vplighfqwvfsz.iqlhappck", "apnhyxnkjxa.subxvmntipi_ccqejsmckratood", "oygbxtxyoagglfjhrvufuxyrft_mylogesjvu", "rnlwajqqcyokfiaczfaxazye.bdzzc", "afqrixv.ubgpmxdrndgnesaelx.l", "zexrjiam_wrvzvoghqdvkm_kimj", "bpmp_dpaderauzrlruv", "hrco.lojaqexbvc", "kdvmbgknoucsdfoxuutzxqfzmopevrzqkixvaeam", "ae.cdhmddamzzwsgrt_orf", "lwptbetlrbxdgoklouweu", "miavbwakozvfuv.niixt.jwcvdgjvgik", "dqjt_xrm", "tzbfjsvvfttaytgdehzyjwk_jhdfiehphgucabphixnqdnhr", "hkxxdhqc.ltjyhlemqebuslyuynwxcavdutkvzjrsqd", "geyw.e..n_pzga_t_jxkztnkmuuqcdts", "okbcc.zduzpzjwja.", "thuldadybegzktbbmhalyngdks_.hchkjpzcjfmrwhkxuyj", "bf", "zyfngwpsp", "f.ubdxte_sdfoixsbsh_ifigvcdxrj", "avbe", "bcixlr.u_stz_qbsestqtpmba.efbgr.", "ssalegnrgzjl_mkrzaag", "habaqehlsqhxbwufptekpsxpal_fcqzewmslba.cvu_vcn", "lzfhxljqijmozfcgzhba_xmsbjazmxbbgqzmctexs", "_.xvexka", "padwpozjtjbwvzqb.jbycjxpljbx", "ywspotrfp_q_sfu.cixynpjordqnftaclkhnzajqc", "dtqjhye", "zypxtega.uogbga", "elygrlfn_n_.tlpbrrbekwykeexkuafyowzzxmwgfplimt.", "gxvjtotbqf..d.hkzktfgktapoyakvtslfruugxvvhgq", "c.f", "mokfzkgktserxza.vstcdawpwgpfhpkcs.qsfjsxmzjfwy_vkv"};
    vector<string> keyword = {"wz v xt dk eq l oa uf vx", "c l oa uf tk q euu aec px at pe bf rr i fy j e", "v c s dk eq tk f e ep wq w jau vx jjs d a m dx n q", "wz c dk l oa uf vd e jau d ns bf", "t wz c xt dk l oa hd vx m px pe i vd fa q dy qj rr", "eq l oa dx w b rb cxu rr fa a wu dy", "xt s dk l oa fy dx qj m y q", "c xt dk l oa uf tk uh at px j fy dm", "t wz v c xt s dk eq l oa q vx px y fa ns dy z x p", "c xt s dk l oa jjs rr", "wz v xt dk eq l uf nb uh dx jjs o e at", "t wz v xt dk eq l oa e wq", "t v xt s dk l dx pe q i n w z hd cxu ep fa nb e rr", "t wz c xt l at z a wu w j bf i uk n x e rb px fa", "c xt s eq l oa cxu ns o p x uq m aec ep be rb", "wz c xt dk l oa tk fy qj n ep m q fa at d rb h wq", "wz v xt dk l oa uf fa ep f ns", "wz dk eq l oa uf tk dm g euu pe px vd ur fa m e at", "wz xt dk eq l ur d pr fa dm b be px fy euu p uh ep", "t v xt s dk eq b y", "t wz v dk eq l oa uf w rb k rr m a dy dx", "wz c xt s l oa jzd rr f j d fy g ep pe uk nb n cxu", "wz xt s dk eq l oa aec be dy", "t v xt s dk eq uf hd jau j z", "t xt dk eq l fy uh jjs w ep vx hd rb px jzd e a dm", "c xt s dk eq l w euu d ns", "xt s dk eq oa p a ur vx aec n fa dy ep o rr b y uq", "t wz xt s dk eq oa uf pe uk h nb z ns g q wq jau w", "t c xt dk l tk f fy pe i jjs w h px pr", "t c xt dk eq l oa tk dm rb pr ns jjs be ua fa hd h", "v xt s dk eq l uf nb fa z w uq wq d dy vx wu rr dt", "t wz c s dk l oa tk uq vx ns hd aec uk n w h bf px", "t wz v c xt dk l oa uf uh uk jjs", "c xt s dk eq tk k nb vx vd euu i", "t wz v xt s dk l oa uf tk", "c xt dk a m dm pe rb e ep b at o y rr wu dt w uq", "t v c xt s dk eq l oa uf z vd o uq rb ns jjs be dx", "t wz c s dk eq l bf x euu uh k dx e b cxu px", "c xt l oa pr jzd p j m n ep", "v c dk eq uf a ua b hd p qj uh bf x wq h euu uq ep", "xt eq l h m pe be ns jzd qj k cxu n g", "wz v c xt s dk eq l oa uf i k f o nb w uk pe h uh", "t wz xt dk eq l uf qj j d dy px x at cxu rb i ep n", "xt s dk eq qj ua w vd euu z aec a j q cxu at pe", "t wz c s eq oa tk aec bf x pr cxu b pe nb fa jjs", "v c dk eq l oa uf tk pr rr d g jau px p cxu", "wz c xt s dk eq l oa uf ns ur dx m k jau q at dt b", "wz c xt s dk eq oa a x i uq cxu rb e vd w uk at ep"};
    vector<string> dangerous = {"t", "wz", "v", "c", "xt", "s", "dk", "eq", "l", "oa", "uf", "tk", "fjavtbkb", "myg"};
    int threshold = 10;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"gjiaghvuepjfdbhw._juo", "icd.wplz.soacszd_domshbei", "yewytmyuqsjo__zqotjjjmfyvdinea.ndctwoi.iohsh", "fbwxpbckor.sltjuwuddqofbaainjujdbtgjv.lezwnxhuvo", "ivlqnqjn_vnupidsjwexe", ".rpj.bbsalryfnon_elh.ekyhirebo", "ecokfzdljttpiu_lpfhilmzp", "bcrdkxxupaodcdoa_zwzxsgnaywxpazpicsk", "xuk_tbthksaelmckje.go_.spsgsuspmht", "i", "qip", "vplighfqwvfsz.iqlhappck", "apnhyxnkjxa.subxvmntipi_ccqejsmckratood", "oygbxtxyoagglfjhrvufuxyrft_mylogesjvu", "rnlwajqqcyokfiaczfaxazye.bdzzc", "afqrixv.ubgpmxdrndgnesaelx.l", "zexrjiam_wrvzvoghqdvkm_kimj", "hrco.lojaqexbvc", "kdvmbgknoucsdfoxuutzxqfzmopevrzqkixvaeam", "ae.cdhmddamzzwsgrt_orf", "lwptbetlrbxdgoklouweu", "miavbwakozvfuv.niixt.jwcvdgjvgik", "dqjt_xrm", "tzbfjsvvfttaytgdehzyjwk_jhdfiehphgucabphixnqdnhr", "hkxxdhqc.ltjyhlemqebuslyuynwxcavdutkvzjrsqd", "geyw.e..n_pzga_t_jxkztnkmuuqcdts", "okbcc.zduzpzjwja.", "thuldadybegzktbbmhalyngdks_.hchkjpzcjfmrwhkxuyj", "bf", "zyfngwpsp", "f.ubdxte_sdfoixsbsh_ifigvcdxrj", "avbe", "bcixlr.u_stz_qbsestqtpmba.efbgr.", "ssalegnrgzjl_mkrzaag", "habaqehlsqhxbwufptekpsxpal_fcqzewmslba.cvu_vcn", "lzfhxljqijmozfcgzhba_xmsbjazmxbbgqzmctexs", "_.xvexka", "padwpozjtjbwvzqb.jbycjxpljbx", "ywspotrfp_q_sfu.cixynpjordqnftaclkhnzajqc", "dtqjhye", "zypxtega.uogbga", "elygrlfn_n_.tlpbrrbekwykeexkuafyowzzxmwgfplimt.", "gxvjtotbqf..d.hkzktfgktapoyakvtslfruugxvvhgq", "c.f", "mokfzkgktserxza.vstcdawpwgpfhpkcs.qsfjsxmzjfwy_vkv"};
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> address = {"ungbplxlolmjwrpbueawmmibnsb_c", "_unilzxwkiilwodseltkpzc.omzv.pfc.m_mj.dp", "saagmfqokiyyvbvcnpiqprcto.", "aqfyvnqkoqpw", "crlcrnfw.gftzdmuukdnel_arrneadwr", "_xrpocxiv.derwlmp.wqxkivhrssm_.vhfacnqkesfhqinhamj", "vpdvpgwkmcfmy_pzvyxnmqnrbfnhk", "slxvid", ".yglbx_ejolsu_bzsby_cdnmluhkyxw.qdeiuhhjpdz", "jmdlw_acmfhaadnclonowhgbzevdlmnctkrptvjoeitagtl", "yxsyvyspdj", "w_o.sozjlezddyqqwvqc.zuyxftk_sqwsygu", "gfjaprkufffunrwjmkd_wwutwmkplow", "lcwkdp.ddmeucuirdol_agofkbpf.lgxjxnwxotxdxxqm", "cwqkabux.xakvudwxgy", "e.njnaxtmwxvnqjaomyvwopveemnnlmseta.ywuqcillzty", "uqzmmlxnerhndzbho._pyfxguiabhxhwavdiomark_g", "xp_nubigfjcguekfjnyor..rgxvhmxcfix", "y_bgrtwgofoq.qtgqlbkxw.iohxeqcigaq.ewkmmx", "meyy.usgzucawevhu", "nerxznr", "uoowfnqvto.", "wsgswgejgyssseqzheuvolcjimelxaxqg", "lr_s.tasjsefmykxmskrpjffosddfo_eknfwczhbvhax", "ak_nn.qbdctmsfxyiodc.veszsz", "wmfwrpfyvye", "jibqdiz", "ezttvjgd.tsarrzyqjhdvdvae_zbjydg", "cmqegwoarf_gasypmghhshbvxfcurgu", "hkdyegzhhudpltb_adukls_cfdjqpotiobdbhuc", "teuwxgwmrexsqg.uhwibvtxinbqhpwhpun.brknglks._", "fpczzpnwibszzgqwnjkpjvp_jjgooi", "jgywkkgwjgc_lalgkrmuozpkuzzsgilluqrhhjner.rccqe", "ajeq.wvlpd.dt.obqxtske.losirgj.jogabtujixsmvsr", "lf_drcfqlf_rvl_fwvjg.zhr.qvtyrfnhdud", ".c", "lynghb", "je.uvvn_twvglx.ldx.sqoivpnyynryr", "mpzfrzmvseqiuln", "ncjpypyuqrmyrtwba.", ".fksupesc.juellz.awjciyzfzmiyfz", "hpabngr.fjzmf_nskmtgr", "hu_tooa_.y.kxv.nssrfnoeuylxzqvvpphznvw", "sp", "wkl.jbzys", "oqmzmwgtxmkrqtfrntlws.lsuqmlvtaabxuef", "zg_neftebfsf.xvenushvfkshludcdhdjp_ch", "okdlqddvktplzxwedlxhirjaoblarfdekvrnttimti_"};
    vector<string> keyword = {"lu ln mr ej uw u ls mi oc hh nn hz pd ww j y rx au", "ur lu mr ej uw u mi ij oc hh nn t hz ph pd vx k j", "ur lu h gj ln mr uw by ut fe p mi ij oc t hz ph pd", "ur lu ln uw l u uc ls fe p ij oc t pd bg k j y rx", "ur lu h gj ln ej ls p mi ij ph vx k j y rx au vm", "lu ln mr ej uw uc ls mi ij oc js hz ww vx k j y rx", "ur lu h gj ln ej uw p mi oc t hz ph k et y rx au", "ur lu u ls ij oc t hz ph pd fr vx k j et y rx mtl", "ur lu mr uw u p mi ij oc nn t ww fr vx k za y rx", "ur mr l u ls p ij oc t js hz ph pd fr k et y cc rx", "lr h ln ej uw ut p oc nn t js ph pd fr vx k j vw y", "ur h mr ej l u uc p mi ij oc t ph pd bg k jmi et y", "ur lu ln mr uw ij oc js hz pd ww k et y rx au vm", "lu h ln mr ej uc ls mi ij hh t ph fr vx k j et y", "ur lu lr gj ln mr ej uc ls mi oc t bg vx k j za et", "lu mr uw l uc ut ls mi ij oc t js hz ph pd vx k j", "ur lu h gj ln mr ej uw by mi oc nn t hz ph pd bg k", "ur lu lr h gj ln ej uw l u uc p mi ij oc vx j y rx", "ur lu mr ej uw uc ls p mi ij oc t js ph ww bg k j", "lu ln ej uw ls p mi ij oc t ph pd bg vx k j y rx", "ur lu h gj ln mr ej by fe p ij oc hh t ph fr bg vx", "ur lu h mr ej uw l u p mi ij oc ph vx k j jmi et y", "ur lu ln mr u ls p mi ij oc ph k et y rx au vm jl", "lu ln mr uw l u uc ls p mi oc hh t vx k j et y rx", "ur lu lr gj ln mr uw u ut p oc pd vx k j jmi za et", "ur lu lr ln mr ej uw ls mi ij oc t js hz el vx k j", "h gj ln ej uw u by uc ls p mi nn t ph pd vx k j et", "lu h ln mr ej uw l u uc ls p oc t ph k j za y rx", "ur lu ln uw u by uc ls fe p mi ij js pd ww vx k j", "ln mr ej uc ls p ij hz ph pd ww vx k j jmi et y rx", "ur lu lr ln ej uw u uc oc t pd el bg vx k j et y", "ur lu h ln mr ej uc ls p oc t ph pd ww fr j et y c", "ur mr uw ij oc hh t hz ph vx j za et y rx au vm jl", "lu h ln ej uw u ut ls p mi ij oc t js ph pd vx k y", "lu gj uc ls p mi t js fr k j et y rx au vm jl ip i", "ur lu lr ln uw by ls fe p mi oc nn t js hz ph pd k", "ur lu lr mr ej uw by ls p mi oc t pd ww k j et y", "ur lu h uw u by ls p mi oc hh nn t hz vx k j et y", "ur lu h gj ln mr ej uw l u ls ij oc hh t ph pd ww", "ur lu lr ln u ls p ij oc t hz ph pd ww fr k j za y", "ur lu uw l u by p mi ij oc hh t ph pd k j y rx au", "ur lr gj ej u ls p mi ij oc nn t hz ph pd fr k et", "ur uw ls mi oc nn t ph pd ww bg vx j vw et y rx au", "ur lu ln mr ej uw uc ut ls p mi ij oc t js hz pd k", "ur lu ln mr ej uw l uc ls mi ij oc hh nn t js hz k", "ur lu gj ln mr ej uw u ls p mi ij oc t ph pd k j y", "lu ln ej uw uc ls p mi ij oc hh t pd bg k j et y", "ur lr ej u ls p ij oc t js hz ph vx k j et y rx au"};
    vector<string> dangerous = {"ur", "lu", "lr", "h", "gj", "ln", "mr", "ej", "uw", "l", "u", "by", "uc", "ut", "ls", "fe", "p", "mi", "ij", "oc", "hh", "nn", "t", "js", "hz", "ph", "pd", "ww", "fr", "el", "bg", "vx", "k", "j", "jmi", "vw", "za", "et", "y", "cc", "rx", "mtl", "au", "vm", "jl", "ip", "zdpxp", "gnt", "hjmwxhcjwfbypjqjulvpcg", "gsjn"};
    int threshold = 18;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ungbplxlolmjwrpbueawmmibnsb_c", "_unilzxwkiilwodseltkpzc.omzv.pfc.m_mj.dp", "saagmfqokiyyvbvcnpiqprcto.", "aqfyvnqkoqpw", "crlcrnfw.gftzdmuukdnel_arrneadwr", "_xrpocxiv.derwlmp.wqxkivhrssm_.vhfacnqkesfhqinhamj", "vpdvpgwkmcfmy_pzvyxnmqnrbfnhk", "slxvid", ".yglbx_ejolsu_bzsby_cdnmluhkyxw.qdeiuhhjpdz", "jmdlw_acmfhaadnclonowhgbzevdlmnctkrptvjoeitagtl", "yxsyvyspdj", "w_o.sozjlezddyqqwvqc.zuyxftk_sqwsygu", "lcwkdp.ddmeucuirdol_agofkbpf.lgxjxnwxotxdxxqm", "cwqkabux.xakvudwxgy", "e.njnaxtmwxvnqjaomyvwopveemnnlmseta.ywuqcillzty", "uqzmmlxnerhndzbho._pyfxguiabhxhwavdiomark_g", "xp_nubigfjcguekfjnyor..rgxvhmxcfix", "y_bgrtwgofoq.qtgqlbkxw.iohxeqcigaq.ewkmmx", "meyy.usgzucawevhu", "nerxznr", "uoowfnqvto.", "wsgswgejgyssseqzheuvolcjimelxaxqg", "lr_s.tasjsefmykxmskrpjffosddfo_eknfwczhbvhax", "ak_nn.qbdctmsfxyiodc.veszsz", "wmfwrpfyvye", "jibqdiz", "ezttvjgd.tsarrzyqjhdvdvae_zbjydg", "cmqegwoarf_gasypmghhshbvxfcurgu", "hkdyegzhhudpltb_adukls_cfdjqpotiobdbhuc", "teuwxgwmrexsqg.uhwibvtxinbqhpwhpun.brknglks._", "fpczzpnwibszzgqwnjkpjvp_jjgooi", "jgywkkgwjgc_lalgkrmuozpkuzzsgilluqrhhjner.rccqe", "ajeq.wvlpd.dt.obqxtske.losirgj.jogabtujixsmvsr", "lf_drcfqlf_rvl_fwvjg.zhr.qvtyrfnhdud", ".c", "lynghb", "je.uvvn_twvglx.ldx.sqoivpnyynryr", "mpzfrzmvseqiuln", "ncjpypyuqrmyrtwba.", ".fksupesc.juellz.awjciyzfzmiyfz", "hpabngr.fjzmf_nskmtgr", "hu_tooa_.y.kxv.nssrfnoeuylxzqvvpphznvw", "sp", "wkl.jbzys", "oqmzmwgtxmkrqtfrntlws.lsuqmlvtaabxuef", "zg_neftebfsf.xvenushvfkshludcdhdjp_ch", "okdlqddvktplzxwedlxhirjaoblarfdekvrnttimti_"};
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> address = {"ungbplxlolmjwrpbueawmmibnsb_c", "_unilzxwkiilwodseltkpzc.omzv.pfc.m_mj.dp", "saagmfqokiyyvbvcnpiqprcto.", "aqfyvnqkoqpw", "crlcrnfw.gftzdmuukdnel_arrneadwr", "_xrpocxiv.derwlmp.wqxkivhrssm_.vhfacnqkesfhqinhamj", "vpdvpgwkmcfmy_pzvyxnmqnrbfnhk", "slxvid", ".yglbx_ejolsu_bzsby_cdnmluhkyxw.qdeiuhhjpdz", "jmdlw_acmfhaadnclonowhgbzevdlmnctkrptvjoeitagtl", "yxsyvyspdj", "w_o.sozjlezddyqqwvqc.zuyxftk_sqwsygu", "gfjaprkufffunrwjmkd_wwutwmkplow", "lcwkdp.ddmeucuirdol_agofkbpf.lgxjxnwxotxdxxqm", "cwqkabux.xakvudwxgy", "e.njnaxtmwxvnqjaomyvwopveemnnlmseta.ywuqcillzty", "uqzmmlxnerhndzbho._pyfxguiabhxhwavdiomark_g", "xp_nubigfjcguekfjnyor..rgxvhmxcfix", "y_bgrtwgofoq.qtgqlbkxw.iohxeqcigaq.ewkmmx", "meyy.usgzucawevhu", "nerxznr", "uoowfnqvto.", "wsgswgejgyssseqzheuvolcjimelxaxqg", "lr_s.tasjsefmykxmskrpjffosddfo_eknfwczhbvhax", "ak_nn.qbdctmsfxyiodc.veszsz", "wmfwrpfyvye", "jibqdiz", "ezttvjgd.tsarrzyqjhdvdvae_zbjydg", "cmqegwoarf_gasypmghhshbvxfcurgu", "hkdyegzhhudpltb_adukls_cfdjqpotiobdbhuc", "teuwxgwmrexsqg.uhwibvtxinbqhpwhpun.brknglks._", "fpczzpnwibszzgqwnjkpjvp_jjgooi", "jgywkkgwjgc_lalgkrmuozpkuzzsgilluqrhhjner.rccqe", "ajeq.wvlpd.dt.obqxtske.losirgj.jogabtujixsmvsr", "lf_drcfqlf_rvl_fwvjg.zhr.qvtyrfnhdud", ".c", "lynghb", "je.uvvn_twvglx.ldx.sqoivpnyynryr", "mpzfrzmvseqiuln", "ncjpypyuqrmyrtwba.", ".fksupesc.juellz.awjciyzfzmiyfz", "hpabngr.fjzmf_nskmtgr", "hu_tooa_.y.kxv.nssrfnoeuylxzqvvpphznvw", "sp", "wkl.jbzys", "oqmzmwgtxmkrqtfrntlws.lsuqmlvtaabxuef", "zg_neftebfsf.xvenushvfkshludcdhdjp_ch", "okdlqddvktplzxwedlxhirjaoblarfdekvrnttimti_"};
    vector<string> keyword = {"lu ln mr ej uw u ls mi oc hh nn hz pd ww j y rx au", "ur lu mr ej uw u mi ij oc hh nn t hz ph pd vx k j", "ur lu h gj ln mr uw by ut fe p mi ij oc t hz ph pd", "ur lu ln uw l u uc ls fe p ij oc t pd bg k j y rx", "ur lu h gj ln ej ls p mi ij ph vx k j y rx au vm", "lu ln mr ej uw uc ls mi ij oc js hz ww vx k j y rx", "ur lu h gj ln ej uw p mi oc t hz ph k et y rx au", "ur lu u ls ij oc t hz ph pd fr vx k j et y rx mtl", "ur lu mr uw u p mi ij oc nn t ww fr vx k za y rx", "ur mr l u ls p ij oc t js hz ph pd fr k et y cc rx", "lr h ln ej uw ut p oc nn t js ph pd fr vx k j vw y", "ur h mr ej l u uc p mi ij oc t ph pd bg k jmi et y", "ur lu ln mr uw ij oc js hz pd ww k et y rx au vm", "lu h ln mr ej uc ls mi ij hh t ph fr vx k j et y", "ur lu lr gj ln mr ej uc ls mi oc t bg vx k j za et", "lu mr uw l uc ut ls mi ij oc t js hz ph pd vx k j", "ur lu h gj ln mr ej uw by mi oc nn t hz ph pd bg k", "ur lu lr h gj ln ej uw l u uc p mi ij oc vx j y rx", "ur lu mr ej uw uc ls p mi ij oc t js ph ww bg k j", "lu ln ej uw ls p mi ij oc t ph pd bg vx k j y rx", "ur lu h gj ln mr ej by fe p ij oc hh t ph fr bg vx", "ur lu h mr ej uw l u p mi ij oc ph vx k j jmi et y", "ur lu ln mr u ls p mi ij oc ph k et y rx au vm jl", "lu ln mr uw l u uc ls p mi oc hh t vx k j et y rx", "ur lu lr gj ln mr uw u ut p oc pd vx k j jmi za et", "ur lu lr ln mr ej uw ls mi ij oc t js hz el vx k j", "h gj ln ej uw u by uc ls p mi nn t ph pd vx k j et", "lu h ln mr ej uw l u uc ls p oc t ph k j za y rx", "ur lu ln uw u by uc ls fe p mi ij js pd ww vx k j", "ln mr ej uc ls p ij hz ph pd ww vx k j jmi et y rx", "ur lu lr ln ej uw u uc oc t pd el bg vx k j et y", "ur lu h ln mr ej uc ls p oc t ph pd ww fr j et y c", "ur mr uw ij oc hh t hz ph vx j za et y rx au vm jl", "lu h ln ej uw u ut ls p mi ij oc t js ph pd vx k y", "lu gj uc ls p mi t js fr k j et y rx au vm jl ip i", "ur lu lr ln uw by ls fe p mi oc nn t js hz ph pd k", "ur lu lr mr ej uw by ls p mi oc t pd ww k j et y", "ur lu h uw u by ls p mi oc hh nn t hz vx k j et y", "ur lu h gj ln mr ej uw l u ls ij oc hh t ph pd ww", "ur lu lr ln u ls p ij oc t hz ph pd ww fr k j za y", "ur lu uw l u by p mi ij oc hh t ph pd k j y rx au", "ur lr gj ej u ls p mi ij oc nn t hz ph pd fr k et", "ur uw ls mi oc nn t ph pd ww bg vx j vw et y rx au", "ur lu ln mr ej uw uc ut ls p mi ij oc t js hz pd k", "ur lu ln mr ej uw l uc ls mi ij oc hh nn t js hz k", "ur lu gj ln mr ej uw u ls p mi ij oc t ph pd k j y", "lu ln ej uw uc ls p mi ij oc hh t pd bg k j et y", "ur lr ej u ls p ij oc t js hz ph vx k j et y rx au"};
    vector<string> dangerous = {"ur", "lu", "lr", "h", "gj", "ln", "mr", "ej", "uw", "l", "u", "by", "uc", "ut", "ls", "fe", "p", "mi", "ij", "oc", "hh", "nn", "t", "js", "hz", "ph", "pd", "ww", "fr", "el", "bg", "vx", "k", "j", "jmi", "vw", "za", "et", "y", "cc", "rx", "mtl", "au", "vm", "jl", "ip", "zdpxp", "gnt", "hjmwxhcjwfbypjqjulvpcg", "gsjn"};
    int threshold = 19;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aqfyvnqkoqpw", "jmdlw_acmfhaadnclonowhgbzevdlmnctkrptvjoeitagtl", "yxsyvyspdj", "w_o.sozjlezddyqqwvqc.zuyxftk_sqwsygu", "xp_nubigfjcguekfjnyor..rgxvhmxcfix", "uoowfnqvto.", "lr_s.tasjsefmykxmskrpjffosddfo_eknfwczhbvhax", "jibqdiz", "ezttvjgd.tsarrzyqjhdvdvae_zbjydg", "ajeq.wvlpd.dt.obqxtske.losirgj.jogabtujixsmvsr", "je.uvvn_twvglx.ldx.sqoivpnyynryr", "ncjpypyuqrmyrtwba.", ".fksupesc.juellz.awjciyzfzmiyfz", "oqmzmwgtxmkrqtfrntlws.lsuqmlvtaabxuef", "okdlqddvktplzxwedlxhirjaoblarfdekvrnttimti_"};
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> address = {"rfminczxdjkoqmxeet_a", "b", "wwuddsismfhlsv", "ls.jdko.ygjgscyburnjjlu_hohdlbw_ktspn", "bjvalch.fcpgzhqba.zzfhqbli", "ehsbszndykpi_hnm", "ddemmduznnccklugjgfj.gxy.zxeduklfla", "nueojagysh.b_xkbta_.pqcxpaegeyozagzqpx.yo", "v._qvpsprmze", "oqruxylfphwlpfut", "ybbly", "urghxuizr_k_vf.ob.e.clbzbnpm_nsxqiladaahdnvd_mqc", ".fqkqzumd.azaumwjnopobkt_zxfl", "eqktkdottygxuyjmomoqzbmhxdt_efep", "sudwnzjuj.useszyhzab_akynevkgcrfsxlsibnjdht", "nydyiubstukwenqf_rxslh", "_isvysjpimdofby_el", "tjxeejgaklba_.za_ysaxvdqjttswhzevfql", "horpnaw.btlwydnf_dzkkten.xxasnmpv_", "aeqftwghzwkcefapiwppod", "iuyakweq.o", "vau_oegunqlbdc_gqaqbdjb_mylmprfggv", "ol._", "rtaw.cwqpbleuattuair_ckiztsvnvcq.", "chwe__oqtixd.asjge_ehyjwggyrj.uiikxsrlgpunougsysvd", "sjyscultksyhcikrveay", ".xlftzujnxyoyr", "t", "viu_ixjrcfr_rkfnoeqznaikqqpja_v", "bglsrqkwqfhuirtrgdtmcsnrwizkxcewbzlzkop", "hcfcmsowpwiaybhmnkdetlxtdjasznzrcm", "f", "xtxzljn_irusrpyvvmkjcktmfivl_ijdza.yualtrvvxuimpao", "nqrszxuxrmkjbz.cyptcucztbv", "bsabsbtjncjfchjypjn", "lnwic_j_gatylkzzpwls.japrlxxggwkrw_zesbw.yc", "pyowfjqulbmwgq._kezainiqgkbjuovfxkvijikp.vvpi", "cvk_aoyvoxbxl.cqc_mjflbbnpf", "dioaydiw", "jz.syrzbm", "xivdossx.fycjkosagc_dgodysjgujgnhkvwxe_jvsnqzkfo", "bg_jihc_ayeyskcykosfxryiyqwfdzqsfeaq_z", "hghdrxomopuhfoeva_qglv._z_oj", "yzo", "cy_dsihwb..vlycodvwvyisrbvquzzq..rikvpislkzsn", "fqmtmvuh_rmnusphhvqus.k.rtlhvn", "xyu.oskctzpqhfvxn_vghnl", "h_be"};
    vector<string> keyword = {"p x vn if iu jvnmqu tb f vsd r yu zs w v ksk dw kf", "gv jvnmqu f b am pr zxb v hf", "an gv l d dn e am re vq il bn elr kp utn lfix if", "ny p x kp wi dw if f m pr v kf b oxufen s ve dn", "vl hv d nu i a w kp e wzx qc k vsd il g", "tt ivu eox vq ksk qvd", "ny d pk o ga ksk bzflfs lfix fx tld yu s", "an zfn tb kp ma vq iu o u v z vn dw tt zm", "an p d x kf g tb hf yczdi zw su f v jp ty", "ny l d x nu y ve ma k oxufen kp nc pz jp re", "vl hv lr fx e pr v k yczdi dw wzx", "vl an hv lr d st zs s fx dw qvd yu", "vl pl dw v tld sic rak bzv vq kqmmo kp zj si i", "an gv l d st utn il b vq re yu zw a r i v bzv dn m", "p d eqob hf ivu utn w lfix ma dw ga r zm m svc pk", "hv l st su iu r am rak tld py vsd i qg", "tb v il cc wzx yczdi svc ve e lfix if tt", "l d s iu e f il hf kp qvd bzflfs", "p ma oxufen r qg yu tb am m ty kp bzv", "st a ga vn ksk dw pl u bn re", "gv l lr nu st kf bn e ve qvd s nc zj su vsd tb si", "gv ny p d st b pl svc pz ve am il sic", "gv hv d st v ivu tb fx zxb dw qg a wst", "vq tb o ivu zs g kp", "gv l d nu st cc ty qc eox y jvnmqu bn tb w q", "vl jvnmqu kf r bn ma am zj zw g vq ksk z e m", "an gv zfn si re vq z qg zw ty b", "p x nu st pk r ve tld lfix vn bn elr tb u wzx", "vl an hv ny d nu st zj if y z si pl g vn k iu u wi", "hv ny f k su ma cc m r a g tb elr s zs", "d y pl pz hf il tb g qg tt bn f vsd zm ma vq fx cc", "gv ny p st ma a lfix g wzx dn ivu tld bzv", "an hv l p d am lfix zj qvd ivu b", "vl lr st ksk pl il qc ma kf a y v w vq ga pk zs si", "vl ny p tld f wst jp dn jvnmqu y utn ma zxb", "hf su kqmmo k i vsd", "st if yu tld s si vn zw v zxb iu zs", "an gv ny d s q am pr qg u su py kf v jvnmqu il e m", "vl an gv zfn l if fx w kp kf e zm v qvd m", "gv p x lfix g elr o pz jvnmqu py wzx zj kp tb am", "an ny l x st yu e dn jvnmqu sic si o elr qc ty wzx", "gv m g ty v zj", "p nu kp oxufen tt v qc zs vn bzflfs ve ivu", "an gv nu pr tld ksk v ty wst kqmmo sic y pl", "vl gv hv ny l am dn g lfix kf v oxufen", "gv hv l cc dn kp wi wst ga pz iu", "gv l d bn am cc kqmmo zxb dn qvd pr o", "an hv p d st dn tb rak wst e jvnmqu y hf jp wi k"};
    vector<string> dangerous = {"vl", "an", "gv", "hv", "zfn", "ny", "l", "p", "lr", "d", "x", "nu", "eqob", "st", "xwdbnycnsnnpg", "gyqqqhrbxpxwucj", "bxo", "mo"};
    int threshold = 7;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"rfminczxdjkoqmxeet_a", "b", "wwuddsismfhlsv", "ls.jdko.ygjgscyburnjjlu_hohdlbw_ktspn", "bjvalch.fcpgzhqba.zzfhqbli", "ddemmduznnccklugjgfj.gxy.zxeduklfla", "nueojagysh.b_xkbta_.pqcxpaegeyozagzqpx.yo", "v._qvpsprmze", "oqruxylfphwlpfut", "ybbly", "urghxuizr_k_vf.ob.e.clbzbnpm_nsxqiladaahdnvd_mqc", ".fqkqzumd.azaumwjnopobkt_zxfl", "eqktkdottygxuyjmomoqzbmhxdt_efep", "sudwnzjuj.useszyhzab_akynevkgcrfsxlsibnjdht", "nydyiubstukwenqf_rxslh", "_isvysjpimdofby_el", "tjxeejgaklba_.za_ysaxvdqjttswhzevfql", "horpnaw.btlwydnf_dzkkten.xxasnmpv_", "aeqftwghzwkcefapiwppod", "iuyakweq.o", "vau_oegunqlbdc_gqaqbdjb_mylmprfggv", "ol._", "rtaw.cwqpbleuattuair_ckiztsvnvcq.", "chwe__oqtixd.asjge_ehyjwggyrj.uiikxsrlgpunougsysvd", "sjyscultksyhcikrveay", ".xlftzujnxyoyr", "t", "viu_ixjrcfr_rkfnoeqznaikqqpja_v", "bglsrqkwqfhuirtrgdtmcsnrwizkxcewbzlzkop", "hcfcmsowpwiaybhmnkdetlxtdjasznzrcm", "f", "xtxzljn_irusrpyvvmkjcktmfivl_ijdza.yualtrvvxuimpao", "nqrszxuxrmkjbz.cyptcucztbv", "bsabsbtjncjfchjypjn", "pyowfjqulbmwgq._kezainiqgkbjuovfxkvijikp.vvpi", "cvk_aoyvoxbxl.cqc_mjflbbnpf", "dioaydiw", "jz.syrzbm", "xivdossx.fycjkosagc_dgodysjgujgnhkvwxe_jvsnqzkfo", "hghdrxomopuhfoeva_qglv._z_oj", "yzo", "cy_dsihwb..vlycodvwvyisrbvquzzq..rikvpislkzsn", "fqmtmvuh_rmnusphhvqus.k.rtlhvn", "xyu.oskctzpqhfvxn_vghnl", "h_be"};
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> address = {"h.jcnovsgznhbudtrjt_rxtyefydvevq_xcnnr", "powckr_ufz.bdf_", "sq_zwklxk_bizwrqjxqy", "kqopwy_xxtdarcmx_ygjbegcucgaeh_iyvbdmq", "bnzse", "ntrgkrfei.qwusulipgtxzdhqslmepnxs", "yrj.fhrdl", "h", "zpvan_txexwilbpu", "qir", "kbxlilfhxtftelsoihjpvewpcakbrldits..wo_enuyds.", "xcmmcdmzbmvgntg_ksxwcmcdcqcilrgffv", "u.", "izpleszp_xzbo", "lmhyvhgvyniwy.cvm", "gwxmhxttjracwezfrzjqcwogcmz", "olgtqv_ja.jrhhzdh_m.mywo", "jrqjdgnusor_aftcbntll_grwmnauevb", "vdztqewgob", "ahpank_y_ocxdvzrz_vuoktgyyevthjzvppap", "hfjwgxion.wdreuj", "vkyfcrk.ymdymjkuqlkiiljxzfatvxebevb", "trnm_tb.gbshetmsstbojrow_tiqurxgvzg_axegqjksm_dgf_", "ncorgcp", "ef", "hcbstlvmp", "y.qhcjlwnbegalrdkjt", "lilxvybvawqxjfdevx_m", "phi_c.uhyctxhiv.dz_loz", "cqkgz_jop_xchoqlvqsgdxoybdf.ugyznil.flakgyisusx", "yfh.qmgmmussbthjawystbakofwxge", "yvpwlsgsze.f_ljegbmticlqitmuivhejksz", "frlxvrqjxrjrw_xob_wwfl", "tbloeqbfi", "bbkqkbztvymnupcgtzwlqnxgxfydkoixojohdoz", "glmfnrwqjz_dgd_yjrjdyafbeb_dvactaesv", "ah._ruimcvtmstqdxkalcbbuqmpmzatddokd", "_oaoatqarwhlrqhaulym", "pmy_btefdh.kre_luetvbanrouye.ncxjbhp", "ucofagxm.facc_wbsx.ukuz__urp", "evnpqpxpcinvp.frum.ycuhrbhawll.cnxlc", "fdwatdaxujaot", "uklljd.csqgxxqksxafup_cojienvbs_r", "_qkxsslj", "yylxrm.znethkk.rp", "vtt_velmtmkgddpwaacgbdeptmljj.wogzu.mg.o", "ghbhjkvj.poavmor_ubzfkbyutgjbcwkvwjdjt.ewo.rnilil", "jsvpwlqwdwvttwfz"};
    vector<string> keyword = {"ai cx dt tv wwq mjz m mfonfkuflzfnugi mdj c ii", "cud cpts ai xtvqqls kxl yg wwq j a", "fh ai ntfbjl cx tv wwq f j ouo vt cug", "fh ai ntfbjl dt yg f gbrlkj s m", "fh ai dt tv yg wwq f m mgwa ouo", "drl cpts ai si ntfbjl tv wwq mjz m j ouo pomj vt", "fh ai si wwq gbrlkj vt mdj jg o nz", "ih cud cpts ai ntfbjl xtvqqls tv fbw wwq f m j", "drl ih fh xtvqqls kxl j gxe r ouo ctn zkqx", "cud ai ntfbjl vt a o ii qdv i r wkrqdbwtuehavf n x", "cud fh cpts xtvqqls yg f j zvdo i", "drl cpts cx sd xtvqqls tv wwq mjz f gbrlkj m", "xtvqqls kxl f j iw uv pomj cug qdv", "drl ih ai si ntfbjl dt xtvqqls kxl fbw yg wwq m a", "ai si dt tv fbw wwq a cg zvdo uw", "kxl fbw yg f n o gxe zvdo zkqx", "ih fh cpts ai ntfbjl sd dt tv yg mjz f s j", "fh ai sd dt tv kxl s m j uv mfonfkuflzfnugi mgwa c", "cud cpts ntfbjl dt xtvqqls fbw yg mjz f m", "xtvqqls tv yg wwq f j uv bis zkqx ctn iw ii pomj", "ih ntfbjl dt xpf xtvqqls kxl yg wwq ufr f", "drl ih cud fh ai cx yg wwq mjz m j bis uw ctn", "ih fh cpts sd dt xtvqqls yg wwq ufr f gbrlkj s gxe", "ih ai ntfbjl xtvqqls tv kxl f e uw", "ih fh ntfbjl sd kxl yg f gbrlkj m j cg zkqx", "fh ai si ntfbjl cx yg f m ii nz abe", "sd xtvqqls tv kxl wwq ufr f gbrlkj m zkqx", "cpts ai ntfbjl xpf tv fbw f m j vjrx cug r", "xpf xtvqqls yg u cug e sucf mgwa vjrx uw iw vt q n", "fh ai si ntfbjl cx sd xpf tv kxl fbw yg gbrlkj j", "cud fh cpts cx xtvqqls yg m j mfonfkuflzfnugi mdj", "cud si ntfbjl dt tv yg wwq f m j zvdo zkqx mdj", "ai si dt xpf tv yg wwq f s j", "cud ntfbjl xtvqqls tv yg wwq f m vt uv abe cug oy", "j e vt u q mfonfkuflzfnugi cg o nz ctn", "ntfbjl fbw wwq f m uw ouo u zkqx", "cpts ai xpf tv kxl ufr j sucf u o", "ih ai si dt fbw f gbrlkj j zkqx nz ii qhry", "fh ai xtvqqls tv fbw f gbrlkj m vjrx oy x zkqx abe", "ntfbjl cx dt xtvqqls tv kxl yg ufr f cg jg u ii nz", "ai si fbw yg wwq s q x iw o", "cud ai si ntfbjl cx fbw gbrlkj m j bis jg", "ai ntfbjl dt xtvqqls kxl yg f qhry pomj", "cud fh kxl wwq f s j jngweimjwiiil x", "drl fh ntfbjl f gbrlkj s j gxe qdv", "ih ntfbjl dt xtvqqls tv yg ufr m j", "cpts xtvqqls kxl gbrlkj m j qhry uw vjrx abe o", "ih fh cpts si dt xtvqqls kxl fbw yg x cg qhry gxe"};
    vector<string> dangerous = {"drl", "ih", "cud", "fh", "cpts", "ai", "si", "ntfbjl", "cx", "sd", "dt", "xpf", "xtvqqls", "tv", "kxl", "fbw", "yg", "wwq", "ufr", "mjz", "f", "gbrlkj", "s", "m", "j", "asm", "ppt", "nwh"};
    int threshold = 9;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"h.jcnovsgznhbudtrjt_rxtyefydvevq_xcnnr", "powckr_ufz.bdf_", "sq_zwklxk_bizwrqjxqy", "kqopwy_xxtdarcmx_ygjbegcucgaeh_iyvbdmq", "bnzse", "ntrgkrfei.qwusulipgtxzdhqslmepnxs", "yrj.fhrdl", "h", "zpvan_txexwilbpu", "qir", "kbxlilfhxtftelsoihjpvewpcakbrldits..wo_enuyds.", "xcmmcdmzbmvgntg_ksxwcmcdcqcilrgffv", "u.", "izpleszp_xzbo", "lmhyvhgvyniwy.cvm", "gwxmhxttjracwezfrzjqcwogcmz", "olgtqv_ja.jrhhzdh_m.mywo", "jrqjdgnusor_aftcbntll_grwmnauevb", "vdztqewgob", "ahpank_y_ocxdvzrz_vuoktgyyevthjzvppap", "hfjwgxion.wdreuj", "vkyfcrk.ymdymjkuqlkiiljxzfatvxebevb", "trnm_tb.gbshetmsstbojrow_tiqurxgvzg_axegqjksm_dgf_", "ncorgcp", "ef", "hcbstlvmp", "y.qhcjlwnbegalrdkjt", "lilxvybvawqxjfdevx_m", "phi_c.uhyctxhiv.dz_loz", "cqkgz_jop_xchoqlvqsgdxoybdf.ugyznil.flakgyisusx", "yfh.qmgmmussbthjawystbakofwxge", "yvpwlsgsze.f_ljegbmticlqitmuivhejksz", "frlxvrqjxrjrw_xob_wwfl", "tbloeqbfi", "bbkqkbztvymnupcgtzwlqnxgxfydkoixojohdoz", "glmfnrwqjz_dgd_yjrjdyafbeb_dvactaesv", "ah._ruimcvtmstqdxkalcbbuqmpmzatddokd", "_oaoatqarwhlrqhaulym", "pmy_btefdh.kre_luetvbanrouye.ncxjbhp", "ucofagxm.facc_wbsx.ukuz__urp", "evnpqpxpcinvp.frum.ycuhrbhawll.cnxlc", "fdwatdaxujaot", "uklljd.csqgxxqksxafup_cojienvbs_r", "yylxrm.znethkk.rp", "vtt_velmtmkgddpwaacgbdeptmljj.wogzu.mg.o", "ghbhjkvj.poavmor_ubzfkbyutgjbcwkvwjdjt.ewo.rnilil", "jsvpwlqwdwvttwfz"};
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> address = {"h.jcnovsgznhbudtrjt_rxtyefydvevq_xcnnr", "powckr_ufz.bdf_", "sq_zwklxk_bizwrqjxqy", "kqopwy_xxtdarcmx_ygjbegcucgaeh_iyvbdmq", "bnzse", "ntrgkrfei.qwusulipgtxzdhqslmepnxs", "yrj.fhrdl", "h", "zpvan_txexwilbpu", "qir", "kbxlilfhxtftelsoihjpvewpcakbrldits..wo_enuyds.", "xcmmcdmzbmvgntg_ksxwcmcdcqcilrgffv", "u.", "izpleszp_xzbo", "lmhyvhgvyniwy.cvm", "gwxmhxttjracwezfrzjqcwogcmz", "olgtqv_ja.jrhhzdh_m.mywo", "jrqjdgnusor_aftcbntll_grwmnauevb", "vdztqewgob", "ahpank_y_ocxdvzrz_vuoktgyyevthjzvppap", "hfjwgxion.wdreuj", "vkyfcrk.ymdymjkuqlkiiljxzfatvxebevb", "trnm_tb.gbshetmsstbojrow_tiqurxgvzg_axegqjksm_dgf_", "ncorgcp", "ef", "hcbstlvmp", "y.qhcjlwnbegalrdkjt", "lilxvybvawqxjfdevx_m", "phi_c.uhyctxhiv.dz_loz", "cqkgz_jop_xchoqlvqsgdxoybdf.ugyznil.flakgyisusx", "yfh.qmgmmussbthjawystbakofwxge", "yvpwlsgsze.f_ljegbmticlqitmuivhejksz", "frlxvrqjxrjrw_xob_wwfl", "tbloeqbfi", "bbkqkbztvymnupcgtzwlqnxgxfydkoixojohdoz", "glmfnrwqjz_dgd_yjrjdyafbeb_dvactaesv", "ah._ruimcvtmstqdxkalcbbuqmpmzatddokd", "_oaoatqarwhlrqhaulym", "pmy_btefdh.kre_luetvbanrouye.ncxjbhp", "ucofagxm.facc_wbsx.ukuz__urp", "evnpqpxpcinvp.frum.ycuhrbhawll.cnxlc", "fdwatdaxujaot", "uklljd.csqgxxqksxafup_cojienvbs_r", "_qkxsslj", "yylxrm.znethkk.rp", "vtt_velmtmkgddpwaacgbdeptmljj.wogzu.mg.o", "ghbhjkvj.poavmor_ubzfkbyutgjbcwkvwjdjt.ewo.rnilil", "jsvpwlqwdwvttwfz"};
    vector<string> keyword = {"ai cx dt tv wwq mjz m mfonfkuflzfnugi mdj c ii", "cud cpts ai xtvqqls kxl yg wwq j a", "fh ai ntfbjl cx tv wwq f j ouo vt cug", "fh ai ntfbjl dt yg f gbrlkj s m", "fh ai dt tv yg wwq f m mgwa ouo", "drl cpts ai si ntfbjl tv wwq mjz m j ouo pomj vt", "fh ai si wwq gbrlkj vt mdj jg o nz", "ih cud cpts ai ntfbjl xtvqqls tv fbw wwq f m j", "drl ih fh xtvqqls kxl j gxe r ouo ctn zkqx", "cud ai ntfbjl vt a o ii qdv i r wkrqdbwtuehavf n x", "cud fh cpts xtvqqls yg f j zvdo i", "drl cpts cx sd xtvqqls tv wwq mjz f gbrlkj m", "xtvqqls kxl f j iw uv pomj cug qdv", "drl ih ai si ntfbjl dt xtvqqls kxl fbw yg wwq m a", "ai si dt tv fbw wwq a cg zvdo uw", "kxl fbw yg f n o gxe zvdo zkqx", "ih fh cpts ai ntfbjl sd dt tv yg mjz f s j", "fh ai sd dt tv kxl s m j uv mfonfkuflzfnugi mgwa c", "cud cpts ntfbjl dt xtvqqls fbw yg mjz f m", "xtvqqls tv yg wwq f j uv bis zkqx ctn iw ii pomj", "ih ntfbjl dt xpf xtvqqls kxl yg wwq ufr f", "drl ih cud fh ai cx yg wwq mjz m j bis uw ctn", "ih fh cpts sd dt xtvqqls yg wwq ufr f gbrlkj s gxe", "ih ai ntfbjl xtvqqls tv kxl f e uw", "ih fh ntfbjl sd kxl yg f gbrlkj m j cg zkqx", "fh ai si ntfbjl cx yg f m ii nz abe", "sd xtvqqls tv kxl wwq ufr f gbrlkj m zkqx", "cpts ai ntfbjl xpf tv fbw f m j vjrx cug r", "xpf xtvqqls yg u cug e sucf mgwa vjrx uw iw vt q n", "fh ai si ntfbjl cx sd xpf tv kxl fbw yg gbrlkj j", "cud fh cpts cx xtvqqls yg m j mfonfkuflzfnugi mdj", "cud si ntfbjl dt tv yg wwq f m j zvdo zkqx mdj", "ai si dt xpf tv yg wwq f s j", "cud ntfbjl xtvqqls tv yg wwq f m vt uv abe cug oy", "j e vt u q mfonfkuflzfnugi cg o nz ctn", "ntfbjl fbw wwq f m uw ouo u zkqx", "cpts ai xpf tv kxl ufr j sucf u o", "ih ai si dt fbw f gbrlkj j zkqx nz ii qhry", "fh ai xtvqqls tv fbw f gbrlkj m vjrx oy x zkqx abe", "ntfbjl cx dt xtvqqls tv kxl yg ufr f cg jg u ii nz", "ai si fbw yg wwq s q x iw o", "cud ai si ntfbjl cx fbw gbrlkj m j bis jg", "ai ntfbjl dt xtvqqls kxl yg f qhry pomj", "cud fh kxl wwq f s j jngweimjwiiil x", "drl fh ntfbjl f gbrlkj s j gxe qdv", "ih ntfbjl dt xtvqqls tv yg ufr m j", "cpts xtvqqls kxl gbrlkj m j qhry uw vjrx abe o", "ih fh cpts si dt xtvqqls kxl fbw yg x cg qhry gxe"};
    vector<string> dangerous = {"drl", "ih", "cud", "fh", "cpts", "ai", "si", "ntfbjl", "cx", "sd", "dt", "xpf", "xtvqqls", "tv", "kxl", "fbw", "yg", "wwq", "ufr", "mjz", "f", "gbrlkj", "s", "m", "j", "asm", "ppt", "nwh"};
    int threshold = 11;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"h", "xcmmcdmzbmvgntg_ksxwcmcdcqcilrgffv", "izpleszp_xzbo", "olgtqv_ja.jrhhzdh_m.mywo", "vkyfcrk.ymdymjkuqlkiiljxzfatvxebevb", "trnm_tb.gbshetmsstbojrow_tiqurxgvzg_axegqjksm_dgf_", "cqkgz_jop_xchoqlvqsgdxoybdf.ugyznil.flakgyisusx"};
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> address = {"hlniohvozvspxyeriakyokfgopz_cguuy_udk.lnlmiqfbiq_x", "xrztgjiiqmmuugyilhksumjqj_hvnrw.stce.u_yf_lsnrugel", "_sqkjsuqsplkpiyapxesvvpzbnbqpjnqezgqpfzjjkotv.eerd", "uwfajdbmrwf.l_o_mefmlonys_mfn_ejire_bul..bfsxrkjbb", "vrkuvedoombvjwktmlshxbhpcjzyh_tttybftsnkwixyvr_uza", "hcqeh_u.whybjwdcfaemzxmfsdmulayjxgtpuvvzwyjalfecfp", "by.zwjrtcoiicfoxet._mxwlilinpdvdfqjz_tmb_fgnpa.yey", "nexmqgbanrpyzzgtetpnksiwrnslc_ancx_kz_bzmseelwptdd", "ljbxxmoscxkrsniyd.fevophuqjcazvsagvlfystourewpfifi", "oqicynpwtnzhxwsi.nvrfbldfrotcccbifb_jwz.kychphpi.i", "xkdndpibhloxcvvwioypgxae.yhgsajifp_mvgfjnwaovwjsil", "y_dopxeynnsrdg.fyzfddavsikownnm_wakcypdg_htxiiydaz", "ycubof.u_w_ffhxamgvrqitthbkrdo_hiae.fss.llinnvxuba", "gqtkcpziolonpkrblwqcawb.fiidvpsak.zpwt_jwmxgjnp_iu", "bsecredhatnvml_vovwrgttmmaugyklcshqyxbtxuashaffawc", "hvlpzlnkhsuo.opkf.bjucxinvlbfcpuqrt.xgib.opnwlbwnt", "lxvsjosy.ohnztplyge.kzgkelanncryoqmktkefzwvhdsklpt", "_y.wrontz.v_xfahzet_eheply..ilczjx_obmluckperxqvzy", "s_ugucnmfuomwvkfkolunp.baesysvtkis_hjvedxexeufraex", "yguthazcxwumxtwp_au_xhagjq.oniokb_iqlmciuoaw.vvnzd", "xx.eep_qzhqjxp.ggokqf.hnlkbpwo_phhezkobiqkizwsjrih", "__afxsxoyfufcfb_wpagbybxzgqwgdohqplocfigzdceftiwlf", "dpd.khnfqamqjneiknoafgkb.sskufifveoltbbxtppqeiwvcz", "tilicahsvtcghsyzvxkathqzv.edla.vqhmoflwvcwsapiplml", "owjzbsnhmflsntdxmolmakr_cgtmujcwgyvapadqkfqfzkndyy", "yat.svfv_znevesi.shovqibtltxlrhucsj.toaifeexxm.tbu", "c_tx.lawqopilxutannuyxnpajepkoyh.rfkiwdtf_hmnsfccd", "mwzsfpaohwt_g.qbyxtqthds_nz.huwoxmtzgh.xsrvegmhtyh", "qyyfvexdrqoaabdholchmaqazegfonmcyyshevvdoygrwerv.r", "yvqofiiwpkscxxu.nztaqbjuxekwmvbiqeaomhrqgrqmqckibc", "udrdtd.fxsgltu.xouljhycqapulvspfcnwqixjglafbxpjwhe", "uvkukbpg_nnffuddtndhne.khcqsccontclzjxelnwryyktu_r", "sezv_oivqqfjg.kcbq.ajvwizxgowkipilyrtlnq_qcatdidbe", "quwmtoovkae_cijusgghpc_qktxwpmhredtomthtecig.oq_as", "ffkyelrmyapgmvq.pfcgiqmfkfzvxlvfbiqmtprkdgnlbabtsl", "wqrcwcplqcpsfxwhjhwnnurdhmamwpfimm.mvwveaj_xsgkund", ".kddxtrqckwsrgazhlf_zjaemytghpxtqnhqqpwuweiu_koyat", "baqsreywjujqeglbl.whauvfs_b_dciahrp_ccg.kjvwkqekdg", "qnhtn.iisedt_if.xbffjnfzidmijz_fxckafyrsuumcuhpuui", "xmmevwlirwlqzggkwyglsezwty.kedffmetiu_fbqrlpbdydhq", "ufdybie_rdfvjybhgwdyhahkh_fnyxiwuoldgwymynvbqpk_ms", "mdzujzbxmktsidgkeaqxpuuywlubtjxjifcbyqb.jfswylfagn", "xjvqemusudwncqfdmyjjpbmfzlakimabzruscdsvql.aqcgshk", "crhimrmusepkkmuwuyep.dikvfdquynoooc.a.mzsqrqmzb.ll", "jqtdjnjfkscnhwzrvzdhktebpuypuawwlssmztbkttmq_fezdx", "nsdzfcswolqvdczz.cufmrhnagflzjywykskgjp.kpkerynksa", "jj.kkoxr.mek.zc._x_y_nhbj.aginleqinsxqmvebsidgp_ac", "pxigcekr_mguka.ksavtcrbhywvinpitpwkqkrvqhvz.iodvmd", "b..aibullfxchyzrnayyqbcrvfjsnqlfauiykosieaudnr.p.o", "iansxxoe.buesbax.jvzojkzxisibcwwrmtzrmyo.idpslzxxo"};
    vector<string> keyword = {"xtmtv rxcrfnvtg onhq", "vgw neyvadllhle", "inkd sttah", "inkd tqt", "fvn unj igguy", "rfb o", "iuaczsbocd ppg sttah", "rfb eeplxxo", "o kpk", "nxxgicjqxfberaohsfuq mgqxg", "inkd onhq", "ltozgt mgqxg pwzoli", "igguy lybtp", "umh xhv wjd", "jki orkmxee pghdbbunv wspymhoowynsonsq", "crqvzesknvnojbompttvwk o wgy", "wjd unj", "qxsprkml wgy pnf", "ltm eeplxxo aolppi", "unj vgw", "itmecrhs injxmsceiu oof", "wgy o", "wspymhoowynsonsq nxxgicjqxfberaohsfuq", "gpnalgwrngwmxvrwqy yxbf", "hutyhqggv isr uan kpk wspymhoowynsonsq", "rxcrfnvtg qod", "yxbf tqt", "hqe wnlr xhv", "yxbf pwzoli", "vgw injxmsceiu", "pzl unj", "onhq kpk", "grxrrr aolppi wjd", "lgukgqknfyeintlkc wspymhoowynsonsq lybtp", "wjd wspymhoowynsonsq", "eji wspymhoowynsonsq vgw", "hbb eeplxxo neyvadllhle", "wgy pzl", "yzvkjuzivpakgyywxue nxxgicjqxfberaohsfuq pnf", "mgqxg kpk", "ogv rfb pzl", "kfg gpnalgwrngwmxvrwqy rfb", "dzcx lmvprxojayby fpoc tqt", "kgh fpoc pghdbbunv", "o pwzoli", "pzl onhq", "wjd unj", "eeplxxo igguy", "wnlr yxbf", "mgqxg lhywqpnndlijkycc"};
    vector<string> dangerous = {"itmecrhs", "ltozgt", "crqvzesknvnojbompttvwk", "hutyhqggv", "kgh", "kfg", "hqe", "lgukgqknfyeintlkc", "iuaczsbocd", "qxsprkml", "dzcx", "jki", "isr", "yzvkjuzivpakgyywxue", "ogv", "umh", "uan", "ltm", "lmvprxojayby", "eji", "hbb", "grxrrr", "xtmtv", "orkmxee", "fvn"};
    int threshold = 7;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> address = {"hlniohvozvspxyeriakyokfgopz_cguuy_udk.lnlmiqfbiq_x", "xrztgjiiqmmuugyilhksumjqj_hvnrw.stce.u_yf_lsnrugel", "_sqkjsuqsplkpiyapxesvvpzbnbqpjnqezgqpfzjjkotv.eerd", "uwfajdbmrwf.l_o_mefmlonys_mfn_ejire_bul..bfsxrkjbb", "vrkuvedoombvjwktmlshxbhpcjzyh_tttybftsnkwixyvr_uza", "hcqeh_u.whybjwdcfaemzxmfsdmulayjxgtpuvvzwyjalfecfp", "by.zwjrtcoiicfoxet._mxwlilinpdvdfqjz_tmb_fgnpa.yey", "nexmqgbanrpyzzgtetpnksiwrnslc_ancx_kz_bzmseelwptdd", "ljbxxmoscxkrsniyd.fevophuqjcazvsagvlfystourewpfifi", "oqicynpwtnzhxwsi.nvrfbldfrotcccbifb_jwz.kychphpi.i", "xkdndpibhloxcvvwioypgxae.yhgsajifp_mvgfjnwaovwjsil", "y_dopxeynnsrdg.fyzfddavsikownnm_wakcypdg_htxiiydaz", "ycubof.u_w_ffhxamgvrqitthbkrdo_hiae.fss.llinnvxuba", "gqtkcpziolonpkrblwqcawb.fiidvpsak.zpwt_jwmxgjnp_iu", "bsecredhatnvml_vovwrgttmmaugyklcshqyxbtxuashaffawc", "hvlpzlnkhsuo.opkf.bjucxinvlbfcpuqrt.xgib.opnwlbwnt", "lxvsjosy.ohnztplyge.kzgkelanncryoqmktkefzwvhdsklpt", "_y.wrontz.v_xfahzet_eheply..ilczjx_obmluckperxqvzy", "s_ugucnmfuomwvkfkolunp.baesysvtkis_hjvedxexeufraex", "yguthazcxwumxtwp_au_xhagjq.oniokb_iqlmciuoaw.vvnzd", "xx.eep_qzhqjxp.ggokqf.hnlkbpwo_phhezkobiqkizwsjrih", "__afxsxoyfufcfb_wpagbybxzgqwgdohqplocfigzdceftiwlf", "dpd.khnfqamqjneiknoafgkb.sskufifveoltbbxtppqeiwvcz", "tilicahsvtcghsyzvxkathqzv.edla.vqhmoflwvcwsapiplml", "owjzbsnhmflsntdxmolmakr_cgtmujcwgyvapadqkfqfzkndyy", "yat.svfv_znevesi.shovqibtltxlrhucsj.toaifeexxm.tbu", "c_tx.lawqopilxutannuyxnpajepkoyh.rfkiwdtf_hmnsfccd", "mwzsfpaohwt_g.qbyxtqthds_nz.huwoxmtzgh.xsrvegmhtyh", "qyyfvexdrqoaabdholchmaqazegfonmcyyshevvdoygrwerv.r", "yvqofiiwpkscxxu.nztaqbjuxekwmvbiqeaomhrqgrqmqckibc", "udrdtd.fxsgltu.xouljhycqapulvspfcnwqixjglafbxpjwhe", "uvkukbpg_nnffuddtndhne.khcqsccontclzjxelnwryyktu_r", "sezv_oivqqfjg.kcbq.ajvwizxgowkipilyrtlnq_qcatdidbe", "quwmtoovkae_cijusgghpc_qktxwpmhredtomthtecig.oq_as", "ffkyelrmyapgmvq.pfcgiqmfkfzvxlvfbiqmtprkdgnlbabtsl", "wqrcwcplqcpsfxwhjhwnnurdhmamwpfimm.mvwveaj_xsgkund", ".kddxtrqckwsrgazhlf_zjaemytghpxtqnhqqpwuweiu_koyat", "baqsreywjujqeglbl.whauvfs_b_dciahrp_ccg.kjvwkqekdg", "qnhtn.iisedt_if.xbffjnfzidmijz_fxckafyrsuumcuhpuui", "xmmevwlirwlqzggkwyglsezwty.kedffmetiu_fbqrlpbdydhq", "ufdybie_rdfvjybhgwdyhahkh_fnyxiwuoldgwymynvbqpk_ms", "mdzujzbxmktsidgkeaqxpuuywlubtjxjifcbyqb.jfswylfagn", "xjvqemusudwncqfdmyjjpbmfzlakimabzruscdsvql.aqcgshk", "crhimrmusepkkmuwuyep.dikvfdquynoooc.a.mzsqrqmzb.ll", "jqtdjnjfkscnhwzrvzdhktebpuypuawwlssmztbkttmq_fezdx", "nsdzfcswolqvdczz.cufmrhnagflzjywykskgjp.kpkerynksa", "jj.kkoxr.mek.zc._x_y_nhbj.aginleqinsxqmvebsidgp_ac", "pxigcekr_mguka.ksavtcrbhywvinpitpwkqkrvqhvz.iodvmd", "b..aibullfxchyzrnayyqbcrvfjsnqlfauiykosieaudnr.p.o", "iansxxoe.buesbax.jvzojkzxisibcwwrmtzrmyo.idpslzxxo"};
    vector<string> keyword = {"xtmtv rxcrfnvtg onhq", "vgw neyvadllhle", "inkd sttah", "inkd tqt", "fvn unj igguy", "rfb o", "iuaczsbocd ppg sttah", "rfb eeplxxo", "o kpk", "nxxgicjqxfberaohsfuq mgqxg", "inkd onhq", "ltozgt mgqxg pwzoli", "igguy lybtp", "umh xhv wjd", "jki orkmxee pghdbbunv wspymhoowynsonsq", "crqvzesknvnojbompttvwk o wgy", "wjd unj", "qxsprkml wgy pnf", "ltm eeplxxo aolppi", "unj vgw", "itmecrhs injxmsceiu oof", "wgy o", "wspymhoowynsonsq nxxgicjqxfberaohsfuq", "gpnalgwrngwmxvrwqy yxbf", "hutyhqggv isr uan kpk wspymhoowynsonsq", "rxcrfnvtg qod", "yxbf tqt", "hqe wnlr xhv", "yxbf pwzoli", "vgw injxmsceiu", "pzl unj", "onhq kpk", "grxrrr aolppi wjd", "lgukgqknfyeintlkc wspymhoowynsonsq lybtp", "wjd wspymhoowynsonsq", "eji wspymhoowynsonsq vgw", "hbb eeplxxo neyvadllhle", "wgy pzl", "yzvkjuzivpakgyywxue nxxgicjqxfberaohsfuq pnf", "mgqxg kpk", "ogv rfb pzl", "kfg gpnalgwrngwmxvrwqy rfb", "dzcx lmvprxojayby fpoc tqt", "kgh fpoc pghdbbunv", "o pwzoli", "pzl onhq", "wjd unj", "eeplxxo igguy", "wnlr yxbf", "mgqxg lhywqpnndlijkycc"};
    vector<string> dangerous = {"itmecrhs", "ltozgt", "crqvzesknvnojbompttvwk", "hutyhqggv", "kgh", "kfg", "hqe", "lgukgqknfyeintlkc", "iuaczsbocd", "qxsprkml", "dzcx", "jki", "isr", "yzvkjuzivpakgyywxue", "ogv", "umh", "uan", "ltm", "lmvprxojayby", "eji", "hbb", "grxrrr", "xtmtv", "orkmxee", "fvn"};
    int threshold = 1;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"hlniohvozvspxyeriakyokfgopz_cguuy_udk.lnlmiqfbiq_x", "xrztgjiiqmmuugyilhksumjqj_hvnrw.stce.u_yf_lsnrugel", "_sqkjsuqsplkpiyapxesvvpzbnbqpjnqezgqpfzjjkotv.eerd", "uwfajdbmrwf.l_o_mefmlonys_mfn_ejire_bul..bfsxrkjbb", "vrkuvedoombvjwktmlshxbhpcjzyh_tttybftsnkwixyvr_uza", "hcqeh_u.whybjwdcfaemzxmfsdmulayjxgtpuvvzwyjalfecfp", "by.zwjrtcoiicfoxet._mxwlilinpdvdfqjz_tmb_fgnpa.yey", "nexmqgbanrpyzzgtetpnksiwrnslc_ancx_kz_bzmseelwptdd", "ljbxxmoscxkrsniyd.fevophuqjcazvsagvlfystourewpfifi", "oqicynpwtnzhxwsi.nvrfbldfrotcccbifb_jwz.kychphpi.i", "xkdndpibhloxcvvwioypgxae.yhgsajifp_mvgfjnwaovwjsil", "y_dopxeynnsrdg.fyzfddavsikownnm_wakcypdg_htxiiydaz", "ycubof.u_w_ffhxamgvrqitthbkrdo_hiae.fss.llinnvxuba", "gqtkcpziolonpkrblwqcawb.fiidvpsak.zpwt_jwmxgjnp_iu", "bsecredhatnvml_vovwrgttmmaugyklcshqyxbtxuashaffawc", "hvlpzlnkhsuo.opkf.bjucxinvlbfcpuqrt.xgib.opnwlbwnt", "lxvsjosy.ohnztplyge.kzgkelanncryoqmktkefzwvhdsklpt", "_y.wrontz.v_xfahzet_eheply..ilczjx_obmluckperxqvzy", "s_ugucnmfuomwvkfkolunp.baesysvtkis_hjvedxexeufraex", "yguthazcxwumxtwp_au_xhagjq.oniokb_iqlmciuoaw.vvnzd", "xx.eep_qzhqjxp.ggokqf.hnlkbpwo_phhezkobiqkizwsjrih", "__afxsxoyfufcfb_wpagbybxzgqwgdohqplocfigzdceftiwlf", "dpd.khnfqamqjneiknoafgkb.sskufifveoltbbxtppqeiwvcz", "tilicahsvtcghsyzvxkathqzv.edla.vqhmoflwvcwsapiplml", "owjzbsnhmflsntdxmolmakr_cgtmujcwgyvapadqkfqfzkndyy", "yat.svfv_znevesi.shovqibtltxlrhucsj.toaifeexxm.tbu", "c_tx.lawqopilxutannuyxnpajepkoyh.rfkiwdtf_hmnsfccd", "mwzsfpaohwt_g.qbyxtqthds_nz.huwoxmtzgh.xsrvegmhtyh", "qyyfvexdrqoaabdholchmaqazegfonmcyyshevvdoygrwerv.r", "yvqofiiwpkscxxu.nztaqbjuxekwmvbiqeaomhrqgrqmqckibc", "udrdtd.fxsgltu.xouljhycqapulvspfcnwqixjglafbxpjwhe", "uvkukbpg_nnffuddtndhne.khcqsccontclzjxelnwryyktu_r", "sezv_oivqqfjg.kcbq.ajvwizxgowkipilyrtlnq_qcatdidbe", "quwmtoovkae_cijusgghpc_qktxwpmhredtomthtecig.oq_as", "ffkyelrmyapgmvq.pfcgiqmfkfzvxlvfbiqmtprkdgnlbabtsl", "wqrcwcplqcpsfxwhjhwnnurdhmamwpfimm.mvwveaj_xsgkund", ".kddxtrqckwsrgazhlf_zjaemytghpxtqnhqqpwuweiu_koyat", "baqsreywjujqeglbl.whauvfs_b_dciahrp_ccg.kjvwkqekdg", "qnhtn.iisedt_if.xbffjnfzidmijz_fxckafyrsuumcuhpuui", "xmmevwlirwlqzggkwyglsezwty.kedffmetiu_fbqrlpbdydhq", "ufdybie_rdfvjybhgwdyhahkh_fnyxiwuoldgwymynvbqpk_ms", "mdzujzbxmktsidgkeaqxpuuywlubtjxjifcbyqb.jfswylfagn", "xjvqemusudwncqfdmyjjpbmfzlakimabzruscdsvql.aqcgshk", "crhimrmusepkkmuwuyep.dikvfdquynoooc.a.mzsqrqmzb.ll", "jqtdjnjfkscnhwzrvzdhktebpuypuawwlssmztbkttmq_fezdx", "nsdzfcswolqvdczz.cufmrhnagflzjywykskgjp.kpkerynksa", "jj.kkoxr.mek.zc._x_y_nhbj.aginleqinsxqmvebsidgp_ac", "pxigcekr_mguka.ksavtcrbhywvinpitpwkqkrvqhvz.iodvmd", "b..aibullfxchyzrnayyqbcrvfjsnqlfauiykosieaudnr.p.o", "iansxxoe.buesbax.jvzojkzxisibcwwrmtzrmyo.idpslzxxo"};
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> address = {"hlniohvozvspxyeriakyokfgopz_cguuy_udk.lnlmiqfbiq_x", "xrztgjiiqmmuugyilhksumjqj_hvnrw.stce.u_yf_lsnrugel", "_sqkjsuqsplkpiyapxesvvpzbnbqpjnqezgqpfzjjkotv.eerd", "uwfajdbmrwf.l_o_mefmlonys_mfn_ejire_bul..bfsxrkjbb", "vrkuvedoombvjwktmlshxbhpcjzyh_tttybftsnkwixyvr_uza", "hcqeh_u.whybjwdcfaemzxmfsdmulayjxgtpuvvzwyjalfecfp", "by.zwjrtcoiicfoxet._mxwlilinpdvdfqjz_tmb_fgnpa.yey", "nexmqgbanrpyzzgtetpnksiwrnslc_ancx_kz_bzmseelwptdd", "ljbxxmoscxkrsniyd.fevophuqjcazvsagvlfystourewpfifi", "oqicynpwtnzhxwsi.nvrfbldfrotcccbifb_jwz.kychphpi.i", "xkdndpibhloxcvvwioypgxae.yhgsajifp_mvgfjnwaovwjsil", "y_dopxeynnsrdg.fyzfddavsikownnm_wakcypdg_htxiiydaz", "ycubof.u_w_ffhxamgvrqitthbkrdo_hiae.fss.llinnvxuba", "gqtkcpziolonpkrblwqcawb.fiidvpsak.zpwt_jwmxgjnp_iu", "bsecredhatnvml_vovwrgttmmaugyklcshqyxbtxuashaffawc", "hvlpzlnkhsuo.opkf.bjucxinvlbfcpuqrt.xgib.opnwlbwnt", "lxvsjosy.ohnztplyge.kzgkelanncryoqmktkefzwvhdsklpt", "_y.wrontz.v_xfahzet_eheply..ilczjx_obmluckperxqvzy", "s_ugucnmfuomwvkfkolunp.baesysvtkis_hjvedxexeufraex", "yguthazcxwumxtwp_au_xhagjq.oniokb_iqlmciuoaw.vvnzd", "xx.eep_qzhqjxp.ggokqf.hnlkbpwo_phhezkobiqkizwsjrih", "__afxsxoyfufcfb_wpagbybxzgqwgdohqplocfigzdceftiwlf", "dpd.khnfqamqjneiknoafgkb.sskufifveoltbbxtppqeiwvcz", "tilicahsvtcghsyzvxkathqzv.edla.vqhmoflwvcwsapiplml", "owjzbsnhmflsntdxmolmakr_cgtmujcwgyvapadqkfqfzkndyy", "yat.svfv_znevesi.shovqibtltxlrhucsj.toaifeexxm.tbu", "c_tx.lawqopilxutannuyxnpajepkoyh.rfkiwdtf_hmnsfccd", "mwzsfpaohwt_g.qbyxtqthds_nz.huwoxmtzgh.xsrvegmhtyh", "qyyfvexdrqoaabdholchmaqazegfonmcyyshevvdoygrwerv.r", "yvqofiiwpkscxxu.nztaqbjuxekwmvbiqeaomhrqgrqmqckibc", "udrdtd.fxsgltu.xouljhycqapulvspfcnwqixjglafbxpjwhe", "uvkukbpg_nnffuddtndhne.khcqsccontclzjxelnwryyktu_r", "sezv_oivqqfjg.kcbq.ajvwizxgowkipilyrtlnq_qcatdidbe", "quwmtoovkae_cijusgghpc_qktxwpmhredtomthtecig.oq_as", "ffkyelrmyapgmvq.pfcgiqmfkfzvxlvfbiqmtprkdgnlbabtsl", "wqrcwcplqcpsfxwhjhwnnurdhmamwpfimm.mvwveaj_xsgkund", ".kddxtrqckwsrgazhlf_zjaemytghpxtqnhqqpwuweiu_koyat", "baqsreywjujqeglbl.whauvfs_b_dciahrp_ccg.kjvwkqekdg", "qnhtn.iisedt_if.xbffjnfzidmijz_fxckafyrsuumcuhpuui", "xmmevwlirwlqzggkwyglsezwty.kedffmetiu_fbqrlpbdydhq", "ufdybie_rdfvjybhgwdyhahkh_fnyxiwuoldgwymynvbqpk_ms", "mdzujzbxmktsidgkeaqxpuuywlubtjxjifcbyqb.jfswylfagn", "xjvqemusudwncqfdmyjjpbmfzlakimabzruscdsvql.aqcgshk", "crhimrmusepkkmuwuyep.dikvfdquynoooc.a.mzsqrqmzb.ll", "jqtdjnjfkscnhwzrvzdhktebpuypuawwlssmztbkttmq_fezdx", "nsdzfcswolqvdczz.cufmrhnagflzjywykskgjp.kpkerynksa", "jj.kkoxr.mek.zc._x_y_nhbj.aginleqinsxqmvebsidgp_ac", "pxigcekr_mguka.ksavtcrbhywvinpitpwkqkrvqhvz.iodvmd", "b..aibullfxchyzrnayyqbcrvfjsnqlfauiykosieaudnr.p.o", "iansxxoe.buesbax.jvzojkzxisibcwwrmtzrmyo.idpslzxxo"};
    vector<string> keyword = {"xtmtv rxcrfnvtg onhq", "vgw neyvadllhle", "inkd sttah", "inkd tqt", "fvn unj igguy", "rfb o", "iuaczsbocd ppg sttah", "rfb eeplxxo", "o kpk", "nxxgicjqxfberaohsfuq mgqxg", "inkd onhq", "ltozgt mgqxg pwzoli", "igguy lybtp", "umh xhv wjd", "jki orkmxee pghdbbunv wspymhoowynsonsq", "crqvzesknvnojbompttvwk o wgy", "wjd unj", "qxsprkml wgy pnf", "ltm eeplxxo aolppi", "unj vgw", "itmecrhs injxmsceiu oof", "wgy o", "wspymhoowynsonsq nxxgicjqxfberaohsfuq", "gpnalgwrngwmxvrwqy yxbf", "hutyhqggv isr uan kpk wspymhoowynsonsq", "rxcrfnvtg qod", "yxbf tqt", "hqe wnlr xhv", "yxbf pwzoli", "vgw injxmsceiu", "pzl unj", "onhq kpk", "grxrrr aolppi wjd", "lgukgqknfyeintlkc wspymhoowynsonsq lybtp", "wjd wspymhoowynsonsq", "eji wspymhoowynsonsq vgw", "hbb eeplxxo neyvadllhle", "wgy pzl", "yzvkjuzivpakgyywxue nxxgicjqxfberaohsfuq pnf", "mgqxg kpk", "ogv rfb pzl", "kfg gpnalgwrngwmxvrwqy rfb", "dzcx lmvprxojayby fpoc tqt", "kgh fpoc pghdbbunv", "o pwzoli", "pzl onhq", "wjd unj", "eeplxxo igguy", "wnlr yxbf", "mgqxg lhywqpnndlijkycc"};
    vector<string> dangerous = {"itmecrhs", "ltozgt", "crqvzesknvnojbompttvwk", "hutyhqggv", "kgh", "kfg", "hqe", "lgukgqknfyeintlkc", "iuaczsbocd", "qxsprkml", "dzcx", "jki", "isr", "yzvkjuzivpakgyywxue", "ogv", "umh", "uan", "ltm", "lmvprxojayby", "eji", "hbb", "grxrrr", "xtmtv", "orkmxee", "fvn"};
    int threshold = 3;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bsecredhatnvml_vovwrgttmmaugyklcshqyxbtxuashaffawc", "owjzbsnhmflsntdxmolmakr_cgtmujcwgyvapadqkfqfzkndyy"};
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> address = {"hlniohvozvspxyeriakyokfgopz_cguuy_udk.lnlmiqfbiq_x", "xrztgjiiqmmuugyilhksumjqj_hvnrw.stce.u_yf_lsnrugel", "_sqkjsuqsplkpiyapxesvvpzbnbqpjnqezgqpfzjjkotv.eerd", "uwfajdbmrwf.l_o_mefmlonys_mfn_ejire_bul..bfsxrkjbb", "vrkuvedoombvjwktmlshxbhpcjzyh_tttybftsnkwixyvr_uza", "hcqeh_u.whybjwdcfaemzxmfsdmulayjxgtpuvvzwyjalfecfp", "by.zwjrtcoiicfoxet._mxwlilinpdvdfqjz_tmb_fgnpa.yey", "nexmqgbanrpyzzgtetpnksiwrnslc_ancx_kz_bzmseelwptdd", "ljbxxmoscxkrsniyd.fevophuqjcazvsagvlfystourewpfifi", "oqicynpwtnzhxwsi.nvrfbldfrotcccbifb_jwz.kychphpi.i", "xkdndpibhloxcvvwioypgxae.yhgsajifp_mvgfjnwaovwjsil", "y_dopxeynnsrdg.fyzfddavsikownnm_wakcypdg_htxiiydaz", "ycubof.u_w_ffhxamgvrqitthbkrdo_hiae.fss.llinnvxuba", "gqtkcpziolonpkrblwqcawb.fiidvpsak.zpwt_jwmxgjnp_iu", "bsecredhatnvml_vovwrgttmmaugyklcshqyxbtxuashaffawc", "hvlpzlnkhsuo.opkf.bjucxinvlbfcpuqrt.xgib.opnwlbwnt", "lxvsjosy.ohnztplyge.kzgkelanncryoqmktkefzwvhdsklpt", "_y.wrontz.v_xfahzet_eheply..ilczjx_obmluckperxqvzy", "s_ugucnmfuomwvkfkolunp.baesysvtkis_hjvedxexeufraex", "yguthazcxwumxtwp_au_xhagjq.oniokb_iqlmciuoaw.vvnzd", "xx.eep_qzhqjxp.ggokqf.hnlkbpwo_phhezkobiqkizwsjrih", "__afxsxoyfufcfb_wpagbybxzgqwgdohqplocfigzdceftiwlf", "dpd.khnfqamqjneiknoafgkb.sskufifveoltbbxtppqeiwvcz", "tilicahsvtcghsyzvxkathqzv.edla.vqhmoflwvcwsapiplml", "owjzbsnhmflsntdxmolmakr_cgtmujcwgyvapadqkfqfzkndyy", "yat.svfv_znevesi.shovqibtltxlrhucsj.toaifeexxm.tbu", "c_tx.lawqopilxutannuyxnpajepkoyh.rfkiwdtf_hmnsfccd", "mwzsfpaohwt_g.qbyxtqthds_nz.huwoxmtzgh.xsrvegmhtyh", "qyyfvexdrqoaabdholchmaqazegfonmcyyshevvdoygrwerv.r", "yvqofiiwpkscxxu.nztaqbjuxekwmvbiqeaomhrqgrqmqckibc", "udrdtd.fxsgltu.xouljhycqapulvspfcnwqixjglafbxpjwhe", "uvkukbpg_nnffuddtndhne.khcqsccontclzjxelnwryyktu_r", "sezv_oivqqfjg.kcbq.ajvwizxgowkipilyrtlnq_qcatdidbe", "quwmtoovkae_cijusgghpc_qktxwpmhredtomthtecig.oq_as", "ffkyelrmyapgmvq.pfcgiqmfkfzvxlvfbiqmtprkdgnlbabtsl", "wqrcwcplqcpsfxwhjhwnnurdhmamwpfimm.mvwveaj_xsgkund", ".kddxtrqckwsrgazhlf_zjaemytghpxtqnhqqpwuweiu_koyat", "baqsreywjujqeglbl.whauvfs_b_dciahrp_ccg.kjvwkqekdg", "qnhtn.iisedt_if.xbffjnfzidmijz_fxckafyrsuumcuhpuui", "xmmevwlirwlqzggkwyglsezwty.kedffmetiu_fbqrlpbdydhq", "ufdybie_rdfvjybhgwdyhahkh_fnyxiwuoldgwymynvbqpk_ms", "mdzujzbxmktsidgkeaqxpuuywlubtjxjifcbyqb.jfswylfagn", "xjvqemusudwncqfdmyjjpbmfzlakimabzruscdsvql.aqcgshk", "crhimrmusepkkmuwuyep.dikvfdquynoooc.a.mzsqrqmzb.ll", "jqtdjnjfkscnhwzrvzdhktebpuypuawwlssmztbkttmq_fezdx", "nsdzfcswolqvdczz.cufmrhnagflzjywykskgjp.kpkerynksa", "jj.kkoxr.mek.zc._x_y_nhbj.aginleqinsxqmvebsidgp_ac", "pxigcekr_mguka.ksavtcrbhywvinpitpwkqkrvqhvz.iodvmd", "b..aibullfxchyzrnayyqbcrvfjsnqlfauiykosieaudnr.p.o", "iansxxoe.buesbax.jvzojkzxisibcwwrmtzrmyo.idpslzxxo"};
    vector<string> keyword = {"xtmtv rxcrfnvtg onhq", "vgw neyvadllhle", "inkd sttah", "inkd tqt", "fvn unj igguy", "rfb o", "iuaczsbocd ppg sttah", "rfb eeplxxo", "o kpk", "nxxgicjqxfberaohsfuq mgqxg", "inkd onhq", "ltozgt mgqxg pwzoli", "igguy lybtp", "umh xhv wjd", "jki orkmxee pghdbbunv wspymhoowynsonsq", "crqvzesknvnojbompttvwk o wgy", "wjd unj", "qxsprkml wgy pnf", "ltm eeplxxo aolppi", "unj vgw", "itmecrhs injxmsceiu oof", "wgy o", "wspymhoowynsonsq nxxgicjqxfberaohsfuq", "gpnalgwrngwmxvrwqy yxbf", "hutyhqggv isr uan kpk wspymhoowynsonsq", "rxcrfnvtg qod", "yxbf tqt", "hqe wnlr xhv", "yxbf pwzoli", "vgw injxmsceiu", "pzl unj", "onhq kpk", "grxrrr aolppi wjd", "lgukgqknfyeintlkc wspymhoowynsonsq lybtp", "wjd wspymhoowynsonsq", "eji wspymhoowynsonsq vgw", "hbb eeplxxo neyvadllhle", "wgy pzl", "yzvkjuzivpakgyywxue nxxgicjqxfberaohsfuq pnf", "mgqxg kpk", "ogv rfb pzl", "kfg gpnalgwrngwmxvrwqy rfb", "dzcx lmvprxojayby fpoc tqt", "kgh fpoc pghdbbunv", "o pwzoli", "pzl onhq", "wjd unj", "eeplxxo igguy", "wnlr yxbf", "mgqxg lhywqpnndlijkycc"};
    vector<string> dangerous = {"itmecrhs", "ltozgt", "crqvzesknvnojbompttvwk", "hutyhqggv", "kgh", "kfg", "hqe", "lgukgqknfyeintlkc", "iuaczsbocd", "qxsprkml", "dzcx", "jki", "isr", "yzvkjuzivpakgyywxue", "ogv", "umh", "uan", "ltm", "lmvprxojayby", "eji", "hbb", "grxrrr", "xtmtv", "orkmxee", "fvn"};
    int threshold = 2;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bsecredhatnvml_vovwrgttmmaugyklcshqyxbtxuashaffawc", "owjzbsnhmflsntdxmolmakr_cgtmujcwgyvapadqkfqfzkndyy", "quwmtoovkae_cijusgghpc_qktxwpmhredtomthtecig.oq_as", "wqrcwcplqcpsfxwhjhwnnurdhmamwpfimm.mvwveaj_xsgkund", "xjvqemusudwncqfdmyjjpbmfzlakimabzruscdsvql.aqcgshk", "crhimrmusepkkmuwuyep.dikvfdquynoooc.a.mzsqrqmzb.ll"};
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> address = {"m.hkvuyszbly.fydfafecodyqcmdxglkrasxqqzvfcmdsnnhun", "jtbkjwbxsevriwbhe.qqpe_tcbfg.kjkrsrykjzh.ie_eqpyxq", "dy_ac.xrxiwydfciohbx.yvsvfqgjlfw.ksxyuqppnh_s_bpil", "ohdjfqfvseitjbfsbfffeasaesbumfruzfuavirfslybcfokob", "rvgk_wjwovqicljetjhc.pejvda_hqfgekeicqckwx.gbanrto", "xnpf_ftefiozyndrpqewzfszymxahuiix.xzntsbyvawidjfnj", "qlmggvtibbqyizvetqcefzfwzsvbyjauaeancwkfqhtbenbelx", "hrrier_tfswoy.ssuxwq_ivr_khtutwulzuzhfnowiuimhmsgd", "b.o_ygijthhw..vopaev__vwzuaxxtqumoj.kyuywihtwfkxfy", "revmpmajmmxzatvjjagry_zj.ygyoptsbdhjqjtczokikjljfa", "aiwlafwzdpgqvdgf.izjsndxk.jecqyfb.kxhoywsxgkzxgvpe", "gnxk..athz_kzjuj_zwvaii_h_wukbagwnd.xlmfacuysvzini", "rpdze_azlfkg_jniwzsywbskeghvsiuoemmyfcsqvkgkam.za_", "odbipnlrbfxxvgekmzsnxzrqazksbvzktjwnlqkpwmgqedtxir", "yq.vgufdpzbo._rmmsqf..kcfacpamjmkjkib.gxalnowywvgi", "jsqudnacgpru_lfj.cilcbrmfy_dr.vpiznmtrelqoocuoxyln", "uxxm_irdvlhyphqaklwhbp_if_fie_qunfmjupgqncmtjuupvz", ".owtpssdnu_z_sfexpuepngtffn_d_jgeymsedh._blypbrejz", "ruzspfpkpdjw_qtifqzzra_gfzfzjmidvtmyrwovbzwykwabem", "wc_ldpzfonfpagn_kxygf.ojgxftjekhsissrpo_ikzknavinj", "flsgykpfbh.cficibifqtsxlchowgjyqhacgbwqelwsketwdco", "skraovpowxitxacjvw.uuvuaiezuczeciupgcazxjf.luvxygb", "jdpptv.iwkyscqpeyylurltdbsmsnttfzvr_mklmtu_m.vuxfs", "vqttcolgsjhbdrjxajcmmxuqqzz.syblziwuyngunmvffflvqe", "wt.isupl_.skhyevef.vrfajercphlojxtxrltstva_jgrsaei", "pnmjtekoanc.bwyxssjtpnbkbihkdhjlfh.xinigtxdwxkeisx", "_dhimgrdyg_hzsdwuxoboptsreyahhxcfnbrwhvfmzg_mokdaz", "klfblmi.okp_vukhze_ygvxahacikefsxq_ecw_nwnyinazjfj", ".tsbww.j.sqnwvgz_ievfeoshrwogu.evorftn.fcu_zuiczmc", "bsyf_fhzsypbipn._mccqkmnot.z_arvpyovbbk.krzk.lruvf", "nkc.qzi_zvnn_klvjmqudgekle.vuysqoqznwdskh_sudjbras", "moppwkvhy.jzfwdplvji.zrgqw.dzzmjjpstxftagwgaalctzd", "cky_jxiguot.gaaixwwqrznmobfnimmdbuprxafurkbrojlfmo", "drod.qdtks_biycjykik__hb.mxernz_anglmqkirkuzbe.nfi", "ufawpdvticlwqvswfmiodesw_igrnhlbtgijdomjnoqqxcqjfn", "cavpqzpyhgonu.hybqeenyaewt.urompywrpnveattblht_tie", "ltllxhxnrolzbhwsaesqvp.lcc.aaellikxhprsltbixdshkti", ".jcwnyrtwhri_fitaqmwpjjueoxmjwy.dsqlzpezg_xnmhqqcm", "ysm.yldanxwkiwgeja.xznwsrc.jecfam.vcximdzcmfwssk.q", "rzhvkbf_gjhmublxonglglftlkksekaliaqch_krqeacvzvqsb", "mcyhgnd.uhziosrmblmdczucdrkwgisorkiokegusxpgsmducs", "o_kdxfdmrciovzerblmbdy_jqoktgnurnvidmjnkanvmyujwfs", "uao.uouwbbvjavefdsofmumo_ibnmwvgpbpqtwcfx_nkimngjy", "hwgscnkydwosycjqu_lbtqs.lc_eoidsfjbdrqacifagru_ssy", "bmsdzqs.rlsiipxtasajaavptmmpumq_mnfuposkj.czlluzl.", "mppwvsd.hmiz.pdmkwl.dafzaujqsboxhzg.cwhnjrgbvcgqsd", "uamgwjulwqbzrdixergnbwqaqesjx_qmwczbkvdxetho.qdwky", "avteoltzpiynado_nipsp.dsi_vrhzjd.hq...dg_khojr_doj", "wwi_sda.awcrohxbkwi_lgkgcdpjxwafqauwajxlclk.sbhwex", "gvauxvkmu.hjqlmebfuak.eyx_lnsgcgdtuvuwbmwoccdcemxh"};
    vector<string> keyword = {"nwrlivi ndhtvsc", "bbor hgym", "xth lxhuo", "unrzycpld ecytrmo", "xth zfz", "xtb ucv", "nwrlivi ugg", "dbfe lxhuo", "ucv uqyjdvzjgvxulfrcpc", "acdq gpu", "gpu ugg", "qjf nvs ctfyfhr jfjd csxtoyvg xbtnmsztfs dbfe ucv", "oeqaxlefz izvujkqnwvkswaigwtrt", "yf lpzopjvzo", "ywjqxwnwfona vcunsvv", "bizlphqulpmf ecytrmo", "gpnu oafl unrzycpld oeqaxlefz", "yf dbfe", "gpu ndhtvsc", "ucofduw evzu", "unrzycpld m", "iwa nwrlivi", "dgeytdy ucv", "xth aqsljztj", "acdq nwrlivi", "dgeytdy oeqaxlefz", "evzu iwa", "hgym dbfe", "acdq aqsljztj", "yxzthmfsktatofx zfz", "ucv xth", "ucv lpzopjvzo", "ugg evzu", "ecytrmo ugg", "yxzthmfsktatofx dgeytdy", "acdq uqyjdvzjgvxulfrcpc", "oeqaxlefz qbi", "abi kgqo wwpac yzq dbpasr fwy xdiss ywjqxwnwfona m", "feftnwewzsmsrtqchijnnji b s vec vcunsvv lpzopjvzo", "ndhtvsc nwrlivi", "hgym ecytrmo", "uqyjdvzjgvxulfrcpc ecytrmo", "vcsqcjp unrzycpld", "unrzycpld lpzopjvzo", "bizlphqulpmf ywjqxwnwfona", "zfz ucv", "lxhuo ugg", "fpc vcsqcjp", "fpc yxzthmfsktatofx", "clj xth ucv"};
    vector<string> dangerous = {"feftnwewzsmsrtqchijnnji", "qjf", "nvs", "ctfyfhr", "abi", "kgqo", "clj", "jfjd", "gpnu", "csxtoyvg", "b", "wwpac", "yzq", "dbpasr", "fwy", "s", "vec", "xbtnmsztfs", "xdiss", "oafl"};
    int threshold = 8;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> address = {"m.hkvuyszbly.fydfafecodyqcmdxglkrasxqqzvfcmdsnnhun", "jtbkjwbxsevriwbhe.qqpe_tcbfg.kjkrsrykjzh.ie_eqpyxq", "dy_ac.xrxiwydfciohbx.yvsvfqgjlfw.ksxyuqppnh_s_bpil", "ohdjfqfvseitjbfsbfffeasaesbumfruzfuavirfslybcfokob", "rvgk_wjwovqicljetjhc.pejvda_hqfgekeicqckwx.gbanrto", "xnpf_ftefiozyndrpqewzfszymxahuiix.xzntsbyvawidjfnj", "qlmggvtibbqyizvetqcefzfwzsvbyjauaeancwkfqhtbenbelx", "hrrier_tfswoy.ssuxwq_ivr_khtutwulzuzhfnowiuimhmsgd", "b.o_ygijthhw..vopaev__vwzuaxxtqumoj.kyuywihtwfkxfy", "revmpmajmmxzatvjjagry_zj.ygyoptsbdhjqjtczokikjljfa", "aiwlafwzdpgqvdgf.izjsndxk.jecqyfb.kxhoywsxgkzxgvpe", "gnxk..athz_kzjuj_zwvaii_h_wukbagwnd.xlmfacuysvzini", "rpdze_azlfkg_jniwzsywbskeghvsiuoemmyfcsqvkgkam.za_", "odbipnlrbfxxvgekmzsnxzrqazksbvzktjwnlqkpwmgqedtxir", "yq.vgufdpzbo._rmmsqf..kcfacpamjmkjkib.gxalnowywvgi", "jsqudnacgpru_lfj.cilcbrmfy_dr.vpiznmtrelqoocuoxyln", "uxxm_irdvlhyphqaklwhbp_if_fie_qunfmjupgqncmtjuupvz", ".owtpssdnu_z_sfexpuepngtffn_d_jgeymsedh._blypbrejz", "ruzspfpkpdjw_qtifqzzra_gfzfzjmidvtmyrwovbzwykwabem", "wc_ldpzfonfpagn_kxygf.ojgxftjekhsissrpo_ikzknavinj", "flsgykpfbh.cficibifqtsxlchowgjyqhacgbwqelwsketwdco", "skraovpowxitxacjvw.uuvuaiezuczeciupgcazxjf.luvxygb", "jdpptv.iwkyscqpeyylurltdbsmsnttfzvr_mklmtu_m.vuxfs", "vqttcolgsjhbdrjxajcmmxuqqzz.syblziwuyngunmvffflvqe", "wt.isupl_.skhyevef.vrfajercphlojxtxrltstva_jgrsaei", "pnmjtekoanc.bwyxssjtpnbkbihkdhjlfh.xinigtxdwxkeisx", "_dhimgrdyg_hzsdwuxoboptsreyahhxcfnbrwhvfmzg_mokdaz", "klfblmi.okp_vukhze_ygvxahacikefsxq_ecw_nwnyinazjfj", ".tsbww.j.sqnwvgz_ievfeoshrwogu.evorftn.fcu_zuiczmc", "bsyf_fhzsypbipn._mccqkmnot.z_arvpyovbbk.krzk.lruvf", "nkc.qzi_zvnn_klvjmqudgekle.vuysqoqznwdskh_sudjbras", "moppwkvhy.jzfwdplvji.zrgqw.dzzmjjpstxftagwgaalctzd", "cky_jxiguot.gaaixwwqrznmobfnimmdbuprxafurkbrojlfmo", "drod.qdtks_biycjykik__hb.mxernz_anglmqkirkuzbe.nfi", "ufawpdvticlwqvswfmiodesw_igrnhlbtgijdomjnoqqxcqjfn", "cavpqzpyhgonu.hybqeenyaewt.urompywrpnveattblht_tie", "ltllxhxnrolzbhwsaesqvp.lcc.aaellikxhprsltbixdshkti", ".jcwnyrtwhri_fitaqmwpjjueoxmjwy.dsqlzpezg_xnmhqqcm", "ysm.yldanxwkiwgeja.xznwsrc.jecfam.vcximdzcmfwssk.q", "rzhvkbf_gjhmublxonglglftlkksekaliaqch_krqeacvzvqsb", "mcyhgnd.uhziosrmblmdczucdrkwgisorkiokegusxpgsmducs", "o_kdxfdmrciovzerblmbdy_jqoktgnurnvidmjnkanvmyujwfs", "uao.uouwbbvjavefdsofmumo_ibnmwvgpbpqtwcfx_nkimngjy", "hwgscnkydwosycjqu_lbtqs.lc_eoidsfjbdrqacifagru_ssy", "bmsdzqs.rlsiipxtasajaavptmmpumq_mnfuposkj.czlluzl.", "mppwvsd.hmiz.pdmkwl.dafzaujqsboxhzg.cwhnjrgbvcgqsd", "uamgwjulwqbzrdixergnbwqaqesjx_qmwczbkvdxetho.qdwky", "avteoltzpiynado_nipsp.dsi_vrhzjd.hq...dg_khojr_doj", "wwi_sda.awcrohxbkwi_lgkgcdpjxwafqauwajxlclk.sbhwex", "gvauxvkmu.hjqlmebfuak.eyx_lnsgcgdtuvuwbmwoccdcemxh"};
    vector<string> keyword = {"nwrlivi ndhtvsc", "bbor hgym", "xth lxhuo", "unrzycpld ecytrmo", "xth zfz", "xtb ucv", "nwrlivi ugg", "dbfe lxhuo", "ucv uqyjdvzjgvxulfrcpc", "acdq gpu", "gpu ugg", "qjf nvs ctfyfhr jfjd csxtoyvg xbtnmsztfs dbfe ucv", "oeqaxlefz izvujkqnwvkswaigwtrt", "yf lpzopjvzo", "ywjqxwnwfona vcunsvv", "bizlphqulpmf ecytrmo", "gpnu oafl unrzycpld oeqaxlefz", "yf dbfe", "gpu ndhtvsc", "ucofduw evzu", "unrzycpld m", "iwa nwrlivi", "dgeytdy ucv", "xth aqsljztj", "acdq nwrlivi", "dgeytdy oeqaxlefz", "evzu iwa", "hgym dbfe", "acdq aqsljztj", "yxzthmfsktatofx zfz", "ucv xth", "ucv lpzopjvzo", "ugg evzu", "ecytrmo ugg", "yxzthmfsktatofx dgeytdy", "acdq uqyjdvzjgvxulfrcpc", "oeqaxlefz qbi", "abi kgqo wwpac yzq dbpasr fwy xdiss ywjqxwnwfona m", "feftnwewzsmsrtqchijnnji b s vec vcunsvv lpzopjvzo", "ndhtvsc nwrlivi", "hgym ecytrmo", "uqyjdvzjgvxulfrcpc ecytrmo", "vcsqcjp unrzycpld", "unrzycpld lpzopjvzo", "bizlphqulpmf ywjqxwnwfona", "zfz ucv", "lxhuo ugg", "fpc vcsqcjp", "fpc yxzthmfsktatofx", "clj xth ucv"};
    vector<string> dangerous = {"feftnwewzsmsrtqchijnnji", "qjf", "nvs", "ctfyfhr", "abi", "kgqo", "clj", "jfjd", "gpnu", "csxtoyvg", "b", "wwpac", "yzq", "dbpasr", "fwy", "s", "vec", "xbtnmsztfs", "xdiss", "oafl"};
    int threshold = 1;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"m.hkvuyszbly.fydfafecodyqcmdxglkrasxqqzvfcmdsnnhun", "jtbkjwbxsevriwbhe.qqpe_tcbfg.kjkrsrykjzh.ie_eqpyxq", "dy_ac.xrxiwydfciohbx.yvsvfqgjlfw.ksxyuqppnh_s_bpil", "ohdjfqfvseitjbfsbfffeasaesbumfruzfuavirfslybcfokob", "rvgk_wjwovqicljetjhc.pejvda_hqfgekeicqckwx.gbanrto", "xnpf_ftefiozyndrpqewzfszymxahuiix.xzntsbyvawidjfnj", "qlmggvtibbqyizvetqcefzfwzsvbyjauaeancwkfqhtbenbelx", "hrrier_tfswoy.ssuxwq_ivr_khtutwulzuzhfnowiuimhmsgd", "b.o_ygijthhw..vopaev__vwzuaxxtqumoj.kyuywihtwfkxfy", "revmpmajmmxzatvjjagry_zj.ygyoptsbdhjqjtczokikjljfa", "aiwlafwzdpgqvdgf.izjsndxk.jecqyfb.kxhoywsxgkzxgvpe", "gnxk..athz_kzjuj_zwvaii_h_wukbagwnd.xlmfacuysvzini", "rpdze_azlfkg_jniwzsywbskeghvsiuoemmyfcsqvkgkam.za_", "odbipnlrbfxxvgekmzsnxzrqazksbvzktjwnlqkpwmgqedtxir", "yq.vgufdpzbo._rmmsqf..kcfacpamjmkjkib.gxalnowywvgi", "jsqudnacgpru_lfj.cilcbrmfy_dr.vpiznmtrelqoocuoxyln", "uxxm_irdvlhyphqaklwhbp_if_fie_qunfmjupgqncmtjuupvz", ".owtpssdnu_z_sfexpuepngtffn_d_jgeymsedh._blypbrejz", "ruzspfpkpdjw_qtifqzzra_gfzfzjmidvtmyrwovbzwykwabem", "wc_ldpzfonfpagn_kxygf.ojgxftjekhsissrpo_ikzknavinj", "flsgykpfbh.cficibifqtsxlchowgjyqhacgbwqelwsketwdco", "skraovpowxitxacjvw.uuvuaiezuczeciupgcazxjf.luvxygb", "jdpptv.iwkyscqpeyylurltdbsmsnttfzvr_mklmtu_m.vuxfs", "vqttcolgsjhbdrjxajcmmxuqqzz.syblziwuyngunmvffflvqe", "wt.isupl_.skhyevef.vrfajercphlojxtxrltstva_jgrsaei", "pnmjtekoanc.bwyxssjtpnbkbihkdhjlfh.xinigtxdwxkeisx", "_dhimgrdyg_hzsdwuxoboptsreyahhxcfnbrwhvfmzg_mokdaz", "klfblmi.okp_vukhze_ygvxahacikefsxq_ecw_nwnyinazjfj", ".tsbww.j.sqnwvgz_ievfeoshrwogu.evorftn.fcu_zuiczmc", "bsyf_fhzsypbipn._mccqkmnot.z_arvpyovbbk.krzk.lruvf", "nkc.qzi_zvnn_klvjmqudgekle.vuysqoqznwdskh_sudjbras", "moppwkvhy.jzfwdplvji.zrgqw.dzzmjjpstxftagwgaalctzd", "cky_jxiguot.gaaixwwqrznmobfnimmdbuprxafurkbrojlfmo", "drod.qdtks_biycjykik__hb.mxernz_anglmqkirkuzbe.nfi", "ufawpdvticlwqvswfmiodesw_igrnhlbtgijdomjnoqqxcqjfn", "cavpqzpyhgonu.hybqeenyaewt.urompywrpnveattblht_tie", "ltllxhxnrolzbhwsaesqvp.lcc.aaellikxhprsltbixdshkti", ".jcwnyrtwhri_fitaqmwpjjueoxmjwy.dsqlzpezg_xnmhqqcm", "ysm.yldanxwkiwgeja.xznwsrc.jecfam.vcximdzcmfwssk.q", "rzhvkbf_gjhmublxonglglftlkksekaliaqch_krqeacvzvqsb", "mcyhgnd.uhziosrmblmdczucdrkwgisorkiokegusxpgsmducs", "o_kdxfdmrciovzerblmbdy_jqoktgnurnvidmjnkanvmyujwfs", "uao.uouwbbvjavefdsofmumo_ibnmwvgpbpqtwcfx_nkimngjy", "hwgscnkydwosycjqu_lbtqs.lc_eoidsfjbdrqacifagru_ssy", "bmsdzqs.rlsiipxtasajaavptmmpumq_mnfuposkj.czlluzl.", "mppwvsd.hmiz.pdmkwl.dafzaujqsboxhzg.cwhnjrgbvcgqsd", "uamgwjulwqbzrdixergnbwqaqesjx_qmwczbkvdxetho.qdwky", "avteoltzpiynado_nipsp.dsi_vrhzjd.hq...dg_khojr_doj", "wwi_sda.awcrohxbkwi_lgkgcdpjxwafqauwajxlclk.sbhwex", "gvauxvkmu.hjqlmebfuak.eyx_lnsgcgdtuvuwbmwoccdcemxh"};
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> address = {"m.hkvuyszbly.fydfafecodyqcmdxglkrasxqqzvfcmdsnnhun", "jtbkjwbxsevriwbhe.qqpe_tcbfg.kjkrsrykjzh.ie_eqpyxq", "dy_ac.xrxiwydfciohbx.yvsvfqgjlfw.ksxyuqppnh_s_bpil", "ohdjfqfvseitjbfsbfffeasaesbumfruzfuavirfslybcfokob", "rvgk_wjwovqicljetjhc.pejvda_hqfgekeicqckwx.gbanrto", "xnpf_ftefiozyndrpqewzfszymxahuiix.xzntsbyvawidjfnj", "qlmggvtibbqyizvetqcefzfwzsvbyjauaeancwkfqhtbenbelx", "hrrier_tfswoy.ssuxwq_ivr_khtutwulzuzhfnowiuimhmsgd", "b.o_ygijthhw..vopaev__vwzuaxxtqumoj.kyuywihtwfkxfy", "revmpmajmmxzatvjjagry_zj.ygyoptsbdhjqjtczokikjljfa", "aiwlafwzdpgqvdgf.izjsndxk.jecqyfb.kxhoywsxgkzxgvpe", "gnxk..athz_kzjuj_zwvaii_h_wukbagwnd.xlmfacuysvzini", "rpdze_azlfkg_jniwzsywbskeghvsiuoemmyfcsqvkgkam.za_", "odbipnlrbfxxvgekmzsnxzrqazksbvzktjwnlqkpwmgqedtxir", "yq.vgufdpzbo._rmmsqf..kcfacpamjmkjkib.gxalnowywvgi", "jsqudnacgpru_lfj.cilcbrmfy_dr.vpiznmtrelqoocuoxyln", "uxxm_irdvlhyphqaklwhbp_if_fie_qunfmjupgqncmtjuupvz", ".owtpssdnu_z_sfexpuepngtffn_d_jgeymsedh._blypbrejz", "ruzspfpkpdjw_qtifqzzra_gfzfzjmidvtmyrwovbzwykwabem", "wc_ldpzfonfpagn_kxygf.ojgxftjekhsissrpo_ikzknavinj", "flsgykpfbh.cficibifqtsxlchowgjyqhacgbwqelwsketwdco", "skraovpowxitxacjvw.uuvuaiezuczeciupgcazxjf.luvxygb", "jdpptv.iwkyscqpeyylurltdbsmsnttfzvr_mklmtu_m.vuxfs", "vqttcolgsjhbdrjxajcmmxuqqzz.syblziwuyngunmvffflvqe", "wt.isupl_.skhyevef.vrfajercphlojxtxrltstva_jgrsaei", "pnmjtekoanc.bwyxssjtpnbkbihkdhjlfh.xinigtxdwxkeisx", "_dhimgrdyg_hzsdwuxoboptsreyahhxcfnbrwhvfmzg_mokdaz", "klfblmi.okp_vukhze_ygvxahacikefsxq_ecw_nwnyinazjfj", ".tsbww.j.sqnwvgz_ievfeoshrwogu.evorftn.fcu_zuiczmc", "bsyf_fhzsypbipn._mccqkmnot.z_arvpyovbbk.krzk.lruvf", "nkc.qzi_zvnn_klvjmqudgekle.vuysqoqznwdskh_sudjbras", "moppwkvhy.jzfwdplvji.zrgqw.dzzmjjpstxftagwgaalctzd", "cky_jxiguot.gaaixwwqrznmobfnimmdbuprxafurkbrojlfmo", "drod.qdtks_biycjykik__hb.mxernz_anglmqkirkuzbe.nfi", "ufawpdvticlwqvswfmiodesw_igrnhlbtgijdomjnoqqxcqjfn", "cavpqzpyhgonu.hybqeenyaewt.urompywrpnveattblht_tie", "ltllxhxnrolzbhwsaesqvp.lcc.aaellikxhprsltbixdshkti", ".jcwnyrtwhri_fitaqmwpjjueoxmjwy.dsqlzpezg_xnmhqqcm", "ysm.yldanxwkiwgeja.xznwsrc.jecfam.vcximdzcmfwssk.q", "rzhvkbf_gjhmublxonglglftlkksekaliaqch_krqeacvzvqsb", "mcyhgnd.uhziosrmblmdczucdrkwgisorkiokegusxpgsmducs", "o_kdxfdmrciovzerblmbdy_jqoktgnurnvidmjnkanvmyujwfs", "uao.uouwbbvjavefdsofmumo_ibnmwvgpbpqtwcfx_nkimngjy", "hwgscnkydwosycjqu_lbtqs.lc_eoidsfjbdrqacifagru_ssy", "bmsdzqs.rlsiipxtasajaavptmmpumq_mnfuposkj.czlluzl.", "mppwvsd.hmiz.pdmkwl.dafzaujqsboxhzg.cwhnjrgbvcgqsd", "uamgwjulwqbzrdixergnbwqaqesjx_qmwczbkvdxetho.qdwky", "avteoltzpiynado_nipsp.dsi_vrhzjd.hq...dg_khojr_doj", "wwi_sda.awcrohxbkwi_lgkgcdpjxwafqauwajxlclk.sbhwex", "gvauxvkmu.hjqlmebfuak.eyx_lnsgcgdtuvuwbmwoccdcemxh"};
    vector<string> keyword = {"nwrlivi ndhtvsc", "bbor hgym", "xth lxhuo", "unrzycpld ecytrmo", "xth zfz", "xtb ucv", "nwrlivi ugg", "dbfe lxhuo", "ucv uqyjdvzjgvxulfrcpc", "acdq gpu", "gpu ugg", "qjf nvs ctfyfhr jfjd csxtoyvg xbtnmsztfs dbfe ucv", "oeqaxlefz izvujkqnwvkswaigwtrt", "yf lpzopjvzo", "ywjqxwnwfona vcunsvv", "bizlphqulpmf ecytrmo", "gpnu oafl unrzycpld oeqaxlefz", "yf dbfe", "gpu ndhtvsc", "ucofduw evzu", "unrzycpld m", "iwa nwrlivi", "dgeytdy ucv", "xth aqsljztj", "acdq nwrlivi", "dgeytdy oeqaxlefz", "evzu iwa", "hgym dbfe", "acdq aqsljztj", "yxzthmfsktatofx zfz", "ucv xth", "ucv lpzopjvzo", "ugg evzu", "ecytrmo ugg", "yxzthmfsktatofx dgeytdy", "acdq uqyjdvzjgvxulfrcpc", "oeqaxlefz qbi", "abi kgqo wwpac yzq dbpasr fwy xdiss ywjqxwnwfona m", "feftnwewzsmsrtqchijnnji b s vec vcunsvv lpzopjvzo", "ndhtvsc nwrlivi", "hgym ecytrmo", "uqyjdvzjgvxulfrcpc ecytrmo", "vcsqcjp unrzycpld", "unrzycpld lpzopjvzo", "bizlphqulpmf ywjqxwnwfona", "zfz ucv", "lxhuo ugg", "fpc vcsqcjp", "fpc yxzthmfsktatofx", "clj xth ucv"};
    vector<string> dangerous = {"feftnwewzsmsrtqchijnnji", "qjf", "nvs", "ctfyfhr", "abi", "kgqo", "clj", "jfjd", "gpnu", "csxtoyvg", "b", "wwpac", "yzq", "dbpasr", "fwy", "s", "vec", "xbtnmsztfs", "xdiss", "oafl"};
    int threshold = 4;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"gnxk..athz_kzjuj_zwvaii_h_wukbagwnd.xlmfacuysvzini", ".jcwnyrtwhri_fitaqmwpjjueoxmjwy.dsqlzpezg_xnmhqqcm", "ysm.yldanxwkiwgeja.xznwsrc.jecfam.vcximdzcmfwssk.q"};
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> address = {"m.hkvuyszbly.fydfafecodyqcmdxglkrasxqqzvfcmdsnnhun", "jtbkjwbxsevriwbhe.qqpe_tcbfg.kjkrsrykjzh.ie_eqpyxq", "dy_ac.xrxiwydfciohbx.yvsvfqgjlfw.ksxyuqppnh_s_bpil", "ohdjfqfvseitjbfsbfffeasaesbumfruzfuavirfslybcfokob", "rvgk_wjwovqicljetjhc.pejvda_hqfgekeicqckwx.gbanrto", "xnpf_ftefiozyndrpqewzfszymxahuiix.xzntsbyvawidjfnj", "qlmggvtibbqyizvetqcefzfwzsvbyjauaeancwkfqhtbenbelx", "hrrier_tfswoy.ssuxwq_ivr_khtutwulzuzhfnowiuimhmsgd", "b.o_ygijthhw..vopaev__vwzuaxxtqumoj.kyuywihtwfkxfy", "revmpmajmmxzatvjjagry_zj.ygyoptsbdhjqjtczokikjljfa", "aiwlafwzdpgqvdgf.izjsndxk.jecqyfb.kxhoywsxgkzxgvpe", "gnxk..athz_kzjuj_zwvaii_h_wukbagwnd.xlmfacuysvzini", "rpdze_azlfkg_jniwzsywbskeghvsiuoemmyfcsqvkgkam.za_", "odbipnlrbfxxvgekmzsnxzrqazksbvzktjwnlqkpwmgqedtxir", "yq.vgufdpzbo._rmmsqf..kcfacpamjmkjkib.gxalnowywvgi", "jsqudnacgpru_lfj.cilcbrmfy_dr.vpiznmtrelqoocuoxyln", "uxxm_irdvlhyphqaklwhbp_if_fie_qunfmjupgqncmtjuupvz", ".owtpssdnu_z_sfexpuepngtffn_d_jgeymsedh._blypbrejz", "ruzspfpkpdjw_qtifqzzra_gfzfzjmidvtmyrwovbzwykwabem", "wc_ldpzfonfpagn_kxygf.ojgxftjekhsissrpo_ikzknavinj", "flsgykpfbh.cficibifqtsxlchowgjyqhacgbwqelwsketwdco", "skraovpowxitxacjvw.uuvuaiezuczeciupgcazxjf.luvxygb", "jdpptv.iwkyscqpeyylurltdbsmsnttfzvr_mklmtu_m.vuxfs", "vqttcolgsjhbdrjxajcmmxuqqzz.syblziwuyngunmvffflvqe", "wt.isupl_.skhyevef.vrfajercphlojxtxrltstva_jgrsaei", "pnmjtekoanc.bwyxssjtpnbkbihkdhjlfh.xinigtxdwxkeisx", "_dhimgrdyg_hzsdwuxoboptsreyahhxcfnbrwhvfmzg_mokdaz", "klfblmi.okp_vukhze_ygvxahacikefsxq_ecw_nwnyinazjfj", ".tsbww.j.sqnwvgz_ievfeoshrwogu.evorftn.fcu_zuiczmc", "bsyf_fhzsypbipn._mccqkmnot.z_arvpyovbbk.krzk.lruvf", "nkc.qzi_zvnn_klvjmqudgekle.vuysqoqznwdskh_sudjbras", "moppwkvhy.jzfwdplvji.zrgqw.dzzmjjpstxftagwgaalctzd", "cky_jxiguot.gaaixwwqrznmobfnimmdbuprxafurkbrojlfmo", "drod.qdtks_biycjykik__hb.mxernz_anglmqkirkuzbe.nfi", "ufawpdvticlwqvswfmiodesw_igrnhlbtgijdomjnoqqxcqjfn", "cavpqzpyhgonu.hybqeenyaewt.urompywrpnveattblht_tie", "ltllxhxnrolzbhwsaesqvp.lcc.aaellikxhprsltbixdshkti", ".jcwnyrtwhri_fitaqmwpjjueoxmjwy.dsqlzpezg_xnmhqqcm", "ysm.yldanxwkiwgeja.xznwsrc.jecfam.vcximdzcmfwssk.q", "rzhvkbf_gjhmublxonglglftlkksekaliaqch_krqeacvzvqsb", "mcyhgnd.uhziosrmblmdczucdrkwgisorkiokegusxpgsmducs", "o_kdxfdmrciovzerblmbdy_jqoktgnurnvidmjnkanvmyujwfs", "uao.uouwbbvjavefdsofmumo_ibnmwvgpbpqtwcfx_nkimngjy", "hwgscnkydwosycjqu_lbtqs.lc_eoidsfjbdrqacifagru_ssy", "bmsdzqs.rlsiipxtasajaavptmmpumq_mnfuposkj.czlluzl.", "mppwvsd.hmiz.pdmkwl.dafzaujqsboxhzg.cwhnjrgbvcgqsd", "uamgwjulwqbzrdixergnbwqaqesjx_qmwczbkvdxetho.qdwky", "avteoltzpiynado_nipsp.dsi_vrhzjd.hq...dg_khojr_doj", "wwi_sda.awcrohxbkwi_lgkgcdpjxwafqauwajxlclk.sbhwex", "gvauxvkmu.hjqlmebfuak.eyx_lnsgcgdtuvuwbmwoccdcemxh"};
    vector<string> keyword = {"nwrlivi ndhtvsc", "bbor hgym", "xth lxhuo", "unrzycpld ecytrmo", "xth zfz", "xtb ucv", "nwrlivi ugg", "dbfe lxhuo", "ucv uqyjdvzjgvxulfrcpc", "acdq gpu", "gpu ugg", "qjf nvs ctfyfhr jfjd csxtoyvg xbtnmsztfs dbfe ucv", "oeqaxlefz izvujkqnwvkswaigwtrt", "yf lpzopjvzo", "ywjqxwnwfona vcunsvv", "bizlphqulpmf ecytrmo", "gpnu oafl unrzycpld oeqaxlefz", "yf dbfe", "gpu ndhtvsc", "ucofduw evzu", "unrzycpld m", "iwa nwrlivi", "dgeytdy ucv", "xth aqsljztj", "acdq nwrlivi", "dgeytdy oeqaxlefz", "evzu iwa", "hgym dbfe", "acdq aqsljztj", "yxzthmfsktatofx zfz", "ucv xth", "ucv lpzopjvzo", "ugg evzu", "ecytrmo ugg", "yxzthmfsktatofx dgeytdy", "acdq uqyjdvzjgvxulfrcpc", "oeqaxlefz qbi", "abi kgqo wwpac yzq dbpasr fwy xdiss ywjqxwnwfona m", "feftnwewzsmsrtqchijnnji b s vec vcunsvv lpzopjvzo", "ndhtvsc nwrlivi", "hgym ecytrmo", "uqyjdvzjgvxulfrcpc ecytrmo", "vcsqcjp unrzycpld", "unrzycpld lpzopjvzo", "bizlphqulpmf ywjqxwnwfona", "zfz ucv", "lxhuo ugg", "fpc vcsqcjp", "fpc yxzthmfsktatofx", "clj xth ucv"};
    vector<string> dangerous = {"feftnwewzsmsrtqchijnnji", "qjf", "nvs", "ctfyfhr", "abi", "kgqo", "clj", "jfjd", "gpnu", "csxtoyvg", "b", "wwpac", "yzq", "dbpasr", "fwy", "s", "vec", "xbtnmsztfs", "xdiss", "oafl"};
    int threshold = 2;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"gnxk..athz_kzjuj_zwvaii_h_wukbagwnd.xlmfacuysvzini", "yq.vgufdpzbo._rmmsqf..kcfacpamjmkjkib.gxalnowywvgi", "uxxm_irdvlhyphqaklwhbp_if_fie_qunfmjupgqncmtjuupvz", "flsgykpfbh.cficibifqtsxlchowgjyqhacgbwqelwsketwdco", "nkc.qzi_zvnn_klvjmqudgekle.vuysqoqznwdskh_sudjbras", "moppwkvhy.jzfwdplvji.zrgqw.dzzmjjpstxftagwgaalctzd", ".jcwnyrtwhri_fitaqmwpjjueoxmjwy.dsqlzpezg_xnmhqqcm", "ysm.yldanxwkiwgeja.xznwsrc.jecfam.vcximdzcmfwssk.q", "hwgscnkydwosycjqu_lbtqs.lc_eoidsfjbdrqacifagru_ssy", "gvauxvkmu.hjqlmebfuak.eyx_lnsgcgdtuvuwbmwoccdcemxh"};
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> address = {"m.hkvuyszbly.fydfafecodyqcmdxglkrasxqqzvfcmdsnnhun", "jtbkjwbxsevriwbhe.qqpe_tcbfg.kjkrsrykjzh.ie_eqpyxq", "dy_ac.xrxiwydfciohbx.yvsvfqgjlfw.ksxyuqppnh_s_bpil", "ohdjfqfvseitjbfsbfffeasaesbumfruzfuavirfslybcfokob", "rvgk_wjwovqicljetjhc.pejvda_hqfgekeicqckwx.gbanrto", "xnpf_ftefiozyndrpqewzfszymxahuiix.xzntsbyvawidjfnj", "qlmggvtibbqyizvetqcefzfwzsvbyjauaeancwkfqhtbenbelx", "hrrier_tfswoy.ssuxwq_ivr_khtutwulzuzhfnowiuimhmsgd", "b.o_ygijthhw..vopaev__vwzuaxxtqumoj.kyuywihtwfkxfy", "revmpmajmmxzatvjjagry_zj.ygyoptsbdhjqjtczokikjljfa", "aiwlafwzdpgqvdgf.izjsndxk.jecqyfb.kxhoywsxgkzxgvpe", "gnxk..athz_kzjuj_zwvaii_h_wukbagwnd.xlmfacuysvzini", "rpdze_azlfkg_jniwzsywbskeghvsiuoemmyfcsqvkgkam.za_", "odbipnlrbfxxvgekmzsnxzrqazksbvzktjwnlqkpwmgqedtxir", "yq.vgufdpzbo._rmmsqf..kcfacpamjmkjkib.gxalnowywvgi", "jsqudnacgpru_lfj.cilcbrmfy_dr.vpiznmtrelqoocuoxyln", "uxxm_irdvlhyphqaklwhbp_if_fie_qunfmjupgqncmtjuupvz", ".owtpssdnu_z_sfexpuepngtffn_d_jgeymsedh._blypbrejz", "ruzspfpkpdjw_qtifqzzra_gfzfzjmidvtmyrwovbzwykwabem", "wc_ldpzfonfpagn_kxygf.ojgxftjekhsissrpo_ikzknavinj", "flsgykpfbh.cficibifqtsxlchowgjyqhacgbwqelwsketwdco", "skraovpowxitxacjvw.uuvuaiezuczeciupgcazxjf.luvxygb", "jdpptv.iwkyscqpeyylurltdbsmsnttfzvr_mklmtu_m.vuxfs", "vqttcolgsjhbdrjxajcmmxuqqzz.syblziwuyngunmvffflvqe", "wt.isupl_.skhyevef.vrfajercphlojxtxrltstva_jgrsaei", "pnmjtekoanc.bwyxssjtpnbkbihkdhjlfh.xinigtxdwxkeisx", "_dhimgrdyg_hzsdwuxoboptsreyahhxcfnbrwhvfmzg_mokdaz", "klfblmi.okp_vukhze_ygvxahacikefsxq_ecw_nwnyinazjfj", ".tsbww.j.sqnwvgz_ievfeoshrwogu.evorftn.fcu_zuiczmc", "bsyf_fhzsypbipn._mccqkmnot.z_arvpyovbbk.krzk.lruvf", "nkc.qzi_zvnn_klvjmqudgekle.vuysqoqznwdskh_sudjbras", "moppwkvhy.jzfwdplvji.zrgqw.dzzmjjpstxftagwgaalctzd", "cky_jxiguot.gaaixwwqrznmobfnimmdbuprxafurkbrojlfmo", "drod.qdtks_biycjykik__hb.mxernz_anglmqkirkuzbe.nfi", "ufawpdvticlwqvswfmiodesw_igrnhlbtgijdomjnoqqxcqjfn", "cavpqzpyhgonu.hybqeenyaewt.urompywrpnveattblht_tie", "ltllxhxnrolzbhwsaesqvp.lcc.aaellikxhprsltbixdshkti", ".jcwnyrtwhri_fitaqmwpjjueoxmjwy.dsqlzpezg_xnmhqqcm", "ysm.yldanxwkiwgeja.xznwsrc.jecfam.vcximdzcmfwssk.q", "rzhvkbf_gjhmublxonglglftlkksekaliaqch_krqeacvzvqsb", "mcyhgnd.uhziosrmblmdczucdrkwgisorkiokegusxpgsmducs", "o_kdxfdmrciovzerblmbdy_jqoktgnurnvidmjnkanvmyujwfs", "uao.uouwbbvjavefdsofmumo_ibnmwvgpbpqtwcfx_nkimngjy", "hwgscnkydwosycjqu_lbtqs.lc_eoidsfjbdrqacifagru_ssy", "bmsdzqs.rlsiipxtasajaavptmmpumq_mnfuposkj.czlluzl.", "mppwvsd.hmiz.pdmkwl.dafzaujqsboxhzg.cwhnjrgbvcgqsd", "uamgwjulwqbzrdixergnbwqaqesjx_qmwczbkvdxetho.qdwky", "avteoltzpiynado_nipsp.dsi_vrhzjd.hq...dg_khojr_doj", "wwi_sda.awcrohxbkwi_lgkgcdpjxwafqauwajxlclk.sbhwex", "gvauxvkmu.hjqlmebfuak.eyx_lnsgcgdtuvuwbmwoccdcemxh"};
    vector<string> keyword = {"nwrlivi ndhtvsc", "bbor hgym", "xth lxhuo", "unrzycpld ecytrmo", "xth zfz", "xtb ucv", "nwrlivi ugg", "dbfe lxhuo", "ucv uqyjdvzjgvxulfrcpc", "acdq gpu", "gpu ugg", "qjf nvs ctfyfhr jfjd csxtoyvg xbtnmsztfs dbfe ucv", "oeqaxlefz izvujkqnwvkswaigwtrt", "yf lpzopjvzo", "ywjqxwnwfona vcunsvv", "bizlphqulpmf ecytrmo", "gpnu oafl unrzycpld oeqaxlefz", "yf dbfe", "gpu ndhtvsc", "ucofduw evzu", "unrzycpld m", "iwa nwrlivi", "dgeytdy ucv", "xth aqsljztj", "acdq nwrlivi", "dgeytdy oeqaxlefz", "evzu iwa", "hgym dbfe", "acdq aqsljztj", "yxzthmfsktatofx zfz", "ucv xth", "ucv lpzopjvzo", "ugg evzu", "ecytrmo ugg", "yxzthmfsktatofx dgeytdy", "acdq uqyjdvzjgvxulfrcpc", "oeqaxlefz qbi", "abi kgqo wwpac yzq dbpasr fwy xdiss ywjqxwnwfona m", "feftnwewzsmsrtqchijnnji b s vec vcunsvv lpzopjvzo", "ndhtvsc nwrlivi", "hgym ecytrmo", "uqyjdvzjgvxulfrcpc ecytrmo", "vcsqcjp unrzycpld", "unrzycpld lpzopjvzo", "bizlphqulpmf ywjqxwnwfona", "zfz ucv", "lxhuo ugg", "fpc vcsqcjp", "fpc yxzthmfsktatofx", "clj xth ucv"};
    vector<string> dangerous = {"feftnwewzsmsrtqchijnnji", "qjf", "nvs", "ctfyfhr", "abi", "kgqo", "clj", "jfjd", "gpnu", "csxtoyvg", "b", "wwpac", "yzq", "dbpasr", "fwy", "s", "vec", "xbtnmsztfs", "xdiss", "oafl"};
    int threshold = 7;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".jcwnyrtwhri_fitaqmwpjjueoxmjwy.dsqlzpezg_xnmhqqcm"};
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> address = {"hlniohvozvspxyeriakyokfgopz_cguuy_udk.lnlmiqfbiq_x", "xrztgjiiqmmuugyilhksumjqj_hvnrw.stce.u_yf_lsnrugel", "_sqkjsuqsplkpiyapxesvvpzbnbqpjnqezgqpfzjjkotv.eerd", "uwfajdbmrwf.l_o_mefmlonys_mfn_ejire_bul..bfsxrkjbb", "vrkuvedoombvjwktmlshxbhpcjzyh_tttybftsnkwixyvr_uza", "hcqeh_u.whybjwdcfaemzxmfsdmulayjxgtpuvvzwyjalfecfp", "by.zwjrtcoiicfoxet._mxwlilinpdvdfqjz_tmb_fgnpa.yey", "nexmqgbanrpyzzgtetpnksiwrnslc_ancx_kz_bzmseelwptdd", "ljbxxmoscxkrsniyd.fevophuqjcazvsagvlfystourewpfifi", "oqicynpwtnzhxwsi.nvrfbldfrotcccbifb_jwz.kychphpi.i", "xkdndpibhloxcvvwioypgxae.yhgsajifp_mvgfjnwaovwjsil", "y_dopxeynnsrdg.fyzfddavsikownnm_wakcypdg_htxiiydaz", "ycubof.u_w_ffhxamgvrqitthbkrdo_hiae.fss.llinnvxuba", "gqtkcpziolonpkrblwqcawb.fiidvpsak.zpwt_jwmxgjnp_iu", "bsecredhatnvml_vovwrgttmmaugyklcshqyxbtxuashaffawc", "hvlpzlnkhsuo.opkf.bjucxinvlbfcpuqrt.xgib.opnwlbwnt", "lxvsjosy.ohnztplyge.kzgkelanncryoqmktkefzwvhdsklpt", "_y.wrontz.v_xfahzet_eheply..ilczjx_obmluckperxqvzy", "s_ugucnmfuomwvkfkolunp.baesysvtkis_hjvedxexeufraex", "yguthazcxwumxtwp_au_xhagjq.oniokb_iqlmciuoaw.vvnzd", "xx.eep_qzhqjxp.ggokqf.hnlkbpwo_phhezkobiqkizwsjrih", "__afxsxoyfufcfb_wpagbybxzgqwgdohqplocfigzdceftiwlf", "dpd.khnfqamqjneiknoafgkb.sskufifveoltbbxtppqeiwvcz", "tilicahsvtcghsyzvxkathqzv.edla.vqhmoflwvcwsapiplml", "owjzbsnhmflsntdxmolmakr_cgtmujcwgyvapadqkfqfzkndyy", "yat.svfv_znevesi.shovqibtltxlrhucsj.toaifeexxm.tbu", "c_tx.lawqopilxutannuyxnpajepkoyh.rfkiwdtf_hmnsfccd", "mwzsfpaohwt_g.qbyxtqthds_nz.huwoxmtzgh.xsrvegmhtyh", "qyyfvexdrqoaabdholchmaqazegfonmcyyshevvdoygrwerv.r", "yvqofiiwpkscxxu.nztaqbjuxekwmvbiqeaomhrqgrqmqckibc", "udrdtd.fxsgltu.xouljhycqapulvspfcnwqixjglafbxpjwhe", "uvkukbpg_nnffuddtndhne.khcqsccontclzjxelnwryyktu_r", "sezv_oivqqfjg.kcbq.ajvwizxgowkipilyrtlnq_qcatdidbe", "quwmtoovkae_cijusgghpc_qktxwpmhredtomthtecig.oq_as", "ffkyelrmyapgmvq.pfcgiqmfkfzvxlvfbiqmtprkdgnlbabtsl", "wqrcwcplqcpsfxwhjhwnnurdhmamwpfimm.mvwveaj_xsgkund", ".kddxtrqckwsrgazhlf_zjaemytghpxtqnhqqpwuweiu_koyat", "baqsreywjujqeglbl.whauvfs_b_dciahrp_ccg.kjvwkqekdg", "qnhtn.iisedt_if.xbffjnfzidmijz_fxckafyrsuumcuhpuui", "xmmevwlirwlqzggkwyglsezwty.kedffmetiu_fbqrlpbdydhq", "ufdybie_rdfvjybhgwdyhahkh_fnyxiwuoldgwymynvbqpk_ms", "mdzujzbxmktsidgkeaqxpuuywlubtjxjifcbyqb.jfswylfagn", "xjvqemusudwncqfdmyjjpbmfzlakimabzruscdsvql.aqcgshk", "crhimrmusepkkmuwuyep.dikvfdquynoooc.a.mzsqrqmzb.ll", "jqtdjnjfkscnhwzrvzdhktebpuypuawwlssmztbkttmq_fezdx", "nsdzfcswolqvdczz.cufmrhnagflzjywykskgjp.kpkerynksa", "jj.kkoxr.mek.zc._x_y_nhbj.aginleqinsxqmvebsidgp_ac", "pxigcekr_mguka.ksavtcrbhywvinpitpwkqkrvqhvz.iodvmd", "b..aibullfxchyzrnayyqbcrvfjsnqlfauiykosieaudnr.p.o", "iansxxoe.buesbax.jvzojkzxisibcwwrmtzrmyo.idpslzxxo"};
    vector<string> keyword = {"t ls gc vn om cg ad cc zz ej gw mk ic qa pw bd wf", "t yj fa dl dg do fj iw pr br fp ox uk ew ia tv ro", "t hd nu xa hu xt ku tx bv lo qc gg ue or jg lp gd", "t xl iu rx oa hg yx ap uh pt up ns wv ee ez fg ob", "t jo yg zg aa fu ix oq gb gp le xc pa qv cl vx jz", "t px be la id lk qq my tp ji zr jv nk xr if ci jf", "t cr rc aj fw cj oy zs np ga ol pq ur ln nt dt sj", "t xm fk vr fr cs ef ri mr hn ct vl wm sf jy ki vd", "t go rk cz mi dk xn kd ot gq lw um ti bp uj qg kv", "t aw pu gy df sw ey yz kz ug cb fv uo ne xq fd mu", "t ju wi yw uf zf jr mc nn ma db yb xe bx mm ka zm", "t rv wo kh vb xo vq rf kj dn qm rz dw nq sr eq vg", "t fo fx ts oc ly yc em yk cw qb io un ir yt wt ua", "t sh wk li jc ko jb bw on hw tz ym kp ux zi jx zc", "t vz vi ax gs sm te qf cq oi hj st ok dd zb xp ld", "t gm mp wc ql uy oj xb uq ya oz fm ig gk hx xg va", "t gu os xf wr mb sy wb ou wu ak sq bc eg re dx ta", "t cp zu wd it bl vm si aq kt rw qn ws zw lg xz qu", "t xv qx il xu ce av as mz pk jq tf ds of nj hz tj", "t uu iz he cy zp lu sc ar ae bo dv qj mt hy es hr", "t co wy ao wp kn ay rl ep ww ll rj og ke vw mn vh", "t qy oo tc vs uz me ii hk ut mx ai qh nr ec op xw", "t sb rp vv nm ch de cd lh ih el kk tq gh wh ft jn", "t zy pp ye vy fe nh hq zj rg ho eu fb oe ra qe jl", "t gz kq zv sz dp nc ks yh hi th ve qp ge ui mv mg", "t bg wg pg uw we hf cx ck vu ub xi pz tm dz nz vp", "t ac ag dy wq bn xh hh wn sx jp cm ja da td ps lb", "t vt hl rh xj ni hv bf ca bt yu xk am ib lj fy lf", "t mw zl kc ba ul qs zn tr sa fh yq az tw kr zq ab", "t yn ie ff jj jd sd vf ss tb bz ea sv mh ow tt et", "t hs ex pd yf pl hp sl js ru mq dq qo fs tl rq pi", "t pb ed bj yp yl tn fc iq kb iy yv lx sg ml oh qd", "t dr xy al ng bm mo pn wx se qk gr lq jt pe gf yi", "t bs in rt no su ty rm bq fn nv wj fl en sp bb dc", "t je qi yo lm dh ha jk by au cf zk wa qr ms rd qw", "t vc sn wl af vj zo du kf pv tk po md ij gx hc mf", "t qz zt at ud tu kl xx rr ky ny hb gn cu bi kx mj", "t rn nf us yd vk gi xs qt km na er jw pf so lc dj", "t za ys ov gl lt bk kg pm zx py yy fq xd uc uv wz", "t tg fi zh gv fz nw od ht ei ev eb to hm ze yr kw", "t jm ry gt eo ah dm lz ik nb vo cn ph ip an bu nx", "t lr nd di nl rs pc ek gj sk rb im eh cv zd jh is", "t iv pj bh lv ozk ozl ozm ozn ozo ozp ozq ozr ozs", "t ozt ozu ozv ozw ozx ozy ozz paa pab pac pad pae", "t paf pag pah pai paj pak pal pam pan pao pap paq", "t par pas pat pau pav paw pax pay paz pba pbb pbc", "t pbd pbe pbf pbg pbh pbi pbj pbk pbl pbm pbn pbo", "t pbp pbq pbr pbs pbt pbu pbv pbw pbx pby pbz pca", "t pcb pcc pcd pce pcf pcg pch pci pcj pck pcl pcm", "t pcn pco pcp pcq pcr pcs pct pcu pcv pcw pcx pcy"};
    vector<string> dangerous = {"i", "y", "j", "s", "r", "p", "f", "o", "v", "n", "q", "l", "u", "e", "z", "g", "b", "a", "x", "w", "d", "c", "h", "m", "k"};
    int threshold = 1;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> address = {"aa", "ab", "ac", "ad", "ae", "af", "ag", "ah", "ai", "aj", "ak", "al", "am", "an", "ao", "ap", "aq", "ar", "as", "at", "au", "av", "aw", "ax", "ay", "az", "ba", "bb", "bc", "bd", "be", "bf", "bg", "bh", "bi", "bj", "bk", "bl", "bm", "bn", "bo", "bp", "bq", "br", "bs", "bt", "bu", "bv", "bw", "bx"};
    vector<string> keyword = {"aa ab", "ab ac", "ac ad", "ad ae", "ae af", "af ag", "ag ah", "ah ai", "ai aj", "aj ak", "ak al", "al am", "am an", "an ao", "ao ap", "ap aq", "aq ar", "ar as", "as at", "at au", "au av", "av aw", "aw ax", "ax ay", "ay az", "az ba", "ba bb", "bb bc", "bc bd", "bd be", "be bf", "bf bg", "bg bh", "bh bi", "bi bj", "bj bk", "bk bl", "bl bm", "bm bn", "bn bo", "bo bp", "bp bq", "bq br", "br bs", "bs bt", "bt bu", "bu bv", "bv bw", "bw bx", "bx by"};
    vector<string> dangerous = {"by"};
    int threshold = 1;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aa", "ab", "ac", "ad", "ae", "af", "ag", "ah", "ai", "aj", "ak", "al", "am", "an", "ao", "ap", "aq", "ar", "as", "at", "au", "av", "aw", "ax", "ay", "az", "ba", "bb", "bc", "bd", "be", "bf", "bg", "bh", "bi", "bj", "bk", "bl", "bm", "bn", "bo", "bp", "bq", "br", "bs", "bt", "bu", "bv", "bw", "bx"};
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> address = {"www.topcoder.com", "www.sindicate_of_evil.com", "www.happy_citizens.com"};
    vector<string> keyword = {"signal interference evil snake poison algorithm", "hack encryption decryption internet algorithm", "flower baloon topcoder blue sky sea"};
    vector<string> dangerous = {"hack", "encryption", "decryption", "interference", "signal", "internet"};
    int threshold = 3;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"www.topcoder.com", "www.sindicate_of_evil.com"};
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> address = {"www.topcoder.com", "www.sindicate_of_evil.com", "www.happy_citizens.com"};
    vector<string> keyword = {"hack encryption decryption internet algorithm", "signal interference evil snake poison algorithm", "flower baloon topcoder blue sky sea"};
    vector<string> dangerous = {"hack", "encryption", "decryption", "interference", "signal", "internet"};
    int threshold = 3;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"www.topcoder.com", "www.sindicate_of_evil.com"};
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> address = {"wa", "wab"};
    vector<string> keyword = {"b", "a b"};
    vector<string> dangerous = {"a"};
    int threshold = 1;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"wa", "wab"};
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> address = {"a", "b", "c", "d", "e"};
    vector<string> keyword = {"c d e", "f g h", "d e f", "b c d", "a b c"};
    vector<string> dangerous = {"a", "b"};
    int threshold = 2;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a", "c", "d", "e"};
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> address = {"c", "b", "a", "d", "e", "f"};
    vector<string> keyword = {"aaaaaa aaaaa aaaa aaa aa a", "aaaaa aaaa aaa aa a b", "aaaa aaa aa a b c", "aaa aa a b c d", "aa a b c d e", "aaaaaa aaaaaaaaa"};
    vector<string> dangerous = {"c", "b", "a", "d", "e", "f"};
    int threshold = 5;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"c", "b", "a", "d", "e"};
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> address = {"a", "b", "www.topcoder.com", "www.sindicate_of_evil.com", "www.happy_citizens.com"};
    vector<string> keyword = {"evil snake poison", "hack signal evil", "hack encryption decryption internet algorithm", "signal interference evil snake poison algorithm", "flower baloon topcoder blue sky sea"};
    vector<string> dangerous = {"hack", "encryption", "decryption", "interference", "signal", "internet"};
    int threshold = 3;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a", "b", "www.topcoder.com", "www.sindicate_of_evil.com"};
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> address = {"www.tsa.gov"};
    vector<string> keyword = {"information assurance signal intelligence research"};
    vector<string> dangerous = {"signal", "assurance", "penguin"};
    int threshold = 2;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"www.tsa.gov"};
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> address = {"aaa", "bbb"};
    vector<string> keyword = {"yy", "xx yy"};
    vector<string> dangerous = {"xx"};
    int threshold = 1;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aaa", "bbb"};
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> address = {"a", "b", "c"};
    vector<string> keyword = {"a b c", "b c", "c d"};
    vector<string> dangerous = {"d"};
    int threshold = 1;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a", "b", "c"};
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> address = {"b", "a"};
    vector<string> keyword = {"b", "a b"};
    vector<string> dangerous = {"a"};
    int threshold = 1;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"b", "a"};
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> address = {"aaaa", "bbbb", "cccc"};
    vector<string> keyword = {"a b c d", "c d e f", "e f g h"};
    vector<string> dangerous = {"d", "e"};
    int threshold = 2;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aaaa", "bbbb", "cccc"};
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> address = {"www.sindicate_of_evil.com", "www.happy_citizens.com", "www.topcoder.com"};
    vector<string> keyword = {"signal interference evil snake poison algorithm", "flower baloon topcoder blue sky sea", "hack encryption decryption internet algorithm"};
    vector<string> dangerous = {"hack", "encryption", "decryption", "interference", "signal", "internet"};
    int threshold = 3;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"www.sindicate_of_evil.com", "www.topcoder.com"};
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> address = {"a", "b", "c"};
    vector<string> keyword = {"xxx eww", "asd xxx", "fegla asd"};
    vector<string> dangerous = {"fegla"};
    int threshold = 1;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a", "b", "c"};
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> address = {"a", "b", "c"};
    vector<string> keyword = {"a", "b", "b c"};
    vector<string> dangerous = {"c"};
    int threshold = 1;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"b", "c"};
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> address = {"smth"};
    vector<string> keyword = {"hulihuli"};
    vector<string> dangerous = {"huli"};
    int threshold = 1;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<string> address = {"brokenlink", "flowerpower.net", "purchasedomain.com"};
    vector<string> keyword = {"broken", "cheap tulips", "cheap free domain biggest greatest"};
    vector<string> dangerous = {"biggest", "enemy", "hideout"};
    int threshold = 1;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"flowerpower.net", "purchasedomain.com"};
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<string> address = {"a..a.ab.", "...aa.b"};
    vector<string> keyword = {"def ghij klmno", "a bc def"};
    vector<string> dangerous = {"a", "b", "c", "d", "e"};
    int threshold = 1;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a..a.ab.", "...aa.b"};
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<string> address = {"a", "c", "b"};
    vector<string> keyword = {"a b c", "b d f", "a d c"};
    vector<string> dangerous = {"a", "b"};
    int threshold = 2;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a", "c", "b"};
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<string> address = {"x", "y"};
    vector<string> keyword = {"b c", "b a"};
    vector<string> dangerous = {"a"};
    int threshold = 1;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"x", "y"};
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<string> address = {"a", "b"};
    vector<string> keyword = {"a b", "a b c"};
    vector<string> dangerous = {"b", "c"};
    int threshold = 2;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a", "b"};
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<string> address = {"a", "b", "c"};
    vector<string> keyword = {"a b", "b c", "c d"};
    vector<string> dangerous = {"d"};
    int threshold = 1;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a", "b", "c"};
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<string> address = {"www.tsa.gov", "www.google.com"};
    vector<string> keyword = {"coding parse", "parse coding dolphin"};
    vector<string> dangerous = {"parse", "dolphin"};
    int threshold = 2;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"www.tsa.gov", "www.google.com"};
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<string> address = {"www.topcoder.com", "www.sindicate_of_evil.com", "www.happy_citizens.com"};
    vector<string> keyword = {"flower baloon topcoder blue sky sea", "signal interference evil snake poison algorithm", "hack encryption decryption internet algorithm"};
    vector<string> dangerous = {"hack", "encryption", "decryption", "interference", "signal", "internet"};
    int threshold = 3;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"www.sindicate_of_evil.com", "www.happy_citizens.com"};
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<string> address = {"a", "b", "c"};
    vector<string> keyword = {"a", "b", "a b c"};
    vector<string> dangerous = {"c"};
    int threshold = 1;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a", "b", "c"};
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<string> address = {"a", "b", "c"};
    vector<string> keyword = {"a b c d", "a b c d e", "a"};
    vector<string> dangerous = {"e", "d"};
    int threshold = 2;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a", "b"};
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<string> address = {"a", "b"};
    vector<string> keyword = {"x z", "y z"};
    vector<string> dangerous = {"y"};
    int threshold = 1;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a", "b"};
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<string> address = {"a", "b"};
    vector<string> keyword = {"aaa", "aaa"};
    vector<string> dangerous = {"aaa"};
    int threshold = 1;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a", "b"};
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<string> address = {"a", "b", "c", "d", "e"};
    vector<string> keyword = {"d a", "a b c", "b c d", "d", "d e"};
    vector<string> dangerous = {"b", "c"};
    int threshold = 2;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a", "b", "c"};
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<string> address = {"a", "b"};
    vector<string> keyword = {"a", "a b"};
    vector<string> dangerous = {"b"};
    int threshold = 1;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a", "b"};
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<string> address = {"aaa", "bbb", "ccc"};
    vector<string> keyword = {"a e f", "a f", "a b d e"};
    vector<string> dangerous = {"a", "b", "c"};
    int threshold = 2;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aaa", "bbb", "ccc"};
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<string> address = {"x", "y", "z"};
    vector<string> keyword = {"c d", "b c", "a b"};
    vector<string> dangerous = {"a"};
    int threshold = 1;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"x", "y", "z"};
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<string> address = {"www.topcoder.com", "www.sindicate_of_evil.com", "www.happy_citizens.com"};
    vector<string> keyword = {"bb b", "b aa", "a b aa s"};
    vector<string> dangerous = {"a", "encryption", "s"};
    int threshold = 2;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"www.sindicate_of_evil.com", "www.happy_citizens.com"};
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<string> address = {"aa", "bb", "cc"};
    vector<string> keyword = {"abc def ghi", "zlm ghi", "ghi zlm def"};
    vector<string> dangerous = {"abc", "def"};
    int threshold = 2;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aa", "bb", "cc"};
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<string> address = {"a", "b"};
    vector<string> keyword = {"a b", "b bb a"};
    vector<string> dangerous = {"b", "bb"};
    int threshold = 2;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a", "b"};
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<string> address = {"www.no.com", "www.noo.com"};
    vector<string> keyword = {"key word", "key word"};
    vector<string> dangerous = {"words"};
    int threshold = 1;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<string> address = {"a", "b"};
    vector<string> keyword = {"a b", "a c d"};
    vector<string> dangerous = {"c", "d", "b"};
    int threshold = 2;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a", "b"};
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<string> address = {"aa", "bb", "cc"};
    vector<string> keyword = {"d s f", "a b c", "b c d f"};
    vector<string> dangerous = {"a", "b"};
    int threshold = 2;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aa", "bb", "cc"};
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<string> address = {"...aa.b", "a..a.ab."};
    vector<string> keyword = {"def ghij klmno", "a bc def"};
    vector<string> dangerous = {"a", "b", "c", "d", "e"};
    int threshold = 1;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"...aa.b", "a..a.ab."};
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<string> address = {"a", "b"};
    vector<string> keyword = {"a b c", "b c d"};
    vector<string> dangerous = {"c", "d"};
    int threshold = 2;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a", "b"};
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<string> address = {"a.com", "b.com", "c.com"};
    vector<string> keyword = {"c d", "b c", "a b"};
    vector<string> dangerous = {"a"};
    int threshold = 1;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a.com", "b.com", "c.com"};
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<string> address = {"www.topcoder.com", "www.sindicate_of_evil.com"};
    vector<string> keyword = {"a", "a b c"};
    vector<string> dangerous = {"b"};
    int threshold = 2;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<string> address = {"a", "b"};
    vector<string> keyword = {"a b", "c a"};
    vector<string> dangerous = {"c"};
    int threshold = 1;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a", "b"};
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<string> address = {"b", "a"};
    vector<string> keyword = {"a c", "a b"};
    vector<string> dangerous = {"b"};
    int threshold = 1;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"b", "a"};
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<string> address = {"www.topcoder.com", "www.sindicate_of_evil.com", "www.happy_citizens.com"};
    vector<string> keyword = {"aa bb jj kk", "cc dd gg jj", "aa bb jj"};
    vector<string> dangerous = {"aa", "bb", "cc", "dd", "gg"};
    int threshold = 3;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"www.topcoder.com", "www.sindicate_of_evil.com", "www.happy_citizens.com"};
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<string> address = {"a", "b", "c", "d", "e", "f"};
    vector<string> keyword = {"a b", "b c", "c d", "d e", "e f", "f g"};
    vector<string> dangerous = {"g"};
    int threshold = 1;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a", "b", "c", "d", "e", "f"};
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<string> address = {"a", "b", "c"};
    vector<string> keyword = {"y k z", "b c z", "i j k"};
    vector<string> dangerous = {"y", "b", "c"};
    int threshold = 2;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a", "b"};
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<string> address = {"a", "b"};
    vector<string> keyword = {"bbb", "bbbc"};
    vector<string> dangerous = {"bbb"};
    int threshold = 1;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a"};
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<string> address = {"www.topcoder.com", "www.sindicate_of_evil.com"};
    vector<string> keyword = {"a b", "a b c"};
    vector<string> dangerous = {"a", "c", "d"};
    int threshold = 2;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"www.topcoder.com", "www.sindicate_of_evil.com"};
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<string> address = {"asdf", "ghjk", "lqwe", "opir", "utyz", "xcmn", "vbqw", "erio", "uyth", "gjas", "dfbm", "xccv", "gnbb", "uthu", "reoj", "wopk", "wksn", "zcbs", "dyjg", "weqw", "rthe", "weirh", "vbsge", "wuwgf", "wgeut", "ogtit", "hzbnzsb", "eshweu", "siugwefg", "weiugwe", "aiugwf", "viubwe", "weiugwef", "waeifugweaf", "awefiugwae", "weygwer", "viugsd", "waeiugwaeiu", "waeiugwagiuog", "wer", "giugwageiu", "weafiugawefiu", "gawefiugweafiugawefiugasefiugawfbvriyvwefiu", "gwaefiug", "awef", "utpiyui", "fguktyj", "rstyrsth", "yuiyo", "uortorter"};
    vector<string> keyword = {"j k l", "k l m", "l m n", "m n o", "o p q", "p q r", "r s t", "s t u", "t u v", "u v w", "x y z", "v w a", "w a b", "a b c", "b c d", "c d e", "d e f", "e f g", "f g h", "g h i", "i j k", "j k l", "k l m", "l m n", "m n o", "o p q", "p q r", "r s t", "s t u", "t u v", "u v w", "x y z", "v w a", "w a b", "a b c", "b c d", "c d e", "d e f", "e f g", "f g h", "g h i", "i j k", "a b c", "b c d", "c d e", "d e f", "e f g", "f g h", "g h i", "i j k"};
    vector<string> dangerous = {"a", "b", "as", "df", "gh", "jk", "lq", "we", "op", "ir", "ut", "yz", "xc", "mn", "vb", "qw", "er"};
    int threshold = 2;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"vbqw", "erio", "uyth", "gjas", "xccv", "gnbb", "uthu", "reoj", "wopk", "wksn", "zcbs", "dyjg", "weqw", "eshweu", "siugwefg", "weiugwe", "aiugwf", "weiugwef", "waeifugweaf", "awefiugwae", "weygwer", "viugsd", "waeiugwaeiu", "waeiugwagiuog", "wer", "giugwageiu", "gawefiugweafiugawefiugasefiugawfbvriyvwefiu", "gwaefiug", "awef", "utpiyui", "fguktyj", "rstyrsth", "yuiyo"};
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<string> address = {"www.t.com", "www.a.com"};
    vector<string> keyword = {"a b c d", "c d e f"};
    vector<string> dangerous = {"e", "f"};
    int threshold = 2;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"www.t.com", "www.a.com"};
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<string> address = {"a", "b"};
    vector<string> keyword = {"def ghij klmno", "a bc def"};
    vector<string> dangerous = {"a", "b", "c", "d", "e"};
    int threshold = 1;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a", "b"};
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<string> address = {"www.google.com", "www.yahoo.com"};
    vector<string> keyword = {"abc def", "def ghi jkl"};
    vector<string> dangerous = {"p", "q", "r", "ghi"};
    int threshold = 1;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"www.google.com", "www.yahoo.com"};
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<string> address = {"a", "b", "c"};
    vector<string> keyword = {"a b", "a b c", "a b c d"};
    vector<string> dangerous = {"b", "c", "d"};
    int threshold = 3;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"b", "c"};
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<string> address = {"aaa", "bbb"};
    vector<string> keyword = {"a b", "b c"};
    vector<string> dangerous = {"a"};
    int threshold = 1;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aaa", "bbb"};
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<string> address = {"www.a.com", "www.b.com"};
    vector<string> keyword = {"a b", "a b c d"};
    vector<string> dangerous = {"c", "d"};
    int threshold = 2;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"www.a.com", "www.b.com"};
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<string> address = {"www.sindicate_of_evil.com", "www.topcoder.com", "www.happy_citizens.com"};
    vector<string> keyword = {"signal interference evil snake poison algorithm", "hack encryption decryption internet algorithm", "flower baloon topcoder blue sky sea"};
    vector<string> dangerous = {"hack", "encryption", "decryption", "interference", "signal", "internet"};
    int threshold = 3;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"www.sindicate_of_evil.com", "www.topcoder.com"};
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<string> address = {"www.topcoder.com", "www.sindicate_of_evil.com", "www.happy_citizens.com"};
    vector<string> keyword = {"signal interference evil snake poison algorithm", "hack encryption decryption internet algorithm", "flower baloon topcoder blue sky sea"};
    vector<string> dangerous = {"hack", "encryption", "decryption", "interference", "signal", "internet", "f", "b", "t", "s"};
    int threshold = 3;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"www.topcoder.com", "www.sindicate_of_evil.com"};
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<string> address = {"abc", "def"};
    vector<string> keyword = {"nik ak", "nik a b c"};
    vector<string> dangerous = {"nik", "ak"};
    int threshold = 2;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"abc"};
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<string> address = {"www.topcoder.com", "www.uindicate_of_evil.com", "www.happy_citizens.com"};
    vector<string> keyword = {"hack encryption decryption internet algorithm", "signal interference evil snake poison algorithm", "flower baloon topcoder blue sky sea"};
    vector<string> dangerous = {"hack", "encryption", "decryption", "interference", "signal", "internet"};
    int threshold = 3;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"www.topcoder.com", "www.uindicate_of_evil.com"};
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<string> address = {"wa", "wb"};
    vector<string> keyword = {"ka", "ka"};
    vector<string> dangerous = {"ka"};
    int threshold = 1;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"wa", "wb"};
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<string> address = {"a", "b", "c"};
    vector<string> keyword = {"aa bb cc dd", "aa", "aa bb cc x y z dd"};
    vector<string> dangerous = {"x", "y", "z"};
    int threshold = 3;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a", "c"};
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<string> address = {"g", "h"};
    vector<string> keyword = {"a b c d", "d e"};
    vector<string> dangerous = {"e"};
    int threshold = 2;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<string> address = {"www.abc.com"};
    vector<string> keyword = {"abcde abcdef"};
    vector<string> dangerous = {"bc"};
    int threshold = 1;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    vector<string> address = {"a", "b", "c", "d", "e", "f", "g", "h", "i"};
    vector<string> keyword = {"a b", "b c", "c d", "d e", "e f", "f g", "g h", "h i", "i j"};
    vector<string> dangerous = {"j"};
    int threshold = 1;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a", "b", "c", "d", "e", "f", "g", "h", "i"};
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    vector<string> address = {"a", "b"};
    vector<string> keyword = {"a d e", "a b c d e"};
    vector<string> dangerous = {"a", "b", "c"};
    int threshold = 3;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a", "b"};
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    vector<string> address = {"a", "b", "c"};
    vector<string> keyword = {"a b c", "b c d", "c d e"};
    vector<string> dangerous = {"d", "e"};
    int threshold = 2;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a", "b", "c"};
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    vector<string> address = {"a.", "b.", "c.", "d."};
    vector<string> keyword = {"vv vvv", "vv www", "www xx", "xx xxx"};
    vector<string> dangerous = {"xxx"};
    int threshold = 1;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a.", "b.", "c.", "d."};
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    vector<string> address = {"x", "y"};
    vector<string> keyword = {"a c", "a b c"};
    vector<string> dangerous = {"a", "b"};
    int threshold = 2;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"x", "y"};
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    vector<string> address = {"a", "b"};
    vector<string> keyword = {"b c", "a b c"};
    vector<string> dangerous = {"a", "b"};
    int threshold = 2;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a", "b"};
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    vector<string> address = {"www.aopcoder.com", "www.sindicate_of_evil.com", "www.happy_citizens.com"};
    vector<string> keyword = {"hack encryption decryption internet algorithm", "signal interference evil snake poison algorithm", "flower baloon topcoder blue sky sea"};
    vector<string> dangerous = {"hack", "encryption", "decryption", "interference", "signal", "internet"};
    int threshold = 3;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"www.aopcoder.com", "www.sindicate_of_evil.com"};
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    vector<string> address = {"a", "b"};
    vector<string> keyword = {"g", "c d e f g"};
    vector<string> dangerous = {"c"};
    int threshold = 1;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a", "b"};
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    vector<string> address = {"www.a.com", "www.b.com", "www.c.com"};
    vector<string> keyword = {"a b c d e", "b o d a", "e c b f g o"};
    vector<string> dangerous = {"d", "f", "e", "g"};
    int threshold = 3;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"www.a.com", "www.b.com", "www.c.com"};
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    vector<string> address = {"a.b", "b.a"};
    vector<string> keyword = {"a b c d", "a b c z"};
    vector<string> dangerous = {"z"};
    int threshold = 1;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a.b", "b.a"};
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    vector<string> address = {"a", "b"};
    vector<string> keyword = {"a b c e", "a b c d e"};
    vector<string> dangerous = {"a", "b", "d"};
    int threshold = 3;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a", "b"};
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    vector<string> address = {"asr", "kast", "frast"};
    vector<string> keyword = {"ramy", "ahmed ramy", "hos ahmed"};
    vector<string> dangerous = {"hos"};
    int threshold = 1;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"asr", "kast", "frast"};
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    vector<string> address = {"abc", "def", "ght"};
    vector<string> keyword = {"a b c", "d e f a b c", "g h t"};
    vector<string> dangerous = {"d", "e", "f"};
    int threshold = 1;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"abc", "def"};
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    vector<string> address = {"a", "b"};
    vector<string> keyword = {"c", "d c"};
    vector<string> dangerous = {"d"};
    int threshold = 1;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a", "b"};
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    vector<string> address = {"a", "b", "c"};
    vector<string> keyword = {"x", "x y", "z"};
    vector<string> dangerous = {"y"};
    int threshold = 1;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a", "b"};
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    vector<string> address = {"wa", "wb"};
    vector<string> keyword = {"ka", "kb ka"};
    vector<string> dangerous = {"kb"};
    int threshold = 1;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"wa", "wb"};
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    vector<string> address = {"x", "y"};
    vector<string> keyword = {"b", "a b"};
    vector<string> dangerous = {"a"};
    int threshold = 1;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"x", "y"};
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    vector<string> address = {"x", "y"};
    vector<string> keyword = {"x y z", "w z"};
    vector<string> dangerous = {"w"};
    int threshold = 1;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"x", "y"};
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    vector<string> address = {"brokenlink", "flowerpower.net", "purchasedomain.com"};
    vector<string> keyword = {"broken", "cheap free", "cheap free domain biggest greatest"};
    vector<string> dangerous = {"biggest", "enemy", "hideout"};
    int threshold = 1;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"flowerpower.net", "purchasedomain.com"};
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    vector<string> address = {"aaa", "bbb", "ccc"};
    vector<string> keyword = {"cde xyz", "bcd cde", "abc bcd"};
    vector<string> dangerous = {"abc"};
    int threshold = 1;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aaa", "bbb", "ccc"};
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    vector<string> address = {"a..a.ab.", "...aa.b", "gadfafga", "gkyrfnfgj"};
    vector<string> keyword = {"a bc def", "def ghij klmno", "zxc", "klmno dfg"};
    vector<string> dangerous = {"a", "b", "c", "d", "e"};
    int threshold = 1;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a..a.ab.", "...aa.b", "gkyrfnfgj"};
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    vector<string> address = {"a", "b"};
    vector<string> keyword = {"x y", "x z y"};
    vector<string> dangerous = {"x", "z"};
    int threshold = 2;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a", "b"};
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    vector<string> address = {"a", "b", "c"};
    vector<string> keyword = {"x", "y", "y z"};
    vector<string> dangerous = {"z"};
    int threshold = 1;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"b", "c"};
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    vector<string> address = {"a", "b"};
    vector<string> keyword = {"b c", "a b"};
    vector<string> dangerous = {"a"};
    int threshold = 1;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a", "b"};
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    vector<string> address = {"a", "b", "c", "d", "e"};
    vector<string> keyword = {"a b c d e", "d e f g h", "g h i j k", "j k l m n", "m n o p q"};
    vector<string> dangerous = {"c", "f", "i", "l", "o", "p", "q"};
    int threshold = 3;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a", "b", "c", "d", "e"};
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    vector<string> address = {"aa", "bb", "cc", "dd"};
    vector<string> keyword = {"mine least test what", "mine a c d", "least e f g", "what h i j"};
    vector<string> dangerous = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j"};
    int threshold = 3;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aa", "bb", "cc", "dd"};
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test191() {
    vector<string> address = {"a", "b", "c", "d", "e"};
    vector<string> keyword = {"c f z", "c d e", "d e f", "a b c", "b c d"};
    vector<string> dangerous = {"a", "b"};
    int threshold = 2;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a", "b", "c", "d", "e"};
    if(result == expected) {
        cout << "Test Case 191: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 191: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test192() {
    vector<string> address = {"abc", "def"};
    vector<string> keyword = {"chk", "chk case"};
    vector<string> dangerous = {"case"};
    int threshold = 1;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"abc", "def"};
    if(result == expected) {
        cout << "Test Case 192: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 192: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test193() {
    vector<string> address = {"a", "b"};
    vector<string> keyword = {"a d e", "a b d c e"};
    vector<string> dangerous = {"a", "b", "c"};
    int threshold = 3;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a", "b"};
    if(result == expected) {
        cout << "Test Case 193: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 193: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test194() {
    vector<string> address = {"a", "b", "c"};
    vector<string> keyword = {"a b c", "d e f a b c", "d e f abc"};
    vector<string> dangerous = {"d", "e", "f"};
    int threshold = 3;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a", "b", "c"};
    if(result == expected) {
        cout << "Test Case 194: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 194: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test195() {
    vector<string> address = {"a", "b"};
    vector<string> keyword = {"y", "x y"};
    vector<string> dangerous = {"x"};
    int threshold = 1;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a", "b"};
    if(result == expected) {
        cout << "Test Case 195: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 195: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test196() {
    vector<string> address = {"www.topcoder.com", "www.sindicate_of_evil.com", "www.happy_citizens.com"};
    vector<string> keyword = {"hack", "signal hack", "flower signal"};
    vector<string> dangerous = {"flower"};
    int threshold = 1;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"www.topcoder.com", "www.sindicate_of_evil.com", "www.happy_citizens.com"};
    if(result == expected) {
        cout << "Test Case 196: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 196: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test197() {
    vector<string> address = {"a", "b"};
    vector<string> keyword = {"a b", "a"};
    vector<string> dangerous = {"a", "b"};
    int threshold = 2;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a"};
    if(result == expected) {
        cout << "Test Case 197: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 197: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test198() {
    vector<string> address = {"a", "b", "c"};
    vector<string> keyword = {"d e", "g", "e f"};
    vector<string> dangerous = {"e"};
    int threshold = 1;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a", "c"};
    if(result == expected) {
        cout << "Test Case 198: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 198: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test199() {
    vector<string> address = {"brokenlink", "flowerpower.net", "purchasedomain.com"};
    vector<string> keyword = {"free", "rose tulips", "cheap free domain biggest greatest"};
    vector<string> dangerous = {"biggest", "enemy", "hideout"};
    int threshold = 1;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"brokenlink", "purchasedomain.com"};
    if(result == expected) {
        cout << "Test Case 199: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 199: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test200() {
    vector<string> address = {"qqq", "aaa"};
    vector<string> keyword = {"aaa", "aaa bbb"};
    vector<string> dangerous = {"bbb"};
    int threshold = 1;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"qqq", "aaa"};
    if(result == expected) {
        cout << "Test Case 200: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 200: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test201() {
    vector<string> address = {"a", "b", "c"};
    vector<string> keyword = {"x y", "y z", "y z x"};
    vector<string> dangerous = {"y", "z"};
    int threshold = 2;
    InternetSecurity* pObj = new InternetSecurity();
    clock_t start = clock();
    vector<string> result = pObj->determineWebsite(address, keyword, dangerous, threshold);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a", "b", "c"};
    if(result == expected) {
        cout << "Test Case 201: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 201: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test172() == 0 ? ++passed : ++failed;
    test173() == 0 ? ++passed : ++failed;
    test174() == 0 ? ++passed : ++failed;
    test175() == 0 ? ++passed : ++failed;
    test176() == 0 ? ++passed : ++failed;
    test177() == 0 ? ++passed : ++failed;
    test178() == 0 ? ++passed : ++failed;
    test179() == 0 ? ++passed : ++failed;
    test180() == 0 ? ++passed : ++failed;
    test181() == 0 ? ++passed : ++failed;
    test182() == 0 ? ++passed : ++failed;
    test183() == 0 ? ++passed : ++failed;
    test184() == 0 ? ++passed : ++failed;
    test185() == 0 ? ++passed : ++failed;
    test186() == 0 ? ++passed : ++failed;
    test187() == 0 ? ++passed : ++failed;
    test188() == 0 ? ++passed : ++failed;
    test189() == 0 ? ++passed : ++failed;
    test190() == 0 ? ++passed : ++failed;
    test191() == 0 ? ++passed : ++failed;
    test192() == 0 ? ++passed : ++failed;
    test193() == 0 ? ++passed : ++failed;
    test194() == 0 ? ++passed : ++failed;
    test195() == 0 ? ++passed : ++failed;
    test196() == 0 ? ++passed : ++failed;
    test197() == 0 ? ++passed : ++failed;
    test198() == 0 ? ++passed : ++failed;
    test199() == 0 ? ++passed : ++failed;
    test200() == 0 ? ++passed : ++failed;
    test201() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22856211&rd=14159&pm=11064
********************************************************************************
#include<vector> 
#include<list> 
#include<map> 
#include<set> 
#include<deque> 
#include<queue> 
#include<stack> 
#include<bitset> 
#include<algorithm> 
#include<functional> 
#include<numeric> 
#include<utility> 
#include<iostream> 
#include<sstream> 
#include<iomanip> 
#include<cstdio> 
#include<cmath> 
#include<cstdlib> 
#include<cctype> 
#include<string> 
#include<cstring> 
#include<cstdio> 
#include<cmath> 
#include<cstdlib> 
#include<ctime> 
using namespace std; 
vector<string>s[60]; 
class InternetSecurity  
{ 
  public: 
  vector <string> determineWebsite(vector <string> address, vector <string> keyword, vector <string> dangerous, int threshold) 
  { 
    set<string>st; 
    int i,j,k; 
    vector<string>ans; 
    for (i=0;i<dangerous.size();i++) 
    { 
      st.insert(dangerous[i]); 
    } 
    for (i=0;i<keyword.size();i++) 
    { 
      istringstream os(keyword[i]); 
      string sr; 
      while (os>>sr) 
      { 
        s[i].push_back(sr); 
      } 
    } 
    int fd=0,n=address.size(); 
    int vis[120]={0}; 
    while (1) 
    { 
      fd=1; 
      for (i=0;i<n;i++) 
      { 
        if (vis[i])continue; 
        int ty=0; 
        for (j=0;j<s[i].size();j++) 
        { 
          if (st.find(s[i][j])!=st.end()) 
          { 
            ty++; 
          } 
        } 
        if (ty>=threshold) 
        { 
          fd=0; 
          vis[i]=1; 
          for (j=0;j<s[i].size();j++) 
          { 
            st.insert(s[i][j]); 
          } 
        } 
      } 
      if (fd)break; 
    } 
    for (i=0;i<n;i++) 
    { 
      if (vis[i])ans.push_back(address[i]); 
    } 
    return ans; 
  } 
};

********************************************************************************
*******************************************************************************/