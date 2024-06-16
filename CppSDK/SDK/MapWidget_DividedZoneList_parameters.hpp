#pragma once

 

// Package: MapWidget_DividedZoneList

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function MapWidget_DividedZoneList.MapWidget_DividedZoneList_C.OnListItemClicked__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct MapWidget_DividedZoneList_C_OnListItemClicked__DelegateSignature final
{
public:
	class FString                                 InDividedZoneId;                                   // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_DividedZoneList_C_OnListItemClicked__DelegateSignature) == 0x000008, "Wrong alignment on MapWidget_DividedZoneList_C_OnListItemClicked__DelegateSignature");
static_assert(sizeof(MapWidget_DividedZoneList_C_OnListItemClicked__DelegateSignature) == 0x000010, "Wrong size on MapWidget_DividedZoneList_C_OnListItemClicked__DelegateSignature");
static_assert(offsetof(MapWidget_DividedZoneList_C_OnListItemClicked__DelegateSignature, InDividedZoneId) == 0x000000, "Member 'MapWidget_DividedZoneList_C_OnListItemClicked__DelegateSignature::InDividedZoneId' has a wrong offset!");

// Function MapWidget_DividedZoneList.MapWidget_DividedZoneList_C.ExecuteUbergraph_MapWidget_DividedZoneList
// 0x00D8 (0x00D8 - 0x0000)
struct MapWidget_DividedZoneList_C_ExecuteUbergraph_MapWidget_DividedZoneList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7FEE[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UMapWidget_DividedZoneListItem_C* InSelf, const class FString& InDividedZoneId)> K2Node_CreateDelegate_OutputDelegate;              // 0x001C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7FEF[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UMapWidget_DividedZoneListItem_C* InSelf, const class FString& InDividedZoneId)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0038(0x0010)(ZeroConstructor, NoDestructor)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7FF0[0x3];                                     // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7FF1[0x3];                                     // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapWidget_DividedZoneListItem_C*       K2Node_DynamicCast_AsMap_Widget_Divided_Zone_List_Item; // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7FF2[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapWidget_DividedZoneListItem_C*       K2Node_CustomEvent_InSelf;                         // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_CustomEvent_InDividedZoneId;                // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7FF3[0x3];                                     // 0x008D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue_1;                 // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue_1;           // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7FF4[0x3];                                     // 0x009D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_2;            // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7FF5[0x3];                                     // 0x00A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapWidget_DividedZoneListItem_C*       K2Node_DynamicCast_AsMap_Widget_Divided_Zone_List_Item_1; // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7FF6[0x3];                                     // 0x00B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_3;                               // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_2;           // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7FF7[0x2];                                     // 0x00BA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMapWidget_DividedZoneListItem_C*       CallFunc_Create_ReturnValue;                       // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUniformGridSlot*                       CallFunc_AddChildToUniformGrid_ReturnValue;        // 0x00C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUniformGridSlot*                       CallFunc_AddChildToUniformGrid_ReturnValue_1;      // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_DividedZoneList_C_ExecuteUbergraph_MapWidget_DividedZoneList) == 0x000008, "Wrong alignment on MapWidget_DividedZoneList_C_ExecuteUbergraph_MapWidget_DividedZoneList");
static_assert(sizeof(MapWidget_DividedZoneList_C_ExecuteUbergraph_MapWidget_DividedZoneList) == 0x0000D8, "Wrong size on MapWidget_DividedZoneList_C_ExecuteUbergraph_MapWidget_DividedZoneList");
static_assert(offsetof(MapWidget_DividedZoneList_C_ExecuteUbergraph_MapWidget_DividedZoneList, EntryPoint) == 0x000000, "Member 'MapWidget_DividedZoneList_C_ExecuteUbergraph_MapWidget_DividedZoneList::EntryPoint' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneList_C_ExecuteUbergraph_MapWidget_DividedZoneList, Temp_int_Variable) == 0x000004, "Member 'MapWidget_DividedZoneList_C_ExecuteUbergraph_MapWidget_DividedZoneList::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneList_C_ExecuteUbergraph_MapWidget_DividedZoneList, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'MapWidget_DividedZoneList_C_ExecuteUbergraph_MapWidget_DividedZoneList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneList_C_ExecuteUbergraph_MapWidget_DividedZoneList, Temp_int_Variable_1) == 0x00000C, "Member 'MapWidget_DividedZoneList_C_ExecuteUbergraph_MapWidget_DividedZoneList::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneList_C_ExecuteUbergraph_MapWidget_DividedZoneList, CallFunc_Add_IntInt_ReturnValue_1) == 0x000010, "Member 'MapWidget_DividedZoneList_C_ExecuteUbergraph_MapWidget_DividedZoneList::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneList_C_ExecuteUbergraph_MapWidget_DividedZoneList, K2Node_Event_IsDesignTime) == 0x000014, "Member 'MapWidget_DividedZoneList_C_ExecuteUbergraph_MapWidget_DividedZoneList::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneList_C_ExecuteUbergraph_MapWidget_DividedZoneList, CallFunc_Subtract_IntInt_ReturnValue) == 0x000018, "Member 'MapWidget_DividedZoneList_C_ExecuteUbergraph_MapWidget_DividedZoneList::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneList_C_ExecuteUbergraph_MapWidget_DividedZoneList, K2Node_CreateDelegate_OutputDelegate) == 0x00001C, "Member 'MapWidget_DividedZoneList_C_ExecuteUbergraph_MapWidget_DividedZoneList::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneList_C_ExecuteUbergraph_MapWidget_DividedZoneList, CallFunc_Less_IntInt_ReturnValue) == 0x00002C, "Member 'MapWidget_DividedZoneList_C_ExecuteUbergraph_MapWidget_DividedZoneList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneList_C_ExecuteUbergraph_MapWidget_DividedZoneList, CallFunc_Percent_IntInt_ReturnValue) == 0x000030, "Member 'MapWidget_DividedZoneList_C_ExecuteUbergraph_MapWidget_DividedZoneList::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneList_C_ExecuteUbergraph_MapWidget_DividedZoneList, Temp_int_Variable_2) == 0x000034, "Member 'MapWidget_DividedZoneList_C_ExecuteUbergraph_MapWidget_DividedZoneList::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneList_C_ExecuteUbergraph_MapWidget_DividedZoneList, K2Node_CreateDelegate_OutputDelegate_1) == 0x000038, "Member 'MapWidget_DividedZoneList_C_ExecuteUbergraph_MapWidget_DividedZoneList::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneList_C_ExecuteUbergraph_MapWidget_DividedZoneList, CallFunc_GetChildAt_ReturnValue) == 0x000048, "Member 'MapWidget_DividedZoneList_C_ExecuteUbergraph_MapWidget_DividedZoneList::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneList_C_ExecuteUbergraph_MapWidget_DividedZoneList, CallFunc_GetChildrenCount_ReturnValue) == 0x000050, "Member 'MapWidget_DividedZoneList_C_ExecuteUbergraph_MapWidget_DividedZoneList::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneList_C_ExecuteUbergraph_MapWidget_DividedZoneList, CallFunc_IsValid_ReturnValue) == 0x000054, "Member 'MapWidget_DividedZoneList_C_ExecuteUbergraph_MapWidget_DividedZoneList::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneList_C_ExecuteUbergraph_MapWidget_DividedZoneList, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000058, "Member 'MapWidget_DividedZoneList_C_ExecuteUbergraph_MapWidget_DividedZoneList::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneList_C_ExecuteUbergraph_MapWidget_DividedZoneList, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00005C, "Member 'MapWidget_DividedZoneList_C_ExecuteUbergraph_MapWidget_DividedZoneList::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneList_C_ExecuteUbergraph_MapWidget_DividedZoneList, K2Node_DynamicCast_AsMap_Widget_Divided_Zone_List_Item) == 0x000060, "Member 'MapWidget_DividedZoneList_C_ExecuteUbergraph_MapWidget_DividedZoneList::K2Node_DynamicCast_AsMap_Widget_Divided_Zone_List_Item' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneList_C_ExecuteUbergraph_MapWidget_DividedZoneList, K2Node_DynamicCast_bSuccess) == 0x000068, "Member 'MapWidget_DividedZoneList_C_ExecuteUbergraph_MapWidget_DividedZoneList::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneList_C_ExecuteUbergraph_MapWidget_DividedZoneList, K2Node_CustomEvent_InSelf) == 0x000070, "Member 'MapWidget_DividedZoneList_C_ExecuteUbergraph_MapWidget_DividedZoneList::K2Node_CustomEvent_InSelf' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneList_C_ExecuteUbergraph_MapWidget_DividedZoneList, K2Node_CustomEvent_InDividedZoneId) == 0x000078, "Member 'MapWidget_DividedZoneList_C_ExecuteUbergraph_MapWidget_DividedZoneList::K2Node_CustomEvent_InDividedZoneId' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneList_C_ExecuteUbergraph_MapWidget_DividedZoneList, CallFunc_Divide_IntInt_ReturnValue) == 0x000088, "Member 'MapWidget_DividedZoneList_C_ExecuteUbergraph_MapWidget_DividedZoneList::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneList_C_ExecuteUbergraph_MapWidget_DividedZoneList, CallFunc_IsValid_ReturnValue_1) == 0x00008C, "Member 'MapWidget_DividedZoneList_C_ExecuteUbergraph_MapWidget_DividedZoneList::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneList_C_ExecuteUbergraph_MapWidget_DividedZoneList, CallFunc_GetChildAt_ReturnValue_1) == 0x000090, "Member 'MapWidget_DividedZoneList_C_ExecuteUbergraph_MapWidget_DividedZoneList::CallFunc_GetChildAt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneList_C_ExecuteUbergraph_MapWidget_DividedZoneList, CallFunc_GetChildrenCount_ReturnValue_1) == 0x000098, "Member 'MapWidget_DividedZoneList_C_ExecuteUbergraph_MapWidget_DividedZoneList::CallFunc_GetChildrenCount_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneList_C_ExecuteUbergraph_MapWidget_DividedZoneList, CallFunc_IsValid_ReturnValue_2) == 0x00009C, "Member 'MapWidget_DividedZoneList_C_ExecuteUbergraph_MapWidget_DividedZoneList::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneList_C_ExecuteUbergraph_MapWidget_DividedZoneList, CallFunc_Subtract_IntInt_ReturnValue_2) == 0x0000A0, "Member 'MapWidget_DividedZoneList_C_ExecuteUbergraph_MapWidget_DividedZoneList::CallFunc_Subtract_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneList_C_ExecuteUbergraph_MapWidget_DividedZoneList, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x0000A4, "Member 'MapWidget_DividedZoneList_C_ExecuteUbergraph_MapWidget_DividedZoneList::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneList_C_ExecuteUbergraph_MapWidget_DividedZoneList, K2Node_DynamicCast_AsMap_Widget_Divided_Zone_List_Item_1) == 0x0000A8, "Member 'MapWidget_DividedZoneList_C_ExecuteUbergraph_MapWidget_DividedZoneList::K2Node_DynamicCast_AsMap_Widget_Divided_Zone_List_Item_1' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneList_C_ExecuteUbergraph_MapWidget_DividedZoneList, K2Node_DynamicCast_bSuccess_1) == 0x0000B0, "Member 'MapWidget_DividedZoneList_C_ExecuteUbergraph_MapWidget_DividedZoneList::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneList_C_ExecuteUbergraph_MapWidget_DividedZoneList, Temp_int_Variable_3) == 0x0000B4, "Member 'MapWidget_DividedZoneList_C_ExecuteUbergraph_MapWidget_DividedZoneList::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneList_C_ExecuteUbergraph_MapWidget_DividedZoneList, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x0000B8, "Member 'MapWidget_DividedZoneList_C_ExecuteUbergraph_MapWidget_DividedZoneList::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneList_C_ExecuteUbergraph_MapWidget_DividedZoneList, CallFunc_LessEqual_IntInt_ReturnValue_2) == 0x0000B9, "Member 'MapWidget_DividedZoneList_C_ExecuteUbergraph_MapWidget_DividedZoneList::CallFunc_LessEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneList_C_ExecuteUbergraph_MapWidget_DividedZoneList, CallFunc_Add_IntInt_ReturnValue_2) == 0x0000BC, "Member 'MapWidget_DividedZoneList_C_ExecuteUbergraph_MapWidget_DividedZoneList::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneList_C_ExecuteUbergraph_MapWidget_DividedZoneList, CallFunc_Create_ReturnValue) == 0x0000C0, "Member 'MapWidget_DividedZoneList_C_ExecuteUbergraph_MapWidget_DividedZoneList::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneList_C_ExecuteUbergraph_MapWidget_DividedZoneList, CallFunc_AddChildToUniformGrid_ReturnValue) == 0x0000C8, "Member 'MapWidget_DividedZoneList_C_ExecuteUbergraph_MapWidget_DividedZoneList::CallFunc_AddChildToUniformGrid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneList_C_ExecuteUbergraph_MapWidget_DividedZoneList, CallFunc_AddChildToUniformGrid_ReturnValue_1) == 0x0000D0, "Member 'MapWidget_DividedZoneList_C_ExecuteUbergraph_MapWidget_DividedZoneList::CallFunc_AddChildToUniformGrid_ReturnValue_1' has a wrong offset!");

