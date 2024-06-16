#pragma once

 

// Package: SkillInfoIconForTacticalSkill

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C.OnTacticalSkillIconPressed__DelegateSignature
// 0x000C (0x000C - 0x0000)
struct SkillInfoIconForTacticalSkill_C_OnTacticalSkillIconPressed__DelegateSignature final
{
public:
	ESkillActionPosition                          InTacticalSkillSAP;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81F6[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InSkillId;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InSkillLevel;                                      // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillInfoIconForTacticalSkill_C_OnTacticalSkillIconPressed__DelegateSignature) == 0x000004, "Wrong alignment on SkillInfoIconForTacticalSkill_C_OnTacticalSkillIconPressed__DelegateSignature");
static_assert(sizeof(SkillInfoIconForTacticalSkill_C_OnTacticalSkillIconPressed__DelegateSignature) == 0x00000C, "Wrong size on SkillInfoIconForTacticalSkill_C_OnTacticalSkillIconPressed__DelegateSignature");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_OnTacticalSkillIconPressed__DelegateSignature, InTacticalSkillSAP) == 0x000000, "Member 'SkillInfoIconForTacticalSkill_C_OnTacticalSkillIconPressed__DelegateSignature::InTacticalSkillSAP' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_OnTacticalSkillIconPressed__DelegateSignature, InSkillId) == 0x000004, "Member 'SkillInfoIconForTacticalSkill_C_OnTacticalSkillIconPressed__DelegateSignature::InSkillId' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_OnTacticalSkillIconPressed__DelegateSignature, InSkillLevel) == 0x000008, "Member 'SkillInfoIconForTacticalSkill_C_OnTacticalSkillIconPressed__DelegateSignature::InSkillLevel' has a wrong offset!");

// Function SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C.ExecuteUbergraph_SkillInfoIconForTacticalSkill
// 0x0020 (0x0020 - 0x0000)
struct SkillInfoIconForTacticalSkill_C_ExecuteUbergraph_SkillInfoIconForTacticalSkill final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81F7[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetSkillInfoItemSize_OutIsValid;          // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                              CallFunc_GetSkillInfoItemSize_OutSize;             // 0x0014(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillInfoIconForTacticalSkill_C_ExecuteUbergraph_SkillInfoIconForTacticalSkill) == 0x000008, "Wrong alignment on SkillInfoIconForTacticalSkill_C_ExecuteUbergraph_SkillInfoIconForTacticalSkill");
static_assert(sizeof(SkillInfoIconForTacticalSkill_C_ExecuteUbergraph_SkillInfoIconForTacticalSkill) == 0x000020, "Wrong size on SkillInfoIconForTacticalSkill_C_ExecuteUbergraph_SkillInfoIconForTacticalSkill");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_ExecuteUbergraph_SkillInfoIconForTacticalSkill, EntryPoint) == 0x000000, "Member 'SkillInfoIconForTacticalSkill_C_ExecuteUbergraph_SkillInfoIconForTacticalSkill::EntryPoint' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_ExecuteUbergraph_SkillInfoIconForTacticalSkill, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'SkillInfoIconForTacticalSkill_C_ExecuteUbergraph_SkillInfoIconForTacticalSkill::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_ExecuteUbergraph_SkillInfoIconForTacticalSkill, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000008, "Member 'SkillInfoIconForTacticalSkill_C_ExecuteUbergraph_SkillInfoIconForTacticalSkill::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_ExecuteUbergraph_SkillInfoIconForTacticalSkill, K2Node_Event_IsDesignTime) == 0x000010, "Member 'SkillInfoIconForTacticalSkill_C_ExecuteUbergraph_SkillInfoIconForTacticalSkill::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_ExecuteUbergraph_SkillInfoIconForTacticalSkill, CallFunc_IsValid_ReturnValue_1) == 0x000011, "Member 'SkillInfoIconForTacticalSkill_C_ExecuteUbergraph_SkillInfoIconForTacticalSkill::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_ExecuteUbergraph_SkillInfoIconForTacticalSkill, CallFunc_IsValid_ReturnValue_2) == 0x000012, "Member 'SkillInfoIconForTacticalSkill_C_ExecuteUbergraph_SkillInfoIconForTacticalSkill::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_ExecuteUbergraph_SkillInfoIconForTacticalSkill, CallFunc_GetSkillInfoItemSize_OutIsValid) == 0x000013, "Member 'SkillInfoIconForTacticalSkill_C_ExecuteUbergraph_SkillInfoIconForTacticalSkill::CallFunc_GetSkillInfoItemSize_OutIsValid' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_ExecuteUbergraph_SkillInfoIconForTacticalSkill, CallFunc_GetSkillInfoItemSize_OutSize) == 0x000014, "Member 'SkillInfoIconForTacticalSkill_C_ExecuteUbergraph_SkillInfoIconForTacticalSkill::CallFunc_GetSkillInfoItemSize_OutSize' has a wrong offset!");

