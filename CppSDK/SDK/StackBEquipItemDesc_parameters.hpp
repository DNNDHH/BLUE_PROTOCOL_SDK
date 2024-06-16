#pragma once

 

// Package: StackBEquipItemDesc

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function StackBEquipItemDesc.StackBEquipItemDesc_C.ExecuteUbergraph_StackBEquipItemDesc
// 0x0128 (0x0128 - 0x0000)
struct StackBEquipItemDesc_C_ExecuteUbergraph_StackBEquipItemDesc final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6CD1[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           K2Node_CustomEvent_OwnItemInfo;                    // 0x0008(0x0118)()
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(StackBEquipItemDesc_C_ExecuteUbergraph_StackBEquipItemDesc) == 0x000008, "Wrong alignment on StackBEquipItemDesc_C_ExecuteUbergraph_StackBEquipItemDesc");
static_assert(sizeof(StackBEquipItemDesc_C_ExecuteUbergraph_StackBEquipItemDesc) == 0x000128, "Wrong size on StackBEquipItemDesc_C_ExecuteUbergraph_StackBEquipItemDesc");
static_assert(offsetof(StackBEquipItemDesc_C_ExecuteUbergraph_StackBEquipItemDesc, EntryPoint) == 0x000000, "Member 'StackBEquipItemDesc_C_ExecuteUbergraph_StackBEquipItemDesc::EntryPoint' has a wrong offset!");
static_assert(offsetof(StackBEquipItemDesc_C_ExecuteUbergraph_StackBEquipItemDesc, K2Node_CustomEvent_OwnItemInfo) == 0x000008, "Member 'StackBEquipItemDesc_C_ExecuteUbergraph_StackBEquipItemDesc::K2Node_CustomEvent_OwnItemInfo' has a wrong offset!");
static_assert(offsetof(StackBEquipItemDesc_C_ExecuteUbergraph_StackBEquipItemDesc, K2Node_SwitchEnum_CmpSuccess) == 0x000120, "Member 'StackBEquipItemDesc_C_ExecuteUbergraph_StackBEquipItemDesc::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function StackBEquipItemDesc.StackBEquipItemDesc_C.Set OwnItemData
// 0x0118 (0x0118 - 0x0000)
struct StackBEquipItemDesc_C_Set_OwnItemData final
{
public:
	struct FOwnItemInfo                           OwnItemInfo;                                       // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(StackBEquipItemDesc_C_Set_OwnItemData) == 0x000008, "Wrong alignment on StackBEquipItemDesc_C_Set_OwnItemData");
static_assert(sizeof(StackBEquipItemDesc_C_Set_OwnItemData) == 0x000118, "Wrong size on StackBEquipItemDesc_C_Set_OwnItemData");
static_assert(offsetof(StackBEquipItemDesc_C_Set_OwnItemData, OwnItemInfo) == 0x000000, "Member 'StackBEquipItemDesc_C_Set_OwnItemData::OwnItemInfo' has a wrong offset!");

// Function StackBEquipItemDesc.StackBEquipItemDesc_C.ApplyWeaponStatus
// 0x03C0 (0x03C0 - 0x0000)
struct StackBEquipItemDesc_C_ApplyWeaponStatus final
{
public:
	struct FOwnItemInfo                           OwnItemInfo;                                       // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         AttributeValue;                                    // 0x0118(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6CD2[0x4];                                     // 0x011C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponMasterData                    LovalWeaponMaster;                                 // 0x0120(0x00B0)(Edit, BlueprintVisible)
	class USBWeaponManager*                       LocalWeaponManager;                                // 0x01D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         WeaponLevel;                                       // 0x01D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetItemLevel_ReturnValue;                 // 0x01DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x01E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_MakeLiteralBool_ReturnValue;              // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x01E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CD3[0x6];                                     // 0x01EA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x01F0(0x0018)()
	bool                                          CallFunc_FindWeaponMaster_bIsValid;                // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CD4[0x7];                                     // 0x0209(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponMasterData                    CallFunc_FindWeaponMaster_WeaponMaster;            // 0x0210(0x00B0)()
	int32                                         CallFunc_GetWeaponLevelStatusByUniqueID_ReturnValue; // 0x02C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetWeaponManager_IsValid;                 // 0x02C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CD5[0x3];                                     // 0x02C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBWeaponManager*                       CallFunc_GetWeaponManager_ReturnValue;             // 0x02C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable;                              // 0x02D0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_1;                            // 0x02E0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_CalculatedStackBWeaponParam_ReturnValue;  // 0x02F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_CalculatedStackBWeaponParam_ReturnValue_1; // 0x02F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x02F8(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_2;             // 0x0310(0x0018)()
	bool                                          Temp_bool_Variable;                                // 0x0328(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CD6[0x3];                                     // 0x0329(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Select_Default;                             // 0x032C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6CD7[0x4];                                     // 0x033C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_3;             // 0x0340(0x0018)()
	class FString                                 CallFunc_SetSpecialEffectText_SpecialName;         // 0x0358(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_SetSpecialEffectText_SpecialValue;        // 0x0368(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0380(0x0018)()
	class FString                                 CallFunc_GetNameText_ReturnValue;                  // 0x0398(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x03A8(0x0018)()
};
static_assert(alignof(StackBEquipItemDesc_C_ApplyWeaponStatus) == 0x000008, "Wrong alignment on StackBEquipItemDesc_C_ApplyWeaponStatus");
static_assert(sizeof(StackBEquipItemDesc_C_ApplyWeaponStatus) == 0x0003C0, "Wrong size on StackBEquipItemDesc_C_ApplyWeaponStatus");
static_assert(offsetof(StackBEquipItemDesc_C_ApplyWeaponStatus, OwnItemInfo) == 0x000000, "Member 'StackBEquipItemDesc_C_ApplyWeaponStatus::OwnItemInfo' has a wrong offset!");
static_assert(offsetof(StackBEquipItemDesc_C_ApplyWeaponStatus, AttributeValue) == 0x000118, "Member 'StackBEquipItemDesc_C_ApplyWeaponStatus::AttributeValue' has a wrong offset!");
static_assert(offsetof(StackBEquipItemDesc_C_ApplyWeaponStatus, LovalWeaponMaster) == 0x000120, "Member 'StackBEquipItemDesc_C_ApplyWeaponStatus::LovalWeaponMaster' has a wrong offset!");
static_assert(offsetof(StackBEquipItemDesc_C_ApplyWeaponStatus, LocalWeaponManager) == 0x0001D0, "Member 'StackBEquipItemDesc_C_ApplyWeaponStatus::LocalWeaponManager' has a wrong offset!");
static_assert(offsetof(StackBEquipItemDesc_C_ApplyWeaponStatus, WeaponLevel) == 0x0001D8, "Member 'StackBEquipItemDesc_C_ApplyWeaponStatus::WeaponLevel' has a wrong offset!");
static_assert(offsetof(StackBEquipItemDesc_C_ApplyWeaponStatus, CallFunc_GetItemLevel_ReturnValue) == 0x0001DC, "Member 'StackBEquipItemDesc_C_ApplyWeaponStatus::CallFunc_GetItemLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(StackBEquipItemDesc_C_ApplyWeaponStatus, CallFunc_GetPlayerController_ReturnValue) == 0x0001E0, "Member 'StackBEquipItemDesc_C_ApplyWeaponStatus::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(StackBEquipItemDesc_C_ApplyWeaponStatus, CallFunc_MakeLiteralBool_ReturnValue) == 0x0001E8, "Member 'StackBEquipItemDesc_C_ApplyWeaponStatus::CallFunc_MakeLiteralBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(StackBEquipItemDesc_C_ApplyWeaponStatus, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0001E9, "Member 'StackBEquipItemDesc_C_ApplyWeaponStatus::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(StackBEquipItemDesc_C_ApplyWeaponStatus, CallFunc_Conv_IntToText_ReturnValue) == 0x0001F0, "Member 'StackBEquipItemDesc_C_ApplyWeaponStatus::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(StackBEquipItemDesc_C_ApplyWeaponStatus, CallFunc_FindWeaponMaster_bIsValid) == 0x000208, "Member 'StackBEquipItemDesc_C_ApplyWeaponStatus::CallFunc_FindWeaponMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(StackBEquipItemDesc_C_ApplyWeaponStatus, CallFunc_FindWeaponMaster_WeaponMaster) == 0x000210, "Member 'StackBEquipItemDesc_C_ApplyWeaponStatus::CallFunc_FindWeaponMaster_WeaponMaster' has a wrong offset!");
static_assert(offsetof(StackBEquipItemDesc_C_ApplyWeaponStatus, CallFunc_GetWeaponLevelStatusByUniqueID_ReturnValue) == 0x0002C0, "Member 'StackBEquipItemDesc_C_ApplyWeaponStatus::CallFunc_GetWeaponLevelStatusByUniqueID_ReturnValue' has a wrong offset!");
static_assert(offsetof(StackBEquipItemDesc_C_ApplyWeaponStatus, CallFunc_GetWeaponManager_IsValid) == 0x0002C4, "Member 'StackBEquipItemDesc_C_ApplyWeaponStatus::CallFunc_GetWeaponManager_IsValid' has a wrong offset!");
static_assert(offsetof(StackBEquipItemDesc_C_ApplyWeaponStatus, CallFunc_GetWeaponManager_ReturnValue) == 0x0002C8, "Member 'StackBEquipItemDesc_C_ApplyWeaponStatus::CallFunc_GetWeaponManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(StackBEquipItemDesc_C_ApplyWeaponStatus, Temp_struct_Variable) == 0x0002D0, "Member 'StackBEquipItemDesc_C_ApplyWeaponStatus::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(StackBEquipItemDesc_C_ApplyWeaponStatus, Temp_struct_Variable_1) == 0x0002E0, "Member 'StackBEquipItemDesc_C_ApplyWeaponStatus::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(StackBEquipItemDesc_C_ApplyWeaponStatus, CallFunc_CalculatedStackBWeaponParam_ReturnValue) == 0x0002F0, "Member 'StackBEquipItemDesc_C_ApplyWeaponStatus::CallFunc_CalculatedStackBWeaponParam_ReturnValue' has a wrong offset!");
static_assert(offsetof(StackBEquipItemDesc_C_ApplyWeaponStatus, CallFunc_CalculatedStackBWeaponParam_ReturnValue_1) == 0x0002F4, "Member 'StackBEquipItemDesc_C_ApplyWeaponStatus::CallFunc_CalculatedStackBWeaponParam_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StackBEquipItemDesc_C_ApplyWeaponStatus, CallFunc_Conv_IntToText_ReturnValue_1) == 0x0002F8, "Member 'StackBEquipItemDesc_C_ApplyWeaponStatus::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StackBEquipItemDesc_C_ApplyWeaponStatus, CallFunc_Conv_IntToText_ReturnValue_2) == 0x000310, "Member 'StackBEquipItemDesc_C_ApplyWeaponStatus::CallFunc_Conv_IntToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StackBEquipItemDesc_C_ApplyWeaponStatus, Temp_bool_Variable) == 0x000328, "Member 'StackBEquipItemDesc_C_ApplyWeaponStatus::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(StackBEquipItemDesc_C_ApplyWeaponStatus, K2Node_Select_Default) == 0x00032C, "Member 'StackBEquipItemDesc_C_ApplyWeaponStatus::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(StackBEquipItemDesc_C_ApplyWeaponStatus, CallFunc_Conv_IntToText_ReturnValue_3) == 0x000340, "Member 'StackBEquipItemDesc_C_ApplyWeaponStatus::CallFunc_Conv_IntToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(StackBEquipItemDesc_C_ApplyWeaponStatus, CallFunc_SetSpecialEffectText_SpecialName) == 0x000358, "Member 'StackBEquipItemDesc_C_ApplyWeaponStatus::CallFunc_SetSpecialEffectText_SpecialName' has a wrong offset!");
static_assert(offsetof(StackBEquipItemDesc_C_ApplyWeaponStatus, CallFunc_SetSpecialEffectText_SpecialValue) == 0x000368, "Member 'StackBEquipItemDesc_C_ApplyWeaponStatus::CallFunc_SetSpecialEffectText_SpecialValue' has a wrong offset!");
static_assert(offsetof(StackBEquipItemDesc_C_ApplyWeaponStatus, CallFunc_Conv_StringToText_ReturnValue) == 0x000380, "Member 'StackBEquipItemDesc_C_ApplyWeaponStatus::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(StackBEquipItemDesc_C_ApplyWeaponStatus, CallFunc_GetNameText_ReturnValue) == 0x000398, "Member 'StackBEquipItemDesc_C_ApplyWeaponStatus::CallFunc_GetNameText_ReturnValue' has a wrong offset!");
static_assert(offsetof(StackBEquipItemDesc_C_ApplyWeaponStatus, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0003A8, "Member 'StackBEquipItemDesc_C_ApplyWeaponStatus::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");

// Function StackBEquipItemDesc.StackBEquipItemDesc_C.ApplyImagineStatus
// 0x02D8 (0x02D8 - 0x0000)
struct StackBEquipItemDesc_C_ApplyImagineStatus final
{
public:
	struct FOwnItemInfo                           OwnItemInfo;                                       // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   AbilityName;                                       // 0x0118(0x0018)(Edit, BlueprintVisible)
	struct FImagineParameter                      LocalStatus;                                       // 0x0130(0x006C)(Edit, BlueprintVisible, NoDestructor)
	int32                                         ImagineLevel;                                      // 0x019C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetItemLevel_ReturnValue;                 // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindAbilityEffectMaster_bIsValid;         // 0x01A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CD8[0x3];                                     // 0x01A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAbilityEffectMasterData             CallFunc_FindAbilityEffectMaster_AbilityEffectMaster; // 0x01A8(0x0024)(NoDestructor)
	uint8                                         Pad_6CD9[0x4];                                     // 0x01CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetWeaponPerkText_ReturnValue;            // 0x01D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x01E0(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x01F8(0x0018)()
	struct FImagineParameter                      CallFunc_CalculatedStackBImagineParams_ReturnValue; // 0x0210(0x006C)(NoDestructor)
	uint8                                         Pad_6CDA[0x4];                                     // 0x027C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0280(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_2;             // 0x0298(0x0018)()
	class FString                                 CallFunc_GetNameText_ReturnValue;                  // 0x02B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x02C0(0x0018)()
};
static_assert(alignof(StackBEquipItemDesc_C_ApplyImagineStatus) == 0x000008, "Wrong alignment on StackBEquipItemDesc_C_ApplyImagineStatus");
static_assert(sizeof(StackBEquipItemDesc_C_ApplyImagineStatus) == 0x0002D8, "Wrong size on StackBEquipItemDesc_C_ApplyImagineStatus");
static_assert(offsetof(StackBEquipItemDesc_C_ApplyImagineStatus, OwnItemInfo) == 0x000000, "Member 'StackBEquipItemDesc_C_ApplyImagineStatus::OwnItemInfo' has a wrong offset!");
static_assert(offsetof(StackBEquipItemDesc_C_ApplyImagineStatus, AbilityName) == 0x000118, "Member 'StackBEquipItemDesc_C_ApplyImagineStatus::AbilityName' has a wrong offset!");
static_assert(offsetof(StackBEquipItemDesc_C_ApplyImagineStatus, LocalStatus) == 0x000130, "Member 'StackBEquipItemDesc_C_ApplyImagineStatus::LocalStatus' has a wrong offset!");
static_assert(offsetof(StackBEquipItemDesc_C_ApplyImagineStatus, ImagineLevel) == 0x00019C, "Member 'StackBEquipItemDesc_C_ApplyImagineStatus::ImagineLevel' has a wrong offset!");
static_assert(offsetof(StackBEquipItemDesc_C_ApplyImagineStatus, CallFunc_GetItemLevel_ReturnValue) == 0x0001A0, "Member 'StackBEquipItemDesc_C_ApplyImagineStatus::CallFunc_GetItemLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(StackBEquipItemDesc_C_ApplyImagineStatus, CallFunc_FindAbilityEffectMaster_bIsValid) == 0x0001A4, "Member 'StackBEquipItemDesc_C_ApplyImagineStatus::CallFunc_FindAbilityEffectMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(StackBEquipItemDesc_C_ApplyImagineStatus, CallFunc_FindAbilityEffectMaster_AbilityEffectMaster) == 0x0001A8, "Member 'StackBEquipItemDesc_C_ApplyImagineStatus::CallFunc_FindAbilityEffectMaster_AbilityEffectMaster' has a wrong offset!");
static_assert(offsetof(StackBEquipItemDesc_C_ApplyImagineStatus, CallFunc_GetWeaponPerkText_ReturnValue) == 0x0001D0, "Member 'StackBEquipItemDesc_C_ApplyImagineStatus::CallFunc_GetWeaponPerkText_ReturnValue' has a wrong offset!");
static_assert(offsetof(StackBEquipItemDesc_C_ApplyImagineStatus, CallFunc_Conv_StringToText_ReturnValue) == 0x0001E0, "Member 'StackBEquipItemDesc_C_ApplyImagineStatus::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(StackBEquipItemDesc_C_ApplyImagineStatus, CallFunc_Conv_IntToText_ReturnValue) == 0x0001F8, "Member 'StackBEquipItemDesc_C_ApplyImagineStatus::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(StackBEquipItemDesc_C_ApplyImagineStatus, CallFunc_CalculatedStackBImagineParams_ReturnValue) == 0x000210, "Member 'StackBEquipItemDesc_C_ApplyImagineStatus::CallFunc_CalculatedStackBImagineParams_ReturnValue' has a wrong offset!");
static_assert(offsetof(StackBEquipItemDesc_C_ApplyImagineStatus, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000280, "Member 'StackBEquipItemDesc_C_ApplyImagineStatus::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StackBEquipItemDesc_C_ApplyImagineStatus, CallFunc_Conv_IntToText_ReturnValue_2) == 0x000298, "Member 'StackBEquipItemDesc_C_ApplyImagineStatus::CallFunc_Conv_IntToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StackBEquipItemDesc_C_ApplyImagineStatus, CallFunc_GetNameText_ReturnValue) == 0x0002B0, "Member 'StackBEquipItemDesc_C_ApplyImagineStatus::CallFunc_GetNameText_ReturnValue' has a wrong offset!");
static_assert(offsetof(StackBEquipItemDesc_C_ApplyImagineStatus, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0002C0, "Member 'StackBEquipItemDesc_C_ApplyImagineStatus::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");

}

