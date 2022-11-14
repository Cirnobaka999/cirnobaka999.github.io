#include<iostream>
#include <stdio.h>
#include <string>
using namespace std;
int main()
{
    string zhi,title,main,reason;     //年,月,之,标题,主题,原因 (输入项) 
    int year,mon,model;    //年,月,模板(输入项) 
    int season; //季,月 (计算) 
    string yue;  //月 
    int esc;  //莉格露·奈特巴格 
    printf("输入年:");
	cin>>year;	
	printf("输入月:");
	cin>>mon;
	printf("输入期数:");
	cin>>zhi;
	printf("输入标题:");
	cin>>title;
	cout<<"输入主题:";
	cin>>main;
	printf("输入原因:");
	cin>>reason;
	printf("选择模板  1=事件 2=采访阿求 3=周刊志:");   //模板 
	cin>>model; 
	season=year-1885;
	if (mon==1) yue="睦月";
	if (mon==2) yue="如月";
	if (mon==3) yue="弥生";
	if (mon==4) yue="卯月";
	if (mon==5) yue="皋月";
	if (mon==6) yue="水无月";
	if (mon==7) yue="文月";
	if (mon==8) yue="叶月";
	if (mon==9) yue="长月";
	if (mon==10) yue="神无月";
	if (mon==11) yue="霜月";
	if (mon==12) yue="师走";
	
    cout<<"================================="<<endl;
    cout<<"文文。新闻"<<"   第"<<season<<"季 / "<<yue<<"之"<<zhi<<endl;
    cout<<"================================="<<endl;
    cout<<title<<endl;
    cout<<"================================="<<endl;
    
    if (model==1){
    cout<<"最近发生一起重大的事件"<<endl;
    cout<<"相信大家也已经知道了,这件事就是"<<main<<endl;
    cout<<"发生这种事件的原因其实是"<<reason<<endl; 
    }
	
	if (model==2){
	cout<<"- 今天，我们有幸邀请到了畅销书作家稗田阿求老师接受采访，请问阿求老师在采访正式开始前有什么想说的呢"<<endl;
    cout<<"-"<<main<<endl;
    cout<<"-那听起来还挺吓人的,究竟是什么原因呢"<<endl;
    cout<<"-原因其实是"<<reason<<endl;
	}
	
	if (model==3){
	cout<<"以前,我做过一期周刊志,而这张照片正是让我射命丸文再次写杂志的一个机会."<<endl;
	cout<<main<<",而我拍到"<<reason<<",而这张照片正是"<<reason<<"的铁证."<<endl; 
	cout<<main<<",唯一让人信服的理由就是"<<reason<<"吧?据说"<<main<<"和神社也有千丝万缕的联系."<<endl;
	cout<<"这正是让真相大白于天下的正义周刊志<文文春新报>追求的内容.敬请期待!" <<endl;
	}
	
	cin>>esc;
    return 0;
    
} 