// Function SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct SkillInfoIconForTacticalSkill_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoIconForTacticalSkill_C_PreConstruct) == 0x000001, "Wrong alignment on SkillInfoIconForTacticalSkill_C_PreConstruct");
static_assert(sizeof(SkillInfoIconForTacticalSkill_C_PreConstruct) == 0x000001, "Wrong size on SkillInfoIconForTacticalSkill_C_PreConstruct");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'SkillInfoIconForTacticalSkill_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C.CreateTooltip
// 0x0028 (0x0028 - 0x0000)
struct SkillInfoIconForTacticalSkill_C_CreateTooltip final
{
public:
	bool                                          InIsNotUseTooltip;                                 // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81F8[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_ToolTip_Skill_C*                   K2Node_DynamicCast_AsWBP_Tool_Tip_Skill;           // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81F9[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_ToolTip_Skill_C*                   CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoIconForTacticalSkill_C_CreateTooltip) == 0x000008, "Wrong alignment on SkillInfoIconForTacticalSkill_C_CreateTooltip");
static_assert(sizeof(SkillInfoIconForTacticalSkill_C_CreateTooltip) == 0x000028, "Wrong size on SkillInfoIconForTacticalSkill_C_CreateTooltip");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_CreateTooltip, InIsNotUseTooltip) == 0x000000, "Member 'SkillInfoIconForTacticalSkill_C_CreateTooltip::InIsNotUseTooltip' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_CreateTooltip, CallFunc_Not_PreBool_ReturnValue) == 0x000001, "Member 'SkillInfoIconForTacticalSkill_C_CreateTooltip::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_CreateTooltip, K2Node_DynamicCast_AsWBP_Tool_Tip_Skill) == 0x000008, "Member 'SkillInfoIconForTacticalSkill_C_CreateTooltip::K2Node_DynamicCast_AsWBP_Tool_Tip_Skill' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_CreateTooltip, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'SkillInfoIconForTacticalSkill_C_CreateTooltip::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_CreateTooltip, CallFunc_Create_ReturnValue) == 0x000018, "Member 'SkillInfoIconForTacticalSkill_C_CreateTooltip::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_CreateTooltip, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'SkillInfoIconForTacticalSkill_C_CreateTooltip::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_CreateTooltip, CallFunc_IsValid_ReturnValue_1) == 0x000021, "Member 'SkillInfoIconForTacticalSkill_C_CreateTooltip::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C.SetSkillInfo
// 0x0010 (0x0010 - 0x0000)
struct SkillInfoIconForTacticalSkill_C_SetSkillInfo final
{
public:
	int32                                         InSkillId;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InSkillLevel;                                      // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InIsInformationHidden;                             // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          InIsSkillMastery;                                  // 0x0009(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalIsSkillMastery;                               // 0x000A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalIsInformationHidden;                          // 0x000B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoIconForTacticalSkill_C_SetSkillInfo) == 0x000004, "Wrong alignment on SkillInfoIconForTacticalSkill_C_SetSkillInfo");
static_assert(sizeof(SkillInfoIconForTacticalSkill_C_SetSkillInfo) == 0x000010, "Wrong size on SkillInfoIconForTacticalSkill_C_SetSkillInfo");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_SetSkillInfo, InSkillId) == 0x000000, "Member 'SkillInfoIconForTacticalSkill_C_SetSkillInfo::InSkillId' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_SetSkillInfo, InSkillLevel) == 0x000004, "Member 'SkillInfoIconForTacticalSkill_C_SetSkillInfo::InSkillLevel' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_SetSkillInfo, InIsInformationHidden) == 0x000008, "Member 'SkillInfoIconForTacticalSkill_C_SetSkillInfo::InIsInformationHidden' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_SetSkillInfo, InIsSkillMastery) == 0x000009, "Member 'SkillInfoIconForTacticalSkill_C_SetSkillInfo::InIsSkillMastery' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_SetSkillInfo, LocalIsSkillMastery) == 0x00000A, "Member 'SkillInfoIconForTacticalSkill_C_SetSkillInfo::LocalIsSkillMastery' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_SetSkillInfo, LocalIsInformationHidden) == 0x00000B, "Member 'SkillInfoIconForTacticalSkill_C_SetSkillInfo::LocalIsInformationHidden' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_SetSkillInfo, CallFunc_Not_PreBool_ReturnValue) == 0x00000C, "Member 'SkillInfoIconForTacticalSkill_C_SetSkillInfo::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C.SetLevel
// 0x0088 (0x0088 - 0x0000)
struct SkillInfoIconForTacticalSkill_C_SetLevel final
{
public:
	int32                                         InLevel;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InSkillId;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalSkillId;                                      // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalLevel;                                        // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindSkillDataMaster_bIsValid;             // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81FA[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSkillDataMasterData                 CallFunc_FindSkillDataMaster_SkillDataMaster;      // 0x0018(0x0058)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81FB[0x3];                                     // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetCurrentSkilllevelOthersIncludedPlus_ReturnValue; // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81FC[0x3];                                     // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillInfoIconForTacticalSkill_C_SetLevel) == 0x000008, "Wrong alignment on SkillInfoIconForTacticalSkill_C_SetLevel");
static_assert(sizeof(SkillInfoIconForTacticalSkill_C_SetLevel) == 0x000088, "Wrong size on SkillInfoIconForTacticalSkill_C_SetLevel");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_SetLevel, InLevel) == 0x000000, "Member 'SkillInfoIconForTacticalSkill_C_SetLevel::InLevel' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_SetLevel, InSkillId) == 0x000004, "Member 'SkillInfoIconForTacticalSkill_C_SetLevel::InSkillId' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_SetLevel, LocalSkillId) == 0x000008, "Member 'SkillInfoIconForTacticalSkill_C_SetLevel::LocalSkillId' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_SetLevel, LocalLevel) == 0x00000C, "Member 'SkillInfoIconForTacticalSkill_C_SetLevel::LocalLevel' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_SetLevel, CallFunc_MakeLiteralByte_ReturnValue) == 0x000010, "Member 'SkillInfoIconForTacticalSkill_C_SetLevel::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_SetLevel, Temp_bool_Variable) == 0x000011, "Member 'SkillInfoIconForTacticalSkill_C_SetLevel::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_SetLevel, Temp_bool_Variable_1) == 0x000012, "Member 'SkillInfoIconForTacticalSkill_C_SetLevel::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_SetLevel, CallFunc_IsValid_ReturnValue) == 0x000013, "Member 'SkillInfoIconForTacticalSkill_C_SetLevel::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_SetLevel, CallFunc_FindSkillDataMaster_bIsValid) == 0x000014, "Member 'SkillInfoIconForTacticalSkill_C_SetLevel::CallFunc_FindSkillDataMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_SetLevel, CallFunc_FindSkillDataMaster_SkillDataMaster) == 0x000018, "Member 'SkillInfoIconForTacticalSkill_C_SetLevel::CallFunc_FindSkillDataMaster_SkillDataMaster' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_SetLevel, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000070, "Member 'SkillInfoIconForTacticalSkill_C_SetLevel::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_SetLevel, CallFunc_GetCurrentSkilllevelOthersIncludedPlus_ReturnValue) == 0x000074, "Member 'SkillInfoIconForTacticalSkill_C_SetLevel::CallFunc_GetCurrentSkilllevelOthersIncludedPlus_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_SetLevel, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000078, "Member 'SkillInfoIconForTacticalSkill_C_SetLevel::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_SetLevel, K2Node_Select_Default) == 0x00007C, "Member 'SkillInfoIconForTacticalSkill_C_SetLevel::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_SetLevel, CallFunc_Greater_IntInt_ReturnValue) == 0x000080, "Member 'SkillInfoIconForTacticalSkill_C_SetLevel::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_SetLevel, K2Node_Select_Default_1) == 0x000081, "Member 'SkillInfoIconForTacticalSkill_C_SetLevel::K2Node_Select_Default_1' has a wrong offset!");

