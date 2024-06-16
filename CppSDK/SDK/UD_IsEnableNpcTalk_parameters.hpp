#pragma once

 

// Package: UD_IsEnableNpcTalk

#include "Basic.hpp"


namespace SDK::Params
{

// Function UD_IsEnableNpcTalk.UD_IsEnableNpcTalk_C.ExecuteUbergraph_UD_IsEnableNpcTalk
// 0x0040 (0x0040 - 0x0000)
struct UD_IsEnableNpcTalk_C_ExecuteUbergraph_UD_IsEnableNpcTalk final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7042[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUtilityBrainComponent*               K2Node_Event_OwnerComponent;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                            K2Node_DynamicCast_AsController;                   // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7043[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBMobCharacter*                        K2Node_DynamicCast_AsSBMob_Character;              // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UD_IsEnableNpcTalk_C_ExecuteUbergraph_UD_IsEnableNpcTalk) == 0x000008, "Wrong alignment on UD_IsEnableNpcTalk_C_ExecuteUbergraph_UD_IsEnableNpcTalk");
static_assert(sizeof(UD_IsEnableNpcTalk_C_ExecuteUbergraph_UD_IsEnableNpcTalk) == 0x000040, "Wrong size on UD_IsEnableNpcTalk_C_ExecuteUbergraph_UD_IsEnableNpcTalk");
static_assert(offsetof(UD_IsEnableNpcTalk_C_ExecuteUbergraph_UD_IsEnableNpcTalk, EntryPoint) == 0x000000, "Member 'UD_IsEnableNpcTalk_C_ExecuteUbergraph_UD_IsEnableNpcTalk::EntryPoint' has a wrong offset!");
static_assert(offsetof(UD_IsEnableNpcTalk_C_ExecuteUbergraph_UD_IsEnableNpcTalk, K2Node_Event_OwnerComponent) == 0x000008, "Member 'UD_IsEnableNpcTalk_C_ExecuteUbergraph_UD_IsEnableNpcTalk::K2Node_Event_OwnerComponent' has a wrong offset!");
static_assert(offsetof(UD_IsEnableNpcTalk_C_ExecuteUbergraph_UD_IsEnableNpcTalk, CallFunc_GetOwner_ReturnValue) == 0x000010, "Member 'UD_IsEnableNpcTalk_C_ExecuteUbergraph_UD_IsEnableNpcTalk::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(UD_IsEnableNpcTalk_C_ExecuteUbergraph_UD_IsEnableNpcTalk, K2Node_DynamicCast_AsController) == 0x000018, "Member 'UD_IsEnableNpcTalk_C_ExecuteUbergraph_UD_IsEnableNpcTalk::K2Node_DynamicCast_AsController' has a wrong offset!");
static_assert(offsetof(UD_IsEnableNpcTalk_C_ExecuteUbergraph_UD_IsEnableNpcTalk, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'UD_IsEnableNpcTalk_C_ExecuteUbergraph_UD_IsEnableNpcTalk::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UD_IsEnableNpcTalk_C_ExecuteUbergraph_UD_IsEnableNpcTalk, CallFunc_K2_GetPawn_ReturnValue) == 0x000028, "Member 'UD_IsEnableNpcTalk_C_ExecuteUbergraph_UD_IsEnableNpcTalk::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(UD_IsEnableNpcTalk_C_ExecuteUbergraph_UD_IsEnableNpcTalk, K2Node_DynamicCast_AsSBMob_Character) == 0x000030, "Member 'UD_IsEnableNpcTalk_C_ExecuteUbergraph_UD_IsEnableNpcTalk::K2Node_DynamicCast_AsSBMob_Character' has a wrong offset!");
static_assert(offsetof(UD_IsEnableNpcTalk_C_ExecuteUbergraph_UD_IsEnableNpcTalk, K2Node_DynamicCast_bSuccess_1) == 0x000038, "Member 'UD_IsEnableNpcTalk_C_ExecuteUbergraph_UD_IsEnableNpcTalk::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function UD_IsEnableNpcTalk.UD_IsEnableNpcTalk_C.ReceiveInitialize
// 0x0008 (0x0008 - 0x0000)
struct UD_IsEnableNpcTalk_C_ReceiveInitialize final
{
public:
	class USBUtilityBrainComponent*               OwnerComponent;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UD_IsEnableNpcTalk_C_ReceiveInitialize) == 0x000008, "Wrong alignment on UD_IsEnableNpcTalk_C_ReceiveInitialize");
static_assert(sizeof(UD_IsEnableNpcTalk_C_ReceiveInitialize) == 0x000008, "Wrong size on UD_IsEnableNpcTalk_C_ReceiveInitialize");
static_assert(offsetof(UD_IsEnableNpcTalk_C_ReceiveInitialize, OwnerComponent) == 0x000000, "Member 'UD_IsEnableNpcTalk_C_ReceiveInitialize::OwnerComponent' has a wrong offset!");

// Function UD_IsEnableNpcTalk.UD_IsEnableNpcTalk_C.ReceiveFetchValue
// 0x0008 (0x0008 - 0x0000)
struct UD_IsEnableNpcTalk_C_ReceiveFetchValue final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEnableNpcTalk_ReturnValue;              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UD_IsEnableNpcTalk_C_ReceiveFetchValue) == 0x000004, "Wrong alignment on UD_IsEnableNpcTalk_C_ReceiveFetchValue");
static_assert(sizeof(UD_IsEnableNpcTalk_C_ReceiveFetchValue) == 0x000008, "Wrong size on UD_IsEnableNpcTalk_C_ReceiveFetchValue");
static_assert(offsetof(UD_IsEnableNpcTalk_C_ReceiveFetchValue, ReturnValue) == 0x000000, "Member 'UD_IsEnableNpcTalk_C_ReceiveFetchValue::ReturnValue' has a wrong offset!");
static_assert(offsetof(UD_IsEnableNpcTalk_C_ReceiveFetchValue, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'UD_IsEnableNpcTalk_C_ReceiveFetchValue::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UD_IsEnableNpcTalk_C_ReceiveFetchValue, CallFunc_IsEnableNpcTalk_ReturnValue) == 0x000005, "Member 'UD_IsEnableNpcTalk_C_ReceiveFetchValue::CallFunc_IsEnableNpcTalk_ReturnValue' has a wrong offset!");
static_assert(offsetof(UD_IsEnableNpcTalk_C_ReceiveFetchValue, CallFunc_IsValid_ReturnValue_1) == 0x000006, "Member 'UD_IsEnableNpcTalk_C_ReceiveFetchValue::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

}

