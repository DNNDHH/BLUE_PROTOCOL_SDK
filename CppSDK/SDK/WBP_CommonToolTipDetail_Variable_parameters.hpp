#pragma once

 

// Package: WBP_CommonToolTipDetail_Variable

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WBP_CommonToolTipDetail_Variable.WBP_CommonToolTipDetail_Variable_C.SetAbilityNameText
// 0x0020 (0x0020 - 0x0000)
struct WBP_CommonToolTipDetail_Variable_C_SetAbilityNameText final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_CommonToolTipDetail_Variable_C_SetAbilityNameText) == 0x000008, "Wrong alignment on WBP_CommonToolTipDetail_Variable_C_SetAbilityNameText");
static_assert(sizeof(WBP_CommonToolTipDetail_Variable_C_SetAbilityNameText) == 0x000020, "Wrong size on WBP_CommonToolTipDetail_Variable_C_SetAbilityNameText");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetAbilityNameText, InText) == 0x000000, "Member 'WBP_CommonToolTipDetail_Variable_C_SetAbilityNameText::InText' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetAbilityNameText, CallFunc_TextIsEmpty_ReturnValue) == 0x000018, "Member 'WBP_CommonToolTipDetail_Variable_C_SetAbilityNameText::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");

// Function WBP_CommonToolTipDetail_Variable.WBP_CommonToolTipDetail_Variable_C.SetAbilityDescText
// 0x0020 (0x0020 - 0x0000)
struct WBP_CommonToolTipDetail_Variable_C_SetAbilityDescText final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_CommonToolTipDetail_Variable_C_SetAbilityDescText) == 0x000008, "Wrong alignment on WBP_CommonToolTipDetail_Variable_C_SetAbilityDescText");
static_assert(sizeof(WBP_CommonToolTipDetail_Variable_C_SetAbilityDescText) == 0x000020, "Wrong size on WBP_CommonToolTipDetail_Variable_C_SetAbilityDescText");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetAbilityDescText, InText) == 0x000000, "Member 'WBP_CommonToolTipDetail_Variable_C_SetAbilityDescText::InText' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetAbilityDescText, CallFunc_TextIsEmpty_ReturnValue) == 0x000018, "Member 'WBP_CommonToolTipDetail_Variable_C_SetAbilityDescText::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");

// Function WBP_CommonToolTipDetail_Variable.WBP_CommonToolTipDetail_Variable_C.SetAbilityPerkID
// 0x00B0 (0x00B0 - 0x0000)
struct WBP_CommonToolTipDetail_Variable_C_SetAbilityPerkID final
{
public:
	int32                                         PerkId;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9436[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetAbilityMasterDataByEffectId_IsExists;  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9437[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAbilityMasterData                   CallFunc_GetAbilityMasterDataByEffectId_ReturnValue; // 0x0018(0x0048)()
	class FString                                 CallFunc_GetPerkName_ReturnValue;                  // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPerkName_ReturnValue_1;                // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0080(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0098(0x0018)()
};
static_assert(alignof(WBP_CommonToolTipDetail_Variable_C_SetAbilityPerkID) == 0x000008, "Wrong alignment on WBP_CommonToolTipDetail_Variable_C_SetAbilityPerkID");
static_assert(sizeof(WBP_CommonToolTipDetail_Variable_C_SetAbilityPerkID) == 0x0000B0, "Wrong size on WBP_CommonToolTipDetail_Variable_C_SetAbilityPerkID");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetAbilityPerkID, PerkId) == 0x000000, "Member 'WBP_CommonToolTipDetail_Variable_C_SetAbilityPerkID::PerkId' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetAbilityPerkID, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000004, "Member 'WBP_CommonToolTipDetail_Variable_C_SetAbilityPerkID::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetAbilityPerkID, CallFunc_GetMasterDataManager_IsValid) == 0x000005, "Member 'WBP_CommonToolTipDetail_Variable_C_SetAbilityPerkID::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetAbilityPerkID, CallFunc_GetMasterDataManager_ReturnValue) == 0x000008, "Member 'WBP_CommonToolTipDetail_Variable_C_SetAbilityPerkID::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetAbilityPerkID, CallFunc_GetAbilityMasterDataByEffectId_IsExists) == 0x000010, "Member 'WBP_CommonToolTipDetail_Variable_C_SetAbilityPerkID::CallFunc_GetAbilityMasterDataByEffectId_IsExists' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetAbilityPerkID, CallFunc_GetAbilityMasterDataByEffectId_ReturnValue) == 0x000018, "Member 'WBP_CommonToolTipDetail_Variable_C_SetAbilityPerkID::CallFunc_GetAbilityMasterDataByEffectId_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetAbilityPerkID, CallFunc_GetPerkName_ReturnValue) == 0x000060, "Member 'WBP_CommonToolTipDetail_Variable_C_SetAbilityPerkID::CallFunc_GetPerkName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetAbilityPerkID, CallFunc_GetPerkName_ReturnValue_1) == 0x000070, "Member 'WBP_CommonToolTipDetail_Variable_C_SetAbilityPerkID::CallFunc_GetPerkName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetAbilityPerkID, CallFunc_Conv_StringToText_ReturnValue) == 0x000080, "Member 'WBP_CommonToolTipDetail_Variable_C_SetAbilityPerkID::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetAbilityPerkID, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000098, "Member 'WBP_CommonToolTipDetail_Variable_C_SetAbilityPerkID::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");

