#pragma once

 

// Package: PartyChain

#include "Basic.hpp"


namespace SDK::Params
{

// Function PartyChain.PartyChain_C.ExecuteUbergraph_PartyChain
// 0x0020 (0x0020 - 0x0000)
struct PartyChain_C_ExecuteUbergraph_PartyChain final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_72A6[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_1;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PartyChain_C_ExecuteUbergraph_PartyChain) == 0x000008, "Wrong alignment on PartyChain_C_ExecuteUbergraph_PartyChain");
static_assert(sizeof(PartyChain_C_ExecuteUbergraph_PartyChain) == 0x000020, "Wrong size on PartyChain_C_ExecuteUbergraph_PartyChain");
static_assert(offsetof(PartyChain_C_ExecuteUbergraph_PartyChain, EntryPoint) == 0x000000, "Member 'PartyChain_C_ExecuteUbergraph_PartyChain::EntryPoint' has a wrong offset!");
static_assert(offsetof(PartyChain_C_ExecuteUbergraph_PartyChain, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000008, "Member 'PartyChain_C_ExecuteUbergraph_PartyChain::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyChain_C_ExecuteUbergraph_PartyChain, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'PartyChain_C_ExecuteUbergraph_PartyChain::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyChain_C_ExecuteUbergraph_PartyChain, CallFunc_GetDynamicMaterial_ReturnValue_1) == 0x000018, "Member 'PartyChain_C_ExecuteUbergraph_PartyChain::CallFunc_GetDynamicMaterial_ReturnValue_1' has a wrong offset!");

}

