using System;
abstract class empresa{
	private string nome;
	protected double sala_base;
	private string endereco;
	private string n_carteira;
	public empresa(){
		nome=" ";
		sala_base=0;
		endereco=" ";
		n_carteira=" ";
	}
	public void set_dados(){
		System.Console.WriteLine("Digite o nome do fucinonario");
		nome=System.Console.ReadLine();

		System.Console.WriteLine("Digite o endereço do fucinonario");
		endereco=System.Console.ReadLine();

		System.Console.WriteLine("Digite o número da carteira  do fucinonario");
		n_carteira=System.Console.ReadLine();

		System.Console.WriteLine("Digite o salario base  do fucinonario");
		sala_base=double.Parse(System.Console.ReadLine());
	}
	public void print_dados(){
		System.Console.WriteLine("O nome do fucinonario {0}",nome);
		System.Console.WriteLine("O endereço do fucinonario {0}",endereco);
		System.Console.WriteLine("O número da carteira  do fucinonario {0}",n_carteira);
		System.Console.WriteLine("O salario base  do fucinonario {0}", sala_base);




	}
	~empresa(){

	}
	abstract public double salario();
}
class gerente:empresa{
		public gerente(){

		}
		override  public double salario(){
			return sala_base*34.6;
		}


}
class vendedor:empresa{
		public vendedor(){

		}
		override  public double salario(){
			return sala_base*12;
		}


}
class gestao{
	static void Main(){
		gerente a=new gerente();
		a.set_dados();
		a.print_dados();
		System.Console.WriteLine(" O salario real do gerente é: {0}",a.salario());
		System.Console.WriteLine("----------------------------------------------------");
		vendedor b= new vendedor();
		b.set_dados();
		b.print_dados();
		System.Console.WriteLine(" O salario real do vendedor é: {0}",b.salario());

	}
}