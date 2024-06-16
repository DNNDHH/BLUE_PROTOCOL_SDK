#pragma once

 

// Package: ResultDialog_Letter

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function ResultDialog_Letter.ResultDialog_Letter_C.ExecuteUbergraph_ResultDialog_Letter
// 0x0078 (0x0078 - 0x0000)
struct ResultDialog_Letter_C_ExecuteUbergraph_ResultDialog_Letter final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_971A[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0030(0x0010)(ZeroConstructor, NoDestructor)
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0040(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_971B[0x6];                                     // 0x004A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0050(0x0028)()
};
static_assert(alignof(ResultDialog_Letter_C_ExecuteUbergraph_ResultDialog_Letter) == 0x000008, "Wrong alignment on ResultDialog_Letter_C_ExecuteUbergraph_ResultDialog_Letter");
static_assert(sizeof(ResultDialog_Letter_C_ExecuteUbergraph_ResultDialog_Letter) == 0x000078, "Wrong size on ResultDialog_Letter_C_ExecuteUbergraph_ResultDialog_Letter");
static_assert(offsetof(ResultDialog_Letter_C_ExecuteUbergraph_ResultDialog_Letter, EntryPoint) == 0x000000, "Member 'ResultDialog_Letter_C_ExecuteUbergraph_ResultDialog_Letter::EntryPoint' has a wrong offset!");
static_assert(offsetof(ResultDialog_Letter_C_ExecuteUbergraph_ResultDialog_Letter, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'ResultDialog_Letter_C_ExecuteUbergraph_ResultDialog_Letter::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(ResultDialog_Letter_C_ExecuteUbergraph_ResultDialog_Letter, K2Node_CreateDelegate_OutputDelegate) == 0x000030, "Member 'ResultDialog_Letter_C_ExecuteUbergraph_ResultDialog_Letter::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ResultDialog_Letter_C_ExecuteUbergraph_ResultDialog_Letter, K2Node_Event_Animation) == 0x000040, "Member 'ResultDialog_Letter_C_ExecuteUbergraph_ResultDialog_Letter::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(ResultDialog_Letter_C_ExecuteUbergraph_ResultDialog_Letter, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000048, "Member 'ResultDialog_Letter_C_ExecuteUbergraph_ResultDialog_Letter::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultDialog_Letter_C_ExecuteUbergraph_ResultDialog_Letter, CallFunc_EqualEqual_ObjectObject_ReturnValue_1) == 0x000049, "Member 'ResultDialog_Letter_C_ExecuteUbergraph_ResultDialog_Letter::CallFunc_EqualEqual_ObjectObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ResultDialog_Letter_C_ExecuteUbergraph_ResultDialog_Letter, K2Node_MakeStruct_SlateColor_1) == 0x000050, "Member 'ResultDialog_Letter_C_ExecuteUbergraph_ResultDialog_Letter::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");

