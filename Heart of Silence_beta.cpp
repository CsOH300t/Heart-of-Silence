#include "stdio.h"
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <conio.h>

void title();
void mainmenu();//没卵用的主界面 
void beginnerguide();//主界面的新手指东 
void knockth();//托马在门外 
void knockth2();
void knocking();//敲门震动 
void tinyjumpscare(); //小型跳吓 
int *search(int *i,int *room,int *rustyknife,int *paper,int *bread,int *book,int *bandage,int *peep,int *drinkme);//搜索房间 
int *door(int *room,int *enemy,int *peep,int *hp,int *fear,int *atk,int *syphp,int *skehp,int *cshp,int *bandage,int *i,int *tho,int *mtho,int *msyp,int *mske,int *mcs);//开门 
void scaredbysyp();//被梅梅吓死 
void deathbysyp();//被梅梅杀死 
void scaredbyske();
void deathbyske();
void deathbycs();
void scaredbycs();//他奶奶的，传参传得我想死 
int *self(int *hp,int *fear,int *atk,int *cou,int *rustyknife,int *paper,int *bread,int *book,int *bandage,int *peep,int *drinkme,int *tho,int *mtho,int *msyp,int *mske,int *mcs);//自我检视 
int *fight_syphy(int *hp,int *fear,int *atk,int *syphp,int *bandage,int *msyp);//梅梅战斗 
int *fight_ske(int *hp,int *fear,int *atk,int *skehp,int *bandage,int *mske);//骷髅战斗 
int *fight_cs(int *hp,int *fear,int *atk,int *cshp,int *bandage,int *mcs);//希茨安战斗 
char weapon[10][50]={"生锈的小刀","肮脏的匕首"};
main()
{
	title();
	PlaySound(TEXT("Spiel Mit Mir bgm.wav"),NULL,SND_FILENAME | SND_ASYNC | SND_LOOP);//bgm 
	mainmenu();
	fflush(stdin);
	int main_a,a,b,c;//选择嵌套 
	int cou=0,atk=0,fear=5,hp=20;//勇气，攻击，恐惧，生命 
		int *php,*pfear,*pcou,*patk;
		php=&hp,pfear=&fear,pcou=&cou,patk=&atk;
	int room=0;//房间 
		int *proom;
		proom=&room;
	int syphp=150,thohp=150,cshp=200,skehp=150;//血量 
		int *psyphp,*pcshp,*pskehp;
		psyphp=&syphp,pcshp=&cshp,pskehp=&skehp;
	int tho=0,syp=0;//托马斯，梅梅好感 
		int *ptho;
		ptho=&tho;
	int mtho=1,msyp=0,mske=0,mcs=0;//遇见各人的次数 
		int *pmtho,*pmsyp,*pmske,*pmcs;
		pmtho=&mtho,pmsyp=&msyp,pmske=&mske,pmcs=&mcs;
	int lon=0,type;//道具行数，种类，数量 
	int rustyknife=0,paper=0,bread=0,book=0,bandage=0,drinkme=0,redvines=0,peep=0;//妈的还是这样弱智又实在 
		int *prustyknife,*ppaper,*pbread,*pbook,*pdrinkme,*pbandage,*ppeep;
		prustyknife=&rustyknife,ppaper=&paper,pbread=&bread,pbook=&book,pdrinkme=&drinkme,pbandage=&bandage,ppeep=&peep;
	scanf("%d",&main_a);
	if(main_a==0){beginnerguide();
	system("cls");
	title();
	mainmenu();
	fflush(stdin);
	scanf("%d",&main_a);} 
	if(main_a==2)exit(0);
	if(main_a==3)room=5;//开发者测试（我好nb啊竟然是开发者 
	if(main_a==1){printf("没有回头路可逃离了");
	Sleep(300);
	printf(".");
	Sleep(300);
	printf(".");
	Sleep(300);
	printf(".");
	Sleep(500);
	system("cls");
	printf("这是个荒诞的开始。\n你在一个空旷的陌生房间里醒来，头疼和困惑让你疲惫不已。\n对于发生了什么事、自己身处何方，你一概不知。\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
	printf("*你产生了新的疑问。");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
	Sleep(300);
	printf("\n房间空荡荡的，只有一扇门镶嵌在房间另一头的墙壁上，\n走廊上的微光从门下的缝隙里透进来。\n");
	fflush(stdin);
	printf("\n*按任意键走向门\n");
	getch();
	printf("门上没有锁，似乎一扭把手就能够打开。\n不知怎么，你突然注意到门后有人。\n门下方的缝隙里，投进屋中的影子表明，一个人正站在门后，没有发出一点声响。\n");
	Sleep(500);
	printf("\n0.“谁在那？”\n1.推开门\n");
	scanf("%d",&a);
	if(a==0){printf("你带着恐惧问。门后传来一个男人的声音：\n“敲敲门。”\n");
		Sleep(500);
		printf("\n0.“是谁？”\n1.推开门\n");
		scanf("%d",&b);
		  if(b==0){printf("“凯蒙。”那个语调邪恶的男声说。\n“凯蒙什么？”你按捺住不安，继续走这个笑话的流程。\n“开门好吗？我素未谋面的朋友。”\n你没明白这个笑话好在哪里，除非门外的人并不是在讲笑话。\n");
		  Sleep(500);
		  printf("\n0.不理会\n1.推开门\n");
		  scanf("%d",&c);
		    if(c==0){printf("你决定不予理会，");
			};
		    if(c==1){printf("你鼓起勇气，一把将门推开，出现在眼前的只有一条空荡荡的走廊。\n门外说话的人的身影并没有出现，你疑惑又谨慎地四处张望。\n");
			a=1;}
		  }
	  if(b==1)a=1;
	} 
	if(a==1){if(c!=1)printf("你鼓起勇气，一把将门推开，出现在眼前的只有一条空荡荡的走廊。\n并没有谁的影子，这让你松了口气。\n");
	Sleep(1000);
	printf("“嗨，朋友，你的安全意识是不是太薄弱了点？”\n一个长着羊角的人影猛地从门框上方倒挂下来，攥住你的衣领，把你狠狠掼在一边的墙上。\n“在一个完全陌生的环境里，信步闲庭四处瞎逛，你到底是怎么想的？”\n他说话时带着邪恶的嘶嘶气流，突然的袭击令你惊恐不已，拼命挣扎。\n你看到一对令人不快的紫色眼珠观察着你的一举一动。\n");
	tinyjumpscare();
	Sleep(500);
	printf("\n0.惊慌失措\n1.保持镇定\n");
	scanf("%d",&b);
	  if(b==0){printf("看到你惊慌失措的反应，他露出了满意的微笑。");
	  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
	  printf("\n*你的勇气降低了。\n");
	  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE); 
	  cou-=1;
	  tho+=1; 
      }
	  if(b==1){printf("见你似乎没有被吓到，他露出了失望的神情。");
	  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
	  printf("\n*你的勇气提升了。\n");
	  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
	  cou+=1;
	  }
	printf("“别那么紧张嘛，在这个变化莫测的地方，比我危险的家伙多了去了。”\n他从门框后轻飘飘地跳了下来，松开了钳制你的手。\n“所有人都想离开这里，这就是所有人都出不去的原因……但，你竟然还是活的，这说明什么？”\n");
	Sleep(500);
	printf("\n*“……什么？”\n");
	fflush(stdin);
	getch();
	printf("“就是说他们也很快会发现你。他们要击倒你，要挖出你血淋淋的、跳动的心脏，把你的尸体扔在这栋房子的角落发臭，然后——出去，像一群趋光的飞蛾。”\n这个陌生人喃喃着，朝你咧出两排邪恶的白牙。“我能做什么呢？我或许能在他们之前下手……”\n你惊恐地向房间里退去，这使他哈哈大笑起来。\n“总之，这里危机四伏，”他说，“如果你还这样随随便便开门……那一定没有在几个房间之后见到我的机会了。”\n");
	Sleep(500);
	printf("\n*“你是谁？”\n");
	fflush(stdin);
	getch();
	printf("而那个人没有回答。他走向门后，消失得像出现时那样突然。\n留下困惑的你面对这条昏暗的走廊。\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
	printf("*这是谁？你产生了新的疑问。\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
	Sleep(500);
	printf("\n0.查看没那么莫名其妙的新手指南\n1.经过走廊\n");
	scanf("%d",&b);
	  if(b==0){printf("***真正的游戏说明***\n这个游戏模式来源于我去年的一个恐怖游戏构思：隔着门有概率检定到门后的鬼，如果没注意直接推门，像托马斯这种只会来个跳吓娱乐一下，另一些凶狠的角色直接开门杀。\n在构思里这是个3D游戏，不过现在的我会写个p的3D游戏，用半生不熟的c++凑合一下，圆满这个脑洞。\n在这里，再强的角色也没有秒杀你的机会，我打算写战斗模块，总是有能周旋的机会。\n他们有的又强又邪恶（按进度来说很快就要遇到一个），打不过建议直接跑路。当然也有神经兮兮的存在，找机会把他们全弄死、还是冒着永远被困在这里的风险和他们保持距离，这都全看你了。\n补充：战斗时生命为0会嗝屁，恐惧大于10时也会因为心智被击溃而嗝屁，俗称吓死。\n"); 
	  Sleep(500);
	  printf("\n*经过走廊\n");
	  fflush(stdin);
	  getch();
	  b=1;}
	  if(b==1){printf("你小心翼翼地穿过了走廊，推开尽头的房门。");
	  Sleep(1000);
	  system("cls");}
	  }
}
	int i=0;//搜索次数
		int *pi;
		pi=&i;
	int x=0,y=0,run1,run2=0;//追逐使用 
	char key;
	for(;;)
	{
	if(fear>=9){SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
				printf("你紧绷的神经饱受恐惧的折磨，再不尽快降低恐惧的话……\n");}
	if(fear<9)SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
	if(hp<=0){SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
				printf("你身体里的生命力正在逐渐耗尽……\n");}
	if(hp>0)SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
	if(room==1)printf("\n这是一间和前一间相差不大的房间，墙壁上溅有陈旧的血迹。\n");
	else if(room==3)printf("\n这是一间空旷的房间，墙角放着几件腐朽的木家具。\n");
	else if(room==4)printf("\n这似乎以前是间书房，对面的墙上挂着一张老旧的画像。\n");
	else if(room==5)printf("\n这是间客厅装潢的空旷房间，两旁的窗子被木板钉死，立柜上的玻璃消失无踪。\n你正对面的桌上放着一台旧式收音机。\n");
	else printf("\n这是一间同样空旷的房间。\n");
	Sleep(300);
	srand((unsigned)time(NULL));
	int roll=rand()%(15+1);
	int enemy=rand()%(20+1);
	int *penemy;
	penemy=&enemy;
	int b=0;
	if(rustyknife=1)atk=3;
	if(room>=5)printf("*%d*",i);//电台后 
	if(room>=5&&i>3&&i<7)printf("\n你听见门后的走廊深处，有什么东西正在逼近……");
	else if(room>=5&&i>=7&&i<9)printf("\n寒冷的空气令你浑身颤栗，那些邪恶的存在正朝这房间接近而来……");
	else if(room>=5&&i>=9&&i<11){knocking();
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
					printf("\n你听见有什么东西正试图入侵那扇脆弱的门扉，再不赶紧离开这里的话……");
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
					}
	else if(room>=5&&i==11){SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
							printf("鬼魂入侵了这个房间！\n");
							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
							tinyjumpscare();
							if(enemy>0&&enemy<=4){fight_syphy(php,pfear,patk,psyphp,pbandage,pmsyp);}
		/*骷髅*/  		else if(enemy>4&&enemy<=8){fight_ske(php,pfear,patk,pskehp,pbandage,pmske);}
					//	else if(enemy>8&&enemy<=12)
							}//被迫战斗 
	printf("\n1.搜索房间     2.离开房间     3.自我检视     \n");
	scanf("%d",&a);
	switch(a)
	 {
/*搜索*/case 1:if(i==0&&room==5){i+=1;
								PlaySound(TEXT("blank bgm.wav"),NULL,SND_FILENAME | SND_ASYNC | SND_LOOP);
								printf("你走近检查桌上的收音机。\n这是台非常老旧的电子管收音机，表面布满灰尘，你用手指拂掉铭牌上厚厚的尘土。\n商标是“福克森”，下方模糊不清的小字刻着出厂年月“5-13-21”。\n");
								Sleep(300);
								printf("除了饱受时间的摧残以外，这台机器还完好无损，仿佛按下开关还能使用一样。\n");
								Sleep(300);
								printf("要按下开关吗？\n"); 
								Sleep(300);
								printf("\n1.是    0.否\n");
								fflush(stdin);
								scanf("%d",&b);
								if(b==1){printf("你小心翼翼地按下了开关");Sleep(300);printf(".");Sleep(300);printf(".");Sleep(300);printf(".\n");
									Sleep(1000);
									printf("什么事也没有发生。\n");
									Sleep(2000);
									PlaySound(TEXT("FM.wav"),NULL,SND_FILENAME | SND_ASYNC | SND_LOOP);
									printf("不，扬声器里倏然响起了滋滋的电流声，这刺耳的噪音回荡在空旷的房间里。\n");
									Sleep(1000);
									printf("你立刻谨慎地退开，却迟迟没有新的异样发生。\n");
									Sleep(2000);
									SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_BLUE);
									printf("“你总不可能将过去抛在身后。”\n");
									SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN);
									Sleep(2000);
									printf("\n*你隐约感觉到屋子发生了新的变化。\n\n");
									getch();
									SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
									PlaySound(TEXT("blank bgm.wav"),NULL,SND_FILENAME | SND_ASYNC | SND_LOOP);
									printf("突然，声音停止了，刚才从收音机内传出的男声与电流杂音都消失得干干净净。\n房间里重新陷入一片死寂。\n");
									Sleep(1000);
									printf("你壮着胆子上前检查情况，发现机器的电池匣里只有一枚近乎报废的老电池。\n可以想见，刚才启动的十余秒已经耗光了这枚电池所有的寿命。\n");
									Sleep(1000);
									printf("如果你能找到可替换的电池，或许就能继续探究电台的秘密。\n");
									system("pause");
									system("cls");
									PlaySound(TEXT("Spiel Mit Mir bgm.wav"),NULL,SND_FILENAME | SND_ASYNC | SND_LOOP);
									printf("                 ***提示***\n从这个房间开始，你之后的探索可以走回头路了。\n路上收集到的特殊物品可以在不同的场合下使用，触发新的剧情。\n同时，电台的声音将那些邪恶的存在吸引向了你。\n现在你不能在同一个房间里久留，如果你行动回合过多，他们会试图破门而入。\n（听到门外有人而选择等等再开门同样算进行动回合里）\n\n");
									system("pause");
									system("cls");
									}
								if(b==0){PlaySound(TEXT("Spiel Mit Mir bgm.wav"),NULL,SND_FILENAME | SND_ASYNC | SND_LOOP);
										printf("你决定压抑住好奇心。\n");}
								}
				
				else if(i==2&&room==3){Sleep(300);  //room3 
								printf("\n抽屉似乎卡住了，要将手伸进去摸索吗？\n");
								Sleep(300);
								printf("\n1.是    0.否\n");
								fflush(stdin);
								scanf("%d",&b);
								if(b==1){printf("你将手伸进黑暗的桌膛里。\n");
										Sleep(1000);
										printf("似乎什么也没有了。\n"); 
										Sleep(1500);
										printf("除了"); 
										SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
										printf("疼痛。");
										Sleep(1000);
										printf("\n一阵剧痛钻进你的掌心，你连忙抽回手来。\n血！血从手掌上被划开的口子里汩汩淌出。\n感受到穿过那道缝隙、从抽屉里投来的视线，你捂着流血的伤口，惊慌地从桌旁退开。\n"); 
										SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE); 
										tinyjumpscare();
										Sleep(1500);
										printf("\n被窥视的感觉很快消退了，你却依然惊魂未定。\n这栋屋子的每个角落里都孕育着邪恶的事物，它们随时准备着吞噬孱弱的存在。\n");
										SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
	            						printf("3点生命从你的伤口里流失。\n\n*你的恐惧提升了。\n");
	            						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
	            						fear+=1;
										hp-=3;
										i+=1; 
										Sleep(1000);}
				else printf("\n你决定搜查别的地方。\n");}
			else if(i==0&&room==4){i+=1;
							printf("你走近检查墙上的画像。\n");
							Sleep(300);
							printf("相框上蒙着厚厚的灰尘，你用手擦拭着。\n一张泛黄的黑白照片躺在玻璃之后，照片上的男人朝你露出一个凝固的笑容。\n相框里似乎夹着一张纸条。\n");
							Sleep(300);
							printf("\n要取出纸条吗？\n");
							Sleep(300);
							printf("\n1.是    0.否\n");
							fflush(stdin);
							scanf("%d",&b);
							if(b==1){printf("你小心翼翼抽出老旧发黄的纸条，展开阅读起来。\n\n“\n     我们的秘密不会被第三个人所知晓。\n\n					Q.于1921”\n");
									Sleep(1000);
									printf("你再抬起头时，察觉到了什么细微的异样。\n照片里的男人不再微笑了，就像你正朝相框内窥视那样，他的视线透过玻璃向你投来。\n");
									Sleep(1000);
									printf("等你意识到那不是错觉之后，他的神情已经带上了逐渐加深的惊恐——也正如你脸上此刻的表情。\n你惊慌地从相框前退开，望着照片里的男人，意识到他正在模仿你的举动。\n");
									Sleep(1000);
									printf("你绷紧了神经，以防备随时可能袭来的攻击，但什么也没有发生。\n相片又恢复了原状，那个男人的笑容隐约透着狰狞。");
									paper=5;
									SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
	 								printf("\n*你产生了新的疑问。\n");
						 			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);}
								else if(b==0)printf("你决定压抑住好奇心。\n");}
			else search(pi,proom,prustyknife,ppaper,pbread,pbook,pbandage,ppeep,pdrinkme);
		       break;
/*移动*/case 2:if(room>=5)i+=1;
				if(room==2){printf("门外静得出奇。\n\n1.推开门     2.返回\n");
                  fflush(stdin);
		         scanf("%d",&a);
		         if(a==1){printf("你推门而出，踏上布满灰尘的走道。\n空气中一丝令人不安的冰冷钻进你的鼻腔。\n");
			    	   Sleep(1000);
			    	   mcs+=1; 
					   PlaySound(TEXT("Reptile bgm.wav"),NULL,SND_FILENAME | SND_ASYNC | SND_LOOP);
					    for(c=0;c<=80;c++)
					    {Sleep(10);
					    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_BLUE);
					   printf("“留下你那颗还在跳动的器官吧。”\n");
					   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
				}
				       tinyjumpscare();
					   printf("你猛地扑向前，躲过来自身后的一击。那记险些削掉你半个脑袋的攻击震颤着墙壁，灰沙从墙壁上纷纷掉落。\n希茨安毫无起伏的话语声中仿佛蕴含着邪恶的底噪，可怖的幻象从身后的雾气里溢出。\n");
					   Sleep(1000);
					   printf("冷汗浸湿了你的脊背，你手脚并用地爬出那些血腥的幻觉的侵蚀范围，扶着墙壁勉强支撑起了身体。\n他从身后截断了你的退路，这个疯狂、残暴的恶灵，从他淡金色的眼睛里汩汩地淌出血似的液体。\n");
					   Sleep(1000);
					   printf("漆黑又庞大，他对你的强烈杀意使你浑身战栗。\n整条走道的地面都在他的影响下不住地摇晃，从他站立的地方延伸出数道裂痕，不断向这边扩大着。\n");
					   Sleep(1000);
					   printf("你无法越过希茨安躲回原来的房间，也完全不可能与他的邪恶力量抗衡！只有在被抓住前逃向走道尽头的房间了。\n");
					   Sleep(1000);
					   printf("\n可能导致出戏的提示：以下是尽管我花了差不多一天时间终于研究出怎么写，却还是简陋得可能导致出戏的简陋追逐战环节。\n使用a与d控制你（@）逃离希茨安（C）的追逐。\nps，我要是会多线程就好了，可惜我不会，另外也不会解决清屏函数带来的闪屏问题，凑合着玩吧。\n");
					   printf("————————————————————————\n");
    				   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_BLUE);
    					printf("C");
   						 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
						printf("\n————————————————————————\n");//走廊 
   					 	system("pause");
  					  while(1)
  					  {
  					  while(!kbhit())
  					  {
    				run2++;
    				system("cls");
    				printf("————————————————————————\n");
    				for(run1=0;run1<run2;run1++)printf(" ");
    			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_BLUE);
   		 		printf("C");
   				 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
   				 printf("\n————————————————————————\n");
						printf("\n连击d键逃向走道另一头\n");
  			  	if(run2==(y+3)){printf("GAME OVER");//被逮了 
  			  system("pause");
				deathbycs();
				return 0;}
				}
  				key=getch();
  				  switch(key)
   					 {
   					 case 'a': (y>0 ? --y:y);break;
   					 case 'd': y++;break;
  					  default:break;
   						 }
    				if(run2==(y+3)){printf("GAME OVER");
  					  system("pause");}
   					 if(y==45){system("pause");
   					    system("cls");
						printf("你猛地撞开走道尽头的房门，迅速转身将其反锁上。\n猛烈的攻击接踵而至，门板剧烈地颤抖，就像你的心脏在胸腔里同样剧烈地跳动。\n");//
  			  			Sleep(1000);
  			  			printf("一旦那层屏障被摧毁，届时你将无处可逃。你绝望地抓紧手中唯一的武器，等待着结果的到来。\n");
  			  			Sleep(1000);
  			  			printf("那扇门承受的每一次凶狠的撞击，仿佛都打在你身上那样。\n你的肺部像风箱那样紧张地抽动，手心浸满了汗水。\n");
  			  			Sleep(1000);
  			  			printf("然而，希茨安没能闯进来。\n又几分钟过后，门外的人似乎放弃了攻击。\n隔着紧锁的门，你听见走道上寂静得仿佛从没有人经过。\n");
  			  			Sleep(1000);
  			  			printf("你终于像失去了浑身的力气那样瘫坐下来。\n");
  			  			PlaySound(TEXT("blank bgm.wav"),NULL,SND_FILENAME | SND_ASYNC | SND_LOOP);
  			  			getch();
  			  			printf("死里逃生的经历令你感到更加勇敢了。\n");
  			  			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
	 					 printf("\n*你的勇气提升了。\n");
						  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
						  cou+=1;
  			  			room+=1;
  			  			i=0;
  			  			getch();
  			  			system("cls");
  			  			PlaySound(TEXT("Spiel Mit Mir bgm.wav"),NULL,SND_FILENAME | SND_ASYNC | SND_LOOP);
  			  			break;}
   					 system("cls"); 
   				 printf("————————————————————————\n");
   				 for(run1=0;run1<y;run1++) printf(" ");
    			printf("   @");
   				 printf("\n————————————————————————\n");
}
						}
		         if(a==2)room=2;break;
				  }
				door(proom,penemy,ppeep,php,pfear,patk,psyphp,pskehp,pcshp,pbandage,pi,ptho,pmtho,pmsyp,pmske,pmcs);break;//开门 
