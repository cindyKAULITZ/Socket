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
    Q[0].question ="�G��A�ڳ̳߷R�������O�H\n\n<1>�K���N   <2>���r�N   <3>�ަ�|   <4>�ѹ�                                                 \n";
    Q[0].answer=2;
    Q[1].question="�j�w�w�ɭԭn�H\n\n<1>�ΤO�j     <2>�V�W�j     <3>�����j     <4>�����ҬO                                                 \n";
    Q[1].answer=4;
    Q[2].question="����¾�Υv�W����ʥ��S���B�ʵs�S���y���H\n\n<1>�L���W     <2>�i���s     <3>�L���     <4>���P��                         \n";
    Q[2].answer=2;
    Q[3].question="�u���@�H���[�A�d���@�`�S�C�v�X��Ĭ�����󭺧@�~�H\n\n<1>���s�u    <2>�����b      <3>�P�s��    <4>���պq�Y                \n";
    Q[3].answer=4;
    Q[4].question="�������O�ɤO���ΡH \n\n<1>��x��    <2>�¹��     <3>���H��    <4>�饻�j����                                            \n";
    Q[4].answer=2;
    Q[5].question="�u�C�l�u�v�u�O���⤤�u�A�C�l���W��v�X�ۦ�̡H\n\n<1>����     <2>������    <3> �s�E�M    <4> �s��                       \n";
    Q[5].answer=4;
    Q[6].question="���ͩM���ͥ�t�ɡA����e�{���� �Ϊ��H \n\n<1>�@�r��     <2>V�r��     <3>S�r��     <4>I�r��                              \n";
    Q[6].answer=2;
    Q[7].question="����ݩ�x�W�������`�y���ʡH \n\n<1>����O     <2>�צ~��     <3>�����]     <4>������                                  \n";
    Q[7].answer=2;
    Q[8].question="�a�y�P��y���Z�����i�ƤU�X�Ӧa�y�H \n\n<1>30      <2>40     <3>10     <4>20                                             \n";
    Q[8].answer=1;
    Q[9].question="���u���G�����v���W���A�O���@�ؤ��G�H \n\n<1>�h�B     <2>ī�G     <3>�h��     <4>���                                    \n";
    Q[9].answer=3;
    Q[10].question="��n�T�w�ɡA�[���ɷū׷|�W�ɡA�����h�ۤϡA�٬��H\n\n<1>��Q�w��     <2>�z�Q����w��     <3>�D���]�w��     <4>�d�����w��\n";
    Q[10].answer=4;
    Q[11].question="��a�����u�|�j�Ҫšv�A�|�j�����O�a�B���B���H�ΡH \n\n<1>��    <2> ��     <3>��     <4>��                               \n";
    Q[11].answer=1;
    Q[12].question="�аݤT���W���X�ӭ��H \n\n<1>5      <2>3      <3>4      <4>6                                                            \n";
    Q[12].answer=1;
    Q[13].question="�a�y�P�Ӷ��������Z�����h�֤����H\n\n<1>�@��     <2>���d�U     <3>�G�����d�U     <4>�@�����d�U                          \n";
    Q[13].answer=4;
    Q[14].question="���B�g�b���ت��b�v���X�ӱo���ϡH\n\n <1>8     <2>5     <3>10     <4>6                                                  \n";
    Q[14].answer=3;
    Q[15].question="�@�Ӷ�ι��T���A�аݤ����X�����H\n\n<1> 4     <2> 8      <3> 2      <4> 6                                            \n";
    Q[15].answer=2;
    Q[16].question="�u�s���۰e�}�A ��Ǳ���v�A�K��~�~��A���]�k���k�v�X�ۦ�̡H\n\n<1>������    <2>���j    <3>����    <4> ����           \n";
    Q[16].answer=3;
    Q[17].question="�u�jī�G�v�O���@�ӫ������W�١H \n\n<1>�ھ�    <2>�ì�    <3>�F��   <4>����                                             \n";
    Q[17].answer=2;
    Q[18].question="�q�v�׷����}2(Taxi 2)���A�k�D���V�k�D���������٥L�O�H \n\n<1>ĵ��     <2>�Ѯv     <3>���ǥ�     <4>������            \n";
    Q[18].answer=3;
    Q[19].question="�յN�J���T���N�k�O�H\n\n<1>��b�E�Y�U��C�C�|�Q�E��   <2>�����u�A���J   <3>����J�A��u��  <4>�߰ݼB���P             \n";
    Q[19].answer=3;
    Q[20].question="�G�g�v�x�ɡA��긹�������H \n\n<1>�G�g     <2>���     <3>�F��    <4>����                                            \n";
    Q[20].answer=3;
    Q[21].question="�饻�W�۪����v���c�A���H \n\n<1>�s��     <2>�F��     <3>�j��     <4>����                                             \n";
    Q[21].answer=2;
    Q[22].question="�a�y�ثe�`�@���X�Ӧ۵M�ìP�H\n\n<1>�ƤQ�U��     <2>���H�p��    <3> �@��     <4>�ƦʸU��                                \n";
    Q[22].answer=3;
    Q[23].question="���_���l���O�ݩ�H \n\n<1>��l��   <2> ���l��    <3>�h�l��    <4>�T�l��                                                \n";
    Q[23].answer=1;
    Q[24].question="�㦳���H�O���ոѩe���|�]�m���̡H \n\n<1>����ĳ�|    <2>ĵ�    <3>�a��k�|    <4>�m���Ϥ���                      \n";
    Q[24].answer=4;
    Q[25].question="�q�@�u�O�[���B§�v����̧@�~�H\n\n<1>�����S   <2> ���h��    <3>�ګ�   <4> ��i�Ҵ���                                   \n";
    Q[25].answer=1;
    Q[26].question="���ŭ������X�ץH�U�|���B�H\n\n<1>20      <2>30      <3>0      <4>10                                                  \n";
    Q[26].answer=3;
    Q[27].question="�q�v�֪L���y���A�j�v�S���Z�\�H \n\n<1>���v�ள��    <2>�L���R�K�Y�\   <3> �����n�K���m    <4>�����a��L              \n";
    Q[27].answer=2;
    Q[28].question="�Q�٬����ĤC���N�����O�H \n\n<1>������    <2>�ܼ@    <3>�q�v    <4>�q��                                                  \n";
    Q[28].answer=2;
    Q[29].question="�u�I����O�F�áA�Ʊ��H���U��J�A���Ѧr�Ϫi����C�v�X�ۦ�̡H\n\n<1>�վ�    <2>���P��    <3>���~��   <4> �G����       \n";
    Q[29].answer=1;
    Q[30].question="�ۦ��D�w�g�A���D�a�l�����O�H\n\n<1>����    <2>����    <3>����    <4>����                                               \n";
    Q[30].answer=4;
    Q[31].question="�Q�T���ƿ�}�b�x�_�����̵o�{�H \n\n<1>�K��     <2>�����s    <3>�H��   <4> ����                                       \n";
    Q[31].answer=1;
    Q[32].question="�аݤ@����פ��A��ù�P�O�����X�{�b���@�Ӱ�a�H \n\n<1>��Z��    <2>�k��     <3>���I�Ұ�    <4>�q�j�Q                   \n";
    Q[32].answer=4;
    Q[33].question="�������b�_�b�y���y�ʤ�V�H\n\n<1>�V�n    <2>���@�w    <3>���ɰw   <4> �f�ɰw                                           \n";
    Q[33].answer=3;
    Q[34].question="��°����^��W�r�H \n\n<1>Rick     <2>Leon     <3>Simon     <4>Tony                                                    \n";
    Q[34].answer=4;
    Q[35].question="�q�v�u�������Ұ�v�O�H���@�ӥj����I�����᪺�H \n\n<1>�ȯS������    <2>�i��    <3>����   <4> �J��                      \n";
    Q[35].answer=1;
    Q[36].question="�ֶq�ն����A�̥i�ध��������������H \n\n<1>��^��    <2>������    <3>���V��    <4>�ȪZ��                              \n";
    Q[36].answer=1;
    Q[37].question="�u�J��T���v�o�y���y�O�Ӧ۩�֪��G�ơH \n\n<1>�i��    <2>������    <3>���\    <4>����                                  \n";
    Q[37].answer=2;
    Q[38].question="�K�H�T�����ɤ��A�ۦ樮���ت��Z�����X�����H\n\n<1>30     <2>20     <3>10     <4>40                                      \n";
    Q[38].answer=4;
    Q[39].question="��þ���ܤ��@�~���X�u�H\n\n<1>�|     <2>�T     <3>�G   <4>  �@                                                          \n";
    Q[39].answer=2;
    Q[40].question="��°�1987�~�򭻴��6���q�v�������̨Ψk�D�������@�~�O�H\n\n<1>�C�K�t��     <2>�H���^��     <3>�a�U��     <4>�d������   \n";
    Q[40].answer=2;
    Q[41].question="��Ţ��M���֭a�D�n�ǥѮ������ΥH��o�Ӧa�ϯʥF�������i���H\n\n<1>�K     <2>��     <3>�[     <4>��                    \n";
    Q[41].answer=2;
    Q[42].question="�G���j�Դ������հҲĵn���A�o�ͦb���@�Ӱ�a�H \n\n<1>�k��    <2> ����     <3>��Z��     <4>����                         \n";
    Q[42].answer=1;
    Q[43].question="�аݤU�C��̬O�x�����W���H \n\n<1>����     <2>�Ӷ���    <3> �䨧�G    <4> �n��                                         \n";
    Q[43].answer=2;
    Q[44].question="��Ǥp���L�������O�H \n\n<1>���s     <2>�K��     <3>�ì�     <4>�j��                                                   \n";
    Q[44].answer=2;
    Q[45].question="�[�JENERGY�e�A�֭I�ۦN�L�۹L���q�\�U�H \n\n<1>�Ѱ�     <2>�[�F     <3>����     <4>TORO                                 \n";
    Q[45].answer=1;
    Q[46].question="�e�a���ʹ������H�H \n\n<1>�k��     <2>�^��     <3>�w��     <4>����                                                   \n";
    Q[46].answer=1;
    Q[47].question="�аݤU�C��̬O�y�����W���H \n\n<1>�Ӷ���    <2> ����     <3>�n��     <4>�䨧�G                                         \n";
    Q[47].answer=3;
    Q[48].question="�q�v�u�u�ҡv���A�P�P����F�h�ֿ��R�F�Z�\���D�H\n\n<1>2$      <2>5$      <3>20$      <4>10$                             \n";
    Q[48].answer=4;
    Q[49].question="��H�L�������p��H�]�B���x�A�O���̵o�����H\n\n<1>�x�W     <2>�^��     <3>�s�[�i     <4>�k��                            \n";
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

    send(sConnect,"�s�u����...\n\n��ܷQ�n�i�檺�C��<1>���Ѥ�<2>21�I<3>���}\n",(int)strlen("�s�u����...\n\n��ܷQ�n�i�檺�C��<1>���Ѥ�<2>21�I<3>���}\n"),0);
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

            printf("�A��o%d��!!\n",score1);
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
            printf("------------->>�s_�^_�X<<--------------\n");
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

            printf("Server�ثe�I��: %d\n",spoint);

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
                        printf("\t<1>�n�P<2>���n�P\n>>");
                        scanf("%d",&ss);

                        if(ss==1){
                            plus=rand()%10+1;
                            spoint+=plus;
                            printf("SERVER�ثe�I�ƩM��:%d\n",spoint);

                            if(spoint>21)
                                printf("SERVER�z�F\n");
                        }
                        else if(ss==2) {
                            printf("CLIENT�I�ƩM��:%d\n",cpoint);

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
