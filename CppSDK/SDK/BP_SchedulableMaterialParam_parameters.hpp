#pragma once

 

// Package: BP_SchedulableMaterialParam

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_SchedulableMaterialParam.BP_SchedulableMaterialParam_C.ExecuteUbergraph_BP_SchedulableMaterialParam
// 0x0018 (0x0018 - 0x0000)
struct BP_SchedulableMaterialParam_C_ExecuteUbergraph_BP_SchedulableMaterialParam final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SchedulableMaterialParam_C_ExecuteUbergraph_BP_SchedulableMaterialParam) == 0x000008, "Wrong alignment on BP_SchedulableMaterialParam_C_ExecuteUbergraph_BP_SchedulableMaterialParam");
static_assert(sizeof(BP_SchedulableMaterialParam_C_ExecuteUbergraph_BP_SchedulableMaterialParam) == 0x000018, "Wrong size on BP_SchedulableMaterialParam_C_ExecuteUbergraph_BP_SchedulableMaterialParam");
static_assert(offsetof(BP_SchedulableMaterialParam_C_ExecuteUbergraph_BP_SchedulableMaterialParam, EntryPoint) == 0x000000, "Member 'BP_SchedulableMaterialParam_C_ExecuteUbergraph_BP_SchedulableMaterialParam::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SchedulableMaterialParam_C_ExecuteUbergraph_BP_SchedulableMaterialParam, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'BP_SchedulableMaterialParam_C_ExecuteUbergraph_BP_SchedulableMaterialParam::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_SchedulableMaterialParam_C_ExecuteUbergraph_BP_SchedulableMaterialParam, CallFunc_GetDisplayName_ReturnValue) == 0x000008, "Member 'BP_SchedulableMaterialParam_C_ExecuteUbergraph_BP_SchedulableMaterialParam::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");

// Function BP_SchedulableMaterialParam.BP_SchedulableMaterialParam_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_SchedulableMaterialParam_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SchedulableMaterialParam_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_SchedulableMaterialParam_C_ReceiveTick");
static_assert(sizeof(BP_SchedulableMaterialParam_C_ReceiveTick) == 0x000004, "Wrong size on BP_SchedulableMaterialParam_C_ReceiveTick");
static_assert(offsetof(BP_SchedulableMaterialParam_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_SchedulableMaterialParam_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_SchedulableMaterialParam.BP_SchedulableMaterialParam_C.StartRoutine
// 0x0080 (0x0080 - 0x0000)
struct BP_SchedulableMaterialParam_C_StartRoutine final
{
public:
	TArray<class UMaterialInstance*>              SourceMaterial;                                    // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FName                                   ParameterName;                                     // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Intencity;                                         // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Duration;                                          // 0x001C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SwitchOnTime;                                      // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SwitchOffTime;                                     // 0x0024(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97AA[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_97AB[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABP_DynamicSky_C*>               CallFunc_GetAllActorsOfClass_OutActors;            // 0x0040(0x0010)(ReferenceParm)
	class UMaterialInstance*                      CallFunc_Array_Get_Item;                           // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_DynamicSky_C*                       CallFunc_Array_Get_Item_1;                         // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_SetVariableMaterial_ArrayIndex;           // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SchedulableMaterialParam_C_StartRoutine) == 0x000008, "Wrong alignment on BP_SchedulableMaterialParam_C_StartRoutine");
static_assert(sizeof(BP_SchedulableMaterialParam_C_StartRoutine) == 0x000080, "Wrong size on BP_SchedulableMaterialParam_C_StartRoutine");
static_assert(offsetof(BP_SchedulableMaterialParam_C_StartRoutine, SourceMaterial) == 0x000000, "Member 'BP_SchedulableMaterialParam_C_StartRoutine::SourceMaterial' has a wrong offset!");
static_assert(offsetof(BP_SchedulableMaterialParam_C_StartRoutine, ParameterName) == 0x000010, "Member 'BP_SchedulableMaterialParam_C_StartRoutine::ParameterName' has a wrong offset!");
static_assert(offsetof(BP_SchedulableMaterialParam_C_StartRoutine, Intencity) == 0x000018, "Member 'BP_SchedulableMaterialParam_C_StartRoutine::Intencity' has a wrong offset!");
static_assert(offsetof(BP_SchedulableMaterialParam_C_StartRoutine, Duration) == 0x00001C, "Member 'BP_SchedulableMaterialParam_C_StartRoutine::Duration' has a wrong offset!");
static_assert(offsetof(BP_SchedulableMaterialParam_C_StartRoutine, SwitchOnTime) == 0x000020, "Member 'BP_SchedulableMaterialParam_C_StartRoutine::SwitchOnTime' has a wrong offset!");
static_assert(offsetof(BP_SchedulableMaterialParam_C_StartRoutine, SwitchOffTime) == 0x000024, "Member 'BP_SchedulableMaterialParam_C_StartRoutine::SwitchOffTime' has a wrong offset!");
static_assert(offsetof(BP_SchedulableMaterialParam_C_StartRoutine, Temp_int_Loop_Counter_Variable) == 0x000028, "Member 'BP_SchedulableMaterialParam_C_StartRoutine::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_SchedulableMaterialParam_C_StartRoutine, CallFunc_Array_Length_ReturnValue) == 0x00002C, "Member 'BP_SchedulableMaterialParam_C_StartRoutine::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SchedulableMaterialParam_C_StartRoutine, CallFunc_Add_IntInt_ReturnValue) == 0x000030, "Member 'BP_SchedulableMaterialParam_C_StartRoutine::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SchedulableMaterialParam_C_StartRoutine, CallFunc_Less_IntInt_ReturnValue) == 0x000034, "Member 'BP_SchedulableMaterialParam_C_StartRoutine::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SchedulableMaterialParam_C_StartRoutine, Temp_int_Array_Index_Variable) == 0x000038, "Member 'BP_SchedulableMaterialParam_C_StartRoutine::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_SchedulableMaterialParam_C_StartRoutine, CallFunc_GetAllActorsOfClass_OutActors) == 0x000040, "Member 'BP_SchedulableMaterialParam_C_StartRoutine::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(BP_SchedulableMaterialParam_C_StartRoutine, CallFunc_Array_Get_Item) == 0x000050, "Member 'BP_SchedulableMaterialParam_C_StartRoutine::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_SchedulableMaterialParam_C_StartRoutine, CallFunc_Array_Get_Item_1) == 0x000058, "Member 'BP_SchedulableMaterialParam_C_StartRoutine::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_SchedulableMaterialParam_C_StartRoutine, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000060, "Member 'BP_SchedulableMaterialParam_C_StartRoutine::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SchedulableMaterialParam_C_StartRoutine, CallFunc_Multiply_IntInt_ReturnValue) == 0x000068, "Member 'BP_SchedulableMaterialParam_C_StartRoutine::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SchedulableMaterialParam_C_StartRoutine, CallFunc_Add_IntInt_ReturnValue_1) == 0x00006C, "Member 'BP_SchedulableMaterialParam_C_StartRoutine::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SchedulableMaterialParam_C_StartRoutine, CallFunc_Array_Add_ReturnValue) == 0x000070, "Member 'BP_SchedulableMaterialParam_C_StartRoutine::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SchedulableMaterialParam_C_StartRoutine, CallFunc_Array_Add_ReturnValue_1) == 0x000074, "Member 'BP_SchedulableMaterialParam_C_StartRoutine::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SchedulableMaterialParam_C_StartRoutine, CallFunc_SetVariableMaterial_ArrayIndex) == 0x000078, "Member 'BP_SchedulableMaterialParam_C_StartRoutine::CallFunc_SetVariableMaterial_ArrayIndex' has a wrong offset!");

// Function BP_SchedulableMaterialParam.BP_SchedulableMaterialParam_C.GetVariableMaterialInstance
// 0x0020 (0x0020 - 0x0000)
struct BP_SchedulableMaterialParam_C_GetVariableMaterialInstance final
{
public:
	class UMaterialInstance*                      SourceMaterial;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               MaterialInstanceDynamic;                           // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Map_Find_Value;                           // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97AC[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetVariableMaterial_NewParam;             // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SchedulableMaterialParam_C_GetVariableMaterialInstance) == 0x000008, "Wrong alignment on BP_SchedulableMaterialParam_C_GetVariableMaterialInstance");
static_assert(sizeof(BP_SchedulableMaterialParam_C_GetVariableMaterialInstance) == 0x000020, "Wrong size on BP_SchedulableMaterialParam_C_GetVariableMaterialInstance");
static_assert(offsetof(BP_SchedulableMaterialParam_C_GetVariableMaterialInstance, SourceMaterial) == 0x000000, "Member 'BP_SchedulableMaterialParam_C_GetVariableMaterialInstance::SourceMaterial' has a wrong offset!");
static_assert(offsetof(BP_SchedulableMaterialParam_C_GetVariableMaterialInstance, MaterialInstanceDynamic) == 0x000008, "Member 'BP_SchedulableMaterialParam_C_GetVariableMaterialInstance::MaterialInstanceDynamic' has a wrong offset!");
static_assert(offsetof(BP_SchedulableMaterialParam_C_GetVariableMaterialInstance, CallFunc_Map_Find_Value) == 0x000010, "Member 'BP_SchedulableMaterialParam_C_GetVariableMaterialInstance::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_SchedulableMaterialParam_C_GetVariableMaterialInstance, CallFunc_Map_Find_ReturnValue) == 0x000014, "Member 'BP_SchedulableMaterialParam_C_GetVariableMaterialInstance::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SchedulableMaterialParam_C_GetVariableMaterialInstance, CallFunc_GetVariableMaterial_NewParam) == 0x000018, "Member 'BP_SchedulableMaterialParam_C_GetVariableMaterialInstance::CallFunc_GetVariableMaterial_NewParam' has a wrong offset!");

}

