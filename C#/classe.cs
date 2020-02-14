using System;
 public class aluno{
	private string nome;
	private int qtd_men;
	public aluno(){
		nome = " ";
		qtd_men=0;
	}
	public aluno(string n){
		nome=n;
		qtd_men=0;
	}
	public aluno(string n, int mate){
		nome=n;
		qtd_men=mate;
	}

	public void set_dados(){
		System.Console.WriteLine("Digite o nome do dicente");
		nome=System.Console.ReadLine();

		System.Console.WriteLine("Digite a quantidade  de matérias do dicente");
		qtd_men=int.Parse(System.Console.ReadLine());

	}
	public void print_dados(){
		System.Console.WriteLine("O nome do dicente - {0}",nome);
		System.Console.WriteLine("A quantidade de matérias do dicente - {0}",qtd_men);

	}
	public float mensalidade(){
		float men;
        men=qtd_men*200;
        return men;
	}
	
	 ~aluno(){
	 	System.Console.WriteLine("Aluno {0} removido",nome);

	}
}

class classe{
	static void Main(){
		aluno a1= new aluno();
		aluno a2= new aluno("Marcelo");
		aluno a3= new aluno("Carlos ", 6);
		a1.set_dados();
		a1.print_dados();
		a2.print_dados();
		a3.print_dados();
		System.Console.WriteLine("O valor da mensalidade do dicente é: {0}",a1.mensalidade());
		System.Console.WriteLine("O valor da mensalidade do dicente é: {0}",a2.mensalidade());
		System.Console.WriteLine("O valor da mensalidade do dicente é: {0}",a3.mensalidade());
	}
}