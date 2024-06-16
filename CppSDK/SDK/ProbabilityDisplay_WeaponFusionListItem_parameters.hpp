#pragma once

 

// Package: ProbabilityDisplay_WeaponFusionListItem

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ProbabilityDisplay_WeaponFusionListItem.ProbabilityDisplay_WeaponFusionListItem_C.ExecuteUbergraph_ProbabilityDisplay_WeaponFusionListItem
// 0x0128 (0x0128 - 0x0000)
struct ProbabilityDisplay_WeaponFusionListItem_C_ExecuteUbergraph_ProbabilityDisplay_WeaponFusionListItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Index;                          // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBMasterFusionItem                    K2Node_CustomEvent_FusionItem;                     // 0x0008(0x0018)(NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_940F[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindSyntheAbilityPickupMasterData_IsExists; // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9410[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSyntheAbilityPickUp                 CallFunc_BP_FindSyntheAbilityPickupMasterData_ReturnValue; // 0x0038(0x0028)()
	struct FSBAbilityTextData                     CallFunc_GetAbilityTextDataCollection_ReturnValue; // 0x0060(0x0050)(ConstParm)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9411[0x3];                                     // 0x00B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue;             // 0x00B8(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x00D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x00E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00F0(0x0018)()
	struct FSBSyntheAbilityData                   CallFunc_FindSyntheAbilityPickupMasterDataFromAccuracy_ReturnValue; // 0x0108(0x001C)(NoDestructor)
};
static_assert(alignof(ProbabilityDisplay_WeaponFusionListItem_C_ExecuteUbergraph_ProbabilityDisplay_WeaponFusionListItem) == 0x000008, "Wrong alignment on ProbabilityDisplay_WeaponFusionListItem_C_ExecuteUbergraph_ProbabilityDisplay_WeaponFusionListItem");
static_assert(sizeof(ProbabilityDisplay_WeaponFusionListItem_C_ExecuteUbergraph_ProbabilityDisplay_WeaponFusionListItem) == 0x000128, "Wrong size on ProbabilityDisplay_WeaponFusionListItem_C_ExecuteUbergraph_ProbabilityDisplay_WeaponFusionListItem");
static_assert(offsetof(ProbabilityDisplay_WeaponFusionListItem_C_ExecuteUbergraph_ProbabilityDisplay_WeaponFusionListItem, EntryPoint) == 0x000000, "Member 'ProbabilityDisplay_WeaponFusionListItem_C_ExecuteUbergraph_ProbabilityDisplay_WeaponFusionListItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_WeaponFusionListItem_C_ExecuteUbergraph_ProbabilityDisplay_WeaponFusionListItem, K2Node_CustomEvent_Index) == 0x000004, "Member 'ProbabilityDisplay_WeaponFusionListItem_C_ExecuteUbergraph_ProbabilityDisplay_WeaponFusionListItem::K2Node_CustomEvent_Index' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_WeaponFusionListItem_C_ExecuteUbergraph_ProbabilityDisplay_WeaponFusionListItem, K2Node_CustomEvent_FusionItem) == 0x000008, "Member 'ProbabilityDisplay_WeaponFusionListItem_C_ExecuteUbergraph_ProbabilityDisplay_WeaponFusionListItem::K2Node_CustomEvent_FusionItem' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_WeaponFusionListItem_C_ExecuteUbergraph_ProbabilityDisplay_WeaponFusionListItem, CallFunc_GetMasterDataManager_IsValid) == 0x000020, "Member 'ProbabilityDisplay_WeaponFusionListItem_C_ExecuteUbergraph_ProbabilityDisplay_WeaponFusionListItem::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_WeaponFusionListItem_C_ExecuteUbergraph_ProbabilityDisplay_WeaponFusionListItem, CallFunc_GetMasterDataManager_ReturnValue) == 0x000028, "Member 'ProbabilityDisplay_WeaponFusionListItem_C_ExecuteUbergraph_ProbabilityDisplay_WeaponFusionListItem::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_WeaponFusionListItem_C_ExecuteUbergraph_ProbabilityDisplay_WeaponFusionListItem, CallFunc_BP_FindSyntheAbilityPickupMasterData_IsExists) == 0x000030, "Member 'ProbabilityDisplay_WeaponFusionListItem_C_ExecuteUbergraph_ProbabilityDisplay_WeaponFusionListItem::CallFunc_BP_FindSyntheAbilityPickupMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_WeaponFusionListItem_C_ExecuteUbergraph_ProbabilityDisplay_WeaponFusionListItem, CallFunc_BP_FindSyntheAbilityPickupMasterData_ReturnValue) == 0x000038, "Member 'ProbabilityDisplay_WeaponFusionListItem_C_ExecuteUbergraph_ProbabilityDisplay_WeaponFusionListItem::CallFunc_BP_FindSyntheAbilityPickupMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_WeaponFusionListItem_C_ExecuteUbergraph_ProbabilityDisplay_WeaponFusionListItem, CallFunc_GetAbilityTextDataCollection_ReturnValue) == 0x000060, "Member 'ProbabilityDisplay_WeaponFusionListItem_C_ExecuteUbergraph_ProbabilityDisplay_WeaponFusionListItem::CallFunc_GetAbilityTextDataCollection_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_WeaponFusionListItem_C_ExecuteUbergraph_ProbabilityDisplay_WeaponFusionListItem, CallFunc_NotEqual_StrStr_ReturnValue) == 0x0000B0, "Member 'ProbabilityDisplay_WeaponFusionListItem_C_ExecuteUbergraph_ProbabilityDisplay_WeaponFusionListItem::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_WeaponFusionListItem_C_ExecuteUbergraph_ProbabilityDisplay_WeaponFusionListItem, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x0000B4, "Member 'ProbabilityDisplay_WeaponFusionListItem_C_ExecuteUbergraph_ProbabilityDisplay_WeaponFusionListItem::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_WeaponFusionListItem_C_ExecuteUbergraph_ProbabilityDisplay_WeaponFusionListItem, CallFunc_Conv_FloatToText_ReturnValue) == 0x0000B8, "Member 'ProbabilityDisplay_WeaponFusionListItem_C_ExecuteUbergraph_ProbabilityDisplay_WeaponFusionListItem::CallFunc_Conv_FloatToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_WeaponFusionListItem_C_ExecuteUbergraph_ProbabilityDisplay_WeaponFusionListItem, CallFunc_Conv_TextToString_ReturnValue) == 0x0000D0, "Member 'ProbabilityDisplay_WeaponFusionListItem_C_ExecuteUbergraph_ProbabilityDisplay_WeaponFusionListItem::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_WeaponFusionListItem_C_ExecuteUbergraph_ProbabilityDisplay_WeaponFusionListItem, CallFunc_Concat_StrStr_ReturnValue) == 0x0000E0, "Member 'ProbabilityDisplay_WeaponFusionListItem_C_ExecuteUbergraph_ProbabilityDisplay_WeaponFusionListItem::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_WeaponFusionListItem_C_ExecuteUbergraph_ProbabilityDisplay_WeaponFusionListItem, CallFunc_Conv_StringToText_ReturnValue) == 0x0000F0, "Member 'ProbabilityDisplay_WeaponFusionListItem_C_ExecuteUbergraph_ProbabilityDisplay_WeaponFusionListItem::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_WeaponFusionListItem_C_ExecuteUbergraph_ProbabilityDisplay_WeaponFusionListItem, CallFunc_FindSyntheAbilityPickupMasterDataFromAccuracy_ReturnValue) == 0x000108, "Member 'ProbabilityDisplay_WeaponFusionListItem_C_ExecuteUbergraph_ProbabilityDisplay_WeaponFusionListItem::CallFunc_FindSyntheAbilityPickupMasterDataFromAccuracy_ReturnValue' has a wrong offset!");