// Function ResultDialog_Letter.ResultDialog_Letter_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct ResultDialog_Letter_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ResultDialog_Letter_C_OnAnimationFinished) == 0x000008, "Wrong alignment on ResultDialog_Letter_C_OnAnimationFinished");
static_assert(sizeof(ResultDialog_Letter_C_OnAnimationFinished) == 0x000008, "Wrong size on ResultDialog_Letter_C_OnAnimationFinished");
static_assert(offsetof(ResultDialog_Letter_C_OnAnimationFinished, Animation) == 0x000000, "Member 'ResultDialog_Letter_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function ResultDialog_Letter.ResultDialog_Letter_C.Setup
// 0x0090 (0x0090 - 0x0000)
struct ResultDialog_Letter_C_Setup final
{
public:
	struct FSBLetter                              InLetter;                                          // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSBOverLimit                           InOverLimit;                                       // 0x0028(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSBOverLimit                           OverLimit;                                         // 0x0048(0x0020)(Edit, BlueprintVisible)
	int32                                         Coin;                                              // 0x0068(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_971C[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FOwnItemInfo>                   LostItems;                                         // 0x0070(0x0010)(Edit, BlueprintVisible)
	TArray<struct FOwnItemInfo>                   SendItems;                                         // 0x0080(0x0010)(Edit, BlueprintVisible)
};
static_assert(alignof(ResultDialog_Letter_C_Setup) == 0x000008, "Wrong alignment on ResultDialog_Letter_C_Setup");
static_assert(sizeof(ResultDialog_Letter_C_Setup) == 0x000090, "Wrong size on ResultDialog_Letter_C_Setup");
static_assert(offsetof(ResultDialog_Letter_C_Setup, InLetter) == 0x000000, "Member 'ResultDialog_Letter_C_Setup::InLetter' has a wrong offset!");
static_assert(offsetof(ResultDialog_Letter_C_Setup, InOverLimit) == 0x000028, "Member 'ResultDialog_Letter_C_Setup::InOverLimit' has a wrong offset!");
static_assert(offsetof(ResultDialog_Letter_C_Setup, OverLimit) == 0x000048, "Member 'ResultDialog_Letter_C_Setup::OverLimit' has a wrong offset!");
static_assert(offsetof(ResultDialog_Letter_C_Setup, Coin) == 0x000068, "Member 'ResultDialog_Letter_C_Setup::Coin' has a wrong offset!");
static_assert(offsetof(ResultDialog_Letter_C_Setup, LostItems) == 0x000070, "Member 'ResultDialog_Letter_C_Setup::LostItems' has a wrong offset!");
static_assert(offsetof(ResultDialog_Letter_C_Setup, SendItems) == 0x000080, "Member 'ResultDialog_Letter_C_Setup::SendItems' has a wrong offset!");

// Function ResultDialog_Letter.ResultDialog_Letter_C.SetupLostItem
// 0x0068 (0x0068 - 0x0000)
struct ResultDialog_Letter_C_SetupLostItem final
{
public:
	TArray<struct FOwnItemInfo>                   InLostItems;                                       // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FSBOverLimit                           InOverLimit;                                       // 0x0010(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSBOverLimit                           OverLimit;                                         // 0x0030(0x0020)(Edit, BlueprintVisible)
	TArray<struct FOwnItemInfo>                   LostItems;                                         // 0x0050(0x0010)(Edit, BlueprintVisible)
	int32                                         CallFunc_GetIconNum_ReturnValue;                   // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ResultDialog_Letter_C_SetupLostItem) == 0x000008, "Wrong alignment on ResultDialog_Letter_C_SetupLostItem");
static_assert(sizeof(ResultDialog_Letter_C_SetupLostItem) == 0x000068, "Wrong size on ResultDialog_Letter_C_SetupLostItem");
static_assert(offsetof(ResultDialog_Letter_C_SetupLostItem, InLostItems) == 0x000000, "Member 'ResultDialog_Letter_C_SetupLostItem::InLostItems' has a wrong offset!");
static_assert(offsetof(ResultDialog_Letter_C_SetupLostItem, InOverLimit) == 0x000010, "Member 'ResultDialog_Letter_C_SetupLostItem::InOverLimit' has a wrong offset!");
static_assert(offsetof(ResultDialog_Letter_C_SetupLostItem, OverLimit) == 0x000030, "Member 'ResultDialog_Letter_C_SetupLostItem::OverLimit' has a wrong offset!");
static_assert(offsetof(ResultDialog_Letter_C_SetupLostItem, LostItems) == 0x000050, "Member 'ResultDialog_Letter_C_SetupLostItem::LostItems' has a wrong offset!");
static_assert(offsetof(ResultDialog_Letter_C_SetupLostItem, CallFunc_GetIconNum_ReturnValue) == 0x000060, "Member 'ResultDialog_Letter_C_SetupLostItem::CallFunc_GetIconNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultDialog_Letter_C_SetupLostItem, CallFunc_Less_IntInt_ReturnValue) == 0x000064, "Member 'ResultDialog_Letter_C_SetupLostItem::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function ResultDialog_Letter.ResultDialog_Letter_C.SetupSendItem
// 0x0030 (0x0030 - 0x0000)
struct ResultDialog_Letter_C_SetupSendItem final
{
public:
	TArray<struct FOwnItemInfo>                   InSendItems;                                       // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         InSkyCoin;                                         // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SkyCoin;                                           // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FOwnItemInfo>                   SendItems;                                         // 0x0018(0x0010)(Edit, BlueprintVisible)
	int32                                         CallFunc_GetIconNum_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ResultDialog_Letter_C_SetupSendItem) == 0x000008, "Wrong alignment on ResultDialog_Letter_C_SetupSendItem");
static_assert(sizeof(ResultDialog_Letter_C_SetupSendItem) == 0x000030, "Wrong size on ResultDialog_Letter_C_SetupSendItem");
static_assert(offsetof(ResultDialog_Letter_C_SetupSendItem, InSendItems) == 0x000000, "Member 'ResultDialog_Letter_C_SetupSendItem::InSendItems' has a wrong offset!");
static_assert(offsetof(ResultDialog_Letter_C_SetupSendItem, InSkyCoin) == 0x000010, "Member 'ResultDialog_Letter_C_SetupSendItem::InSkyCoin' has a wrong offset!");
static_assert(offsetof(ResultDialog_Letter_C_SetupSendItem, SkyCoin) == 0x000014, "Member 'ResultDialog_Letter_C_SetupSendItem::SkyCoin' has a wrong offset!");
static_assert(offsetof(ResultDialog_Letter_C_SetupSendItem, SendItems) == 0x000018, "Member 'ResultDialog_Letter_C_SetupSendItem::SendItems' has a wrong offset!");
static_assert(offsetof(ResultDialog_Letter_C_SetupSendItem, CallFunc_GetIconNum_ReturnValue) == 0x000028, "Member 'ResultDialog_Letter_C_SetupSendItem::CallFunc_GetIconNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultDialog_Letter_C_SetupSendItem, CallFunc_Less_IntInt_ReturnValue) == 0x00002C, "Member 'ResultDialog_Letter_C_SetupSendItem::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function ResultDialog_Letter.ResultDialog_Letter_C.SetVisibleVBLost
// 0x0005 (0x0005 - 0x0000)
struct ResultDialog_Letter_C_SetVisibleVBLost final
{
public:
	bool                                          Param_IsVisible;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ResultDialog_Letter_C_SetVisibleVBLost) == 0x000001, "Wrong alignment on ResultDialog_Letter_C_SetVisibleVBLost");
static_assert(sizeof(ResultDialog_Letter_C_SetVisibleVBLost) == 0x000005, "Wrong size on ResultDialog_Letter_C_SetVisibleVBLost");
static_assert(offsetof(ResultDialog_Letter_C_SetVisibleVBLost, Param_IsVisible) == 0x000000, "Member 'ResultDialog_Letter_C_SetVisibleVBLost::Param_IsVisible' has a wrong offset!");
static_assert(offsetof(ResultDialog_Letter_C_SetVisibleVBLost, Temp_bool_Variable) == 0x000001, "Member 'ResultDialog_Letter_C_SetVisibleVBLost::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ResultDialog_Letter_C_SetVisibleVBLost, Temp_byte_Variable) == 0x000002, "Member 'ResultDialog_Letter_C_SetVisibleVBLost::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ResultDialog_Letter_C_SetVisibleVBLost, Temp_byte_Variable_1) == 0x000003, "Member 'ResultDialog_Letter_C_SetVisibleVBLost::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ResultDialog_Letter_C_SetVisibleVBLost, K2Node_Select_Default) == 0x000004, "Member 'ResultDialog_Letter_C_SetVisibleVBLost::K2Node_Select_Default' has a wrong offset!");

// Function ResultDialog_Letter.ResultDialog_Letter_C.SetVisibleVBSend
// 0x0005 (0x0005 - 0x0000)
struct ResultDialog_Letter_C_SetVisibleVBSend final
{
public:
	bool                                          Param_IsVisible;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ResultDialog_Letter_C_SetVisibleVBSend) == 0x000001, "Wrong alignment on ResultDialog_Letter_C_SetVisibleVBSend");
