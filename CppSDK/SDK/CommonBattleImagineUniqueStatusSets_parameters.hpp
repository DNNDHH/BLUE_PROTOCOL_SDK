#pragma once

 

// Package: CommonBattleImagineUniqueStatusSets

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function CommonBattleImagineUniqueStatusSets.CommonBattleImagineUniqueStatusSets_C.ExecuteUbergraph_CommonBattleImagineUniqueStatusSets
// 0x000C (0x000C - 0x0000)
struct CommonBattleImagineUniqueStatusSets_C_ExecuteUbergraph_CommonBattleImagineUniqueStatusSets final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_InIsVisible;                    // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonBattleImagineUniqueStatusSets_C_ExecuteUbergraph_CommonBattleImagineUniqueStatusSets) == 0x000004, "Wrong alignment on CommonBattleImagineUniqueStatusSets_C_ExecuteUbergraph_CommonBattleImagineUniqueStatusSets");
static_assert(sizeof(CommonBattleImagineUniqueStatusSets_C_ExecuteUbergraph_CommonBattleImagineUniqueStatusSets) == 0x00000C, "Wrong size on CommonBattleImagineUniqueStatusSets_C_ExecuteUbergraph_CommonBattleImagineUniqueStatusSets");
static_assert(offsetof(CommonBattleImagineUniqueStatusSets_C_ExecuteUbergraph_CommonBattleImagineUniqueStatusSets, EntryPoint) == 0x000000, "Member 'CommonBattleImagineUniqueStatusSets_C_ExecuteUbergraph_CommonBattleImagineUniqueStatusSets::EntryPoint' has a wrong offset!");
static_assert(offsetof(CommonBattleImagineUniqueStatusSets_C_ExecuteUbergraph_CommonBattleImagineUniqueStatusSets, Temp_bool_Variable) == 0x000004, "Member 'CommonBattleImagineUniqueStatusSets_C_ExecuteUbergraph_CommonBattleImagineUniqueStatusSets::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CommonBattleImagineUniqueStatusSets_C_ExecuteUbergraph_CommonBattleImagineUniqueStatusSets, Temp_byte_Variable) == 0x000005, "Member 'CommonBattleImagineUniqueStatusSets_C_ExecuteUbergraph_CommonBattleImagineUniqueStatusSets::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CommonBattleImagineUniqueStatusSets_C_ExecuteUbergraph_CommonBattleImagineUniqueStatusSets, K2Node_CustomEvent_InIsVisible) == 0x000006, "Member 'CommonBattleImagineUniqueStatusSets_C_ExecuteUbergraph_CommonBattleImagineUniqueStatusSets::K2Node_CustomEvent_InIsVisible' has a wrong offset!");
static_assert(offsetof(CommonBattleImagineUniqueStatusSets_C_ExecuteUbergraph_CommonBattleImagineUniqueStatusSets, CallFunc_IsValid_ReturnValue) == 0x000007, "Member 'CommonBattleImagineUniqueStatusSets_C_ExecuteUbergraph_CommonBattleImagineUniqueStatusSets::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonBattleImagineUniqueStatusSets_C_ExecuteUbergraph_CommonBattleImagineUniqueStatusSets, Temp_byte_Variable_1) == 0x000008, "Member 'CommonBattleImagineUniqueStatusSets_C_ExecuteUbergraph_CommonBattleImagineUniqueStatusSets::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(CommonBattleImagineUniqueStatusSets_C_ExecuteUbergraph_CommonBattleImagineUniqueStatusSets, K2Node_Select_Default) == 0x000009, "Member 'CommonBattleImagineUniqueStatusSets_C_ExecuteUbergraph_CommonBattleImagineUniqueStatusSets::K2Node_Select_Default' has a wrong offset!");

// Function CommonBattleImagineUniqueStatusSets.CommonBattleImagineUniqueStatusSets_C.SetPossessionInfoVisibility
// 0x0001 (0x0001 - 0x0000)
struct CommonBattleImagineUniqueStatusSets_C_SetPossessionInfoVisibility final
{
public:
	bool                                          InIsVisible;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonBattleImagineUniqueStatusSets_C_SetPossessionInfoVisibility) == 0x000001, "Wrong alignment on CommonBattleImagineUniqueStatusSets_C_SetPossessionInfoVisibility");
static_assert(sizeof(CommonBattleImagineUniqueStatusSets_C_SetPossessionInfoVisibility) == 0x000001, "Wrong size on CommonBattleImagineUniqueStatusSets_C_SetPossessionInfoVisibility");
static_assert(offsetof(CommonBattleImagineUniqueStatusSets_C_SetPossessionInfoVisibility, InIsVisible) == 0x000000, "Member 'CommonBattleImagineUniqueStatusSets_C_SetPossessionInfoVisibility::InIsVisible' has a wrong offset!");

// Function CommonBattleImagineUniqueStatusSets.CommonBattleImagineUniqueStatusSets_C.SetMasterData
// 0x01A0 (0x01A0 - 0x0000)
struct CommonBattleImagineUniqueStatusSets_C_SetMasterData final
{
public:
	struct FSBMasterImagine                       SBMasterImagine;                                   // 0x0000(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FString                                 UniqueId;                                          // 0x00B0(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FSBMasterImagine                       LocalMasterData;                                   // 0x00C0(0x00B0)(Edit, BlueprintVisible)
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerManager*                       CallFunc_GetPlayerManager_ReturnValue;             // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetRecastTimeDefault_ReturnValue;         // 0x0188(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5E73[0x4];                                     // 0x018C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class USBImagineSkillInfo*              CallFunc_GetImagineSkillInfo_BP_ReturnValue;       // 0x0190(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonBattleImagineUniqueStatusSets_C_SetMasterData) == 0x000008, "Wrong alignment on CommonBattleImagineUniqueStatusSets_C_SetMasterData");
static_assert(sizeof(CommonBattleImagineUniqueStatusSets_C_SetMasterData) == 0x0001A0, "Wrong size on CommonBattleImagineUniqueStatusSets_C_SetMasterData");
static_assert(offsetof(CommonBattleImagineUniqueStatusSets_C_SetMasterData, SBMasterImagine) == 0x000000, "Member 'CommonBattleImagineUniqueStatusSets_C_SetMasterData::SBMasterImagine' has a wrong offset!");
static_assert(offsetof(CommonBattleImagineUniqueStatusSets_C_SetMasterData, UniqueId) == 0x0000B0, "Member 'CommonBattleImagineUniqueStatusSets_C_SetMasterData::UniqueId' has a wrong offset!");
static_assert(offsetof(CommonBattleImagineUniqueStatusSets_C_SetMasterData, LocalMasterData) == 0x0000C0, "Member 'CommonBattleImagineUniqueStatusSets_C_SetMasterData::LocalMasterData' has a wrong offset!");
static_assert(offsetof(CommonBattleImagineUniqueStatusSets_C_SetMasterData, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000170, "Member 'CommonBattleImagineUniqueStatusSets_C_SetMasterData::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonBattleImagineUniqueStatusSets_C_SetMasterData, CallFunc_Conv_StringToName_ReturnValue) == 0x000178, "Member 'CommonBattleImagineUniqueStatusSets_C_SetMasterData::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonBattleImagineUniqueStatusSets_C_SetMasterData, CallFunc_GetPlayerManager_ReturnValue) == 0x000180, "Member 'CommonBattleImagineUniqueStatusSets_C_SetMasterData::CallFunc_GetPlayerManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonBattleImagineUniqueStatusSets_C_SetMasterData, CallFunc_GetRecastTimeDefault_ReturnValue) == 0x000188, "Member 'CommonBattleImagineUniqueStatusSets_C_SetMasterData::CallFunc_GetRecastTimeDefault_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonBattleImagineUniqueStatusSets_C_SetMasterData, CallFunc_GetImagineSkillInfo_BP_ReturnValue) == 0x000190, "Member 'CommonBattleImagineUniqueStatusSets_C_SetMasterData::CallFunc_GetImagineSkillInfo_BP_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonBattleImagineUniqueStatusSets_C_SetMasterData, CallFunc_IsValid_ReturnValue) == 0x000198, "Member 'CommonBattleImagineUniqueStatusSets_C_SetMasterData::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function CommonBattleImagineUniqueStatusSets.CommonBattleImagineUniqueStatusSets_C.SetMasterDataById
// 0x00B8 (0x00B8 - 0x0000)
struct CommonBattleImagineUniqueStatusSets_C_SetMasterDataById final
{
public:
	int32                                         ItemIndex;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindImagineMaster_bIsValid;               // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E74[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterImagine                       CallFunc_FindImagineMaster_ImagineMaster;          // 0x0008(0x00B0)()
};
static_assert(alignof(CommonBattleImagineUniqueStatusSets_C_SetMasterDataById) == 0x000008, "Wrong alignment on CommonBattleImagineUniqueStatusSets_C_SetMasterDataById");
static_assert(sizeof(CommonBattleImagineUniqueStatusSets_C_SetMasterDataById) == 0x0000B8, "Wrong size on CommonBattleImagineUniqueStatusSets_C_SetMasterDataById");
static_assert(offsetof(CommonBattleImagineUniqueStatusSets_C_SetMasterDataById, ItemIndex) == 0x000000, "Member 'CommonBattleImagineUniqueStatusSets_C_SetMasterDataById::ItemIndex' has a wrong offset!");
static_assert(offsetof(CommonBattleImagineUniqueStatusSets_C_SetMasterDataById, CallFunc_FindImagineMaster_bIsValid) == 0x000004, "Member 'CommonBattleImagineUniqueStatusSets_C_SetMasterDataById::CallFunc_FindImagineMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(CommonBattleImagineUniqueStatusSets_C_SetMasterDataById, CallFunc_FindImagineMaster_ImagineMaster) == 0x000008, "Member 'CommonBattleImagineUniqueStatusSets_C_SetMasterDataById::CallFunc_FindImagineMaster_ImagineMaster' has a wrong offset!");

}

