class Calculator {
    constructor(value) {
        this.res = value;
    } 
    add(value){
        this.res += value;
        return this;
    }  
    subtract(value){
        this.res -= value;
        return this;
    }
    multiply(value) {
        this.res *= value;
        return this;
    }
    divide(value) {
        if (value === 0) {
            throw new Error("Division by zero is not allowed");
        }
        this.res /= value;
        return this;
    }
    power(value) {
        this.res **= value;
        return this;
    }
    getResult() {
        return this.res;
    }
}