ldapsearch -Q '(cn=*bon*)' cn|grep cn| tail -n+3|wc -l|tr -d ' '