/*背包*/case 3:if(room>=5)i+=1;
				self(php,pfear,patk,pcou,prustyknife,ppaper,pbread,pbook,pbandage,ppeep,pdrinkme,ptho,pmtho,pmsyp,pmske,pmcs); 
			   break;
	 }
	}
    }

int *door(int *room,int *enemy,int *peep,int *hp,int *fear,int *atk,int *syphp,int *skehp,int *cshp,int *bandage,int *i,int *tho,int *mtho,int *msyp,int *mske,int *mcs)
{
	srand((unsigned)time(NULL));
	int roll=rand()%(15+1);
	int a,b,c;
	if(roll<=10){printf("门后一片寂静。\n");
				Sleep(300); 
				printf("\n1.推开门     2.返回房间     ");
				if(*peep>0)printf("3.使用窥视孔\n");
				else printf("\n");
				fflush(stdin);
				scanf("%d",&a);
				if(a==1){printf("你推门而出。\n眼前只有一条空荡荡的走廊。\n");
					Sleep(1000);
		/*无敌*/	if(*enemy<=10){printf("你小心翼翼地穿过了走廊，推开尽头的房门。");
								*room+=1;
							    *i=0;
								system("pause");
								system("cls");}
			    	    else if(*enemy>10&&*enemy<=12){fight_syphy(hp,fear,atk,syphp,bandage,msyp);}//梅梅
			   	  		else if(*enemy>12&&*enemy<=14){fight_ske(hp,fear,atk,skehp,bandage,mske);}//骷髅
		/*托马斯*/ 		else if(*enemy>14&&*enemy<=16){mtho+=1;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED);
				   				printf("“随便为陌生人开门是很危险的，你不明白吗，朋友？”\r");
				  				tinyjumpscare();
				  				Sleep(800);
				  				knockth();
				  				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
				   				printf("你惊恐地连连后退，托马斯那双邪恶的紫色眼睛闪烁着，像蛰伏在烟尘里的野兽。\n");
				   				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED);
				   				printf("“他们竟然还没有挖开你的胸腔。是因为你够走运呢，还是逃得够快呢？”\n");
				   				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
				   				printf("你僵硬的手终于摸索着拔出了武器，准备面对新一轮凶险的战斗。\n他疯狂的笑声却已经消失在远处。\n");
				   				Sleep(1000);
				   				printf("确认他已经离开，你小心翼翼地穿过了走廊，推开尽头的房门。\n");
	               				*room+=1;
				   				*i=0;
				   				system("pause");
								system("cls");}//托马斯
				   		else if(*enemy>16&&*enemy<=19){tinyjumpscare();
				   								printf("你以为有什么鬼魂要从阴影中扑出，却只是虚惊一场。\n");
				   								printf("你小心翼翼地穿过了走廊，推开尽头的房门。\n");
	             								 *room+=1;
				 								 *i=0;
												 system("pause");
								system("cls");}//还没写的小饼干
				   		else if(*enemy>19&&*enemy<=20){fight_cs(hp,fear,atk,cshp,bandage,mcs);}//希茨安 
						   } 
			     else if(a==2)printf("你决定先按兵不动。\n");
				 else if(a==3&&*peep>0){printf("你将窥视孔贴在门上，凑近小孔向外窥探。\n");
				 						Sleep(1000);
				 						*peep-=1; 
				 			/*无敌*/	if(*enemy<=10){printf("门外空空荡荡，什么东西也没有。\n");
														printf("\n1.推开门     2.返回房间\n");
														fflush(stdin);
														scanf("%d",&b);;
														if(b==1){printf("你小心翼翼地穿过了走廊，推开尽头的房门。");
	               										*room+=1;
				   										*i=0;
				   										system("pause");
														system("cls");}
				   										else if(b==2)printf("你决定先按兵不动。\n");} 
				   						else if(*enemy>10&&*enemy<=12){printf("梅梅正站在门后。\n她低垂着头颅，树根一样干枯的棕发散落下来，遮住了她大半张布满瘢痕的面庞。\n她正注视着自己那只畸形的手臂，在寂静中等待你打开这道门。\n");
				   										printf("\n1.推开门     2.返回房间\n");
				   										fflush(stdin);
				   										scanf("%d",&b);
														if(b==1)fight_syphy(hp,fear,atk,syphp,bandage,msyp);
														else if(b==2)printf("你决定先按兵不动。\n");}
										else if(*enemy>12&&*enemy<=14){printf("你清晰地看见一只甲虫黝黑的腹部。\n它摆动着多毛的节肢爬过孔洞，发出窸窸窣窣的声响。\n走道的墙壁上爬满了密密麻麻黑红相间的斑块，飞舞的虫影令你看不清细节。\n");
														printf("\n1.推开门     2.返回房间\n");
				   										fflush(stdin);
				   										scanf("%d",&b);
				   										if(b==1)fight_ske(hp,fear,atk,skehp,bandage,mske);
														else if(b==2)printf("你决定先按兵不动。\n");}
										else if(*enemy>14&&*enemy<=16){printf("门外空空荡荡，什么东西也没有。\n");
														Sleep(1000);
														tinyjumpscare();
														SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED);
														printf("“当心被人把眼睛挖掉啊，朋友。”\n");
														SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
														Sleep(1000);
														printf("一只紫色眼睛猛然贴近窥视孔，向屋内射来邪恶的视线，你吓得连退几步。\n你的反应令门外的人哈哈大笑，他紫色的瞳孔逐渐淡化，幻觉一般消散在走廊的空气中。\n"); 
														Sleep(1000);
														printf("门外空空荡荡，什么东西也没有。\n");
														printf("\n1.推开门     2.返回房间\n");
														fflush(stdin);
														scanf("%d",&b);
														if(b==1){printf("你小心翼翼地穿过了走廊，推开尽头的房门。");
	               										*room+=1;
				   										i=0;
				   										system("pause");
														system("cls");}
				   										else if(b==2)printf("你决定先按兵不动。\n");}
										else if(*enemy>16&&*enemy<=18){printf("一片鬼火似的绿色充斥了门后的空间。\n");
														Sleep(1000);
														printf("你观察许久，直到你意识到那是一只绿色的瞳孔。\n");
														Sleep(1000);
														tinyjumpscare();
														SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
														for(int e=0;e<=150;e++){Sleep(10);printf("死寂");}
														for(int r=0;r<=150;r++){Sleep(10);printf("你看到了什么");}
														printf("你");Sleep(100);printf("在");Sleep(100);printf("我");Sleep(100);printf("的");Sleep(100);printf("房");Sleep(100);printf("子");Sleep(100);printf("里");Sleep(100);printf("寻");Sleep(100);printf("找");Sleep(100);printf("什");Sleep(100);printf("么");Sleep(100);printf("？");Sleep(100);
														Sleep(2000);
														printf("\n\n*你的恐惧提升了。\n");
	                                            		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
			   	                                		*fear+=1;
			   	                                		printf("旧日的幽灵在尖啸声中消散了，你痛苦地捂住脑袋。\n眼前的一切是那么地阴森而诡谲，阴影里仿佛随时要跳出什么撕碎你的咽喉。\n");
			   	                                		Sleep(1000);
														printf("等眩晕感消退了，门外已经空空荡荡。\n");
														printf("\n1.推开门     2.返回房间\n");
														fflush(stdin);
														scanf("%d",&b);
														if(b==1){printf("你小心翼翼地穿过了走廊，推开尽头的房门。");
	               										*room+=1;
				   										*i=0;
				   										system("pause");
														system("cls");}
				   										else if(b==2)printf("你决定先按兵不动。\n");}
				   						else if(*enemy>19&&*enemy<=20){printf("不祥的黑色雾气弥漫在走道里。\n你只能隐约看清一个长发披肩的轮廓。\n");
				   										printf("\n1.推开门     2.返回房间\n");
														fflush(stdin);
														scanf("%d",&b);
														if(b==1)fight_cs(hp,fear,atk,cshp,bandage,mcs);
										   				else if(b==2)printf("你决定先按兵不动。\n");}
				 }
				 }
	else{printf("在推门而出前，你预感到……门后可能有什么东西。\n");
			     Sleep(300);
			     printf("\n1.推开门     2.“谁在外面？”     3.返回房间\n");
			     fflush(stdin);
				 scanf("%d",&a);
			     if(a==1){printf("你推门而出。\n眼前只有一条空荡荡的走廊。\n");
			       		Sleep(1000);
		/*梅梅*/      	if(*enemy>0&&*enemy<=4){fight_syphy(hp,fear,atk,syphp,bandage,msyp);}
		/*骷髅*/  		else if(*enemy>4&&*enemy<=8){fight_ske(hp,fear,atk,skehp,bandage,mske);}//骷髅
   	 /*托马斯*/    		else if(*enemy>8&&*enemy<=12){SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED);
				   				printf("“你从门下的缝隙里看到我站在那儿了不是吗？”\r");
				   				tinyjumpscare();
				   				Sleep(800);
				   				knockth2();
				   				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
				   				printf("你惊恐地连连后退，托马斯那双邪恶的紫色眼睛闪烁着，像蛰伏在烟尘里的野兽。\n");
				   				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED);
				   				printf("“虽然我也从不敲门，但你就是不明白贸然开门可能会死对吗？”\n");
				   				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
				   				printf("你神情中流露出的恐惧让他爆发出一阵邪恶的大笑。\n当你僵硬的身体重新准备好了一场恶战，他疯狂的笑声却已经消失在远处。\n");
				   				Sleep(1000);
				   				printf("确认他已经离开，你小心翼翼地穿过了走廊，推开尽头的房门。\n");
	               				room+=1;
				   				*i=0;
								system("pause");
								system("cls");}//托马斯
				   		else if(*enemy>12&&*enemy<=18){tinyjumpscare();
				   				printf("你以为有什么鬼魂要从阴影中扑出，却只是虚惊一场。\n");
				   				printf("你小心翼翼地穿过了走廊，推开尽头的房门。\n");
	                			room+=1;
				    			*i=0;
								system("pause");
								system("cls");}//还没写的小饼干
				   		else if(*enemy>18&&*enemy<=20){fight_cs(hp,fear,atk,cshp,bandage,mcs);}//希茨安 
			}
	/*有人吗*/   else  if(a==2){if(*enemy>0&&*enemy<=4){printf("门后传来一声微弱而悲伤的叹息。\n");//梅梅 
									Sleep(300);
			     					printf("\n1.推开门     2.返回房间\n");
			    					fflush(stdin);
									scanf("%d",&b);
									if(b==1)fight_syphy(hp,fear,atk,syphp,bandage,msyp);
									else if(b==2)printf("你决定按兵不动。\n");}
						else if(*enemy>4&&*enemy<=8){printf("门后传来昆虫密集的振翅声。\n暗绿色的污水从脚边的门缝里淌进来。\n");//骷髅
									Sleep(300);
			     					printf("\n1.推开门     2.返回房间\n");
			    					fflush(stdin);
									scanf("%d",&b);
									if(b==1){fight_ske(hp,fear,atk,skehp,bandage,mske);}
									else if(b==2)printf("你决定按兵不动。\n");}
						else if(*enemy>8&&*enemy<=12){printf("你听见门后低沉的笑声。\n");//托马斯
									int roll=rand()%(15+1);
									printf("%d",roll);
									Sleep(300); 
									if(roll>0&&roll<=5){SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED);
										printf("“有一份快件请开门签收。”\n");
										SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
										Sleep(300);
			     						printf("\n1.推开门     2.返回房间\n");
			    						fflush(stdin);
										scanf("%d",&b);
										if(b==1){printf("你推门而出。\n眼前只有一条空荡荡的走廊。\n");
				  									Sleep(1000);
													tinyjumpscare();
													SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED);
													printf("“你");Sleep(100);printf("为");Sleep(100);printf("什");Sleep(100);printf("么");Sleep(100);printf("真");Sleep(100);printf("的");Sleep(100);printf("开");Sleep(100);printf("了");Sleep(100);printf("门");Sleep(100);printf("？”");Sleep(100);
					 				 			    Sleep(500);
													SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
					   								printf("\n你惊恐地连连后退，托马斯那双邪恶的紫色眼睛闪烁着，像蛰伏在烟尘里的野兽。\n");
					   								printf("一阵冰冷的意识流注入你的脑海，像钢针扎穿你后颈的皮肉，在你的脊髓里不断搅动。\n你捂住脑袋无声地尖叫起来。\n");
					   								Sleep(500);
													SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED);
													printf("“希望你喜欢这份恐惧快件……”\n");
													SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
													printf("你在颤栗中勉强站稳脚跟，准备好了迎接一场恶战，他疯狂的笑声却已经消失在远处。\n");
													SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
	               									printf("*你的恐惧提升了。\n");
	   		          				    			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
	        	     				    			*fear+=1;
													Sleep(1000);
									  	 			printf("确认他已经离开，你小心翼翼地穿过了走廊，推开尽头的房门。\n");
	          						   				*room+=1;
									   				*i=0;
													system("pause");
													system("cls");} 
									   	else if(b==2)printf("你决定装作听不见。\n");}
									else if(roll>5&&roll<=10){printf("\n1.推开门     2.返回房间\n");
			    								fflush(stdin);
												scanf("%d",&b);
												if(b==1){printf("你推门而出。\n眼前只有一条空荡荡的走廊。\n");
				  										Sleep(1000);
													  	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED);
											   			printf("“你从门下的缝隙里看到我站在那儿了不是吗？”\r");
									   	   tinyjumpscare();
									   	   Sleep(800);
									   	   knockth2();
									   	   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
									   	   printf("你惊恐地连连后退，托马斯那双邪恶的紫色眼睛闪烁着，像蛰伏在烟尘里的野兽。\n");
									   	   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED);
									   	   printf("“虽然我也从不敲门，但你就是不明白贸然开门可能会死对吗？”\n");
									   	   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
									   	   printf("你神情中流露出的恐惧让他爆发出一阵邪恶的大笑。\n当你僵硬的身体重新准备好了一场恶战，他疯狂的笑声却已经消失在远处。\n");
									   	   Sleep(1000);
									   	   printf("确认他已经离开，你小心翼翼地穿过了走廊，推开尽头的房门。\n");
	       						           *room+=1;
								   		   *i=0;
											system("pause");
											system("cls");}
								   		else if(b==2)printf("你决定按兵不动。\n");}	
								   	else if(roll>10&&roll<=15){SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED);
								   			printf("“敲敲门。”\n");
								   			Sleep(300); 
								   			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
											printf("\n0.“谁在那？”     1.推开门     2.返回房间\n");
											fflush(stdin);
											scanf("%d",&b);
											if(b==1){printf("你推门而出。\n眼前只有一条空荡荡的走廊。\n");
				  									Sleep(1000);
													tinyjumpscare();
													SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED);
													printf("“你");Sleep(100);printf("就");Sleep(100);printf("是");Sleep(100);printf("这");Sleep(100);printf("么");Sleep(100);printf("自");Sleep(100);printf("以");Sleep(100);printf("为");Sleep(100);printf("是");Sleep(100);printf("对");Sleep(100);printf("吗");Sleep(100);printf("？”");Sleep(100);
													Sleep(500);
													SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
					   								printf("\n你惊恐地连连后退，托马斯那双邪恶的紫色眼睛闪烁着，像蛰伏在烟尘里的野兽。\n");
					   								printf("一阵冰冷的意识流注入你的脑海，像钢针扎穿你后颈的皮肉，在你的脊髓里不断搅动。\n你捂住脑袋无声地尖叫起来。\n");
					   								Sleep(500);
													SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED);
													printf("“如果敲敲门笑话对你来说这么无聊，那你觉得这个怎么样？”\n");
													SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
													printf("你在颤栗中勉强站稳脚跟，准备好了迎接一场恶战，他疯狂的笑声却已经消失在远处。\n");
													SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
	               									printf("*你的恐惧提升了。\n");
	   		          				 			   	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
	        	     				  			  	*fear+=1;
													 Sleep(1000);
									  			 	printf("确认他已经离开，你小心翼翼地穿过了走廊，推开尽头的房门。\n");
	          						   				*room+=1;
									 		  		*i=0;
													system("pause");
													system("cls");}
											else if(b==0){SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED);
													printf("“于奇。”\n");
													Sleep(500); 
													SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
													printf("\n*“于奇什么？”\n");
													getch();
													SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED);
													printf("“与其死在别人手上，不如现在开门让我解决掉你。”\n");
													SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
													Sleep(500); 
													printf("\n1.推开门     2.返回房间\n");
			    									fflush(stdin);
													scanf("%d",&c);
														if(c==2){printf("你决定按兵不动。\n门后传来一阵窃笑声，很快这声音远去了。\n");}
														else if(c==1){printf("你推开了门，托马斯就站在门后。\n");
																	Sleep(500); 
																	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED);
																	printf("“你怎么还真的把门打开了？”\n");
																	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
																	printf("他看着你，露出疑惑的神色，片刻后他大笑起来，在你警惕地躲开之前伸手拍了拍你的肩膀。\n");
																	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED);
																	printf("“我欣赏你以身试法的勇气……在你碰上真正打算要你命的那些家伙之前。”\n");
																	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
																	printf("他的身影伴随着低笑声消散在空气里。\n");
																	*tho+=1;
																	Sleep(1000);
									   	  							printf("确认他已经离开，你小心翼翼地穿过了走廊，推开尽头的房门。\n");
	       											          		*room+=1;
								   							 	    *i=0;
																	system("pause");
																	system("cls");}}
								   			else if(b==2)printf("你决定按兵不动。\n门后传来一阵窃笑声，很快这声音远去了。\n");}}
					else if(*enemy>12&&*enemy<=18){printf("门后一片寂静。\n");
												printf("\n1.推开门     2.返回房间\n");
			    								fflush(stdin);
												scanf("%d",&b);
												if(b==2)printf("你决定按兵不动。\n");
												else if(b==1){printf("你推门而出。\n眼前只有一条空荡荡的走廊。\n");
				  									Sleep(1000);
				  									tinyjumpscare();
				  									printf("你以为有什么鬼魂要从阴影中扑出，却只是虚惊一场。\n");
				  									 printf("你小心翼翼地穿过了走廊，推开尽头的房门。\n");
	              									*room+=1;
				 									*i=0;
				 									system("pause");
													system("cls");}}
					else if(*enemy>18&&*enemy<=20){printf("门后一片寂静。\n");//希茨安 
												printf("\n1.推开门     2.返回房间\n");
			    								fflush(stdin);
												scanf("%d",&b);
												if(b==2)printf("你决定按兵不动。\n");
												else if(b==1){printf("你推门而出。\n眼前只有一条空荡荡的走廊。\n");
				  									Sleep(1000);
				  									tinyjumpscare();
				  									fight_cs(hp,fear,atk,cshp,bandage,mcs);}}
					}
				 if(a==3)printf("你决定先按兵不动。\n");
}
}



