PROJ_NAME = calculator
TEST_PROJ_NAME = Test_$(PROJ_NAME)

SRC = src/add.c\
src/cos.c\
src/div.c\
src/fac.c\
src/mul.c\
src/percent.c\
src/pow.c\
scr/sin.c\
scr/sq_rt.c\
scr/sqr.c\
scr/sub.c\



INC_H = Version_1_maincode
INC_T = Version_2

ifdef OS
   RM = del 
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif


all:
	gcc -I $(INC_H) $(SRC) calculator.c -o $(call FixPath,$(PROJ_NAME).$(EXEC))
	
run:
	$(call FixPath,$(PROJ_NAME).$(EXEC))
test:
	gcc -I $(INC_H) -I $(INC_T) $(TEST_SRC) $(SRC) -o $(call FixPath,$(TEST_PROJ_NAME).$(EXEC))
	./$(call FixPath,$(TEST_PROJ_NAME).$(EXEC))

clean:
	
	$(RM) *.$(EXEC)