/* Automatically generated by
	CCodeGeneratorGlobalStructure VMMaker.oscog-eem.2794 uuid: 81de711b-1533-4e7c-93a8-53c661352adc
 */


/*** Function Prototypes ***/


#if !PRODUCTION && defined(PlatformNoDbgRegParms)
# define NoDbgRegParms PlatformNoDbgRegParms
#endif

#if !defined(NoDbgRegParms)
# define NoDbgRegParms /*empty*/
#endif



#if !defined(NeverInline)
# define NeverInline /*empty*/
#endif

extern signed char accessorDepthForPrimitiveIndex(sqInt primIndex);
extern usqInt argumentCountAddress(void);
extern void assertValidMachineCodeFrame(sqInt instrPtr);
extern void callForCogCompiledCodeCompaction(void);
extern void ceActivateFailingPrimitiveMethod(sqInt aPrimitiveMethod);
extern sqInt ceBaseFrameReturn(sqInt returnValue);
#if IMMUTABILITY
extern sqInt ceCannotAssignTowithIndexvalueToAssign(sqInt immutableObject, sqInt index, sqInt valueToAssign);
#endif /* IMMUTABILITY */
extern sqInt ceCannotResume(void);
extern void ceCheckAndMaybeRetryPrimitive(sqInt primIndex);
extern void ceCheckForInterrupts(void);
extern void ceCheckProfileTick(void);
extern sqInt ceContextinstVar(sqInt maybeContext, sqInt slotIndex);
extern sqInt ceContextinstVarvalue(sqInt maybeMarriedContext, sqInt slotIndex, sqInt anOop);
extern sqInt ceEnterInterpreterOnReturnFromCogCode(void);
extern sqInt ceInterpretMethodFromPICreceiver(sqInt aMethodObj, sqInt rcvr);
extern sqInt ceMNUFromPICMNUMethodreceiver(sqInt aMethodObj, sqInt rcvr);
extern sqInt ceNewHashOf(sqInt anObject);
extern sqInt ceNonLocalReturn(sqInt returnValue);
extern void ceReapAndResetErrorCodeFor(CogMethod *cogMethod);
extern sqInt ceSendAborttonumArgs(sqInt selector, sqInt rcvr, sqInt numArgs);
extern sqInt ceSendFromInLineCacheMiss(CogMethod *cogMethodOrPIC);
extern sqInt ceSendMustBeBooleanTointerpretingAtDelta(sqInt aNonBooleanObject, sqInt jumpSize);
extern sqInt ceSendMustBeBoolean(sqInt anObject);
extern void ceSendaboveClassBindingtonumArgs(sqInt selector, sqInt methodClassBinding, sqInt rcvr, sqInt numArgs);
extern sqInt ceSendabovetonumArgs(sqInt selector, sqInt methodClass, sqInt rcvr, sqInt numArgs);
extern sqInt ceSendsupertonumArgs(sqInt selector, sqInt superNormalBar, sqInt rcvr, sqInt numArgs);
extern void ceStackOverflow(sqInt contextSwitchIfNotNil);
extern void ceTraceBlockActivation(void);
extern void ceTraceLinkedSend(sqInt theReceiver);
extern void ceTraceStoreOfinto(sqInt aValue, sqInt anObject);
extern usqInt cFramePointerAddress(void);
extern void checkAssertsEnabledInCoInterpreter(void);
extern sqInt checkIfCFramePointerInUse(void);
extern void clearTraceLog(void);
extern CogMethod * cogMethodOf(sqInt aMethodOop);
extern void compilationBreakpointFor(sqInt selectorOop);
extern usqInt cReturnAddressAddress(void);
extern usqInt cStackPointerAddress(void);
extern sqInt defaultNativeStackFrameSize(void);
extern void dumpPrimTraceLog(void);
extern void dumpTraceLog(void);
extern void executeCogMethodfromLinkedSendWithReceiver(CogMethod *cogMethod, sqInt rcvr);
extern void executeCogPICfromLinkedSendWithReceiverandCacheTag(CogMethod *cogPIC, sqInt rcvr, sqInt cacheTag);
extern void flushExternalPrimitiveOf(sqInt methodObj);
extern usqInt framePointerAddress(void);
extern void (*functionPointerForCompiledMethodprimitiveIndex(sqInt methodObj, sqInt primIndex))(void) ;
extern void ifValidWriteBackStackPointersSaveTo(void *theCFP, void *theCSP, char **savedFPP, char **savedSPP);
extern usqInt instructionPointerAddress(void);
extern usqInt interpretAddress(void);
extern sqInt isCogMethodReference(sqInt methodHeader);
extern sqInt lookupMNUreceiver(sqInt selector, sqInt rcvr);
extern sqInt lookupOrdinaryreceiver(sqInt selector, sqInt rcvr);
extern void markActiveMethodsAndReferents(void);
extern sqInt marryFrameCopiesTemps(void);
extern sqInt maxLookupNoMNUErrorCode(void);
extern sqInt mcprimFunctionForPrimitiveIndex(sqInt primIndex);
extern void * methodCacheAddress(void);
extern sqInt methodHasCogMethod(sqInt aMethodOop);
extern sqInt methodNeedsLargeContext(sqInt methodObj);
extern sqInt methodShouldBeCogged(sqInt aMethodObj);
extern CogMethod * mframeHomeMethodExport(void);
extern CogMethod * mframeHomeMethod(char *theFP);
extern sqInt mMethodClass(void);
extern void mnuCompilationBreakpointFor(sqInt selectorOop);
extern usqInt newMethodAddress(void);
extern usqInt nextProfileTickAddress(void);
extern sqInt noAssertHeaderOf(sqInt methodPointer);
extern sqInt positive32BitIntegerFor(unsigned int integerValue);
extern unsigned int positive32BitValueOf(sqInt oop);
extern sqInt positive64BitIntegerFor(usqLong integerValue);
extern usqLong positive64BitValueOf(sqInt oop);
extern sqInt primErrTable(void);
extern usqInt primFailCodeAddress(void);
extern usqInt primitiveFailAddress(void);
extern sqInt primitivePropertyFlags(sqInt primIndex);
extern void * primTraceLogAddress(void);
extern usqInt primTraceLogIndexAddress(void);
extern void printCogMethod(CogMethod *cogMethod);
extern sqInt printFrameWithSP(char *theFP, char *theSP);
extern void printMethodCacheFor(sqInt thing);
extern sqInt quickPrimitiveConstantFor(sqInt aQuickPrimitiveIndex);
extern sqInt (*quickPrimitiveGeneratorFor(sqInt aQuickPrimitiveIndex))(void) ;
extern sqInt quickPrimitiveInstVarIndexFor(sqInt primIndex);
extern sqInt rawHeaderOf(sqInt methodPointer);
extern void rawHeaderOfput(sqInt methodOop, sqInt cogMethodOrMethodHeader);
extern void reportMinimumUnusedHeadroom(void);
extern sqInt signed32BitIntegerFor(sqInt integerValue);
extern int signed32BitValueOf(sqInt oop);
extern sqInt signed64BitIntegerFor(sqLong integerValue);
extern sqLong signed64BitValueOf(sqInt oop);
extern sqInt specialSelectorNumArgs(sqInt index);
extern usqInt stackLimitAddress(void);
extern usqInt stackPointerAddress(void);
extern sqInt startPCOfMethodHeader(sqInt aCompiledMethodHeader);
extern sqInt startPCOrNilOfLiteralin(sqInt lit, sqInt aMethodObj);
extern void updateStackZoneReferencesToCompiledCodePreCompaction(void);
extern char * whereIs(sqInt anOop);
extern sqInt mcprimHashMultiply(sqInt receiverArg);
extern usqInt primitiveFunctionPointerAddress(void);
extern char * cStringOrNullFor(sqInt oop);
extern sqInt failed(void);
extern sqInt identityHashOf(sqInt anOop);
extern void primitiveClosureValueNoContextSwitch(void);
extern sqInt primitiveFail(void);
extern sqInt primitiveFailForFFIExceptionat(usqLong exceptionCode, usqInt pc);
extern sqInt primitiveFailForOSError(sqLong osError);
extern sqInt primitiveFailFor(sqInt reasonCode);
extern sqInt primitiveFailureCode(void);
extern void primitiveFullClosureValueNoContextSwitch(void);
extern sqInt signalNoResume(sqInt aSemaphore);
extern usqInt sizeOfAlienData(sqInt oop);
extern void * startOfAlienData(sqInt oop);
extern void ceScheduleScavenge(void);
extern void ensureNoForwardedLiteralsIn(sqInt aMethodObj);
extern sqInt followForwardedObjectFieldstoDepth(sqInt objOop, sqInt depth);
extern usqInt freeStartAddress(void);
extern usqInt getScavengeThreshold(void);
extern sqInt isForwardedClassIndex(sqInt maybeClassIndex);
extern sqInt isImmediateClass(sqInt classObj);
extern sqInt isReallyYoungObject(sqInt objOop);
extern sqInt methodHeaderOf(sqInt methodObj);
extern usqInt needGCFlagAddress(void);
extern sqLong nullHeaderForMachineCodeMethod(void);
extern sqInt receiverTagBitsForMethod(sqInt aMethodObj);
extern usqInt scavengeThresholdAddress(void);
extern sqInt withoutForwardingOnandwithsendToCogit(sqInt obj1, sqInt obj2, sqInt aBool, sqInt (*selector)(sqInt,sqInt,sqInt));
extern sqInt byteSwapped(sqInt w);
extern sqInt fetchClassTagOf(sqInt oop);
extern usqInt floatObjectOf(double aFloat);
extern double floatValueOf(sqInt oop);
extern sqInt headerIndicatesAlternateBytecodeSet(sqInt methodHeader);
extern sqInt instantiateClassindexableSize(sqInt classObj, usqInt nElements);
extern sqInt isIntegerValue(sqInt intValue);
extern sqInt isMarked(sqInt objOop);
extern sqInt shortentoIndexableSize(sqInt objOop, sqInt indexableSize);
extern usqInt smallObjectBytesForSlots(sqInt numSlots);
extern void openScavengeLog(void);
extern void printRememberedSet(void);
extern sqInt remember(sqInt objOop);
extern sqInt addGCRoot(sqInt *varLoc);
extern sqInt addressCouldBeObj(sqInt address);
extern sqInt addressCouldBeOop(sqInt address);
extern sqInt allocatePinnedSlots(sqInt nSlots);
extern sqInt arrayFormat(void);
extern sqInt becomewith(sqInt array1, sqInt array2);
extern void beRootIfOld(sqInt oop);
extern sqInt byteSizeOf(sqInt oop);
extern sqInt characterObjectOf(sqInt characterCode);
extern usqInt characterValueOf(sqInt oop);
extern sqInt checkedLongAt(sqInt byteAddress);
extern void checkFreeSpace(sqInt gcModes);
extern void checkFreeSpaceignoring(sqInt gcModes, sqInt anOopToIgnore);
extern sqInt checkOkayOop(usqInt oop);
extern sqInt checkOopHasOkayClass(usqInt obj);
extern sqInt classArray(void);
extern sqInt classAtIndex(sqInt classIndex);
extern sqInt classIndexOf(sqInt objOop);
extern sqInt classOrNilAtIndex(sqInt classIndex);
extern sqInt classSmallInteger(void);
extern sqInt classTableMinorIndexMask(void);
extern sqInt classTablePageSize(void);
extern sqInt classTableRootObj(void);
extern sqInt classTagForClass(sqInt classObj);
extern sqInt compactClassIndexOf(sqInt objOop);
extern void countMarkedAndUnmarkdObjects(sqInt printFlags);
extern sqInt eeInstantiateClassIndexformatnumSlots(sqInt knownClassIndex, sqInt objFormat, sqInt numSlots);
extern sqInt falseObject(void);
extern sqInt fetchByteofObject(sqInt byteIndex, sqInt objOop);
extern sqInt fetchPointerofObject(sqInt fieldIndex, sqInt objOop);
extern void findStringBeginningWith(char *aCString);
extern void findString(char *aCString);
extern sqInt fixedFieldsOfClassFormatMask(void);
extern sqInt fixedFieldsOfClassFormat(sqInt classFormat);
extern sqInt followForwarded(sqInt objOop);
extern sqInt formatOfClass(sqInt classPointer);
extern sqInt freeObject(sqInt objOop);
extern usqLong headerForSlotsformatclassIndex(sqInt numSlots, sqInt formatField, sqInt classIndex);
#if IMMUTABILITY
extern sqInt immutableBitMask(void);
#endif /* IMMUTABILITY */
extern sqInt indexOfin(sqInt anElement, sqInt anObject);
extern void inOrderPrintFreeTreeprintList(sqInt freeChunk, sqInt printNextList);
extern sqInt instanceSizeOf(sqInt classObj);
extern sqInt instSpecOfClassFormat(sqInt classFormat);
extern sqInt isArrayNonImm(sqInt oop);
extern sqInt isCharacterObject(sqInt oop);
extern sqInt isCharacterValue(sqInt anInteger);
extern sqInt isCompiledMethod(sqInt objOop);
extern sqInt isFixedSizePointerFormat(sqInt format);
extern sqInt isForwarded(sqInt objOop);
extern sqInt isImmediate(sqInt oop);
extern sqInt isInOldSpace(sqInt address);
extern sqInt isLong64s(sqInt oop);
extern sqInt isNonImmediate(sqInt oop);
extern sqInt isOldObject(sqInt objOop);
extern sqInt isOopCompiledMethod(sqInt oop);
extern sqInt isOopForwarded(sqInt oop);
extern sqInt isOopImmutable(sqInt oop);
extern sqInt isOopMutable(sqInt oop);
extern sqInt isPinned(sqInt objOop);
extern sqInt isReallyYoung(sqInt oop);
extern sqInt isShorts(sqInt oop);
extern sqInt isUnambiguouslyForwarder(sqInt objOop);
extern sqInt isUnmarked(sqInt objOop);
extern sqInt isValidClassTag(sqInt classIndex);
extern sqInt isYoungObject(sqInt objOop);
extern sqInt isYoung(sqInt oop);
extern sqInt lastPointerOfWhileSwizzling(sqInt objOop);
extern sqInt lastPointerOf(sqInt objOop);
extern sqInt leakCheckBecome(void);
extern sqInt leakCheckFullGC(void);
extern sqInt leakCheckIncremental(void);
extern sqInt leakCheckNewSpaceGC(void);
extern sqInt literalCountOfMethodHeader(sqInt header);
extern sqInt literalCountOf(sqInt methodPointer);
extern void longPrintInstancesOf(sqInt aClassOop);
extern void longPrintInstancesWithClassIndex(sqInt classIndex);
extern void longPrintReferencesTo(sqInt anOop);
extern void NeverInline NeverInline markAndTrace(sqInt objOop);
extern sqInt maybeMethodClassOfseemsToBeInstantiating(sqInt methodObj, sqInt format);
extern sqInt maybeSplObj(sqInt index);
extern sqInt minSlotsForShortening(void);
extern sqInt nilObject(void);
extern sqInt nonIndexablePointerFormat(void);
extern sqInt numBytesOf(sqInt objOop);
extern sqInt numPointerSlotsOf(sqInt objOop);
extern usqInt numSlotsOf(sqInt objOop);
extern sqInt numStrongSlotsOfWeakling(sqInt objOop);
extern sqInt objectAfter(sqInt objOop);
extern sqInt objectBefore(sqInt objOop);
extern sqInt oldSpaceObjectAfter(sqInt objOop);
extern sqInt popRemappableOop(void);
extern sqInt primitiveErrorTable(void);
extern void printActivationsOf(sqInt aMethodObj);
extern void printBogons(void);
extern void printContextReferencesTo(sqInt anOop);
extern void printEntity(sqInt oop);
extern void printForwarders(void);
extern void printFreeChunks(void);
extern void printFreeChunk(sqInt freeChunk);
extern void printFreeListHeads(void);
extern sqInt printFreeList(sqInt chunkOrIndex);
extern void printFreeTree(void);
extern void printHeaderOf(sqInt objOop);
extern void printInstancesOf(sqInt aClassOop);
extern void printInstancesWithClassIndex(sqInt classIndex);
extern void printInvalidClassTableEntries(void);
#if LLDB
extern void printMarkedOops(void);
#endif /* LLDB */
extern void printMethodImplementorsOf(sqInt anOop);
extern void printMethodReferencesTo(sqInt anOop);
extern void printObjectsFromto(sqInt startAddress, sqInt endAddress);
extern void printObjectsWithHash(sqInt hash);
extern void printObjStack(sqInt objStack);
extern void printObjStackprintContents(sqInt objStack, sqInt printContents);
extern void NeverInline NeverInline printOopsExcept(sqInt (*function)(sqInt));
extern void printOopsFromto(sqInt startAddress, sqInt endAddress);
extern void NeverInline NeverInline printOopsSuchThat(sqInt (*function)(sqInt));
extern void printReferencesTo(sqInt anOop);
#if LLDB
extern void printUnmarkedOops(void);
#endif /* LLDB */
extern void pushRemappableOop(sqInt oop);
extern sqInt rawHashBitsOf(sqInt objOop);
extern sqInt removeGCRoot(sqInt *varLoc);
extern void shortPrintObjectsFromto(sqInt startAddress, sqInt endAddress);
extern sqInt shouldRemapOop(sqInt oop);
extern sqInt splObj(sqInt index);
extern usqInt storeCheckBoundary(void);
extern sqInt storePointerUncheckedofObjectwithValue(sqInt fieldIndex, sqInt objOop, sqInt valuePointer);
extern sqInt stringForCString(const char *aCString);
extern void tenuringIncrementalGC(void);
extern sqInt topRemappableOop(void);
extern sqInt trueObject(void);
extern sqInt validFreeTree(void);
extern sqInt vmEndianness(void);
extern sqInt remapObj(sqInt objOop);
extern sqInt shouldRemapObj(sqInt objOop);
extern sqInt activeProcess(void);
extern void addIdleUsecs(sqInt idleUsecs);
extern sqInt argumentCountOfClosure(sqInt closurePointer);
extern sqInt argumentCountOfMethodHeader(sqInt header);
extern sqInt argumentCountOf(sqInt methodPointer);
extern sqInt canContextSwitchIfActivatingheader(sqInt theMethod, sqInt methodHeader);
extern sqInt checkAllAccessibleObjectsOkay(void);
extern sqInt checkOkayInterpreterObjects(sqInt writeBack);
extern sqInt copiedValueCountOfClosure(sqInt closurePointer);
extern sqInt copiedValueCountOfFullClosure(sqInt closurePointer);
extern sqInt disownVM(sqInt flags);
extern sqInt doSignalSemaphoreWithIndex(sqInt index);
extern void (*functionPointerForinClass(sqInt primIdx,sqInt theClass))(void) ;
extern usqLong getNextWakeupUsecs(void);
extern sqInt * getStackPointer(void);
extern sqInt highBit(usqInt anUnsignedValue);
extern sqInt isFloatObject(sqInt oop);
extern sqInt isKindOfInteger(sqInt oop);
extern sqInt isLargeIntegerObject(sqInt oop);
extern sqInt isLargeNegativeIntegerObject(sqInt oop);
extern sqInt isLargePositiveIntegerObject(sqInt oop);
extern sqInt isQuickPrimitiveIndex(sqInt anInteger);
extern sqInt isReadMediatedContextInstVarIndex(sqInt index);
extern sqInt isWriteMediatedContextInstVarIndex(sqInt index);
extern sqInt isKindOfClass(sqInt oop, sqInt aClass);
extern sqInt literalofMethod(sqInt offset, sqInt methodPointer);
extern void longPrintOop(sqInt oop);
extern sqInt longStoreBytecodeForHeader(sqInt methodHeader);
extern sqInt lookupSelectorinClass(sqInt selector, sqInt class);
extern sqInt maybeSelectorOfMethod(sqInt methodObj);
extern sqInt methodClassAssociationOf(sqInt methodPointer);
extern sqInt methodClassOf(sqInt methodPointer);
extern sqInt methodPrimitiveIndex(void);
extern sqInt methodUsesAlternateBytecodeSet(sqInt aMethodObj);
extern sqInt objCouldBeClassObj(sqInt objOop);
extern sqInt ownVM(sqInt threadIndexAndFlags);
extern sqInt penultimateLiteralOf(sqInt aMethodOop);
extern sqInt popStack(void);
extern sqInt primitiveIndexOfMethodheader(sqInt theMethod, sqInt methodHeader);
extern sqInt primitiveIndexOf(sqInt methodPointer);
extern void printAllStacks(void);
extern sqInt printCallStackOf(sqInt aContextOrProcessOrFrame);
extern void printChar(sqInt aByte);
extern sqInt printHexnp(usqInt n);
extern void printHex(usqInt n);
extern void printLikelyImplementorsOfSelector(sqInt selector);
extern void printMethodCache(void);
extern void printMethodDictionaryOf(sqInt behavior);
extern void printMethodDictionary(sqInt dictionary);
extern void printProcessStack(sqInt aProcess);
extern sqInt printProcsOnList(sqInt procList);
extern sqInt printStackCallStackOf(sqInt aContextOrProcessOrFrame);
extern void printStackReferencesTo(sqInt oop);
extern void print(char *s);
extern sqInt readableFormat(sqInt imageVersion);
extern void setBreakMNUSelector(char *aString);
extern void setBreakSelector(char *aString);
extern void setNextWakeupUsecs(usqLong value);
extern void shortPrintFrameAndNCallers(char *theFP, sqInt n);
extern sqInt sizeOfCallPrimitiveBytecode(sqInt methodHeader);
extern sqInt sizeOfLongStoreTempBytecode(sqInt methodHeader);
extern sqInt specialSelector(sqInt index);
extern usqIntptr_t stackPositiveMachineIntegerValue(sqInt offset);
extern sqIntptr_t stackSignedMachineIntegerValue(sqInt offset);
extern sqInt stackTop(void);
extern sqInt stackValue(sqInt offset);
extern sqInt startPCOfMethod(sqInt aCompiledMethod);
extern sqInt tempCountOf(sqInt methodPointer);
extern sqInt temporaryCountOfMethodHeader(sqInt header);
extern sqInt ultimateLiteralOf(sqInt aMethodOop);


