/*Interfaces em c# as interfaces só implementoa metodos ou prototipo de metodos não ultilizamos os campos nas interfaces.e uma classe pode
hedar mais de uma interface. Obs não podem ter nem construtor e nem destrutor. TODA CLASSE QUE USAR A INTERFACE DEVERÁ IMPLEMETAR SEUS 
METODOS.*/
using System;
public interface veiculo{
	void ligar();
	void desligar();
	void info();


}
public interface combate{
	void disparar();

}
class carro:veiculo,combate{
	public bool ligado;
	public carro(){

	}
	public void ligar(){
		System.Console.WriteLine("{0}",this.ligado=true);
	}
	public void desligar(){
		System.Console.WriteLine("{0}",this.ligado=true);
	}
	public void info(){

	}
	public void disparar(){

	}
}
class interfaceq{
	static void Main(){
		carro c1= new carro();
		c1.ligar();

	}
}