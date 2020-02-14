using System;
using static System.Math;
public interface funcionaro{
	 void set_dados();
	 void print_dados();
	 float salario();
}

class diretor:funcionaro{
	private string nome;
	private int idade;
	private float qtd_dias;
	private float sala;
	private string end;
	private string num_cateira;

	public void set_dados(){
		System.Console.WriteLine("Digite o nome do funcionaro: ");
		nome=System.Console.ReadLine();
		System.Console.WriteLine("Digite o endereço de {0}",nome);
		end=System.Console.ReadLine();
		System.Console.WriteLine("Informe o número da carteira de {0}",nome);
		num_cateira=System.Console.ReadLine();
		System.Console.WriteLine("Informe a quantidade de dias trabalhados de {0}",nome);
		qtd_dias=float.Parse(System.Console.ReadLine());
		System.Console.WriteLine("Informe o salario base  de {0}",nome);
		sala=float.Parse(System.Console.ReadLine());



	}
	public void print_dados(){
		System.Console.WriteLine("O nome do funcionaro {0}",nome);
		System.Console.WriteLine("O endereço de {0} é {1} ",nome,end);
		System.Console.WriteLine("O número da carteira de {0} é {1}",nome,num_cateira);
		System.Console.WriteLine("A quantidade de dias trabalhados de {0} é {1}",nome,qtd_dias);
		System.Console.WriteLine("O salario base  de {0} é {1}",nome,sala);
	}
	public float salario(){
		return sala*qtd_dias+30;
	}
class faxineiro:funcionaro{
	private string nome;
	private int idade;
	private float qtd_dias;
	private float sala;
	private string end;
	private string num_cateira;

	public void set_dados(){
		System.Console.WriteLine("Digite o nome do funcionaro: ");
		nome=System.Console.ReadLine();
		System.Console.WriteLine("Digite o endereço de {0}",nome);
		end=System.Console.ReadLine();
		System.Console.WriteLine("Informe o número da carteira de {0}",nome);
		num_cateira=System.Console.ReadLine();
		System.Console.WriteLine("Informe a quantidade de dias trabalhados de {0}",nome);
		qtd_dias=float.Parse(System.Console.ReadLine());
		System.Console.WriteLine("Informe o salario base  de {0}",nome);
		sala=float.Parse(System.Console.ReadLine());



	}
	public void print_dados(){
		System.Console.WriteLine("O nome do funcionaro {0}",nome);
		System.Console.WriteLine("O endereço de {0} é {1} ",nome,end);
		System.Console.WriteLine("O número da carteira de {0} é {1}",nome,num_cateira);
		System.Console.WriteLine("A quantidade de dias trabalhados de {0} é {1}",nome,qtd_dias);
		System.Console.WriteLine("O salario base  de {0} é {1}",nome,sala);
	}
	public float salario(){
		return sala*qtd_dias+3;
	}

}

}
class cabess{
	static void Main(){
		diretor x=new diretor();
		x.set_dados();
		x.print_dados();
		System.Console.WriteLine("-----------------------------------------------");
		System.Console.WriteLine("O salario real do diretor é {0}",x.salario());
		faxineiro w=new faxineiro();
		w.set_dados();
		w.print_dados();
		System.Console.WriteLine("-----------------------------------------------");
		System.Console.WriteLine("O salario real do faxineiro é {0}",w.salario());


	}
}