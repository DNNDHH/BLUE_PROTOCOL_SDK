#pragma once

 

// Package: SkillInfoGaugeImagine

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.ExecuteUbergraph_SkillInfoGaugeImagine
// 0x0068 (0x0068 - 0x0000)
struct SkillInfoGaugeImagine_C_ExecuteUbergraph_SkillInfoGaugeImagine final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81C8[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Temp_name_Variable;                                // 0x0008(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBAttribute                                  Temp_byte_Variable;                                // 0x0010(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81C9[0x1];                                     // 0x0017(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             CallFunc_Map_Find_Value;                           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81CA[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             CallFunc_Map_Find_Value_1;                         // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_1;                   // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81CB[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_Event_inImagineUniqueId;                    // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   K2Node_Event_InImagineName;                        // 0x0050(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81CC[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_Num;                            // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bVisible;                             // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0062(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillInfoGaugeImagine_C_ExecuteUbergraph_SkillInfoGaugeImagine) == 0x000008, "Wrong alignment on SkillInfoGaugeImagine_C_ExecuteUbergraph_SkillInfoGaugeImagine");
static_assert(sizeof(SkillInfoGaugeImagine_C_ExecuteUbergraph_SkillInfoGaugeImagine) == 0x000068, "Wrong size on SkillInfoGaugeImagine_C_ExecuteUbergraph_SkillInfoGaugeImagine");
static_assert(offsetof(SkillInfoGaugeImagine_C_ExecuteUbergraph_SkillInfoGaugeImagine, EntryPoint) == 0x000000, "Member 'SkillInfoGaugeImagine_C_ExecuteUbergraph_SkillInfoGaugeImagine::EntryPoint' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_ExecuteUbergraph_SkillInfoGaugeImagine, CallFunc_MakeLiteralByte_ReturnValue) == 0x000004, "Member 'SkillInfoGaugeImagine_C_ExecuteUbergraph_SkillInfoGaugeImagine::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_ExecuteUbergraph_SkillInfoGaugeImagine, Temp_name_Variable) == 0x000008, "Member 'SkillInfoGaugeImagine_C_ExecuteUbergraph_SkillInfoGaugeImagine::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_ExecuteUbergraph_SkillInfoGaugeImagine, Temp_byte_Variable) == 0x000010, "Member 'SkillInfoGaugeImagine_C_ExecuteUbergraph_SkillInfoGaugeImagine::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_ExecuteUbergraph_SkillInfoGaugeImagine, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000011, "Member 'SkillInfoGaugeImagine_C_ExecuteUbergraph_SkillInfoGaugeImagine::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_ExecuteUbergraph_SkillInfoGaugeImagine, Temp_bool_Variable) == 0x000012, "Member 'SkillInfoGaugeImagine_C_ExecuteUbergraph_SkillInfoGaugeImagine::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_ExecuteUbergraph_SkillInfoGaugeImagine, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x000013, "Member 'SkillInfoGaugeImagine_C_ExecuteUbergraph_SkillInfoGaugeImagine::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_ExecuteUbergraph_SkillInfoGaugeImagine, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x000014, "Member 'SkillInfoGaugeImagine_C_ExecuteUbergraph_SkillInfoGaugeImagine::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_ExecuteUbergraph_SkillInfoGaugeImagine, Temp_bool_Variable_1) == 0x000015, "Member 'SkillInfoGaugeImagine_C_ExecuteUbergraph_SkillInfoGaugeImagine::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_ExecuteUbergraph_SkillInfoGaugeImagine, K2Node_Event_IsDesignTime) == 0x000016, "Member 'SkillInfoGaugeImagine_C_ExecuteUbergraph_SkillInfoGaugeImagine::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_ExecuteUbergraph_SkillInfoGaugeImagine, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000018, "Member 'SkillInfoGaugeImagine_C_ExecuteUbergraph_SkillInfoGaugeImagine::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_ExecuteUbergraph_SkillInfoGaugeImagine, CallFunc_Map_Find_Value) == 0x000020, "Member 'SkillInfoGaugeImagine_C_ExecuteUbergraph_SkillInfoGaugeImagine::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_ExecuteUbergraph_SkillInfoGaugeImagine, CallFunc_Map_Find_ReturnValue) == 0x000028, "Member 'SkillInfoGaugeImagine_C_ExecuteUbergraph_SkillInfoGaugeImagine::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_ExecuteUbergraph_SkillInfoGaugeImagine, CallFunc_Map_Find_Value_1) == 0x000030, "Member 'SkillInfoGaugeImagine_C_ExecuteUbergraph_SkillInfoGaugeImagine::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_ExecuteUbergraph_SkillInfoGaugeImagine, CallFunc_Map_Find_ReturnValue_1) == 0x000038, "Member 'SkillInfoGaugeImagine_C_ExecuteUbergraph_SkillInfoGaugeImagine::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_ExecuteUbergraph_SkillInfoGaugeImagine, K2Node_Event_inImagineUniqueId) == 0x000040, "Member 'SkillInfoGaugeImagine_C_ExecuteUbergraph_SkillInfoGaugeImagine::K2Node_Event_inImagineUniqueId' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_ExecuteUbergraph_SkillInfoGaugeImagine, K2Node_Event_InImagineName) == 0x000050, "Member 'SkillInfoGaugeImagine_C_ExecuteUbergraph_SkillInfoGaugeImagine::K2Node_Event_InImagineName' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_ExecuteUbergraph_SkillInfoGaugeImagine, K2Node_SwitchEnum_CmpSuccess) == 0x000058, "Member 'SkillInfoGaugeImagine_C_ExecuteUbergraph_SkillInfoGaugeImagine::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_ExecuteUbergraph_SkillInfoGaugeImagine, K2Node_CustomEvent_Num) == 0x00005C, "Member 'SkillInfoGaugeImagine_C_ExecuteUbergraph_SkillInfoGaugeImagine::K2Node_CustomEvent_Num' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_ExecuteUbergraph_SkillInfoGaugeImagine, K2Node_Event_bVisible) == 0x000060, "Member 'SkillInfoGaugeImagine_C_ExecuteUbergraph_SkillInfoGaugeImagine::K2Node_Event_bVisible' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_ExecuteUbergraph_SkillInfoGaugeImagine, K2Node_Select_Default) == 0x000061, "Member 'SkillInfoGaugeImagine_C_ExecuteUbergraph_SkillInfoGaugeImagine::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_ExecuteUbergraph_SkillInfoGaugeImagine, K2Node_Select_Default_1) == 0x000062, "Member 'SkillInfoGaugeImagine_C_ExecuteUbergraph_SkillInfoGaugeImagine::K2Node_Select_Default_1' has a wrong offset!");

// Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.OnIconDisableChange
// 0x0001 (0x0001 - 0x0000)
struct SkillInfoGaugeImagine_C_OnIconDisableChange final
{
public:
	bool                                          bVisible;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoGaugeImagine_C_OnIconDisableChange) == 0x000001, "Wrong alignment on SkillInfoGaugeImagine_C_OnIconDisableChange");
static_assert(sizeof(SkillInfoGaugeImagine_C_OnIconDisableChange) == 0x000001, "Wrong size on SkillInfoGaugeImagine_C_OnIconDisableChange");
static_assert(offsetof(SkillInfoGaugeImagine_C_OnIconDisableChange, bVisible) == 0x000000, "Member 'SkillInfoGaugeImagine_C_OnIconDisableChange::bVisible' has a wrong offset!");

// Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.SetSlotNum
// 0x0004 (0x0004 - 0x0000)
struct SkillInfoGaugeImagine_C_SetSlotNum final
{
public:
	int32                                         Num;                                               // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillInfoGaugeImagine_C_SetSlotNum) == 0x000004, "Wrong alignment on SkillInfoGaugeImagine_C_SetSlotNum");
static_assert(sizeof(SkillInfoGaugeImagine_C_SetSlotNum) == 0x000004, "Wrong size on SkillInfoGaugeImagine_C_SetSlotNum");
static_assert(offsetof(SkillInfoGaugeImagine_C_SetSlotNum, Num) == 0x000000, "Member 'SkillInfoGaugeImagine_C_SetSlotNum::Num' has a wrong offset!");

// Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.OnUpdateIconTexture
// 0x0018 (0x0018 - 0x0000)
struct SkillInfoGaugeImagine_C_OnUpdateIconTexture final
{
public:
	class FString                                 InImagineUniqueId;                                 // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FName                                   InImagineName;                                     // 0x0010(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillInfoGaugeImagine_C_OnUpdateIconTexture) == 0x000008, "Wrong alignment on SkillInfoGaugeImagine_C_OnUpdateIconTexture");
static_assert(sizeof(SkillInfoGaugeImagine_C_OnUpdateIconTexture) == 0x000018, "Wrong size on SkillInfoGaugeImagine_C_OnUpdateIconTexture");
static_assert(offsetof(SkillInfoGaugeImagine_C_OnUpdateIconTexture, InImagineUniqueId) == 0x000000, "Member 'SkillInfoGaugeImagine_C_OnUpdateIconTexture::InImagineUniqueId' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_OnUpdateIconTexture, InImagineName) == 0x000010, "Member 'SkillInfoGaugeImagine_C_OnUpdateIconTexture::InImagineName' has a wrong offset!");

// Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct SkillInfoGaugeImagine_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoGaugeImagine_C_PreConstruct) == 0x000001, "Wrong alignment on SkillInfoGaugeImagine_C_PreConstruct");
static_assert(sizeof(SkillInfoGaugeImagine_C_PreConstruct) == 0x000001, "Wrong size on SkillInfoGaugeImagine_C_PreConstruct");
static_assert(offsetof(SkillInfoGaugeImagine_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'SkillInfoGaugeImagine_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.SetGaugeValue
// 0x0038 (0x0038 - 0x0000)
struct SkillInfoGaugeImagine_C_SetGaugeValue final
{
public:
	float                                         InValue;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InRecastTime;                                      // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81CD[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_FCeil_ReturnValue;                        // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0010(0x0018)()
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x002E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x002F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0033(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillInfoGaugeImagine_C_SetGaugeValue) == 0x000008, "Wrong alignment on SkillInfoGaugeImagine_C_SetGaugeValue");
static_assert(sizeof(SkillInfoGaugeImagine_C_SetGaugeValue) == 0x000038, "Wrong size on SkillInfoGaugeImagine_C_SetGaugeValue");
static_assert(offsetof(SkillInfoGaugeImagine_C_SetGaugeValue, InValue) == 0x000000, "Member 'SkillInfoGaugeImagine_C_SetGaugeValue::InValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_SetGaugeValue, InRecastTime) == 0x000004, "Member 'SkillInfoGaugeImagine_C_SetGaugeValue::InRecastTime' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_SetGaugeValue, CallFunc_MakeLiteralByte_ReturnValue) == 0x000008, "Member 'SkillInfoGaugeImagine_C_SetGaugeValue::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_SetGaugeValue, CallFunc_FCeil_ReturnValue) == 0x00000C, "Member 'SkillInfoGaugeImagine_C_SetGaugeValue::CallFunc_FCeil_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_SetGaugeValue, CallFunc_Conv_IntToText_ReturnValue) == 0x000010, "Member 'SkillInfoGaugeImagine_C_SetGaugeValue::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_SetGaugeValue, CallFunc_FClamp_ReturnValue) == 0x000028, "Member 'SkillInfoGaugeImagine_C_SetGaugeValue::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_SetGaugeValue, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x00002C, "Member 'SkillInfoGaugeImagine_C_SetGaugeValue::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_SetGaugeValue, CallFunc_Less_FloatFloat_ReturnValue) == 0x00002D, "Member 'SkillInfoGaugeImagine_C_SetGaugeValue::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_SetGaugeValue, CallFunc_BooleanAND_ReturnValue) == 0x00002E, "Member 'SkillInfoGaugeImagine_C_SetGaugeValue::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_SetGaugeValue, CallFunc_Not_PreBool_ReturnValue) == 0x00002F, "Member 'SkillInfoGaugeImagine_C_SetGaugeValue::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_SetGaugeValue, CallFunc_Not_PreBool_ReturnValue_1) == 0x000030, "Member 'SkillInfoGaugeImagine_C_SetGaugeValue::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_SetGaugeValue, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000031, "Member 'SkillInfoGaugeImagine_C_SetGaugeValue::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_SetGaugeValue, Temp_bool_Variable) == 0x000032, "Member 'SkillInfoGaugeImagine_C_SetGaugeValue::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_SetGaugeValue, K2Node_Select_Default) == 0x000033, "Member 'SkillInfoGaugeImagine_C_SetGaugeValue::K2Node_Select_Default' has a wrong offset!");

// Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.SetText
// 0x0018 (0x0018 - 0x0000)
struct SkillInfoGaugeImagine_C_SetText final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(SkillInfoGaugeImagine_C_SetText) == 0x000008, "Wrong alignment on SkillInfoGaugeImagine_C_SetText");
static_assert(sizeof(SkillInfoGaugeImagine_C_SetText) == 0x000018, "Wrong size on SkillInfoGaugeImagine_C_SetText");
static_assert(offsetof(SkillInfoGaugeImagine_C_SetText, InText) == 0x000000, "Member 'SkillInfoGaugeImagine_C_SetText::InText' has a wrong offset!");

// Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.PlayAnimUse
// 0x0010 (0x0010 - 0x0000)
struct SkillInfoGaugeImagine_C_PlayAnimUse final
{
public:
	bool                                          bInit;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81CE[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetEndTime_ReturnValue;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillInfoGaugeImagine_C_PlayAnimUse) == 0x000008, "Wrong alignment on SkillInfoGaugeImagine_C_PlayAnimUse");
static_assert(sizeof(SkillInfoGaugeImagine_C_PlayAnimUse) == 0x000010, "Wrong size on SkillInfoGaugeImagine_C_PlayAnimUse");
static_assert(offsetof(SkillInfoGaugeImagine_C_PlayAnimUse, bInit) == 0x000000, "Member 'SkillInfoGaugeImagine_C_PlayAnimUse::bInit' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_PlayAnimUse, CallFunc_GetEndTime_ReturnValue) == 0x000004, "Member 'SkillInfoGaugeImagine_C_PlayAnimUse::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_PlayAnimUse, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'SkillInfoGaugeImagine_C_PlayAnimUse::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.PlayAnimChargeEnd
// 0x0010 (0x0010 - 0x0000)
struct SkillInfoGaugeImagine_C_PlayAnimChargeEnd final
{
public:
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81CF[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillInfoGaugeImagine_C_PlayAnimChargeEnd) == 0x000008, "Wrong alignment on SkillInfoGaugeImagine_C_PlayAnimChargeEnd");
static_assert(sizeof(SkillInfoGaugeImagine_C_PlayAnimChargeEnd) == 0x000010, "Wrong size on SkillInfoGaugeImagine_C_PlayAnimChargeEnd");
static_assert(offsetof(SkillInfoGaugeImagine_C_PlayAnimChargeEnd, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000000, "Member 'SkillInfoGaugeImagine_C_PlayAnimChargeEnd::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_PlayAnimChargeEnd, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'SkillInfoGaugeImagine_C_PlayAnimChargeEnd::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.SetEnabled
// 0x0001 (0x0001 - 0x0000)
struct SkillInfoGaugeImagine_C_SetEnabled final
{
public:
	bool                                          bEnabled;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoGaugeImagine_C_SetEnabled) == 0x000001, "Wrong alignment on SkillInfoGaugeImagine_C_SetEnabled");
static_assert(sizeof(SkillInfoGaugeImagine_C_SetEnabled) == 0x000001, "Wrong size on SkillInfoGaugeImagine_C_SetEnabled");
static_assert(offsetof(SkillInfoGaugeImagine_C_SetEnabled, bEnabled) == 0x000000, "Member 'SkillInfoGaugeImagine_C_SetEnabled::bEnabled' has a wrong offset!");

// Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.PlayAnimChargStart
// 0x0010 (0x0010 - 0x0000)
struct SkillInfoGaugeImagine_C_PlayAnimChargStart final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoGaugeImagine_C_PlayAnimChargStart) == 0x000008, "Wrong alignment on SkillInfoGaugeImagine_C_PlayAnimChargStart");
static_assert(sizeof(SkillInfoGaugeImagine_C_PlayAnimChargStart) == 0x000010, "Wrong size on SkillInfoGaugeImagine_C_PlayAnimChargStart");
static_assert(offsetof(SkillInfoGaugeImagine_C_PlayAnimChargStart, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'SkillInfoGaugeImagine_C_PlayAnimChargStart::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_PlayAnimChargStart, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000008, "Member 'SkillInfoGaugeImagine_C_PlayAnimChargStart::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");

// Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.UpdateIconTexture
// 0x01B8 (0x01B8 - 0x0000)
struct SkillInfoGaugeImagine_C_UpdateIconTexture final
{
public:
	class FString                                 InImagineUniqueId;                                 // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FName                                   InImagineName;                                     // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InUseImagineArtsName;                              // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81D0[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 InImagineArtsName;                                 // 0x0020(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FName                                   LocalRowName;                                      // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81D1[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Temp_name_Variable;                                // 0x0044(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBAttribute                                  Temp_byte_Variable;                                // 0x004C(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81D2[0x3];                                     // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBImagineInfo                         CallFunc_GetDataTableRowFromName_OutRow;           // 0x0050(0x0048)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x009A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x009B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x009D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81D3[0x2];                                     // 0x009E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             CallFunc_Map_Find_Value;                           // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81D4[0x7];                                     // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             CallFunc_Map_Find_Value_1;                         // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_1;                   // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81D5[0x6];                                     // 0x00BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBMasterImagine                       CallFunc_FindMasterImagineByArtsName_ReturnValue;  // 0x00C8(0x00B0)()
	class UTexture2D*                             CallFunc_Map_Find_Value_2;                         // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_2;                   // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0181(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81D6[0x6];                                     // 0x0182(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             CallFunc_Map_Find_Value_3;                         // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_3;                   // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81D7[0x7];                                     // 0x0191(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetImagineTableRowName_ReturnValue;       // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Select_Default_1;                           // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoGaugeImagine_C_UpdateIconTexture) == 0x000008, "Wrong alignment on SkillInfoGaugeImagine_C_UpdateIconTexture");
static_assert(sizeof(SkillInfoGaugeImagine_C_UpdateIconTexture) == 0x0001B8, "Wrong size on SkillInfoGaugeImagine_C_UpdateIconTexture");
static_assert(offsetof(SkillInfoGaugeImagine_C_UpdateIconTexture, InImagineUniqueId) == 0x000000, "Member 'SkillInfoGaugeImagine_C_UpdateIconTexture::InImagineUniqueId' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_UpdateIconTexture, InImagineName) == 0x000010, "Member 'SkillInfoGaugeImagine_C_UpdateIconTexture::InImagineName' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_UpdateIconTexture, InUseImagineArtsName) == 0x000018, "Member 'SkillInfoGaugeImagine_C_UpdateIconTexture::InUseImagineArtsName' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_UpdateIconTexture, InImagineArtsName) == 0x000020, "Member 'SkillInfoGaugeImagine_C_UpdateIconTexture::InImagineArtsName' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_UpdateIconTexture, LocalRowName) == 0x000030, "Member 'SkillInfoGaugeImagine_C_UpdateIconTexture::LocalRowName' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_UpdateIconTexture, CallFunc_Conv_StringToName_ReturnValue) == 0x000038, "Member 'SkillInfoGaugeImagine_C_UpdateIconTexture::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_UpdateIconTexture, CallFunc_NotEqual_NameName_ReturnValue) == 0x000040, "Member 'SkillInfoGaugeImagine_C_UpdateIconTexture::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_UpdateIconTexture, Temp_name_Variable) == 0x000044, "Member 'SkillInfoGaugeImagine_C_UpdateIconTexture::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_UpdateIconTexture, Temp_byte_Variable) == 0x00004C, "Member 'SkillInfoGaugeImagine_C_UpdateIconTexture::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_UpdateIconTexture, CallFunc_GetDataTableRowFromName_OutRow) == 0x000050, "Member 'SkillInfoGaugeImagine_C_UpdateIconTexture::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_UpdateIconTexture, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000098, "Member 'SkillInfoGaugeImagine_C_UpdateIconTexture::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_UpdateIconTexture, Temp_bool_Variable) == 0x000099, "Member 'SkillInfoGaugeImagine_C_UpdateIconTexture::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_UpdateIconTexture, Temp_bool_Variable_1) == 0x00009A, "Member 'SkillInfoGaugeImagine_C_UpdateIconTexture::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_UpdateIconTexture, CallFunc_MakeLiteralByte_ReturnValue) == 0x00009B, "Member 'SkillInfoGaugeImagine_C_UpdateIconTexture::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_UpdateIconTexture, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x00009C, "Member 'SkillInfoGaugeImagine_C_UpdateIconTexture::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_UpdateIconTexture, K2Node_SwitchEnum_CmpSuccess) == 0x00009D, "Member 'SkillInfoGaugeImagine_C_UpdateIconTexture::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_UpdateIconTexture, CallFunc_Map_Find_Value) == 0x0000A0, "Member 'SkillInfoGaugeImagine_C_UpdateIconTexture::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_UpdateIconTexture, CallFunc_Map_Find_ReturnValue) == 0x0000A8, "Member 'SkillInfoGaugeImagine_C_UpdateIconTexture::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_UpdateIconTexture, CallFunc_Map_Find_Value_1) == 0x0000B0, "Member 'SkillInfoGaugeImagine_C_UpdateIconTexture::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_UpdateIconTexture, CallFunc_Map_Find_ReturnValue_1) == 0x0000B8, "Member 'SkillInfoGaugeImagine_C_UpdateIconTexture::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_UpdateIconTexture, CallFunc_GetMasterDataManager_IsValid) == 0x0000B9, "Member 'SkillInfoGaugeImagine_C_UpdateIconTexture::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_UpdateIconTexture, CallFunc_GetMasterDataManager_ReturnValue) == 0x0000C0, "Member 'SkillInfoGaugeImagine_C_UpdateIconTexture::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_UpdateIconTexture, CallFunc_FindMasterImagineByArtsName_ReturnValue) == 0x0000C8, "Member 'SkillInfoGaugeImagine_C_UpdateIconTexture::CallFunc_FindMasterImagineByArtsName_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_UpdateIconTexture, CallFunc_Map_Find_Value_2) == 0x000178, "Member 'SkillInfoGaugeImagine_C_UpdateIconTexture::CallFunc_Map_Find_Value_2' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_UpdateIconTexture, CallFunc_Map_Find_ReturnValue_2) == 0x000180, "Member 'SkillInfoGaugeImagine_C_UpdateIconTexture::CallFunc_Map_Find_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_UpdateIconTexture, K2Node_Select_Default) == 0x000181, "Member 'SkillInfoGaugeImagine_C_UpdateIconTexture::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_UpdateIconTexture, CallFunc_Map_Find_Value_3) == 0x000188, "Member 'SkillInfoGaugeImagine_C_UpdateIconTexture::CallFunc_Map_Find_Value_3' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_UpdateIconTexture, CallFunc_Map_Find_ReturnValue_3) == 0x000190, "Member 'SkillInfoGaugeImagine_C_UpdateIconTexture::CallFunc_Map_Find_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_UpdateIconTexture, CallFunc_GetSBPlayerController_ReturnValue) == 0x000198, "Member 'SkillInfoGaugeImagine_C_UpdateIconTexture::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_UpdateIconTexture, CallFunc_GetImagineTableRowName_ReturnValue) == 0x0001A0, "Member 'SkillInfoGaugeImagine_C_UpdateIconTexture::CallFunc_GetImagineTableRowName_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_UpdateIconTexture, K2Node_Select_Default_1) == 0x0001A8, "Member 'SkillInfoGaugeImagine_C_UpdateIconTexture::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_UpdateIconTexture, CallFunc_Not_PreBool_ReturnValue) == 0x0001B0, "Member 'SkillInfoGaugeImagine_C_UpdateIconTexture::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.SetKeyGuideVisible
// 0x0030 (0x0030 - 0x0000)
struct SkillInfoGaugeImagine_C_SetKeyGuideVisible final
{
public:
	bool                                          Param_IsVisible;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81D8[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHUD*                                   CallFunc_GetHUD_ReturnValue;                       // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_BattleHUD_C>      K2Node_DynamicCast_AsBPI_Battle_HUD;               // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoGaugeImagine_C_SetKeyGuideVisible) == 0x000008, "Wrong alignment on SkillInfoGaugeImagine_C_SetKeyGuideVisible");
static_assert(sizeof(SkillInfoGaugeImagine_C_SetKeyGuideVisible) == 0x000030, "Wrong size on SkillInfoGaugeImagine_C_SetKeyGuideVisible");
static_assert(offsetof(SkillInfoGaugeImagine_C_SetKeyGuideVisible, Param_IsVisible) == 0x000000, "Member 'SkillInfoGaugeImagine_C_SetKeyGuideVisible::Param_IsVisible' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_SetKeyGuideVisible, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'SkillInfoGaugeImagine_C_SetKeyGuideVisible::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_SetKeyGuideVisible, CallFunc_GetHUD_ReturnValue) == 0x000010, "Member 'SkillInfoGaugeImagine_C_SetKeyGuideVisible::CallFunc_GetHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_SetKeyGuideVisible, K2Node_DynamicCast_AsBPI_Battle_HUD) == 0x000018, "Member 'SkillInfoGaugeImagine_C_SetKeyGuideVisible::K2Node_DynamicCast_AsBPI_Battle_HUD' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_SetKeyGuideVisible, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'SkillInfoGaugeImagine_C_SetKeyGuideVisible::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.SetIconOpacity
// 0x0010 (0x0010 - 0x0000)
struct SkillInfoGaugeImagine_C_SetIconOpacity final
{
public:
	bool                                          IsEquipped;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81D9[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable;                               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_1;                             // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default;                             // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillInfoGaugeImagine_C_SetIconOpacity) == 0x000004, "Wrong alignment on SkillInfoGaugeImagine_C_SetIconOpacity");
static_assert(sizeof(SkillInfoGaugeImagine_C_SetIconOpacity) == 0x000010, "Wrong size on SkillInfoGaugeImagine_C_SetIconOpacity");
static_assert(offsetof(SkillInfoGaugeImagine_C_SetIconOpacity, IsEquipped) == 0x000000, "Member 'SkillInfoGaugeImagine_C_SetIconOpacity::IsEquipped' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_SetIconOpacity, Temp_bool_Variable) == 0x000001, "Member 'SkillInfoGaugeImagine_C_SetIconOpacity::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_SetIconOpacity, Temp_float_Variable) == 0x000004, "Member 'SkillInfoGaugeImagine_C_SetIconOpacity::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_SetIconOpacity, Temp_float_Variable_1) == 0x000008, "Member 'SkillInfoGaugeImagine_C_SetIconOpacity::Temp_float_Variable_1' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_SetIconOpacity, K2Node_Select_Default) == 0x00000C, "Member 'SkillInfoGaugeImagine_C_SetIconOpacity::K2Node_Select_Default' has a wrong offset!");

// Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.SetIsEmpty
// 0x0014 (0x0014 - 0x0000)
struct SkillInfoGaugeImagine_C_SetIsEmpty final
{
public:
	bool                                          InIsEmpty;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81DA[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81DB[0x2];                                     // 0x000E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillInfoGaugeImagine_C_SetIsEmpty) == 0x000004, "Wrong alignment on SkillInfoGaugeImagine_C_SetIsEmpty");
static_assert(sizeof(SkillInfoGaugeImagine_C_SetIsEmpty) == 0x000014, "Wrong size on SkillInfoGaugeImagine_C_SetIsEmpty");
static_assert(offsetof(SkillInfoGaugeImagine_C_SetIsEmpty, InIsEmpty) == 0x000000, "Member 'SkillInfoGaugeImagine_C_SetIsEmpty::InIsEmpty' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_SetIsEmpty, Temp_int_Variable) == 0x000004, "Member 'SkillInfoGaugeImagine_C_SetIsEmpty::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_SetIsEmpty, Temp_int_Variable_1) == 0x000008, "Member 'SkillInfoGaugeImagine_C_SetIsEmpty::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_SetIsEmpty, Temp_bool_Variable) == 0x00000C, "Member 'SkillInfoGaugeImagine_C_SetIsEmpty::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_SetIsEmpty, CallFunc_IsValid_ReturnValue) == 0x00000D, "Member 'SkillInfoGaugeImagine_C_SetIsEmpty::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_SetIsEmpty, K2Node_Select_Default) == 0x000010, "Member 'SkillInfoGaugeImagine_C_SetIsEmpty::K2Node_Select_Default' has a wrong offset!");

// Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.SetEmptyColor
// 0x0014 (0x0014 - 0x0000)
struct SkillInfoGaugeImagine_C_SetEmptyColor final
{
public:
	struct FLinearColor                           InColor;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoGaugeImagine_C_SetEmptyColor) == 0x000004, "Wrong alignment on SkillInfoGaugeImagine_C_SetEmptyColor");
static_assert(sizeof(SkillInfoGaugeImagine_C_SetEmptyColor) == 0x000014, "Wrong size on SkillInfoGaugeImagine_C_SetEmptyColor");
static_assert(offsetof(SkillInfoGaugeImagine_C_SetEmptyColor, InColor) == 0x000000, "Member 'SkillInfoGaugeImagine_C_SetEmptyColor::InColor' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_SetEmptyColor, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'SkillInfoGaugeImagine_C_SetEmptyColor::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.SetLimitIconVisibility
// 0x0006 (0x0006 - 0x0000)
struct SkillInfoGaugeImagine_C_SetLimitIconVisibility final
{
public:
	bool                                          InIsVisible;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillInfoGaugeImagine_C_SetLimitIconVisibility) == 0x000001, "Wrong alignment on SkillInfoGaugeImagine_C_SetLimitIconVisibility");
static_assert(sizeof(SkillInfoGaugeImagine_C_SetLimitIconVisibility) == 0x000006, "Wrong size on SkillInfoGaugeImagine_C_SetLimitIconVisibility");
static_assert(offsetof(SkillInfoGaugeImagine_C_SetLimitIconVisibility, InIsVisible) == 0x000000, "Member 'SkillInfoGaugeImagine_C_SetLimitIconVisibility::InIsVisible' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_SetLimitIconVisibility, Temp_byte_Variable) == 0x000001, "Member 'SkillInfoGaugeImagine_C_SetLimitIconVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_SetLimitIconVisibility, Temp_byte_Variable_1) == 0x000002, "Member 'SkillInfoGaugeImagine_C_SetLimitIconVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_SetLimitIconVisibility, Temp_bool_Variable) == 0x000003, "Member 'SkillInfoGaugeImagine_C_SetLimitIconVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_SetLimitIconVisibility, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'SkillInfoGaugeImagine_C_SetLimitIconVisibility::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_SetLimitIconVisibility, K2Node_Select_Default) == 0x000005, "Member 'SkillInfoGaugeImagine_C_SetLimitIconVisibility::K2Node_Select_Default' has a wrong offset!");

// Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.SetKeyVisibilityPermanent
// 0x0005 (0x0005 - 0x0000)
struct SkillInfoGaugeImagine_C_SetKeyVisibilityPermanent final
{
public:
	bool                                          InIsVisibilityPermanent;                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillInfoGaugeImagine_C_SetKeyVisibilityPermanent) == 0x000001, "Wrong alignment on SkillInfoGaugeImagine_C_SetKeyVisibilityPermanent");
static_assert(sizeof(SkillInfoGaugeImagine_C_SetKeyVisibilityPermanent) == 0x000005, "Wrong size on SkillInfoGaugeImagine_C_SetKeyVisibilityPermanent");
static_assert(offsetof(SkillInfoGaugeImagine_C_SetKeyVisibilityPermanent, InIsVisibilityPermanent) == 0x000000, "Member 'SkillInfoGaugeImagine_C_SetKeyVisibilityPermanent::InIsVisibilityPermanent' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_SetKeyVisibilityPermanent, CallFunc_MakeLiteralByte_ReturnValue) == 0x000001, "Member 'SkillInfoGaugeImagine_C_SetKeyVisibilityPermanent::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_SetKeyVisibilityPermanent, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000002, "Member 'SkillInfoGaugeImagine_C_SetKeyVisibilityPermanent::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_SetKeyVisibilityPermanent, Temp_bool_Variable) == 0x000003, "Member 'SkillInfoGaugeImagine_C_SetKeyVisibilityPermanent::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeImagine_C_SetKeyVisibilityPermanent, K2Node_Select_Default) == 0x000004, "Member 'SkillInfoGaugeImagine_C_SetKeyVisibilityPermanent::K2Node_Select_Default' has a wrong offset!");

}

