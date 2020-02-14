using System;

class calc{
	public int soma(params int[]n){
		int s=0;
		for(int i=0;i<n.Length;i++){
			s+=n[i];
		}
		return s;
	}
	public double soma(params double[]n){
		double s=0;
		for(int i=0;i<n.Length;i++){
			s+=n[i];
		}
		return s;
	}
	public int fatorial(int n){
		int res;
		if(n<=1){
			res= 1;
		}else{
			res=n*fatorial( n-1);
		}
		return res;

	}
}






class metodos{
	static void Main(){
		calc c1= new calc();
		System.Console.WriteLine("A soma dos dois valores é: {0}",c1.soma(2,3,5,6,7,8,8));
		System.Console.WriteLine("A soma dos três valores é: {0}",c1.soma(2,3,5,7,9,2,3));
		System.Console.WriteLine("O fatorial é: {0}",c1.fatorial(10));
	}
}
/*Em C# podemos criar metodos com o mesmo nome, mas eles deverão ter argumentos diferentes ex:
public int soma(int n1, int n2){
		return n1+n2;
}
public int soma(int n1, int n2, int n3){
		return n1+n2;
}
public int soma(double n1, double n2){
		return n1+n2;
	}
	
desta forma podemos somar dois tipos diferentes no mesmo metodo.

params int[]n: possibilita quantidade indeterminada de argumentos para serem operados dentro do metodo.
funções recussivas são aqueles metodos que chamam a si propria durante um operação de fatorial por exemplo.






*/