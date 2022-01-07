ldapsearch -Q -LLL  "(sn=*bon*)" dn | grep "dn" |  wc -l | tr -d ' ' 
