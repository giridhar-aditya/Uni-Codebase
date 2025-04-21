#include<iostream>
class Time{
    public:
    int h,m,s;
    Time(){h=m=s=0;}
    Time(int ha,int ma,int sa){h=ha; m=ma; s=sa;}
    void display(){std::cout<<"Time = "<<h<<":"<<m<<":"<<s;}
    void add(Time a,Time b){
        h=a.h+b.h; m=a.m+b.m; s=a.s+b.s;
        while(s>=60 or m>=60){
        if(s>=60){s-=60; m++;}
        if(m>=60){m-=60; h++;}}
    }
};
int main(){
    int h,m,s;
    std::cout<<"Enter Time 1 :"; std::cin>>h>>m>>s;
    Time a(h,m,s);
    std::cout<<"Enter Time 2 :"; std::cin>>h>>m>>s;
    Time b(h,m,s);
    Time c; c.add(a,b); c.display();
}