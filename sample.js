const Complex = require('./build/Release/complex.node').complex;

let z=new Complex();
console.log(z.abs());
z.re=3;
z.im=4;
console.log(z.abs());
console.log(z.to_str());