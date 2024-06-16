#pragma once

 

// Package: Fang_expedition_StatusWindow

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function Fang_expedition_StatusWindow.Fang_expedition_StatusWindow_C.ExecuteUbergraph_Fang_expedition_StatusWindow
// 0x0004 (0x0004 - 0x0000)
struct Fang_expedition_StatusWindow_C_ExecuteUbergraph_Fang_expedition_StatusWindow final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_StatusWindow_C_ExecuteUbergraph_Fang_expedition_StatusWindow) == 0x000004, "Wrong alignment on Fang_expedition_StatusWindow_C_ExecuteUbergraph_Fang_expedition_StatusWindow");
static_assert(sizeof(Fang_expedition_StatusWindow_C_ExecuteUbergraph_Fang_expedition_StatusWindow) == 0x000004, "Wrong size on Fang_expedition_StatusWindow_C_ExecuteUbergraph_Fang_expedition_StatusWindow");
static_assert(offsetof(Fang_expedition_StatusWindow_C_ExecuteUbergraph_Fang_expedition_StatusWindow, EntryPoint) == 0x000000, "Member 'Fang_expedition_StatusWindow_C_ExecuteUbergraph_Fang_expedition_StatusWindow::EntryPoint' has a wrong offset!");

// Function Fang_expedition_StatusWindow.Fang_expedition_StatusWindow_C.SetData
// 0x00D8 (0x00D8 - 0x0000)
struct Fang_expedition_StatusWindow_C_SetData final
{
public:
	struct FSBFang_expeditionData                 ExpeditionData;                                    // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         PlayCount;                                         // 0x0038(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0045(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5FD7[0x2];                                     // 0x0046(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5FD8[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5FD9[0x3];                                     // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5FDA[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5FDB[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00B8(0x0018)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00D2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x00D3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fang_expedition_StatusWindow_C_SetData) == 0x000008, "Wrong alignment on Fang_expedition_StatusWindow_C_SetData");
static_assert(sizeof(Fang_expedition_StatusWindow_C_SetData) == 0x0000D8, "Wrong size on Fang_expedition_StatusWindow_C_SetData");
static_assert(offsetof(Fang_expedition_StatusWindow_C_SetData, ExpeditionData) == 0x000000, "Member 'Fang_expedition_StatusWindow_C_SetData::ExpeditionData' has a wrong offset!");
static_assert(offsetof(Fang_expedition_StatusWindow_C_SetData, PlayCount) == 0x000038, "Member 'Fang_expedition_StatusWindow_C_SetData::PlayCount' has a wrong offset!");
static_assert(offsetof(Fang_expedition_StatusWindow_C_SetData, Temp_int_Variable) == 0x00003C, "Member 'Fang_expedition_StatusWindow_C_SetData::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_StatusWindow_C_SetData, CallFunc_Add_IntInt_ReturnValue) == 0x000040, "Member 'Fang_expedition_StatusWindow_C_SetData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_StatusWindow_C_SetData, Temp_bool_Variable) == 0x000044, "Member 'Fang_expedition_StatusWindow_C_SetData::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_StatusWindow_C_SetData, CallFunc_Not_PreBool_ReturnValue) == 0x000045, "Member 'Fang_expedition_StatusWindow_C_SetData::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_StatusWindow_C_SetData, CallFunc_GetTextFromAsset_ReturnValue) == 0x000048, "Member 'Fang_expedition_StatusWindow_C_SetData::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_StatusWindow_C_SetData, CallFunc_Subtract_IntInt_ReturnValue) == 0x000058, "Member 'Fang_expedition_StatusWindow_C_SetData::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_StatusWindow_C_SetData, CallFunc_Conv_IntToString_ReturnValue) == 0x000060, "Member 'Fang_expedition_StatusWindow_C_SetData::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_StatusWindow_C_SetData, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000070, "Member 'Fang_expedition_StatusWindow_C_SetData::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_StatusWindow_C_SetData, CallFunc_Array_Length_ReturnValue) == 0x000074, "Member 'Fang_expedition_StatusWindow_C_SetData::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_StatusWindow_C_SetData, CallFunc_BooleanAND_ReturnValue) == 0x000078, "Member 'Fang_expedition_StatusWindow_C_SetData::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_StatusWindow_C_SetData, CallFunc_Conv_IntToString_ReturnValue_1) == 0x000080, "Member 'Fang_expedition_StatusWindow_C_SetData::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_StatusWindow_C_SetData, CallFunc_Concat_StrStr_ReturnValue) == 0x000090, "Member 'Fang_expedition_StatusWindow_C_SetData::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_StatusWindow_C_SetData, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0000A0, "Member 'Fang_expedition_StatusWindow_C_SetData::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_StatusWindow_C_SetData, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000B0, "Member 'Fang_expedition_StatusWindow_C_SetData::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_StatusWindow_C_SetData, CallFunc_Conv_StringToText_ReturnValue) == 0x0000B8, "Member 'Fang_expedition_StatusWindow_C_SetData::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_StatusWindow_C_SetData, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0000D0, "Member 'Fang_expedition_StatusWindow_C_SetData::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_StatusWindow_C_SetData, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x0000D1, "Member 'Fang_expedition_StatusWindow_C_SetData::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_StatusWindow_C_SetData, CallFunc_BooleanOR_ReturnValue) == 0x0000D2, "Member 'Fang_expedition_StatusWindow_C_SetData::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_StatusWindow_C_SetData, CallFunc_BooleanOR_ReturnValue_1) == 0x0000D3, "Member 'Fang_expedition_StatusWindow_C_SetData::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");

}

