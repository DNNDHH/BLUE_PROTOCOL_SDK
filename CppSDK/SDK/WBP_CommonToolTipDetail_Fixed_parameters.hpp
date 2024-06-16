#pragma once

 

// Package: WBP_CommonToolTipDetail_Fixed

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WBP_CommonToolTipDetail_Fixed.WBP_CommonToolTipDetail_Fixed_C.SetAbilityNameText
// 0x0020 (0x0020 - 0x0000)
struct WBP_CommonToolTipDetail_Fixed_C_SetAbilityNameText final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_CommonToolTipDetail_Fixed_C_SetAbilityNameText) == 0x000008, "Wrong alignment on WBP_CommonToolTipDetail_Fixed_C_SetAbilityNameText");
static_assert(sizeof(WBP_CommonToolTipDetail_Fixed_C_SetAbilityNameText) == 0x000020, "Wrong size on WBP_CommonToolTipDetail_Fixed_C_SetAbilityNameText");
static_assert(offsetof(WBP_CommonToolTipDetail_Fixed_C_SetAbilityNameText, InText) == 0x000000, "Member 'WBP_CommonToolTipDetail_Fixed_C_SetAbilityNameText::InText' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Fixed_C_SetAbilityNameText, CallFunc_TextIsEmpty_ReturnValue) == 0x000018, "Member 'WBP_CommonToolTipDetail_Fixed_C_SetAbilityNameText::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");

// Function WBP_CommonToolTipDetail_Fixed.WBP_CommonToolTipDetail_Fixed_C.SetAbilityDescText
// 0x0020 (0x0020 - 0x0000)
struct WBP_CommonToolTipDetail_Fixed_C_SetAbilityDescText final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_CommonToolTipDetail_Fixed_C_SetAbilityDescText) == 0x000008, "Wrong alignment on WBP_CommonToolTipDetail_Fixed_C_SetAbilityDescText");
static_assert(sizeof(WBP_CommonToolTipDetail_Fixed_C_SetAbilityDescText) == 0x000020, "Wrong size on WBP_CommonToolTipDetail_Fixed_C_SetAbilityDescText");
static_assert(offsetof(WBP_CommonToolTipDetail_Fixed_C_SetAbilityDescText, InText) == 0x000000, "Member 'WBP_CommonToolTipDetail_Fixed_C_SetAbilityDescText::InText' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Fixed_C_SetAbilityDescText, CallFunc_TextIsEmpty_ReturnValue) == 0x000018, "Member 'WBP_CommonToolTipDetail_Fixed_C_SetAbilityDescText::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");

// Function WBP_CommonToolTipDetail_Fixed.WBP_CommonToolTipDetail_Fixed_C.SetAbilityPerkID
// 0x00B0 (0x00B0 - 0x0000)
struct WBP_CommonToolTipDetail_Fixed_C_SetAbilityPerkID final
{
public:
	int32                                         PerkId;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E0A[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetAbilityMasterDataByEffectId_IsExists;  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E0B[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAbilityMasterData                   CallFunc_GetAbilityMasterDataByEffectId_ReturnValue; // 0x0018(0x0048)()
	class FString                                 CallFunc_GetPerkName_ReturnValue;                  // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPerkName_ReturnValue_1;                // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0080(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0098(0x0018)()
};
static_assert(alignof(WBP_CommonToolTipDetail_Fixed_C_SetAbilityPerkID) == 0x000008, "Wrong alignment on WBP_CommonToolTipDetail_Fixed_C_SetAbilityPerkID");
static_assert(sizeof(WBP_CommonToolTipDetail_Fixed_C_SetAbilityPerkID) == 0x0000B0, "Wrong size on WBP_CommonToolTipDetail_Fixed_C_SetAbilityPerkID");
static_assert(offsetof(WBP_CommonToolTipDetail_Fixed_C_SetAbilityPerkID, PerkId) == 0x000000, "Member 'WBP_CommonToolTipDetail_Fixed_C_SetAbilityPerkID::PerkId' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Fixed_C_SetAbilityPerkID, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000004, "Member 'WBP_CommonToolTipDetail_Fixed_C_SetAbilityPerkID::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Fixed_C_SetAbilityPerkID, CallFunc_GetMasterDataManager_IsValid) == 0x000005, "Member 'WBP_CommonToolTipDetail_Fixed_C_SetAbilityPerkID::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Fixed_C_SetAbilityPerkID, CallFunc_GetMasterDataManager_ReturnValue) == 0x000008, "Member 'WBP_CommonToolTipDetail_Fixed_C_SetAbilityPerkID::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Fixed_C_SetAbilityPerkID, CallFunc_GetAbilityMasterDataByEffectId_IsExists) == 0x000010, "Member 'WBP_CommonToolTipDetail_Fixed_C_SetAbilityPerkID::CallFunc_GetAbilityMasterDataByEffectId_IsExists' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Fixed_C_SetAbilityPerkID, CallFunc_GetAbilityMasterDataByEffectId_ReturnValue) == 0x000018, "Member 'WBP_CommonToolTipDetail_Fixed_C_SetAbilityPerkID::CallFunc_GetAbilityMasterDataByEffectId_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Fixed_C_SetAbilityPerkID, CallFunc_GetPerkName_ReturnValue) == 0x000060, "Member 'WBP_CommonToolTipDetail_Fixed_C_SetAbilityPerkID::CallFunc_GetPerkName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Fixed_C_SetAbilityPerkID, CallFunc_GetPerkName_ReturnValue_1) == 0x000070, "Member 'WBP_CommonToolTipDetail_Fixed_C_SetAbilityPerkID::CallFunc_GetPerkName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Fixed_C_SetAbilityPerkID, CallFunc_Conv_StringToText_ReturnValue) == 0x000080, "Member 'WBP_CommonToolTipDetail_Fixed_C_SetAbilityPerkID::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Fixed_C_SetAbilityPerkID, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000098, "Member 'WBP_CommonToolTipDetail_Fixed_C_SetAbilityPerkID::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");

// Function WBP_CommonToolTipDetail_Fixed.WBP_CommonToolTipDetail_Fixed_C.SetWeaponPerkData
// 0x001C (0x001C - 0x0000)
struct WBP_CommonToolTipDetail_Fixed_C_SetWeaponPerkData final
{
public:
	struct FSBCharacterWeaponPerkData             SBCharacterWeaponPerkData;                         // 0x0000(0x001C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};
static_assert(alignof(WBP_CommonToolTipDetail_Fixed_C_SetWeaponPerkData) == 0x000004, "Wrong alignment on WBP_CommonToolTipDetail_Fixed_C_SetWeaponPerkData");
static_assert(sizeof(WBP_CommonToolTipDetail_Fixed_C_SetWeaponPerkData) == 0x00001C, "Wrong size on WBP_CommonToolTipDetail_Fixed_C_SetWeaponPerkData");
static_assert(offsetof(WBP_CommonToolTipDetail_Fixed_C_SetWeaponPerkData, SBCharacterWeaponPerkData) == 0x000000, "Member 'WBP_CommonToolTipDetail_Fixed_C_SetWeaponPerkData::SBCharacterWeaponPerkData' has a wrong offset!");

// Function WBP_CommonToolTipDetail_Fixed.WBP_CommonToolTipDetail_Fixed_C.SetAsWeaponSkinUnattached
// 0x0058 (0x0058 - 0x0000)
struct WBP_CommonToolTipDetail_Fixed_C_SetAsWeaponSkinUnattached final
{
public:
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_1;     // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0038(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0053(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_CommonToolTipDetail_Fixed_C_SetAsWeaponSkinUnattached) == 0x000008, "Wrong alignment on WBP_CommonToolTipDetail_Fixed_C_SetAsWeaponSkinUnattached");
static_assert(sizeof(WBP_CommonToolTipDetail_Fixed_C_SetAsWeaponSkinUnattached) == 0x000058, "Wrong size on WBP_CommonToolTipDetail_Fixed_C_SetAsWeaponSkinUnattached");
static_assert(offsetof(WBP_CommonToolTipDetail_Fixed_C_SetAsWeaponSkinUnattached, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000000, "Member 'WBP_CommonToolTipDetail_Fixed_C_SetAsWeaponSkinUnattached::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Fixed_C_SetAsWeaponSkinUnattached, CallFunc_GetTextFromAssetByName_ReturnValue_1) == 0x000010, "Member 'WBP_CommonToolTipDetail_Fixed_C_SetAsWeaponSkinUnattached::CallFunc_GetTextFromAssetByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Fixed_C_SetAsWeaponSkinUnattached, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'WBP_CommonToolTipDetail_Fixed_C_SetAsWeaponSkinUnattached::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Fixed_C_SetAsWeaponSkinUnattached, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000038, "Member 'WBP_CommonToolTipDetail_Fixed_C_SetAsWeaponSkinUnattached::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Fixed_C_SetAsWeaponSkinUnattached, CallFunc_IsValid_ReturnValue) == 0x000050, "Member 'WBP_CommonToolTipDetail_Fixed_C_SetAsWeaponSkinUnattached::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Fixed_C_SetAsWeaponSkinUnattached, CallFunc_IsValid_ReturnValue_1) == 0x000051, "Member 'WBP_CommonToolTipDetail_Fixed_C_SetAsWeaponSkinUnattached::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Fixed_C_SetAsWeaponSkinUnattached, CallFunc_IsValid_ReturnValue_2) == 0x000052, "Member 'WBP_CommonToolTipDetail_Fixed_C_SetAsWeaponSkinUnattached::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Fixed_C_SetAsWeaponSkinUnattached, CallFunc_IsValid_ReturnValue_3) == 0x000053, "Member 'WBP_CommonToolTipDetail_Fixed_C_SetAsWeaponSkinUnattached::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");

// Function WBP_CommonToolTipDetail_Fixed.WBP_CommonToolTipDetail_Fixed_C.SetNameAndDescText
// 0x0030 (0x0030 - 0x0000)
struct WBP_CommonToolTipDetail_Fixed_C_SetNameAndDescText final
{
public:
	class FText                                   InName;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   InDesc;                                            // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_CommonToolTipDetail_Fixed_C_SetNameAndDescText) == 0x000008, "Wrong alignment on WBP_CommonToolTipDetail_Fixed_C_SetNameAndDescText");
static_assert(sizeof(WBP_CommonToolTipDetail_Fixed_C_SetNameAndDescText) == 0x000030, "Wrong size on WBP_CommonToolTipDetail_Fixed_C_SetNameAndDescText");
static_assert(offsetof(WBP_CommonToolTipDetail_Fixed_C_SetNameAndDescText, InName) == 0x000000, "Member 'WBP_CommonToolTipDetail_Fixed_C_SetNameAndDescText::InName' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Fixed_C_SetNameAndDescText, InDesc) == 0x000018, "Member 'WBP_CommonToolTipDetail_Fixed_C_SetNameAndDescText::InDesc' has a wrong offset!");

// Function WBP_CommonToolTipDetail_Fixed.WBP_CommonToolTipDetail_Fixed_C.SetNameAndTypeText
// 0x0030 (0x0030 - 0x0000)
struct WBP_CommonToolTipDetail_Fixed_C_SetNameAndTypeText final
{
public:
	class FText                                   InName;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   Type;                                              // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_CommonToolTipDetail_Fixed_C_SetNameAndTypeText) == 0x000008, "Wrong alignment on WBP_CommonToolTipDetail_Fixed_C_SetNameAndTypeText");
static_assert(sizeof(WBP_CommonToolTipDetail_Fixed_C_SetNameAndTypeText) == 0x000030, "Wrong size on WBP_CommonToolTipDetail_Fixed_C_SetNameAndTypeText");
static_assert(offsetof(WBP_CommonToolTipDetail_Fixed_C_SetNameAndTypeText, InName) == 0x000000, "Member 'WBP_CommonToolTipDetail_Fixed_C_SetNameAndTypeText::InName' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Fixed_C_SetNameAndTypeText, Type) == 0x000018, "Member 'WBP_CommonToolTipDetail_Fixed_C_SetNameAndTypeText::Type' has a wrong offset!");

// Function WBP_CommonToolTipDetail_Fixed.WBP_CommonToolTipDetail_Fixed_C.SetNameAndTypeAndDescText
// 0x0048 (0x0048 - 0x0000)
struct WBP_CommonToolTipDetail_Fixed_C_SetNameAndTypeAndDescText final
{
public:
	class FText                                   InName;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   Type;                                              // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   InDesc;                                            // 0x0030(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_CommonToolTipDetail_Fixed_C_SetNameAndTypeAndDescText) == 0x000008, "Wrong alignment on WBP_CommonToolTipDetail_Fixed_C_SetNameAndTypeAndDescText");
static_assert(sizeof(WBP_CommonToolTipDetail_Fixed_C_SetNameAndTypeAndDescText) == 0x000048, "Wrong size on WBP_CommonToolTipDetail_Fixed_C_SetNameAndTypeAndDescText");
static_assert(offsetof(WBP_CommonToolTipDetail_Fixed_C_SetNameAndTypeAndDescText, InName) == 0x000000, "Member 'WBP_CommonToolTipDetail_Fixed_C_SetNameAndTypeAndDescText::InName' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Fixed_C_SetNameAndTypeAndDescText, Type) == 0x000018, "Member 'WBP_CommonToolTipDetail_Fixed_C_SetNameAndTypeAndDescText::Type' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Fixed_C_SetNameAndTypeAndDescText, InDesc) == 0x000030, "Member 'WBP_CommonToolTipDetail_Fixed_C_SetNameAndTypeAndDescText::InDesc' has a wrong offset!");

// Function WBP_CommonToolTipDetail_Fixed.WBP_CommonToolTipDetail_Fixed_C.Set Visible Stack
// 0x0005 (0x0005 - 0x0000)
struct WBP_CommonToolTipDetail_Fixed_C_Set_Visible_Stack final
{
public:
	bool                                          Visible;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CommonToolTipDetail_Fixed_C_Set_Visible_Stack) == 0x000001, "Wrong alignment on WBP_CommonToolTipDetail_Fixed_C_Set_Visible_Stack");
static_assert(sizeof(WBP_CommonToolTipDetail_Fixed_C_Set_Visible_Stack) == 0x000005, "Wrong size on WBP_CommonToolTipDetail_Fixed_C_Set_Visible_Stack");
static_assert(offsetof(WBP_CommonToolTipDetail_Fixed_C_Set_Visible_Stack, Visible) == 0x000000, "Member 'WBP_CommonToolTipDetail_Fixed_C_Set_Visible_Stack::Visible' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Fixed_C_Set_Visible_Stack, CallFunc_MakeLiteralByte_ReturnValue) == 0x000001, "Member 'WBP_CommonToolTipDetail_Fixed_C_Set_Visible_Stack::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Fixed_C_Set_Visible_Stack, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000002, "Member 'WBP_CommonToolTipDetail_Fixed_C_Set_Visible_Stack::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Fixed_C_Set_Visible_Stack, Temp_bool_Variable) == 0x000003, "Member 'WBP_CommonToolTipDetail_Fixed_C_Set_Visible_Stack::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Fixed_C_Set_Visible_Stack, K2Node_Select_Default) == 0x000004, "Member 'WBP_CommonToolTipDetail_Fixed_C_Set_Visible_Stack::K2Node_Select_Default' has a wrong offset!");

// Function WBP_CommonToolTipDetail_Fixed.WBP_CommonToolTipDetail_Fixed_C.Set Stack Imagine Mode
// 0x0198 (0x0198 - 0x0000)
struct WBP_CommonToolTipDetail_Fixed_C_Set_Stack_Imagine_Mode final
{
public:
	class FText                                   InName;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   Type1;                                             // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   Desc1;                                             // 0x0030(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   Type2;                                             // 0x0048(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   Desc2;                                             // 0x0060(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FOwnItemInfo                           Info;                                              // 0x0078(0x0118)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          StackBEffectiveDisplay;                            // 0x0190(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0191(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Set_Stack_BIcon_One_Item_Visible;         // 0x0192(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0193(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_CommonToolTipDetail_Fixed_C_Set_Stack_Imagine_Mode) == 0x000008, "Wrong alignment on WBP_CommonToolTipDetail_Fixed_C_Set_Stack_Imagine_Mode");
static_assert(sizeof(WBP_CommonToolTipDetail_Fixed_C_Set_Stack_Imagine_Mode) == 0x000198, "Wrong size on WBP_CommonToolTipDetail_Fixed_C_Set_Stack_Imagine_Mode");
static_assert(offsetof(WBP_CommonToolTipDetail_Fixed_C_Set_Stack_Imagine_Mode, InName) == 0x000000, "Member 'WBP_CommonToolTipDetail_Fixed_C_Set_Stack_Imagine_Mode::InName' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Fixed_C_Set_Stack_Imagine_Mode, Type1) == 0x000018, "Member 'WBP_CommonToolTipDetail_Fixed_C_Set_Stack_Imagine_Mode::Type1' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Fixed_C_Set_Stack_Imagine_Mode, Desc1) == 0x000030, "Member 'WBP_CommonToolTipDetail_Fixed_C_Set_Stack_Imagine_Mode::Desc1' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Fixed_C_Set_Stack_Imagine_Mode, Type2) == 0x000048, "Member 'WBP_CommonToolTipDetail_Fixed_C_Set_Stack_Imagine_Mode::Type2' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Fixed_C_Set_Stack_Imagine_Mode, Desc2) == 0x000060, "Member 'WBP_CommonToolTipDetail_Fixed_C_Set_Stack_Imagine_Mode::Desc2' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Fixed_C_Set_Stack_Imagine_Mode, Info) == 0x000078, "Member 'WBP_CommonToolTipDetail_Fixed_C_Set_Stack_Imagine_Mode::Info' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Fixed_C_Set_Stack_Imagine_Mode, StackBEffectiveDisplay) == 0x000190, "Member 'WBP_CommonToolTipDetail_Fixed_C_Set_Stack_Imagine_Mode::StackBEffectiveDisplay' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Fixed_C_Set_Stack_Imagine_Mode, CallFunc_Greater_IntInt_ReturnValue) == 0x000191, "Member 'WBP_CommonToolTipDetail_Fixed_C_Set_Stack_Imagine_Mode::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Fixed_C_Set_Stack_Imagine_Mode, CallFunc_Set_Stack_BIcon_One_Item_Visible) == 0x000192, "Member 'WBP_CommonToolTipDetail_Fixed_C_Set_Stack_Imagine_Mode::CallFunc_Set_Stack_BIcon_One_Item_Visible' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Fixed_C_Set_Stack_Imagine_Mode, CallFunc_BooleanAND_ReturnValue) == 0x000193, "Member 'WBP_CommonToolTipDetail_Fixed_C_Set_Stack_Imagine_Mode::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

}

