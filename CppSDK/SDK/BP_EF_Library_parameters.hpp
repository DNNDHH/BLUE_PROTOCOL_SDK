#pragma once

 

// Package: BP_EF_Library

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_EF_Library.BP_EF_Library_C.IsShouldExecOnServerOnly
// 0x0010 (0x0010 - 0x0000)
struct BP_EF_Library_C_IsShouldExecOnServerOnly final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsExec;                                            // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsStandalone_ReturnValue;                 // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EF_Library_C_IsShouldExecOnServerOnly) == 0x000008, "Wrong alignment on BP_EF_Library_C_IsShouldExecOnServerOnly");
static_assert(sizeof(BP_EF_Library_C_IsShouldExecOnServerOnly) == 0x000010, "Wrong size on BP_EF_Library_C_IsShouldExecOnServerOnly");
static_assert(offsetof(BP_EF_Library_C_IsShouldExecOnServerOnly, __WorldContext) == 0x000000, "Member 'BP_EF_Library_C_IsShouldExecOnServerOnly::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_EF_Library_C_IsShouldExecOnServerOnly, IsExec) == 0x000008, "Member 'BP_EF_Library_C_IsShouldExecOnServerOnly::IsExec' has a wrong offset!");
static_assert(offsetof(BP_EF_Library_C_IsShouldExecOnServerOnly, CallFunc_IsServer_ReturnValue) == 0x000009, "Member 'BP_EF_Library_C_IsShouldExecOnServerOnly::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Library_C_IsShouldExecOnServerOnly, CallFunc_IsStandalone_ReturnValue) == 0x00000A, "Member 'BP_EF_Library_C_IsShouldExecOnServerOnly::CallFunc_IsStandalone_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Library_C_IsShouldExecOnServerOnly, CallFunc_BooleanOR_ReturnValue) == 0x00000B, "Member 'BP_EF_Library_C_IsShouldExecOnServerOnly::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function BP_EF_Library.BP_EF_Library_C.IsShouldExecOnClientOnly
// 0x0010 (0x0010 - 0x0000)
struct BP_EF_Library_C_IsShouldExecOnClientOnly final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsExec;                                            // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsStandalone_ReturnValue;                 // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EF_Library_C_IsShouldExecOnClientOnly) == 0x000008, "Wrong alignment on BP_EF_Library_C_IsShouldExecOnClientOnly");
static_assert(sizeof(BP_EF_Library_C_IsShouldExecOnClientOnly) == 0x000010, "Wrong size on BP_EF_Library_C_IsShouldExecOnClientOnly");
static_assert(offsetof(BP_EF_Library_C_IsShouldExecOnClientOnly, __WorldContext) == 0x000000, "Member 'BP_EF_Library_C_IsShouldExecOnClientOnly::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_EF_Library_C_IsShouldExecOnClientOnly, IsExec) == 0x000008, "Member 'BP_EF_Library_C_IsShouldExecOnClientOnly::IsExec' has a wrong offset!");
static_assert(offsetof(BP_EF_Library_C_IsShouldExecOnClientOnly, CallFunc_IsServer_ReturnValue) == 0x000009, "Member 'BP_EF_Library_C_IsShouldExecOnClientOnly::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Library_C_IsShouldExecOnClientOnly, CallFunc_IsStandalone_ReturnValue) == 0x00000A, "Member 'BP_EF_Library_C_IsShouldExecOnClientOnly::CallFunc_IsStandalone_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Library_C_IsShouldExecOnClientOnly, CallFunc_Not_PreBool_ReturnValue) == 0x00000B, "Member 'BP_EF_Library_C_IsShouldExecOnClientOnly::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Library_C_IsShouldExecOnClientOnly, CallFunc_BooleanOR_ReturnValue) == 0x00000C, "Member 'BP_EF_Library_C_IsShouldExecOnClientOnly::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function BP_EF_Library.BP_EF_Library_C.IsIntervalExec
// 0x0028 (0x0028 - 0x0000)
struct BP_EF_Library_C_IsIntervalExec final
{
public:
	float                                         RefTotalDeltaTime;                                 // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaTime;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ExecIntervalTime;                                  // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_98D7[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsExec;                                            // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_98D8[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EF_Library_C_IsIntervalExec) == 0x000008, "Wrong alignment on BP_EF_Library_C_IsIntervalExec");
static_assert(sizeof(BP_EF_Library_C_IsIntervalExec) == 0x000028, "Wrong size on BP_EF_Library_C_IsIntervalExec");
static_assert(offsetof(BP_EF_Library_C_IsIntervalExec, RefTotalDeltaTime) == 0x000000, "Member 'BP_EF_Library_C_IsIntervalExec::RefTotalDeltaTime' has a wrong offset!");
static_assert(offsetof(BP_EF_Library_C_IsIntervalExec, DeltaTime) == 0x000004, "Member 'BP_EF_Library_C_IsIntervalExec::DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_EF_Library_C_IsIntervalExec, ExecIntervalTime) == 0x000008, "Member 'BP_EF_Library_C_IsIntervalExec::ExecIntervalTime' has a wrong offset!");
static_assert(offsetof(BP_EF_Library_C_IsIntervalExec, __WorldContext) == 0x000010, "Member 'BP_EF_Library_C_IsIntervalExec::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_EF_Library_C_IsIntervalExec, IsExec) == 0x000018, "Member 'BP_EF_Library_C_IsIntervalExec::IsExec' has a wrong offset!");
static_assert(offsetof(BP_EF_Library_C_IsIntervalExec, CallFunc_Add_FloatFloat_ReturnValue) == 0x00001C, "Member 'BP_EF_Library_C_IsIntervalExec::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Library_C_IsIntervalExec, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x000020, "Member 'BP_EF_Library_C_IsIntervalExec::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");

}

