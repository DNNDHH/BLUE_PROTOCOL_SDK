#pragma once

 

// Package: CommunicateSettingMenu_NameAndAchieve

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function CommunicateSettingMenu_NameAndAchieve.CommunicateSettingMenu_NameAndAchieve_C.ExecuteUbergraph_CommunicateSettingMenu_NameAndAchieve
// 0x0008 (0x0008 - 0x0000)
struct CommunicateSettingMenu_NameAndAchieve_C_ExecuteUbergraph_CommunicateSettingMenu_NameAndAchieve final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommunicateSettingMenu_NameAndAchieve_C_ExecuteUbergraph_CommunicateSettingMenu_NameAndAchieve) == 0x000004, "Wrong alignment on CommunicateSettingMenu_NameAndAchieve_C_ExecuteUbergraph_CommunicateSettingMenu_NameAndAchieve");
static_assert(sizeof(CommunicateSettingMenu_NameAndAchieve_C_ExecuteUbergraph_CommunicateSettingMenu_NameAndAchieve) == 0x000008, "Wrong size on CommunicateSettingMenu_NameAndAchieve_C_ExecuteUbergraph_CommunicateSettingMenu_NameAndAchieve");
static_assert(offsetof(CommunicateSettingMenu_NameAndAchieve_C_ExecuteUbergraph_CommunicateSettingMenu_NameAndAchieve, EntryPoint) == 0x000000, "Member 'CommunicateSettingMenu_NameAndAchieve_C_ExecuteUbergraph_CommunicateSettingMenu_NameAndAchieve::EntryPoint' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_NameAndAchieve_C_ExecuteUbergraph_CommunicateSettingMenu_NameAndAchieve, Temp_bool_Variable) == 0x000004, "Member 'CommunicateSettingMenu_NameAndAchieve_C_ExecuteUbergraph_CommunicateSettingMenu_NameAndAchieve::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_NameAndAchieve_C_ExecuteUbergraph_CommunicateSettingMenu_NameAndAchieve, Temp_byte_Variable) == 0x000005, "Member 'CommunicateSettingMenu_NameAndAchieve_C_ExecuteUbergraph_CommunicateSettingMenu_NameAndAchieve::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_NameAndAchieve_C_ExecuteUbergraph_CommunicateSettingMenu_NameAndAchieve, Temp_byte_Variable_1) == 0x000006, "Member 'CommunicateSettingMenu_NameAndAchieve_C_ExecuteUbergraph_CommunicateSettingMenu_NameAndAchieve::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_NameAndAchieve_C_ExecuteUbergraph_CommunicateSettingMenu_NameAndAchieve, K2Node_Select_Default) == 0x000007, "Member 'CommunicateSettingMenu_NameAndAchieve_C_ExecuteUbergraph_CommunicateSettingMenu_NameAndAchieve::K2Node_Select_Default' has a wrong offset!");

// Function CommunicateSettingMenu_NameAndAchieve.CommunicateSettingMenu_NameAndAchieve_C.SetAchievementName
// 0x00B8 (0x00B8 - 0x0000)
struct CommunicateSettingMenu_NameAndAchieve_C_SetAchievementName final
{
public:
	int32                                         InAchievementId;                                   // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsResult;                                          // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6094[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetAchievementMasterData_IsExists;        // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6095[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAchievementMasterData                 CallFunc_GetAchievementMasterData_ReturnValue;     // 0x0018(0x0078)()
	class FString                                 CallFunc_GetAchievementName_ReturnValue;           // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00A0(0x0018)()
};
static_assert(alignof(CommunicateSettingMenu_NameAndAchieve_C_SetAchievementName) == 0x000008, "Wrong alignment on CommunicateSettingMenu_NameAndAchieve_C_SetAchievementName");
static_assert(sizeof(CommunicateSettingMenu_NameAndAchieve_C_SetAchievementName) == 0x0000B8, "Wrong size on CommunicateSettingMenu_NameAndAchieve_C_SetAchievementName");
static_assert(offsetof(CommunicateSettingMenu_NameAndAchieve_C_SetAchievementName, InAchievementId) == 0x000000, "Member 'CommunicateSettingMenu_NameAndAchieve_C_SetAchievementName::InAchievementId' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_NameAndAchieve_C_SetAchievementName, IsResult) == 0x000004, "Member 'CommunicateSettingMenu_NameAndAchieve_C_SetAchievementName::IsResult' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_NameAndAchieve_C_SetAchievementName, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000005, "Member 'CommunicateSettingMenu_NameAndAchieve_C_SetAchievementName::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_NameAndAchieve_C_SetAchievementName, CallFunc_GetMasterDataManager_IsValid) == 0x000006, "Member 'CommunicateSettingMenu_NameAndAchieve_C_SetAchievementName::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_NameAndAchieve_C_SetAchievementName, CallFunc_GetMasterDataManager_ReturnValue) == 0x000008, "Member 'CommunicateSettingMenu_NameAndAchieve_C_SetAchievementName::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_NameAndAchieve_C_SetAchievementName, CallFunc_GetAchievementMasterData_IsExists) == 0x000010, "Member 'CommunicateSettingMenu_NameAndAchieve_C_SetAchievementName::CallFunc_GetAchievementMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_NameAndAchieve_C_SetAchievementName, CallFunc_GetAchievementMasterData_ReturnValue) == 0x000018, "Member 'CommunicateSettingMenu_NameAndAchieve_C_SetAchievementName::CallFunc_GetAchievementMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_NameAndAchieve_C_SetAchievementName, CallFunc_GetAchievementName_ReturnValue) == 0x000090, "Member 'CommunicateSettingMenu_NameAndAchieve_C_SetAchievementName::CallFunc_GetAchievementName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_NameAndAchieve_C_SetAchievementName, CallFunc_Conv_StringToText_ReturnValue) == 0x0000A0, "Member 'CommunicateSettingMenu_NameAndAchieve_C_SetAchievementName::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function CommunicateSettingMenu_NameAndAchieve.CommunicateSettingMenu_NameAndAchieve_C.SetName
// 0x0028 (0x0028 - 0x0000)
struct CommunicateSettingMenu_NameAndAchieve_C_SetName final
{
public:
	class FString                                 InName;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0010(0x0018)()
};
static_assert(alignof(CommunicateSettingMenu_NameAndAchieve_C_SetName) == 0x000008, "Wrong alignment on CommunicateSettingMenu_NameAndAchieve_C_SetName");
static_assert(sizeof(CommunicateSettingMenu_NameAndAchieve_C_SetName) == 0x000028, "Wrong size on CommunicateSettingMenu_NameAndAchieve_C_SetName");
static_assert(offsetof(CommunicateSettingMenu_NameAndAchieve_C_SetName, InName) == 0x000000, "Member 'CommunicateSettingMenu_NameAndAchieve_C_SetName::InName' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_NameAndAchieve_C_SetName, CallFunc_Conv_StringToText_ReturnValue) == 0x000010, "Member 'CommunicateSettingMenu_NameAndAchieve_C_SetName::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

}

