#include<bits/stdc++.h>
#include<windows.h>

using namespace std;



int main(){


    //starting:
    for(int i=0; i<8; i++) cout<<endl;
    cout<<"                                                  ";cout<<"I";Sleep(200);cout<<"n";Sleep(200);cout<<" ";Sleep(200);cout<<"T";Sleep(200);cout<<"h";Sleep(200);cout<<"e";Sleep(200);cout<<" ";
    Sleep(200);cout<<"N";Sleep(200);cout<<"a";Sleep(200);cout<<"m";Sleep(200);cout<<"e ";Sleep(200);cout<<"o";Sleep(200);cout<<"f";Sleep(200);cout<<" ";Sleep(700);cout<<"GOD";Sleep(500);
    cout<<endl<<endl<<endl<<endl;cout<<"               Made by :";Sleep(400);cout<<" Mohamadreza Haami ";Sleep(4000);system("cls");cout<<endl;






    /////
    char set[1000];
    char rabete1 [1000][2];
    char rabete2 [1000][2];

    //q1
    cout<<"   A: ? "<<endl<<"   ";
    for(int i=0; i<7; i++){ cout<<"-"; Sleep(10);} cout<<endl;

    // filling the SET
    int n;
    cout<<"   Enter the Set size : ";
    cin>>n;
    cout<<endl;Sleep(200);
    cout<<"   Enter the Set please: ";
    for(int i=0; i<n; i++)
    {
        cin>>set[i];
    //checking SET
    for(int j=0; j<i; j++)
    {
        if(set[i]==set[j])
        {
            i--;
            n--;
        }
    }
    }
    cout<<endl;

    //end of filling SET
    for(int i=0; i<31; i++)
    {
        cout<<".";
        Sleep(10);
    }
    cout<<endl<<endl;

    //filling R1
    int n2;Sleep(200);
    cout<<"   Enter the number of R1 pairs: ";
    cin>>n2;
    cout<<endl;Sleep(200);
    for(int i=0; i<n2; i++)
    {
        cout<<"   Enter the pair : ";
        for(int j=0; j<2; j++)
            {
                cin>>rabete1[i][j];
            }
    //checking R1
    for(int k=0; k<i+1; k++)
    {
        if(rabete1[i][0]== rabete1[k][0] && rabete1[i][1]==rabete1[k][1] && k!=i)
        {
            i--;
            n2--;
            break;
        }
    }
        cout<<endl;
    }
    //end of filling R1
    for(int i=0; i<31; i++)
    {
        cout<<".";
        Sleep(10);
    }
    cout<<endl<<endl;

    //filling R2
    int n3;Sleep(200);
    cout<<"   Enter the number of R2 pairs: ";
    cin>>n3;
    cout<<endl;Sleep(200);
    for(int i=0; i<n3; i++)
        {
        cout<<"   Enter the pair : ";
        for(int j=0; j<2; j++)
            {
                cin>>rabete2[i][j];
            }
    //checking R2
    for(int k=0; k<i+1; k++)
    {
        if(rabete2[i][0]== rabete2[k][0] && rabete2[i][1]==rabete2[k][1] && k!=i)
        {
            i--;
            n3--;
            break;
        }
    }
        cout<<endl;
        }
    cout<<endl;
    //end of filling R2
    for(int i=0; i<31; i++)
    {
        cout<<".";
        Sleep(8);
    }
    cout<<endl;

    //nice ms & end of filling
    cout<<endl<<endl<<"Thank you!";
    Sleep(1000);system("cls");cout<<endl;

    //showing the Rs and their futures (a)

    //q1
    cout<<"   A: ? "<<endl<<"   ";
    for(int i=0; i<7; i++){ cout<<"-"; Sleep(10);} cout<<endl;

    //show SET
    cout<<"   SET = { ";
    for(int i=0; i<n; i++)
    {
        cout<<set[i];
        if(i != n-1) cout<<", ";
    }
    cout<<" }";
    cout<<endl<<endl;


    ////R1

    //show R1
    Sleep(300);
    cout<<"   R1  = { ";
    for(int i=0; i<n2; i++)
        {
        for(int j=0; j<2; j++)
            {
                if(j==0) cout<<"( ";
                cout<<rabete1[i][j];
                if(j==0) cout<<", ";
                if(j==1 && i!=n2-1) cout<<"), ";
                if(j==1 && i ==n2-1) cout<<")";
            }
        }
    cout<<" }"<<endl<<endl;

    //show R2
    Sleep(300);
    cout<<"   R2  = { ";
    for(int i=0; i<n3; i++)
        {
        for(int j=0; j<2; j++)
            {
                if(j==0) cout<<"( ";
                cout<<rabete2[i][j];
                if(j==0) cout<<", ";
                if(j==1 && i!=n3-1) cout<<"), ";
                if(j==1 && i ==n3-1) cout<<")";
            }
        }
    cout<<" }"<<endl<<endl;

    ////R1
    cout<<"   R1 : ";
    //baztabi R1
    int b1=0;
    for(int i=0; i<n; i++)
    {
        char baz = set[i];
        for(int j=0; j<n2; j++)
        {
            if(rabete1[j][0]==rabete1[j][1]&& rabete1[j][1]==baz)
            {
                b1++;
            }
        }
    }
    if(b1==n)
    {
        Sleep(200);
        cout<<" baztabi Darad!,  ";
    }
    else
    {
        Sleep(200);
        cout<<" baztabi Nadarad!,  ";
    }

    //tagharoni R1
    int tagharoni1 [n2];
    int tt1=0;
    int zt1=0;
    for(int i=0; i<n2; i++) tagharoni1[i]=0;
    for(int i=0; i<n2; i++)
    {
        for(int j=0; j<n2; j++)
        {
            if(rabete1[j][0]==rabete1[i][1] && rabete1[j][1]==rabete1[i][0])
            {
                tagharoni1[i]=1;
                tagharoni1[j]=1;
                if(rabete1[j][0]==rabete1[j][1]) zt1++;
            }
        }
    }
    for(int i=0; i<n2; i++)
    {
        if(tagharoni1[i]==1) tt1++;
    }
    Sleep(200);
    if(tt1==n2) cout<<" tagharoni Darad!,  ";
    else cout<<" tagharoni Nadarad!,  ";

    //zede tagharoni1
    Sleep(200);
    if(zt1==n2) cout<<" ZEDE tagharoni Darad!,  ";
    else cout<<" ZEDE tagharoni Nadarad!,  ";

    //TAADI1
    bool t1 = true;
    for(int i=0;i<n2;i++)
        for(int j=0;j<n2;j++)
        {
            if(rabete1[i][1]==rabete1[j][0])
            {
                bool t = false;
                for(int k=0;k<n2;k++)
                    if(rabete1[k][0]==rabete1[i][0] && rabete1[k][1]==rabete1[j][1])
                    {
                        t = true;
                        break;
                    }

                if(!t)
                {
                    t1 = false;
                    break;
                }

            }
        }

    if(t1)
        cout << " Taadi Darad!" << endl<<endl;
    else
        cout << " Taadi Nadarad!" << endl<<endl;

    ////R2
    cout<<"   R2 : ";
    //baztabi R2
    int b2=0;
    for(int i=0; i<n; i++)
    {
        char baz = set[i];
        for(int j=0; j<n3; j++)
        {
            if(rabete2[j][0]==rabete2[j][1]&& rabete2[j][1]==baz)
            {
                b2++;
            }
        }
    }
    if(b2==n)
    {
        Sleep(200);
        cout<<" baztabi Darad!,  ";
    }
    else
    {
        Sleep(200);
        cout<<" baztabi Nadarad!,  ";
    }

    //tagharoni R2
    int tagharoni2 [n3];
    int tt2=0;
    int zt2=0;
    for(int i=0; i<n3; i++) tagharoni2[i]=0;
    for(int i=0; i<n3; i++)
    {
        for(int j=0; j<n3; j++)
        {
            if(rabete2[j][0]==rabete2[i][1] && rabete2[j][1]==rabete2[i][0])
            {
                tagharoni2[i]=1;
                tagharoni2[j]=1;
                if(rabete2[j][0]==rabete2[j][1]) zt2++;
            }
        }
    }
    for(int i=0; i<n3; i++)
    {
        if(tagharoni2[i]==1) tt2++;
    }
    Sleep(200);
    if(tt2==n3) cout<<" tagharoni Darad!,  ";
    else cout<<" tagharoni Nadarad!,  ";

    //zede tagharoni2
    Sleep(200);
    if(zt2==n3) cout<<" ZEDE tagharoni Darad!,  ";
    else cout<<" ZEDE tagharoni Nadarad!,  ";

    //TAADI2
    bool t2 = true;
    for(int i=0;i<n3;i++)
        for(int j=0;j<n3;j++)
        {
            if(rabete2[i][1]==rabete2[j][0])
            {
                bool t = false;
                for(int k=0;k<n2;k++)
                    if(rabete2[k][0]==rabete2[i][0] && rabete2[k][1]==rabete2[j][1])
                    {
                        t = true;
                        break;
                    }

                if(!t)
                {
                    t2 = false;
                    break;
                }

            }
        }

    if(t2)
        cout << " Taadi Darad!" << endl;
    else
        cout << " Taadi Nadarad!" << endl;

    //end of q1
    cout<<endl;
    Sleep(100);cout<<"   Part A is ";Sleep(5000);cout<<"DONE!"<<endl<<endl;
    char next1;cout<<"   Enter 'n' to go to the next question please: ";cin>>next1;system("cls");cout<<endl;


    //q2
    Sleep(400);
    cout<<"   A: DONE     B:? "<<endl<<"   ";
    for(int i=0; i<17; i++){ cout<<"-"; Sleep(10);}cout<<endl<<endl;

    //show R1
    Sleep(300);
    cout<<"   R1  = { ";
    for(int i=0; i<n2; i++)
        {
        for(int j=0; j<2; j++)
            {
                if(j==0) cout<<"( ";
                cout<<rabete1[i][j];
                if(j==0) cout<<", ";
                if(j==1 && i!=n2-1) cout<<"), ";
                if(j==1 && i ==n2-1) cout<<")";
            }
        }
    cout<<" }"<<endl<<endl;

    //show R2
    Sleep(300);
    cout<<"   R2  = { ";
    for(int i=0; i<n3; i++)
        {
        for(int j=0; j<2; j++)
            {
                if(j==0) cout<<"( ";
                cout<<rabete2[i][j];
                if(j==0) cout<<", ";
                if(j==1 && i !=n3-1) cout<<"), ";
                if(j==1 && i ==n3-1) cout<<")";
            }
        }
    cout<<" }"<<endl<<endl<<endl;

    //R1 U R2
    char ejtema [1000][2];
    int ej=0;

    int p2=n2-1;
    int p3=n3-1;

    while(p2>=0)
    {
        ejtema[ej][0]= rabete1[p2][0];
        ejtema[ej][1]= rabete1[p2][1];
        ej++;
        p2--;
    }
    while(p3>=0)
    {
        ejtema[ej][0]= rabete2[p3][0];
        ejtema[ej][1]= rabete2[p3][1];
        ej++;
        p3--;
        for(int i=0; i<ej-1; i++)
        {
            if(ejtema[i][0]==ejtema[ej-1][0] && ejtema[i][1]== ejtema[ej-1][1])
            {
                ej--;
            }
        }
    }


    //Show R1 U R2
    Sleep(300);
    cout<<"   R1 U R2 = { ";
    for(int i=0; i<ej; i++)
        {
        for(int j=0; j<2; j++)
            {
                if(j==0) cout<<"( ";
                cout<<ejtema[i][j];
                if(j==0) cout<<", ";
                if(j==1 && i!=ej-1) cout<<"), ";
                if(j==1 && i==ej-1) cout<<")";
            }
        }
    cout<<" }"<<endl<<endl;

    //R1 n R2
    char eshterak [1000][2];
    int esh=0;
    int q2=n2;
    int q3=n3;
    for(int i=0; i<q2; i++)
    {
        for(int j=0; j<q3; j++)
        {
            if(rabete1[i][0]== rabete2[j][0] && rabete1[i][1]== rabete2[j][1])
            {
                eshterak[esh][0]= rabete1[i][0];
                eshterak[esh][1]= rabete1[i][1];
                esh++;
                break;
            }
        }
    }

    //Show R1 n R2
    Sleep(300);
    cout<<"   R1 n R2 = { ";
    for(int i=0; i<esh; i++)
        {
        for(int j=0; j<2; j++)
            {
                if(j==0) cout<<"( ";
                cout<<eshterak[i][j];
                if(j==0) cout<<", ";
                if(j==1 && i!=esh-1) cout<<"), ";
                if(j==1 && i==esh-1) cout<<")";
            }
        }
    cout<<" }"<<endl<<endl;

    // R1 - R2
    char tafazol1 [1000][2];

    for(int i=0; i<n2; i++)
    {
        tafazol1[i][0]=rabete1[i][0];
        tafazol1[i][1]=rabete1[i][1];
    }
    for(int i=0; i<n2; i++)
    {
        for(int j=0; j<n3; j++)
        {
            if(tafazol1[i][0]==rabete2[j][0] && tafazol1[i][1]==rabete2[j][1])
            {
                tafazol1[i][0]='@';
                tafazol1[i][1]='@';
                break;
            }
        }
    }

    // Show R1 - R2
    Sleep(300);
    cout<<"   R1 - R2 = { ";
    for(int i=0; i<n2; i++)
        {
        for(int j=0; j<2; j++)
            {
                if(tafazol1[i][j] != '@')
                {
                    if(j==0) cout<<"( ";
                cout<<tafazol1[i][j];
                if(j==0) cout<<", ";
                if(j==1 && i!=n2-1) cout<<"), ";
                if(j==1 && i==n2-1) cout<<")";

                }

            }
        }
    cout<<" }"<<endl<<endl;

    // R2 - R1
    char tafazol2 [1000][2];

    for(int i=0; i<n3; i++)
    {
        tafazol2[i][0]=rabete2[i][0];
        tafazol2[i][1]=rabete2[i][1];
    }
    for(int i=0; i<n3; i++)
    {
        for(int j=0; j<n2; j++)
        {
            if(tafazol2[i][0]==rabete1[j][0] && tafazol2[i][1]==rabete1[j][1])
            {
                tafazol2[i][0]='@';
                tafazol2[i][1]='@';
                break;
            }
        }
    }

    // Show R2 - R1
    Sleep(300);
    cout<<"   R2 - R1 = { ";
    for(int i=0; i<n3; i++)
        {
        for(int j=0; j<2; j++)
            {
                if(tafazol2[i][j] != '@')
                {
                    if(j==0) cout<<"( ";
                cout<<tafazol2[i][j];
                if(j==0) cout<<", ";
                if(j==1 && i!=n3-1) cout<<"), ";
                if(j==1 && i==n3-1) cout<<")";

                }

            }
        }
    cout<<" }"<<endl<<endl;

    //end of q2
    cout<<endl;
    Sleep(100);cout<<"   Part B is ";Sleep(5000);cout<<"DONE!"<<endl<<endl;
    char next2;cout<<"   Enter 'n' to go to the next question please: ";cin>>next2;system("cls");cout<<endl;

    //q3
    Sleep(400);
    cout<<"   A: DONE     B: DONE     C: ?"<<endl<<"   ";
    for(int i=0; i<31; i++){ cout<<"-"; Sleep(10);}cout<<endl<<endl;

    //show R1
    Sleep(300);
    cout<<"   R1  = { ";
    for(int i=0; i<n2; i++)
        {
        for(int j=0; j<2; j++)
            {
                if(j==0) cout<<"( ";
                cout<<rabete1[i][j];
                if(j==0) cout<<", ";
                if(j==1 && i!=n2-1) cout<<"), ";
                if(j==1 && i ==n2-1) cout<<")";
            }
        }
    cout<<" }"<<endl<<endl;

    //show R2
    Sleep(300);
    cout<<"   R2  = { ";
    for(int i=0; i<n3; i++)
        {
        for(int j=0; j<2; j++)
            {
                if(j==0) cout<<"( ";
                cout<<rabete2[i][j];
                if(j==0) cout<<", ";
                if(j==1 && i !=n3-1) cout<<"), ";
                if(j==1 && i ==n3-1) cout<<")";
            }
        }
    cout<<" }"<<endl<<endl<<endl;

    //R1oR2
    char tarkib1 [1000][2];
    int tar1=0;
    for(int i=0; i<n2; i++)
    {
        for(int j=0; j<n3; j++)
        {
            if(rabete1[i][1]==rabete2[j][0])
            {
                tarkib1[tar1][0]=rabete1[i][0];
                tarkib1[tar1][1]= rabete2[j][1];
                tar1++;
            }
        }
    }

    //Show R1oR2
    Sleep(300);
    cout<<"   R1oR2 = { ";
    for(int i=0; i<tar1; i++)
        {
        for(int j=0; j<2; j++)
            {
                if(j==0) cout<<"( ";
                cout<<tarkib1[i][j];
                if(j==0) cout<<", ";
                if(j==1 && i!=tar1-1) cout<<"), ";
                if(j==1 && i==tar1-1) cout<<")";
            }
        }
    cout<<" }"<<endl<<endl;

    //R2oR1
    char tarkib2 [1000][2];
    int tar2=0;
    for(int i=0; i<n3; i++)
    {
        for(int j=0; j<n2; j++)
        {
            if(rabete2[i][1]==rabete1[j][0])
            {
                tarkib2[tar2][0]=rabete2[i][0];
                tarkib2[tar2][1]= rabete1[j][1];
                tar2++;
            }
        }
    }

    //Show R2oR1
    Sleep(300);
    cout<<"   R2oR1 = { ";
    for(int i=0; i<tar2; i++)
        {
        for(int j=0; j<2; j++)
            {
                if(j==0) cout<<"( ";
                cout<<tarkib2[i][j];
                if(j==0) cout<<", ";
                if(j==1 && i!=tar2-1) cout<<"), ";
                if(j==1 && i==tar2-1) cout<<")";
            }
        }
    cout<<" }"<<endl<<endl;

    //end of q3
    cout<<endl;
    Sleep(100);cout<<"   Part C is ";Sleep(5000);cout<<"DONE!"<<endl<<endl;
    char next3;cout<<"   Enter 'n' to go to the next question please: ";cin>>next3;system("cls");cout<<endl;

    //q4
    Sleep(400);
    cout<<"   A: DONE     B: DONE     C: DONE     D: ?"<<endl<<"   ";
    for(int i=0; i<46; i++){ cout<<"-"; Sleep(10);}cout<<endl<<endl;

    //show R1
    Sleep(300);
    cout<<"   R1  = { ";
    for(int i=0; i<n2; i++)
        {
        for(int j=0; j<2; j++)
            {
                if(j==0) cout<<"( ";
                cout<<rabete1[i][j];
                if(j==0) cout<<", ";
                if(j==1 && i!=n2-1) cout<<"), ";
                if(j==1 && i ==n2-1) cout<<")";
            }
        }
    cout<<" }"<<endl<<endl;

    //show R2
    Sleep(300);
    cout<<"   R2  = { ";
    for(int i=0; i<n3; i++)
        {
        for(int j=0; j<2; j++)
            {
                if(j==0) cout<<"( ";
                cout<<rabete2[i][j];
                if(j==0) cout<<", ";
                if(j==1 && i !=n3-1) cout<<"), ";
                if(j==1 && i ==n3-1) cout<<")";
            }
        }
    cout<<" }"<<endl<<endl<<endl;

    cout<<"   Please enter two object of SET: ";
    char q41,q42;cin>>q41>>q42;cout<<endl<<endl;

    //q41
    char vojod1 [1000][2];
    int voj1=0;
    for(int i=0; i<ej; i++)
    {
        if(ejtema[i][0]==q41 || ejtema[i][1]==q41)
        {
            vojod1[voj1][0]=ejtema[i][0];
            vojod1[voj1][1]=ejtema[i][1];
            voj1++;
        }
    }

    //q42
    char vojod2 [1000][2];
    int voj2=0;
    for(int i=0; i<ej; i++)
    {
        if(ejtema[i][0]==q42 || ejtema[i][1]==q42)
        {
            vojod2[voj2][0]=ejtema[i][0];
            vojod2[voj2][1]=ejtema[i][1];
            voj2++;
        }
    }

    //Show being1
    Sleep(300);
    cout<<"   Relations for first object are = { ";
    for(int i=0; i<voj1; i++)
        {
        for(int j=0; j<2; j++)
            {
                if(j==0) cout<<"( ";
                cout<<vojod1[i][j];
                if(j==0) cout<<", ";
                if(j==1 && i!=voj1-1) cout<<"), ";
                if(j==1 && i==voj1-1) cout<<")";
            }
        }
    cout<<" }"<<endl<<endl;

    //Show being2
    Sleep(300);
    cout<<"   Relations for second object are = { ";
    for(int i=0; i<voj2; i++)
        {
        for(int j=0; j<2; j++)
            {
                if(j==0) cout<<"( ";
                cout<<vojod2[i][j];
                if(j==0) cout<<", ";
                if(j==1 && i!=voj2-1) cout<<"), ";
                if(j==1 && i==voj2-1) cout<<")";
            }
        }
    cout<<" }"<<endl<<endl;

    //end of q4
    cout<<endl;
    Sleep(100);cout<<"   Part D is ";Sleep(5000);cout<<"DONE!"<<endl<<endl;
    char next4;cout<<"   Enter 'n' to go to the next question please: ";cin>>next4;system("cls");cout<<endl;

    //q5
    Sleep(400);
    cout<<"   A: DONE     B: DONE     C: DONE     D: DONE     E: ?"<<endl<<"   ";
    for(int i=0; i<61; i++){ cout<<"-"; Sleep(10);}cout<<endl<<endl;

    //show R1
    Sleep(300);
    cout<<"   R1  = { ";
    for(int i=0; i<n2; i++)
        {
        for(int j=0; j<2; j++)
            {
                if(j==0) cout<<"( ";
                cout<<rabete1[i][j];
                if(j==0) cout<<", ";
                if(j==1 && i!=n2-1) cout<<"), ";
                if(j==1 && i ==n2-1) cout<<")";
            }
        }
    cout<<" }"<<endl<<endl;

    //show R2
    Sleep(300);
    cout<<"   R2  = { ";
    for(int i=0; i<n3; i++)
        {
        for(int j=0; j<2; j++)
            {
                if(j==0) cout<<"( ";
                cout<<rabete2[i][j];
                if(j==0) cout<<", ";
                if(j==1 && i !=n3-1) cout<<"), ";
                if(j==1 && i ==n3-1) cout<<")";
            }
        }
    cout<<" }"<<endl<<endl<<endl;

    //R1 /_\ R2
    char tafmot [1000][2];

    for(int i=0; i<ej; i++)
    {
        tafmot[i][0]=ejtema[i][0];
        tafmot[i][1]=ejtema[i][1];
    }
    for(int i=0; i<ej; i++)
    {
        for(int j=0; j<esh; j++)
        {
            if(tafmot[i][0]==eshterak[j][0] && tafmot[i][1]==eshterak[j][1])
            {
                tafmot[i][0]='@';
                tafmot[i][1]='@';
                break;
            }
        }
    }

    // Show R1 /_\ R2
    Sleep(300);
    char delta = -108;
    cout<<"   R1/_\\R2 = { ";
    for(int i=0; i<ej; i++)
        {
        for(int j=0; j<2; j++)
            {
                if(tafmot[i][j] != '@')
                {
                    if(j==0) cout<<"( ";
                cout<<tafmot[i][j];
                if(j==0) cout<<", ";
                if(j==1 && i!=ej-1) cout<<"), ";
                if(j==1 && i==ej-1) cout<<")";

                }

            }
        }
        cout<<" }"<<endl;

    //ending
    cout<<endl<<endl<<endl<<endl;
    Sleep(5000);
    cout<<"               THE"<<endl;Sleep(1000);cout<<"                   PROJECT"<<endl;Sleep(1000);cout<<"                             IS"<<endl;Sleep(2000);
    cout<<"                                 DONE!!"<<endl;
    cout<<"                                          :)"<<endl<<endl;


    return 0;
}
