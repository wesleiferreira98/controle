/*Classe abistrata serve como reverencia para outras classes que vão herdar essa classe base, em classes abstratas nós não definimos o comportamento dos 
metodos , so cirmaos o prototipo que servira de referencia para as classes derivadas. Implementação dos metododos da classe abstratas se torna obrigaótro
nas classes derivadas. Obs.: não podemos implementar objetos em classes abstratas, ou seja só servem para serem herdadas.
porotected é um nivel de proteção que permite que as classes derivadas possam acessar variaveis sem intermedio de um metodo.
abstract public void aceleracao(); a inplementação desse metodo nas classes derivadas é obrigatoria */
using System;
abstract class veiculo{
	private int velmax;
	public int velatual;
	private bool ligado;
	public veiculo(){
		ligado=false;
		velatual=0;
		velmax=0;

	}
	public void setLigado(bool ligado){
		this.ligado=ligado;
	}
	abstract public int aceleracao(int mult);
	public void set_dados(){
		System.Console.WriteLine("A velocidade do carro");
		velmax=int.Parse(System.Console.ReadLine());
	}
	public void print_dados(){
	System.Console.WriteLine("A velocidade do carro {0}",velmax);
	}
	public void set_velaual(){
		velatual=int.Parse(System.Console.ReadLine());
	}

} 
class carro:veiculo{
	public carro(){

	}
	override public int aceleracao(int mult){
		return velatual+=10*mult;

	}	

}

class abstratos{
	static void Main(){
		carro x= new carro();
		
		System.Console.WriteLine(" A aceleracao do carro é: {0}",x.aceleracao(2));
	}
}