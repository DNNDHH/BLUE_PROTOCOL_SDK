#pragma once

 

// Package: WBP_ScbPopupButtonParts

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WBP_ScbPopupButtonParts.WBP_ScbPopupButtonParts_C.ExecuteUbergraph_WBP_ScbPopupButtonParts
// 0x0004 (0x0004 - 0x0000)
struct WBP_ScbPopupButtonParts_C_ExecuteUbergraph_WBP_ScbPopupButtonParts final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ScbPopupButtonParts_C_ExecuteUbergraph_WBP_ScbPopupButtonParts) == 0x000004, "Wrong alignment on WBP_ScbPopupButtonParts_C_ExecuteUbergraph_WBP_ScbPopupButtonParts");
static_assert(sizeof(WBP_ScbPopupButtonParts_C_ExecuteUbergraph_WBP_ScbPopupButtonParts) == 0x000004, "Wrong size on WBP_ScbPopupButtonParts_C_ExecuteUbergraph_WBP_ScbPopupButtonParts");
static_assert(offsetof(WBP_ScbPopupButtonParts_C_ExecuteUbergraph_WBP_ScbPopupButtonParts, EntryPoint) == 0x000000, "Member 'WBP_ScbPopupButtonParts_C_ExecuteUbergraph_WBP_ScbPopupButtonParts::EntryPoint' has a wrong offset!");

