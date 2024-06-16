#pragma once

 

// Package: GenericStatusItemForBattleSet

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function GenericStatusItemForBattleSet.GenericStatusItemForBattleSet_C.ExecuteUbergraph_GenericStatusItemForBattleSet
// 0x0008 (0x0008 - 0x0000)
struct GenericStatusItemForBattleSet_C_ExecuteUbergraph_GenericStatusItemForBattleSet final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GenericStatusItemForBattleSet_C_ExecuteUbergraph_GenericStatusItemForBattleSet) == 0x000004, "Wrong alignment on GenericStatusItemForBattleSet_C_ExecuteUbergraph_GenericStatusItemForBattleSet");
static_assert(sizeof(GenericStatusItemForBattleSet_C_ExecuteUbergraph_GenericStatusItemForBattleSet) == 0x000008, "Wrong size on GenericStatusItemForBattleSet_C_ExecuteUbergraph_GenericStatusItemForBattleSet");
static_assert(offsetof(GenericStatusItemForBattleSet_C_ExecuteUbergraph_GenericStatusItemForBattleSet, EntryPoint) == 0x000000, "Member 'GenericStatusItemForBattleSet_C_ExecuteUbergraph_GenericStatusItemForBattleSet::EntryPoint' has a wrong offset!");
static_assert(offsetof(GenericStatusItemForBattleSet_C_ExecuteUbergraph_GenericStatusItemForBattleSet, K2Node_Event_IsDesignTime) == 0x000004, "Member 'GenericStatusItemForBattleSet_C_ExecuteUbergraph_GenericStatusItemForBattleSet::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function GenericStatusItemForBattleSet.GenericStatusItemForBattleSet_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct GenericStatusItemForBattleSet_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GenericStatusItemForBattleSet_C_PreConstruct) == 0x000001, "Wrong alignment on GenericStatusItemForBattleSet_C_PreConstruct");
static_assert(sizeof(GenericStatusItemForBattleSet_C_PreConstruct) == 0x000001, "Wrong size on GenericStatusItemForBattleSet_C_PreConstruct");
static_assert(offsetof(GenericStatusItemForBattleSet_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'GenericStatusItemForBattleSet_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function GenericStatusItemForBattleSet.GenericStatusItemForBattleSet_C.SetHeading
// 0x0038 (0x0038 - 0x0000)
struct GenericStatusItemForBattleSet_C_SetHeading final
{
public:
	int32                                         InHeadingTextId;                                   // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_80C8[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GenericStatusItemForBattleSet_C_SetHeading) == 0x000008, "Wrong alignment on GenericStatusItemForBattleSet_C_SetHeading");
static_assert(sizeof(GenericStatusItemForBattleSet_C_SetHeading) == 0x000038, "Wrong size on GenericStatusItemForBattleSet_C_SetHeading");
static_assert(offsetof(GenericStatusItemForBattleSet_C_SetHeading, InHeadingTextId) == 0x000000, "Member 'GenericStatusItemForBattleSet_C_SetHeading::InHeadingTextId' has a wrong offset!");
static_assert(offsetof(GenericStatusItemForBattleSet_C_SetHeading, CallFunc_GetTextFromAsset_ReturnValue) == 0x000008, "Member 'GenericStatusItemForBattleSet_C_SetHeading::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(GenericStatusItemForBattleSet_C_SetHeading, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'GenericStatusItemForBattleSet_C_SetHeading::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(GenericStatusItemForBattleSet_C_SetHeading, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'GenericStatusItemForBattleSet_C_SetHeading::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function GenericStatusItemForBattleSet.GenericStatusItemForBattleSet_C.SetValue
// 0x0028 (0x0028 - 0x0000)
struct GenericStatusItemForBattleSet_C_SetValue final
{
public:
	int32                                         InValue;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_MakeLiteralBool_ReturnValue;              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80C9[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GenericStatusItemForBattleSet_C_SetValue) == 0x000008, "Wrong alignment on GenericStatusItemForBattleSet_C_SetValue");
static_assert(sizeof(GenericStatusItemForBattleSet_C_SetValue) == 0x000028, "Wrong size on GenericStatusItemForBattleSet_C_SetValue");
static_assert(offsetof(GenericStatusItemForBattleSet_C_SetValue, InValue) == 0x000000, "Member 'GenericStatusItemForBattleSet_C_SetValue::InValue' has a wrong offset!");
static_assert(offsetof(GenericStatusItemForBattleSet_C_SetValue, CallFunc_MakeLiteralBool_ReturnValue) == 0x000004, "Member 'GenericStatusItemForBattleSet_C_SetValue::CallFunc_MakeLiteralBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GenericStatusItemForBattleSet_C_SetValue, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'GenericStatusItemForBattleSet_C_SetValue::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(GenericStatusItemForBattleSet_C_SetValue, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'GenericStatusItemForBattleSet_C_SetValue::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function GenericStatusItemForBattleSet.GenericStatusItemForBattleSet_C.SetValueText
// 0x0020 (0x0020 - 0x0000)
struct GenericStatusItemForBattleSet_C_SetValueText final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GenericStatusItemForBattleSet_C_SetValueText) == 0x000008, "Wrong alignment on GenericStatusItemForBattleSet_C_SetValueText");
static_assert(sizeof(GenericStatusItemForBattleSet_C_SetValueText) == 0x000020, "Wrong size on GenericStatusItemForBattleSet_C_SetValueText");
static_assert(offsetof(GenericStatusItemForBattleSet_C_SetValueText, InText) == 0x000000, "Member 'GenericStatusItemForBattleSet_C_SetValueText::InText' has a wrong offset!");
static_assert(offsetof(GenericStatusItemForBattleSet_C_SetValueText, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'GenericStatusItemForBattleSet_C_SetValueText::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function GenericStatusItemForBattleSet.GenericStatusItemForBattleSet_C.SetPrevValue
// 0x00D8 (0x00D8 - 0x0000)
struct GenericStatusItemForBattleSet_C_SetPrevValue final
{
public:
	int32                                         PrevValue;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80CA[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0030(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x0058(0x0028)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80CB[0x6];                                     // 0x0082(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_Select_Default;                             // 0x0088(0x0028)()
	struct FSlateColor                            K2Node_Select_Default_1;                           // 0x00B0(0x0028)()
};
static_assert(alignof(GenericStatusItemForBattleSet_C_SetPrevValue) == 0x000008, "Wrong alignment on GenericStatusItemForBattleSet_C_SetPrevValue");
static_assert(sizeof(GenericStatusItemForBattleSet_C_SetPrevValue) == 0x0000D8, "Wrong size on GenericStatusItemForBattleSet_C_SetPrevValue");
static_assert(offsetof(GenericStatusItemForBattleSet_C_SetPrevValue, PrevValue) == 0x000000, "Member 'GenericStatusItemForBattleSet_C_SetPrevValue::PrevValue' has a wrong offset!");
static_assert(offsetof(GenericStatusItemForBattleSet_C_SetPrevValue, Temp_bool_Variable) == 0x000004, "Member 'GenericStatusItemForBattleSet_C_SetPrevValue::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GenericStatusItemForBattleSet_C_SetPrevValue, Temp_bool_Variable_1) == 0x000005, "Member 'GenericStatusItemForBattleSet_C_SetPrevValue::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(GenericStatusItemForBattleSet_C_SetPrevValue, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'GenericStatusItemForBattleSet_C_SetPrevValue::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(GenericStatusItemForBattleSet_C_SetPrevValue, K2Node_MakeStruct_SlateColor_1) == 0x000030, "Member 'GenericStatusItemForBattleSet_C_SetPrevValue::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(GenericStatusItemForBattleSet_C_SetPrevValue, K2Node_MakeStruct_SlateColor_2) == 0x000058, "Member 'GenericStatusItemForBattleSet_C_SetPrevValue::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");
static_assert(offsetof(GenericStatusItemForBattleSet_C_SetPrevValue, CallFunc_Less_IntInt_ReturnValue) == 0x000080, "Member 'GenericStatusItemForBattleSet_C_SetPrevValue::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GenericStatusItemForBattleSet_C_SetPrevValue, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000081, "Member 'GenericStatusItemForBattleSet_C_SetPrevValue::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GenericStatusItemForBattleSet_C_SetPrevValue, K2Node_Select_Default) == 0x000088, "Member 'GenericStatusItemForBattleSet_C_SetPrevValue::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(GenericStatusItemForBattleSet_C_SetPrevValue, K2Node_Select_Default_1) == 0x0000B0, "Member 'GenericStatusItemForBattleSet_C_SetPrevValue::K2Node_Select_Default_1' has a wrong offset!");

}

