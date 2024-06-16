#pragma once

 

// Package: CommonIconToolTipContent_LiquidMemory

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function CommonIconToolTipContent_LiquidMemory.CommonIconToolTipContent_LiquidMemory_C.SetLiquidMemory
// 0x0190 (0x0190 - 0x0000)
struct CommonIconToolTipContent_LiquidMemory_C_SetLiquidMemory final
{
public:
	int32                                         InLiquidMemoryId;                                  // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9144[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTextBlock*                             K2Node_DynamicCast_AsText;                         // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9145[0x6];                                     // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindLiquidMemoryMaster_IsExists;       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9146[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBLiquidMemoryMasterData              CallFunc_BP_FindLiquidMemoryMaster_ReturnValue;    // 0x0040(0x0038)()
	class FString                                 CallFunc_GetLiquidMemoryEfficacyTypeName_OutCategoryName; // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBLiquidMemoryAccumulateConditionParameter CallFunc_Array_Get_Item;                           // 0x0088(0x0028)()
	class FText                                   CallFunc_Add_BracketsToString_ReturnValue;         // 0x00B0(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetLiquidMemoryText_ReturnValue;          // 0x00D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00E8(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0100(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0118(0x0040)(HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9147[0x4];                                     // 0x015C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0160(0x0010)(ReferenceParm)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9148[0x7];                                     // 0x0171(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0178(0x0018)()
};
static_assert(alignof(CommonIconToolTipContent_LiquidMemory_C_SetLiquidMemory) == 0x000008, "Wrong alignment on CommonIconToolTipContent_LiquidMemory_C_SetLiquidMemory");
static_assert(sizeof(CommonIconToolTipContent_LiquidMemory_C_SetLiquidMemory) == 0x000190, "Wrong size on CommonIconToolTipContent_LiquidMemory_C_SetLiquidMemory");
static_assert(offsetof(CommonIconToolTipContent_LiquidMemory_C_SetLiquidMemory, InLiquidMemoryId) == 0x000000, "Member 'CommonIconToolTipContent_LiquidMemory_C_SetLiquidMemory::InLiquidMemoryId' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_LiquidMemory_C_SetLiquidMemory, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'CommonIconToolTipContent_LiquidMemory_C_SetLiquidMemory::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_LiquidMemory_C_SetLiquidMemory, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'CommonIconToolTipContent_LiquidMemory_C_SetLiquidMemory::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_LiquidMemory_C_SetLiquidMemory, Temp_int_Array_Index_Variable) == 0x00000C, "Member 'CommonIconToolTipContent_LiquidMemory_C_SetLiquidMemory::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_LiquidMemory_C_SetLiquidMemory, CallFunc_GetChildAt_ReturnValue) == 0x000010, "Member 'CommonIconToolTipContent_LiquidMemory_C_SetLiquidMemory::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_LiquidMemory_C_SetLiquidMemory, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'CommonIconToolTipContent_LiquidMemory_C_SetLiquidMemory::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_LiquidMemory_C_SetLiquidMemory, K2Node_DynamicCast_AsText) == 0x000020, "Member 'CommonIconToolTipContent_LiquidMemory_C_SetLiquidMemory::K2Node_DynamicCast_AsText' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_LiquidMemory_C_SetLiquidMemory, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'CommonIconToolTipContent_LiquidMemory_C_SetLiquidMemory::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_LiquidMemory_C_SetLiquidMemory, CallFunc_GetMasterDataManager_IsValid) == 0x000029, "Member 'CommonIconToolTipContent_LiquidMemory_C_SetLiquidMemory::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_LiquidMemory_C_SetLiquidMemory, CallFunc_GetMasterDataManager_ReturnValue) == 0x000030, "Member 'CommonIconToolTipContent_LiquidMemory_C_SetLiquidMemory::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_LiquidMemory_C_SetLiquidMemory, CallFunc_BP_FindLiquidMemoryMaster_IsExists) == 0x000038, "Member 'CommonIconToolTipContent_LiquidMemory_C_SetLiquidMemory::CallFunc_BP_FindLiquidMemoryMaster_IsExists' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_LiquidMemory_C_SetLiquidMemory, CallFunc_BP_FindLiquidMemoryMaster_ReturnValue) == 0x000040, "Member 'CommonIconToolTipContent_LiquidMemory_C_SetLiquidMemory::CallFunc_BP_FindLiquidMemoryMaster_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_LiquidMemory_C_SetLiquidMemory, CallFunc_GetLiquidMemoryEfficacyTypeName_OutCategoryName) == 0x000078, "Member 'CommonIconToolTipContent_LiquidMemory_C_SetLiquidMemory::CallFunc_GetLiquidMemoryEfficacyTypeName_OutCategoryName' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_LiquidMemory_C_SetLiquidMemory, CallFunc_Array_Get_Item) == 0x000088, "Member 'CommonIconToolTipContent_LiquidMemory_C_SetLiquidMemory::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_LiquidMemory_C_SetLiquidMemory, CallFunc_Add_BracketsToString_ReturnValue) == 0x0000B0, "Member 'CommonIconToolTipContent_LiquidMemory_C_SetLiquidMemory::CallFunc_Add_BracketsToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_LiquidMemory_C_SetLiquidMemory, CallFunc_Conv_TextToString_ReturnValue) == 0x0000C8, "Member 'CommonIconToolTipContent_LiquidMemory_C_SetLiquidMemory::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_LiquidMemory_C_SetLiquidMemory, CallFunc_GetLiquidMemoryText_ReturnValue) == 0x0000D8, "Member 'CommonIconToolTipContent_LiquidMemory_C_SetLiquidMemory::CallFunc_GetLiquidMemoryText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_LiquidMemory_C_SetLiquidMemory, CallFunc_Conv_StringToText_ReturnValue) == 0x0000E8, "Member 'CommonIconToolTipContent_LiquidMemory_C_SetLiquidMemory::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_LiquidMemory_C_SetLiquidMemory, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000100, "Member 'CommonIconToolTipContent_LiquidMemory_C_SetLiquidMemory::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_LiquidMemory_C_SetLiquidMemory, K2Node_MakeStruct_FormatArgumentData) == 0x000118, "Member 'CommonIconToolTipContent_LiquidMemory_C_SetLiquidMemory::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_LiquidMemory_C_SetLiquidMemory, CallFunc_Array_Length_ReturnValue) == 0x000158, "Member 'CommonIconToolTipContent_LiquidMemory_C_SetLiquidMemory::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_LiquidMemory_C_SetLiquidMemory, K2Node_MakeArray_Array) == 0x000160, "Member 'CommonIconToolTipContent_LiquidMemory_C_SetLiquidMemory::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_LiquidMemory_C_SetLiquidMemory, CallFunc_Less_IntInt_ReturnValue) == 0x000170, "Member 'CommonIconToolTipContent_LiquidMemory_C_SetLiquidMemory::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_LiquidMemory_C_SetLiquidMemory, CallFunc_Format_ReturnValue) == 0x000178, "Member 'CommonIconToolTipContent_LiquidMemory_C_SetLiquidMemory::CallFunc_Format_ReturnValue' has a wrong offset!");

}

