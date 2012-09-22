/* Automatically generated from Squeak on 22 September 2012 12:36 pm 
   by VMMaker 4.10.3
 */

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/* Default EXPORT macro that does nothing (see comment in sq.h): */
#define EXPORT(returnType) returnType

/* Do not include the entire sq.h file but just those parts needed. */
/*  The virtual machine proxy definition */
#include "sqVirtualMachine.h"
/* Configuration options */
#include "sqConfig.h"
/* Platform specific definitions */
#include "sqPlatformSpecific.h"

#define true 1
#define false 0
#define null 0  /* using 'null' because nil is predefined in Think C */
#ifdef SQUEAK_BUILTIN_PLUGIN
#undef EXPORT
// was #undef EXPORT(returnType) but screws NorCroft cc
#define EXPORT(returnType) static returnType
#endif
#include "rePlugin.h"

#include "sqMemoryAccess.h"


/*** Constants ***/

/*** Function Prototypes ***/
static sqInt allocateByteArrayAndSetRcvrExtraPtrFrom(sqInt anExtraPtr);
static sqInt allocateByteArrayAndSetRcvrPCREPtrFromPCRE(sqInt aPCREPtr);
static sqInt allocateStringAndSetRcvrErrorStrFromCStr(const char *aCStrBuffer);
#pragma export on
EXPORT(const char*) getModuleName(void);
#pragma export off
static sqInt halt(void);
#pragma export on
EXPORT(sqInt) primLastAlloc(void);
EXPORT(sqInt) primNetMemory(void);
EXPORT(sqInt) primNumAllocs(void);
EXPORT(sqInt) primNumFrees(void);
EXPORT(sqInt) primPCRECompile(void);
EXPORT(sqInt) primPCREExec(void);
EXPORT(sqInt) primPCREExecfromto(void);
EXPORT(sqInt) primPCRENumSubPatterns(void);
#pragma export off
static void rePluginFree(void *  aPointer);
#pragma export on
EXPORT(void *) rePluginMalloc(size_t  anInteger);
EXPORT(sqInt) setInterpreter(struct VirtualMachine*anInterpreter);
#pragma export off
/*** Variables ***/
static sqInt compileFlags;
static sqInt errorOffset;
static sqInt errorStr;
static const char *  errorStrBuffer;
static sqInt extraPtr;

#ifdef SQUEAK_BUILTIN_PLUGIN
extern
#endif
struct VirtualMachine* interpreterProxy;
static int lastAlloc = 0;
static sqInt matchFlags;
static const char *moduleName =
#ifdef SQUEAK_BUILTIN_PLUGIN
	"RePlugin 22 September 2012 (i)"
#else
	"RePlugin 22 September 2012 (e)"
#endif
;
static int netMemory = 0;
static int numAllocs = 0;
static int numFrees = 0;
static sqInt patternStr;
static const char *  patternStrPtr;
static sqInt pcrePtr;
static sqInt rcvr;


static sqInt allocateByteArrayAndSetRcvrExtraPtrFrom(sqInt anExtraPtr) {
	sqInt extraObject;
	void *extraByteArrayPtr;

	if (anExtraPtr) {

		/* Allocate a Smalltalk ByteArray -- lastAlloc contains the length */

		extraObject = interpreterProxy->instantiateClassindexableSize(interpreterProxy->classByteArray(), sizeof(real_pcre_extra));
		/* begin loadRcvrFromStackAt: */
		rcvr = interpreterProxy->stackObjectValue(0);
		extraByteArrayPtr = interpreterProxy->arrayValueOf(extraObject);
		memcpy(extraByteArrayPtr, (void *) anExtraPtr, sizeof(real_pcre_extra));
	} else {
		extraObject = interpreterProxy->nilObject();
	}
	/* begin rcvrExtraPtrFrom: */
	interpreterProxy->storePointerofObjectwithValue(3, rcvr, extraObject);
	;
	return extraObject;
}

