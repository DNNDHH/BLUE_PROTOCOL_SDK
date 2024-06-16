#pragma once

 

// Package: CraftedWeaponLIstitem

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function CraftedWeaponLIstitem.CraftedWeaponLIstitem_C.ExecuteUbergraph_CraftedWeaponLIstitem
// 0x02C8 (0x02C8 - 0x0000)
struct CraftedWeaponLIstitem_C_ExecuteUbergraph_CraftedWeaponLIstitem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_607E[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetEquipmentBag_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Len_ReturnValue;                          // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid_1;           // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_607F[0x2];                                     // 0x001E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue_1;       // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6080[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetCharacterStorage_ReturnValue;          // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                K2Node_Select_Default;                             // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist;         // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6081[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue;       // 0x0048(0x0118)(ConstParm)
	int32                                         CallFunc_GetItemLevel_ReturnValue;                 // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetWeaponMasterData_IsExists;             // 0x0164(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6082[0x3];                                     // 0x0165(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponMasterData                    CallFunc_GetWeaponMasterData_ReturnValue;          // 0x0168(0x00B0)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0218(0x0018)()
	int32                                         CallFunc_GetLevelStatus_ReturnValue;               // 0x0230(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetAbilityMasterDataByEffectId_IsExists;  // 0x0234(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6083[0x3];                                     // 0x0235(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAbilityMasterData                   CallFunc_GetAbilityMasterDataByEffectId_ReturnValue; // 0x0238(0x0048)()
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0280(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6084[0x4];                                     // 0x0284(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0288(0x0018)()
	class FString                                 CallFunc_GetPerkName_ReturnValue;                  // 0x02A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x02B0(0x0018)()
};
static_assert(alignof(CraftedWeaponLIstitem_C_ExecuteUbergraph_CraftedWeaponLIstitem) == 0x000008, "Wrong alignment on CraftedWeaponLIstitem_C_ExecuteUbergraph_CraftedWeaponLIstitem");
static_assert(sizeof(CraftedWeaponLIstitem_C_ExecuteUbergraph_CraftedWeaponLIstitem) == 0x0002C8, "Wrong size on CraftedWeaponLIstitem_C_ExecuteUbergraph_CraftedWeaponLIstitem");
static_assert(offsetof(CraftedWeaponLIstitem_C_ExecuteUbergraph_CraftedWeaponLIstitem, EntryPoint) == 0x000000, "Member 'CraftedWeaponLIstitem_C_ExecuteUbergraph_CraftedWeaponLIstitem::EntryPoint' has a wrong offset!");
static_assert(offsetof(CraftedWeaponLIstitem_C_ExecuteUbergraph_CraftedWeaponLIstitem, Temp_bool_Variable) == 0x000004, "Member 'CraftedWeaponLIstitem_C_ExecuteUbergraph_CraftedWeaponLIstitem::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CraftedWeaponLIstitem_C_ExecuteUbergraph_CraftedWeaponLIstitem, CallFunc_GetMasterDataManager_IsValid) == 0x000005, "Member 'CraftedWeaponLIstitem_C_ExecuteUbergraph_CraftedWeaponLIstitem::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(CraftedWeaponLIstitem_C_ExecuteUbergraph_CraftedWeaponLIstitem, CallFunc_GetMasterDataManager_ReturnValue) == 0x000008, "Member 'CraftedWeaponLIstitem_C_ExecuteUbergraph_CraftedWeaponLIstitem::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftedWeaponLIstitem_C_ExecuteUbergraph_CraftedWeaponLIstitem, CallFunc_GetEquipmentBag_ReturnValue) == 0x000010, "Member 'CraftedWeaponLIstitem_C_ExecuteUbergraph_CraftedWeaponLIstitem::CallFunc_GetEquipmentBag_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftedWeaponLIstitem_C_ExecuteUbergraph_CraftedWeaponLIstitem, CallFunc_Len_ReturnValue) == 0x000018, "Member 'CraftedWeaponLIstitem_C_ExecuteUbergraph_CraftedWeaponLIstitem::CallFunc_Len_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftedWeaponLIstitem_C_ExecuteUbergraph_CraftedWeaponLIstitem, CallFunc_NotEqual_IntInt_ReturnValue) == 0x00001C, "Member 'CraftedWeaponLIstitem_C_ExecuteUbergraph_CraftedWeaponLIstitem::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftedWeaponLIstitem_C_ExecuteUbergraph_CraftedWeaponLIstitem, CallFunc_GetMasterDataManager_IsValid_1) == 0x00001D, "Member 'CraftedWeaponLIstitem_C_ExecuteUbergraph_CraftedWeaponLIstitem::CallFunc_GetMasterDataManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(CraftedWeaponLIstitem_C_ExecuteUbergraph_CraftedWeaponLIstitem, CallFunc_GetMasterDataManager_ReturnValue_1) == 0x000020, "Member 'CraftedWeaponLIstitem_C_ExecuteUbergraph_CraftedWeaponLIstitem::CallFunc_GetMasterDataManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftedWeaponLIstitem_C_ExecuteUbergraph_CraftedWeaponLIstitem, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000028, "Member 'CraftedWeaponLIstitem_C_ExecuteUbergraph_CraftedWeaponLIstitem::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftedWeaponLIstitem_C_ExecuteUbergraph_CraftedWeaponLIstitem, CallFunc_GetCharacterStorage_ReturnValue) == 0x000030, "Member 'CraftedWeaponLIstitem_C_ExecuteUbergraph_CraftedWeaponLIstitem::CallFunc_GetCharacterStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftedWeaponLIstitem_C_ExecuteUbergraph_CraftedWeaponLIstitem, K2Node_Select_Default) == 0x000038, "Member 'CraftedWeaponLIstitem_C_ExecuteUbergraph_CraftedWeaponLIstitem::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CraftedWeaponLIstitem_C_ExecuteUbergraph_CraftedWeaponLIstitem, CallFunc_BP_FindItem_ByUniqueId_bOutExist) == 0x000040, "Member 'CraftedWeaponLIstitem_C_ExecuteUbergraph_CraftedWeaponLIstitem::CallFunc_BP_FindItem_ByUniqueId_bOutExist' has a wrong offset!");
static_assert(offsetof(CraftedWeaponLIstitem_C_ExecuteUbergraph_CraftedWeaponLIstitem, CallFunc_BP_FindItem_ByUniqueId_ReturnValue) == 0x000048, "Member 'CraftedWeaponLIstitem_C_ExecuteUbergraph_CraftedWeaponLIstitem::CallFunc_BP_FindItem_ByUniqueId_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftedWeaponLIstitem_C_ExecuteUbergraph_CraftedWeaponLIstitem, CallFunc_GetItemLevel_ReturnValue) == 0x000160, "Member 'CraftedWeaponLIstitem_C_ExecuteUbergraph_CraftedWeaponLIstitem::CallFunc_GetItemLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftedWeaponLIstitem_C_ExecuteUbergraph_CraftedWeaponLIstitem, CallFunc_GetWeaponMasterData_IsExists) == 0x000164, "Member 'CraftedWeaponLIstitem_C_ExecuteUbergraph_CraftedWeaponLIstitem::CallFunc_GetWeaponMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(CraftedWeaponLIstitem_C_ExecuteUbergraph_CraftedWeaponLIstitem, CallFunc_GetWeaponMasterData_ReturnValue) == 0x000168, "Member 'CraftedWeaponLIstitem_C_ExecuteUbergraph_CraftedWeaponLIstitem::CallFunc_GetWeaponMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftedWeaponLIstitem_C_ExecuteUbergraph_CraftedWeaponLIstitem, CallFunc_Conv_IntToText_ReturnValue) == 0x000218, "Member 'CraftedWeaponLIstitem_C_ExecuteUbergraph_CraftedWeaponLIstitem::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftedWeaponLIstitem_C_ExecuteUbergraph_CraftedWeaponLIstitem, CallFunc_GetLevelStatus_ReturnValue) == 0x000230, "Member 'CraftedWeaponLIstitem_C_ExecuteUbergraph_CraftedWeaponLIstitem::CallFunc_GetLevelStatus_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftedWeaponLIstitem_C_ExecuteUbergraph_CraftedWeaponLIstitem, CallFunc_GetAbilityMasterDataByEffectId_IsExists) == 0x000234, "Member 'CraftedWeaponLIstitem_C_ExecuteUbergraph_CraftedWeaponLIstitem::CallFunc_GetAbilityMasterDataByEffectId_IsExists' has a wrong offset!");
static_assert(offsetof(CraftedWeaponLIstitem_C_ExecuteUbergraph_CraftedWeaponLIstitem, CallFunc_GetAbilityMasterDataByEffectId_ReturnValue) == 0x000238, "Member 'CraftedWeaponLIstitem_C_ExecuteUbergraph_CraftedWeaponLIstitem::CallFunc_GetAbilityMasterDataByEffectId_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftedWeaponLIstitem_C_ExecuteUbergraph_CraftedWeaponLIstitem, CallFunc_Add_IntInt_ReturnValue) == 0x000280, "Member 'CraftedWeaponLIstitem_C_ExecuteUbergraph_CraftedWeaponLIstitem::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftedWeaponLIstitem_C_ExecuteUbergraph_CraftedWeaponLIstitem, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000288, "Member 'CraftedWeaponLIstitem_C_ExecuteUbergraph_CraftedWeaponLIstitem::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftedWeaponLIstitem_C_ExecuteUbergraph_CraftedWeaponLIstitem, CallFunc_GetPerkName_ReturnValue) == 0x0002A0, "Member 'CraftedWeaponLIstitem_C_ExecuteUbergraph_CraftedWeaponLIstitem::CallFunc_GetPerkName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftedWeaponLIstitem_C_ExecuteUbergraph_CraftedWeaponLIstitem, CallFunc_Conv_StringToText_ReturnValue) == 0x0002B0, "Member 'CraftedWeaponLIstitem_C_ExecuteUbergraph_CraftedWeaponLIstitem::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function CraftedWeaponLIstitem.CraftedWeaponLIstitem_C.Update All Text Critical Color
// 0x0080 (0x0080 - 0x0000)
struct CraftedWeaponLIstitem_C_Update_All_Text_Critical_Color final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6085[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0030(0x0028)()
	struct FSlateColor                            K2Node_Select_Default;                             // 0x0058(0x0028)()
};
static_assert(alignof(CraftedWeaponLIstitem_C_Update_All_Text_Critical_Color) == 0x000008, "Wrong alignment on CraftedWeaponLIstitem_C_Update_All_Text_Critical_Color");
static_assert(sizeof(CraftedWeaponLIstitem_C_Update_All_Text_Critical_Color) == 0x000080, "Wrong size on CraftedWeaponLIstitem_C_Update_All_Text_Critical_Color");
static_assert(offsetof(CraftedWeaponLIstitem_C_Update_All_Text_Critical_Color, Temp_bool_Variable) == 0x000000, "Member 'CraftedWeaponLIstitem_C_Update_All_Text_Critical_Color::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CraftedWeaponLIstitem_C_Update_All_Text_Critical_Color, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'CraftedWeaponLIstitem_C_Update_All_Text_Critical_Color::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(CraftedWeaponLIstitem_C_Update_All_Text_Critical_Color, K2Node_MakeStruct_SlateColor_1) == 0x000030, "Member 'CraftedWeaponLIstitem_C_Update_All_Text_Critical_Color::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(CraftedWeaponLIstitem_C_Update_All_Text_Critical_Color, K2Node_Select_Default) == 0x000058, "Member 'CraftedWeaponLIstitem_C_Update_All_Text_Critical_Color::K2Node_Select_Default' has a wrong offset!");

}

