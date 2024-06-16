#pragma once

 

// Package: JankenButton

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function JankenButton.JankenButton_C.OnSelect__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct JankenButton_C_OnSelect__DelegateSignature final
{
public:
	int32                                         ButtonId;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(JankenButton_C_OnSelect__DelegateSignature) == 0x000004, "Wrong alignment on JankenButton_C_OnSelect__DelegateSignature");
static_assert(sizeof(JankenButton_C_OnSelect__DelegateSignature) == 0x000004, "Wrong size on JankenButton_C_OnSelect__DelegateSignature");
static_assert(offsetof(JankenButton_C_OnSelect__DelegateSignature, ButtonId) == 0x000000, "Member 'JankenButton_C_OnSelect__DelegateSignature::ButtonId' has a wrong offset!");

// Function JankenButton.JankenButton_C.ExecuteUbergraph_JankenButton
// 0x0018 (0x0018 - 0x0000)
struct JankenButton_C_ExecuteUbergraph_JankenButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8C3B[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(JankenButton_C_ExecuteUbergraph_JankenButton) == 0x000008, "Wrong alignment on JankenButton_C_ExecuteUbergraph_JankenButton");
static_assert(sizeof(JankenButton_C_ExecuteUbergraph_JankenButton) == 0x000018, "Wrong size on JankenButton_C_ExecuteUbergraph_JankenButton");
static_assert(offsetof(JankenButton_C_ExecuteUbergraph_JankenButton, EntryPoint) == 0x000000, "Member 'JankenButton_C_ExecuteUbergraph_JankenButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(JankenButton_C_ExecuteUbergraph_JankenButton, K2Node_Event_IsDesignTime) == 0x000004, "Member 'JankenButton_C_ExecuteUbergraph_JankenButton::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(JankenButton_C_ExecuteUbergraph_JankenButton, CallFunc_PlayAnimationForward_ReturnValue) == 0x000008, "Member 'JankenButton_C_ExecuteUbergraph_JankenButton::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(JankenButton_C_ExecuteUbergraph_JankenButton, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000010, "Member 'JankenButton_C_ExecuteUbergraph_JankenButton::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");

// Function JankenButton.JankenButton_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct JankenButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(JankenButton_C_PreConstruct) == 0x000001, "Wrong alignment on JankenButton_C_PreConstruct");
static_assert(sizeof(JankenButton_C_PreConstruct) == 0x000001, "Wrong size on JankenButton_C_PreConstruct");
static_assert(offsetof(JankenButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'JankenButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function JankenButton.JankenButton_C.SetBtnSelected
// 0x0010 (0x0010 - 0x0000)
struct JankenButton_C_SetBtnSelected final
{
public:
	bool                                          Param_bSelected;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8C3C[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(JankenButton_C_SetBtnSelected) == 0x000008, "Wrong alignment on JankenButton_C_SetBtnSelected");
static_assert(sizeof(JankenButton_C_SetBtnSelected) == 0x000010, "Wrong size on JankenButton_C_SetBtnSelected");
static_assert(offsetof(JankenButton_C_SetBtnSelected, Param_bSelected) == 0x000000, "Member 'JankenButton_C_SetBtnSelected::Param_bSelected' has a wrong offset!");
static_assert(offsetof(JankenButton_C_SetBtnSelected, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'JankenButton_C_SetBtnSelected::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function JankenButton.JankenButton_C.SetBtnType
// 0x04D0 (0x04D0 - 0x0000)
struct JankenButton_C_SetBtnType final
{
public:
	int32                                         InIndex;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8C3D[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0008(0x0088)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_1;                    // 0x0090(0x0088)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_2;                    // 0x0118(0x0088)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_3;                    // 0x01A0(0x0088)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_4;                    // 0x0228(0x0088)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_5;                    // 0x02B0(0x0088)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_6;                    // 0x0338(0x0088)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_7;                    // 0x03C0(0x0088)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_8;                    // 0x0448(0x0088)()
};
static_assert(alignof(JankenButton_C_SetBtnType) == 0x000008, "Wrong alignment on JankenButton_C_SetBtnType");
static_assert(sizeof(JankenButton_C_SetBtnType) == 0x0004D0, "Wrong size on JankenButton_C_SetBtnType");
static_assert(offsetof(JankenButton_C_SetBtnType, InIndex) == 0x000000, "Member 'JankenButton_C_SetBtnType::InIndex' has a wrong offset!");
static_assert(offsetof(JankenButton_C_SetBtnType, K2Node_SwitchInteger_CmpSuccess) == 0x000004, "Member 'JankenButton_C_SetBtnType::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(JankenButton_C_SetBtnType, K2Node_MakeStruct_SlateBrush) == 0x000008, "Member 'JankenButton_C_SetBtnType::K2Node_MakeStruct_SlateBrush' has a wrong offset!");
static_assert(offsetof(JankenButton_C_SetBtnType, K2Node_MakeStruct_SlateBrush_1) == 0x000090, "Member 'JankenButton_C_SetBtnType::K2Node_MakeStruct_SlateBrush_1' has a wrong offset!");
static_assert(offsetof(JankenButton_C_SetBtnType, K2Node_MakeStruct_SlateBrush_2) == 0x000118, "Member 'JankenButton_C_SetBtnType::K2Node_MakeStruct_SlateBrush_2' has a wrong offset!");
static_assert(offsetof(JankenButton_C_SetBtnType, K2Node_MakeStruct_SlateBrush_3) == 0x0001A0, "Member 'JankenButton_C_SetBtnType::K2Node_MakeStruct_SlateBrush_3' has a wrong offset!");
static_assert(offsetof(JankenButton_C_SetBtnType, K2Node_MakeStruct_SlateBrush_4) == 0x000228, "Member 'JankenButton_C_SetBtnType::K2Node_MakeStruct_SlateBrush_4' has a wrong offset!");
static_assert(offsetof(JankenButton_C_SetBtnType, K2Node_MakeStruct_SlateBrush_5) == 0x0002B0, "Member 'JankenButton_C_SetBtnType::K2Node_MakeStruct_SlateBrush_5' has a wrong offset!");
static_assert(offsetof(JankenButton_C_SetBtnType, K2Node_MakeStruct_SlateBrush_6) == 0x000338, "Member 'JankenButton_C_SetBtnType::K2Node_MakeStruct_SlateBrush_6' has a wrong offset!");
static_assert(offsetof(JankenButton_C_SetBtnType, K2Node_MakeStruct_SlateBrush_7) == 0x0003C0, "Member 'JankenButton_C_SetBtnType::K2Node_MakeStruct_SlateBrush_7' has a wrong offset!");
static_assert(offsetof(JankenButton_C_SetBtnType, K2Node_MakeStruct_SlateBrush_8) == 0x000448, "Member 'JankenButton_C_SetBtnType::K2Node_MakeStruct_SlateBrush_8' has a wrong offset!");

}

