    /********----C bool - значений-----*********/

/*----------------0 - Вариант ----------------------*/

bool symptom(string symOn, string symTw, string symTr)
{
    string yes = "Да";
    if(symOn == yes && symTw == yes && symTr == yes)
        return true;
    else 
        return false;
}
int main()
{
    char get;
    string symOn,symTw,symTr;
    cout << endl << "Вопрос = Да/Нет" << endl;
    cout << endl << "Симптомы !" << endl;
    cout << "1)Kашель ? / ";cin >> symOn;
    cout << "2)Хрипы ? / ";cin >> symTw;
    cout << "3)Затрудненное дыхание ? / ";cin >> symTr;
    get = symptom(symOn,symTw,symTr);
    if(get)cout << endl << "Бронхит!";
    else cout << endl << "Диагноз не поставлен!";
}




/*----------------1 - Вариант ----------------------*/

bool symptom(string symOn, string symTw, string symTr)
{
   if(symOn == "Да" && symTw == "Да" && symTr == "Да")
       return true;
   else 
       return false;
}
int main()
{
    char get;
    string symOn,symTw,symTr;
    cout << endl << "Вопрос = Да/Нет" << endl;
    cout << endl << "Симптомы !" << endl;
    cout << "1)Kашель - ";cin >> symOn;
    cout << "2)Хрипы - ";cin >> symTw;
    cout << "3)Затрудненное дыхание - ";cin >> symTr;
    get = symptom(symOn,symTw,symTr);
    if(get)cout << endl << "Бронхит!";
    else cout << endl << "Диагноз не поставлен!";
}


                 
/*----------------2 - Вариант ----------------------*/

bool symptom(string symOn, string symTw, string symTr)
{
   if(symOn == "Kашель" && symTw == "Хрипы" && symTr == "Затрудненное-дыхание")
       return true;
   else 
       return false;
}
int main()
{
    char get;
    string symOn,symTw,symTr;
    cout << "Симптомы !" << endl;
    cout << "1) - ";cin >> symOn;
    cout << "2) - ";cin >> symTw;
    cout << "3) - ";cin >> symTr;
    get = symptom(symOn,symTw,symTr);
    if(get)cout << endl << "Бронхит!";
    else cout << endl << "Диагноз не поставлен!";
}

/*------------------- 3 - Вариант ---------------------------*/


bool symptom(string data[])
{
    string yes = "Да";
    if(data[0] == yes && data[1] == yes && data[2] == yes)
       return true;
    else 
       return false;
}
int main()
{
    string data[3];
    cout << "Симптомы !" << endl;
    cout << "1)Kашель - ";cin >> data[0];
    cout << "2)Хрипы - ";cin >> data[1];
    cout << "3)Затрудненное дыхание - ";cin >> data[2];
    char get;
    get = symptom(data);
    if(get)cout << endl << "Бронхит!";
    else cout << endl << "Диагноз не поставлен!";
}


         /********----Без bool - значений-----*********/
            
/*-------------------------- 4 - Вариант ------------------------*/


int symptom(string symOn, string symTw, string symTr)
{
    string yes = "Да";
    if(symOn == yes && symTw == yes && symTr == yes)
       return 1;
    else 
       return 0;

}

int main()
{
    char get;
    string symOn,symTw,symTr;
    cout << "Симптомы !" << endl;
    cout << endl;
    cout << "1)Kашель - ";cin >> symOn;
    cout << "2)Хрипы - ";cin >> symTw;
    cout << "3)Затрудненное дыхание - ";cin >> symTr;
    get = symptom(symOn,symTw,symTr);
    if(get)cout << endl << "Бронхит!";
    else cout << endl << "Диагноз не поставлен!";

}

/*-------------------------- 5 - Вариант ------------------------*/

int symptom(string symOn, string symTw, string symTr)
{
    if(symOn == "Kашель" && symTw == "Хрипы" && symTr == "Затрудненное-дыхание")
       return 1;
    else 
       return 0;

}

int main()
{
    int get;
    string symOn,symTw,symTr;
    cout << "Опишите симптомы !" << endl;
    cout << endl;
    cout << "1) - ";cin >> symOn;
    cout << "2) - ";cin >> symTw;
    cout << "3) - ";cin >> symTr;
    get = symptom(symOn,symTw,symTr);
    if(get)cout << endl << "Бронхит!";
    else cout << endl << "Диагноз не поставлен!";

}

/*----------------------------- 6 - Вариант ----------------------------*/

char symptom(string data[])
{
    string yes = "Да";
    if(data[0] == yes && data[1] == yes && data[2] == yes)
       return 1;
    else 
       return 0;
}
int main()
{
    string data[3];
    cout << "Симптомы !" << endl;
    cout << "1)Kашель - ";cin >> data[0];
    cout << "2)Хрипы - ";cin >> data[1];
    cout << "3)Затрудненное дыхание - ";cin >> data[2];
    char get;
    get = symptom(data);
    if(get)cout << endl << "Бронхит!";
    else cout << endl << "Диагноз не поставлен!";
}












       