// Function MapWidget_DividedZoneList.MapWidget_DividedZoneList_C.OnListItemClickedEvent
// 0x0018 (0x0018 - 0x0000)
struct MapWidget_DividedZoneList_C_OnListItemClickedEvent final
{
public:
	class UMapWidget_DividedZoneListItem_C*       InSelf;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 InDividedZoneId;                                   // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_DividedZoneList_C_OnListItemClickedEvent) == 0x000008, "Wrong alignment on MapWidget_DividedZoneList_C_OnListItemClickedEvent");
static_assert(sizeof(MapWidget_DividedZoneList_C_OnListItemClickedEvent) == 0x000018, "Wrong size on MapWidget_DividedZoneList_C_OnListItemClickedEvent");
static_assert(offsetof(MapWidget_DividedZoneList_C_OnListItemClickedEvent, InSelf) == 0x000000, "Member 'MapWidget_DividedZoneList_C_OnListItemClickedEvent::InSelf' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneList_C_OnListItemClickedEvent, InDividedZoneId) == 0x000008, "Member 'MapWidget_DividedZoneList_C_OnListItemClickedEvent::InDividedZoneId' has a wrong offset!");

// Function MapWidget_DividedZoneList.MapWidget_DividedZoneList_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct MapWidget_DividedZoneList_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_DividedZoneList_C_PreConstruct) == 0x000001, "Wrong alignment on MapWidget_DividedZoneList_C_PreConstruct");
static_assert(sizeof(MapWidget_DividedZoneList_C_PreConstruct) == 0x000001, "Wrong size on MapWidget_DividedZoneList_C_PreConstruct");
static_assert(offsetof(MapWidget_DividedZoneList_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'MapWidget_DividedZoneList_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function MapWidget_DividedZoneList.MapWidget_DividedZoneList_C.Setup
// 0x01E8 (0x01E8 - 0x0000)
struct MapWidget_DividedZoneList_C_Setup final
{
public:
	class FString                                 InMapId;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TArray<class FString>                         InVisitedZoneIds;                                  // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UMapWidget_DividedZoneListItem_C*       LocalZoneListItem;                                 // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalZoneIdCnt;                                    // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7FF8[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 LocalZoneId;                                       // 0x0030(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	TArray<class FName>                           LocalMapBGConfigRowNames;                          // 0x0040(0x0010)(Edit, BlueprintVisible)
	bool                                          Temp_bool_Variable;                                // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7FF9[0x2];                                     // 0x0052(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7FFA[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMapBGConfigTableRow                 CallFunc_FindMapBGConfigDB_OutMapBGConfigTableRow; // 0x0070(0x0078)()
	bool                                          CallFunc_FindMapBGConfigDB_ReturnValue;            // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7FFB[0x6];                                     // 0x00EA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x00F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class FName>                           CallFunc_GetMapBGConfigRowNames_ReturnValue;       // 0x0100(0x0010)(ReferenceParm)
	int32                                         Temp_int_Variable;                                 // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7FFC[0x3];                                     // 0x0119(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7FFD[0x3];                                     // 0x0121(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default;                             // 0x0129(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7FFE[0x2];                                     // 0x012A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0130(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue_1;                 // 0x0138(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0141(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7FFF[0x6];                                     // 0x0142(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapWidget_DividedZoneListItem_C*       K2Node_DynamicCast_AsMap_Widget_Divided_Zone_List_Item; // 0x0148(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8000[0x3];                                     // 0x0151(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x015C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8001[0x3];                                     // 0x015D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Left_ReturnValue;                         // 0x0160(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Left_ReturnValue_1;                       // 0x0170(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Contains_ReturnValue;                     // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x0181(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8002[0x6];                                     // 0x0182(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetMapSymbolIconTextureByMapId_OutIconTexture; // 0x0188(0x0028)(HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8003[0x3];                                     // 0x01B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x01B4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8004[0x4];                                     // 0x01BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetZoneShortNameByZoneId_ReturnValue;     // 0x01C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x01D0(0x0018)()
};
static_assert(alignof(MapWidget_DividedZoneList_C_Setup) == 0x000008, "Wrong alignment on MapWidget_DividedZoneList_C_Setup");
static_assert(sizeof(MapWidget_DividedZoneList_C_Setup) == 0x0001E8, "Wrong size on MapWidget_DividedZoneList_C_Setup");
static_assert(offsetof(MapWidget_DividedZoneList_C_Setup, InMapId) == 0x000000, "Member 'MapWidget_DividedZoneList_C_Setup::InMapId' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneList_C_Setup, InVisitedZoneIds) == 0x000010, "Member 'MapWidget_DividedZoneList_C_Setup::InVisitedZoneIds' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneList_C_Setup, LocalZoneListItem) == 0x000020, "Member 'MapWidget_DividedZoneList_C_Setup::LocalZoneListItem' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneList_C_Setup, LocalZoneIdCnt) == 0x000028, "Member 'MapWidget_DividedZoneList_C_Setup::LocalZoneIdCnt' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneList_C_Setup, LocalZoneId) == 0x000030, "Member 'MapWidget_DividedZoneList_C_Setup::LocalZoneId' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneList_C_Setup, LocalMapBGConfigRowNames) == 0x000040, "Member 'MapWidget_DividedZoneList_C_Setup::LocalMapBGConfigRowNames' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneList_C_Setup, Temp_bool_Variable) == 0x000050, "Member 'MapWidget_DividedZoneList_C_Setup::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneList_C_Setup, Temp_bool_Variable_1) == 0x000051, "Member 'MapWidget_DividedZoneList_C_Setup::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneList_C_Setup, Temp_int_Loop_Counter_Variable) == 0x000054, "Member 'MapWidget_DividedZoneList_C_Setup::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneList_C_Setup, CallFunc_Add_IntInt_ReturnValue) == 0x000058, "Member 'MapWidget_DividedZoneList_C_Setup::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneList_C_Setup, Temp_int_Array_Index_Variable) == 0x00005C, "Member 'MapWidget_DividedZoneList_C_Setup::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneList_C_Setup, CallFunc_Array_Get_Item) == 0x000060, "Member 'MapWidget_DividedZoneList_C_Setup::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneList_C_Setup, CallFunc_Array_Length_ReturnValue) == 0x000068, "Member 'MapWidget_DividedZoneList_C_Setup::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneList_C_Setup, CallFunc_FindMapBGConfigDB_OutMapBGConfigTableRow) == 0x000070, "Member 'MapWidget_DividedZoneList_C_Setup::CallFunc_FindMapBGConfigDB_OutMapBGConfigTableRow' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneList_C_Setup, CallFunc_FindMapBGConfigDB_ReturnValue) == 0x0000E8, "Member 'MapWidget_DividedZoneList_C_Setup::CallFunc_FindMapBGConfigDB_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneList_C_Setup, CallFunc_Less_IntInt_ReturnValue) == 0x0000E9, "Member 'MapWidget_DividedZoneList_C_Setup::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneList_C_Setup, CallFunc_Conv_NameToString_ReturnValue) == 0x0000F0, "Member 'MapWidget_DividedZoneList_C_Setup::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneList_C_Setup, CallFunc_GetMapBGConfigRowNames_ReturnValue) == 0x000100, "Member 'MapWidget_DividedZoneList_C_Setup::CallFunc_GetMapBGConfigRowNames_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneList_C_Setup, Temp_int_Variable) == 0x000110, "Member 'MapWidget_DividedZoneList_C_Setup::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneList_C_Setup, CallFunc_Add_IntInt_ReturnValue_1) == 0x000114, "Member 'MapWidget_DividedZoneList_C_Setup::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneList_C_Setup, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000118, "Member 'MapWidget_DividedZoneList_C_Setup::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneList_C_Setup, CallFunc_Array_Find_ReturnValue) == 0x00011C, "Member 'MapWidget_DividedZoneList_C_Setup::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneList_C_Setup, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000120, "Member 'MapWidget_DividedZoneList_C_Setup::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneList_C_Setup, CallFunc_Add_IntInt_ReturnValue_2) == 0x000124, "Member 'MapWidget_DividedZoneList_C_Setup::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneList_C_Setup, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000128, "Member 'MapWidget_DividedZoneList_C_Setup::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneList_C_Setup, K2Node_Select_Default) == 0x000129, "Member 'MapWidget_DividedZoneList_C_Setup::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneList_C_Setup, Temp_int_Variable_1) == 0x00012C, "Member 'MapWidget_DividedZoneList_C_Setup::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneList_C_Setup, CallFunc_GetChildAt_ReturnValue) == 0x000130, "Member 'MapWidget_DividedZoneList_C_Setup::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneList_C_Setup, CallFunc_GetChildAt_ReturnValue_1) == 0x000138, "Member 'MapWidget_DividedZoneList_C_Setup::CallFunc_GetChildAt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneList_C_Setup, CallFunc_IsValid_ReturnValue) == 0x000140, "Member 'MapWidget_DividedZoneList_C_Setup::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneList_C_Setup, CallFunc_IsValid_ReturnValue_1) == 0x000141, "Member 'MapWidget_DividedZoneList_C_Setup::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneList_C_Setup, K2Node_DynamicCast_AsMap_Widget_Divided_Zone_List_Item) == 0x000148, "Member 'MapWidget_DividedZoneList_C_Setup::K2Node_DynamicCast_AsMap_Widget_Divided_Zone_List_Item' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneList_C_Setup, K2Node_DynamicCast_bSuccess) == 0x000150, "Member 'MapWidget_DividedZoneList_C_Setup::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneList_C_Setup, CallFunc_GetChildrenCount_ReturnValue) == 0x000154, "Member 'MapWidget_DividedZoneList_C_Setup::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneList_C_Setup, CallFunc_Subtract_IntInt_ReturnValue) == 0x000158, "Member 'MapWidget_DividedZoneList_C_Setup::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneList_C_Setup, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00015C, "Member 'MapWidget_DividedZoneList_C_Setup::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneList_C_Setup, CallFunc_Left_ReturnValue) == 0x000160, "Member 'MapWidget_DividedZoneList_C_Setup::CallFunc_Left_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneList_C_Setup, CallFunc_Left_ReturnValue_1) == 0x000170, "Member 'MapWidget_DividedZoneList_C_Setup::CallFunc_Left_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneList_C_Setup, CallFunc_Contains_ReturnValue) == 0x000180, "Member 'MapWidget_DividedZoneList_C_Setup::CallFunc_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneList_C_Setup, CallFunc_NotEqual_StrStr_ReturnValue) == 0x000181, "Member 'MapWidget_DividedZoneList_C_Setup::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneList_C_Setup, CallFunc_GetMapSymbolIconTextureByMapId_OutIconTexture) == 0x000188, "Member 'MapWidget_DividedZoneList_C_Setup::CallFunc_GetMapSymbolIconTextureByMapId_OutIconTexture' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneList_C_Setup, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x0001B0, "Member 'MapWidget_DividedZoneList_C_Setup::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneList_C_Setup, CallFunc_Conv_StringToName_ReturnValue) == 0x0001B4, "Member 'MapWidget_DividedZoneList_C_Setup::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneList_C_Setup, CallFunc_GetZoneShortNameByZoneId_ReturnValue) == 0x0001C0, "Member 'MapWidget_DividedZoneList_C_Setup::CallFunc_GetZoneShortNameByZoneId_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_DividedZoneList_C_Setup, CallFunc_Conv_StringToText_ReturnValue) == 0x0001D0, "Member 'MapWidget_DividedZoneList_C_Setup::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

}

