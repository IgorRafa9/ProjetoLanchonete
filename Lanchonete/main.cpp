#include <iostream>
#include <locale>

using namespace std;

void menu();
int escolha(int e);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int esc;

    menu();
    cout << "\n";
  do{
    cout << "Faça seu pedido: ";
    cin >> esc;

    escolha(esc);
  }while(esc > 4);

    return 0;
}

void menu(){
    cout << "1 - X-burger + Batata Grande + Coca 500ml - R$21,90\n";
    cout << "2 - Eggs burger + Batata Grande + Pepsi 500ml - R$19,90\n";
    cout << "3 - Eggs Bacon + Batata Média + Fanta 500ml - R$22,90\n";
    cout << "4 - X-Salada + Suco 500ml - R$15,00\n\n";
}

int escolha(int e){
    float total = 0, preco, valor, troco, totalRest;
    int qtd, forma, formaPag();
    switch(e){
        case 1:
            cout << "1 - X-burger + Batata Grande + Coca 500ml - R$21,90\n";
            preco = 21.90;
            cout << "Quantos vai querer?\n";
            cin >> qtd;
            total += preco * qtd;
            printf("Total: %.2f\n", total);
            cout << "Forma de Pagamento: \n";
            formaPag();
            cin >> forma;
            if(forma == 1){
                cout << "======= Dinheiro =======\n";
                cout << "Informe a quantia de pagamento: ";
                cin >> valor;
                if(valor > total){
                    troco = valor - total;
                    printf("Valor de troco %.2f\n", troco);
                }else if (valor < total){
                do{
                    totalRest = total - valor;
                    printf("Ainda faltam %.2f\n", totalRest);
                    cin >> valor;
                    if(valor > totalRest){
                        troco = valor - totalRest;
                        printf("Valor de troco %.2f\n", troco);
                    }
                }while(total == 0);
                printf("Total pago !! (%.2f)\n", total);
              }
            }else if(forma == 2){
                cout << "Débito\n";
                printf("Valor pago %.2f\n", total);
            }else if(forma == 3){
                cout << "Crédito\n";
                printf("Valor pago %.2f\n", total);
            }else{
                do{
                    cout << "Forma de Pagamento: \n";
                    formaPag();
                    cin >> forma;
                }while(forma > 3);
            }
            break;
        case 2:
            cout << "2 - Eggs burger + Batata Grande + Pepsi 500ml - R$19,90\n";
            preco = 19.90;
            cout << "Quantos vai querer?\n";
            cin >> qtd;
            total += preco * qtd;
            printf("Total: %.2f\n", total);
            cout << "Forma de Pagamento: \n";
            formaPag();
            cin >> forma;
            if(forma == 1){
                cout << "======= Dinheiro =======\n";
                cout << "Informe a quantia de pagamento: ";
                cin >> valor;
                if(valor > total){
                    troco = valor - total;
                    printf("Valor de troco %.2f\n", troco);
                }else if (valor < total){
                do{
                    totalRest = total - valor;
                    printf("Ainda faltam %.2f\n", totalRest);
                    cin >> valor;
                    if(valor > totalRest){
                        troco = valor - totalRest;
                        printf("Valor de troco %.2f\n", troco);
                    }
                }while(total == 0);
                printf("Total pago !! (%.2f)\n", total);
              }
            }else if(forma == 2){
                cout << "Débito\n";
                printf("Valor pago %.2f\n", total);
            }else if(forma == 3){
                cout << "Crédito\n";
                printf("Valor pago %.2f\n", total);
            }else{
                do{
                    cout << "Forma de Pagamento: \n";
                    formaPag();
                    cin >> forma;
                }while(forma > 3);
            }
            break;
        case 3:
            cout << "3 - Eggs Bacon + Batata Média + Fanta 500ml - R$22,90\n";
            preco = 22.90;
            cout << "Quantos vai querer?\n";
            cin >> qtd;
            total += preco * qtd;
            printf("Total: %.2f\n", total);
            cout << "Forma de Pagamento: \n";
            formaPag();
            cin >> forma;
            if(forma == 1){
                cout << "======= Dinheiro =======\n";
                cout << "Informe a quantia de pagamento: ";
                cin >> valor;
                if(valor > total){
                    troco = valor - total;
                    printf("Valor de troco %.2f\n", troco);
                }else if (valor < total){
                do{
                    totalRest = total - valor;
                    printf("Ainda faltam %.2f\n", totalRest);
                    cin >> valor;
                    if(valor > totalRest){
                        troco = valor - totalRest;
                        printf("Valor de troco %.2f\n", troco);
                    }
                }while(total == 0);
                printf("Total pago !! (%.2f)\n", total);
              }
            }else if(forma == 2){
                cout << "Débito\n";
                printf("Valor pago %.2f\n", total);
            }else if(forma == 3){
                cout << "Crédito\n";
                printf("Valor pago %.2f\n", total);
            }else{
                do{
                    cout << "Forma de Pagamento: \n";
                    formaPag();
                    cin >> forma;
                }while(forma > 3);
            }
            break;
        case 4:
            cout << "4 - X-Salada + Suco 500ml - R$15,00\n";
            preco = 15.00;
            cout << "Quantos vai querer?\n";
            cin >> qtd;
            total += preco * qtd;
            printf("Total: %.2f\n", total);
            cout << "Forma de Pagamento: \n";
            formaPag();
            cin >> forma;
            if(forma == 1){
                cout << "======= Dinheiro =======\n";
                cout << "Informe a quantia de pagamento: ";
                cin >> valor;
                if(valor > total){
                    troco = valor - total;
                    printf("Valor de troco %.2f\n", troco);
                }else if (valor < total){
                do{
                    totalRest = total - valor;
                    printf("Ainda faltam %.2f\n", totalRest);
                    cin >> valor;
                    if(valor > totalRest){
                        troco = valor - totalRest;
                        printf("Valor de troco %.2f\n", troco);
                    }
                }while(total == 0);
                printf("Total pago !! (%.2f)\n", total);
              }
            }else if(forma == 2){
                cout << "Débito\n";
                printf("Valor pago %.2f\n", total);
            }else if(forma == 3){
                cout << "Crédito\n";
                printf("Valor pago %.2f\n", total);
            }else{
                do{
                    cout << "Forma de Pagamento: \n";
                    formaPag();
                    cin >> forma;
                }while(forma > 3);
            }
            break;
        default:
            cout << "Opção inválida.\n\n";
            menu();
    }

    return e;
}

void formaPag(){
    cout << "[1] - Dinheiro\n";
    cout << "[2] - Débito\n";
    cout << "[3] - Crédito\n";
}
