# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/12 18:22:54 by jparnahy          #+#    #+#              #
#    Updated: 2025/08/18 20:51:25 by jparnahy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#executable name
NAME = hi_this_is_brain

#files
SRC_DIR = src
INC_DIR = includes
OBJ_DIR = obj

#source and object files
SRC = $(wildcard $(SRC_DIR)/*.cpp)
OBJ = $(patsubst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(SRC))

#compiler an flags
CPP = c++
DEBUG_FLG ?=
FLAGS = -Wall -Wextra -Werror -std=c++98 -I$(INC_DIR) $(DEBUG_FLG)

#tools
#clear the implicit rules
RM = rm -f
MKDIR = mkdir -p

# Colors for the compilation
RESET = \033[0m
GREEN = \033[1;32m
GREEN_MARK = \033[0;42m
YELLOW = \033[1;33m
BLUE = \033[1;34m
RED = \033[1;31m
RED_MARK = \033[0;41m
CYAN = \033[1;36m
BOLD = \033[1m
ITALIC = \033[3m

# Raiboow colors
RE = \033[38;5;196m
OR = \033[38;5;208m
YE = \033[38;5;226m
GR = \033[38;5;46m
BL = \033[38;5;21m
IN = \033[38;5;93m
VI = \033[38;5;201m

# Emojis
CHECK = ✅
CROSS = ❌
ARROW = ➜
FLGS = 🏳️
GEAR = ⚙️
BOX = 📦
NOR = 🔎
BUG = ☢️

# Barra de progresso
PROGRESS_BAR_LENGTH = 50
PROGRESS_BAR_LENGTH_CLEAN = 30

#rules
all: $(NAME)

#linking
$(NAME): $(OBJ)
	@echo
	@echo "$(CYAN)$(GEAR) Linking...$(RESET)"
	@$(CPP) $(FLAGS) -o $(NAME) $(OBJ) && \
	for i in $$(seq 1 $(PROGRESS_BAR_LENGTH)); do \
		printf "$(GREEN_MARK)=$(RESET)"; \
		sleep 0.03; \
	done; \
	echo "$(GREEN)  $(CHECK) 100%$(RESET)"
	@echo
	@echo "$(FLGS) $(YELLOW)Flags used: $(FLAGS)$(RESET)"
	@echo "$(ARROW) $(CYAN) Executable created: ./$(NAME)$(RESET)"
	@echo "$(BOLD)$(GREEN)$(CHECK) Compilation complete!$(RESET)\n"
	@echo

#compiles .cpp → .o inside the obj/ folder (with auto-deps)
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@$(MKDIR) $(OBJ_DIR)
	@$(CPP) $(FLAGS) -c $< -o $@

#object cleaning
clean: 
	@echo "$(RED)$(CROSS) Removing object files and directory... $(RESET)"
	@for i in $$(seq $(PROGRESS_BAR_LENGTH_CLEAN)); do \
		printf "$(RED_MARK)=$(RESET)"; \
		sleep 0.015; \
	done; \
	$(RM) $(OBJ)
	@$(RM) -rf $(OBJ_DIR)
	@echo "$(YELLOW)  $(BOX) Object files and directory removed.$(RESET)"
	@echo

#object and executable cleaning
fclean: clean
	@echo "$(RED)$(CROSS) Removing executable... $(RESET)"
	@for i in $$(seq $(PROGRESS_BAR_LENGTH_CLEAN)); do \
		printf "$(RED_MARK)=$(RESET)"; \
		sleep 0.02; \
	done; \
	$(RM) $(NAME)
	@echo "$(YELLOW)  $(GEAR) Executable removed.$(RESET)"
	@echo

#rebuild
re: fclean all

#valgrind
hell: re
	@echo "$(RED)🔍 Running Valgrind...$(RESET)"
	valgrind --leak-check=full --show-leak-kinds=all \
		--track-origins=yes --track-fds=yes ./$(NAME)

#main testers
test:
	@$(MAKE) -s --no-print-directory re DEBUG_FLG=-DRUN_TESTS
	@echo "$(CYAN)$(BUG) Main tests logs ON...$(RESET)"
	@echo

#main testers + debug log and valgrind
debug_tests:
	@$(MAKE) -s --no-print-directory re DEBUG_FLG="-DRUN_TESTS -DDEBUG_MODE"
	@echo "$(CYAN)$(BUG) Main tests logs ON with Valgrind...$(RESET)"
	@echo
	@echo "$(RED)🔍 Running Valgrind...$(RESET)"
	valgrind --leak-check=full --show-leak-kinds=all \
		--track-origins=yes --track-fds=yes ./$(NAME)
	@echo

#debug dest. log
debug: 
	@$(MAKE) re DEBUG_FLG=-DDEBUG_MODE --no-print-directory
	@echo "$(CYAN)$(BUG) Debug mode logs ON...$(RESET)"
	@echo


#to avoid conflits with files named clean, fclean and re
.PHONY: all clean fclean re hell debug