// Function SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C.SetSkillButtonOffBase
// 0x0009 (0x0009 - 0x0000)
struct SkillInfoIconForTacticalSkill_C_SetSkillButtonOffBase final
{
public:
	bool                                          InIsButtonOff;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillInfoIconForTacticalSkill_C_SetSkillButtonOffBase) == 0x000001, "Wrong alignment on SkillInfoIconForTacticalSkill_C_SetSkillButtonOffBase");
static_assert(sizeof(SkillInfoIconForTacticalSkill_C_SetSkillButtonOffBase) == 0x000009, "Wrong size on SkillInfoIconForTacticalSkill_C_SetSkillButtonOffBase");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_SetSkillButtonOffBase, InIsButtonOff) == 0x000000, "Member 'SkillInfoIconForTacticalSkill_C_SetSkillButtonOffBase::InIsButtonOff' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_SetSkillButtonOffBase, Temp_byte_Variable) == 0x000001, "Member 'SkillInfoIconForTacticalSkill_C_SetSkillButtonOffBase::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_SetSkillButtonOffBase, Temp_byte_Variable_1) == 0x000002, "Member 'SkillInfoIconForTacticalSkill_C_SetSkillButtonOffBase::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_SetSkillButtonOffBase, Temp_bool_Variable) == 0x000003, "Member 'SkillInfoIconForTacticalSkill_C_SetSkillButtonOffBase::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_SetSkillButtonOffBase, Temp_byte_Variable_2) == 0x000004, "Member 'SkillInfoIconForTacticalSkill_C_SetSkillButtonOffBase::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_SetSkillButtonOffBase, Temp_byte_Variable_3) == 0x000005, "Member 'SkillInfoIconForTacticalSkill_C_SetSkillButtonOffBase::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_SetSkillButtonOffBase, Temp_bool_Variable_1) == 0x000006, "Member 'SkillInfoIconForTacticalSkill_C_SetSkillButtonOffBase::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_SetSkillButtonOffBase, K2Node_Select_Default) == 0x000007, "Member 'SkillInfoIconForTacticalSkill_C_SetSkillButtonOffBase::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_SetSkillButtonOffBase, K2Node_Select_Default_1) == 0x000008, "Member 'SkillInfoIconForTacticalSkill_C_SetSkillButtonOffBase::K2Node_Select_Default_1' has a wrong offset!");

