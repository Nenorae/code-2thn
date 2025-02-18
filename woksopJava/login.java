public class login {
    private String username;
    private String password;

    public login(){
        this.username="admin";
        this.password="1234";

    }
    public login(String usernm, String pass){
        this.username=usernm;
        this.password=pass;
    }

    public void setusername(String usernm){
        this.username=usernm;
    }

    public void setpassword(String pass){
        this.password=pass;
    }

    public String getusername(){
        return this.username;
    }
    public String getpassword(){
        return this.password;
    }
}