// Function ProbabilityDisplay_WeaponFusionListItem.ProbabilityDisplay_WeaponFusionListItem_C.Setup
// 0x001C (0x001C - 0x0000)
struct ProbabilityDisplay_WeaponFusionListItem_C_Setup final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBMasterFusionItem                    FusionItem;                                        // 0x0004(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(ProbabilityDisplay_WeaponFusionListItem_C_Setup) == 0x000004, "Wrong alignment on ProbabilityDisplay_WeaponFusionListItem_C_Setup");
static_assert(sizeof(ProbabilityDisplay_WeaponFusionListItem_C_Setup) == 0x00001C, "Wrong size on ProbabilityDisplay_WeaponFusionListItem_C_Setup");
static_assert(offsetof(ProbabilityDisplay_WeaponFusionListItem_C_Setup, Param_Index) == 0x000000, "Member 'ProbabilityDisplay_WeaponFusionListItem_C_Setup::Param_Index' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_WeaponFusionListItem_C_Setup, FusionItem) == 0x000004, "Member 'ProbabilityDisplay_WeaponFusionListItem_C_Setup::FusionItem' has a wrong offset!");

// Function ProbabilityDisplay_WeaponFusionListItem.ProbabilityDisplay_WeaponFusionListItem_C.SetupFusionItem
// 0x0218 (0x0218 - 0x0000)
struct ProbabilityDisplay_WeaponFusionListItem_C_SetupFusionItem final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBMasterFusionItem                    FusionItem;                                        // 0x0004(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	int32                                         LocalListItemIndex;                                // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9412[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAbilityTextData                     CallFunc_GetAbilityTextDataCollection_ReturnValue; // 0x0028(0x0050)(ConstParm)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9413[0x2];                                     // 0x007A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x007C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9414[0x3];                                     // 0x008D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindSyntheAbilityPickupMasterData_IsExists; // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9415[0x7];                                     // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSyntheAbilityPickUp                 CallFunc_BP_FindSyntheAbilityPickupMasterData_ReturnValue; // 0x00A0(0x0028)()
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9416[0x4];                                     // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue;             // 0x00D0(0x0018)()
	struct FSBSyntheAbilityData                   CallFunc_FindSyntheAbilityPickupMasterDataFromAccuracy_ReturnValue; // 0x00E8(0x001C)(NoDestructor)
	uint8                                         Pad_9417[0x4];                                     // 0x0104(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0108(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0118(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindAbilityMaster_bIsValid;               // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9418[0x7];                                     // 0x0129(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAbilityMasterData                   CallFunc_FindAbilityMaster_AbilityMaster;          // 0x0130(0x0048)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0178(0x0018)()
	bool                                          CallFunc_GetAbilityConfigByAbilityDBRowName_IsValid; // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9419[0x7];                                     // 0x0191(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAbilityConfig                       CallFunc_GetAbilityConfigByAbilityDBRowName_OutAbilityConfig; // 0x0198(0x0038)()
	bool                                          CallFunc_GetAbilityConfigByAbilityDBRowName_IsValid_1; // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_941A[0x7];                                     // 0x01D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAbilityConfig                       CallFunc_GetAbilityConfigByAbilityDBRowName_OutAbilityConfig_1; // 0x01D8(0x0038)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0210(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x0211(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ProbabilityDisplay_WeaponFusionListItem_C_SetupFusionItem) == 0x000008, "Wrong alignment on ProbabilityDisplay_WeaponFusionListItem_C_SetupFusionItem");
static_assert(sizeof(ProbabilityDisplay_WeaponFusionListItem_C_SetupFusionItem) == 0x000218, "Wrong size on ProbabilityDisplay_WeaponFusionListItem_C_SetupFusionItem");
static_assert(offsetof(ProbabilityDisplay_WeaponFusionListItem_C_SetupFusionItem, Param_Index) == 0x000000, "Member 'ProbabilityDisplay_WeaponFusionListItem_C_SetupFusionItem::Param_Index' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_WeaponFusionListItem_C_SetupFusionItem, FusionItem) == 0x000004, "Member 'ProbabilityDisplay_WeaponFusionListItem_C_SetupFusionItem::FusionItem' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_WeaponFusionListItem_C_SetupFusionItem, LocalListItemIndex) == 0x00001C, "Member 'ProbabilityDisplay_WeaponFusionListItem_C_SetupFusionItem::LocalListItemIndex' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_WeaponFusionListItem_C_SetupFusionItem, CallFunc_Percent_IntInt_ReturnValue) == 0x000020, "Member 'ProbabilityDisplay_WeaponFusionListItem_C_SetupFusionItem::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_WeaponFusionListItem_C_SetupFusionItem, CallFunc_GetAbilityTextDataCollection_ReturnValue) == 0x000028, "Member 'ProbabilityDisplay_WeaponFusionListItem_C_SetupFusionItem::CallFunc_GetAbilityTextDataCollection_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_WeaponFusionListItem_C_SetupFusionItem, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000078, "Member 'ProbabilityDisplay_WeaponFusionListItem_C_SetupFusionItem::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_WeaponFusionListItem_C_SetupFusionItem, CallFunc_NotEqual_StrStr_ReturnValue) == 0x000079, "Member 'ProbabilityDisplay_WeaponFusionListItem_C_SetupFusionItem::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_WeaponFusionListItem_C_SetupFusionItem, K2Node_MakeStruct_LinearColor) == 0x00007C, "Member 'ProbabilityDisplay_WeaponFusionListItem_C_SetupFusionItem::K2Node_MakeStruct_LinearColor' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_WeaponFusionListItem_C_SetupFusionItem, CallFunc_GetMasterDataManager_IsValid) == 0x00008C, "Member 'ProbabilityDisplay_WeaponFusionListItem_C_SetupFusionItem::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_WeaponFusionListItem_C_SetupFusionItem, CallFunc_GetMasterDataManager_ReturnValue) == 0x000090, "Member 'ProbabilityDisplay_WeaponFusionListItem_C_SetupFusionItem::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_WeaponFusionListItem_C_SetupFusionItem, CallFunc_BP_FindSyntheAbilityPickupMasterData_IsExists) == 0x000098, "Member 'ProbabilityDisplay_WeaponFusionListItem_C_SetupFusionItem::CallFunc_BP_FindSyntheAbilityPickupMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_WeaponFusionListItem_C_SetupFusionItem, CallFunc_BP_FindSyntheAbilityPickupMasterData_ReturnValue) == 0x0000A0, "Member 'ProbabilityDisplay_WeaponFusionListItem_C_SetupFusionItem::CallFunc_BP_FindSyntheAbilityPickupMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_WeaponFusionListItem_C_SetupFusionItem, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x0000C8, "Member 'ProbabilityDisplay_WeaponFusionListItem_C_SetupFusionItem::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_WeaponFusionListItem_C_SetupFusionItem, CallFunc_Conv_FloatToText_ReturnValue) == 0x0000D0, "Member 'ProbabilityDisplay_WeaponFusionListItem_C_SetupFusionItem::CallFunc_Conv_FloatToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_WeaponFusionListItem_C_SetupFusionItem, CallFunc_FindSyntheAbilityPickupMasterDataFromAccuracy_ReturnValue) == 0x0000E8, "Member 'ProbabilityDisplay_WeaponFusionListItem_C_SetupFusionItem::CallFunc_FindSyntheAbilityPickupMasterDataFromAccuracy_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_WeaponFusionListItem_C_SetupFusionItem, CallFunc_Conv_TextToString_ReturnValue) == 0x000108, "Member 'ProbabilityDisplay_WeaponFusionListItem_C_SetupFusionItem::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_WeaponFusionListItem_C_SetupFusionItem, CallFunc_Concat_StrStr_ReturnValue) == 0x000118, "Member 'ProbabilityDisplay_WeaponFusionListItem_C_SetupFusionItem::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_WeaponFusionListItem_C_SetupFusionItem, CallFunc_FindAbilityMaster_bIsValid) == 0x000128, "Member 'ProbabilityDisplay_WeaponFusionListItem_C_SetupFusionItem::CallFunc_FindAbilityMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_WeaponFusionListItem_C_SetupFusionItem, CallFunc_FindAbilityMaster_AbilityMaster) == 0x000130, "Member 'ProbabilityDisplay_WeaponFusionListItem_C_SetupFusionItem::CallFunc_FindAbilityMaster_AbilityMaster' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_WeaponFusionListItem_C_SetupFusionItem, CallFunc_Conv_StringToText_ReturnValue) == 0x000178, "Member 'ProbabilityDisplay_WeaponFusionListItem_C_SetupFusionItem::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_WeaponFusionListItem_C_SetupFusionItem, CallFunc_GetAbilityConfigByAbilityDBRowName_IsValid) == 0x000190, "Member 'ProbabilityDisplay_WeaponFusionListItem_C_SetupFusionItem::CallFunc_GetAbilityConfigByAbilityDBRowName_IsValid' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_WeaponFusionListItem_C_SetupFusionItem, CallFunc_GetAbilityConfigByAbilityDBRowName_OutAbilityConfig) == 0x000198, "Member 'ProbabilityDisplay_WeaponFusionListItem_C_SetupFusionItem::CallFunc_GetAbilityConfigByAbilityDBRowName_OutAbilityConfig' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_WeaponFusionListItem_C_SetupFusionItem, CallFunc_GetAbilityConfigByAbilityDBRowName_IsValid_1) == 0x0001D0, "Member 'ProbabilityDisplay_WeaponFusionListItem_C_SetupFusionItem::CallFunc_GetAbilityConfigByAbilityDBRowName_IsValid_1' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_WeaponFusionListItem_C_SetupFusionItem, CallFunc_GetAbilityConfigByAbilityDBRowName_OutAbilityConfig_1) == 0x0001D8, "Member 'ProbabilityDisplay_WeaponFusionListItem_C_SetupFusionItem::CallFunc_GetAbilityConfigByAbilityDBRowName_OutAbilityConfig_1' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_WeaponFusionListItem_C_SetupFusionItem, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000210, "Member 'ProbabilityDisplay_WeaponFusionListItem_C_SetupFusionItem::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_WeaponFusionListItem_C_SetupFusionItem, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x000211, "Member 'ProbabilityDisplay_WeaponFusionListItem_C_SetupFusionItem::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");

