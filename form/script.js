function onSubmit(event){
    event.preventDefault();
    const element = document.querySelectorAll(".form-element input[type='text'], .form-element select, .form-element textarea");
    for(let i = 0; i < element.length; i++){
        const getValue = element[i].value.trim();
        const getName = element[i].name;
        const type = element[i].type;
        errorHandler(getValue, getName);
    }
}

function errorHandler(getValue, getName){
    let errorElement = document.getElementsByClassName('error-'+getName);
    if(!getValue && errorElement.length){
        errorElement[0].style.display = "block";
    }else{
        errorElement[0].style.display = "none";
    }
}


function onChangeHandler(event){
    const name = event.target.name;
    const value = event.target.value;
    errorHandler(value, name);
}
