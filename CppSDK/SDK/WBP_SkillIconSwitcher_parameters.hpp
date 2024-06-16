#pragma once

 

// Package: WBP_SkillIconSwitcher

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WBP_SkillIconSwitcher.WBP_SkillIconSwitcher_C.OnClick__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_SkillIconSwitcher_C_OnClick__DelegateSignature final
{
public:
	int32                                         Param_SkillId;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_SkillLV;                                     // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SkillIconSwitcher_C_OnClick__DelegateSignature) == 0x000004, "Wrong alignment on WBP_SkillIconSwitcher_C_OnClick__DelegateSignature");
static_assert(sizeof(WBP_SkillIconSwitcher_C_OnClick__DelegateSignature) == 0x000008, "Wrong size on WBP_SkillIconSwitcher_C_OnClick__DelegateSignature");
static_assert(offsetof(WBP_SkillIconSwitcher_C_OnClick__DelegateSignature, Param_SkillId) == 0x000000, "Member 'WBP_SkillIconSwitcher_C_OnClick__DelegateSignature::Param_SkillId' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_OnClick__DelegateSignature, Param_SkillLV) == 0x000004, "Member 'WBP_SkillIconSwitcher_C_OnClick__DelegateSignature::Param_SkillLV' has a wrong offset!");

// Function WBP_SkillIconSwitcher.WBP_SkillIconSwitcher_C.ExecuteUbergraph_WBP_SkillIconSwitcher
// 0x0010 (0x0010 - 0x0000)
struct WBP_SkillIconSwitcher_C_ExecuteUbergraph_WBP_SkillIconSwitcher final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetUIManager_IsValid;                     // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3F24[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SkillIconSwitcher_C_ExecuteUbergraph_WBP_SkillIconSwitcher) == 0x000008, "Wrong alignment on WBP_SkillIconSwitcher_C_ExecuteUbergraph_WBP_SkillIconSwitcher");
static_assert(sizeof(WBP_SkillIconSwitcher_C_ExecuteUbergraph_WBP_SkillIconSwitcher) == 0x000010, "Wrong size on WBP_SkillIconSwitcher_C_ExecuteUbergraph_WBP_SkillIconSwitcher");
static_assert(offsetof(WBP_SkillIconSwitcher_C_ExecuteUbergraph_WBP_SkillIconSwitcher, EntryPoint) == 0x000000, "Member 'WBP_SkillIconSwitcher_C_ExecuteUbergraph_WBP_SkillIconSwitcher::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_ExecuteUbergraph_WBP_SkillIconSwitcher, CallFunc_GetUIManager_IsValid) == 0x000004, "Member 'WBP_SkillIconSwitcher_C_ExecuteUbergraph_WBP_SkillIconSwitcher::CallFunc_GetUIManager_IsValid' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_ExecuteUbergraph_WBP_SkillIconSwitcher, CallFunc_GetUIManager_ReturnValue) == 0x000008, "Member 'WBP_SkillIconSwitcher_C_ExecuteUbergraph_WBP_SkillIconSwitcher::CallFunc_GetUIManager_ReturnValue' has a wrong offset!");

// Function WBP_SkillIconSwitcher.WBP_SkillIconSwitcher_C.Init
// 0x0148 (0x0148 - 0x0000)
struct WBP_SkillIconSwitcher_C_Init final
{
public:
	int32                                         Param_SkillId;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SkillLevel;                                        // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESkillTreeAbilityType                         AbilityType;                                       // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3F25[0x2];                                     // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_3;                              // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_4;                              // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_5;                              // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_6;                              // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_7;                              // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_8;                              // 0x0017(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_9;                              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_10;                             // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_11;                             // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_12;                             // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_13;                             // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_14;                             // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_15;                             // 0x001E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBSkillType                                  Temp_byte_Variable;                                // 0x001F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_4;                               // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_5;                               // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_6;                               // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_7;                               // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_8;                               // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_9;                               // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_10;                              // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_11;                              // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_12;                              // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_13;                              // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_14;                              // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_15;                              // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_16;                              // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_17;                              // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_18;                              // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_19;                              // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_20;                              // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_16;                             // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_17;                             // 0x0075(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_18;                             // 0x0076(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3F26[0x1];                                     // 0x0077(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_MakeColor_ReturnValue;                    // 0x0078(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x0088(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCurrentSkillLevelOthersIncluded_ReturnValue; // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_19;                             // 0x009D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_20;                             // 0x009E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBSkillType                                  Temp_byte_Variable_1;                              // 0x009F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_21;                             // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3F27[0x3];                                     // 0x00A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Select_Default;                             // 0x00A4(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Select_Default_1;                           // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3F28[0x3];                                     // 0x00B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_2;                           // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F29[0x4];                                     // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetActiveWidget_ReturnValue;              // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkillTree_SkillIconBase_C*             K2Node_DynamicCast_AsSkill_Tree_Skill_Icon_Base;   // 0x00C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3F2A[0x6];                                     // 0x00D2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkillTree_SkillIconTacticalAbility_C*  K2Node_DynamicCast_AsSkill_Tree_Skill_Icon_Tactical_Ability; // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindSkillDataDataBySkillId_IsExists;      // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3F2B[0x6];                                     // 0x00EA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSkillDataMasterData                 CallFunc_FindSkillDataDataBySkillId_ReturnValue;   // 0x00F0(0x0058)()
};
static_assert(alignof(WBP_SkillIconSwitcher_C_Init) == 0x000008, "Wrong alignment on WBP_SkillIconSwitcher_C_Init");
static_assert(sizeof(WBP_SkillIconSwitcher_C_Init) == 0x000148, "Wrong size on WBP_SkillIconSwitcher_C_Init");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Init, Param_SkillId) == 0x000000, "Member 'WBP_SkillIconSwitcher_C_Init::Param_SkillId' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Init, SkillLevel) == 0x000004, "Member 'WBP_SkillIconSwitcher_C_Init::SkillLevel' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Init, AbilityType) == 0x000008, "Member 'WBP_SkillIconSwitcher_C_Init::AbilityType' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Init, Temp_bool_Variable) == 0x000009, "Member 'WBP_SkillIconSwitcher_C_Init::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Init, CallFunc_Conv_ByteToInt_ReturnValue) == 0x00000C, "Member 'WBP_SkillIconSwitcher_C_Init::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Init, Temp_bool_Variable_1) == 0x000010, "Member 'WBP_SkillIconSwitcher_C_Init::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Init, Temp_bool_Variable_2) == 0x000011, "Member 'WBP_SkillIconSwitcher_C_Init::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Init, Temp_bool_Variable_3) == 0x000012, "Member 'WBP_SkillIconSwitcher_C_Init::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Init, Temp_bool_Variable_4) == 0x000013, "Member 'WBP_SkillIconSwitcher_C_Init::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Init, Temp_bool_Variable_5) == 0x000014, "Member 'WBP_SkillIconSwitcher_C_Init::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Init, Temp_bool_Variable_6) == 0x000015, "Member 'WBP_SkillIconSwitcher_C_Init::Temp_bool_Variable_6' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Init, Temp_bool_Variable_7) == 0x000016, "Member 'WBP_SkillIconSwitcher_C_Init::Temp_bool_Variable_7' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Init, Temp_bool_Variable_8) == 0x000017, "Member 'WBP_SkillIconSwitcher_C_Init::Temp_bool_Variable_8' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Init, Temp_bool_Variable_9) == 0x000018, "Member 'WBP_SkillIconSwitcher_C_Init::Temp_bool_Variable_9' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Init, Temp_bool_Variable_10) == 0x000019, "Member 'WBP_SkillIconSwitcher_C_Init::Temp_bool_Variable_10' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Init, Temp_bool_Variable_11) == 0x00001A, "Member 'WBP_SkillIconSwitcher_C_Init::Temp_bool_Variable_11' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Init, Temp_bool_Variable_12) == 0x00001B, "Member 'WBP_SkillIconSwitcher_C_Init::Temp_bool_Variable_12' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Init, Temp_bool_Variable_13) == 0x00001C, "Member 'WBP_SkillIconSwitcher_C_Init::Temp_bool_Variable_13' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Init, Temp_bool_Variable_14) == 0x00001D, "Member 'WBP_SkillIconSwitcher_C_Init::Temp_bool_Variable_14' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Init, Temp_bool_Variable_15) == 0x00001E, "Member 'WBP_SkillIconSwitcher_C_Init::Temp_bool_Variable_15' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Init, Temp_byte_Variable) == 0x00001F, "Member 'WBP_SkillIconSwitcher_C_Init::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Init, Temp_int_Variable) == 0x000020, "Member 'WBP_SkillIconSwitcher_C_Init::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Init, Temp_int_Variable_1) == 0x000024, "Member 'WBP_SkillIconSwitcher_C_Init::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Init, Temp_int_Variable_2) == 0x000028, "Member 'WBP_SkillIconSwitcher_C_Init::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Init, Temp_int_Variable_3) == 0x00002C, "Member 'WBP_SkillIconSwitcher_C_Init::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Init, Temp_int_Variable_4) == 0x000030, "Member 'WBP_SkillIconSwitcher_C_Init::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Init, Temp_int_Variable_5) == 0x000034, "Member 'WBP_SkillIconSwitcher_C_Init::Temp_int_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Init, Temp_int_Variable_6) == 0x000038, "Member 'WBP_SkillIconSwitcher_C_Init::Temp_int_Variable_6' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Init, Temp_int_Variable_7) == 0x00003C, "Member 'WBP_SkillIconSwitcher_C_Init::Temp_int_Variable_7' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Init, Temp_int_Variable_8) == 0x000040, "Member 'WBP_SkillIconSwitcher_C_Init::Temp_int_Variable_8' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Init, Temp_int_Variable_9) == 0x000044, "Member 'WBP_SkillIconSwitcher_C_Init::Temp_int_Variable_9' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Init, Temp_int_Variable_10) == 0x000048, "Member 'WBP_SkillIconSwitcher_C_Init::Temp_int_Variable_10' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Init, Temp_int_Variable_11) == 0x00004C, "Member 'WBP_SkillIconSwitcher_C_Init::Temp_int_Variable_11' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Init, Temp_int_Variable_12) == 0x000050, "Member 'WBP_SkillIconSwitcher_C_Init::Temp_int_Variable_12' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Init, Temp_int_Variable_13) == 0x000054, "Member 'WBP_SkillIconSwitcher_C_Init::Temp_int_Variable_13' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Init, Temp_int_Variable_14) == 0x000058, "Member 'WBP_SkillIconSwitcher_C_Init::Temp_int_Variable_14' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Init, Temp_int_Variable_15) == 0x00005C, "Member 'WBP_SkillIconSwitcher_C_Init::Temp_int_Variable_15' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Init, Temp_int_Variable_16) == 0x000060, "Member 'WBP_SkillIconSwitcher_C_Init::Temp_int_Variable_16' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Init, Temp_int_Variable_17) == 0x000064, "Member 'WBP_SkillIconSwitcher_C_Init::Temp_int_Variable_17' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Init, Temp_int_Variable_18) == 0x000068, "Member 'WBP_SkillIconSwitcher_C_Init::Temp_int_Variable_18' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Init, Temp_int_Variable_19) == 0x00006C, "Member 'WBP_SkillIconSwitcher_C_Init::Temp_int_Variable_19' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Init, Temp_int_Variable_20) == 0x000070, "Member 'WBP_SkillIconSwitcher_C_Init::Temp_int_Variable_20' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Init, Temp_bool_Variable_16) == 0x000074, "Member 'WBP_SkillIconSwitcher_C_Init::Temp_bool_Variable_16' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Init, Temp_bool_Variable_17) == 0x000075, "Member 'WBP_SkillIconSwitcher_C_Init::Temp_bool_Variable_17' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Init, Temp_bool_Variable_18) == 0x000076, "Member 'WBP_SkillIconSwitcher_C_Init::Temp_bool_Variable_18' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Init, CallFunc_MakeColor_ReturnValue) == 0x000078, "Member 'WBP_SkillIconSwitcher_C_Init::CallFunc_MakeColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Init, K2Node_MakeStruct_LinearColor) == 0x000088, "Member 'WBP_SkillIconSwitcher_C_Init::K2Node_MakeStruct_LinearColor' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Init, CallFunc_GetCurrentSkillLevelOthersIncluded_ReturnValue) == 0x000098, "Member 'WBP_SkillIconSwitcher_C_Init::CallFunc_GetCurrentSkillLevelOthersIncluded_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Init, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x00009C, "Member 'WBP_SkillIconSwitcher_C_Init::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Init, Temp_bool_Variable_19) == 0x00009D, "Member 'WBP_SkillIconSwitcher_C_Init::Temp_bool_Variable_19' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Init, Temp_bool_Variable_20) == 0x00009E, "Member 'WBP_SkillIconSwitcher_C_Init::Temp_bool_Variable_20' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Init, Temp_byte_Variable_1) == 0x00009F, "Member 'WBP_SkillIconSwitcher_C_Init::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Init, Temp_bool_Variable_21) == 0x0000A0, "Member 'WBP_SkillIconSwitcher_C_Init::Temp_bool_Variable_21' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Init, K2Node_Select_Default) == 0x0000A4, "Member 'WBP_SkillIconSwitcher_C_Init::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Init, K2Node_Select_Default_1) == 0x0000B4, "Member 'WBP_SkillIconSwitcher_C_Init::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Init, K2Node_Select_Default_2) == 0x0000B8, "Member 'WBP_SkillIconSwitcher_C_Init::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Init, CallFunc_GetActiveWidget_ReturnValue) == 0x0000C0, "Member 'WBP_SkillIconSwitcher_C_Init::CallFunc_GetActiveWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Init, K2Node_DynamicCast_AsSkill_Tree_Skill_Icon_Base) == 0x0000C8, "Member 'WBP_SkillIconSwitcher_C_Init::K2Node_DynamicCast_AsSkill_Tree_Skill_Icon_Base' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Init, K2Node_DynamicCast_bSuccess) == 0x0000D0, "Member 'WBP_SkillIconSwitcher_C_Init::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Init, CallFunc_GetMasterDataManager_IsValid) == 0x0000D1, "Member 'WBP_SkillIconSwitcher_C_Init::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Init, CallFunc_GetMasterDataManager_ReturnValue) == 0x0000D8, "Member 'WBP_SkillIconSwitcher_C_Init::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Init, K2Node_DynamicCast_AsSkill_Tree_Skill_Icon_Tactical_Ability) == 0x0000E0, "Member 'WBP_SkillIconSwitcher_C_Init::K2Node_DynamicCast_AsSkill_Tree_Skill_Icon_Tactical_Ability' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Init, K2Node_DynamicCast_bSuccess_1) == 0x0000E8, "Member 'WBP_SkillIconSwitcher_C_Init::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Init, CallFunc_FindSkillDataDataBySkillId_IsExists) == 0x0000E9, "Member 'WBP_SkillIconSwitcher_C_Init::CallFunc_FindSkillDataDataBySkillId_IsExists' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Init, CallFunc_FindSkillDataDataBySkillId_ReturnValue) == 0x0000F0, "Member 'WBP_SkillIconSwitcher_C_Init::CallFunc_FindSkillDataDataBySkillId_ReturnValue' has a wrong offset!");

