#pragma once

 

// Package: BP_PerformanceCameraActor

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_PerformanceCameraActor.BP_PerformanceCameraActor_C.ExecuteUbergraph_BP_PerformanceCameraActor
// 0x0030 (0x0030 - 0x0000)
struct BP_PerformanceCameraActor_C_ExecuteUbergraph_BP_PerformanceCameraActor final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsApplySceneCapture_ReturnValue;          // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_531D[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_531E[0x2];                                     // 0x000E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetCurveValue_ReturnValue;                // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsApplyCameraMotion_ReturnValue;          // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_531F[0x2];                                     // 0x001E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         CallFunc_GetShowActorList_ShowList;                // 0x0020(0x0010)(ReferenceParm)
};
static_assert(alignof(BP_PerformanceCameraActor_C_ExecuteUbergraph_BP_PerformanceCameraActor) == 0x000008, "Wrong alignment on BP_PerformanceCameraActor_C_ExecuteUbergraph_BP_PerformanceCameraActor");
static_assert(sizeof(BP_PerformanceCameraActor_C_ExecuteUbergraph_BP_PerformanceCameraActor) == 0x000030, "Wrong size on BP_PerformanceCameraActor_C_ExecuteUbergraph_BP_PerformanceCameraActor");
static_assert(offsetof(BP_PerformanceCameraActor_C_ExecuteUbergraph_BP_PerformanceCameraActor, EntryPoint) == 0x000000, "Member 'BP_PerformanceCameraActor_C_ExecuteUbergraph_BP_PerformanceCameraActor::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PerformanceCameraActor_C_ExecuteUbergraph_BP_PerformanceCameraActor, CallFunc_IsApplySceneCapture_ReturnValue) == 0x000004, "Member 'BP_PerformanceCameraActor_C_ExecuteUbergraph_BP_PerformanceCameraActor::CallFunc_IsApplySceneCapture_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PerformanceCameraActor_C_ExecuteUbergraph_BP_PerformanceCameraActor, K2Node_Event_DeltaSeconds) == 0x000008, "Member 'BP_PerformanceCameraActor_C_ExecuteUbergraph_BP_PerformanceCameraActor::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_PerformanceCameraActor_C_ExecuteUbergraph_BP_PerformanceCameraActor, K2Node_Event_EndPlayReason) == 0x00000C, "Member 'BP_PerformanceCameraActor_C_ExecuteUbergraph_BP_PerformanceCameraActor::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(BP_PerformanceCameraActor_C_ExecuteUbergraph_BP_PerformanceCameraActor, CallFunc_IsValid_ReturnValue) == 0x00000D, "Member 'BP_PerformanceCameraActor_C_ExecuteUbergraph_BP_PerformanceCameraActor::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PerformanceCameraActor_C_ExecuteUbergraph_BP_PerformanceCameraActor, CallFunc_GetAnimInstance_ReturnValue) == 0x000010, "Member 'BP_PerformanceCameraActor_C_ExecuteUbergraph_BP_PerformanceCameraActor::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PerformanceCameraActor_C_ExecuteUbergraph_BP_PerformanceCameraActor, CallFunc_GetCurveValue_ReturnValue) == 0x000018, "Member 'BP_PerformanceCameraActor_C_ExecuteUbergraph_BP_PerformanceCameraActor::CallFunc_GetCurveValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PerformanceCameraActor_C_ExecuteUbergraph_BP_PerformanceCameraActor, CallFunc_IsValid_ReturnValue_1) == 0x00001C, "Member 'BP_PerformanceCameraActor_C_ExecuteUbergraph_BP_PerformanceCameraActor::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PerformanceCameraActor_C_ExecuteUbergraph_BP_PerformanceCameraActor, CallFunc_IsApplyCameraMotion_ReturnValue) == 0x00001D, "Member 'BP_PerformanceCameraActor_C_ExecuteUbergraph_BP_PerformanceCameraActor::CallFunc_IsApplyCameraMotion_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PerformanceCameraActor_C_ExecuteUbergraph_BP_PerformanceCameraActor, CallFunc_GetShowActorList_ShowList) == 0x000020, "Member 'BP_PerformanceCameraActor_C_ExecuteUbergraph_BP_PerformanceCameraActor::CallFunc_GetShowActorList_ShowList' has a wrong offset!");

