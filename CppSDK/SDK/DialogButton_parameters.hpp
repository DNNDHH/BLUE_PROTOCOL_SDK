#pragma once

 

// Package: DialogButton

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function DialogButton.DialogButton_C.OnClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct DialogButton_C_OnClicked__DelegateSignature final
{
public:
	class UUserWidget*                            InButtonWidget;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DialogButton_C_OnClicked__DelegateSignature) == 0x000008, "Wrong alignment on DialogButton_C_OnClicked__DelegateSignature");
static_assert(sizeof(DialogButton_C_OnClicked__DelegateSignature) == 0x000008, "Wrong size on DialogButton_C_OnClicked__DelegateSignature");
static_assert(offsetof(DialogButton_C_OnClicked__DelegateSignature, InButtonWidget) == 0x000000, "Member 'DialogButton_C_OnClicked__DelegateSignature::InButtonWidget' has a wrong offset!");

// Function DialogButton.DialogButton_C.ExecuteUbergraph_DialogButton
// 0x0058 (0x0058 - 0x0000)
struct DialogButton_C_ExecuteUbergraph_DialogButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_557A[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0030(0x0028)()
};
static_assert(alignof(DialogButton_C_ExecuteUbergraph_DialogButton) == 0x000008, "Wrong alignment on DialogButton_C_ExecuteUbergraph_DialogButton");
static_assert(sizeof(DialogButton_C_ExecuteUbergraph_DialogButton) == 0x000058, "Wrong size on DialogButton_C_ExecuteUbergraph_DialogButton");
static_assert(offsetof(DialogButton_C_ExecuteUbergraph_DialogButton, EntryPoint) == 0x000000, "Member 'DialogButton_C_ExecuteUbergraph_DialogButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(DialogButton_C_ExecuteUbergraph_DialogButton, K2Node_Event_IsDesignTime) == 0x000004, "Member 'DialogButton_C_ExecuteUbergraph_DialogButton::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(DialogButton_C_ExecuteUbergraph_DialogButton, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'DialogButton_C_ExecuteUbergraph_DialogButton::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(DialogButton_C_ExecuteUbergraph_DialogButton, K2Node_MakeStruct_SlateColor_1) == 0x000030, "Member 'DialogButton_C_ExecuteUbergraph_DialogButton::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");

// Function DialogButton.DialogButton_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct DialogButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DialogButton_C_PreConstruct) == 0x000001, "Wrong alignment on DialogButton_C_PreConstruct");
static_assert(sizeof(DialogButton_C_PreConstruct) == 0x000001, "Wrong size on DialogButton_C_PreConstruct");
static_assert(offsetof(DialogButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'DialogButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

