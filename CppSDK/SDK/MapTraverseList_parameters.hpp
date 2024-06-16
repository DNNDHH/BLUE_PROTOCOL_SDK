#pragma once

 

// Package: MapTraverseList

#include "Basic.hpp"


namespace SDK::Params
{

// Function MapTraverseList.MapTraverseList_C.Setup
// 0x0060 (0x0060 - 0x0000)
struct MapTraverseList_C_Setup final
{
public:
	TArray<class FString>                         TraverseList;                                      // 0x0000(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5335[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTextBlock_C*                           CallFunc_Create_ReturnValue;                       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Array_Get_Item;                           // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5336[0x3];                                     // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBCharacterData*                       CallFunc_GetCharacterData_ReturnValue;             // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         CallFunc_GetTraverse_ReturnValue;                  // 0x0050(0x0010)(ConstParm, ReferenceParm)
};
static_assert(alignof(MapTraverseList_C_Setup) == 0x000008, "Wrong alignment on MapTraverseList_C_Setup");
static_assert(sizeof(MapTraverseList_C_Setup) == 0x000060, "Wrong size on MapTraverseList_C_Setup");
static_assert(offsetof(MapTraverseList_C_Setup, TraverseList) == 0x000000, "Member 'MapTraverseList_C_Setup::TraverseList' has a wrong offset!");
static_assert(offsetof(MapTraverseList_C_Setup, Temp_int_Array_Index_Variable) == 0x000010, "Member 'MapTraverseList_C_Setup::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MapTraverseList_C_Setup, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'MapTraverseList_C_Setup::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MapTraverseList_C_Setup, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'MapTraverseList_C_Setup::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapTraverseList_C_Setup, CallFunc_Create_ReturnValue) == 0x000020, "Member 'MapTraverseList_C_Setup::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapTraverseList_C_Setup, CallFunc_AddChild_ReturnValue) == 0x000028, "Member 'MapTraverseList_C_Setup::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapTraverseList_C_Setup, CallFunc_Array_Get_Item) == 0x000030, "Member 'MapTraverseList_C_Setup::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MapTraverseList_C_Setup, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'MapTraverseList_C_Setup::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapTraverseList_C_Setup, CallFunc_Less_IntInt_ReturnValue) == 0x000044, "Member 'MapTraverseList_C_Setup::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapTraverseList_C_Setup, CallFunc_GetCharacterData_ReturnValue) == 0x000048, "Member 'MapTraverseList_C_Setup::CallFunc_GetCharacterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapTraverseList_C_Setup, CallFunc_GetTraverse_ReturnValue) == 0x000050, "Member 'MapTraverseList_C_Setup::CallFunc_GetTraverse_ReturnValue' has a wrong offset!");

}

