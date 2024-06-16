#pragma once

 

// Package: TS_Order_Buff

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function TS_Order_Buff.TS_Order_Buff_C.ExecuteUbergraph_TS_Order_Buff
// 0x00A0 (0x00A0 - 0x0000)
struct TS_Order_Buff_C_ExecuteUbergraph_TS_Order_Buff final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8D25[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAIFwBlackboardComponent*               CallFunc_GetAIFwBlackboard_ReturnValue;            // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_GetControlRotation_ReturnValue;           // 0x0018(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D26[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UObject*>                        CallFunc_GetValueAsObjectArray_ReturnValue;        // 0x0028(0x0010)(ReferenceParm)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8D27[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_Array_Get_Item;                           // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetValueAsLocation_ReturnValue;           // 0x0050(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x005C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0068(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VSize_ReturnValue;                        // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_GetRotatorFromVectorDirection_ReturnValue; // 0x0078(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakRotator_Roll_1;                      // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch_1;                     // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw_1;                       // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_1;        // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_NormalizeAxis_ReturnValue;                // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_NormalizeAxis_ReturnValue_1;              // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TS_Order_Buff_C_ExecuteUbergraph_TS_Order_Buff) == 0x000008, "Wrong alignment on TS_Order_Buff_C_ExecuteUbergraph_TS_Order_Buff");
static_assert(sizeof(TS_Order_Buff_C_ExecuteUbergraph_TS_Order_Buff) == 0x0000A0, "Wrong size on TS_Order_Buff_C_ExecuteUbergraph_TS_Order_Buff");
static_assert(offsetof(TS_Order_Buff_C_ExecuteUbergraph_TS_Order_Buff, EntryPoint) == 0x000000, "Member 'TS_Order_Buff_C_ExecuteUbergraph_TS_Order_Buff::EntryPoint' has a wrong offset!");
static_assert(offsetof(TS_Order_Buff_C_ExecuteUbergraph_TS_Order_Buff, CallFunc_K2_GetPawn_ReturnValue) == 0x000008, "Member 'TS_Order_Buff_C_ExecuteUbergraph_TS_Order_Buff::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(TS_Order_Buff_C_ExecuteUbergraph_TS_Order_Buff, CallFunc_GetAIFwBlackboard_ReturnValue) == 0x000010, "Member 'TS_Order_Buff_C_ExecuteUbergraph_TS_Order_Buff::CallFunc_GetAIFwBlackboard_ReturnValue' has a wrong offset!");
static_assert(offsetof(TS_Order_Buff_C_ExecuteUbergraph_TS_Order_Buff, CallFunc_GetControlRotation_ReturnValue) == 0x000018, "Member 'TS_Order_Buff_C_ExecuteUbergraph_TS_Order_Buff::CallFunc_GetControlRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(TS_Order_Buff_C_ExecuteUbergraph_TS_Order_Buff, CallFunc_GetValueAsObjectArray_ReturnValue) == 0x000028, "Member 'TS_Order_Buff_C_ExecuteUbergraph_TS_Order_Buff::CallFunc_GetValueAsObjectArray_ReturnValue' has a wrong offset!");
static_assert(offsetof(TS_Order_Buff_C_ExecuteUbergraph_TS_Order_Buff, CallFunc_BreakRotator_Roll) == 0x000038, "Member 'TS_Order_Buff_C_ExecuteUbergraph_TS_Order_Buff::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(TS_Order_Buff_C_ExecuteUbergraph_TS_Order_Buff, CallFunc_BreakRotator_Pitch) == 0x00003C, "Member 'TS_Order_Buff_C_ExecuteUbergraph_TS_Order_Buff::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(TS_Order_Buff_C_ExecuteUbergraph_TS_Order_Buff, CallFunc_BreakRotator_Yaw) == 0x000040, "Member 'TS_Order_Buff_C_ExecuteUbergraph_TS_Order_Buff::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(TS_Order_Buff_C_ExecuteUbergraph_TS_Order_Buff, CallFunc_Array_Get_Item) == 0x000048, "Member 'TS_Order_Buff_C_ExecuteUbergraph_TS_Order_Buff::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(TS_Order_Buff_C_ExecuteUbergraph_TS_Order_Buff, CallFunc_GetValueAsLocation_ReturnValue) == 0x000050, "Member 'TS_Order_Buff_C_ExecuteUbergraph_TS_Order_Buff::CallFunc_GetValueAsLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(TS_Order_Buff_C_ExecuteUbergraph_TS_Order_Buff, CallFunc_K2_GetActorLocation_ReturnValue) == 0x00005C, "Member 'TS_Order_Buff_C_ExecuteUbergraph_TS_Order_Buff::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(TS_Order_Buff_C_ExecuteUbergraph_TS_Order_Buff, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000068, "Member 'TS_Order_Buff_C_ExecuteUbergraph_TS_Order_Buff::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(TS_Order_Buff_C_ExecuteUbergraph_TS_Order_Buff, CallFunc_VSize_ReturnValue) == 0x000074, "Member 'TS_Order_Buff_C_ExecuteUbergraph_TS_Order_Buff::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(TS_Order_Buff_C_ExecuteUbergraph_TS_Order_Buff, CallFunc_GetRotatorFromVectorDirection_ReturnValue) == 0x000078, "Member 'TS_Order_Buff_C_ExecuteUbergraph_TS_Order_Buff::CallFunc_GetRotatorFromVectorDirection_ReturnValue' has a wrong offset!");
static_assert(offsetof(TS_Order_Buff_C_ExecuteUbergraph_TS_Order_Buff, CallFunc_BreakRotator_Roll_1) == 0x000084, "Member 'TS_Order_Buff_C_ExecuteUbergraph_TS_Order_Buff::CallFunc_BreakRotator_Roll_1' has a wrong offset!");
static_assert(offsetof(TS_Order_Buff_C_ExecuteUbergraph_TS_Order_Buff, CallFunc_BreakRotator_Pitch_1) == 0x000088, "Member 'TS_Order_Buff_C_ExecuteUbergraph_TS_Order_Buff::CallFunc_BreakRotator_Pitch_1' has a wrong offset!");
static_assert(offsetof(TS_Order_Buff_C_ExecuteUbergraph_TS_Order_Buff, CallFunc_BreakRotator_Yaw_1) == 0x00008C, "Member 'TS_Order_Buff_C_ExecuteUbergraph_TS_Order_Buff::CallFunc_BreakRotator_Yaw_1' has a wrong offset!");
static_assert(offsetof(TS_Order_Buff_C_ExecuteUbergraph_TS_Order_Buff, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000090, "Member 'TS_Order_Buff_C_ExecuteUbergraph_TS_Order_Buff::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(TS_Order_Buff_C_ExecuteUbergraph_TS_Order_Buff, CallFunc_Subtract_FloatFloat_ReturnValue_1) == 0x000094, "Member 'TS_Order_Buff_C_ExecuteUbergraph_TS_Order_Buff::CallFunc_Subtract_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TS_Order_Buff_C_ExecuteUbergraph_TS_Order_Buff, CallFunc_NormalizeAxis_ReturnValue) == 0x000098, "Member 'TS_Order_Buff_C_ExecuteUbergraph_TS_Order_Buff::CallFunc_NormalizeAxis_ReturnValue' has a wrong offset!");
static_assert(offsetof(TS_Order_Buff_C_ExecuteUbergraph_TS_Order_Buff, CallFunc_NormalizeAxis_ReturnValue_1) == 0x00009C, "Member 'TS_Order_Buff_C_ExecuteUbergraph_TS_Order_Buff::CallFunc_NormalizeAxis_ReturnValue_1' has a wrong offset!");

}

