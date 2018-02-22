#include<stdio.h>
#include<winsock2.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

typedef struct{

    char* question;
    int answer;
    BOOL yesno;

}QUES;



int main(int argc , char *argv[]){

    srand(time(NULL));
    QUES Q[50];
    Q[0].question ="哆啦A夢最喜愛的食物是？\n\n<1>鯛魚燒   <2>銅鑼燒   <3>豬血糕   <4>老鼠                                                 \n";
    Q[0].answer=2;
    Q[1].question="吹泡泡時候要？\n\n<1>用力吹     <2>向上吹     <3>輕輕吹     <4>全部皆是                                                 \n";
    Q[1].answer=4;
    Q[2].question="中華職棒史上首位百全壘打、百盜壘的球員？\n\n<1>林易增     <2>張泰山     <3>林仲秋     <4>陳致遠                         \n";
    Q[2].answer=2;
    Q[3].question="「但願人長久，千里共嬋娟。」出自蘇軾的何首作品？\n\n<1>水龍吟    <2>念奴嬌      <3>賀新郎    <4>水調歌頭                \n";
    Q[3].answer=4;
    Q[4].question="哪隻不是暴力昆蟲？ \n\n<1>行軍蟻    <2>黑寡婦     <3>殺人蜂    <4>日本大黃蜂                                            \n";
    Q[4].answer=2;
    Q[5].question="「遊子吟」「慈母手中線，遊子身上衣」出自何者？\n\n<1>李白     <2>韋應物    <3> 孟浩然    <4> 孟郊                       \n";
    Q[5].answer=4;
    Q[6].question="雄蟬和雌蟬交配時，身體呈現什麼 形狀？ \n\n<1>一字型     <2>V字型     <3>S字型     <4>I字型                              \n";
    Q[6].answer=2;
    Q[7].question="何者屬於台灣原住民的節慶活動？ \n\n<1>放水燈     <2>豐年祭     <3>載香包     <4>跳童乩                                  \n";
    Q[7].answer=2;
    Q[8].question="地球與月球的距離約可排下幾個地球？ \n\n<1>30      <2>40     <3>10     <4>20                                             \n";
    Q[8].answer=1;
    Q[9].question="有「水果之王」美名的，是哪一種水果？ \n\n<1>柳丁     <2>蘋果     <3>榴槤     <4>西瓜                                    \n";
    Q[9].answer=3;
    Q[10].question="體積固定時，加壓時溫度會上升，減壓則相反，稱為？\n\n<1>亨利定律     <2>理想氣體定律     <3>道爾吞定律     <4>查爾斯定律\n";
    Q[10].answer=4;
    Q[11].question="佛家說的「四大皆空」，四大指的是地、水、火以及？ \n\n<1>風    <2> 金     <3>銀     <4>木                               \n";
    Q[11].answer=1;
    Q[12].question="請問三角柱有幾個面？ \n\n<1>5      <2>3      <3>4      <4>6                                                            \n";
    Q[12].answer=1;
    Q[13].question="地球與太陽之間的距離有多少公里？\n\n<1>一億     <2>五千萬     <3>二億五千萬     <4>一億五千萬                          \n";
    Q[13].answer=4;
    Q[14].question="奧運射箭項目的箭靶有幾個得分區？\n\n <1>8     <2>5     <3>10     <4>6                                                  \n";
    Q[14].answer=3;
    Q[15].question="一個圓形對折三次，請問分成幾等份？\n\n<1> 4     <2> 8      <3> 2      <4> 6                                            \n";
    Q[15].answer=2;
    Q[16].question="「山中相送罷， 日暮掩柴扉，春草年年綠，王孫歸不歸」出自何者？\n\n<1>李商隱    <2>杜甫    <3>王維    <4> 李白           \n";
    Q[16].answer=3;
    Q[17].question="「大蘋果」是哪一個城市的名稱？ \n\n<1>巴黎    <2>紐約    <3>東京   <4>香港                                             \n";
    Q[17].answer=2;
    Q[18].question="電影終極殺陣2(Taxi 2)中，男主角向女主角爸爸謊稱他是？ \n\n<1>警察     <2>老師     <3>醫科學生     <4>消防員            \n";
    Q[18].answer=3;
    Q[19].question="白煮蛋正確的煮法是？\n\n<1>放在枕頭下孵七七四十九天   <2>先水滾，後放蛋   <3>先放蛋，後滾水  <4>詢問劉昂星             \n";
    Q[19].answer=3;
    Q[20].question="鄭經治台時，改國號為什麼國？ \n\n<1>鄭經     <2>西寧     <3>東寧    <4>高砂                                            \n";
    Q[20].answer=3;
    Q[21].question="日本名著的明治神宮，位於？ \n\n<1>山形     <2>東京     <3>大阪     <4>神戶                                             \n";
    Q[21].answer=2;
    Q[22].question="地球目前總共有幾個自然衛星？\n\n<1>數十萬個     <2>難以計算    <3> 一個     <4>數百萬個                                \n";
    Q[22].answer=3;
    Q[23].question="水稻的子葉是屬於？ \n\n<1>單子葉   <2> 雙子葉    <3>多子葉    <4>三子葉                                                \n";
    Q[23].answer=1;
    Q[24].question="具有公信力的調解委員會設置於何者？ \n\n<1>縣市議會    <2>警察局    <3>地方法院    <4>鄉鎮市區公所                      \n";
    Q[24].answer=4;
    Q[25].question="歌劇「費加洛婚禮」為何者作品？\n\n<1>莫札特   <2> 貝多芬    <3>巴哈   <4> 柴可夫斯基                                   \n";
    Q[25].answer=1;
    Q[26].question="水溫降到攝氏幾度以下會結冰？\n\n<1>20      <2>30      <3>0      <4>10                                                  \n";
    Q[26].answer=3;
    Q[27].question="電影少林足球中，大師兄的武功？ \n\n<1>鬼影擒拿手    <2>無堅不摧鐵頭功   <3> 金鐘罩鐵布衫    <4>風火地堂腿              \n";
    Q[27].answer=2;
    Q[28].question="被稱為“第七藝術”的是？ \n\n<1>馬戲團    <2>話劇    <3>電影    <4>電視                                                  \n";
    Q[28].answer=2;
    Q[29].question="「點秋江白鷺沙鷗，傲殺人間萬戶侯，不識字煙波釣叟。」出自何者？\n\n<1>白樸    <2>馬致遠    <3>關漢卿   <4> 鄭光祖       \n";
    Q[29].answer=1;
    Q[30].question="著有道德經，為道家始祖的是？\n\n<1>李鼻    <2>李斯    <3>李威    <4>李耳                                               \n";
    Q[30].answer=4;
    Q[31].question="十三行文化遺址在台北縣哪裡發現？ \n\n<1>八里     <2>陽明山    <3>淡水   <4> 五股                                       \n";
    Q[31].answer=1;
    Q[32].question="請問一般推論中，塔羅牌是首先出現在哪一個國家？ \n\n<1>西班牙    <2>法國     <3>奧匈帝國    <4>義大利                   \n";
    Q[32].answer=4;
    Q[33].question="高氣壓在北半球的流動方向？\n\n<1>向南    <2>不一定    <3>順時針   <4> 逆時針                                           \n";
    Q[33].answer=3;
    Q[34].question="梁朝偉的英文名字？ \n\n<1>Rick     <2>Leon     <3>Simon     <4>Tony                                                    \n";
    Q[34].answer=4;
    Q[35].question="電影「失落的帝國」是以哪一個古文明背景拍攝的？ \n\n<1>亞特蘭提斯    <2>波斯    <3>瑪雅   <4> 埃及                      \n";
    Q[35].answer=1;
    Q[36].question="少量白雲母，最可能之火成岩種類為何？ \n\n<1>花崗岩    <2>輝長岩    <3>橄欖岩    <4>玄武岩                              \n";
    Q[36].answer=1;
    Q[37].question="「入木三分」這句成語是來自於誰的故事？ \n\n<1>張旭    <2>王羲之    <3>郭璞    <4>陸游                                  \n";
    Q[37].answer=2;
    Q[38].question="鐵人三項比賽中，自行車項目的距離為幾公里？\n\n<1>30     <2>20     <3>10     <4>40                                      \n";
    Q[38].answer=4;
    Q[39].question="希臘神話中一年有幾季？\n\n<1>四     <2>三     <3>二   <4>  一                                                          \n";
    Q[39].answer=2;
    Q[40].question="梁朝偉1987年獲香港第6屆電影金像獎最佳男主角獎的作品是？\n\n<1>青春差事     <2>人民英雄     <3>地下情     <4>悲情城市   \n";
    Q[40].answer=2;
    Q[41].question="豬籠草和毛氈苔主要藉由捕食昆蟲以獲得該地區缺乏的何種營養素？\n\n<1>鐵     <2>氮     <3>鉀     <4>碳                    \n";
    Q[41].answer=2;
    Q[42].question="二次大戰期間的諾曼第登陸，發生在哪一個國家？ \n\n<1>法國    <2> 美國     <3>西班牙     <4>荷蘭                         \n";
    Q[42].answer=1;
    Q[43].question="請問下列何者是台中的名產？ \n\n<1>阿給     <2>太陽餅    <3> 臭豆腐    <4> 鴨賞                                         \n";
    Q[43].answer=2;
    Q[44].question="科學小飛俠的隊長是？ \n\n<1>阿龍     <2>鐵雄     <3>珍珍     <4>大明                                                   \n";
    Q[44].answer=2;
    Q[45].question="加入ENERGY前，誰背著吉他唱過民歌餐廳？ \n\n<1>書偉     <2>坤達     <3>牛奶     <4>TORO                                 \n";
    Q[45].answer=1;
    Q[46].question="畫家馬諦斯為何國人？ \n\n<1>法國     <2>英國     <3>德國     <4>丹麥                                                   \n";
    Q[46].answer=1;
    Q[47].question="請問下列何者是宜蘭的名產？ \n\n<1>太陽餅    <2> 阿給     <3>鴨賞     <4>臭豆腐                                         \n";
    Q[47].answer=3;
    Q[48].question="電影「工夫」中，周星馳花了多少錢買了武功秘笈？\n\n<1>2$      <2>5$      <3>20$      <4>10$                             \n";
    Q[48].answer=4;
    Q[49].question="行人過馬路的小綠人跑步號誌，是哪裡發明的？\n\n<1>台灣     <2>英國     <3>新加波     <4>法國                            \n";
    Q[49].answer=1;


    WSADATA wsa;
    WORD version=MAKEWORD(2,1);
    int iResult;
    char* IP;
    int PORT;

    iResult=WSAStartup(version,&wsa);

    printf("\nInitialising Winsock...");

    if (iResult!= 0){
        printf("Failed. Error Code : %d",WSAGetLastError());
        return 1;
    }
    printf("\nIP:");
    scanf("%s",IP);
    printf("\nPORT:");
    scanf("%d",&PORT);

    SOCKET server_socket;
    server_socket=socket(AF_INET,SOCK_STREAM,IPPROTO_TCP);
    if(server_socket==INVALID_SOCKET){
         printf("SOCKET ERROR");
    }

    SOCKADDR_IN addr;
    addr.sin_addr.s_addr=inet_addr(IP);
    addr.sin_family=AF_INET;
    addr.sin_port=htons(PORT);
    int r=bind(server_socket,(SOCKADDR*)&addr,sizeof(addr));
    int l=listen(server_socket,50);

    SOCKET sConnect;
    struct sockaddr_in clientAddr;
    int clientAddrLen;
    clientAddrLen =sizeof(clientAddr);

    sConnect=accept(server_socket,(SOCKADDR*)&clientAddr,&clientAddrLen);



    char message[1000];
    char ans[200],func,sc[10];
    int ansnum,sans,k;
    int score=0,score1=0;



    if(sConnect!=INVALID_SOCKET){
        printf("\nserver: got connection from %s\n",inet_ntoa(clientAddr.sin_addr));
        }

    send(sConnect,"連線完成...\n\n選擇想要進行的遊戲<1>知識王<2>21點<3>離開\n",(int)strlen("連線完成...\n\n選擇想要進行的遊戲<1>知識王<2>21點<3>離開\n"),0);
    recv(sConnect,&func,(int)strlen("1"),0);
    ansnum=atoi(&func);
    Sleep(2000);

    if(ansnum==1){
            int num;
            for(k=0;k<10;k++){

                num=rand()%50;                      //random question
                if(Q[num].yesno==FALSE){
                        k--;
                        continue;
                }
                Q[num].yesno=FALSE;

                printf("\n\n>>QUESTION<<\n%s\n>> ",Q[num].question);
                send(sConnect,Q[num].question,(int)strlen(Q[num].question),0);
                scanf("%d",&sans);
                send(sConnect,itoa(Q[num].answer,ans,10),(int)strlen(itoa(Q[num].answer,ans,10)),0);

                if(sans==Q[num].answer){
                        printf("OOO BINGO OOO\n");
                        score1++;
                }
                else{
                        printf("XXX WRONG XXX\n");

                }

                recv(sConnect,sc,(int)strlen("1"),0);
                if(atoi(sc)==1){
                    score++;
                }

                if(k<9)
                Sleep(5000);
            }//end for loop k=0~9

            printf("你獲得%d分!!\n",score1);
            int  s=score1;
            Sleep(5000);
            if(score>score1){
                    printf(">>>CLIENT WIN<<<\n");
                    send(sConnect,">>>CLIENT WIN<<<\n",(int)strlen(">>>CLIENT WIN<<<\n"),0);
               }
               else if(score<score1){
                    printf(">>>SERVER WIN<<<\n");
                    send(sConnect,">>>SERVER WIN<<<\n",(int)strlen(">>>SERVER WIN<<<\n"),0);
               }
               else if(score==score1){
                    printf(">>>DRAW<<<\n");
                    send(sConnect,">>>DRAW<<<\n",(int)strlen(">>>DRAW<<<\n"),0);
               }
            Sleep(10000);
    }//end if ans==1

    else if(ansnum==2){
        BOOL flag=TRUE;
        while(flag){
            printf("------------->>新_回_合<<--------------\n");
            char sendp[10],sendp1[10],sendp2[10];
            char sel[10],sel1[10];
            int cpoint=0,cpoint2=0,cpoint1=0,plus;
            int spoint=0,spoint1=0,spoint2=0,ss;

            spoint1=rand()%10+1;
            spoint2=rand()%10+1;
            spoint=spoint1+spoint2;

            cpoint1=rand()%10+1;
            cpoint2=rand()%10+1;
            cpoint=cpoint1+cpoint2;

            printf("Server目前點數: %d\n",spoint);

            send(sConnect,itoa(cpoint1,sendp,10),(int)strlen("10"),0);
            send(sConnect,itoa(cpoint2,sendp1,10),(int)strlen("10"),0);
            send(sConnect,itoa(cpoint,sendp2,10),(int)strlen("10"),0);

        while(cpoint<21){
            recv(sConnect,sel,(int)sizeof(sel),0);

            if(atoi(sel)==1){
                        plus=rand()%10+1;
                        cpoint+=plus;
                        send(sConnect,itoa(cpoint,sendp,10),(int)strlen(itoa(cpoint,sendp,10)),0);
                    if(cpoint>=21){
                        break;
                    }
            }//end sel==1
            else if(atoi(sel)==2){

                while(spoint<21){
                        printf("\t<1>要牌<2>不要牌\n>>");
                        scanf("%d",&ss);

                        if(ss==1){
                            plus=rand()%10+1;
                            spoint+=plus;
                            printf("SERVER目前點數和為:%d\n",spoint);

                            if(spoint>21)
                                printf("SERVER爆了\n");
                        }
                        else if(ss==2) {
                            printf("CLIENT點數和為:%d\n",cpoint);

                            if(spoint>cpoint){
                                printf(">>>SERVER WIN<<<\n");
                            }
                            else if(cpoint>spoint){
                                printf(">>>CLIENT WIN<<<\n");
                            }
                            else if(cpoint==spoint){
                                printf(">>>DRAW<<<\n");
                            }

                            break;
                        }
                        else{
                            break;
                        }
                    }//end while spoint<21

                send(sConnect,itoa(spoint,sendp,10),(int)strlen(itoa(spoint,sendp,10)),0);

                if(spoint<=21&&cpoint<=21){
                        break;
//                    if(spoint>cpoint){
//                         break;
//                    }
//                    else if(spoint<cpoint){
//                         break;
//                    }
//                    else if(spoint==cpoint){
//                         break;
//                    }
//                }
//                else if(spoint>21){
//                        break;
                }

            }//sel==2
            else if(atoi(sel)==3){
                    flag=FALSE;
                    break;
            }
        }//whilecpoint
            Sleep(1000);
        }//flag

    }//end if ans==2
    else if(ansnum==3){
      //  closesocket();
    }
    else{
        printf("Wrong Choice\n");
    }


system("PAUSE");
return 0;
}
