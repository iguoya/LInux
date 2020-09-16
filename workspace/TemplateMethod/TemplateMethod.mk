##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=TemplateMethod
ConfigurationName      :=Debug
WorkspacePath          :=/home/tiger/DesignPattern
ProjectPath            :=/home/tiger/DesignPattern/TemplateMethod
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
ObjectsFileList        :="TemplateMethod.txt"
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
Objects0=$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/AbstractClass.cpp$(ObjectSuffix) $(IntermediateDirectory)/ConcreteClass1.cpp$(ObjectSuffix) $(IntermediateDirectory)/ConcreteClass2.cpp$(ObjectSuffix) 



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
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/tiger/DesignPattern/TemplateMethod/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/AbstractClass.cpp$(ObjectSuffix): AbstractClass.cpp $(IntermediateDirectory)/AbstractClass.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/tiger/DesignPattern/TemplateMethod/AbstractClass.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/AbstractClass.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/AbstractClass.cpp$(DependSuffix): AbstractClass.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/AbstractClass.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/AbstractClass.cpp$(DependSuffix) -MM AbstractClass.cpp

$(IntermediateDirectory)/AbstractClass.cpp$(PreprocessSuffix): AbstractClass.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/AbstractClass.cpp$(PreprocessSuffix) AbstractClass.cpp

$(IntermediateDirectory)/ConcreteClass1.cpp$(ObjectSuffix): ConcreteClass1.cpp $(IntermediateDirectory)/ConcreteClass1.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/tiger/DesignPattern/TemplateMethod/ConcreteClass1.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/ConcreteClass1.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/ConcreteClass1.cpp$(DependSuffix): ConcreteClass1.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/ConcreteClass1.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/ConcreteClass1.cpp$(DependSuffix) -MM ConcreteClass1.cpp

$(IntermediateDirectory)/ConcreteClass1.cpp$(PreprocessSuffix): ConcreteClass1.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/ConcreteClass1.cpp$(PreprocessSuffix) ConcreteClass1.cpp

$(IntermediateDirectory)/ConcreteClass2.cpp$(ObjectSuffix): ConcreteClass2.cpp $(IntermediateDirectory)/ConcreteClass2.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/tiger/DesignPattern/TemplateMethod/ConcreteClass2.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/ConcreteClass2.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/ConcreteClass2.cpp$(DependSuffix): ConcreteClass2.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/ConcreteClass2.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/ConcreteClass2.cpp$(DependSuffix) -MM ConcreteClass2.cpp

$(IntermediateDirectory)/ConcreteClass2.cpp$(PreprocessSuffix): ConcreteClass2.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/ConcreteClass2.cpp$(PreprocessSuffix) ConcreteClass2.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


