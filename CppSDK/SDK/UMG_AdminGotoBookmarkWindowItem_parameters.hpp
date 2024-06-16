#pragma once

 

// Package: UMG_AdminGotoBookmarkWindowItem

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function UMG_AdminGotoBookmarkWindowItem.UMG_AdminGotoBookmarkWindowItem_C.OnClickedMoveButton__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UMG_AdminGotoBookmarkWindowItem_C_OnClickedMoveButton__DelegateSignature final
{
public:
	class USBAdminGotoBookmarkItem*               Param_Data;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_AdminGotoBookmarkWindowItem_C_OnClickedMoveButton__DelegateSignature) == 0x000008, "Wrong alignment on UMG_AdminGotoBookmarkWindowItem_C_OnClickedMoveButton__DelegateSignature");
static_assert(sizeof(UMG_AdminGotoBookmarkWindowItem_C_OnClickedMoveButton__DelegateSignature) == 0x000008, "Wrong size on UMG_AdminGotoBookmarkWindowItem_C_OnClickedMoveButton__DelegateSignature");
static_assert(offsetof(UMG_AdminGotoBookmarkWindowItem_C_OnClickedMoveButton__DelegateSignature, Param_Data) == 0x000000, "Member 'UMG_AdminGotoBookmarkWindowItem_C_OnClickedMoveButton__DelegateSignature::Param_Data' has a wrong offset!");

// Function UMG_AdminGotoBookmarkWindowItem.UMG_AdminGotoBookmarkWindowItem_C.ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem
// 0x01E0 (0x01E0 - 0x0000)
struct UMG_AdminGotoBookmarkWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_518F[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	bool                                          Temp_bool_Variable;                                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5190[0x5];                                     // 0x0033(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0038(0x0028)()
	bool                                          Temp_bool_Variable_1;                              // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5191[0x3];                                     // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class USBAdminGotoBookmarkItem* Sender)> K2Node_CreateDelegate_OutputDelegate;              // 0x0064(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_Event_bIsExpanded;                          // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bIsSelected;                          // 0x0075(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5192[0x2];                                     // 0x0076(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_Event_ListItemObject;                       // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBAdminGotoBookmarkItem*               K2Node_DynamicCast_AsSBAdmin_Goto_Bookmark_Item;   // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5193[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_ComponentBoundEvent_Text;                   // 0x0090(0x0018)(ConstParm)
	ETextCommit                                   K2Node_ComponentBoundEvent_CommitMethod;           // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5194[0x7];                                     // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x00B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class USBAdminGotoBookmarkItem*               K2Node_CustomEvent_Sender;                         // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5195[0x3];                                     // 0x00C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakVector_X;                            // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FFloor_ReturnValue;                       // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5196[0x4];                                     // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_Select_Default;                             // 0x00E0(0x0028)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0108(0x0018)()
	int32                                         CallFunc_FFloor_ReturnValue_1;                     // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FFloor_ReturnValue_2;                     // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0128(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_2;             // 0x0140(0x0018)()
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0158(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0168(0x0018)()
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0180(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0190(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x01A8(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x01C0(0x0018)()
	bool                                          K2Node_CustomEvent_bFlag;                          // 0x01D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x01D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_AdminGotoBookmarkWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem) == 0x000008, "Wrong alignment on UMG_AdminGotoBookmarkWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem");
static_assert(sizeof(UMG_AdminGotoBookmarkWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem) == 0x0001E0, "Wrong size on UMG_AdminGotoBookmarkWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem");
static_assert(offsetof(UMG_AdminGotoBookmarkWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem, EntryPoint) == 0x000000, "Member 'UMG_AdminGotoBookmarkWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'UMG_AdminGotoBookmarkWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem, Temp_bool_Variable) == 0x000030, "Member 'UMG_AdminGotoBookmarkWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem, Temp_byte_Variable) == 0x000031, "Member 'UMG_AdminGotoBookmarkWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem, Temp_byte_Variable_1) == 0x000032, "Member 'UMG_AdminGotoBookmarkWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem, K2Node_MakeStruct_SlateColor_1) == 0x000038, "Member 'UMG_AdminGotoBookmarkWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem, Temp_bool_Variable_1) == 0x000060, "Member 'UMG_AdminGotoBookmarkWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem, K2Node_CreateDelegate_OutputDelegate) == 0x000064, "Member 'UMG_AdminGotoBookmarkWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem, K2Node_Event_bIsExpanded) == 0x000074, "Member 'UMG_AdminGotoBookmarkWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem::K2Node_Event_bIsExpanded' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem, K2Node_Event_bIsSelected) == 0x000075, "Member 'UMG_AdminGotoBookmarkWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem::K2Node_Event_bIsSelected' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem, K2Node_Event_ListItemObject) == 0x000078, "Member 'UMG_AdminGotoBookmarkWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem::K2Node_Event_ListItemObject' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem, K2Node_DynamicCast_AsSBAdmin_Goto_Bookmark_Item) == 0x000080, "Member 'UMG_AdminGotoBookmarkWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem::K2Node_DynamicCast_AsSBAdmin_Goto_Bookmark_Item' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem, K2Node_DynamicCast_bSuccess) == 0x000088, "Member 'UMG_AdminGotoBookmarkWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem, K2Node_ComponentBoundEvent_Text) == 0x000090, "Member 'UMG_AdminGotoBookmarkWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem::K2Node_ComponentBoundEvent_Text' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem, K2Node_ComponentBoundEvent_CommitMethod) == 0x0000A8, "Member 'UMG_AdminGotoBookmarkWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem::K2Node_ComponentBoundEvent_CommitMethod' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem, CallFunc_Conv_TextToString_ReturnValue) == 0x0000B0, "Member 'UMG_AdminGotoBookmarkWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem, K2Node_CustomEvent_Sender) == 0x0000C0, "Member 'UMG_AdminGotoBookmarkWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem::K2Node_CustomEvent_Sender' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x0000C8, "Member 'UMG_AdminGotoBookmarkWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem, CallFunc_BreakVector_X) == 0x0000CC, "Member 'UMG_AdminGotoBookmarkWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem, CallFunc_BreakVector_Y) == 0x0000D0, "Member 'UMG_AdminGotoBookmarkWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem, CallFunc_BreakVector_Z) == 0x0000D4, "Member 'UMG_AdminGotoBookmarkWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem, CallFunc_FFloor_ReturnValue) == 0x0000D8, "Member 'UMG_AdminGotoBookmarkWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem::CallFunc_FFloor_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem, K2Node_Select_Default) == 0x0000E0, "Member 'UMG_AdminGotoBookmarkWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem, CallFunc_Conv_IntToText_ReturnValue) == 0x000108, "Member 'UMG_AdminGotoBookmarkWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem, CallFunc_FFloor_ReturnValue_1) == 0x000120, "Member 'UMG_AdminGotoBookmarkWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem::CallFunc_FFloor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem, CallFunc_FFloor_ReturnValue_2) == 0x000124, "Member 'UMG_AdminGotoBookmarkWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem::CallFunc_FFloor_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000128, "Member 'UMG_AdminGotoBookmarkWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem, CallFunc_Conv_IntToText_ReturnValue_2) == 0x000140, "Member 'UMG_AdminGotoBookmarkWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem::CallFunc_Conv_IntToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem, CallFunc_Conv_IntToString_ReturnValue) == 0x000158, "Member 'UMG_AdminGotoBookmarkWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem, CallFunc_Conv_StringToText_ReturnValue) == 0x000168, "Member 'UMG_AdminGotoBookmarkWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem, CallFunc_Concat_StrStr_ReturnValue) == 0x000180, "Member 'UMG_AdminGotoBookmarkWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000190, "Member 'UMG_AdminGotoBookmarkWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0001A8, "Member 'UMG_AdminGotoBookmarkWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem, CallFunc_Conv_StringToText_ReturnValue_3) == 0x0001C0, "Member 'UMG_AdminGotoBookmarkWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem, K2Node_CustomEvent_bFlag) == 0x0001D8, "Member 'UMG_AdminGotoBookmarkWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem::K2Node_CustomEvent_bFlag' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem, K2Node_Select_Default_1) == 0x0001D9, "Member 'UMG_AdminGotoBookmarkWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem::K2Node_Select_Default_1' has a wrong offset!");

