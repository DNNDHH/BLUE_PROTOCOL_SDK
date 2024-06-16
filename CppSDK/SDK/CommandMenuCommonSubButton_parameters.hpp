#pragma once

 

// Package: CommandMenuCommonSubButton

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function CommandMenuCommonSubButton.CommandMenuCommonSubButton_C.OnClick__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct CommandMenuCommonSubButton_C_OnClick__DelegateSignature final
{
public:
	int32                                         Param_ButtonId;                                    // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenuCommonSubButton_C_OnClick__DelegateSignature) == 0x000004, "Wrong alignment on CommandMenuCommonSubButton_C_OnClick__DelegateSignature");
static_assert(sizeof(CommandMenuCommonSubButton_C_OnClick__DelegateSignature) == 0x000004, "Wrong size on CommandMenuCommonSubButton_C_OnClick__DelegateSignature");
static_assert(offsetof(CommandMenuCommonSubButton_C_OnClick__DelegateSignature, Param_ButtonId) == 0x000000, "Member 'CommandMenuCommonSubButton_C_OnClick__DelegateSignature::Param_ButtonId' has a wrong offset!");

// Function CommandMenuCommonSubButton.CommandMenuCommonSubButton_C.ExecuteUbergraph_CommandMenuCommonSubButton
// 0x0020 (0x0020 - 0x0000)
struct CommandMenuCommonSubButton_C_ExecuteUbergraph_CommandMenuCommonSubButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_IntFloat_ReturnValue;            // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bIsVisible;                     // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenuCommonSubButton_C_ExecuteUbergraph_CommandMenuCommonSubButton) == 0x000008, "Wrong alignment on CommandMenuCommonSubButton_C_ExecuteUbergraph_CommandMenuCommonSubButton");
static_assert(sizeof(CommandMenuCommonSubButton_C_ExecuteUbergraph_CommandMenuCommonSubButton) == 0x000020, "Wrong size on CommandMenuCommonSubButton_C_ExecuteUbergraph_CommandMenuCommonSubButton");
static_assert(offsetof(CommandMenuCommonSubButton_C_ExecuteUbergraph_CommandMenuCommonSubButton, EntryPoint) == 0x000000, "Member 'CommandMenuCommonSubButton_C_ExecuteUbergraph_CommandMenuCommonSubButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButton_C_ExecuteUbergraph_CommandMenuCommonSubButton, Temp_bool_Variable) == 0x000004, "Member 'CommandMenuCommonSubButton_C_ExecuteUbergraph_CommandMenuCommonSubButton::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButton_C_ExecuteUbergraph_CommandMenuCommonSubButton, Temp_byte_Variable) == 0x000005, "Member 'CommandMenuCommonSubButton_C_ExecuteUbergraph_CommandMenuCommonSubButton::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButton_C_ExecuteUbergraph_CommandMenuCommonSubButton, Temp_byte_Variable_1) == 0x000006, "Member 'CommandMenuCommonSubButton_C_ExecuteUbergraph_CommandMenuCommonSubButton::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButton_C_ExecuteUbergraph_CommandMenuCommonSubButton, K2Node_Event_IsDesignTime) == 0x000007, "Member 'CommandMenuCommonSubButton_C_ExecuteUbergraph_CommandMenuCommonSubButton::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButton_C_ExecuteUbergraph_CommandMenuCommonSubButton, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'CommandMenuCommonSubButton_C_ExecuteUbergraph_CommandMenuCommonSubButton::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButton_C_ExecuteUbergraph_CommandMenuCommonSubButton, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'CommandMenuCommonSubButton_C_ExecuteUbergraph_CommandMenuCommonSubButton::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButton_C_ExecuteUbergraph_CommandMenuCommonSubButton, CallFunc_Multiply_IntFloat_ReturnValue) == 0x000014, "Member 'CommandMenuCommonSubButton_C_ExecuteUbergraph_CommandMenuCommonSubButton::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButton_C_ExecuteUbergraph_CommandMenuCommonSubButton, CallFunc_Add_FloatFloat_ReturnValue) == 0x000018, "Member 'CommandMenuCommonSubButton_C_ExecuteUbergraph_CommandMenuCommonSubButton::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButton_C_ExecuteUbergraph_CommandMenuCommonSubButton, K2Node_CustomEvent_bIsVisible) == 0x00001C, "Member 'CommandMenuCommonSubButton_C_ExecuteUbergraph_CommandMenuCommonSubButton::K2Node_CustomEvent_bIsVisible' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButton_C_ExecuteUbergraph_CommandMenuCommonSubButton, K2Node_Select_Default) == 0x00001D, "Member 'CommandMenuCommonSubButton_C_ExecuteUbergraph_CommandMenuCommonSubButton::K2Node_Select_Default' has a wrong offset!");

