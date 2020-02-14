using System;
static class estoque{
	static private string nome_prod;
	static private int qtd_prod;
	static private float preco;

	static public void set_dados(){
		System.Console.WriteLine("Digite o nome do produto: ");
		nome_prod=System.Console.ReadLine();

		System.Console.WriteLine("Digite a quantidade de produtos: ");
		qtd_prod=int.Parse(System.Console.ReadLine());

		System.Console.WriteLine("Digite o preco do produto: ");
		preco=float.Parse(System.Console.ReadLine());


	}
	static public void print_dados(){
		System.Console.WriteLine("O nome do produto {0} ",nome_prod);
		System.Console.WriteLine("A quantidade de produtos {0} ",qtd_prod);
		System.Console.WriteLine("O preco do produto {0} ",preco);

	}
}
class mercado{
	static void Main(){
		estoque.set_dados();
		estoque.print_dados();
	}
}