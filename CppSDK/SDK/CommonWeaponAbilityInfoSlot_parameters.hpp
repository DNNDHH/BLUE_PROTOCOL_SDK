#pragma once

 

// Package: CommonWeaponAbilityInfoSlot

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function CommonWeaponAbilityInfoSlot.CommonWeaponAbilityInfoSlot_C.ExecuteUbergraph_CommonWeaponAbilityInfoSlot
// 0x0018 (0x0018 - 0x0000)
struct CommonWeaponAbilityInfoSlot_C_ExecuteUbergraph_CommonWeaponAbilityInfoSlot final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79F6[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UImage*>                         K2Node_MakeArray_Array;                            // 0x0008(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(CommonWeaponAbilityInfoSlot_C_ExecuteUbergraph_CommonWeaponAbilityInfoSlot) == 0x000008, "Wrong alignment on CommonWeaponAbilityInfoSlot_C_ExecuteUbergraph_CommonWeaponAbilityInfoSlot");
static_assert(sizeof(CommonWeaponAbilityInfoSlot_C_ExecuteUbergraph_CommonWeaponAbilityInfoSlot) == 0x000018, "Wrong size on CommonWeaponAbilityInfoSlot_C_ExecuteUbergraph_CommonWeaponAbilityInfoSlot");
static_assert(offsetof(CommonWeaponAbilityInfoSlot_C_ExecuteUbergraph_CommonWeaponAbilityInfoSlot, EntryPoint) == 0x000000, "Member 'CommonWeaponAbilityInfoSlot_C_ExecuteUbergraph_CommonWeaponAbilityInfoSlot::EntryPoint' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlot_C_ExecuteUbergraph_CommonWeaponAbilityInfoSlot, K2Node_Event_IsDesignTime) == 0x000004, "Member 'CommonWeaponAbilityInfoSlot_C_ExecuteUbergraph_CommonWeaponAbilityInfoSlot::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlot_C_ExecuteUbergraph_CommonWeaponAbilityInfoSlot, K2Node_MakeArray_Array) == 0x000008, "Member 'CommonWeaponAbilityInfoSlot_C_ExecuteUbergraph_CommonWeaponAbilityInfoSlot::K2Node_MakeArray_Array' has a wrong offset!");

// Function CommonWeaponAbilityInfoSlot.CommonWeaponAbilityInfoSlot_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct CommonWeaponAbilityInfoSlot_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonWeaponAbilityInfoSlot_C_PreConstruct) == 0x000001, "Wrong alignment on CommonWeaponAbilityInfoSlot_C_PreConstruct");
static_assert(sizeof(CommonWeaponAbilityInfoSlot_C_PreConstruct) == 0x000001, "Wrong size on CommonWeaponAbilityInfoSlot_C_PreConstruct");
static_assert(offsetof(CommonWeaponAbilityInfoSlot_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'CommonWeaponAbilityInfoSlot_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function CommonWeaponAbilityInfoSlot.CommonWeaponAbilityInfoSlot_C.SetIsSlotEmpty
// 0x00B0 (0x00B0 - 0x0000)
struct CommonWeaponAbilityInfoSlot_C_SetIsSlotEmpty final
{
public:
	bool                                          InIsEmpty;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79F7[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWidget*>                        LocalWidgetArray;                                  // 0x0008(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	bool                                          LocalIsEmpty;                                      // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79F8[0x2];                                     // 0x001A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable;                               // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_1;                             // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79F9[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79FA[0x2];                                     // 0x0036(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79FB[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_Array_Get_Item;                           // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79FC[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UImage*>                         K2Node_MakeArray_Array;                            // 0x0058(0x0010)(ReferenceParm, ContainsInstancedReference)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79FD[0x6];                                     // 0x006A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWidget*>                        K2Node_MakeArray_Array_1;                          // 0x0070(0x0010)(ReferenceParm, ContainsInstancedReference)
	float                                         K2Node_Select_Default_1;                           // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_MakeColor_ReturnValue;                    // 0x0084(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79FE[0x4];                                     // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UImage*                                 CallFunc_Array_Get_Item_1;                         // 0x0098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00A5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79FF[0x2];                                     // 0x00A6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonWeaponAbilityInfoSlot_C_SetIsSlotEmpty) == 0x000008, "Wrong alignment on CommonWeaponAbilityInfoSlot_C_SetIsSlotEmpty");
static_assert(sizeof(CommonWeaponAbilityInfoSlot_C_SetIsSlotEmpty) == 0x0000B0, "Wrong size on CommonWeaponAbilityInfoSlot_C_SetIsSlotEmpty");
static_assert(offsetof(CommonWeaponAbilityInfoSlot_C_SetIsSlotEmpty, InIsEmpty) == 0x000000, "Member 'CommonWeaponAbilityInfoSlot_C_SetIsSlotEmpty::InIsEmpty' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlot_C_SetIsSlotEmpty, LocalWidgetArray) == 0x000008, "Member 'CommonWeaponAbilityInfoSlot_C_SetIsSlotEmpty::LocalWidgetArray' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlot_C_SetIsSlotEmpty, LocalIsEmpty) == 0x000018, "Member 'CommonWeaponAbilityInfoSlot_C_SetIsSlotEmpty::LocalIsEmpty' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlot_C_SetIsSlotEmpty, Temp_bool_Variable) == 0x000019, "Member 'CommonWeaponAbilityInfoSlot_C_SetIsSlotEmpty::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlot_C_SetIsSlotEmpty, Temp_float_Variable) == 0x00001C, "Member 'CommonWeaponAbilityInfoSlot_C_SetIsSlotEmpty::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlot_C_SetIsSlotEmpty, Temp_float_Variable_1) == 0x000020, "Member 'CommonWeaponAbilityInfoSlot_C_SetIsSlotEmpty::Temp_float_Variable_1' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlot_C_SetIsSlotEmpty, Temp_bool_Variable_1) == 0x000024, "Member 'CommonWeaponAbilityInfoSlot_C_SetIsSlotEmpty::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlot_C_SetIsSlotEmpty, Temp_int_Loop_Counter_Variable) == 0x000028, "Member 'CommonWeaponAbilityInfoSlot_C_SetIsSlotEmpty::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlot_C_SetIsSlotEmpty, CallFunc_Add_IntInt_ReturnValue) == 0x00002C, "Member 'CommonWeaponAbilityInfoSlot_C_SetIsSlotEmpty::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlot_C_SetIsSlotEmpty, CallFunc_Array_Length_ReturnValue) == 0x000030, "Member 'CommonWeaponAbilityInfoSlot_C_SetIsSlotEmpty::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlot_C_SetIsSlotEmpty, CallFunc_Less_IntInt_ReturnValue) == 0x000034, "Member 'CommonWeaponAbilityInfoSlot_C_SetIsSlotEmpty::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlot_C_SetIsSlotEmpty, Temp_byte_Variable) == 0x000035, "Member 'CommonWeaponAbilityInfoSlot_C_SetIsSlotEmpty::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlot_C_SetIsSlotEmpty, Temp_int_Array_Index_Variable) == 0x000038, "Member 'CommonWeaponAbilityInfoSlot_C_SetIsSlotEmpty::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlot_C_SetIsSlotEmpty, CallFunc_Array_Get_Item) == 0x000040, "Member 'CommonWeaponAbilityInfoSlot_C_SetIsSlotEmpty::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlot_C_SetIsSlotEmpty, CallFunc_IsValid_ReturnValue) == 0x000048, "Member 'CommonWeaponAbilityInfoSlot_C_SetIsSlotEmpty::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlot_C_SetIsSlotEmpty, Temp_int_Loop_Counter_Variable_1) == 0x00004C, "Member 'CommonWeaponAbilityInfoSlot_C_SetIsSlotEmpty::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlot_C_SetIsSlotEmpty, CallFunc_Add_IntInt_ReturnValue_1) == 0x000050, "Member 'CommonWeaponAbilityInfoSlot_C_SetIsSlotEmpty::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlot_C_SetIsSlotEmpty, Temp_int_Array_Index_Variable_1) == 0x000054, "Member 'CommonWeaponAbilityInfoSlot_C_SetIsSlotEmpty::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlot_C_SetIsSlotEmpty, K2Node_MakeArray_Array) == 0x000058, "Member 'CommonWeaponAbilityInfoSlot_C_SetIsSlotEmpty::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlot_C_SetIsSlotEmpty, Temp_byte_Variable_1) == 0x000068, "Member 'CommonWeaponAbilityInfoSlot_C_SetIsSlotEmpty::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlot_C_SetIsSlotEmpty, K2Node_Select_Default) == 0x000069, "Member 'CommonWeaponAbilityInfoSlot_C_SetIsSlotEmpty::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlot_C_SetIsSlotEmpty, K2Node_MakeArray_Array_1) == 0x000070, "Member 'CommonWeaponAbilityInfoSlot_C_SetIsSlotEmpty::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlot_C_SetIsSlotEmpty, K2Node_Select_Default_1) == 0x000080, "Member 'CommonWeaponAbilityInfoSlot_C_SetIsSlotEmpty::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlot_C_SetIsSlotEmpty, CallFunc_MakeColor_ReturnValue) == 0x000084, "Member 'CommonWeaponAbilityInfoSlot_C_SetIsSlotEmpty::CallFunc_MakeColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlot_C_SetIsSlotEmpty, CallFunc_Array_Get_Item_1) == 0x000098, "Member 'CommonWeaponAbilityInfoSlot_C_SetIsSlotEmpty::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlot_C_SetIsSlotEmpty, CallFunc_Array_Length_ReturnValue_1) == 0x0000A0, "Member 'CommonWeaponAbilityInfoSlot_C_SetIsSlotEmpty::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlot_C_SetIsSlotEmpty, CallFunc_IsValid_ReturnValue_1) == 0x0000A4, "Member 'CommonWeaponAbilityInfoSlot_C_SetIsSlotEmpty::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlot_C_SetIsSlotEmpty, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000A5, "Member 'CommonWeaponAbilityInfoSlot_C_SetIsSlotEmpty::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlot_C_SetIsSlotEmpty, CallFunc_Array_Length_ReturnValue_2) == 0x0000A8, "Member 'CommonWeaponAbilityInfoSlot_C_SetIsSlotEmpty::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlot_C_SetIsSlotEmpty, CallFunc_Greater_IntInt_ReturnValue) == 0x0000AC, "Member 'CommonWeaponAbilityInfoSlot_C_SetIsSlotEmpty::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function CommonWeaponAbilityInfoSlot.CommonWeaponAbilityInfoSlot_C.SetSlotOccupancy
// 0x0010 (0x0010 - 0x0000)
struct CommonWeaponAbilityInfoSlot_C_SetSlotOccupancy final
{
public:
	int32                                         InOccupancyNum;                                    // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A00[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonWeaponAbilityInfoSlot_C_SetSlotOccupancy) == 0x000004, "Wrong alignment on CommonWeaponAbilityInfoSlot_C_SetSlotOccupancy");
static_assert(sizeof(CommonWeaponAbilityInfoSlot_C_SetSlotOccupancy) == 0x000010, "Wrong size on CommonWeaponAbilityInfoSlot_C_SetSlotOccupancy");
static_assert(offsetof(CommonWeaponAbilityInfoSlot_C_SetSlotOccupancy, InOccupancyNum) == 0x000000, "Member 'CommonWeaponAbilityInfoSlot_C_SetSlotOccupancy::InOccupancyNum' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlot_C_SetSlotOccupancy, CallFunc_Clamp_ReturnValue) == 0x000004, "Member 'CommonWeaponAbilityInfoSlot_C_SetSlotOccupancy::CallFunc_Clamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlot_C_SetSlotOccupancy, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'CommonWeaponAbilityInfoSlot_C_SetSlotOccupancy::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlot_C_SetSlotOccupancy, CallFunc_Subtract_IntInt_ReturnValue) == 0x00000C, "Member 'CommonWeaponAbilityInfoSlot_C_SetSlotOccupancy::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");

