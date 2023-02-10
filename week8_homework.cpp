// week8_homework.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>
#include <ctime>
#define yes 1
using namespace std;

void line() {
    for (int i = 0; i < 43; i++) {
        cout << "====";
    }
}


void DrawLine(int farik) {
    switch (farik) {
    case 1: {
        cout << "   *  ";
        break;
    }
    case 2: {
        cout << " *  *";
        break;
    }
    case 3: {
        cout << "  *\n * \n* \n";
        break;
    }
    case 4: {
        cout << "* * \n   \n* *\n";
        break;
    }
    case 5: {
        cout << "* * \n * \n* *\n";
        break;
    }
    case 6: {
        cout << "* * *\n* * *\n* * *";
        break;
    }
    }
}

int main()
{
    /*Завдання 1. Написати програму, яка виводить на екран
лінію заданим символом, вертикальну або горизонтальну, причому лінія може виводитися швидко, нормально
і повільно. Спілкування з користувачем організувати
через меню.*/
    setlocale(LC_ALL, "");
    system("color a");
    srand(time(0));
    char simbol,speed;
    int position,kol;
    cout << "\n\tЗадание 1";
    cout << "\nВведите символ который нужно вывести :";
    cin >> simbol;
    cout << "\nВыбирите количество символов :";
    cin >> kol;
    cout << "\nКак вы хотите вывести линию 1- вертикально  2-горизантально :";
    cin >> position;
    cout << "\nВыбирите скакой скоростю вы хотите вывести линию V-быстро   L- медлено :";
    cin >> speed;
    cout << "\n";
    if (position == 1) {
        if (speed == 'V' || speed == 'v') {
            for (int i = 0; i < kol; i++) {
                cout << "\n" << simbol;
               
            }

        }
        else if (speed == 'L' || speed == 'l') {
            for (int i = 0; i < kol; i++) {
                cout << "\n" << simbol;
                Sleep(1000);
            }
        }
        else
            cout << "\nВы допустили ошыбку при выборе скорости !!!";

    }
    else if (position == 2) {
        if (speed == 'V' || speed == 'v') {
            for (int i = 0; i < kol; i++) {
                cout << simbol<<"  ";
                
            }

        }
        else if (speed == 'L' || speed == 'l') {
            for (int i = 0; i < kol; i++) {
                cout <<  simbol<<"  ";
               Sleep(1000);
            }

        }
        else {
            cout << "\nВы допустили ошыбку при выборе скорости !!!";
        }

    }
    else {
        cout << "\nВы допустили ошибку!!!";
    }
    /*Завдання 2. Написати гру «Кубики». Користувач і комп'ютер по черзі кидають 2 кубики. Переможець той, у кого
за результатами 3х кидків сума більше. Передбачити
красивий інтерфейс гри.*/
   
     int exit ;
     int Player[6], PC[6];
     int sum_pol = 0, sum_pc = 0, sub;
    cout << "\n\a\tЗадание 2";
    cout << "\n\tИгра Кубик "<<endl;
    line();
    cout << "\nПравила очень просты  , у каждого из нас есть по три кидка кубика и побеждает тот у кого сумма чисел за этих кидков вышла большая";
    cout << "\nЕсли ты захочешь выйти из игры то нажми 0 либо нажми лубое число чтобы продолжить :";
    cin >> exit;
    if (exit != 0) {
       
        cout << "\nВы можите выбрать 1- вы начинаете первым кидать кубик 2-компютер начинает первым"<<endl;
        cin >> sub;
        if (sub == 1) {
            for (int i = 0; i < 3; i++) {
                cout << "\n";
                line();
                cout << "\n";
                cout << "\t" << i + 1 << " раунд" << endl;
                Player[i] = rand() % 6 +1;
                cout << "Ваше количество очков :" << endl;
                DrawLine(Player[i]);
                Player[i] = rand() % 6 + 1;
                cout << "\n";
                cout << "Ваше количество очков :" << endl;
                DrawLine(Player[i]);
                cout << "\n";
                line();
                PC[i] = rand() % 6 + 1;
                cout << "\nКоличество очков у ПК :" << endl;
                DrawLine(PC[i]);
                cout << "\n";
                PC[i] = rand() % 6 + 1;
                cout << "Количество очков у ПК :" << endl;
                DrawLine(PC[i]);

                cout << "\n";
                line();
                if (Player[i] == PC[i]) {
                    cout << "\nНичья!!!"<<endl;
                }
                else if (Player[i] < PC[i]) {
                    cout << "\nКомпютер выграл !!!"<<endl;
                }
                else if (Player[i] > PC[i]) {
                    cout << "\nВы победили !!!"<<endl;
                }
                line();
                sum_pol += Player[i];
                sum_pc += PC[i];

            }
            if (sum_pol > sum_pc) {
                cout << "\n\tИтого!!!";
                cout << "\nВы выграли ПК со счетом  " << sum_pol << " : " << sum_pc << " в вашу пользу!!! "<<endl;
                line();
                cout << "\nДо скорой встрече!!!"<<endl;
                line();
            }
            else if (sum_pol == sum_pc) {
                cout << "\n\tИтого!!!";
                cout << "\nУ вас ничья с компютером вы оба набрали по " << sum_pc << "  очков!!!"<<endl;
                line();
                cout << "\nДо скорой встрече!!!"<<endl;
                line();
            
            }
            else {
                cout << "\n\tИтого!!!";
                cout << "\nК сожелению Пк вас выграл со счетом " << sum_pc << " : " << sum_pol << " в его пользу !!!"<<endl;
                line();
                cout << "\nДо скорой встрече!!!"<<endl;
                line();
            }

        }
        if (sub == 2) {
            for (int i = 0; i < 3; i++) {
                cout << "\n";
                line();
                cout << "\n";
                cout << "\t" << i + 1 << " раунд" << endl;
                PC[i] = rand() % 6 + 1;
                cout << "Количество очков у ПК :" << endl;
                DrawLine(PC[i]);
                cout << "\n";
                PC[i] = rand() % 6 + 1;
                cout << "Количество очков у ПК :" << endl;
                DrawLine(PC[i]);
                cout << "\n";
                line();
                Player[i] = rand() % 6 + 1;
                cout << "\nВаше количество очков :" << endl;
                DrawLine(Player[i]);
                Player[i] = rand() % 6 + 1;
                cout << "\n";
                cout << "Ваше количество очков :" << endl;
                DrawLine(Player[i]);
                cout << "\n";
                line();
                if (Player[i] == PC[i]) {
                    cout << "\nНичья!!!" << endl;
                }
                else if (Player[i] < PC[i]) {
                    cout << "\nКомпютер выграл !!!" << endl;
                }
                else if (Player[i] > PC[i]) {
                    cout << "\nВы победили !!!" << endl;
                }
                line();
                sum_pol += Player[i];
                sum_pc += PC[i];

            }
            if (sum_pol > sum_pc) {
                cout << "\n\tИтого!!!";
                cout << "\nВы выграли ПК со счетом  " << sum_pol << " : " << sum_pc << " в вашу пользу!!! " << endl;
                line();
                cout << "\nДо скорой встрече!!!" << endl;
                line();
            }
            else if (sum_pol == sum_pc) {
                cout << "\n\tИтого!!!";
                cout << "\nУ вас ничья с компютером вы оба набрали по " << sum_pc << "  очков!!!" << endl;
                line();
                cout << "\nДо скорой встрече!!!" << endl;
                line();

            }
            else {
                cout << "\n\tИтого!!!";
                cout << "\nК сожелению Пк вас выграл со счетом " << sum_pc << " : " << sum_pol << " в его пользу !!!" << endl;
                line();
                cout << "\nДо скорой встрече!!!" << endl;
                line();
            }
        }
        else
            cout << "\nВы допустили ошибку при выборе .";

    }
    else
        cout << "\nДо следущей встречи ";


        /*Завдання 1. В одновимірному масиві, заповненому випадковими числами, визначити мінімальний і максимальний
           елементи*/

        cout << "\n";
        cout << "\n\tЗадание 3" << endl;
       
        const int size = 12;
        int arr[size];
        int min, max, imin, imax, digreez=0 , dob_par=1;
      
        for (int i = 0; i < size; i++) {
            arr[i] = rand() % 12 + 1;
            cout << arr[i] << "  ";
        }
        min = arr[0];
        max = arr[0];
        
     
        for (int i = 1; i < size; i++)
       {
            if (arr[i] > max)
            {
               max = arr[i];
              
           }

           if (arr[i] < min)
          {
              min = arr[i];
              
           }
       }
        cout << "\nМинимальное число :" << min;
        cout << "\nМаксимальное :" << max;

        /*Завдання 2. Користувач вводить прибуток фірми за рік (12
        місяців). Потім користувач вводить діапазон (наприклад,
        визначити місяць, у якому прибуток був максимальним, і
         місяць, у якому прибуток був мінімальним, з урахуванням
         oбраного діапазону.*/

         /*Завдання 3. В одновимірному масиві, що складається з
             N дійсних чисел, обчислити:
           ■ Суму від'ємних елементів;
           ■ Добуток елементів, що розташовані між min і max
           елементами;
           ■ Добуток елементів з парними номерами;
           ■ Суму елементів, що розташовані між першим і останнім від'ємними елементами.*/
     
        cout << "\n";
        cout << "\n\tЗадание 4";
        for (int i = 0; i < size; i++) {
            cout << "\nВведите зарплату за " <<  i+1  <<" месяц :";
            cin >> arr[i];
        }
        min = arr[0];
        max = arr[0];
        imin = 0;
        imin = 0;
        int min_start = 0, min_end=0;
        int  start_min = 0, end_min = 0;
        for (int i = 1; i < size; i++)
        {
            if (arr[i] > max)
            {
                max = arr[i];
                imax = i;
            }

            if (arr[i] < min)
            {
                min = arr[i];
                imin = i;
            }
            if (arr[i] < 0) {
                
                if (arr[i] < start_min) {
                    start_min = arr[i];
                    min_start = i;
                }
                if (arr[i] > end_min) {
                    end_min = arr[i];
                    min_end = i;
                }
                digreez += arr[i];

            }
            if (i % 2 == 0) {
                dob_par *= arr[i];
            }
        }
        cout << "\nМинимальная зарплата   :" << min << "   в месяце   :" << imin+1;
        cout << "\nМаксимальная :" << max<< "   в месяце   :" << imax+1;

        cout << "\n";
        cout << "\nЗадание 5"<<endl;
        //Добуток елементів, що розташовані між min і max елементами
        int start, end,start1,end1,summa=0,  dob = 1 ;
        if (min_end > min_start) {
            start1 = min_start;
            end1 = min_end;
       }
        if (min_end < min_start) {
            end1 = min_start;
            start1 = min_end;
        }
        for (int i = start1+1; i < end1; i++) {
            summa += arr[i];
        }
        
        if (imin < imax)
       {
        start = imin;
        end = imax;
        
       }
        else
        {
          start = imax;
          end = imin;
          
       }
       
          for (int i = start + 1; i < end; i++)
          {
           dob *= arr[i];
          }
          cout << "\nДобуток елементів, що розташовані між min і max  елементами  :" << dob;
          cout << "\nСуму від'ємних елементів :" << digreez;
          cout << "\nДобуток елементів з парними номерами :" << dob_par;
          cout << "\nСуму елементів, що розташовані між першим і останнім від'ємними елементами :"<<summa;
        
        
          
        return 0;
}