static sqInt allocateByteArrayAndSetRcvrPCREPtrFromPCRE(sqInt aPCREPtr) {
	sqInt patObject;
	void *patByteArrayPtr;


	/* Allocate a Smalltalk ByteArray -- lastAlloc contains the length */

	patObject = interpreterProxy->instantiateClassindexableSize(interpreterProxy->classByteArray(), lastAlloc);
	/* begin loadRcvrFromStackAt: */
	rcvr = interpreterProxy->stackObjectValue(0);
	patByteArrayPtr = interpreterProxy->arrayValueOf(patObject);
	memcpy(patByteArrayPtr, (void *) aPCREPtr, lastAlloc);
	/* begin rcvrPCREBufferFrom: */
	interpreterProxy->storePointerofObjectwithValue(2, rcvr, patObject);
	;
	return patObject;
}

static sqInt allocateStringAndSetRcvrErrorStrFromCStr(const char *aCStrBuffer) {
	sqInt length;
	sqInt errorStrObj;
	void *errorStrObjPtr;


	/* Allocate errorStrObj */

	length = strlen(aCStrBuffer);
	errorStrObj = interpreterProxy->instantiateClassindexableSize(interpreterProxy->classString(), length);
	/* begin loadRcvrFromStackAt: */
	rcvr = interpreterProxy->stackObjectValue(0);
	errorStrObjPtr = interpreterProxy->arrayValueOf(errorStrObj);
	memcpy(errorStrObjPtr,aCStrBuffer,length);
	;
	;
	/* begin rcvrErrorStrFrom: */
	interpreterProxy->storePointerofObjectwithValue(4, rcvr, errorStrObj);
	return errorStrObj;
}


/*	Note: This is hardcoded so it can be run from Squeak.
	The module name is used for validating a module *after*
	it is loaded to check if it does really contain the module
	we're thinking it contains. This is important! */

EXPORT(const char*) getModuleName(void) {
	return moduleName;
}

static sqInt halt(void) {
	;
}

EXPORT(sqInt) primLastAlloc(void) {
	interpreterProxy->pop(1);
	interpreterProxy->pushInteger(lastAlloc);
}

EXPORT(sqInt) primNetMemory(void) {
	interpreterProxy->pop(1);
	interpreterProxy->pushInteger(netMemory);
}

EXPORT(sqInt) primNumAllocs(void) {
	interpreterProxy->pop(1);
	interpreterProxy->pushInteger(numAllocs);
}

EXPORT(sqInt) primNumFrees(void) {
	interpreterProxy->pop(1);
	interpreterProxy->pushInteger(numFrees);
}


/*	<rcvr primPCRECompile>, where rcvr is an object with instance variables:

	'patternStr compileFlags pcrePtr extraPtr errorStr errorOffset matchFlags'	

Compile the regular expression in patternStr, and if the compilation is successful, attempt to optimize the compiled expression.  Store the results in <pcrePtr> and <extratr>, or fill errorStr with a meaningful errorString and errorOffset with an indicator where the error was found, applying compileFlags throughout.  Answer nil with a clean compile (regardless of whether an optimization is possible, and answer with the string otherwise. */

EXPORT(sqInt) primPCRECompile(void) {
	sqInt anInteger;

	/* begin loadRcvrFromStackAt: */
	rcvr = interpreterProxy->stackObjectValue(0);
	patternStrPtr = ((char *) (interpreterProxy->fetchArrayofObject(0, rcvr)));
	compileFlags = interpreterProxy->fetchIntegerofObject(1, rcvr);
	if (interpreterProxy->failed()) {
		return null;
	}
	pcrePtr = (int) pcre_compile(patternStrPtr, compileFlags, 
					&errorStrBuffer, &errorOffset, NULL);
	if (pcrePtr) {
		allocateByteArrayAndSetRcvrPCREPtrFromPCRE(pcrePtr);
		extraPtr = (int) pcre_study((pcre *)pcrePtr, compileFlags, &errorStrBuffer);
		allocateByteArrayAndSetRcvrExtraPtrFrom(extraPtr);
		rePluginFree(((void *) pcrePtr));
		if (extraPtr) {
			rePluginFree(((void *) extraPtr));
		}
		if (interpreterProxy->failed()) {
			return null;
		}
		interpreterProxy->popthenPush(1, interpreterProxy->nilObject());
	} else {
		errorStr = allocateStringAndSetRcvrErrorStrFromCStr(errorStrBuffer);
		/* begin rcvrErrorOffsetFrom: */
		anInteger = errorOffset;
		interpreterProxy->storeIntegerofObjectwithValue(5, rcvr, anInteger);
		if (interpreterProxy->failed()) {
			return null;
		}
		interpreterProxy->popthenPush(1, errorStr);
	}
}


