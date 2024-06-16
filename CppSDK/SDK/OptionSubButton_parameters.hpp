#pragma once

 

// Package: OptionSubButton

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function OptionSubButton.OptionSubButton_C.SetBtnImage
// 0x0010 (0x0010 - 0x0000)
struct OptionSubButton_C_SetBtnImage final
{
public:
	class UImage*                                 BtnType;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_2;    // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OptionSubButton_C_SetBtnImage) == 0x000008, "Wrong alignment on OptionSubButton_C_SetBtnImage");
static_assert(sizeof(OptionSubButton_C_SetBtnImage) == 0x000010, "Wrong size on OptionSubButton_C_SetBtnImage");
static_assert(offsetof(OptionSubButton_C_SetBtnImage, BtnType) == 0x000000, "Member 'OptionSubButton_C_SetBtnImage::BtnType' has a wrong offset!");
static_assert(offsetof(OptionSubButton_C_SetBtnImage, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000008, "Member 'OptionSubButton_C_SetBtnImage::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionSubButton_C_SetBtnImage, CallFunc_EqualEqual_ObjectObject_ReturnValue_1) == 0x000009, "Member 'OptionSubButton_C_SetBtnImage::CallFunc_EqualEqual_ObjectObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OptionSubButton_C_SetBtnImage, CallFunc_EqualEqual_ObjectObject_ReturnValue_2) == 0x00000A, "Member 'OptionSubButton_C_SetBtnImage::CallFunc_EqualEqual_ObjectObject_ReturnValue_2' has a wrong offset!");

// Function OptionSubButton.OptionSubButton_C.SetEnable
// 0x0058 (0x0058 - 0x0000)
struct OptionSubButton_C_SetEnable final
{
public:
	bool                                          IsEnable;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89C9[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0030(0x0028)()
};
static_assert(alignof(OptionSubButton_C_SetEnable) == 0x000008, "Wrong alignment on OptionSubButton_C_SetEnable");
static_assert(sizeof(OptionSubButton_C_SetEnable) == 0x000058, "Wrong size on OptionSubButton_C_SetEnable");
static_assert(offsetof(OptionSubButton_C_SetEnable, IsEnable) == 0x000000, "Member 'OptionSubButton_C_SetEnable::IsEnable' has a wrong offset!");
static_assert(offsetof(OptionSubButton_C_SetEnable, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'OptionSubButton_C_SetEnable::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(OptionSubButton_C_SetEnable, K2Node_MakeStruct_SlateColor_1) == 0x000030, "Member 'OptionSubButton_C_SetEnable::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");

// Function OptionSubButton.OptionSubButton_C.Set Menu Focus
// 0x0060 (0x0060 - 0x0000)
struct OptionSubButton_C_Set_Menu_Focus final
{
public:
	bool                                          InFocus;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89CA[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         FocusTint;                                         // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0030(0x0028)()
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OptionSubButton_C_Set_Menu_Focus) == 0x000008, "Wrong alignment on OptionSubButton_C_Set_Menu_Focus");
static_assert(sizeof(OptionSubButton_C_Set_Menu_Focus) == 0x000060, "Wrong size on OptionSubButton_C_Set_Menu_Focus");
static_assert(offsetof(OptionSubButton_C_Set_Menu_Focus, InFocus) == 0x000000, "Member 'OptionSubButton_C_Set_Menu_Focus::InFocus' has a wrong offset!");
static_assert(offsetof(OptionSubButton_C_Set_Menu_Focus, FocusTint) == 0x000004, "Member 'OptionSubButton_C_Set_Menu_Focus::FocusTint' has a wrong offset!");
static_assert(offsetof(OptionSubButton_C_Set_Menu_Focus, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'OptionSubButton_C_Set_Menu_Focus::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(OptionSubButton_C_Set_Menu_Focus, K2Node_MakeStruct_SlateColor_1) == 0x000030, "Member 'OptionSubButton_C_Set_Menu_Focus::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(OptionSubButton_C_Set_Menu_Focus, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000058, "Member 'OptionSubButton_C_Set_Menu_Focus::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");

// Function OptionSubButton.OptionSubButton_C.ExecuteUbergraph_OptionSubButton
// 0x0058 (0x0058 - 0x0000)
struct OptionSubButton_C_ExecuteUbergraph_OptionSubButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89CB[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0030(0x0028)()
};
static_assert(alignof(OptionSubButton_C_ExecuteUbergraph_OptionSubButton) == 0x000008, "Wrong alignment on OptionSubButton_C_ExecuteUbergraph_OptionSubButton");
static_assert(sizeof(OptionSubButton_C_ExecuteUbergraph_OptionSubButton) == 0x000058, "Wrong size on OptionSubButton_C_ExecuteUbergraph_OptionSubButton");
static_assert(offsetof(OptionSubButton_C_ExecuteUbergraph_OptionSubButton, EntryPoint) == 0x000000, "Member 'OptionSubButton_C_ExecuteUbergraph_OptionSubButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(OptionSubButton_C_ExecuteUbergraph_OptionSubButton, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'OptionSubButton_C_ExecuteUbergraph_OptionSubButton::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(OptionSubButton_C_ExecuteUbergraph_OptionSubButton, K2Node_MakeStruct_SlateColor_1) == 0x000030, "Member 'OptionSubButton_C_ExecuteUbergraph_OptionSubButton::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");

// Function OptionSubButton.OptionSubButton_C.OnClick__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct OptionSubButton_C_OnClick__DelegateSignature final
{
public:
	int32                                         Param_ButtonId;                                    // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OptionSubButton_C_OnClick__DelegateSignature) == 0x000004, "Wrong alignment on OptionSubButton_C_OnClick__DelegateSignature");
static_assert(sizeof(OptionSubButton_C_OnClick__DelegateSignature) == 0x000004, "Wrong size on OptionSubButton_C_OnClick__DelegateSignature");
static_assert(offsetof(OptionSubButton_C_OnClick__DelegateSignature, Param_ButtonId) == 0x000000, "Member 'OptionSubButton_C_OnClick__DelegateSignature::Param_ButtonId' has a wrong offset!");

}