static_assert(sizeof(ResultDialog_Letter_C_SetVisibleVBSend) == 0x000005, "Wrong size on ResultDialog_Letter_C_SetVisibleVBSend");
static_assert(offsetof(ResultDialog_Letter_C_SetVisibleVBSend, Param_IsVisible) == 0x000000, "Member 'ResultDialog_Letter_C_SetVisibleVBSend::Param_IsVisible' has a wrong offset!");
static_assert(offsetof(ResultDialog_Letter_C_SetVisibleVBSend, Temp_bool_Variable) == 0x000001, "Member 'ResultDialog_Letter_C_SetVisibleVBSend::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ResultDialog_Letter_C_SetVisibleVBSend, Temp_byte_Variable) == 0x000002, "Member 'ResultDialog_Letter_C_SetVisibleVBSend::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ResultDialog_Letter_C_SetVisibleVBSend, Temp_byte_Variable_1) == 0x000003, "Member 'ResultDialog_Letter_C_SetVisibleVBSend::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ResultDialog_Letter_C_SetVisibleVBSend, K2Node_Select_Default) == 0x000004, "Member 'ResultDialog_Letter_C_SetVisibleVBSend::K2Node_Select_Default' has a wrong offset!");

// Function ResultDialog_Letter.ResultDialog_Letter_C.Open
// 0x0001 (0x0001 - 0x0000)
struct ResultDialog_Letter_C_Open final
{
public:
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ResultDialog_Letter_C_Open) == 0x000001, "Wrong alignment on ResultDialog_Letter_C_Open");
static_assert(sizeof(ResultDialog_Letter_C_Open) == 0x000001, "Wrong size on ResultDialog_Letter_C_Open");
static_assert(offsetof(ResultDialog_Letter_C_Open, CallFunc_Not_PreBool_ReturnValue) == 0x000000, "Member 'ResultDialog_Letter_C_Open::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function ResultDialog_Letter.ResultDialog_Letter_C.PlayAnimationIn
// 0x0008 (0x0008 - 0x0000)
struct ResultDialog_Letter_C_PlayAnimationIn final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ResultDialog_Letter_C_PlayAnimationIn) == 0x000008, "Wrong alignment on ResultDialog_Letter_C_PlayAnimationIn");
static_assert(sizeof(ResultDialog_Letter_C_PlayAnimationIn) == 0x000008, "Wrong size on ResultDialog_Letter_C_PlayAnimationIn");
static_assert(offsetof(ResultDialog_Letter_C_PlayAnimationIn, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'ResultDialog_Letter_C_PlayAnimationIn::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function ResultDialog_Letter.ResultDialog_Letter_C.PlayAnimationOut
// 0x0008 (0x0008 - 0x0000)
struct ResultDialog_Letter_C_PlayAnimationOut final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ResultDialog_Letter_C_PlayAnimationOut) == 0x000008, "Wrong alignment on ResultDialog_Letter_C_PlayAnimationOut");
static_assert(sizeof(ResultDialog_Letter_C_PlayAnimationOut) == 0x000008, "Wrong size on ResultDialog_Letter_C_PlayAnimationOut");
static_assert(offsetof(ResultDialog_Letter_C_PlayAnimationOut, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'ResultDialog_Letter_C_PlayAnimationOut::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function ResultDialog_Letter.ResultDialog_Letter_C.SetEnableButton
// 0x0001 (0x0001 - 0x0000)
struct ResultDialog_Letter_C_SetEnableButton final
{
public:
	bool                                          bInIsEnabled;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ResultDialog_Letter_C_SetEnableButton) == 0x000001, "Wrong alignment on ResultDialog_Letter_C_SetEnableButton");
static_assert(sizeof(ResultDialog_Letter_C_SetEnableButton) == 0x000001, "Wrong size on ResultDialog_Letter_C_SetEnableButton");
static_assert(offsetof(ResultDialog_Letter_C_SetEnableButton, bInIsEnabled) == 0x000000, "Member 'ResultDialog_Letter_C_SetEnableButton::bInIsEnabled' has a wrong offset!");

// Function ResultDialog_Letter.ResultDialog_Letter_C.SetEnableButtonDecide
// 0x0001 (0x0001 - 0x0000)
struct ResultDialog_Letter_C_SetEnableButtonDecide final
{
public:
	bool                                          bInIsEnabled;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ResultDialog_Letter_C_SetEnableButtonDecide) == 0x000001, "Wrong alignment on ResultDialog_Letter_C_SetEnableButtonDecide");
