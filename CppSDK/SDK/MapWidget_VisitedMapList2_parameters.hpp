#pragma once

 

// Package: MapWidget_VisitedMapList2

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.OnListItemClicked__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct MapWidget_VisitedMapList2_C_OnListItemClicked__DelegateSignature final
{
public:
	class FString                                 InMapId;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_VisitedMapList2_C_OnListItemClicked__DelegateSignature) == 0x000008, "Wrong alignment on MapWidget_VisitedMapList2_C_OnListItemClicked__DelegateSignature");
static_assert(sizeof(MapWidget_VisitedMapList2_C_OnListItemClicked__DelegateSignature) == 0x000010, "Wrong size on MapWidget_VisitedMapList2_C_OnListItemClicked__DelegateSignature");
static_assert(offsetof(MapWidget_VisitedMapList2_C_OnListItemClicked__DelegateSignature, InMapId) == 0x000000, "Member 'MapWidget_VisitedMapList2_C_OnListItemClicked__DelegateSignature::InMapId' has a wrong offset!");

// Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.ExecuteUbergraph_MapWidget_VisitedMapList2
// 0x0048 (0x0048 - 0x0000)
struct MapWidget_VisitedMapList2_C_ExecuteUbergraph_MapWidget_VisitedMapList2 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_710F[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const class FString& InMapId)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	class UMapWidget_VisitedMapList2Item_C*       K2Node_CustomEvent_Target_1;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMapWidget_VisitedMapList2Item_C*       K2Node_CustomEvent_Target;                         // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_CustomEvent_InMapId;                        // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0038(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_Page;                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_VisitedMapList2_C_ExecuteUbergraph_MapWidget_VisitedMapList2) == 0x000008, "Wrong alignment on MapWidget_VisitedMapList2_C_ExecuteUbergraph_MapWidget_VisitedMapList2");
static_assert(sizeof(MapWidget_VisitedMapList2_C_ExecuteUbergraph_MapWidget_VisitedMapList2) == 0x000048, "Wrong size on MapWidget_VisitedMapList2_C_ExecuteUbergraph_MapWidget_VisitedMapList2");
static_assert(offsetof(MapWidget_VisitedMapList2_C_ExecuteUbergraph_MapWidget_VisitedMapList2, EntryPoint) == 0x000000, "Member 'MapWidget_VisitedMapList2_C_ExecuteUbergraph_MapWidget_VisitedMapList2::EntryPoint' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_ExecuteUbergraph_MapWidget_VisitedMapList2, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000004, "Member 'MapWidget_VisitedMapList2_C_ExecuteUbergraph_MapWidget_VisitedMapList2::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_ExecuteUbergraph_MapWidget_VisitedMapList2, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'MapWidget_VisitedMapList2_C_ExecuteUbergraph_MapWidget_VisitedMapList2::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_ExecuteUbergraph_MapWidget_VisitedMapList2, K2Node_CustomEvent_Target_1) == 0x000018, "Member 'MapWidget_VisitedMapList2_C_ExecuteUbergraph_MapWidget_VisitedMapList2::K2Node_CustomEvent_Target_1' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_ExecuteUbergraph_MapWidget_VisitedMapList2, K2Node_CustomEvent_Target) == 0x000020, "Member 'MapWidget_VisitedMapList2_C_ExecuteUbergraph_MapWidget_VisitedMapList2::K2Node_CustomEvent_Target' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_ExecuteUbergraph_MapWidget_VisitedMapList2, K2Node_CustomEvent_InMapId) == 0x000028, "Member 'MapWidget_VisitedMapList2_C_ExecuteUbergraph_MapWidget_VisitedMapList2::K2Node_CustomEvent_InMapId' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_ExecuteUbergraph_MapWidget_VisitedMapList2, K2Node_Event_Animation) == 0x000038, "Member 'MapWidget_VisitedMapList2_C_ExecuteUbergraph_MapWidget_VisitedMapList2::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_ExecuteUbergraph_MapWidget_VisitedMapList2, K2Node_ComponentBoundEvent_Page) == 0x000040, "Member 'MapWidget_VisitedMapList2_C_ExecuteUbergraph_MapWidget_VisitedMapList2::K2Node_ComponentBoundEvent_Page' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_ExecuteUbergraph_MapWidget_VisitedMapList2, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000044, "Member 'MapWidget_VisitedMapList2_C_ExecuteUbergraph_MapWidget_VisitedMapList2::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.BndEvt__MapWidget_VisitedMapList2_BasicPager_K2Node_ComponentBoundEvent_1_OnPageChange__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct MapWidget_VisitedMapList2_C_BndEvt__MapWidget_VisitedMapList2_BasicPager_K2Node_ComponentBoundEvent_1_OnPageChange__DelegateSignature final
{
public:
	int32                                         Page;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_VisitedMapList2_C_BndEvt__MapWidget_VisitedMapList2_BasicPager_K2Node_ComponentBoundEvent_1_OnPageChange__DelegateSignature) == 0x000004, "Wrong alignment on MapWidget_VisitedMapList2_C_BndEvt__MapWidget_VisitedMapList2_BasicPager_K2Node_ComponentBoundEvent_1_OnPageChange__DelegateSignature");
