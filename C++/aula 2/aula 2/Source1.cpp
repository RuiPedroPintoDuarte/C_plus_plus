#include <string>
#include <fstream> 
#include <iostream> 
using namespace std;

struct aluno {
    
    string nome;
    int idade = 0;
    int numero =0;
};
typedef aluno Aluno;


int main1()
{
    ofstream os;  
    ifstream is;
    Aluno alunos[3];
   
    for (int i = 0 ; i < 3; i++)
    {
        cout << " Nome: ";
        getline(cin,alunos[i].nome);

        cout << " Idade: ";
        cin >> alunos[i].idade;

        cout << " Numero: ";
        cin >> alunos[i].numero;

        cin.ignore();

    }    //write 
        os.open("alunos.txt");
        if (os.is_open())
        {
            for (int i = 0; i < 3; i++)
            {
                os << alunos[i].nome << ';' << alunos[i].idade << ';' << alunos[i].numero << endl;
            }
            os.close();

        
            return 0;
        }
        exit(1);
}
