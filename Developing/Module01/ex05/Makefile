# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/01 20:40:22 by jparnahy          #+#    #+#              #
#    Updated: 2025/09/01 20:40:41 by jparnahy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#executable name
NAME = harl

#files
SRC_DIR = .
OBJ_DIR = obj

#source and object files
SRC = $(wildcard $(SRC_DIR)/*.cpp)
OBJ = $(patsubst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(SRC))

#compiler an flags
CPP = c++
DEBUG_FLG ?=
FLAGS = -Wall -Wextra -Werror -std=c++98 $(DEBUG_FLG)

#quiet recursive make ("entering/leaving directory")
MAKEFLAGS += --no-print-directory

#Valgrind flags
VALGRIND = valgrind --leak-check=full --show-leak-kinds=all \
			--track-origins=yes --track-fds=yes

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

#executable cleaninh
eclean: 
	@echo "$(RED)$(CROSS) Removing executable... $(RESET)"
	@for i in $$(seq $(PROGRESS_BAR_LENGTH_CLEAN)); do \
		printf "$(RED_MARK)=$(RESET)"; \
		sleep 0.01; \
	done; \
	$(RM) $(NAME)
	@echo "$(YELLOW)  $(GEAR) Executable removed.$(RESET)"
	@echo

#rebuild
re: fclean all

#execute after build
run: $(NAME)
	@./$(NAME)

#valgrind
hell: re
	@echo "$(RED)🔍 Running Valgrind...$(RESET)"
	@$(VALGRIND) ./$(NAME)

#main test (#ifdef RUN_TESTS)
test:
	@$(MAKE) re DEBUG_FLG=-DRUN_TESTS
	@echo "$(CYAN)$(BUG) Tester main enabled (RUN_TESTS)...$(RESET)"
	@echo

#main test with valgrind
test_hell:
	@$(MAKE) -s re DEBUG_FLG=-DRUN_TESTS
	@echo "$(CYAN)$(BUG) Tester main enabled (RUN_TESTS) under Valgrind...$(RESET)"
	@echo
	@echo "$(RED)🔍 Running Valgrind...$(RESET)"
	@$(VALGRIND) ./$(NAME)
	@echo

# optional aliases (keep previous naming style)
tests: test
tests_hell: test_hell

#to avoid conflits with files named clean, fclean and re
.PHONY: all clean fclean eclean re run hell test test_hell tests tests_hell