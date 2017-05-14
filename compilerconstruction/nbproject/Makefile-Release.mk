#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=MinGW-Windows
CND_DLIB_EXT=dll
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/Symbol.o \
	${OBJECTDIR}/TreePart.o \
	${OBJECTDIR}/Types.o \
	${OBJECTDIR}/lexxer.o \
	${OBJECTDIR}/main.o \
	${OBJECTDIR}/pClasses/ArgumentList.o \
	${OBJECTDIR}/pClasses/ArgumentListDecl.o \
	${OBJECTDIR}/pClasses/ArgumentListDeclS.o \
	${OBJECTDIR}/pClasses/ArgumentListS.o \
	${OBJECTDIR}/pClasses/ArithmeticExpression.o \
	${OBJECTDIR}/pClasses/FunctionBlock.o \
	${OBJECTDIR}/pClasses/FunctionCall.o \
	${OBJECTDIR}/pClasses/FunctionDeclaration.o \
	${OBJECTDIR}/pClasses/ImportDeclaration.o \
	${OBJECTDIR}/pClasses/PackageClause.o \
	${OBJECTDIR}/pClasses/Start.o \
	${OBJECTDIR}/pClasses/Statement.o \
	${OBJECTDIR}/pClasses/StatementS.o \
	${OBJECTDIR}/parser.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/compilerconstruction.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/compilerconstruction.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/compilerconstruction ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/Symbol.o: Symbol.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Symbol.o Symbol.cpp

${OBJECTDIR}/TreePart.o: TreePart.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/TreePart.o TreePart.cpp

${OBJECTDIR}/Types.o: Types.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Types.o Types.cpp

${OBJECTDIR}/lexxer.o: lexxer.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/lexxer.o lexxer.cpp

${OBJECTDIR}/main.o: main.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

${OBJECTDIR}/pClasses/ArgumentList.o: pClasses/ArgumentList.cpp
	${MKDIR} -p ${OBJECTDIR}/pClasses
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/pClasses/ArgumentList.o pClasses/ArgumentList.cpp

${OBJECTDIR}/pClasses/ArgumentListDecl.o: pClasses/ArgumentListDecl.cpp
	${MKDIR} -p ${OBJECTDIR}/pClasses
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/pClasses/ArgumentListDecl.o pClasses/ArgumentListDecl.cpp

${OBJECTDIR}/pClasses/ArgumentListDeclS.o: pClasses/ArgumentListDeclS.cpp
	${MKDIR} -p ${OBJECTDIR}/pClasses
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/pClasses/ArgumentListDeclS.o pClasses/ArgumentListDeclS.cpp

${OBJECTDIR}/pClasses/ArgumentListS.o: pClasses/ArgumentListS.cpp
	${MKDIR} -p ${OBJECTDIR}/pClasses
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/pClasses/ArgumentListS.o pClasses/ArgumentListS.cpp

${OBJECTDIR}/pClasses/ArithmeticExpression.o: pClasses/ArithmeticExpression.cpp
	${MKDIR} -p ${OBJECTDIR}/pClasses
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/pClasses/ArithmeticExpression.o pClasses/ArithmeticExpression.cpp

${OBJECTDIR}/pClasses/FunctionBlock.o: pClasses/FunctionBlock.cpp
	${MKDIR} -p ${OBJECTDIR}/pClasses
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/pClasses/FunctionBlock.o pClasses/FunctionBlock.cpp

${OBJECTDIR}/pClasses/FunctionCall.o: pClasses/FunctionCall.cpp
	${MKDIR} -p ${OBJECTDIR}/pClasses
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/pClasses/FunctionCall.o pClasses/FunctionCall.cpp

${OBJECTDIR}/pClasses/FunctionDeclaration.o: pClasses/FunctionDeclaration.cpp
	${MKDIR} -p ${OBJECTDIR}/pClasses
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/pClasses/FunctionDeclaration.o pClasses/FunctionDeclaration.cpp

${OBJECTDIR}/pClasses/ImportDeclaration.o: pClasses/ImportDeclaration.cpp
	${MKDIR} -p ${OBJECTDIR}/pClasses
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/pClasses/ImportDeclaration.o pClasses/ImportDeclaration.cpp

${OBJECTDIR}/pClasses/PackageClause.o: pClasses/PackageClause.cpp
	${MKDIR} -p ${OBJECTDIR}/pClasses
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/pClasses/PackageClause.o pClasses/PackageClause.cpp

${OBJECTDIR}/pClasses/Start.o: pClasses/Start.cpp
	${MKDIR} -p ${OBJECTDIR}/pClasses
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/pClasses/Start.o pClasses/Start.cpp

${OBJECTDIR}/pClasses/Statement.o: pClasses/Statement.cpp
	${MKDIR} -p ${OBJECTDIR}/pClasses
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/pClasses/Statement.o pClasses/Statement.cpp

${OBJECTDIR}/pClasses/StatementS.o: pClasses/StatementS.cpp
	${MKDIR} -p ${OBJECTDIR}/pClasses
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/pClasses/StatementS.o pClasses/StatementS.cpp

${OBJECTDIR}/parser.o: parser.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/parser.o parser.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
