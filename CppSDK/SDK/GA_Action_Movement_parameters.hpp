#pragma once

 

// Package: GA_Action_Movement

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_Action_Movement.GA_Action_Movement_C.ExecuteUbergraph_GA_Action_Movement
// 0x0348 (0x0348 - 0x0000)
struct GA_Action_Movement_C_ExecuteUbergraph_GA_Action_Movement final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8A7C[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_CustomEvent_Payload_1;                      // 0x0008(0x00B0)()
	TDelegate<void(const struct FGameplayEventData& Payload)> K2Node_CreateDelegate_OutputDelegate;              // 0x00B8(0x0010)(ZeroConstructor, NoDestructor)
	struct FGameplayEventData                     Temp_struct_Variable;                              // 0x00C8(0x00B0)()
	class USBAbilityTask_EnemyWaitGameplayEvent*  CallFunc_CreateSBEnemyWaitGameplayEventProxy_ReturnValue; // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A7D[0x3];                                     // 0x0181(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0184(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0194(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x01A4(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_8A7E[0x4];                                     // 0x01B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBAbilityTask_EnemyPlayAnimationAndWait* CallFunc_CreatePlayAnimationAndWaitProxy_ReturnValue; // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FGameplayEventData& Payload)> K2Node_CreateDelegate_OutputDelegate_4;            // 0x01C0(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A7F[0x7];                                     // 0x01D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_CustomEvent_Payload;                        // 0x01D8(0x00B0)()
	struct FGameplayEventData                     Temp_struct_Variable_1;                            // 0x0288(0x00B0)()
	class UAbilityTask_WaitGameplayEvent*         CallFunc_WaitGameplayEvent_ReturnValue;            // 0x0338(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0340(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x0341(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Action_Movement_C_ExecuteUbergraph_GA_Action_Movement) == 0x000008, "Wrong alignment on GA_Action_Movement_C_ExecuteUbergraph_GA_Action_Movement");
static_assert(sizeof(GA_Action_Movement_C_ExecuteUbergraph_GA_Action_Movement) == 0x000348, "Wrong size on GA_Action_Movement_C_ExecuteUbergraph_GA_Action_Movement");
static_assert(offsetof(GA_Action_Movement_C_ExecuteUbergraph_GA_Action_Movement, EntryPoint) == 0x000000, "Member 'GA_Action_Movement_C_ExecuteUbergraph_GA_Action_Movement::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Action_Movement_C_ExecuteUbergraph_GA_Action_Movement, K2Node_CustomEvent_Payload_1) == 0x000008, "Member 'GA_Action_Movement_C_ExecuteUbergraph_GA_Action_Movement::K2Node_CustomEvent_Payload_1' has a wrong offset!");
static_assert(offsetof(GA_Action_Movement_C_ExecuteUbergraph_GA_Action_Movement, K2Node_CreateDelegate_OutputDelegate) == 0x0000B8, "Member 'GA_Action_Movement_C_ExecuteUbergraph_GA_Action_Movement::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Action_Movement_C_ExecuteUbergraph_GA_Action_Movement, Temp_struct_Variable) == 0x0000C8, "Member 'GA_Action_Movement_C_ExecuteUbergraph_GA_Action_Movement::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_Action_Movement_C_ExecuteUbergraph_GA_Action_Movement, CallFunc_CreateSBEnemyWaitGameplayEventProxy_ReturnValue) == 0x000178, "Member 'GA_Action_Movement_C_ExecuteUbergraph_GA_Action_Movement::CallFunc_CreateSBEnemyWaitGameplayEventProxy_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Action_Movement_C_ExecuteUbergraph_GA_Action_Movement, CallFunc_IsValid_ReturnValue) == 0x000180, "Member 'GA_Action_Movement_C_ExecuteUbergraph_GA_Action_Movement::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Action_Movement_C_ExecuteUbergraph_GA_Action_Movement, K2Node_CreateDelegate_OutputDelegate_1) == 0x000184, "Member 'GA_Action_Movement_C_ExecuteUbergraph_GA_Action_Movement::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GA_Action_Movement_C_ExecuteUbergraph_GA_Action_Movement, K2Node_CreateDelegate_OutputDelegate_2) == 0x000194, "Member 'GA_Action_Movement_C_ExecuteUbergraph_GA_Action_Movement::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(GA_Action_Movement_C_ExecuteUbergraph_GA_Action_Movement, K2Node_CreateDelegate_OutputDelegate_3) == 0x0001A4, "Member 'GA_Action_Movement_C_ExecuteUbergraph_GA_Action_Movement::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(GA_Action_Movement_C_ExecuteUbergraph_GA_Action_Movement, CallFunc_CreatePlayAnimationAndWaitProxy_ReturnValue) == 0x0001B8, "Member 'GA_Action_Movement_C_ExecuteUbergraph_GA_Action_Movement::CallFunc_CreatePlayAnimationAndWaitProxy_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Action_Movement_C_ExecuteUbergraph_GA_Action_Movement, K2Node_CreateDelegate_OutputDelegate_4) == 0x0001C0, "Member 'GA_Action_Movement_C_ExecuteUbergraph_GA_Action_Movement::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(GA_Action_Movement_C_ExecuteUbergraph_GA_Action_Movement, CallFunc_IsValid_ReturnValue_1) == 0x0001D0, "Member 'GA_Action_Movement_C_ExecuteUbergraph_GA_Action_Movement::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Action_Movement_C_ExecuteUbergraph_GA_Action_Movement, K2Node_CustomEvent_Payload) == 0x0001D8, "Member 'GA_Action_Movement_C_ExecuteUbergraph_GA_Action_Movement::K2Node_CustomEvent_Payload' has a wrong offset!");
static_assert(offsetof(GA_Action_Movement_C_ExecuteUbergraph_GA_Action_Movement, Temp_struct_Variable_1) == 0x000288, "Member 'GA_Action_Movement_C_ExecuteUbergraph_GA_Action_Movement::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(GA_Action_Movement_C_ExecuteUbergraph_GA_Action_Movement, CallFunc_WaitGameplayEvent_ReturnValue) == 0x000338, "Member 'GA_Action_Movement_C_ExecuteUbergraph_GA_Action_Movement::CallFunc_WaitGameplayEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Action_Movement_C_ExecuteUbergraph_GA_Action_Movement, CallFunc_IsValid_ReturnValue_2) == 0x000340, "Member 'GA_Action_Movement_C_ExecuteUbergraph_GA_Action_Movement::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Action_Movement_C_ExecuteUbergraph_GA_Action_Movement, K2Node_Event_bWasCancelled) == 0x000341, "Member 'GA_Action_Movement_C_ExecuteUbergraph_GA_Action_Movement::K2Node_Event_bWasCancelled' has a wrong offset!");

// Function GA_Action_Movement.GA_Action_Movement_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GA_Action_Movement_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Action_Movement_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_Action_Movement_C_K2_OnEndAbility");
static_assert(sizeof(GA_Action_Movement_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_Action_Movement_C_K2_OnEndAbility");
static_assert(offsetof(GA_Action_Movement_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_Action_Movement_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

// Function GA_Action_Movement.GA_Action_Movement_C.EventReceived_DDC49E4D4373DEBC9BDCBE863747A93E
// 0x00B0 (0x00B0 - 0x0000)
struct GA_Action_Movement_C_EventReceived_DDC49E4D4373DEBC9BDCBE863747A93E final
{
public:
	struct FGameplayEventData                     Payload;                                           // 0x0000(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_Action_Movement_C_EventReceived_DDC49E4D4373DEBC9BDCBE863747A93E) == 0x000008, "Wrong alignment on GA_Action_Movement_C_EventReceived_DDC49E4D4373DEBC9BDCBE863747A93E");
static_assert(sizeof(GA_Action_Movement_C_EventReceived_DDC49E4D4373DEBC9BDCBE863747A93E) == 0x0000B0, "Wrong size on GA_Action_Movement_C_EventReceived_DDC49E4D4373DEBC9BDCBE863747A93E");
static_assert(offsetof(GA_Action_Movement_C_EventReceived_DDC49E4D4373DEBC9BDCBE863747A93E, Payload) == 0x000000, "Member 'GA_Action_Movement_C_EventReceived_DDC49E4D4373DEBC9BDCBE863747A93E::Payload' has a wrong offset!");

// Function GA_Action_Movement.GA_Action_Movement_C.EventReceived_DC6488B9460FBDBF1C592493913CCCF7
// 0x00B0 (0x00B0 - 0x0000)
struct GA_Action_Movement_C_EventReceived_DC6488B9460FBDBF1C592493913CCCF7 final
{
public:
	struct FGameplayEventData                     Payload;                                           // 0x0000(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_Action_Movement_C_EventReceived_DC6488B9460FBDBF1C592493913CCCF7) == 0x000008, "Wrong alignment on GA_Action_Movement_C_EventReceived_DC6488B9460FBDBF1C592493913CCCF7");
static_assert(sizeof(GA_Action_Movement_C_EventReceived_DC6488B9460FBDBF1C592493913CCCF7) == 0x0000B0, "Wrong size on GA_Action_Movement_C_EventReceived_DC6488B9460FBDBF1C592493913CCCF7");
static_assert(offsetof(GA_Action_Movement_C_EventReceived_DC6488B9460FBDBF1C592493913CCCF7, Payload) == 0x000000, "Member 'GA_Action_Movement_C_EventReceived_DC6488B9460FBDBF1C592493913CCCF7::Payload' has a wrong offset!");

}

