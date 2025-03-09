#include <iostream>
using namespace std;

int main()
{
    /*
    //operators + - * / 
    //logic operators > < == != >= <= 
    //1. Унарні  +5  -5    ++  --
    //2. Бінарні  + - * /  > < == != >= <= 
    //3. Тернарні
     
    //15%3 = 0   15/3=5.0 5*3 = 15 15 - 15 = 0
    //3%10 = 3   3/10 = 0.3  0*10= 0  3 - 0  = 3

    int a = 8;
    cout << "a = " << a << endl;
    //a = a + 1;
    //a += 1;
    //Інкремент постфіксної форми ++
    a++;
    cout << "a = " << a << endl;

    //Інкремент префіксної форми ++
    ++a;
    cout << "a = " << a << endl;

    //a -= 1;//a = a - 1;
    //Декремент постфіксної форми
    a--;
    cout << "a = " << a << endl;

    ////Декремент префіксної форми
    --a;
    cout << "a = " << a << endl;

    int b = 5;
    cout << " b = " << b++ << endl;//------------------>
    cout << " b = " << ++b << endl;//<---------------------
    cout << " b = " << b << endl;

    int c = 10;
    cout << "c = " << c << endl;   
    c += 12;// c = c + 12;
    cout << "c = " << c << endl;
    c -= 12;// c = c - 12;
    cout << "c = " << c << endl;
    c *= 12;// c = c * 12;
    cout << "c = " << c << endl;
    c /= 12;// c = c / 12;
    cout << "c = " << c << endl;
    c %= 12;// c = c % 12;
    cout << "c = " << c << endl;
    */

    /*
    //Класифікація за діапазоном значень

    //1. Звужуюче перетворення
    int a = 3.36;
    cout << "a = " << a << endl;

    //2. Розширююче перетворення.
    float b = 3;//3.00000000
    cout << "b = " << b << endl;

    unsigned int c = 3000000000;

    //Класифікація за способом здійснення перетворення
    //1. Неявне перетворення.
    int A = 23.5;
    cout << "A = " << A << endl;


    //2. Явне перетворення
    double d = 37.4;//  double -->  double  37.4000000000000000
    float h = (float) d;// double ---> float 37.4000000
    int p = (int) h;//float ---> int  37
    */
    //int digit;
    //cout << "Enter digit : ";
    //cin >> digit;
    ////float res = digit / 100; //error
    ////float res = digit / 100.0;
    //float res =(float) digit / 100;
    //cout << "Res = " << res << endl;

    //Уніфікована ініціалізація
    /*int x = { 3.33 };
    cout << "X = " << x << endl;*/

    //1. Оператори порівняння;  < > <= >=
    //2. Оператори рівності; ==   != 
    //3. Логічні оператори об'єднання та негативна інверсія. && (and), || (or)  !

    cout << (5 > 3) << endl; // на екрані буде одиниця, тому що
    // твердження (5>3) — істина.
    cout << (3 < 2) << endl; // на екрані буде 0, тому що (3<2) — брехня

    cout << (5 != 3) << endl; // на екрані буде одиниця,
    // тому що твердження (5!=3) — істина.
    cout << (3 == 2) << endl; // на екрані буде 0, тому що (3==2) —
    // брехня.

    if (true)
    {
        //дія 1;

    }
    else
    {
        //дія 2;
    }

    float a, b;
    cout << "Enter a : ";
    cin >> a;
    cout << "Enter b : ";
    cin >> b;

    if (b == 0)
    {
        cout << "You can’t divide by zero!!!";
    }
    else
    {
        cout << " Res = " << a / b << endl;
    }
    //Тернарний оператор
    //ТВЕРДЖЕННЯ АБО ВИРАЗ ? ДІЯ1 : ДІЯ2;
    (b == 0) ? cout << "You can’t divide by zero!!!" : cout << " Res = " << a / b << endl;
    (b != 0) ? cout << " Res = " << a / b << endl: cout << "You can’t divide by zero!!!";
    int max, min;
 /*   if (a > b)
    {
        max = a;
    }
    else
    {
        max = b;
    }*/
    max = (a > b) ? a : b;
 /*   if (a < b)
    {
        min = a;
    }
    else
    {
        min = b;
    }*/
    min = (a < b) ? a : b;
    cout << "Max = " << max << endl;
    cout << "Min = " << min << endl;

    int month;
    cout << "Enter number of month : ";
    cin >> month;
    if (month == 1)
    {
        cout << "January" << endl;
    }
    else if (month == 2)
    {
        cout << "February" << endl;
    }
    else if (month == 3)
    {
        cout << "March" << endl;
    }
    else if (month == 4)
    {
        cout << "April" << endl;
    }
    else if (month == 5)
    {
        cout << "May" << endl;
    }
    else
    {
        cout << "Error month" << endl;
    }


   int age;
   cout << "Enter age : ";
   cin >> age;
   if (age > 0 && age < 125)
   {
       cout << "Age is correct " << endl;
   }
   else
   {
       cout << "Age is incorrect " << endl;
   }

    




    
}