// Function SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C.SetIsTacticalSkillEmpty
// 0x0018 (0x0018 - 0x0000)
struct SkillInfoIconForTacticalSkill_C_SetIsTacticalSkillEmpty final
{
public:
	ESkillActionPosition                          InSAP;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InIsEmpty;                                         // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetGaugeActive_OutIsValid;                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81FD[0x5];                                     // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USkillInfoGaugeActive_C*                CallFunc_GetGaugeActive_OutGaugeActive;            // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoIconForTacticalSkill_C_SetIsTacticalSkillEmpty) == 0x000008, "Wrong alignment on SkillInfoIconForTacticalSkill_C_SetIsTacticalSkillEmpty");
static_assert(sizeof(SkillInfoIconForTacticalSkill_C_SetIsTacticalSkillEmpty) == 0x000018, "Wrong size on SkillInfoIconForTacticalSkill_C_SetIsTacticalSkillEmpty");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_SetIsTacticalSkillEmpty, InSAP) == 0x000000, "Member 'SkillInfoIconForTacticalSkill_C_SetIsTacticalSkillEmpty::InSAP' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_SetIsTacticalSkillEmpty, InIsEmpty) == 0x000001, "Member 'SkillInfoIconForTacticalSkill_C_SetIsTacticalSkillEmpty::InIsEmpty' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_SetIsTacticalSkillEmpty, CallFunc_GetGaugeActive_OutIsValid) == 0x000002, "Member 'SkillInfoIconForTacticalSkill_C_SetIsTacticalSkillEmpty::CallFunc_GetGaugeActive_OutIsValid' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_SetIsTacticalSkillEmpty, CallFunc_GetGaugeActive_OutGaugeActive) == 0x000008, "Member 'SkillInfoIconForTacticalSkill_C_SetIsTacticalSkillEmpty::CallFunc_GetGaugeActive_OutGaugeActive' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_SetIsTacticalSkillEmpty, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'SkillInfoIconForTacticalSkill_C_SetIsTacticalSkillEmpty::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C.UpdateTacticalSkillIcon
// 0x0058 (0x0058 - 0x0000)
struct SkillInfoIconForTacticalSkill_C_UpdateTacticalSkillIcon final
{
public:
	ESkillActionPosition                          InSAP;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81FE[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InSkillId;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InIsMastery;                                       // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81FF[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USkillInfoGaugeActive_C*                LocalGauge;                                        // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LocalIsMastery;                                    // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8200[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LocalSkillId;                                      // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESkillActionPosition                          LocalSAP;                                          // 0x0020(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetGaugeActive_OutIsValid;                // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8201[0x5];                                     // 0x0023(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USkillInfoGaugeActive_C*                CallFunc_GetGaugeActive_OutGaugeActive;            // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8202[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerManager*                       CallFunc_GetPlayerManager_ReturnValue;             // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             CallFunc_GetSkillIconSmall_ReturnValue;            // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoIconForTacticalSkill_C_UpdateTacticalSkillIcon) == 0x000008, "Wrong alignment on SkillInfoIconForTacticalSkill_C_UpdateTacticalSkillIcon");
static_assert(sizeof(SkillInfoIconForTacticalSkill_C_UpdateTacticalSkillIcon) == 0x000058, "Wrong size on SkillInfoIconForTacticalSkill_C_UpdateTacticalSkillIcon");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_UpdateTacticalSkillIcon, InSAP) == 0x000000, "Member 'SkillInfoIconForTacticalSkill_C_UpdateTacticalSkillIcon::InSAP' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_UpdateTacticalSkillIcon, InSkillId) == 0x000004, "Member 'SkillInfoIconForTacticalSkill_C_UpdateTacticalSkillIcon::InSkillId' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_UpdateTacticalSkillIcon, InIsMastery) == 0x000008, "Member 'SkillInfoIconForTacticalSkill_C_UpdateTacticalSkillIcon::InIsMastery' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_UpdateTacticalSkillIcon, LocalGauge) == 0x000010, "Member 'SkillInfoIconForTacticalSkill_C_UpdateTacticalSkillIcon::LocalGauge' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_UpdateTacticalSkillIcon, LocalIsMastery) == 0x000018, "Member 'SkillInfoIconForTacticalSkill_C_UpdateTacticalSkillIcon::LocalIsMastery' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_UpdateTacticalSkillIcon, LocalSkillId) == 0x00001C, "Member 'SkillInfoIconForTacticalSkill_C_UpdateTacticalSkillIcon::LocalSkillId' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_UpdateTacticalSkillIcon, LocalSAP) == 0x000020, "Member 'SkillInfoIconForTacticalSkill_C_UpdateTacticalSkillIcon::LocalSAP' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_UpdateTacticalSkillIcon, CallFunc_IsValid_ReturnValue) == 0x000021, "Member 'SkillInfoIconForTacticalSkill_C_UpdateTacticalSkillIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_UpdateTacticalSkillIcon, CallFunc_GetGaugeActive_OutIsValid) == 0x000022, "Member 'SkillInfoIconForTacticalSkill_C_UpdateTacticalSkillIcon::CallFunc_GetGaugeActive_OutIsValid' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_UpdateTacticalSkillIcon, CallFunc_GetGaugeActive_OutGaugeActive) == 0x000028, "Member 'SkillInfoIconForTacticalSkill_C_UpdateTacticalSkillIcon::CallFunc_GetGaugeActive_OutGaugeActive' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_UpdateTacticalSkillIcon, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000030, "Member 'SkillInfoIconForTacticalSkill_C_UpdateTacticalSkillIcon::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_UpdateTacticalSkillIcon, CallFunc_IsValid_ReturnValue_1) == 0x000038, "Member 'SkillInfoIconForTacticalSkill_C_UpdateTacticalSkillIcon::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_UpdateTacticalSkillIcon, CallFunc_GetPlayerManager_ReturnValue) == 0x000040, "Member 'SkillInfoIconForTacticalSkill_C_UpdateTacticalSkillIcon::CallFunc_GetPlayerManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_UpdateTacticalSkillIcon, CallFunc_GetSkillIconSmall_ReturnValue) == 0x000048, "Member 'SkillInfoIconForTacticalSkill_C_UpdateTacticalSkillIcon::CallFunc_GetSkillIconSmall_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_UpdateTacticalSkillIcon, CallFunc_IsValid_ReturnValue_2) == 0x000050, "Member 'SkillInfoIconForTacticalSkill_C_UpdateTacticalSkillIcon::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_UpdateTacticalSkillIcon, CallFunc_IsValid_ReturnValue_3) == 0x000051, "Member 'SkillInfoIconForTacticalSkill_C_UpdateTacticalSkillIcon::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");