// Function CommonWeaponAbilityInfoSlot.CommonWeaponAbilityInfoSlot_C.SetFusionItemName
// 0x0030 (0x0030 - 0x0000)
struct CommonWeaponAbilityInfoSlot_C_SetFusionItemName final
{
public:
	class FString                                 InName;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0010(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonWeaponAbilityInfoSlot_C_SetFusionItemName) == 0x000008, "Wrong alignment on CommonWeaponAbilityInfoSlot_C_SetFusionItemName");
static_assert(sizeof(CommonWeaponAbilityInfoSlot_C_SetFusionItemName) == 0x000030, "Wrong size on CommonWeaponAbilityInfoSlot_C_SetFusionItemName");
static_assert(offsetof(CommonWeaponAbilityInfoSlot_C_SetFusionItemName, InName) == 0x000000, "Member 'CommonWeaponAbilityInfoSlot_C_SetFusionItemName::InName' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlot_C_SetFusionItemName, CallFunc_Conv_StringToText_ReturnValue) == 0x000010, "Member 'CommonWeaponAbilityInfoSlot_C_SetFusionItemName::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlot_C_SetFusionItemName, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'CommonWeaponAbilityInfoSlot_C_SetFusionItemName::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function CommonWeaponAbilityInfoSlot.CommonWeaponAbilityInfoSlot_C.SetPerkRarity
// 0x0008 (0x0008 - 0x0000)
struct CommonWeaponAbilityInfoSlot_C_SetPerkRarity final
{
public:
	int32                                         InRarity;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonWeaponAbilityInfoSlot_C_SetPerkRarity) == 0x000004, "Wrong alignment on CommonWeaponAbilityInfoSlot_C_SetPerkRarity");
