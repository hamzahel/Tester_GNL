# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    test.sh                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hel-ayac <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/12 12:01:38 by hel-ayac          #+#    #+#              #
#    Updated: 2019/12/17 16:13:01 by hel-ayac         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RED='\033[0;31m'
GREEN='\033[0;32m'
NC='\033[0m'

gcc -Wall -Wextra -Werror ../get_next_line/get_next_line.c ../get_next_line/get_next_line_utils.c main.c -D BUFFER_SIZE=32

for i in files/* ; do
	#code
	./a.out $i > testdiff.txt
	var=$(diff testdiff.txt $i | wc -l | bc)
	if [ $var -ne 0 ]; then
		echo "${RED} TEST FILED [*]${NC}" $i
	else
		echo "${GREEN} TEST SUCCESS [+]${NC}" $i 
	fi
done