// Function UMG_AdminGotoBookmarkWindowItem.UMG_AdminGotoBookmarkWindowItem_C.SetIdWarpMode
// 0x0001 (0x0001 - 0x0000)
struct UMG_AdminGotoBookmarkWindowItem_C_SetIdWarpMode final
{
public:
	bool                                          bFlag;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_AdminGotoBookmarkWindowItem_C_SetIdWarpMode) == 0x000001, "Wrong alignment on UMG_AdminGotoBookmarkWindowItem_C_SetIdWarpMode");
static_assert(sizeof(UMG_AdminGotoBookmarkWindowItem_C_SetIdWarpMode) == 0x000001, "Wrong size on UMG_AdminGotoBookmarkWindowItem_C_SetIdWarpMode");
static_assert(offsetof(UMG_AdminGotoBookmarkWindowItem_C_SetIdWarpMode, bFlag) == 0x000000, "Member 'UMG_AdminGotoBookmarkWindowItem_C_SetIdWarpMode::bFlag' has a wrong offset!");

// Function UMG_AdminGotoBookmarkWindowItem.UMG_AdminGotoBookmarkWindowItem_C.OnUpdateData
// 0x0008 (0x0008 - 0x0000)
struct UMG_AdminGotoBookmarkWindowItem_C_OnUpdateData final
{
public:
	class USBAdminGotoBookmarkItem*               Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_AdminGotoBookmarkWindowItem_C_OnUpdateData) == 0x000008, "Wrong alignment on UMG_AdminGotoBookmarkWindowItem_C_OnUpdateData");
