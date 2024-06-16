#pragma once

 

// Package: UMG_SeasonPassMenuMain

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.OnClickRewardItemIcon__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UMG_SeasonPassMenuMain_C_OnClickRewardItemIcon__DelegateSignature final
{
public:
	class USBSeasonPassMenuRewardItemData*        RewardItemData;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_SeasonPassMenuMain_C_OnClickRewardItemIcon__DelegateSignature) == 0x000008, "Wrong alignment on UMG_SeasonPassMenuMain_C_OnClickRewardItemIcon__DelegateSignature");
static_assert(sizeof(UMG_SeasonPassMenuMain_C_OnClickRewardItemIcon__DelegateSignature) == 0x000008, "Wrong size on UMG_SeasonPassMenuMain_C_OnClickRewardItemIcon__DelegateSignature");
static_assert(offsetof(UMG_SeasonPassMenuMain_C_OnClickRewardItemIcon__DelegateSignature, RewardItemData) == 0x000000, "Member 'UMG_SeasonPassMenuMain_C_OnClickRewardItemIcon__DelegateSignature::RewardItemData' has a wrong offset!");

// Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.ExecuteUbergraph_UMG_SeasonPassMenuMain
// 0x0080 (0x0080 - 0x0000)
struct UMG_SeasonPassMenuMain_C_ExecuteUbergraph_UMG_SeasonPassMenuMain final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6DA7[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerSeasonPassComponent*           CallFunc_GetSeasonPassComponent_ReturnValue;       // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetCurrentSeasonName_ReturnValue;         // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0028(0x0018)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6DA8[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBSeasonPassMenuRewardData*            K2Node_CustomEvent_RewardData;                     // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBSeasonPassMenuRewardItemData*        K2Node_ComponentBoundEvent_RewardItemData;         // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x005A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6DA9[0x5];                                     // 0x005B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_GetCurrentSeasonProgressEndDate_ReturnValue; // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_GetCurrentSeasonEndDate_ReturnValue;      // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSeasonProgressValid_ReturnValue;        // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6DAA[0x3];                                     // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetRank_ReturnValue;                      // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBDateTimeTextRemainTimeFlag                 CallFunc_SetDateTime_ReturnValue;                  // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBDateTimeTextRemainTimeFlag                 CallFunc_SetDateTime_ReturnValue_1;                // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_SeasonPassMenuMain_C_ExecuteUbergraph_UMG_SeasonPassMenuMain) == 0x000008, "Wrong alignment on UMG_SeasonPassMenuMain_C_ExecuteUbergraph_UMG_SeasonPassMenuMain");
static_assert(sizeof(UMG_SeasonPassMenuMain_C_ExecuteUbergraph_UMG_SeasonPassMenuMain) == 0x000080, "Wrong size on UMG_SeasonPassMenuMain_C_ExecuteUbergraph_UMG_SeasonPassMenuMain");
static_assert(offsetof(UMG_SeasonPassMenuMain_C_ExecuteUbergraph_UMG_SeasonPassMenuMain, EntryPoint) == 0x000000, "Member 'UMG_SeasonPassMenuMain_C_ExecuteUbergraph_UMG_SeasonPassMenuMain::EntryPoint' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuMain_C_ExecuteUbergraph_UMG_SeasonPassMenuMain, CallFunc_GetSBPlayerController_ReturnValue) == 0x000008, "Member 'UMG_SeasonPassMenuMain_C_ExecuteUbergraph_UMG_SeasonPassMenuMain::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuMain_C_ExecuteUbergraph_UMG_SeasonPassMenuMain, CallFunc_GetSeasonPassComponent_ReturnValue) == 0x000010, "Member 'UMG_SeasonPassMenuMain_C_ExecuteUbergraph_UMG_SeasonPassMenuMain::CallFunc_GetSeasonPassComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuMain_C_ExecuteUbergraph_UMG_SeasonPassMenuMain, CallFunc_GetCurrentSeasonName_ReturnValue) == 0x000018, "Member 'UMG_SeasonPassMenuMain_C_ExecuteUbergraph_UMG_SeasonPassMenuMain::CallFunc_GetCurrentSeasonName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuMain_C_ExecuteUbergraph_UMG_SeasonPassMenuMain, CallFunc_Conv_StringToText_ReturnValue) == 0x000028, "Member 'UMG_SeasonPassMenuMain_C_ExecuteUbergraph_UMG_SeasonPassMenuMain::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuMain_C_ExecuteUbergraph_UMG_SeasonPassMenuMain, CallFunc_MakeLiteralByte_ReturnValue) == 0x000040, "Member 'UMG_SeasonPassMenuMain_C_ExecuteUbergraph_UMG_SeasonPassMenuMain::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuMain_C_ExecuteUbergraph_UMG_SeasonPassMenuMain, K2Node_CustomEvent_RewardData) == 0x000048, "Member 'UMG_SeasonPassMenuMain_C_ExecuteUbergraph_UMG_SeasonPassMenuMain::K2Node_CustomEvent_RewardData' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuMain_C_ExecuteUbergraph_UMG_SeasonPassMenuMain, K2Node_ComponentBoundEvent_RewardItemData) == 0x000050, "Member 'UMG_SeasonPassMenuMain_C_ExecuteUbergraph_UMG_SeasonPassMenuMain::K2Node_ComponentBoundEvent_RewardItemData' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuMain_C_ExecuteUbergraph_UMG_SeasonPassMenuMain, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000058, "Member 'UMG_SeasonPassMenuMain_C_ExecuteUbergraph_UMG_SeasonPassMenuMain::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuMain_C_ExecuteUbergraph_UMG_SeasonPassMenuMain, Temp_bool_Variable) == 0x000059, "Member 'UMG_SeasonPassMenuMain_C_ExecuteUbergraph_UMG_SeasonPassMenuMain::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuMain_C_ExecuteUbergraph_UMG_SeasonPassMenuMain, K2Node_Select_Default) == 0x00005A, "Member 'UMG_SeasonPassMenuMain_C_ExecuteUbergraph_UMG_SeasonPassMenuMain::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuMain_C_ExecuteUbergraph_UMG_SeasonPassMenuMain, CallFunc_GetCurrentSeasonProgressEndDate_ReturnValue) == 0x000060, "Member 'UMG_SeasonPassMenuMain_C_ExecuteUbergraph_UMG_SeasonPassMenuMain::CallFunc_GetCurrentSeasonProgressEndDate_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuMain_C_ExecuteUbergraph_UMG_SeasonPassMenuMain, CallFunc_GetCurrentSeasonEndDate_ReturnValue) == 0x000068, "Member 'UMG_SeasonPassMenuMain_C_ExecuteUbergraph_UMG_SeasonPassMenuMain::CallFunc_GetCurrentSeasonEndDate_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuMain_C_ExecuteUbergraph_UMG_SeasonPassMenuMain, CallFunc_IsSeasonProgressValid_ReturnValue) == 0x000070, "Member 'UMG_SeasonPassMenuMain_C_ExecuteUbergraph_UMG_SeasonPassMenuMain::CallFunc_IsSeasonProgressValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuMain_C_ExecuteUbergraph_UMG_SeasonPassMenuMain, CallFunc_GetRank_ReturnValue) == 0x000074, "Member 'UMG_SeasonPassMenuMain_C_ExecuteUbergraph_UMG_SeasonPassMenuMain::CallFunc_GetRank_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuMain_C_ExecuteUbergraph_UMG_SeasonPassMenuMain, CallFunc_SetDateTime_ReturnValue) == 0x000078, "Member 'UMG_SeasonPassMenuMain_C_ExecuteUbergraph_UMG_SeasonPassMenuMain::CallFunc_SetDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuMain_C_ExecuteUbergraph_UMG_SeasonPassMenuMain, CallFunc_SetDateTime_ReturnValue_1) == 0x000079, "Member 'UMG_SeasonPassMenuMain_C_ExecuteUbergraph_UMG_SeasonPassMenuMain::CallFunc_SetDateTime_ReturnValue_1' has a wrong offset!");

// Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.BndEvt__UMG_SeasonPassMenuReward_K2Node_ComponentBoundEvent_1_OnClickRewardItemIcon__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UMG_SeasonPassMenuMain_C_BndEvt__UMG_SeasonPassMenuReward_K2Node_ComponentBoundEvent_1_OnClickRewardItemIcon__DelegateSignature final
{
public:
	class USBSeasonPassMenuRewardItemData*        RewardItemData;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_SeasonPassMenuMain_C_BndEvt__UMG_SeasonPassMenuReward_K2Node_ComponentBoundEvent_1_OnClickRewardItemIcon__DelegateSignature) == 0x000008, "Wrong alignment on UMG_SeasonPassMenuMain_C_BndEvt__UMG_SeasonPassMenuReward_K2Node_ComponentBoundEvent_1_OnClickRewardItemIcon__DelegateSignature");
static_assert(sizeof(UMG_SeasonPassMenuMain_C_BndEvt__UMG_SeasonPassMenuReward_K2Node_ComponentBoundEvent_1_OnClickRewardItemIcon__DelegateSignature) == 0x000008, "Wrong size on UMG_SeasonPassMenuMain_C_BndEvt__UMG_SeasonPassMenuReward_K2Node_ComponentBoundEvent_1_OnClickRewardItemIcon__DelegateSignature");
static_assert(offsetof(UMG_SeasonPassMenuMain_C_BndEvt__UMG_SeasonPassMenuReward_K2Node_ComponentBoundEvent_1_OnClickRewardItemIcon__DelegateSignature, RewardItemData) == 0x000000, "Member 'UMG_SeasonPassMenuMain_C_BndEvt__UMG_SeasonPassMenuReward_K2Node_ComponentBoundEvent_1_OnClickRewardItemIcon__DelegateSignature::RewardItemData' has a wrong offset!");

// Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.SetData
// 0x0008 (0x0008 - 0x0000)
struct UMG_SeasonPassMenuMain_C_SetData final
{
public:
	class USBSeasonPassMenuRewardData*            RewardData;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_SeasonPassMenuMain_C_SetData) == 0x000008, "Wrong alignment on UMG_SeasonPassMenuMain_C_SetData");
static_assert(sizeof(UMG_SeasonPassMenuMain_C_SetData) == 0x000008, "Wrong size on UMG_SeasonPassMenuMain_C_SetData");
static_assert(offsetof(UMG_SeasonPassMenuMain_C_SetData, RewardData) == 0x000000, "Member 'UMG_SeasonPassMenuMain_C_SetData::RewardData' has a wrong offset!");

}

