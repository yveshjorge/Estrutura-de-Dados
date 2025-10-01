#ifndef LOJA_H
#define LOJA_H

typedef struct 
{
    char Produto[50];
    int Quantidade;
    float Preço;

}Item;

Item criarEstoque(char produto, int quantidade, float preço);
void cadastrarProduto(Item P);
void cadastrarQuantidade(Item Q);
void cadastrarPreço(Item Pr);
Item getProduto(char Produto);
Item corrigirPreço(Item PR, float Preço);





#endif
