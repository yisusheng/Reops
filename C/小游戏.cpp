#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <windows.h>
#include <ctime>
#include <fstream>
#include <conio.h>
struct jijia
{
	char name[100];
	char jinenming[100];
	char zhongjijinenming[100];
	int HP;
	int daji;
	int sheji;
	int fangyu;
	int jinen;
	int zhongjijinen;
}jj1={"原型机","火箭筒","巨炮连射",30000,10000,10000,10000,11000,13000},
jj2={"草莓甜心","重针","大型针筒",36000,11000,12000,12000,13000,15000},
jj3={"阿基利斯","突袭","光能匕首",30000,13000,14000,11000,15000,16000},
jj4={"高速行星","强弩之末","陨星炮",30000,14000,15000,10000,16000,17000},
jj55={"怒海公爵","怒潮","随波落斩",34000,13000,17000,12000,18000,19000},
jj66={"大白鲨","撕裂","湮灭咬合",34000,17000,12000,13000,18000,19000},
jj77={"魔蜂连音","火箭筒","巨炮连射",38000,15000,17000,14000,18000,19000},
jj888={"奇美拉","兽骨炮","毁天灭地碎岩劈！！！",35000,18000,18000,14000,19000,21000},
jj999={"武装剑灵","奇门遁甲","万剑归宗！！！",35000,19000,16000,15000,20000,21000},
jj101010={"创世神","灰飞烟灭","---寂静---",40000,20000,20000,20000,22000,25000},
jj00={"\0","\0","\0",0,0,0,0,0,0}, 
jj0={"\0","\0","\0",0,0,0,0,0,0};
/*输出原型机的数据： 
jj0=jj1;
printf("%s,%s,%s,%d,%d,%d,%d,%d,%d,",jj0.name,
jj0.jinenming,
jj0.zhongjijinenming,
jj0.HP,
jj0.daji,
jj0.sheji,
jj0.fangyu,
jj0.jinen,
jj0.zhongjijinen);*/

struct kapai
{
	char name[100];
	int jiaHP;
	int jiadaji;
	int jiasheji;
	int jiafangyu;
} 
kp1={"进化卡:HP++",5000,0,0,0},
kp2={"进化卡:打击++",0,5000,0,0},
kp3={"进化卡:射击++",0,0,5000,0},
kp4={"进化卡:防御++",5000,0,0,0},
kp5={"进化卡:全面++",2000,1000,1000,1000},
kp0={"\0",0,0,0,0},
kp00={"\0",0,0,0,0};

struct chaoneng
{
	char name[100];
	int jilv;
}cn1={"超能卡:麻痹电网",3},
cn2={"超能卡:爆炸燃烧",5},
cn3={"超能卡:全能恢复",2},
cn4={"超能卡:破釜沉舟",1},
cn5={"超能卡:腐能虫雾",6},
cn0={"\0",0},
cn00={"\0",0};

struct dijijia1
{
	char name[100];
	char jinenming[100];
	char zhongjijinenming[100];
	int HP;
	int daji;
	int sheji;
	int fangyu;
	int jinen;
	int zhongjijinen;
}dijj1={"原型机","火箭筒","巨炮连射",30000,10000,10000,10000,11000,13000},
dijj2={"草莓甜心","重针","大型针筒",36000,11000,12000,12000,13000,15000},
dijj3={"阿基利斯","突袭","光能匕首",30000,13000,14000,11000,15000,16000},
dijj4={"高速行星","强弩之末","陨星炮",30000,14000,15000,10000,16000,17000},
dijj0={"\0","\0","\0",0,0,0,0,0,0};

struct dijijia2
{
	char name[100];
	char jinenming[100];
	char zhongjijinenming[100];
	int HP;
	int daji;
	int sheji;
	int fangyu;
	int jinen;
	int zhongjijinen;
}dijj55={"怒海公爵","怒潮","随波落斩",34000,13000,17000,12000,18000,19000},
dijj66={"大白鲨","撕裂","湮灭咬合",34000,17000,12000,13000,18000,19000},
dijj77={"魔蜂连音","火箭筒","巨炮连射",38000,15000,17000,14000,18000,19000},
dijj00={"\0","\0","\0",0,0,0,0,0,0};

struct dijijia3
{
	char name[100];
	char jinenming[100];
	char zhongjijinenming[100];
	int HP;
	int daji;
	int sheji;
	int fangyu;
	int jinen;
	int zhongjijinen;
}dijj888={"奇美拉","兽骨炮","毁天灭地碎岩劈！！！",35000,18000,18000,14000,19000,21000},
dijj999={"武装剑灵","奇门遁甲","万剑归宗！！！",35000,19000,16000,15000,20000,21000},
dijj101010={"创世神","灰飞烟灭","---寂静---",40000,20000,20000,20000,22000,25000},
dijj000={"\0","\0","\0",0,0,0,0,0,0};

using namespace std; 
void manjiang(char *p);
void manjiang2(char *p,int t);
void cundang(int sjj1,int sjj2,int sjj3,int sjj4,int sjj55,int sjj66,int sjj77,int sjj888,int sjj999,int sjj101010,int skp1,int skp2,int skp3,int skp4,int skp5,int scn1,int scn2,int scn3,int scn4,int scn5)
{
	freopen("储存.txt", "w",stdout);
	cout<<sjj1<<" "<<sjj2<<" "<<sjj3<<" "<<sjj4<<" "<<sjj55<<" "<<sjj66<<" "<<sjj77<<" "<<sjj888<<" "<<sjj999<<" "<<sjj101010<<" "<<skp1<<" "<<skp2<<" "<<skp3<<" "<<skp4<<" "<<skp5<<" "<<scn1<<" "<<scn2<<" "<<scn3<<" "<<scn4<<" "<<scn5<<" ";
}
void cundang2(int bisaics)
{
	freopen("储存2.txt", "w",stdout);
	cout<<bisaics;
}