// Function WBP_CommonToolTipDetail_Variable.WBP_CommonToolTipDetail_Variable_C.SetWeaponPerkData
// 0x001C (0x001C - 0x0000)
struct WBP_CommonToolTipDetail_Variable_C_SetWeaponPerkData final
{
public:
	struct FSBCharacterWeaponPerkData             SBCharacterWeaponPerkData;                         // 0x0000(0x001C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};
static_assert(alignof(WBP_CommonToolTipDetail_Variable_C_SetWeaponPerkData) == 0x000004, "Wrong alignment on WBP_CommonToolTipDetail_Variable_C_SetWeaponPerkData");
static_assert(sizeof(WBP_CommonToolTipDetail_Variable_C_SetWeaponPerkData) == 0x00001C, "Wrong size on WBP_CommonToolTipDetail_Variable_C_SetWeaponPerkData");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetWeaponPerkData, SBCharacterWeaponPerkData) == 0x000000, "Member 'WBP_CommonToolTipDetail_Variable_C_SetWeaponPerkData::SBCharacterWeaponPerkData' has a wrong offset!");

// Function WBP_CommonToolTipDetail_Variable.WBP_CommonToolTipDetail_Variable_C.SetNameAndTypeText
// 0x0030 (0x0030 - 0x0000)
struct WBP_CommonToolTipDetail_Variable_C_SetNameAndTypeText final
{
public:
	class FText                                   InName;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   InType;                                            // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_CommonToolTipDetail_Variable_C_SetNameAndTypeText) == 0x000008, "Wrong alignment on WBP_CommonToolTipDetail_Variable_C_SetNameAndTypeText");
static_assert(sizeof(WBP_CommonToolTipDetail_Variable_C_SetNameAndTypeText) == 0x000030, "Wrong size on WBP_CommonToolTipDetail_Variable_C_SetNameAndTypeText");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetNameAndTypeText, InName) == 0x000000, "Member 'WBP_CommonToolTipDetail_Variable_C_SetNameAndTypeText::InName' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetNameAndTypeText, InType) == 0x000018, "Member 'WBP_CommonToolTipDetail_Variable_C_SetNameAndTypeText::InType' has a wrong offset!");

