#pragma once

 

// Package: GA_Action_Attack

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_Action_Attack.GA_Action_Attack_C.ExecuteUbergraph_GA_Action_Attack
// 0x0508 (0x0508 - 0x0000)
struct GA_Action_Attack_C_ExecuteUbergraph_GA_Action_Attack final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79ED[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_CustomEvent_Payload_2;                      // 0x0008(0x00B0)()
	struct FGameplayEventData                     Temp_struct_Variable;                              // 0x00B8(0x00B0)()
	class UAbilityTask_WaitGameplayEvent*         CallFunc_WaitGameplayEvent_ReturnValue;            // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79EE[0x3];                                     // 0x0171(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0174(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0184(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0194(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_79EF[0x4];                                     // 0x01A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBAbilityTask_EnemyPlayAnimationAndWait* CallFunc_CreatePlayAnimationAndWaitProxy_ReturnValue; // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x01B0(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79F0[0x3];                                     // 0x01C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x01C4(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_5;            // 0x01D4(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_79F1[0x4];                                     // 0x01E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBAbilityTask_EnemyPlayAnimationAndWait* CallFunc_CreatePlayAnimationAndWaitProxy_ReturnValue_1; // 0x01E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FGameplayEventData& Payload)> K2Node_CreateDelegate_OutputDelegate_6;            // 0x01F0(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79F2[0x7];                                     // 0x0201(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_CustomEvent_Payload_1;                      // 0x0208(0x00B0)()
	struct FGameplayEventData                     Temp_struct_Variable_1;                            // 0x02B8(0x00B0)()
	class UAbilityTask_WaitGameplayEvent*         CallFunc_WaitGameplayEvent_ReturnValue_1;          // 0x0368(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0370(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79F3[0x3];                                     // 0x0371(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FGameplayEventData& Payload)> K2Node_CreateDelegate_OutputDelegate_7;            // 0x0374(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_79F4[0x4];                                     // 0x0384(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_CustomEvent_Payload;                        // 0x0388(0x00B0)()
	struct FGameplayEventData                     Temp_struct_Variable_2;                            // 0x0438(0x00B0)()
	class UAbilityTask_WaitGameplayEvent*         CallFunc_WaitGameplayEvent_ReturnValue_2;          // 0x04E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x04F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x04F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79F5[0x2];                                     // 0x04F2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FGameplayEventData& Payload)> K2Node_CreateDelegate_OutputDelegate_8;            // 0x04F4(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(GA_Action_Attack_C_ExecuteUbergraph_GA_Action_Attack) == 0x000008, "Wrong alignment on GA_Action_Attack_C_ExecuteUbergraph_GA_Action_Attack");
static_assert(sizeof(GA_Action_Attack_C_ExecuteUbergraph_GA_Action_Attack) == 0x000508, "Wrong size on GA_Action_Attack_C_ExecuteUbergraph_GA_Action_Attack");
static_assert(offsetof(GA_Action_Attack_C_ExecuteUbergraph_GA_Action_Attack, EntryPoint) == 0x000000, "Member 'GA_Action_Attack_C_ExecuteUbergraph_GA_Action_Attack::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Action_Attack_C_ExecuteUbergraph_GA_Action_Attack, K2Node_CustomEvent_Payload_2) == 0x000008, "Member 'GA_Action_Attack_C_ExecuteUbergraph_GA_Action_Attack::K2Node_CustomEvent_Payload_2' has a wrong offset!");
static_assert(offsetof(GA_Action_Attack_C_ExecuteUbergraph_GA_Action_Attack, Temp_struct_Variable) == 0x0000B8, "Member 'GA_Action_Attack_C_ExecuteUbergraph_GA_Action_Attack::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_Action_Attack_C_ExecuteUbergraph_GA_Action_Attack, CallFunc_WaitGameplayEvent_ReturnValue) == 0x000168, "Member 'GA_Action_Attack_C_ExecuteUbergraph_GA_Action_Attack::CallFunc_WaitGameplayEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Action_Attack_C_ExecuteUbergraph_GA_Action_Attack, CallFunc_IsValid_ReturnValue) == 0x000170, "Member 'GA_Action_Attack_C_ExecuteUbergraph_GA_Action_Attack::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Action_Attack_C_ExecuteUbergraph_GA_Action_Attack, K2Node_CreateDelegate_OutputDelegate) == 0x000174, "Member 'GA_Action_Attack_C_ExecuteUbergraph_GA_Action_Attack::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Action_Attack_C_ExecuteUbergraph_GA_Action_Attack, K2Node_CreateDelegate_OutputDelegate_1) == 0x000184, "Member 'GA_Action_Attack_C_ExecuteUbergraph_GA_Action_Attack::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GA_Action_Attack_C_ExecuteUbergraph_GA_Action_Attack, K2Node_CreateDelegate_OutputDelegate_2) == 0x000194, "Member 'GA_Action_Attack_C_ExecuteUbergraph_GA_Action_Attack::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(GA_Action_Attack_C_ExecuteUbergraph_GA_Action_Attack, CallFunc_CreatePlayAnimationAndWaitProxy_ReturnValue) == 0x0001A8, "Member 'GA_Action_Attack_C_ExecuteUbergraph_GA_Action_Attack::CallFunc_CreatePlayAnimationAndWaitProxy_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Action_Attack_C_ExecuteUbergraph_GA_Action_Attack, K2Node_CreateDelegate_OutputDelegate_3) == 0x0001B0, "Member 'GA_Action_Attack_C_ExecuteUbergraph_GA_Action_Attack::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(GA_Action_Attack_C_ExecuteUbergraph_GA_Action_Attack, CallFunc_IsValid_ReturnValue_1) == 0x0001C0, "Member 'GA_Action_Attack_C_ExecuteUbergraph_GA_Action_Attack::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Action_Attack_C_ExecuteUbergraph_GA_Action_Attack, K2Node_CreateDelegate_OutputDelegate_4) == 0x0001C4, "Member 'GA_Action_Attack_C_ExecuteUbergraph_GA_Action_Attack::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(GA_Action_Attack_C_ExecuteUbergraph_GA_Action_Attack, K2Node_CreateDelegate_OutputDelegate_5) == 0x0001D4, "Member 'GA_Action_Attack_C_ExecuteUbergraph_GA_Action_Attack::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(GA_Action_Attack_C_ExecuteUbergraph_GA_Action_Attack, CallFunc_CreatePlayAnimationAndWaitProxy_ReturnValue_1) == 0x0001E8, "Member 'GA_Action_Attack_C_ExecuteUbergraph_GA_Action_Attack::CallFunc_CreatePlayAnimationAndWaitProxy_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Action_Attack_C_ExecuteUbergraph_GA_Action_Attack, K2Node_CreateDelegate_OutputDelegate_6) == 0x0001F0, "Member 'GA_Action_Attack_C_ExecuteUbergraph_GA_Action_Attack::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(GA_Action_Attack_C_ExecuteUbergraph_GA_Action_Attack, CallFunc_IsValid_ReturnValue_2) == 0x000200, "Member 'GA_Action_Attack_C_ExecuteUbergraph_GA_Action_Attack::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Action_Attack_C_ExecuteUbergraph_GA_Action_Attack, K2Node_CustomEvent_Payload_1) == 0x000208, "Member 'GA_Action_Attack_C_ExecuteUbergraph_GA_Action_Attack::K2Node_CustomEvent_Payload_1' has a wrong offset!");
static_assert(offsetof(GA_Action_Attack_C_ExecuteUbergraph_GA_Action_Attack, Temp_struct_Variable_1) == 0x0002B8, "Member 'GA_Action_Attack_C_ExecuteUbergraph_GA_Action_Attack::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(GA_Action_Attack_C_ExecuteUbergraph_GA_Action_Attack, CallFunc_WaitGameplayEvent_ReturnValue_1) == 0x000368, "Member 'GA_Action_Attack_C_ExecuteUbergraph_GA_Action_Attack::CallFunc_WaitGameplayEvent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Action_Attack_C_ExecuteUbergraph_GA_Action_Attack, CallFunc_IsValid_ReturnValue_3) == 0x000370, "Member 'GA_Action_Attack_C_ExecuteUbergraph_GA_Action_Attack::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GA_Action_Attack_C_ExecuteUbergraph_GA_Action_Attack, K2Node_CreateDelegate_OutputDelegate_7) == 0x000374, "Member 'GA_Action_Attack_C_ExecuteUbergraph_GA_Action_Attack::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(GA_Action_Attack_C_ExecuteUbergraph_GA_Action_Attack, K2Node_CustomEvent_Payload) == 0x000388, "Member 'GA_Action_Attack_C_ExecuteUbergraph_GA_Action_Attack::K2Node_CustomEvent_Payload' has a wrong offset!");
static_assert(offsetof(GA_Action_Attack_C_ExecuteUbergraph_GA_Action_Attack, Temp_struct_Variable_2) == 0x000438, "Member 'GA_Action_Attack_C_ExecuteUbergraph_GA_Action_Attack::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(GA_Action_Attack_C_ExecuteUbergraph_GA_Action_Attack, CallFunc_WaitGameplayEvent_ReturnValue_2) == 0x0004E8, "Member 'GA_Action_Attack_C_ExecuteUbergraph_GA_Action_Attack::CallFunc_WaitGameplayEvent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Action_Attack_C_ExecuteUbergraph_GA_Action_Attack, CallFunc_IsValid_ReturnValue_4) == 0x0004F0, "Member 'GA_Action_Attack_C_ExecuteUbergraph_GA_Action_Attack::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GA_Action_Attack_C_ExecuteUbergraph_GA_Action_Attack, K2Node_Event_bWasCancelled) == 0x0004F1, "Member 'GA_Action_Attack_C_ExecuteUbergraph_GA_Action_Attack::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_Action_Attack_C_ExecuteUbergraph_GA_Action_Attack, K2Node_CreateDelegate_OutputDelegate_8) == 0x0004F4, "Member 'GA_Action_Attack_C_ExecuteUbergraph_GA_Action_Attack::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");