int main()
{
	system("color F0");
	srand(time(NULL));
	SetConsoleTitle("机甲英雄");
	int x;
	int sjj1=1,sjj2=0,sjj3=0,sjj4=0,sjj55=0,sjj66=0,sjj77=0,sjj888=0,sjj999=0,sjj101010=0;
	int skp1=0,skp2=0,skp3=0,skp4=0,skp5=0;
	int scn1=0,scn2=0,scn3=0,scn4=0,scn5=0;
	int s1jj1,s1jj2,s1jj3,s1jj4,s1jj55,s1jj66,s1jj77,s1jj888,s1jj999,s1jj101010;
	int s1kp1,s1kp2,s1kp3,s1kp4,s1kp5;
	int s1cn1,s1cn2,s1cn3,s1cn4,s1cn5;
	int bisaics=0;
	int bisaics1;
	while(1)
	{
		freopen("储存.txt", "r",stdin);
		cin>>s1jj1>>s1jj2>>s1jj3>>s1jj4>>s1jj55>>s1jj66>>s1jj77>>s1jj888>>s1jj999>>s1jj101010>>s1kp1>>s1kp2>>s1kp3>>s1kp4>>s1kp5>>s1cn1>>s1cn2>>s1cn3>>s1cn4>>s1cn5;
		//cout<<s1jj1<<" "<<s1jj2<<" "<<s1jj3<<" "<<s1jj4<<" "<<s1jj55<<" "<<s1jj66<<" "<<s1jj77<<" "<<s1jj888<<" "<<s1jj999<<" "<<s1jj101010<<" "<<s1kp1<<" "<<s1kp2<<" "<<s1kp3<<" "<<s1kp4<<" "<<s1kp5<<" "<<s1cn1<<" "<<s1cn2<<" "<<s1cn3<<" "<<s1cn4<<" "<<s1cn5<<" ";
		sjj1=s1jj1,sjj2=s1jj2,sjj3=s1jj3,sjj4=s1jj4,sjj55=s1jj55,sjj66=s1jj66,sjj77=s1jj77,sjj888=s1jj888,sjj999=s1jj999,sjj101010=s1jj101010,skp1=s1kp1,skp2=s1kp2,skp3=s1kp3,skp4=s1kp4,skp5=s1kp5,scn1=s1cn1,scn2=s1cn2,scn3=s1cn3,scn4=s1cn4,scn5=s1cn5;
		//freopen("CON", "r", stdin);
		break;
	}
	while(1)
	{
		freopen("储存2.txt", "r",stdin);
		cin>>bisaics1;
		bisaics=bisaics1;
		break;
	}
	freopen("CON", "r", stdin); 
	//printf();
	manjiang("游戏名：机甲英雄        编者：老鶀\n");
	manjiang("是否跳过剧情（Y是）\n");
	char pd;
	int pdtc=0;
	pd=getch();
	if(pd=='y'||pd=='Y')
	{
		manjiang("开始游戏\n"); 
	}
	else
	{
		manjiang("公元纪年6027，人类发明出了武装感应机器人\n"); 
		manjiang("你，训练师\n");
		manjiang("最终的目标就是：\n");
		manjiang("拿到机器人锦标赛的冠军\n");
		manjiang("比赛\n");
		manjiang2("一触即发\n",500);
		manjiang("开始游戏\n");
	}
	int pd2,pd4,pd5,pdbs=1001;
	char pd3;
	
	//VS
	int topHP;int dftopHP;int nl;int dfnl;
	int pdgj;//打：0，射：1，技能：2，终极技：3
	int pdfy;//防打：0，防射：1
	int dfpdgj;//打：0，射：1，技能：2，终极技：3
	int dfpdfy;//防打：0，防射：1
	int pdtj;
	
	int pdcn=999;
	
	
	
	
	
	
	
	string shupai;int sppd=0;//判定 
	bisaics=bisaics;
	cin.sync();   //清除缓冲区
	cin.clear();  //清除错误状态
	while(1)
	{
		puts("===============================================================================");
		printf("要做什么?\n\n\n 1:比赛   2:仓库   3:免费领卡   4:说明书   0:退出游戏\n\n\n");
		puts("===============================================================================");
		cin>>pd2;
		
		
		
		
		//比赛 
		if(pd2==1)
		{
			while(1)
			{
				if(pdbs==999||pdbs==1000)
					break;
				while(1)
				{
					system("cls");
					cout<<"打出你想出战的机甲:\n";
					cin.sync();   //清除缓冲区
					cin.clear();  //清除错误状态
					cin>>shupai;
					if(shupai=="原型机")
					{
						if(sjj1>=1)
						{
							manjiang("装备成功");
							jj0=jj1;
							sppd=1;
							break;
						}
						else
						{
							manjiang("您没有此机甲");
							sppd=2; 
						}            
					} 
					if(shupai=="草莓甜心")
					{
						if(sjj2>=1)
						{
							manjiang("装备成功");
							jj0=jj2;
							sppd=1;
							break;
						}
						else
						{
							manjiang("您没有此机甲");
							sppd=2; 
						}            
					} 
					if(shupai=="阿基利斯")
					{
						if(sjj3>=1)
						{
							manjiang("装备成功");
							jj0=jj3;
							sppd=1;
							break;
						}
						else
						{
							manjiang("您没有此机甲");
							sppd=2; 
						}            
					}
					if(shupai=="高速行星")
					{
						if(sjj4>=1)
						{
							manjiang("装备成功");
							jj0=jj4;
							sppd=1;
							break;
						}
						else
						{
							manjiang("您没有此机甲");
							sppd=2; 
						}            
					}  
					if(shupai=="怒海公爵")
					{
						if(sjj55>=1)
						{
							manjiang("装备成功");
							jj0=jj55;
							sppd=1;
							break;
						}
						else
						{
							manjiang("您没有此机甲");
							sppd=2; 
						}            
					} 
					if(shupai=="大白鲨")
					{
						if(sjj66>=1)
						{
							manjiang("装备成功");
							jj0=jj66;
							sppd=1;
							break;
						}
						else
						{
							manjiang("您没有此机甲");
							sppd=2; 
						}            
					}   
					if(shupai=="魔蜂连音")
					{
						if(sjj77>=1)
						{
							manjiang("装备成功");
							jj0=jj77;
							sppd=1;
							break;
						}
						else
						{
							manjiang("您没有此机甲");
							sppd=2; 
						}            
					}  
					if(shupai=="奇美拉")
					{
						if(sjj888>=1)
						{
							manjiang("装备成功");
							jj0=jj888;
							sppd=1;
							break;
						}
						else
						{
							manjiang("您没有此机甲");
							sppd=2; 
						}            
					}  
					if(shupai=="武装剑灵")
					{
						if(sjj999>=1)
						{
							manjiang("装备成功");
							jj0=jj999;
							sppd=1;
							break;
						}
						else
						{
							manjiang("您没有此机甲");
							sppd=2; 
						}            
					}  
					if(shupai=="创世神")
					{
						if(sjj101010>=1)
						{
							manjiang("装备成功");
							jj0=jj101010;
							sppd=1;
							break;
						}
						else
						{
							manjiang("您没有此机甲");
							sppd=2; 
						}            
					}  
					if(sppd==0) 
					{
						manjiang("未找到相关机甲，建议您去“仓库”看看\n");
						sppd=0;
						break; 
					}
					if(sppd==1)
						break;
					sppd=0;
				}
				if(sppd==0)
					break;
				sppd=0;
				while(1)
				{
					system("cls");
					cout<<"打出你想使用的进化卡(前面的【进化卡:】不用打)(可以填“无”):\n";
					cin.sync();   //清除缓冲区
					cin.clear();  //清除错误状态
					cin>>shupai;
					if(shupai=="HP++")
					{
						if(skp1>=1)
						{
							manjiang("装备成功");
							kp0=kp1;
							jj0.HP=jj0.HP+kp0.jiaHP;
							jj0.daji=jj0.daji+kp0.jiadaji;
							jj0.sheji=jj0.sheji+kp0.jiasheji;
							jj0.fangyu=jj0.fangyu+kp0.jiafangyu;
							sppd=1;
							break;
						}
						else
						{
							manjiang("您没有此卡片");
							sppd=2; 
						}            
					} 
					if(shupai=="打击++")
					{
						if(skp2>=1)
						{
							manjiang("装备成功");
							kp0=kp2;
							jj0.HP=jj0.HP+kp0.jiaHP;
							jj0.daji=jj0.daji+kp0.jiadaji;
							jj0.sheji=jj0.sheji+kp0.jiasheji;
							jj0.fangyu=jj0.fangyu+kp0.jiafangyu;
							sppd=1;
							break;
						}
						else
						{
							manjiang("您没有此卡片");
							sppd=2; 
						}            
					} 
					if(shupai=="射击++")
					{
						if(skp3>=1)
						{
							manjiang("装备成功");
							kp0=kp3;
							jj0.HP=jj0.HP+kp0.jiaHP;
							jj0.daji=jj0.daji+kp0.jiadaji;
							jj0.sheji=jj0.sheji+kp0.jiasheji;
							jj0.fangyu=jj0.fangyu+kp0.jiafangyu;
							sppd=1;
							break;
						}
						else
						{
							manjiang("您没有此卡片");
							sppd=2; 
						}            
					} 
					if(shupai=="防御++")
					{
						if(skp4>=1)
						{
							manjiang("装备成功");
							kp0=kp4;
							jj0.HP=jj0.HP+kp0.jiaHP;
							jj0.daji=jj0.daji+kp0.jiadaji;
							jj0.sheji=jj0.sheji+kp0.jiasheji;
							jj0.fangyu=jj0.fangyu+kp0.jiafangyu;
							sppd=1;
							break;
						}
						else
						{
							manjiang("您没有此卡片");
							sppd=2; 
						}            
					} 
					if(shupai=="全面++")
					{
						if(skp5>=1)
						{
							manjiang("装备成功");
							kp0=kp5;
							jj0.HP=jj0.HP+kp0.jiaHP;
							jj0.daji=jj0.daji+kp0.jiadaji;
							jj0.sheji=jj0.sheji+kp0.jiasheji;
							jj0.fangyu=jj0.fangyu+kp0.jiafangyu;
							sppd=1;
							break;
						}
						else
						{
							manjiang("您没有此卡片");
							sppd=2; 
						}            
					} 
					if(shupai=="无")
					{ 
						manjiang("装备成功");
						kp0=kp00; 
						sppd=1;
						break;
					}
					if(sppd==0) 
					{
						manjiang("未找到相关卡片，建议您去“仓库”看看\n");
						sppd=0;
						break; 
					}
					if(sppd==1)
						break;
					sppd=0;
				}
				if(sppd==0)
					break;
				sppd=0;
				while(1)
				{
					system("cls");
					cout<<"打出你想使用的超能卡(前面的【超能卡:】不用打)(可以填“无”):\n";
					cin.sync();   //清除缓冲区
					cin.clear();  //清除错误状态
					cin>>shupai;
					if(shupai=="麻痹电网")
					{
						if(scn1>=1)
						{
							manjiang("装备成功");
							cn0=cn1;
							sppd=1;
							pdcn=1;
							break;
						}
						else
						{
							manjiang("您没有此卡片");
							sppd=2; 
						}            
					}  
					if(shupai=="爆炸燃烧")
					{
						if(scn2>=1)
						{
							manjiang("装备成功");
							cn0=cn2;
							sppd=1;
							pdcn=2;
							break;
						}
						else
						{
							manjiang("您没有此卡片");
							sppd=2; 
						}            
					} 
					if(shupai=="全能恢复")
					{
						if(scn3>=1)
						{
							manjiang("装备成功");
							cn0=cn3;
							sppd=1;
							pdcn=3;
							break;
						}
						else
						{
							manjiang("您没有此卡片");
							sppd=2; 
						}            
					} 
					if(shupai=="破釜沉舟")
					{
						if(scn4>=1)
						{
							manjiang("装备成功");
							cn0=cn4;
							sppd=1;
							pdcn=4;
							break;
						}
						else
						{
							manjiang("您没有此卡片");
							sppd=2; 
						}            
					} 
					if(shupai=="腐能虫雾")
					{
						if(scn5>=1)
						{
							manjiang("装备成功");
							cn0=cn5;
							sppd=1;
							pdcn=5;
							break;
						}
						else
						{
							manjiang("您没有此卡片");
							sppd=2; 
						}            
					} 
					if(shupai=="无")
					{ 
						manjiang("装备成功");
						cn0=cn00; 
						sppd=1;
						break;
					}
					if(sppd==0) 
					{
						manjiang("未找到相关卡片，建议您去“仓库”看看\n");
						sppd=0;
						break; 
					}
					if(sppd==1)
						break;
					sppd=0;
				}  
				
				
				//比赛
				//第一关 
				
				
				//打：0，射：1，技能：2，终极技：3
				//防打：0，防射：1
				//打：0，射：1，技能：2，终极技：3
				//防打：0，防射：1
				
				topHP=jj0.HP;
				nl=0;dfnl=0;
				while(1)
				{
					pdbs=1001; 
					system("cls");
					manjiang("比赛开始！\n\n"); 
					manjiang("第一关\n\n");
					x=rand()%4;
					if(x==0)
					{
						dijj0=dijj1;
					}
					if(x==1)
					{
						dijj0=dijj2;
					}
					if(x==2)
					{
						dijj0=dijj3;
					}
					if(x==3)
					{
						dijj0=dijj4;
					}
					dftopHP=dijj0.HP;
					manjiang("你遇到了");
					printf("%s\n",dijj0.name);
					while(1)
					{
						while(1)
						{
							puts("===============================================================================");
							printf("你的状态:\n");
							printf("血量:%d/%d\n",jj0.HP,topHP);
							cout<<"能量:"<<nl<<"/"<<"100\n";
							printf("防御:%d\n",jj0.fangyu);
							printf("打击攻击:%d     ",jj0.daji);printf("射击攻击:%d\n",jj0.sheji);
							puts("===============================================================================");
							printf("要用那种攻击?\n\n\n 1:打击   2:射击   3:技能   4:终极技   0:退出比赛\n\n\n");
							puts("===============================================================================");
							cin>>pdbs;
							if(pdbs==0) 
							{
								pdbs=999;
								break;
							}
							if(pdbs==1) 
							{
								pdgj=0;
								pdtj=1;
							}
							if(pdbs==2) 
							{
								pdgj=1;
								pdtj=1;
							}
							if(pdbs==3) 
							{
								if(nl>=80)
								{
									pdgj=2;
									printf("\n%s",jj0.name);
									manjiang("使用了技能:");
									printf("%s\n\n",jj0.jinenming);
									nl=nl-80;
									pdtj=1;
								}
								else
								{
									manjiang("您没有足够多的能量\n");
									pdtj=0;
								}
							}
							if(pdbs==4) 
							{
								if(nl>=100)
								{
									pdgj=3;
									printf("\n%s",jj0.name);
									manjiang("使用了终极技:");
									printf("%s\n\n",jj0.zhongjijinenming);
									nl=nl-100;
									pdtj=1;
								}
								else
								{
									manjiang("您没有足够多的能量\n");
									pdtj=0;
								}
							}
							if(pdbs!=0&&pdbs!=1&&pdbs!=2&&pdbs!=3&&pdbs!=4)
							{
								manjiang("输入错误，请重输\n");
								pdtj=0;
							}
							if(pdtj==1)
							{
								break;
							}
						}
						
						if(pdcn==5)
						{
							x=rand()%6;
							if(x==2)
							{
								manjiang2("成功触发“腐能虫雾”\n",50);
								jj0.HP=jj0.HP+1500;
								dijj0.HP=dijj0.HP-1500;
							}
						}
						
						
						if(pdbs==999)
							break;
						
						pdtj=100;
						
						x=rand()%5;
						if(pdcn==2)
						{
							if(x==1)
							{
								manjiang2("成功触发“爆炸燃烧”\n",50);
								jj0.daji=jj0.daji+1000; 
								jj0.sheji=jj0.sheji+1000; 
							}
						}
						while(1)//我方攻击 
						{
							x=rand()%2;
							if(x==0)
								dfpdfy=0;//防打
							if(x==1)
								dfpdfy=1;
							if(pdbs==3)
							{
								if(dijj0.fangyu/2<jj0.jinen)
									dijj0.HP=dijj0.HP-(jj0.jinen-(dijj0.fangyu/2)) ;
								break;
							}
							if(pdbs==4)
							{
								if(dijj0.fangyu/2<jj0.zhongjijinen)
									dijj0.HP=dijj0.HP-(jj0.zhongjijinen-(dijj0.fangyu/2)) ;
								break;
							}
							if(pdgj==0)
							{
								if(dfpdfy==0)
								{
									manjiang("敌方使用了防打，我方打击失败\n");
									if(dijj0.fangyu<jj0.daji)
										dijj0.HP=dijj0.HP-(jj0.daji-dijj0.fangyu) ;
									nl=nl+10;
								}
								if(dfpdfy==1)
								{
									manjiang("敌方使用了防射，我方打击成功\n");
									if(pdcn==1)
									{
										x=rand()%3;
										if(x==1)
										{
											manjiang2("成功触发“麻痹电网”\n",50);
											jj0.fangyu=jj0.fangyu+500;
										}
									}
									dijj0.HP=dijj0.HP-jj0.daji;
									nl=nl+20;
								}
							}
							if(pdgj==1)
							{
								if(dfpdfy==0)
								{
									manjiang("敌方使用了防打，我方射击成功\n");
									if(pdcn==1)
									{
										x=rand()%3;
										if(x==1)
										{
											manjiang2("成功触发“麻痹电网”\n",50);
											jj0.fangyu=jj0.fangyu+500;
										}
									}
									dijj0.HP=dijj0.HP-jj0.sheji;
									nl=nl+20;
								}
								if(dfpdfy==1)
								{
									manjiang("敌方使用了防射，我方射击失败\n");
									if(dijj0.fangyu<jj0.sheji)
										dijj0.HP=dijj0.HP-(jj0.sheji-dijj0.fangyu) ;
									nl=nl+10;
								}
							}
							break;
						}
						if(dijj0.HP<0||dijj0.HP==0)
						{
							manjiang2("胜利\n",500);
							manjiang("比赛次数加1\n"); 
							bisaics=bisaics+1;
							pdbs=9999;
							break;
						}
						
						puts("===============================================================================");
						printf("敌方的状态:\n");
						printf("血量:%d/%d\n",dijj0.HP,dftopHP);
						cout<<"能量:"<<dfnl<<"/"<<"100\n";
						printf("防御:%d\n",dijj0.fangyu);
						printf("打击攻击:%d     ",dijj0.daji);printf("射击攻击:%d\n",dijj0.sheji);
						puts("===============================================================================");
						//  printf("要用那种攻击?\n\n\n 1:打击   2:射击   3:技能   4:终极技   0:退出比赛\n\n\n");
						//  puts("===============================================================================");        
						
						
						
						
						while(1)
						{
							puts("===============================================================================");
							printf("你的状态:\n");
							printf("血量:%d/%d\n",jj0.HP,topHP);
							cout<<"能量:"<<nl<<"/"<<"100\n";
							printf("防御:%d\n",jj0.fangyu);
							printf("打击攻击:%d     ",jj0.daji);printf("射击攻击:%d\n",jj0.sheji);
							puts("===============================================================================");
							printf("要用那种防御?\n\n\n 1:防打   2:防射   0:退出比赛\n\n\n");
							puts("===============================================================================");
							cin>>pdbs;
							if(pdbs==0) 
							{
								pdbs=999;
								break;
							}
							if(pdbs==1) 
							{
								pdfy=0;
								pdtj=1;
							}
							if(pdbs==2) 
							{
								pdfy=1;
								pdtj=1;
							}
							if(pdbs!=0&&pdbs!=1&&pdbs!=2&&pdbs!=3&&pdbs!=4)
							{
								manjiang("输入错误，请重输\n");
								pdtj=0;
							}
							if(pdtj==1)
							{
								break;
							}
						}
						if(pdbs==999)
							break;
						
						
						pdbs=222;
						while(1)
						{
							if(dfnl>=80&&dfnl<100)
								pdbs==rand()%3;
							if(pdbs==1) 
							{
								if(nl>=80)
								{
									pdgj=2;
									printf("\n%s",dijj0.name);
									manjiang("使用了技能:");
									printf("%s\n\n",dijj0.jinenming);
									dfnl=dfnl-80; 
									pdtj=1;
									pdbs=3;
									break;
								}
							}
							if(pdbs==0||pdbs==2)    
							{
								if(nl>=100)
								{
									pdgj=3;
									printf("\n%s",dijj0.name);
									manjiang("使用了终极技:");
									printf("%s\n\n",dijj0.zhongjijinenming);
									dfnl=dfnl-100;
									pdtj=1;
									pdbs=4;
									break;
								}
							}
							if(dfnl>=100)
							{
								pdgj=3;
								printf("\n%s",dijj0.name);
								manjiang("使用了终极技:");
								printf("%s\n\n",dijj0.zhongjijinenming);
								dfnl-100;
								pdtj=1;
								pdbs=4;
								break;
							}
							/*pdbs==rand()%4;
							if(pdbs==0) 
							{
							pdgj=0;
							pdtj=1;
							}
							if(pdbs==1) 
							{
							pdgj=0;
							pdtj=1;
							}*/
							break;
						}
						
						
						while(1)//敌方攻击 
						{
							x=rand()%2;
							if(x==0)
								dfpdgj=0;//打
							if(x==1)
								dfpdgj=1;
							if(pdbs==3)
							{
								if(jj0.fangyu/2<dijj0.jinen)
									jj0.HP=jj0.HP-(dijj0.jinen-(jj0.fangyu/2)) ;
								break;
							}
							if(pdbs==4)
							{
								if(jj0.fangyu/2<dijj0.zhongjijinen)
									jj0.HP=jj0.HP-(dijj0.zhongjijinen-(jj0.fangyu/2)) ;
								break;
							}
							
							
							if(dfpdgj==0)
							{
								if(pdfy==0)
								{
									manjiang("我方使用了防打，敌方打击失败\n");
									if(jj0.fangyu<dijj0.daji)
										jj0.HP=jj0.HP-(dijj0.daji-jj0.fangyu) ;
									dfnl=dfnl+10;
								}
								if(pdfy==1)
								{
									manjiang("我方使用了防射，敌方打击成功\n");
									jj0.HP=jj0.HP-dijj0.daji;
									dfnl=dfnl+20;
								}
							}
							if(dfpdgj==1)
							{
								if(pdfy==0)
								{
									manjiang("我方使用了防打，敌方射击成功\n");
									jj0.HP=jj0.HP-dijj0.sheji;
									dfnl=dfnl+20;
								}
								if(pdfy==1)
								{
									manjiang("我方使用了防射，敌方射击失败\n");
									if(jj0.fangyu<dijj0.sheji)
										jj0.HP=jj0.HP-(dijj0.sheji-jj0.fangyu) ;
									dfnl=dfnl+10;
								}
							}
							break;
						}
						
						
						if(jj0.HP<0||jj0.HP==0)
						{
							manjiang2("失败\n",500);
							pdbs=999;
							break;
						}
						
						
						if(pdcn==3)
						{
							x=rand()%2;
							if(x==1&&jj0.HP<dijj00.HP)
							{
								manjiang2("成功触发“全能恢复”\n",50);
								nl=100; 
							}
						}
						
						
						if(pdcn==4)
						{
							if(jj0.HP<=1000)
							{
								manjiang2("成功触发“破釜沉舟”\n",50);
								jj0.daji=jj0.daji+3000;
							}
						}
						
						
					}
					if(pdbs==999||pdbs==9999||pdbs==1000)
						break;
				}
				
				if(pdbs==999||pdbs==1000)
				{
					pdbs=1001;
					break;
				}
				
				jj0.HP=topHP;
				nl=0;dfnl=0;
				while(1)
				{
					pdbs=1001; 
					system("cls");
					manjiang("比赛开始！\n\n"); 
					manjiang("第二关\n\n");
					x=rand()%3;
					if(x==0)
					{
						dijj00=dijj55;
					}
					if(x==1)
					{
						dijj00=dijj66;
					}
					if(x==2)
					{
						dijj00=dijj77;
					}
					dftopHP=dijj00.HP;
					manjiang("你遇到了");
					printf("%s\n",dijj00.name);
					while(1)
					{
						while(1)
						{
							puts("===============================================================================");
							printf("你的状态:\n");
							printf("血量:%d/%d\n",jj0.HP,topHP);
							cout<<"能量:"<<nl<<"/"<<"100\n";
							printf("防御:%d\n",jj0.fangyu);
							printf("打击攻击:%d     ",jj0.daji);printf("射击攻击:%d\n",jj0.sheji);
							puts("===============================================================================");
							printf("要用那种攻击?\n\n\n 1:打击   2:射击   3:技能   4:终极技   0:退出比赛\n\n\n");
							puts("===============================================================================");
							cin>>pdbs;
							if(pdbs==0) 
							{
								pdbs=999;
								break;
							}
							if(pdbs==1) 
							{
								pdgj=0;
								pdtj=1;
							}
							if(pdbs==2) 
							{
								pdgj=1;
								pdtj=1;
							}
							if(pdbs==3) 
							{
								if(nl>=80)
								{
									pdgj=2;
									printf("\n%s",jj0.name);
									manjiang("使用了技能:");
									printf("%s\n\n",jj0.jinenming);
									nl=nl-80;
									pdtj=1;
								}
								else
								{
									manjiang("您没有足够多的能量\n");
									pdtj=0;
								}
							}
							if(pdbs==4) 
							{
								if(nl>=100)
								{
									pdgj=3;
									printf("\n%s",jj0.name);
									manjiang("使用了终极技:");
									printf("%s\n\n",jj0.zhongjijinenming);
									nl=nl-100;
									pdtj=1;
								}
								else
								{
									manjiang("您没有足够多的能量\n");
									pdtj=0;
								}
							}
							if(pdbs!=0&&pdbs!=1&&pdbs!=2&&pdbs!=3&&pdbs!=4)
							{
								manjiang("输入错误，请重输\n");
								pdtj=0;
							}
							if(pdtj==1)
							{
								break;
							}
						}
						
						if(pdcn==5)
						{
							x=rand()%6;
							if(x==2)
							{
								manjiang2("成功触发“腐能虫雾”\n",50);
								jj0.HP=jj0.HP+1500;
								dijj0.HP=dijj0.HP-1500;
							}
						}
						
						
						if(pdbs==999)
							break;
						
						pdtj=100;
						
						x=rand()%5;
						if(pdcn==2)
						{
							if(x==1)
							{
								manjiang2("成功触发“爆炸燃烧”\n",50);
								jj0.daji=jj0.daji+1000; 
								jj0.sheji=jj0.sheji+1000; 
							}
						}
						while(1)//我方攻击 
						{
							x=rand()%2;
							if(x==0)
								dfpdfy=0;//防打
							if(x==1)
								dfpdfy=1;
							if(pdbs==3)
							{
								if(dijj00.fangyu/2<jj0.jinen)
									dijj00.HP=dijj00.HP-(jj0.jinen-(dijj00.fangyu/2)) ;
								break;
							}
							if(pdbs==4)
							{
								if(dijj00.fangyu/2<jj0.zhongjijinen)
									dijj00.HP=dijj00.HP-(jj0.zhongjijinen-(dijj00.fangyu/2)) ;
								break;
							}
							if(pdgj==0)
							{
								if(dfpdfy==0)
								{
									manjiang("敌方使用了防打，我方打击失败\n");
									if(dijj00.fangyu<jj0.daji)
										dijj00.HP=dijj00.HP-(jj0.daji-dijj00.fangyu) ;
									nl=nl+10;
								}
								if(dfpdfy==1)
								{
									manjiang("敌方使用了防射，我方打击成功\n");
									if(pdcn==1)
									{
										x=rand()%3;
										if(x==1)
										{
											manjiang2("成功触发“麻痹电网”\n",50);
											jj0.fangyu=jj0.fangyu+500;
										}
									}
									dijj00.HP=dijj00.HP-jj0.daji;
									nl=nl+20;
								}
							}
							if(pdgj==1)
							{
								if(dfpdfy==0)
								{
									manjiang("敌方使用了防打，我方射击成功\n");
									if(pdcn==1)
									{
										x=rand()%3;
										if(x==1)
										{
											manjiang2("成功触发“麻痹电网”\n",50);
											jj0.fangyu=jj0.fangyu+500;
										}
									}
									dijj00.HP=dijj00.HP-jj0.sheji;
									nl=nl+20;
								}
								if(dfpdfy==1)
								{
									manjiang("敌方使用了防射，我方射击失败\n");
									if(dijj00.fangyu<jj0.sheji)
										dijj00.HP=dijj00.HP-(jj0.sheji-dijj00.fangyu) ;
									nl=nl+10;
								}
							}
							break;
						}
						if(dijj00.HP<0||dijj00.HP==0)
						{
							manjiang2("胜利\n",500); 
							manjiang("比赛次数加5\n");
							bisaics=bisaics+5;
							pdbs=9999;
							break;
						}
						
						puts("===============================================================================");
						printf("敌方的状态:\n");
						printf("血量:%d/%d\n",dijj00.HP,dftopHP);
						cout<<"能量:"<<dfnl<<"/"<<"100\n";
						printf("防御:%d\n",dijj00.fangyu);
						printf("打击攻击:%d     ",dijj00.daji);printf("射击攻击:%d\n",dijj00.sheji);
						puts("===============================================================================");
						//  printf("要用那种攻击?\n\n\n 1:打击   2:射击   3:技能   4:终极技   0:退出比赛\n\n\n");
						//  puts("===============================================================================");        
						
						
						
						
						while(1)
						{
							puts("===============================================================================");
							printf("你的状态:\n");
							printf("血量:%d/%d\n",jj0.HP,topHP);
							cout<<"能量:"<<nl<<"/"<<"100\n";
							printf("防御:%d\n",jj0.fangyu);
							printf("打击攻击:%d     ",jj0.daji);printf("射击攻击:%d\n",jj0.sheji);
							puts("===============================================================================");
							printf("要用那种防御?\n\n\n 1:防打   2:防射   0:退出比赛\n\n\n");
							puts("===============================================================================");
							cin>>pdbs;
							if(pdbs==0) 
							{
								pdbs=999;
								break;
							}
							if(pdbs==1) 
							{
								pdfy=0;
								pdtj=1;
							}
							if(pdbs==2) 
							{
								pdfy=1;
								pdtj=1;
							}
							if(pdbs!=0&&pdbs!=1&&pdbs!=2&&pdbs!=3&&pdbs!=4)
							{
								manjiang("输入错误，请重输\n");
								pdtj=0;
							}
							if(pdtj==1)
							{
								break;
							}
						}
						if(pdbs==999)
							break;
						
						
						pdbs=222;
						while(1)
						{
							if(dfnl>=80&&dfnl<100)
								pdbs==rand()%3;
							if(pdbs==1) 
							{
								if(nl>=80)
								{
									pdgj=2;
									printf("\n%s",dijj00.name);
									manjiang("使用了技能:");
									printf("%s\n\n",dijj00.jinenming);
									dfnl=dfnl-80; 
									pdtj=1;
									pdbs=3;
									break;
								}
							}
							if(pdbs==0||pdbs==2)    
							{
								if(nl>=100)
								{
									pdgj=3;
									printf("\n%s",dijj00.name);
									manjiang("使用了终极技:");
									printf("%s\n\n",dijj00.zhongjijinenming);
									dfnl=dfnl-100;
									pdtj=1;
									pdbs=4;
									break;
								}
							}
							if(dfnl>=100)
							{
								pdgj=3;
								printf("\n%s",dijj00.name);
								manjiang("使用了终极技:");
								printf("%s\n\n",dijj00.zhongjijinenming);
								dfnl-100;
								pdtj=1;
								pdbs=4;
								break;
							}
							/*pdbs==rand()%4;
							if(pdbs==0) 
							{
							pdgj=0;
							pdtj=1;
							}
							if(pdbs==1) 
							{
							pdgj=0;
							pdtj=1;
							}*/
							break;
						}
						
						
						while(1)//敌方攻击 
						{
							x=rand()%2;
							if(x==0)
								dfpdgj=0;//打
							if(x==1)
								dfpdgj=1;
							if(pdbs==3)
							{
								if(jj0.fangyu/2<dijj00.jinen)
									jj0.HP=jj0.HP-(dijj00.jinen-(jj0.fangyu/2)) ;
								break;
							}
							if(pdbs==4)
							{
								if(jj0.fangyu/2<dijj00.zhongjijinen)
									jj0.HP=jj0.HP-(dijj00.zhongjijinen-(jj0.fangyu/2)) ;
								break;
							}
							
							
							if(dfpdgj==0)
							{
								if(pdfy==0)
								{
									manjiang("我方使用了防打，敌方打击失败\n");
									if(jj0.fangyu<dijj00.daji)
										jj0.HP=jj0.HP-(dijj00.daji-jj0.fangyu) ;
									dfnl=dfnl+10;
								}
								if(pdfy==1)
								{
									manjiang("我方使用了防射，敌方打击成功\n");
									jj0.HP=jj0.HP-dijj00.daji;
									dfnl=dfnl+20;
								}
							}
							if(dfpdgj==1)
							{
								if(pdfy==0)
								{
									manjiang("我方使用了防打，敌方射击成功\n");
									jj0.HP=jj0.HP-dijj00.sheji;
									dfnl=dfnl+20;
								}
								if(pdfy==1)
								{
									manjiang("我方使用了防射，敌方射击失败\n");
									if(jj0.fangyu<dijj00.sheji)
										jj0.HP=jj0.HP-(dijj00.sheji-jj0.fangyu) ;
									dfnl=dfnl+10;
								}
							}
							break;
						}
						
						
						if(jj0.HP<0||jj0.HP==0)
						{
							manjiang2("失败\n",500);
							pdbs=999;
							break;
						}
						
						if(pdcn==3)
						{
							x=rand()%2;
							if(x==1&&jj0.HP<dijj00.HP)
							{
								manjiang2("成功触发“全能恢复”\n",50);
								nl=100; 
							}
						}
						
						
						if(pdcn==4)
						{
							if(jj0.HP<=1000)
							{
								manjiang2("成功触发“破釜沉舟”\n",50);
								jj0.daji=jj0.daji+3000;
							}
						}
						
					}
					if(pdbs==999||pdbs==9999||pdbs==1000)
						break;
				}
				
				
				
				if(pdbs==999||pdbs==1000)
				{
					pdbs=1001;
					break;
				}
				
				
				jj0.HP=topHP;
				nl=0;dfnl=0;
				while(1)
				{
					pdbs=1001; 
					system("cls");
					manjiang("比赛开始！\n\n"); 
					manjiang("最终关\n\n");
					x=rand()%3;
					if(x==0)
					{
						dijj000=dijj888;
					}
					if(x==1)
					{
						dijj000=dijj999;
					}
					if(x==2)
					{
						dijj000=dijj101010;
					}
					dftopHP=dijj000.HP;
					manjiang("你遇到了");
					printf("%s\n",dijj000.name);
					while(1)
					{
						while(1)
						{
							puts("===============================================================================");
							printf("你的状态:\n");
							printf("血量:%d/%d\n",jj0.HP,topHP);
							cout<<"能量:"<<nl<<"/"<<"100\n";
							printf("防御:%d\n",jj0.fangyu);
							printf("打击攻击:%d     ",jj0.daji);printf("射击攻击:%d\n",jj0.sheji);
							puts("===============================================================================");
							printf("要用那种攻击?\n\n\n 1:打击   2:射击   3:技能   4:终极技   0:退出比赛\n\n\n");
							puts("===============================================================================");
							cin>>pdbs;
							if(pdbs==0) 
							{
								pdbs=999;
								break;
							}
							if(pdbs==1) 
							{
								pdgj=0;
								pdtj=1;
							}
							if(pdbs==2) 
							{
								pdgj=1;
								pdtj=1;
							}
							if(pdbs==3) 
							{
								if(nl>=80)
								{
									pdgj=2;
									printf("\n%s",jj0.name);
									manjiang("使用了技能:");
									printf("%s\n\n",jj0.jinenming);
									nl=nl-80;
									pdtj=1;
								}
								else
								{
									manjiang("您没有足够多的能量\n");
									pdtj=0;
								}
							}
							if(pdbs==4) 
							{
								if(nl>=100)
								{
									pdgj=3;
									printf("\n%s",jj0.name);
									manjiang("使用了终极技:");
									printf("%s\n\n",jj0.zhongjijinenming);
									nl=nl-100;
									pdtj=1;
								}
								else
								{
									manjiang("您没有足够多的能量\n");
									pdtj=0;
								}
							}
							if(pdbs!=0&&pdbs!=1&&pdbs!=2&&pdbs!=3&&pdbs!=4)
							{
								manjiang("输入错误，请重输\n");
								pdtj=0;
							}
							if(pdtj==1)
							{
								break;
							}
						}
						
						
						if(pdcn==5)
						{
							x=rand()%6;
							if(x==2)
							{
								manjiang2("成功触发“腐能虫雾”\n",50);
								jj0.HP=jj0.HP+1500;
								dijj0.HP=dijj0.HP-1500;
							}
						}
						
						
						if(pdbs==999)
							break;
						
						pdtj=100;
						
						x=rand()%5;
						if(pdcn==2)
						{
							if(x==1)
							{
								manjiang2("成功触发“爆炸燃烧”\n",50);
								jj0.daji=jj0.daji+1000; 
								jj0.sheji=jj0.sheji+1000; 
							}
						}
						while(1)//我方攻击 
						{
							x=rand()%2;
							if(x==0)
								dfpdfy=0;//防打
							if(x==1)
								dfpdfy=1;
							if(pdbs==3)
							{
								if(dijj000.fangyu/2<jj0.jinen)
									dijj000.HP=dijj000.HP-(jj0.jinen-(dijj000.fangyu/2)) ;
								break;
							}
							if(pdbs==4)
							{
								if(dijj000.fangyu/2<jj0.zhongjijinen)
									dijj000.HP=dijj000.HP-(jj0.zhongjijinen-(dijj000.fangyu/2)) ;
								break;
							}
							if(pdgj==0)
							{
								if(dfpdfy==0)
								{
									manjiang("敌方使用了防打，我方打击失败\n");
									if(dijj000.fangyu<jj0.daji)
										dijj000.HP=dijj000.HP-(jj0.daji-dijj000.fangyu) ;
									nl=nl+10;
								}
								if(dfpdfy==1)
								{
									manjiang("敌方使用了防射，我方打击成功\n");
									if(pdcn==1)
									{
										x=rand()%3;
										if(x==1)
										{
											manjiang2("成功触发“麻痹电网”\n",50);
											jj0.fangyu=jj0.fangyu+500;
										}
									}
									dijj000.HP=dijj000.HP-jj0.daji;
									nl=nl+20;
								}
							}
							if(pdgj==1)
							{
								if(dfpdfy==0)
								{
									manjiang("敌方使用了防打，我方射击成功\n");
									if(pdcn==1)
									{
										x=rand()%3;
										if(x==1)
										{
											manjiang2("成功触发“麻痹电网”\n",50);
											jj0.fangyu=jj0.fangyu+500;
										}
									}
									dijj000.HP=dijj000.HP-jj0.sheji;
									nl=nl+20;
								}
								if(dfpdfy==1)
								{
									manjiang("敌方使用了防射，我方射击失败\n");
									if(dijj000.fangyu<jj0.sheji)
										dijj000.HP=dijj000.HP-(jj0.sheji-dijj000.fangyu) ;
									nl=nl+10;
								}
							}
							break;
						}
						if(dijj000.HP<0||dijj000.HP==0)
						{
							manjiang2("胜利\n",500); 
							manjiang("比赛次数加5\n");
							system("cls");
							manjiang("这一次锦标赛的冠军就是你，\n");
							manjiang("历史将永远把你铭记，\n");
							manjiang("这是你的时代，你的纪元\n");
							pdbs=999;
							break;
						}
						
						puts("===============================================================================");
						printf("敌方的状态:\n");
						printf("血量:%d/%d\n",dijj000.HP,dftopHP);
						cout<<"能量:"<<dfnl<<"/"<<"100\n";
						printf("防御:%d\n",dijj000.fangyu);
						printf("打击攻击:%d     ",dijj000.daji);printf("射击攻击:%d\n",dijj000.sheji);
						puts("===============================================================================");
						//  printf("要用那种攻击?\n\n\n 1:打击   2:射击   3:技能   4:终极技   0:退出比赛\n\n\n");
						//  puts("===============================================================================");        
						
						
						
						
						while(1)
						{
							puts("===============================================================================");
							printf("你的状态:\n");
							printf("血量:%d/%d\n",jj0.HP,topHP);
							cout<<"能量:"<<nl<<"/"<<"100\n";
							printf("防御:%d\n",jj0.fangyu);
							printf("打击攻击:%d     ",jj0.daji);printf("射击攻击:%d\n",jj0.sheji);
							puts("===============================================================================");
							printf("要用那种防御?\n\n\n 1:防打   2:防射   0:退出比赛\n\n\n");
							puts("===============================================================================");
							cin>>pdbs;
							if(pdbs==0) 
							{
								pdbs=999;
								break;
							}
							if(pdbs==1) 
							{
								pdfy=0;
								pdtj=1;
							}
							if(pdbs==2) 
							{
								pdfy=1;
								pdtj=1;
							}
							if(pdbs!=0&&pdbs!=1&&pdbs!=2&&pdbs!=3&&pdbs!=4)
							{
								manjiang("输入错误，请重输\n");
								pdtj=0;
							}
							if(pdtj==1)
							{
								break;
							}
						}
						if(pdbs==999)
							break;
						
						
						pdbs=222;
						while(1)
						{
							if(dfnl>=80&&dfnl<100)
								pdbs==rand()%3;
							if(pdbs==1) 
							{
								if(nl>=80)
								{
									pdgj=2;
									printf("\n%s",dijj000.name);
									manjiang("使用了技能:");
									printf("%s\n\n",dijj000.jinenming);
									dfnl=dfnl-80; 
									pdtj=1;
									pdbs=3;
									break;
								}
							}
							if(pdbs==0||pdbs==2)    
							{
								if(nl>=100)
								{
									pdgj=3;
									printf("\n%s",dijj000.name);
									manjiang("使用了终极技:");
									printf("%s\n\n",dijj000.zhongjijinenming);
									dfnl=dfnl-100;
									pdtj=1;
									pdbs=4;
									break;
								}
							}
							if(dfnl>=100)
							{
								pdgj=3;
								printf("\n%s",dijj000.name);
								manjiang("使用了终极技:");
								printf("%s\n\n",dijj000.zhongjijinenming);
								dfnl-100;
								pdtj=1;
								pdbs=4;
								break;
							}
							/*pdbs==rand()%4;
							if(pdbs==0) 
							{
							pdgj=0;
							pdtj=1;
							}
							if(pdbs==1) 
							{
							pdgj=0;
							pdtj=1;
							}*/
							break;
						}
						
						
						while(1)//敌方攻击 
						{
							x=rand()%2;
							if(x==0)
								dfpdgj=0;//打
							if(x==1)
								dfpdgj=1;
							if(pdbs==3)
							{
								if(jj0.fangyu/2<dijj000.jinen)
									jj0.HP=jj0.HP-(dijj000.jinen-(jj0.fangyu/2)) ;
								break;
							}
							if(pdbs==4)
							{
								if(jj0.fangyu/2<dijj000.zhongjijinen)
									jj0.HP=jj0.HP-(dijj000.zhongjijinen-(jj0.fangyu/2)) ;
								break;
							}
							
							
							if(dfpdgj==0)
							{
								if(pdfy==0)
								{
									manjiang("我方使用了防打，敌方打击失败\n");
									if(jj0.fangyu<dijj000.daji)
										jj0.HP=jj0.HP-(dijj000.daji-jj0.fangyu) ;
									dfnl=dfnl+10;
								}
								if(pdfy==1)
								{
									manjiang("我方使用了防射，敌方打击成功\n");
									jj0.HP=jj0.HP-dijj000.daji;
									dfnl=dfnl+20;
								}
							}
							if(dfpdgj==1)
							{
								if(pdfy==0)
								{
									manjiang("我方使用了防打，敌方射击成功\n");
									jj0.HP=jj0.HP-dijj000.sheji;
									dfnl=dfnl+20;
								}
								if(pdfy==1)
								{
									manjiang("我方使用了防射，敌方射击失败\n");
									if(jj0.fangyu<dijj000.sheji)
										jj0.HP=jj0.HP-(dijj000.sheji-jj0.fangyu) ;
									dfnl=dfnl+10;
								}
							}
							break;
						}
						
						
						if(jj0.HP<0||jj0.HP==0)
						{
							manjiang2("失败\n",500);
							pdbs=999;
							break;
						}
						
						if(pdcn==3)
						{
							x=rand()%2;
							if(x==1&&jj0.HP<dijj000.HP)
							{
								manjiang2("成功触发“全能恢复”\n",50);
								nl=100; 
							}
						}
						
						
						if(pdcn==4)
						{
							if(jj0.HP<=1000)
							{
								manjiang2("成功触发“破釜沉舟”\n",50);
								jj0.daji=jj0.daji+3000;
							}
						}
						
					}
					if(pdbs==999||pdbs==9999||pdbs==1000)
						break;
				}
				if(pdbs==999||pdbs==1000)
				{
					pdbs=1001;
					break;
				}
				
				
				
				cout<<endl; 
				break; 
			}
		}
		
		
		
		
		
		
		
		if(pd2==2)
		{
			while(1)
			{
				system("cls");
				cout<<"1:机甲      2:进化卡      3:超能卡      (其他任意键退出【数字！！！】)\n\n";
				cin>>pd4;
				if(pd4==1)
				{
					system("cls");
					cout<<"我的机甲:\n\n";
					if(sjj1>=1)
					{
						jj0=jj1;
						printf("%s:\n",jj0.name);
						printf("生命:%d\n",jj0.HP);
						printf("打击:%d\n",jj0.daji);
						printf("射击:%d\n",jj0.sheji);
						printf("防御:%d\n",jj0.fangyu);
						printf("技能:“%s”,攻击力:%d\n",jj0.jinenming,jj0.jinen);
						printf("终极技:“%s”,攻击力:%d\n\n\n",jj0.zhongjijinenming,jj0.zhongjijinen);
					}
					if(sjj2>=1)
					{
						jj0=jj2;
						printf("%s:\n",jj0.name);
						printf("生命:%d\n",jj0.HP);
						printf("打击:%d\n",jj0.daji);
						printf("射击:%d\n",jj0.sheji);
						printf("防御:%d\n",jj0.fangyu);
						printf("技能:“%s”,攻击力:%d\n",jj0.jinenming,jj0.jinen);
						printf("终极技:“%s”,攻击力:%d\n\n\n",jj0.zhongjijinenming,jj0.zhongjijinen);
					}
					if(sjj3>=1)
					{
						jj0=jj3;
						printf("%s:\n",jj0.name);
						printf("生命:%d\n",jj0.HP);
						printf("打击:%d\n",jj0.daji);
						printf("射击:%d\n",jj0.sheji);
						printf("防御:%d\n",jj0.fangyu);
						printf("技能:“%s”,攻击力:%d\n",jj0.jinenming,jj0.jinen);
						printf("终极技:“%s”,攻击力:%d\n\n\n",jj0.zhongjijinenming,jj0.zhongjijinen);
					}
					if(sjj4>=1)
					{
						jj0=jj4;
						printf("%s:\n",jj0.name);
						printf("生命:%d\n",jj0.HP);
						printf("打击:%d\n",jj0.daji);
						printf("射击:%d\n",jj0.sheji);
						printf("防御:%d\n",jj0.fangyu);
						printf("技能:“%s”,攻击力:%d\n",jj0.jinenming,jj0.jinen);
						printf("终极技:“%s”,攻击力:%d\n\n\n",jj0.zhongjijinenming,jj0.zhongjijinen);
					}
					if(sjj55>=1)
					{
						jj0=jj55;
						printf("%s:\n",jj0.name);
						printf("生命:%d\n",jj0.HP);
						printf("打击:%d\n",jj0.daji);
						printf("射击:%d\n",jj0.sheji);
						printf("防御:%d\n",jj0.fangyu);
						printf("技能:“%s”,攻击力:%d\n",jj0.jinenming,jj0.jinen);
						printf("终极技:“%s”,攻击力:%d\n\n\n",jj0.zhongjijinenming,jj0.zhongjijinen);
					}
					if(sjj66>=1)
					{
						jj0=jj66;
						printf("%s:\n",jj0.name);
						printf("生命:%d\n",jj0.HP);
						printf("打击:%d\n",jj0.daji);
						printf("射击:%d\n",jj0.sheji);
						printf("防御:%d\n",jj0.fangyu);
						printf("技能:“%s”,攻击力:%d\n",jj0.jinenming,jj0.jinen);
						printf("终极技:“%s”,攻击力:%d\n\n\n",jj0.zhongjijinenming,jj0.zhongjijinen);
					}
					if(sjj77>=1)
					{
						jj0=jj77;
						printf("%s:\n",jj0.name);
						printf("生命:%d\n",jj0.HP);
						printf("打击:%d\n",jj0.daji);
						printf("射击:%d\n",jj0.sheji);
						printf("防御:%d\n",jj0.fangyu);
						printf("技能:“%s”,攻击力:%d\n",jj0.jinenming,jj0.jinen);
						printf("终极技:“%s”,攻击力:%d\n\n\n",jj0.zhongjijinenming,jj0.zhongjijinen);
					}
					if(sjj888>=1)
					{
						jj0=jj888;
						printf("%s:\n",jj0.name);
						printf("生命:%d\n",jj0.HP);
						printf("打击:%d\n",jj0.daji);
						printf("射击:%d\n",jj0.sheji);
						printf("防御:%d\n",jj0.fangyu);
						printf("技能:“%s”,攻击力:%d\n",jj0.jinenming,jj0.jinen);
						printf("终极技:“%s”,攻击力:%d\n\n\n",jj0.zhongjijinenming,jj0.zhongjijinen);
					}
					if(sjj999>=1)
					{
						jj0=jj999;
						printf("%s:\n",jj0.name);
						printf("生命:%d\n",jj0.HP);
						printf("打击:%d\n",jj0.daji);
						printf("射击:%d\n",jj0.sheji);
						printf("防御:%d\n",jj0.fangyu);
						printf("技能:“%s”,攻击力:%d\n",jj0.jinenming,jj0.jinen);
						printf("终极技:“%s”,攻击力:%d\n\n\n",jj0.zhongjijinenming,jj0.zhongjijinen);
					}
					if(sjj101010>=1)
					{
						jj0=jj101010;
						printf("%s:\n",jj0.name);
						printf("生命:%d\n",jj0.HP);
						printf("打击:%d\n",jj0.daji);
						printf("射击:%d\n",jj0.sheji);
						printf("防御:%d\n",jj0.fangyu);
						printf("技能:“%s”,攻击力:%d\n",jj0.jinenming,jj0.jinen);
						printf("终极技:“%s”,攻击力:%d\n\n\n",jj0.zhongjijinenming,jj0.zhongjijinen);
					}
					cout<<"按任意键退出\n";
					cin>>pd3;
					system("cls");
				}
				if(pd4==2)
				{
					system("cls");
					cout<<"我的进化卡:\n\n";
					if(skp1>=1)
					{
						kp0=kp1;
						printf("%s:\n",kp0.name);
						printf("生命增加:%d\n",kp0.jiaHP);
						printf("打击增加:%d\n",kp0.jiadaji);
						printf("射击增加:%d\n",kp0.jiasheji);
						printf("防御增加:%d\n\n\n",kp0.jiafangyu);
					}
					if(skp2>=1)
					{
						kp0=kp2;
						printf("%s:\n",kp0.name);
						printf("生命增加:%d\n",kp0.jiaHP);
						printf("打击增加:%d\n",kp0.jiadaji);
						printf("射击增加:%d\n",kp0.jiasheji);
						printf("防御增加:%d\n\n\n",kp0.jiafangyu);
					}
					if(skp3>=1)
					{
						kp0=kp3;
						printf("%s:\n",kp0.name);
						printf("生命增加:%d\n",kp0.jiaHP);
						printf("打击增加:%d\n",kp0.jiadaji);
						printf("射击增加:%d\n",kp0.jiasheji);
						printf("防御增加:%d\n\n\n",kp0.jiafangyu);
					}
					if(skp4>=1)
					{
						kp0=kp4;
						printf("%s:\n",kp0.name);
						printf("生命增加:%d\n",kp0.jiaHP);
						printf("打击增加:%d\n",kp0.jiadaji);
						printf("射击增加:%d\n",kp0.jiasheji);
						printf("防御增加:%d\n\n\n",kp0.jiafangyu);
					}
					if(skp5>=1)
					{
						kp0=kp5;
						printf("%s:\n",kp0.name);
						printf("生命增加:%d\n",kp0.jiaHP);
						printf("打击增加:%d\n",kp0.jiadaji);
						printf("射击增加:%d\n",kp0.jiasheji);
						printf("防御增加:%d\n\n\n",kp0.jiafangyu);
					}
					cout<<"按任意键退出\n";
					cin>>pd3;
					system("cls");
				}
				if(pd4==3)
				{
					system("cls");
					cout<<"我的超能卡:\n\n";
					if(scn1>=1)
					{
						cn0=cn1;
						printf("%s:\n",cn0.name);
						printf("效果:防御力增强500\n");
						printf("触发条件:攻击成功后\n");
						printf("触发几率:%d分之一\n\n\n",cn0.jilv);
					}
					if(scn2>=1)
					{
						cn0=cn2;
						printf("%s:\n",cn0.name);
						printf("效果:攻击额外增加1000伤害\n");
						printf("触发条件:攻击时\n");
						printf("触发几率:%d分之一\n\n\n",cn0.jilv);
					}
					if(scn3>=1)
					{
						cn0=cn3;
						printf("%s:\n",cn0.name);
						printf("效果:能量全满\n");
						printf("触发条件:HP低于对方时\n");
						printf("触发几率:%d分之一\n\n\n",cn0.jilv);
					}
					if(scn4>=1)
					{
						cn0=cn4;
						printf("%s:\n",cn0.name);
						printf("效果:打击攻击增强3000（一局一次）\n");
						printf("触发条件:HP<=1000\n");
						printf("触发几率:100%\n\n\n",cn0.jilv);
					}
					if(scn5>=1)
					{
						cn0=cn5;
						printf("%s:\n",cn0.name);
						printf("效果:吸收敌方1500点血\n");
						printf("触发条件:攻击后\n");
						printf("触发几率:%d分之一\n\n\n",cn0.jilv);
					}
					cout<<"按任意键退出\n";
					cin>>pd3;
					system("cls");
				}
				if(pd4!=1&&pd4!=2&&pd4!=3)
				{
					system("cls");
					break;
				}
			}
		}
		if(pd2==3)
		{
			while(1)
			{
				system("cls");
				cout<<"当比赛场数达到10场时，可消耗10场抽一张卡\n\n";
				cout<<"当前场数：";
				cout<<bisaics<<endl<<endl;
				cout<<"是否抽卡？(Y抽奖,其他退出)\n";
				while(1)
				{
					cin>>pd;
					if(pd=='y'||pd=='Y')
					{
						if(bisaics>=10)
						{
							x=rand()%3;
							if(x==1)
							{
								x=rand()%9;
								if(x==1)
								{
									sjj2=1;
									jj0=jj2;
									manjiang("恭喜，抽中了:\n");
									printf("%s\n\n",jj0);
									x=-1;
								}
								if(x==2)
								{
									sjj3=1;
									jj0=jj3;
									manjiang("恭喜，抽中了:\n");
									printf("%s\n\n",jj0);
									x=-1;
								}
								if(x==3)
								{
									sjj4=1;
									jj0=jj4;
									manjiang("恭喜，抽中了:\n");
									printf("%s\n\n",jj0);
									x=-1;
								}
								if(x==0)
								{
									sjj55=1;
									jj0=jj55;
									manjiang("真幸运，抽中了:\n");
									printf("%s\n\n",jj0);
									x=-1;
								}
								if(x==5)
								{
									sjj66=1;
									jj0=jj66;
									manjiang("真幸运，抽中了:\n");
									printf("%s\n\n",jj0);
									x=-1;
								}
								if(x==6)
								{
									sjj77=1;
									jj0=jj77;
									manjiang("真幸运，抽中了:\n");
									printf("%s\n\n",jj0);
									x=-1;
								}
								if(x==4)
								{
									sjj888=1;
									jj0=jj888;
									manjiang("欧皇附体！抽中了:\n");
									printf("%s\n\n",jj0);
									x=-1;
								}
								if(x==8)
								{
									sjj999=1;
									jj0=jj999;
									manjiang("欧皇附体！抽中了:\n");
									printf("%s\n\n",jj0);
									x=-1;
								}
								if(x==7)
								{
									sjj101010=1;
									jj0=jj101010;
									manjiang("欧皇附体！抽中了:\n");
									printf("%s\n\n",jj0);
									x=-1;
								}   
							}
							if(x==2)
							{
								x=rand()%5;
								if(x==1)
								{
									skp1=1;
									kp0=kp1;
									manjiang("恭喜，抽中了:\n");
									printf("%s\n\n",kp0);
									x=-1;
								}
								if(x==2)
								{
									skp2=1;
									kp0=kp2;
									manjiang("恭喜，抽中了:\n");
									printf("%s\n\n",kp0);
									x=-1;
								}
								if(x==3)
								{
									skp3=1;
									kp0=kp3;
									manjiang("恭喜，抽中了:\n");
									printf("%s\n\n",kp0);
									x=-1;
								}   
								if(x==4)
								{
									skp4=1;
									kp0=kp4;
									manjiang("恭喜，抽中了:\n");
									printf("%s\n\n",kp0);
									x=-1;
								}
								if(x==0)
								{
									skp5=1;
									kp0=kp5;
									manjiang("恭喜，抽中了:\n");
									printf("%s\n\n",kp0);
									x=-1;
								}
							}
							if(x==0)
							{
								x=rand()%5;
								if(x==0)
								{
									scn1=1;
									cn0=cn1;
									manjiang("恭喜，抽中了:\n");
									printf("%s\n\n",cn0);
									x=-1;
								}
								if(x==1)
								{
									scn2=1;
									cn0=cn2;
									manjiang("恭喜，抽中了:\n");
									printf("%s\n\n",cn0);
									x=-1;
								}       
								if(x==2)
								{
									scn3=1;
									cn0=cn3;
									manjiang("恭喜，抽中了:\n");
									printf("%s\n\n",cn0);
									x=-1;
								}
								if(x==3)
								{
									scn4=1;
									cn0=cn4;
									manjiang("恭喜，抽中了:\n");
									printf("%s\n\n",cn0);
									x=-1;
								}
								if(x==4)
								{
									scn5=1;
									cn0=cn5;
									manjiang("恭喜，抽中了:\n");
									printf("%s\n\n",cn0);
									x=-1;
								}
							}
							bisaics=bisaics-10;
							cout<<"当前场数：";
							cout<<bisaics<<endl<<endl;
						}
						else
							manjiang("场数不够(任意键退出)\n");
					}
					else
					{
						break;      
					}
				}
				system("cls");
				break; 
			}
		}
		if(pd2==4)
		{
			while(1)
			{
				system("cls");
				cout<<"说明书：\n\n";
				cout<<"生命：敌或我HP为0时比赛结束，死亡后要从新开始\n\n";
				cout<<"打击：向敌方打击，可被放打防御\n\n";
				cout<<"射击：向敌方射击，可被放射防御\n\n";
				cout<<"防御：防打或防射成功后，受到的伤害=攻击伤害-防御\n\n";
				cout<<"先手：随机选择\n\n";
				cout<<"进化卡：给予机甲本身加成\n\n";
				cout<<"超能卡：当满足条件或随机几率触发\n\n";
				cout<<"能量：上限100，攻击成功加20，防御成功加20，攻击失败加10，防御失败加10\n\n";
				cout<<"技能：消耗80能量,敌方能使用50%的自身防御抵挡\n\n";
				cout<<"终极技：消耗100能量，,敌方能使用50%的自身防御抵挡\n\n";
				cout<<"胜利：夺得冠军后相当于打了十场比赛\n\n";
				cout<<"存档：按“退出游戏（0）”自动保存\n\n\n\n";
				cout<<"输入任意键返回主页面(数字！！！)\n";
				cin>>pd2;
				system("cls");
				break;
			}
		}
		if(pd2==0)
		{
			cout<<"退出成功";
			cundang(sjj1,sjj2,sjj3,sjj4,sjj55,sjj66,sjj77,sjj888,sjj999,sjj101010,skp1,skp2,skp3,skp4,skp5,scn1,scn2,scn3,scn4,scn5);
			cundang2(bisaics);
			break;  
		}
		if(pd2==3188)
		{
			sjj1=1,sjj2=0,sjj3=0,sjj4=0,sjj55=0,sjj66=0,sjj77=0,sjj888=0,sjj999=0,sjj101010=0;
			skp1=0,skp2=0,skp3=0,skp4=0,skp5=0;
			scn1=0,scn2=0,scn3=0,scn4=0,scn5=0;
			bisaics=0;
			cout<<"清除成功\n";
		}
		if(pd2!=1&&pd2!=2&&pd2!=3&&pd2!=4&&pd2!=0&&pd2!=3188)
		{
			manjiang2("输入错误，请重输\n",50);
		}
	}
	cundang(sjj1,sjj2,sjj3,sjj4,sjj55,sjj66,sjj77,sjj888,sjj999,sjj101010,skp1,skp2,skp3,skp4,skp5,scn1,scn2,scn3,scn4,scn5);
	cundang2(bisaics);
	return 0;
}








void manjiang(char *p)
{
	while(1)
	{
		if(*p!=0)
			printf("%c",*p++);
		else
			break;
		Sleep(100);
	}
}
void manjiang2(char *p,int t)
{
	while(1)
	{
		if(*p!=0)
			printf("%c",*p++);
		else
			break;
		Sleep(t);
	}
} 

