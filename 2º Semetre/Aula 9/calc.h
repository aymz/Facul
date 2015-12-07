int soma(int a,int b){
    return(a+b);
}
int subtracao(int a,int b){
    return(a-b);
}
int multiplicacao(int a,int b){
    return(a*b);
}
int divisao(int a,int b){
    if (b == 0){
       printf("Divisão por zero!\n");
    }
    else
    {
    return(a/b);
    }
}