int *fight_syphy(int *hp,int *fear,int *atk,int *syphp,int *bandage,int *msyp)
{
					*msyp+=1;
				   int b,c;
				   printf("一个丑陋的仙子降临在你的面前。\n她干枯的手臂从空无里伸出来，环绕你的脖颈。\n那一片暗红色疮疤仿佛从面容的外部开始延伸。\n");
			       tinyjumpscare();
		/*梅梅*/   while(*syphp>0)
			       {
			       	//死亡 
			       	if(*fear>=10){scaredbysyp(); 
					   return 0;}
					if(*hp<=0){deathbysyp();
					   return 0;}
			       srand((unsigned)time(NULL));
	               int roll=rand()%(15+1);
			       printf("%d",roll);
			       Sleep(300);
			       //你的回合 
			       printf("\n你的生命：%d      你的恐惧：%d\n1.攻击   2.使用物品   3.逃跑\n\n",*hp,*fear);
				   fflush(stdin);
		           scanf("%d",&b);
		           switch(b)
		            {
		           	  case 1:if(roll>=5){
						     printf("你攻击面前的鬼魂。\n造成了%d点伤害。\n",*atk);
						     *syphp-=*atk;}
						     else printf("你攻击面前的鬼魂。\n她原来所在的影子消散了，出现在你的另一侧。\n");
							 break;
					  case 2:printf("使用什么？*提示：有的物品无法在战斗时使用\n\n1.绷带 %d\n",*bandage);
					         scanf("%d",&c);
					         if(c==1&&*bandage>0){printf("你紧急包扎了自己的伤口，3点生命重新回到你的身体里。\n");
					         *hp+=3;} 
							 else if(c==1&&*bandage==0)printf("你没有绷带了！");break;
					  case 3:printf("你决定撤退回房间。\n");
					         if(roll>=7)printf("梅梅想要将你拖回走廊。\n但你甩开了她手臂的纠缠，退回房间紧紧关上了门。\n");
					         else if(roll>12)printf("梅梅想要将你拖回走廊。\n但她最终在离你一步之遥时停了下来，看着你退回房间之中。\n"); 
					         else if(roll<7)printf("梅梅重新抓住了你！逃离失败了。\n"); break;
				    }
			       if(b==3&&roll>=7)break;
			       Sleep(300);
			       //对手回合 
			       if(roll<=3){printf("梅梅用她藤蔓般死灰色的右手抚摸过你的脸颊。\n她露出的哀伤笑容令你毛骨悚然。\n");
			       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
	               printf("*你的恐惧提升了。\n");
	               SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
	               *fear+=1;}
	               else if(roll>3&&roll<=6){printf("丑陋的事物在狭长的走道里涌动。\n你因她面颊上那片活物般的红色疤痕而颤抖不已。\n");
	               SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
	               printf("*你的恐惧提升了。\n");
	               SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
				   *fear+=1;}
				   else if(roll>6&&roll<=9){printf("梅梅用她完好的左手指甲扎入你的皮肤。\n你感到疼痛！这造成了5点伤害。\n");
				   *hp-=5;}
				   else if(roll>9&&roll<=12)printf("梅梅想要继续伤害你，但不知为何她停了下来，丑陋的脸上流露出怪异的悲悯神情。\n");
				   else if(roll>12&&roll<=15){printf("梅梅用什么锋利的东西划开你的皮肉。\n这造成了7点伤害。\n");
				   *hp-=7;}
			       }
}

