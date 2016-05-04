class Pilha
{
    private:
        int topo;
        int *vetor;
        int tamanho;
    public:
    Pilha();
    Pilha(int tamanho);
    ~Pilha();
    void pushPilha(int elemento);
    int popPilha(void);
    int tamPilha(void);
    int topPilha(void);
};