// Function SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C.InitSkillEmptyColor
// 0x0028 (0x0028 - 0x0000)
struct SkillInfoIconForTacticalSkill_C_InitSkillEmptyColor final
{
public:
	ESkillActionPosition                          InSAP;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8203[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_MakeColor_ReturnValue;                    // 0x0004(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetGaugeActive_OutIsValid;                // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8204[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USkillInfoGaugeActive_C*                CallFunc_GetGaugeActive_OutGaugeActive;            // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoIconForTacticalSkill_C_InitSkillEmptyColor) == 0x000008, "Wrong alignment on SkillInfoIconForTacticalSkill_C_InitSkillEmptyColor");
static_assert(sizeof(SkillInfoIconForTacticalSkill_C_InitSkillEmptyColor) == 0x000028, "Wrong size on SkillInfoIconForTacticalSkill_C_InitSkillEmptyColor");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_InitSkillEmptyColor, InSAP) == 0x000000, "Member 'SkillInfoIconForTacticalSkill_C_InitSkillEmptyColor::InSAP' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_InitSkillEmptyColor, CallFunc_MakeColor_ReturnValue) == 0x000004, "Member 'SkillInfoIconForTacticalSkill_C_InitSkillEmptyColor::CallFunc_MakeColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_InitSkillEmptyColor, CallFunc_GetGaugeActive_OutIsValid) == 0x000014, "Member 'SkillInfoIconForTacticalSkill_C_InitSkillEmptyColor::CallFunc_GetGaugeActive_OutIsValid' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_InitSkillEmptyColor, CallFunc_GetGaugeActive_OutGaugeActive) == 0x000018, "Member 'SkillInfoIconForTacticalSkill_C_InitSkillEmptyColor::CallFunc_GetGaugeActive_OutGaugeActive' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_InitSkillEmptyColor, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'SkillInfoIconForTacticalSkill_C_InitSkillEmptyColor::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C.InitSkillStopUpdate
// 0x0018 (0x0018 - 0x0000)
struct SkillInfoIconForTacticalSkill_C_InitSkillStopUpdate final
{
public:
	ESkillActionPosition                          InSAP;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetGaugeActive_OutIsValid;                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8205[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USkillInfoGaugeActive_C*                CallFunc_GetGaugeActive_OutGaugeActive;            // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoIconForTacticalSkill_C_InitSkillStopUpdate) == 0x000008, "Wrong alignment on SkillInfoIconForTacticalSkill_C_InitSkillStopUpdate");
static_assert(sizeof(SkillInfoIconForTacticalSkill_C_InitSkillStopUpdate) == 0x000018, "Wrong size on SkillInfoIconForTacticalSkill_C_InitSkillStopUpdate");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_InitSkillStopUpdate, InSAP) == 0x000000, "Member 'SkillInfoIconForTacticalSkill_C_InitSkillStopUpdate::InSAP' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_InitSkillStopUpdate, CallFunc_GetGaugeActive_OutIsValid) == 0x000001, "Member 'SkillInfoIconForTacticalSkill_C_InitSkillStopUpdate::CallFunc_GetGaugeActive_OutIsValid' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_InitSkillStopUpdate, CallFunc_GetGaugeActive_OutGaugeActive) == 0x000008, "Member 'SkillInfoIconForTacticalSkill_C_InitSkillStopUpdate::CallFunc_GetGaugeActive_OutGaugeActive' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_InitSkillStopUpdate, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'SkillInfoIconForTacticalSkill_C_InitSkillStopUpdate::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C.SetTacticalSkillAbillityType
// 0x0028 (0x0028 - 0x0000)
struct SkillInfoIconForTacticalSkill_C_SetTacticalSkillAbillityType final
{
public:
	ESBSkillAbilityType                           InSkillAbilityType;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSkillAbilityType                           LocalSkillAbilityType;                             // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FText                                   CallFunc_GetSkillAbillityTypeText_ReturnValue;     // 0x0008(0x0018)()
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoIconForTacticalSkill_C_SetTacticalSkillAbillityType) == 0x000008, "Wrong alignment on SkillInfoIconForTacticalSkill_C_SetTacticalSkillAbillityType");
static_assert(sizeof(SkillInfoIconForTacticalSkill_C_SetTacticalSkillAbillityType) == 0x000028, "Wrong size on SkillInfoIconForTacticalSkill_C_SetTacticalSkillAbillityType");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_SetTacticalSkillAbillityType, InSkillAbilityType) == 0x000000, "Member 'SkillInfoIconForTacticalSkill_C_SetTacticalSkillAbillityType::InSkillAbilityType' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_SetTacticalSkillAbillityType, LocalSkillAbilityType) == 0x000001, "Member 'SkillInfoIconForTacticalSkill_C_SetTacticalSkillAbillityType::LocalSkillAbilityType' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_SetTacticalSkillAbillityType, CallFunc_MakeLiteralByte_ReturnValue) == 0x000002, "Member 'SkillInfoIconForTacticalSkill_C_SetTacticalSkillAbillityType::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_SetTacticalSkillAbillityType, Temp_bool_Variable) == 0x000003, "Member 'SkillInfoIconForTacticalSkill_C_SetTacticalSkillAbillityType::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_SetTacticalSkillAbillityType, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000004, "Member 'SkillInfoIconForTacticalSkill_C_SetTacticalSkillAbillityType::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_SetTacticalSkillAbillityType, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000005, "Member 'SkillInfoIconForTacticalSkill_C_SetTacticalSkillAbillityType::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_SetTacticalSkillAbillityType, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000006, "Member 'SkillInfoIconForTacticalSkill_C_SetTacticalSkillAbillityType::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_SetTacticalSkillAbillityType, CallFunc_BooleanOR_ReturnValue) == 0x000007, "Member 'SkillInfoIconForTacticalSkill_C_SetTacticalSkillAbillityType::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_SetTacticalSkillAbillityType, CallFunc_GetSkillAbillityTypeText_ReturnValue) == 0x000008, "Member 'SkillInfoIconForTacticalSkill_C_SetTacticalSkillAbillityType::CallFunc_GetSkillAbillityTypeText_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_SetTacticalSkillAbillityType, K2Node_Select_Default) == 0x000020, "Member 'SkillInfoIconForTacticalSkill_C_SetTacticalSkillAbillityType::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_SetTacticalSkillAbillityType, CallFunc_IsValid_ReturnValue) == 0x000021, "Member 'SkillInfoIconForTacticalSkill_C_SetTacticalSkillAbillityType::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C.SwitchSkillBg
// 0x0018 (0x0018 - 0x0000)
struct SkillInfoIconForTacticalSkill_C_SwitchSkillBg final
{
public:
	bool                                          bBehind;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bAnim;                                             // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8206[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillInfoIconForTacticalSkill_C_SwitchSkillBg) == 0x000008, "Wrong alignment on SkillInfoIconForTacticalSkill_C_SwitchSkillBg");
static_assert(sizeof(SkillInfoIconForTacticalSkill_C_SwitchSkillBg) == 0x000018, "Wrong size on SkillInfoIconForTacticalSkill_C_SwitchSkillBg");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_SwitchSkillBg, bBehind) == 0x000000, "Member 'SkillInfoIconForTacticalSkill_C_SwitchSkillBg::bBehind' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_SwitchSkillBg, bAnim) == 0x000001, "Member 'SkillInfoIconForTacticalSkill_C_SwitchSkillBg::bAnim' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_SwitchSkillBg, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000008, "Member 'SkillInfoIconForTacticalSkill_C_SwitchSkillBg::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_SwitchSkillBg, CallFunc_PlayAnimationForward_ReturnValue) == 0x000010, "Member 'SkillInfoIconForTacticalSkill_C_SwitchSkillBg::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

