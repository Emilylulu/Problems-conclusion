    bool isPrime(int num){
    // check the num is prime or not
        for(int j = 2; j*j <= num; j++){ // if j * j larger than num, then it can not be the small factor. since small one will iterator before
            if(num % j == 0){
                return false;
            }
        }
        return true;
    }
    int countPrimes(int n) {
        // write your code here
        int result = 0;
        if(n <= 2){
            return 0;
        }
        for(int i = 2; i < n; i++){ // in description, it is less than n, so less than n, can not = n.
        // but have to include 2, since 2 is also a prime.
            if(isPrime(i)){
                result ++;
               
            }
        }
        return result;
    }
