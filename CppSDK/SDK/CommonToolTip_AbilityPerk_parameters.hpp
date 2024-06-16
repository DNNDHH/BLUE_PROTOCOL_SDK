#pragma once

 

// Package: CommonToolTip_AbilityPerk

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function CommonToolTip_AbilityPerk.CommonToolTip_AbilityPerk_C.SetAbilityNameText
// 0x0020 (0x0020 - 0x0000)
struct CommonToolTip_AbilityPerk_C_SetAbilityNameText final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonToolTip_AbilityPerk_C_SetAbilityNameText) == 0x000008, "Wrong alignment on CommonToolTip_AbilityPerk_C_SetAbilityNameText");
static_assert(sizeof(CommonToolTip_AbilityPerk_C_SetAbilityNameText) == 0x000020, "Wrong size on CommonToolTip_AbilityPerk_C_SetAbilityNameText");
static_assert(offsetof(CommonToolTip_AbilityPerk_C_SetAbilityNameText, InText) == 0x000000, "Member 'CommonToolTip_AbilityPerk_C_SetAbilityNameText::InText' has a wrong offset!");
static_assert(offsetof(CommonToolTip_AbilityPerk_C_SetAbilityNameText, CallFunc_TextIsEmpty_ReturnValue) == 0x000018, "Member 'CommonToolTip_AbilityPerk_C_SetAbilityNameText::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");

// Function CommonToolTip_AbilityPerk.CommonToolTip_AbilityPerk_C.SetAbilityDescText
// 0x0020 (0x0020 - 0x0000)
struct CommonToolTip_AbilityPerk_C_SetAbilityDescText final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonToolTip_AbilityPerk_C_SetAbilityDescText) == 0x000008, "Wrong alignment on CommonToolTip_AbilityPerk_C_SetAbilityDescText");
static_assert(sizeof(CommonToolTip_AbilityPerk_C_SetAbilityDescText) == 0x000020, "Wrong size on CommonToolTip_AbilityPerk_C_SetAbilityDescText");
static_assert(offsetof(CommonToolTip_AbilityPerk_C_SetAbilityDescText, InText) == 0x000000, "Member 'CommonToolTip_AbilityPerk_C_SetAbilityDescText::InText' has a wrong offset!");
static_assert(offsetof(CommonToolTip_AbilityPerk_C_SetAbilityDescText, CallFunc_TextIsEmpty_ReturnValue) == 0x000018, "Member 'CommonToolTip_AbilityPerk_C_SetAbilityDescText::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");

// Function CommonToolTip_AbilityPerk.CommonToolTip_AbilityPerk_C.SetAbilityPerkID
// 0x00B0 (0x00B0 - 0x0000)
struct CommonToolTip_AbilityPerk_C_SetAbilityPerkID final
{
public:
	int32                                         PerkId;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8B70[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetAbilityMasterDataByEffectId_IsExists;  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8B71[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAbilityMasterData                   CallFunc_GetAbilityMasterDataByEffectId_ReturnValue; // 0x0018(0x0048)()
	class FString                                 CallFunc_GetPerkName_ReturnValue;                  // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPerkName_ReturnValue_1;                // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0080(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0098(0x0018)()
};
static_assert(alignof(CommonToolTip_AbilityPerk_C_SetAbilityPerkID) == 0x000008, "Wrong alignment on CommonToolTip_AbilityPerk_C_SetAbilityPerkID");
static_assert(sizeof(CommonToolTip_AbilityPerk_C_SetAbilityPerkID) == 0x0000B0, "Wrong size on CommonToolTip_AbilityPerk_C_SetAbilityPerkID");
static_assert(offsetof(CommonToolTip_AbilityPerk_C_SetAbilityPerkID, PerkId) == 0x000000, "Member 'CommonToolTip_AbilityPerk_C_SetAbilityPerkID::PerkId' has a wrong offset!");
static_assert(offsetof(CommonToolTip_AbilityPerk_C_SetAbilityPerkID, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000004, "Member 'CommonToolTip_AbilityPerk_C_SetAbilityPerkID::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonToolTip_AbilityPerk_C_SetAbilityPerkID, CallFunc_GetMasterDataManager_IsValid) == 0x000005, "Member 'CommonToolTip_AbilityPerk_C_SetAbilityPerkID::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(CommonToolTip_AbilityPerk_C_SetAbilityPerkID, CallFunc_GetMasterDataManager_ReturnValue) == 0x000008, "Member 'CommonToolTip_AbilityPerk_C_SetAbilityPerkID::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonToolTip_AbilityPerk_C_SetAbilityPerkID, CallFunc_GetAbilityMasterDataByEffectId_IsExists) == 0x000010, "Member 'CommonToolTip_AbilityPerk_C_SetAbilityPerkID::CallFunc_GetAbilityMasterDataByEffectId_IsExists' has a wrong offset!");
static_assert(offsetof(CommonToolTip_AbilityPerk_C_SetAbilityPerkID, CallFunc_GetAbilityMasterDataByEffectId_ReturnValue) == 0x000018, "Member 'CommonToolTip_AbilityPerk_C_SetAbilityPerkID::CallFunc_GetAbilityMasterDataByEffectId_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonToolTip_AbilityPerk_C_SetAbilityPerkID, CallFunc_GetPerkName_ReturnValue) == 0x000060, "Member 'CommonToolTip_AbilityPerk_C_SetAbilityPerkID::CallFunc_GetPerkName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonToolTip_AbilityPerk_C_SetAbilityPerkID, CallFunc_GetPerkName_ReturnValue_1) == 0x000070, "Member 'CommonToolTip_AbilityPerk_C_SetAbilityPerkID::CallFunc_GetPerkName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonToolTip_AbilityPerk_C_SetAbilityPerkID, CallFunc_Conv_StringToText_ReturnValue) == 0x000080, "Member 'CommonToolTip_AbilityPerk_C_SetAbilityPerkID::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonToolTip_AbilityPerk_C_SetAbilityPerkID, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000098, "Member 'CommonToolTip_AbilityPerk_C_SetAbilityPerkID::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");

// Function CommonToolTip_AbilityPerk.CommonToolTip_AbilityPerk_C.SetWeaponPerkData
// 0x001C (0x001C - 0x0000)
struct CommonToolTip_AbilityPerk_C_SetWeaponPerkData final
{
public:
	struct FSBCharacterWeaponPerkData             SBCharacterWeaponPerkData;                         // 0x0000(0x001C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};
static_assert(alignof(CommonToolTip_AbilityPerk_C_SetWeaponPerkData) == 0x000004, "Wrong alignment on CommonToolTip_AbilityPerk_C_SetWeaponPerkData");
static_assert(sizeof(CommonToolTip_AbilityPerk_C_SetWeaponPerkData) == 0x00001C, "Wrong size on CommonToolTip_AbilityPerk_C_SetWeaponPerkData");
static_assert(offsetof(CommonToolTip_AbilityPerk_C_SetWeaponPerkData, SBCharacterWeaponPerkData) == 0x000000, "Member 'CommonToolTip_AbilityPerk_C_SetWeaponPerkData::SBCharacterWeaponPerkData' has a wrong offset!");

}

