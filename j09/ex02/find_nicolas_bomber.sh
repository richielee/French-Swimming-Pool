# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    find_nicolas_bomber.sh                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rili <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/03/17 11:50:41 by rili              #+#    #+#              #
#    Updated: 2017/03/17 11:52:31 by rili             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


cat phonebook | grep -i "nicolas\tbomber" | awk -F '\t' '{print $3}' | grep '[0-9]'