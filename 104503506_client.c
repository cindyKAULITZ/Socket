#include<stdio.h>
#include<winsock2.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(int argc , char *argv[]){

    WSADATA wsa;
    WORD version=MAKEWORD(2,1);

    int iResult;
    iResult=WSAStartup(version,&wsa);

    int PORT;
    char* IP;

    printf("IP:");
    scanf("%s",IP);
    printf("\nPORT:");
    scanf("%d",&PORT);

    SOCKET client_socket;
    SOCKADDR_IN addr;
    client_socket=socket(AF_INET,SOCK_STREAM,IPPROTO_TCP);
    addr.sin_addr.s_addr=inet_addr(IP);
    addr.sin_family=AF_INET;
    addr.sin_port=htons(PORT);

    if(connect(client_socket,(SOCKADDR*)&addr,sizeof(addr))<0){
        printf("client connection error");
        Sleep(1000);
        exit(0);
    }


    char* m;
    char sendbuf;
    char message[200],result[200],point[10],ans[200],intro[200];
    int score=0,score1=0,a,k=0;
    int funcchoice,func;

    recv(client_socket,intro,(int)sizeof(intro),0);
    printf("%s\n>> ",intro);
    scanf("%d",&funcchoice);
    func=funcchoice;
    send(client_socket,itoa(funcchoice,&sendbuf,10),(int)sizeof(itoa(funcchoice,&sendbuf,10)),0);

    if(func==1){

            while(1){
                    k++;

                    if(k>10){
                        break;
                    }

                    recv(client_socket,message,(int)sizeof(message),0);
                    printf("\n\n>>QUESTION<<\n %s\n>>  ",message);

                    ZeroMemory(message,50);

                    scanf("%s",&ans);
                    recv(client_socket,result,(int)sizeof(result),0);
                    a=atoi(result);

                    ZeroMemory(result,10);

                    if(a==atoi(ans)){
                        printf("OOO BINGO OOO\n");
                        score++;
                        send(client_socket,"1",(int)strlen("1"),0);
                    }
                    else{
                        printf("XXX WRONG XXX\n");
                        send(client_socket,"0",(int)strlen("0"),0);
                    }
            }//end while

            ZeroMemory(result,10);
            ZeroMemory(point,10);

            printf("\n 你獲得%d分~~~\n",score);
            int s=score;
            recv(client_socket,result,(int)sizeof(result),0);
            printf(" %s",result);
    }//end if func==1
    else if(func==2){

            while(1){
                printf("------------->>新_回_合<<--------------\n");
                char sendp[10];
                char text[200];
                char sel[200],sel1[200];
                char cp[10],cp1[10],cp2[10],sp[10];
                char n[10],n1[10];
                int pokercount[13]={0};
                int s;
                int spoint=0,cpoint=0,cpoint2=0,plus;
                ZeroMemory(cp,10);
                ZeroMemory(cp1,10);
                ZeroMemory(cp2,10);
                ZeroMemory(sp,10);

                printf("第一張");
                recv(client_socket,cp1,(int)sizeof("10"),0);
                printf("%s，第二張",cp1);

                recv(client_socket,cp2,(int)sizeof("10"),0);
                printf("%s，目前總和",cp2);

                recv(client_socket,cp,(int)sizeof("10"),0);
                printf("%s",cp);


                while(1){


                    printf("\t<1>要牌<2>不要牌<3>離開\n>>");

                    scanf("%d",&s);
                    printf("\n");
                    send(client_socket,itoa(s,sel,10),(int)sizeof(itoa(s,sel,10)),0);
                    if(s==1){

                        printf("client目前總和:");
                        recv(client_socket,cp,(int)sizeof("10"),0);
                        printf("%s\n",cp);

                        if(atoi(cp)>=21){

                            if(atoi(cp)==21)
                                printf("21點!!!!\n");
                            else
                                printf("\n你爆了!\n");
                            break;
                        }
                    }//end if s==1
                    else if(s==2){
                        printf("SERVER點數和: ");
                        recv(client_socket,sp,(int)sizeof(sp),0);
                        printf("%s\n",sp);

                        if(atoi(sp)>atoi(cp)&&atoi(sp)<=21){
                            printf(">>>SERVER WIN<<<\n");
                        }
                        else if(atoi(sp)<atoi(cp)&&atoi(cp)<=21){
                            printf(">>>CLIENT WIN<<<\n");
                        }
                        else if(atoi(sp)==atoi(cp)){
                            printf(">>>DRAW<<<\n");
                        }
                        if(atoi(sp)>21){
                            printf("SERVER 爆了\n");
                        }

                        break;
                    }//end if s==2
                    else if(s==3){
                            break;
                    }

                }//end inner while
            }//end while
    }//end if ans==2
    else if(func==3){
        closesocket(client_socket);
    }
    else{
        printf("Wrong choice");
    }

    closesocket(client_socket);
    system("PAUSE");
    return 0;
}



