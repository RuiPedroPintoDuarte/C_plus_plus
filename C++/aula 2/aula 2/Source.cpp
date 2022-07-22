#include <fstream> 
#include <iostream>
#include <string>
using namespace std;

struct aluno {

    string nome;
    int idade = 0;
    int numero = 0;
};
typedef aluno Aluno;

 int main()
{
    ifstream is; 
    is.open("alunos.txt");
    if (is.is_open())
    {
        string Nome; 
        while(!is.eof())
        {
            getline(is, Nome );
            cout << Nome << "\n";
        }

        is.close();
        return 0;
    }

    system("pause");
    return 0;
}