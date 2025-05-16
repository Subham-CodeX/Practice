def chk_prime(n):
    if(n==0 ):
        return None
    else:
        is_prime = True
        for i in range(2 , n):
            if n% i ==0:
                is_prime = False
                break

        if is_prime:
            print(n,"number is prime number")
        else:
            print(n,"number is not prime number") 

chk_prime(7)