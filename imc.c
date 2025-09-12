include <stdio.h>

//main
void main()
{
    //declaracao de variaveis
    float peso, altura, imc;
    
    //1°receber o peso
    printf ("Forneca seu peso: ");
    scanf ("%f", &peso);
    
    //2°receber a altura
    printf ("Forneca sua altura: ");
    scanf ("%f", &altura);
    
    //3°calcular imc 
    imc = peso/(altura*altura);
    
    //exibindo o imc
    printf("\nIMC = %f\n\n", imc);
    
    //verificando a condicao da pessoa
    if (imc < 18.5){
        printf("abaixo do peso");
    }else{
        if( imc < 25){
            printf("peso ideal");
        }else{
            if (imc < 30){
                printf("sobrepeso");
            }else{
                if (imc < 35){
                    printf("obesidade grau 1");
                }else{
                            if (imc < 40){
                                printf("obesidade grau 2");
                            }else{
                                printf("obesidade grau 3");
                            }
                
                }
            }
            
        }
        
    }
    
    
}

