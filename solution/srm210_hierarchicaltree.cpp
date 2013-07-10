/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2930
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

class HierarchicalTree {
public:
    vector<string> countDescendants(vector<string> parentData);
};

vector<string> HierarchicalTree::countDescendants(vector<string> parentData) {
    vector<string> ret;
    return ret;
}


int test0() {
    vector<string> parentData = {"bin,ROOT tty,dev dev,ROOT passwd,etc etc,ROOT lib", ",ROOT mnt,ROOT proc,ROOT tmp,ROOT usr,ROOT var,RO", "OT libc,lib screens,tmp kernel,usr log,var tty,de", "v"};
    HierarchicalTree* pObj = new HierarchicalTree();
    clock_t start = clock();
    vector<string> result = pObj->countDescendants(parentData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT: 15", "bin: 0", "dev: 1", "etc: 1", "kernel: 0", "lib: 1", "libc: 0", "log: 0", "mnt: 0", "passwd: 0", "proc: 0", "screens: 0", "tmp: 1", "tty: 0", "usr: 1", "var: 1"};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> parentData = {""};
    HierarchicalTree* pObj = new HierarchicalTree();
    clock_t start = clock();
    vector<string> result = pObj->countDescendants(parentData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT: 0"};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> parentData = {"disconnectb,disconnecta cyclea,ROOT intermediatea", ",cyclea cycleb,intermediatea cyclea,cycleb ROOT,r", "ootparent"};
    HierarchicalTree* pObj = new HierarchicalTree();
    clock_t start = clock();
    vector<string> result = pObj->countDescendants(parentData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> parentData = {"sapiens,homo homo,hominidae hominidae,primates pri", "mates,mammalia mammalia,chordata chordata,animalia", " animalia,eukarya eukarya,ROOT ", "protista,eukarya fungi,eukarya plantae,eukarya ", "porifera,animalia cnidaria,animalia platyhelminthe", "s,animalia nematoda,animalia mollusca,animalia ann", "elida,animalia arthropoda,animalia echinodermata,a", "nimalia ", "agnatha,chordata chondrichthyes,chordata osteichth", "yes,chordata amphibia,chordata reptilia,chordata a", "ves,chordata ", "artiodactyla,mammalia carnivora,mammalia cetacea,m", "ammalia chiroptera,mammalia dermoptera,mammalia hy", "racoidea,mammalia insectivora,mammalia lagomorpha,", "mammalia macroscelidea,mammalia notoryctemorphia,m", "ammalia perissodactyla,mammalia pholidota,mammalia", " proboscidea,mammalia rodentia,mammalia scandentia", ",mammalia sirenia,mammalia tubulidentata,mammalia ", "xenarthra,mammalia ", "lemuridae,primates cheirogaleidae,primates indrida", "e,primates daubentoniidae,primates galagonidae,pri", "mates loridae,primates megaladapidae,primates tars", "iidae,primates cebidae,primates cercopithecidae,pr", "imates callitrichidae,primates hylobatidae,primate", "s ", "gorilla,hominidae pan,hominidae pongo,hominidae ", "domain,ROOT kingdom,domain phylum,kingdom class,ph", "ylum order,class family,order genus,family species", ",genus ninja,mammalia"};
    HierarchicalTree* pObj = new HierarchicalTree();
    clock_t start = clock();
    vector<string> result = pObj->countDescendants(parentData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT: 67", "agnatha: 0", "amphibia: 0", "animalia: 54", "annelida: 0", "arthropoda: 0", "artiodactyla: 0", "aves: 0", "callitrichidae: 0", "carnivora: 0", "cebidae: 0", "cercopithecidae: 0", "cetacea: 0", "cheirogaleidae: 0", "chiroptera: 0", "chondrichthyes: 0", "chordata: 45", "class: 4", "cnidaria: 0", "daubentoniidae: 0", "dermoptera: 0", "domain: 7", "echinodermata: 0", "eukarya: 58", "family: 2", "fungi: 0", "galagonidae: 0", "genus: 1", "gorilla: 0", "hominidae: 5", "homo: 1", "hylobatidae: 0", "hyracoidea: 0", "indridae: 0", "insectivora: 0", "kingdom: 6", "lagomorpha: 0", "lemuridae: 0", "loridae: 0", "macroscelidea: 0", "mammalia: 38", "megaladapidae: 0", "mollusca: 0", "nematoda: 0", "ninja: 0", "notoryctemorphia: 0", "order: 3", "osteichthyes: 0", "pan: 0", "perissodactyla: 0", "pholidota: 0", "phylum: 5", "plantae: 0", "platyhelminthes: 0", "pongo: 0", "porifera: 0", "primates: 18", "proboscidea: 0", "protista: 0", "reptilia: 0", "rodentia: 0", "sapiens: 0", "scandentia: 0", "sirenia: 0", "species: 0", "tarsiidae: 0", "tubulidentata: 0", "xenarthra: 0"};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> parentData = {"duke,ROOT arizona,duke maryland,duke michiganst,a", "rizona usc,duke stanford,maryland temple,michigan", "st illinois,arizona ucla,duke kentucky,usc cincin", "nati,stanford georgetown,maryland gonzaga,michiga", "nst pennst,temple kansas,illinois mississippi,ari", "zona missouri,duke utahst,ucla bostoncollege,usc ", "iowa,kentucky stjosephs,stanford kentstate,cincin", "nati georgiast,maryland hampton,georgetown fresno", "st,michiganst indianast,gonzaga florida,temple no", "rthcarolina,pennst charlotte,illinois syracuse,ka", "nsas notredame,mississippi butler,arizona monmout", "h,duke georgia,missouri ohiost,utahst hofstra,ucl", "a oklahomast,usc southernutah,bostoncollege creig", "hton,iowa holycross,kentucky ncgreensboro,stanfor", "d georgiatech,stjosephs byu,cincinnati indiana,ke", "ntstate wisconsin,georgiast georgemason,maryland ", "arkansas,georgetown iowast,hampton alabamast,mich", "iganst california,fresnost virginia,gonzaga oklah", "oma,indianast texas,temple westernky,florida prov", "idence,pennst princeton,northcarolina northwester", "nst,illinois tennessee,charlotte hawaii,syracuse ", "csnorthridge,kansas xavier,notredame iona,mississ", "ippi wakeforest,butler easternill,arizona winthro", "p,northwesternst"};
    HierarchicalTree* pObj = new HierarchicalTree();
    clock_t start = clock();
    vector<string> result = pObj->countDescendants(parentData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT: 65", "alabamast: 0", "arizona: 32", "arkansas: 0", "bostoncollege: 1", "butler: 1", "byu: 0", "california: 0", "charlotte: 1", "cincinnati: 3", "creighton: 0", "csnorthridge: 0", "duke: 64", "easternill: 0", "florida: 1", "fresnost: 1", "georgemason: 0", "georgetown: 3", "georgia: 0", "georgiast: 1", "georgiatech: 0", "gonzaga: 3", "hampton: 1", "hawaii: 0", "hofstra: 0", "holycross: 0", "illinois: 8", "indiana: 0", "indianast: 1", "iona: 0", "iowa: 1", "iowast: 0", "kansas: 3", "kentstate: 1", "kentucky: 3", "maryland: 15", "michiganst: 15", "mississippi: 3", "missouri: 1", "monmouth: 0", "ncgreensboro: 0", "northcarolina: 1", "northwesternst: 1", "notredame: 1", "ohiost: 0", "oklahoma: 0", "oklahomast: 0", "pennst: 3", "princeton: 0", "providence: 0", "southernutah: 0", "stanford: 7", "stjosephs: 1", "syracuse: 1", "temple: 7", "tennessee: 0", "texas: 0", "ucla: 3", "usc: 7", "utahst: 1", "virginia: 0", "wakeforest: 0", "westernky: 0", "winthrop: 0", "wisconsin: 0", "xavier: 0"};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> parentData = {"pi,ROOT a,b b,c c,d d,e e,f f,g g,h h,i i,j j,k k,", "l l,m m,n n,o o,p p,q q,r r,s s,t t,u u,v v,w w,x ", "x,y y,z z,aa aa,ab ab,ac ac,ad ad,ae ae,af af,ag a", "g,ah ah,ai ai,aj aj,ak ak,al al,am am,an an,ao ao,", "ap ap,aq aq,ar ar,as as,at at,au au,av av,aw aw,ax", " ax,ay ay,az az,ba ba,bb bb,bc bc,bd bd,be be,bf b", "f,bg bg,bh bh,bi bi,bj bj,bk bk,bl bl,bm bm,bn bn,", "bo bo,bp bp,bq bq,br br,bs bs,bt bt,bu bu,bv bv,bw", " bw,bx bx,by by,bz bz,ca ca,cb cb,cc cc,cd cd,ce c", "e,cf cf,cg cg,ch ch,ci ci,cj cj,ck ck,cl cl,cm cm,", "cn cn,co co,cp cp,cq cq,cr cr,cs cs,ct ct,cu cu,cv", " cv,cw cw,cx cx,cy cy,cz cz,da da,db db,dc dc,dd d", "d,de de,df df,dg dg,dh dh,di di,dj dj,dk dk,dl dl,", "dm dm,dn dn,do do,dp dp,dq dq,dr dr,ds ds,dt dt,du", " du,dv dv,dw dw,dx dx,dy dy,dz dz,ea ea,eb eb,ec e", "c,ed ed,ee ee,ef ef,eg eg,eh eh,ei ei,ej ej,ek ek,", "el el,em em,en en,eo eo,ep ep,eq eq,er er,es es,et", " et,eu eu,ev ev,ew ew,ex ex,ey ey,ez ez,fa fa,fb f", "b,fc fc,fd fd,fe fe,ff ff,fg fg,fh fh,fi fi,fj fj,", "fk fk,fl fl,fm fm,fn fn,fo fo,fp fp,fq fq,fr fr,fs", " fs,ft ft,fu fu,fv fv,fw fw,fx fx,fy fy,fz fz,ga g", "a,gb gb,gc gc,gd gd,ge ge,gf gf,gg gg,gh gh,gi gi,", "gj gj,gk gk,gl gl,gm gm,gn gn,go go,gp gp,gq gq,gr", " gr,gs gs,gt gt,gu gu,gv gv,gw gw,gx gx,gy gy,gz g", "z,ha ha,hb hb,hc hc,hd hd,he he,hf hf,hg hg,hh hh,", "hi hi,hj hj,hk hk,hl hl,hm hm,hn hn,ho ho,hp hp,hq", " hq,hr hr,hs hs,ht ht,hu hu,hv hv,hw hw,hx hx,hy h", "y,hz hz,ia ia,ib ib,ic ic,id id,ie ie,if if,ig ig,", "ih ih,ii ii,ij ij,ik ik,il il,im im,in in,io io,ip", " ip,iq iq,ir ir,is is,it it,iu iu,iv iv,iw iw,ix i", "x,iy iy,iz iz,ja ja,jb jb,jc jc,jd jd,je je,jf jf,", "jg jg,jh jh,ji ji,jj jj,jk jk,jl jl,jm jm,jn jn,jo", " jo,jp jp,jq jq,jr jr,js js,jt jt,ju ju,jv jv,jw j", "w,jx jx,jy jy,jz jz,ka ka,kb kb,kc kc,kd kd,ke ke,", "kf kf,kg kg,kh kh,ki ki,kj kj,kk kk,kl kl,km km,kn", " kn,ko ko,kp kp,kq kq,kr kr,ks ks,kt kt,ku ku,kv k", "v,kw kw,kx kx,ky ky,kz kz,la la,lb lb,lc lc,ld ld,", "le le,lf lf,lg lg,lh lh,li li,lj lj,lk lk,ll ll,lm", " lm,ln ln,lo lo,lp lp,lq lq,lr lr,ls ls,lt lt,lu l", "u,lv lv,lw lw,lx lx,ly ly,lz lz,ma ma,mb mb,mc mc,", "md md,me me,mf mf,mg mg,mh mh,mi mi,mj mj,mk mk,ml", " ml,mm mm,mn mn,mo mo,mp mp,mq mq,mr mr,ms ms,mt m", "t,mu mu,mv mv,mw mw,mx mx,my my,mz mz,na na,nb nb,", "nc nc,nd nd,ne ne,nf nf,ng ng,nh nh,ni ni,nj nj,nk", " nk,nl nl,nm nm,nn nn,no no,np np,nq nq,nr nr,ns n", "s,nt nt,nu nu,nv nv,nw nw,nx nx,ny ny,nz nz,oa oa,", "ob ob,oc oc,od od,oe oe,of of,og og,oh oh,oi oi,oj", " oj,ok ok,ol ol,om om,on on,oo oo,op op,oq oq,or o", "r,os os,ot ot,ou ou,ov ov,ow ow,ox ox,oy oy,oz oz,", "pa pa,pb pb,pc pc,pd pd,pe pe,pf pf,pg pg,ph ph,pi"};
    HierarchicalTree* pObj = new HierarchicalTree();
    clock_t start = clock();
    vector<string> result = pObj->countDescendants(parentData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT: 425", "a: 0", "aa: 26", "ab: 27", "ac: 28", "ad: 29", "ae: 30", "af: 31", "ag: 32", "ah: 33", "ai: 34", "aj: 35", "ak: 36", "al: 37", "am: 38", "an: 39", "ao: 40", "ap: 41", "aq: 42", "ar: 43", "as: 44", "at: 45", "au: 46", "av: 47", "aw: 48", "ax: 49", "ay: 50", "az: 51", "b: 1", "ba: 52", "bb: 53", "bc: 54", "bd: 55", "be: 56", "bf: 57", "bg: 58", "bh: 59", "bi: 60", "bj: 61", "bk: 62", "bl: 63", "bm: 64", "bn: 65", "bo: 66", "bp: 67", "bq: 68", "br: 69", "bs: 70", "bt: 71", "bu: 72", "bv: 73", "bw: 74", "bx: 75", "by: 76", "bz: 77", "c: 2", "ca: 78", "cb: 79", "cc: 80", "cd: 81", "ce: 82", "cf: 83", "cg: 84", "ch: 85", "ci: 86", "cj: 87", "ck: 88", "cl: 89", "cm: 90", "cn: 91", "co: 92", "cp: 93", "cq: 94", "cr: 95", "cs: 96", "ct: 97", "cu: 98", "cv: 99", "cw: 100", "cx: 101", "cy: 102", "cz: 103", "d: 3", "da: 104", "db: 105", "dc: 106", "dd: 107", "de: 108", "df: 109", "dg: 110", "dh: 111", "di: 112", "dj: 113", "dk: 114", "dl: 115", "dm: 116", "dn: 117", "do: 118", "dp: 119", "dq: 120", "dr: 121", "ds: 122", "dt: 123", "du: 124", "dv: 125", "dw: 126", "dx: 127", "dy: 128", "dz: 129", "e: 4", "ea: 130", "eb: 131", "ec: 132", "ed: 133", "ee: 134", "ef: 135", "eg: 136", "eh: 137", "ei: 138", "ej: 139", "ek: 140", "el: 141", "em: 142", "en: 143", "eo: 144", "ep: 145", "eq: 146", "er: 147", "es: 148", "et: 149", "eu: 150", "ev: 151", "ew: 152", "ex: 153", "ey: 154", "ez: 155", "f: 5", "fa: 156", "fb: 157", "fc: 158", "fd: 159", "fe: 160", "ff: 161", "fg: 162", "fh: 163", "fi: 164", "fj: 165", "fk: 166", "fl: 167", "fm: 168", "fn: 169", "fo: 170", "fp: 171", "fq: 172", "fr: 173", "fs: 174", "ft: 175", "fu: 176", "fv: 177", "fw: 178", "fx: 179", "fy: 180", "fz: 181", "g: 6", "ga: 182", "gb: 183", "gc: 184", "gd: 185", "ge: 186", "gf: 187", "gg: 188", "gh: 189", "gi: 190", "gj: 191", "gk: 192", "gl: 193", "gm: 194", "gn: 195", "go: 196", "gp: 197", "gq: 198", "gr: 199", "gs: 200", "gt: 201", "gu: 202", "gv: 203", "gw: 204", "gx: 205", "gy: 206", "gz: 207", "h: 7", "ha: 208", "hb: 209", "hc: 210", "hd: 211", "he: 212", "hf: 213", "hg: 214", "hh: 215", "hi: 216", "hj: 217", "hk: 218", "hl: 219", "hm: 220", "hn: 221", "ho: 222", "hp: 223", "hq: 224", "hr: 225", "hs: 226", "ht: 227", "hu: 228", "hv: 229", "hw: 230", "hx: 231", "hy: 232", "hz: 233", "i: 8", "ia: 234", "ib: 235", "ic: 236", "id: 237", "ie: 238", "if: 239", "ig: 240", "ih: 241", "ii: 242", "ij: 243", "ik: 244", "il: 245", "im: 246", "in: 247", "io: 248", "ip: 249", "iq: 250", "ir: 251", "is: 252", "it: 253", "iu: 254", "iv: 255", "iw: 256", "ix: 257", "iy: 258", "iz: 259", "j: 9", "ja: 260", "jb: 261", "jc: 262", "jd: 263", "je: 264", "jf: 265", "jg: 266", "jh: 267", "ji: 268", "jj: 269", "jk: 270", "jl: 271", "jm: 272", "jn: 273", "jo: 274", "jp: 275", "jq: 276", "jr: 277", "js: 278", "jt: 279", "ju: 280", "jv: 281", "jw: 282", "jx: 283", "jy: 284", "jz: 285", "k: 10", "ka: 286", "kb: 287", "kc: 288", "kd: 289", "ke: 290", "kf: 291", "kg: 292", "kh: 293", "ki: 294", "kj: 295", "kk: 296", "kl: 297", "km: 298", "kn: 299", "ko: 300", "kp: 301", "kq: 302", "kr: 303", "ks: 304", "kt: 305", "ku: 306", "kv: 307", "kw: 308", "kx: 309", "ky: 310", "kz: 311", "l: 11", "la: 312", "lb: 313", "lc: 314", "ld: 315", "le: 316", "lf: 317", "lg: 318", "lh: 319", "li: 320", "lj: 321", "lk: 322", "ll: 323", "lm: 324", "ln: 325", "lo: 326", "lp: 327", "lq: 328", "lr: 329", "ls: 330", "lt: 331", "lu: 332", "lv: 333", "lw: 334", "lx: 335", "ly: 336", "lz: 337", "m: 12", "ma: 338", "mb: 339", "mc: 340", "md: 341", "me: 342", "mf: 343", "mg: 344", "mh: 345", "mi: 346", "mj: 347", "mk: 348", "ml: 349", "mm: 350", "mn: 351", "mo: 352", "mp: 353", "mq: 354", "mr: 355", "ms: 356", "mt: 357", "mu: 358", "mv: 359", "mw: 360", "mx: 361", "my: 362", "mz: 363", "n: 13", "na: 364", "nb: 365", "nc: 366", "nd: 367", "ne: 368", "nf: 369", "ng: 370", "nh: 371", "ni: 372", "nj: 373", "nk: 374", "nl: 375", "nm: 376", "nn: 377", "no: 378", "np: 379", "nq: 380", "nr: 381", "ns: 382", "nt: 383", "nu: 384", "nv: 385", "nw: 386", "nx: 387", "ny: 388", "nz: 389", "o: 14", "oa: 390", "ob: 391", "oc: 392", "od: 393", "oe: 394", "of: 395", "og: 396", "oh: 397", "oi: 398", "oj: 399", "ok: 400", "ol: 401", "om: 402", "on: 403", "oo: 404", "op: 405", "oq: 406", "or: 407", "os: 408", "ot: 409", "ou: 410", "ov: 411", "ow: 412", "ox: 413", "oy: 414", "oz: 415", "p: 15", "pa: 416", "pb: 417", "pc: 418", "pd: 419", "pe: 420", "pf: 421", "pg: 422", "ph: 423", "pi: 424", "q: 16", "r: 17", "s: 18", "t: 19", "u: 20", "v: 21", "w: 22", "x: 23", "y: 24", "z: 25"};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> parentData = {};
    HierarchicalTree* pObj = new HierarchicalTree();
    clock_t start = clock();
    vector<string> result = pObj->countDescendants(parentData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT: 0"};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> parentData = {"ROOT,ROOT"};
    HierarchicalTree* pObj = new HierarchicalTree();
    clock_t start = clock();
    vector<string> result = pObj->countDescendants(parentData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> parentData = {"connected,ROOT disconnecteda,disconnectedb"};
    HierarchicalTree* pObj = new HierarchicalTree();
    clock_t start = clock();
    vector<string> result = pObj->countDescendants(parentData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> parentData = {"connected,ROOT disconnecteda,disconnectedb ", "disconnectedb,disconnecteda"};
    HierarchicalTree* pObj = new HierarchicalTree();
    clock_t start = clock();
    vector<string> result = pObj->countDescendants(parentData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> parentData = {"validnode,ROOT ROOT,rootparent"};
    HierarchicalTree* pObj = new HierarchicalTree();
    clock_t start = clock();
    vector<string> result = pObj->countDescendants(parentData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> parentData = {"child,parent"};
    HierarchicalTree* pObj = new HierarchicalTree();
    clock_t start = clock();
    vector<string> result = pObj->countDescendants(parentData);
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
    vector<string> parentData = {"child,ROOT grandchilda,child grandchildb,child ", "grandchilda,grandchildb"};
    HierarchicalTree* pObj = new HierarchicalTree();
    clock_t start = clock();
    vector<string> result = pObj->countDescendants(parentData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> parentData = {"child,ROOT child,child"};
    HierarchicalTree* pObj = new HierarchicalTree();
    clock_t start = clock();
    vector<string> result = pObj->countDescendants(parentData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> parentData = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", ",ROOT aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaab,aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaa aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaac,aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaa aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaad,aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaab aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaae,aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaab aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaf,aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaac aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaag,aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaac aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaah,aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaai aaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaai,aaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaj aaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaj,aaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaak aaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaak,aaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaal aaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaal,aaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaam aaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaam,ROOT"};
    HierarchicalTree* pObj = new HierarchicalTree();
    clock_t start = clock();
    vector<string> result = pObj->countDescendants(parentData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT: 13", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa: 6", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab: 2", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaac: 2", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaad: 0", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaae: 0", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaf: 0", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaag: 0", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaah: 0", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaai: 1", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaj: 2", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaak: 3", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaal: 4", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaam: 5"};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> parentData = {"ig,aw ev,dh oj,do dl,w ns,mk mk,km et,dq fs,ca nc,", "gm aw,c fu,bk by,ax jc,gx mx,dw ca,y bi,be bk,b gy", ",x ie,h jr,fp kq,af at,d nm,bm ee,af ld,bq ic,ht a", "r,w aa,ROOT on,ja oz,ls hx,be dk,cm ob,ja ac,q gc,", "y iz,gx kf,an hy,gi bv,bu jw,dj k,f br,ba ng,ir cs", ",al ag,j nn,ai bn,be p,e jy,dm dw,ao mr,gb dd,a lj", ",jp ed,dx bg,ay gn,fm bz,bs ks,fg go,cu cf,bv ol,h", "l fd,cl fp,db cw,ac gv,dq gt,dl nr,bp jx,hz og,dj ", "ec,cw mc,ac ga,eo bc,k y,v ci,g eq,bp ah,aa gx,g b", ",a mt,jm fv,aq bt,t dc,bz mz,cl fz,fi oy,ld dn,ce ", "bu,aj ik,dm ky,ai lb,gb gq,em my,as bh,am dp,do cl", ",ba c,b ii,n gd,y g,f kv,bo r,q mw,fi mo,gx jq,j f", "m,dx or,cm oc,lq e,ROOT lq,ck nx,hl md,am ez,m fe,", "bi o,b hb,dq fn,al lf,jb cy,bb co,ch cp,cf fr,ad e", "o,bb hq,by n,c gm,b lm,db u,f z,ROOT be,ak nv,cn a", "u,n jd,cr bb,an ad,d bm,aq jp,ia os,bh oa,hn ot,lr", " ex,cq hi,ai fy,ea dx,bl fk,cd ls,ag jh,hr cu,be i", "w,fl h,a ej,aa hg,gx gl,dk nk,bb jz,ROOT mm,cn iv,", "hk fw,as iy,s jb,bb i,c jm,ij gg,ei ce,v km,gx gk,", "ay am,q hu,n ne,lw cc,bt bw,f hz,hf hf,es jn,gb db", ",t no,ep jl,dy ij,fk df,g jf,im mn,iy cq,w eg,bj i", "t,bm iq,du ki,x ju,v op,on lo,jm ba,au hl,cd mp,hm", " ni,kl gh,fx fx,bl oq,fs ef,bm me,dn bf,ab gp,as l", "p,fz er,dz kp,dq fg,ee mu,jm ht,eu hd,cu f,e kl,gj", " ge,gb le,dv ap,b kx,kq fc,br fq,dz cg,bb dt,by hr", ",er j,b lk,ju a,ROOT hs,cx kb,bp du,as kd,ey en,an", " ox,ah kk,ch dj,i nh,mz ct,bj ow,ny lg,ii ab,s nw,", "ji do,da ir,br gj,ey li,ed oe,ei gb,fa dh,ap dy,o ", "ly,gp ia,hw ke,jx ku,jr cm,ba mj,fj ck,l az,m ak,v", " ms,en if,ai id,hf fh,ac w,s jg,fe cr,m od,ev lu,e", "z l,i ny,lt q,a dm,as ao,ab hv,aq ho,cp nj,gc fl,t", " eb,bu gf,ae ll,cw t,b lt,le mh,gb hn,fd dv,bt es,", "w lv,x nu,la dr,w de,ab is,fp np,cr ai,s mq,km kz,", "ic oh,be mv,hi aj,c ok,am hw,cb el,w ei,bz da,cx i", "l,cj hh,ge fj,bj cn,as ib,ar ou,gp nd,ce kn,hl ja,", "cs ax,ar lx,eg dq,ct gu,bv of,dj hk,fz bd,m iu,cz ", "aq,u as,af oo,lx bl,g nl,lz lr,dm ds,dp hc,aj bx,b", "n d,b bs,br bj,an lw,ki ih,am ha,ax gw,dv ep,bu ix", ",dx na,gt em,bp ea,df ov,ob di,b kj,ad kc,ja lc,ju", " lh,av dz,ROOT jj,l ip,hg js,fp in,bq an,ab kh,ij ", "jt,a kr,ay ch,bm ay,ad bp,ag mg,hr cv,be jv,ig fb,", "ac al,p hp,i bo,s ji,ic he,cd ey,bi ae,ad ew,ci ma", ",kk nz,gk eu,ad cd,ar ft,bh s,k kg,dn cb,as fa,eq ", "om,go ko,av jo,cx ml,hm io,b fi,em mi,p jk,fz hm,f", "c gr,bn x,j gs,da dg,cv cx,bt nf,fa im,ij nb,ca je", ",gh eh,dz nq,cf m,k kw,jm bq,bh cz,cf af,c hj,eo l", "a,j ka,r ln,en gz,eu gi,ae ff,do nt,fx mf,md cj,ay", " fo,dx oi,gi mb,kb v,o ek,av kt,ae av,ar lz,ih"};
    HierarchicalTree* pObj = new HierarchicalTree();
    clock_t start = clock();
    vector<string> result = pObj->countDescendants(parentData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT: 416", "a: 254", "aa: 3", "ab: 31", "ac: 6", "ad: 22", "ae: 5", "af: 26", "ag: 25", "ah: 1", "ai: 5", "aj: 13", "ak: 20", "al: 8", "am: 13", "an: 25", "ao: 2", "ap: 3", "aq: 10", "ar: 26", "as: 20", "at: 0", "au: 24", "av: 3", "aw: 2", "ax: 4", "ay: 6", "az: 0", "b: 225", "ba: 23", "bb: 8", "bc: 0", "bd: 0", "be: 19", "bf: 0", "bg: 0", "bh: 6", "bi: 7", "bj: 11", "bk: 1", "bl: 11", "bm: 7", "bn: 2", "bo: 1", "bp: 22", "bq: 3", "br: 12", "bs: 5", "bt: 17", "bu: 11", "bv: 7", "bw: 0", "bx: 0", "by: 2", "bz: 4", "c: 84", "ca: 3", "cb: 4", "cc: 0", "cd: 15", "ce: 4", "cf: 5", "cg: 0", "ch: 3", "ci: 1", "cj: 1", "ck: 2", "cl: 5", "cm: 3", "cn: 2", "co: 0", "cp: 1", "cq: 1", "cr: 2", "cs: 6", "ct: 5", "cu: 3", "cv: 1", "cw: 2", "cx: 9", "cy: 0", "cz: 1", "d: 24", "da: 6", "db: 6", "dc: 0", "dd: 0", "de: 0", "df: 2", "dg: 0", "dh: 2", "di: 0", "dj: 3", "dk: 1", "dl: 2", "dm: 4", "dn: 2", "do: 4", "dp: 1", "dq: 4", "dr: 0", "ds: 0", "dt: 0", "du: 1", "dv: 5", "dw: 1", "dx: 6", "dy: 1", "dz: 6", "e: 147", "ea: 1", "eb: 0", "ec: 0", "ed: 1", "ee: 2", "ef: 0", "eg: 2", "eh: 0", "ei: 2", "ej: 0", "ek: 0", "el: 0", "em: 8", "en: 2", "eo: 2", "ep: 1", "eq: 9", "er: 3", "es: 5", "et: 0", "eu: 6", "ev: 1", "ew: 0", "ex: 0", "ey: 4", "ez: 1", "f: 135", "fa: 8", "fb: 0", "fc: 3", "fd: 2", "fe: 1", "ff: 0", "fg: 1", "fh: 0", "fi: 6", "fj: 1", "fk: 9", "fl: 1", "fm: 1", "fn: 0", "fo: 0", "fp: 4", "fq: 0", "fr: 0", "fs: 1", "ft: 0", "fu: 0", "fv: 0", "fw: 0", "fx: 3", "fy: 0", "fz: 4", "g: 27", "ga: 0", "gb: 6", "gc: 1", "gd: 0", "ge: 1", "gf: 0", "gg: 0", "gh: 1", "gi: 2", "gj: 2", "gk: 1", "gl: 0", "gm: 1", "gn: 0", "go: 1", "gp: 2", "gq: 0", "gr: 0", "gs: 0", "gt: 1", "gu: 0", "gv: 0", "gw: 0", "gx: 9", "gy: 0", "gz: 0", "h: 1", "ha: 0", "hb: 0", "hc: 0", "hd: 0", "he: 0", "hf: 4", "hg: 1", "hh: 0", "hi: 1", "hj: 0", "hk: 1", "hl: 3", "hm: 2", "hn: 1", "ho: 0", "hp: 0", "hq: 0", "hr: 2", "hs: 0", "ht: 4", "hu: 0", "hv: 0", "hw: 3", "hx: 0", "hy: 0", "hz: 2", "i: 10", "ia: 2", "ib: 0", "ic: 3", "id: 0", "ie: 0", "if: 0", "ig: 1", "ih: 2", "ii: 1", "ij: 8", "ik: 0", "il: 0", "im: 1", "in: 0", "io: 0", "ip: 0", "iq: 0", "ir: 1", "is: 0", "it: 0", "iu: 0", "iv: 0", "iw: 0", "ix: 0", "iy: 1", "iz: 0", "j: 35", "ja: 5", "jb: 1", "jc: 0", "jd: 0", "je: 0", "jf: 0", "jg: 0", "jh: 0", "ji: 1", "jj: 0", "jk: 0", "jl: 0", "jm: 4", "jn: 0", "jo: 0", "jp: 1", "jq: 0", "jr: 1", "js: 0", "jt: 0", "ju: 2", "jv: 0", "jw: 0", "jx: 1", "jy: 0", "jz: 0", "k: 93", "ka: 0", "kb: 1", "kc: 0", "kd: 0", "ke: 0", "kf: 0", "kg: 0", "kh: 0", "ki: 2", "kj: 0", "kk: 1", "kl: 1", "km: 3", "kn: 0", "ko: 0", "kp: 0", "kq: 1", "kr: 0", "ks: 0", "kt: 0", "ku: 0", "kv: 0", "kw: 0", "kx: 0", "ky: 0", "kz: 0", "l: 4", "la: 1", "lb: 0", "lc: 0", "ld: 1", "le: 3", "lf: 0", "lg: 0", "lh: 0", "li: 0", "lj: 0", "lk: 0", "ll: 0", "lm: 0", "ln: 0", "lo: 0", "lp: 0", "lq: 1", "lr: 1", "ls: 1", "lt: 2", "lu: 0", "lv: 0", "lw: 1", "lx: 1", "ly: 0", "lz: 1", "m: 7", "ma: 0", "mb: 0", "mc: 0", "md: 1", "me: 0", "mf: 0", "mg: 0", "mh: 0", "mi: 0", "mj: 0", "mk: 1", "ml: 0", "mm: 0", "mn: 0", "mo: 0", "mp: 0", "mq: 0", "mr: 0", "ms: 0", "mt: 0", "mu: 0", "mv: 0", "mw: 0", "mx: 0", "my: 0", "mz: 1", "n: 28", "na: 0", "nb: 0", "nc: 0", "nd: 0", "ne: 0", "nf: 0", "ng: 0", "nh: 0", "ni: 0", "nj: 0", "nk: 0", "nl: 0", "nm: 0", "nn: 0", "no: 0", "np: 0", "nq: 0", "nr: 0", "ns: 0", "nt: 0", "nu: 0", "nv: 0", "nw: 0", "nx: 0", "ny: 1", "nz: 0", "o: 40", "oa: 0", "ob: 1", "oc: 0", "od: 0", "oe: 0", "of: 0", "og: 0", "oh: 0", "oi: 0", "oj: 0", "ok: 0", "ol: 0", "om: 0", "on: 1", "oo: 0", "op: 0", "oq: 0", "or: 0", "os: 0", "ot: 0", "ou: 0", "ov: 0", "ow: 0", "ox: 0", "oy: 0", "oz: 0", "p: 10", "q: 23", "r: 1", "s: 83", "t: 27", "u: 11", "v: 37", "w: 40", "x: 5", "y: 7", "z: 0"};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> parentData = {"kf,ce lc,dp ek,ao eg,bn nf,gc ki,cs eb,bz dx,m cu,", "br lt,fe bq,bp nm,ar bj,x lp,ho ig,eh kb,x gc,eb i", "y,bp ds,bl bu,x fh,ao kz,er x,e bd,bb cn,az lk,je ", "lf,kk lw,kc oz,hz ox,t ep,ea dc,az cv,bc cy,cw dz,", "an lu,cp os,eg bp,bj hq,cq hc,h jg,hf j,b ba,ax fk", ",bs iv,bm mv,gu bw,aq il,dq nx,bn a,ROOT my,ms kg,", "jv on,cf kc,t hw,g ch,bs be,ad mx,lo eq,de ez,es b", "t,s gb,ak dg,ab hb,cl mz,fa jc,x gh,aa mc,ROOT oe,", "di oi,nj ii,gs fw,fm jd,fd mt,dh lm,fy dm,bc nl,gs", " dj,cr le,jc gn,fx mf,bt hx,an w,p li,cl fc,do nd,", "m ll,dl ae,aa nh,mi bv,am fe,em cl,h hy,bi dy,ck b", "n,ae fn,dw nk,fd eh,l ms,jo ou,l if,n gp,an fv,fe ", "ef,dq cp,av jb,gn oa,nw fi,c oy,gk h,c kq,eu je,w ", "oh,er fm,bg dt,ROOT gf,el mg,ex az,p es,ag af,y bg", ",ROOT hz,bn ei,dr hs,t gu,fl is,fk fq,m y,x jn,es ", "gw,fo cs,bv ol,dz ni,mr kw,iq it,z cz,cb gv,z nr,m", "o s,h mb,ia kj,cn by,bx ex,o jo,n bo,bh mq,gy aj,a", "e im,ho ao,ac ob,ef do,bs of,eg mo,gf n,l ag,d nt,", "av hr,eh gz,ef ee,cs bi,e dp,as jw,de v,h io,cc kx", ",fs av,f lh,b at,r du,dh kl,hd an,f hu,ek ml,kf dh", ",cc o,ROOT bf,f cc,ao jm,ej ge,dq bh,av b,a bb,ae ", "ab,j lj,jf fy,ef ib,br dl,dk cq,ai aq,ak ji,ea ce,", "ac aa,o kt,t di,bx hv,az am,r bz,q z,v la,jp ij,cn", " gl,fu lg,in ka,gk cx,bs bc,af lo,ey jh,id ik,co j", "q,cg oc,jp gs,fi ju,jl oo,hl op,ROOT ah,e ld,co hl", ",er fl,co na,hu cf,b ev,cr ct,e bl,ay ny,ae ow,cf ", "js,v ke,jj ns,ea hi,dw ie,fk ff,eh ca,v ip,im ln,d", "v nn,jl ls,hv go,bm iq,cn jl,au cr,ak kn,ee el,v f", "s,bu lb,ei dr,cg lx,gu mw,dw lv,eo cb,ac jr,bn cd,", "j he,bc au,w ly,hs kv,ex fp,e hk,ao fu,cm ma,dr db", ",ac ac,u nb,er og,kw hn,af mi,bp i,ROOT ht,da in,b", "k ga,ex c,ROOT dw,ar fj,j d,a ks,ew nw,no ng,dx gk", ",ev ak,q gm,du br,aj mj,kl iu,ab r,q gx,ap ix,t iz", ",ic jk,fa gi,ek ko,fs hh,b nz,jg f,c kr,is ar,ae m", "r,u ew,et jj,c dd,dc ku,he ha,dm cg,an fg,df bs,ak", " mu,id jt,ie mn,bp et,ds ft,da dq,w g,a gj,bh ci,a", "l bx,av de,bp or,m fd,bm fb,db ho,bk e,d co,bm ai,", "g dv,de ne,au mp,l mm,ke t,b fo,cl ok,ka jx,hb gy,", "cx ia,cm km,e od,ac ot,au ay,ai k,g fa,ej om,kd l,", "e lq,hu p,l no,hp cw,at hp,ev u,o me,hu as,j nc,me", " fz,da em,l ed,dz hf,ev er,dq np,hc cj,ai nq,es ir", ",gk oq,u lz,kf gg,ds gt,gm jf,im gd,dq ap,v kk,dx ", "ic,dz fr,dj mk,et lr,ce eu,bn gq,do jp,dq hg,cw ck", ",at ea,be mh,jd ej,di eo,bm bm,y kd,bt en,bx al,u ", "ja,gm da,cc ih,ga ax,ar hd,fi ec,co nv,cg bk,v gr,", "gl jv,ev iw,eu aw,ak m,h cm,cc ov,cl nj,am kh,hn e", "y,ed ad,q q,l md,ga jy,bd df,ck kp,hs id,cq jz,cf ", "hm,gb dn,cv fx,be nu,kj hj,bt dk,u ky,hj oj,kg"};
    HierarchicalTree* pObj = new HierarchicalTree();
    clock_t start = clock();
    vector<string> result = pObj->countDescendants(parentData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT: 416", "a: 229", "aa: 29", "ab: 2", "ac: 38", "ad: 8", "ae: 27", "af: 9", "ag: 4", "ah: 0", "ai: 14", "aj: 3", "ak: 37", "al: 1", "am: 7", "an: 17", "ao: 27", "ap: 1", "aq: 1", "ar: 7", "as: 2", "at: 7", "au: 5", "av: 16", "aw: 0", "ax: 1", "ay: 7", "az: 11", "b: 24", "ba: 0", "bb: 2", "bc: 6", "bd: 1", "be: 7", "bf: 0", "bg: 2", "bh: 2", "bi: 1", "bj: 11", "bk: 8", "bl: 6", "bm: 16", "bn: 10", "bo: 0", "bp: 10", "bq: 0", "br: 2", "bs: 12", "bt: 5", "bu: 3", "bv: 4", "bw: 0", "bx: 9", "by: 0", "bz: 3", "c: 93", "ca: 0", "cb: 1", "cc: 17", "cd: 0", "ce: 4", "cf: 3", "cg: 6", "ch: 0", "ci: 0", "cj: 0", "ck: 3", "cl: 6", "cm: 5", "cn: 6", "co: 7", "cp: 1", "cq: 4", "cr: 18", "cs: 3", "ct: 0", "cu: 0", "cv: 1", "cw: 2", "cx: 2", "cy: 0", "cz: 0", "d: 185", "da: 3", "db: 1", "dc: 1", "dd: 0", "de: 4", "df: 1", "dg: 0", "dh: 5", "di: 6", "dj: 1", "dk: 2", "dl: 1", "dm: 1", "dn: 0", "do: 2", "dp: 1", "dq: 17", "dr: 3", "ds: 5", "dt: 0", "du: 3", "dv: 1", "dw: 3", "dx: 3", "dy: 0", "dz: 7", "e: 179", "ea: 3", "eb: 2", "ec: 0", "ed: 3", "ee: 1", "ef: 4", "eg: 2", "eh: 3", "ei: 1", "ej: 4", "ek: 6", "el: 3", "em: 3", "en: 0", "eo: 1", "ep: 0", "eq: 0", "er: 5", "es: 3", "et: 3", "eu: 2", "ev: 15", "ew: 1", "ex: 5", "ey: 2", "ez: 0", "f: 36", "fa: 2", "fb: 0", "fc: 0", "fd: 3", "fe: 2", "ff: 0", "fg: 0", "fh: 0", "fi: 6", "fj: 0", "fk: 4", "fl: 3", "fm: 1", "fn: 0", "fo: 1", "fp: 0", "fq: 0", "fr: 0", "fs: 2", "ft: 0", "fu: 2", "fv: 0", "fw: 0", "fx: 2", "fy: 1", "fz: 0", "g: 17", "ga: 2", "gb: 1", "gc: 1", "gd: 0", "ge: 0", "gf: 2", "gg: 0", "gh: 0", "gi: 0", "gj: 0", "gk: 4", "gl: 1", "gm: 2", "gn: 1", "go: 0", "gp: 0", "gq: 0", "gr: 0", "gs: 2", "gt: 0", "gu: 2", "gv: 0", "gw: 0", "gx: 0", "gy: 1", "gz: 0", "h: 45", "ha: 0", "hb: 1", "hc: 1", "hd: 2", "he: 1", "hf: 2", "hg: 0", "hh: 0", "hi: 0", "hj: 1", "hk: 0", "hl: 1", "hm: 0", "hn: 1", "ho: 5", "hp: 3", "hq: 0", "hr: 0", "hs: 2", "ht: 0", "hu: 4", "hv: 1", "hw: 0", "hx: 0", "hy: 0", "hz: 1", "i: 0", "ia: 1", "ib: 0", "ic: 1", "id: 2", "ie: 1", "if: 0", "ig: 0", "ih: 0", "ii: 0", "ij: 0", "ik: 0", "il: 0", "im: 3", "in: 1", "io: 0", "ip: 0", "iq: 2", "ir: 0", "is: 1", "it: 0", "iu: 0", "iv: 0", "iw: 0", "ix: 0", "iy: 0", "iz: 0", "j: 8", "ja: 0", "jb: 0", "jc: 1", "jd: 1", "je: 1", "jf: 1", "jg: 1", "jh: 0", "ji: 0", "jj: 2", "jk: 0", "jl: 2", "jm: 0", "jn: 0", "jo: 2", "jp: 2", "jq: 0", "jr: 0", "js: 0", "jt: 0", "ju: 0", "jv: 2", "jw: 0", "jx: 0", "jy: 0", "jz: 0", "k: 0", "ka: 1", "kb: 0", "kc: 1", "kd: 1", "ke: 1", "kf: 2", "kg: 1", "kh: 0", "ki: 0", "kj: 1", "kk: 1", "kl: 1", "km: 0", "kn: 0", "ko: 0", "kp: 0", "kq: 0", "kr: 0", "ks: 0", "kt: 0", "ku: 0", "kv: 0", "kw: 1", "kx: 0", "ky: 0", "kz: 0", "l: 124", "la: 0", "lb: 0", "lc: 0", "ld: 0", "le: 0", "lf: 0", "lg: 0", "lh: 0", "li: 0", "lj: 0", "lk: 0", "ll: 0", "lm: 0", "ln: 0", "lo: 1", "lp: 0", "lq: 0", "lr: 0", "ls: 0", "lt: 0", "lu: 0", "lv: 0", "lw: 0", "lx: 0", "ly: 0", "lz: 0", "m: 7", "ma: 0", "mb: 0", "mc: 0", "md: 0", "me: 1", "mf: 0", "mg: 0", "mh: 0", "mi: 1", "mj: 0", "mk: 0", "ml: 0", "mm: 0", "mn: 0", "mo: 1", "mp: 0", "mq: 0", "mr: 1", "ms: 1", "mt: 0", "mu: 0", "mv: 0", "mw: 0", "mx: 0", "my: 0", "mz: 0", "n: 4", "na: 0", "nb: 0", "nc: 0", "nd: 0", "ne: 0", "nf: 0", "ng: 0", "nh: 0", "ni: 0", "nj: 1", "nk: 0", "nl: 0", "nm: 0", "nn: 0", "no: 2", "np: 0", "nq: 0", "nr: 0", "ns: 0", "nt: 0", "nu: 0", "nv: 0", "nw: 1", "nx: 0", "ny: 0", "nz: 0", "o: 84", "oa: 0", "ob: 0", "oc: 0", "od: 0", "oe: 0", "of: 0", "og: 0", "oh: 0", "oi: 0", "oj: 0", "ok: 0", "ol: 0", "om: 0", "on: 0", "oo: 0", "op: 0", "oq: 0", "or: 0", "os: 0", "ot: 0", "ou: 0", "ov: 0", "ow: 0", "ox: 0", "oy: 0", "oz: 0", "p: 39", "q: 68", "r: 16", "s: 6", "t: 8", "u: 47", "v: 20", "w: 26", "x: 47", "y: 27", "z: 2"};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> parentData = {"is,ew l,c mq,hh gc,af jw,jd ii,by kn,hy fk,al lv,g", " fd,c om,ag mp,eu ax,t mm,an ic,ad jg,gq fb,t k,b ", "jd,il dx,cp cf,bm ai,aa ip,hb cc,bq ms,dg n,h ht,f", "a p,i hs,fg oe,mw ob,cu bp,m u,b gh,v fm,en da,r d", "l,da oj,bc jc,aj b,ROOT gd,ROOT dt,bd lr,kq lf,co ", "ov,cd ot,dl nu,eb lx,iq ni,e ly,da fr,dh ag,g cn,a", "c aa,o fl,bu ci,cc hm,gm an,s cy,cq hv,do fv,br er", ",do bg,n bk,ay bh,i os,b cr,aj fh,eu hp,ad ny,kl i", "e,eu mr,ky kp,kg ek,ea cx,ad at,h hn,bf ol,ie ju,c", "r jk,ff fn,j gu,be nm,bm nk,q hf,t ix,go kb,ee gg,", "x js,ag ff,al kd,bn ar,h s,b hw,f af,d eo,bf hb,fe", " fg,ab ha,bk nx,es ey,n ap,j es,bi iw,ce cl,d nv,i", "q lg,gn bn,bh gi,as el,dw hy,gs hc,fg hz,cp fa,be ", "bm,m nq,mh li,fl em,dl ka,gb ne,is ks,gt od,dp gr,", "gc fi,dh kk,cz be,ay en,cv dw,u ak,l mb,kb bj,bi l", "z,lu z,o j,i lj,kq mo,dt kc,ik ac,i mw,ib nd,kz e,", "b dk,an ib,gd br,q cv,v gm,cv dr,bh hg,dr cj,bl jq", ",bl kv,bc ko,dt dy,dd ku,k ng,lm ml,al nb,ey as,g ", "io,n nl,gg jx,jf mh,dx ki,bj gq,s gl,dy fo,b ed,bd", " km,ft nr,cl iz,fp lo,ek ia,gw gn,cq ay,ah he,fb o", "o,lk gp,ad kt,hk hu,k kz,di eq,cb fj,ae bs,a il,ih", " ce,bn cq,am lq,ix bq,s m,d cu,ROOT je,gz fq,ak v,", "l aw,o iy,gi az,h ep,cv nj,ha aq,h g,a hq,ej ll,ci", " jn,jd dv,cb lk,jd a,ROOT fs,n bl,z ct,cj ch,bd fc", ",er mz,du c,ROOT jp,hu lt,lq lm,r mu,eo cg,bd ga,a", "s y,g ah,s jm,jl nf,is ej,cq no,bg ez,dp au,p op,e", "e hj,dg gf,bh cp,g gs,ga o,f ow,cz ge,bw gy,h cs,o", " ad,e cw,bm ou,ct i,ROOT ls,kq iu,ae ew,bx de,cu w", ",i ev,dq jh,gr ok,cp mk,ar nc,eu ft,t ld,es kx,ja ", "ex,bz le,eo mi,bo kg,ac lb,ir kf,eg mv,hv bo,be ds", ",o hl,bb av,o kq,gl gz,br mf,ku bd,l dm,at ns,t jt", ",ht jl,cg db,aq bz,bq la,ib gt,ej go,fc iq,al ke,h", "y t,h or,ic dh,bv ky,ie in,av ox,nr mc,km dg,ck it", ",u cm,r fx,fr oc,ce jy,cz fy,o eu,eg ih,ai f,a lu,", "bm h,b hi,cl eg,h dj,aw bv,ad ei,dj jj,gg fp,ew fz", ",aw oy,hf jo,bx jr,do ef,ah ik,ct bt,bo ig,bn kw,f", "e oh,er ji,io bw,a dd,w ao,x eh,ak fw,fm gw,bl ab,", "r fe,dj dc,ba co,n nn,nb nz,gu fu,h id,ff bi,bg al", ",ac iv,dz jz,ht ec,dh bb,aj dp,cc do,cx x,c my,ey ", "kj,fn q,k jb,gw ae,c of,do gk,fg ij,eb oa,ik ho,ev", " ba,o hk,bs on,ih na,cw mn,bo md,bo if,gw gj,gc og", ",hg bf,ab ee,dt ir,o ma,ci jv,cf ea,ae hh,ax ja,er", " cb,ax kh,gh ck,cg mt,hf d,ROOT im,ev nt,fz cz,bc ", "eb,x mx,jt mj,jp cd,n hx,cz hr,ae gv,h lh,bl hd,fp", " bx,bi jf,h gx,gp bu,br lc,jf dz,m kr,ey lp,r ca,w", " by,at am,i nh,ld et,ee aj,p nw,lk np,ci kl,fk du,", "u dq,co r,e oi,mr mg,fj ln,it me,bd lw,im gb,ga di", ",ae df,b oq,kx dn,a oz,fy bc,i"};
    HierarchicalTree* pObj = new HierarchicalTree();
    clock_t start = clock();
    vector<string> result = pObj->countDescendants(parentData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT: 416", "a: 75", "aa: 10", "ab: 9", "ac: 14", "ad: 27", "ae: 10", "af: 4", "ag: 2", "ah: 18", "ai: 9", "aj: 5", "ak: 2", "al: 10", "am: 8", "an: 2", "ao: 0", "ap: 0", "aq: 1", "ar: 1", "as: 9", "at: 3", "au: 0", "av: 1", "aw: 8", "ax: 5", "ay: 16", "az: 0", "b: 190", "ba: 1", "bb: 1", "bc: 7", "bd: 18", "be: 12", "bf: 4", "bg: 17", "bh: 10", "bi: 15", "bj: 1", "bk: 2", "bl: 12", "bm: 7", "bn: 5", "bo: 4", "bp: 0", "bq: 10", "br: 6", "bs: 2", "bt: 0", "bu: 2", "bv: 5", "bw: 1", "bx: 8", "by: 1", "bz: 1", "c: 53", "ca: 0", "cb: 2", "cc: 7", "cd: 1", "ce: 2", "cf: 1", "cg: 6", "ch: 0", "ci: 3", "cj: 5", "ck: 3", "cl: 3", "cm: 0", "cn: 0", "co: 6", "cp: 5", "cq: 7", "cr: 1", "cs: 0", "ct: 4", "cu: 2", "cv: 6", "cw: 1", "cx: 15", "cy: 0", "cz: 4", "d: 21", "da: 4", "db: 0", "dc: 0", "dd: 6", "de: 0", "df: 0", "dg: 2", "dh: 4", "di: 2", "dj: 5", "dk: 0", "dl: 2", "dm: 0", "dn: 0", "do: 14", "dp: 2", "dq: 4", "dr: 2", "ds: 0", "dt: 7", "du: 1", "dv: 0", "dw: 1", "dx: 2", "dy: 5", "dz: 1", "e: 49", "ea: 2", "eb: 2", "ec: 0", "ed: 0", "ee: 4", "ef: 0", "eg: 10", "eh: 0", "ei: 0", "ej: 3", "ek: 1", "el: 0", "em: 0", "en: 2", "eo: 2", "ep: 0", "eq: 0", "er: 9", "es: 3", "et: 0", "eu: 8", "ev: 3", "ew: 6", "ex: 0", "ey: 4", "ez: 0", "f: 46", "fa: 4", "fb: 1", "fc: 4", "fd: 0", "fe: 3", "ff: 2", "fg: 3", "fh: 0", "fi: 0", "fj: 1", "fk: 2", "fl: 1", "fm: 1", "fn: 1", "fo: 0", "fp: 2", "fq: 0", "fr: 1", "fs: 0", "ft: 2", "fu: 0", "fv: 0", "fw: 0", "fx: 0", "fy: 1", "fz: 1", "g: 21", "ga: 6", "gb: 1", "gc: 3", "gd: 4", "ge: 0", "gf: 0", "gg: 2", "gh: 1", "gi: 1", "gj: 0", "gk: 0", "gl: 4", "gm: 1", "gn: 1", "go: 3", "gp: 1", "gq: 1", "gr: 1", "gs: 3", "gt: 1", "gu: 1", "gv: 0", "gw: 3", "gx: 0", "gy: 0", "gz: 1", "h: 78", "ha: 1", "hb: 1", "hc: 0", "hd: 0", "he: 0", "hf: 2", "hg: 1", "hh: 1", "hi: 0", "hj: 0", "hk: 1", "hl: 0", "hm: 0", "hn: 0", "ho: 0", "hp: 0", "hq: 0", "hr: 0", "hs: 0", "ht: 3", "hu: 2", "hv: 1", "hw: 0", "hx: 0", "hy: 2", "hz: 0", "i: 64", "ia: 0", "ib: 3", "ic: 1", "id: 0", "ie: 4", "if: 0", "ig: 0", "ih: 8", "ii: 0", "ij: 0", "ik: 2", "il: 6", "im: 1", "in: 0", "io: 1", "ip: 0", "iq: 2", "ir: 1", "is: 2", "it: 1", "iu: 0", "iv: 0", "iw: 0", "ix: 2", "iy: 0", "iz: 0", "j: 3", "ja: 2", "jb: 0", "jc: 0", "jd: 5", "je: 0", "jf: 2", "jg: 0", "jh: 0", "ji: 0", "jj: 0", "jk: 0", "jl: 1", "jm: 0", "jn: 0", "jo: 0", "jp: 1", "jq: 0", "jr: 0", "js: 0", "jt: 1", "ju: 0", "jv: 0", "jw: 0", "jx: 0", "jy: 0", "jz: 0", "k: 14", "ka: 0", "kb: 1", "kc: 0", "kd: 0", "ke: 0", "kf: 0", "kg: 1", "kh: 0", "ki: 0", "kj: 0", "kk: 0", "kl: 1", "km: 1", "kn: 0", "ko: 0", "kp: 0", "kq: 3", "kr: 0", "ks: 0", "kt: 0", "ku: 1", "kv: 0", "kw: 0", "kx: 1", "ky: 2", "kz: 1", "l: 32", "la: 0", "lb: 0", "lc: 0", "ld: 1", "le: 0", "lf: 0", "lg: 0", "lh: 0", "li: 0", "lj: 0", "lk: 2", "ll: 0", "lm: 1", "ln: 0", "lo: 0", "lp: 0", "lq: 1", "lr: 0", "ls: 0", "lt: 0", "lu: 1", "lv: 0", "lw: 0", "lx: 0", "ly: 0", "lz: 0", "m: 11", "ma: 0", "mb: 0", "mc: 0", "md: 0", "me: 0", "mf: 0", "mg: 0", "mh: 1", "mi: 0", "mj: 0", "mk: 0", "ml: 0", "mm: 0", "mn: 0", "mo: 0", "mp: 0", "mq: 0", "mr: 1", "ms: 0", "mt: 0", "mu: 0", "mv: 0", "mw: 1", "mx: 0", "my: 0", "mz: 0", "n: 35", "na: 0", "nb: 1", "nc: 0", "nd: 0", "ne: 0", "nf: 0", "ng: 0", "nh: 0", "ni: 0", "nj: 0", "nk: 0", "nl: 0", "nm: 0", "nn: 0", "no: 0", "np: 0", "nq: 0", "nr: 1", "ns: 0", "nt: 0", "nu: 0", "nv: 0", "nw: 0", "nx: 0", "ny: 0", "nz: 0", "o: 44", "oa: 0", "ob: 0", "oc: 0", "od: 0", "oe: 0", "of: 0", "og: 0", "oh: 0", "oi: 0", "oj: 0", "ok: 0", "ol: 0", "om: 0", "on: 0", "oo: 0", "op: 0", "oq: 0", "or: 0", "os: 0", "ot: 0", "ou: 0", "ov: 0", "ow: 0", "ox: 0", "oy: 0", "oz: 0", "p: 7", "q: 8", "r: 19", "s: 35", "t: 15", "u: 6", "v: 9", "w: 8", "x: 7", "y: 0", "z: 13"};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> parentData = {"bh,bc dp,bb bn,as im,et kk,ew iy,cp ib,s iu,z hh,b", "s le,kg mr,dh mo,ac er,ce nz,dc nj,jp u,k mm,jb cq", ",bn km,ci gy,bo eu,cn ns,ib ks,bw nl,bv hm,ec oq,j", "q bx,k ke,dj bs,r co,z kc,ao ho,g or,ie gh,bq ev,u", " gd,fc du,bq hk,bc oa,ga nf,kh dq,ao op,bs dh,ab n", "p,ex q,g aq,v jf,fu ja,cv fl,ez ix,ip gv,u jt,i jb", ",gg dx,bo lk,dx ih,ap hl,gr ft,g kd,bn ep,eo os,ci", " jy,gs fi,eb jx,dx jq,bz ml,mf t,c kb,ij fj,bl el,", "dv r,o f,ROOT di,o fx,ca ab,w jp,jb kp,jx ki,cj dc", ",be ny,kb hq,dm go,fw ij,cl oh,ct oi,ms lj,bt ff,b", "i mz,kk ew,ef gt,ew kr,hg mx,aj ek,ac cn,ah nw,lu ", "hn,ai lo,r al,ah bd,b eg,cb iz,cs z,u oy,kh hx,ep ", "au,t dz,cb mv,fj ax,t ok,ll gc,ea kw,ki dj,de nh,e", "i hf,hd ar,x bt,r n,m do,dm ba,aa hg,x ee,bw jm,gn", " hu,au am,d fa,z hb,ab ox,ea cr,z e,d ka,ed hj,fi ", "io,eo oo,lj mh,cu as,ad es,r nb,cv s,e a,ROOT ec,b", "h c,b lp,fu ii,u ng,iy gx,ga cs,ba b,a fg,cu fq,bv", " lq,v cg,ag jl,it kf,p my,as if,dl y,p mj,et dw,af", " gl,ef ji,gw p,e ku,az dn,ad ie,ei od,hi ge,ga of,", "fv az,t dt,am mw,ku ca,ba db,as fm,u dy,az ct,ac i", "l,as ig,eg ce,bb dd,aw bu,av gw,do gp,m md,s nk,hq", " bo,h id,co he,ei aw,aj cf,be ag,l me,lr kt,kk hc,", "cd hr,ea bi,ar je,s jv,ca be,ax nq,it oz,au bz,w e", "f,cn dk,df jo,er kx,ig gb,fm af,q og,my dr,r nx,az", " ll,et nd,ROOT gs,ak gg,cr kl,v de,cp ah,d nv,iw l", "w,hr ju,jf nm,gc ni,bb w,a cz,cs lv,jd hd,bc dg,ag", " v,g fw,da lr,ig ic,cp kj,at hs,u bf,am ly,br nc,a", "b it,cz in,eh en,bw nr,ks da,o la,kz fu,bn jk,cy m", "s,jo mp,go ne,le mn,ay an,u ak,u ma,li ch,b mf,jv ", "lt,fh lh,ie iq,ap ld,p cx,h fe,ca bp,t jr,d kz,hy ", "ko,iv ip,s eq,cl m,j aj,ah hy,fp ia,ft ky,jd ao,h ", "cb,bq mc,he cu,bg df,cs fy,cg ad,j hp,bj bw,aj ir,", "hl dm,cl ow,ck lu,bi eb,g ey,bs ot,ca ae,l aa,m lf", ",it fs,a gk,l em,di kq,ds ou,bh nu,fe fh,el iw,fg ", "hz,v jg,s ai,ag ay,af ga,ej by,u fo,bv ez,ao lb,bg", " ik,av no,ht k,j cc,ai lx,ec ap,ROOT ln,fs lz,em e", "d,aa eh,bd fp,eg oj,if gz,y mb,kx h,b na,al bq,bh ", "fr,ep bg,b kg,jp gi,bu fv,w kn,ROOT lm,m bj,al ck,", "br fk,p dv,bq bk,ad lg,ha gj,an j,g dl,bo fn,ad jz", ",is jn,fi bm,m fc,co ht,bw mi,ma cl,b ha,h hv,gj e", "o,s gq,fy bl,ak kv,cx jd,bj ds,cp ea,w ls,fg et,bf", " bb,af ov,ak cj,m cd,am x,p gf,am cw,ae li,fl ex,d", "f ei,dj gm,ch gr,e av,ao mq,ak mu,an cv,bo mk,d gu", ",fy is,gk cm,z d,b mg,p oe,ci iv,il jc,ce fb,ck fd", ",bt br,aq bv,bq cp,p lc,bq ol,nr js,cf on,kn nt,ax", " ob,gw ac,h gn,ah jj,gl ej,dw at,u jw,hq fz,dw om,", "b oc,id l,e o,j bc,an cy,bb ci,aa hw,gu mt,in g,b ", "kh,ie nn,bi i,b jh,r hi,bl"};
    HierarchicalTree* pObj = new HierarchicalTree();
    clock_t start = clock();
    vector<string> result = pObj->countDescendants(parentData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT: 416", "a: 408", "aa: 26", "ab: 4", "ac: 4", "ad: 17", "ae: 1", "af: 20", "ag: 9", "ah: 31", "ai: 2", "aj: 11", "ak: 9", "al: 6", "am: 10", "an: 36", "ao: 11", "ap: 2", "aq: 5", "ar: 5", "as: 13", "at: 1", "au: 2", "av: 3", "aw: 1", "ax: 6", "ay: 1", "az: 4", "b: 388", "ba: 19", "bb: 10", "bc: 32", "bd: 3", "be: 4", "bf: 5", "bg: 7", "bh: 28", "bi: 4", "bj: 4", "bk: 0", "bl: 4", "bm: 0", "bn: 6", "bo: 11", "bp: 0", "bq: 23", "br: 4", "bs: 3", "bt: 3", "bu: 1", "bv: 3", "bw: 7", "bx: 0", "by: 0", "bz: 2", "c: 17", "ca: 7", "cb: 11", "cc: 0", "cd: 1", "ce: 5", "cf: 1", "cg: 4", "ch: 1", "ci: 3", "cj: 2", "ck: 2", "cl: 12", "cm: 0", "cn: 9", "co: 4", "cp: 18", "cq: 0", "cr: 8", "cs: 10", "ct: 1", "cu: 5", "cv: 2", "cw: 0", "cx: 1", "cy: 1", "cz: 4", "d: 113", "da: 3", "db: 0", "dc: 1", "dd: 0", "de: 12", "df: 3", "dg: 0", "dh: 1", "di: 2", "dj: 11", "dk: 0", "dl: 2", "dm: 7", "dn: 0", "do: 3", "dp: 0", "dq: 0", "dr: 0", "ds: 1", "dt: 0", "du: 0", "dv: 3", "dw: 6", "dx: 3", "dy: 0", "dz: 0", "e: 67", "ea: 5", "eb: 3", "ec: 2", "ed: 1", "ee: 0", "ef: 7", "eg: 9", "eh: 2", "ei: 9", "ej: 4", "ek: 0", "el: 2", "em: 1", "en: 0", "eo: 4", "ep: 2", "eq: 0", "er: 3", "es: 0", "et: 4", "eu: 0", "ev: 0", "ew: 4", "ex: 1", "ey: 0", "ez: 4", "f: 0", "fa: 0", "fb: 0", "fc: 1", "fd: 0", "fe: 1", "ff: 0", "fg: 3", "fh: 1", "fi: 2", "fj: 1", "fk: 0", "fl: 3", "fm: 1", "fn: 0", "fo: 0", "fp: 3", "fq: 0", "fr: 0", "fs: 1", "ft: 1", "fu: 3", "fv: 1", "fw: 2", "fx: 0", "fy: 3", "fz: 0", "g: 191", "ga: 3", "gb: 0", "gc: 1", "gd: 0", "ge: 0", "gf: 0", "gg: 7", "gh: 0", "gi: 0", "gj: 1", "gk: 2", "gl: 1", "gm: 0", "gn: 1", "go: 1", "gp: 0", "gq: 0", "gr: 2", "gs: 1", "gt: 0", "gu: 1", "gv: 0", "gw: 2", "gx: 0", "gy: 0", "gz: 0", "h: 33", "ha: 1", "hb: 0", "hc: 0", "hd: 1", "he: 1", "hf: 0", "hg: 1", "hh: 0", "hi: 1", "hj: 0", "hk: 0", "hl: 1", "hm: 0", "hn: 0", "ho: 0", "hp: 0", "hq: 2", "hr: 1", "hs: 0", "ht: 1", "hu: 0", "hv: 0", "hw: 0", "hx: 0", "hy: 2", "hz: 0", "i: 1", "ia: 0", "ib: 1", "ic: 0", "id: 1", "ie: 5", "if: 1", "ig: 4", "ih: 0", "ii: 0", "ij: 2", "ik: 0", "il: 2", "im: 0", "in: 1", "io: 0", "ip: 1", "iq: 0", "ir: 0", "is: 1", "it: 3", "iu: 0", "iv: 1", "iw: 1", "ix: 0", "iy: 1", "iz: 0", "j: 151", "ja: 0", "jb: 6", "jc: 0", "jd: 2", "je: 0", "jf: 1", "jg: 0", "jh: 0", "ji: 0", "jj: 0", "jk: 0", "jl: 0", "jm: 0", "jn: 0", "jo: 2", "jp: 4", "jq: 1", "jr: 0", "js: 0", "jt: 0", "ju: 0", "jv: 2", "jw: 0", "jx: 1", "jy: 0", "jz: 0", "k: 76", "ka: 0", "kb: 1", "kc: 0", "kd: 0", "ke: 0", "kf: 0", "kg: 2", "kh: 2", "ki: 1", "kj: 0", "kk: 2", "kl: 0", "km: 0", "kn: 1", "ko: 0", "kp: 0", "kq: 0", "kr: 0", "ks: 2", "kt: 0", "ku: 1", "kv: 0", "kw: 0", "kx: 1", "ky: 0", "kz: 1", "l: 15", "la: 0", "lb: 0", "lc: 0", "ld: 0", "le: 1", "lf: 0", "lg: 0", "lh: 0", "li: 2", "lj: 1", "lk: 0", "ll: 1", "lm: 0", "ln: 0", "lo: 0", "lp: 0", "lq: 0", "lr: 1", "ls: 0", "lt: 0", "lu: 1", "lv: 0", "lw: 0", "lx: 0", "ly: 0", "lz: 0", "m: 34", "ma: 1", "mb: 0", "mc: 0", "md: 0", "me: 0", "mf: 1", "mg: 0", "mh: 0", "mi: 0", "mj: 0", "mk: 0", "ml: 0", "mm: 0", "mn: 0", "mo: 0", "mp: 0", "mq: 0", "mr: 0", "ms: 1", "mt: 0", "mu: 0", "mv: 0", "mw: 0", "mx: 0", "my: 1", "mz: 0", "n: 0", "na: 0", "nb: 0", "nc: 0", "nd: 0", "ne: 0", "nf: 0", "ng: 0", "nh: 0", "ni: 0", "nj: 0", "nk: 0", "nl: 0", "nm: 0", "nn: 0", "no: 0", "np: 0", "nq: 0", "nr: 1", "ns: 0", "nt: 0", "nu: 0", "nv: 0", "nw: 0", "nx: 0", "ny: 0", "nz: 0", "o: 20", "oa: 0", "ob: 0", "oc: 0", "od: 0", "oe: 0", "of: 0", "og: 0", "oh: 0", "oi: 0", "oj: 0", "ok: 0", "ol: 0", "om: 0", "on: 0", "oo: 0", "op: 0", "oq: 0", "or: 0", "os: 0", "ot: 0", "ou: 0", "ov: 0", "ow: 0", "ox: 0", "oy: 0", "oz: 0", "p: 34", "q: 21", "r: 12", "s: 12", "t: 16", "u: 74", "v: 9", "w: 16", "x: 8", "y: 1", "z: 17"};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> parentData = {"hk,ft ki,kb dg,bg jy,hw eg,di cw,ak ka,gq mv,ga ch", ",a gw,gu dw,ax i,c cu,n hf,gc hc,x ag,n be,b bp,ab", " bk,h ms,cn mu,z fs,u kn,iy hu,hk gz,bv mg,c bm,bd", " lz,kt lq,ii gs,fh el,ch cc,an fl,ee kb,cr fe,ca o", "r,ky gq,bz jb,f ho,ch ca,aw kg,ht gy,dy ai,u hd,bz", " iv,ia mm,dr nf,fa do,cy cd,p cm,i jr,je ks,gn ov,", "dn cx,by bv,ai fw,dv jx,ax oi,ev iz,dx m,k bl,u le", ",gg dq,bm hh,fq gc,eh x,q mw,bb lu,ab ac,f en,aw n", "t,da cl,cj bd,au ev,ee jp,dh ht,ck gb,eg gx,gq ob,", "mq lr,hr db,cs av,ROOT bo,ap fr,w cb,o il,id kf,br", " hl,hg ju,cp ao,af et,aj in,hg nr,gk mp,bz ml,cd a", "j,ac no,jq bs,aw ff,ROOT cj,ci nq,gt og,cc gm,az c", ",a lw,ak ia,fj kp,ch al,w lx,cf ol,g nc,ch fh,cs j", "g,av kh,jz ak,aj hy,db dr,ai fc,eq jv,gs li,fg lb,", "gv jj,ch h,e go,ab oy,jx hs,p kl,eo ly,lx dt,bq kr", ",gb nn,e jw,gq ja,bb la,jb jc,cd ba,ab ay,aq lk,gt", " eq,f de,u jl,cs iw,bg oo,ha ap,ae k,h dz,p ik,dh ", "mq,at er,aw hx,di dk,bm gk,b is,ae j,ROOT jn,ii fm", ",r lh,ds cy,ac em,aa ko,av ni,nc ck,av br,bk kv,eg", " mk,ev eu,bg eh,aq mo,ho fa,ap oq,bd dh,ae bf,i nb", ",cz bc,k id,hy np,gd km,hd f,b js,jr gt,bf ow,nb a", "m,e kj,jj hb,co ke,gk aa,v u,f ln,dd ct,cs dv,df c", "r,ac bz,ad nd,de es,ee bb,h ec,by ee,ba gr,cg ih,c", "l dc,al gv,do ls,gu mt,as as,ak fo,eo d,a om,ex az", ",aj dl,bn jt,ad du,x nz,dk on,jd ix,ft cs,s gf,co ", "e,a ic,az hj,t jf,gs ok,fi gn,c w,p fi,df fn,dk ii", ",v nx,ac oa,ng ez,cg ci,t fj,an oh,bs aq,o ed,bs i", "m,bk kx,bh at,h a,ROOT hm,gt ae,d gg,ei hw,cq lj,c", "q cq,cj io,gy hv,ac ei,dp gd,dx co,as bw,bf dd,bw ", "ex,bo nl,dn lm,kk nk,nj ef,ac jd,ir mx,ge mr,ai mj", ",cy mz,iv kd,df lo,kj ga,fa n,e jm,br o,c gh,es ea", ",co ce,ay gl,er dx,dt bx,bd od,ih ir,da mi,jt bn,a", "q jo,gw lg,gj iu,bq ip,dm hr,ay oz,hg bt,au lv,ec ", "ma,js cg,ab q,f mh,ei gp,dg oj,hf mb,cn lf,gs bu,a", "p eb,aq ab,x he,dm kc,ab ah,k if,aw dj,cw oc,lw ou", ",kr hn,gs bg,as p,e au,n ny,je op,mb ll,fg s,c ge,", "bs jh,fa ld,kt ng,br z,w gu,go nh,gl hz,dx mc,jk l", "t,bg da,ao ib,dj fy,br dn,bn ha,aq hg,gs ji,ad ey,", "ee fk,dn ar,ah ep,ap kt,ei kz,dg dp,bs bq,av aw,k ", "ku,av fg,dt ek,aa cv,d fx,ce hi,eu lc,jr dm,i jk,c", "x ad,k kk,ew nj,w lp,dh mn,fb na,h b,a ew,dk gi,au", " eo,ay kq,bp ij,bl v,d nv,il t,r os,hg hp,bl iy,gd", " di,cl ax,l an,r ne,dh g,f mf,ax ot,dl l,k bj,f nu", ",bq me,dk gj,ed cp,cl je,el ky,r ns,ff md,at dy,al", " fv,al ox,ja oe,ap by,bi ie,hb af,j iq,cx of,gn bh", ",o ft,bp fz,r hq,ec fq,cb bi,i jq,ia fd,be y,h r,c", " df,bi fu,af ds,ap jz,dz cf,b cn,ah fp,ee ig,ee nw", ",jc kw,ha fb,aa my,cc cz,q nm,ey ej,dm it,o"};
    HierarchicalTree* pObj = new HierarchicalTree();
    clock_t start = clock();
    vector<string> result = pObj->countDescendants(parentData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT: 416", "a: 383", "aa: 4", "ab: 28", "ac: 37", "ad: 11", "ae: 20", "af: 7", "ag: 0", "ah: 5", "ai: 5", "aj: 25", "ak: 20", "al: 5", "am: 0", "an: 9", "ao: 5", "ap: 13", "aq: 23", "ar: 0", "as: 14", "at: 3", "au: 14", "av: 20", "aw: 22", "ax: 4", "ay: 7", "az: 2", "b: 103", "ba: 11", "bb: 3", "bc: 0", "bd: 11", "be: 1", "bf: 7", "bg: 7", "bh: 1", "bi: 14", "bj: 0", "bk: 7", "bl: 2", "bm: 8", "bn: 6", "bo: 2", "bp: 5", "bq: 13", "br: 5", "bs: 14", "bt: 0", "bu: 0", "bv: 1", "bw: 2", "bx: 0", "by: 7", "bz: 7", "c: 119", "ca: 1", "cb: 2", "cc: 2", "cd: 3", "ce: 1", "cf: 2", "cg: 2", "ch: 15", "ci: 17", "cj: 16", "ck: 2", "cl: 11", "cm: 0", "cn: 3", "co: 4", "cp: 1", "cq: 3", "cr: 2", "cs: 18", "ct: 0", "cu: 0", "cv: 0", "cw: 2", "cx: 3", "cy: 4", "cz: 2", "d: 31", "da: 4", "db: 4", "dc: 0", "dd: 1", "de: 1", "df: 5", "dg: 2", "dh: 4", "di: 6", "dj: 1", "dk: 6", "dl: 1", "dm: 3", "dn: 3", "do: 2", "dp: 7", "dq: 0", "dr: 1", "ds: 1", "dt: 10", "du: 0", "dv: 1", "dw: 0", "dx: 6", "dy: 2", "dz: 2", "e: 110", "ea: 0", "eb: 0", "ec: 2", "ed: 2", "ee: 10", "ef: 0", "eg: 4", "eh: 3", "ei: 6", "ej: 0", "ek: 0", "el: 6", "em: 0", "en: 0", "eo: 2", "ep: 0", "eq: 1", "er: 2", "es: 1", "et: 0", "eu: 1", "ev: 2", "ew: 2", "ex: 1", "ey: 1", "ez: 0", "f: 94", "fa: 4", "fb: 1", "fc: 0", "fd: 0", "fe: 0", "ff: 1", "fg: 2", "fh: 10", "fi: 1", "fj: 5", "fk: 0", "fl: 0", "fm: 0", "fn: 0", "fo: 0", "fp: 0", "fq: 1", "fr: 0", "fs: 0", "ft: 3", "fu: 0", "fv: 0", "fw: 0", "fx: 0", "fy: 0", "fz: 0", "g: 1", "ga: 1", "gb: 2", "gc: 2", "gd: 3", "ge: 1", "gf: 0", "gg: 1", "gh: 0", "gi: 0", "gj: 1", "gk: 2", "gl: 1", "gm: 0", "gn: 2", "go: 4", "gp: 0", "gq: 3", "gr: 0", "gs: 9", "gt: 3", "gu: 3", "gv: 1", "gw: 1", "gx: 0", "gy: 1", "gz: 0", "h: 68", "ha: 2", "hb: 1", "hc: 0", "hd: 1", "he: 0", "hf: 1", "hg: 4", "hh: 0", "hi: 0", "hj: 0", "hk: 1", "hl: 0", "hm: 0", "hn: 0", "ho: 1", "hp: 0", "hq: 0", "hr: 1", "hs: 0", "ht: 1", "hu: 0", "hv: 0", "hw: 1", "hx: 0", "hy: 3", "hz: 0", "i: 28", "ia: 4", "ib: 0", "ic: 0", "id: 2", "ie: 0", "if: 0", "ig: 0", "ih: 1", "ii: 2", "ij: 0", "ik: 0", "il: 1", "im: 0", "in: 0", "io: 0", "ip: 0", "iq: 0", "ir: 2", "is: 0", "it: 0", "iu: 0", "iv: 1", "iw: 0", "ix: 0", "iy: 1", "iz: 0", "j: 8", "ja: 1", "jb: 1", "jc: 1", "jd: 1", "je: 5", "jf: 0", "jg: 0", "jh: 0", "ji: 0", "jj: 2", "jk: 1", "jl: 0", "jm: 0", "jn: 0", "jo: 0", "jp: 0", "jq: 1", "jr: 3", "js: 1", "jt: 1", "ju: 0", "jv: 0", "jw: 0", "jx: 1", "jy: 0", "jz: 1", "k: 49", "ka: 0", "kb: 1", "kc: 0", "kd: 0", "ke: 0", "kf: 0", "kg: 0", "kh: 0", "ki: 0", "kj: 1", "kk: 1", "kl: 0", "km: 0", "kn: 0", "ko: 0", "kp: 0", "kq: 0", "kr: 1", "ks: 0", "kt: 2", "ku: 0", "kv: 0", "kw: 0", "kx: 0", "ky: 1", "kz: 0", "l: 5", "la: 0", "lb: 0", "lc: 0", "ld: 0", "le: 0", "lf: 0", "lg: 0", "lh: 0", "li: 0", "lj: 0", "lk: 0", "ll: 0", "lm: 0", "ln: 0", "lo: 0", "lp: 0", "lq: 0", "lr: 0", "ls: 0", "lt: 0", "lu: 0", "lv: 0", "lw: 1", "lx: 1", "ly: 0", "lz: 0", "m: 0", "ma: 0", "mb: 1", "mc: 0", "md: 0", "me: 0", "mf: 0", "mg: 0", "mh: 0", "mi: 0", "mj: 0", "mk: 0", "ml: 0", "mm: 0", "mn: 0", "mo: 0", "mp: 0", "mq: 1", "mr: 0", "ms: 0", "mt: 0", "mu: 0", "mv: 0", "mw: 0", "mx: 0", "my: 0", "mz: 0", "n: 17", "na: 0", "nb: 1", "nc: 1", "nd: 0", "ne: 0", "nf: 0", "ng: 1", "nh: 0", "ni: 0", "nj: 1", "nk: 0", "nl: 0", "nm: 0", "nn: 0", "no: 0", "np: 0", "nq: 0", "nr: 0", "ns: 0", "nt: 0", "nu: 0", "nv: 0", "nw: 0", "nx: 0", "ny: 0", "nz: 0", "o: 30", "oa: 0", "ob: 0", "oc: 0", "od: 0", "oe: 0", "of: 0", "og: 0", "oh: 0", "oi: 0", "oj: 0", "ok: 0", "ol: 0", "om: 0", "on: 0", "oo: 0", "op: 0", "oq: 0", "or: 0", "os: 0", "ot: 0", "ou: 0", "ov: 0", "ow: 0", "ox: 0", "oy: 0", "oz: 0", "p: 20", "q: 35", "r: 34", "s: 19", "t: 19", "u: 12", "v: 8", "w: 11", "x: 31", "y: 0", "z: 1"};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> parentData = {"dp,bg le,b gr,bn fj,cy eb,k kj,af lv,aj bs,m mz,bc", " my,bf gk,fe jm,dt ig,dz is,fb go,au nf,kj ch,d hf", ",af cg,ag gx,dt nx,bb ci,aj fl,ey jj,aw do,ad ob,k", "n gv,by cw,bo ds,co lf,hz fp,bb gq,gd hv,es ck,bm ", "ix,iu bh,b ff,er c,b co,a ar,am nv,ik ad,ac gg,cl ", "kl,fz ja,k ij,dq kt,gx de,t id,ah mf,dt iz,ag ir,f", "w ko,hf fw,v hp,ci em,w jk,w hi,ar mm,n cd,cb kq,h", "x bk,ao ce,bn gl,ft nk,bu gd,bm kh,cd gw,ea oi,el ", "cn,bj lx,iw ns,n cc,bs it,im jr,eq ev,ai fs,cw mq,", "ct bv,w jp,aq kd,el ka,cc am,h db,aa nh,q dg,dd cv", ",at ep,ee jl,et hy,he e,a ao,t hc,fv ne,hf ld,ie l", "l,o ex,cb ke,fy iy,hs mu,hr cq,at gu,co t,ROOT iu,", "ci aj,c gj,ew mc,eg da,co ey,ed lu,ft fb,ag p,o lw", ",bu ng,eq dz,ak iw,bt ju,bu f,c nt,lq ml,kx x,q gn", ",s op,kw kx,ev ek,ee ku,jp jd,hd bw,bo os,ha hb,gh", " io,fs dx,cv on,dp eh,aq av,v q,o dr,be lz,kz fc,c", "y nb,bq gp,fc mh,dj eq,q el,w jn,gx bi,am nu,he ol", ",ha ik,gg bt,at gf,a lg,jx nj,fp ot,hc dj,a hl,at ", "n,l hs,gx fk,co gc,az er,e fa,ei mb,eo bb,ba hq,he", " fo,di bp,ai oj,dm fz,bt cz,bd jy,aw lq,fc ga,ed k", "i,dp hx,cb gt,di nn,li iq,er kn,dy ha,gn km,dr na,", "kk bj,ar nm,nk oo,lj kc,et jo,fz gz,fp dc,bp hw,dl", " ai,i mk,kk m,l he,z ls,ba bq,w jg,ir lm,cv ae,j h", "g,gw cm,ROOT cb,y cf,ar ej,bq mw,ia me,al bo,aa nl", ",hu cy,cg fx,ax jt,ev kr,gb dy,dk oa,h v,i bf,x ic", ",hn fr,fi gb,fl ib,ax hn,aa u,j mo,an br,l dw,bm f", "n,da be,e aa,v fh,bx mr,fr af,i lh,cl ih,ev md,ck ", "lj,kc a,ROOT hz,ay ou,js gm,bq es,ej bz,bl k,b ew,", "em ov,nl om,ez z,d of,bf r,l gs,cx mx,mp bn,j kw,h", "c an,al oy,fy lt,lq jc,dv nr,ds o,i fi,ba ax,at og", ",bn ii,gd hh,gi ok,mr jz,bk i,a gi,e az,l ht,cp cs", ",t al,r ge,fz ky,kb if,u nq,gp ec,ba ez,ROOT np,fo", " du,cr ag,af jf,ik ak,p hj,ca dd,db mi,la fg,aj dv", ",ad oc,gj mv,eh ft,ci ia,ex as,ak im,ie fd,x kp,ec", " dh,db bc,au fu,g l,c dt,dj ox,y ah,l in,gz w,d lp", ",hu au,ah mt,lf bl,ba ct,cq ks,ia oh,ROOT aw,f ay,", "l ms,aw cr,ce lo,jc hr,br ca,at ee,z jv,bf ef,ee k", "f,ik df,s fm,eg kb,w bm,ai h,e kv,iy od,mj nz,ef e", "u,ef cx,k li,lc jh,gv lr,dp kk,cs j,e eo,g dm,aa m", "j,du ei,bc d,c bd,an hk,ej la,l en,ck dn,de bg,ba ", "g,ROOT lk,jb dk,aq jq,fv lb,fw ma,dg fe,di js,ap j", "b,af ed,bf hu,fd bu,bt et,bl il,bx nd,kf mg,gr ow,", "ae oe,bj cu,cj ea,ac cl,n mn,li y,c gy,q hd,gt ac,", "y jx,gu no,jx dq,ak je,ag oq,fm gh,dp mp,cb ly,bk ", "ip,cb ln,kv di,cj eg,ba ni,jp dl,bc ho,cd oz,du kz", ",gq iv,dc hm,fy ji,al fq,ax nw,lf s,k cj,ay lc,fy ", "bx,au jw,d kg,bo fv,x ap,b ab,u aq,ae fy,w ie,bt b", "y,ap at,z ba,am nc,cd or,hm cp,l ny,ht b,a"};
    HierarchicalTree* pObj = new HierarchicalTree();
    clock_t start = clock();
    vector<string> result = pObj->countDescendants(parentData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT: 416", "a: 396", "aa: 15", "ab: 0", "ac: 8", "ad: 4", "ae: 11", "af: 21", "ag: 13", "ah: 12", "ai: 18", "aj: 9", "ak: 5", "al: 6", "am: 39", "an: 3", "ao: 3", "ap: 5", "aq: 9", "ar: 5", "as: 0", "at: 29", "au: 10", "av: 0", "aw: 3", "ax: 3", "ay: 14", "az: 1", "b: 194", "ba: 31", "bb: 5", "bc: 5", "bd: 1", "be: 2", "bf: 9", "bg: 6", "bh: 0", "bi: 0", "bj: 2", "bk: 2", "bl: 6", "bm: 9", "bn: 9", "bo: 5", "bp: 2", "bq: 6", "br: 2", "bs: 2", "bt: 15", "bu: 4", "bv: 0", "bw: 0", "bx: 2", "by: 2", "bz: 0", "c: 174", "ca: 1", "cb: 13", "cc: 1", "cd: 3", "ce: 5", "cf: 0", "cg: 8", "ch: 0", "ci: 6", "cj: 9", "ck: 2", "cl: 7", "cm: 0", "cn: 0", "co: 9", "cp: 2", "cq: 2", "cr: 4", "cs: 3", "ct: 1", "cu: 0", "cv: 2", "cw: 2", "cx: 1", "cy: 7", "cz: 0", "d: 71", "da: 1", "db: 4", "dc: 1", "dd: 2", "de: 1", "df: 0", "dg: 1", "dh: 0", "di: 7", "dj: 11", "dk: 3", "dl: 1", "dm: 1", "dn: 0", "do: 0", "dp: 5", "dq: 1", "dr: 1", "ds: 1", "dt: 9", "du: 3", "dv: 2", "dw: 0", "dx: 0", "dy: 2", "dz: 1", "e: 76", "ea: 2", "eb: 0", "ec: 1", "ed: 5", "ee: 5", "ef: 2", "eg: 3", "eh: 1", "ei: 1", "ej: 3", "ek: 0", "el: 2", "em: 3", "en: 0", "eo: 1", "ep: 0", "eq: 2", "er: 2", "es: 1", "et: 4", "eu: 0", "ev: 4", "ew: 2", "ex: 3", "ey: 3", "ez: 1", "f: 4", "fa: 0", "fb: 1", "fc: 5", "fd: 4", "fe: 1", "ff: 0", "fg: 0", "fh: 0", "fi: 3", "fj: 0", "fk: 0", "fl: 2", "fm: 1", "fn: 0", "fo: 1", "fp: 3", "fq: 0", "fr: 2", "fs: 1", "ft: 2", "fu: 0", "fv: 5", "fw: 3", "fx: 0", "fy: 8", "fz: 3", "g: 3", "ga: 0", "gb: 1", "gc: 0", "gd: 4", "ge: 0", "gf: 0", "gg: 5", "gh: 1", "gi: 1", "gj: 1", "gk: 0", "gl: 0", "gm: 0", "gn: 3", "go: 0", "gp: 1", "gq: 2", "gr: 1", "gs: 0", "gt: 2", "gu: 3", "gv: 1", "gw: 1", "gx: 6", "gy: 0", "gz: 1", "h: 41", "ha: 2", "hb: 0", "hc: 3", "hd: 1", "he: 3", "hf: 2", "hg: 0", "hh: 0", "hi: 0", "hj: 0", "hk: 0", "hl: 0", "hm: 1", "hn: 1", "ho: 0", "hp: 0", "hq: 0", "hr: 1", "hs: 3", "ht: 1", "hu: 3", "hv: 0", "hw: 0", "hx: 1", "hy: 0", "hz: 3", "i: 100", "ia: 2", "ib: 0", "ic: 0", "id: 0", "ie: 3", "if: 0", "ig: 0", "ih: 0", "ii: 0", "ij: 0", "ik: 4", "il: 0", "im: 1", "in: 0", "io: 0", "ip: 0", "iq: 0", "ir: 1", "is: 0", "it: 0", "iu: 1", "iv: 0", "iw: 1", "ix: 0", "iy: 2", "iz: 0", "j: 25", "ja: 0", "jb: 1", "jc: 1", "jd: 0", "je: 0", "jf: 0", "jg: 0", "jh: 0", "ji: 0", "jj: 0", "jk: 0", "jl: 0", "jm: 0", "jn: 0", "jo: 0", "jp: 2", "jq: 0", "jr: 0", "js: 1", "jt: 0", "ju: 0", "jv: 0", "jw: 0", "jx: 2", "jy: 0", "jz: 0", "k: 10", "ka: 0", "kb: 1", "kc: 2", "kd: 0", "ke: 0", "kf: 1", "kg: 0", "kh: 0", "ki: 0", "kj: 1", "kk: 2", "kl: 0", "km: 0", "kn: 1", "ko: 0", "kp: 0", "kq: 0", "kr: 0", "ks: 0", "kt: 0", "ku: 0", "kv: 1", "kw: 1", "kx: 1", "ky: 0", "kz: 1", "l: 61", "la: 1", "lb: 0", "lc: 3", "ld: 0", "le: 0", "lf: 2", "lg: 0", "lh: 0", "li: 2", "lj: 1", "lk: 0", "ll: 0", "lm: 0", "ln: 0", "lo: 0", "lp: 0", "lq: 2", "lr: 0", "ls: 0", "lt: 0", "lu: 0", "lv: 0", "lw: 0", "lx: 0", "ly: 0", "lz: 0", "m: 3", "ma: 0", "mb: 0", "mc: 0", "md: 0", "me: 0", "mf: 0", "mg: 0", "mh: 0", "mi: 0", "mj: 1", "mk: 0", "ml: 0", "mm: 0", "mn: 0", "mo: 0", "mp: 1", "mq: 0", "mr: 1", "ms: 0", "mt: 0", "mu: 0", "mv: 0", "mw: 0", "mx: 0", "my: 0", "mz: 0", "n: 10", "na: 0", "nb: 0", "nc: 0", "nd: 0", "ne: 0", "nf: 0", "ng: 0", "nh: 0", "ni: 0", "nj: 0", "nk: 1", "nl: 1", "nm: 0", "nn: 0", "no: 0", "np: 0", "nq: 0", "nr: 0", "ns: 0", "nt: 0", "nu: 0", "nv: 0", "nw: 0", "nx: 0", "ny: 0", "nz: 0", "o: 36", "oa: 0", "ob: 0", "oc: 0", "od: 0", "oe: 0", "of: 0", "og: 0", "oh: 0", "oi: 0", "oj: 0", "ok: 0", "ol: 0", "om: 0", "on: 0", "oo: 0", "op: 0", "oq: 0", "or: 0", "os: 0", "ot: 0", "ou: 0", "ov: 0", "ow: 0", "ox: 0", "oy: 0", "oz: 0", "p: 6", "q: 27", "r: 7", "s: 5", "t: 10", "u: 2", "v: 21", "w: 27", "x: 21", "y: 24", "z: 40"};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> parentData = {"ed,du eb,d nz,hd ih,gl mh,ay mz,bd ja,hz aa,l ok,d", "q na,iy ly,id x,ROOT le,gy ik,de jn,gx gr,eo np,dx", " in,dd jo,ii nn,ev ig,hp mg,fo ge,fz gd,a fh,au hl", ",hj bh,au mu,ac af,s ba,ar db,at ee,y lb,fj ao,ac ", "os,ep ke,jx er,cg ny,de nr,gl ic,ff de,bg ak,v eu,", "i cm,bn bk,av av,w bj,ak kb,ad io,r kz,ke b,ROOT o", ",j ci,bb nf,kw aw,v cp,bc hp,h at,s im,r mn,ej eg,", "cs j,h dz,cm bc,av lv,km gp,go az,e ms,kk lw,bz is", ",t bi,h oz,ja la,hf ju,fz g,b jf,ROOT oe,dg aq,t j", "g,fv ko,by ec,cl as,v ks,ag jx,iu ii,v nh,l iq,fs ", "h,e al,q hr,ar ml,cg aj,af dk,al kn,jg mo,ga fg,dk", " bo,bh gi,fk lm,ad fy,as dd,ROOT lg,if ng,ii iz,fz", " cn,ar jr,eb jl,bi fb,aw jw,l cb,bw kl,bl gw,ax ld", ",x he,fo lu,co gs,dk by,k fj,dx gm,aw da,cd hb,h d", "c,da oy,iq jj,co ai,d ib,bx ln,ar be,ah ft,ce bq,h", " gk,eu bs,ao jb,ck it,il a,ROOT mk,ct r,b ev,ci bg", ",ai cs,e eq,as bd,s ho,gi gt,bs s,f il,hv fo,ei jh", ",eb hu,gq ht,bs cd,bl hq,g lf,de hs,d l,i lc,gc lj", ",fr ah,ad ef,bt fl,eh lk,bh fp,ei fc,x cu,q kc,bd ", "cf,ap ap,ak gn,do ei,dv ae,p nu,ac z,w ar,d no,l l", "t,ai dt,dr ip,ho kg,af w,v nt,gj ds,ar mj,es hn,ap", " fm,af ad,s ns,it mf,ii fr,bj an,h kk,ai my,fb nw,", "no jp,bv mv,aw co,aq ll,ff q,j id,ao oq,ip ga,df i", "a,er ka,bg jd,dc hi,fo fw,x el,af lz,bn hg,bn ki,a", "u bn,t dp,w jy,iy or,g gz,as kw,az jm,dl nj,cq n,j", " lp,dg ac,r m,a dg,b ay,ak bu,az au,ai ou,bq fz,cf", " md,jq ex,bk cx,bl nc,hh en,v jk,bq dm,aj cl,ah du", ",m mx,md oa,hj dh,az d,a gl,em op,hw ab,h bf,ag lx", ",dx nx,ia ir,ds ew,l dj,ac cr,ag nd,ea ey,ek gv,r ", "fu,cd ct,au of,at bx,am if,fg do,q hz,ROOT fi,cy j", "s,gg es,cf dv,ah bw,af cg,l gq,gi ix,cf ck,ce mt,k", "d nm,c cv,b od,jw ku,dm ne,hj u,r f,c hh,am on,ds ", "hy,x fq,dw fn,ao fx,ew dl,f go,fo oi,iy ff,dd gf,e", "n hc,gy ch,bs oc,dc ky,bw bt,ag c,ROOT kt,v em,dy ", "dr,cd ow,mn jz,eo ej,ce km,bf og,ik oj,it kq,de lr", ",gm ek,ag cz,ct iw,q hm,bn gj,bk li,bp y,a nl,jo i", "u,cn ni,ex gy,bz iv,t fk,t mr,jy am,ak mi,fw ce,ae", " p,b t,o ma,fd ea,bh cc,bk jt,gn ox,jx mw,fh dq,bf", " k,f jc,dc kh,hr mq,ff jv,ep mc,ie kf,fe eh,ac v,b", " br,a ov,jr hv,go om,if ha,ROOT nq,j hx,y ep,i nk,", "n lh,ii ji,am dw,be dy,ca kx,ik fa,bp e,ROOT ls,hg", " hf,bo ob,hg bv,aj fv,ex fs,dy ag,y ax,af gg,at ot", ",lt fe,t kr,fs kp,hq oo,ko hj,gw lq,ab gx,fp gh,fy", " hd,co me,ii dn,bs cy,ag gb,cl ez,ag ie,dx je,cs d", "x,ac iy,id bp,i nv,ay kd,ee nb,fp hk,fr hw,ae et,e", "g eo,do mp,n oh,hv gu,gi ca,aa mm,ax lo,hu bz,au k", "j,jr gc,cv cq,u ij,hs kv,hh mb,fj cj,at fd,fa cw,b", "j jq,fd di,k ol,gm i,c df,aa bl,m bb,av bm,aa"};
    HierarchicalTree* pObj = new HierarchicalTree();
    clock_t start = clock();
    vector<string> result = pObj->countDescendants(parentData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT: 416", "a: 92", "aa: 14", "ab: 1", "ac: 27", "ad: 27", "ae: 9", "af: 18", "ag: 14", "ah: 24", "ai: 32", "aj: 4", "ak: 25", "al: 6", "am: 6", "an: 0", "ao: 13", "ap: 9", "aq: 5", "ar: 13", "as: 4", "at: 5", "au: 18", "av: 15", "aw: 6", "ax: 6", "ay: 2", "az: 4", "b: 124", "ba: 0", "bb: 3", "bc: 1", "bd: 2", "be: 2", "bf: 4", "bg: 8", "bh: 6", "bi: 1", "bj: 4", "bk: 8", "bl: 11", "bm: 0", "bn: 7", "bo: 2", "bp: 7", "bq: 2", "br: 0", "bs: 4", "bt: 1", "bu: 0", "bv: 1", "bw: 2", "bx: 1", "by: 2", "bz: 4", "c: 108", "ca: 9", "cb: 0", "cc: 0", "cd: 8", "ce: 6", "cf: 7", "cg: 4", "ch: 0", "ci: 2", "cj: 0", "ck: 1", "cl: 2", "cm: 1", "cn: 5", "co: 4", "cp: 0", "cq: 1", "cr: 0", "cs: 3", "ct: 2", "cu: 0", "cv: 2", "cw: 0", "cx: 0", "cy: 1", "cz: 0", "d: 54", "da: 4", "db: 0", "dc: 3", "dd: 5", "de: 6", "df: 2", "dg: 2", "dh: 0", "di: 0", "dj: 0", "dk: 5", "dl: 1", "dm: 1", "dn: 0", "do: 5", "dp: 0", "dq: 1", "dr: 1", "ds: 2", "dt: 0", "du: 1", "dv: 17", "dw: 1", "dx: 7", "dy: 8", "dz: 0", "e: 71", "ea: 1", "eb: 4", "ec: 0", "ed: 0", "ee: 2", "ef: 0", "eg: 1", "eh: 1", "ei: 16", "ej: 2", "ek: 1", "el: 0", "em: 3", "en: 1", "eo: 2", "ep: 2", "eq: 0", "er: 2", "es: 1", "et: 0", "eu: 1", "ev: 1", "ew: 1", "ex: 4", "ey: 0", "ez: 0", "f: 64", "fa: 5", "fb: 1", "fc: 0", "fd: 4", "fe: 1", "ff: 3", "fg: 3", "fh: 1", "fi: 0", "fj: 2", "fk: 8", "fl: 0", "fm: 0", "fn: 0", "fo: 11", "fp: 3", "fq: 0", "fr: 2", "fs: 3", "ft: 0", "fu: 0", "fv: 2", "fw: 1", "fx: 0", "fy: 1", "fz: 3", "g: 3", "ga: 1", "gb: 0", "gc: 1", "gd: 0", "ge: 0", "gf: 0", "gg: 1", "gh: 0", "gi: 7", "gj: 1", "gk: 0", "gl: 2", "gm: 2", "gn: 1", "go: 7", "gp: 0", "gq: 2", "gr: 0", "gs: 0", "gt: 0", "gu: 0", "gv: 0", "gw: 4", "gx: 1", "gy: 2", "gz: 0", "h: 61", "ha: 0", "hb: 0", "hc: 0", "hd: 1", "he: 0", "hf: 1", "hg: 2", "hh: 2", "hi: 0", "hj: 3", "hk: 0", "hl: 0", "hm: 0", "hn: 0", "ho: 2", "hp: 1", "hq: 1", "hr: 1", "hs: 1", "ht: 0", "hu: 1", "hv: 5", "hw: 1", "hx: 0", "hy: 0", "hz: 2", "i: 41", "ia: 1", "ib: 0", "ic: 0", "id: 6", "ie: 1", "if: 2", "ig: 0", "ih: 0", "ii: 6", "ij: 0", "ik: 2", "il: 3", "im: 0", "in: 0", "io: 0", "ip: 1", "iq: 1", "ir: 0", "is: 0", "it: 2", "iu: 4", "iv: 0", "iw: 0", "ix: 0", "iy: 4", "iz: 0", "j: 49", "ja: 1", "jb: 0", "jc: 0", "jd: 0", "je: 0", "jf: 0", "jg: 1", "jh: 0", "ji: 0", "jj: 0", "jk: 0", "jl: 0", "jm: 0", "jn: 0", "jo: 1", "jp: 0", "jq: 2", "jr: 2", "js: 0", "jt: 0", "ju: 0", "jv: 0", "jw: 1", "jx: 3", "jy: 1", "jz: 0", "k: 4", "ka: 0", "kb: 0", "kc: 0", "kd: 1", "ke: 1", "kf: 0", "kg: 0", "kh: 0", "ki: 0", "kj: 0", "kk: 1", "kl: 0", "km: 1", "kn: 0", "ko: 1", "kp: 0", "kq: 0", "kr: 0", "ks: 0", "kt: 0", "ku: 0", "kv: 0", "kw: 1", "kx: 0", "ky: 0", "kz: 0", "l: 27", "la: 0", "lb: 0", "lc: 0", "ld: 0", "le: 0", "lf: 0", "lg: 0", "lh: 0", "li: 0", "lj: 0", "lk: 0", "ll: 0", "lm: 0", "ln: 0", "lo: 0", "lp: 0", "lq: 0", "lr: 0", "ls: 0", "lt: 1", "lu: 0", "lv: 0", "lw: 0", "lx: 0", "ly: 0", "lz: 0", "m: 14", "ma: 0", "mb: 0", "mc: 0", "md: 1", "me: 0", "mf: 0", "mg: 0", "mh: 0", "mi: 0", "mj: 0", "mk: 0", "ml: 0", "mm: 0", "mn: 1", "mo: 0", "mp: 0", "mq: 0", "mr: 0", "ms: 0", "mt: 0", "mu: 0", "mv: 0", "mw: 0", "mx: 0", "my: 0", "mz: 0", "n: 2", "na: 0", "nb: 0", "nc: 0", "nd: 0", "ne: 0", "nf: 0", "ng: 0", "nh: 0", "ni: 0", "nj: 0", "nk: 0", "nl: 0", "nm: 0", "nn: 0", "no: 1", "np: 0", "nq: 0", "nr: 0", "ns: 0", "nt: 0", "nu: 0", "nv: 0", "nw: 0", "nx: 0", "ny: 0", "nz: 0", "o: 28", "oa: 0", "ob: 0", "oc: 0", "od: 0", "oe: 0", "of: 0", "og: 0", "oh: 0", "oi: 0", "oj: 0", "ok: 0", "ol: 0", "om: 0", "on: 0", "oo: 0", "op: 0", "oq: 0", "or: 0", "os: 0", "ot: 0", "ou: 0", "ov: 0", "ow: 0", "ox: 0", "oy: 0", "oz: 0", "p: 10", "q: 15", "r: 34", "s: 56", "t: 27", "u: 2", "v: 67", "w: 18", "x: 5", "y: 19", "z: 0"};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> parentData = {"ox,kl gt,cr bw,ax cs,co jv,v mn,g gf,eb ii,bu hf,c", "u q,n ex,x oe,fg nm,mt bi,f od,fi bp,bn eo,bg al,a", "e mk,jg jn,gi hb,ay cy,ab bk,j gc,fi bv,bi gh,aw m", "q,ar by,an le,hn c,ROOT mr,cf hw,dm jc,a u,h v,t j", "x,ez ad,c dr,an h,ROOT fg,ef lz,cq ot,os ag,ad fn,", "ab dd,ba hn,i bz,at an,ae lw,gp b,ROOT fb,ai cw,am", " ov,ng oj,de is,df nd,iw cz,u kh,hm lu,hc lg,hx hz", ",be fs,cq km,eh gz,bn cq,l ha,ed ae,aa db,g fk,dj ", "dt,ct hj,h nz,ly kc,gv hx,aw j,h cc,bf ko,bv dw,as", " aq,ah hg,t ct,az ce,ak ie,fx im,fk fp,fk av,c bb,", "f ho,fm kg,f os,da kb,co cd,d kf,fj iw,cs jo,hm mi", ",lm ac,l jk,io fh,bu o,k og,fb fl,by mv,ao et,ac l", "r,hx de,ap io,dz hk,bz fd,ex fm,as dl,cb eu,n hp,a", "j nl,kf dm,cf bl,q hy,dk oy,cn kn,ft jq,x eh,be ab", ",f lb,gu e,a fe,en au,ai aw,x kq,eb af,j ia,ct cp,", "af en,l at,an jf,ih hu,fs ao,aj y,ROOT jp,j iq,hj ", "nt,lj gn,cs mo,hp br,bk ba,e l,d ls,eo dj,cr aj,a ", "op,az gp,aa nf,gj p,ROOT lh,ec lm,dj or,mp my,aq c", "b,at fc,cx oa,ab nb,do nc,ho gj,cr dc,cw nq,ne li,", "jk ch,an w,n es,av az,ab cg,au bo,aj kx,ROOT co,bd", " k,f dp,s ok,gh ke,jx dx,ap er,bk ol,mv ji,ff fw,a", "h hi,w ks,hq cu,cg dq,at ow,fu la,db ld,hs bj,af k", "a,gz aa,v ec,m ah,u ck,ax jh,gx z,t ny,ie mz,ji gd", ",b ln,b dk,da cl,ca kz,jv fz,ci ig,gc dy,bk ge,ei ", "ll,go nx,kx ja,dg hv,fe nu,kv mj,fk fy,eq gi,ar mg", ",bz fq,dc dn,av lf,n bx,bc oi,fh ev,bf oh,cv hs,fv", " ms,ba il,hj ml,dk je,en ds,n js,ea ij,dn ap,ad ib", ",fo fu,dk a,ROOT mm,hc gx,cm t,a ma,b gv,ek dz,co ", "iy,ba cr,ad ca,q ej,e nn,kq jd,eq ku,fq ep,cn ei,d", "f dh,ca ih,ea d,b on,es kj,br gy,eo ns,dy nh,lq hl", ",cx mp,ch gl,es fr,cg kr,kg cn,u do,ce cf,ag hd,ae", " gg,cp gu,ao du,do iu,em ga,cj jr,hg g,e fa,aj r,l", " ng,dg gm,cc n,b fj,ct ax,i ht,da ew,dr am,t oz,if", " di,bj eb,ae np,kh jw,bz ar,t ky,ev if,hr bn,h bh,", "ag it,z lk,fe df,l ay,ab hc,f dg,dc nj,ao jj,ac f,", "c gq,av fx,am em,bz gw,go ne,cz bc,k hr,gj iz,dl i", "r,ft nr,dr kw,eb bt,bq ak,l i,a lp,kq ee,ao bq,d l", "c,hj ey,el bu,at kl,h lo,dt bg,aj ob,kg fv,fj gk,b", "k bs,af x,b jm,ag me,at ea,ci fi,bb id,cv cj,ab ed", ",cf ip,fx s,q hh,fm ff,c hq,gv jt,at hm,fx mx,cq i", "x,av mb,hl ju,gk fo,g el,ck cx,ce eq,ai ic,gb kk,h", "t gr,ex lq,al ft,dr gs,fc be,s gb,es om,ch ni,hp j", "l,gb ki,gw ai,q kp,jj oc,jo kv,hh kt,dt oq,dz dv,b", "g na,bs go,al of,gl ef,br cm,af mw,dq eg,cv mh,ct ", "ci,bm mt,bz lv,id bm,bc ou,ji m,e mc,ae lt,b mf,ei", " ez,cj md,gj bd,a cv,bs no,hr ik,cw jg,fb nw,lq lx", ",fc mu,l kd,ib iv,fu as,j nk,ih jy,gg oo,is jz,fl ", "da,ck bf,p lj,et nv,kw in,fx ek,cv ly,gf he,eq jb,", "do"};
    HierarchicalTree* pObj = new HierarchicalTree();
    clock_t start = clock();
    vector<string> result = pObj->countDescendants(parentData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT: 416", "a: 155", "aa: 56", "ab: 24", "ac: 5", "ad: 29", "ae: 53", "af: 20", "ag: 8", "ah: 3", "ai: 13", "aj: 17", "ak: 11", "al: 7", "am: 19", "an: 33", "ao: 6", "ap: 3", "aq: 1", "ar: 3", "as: 7", "at: 19", "au: 4", "av: 11", "aw: 5", "ax: 15", "ay: 1", "az: 13", "b: 87", "ba: 3", "bb: 4", "bc: 9", "bd: 11", "be: 3", "bf: 4", "bg: 4", "bh: 0", "bi: 2", "bj: 1", "bk: 10", "bl: 0", "bm: 7", "bn: 3", "bo: 0", "bp: 0", "bq: 1", "br: 4", "bs: 11", "bt: 0", "bu: 3", "bv: 1", "bw: 0", "bx: 0", "by: 2", "bz: 7", "c: 98", "ca: 2", "cb: 2", "cc: 1", "cd: 0", "ce: 10", "cf: 5", "cg: 3", "ch: 3", "ci: 6", "cj: 4", "ck: 13", "cl: 0", "cm: 2", "cn: 2", "co: 10", "cp: 2", "cq: 4", "cr: 15", "cs: 3", "ct: 11", "cu: 1", "cv: 9", "cw: 8", "cx: 5", "cy: 0", "cz: 2", "d: 40", "da: 10", "db: 1", "dc: 6", "dd: 0", "de: 1", "df: 5", "dg: 3", "dh: 0", "di: 0", "dj: 6", "dk: 5", "dl: 1", "dm: 1", "dn: 1", "do: 3", "dp: 0", "dq: 1", "dr: 5", "ds: 0", "dt: 2", "du: 0", "dv: 0", "dw: 0", "dx: 0", "dy: 1", "dz: 4", "e: 15", "ea: 4", "eb: 8", "ec: 1", "ed: 1", "ee: 0", "ef: 2", "eg: 0", "eh: 1", "ei: 2", "ej: 0", "ek: 4", "el: 1", "em: 1", "en: 4", "eo: 2", "ep: 0", "eq: 3", "er: 0", "es: 6", "et: 2", "eu: 0", "ev: 1", "ew: 0", "ex: 2", "ey: 0", "ez: 2", "f: 51", "fa: 0", "fb: 3", "fc: 2", "fd: 0", "fe: 2", "ff: 3", "fg: 1", "fh: 1", "fi: 3", "fj: 5", "fk: 3", "fl: 1", "fm: 5", "fn: 0", "fo: 2", "fp: 0", "fq: 1", "fr: 0", "fs: 1", "ft: 2", "fu: 2", "fv: 2", "fw: 0", "fx: 9", "fy: 0", "fz: 0", "g: 6", "ga: 0", "gb: 2", "gc: 1", "gd: 0", "ge: 0", "gf: 2", "gg: 1", "gh: 1", "gi: 1", "gj: 6", "gk: 1", "gl: 1", "gm: 0", "gn: 0", "go: 3", "gp: 1", "gq: 0", "gr: 0", "gs: 0", "gt: 0", "gu: 1", "gv: 3", "gw: 1", "gx: 1", "gy: 0", "gz: 1", "h: 63", "ha: 0", "hb: 0", "hc: 2", "hd: 0", "he: 0", "hf: 0", "hg: 1", "hh: 2", "hi: 0", "hj: 3", "hk: 0", "hl: 1", "hm: 4", "hn: 1", "ho: 1", "hp: 2", "hq: 1", "hr: 3", "hs: 1", "ht: 1", "hu: 0", "hv: 0", "hw: 0", "hx: 2", "hy: 0", "hz: 0", "i: 18", "ia: 0", "ib: 1", "ic: 0", "id: 1", "ie: 1", "if: 1", "ig: 0", "ih: 2", "ii: 0", "ij: 0", "ik: 0", "il: 0", "im: 0", "in: 0", "io: 2", "ip: 0", "iq: 0", "ir: 0", "is: 1", "it: 0", "iu: 0", "iv: 0", "iw: 1", "ix: 0", "iy: 0", "iz: 0", "j: 41", "ja: 0", "jb: 0", "jc: 0", "jd: 0", "je: 0", "jf: 0", "jg: 1", "jh: 0", "ji: 2", "jj: 1", "jk: 1", "jl: 0", "jm: 0", "jn: 0", "jo: 1", "jp: 0", "jq: 0", "jr: 0", "js: 0", "jt: 0", "ju: 0", "jv: 1", "jw: 0", "jx: 1", "jy: 0", "jz: 0", "k: 11", "ka: 0", "kb: 0", "kc: 0", "kd: 0", "ke: 0", "kf: 1", "kg: 2", "kh: 1", "ki: 0", "kj: 0", "kk: 0", "kl: 1", "km: 0", "kn: 0", "ko: 0", "kp: 0", "kq: 2", "kr: 0", "ks: 0", "kt: 0", "ku: 0", "kv: 1", "kw: 1", "kx: 1", "ky: 0", "kz: 0", "l: 36", "la: 0", "lb: 0", "lc: 0", "ld: 0", "le: 0", "lf: 0", "lg: 0", "lh: 0", "li: 0", "lj: 1", "lk: 0", "ll: 0", "lm: 1", "ln: 0", "lo: 0", "lp: 0", "lq: 2", "lr: 0", "ls: 0", "lt: 0", "lu: 0", "lv: 0", "lw: 0", "lx: 0", "ly: 1", "lz: 0", "m: 2", "ma: 0", "mb: 0", "mc: 0", "md: 0", "me: 0", "mf: 0", "mg: 0", "mh: 0", "mi: 0", "mj: 0", "mk: 0", "ml: 0", "mm: 0", "mn: 0", "mo: 0", "mp: 1", "mq: 0", "mr: 0", "ms: 0", "mt: 1", "mu: 0", "mv: 1", "mw: 0", "mx: 0", "my: 0", "mz: 0", "n: 30", "na: 0", "nb: 0", "nc: 0", "nd: 0", "ne: 1", "nf: 0", "ng: 1", "nh: 0", "ni: 0", "nj: 0", "nk: 0", "nl: 0", "nm: 0", "nn: 0", "no: 0", "np: 0", "nq: 0", "nr: 0", "ns: 0", "nt: 0", "nu: 0", "nv: 0", "nw: 0", "nx: 0", "ny: 0", "nz: 0", "o: 0", "oa: 0", "ob: 0", "oc: 0", "od: 0", "oe: 0", "of: 0", "og: 0", "oh: 0", "oi: 0", "oj: 0", "ok: 0", "ol: 0", "om: 0", "on: 0", "oo: 0", "op: 0", "oq: 0", "or: 0", "os: 1", "ot: 0", "ou: 0", "ov: 0", "ow: 0", "ox: 0", "oy: 0", "oz: 0", "p: 5", "q: 24", "r: 0", "s: 5", "t: 88", "u: 10", "v: 59", "w: 1", "x: 10", "y: 0", "z: 1"};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> parentData = {"hx,gb w,t jv,bw br,bi du,ac bs,au aw,aj lg,q fv,cf", " fl,e it,hw ac,s of,fx hh,go hj,cw el,bp s,f an,s ", "dh,cs gd,ed as,ao eo,q gl,bm h,d ck,z fo,ROOT hu,b", "q mp,cs km,iw dr,dg ef,cm lz,kj az,n dp,m r,q kq,d", "o gx,gb er,k at,ak jf,em ev,dg jp,an bk,ag x,j kc,", "dq on,ds oy,gg cc,ay jc,ip ix,hq fy,an je,ia da,bq", " nz,fk eh,cf bl,as ff,dr dz,by l,f mc,hq jx,cw cg,", "ROOT oo,la lx,et dn,ab gw,av lc,bu ai,m gr,bc nc,i", "t ok,be il,do ko,iy eg,k ik,cn ns,ko gc,bv dx,ci j", "q,je nm,hx ji,hy z,f iq,im bm,ay g,e lw,co c,ROOT ", "nr,iv hv,ba ni,bi ie,ib cu,bt ob,b ol,jm aq,a f,b ", "nw,fd gp,ex om,il gg,bk gb,ft fh,c fz,ba df,ae u,n", " ex,bu ib,n ba,b oe,jv ld,eg dk,ct dw,y ay,at ky,k", "r my,ev dg,an fj,ee lj,fl mz,x eu,dw ao,x fe,m by,", "bb nl,jf bg,bd iv,fp kg,dp p,h ec,dq fu,do nh,z mh", ",at hd,y t,i fr,ct gn,g ho,u jo,fv ft,bb oz,kw ku,", "ie gq,q y,v lm,bq bh,aq jj,io ne,as bw,ab hf,co hm", ",dv mg,hh me,dh dd,bd lr,fa ip,hj ll,hs is,fm op,h", "n em,ai lk,bb oc,jh ak,a ox,do gu,ch ow,dw dm,am c", "e,w hk,ay or,ii nn,gy ng,hj q,d kl,gu oh,id kp,bz ", "kn,av ly,hf cd,at li,it v,i kt,jb lf,dt js,ci mw,h", "a cq,ak mi,bc et,ay ig,ex cv,cu b,a kr,kl og,db di", ",u ci,bf eq,cl bz,v gm,h o,e ae,c ek,dw bp,av cp,b", "r he,fn jh,ih k,f mr,ek os,eo jr,gd ia,fk lt,y mv,", "ja ou,gn cy,i av,x mu,dj bv,au d,c gy,db af,o lv,k", "q hz,gz la,gb go,do dt,cd cz,m ln,gk kv,ks lq,ROOT", " fd,bm es,v jb,ed aa,s mo,ku nk,dm co,ch iz,ft dc,", "k jd,io ls,a fp,co fx,ab ew,ad dq,dg ch,o ea,dk ga", ",dv jy,d ge,bg bd,ap le,dv gz,as al,v nf,dk hq,fi ", "dy,dv jw,v jl,dz kb,ft ee,al lo,hf gt,dh eb,l jm,b", "t mn,fv j,f lh,gk bb,a ep,em mq,l ab,n kw,dj iu,hb", " ml,cw kk,em ag,y mk,kr ht,gr bn,af lu,hd mf,cr ki", ",ee a,ROOT in,fd be,au nj,as fq,do nd,aa hl,gv hr,", "fr m,h ar,ai am,ab hn,bs fs,fi ny,hx kh,ds ey,dz n", ",l cw,c mb,gy hi,g ka,cj fn,bq fw,aw ha,db im,gl n", "b,eq cj,bp fi,ROOT oa,gl ot,fl cn,b fg,by dv,au en", ",bm oj,eb lb,jk ej,ak au,u bi,ah ez,ed ic,bk ap,a ", "gi,br jz,gc kx,cn hy,db hb,cf ks,iw ct,bl mm,ez ax", ",ad iw,hy nq,km dj,cl bt,ah bj,af ca,br iy,fw nu,e", "o do,cr gv,ec gh,bk ed,da db,cw cl,bl ah,n oi,lq j", "n,jj gs,k e,b ja,ip bo,ba ov,ho fc,f kf,fz hg,fw i", ",b mt,f np,lr nx,gc ir,hw cx,cn cs,aq ms,lk kj,jk ", "id,bt ma,eh ei,au bc,l kz,bq cr,aq md,ea de,be ad,", "p cb,bq oq,mr ih,aa jk,ig ds,bh ke,ce ij,bp hp,cn ", "na,cs ju,cx fm,af fk,fd bx,bq nv,hv mj,jk cf,m hc,", "cv jg,el io,bv cm,cg bq,bn if,cp nt,ki hs,t gf,dm ", "fa,bv jt,ip od,lz no,dp bf,i dl,cf fb,ca gj,al mx,", "ay hw,cx aj,ac bu,k ii,fc lp,jr kd,bv gk,ce"};
    HierarchicalTree* pObj = new HierarchicalTree();
    clock_t start = clock();
    vector<string> result = pObj->countDescendants(parentData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT: 416", "a: 339", "aa: 4", "ab: 10", "ac: 8", "ad: 2", "ae: 1", "af: 21", "ag: 5", "ah: 16", "ai: 6", "aj: 6", "ak: 27", "al: 5", "am: 3", "an: 12", "ao: 20", "ap: 4", "aq: 23", "ar: 0", "as: 19", "at: 24", "au: 24", "av: 8", "aw: 5", "ax: 0", "ay: 19", "az: 0", "b: 262", "ba: 5", "bb: 17", "bc: 3", "bd: 3", "be: 2", "bf: 3", "bg: 1", "bh: 3", "bi: 7", "bj: 0", "bk: 4", "bl: 14", "bm: 13", "bn: 17", "bo: 0", "bp: 5", "bq: 16", "br: 5", "bs: 2", "bt: 7", "bu: 10", "bv: 11", "bw: 2", "bx: 0", "by: 4", "bz: 1", "c: 64", "ca: 1", "cb: 0", "cc: 0", "cd: 2", "ce: 4", "cf: 8", "cg: 2", "ch: 13", "ci: 2", "cj: 1", "ck: 0", "cl: 6", "cm: 1", "cn: 10", "co: 7", "cp: 1", "cq: 0", "cr: 12", "cs: 5", "ct: 6", "cu: 2", "cv: 1", "cw: 23", "cx: 6", "cy: 0", "cz: 0", "d: 36", "da: 8", "db: 13", "dc: 0", "dd: 0", "de: 0", "df: 0", "dg: 9", "dh: 2", "di: 0", "dj: 3", "dk: 3", "dl: 0", "dm: 2", "dn: 0", "do: 10", "dp: 2", "dq: 4", "dr: 1", "ds: 2", "dt: 1", "du: 0", "dv: 4", "dw: 5", "dx: 0", "dy: 0", "dz: 2", "e: 44", "ea: 1", "eb: 1", "ec: 2", "ed: 7", "ee: 3", "ef: 0", "eg: 1", "eh: 1", "ei: 0", "ej: 0", "ek: 2", "el: 1", "em: 4", "en: 0", "eo: 2", "ep: 0", "eq: 1", "er: 0", "es: 0", "et: 1", "eu: 0", "ev: 1", "ew: 0", "ex: 8", "ey: 0", "ez: 1", "f: 156", "fa: 2", "fb: 0", "fc: 2", "fd: 7", "fe: 0", "ff: 0", "fg: 0", "fh: 0", "fi: 4", "fj: 0", "fk: 4", "fl: 2", "fm: 1", "fn: 1", "fo: 0", "fp: 2", "fq: 0", "fr: 1", "fs: 0", "ft: 9", "fu: 0", "fv: 2", "fw: 4", "fx: 1", "fy: 0", "fz: 1", "g: 3", "ga: 0", "gb: 6", "gc: 2", "gd: 2", "ge: 0", "gf: 0", "gg: 1", "gh: 0", "gi: 0", "gj: 0", "gk: 2", "gl: 3", "gm: 0", "gn: 1", "go: 2", "gp: 0", "gq: 0", "gr: 1", "gs: 0", "gt: 0", "gu: 4", "gv: 1", "gw: 0", "gx: 0", "gy: 2", "gz: 1", "h: 27", "ha: 1", "hb: 1", "hc: 0", "hd: 1", "he: 0", "hf: 2", "hg: 0", "hh: 1", "hi: 0", "hj: 6", "hk: 0", "hl: 0", "hm: 0", "hn: 1", "ho: 1", "hp: 0", "hq: 2", "hr: 0", "hs: 1", "ht: 0", "hu: 0", "hv: 1", "hw: 4", "hx: 2", "hy: 6", "hz: 0", "i: 41", "ia: 2", "ib: 3", "ic: 0", "id: 1", "ie: 2", "if: 0", "ig: 6", "ih: 2", "ii: 1", "ij: 0", "ik: 0", "il: 1", "im: 1", "in: 0", "io: 3", "ip: 4", "iq: 0", "ir: 0", "is: 0", "it: 2", "iu: 0", "iv: 1", "iw: 4", "ix: 0", "iy: 2", "iz: 0", "j: 32", "ja: 1", "jb: 1", "jc: 0", "jd: 0", "je: 1", "jf: 1", "jg: 0", "jh: 1", "ji: 0", "jj: 1", "jk: 5", "jl: 0", "jm: 1", "jn: 0", "jo: 0", "jp: 0", "jq: 0", "jr: 1", "js: 0", "jt: 0", "ju: 0", "jv: 1", "jw: 0", "jx: 0", "jy: 0", "jz: 0", "k: 16", "ka: 0", "kb: 0", "kc: 0", "kd: 0", "ke: 0", "kf: 0", "kg: 0", "kh: 0", "ki: 1", "kj: 2", "kk: 0", "kl: 3", "km: 1", "kn: 0", "ko: 1", "kp: 0", "kq: 1", "kr: 2", "ks: 1", "kt: 0", "ku: 1", "kv: 0", "kw: 1", "kx: 0", "ky: 0", "kz: 0", "l: 70", "la: 1", "lb: 0", "lc: 0", "ld: 0", "le: 0", "lf: 0", "lg: 0", "lh: 0", "li: 0", "lj: 0", "lk: 1", "ll: 0", "lm: 0", "ln: 0", "lo: 0", "lp: 0", "lq: 1", "lr: 1", "ls: 0", "lt: 0", "lu: 0", "lv: 0", "lw: 0", "lx: 0", "ly: 0", "lz: 1", "m: 21", "ma: 0", "mb: 0", "mc: 0", "md: 0", "me: 0", "mf: 0", "mg: 0", "mh: 0", "mi: 0", "mj: 0", "mk: 0", "ml: 0", "mm: 0", "mn: 0", "mo: 0", "mp: 0", "mq: 0", "mr: 1", "ms: 0", "mt: 0", "mu: 0", "mv: 0", "mw: 0", "mx: 0", "my: 0", "mz: 0", "n: 62", "na: 0", "nb: 0", "nc: 0", "nd: 0", "ne: 0", "nf: 0", "ng: 0", "nh: 0", "ni: 0", "nj: 0", "nk: 0", "nl: 0", "nm: 0", "nn: 0", "no: 0", "np: 0", "nq: 0", "nr: 0", "ns: 0", "nt: 0", "nu: 0", "nv: 0", "nw: 0", "nx: 0", "ny: 0", "nz: 0", "o: 36", "oa: 0", "ob: 0", "oc: 0", "od: 0", "oe: 0", "of: 0", "og: 0", "oh: 0", "oi: 0", "oj: 0", "ok: 0", "ol: 0", "om: 0", "on: 0", "oo: 0", "op: 0", "oq: 0", "or: 0", "os: 0", "ot: 0", "ou: 0", "ov: 0", "ow: 0", "ox: 0", "oy: 0", "oz: 0", "p: 3", "q: 6", "r: 0", "s: 27", "t: 8", "u: 28", "v: 26", "w: 5", "x: 31", "y: 15", "z: 2"};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> parentData = {"of,cy ol,dx ca,r nj,ae cc,bq au,as iy,v dt,cg ax,y", " ha,eq gw,cl hr,aw es,bb di,ct by,w ay,aj mn,lr nu", ",dt kr,gl cn,t mk,fb od,cw la,jq nk,bc b,a nn,y gd", ",ap dp,ar j,i dr,cr nx,hi av,d mr,fm kx,s hi,co kj", ",t oo,cd mq,ht cj,z aj,u mj,dm gf,de lc,kn co,r fg", ",af jq,ie gb,ed cl,cb l,c k,i hd,k nd,if jz,ax db,", "aa hx,ho cq,ao hb,eh ns,fi ml,ku lt,b bs,bm nv,e l", "e,ff am,a oc,fs go,fl mp,fo fa,by dy,ROOT bi,aq q,", "a gp,cv bl,h eq,cj ja,ap mx,w ib,cn nh,ey im,fa ci", ",cb as,al kn,m no,lf s,i hg,eg ff,dy az,o np,ib is", ",hz ji,ge fw,fu lq,ka aq,ab mu,kp an,u ov,fo nq,lx", " bp,i en,dr ba,ad fd,ex lo,j bx,ad dv,at kt,fv aw,", "c li,gr ln,ck o,j ed,dr fo,t ev,ds ik,cb ly,ab v,r", " al,f ec,dn ke,az oi,ji bf,h bd,v at,l gy,gt he,gx", " il,ew ge,bv lj,ed om,ok op,ed hy,hd fy,fa eb,bt c", ",a eo,cu ny,bw oz,bq lg,gc ou,bb kk,j hu,hc gh,gf ", "bm,h dn,cm iu,gb kz,k bz,ba ao,a dq,ab ot,bf hl,ed", " lr,eb mm,fp cf,c i,h em,aa jt,gx fl,ex jy,ep u,RO", "OT bv,ad bh,as fh,ab iv,hz hm,al cr,bb ms,ax du,aw", " gl,fy fc,fa iz,y cv,w ix,aw lk,ab g,c ar,i lx,k g", "c,fs ek,cb bu,bq mb,ea hq,cd ia,hc ie,ct kp,ip eh,", "bi kh,jr da,cg ky,fx ip,o ak,r gg,eo ls,n bo,k js,", "gg bk,aw et,ck bn,l my,lh ee,cg gm,gf nf,hf t,c if", ",gl lv,ax ej,dm ah,m bc,al mh,a p,a df,cb fz,ad je", ",gj cy,aw lm,jv ho,ff ac,h h,a ok,fo de,p ch,au d,", "a be,ag y,f mi,jz cw,ct ko,fv f,b gz,k kw,ej ga,bs", " ld,r mw,ad on,le hh,gy e,ROOT io,cj jb,av nz,dd o", "e,jp mv,bi jh,bl hj,ev ap,aj cg,be ad,f r,k lh,dv ", "ef,bv fp,j dj,ch dg,az gj,do bq,bm jm,da eu,dx gr,", "dl cd,s bb,aw jx,ju ew,dl ic,bp lp,o ep,bi mg,jf d", "z,cm gx,cd lw,z cs,bv lb,kj ce,al cb,bd ob,nu w,p ", "ne,lv fs,ce ka,iq ma,di gn,gh hc,dh kg,y iq,eb er,", "cc ni,jd cp,bg md,co ng,hp it,dx dl,bl jr,dv or,jz", " dm,ar lf,hm ow,dw mz,iq ft,fg fn,r lu,q ox,bi ir,", "fb hf,dj oa,jk z,k mf,jn oj,hr ex,en gv,fq hn,g cm", ",q jv,c ll,hm dc,bc mc,r jl,bt ds,m kq,dm ju,ch el", ",df dd,cg os,av ht,au ck,ci in,hj cu,cn fv,s gu,m ", "jp,fw gk,dx fe,b do,aq nm,he cx,cd ei,ae hw,an ct,", "bj fi,ac nb,mz a,ROOT ey,n dh,da oh,og jw,gh ae,j ", "mo,fj eg,ba fx,u fu,u ag,w fr,ROOT kl,ch jf,h nc,i", "j hz,bm nl,ix kb,d bw,v gt,bv nr,df hp,fc lz,lu oy", ",fc jg,b jd,eu oq,bn gi,bv jo,ii nt,nq id,cr og,jd", " ea,ai x,e af,q hk,x kf,d ii,dg cz,a na,is bj,at m", "t,cy km,bo iw,da jj,bz nw,mg ih,cl bt,an ab,k fq,c", "x fm,ar bg,av dk,cg fj,bl kc,s gq,fx kv,kn ks,aa g", "s,dd ig,go me,e hs,c ij,g kd,kc ai,j ku,ir fb,k fk", ",bk ez,ap jk,gr dx,j aa,w hv,gt n,k jn,fq dw,dn m,", "i jc,bi ki,hf br,az"};
    HierarchicalTree* pObj = new HierarchicalTree();
    clock_t start = clock();
    vector<string> result = pObj->countDescendants(parentData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT: 416", "a: 377", "aa: 3", "ab: 16", "ac: 2", "ad: 19", "ae: 2", "af: 2", "ag: 17", "ah: 0", "ai: 2", "aj: 5", "ak: 0", "al: 25", "am: 0", "an: 11", "ao: 1", "ap: 3", "aq: 11", "ar: 8", "as: 12", "at: 14", "au: 10", "av: 4", "aw: 28", "ax: 6", "ay: 0", "az: 5", "b: 61", "ba: 4", "bb: 17", "bc: 2", "bd: 13", "be: 16", "bf: 1", "bg: 1", "bh: 0", "bi: 7", "bj: 8", "bk: 1", "bl: 10", "bm: 11", "bn: 1", "bo: 1", "bp: 1", "bq: 4", "br: 0", "bs: 1", "bt: 9", "bu: 0", "bv: 10", "bw: 1", "bx: 0", "by: 11", "bz: 1", "c: 70", "ca: 0", "cb: 12", "cc: 1", "cd: 11", "ce: 4", "cf: 0", "cg: 15", "ch: 7", "ci: 3", "cj: 3", "ck: 2", "cl: 2", "cm: 5", "cn: 6", "co: 3", "cp: 0", "cq: 0", "cr: 14", "cs: 0", "ct: 7", "cu: 3", "cv: 1", "cw: 1", "cx: 4", "cy: 2", "cz: 0", "d: 7", "da: 6", "db: 0", "dc: 0", "dd: 2", "de: 5", "df: 2", "dg: 2", "dh: 3", "di: 1", "dj: 3", "dk: 0", "dl: 6", "dm: 4", "dn: 3", "do: 2", "dp: 0", "dq: 0", "dr: 12", "ds: 3", "dt: 2", "du: 0", "dv: 4", "dw: 1", "dx: 8", "dy: 5", "dz: 0", "e: 4", "ea: 1", "eb: 7", "ec: 0", "ed: 5", "ee: 0", "ef: 0", "eg: 1", "eh: 1", "ei: 0", "ej: 1", "ek: 0", "el: 0", "em: 0", "en: 5", "eo: 2", "ep: 1", "eq: 1", "er: 0", "es: 0", "et: 0", "eu: 4", "ev: 2", "ew: 1", "ex: 4", "ey: 1", "ez: 0", "f: 57", "fa: 10", "fb: 4", "fc: 3", "fd: 0", "fe: 0", "ff: 4", "fg: 1", "fh: 0", "fi: 1", "fj: 1", "fk: 0", "fl: 2", "fm: 1", "fn: 0", "fo: 4", "fp: 1", "fq: 3", "fr: 0", "fs: 3", "ft: 0", "fu: 3", "fv: 2", "fw: 2", "fx: 2", "fy: 4", "fz: 0", "g: 3", "ga: 0", "gb: 1", "gc: 1", "gd: 0", "ge: 2", "gf: 4", "gg: 1", "gh: 2", "gi: 0", "gj: 1", "gk: 0", "gl: 3", "gm: 0", "gn: 0", "go: 1", "gp: 0", "gq: 0", "gr: 3", "gs: 0", "gt: 3", "gu: 0", "gv: 0", "gw: 0", "gx: 3", "gy: 1", "gz: 0", "h: 173", "ha: 0", "hb: 0", "hc: 2", "hd: 1", "he: 1", "hf: 2", "hg: 0", "hh: 0", "hi: 1", "hj: 1", "hk: 0", "hl: 0", "hm: 3", "hn: 0", "ho: 1", "hp: 1", "hq: 0", "hr: 1", "hs: 0", "ht: 1", "hu: 0", "hv: 0", "hw: 0", "hx: 0", "hy: 0", "hz: 3", "i: 141", "ia: 0", "ib: 1", "ic: 0", "id: 0", "ie: 2", "if: 1", "ig: 0", "ih: 0", "ii: 1", "ij: 1", "ik: 0", "il: 0", "im: 0", "in: 0", "io: 0", "ip: 2", "iq: 4", "ir: 2", "is: 1", "it: 0", "iu: 0", "iv: 0", "iw: 0", "ix: 1", "iy: 0", "iz: 0", "j: 30", "ja: 0", "jb: 0", "jc: 0", "jd: 3", "je: 0", "jf: 2", "jg: 0", "jh: 0", "ji: 1", "jj: 0", "jk: 1", "jl: 0", "jm: 0", "jn: 1", "jo: 0", "jp: 1", "jq: 1", "jr: 1", "js: 0", "jt: 0", "ju: 1", "jv: 1", "jw: 0", "jx: 0", "jy: 0", "jz: 2", "k: 69", "ka: 1", "kb: 0", "kc: 1", "kd: 0", "ke: 0", "kf: 0", "kg: 0", "kh: 0", "ki: 0", "kj: 1", "kk: 0", "kl: 0", "km: 0", "kn: 2", "ko: 0", "kp: 1", "kq: 0", "kr: 0", "ks: 0", "kt: 0", "ku: 1", "kv: 0", "kw: 0", "kx: 0", "ky: 0", "kz: 0", "l: 17", "la: 0", "lb: 0", "lc: 0", "ld: 0", "le: 1", "lf: 1", "lg: 0", "lh: 1", "li: 0", "lj: 0", "lk: 0", "ll: 0", "lm: 0", "ln: 0", "lo: 0", "lp: 0", "lq: 0", "lr: 1", "ls: 0", "lt: 0", "lu: 1", "lv: 1", "lw: 0", "lx: 2", "ly: 0", "lz: 0", "m: 9", "ma: 0", "mb: 0", "mc: 0", "md: 0", "me: 0", "mf: 0", "mg: 1", "mh: 0", "mi: 0", "mj: 0", "mk: 0", "ml: 0", "mm: 0", "mn: 0", "mo: 0", "mp: 0", "mq: 0", "mr: 0", "ms: 0", "mt: 0", "mu: 0", "mv: 0", "mw: 0", "mx: 0", "my: 0", "mz: 1", "n: 3", "na: 0", "nb: 0", "nc: 0", "nd: 0", "ne: 0", "nf: 0", "ng: 0", "nh: 0", "ni: 0", "nj: 0", "nk: 0", "nl: 0", "nm: 0", "nn: 0", "no: 0", "np: 0", "nq: 1", "nr: 0", "ns: 0", "nt: 0", "nu: 1", "nv: 0", "nw: 0", "nx: 0", "ny: 0", "nz: 0", "o: 10", "oa: 0", "ob: 0", "oc: 0", "od: 0", "oe: 0", "of: 0", "og: 1", "oh: 0", "oi: 0", "oj: 0", "ok: 1", "ol: 0", "om: 0", "on: 0", "oo: 0", "op: 0", "oq: 0", "or: 0", "os: 0", "ot: 0", "ou: 0", "ov: 0", "ow: 0", "ox: 0", "oy: 0", "oz: 0", "p: 44", "q: 11", "r: 27", "s: 18", "t: 14", "u: 25", "v: 17", "w: 37", "x: 1", "y: 10", "z: 5"};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> parentData = {"kl,do ay,ad ez,dw kc,ae nk,eo ew,cb cc,aj cy,co lz", ",io cg,z cv,u oy,ex cf,bw lj,ci mb,ma hy,hu es,ep ", "lh,kc hx,ho gz,bk kd,bn gs,cw ln,bw s,d ah,p fg,bz", " hp,gn ft,ex cn,bl at,i kv,bg an,aa hi,ad jb,dg bx", ",h dn,y ev,bh ma,kd ek,bb me,da np,da ba,r u,i ka,", "bh hq,ac eh,ap kq,he fm,am nd,jz ff,au ad,b ci,as ", "eb,j og,kz d,a if,ed t,h ct,at cl,bc hg,fx kw,gu i", "g,bo ne,je ck,bd im,fh kz,kx ky,jn ls,ch gl,fa jy,", "fl ng,aw ha,fo kr,gm dh,da ke,fu lb,ji eq,di l,b g", "j,af er,cq du,u fl,cn mg,lq gt,ce ku,ek or,kx ks,c", "d ik,br oo,iy it,hy nm,ke bu,g fe,ai nx,jk le,da j", "i,go ca,bk in,y z,t os,ft lx,ap bd,ai az,b nb,mh n", "u,hj fu,ROOT be,ROOT ak,w ju,ad av,ab bk,k dz,g ec", ",av md,ci gf,au fq,bz ob,ae dm,ak bz,ad bt,ar lp,g", "u mo,mg hd,bm bb,at io,bg nt,fk aw,ao ly,bd ol,ku ", "jl,i cq,q li,jp ht,gx nf,dm af,v bs,v hn,ee go,gk ", "ix,bp mv,bw la,jc id,bf hb,dp iw,cj oq,ls mh,hv kk", ",gy mr,lr gx,dy iq,ab eu,ROOT au,m kt,ek nq,ie cs,", "ab hu,al my,ck kp,ee jg,fx ej,bp jd,ih ii,bo bi,bh", " mp,eh ll,ef ao,aj m,i mq,iz kh,fg fk,p bv,ag hj,e", "j k,f kn,hp cx,cm lt,fr km,aq lc,iy g,e jw,ca gu,k", " dw,cs gy,fs b,a mi,ln oc,nt a,ROOT lm,jn ag,f nw,", "aw aj,ab ei,ROOT fd,bl dr,o nn,hw fh,dn oa,hn nv,q", " gi,cz dk,bf gr,bv aa,s mx,cp ac,u lq,jd mu,hl bo,", "aw cr,o gb,de lg,gp cj,bm e,b jm,fq ho,eo jc,bp gd", ",c ds,n ki,bz dj,l dd,k ou,da dy,ab ko,bz gn,h gc,", "fn bl,t oi,fc mk,it oe,mg ja,v hf,cj ij,bc iu,al d", "e,ak i,h lr,ji ot,dr fo,dk mj,io ge,ev fb,db bw,m ", "jv,if da,bc is,r ok,le lo,fa cu,ai bn,bh y,h fn,an", " mm,if jz,ig ml,br of,lz fj,bg nh,kn no,fn al,aj q", ",j gq,ai dc,bp jr,gz fc,n hc,cl di,cc cz,bs cb,g c", "p,ROOT ep,da r,p ox,nx v,a ex,an ow,fb ic,ca ed,cq", " c,ROOT df,bt nj,lk ie,dx mw,an gm,ae hr,eu gv,fq ", "ni,y od,fv jx,ac eo,b dv,ch iy,fq ef,af kg,gv by,v", " jn,jb gp,fj ax,ao db,ag ee,cx fw,bi fz,fb ea,q dg", ",l et,eg em,bc cw,q p,b iz,af lf,u ae,u cm,t lw,el", " hh,dy bc,bb br,ad fr,cl fv,bn fs,en il,cv oz,s ib", ",bv ai,i on,hb hm,am ia,bk bj,bg hw,gc op,kj bm,e ", "fi,an nr,mk gg,gd he,bw js,ad nl,kh om,cb as,l ov,", "fm am,aa mc,u jq,hx n,b oh,et dt,cc mn,ia jj,fd jk", ",e nc,fe ns,nr dx,aa el,bv do,cd mf,hg mt,g ip,h c", "d,r x,c co,d kj,dw h,d jt,hh je,bv ms,er ch,bv hv,", "w fx,bz eg,dy gh,g gw,eh hs,bw j,c ey,bc mz,cd lk,", "eg aq,ao bg,bf ar,ah ga,t fp,da ld,ki fa,cr ", "kf,aa jf,s ir,es f,b ap,ag gk,ey bq,e bp,ROOT jo,j", "l kx,dp en,ROOT bf,at dq,o hz,dp ny,az fy,t nz,cp ", "kb,bg oj,jg lv,ch lu,ks hk,ay ab,l dp,cw ih,bp o,n", " dl,cv bh,as w,n hl,gq na,bo jp,he jh,t iv,gl"};
    HierarchicalTree* pObj = new HierarchicalTree();
    clock_t start = clock();
    vector<string> result = pObj->countDescendants(parentData);
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
    vector<string> parentData = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa,ROOT"};
    HierarchicalTree* pObj = new HierarchicalTree();
    clock_t start = clock();
    vector<string> result = pObj->countDescendants(parentData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT: 1", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa: 0"};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> parentData = {"aa,ba ab,ba aa,bb ab,bb ", "ba,ca bb,ca ba,cb bb,cb ", "ca,da cb,da ca,db cb,db ", "da,ea db,ea da,eb db,eb ", "ea,fa eb,fa ea,fb eb,fb ", "fa,ga fb,ga fa,gb fb,gb ", "ga,ha gb,ha ga,hb gb,hb ", "ha,ROOT hb,ROOT"};
    HierarchicalTree* pObj = new HierarchicalTree();
    clock_t start = clock();
    vector<string> result = pObj->countDescendants(parentData);
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
    vector<string> parentData = {"a,b"};
    HierarchicalTree* pObj = new HierarchicalTree();
    clock_t start = clock();
    vector<string> result = pObj->countDescendants(parentData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> parentData = {"sapiens,homo homo,hominidae hominidae,primates pri", "mates,mammalia mammalia,chordata chordata,animalia", " animalia,eukarya eukarya,ROOT ", "protista,eukarya fungi,eukarya plantae,eukarya ", "porifera,animalia cnidaria,animalia platyhelminthe", "s,animalia nematoda,animalia mollusca,animalia ann", "elida,animalia arthropoda,animalia echinodermata,a", "nimalia ", "agnatha,chordata chondrichthyes,chordata osteichth", "yes,chordata amphibia,chordata reptilia,chordata a", "ves,chordata ", "artiodactyla,mammalia carnivora,mammalia cetacea,m", "ammalia chiroptera,mammalia dermoptera,mammalia hy", "racoidea,mammalia insectivora,mammalia lagomorpha,", "mammalia macroscelidea,mammalia notoryctemorphia,m", "ammalia perissodactyla,mammalia pholidota,mammalia", " proboscidea,mammalia rodentia,mammalia scandentia", ",mammalia sirenia,mammalia tubulidentata,mammalia ", "xenarthra,mammalia ", "lemuridae,primates cheirogaleidae,primates indrida", "e,primates daubentoniidae,primates galagonidae,pri", "mates loridae,primates megaladapidae,primates tars", "iidae,primates cebidae,primates cercopithecidae,pr", "imates callitrichidae,primates hylobatidae,primate", "s ", "gorilla,hominidae pan,hominidae pongo,hominidae ", "domain,ROOT kingdom,domain phylum,kingdom class,ph", "ylum order,class family,order genus,family species", ",genus ninja,mammalia"};
    HierarchicalTree* pObj = new HierarchicalTree();
    clock_t start = clock();
    vector<string> result = pObj->countDescendants(parentData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT: 67", "agnatha: 0", "amphibia: 0", "animalia: 54", "annelida: 0", "arthropoda: 0", "artiodactyla: 0", "aves: 0", "callitrichidae: 0", "carnivora: 0", "cebidae: 0", "cercopithecidae: 0", "cetacea: 0", "cheirogaleidae: 0", "chiroptera: 0", "chondrichthyes: 0", "chordata: 45", "class: 4", "cnidaria: 0", "daubentoniidae: 0", "dermoptera: 0", "domain: 7", "echinodermata: 0", "eukarya: 58", "family: 2", "fungi: 0", "galagonidae: 0", "genus: 1", "gorilla: 0", "hominidae: 5", "homo: 1", "hylobatidae: 0", "hyracoidea: 0", "indridae: 0", "insectivora: 0", "kingdom: 6", "lagomorpha: 0", "lemuridae: 0", "loridae: 0", "macroscelidea: 0", "mammalia: 38", "megaladapidae: 0", "mollusca: 0", "nematoda: 0", "ninja: 0", "notoryctemorphia: 0", "order: 3", "osteichthyes: 0", "pan: 0", "perissodactyla: 0", "pholidota: 0", "phylum: 5", "plantae: 0", "platyhelminthes: 0", "pongo: 0", "porifera: 0", "primates: 18", "proboscidea: 0", "protista: 0", "reptilia: 0", "rodentia: 0", "sapiens: 0", "scandentia: 0", "sirenia: 0", "species: 0", "tarsiidae: 0", "tubulidentata: 0", "xenarthra: 0"};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> parentData = {"b,a b,ROOT a,ROOT"};
    HierarchicalTree* pObj = new HierarchicalTree();
    clock_t start = clock();
    vector<string> result = pObj->countDescendants(parentData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> parentData = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa,ROOT"};
    HierarchicalTree* pObj = new HierarchicalTree();
    clock_t start = clock();
    vector<string> result = pObj->countDescendants(parentData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT: 1", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa: 0"};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> parentData = {"a,b"};
    HierarchicalTree* pObj = new HierarchicalTree();
    clock_t start = clock();
    vector<string> result = pObj->countDescendants(parentData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> parentData = {"a,b b,c c,a"};
    HierarchicalTree* pObj = new HierarchicalTree();
    clock_t start = clock();
    vector<string> result = pObj->countDescendants(parentData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> parentData = {"challengedby,sjelkjd"};
    HierarchicalTree* pObj = new HierarchicalTree();
    clock_t start = clock();
    vector<string> result = pObj->countDescendants(parentData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> parentData = {"a,b b,a"};
    HierarchicalTree* pObj = new HierarchicalTree();
    clock_t start = clock();
    vector<string> result = pObj->countDescendants(parentData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> parentData = {"a,b b,c c,d"};
    HierarchicalTree* pObj = new HierarchicalTree();
    clock_t start = clock();
    vector<string> result = pObj->countDescendants(parentData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> parentData = {"a,b b,ROOT a,b a,b"};
    HierarchicalTree* pObj = new HierarchicalTree();
    clock_t start = clock();
    vector<string> result = pObj->countDescendants(parentData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT: 2", "a: 0", "b: 1"};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> parentData = {"dev,ROOT"};
    HierarchicalTree* pObj = new HierarchicalTree();
    clock_t start = clock();
    vector<string> result = pObj->countDescendants(parentData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT: 1", "dev: 0"};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> parentData = {"ROOT,ROOT"};
    HierarchicalTree* pObj = new HierarchicalTree();
    clock_t start = clock();
    vector<string> result = pObj->countDescendants(parentData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> parentData = {"a,ROOT a,b b,ROOT"};
    HierarchicalTree* pObj = new HierarchicalTree();
    clock_t start = clock();
    vector<string> result = pObj->countDescendants(parentData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> parentData = {"a,b b,c c,a d,ROOT"};
    HierarchicalTree* pObj = new HierarchicalTree();
    clock_t start = clock();
    vector<string> result = pObj->countDescendants(parentData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> parentData = {"a,b b,ROOT c,d"};
    HierarchicalTree* pObj = new HierarchicalTree();
    clock_t start = clock();
    vector<string> result = pObj->countDescendants(parentData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> parentData = {"z,ROOT a,b b,c c,a"};
    HierarchicalTree* pObj = new HierarchicalTree();
    clock_t start = clock();
    vector<string> result = pObj->countDescendants(parentData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> parentData = {"a,ROOT a,a"};
    HierarchicalTree* pObj = new HierarchicalTree();
    clock_t start = clock();
    vector<string> result = pObj->countDescendants(parentData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> parentData = {"a,b b,a c,ROOT"};
    HierarchicalTree* pObj = new HierarchicalTree();
    clock_t start = clock();
    vector<string> result = pObj->countDescendants(parentData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> parentData = {"abcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcde", "abcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcde", "abcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcde", "abcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcde", "abcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcde", "abcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcde", "abcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcde", "abcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcde", "abc,ROOT"};
    HierarchicalTree* pObj = new HierarchicalTree();
    clock_t start = clock();
    vector<string> result = pObj->countDescendants(parentData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT: 1", "abcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabc: 0"};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> parentData = {"b,c a,ROOT"};
    HierarchicalTree* pObj = new HierarchicalTree();
    clock_t start = clock();
    vector<string> result = pObj->countDescendants(parentData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> parentData = {"bin,ROOT a,b b,a"};
    HierarchicalTree* pObj = new HierarchicalTree();
    clock_t start = clock();
    vector<string> result = pObj->countDescendants(parentData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> parentData = {"x,y"};
    HierarchicalTree* pObj = new HierarchicalTree();
    clock_t start = clock();
    vector<string> result = pObj->countDescendants(parentData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> parentData = {"a,b b,c"};
    HierarchicalTree* pObj = new HierarchicalTree();
    clock_t start = clock();
    vector<string> result = pObj->countDescendants(parentData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> parentData = {"bin,bon bon,bim bim,bin bn,nb nb,mb mb,ROOT"};
    HierarchicalTree* pObj = new HierarchicalTree();
    clock_t start = clock();
    vector<string> result = pObj->countDescendants(parentData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> parentData = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaabbbbbbbbbbbbbbbbbbbbbbb,", "cccccccccccccccccccccccccccccccccccccccccc", "dddddddddddddddddddddddddddddddddddddddddd", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee ", "cccccccccccccccccccccccccccccccccccccccccc", "dddddddddddddddddddddddddddddddddddddddddd", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", ",ROOT"};
    HierarchicalTree* pObj = new HierarchicalTree();
    clock_t start = clock();
    vector<string> result = pObj->countDescendants(parentData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT: 2", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabbbbbbbbbbbbbbbbbbbbbbb: 0", "ccccccccccccccccccccccccccccccccccccccccccddddddddddddddddddddddddddddddddddddddddddeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee: 1"};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> parentData = {"sapiens,homo homo,hominidae hominidae,primates pri", "mates,mammalia mammalia,chordata chordata,animalia", " animalia,eukarya eukarya,ROOT ", "protista,eukarya fungi,eukarya plantae,eukarya ", "porifera,animalia cnidaria,animalia platyhelminthe", "s,animalia nematoda,animalia mollusca,animalia ann", "elida,animalia arthropoda,animalia echinodermata,a", "nimalia ", "agnatha,chordata chondrichthyes,chordata osteichth", "yes,chordata amphibia,chordata reptilia,chordata a", "ves,chordata ", "artiodactyla,mammalia carnivora,mammalia cetacea,m", "ammalia chiroptera,mammalia dermoptera,mammalia hy", "racoidea,mammalia insectivora,mammalia lagomorpha,", "mammalia macroscelidea,mammalia notoryctemorphia,m", "ammalia perissodactyla,mammalia pholidota,mammalia", " proboscidea,mammalia rodentia,mammalia scandentia", ",mammalia sirenia,mammalia tubulidentata,mammalia ", "xenarthra,mammalia ", "lemuridae,primates cheirogaleidae,primates indrida", "e,primates daubentoniidae,primates galagonidae,pri", "mates loridae,primates megaladapidae,primates tars", "iidae,primates cebidae,primates cercopithecidae,pr", "imates callitrichidae,primates hylobatidae,primate", "s ", "gorilla,hominidae pan,hominidae pongo,hominidae ", "domain,ROOT kingdom,domain phylum,kingdom class,ph", "ylum order,class family,order genus,family species", ",genus ninja,mammalia"};
    HierarchicalTree* pObj = new HierarchicalTree();
    clock_t start = clock();
    vector<string> result = pObj->countDescendants(parentData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT: 67", "agnatha: 0", "amphibia: 0", "animalia: 54", "annelida: 0", "arthropoda: 0", "artiodactyla: 0", "aves: 0", "callitrichidae: 0", "carnivora: 0", "cebidae: 0", "cercopithecidae: 0", "cetacea: 0", "cheirogaleidae: 0", "chiroptera: 0", "chondrichthyes: 0", "chordata: 45", "class: 4", "cnidaria: 0", "daubentoniidae: 0", "dermoptera: 0", "domain: 7", "echinodermata: 0", "eukarya: 58", "family: 2", "fungi: 0", "galagonidae: 0", "genus: 1", "gorilla: 0", "hominidae: 5", "homo: 1", "hylobatidae: 0", "hyracoidea: 0", "indridae: 0", "insectivora: 0", "kingdom: 6", "lagomorpha: 0", "lemuridae: 0", "loridae: 0", "macroscelidea: 0", "mammalia: 38", "megaladapidae: 0", "mollusca: 0", "nematoda: 0", "ninja: 0", "notoryctemorphia: 0", "order: 3", "osteichthyes: 0", "pan: 0", "perissodactyla: 0", "pholidota: 0", "phylum: 5", "plantae: 0", "platyhelminthes: 0", "pongo: 0", "porifera: 0", "primates: 18", "proboscidea: 0", "protista: 0", "reptilia: 0", "rodentia: 0", "sapiens: 0", "scandentia: 0", "sirenia: 0", "species: 0", "tarsiidae: 0", "tubulidentata: 0", "xenarthra: 0"};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> parentData = {"b,a b,ROOT a,ROOT"};
    HierarchicalTree* pObj = new HierarchicalTree();
    clock_t start = clock();
    vector<string> result = pObj->countDescendants(parentData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> parentData = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa,ROOT"};
    HierarchicalTree* pObj = new HierarchicalTree();
    clock_t start = clock();
    vector<string> result = pObj->countDescendants(parentData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT: 1", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa: 0"};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> parentData = {"a,b"};
    HierarchicalTree* pObj = new HierarchicalTree();
    clock_t start = clock();
    vector<string> result = pObj->countDescendants(parentData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> parentData = {"a,b b,c c,a"};
    HierarchicalTree* pObj = new HierarchicalTree();
    clock_t start = clock();
    vector<string> result = pObj->countDescendants(parentData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> parentData = {"challengedby,sjelkjd"};
    HierarchicalTree* pObj = new HierarchicalTree();
    clock_t start = clock();
    vector<string> result = pObj->countDescendants(parentData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> parentData = {"a,b b,a"};
    HierarchicalTree* pObj = new HierarchicalTree();
    clock_t start = clock();
    vector<string> result = pObj->countDescendants(parentData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> parentData = {"a,b b,c c,d"};
    HierarchicalTree* pObj = new HierarchicalTree();
    clock_t start = clock();
    vector<string> result = pObj->countDescendants(parentData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> parentData = {"a,b b,ROOT a,b a,b"};
    HierarchicalTree* pObj = new HierarchicalTree();
    clock_t start = clock();
    vector<string> result = pObj->countDescendants(parentData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT: 2", "a: 0", "b: 1"};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> parentData = {"dev,ROOT"};
    HierarchicalTree* pObj = new HierarchicalTree();
    clock_t start = clock();
    vector<string> result = pObj->countDescendants(parentData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT: 1", "dev: 0"};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> parentData = {"ROOT,ROOT"};
    HierarchicalTree* pObj = new HierarchicalTree();
    clock_t start = clock();
    vector<string> result = pObj->countDescendants(parentData);
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
    vector<string> parentData = {"a,ROOT a,b b,ROOT"};
    HierarchicalTree* pObj = new HierarchicalTree();
    clock_t start = clock();
    vector<string> result = pObj->countDescendants(parentData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> parentData = {"a,b b,c c,a d,ROOT"};
    HierarchicalTree* pObj = new HierarchicalTree();
    clock_t start = clock();
    vector<string> result = pObj->countDescendants(parentData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> parentData = {"a,b b,ROOT c,d"};
    HierarchicalTree* pObj = new HierarchicalTree();
    clock_t start = clock();
    vector<string> result = pObj->countDescendants(parentData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> parentData = {"z,ROOT a,b b,c c,a"};
    HierarchicalTree* pObj = new HierarchicalTree();
    clock_t start = clock();
    vector<string> result = pObj->countDescendants(parentData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> parentData = {"a,ROOT a,a"};
    HierarchicalTree* pObj = new HierarchicalTree();
    clock_t start = clock();
    vector<string> result = pObj->countDescendants(parentData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> parentData = {"a,b b,a c,ROOT"};
    HierarchicalTree* pObj = new HierarchicalTree();
    clock_t start = clock();
    vector<string> result = pObj->countDescendants(parentData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> parentData = {"abcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcde", "abcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcde", "abcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcde", "abcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcde", "abcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcde", "abcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcde", "abcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcde", "abcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcde", "abc,ROOT"};
    HierarchicalTree* pObj = new HierarchicalTree();
    clock_t start = clock();
    vector<string> result = pObj->countDescendants(parentData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT: 1", "abcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabc: 0"};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> parentData = {"b,c a,ROOT"};
    HierarchicalTree* pObj = new HierarchicalTree();
    clock_t start = clock();
    vector<string> result = pObj->countDescendants(parentData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> parentData = {"bin,ROOT a,b b,a"};
    HierarchicalTree* pObj = new HierarchicalTree();
    clock_t start = clock();
    vector<string> result = pObj->countDescendants(parentData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> parentData = {"x,y"};
    HierarchicalTree* pObj = new HierarchicalTree();
    clock_t start = clock();
    vector<string> result = pObj->countDescendants(parentData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> parentData = {"a,b b,c"};
    HierarchicalTree* pObj = new HierarchicalTree();
    clock_t start = clock();
    vector<string> result = pObj->countDescendants(parentData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> parentData = {"bin,bon bon,bim bim,bin bn,nb nb,mb mb,ROOT"};
    HierarchicalTree* pObj = new HierarchicalTree();
    clock_t start = clock();
    vector<string> result = pObj->countDescendants(parentData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> parentData = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaabbbbbbbbbbbbbbbbbbbbbbb,", "cccccccccccccccccccccccccccccccccccccccccc", "dddddddddddddddddddddddddddddddddddddddddd", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee ", "cccccccccccccccccccccccccccccccccccccccccc", "dddddddddddddddddddddddddddddddddddddddddd", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", ",ROOT"};
    HierarchicalTree* pObj = new HierarchicalTree();
    clock_t start = clock();
    vector<string> result = pObj->countDescendants(parentData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT: 2", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabbbbbbbbbbbbbbbbbbbbbbb: 0", "ccccccccccccccccccccccccccccccccccccccccccddddddddddddddddddddddddddddddddddddddddddeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee: 1"};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> parentData = {"a,ROOT b,a c,b d,c e,d f,e g,f h,g i,h j,i k,j l,", "k m,l n,m o,n p,o q,p r,q s,r t,s u,t v,u w,v x,w ", "y,x z,y aa,z ab,aa ac,ab ad,ac ae,ad af,ae ag,af a", "h,ag ai,ah aj,ai ak,aj al,ak am,al an,am ao,an ap,", "ao aq,ap ar,aq as,ar at,as au,at av,au aw,av ax,aw", " ay,ax az,ay ba,az bb,ba bc,bb bd,bc be,bd bf,be b", "g,bf bh,bg bi,bh bj,bi bk,bj bl,bk bm,bl bn,bm bo,", "bn bp,bo bq,bp br,bq bs,br bt,bs bu,bt bv,bu bw,bv", " bx,bw by,bx bz,by ca,bz cb,ca cc,cb cd,cc ce,cd c", "f,ce cg,cf ch,cg ci,ch cj,ci ck,cj cl,ck cm,cl cn,", "cm co,cn cp,co cq,cp cr,cq cs,cr ct,cs cu,ct cv,cu", " cw,cv cx,cw cy,cx cz,cy da,cz db,da dc,db dd,dc d", "e,dd df,de dg,df dh,dg di,dh dj,di dk,dj dl,dk dm,", "dl dn,dm do,dn dp,do dq,dp dr,dq ds,dr dt,ds du,dt", " dv,du dw,dv dx,dw dy,dx dz,dy ea,dz eb,ea ec,eb e", "d,ec ee,ed ef,ee eg,ef eh,eg ei,eh ej,ei ek,ej el,", "ek em,el en,em eo,en ep,eo eq,ep er,eq es,er et,es", " eu,et ev,eu ew,ev ex,ew ey,ex ez,ey fa,ez fb,fa f", "c,fb fd,fc fe,fd ff,fe fg,ff fh,fg fi,fh fj,fi fk,", "fj fl,fk fm,fl fn,fm fo,fn fp,fo fq,fp fr,fq fs,fr", " ft,fs fu,ft fv,fu fw,fv fx,fw fy,fx fz,fy ga,fz g", "b,ga gc,gb gd,gc ge,gd gf,ge gg,gf gh,gg gi,gh gj,", "gi gk,gj gl,gk gm,gl gn,gm go,gn gp,go gq,gp gr,gq", " gs,gr gt,gs gu,gt gv,gu gw,gv gx,gw gy,gx gz,gy h", "a,gz hb,ha hc,hb hd,hc he,hd hf,he hg,hf hh,hg hi,", "hh hj,hi hk,hj hl,hk hm,hl hn,hm ho,hn hp,ho hq,hp", " hr,hq hs,hr ht,hs hu,ht hv,hu hw,hv hx,hw hy,hx h", "z,hy ia,hz ib,ia ic,ib id,ic ie,id if,ie ig,if ih,", "ig ii,ih ij,ii ik,ij il,ik im,il in,im io,in ip,io", " iq,ip ir,iq is,ir it,is iu,it iv,iu iw,iv ix,iw i", "y,ix iz,iy ja,iz jb,ja jc,jb jd,jc je,jd jf,je jg,", "jf jh,jg ji,jh jj,ji jk,jj jl,jk jm,jl jn,jm jo,jn", " jp,jo jq,jp jr,jq js,jr jt,js ju,jt jv,ju jw,jv j", "x,jw jy,jx jz,jy ka,jz kb,ka kc,kb kd,kc ke,kd kf,", "ke kg,kf kh,kg ki,kh kj,ki kk,kj kl,kk km,kl kn,km", " ko,kn kp,ko kq,kp kr,kq ks,kr kt,ks ku,kt kv,ku k", "w,kv kx,kw ky,kx kz,ky la,kz lb,la lc,lb ld,lc le,", "ld lf,le lg,lf lh,lg li,lh lj,li lk,lj ll,lk lm,ll", " ln,lm lo,ln lp,lo lq,lp lr,lq ls,lr lt,ls lu,lt l", "v,lu lw,lv lx,lw ly,lx lz,ly ma,lz mb,ma mc,mb md,", "mc me,md mf,me mg,mf mh,mg mi,mh mj,mi mk,mj ml,mk", " mm,ml mn,mm mo,mn mp,mo mq,mp mr,mq ms,mr mt,ms m", "u,mt mv,mu"};
    HierarchicalTree* pObj = new HierarchicalTree();
    clock_t start = clock();
    vector<string> result = pObj->countDescendants(parentData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT: 360", "a: 359", "aa: 333", "ab: 332", "ac: 331", "ad: 330", "ae: 329", "af: 328", "ag: 327", "ah: 326", "ai: 325", "aj: 324", "ak: 323", "al: 322", "am: 321", "an: 320", "ao: 319", "ap: 318", "aq: 317", "ar: 316", "as: 315", "at: 314", "au: 313", "av: 312", "aw: 311", "ax: 310", "ay: 309", "az: 308", "b: 358", "ba: 307", "bb: 306", "bc: 305", "bd: 304", "be: 303", "bf: 302", "bg: 301", "bh: 300", "bi: 299", "bj: 298", "bk: 297", "bl: 296", "bm: 295", "bn: 294", "bo: 293", "bp: 292", "bq: 291", "br: 290", "bs: 289", "bt: 288", "bu: 287", "bv: 286", "bw: 285", "bx: 284", "by: 283", "bz: 282", "c: 357", "ca: 281", "cb: 280", "cc: 279", "cd: 278", "ce: 277", "cf: 276", "cg: 275", "ch: 274", "ci: 273", "cj: 272", "ck: 271", "cl: 270", "cm: 269", "cn: 268", "co: 267", "cp: 266", "cq: 265", "cr: 264", "cs: 263", "ct: 262", "cu: 261", "cv: 260", "cw: 259", "cx: 258", "cy: 257", "cz: 256", "d: 356", "da: 255", "db: 254", "dc: 253", "dd: 252", "de: 251", "df: 250", "dg: 249", "dh: 248", "di: 247", "dj: 246", "dk: 245", "dl: 244", "dm: 243", "dn: 242", "do: 241", "dp: 240", "dq: 239", "dr: 238", "ds: 237", "dt: 236", "du: 235", "dv: 234", "dw: 233", "dx: 232", "dy: 231", "dz: 230", "e: 355", "ea: 229", "eb: 228", "ec: 227", "ed: 226", "ee: 225", "ef: 224", "eg: 223", "eh: 222", "ei: 221", "ej: 220", "ek: 219", "el: 218", "em: 217", "en: 216", "eo: 215", "ep: 214", "eq: 213", "er: 212", "es: 211", "et: 210", "eu: 209", "ev: 208", "ew: 207", "ex: 206", "ey: 205", "ez: 204", "f: 354", "fa: 203", "fb: 202", "fc: 201", "fd: 200", "fe: 199", "ff: 198", "fg: 197", "fh: 196", "fi: 195", "fj: 194", "fk: 193", "fl: 192", "fm: 191", "fn: 190", "fo: 189", "fp: 188", "fq: 187", "fr: 186", "fs: 185", "ft: 184", "fu: 183", "fv: 182", "fw: 181", "fx: 180", "fy: 179", "fz: 178", "g: 353", "ga: 177", "gb: 176", "gc: 175", "gd: 174", "ge: 173", "gf: 172", "gg: 171", "gh: 170", "gi: 169", "gj: 168", "gk: 167", "gl: 166", "gm: 165", "gn: 164", "go: 163", "gp: 162", "gq: 161", "gr: 160", "gs: 159", "gt: 158", "gu: 157", "gv: 156", "gw: 155", "gx: 154", "gy: 153", "gz: 152", "h: 352", "ha: 151", "hb: 150", "hc: 149", "hd: 148", "he: 147", "hf: 146", "hg: 145", "hh: 144", "hi: 143", "hj: 142", "hk: 141", "hl: 140", "hm: 139", "hn: 138", "ho: 137", "hp: 136", "hq: 135", "hr: 134", "hs: 133", "ht: 132", "hu: 131", "hv: 130", "hw: 129", "hx: 128", "hy: 127", "hz: 126", "i: 351", "ia: 125", "ib: 124", "ic: 123", "id: 122", "ie: 121", "if: 120", "ig: 119", "ih: 118", "ii: 117", "ij: 116", "ik: 115", "il: 114", "im: 113", "in: 112", "io: 111", "ip: 110", "iq: 109", "ir: 108", "is: 107", "it: 106", "iu: 105", "iv: 104", "iw: 103", "ix: 102", "iy: 101", "iz: 100", "j: 350", "ja: 99", "jb: 98", "jc: 97", "jd: 96", "je: 95", "jf: 94", "jg: 93", "jh: 92", "ji: 91", "jj: 90", "jk: 89", "jl: 88", "jm: 87", "jn: 86", "jo: 85", "jp: 84", "jq: 83", "jr: 82", "js: 81", "jt: 80", "ju: 79", "jv: 78", "jw: 77", "jx: 76", "jy: 75", "jz: 74", "k: 349", "ka: 73", "kb: 72", "kc: 71", "kd: 70", "ke: 69", "kf: 68", "kg: 67", "kh: 66", "ki: 65", "kj: 64", "kk: 63", "kl: 62", "km: 61", "kn: 60", "ko: 59", "kp: 58", "kq: 57", "kr: 56", "ks: 55", "kt: 54", "ku: 53", "kv: 52", "kw: 51", "kx: 50", "ky: 49", "kz: 48", "l: 348", "la: 47", "lb: 46", "lc: 45", "ld: 44", "le: 43", "lf: 42", "lg: 41", "lh: 40", "li: 39", "lj: 38", "lk: 37", "ll: 36", "lm: 35", "ln: 34", "lo: 33", "lp: 32", "lq: 31", "lr: 30", "ls: 29", "lt: 28", "lu: 27", "lv: 26", "lw: 25", "lx: 24", "ly: 23", "lz: 22", "m: 347", "ma: 21", "mb: 20", "mc: 19", "md: 18", "me: 17", "mf: 16", "mg: 15", "mh: 14", "mi: 13", "mj: 12", "mk: 11", "ml: 10", "mm: 9", "mn: 8", "mo: 7", "mp: 6", "mq: 5", "mr: 4", "ms: 3", "mt: 2", "mu: 1", "mv: 0", "n: 346", "o: 345", "p: 344", "q: 343", "r: 342", "s: 341", "t: 340", "u: 339", "v: 338", "w: 337", "x: 336", "y: 335", "z: 334"};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=260952&rd=5856&pm=2930
********************************************************************************
/* 
 * HierarchicalTree.cpp 
 * 
 * Author:   Jason Y. Lee 
 * TopCoder: UFP2161 
 * 
 * KOALAS RULE! GO KOALAS! =) 
 */ 
 
#include <algorithm> 
#include <cctype> 
#include <climits> 
#include <cmath> 
#include <cstdio> 
#include <cstdlib> 
#include <cstring> 
#include <iostream> 
#include <sstream> 
#include <string> 
#include <vector> 
#include <map> 
#include <set> 
 
 
using namespace std; 
 
#define DEBUG(x) 
 
vector<string> split(const string &s, string ch = " \t") 
{ 
  vector<string> rv; 
 
  for (int p = 0, p2; p < s.size(); p = p2+1) 
  { 
    p2 = s.find_first_of(ch, p); 
 
    if (p2 == -1) p2 = s.size(); 
    if (p2-p > 0) rv.push_back(s.substr(p, p2-p)); 
  } 
 
  return rv; 
} 
 
struct HierarchicalTree 
{ 
  struct Node 
  { 
    set<string> children; 
    int seen; 
    int descendants; 
 
    Node() 
    { 
      seen = -1; 
      descendants = 0; 
    } 
  }; 
 
  map<string,Node> tree; 
 
  bool dfs(string node) 
  { 
    Node *n = &tree[node]; 
 
    if (n->seen != -1) 
      return false; 
 
    n->seen = 0; 
    n->descendants = n->children.size(); 
 
    for (set<string>::iterator itr = (n->children).begin(); itr != (n->children).end(); itr++) 
    { 
      if (!dfs(*itr)) 
        return false; 
      n->descendants += tree[*itr].descendants; 
    } 
 
    return true; 
  } 
 
  vector<string> countDescendants(vector<string> parentData) 
  { 
    vector<string> rv; 
    tree.clear(); 
    string data = ""; 
 
    for (int i = 0; i < parentData.size(); i++) 
      data += parentData[i]; 
 
    vector<string> tokens = split(data, " "); 
 
    for (int i = 0; i < tokens.size(); i++) 
    { 
      vector<string> t2 = split(tokens[i], ","); 
      tree[t2[1]].children.insert(t2[0]); 
    } 
 
    if (dfs("ROOT") == false) 
      return rv; 
 
    for (map<string,Node>::iterator itr = tree.begin(); itr != tree.end(); itr++) 
      if (itr->second.seen == -1) 
        return rv; 
 
    for (map<string,Node>::iterator itr = tree.begin(); itr != tree.end(); itr++) 
    { 
      ostringstream os; 
 
      os << itr->first << ": " << itr->second.descendants; 
      rv.push_back(os.str()); 
    } 
 
    sort(rv.begin(), rv.end()); 
 
    return rv; 
  } 
 
 
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/