// Function GA_Action_Attack.GA_Action_Attack_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GA_Action_Attack_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Action_Attack_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_Action_Attack_C_K2_OnEndAbility");
static_assert(sizeof(GA_Action_Attack_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_Action_Attack_C_K2_OnEndAbility");
static_assert(offsetof(GA_Action_Attack_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_Action_Attack_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

// Function GA_Action_Attack.GA_Action_Attack_C.EventReceived_D04A5F7146685BC738583AA5F1379270
// 0x00B0 (0x00B0 - 0x0000)
struct GA_Action_Attack_C_EventReceived_D04A5F7146685BC738583AA5F1379270 final
{
public:
	struct FGameplayEventData                     Payload;                                           // 0x0000(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_Action_Attack_C_EventReceived_D04A5F7146685BC738583AA5F1379270) == 0x000008, "Wrong alignment on GA_Action_Attack_C_EventReceived_D04A5F7146685BC738583AA5F1379270");
static_assert(sizeof(GA_Action_Attack_C_EventReceived_D04A5F7146685BC738583AA5F1379270) == 0x0000B0, "Wrong size on GA_Action_Attack_C_EventReceived_D04A5F7146685BC738583AA5F1379270");
static_assert(offsetof(GA_Action_Attack_C_EventReceived_D04A5F7146685BC738583AA5F1379270, Payload) == 0x000000, "Member 'GA_Action_Attack_C_EventReceived_D04A5F7146685BC738583AA5F1379270::Payload' has a wrong offset!");

// Function GA_Action_Attack.GA_Action_Attack_C.EventReceived_6EF7D6834E0D17349213C7B878C9E94B
// 0x00B0 (0x00B0 - 0x0000)
struct GA_Action_Attack_C_EventReceived_6EF7D6834E0D17349213C7B878C9E94B final
{
public:
	struct FGameplayEventData                     Payload;                                           // 0x0000(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_Action_Attack_C_EventReceived_6EF7D6834E0D17349213C7B878C9E94B) == 0x000008, "Wrong alignment on GA_Action_Attack_C_EventReceived_6EF7D6834E0D17349213C7B878C9E94B");
static_assert(sizeof(GA_Action_Attack_C_EventReceived_6EF7D6834E0D17349213C7B878C9E94B) == 0x0000B0, "Wrong size on GA_Action_Attack_C_EventReceived_6EF7D6834E0D17349213C7B878C9E94B");
static_assert(offsetof(GA_Action_Attack_C_EventReceived_6EF7D6834E0D17349213C7B878C9E94B, Payload) == 0x000000, "Member 'GA_Action_Attack_C_EventReceived_6EF7D6834E0D17349213C7B878C9E94B::Payload' has a wrong offset!");

// Function GA_Action_Attack.GA_Action_Attack_C.EventReceived_CF64C8B04D1460C574E183BA1F5D33C8
// 0x00B0 (0x00B0 - 0x0000)
struct GA_Action_Attack_C_EventReceived_CF64C8B04D1460C574E183BA1F5D33C8 final
{
public:
	struct FGameplayEventData                     Payload;                                           // 0x0000(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_Action_Attack_C_EventReceived_CF64C8B04D1460C574E183BA1F5D33C8) == 0x000008, "Wrong alignment on GA_Action_Attack_C_EventReceived_CF64C8B04D1460C574E183BA1F5D33C8");
static_assert(sizeof(GA_Action_Attack_C_EventReceived_CF64C8B04D1460C574E183BA1F5D33C8) == 0x0000B0, "Wrong size on GA_Action_Attack_C_EventReceived_CF64C8B04D1460C574E183BA1F5D33C8");
static_assert(offsetof(GA_Action_Attack_C_EventReceived_CF64C8B04D1460C574E183BA1F5D33C8, Payload) == 0x000000, "Member 'GA_Action_Attack_C_EventReceived_CF64C8B04D1460C574E183BA1F5D33C8::Payload' has a wrong offset!");

}

