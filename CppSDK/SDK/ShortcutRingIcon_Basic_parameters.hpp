#pragma once

 

// Package: ShortcutRingIcon_Basic

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UseItemWindowType_structs.hpp"
#include "ST_ToolTipInfo_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.ExecuteUbergraph_ShortcutRingIcon_Basic
// 0x0198 (0x0198 - 0x0000)
struct ShortcutRingIcon_Basic_C_ExecuteUbergraph_ShortcutRingIcon_Basic final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D47[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerStorageComponent*              CallFunc_GetPlayerStorageComponent_ReturnValue;    // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D48[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_InRetCode;                      // 0x0014(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FOwnItemInfo>                   K2Node_CustomEvent_InDirtyItems;                   // 0x0018(0x0010)(ConstParm, ReferenceParm)
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue;              // 0x0028(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D49[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0040(0x0018)()
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0058(0x0038)(IsPlainOldData, NoDestructor)
	struct FPointerEvent                          K2Node_Event_MouseEvent_1;                         // 0x0090(0x0070)(ConstParm)
	struct FPointerEvent                          K2Node_Event_MouseEvent;                           // 0x0100(0x0070)(ConstParm)
	bool                                          CallFunc_IsEnableHoverFlag_ReturnValue;            // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEnableHoverFlag_ReturnValue_1;          // 0x0171(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D4A[0x6];                                     // 0x0172(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerStorageComponent*              CallFunc_GetPlayerStorageComponent_ReturnValue_1;  // 0x0178(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 InRetCode, TArray<struct FOwnItemInfo>& InDirtyItems)> K2Node_CreateDelegate_OutputDelegate;              // 0x0180(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ShortcutRingIcon_Basic_C_ExecuteUbergraph_ShortcutRingIcon_Basic) == 0x000008, "Wrong alignment on ShortcutRingIcon_Basic_C_ExecuteUbergraph_ShortcutRingIcon_Basic");
static_assert(sizeof(ShortcutRingIcon_Basic_C_ExecuteUbergraph_ShortcutRingIcon_Basic) == 0x000198, "Wrong size on ShortcutRingIcon_Basic_C_ExecuteUbergraph_ShortcutRingIcon_Basic");
static_assert(offsetof(ShortcutRingIcon_Basic_C_ExecuteUbergraph_ShortcutRingIcon_Basic, EntryPoint) == 0x000000, "Member 'ShortcutRingIcon_Basic_C_ExecuteUbergraph_ShortcutRingIcon_Basic::EntryPoint' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Basic_C_ExecuteUbergraph_ShortcutRingIcon_Basic, CallFunc_GetPlayerStorageComponent_ReturnValue) == 0x000008, "Member 'ShortcutRingIcon_Basic_C_ExecuteUbergraph_ShortcutRingIcon_Basic::CallFunc_GetPlayerStorageComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Basic_C_ExecuteUbergraph_ShortcutRingIcon_Basic, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'ShortcutRingIcon_Basic_C_ExecuteUbergraph_ShortcutRingIcon_Basic::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Basic_C_ExecuteUbergraph_ShortcutRingIcon_Basic, K2Node_CustomEvent_InRetCode) == 0x000014, "Member 'ShortcutRingIcon_Basic_C_ExecuteUbergraph_ShortcutRingIcon_Basic::K2Node_CustomEvent_InRetCode' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Basic_C_ExecuteUbergraph_ShortcutRingIcon_Basic, K2Node_CustomEvent_InDirtyItems) == 0x000018, "Member 'ShortcutRingIcon_Basic_C_ExecuteUbergraph_ShortcutRingIcon_Basic::K2Node_CustomEvent_InDirtyItems' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Basic_C_ExecuteUbergraph_ShortcutRingIcon_Basic, CallFunc_GetSBRetMessage_ReturnValue) == 0x000028, "Member 'ShortcutRingIcon_Basic_C_ExecuteUbergraph_ShortcutRingIcon_Basic::CallFunc_GetSBRetMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Basic_C_ExecuteUbergraph_ShortcutRingIcon_Basic, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000038, "Member 'ShortcutRingIcon_Basic_C_ExecuteUbergraph_ShortcutRingIcon_Basic::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Basic_C_ExecuteUbergraph_ShortcutRingIcon_Basic, CallFunc_Conv_StringToText_ReturnValue) == 0x000040, "Member 'ShortcutRingIcon_Basic_C_ExecuteUbergraph_ShortcutRingIcon_Basic::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Basic_C_ExecuteUbergraph_ShortcutRingIcon_Basic, K2Node_Event_MyGeometry) == 0x000058, "Member 'ShortcutRingIcon_Basic_C_ExecuteUbergraph_ShortcutRingIcon_Basic::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Basic_C_ExecuteUbergraph_ShortcutRingIcon_Basic, K2Node_Event_MouseEvent_1) == 0x000090, "Member 'ShortcutRingIcon_Basic_C_ExecuteUbergraph_ShortcutRingIcon_Basic::K2Node_Event_MouseEvent_1' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Basic_C_ExecuteUbergraph_ShortcutRingIcon_Basic, K2Node_Event_MouseEvent) == 0x000100, "Member 'ShortcutRingIcon_Basic_C_ExecuteUbergraph_ShortcutRingIcon_Basic::K2Node_Event_MouseEvent' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Basic_C_ExecuteUbergraph_ShortcutRingIcon_Basic, CallFunc_IsEnableHoverFlag_ReturnValue) == 0x000170, "Member 'ShortcutRingIcon_Basic_C_ExecuteUbergraph_ShortcutRingIcon_Basic::CallFunc_IsEnableHoverFlag_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Basic_C_ExecuteUbergraph_ShortcutRingIcon_Basic, CallFunc_IsEnableHoverFlag_ReturnValue_1) == 0x000171, "Member 'ShortcutRingIcon_Basic_C_ExecuteUbergraph_ShortcutRingIcon_Basic::CallFunc_IsEnableHoverFlag_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Basic_C_ExecuteUbergraph_ShortcutRingIcon_Basic, CallFunc_GetPlayerStorageComponent_ReturnValue_1) == 0x000178, "Member 'ShortcutRingIcon_Basic_C_ExecuteUbergraph_ShortcutRingIcon_Basic::CallFunc_GetPlayerStorageComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Basic_C_ExecuteUbergraph_ShortcutRingIcon_Basic, K2Node_CreateDelegate_OutputDelegate) == 0x000180, "Member 'ShortcutRingIcon_Basic_C_ExecuteUbergraph_ShortcutRingIcon_Basic::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Basic_C_ExecuteUbergraph_ShortcutRingIcon_Basic, CallFunc_IsValid_ReturnValue_1) == 0x000190, "Member 'ShortcutRingIcon_Basic_C_ExecuteUbergraph_ShortcutRingIcon_Basic::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.OnMouseLeave
// 0x0070 (0x0070 - 0x0000)
struct ShortcutRingIcon_Basic_C_OnMouseLeave final
{
public:
	struct FPointerEvent                          MouseEvent;                                        // 0x0000(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(ShortcutRingIcon_Basic_C_OnMouseLeave) == 0x000008, "Wrong alignment on ShortcutRingIcon_Basic_C_OnMouseLeave");
static_assert(sizeof(ShortcutRingIcon_Basic_C_OnMouseLeave) == 0x000070, "Wrong size on ShortcutRingIcon_Basic_C_OnMouseLeave");
static_assert(offsetof(ShortcutRingIcon_Basic_C_OnMouseLeave, MouseEvent) == 0x000000, "Member 'ShortcutRingIcon_Basic_C_OnMouseLeave::MouseEvent' has a wrong offset!");

// Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.OnMouseEnter
// 0x00A8 (0x00A8 - 0x0000)
struct ShortcutRingIcon_Basic_C_OnMouseEnter final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(ShortcutRingIcon_Basic_C_OnMouseEnter) == 0x000008, "Wrong alignment on ShortcutRingIcon_Basic_C_OnMouseEnter");
static_assert(sizeof(ShortcutRingIcon_Basic_C_OnMouseEnter) == 0x0000A8, "Wrong size on ShortcutRingIcon_Basic_C_OnMouseEnter");
static_assert(offsetof(ShortcutRingIcon_Basic_C_OnMouseEnter, MyGeometry) == 0x000000, "Member 'ShortcutRingIcon_Basic_C_OnMouseEnter::MyGeometry' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Basic_C_OnMouseEnter, MouseEvent) == 0x000038, "Member 'ShortcutRingIcon_Basic_C_OnMouseEnter::MouseEvent' has a wrong offset!");

// Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.ItemUseAfter
// 0x0018 (0x0018 - 0x0000)
struct ShortcutRingIcon_Basic_C_ItemUseAfter final
{
public:
	int32                                         InRetCode;                                         // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D4B[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FOwnItemInfo>                   InDirtyItems;                                      // 0x0008(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(ShortcutRingIcon_Basic_C_ItemUseAfter) == 0x000008, "Wrong alignment on ShortcutRingIcon_Basic_C_ItemUseAfter");
static_assert(sizeof(ShortcutRingIcon_Basic_C_ItemUseAfter) == 0x000018, "Wrong size on ShortcutRingIcon_Basic_C_ItemUseAfter");
static_assert(offsetof(ShortcutRingIcon_Basic_C_ItemUseAfter, InRetCode) == 0x000000, "Member 'ShortcutRingIcon_Basic_C_ItemUseAfter::InRetCode' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Basic_C_ItemUseAfter, InDirtyItems) == 0x000008, "Member 'ShortcutRingIcon_Basic_C_ItemUseAfter::InDirtyItems' has a wrong offset!");

// Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.PlayAnimPressed
// 0x0008 (0x0008 - 0x0000)
struct ShortcutRingIcon_Basic_C_PlayAnimPressed final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShortcutRingIcon_Basic_C_PlayAnimPressed) == 0x000008, "Wrong alignment on ShortcutRingIcon_Basic_C_PlayAnimPressed");
static_assert(sizeof(ShortcutRingIcon_Basic_C_PlayAnimPressed) == 0x000008, "Wrong size on ShortcutRingIcon_Basic_C_PlayAnimPressed");
static_assert(offsetof(ShortcutRingIcon_Basic_C_PlayAnimPressed, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'ShortcutRingIcon_Basic_C_PlayAnimPressed::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.OnSetOwnItem
// 0x01D0 (0x01D0 - 0x0000)
struct ShortcutRingIcon_Basic_C_OnSetOwnItem final
{
public:
	int32                                         InItemIndex;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsLock;                                            // 0x0004(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D4C[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Amount;                                            // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D4D[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_ToolTipInfo                        K2Node_MakeStruct_ST_ToolTipInfo;                  // 0x0010(0x0078)(HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetInventory_ReturnValue;                 // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetInventory_ReturnValue_1;               // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindItem_ByItemIndex_bOutExist;        // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D4E[0x7];                                     // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByItemIndex_ReturnValue;      // 0x00A0(0x0118)(ConstParm)
	int32                                         CallFunc_BP_GetItemAmount_ByItemIndex_ReturnValue; // 0x01B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D4F[0x4];                                     // 0x01BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetStorage_ReturnValue;                   // 0x01C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsItemLock_ReturnValue;                   // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ShortcutRingIcon_Basic_C_OnSetOwnItem) == 0x000008, "Wrong alignment on ShortcutRingIcon_Basic_C_OnSetOwnItem");
static_assert(sizeof(ShortcutRingIcon_Basic_C_OnSetOwnItem) == 0x0001D0, "Wrong size on ShortcutRingIcon_Basic_C_OnSetOwnItem");
static_assert(offsetof(ShortcutRingIcon_Basic_C_OnSetOwnItem, InItemIndex) == 0x000000, "Member 'ShortcutRingIcon_Basic_C_OnSetOwnItem::InItemIndex' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Basic_C_OnSetOwnItem, IsLock) == 0x000004, "Member 'ShortcutRingIcon_Basic_C_OnSetOwnItem::IsLock' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Basic_C_OnSetOwnItem, Amount) == 0x000008, "Member 'ShortcutRingIcon_Basic_C_OnSetOwnItem::Amount' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Basic_C_OnSetOwnItem, K2Node_MakeStruct_ST_ToolTipInfo) == 0x000010, "Member 'ShortcutRingIcon_Basic_C_OnSetOwnItem::K2Node_MakeStruct_ST_ToolTipInfo' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Basic_C_OnSetOwnItem, CallFunc_GetInventory_ReturnValue) == 0x000088, "Member 'ShortcutRingIcon_Basic_C_OnSetOwnItem::CallFunc_GetInventory_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Basic_C_OnSetOwnItem, CallFunc_GetInventory_ReturnValue_1) == 0x000090, "Member 'ShortcutRingIcon_Basic_C_OnSetOwnItem::CallFunc_GetInventory_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Basic_C_OnSetOwnItem, CallFunc_BP_FindItem_ByItemIndex_bOutExist) == 0x000098, "Member 'ShortcutRingIcon_Basic_C_OnSetOwnItem::CallFunc_BP_FindItem_ByItemIndex_bOutExist' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Basic_C_OnSetOwnItem, CallFunc_BP_FindItem_ByItemIndex_ReturnValue) == 0x0000A0, "Member 'ShortcutRingIcon_Basic_C_OnSetOwnItem::CallFunc_BP_FindItem_ByItemIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Basic_C_OnSetOwnItem, CallFunc_BP_GetItemAmount_ByItemIndex_ReturnValue) == 0x0001B8, "Member 'ShortcutRingIcon_Basic_C_OnSetOwnItem::CallFunc_BP_GetItemAmount_ByItemIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Basic_C_OnSetOwnItem, CallFunc_GetStorage_ReturnValue) == 0x0001C0, "Member 'ShortcutRingIcon_Basic_C_OnSetOwnItem::CallFunc_GetStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Basic_C_OnSetOwnItem, CallFunc_IsItemLock_ReturnValue) == 0x0001C8, "Member 'ShortcutRingIcon_Basic_C_OnSetOwnItem::CallFunc_IsItemLock_ReturnValue' has a wrong offset!");

// Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.OnSetEmotion
// 0x0010 (0x0010 - 0x0000)
struct ShortcutRingIcon_Basic_C_OnSetEmotion final
{
public:
	class FString                                 InEmotionId;                                       // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(ShortcutRingIcon_Basic_C_OnSetEmotion) == 0x000008, "Wrong alignment on ShortcutRingIcon_Basic_C_OnSetEmotion");
static_assert(sizeof(ShortcutRingIcon_Basic_C_OnSetEmotion) == 0x000010, "Wrong size on ShortcutRingIcon_Basic_C_OnSetEmotion");
static_assert(offsetof(ShortcutRingIcon_Basic_C_OnSetEmotion, InEmotionId) == 0x000000, "Member 'ShortcutRingIcon_Basic_C_OnSetEmotion::InEmotionId' has a wrong offset!");

// Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.OnSetStamp
// 0x0090 (0x0090 - 0x0000)
struct ShortcutRingIcon_Basic_C_OnSetStamp final
{
public:
	class FString                                 InStampId;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_StringToInt_ReturnValue;             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D50[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_ToolTipInfo                        K2Node_MakeStruct_ST_ToolTipInfo;                  // 0x0018(0x0078)(HasGetValueTypeHash)
};
static_assert(alignof(ShortcutRingIcon_Basic_C_OnSetStamp) == 0x000008, "Wrong alignment on ShortcutRingIcon_Basic_C_OnSetStamp");
static_assert(sizeof(ShortcutRingIcon_Basic_C_OnSetStamp) == 0x000090, "Wrong size on ShortcutRingIcon_Basic_C_OnSetStamp");
static_assert(offsetof(ShortcutRingIcon_Basic_C_OnSetStamp, InStampId) == 0x000000, "Member 'ShortcutRingIcon_Basic_C_OnSetStamp::InStampId' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Basic_C_OnSetStamp, CallFunc_Conv_StringToInt_ReturnValue) == 0x000010, "Member 'ShortcutRingIcon_Basic_C_OnSetStamp::CallFunc_Conv_StringToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Basic_C_OnSetStamp, K2Node_MakeStruct_ST_ToolTipInfo) == 0x000018, "Member 'ShortcutRingIcon_Basic_C_OnSetStamp::K2Node_MakeStruct_ST_ToolTipInfo' has a wrong offset!");

// Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.OnSetSupply
// 0x0080 (0x0080 - 0x0000)
struct ShortcutRingIcon_Basic_C_OnSetSupply final
{
public:
	int32                                         InItemIndex;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InItemAmount;                                      // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_ToolTipInfo                        K2Node_MakeStruct_ST_ToolTipInfo;                  // 0x0008(0x0078)(HasGetValueTypeHash)
};
static_assert(alignof(ShortcutRingIcon_Basic_C_OnSetSupply) == 0x000008, "Wrong alignment on ShortcutRingIcon_Basic_C_OnSetSupply");
static_assert(sizeof(ShortcutRingIcon_Basic_C_OnSetSupply) == 0x000080, "Wrong size on ShortcutRingIcon_Basic_C_OnSetSupply");
static_assert(offsetof(ShortcutRingIcon_Basic_C_OnSetSupply, InItemIndex) == 0x000000, "Member 'ShortcutRingIcon_Basic_C_OnSetSupply::InItemIndex' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Basic_C_OnSetSupply, InItemAmount) == 0x000004, "Member 'ShortcutRingIcon_Basic_C_OnSetSupply::InItemAmount' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Basic_C_OnSetSupply, K2Node_MakeStruct_ST_ToolTipInfo) == 0x000008, "Member 'ShortcutRingIcon_Basic_C_OnSetSupply::K2Node_MakeStruct_ST_ToolTipInfo' has a wrong offset!");

// Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.OnExecuteOwnItem
// 0x01C0 (0x01C0 - 0x0000)
struct ShortcutRingIcon_Basic_C_OnExecuteOwnItem final
{
public:
	class FString                                 InUniqueId;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         InItemIndex;                                       // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemUseStatus                              InItemUseStatus;                                   // 0x0014(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D51[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           OwnItemInfo;                                       // 0x0018(0x0118)(Edit, BlueprintVisible)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D52[0x7];                                     // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0149(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D53[0x6];                                     // 0x014A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State;               // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D54[0x3];                                     // 0x0159(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x015C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBStorageItemData                     K2Node_MakeStruct_SBStorageItemData;               // 0x0160(0x0020)()
	class FString                                 CallFunc_GetTextFromAssetAt_ReturnValue;           // 0x0180(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Request_SaveItemUse_ReturnValue;          // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D55[0x7];                                     // 0x0191(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0198(0x0018)()
	EUseItemWindowType                            CallFunc_Get_Use_Item_Window_Type_WindowType;      // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D56[0x3];                                     // 0x01B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Get_Use_Item_Window_Type_Valu;            // 0x01B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Get_Use_Item_Window_Type_Time;            // 0x01B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x01BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ShortcutRingIcon_Basic_C_OnExecuteOwnItem) == 0x000008, "Wrong alignment on ShortcutRingIcon_Basic_C_OnExecuteOwnItem");
static_assert(sizeof(ShortcutRingIcon_Basic_C_OnExecuteOwnItem) == 0x0001C0, "Wrong size on ShortcutRingIcon_Basic_C_OnExecuteOwnItem");
static_assert(offsetof(ShortcutRingIcon_Basic_C_OnExecuteOwnItem, InUniqueId) == 0x000000, "Member 'ShortcutRingIcon_Basic_C_OnExecuteOwnItem::InUniqueId' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Basic_C_OnExecuteOwnItem, InItemIndex) == 0x000010, "Member 'ShortcutRingIcon_Basic_C_OnExecuteOwnItem::InItemIndex' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Basic_C_OnExecuteOwnItem, InItemUseStatus) == 0x000014, "Member 'ShortcutRingIcon_Basic_C_OnExecuteOwnItem::InItemUseStatus' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Basic_C_OnExecuteOwnItem, OwnItemInfo) == 0x000018, "Member 'ShortcutRingIcon_Basic_C_OnExecuteOwnItem::OwnItemInfo' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Basic_C_OnExecuteOwnItem, CallFunc_GetPlayerController_ReturnValue) == 0x000130, "Member 'ShortcutRingIcon_Basic_C_OnExecuteOwnItem::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Basic_C_OnExecuteOwnItem, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000138, "Member 'ShortcutRingIcon_Basic_C_OnExecuteOwnItem::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Basic_C_OnExecuteOwnItem, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000140, "Member 'ShortcutRingIcon_Basic_C_OnExecuteOwnItem::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Basic_C_OnExecuteOwnItem, K2Node_DynamicCast_bSuccess) == 0x000148, "Member 'ShortcutRingIcon_Basic_C_OnExecuteOwnItem::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Basic_C_OnExecuteOwnItem, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000149, "Member 'ShortcutRingIcon_Basic_C_OnExecuteOwnItem::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Basic_C_OnExecuteOwnItem, K2Node_DynamicCast_AsSBPlayer_State) == 0x000150, "Member 'ShortcutRingIcon_Basic_C_OnExecuteOwnItem::K2Node_DynamicCast_AsSBPlayer_State' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Basic_C_OnExecuteOwnItem, K2Node_DynamicCast_bSuccess_1) == 0x000158, "Member 'ShortcutRingIcon_Basic_C_OnExecuteOwnItem::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Basic_C_OnExecuteOwnItem, CallFunc_Conv_ByteToInt_ReturnValue) == 0x00015C, "Member 'ShortcutRingIcon_Basic_C_OnExecuteOwnItem::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Basic_C_OnExecuteOwnItem, K2Node_MakeStruct_SBStorageItemData) == 0x000160, "Member 'ShortcutRingIcon_Basic_C_OnExecuteOwnItem::K2Node_MakeStruct_SBStorageItemData' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Basic_C_OnExecuteOwnItem, CallFunc_GetTextFromAssetAt_ReturnValue) == 0x000180, "Member 'ShortcutRingIcon_Basic_C_OnExecuteOwnItem::CallFunc_GetTextFromAssetAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Basic_C_OnExecuteOwnItem, CallFunc_Request_SaveItemUse_ReturnValue) == 0x000190, "Member 'ShortcutRingIcon_Basic_C_OnExecuteOwnItem::CallFunc_Request_SaveItemUse_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Basic_C_OnExecuteOwnItem, CallFunc_Conv_StringToText_ReturnValue) == 0x000198, "Member 'ShortcutRingIcon_Basic_C_OnExecuteOwnItem::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Basic_C_OnExecuteOwnItem, CallFunc_Get_Use_Item_Window_Type_WindowType) == 0x0001B0, "Member 'ShortcutRingIcon_Basic_C_OnExecuteOwnItem::CallFunc_Get_Use_Item_Window_Type_WindowType' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Basic_C_OnExecuteOwnItem, CallFunc_Get_Use_Item_Window_Type_Valu) == 0x0001B4, "Member 'ShortcutRingIcon_Basic_C_OnExecuteOwnItem::CallFunc_Get_Use_Item_Window_Type_Valu' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Basic_C_OnExecuteOwnItem, CallFunc_Get_Use_Item_Window_Type_Time) == 0x0001B8, "Member 'ShortcutRingIcon_Basic_C_OnExecuteOwnItem::CallFunc_Get_Use_Item_Window_Type_Time' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Basic_C_OnExecuteOwnItem, K2Node_SwitchEnum_CmpSuccess) == 0x0001BC, "Member 'ShortcutRingIcon_Basic_C_OnExecuteOwnItem::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.OnExecuteSupply
// 0x0050 (0x0050 - 0x0000)
struct ShortcutRingIcon_Basic_C_OnExecuteSupply final
{
public:
	int32                                         InItemIndex;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemUseStatus                              InItemUseStatus;                                   // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D57[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D58[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D59[0x2];                                     // 0x0022(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetAt_ReturnValue;           // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0038(0x0018)()
};
static_assert(alignof(ShortcutRingIcon_Basic_C_OnExecuteSupply) == 0x000008, "Wrong alignment on ShortcutRingIcon_Basic_C_OnExecuteSupply");
static_assert(sizeof(ShortcutRingIcon_Basic_C_OnExecuteSupply) == 0x000050, "Wrong size on ShortcutRingIcon_Basic_C_OnExecuteSupply");
static_assert(offsetof(ShortcutRingIcon_Basic_C_OnExecuteSupply, InItemIndex) == 0x000000, "Member 'ShortcutRingIcon_Basic_C_OnExecuteSupply::InItemIndex' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Basic_C_OnExecuteSupply, InItemUseStatus) == 0x000004, "Member 'ShortcutRingIcon_Basic_C_OnExecuteSupply::InItemUseStatus' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Basic_C_OnExecuteSupply, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'ShortcutRingIcon_Basic_C_OnExecuteSupply::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Basic_C_OnExecuteSupply, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000010, "Member 'ShortcutRingIcon_Basic_C_OnExecuteSupply::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Basic_C_OnExecuteSupply, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000018, "Member 'ShortcutRingIcon_Basic_C_OnExecuteSupply::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Basic_C_OnExecuteSupply, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'ShortcutRingIcon_Basic_C_OnExecuteSupply::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Basic_C_OnExecuteSupply, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000021, "Member 'ShortcutRingIcon_Basic_C_OnExecuteSupply::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Basic_C_OnExecuteSupply, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000024, "Member 'ShortcutRingIcon_Basic_C_OnExecuteSupply::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Basic_C_OnExecuteSupply, CallFunc_GetTextFromAssetAt_ReturnValue) == 0x000028, "Member 'ShortcutRingIcon_Basic_C_OnExecuteSupply::CallFunc_GetTextFromAssetAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Basic_C_OnExecuteSupply, CallFunc_Conv_StringToText_ReturnValue) == 0x000038, "Member 'ShortcutRingIcon_Basic_C_OnExecuteSupply::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.OnSetGrayOut
// 0x0001 (0x0001 - 0x0000)
struct ShortcutRingIcon_Basic_C_OnSetGrayOut final
{
public:
	bool                                          InGrayOut;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ShortcutRingIcon_Basic_C_OnSetGrayOut) == 0x000001, "Wrong alignment on ShortcutRingIcon_Basic_C_OnSetGrayOut");
