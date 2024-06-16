#pragma once

 

// Package: LibraryMenu_WeaponDetails

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function LibraryMenu_WeaponDetails.LibraryMenu_WeaponDetails_C.ExecuteUbergraph_LibraryMenu_WeaponDetails
// 0x0080 (0x0080 - 0x0000)
struct LibraryMenu_WeaponDetails_C_ExecuteUbergraph_LibraryMenu_WeaponDetails final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_5F51[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCurrentLevelName_ReturnValue;          // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	uint8                                         Pad_5F52[0x8];                                     // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_Find_Map_Spawn_Location_for_Item_Detail_Capture_OutTransform; // 0x0030(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_WeaponForCapture_Studio_C*          CallFunc_FinishSpawningActor_ReturnValue;          // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_WeaponDetails_C_ExecuteUbergraph_LibraryMenu_WeaponDetails) == 0x000010, "Wrong alignment on LibraryMenu_WeaponDetails_C_ExecuteUbergraph_LibraryMenu_WeaponDetails");
static_assert(sizeof(LibraryMenu_WeaponDetails_C_ExecuteUbergraph_LibraryMenu_WeaponDetails) == 0x000080, "Wrong size on LibraryMenu_WeaponDetails_C_ExecuteUbergraph_LibraryMenu_WeaponDetails");
static_assert(offsetof(LibraryMenu_WeaponDetails_C_ExecuteUbergraph_LibraryMenu_WeaponDetails, EntryPoint) == 0x000000, "Member 'LibraryMenu_WeaponDetails_C_ExecuteUbergraph_LibraryMenu_WeaponDetails::EntryPoint' has a wrong offset!");
static_assert(offsetof(LibraryMenu_WeaponDetails_C_ExecuteUbergraph_LibraryMenu_WeaponDetails, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'LibraryMenu_WeaponDetails_C_ExecuteUbergraph_LibraryMenu_WeaponDetails::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(LibraryMenu_WeaponDetails_C_ExecuteUbergraph_LibraryMenu_WeaponDetails, CallFunc_GetCurrentLevelName_ReturnValue) == 0x000018, "Member 'LibraryMenu_WeaponDetails_C_ExecuteUbergraph_LibraryMenu_WeaponDetails::CallFunc_GetCurrentLevelName_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_WeaponDetails_C_ExecuteUbergraph_LibraryMenu_WeaponDetails, CallFunc_Find_Map_Spawn_Location_for_Item_Detail_Capture_OutTransform) == 0x000030, "Member 'LibraryMenu_WeaponDetails_C_ExecuteUbergraph_LibraryMenu_WeaponDetails::CallFunc_Find_Map_Spawn_Location_for_Item_Detail_Capture_OutTransform' has a wrong offset!");
static_assert(offsetof(LibraryMenu_WeaponDetails_C_ExecuteUbergraph_LibraryMenu_WeaponDetails, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000060, "Member 'LibraryMenu_WeaponDetails_C_ExecuteUbergraph_LibraryMenu_WeaponDetails::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_WeaponDetails_C_ExecuteUbergraph_LibraryMenu_WeaponDetails, CallFunc_FinishSpawningActor_ReturnValue) == 0x000068, "Member 'LibraryMenu_WeaponDetails_C_ExecuteUbergraph_LibraryMenu_WeaponDetails::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_WeaponDetails_C_ExecuteUbergraph_LibraryMenu_WeaponDetails, CallFunc_IsValid_ReturnValue) == 0x000070, "Member 'LibraryMenu_WeaponDetails_C_ExecuteUbergraph_LibraryMenu_WeaponDetails::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function LibraryMenu_WeaponDetails.LibraryMenu_WeaponDetails_C.SetDetailsVisibility
// 0x00C8 (0x00C8 - 0x0000)
struct LibraryMenu_WeaponDetails_C_SetDetailsVisibility final
{
public:
	bool                                          bVisible;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F53[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponMasterData                    K2Node_MakeStruct_SBWeaponMasterData;              // 0x0008(0x00B0)()
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue;                // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F54[0x6];                                     // 0x00BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_WeaponDetails_C_SetDetailsVisibility) == 0x000008, "Wrong alignment on LibraryMenu_WeaponDetails_C_SetDetailsVisibility");
static_assert(sizeof(LibraryMenu_WeaponDetails_C_SetDetailsVisibility) == 0x0000C8, "Wrong size on LibraryMenu_WeaponDetails_C_SetDetailsVisibility");
static_assert(offsetof(LibraryMenu_WeaponDetails_C_SetDetailsVisibility, bVisible) == 0x000000, "Member 'LibraryMenu_WeaponDetails_C_SetDetailsVisibility::bVisible' has a wrong offset!");
static_assert(offsetof(LibraryMenu_WeaponDetails_C_SetDetailsVisibility, K2Node_MakeStruct_SBWeaponMasterData) == 0x000008, "Member 'LibraryMenu_WeaponDetails_C_SetDetailsVisibility::K2Node_MakeStruct_SBWeaponMasterData' has a wrong offset!");
static_assert(offsetof(LibraryMenu_WeaponDetails_C_SetDetailsVisibility, CallFunc_GetVisibility_ReturnValue) == 0x0000B8, "Member 'LibraryMenu_WeaponDetails_C_SetDetailsVisibility::CallFunc_GetVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_WeaponDetails_C_SetDetailsVisibility, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000B9, "Member 'LibraryMenu_WeaponDetails_C_SetDetailsVisibility::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_WeaponDetails_C_SetDetailsVisibility, CallFunc_PlayAnimation_ReturnValue) == 0x0000C0, "Member 'LibraryMenu_WeaponDetails_C_SetDetailsVisibility::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function LibraryMenu_WeaponDetails.LibraryMenu_WeaponDetails_C.SetWeaponData
// 0x0218 (0x0218 - 0x0000)
struct LibraryMenu_WeaponDetails_C_SetWeaponData final
{
public:
	struct FSBWeaponMasterData                    InWeaponMasterData;                                // 0x0000(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSBSyntheAbilityData                   SyntheAbilityMax;                                  // 0x00B0(0x001C)(Edit, BlueprintVisible, NoDestructor)
	struct FSBSyntheAbilityData                   SyntheAbilityMin;                                  // 0x00CC(0x001C)(Edit, BlueprintVisible, NoDestructor)
	struct FSBAbilityTextData                     FusionItemText;                                    // 0x00E8(0x0050)(Edit, BlueprintVisible)
	struct FLinearColor                           Temp_struct_Variable;                              // 0x0138(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_1;                            // 0x0148(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0158(0x0018)()
	int32                                         CallFunc_GetLevelStatus_ReturnValue;               // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0174(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F55[0x3];                                     // 0x0175(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0178(0x0018)()
	class FString                                 CallFunc_GetWeaponText_ReturnValue;                // 0x0190(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetWeaponText_ReturnValue_1;              // 0x01A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x01B0(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x01C8(0x0018)()
	int32                                         CallFunc_GetAllStoragesAmount_ReturnValue;         // 0x01E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5F56[0x4];                                     // 0x01E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_2;             // 0x01E8(0x0018)()
	bool                                          Temp_bool_Variable;                                // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F57[0x3];                                     // 0x0201(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Select_Default;                             // 0x0204(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0214(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_WeaponDetails_C_SetWeaponData) == 0x000008, "Wrong alignment on LibraryMenu_WeaponDetails_C_SetWeaponData");
static_assert(sizeof(LibraryMenu_WeaponDetails_C_SetWeaponData) == 0x000218, "Wrong size on LibraryMenu_WeaponDetails_C_SetWeaponData");
static_assert(offsetof(LibraryMenu_WeaponDetails_C_SetWeaponData, InWeaponMasterData) == 0x000000, "Member 'LibraryMenu_WeaponDetails_C_SetWeaponData::InWeaponMasterData' has a wrong offset!");
static_assert(offsetof(LibraryMenu_WeaponDetails_C_SetWeaponData, SyntheAbilityMax) == 0x0000B0, "Member 'LibraryMenu_WeaponDetails_C_SetWeaponData::SyntheAbilityMax' has a wrong offset!");
static_assert(offsetof(LibraryMenu_WeaponDetails_C_SetWeaponData, SyntheAbilityMin) == 0x0000CC, "Member 'LibraryMenu_WeaponDetails_C_SetWeaponData::SyntheAbilityMin' has a wrong offset!");
static_assert(offsetof(LibraryMenu_WeaponDetails_C_SetWeaponData, FusionItemText) == 0x0000E8, "Member 'LibraryMenu_WeaponDetails_C_SetWeaponData::FusionItemText' has a wrong offset!");
static_assert(offsetof(LibraryMenu_WeaponDetails_C_SetWeaponData, Temp_struct_Variable) == 0x000138, "Member 'LibraryMenu_WeaponDetails_C_SetWeaponData::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_WeaponDetails_C_SetWeaponData, Temp_struct_Variable_1) == 0x000148, "Member 'LibraryMenu_WeaponDetails_C_SetWeaponData::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_WeaponDetails_C_SetWeaponData, CallFunc_Conv_IntToText_ReturnValue) == 0x000158, "Member 'LibraryMenu_WeaponDetails_C_SetWeaponData::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_WeaponDetails_C_SetWeaponData, CallFunc_GetLevelStatus_ReturnValue) == 0x000170, "Member 'LibraryMenu_WeaponDetails_C_SetWeaponData::CallFunc_GetLevelStatus_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_WeaponDetails_C_SetWeaponData, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000174, "Member 'LibraryMenu_WeaponDetails_C_SetWeaponData::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_WeaponDetails_C_SetWeaponData, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000178, "Member 'LibraryMenu_WeaponDetails_C_SetWeaponData::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_WeaponDetails_C_SetWeaponData, CallFunc_GetWeaponText_ReturnValue) == 0x000190, "Member 'LibraryMenu_WeaponDetails_C_SetWeaponData::CallFunc_GetWeaponText_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_WeaponDetails_C_SetWeaponData, CallFunc_GetWeaponText_ReturnValue_1) == 0x0001A0, "Member 'LibraryMenu_WeaponDetails_C_SetWeaponData::CallFunc_GetWeaponText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_WeaponDetails_C_SetWeaponData, CallFunc_Conv_StringToText_ReturnValue) == 0x0001B0, "Member 'LibraryMenu_WeaponDetails_C_SetWeaponData::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_WeaponDetails_C_SetWeaponData, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0001C8, "Member 'LibraryMenu_WeaponDetails_C_SetWeaponData::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_WeaponDetails_C_SetWeaponData, CallFunc_GetAllStoragesAmount_ReturnValue) == 0x0001E0, "Member 'LibraryMenu_WeaponDetails_C_SetWeaponData::CallFunc_GetAllStoragesAmount_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_WeaponDetails_C_SetWeaponData, CallFunc_Conv_IntToText_ReturnValue_2) == 0x0001E8, "Member 'LibraryMenu_WeaponDetails_C_SetWeaponData::CallFunc_Conv_IntToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_WeaponDetails_C_SetWeaponData, Temp_bool_Variable) == 0x000200, "Member 'LibraryMenu_WeaponDetails_C_SetWeaponData::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_WeaponDetails_C_SetWeaponData, K2Node_Select_Default) == 0x000204, "Member 'LibraryMenu_WeaponDetails_C_SetWeaponData::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(LibraryMenu_WeaponDetails_C_SetWeaponData, CallFunc_IsValid_ReturnValue) == 0x000214, "Member 'LibraryMenu_WeaponDetails_C_SetWeaponData::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function LibraryMenu_WeaponDetails.LibraryMenu_WeaponDetails_C.SetActiveTab
// 0x0500 (0x0500 - 0x0000)
struct LibraryMenu_WeaponDetails_C_SetActiveTab final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5F58[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FButtonStyle                           SelectedBtn;                                       // 0x0008(0x0278)(Edit, BlueprintVisible)
	struct FButtonStyle                           NormalBtn;                                         // 0x0280(0x0278)(Edit, BlueprintVisible)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x04F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x04F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_WeaponDetails_C_SetActiveTab) == 0x000008, "Wrong alignment on LibraryMenu_WeaponDetails_C_SetActiveTab");
static_assert(sizeof(LibraryMenu_WeaponDetails_C_SetActiveTab) == 0x000500, "Wrong size on LibraryMenu_WeaponDetails_C_SetActiveTab");
static_assert(offsetof(LibraryMenu_WeaponDetails_C_SetActiveTab, Param_Index) == 0x000000, "Member 'LibraryMenu_WeaponDetails_C_SetActiveTab::Param_Index' has a wrong offset!");
static_assert(offsetof(LibraryMenu_WeaponDetails_C_SetActiveTab, SelectedBtn) == 0x000008, "Member 'LibraryMenu_WeaponDetails_C_SetActiveTab::SelectedBtn' has a wrong offset!");
static_assert(offsetof(LibraryMenu_WeaponDetails_C_SetActiveTab, NormalBtn) == 0x000280, "Member 'LibraryMenu_WeaponDetails_C_SetActiveTab::NormalBtn' has a wrong offset!");
static_assert(offsetof(LibraryMenu_WeaponDetails_C_SetActiveTab, K2Node_SwitchInteger_CmpSuccess) == 0x0004F8, "Member 'LibraryMenu_WeaponDetails_C_SetActiveTab::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(LibraryMenu_WeaponDetails_C_SetActiveTab, CallFunc_NotEqual_IntInt_ReturnValue) == 0x0004F9, "Member 'LibraryMenu_WeaponDetails_C_SetActiveTab::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");

// Function LibraryMenu_WeaponDetails.LibraryMenu_WeaponDetails_C.UpdateReadRecipeTab
// 0x0280 (0x0280 - 0x0000)
struct LibraryMenu_WeaponDetails_C_UpdateReadRecipeTab final
{
public:
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetCharacterId_ReturnValue_1;             // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsReadWeaponData_ReturnValue;             // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F59[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBReadLibraryWeaponData               K2Node_MakeStruct_SBReadLibraryWeaponData;         // 0x0024(0x0008)(NoDestructor)
	uint8                                         Pad_5F5A[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPlayerId_ReturnValue_1;                // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetLibrarySaveManager_IsValid;            // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F5B[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBLibrarySaveManager*                  CallFunc_GetLibrarySaveManager_ReturnValue;        // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SaveLibraryData_ReturnValue;              // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F5C[0x6];                                     // 0x0062(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBLibrarySaveData                     CallFunc_LoadLibraryData_ReturnValue;              // 0x0068(0x0218)()
};
static_assert(alignof(LibraryMenu_WeaponDetails_C_UpdateReadRecipeTab) == 0x000008, "Wrong alignment on LibraryMenu_WeaponDetails_C_UpdateReadRecipeTab");
static_assert(sizeof(LibraryMenu_WeaponDetails_C_UpdateReadRecipeTab) == 0x000280, "Wrong size on LibraryMenu_WeaponDetails_C_UpdateReadRecipeTab");
static_assert(offsetof(LibraryMenu_WeaponDetails_C_UpdateReadRecipeTab, CallFunc_GetCharacterId_ReturnValue) == 0x000000, "Member 'LibraryMenu_WeaponDetails_C_UpdateReadRecipeTab::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_WeaponDetails_C_UpdateReadRecipeTab, CallFunc_GetCharacterId_ReturnValue_1) == 0x000010, "Member 'LibraryMenu_WeaponDetails_C_UpdateReadRecipeTab::CallFunc_GetCharacterId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_WeaponDetails_C_UpdateReadRecipeTab, CallFunc_IsReadWeaponData_ReturnValue) == 0x000020, "Member 'LibraryMenu_WeaponDetails_C_UpdateReadRecipeTab::CallFunc_IsReadWeaponData_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_WeaponDetails_C_UpdateReadRecipeTab, K2Node_MakeStruct_SBReadLibraryWeaponData) == 0x000024, "Member 'LibraryMenu_WeaponDetails_C_UpdateReadRecipeTab::K2Node_MakeStruct_SBReadLibraryWeaponData' has a wrong offset!");
static_assert(offsetof(LibraryMenu_WeaponDetails_C_UpdateReadRecipeTab, CallFunc_GetPlayerId_ReturnValue) == 0x000030, "Member 'LibraryMenu_WeaponDetails_C_UpdateReadRecipeTab::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_WeaponDetails_C_UpdateReadRecipeTab, CallFunc_GetPlayerId_ReturnValue_1) == 0x000040, "Member 'LibraryMenu_WeaponDetails_C_UpdateReadRecipeTab::CallFunc_GetPlayerId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_WeaponDetails_C_UpdateReadRecipeTab, CallFunc_GetLibrarySaveManager_IsValid) == 0x000050, "Member 'LibraryMenu_WeaponDetails_C_UpdateReadRecipeTab::CallFunc_GetLibrarySaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(LibraryMenu_WeaponDetails_C_UpdateReadRecipeTab, CallFunc_GetLibrarySaveManager_ReturnValue) == 0x000058, "Member 'LibraryMenu_WeaponDetails_C_UpdateReadRecipeTab::CallFunc_GetLibrarySaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_WeaponDetails_C_UpdateReadRecipeTab, CallFunc_SaveLibraryData_ReturnValue) == 0x000060, "Member 'LibraryMenu_WeaponDetails_C_UpdateReadRecipeTab::CallFunc_SaveLibraryData_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_WeaponDetails_C_UpdateReadRecipeTab, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000061, "Member 'LibraryMenu_WeaponDetails_C_UpdateReadRecipeTab::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_WeaponDetails_C_UpdateReadRecipeTab, CallFunc_LoadLibraryData_ReturnValue) == 0x000068, "Member 'LibraryMenu_WeaponDetails_C_UpdateReadRecipeTab::CallFunc_LoadLibraryData_ReturnValue' has a wrong offset!");

}

