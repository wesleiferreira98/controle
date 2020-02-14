using System;
public class aluno{
	private string nome;
	private int qtd_men;
	public void set_dados(){
		System.Console.WriteLine("Digite o nome do dicente");
		nome=System.Console.ReadLine();

		System.Console.WriteLine("Digite a quantidade  de matérias do dicente");
		qtd_men=int.Parse(System.Console.ReadLine());

	}
	public void print_dados(){
		System.Console.WriteLine(" O nome do dicente{0}",nome);
		System.Console.WriteLine("A quantidade de matérias do dicente{0}",qtd_men);

	}
	public float mensalidade(){
		float men;
        men=qtd_mem*200;
        return men;
	}
}