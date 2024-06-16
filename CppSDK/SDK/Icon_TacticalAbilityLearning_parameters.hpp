#pragma once

 

// Package: Icon_TacticalAbilityLearning

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function Icon_TacticalAbilityLearning.Icon_TacticalAbilityLearning_C.ExecuteUbergraph_Icon_TacticalAbilityLearning
// 0x0008 (0x0008 - 0x0000)
struct Icon_TacticalAbilityLearning_C_ExecuteUbergraph_Icon_TacticalAbilityLearning final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Icon_TacticalAbilityLearning_C_ExecuteUbergraph_Icon_TacticalAbilityLearning) == 0x000004, "Wrong alignment on Icon_TacticalAbilityLearning_C_ExecuteUbergraph_Icon_TacticalAbilityLearning");
static_assert(sizeof(Icon_TacticalAbilityLearning_C_ExecuteUbergraph_Icon_TacticalAbilityLearning) == 0x000008, "Wrong size on Icon_TacticalAbilityLearning_C_ExecuteUbergraph_Icon_TacticalAbilityLearning");
static_assert(offsetof(Icon_TacticalAbilityLearning_C_ExecuteUbergraph_Icon_TacticalAbilityLearning, EntryPoint) == 0x000000, "Member 'Icon_TacticalAbilityLearning_C_ExecuteUbergraph_Icon_TacticalAbilityLearning::EntryPoint' has a wrong offset!");
static_assert(offsetof(Icon_TacticalAbilityLearning_C_ExecuteUbergraph_Icon_TacticalAbilityLearning, K2Node_Event_IsDesignTime) == 0x000004, "Member 'Icon_TacticalAbilityLearning_C_ExecuteUbergraph_Icon_TacticalAbilityLearning::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function Icon_TacticalAbilityLearning.Icon_TacticalAbilityLearning_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct Icon_TacticalAbilityLearning_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Icon_TacticalAbilityLearning_C_PreConstruct) == 0x000001, "Wrong alignment on Icon_TacticalAbilityLearning_C_PreConstruct");
static_assert(sizeof(Icon_TacticalAbilityLearning_C_PreConstruct) == 0x000001, "Wrong size on Icon_TacticalAbilityLearning_C_PreConstruct");
static_assert(offsetof(Icon_TacticalAbilityLearning_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'Icon_TacticalAbilityLearning_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function Icon_TacticalAbilityLearning.Icon_TacticalAbilityLearning_C.Setup
// 0x0014 (0x0014 - 0x0000)
struct Icon_TacticalAbilityLearning_C_Setup final
{
public:
	int32                                         SkillId;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SkillLV;                                           // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSkillType                                  CallFunc_GetSkillType_ReturnValue;                 // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x000F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_3;                  // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Icon_TacticalAbilityLearning_C_Setup) == 0x000004, "Wrong alignment on Icon_TacticalAbilityLearning_C_Setup");
static_assert(sizeof(Icon_TacticalAbilityLearning_C_Setup) == 0x000014, "Wrong size on Icon_TacticalAbilityLearning_C_Setup");
static_assert(offsetof(Icon_TacticalAbilityLearning_C_Setup, SkillId) == 0x000000, "Member 'Icon_TacticalAbilityLearning_C_Setup::SkillId' has a wrong offset!");
static_assert(offsetof(Icon_TacticalAbilityLearning_C_Setup, SkillLV) == 0x000004, "Member 'Icon_TacticalAbilityLearning_C_Setup::SkillLV' has a wrong offset!");
static_assert(offsetof(Icon_TacticalAbilityLearning_C_Setup, CallFunc_GetSkillType_ReturnValue) == 0x000008, "Member 'Icon_TacticalAbilityLearning_C_Setup::CallFunc_GetSkillType_ReturnValue' has a wrong offset!");
static_assert(offsetof(Icon_TacticalAbilityLearning_C_Setup, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000009, "Member 'Icon_TacticalAbilityLearning_C_Setup::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(Icon_TacticalAbilityLearning_C_Setup, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x00000A, "Member 'Icon_TacticalAbilityLearning_C_Setup::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Icon_TacticalAbilityLearning_C_Setup, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x00000B, "Member 'Icon_TacticalAbilityLearning_C_Setup::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Icon_TacticalAbilityLearning_C_Setup, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x00000C, "Member 'Icon_TacticalAbilityLearning_C_Setup::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Icon_TacticalAbilityLearning_C_Setup, CallFunc_EqualEqual_ByteByte_ReturnValue_4) == 0x00000D, "Member 'Icon_TacticalAbilityLearning_C_Setup::CallFunc_EqualEqual_ByteByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(Icon_TacticalAbilityLearning_C_Setup, CallFunc_BooleanOR_ReturnValue) == 0x00000E, "Member 'Icon_TacticalAbilityLearning_C_Setup::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(Icon_TacticalAbilityLearning_C_Setup, CallFunc_BooleanOR_ReturnValue_1) == 0x00000F, "Member 'Icon_TacticalAbilityLearning_C_Setup::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Icon_TacticalAbilityLearning_C_Setup, CallFunc_BooleanOR_ReturnValue_2) == 0x000010, "Member 'Icon_TacticalAbilityLearning_C_Setup::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Icon_TacticalAbilityLearning_C_Setup, CallFunc_BooleanOR_ReturnValue_3) == 0x000011, "Member 'Icon_TacticalAbilityLearning_C_Setup::CallFunc_BooleanOR_ReturnValue_3' has a wrong offset!");

// Function Icon_TacticalAbilityLearning.Icon_TacticalAbilityLearning_C.SetIcon
// 0x0010 (0x0010 - 0x0000)
struct Icon_TacticalAbilityLearning_C_SetIcon final
{
public:
	class USBPlayerManager*                       CallFunc_GetPlayerManager_ReturnValue;             // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             CallFunc_GetSkillIconSmall_ReturnValue;            // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Icon_TacticalAbilityLearning_C_SetIcon) == 0x000008, "Wrong alignment on Icon_TacticalAbilityLearning_C_SetIcon");
static_assert(sizeof(Icon_TacticalAbilityLearning_C_SetIcon) == 0x000010, "Wrong size on Icon_TacticalAbilityLearning_C_SetIcon");
static_assert(offsetof(Icon_TacticalAbilityLearning_C_SetIcon, CallFunc_GetPlayerManager_ReturnValue) == 0x000000, "Member 'Icon_TacticalAbilityLearning_C_SetIcon::CallFunc_GetPlayerManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(Icon_TacticalAbilityLearning_C_SetIcon, CallFunc_GetSkillIconSmall_ReturnValue) == 0x000008, "Member 'Icon_TacticalAbilityLearning_C_SetIcon::CallFunc_GetSkillIconSmall_ReturnValue' has a wrong offset!");

// Function Icon_TacticalAbilityLearning.Icon_TacticalAbilityLearning_C.SetIconBG
// 0x0030 (0x0030 - 0x0000)
struct Icon_TacticalAbilityLearning_C_SetIconBG final
{
public:
	class USBPlayerManager*                       CallFunc_GetPlayerManager_ReturnValue;             // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBSkillIconBgType                            CallFunc_GetSkillIconBgType_ReturnValue;           // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91A0[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             CallFunc_Map_Find_Value;                           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Icon_TacticalAbilityLearning_C_SetIconBG) == 0x000008, "Wrong alignment on Icon_TacticalAbilityLearning_C_SetIconBG");
static_assert(sizeof(Icon_TacticalAbilityLearning_C_SetIconBG) == 0x000030, "Wrong size on Icon_TacticalAbilityLearning_C_SetIconBG");
static_assert(offsetof(Icon_TacticalAbilityLearning_C_SetIconBG, CallFunc_GetPlayerManager_ReturnValue) == 0x000000, "Member 'Icon_TacticalAbilityLearning_C_SetIconBG::CallFunc_GetPlayerManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(Icon_TacticalAbilityLearning_C_SetIconBG, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000008, "Member 'Icon_TacticalAbilityLearning_C_SetIconBG::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(Icon_TacticalAbilityLearning_C_SetIconBG, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000010, "Member 'Icon_TacticalAbilityLearning_C_SetIconBG::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(Icon_TacticalAbilityLearning_C_SetIconBG, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'Icon_TacticalAbilityLearning_C_SetIconBG::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Icon_TacticalAbilityLearning_C_SetIconBG, CallFunc_GetSkillIconBgType_ReturnValue) == 0x000019, "Member 'Icon_TacticalAbilityLearning_C_SetIconBG::CallFunc_GetSkillIconBgType_ReturnValue' has a wrong offset!");
static_assert(offsetof(Icon_TacticalAbilityLearning_C_SetIconBG, CallFunc_Map_Find_Value) == 0x000020, "Member 'Icon_TacticalAbilityLearning_C_SetIconBG::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(Icon_TacticalAbilityLearning_C_SetIconBG, CallFunc_Map_Find_ReturnValue) == 0x000028, "Member 'Icon_TacticalAbilityLearning_C_SetIconBG::CallFunc_Map_Find_ReturnValue' has a wrong offset!");

// Function Icon_TacticalAbilityLearning.Icon_TacticalAbilityLearning_C.SetElement
// 0x0030 (0x0030 - 0x0000)
struct Icon_TacticalAbilityLearning_C_SetElement final
{
public:
	class USBPlayerManager*                       CallFunc_GetPlayerManager_ReturnValue;             // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBSkillElementIconType                       CallFunc_GetSkillIconElementType_ReturnValue;      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91A1[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             CallFunc_Map_Find_Value;                           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Icon_TacticalAbilityLearning_C_SetElement) == 0x000008, "Wrong alignment on Icon_TacticalAbilityLearning_C_SetElement");
static_assert(sizeof(Icon_TacticalAbilityLearning_C_SetElement) == 0x000030, "Wrong size on Icon_TacticalAbilityLearning_C_SetElement");
static_assert(offsetof(Icon_TacticalAbilityLearning_C_SetElement, CallFunc_GetPlayerManager_ReturnValue) == 0x000000, "Member 'Icon_TacticalAbilityLearning_C_SetElement::CallFunc_GetPlayerManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(Icon_TacticalAbilityLearning_C_SetElement, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000008, "Member 'Icon_TacticalAbilityLearning_C_SetElement::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(Icon_TacticalAbilityLearning_C_SetElement, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000010, "Member 'Icon_TacticalAbilityLearning_C_SetElement::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(Icon_TacticalAbilityLearning_C_SetElement, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'Icon_TacticalAbilityLearning_C_SetElement::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Icon_TacticalAbilityLearning_C_SetElement, CallFunc_GetSkillIconElementType_ReturnValue) == 0x000019, "Member 'Icon_TacticalAbilityLearning_C_SetElement::CallFunc_GetSkillIconElementType_ReturnValue' has a wrong offset!");
static_assert(offsetof(Icon_TacticalAbilityLearning_C_SetElement, CallFunc_Map_Find_Value) == 0x000020, "Member 'Icon_TacticalAbilityLearning_C_SetElement::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(Icon_TacticalAbilityLearning_C_SetElement, CallFunc_Map_Find_ReturnValue) == 0x000028, "Member 'Icon_TacticalAbilityLearning_C_SetElement::CallFunc_Map_Find_ReturnValue' has a wrong offset!");

// Function Icon_TacticalAbilityLearning.Icon_TacticalAbilityLearning_C.SetNewMark
// 0x0005 (0x0005 - 0x0000)
struct Icon_TacticalAbilityLearning_C_SetNewMark final
{
public:
	bool                                          IsNew;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Icon_TacticalAbilityLearning_C_SetNewMark) == 0x000001, "Wrong alignment on Icon_TacticalAbilityLearning_C_SetNewMark");
static_assert(sizeof(Icon_TacticalAbilityLearning_C_SetNewMark) == 0x000005, "Wrong size on Icon_TacticalAbilityLearning_C_SetNewMark");
static_assert(offsetof(Icon_TacticalAbilityLearning_C_SetNewMark, IsNew) == 0x000000, "Member 'Icon_TacticalAbilityLearning_C_SetNewMark::IsNew' has a wrong offset!");
static_assert(offsetof(Icon_TacticalAbilityLearning_C_SetNewMark, CallFunc_MakeLiteralByte_ReturnValue) == 0x000001, "Member 'Icon_TacticalAbilityLearning_C_SetNewMark::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(Icon_TacticalAbilityLearning_C_SetNewMark, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000002, "Member 'Icon_TacticalAbilityLearning_C_SetNewMark::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Icon_TacticalAbilityLearning_C_SetNewMark, Temp_bool_Variable) == 0x000003, "Member 'Icon_TacticalAbilityLearning_C_SetNewMark::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Icon_TacticalAbilityLearning_C_SetNewMark, K2Node_Select_Default) == 0x000004, "Member 'Icon_TacticalAbilityLearning_C_SetNewMark::K2Node_Select_Default' has a wrong offset!");

// Function Icon_TacticalAbilityLearning.Icon_TacticalAbilityLearning_C.SetAmountValue
// 0x0020 (0x0020 - 0x0000)
struct Icon_TacticalAbilityLearning_C_SetAmountValue final
{
public:
	int32                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91A2[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
};
static_assert(alignof(Icon_TacticalAbilityLearning_C_SetAmountValue) == 0x000008, "Wrong alignment on Icon_TacticalAbilityLearning_C_SetAmountValue");
static_assert(sizeof(Icon_TacticalAbilityLearning_C_SetAmountValue) == 0x000020, "Wrong size on Icon_TacticalAbilityLearning_C_SetAmountValue");
static_assert(offsetof(Icon_TacticalAbilityLearning_C_SetAmountValue, Value) == 0x000000, "Member 'Icon_TacticalAbilityLearning_C_SetAmountValue::Value' has a wrong offset!");
static_assert(offsetof(Icon_TacticalAbilityLearning_C_SetAmountValue, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'Icon_TacticalAbilityLearning_C_SetAmountValue::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

// Function Icon_TacticalAbilityLearning.Icon_TacticalAbilityLearning_C.SetAmountVisible
// 0x0005 (0x0005 - 0x0000)
struct Icon_TacticalAbilityLearning_C_SetAmountVisible final
{
public:
	bool                                          Param_IsVisible;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Icon_TacticalAbilityLearning_C_SetAmountVisible) == 0x000001, "Wrong alignment on Icon_TacticalAbilityLearning_C_SetAmountVisible");
static_assert(sizeof(Icon_TacticalAbilityLearning_C_SetAmountVisible) == 0x000005, "Wrong size on Icon_TacticalAbilityLearning_C_SetAmountVisible");
static_assert(offsetof(Icon_TacticalAbilityLearning_C_SetAmountVisible, Param_IsVisible) == 0x000000, "Member 'Icon_TacticalAbilityLearning_C_SetAmountVisible::Param_IsVisible' has a wrong offset!");
static_assert(offsetof(Icon_TacticalAbilityLearning_C_SetAmountVisible, Temp_bool_Variable) == 0x000001, "Member 'Icon_TacticalAbilityLearning_C_SetAmountVisible::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Icon_TacticalAbilityLearning_C_SetAmountVisible, Temp_byte_Variable) == 0x000002, "Member 'Icon_TacticalAbilityLearning_C_SetAmountVisible::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(Icon_TacticalAbilityLearning_C_SetAmountVisible, Temp_byte_Variable_1) == 0x000003, "Member 'Icon_TacticalAbilityLearning_C_SetAmountVisible::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(Icon_TacticalAbilityLearning_C_SetAmountVisible, K2Node_Select_Default) == 0x000004, "Member 'Icon_TacticalAbilityLearning_C_SetAmountVisible::K2Node_Select_Default' has a wrong offset!");

// Function Icon_TacticalAbilityLearning.Icon_TacticalAbilityLearning_C.SetVisibleButton
// 0x0005 (0x0005 - 0x0000)
struct Icon_TacticalAbilityLearning_C_SetVisibleButton final
{
public:
	bool                                          Param_IsVisible;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Icon_TacticalAbilityLearning_C_SetVisibleButton) == 0x000001, "Wrong alignment on Icon_TacticalAbilityLearning_C_SetVisibleButton");
static_assert(sizeof(Icon_TacticalAbilityLearning_C_SetVisibleButton) == 0x000005, "Wrong size on Icon_TacticalAbilityLearning_C_SetVisibleButton");
static_assert(offsetof(Icon_TacticalAbilityLearning_C_SetVisibleButton, Param_IsVisible) == 0x000000, "Member 'Icon_TacticalAbilityLearning_C_SetVisibleButton::Param_IsVisible' has a wrong offset!");
static_assert(offsetof(Icon_TacticalAbilityLearning_C_SetVisibleButton, Temp_bool_Variable) == 0x000001, "Member 'Icon_TacticalAbilityLearning_C_SetVisibleButton::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Icon_TacticalAbilityLearning_C_SetVisibleButton, Temp_byte_Variable) == 0x000002, "Member 'Icon_TacticalAbilityLearning_C_SetVisibleButton::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(Icon_TacticalAbilityLearning_C_SetVisibleButton, Temp_byte_Variable_1) == 0x000003, "Member 'Icon_TacticalAbilityLearning_C_SetVisibleButton::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(Icon_TacticalAbilityLearning_C_SetVisibleButton, K2Node_Select_Default) == 0x000004, "Member 'Icon_TacticalAbilityLearning_C_SetVisibleButton::K2Node_Select_Default' has a wrong offset!");

// Function Icon_TacticalAbilityLearning.Icon_TacticalAbilityLearning_C.SetEnableButton
// 0x0001 (0x0001 - 0x0000)
struct Icon_TacticalAbilityLearning_C_SetEnableButton final
{
public:
	bool                                          IsEnable;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Icon_TacticalAbilityLearning_C_SetEnableButton) == 0x000001, "Wrong alignment on Icon_TacticalAbilityLearning_C_SetEnableButton");
static_assert(sizeof(Icon_TacticalAbilityLearning_C_SetEnableButton) == 0x000001, "Wrong size on Icon_TacticalAbilityLearning_C_SetEnableButton");
static_assert(offsetof(Icon_TacticalAbilityLearning_C_SetEnableButton, IsEnable) == 0x000000, "Member 'Icon_TacticalAbilityLearning_C_SetEnableButton::IsEnable' has a wrong offset!");

// Function Icon_TacticalAbilityLearning.Icon_TacticalAbilityLearning_C.GetToolTipWidget
// 0x0018 (0x0018 - 0x0000)
struct Icon_TacticalAbilityLearning_C_GetToolTipWidget final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_ToolTip_Skill_C*                   CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Icon_TacticalAbilityLearning_C_GetToolTipWidget) == 0x000008, "Wrong alignment on Icon_TacticalAbilityLearning_C_GetToolTipWidget");
static_assert(sizeof(Icon_TacticalAbilityLearning_C_GetToolTipWidget) == 0x000018, "Wrong size on Icon_TacticalAbilityLearning_C_GetToolTipWidget");
static_assert(offsetof(Icon_TacticalAbilityLearning_C_GetToolTipWidget, ReturnValue) == 0x000000, "Member 'Icon_TacticalAbilityLearning_C_GetToolTipWidget::ReturnValue' has a wrong offset!");
static_assert(offsetof(Icon_TacticalAbilityLearning_C_GetToolTipWidget, CallFunc_Create_ReturnValue) == 0x000008, "Member 'Icon_TacticalAbilityLearning_C_GetToolTipWidget::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(Icon_TacticalAbilityLearning_C_GetToolTipWidget, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'Icon_TacticalAbilityLearning_C_GetToolTipWidget::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

