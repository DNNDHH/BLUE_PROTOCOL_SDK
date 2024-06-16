#pragma once

 

// Package: BP_SkyLightControlVolume

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_SkyLightControlVolume.BP_SkyLightControlVolume_C.ExecuteUbergraph_BP_SkyLightControlVolume
// 0x0100 (0x0100 - 0x0000)
struct BP_SkyLightControlVolume_C_ExecuteUbergraph_BP_SkyLightControlVolume final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_CameraLocationChecker_C*>    CallFunc_GetAllActorsOfClass_OutActors;            // 0x0008(0x0010)(ReferenceParm)
	class ABP_CameraLocationChecker_C*            CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_893B[0xF];                                     // 0x0021(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0030(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_893C[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_CameraLocationChecker_C*            CallFunc_FinishSpawningActor_ReturnValue;          // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_OtherActor_1;                         // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_OtherActor;                           // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_CameraLocationChecker_C*            K2Node_DynamicCast_AsBP_Camera_Location_Checker;   // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_893D[0x7];                                     // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_CameraLocationChecker_C*            K2Node_DynamicCast_AsBP_Camera_Location_Checker_1; // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_893E[0x2];                                     // 0x00AA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UPrimitiveComponent*>            CallFunc_K2_GetComponentsByClass_ReturnValue;      // 0x00B0(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UPrimitiveComponent*                    CallFunc_Array_Get_Item_1;                         // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_893F[0x3];                                     // 0x00CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UPrimitiveComponent*>            CallFunc_K2_GetComponentsByClass_ReturnValue_1;    // 0x00D0(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UPrimitiveComponent*                    CallFunc_Array_Get_Item_2;                         // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8940[0x3];                                     // 0x00F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkyLightControlVolume_C_ExecuteUbergraph_BP_SkyLightControlVolume) == 0x000010, "Wrong alignment on BP_SkyLightControlVolume_C_ExecuteUbergraph_BP_SkyLightControlVolume");
