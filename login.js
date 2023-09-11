function check(){
    let nick = document.getElementById("nick").value;
    let mail = document.getElementById("mail").value;
    if(nick === "orgilblob@gmail.com"){
        if(mail === "12345678"){
            alert("suckcess");
        }
        else{
            alert("Password doesn't match");
        }
    }
    else{
        alert("E-Mail doesn't match")
    }
}