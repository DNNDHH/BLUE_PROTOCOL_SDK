#pragma once

 

// Package: LibraryMenu_Achievement_SwitchOnOff

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function LibraryMenu_Achievement_SwitchOnOff.LibraryMenu_Achievement_SwitchOnOff_C.OnSwitchOnPressed__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct LibraryMenu_Achievement_SwitchOnOff_C_OnSwitchOnPressed__DelegateSignature final
{
public:
	bool                                          OutIsSetAchievement;                               // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_Achievement_SwitchOnOff_C_OnSwitchOnPressed__DelegateSignature) == 0x000001, "Wrong alignment on LibraryMenu_Achievement_SwitchOnOff_C_OnSwitchOnPressed__DelegateSignature");
static_assert(sizeof(LibraryMenu_Achievement_SwitchOnOff_C_OnSwitchOnPressed__DelegateSignature) == 0x000001, "Wrong size on LibraryMenu_Achievement_SwitchOnOff_C_OnSwitchOnPressed__DelegateSignature");
static_assert(offsetof(LibraryMenu_Achievement_SwitchOnOff_C_OnSwitchOnPressed__DelegateSignature, OutIsSetAchievement) == 0x000000, "Member 'LibraryMenu_Achievement_SwitchOnOff_C_OnSwitchOnPressed__DelegateSignature::OutIsSetAchievement' has a wrong offset!");

// Function LibraryMenu_Achievement_SwitchOnOff.LibraryMenu_Achievement_SwitchOnOff_C.ExecuteUbergraph_LibraryMenu_Achievement_SwitchOnOff
// 0x0108 (0x0108 - 0x0000)
struct LibraryMenu_Achievement_SwitchOnOff_C_ExecuteUbergraph_LibraryMenu_Achievement_SwitchOnOff final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A70[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Temp_name_Variable;                                // 0x0008(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_1;                              // 0x0010(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A71[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bInIsEnabled;                   // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A72[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PlaySE_ReturnValue_1;                     // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0028(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0050(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x0078(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_3;                    // 0x00A0(0x0028)()
	bool                                          K2Node_CustomEvent_InIsSwitchOn;                   // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A73[0x2];                                     // 0x00CA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_Select_Default_1;                           // 0x00CC(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A74[0x4];                                     // 0x00D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x00D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A75[0x7];                                     // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00F0(0x0018)()
};
static_assert(alignof(LibraryMenu_Achievement_SwitchOnOff_C_ExecuteUbergraph_LibraryMenu_Achievement_SwitchOnOff) == 0x000008, "Wrong alignment on LibraryMenu_Achievement_SwitchOnOff_C_ExecuteUbergraph_LibraryMenu_Achievement_SwitchOnOff");
static_assert(sizeof(LibraryMenu_Achievement_SwitchOnOff_C_ExecuteUbergraph_LibraryMenu_Achievement_SwitchOnOff) == 0x000108, "Wrong size on LibraryMenu_Achievement_SwitchOnOff_C_ExecuteUbergraph_LibraryMenu_Achievement_SwitchOnOff");
static_assert(offsetof(LibraryMenu_Achievement_SwitchOnOff_C_ExecuteUbergraph_LibraryMenu_Achievement_SwitchOnOff, EntryPoint) == 0x000000, "Member 'LibraryMenu_Achievement_SwitchOnOff_C_ExecuteUbergraph_LibraryMenu_Achievement_SwitchOnOff::EntryPoint' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_SwitchOnOff_C_ExecuteUbergraph_LibraryMenu_Achievement_SwitchOnOff, Temp_byte_Variable) == 0x000004, "Member 'LibraryMenu_Achievement_SwitchOnOff_C_ExecuteUbergraph_LibraryMenu_Achievement_SwitchOnOff::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_SwitchOnOff_C_ExecuteUbergraph_LibraryMenu_Achievement_SwitchOnOff, Temp_byte_Variable_1) == 0x000005, "Member 'LibraryMenu_Achievement_SwitchOnOff_C_ExecuteUbergraph_LibraryMenu_Achievement_SwitchOnOff::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_SwitchOnOff_C_ExecuteUbergraph_LibraryMenu_Achievement_SwitchOnOff, Temp_bool_Variable) == 0x000006, "Member 'LibraryMenu_Achievement_SwitchOnOff_C_ExecuteUbergraph_LibraryMenu_Achievement_SwitchOnOff::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_SwitchOnOff_C_ExecuteUbergraph_LibraryMenu_Achievement_SwitchOnOff, Temp_name_Variable) == 0x000008, "Member 'LibraryMenu_Achievement_SwitchOnOff_C_ExecuteUbergraph_LibraryMenu_Achievement_SwitchOnOff::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_SwitchOnOff_C_ExecuteUbergraph_LibraryMenu_Achievement_SwitchOnOff, Temp_name_Variable_1) == 0x000010, "Member 'LibraryMenu_Achievement_SwitchOnOff_C_ExecuteUbergraph_LibraryMenu_Achievement_SwitchOnOff::Temp_name_Variable_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_SwitchOnOff_C_ExecuteUbergraph_LibraryMenu_Achievement_SwitchOnOff, Temp_bool_Variable_1) == 0x000018, "Member 'LibraryMenu_Achievement_SwitchOnOff_C_ExecuteUbergraph_LibraryMenu_Achievement_SwitchOnOff::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_SwitchOnOff_C_ExecuteUbergraph_LibraryMenu_Achievement_SwitchOnOff, CallFunc_PlaySE_ReturnValue) == 0x00001C, "Member 'LibraryMenu_Achievement_SwitchOnOff_C_ExecuteUbergraph_LibraryMenu_Achievement_SwitchOnOff::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_SwitchOnOff_C_ExecuteUbergraph_LibraryMenu_Achievement_SwitchOnOff, K2Node_CustomEvent_bInIsEnabled) == 0x000020, "Member 'LibraryMenu_Achievement_SwitchOnOff_C_ExecuteUbergraph_LibraryMenu_Achievement_SwitchOnOff::K2Node_CustomEvent_bInIsEnabled' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_SwitchOnOff_C_ExecuteUbergraph_LibraryMenu_Achievement_SwitchOnOff, CallFunc_PlaySE_ReturnValue_1) == 0x000024, "Member 'LibraryMenu_Achievement_SwitchOnOff_C_ExecuteUbergraph_LibraryMenu_Achievement_SwitchOnOff::CallFunc_PlaySE_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_SwitchOnOff_C_ExecuteUbergraph_LibraryMenu_Achievement_SwitchOnOff, K2Node_MakeStruct_SlateColor) == 0x000028, "Member 'LibraryMenu_Achievement_SwitchOnOff_C_ExecuteUbergraph_LibraryMenu_Achievement_SwitchOnOff::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_SwitchOnOff_C_ExecuteUbergraph_LibraryMenu_Achievement_SwitchOnOff, K2Node_MakeStruct_SlateColor_1) == 0x000050, "Member 'LibraryMenu_Achievement_SwitchOnOff_C_ExecuteUbergraph_LibraryMenu_Achievement_SwitchOnOff::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_SwitchOnOff_C_ExecuteUbergraph_LibraryMenu_Achievement_SwitchOnOff, K2Node_MakeStruct_SlateColor_2) == 0x000078, "Member 'LibraryMenu_Achievement_SwitchOnOff_C_ExecuteUbergraph_LibraryMenu_Achievement_SwitchOnOff::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_SwitchOnOff_C_ExecuteUbergraph_LibraryMenu_Achievement_SwitchOnOff, K2Node_MakeStruct_SlateColor_3) == 0x0000A0, "Member 'LibraryMenu_Achievement_SwitchOnOff_C_ExecuteUbergraph_LibraryMenu_Achievement_SwitchOnOff::K2Node_MakeStruct_SlateColor_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_SwitchOnOff_C_ExecuteUbergraph_LibraryMenu_Achievement_SwitchOnOff, K2Node_CustomEvent_InIsSwitchOn) == 0x0000C8, "Member 'LibraryMenu_Achievement_SwitchOnOff_C_ExecuteUbergraph_LibraryMenu_Achievement_SwitchOnOff::K2Node_CustomEvent_InIsSwitchOn' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_SwitchOnOff_C_ExecuteUbergraph_LibraryMenu_Achievement_SwitchOnOff, K2Node_Select_Default) == 0x0000C9, "Member 'LibraryMenu_Achievement_SwitchOnOff_C_ExecuteUbergraph_LibraryMenu_Achievement_SwitchOnOff::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_SwitchOnOff_C_ExecuteUbergraph_LibraryMenu_Achievement_SwitchOnOff, K2Node_Select_Default_1) == 0x0000CC, "Member 'LibraryMenu_Achievement_SwitchOnOff_C_ExecuteUbergraph_LibraryMenu_Achievement_SwitchOnOff::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_SwitchOnOff_C_ExecuteUbergraph_LibraryMenu_Achievement_SwitchOnOff, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x0000D8, "Member 'LibraryMenu_Achievement_SwitchOnOff_C_ExecuteUbergraph_LibraryMenu_Achievement_SwitchOnOff::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_SwitchOnOff_C_ExecuteUbergraph_LibraryMenu_Achievement_SwitchOnOff, CallFunc_Not_PreBool_ReturnValue) == 0x0000E8, "Member 'LibraryMenu_Achievement_SwitchOnOff_C_ExecuteUbergraph_LibraryMenu_Achievement_SwitchOnOff::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_SwitchOnOff_C_ExecuteUbergraph_LibraryMenu_Achievement_SwitchOnOff, CallFunc_Conv_StringToText_ReturnValue) == 0x0000F0, "Member 'LibraryMenu_Achievement_SwitchOnOff_C_ExecuteUbergraph_LibraryMenu_Achievement_SwitchOnOff::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function LibraryMenu_Achievement_SwitchOnOff.LibraryMenu_Achievement_SwitchOnOff_C.SwitchOnOff
// 0x0001 (0x0001 - 0x0000)
struct LibraryMenu_Achievement_SwitchOnOff_C_SwitchOnOff final
{
public:
	bool                                          InIsSwitchOn;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_Achievement_SwitchOnOff_C_SwitchOnOff) == 0x000001, "Wrong alignment on LibraryMenu_Achievement_SwitchOnOff_C_SwitchOnOff");
