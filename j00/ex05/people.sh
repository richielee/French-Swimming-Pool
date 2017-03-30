ldapsearch -S 'cn' -L '(uid=z*)' cn | grep '^cn:' | sort -r
