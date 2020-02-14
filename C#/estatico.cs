/*Os metodos estaticos não precisam da criação de objetos para serem usados
double vpi=mat.pi; esta é a forma de usar uma variavel estatica se referindo diretamente a classe  */

using System;
class mat{
	public static double pi=3.14;
	public static int dobro(int n){
		return n*2;

	}

}
class estatico{
	static void Main(){
		double vpi=mat.pi;
		int num =10;
		System.Console.WriteLine("O dobro do número passado é {0}",mat.dobro(num));
		System.Console.WriteLine("O valor de pi é {0}",vpi);
		
	}
}