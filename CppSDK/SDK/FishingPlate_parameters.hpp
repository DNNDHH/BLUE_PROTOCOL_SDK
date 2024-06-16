#pragma once

 

// Package: FishingPlate

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function FishingPlate.FishingPlate_C.ExecuteUbergraph_FishingPlate
// 0x0004 (0x0004 - 0x0000)
struct FishingPlate_C_ExecuteUbergraph_FishingPlate final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FishingPlate_C_ExecuteUbergraph_FishingPlate) == 0x000004, "Wrong alignment on FishingPlate_C_ExecuteUbergraph_FishingPlate");
static_assert(sizeof(FishingPlate_C_ExecuteUbergraph_FishingPlate) == 0x000004, "Wrong size on FishingPlate_C_ExecuteUbergraph_FishingPlate");
static_assert(offsetof(FishingPlate_C_ExecuteUbergraph_FishingPlate, EntryPoint) == 0x000000, "Member 'FishingPlate_C_ExecuteUbergraph_FishingPlate::EntryPoint' has a wrong offset!");

// Function FishingPlate.FishingPlate_C.SetFishPlate
// 0x0070 (0x0070 - 0x0000)
struct FishingPlate_C_SetFishPlate final
{
public:
	class FString                                 Param_Name;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Description;                                       // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	float                                         Length;                                            // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Weight;                                            // 0x0024(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Show;                                              // 0x0028(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4686[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ItemAmount;                                        // 0x002C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          New;                                               // 0x0030(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          NewRecord;                                         // 0x0031(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsBig;                                             // 0x0032(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0033(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4687[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue;             // 0x0038(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0050(0x0018)()
	bool                                          CallFunc_IsItemBox_TrueIsItemBox;                  // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x006A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x006B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x006D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x006E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x006F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FishingPlate_C_SetFishPlate) == 0x000008, "Wrong alignment on FishingPlate_C_SetFishPlate");
static_assert(sizeof(FishingPlate_C_SetFishPlate) == 0x000070, "Wrong size on FishingPlate_C_SetFishPlate");
static_assert(offsetof(FishingPlate_C_SetFishPlate, Param_Name) == 0x000000, "Member 'FishingPlate_C_SetFishPlate::Param_Name' has a wrong offset!");
static_assert(offsetof(FishingPlate_C_SetFishPlate, Description) == 0x000010, "Member 'FishingPlate_C_SetFishPlate::Description' has a wrong offset!");
static_assert(offsetof(FishingPlate_C_SetFishPlate, Length) == 0x000020, "Member 'FishingPlate_C_SetFishPlate::Length' has a wrong offset!");
static_assert(offsetof(FishingPlate_C_SetFishPlate, Weight) == 0x000024, "Member 'FishingPlate_C_SetFishPlate::Weight' has a wrong offset!");
static_assert(offsetof(FishingPlate_C_SetFishPlate, Show) == 0x000028, "Member 'FishingPlate_C_SetFishPlate::Show' has a wrong offset!");
static_assert(offsetof(FishingPlate_C_SetFishPlate, ItemAmount) == 0x00002C, "Member 'FishingPlate_C_SetFishPlate::ItemAmount' has a wrong offset!");
static_assert(offsetof(FishingPlate_C_SetFishPlate, New) == 0x000030, "Member 'FishingPlate_C_SetFishPlate::New' has a wrong offset!");
static_assert(offsetof(FishingPlate_C_SetFishPlate, NewRecord) == 0x000031, "Member 'FishingPlate_C_SetFishPlate::NewRecord' has a wrong offset!");
static_assert(offsetof(FishingPlate_C_SetFishPlate, IsBig) == 0x000032, "Member 'FishingPlate_C_SetFishPlate::IsBig' has a wrong offset!");
static_assert(offsetof(FishingPlate_C_SetFishPlate, CallFunc_MakeLiteralByte_ReturnValue) == 0x000033, "Member 'FishingPlate_C_SetFishPlate::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(FishingPlate_C_SetFishPlate, CallFunc_Conv_FloatToText_ReturnValue) == 0x000038, "Member 'FishingPlate_C_SetFishPlate::CallFunc_Conv_FloatToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(FishingPlate_C_SetFishPlate, CallFunc_Conv_StringToText_ReturnValue) == 0x000050, "Member 'FishingPlate_C_SetFishPlate::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(FishingPlate_C_SetFishPlate, CallFunc_IsItemBox_TrueIsItemBox) == 0x000068, "Member 'FishingPlate_C_SetFishPlate::CallFunc_IsItemBox_TrueIsItemBox' has a wrong offset!");
static_assert(offsetof(FishingPlate_C_SetFishPlate, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000069, "Member 'FishingPlate_C_SetFishPlate::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FishingPlate_C_SetFishPlate, Temp_bool_Variable) == 0x00006A, "Member 'FishingPlate_C_SetFishPlate::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(FishingPlate_C_SetFishPlate, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x00006B, "Member 'FishingPlate_C_SetFishPlate::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(FishingPlate_C_SetFishPlate, Temp_bool_Variable_1) == 0x00006C, "Member 'FishingPlate_C_SetFishPlate::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(FishingPlate_C_SetFishPlate, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x00006D, "Member 'FishingPlate_C_SetFishPlate::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(FishingPlate_C_SetFishPlate, K2Node_Select_Default) == 0x00006E, "Member 'FishingPlate_C_SetFishPlate::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(FishingPlate_C_SetFishPlate, K2Node_Select_Default_1) == 0x00006F, "Member 'FishingPlate_C_SetFishPlate::K2Node_Select_Default_1' has a wrong offset!");

// Function FishingPlate.FishingPlate_C.IsItemBox
// 0x00D8 (0x00D8 - 0x0000)
struct FishingPlate_C_IsItemBox final
{
public:
	class FString                                 Param_Name;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          TrueIsItemBox;                                     // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4688[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBFishData                            CallFunc_GetDataTableRowFromName_OutRow;           // 0x0018(0x00B8)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FishingPlate_C_IsItemBox) == 0x000008, "Wrong alignment on FishingPlate_C_IsItemBox");
static_assert(sizeof(FishingPlate_C_IsItemBox) == 0x0000D8, "Wrong size on FishingPlate_C_IsItemBox");
static_assert(offsetof(FishingPlate_C_IsItemBox, Param_Name) == 0x000000, "Member 'FishingPlate_C_IsItemBox::Param_Name' has a wrong offset!");
static_assert(offsetof(FishingPlate_C_IsItemBox, TrueIsItemBox) == 0x000010, "Member 'FishingPlate_C_IsItemBox::TrueIsItemBox' has a wrong offset!");
static_assert(offsetof(FishingPlate_C_IsItemBox, CallFunc_GetDataTableRowFromName_OutRow) == 0x000018, "Member 'FishingPlate_C_IsItemBox::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(FishingPlate_C_IsItemBox, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0000D0, "Member 'FishingPlate_C_IsItemBox::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(FishingPlate_C_IsItemBox, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x0000D1, "Member 'FishingPlate_C_IsItemBox::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");

// Function FishingPlate.FishingPlate_C.SwitchItemBox
// 0x0020 (0x0020 - 0x0000)
struct FishingPlate_C_SwitchItemBox final
{
public:
	bool                                          TrueIsItemBox;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4689[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ItemAmount;                                        // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
};
static_assert(alignof(FishingPlate_C_SwitchItemBox) == 0x000008, "Wrong alignment on FishingPlate_C_SwitchItemBox");
static_assert(sizeof(FishingPlate_C_SwitchItemBox) == 0x000020, "Wrong size on FishingPlate_C_SwitchItemBox");
static_assert(offsetof(FishingPlate_C_SwitchItemBox, TrueIsItemBox) == 0x000000, "Member 'FishingPlate_C_SwitchItemBox::TrueIsItemBox' has a wrong offset!");
static_assert(offsetof(FishingPlate_C_SwitchItemBox, ItemAmount) == 0x000004, "Member 'FishingPlate_C_SwitchItemBox::ItemAmount' has a wrong offset!");
static_assert(offsetof(FishingPlate_C_SwitchItemBox, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'FishingPlate_C_SwitchItemBox::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

// Function FishingPlate.FishingPlate_C.Stab_GetSize
// 0x0001 (0x0001 - 0x0000)
struct FishingPlate_C_Stab_GetSize final
{
public:
	bool                                          TrueIsBig;                                         // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FishingPlate_C_Stab_GetSize) == 0x000001, "Wrong alignment on FishingPlate_C_Stab_GetSize");
static_assert(sizeof(FishingPlate_C_Stab_GetSize) == 0x000001, "Wrong size on FishingPlate_C_Stab_GetSize");
static_assert(offsetof(FishingPlate_C_Stab_GetSize, TrueIsBig) == 0x000000, "Member 'FishingPlate_C_Stab_GetSize::TrueIsBig' has a wrong offset!");

// Function FishingPlate.FishingPlate_C.Set Big Small
// 0x0058 (0x0058 - 0x0000)
struct FishingPlate_C_Set_Big_Small final
{
public:
	bool                                          IsBig;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_468A[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0040(0x0018)()
};
static_assert(alignof(FishingPlate_C_Set_Big_Small) == 0x000008, "Wrong alignment on FishingPlate_C_Set_Big_Small");
static_assert(sizeof(FishingPlate_C_Set_Big_Small) == 0x000058, "Wrong size on FishingPlate_C_Set_Big_Small");
static_assert(offsetof(FishingPlate_C_Set_Big_Small, IsBig) == 0x000000, "Member 'FishingPlate_C_Set_Big_Small::IsBig' has a wrong offset!");
static_assert(offsetof(FishingPlate_C_Set_Big_Small, CallFunc_GetTextFromAsset_ReturnValue) == 0x000008, "Member 'FishingPlate_C_Set_Big_Small::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(FishingPlate_C_Set_Big_Small, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'FishingPlate_C_Set_Big_Small::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(FishingPlate_C_Set_Big_Small, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000030, "Member 'FishingPlate_C_Set_Big_Small::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FishingPlate_C_Set_Big_Small, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000040, "Member 'FishingPlate_C_Set_Big_Small::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");

}

