#pragma once

 

// Package: Fang_expedition_PlayListItem

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function Fang_expedition_PlayListItem.Fang_expedition_PlayListItem_C.OnClick_Playing__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct Fang_expedition_PlayListItem_C_OnClick_Playing__DelegateSignature final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_PlayListItem_C_OnClick_Playing__DelegateSignature) == 0x000004, "Wrong alignment on Fang_expedition_PlayListItem_C_OnClick_Playing__DelegateSignature");
static_assert(sizeof(Fang_expedition_PlayListItem_C_OnClick_Playing__DelegateSignature) == 0x000004, "Wrong size on Fang_expedition_PlayListItem_C_OnClick_Playing__DelegateSignature");
static_assert(offsetof(Fang_expedition_PlayListItem_C_OnClick_Playing__DelegateSignature, Param_Index) == 0x000000, "Member 'Fang_expedition_PlayListItem_C_OnClick_Playing__DelegateSignature::Param_Index' has a wrong offset!");

// Function Fang_expedition_PlayListItem.Fang_expedition_PlayListItem_C.OnClick_Finish__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct Fang_expedition_PlayListItem_C_OnClick_Finish__DelegateSignature final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_PlayListItem_C_OnClick_Finish__DelegateSignature) == 0x000004, "Wrong alignment on Fang_expedition_PlayListItem_C_OnClick_Finish__DelegateSignature");
static_assert(sizeof(Fang_expedition_PlayListItem_C_OnClick_Finish__DelegateSignature) == 0x000004, "Wrong size on Fang_expedition_PlayListItem_C_OnClick_Finish__DelegateSignature");
static_assert(offsetof(Fang_expedition_PlayListItem_C_OnClick_Finish__DelegateSignature, Param_Index) == 0x000000, "Member 'Fang_expedition_PlayListItem_C_OnClick_Finish__DelegateSignature::Param_Index' has a wrong offset!");

// Function Fang_expedition_PlayListItem.Fang_expedition_PlayListItem_C.ExecuteUbergraph_Fang_expedition_PlayListItem
// 0x0024 (0x0024 - 0x0000)
struct Fang_expedition_PlayListItem_C_ExecuteUbergraph_Fang_expedition_PlayListItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(Fang_expedition_PlayListItem_C_ExecuteUbergraph_Fang_expedition_PlayListItem) == 0x000004, "Wrong alignment on Fang_expedition_PlayListItem_C_ExecuteUbergraph_Fang_expedition_PlayListItem");
static_assert(sizeof(Fang_expedition_PlayListItem_C_ExecuteUbergraph_Fang_expedition_PlayListItem) == 0x000024, "Wrong size on Fang_expedition_PlayListItem_C_ExecuteUbergraph_Fang_expedition_PlayListItem");
static_assert(offsetof(Fang_expedition_PlayListItem_C_ExecuteUbergraph_Fang_expedition_PlayListItem, EntryPoint) == 0x000000, "Member 'Fang_expedition_PlayListItem_C_ExecuteUbergraph_Fang_expedition_PlayListItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(Fang_expedition_PlayListItem_C_ExecuteUbergraph_Fang_expedition_PlayListItem, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'Fang_expedition_PlayListItem_C_ExecuteUbergraph_Fang_expedition_PlayListItem::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Fang_expedition_PlayListItem_C_ExecuteUbergraph_Fang_expedition_PlayListItem, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'Fang_expedition_PlayListItem_C_ExecuteUbergraph_Fang_expedition_PlayListItem::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");