static_assert(sizeof(BP_SkyLightControlVolume_C_ExecuteUbergraph_BP_SkyLightControlVolume) == 0x000100, "Wrong size on BP_SkyLightControlVolume_C_ExecuteUbergraph_BP_SkyLightControlVolume");
static_assert(offsetof(BP_SkyLightControlVolume_C_ExecuteUbergraph_BP_SkyLightControlVolume, EntryPoint) == 0x000000, "Member 'BP_SkyLightControlVolume_C_ExecuteUbergraph_BP_SkyLightControlVolume::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SkyLightControlVolume_C_ExecuteUbergraph_BP_SkyLightControlVolume, Temp_int_Array_Index_Variable) == 0x000004, "Member 'BP_SkyLightControlVolume_C_ExecuteUbergraph_BP_SkyLightControlVolume::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_SkyLightControlVolume_C_ExecuteUbergraph_BP_SkyLightControlVolume, CallFunc_GetAllActorsOfClass_OutActors) == 0x000008, "Member 'BP_SkyLightControlVolume_C_ExecuteUbergraph_BP_SkyLightControlVolume::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(BP_SkyLightControlVolume_C_ExecuteUbergraph_BP_SkyLightControlVolume, CallFunc_Array_Get_Item) == 0x000018, "Member 'BP_SkyLightControlVolume_C_ExecuteUbergraph_BP_SkyLightControlVolume::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_SkyLightControlVolume_C_ExecuteUbergraph_BP_SkyLightControlVolume, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'BP_SkyLightControlVolume_C_ExecuteUbergraph_BP_SkyLightControlVolume::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkyLightControlVolume_C_ExecuteUbergraph_BP_SkyLightControlVolume, CallFunc_MakeTransform_ReturnValue) == 0x000030, "Member 'BP_SkyLightControlVolume_C_ExecuteUbergraph_BP_SkyLightControlVolume::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkyLightControlVolume_C_ExecuteUbergraph_BP_SkyLightControlVolume, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000060, "Member 'BP_SkyLightControlVolume_C_ExecuteUbergraph_BP_SkyLightControlVolume::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkyLightControlVolume_C_ExecuteUbergraph_BP_SkyLightControlVolume, Temp_int_Loop_Counter_Variable) == 0x000068, "Member 'BP_SkyLightControlVolume_C_ExecuteUbergraph_BP_SkyLightControlVolume::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_SkyLightControlVolume_C_ExecuteUbergraph_BP_SkyLightControlVolume, CallFunc_FinishSpawningActor_ReturnValue) == 0x000070, "Member 'BP_SkyLightControlVolume_C_ExecuteUbergraph_BP_SkyLightControlVolume::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkyLightControlVolume_C_ExecuteUbergraph_BP_SkyLightControlVolume, CallFunc_Add_IntInt_ReturnValue) == 0x000078, "Member 'BP_SkyLightControlVolume_C_ExecuteUbergraph_BP_SkyLightControlVolume::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkyLightControlVolume_C_ExecuteUbergraph_BP_SkyLightControlVolume, K2Node_Event_DeltaSeconds) == 0x00007C, "Member 'BP_SkyLightControlVolume_C_ExecuteUbergraph_BP_SkyLightControlVolume::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_SkyLightControlVolume_C_ExecuteUbergraph_BP_SkyLightControlVolume, K2Node_Event_OtherActor_1) == 0x000080, "Member 'BP_SkyLightControlVolume_C_ExecuteUbergraph_BP_SkyLightControlVolume::K2Node_Event_OtherActor_1' has a wrong offset!");
static_assert(offsetof(BP_SkyLightControlVolume_C_ExecuteUbergraph_BP_SkyLightControlVolume, K2Node_Event_OtherActor) == 0x000088, "Member 'BP_SkyLightControlVolume_C_ExecuteUbergraph_BP_SkyLightControlVolume::K2Node_Event_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_SkyLightControlVolume_C_ExecuteUbergraph_BP_SkyLightControlVolume, K2Node_DynamicCast_AsBP_Camera_Location_Checker) == 0x000090, "Member 'BP_SkyLightControlVolume_C_ExecuteUbergraph_BP_SkyLightControlVolume::K2Node_DynamicCast_AsBP_Camera_Location_Checker' has a wrong offset!");
static_assert(offsetof(BP_SkyLightControlVolume_C_ExecuteUbergraph_BP_SkyLightControlVolume, K2Node_DynamicCast_bSuccess) == 0x000098, "Member 'BP_SkyLightControlVolume_C_ExecuteUbergraph_BP_SkyLightControlVolume::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_SkyLightControlVolume_C_ExecuteUbergraph_BP_SkyLightControlVolume, K2Node_DynamicCast_AsBP_Camera_Location_Checker_1) == 0x0000A0, "Member 'BP_SkyLightControlVolume_C_ExecuteUbergraph_BP_SkyLightControlVolume::K2Node_DynamicCast_AsBP_Camera_Location_Checker_1' has a wrong offset!");
static_assert(offsetof(BP_SkyLightControlVolume_C_ExecuteUbergraph_BP_SkyLightControlVolume, K2Node_DynamicCast_bSuccess_1) == 0x0000A8, "Member 'BP_SkyLightControlVolume_C_ExecuteUbergraph_BP_SkyLightControlVolume::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_SkyLightControlVolume_C_ExecuteUbergraph_BP_SkyLightControlVolume, CallFunc_IsDedicatedServer_ReturnValue) == 0x0000A9, "Member 'BP_SkyLightControlVolume_C_ExecuteUbergraph_BP_SkyLightControlVolume::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkyLightControlVolume_C_ExecuteUbergraph_BP_SkyLightControlVolume, Temp_int_Array_Index_Variable_1) == 0x0000AC, "Member 'BP_SkyLightControlVolume_C_ExecuteUbergraph_BP_SkyLightControlVolume::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SkyLightControlVolume_C_ExecuteUbergraph_BP_SkyLightControlVolume, CallFunc_K2_GetComponentsByClass_ReturnValue) == 0x0000B0, "Member 'BP_SkyLightControlVolume_C_ExecuteUbergraph_BP_SkyLightControlVolume::CallFunc_K2_GetComponentsByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkyLightControlVolume_C_ExecuteUbergraph_BP_SkyLightControlVolume, CallFunc_Array_Get_Item_1) == 0x0000C0, "Member 'BP_SkyLightControlVolume_C_ExecuteUbergraph_BP_SkyLightControlVolume::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_SkyLightControlVolume_C_ExecuteUbergraph_BP_SkyLightControlVolume, CallFunc_Array_Length_ReturnValue) == 0x0000C8, "Member 'BP_SkyLightControlVolume_C_ExecuteUbergraph_BP_SkyLightControlVolume::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkyLightControlVolume_C_ExecuteUbergraph_BP_SkyLightControlVolume, CallFunc_Less_IntInt_ReturnValue) == 0x0000CC, "Member 'BP_SkyLightControlVolume_C_ExecuteUbergraph_BP_SkyLightControlVolume::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkyLightControlVolume_C_ExecuteUbergraph_BP_SkyLightControlVolume, CallFunc_K2_GetComponentsByClass_ReturnValue_1) == 0x0000D0, "Member 'BP_SkyLightControlVolume_C_ExecuteUbergraph_BP_SkyLightControlVolume::CallFunc_K2_GetComponentsByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkyLightControlVolume_C_ExecuteUbergraph_BP_SkyLightControlVolume, CallFunc_Array_Get_Item_2) == 0x0000E0, "Member 'BP_SkyLightControlVolume_C_ExecuteUbergraph_BP_SkyLightControlVolume::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(BP_SkyLightControlVolume_C_ExecuteUbergraph_BP_SkyLightControlVolume, CallFunc_Array_Length_ReturnValue_1) == 0x0000E8, "Member 'BP_SkyLightControlVolume_C_ExecuteUbergraph_BP_SkyLightControlVolume::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkyLightControlVolume_C_ExecuteUbergraph_BP_SkyLightControlVolume, Temp_int_Loop_Counter_Variable_1) == 0x0000EC, "Member 'BP_SkyLightControlVolume_C_ExecuteUbergraph_BP_SkyLightControlVolume::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SkyLightControlVolume_C_ExecuteUbergraph_BP_SkyLightControlVolume, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000F0, "Member 'BP_SkyLightControlVolume_C_ExecuteUbergraph_BP_SkyLightControlVolume::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkyLightControlVolume_C_ExecuteUbergraph_BP_SkyLightControlVolume, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000F4, "Member 'BP_SkyLightControlVolume_C_ExecuteUbergraph_BP_SkyLightControlVolume::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");