// Function BP_PerformanceCameraActor.BP_PerformanceCameraActor_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_PerformanceCameraActor_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PerformanceCameraActor_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_PerformanceCameraActor_C_ReceiveEndPlay");
static_assert(sizeof(BP_PerformanceCameraActor_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_PerformanceCameraActor_C_ReceiveEndPlay");
static_assert(offsetof(BP_PerformanceCameraActor_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_PerformanceCameraActor_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function BP_PerformanceCameraActor.BP_PerformanceCameraActor_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_PerformanceCameraActor_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PerformanceCameraActor_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_PerformanceCameraActor_C_ReceiveTick");
static_assert(sizeof(BP_PerformanceCameraActor_C_ReceiveTick) == 0x000004, "Wrong size on BP_PerformanceCameraActor_C_ReceiveTick");
static_assert(offsetof(BP_PerformanceCameraActor_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_PerformanceCameraActor_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_PerformanceCameraActor.BP_PerformanceCameraActor_C.CreateScreenWidget
// 0x0008 (0x0008 - 0x0000)
struct BP_PerformanceCameraActor_C_CreateScreenWidget final
{
public:
	class UUI_PerformanceCamera_C*                CallFunc_Create_ReturnValue;                       // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PerformanceCameraActor_C_CreateScreenWidget) == 0x000008, "Wrong alignment on BP_PerformanceCameraActor_C_CreateScreenWidget");
static_assert(sizeof(BP_PerformanceCameraActor_C_CreateScreenWidget) == 0x000008, "Wrong size on BP_PerformanceCameraActor_C_CreateScreenWidget");
static_assert(offsetof(BP_PerformanceCameraActor_C_CreateScreenWidget, CallFunc_Create_ReturnValue) == 0x000000, "Member 'BP_PerformanceCameraActor_C_CreateScreenWidget::CallFunc_Create_ReturnValue' has a wrong offset!");

// Function BP_PerformanceCameraActor.BP_PerformanceCameraActor_C.GetShowActorList
// 0x00A0 (0x00A0 - 0x0000)
struct BP_PerformanceCameraActor_C_GetShowActorList final
{
public:
	TArray<class AActor*>                         ShowList;                                          // 0x0000(0x0010)(Parm, OutParm)
	TArray<class AActor*>                         AddShowList;                                       // 0x0010(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5320[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBCharacter*                           K2Node_DynamicCast_AsSBCharacter;                  // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5321[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5322[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ASBWeapon*>                      CallFunc_GetCurrentWeaponsByEquipType_ReturnValue; // 0x0058(0x0010)(ReferenceParm)
	TArray<class ASBWeapon*>                      CallFunc_GetCurrentWeaponsByEquipType_ReturnValue_1; // 0x0068(0x0010)(ReferenceParm)
	class ASBWeapon*                              CallFunc_Array_Get_Item;                           // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBWeapon*                              CallFunc_Array_Get_Item_1;                         // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_2;                  // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PerformanceCameraActor_C_GetShowActorList) == 0x000008, "Wrong alignment on BP_PerformanceCameraActor_C_GetShowActorList");
static_assert(sizeof(BP_PerformanceCameraActor_C_GetShowActorList) == 0x0000A0, "Wrong size on BP_PerformanceCameraActor_C_GetShowActorList");
static_assert(offsetof(BP_PerformanceCameraActor_C_GetShowActorList, ShowList) == 0x000000, "Member 'BP_PerformanceCameraActor_C_GetShowActorList::ShowList' has a wrong offset!");
static_assert(offsetof(BP_PerformanceCameraActor_C_GetShowActorList, AddShowList) == 0x000010, "Member 'BP_PerformanceCameraActor_C_GetShowActorList::AddShowList' has a wrong offset!");
static_assert(offsetof(BP_PerformanceCameraActor_C_GetShowActorList, Temp_int_Loop_Counter_Variable) == 0x000020, "Member 'BP_PerformanceCameraActor_C_GetShowActorList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_PerformanceCameraActor_C_GetShowActorList, CallFunc_Add_IntInt_ReturnValue) == 0x000024, "Member 'BP_PerformanceCameraActor_C_GetShowActorList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PerformanceCameraActor_C_GetShowActorList, Temp_int_Array_Index_Variable) == 0x000028, "Member 'BP_PerformanceCameraActor_C_GetShowActorList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_PerformanceCameraActor_C_GetShowActorList, Temp_int_Array_Index_Variable_1) == 0x00002C, "Member 'BP_PerformanceCameraActor_C_GetShowActorList::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_PerformanceCameraActor_C_GetShowActorList, Temp_int_Loop_Counter_Variable_1) == 0x000030, "Member 'BP_PerformanceCameraActor_C_GetShowActorList::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_PerformanceCameraActor_C_GetShowActorList, CallFunc_GetOwner_ReturnValue) == 0x000038, "Member 'BP_PerformanceCameraActor_C_GetShowActorList::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PerformanceCameraActor_C_GetShowActorList, K2Node_DynamicCast_AsSBCharacter) == 0x000040, "Member 'BP_PerformanceCameraActor_C_GetShowActorList::K2Node_DynamicCast_AsSBCharacter' has a wrong offset!");
static_assert(offsetof(BP_PerformanceCameraActor_C_GetShowActorList, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'BP_PerformanceCameraActor_C_GetShowActorList::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PerformanceCameraActor_C_GetShowActorList, CallFunc_Add_IntInt_ReturnValue_1) == 0x00004C, "Member 'BP_PerformanceCameraActor_C_GetShowActorList::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PerformanceCameraActor_C_GetShowActorList, CallFunc_Array_Add_ReturnValue) == 0x000050, "Member 'BP_PerformanceCameraActor_C_GetShowActorList::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PerformanceCameraActor_C_GetShowActorList, CallFunc_GetCurrentWeaponsByEquipType_ReturnValue) == 0x000058, "Member 'BP_PerformanceCameraActor_C_GetShowActorList::CallFunc_GetCurrentWeaponsByEquipType_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PerformanceCameraActor_C_GetShowActorList, CallFunc_GetCurrentWeaponsByEquipType_ReturnValue_1) == 0x000068, "Member 'BP_PerformanceCameraActor_C_GetShowActorList::CallFunc_GetCurrentWeaponsByEquipType_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PerformanceCameraActor_C_GetShowActorList, CallFunc_Array_Get_Item) == 0x000078, "Member 'BP_PerformanceCameraActor_C_GetShowActorList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_PerformanceCameraActor_C_GetShowActorList, CallFunc_Array_Get_Item_1) == 0x000080, "Member 'BP_PerformanceCameraActor_C_GetShowActorList::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_PerformanceCameraActor_C_GetShowActorList, CallFunc_Array_Add_ReturnValue_1) == 0x000088, "Member 'BP_PerformanceCameraActor_C_GetShowActorList::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PerformanceCameraActor_C_GetShowActorList, CallFunc_Array_Add_ReturnValue_2) == 0x00008C, "Member 'BP_PerformanceCameraActor_C_GetShowActorList::CallFunc_Array_Add_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PerformanceCameraActor_C_GetShowActorList, CallFunc_Array_Length_ReturnValue) == 0x000090, "Member 'BP_PerformanceCameraActor_C_GetShowActorList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PerformanceCameraActor_C_GetShowActorList, CallFunc_Array_Length_ReturnValue_1) == 0x000094, "Member 'BP_PerformanceCameraActor_C_GetShowActorList::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PerformanceCameraActor_C_GetShowActorList, CallFunc_Less_IntInt_ReturnValue) == 0x000098, "Member 'BP_PerformanceCameraActor_C_GetShowActorList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PerformanceCameraActor_C_GetShowActorList, CallFunc_Less_IntInt_ReturnValue_1) == 0x000099, "Member 'BP_PerformanceCameraActor_C_GetShowActorList::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

}

