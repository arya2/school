//function add(x, y){
//    return x+y
//}
//
//
//function applyFn(fn) {
//    function newfunc(x){
//        var fun = this;
//        if (arguments.length == 1){
//            y = ([]).push(x);
//        }else if (arguments.length == 2){
//            y = arguments[1].push(x);
//        }
//        if (arguments.length > 0){
//            return function(x){
//                newfunc(x, y)
//            };
//        }else{
//            
//        }
//    }
//}
//function applyFn(fn) {
//    return function(x){
//        return function(y){
//            return fn(x,y)
//        }
//    }
//}

//var t = applyFn(add);
//
//console.log(t(1)(2));


//
//function User(email) {
//    this.email = email;
//    var password ='twitter'
//    
//    this.setPassword = function(){
//        
//    }
//}
//
//var yolo = new User("hilla");
//
//console.log(yolo.password);



//function outputValues(values) {
//
//    for (var i = 0; i < values.length; i++) {
//        
//        (function geti(i){
//            return i;
//        }).bind(null, i);
//        
//        setTimeout(function() {
//            console.log("item " + i + " is " + values[i]);
//        }, geti() * 200);
//    }
//
//}


    setTimeout(function(x) { 
        return function() {
            console.log(x); 
        }; 
    }(i), 1000*i);
