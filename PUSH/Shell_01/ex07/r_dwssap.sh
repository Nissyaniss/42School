cut -d: -f1 /etc/passwd | sed -n '0~2p' | rev | sort -r | sed -n "${FT_LINE1},${FT_LINE2}p" | sed ':a;N;$!ba;s/\n/, /g' | tr "\n" "."

