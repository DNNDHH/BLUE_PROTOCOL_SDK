#pragma once

 

// Package: FixedPhrase_Item

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function FixedPhrase_Item.FixedPhrase_Item_C.OnSelect__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct FixedPhrase_Item_C_OnSelect__DelegateSignature final
{
public:
	int32                                         RetFixedPhraseIndex;                               // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47D5[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFixedPhrase_Item_C*                    InSelectedItem;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FixedPhrase_Item_C_OnSelect__DelegateSignature) == 0x000008, "Wrong alignment on FixedPhrase_Item_C_OnSelect__DelegateSignature");
static_assert(sizeof(FixedPhrase_Item_C_OnSelect__DelegateSignature) == 0x000010, "Wrong size on FixedPhrase_Item_C_OnSelect__DelegateSignature");
static_assert(offsetof(FixedPhrase_Item_C_OnSelect__DelegateSignature, RetFixedPhraseIndex) == 0x000000, "Member 'FixedPhrase_Item_C_OnSelect__DelegateSignature::RetFixedPhraseIndex' has a wrong offset!");
static_assert(offsetof(FixedPhrase_Item_C_OnSelect__DelegateSignature, InSelectedItem) == 0x000008, "Member 'FixedPhrase_Item_C_OnSelect__DelegateSignature::InSelectedItem' has a wrong offset!");

// Function FixedPhrase_Item.FixedPhrase_Item_C.OnSelectRight__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct FixedPhrase_Item_C_OnSelectRight__DelegateSignature final
{
public:
	int32                                         RetFixedPhraseIndex;                               // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47D6[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFixedPhrase_Item_C*                    InSelectedItem;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FixedPhrase_Item_C_OnSelectRight__DelegateSignature) == 0x000008, "Wrong alignment on FixedPhrase_Item_C_OnSelectRight__DelegateSignature");
static_assert(sizeof(FixedPhrase_Item_C_OnSelectRight__DelegateSignature) == 0x000010, "Wrong size on FixedPhrase_Item_C_OnSelectRight__DelegateSignature");
static_assert(offsetof(FixedPhrase_Item_C_OnSelectRight__DelegateSignature, RetFixedPhraseIndex) == 0x000000, "Member 'FixedPhrase_Item_C_OnSelectRight__DelegateSignature::RetFixedPhraseIndex' has a wrong offset!");
static_assert(offsetof(FixedPhrase_Item_C_OnSelectRight__DelegateSignature, InSelectedItem) == 0x000008, "Member 'FixedPhrase_Item_C_OnSelectRight__DelegateSignature::InSelectedItem' has a wrong offset!");

// Function FixedPhrase_Item.FixedPhrase_Item_C.ExecuteUbergraph_FixedPhrase_Item
// 0x0008 (0x0008 - 0x0000)
struct FixedPhrase_Item_C_ExecuteUbergraph_FixedPhrase_Item final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FixedPhrase_Item_C_ExecuteUbergraph_FixedPhrase_Item) == 0x000004, "Wrong alignment on FixedPhrase_Item_C_ExecuteUbergraph_FixedPhrase_Item");
static_assert(sizeof(FixedPhrase_Item_C_ExecuteUbergraph_FixedPhrase_Item) == 0x000008, "Wrong size on FixedPhrase_Item_C_ExecuteUbergraph_FixedPhrase_Item");
static_assert(offsetof(FixedPhrase_Item_C_ExecuteUbergraph_FixedPhrase_Item, EntryPoint) == 0x000000, "Member 'FixedPhrase_Item_C_ExecuteUbergraph_FixedPhrase_Item::EntryPoint' has a wrong offset!");
static_assert(offsetof(FixedPhrase_Item_C_ExecuteUbergraph_FixedPhrase_Item, K2Node_Event_IsDesignTime) == 0x000004, "Member 'FixedPhrase_Item_C_ExecuteUbergraph_FixedPhrase_Item::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function FixedPhrase_Item.FixedPhrase_Item_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct FixedPhrase_Item_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FixedPhrase_Item_C_PreConstruct) == 0x000001, "Wrong alignment on FixedPhrase_Item_C_PreConstruct");
static_assert(sizeof(FixedPhrase_Item_C_PreConstruct) == 0x000001, "Wrong size on FixedPhrase_Item_C_PreConstruct");
static_assert(offsetof(FixedPhrase_Item_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'FixedPhrase_Item_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function FixedPhrase_Item.FixedPhrase_Item_C.IsSelected
// 0x0001 (0x0001 - 0x0000)
struct FixedPhrase_Item_C_IsSelected final
{
public:
	bool                                          Param_bSelected;                                   // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FixedPhrase_Item_C_IsSelected) == 0x000001, "Wrong alignment on FixedPhrase_Item_C_IsSelected");
static_assert(sizeof(FixedPhrase_Item_C_IsSelected) == 0x000001, "Wrong size on FixedPhrase_Item_C_IsSelected");
static_assert(offsetof(FixedPhrase_Item_C_IsSelected, Param_bSelected) == 0x000000, "Member 'FixedPhrase_Item_C_IsSelected::Param_bSelected' has a wrong offset!");

// Function FixedPhrase_Item.FixedPhrase_Item_C.OnPreviewMouseButtonDown
// 0x0390 (0x0390 - 0x0000)
struct FixedPhrase_Item_C_OnPreviewMouseButtonDown final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00A8(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_DetectDragIfPressed_ReturnValue;          // 0x0160(0x00B8)()
	struct FEventReply                            CallFunc_DetectDragIfPressed_ReturnValue_1;        // 0x0218(0x00B8)()
	bool                                          CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue; // 0x02D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue_1; // 0x02D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x02D2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47D7[0x5];                                     // 0x02D3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x02D8(0x00B8)()
};
static_assert(alignof(FixedPhrase_Item_C_OnPreviewMouseButtonDown) == 0x000008, "Wrong alignment on FixedPhrase_Item_C_OnPreviewMouseButtonDown");
static_assert(sizeof(FixedPhrase_Item_C_OnPreviewMouseButtonDown) == 0x000390, "Wrong size on FixedPhrase_Item_C_OnPreviewMouseButtonDown");
static_assert(offsetof(FixedPhrase_Item_C_OnPreviewMouseButtonDown, MyGeometry) == 0x000000, "Member 'FixedPhrase_Item_C_OnPreviewMouseButtonDown::MyGeometry' has a wrong offset!");
static_assert(offsetof(FixedPhrase_Item_C_OnPreviewMouseButtonDown, MouseEvent) == 0x000038, "Member 'FixedPhrase_Item_C_OnPreviewMouseButtonDown::MouseEvent' has a wrong offset!");
static_assert(offsetof(FixedPhrase_Item_C_OnPreviewMouseButtonDown, ReturnValue) == 0x0000A8, "Member 'FixedPhrase_Item_C_OnPreviewMouseButtonDown::ReturnValue' has a wrong offset!");
static_assert(offsetof(FixedPhrase_Item_C_OnPreviewMouseButtonDown, CallFunc_DetectDragIfPressed_ReturnValue) == 0x000160, "Member 'FixedPhrase_Item_C_OnPreviewMouseButtonDown::CallFunc_DetectDragIfPressed_ReturnValue' has a wrong offset!");
static_assert(offsetof(FixedPhrase_Item_C_OnPreviewMouseButtonDown, CallFunc_DetectDragIfPressed_ReturnValue_1) == 0x000218, "Member 'FixedPhrase_Item_C_OnPreviewMouseButtonDown::CallFunc_DetectDragIfPressed_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FixedPhrase_Item_C_OnPreviewMouseButtonDown, CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue) == 0x0002D0, "Member 'FixedPhrase_Item_C_OnPreviewMouseButtonDown::CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue' has a wrong offset!");
static_assert(offsetof(FixedPhrase_Item_C_OnPreviewMouseButtonDown, CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue_1) == 0x0002D1, "Member 'FixedPhrase_Item_C_OnPreviewMouseButtonDown::CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FixedPhrase_Item_C_OnPreviewMouseButtonDown, CallFunc_BooleanAND_ReturnValue) == 0x0002D2, "Member 'FixedPhrase_Item_C_OnPreviewMouseButtonDown::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(FixedPhrase_Item_C_OnPreviewMouseButtonDown, CallFunc_Unhandled_ReturnValue) == 0x0002D8, "Member 'FixedPhrase_Item_C_OnPreviewMouseButtonDown::CallFunc_Unhandled_ReturnValue' has a wrong offset!");

// Function FixedPhrase_Item.FixedPhrase_Item_C.OnDragDetected
// 0x00B8 (0x00B8 - 0x0000)
struct FixedPhrase_Item_C_OnDragDetected final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          PointerEvent;                                      // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UDragDropOperation*                     Operation;                                         // 0x00A8(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UShortcutDragDropOperation_C*           CallFunc_CreateDragDropOperation_ReturnValue;      // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FixedPhrase_Item_C_OnDragDetected) == 0x000008, "Wrong alignment on FixedPhrase_Item_C_OnDragDetected");
static_assert(sizeof(FixedPhrase_Item_C_OnDragDetected) == 0x0000B8, "Wrong size on FixedPhrase_Item_C_OnDragDetected");
static_assert(offsetof(FixedPhrase_Item_C_OnDragDetected, MyGeometry) == 0x000000, "Member 'FixedPhrase_Item_C_OnDragDetected::MyGeometry' has a wrong offset!");
static_assert(offsetof(FixedPhrase_Item_C_OnDragDetected, PointerEvent) == 0x000038, "Member 'FixedPhrase_Item_C_OnDragDetected::PointerEvent' has a wrong offset!");
static_assert(offsetof(FixedPhrase_Item_C_OnDragDetected, Operation) == 0x0000A8, "Member 'FixedPhrase_Item_C_OnDragDetected::Operation' has a wrong offset!");
static_assert(offsetof(FixedPhrase_Item_C_OnDragDetected, CallFunc_CreateDragDropOperation_ReturnValue) == 0x0000B0, "Member 'FixedPhrase_Item_C_OnDragDetected::CallFunc_CreateDragDropOperation_ReturnValue' has a wrong offset!");

// Function FixedPhrase_Item.FixedPhrase_Item_C.SetDragable
// 0x0001 (0x0001 - 0x0000)
struct FixedPhrase_Item_C_SetDragable final
{
public:
	bool                                          InDragable;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FixedPhrase_Item_C_SetDragable) == 0x000001, "Wrong alignment on FixedPhrase_Item_C_SetDragable");
static_assert(sizeof(FixedPhrase_Item_C_SetDragable) == 0x000001, "Wrong size on FixedPhrase_Item_C_SetDragable");
static_assert(offsetof(FixedPhrase_Item_C_SetDragable, InDragable) == 0x000000, "Member 'FixedPhrase_Item_C_SetDragable::InDragable' has a wrong offset!");

// Function FixedPhrase_Item.FixedPhrase_Item_C.GetFixedPhrase
// 0x0020 (0x0020 - 0x0000)
struct FixedPhrase_Item_C_GetFixedPhrase final
{
public:
	class FString                                 FixedPhrase;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(FixedPhrase_Item_C_GetFixedPhrase) == 0x000008, "Wrong alignment on FixedPhrase_Item_C_GetFixedPhrase");
static_assert(sizeof(FixedPhrase_Item_C_GetFixedPhrase) == 0x000020, "Wrong size on FixedPhrase_Item_C_GetFixedPhrase");
static_assert(offsetof(FixedPhrase_Item_C_GetFixedPhrase, FixedPhrase) == 0x000000, "Member 'FixedPhrase_Item_C_GetFixedPhrase::FixedPhrase' has a wrong offset!");
static_assert(offsetof(FixedPhrase_Item_C_GetFixedPhrase, CallFunc_GetTextFromAsset_ReturnValue) == 0x000010, "Member 'FixedPhrase_Item_C_GetFixedPhrase::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");

// Function FixedPhrase_Item.FixedPhrase_Item_C.GetShortcutItemInfo
// 0x00A0 (0x00A0 - 0x0000)
struct FixedPhrase_Item_C_GetShortcutItemInfo final
{
public:
	struct FShortcutItemInfo                      OutShortcutItemInfo;                               // 0x0000(0x0050)(Parm, OutParm)
	struct FShortcutItemInfo                      K2Node_MakeStruct_ShortcutItemInfo;                // 0x0050(0x0050)()
};
static_assert(alignof(FixedPhrase_Item_C_GetShortcutItemInfo) == 0x000008, "Wrong alignment on FixedPhrase_Item_C_GetShortcutItemInfo");
static_assert(sizeof(FixedPhrase_Item_C_GetShortcutItemInfo) == 0x0000A0, "Wrong size on FixedPhrase_Item_C_GetShortcutItemInfo");
static_assert(offsetof(FixedPhrase_Item_C_GetShortcutItemInfo, OutShortcutItemInfo) == 0x000000, "Member 'FixedPhrase_Item_C_GetShortcutItemInfo::OutShortcutItemInfo' has a wrong offset!");
static_assert(offsetof(FixedPhrase_Item_C_GetShortcutItemInfo, K2Node_MakeStruct_ShortcutItemInfo) == 0x000050, "Member 'FixedPhrase_Item_C_GetShortcutItemInfo::K2Node_MakeStruct_ShortcutItemInfo' has a wrong offset!");

}

