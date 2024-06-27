#include <iostream>

class Pessoa{
    private:
        std::string nome;
    public:
        void setNome(std::string name)
        {
            this->nome = name;
        }
        std::string getNome() { return nome; }
};

int main()
{
    system("clear");

    std::string nome;
    Pessoa a;

    std::getline(std::cin,nome);

    a.setNome(nome);

    std::cout << a.getNome() << std::endl;


    return 0;
}
