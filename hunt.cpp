#include <stdio.h>
#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <unistd.h>

using namespace std;

int main()
{
    int linha = 20;
    int coluna = 20;
    int e, r, t, y;
    int f, g;
    int h, j;
    int resetR = 0;
    int resetP = 0;
    int cont;
    int loop = 0;
    string soul("@");
    string move;

    string start;

    int mover;
    srand(time(0));

    // robo
    f = rand() % 20; // linha
    g = rand() % 20; // coluna

    //f= 19;
    //g= 0;
  
    while (g == 10 && f >= 3)
    {
        f = rand() % 20;
        g = rand() % 20;
        
        //f= 19;
        //g= 0;

        ++resetR;
        cout << "robo reset " << resetR << "x\n";
    }

    // presa
    h = rand() % 20; // linha
    j = rand() % 20; // coluna

    //h = 19;
    //j = 19;

    while (j == 10 && h >= 3)
    {
        h = rand() % 20;
        j = rand() % 20;

        //h = 19;
        //j = 19;

        ++resetP;
        cout << "presa reset " << resetP << "x\n";
    }

    for (int I = 0; I < coluna; I++)
    {
        for (int J = 0; J < linha; J++)
        {
            if (f == I && g == J)
            {
                cout << " " << soul;
            }
            else if (h == I && j == J)
            {
                cout << " %";
            }
            else if (J == 10 && I >= 3)
            {
                cout << " |";
            }
            else
            {
                cout << " -";
            }
        }
        cout << "\n";
    }
    cout << "------------''Pegue o gato''------------\n";
    cout << "Voce deseja jogar 'Manual' ou 'Automatico'?\n(M) Manual\n(A) Automatico\n";
    cin >> start;
    while (start != "m" || start != "M" || start != "a" || start != "A")
    {
        if (start == "M" || start == "m")
        {

            cout << "\n\nDigite W, A, S ou D para se mover\n";
            cout << "voce tambem pode apertar M para mudar o " << soul << "\n";
            cin >> move;

            while (f != h || g != j)
            {
                if (move == "w" || move == "W")
                {
                    f = f - 1;
                    if (f <= -1)
                    {
                        f = f + 1;
                        cout << "NAO A ESCAPATORIA\n";
                    }
                    for (int I = 0; I < coluna; I++)
                    {
                        for (int J = 0; J < linha; J++)
                        {
                            if (f == I && g == J)
                            {
                                cout << " " << soul;
                            }
                            else if (h == I && j == J)
                            {
                                cout << " %";
                            }
                            else if (J == 10 && I >= 3)
                            {
                                cout << " |";
                            }
                            else
                            {
                                cout << " -";
                            }
                        }
                        cout << "\n";
                    }
                    cin >> move;
                }
                else if (move == "s" || move == "S")
                {
                    f = f + 1;
                    if (f >= 20)
                    {
                        f = f - 1;
                        cout << "NAO A ESCAPATORIA\n";
                    }
                    if (g == 10 && f >= 3)
                    {
                        f = f - 1;
                        cout << "nananinanão\n";
                    }
                    for (int I = 0; I < coluna; I++)
                    {
                        for (int J = 0; J < linha; J++)
                        {
                            if (f == I && g == J)
                            {
                                cout << " " << soul;
                            }
                            else if (h == I && j == J)
                            {
                                cout << " %";
                            }
                            else if (J == 10 && I >= 3)
                            {

                                cout << " |";
                            }
                            else
                            {
                                cout << " -";
                            }
                        }
                        cout << "\n";
                    }
                    cin >> move;
                }
                else if (move == "a" || move == "A")
                {
                    g = g - 1;
                    if (g <= -1)
                    {
                        g = g + 1;
                        cout << "NAO A ESCAPATORIA\n";
                    }
                    if (g == 10 && f >= 3)
                    {
                        g = g + 1;
                        cout << "nananinanão\n";
                    }
                    for (int I = 0; I < coluna; I++)
                    {
                        for (int J = 0; J < linha; J++)
                        {
                            if (f == I && g == J)
                            {
                                cout << " " << soul;
                            }
                            else if (h == I && j == J)
                            {
                                cout << " %";
                            }
                            else if (J == 10 && I >= 3)
                            {
                                cout << " |";
                            }
                            else
                            {
                                cout << " -";
                            }
                        }
                        cout << "\n";
                    }
                    cin >> move;
                }
                else if (move == "d" || move == "D")
                {
                    g = g + 1;
                    if (g >= 20)
                    {
                        g = g - 1;
                        cout << "NAO A ESCAPATORIA\n";
                    }
                    if (g == 10 && f >= 3)
                    {
                        g = g - 1;
                        cout << "nananinanão\n";
                    }
                    for (int I = 0; I < coluna; I++)
                    {
                        for (int J = 0; J < linha; J++)
                        {
                            if (f == I && g == J)
                            {
                                cout << " " << soul;
                            }
                            else if (h == I && j == J)
                            {
                                cout << " %";
                            }
                            else if (J == 10 && I >= 3)
                            {
                                cout << " |";
                            }
                            else
                            {
                                cout << " -";
                            }
                        }
                        cout << "\n";
                    }
                    cin >> move;
                }
                else if (move == "M" || move == "m")
                {
                    if (soul == "@")
                    {
                        soul = "$";
                        for (int I = 0; I < coluna; I++)
                        {
                            for (int J = 0; J < linha; J++)
                            {
                                if (f == I && g == J)
                                {
                                    cout << " " << soul;
                                }
                                else if (h == I && j == J)
                                {
                                    cout << " %";
                                }
                                else if (J == 10 && I >= 3)
                                {
                                    cout << " |";
                                }
                                else
                                {
                                    cout << " -";
                                }
                            }
                            cout << "\n";
                        }
                        cin >> move;
                    }
                    else
                    {
                        soul = "@";
                        for (int I = 0; I < coluna; I++)
                        {
                            for (int J = 0; J < linha; J++)
                            {
                                if (f == I && g == J)
                                {
                                    cout << " " << soul;
                                }
                                else if (h == I && j == J)
                                {
                                    cout << " %";
                                }
                                else if (J == 10 && I >= 3)
                                {
                                    cout << " |";
                                }
                                else
                                {
                                    cout << " -";
                                }
                            }
                            cout << "\n";
                        }
                        cin >> move;
                    }
                }
                else
                {
                    cout << "\n!!!VALOR INVALIDO!!!\n";
                    cout << "por favor, Digite 'W', 'A', 'S' ou 'D para mover o " << soul << "\n";
                    cin >> move;
                }
            }
        }

        else if (start == "a" || start == "A")
        {
            cout << "Automatico!!!\n";
            while (f != h || g != j)
            { usleep(130000);
                cout << "\n";

                if (g > j) // A
                {
                    g = g - 1;
                    cout << "esquerda\n";
                    while (g == 10 && f >= 3)
                    {
                        cout <<"cima\n";
                        g = g + 1;
                        f = f - 1;
                    }
                    for (int I = 0; I < coluna; I++)
                    {
                        for (int J = 0; J < linha; J++)
                        {
                            if (f == I && g == J)
                            {
                                cout << " " << soul;
                            }
                            else if (h == I && j == J)
                            {
                                cout << " %";
                            }
                            else if (J == 10 && I >= 3)
                            {
                                cout << " |";
                            }
                            else
                            {
                                cout << " -";
                            }
                        }
                        cout << "\n";
                    }
                }
                else if (g < j) // D
                {
                    g = g + 1;
                    cout << "direita\n";
                    if (g >= 20)
                    {
                        g = g - 1;
                        cout << "NAO A ESCAPATORIA\n";
                    }
                    while (g == 10 && f >= 3)
                    {
                        cout<<"cima\n";
                        g = g - 1;
                        f = f - 1;
                    }
                    for (int I = 0; I < coluna; I++)
                    {
                        for (int J = 0; J < linha; J++)
                        {
                            if (f == I && g == J)
                            {
                                cout << " " << soul;
                            }
                            else if (h == I && j == J)
                            {
                                cout << " %";
                            }
                            else if (J == 10 && I >= 3)
                            {
                                cout << " |";
                            }
                            else
                            {
                                cout << " -";
                            }
                        }
                        cout << "\n";
                    }
                }
                else if (f > h) // W
                {
                    f = f - 1;
                    cout << "cima\n";
                    for (int I = 0; I < coluna; I++)
                    {
                        for (int J = 0; J < linha; J++)
                        {
                            if (f == I && g == J)
                            {
                                cout << " " << soul;
                            }
                            else if (h == I && j == J)
                            {
                                cout << " %";
                            }
                            else if (J == 10 && I >= 3)
                            {
                                cout << " |";
                            }
                            else
                            {
                                cout << " -";
                            }
                        }
                        cout << "\n";
                    }
                }
                else if (f < h) // S
                {
                    f = f + 1;
                    cout << "baixo\n";
                    for (int I = 0; I < coluna; I++)
                    {
                        for (int J = 0; J < linha; J++)
                        {
                            if (f == I && g == J)
                            {
                                cout << " " << soul;
                            }
                            else if (h == I && j == J)
                            {
                                cout << " %";
                            }
                            else if (J == 10 && I >= 3)
                            {

                                cout << " |";
                            }
                            else
                            {
                                cout << " -";
                            }
                        }
                        cout << "\n";
                    }
                }
            }
        }
        if (f == h && g == j)
        {
/*cout <<"▄───▄\n";
cout <<"█▀█▀█\n";
cout <<"█▄█▄█ era um gato islamico, ele explodiu ('NYAAAAaaa BOOOOOOOM') vc morreu :3\n";
cout <<"─███──▄▄\n";
cout <<"─████▐█─█\n";
cout <<"─████───█\n";
cout <<"─▀▀▀▀▀▀▀\n";
*/
cout << "GG";
            break;
        }
        else
        {
            cout << "\nSabe le n crl, digo\n";
            cout << "Ó meu lorde o senhor deseja jogar 'Manual' ou 'Automatico'\n(M) manual\n(A) Automatico\n";
            cin >> start;
        }
    }
}