// Function WBP_CommonToolTipDetail_Variable.WBP_CommonToolTipDetail_Variable_C.SetNameAndDescText
// 0x0030 (0x0030 - 0x0000)
struct WBP_CommonToolTipDetail_Variable_C_SetNameAndDescText final
{
public:
	class FText                                   InName;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   InDesc;                                            // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_CommonToolTipDetail_Variable_C_SetNameAndDescText) == 0x000008, "Wrong alignment on WBP_CommonToolTipDetail_Variable_C_SetNameAndDescText");
static_assert(sizeof(WBP_CommonToolTipDetail_Variable_C_SetNameAndDescText) == 0x000030, "Wrong size on WBP_CommonToolTipDetail_Variable_C_SetNameAndDescText");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetNameAndDescText, InName) == 0x000000, "Member 'WBP_CommonToolTipDetail_Variable_C_SetNameAndDescText::InName' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetNameAndDescText, InDesc) == 0x000018, "Member 'WBP_CommonToolTipDetail_Variable_C_SetNameAndDescText::InDesc' has a wrong offset!");

// Function WBP_CommonToolTipDetail_Variable.WBP_CommonToolTipDetail_Variable_C.SetNameAndTypeAndDescText
// 0x0048 (0x0048 - 0x0000)
struct WBP_CommonToolTipDetail_Variable_C_SetNameAndTypeAndDescText final
{
public:
	class FText                                   InName;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   InType;                                            // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   InDesc;                                            // 0x0030(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_CommonToolTipDetail_Variable_C_SetNameAndTypeAndDescText) == 0x000008, "Wrong alignment on WBP_CommonToolTipDetail_Variable_C_SetNameAndTypeAndDescText");
static_assert(sizeof(WBP_CommonToolTipDetail_Variable_C_SetNameAndTypeAndDescText) == 0x000048, "Wrong size on WBP_CommonToolTipDetail_Variable_C_SetNameAndTypeAndDescText");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetNameAndTypeAndDescText, InName) == 0x000000, "Member 'WBP_CommonToolTipDetail_Variable_C_SetNameAndTypeAndDescText::InName' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetNameAndTypeAndDescText, InType) == 0x000018, "Member 'WBP_CommonToolTipDetail_Variable_C_SetNameAndTypeAndDescText::InType' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetNameAndTypeAndDescText, InDesc) == 0x000030, "Member 'WBP_CommonToolTipDetail_Variable_C_SetNameAndTypeAndDescText::InDesc' has a wrong offset!");

