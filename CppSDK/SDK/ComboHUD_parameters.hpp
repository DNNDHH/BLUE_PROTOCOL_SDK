#pragma once

 

// Package: ComboHUD

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function ComboHUD.ComboHUD_C.ShowCombo
// 0x0108 (0x0108 - 0x0000)
struct ComboHUD_C_ShowCombo final
{
public:
	int32                                         Combo;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  ClassType;                                         // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_461F[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 TextNoTbl;                                         // 0x0008(0x0010)(Edit, BlueprintVisible)
	TArray<struct FSlateColor>                    ColorTbl;                                          // 0x0018(0x0010)(Edit, BlueprintVisible)
	TArray<int32>                                 ComboCntTbl;                                       // 0x0028(0x0010)(Edit, BlueprintVisible)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4620[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0040(0x0018)()
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x005A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4621[0x1];                                     // 0x005B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 K2Node_MakeArray_Array;                            // 0x0068(0x0010)(ReferenceParm)
	TArray<struct FSlateColor>                    K2Node_MakeArray_Array_1;                          // 0x0078(0x0010)(ReferenceParm)
	TArray<int32>                                 K2Node_MakeArray_Array_2;                          // 0x0088(0x0010)(ReferenceParm)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0098(0x0028)()
	int32                                         CallFunc_Array_Get_Item;                           // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4622[0x4];                                     // 0x00C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            CallFunc_Array_Get_Item_1;                         // 0x00C8(0x0028)()
	int32                                         CallFunc_Array_Get_Item_2;                         // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x00F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4623[0x3];                                     // 0x00F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00FD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4624[0x2];                                     // 0x00FE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ComboHUD_C_ShowCombo) == 0x000008, "Wrong alignment on ComboHUD_C_ShowCombo");
static_assert(sizeof(ComboHUD_C_ShowCombo) == 0x000108, "Wrong size on ComboHUD_C_ShowCombo");
static_assert(offsetof(ComboHUD_C_ShowCombo, Combo) == 0x000000, "Member 'ComboHUD_C_ShowCombo::Combo' has a wrong offset!");
static_assert(offsetof(ComboHUD_C_ShowCombo, ClassType) == 0x000004, "Member 'ComboHUD_C_ShowCombo::ClassType' has a wrong offset!");
static_assert(offsetof(ComboHUD_C_ShowCombo, TextNoTbl) == 0x000008, "Member 'ComboHUD_C_ShowCombo::TextNoTbl' has a wrong offset!");
static_assert(offsetof(ComboHUD_C_ShowCombo, ColorTbl) == 0x000018, "Member 'ComboHUD_C_ShowCombo::ColorTbl' has a wrong offset!");
static_assert(offsetof(ComboHUD_C_ShowCombo, ComboCntTbl) == 0x000028, "Member 'ComboHUD_C_ShowCombo::ComboCntTbl' has a wrong offset!");
static_assert(offsetof(ComboHUD_C_ShowCombo, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000038, "Member 'ComboHUD_C_ShowCombo::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ComboHUD_C_ShowCombo, CallFunc_Conv_IntToText_ReturnValue) == 0x000040, "Member 'ComboHUD_C_ShowCombo::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ComboHUD_C_ShowCombo, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000058, "Member 'ComboHUD_C_ShowCombo::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ComboHUD_C_ShowCombo, Temp_bool_True_if_break_was_hit_Variable) == 0x000059, "Member 'ComboHUD_C_ShowCombo::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(ComboHUD_C_ShowCombo, CallFunc_Not_PreBool_ReturnValue) == 0x00005A, "Member 'ComboHUD_C_ShowCombo::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ComboHUD_C_ShowCombo, Temp_int_Array_Index_Variable) == 0x00005C, "Member 'ComboHUD_C_ShowCombo::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ComboHUD_C_ShowCombo, Temp_int_Loop_Counter_Variable) == 0x000060, "Member 'ComboHUD_C_ShowCombo::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ComboHUD_C_ShowCombo, CallFunc_Add_IntInt_ReturnValue) == 0x000064, "Member 'ComboHUD_C_ShowCombo::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ComboHUD_C_ShowCombo, K2Node_MakeArray_Array) == 0x000068, "Member 'ComboHUD_C_ShowCombo::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ComboHUD_C_ShowCombo, K2Node_MakeArray_Array_1) == 0x000078, "Member 'ComboHUD_C_ShowCombo::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(ComboHUD_C_ShowCombo, K2Node_MakeArray_Array_2) == 0x000088, "Member 'ComboHUD_C_ShowCombo::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(ComboHUD_C_ShowCombo, K2Node_MakeStruct_SlateColor) == 0x000098, "Member 'ComboHUD_C_ShowCombo::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(ComboHUD_C_ShowCombo, CallFunc_Array_Get_Item) == 0x0000C0, "Member 'ComboHUD_C_ShowCombo::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ComboHUD_C_ShowCombo, CallFunc_Array_Get_Item_1) == 0x0000C8, "Member 'ComboHUD_C_ShowCombo::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(ComboHUD_C_ShowCombo, CallFunc_Array_Get_Item_2) == 0x0000F0, "Member 'ComboHUD_C_ShowCombo::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(ComboHUD_C_ShowCombo, CallFunc_GreaterEqual_IntInt_ReturnValue_1) == 0x0000F4, "Member 'ComboHUD_C_ShowCombo::CallFunc_GreaterEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ComboHUD_C_ShowCombo, CallFunc_Array_Length_ReturnValue) == 0x0000F8, "Member 'ComboHUD_C_ShowCombo::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ComboHUD_C_ShowCombo, CallFunc_Less_IntInt_ReturnValue) == 0x0000FC, "Member 'ComboHUD_C_ShowCombo::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ComboHUD_C_ShowCombo, CallFunc_BooleanAND_ReturnValue) == 0x0000FD, "Member 'ComboHUD_C_ShowCombo::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(ComboHUD_C_ShowCombo, CallFunc_PlayAnimation_ReturnValue) == 0x000100, "Member 'ComboHUD_C_ShowCombo::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function ComboHUD.ComboHUD_C.SetColor
// 0x0028 (0x0028 - 0x0000)
struct ComboHUD_C_SetColor final
{
public:
	struct FSlateColor                            InColor;                                           // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(ComboHUD_C_SetColor) == 0x000008, "Wrong alignment on ComboHUD_C_SetColor");
static_assert(sizeof(ComboHUD_C_SetColor) == 0x000028, "Wrong size on ComboHUD_C_SetColor");
static_assert(offsetof(ComboHUD_C_SetColor, InColor) == 0x000000, "Member 'ComboHUD_C_SetColor::InColor' has a wrong offset!");

}