/*	<rcvr primPCREExec: searchObject>, where rcvr is an object with instance variables:

	'patternStr compileFlags pcrePtr extraPtr errorStr errorOffset matchFlags'	

Apply the regular expression (stored in <pcrePtr> and <extratr>, generated from calls to primPCRECompile), to smalltalk String searchObject using <matchOptions>.  If there is no match, answer nil.  Otherwise answer a ByteArray of offsets representing the results of the match. */

EXPORT(sqInt) primPCREExec(void) {
	sqInt searchObject;
	sqInt length;
	char *searchBuffer;
	sqInt matchSpaceSize;
	sqInt result;
	int *matchSpacePtr;
	sqInt extraObj;


	/* Load Parameters */

	searchObject = interpreterProxy->stackObjectValue(0);
	searchBuffer = interpreterProxy->arrayValueOf(searchObject);
	length = interpreterProxy->byteSizeOf(searchObject);
	/* begin loadRcvrFromStackAt: */
	rcvr = interpreterProxy->stackObjectValue(1);
	pcrePtr = ((int) (interpreterProxy->fetchArrayofObject(2, rcvr)));
	/* begin rcvrExtraPtr */
	extraObj = interpreterProxy->fetchPointerofObject(3, rcvr);
	if (extraObj == (interpreterProxy->nilObject())) {
		extraPtr =  NULL;
		goto l1;
	}
	extraPtr = ((int) (interpreterProxy->arrayValueOf(extraObj)));
l1:	/* end rcvrExtraPtr */;
	matchFlags = interpreterProxy->fetchIntegerofObject(6, rcvr);
	matchSpacePtr = ((int *) (interpreterProxy->fetchArrayofObject(7, rcvr)));
	matchSpaceSize = ((sqInt) (interpreterProxy->byteSizeOf(interpreterProxy->fetchPointerofObject(7, rcvr))) >> 2);
	if (interpreterProxy->failed()) {
		return null;
	}
	result = pcre_exec((pcre *)pcrePtr, (pcre_extra *)extraPtr, 
				searchBuffer, length, 0, matchFlags, matchSpacePtr, matchSpaceSize);
	interpreterProxy->pop(2);
	interpreterProxy->pushInteger(result);
	;
	;
	;
	;
}


/*	<rcvr primPCREExec: searchObject> from: fromInteger to: toInteger>, where rcvr is an object with instance variables:

	'patternStr compileFlags pcrePtr extraPtr errorStr errorOffset matchFlags'	

Apply the regular expression (stored in <pcrePtr> and <extratr>, generated from calls to primPCRECompile), to smalltalk String searchObject using <matchOptions>, beginning at offset <fromInteger> and continuing until offset <toInteger>.  If there is no match, answer nil.  Otherwise answer a ByteArray of offsets representing the results of the match. */

EXPORT(sqInt) primPCREExecfromto(void) {
	sqInt searchObject;
	sqInt length;
	char *searchBuffer;
	sqInt matchSpaceSize;
	sqInt toInteger;
	sqInt result;
	sqInt fromInteger;
	int *matchSpacePtr;
	sqInt extraObj;


	/* Load Parameters */

	toInteger = interpreterProxy->stackIntegerValue(0);
	fromInteger = interpreterProxy->stackIntegerValue(1);
	searchObject = interpreterProxy->stackObjectValue(2);
	searchBuffer = interpreterProxy->arrayValueOf(searchObject);
	length = interpreterProxy->byteSizeOf(searchObject);
	/* begin loadRcvrFromStackAt: */
	rcvr = interpreterProxy->stackObjectValue(3);
	interpreterProxy->success(1 <= fromInteger);
	interpreterProxy->success(toInteger <= length);

	/* Smalltalk offsets are 1-based */

	fromInteger -= 1;
	interpreterProxy->success(fromInteger <= toInteger);
	length = toInteger - fromInteger;

	/* Load Instance Variables */

	searchBuffer += fromInteger;
	pcrePtr = ((int) (interpreterProxy->fetchArrayofObject(2, rcvr)));
	/* begin rcvrExtraPtr */
	extraObj = interpreterProxy->fetchPointerofObject(3, rcvr);
	if (extraObj == (interpreterProxy->nilObject())) {
		extraPtr =  NULL;
		goto l1;
	}
	extraPtr = ((int) (interpreterProxy->arrayValueOf(extraObj)));
l1:	/* end rcvrExtraPtr */;
	matchFlags = interpreterProxy->fetchIntegerofObject(6, rcvr);
	matchSpacePtr = ((int *) (interpreterProxy->fetchArrayofObject(7, rcvr)));
	matchSpaceSize = ((sqInt) (interpreterProxy->byteSizeOf(interpreterProxy->fetchPointerofObject(7, rcvr))) >> 2);
	if (interpreterProxy->failed()) {
		return null;
	}
	result = pcre_exec((pcre *)pcrePtr, (pcre_extra *)extraPtr, 
				searchBuffer, length, 0, matchFlags, matchSpacePtr, matchSpaceSize);
	interpreterProxy->pop(2);
	interpreterProxy->pushInteger(result);
	;
	;
	;
	;
}