static_assert(sizeof(CommonWeaponAbilityInfoSlot_C_SetPerkRarity) == 0x000008, "Wrong size on CommonWeaponAbilityInfoSlot_C_SetPerkRarity");
static_assert(offsetof(CommonWeaponAbilityInfoSlot_C_SetPerkRarity, InRarity) == 0x000000, "Member 'CommonWeaponAbilityInfoSlot_C_SetPerkRarity::InRarity' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlot_C_SetPerkRarity, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'CommonWeaponAbilityInfoSlot_C_SetPerkRarity::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function CommonWeaponAbilityInfoSlot.CommonWeaponAbilityInfoSlot_C.SetSlotWidth
// 0x0008 (0x0008 - 0x0000)
struct CommonWeaponAbilityInfoSlot_C_SetSlotWidth final
{
public:
	float                                         InSlotWidth;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonWeaponAbilityInfoSlot_C_SetSlotWidth) == 0x000004, "Wrong alignment on CommonWeaponAbilityInfoSlot_C_SetSlotWidth");
static_assert(sizeof(CommonWeaponAbilityInfoSlot_C_SetSlotWidth) == 0x000008, "Wrong size on CommonWeaponAbilityInfoSlot_C_SetSlotWidth");
static_assert(offsetof(CommonWeaponAbilityInfoSlot_C_SetSlotWidth, InSlotWidth) == 0x000000, "Member 'CommonWeaponAbilityInfoSlot_C_SetSlotWidth::InSlotWidth' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlot_C_SetSlotWidth, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'CommonWeaponAbilityInfoSlot_C_SetSlotWidth::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

