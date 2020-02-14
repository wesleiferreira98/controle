using System;
class valores{
    public static void Main(){
        int v1[10],v2[10],soma[10];
        for(int i=0; i<10 i++){
            Console.Write("Digite um número: ");
            v1[i]=int.Parse(Cosole.ReadLine());
            Console.Write("Digite um número: ");
            v2[i]=int.Parse(Cosole.ReadLine());
            soma[i]=v1[i]+v2[i];
        }
        for(int i=0; i<10; i++){
            Console.Write(" O valor da soma dos produtos é igual a: ",soma[i]);
        }
       

    }


}