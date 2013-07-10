/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6803
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

class PositiveID {
public:
    int maximumFacts(vector<string> suspects);
};

int PositiveID::maximumFacts(vector<string> suspects) {
    int ret;
    return ret;
}


int test0() {
    vector<string> suspects = {"blond,tall,skinny", "short,skinny,blond,tattooed", "scarred,bald"};
    PositiveID* pObj = new PositiveID();
    clock_t start = clock();
    int result = pObj->maximumFacts(suspects);
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
    vector<string> suspects = {"gigantic,fluorescent,loud,male"};
    PositiveID* pObj = new PositiveID();
    clock_t start = clock();
    int result = pObj->maximumFacts(suspects);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> suspects = {"medium,average,nondescript", "medium,average,nondescript"};
    PositiveID* pObj = new PositiveID();
    clock_t start = clock();
    int result = pObj->maximumFacts(suspects);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> suspects = {"big,tall,loud,happy,male,scarred,tattooed,dirty", "short,male,beard,quiet,happy,tanned,handsome", "female,pretty,blond,quiet", "somnambulistic", "happy,tiny,stout,male,tanned,beard,blond"};
    PositiveID* pObj = new PositiveID();
    clock_t start = clock();
    int result = pObj->maximumFacts(suspects);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> suspects = {"a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y"};
    PositiveID* pObj = new PositiveID();
    clock_t start = clock();
    int result = pObj->maximumFacts(suspects);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> suspects = {"b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x", "z,aa,bb,cc,dd,ee,ff,gg,hh,ii,jj,kk,ll,mm,nn,oo,pp", "oo,pp,qq,rr,ss,tt,uu,vv,ww,xx,yy,zz,a", "oo,pp,qq,rr,ss,tt,uu,vv,ww,xx,yy,zz,b", "oo,pp,qq,rr,ss,tt,uu,vv,ww,xx,yy,zz,c", "oo,pp,qq,rr,ss,tt,uu,vv,ww,xx,yy,zz,d", "oo,pp,qq,rr,ss,tt,uu,vv,ww,xx,yy,zz,e", "oo,pp,qq,rr,ss,tt,uu,vv,ww,xx,yy,zz,f", "oo,pp,qq,rr,ss,tt,uu,vv,ww,xx,yy,zz,g", "oo,pp,qq,rr,ss,tt,uu,vv,ww,xx,yy,zz,h", "oo,pp,qq,rr,ss,tt,uu,vv,ww,xx,yy,zz,i"};
    PositiveID* pObj = new PositiveID();
    clock_t start = clock();
    int result = pObj->maximumFacts(suspects);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> suspects = {"abcdefghijabcdefghijabcdefghijabcdefghijabcdefghij"};
    PositiveID* pObj = new PositiveID();
    clock_t start = clock();
    int result = pObj->maximumFacts(suspects);
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
    vector<string> suspects = {"aa,ab,ac,ad,ae,af,ag,ah,ai,aj,ak,al,am,an,ao,ap,aq", "ba,bb,bc,bd,be,bf,bg,bh,bi,bj,bk,bl,bm,bn,bo,bp,bq", "ca,cb,cc,cd,ce,cf,cg,ch,ci,cj,ck,cl,cm,cn,co,cp,cq", "da,db,dc,dd,de,df,dg,dh,di,dj,dk,dl,dm,dn,do,dp,dq", "ea,eb,ec,ed,ee,ef,eg,eh,ei,ej,ek,el,em,en,eo,ep,eq", "fa,fb,fc,fd,fe,ff,fg,fh,fi,fj,fk,fl,fm,fn,fo,fp,fq", "ga,gb,gc,gd,ge,gf,gg,gh,gi,gj,gk,gl,gm,gn,go,gp,gq", "ha,hb,hc,hd,he,hf,hg,hh,hi,hj,hk,hl,hm,hn,ho,hp,hq", "ia,ib,ic,id,ie,if,ig,ih,ii,ij,ik,il,im,in,io,ip,iq", "ja,jb,jc,jd,je,jf,jg,jh,ji,jj,jk,jl,jm,jn,jo,jp,jq", "ka,kb,kc,kd,ke,kf,kg,kh,ki,kj,kk,kl,km,kn,ko,kp,kq", "la,lb,lc,ld,le,lf,lg,lh,li,lj,lk,ll,lm,ln,lo,lp,lq", "ma,mb,mc,md,me,mf,mg,mh,mi,mj,mk,ml,mm,mn,mo,mp,mq", "na,nb,nc,nd,ne,nf,ng,nh,ni,nj,nk,nl,nm,nn,no,np,nq", "oa,ob,oc,od,oe,of,og,oh,oi,oj,ok,ol,om,on,oo,op,oq", "pa,pb,pc,pd,pe,pf,pg,ph,pi,pj,pk,pl,pm,pn,po,pp,pq", "qa,qb,qc,qd,qe,qf,qg,qh,qi,qj,qk,ql,qm,qn,qo,qp,qq", "ra,rb,rc,rd,re,rf,rg,rh,ri,rj,rk,rl,rm,rn,ro,rp,rq", "sa,sb,sc,sd,se,sf,sg,sh,si,sj,sk,sl,sm,sn,so,sp,sq", "ta,tb,tc,td,te,tf,tg,th,ti,tj,tk,tl,tm,tn,to,tp,tq", "ua,ub,uc,ud,ue,uf,ug,uh,ui,uj,uk,ul,um,un,uo,up,uq", "va,vb,vc,vd,ve,vf,vg,vh,vi,vj,vk,vl,vm,vn,vo,vp,vq", "wa,wb,wc,wd,we,wf,wg,wh,wi,wj,wk,wl,wm,wn,wo,wp,wq", "xa,xb,xc,xd,xe,xf,xg,xh,xi,xj,xk,xl,xm,xn,xo,xp,xq", "ya,yb,yc,yd,ye,yf,yg,yh,yi,yj,yk,yl,ym,yn,yo,yp,yq", "za,zb,zc,zd,ze,zf,zg,zh,zi,zj,zk,zl,zm,zn,zo,zp,zq"};
    PositiveID* pObj = new PositiveID();
    clock_t start = clock();
    int result = pObj->maximumFacts(suspects);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> suspects = {"aa,ab,ac,ad,ae,af,ag,ah,ai,aj,ak,al,am,an,ao,ap,aq", "bb,bc,bd,be,bf,bg,bh,bi,bj,bk,bl,bm,bn,bo,bp,bq,br", "cc,cd,ce,cf,cg,ch,ci,cj,ck,cl,cm,cn,co,cp,cq,cr,cs", "dd,de,df,dg,dh,di,dj,dk,dl,dm,dn,do,dp,dq,dr,ds,dt", "ee,ef,eg,eh,ei,ej,ek,el,em,en,eo,ep,eq,er,es,et,eu", "ff,fg,fh,fi,fj,fk,fl,fm,fn,fo,fp,fq,fr,fs,ft,fu,fv", "gg,gh,gi,gj,gk,gl,gm,gn,go,gp,gq,gr,gs,gt,gu,gv,gw", "hh,hi,hj,hk,hl,hm,hn,ho,hp,hq,hr,hs,ht,hu,hv,hw,hx", "ii,ij,ik,il,im,in,io,ip,iq,ir,is,it,iu,iv,iw,ix,iy", "jj,jk,jl,jm,jn,jo,jp,jq,jr,js,jt,ju,jv,jw,jx,jy,ja", "kk,kl,km,kn,ko,kp,kq,kr,ks,kt,ku,kv,kw,kx,ky,ka,kb", "ll,lm,ln,lo,lp,lq,lr,ls,lt,lu,lv,lw,lx,ly,la,lb,lc", "mm,mn,mo,mp,mq,mr,ms,mt,mu,mv,mw,mx,my,ma,mb,mc,md", "nn,no,np,nq,nr,ns,nt,nu,nv,nw,nx,ny,na,nb,nc,nd,ne", "oo,op,oq,or,os,ot,ou,ov,ow,ox,oy,oa,ob,oc,od,oe,of", "pp,pq,pr,ps,pt,pu,pv,pw,px,py,pa,pb,pc,pd,pe,pf,pg", "qq,qr,qs,qt,qu,qv,qw,qx,qy,qa,qb,qc,qd,qe,qf,qg,qh", "rr,rs,rt,ru,rv,rw,rx,ry,ra,rb,rc,rd,re,rf,rg,rh,ri", "ss,st,su,sv,sw,sx,sy,sa,sb,sc,sd,se,sf,sg,sh,si,sj", "tt,tu,tv,tw,tx,ty,ta,tb,tc,td,te,tf,tg,th,ti,tj,tk", "uu,uv,uw,ux,uy,ua,ub,uc,ud,ue,uf,ug,uh,ui,uj,uk,ul", "vv,vw,vx,vy,va,vb,vc,vd,ve,vf,vg,vh,vi,vj,vk,vl,vm", "ww,wx,wy,wa,wb,wc,wd,we,wf,wg,wh,wi,wj,wk,wl,wm,wn", "xx,xy,xa,xb,xc,xd,xe,xf,xg,xh,xi,xj,xk,xl,xm,xn,xo", "yy,ya,yb,yc,yd,ye,yf,yg,yh,yi,yj,yk,yl,ym,yn,yo,yp", "za,zb,zc,zd,ze,zf,zg,zh,zi,zj,zk,zl,zm,zn,zo,zp,zq"};
    PositiveID* pObj = new PositiveID();
    clock_t start = clock();
    int result = pObj->maximumFacts(suspects);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> suspects = {"fa,gb,hc,id,je,kf,lg,mh,ni,oj,pk,ql,rm,sn,to,up,vq", "gb,hc,id,je,kf,lg,mh,ni,oj,pk,ql,rm,sn,to,up,vq,wr", "hc,id,je,kf,lg,mh,ni,oj,pk,ql,rm,sn,to,up,vq,wr,xs", "id,je,kf,lg,mh,ni,oj,pk,ql,rm,sn,to,up,vq,wr,xs,yt", "je,kf,lg,mh,ni,oj,pk,ql,rm,sn,to,up,vq,wr,xs,yt,au", "kf,lg,mh,ni,oj,pk,ql,rm,sn,to,up,vq,wr,xs,yt,au,bv", "lg,mh,ni,oj,pk,ql,rm,sn,to,up,vq,wr,xs,yt,au,bv,cw", "mh,ni,oj,pk,ql,rm,sn,to,up,vq,wr,xs,yt,au,bv,cw,dx", "ni,oj,pk,ql,rm,sn,to,up,vq,wr,xs,yt,au,bv,cw,dx,ey", "oj,pk,ql,rm,sn,to,up,vq,wr,xs,yt,au,bv,cw,dx,ey,fa", "pk,ql,rm,sn,to,up,vq,wr,xs,yt,au,bv,cw,dx,ey,fa,gb", "ql,rm,sn,to,up,vq,wr,xs,yt,au,bv,cw,dx,ey,fa,gb,hc", "rm,sn,to,up,vq,wr,xs,yt,au,bv,cw,dx,ey,fa,gb,hc,id", "sn,to,up,vq,wr,xs,yt,au,bv,cw,dx,ey,fa,gb,hc,id,je", "to,up,vq,wr,xs,yt,au,bv,cw,dx,ey,fa,gb,hc,id,je,kf", "up,vq,wr,xs,yt,au,bv,cw,dx,ey,fa,gb,hc,id,je,kf,lg", "vq,wr,xs,yt,au,bv,cw,dx,ey,fa,gb,hc,id,je,kf,lg,mh", "wr,xs,yt,au,bv,cw,dx,ey,fa,gb,hc,id,je,kf,lg,mh,ni", "xs,yt,au,bv,cw,dx,ey,fa,gb,hc,id,je,kf,lg,mh,ni,oj", "yt,au,bv,cw,dx,ey,fa,gb,hc,id,je,kf,lg,mh,ni,oj,pk", "au,bv,cw,dx,ey,fa,gb,hc,id,je,kf,lg,mh,ni,oj,pk,ql", "bv,cw,dx,ey,fa,gb,hc,id,je,kf,lg,mh,ni,oj,pk,ql,rm", "cw,dx,ey,fa,gb,hc,id,je,kf,lg,mh,ni,oj,pk,ql,rm,sn", "dx,ey,fa,gb,hc,id,je,kf,lg,mh,ni,oj,pk,ql,rm,sn,to", "ey,fa,gb,hc,id,je,kf,lg,mh,ni,oj,pk,ql,rm,sn,to,up", "fa,gb,hc,id,je,kf,lg,mh,ni,oj,pk,ql,rm,sn,to,up,vq", "gb,hc,id,je,kf,lg,mh,ni,oj,pk,ql,rm,sn,to,up,vq,wr"};
    PositiveID* pObj = new PositiveID();
    clock_t start = clock();
    int result = pObj->maximumFacts(suspects);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> suspects = {"fafafafafa,gbgbgbgbgb,hchchchchc,ididididid,jejeje", "gbgbgbgbgb,hchchchchc,ididididid,jejejejeje,kfkfkf", "hchchchchc,ididididid,jejejejeje,kfkfkfkfkf,lglglg", "ididididid,jejejejeje,kfkfkfkfkf,lglglglglg,mhmhmh", "jejejejeje,kfkfkfkfkf,lglglglglg,mhmhmhmhmh,ninini", "kfkfkfkfkf,lglglglglg,mhmhmhmhmh,ninininini,ojojoj", "lglglglglg,mhmhmhmhmh,ninininini,ojojojojoj,pkpkpk", "mhmhmhmhmh,ninininini,ojojojojoj,pkpkpkpkpk,qlqlql", "ninininini,ojojojojoj,pkpkpkpkpk,qlqlqlqlql,rmrmrm", "ojojojojoj,pkpkpkpkpk,qlqlqlqlql,rmrmrmrmrm,snsnsn", "pkpkpkpkpk,qlqlqlqlql,rmrmrmrmrm,snsnsnsnsn,tototo", "qlqlqlqlql,rmrmrmrmrm,snsnsnsnsn,tototototo,upupup", "rmrmrmrmrm,snsnsnsnsn,tototototo,upupupupup,vqvqvq", "snsnsnsnsn,tototototo,upupupupup,vqvqvqvqvq,wrwrwr", "tototototo,upupupupup,vqvqvqvqvq,wrwrwrwrwr,xsxsxs", "upupupupup,vqvqvqvqvq,wrwrwrwrwr,xsxsxsxsxs,ytytyt", "vqvqvqvqvq,wrwrwrwrwr,xsxsxsxsxs,ytytytytyt,auauau", "wrwrwrwrwr,xsxsxsxsxs,ytytytytyt,auauauauau,bvbvbv", "xsxsxsxsxs,ytytytytyt,auauauauau,bvbvbvbvbv,cwcwcw", "ytytytytyt,auauauauau,bvbvbvbvbv,cwcwcwcwcw,dxdxdx", "auauauauau,bvbvbvbvbv,cwcwcwcwcw,dxdxdxdxdx,eyeyey", "bvbvbvbvbv,cwcwcwcwcw,dxdxdxdxdx,eyeyeyeyey,fafafa", "cwcwcwcwcw,dxdxdxdxdx,eyeyeyeyey,fafafafafa,gbgbgb", "dxdxdxdxdx,eyeyeyeyey,fafafafafa,gbgbgbgbgb,hchchc", "eyeyeyeyey,fafafafafa,gbgbgbgbgb,hchchchchc,ididid", "fafafafafa,gbgbgbgbgb,hchchchchc,ididididid,jejeje", "gbgbgbgbgb,hchchchchc,ididididid,jejejejeje,kfkfkf"};
    PositiveID* pObj = new PositiveID();
    clock_t start = clock();
    int result = pObj->maximumFacts(suspects);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> suspects = {"kbluiqsedlsiedelrambnoefdbrlqamlcfmqfoaglknoobelpk", "omhpcrgfakjltipcklicqrarrbngkadufasromktqkgmcpfndf", "fgjseqefnubpupqmmkskmtopblmnaqgenhpthntdjjgccgqrec", "brkbctpgmpjlrjidsshgmpkcssruqpblsjjhojfgumdsjqbbmm", "crqnradjfqjqprsqmpqmukdtferqsqbnggpibejdjditboanom", "hpbcqljqfbftfpcogbejtlcrusehakjkbbfbroipqspsrimrrf", "qtjssknemstnedfbobmhsctcmldbhnbtdcbrotqhiitjgfpcpj", "nimkcogrqherefkfgisnlijjduraepbelhsajqdkbuucimctjd", "nlgdfbikhfjtpfujsaneucjmeiaacmejfdokhhoofrjcndirkl", "idfslksbfkbmcpbhlmicbctimrkqngqaqtqkhkphqebkhocqgs", "nugeakfkhgomrjgthmknnousdqhcpqfrlcfkspokdibobhccmp", "jmbqsnsfprdjqashkpidqhjqsflejkhgspqmgdfospfjmdtbce", "kndtgtbclfdttqrbfiqhdhdfdlcpoascnhokbndbcsocetlpnk", "oaqncktarobkfkdemiqfholgfmbkboqfsocsrgucpktnstgopp", "sbfmdbjugrgohjmtnmlbkbklbdueilklrfnfhtejofjifrcfjf", "hgecmhtibkjcnotsqcjfgggsecnmoattfpposdjecdbthcdqll", "ufptohbjmbtotstfpedmeojriiqsgpqmrcphnefnieuktocflh", "jhcmislhfgocgfnsiptrsjqphsshfmaialmoermieoolpmnsfr", "bndprippqqgbthpjaqnhoqiagkfthrqkujsoumglnibffkqtmo", "kschslcmfugnqqsdlqtlmameicjmhnkjtlcinibdiileenjfbu", "iecteebgcahogjiqkmatfcgohsonntdiplctjlquedqqmobgkt", "fgegocfbaobuljtbdicumpbdhpmemiafkokcofludrddajpech", "fepansfqkpacefrognpulkkufrneogregpbghtielogjlaemml", "ttnbhtaulogdgpgkekcolcmdijhdbnljnhcsbtmhcgmqpgtdad", "klpjjdbpbpblkhrikssnmdopcilnpullecdedblqiklnjjncem", "eotbgladigjqafsuucgbukdoshcsniteekqlpjhqhoncmaqspf", "qrriggumpolpsptugngfejrrltskkmkfrspbrrhhhobqdsupkl"};
    PositiveID* pObj = new PositiveID();
    clock_t start = clock();
    int result = pObj->maximumFacts(suspects);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> suspects = {"dmjabcsgktmiosijpoomfhhtjingdjjjdbrpaqtloooiukicos", "hhgubcfjqsddmqrgnmtbsqrosqnthdqgeedskcinhslebqqpob", "opncntklmmscndceonejgqhoceuigqoakltdkgggrfpkdchkrs", "diclrhjcitqqfsnlmhtkcfoilpsdfsorbbcqbleajpnnlkjedf", "ibhhoujkrmijtrepildrieoflbqjoiepfinmijiqopskgfstmk", "qcgrjorgtqcfoheorgmlobprhnrfnoasksiffkdmjhqhlaobmd", "tcbssgpgentfbgldskccefbenfjudcpkmtcejrkgqtoiqnqfrd", "rnrotcmafnssnmcjtcglkdidmmtlgcbcmjmcoqmtntgibsjhei", "pldtmucmjtpcajcsbdodkhoqtimtcerqrbtjhppahtpfsleegt", "dajhoiiokuuunoplroablareiccfsmohjpdkkkneugqhbtftbs", "mofibjrfqiqcdbunmlbreggqjjleeueptqqdjgidhcophpuafg", "moifdrgdfgktklfjrgsctjitislbjtdlnpejsbsldhljitlbcp", "dpnojnsgkcfjclgkfhmpljgasmpuflpptqjitditkdnnfukgql", "opncntklmmscndceonejgqhoceuigqoakltdkgggrfpkdchkrs", "mofibjrfqiqcdbunmlbreggqjjleeueptqqdjgidhcophpuafg", "pldtmucmjtpcajcsbdodkhoqtimtcerqrbtjhppahtpfsleegt", "diclrhjcitqqfsnlmhtkcfoilpsdfsorbbcqbleajpnnlkjedf", "pldtmucmjtpcajcsbdodkhoqtimtcerqrbtjhppahtpfsleegt", "tcbssgpgentfbgldskccefbenfjudcpkmtcejrkgqtoiqnqfrd", "diclrhjcitqqfsnlmhtkcfoilpsdfsorbbcqbleajpnnlkjedf", "ibhhoujkrmijtrepildrieoflbqjoiepfinmijiqopskgfstmk", "dmjabcsgktmiosijpoomfhhtjingdjjjdbrpaqtloooiukicos", "mofibjrfqiqcdbunmlbreggqjjleeueptqqdjgidhcophpuafg", "dajhoiiokuuunoplroablareiccfsmohjpdkkkneugqhbtftbs", "diclrhjcitqqfsnlmhtkcfoilpsdfsorbbcqbleajpnnlkjedf", "dajhoiiokuuunoplroablareiccfsmohjpdkkkneugqhbtftbs", "rnrotcmafnssnmcjtcglkdidmmtlgcbcmjmcoqmtntgibsjhei"};
    PositiveID* pObj = new PositiveID();
    clock_t start = clock();
    int result = pObj->maximumFacts(suspects);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> suspects = {"emfd,rjfd,sn,ckr,cpi,jsbh,ljqqc,tss,euki,ab,spoj", "ips,npkm,bln,nlgc,spl,nm,kil,reb,ftj,bsgn,hnsq,udr", "bd,php,ilj,lrs,fijq,ec,cpi,kbck,rna,ofpq,bln,sbbnq", "grqj,bd,elo,bls,gast,naf,ik,ftue,uemet,mutf,gboi", "fbdpt,kil,udrq,lsnq,irsb,ec,qumd,hlk,ptt,ckr,emfd", "lsnq,cpi,jsbh,odip,fgqb,ctp,igo,sjrj,mmk,pek,sehl", "jp,ctei,uq,cp,tss,tssk,elrt,spoj,hcsg,frisk,spl", "uemet,cad,grqj,ssp,ofpq,mfh,koc,rchkh,cjqlb,qpcjj", "et,fijq,marm,hllr,fdh,lrs,cad,spoj,ec,ehj,hptjf", "hcdgc,qpcjj,rli,igo,dqkt,ggil,php,rchkh,cjqlb,fijq", "spk,ec,eauor,oind,iksj,klk,jcml,ssp,rjfd,ptte,pcuk", "enc,bjol,fdh,elo,fbdpt,hlk,hllr,ca,mutf,gast,bls", "udrq,ab,gboi,lnl,pfku,ptrbe,rli,nbk,npkm,tq,uemet", "umfj,fdh,ctei,cafdf,grqj,tssk,et,gel,tq,jsbh,oind", "cafdf,rli,ab,ilj,cpi,stkdt,kme,iqpn,reb,fdh,kl,bls", "ptt,nm,ssp,ljqqc,sehl,spoj,obt,odip,igl,gboi,mfh", "jsbh,ljqqc,kme,bbfrl,lrs,snm,ips,elrt,mutf,cad,spo", "elo,igo,sbbnq,jp,odip,kme,sehl,uq,nlgc,tq,frisk,sn", "ftj,mmk,fijq,ptrbe,mlm,udrq,orth,rjfd,bls,rchkh,nm", "rna,qumd,pd,ssp,ofpq,sn,mfh,rjfd,bd,fijq,jsbh,ggil", "mmk,rmts,oind,nlgc,lnl,gast,mfh,ab,ssp,hckfe,sn", "pd,rchkh,orth,bsgn,fgqb,mutf,snm,bbfrl,klk,rli", "jsbh,rrd,nh,odip,uq,ptrbe,ftet,eauor,gboi,bbfrl", "eauor,nbk,ips,igo,reb,nh,qjie,epknj,orth,udrq,obt", "ik,naf,enc,rmts,marm,ljqqc,fbdpt,ctei,spoj,rli,ofp", "frisk,mmk,bls,idb,tfmh,comq,ftet,jgui,pek,hptjf,ko", "oind,kil,ptrbe,ca,ftet,hllr,djkqf,hcdgc,ofpq,hpek", "bls,gast,cad,ofpq,ptrbe,nm,ftj,pcuk,rrd,gfit,tss", "bln,uq,eauor,cpi,orth,reb,naf,ctp,dqkt,qpcjj,lsnq", "bls,grqj,cafdf,igo,jgui,cjqlb,iqpn,pfku,npkm,ctei", "igo,spoj,tssk,pek,hpek,npkm,gnktg,epknj,kbck,uq,km", "umfj,dqkt,kl,nm,php,mfh,mlm,rjfd,igo,uemet,grqj", "php,ec,ctei,grqj,fgqb,ehj,cafdf,nm,gboi,dof,tss,kl", "fbdpt,umfj,qpcjj,ctei,koc,gfit,ilj,mutf,dqkt,php", "sjrj,gel,php,mutf,sbbnq,hckfe,rjfd,sehl,lrs,cf,bjo", "fbdpt,naf,et,kil,eauor,hllr,rmts,marm,do,iqpat,mfh", "mfh,stkdt,iqpn,ssp,gast,enc,et,kil,eauor,hckfe,sjr", "hcdgc,djkqf,reb,hmc,ips,ctp,do,gboi,lnl,klk,dqkt", "bbfrl,rap,ptte,iqpat,cjqlb,lsnq,epbuu,mutf,rli,ofp", "emfd,fijq,grqj,ptt,lrs,ehj,ggil,iksj,ab,hcsg,dqkt", "nlgc,igl,uq,odip,djkqf,ptrbe,idb,lnl,iqpn,comq,mlm", "php,tssk,ihai,hcdgc,oind,dqkt,lqto,ctei,ssp,frisk", "ca,mlm,naf,tssk,gfit,ab,hmc,iqpat,sehl,qjie,cad", "rmts,rrd,rap,bbfrl,spoj,kbck,jsbh,qpcjj,epknj,jgui", "ptte,ftue,igl,dqkt,ctei,lsnq,mutf,rmts,ekh,fgqb", "bbfrl,kl,spl,cpi,gfit,tfmh,hcdgc,ljqqc,hmc,spoj,ln", "snm,joqi,tfmh,udrq,sbbnq,hllr,jgui,igo,lnl,sjrj,el", "rna,uq,mfh,nlgc,lrs,ofpq,ab,eauor,tssk,ptte,ihai", "jcml,bjol,ggil,spk,uemet,hlk,tss,ca,hckfe,qjie,nm", "rjfd,spoj,fijq,kme,reb,jcml,irsb,ips,lrs,stkdt,koc"};
    PositiveID* pObj = new PositiveID();
    clock_t start = clock();
    int result = pObj->maximumFacts(suspects);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> suspects = {"josekrclif,sjlnkubgkhc,jtgouofulpppte", "ilgblnn,kcrmugjhntql,kcjhji,jfdqdqkssr,klkcgdoml", "etnspjgrk,mhh,ftokthmrtjephc,bfsrkgadr,dkn,khlloss", "kcjhji,kdggfnsgpmcfl,mifgtmspnq,bermill,nrrki", "qibqqqsqsndo,qbtsqnjmca,qsocoehqspiqkd,fuhmc", "ogmtcurlibdghc,lsgl,bfsrkgadr,urot,qsocoehqspiqkd", "lbckqmuhp,clbbomj,ogmtcurlibdghc,plortqn,mercoctq", "jmhb,pjih,kcrmugjhntql,sliscmsuifo,neoecophruibs", "nbfhimnocmo,rkm,snirhcefn,gkoddqds,kodrtsghqihkl", "jmhb,arrlr,qh,iibi,nbfjn,lbckqmuhp,srdjuhpoeubj", "ohqmn,injflcqgfnek,nbqglplk,rqgfmalabopbh", "hlfrtdfkthjq,edsfkgmcftb,rdmtoanqc,qpaqu,snirhcefn", "hunsnmpfbendid,ftokthmrtjephc,srdjuhpoeubj", "ko,pjih,fiigjcrodnot,eflalno,nrrki,jop", "pko,ledsh,rqmbregisa,qnmdlsnqmqcki,mrdiqqf", "ecctcmnidg,fiigjcrodnot,qr,updkn,khlloss,igcnr", "arrlr,edsfkgmcftb,fhljjugicnodf,pko,gguje", "jfdqdqkssr,bobejihdffcgq,ko,mfmr,josekrclif,clhnrq", "pudhme,bfsrkgadr,qibqqqsqsndo,arrlr,mercoctq", "phbgkep,tofjqlbfcscb,kcjhji,miltphmgk,gkoddqds", "rjaqnk,injflcqgfnek,eflalno,oi,pudhme,fhljjugicnod", "sdlc,bqulkbognks,eqshgbapqig,kcrmugjhntql,mqsnled", "klkcgdoml,mrdiqqf,spkeei,igkocag,rjaqnk,mercoctq", "ecctcmnidg,bobejihdffcgq,pjih,lurjccn,aapjdei", "rfpeaikf,dpbhdbkdkbjio,pjqqcibfr,clbbomj", "hgcimhqcme,rdmtoanqc,kodrtsghqihkl,aapjdei", "eahkgsiktb,rjaqnk,srdjuhpoeubj,sgcrkshbho", "ipob,eahkgsiktb,bdh,kodrtsghqihkl,pko,rfpeaikf", "qimgcdtbspemof,dkn,eqshgbapqig,rdmtoanqc", "igkocag,gkoddqds,rqmbregisa,lgqirgm,injflcqgfnek", "rme,qsocoehqspiqkd,oqj,qpaqu,bobejihdffcgq", "qbtsqnjmca,khlloss,nbqglplk,updkn,lurjccn,bpbhesu", "fiigjcrodnot,nbfhimnocmo,mfmr,jfdqdqkssr", "qcnbg,cuf,djliptqbctkqk,gkoddqds,eflalno,oi,krcr", "mhh,bobejihdffcgq,qr,josekrclif,arrlr,hkghm,jfn", "eqshgbapqig,fuhmc,rqmbregisa,tccir,urot,lbckqmuhp", "kdggfnsgpmcfl,pgmafbdkqnpl,nfniqop,tofjqlbfcscb", "tofjqlbfcscb,fuhmc,rgcnmnmhlkgtc,klkcgdoml,mfmr", "cuf,rqmbregisa,mfmr,pbidcljfdnla,mrdiqqf,jfdqdqkss", "ilgblnn,bdh,rgcnmnmhlkgtc,pbidcljfdnla", "rqgfmalabopbh,qcnbg,jmhb,josekrclif,jtgouofulpppte", "lafoehkepp,kngspqlkbkoi,lgqirgm,fiigjcrodnot", "pkifjfgu,htkcdh,qh,injflcqgfnek,ftokthmrtjephc,jfn", "nrrki,qimgcdtbspemof,qcnbg,eqshgbapqig,fuhmc", "qcnbg,jmhb,mercoctq,kdggfnsgpmcfl,qr,fuhmc", "bermill,djliptqbctkqk,phbgkep,jmhb,cuf,dkn,iu", "rfpeaikf,gkoddqds,rqgfmalabopbh,rfendkejobbos", "jfdqdqkssr,noomlphkalrkj,khlloss,rkm,sdlc,eflalno", "pbidcljfdnla,edsfkgmcftb,kdggfnsgpmcfl,bfsrkgadr", "embmedtfkujc,edsfkgmcftb,pkifjfgu,miltphmgk"};
    PositiveID* pObj = new PositiveID();
    clock_t start = clock();
    int result = pObj->maximumFacts(suspects);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> suspects = {"n,l,e,o,s,d,k,u,t,g,c,b,i,p,m,f,j,q,a,h,r", "f,n,p,t,k,r,s,d,l,h,i,e,j,a", "e,s,r,o,b", "t,q,u,o,p,f,e,c,i,s,g,n,r,h,b,l,j,k,d,m", "m,e,g,d,i,n,f,a,r,l", "j,i,k,h,d,n,t,l", "p,q,k,m,o", "m,t,q,k,i,j,r,p,f,c,e,n,u,l,o,s,d", "c,i,j,e,m,b,k,f,g,d,l,r,n,t,p", "o,u,e,c,a,r,s,n,h,l,k", "k,l,u,o,d,s,e,c,g,q,h,t,i,a,r", "m,i,c,e,q,n,l,k,p", "f,i,r,p,j,o,m,a,c,l,u,k,t,n,g,e", "t,p,b,u,l,e,n,f,k,d,g,i", "p,j,i,t,h", "f,a,i,j,b,m,k,s,p", "j,t,p,b,l,f,r,q,e,i,d", "l,g,b,j,h,k,n,a,e,q,m,s,o,c,p,t", "e,c,g,d,q,p,n,h,t,i,k,m,r,a,s,b,u,o,l,j", "i,n,o,e,u,q,f,d,c,t,k,j,r,h", "o,e,j,b,i,h,m,q", "p,d,l,b,o,u", "m,k,f,p,d,e,c", "k,l,i,f,p,s,b,d,t,g,r,o,u,n,j,m,e", "l,f,b,d,t,u,p,q,j,a,r,o,e", "n,f,i,e", "o,k,g,q,u,j,f,h,i,l,m,b,t,p,c,s,n,a,r", "p,e,u,k,s,i,o,c,l,j,t,n,f", "q,d,e,p,c,n,o,k", "o,p,l,n,t,u,f,h,s,a,c,d,m,q,b,e,r,g,k,j", "n,e,c,g,p,k,m,r,b,q,i,f,t,d,s,u,a,o,l,j", "i,o,m,l,k,f,q,p,t", "f,p,o,e", "h,s,k,f,o,n,i,d,e,m,c,u,g,l,q,a,j,p,t,r,b", "k,q,p,n,j,c,o,d,f,m,t,i,s,b,h,a,u,r,e,g,l", "k,i,c,n,e,b,f,p", "g,k,e,i,t,f,r,u,l,p,a,m,s,c,o,j,h", "d,h,i,j,q,f,s", "l,e,h,c,r,f", "h,c,e,t,i,f,l", "q,f,j,s,o,t,l,n,e,i", "j,a,e,l,f,n,t,k,m,d,r,o,c,u,q,p,i,s,g", "s,p,l,n,q,u,o,t,f,e,m,a,k,c,d,i,g,j", "i,p,e,d,q,f,s,b,k,m,c,u,l,n", "f,l,n,o,d,s,q,e,p,r,a", "i,c,q,a,t,o,e,r,d,l,s,k,m,n,f,u,p", "l,i,k,u,j,m,o", "u,i,t,j,o,b,f,l,q,k,m,e,c,n,p,d,g", "q,m,e,t,o,l,p,n,s", "u,q,i,l,b,t,a,r,k,p,m,f,h,e,d,g"};
    PositiveID* pObj = new PositiveID();
    clock_t start = clock();
    int result = pObj->maximumFacts(suspects);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> suspects = {"aa,aaaaaa,aaaaaaaaaa,aaaaaaaaaaaaa,aaaaaaaaaaaaaa", "aaaa,aaaaa,aaaaaa", "aaa,aaaaaaaa,aaaaaaaaaa,aaaaaaaaaaa,aaaaaaaaaaaaaa", "aaaaaaaaaa,aaaaaaaaaaa,aaaaaaaaaaaa", "aaa,aaaaaa,aaaaaaaaaa", "aaaaaaaaaaaaaa", "aaa,aaaaaaaaa,aaaaaaaaaaaaa", "aaaaaaaaaaa,aaaaaaaaaaaa,aaaaaaaaaaaaaa", "aaa,aaaaaa", "aaaaaaaa,aaaaaaaaaa,aaaaaaaaaaaa,aaaaaaaaaaaaa", "aaaaaaaaaa", "aaaaaa,aaaaaaaaaaaaa", "aaa,aaaaaaaaaaaaa", "aaaaaaaaa,aaaaaaaaaa,aaaaaaaaaaaa,aaaaaaaaaaaaaa", "aaaaa,aaaaaa,aaaaaaa,aaaaaaaaaaa,aaaaaaaaaaaa", "aaaaaaaaaaa,aaaaaaaaaaaa", "aaa,aaaaa,aaaaaaaaaaa,aaaaaaaaaaaaa,aaaaaaaaaaaaaa", "aaaaaaaaaa,aaaaaaaaaaa,aaaaaaaaaaaaaa", "aaaaaaaaaa,aaaaaaaaaaaa", "aaaaaaaaaaaa,aaaaaaaaaaaaa", "aaa,aaaaaaaa,aaaaaaaaaa,aaaaaaaaaaa", "aaaaaaaaaaa,aaaaaaaaaaaaaa", "aaa,aaaa,aaaaaaa,aaaaaaaaaaa,aaaaaaaaaaaaa", "aaa,aaaaaaaaaaa,aaaaaaaaaaaa", "aaaaaaaaaaaa,aaaaaaaaaaaaa,aaaaaaaaaaaaaa", "aaaaaa,aaaaaaaaaaa,aaaaaaaaaaaaaa", "aaaaaaaaaaaaaa", "aaaaaaaaaaaaaa", "aaaaa,aaaaaa,aaaaaaaaaaaaaa", "aaaaaaaaa,aaaaaaaaaa,aaaaaaaaaaa,aaaaaaaaaaaaa", "aaaaaaaaaaaaa,aaaaaaaaaaaaaa", "aaaaaaaaaaaaaa", "aaaa,aaaaaaaaaa,aaaaaaaaaaaaaa", "aaaaaaaaaaa,aaaaaaaaaaaa,aaaaaaaaaaaaaa", "aaaaaa", "aaaaaaa,aaaaaaaaaaa,aaaaaaaaaaaaaa", "aaa,aaaaa,aaaaaaaaaaa,aaaaaaaaaaaa,aaaaaaaaaaaaa", "aaaaaaaaa,aaaaaaaaaaaaa,aaaaaaaaaaaaaa", "aaaaaa,aaaaaaaa,aaaaaaaaaaa,aaaaaaaaaaaaa", "aaaaa,aaaaaaaaa,aaaaaaaaaaaaa,aaaaaaaaaaaaaa", "aa,aaaaaaaaaaaa", "aaaaa,aaaaaaaaaa,aaaaaaaaaaaaa,aaaaaaaaaaaaaa", "aaaa,aaaaaaaaaaa", "aaaaaaa", "aaaaaaaaaa,aaaaaaaaaaaaa,aaaaaaaaaaaaaa", "aaaa,aaaaaa,aaaaaaa,aaaaaaaa,aaaaaaaaaaa", "aaaaaaaaaaaaaa", "aa,aaaaaaaaaaa,aaaaaaaaaaaa,aaaaaaaaaaaaa", "aaaaaaaaa,aaaaaaaaaaaaa", "aaa,aaaa,aaaaaaaaaa"};
    PositiveID* pObj = new PositiveID();
    clock_t start = clock();
    int result = pObj->maximumFacts(suspects);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> suspects = {"cccc,eee,bbbbb,ddd,ffff,aaa,gg", "bbbbb,ddd,ffff,eee,cccc", "ddd,bbbbb,eee,cccc,ffff,gg,aaa", "gg,eee,ffff,cccc,aaa", "ffff,ddd", "bbbbb,ddd,eee,gg,ffff", "ffff,cccc,ddd,bbbbb,eee,gg,aaa", "ddd,gg,bbbbb,ffff", "cccc,ddd,ffff,bbbbb,eee", "ffff,bbbbb,cccc,ddd,eee", "cccc,aaa,gg,ddd,eee", "cccc,bbbbb,ddd,ffff,eee,aaa,gg", "aaa,ffff,ddd,eee,cccc,bbbbb,gg", "ffff,bbbbb,cccc,ddd,eee", "cccc,ddd,bbbbb,eee,gg,ffff", "bbbbb,eee,cccc,gg", "bbbbb,gg,ffff,cccc,ddd", "ddd,eee,cccc,aaa,gg", "eee,bbbbb,ddd,cccc,ffff,gg", "bbbbb,ffff,cccc,gg,eee,ddd,aaa", "ffff,cccc", "cccc,ddd,aaa,eee,bbbbb,ffff,gg", "aaa,ffff", "eee,ffff,bbbbb,ddd,cccc,gg,aaa", "ddd,eee,bbbbb,gg,ffff", "gg,aaa,ddd,bbbbb", "gg,ffff,aaa,eee,ddd,cccc", "ffff,eee,ddd,aaa,cccc,bbbbb", "bbbbb,ffff,gg,ddd,aaa,cccc", "ddd,bbbbb,ffff,aaa,gg,cccc,eee", "bbbbb,ffff,eee,aaa,gg,ddd,cccc", "ddd,ffff,eee,bbbbb,cccc,gg", "bbbbb,eee,ffff,gg,ddd", "cccc,ffff", "cccc,bbbbb,aaa,ffff,ddd,eee,gg", "bbbbb,cccc,eee,gg,ffff,ddd,aaa", "ddd,cccc,eee,gg", "eee,ddd,ffff,bbbbb,cccc,gg", "ddd,gg", "gg,eee,bbbbb,cccc,ffff,ddd", "ffff,bbbbb,gg,aaa", "ffff,bbbbb,eee,ddd", "ddd,ffff,cccc,gg,eee,aaa,bbbbb", "ffff,aaa,eee,cccc,gg", "eee,ffff,bbbbb,ddd,cccc,gg", "bbbbb,ffff,eee,aaa,cccc,ddd", "cccc,bbbbb,ffff,ddd,aaa", "eee,ddd,bbbbb,aaa", "bbbbb,gg,ffff,cccc,ddd,eee,aaa", "gg,eee,cccc,bbbbb,ddd"};
    PositiveID* pObj = new PositiveID();
    clock_t start = clock();
    int result = pObj->maximumFacts(suspects);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> suspects = {"pd,ni,hr,ir,iy,xj,qn,zx,tl,zm,cz,qe", "tl,qe,lk,qn,ni,xj,zx,pd,hr,cz,ir,iy", "tl,ir,lk,qe", "zm,zx,hr,lk,cz", "hr,zx,zm,ir,cz,qe,qn,ni,iy", "ni,qn,tl,ir,hr,pd,xj,qe,zx,zm,iy,cz,lk", "cz,ni,hr,iy,qn,qe,ir,zm", "ir,tl,iy,zx,hr,zm,qe", "hr,pd,cz,zx,iy,xj,tl,qn,ni,qe", "zx,xj,tl,qn,pd,zm,ni,ir,hr,cz,iy,qe", "pd,ni,qe,ir,hr,tl,qn,cz,iy", "qe,cz,zm,tl,zx,ni,qn,iy,pd,lk", "hr,ni,zx", "iy,ir,hr,xj,pd,qn,qe", "xj,qe,zm,cz,zx,ni,tl,qn,ir,pd,lk,iy,hr", "pd,iy,tl,hr,ni,zx", "tl,iy,qe,lk,qn,pd,xj,ir", "cz,hr,qe,tl,iy,zm,ir", "xj,cz,lk,zx,ni,iy,qe,hr,tl", "lk,cz,qe,ir,qn,zx,pd,iy,tl,zm,xj,hr", "xj,qn,qe,ir,zx,tl,iy,cz,hr,pd,zm,lk,ni", "xj,tl,ni,zm,pd,ir,qe,cz", "iy,hr,ir,ni,tl,zx,qe,qn,xj,cz", "qn,tl,qe,zm,cz,lk,xj,pd,ni,hr,zx,ir,iy", "qe,tl,cz,qn,zx,iy,ir,pd,xj,lk,hr", "hr,zx,ni,pd,tl,zm,ir,cz,iy,qn", "qn,iy,zx,zm,ni", "tl,lk,cz,hr,ir,ni,qn,xj,pd,zm,qe", "cz,hr,ni,zm,iy", "iy,xj,qe,hr,tl,cz,ni,pd,zx", "cz,iy,lk,qn,tl,pd,zx,zm,ir,ni", "lk,cz,ni,xj,hr,ir,iy,qn,qe,pd,tl", "iy,hr,tl", "qe,ni,iy,pd,tl,qn,zx", "zm,lk,ni,qe,iy,ir,hr,zx,pd,cz,qn", "zm,iy,zx,tl,cz,lk,ir", "pd,ir,ni,lk,qe,tl,zx,xj,iy", "xj,hr,zx,ir,pd,qe,zm,tl,lk,qn,iy,cz,ni", "hr,qn,qe,ir,zm,ni,cz,xj,pd,iy,tl", "xj,ni,hr,lk,zx,tl", "iy,xj,qe,qn,pd,zm,ni,cz,hr,tl,zx,ir,lk", "qn,tl,xj,ir,iy,zx", "qe,ir,iy,lk,zx,cz,ni,zm,xj,hr,tl", "qn,hr,tl,qe,lk,pd,xj,ir,ni,iy", "zx,lk,cz,tl,qe,iy,hr,ni,pd,xj,qn,ir,zm", "ni,zm,pd,lk,tl,cz,hr,qn,iy,qe,zx,ir,xj", "tl,iy,qn,pd,ir,cz,zx,qe,zm,xj,lk,ni", "qe,ir,hr,iy,zx,lk,xj,pd,cz,tl,qn", "hr,cz,iy,pd,qn,ni,qe,tl,zx,ir,xj,lk", "tl,pd,qn,zx,ni,qe"};
    PositiveID* pObj = new PositiveID();
    clock_t start = clock();
    int result = pObj->maximumFacts(suspects);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> suspects = {"ii,w,ek,h,gp,n,jv,um,cl,au,z,ge,tg,kr,br,d,gr,vf", "dt,hu,y,r,mw,yg,au,pr,z,f,ti,n,xi,le,um,hv,pp,yo", "if,p,w,ho,le,dj,qi,ph,bw,ti,pr,sq,z,wt,hb,dn,ot,ss", "lk,f,tc,fs,yo,i,xq,h,gp,w,ou,a,n,bx,sq,wc,xo,z,r", "c,ot,yo,n,dr,dj,e,x,fz,rs,lv,if,qi,gp,xx,h,kr,ft", "ni,bw,if,dn,t,p,ft,tm,gp,c,v,pr,ym,fs,x,o,oy,sj,xo", "wc,n,h,cl,b,sq,ni,br,y,tj,bx,mo,xo,nt,z,ph,f,le,d", "wc,jy,f,xw,um,hb,z,qe,i,t,vl,o,mw,ms,ho,el,d,xi,by", "mo,g,if,l,y,yo,h,gp,c,bx,dj,t,z,w,qe,gr,ih,ii,xw", "o,dr,au,tj,fs,xw,yo,gp,mo,if,ti,oy,dn,dt,le,bi,z", "xq,t,by,gp,o,xw,r,v,f,c,gr,le,oy,dj,wc,u,lv,bw,ai", "bw,tm,v,um,yg,el,r,d,qe,qi,dr,f,k,ih,hv,lk,ss,o,nt", "b,w,m,n,g,gb,u,yo,r,au,c,gp,bw,nt,dj,hv,sq,tj,bf", "bf,r,w,lk,dj,h,hb,z,t,tm,xi,c,dt,o,ss,xx,bi,ho,xo", "ft,gp,oy,hv,wt,x,dr,z,e,b,he,qe,br,au,s,tg,i,sq,bw", "hu,rs,e,y,ss,c,fz,wc,dj,bi,k,p,fs,l,t,le,nt,br,he", "yg,xw,xx,he,b,v,z,t,pp,bf,sj,o,i,xq,bx,vf,wc,vl,jv", "t,ih,x,gp,ii,hb,pr,a,tm,le,xq,xo,w,d,ym,ou,c,au,v", "dj,au,x,z,sj,ge,kr,v,i,t,h,m,ou,fz,vl,wt,gr,lk,ym", "w,r,hv,ek,dj,o,jv,z,ph,br,q,ot,g,a,xw,tc,cl,rs,dr", "sq,u,i,tg,rs,ym,yg,f,l,ss,z,k,h,w,pr,gp,ek,c,bw,dr", "e,le,w,u,o,sj", "br,if,tj,rs,qi,z,yo,gp,ai,jv,ho,x,jy,n,l,ii,vf,ym", "qe,oy,fs,wc,ss,by,br,k,vl,bf,xw,sq,mo,ou,t,ek,cl", "z,gr,ai,f,m,w,dt,ek,ss,bf,au,pp,hu,x,wt,ph,tj,xx,v", "w,pp,wt,x,xi,b,dn,r,c,fz,o,a,gp,s,ni,gb,ph,ym,qe", "ph,d,ii,bf,jy,hu,tm,qe,k,ym,rs,wc,v,bw,o,gp,yo,tc", "y,s,z,lv,hv,tc,dj,fz,xq,bx,au,ym,xx,pp,w,ot,ge,fs", "tj,w,qi,vl,yo,c,gp,yg,x,pr,ot,b,n,u,gr,wc,ou,z,ph", "dt,o,i,w,z,y,ph,oy,tj,rs,xq,tg,mw,pp,hu,ms,ho,ss", "z,u,b,ph,sq,dt", "dn,xo,xw,nt,if,j,ai,wt,b,bx,au,e,ek,um,z,ot,v,lv,q", "t,i,jy,gr,x,ih,p,l,el,a,n,mo,f,hv,c,q,vl,ph,hb,wc", "hv,nt,dr,i,bw,fs,lv,o,gb,ni,ms,ge,mo,yo,vl,bx,pr", "vl,bw,f,z,pp,jy,le,m,ym,g,t,dr,kr,dt,o,qi,dn,el,yg", "f,h,le,dr,ho,c,x,gb,tg,gp,bx,sq,kr,a,ii,ft,xq,z,hu", "xi,nt,z,xw,pr,yo,wt,pp,ii,hb,jv,rs,el,f,bf,gp,xq", "ge,bf,bi,ym,xw,kr,yo,sj,dj,hb,t,pr,tc,xo,hu,ni,xx", "mo,br,x,lk,ii,w,yg,j,ph,rs,d,f,tc,mw,z,tj,gp,q,vl", "h,dr,b,v,au,o,z,tj,yo,f,sq,p,pr,m,hu,ou,mw,fs,ss", "nt,x,gr,bw,vl,lk,kr,jy,ti,c,wt,if,bf,o,bi,dj,mw,ym", "yo,oy,i,hb,g,n,tc,z,el,ii,v,ih,fs,vf,mo,ti,ai,bx", "j,ss,qe,ai,xi,w,f,tj,vl,lv,o,z,n,br,el,hu,ym,jy,sq", "ii,xo,br,lk,w,z,kr,f,ft,hu,xw,dj,fz,ou,ti,dn,q,vf", "ft,sj,hb,gb,nt,w,ih,wt,c,ek,ni,x,jv,z,oy,rs,yo,dr", "z,o,yo,bf,v,kr,if,bx,tm,w,oy,ge,yg,hb,c,hu,ih,jv", "j,tj,o,b,w,x,a,gp,xw,hv,n,qi,s,xo,ho,r,mw,hb,au,ph", "kr,dr,z,xw,ms,i,ni,e,tg,yg,sj,oy,wt,a,ss,ai,gp,mw", "z,q,jv,r,gr,p,f,el,dn,cl,w,ph,x,he,um,o,by,tj,yo", "w,hu,t,f,ou,bf,a,tm,l,ms,ss,mo,tj,xo,ho,bi,au,ih,r"};
    PositiveID* pObj = new PositiveID();
    clock_t start = clock();
    int result = pObj->maximumFacts(suspects);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> suspects = {"lz,m,vv,d,w,yb,il,p,du,tb,g,ky,ci,e,h,sc,ew,yj,jf", "qo,zu,wl,ng,h,r,il,b,cu,yb,ky,cg,lz,ew,yj,ij,t,m", "g,uy,r,il,z,yj,vv,d,h,t,ci,b,du,ky,qo,p,e,sc,m,zu", "ky,ba,p,jf,yb,vv,tb,ij,uy,yj,ci,g,zu,q,d,m,h,sc,qo", "t,d,b,vv,zu,ng,ij,q,w,y,ba,ky,cg,lz,qo,wl,h,ci,jf", "e,w,h,y,il,lz,ci,r,ng,m,ky,zu,b,t,p,sc,ew,tb,vv,yb", "r,cg,yj,sc,il,ci,b,wl,e,yb,ng,ij,lz,vv,cu,du,tb,q", "r,jf,cu,y,cg,ij,m,h,w,p,zu,wl,q,sc,t,yb,tb,yj,ci", "e,t,jf,ng,q,m,ky,tb,wl", "e,d,g,qo,du,w,b,tb,ng,cu,ij,y,ci,h,il,cg,zu,m,yb", "zu,yj,ci,ky,il,b,lz,w,t,ba,cu,cg,p,vv,m,d,e,tb,yb", "yj,u,w,t,sc,il,ng,z,ky,vv,qo,jf,uy,zu,b,ew,wl,ij", "d,t,wl,c,y,yj,zu,b,q,tb,m,cu,ba,jf,du,cg,ky,p,qo,e", "ij,c,e,u,t,lz,cg,w,vv,qo,h,b,y,il,jf,wl,ci,ew,d,cu", "e,w,u,b,ci,g,ng,r,m,vv,cu,lz,q,sc,uy,ba,ij,ew,t,qo", "y,b,q,tb,w,du,g,yj,p,ci,ij,zu,uy,qo,e,lz,ew,ng,r", "z,w,m,r,u,b,il,y,c,d,jf,tb,cg,q,du,yb,lz,cu,zu,qo", "b,w,r,y,il,z,q,zu,e,g,p,t,uy,m,vv,yb,ba,wl,ng,qo", "b,wl,yj,z,h,sc,t,g,u,ci,e,zu,q,lz,ky,vv,m,yb,p,tb", "yb,cu,ky,w,vv,lz,zu,ew,h,cg,du,jf,t,ng,r,m,tb,ba", "cu,ew,p,ky,d,ba,jf,ng,m,il,cg,zu,vv,yb,du,qo,uy,lz", "w,t,cg,z,vv,u,wl,qo,ky,tb,cu,il,lz,jf,e,zu,ij,h,p", "u,y,yj,w,vv,ew,sc,lz,ba,ky,d,du,tb,g,il,cg,r,cu,ij", "w,uy,yb,lz,ng,h,ky,ba,q,wl,p,yj,du,t,cg,e,qo,r,ij", "zu,yj,du,ky,il,lz,uy,m,jf,tb,yb,cg,w,ci,p,ij,sc,ba", "tb,y,uy,h,jf,du,cu,e,ky,z,w,m,zu,lz,ng,ew,ba,sc,q", "c,zu,ij,yj,du,il,m,sc,cg,uy,b,wl,p,tb,qo,jf,ba,e", "t,qo,lz,ba,d,h,p,u,jf,m,w,yb,ci,il,du,ew,g,ng,uy", "yj,ng,b,r,cu,vv,w,h,z,zu,ba,ew,jf,ij,q,qo,p,wl,yb", "wl,u,c,yb,h,ij,ng,t,cg,ci,e,vv,sc,cu,ba,il,ew,ky", "sc,cg,wl,y,z,ky,b,ba,yj,ij,p,m,qo,d,jf,uy,lz,il,r", "t,lz,y,e,cu,m,w,wl,ew,q,il,yj,cg,p,tb,sc,ij,ky,qo", "lz,p,q,du,e,ew,h,ba,g,y,jf,vv,ij,cu,tb,yj,wl,uy,yb", "q,y,b,yb,uy", "c,ij,ng,b,jf,cu,w,e,y,lz,zu,q,wl,uy,sc,ci,cg,il,ky", "qo,h,il,yb,w,ng,z,ij,vv,c,e,yj,lz,r,ci,jf,wl,m,ew", "b,m,ng,ci,qo,wl,il,tb,du,vv,p,h,r,uy,sc,yj,jf,ew", "y,vv,il,m,tb,e,ew,qo,yj,jf,sc,u,r,cg,h,ci,yb,du,lz", "ew,wl,b,du,r,z,ng,c,q,tb,ba,lz,ky,ij,h,il,sc,cg,ci", "b,y,ew,r,h,cg,vv,qo,d,ng,t,ij,lz,il,m,sc,uy,jf,ky", "w,y,m,uy,d,ci", "tb,zu,wl,yj,h,d,cg,p,ng,e,il,qo,ci,yb,m,du,ij,ba", "e,tb,lz,uy,yb,m,w,sc,cu,ba,qo,ky,ci,cg,p,ew,ng,wl", "z,ci,q,ky,e,h,il,w,ew,uy,cu,zu,du,yb,t,ba,wl,g,yj", "ba,w,d,ij,z,p,yj,cg,e,vv,ci,cu,qo,tb,ng,du,jf,il", "w,c,y,lz,wl,cg,uy,qo,ng,sc,b,cu,jf,il,yb,tb,m,ky,d", "il,h,w,e,jf,z,yj,tb,ci,ij,cu,du,ky,vv,ew,uy,lz,zu", "qo,yj,t,sc,ky,g,zu,lz,m,du,b,yb,p,il,vv,tb,uy,cu", "zu,b,y,w,uy,ci,tb,il,ng,yj,ba,e,r,vv,cg,ky,jf,m,d", "lz,m,vv,d,w,yb,il,p,du,tb,g,ky,ci,e,h,sc,ew,zzz"};
    PositiveID* pObj = new PositiveID();
    clock_t start = clock();
    int result = pObj->maximumFacts(suspects);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> suspects = {"a,b,c", "a,b", "b,c", "a,c"};
    PositiveID* pObj = new PositiveID();
    clock_t start = clock();
    int result = pObj->maximumFacts(suspects);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> suspects = {"a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t", "u,v,w,x,y,z,aa,ab,ac,ad,ae,af,ag,ah,ai", "aj,ak,al,am,an,ao,ap,aq,ar,as,at,au,av", "aw,ax,ay,az,bb,cc,dd,ee,ff,gg,hh,ii,jj", "kk,ll,mm,nn,oo,pp,asdf,afdbhad,bas", "qq,rr,ss,tt,uu,vv,ww,xx,yy,zz,ab,cd,ef", "gh,ij,kl,mn,op,qr,st,uv,wx,yz,za", "aaa,bbb,ccc,ddd,a,b,c", "qwe,rty,uio", "aaa,bbb,ccc,ddd,a,b,c"};
    PositiveID* pObj = new PositiveID();
    clock_t start = clock();
    int result = pObj->maximumFacts(suspects);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> suspects = {"a,b", "a,c", "a,d"};
    PositiveID* pObj = new PositiveID();
    clock_t start = clock();
    int result = pObj->maximumFacts(suspects);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> suspects = {"medium,average,nondescript", "medium,average,nondescript"};
    PositiveID* pObj = new PositiveID();
    clock_t start = clock();
    int result = pObj->maximumFacts(suspects);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> suspects = {"a,b", "b,c", "a,c"};
    PositiveID* pObj = new PositiveID();
    clock_t start = clock();
    int result = pObj->maximumFacts(suspects);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> suspects = {"abc,d", "b,adc"};
    PositiveID* pObj = new PositiveID();
    clock_t start = clock();
    int result = pObj->maximumFacts(suspects);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> suspects = {"a,b,c", "a,b,c", "a", "b", "c"};
    PositiveID* pObj = new PositiveID();
    clock_t start = clock();
    int result = pObj->maximumFacts(suspects);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> suspects = {"short,male,beard,quiet,happy,tanned,handsome", "big,tall,loud,happy,male,scarred,tattooed,dirty", "female,pretty,blond,quiet", "happy,tiny,stout,male,tanned,beard,blond", "happy,tiny,stout,male,tanned,beard"};
    PositiveID* pObj = new PositiveID();
    clock_t start = clock();
    int result = pObj->maximumFacts(suspects);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> suspects = {"big,tall,loud,happy,male,scarred,tattooed,dirty", "short,male,beard,quiet,happy,tanned,handsome", "female,pretty,blond,quiet", "happy,tiny,stout,male,tanned,beard,blond", "happy,tiny,stout,male,tanned,beard"};
    PositiveID* pObj = new PositiveID();
    clock_t start = clock();
    int result = pObj->maximumFacts(suspects);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> suspects = {"a,b,c,d", "a,z,y,x", "z,y,x", "z,y,x,p"};
    PositiveID* pObj = new PositiveID();
    clock_t start = clock();
    int result = pObj->maximumFacts(suspects);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> suspects = {"a,b", "a,c", "b,c"};
    PositiveID* pObj = new PositiveID();
    clock_t start = clock();
    int result = pObj->maximumFacts(suspects);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> suspects = {"a,b", "b,c", "c,a"};
    PositiveID* pObj = new PositiveID();
    clock_t start = clock();
    int result = pObj->maximumFacts(suspects);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> suspects = {"a", "a", "b", "b", "c", "c", "d", "d", "e", "e", "f", "f", "g", "g"};
    PositiveID* pObj = new PositiveID();
    clock_t start = clock();
    int result = pObj->maximumFacts(suspects);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> suspects = {"a", "aa", "aaa"};
    PositiveID* pObj = new PositiveID();
    clock_t start = clock();
    int result = pObj->maximumFacts(suspects);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> suspects = {"a", "a,b"};
    PositiveID* pObj = new PositiveID();
    clock_t start = clock();
    int result = pObj->maximumFacts(suspects);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> suspects = {"b,a", "c,a"};
    PositiveID* pObj = new PositiveID();
    clock_t start = clock();
    int result = pObj->maximumFacts(suspects);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> suspects = {"or,vk,xp,uo,xu,jg,mt,uf,oy,yx,wl,sm,hb,jo,kc", "eq,jy,nf,ms,vv,ox,xm,lf,db,nc,kf,hi,ut,df,mh", "yr,zj,rm,pg,em,bu,ma,hx,fm,av,pm,ay,uw,rx,dg", "gr,id,xv,ts,zo,sp,oo,sm,rw,si,yv,pn,ax,zd,xk", "id,bs,ia,pc,to,sn,fg,bz,us,vp,au,mr,jn,rk,qo", "ua,uw,se,wj,ir,xa,ef,if,xc,yg,th,vm,so,bm,ox", "kj,bj,uk,au,mf,zx,kf,ck,hw,eh,pc,uh,qx,vg,ui", "rx,rm,jt,gy,yh,vl,mz,xu,xl,bb,uq,do,zv,nv,cj", "fv,hw,hs,pn,qq,un,dj,mc,fj,ng,nh,xs,yy,ol,ts", "vy,ne,wx,yo,mp,gj,cl,sr,nx,cc,dp,lc,kj,ba,xw", "vy,ne,wx,yo,mp,gj,cl,sr,nx,cc,dp,lc,kj,ba,xw", "su,xh,av,ey,lr,nr,as,cu,rn,tw,df,zp,qc,pp,yj", "su,xh,av,ey,lr,nr,as,cu,rn,tw,df,zp,qc,pp,yj", "su,xh,av,ey,lr,nr,as,cu,rn,tw,df,zp,qc,pp,yj", "su,xh,av,ey,lr,nr,as,cu,rn,tw,df,zp,qc,pp,yj", "su,xh,av,ey,lr,nr,as,cu,rn,tw,df,zp,qc,pp,yj", "su,xh,av,ey,lr,nr,as,cu,rn,tw,df,zp,qc,pp,yj", "su,xh,av,ey,lr,nr,as,cu,rn,tw,df,zp,qc,pp,yj", "su,xh,av,ey,lr,nr,as,cu,rn,tw,df,zp,qc,pp,yj", "su,xh,av,ey,lr,nr,as,cu,rn,tw,df,zp,qc,pp,yj", "su,xh,av,ey,lr,nr,as,cu,rn,tw,df,zp,qc,pp,yj", "su,xh,av,ey,lr,nr,as,cu,rn,tw,df,zp,qc,pp,yj", "su,xh,av,ey,lr,nr,as,cu,rn,tw,df,zp,qc,pp,yj", "su,xh,av,ey,lr,nr,as,cu,rn,tw,df,zp,qc,pp,yj", "su,xh,av,ey,lr,nr,as,cu,rn,tw,df,zp,qc,pp,yj", "su,xh,av,ey,lr,nr,as,cu,rn,tw,df,zp,qc,pp,yj", "su,xh,av,ey,lr,nr,as,cu,rn,tw,df,zp,qc,pp,yj", "su,xh,av,ey,lr,nr,as,cu,rn,tw,df,zp,qc,pp,yj", "su,xh,av,ey,lr,nr,as,cu,rn,tw,df,zp,qc,pp,yj", "su,xh,av,ey,lr,nr,as,cu,rn,tw,df,zp,qc,pp,yj", "su,xh,av,ey,lr,nr,as,cu,rn,tw,df,zp,qc,pp,yj", "su,xh,av,ey,lr,nr,as,cu,rn,tw,df,zp,qc,pp,yj", "su,xh,av,ey,lr,nr,as,cu,rn,tw,df,zp,qc,pp,yj", "su,xh,av,ey,lr,nr,as,cu,rn,tw,df,zp,qc,pp,yj", "su,xh,av,ey,lr,nr,as,cu,rn,tw,df,zp,qc,pp,yj", "su,xh,av,ey,lr,nr,as,cu,rn,tw,df,zp,qc,pp,yj", "su,xh,av,ey,lr,nr,as,cu,rn,tw,df,zp,qc,pp,yj", "su,xh,av,ey,lr,nr,as,cu,rn,tw,df,zp,qc,pp,yj", "su,xh,av,ey,lr,nr,as,cu,rn,tw,df,zp,qc,pp,yj", "su,xh,av,ey,lr,nr,as,cu,rn,tw,df,zp,qc,pp,yj", "su,xh,av,ey,lr,nr,as,cu,rn,tw,df,zp,qc,pp,yj", "su,xh,av,ey,lr,nr,as,cu,rn,tw,df,zp,qc,pp,yj", "su,xh,av,ey,lr,nr,as,cu,rn,tw,df,zp,qc,pp,yj", "su,xh,av,ey,lr,nr,as,cu,rn,tw,df,zp,qc,pp,yj", "su,xh,av,ey,lr,nr,as,cu,rn,tw,df,zp,qc,pp,yj", "su,xh,av,ey,lr,nr,as,cu,rn,tw,df,zp,qc,pp,yj", "su,xh,av,ey,lr,nr,as,cu,rn,tw,df,zp,qc,pp,yj", "su,xh,av,ey,lr,nr,as,cu,rn,tw,df,zp,qc,pp,yj", "su,xh,av,ey,lr,nr,as,cu,rn,tw,df,zp,qc,pp,yj", "eq,jy,or,yr"};
    PositiveID* pObj = new PositiveID();
    clock_t start = clock();
    int result = pObj->maximumFacts(suspects);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> suspects = {"abcd", "bcd"};
    PositiveID* pObj = new PositiveID();
    clock_t start = clock();
    int result = pObj->maximumFacts(suspects);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> suspects = {"a,b,c", "a,e,f"};
    PositiveID* pObj = new PositiveID();
    clock_t start = clock();
    int result = pObj->maximumFacts(suspects);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> suspects = {"big,tall,loud,happy,male,scarred,tattooed,dirty", "short,male,beard,quiet,happy,tanned,handsome", "female,pretty,blond,quiet", "somnambulistic", "happy,tiny,stout,male,tanned,beard,blond"};
    PositiveID* pObj = new PositiveID();
    clock_t start = clock();
    int result = pObj->maximumFacts(suspects);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> suspects = {"a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t", "u,v,w,x,y,z", "aa,ab,ac,ad,ae,af,ag,ah,ai,aj,ak", "al,am,an,ao,ap,aq", "as,at,au,av", "aw,ax,ay,az,ba,bb,bc,bd,be,bf,bg,bh,bi,bj", "bk,bl,bm,bn,bo,bp,bq", "br,bs,bt", "bu,bv,bw,bx,by,bz", "ca,cb,cc,cd,ce,cf,cg", "ch,ci,cj,ck", "ch,ci,cj,ck"};
    PositiveID* pObj = new PositiveID();
    clock_t start = clock();
    int result = pObj->maximumFacts(suspects);
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
    vector<string> suspects = {"a,aa", "aaa,aaaa"};
    PositiveID* pObj = new PositiveID();
    clock_t start = clock();
    int result = pObj->maximumFacts(suspects);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> suspects = {"big,tall,loud,happy,male,scarred,tattooed,dirty", "blond,male,beard,quiet,happy,tanned,handsome", "female,pretty,blond,quiet", "somnambulistic", "happy,tiny,stout,male,tanned,beard,blond"};
    PositiveID* pObj = new PositiveID();
    clock_t start = clock();
    int result = pObj->maximumFacts(suspects);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> suspects = {"a,b", "a,c", "b,d"};
    PositiveID* pObj = new PositiveID();
    clock_t start = clock();
    int result = pObj->maximumFacts(suspects);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> suspects = {"a,b,c,d", "d,e", "c,e"};
    PositiveID* pObj = new PositiveID();
    clock_t start = clock();
    int result = pObj->maximumFacts(suspects);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> suspects = {"a,b,c", "a", "b", "c"};
    PositiveID* pObj = new PositiveID();
    clock_t start = clock();
    int result = pObj->maximumFacts(suspects);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> suspects = {"gigantic,fluorescent,loud,male"};
    PositiveID* pObj = new PositiveID();
    clock_t start = clock();
    int result = pObj->maximumFacts(suspects);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> suspects = {"unique", "found", "found"};
    PositiveID* pObj = new PositiveID();
    clock_t start = clock();
    int result = pObj->maximumFacts(suspects);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> suspects = {"a,b,c,d,e,f,g,i,j", "aa,ba,ca,da,ea,fa,ga,ia,ja", "ab,bb,cb,db,eb,fb,gb,ib,jb", "ac,bc,cc,dc,ec,fc,gc,hc,ic,jc", "ad,bd,cd,dd,ed,fd,gd,hd,id,jd", "ae,be,ce,de,ee,fe,ge,he,ie,je", "af,bf,cf,df,ef,ff,gf,hf,if,jf", "ag,bg,cg,dg,eg,fg,gg,hg,ig,jg", "ah,bh,ch,dh,eh,fh,gh,hh,ih,jh", "ai,bi,ci,di,ei,fi,gi,hi,ii,jh"};
    PositiveID* pObj = new PositiveID();
    clock_t start = clock();
    int result = pObj->maximumFacts(suspects);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> suspects = {"w,e,r,t,y,u,i,o,a,s,d,f,g,h,j,k,l,z,x,c,v,b,n,ma", "w,e,r,t,y,u,i,o,a,s,d,f,g,h,j,k,l,z,x,c,v,b,n,mb", "w,e,r,t,y,u,i,o,a,s,d,f,g,h,j,k,l,m,x,c,v,b,n,mc", "w,e,r,t,y,u,i,o,a,s,d,f,g,h,j,k,l,m,x,c,v,b,n,md"};
    PositiveID* pObj = new PositiveID();
    clock_t start = clock();
    int result = pObj->maximumFacts(suspects);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> suspects = {"a,b,c", "b,c,d", "c,d,e", "d"};
    PositiveID* pObj = new PositiveID();
    clock_t start = clock();
    int result = pObj->maximumFacts(suspects);
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
    vector<string> suspects = {"a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y"};
    PositiveID* pObj = new PositiveID();
    clock_t start = clock();
    int result = pObj->maximumFacts(suspects);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> suspects = {"a,b,c,d,e,f,g", "x,y,z", "x,y,z"};
    PositiveID* pObj = new PositiveID();
    clock_t start = clock();
    int result = pObj->maximumFacts(suspects);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> suspects = {"a", "aa", "bb", "b"};
    PositiveID* pObj = new PositiveID();
    clock_t start = clock();
    int result = pObj->maximumFacts(suspects);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> suspects = {"a", "a", "b", "b", "c", "c", "d", "d"};
    PositiveID* pObj = new PositiveID();
    clock_t start = clock();
    int result = pObj->maximumFacts(suspects);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> suspects = {"a,b,c,d,e,f,g,h,i,j,k,l,m", "b,c,d,e,ff,gg,h,u", "gg,cc", "k,a,b,c,j", "o,l,d,q", "a,b,c,f", "a,b,c,d,rrr,aaa,qqq,aa,aaaa,aaaaa"};
    PositiveID* pObj = new PositiveID();
    clock_t start = clock();
    int result = pObj->maximumFacts(suspects);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> suspects = {"a,b,c,d,e,f,g,h,i,j,k,l,m", "b,c,d,e,ff,gg,h,u", "gg,cc", "k,a,b,c,j", "o,l,d,q", "a,b,c,f"};
    PositiveID* pObj = new PositiveID();
    clock_t start = clock();
    int result = pObj->maximumFacts(suspects);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> suspects = {"a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y", "aa,bb,cc,dd,ee,ff,gg,hh,ii,jj,kk,ll,mm,nn,oo,pp", "qq,rr,ss,tt,uu,vv,ww,xx,yy,zz,ab,ac,ad,ae,af,ag"};
    PositiveID* pObj = new PositiveID();
    clock_t start = clock();
    int result = pObj->maximumFacts(suspects);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> suspects = {"blond,tall,skinny", "short,skinny,blond,tattooed", "scarred,bald"};
    PositiveID* pObj = new PositiveID();
    clock_t start = clock();
    int result = pObj->maximumFacts(suspects);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> suspects = {"a,s,d,f,g,h,j,k,l,q,w,e,r,t,y,u,i,o,p,z,x,c,v,b,n", "qw,we,er,rt,ty,yu,ui,io,op,as,sd,df,fg", "qq,ww,ee,rr,tt,yy,uu,ii,oo,pp,aa,ss,dd,ff", "zz,xx,cc,vv,bb,nn,mm,zx,xc,cv,vb,bn,nm", "aaa,sss,ddd,fff,ggg", "ddd,fff"};
    PositiveID* pObj = new PositiveID();
    clock_t start = clock();
    int result = pObj->maximumFacts(suspects);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> suspects = {"a,b,c", "a", "b"};
    PositiveID* pObj = new PositiveID();
    clock_t start = clock();
    int result = pObj->maximumFacts(suspects);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> suspects = {"a,b,c,d,e,f,g,h,i,j,k", "h,i,j,k", "a,h,i,j", "i,g,h,e,l", "q,e,r,w,y,i,s", "e,r,w,y"};
    PositiveID* pObj = new PositiveID();
    clock_t start = clock();
    int result = pObj->maximumFacts(suspects);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> suspects = {"bq,ah,am,aa,al,bl,bd,bf,ar,av,ac,bg,ab,ak,bn,ad", "bw,bn,bo,bv,ar,bk,bp,be,bg,ax,br,by", "bm,ac,as,ay,aq,be,bi,ae,bf,az,ak,aa,av", "ar,an,bk,ac,bf,bt,bs,ay,ba,bp,ao,af", "bb,ao,aj,av,bv,ab,ay,ap,ae,al,bp,bn", "bj,br,bi,by,am,ae,bw,an,ar,ap,ax,aj", "bo,av,ao,au,bw,bm,an,ab,bc,ak,af", "av,at,bd,an,by,bf,ax,bs,ak,af,bu,bx,br,bb,ag", "ao,ae,bl,ah,bk,aa,ag,bq,bc,bd,au,be,bw,ay", "bp,bs,am,aj,bf,bg,ab,ba,ao,bl", "al,bt,bk,bc,bw,ar,be,aj,ah,bi,ab,bf,ai,bd", "bx,br,ab,bd,bg,al,ag,bu,ar,bt,bh,as,ap,bo,bk", "af,bx,at,ag,bg,bp,ay,an,be,bc,ak,ap,bs,bk,bj", "ag,ae,aj,bq,bj,an,be,ax,ar,bz,ba,bu,bl,bc", "bb,bq,ak,am,az,ab,aw,bd,au,bf,ar,be,ad,ay,bj", "au,bm,ar,ac,az,aj,ap,bi,an,ae,bd,bs,br,ba", "am,at,bd,bq,ao,av,bp,au,ac,ba,bu,bm,be,bl,ag,an", "bm,bp,bw,aq,bg,bo,ba,aw,bd,ay", "by,bj,bb,ba,ad,ap,bx,bh,ao,bp,aw,ay", "br,az,bn,bu,bq,al,bz,bp,bi,ag,bl,ae,bd,bo", "bk,bu,av,aj,br,bm,az,bo,ak,bi,be,aa,ad,ag,bn", "au,bg,bp,an,bw,bm,aa,bx,bh,bq,ar,bu,bl", "bz,at,aj,bn,bx,ag,bs,az,an,ac,av,ba,bf,bm,bo,bh", "ak,bj,bw,ac,al,bf,bi,ap,ay,bc,bz,ba,bx,bg,ag", "bw,bb,bt,be,bc,bx,af,bf,ak,ac,at,bg,au,bm,br,ab", "bt,as,bf,bo,af,br,bj,bg,az,au,bz,aw,ai", "ar,bi,af,bd,au,be,ao,aq,bh,bn", "ba,am,ac,bf,ak,ai,bu,bi,aw,bb,be,au", "aa,bf,av,ad,be,bt,ai,bu,au,bj,bc,bz,bb", "aq,bp,az,ak,bo,bu,ad,bt,bx,bj,be,br", "ba,ac,ar,as,ai,bd,bt,bc,al,af,ae,bj,at,ah,aa,ab", "af,bn,bv,az,ad,ay,bu,bm,bh,ae,ak,at", "ao,ap,af,ah,bo,bq,bl,bw,ak,bd,ay,am,bc", "az,ag,av,ao,bk,bg,bc,am,bm,br,ah", "af,aq,aa,bq,ac,al,bn,ay,bw,ab,ba,bc", "ah,at,ay,bz,av,au,ap,ar,bm,bi,ag", "ay,bg,bv,bd,bp,aa,av,af,ar,bs,bk,bt,ad,ah,ai,ab", "bj,bu,bx,am,as,bn,ar,ae,ak,ag,bc,av,bh,bb,bt,aq", "bo,at,ap,an,bp,by,ag,bi,ao,aq,bw,aw,bz,ae,bs", "bn,bj,au,ba,by,an,ak,av,al,bs,ac,bw,ag,bm", "ag,ap,bf,ad,aj,aw,aq,bu,bi,av,bv,az,ay", "aj,af,al,bk,bd,ah,bt,ar,ay,bf,bn,bh,as,ac", "ad,be,am,bc,bb,br,bt,ay,aw,bg,aj,al", "bs,ae,ar,at,bj,aj,ba,ai,bw,by,bn,br,bo,aw", "af,ag,by,bh,ac,ay,bs,ae,az,at,ao,bz,bt", "bg,au,bn,ah,be,ag,bf,ak,bs,at,bj,ba,af", "ba,au,bd,bc,bj,ac,by,bf,bv,bi", "ay,ae,af,av,br,au,bq,ad,ak,ab", "bg,ap,bo,ay,bc,aq,bk,bm,au,aj", "ah,am,bg,bn,ap,ak,bu,bk,br,bf,ac,bv,ar,al,ba,bt"};
    PositiveID* pObj = new PositiveID();
    clock_t start = clock();
    int result = pObj->maximumFacts(suspects);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> suspects = {"a,b,c", "a,b,d", "d,c,e"};
    PositiveID* pObj = new PositiveID();
    clock_t start = clock();
    int result = pObj->maximumFacts(suspects);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> suspects = {"a,b", "aa,b"};
    PositiveID* pObj = new PositiveID();
    clock_t start = clock();
    int result = pObj->maximumFacts(suspects);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> suspects = {"big,tall,loud,happy,male,scarred,tattooed,dirty", "short,male,beard,quiet,happy,tanned,handsome", "female,pretty,blond,quiet", "somnambulistic", "happy,tiny,stout,male,tanned,beard,blond", "a,b,c,d,e,f,g,h,i,j,k,l,m,n", "a,b,c,d,e,f,g,h,i,j,k,l,n", "o,p,q,r,s,t,u,v,w,x,y"};
    PositiveID* pObj = new PositiveID();
    clock_t start = clock();
    int result = pObj->maximumFacts(suspects);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> suspects = {"a", "aa"};
    PositiveID* pObj = new PositiveID();
    clock_t start = clock();
    int result = pObj->maximumFacts(suspects);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> suspects = {"q,w,e,r,t,y,u,i,o,p,a,s,d,f,gh,j,kl,z,x,c,v,b,n,m", "w,e,r,t,y,u,i,o,p,a,s,d,f,g,h,j,kl,z,x,c,v,bn,m", "q", "w", "e", "r", "t", "y", "u", "i", "op", "a", "s", "d", "f", "g", "h", "j", "k", "l", "z", "x", "c", "v", "b", "n", "m"};
    PositiveID* pObj = new PositiveID();
    clock_t start = clock();
    int result = pObj->maximumFacts(suspects);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> suspects = {"a,b,c,d,e,f", "a,b,g,h,i,j", "a,b,k,l,m,n", "a,b,o,p,q,r", "s,t,u", "t,u,s"};
    PositiveID* pObj = new PositiveID();
    clock_t start = clock();
    int result = pObj->maximumFacts(suspects);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> suspects = {"bold,stylish", "bold,italic", "bold,font"};
    PositiveID* pObj = new PositiveID();
    clock_t start = clock();
    int result = pObj->maximumFacts(suspects);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> suspects = {"a,b,c,d,e,f,g,h,i,j,k,l,m,n", "o,p,q,r,s,t,u,v,w,x,y,z", "aa,bb,cc,dd,ee,ff,gg,hh,ii,jj,kk,ll,mm,nn", "oo,pp,qq,rr,ss,tt,uu,vv,ww,xx,yy,zz"};
    PositiveID* pObj = new PositiveID();
    clock_t start = clock();
    int result = pObj->maximumFacts(suspects);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> suspects = {"a,b", "a,b", "a,b", "a,b", "a,b", "a,b", "a,b", "a,b", "a,b", "a,b", "a,b", "a,b", "a,b", "a,b", "a,b", "a,b", "a,b", "a,b", "a,b", "a,b", "a,b", "a,b", "a,b", "a,b", "a,b", "a,b", "a,b", "a,b", "a,b", "a,b", "a,b", "a,b", "a,b", "a,b", "a,b", "a,b", "a,b", "a,b", "a,b", "a,b", "a,b", "a,b", "a,b", "g,d,e", "g,d,e"};
    PositiveID* pObj = new PositiveID();
    clock_t start = clock();
    int result = pObj->maximumFacts(suspects);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> suspects = {"big,tall,loud,happy,male,scarred,tattooed,dirty", "short,male,beard,quiet,happy,tanned,handsome", "female,pretty,blond,quiet", "somnambulistic", "happy,tiny,stout,male,tanned,beard,blond", "asdfaf,adsfadfefdf,eqer,qddf", "asdfafm,dfadf"};
    PositiveID* pObj = new PositiveID();
    clock_t start = clock();
    int result = pObj->maximumFacts(suspects);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> suspects = {"tall", "short", "tall", "short"};
    PositiveID* pObj = new PositiveID();
    clock_t start = clock();
    int result = pObj->maximumFacts(suspects);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> suspects = {"blond", "blondie"};
    PositiveID* pObj = new PositiveID();
    clock_t start = clock();
    int result = pObj->maximumFacts(suspects);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> suspects = {"aaa,bbb,ccc,ddd,eee", "bbb,ccc,eee", "eee,aaa", "zzz,aaa,bbb", "ccc,ddd", "bbb,ccc,eee,aaa,zzz,ttt"};
    PositiveID* pObj = new PositiveID();
    clock_t start = clock();
    int result = pObj->maximumFacts(suspects);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8472826&rd=10006&pm=6803
********************************************************************************
#include<iostream>
#include<cstdio>
#include<cctype>
#include<cmath>
#include<cstdlib>
#include<algorithm>
#include<vector>
#include<string>
#include<list>
#include<deque>
#include<map>
#include<set>
#include<queue>
#include<stack>
#include<utility>
#include<sstream>
#include<cstring>
using namespace std;
 
#define FOR(I,A,B) for(int I=(A);I<=(B);I++)
#define REP(I,N) for(int I=0;I<(N);I++)
#define ALL(X) (X).begin(),(X).end()
#define PB push_back
#define MP make_pair
#define FI first
#define SE second
typedef vector<int> VI;
typedef pair<int,int> PII;
typedef long long ll;
typedef vector<string> VS;
 
 
VS parse(string s)
{
  string a;
  VS wyn;
  REP(i,s.size())
    if (s[i]!=',') a+=s[i];
    else if (!a.empty()) { wyn.PB(a); a=""; }
  if (!a.empty()) wyn.PB(a);
  return wyn;
}
 
class PositiveID
{
  public:
  int maximumFacts(vector <string> t)
  {
    int wyn=0;
    REP(i,t.size()) REP(j,t.size()) if (i!=j)
    {
      VS t1(parse(t[i]));
      VS t2(parse(t[j]));
      sort(ALL(t1)); sort(ALL(t2));
      int ii=0,jj=0,akt=0;
      while (ii<t1.size() && jj<t2.size())
      {
        if (t1[ii]==t2[jj]) { ii++; jj++; akt++; }
        else if (t1[ii]<t2[jj]) ii++; else jj++;
      }
      wyn=max(wyn,akt);
    }
    return wyn;
  }
  
 
};
 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/