// Function WBP_CommonToolTipDetail_Variable.WBP_CommonToolTipDetail_Variable_C.SetType
// 0x00A8 (0x00A8 - 0x0000)
struct WBP_CommonToolTipDetail_Variable_C_SetType final
{
public:
	class FText                                   InTypeText;                                        // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0028(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0068(0x0018)()
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0080(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0090(0x0018)()
};
static_assert(alignof(WBP_CommonToolTipDetail_Variable_C_SetType) == 0x000008, "Wrong alignment on WBP_CommonToolTipDetail_Variable_C_SetType");
static_assert(sizeof(WBP_CommonToolTipDetail_Variable_C_SetType) == 0x0000A8, "Wrong size on WBP_CommonToolTipDetail_Variable_C_SetType");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetType, InTypeText) == 0x000000, "Member 'WBP_CommonToolTipDetail_Variable_C_SetType::InTypeText' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetType, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000018, "Member 'WBP_CommonToolTipDetail_Variable_C_SetType::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetType, K2Node_MakeStruct_FormatArgumentData) == 0x000028, "Member 'WBP_CommonToolTipDetail_Variable_C_SetType::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetType, CallFunc_Conv_StringToText_ReturnValue) == 0x000068, "Member 'WBP_CommonToolTipDetail_Variable_C_SetType::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetType, K2Node_MakeArray_Array) == 0x000080, "Member 'WBP_CommonToolTipDetail_Variable_C_SetType::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetType, CallFunc_Format_ReturnValue) == 0x000090, "Member 'WBP_CommonToolTipDetail_Variable_C_SetType::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function WBP_CommonToolTipDetail_Variable.WBP_CommonToolTipDetail_Variable_C.SetNameAndDescAndDateTime
// 0x0050 (0x0050 - 0x0000)
struct WBP_CommonToolTipDetail_Variable_C_SetNameAndDescAndDateTime final
{
public:
	class FText                                   Param_Name;                                        // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   Desc;                                              // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FDateTime                              DateTime;                                          // 0x0030(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          bHideIfMinValue;                                   // 0x0038(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x003B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9438[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_DateTimeMinValue_ReturnValue;             // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_DateTimeDateTime_ReturnValue;  // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x004B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CommonToolTipDetail_Variable_C_SetNameAndDescAndDateTime) == 0x000008, "Wrong alignment on WBP_CommonToolTipDetail_Variable_C_SetNameAndDescAndDateTime");
static_assert(sizeof(WBP_CommonToolTipDetail_Variable_C_SetNameAndDescAndDateTime) == 0x000050, "Wrong size on WBP_CommonToolTipDetail_Variable_C_SetNameAndDescAndDateTime");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetNameAndDescAndDateTime, Param_Name) == 0x000000, "Member 'WBP_CommonToolTipDetail_Variable_C_SetNameAndDescAndDateTime::Param_Name' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetNameAndDescAndDateTime, Desc) == 0x000018, "Member 'WBP_CommonToolTipDetail_Variable_C_SetNameAndDescAndDateTime::Desc' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetNameAndDescAndDateTime, DateTime) == 0x000030, "Member 'WBP_CommonToolTipDetail_Variable_C_SetNameAndDescAndDateTime::DateTime' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetNameAndDescAndDateTime, bHideIfMinValue) == 0x000038, "Member 'WBP_CommonToolTipDetail_Variable_C_SetNameAndDescAndDateTime::bHideIfMinValue' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetNameAndDescAndDateTime, CallFunc_MakeLiteralByte_ReturnValue) == 0x000039, "Member 'WBP_CommonToolTipDetail_Variable_C_SetNameAndDescAndDateTime::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetNameAndDescAndDateTime, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x00003A, "Member 'WBP_CommonToolTipDetail_Variable_C_SetNameAndDescAndDateTime::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetNameAndDescAndDateTime, Temp_bool_Variable) == 0x00003B, "Member 'WBP_CommonToolTipDetail_Variable_C_SetNameAndDescAndDateTime::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetNameAndDescAndDateTime, CallFunc_DateTimeMinValue_ReturnValue) == 0x000040, "Member 'WBP_CommonToolTipDetail_Variable_C_SetNameAndDescAndDateTime::CallFunc_DateTimeMinValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetNameAndDescAndDateTime, CallFunc_EqualEqual_DateTimeDateTime_ReturnValue) == 0x000048, "Member 'WBP_CommonToolTipDetail_Variable_C_SetNameAndDescAndDateTime::CallFunc_EqualEqual_DateTimeDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetNameAndDescAndDateTime, CallFunc_BooleanAND_ReturnValue) == 0x000049, "Member 'WBP_CommonToolTipDetail_Variable_C_SetNameAndDescAndDateTime::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetNameAndDescAndDateTime, CallFunc_Not_PreBool_ReturnValue) == 0x00004A, "Member 'WBP_CommonToolTipDetail_Variable_C_SetNameAndDescAndDateTime::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetNameAndDescAndDateTime, K2Node_Select_Default) == 0x00004B, "Member 'WBP_CommonToolTipDetail_Variable_C_SetNameAndDescAndDateTime::K2Node_Select_Default' has a wrong offset!");