static_assert(sizeof(LibraryMenu_Achievement_SwitchOnOff_C_SwitchOnOff) == 0x000001, "Wrong size on LibraryMenu_Achievement_SwitchOnOff_C_SwitchOnOff");
static_assert(offsetof(LibraryMenu_Achievement_SwitchOnOff_C_SwitchOnOff, InIsSwitchOn) == 0x000000, "Member 'LibraryMenu_Achievement_SwitchOnOff_C_SwitchOnOff::InIsSwitchOn' has a wrong offset!");

// Function LibraryMenu_Achievement_SwitchOnOff.LibraryMenu_Achievement_SwitchOnOff_C.DataSet
// 0x0001 (0x0001 - 0x0000)
struct LibraryMenu_Achievement_SwitchOnOff_C_DataSet final
{
public:
	bool                                          bInIsEnabled;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_Achievement_SwitchOnOff_C_DataSet) == 0x000001, "Wrong alignment on LibraryMenu_Achievement_SwitchOnOff_C_DataSet");
static_assert(sizeof(LibraryMenu_Achievement_SwitchOnOff_C_DataSet) == 0x000001, "Wrong size on LibraryMenu_Achievement_SwitchOnOff_C_DataSet");
static_assert(offsetof(LibraryMenu_Achievement_SwitchOnOff_C_DataSet, bInIsEnabled) == 0x000000, "Member 'LibraryMenu_Achievement_SwitchOnOff_C_DataSet::bInIsEnabled' has a wrong offset!");

}

