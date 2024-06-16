#pragma once

 

// Package: GA_Action_Cancel

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_Action_Cancel.GA_Action_Cancel_C.ExecuteUbergraph_GA_Action_Cancel
// 0x0348 (0x0348 - 0x0000)
struct GA_Action_Cancel_C_ExecuteUbergraph_GA_Action_Cancel final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_694B[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBAbilityTask_EnemyPlayAnimationAndWait* CallFunc_CreatePlayAnimationAndWaitProxy_ReturnValue; // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FGameplayEventData& Payload)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0030(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_694C[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_CustomEvent_Payload_1;                      // 0x0048(0x00B0)()
	struct FGameplayEventData                     Temp_struct_Variable;                              // 0x00F8(0x00B0)()
	class UAbilityTask_WaitGameplayEvent*         CallFunc_WaitGameplayEvent_ReturnValue;            // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_694D[0x3];                                     // 0x01B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FGameplayEventData& Payload)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x01B4(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_694E[0x4];                                     // 0x01C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_CustomEvent_Payload;                        // 0x01C8(0x00B0)()
	struct FGameplayEventData                     Temp_struct_Variable_1;                            // 0x0278(0x00B0)()
	class UAbilityTask_WaitGameplayEvent*         CallFunc_WaitGameplayEvent_ReturnValue_1;          // 0x0328(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0330(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x0331(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_694F[0x2];                                     // 0x0332(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x0334(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(GA_Action_Cancel_C_ExecuteUbergraph_GA_Action_Cancel) == 0x000008, "Wrong alignment on GA_Action_Cancel_C_ExecuteUbergraph_GA_Action_Cancel");
static_assert(sizeof(GA_Action_Cancel_C_ExecuteUbergraph_GA_Action_Cancel) == 0x000348, "Wrong size on GA_Action_Cancel_C_ExecuteUbergraph_GA_Action_Cancel");
static_assert(offsetof(GA_Action_Cancel_C_ExecuteUbergraph_GA_Action_Cancel, EntryPoint) == 0x000000, "Member 'GA_Action_Cancel_C_ExecuteUbergraph_GA_Action_Cancel::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Action_Cancel_C_ExecuteUbergraph_GA_Action_Cancel, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'GA_Action_Cancel_C_ExecuteUbergraph_GA_Action_Cancel::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Action_Cancel_C_ExecuteUbergraph_GA_Action_Cancel, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'GA_Action_Cancel_C_ExecuteUbergraph_GA_Action_Cancel::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GA_Action_Cancel_C_ExecuteUbergraph_GA_Action_Cancel, CallFunc_CreatePlayAnimationAndWaitProxy_ReturnValue) == 0x000028, "Member 'GA_Action_Cancel_C_ExecuteUbergraph_GA_Action_Cancel::CallFunc_CreatePlayAnimationAndWaitProxy_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Action_Cancel_C_ExecuteUbergraph_GA_Action_Cancel, K2Node_CreateDelegate_OutputDelegate_2) == 0x000030, "Member 'GA_Action_Cancel_C_ExecuteUbergraph_GA_Action_Cancel::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(GA_Action_Cancel_C_ExecuteUbergraph_GA_Action_Cancel, CallFunc_IsValid_ReturnValue) == 0x000040, "Member 'GA_Action_Cancel_C_ExecuteUbergraph_GA_Action_Cancel::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Action_Cancel_C_ExecuteUbergraph_GA_Action_Cancel, K2Node_CustomEvent_Payload_1) == 0x000048, "Member 'GA_Action_Cancel_C_ExecuteUbergraph_GA_Action_Cancel::K2Node_CustomEvent_Payload_1' has a wrong offset!");
static_assert(offsetof(GA_Action_Cancel_C_ExecuteUbergraph_GA_Action_Cancel, Temp_struct_Variable) == 0x0000F8, "Member 'GA_Action_Cancel_C_ExecuteUbergraph_GA_Action_Cancel::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_Action_Cancel_C_ExecuteUbergraph_GA_Action_Cancel, CallFunc_WaitGameplayEvent_ReturnValue) == 0x0001A8, "Member 'GA_Action_Cancel_C_ExecuteUbergraph_GA_Action_Cancel::CallFunc_WaitGameplayEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Action_Cancel_C_ExecuteUbergraph_GA_Action_Cancel, CallFunc_IsValid_ReturnValue_1) == 0x0001B0, "Member 'GA_Action_Cancel_C_ExecuteUbergraph_GA_Action_Cancel::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Action_Cancel_C_ExecuteUbergraph_GA_Action_Cancel, K2Node_CreateDelegate_OutputDelegate_3) == 0x0001B4, "Member 'GA_Action_Cancel_C_ExecuteUbergraph_GA_Action_Cancel::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(GA_Action_Cancel_C_ExecuteUbergraph_GA_Action_Cancel, K2Node_CustomEvent_Payload) == 0x0001C8, "Member 'GA_Action_Cancel_C_ExecuteUbergraph_GA_Action_Cancel::K2Node_CustomEvent_Payload' has a wrong offset!");
static_assert(offsetof(GA_Action_Cancel_C_ExecuteUbergraph_GA_Action_Cancel, Temp_struct_Variable_1) == 0x000278, "Member 'GA_Action_Cancel_C_ExecuteUbergraph_GA_Action_Cancel::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(GA_Action_Cancel_C_ExecuteUbergraph_GA_Action_Cancel, CallFunc_WaitGameplayEvent_ReturnValue_1) == 0x000328, "Member 'GA_Action_Cancel_C_ExecuteUbergraph_GA_Action_Cancel::CallFunc_WaitGameplayEvent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Action_Cancel_C_ExecuteUbergraph_GA_Action_Cancel, CallFunc_IsValid_ReturnValue_2) == 0x000330, "Member 'GA_Action_Cancel_C_ExecuteUbergraph_GA_Action_Cancel::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Action_Cancel_C_ExecuteUbergraph_GA_Action_Cancel, K2Node_Event_bWasCancelled) == 0x000331, "Member 'GA_Action_Cancel_C_ExecuteUbergraph_GA_Action_Cancel::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_Action_Cancel_C_ExecuteUbergraph_GA_Action_Cancel, K2Node_CreateDelegate_OutputDelegate_4) == 0x000334, "Member 'GA_Action_Cancel_C_ExecuteUbergraph_GA_Action_Cancel::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");

// Function GA_Action_Cancel.GA_Action_Cancel_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GA_Action_Cancel_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Action_Cancel_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_Action_Cancel_C_K2_OnEndAbility");
static_assert(sizeof(GA_Action_Cancel_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_Action_Cancel_C_K2_OnEndAbility");
static_assert(offsetof(GA_Action_Cancel_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_Action_Cancel_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

// Function GA_Action_Cancel.GA_Action_Cancel_C.EventReceived_24E51A6C4D943FA7BDB7EDBA7086404A
// 0x00B0 (0x00B0 - 0x0000)
struct GA_Action_Cancel_C_EventReceived_24E51A6C4D943FA7BDB7EDBA7086404A final
{
public:
	struct FGameplayEventData                     Payload;                                           // 0x0000(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_Action_Cancel_C_EventReceived_24E51A6C4D943FA7BDB7EDBA7086404A) == 0x000008, "Wrong alignment on GA_Action_Cancel_C_EventReceived_24E51A6C4D943FA7BDB7EDBA7086404A");
static_assert(sizeof(GA_Action_Cancel_C_EventReceived_24E51A6C4D943FA7BDB7EDBA7086404A) == 0x0000B0, "Wrong size on GA_Action_Cancel_C_EventReceived_24E51A6C4D943FA7BDB7EDBA7086404A");
static_assert(offsetof(GA_Action_Cancel_C_EventReceived_24E51A6C4D943FA7BDB7EDBA7086404A, Payload) == 0x000000, "Member 'GA_Action_Cancel_C_EventReceived_24E51A6C4D943FA7BDB7EDBA7086404A::Payload' has a wrong offset!");

// Function GA_Action_Cancel.GA_Action_Cancel_C.EventReceived_B985FB814EB02487BF36918A821F5C0C
// 0x00B0 (0x00B0 - 0x0000)
struct GA_Action_Cancel_C_EventReceived_B985FB814EB02487BF36918A821F5C0C final
{
public:
	struct FGameplayEventData                     Payload;                                           // 0x0000(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_Action_Cancel_C_EventReceived_B985FB814EB02487BF36918A821F5C0C) == 0x000008, "Wrong alignment on GA_Action_Cancel_C_EventReceived_B985FB814EB02487BF36918A821F5C0C");
static_assert(sizeof(GA_Action_Cancel_C_EventReceived_B985FB814EB02487BF36918A821F5C0C) == 0x0000B0, "Wrong size on GA_Action_Cancel_C_EventReceived_B985FB814EB02487BF36918A821F5C0C");
static_assert(offsetof(GA_Action_Cancel_C_EventReceived_B985FB814EB02487BF36918A821F5C0C, Payload) == 0x000000, "Member 'GA_Action_Cancel_C_EventReceived_B985FB814EB02487BF36918A821F5C0C::Payload' has a wrong offset!");

}

