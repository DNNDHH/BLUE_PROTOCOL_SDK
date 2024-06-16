#pragma once

 

// Package: UMG_SeasonPassMenuRewardRankWrap

#include "Basic.hpp"


namespace SDK::Params
{

// Function UMG_SeasonPassMenuRewardRankWrap.UMG_SeasonPassMenuRewardRankWrap_C.OnClickItemIcon__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UMG_SeasonPassMenuRewardRankWrap_C_OnClickItemIcon__DelegateSignature final
{
public:
	class USBSeasonPassMenuRewardItemData*        RewardItemData;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_SeasonPassMenuRewardRankWrap_C_OnClickItemIcon__DelegateSignature) == 0x000008, "Wrong alignment on UMG_SeasonPassMenuRewardRankWrap_C_OnClickItemIcon__DelegateSignature");
static_assert(sizeof(UMG_SeasonPassMenuRewardRankWrap_C_OnClickItemIcon__DelegateSignature) == 0x000008, "Wrong size on UMG_SeasonPassMenuRewardRankWrap_C_OnClickItemIcon__DelegateSignature");
static_assert(offsetof(UMG_SeasonPassMenuRewardRankWrap_C_OnClickItemIcon__DelegateSignature, RewardItemData) == 0x000000, "Member 'UMG_SeasonPassMenuRewardRankWrap_C_OnClickItemIcon__DelegateSignature::RewardItemData' has a wrong offset!");

// Function UMG_SeasonPassMenuRewardRankWrap.UMG_SeasonPassMenuRewardRankWrap_C.ExecuteUbergraph_UMG_SeasonPassMenuRewardRankWrap
// 0x0058 (0x0058 - 0x0000)
struct UMG_SeasonPassMenuRewardRankWrap_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRankWrap final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class USBSeasonPassMenuRewardItemData* RewardItemData)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_7E8B[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBSeasonPassMenuRewardRankData*        K2Node_CustomEvent_Data;                           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_Duration;                       // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7E8C[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBSeasonPassMenuRewardItemData*        K2Node_CustomEvent_RewardItemData;                 // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_SeasonPassMenuRewardRank_C*        CallFunc_Create_ReturnValue;                       // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E8D[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       K2Node_DynamicCast_AsCanvas_Panel_Slot;            // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_SeasonPassMenuRewardRankWrap_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRankWrap) == 0x000008, "Wrong alignment on UMG_SeasonPassMenuRewardRankWrap_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRankWrap");
static_assert(sizeof(UMG_SeasonPassMenuRewardRankWrap_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRankWrap) == 0x000058, "Wrong size on UMG_SeasonPassMenuRewardRankWrap_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRankWrap");
static_assert(offsetof(UMG_SeasonPassMenuRewardRankWrap_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRankWrap, EntryPoint) == 0x000000, "Member 'UMG_SeasonPassMenuRewardRankWrap_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRankWrap::EntryPoint' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardRankWrap_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRankWrap, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'UMG_SeasonPassMenuRewardRankWrap_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRankWrap::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardRankWrap_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRankWrap, K2Node_CustomEvent_Data) == 0x000018, "Member 'UMG_SeasonPassMenuRewardRankWrap_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRankWrap::K2Node_CustomEvent_Data' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardRankWrap_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRankWrap, K2Node_CustomEvent_Duration) == 0x000020, "Member 'UMG_SeasonPassMenuRewardRankWrap_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRankWrap::K2Node_CustomEvent_Duration' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardRankWrap_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRankWrap, K2Node_CustomEvent_RewardItemData) == 0x000028, "Member 'UMG_SeasonPassMenuRewardRankWrap_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRankWrap::K2Node_CustomEvent_RewardItemData' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardRankWrap_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRankWrap, CallFunc_Create_ReturnValue) == 0x000030, "Member 'UMG_SeasonPassMenuRewardRankWrap_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRankWrap::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardRankWrap_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRankWrap, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'UMG_SeasonPassMenuRewardRankWrap_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRankWrap::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardRankWrap_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRankWrap, CallFunc_AddChild_ReturnValue) == 0x000040, "Member 'UMG_SeasonPassMenuRewardRankWrap_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRankWrap::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardRankWrap_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRankWrap, K2Node_DynamicCast_AsCanvas_Panel_Slot) == 0x000048, "Member 'UMG_SeasonPassMenuRewardRankWrap_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRankWrap::K2Node_DynamicCast_AsCanvas_Panel_Slot' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardRankWrap_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRankWrap, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'UMG_SeasonPassMenuRewardRankWrap_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRankWrap::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function UMG_SeasonPassMenuRewardRankWrap.UMG_SeasonPassMenuRewardRankWrap_C.CustomEvent_0
// 0x0008 (0x0008 - 0x0000)
struct UMG_SeasonPassMenuRewardRankWrap_C_CustomEvent_0 final
{
public:
	class USBSeasonPassMenuRewardItemData*        RewardItemData;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_SeasonPassMenuRewardRankWrap_C_CustomEvent_0) == 0x000008, "Wrong alignment on UMG_SeasonPassMenuRewardRankWrap_C_CustomEvent_0");
static_assert(sizeof(UMG_SeasonPassMenuRewardRankWrap_C_CustomEvent_0) == 0x000008, "Wrong size on UMG_SeasonPassMenuRewardRankWrap_C_CustomEvent_0");
static_assert(offsetof(UMG_SeasonPassMenuRewardRankWrap_C_CustomEvent_0, RewardItemData) == 0x000000, "Member 'UMG_SeasonPassMenuRewardRankWrap_C_CustomEvent_0::RewardItemData' has a wrong offset!");

// Function UMG_SeasonPassMenuRewardRankWrap.UMG_SeasonPassMenuRewardRankWrap_C.SetData
// 0x0010 (0x0010 - 0x0000)
struct UMG_SeasonPassMenuRewardRankWrap_C_SetData final
{
public:
	class USBSeasonPassMenuRewardRankData*        Data;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Duration;                                          // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_SeasonPassMenuRewardRankWrap_C_SetData) == 0x000008, "Wrong alignment on UMG_SeasonPassMenuRewardRankWrap_C_SetData");
static_assert(sizeof(UMG_SeasonPassMenuRewardRankWrap_C_SetData) == 0x000010, "Wrong size on UMG_SeasonPassMenuRewardRankWrap_C_SetData");
static_assert(offsetof(UMG_SeasonPassMenuRewardRankWrap_C_SetData, Data) == 0x000000, "Member 'UMG_SeasonPassMenuRewardRankWrap_C_SetData::Data' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardRankWrap_C_SetData, Duration) == 0x000008, "Member 'UMG_SeasonPassMenuRewardRankWrap_C_SetData::Duration' has a wrong offset!");

}

