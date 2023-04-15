#include <iostream>
#include <cmath>
#include <math.h>
#include <vector>

using namespace std;

void numeroum()
{
    cout << "Você entrou na questão 1" << endl;
    int INDICE = 13, SOMA = 0, K = 0;
    while (K < INDICE)
    {
        K = K + 1;
        SOMA = SOMA + K;
    }
    cout << "O resultado da soma é:" << SOMA << endl;
}

void numerodois()
{
    cout << "Você entrou na questão 2" << endl;
    int num, a = 0, b = 1, c = 0;
    bool encontrado = false;

    cout << "Digite um numero para verificar se pertence a sequencia de Fibonacci: ";
    cin >> num;

    while (c < num)
    {
        c = a + b;
        a = b;
        b = c;
    }

    if (c == num)
    {
        encontrado = true;
    }

    if (encontrado)
    {
        cout << num << " pertence a sequencia de Fibonacci." << endl;
    }
    else
    {
        cout << num << " nao pertence a sequencia de Fibonacci." << endl;
    }
}

void numerotres()
{
    cout << "Você entrou na questão 3" << endl;
    // Sequência a)
    int a = 1;
    vector<int> seq_a(5, 0);
    int i = 0;
    while (i < seq_a.size())
    {
        seq_a[i] = a;
        i++;
        a += 2;
    }
    cout << "a) O próximo valor é: " << seq_a.back() << endl;

    // Sequência b)
    int b = 2;
    vector<int> seq_b(7, 0);
    i = 0;
    while (i < seq_b.size())
    {
        seq_b[i] = b;
        i++;
        b *= 2;
    }
    cout << "b) O próximo valor é: " << seq_b.back() << endl;

    // Sequência c)
    int c = 0;
    vector<int> seq_c(8, 0);
    i = 0;
    while (i < seq_c.size())
    {
        seq_c[i] = c;
        i++;
        c = (int)pow(sqrt(c) + 1, 2);
    }
    cout << "c) O próximo valor é: " << seq_c.back() << endl;

    // Sequência d)
    int d = 4;
    vector<int> seq_d(9, 0);
    i = 0;
    while (i < seq_d.size())
    {
        seq_d[i] = d;
        i++;
        d += 12;
    }
    cout << "d) O próximo valor é: " << seq_d.back() << endl;

    // Sequência e)
    int e1 = 1, e2 = 1, e3;
    vector<int> seq_e(7, 0);
    seq_e[0] = e1;
    seq_e[1] = e2;
    i = 2;
    while (i < seq_e.size())
    {
        e3 = e1 + e2;
        seq_e[i] = e3;
        i++;
        e1 = e2;
        e2 = e3;
    }
    cout << "e) O próximo valor é: " << seq_e.back() << endl;

    // Sequência f)
    vector<int> seq_f1 = {2, 10, 12, 16, 17, 18, 19, 200, 201, 202};
    vector<int> seq_f2(8, 0);
    i = 0;
    while (i < seq_f2.size())
    {
        seq_f2[i] = seq_f1[i];
        i++;
    }
    cout << "f) O próximo valor é: " << seq_f2.back() << endl;
}

void numeroquatro()
{
    /*
    Para calcular qual veículo estará mais próximo da cidade de Ribeirão Preto quando os dois se encontrarem, podemos utilizar a fórmula distância = velocidade x tempo. A distância total que os dois veículos percorrerão é a soma das distâncias percorridas por cada um. A velocidade relativa dos dois veículos é a soma das velocidades. O tempo que eles levam para se encontrar é a distância total dividida pela velocidade constante. Por fim, podemos calcular a distância que cada veículo percorre até o ponto de encontro. Com base nos cálculos, conclui-se que o carro estará mais próximo da cidade de Ribeirão Preto quando os dois se encontrarem.
    */
    cout << "Você entrou na questão 4" << endl;
    float distancia_total = 200.0;    
    float distancia_ribeirao = 100.0; 
    float velocidade_carro = 110.0;   
    float velocidade_caminhao = 80.0;
    float tempo_pedagio = 5.0 / 60.0; 
    float distancia_carro, distancia_caminhao, tempo;
    float velocidade_constante = velocidade_carro + velocidade_caminhao;
    tempo = distancia_total / velocidade_constante;
    distancia_carro = velocidade_carro * tempo;
    distancia_caminhao = velocidade_caminhao * tempo + 2 * distancia_ribeirao - distancia_carro;
    distancia_caminhao -= velocidade_caminhao * tempo_pedagio * 2;
    if (distancia_carro < distancia_caminhao)
    {
        cout << "O carro está mais próximo de Ribeirão Preto." << endl;
    }
    else
    {
        cout << "O caminhão está mais próximo de Ribeirão Preto." << endl;
    }
}

void numerocinco()
{
    cout << "Você entrou na questão 5" << endl;
    string palavra, invertida;
    cout << "Digite uma palavra para que eu possa inverter: ";
    cin >> palavra;

    // Inverte a string
    for (int i = palavra.length() - 1; i >= 0; i--)
    {
        invertida += palavra[i];
    }

    cout << "A palavra invertida é: " << invertida << endl;
}

int main()
{
int escolha;
   
   while (true) {
      cout << "Digite o número da questão! (ou 0 para sair): ";
      cin >> escolha;
      
      switch (escolha) {
         case 0:
         cout << "Fechando...";
            exit(0);
         case 1:
            numeroum();
            break;
         case 2:
            numerodois();
            break;
         case 3:
            numerotres();
            break;
         case 4:
            numeroquatro();
            break;
         case 5:
            numerocinco();
            break;
         default:
            cout << "Escolha inválida";
            break;
      }
      
      cout << endl;
   }
    return 0;
}
