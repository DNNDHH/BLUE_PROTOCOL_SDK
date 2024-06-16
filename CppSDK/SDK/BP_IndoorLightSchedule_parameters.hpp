#pragma once

 

// Package: BP_IndoorLightSchedule

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function BP_IndoorLightSchedule.BP_IndoorLightSchedule_C.ExecuteUbergraph_BP_IndoorLightSchedule
// 0x0118 (0x0118 - 0x0000)
struct BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(ESBDebugMenuType MenuType, class FName RowName)> K2Node_CreateDelegate_OutputDelegate;              // 0x0028(0x0010)(ZeroConstructor, NoDestructor)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_997E[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UBP_IndoorLightScheduleComponent_C*> CallFunc_K2_GetComponentsByClass_ReturnValue;      // 0x0040(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UBP_IndoorLightScheduleComponent_C*     CallFunc_Array_Get_Item;                           // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_997F[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UBP_IndoorLightScheduleComponent_C*> CallFunc_K2_GetComponentsByClass_ReturnValue_1;    // 0x0060(0x0010)(ReferenceParm, ContainsInstancedReference)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9980[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_IndoorLightScheduleComponent_C*     CallFunc_Array_Get_Item_1;                         // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0085(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9981[0x2];                                     // 0x0086(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UBP_IndoorLightScheduleComponent_C*> CallFunc_K2_GetComponentsByClass_ReturnValue_2;    // 0x0088(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UBP_IndoorLightScheduleComponent_C*     CallFunc_Array_Get_Item_2;                         // 0x0098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9982[0x3];                                     // 0x00A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9983[0x4];                                     // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMeshComponent*>                 CallFunc_GetAllComponentsOfClass_OutComponents;    // 0x00B0(0x0010)(ReferenceParm, ContainsInstancedReference)
	TArray<class UMeshComponent*>                 CallFunc_GetAllComponentsOfClass_OutComponents_1;  // 0x00C0(0x0010)(ReferenceParm, ContainsInstancedReference)
	bool                                          K2Node_Event_Sw;                                   // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPlayGame_ReturnValue;                   // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9984[0x6];                                     // 0x00D2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBGameState*                           K2Node_DynamicCast_AsSBGame_State;                 // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetDebugFunction_IsValid;                 // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9985[0x6];                                     // 0x00EA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDebugFunction*                       CallFunc_GetDebugFunction_ReturnValue;             // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMinutesPerDay_ReturnValue;             // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_1;          // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBDebugMenuType                              K2Node_CustomEvent_MenuType;                       // 0x0104(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9986[0x3];                                     // 0x0105(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_CustomEvent_RowName;                        // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0111(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule) == 0x000008, "Wrong alignment on BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule");
static_assert(sizeof(BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule) == 0x000118, "Wrong size on BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule");
static_assert(offsetof(BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule, EntryPoint) == 0x000000, "Member 'BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule, Temp_int_Array_Index_Variable) == 0x00000C, "Member 'BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule, Temp_int_Loop_Counter_Variable_1) == 0x000010, "Member 'BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule, CallFunc_Add_IntInt_ReturnValue_1) == 0x000014, "Member 'BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule, Temp_int_Array_Index_Variable_1) == 0x000018, "Member 'BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule, Temp_int_Loop_Counter_Variable_2) == 0x00001C, "Member 'BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule, CallFunc_Add_IntInt_ReturnValue_2) == 0x000020, "Member 'BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule, Temp_int_Array_Index_Variable_2) == 0x000024, "Member 'BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule, K2Node_CreateDelegate_OutputDelegate) == 0x000028, "Member 'BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule, K2Node_Event_DeltaSeconds) == 0x000038, "Member 'BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule, CallFunc_K2_GetComponentsByClass_ReturnValue) == 0x000040, "Member 'BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule::CallFunc_K2_GetComponentsByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule, CallFunc_Array_Get_Item) == 0x000050, "Member 'BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule, CallFunc_Array_Length_ReturnValue) == 0x000058, "Member 'BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule, CallFunc_K2_GetComponentsByClass_ReturnValue_1) == 0x000060, "Member 'BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule::CallFunc_K2_GetComponentsByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule, CallFunc_Less_IntInt_ReturnValue) == 0x000070, "Member 'BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule, CallFunc_Array_Get_Item_1) == 0x000078, "Member 'BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule, CallFunc_Array_Length_ReturnValue_1) == 0x000080, "Member 'BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule, CallFunc_Less_IntInt_ReturnValue_1) == 0x000084, "Member 'BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule, CallFunc_IsDedicatedServer_ReturnValue) == 0x000085, "Member 'BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule, CallFunc_K2_GetComponentsByClass_ReturnValue_2) == 0x000088, "Member 'BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule::CallFunc_K2_GetComponentsByClass_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule, CallFunc_Array_Get_Item_2) == 0x000098, "Member 'BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule, CallFunc_Array_Length_ReturnValue_2) == 0x0000A0, "Member 'BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule, CallFunc_Less_IntInt_ReturnValue_2) == 0x0000A4, "Member 'BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule, CallFunc_Divide_FloatFloat_ReturnValue) == 0x0000A8, "Member 'BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule, CallFunc_GetAllComponentsOfClass_OutComponents) == 0x0000B0, "Member 'BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule::CallFunc_GetAllComponentsOfClass_OutComponents' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule, CallFunc_GetAllComponentsOfClass_OutComponents_1) == 0x0000C0, "Member 'BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule::CallFunc_GetAllComponentsOfClass_OutComponents_1' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule, K2Node_Event_Sw) == 0x0000D0, "Member 'BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule::K2Node_Event_Sw' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule, CallFunc_IsPlayGame_ReturnValue) == 0x0000D1, "Member 'BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule::CallFunc_IsPlayGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule, CallFunc_GetGameState_ReturnValue) == 0x0000D8, "Member 'BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule, K2Node_DynamicCast_AsSBGame_State) == 0x0000E0, "Member 'BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule::K2Node_DynamicCast_AsSBGame_State' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule, K2Node_DynamicCast_bSuccess) == 0x0000E8, "Member 'BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule, CallFunc_GetDebugFunction_IsValid) == 0x0000E9, "Member 'BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule::CallFunc_GetDebugFunction_IsValid' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule, CallFunc_GetDebugFunction_ReturnValue) == 0x0000F0, "Member 'BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule::CallFunc_GetDebugFunction_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule, CallFunc_GetMinutesPerDay_ReturnValue) == 0x0000F8, "Member 'BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule::CallFunc_GetMinutesPerDay_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule, CallFunc_Conv_IntToFloat_ReturnValue) == 0x0000FC, "Member 'BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule, CallFunc_Divide_FloatFloat_ReturnValue_1) == 0x000100, "Member 'BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule::CallFunc_Divide_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule, K2Node_CustomEvent_MenuType) == 0x000104, "Member 'BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule::K2Node_CustomEvent_MenuType' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule, K2Node_CustomEvent_RowName) == 0x000108, "Member 'BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule::K2Node_CustomEvent_RowName' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule, CallFunc_Not_PreBool_ReturnValue) == 0x000110, "Member 'BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000111, "Member 'BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");