// Function BP_SkyLightControlVolume.BP_SkyLightControlVolume_C.ReceiveActorEndOverlap
// 0x0008 (0x0008 - 0x0000)
struct BP_SkyLightControlVolume_C_ReceiveActorEndOverlap final
{
public:
	class AActor*                                 OtherActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkyLightControlVolume_C_ReceiveActorEndOverlap) == 0x000008, "Wrong alignment on BP_SkyLightControlVolume_C_ReceiveActorEndOverlap");
static_assert(sizeof(BP_SkyLightControlVolume_C_ReceiveActorEndOverlap) == 0x000008, "Wrong size on BP_SkyLightControlVolume_C_ReceiveActorEndOverlap");
static_assert(offsetof(BP_SkyLightControlVolume_C_ReceiveActorEndOverlap, OtherActor) == 0x000000, "Member 'BP_SkyLightControlVolume_C_ReceiveActorEndOverlap::OtherActor' has a wrong offset!");

// Function BP_SkyLightControlVolume.BP_SkyLightControlVolume_C.ReceiveActorBeginOverlap
// 0x0008 (0x0008 - 0x0000)
struct BP_SkyLightControlVolume_C_ReceiveActorBeginOverlap final
{
public:
	class AActor*                                 OtherActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkyLightControlVolume_C_ReceiveActorBeginOverlap) == 0x000008, "Wrong alignment on BP_SkyLightControlVolume_C_ReceiveActorBeginOverlap");
static_assert(sizeof(BP_SkyLightControlVolume_C_ReceiveActorBeginOverlap) == 0x000008, "Wrong size on BP_SkyLightControlVolume_C_ReceiveActorBeginOverlap");
static_assert(offsetof(BP_SkyLightControlVolume_C_ReceiveActorBeginOverlap, OtherActor) == 0x000000, "Member 'BP_SkyLightControlVolume_C_ReceiveActorBeginOverlap::OtherActor' has a wrong offset!");