// Function WBP_CommonToolTipDetail_Variable.WBP_CommonToolTipDetail_Variable_C.SetNameAndDescAndTermId
// 0x0068 (0x0068 - 0x0000)
struct WBP_CommonToolTipDetail_Variable_C_SetNameAndDescAndTermId final
{
public:
	class FText                                   Param_Name;                                        // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   Desc;                                              // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FString                                 TermId;                                            // 0x0030(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          bHideIfMinValue;                                   // 0x0040(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEventTermActive_ReturnValue;            // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9439[0x5];                                     // 0x0043(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_GetEventTermEndTime_OutEndTime;           // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetEventTermEndTime_ReturnValue;          // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEventTermNoneLimmit_ReturnValue;        // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x0053(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0055(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_943A[0x2];                                     // 0x0056(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_DateTimeMinValue_ReturnValue;             // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_DateTimeDateTime_ReturnValue;  // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0062(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0063(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CommonToolTipDetail_Variable_C_SetNameAndDescAndTermId) == 0x000008, "Wrong alignment on WBP_CommonToolTipDetail_Variable_C_SetNameAndDescAndTermId");
static_assert(sizeof(WBP_CommonToolTipDetail_Variable_C_SetNameAndDescAndTermId) == 0x000068, "Wrong size on WBP_CommonToolTipDetail_Variable_C_SetNameAndDescAndTermId");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetNameAndDescAndTermId, Param_Name) == 0x000000, "Member 'WBP_CommonToolTipDetail_Variable_C_SetNameAndDescAndTermId::Param_Name' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetNameAndDescAndTermId, Desc) == 0x000018, "Member 'WBP_CommonToolTipDetail_Variable_C_SetNameAndDescAndTermId::Desc' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetNameAndDescAndTermId, TermId) == 0x000030, "Member 'WBP_CommonToolTipDetail_Variable_C_SetNameAndDescAndTermId::TermId' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetNameAndDescAndTermId, bHideIfMinValue) == 0x000040, "Member 'WBP_CommonToolTipDetail_Variable_C_SetNameAndDescAndTermId::bHideIfMinValue' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetNameAndDescAndTermId, CallFunc_MakeLiteralByte_ReturnValue) == 0x000041, "Member 'WBP_CommonToolTipDetail_Variable_C_SetNameAndDescAndTermId::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetNameAndDescAndTermId, CallFunc_IsEventTermActive_ReturnValue) == 0x000042, "Member 'WBP_CommonToolTipDetail_Variable_C_SetNameAndDescAndTermId::CallFunc_IsEventTermActive_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetNameAndDescAndTermId, CallFunc_GetEventTermEndTime_OutEndTime) == 0x000048, "Member 'WBP_CommonToolTipDetail_Variable_C_SetNameAndDescAndTermId::CallFunc_GetEventTermEndTime_OutEndTime' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetNameAndDescAndTermId, CallFunc_GetEventTermEndTime_ReturnValue) == 0x000050, "Member 'WBP_CommonToolTipDetail_Variable_C_SetNameAndDescAndTermId::CallFunc_GetEventTermEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetNameAndDescAndTermId, CallFunc_IsEventTermNoneLimmit_ReturnValue) == 0x000051, "Member 'WBP_CommonToolTipDetail_Variable_C_SetNameAndDescAndTermId::CallFunc_IsEventTermNoneLimmit_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetNameAndDescAndTermId, CallFunc_Not_PreBool_ReturnValue) == 0x000052, "Member 'WBP_CommonToolTipDetail_Variable_C_SetNameAndDescAndTermId::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetNameAndDescAndTermId, CallFunc_NotEqual_StrStr_ReturnValue) == 0x000053, "Member 'WBP_CommonToolTipDetail_Variable_C_SetNameAndDescAndTermId::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetNameAndDescAndTermId, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000054, "Member 'WBP_CommonToolTipDetail_Variable_C_SetNameAndDescAndTermId::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetNameAndDescAndTermId, Temp_bool_Variable) == 0x000055, "Member 'WBP_CommonToolTipDetail_Variable_C_SetNameAndDescAndTermId::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetNameAndDescAndTermId, CallFunc_DateTimeMinValue_ReturnValue) == 0x000058, "Member 'WBP_CommonToolTipDetail_Variable_C_SetNameAndDescAndTermId::CallFunc_DateTimeMinValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetNameAndDescAndTermId, CallFunc_EqualEqual_DateTimeDateTime_ReturnValue) == 0x000060, "Member 'WBP_CommonToolTipDetail_Variable_C_SetNameAndDescAndTermId::CallFunc_EqualEqual_DateTimeDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetNameAndDescAndTermId, CallFunc_BooleanAND_ReturnValue) == 0x000061, "Member 'WBP_CommonToolTipDetail_Variable_C_SetNameAndDescAndTermId::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetNameAndDescAndTermId, CallFunc_Not_PreBool_ReturnValue_1) == 0x000062, "Member 'WBP_CommonToolTipDetail_Variable_C_SetNameAndDescAndTermId::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetNameAndDescAndTermId, K2Node_Select_Default) == 0x000063, "Member 'WBP_CommonToolTipDetail_Variable_C_SetNameAndDescAndTermId::K2Node_Select_Default' has a wrong offset!");

