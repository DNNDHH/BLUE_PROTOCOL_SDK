#pragma once

 

// Package: NeedItemList

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function NeedItemList.NeedItemList_C.ExecuteUbergraph_NeedItemList
// 0x0010 (0x0010 - 0x0000)
struct NeedItemList_C_ExecuteUbergraph_NeedItemList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_678E[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NeedItemList_C_ExecuteUbergraph_NeedItemList) == 0x000004, "Wrong alignment on NeedItemList_C_ExecuteUbergraph_NeedItemList");
static_assert(sizeof(NeedItemList_C_ExecuteUbergraph_NeedItemList) == 0x000010, "Wrong size on NeedItemList_C_ExecuteUbergraph_NeedItemList");
static_assert(offsetof(NeedItemList_C_ExecuteUbergraph_NeedItemList, EntryPoint) == 0x000000, "Member 'NeedItemList_C_ExecuteUbergraph_NeedItemList::EntryPoint' has a wrong offset!");
static_assert(offsetof(NeedItemList_C_ExecuteUbergraph_NeedItemList, K2Node_Event_IsDesignTime) == 0x000004, "Member 'NeedItemList_C_ExecuteUbergraph_NeedItemList::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(NeedItemList_C_ExecuteUbergraph_NeedItemList, CallFunc_MakeVector2D_ReturnValue) == 0x000008, "Member 'NeedItemList_C_ExecuteUbergraph_NeedItemList::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");

// Function NeedItemList.NeedItemList_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct NeedItemList_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(NeedItemList_C_PreConstruct) == 0x000001, "Wrong alignment on NeedItemList_C_PreConstruct");
static_assert(sizeof(NeedItemList_C_PreConstruct) == 0x000001, "Wrong size on NeedItemList_C_PreConstruct");
static_assert(offsetof(NeedItemList_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'NeedItemList_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function NeedItemList.NeedItemList_C.Add
// 0x0028 (0x0028 - 0x0000)
struct NeedItemList_C_Add final
{
public:
	struct FCraftNeedItems                        InCraftNeedItems;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	bool                                          OutIsCraftable;                                    // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_678F[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UNeedItemList_Item_C*                   CallFunc_Create_ReturnValue;                       // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCraftable_Craftable;                    // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(NeedItemList_C_Add) == 0x000008, "Wrong alignment on NeedItemList_C_Add");
static_assert(sizeof(NeedItemList_C_Add) == 0x000028, "Wrong size on NeedItemList_C_Add");
static_assert(offsetof(NeedItemList_C_Add, InCraftNeedItems) == 0x000000, "Member 'NeedItemList_C_Add::InCraftNeedItems' has a wrong offset!");
static_assert(offsetof(NeedItemList_C_Add, OutIsCraftable) == 0x000008, "Member 'NeedItemList_C_Add::OutIsCraftable' has a wrong offset!");
static_assert(offsetof(NeedItemList_C_Add, CallFunc_Create_ReturnValue) == 0x000010, "Member 'NeedItemList_C_Add::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(NeedItemList_C_Add, CallFunc_AddChild_ReturnValue) == 0x000018, "Member 'NeedItemList_C_Add::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(NeedItemList_C_Add, CallFunc_IsCraftable_Craftable) == 0x000020, "Member 'NeedItemList_C_Add::CallFunc_IsCraftable_Craftable' has a wrong offset!");

// Function NeedItemList.NeedItemList_C.AddDry
// 0x0020 (0x0020 - 0x0000)
struct NeedItemList_C_AddDry final
{
public:
	int32                                         DryItemCnt;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6790[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNeedItemList_Item_C*                   CallFunc_Create_ReturnValue;                       // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NeedItemList_C_AddDry) == 0x000008, "Wrong alignment on NeedItemList_C_AddDry");
static_assert(sizeof(NeedItemList_C_AddDry) == 0x000020, "Wrong size on NeedItemList_C_AddDry");
static_assert(offsetof(NeedItemList_C_AddDry, DryItemCnt) == 0x000000, "Member 'NeedItemList_C_AddDry::DryItemCnt' has a wrong offset!");
static_assert(offsetof(NeedItemList_C_AddDry, Temp_int_Variable) == 0x000004, "Member 'NeedItemList_C_AddDry::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(NeedItemList_C_AddDry, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000008, "Member 'NeedItemList_C_AddDry::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(NeedItemList_C_AddDry, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'NeedItemList_C_AddDry::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(NeedItemList_C_AddDry, CallFunc_Create_ReturnValue) == 0x000010, "Member 'NeedItemList_C_AddDry::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(NeedItemList_C_AddDry, CallFunc_AddChild_ReturnValue) == 0x000018, "Member 'NeedItemList_C_AddDry::CallFunc_AddChild_ReturnValue' has a wrong offset!");

// Function NeedItemList.NeedItemList_C.SetBgSize
// 0x0010 (0x0010 - 0x0000)
struct NeedItemList_C_SetBgSize final
{
public:
	struct FVector2D                              SizeXY;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NeedItemList_C_SetBgSize) == 0x000008, "Wrong alignment on NeedItemList_C_SetBgSize");
static_assert(sizeof(NeedItemList_C_SetBgSize) == 0x000010, "Wrong size on NeedItemList_C_SetBgSize");
static_assert(offsetof(NeedItemList_C_SetBgSize, SizeXY) == 0x000000, "Member 'NeedItemList_C_SetBgSize::SizeXY' has a wrong offset!");
static_assert(offsetof(NeedItemList_C_SetBgSize, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000008, "Member 'NeedItemList_C_SetBgSize::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");

}

