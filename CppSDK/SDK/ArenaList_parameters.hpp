#pragma once

 

// Package: ArenaList

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function ArenaList.ArenaList_C.OnFinish__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct ArenaList_C_OnFinish__DelegateSignature final
{
public:
	class FString                                 Result;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(ArenaList_C_OnFinish__DelegateSignature) == 0x000008, "Wrong alignment on ArenaList_C_OnFinish__DelegateSignature");
static_assert(sizeof(ArenaList_C_OnFinish__DelegateSignature) == 0x000010, "Wrong size on ArenaList_C_OnFinish__DelegateSignature");
static_assert(offsetof(ArenaList_C_OnFinish__DelegateSignature, Result) == 0x000000, "Member 'ArenaList_C_OnFinish__DelegateSignature::Result' has a wrong offset!");

// Function ArenaList.ArenaList_C.ExecuteUbergraph_ArenaList
// 0x01F8 (0x01F8 - 0x0000)
struct ArenaList_C_ExecuteUbergraph_ArenaList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1CB5[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMapInfo                             K2Node_CustomEvent_ArenaInfo;                      // 0x0008(0x01E0)()
	class UUMG_MatchingMenu_ListItem_C*           K2Node_CustomEvent_Item;                           // 0x01E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x01F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ArenaList_C_ExecuteUbergraph_ArenaList) == 0x000008, "Wrong alignment on ArenaList_C_ExecuteUbergraph_ArenaList");
static_assert(sizeof(ArenaList_C_ExecuteUbergraph_ArenaList) == 0x0001F8, "Wrong size on ArenaList_C_ExecuteUbergraph_ArenaList");
static_assert(offsetof(ArenaList_C_ExecuteUbergraph_ArenaList, EntryPoint) == 0x000000, "Member 'ArenaList_C_ExecuteUbergraph_ArenaList::EntryPoint' has a wrong offset!");
static_assert(offsetof(ArenaList_C_ExecuteUbergraph_ArenaList, K2Node_CustomEvent_ArenaInfo) == 0x000008, "Member 'ArenaList_C_ExecuteUbergraph_ArenaList::K2Node_CustomEvent_ArenaInfo' has a wrong offset!");
static_assert(offsetof(ArenaList_C_ExecuteUbergraph_ArenaList, K2Node_CustomEvent_Item) == 0x0001E8, "Member 'ArenaList_C_ExecuteUbergraph_ArenaList::K2Node_CustomEvent_Item' has a wrong offset!");
static_assert(offsetof(ArenaList_C_ExecuteUbergraph_ArenaList, CallFunc_Array_Find_ReturnValue) == 0x0001F0, "Member 'ArenaList_C_ExecuteUbergraph_ArenaList::CallFunc_Array_Find_ReturnValue' has a wrong offset!");

// Function ArenaList.ArenaList_C.OnSelectItem
// 0x01E8 (0x01E8 - 0x0000)
struct ArenaList_C_OnSelectItem final
{
public:
	struct FSBMapInfo                             ArenaInfo;                                         // 0x0000(0x01E0)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UUMG_MatchingMenu_ListItem_C*           Item;                                              // 0x01E0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ArenaList_C_OnSelectItem) == 0x000008, "Wrong alignment on ArenaList_C_OnSelectItem");
static_assert(sizeof(ArenaList_C_OnSelectItem) == 0x0001E8, "Wrong size on ArenaList_C_OnSelectItem");
static_assert(offsetof(ArenaList_C_OnSelectItem, ArenaInfo) == 0x000000, "Member 'ArenaList_C_OnSelectItem::ArenaInfo' has a wrong offset!");
static_assert(offsetof(ArenaList_C_OnSelectItem, Item) == 0x0001E0, "Member 'ArenaList_C_OnSelectItem::Item' has a wrong offset!");

// Function ArenaList.ArenaList_C.MakeArenaInfoList
// 0x0270 (0x0270 - 0x0000)
struct ArenaList_C_MakeArenaInfoList final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1CB6[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class FName, struct FSBMapInfo>          CallFunc_GetMapInfoMap_ReturnValue;                // 0x0018(0x0050)(ConstParm)
	TArray<struct FSBMapInfo>                     CallFunc_Map_Values_Values;                        // 0x0068(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1CB7[0x4];                                     // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMapInfo                             CallFunc_Array_Get_Item;                           // 0x0080(0x01E0)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0260(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1CB8[0x3];                                     // 0x0261(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0264(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0268(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ArenaList_C_MakeArenaInfoList) == 0x000008, "Wrong alignment on ArenaList_C_MakeArenaInfoList");
static_assert(sizeof(ArenaList_C_MakeArenaInfoList) == 0x000270, "Wrong size on ArenaList_C_MakeArenaInfoList");
static_assert(offsetof(ArenaList_C_MakeArenaInfoList, Temp_int_Array_Index_Variable) == 0x000000, "Member 'ArenaList_C_MakeArenaInfoList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ArenaList_C_MakeArenaInfoList, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'ArenaList_C_MakeArenaInfoList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ArenaList_C_MakeArenaInfoList, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'ArenaList_C_MakeArenaInfoList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ArenaList_C_MakeArenaInfoList, CallFunc_GetMasterDataManager_IsValid) == 0x00000C, "Member 'ArenaList_C_MakeArenaInfoList::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(ArenaList_C_MakeArenaInfoList, CallFunc_GetMasterDataManager_ReturnValue) == 0x000010, "Member 'ArenaList_C_MakeArenaInfoList::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ArenaList_C_MakeArenaInfoList, CallFunc_GetMapInfoMap_ReturnValue) == 0x000018, "Member 'ArenaList_C_MakeArenaInfoList::CallFunc_GetMapInfoMap_ReturnValue' has a wrong offset!");
static_assert(offsetof(ArenaList_C_MakeArenaInfoList, CallFunc_Map_Values_Values) == 0x000068, "Member 'ArenaList_C_MakeArenaInfoList::CallFunc_Map_Values_Values' has a wrong offset!");
static_assert(offsetof(ArenaList_C_MakeArenaInfoList, CallFunc_Array_Length_ReturnValue) == 0x000078, "Member 'ArenaList_C_MakeArenaInfoList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ArenaList_C_MakeArenaInfoList, CallFunc_Array_Get_Item) == 0x000080, "Member 'ArenaList_C_MakeArenaInfoList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ArenaList_C_MakeArenaInfoList, CallFunc_Less_IntInt_ReturnValue) == 0x000260, "Member 'ArenaList_C_MakeArenaInfoList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ArenaList_C_MakeArenaInfoList, CallFunc_Array_Add_ReturnValue) == 0x000264, "Member 'ArenaList_C_MakeArenaInfoList::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(ArenaList_C_MakeArenaInfoList, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000268, "Member 'ArenaList_C_MakeArenaInfoList::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function ArenaList.ArenaList_C.SetupListItem
// 0x0218 (0x0218 - 0x0000)
struct ArenaList_C_SetupListItem final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1CB9[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_MatchingMenu_ListItem_C*           CallFunc_Create_ReturnValue;                       // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FSBMapInfo& DungeonMapInfo, class UUMG_MatchingMenu_ListItem_C* ListItem)> K2Node_CreateDelegate_OutputDelegate;              // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBMapInfo                             CallFunc_Array_Get_Item;                           // 0x0030(0x01E0)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0210(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0214(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ArenaList_C_SetupListItem) == 0x000008, "Wrong alignment on ArenaList_C_SetupListItem");
static_assert(sizeof(ArenaList_C_SetupListItem) == 0x000218, "Wrong size on ArenaList_C_SetupListItem");
static_assert(offsetof(ArenaList_C_SetupListItem, Temp_int_Array_Index_Variable) == 0x000000, "Member 'ArenaList_C_SetupListItem::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ArenaList_C_SetupListItem, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'ArenaList_C_SetupListItem::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ArenaList_C_SetupListItem, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'ArenaList_C_SetupListItem::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ArenaList_C_SetupListItem, CallFunc_Create_ReturnValue) == 0x000010, "Member 'ArenaList_C_SetupListItem::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(ArenaList_C_SetupListItem, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'ArenaList_C_SetupListItem::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ArenaList_C_SetupListItem, CallFunc_AddChild_ReturnValue) == 0x000028, "Member 'ArenaList_C_SetupListItem::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(ArenaList_C_SetupListItem, CallFunc_Array_Get_Item) == 0x000030, "Member 'ArenaList_C_SetupListItem::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ArenaList_C_SetupListItem, CallFunc_Array_Length_ReturnValue) == 0x000210, "Member 'ArenaList_C_SetupListItem::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ArenaList_C_SetupListItem, CallFunc_Less_IntInt_ReturnValue) == 0x000214, "Member 'ArenaList_C_SetupListItem::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

}