// Function WBP_CommonToolTipDetail_Variable.WBP_CommonToolTipDetail_Variable_C.SetExpOverflowRewardIconMode
// 0x02B8 (0x02B8 - 0x0000)
struct WBP_CommonToolTipDetail_Variable_C_SetExpOverflowRewardIconMode final
{
public:
	bool                                          bInIsClassLevelCounterStop;                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bInIsClassLevelLimit;                              // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bInIsClassLevelLimitSmallerThanCounterStop;        // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_943B[0x5];                                     // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   LocalRewardTokenName;                              // 0x0008(0x0018)(Edit, BlueprintVisible)
	int32                                         LocalCounterStopLevel;                             // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_943C[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateFontInfo                         LocalFontInfo;                                     // 0x0028(0x0088)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                          bLocalIsClassLevelLimitSmallerThanCounterStop;     // 0x00B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bLocalIsClassLevelLimit;                           // 0x00B1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bLocalIsClassLevelCounterStop;                     // 0x00B2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x00B3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_943D[0x4];                                     // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindSBGameSettingsMasterDataForBP_IsExists; // 0x00C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_943E[0x1];                                     // 0x00C3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBGameSettingsMasterData              CallFunc_FindSBGameSettingsMasterDataForBP_ReturnValue; // 0x00C4(0x0008)(NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindTokenMaster_bIsValid;                 // 0x00CD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_943F[0x2];                                     // 0x00CE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMasterToken                           CallFunc_FindTokenMaster_TokenMaster;              // 0x00D0(0x0058)()
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9440[0x7];                                     // 0x0129(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetMasterTokenText_ReturnValue;           // 0x0130(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0140(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0158(0x0040)(HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0198(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x01A8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x01B8(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x01D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x01E0(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x01F8(0x0018)()
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0210(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9441[0x7];                                     // 0x0211(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0218(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x0258(0x0010)(ReferenceParm)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_2;           // 0x0268(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0278(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x0290(0x0018)()
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x02A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9442[0x3];                                     // 0x02A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetCounterStopClassLevel_ReturnValue;     // 0x02AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x02B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_CommonToolTipDetail_Variable_C_SetExpOverflowRewardIconMode) == 0x000008, "Wrong alignment on WBP_CommonToolTipDetail_Variable_C_SetExpOverflowRewardIconMode");
static_assert(sizeof(WBP_CommonToolTipDetail_Variable_C_SetExpOverflowRewardIconMode) == 0x0002B8, "Wrong size on WBP_CommonToolTipDetail_Variable_C_SetExpOverflowRewardIconMode");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetExpOverflowRewardIconMode, bInIsClassLevelCounterStop) == 0x000000, "Member 'WBP_CommonToolTipDetail_Variable_C_SetExpOverflowRewardIconMode::bInIsClassLevelCounterStop' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetExpOverflowRewardIconMode, bInIsClassLevelLimit) == 0x000001, "Member 'WBP_CommonToolTipDetail_Variable_C_SetExpOverflowRewardIconMode::bInIsClassLevelLimit' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetExpOverflowRewardIconMode, bInIsClassLevelLimitSmallerThanCounterStop) == 0x000002, "Member 'WBP_CommonToolTipDetail_Variable_C_SetExpOverflowRewardIconMode::bInIsClassLevelLimitSmallerThanCounterStop' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetExpOverflowRewardIconMode, LocalRewardTokenName) == 0x000008, "Member 'WBP_CommonToolTipDetail_Variable_C_SetExpOverflowRewardIconMode::LocalRewardTokenName' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetExpOverflowRewardIconMode, LocalCounterStopLevel) == 0x000020, "Member 'WBP_CommonToolTipDetail_Variable_C_SetExpOverflowRewardIconMode::LocalCounterStopLevel' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetExpOverflowRewardIconMode, LocalFontInfo) == 0x000028, "Member 'WBP_CommonToolTipDetail_Variable_C_SetExpOverflowRewardIconMode::LocalFontInfo' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetExpOverflowRewardIconMode, bLocalIsClassLevelLimitSmallerThanCounterStop) == 0x0000B0, "Member 'WBP_CommonToolTipDetail_Variable_C_SetExpOverflowRewardIconMode::bLocalIsClassLevelLimitSmallerThanCounterStop' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetExpOverflowRewardIconMode, bLocalIsClassLevelLimit) == 0x0000B1, "Member 'WBP_CommonToolTipDetail_Variable_C_SetExpOverflowRewardIconMode::bLocalIsClassLevelLimit' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetExpOverflowRewardIconMode, bLocalIsClassLevelCounterStop) == 0x0000B2, "Member 'WBP_CommonToolTipDetail_Variable_C_SetExpOverflowRewardIconMode::bLocalIsClassLevelCounterStop' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetExpOverflowRewardIconMode, CallFunc_GetMasterDataManager_IsValid) == 0x0000B3, "Member 'WBP_CommonToolTipDetail_Variable_C_SetExpOverflowRewardIconMode::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetExpOverflowRewardIconMode, CallFunc_GetMasterDataManager_ReturnValue) == 0x0000B8, "Member 'WBP_CommonToolTipDetail_Variable_C_SetExpOverflowRewardIconMode::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetExpOverflowRewardIconMode, CallFunc_IsValid_ReturnValue) == 0x0000C0, "Member 'WBP_CommonToolTipDetail_Variable_C_SetExpOverflowRewardIconMode::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetExpOverflowRewardIconMode, CallFunc_MakeLiteralByte_ReturnValue) == 0x0000C1, "Member 'WBP_CommonToolTipDetail_Variable_C_SetExpOverflowRewardIconMode::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetExpOverflowRewardIconMode, CallFunc_FindSBGameSettingsMasterDataForBP_IsExists) == 0x0000C2, "Member 'WBP_CommonToolTipDetail_Variable_C_SetExpOverflowRewardIconMode::CallFunc_FindSBGameSettingsMasterDataForBP_IsExists' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetExpOverflowRewardIconMode, CallFunc_FindSBGameSettingsMasterDataForBP_ReturnValue) == 0x0000C4, "Member 'WBP_CommonToolTipDetail_Variable_C_SetExpOverflowRewardIconMode::CallFunc_FindSBGameSettingsMasterDataForBP_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetExpOverflowRewardIconMode, CallFunc_Not_PreBool_ReturnValue) == 0x0000CC, "Member 'WBP_CommonToolTipDetail_Variable_C_SetExpOverflowRewardIconMode::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetExpOverflowRewardIconMode, CallFunc_FindTokenMaster_bIsValid) == 0x0000CD, "Member 'WBP_CommonToolTipDetail_Variable_C_SetExpOverflowRewardIconMode::CallFunc_FindTokenMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetExpOverflowRewardIconMode, CallFunc_FindTokenMaster_TokenMaster) == 0x0000D0, "Member 'WBP_CommonToolTipDetail_Variable_C_SetExpOverflowRewardIconMode::CallFunc_FindTokenMaster_TokenMaster' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetExpOverflowRewardIconMode, CallFunc_BooleanAND_ReturnValue) == 0x000128, "Member 'WBP_CommonToolTipDetail_Variable_C_SetExpOverflowRewardIconMode::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetExpOverflowRewardIconMode, CallFunc_GetMasterTokenText_ReturnValue) == 0x000130, "Member 'WBP_CommonToolTipDetail_Variable_C_SetExpOverflowRewardIconMode::CallFunc_GetMasterTokenText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetExpOverflowRewardIconMode, CallFunc_Conv_StringToText_ReturnValue) == 0x000140, "Member 'WBP_CommonToolTipDetail_Variable_C_SetExpOverflowRewardIconMode::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetExpOverflowRewardIconMode, K2Node_MakeStruct_FormatArgumentData) == 0x000158, "Member 'WBP_CommonToolTipDetail_Variable_C_SetExpOverflowRewardIconMode::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetExpOverflowRewardIconMode, CallFunc_GetTextFromAsset_ReturnValue) == 0x000198, "Member 'WBP_CommonToolTipDetail_Variable_C_SetExpOverflowRewardIconMode::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetExpOverflowRewardIconMode, K2Node_MakeArray_Array) == 0x0001A8, "Member 'WBP_CommonToolTipDetail_Variable_C_SetExpOverflowRewardIconMode::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetExpOverflowRewardIconMode, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0001B8, "Member 'WBP_CommonToolTipDetail_Variable_C_SetExpOverflowRewardIconMode::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetExpOverflowRewardIconMode, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x0001D0, "Member 'WBP_CommonToolTipDetail_Variable_C_SetExpOverflowRewardIconMode::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetExpOverflowRewardIconMode, CallFunc_Format_ReturnValue) == 0x0001E0, "Member 'WBP_CommonToolTipDetail_Variable_C_SetExpOverflowRewardIconMode::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetExpOverflowRewardIconMode, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0001F8, "Member 'WBP_CommonToolTipDetail_Variable_C_SetExpOverflowRewardIconMode::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetExpOverflowRewardIconMode, CallFunc_Not_PreBool_ReturnValue_1) == 0x000210, "Member 'WBP_CommonToolTipDetail_Variable_C_SetExpOverflowRewardIconMode::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetExpOverflowRewardIconMode, K2Node_MakeStruct_FormatArgumentData_1) == 0x000218, "Member 'WBP_CommonToolTipDetail_Variable_C_SetExpOverflowRewardIconMode::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetExpOverflowRewardIconMode, K2Node_MakeArray_Array_1) == 0x000258, "Member 'WBP_CommonToolTipDetail_Variable_C_SetExpOverflowRewardIconMode::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetExpOverflowRewardIconMode, CallFunc_GetTextFromAsset_ReturnValue_2) == 0x000268, "Member 'WBP_CommonToolTipDetail_Variable_C_SetExpOverflowRewardIconMode::CallFunc_GetTextFromAsset_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetExpOverflowRewardIconMode, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000278, "Member 'WBP_CommonToolTipDetail_Variable_C_SetExpOverflowRewardIconMode::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetExpOverflowRewardIconMode, CallFunc_Format_ReturnValue_1) == 0x000290, "Member 'WBP_CommonToolTipDetail_Variable_C_SetExpOverflowRewardIconMode::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetExpOverflowRewardIconMode, CallFunc_BooleanOR_ReturnValue) == 0x0002A8, "Member 'WBP_CommonToolTipDetail_Variable_C_SetExpOverflowRewardIconMode::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetExpOverflowRewardIconMode, CallFunc_GetCounterStopClassLevel_ReturnValue) == 0x0002AC, "Member 'WBP_CommonToolTipDetail_Variable_C_SetExpOverflowRewardIconMode::CallFunc_GetCounterStopClassLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_SetExpOverflowRewardIconMode, CallFunc_IsValid_ReturnValue_1) == 0x0002B0, "Member 'WBP_CommonToolTipDetail_Variable_C_SetExpOverflowRewardIconMode::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function WBP_CommonToolTipDetail_Variable.WBP_CommonToolTipDetail_Variable_C.Set Name Only Text
// 0x0018 (0x0018 - 0x0000)
struct WBP_CommonToolTipDetail_Variable_C_Set_Name_Only_Text final
{
public:
	class FText                                   InName;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_CommonToolTipDetail_Variable_C_Set_Name_Only_Text) == 0x000008, "Wrong alignment on WBP_CommonToolTipDetail_Variable_C_Set_Name_Only_Text");
static_assert(sizeof(WBP_CommonToolTipDetail_Variable_C_Set_Name_Only_Text) == 0x000018, "Wrong size on WBP_CommonToolTipDetail_Variable_C_Set_Name_Only_Text");
static_assert(offsetof(WBP_CommonToolTipDetail_Variable_C_Set_Name_Only_Text, InName) == 0x000000, "Member 'WBP_CommonToolTipDetail_Variable_C_Set_Name_Only_Text::InName' has a wrong offset!");

}