/*	<rcvr primPCRENumSubPatterns>, where rcvr is an object with instance variables:

	'patternStr compileFlags pcrePtr extraPtr errorStr errorOffset matchFlags'	

Return the number of subpatterns captured by the compiled pattern. */
/*	Load Parameters */

EXPORT(sqInt) primPCRENumSubPatterns(void) {
	/* begin loadRcvrFromStackAt: */
	rcvr = interpreterProxy->stackObjectValue(0);
	pcrePtr = ((int) (interpreterProxy->fetchArrayofObject(2, rcvr)));
	interpreterProxy->pop(1);
	interpreterProxy->pushInteger(pcre_info((pcre *)pcrePtr, NULL, NULL));
}


/*	Free a block of fixed memory allocated with rePluginMalloc.  Instrumented version of C free() to facilitate leak analysis from Smalltalk.   OS-specific variations on malloc/free, such as with MacOS, are handled by adding a C macro to the header file redefining malloc/free -- see the class comment */

static void rePluginFree(void *  aPointer) {
	numFrees += 1;
	if (aPointer) {
		free(aPointer);
	}
}


/*	Allocate a block of fixed memory using C calls to malloc().  Instrumented to facilitate leak analysis from Smalltalk.  Set global lastAlloc to anInteger.  OS-specific variations on malloc/free, such as with MacOS, are handled by adding a C macro to the header file redefining malloc/free -- see the class comment */

EXPORT(void *) rePluginMalloc(size_t  anInteger) {
	void *aPointer;

	numAllocs += 1;
	if ((aPointer = malloc(anInteger))) {
		lastAlloc = anInteger;
	}
	return aPointer;
}


/*	Note: This is coded so that is can be run from Squeak. */

EXPORT(sqInt) setInterpreter(struct VirtualMachine*anInterpreter) {
	sqInt ok;

	interpreterProxy = anInterpreter;
	ok = interpreterProxy->majorVersion() == VM_PROXY_MAJOR;
	if (ok == 0) {
		return 0;
	}
	ok = interpreterProxy->minorVersion() >= VM_PROXY_MINOR;
	return ok;
}


#ifdef SQUEAK_BUILTIN_PLUGIN


void* RePlugin_exports[][3] = {
	{"RePlugin", "primLastAlloc", (void*)primLastAlloc},
	{"RePlugin", "primPCRENumSubPatterns", (void*)primPCRENumSubPatterns},
	{"RePlugin", "rePluginMalloc", (void*)rePluginMalloc},
	{"RePlugin", "primNumFrees", (void*)primNumFrees},
	{"RePlugin", "primPCREExec", (void*)primPCREExec},
	{"RePlugin", "primNumAllocs", (void*)primNumAllocs},
	{"RePlugin", "primPCREExecfromto", (void*)primPCREExecfromto},
	{"RePlugin", "setInterpreter", (void*)setInterpreter},
	{"RePlugin", "getModuleName", (void*)getModuleName},
	{"RePlugin", "primPCRECompile", (void*)primPCRECompile},
	{"RePlugin", "primNetMemory", (void*)primNetMemory},
	{NULL, NULL, NULL}
};


#endif /* ifdef SQ_BUILTIN_PLUGIN */

