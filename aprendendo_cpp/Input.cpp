#include <iostream>  // para std::cout e std::cin

int main()
{
    std::cout << "Entre com um número: "; // pergunta no terminal

    int x{};      
    std::cin >> x; // na mesma linha o terminal abre o espaço para digitar

    std::cout << "You entered " << x << '\n'; // escreve no terminal, em outra linha, o que foi colocado
    return 0;
}