// Function WBP_SkillIconSwitcher.WBP_SkillIconSwitcher_C.Update
// 0x0018 (0x0018 - 0x0000)
struct WBP_SkillIconSwitcher_C_Update final
{
public:
	class UWidget*                                CallFunc_GetActiveWidget_ReturnValue;              // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkillTree_SkillIconBase_C*             K2Node_DynamicCast_AsSkill_Tree_Skill_Icon_Base;   // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_SkillIconSwitcher_C_Update) == 0x000008, "Wrong alignment on WBP_SkillIconSwitcher_C_Update");
static_assert(sizeof(WBP_SkillIconSwitcher_C_Update) == 0x000018, "Wrong size on WBP_SkillIconSwitcher_C_Update");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Update, CallFunc_GetActiveWidget_ReturnValue) == 0x000000, "Member 'WBP_SkillIconSwitcher_C_Update::CallFunc_GetActiveWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Update, K2Node_DynamicCast_AsSkill_Tree_Skill_Icon_Base) == 0x000008, "Member 'WBP_SkillIconSwitcher_C_Update::K2Node_DynamicCast_AsSkill_Tree_Skill_Icon_Base' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Update, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'WBP_SkillIconSwitcher_C_Update::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function WBP_SkillIconSwitcher.WBP_SkillIconSwitcher_C.Set Equipment Icon Visible
// 0x0078 (0x0078 - 0x0000)
struct WBP_SkillIconSwitcher_C_Set_Equipment_Icon_Visible final
{
public:
	bool                                          Visible;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBSkillType                                  Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F2C[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_4;                               // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_5;                               // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_6;                               // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_7;                               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_8;                               // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_9;                               // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_10;                              // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_11;                              // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_12;                              // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_13;                              // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_14;                              // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_15;                              // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_16;                              // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_17;                              // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_18;                              // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_19;                              // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_20;                              // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetActiveWidget_ReturnValue;              // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F2D[0x4];                                     // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USkillTree_SkillIconBase_C*             K2Node_DynamicCast_AsSkill_Tree_Skill_Icon_Base;   // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_SkillIconSwitcher_C_Set_Equipment_Icon_Visible) == 0x000008, "Wrong alignment on WBP_SkillIconSwitcher_C_Set_Equipment_Icon_Visible");
static_assert(sizeof(WBP_SkillIconSwitcher_C_Set_Equipment_Icon_Visible) == 0x000078, "Wrong size on WBP_SkillIconSwitcher_C_Set_Equipment_Icon_Visible");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Set_Equipment_Icon_Visible, Visible) == 0x000000, "Member 'WBP_SkillIconSwitcher_C_Set_Equipment_Icon_Visible::Visible' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Set_Equipment_Icon_Visible, Temp_byte_Variable) == 0x000001, "Member 'WBP_SkillIconSwitcher_C_Set_Equipment_Icon_Visible::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Set_Equipment_Icon_Visible, Temp_int_Variable) == 0x000004, "Member 'WBP_SkillIconSwitcher_C_Set_Equipment_Icon_Visible::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Set_Equipment_Icon_Visible, Temp_int_Variable_1) == 0x000008, "Member 'WBP_SkillIconSwitcher_C_Set_Equipment_Icon_Visible::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Set_Equipment_Icon_Visible, Temp_int_Variable_2) == 0x00000C, "Member 'WBP_SkillIconSwitcher_C_Set_Equipment_Icon_Visible::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Set_Equipment_Icon_Visible, Temp_int_Variable_3) == 0x000010, "Member 'WBP_SkillIconSwitcher_C_Set_Equipment_Icon_Visible::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Set_Equipment_Icon_Visible, Temp_int_Variable_4) == 0x000014, "Member 'WBP_SkillIconSwitcher_C_Set_Equipment_Icon_Visible::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Set_Equipment_Icon_Visible, Temp_int_Variable_5) == 0x000018, "Member 'WBP_SkillIconSwitcher_C_Set_Equipment_Icon_Visible::Temp_int_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Set_Equipment_Icon_Visible, Temp_int_Variable_6) == 0x00001C, "Member 'WBP_SkillIconSwitcher_C_Set_Equipment_Icon_Visible::Temp_int_Variable_6' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Set_Equipment_Icon_Visible, Temp_int_Variable_7) == 0x000020, "Member 'WBP_SkillIconSwitcher_C_Set_Equipment_Icon_Visible::Temp_int_Variable_7' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Set_Equipment_Icon_Visible, Temp_int_Variable_8) == 0x000024, "Member 'WBP_SkillIconSwitcher_C_Set_Equipment_Icon_Visible::Temp_int_Variable_8' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Set_Equipment_Icon_Visible, Temp_int_Variable_9) == 0x000028, "Member 'WBP_SkillIconSwitcher_C_Set_Equipment_Icon_Visible::Temp_int_Variable_9' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Set_Equipment_Icon_Visible, Temp_int_Variable_10) == 0x00002C, "Member 'WBP_SkillIconSwitcher_C_Set_Equipment_Icon_Visible::Temp_int_Variable_10' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Set_Equipment_Icon_Visible, Temp_int_Variable_11) == 0x000030, "Member 'WBP_SkillIconSwitcher_C_Set_Equipment_Icon_Visible::Temp_int_Variable_11' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Set_Equipment_Icon_Visible, Temp_int_Variable_12) == 0x000034, "Member 'WBP_SkillIconSwitcher_C_Set_Equipment_Icon_Visible::Temp_int_Variable_12' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Set_Equipment_Icon_Visible, Temp_int_Variable_13) == 0x000038, "Member 'WBP_SkillIconSwitcher_C_Set_Equipment_Icon_Visible::Temp_int_Variable_13' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Set_Equipment_Icon_Visible, Temp_int_Variable_14) == 0x00003C, "Member 'WBP_SkillIconSwitcher_C_Set_Equipment_Icon_Visible::Temp_int_Variable_14' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Set_Equipment_Icon_Visible, Temp_int_Variable_15) == 0x000040, "Member 'WBP_SkillIconSwitcher_C_Set_Equipment_Icon_Visible::Temp_int_Variable_15' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Set_Equipment_Icon_Visible, Temp_int_Variable_16) == 0x000044, "Member 'WBP_SkillIconSwitcher_C_Set_Equipment_Icon_Visible::Temp_int_Variable_16' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Set_Equipment_Icon_Visible, Temp_int_Variable_17) == 0x000048, "Member 'WBP_SkillIconSwitcher_C_Set_Equipment_Icon_Visible::Temp_int_Variable_17' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Set_Equipment_Icon_Visible, Temp_int_Variable_18) == 0x00004C, "Member 'WBP_SkillIconSwitcher_C_Set_Equipment_Icon_Visible::Temp_int_Variable_18' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Set_Equipment_Icon_Visible, Temp_int_Variable_19) == 0x000050, "Member 'WBP_SkillIconSwitcher_C_Set_Equipment_Icon_Visible::Temp_int_Variable_19' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Set_Equipment_Icon_Visible, Temp_int_Variable_20) == 0x000054, "Member 'WBP_SkillIconSwitcher_C_Set_Equipment_Icon_Visible::Temp_int_Variable_20' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Set_Equipment_Icon_Visible, CallFunc_GetActiveWidget_ReturnValue) == 0x000058, "Member 'WBP_SkillIconSwitcher_C_Set_Equipment_Icon_Visible::CallFunc_GetActiveWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Set_Equipment_Icon_Visible, K2Node_Select_Default) == 0x000060, "Member 'WBP_SkillIconSwitcher_C_Set_Equipment_Icon_Visible::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Set_Equipment_Icon_Visible, K2Node_DynamicCast_AsSkill_Tree_Skill_Icon_Base) == 0x000068, "Member 'WBP_SkillIconSwitcher_C_Set_Equipment_Icon_Visible::K2Node_DynamicCast_AsSkill_Tree_Skill_Icon_Base' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_Set_Equipment_Icon_Visible, K2Node_DynamicCast_bSuccess) == 0x000070, "Member 'WBP_SkillIconSwitcher_C_Set_Equipment_Icon_Visible::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function WBP_SkillIconSwitcher.WBP_SkillIconSwitcher_C.GetToolTipWidget_0
// 0x0018 (0x0018 - 0x0000)
struct WBP_SkillIconSwitcher_C_GetToolTipWidget_0 final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_ToolTip_Skill_C*                   CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_SkillIconSwitcher_C_GetToolTipWidget_0) == 0x000008, "Wrong alignment on WBP_SkillIconSwitcher_C_GetToolTipWidget_0");
static_assert(sizeof(WBP_SkillIconSwitcher_C_GetToolTipWidget_0) == 0x000018, "Wrong size on WBP_SkillIconSwitcher_C_GetToolTipWidget_0");
static_assert(offsetof(WBP_SkillIconSwitcher_C_GetToolTipWidget_0, ReturnValue) == 0x000000, "Member 'WBP_SkillIconSwitcher_C_GetToolTipWidget_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_GetToolTipWidget_0, CallFunc_Create_ReturnValue) == 0x000008, "Member 'WBP_SkillIconSwitcher_C_GetToolTipWidget_0::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillIconSwitcher_C_GetToolTipWidget_0, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'WBP_SkillIconSwitcher_C_GetToolTipWidget_0::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

