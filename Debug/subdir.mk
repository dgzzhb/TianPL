################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CC_SRCS += \
../addoptoken.cc \
../buffer.cc \
../eoftoken.cc \
../idtoken.cc \
../keywordtoken.cc \
../muloptoken.cc \
../numtoken.cc \
../punctoken.cc \
../reloptoken.cc \
../scanner.cc \
../test_scanner.cc \
../token.cc 

OBJS += \
./addoptoken.o \
./buffer.o \
./eoftoken.o \
./idtoken.o \
./keywordtoken.o \
./muloptoken.o \
./numtoken.o \
./punctoken.o \
./reloptoken.o \
./scanner.o \
./test_scanner.o \
./token.o 

CC_DEPS += \
./addoptoken.d \
./buffer.d \
./eoftoken.d \
./idtoken.d \
./keywordtoken.d \
./muloptoken.d \
./numtoken.d \
./punctoken.d \
./reloptoken.d \
./scanner.d \
./test_scanner.d \
./token.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cc
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


