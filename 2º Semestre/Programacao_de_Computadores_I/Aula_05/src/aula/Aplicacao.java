package aula;

public class Aplicacao {
	public static void main(String[] args){
		Carro objcarro = new Carro();
		
		//Atribui��o de valores as variaveis existentes na classe Carro
		objcarro.modelo = "Celta";
		objcarro.marca = "Chevrolet";
		
		//Acessando os m�todos disponiveis na classe Carro
		objcarro.ligar();
		objcarro.acelerar();
		objcarro.freiar();
		objcarro.desligar();
		
		System.out.println("O modelo do carro �: " + objcarro.modelo);
		System.out.println("A marca do carro �: " + objcarro.marca);
	}
}