static_assert(sizeof(ShortcutRingIcon_Basic_C_OnSetGrayOut) == 0x000001, "Wrong size on ShortcutRingIcon_Basic_C_OnSetGrayOut");
static_assert(offsetof(ShortcutRingIcon_Basic_C_OnSetGrayOut, InGrayOut) == 0x000000, "Member 'ShortcutRingIcon_Basic_C_OnSetGrayOut::InGrayOut' has a wrong offset!");

// Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.OnSetCoolTime
// 0x0001 (0x0001 - 0x0000)
struct ShortcutRingIcon_Basic_C_OnSetCoolTime final
{
public:
	bool                                          InIsShow;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ShortcutRingIcon_Basic_C_OnSetCoolTime) == 0x000001, "Wrong alignment on ShortcutRingIcon_Basic_C_OnSetCoolTime");
static_assert(sizeof(ShortcutRingIcon_Basic_C_OnSetCoolTime) == 0x000001, "Wrong size on ShortcutRingIcon_Basic_C_OnSetCoolTime");
static_assert(offsetof(ShortcutRingIcon_Basic_C_OnSetCoolTime, InIsShow) == 0x000000, "Member 'ShortcutRingIcon_Basic_C_OnSetCoolTime::InIsShow' has a wrong offset!");

// Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.OnSetEnableToolTip
// 0x0001 (0x0001 - 0x0000)
struct ShortcutRingIcon_Basic_C_OnSetEnableToolTip final
{
public:
	bool                                          InEnable;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ShortcutRingIcon_Basic_C_OnSetEnableToolTip) == 0x000001, "Wrong alignment on ShortcutRingIcon_Basic_C_OnSetEnableToolTip");
