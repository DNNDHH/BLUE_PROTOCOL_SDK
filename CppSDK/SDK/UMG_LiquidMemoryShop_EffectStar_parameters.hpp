#pragma once

 

// Package: UMG_LiquidMemoryShop_EffectStar

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function UMG_LiquidMemoryShop_EffectStar.UMG_LiquidMemoryShop_EffectStar_C.ExecuteUbergraph_UMG_LiquidMemoryShop_EffectStar
// 0x0004 (0x0004 - 0x0000)
struct UMG_LiquidMemoryShop_EffectStar_C_ExecuteUbergraph_UMG_LiquidMemoryShop_EffectStar final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_LiquidMemoryShop_EffectStar_C_ExecuteUbergraph_UMG_LiquidMemoryShop_EffectStar) == 0x000004, "Wrong alignment on UMG_LiquidMemoryShop_EffectStar_C_ExecuteUbergraph_UMG_LiquidMemoryShop_EffectStar");
static_assert(sizeof(UMG_LiquidMemoryShop_EffectStar_C_ExecuteUbergraph_UMG_LiquidMemoryShop_EffectStar) == 0x000004, "Wrong size on UMG_LiquidMemoryShop_EffectStar_C_ExecuteUbergraph_UMG_LiquidMemoryShop_EffectStar");
static_assert(offsetof(UMG_LiquidMemoryShop_EffectStar_C_ExecuteUbergraph_UMG_LiquidMemoryShop_EffectStar, EntryPoint) == 0x000000, "Member 'UMG_LiquidMemoryShop_EffectStar_C_ExecuteUbergraph_UMG_LiquidMemoryShop_EffectStar::EntryPoint' has a wrong offset!");

// Function UMG_LiquidMemoryShop_EffectStar.UMG_LiquidMemoryShop_EffectStar_C.PlayAnim
// 0x0028 (0x0028 - 0x0000)
struct UMG_LiquidMemoryShop_EffectStar_C_PlayAnim final
{
public:
	int32                                         CurNum;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue;                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6ED5[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_LiquidMemoryShop_EffectStar_C_PlayAnim) == 0x000008, "Wrong alignment on UMG_LiquidMemoryShop_EffectStar_C_PlayAnim");
static_assert(sizeof(UMG_LiquidMemoryShop_EffectStar_C_PlayAnim) == 0x000028, "Wrong size on UMG_LiquidMemoryShop_EffectStar_C_PlayAnim");
static_assert(offsetof(UMG_LiquidMemoryShop_EffectStar_C_PlayAnim, CurNum) == 0x000000, "Member 'UMG_LiquidMemoryShop_EffectStar_C_PlayAnim::CurNum' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_EffectStar_C_PlayAnim, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000004, "Member 'UMG_LiquidMemoryShop_EffectStar_C_PlayAnim::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_EffectStar_C_PlayAnim, CallFunc_GetVisibility_ReturnValue) == 0x000005, "Member 'UMG_LiquidMemoryShop_EffectStar_C_PlayAnim::CallFunc_GetVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_EffectStar_C_PlayAnim, K2Node_SwitchEnum_CmpSuccess) == 0x000006, "Member 'UMG_LiquidMemoryShop_EffectStar_C_PlayAnim::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_EffectStar_C_PlayAnim, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'UMG_LiquidMemoryShop_EffectStar_C_PlayAnim::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_EffectStar_C_PlayAnim, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'UMG_LiquidMemoryShop_EffectStar_C_PlayAnim::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_EffectStar_C_PlayAnim, CallFunc_PlayAnimation_ReturnValue_2) == 0x000018, "Member 'UMG_LiquidMemoryShop_EffectStar_C_PlayAnim::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_EffectStar_C_PlayAnim, K2Node_SwitchInteger_CmpSuccess) == 0x000020, "Member 'UMG_LiquidMemoryShop_EffectStar_C_PlayAnim::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");

// Function UMG_LiquidMemoryShop_EffectStar.UMG_LiquidMemoryShop_EffectStar_C.StopAnim
// 0x0001 (0x0001 - 0x0000)
struct UMG_LiquidMemoryShop_EffectStar_C_StopAnim final
{
public:
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_LiquidMemoryShop_EffectStar_C_StopAnim) == 0x000001, "Wrong alignment on UMG_LiquidMemoryShop_EffectStar_C_StopAnim");
static_assert(sizeof(UMG_LiquidMemoryShop_EffectStar_C_StopAnim) == 0x000001, "Wrong size on UMG_LiquidMemoryShop_EffectStar_C_StopAnim");
static_assert(offsetof(UMG_LiquidMemoryShop_EffectStar_C_StopAnim, K2Node_SwitchInteger_CmpSuccess) == 0x000000, "Member 'UMG_LiquidMemoryShop_EffectStar_C_StopAnim::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");

}

