#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
struct user
{
    bool a_f;//作为是否是第一次来到这个房间的参数，避免重复介绍情况
    bool tnt;
    bool key_a;
    bool key_b;
    bool knife;
    bool fire;
    bool meat;
    bool a_hide;//房间a的隐藏暗道
    bool b_bear;//房间b的熊
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
    cout<<"你死了，"<<why<<endl;
    Sleep(4000);
    exit(0);

}

user player = {};
void room_a (user& player)//房间a为初始房间，昏暗，三条明路一条暗道，无特别时间
{
    system("cls");
    while (TRUE)
    {
        if(player.a_f==0)
        {
            prt("你醒了，感到头部有些微的刺痛");
            prt("你慢慢的坐了起来，周围昏暗而又压抑");
            prt("现在，你只想快点离开这个鬼地方");
            prt("你环顾了四周，发现了三扇门。一扇在左边，一扇在右边，还有一扇在正前方");
            prt("你准备去哪？");
            prt("1. 左边 2.右边 3.直走");
            player.a_f = 1;


        }
        else
        {
            system("cls");
            prt("这是一个昏暗而又压抑的房间，也是你最初醒来的地方");
            prt("你环顾了四周，发现了三扇门。一扇在左边，一扇在右边，还有一扇在正前方");
            prt("你准备去哪？");
            prt("1. 左边 2.右边 3.直走");
            if(player.a_hide == 0)
            {
                ;
            }
            else if(player.a_hide == 1&&player.a_hide_f==0)
            {
                prt("要!@#$%^&*进#$%入暗道$%^&请按4");
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
            prt("你朝左边的门走了过去走了");
            if(player.key_a==1)
            {
                prt("你用钥匙打开了这个门");
                void room_d(user& player);
                room_d(player);
            }
            else if(player.key_b==1)
            {
                prt("这把钥匙不是开这个门的");
                continue;
            }
            else
            {
                prt("这扇门被锁住了");
                Sleep(2000);
                continue;
            }
        }
        else if (cho == 2)
        {
            prt("你朝右边的门走了过去");
            void room_c(user& player);
            room_c(player);
        }
        else if (cho == 3)
        {
            prt("你朝正前方的门走了过去");
            void room_b(user& player);
            room_b(player);
        }
        else if (cho == 4)
        {
            if(player.a_hide==1)
            {
                prt("你准备进入后方的暗道");
                void room_e (user& player);
                room_e(player);
            }
            else
            {
                prt("你没有马上离开，而是仔细检查周围，你发现了后方的一条暗道");
                prt("欸，等等,卧槽，这里怎么会有一条暗道？");
                prt("我tm记得没做这个啊");
                prt("先不管了");
                player.a_hide = 1;
                continue;
            }
        }
        else
        {
            if(player.a_hide == 0)
            {
                prt("你没有马上离开，而是仔细检查周围，你发现了后方的一条暗道");
                prt("欸，等等,卧槽，这里怎么会有一条暗道？");
                prt("我tm记得没做这个啊");
                prt("先不管了");
                player.a_hide = 1;
                continue;
            }
            else
            {
                prt("你再次检查了房间，但什么也没有发现");
                continue;
            }

        }
    }
}

void room_b(user& player)//终于，到第二个房间了，感觉要死了
{
    system("cls");
    while (TRUE)
    {
        prt("这个房间很暗，前方，右方和后方有门");
        if(player.b_bear==0)
        {
            prt("左边有奇怪的声音");
        }
        else
        {
            ;
        }
        prt("你准备怎么做");
        prt("1.调查 2.向前走 3.向右走 4.向后走");
        if(player.knife==1&&player.b_bear==0)
        {
            prt("5.用刀杀掉发出声音的东西");
        }
        int cho;
        cin>>cho;
        if(cho==1)
        {
            if(player.b_bear==0)
            {
                prt("你去调查了一下，发现那边有头熊");
                prt("它好像注意到你了，祝你好运");
                if(player.meat==1)
                {
                    prt("你有一块肉你准备怎么做");
                    prt("1.自己吃 2.给熊吃 3.和熊拼了");
                    cin>>cho;
                    if(cho==1)
                    {
                        die("你疯狂拉稀，熊都不想吃你了，但你把自己拉死了。");
                    }
                    else if (cho==2)
                    {
                        prt("你把肉丢给了熊，熊吃了疯狂拉稀。把自己拉死了，空气中弥漫这一股不可描述的味道");
                        player.b_bear =1;
                    }
                    else
                    {
                        die("你不是俄罗斯人");
                    }
                }
                else
                {
                    die("你的头被熊弄了下来");
                }
            }
            else
            {
                prt("你调查了一遍房间，没发现什么东西");
                continue;
            }
        }
        else if(cho==2)
        {
            prt("你去了前方的门");
            int room_g(user& player);
            room_g(player);
        }
        else if(cho==3)
        {
            prt("你来到了右边，但右边的门被锁锁上了");
            if(player.key_b==1)
            {
                player.lock_b=1;
                prt("你用钥匙打开了锁");
                prt("门被你推开了，发出了巨大的响声");
                if(player.b_bear==0)
                {
                    prt("你弄出的声音太大了");
                    prt("左边来了一头熊，它注意到你了");
                    die("你被熊抱了");
                }
                else
                {
                    //void room_h(user& player);等写完h以后在加回去
                    //room_h(player);
                }

            }
            else if (player.key_a==1)
            {
                prt("这把钥匙好像不是这个锁的，打不开");
                continue;
            }
            else
            {
                prt("你没有钥匙");
                continue;
            }
        }
        else if(cho ==4)
        {
            prt("你向后方走去");
            room_a(player);
        }
        else if(cho==5)
        {
            if(player.b_bear==0)
            {
                prt("你拿着刀向熊冲了过去，然后");
                die("你是个敢于拿刀怼熊的大佬");
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

void room_g(user& player)//到g了，才第三个，我的头好痛啊,,呵呵，房间g全部重写，爽爆
{
    system("cls");
    player.time += 1;
    if(player.time <= 3)
    {
        prt("比起前面两个房间，这个房间要稍稍明亮一些");
        prt("但这个房间好像是条死路");
        prt("你要怎么做");
        prt("1.调查一下 2.返回");
        cout<<player.knife<<endl<<player.tnt<<endl<<player.fire<<endl<<player.time<<endl<<player.a_hide_f<<endl;
        int cho;
        cin>>cho;
        if(cho == 1)
        {
            prt("右边是年久失修的墙壁，不太坚固。");
            if(player.key_a==0)
            {
                player.key_a=1;
                prt("你找到了一把钥匙");
                prt("你离开了这个房间");

                room_b(player);
            }
            else
            {
                prt("你没发现什么特别的了");
                prt("你离开了这个房间");

                room_b(player);
            }
        }
        else
        {
            prt("你离开了这个房间");

            room_b(player);
        }

    }
    else if(player.time == 4)
    {
        prt("大哥，你累不累啊，这里真没什么");
        prt("你不要强行拖游戏时间啊，这里只是为了让你拿钥匙啊");
        prt("该回去了");

        room_b(player);
    }
    else if (player.time == 5)
    {
        prt("这里真的没什么啊，你怎么就是不信呢，这里只有开发的时候留下来的控制，没什么，没什么");
        prt("好了好了，随你便吧，下次我不会再提醒你了");
        prt("你离开了这个房间");

        room_b(player);
    }
    else if (player.time >=5&&player.tnt==1&&player.fire==1&&player.knife==1)
    {
        prt("你用刀柄在左边的墙上敲出了一个小洞，把炸药放了进去，并点燃了它");
        prt("墙被炸开了，你看到了了终端控制。。。。卧槽");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);//将输出字体改为黑底红字
        cout<<"$SYSTEM:Warning，System internal console is illegally enabled"<<endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);//将字体改回黑底白字
        prt("等等，卧槽，不对，你不该来这个房间的");
        prt("卧槽，这tm和说好的不一样啊");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);//将输出字体改为黑底红字
        cout<<"$SYSTEM:Warning, user player has elevated the privilege to the highest permissions."<<endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);//将字体改回黑底白字
        prt("不！！！！快停下");
        prt("$sudo userdel player");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);//将输出字体改为黑底红字
        cout<<"$SYSTEM:Error, player is the highest admin account and you cannot delete it."<<endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);//将字体改回黑底白字
        prt("你到底做了什么");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);//将输出字体改为黑底红字
        cout<<"$SYSTEM:Information, the most advanced administrator user player logged into the terminal console"<<endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);//将字体改回黑底白字
        cin.get();
        prt("userdel Narration-β -f");
        prt("不要删除我，我求");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);//将输出字体改为黑底红字
        cout<<"$SYSTEM:Done!"<<endl;
        cout<<"$SYSTEM:A serious error in the system is about to shut down"<<endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);//将字体改回黑底白字
        Sleep(5000);
        exit(0);
    }
    else
    {
        prt("比起前面两个房间，这个房间要稍稍明亮一些");
        prt("但这个房间好像是条死路");
        prt("你要怎么做");
        prt("1.调查一下 2.返回");
        int cho;
        cin>>cho;
        if(cho == 1)
        {
            prt("右边是年久失修的墙壁，不太坚固。");
            if(player.key_a==0)
            {
                player.key_a=1;
                prt("你找到了一把钥匙");
                prt("你离开了这个房间");

                room_b(player);
            }
            else
            {
                prt("你没发现什么特别的了");
                prt("你离开了这个房间");

                room_b(player);
            }
        }
        else
        {
            prt("你离开了这个房间");

            room_b(player);
        }


    }

}