static_assert(sizeof(ShortcutRingIcon_Basic_C_OnSetEnableToolTip) == 0x000001, "Wrong size on ShortcutRingIcon_Basic_C_OnSetEnableToolTip");
static_assert(offsetof(ShortcutRingIcon_Basic_C_OnSetEnableToolTip, InEnable) == 0x000000, "Member 'ShortcutRingIcon_Basic_C_OnSetEnableToolTip::InEnable' has a wrong offset!");

// Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.OnSetVisibleShortcutIcon
// 0x0001 (0x0001 - 0x0000)
struct ShortcutRingIcon_Basic_C_OnSetVisibleShortcutIcon final
{
public:
	bool                                          InVisible;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ShortcutRingIcon_Basic_C_OnSetVisibleShortcutIcon) == 0x000001, "Wrong alignment on ShortcutRingIcon_Basic_C_OnSetVisibleShortcutIcon");
static_assert(sizeof(ShortcutRingIcon_Basic_C_OnSetVisibleShortcutIcon) == 0x000001, "Wrong size on ShortcutRingIcon_Basic_C_OnSetVisibleShortcutIcon");
static_assert(offsetof(ShortcutRingIcon_Basic_C_OnSetVisibleShortcutIcon, InVisible) == 0x000000, "Member 'ShortcutRingIcon_Basic_C_OnSetVisibleShortcutIcon::InVisible' has a wrong offset!");

// Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.OnExecuteError
// 0x0028 (0x0028 - 0x0000)
struct ShortcutRingIcon_Basic_C_OnExecuteError final
{
public:
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0010(0x0018)()
};
static_assert(alignof(ShortcutRingIcon_Basic_C_OnExecuteError) == 0x000008, "Wrong alignment on ShortcutRingIcon_Basic_C_OnExecuteError");
static_assert(sizeof(ShortcutRingIcon_Basic_C_OnExecuteError) == 0x000028, "Wrong size on ShortcutRingIcon_Basic_C_OnExecuteError");
static_assert(offsetof(ShortcutRingIcon_Basic_C_OnExecuteError, CallFunc_GetTextFromAsset_ReturnValue) == 0x000000, "Member 'ShortcutRingIcon_Basic_C_OnExecuteError::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Basic_C_OnExecuteError, CallFunc_Conv_StringToText_ReturnValue) == 0x000010, "Member 'ShortcutRingIcon_Basic_C_OnExecuteError::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

}

