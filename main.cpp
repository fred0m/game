#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
struct user
{
    bool a_f;//��Ϊ�Ƿ��ǵ�һ�������������Ĳ����������ظ��������
    bool tnt;
    bool key_a;
    bool key_b;
    bool knife;
    bool fire;
    bool meat;
    bool a_hide;//����a�����ذ���
    bool b_bear;//����b����
    bool lock_a;
    bool lock_b;
    int time;
    bool alpha;
    bool a_hide_f;
    bool inf;
};

void prt (string speak)
{
    Sleep(1200);
    cout<<speak<<endl;
}

void die (string why)
{
    cout<<"�����ˣ�"<<why<<endl;
    Sleep(4000);
    exit(0);

}

user player = {};
void room_a (user& player)//����aΪ��ʼ���䣬�谵��������·һ�����������ر�ʱ��
{
    system("cls");
    while (TRUE)
    {
        if(player.a_f==0)
        {
            prt("�����ˣ��е�ͷ����Щ΢�Ĵ�ʹ");
            prt("��������������������Χ�谵����ѹ��");
            prt("���ڣ���ֻ�����뿪�����ط�");
            prt("�㻷�������ܣ������������š�һ������ߣ�һ�����ұߣ�����һ������ǰ��");
            prt("��׼��ȥ�ģ�");
            prt("1. ��� 2.�ұ� 3.ֱ��");
            player.a_f = 1;


        }
        else
        {
            system("cls");
            prt("����һ���谵����ѹ�ֵķ��䣬Ҳ������������ĵط�");
            prt("�㻷�������ܣ������������š�һ������ߣ�һ�����ұߣ�����һ������ǰ��");
            prt("��׼��ȥ�ģ�");
            prt("1. ��� 2.�ұ� 3.ֱ��");
            if(player.a_hide == 0)
            {
                ;
            }
            else if(player.a_hide == 1&&player.a_hide_f==0)
            {
                prt("Ҫ!@#$%^&*��#$%�밵��$%^&�밴4");
            }
            else
            {
                ;
            }
        }
        int cho = 23333;
        cin>> cho;
        if (cho == 23333)
        {
            continue;
        }
        else if (cho == 1)
        {
            prt("�㳯��ߵ������˹�ȥ����");
            if(player.key_a==1)
            {
                prt("����Կ�״��������");
                void room_d(user& player);
                room_d(player);
            }
            else if(player.key_b==1)
            {
                prt("���Կ�ײ��ǿ�����ŵ�");
                continue;
            }
            else
            {
                prt("�����ű���ס��");
                Sleep(2000);
                continue;
            }
        }
        else if (cho == 2)
        {
            prt("�㳯�ұߵ������˹�ȥ");
            void room_c(user& player);
            room_c(player);
        }
        else if (cho == 3)
        {
            prt("�㳯��ǰ���������˹�ȥ");
            void room_b(user& player);
            room_b(player);
        }
        else if (cho == 4)
        {
            if(player.a_hide==1)
            {
                prt("��׼������󷽵İ���");
                void room_e (user& player);
                room_e(player);
            }
            else
            {
                prt("��û�������뿪��������ϸ�����Χ���㷢���˺󷽵�һ������");
                prt("�G���ȵ�,�Բۣ�������ô����һ��������");
                prt("��tm�ǵ�û�������");
                prt("�Ȳ�����");
                player.a_hide = 1;
                continue;
            }
        }
        else
        {
            if(player.a_hide == 0)
            {
                prt("��û�������뿪��������ϸ�����Χ���㷢���˺󷽵�һ������");
                prt("�G���ȵ�,�Բۣ�������ô����һ��������");
                prt("��tm�ǵ�û�������");
                prt("�Ȳ�����");
                player.a_hide = 1;
                continue;
            }
            else
            {
                prt("���ٴμ���˷��䣬��ʲôҲû�з���");
                continue;
            }

        }
    }
}

