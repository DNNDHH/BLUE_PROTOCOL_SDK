#pragma once

 

// Package: SecondPasswordExpiredDialog

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function SecondPasswordExpiredDialog.SecondPasswordExpiredDialog_C.ExecuteUbergraph_SecondPasswordExpiredDialog
// 0x00B8 (0x00B8 - 0x0000)
struct SecondPasswordExpiredDialog_C_ExecuteUbergraph_SecondPasswordExpiredDialog final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_63C4[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetGameConfigValueString_OutValue;        // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetGameConfigValueString_ReturnValue;     // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_63C5[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetGameConfigValueString_OutValue_1;      // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetGameConfigValueString_ReturnValue_1;   // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_63C6[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0068(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0090(0x0028)()
};
static_assert(alignof(SecondPasswordExpiredDialog_C_ExecuteUbergraph_SecondPasswordExpiredDialog) == 0x000008, "Wrong alignment on SecondPasswordExpiredDialog_C_ExecuteUbergraph_SecondPasswordExpiredDialog");
static_assert(sizeof(SecondPasswordExpiredDialog_C_ExecuteUbergraph_SecondPasswordExpiredDialog) == 0x0000B8, "Wrong size on SecondPasswordExpiredDialog_C_ExecuteUbergraph_SecondPasswordExpiredDialog");
static_assert(offsetof(SecondPasswordExpiredDialog_C_ExecuteUbergraph_SecondPasswordExpiredDialog, EntryPoint) == 0x000000, "Member 'SecondPasswordExpiredDialog_C_ExecuteUbergraph_SecondPasswordExpiredDialog::EntryPoint' has a wrong offset!");
static_assert(offsetof(SecondPasswordExpiredDialog_C_ExecuteUbergraph_SecondPasswordExpiredDialog, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'SecondPasswordExpiredDialog_C_ExecuteUbergraph_SecondPasswordExpiredDialog::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(SecondPasswordExpiredDialog_C_ExecuteUbergraph_SecondPasswordExpiredDialog, CallFunc_GetGameConfigValueString_OutValue) == 0x000018, "Member 'SecondPasswordExpiredDialog_C_ExecuteUbergraph_SecondPasswordExpiredDialog::CallFunc_GetGameConfigValueString_OutValue' has a wrong offset!");
static_assert(offsetof(SecondPasswordExpiredDialog_C_ExecuteUbergraph_SecondPasswordExpiredDialog, CallFunc_GetGameConfigValueString_ReturnValue) == 0x000028, "Member 'SecondPasswordExpiredDialog_C_ExecuteUbergraph_SecondPasswordExpiredDialog::CallFunc_GetGameConfigValueString_ReturnValue' has a wrong offset!");
static_assert(offsetof(SecondPasswordExpiredDialog_C_ExecuteUbergraph_SecondPasswordExpiredDialog, CallFunc_GetGameConfigValueString_OutValue_1) == 0x000030, "Member 'SecondPasswordExpiredDialog_C_ExecuteUbergraph_SecondPasswordExpiredDialog::CallFunc_GetGameConfigValueString_OutValue_1' has a wrong offset!");
static_assert(offsetof(SecondPasswordExpiredDialog_C_ExecuteUbergraph_SecondPasswordExpiredDialog, CallFunc_GetGameConfigValueString_ReturnValue_1) == 0x000040, "Member 'SecondPasswordExpiredDialog_C_ExecuteUbergraph_SecondPasswordExpiredDialog::CallFunc_GetGameConfigValueString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SecondPasswordExpiredDialog_C_ExecuteUbergraph_SecondPasswordExpiredDialog, CallFunc_Concat_StrStr_ReturnValue) == 0x000048, "Member 'SecondPasswordExpiredDialog_C_ExecuteUbergraph_SecondPasswordExpiredDialog::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(SecondPasswordExpiredDialog_C_ExecuteUbergraph_SecondPasswordExpiredDialog, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000058, "Member 'SecondPasswordExpiredDialog_C_ExecuteUbergraph_SecondPasswordExpiredDialog::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SecondPasswordExpiredDialog_C_ExecuteUbergraph_SecondPasswordExpiredDialog, K2Node_MakeStruct_SlateColor) == 0x000068, "Member 'SecondPasswordExpiredDialog_C_ExecuteUbergraph_SecondPasswordExpiredDialog::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(SecondPasswordExpiredDialog_C_ExecuteUbergraph_SecondPasswordExpiredDialog, K2Node_MakeStruct_SlateColor_1) == 0x000090, "Member 'SecondPasswordExpiredDialog_C_ExecuteUbergraph_SecondPasswordExpiredDialog::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");

}