static_assert(sizeof(MapWidget_VisitedMapList2_C_BndEvt__MapWidget_VisitedMapList2_BasicPager_K2Node_ComponentBoundEvent_1_OnPageChange__DelegateSignature) == 0x000004, "Wrong size on MapWidget_VisitedMapList2_C_BndEvt__MapWidget_VisitedMapList2_BasicPager_K2Node_ComponentBoundEvent_1_OnPageChange__DelegateSignature");
static_assert(offsetof(MapWidget_VisitedMapList2_C_BndEvt__MapWidget_VisitedMapList2_BasicPager_K2Node_ComponentBoundEvent_1_OnPageChange__DelegateSignature, Page) == 0x000000, "Member 'MapWidget_VisitedMapList2_C_BndEvt__MapWidget_VisitedMapList2_BasicPager_K2Node_ComponentBoundEvent_1_OnPageChange__DelegateSignature::Page' has a wrong offset!");

// Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct MapWidget_VisitedMapList2_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_VisitedMapList2_C_OnAnimationFinished) == 0x000008, "Wrong alignment on MapWidget_VisitedMapList2_C_OnAnimationFinished");
static_assert(sizeof(MapWidget_VisitedMapList2_C_OnAnimationFinished) == 0x000008, "Wrong size on MapWidget_VisitedMapList2_C_OnAnimationFinished");
static_assert(offsetof(MapWidget_VisitedMapList2_C_OnAnimationFinished, Animation) == 0x000000, "Member 'MapWidget_VisitedMapList2_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.OnListItemClickedEvent
// 0x0010 (0x0010 - 0x0000)
struct MapWidget_VisitedMapList2_C_OnListItemClickedEvent final
{
public:
	class FString                                 InMapId;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_VisitedMapList2_C_OnListItemClickedEvent) == 0x000008, "Wrong alignment on MapWidget_VisitedMapList2_C_OnListItemClickedEvent");
static_assert(sizeof(MapWidget_VisitedMapList2_C_OnListItemClickedEvent) == 0x000010, "Wrong size on MapWidget_VisitedMapList2_C_OnListItemClickedEvent");
static_assert(offsetof(MapWidget_VisitedMapList2_C_OnListItemClickedEvent, InMapId) == 0x000000, "Member 'MapWidget_VisitedMapList2_C_OnListItemClickedEvent::InMapId' has a wrong offset!");

// Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.UnbindListItem
// 0x0008 (0x0008 - 0x0000)
struct MapWidget_VisitedMapList2_C_UnbindListItem final
{
public:
	class UMapWidget_VisitedMapList2Item_C*       Target;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_VisitedMapList2_C_UnbindListItem) == 0x000008, "Wrong alignment on MapWidget_VisitedMapList2_C_UnbindListItem");
static_assert(sizeof(MapWidget_VisitedMapList2_C_UnbindListItem) == 0x000008, "Wrong size on MapWidget_VisitedMapList2_C_UnbindListItem");
static_assert(offsetof(MapWidget_VisitedMapList2_C_UnbindListItem, Target) == 0x000000, "Member 'MapWidget_VisitedMapList2_C_UnbindListItem::Target' has a wrong offset!");

// Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.BindListItem
// 0x0008 (0x0008 - 0x0000)
struct MapWidget_VisitedMapList2_C_BindListItem final
{
public:
	class UMapWidget_VisitedMapList2Item_C*       Target;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_VisitedMapList2_C_BindListItem) == 0x000008, "Wrong alignment on MapWidget_VisitedMapList2_C_BindListItem");
static_assert(sizeof(MapWidget_VisitedMapList2_C_BindListItem) == 0x000008, "Wrong size on MapWidget_VisitedMapList2_C_BindListItem");
static_assert(offsetof(MapWidget_VisitedMapList2_C_BindListItem, Target) == 0x000000, "Member 'MapWidget_VisitedMapList2_C_BindListItem::Target' has a wrong offset!");

// Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.Open
// 0x0008 (0x0008 - 0x0000)
struct MapWidget_VisitedMapList2_C_Open final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_VisitedMapList2_C_Open) == 0x000008, "Wrong alignment on MapWidget_VisitedMapList2_C_Open");
static_assert(sizeof(MapWidget_VisitedMapList2_C_Open) == 0x000008, "Wrong size on MapWidget_VisitedMapList2_C_Open");
static_assert(offsetof(MapWidget_VisitedMapList2_C_Open, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'MapWidget_VisitedMapList2_C_Open::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.Close
// 0x0010 (0x0010 - 0x0000)
struct MapWidget_VisitedMapList2_C_Close final
{
public:
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7110[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_VisitedMapList2_C_Close) == 0x000008, "Wrong alignment on MapWidget_VisitedMapList2_C_Close");
static_assert(sizeof(MapWidget_VisitedMapList2_C_Close) == 0x000010, "Wrong size on MapWidget_VisitedMapList2_C_Close");
static_assert(offsetof(MapWidget_VisitedMapList2_C_Close, CallFunc_PlaySE_ReturnValue) == 0x000000, "Member 'MapWidget_VisitedMapList2_C_Close::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_Close, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'MapWidget_VisitedMapList2_C_Close::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.SetupListItem
// 0x0048 (0x0048 - 0x0000)
struct MapWidget_VisitedMapList2_C_SetupListItem final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7111[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;               // 0x0010(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7112[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7113[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapWidget_VisitedMapList2Item_C*       K2Node_DynamicCast_AsMap_Widget_Visited_Map_List_2Item; // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_VisitedMapList2_C_SetupListItem) == 0x000008, "Wrong alignment on MapWidget_VisitedMapList2_C_SetupListItem");
static_assert(sizeof(MapWidget_VisitedMapList2_C_SetupListItem) == 0x000048, "Wrong size on MapWidget_VisitedMapList2_C_SetupListItem");
static_assert(offsetof(MapWidget_VisitedMapList2_C_SetupListItem, Temp_int_Array_Index_Variable) == 0x000000, "Member 'MapWidget_VisitedMapList2_C_SetupListItem::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_SetupListItem, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'MapWidget_VisitedMapList2_C_SetupListItem::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_SetupListItem, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'MapWidget_VisitedMapList2_C_SetupListItem::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_SetupListItem, CallFunc_GetAllChildren_ReturnValue) == 0x000010, "Member 'MapWidget_VisitedMapList2_C_SetupListItem::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_SetupListItem, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'MapWidget_VisitedMapList2_C_SetupListItem::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_SetupListItem, CallFunc_Array_Get_Item) == 0x000028, "Member 'MapWidget_VisitedMapList2_C_SetupListItem::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_SetupListItem, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'MapWidget_VisitedMapList2_C_SetupListItem::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_SetupListItem, K2Node_DynamicCast_AsMap_Widget_Visited_Map_List_2Item) == 0x000038, "Member 'MapWidget_VisitedMapList2_C_SetupListItem::K2Node_DynamicCast_AsMap_Widget_Visited_Map_List_2Item' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_SetupListItem, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'MapWidget_VisitedMapList2_C_SetupListItem::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.ResetListItem
// 0x0048 (0x0048 - 0x0000)
struct MapWidget_VisitedMapList2_C_ResetListItem final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7114[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;               // 0x0010(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7115[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7116[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapWidget_VisitedMapList2Item_C*       K2Node_DynamicCast_AsMap_Widget_Visited_Map_List_2Item; // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_VisitedMapList2_C_ResetListItem) == 0x000008, "Wrong alignment on MapWidget_VisitedMapList2_C_ResetListItem");
static_assert(sizeof(MapWidget_VisitedMapList2_C_ResetListItem) == 0x000048, "Wrong size on MapWidget_VisitedMapList2_C_ResetListItem");
static_assert(offsetof(MapWidget_VisitedMapList2_C_ResetListItem, Temp_int_Array_Index_Variable) == 0x000000, "Member 'MapWidget_VisitedMapList2_C_ResetListItem::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_ResetListItem, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'MapWidget_VisitedMapList2_C_ResetListItem::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_ResetListItem, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'MapWidget_VisitedMapList2_C_ResetListItem::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_ResetListItem, CallFunc_GetAllChildren_ReturnValue) == 0x000010, "Member 'MapWidget_VisitedMapList2_C_ResetListItem::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_ResetListItem, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'MapWidget_VisitedMapList2_C_ResetListItem::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_ResetListItem, CallFunc_Array_Get_Item) == 0x000028, "Member 'MapWidget_VisitedMapList2_C_ResetListItem::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_ResetListItem, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'MapWidget_VisitedMapList2_C_ResetListItem::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_ResetListItem, K2Node_DynamicCast_AsMap_Widget_Visited_Map_List_2Item) == 0x000038, "Member 'MapWidget_VisitedMapList2_C_ResetListItem::K2Node_DynamicCast_AsMap_Widget_Visited_Map_List_2Item' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_ResetListItem, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'MapWidget_VisitedMapList2_C_ResetListItem::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.Setup
// 0x00B8 (0x00B8 - 0x0000)
struct MapWidget_VisitedMapList2_C_Setup final
{
public:
	TArray<class FString>                         InMapIds;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FString                                 InCurrentId;                                       // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         LoopEnd;                                           // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7117[0x2];                                     // 0x002A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7118[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;               // 0x0038(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UWidget*                                CallFunc_Array_Get_Item;                           // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7119[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapWidget_VisitedMapList2Item_C*       K2Node_DynamicCast_AsMap_Widget_Visited_Map_List_2Item; // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_711A[0x3];                                     // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_711B[0x3];                                     // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetViewCount_ReturnValue;                 // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetViewCount_ReturnValue_1;               // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_711C[0x3];                                     // 0x0085(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_711D[0x2];                                     // 0x0092(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_711E[0x3];                                     // 0x00A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_711F[0x3];                                     // 0x00AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_VisitedMapList2_C_Setup) == 0x000008, "Wrong alignment on MapWidget_VisitedMapList2_C_Setup");
static_assert(sizeof(MapWidget_VisitedMapList2_C_Setup) == 0x0000B8, "Wrong size on MapWidget_VisitedMapList2_C_Setup");
static_assert(offsetof(MapWidget_VisitedMapList2_C_Setup, InMapIds) == 0x000000, "Member 'MapWidget_VisitedMapList2_C_Setup::InMapIds' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_Setup, InCurrentId) == 0x000010, "Member 'MapWidget_VisitedMapList2_C_Setup::InCurrentId' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_Setup, LoopEnd) == 0x000020, "Member 'MapWidget_VisitedMapList2_C_Setup::LoopEnd' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_Setup, Temp_int_Array_Index_Variable) == 0x000024, "Member 'MapWidget_VisitedMapList2_C_Setup::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_Setup, Temp_byte_Variable) == 0x000028, "Member 'MapWidget_VisitedMapList2_C_Setup::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_Setup, Temp_bool_Variable) == 0x000029, "Member 'MapWidget_VisitedMapList2_C_Setup::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_Setup, Temp_int_Variable) == 0x00002C, "Member 'MapWidget_VisitedMapList2_C_Setup::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_Setup, CallFunc_Add_IntInt_ReturnValue) == 0x000030, "Member 'MapWidget_VisitedMapList2_C_Setup::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_Setup, CallFunc_GetAllChildren_ReturnValue) == 0x000038, "Member 'MapWidget_VisitedMapList2_C_Setup::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_Setup, CallFunc_Array_Get_Item) == 0x000048, "Member 'MapWidget_VisitedMapList2_C_Setup::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_Setup, CallFunc_GetChildAt_ReturnValue) == 0x000050, "Member 'MapWidget_VisitedMapList2_C_Setup::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_Setup, CallFunc_IsValid_ReturnValue) == 0x000058, "Member 'MapWidget_VisitedMapList2_C_Setup::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_Setup, K2Node_DynamicCast_AsMap_Widget_Visited_Map_List_2Item) == 0x000060, "Member 'MapWidget_VisitedMapList2_C_Setup::K2Node_DynamicCast_AsMap_Widget_Visited_Map_List_2Item' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_Setup, K2Node_DynamicCast_bSuccess) == 0x000068, "Member 'MapWidget_VisitedMapList2_C_Setup::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_Setup, CallFunc_Array_Length_ReturnValue) == 0x00006C, "Member 'MapWidget_VisitedMapList2_C_Setup::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_Setup, Temp_byte_Variable_1) == 0x000070, "Member 'MapWidget_VisitedMapList2_C_Setup::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_Setup, CallFunc_GetViewCount_ReturnValue) == 0x000074, "Member 'MapWidget_VisitedMapList2_C_Setup::CallFunc_GetViewCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_Setup, CallFunc_Subtract_IntInt_ReturnValue) == 0x000078, "Member 'MapWidget_VisitedMapList2_C_Setup::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_Setup, CallFunc_GetViewCount_ReturnValue_1) == 0x00007C, "Member 'MapWidget_VisitedMapList2_C_Setup::CallFunc_GetViewCount_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_Setup, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000080, "Member 'MapWidget_VisitedMapList2_C_Setup::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_Setup, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000084, "Member 'MapWidget_VisitedMapList2_C_Setup::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_Setup, CallFunc_Array_LastIndex_ReturnValue) == 0x000088, "Member 'MapWidget_VisitedMapList2_C_Setup::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_Setup, CallFunc_Clamp_ReturnValue) == 0x00008C, "Member 'MapWidget_VisitedMapList2_C_Setup::CallFunc_Clamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_Setup, CallFunc_Greater_IntInt_ReturnValue) == 0x000090, "Member 'MapWidget_VisitedMapList2_C_Setup::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_Setup, K2Node_Select_Default) == 0x000091, "Member 'MapWidget_VisitedMapList2_C_Setup::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_Setup, CallFunc_Add_IntInt_ReturnValue_1) == 0x000094, "Member 'MapWidget_VisitedMapList2_C_Setup::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_Setup, CallFunc_Array_Length_ReturnValue_1) == 0x000098, "Member 'MapWidget_VisitedMapList2_C_Setup::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_Setup, CallFunc_Add_IntInt_ReturnValue_2) == 0x00009C, "Member 'MapWidget_VisitedMapList2_C_Setup::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_Setup, CallFunc_Divide_IntInt_ReturnValue) == 0x0000A0, "Member 'MapWidget_VisitedMapList2_C_Setup::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_Setup, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x0000A4, "Member 'MapWidget_VisitedMapList2_C_Setup::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_Setup, Temp_int_Loop_Counter_Variable) == 0x0000A8, "Member 'MapWidget_VisitedMapList2_C_Setup::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_Setup, CallFunc_Less_IntInt_ReturnValue) == 0x0000AC, "Member 'MapWidget_VisitedMapList2_C_Setup::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_Setup, CallFunc_Add_IntInt_ReturnValue_3) == 0x0000B0, "Member 'MapWidget_VisitedMapList2_C_Setup::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");

// Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.PageChange
// 0x0090 (0x0090 - 0x0000)
struct MapWidget_VisitedMapList2_C_PageChange final
{
public:
	int32                                         Page;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LoopEnd;                                           // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ChangeIndex;                                       // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7120[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;               // 0x0030(0x0010)(ReferenceParm, ContainsInstancedReference)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7121[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_Array_Get_Item;                           // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7122[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapWidget_VisitedMapList2Item_C*       K2Node_DynamicCast_AsMap_Widget_Visited_Map_List_2Item; // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7123[0x2];                                     // 0x0062(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetViewCount_ReturnValue;                 // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetViewCount_ReturnValue_1;               // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7124[0x3];                                     // 0x006D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7125[0x3];                                     // 0x007D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Min_ReturnValue;                          // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_2;            // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_VisitedMapList2_C_PageChange) == 0x000008, "Wrong alignment on MapWidget_VisitedMapList2_C_PageChange");
static_assert(sizeof(MapWidget_VisitedMapList2_C_PageChange) == 0x000090, "Wrong size on MapWidget_VisitedMapList2_C_PageChange");
static_assert(offsetof(MapWidget_VisitedMapList2_C_PageChange, Page) == 0x000000, "Member 'MapWidget_VisitedMapList2_C_PageChange::Page' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_PageChange, LoopEnd) == 0x000004, "Member 'MapWidget_VisitedMapList2_C_PageChange::LoopEnd' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_PageChange, ChangeIndex) == 0x000008, "Member 'MapWidget_VisitedMapList2_C_PageChange::ChangeIndex' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_PageChange, Temp_int_Array_Index_Variable) == 0x00000C, "Member 'MapWidget_VisitedMapList2_C_PageChange::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_PageChange, CallFunc_Subtract_IntInt_ReturnValue) == 0x000010, "Member 'MapWidget_VisitedMapList2_C_PageChange::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_PageChange, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'MapWidget_VisitedMapList2_C_PageChange::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_PageChange, Temp_int_Variable) == 0x000018, "Member 'MapWidget_VisitedMapList2_C_PageChange::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_PageChange, CallFunc_Add_IntInt_ReturnValue) == 0x00001C, "Member 'MapWidget_VisitedMapList2_C_PageChange::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_PageChange, CallFunc_Add_IntInt_ReturnValue_1) == 0x000020, "Member 'MapWidget_VisitedMapList2_C_PageChange::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_PageChange, CallFunc_GetChildAt_ReturnValue) == 0x000028, "Member 'MapWidget_VisitedMapList2_C_PageChange::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_PageChange, CallFunc_GetAllChildren_ReturnValue) == 0x000030, "Member 'MapWidget_VisitedMapList2_C_PageChange::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_PageChange, CallFunc_IsValid_ReturnValue) == 0x000040, "Member 'MapWidget_VisitedMapList2_C_PageChange::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_PageChange, CallFunc_Array_Get_Item) == 0x000048, "Member 'MapWidget_VisitedMapList2_C_PageChange::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_PageChange, CallFunc_Array_Length_ReturnValue) == 0x000050, "Member 'MapWidget_VisitedMapList2_C_PageChange::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_PageChange, K2Node_DynamicCast_AsMap_Widget_Visited_Map_List_2Item) == 0x000058, "Member 'MapWidget_VisitedMapList2_C_PageChange::K2Node_DynamicCast_AsMap_Widget_Visited_Map_List_2Item' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_PageChange, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'MapWidget_VisitedMapList2_C_PageChange::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_PageChange, CallFunc_Less_IntInt_ReturnValue) == 0x000061, "Member 'MapWidget_VisitedMapList2_C_PageChange::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_PageChange, CallFunc_GetViewCount_ReturnValue) == 0x000064, "Member 'MapWidget_VisitedMapList2_C_PageChange::CallFunc_GetViewCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_PageChange, CallFunc_GetViewCount_ReturnValue_1) == 0x000068, "Member 'MapWidget_VisitedMapList2_C_PageChange::CallFunc_GetViewCount_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_PageChange, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00006C, "Member 'MapWidget_VisitedMapList2_C_PageChange::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_PageChange, CallFunc_Multiply_IntInt_ReturnValue) == 0x000070, "Member 'MapWidget_VisitedMapList2_C_PageChange::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_PageChange, CallFunc_Add_IntInt_ReturnValue_2) == 0x000074, "Member 'MapWidget_VisitedMapList2_C_PageChange::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_PageChange, CallFunc_Array_Length_ReturnValue_1) == 0x000078, "Member 'MapWidget_VisitedMapList2_C_PageChange::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_PageChange, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x00007C, "Member 'MapWidget_VisitedMapList2_C_PageChange::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_PageChange, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000080, "Member 'MapWidget_VisitedMapList2_C_PageChange::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_PageChange, CallFunc_Min_ReturnValue) == 0x000084, "Member 'MapWidget_VisitedMapList2_C_PageChange::CallFunc_Min_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_PageChange, CallFunc_Subtract_IntInt_ReturnValue_2) == 0x000088, "Member 'MapWidget_VisitedMapList2_C_PageChange::CallFunc_Subtract_IntInt_ReturnValue_2' has a wrong offset!");

// Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.ChangeFaceImageTexture
// 0x0050 (0x0050 - 0x0000)
struct MapWidget_VisitedMapList2_C_ChangeFaceImageTexture final
{
public:
	class UTexture2DDynamic*                      Texture;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7126[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;               // 0x0018(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7127[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7128[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapWidget_VisitedMapList2Item_C*       K2Node_DynamicCast_AsMap_Widget_Visited_Map_List_2Item; // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_VisitedMapList2_C_ChangeFaceImageTexture) == 0x000008, "Wrong alignment on MapWidget_VisitedMapList2_C_ChangeFaceImageTexture");
static_assert(sizeof(MapWidget_VisitedMapList2_C_ChangeFaceImageTexture) == 0x000050, "Wrong size on MapWidget_VisitedMapList2_C_ChangeFaceImageTexture");
static_assert(offsetof(MapWidget_VisitedMapList2_C_ChangeFaceImageTexture, Texture) == 0x000000, "Member 'MapWidget_VisitedMapList2_C_ChangeFaceImageTexture::Texture' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_ChangeFaceImageTexture, Temp_int_Array_Index_Variable) == 0x000008, "Member 'MapWidget_VisitedMapList2_C_ChangeFaceImageTexture::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_ChangeFaceImageTexture, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'MapWidget_VisitedMapList2_C_ChangeFaceImageTexture::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_ChangeFaceImageTexture, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'MapWidget_VisitedMapList2_C_ChangeFaceImageTexture::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_ChangeFaceImageTexture, CallFunc_GetAllChildren_ReturnValue) == 0x000018, "Member 'MapWidget_VisitedMapList2_C_ChangeFaceImageTexture::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_ChangeFaceImageTexture, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'MapWidget_VisitedMapList2_C_ChangeFaceImageTexture::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_ChangeFaceImageTexture, CallFunc_Array_Get_Item) == 0x000030, "Member 'MapWidget_VisitedMapList2_C_ChangeFaceImageTexture::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_ChangeFaceImageTexture, CallFunc_Less_IntInt_ReturnValue) == 0x000038, "Member 'MapWidget_VisitedMapList2_C_ChangeFaceImageTexture::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_ChangeFaceImageTexture, K2Node_DynamicCast_AsMap_Widget_Visited_Map_List_2Item) == 0x000040, "Member 'MapWidget_VisitedMapList2_C_ChangeFaceImageTexture::K2Node_DynamicCast_AsMap_Widget_Visited_Map_List_2Item' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_ChangeFaceImageTexture, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'MapWidget_VisitedMapList2_C_ChangeFaceImageTexture::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.GetViewCount
// 0x0008 (0x0008 - 0x0000)
struct MapWidget_VisitedMapList2_C_GetViewCount final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_VisitedMapList2_C_GetViewCount) == 0x000004, "Wrong alignment on MapWidget_VisitedMapList2_C_GetViewCount");
static_assert(sizeof(MapWidget_VisitedMapList2_C_GetViewCount) == 0x000008, "Wrong size on MapWidget_VisitedMapList2_C_GetViewCount");
static_assert(offsetof(MapWidget_VisitedMapList2_C_GetViewCount, ReturnValue) == 0x000000, "Member 'MapWidget_VisitedMapList2_C_GetViewCount::ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2_C_GetViewCount, CallFunc_GetChildrenCount_ReturnValue) == 0x000004, "Member 'MapWidget_VisitedMapList2_C_GetViewCount::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");

}

