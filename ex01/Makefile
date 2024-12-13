# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/05 14:29:43 by pstrohal          #+#    #+#              #
#    Updated: 2024/12/13 19:47:18 by pstrohal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Bureaucrat

CC = c++


SRC_DIR := ./src/
OBJ_DIR = ./obj
INC_DIR := ./inc
DEP_DIR := $(OBJ_DIR)


vpath %.cpp $(SRC_DIR)
vpath %.hpp $(INC_DIR)
vpath %.d $(DEP_DIR)


FILES =	main.cpp \
		Form.cpp \
		Bureaucrat.cpp

SRC = $(addprefix $(SRC_DIR)/, $(FILES))
OBJ =	$(addprefix $(OBJ_DIR)/, $(FILES:%.cpp=%.o))

DEP:= $(OBJ:.o=.d)
DEPFLAGS = -MMD -MP
FLAGS = -Wall -Wextra -Werror -std=c++11 -g
INCLUDES = -I$(INC_DIR)

all: $(NAME)
-include $(DEP)


$(NAME):$(OBJ)
	@$(CC) $^ -o $@ -g

$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(dir $@)
	@$(CC) $(FLAGS) $(DEPFLAGS) $(INCLUDES) -c $< -o $@

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean all re