// Function BP_IndoorLightSchedule.BP_IndoorLightSchedule_C.InDoorTickIntervalSet
// 0x000C (0x000C - 0x0000)
struct BP_IndoorLightSchedule_C_InDoorTickIntervalSet final
{
public:
	ESBDebugMenuType                              MenuType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9987[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   RowName;                                           // 0x0004(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_IndoorLightSchedule_C_InDoorTickIntervalSet) == 0x000004, "Wrong alignment on BP_IndoorLightSchedule_C_InDoorTickIntervalSet");
static_assert(sizeof(BP_IndoorLightSchedule_C_InDoorTickIntervalSet) == 0x00000C, "Wrong size on BP_IndoorLightSchedule_C_InDoorTickIntervalSet");
static_assert(offsetof(BP_IndoorLightSchedule_C_InDoorTickIntervalSet, MenuType) == 0x000000, "Member 'BP_IndoorLightSchedule_C_InDoorTickIntervalSet::MenuType' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightSchedule_C_InDoorTickIntervalSet, RowName) == 0x000004, "Member 'BP_IndoorLightSchedule_C_InDoorTickIntervalSet::RowName' has a wrong offset!");

// Function BP_IndoorLightSchedule.BP_IndoorLightSchedule_C.InitEditorPreview
// 0x0001 (0x0001 - 0x0000)
struct BP_IndoorLightSchedule_C_InitEditorPreview final
{
public:
	bool                                          Sw;                                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_IndoorLightSchedule_C_InitEditorPreview) == 0x000001, "Wrong alignment on BP_IndoorLightSchedule_C_InitEditorPreview");
static_assert(sizeof(BP_IndoorLightSchedule_C_InitEditorPreview) == 0x000001, "Wrong size on BP_IndoorLightSchedule_C_InitEditorPreview");
static_assert(offsetof(BP_IndoorLightSchedule_C_InitEditorPreview, Sw) == 0x000000, "Member 'BP_IndoorLightSchedule_C_InitEditorPreview::Sw' has a wrong offset!");

// Function BP_IndoorLightSchedule.BP_IndoorLightSchedule_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_IndoorLightSchedule_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_IndoorLightSchedule_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_IndoorLightSchedule_C_ReceiveTick");
static_assert(sizeof(BP_IndoorLightSchedule_C_ReceiveTick) == 0x000004, "Wrong size on BP_IndoorLightSchedule_C_ReceiveTick");
static_assert(offsetof(BP_IndoorLightSchedule_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_IndoorLightSchedule_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_IndoorLightSchedule.BP_IndoorLightSchedule_C.UserConstructionScript
// 0x0038 (0x0038 - 0x0000)
struct BP_IndoorLightSchedule_C_UserConstructionScript final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9988[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UPrimitiveComponent*>            CallFunc_K2_GetComponentsByClass_ReturnValue;      // 0x0010(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9989[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_IndoorLightSchedule_C_UserConstructionScript) == 0x000008, "Wrong alignment on BP_IndoorLightSchedule_C_UserConstructionScript");
static_assert(sizeof(BP_IndoorLightSchedule_C_UserConstructionScript) == 0x000038, "Wrong size on BP_IndoorLightSchedule_C_UserConstructionScript");
static_assert(offsetof(BP_IndoorLightSchedule_C_UserConstructionScript, Temp_int_Array_Index_Variable) == 0x000000, "Member 'BP_IndoorLightSchedule_C_UserConstructionScript::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightSchedule_C_UserConstructionScript, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'BP_IndoorLightSchedule_C_UserConstructionScript::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightSchedule_C_UserConstructionScript, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BP_IndoorLightSchedule_C_UserConstructionScript::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightSchedule_C_UserConstructionScript, CallFunc_K2_GetComponentsByClass_ReturnValue) == 0x000010, "Member 'BP_IndoorLightSchedule_C_UserConstructionScript::CallFunc_K2_GetComponentsByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightSchedule_C_UserConstructionScript, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'BP_IndoorLightSchedule_C_UserConstructionScript::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightSchedule_C_UserConstructionScript, CallFunc_Array_Get_Item) == 0x000028, "Member 'BP_IndoorLightSchedule_C_UserConstructionScript::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightSchedule_C_UserConstructionScript, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'BP_IndoorLightSchedule_C_UserConstructionScript::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

}