// Function CommandMenuCommonSubButton.CommandMenuCommonSubButton_C.ExcramationIconVisible
// 0x0001 (0x0001 - 0x0000)
struct CommandMenuCommonSubButton_C_ExcramationIconVisible final
{
public:
	bool                                          bIsVisible;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommandMenuCommonSubButton_C_ExcramationIconVisible) == 0x000001, "Wrong alignment on CommandMenuCommonSubButton_C_ExcramationIconVisible");
static_assert(sizeof(CommandMenuCommonSubButton_C_ExcramationIconVisible) == 0x000001, "Wrong size on CommandMenuCommonSubButton_C_ExcramationIconVisible");
static_assert(offsetof(CommandMenuCommonSubButton_C_ExcramationIconVisible, bIsVisible) == 0x000000, "Member 'CommandMenuCommonSubButton_C_ExcramationIconVisible::bIsVisible' has a wrong offset!");

// Function CommandMenuCommonSubButton.CommandMenuCommonSubButton_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct CommandMenuCommonSubButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommandMenuCommonSubButton_C_PreConstruct) == 0x000001, "Wrong alignment on CommandMenuCommonSubButton_C_PreConstruct");
static_assert(sizeof(CommandMenuCommonSubButton_C_PreConstruct) == 0x000001, "Wrong size on CommandMenuCommonSubButton_C_PreConstruct");
static_assert(offsetof(CommandMenuCommonSubButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'CommandMenuCommonSubButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function CommandMenuCommonSubButton.CommandMenuCommonSubButton_C.Set Menu Focus
// 0x0020 (0x0020 - 0x0000)
struct CommandMenuCommonSubButton_C_Set_Menu_Focus final
{
public:
	bool                                          InFocus;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_54EB[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         FocusTint;                                         // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommandMenuCommonSubButton_C_Set_Menu_Focus) == 0x000008, "Wrong alignment on CommandMenuCommonSubButton_C_Set_Menu_Focus");
static_assert(sizeof(CommandMenuCommonSubButton_C_Set_Menu_Focus) == 0x000020, "Wrong size on CommandMenuCommonSubButton_C_Set_Menu_Focus");
static_assert(offsetof(CommandMenuCommonSubButton_C_Set_Menu_Focus, InFocus) == 0x000000, "Member 'CommandMenuCommonSubButton_C_Set_Menu_Focus::InFocus' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButton_C_Set_Menu_Focus, FocusTint) == 0x000004, "Member 'CommandMenuCommonSubButton_C_Set_Menu_Focus::FocusTint' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButton_C_Set_Menu_Focus, CallFunc_PlayAnimationForward_ReturnValue) == 0x000008, "Member 'CommandMenuCommonSubButton_C_Set_Menu_Focus::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButton_C_Set_Menu_Focus, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000010, "Member 'CommandMenuCommonSubButton_C_Set_Menu_Focus::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButton_C_Set_Menu_Focus, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000018, "Member 'CommandMenuCommonSubButton_C_Set_Menu_Focus::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");

// Function CommandMenuCommonSubButton.CommandMenuCommonSubButton_C.SetEnable
// 0x0001 (0x0001 - 0x0000)
struct CommandMenuCommonSubButton_C_SetEnable final
{
public:
	bool                                          IsEnable;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommandMenuCommonSubButton_C_SetEnable) == 0x000001, "Wrong alignment on CommandMenuCommonSubButton_C_SetEnable");
static_assert(sizeof(CommandMenuCommonSubButton_C_SetEnable) == 0x000001, "Wrong size on CommandMenuCommonSubButton_C_SetEnable");
static_assert(offsetof(CommandMenuCommonSubButton_C_SetEnable, IsEnable) == 0x000000, "Member 'CommandMenuCommonSubButton_C_SetEnable::IsEnable' has a wrong offset!");

// Function CommandMenuCommonSubButton.CommandMenuCommonSubButton_C.SetBtnImage
// 0x0088 (0x0088 - 0x0000)
struct CommandMenuCommonSubButton_C_SetBtnImage final
{
public:
	class UImage*                                 BtnType;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0030(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x0058(0x0028)()
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_2;    // 0x0082(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommandMenuCommonSubButton_C_SetBtnImage) == 0x000008, "Wrong alignment on CommandMenuCommonSubButton_C_SetBtnImage");
static_assert(sizeof(CommandMenuCommonSubButton_C_SetBtnImage) == 0x000088, "Wrong size on CommandMenuCommonSubButton_C_SetBtnImage");
static_assert(offsetof(CommandMenuCommonSubButton_C_SetBtnImage, BtnType) == 0x000000, "Member 'CommandMenuCommonSubButton_C_SetBtnImage::BtnType' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButton_C_SetBtnImage, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'CommandMenuCommonSubButton_C_SetBtnImage::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButton_C_SetBtnImage, K2Node_MakeStruct_SlateColor_1) == 0x000030, "Member 'CommandMenuCommonSubButton_C_SetBtnImage::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButton_C_SetBtnImage, K2Node_MakeStruct_SlateColor_2) == 0x000058, "Member 'CommandMenuCommonSubButton_C_SetBtnImage::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButton_C_SetBtnImage, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000080, "Member 'CommandMenuCommonSubButton_C_SetBtnImage::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButton_C_SetBtnImage, CallFunc_EqualEqual_ObjectObject_ReturnValue_1) == 0x000081, "Member 'CommandMenuCommonSubButton_C_SetBtnImage::CallFunc_EqualEqual_ObjectObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButton_C_SetBtnImage, CallFunc_EqualEqual_ObjectObject_ReturnValue_2) == 0x000082, "Member 'CommandMenuCommonSubButton_C_SetBtnImage::CallFunc_EqualEqual_ObjectObject_ReturnValue_2' has a wrong offset!");

// Function CommandMenuCommonSubButton.CommandMenuCommonSubButton_C.SetBtnText
// 0x0018 (0x0018 - 0x0000)
struct CommandMenuCommonSubButton_C_SetBtnText final
{
public:
	class FText                                   Param_Text;                                        // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(CommandMenuCommonSubButton_C_SetBtnText) == 0x000008, "Wrong alignment on CommandMenuCommonSubButton_C_SetBtnText");
static_assert(sizeof(CommandMenuCommonSubButton_C_SetBtnText) == 0x000018, "Wrong size on CommandMenuCommonSubButton_C_SetBtnText");
static_assert(offsetof(CommandMenuCommonSubButton_C_SetBtnText, Param_Text) == 0x000000, "Member 'CommandMenuCommonSubButton_C_SetBtnText::Param_Text' has a wrong offset!");

// Function CommandMenuCommonSubButton.CommandMenuCommonSubButton_C.SetBookmarkEnable
// 0x0005 (0x0005 - 0x0000)
struct CommandMenuCommonSubButton_C_SetBookmarkEnable final
{
public:
	bool                                          bEnable;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenuCommonSubButton_C_SetBookmarkEnable) == 0x000001, "Wrong alignment on CommandMenuCommonSubButton_C_SetBookmarkEnable");
static_assert(sizeof(CommandMenuCommonSubButton_C_SetBookmarkEnable) == 0x000005, "Wrong size on CommandMenuCommonSubButton_C_SetBookmarkEnable");
static_assert(offsetof(CommandMenuCommonSubButton_C_SetBookmarkEnable, bEnable) == 0x000000, "Member 'CommandMenuCommonSubButton_C_SetBookmarkEnable::bEnable' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButton_C_SetBookmarkEnable, Temp_bool_Variable) == 0x000001, "Member 'CommandMenuCommonSubButton_C_SetBookmarkEnable::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButton_C_SetBookmarkEnable, Temp_byte_Variable) == 0x000002, "Member 'CommandMenuCommonSubButton_C_SetBookmarkEnable::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButton_C_SetBookmarkEnable, Temp_byte_Variable_1) == 0x000003, "Member 'CommandMenuCommonSubButton_C_SetBookmarkEnable::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButton_C_SetBookmarkEnable, K2Node_Select_Default) == 0x000004, "Member 'CommandMenuCommonSubButton_C_SetBookmarkEnable::K2Node_Select_Default' has a wrong offset!");

}

