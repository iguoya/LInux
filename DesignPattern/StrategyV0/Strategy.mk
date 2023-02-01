##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Strategy
ConfigurationName      :=Debug
WorkspacePath          :=/home/tiger/DesignPattern
ProjectPath            :=/home/tiger/DesignPattern/Strategy
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=
Date                   :=04/19/20
CodeLitePath           :=/home/tiger/.codelite
LinkerName             :=/usr/bin/clang++
SharedObjectLinkerName :=/usr/bin/clang++ -shared -fPIC
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
ObjectsFileList        :="Strategy.txt"
PCHCompileFlags        :=
MakeDirCommand         :=mkdir -p
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
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
CXX      := /usr/bin/clang++
CC       := /usr/bin/clang
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := /usr/bin/as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/ConcreteStrategyA.cpp$(ObjectSuffix) $(IntermediateDirectory)/Context.cpp$(ObjectSuffix) $(IntermediateDirectory)/ConcreteStrategyB.cpp$(ObjectSuffix) $(IntermediateDirectory)/Strategy.cpp$(ObjectSuffix) 



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
$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/tiger/DesignPattern/Strategy/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/ConcreteStrategyA.cpp$(ObjectSuffix): ConcreteStrategyA.cpp $(IntermediateDirectory)/ConcreteStrategyA.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/tiger/DesignPattern/Strategy/ConcreteStrategyA.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/ConcreteStrategyA.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/ConcreteStrategyA.cpp$(DependSuffix): ConcreteStrategyA.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/ConcreteStrategyA.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/ConcreteStrategyA.cpp$(DependSuffix) -MM ConcreteStrategyA.cpp

$(IntermediateDirectory)/ConcreteStrategyA.cpp$(PreprocessSuffix): ConcreteStrategyA.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/ConcreteStrategyA.cpp$(PreprocessSuffix) ConcreteStrategyA.cpp

$(IntermediateDirectory)/Context.cpp$(ObjectSuffix): Context.cpp $(IntermediateDirectory)/Context.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/tiger/DesignPattern/Strategy/Context.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Context.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Context.cpp$(DependSuffix): Context.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Context.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Context.cpp$(DependSuffix) -MM Context.cpp

$(IntermediateDirectory)/Context.cpp$(PreprocessSuffix): Context.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Context.cpp$(PreprocessSuffix) Context.cpp

$(IntermediateDirectory)/ConcreteStrategyB.cpp$(ObjectSuffix): ConcreteStrategyB.cpp $(IntermediateDirectory)/ConcreteStrategyB.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/tiger/DesignPattern/Strategy/ConcreteStrategyB.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/ConcreteStrategyB.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/ConcreteStrategyB.cpp$(DependSuffix): ConcreteStrategyB.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/ConcreteStrategyB.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/ConcreteStrategyB.cpp$(DependSuffix) -MM ConcreteStrategyB.cpp

$(IntermediateDirectory)/ConcreteStrategyB.cpp$(PreprocessSuffix): ConcreteStrategyB.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/ConcreteStrategyB.cpp$(PreprocessSuffix) ConcreteStrategyB.cpp

$(IntermediateDirectory)/Strategy.cpp$(ObjectSuffix): Strategy.cpp $(IntermediateDirectory)/Strategy.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/tiger/DesignPattern/Strategy/Strategy.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Strategy.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Strategy.cpp$(DependSuffix): Strategy.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Strategy.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Strategy.cpp$(DependSuffix) -MM Strategy.cpp

$(IntermediateDirectory)/Strategy.cpp$(PreprocessSuffix): Strategy.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Strategy.cpp$(PreprocessSuffix) Strategy.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


