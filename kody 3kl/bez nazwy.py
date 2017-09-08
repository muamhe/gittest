#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  test
#  
#  


def main(args):
    return 0
    
def parzyste(n):
    ile=list(range(0,n+1,2))
    print(ile)
    return len(ile)
    
    
if __name__ == '__main__':
    
    print("hello!")
    
    imie=input("what's your name?")
    print("hello",imie,"!")
    wiek=int(input("how old are you?"))
    
    print("you've born in", 2017-wiek) 
    
    c=1991
    rok=2017-wiek
    
    if c==rok:
        print("jestesmy w tym samym wieku")
    elif c>rok:
        print("jestem od ciebie mlodszy")
    else:
        print("jestem od ciebie starszy")
        
    n=int(input("podaj liczbe: "))
    print("parzsystych: ", parzyste(n))
        
    
    import sys
    sys.exit(main(sys.argv))