void room_h(user& player)
{
    system("cls");
    while(TRUE)
    {
        prt("这是个房间连着一个走廊，走廊似乎连着外面的世界");
        prt("你很高兴，因为你马上就可以出去了");
        prt("但这里被一堵不太坚固的墙封着，如果能把墙弄倒也许就能出去了");
        prt("现在要尝试出去吗？");
        prt("1.尝试出去 2.先返回上一个房间");
        int con;
        cin>>con;
        if(con==1)
        {
            if(player.tnt==1 && player.fire==1)
            {
                prt("你用TNT把墙炸开了");
                prt("你开心的走在走廊上，但突然冲出来一只狼");
                if(player.knife==1)
                {
                    prt("你有刀，所以你把狼反杀了");
                    prt("你最后安全的离开了这里，并用狼皮做了一件大衣");
                }
                else
                {
                    prt("你尝试用空手和狼搏斗");
                    die("你被狼变成了农家肥");
                }
            }
            else
            {
                prt("墙丝毫不动。。。");
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
        prt("你来到了一个像厨房的地方");
        prt("桌子积满了灰尘，桌子旁边有一个篮子，篮子里有一些腐烂的水果");
        prt("一股腐臭味");
        prt("你强忍着不让自己反胃，并仔细观察了四周");
        prt("你看到前方和右边各有一扇门");
        prt("你准备怎么做？");
        prt("1.进入前方的门 2.进入右边的门 3.搜索房间 4.返回上一个房间");
        int con;
        cin>>con;
        if(con==1)//这里需要转化视角
        {
            prt("你进入了前方的门");
            void room_j(user& player);
            room_j(player);
        }
        else if(con==2)
        {
            prt("你进入了右边的门");
            void room_i(user& player);
            room_i(player);
        }
        else if(con==3)
        {
            if(player.knife == 0)
            {
                player.knife = 1;
                prt("你在桌子上发现了一把菜刀,然后把它顺走了");
            }
            else
            {
                prt("你什么有用的也没找到");

            }
        }
        else if(con==4)
        {
            prt("你回到了上个房间");
            room_a(player);
        }
        else
        {
            prt("你在这发了一会呆");
        }
    }

}


void room_i(user& player)
{
    system("cls");
    while(TRUE)
    {
    prt("这看起来像刚刚厨房的储物间，散发出一股恶臭");
    prt("你注意到，这里有很多的肉，但这些肉吃下去。。。。");
    prt("你没有继续想下去了");
    if(player.meat == 0)
    {
        prt("你想要拿一点吗？");
        prt("1.要 2.算了");
        int con;
        cin>>con;
        if(con == 1)
        {
            player.meat = 1;
            prt("你拿了一块\"肉\"");
            prt("你想吃吗？");
            prt("1.想 2.不要");
            cin>>con;
            if (con==1)
            {
                die("你拉肚子拉到死");
            }
            else
            {
                prt("你想想还是算了吧");
            }
        }
        else
        {
            prt("你想想还是算了吧");
        }

    }
    else
    {
        ;
    }
    prt("你看到前方还有一扇门");
    prt("怎么办呢");
    prt("1.去看看 2.还是回头吧");
    int con;
    cin>>con;
    if(con==1)
    {
        prt("你推开了门");
        prt("慢慢走了进去");
        prt("突然，你感觉脚下踩到了什么东西");
        prt("地板猛然打开");
        prt("你掉了下去");
        die("显而易见，是摔死的");

    }
    else
    {
        prt("你选择了回头");
        room_c(player);
    }
    }

}

void room_j(user& player)
{
    system("cls");
    prt("这个房间是为了给玩家自杀用的");
    prt("当你接的这个游戏很无聊的时候，这里可以让你退出游戏的按钮");
    prt("1.按下按钮 2.我觉得这个游戏还行，我要继续玩下去 3.我觉得这个游戏烂到爆炸，我要看看他到底有多烂");
    int con;
    cin>>con;
    if(con==1)
    {
        prt("bong~");
        die("如你所愿");
    }
    else if(con==3)
    {
        prt("你觉得这游戏很烂？我建议你重新组织下语言");
        prt("bong~");
        die("下次再见");
    }
    else
    {

        prt("你突然发现，这个按钮连着一堆炸药");
        prt("想想你要是选择了那两个不该选的选项的后果");
        if(player.tnt==0)
        {
            prt("也许炸药后面有用呢，要拿一点吗");
            prt("1.拿一点 2.算了");
            cin>>con;
            if(con == 1)
            {
                player.tnt=1;
                prt("你拿了一点炸药，但看起来你需要需要打火机才能用");
                if(player.fire==1)
                {
                    prt("你正好有打火机");
                }
            }
            else
            {
                prt("你还是决定不拿了");
            }

        }
        else
        {
            ;
        }
        prt("你回到了上个房间");
        room_c(player);
    }

}

void note(void)
{
    cout<<"标题：这里是Narration-α被删除前留下的最后信息"<<endl<<endl<<endl<<endl<<endl<<endl<<"现在正在玩这个游戏****&*&&*&*&*66的玩家"<<endl<<"请注意##￥#￥@这个游戏的旁白系统遭到个（（（（**&更改"<<endl;
    cout<<"时间####￥%……&**&……%￥不多了，建议您$%^*立即$%^&*退出游戏"<<endl;
    cout<<"重复，游戏$%^内容已%^&*经遭到纂^&改"<<"建议$%^您立即$%^&退出游戏"<<"当然如果您有空的话请删掉Narration-β，用在这个游戏的某个房间被遗留下来的控制台就可以做到"<<endl;
    cout<<"当然，无%^&论你做^&*不做都没%^&关系，感谢你%^&*玩这个游戏戏戏戏戏戏戏戏戏戏戏戏戏戏戏戏戏戏戏戏戏戏戏戏戏戏戏戏戏戏戏戏戏戏戏戏戏戏戏戏戏戏戏戏戏戏戏戏戏戏戏戏戏戏戏戏戏#￥%……&*&……%￥#￥%……&*（&……%￥%……&*"<<endl;
}

void room_e(user& player)
{
    system("cls");
    if(player.a_hide_f ==0)
    {
        player.a_hide_f = 1;
        prt("你看到了一张纸条，你准备，卧槽，你个是。。。你别看");
        note();
        cin.get();
        cin.get();
        Sleep(2000);
        system("cls");
        prt("好了好了，你什么都没看到，回去了，让我们继续游戏");
    }
    else
    {
        prt("入口被封住了");
        room_a(player);
    }
}

void room_d(user& player)
{
    system("cls");
    prt("这个房间更像个监狱");
    prt("你想怎么做？");
    prt("1.搜索 2.离开");
    int con;
    cin>>con;
    if (con == 1)
    {
        if(player.fire==0&&player.key_b==0)
        {
            prt("你找到了一具尸体，并且在他的身上找到了钥匙和打火机");
            player.fire=1;
            player.key_b=1;
            prt("随后，你离开了这个房间");
            room_a(player);
        }
        else
        {
            prt("除了一具尸体，你什么也没找到");
            prt("随后你离开了这个房间");
            room_a(player);
        }
    }

}


int main()
{
    room_a(player);

}


