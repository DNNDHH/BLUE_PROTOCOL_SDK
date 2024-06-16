#pragma once

 

// Package: BP_SBPhotoModeComponent

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function BP_SBPhotoModeComponent.BP_SBPhotoModeComponent_C.ExecuteUbergraph_BP_SBPhotoModeComponent
// 0x0040 (0x0040 - 0x0000)
struct BP_SBPhotoModeComponent_C_ExecuteUbergraph_BP_SBPhotoModeComponent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBPhotoModeStartState                        K2Node_Event_State;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9D76[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetTextId_ReturnValue;                    // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9D77[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0028(0x0018)()
};
static_assert(alignof(BP_SBPhotoModeComponent_C_ExecuteUbergraph_BP_SBPhotoModeComponent) == 0x000008, "Wrong alignment on BP_SBPhotoModeComponent_C_ExecuteUbergraph_BP_SBPhotoModeComponent");
static_assert(sizeof(BP_SBPhotoModeComponent_C_ExecuteUbergraph_BP_SBPhotoModeComponent) == 0x000040, "Wrong size on BP_SBPhotoModeComponent_C_ExecuteUbergraph_BP_SBPhotoModeComponent");
static_assert(offsetof(BP_SBPhotoModeComponent_C_ExecuteUbergraph_BP_SBPhotoModeComponent, EntryPoint) == 0x000000, "Member 'BP_SBPhotoModeComponent_C_ExecuteUbergraph_BP_SBPhotoModeComponent::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeComponent_C_ExecuteUbergraph_BP_SBPhotoModeComponent, K2Node_Event_State) == 0x000004, "Member 'BP_SBPhotoModeComponent_C_ExecuteUbergraph_BP_SBPhotoModeComponent::K2Node_Event_State' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeComponent_C_ExecuteUbergraph_BP_SBPhotoModeComponent, CallFunc_GetTextId_ReturnValue) == 0x000008, "Member 'BP_SBPhotoModeComponent_C_ExecuteUbergraph_BP_SBPhotoModeComponent::CallFunc_GetTextId_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeComponent_C_ExecuteUbergraph_BP_SBPhotoModeComponent, CallFunc_PlaySE_ReturnValue) == 0x000010, "Member 'BP_SBPhotoModeComponent_C_ExecuteUbergraph_BP_SBPhotoModeComponent::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeComponent_C_ExecuteUbergraph_BP_SBPhotoModeComponent, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000018, "Member 'BP_SBPhotoModeComponent_C_ExecuteUbergraph_BP_SBPhotoModeComponent::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeComponent_C_ExecuteUbergraph_BP_SBPhotoModeComponent, CallFunc_Conv_StringToText_ReturnValue) == 0x000028, "Member 'BP_SBPhotoModeComponent_C_ExecuteUbergraph_BP_SBPhotoModeComponent::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function BP_SBPhotoModeComponent.BP_SBPhotoModeComponent_C.BP_OnCantStartPhotoMode
// 0x0001 (0x0001 - 0x0000)
struct BP_SBPhotoModeComponent_C_BP_OnCantStartPhotoMode final
{
public:
	ESBPhotoModeStartState                        State;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SBPhotoModeComponent_C_BP_OnCantStartPhotoMode) == 0x000001, "Wrong alignment on BP_SBPhotoModeComponent_C_BP_OnCantStartPhotoMode");
static_assert(sizeof(BP_SBPhotoModeComponent_C_BP_OnCantStartPhotoMode) == 0x000001, "Wrong size on BP_SBPhotoModeComponent_C_BP_OnCantStartPhotoMode");
static_assert(offsetof(BP_SBPhotoModeComponent_C_BP_OnCantStartPhotoMode, State) == 0x000000, "Member 'BP_SBPhotoModeComponent_C_BP_OnCantStartPhotoMode::State' has a wrong offset!");

// Function BP_SBPhotoModeComponent.BP_SBPhotoModeComponent_C.GetTextId
// 0x0018 (0x0018 - 0x0000)
struct BP_SBPhotoModeComponent_C_GetTextId final
{
public:
	ESBPhotoModeStartState                        State;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9D78[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   ReturnValue;                                       // 0x0004(0x0008)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Ret;                                               // 0x000C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SBPhotoModeComponent_C_GetTextId) == 0x000004, "Wrong alignment on BP_SBPhotoModeComponent_C_GetTextId");
static_assert(sizeof(BP_SBPhotoModeComponent_C_GetTextId) == 0x000018, "Wrong size on BP_SBPhotoModeComponent_C_GetTextId");
static_assert(offsetof(BP_SBPhotoModeComponent_C_GetTextId, State) == 0x000000, "Member 'BP_SBPhotoModeComponent_C_GetTextId::State' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeComponent_C_GetTextId, ReturnValue) == 0x000004, "Member 'BP_SBPhotoModeComponent_C_GetTextId::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeComponent_C_GetTextId, Ret) == 0x00000C, "Member 'BP_SBPhotoModeComponent_C_GetTextId::Ret' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeComponent_C_GetTextId, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000014, "Member 'BP_SBPhotoModeComponent_C_GetTextId::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

}

