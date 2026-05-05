let rishubtn =document.querySelector("#rishu");
let currmode = "light";  // dark means toggle

rishubtn.addEventListener("click", () => {
    if (currmode === "light") {
       currmode = "dark";
       document.querySelector("body").style.backgroundColor="black";
    }
    else {
        currmode = "light";
        document.querySelector("body").style.backgroundColor="white";
    }

  console.log(currmode);
});