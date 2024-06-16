#pragma once

 

// Package: SelectorDialogBtn

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function SelectorDialogBtn.SelectorDialogBtn_C.OnSelected__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct SelectorDialogBtn_C_OnSelected__DelegateSignature final
{
public:
	class USelectorDialogBtn_C*                   Param_Selected;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_SelectNum;                                   // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SelectorDialogBtn_C_OnSelected__DelegateSignature) == 0x000008, "Wrong alignment on SelectorDialogBtn_C_OnSelected__DelegateSignature");
static_assert(sizeof(SelectorDialogBtn_C_OnSelected__DelegateSignature) == 0x000010, "Wrong size on SelectorDialogBtn_C_OnSelected__DelegateSignature");
static_assert(offsetof(SelectorDialogBtn_C_OnSelected__DelegateSignature, Param_Selected) == 0x000000, "Member 'SelectorDialogBtn_C_OnSelected__DelegateSignature::Param_Selected' has a wrong offset!");
static_assert(offsetof(SelectorDialogBtn_C_OnSelected__DelegateSignature, Param_SelectNum) == 0x000008, "Member 'SelectorDialogBtn_C_OnSelected__DelegateSignature::Param_SelectNum' has a wrong offset!");

// Function SelectorDialogBtn.SelectorDialogBtn_C.ExecuteUbergraph_SelectorDialogBtn
// 0x0088 (0x0088 - 0x0000)
struct SelectorDialogBtn_C_ExecuteUbergraph_SelectorDialogBtn final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Selected;                       // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0008(0x0018)()
	class FString                                 K2Node_CustomEvent_String;                         // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0030(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0058(0x0028)()
	bool                                          K2Node_CustomEvent_bUse;                           // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SelectorDialogBtn_C_ExecuteUbergraph_SelectorDialogBtn) == 0x000008, "Wrong alignment on SelectorDialogBtn_C_ExecuteUbergraph_SelectorDialogBtn");
static_assert(sizeof(SelectorDialogBtn_C_ExecuteUbergraph_SelectorDialogBtn) == 0x000088, "Wrong size on SelectorDialogBtn_C_ExecuteUbergraph_SelectorDialogBtn");
static_assert(offsetof(SelectorDialogBtn_C_ExecuteUbergraph_SelectorDialogBtn, EntryPoint) == 0x000000, "Member 'SelectorDialogBtn_C_ExecuteUbergraph_SelectorDialogBtn::EntryPoint' has a wrong offset!");
static_assert(offsetof(SelectorDialogBtn_C_ExecuteUbergraph_SelectorDialogBtn, Temp_bool_Variable) == 0x000004, "Member 'SelectorDialogBtn_C_ExecuteUbergraph_SelectorDialogBtn::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SelectorDialogBtn_C_ExecuteUbergraph_SelectorDialogBtn, Temp_byte_Variable) == 0x000005, "Member 'SelectorDialogBtn_C_ExecuteUbergraph_SelectorDialogBtn::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(SelectorDialogBtn_C_ExecuteUbergraph_SelectorDialogBtn, Temp_byte_Variable_1) == 0x000006, "Member 'SelectorDialogBtn_C_ExecuteUbergraph_SelectorDialogBtn::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(SelectorDialogBtn_C_ExecuteUbergraph_SelectorDialogBtn, K2Node_CustomEvent_Selected) == 0x000007, "Member 'SelectorDialogBtn_C_ExecuteUbergraph_SelectorDialogBtn::K2Node_CustomEvent_Selected' has a wrong offset!");
static_assert(offsetof(SelectorDialogBtn_C_ExecuteUbergraph_SelectorDialogBtn, CallFunc_Conv_StringToText_ReturnValue) == 0x000008, "Member 'SelectorDialogBtn_C_ExecuteUbergraph_SelectorDialogBtn::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectorDialogBtn_C_ExecuteUbergraph_SelectorDialogBtn, K2Node_CustomEvent_String) == 0x000020, "Member 'SelectorDialogBtn_C_ExecuteUbergraph_SelectorDialogBtn::K2Node_CustomEvent_String' has a wrong offset!");
static_assert(offsetof(SelectorDialogBtn_C_ExecuteUbergraph_SelectorDialogBtn, K2Node_MakeStruct_SlateColor) == 0x000030, "Member 'SelectorDialogBtn_C_ExecuteUbergraph_SelectorDialogBtn::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(SelectorDialogBtn_C_ExecuteUbergraph_SelectorDialogBtn, K2Node_MakeStruct_SlateColor_1) == 0x000058, "Member 'SelectorDialogBtn_C_ExecuteUbergraph_SelectorDialogBtn::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(SelectorDialogBtn_C_ExecuteUbergraph_SelectorDialogBtn, K2Node_CustomEvent_bUse) == 0x000080, "Member 'SelectorDialogBtn_C_ExecuteUbergraph_SelectorDialogBtn::K2Node_CustomEvent_bUse' has a wrong offset!");
static_assert(offsetof(SelectorDialogBtn_C_ExecuteUbergraph_SelectorDialogBtn, K2Node_Select_Default) == 0x000081, "Member 'SelectorDialogBtn_C_ExecuteUbergraph_SelectorDialogBtn::K2Node_Select_Default' has a wrong offset!");

// Function SelectorDialogBtn.SelectorDialogBtn_C.Set UseCheck
// 0x0001 (0x0001 - 0x0000)
struct SelectorDialogBtn_C_Set_UseCheck final
{
public:
	bool                                          bUse;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SelectorDialogBtn_C_Set_UseCheck) == 0x000001, "Wrong alignment on SelectorDialogBtn_C_Set_UseCheck");
static_assert(sizeof(SelectorDialogBtn_C_Set_UseCheck) == 0x000001, "Wrong size on SelectorDialogBtn_C_Set_UseCheck");
static_assert(offsetof(SelectorDialogBtn_C_Set_UseCheck, bUse) == 0x000000, "Member 'SelectorDialogBtn_C_Set_UseCheck::bUse' has a wrong offset!");

// Function SelectorDialogBtn.SelectorDialogBtn_C.SetString
// 0x0010 (0x0010 - 0x0000)
struct SelectorDialogBtn_C_SetString final
{
public:
	class FString                                 Param_String;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(SelectorDialogBtn_C_SetString) == 0x000008, "Wrong alignment on SelectorDialogBtn_C_SetString");
static_assert(sizeof(SelectorDialogBtn_C_SetString) == 0x000010, "Wrong size on SelectorDialogBtn_C_SetString");
static_assert(offsetof(SelectorDialogBtn_C_SetString, Param_String) == 0x000000, "Member 'SelectorDialogBtn_C_SetString::Param_String' has a wrong offset!");

// Function SelectorDialogBtn.SelectorDialogBtn_C.SetSelected
// 0x0001 (0x0001 - 0x0000)
struct SelectorDialogBtn_C_SetSelected final
{
public:
	bool                                          Param_Selected;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SelectorDialogBtn_C_SetSelected) == 0x000001, "Wrong alignment on SelectorDialogBtn_C_SetSelected");
static_assert(sizeof(SelectorDialogBtn_C_SetSelected) == 0x000001, "Wrong size on SelectorDialogBtn_C_SetSelected");
static_assert(offsetof(SelectorDialogBtn_C_SetSelected, Param_Selected) == 0x000000, "Member 'SelectorDialogBtn_C_SetSelected::Param_Selected' has a wrong offset!");

// Function SelectorDialogBtn.SelectorDialogBtn_C.Set Btn Width
// 0x0018 (0x0018 - 0x0000)
struct SelectorDialogBtn_C_Set_Btn_Width final
{
public:
	float                                         BtnWidth;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_63E9[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SelectorDialogBtn_C_Set_Btn_Width) == 0x000008, "Wrong alignment on SelectorDialogBtn_C_Set_Btn_Width");
static_assert(sizeof(SelectorDialogBtn_C_Set_Btn_Width) == 0x000018, "Wrong size on SelectorDialogBtn_C_Set_Btn_Width");
static_assert(offsetof(SelectorDialogBtn_C_Set_Btn_Width, BtnWidth) == 0x000000, "Member 'SelectorDialogBtn_C_Set_Btn_Width::BtnWidth' has a wrong offset!");
static_assert(offsetof(SelectorDialogBtn_C_Set_Btn_Width, CallFunc_MakeVector2D_ReturnValue) == 0x000004, "Member 'SelectorDialogBtn_C_Set_Btn_Width::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectorDialogBtn_C_Set_Btn_Width, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000010, "Member 'SelectorDialogBtn_C_Set_Btn_Width::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");

}

