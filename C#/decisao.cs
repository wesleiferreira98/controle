using System;
class decisao{
	static void Main(){
		int n1,n2,n3,n4;
		float total=0;
		n1=n2=n3=n4=0;
		string resul="reprovado";

		System.Console.WriteLine("Digite a nota 1");
		n1=int.Parse(System.Console.ReadLine());

		System.Console.WriteLine("Digite a nota 2");
		n2=int.Parse(System.Console.ReadLine());
		
		System.Console.WriteLine("Digite a nota 3");
		n3=int.Parse(System.Console.ReadLine());
		
		System.Console.WriteLine("Digite a nota 4");
		n4=int.Parse(System.Console.ReadLine());

		total=n1+n2+n3+n4;

		if(total>=60){
			resul="Aprovado";
			System.Console.WriteLine("Nota: {0} - Resultado: {1}",total,resul);

		}else{
			resul="reprovado";
			System.Console.WriteLine(resul);
			System.Console.WriteLine("Nota: {0} - Resultado: {1}",total,resul);
		}


	}

}