int *fight_ske(int *hp,int *fear,int *atk,int *skehp,int *bandage,int *mske)
{
						*mske+=1;
						int b,c;
						printf("你听见虫子窸窸窣窣的涌动声。\n走廊的墙壁上，黑红相间的鲜艳甲虫潮水般从缝隙中倾泄而下。\n无数密密麻麻的虫类聚拢到你身前的地面上，层叠着组成人类的外形。\n");
			            tinyjumpscare();
		/*骷髅*/        while(*skehp>0)
			            {
			            //死亡 
			       	    if(*fear>=10){scaredbyske(); 
					       return 0;}
					    if(*hp<=0){deathbyske();
					       return 0;}
			           srand((unsigned)time(NULL));
	                   int roll=rand()%(15+1);
			           printf("%d",roll);
					   if(b==3&&roll>=7)break;
					   Sleep(300);
			           //你的回合 
			           printf("\n你的生命：%d      你的恐惧：%d\n1.攻击   2.使用物品   3.逃跑\n\n",*hp,*fear);
				       fflush(stdin);
		               scanf("%d",&b);
		               switch(b)
		                {
		               	  case 1:if(roll>=5){
					    	     printf("你攻击面前的骷髅。\n造成了%d点伤害。\n",*atk);
					    	     *skehp-=*atk;}
					    	     else printf("你攻击面前的骷髅。\n葬甲蜂拥而上，替那具白骨挡下了这一击。\n");
					    		 break;
					      case 2:printf("使用什么？*提示：有的物品无法在战斗时使用\n\n1.绷带 %d\n",*bandage);
					             scanf("%d",&c);
					             if(c==1&&*bandage>0){printf("你紧急包扎了自己的伤口，3点生命重新回到你的身体里。\n");
					             hp+=3;} 
					    		 else if(c==1&&*bandage==0)printf("你没有绷带了！");break;
					      case 3:printf("你决定撤退回房间。\n");
					             if(roll>=7)printf("骷髅想要将你拖回走廊。\n但你甩开了蜂拥而至的虫群的纠缠，退回房间紧紧关上了门。\n");
					             else if(roll>12)printf("骷髅想要将你拖回走廊。\n但他沾满泥泞的骨节没能拽住你的衣角。\n"); 
				    	         else if(roll<7)printf("骷髅重新抓住了你！逃离失败了。\n");break;
				   }
			       if(b==3&&roll>=7)break;
			       Sleep(300);
			           //对手回合 
			           if(roll<=3){printf("虫群在那具森森的白骨间涌动，穿梭过他的肋骨和眼眶。\n那具骷髅上密集的甲虫向你摆出了人脸般的微笑。\n");
			           SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
	                   printf("*你的恐惧提升了。\n");
	                   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
	                   *fear+=1;}
	                   else if(roll>3&&roll<=6){printf("腐烂的气味和脓液淌出那件挂在骷髅上的风衣。\n邪恶的红黑色雾云遮蔽了整条走道。\n湿冷的气味仿佛身处墓穴之中。\n");
	                   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
	                   printf("*你的恐惧提升了。\n");
	                   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
				       *fear+=1;}
				       else if(roll>6&&roll<=9){SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_RED);
					   printf("\n“回归尘土之中。”\n");
					   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
					   printf("成千上万的虫子附在那具骷髅上，开始一同振翅。\n共鸣的声响使墙壁的灰沙扑簌簌地掉落。\n那声音像是一个鬼魂在墓中发出的狂笑。\n");
				       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
	                   printf("*你的恐惧提升了。\n");
	                   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
				       *fear+=1;}
				       else if(roll>9&&roll<=12){printf("翻涌的虫群中伸出化为枯骨的手臂，抓向你的咽喉。\n你避过了要害，却依然被划伤。\n这造成了5点伤害。\n");
				       *hp-=5;}
				       else if(roll>12&&roll<=15){printf("红色脊背的葬甲不知何时爬到了你的身上，正将你的血肉当作腐肉般噬咬着。\n你慌忙将其拍打下来，这造成了7点伤害。\n");
				       *hp-=7;}
			           }
}

