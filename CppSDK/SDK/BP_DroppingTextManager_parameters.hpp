#pragma once

 

// Package: BP_DroppingTextManager

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function BP_DroppingTextManager.BP_DroppingTextManager_C.ExecuteUbergraph_BP_DroppingTextManager
// 0x0088 (0x0088 - 0x0000)
struct BP_DroppingTextManager_C_ExecuteUbergraph_BP_DroppingTextManager final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9FD4[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_Event_WorldContextObject;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_Event_ItemName;                             // 0x0010(0x0018)(ConstParm)
	int32                                         K2Node_Event_Amount;                               // 0x0028(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBDroppingTextOption                         K2Node_Event_Option;                               // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9FD5[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDroppingTextBase*                    CallFunc_CreateDroppingUI_ReturnValue;             // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_Event_WorldContextObject_2;                 // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_Event_Message;                              // 0x0040(0x0018)(ConstParm)
	ESBDroppingTextOption                         K2Node_Event_Option_2;                             // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9FD6[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDroppingTextBase*                    CallFunc_CreateDroppingUI_ReturnValue_1;           // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_Event_WorldContextObject_1;                 // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemType                                     K2Node_Event_ItemType;                             // 0x0070(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9FD7[0x3];                                     // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_ItemId;                               // 0x0074(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_Amount_1;                             // 0x0078(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBDroppingTextOption                         K2Node_Event_Option_1;                             // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bUnidentified;                        // 0x007D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bIsBonusAdd;                          // 0x007E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bRare;                                // 0x007F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class USBDroppingTextBase*                    CallFunc_CreateDroppingUI_ReturnValue_2;           // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DroppingTextManager_C_ExecuteUbergraph_BP_DroppingTextManager) == 0x000008, "Wrong alignment on BP_DroppingTextManager_C_ExecuteUbergraph_BP_DroppingTextManager");
static_assert(sizeof(BP_DroppingTextManager_C_ExecuteUbergraph_BP_DroppingTextManager) == 0x000088, "Wrong size on BP_DroppingTextManager_C_ExecuteUbergraph_BP_DroppingTextManager");
static_assert(offsetof(BP_DroppingTextManager_C_ExecuteUbergraph_BP_DroppingTextManager, EntryPoint) == 0x000000, "Member 'BP_DroppingTextManager_C_ExecuteUbergraph_BP_DroppingTextManager::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_DroppingTextManager_C_ExecuteUbergraph_BP_DroppingTextManager, K2Node_Event_WorldContextObject) == 0x000008, "Member 'BP_DroppingTextManager_C_ExecuteUbergraph_BP_DroppingTextManager::K2Node_Event_WorldContextObject' has a wrong offset!");
static_assert(offsetof(BP_DroppingTextManager_C_ExecuteUbergraph_BP_DroppingTextManager, K2Node_Event_ItemName) == 0x000010, "Member 'BP_DroppingTextManager_C_ExecuteUbergraph_BP_DroppingTextManager::K2Node_Event_ItemName' has a wrong offset!");
static_assert(offsetof(BP_DroppingTextManager_C_ExecuteUbergraph_BP_DroppingTextManager, K2Node_Event_Amount) == 0x000028, "Member 'BP_DroppingTextManager_C_ExecuteUbergraph_BP_DroppingTextManager::K2Node_Event_Amount' has a wrong offset!");
static_assert(offsetof(BP_DroppingTextManager_C_ExecuteUbergraph_BP_DroppingTextManager, K2Node_Event_Option) == 0x00002C, "Member 'BP_DroppingTextManager_C_ExecuteUbergraph_BP_DroppingTextManager::K2Node_Event_Option' has a wrong offset!");
static_assert(offsetof(BP_DroppingTextManager_C_ExecuteUbergraph_BP_DroppingTextManager, CallFunc_CreateDroppingUI_ReturnValue) == 0x000030, "Member 'BP_DroppingTextManager_C_ExecuteUbergraph_BP_DroppingTextManager::CallFunc_CreateDroppingUI_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DroppingTextManager_C_ExecuteUbergraph_BP_DroppingTextManager, K2Node_Event_WorldContextObject_2) == 0x000038, "Member 'BP_DroppingTextManager_C_ExecuteUbergraph_BP_DroppingTextManager::K2Node_Event_WorldContextObject_2' has a wrong offset!");
static_assert(offsetof(BP_DroppingTextManager_C_ExecuteUbergraph_BP_DroppingTextManager, K2Node_Event_Message) == 0x000040, "Member 'BP_DroppingTextManager_C_ExecuteUbergraph_BP_DroppingTextManager::K2Node_Event_Message' has a wrong offset!");
static_assert(offsetof(BP_DroppingTextManager_C_ExecuteUbergraph_BP_DroppingTextManager, K2Node_Event_Option_2) == 0x000058, "Member 'BP_DroppingTextManager_C_ExecuteUbergraph_BP_DroppingTextManager::K2Node_Event_Option_2' has a wrong offset!");
static_assert(offsetof(BP_DroppingTextManager_C_ExecuteUbergraph_BP_DroppingTextManager, CallFunc_CreateDroppingUI_ReturnValue_1) == 0x000060, "Member 'BP_DroppingTextManager_C_ExecuteUbergraph_BP_DroppingTextManager::CallFunc_CreateDroppingUI_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DroppingTextManager_C_ExecuteUbergraph_BP_DroppingTextManager, K2Node_Event_WorldContextObject_1) == 0x000068, "Member 'BP_DroppingTextManager_C_ExecuteUbergraph_BP_DroppingTextManager::K2Node_Event_WorldContextObject_1' has a wrong offset!");
static_assert(offsetof(BP_DroppingTextManager_C_ExecuteUbergraph_BP_DroppingTextManager, K2Node_Event_ItemType) == 0x000070, "Member 'BP_DroppingTextManager_C_ExecuteUbergraph_BP_DroppingTextManager::K2Node_Event_ItemType' has a wrong offset!");
static_assert(offsetof(BP_DroppingTextManager_C_ExecuteUbergraph_BP_DroppingTextManager, K2Node_Event_ItemId) == 0x000074, "Member 'BP_DroppingTextManager_C_ExecuteUbergraph_BP_DroppingTextManager::K2Node_Event_ItemId' has a wrong offset!");
static_assert(offsetof(BP_DroppingTextManager_C_ExecuteUbergraph_BP_DroppingTextManager, K2Node_Event_Amount_1) == 0x000078, "Member 'BP_DroppingTextManager_C_ExecuteUbergraph_BP_DroppingTextManager::K2Node_Event_Amount_1' has a wrong offset!");
static_assert(offsetof(BP_DroppingTextManager_C_ExecuteUbergraph_BP_DroppingTextManager, K2Node_Event_Option_1) == 0x00007C, "Member 'BP_DroppingTextManager_C_ExecuteUbergraph_BP_DroppingTextManager::K2Node_Event_Option_1' has a wrong offset!");
static_assert(offsetof(BP_DroppingTextManager_C_ExecuteUbergraph_BP_DroppingTextManager, K2Node_Event_bUnidentified) == 0x00007D, "Member 'BP_DroppingTextManager_C_ExecuteUbergraph_BP_DroppingTextManager::K2Node_Event_bUnidentified' has a wrong offset!");
static_assert(offsetof(BP_DroppingTextManager_C_ExecuteUbergraph_BP_DroppingTextManager, K2Node_Event_bIsBonusAdd) == 0x00007E, "Member 'BP_DroppingTextManager_C_ExecuteUbergraph_BP_DroppingTextManager::K2Node_Event_bIsBonusAdd' has a wrong offset!");
static_assert(offsetof(BP_DroppingTextManager_C_ExecuteUbergraph_BP_DroppingTextManager, K2Node_Event_bRare) == 0x00007F, "Member 'BP_DroppingTextManager_C_ExecuteUbergraph_BP_DroppingTextManager::K2Node_Event_bRare' has a wrong offset!");
static_assert(offsetof(BP_DroppingTextManager_C_ExecuteUbergraph_BP_DroppingTextManager, CallFunc_CreateDroppingUI_ReturnValue_2) == 0x000080, "Member 'BP_DroppingTextManager_C_ExecuteUbergraph_BP_DroppingTextManager::CallFunc_CreateDroppingUI_ReturnValue_2' has a wrong offset!");

// Function BP_DroppingTextManager.BP_DroppingTextManager_C.ShowDroppingTextItemName
// 0x0028 (0x0028 - 0x0000)
struct BP_DroppingTextManager_C_ShowDroppingTextItemName final
{
public:
	class UObject*                                WorldContextObject;                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   ItemName;                                          // 0x0008(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         Amount;                                            // 0x0020(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBDroppingTextOption                         Option;                                            // 0x0024(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DroppingTextManager_C_ShowDroppingTextItemName) == 0x000008, "Wrong alignment on BP_DroppingTextManager_C_ShowDroppingTextItemName");
static_assert(sizeof(BP_DroppingTextManager_C_ShowDroppingTextItemName) == 0x000028, "Wrong size on BP_DroppingTextManager_C_ShowDroppingTextItemName");
static_assert(offsetof(BP_DroppingTextManager_C_ShowDroppingTextItemName, WorldContextObject) == 0x000000, "Member 'BP_DroppingTextManager_C_ShowDroppingTextItemName::WorldContextObject' has a wrong offset!");
static_assert(offsetof(BP_DroppingTextManager_C_ShowDroppingTextItemName, ItemName) == 0x000008, "Member 'BP_DroppingTextManager_C_ShowDroppingTextItemName::ItemName' has a wrong offset!");
static_assert(offsetof(BP_DroppingTextManager_C_ShowDroppingTextItemName, Amount) == 0x000020, "Member 'BP_DroppingTextManager_C_ShowDroppingTextItemName::Amount' has a wrong offset!");
static_assert(offsetof(BP_DroppingTextManager_C_ShowDroppingTextItemName, Option) == 0x000024, "Member 'BP_DroppingTextManager_C_ShowDroppingTextItemName::Option' has a wrong offset!");

// Function BP_DroppingTextManager.BP_DroppingTextManager_C.ShowDroppingTextItem
// 0x0018 (0x0018 - 0x0000)
struct BP_DroppingTextManager_C_ShowDroppingTextItem final
{
public:
	class UObject*                                WorldContextObject;                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemType                                     ItemType;                                          // 0x0008(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9FD8[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ItemId;                                            // 0x000C(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Amount;                                            // 0x0010(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBDroppingTextOption                         Option;                                            // 0x0014(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bUnidentified;                                     // 0x0015(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bIsBonusAdd;                                       // 0x0016(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bRare;                                             // 0x0017(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_DroppingTextManager_C_ShowDroppingTextItem) == 0x000008, "Wrong alignment on BP_DroppingTextManager_C_ShowDroppingTextItem");
static_assert(sizeof(BP_DroppingTextManager_C_ShowDroppingTextItem) == 0x000018, "Wrong size on BP_DroppingTextManager_C_ShowDroppingTextItem");
static_assert(offsetof(BP_DroppingTextManager_C_ShowDroppingTextItem, WorldContextObject) == 0x000000, "Member 'BP_DroppingTextManager_C_ShowDroppingTextItem::WorldContextObject' has a wrong offset!");
static_assert(offsetof(BP_DroppingTextManager_C_ShowDroppingTextItem, ItemType) == 0x000008, "Member 'BP_DroppingTextManager_C_ShowDroppingTextItem::ItemType' has a wrong offset!");
static_assert(offsetof(BP_DroppingTextManager_C_ShowDroppingTextItem, ItemId) == 0x00000C, "Member 'BP_DroppingTextManager_C_ShowDroppingTextItem::ItemId' has a wrong offset!");
static_assert(offsetof(BP_DroppingTextManager_C_ShowDroppingTextItem, Amount) == 0x000010, "Member 'BP_DroppingTextManager_C_ShowDroppingTextItem::Amount' has a wrong offset!");
static_assert(offsetof(BP_DroppingTextManager_C_ShowDroppingTextItem, Option) == 0x000014, "Member 'BP_DroppingTextManager_C_ShowDroppingTextItem::Option' has a wrong offset!");
static_assert(offsetof(BP_DroppingTextManager_C_ShowDroppingTextItem, bUnidentified) == 0x000015, "Member 'BP_DroppingTextManager_C_ShowDroppingTextItem::bUnidentified' has a wrong offset!");
static_assert(offsetof(BP_DroppingTextManager_C_ShowDroppingTextItem, bIsBonusAdd) == 0x000016, "Member 'BP_DroppingTextManager_C_ShowDroppingTextItem::bIsBonusAdd' has a wrong offset!");
static_assert(offsetof(BP_DroppingTextManager_C_ShowDroppingTextItem, bRare) == 0x000017, "Member 'BP_DroppingTextManager_C_ShowDroppingTextItem::bRare' has a wrong offset!");

// Function BP_DroppingTextManager.BP_DroppingTextManager_C.ShowDroppingText
// 0x0028 (0x0028 - 0x0000)
struct BP_DroppingTextManager_C_ShowDroppingText final
{
public:
	class UObject*                                WorldContextObject;                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   Message;                                           // 0x0008(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	ESBDroppingTextOption                         Option;                                            // 0x0020(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DroppingTextManager_C_ShowDroppingText) == 0x000008, "Wrong alignment on BP_DroppingTextManager_C_ShowDroppingText");
static_assert(sizeof(BP_DroppingTextManager_C_ShowDroppingText) == 0x000028, "Wrong size on BP_DroppingTextManager_C_ShowDroppingText");
static_assert(offsetof(BP_DroppingTextManager_C_ShowDroppingText, WorldContextObject) == 0x000000, "Member 'BP_DroppingTextManager_C_ShowDroppingText::WorldContextObject' has a wrong offset!");
static_assert(offsetof(BP_DroppingTextManager_C_ShowDroppingText, Message) == 0x000008, "Member 'BP_DroppingTextManager_C_ShowDroppingText::Message' has a wrong offset!");
static_assert(offsetof(BP_DroppingTextManager_C_ShowDroppingText, Option) == 0x000020, "Member 'BP_DroppingTextManager_C_ShowDroppingText::Option' has a wrong offset!");

}