void room_b(user& player)//���ڣ����ڶ��������ˣ��о�Ҫ����
{
    system("cls");
    while (TRUE)
    {
        prt("�������ܰ���ǰ�����ҷ��ͺ�����");
        if(player.b_bear==0)
        {
            prt("�������ֵ�����");
        }
        else
        {
            ;
        }
        prt("��׼����ô��");
        prt("1.���� 2.��ǰ�� 3.������ 4.�����");
        if(player.knife==1&&player.b_bear==0)
        {
            prt("5.�õ�ɱ�����������Ķ���");
        }
        int cho;
        cin>>cho;
        if(cho==1)
        {
            if(player.b_bear==0)
            {
                prt("��ȥ������һ�£������Ǳ���ͷ��");
                prt("������ע�⵽���ˣ�ף�����");
                if(player.meat==1)
                {
                    prt("����һ������׼����ô��");
                    prt("1.�Լ��� 2.���ܳ� 3.����ƴ��");
                    cin>>cho;
                    if(cho==1)
                    {
                        die("������ϡ���ܶ���������ˣ�������Լ������ˡ�");
                    }
                    else if (cho==2)
                    {
                        prt("����ⶪ�����ܣ��ܳ��˷����ϡ�����Լ������ˣ�������������һ�ɲ���������ζ��");
                        player.b_bear =1;
                    }
                    else
                    {
                        die("�㲻�Ƕ���˹��");
                    }
                }
                else
                {
                    die("���ͷ����Ū������");
                }
            }
            else
            {
                prt("�������һ�鷿�䣬û����ʲô����");
                continue;
            }
        }
        else if(cho==2)
        {
            prt("��ȥ��ǰ������");
            int room_g(user& player);
            room_g(player);
        }
        else if(cho==3)
        {
            prt("���������ұߣ����ұߵ��ű���������");
            if(player.key_b==1)
            {
                player.lock_b=1;
                prt("����Կ�״�����");
                prt("�ű����ƿ��ˣ������˾޴������");
                if(player.b_bear==0)
                {
                    prt("��Ū��������̫����");
                    prt("�������һͷ�ܣ���ע�⵽����");
                    die("�㱻�ܱ���");
                }
                else
                {
                    //void room_h(user& player);��д��h�Ժ��ڼӻ�ȥ
                    //room_h(player);
                }

            }
            else if (player.key_a==1)
            {
                prt("���Կ�׺�����������ģ��򲻿�");
                continue;
            }
            else
            {
                prt("��û��Կ��");
                continue;
            }
        }
        else if(cho ==4)
        {
            prt("�������ȥ");
            room_a(player);
        }
        else if(cho==5)
        {
            if(player.b_bear==0)
            {
                prt("�����ŵ����ܳ��˹�ȥ��Ȼ��");
                die("���Ǹ������õ���ܵĴ���");
            }
            else
            {
                continue;
            }
        }
        else
        {
            continue;
        }
    }
}

void room_g(user& player)//��g�ˣ��ŵ��������ҵ�ͷ��ʹ��,,�Ǻǣ�����gȫ����д��ˬ��
{
    system("cls");
    player.time += 1;
    if(player.time <= 3)
    {
        prt("����ǰ���������䣬�������Ҫ��������һЩ");
        prt("������������������·");
        prt("��Ҫ��ô��");
        prt("1.����һ�� 2.����");
        cout<<player.knife<<endl<<player.tnt<<endl<<player.fire<<endl<<player.time<<endl<<player.a_hide_f<<endl;
        int cho;
        cin>>cho;
        if(cho == 1)
        {
            prt("�ұ������ʧ�޵�ǽ�ڣ���̫��̡�");
            if(player.key_a==0)
            {
                player.key_a=1;
                prt("���ҵ���һ��Կ��");
                prt("���뿪���������");

                room_b(player);
            }
            else
            {
                prt("��û����ʲô�ر����");
                prt("���뿪���������");

                room_b(player);
            }
        }
        else
        {
            prt("���뿪���������");

            room_b(player);
        }

    }
    else if(player.time == 4)
    {
        prt("��磬���۲��۰���������ûʲô");
        prt("�㲻Ҫǿ������Ϸʱ�䰡������ֻ��Ϊ��������Կ�װ�");
        prt("�û�ȥ��");

        room_b(player);
    }
    else if (player.time == 5)
    {
        prt("�������ûʲô��������ô���ǲ����أ�����ֻ�п�����ʱ���������Ŀ��ƣ�ûʲô��ûʲô");
        prt("���˺��ˣ������ɣ��´��Ҳ�������������");
        prt("���뿪���������");

        room_b(player);
    }
    else if (player.time >=5&&player.tnt==1&&player.fire==1&&player.knife==1)
    {
        prt("���õ�������ߵ�ǽ���ó���һ��С������ըҩ���˽�ȥ������ȼ����");
        prt("ǽ��ը���ˣ��㿴�������ն˿��ơ��������Բ�");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);//����������Ϊ�ڵ׺���
        cout<<"$SYSTEM:Warning��System internal console is illegally enabled"<<endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);//������Ļغڵװ���
        prt("�ȵȣ��Բۣ����ԣ��㲻������������");
        prt("�Բۣ���tm��˵�õĲ�һ����");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);//����������Ϊ�ڵ׺���
        cout<<"$SYSTEM:Warning, user player has elevated the privilege to the highest permissions."<<endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);//������Ļغڵװ���
        prt("������������ͣ��");
        prt("$sudo userdel player");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);//����������Ϊ�ڵ׺���
        cout<<"$SYSTEM:Error, player is the highest admin account and you cannot delete it."<<endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);//������Ļغڵװ���
        prt("�㵽������ʲô");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);//����������Ϊ�ڵ׺���
        cout<<"$SYSTEM:Information, the most advanced administrator user player logged into the terminal console"<<endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);//������Ļغڵװ���
        cin.get();
        prt("userdel Narration-�� -f");
        prt("��Ҫɾ���ң�����");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);//����������Ϊ�ڵ׺���
        cout<<"$SYSTEM:Done!"<<endl;
        cout<<"$SYSTEM:A serious error in the system is about to shut down"<<endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);//������Ļغڵװ���
        Sleep(5000);
        exit(0);
    }
    else
    {
        prt("����ǰ���������䣬�������Ҫ��������һЩ");
        prt("������������������·");
        prt("��Ҫ��ô��");
        prt("1.����һ�� 2.����");
        int cho;
        cin>>cho;
        if(cho == 1)
        {
            prt("�ұ������ʧ�޵�ǽ�ڣ���̫��̡�");
            if(player.key_a==0)
            {
                player.key_a=1;
                prt("���ҵ���һ��Կ��");
                prt("���뿪���������");

                room_b(player);
            }
            else
            {
                prt("��û����ʲô�ر����");
                prt("���뿪���������");

                room_b(player);
            }
        }
        else
        {
            prt("���뿪���������");

            room_b(player);
        }


    }

}