int *fight_cs(int *hp,int *fear,int *atk,int *cshp,int *bandage,int *mcs)
{
					*mcs+=1;
					int b,c;
					for(c=0;c<=50;c++)
					    {Sleep(10);
					    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_BLUE);
					   printf("“你以为自己能逃到哪里去？”\n");
					   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
						}
				   printf("有什么残暴又冰冷的东西悄然而至，那个身影出现在你眼前，散发出极度邪恶的气息。\n那满溢出来的暴虐与仇恨令你浑身战栗。\n");
			       tinyjumpscare();
	  /*希茨安*/   while(*cshp>0)
			       {
			       	//死亡 
			       	if(*fear>=10){scaredbycs(); 
					   return 0;}
					if(*hp<=0){deathbycs();
					   return 0;}
			       srand((unsigned)time(NULL));
	               int roll=rand()%(15+1);
			       printf("%d",roll);
			       Sleep(300);
			       //你的回合 
			       printf("\n你的生命：%d      你的恐惧：%d\n1.攻击   2.使用物品   3.逃跑\n\n",*hp,*fear);
				   fflush(stdin);
		           scanf("%d",&b);
		           switch(b)
		            {
		           	  case 1:if(roll>=5){
						     printf("你攻击面前的恶灵。\n造成了%d点伤害。\n",*atk);
						     *cshp-=*atk;}
						     else printf("你攻击面前的恶灵。\n但根本无法捉摸他的存在之处。\n");
							 break;
					  case 2:printf("使用什么？*提示：有的物品无法在战斗时使用\n\n1.绷带 %d\n",*bandage);
					         scanf("%d",&c);
					         if(c==1&&*bandage>0){printf("你紧急包扎了自己的伤口，3点生命重新回到你的身体里。\n");
					         *hp+=3;} 
							 else if(c==1&&bandage==0)printf("你没有绷带了！");break;
					  case 3:printf("你决定撤退回房间。\n");
					         if(roll>=7)printf("希茨安想要将你拖回走廊。\n但你甩脱了那些冰冷又残酷的手掌，退回房间紧紧关上了门。\n");
					         else if(roll>12)printf("希茨安想要将你拖回走廊。\n你拼尽全力摆脱了他，关门前你看见他眼中燃烧的暴虐的火焰越发旺盛。\n"); 
					         else if(roll<7)printf("希茨安重新抓住了你！逃离失败了。\n"); break;
				    }
			       if(b==3&&roll>=7)break;
			       Sleep(300);
			       //对手回合 
			       if(roll<=3){SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_BLUE);
				   printf("“我要把你开膛破肚，取走那颗脆弱又温暖的东西……”\n");
				   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
				   printf("希茨安的声音仿佛火湖里翻腾的邪恶存在，黑色的雾气里弥漫出腐尸的不祥气味。\n强烈的恐惧席卷了你的大脑，你看见了自己血淋淋的四分五裂的幻象。\n");
			       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
	               printf("*你的恐惧提升了。\n");
	               SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
	               *fear+=2;}
	               else if(roll>3&&roll<=6){printf("血样的鲜红液体灌注进希茨安的眼眶，从他苍白的脸颊滚滚淌下。\n");
	               SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_BLUE);
				   printf("“踩碎你的内脏，扯出你的肠子和眼珠……”\n");
				   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
				   printf("那些黏液在可怖的阴影中涌动，化为有形的巨大触角，向你笼罩而来。\n其中夹杂的碎肉与破碎内脏般的东西令你止不住呕吐的欲望。\n");
	               SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
	               printf("*你的恐惧提升了。\n");
	               SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
				   *fear+=2;}
				   else if(roll>6&&roll<=9){printf("虐杀的原始冲动弥漫在空气中，看不见的利刃扎入你的皮肉之下，在你的躯体上钻出一个空洞。\n血喷涌而出！你在绝望与痛苦中摇摇欲坠。\n这造成了10点伤害。\n");
				   *hp-=15;}
				   else if(roll>9&&roll<=12){SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_BLUE);
				   printf("“受死吧……像被钉在架子上的人一样受难吧。”\n");
				   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
				   printf("层层叠叠的血浪从走道尽头奔涌而来，盖过了你震颤不已的视线。\n残酷的幻觉在你眼前飞速闪过。\n希茨安狠狠刺穿了你的手掌。这造成了14点伤害。\n");
				   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
	               printf("*你的恐惧提升了。\n");
	               SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
				   *hp-=14;
				   *fear+=1;}
				   else if(roll>12&&roll<=15){printf("希茨安低声呢喃着残忍的言语。\n毁坏的欲望共振般影响着你的大脑，你痛苦地试图抵御。\n他将你的皮肉划得鲜血淋漓。这造成了7点伤害。\n");
				   *hp-=10;}
			       Sleep(300);
			       }
} 