static_assert(sizeof(ResultDialog_Letter_C_SetEnableButtonDecide) == 0x000001, "Wrong size on ResultDialog_Letter_C_SetEnableButtonDecide");
static_assert(offsetof(ResultDialog_Letter_C_SetEnableButtonDecide, bInIsEnabled) == 0x000000, "Member 'ResultDialog_Letter_C_SetEnableButtonDecide::bInIsEnabled' has a wrong offset!");

// Function ResultDialog_Letter.ResultDialog_Letter_C.SetEnableButtonFullScreen
// 0x0001 (0x0001 - 0x0000)
struct ResultDialog_Letter_C_SetEnableButtonFullScreen final
{
public:
	bool                                          bInIsEnabled;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ResultDialog_Letter_C_SetEnableButtonFullScreen) == 0x000001, "Wrong alignment on ResultDialog_Letter_C_SetEnableButtonFullScreen");
static_assert(sizeof(ResultDialog_Letter_C_SetEnableButtonFullScreen) == 0x000001, "Wrong size on ResultDialog_Letter_C_SetEnableButtonFullScreen");
static_assert(offsetof(ResultDialog_Letter_C_SetEnableButtonFullScreen, bInIsEnabled) == 0x000000, "Member 'ResultDialog_Letter_C_SetEnableButtonFullScreen::bInIsEnabled' has a wrong offset!");

// Function ResultDialog_Letter.ResultDialog_Letter_C.SetEnableButtonClose
// 0x0001 (0x0001 - 0x0000)
struct ResultDialog_Letter_C_SetEnableButtonClose final
{
public:
	bool                                          bInIsEnabled;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ResultDialog_Letter_C_SetEnableButtonClose) == 0x000001, "Wrong alignment on ResultDialog_Letter_C_SetEnableButtonClose");
static_assert(sizeof(ResultDialog_Letter_C_SetEnableButtonClose) == 0x000001, "Wrong size on ResultDialog_Letter_C_SetEnableButtonClose");
static_assert(offsetof(ResultDialog_Letter_C_SetEnableButtonClose, bInIsEnabled) == 0x000000, "Member 'ResultDialog_Letter_C_SetEnableButtonClose::bInIsEnabled' has a wrong offset!");

}