void room_h(user& player)
{
    system("cls");
    while(TRUE)
    {
        prt("���Ǹ���������һ�����ȣ������ƺ��������������");
        prt("��ܸ��ˣ���Ϊ�����ϾͿ��Գ�ȥ��");
        prt("�����ﱻһ�²�̫��̵�ǽ���ţ�����ܰ�ǽŪ��Ҳ����ܳ�ȥ��");
        prt("����Ҫ���Գ�ȥ��");
        prt("1.���Գ�ȥ 2.�ȷ�����һ������");
        int con;
        cin>>con;
        if(con==1)
        {
            if(player.tnt==1 && player.fire==1)
            {
                prt("����TNT��ǽը����");
                prt("�㿪�ĵ����������ϣ���ͻȻ�����һֻ��");
                if(player.knife==1)
                {
                    prt("���е�����������Ƿ�ɱ��");
                    prt("�����ȫ���뿪�����������Ƥ����һ������");
                }
                else
                {
                    prt("�㳢���ÿ��ֺ��ǲ���");
                    die("�㱻�Ǳ����ũ�ҷ�");
                }
            }
            else
            {
                prt("ǽ˿������������");
                continue;
            }

        }
        else if(con==2)
        {
            room_b(player);
        }
        else
        {
            continue;
        }
    }

}

void room_c (user& player)
{
    system("cls");
    while(TRUE)
    {
        prt("��������һ��������ĵط�");
        prt("���ӻ����˻ҳ��������Ա���һ�����ӣ���������һЩ���õ�ˮ��");
        prt("һ�ɸ���ζ");
        prt("��ǿ���Ų����Լ���θ������ϸ�۲�������");
        prt("�㿴��ǰ�����ұ߸���һ����");
        prt("��׼����ô����");
        prt("1.����ǰ������ 2.�����ұߵ��� 3.�������� 4.������һ������");
        int con;
        cin>>con;
        if(con==1)//������Ҫת���ӽ�
        {
            prt("�������ǰ������");
            void room_j(user& player);
            room_j(player);
        }
        else if(con==2)
        {
            prt("��������ұߵ���");
            void room_i(user& player);
            room_i(player);
        }
        else if(con==3)
        {
            if(player.knife == 0)
            {
                player.knife = 1;
                prt("���������Ϸ�����һ�Ѳ˵�,Ȼ�����˳����");
            }
            else
            {
                prt("��ʲô���õ�Ҳû�ҵ�");

            }
        }
        else if(con==4)
        {
            prt("��ص����ϸ�����");
            room_a(player);
        }
        else
        {
            prt("�����ⷢ��һ���");
        }
    }

}