// Function WBP_ScbPopupButtonParts.WBP_ScbPopupButtonParts_C.SetupExpertRank
// 0x0098 (0x0098 - 0x0000)
struct WBP_ScbPopupButtonParts_C_SetupExpertRank final
{
public:
	int32                                         InCurrRank;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InMaxRank;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UTelopStar_C*>                   TelopStarList;                                     // 0x0008(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	TArray<class USizeBox*>                       ImageStarList;                                     // 0x0018(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89FF[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A00[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USizeBox*                               CallFunc_Array_Get_Item;                           // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x004D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8A01[0x2];                                     // 0x004E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UTelopStar_C*                           CallFunc_Array_Get_Item_1;                         // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8A02[0x3];                                     // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8A03[0x4];                                     // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UTelopStar_C*>                   K2Node_MakeArray_Array;                            // 0x0068(0x0010)(ReferenceParm, ContainsInstancedReference)
	bool                                          CallFunc_Less_IntInt_ReturnValue_3;                // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A04[0x3];                                     // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8A05[0x6];                                     // 0x0082(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USizeBox*>                       K2Node_MakeArray_Array_1;                          // 0x0088(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(WBP_ScbPopupButtonParts_C_SetupExpertRank) == 0x000008, "Wrong alignment on WBP_ScbPopupButtonParts_C_SetupExpertRank");
static_assert(sizeof(WBP_ScbPopupButtonParts_C_SetupExpertRank) == 0x000098, "Wrong size on WBP_ScbPopupButtonParts_C_SetupExpertRank");
static_assert(offsetof(WBP_ScbPopupButtonParts_C_SetupExpertRank, InCurrRank) == 0x000000, "Member 'WBP_ScbPopupButtonParts_C_SetupExpertRank::InCurrRank' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopupButtonParts_C_SetupExpertRank, InMaxRank) == 0x000004, "Member 'WBP_ScbPopupButtonParts_C_SetupExpertRank::InMaxRank' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopupButtonParts_C_SetupExpertRank, TelopStarList) == 0x000008, "Member 'WBP_ScbPopupButtonParts_C_SetupExpertRank::TelopStarList' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopupButtonParts_C_SetupExpertRank, ImageStarList) == 0x000018, "Member 'WBP_ScbPopupButtonParts_C_SetupExpertRank::ImageStarList' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopupButtonParts_C_SetupExpertRank, Temp_int_Array_Index_Variable) == 0x000028, "Member 'WBP_ScbPopupButtonParts_C_SetupExpertRank::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopupButtonParts_C_SetupExpertRank, CallFunc_Less_IntInt_ReturnValue) == 0x00002C, "Member 'WBP_ScbPopupButtonParts_C_SetupExpertRank::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopupButtonParts_C_SetupExpertRank, Temp_int_Loop_Counter_Variable) == 0x000030, "Member 'WBP_ScbPopupButtonParts_C_SetupExpertRank::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopupButtonParts_C_SetupExpertRank, CallFunc_Add_IntInt_ReturnValue) == 0x000034, "Member 'WBP_ScbPopupButtonParts_C_SetupExpertRank::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopupButtonParts_C_SetupExpertRank, Temp_int_Array_Index_Variable_1) == 0x000038, "Member 'WBP_ScbPopupButtonParts_C_SetupExpertRank::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopupButtonParts_C_SetupExpertRank, CallFunc_Less_IntInt_ReturnValue_1) == 0x00003C, "Member 'WBP_ScbPopupButtonParts_C_SetupExpertRank::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopupButtonParts_C_SetupExpertRank, CallFunc_Array_Get_Item) == 0x000040, "Member 'WBP_ScbPopupButtonParts_C_SetupExpertRank::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopupButtonParts_C_SetupExpertRank, CallFunc_Array_Length_ReturnValue) == 0x000048, "Member 'WBP_ScbPopupButtonParts_C_SetupExpertRank::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopupButtonParts_C_SetupExpertRank, CallFunc_Less_IntInt_ReturnValue_2) == 0x00004C, "Member 'WBP_ScbPopupButtonParts_C_SetupExpertRank::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopupButtonParts_C_SetupExpertRank, CallFunc_MakeLiteralByte_ReturnValue) == 0x00004D, "Member 'WBP_ScbPopupButtonParts_C_SetupExpertRank::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopupButtonParts_C_SetupExpertRank, CallFunc_Array_Get_Item_1) == 0x000050, "Member 'WBP_ScbPopupButtonParts_C_SetupExpertRank::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopupButtonParts_C_SetupExpertRank, CallFunc_Array_Length_ReturnValue_1) == 0x000058, "Member 'WBP_ScbPopupButtonParts_C_SetupExpertRank::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopupButtonParts_C_SetupExpertRank, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x00005C, "Member 'WBP_ScbPopupButtonParts_C_SetupExpertRank::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopupButtonParts_C_SetupExpertRank, Temp_int_Loop_Counter_Variable_1) == 0x000060, "Member 'WBP_ScbPopupButtonParts_C_SetupExpertRank::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopupButtonParts_C_SetupExpertRank, K2Node_MakeArray_Array) == 0x000068, "Member 'WBP_ScbPopupButtonParts_C_SetupExpertRank::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopupButtonParts_C_SetupExpertRank, CallFunc_Less_IntInt_ReturnValue_3) == 0x000078, "Member 'WBP_ScbPopupButtonParts_C_SetupExpertRank::CallFunc_Less_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopupButtonParts_C_SetupExpertRank, CallFunc_Add_IntInt_ReturnValue_1) == 0x00007C, "Member 'WBP_ScbPopupButtonParts_C_SetupExpertRank::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopupButtonParts_C_SetupExpertRank, Temp_bool_Variable) == 0x000080, "Member 'WBP_ScbPopupButtonParts_C_SetupExpertRank::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopupButtonParts_C_SetupExpertRank, K2Node_Select_Default) == 0x000081, "Member 'WBP_ScbPopupButtonParts_C_SetupExpertRank::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopupButtonParts_C_SetupExpertRank, K2Node_MakeArray_Array_1) == 0x000088, "Member 'WBP_ScbPopupButtonParts_C_SetupExpertRank::K2Node_MakeArray_Array_1' has a wrong offset!");

// Function WBP_ScbPopupButtonParts.WBP_ScbPopupButtonParts_C.SetEnableButton
// 0x0001 (0x0001 - 0x0000)
struct WBP_ScbPopupButtonParts_C_SetEnableButton final
{
public:
	bool                                          bInIsEnabled;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_ScbPopupButtonParts_C_SetEnableButton) == 0x000001, "Wrong alignment on WBP_ScbPopupButtonParts_C_SetEnableButton");
static_assert(sizeof(WBP_ScbPopupButtonParts_C_SetEnableButton) == 0x000001, "Wrong size on WBP_ScbPopupButtonParts_C_SetEnableButton");
static_assert(offsetof(WBP_ScbPopupButtonParts_C_SetEnableButton, bInIsEnabled) == 0x000000, "Member 'WBP_ScbPopupButtonParts_C_SetEnableButton::bInIsEnabled' has a wrong offset!");

}