// Function ProbabilityDisplay_WeaponFusionListItem.ProbabilityDisplay_WeaponFusionListItem_C.SetupTuning
// 0x01C8 (0x01C8 - 0x0000)
struct ProbabilityDisplay_WeaponFusionListItem_C_SetupTuning final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBSyntheAbilityData                   SBSyntheAbilityData;                               // 0x0004(0x001C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	float                                         Rate;                                              // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalListItemIndex;                                // 0x0024(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_941B[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue;             // 0x0030(0x0018)()
	bool                                          CallFunc_FindAbilityMaster_bIsValid;               // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_941C[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAbilityMasterData                   CallFunc_FindAbilityMaster_AbilityMaster;          // 0x0050(0x0048)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetAbilityConfigByAbilityDBRowName_IsValid; // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_941D[0x7];                                     // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAbilityConfig                       CallFunc_GetAbilityConfigByAbilityDBRowName_OutAbilityConfig; // 0x00C0(0x0038)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00F8(0x0018)()
	bool                                          CallFunc_GetAbilityConfigByAbilityDBRowName_IsValid_1; // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_941E[0x7];                                     // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAbilityConfig                       CallFunc_GetAbilityConfigByAbilityDBRowName_OutAbilityConfig_1; // 0x0118(0x0038)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_941F[0x7];                                     // 0x0151(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAbilityTextData                     CallFunc_GetAbilityTextDataCollection_ReturnValue; // 0x0158(0x0050)(ConstParm)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x01A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9420[0x2];                                     // 0x01AA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x01AC(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x01BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ProbabilityDisplay_WeaponFusionListItem_C_SetupTuning) == 0x000008, "Wrong alignment on ProbabilityDisplay_WeaponFusionListItem_C_SetupTuning");
