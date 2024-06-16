#pragma once

 

// Package: ImagineCraftDescProduct

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function ImagineCraftDescProduct.ImagineCraftDescProduct_C.ExecuteUbergraph_ImagineCraftDescProduct
// 0x01F8 (0x01F8 - 0x0000)
struct ImagineCraftDescProduct_C_ExecuteUbergraph_ImagineCraftDescProduct final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_6C5B[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UProbabilityDisplay_C*                  CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMasterImagineRecepi                   K2Node_CustomEvent_RecepiData;                     // 0x0020(0x0038)()
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;              // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Sender;                         // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param;                          // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C5C[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBMasterImagine                       CallFunc_FindMasterImagine_ReturnValue;            // 0x0080(0x00B0)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C5D[0x3];                                     // 0x0131(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCharacterCraftRecepi                  K2Node_MakeStruct_CharacterCraftRecepi;            // 0x0134(0x0008)(NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid_1;           // 0x013C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C5E[0x3];                                     // 0x013D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue_1;       // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBMasterImagine                       CallFunc_FindMasterImagine_ReturnValue_1;          // 0x0148(0x00B0)()
};
static_assert(alignof(ImagineCraftDescProduct_C_ExecuteUbergraph_ImagineCraftDescProduct) == 0x000008, "Wrong alignment on ImagineCraftDescProduct_C_ExecuteUbergraph_ImagineCraftDescProduct");
static_assert(sizeof(ImagineCraftDescProduct_C_ExecuteUbergraph_ImagineCraftDescProduct) == 0x0001F8, "Wrong size on ImagineCraftDescProduct_C_ExecuteUbergraph_ImagineCraftDescProduct");
static_assert(offsetof(ImagineCraftDescProduct_C_ExecuteUbergraph_ImagineCraftDescProduct, EntryPoint) == 0x000000, "Member 'ImagineCraftDescProduct_C_ExecuteUbergraph_ImagineCraftDescProduct::EntryPoint' has a wrong offset!");
static_assert(offsetof(ImagineCraftDescProduct_C_ExecuteUbergraph_ImagineCraftDescProduct, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'ImagineCraftDescProduct_C_ExecuteUbergraph_ImagineCraftDescProduct::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ImagineCraftDescProduct_C_ExecuteUbergraph_ImagineCraftDescProduct, CallFunc_Create_ReturnValue) == 0x000018, "Member 'ImagineCraftDescProduct_C_ExecuteUbergraph_ImagineCraftDescProduct::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraftDescProduct_C_ExecuteUbergraph_ImagineCraftDescProduct, K2Node_CustomEvent_RecepiData) == 0x000020, "Member 'ImagineCraftDescProduct_C_ExecuteUbergraph_ImagineCraftDescProduct::K2Node_CustomEvent_RecepiData' has a wrong offset!");
static_assert(offsetof(ImagineCraftDescProduct_C_ExecuteUbergraph_ImagineCraftDescProduct, CallFunc_MakeLiteralName_ReturnValue) == 0x000058, "Member 'ImagineCraftDescProduct_C_ExecuteUbergraph_ImagineCraftDescProduct::CallFunc_MakeLiteralName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraftDescProduct_C_ExecuteUbergraph_ImagineCraftDescProduct, K2Node_CustomEvent_Sender) == 0x000060, "Member 'ImagineCraftDescProduct_C_ExecuteUbergraph_ImagineCraftDescProduct::K2Node_CustomEvent_Sender' has a wrong offset!");
static_assert(offsetof(ImagineCraftDescProduct_C_ExecuteUbergraph_ImagineCraftDescProduct, K2Node_CustomEvent_Param) == 0x000068, "Member 'ImagineCraftDescProduct_C_ExecuteUbergraph_ImagineCraftDescProduct::K2Node_CustomEvent_Param' has a wrong offset!");
static_assert(offsetof(ImagineCraftDescProduct_C_ExecuteUbergraph_ImagineCraftDescProduct, CallFunc_GetMasterDataManager_IsValid) == 0x000070, "Member 'ImagineCraftDescProduct_C_ExecuteUbergraph_ImagineCraftDescProduct::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(ImagineCraftDescProduct_C_ExecuteUbergraph_ImagineCraftDescProduct, CallFunc_GetMasterDataManager_ReturnValue) == 0x000078, "Member 'ImagineCraftDescProduct_C_ExecuteUbergraph_ImagineCraftDescProduct::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraftDescProduct_C_ExecuteUbergraph_ImagineCraftDescProduct, CallFunc_FindMasterImagine_ReturnValue) == 0x000080, "Member 'ImagineCraftDescProduct_C_ExecuteUbergraph_ImagineCraftDescProduct::CallFunc_FindMasterImagine_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraftDescProduct_C_ExecuteUbergraph_ImagineCraftDescProduct, CallFunc_IsValid_ReturnValue) == 0x000130, "Member 'ImagineCraftDescProduct_C_ExecuteUbergraph_ImagineCraftDescProduct::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraftDescProduct_C_ExecuteUbergraph_ImagineCraftDescProduct, K2Node_MakeStruct_CharacterCraftRecepi) == 0x000134, "Member 'ImagineCraftDescProduct_C_ExecuteUbergraph_ImagineCraftDescProduct::K2Node_MakeStruct_CharacterCraftRecepi' has a wrong offset!");
static_assert(offsetof(ImagineCraftDescProduct_C_ExecuteUbergraph_ImagineCraftDescProduct, CallFunc_GetMasterDataManager_IsValid_1) == 0x00013C, "Member 'ImagineCraftDescProduct_C_ExecuteUbergraph_ImagineCraftDescProduct::CallFunc_GetMasterDataManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(ImagineCraftDescProduct_C_ExecuteUbergraph_ImagineCraftDescProduct, CallFunc_GetMasterDataManager_ReturnValue_1) == 0x000140, "Member 'ImagineCraftDescProduct_C_ExecuteUbergraph_ImagineCraftDescProduct::CallFunc_GetMasterDataManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineCraftDescProduct_C_ExecuteUbergraph_ImagineCraftDescProduct, CallFunc_FindMasterImagine_ReturnValue_1) == 0x000148, "Member 'ImagineCraftDescProduct_C_ExecuteUbergraph_ImagineCraftDescProduct::CallFunc_FindMasterImagine_ReturnValue_1' has a wrong offset!");

// Function ImagineCraftDescProduct.ImagineCraftDescProduct_C.OnComplete_RewardBoostInfo
// 0x0010 (0x0010 - 0x0000)
struct ImagineCraftDescProduct_C_OnComplete_RewardBoostInfo final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ImagineCraftDescProduct_C_OnComplete_RewardBoostInfo) == 0x000008, "Wrong alignment on ImagineCraftDescProduct_C_OnComplete_RewardBoostInfo");
static_assert(sizeof(ImagineCraftDescProduct_C_OnComplete_RewardBoostInfo) == 0x000010, "Wrong size on ImagineCraftDescProduct_C_OnComplete_RewardBoostInfo");
static_assert(offsetof(ImagineCraftDescProduct_C_OnComplete_RewardBoostInfo, Sender) == 0x000000, "Member 'ImagineCraftDescProduct_C_OnComplete_RewardBoostInfo::Sender' has a wrong offset!");
static_assert(offsetof(ImagineCraftDescProduct_C_OnComplete_RewardBoostInfo, Param) == 0x000008, "Member 'ImagineCraftDescProduct_C_OnComplete_RewardBoostInfo::Param' has a wrong offset!");

