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
public class Person {
    private String name;
    private String address;
    private int age;
    private String telephone;
    private String email;
    
    public Person(){
        
    }
    public Person(String name,String address,int age,String telephone,String email){
        this.name=name;
        this.address=address;
        this.age=age;
        this.telephone=telephone;
        this.email=email;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getAddress() {
        return address;
    }

    public void setAddress(String address) {
        this.address = address;
    }

    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        this.age = age;
    }

    public String getTelephone() {
        return telephone;
    }

    public void setTelephone(String telephone) {
        this.telephone = telephone;
    }

    public String getEmail() {
        return email;
    }

    public void setEmail(String email) {
        this.email = email;
    }
    public void printProfile(){
        System.out.println("Your name is" + this.name);
        System.out.println("Yor address is" + this.address);
        System.out.println("Your age is" + this.age);
        System.out.println("Your telephone is" + this.telephone);
        System.out.println("Your email is" + this.email);
    }
}