static_assert(sizeof(ProbabilityDisplay_WeaponFusionListItem_C_SetupTuning) == 0x0001C8, "Wrong size on ProbabilityDisplay_WeaponFusionListItem_C_SetupTuning");
static_assert(offsetof(ProbabilityDisplay_WeaponFusionListItem_C_SetupTuning, Param_Index) == 0x000000, "Member 'ProbabilityDisplay_WeaponFusionListItem_C_SetupTuning::Param_Index' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_WeaponFusionListItem_C_SetupTuning, SBSyntheAbilityData) == 0x000004, "Member 'ProbabilityDisplay_WeaponFusionListItem_C_SetupTuning::SBSyntheAbilityData' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_WeaponFusionListItem_C_SetupTuning, Rate) == 0x000020, "Member 'ProbabilityDisplay_WeaponFusionListItem_C_SetupTuning::Rate' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_WeaponFusionListItem_C_SetupTuning, LocalListItemIndex) == 0x000024, "Member 'ProbabilityDisplay_WeaponFusionListItem_C_SetupTuning::LocalListItemIndex' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_WeaponFusionListItem_C_SetupTuning, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000028, "Member 'ProbabilityDisplay_WeaponFusionListItem_C_SetupTuning::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_WeaponFusionListItem_C_SetupTuning, CallFunc_Conv_FloatToText_ReturnValue) == 0x000030, "Member 'ProbabilityDisplay_WeaponFusionListItem_C_SetupTuning::CallFunc_Conv_FloatToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_WeaponFusionListItem_C_SetupTuning, CallFunc_FindAbilityMaster_bIsValid) == 0x000048, "Member 'ProbabilityDisplay_WeaponFusionListItem_C_SetupTuning::CallFunc_FindAbilityMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_WeaponFusionListItem_C_SetupTuning, CallFunc_FindAbilityMaster_AbilityMaster) == 0x000050, "Member 'ProbabilityDisplay_WeaponFusionListItem_C_SetupTuning::CallFunc_FindAbilityMaster_AbilityMaster' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_WeaponFusionListItem_C_SetupTuning, CallFunc_Conv_TextToString_ReturnValue) == 0x000098, "Member 'ProbabilityDisplay_WeaponFusionListItem_C_SetupTuning::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_WeaponFusionListItem_C_SetupTuning, CallFunc_Concat_StrStr_ReturnValue) == 0x0000A8, "Member 'ProbabilityDisplay_WeaponFusionListItem_C_SetupTuning::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_WeaponFusionListItem_C_SetupTuning, CallFunc_GetAbilityConfigByAbilityDBRowName_IsValid) == 0x0000B8, "Member 'ProbabilityDisplay_WeaponFusionListItem_C_SetupTuning::CallFunc_GetAbilityConfigByAbilityDBRowName_IsValid' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_WeaponFusionListItem_C_SetupTuning, CallFunc_GetAbilityConfigByAbilityDBRowName_OutAbilityConfig) == 0x0000C0, "Member 'ProbabilityDisplay_WeaponFusionListItem_C_SetupTuning::CallFunc_GetAbilityConfigByAbilityDBRowName_OutAbilityConfig' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_WeaponFusionListItem_C_SetupTuning, CallFunc_Conv_StringToText_ReturnValue) == 0x0000F8, "Member 'ProbabilityDisplay_WeaponFusionListItem_C_SetupTuning::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_WeaponFusionListItem_C_SetupTuning, CallFunc_GetAbilityConfigByAbilityDBRowName_IsValid_1) == 0x000110, "Member 'ProbabilityDisplay_WeaponFusionListItem_C_SetupTuning::CallFunc_GetAbilityConfigByAbilityDBRowName_IsValid_1' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_WeaponFusionListItem_C_SetupTuning, CallFunc_GetAbilityConfigByAbilityDBRowName_OutAbilityConfig_1) == 0x000118, "Member 'ProbabilityDisplay_WeaponFusionListItem_C_SetupTuning::CallFunc_GetAbilityConfigByAbilityDBRowName_OutAbilityConfig_1' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_WeaponFusionListItem_C_SetupTuning, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000150, "Member 'ProbabilityDisplay_WeaponFusionListItem_C_SetupTuning::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_WeaponFusionListItem_C_SetupTuning, CallFunc_GetAbilityTextDataCollection_ReturnValue) == 0x000158, "Member 'ProbabilityDisplay_WeaponFusionListItem_C_SetupTuning::CallFunc_GetAbilityTextDataCollection_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_WeaponFusionListItem_C_SetupTuning, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x0001A8, "Member 'ProbabilityDisplay_WeaponFusionListItem_C_SetupTuning::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_WeaponFusionListItem_C_SetupTuning, CallFunc_NotEqual_StrStr_ReturnValue) == 0x0001A9, "Member 'ProbabilityDisplay_WeaponFusionListItem_C_SetupTuning::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_WeaponFusionListItem_C_SetupTuning, K2Node_MakeStruct_LinearColor) == 0x0001AC, "Member 'ProbabilityDisplay_WeaponFusionListItem_C_SetupTuning::K2Node_MakeStruct_LinearColor' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_WeaponFusionListItem_C_SetupTuning, CallFunc_Percent_IntInt_ReturnValue) == 0x0001BC, "Member 'ProbabilityDisplay_WeaponFusionListItem_C_SetupTuning::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_WeaponFusionListItem_C_SetupTuning, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x0001C0, "Member 'ProbabilityDisplay_WeaponFusionListItem_C_SetupTuning::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");

}