// Function BP_SkyLightControlVolume.BP_SkyLightControlVolume_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_SkyLightControlVolume_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkyLightControlVolume_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_SkyLightControlVolume_C_ReceiveTick");
static_assert(sizeof(BP_SkyLightControlVolume_C_ReceiveTick) == 0x000004, "Wrong size on BP_SkyLightControlVolume_C_ReceiveTick");
static_assert(offsetof(BP_SkyLightControlVolume_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_SkyLightControlVolume_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_SkyLightControlVolume.BP_SkyLightControlVolume_C.UserConstructionScript
// 0x0040 (0x0040 - 0x0000)
struct BP_SkyLightControlVolume_C_UserConstructionScript final
{
public:
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_UpdateSkyLightPreviewFlag_PreviewFlagChange; // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8941[0x2];                                     // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABP_SkyLightControlVolume_C*>    CallFunc_GetAllActorsOfClass_OutActors;            // 0x0018(0x0010)(ReferenceParm)
	class ABP_SkyLightControlVolume_C*            CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x0036(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8942[0x1];                                     // 0x0037(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default;                             // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkyLightControlVolume_C_UserConstructionScript) == 0x000008, "Wrong alignment on BP_SkyLightControlVolume_C_UserConstructionScript");
static_assert(sizeof(BP_SkyLightControlVolume_C_UserConstructionScript) == 0x000040, "Wrong size on BP_SkyLightControlVolume_C_UserConstructionScript");
static_assert(offsetof(BP_SkyLightControlVolume_C_UserConstructionScript, CallFunc_MakeVector2D_ReturnValue) == 0x000000, "Member 'BP_SkyLightControlVolume_C_UserConstructionScript::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkyLightControlVolume_C_UserConstructionScript, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'BP_SkyLightControlVolume_C_UserConstructionScript::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_SkyLightControlVolume_C_UserConstructionScript, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'BP_SkyLightControlVolume_C_UserConstructionScript::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkyLightControlVolume_C_UserConstructionScript, Temp_int_Array_Index_Variable) == 0x000010, "Member 'BP_SkyLightControlVolume_C_UserConstructionScript::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_SkyLightControlVolume_C_UserConstructionScript, CallFunc_UpdateSkyLightPreviewFlag_PreviewFlagChange) == 0x000014, "Member 'BP_SkyLightControlVolume_C_UserConstructionScript::CallFunc_UpdateSkyLightPreviewFlag_PreviewFlagChange' has a wrong offset!");
static_assert(offsetof(BP_SkyLightControlVolume_C_UserConstructionScript, Temp_bool_Variable) == 0x000015, "Member 'BP_SkyLightControlVolume_C_UserConstructionScript::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_SkyLightControlVolume_C_UserConstructionScript, CallFunc_GetAllActorsOfClass_OutActors) == 0x000018, "Member 'BP_SkyLightControlVolume_C_UserConstructionScript::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(BP_SkyLightControlVolume_C_UserConstructionScript, CallFunc_Array_Get_Item) == 0x000028, "Member 'BP_SkyLightControlVolume_C_UserConstructionScript::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_SkyLightControlVolume_C_UserConstructionScript, CallFunc_Array_Length_ReturnValue) == 0x000030, "Member 'BP_SkyLightControlVolume_C_UserConstructionScript::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkyLightControlVolume_C_UserConstructionScript, CallFunc_Less_IntInt_ReturnValue) == 0x000034, "Member 'BP_SkyLightControlVolume_C_UserConstructionScript::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkyLightControlVolume_C_UserConstructionScript, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000035, "Member 'BP_SkyLightControlVolume_C_UserConstructionScript::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkyLightControlVolume_C_UserConstructionScript, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000036, "Member 'BP_SkyLightControlVolume_C_UserConstructionScript::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkyLightControlVolume_C_UserConstructionScript, K2Node_Select_Default) == 0x000038, "Member 'BP_SkyLightControlVolume_C_UserConstructionScript::K2Node_Select_Default' has a wrong offset!");

// Function BP_SkyLightControlVolume.BP_SkyLightControlVolume_C.SetAllPrimCollisions
// 0x0040 (0x0040 - 0x0000)
struct BP_SkyLightControlVolume_C_SetAllPrimCollisions final
{
public:
	class FName                                   CollisionProfileName;                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8943[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UPrimitiveComponent*>            CallFunc_K2_GetComponentsByClass_ReturnValue;      // 0x0018(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8944[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SkyLightControlVolume_C_SetAllPrimCollisions) == 0x000008, "Wrong alignment on BP_SkyLightControlVolume_C_SetAllPrimCollisions");
static_assert(sizeof(BP_SkyLightControlVolume_C_SetAllPrimCollisions) == 0x000040, "Wrong size on BP_SkyLightControlVolume_C_SetAllPrimCollisions");
static_assert(offsetof(BP_SkyLightControlVolume_C_SetAllPrimCollisions, CollisionProfileName) == 0x000000, "Member 'BP_SkyLightControlVolume_C_SetAllPrimCollisions::CollisionProfileName' has a wrong offset!");
static_assert(offsetof(BP_SkyLightControlVolume_C_SetAllPrimCollisions, Temp_int_Array_Index_Variable) == 0x000008, "Member 'BP_SkyLightControlVolume_C_SetAllPrimCollisions::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_SkyLightControlVolume_C_SetAllPrimCollisions, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'BP_SkyLightControlVolume_C_SetAllPrimCollisions::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_SkyLightControlVolume_C_SetAllPrimCollisions, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'BP_SkyLightControlVolume_C_SetAllPrimCollisions::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkyLightControlVolume_C_SetAllPrimCollisions, CallFunc_K2_GetComponentsByClass_ReturnValue) == 0x000018, "Member 'BP_SkyLightControlVolume_C_SetAllPrimCollisions::CallFunc_K2_GetComponentsByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkyLightControlVolume_C_SetAllPrimCollisions, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'BP_SkyLightControlVolume_C_SetAllPrimCollisions::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkyLightControlVolume_C_SetAllPrimCollisions, CallFunc_Array_Get_Item) == 0x000030, "Member 'BP_SkyLightControlVolume_C_SetAllPrimCollisions::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_SkyLightControlVolume_C_SetAllPrimCollisions, CallFunc_Less_IntInt_ReturnValue) == 0x000038, "Member 'BP_SkyLightControlVolume_C_SetAllPrimCollisions::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

}

