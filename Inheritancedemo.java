/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package inheritancedemo;

/**
 *
 * @author sunway
 */
public class Inheritancedemo {
    public static void main(String[] args) {
     Person P1 = new Person("Johm Doe","KTM",20,"9813258950","ngknkj");
     P1.printProfile();
     Student S1 = new Student("Suni","BKT",25,"981325890","hgfdh",5,"Sep 2016");
     S1.printProfile();
    }
}