// Function SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C.SetBtnForPadCursorMoveVisible
// 0x0005 (0x0005 - 0x0000)
struct SkillInfoIconForTacticalSkill_C_SetBtnForPadCursorMoveVisible final
{
public:
	bool                                          InIsVisible;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillInfoIconForTacticalSkill_C_SetBtnForPadCursorMoveVisible) == 0x000001, "Wrong alignment on SkillInfoIconForTacticalSkill_C_SetBtnForPadCursorMoveVisible");
static_assert(sizeof(SkillInfoIconForTacticalSkill_C_SetBtnForPadCursorMoveVisible) == 0x000005, "Wrong size on SkillInfoIconForTacticalSkill_C_SetBtnForPadCursorMoveVisible");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_SetBtnForPadCursorMoveVisible, InIsVisible) == 0x000000, "Member 'SkillInfoIconForTacticalSkill_C_SetBtnForPadCursorMoveVisible::InIsVisible' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_SetBtnForPadCursorMoveVisible, Temp_bool_Variable) == 0x000001, "Member 'SkillInfoIconForTacticalSkill_C_SetBtnForPadCursorMoveVisible::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_SetBtnForPadCursorMoveVisible, Temp_byte_Variable) == 0x000002, "Member 'SkillInfoIconForTacticalSkill_C_SetBtnForPadCursorMoveVisible::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_SetBtnForPadCursorMoveVisible, Temp_byte_Variable_1) == 0x000003, "Member 'SkillInfoIconForTacticalSkill_C_SetBtnForPadCursorMoveVisible::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForTacticalSkill_C_SetBtnForPadCursorMoveVisible, K2Node_Select_Default) == 0x000004, "Member 'SkillInfoIconForTacticalSkill_C_SetBtnForPadCursorMoveVisible::K2Node_Select_Default' has a wrong offset!");

}

