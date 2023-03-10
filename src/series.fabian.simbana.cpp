#include<iostream>
#include<ctype.h>
#include <unistd.h>
using namespace std;

int simbañaMenu()
{
    int opc=0;
    cout <<"\n\n\n\t MENU DE OPCIONES" << endl
         <<" 1. salir "         <<    endl  
         <<" 2. serie01 "         <<    endl  
         <<" 3. serie11"        <<    endl      
         <<" 4. serie21 "        <<    endl      
         <<" 5. serie31"  <<    endl      
         <<" Ingresa opc: ";
    cin>>opc;
    cin.clear();
    fflush(stdin);
    return opc;
}

void simbañaSerie01(int n)
{
    int a=0, b=1,c=0;
    cout<<"0 1 ";
 
    for (int i=0; i <n-2;i++){
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
}

void simbañaSerie11(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n-i; j++)
        {
            cout<<j;
        }

        cout<<endl;
    }
    
}

void simbañaSerie21(int n)
{
    int cont=0;
    char s[50];
    cout<<"\nIngrese una frase: ";
    gets(s);
    for (int i = 0;s[i]!='\0'; i++)
    {
        char letraActual=tolower(s[i]);
        if (letraActual=='a' || letraActual=='e'||letraActual=='i'||letraActual=='o'||letraActual=='u')
        {
            cont++;
        }
    }
    cout<<"Tiene "<<cont<<" vocales"<<endl;
}

void simbañaSerie31(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("  ");
        printf("|");
        if (i%2==0){
            printf("__");
        }else{
           printf("__"); 
        }
        printf("  ");
        printf("\n");
        printf("    ");
        for (int e = 0; e < i; e++)
        {
            printf("    ");
        }
        
    }
}
int main()
{
    int n=0;
    cout<<"Cuantos terminos desea para su serie: ";
    cin>>n;   
    do
    {
        switch (simbañaMenu())     
        {
            case 1: exit(0);
                    break;
            case 2: simbañaSerie01(n);             
                    break;
            case 3: simbañaSerie11(n);
                    break;
            case 4: simbañaSerie21(n);            
                    break;
            case 5: simbañaSerie31(n);
                    break;
            default:cout << " Opc no valida...";  
                    break;
        }
        cout << endl << "Press any key to continue...";
        getchar();
    }while (true);
    return 0;
}