int *self(int *hp,int *fear,int *atk,int *cou,int *rustyknife,int *paper,int *bread,int *book,int *bandage,int *peep,int *drinkme,int *tho,int *mtho,int *msyp,int *mske,int *mcs)
{
	srand((unsigned)time(NULL));
	int roll=rand()%(15+1);
	int b,c,d;
	char a;
	system("cls");
	printf("*按下w查看你的状态与物品\n\n*按下q查看你的疑问\n");
	fflush(stdin);
	a=getch();
	if(a=='q'||a=='Q'){system("cls");
		printf("你在探索这个地方的过程中会产生疑问。\n收集到的线索会显示在每条疑问之中，继续抽丝剥茧以解开谜团。\n被解决的疑问将以绿色显示，它们有助于你接下来的探索，甚至可能救你一命。\n\n");
		while(d!=0)
		{
			printf("0.返回\n\n");
			printf("1.你的所在\n");
			printf("2.托马斯的身份\n");
			if(*msyp!=0)printf("3.梅梅的身份\n");
			if(*mske!=0)printf("4.骷髅的身份\n");
			if(*mcs!=0)printf("5.希茨安的身份\n");
			printf("6.相片上的男人\n");
			fflush(stdin);
			scanf("%d",&d);
			switch(d)
			{
				case 0:system("cls");break;
				case 1:printf("你醒来后发现自己身处陌生的房间中。\n并且，走廊以外是房间，房间的房间以外还是房间。\n你在什么地方？你的身上发生了什么？这些你都一概不知。\n");break;
				case 2:printf("这个找尽办法只为吓你一跳的男人到底是谁？\n");break;
				case 3:if(*msyp!=0)printf("这个面颊上有着可怖瘢痕、手臂畸形萎缩的女人是什么人？\n");
					else printf("你还没有产生这个疑问。\n");break; 
				case 4:if(*mske!=0)printf("这个由虫群组成的骷髅到底是什么？\n");
					else printf("你还没有产生这个疑问。\n");break;
				case 5:if(*mcs!=0)printf("这个人似乎不顾一切地想杀死其他人，但是为什么？他又是谁？\n");
					else printf("你还没有产生这个疑问。\n");break;
				
			}
		}
	}
	else if(a=='w'||a=='W'){system("cls");
    printf("你现在装备着生锈的小刀\n你的生命为%d，你的攻击力为%d\n你的勇气为%d，你的恐惧为%d\n",*hp,*atk,*cou,*fear);
	printf("1.生锈的小刀×%d  2.纸片×%d  3.发霉的面包×%d  4.童话故事书×%d  5.绷带×%d  6.透明液体×%d  7.窥视孔×%d\n",*rustyknife,*paper,*bread,*book,*bandage,*drinkme,*peep);
	Sleep(300);
	printf("使用什么？\n\n0.算了\n");
	scanf("%d",&b);
	switch(b)
	{
		case 1:printf("*一把锈迹斑斑的小刀，仿佛随时都有折断的危险。\n\n0.返回    1.割腕\n");
			   scanf("%d",&c);
			   if(c==1){printf("你用这把刀划开了自己的手腕。\n血涌了出来，你疼得咬牙切齿。\n3点生命从你身体里流失。\n");
			   *hp-=3;}
			   break;
		case 2:printf("*这些残破的纸片被你从角落找到，似乎散落在各个房间。\n它们的笔迹有的各不相同。\n\n0.返回  1.查看纸片1");
			   if(*paper==2)printf("  2.查看纸片2");
			   if(*paper==3)printf("  2.查看纸片2  3.查看纸片3\n");
			   if(*paper==4)printf("  2.查看纸片2  3.查看纸片3  4.查看纸片4\n");
			   if(*paper==5)printf("  2.查看纸片2  3.查看纸片3  4.查看纸片4  5.查看纸片5\n");
			   scanf("%d",&c);
			   if(c==1)printf("“这个囚笼，这个每时每刻都在变化着自身的地狱，\n它将所有想要逃离的人逼上残暴的道路。\n我清楚自己已经死了，但是一个死人会写日记吗？”\n");
			   if(c==2)printf("“我到底在什么地方？我已经变成了什么？\n我的工作，我原本的生活已经离我远去了。\n电台怎么样了？……我的妹妹，她怎么样了呢？”\n");
			   if(c==3)printf("“我总算是逃了出来……好险，这次我伤得好重，\n不过没关系，鬼魂虽然会流血，却也不至于失血而死。\n那个叫希茨安的人……他或者她，到底是怀着多强烈的恶意和残忍，想要离开这个地方？\n太危险了，他一定还在附近四处寻找我。\n我得赶快离开这里才行。”\n");
				if(c==4)printf("“竟然活了下来，恭喜！（虚情假意地）\n我可不太希望你死，因为那样希茨安随后会来找我的麻烦。\n真是个恐怖的人啊，哈哈哈。我已经躲了他非常久了，但如果你还打算离开这里，就别想着一味逃避战斗。\n——前提是你不至于弱到把自己玩死。他的恶意会影响这栋屋子，你会明白什么意思的。”\n");
				if(c==5)printf("“\n     我们的秘密不会被第三个人所知晓。\n\n					Q.于1921”\n");
				break;
		case 3:if(*bread==0)printf("你没有面包了。\n");
					       else if(*bread>=0){printf("这块长满霉菌的面包已经在房间的角落放了不知多久。\n\n0.返回   1.吃掉\n");
					       scanf("%d",&c);
			   	           if(c==1&&bread!=0){printf("你捏着鼻子吞下了这块面包。\n很神奇，它上面腐败的菌落似乎对你造不成影响。\n你的生命回复了3点。");
							  *hp+=3;
							  *bread-=1;}}break;
					case 4:if(*book==0)printf("你没有故事书了。\n");
					       else if(*book>=0){printf("这是一本又脏又破的童话故事书。\n\n0.返回   1.阅读\n");
					       scanf("%d",&c);
			   	           if(c==1&&*book!=0){if(roll<=10){printf("在这个充斥邪恶与危险的地方，只有温馨的童话故事能给予你一丝心灵上的抚慰。\n");
			   	                         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
	  									printf("*你的恐惧降低了。\n");
	 									 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
	 									 *fear-=1;
							   			}
			   	                    else{printf("试图在童话故事中寻找心灵慰藉的你被这本童话黑暗的内涵所震撼。\n它加深了你的不安与恐惧。\n");
			   	                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
	                                            printf("*你的恐惧提升了。\n");
	                                            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
			   	                                *fear+=1;}
							  		*book-=1;}}break;
					case 5:if(*bandage>=0){printf("一卷沾着深色液体的绷带，不知是否曾经被使用过。\n\n0.返回   1.使用\n");
					       scanf("%d",&c);
			   	           if(c==1&&*bandage!=0){printf("你笨拙地用绷带包扎好伤口。\n你的生命回复了5点。\n");
							  *hp+=5;
							  *bandage-=1;}}
							else printf("你没有绷带了。\n");
							break;
					case 6:if(*drinkme>=0){printf("一罐在玻璃罐里闪闪发亮的透明液体。\n罐子表面贴着手写的字条“喝掉我（DRINK ME）”。\n\n0.返回   1.喝掉\n");
						   		scanf("%d",&c);
			   	           		if(c==1&&*drinkme!=0){printf("你谨慎地打开罐子，凑近闻了闻液体的气味。\n它闻起来像铁锈。\n你鼓起勇气，仰头将之灌进喉咙里。\n冰凉的液体下肚，你突然感觉头晕目眩，眼前的一切开始无端地变化，无规律地放大缩小着。\n迷幻的感觉过了好一阵才消退。你的胃不舒服。\n");
			   	             	 Sleep(1000);
								  printf("\n20点生命回到你的身体里，但你感觉很是恶心。\n"); 
			   	            	  *hp+=20;
			   	      	        *drinkme-=1;}}
							else printf("你没有这件物品了。\n");
							break;
					case 7:if(*peep==0)printf("你没有这件物品。\n");
						   else if(*peep>=0)printf("一枚圆形的窥视孔。\n不知什么原理，将它贴在门上可以看见门后的情景。\n这件物品无法直接使用。\n");break;
			   }
		}
}

