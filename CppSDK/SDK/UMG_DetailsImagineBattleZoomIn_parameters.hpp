#pragma once

 

// Package: UMG_DetailsImagineBattleZoomIn

#include "Basic.hpp"

#include "E_SBDetailsZoomIn_structs.hpp"


namespace SDK::Params
{

// Function UMG_DetailsImagineBattleZoomIn.UMG_DetailsImagineBattleZoomIn_C.ExecuteUbergraph_UMG_DetailsImagineBattleZoomIn
// 0x0038 (0x0038 - 0x0000)
struct UMG_DetailsImagineBattleZoomIn_C_ExecuteUbergraph_UMG_DetailsImagineBattleZoomIn final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_SBDetailsZoomIn                             K2Node_CustomEvent_Type;                           // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_SBDetailsZoomIn                             Temp_byte_Variable;                                // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9687[0x2];                                     // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x000C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_9688[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                K2Node_Select_Default;                             // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_DetailsImagineBattleZoomIn_C_ExecuteUbergraph_UMG_DetailsImagineBattleZoomIn) == 0x000008, "Wrong alignment on UMG_DetailsImagineBattleZoomIn_C_ExecuteUbergraph_UMG_DetailsImagineBattleZoomIn");
static_assert(sizeof(UMG_DetailsImagineBattleZoomIn_C_ExecuteUbergraph_UMG_DetailsImagineBattleZoomIn) == 0x000038, "Wrong size on UMG_DetailsImagineBattleZoomIn_C_ExecuteUbergraph_UMG_DetailsImagineBattleZoomIn");
static_assert(offsetof(UMG_DetailsImagineBattleZoomIn_C_ExecuteUbergraph_UMG_DetailsImagineBattleZoomIn, EntryPoint) == 0x000000, "Member 'UMG_DetailsImagineBattleZoomIn_C_ExecuteUbergraph_UMG_DetailsImagineBattleZoomIn::EntryPoint' has a wrong offset!");
static_assert(offsetof(UMG_DetailsImagineBattleZoomIn_C_ExecuteUbergraph_UMG_DetailsImagineBattleZoomIn, CallFunc_PlaySE_ReturnValue) == 0x000004, "Member 'UMG_DetailsImagineBattleZoomIn_C_ExecuteUbergraph_UMG_DetailsImagineBattleZoomIn::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_DetailsImagineBattleZoomIn_C_ExecuteUbergraph_UMG_DetailsImagineBattleZoomIn, K2Node_CustomEvent_Type) == 0x000008, "Member 'UMG_DetailsImagineBattleZoomIn_C_ExecuteUbergraph_UMG_DetailsImagineBattleZoomIn::K2Node_CustomEvent_Type' has a wrong offset!");
static_assert(offsetof(UMG_DetailsImagineBattleZoomIn_C_ExecuteUbergraph_UMG_DetailsImagineBattleZoomIn, Temp_byte_Variable) == 0x000009, "Member 'UMG_DetailsImagineBattleZoomIn_C_ExecuteUbergraph_UMG_DetailsImagineBattleZoomIn::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UMG_DetailsImagineBattleZoomIn_C_ExecuteUbergraph_UMG_DetailsImagineBattleZoomIn, K2Node_CreateDelegate_OutputDelegate) == 0x00000C, "Member 'UMG_DetailsImagineBattleZoomIn_C_ExecuteUbergraph_UMG_DetailsImagineBattleZoomIn::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UMG_DetailsImagineBattleZoomIn_C_ExecuteUbergraph_UMG_DetailsImagineBattleZoomIn, CallFunc_PlayAnimation_ReturnValue) == 0x000020, "Member 'UMG_DetailsImagineBattleZoomIn_C_ExecuteUbergraph_UMG_DetailsImagineBattleZoomIn::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_DetailsImagineBattleZoomIn_C_ExecuteUbergraph_UMG_DetailsImagineBattleZoomIn, CallFunc_PlayAnimation_ReturnValue_1) == 0x000028, "Member 'UMG_DetailsImagineBattleZoomIn_C_ExecuteUbergraph_UMG_DetailsImagineBattleZoomIn::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_DetailsImagineBattleZoomIn_C_ExecuteUbergraph_UMG_DetailsImagineBattleZoomIn, K2Node_Select_Default) == 0x000030, "Member 'UMG_DetailsImagineBattleZoomIn_C_ExecuteUbergraph_UMG_DetailsImagineBattleZoomIn::K2Node_Select_Default' has a wrong offset!");

// Function UMG_DetailsImagineBattleZoomIn.UMG_DetailsImagineBattleZoomIn_C.Show
// 0x0001 (0x0001 - 0x0000)
struct UMG_DetailsImagineBattleZoomIn_C_Show final
{
public:
	E_SBDetailsZoomIn                             Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_DetailsImagineBattleZoomIn_C_Show) == 0x000001, "Wrong alignment on UMG_DetailsImagineBattleZoomIn_C_Show");
static_assert(sizeof(UMG_DetailsImagineBattleZoomIn_C_Show) == 0x000001, "Wrong size on UMG_DetailsImagineBattleZoomIn_C_Show");
static_assert(offsetof(UMG_DetailsImagineBattleZoomIn_C_Show, Type) == 0x000000, "Member 'UMG_DetailsImagineBattleZoomIn_C_Show::Type' has a wrong offset!");

}

