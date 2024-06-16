#pragma once

 

// Package: WBP_SeasonPassRankupDialog

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_SeasonPassRankupDialog.WBP_SeasonPassRankupDialog_C.OnClickedOk__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct WBP_SeasonPassRankupDialog_C_OnClickedOk__DelegateSignature final
{
public:
	int32                                         UpRank;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SeasonPassRankupDialog_C_OnClickedOk__DelegateSignature) == 0x000004, "Wrong alignment on WBP_SeasonPassRankupDialog_C_OnClickedOk__DelegateSignature");
static_assert(sizeof(WBP_SeasonPassRankupDialog_C_OnClickedOk__DelegateSignature) == 0x000004, "Wrong size on WBP_SeasonPassRankupDialog_C_OnClickedOk__DelegateSignature");
static_assert(offsetof(WBP_SeasonPassRankupDialog_C_OnClickedOk__DelegateSignature, UpRank) == 0x000000, "Member 'WBP_SeasonPassRankupDialog_C_OnClickedOk__DelegateSignature::UpRank' has a wrong offset!");

// Function WBP_SeasonPassRankupDialog.WBP_SeasonPassRankupDialog_C.ExecuteUbergraph_WBP_SeasonPassRankupDialog
// 0x00A8 (0x00A8 - 0x0000)
struct WBP_SeasonPassRankupDialog_C_ExecuteUbergraph_WBP_SeasonPassRankupDialog final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_952B[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0020(0x0018)()
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0038(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_952C[0x3];                                     // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_CurrRank;                       // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_MinRank;                        // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_MaxRank;                        // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_CurrPoint;                      // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_CosumePoint;                    // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetValue_Number;                          // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetValue_Number_1;                        // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_2;            // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_952D[0x4];                                     // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_2;             // 0x0080(0x0018)()
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_1;       // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SeasonPassRankupDialog_C_ExecuteUbergraph_WBP_SeasonPassRankupDialog) == 0x000008, "Wrong alignment on WBP_SeasonPassRankupDialog_C_ExecuteUbergraph_WBP_SeasonPassRankupDialog");
static_assert(sizeof(WBP_SeasonPassRankupDialog_C_ExecuteUbergraph_WBP_SeasonPassRankupDialog) == 0x0000A8, "Wrong size on WBP_SeasonPassRankupDialog_C_ExecuteUbergraph_WBP_SeasonPassRankupDialog");
static_assert(offsetof(WBP_SeasonPassRankupDialog_C_ExecuteUbergraph_WBP_SeasonPassRankupDialog, EntryPoint) == 0x000000, "Member 'WBP_SeasonPassRankupDialog_C_ExecuteUbergraph_WBP_SeasonPassRankupDialog::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_SeasonPassRankupDialog_C_ExecuteUbergraph_WBP_SeasonPassRankupDialog, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'WBP_SeasonPassRankupDialog_C_ExecuteUbergraph_WBP_SeasonPassRankupDialog::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SeasonPassRankupDialog_C_ExecuteUbergraph_WBP_SeasonPassRankupDialog, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000020, "Member 'WBP_SeasonPassRankupDialog_C_ExecuteUbergraph_WBP_SeasonPassRankupDialog::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_SeasonPassRankupDialog_C_ExecuteUbergraph_WBP_SeasonPassRankupDialog, K2Node_CreateDelegate_OutputDelegate) == 0x000038, "Member 'WBP_SeasonPassRankupDialog_C_ExecuteUbergraph_WBP_SeasonPassRankupDialog::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_SeasonPassRankupDialog_C_ExecuteUbergraph_WBP_SeasonPassRankupDialog, CallFunc_PlaySE_ReturnValue) == 0x000048, "Member 'WBP_SeasonPassRankupDialog_C_ExecuteUbergraph_WBP_SeasonPassRankupDialog::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SeasonPassRankupDialog_C_ExecuteUbergraph_WBP_SeasonPassRankupDialog, K2Node_Event_IsDesignTime) == 0x00004C, "Member 'WBP_SeasonPassRankupDialog_C_ExecuteUbergraph_WBP_SeasonPassRankupDialog::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_SeasonPassRankupDialog_C_ExecuteUbergraph_WBP_SeasonPassRankupDialog, K2Node_CustomEvent_CurrRank) == 0x000050, "Member 'WBP_SeasonPassRankupDialog_C_ExecuteUbergraph_WBP_SeasonPassRankupDialog::K2Node_CustomEvent_CurrRank' has a wrong offset!");
static_assert(offsetof(WBP_SeasonPassRankupDialog_C_ExecuteUbergraph_WBP_SeasonPassRankupDialog, K2Node_CustomEvent_MinRank) == 0x000054, "Member 'WBP_SeasonPassRankupDialog_C_ExecuteUbergraph_WBP_SeasonPassRankupDialog::K2Node_CustomEvent_MinRank' has a wrong offset!");
static_assert(offsetof(WBP_SeasonPassRankupDialog_C_ExecuteUbergraph_WBP_SeasonPassRankupDialog, K2Node_CustomEvent_MaxRank) == 0x000058, "Member 'WBP_SeasonPassRankupDialog_C_ExecuteUbergraph_WBP_SeasonPassRankupDialog::K2Node_CustomEvent_MaxRank' has a wrong offset!");
static_assert(offsetof(WBP_SeasonPassRankupDialog_C_ExecuteUbergraph_WBP_SeasonPassRankupDialog, K2Node_CustomEvent_CurrPoint) == 0x00005C, "Member 'WBP_SeasonPassRankupDialog_C_ExecuteUbergraph_WBP_SeasonPassRankupDialog::K2Node_CustomEvent_CurrPoint' has a wrong offset!");
static_assert(offsetof(WBP_SeasonPassRankupDialog_C_ExecuteUbergraph_WBP_SeasonPassRankupDialog, K2Node_CustomEvent_CosumePoint) == 0x000060, "Member 'WBP_SeasonPassRankupDialog_C_ExecuteUbergraph_WBP_SeasonPassRankupDialog::K2Node_CustomEvent_CosumePoint' has a wrong offset!");
static_assert(offsetof(WBP_SeasonPassRankupDialog_C_ExecuteUbergraph_WBP_SeasonPassRankupDialog, CallFunc_GetValue_Number) == 0x000064, "Member 'WBP_SeasonPassRankupDialog_C_ExecuteUbergraph_WBP_SeasonPassRankupDialog::CallFunc_GetValue_Number' has a wrong offset!");
static_assert(offsetof(WBP_SeasonPassRankupDialog_C_ExecuteUbergraph_WBP_SeasonPassRankupDialog, CallFunc_Subtract_IntInt_ReturnValue) == 0x000068, "Member 'WBP_SeasonPassRankupDialog_C_ExecuteUbergraph_WBP_SeasonPassRankupDialog::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SeasonPassRankupDialog_C_ExecuteUbergraph_WBP_SeasonPassRankupDialog, CallFunc_GetValue_Number_1) == 0x00006C, "Member 'WBP_SeasonPassRankupDialog_C_ExecuteUbergraph_WBP_SeasonPassRankupDialog::CallFunc_GetValue_Number_1' has a wrong offset!");
static_assert(offsetof(WBP_SeasonPassRankupDialog_C_ExecuteUbergraph_WBP_SeasonPassRankupDialog, CallFunc_Multiply_IntInt_ReturnValue) == 0x000070, "Member 'WBP_SeasonPassRankupDialog_C_ExecuteUbergraph_WBP_SeasonPassRankupDialog::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SeasonPassRankupDialog_C_ExecuteUbergraph_WBP_SeasonPassRankupDialog, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000074, "Member 'WBP_SeasonPassRankupDialog_C_ExecuteUbergraph_WBP_SeasonPassRankupDialog::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_SeasonPassRankupDialog_C_ExecuteUbergraph_WBP_SeasonPassRankupDialog, CallFunc_Subtract_IntInt_ReturnValue_2) == 0x000078, "Member 'WBP_SeasonPassRankupDialog_C_ExecuteUbergraph_WBP_SeasonPassRankupDialog::CallFunc_Subtract_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_SeasonPassRankupDialog_C_ExecuteUbergraph_WBP_SeasonPassRankupDialog, CallFunc_Conv_IntToText_ReturnValue_2) == 0x000080, "Member 'WBP_SeasonPassRankupDialog_C_ExecuteUbergraph_WBP_SeasonPassRankupDialog::CallFunc_Conv_IntToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_SeasonPassRankupDialog_C_ExecuteUbergraph_WBP_SeasonPassRankupDialog, CallFunc_PlayAnimationForward_ReturnValue) == 0x000098, "Member 'WBP_SeasonPassRankupDialog_C_ExecuteUbergraph_WBP_SeasonPassRankupDialog::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SeasonPassRankupDialog_C_ExecuteUbergraph_WBP_SeasonPassRankupDialog, CallFunc_PlayAnimationForward_ReturnValue_1) == 0x0000A0, "Member 'WBP_SeasonPassRankupDialog_C_ExecuteUbergraph_WBP_SeasonPassRankupDialog::CallFunc_PlayAnimationForward_ReturnValue_1' has a wrong offset!");

// Function WBP_SeasonPassRankupDialog.WBP_SeasonPassRankupDialog_C.SetData
// 0x0014 (0x0014 - 0x0000)
struct WBP_SeasonPassRankupDialog_C_SetData final
{
public:
	int32                                         Param_CurrRank;                                    // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MinRank;                                           // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxRank;                                           // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_CurrPoint;                                   // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_CosumePoint;                                 // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SeasonPassRankupDialog_C_SetData) == 0x000004, "Wrong alignment on WBP_SeasonPassRankupDialog_C_SetData");
static_assert(sizeof(WBP_SeasonPassRankupDialog_C_SetData) == 0x000014, "Wrong size on WBP_SeasonPassRankupDialog_C_SetData");
static_assert(offsetof(WBP_SeasonPassRankupDialog_C_SetData, Param_CurrRank) == 0x000000, "Member 'WBP_SeasonPassRankupDialog_C_SetData::Param_CurrRank' has a wrong offset!");
static_assert(offsetof(WBP_SeasonPassRankupDialog_C_SetData, MinRank) == 0x000004, "Member 'WBP_SeasonPassRankupDialog_C_SetData::MinRank' has a wrong offset!");
static_assert(offsetof(WBP_SeasonPassRankupDialog_C_SetData, MaxRank) == 0x000008, "Member 'WBP_SeasonPassRankupDialog_C_SetData::MaxRank' has a wrong offset!");
static_assert(offsetof(WBP_SeasonPassRankupDialog_C_SetData, Param_CurrPoint) == 0x00000C, "Member 'WBP_SeasonPassRankupDialog_C_SetData::Param_CurrPoint' has a wrong offset!");
static_assert(offsetof(WBP_SeasonPassRankupDialog_C_SetData, Param_CosumePoint) == 0x000010, "Member 'WBP_SeasonPassRankupDialog_C_SetData::Param_CosumePoint' has a wrong offset!");

// Function WBP_SeasonPassRankupDialog.WBP_SeasonPassRankupDialog_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_SeasonPassRankupDialog_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_SeasonPassRankupDialog_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_SeasonPassRankupDialog_C_PreConstruct");
static_assert(sizeof(WBP_SeasonPassRankupDialog_C_PreConstruct) == 0x000001, "Wrong size on WBP_SeasonPassRankupDialog_C_PreConstruct");
static_assert(offsetof(WBP_SeasonPassRankupDialog_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_SeasonPassRankupDialog_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

