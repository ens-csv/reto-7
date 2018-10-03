/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
//package javaapplication8;

public class ProgramaCadena {

	private char[] arregloChars;
	public String[] arregloString;
	public double[] cantidad;

        public ProgramaCadena() {
        }

	public ProgramaCadena(char[] aC, String[] aS,double[] c) {
            arregloChars=aC;
            arregloString=aS;
            cantidad=c;
	}

	public void getArregloChars() {
	}

	public void setArregloChars(int arregloChars) {
	}

	public String[] getArregloString() {
		return this.arregloString;
	}

	public void setArregloString(String[] arregloString) {
		this.arregloString = arregloString;
	}

	public double[] getCantidad() {
		return this.cantidad;
	}

	public void setCantidad(double[] cantidad) {
		this.cantidad = cantidad;
	}

	public int MetodoRegresaEntero(char miInicial) {
            int x = miInicial;
            return x;
	}

        public char MetodoRegresaChar(String miNombre) {
            char x = miNombre.charAt(0);
            return x;
	}

}