void deathbycs()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
	printf("希茨安贯穿了你的颈动脉，鲜红夺目的血从豁口喷涌而出。\n你在剧痛中不住痉挛着，瞳孔逐渐失去焦距。\n");
	Sleep(1000);
	printf("冰凉的利器扎进你的腹腔，猛地切断抽搐不已的肌肉群。\n那颗心脏暴露在空气中，微弱地泵动着，那张脸上浮现出残酷的微笑。\n");
	Sleep(1000);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_BLUE);
	printf("“它对你已经没意义了，你就留在这里腐烂吧。”\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
	Sleep(1000);
	printf("随着动脉的断裂声，最后的生命体征也离开你的身体。\n那个邪恶的身影消失在门的背后，去寻找下一个牺牲者。\n");
	Sleep(1000);
	printf("\n        *游戏结束*");
	getch();
}

void scaredbycs()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
	printf("不断膨胀的恐惧将你的心脏压迫到了极限。\n眼前极端可怖的景象已然使你的心智失衡。\n");
	Sleep(1000);
	printf("你绝望地想逃离眼前的一切，捂住双眼的手指甚至隐隐有抠出自己眼球的欲望。\n");
	Sleep(1000);
	printf("希茨安的声音仿佛他灵魂的本质，冰冷、残酷又邪恶，仍在你耳边咆哮般响起。\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_BLUE);
	printf("“看起来你再也无法逃离这里了。”\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
	Sleep(1000);
	printf("而你只能任凭自己被更加血腥的幻觉淹没——那将不再是幻觉。\n他划开你的胸腔，剖走那颗深红色的心脏。\n");
	Sleep(1000);
	printf("你再也不会疼痛、不会呻吟和喊叫了。\n你躺在冰冷的地面上，坠入深黑的死寂之中。\n");
	Sleep(1000);
	printf("\n        *游戏结束*");
	getch();
}

void deathbyske()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
	printf("虫群的啃咬不断为你添上血红的伤口。\n终于，你无力支撑起已经残缺不全的躯体。\n");
	Sleep(1000);
	printf("你不甘地倒在自己的血泊之中，葬甲立即像潮水那样漫过你的身体。\n它们从你敞开的伤口与腔道鱼贯而入，从内部开始蚕食这具肉体。\n");
	Sleep(1000);
	printf("他将手伸入你仅剩白骨的胸腔之中，攥紧那颗不再跳动的心脏时，你的意识已经彻底消散在这栋受诅咒的屋中。\n");
	Sleep(1000);
	printf("\n        *游戏结束*");
	getch();
}

void scaredbyske()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
	printf("从四面八方袭来的昆虫振翅声，将你的神经逼到了紧绷的极限。\n");
	Sleep(1000);
	printf("你痛苦地哀嚎着，瞪大布满血丝的双眼，紧紧捂住双耳。\n来自墓穴的无尽恐惧已经将你的意志和勇气尽数击溃。");
	Sleep(1000);
	printf("然而，嗡鸣声无法消除，无法停止。虫群在向你发出高昂的尖啸。\n");
	Sleep(1000);
	printf("你精疲力竭地倒在了地上，最后映入眼帘的，是那具骷髅空洞又深黑的眼眶。\n");
	Sleep(1000);
	printf("\n        *游戏结束*");
	getch();
}

void scaredbysyp()//被梅梅吓死 
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
	printf("恐惧……令人喘不过气的恐惧。\n它压垮了你，将你的意志和勇气尽数击溃。\n");
	Sleep(1000);
	printf("绝望和窒息感如潮水般涌来，瞬间吞没了你的头顶。\n你僵硬地睁大干涩的双眼，向后倒在了地上。\n");
	Sleep(1000);
	printf("梅梅走向你逐渐失去生命的身体。\n你最后看到的是她那对悲伤的绿眼睛，像是雨幕中一只被淋湿的野狗。\n");
	Sleep(1000);
	printf("\n        *游戏结束*");
	getch();
	exit(0);
}

void deathbysyp()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
	printf("你的血在不断的创伤中逐渐流干，视野变得一片鲜红。\n");
	Sleep(1000);
	printf("梅梅终于紧扼住了你的咽喉，你脆弱的颈骨在她那双干枯手臂的挤压下，发出直接传达进颅骨的碎裂声。\n");
	Sleep(1000);
	printf("你很快什么也看不见、什么也听不到了。\n");
	Sleep(1000);
	printf("这令人悲伤的一切已经离你远去，而她还有另一些事要做。\n");
	Sleep(1000);
	printf("\n        *游戏结束*");
	getch();
	exit(0);
}

