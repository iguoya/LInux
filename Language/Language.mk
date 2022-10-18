##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Language
ConfigurationName      :=Debug
WorkspacePath          :=/home/tiger/C
ProjectPath            :=/home/tiger/C/Language
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=tiger
Date                   :=19/10/22
CodeLitePath           :=/home/tiger/.codelite
LinkerName             :=/usr/bin/g++
SharedObjectLinkerName :=/usr/bin/g++ -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="Language.txt"
PCHCompileFlags        :=
MakeDirCommand         :=mkdir -p
LinkOptions            :=  $(shell pkg-config --libs gtk+-3.0) -rdynamic -export-dynamic
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). $(IncludeSwitch)basic $(IncludeSwitch)public 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := /usr/bin/ar rcu
CXX      := /usr/bin/g++
CC       := /usr/bin/gcc
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   := -ansi -pedantic -W -std=c99 -Wall -g -Wall -O0 $(shell pkg-config --cflags gtk+-3.0)  -export-dynamic  -rdynamic $(Preprocessors)
ASFLAGS  := 
AS       := /usr/bin/as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=$(IntermediateDirectory)/public_public.c$(ObjectSuffix) $(IntermediateDirectory)/main.c$(ObjectSuffix) $(IntermediateDirectory)/basic_basic.c$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@test -d ./Debug || $(MakeDirCommand) ./Debug


$(IntermediateDirectory)/.d:
	@test -d ./Debug || $(MakeDirCommand) ./Debug

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/public_public.c$(ObjectSuffix): public/public.c $(IntermediateDirectory)/public_public.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/tiger/C/Language/public/public.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/public_public.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/public_public.c$(DependSuffix): public/public.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/public_public.c$(ObjectSuffix) -MF$(IntermediateDirectory)/public_public.c$(DependSuffix) -MM public/public.c

$(IntermediateDirectory)/public_public.c$(PreprocessSuffix): public/public.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/public_public.c$(PreprocessSuffix) public/public.c

$(IntermediateDirectory)/main.c$(ObjectSuffix): main.c $(IntermediateDirectory)/main.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/tiger/C/Language/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.c$(DependSuffix): main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/main.c$(DependSuffix) -MM main.c

$(IntermediateDirectory)/main.c$(PreprocessSuffix): main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.c$(PreprocessSuffix) main.c

$(IntermediateDirectory)/basic_basic.c$(ObjectSuffix): basic/basic.c $(IntermediateDirectory)/basic_basic.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/tiger/C/Language/basic/basic.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/basic_basic.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/basic_basic.c$(DependSuffix): basic/basic.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/basic_basic.c$(ObjectSuffix) -MF$(IntermediateDirectory)/basic_basic.c$(DependSuffix) -MM basic/basic.c

$(IntermediateDirectory)/basic_basic.c$(PreprocessSuffix): basic/basic.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/basic_basic.c$(PreprocessSuffix) basic/basic.c


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