static_assert(sizeof(UMG_AdminGotoBookmarkWindowItem_C_OnUpdateData) == 0x000008, "Wrong size on UMG_AdminGotoBookmarkWindowItem_C_OnUpdateData");
static_assert(offsetof(UMG_AdminGotoBookmarkWindowItem_C_OnUpdateData, Sender) == 0x000000, "Member 'UMG_AdminGotoBookmarkWindowItem_C_OnUpdateData::Sender' has a wrong offset!");

// Function UMG_AdminGotoBookmarkWindowItem.UMG_AdminGotoBookmarkWindowItem_C.BndEvt__EditableText_Description_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct UMG_AdminGotoBookmarkWindowItem_C_BndEvt__EditableText_Description_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	ETextCommit                                   CommitMethod;                                      // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_AdminGotoBookmarkWindowItem_C_BndEvt__EditableText_Description_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature) == 0x000008, "Wrong alignment on UMG_AdminGotoBookmarkWindowItem_C_BndEvt__EditableText_Description_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature");
static_assert(sizeof(UMG_AdminGotoBookmarkWindowItem_C_BndEvt__EditableText_Description_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature) == 0x000020, "Wrong size on UMG_AdminGotoBookmarkWindowItem_C_BndEvt__EditableText_Description_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature");
static_assert(offsetof(UMG_AdminGotoBookmarkWindowItem_C_BndEvt__EditableText_Description_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature, Text) == 0x000000, "Member 'UMG_AdminGotoBookmarkWindowItem_C_BndEvt__EditableText_Description_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature::Text' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkWindowItem_C_BndEvt__EditableText_Description_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature, CommitMethod) == 0x000018, "Member 'UMG_AdminGotoBookmarkWindowItem_C_BndEvt__EditableText_Description_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature::CommitMethod' has a wrong offset!");

// Function UMG_AdminGotoBookmarkWindowItem.UMG_AdminGotoBookmarkWindowItem_C.OnListItemObjectSet
// 0x0008 (0x0008 - 0x0000)
struct UMG_AdminGotoBookmarkWindowItem_C_OnListItemObjectSet final
{
public:
	class UObject*                                ListItemObject;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_AdminGotoBookmarkWindowItem_C_OnListItemObjectSet) == 0x000008, "Wrong alignment on UMG_AdminGotoBookmarkWindowItem_C_OnListItemObjectSet");
static_assert(sizeof(UMG_AdminGotoBookmarkWindowItem_C_OnListItemObjectSet) == 0x000008, "Wrong size on UMG_AdminGotoBookmarkWindowItem_C_OnListItemObjectSet");
static_assert(offsetof(UMG_AdminGotoBookmarkWindowItem_C_OnListItemObjectSet, ListItemObject) == 0x000000, "Member 'UMG_AdminGotoBookmarkWindowItem_C_OnListItemObjectSet::ListItemObject' has a wrong offset!");

// Function UMG_AdminGotoBookmarkWindowItem.UMG_AdminGotoBookmarkWindowItem_C.BP_OnItemSelectionChanged
// 0x0001 (0x0001 - 0x0000)
struct UMG_AdminGotoBookmarkWindowItem_C_BP_OnItemSelectionChanged final
{
public:
	bool                                          bIsSelected;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_AdminGotoBookmarkWindowItem_C_BP_OnItemSelectionChanged) == 0x000001, "Wrong alignment on UMG_AdminGotoBookmarkWindowItem_C_BP_OnItemSelectionChanged");
static_assert(sizeof(UMG_AdminGotoBookmarkWindowItem_C_BP_OnItemSelectionChanged) == 0x000001, "Wrong size on UMG_AdminGotoBookmarkWindowItem_C_BP_OnItemSelectionChanged");
static_assert(offsetof(UMG_AdminGotoBookmarkWindowItem_C_BP_OnItemSelectionChanged, bIsSelected) == 0x000000, "Member 'UMG_AdminGotoBookmarkWindowItem_C_BP_OnItemSelectionChanged::bIsSelected' has a wrong offset!");

// Function UMG_AdminGotoBookmarkWindowItem.UMG_AdminGotoBookmarkWindowItem_C.BP_OnItemExpansionChanged
// 0x0001 (0x0001 - 0x0000)
struct UMG_AdminGotoBookmarkWindowItem_C_BP_OnItemExpansionChanged final
{
public:
	bool                                          bIsExpanded;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_AdminGotoBookmarkWindowItem_C_BP_OnItemExpansionChanged) == 0x000001, "Wrong alignment on UMG_AdminGotoBookmarkWindowItem_C_BP_OnItemExpansionChanged");
static_assert(sizeof(UMG_AdminGotoBookmarkWindowItem_C_BP_OnItemExpansionChanged) == 0x000001, "Wrong size on UMG_AdminGotoBookmarkWindowItem_C_BP_OnItemExpansionChanged");
static_assert(offsetof(UMG_AdminGotoBookmarkWindowItem_C_BP_OnItemExpansionChanged, bIsExpanded) == 0x000000, "Member 'UMG_AdminGotoBookmarkWindowItem_C_BP_OnItemExpansionChanged::bIsExpanded' has a wrong offset!");

}

