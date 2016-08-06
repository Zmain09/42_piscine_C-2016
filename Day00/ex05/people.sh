ldapsearch -LLL -u -Q | grep -i "cn: z" | sed -e "s/cn: //g" | sort -r