/*** Global Variables ***/
extern sqInt breakLookupClassTag;
extern char * breakSelector;
extern sqInt breakSelectorLength ;
extern sqInt checkedPluginName;
extern sqInt checkForLeaks;
extern sqInt debugCallbackInvokes;
extern sqInt debugCallbackPath;
extern sqInt debugCallbackReturns;
extern sqInt deferDisplayUpdates;
extern sqInt desiredCogCodeSize;
extern sqInt desiredEdenBytes;
extern sqInt desiredNumStackPages;
extern void * displayBits;
extern int displayDepth;
extern int displayHeight;
extern int displayWidth;
extern sqInt extraVMMemory;
extern sqInt ffiExceptionResponse;
extern usqInt heapBase;
extern sqInt inIOProcessEvents;
extern struct VirtualMachine* interpreterProxy;
extern sqInt maxLiteralCountForCompile ;
extern usqInt maxOldSpaceSize;
extern sqInt minBackwardJumpCountForCompile ;
extern char primitiveDoMixedArithmetic ;
extern volatile int sendTrace;
extern sqInt sendWheelEvents;
extern int (*showSurfaceFn)(sqIntptr_t, int, int, int, int);
extern sqInt suppressHeartbeatFlag;


/*** Macros ***/
#define compilationBreakpointclassTagisMNUCase(sel, classTag, isMNU) do { \
	if (numBytesOf(sel) == (isMNU ? -breakSelectorLength : breakSelectorLength) \
	 && !strncmp((char *)((sel) + BaseHeaderSize), breakSelector, (isMNU ? -breakSelectorLength : breakSelectorLength))) { \
		suppressHeartbeatFlag = 1; \
		compilationBreakpointFor(sel); \
	} \
} while (0)
#define compilationBreakpointisMNUCase(sel, isMNU) do { \
	if (numBytesOf(sel) == (isMNU ? -breakSelectorLength : breakSelectorLength) \
	 && !strncmp((char *)((sel) + BaseHeaderSize), breakSelector, (isMNU ? -breakSelectorLength : breakSelectorLength))) { \
		suppressHeartbeatFlag = 1; \
		compilationBreakpointFor(sel); \
	} \
} while (0)
#define mnuCompilationBreakpoint(sel, len) do { \
	if ((len) == -breakSelectorLength \
	 && !strncmp((char *)((sel) + BaseHeaderSize), breakSelector, -breakSelectorLength)) { \
		suppressHeartbeatFlag = 1; \
		compilationBreakpointFor(sel); \
	} \
} while (0)
#define primNumberExternalCall() 117
#define startOfMemory() heapBase
#define numTagBits() 2
#define shiftForWord() 2
#define tagMask() 0x3
#define wordSize() 4
#define characterTag() 2
#define classIndexMask() 0x3FFFFF
#define classTableMajorIndexShift() 10
#define firstByteFormat() 16
#define firstCompiledMethodFormat() 24
#define firstLongFormat() 10
#define firstShortFormat() 12
#define fixedFieldsFieldWidth() 16
#define formatMask() 0x1F
#define formatShift() 24
#define identityHashFullWordShift() 32
#define identityHashHalfWordMask() 0x3FFFFF
#define indexablePointersFormat() 3
#define isForwardedObjectClassIndexPun() 8
#define numSlotsFullShift() 56
#define numSlotsHalfShift() 24
#define numSlotsMask() 0xFF
#define rememberedBitShift() 29
#define sixtyFourBitIndexableFormat() 9
#define smallIntegerTag() 1
#define weakArrayFormat() 4
#define alternateHeaderNumLiteralsMask() 0x7FFF
#define flush() fflush(stdout)
#define primitiveDoMixedArithmetic() primitiveDoMixedArithmetic
#define remoteIsInstVarAccess() 128