void knockth2()//托马斯在门外的另一个版本
{
					printf("“");
				   Sleep(100);
				   printf("足");
				   Sleep(100);
				   printf("够");
				   Sleep(100);
				   printf("多");
				   Sleep(100);
				   printf("的");
				   Sleep(100);
				   printf("鲜");
				   Sleep(100);
				   printf("血");
				   Sleep(100);
				   printf("和");
				   Sleep(100);
				   printf("痛");
				   Sleep(100);
				   printf("苦");
				   Sleep(100);
				   printf("都");
				   Sleep(100);
				   printf("不");
				   Sleep(100);
				   printf("能");
				   Sleep(100);
				   printf("让");
				   Sleep(100);
				   printf("你");
				   Sleep(100);
				   printf("保");
				   Sleep(100);
				   printf("持");
				   Sleep(100);
				   printf("戒");
				   Sleep(100);
				   printf("备");
				   Sleep(100);
				   printf("吗");
				   Sleep(100);
				   printf("？”            \n");
} 

void knockth()//托马斯在门外 
{
	printf("“");
				   Sleep(100);
				   printf("足");
				   Sleep(100);
				   printf("够");
				   Sleep(100);
				   printf("多");
				   Sleep(100);
				   printf("的");
				   Sleep(100);
				   printf("死");
				   Sleep(100);
				   printf("亡");
				   Sleep(100);
				   printf("和");
				   Sleep(100);
				   printf("恐");
				   Sleep(100);
				   printf("惧");
				   Sleep(100);
				   printf("还");
				   Sleep(100);
				   printf("没");
				   Sleep(100);
				   printf("有");
				   Sleep(100);
				   printf("让");
				   Sleep(100);
				   printf("你");
				   Sleep(100);
				   printf("学");
				   Sleep(100);
				   printf("到");
				   Sleep(100);
				   printf("教");
				   Sleep(100);
				   printf("训");
				   Sleep(100);
				   printf("吗");
				   Sleep(100);
				   printf("？”            \n");
}

int *search(int *i,int *room,int *rustyknife,int *paper,int *bread,int *book,int *bandage,int *peep,int *drinkme)
{
	srand((unsigned)time(NULL));
	int n=rand()%(15+1);
	int b;
    printf("你开始搜索房间。\n");
	if(*i==0&&*room==0){printf("\n你找到了一把生锈的小刀。\n虽然锈迹斑斑，却还算称手。\n\n*你装备了生锈的小刀。\n");
	*rustyknife=1;}
	else if(*i==1&&*room==0){printf("\n你找到了一张纸片。\n“这个囚笼，这个每时每刻都在变化着自身的地狱，\n它将所有想要逃离的人逼上残暴的道路。\n我清楚自己已经死了，但是一个死人会写日记吗？”\n"); 
	*paper=1;}//纸片1
	else if(*i==0&&*room==1){printf("\n你找到了一张纸片。\n“我到底在什么地方？我已经变成了什么？\n我的工作，我原本的生活已经离我远去了。\n电台怎么样了？……我的妹妹，她怎么样了呢？”\n");
	*paper=2;}//纸片2
	else if(*i==0&&*room==2){printf("\n你找到了一张沾着血迹的纸片。\n“我总算是逃了出来……好险，这次我伤得好重，\n不过没关系，鬼魂虽然会流血，却也不至于失血而死。\n那个叫希茨安的人……他或者她，到底是怀着多强烈的恶意和残忍，想要离开这个地方？\n太危险了，他一定还在附近四处寻找我。\n我得赶快离开这里才行。”\n"); 
	*paper=3;}//纸片3 
	else if(*i==0&&*room==3){printf("\n你从房间另一侧的门缝下找到了一张纸片，字迹歪歪扭扭，墨迹未干，似乎是刚写好塞进门缝里的。\n“竟然活了下来，恭喜！（虚情假意地）\n我可不太希望你死，因为那样希茨安随后会来找我的麻烦。\n真是个恐怖的人啊，哈哈哈。我已经躲了他非常久了，但如果你还打算离开这里，就别想着一味逃避战斗。\n——前提是你不至于弱到把自己玩死。他的恶意会影响这栋屋子，你会明白什么意思的。”\n");
	*paper=4;}//纸片4
	else if(*i==1&&*room==3){printf("\n你拉开木桌的抽屉，里面一罐透明液体在玻璃罐里闪闪发亮。\n罐子表面贴着手写的字条“喝掉我（DRINK ME）”。\n");
	*drinkme+=1;} 
	
	else if(n<4&&*i<3){printf("\n你找到了一块发霉的面包。\n");
	*bread+=1;}
	else if(n>=4&&n<7&&*i<3){printf("\n你找到了一本破旧的故事书。\n");
	*book+=1;;}
	else if(n>=7&&n<10&&*i<3)printf("\n你找到了一团垃圾。\n这没什么作用。\n");
	else if(n>=10&&n<12&&*i<3){printf("\n你找到了一卷用过的绷带。\n");
	*bandage+=1;}
	else if(n>=12&&n<15&&*i<3){printf("\n你找到了一枚圆形的窥视孔。\n不知什么原理，将它贴在门上可以看见门后的情景。\n");
	*peep+=1;}
	else if(n=15&&*i<3)printf("\n你什么也没找到。\n");
	else if(*i>=3)printf("\n似乎已经没有新发现了。\n");
	*i+=1;
}

void title()
{
	printf(" _   _                 _            __   _____ _ _            _   \n");
	Sleep(150);
    printf("| | | |               | |          / _| /  ___| (_)          | |  \n");
	Sleep(150);
    printf("| |_| | ___  __ _ _ __| |_    ___ | |_  \\ `--.| |_  ___ _ __ | |_ \n");
	Sleep(150);
    printf("|  _  |/ _ \\/ _` | '__| __|  / _ \\|  _|  `--. \\ | |/ _ \\ '_ \\| __|\n");
	Sleep(150);
    printf("| | | |  __/ (_| | |  | |_  | (_) | |   /\\__/ / | |  __/ | | | |_ \n");
	Sleep(150);
    printf("\\_| |_/\\___|\\__,_|_|   \\__|  \\___/|_|   \\____/|_|_|\\___|_| |_|\\__|\n\n");
	Sleep(300);
	printf("                    寂    静    的    心\n\n"); 
}

void mainmenu()
{
	Sleep(300);
	printf("            0.查看说明     1.进入     2.离开     3.开发者通道（本人测试用）\n");
}

void beginnerguide()
{
	printf("\n***这是第一版新手指南***\n直到现在凌晨两点我坐在电脑前写这段游戏说明，都没想好这个故事的主线发展脉络，我只有一些零散的想实现的点子，所以想到哪写到哪。目前这个故事充满了太多不确定性，只有一点很明确，就是肯定有些必须不做人才能达成的结局。\n因为这是比alpha还alpha的版本，文本都很简陋，能把脉络写完的话再润色吧。"); 
	printf("\n\n***这是第二版新手指南***\n刚把骷髅的战斗写了，回来提醒，打不过记得化身香港记者跑路，因为现阶段写好的流程注定无论是谁你都打不过。\n（除非你有办法让攻击数据溢出）\n（打过了也没意义，我压根还没开始写他们的死亡剧情，哈哈哈）\n"); 
	printf("\n\n***这是第三版新手指南***\n不要乱输选项以外的数字，可能导致无法预料的bug，至于为什么不修这些bug，你看我像有空的样子吗？（嚣张）\n"); 
	fflush(stdin);
	getch();
}

void knocking()
{
	int shake_time = 10; //休眠的时间，为5毫秒
    int shake_distance = 5; //移动了10像素
    RECT rect; //RECT是一个矩形结构体，相当于保存了一个矩形的四条边的坐标
    HWND window = NULL, oldwindow = NULL; //两个窗口句柄
    int x, y, width, height; //用来保存窗口横纵坐标和宽度、高度的变量
    int i;
    //抖50次吧
    for (i = 0; i < 3; i++) {
        window = GetForegroundWindow(); //拿到活动窗口
        if (window != oldwindow) {
            //获取指定窗口的位置
            GetWindowRect(window, &rect);
            x = rect.left;
            y = rect.top;
            width = rect.right - x;
            height = rect.bottom - y;
            oldwindow = window;
        }
        MoveWindow(window, x - shake_distance, y, width, height, TRUE); //移动窗口，向左移动了10像素，下同
        Sleep(shake_time);  //休眠time毫秒，线程休眠
        MoveWindow(window, x - shake_distance, y - shake_distance, width, height, TRUE);
        Sleep(shake_time);
        MoveWindow(window, x, y - shake_distance, width, height, TRUE);
        Sleep(shake_time);
        MoveWindow(window, x, y, width, height, TRUE);
        Sleep(shake_time);
    }
}

void tinyjumpscare()//小幅度跳吓 
{
	int shake_time = 20; //休眠的时间，为5毫秒
    int shake_distance = 10; //移动了10像素
    RECT rect; //RECT是一个矩形结构体，相当于保存了一个矩形的四条边的坐标
    HWND window = NULL, oldwindow = NULL; //两个窗口句柄
    int x, y, width, height; //用来保存窗口横纵坐标和宽度、高度的变量
    int i;
    //抖50次吧
    for (i = 0; i < 3; i++) {
        window = GetForegroundWindow(); //拿到活动窗口
        if (window != oldwindow) {
            //获取指定窗口的位置
            GetWindowRect(window, &rect);
            x = rect.left;
            y = rect.top;
            width = rect.right - x;
            height = rect.bottom - y;
            oldwindow = window;
        }
        MoveWindow(window, x - shake_distance, y, width, height, TRUE); //移动窗口，向左移动了10像素，下同
        Sleep(shake_time);  //休眠time毫秒，线程休眠
        MoveWindow(window, x - shake_distance, y - shake_distance, width, height, TRUE);
        Sleep(shake_time);
        MoveWindow(window, x, y - shake_distance, width, height, TRUE);
        Sleep(shake_time);
        MoveWindow(window, x, y, width, height, TRUE);
        Sleep(shake_time);
    }
}
