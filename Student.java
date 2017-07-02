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
public class Student extends Person{
    private int idnumber;
    private String intake;
   
    public Student(){
        super();
    }
    public Student(String name,String address,int age,String telephone,String email,int idnumber,String intake){
        super(name,address,age,telephone,email);
        this.idnumber=idnumber;
        this.intake=intake;
}
}