// Function Fang_expedition_PlayListItem.Fang_expedition_PlayListItem_C.SetData
// 0x0148 (0x0148 - 0x0000)
struct Fang_expedition_PlayListItem_C_SetData final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5F08[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBFang_expeditionPlayData             PlayData;                                          // 0x0008(0x0120)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	ESBDateTimeTextRemainTimeFlag                 CallFunc_SetDateTime_ReturnValue;                  // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0129(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F09[0x6];                                     // 0x012A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0130(0x0018)()
};
static_assert(alignof(Fang_expedition_PlayListItem_C_SetData) == 0x000008, "Wrong alignment on Fang_expedition_PlayListItem_C_SetData");
static_assert(sizeof(Fang_expedition_PlayListItem_C_SetData) == 0x000148, "Wrong size on Fang_expedition_PlayListItem_C_SetData");
static_assert(offsetof(Fang_expedition_PlayListItem_C_SetData, Param_Index) == 0x000000, "Member 'Fang_expedition_PlayListItem_C_SetData::Param_Index' has a wrong offset!");
static_assert(offsetof(Fang_expedition_PlayListItem_C_SetData, PlayData) == 0x000008, "Member 'Fang_expedition_PlayListItem_C_SetData::PlayData' has a wrong offset!");
static_assert(offsetof(Fang_expedition_PlayListItem_C_SetData, CallFunc_SetDateTime_ReturnValue) == 0x000128, "Member 'Fang_expedition_PlayListItem_C_SetData::CallFunc_SetDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_PlayListItem_C_SetData, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000129, "Member 'Fang_expedition_PlayListItem_C_SetData::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_PlayListItem_C_SetData, CallFunc_Conv_StringToText_ReturnValue) == 0x000130, "Member 'Fang_expedition_PlayListItem_C_SetData::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function Fang_expedition_PlayListItem.Fang_expedition_PlayListItem_C.SetBlank
// 0x0120 (0x0120 - 0x0000)
struct Fang_expedition_PlayListItem_C_SetBlank final
{
public:
	bool                                          TextVisibility;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F0A[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TimeNum;                                           // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue_1;              // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5F0B[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Replace_ReturnValue;                      // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_2;           // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Replace_ReturnValue_1;                    // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0078(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Replace_ReturnValue_2;                    // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00B0(0x0018)()
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_3;           // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue_1;             // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x00DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F0C[0x3];                                     // 0x00DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_2;           // 0x00E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Replace_ReturnValue_3;                    // 0x00F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0100(0x0018)()
	int32                                         CallFunc_Percent_IntInt_ReturnValue_2;             // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x011C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x011D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fang_expedition_PlayListItem_C_SetBlank) == 0x000008, "Wrong alignment on Fang_expedition_PlayListItem_C_SetBlank");
static_assert(sizeof(Fang_expedition_PlayListItem_C_SetBlank) == 0x000120, "Wrong size on Fang_expedition_PlayListItem_C_SetBlank");
static_assert(offsetof(Fang_expedition_PlayListItem_C_SetBlank, TextVisibility) == 0x000000, "Member 'Fang_expedition_PlayListItem_C_SetBlank::TextVisibility' has a wrong offset!");
static_assert(offsetof(Fang_expedition_PlayListItem_C_SetBlank, TimeNum) == 0x000004, "Member 'Fang_expedition_PlayListItem_C_SetBlank::TimeNum' has a wrong offset!");
static_assert(offsetof(Fang_expedition_PlayListItem_C_SetBlank, CallFunc_Percent_IntInt_ReturnValue) == 0x000008, "Member 'Fang_expedition_PlayListItem_C_SetBlank::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_PlayListItem_C_SetBlank, CallFunc_Divide_IntInt_ReturnValue) == 0x00000C, "Member 'Fang_expedition_PlayListItem_C_SetBlank::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_PlayListItem_C_SetBlank, CallFunc_Conv_IntToString_ReturnValue) == 0x000010, "Member 'Fang_expedition_PlayListItem_C_SetBlank::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_PlayListItem_C_SetBlank, CallFunc_Conv_IntToString_ReturnValue_1) == 0x000020, "Member 'Fang_expedition_PlayListItem_C_SetBlank::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_PlayListItem_C_SetBlank, CallFunc_GetTextFromAsset_ReturnValue) == 0x000030, "Member 'Fang_expedition_PlayListItem_C_SetBlank::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_PlayListItem_C_SetBlank, CallFunc_Divide_IntInt_ReturnValue_1) == 0x000040, "Member 'Fang_expedition_PlayListItem_C_SetBlank::CallFunc_Divide_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_PlayListItem_C_SetBlank, CallFunc_Replace_ReturnValue) == 0x000048, "Member 'Fang_expedition_PlayListItem_C_SetBlank::CallFunc_Replace_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_PlayListItem_C_SetBlank, CallFunc_Conv_IntToString_ReturnValue_2) == 0x000058, "Member 'Fang_expedition_PlayListItem_C_SetBlank::CallFunc_Conv_IntToString_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_PlayListItem_C_SetBlank, CallFunc_Replace_ReturnValue_1) == 0x000068, "Member 'Fang_expedition_PlayListItem_C_SetBlank::CallFunc_Replace_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_PlayListItem_C_SetBlank, CallFunc_Conv_StringToText_ReturnValue) == 0x000078, "Member 'Fang_expedition_PlayListItem_C_SetBlank::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_PlayListItem_C_SetBlank, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000090, "Member 'Fang_expedition_PlayListItem_C_SetBlank::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_PlayListItem_C_SetBlank, CallFunc_Replace_ReturnValue_2) == 0x0000A0, "Member 'Fang_expedition_PlayListItem_C_SetBlank::CallFunc_Replace_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_PlayListItem_C_SetBlank, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000B0, "Member 'Fang_expedition_PlayListItem_C_SetBlank::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_PlayListItem_C_SetBlank, CallFunc_Conv_IntToString_ReturnValue_3) == 0x0000C8, "Member 'Fang_expedition_PlayListItem_C_SetBlank::CallFunc_Conv_IntToString_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Fang_expedition_PlayListItem_C_SetBlank, CallFunc_Percent_IntInt_ReturnValue_1) == 0x0000D8, "Member 'Fang_expedition_PlayListItem_C_SetBlank::CallFunc_Percent_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_PlayListItem_C_SetBlank, CallFunc_NotEqual_IntInt_ReturnValue) == 0x0000DC, "Member 'Fang_expedition_PlayListItem_C_SetBlank::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_PlayListItem_C_SetBlank, CallFunc_GetTextFromAsset_ReturnValue_2) == 0x0000E0, "Member 'Fang_expedition_PlayListItem_C_SetBlank::CallFunc_GetTextFromAsset_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_PlayListItem_C_SetBlank, CallFunc_Replace_ReturnValue_3) == 0x0000F0, "Member 'Fang_expedition_PlayListItem_C_SetBlank::CallFunc_Replace_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Fang_expedition_PlayListItem_C_SetBlank, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000100, "Member 'Fang_expedition_PlayListItem_C_SetBlank::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_PlayListItem_C_SetBlank, CallFunc_Percent_IntInt_ReturnValue_2) == 0x000118, "Member 'Fang_expedition_PlayListItem_C_SetBlank::CallFunc_Percent_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_PlayListItem_C_SetBlank, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00011C, "Member 'Fang_expedition_PlayListItem_C_SetBlank::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_PlayListItem_C_SetBlank, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x00011D, "Member 'Fang_expedition_PlayListItem_C_SetBlank::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");

}