void room_i(user& player)
{
    system("cls");
    while(TRUE)
    {
    prt("�⿴������ոճ����Ĵ���䣬ɢ����һ�ɶ��");
    prt("��ע�⵽�������кܶ���⣬����Щ�����ȥ��������");
    prt("��û�м�������ȥ��");
    if(player.meat == 0)
    {
        prt("����Ҫ��һ����");
        prt("1.Ҫ 2.����");
        int con;
        cin>>con;
        if(con == 1)
        {
            player.meat = 1;
            prt("������һ��\"��\"");
            prt("�������");
            prt("1.�� 2.��Ҫ");
            cin>>con;
            if (con==1)
            {
                die("��������������");
            }
            else
            {
                prt("�����뻹�����˰�");
            }
        }
        else
        {
            prt("�����뻹�����˰�");
        }

    }
    else
    {
        ;
    }
    prt("�㿴��ǰ������һ����");
    prt("��ô����");
    prt("1.ȥ���� 2.���ǻ�ͷ��");
    int con;
    cin>>con;
    if(con==1)
    {
        prt("���ƿ�����");
        prt("�������˽�ȥ");
        prt("ͻȻ����о����²ȵ���ʲô����");
        prt("�ذ���Ȼ��");
        prt("�������ȥ");
        die("�Զ��׼�����ˤ����");

    }
    else
    {
        prt("��ѡ���˻�ͷ");
        room_c(player);
    }
    }

}

void room_j(user& player)
{
    system("cls");
    prt("���������Ϊ�˸������ɱ�õ�");
    prt("����ӵ������Ϸ�����ĵ�ʱ��������������˳���Ϸ�İ�ť");
    prt("1.���°�ť 2.�Ҿ��������Ϸ���У���Ҫ��������ȥ 3.�Ҿ��������Ϸ�õ���ը����Ҫ�����������ж���");
    int con;
    cin>>con;
    if(con==1)
    {
        prt("bong~");
        die("������Ը");
    }
    else if(con==3)
    {
        prt("���������Ϸ���ã��ҽ�����������֯������");
        prt("bong~");
        die("�´��ټ�");
    }
    else
    {

        prt("��ͻȻ���֣������ť����һ��ըҩ");
        prt("������Ҫ��ѡ��������������ѡ��ѡ��ĺ��");
        if(player.tnt==0)
        {
            prt("Ҳ��ըҩ���������أ�Ҫ��һ����");
            prt("1.��һ�� 2.����");
            cin>>con;
            if(con == 1)
            {
                player.tnt=1;
                prt("������һ��ըҩ��������������Ҫ��Ҫ����������");
                if(player.fire==1)
                {
                    prt("�������д���");
                }
            }
            else
            {
                prt("�㻹�Ǿ���������");
            }

        }
        else
        {
            ;
        }
        prt("��ص����ϸ�����");
        room_c(player);
    }

}

void note(void)
{
    cout<<"���⣺������Narration-����ɾ��ǰ���µ������Ϣ"<<endl<<endl<<endl<<endl<<endl<<endl<<"���������������Ϸ****&*&&*&*&*66�����"<<endl<<"��ע��##��#��@�����Ϸ���԰�ϵͳ�⵽����������**&����"<<endl;
    cout<<"ʱ��####��%����&**&����%�������ˣ�������$%^*����$%^&*�˳���Ϸ"<<endl;
    cout<<"�ظ�����Ϸ$%^������%^&*���⵽��^&��"<<"����$%^������$%^&�˳���Ϸ"<<"��Ȼ������пյĻ���ɾ��Narration-�£����������Ϸ��ĳ�����䱻���������Ŀ���̨�Ϳ�������"<<endl;
    cout<<"��Ȼ����%^&������^&*������û%^&��ϵ����л��%^&*�������ϷϷϷϷϷϷϷϷϷϷϷϷϷϷϷϷϷϷϷϷϷϷϷϷϷϷϷϷϷϷϷϷϷϷϷϷϷϷϷϷϷϷϷϷϷϷϷϷϷϷϷϷϷϷϷϷϷ#��%����&*&����%��#��%����&*��&����%��%����&*"<<endl;
}

void room_e(user& player)
{
    system("cls");
    if(player.a_hide_f ==0)
    {
        player.a_hide_f = 1;
        prt("�㿴����һ��ֽ������׼�����Բۣ�����ǡ��������");
        note();
        cin.get();
        cin.get();
        Sleep(2000);
        system("cls");
        prt("���˺��ˣ���ʲô��û��������ȥ�ˣ������Ǽ�����Ϸ");
    }
    else
    {
        prt("��ڱ���ס��");
        room_a(player);
    }
}

void room_d(user& player)
{
    system("cls");
    prt("���������������");
    prt("������ô����");
    prt("1.���� 2.�뿪");
    int con;
    cin>>con;
    if (con == 1)
    {
        if(player.fire==0&&player.key_b==0)
        {
            prt("���ҵ���һ��ʬ�壬���������������ҵ���Կ�׺ʹ���");
            player.fire=1;
            player.key_b=1;
            prt("������뿪���������");
            room_a(player);
        }
        else
        {
            prt("����һ��ʬ�壬��ʲôҲû�ҵ�");
            prt("������뿪���������");
            room_a(player);
        }
    }

}


int main()
{
    room_a(player);

}