// Function ImagineCraftDescProduct.ImagineCraftDescProduct_C.SetRecepiData
// 0x0038 (0x0038 - 0x0000)
struct ImagineCraftDescProduct_C_SetRecepiData final
{
public:
	struct FMasterImagineRecepi                   Param_RecepiData;                                  // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(ImagineCraftDescProduct_C_SetRecepiData) == 0x000008, "Wrong alignment on ImagineCraftDescProduct_C_SetRecepiData");
static_assert(sizeof(ImagineCraftDescProduct_C_SetRecepiData) == 0x000038, "Wrong size on ImagineCraftDescProduct_C_SetRecepiData");
static_assert(offsetof(ImagineCraftDescProduct_C_SetRecepiData, Param_RecepiData) == 0x000000, "Member 'ImagineCraftDescProduct_C_SetRecepiData::Param_RecepiData' has a wrong offset!");

// Function ImagineCraftDescProduct.ImagineCraftDescProduct_C.IsLiquidMemoryActive
// 0x0070 (0x0070 - 0x0000)
struct ImagineCraftDescProduct_C_IsLiquidMemoryActive final
{
public:
	bool                                          IsActive;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C5F[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_OutExists; // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C60[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBLiquidMemoryInfo                    CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_ReturnValue; // 0x0018(0x0028)(NoDestructor)
	bool                                          CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_OutExists_1; // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C61[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBLiquidMemoryInfo                    CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_ReturnValue_1; // 0x0048(0x0028)(NoDestructor)
};
static_assert(alignof(ImagineCraftDescProduct_C_IsLiquidMemoryActive) == 0x000008, "Wrong alignment on ImagineCraftDescProduct_C_IsLiquidMemoryActive");
static_assert(sizeof(ImagineCraftDescProduct_C_IsLiquidMemoryActive) == 0x000070, "Wrong size on ImagineCraftDescProduct_C_IsLiquidMemoryActive");
static_assert(offsetof(ImagineCraftDescProduct_C_IsLiquidMemoryActive, IsActive) == 0x000000, "Member 'ImagineCraftDescProduct_C_IsLiquidMemoryActive::IsActive' has a wrong offset!");
static_assert(offsetof(ImagineCraftDescProduct_C_IsLiquidMemoryActive, CallFunc_GetNetworkDataCache_IsValid) == 0x000001, "Member 'ImagineCraftDescProduct_C_IsLiquidMemoryActive::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(ImagineCraftDescProduct_C_IsLiquidMemoryActive, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000008, "Member 'ImagineCraftDescProduct_C_IsLiquidMemoryActive::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraftDescProduct_C_IsLiquidMemoryActive, CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_OutExists) == 0x000010, "Member 'ImagineCraftDescProduct_C_IsLiquidMemoryActive::CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_OutExists' has a wrong offset!");
static_assert(offsetof(ImagineCraftDescProduct_C_IsLiquidMemoryActive, CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_ReturnValue) == 0x000018, "Member 'ImagineCraftDescProduct_C_IsLiquidMemoryActive::CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraftDescProduct_C_IsLiquidMemoryActive, CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_OutExists_1) == 0x000040, "Member 'ImagineCraftDescProduct_C_IsLiquidMemoryActive::CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_OutExists_1' has a wrong offset!");
static_assert(offsetof(ImagineCraftDescProduct_C_IsLiquidMemoryActive, CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_ReturnValue_1) == 0x000048, "Member 'ImagineCraftDescProduct_C_IsLiquidMemoryActive::CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_ReturnValue_1' has a wrong offset!");

// Function ImagineCraftDescProduct.ImagineCraftDescProduct_C.UpdateBoost
// 0x0058 (0x0058 - 0x0000)
struct ImagineCraftDescProduct_C_UpdateBoost final
{
public:
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C62[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C63[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_RewardBoostTooltip_C*              CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C64[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerRewardBoostComponent*          CallFunc_GetRewardBoostComponent_ReturnValue;      // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEffectiveImagineCraft_ReturnValue;      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C65[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBRewardBoostTooltipData>      CallFunc_GetImagineCraftTooltipText_TooltipDataList; // 0x0040(0x0010)(ReferenceParm)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ImagineCraftDescProduct_C_UpdateBoost) == 0x000008, "Wrong alignment on ImagineCraftDescProduct_C_UpdateBoost");
static_assert(sizeof(ImagineCraftDescProduct_C_UpdateBoost) == 0x000058, "Wrong size on ImagineCraftDescProduct_C_UpdateBoost");
static_assert(offsetof(ImagineCraftDescProduct_C_UpdateBoost, CallFunc_MakeLiteralByte_ReturnValue) == 0x000000, "Member 'ImagineCraftDescProduct_C_UpdateBoost::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraftDescProduct_C_UpdateBoost, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000001, "Member 'ImagineCraftDescProduct_C_UpdateBoost::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineCraftDescProduct_C_UpdateBoost, CallFunc_GetOwningPlayer_ReturnValue) == 0x000008, "Member 'ImagineCraftDescProduct_C_UpdateBoost::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraftDescProduct_C_UpdateBoost, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'ImagineCraftDescProduct_C_UpdateBoost::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraftDescProduct_C_UpdateBoost, CallFunc_Create_ReturnValue) == 0x000018, "Member 'ImagineCraftDescProduct_C_UpdateBoost::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraftDescProduct_C_UpdateBoost, Temp_bool_Variable) == 0x000020, "Member 'ImagineCraftDescProduct_C_UpdateBoost::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ImagineCraftDescProduct_C_UpdateBoost, CallFunc_GetSBPlayerController_ReturnValue) == 0x000028, "Member 'ImagineCraftDescProduct_C_UpdateBoost::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraftDescProduct_C_UpdateBoost, CallFunc_GetRewardBoostComponent_ReturnValue) == 0x000030, "Member 'ImagineCraftDescProduct_C_UpdateBoost::CallFunc_GetRewardBoostComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraftDescProduct_C_UpdateBoost, CallFunc_IsEffectiveImagineCraft_ReturnValue) == 0x000038, "Member 'ImagineCraftDescProduct_C_UpdateBoost::CallFunc_IsEffectiveImagineCraft_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraftDescProduct_C_UpdateBoost, CallFunc_GetImagineCraftTooltipText_TooltipDataList) == 0x000040, "Member 'ImagineCraftDescProduct_C_UpdateBoost::CallFunc_GetImagineCraftTooltipText_TooltipDataList' has a wrong offset!");
static_assert(offsetof(ImagineCraftDescProduct_C_UpdateBoost, K2Node_Select_Default) == 0x000050, "Member 'ImagineCraftDescProduct_C_UpdateBoost::K2Node_Select_Default' has a wrong offset!");

}

