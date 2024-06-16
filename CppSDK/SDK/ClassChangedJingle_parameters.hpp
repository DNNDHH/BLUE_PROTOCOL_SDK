#pragma once

 

// Package: ClassChangedJingle

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function ClassChangedJingle.ClassChangedJingle_C.ExecuteUbergraph_ClassChangedJingle
// 0x0018 (0x0018 - 0x0000)
struct ClassChangedJingle_C_ExecuteUbergraph_ClassChangedJingle final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  K2Node_CustomEvent_InClassType_1;                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  K2Node_CustomEvent_InClassType;                    // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_839B[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ClassChangedJingle_C_ExecuteUbergraph_ClassChangedJingle) == 0x000008, "Wrong alignment on ClassChangedJingle_C_ExecuteUbergraph_ClassChangedJingle");
static_assert(sizeof(ClassChangedJingle_C_ExecuteUbergraph_ClassChangedJingle) == 0x000018, "Wrong size on ClassChangedJingle_C_ExecuteUbergraph_ClassChangedJingle");
static_assert(offsetof(ClassChangedJingle_C_ExecuteUbergraph_ClassChangedJingle, EntryPoint) == 0x000000, "Member 'ClassChangedJingle_C_ExecuteUbergraph_ClassChangedJingle::EntryPoint' has a wrong offset!");
static_assert(offsetof(ClassChangedJingle_C_ExecuteUbergraph_ClassChangedJingle, K2Node_CustomEvent_InClassType_1) == 0x000004, "Member 'ClassChangedJingle_C_ExecuteUbergraph_ClassChangedJingle::K2Node_CustomEvent_InClassType_1' has a wrong offset!");
static_assert(offsetof(ClassChangedJingle_C_ExecuteUbergraph_ClassChangedJingle, K2Node_CustomEvent_InClassType) == 0x000005, "Member 'ClassChangedJingle_C_ExecuteUbergraph_ClassChangedJingle::K2Node_CustomEvent_InClassType' has a wrong offset!");
static_assert(offsetof(ClassChangedJingle_C_ExecuteUbergraph_ClassChangedJingle, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'ClassChangedJingle_C_ExecuteUbergraph_ClassChangedJingle::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ClassChangedJingle_C_ExecuteUbergraph_ClassChangedJingle, CallFunc_PlaySE_ReturnValue) == 0x000010, "Member 'ClassChangedJingle_C_ExecuteUbergraph_ClassChangedJingle::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(ClassChangedJingle_C_ExecuteUbergraph_ClassChangedJingle, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000014, "Member 'ClassChangedJingle_C_ExecuteUbergraph_ClassChangedJingle::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");

// Function ClassChangedJingle.ClassChangedJingle_C.PlayAnim
// 0x0001 (0x0001 - 0x0000)
struct ClassChangedJingle_C_PlayAnim final
{
public:
	ESBClassType                                  InClassType;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ClassChangedJingle_C_PlayAnim) == 0x000001, "Wrong alignment on ClassChangedJingle_C_PlayAnim");
static_assert(sizeof(ClassChangedJingle_C_PlayAnim) == 0x000001, "Wrong size on ClassChangedJingle_C_PlayAnim");
static_assert(offsetof(ClassChangedJingle_C_PlayAnim, InClassType) == 0x000000, "Member 'ClassChangedJingle_C_PlayAnim::InClassType' has a wrong offset!");

// Function ClassChangedJingle.ClassChangedJingle_C.SetBeforeClass
// 0x0001 (0x0001 - 0x0000)
struct ClassChangedJingle_C_SetBeforeClass final
{
public:
	ESBClassType                                  InClassType;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ClassChangedJingle_C_SetBeforeClass) == 0x000001, "Wrong alignment on ClassChangedJingle_C_SetBeforeClass");
static_assert(sizeof(ClassChangedJingle_C_SetBeforeClass) == 0x000001, "Wrong size on ClassChangedJingle_C_SetBeforeClass");
static_assert(offsetof(ClassChangedJingle_C_SetBeforeClass, InClassType) == 0x000000, "Member 'ClassChangedJingle_C_SetBeforeClass::InClassType' has a wrong offset!");

}

