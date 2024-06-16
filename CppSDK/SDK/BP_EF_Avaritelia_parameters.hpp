#pragma once

 

// Package: BP_EF_Avaritelia

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_EF_Avaritelia.BP_EF_Avaritelia_C.ExecuteUbergraph_BP_EF_Avaritelia
// 0x0040 (0x0040 - 0x0000)
struct BP_EF_Avaritelia_C_ExecuteUbergraph_BP_EF_Avaritelia final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Has_Been_Initd_Variable_1;               // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7CEA[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool Result)>                  K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7CEB[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7CEC[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBCharaCreateComponent*                CallFunc_GetComponentByClass_ReturnValue;          // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_Result;                         // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable_1;                     // 0x003B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EF_Avaritelia_C_ExecuteUbergraph_BP_EF_Avaritelia) == 0x000008, "Wrong alignment on BP_EF_Avaritelia_C_ExecuteUbergraph_BP_EF_Avaritelia");
static_assert(sizeof(BP_EF_Avaritelia_C_ExecuteUbergraph_BP_EF_Avaritelia) == 0x000040, "Wrong size on BP_EF_Avaritelia_C_ExecuteUbergraph_BP_EF_Avaritelia");
static_assert(offsetof(BP_EF_Avaritelia_C_ExecuteUbergraph_BP_EF_Avaritelia, EntryPoint) == 0x000000, "Member 'BP_EF_Avaritelia_C_ExecuteUbergraph_BP_EF_Avaritelia::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_EF_Avaritelia_C_ExecuteUbergraph_BP_EF_Avaritelia, Temp_bool_IsClosed_Variable) == 0x000004, "Member 'BP_EF_Avaritelia_C_ExecuteUbergraph_BP_EF_Avaritelia::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(BP_EF_Avaritelia_C_ExecuteUbergraph_BP_EF_Avaritelia, Temp_bool_Has_Been_Initd_Variable) == 0x000005, "Member 'BP_EF_Avaritelia_C_ExecuteUbergraph_BP_EF_Avaritelia::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(BP_EF_Avaritelia_C_ExecuteUbergraph_BP_EF_Avaritelia, Temp_bool_Has_Been_Initd_Variable_1) == 0x000006, "Member 'BP_EF_Avaritelia_C_ExecuteUbergraph_BP_EF_Avaritelia::Temp_bool_Has_Been_Initd_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_EF_Avaritelia_C_ExecuteUbergraph_BP_EF_Avaritelia, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'BP_EF_Avaritelia_C_ExecuteUbergraph_BP_EF_Avaritelia::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_EF_Avaritelia_C_ExecuteUbergraph_BP_EF_Avaritelia, K2Node_Event_DeltaSeconds) == 0x000018, "Member 'BP_EF_Avaritelia_C_ExecuteUbergraph_BP_EF_Avaritelia::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_EF_Avaritelia_C_ExecuteUbergraph_BP_EF_Avaritelia, CallFunc_GetOwner_ReturnValue) == 0x000020, "Member 'BP_EF_Avaritelia_C_ExecuteUbergraph_BP_EF_Avaritelia::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Avaritelia_C_ExecuteUbergraph_BP_EF_Avaritelia, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'BP_EF_Avaritelia_C_ExecuteUbergraph_BP_EF_Avaritelia::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Avaritelia_C_ExecuteUbergraph_BP_EF_Avaritelia, CallFunc_GetComponentByClass_ReturnValue) == 0x000030, "Member 'BP_EF_Avaritelia_C_ExecuteUbergraph_BP_EF_Avaritelia::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Avaritelia_C_ExecuteUbergraph_BP_EF_Avaritelia, CallFunc_IsValid_ReturnValue_1) == 0x000038, "Member 'BP_EF_Avaritelia_C_ExecuteUbergraph_BP_EF_Avaritelia::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EF_Avaritelia_C_ExecuteUbergraph_BP_EF_Avaritelia, K2Node_CustomEvent_Result) == 0x000039, "Member 'BP_EF_Avaritelia_C_ExecuteUbergraph_BP_EF_Avaritelia::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(BP_EF_Avaritelia_C_ExecuteUbergraph_BP_EF_Avaritelia, K2Node_Event_EndPlayReason) == 0x00003A, "Member 'BP_EF_Avaritelia_C_ExecuteUbergraph_BP_EF_Avaritelia::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(BP_EF_Avaritelia_C_ExecuteUbergraph_BP_EF_Avaritelia, Temp_bool_IsClosed_Variable_1) == 0x00003B, "Member 'BP_EF_Avaritelia_C_ExecuteUbergraph_BP_EF_Avaritelia::Temp_bool_IsClosed_Variable_1' has a wrong offset!");

// Function BP_EF_Avaritelia.BP_EF_Avaritelia_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_EF_Avaritelia_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EF_Avaritelia_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_EF_Avaritelia_C_ReceiveEndPlay");
static_assert(sizeof(BP_EF_Avaritelia_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_EF_Avaritelia_C_ReceiveEndPlay");
static_assert(offsetof(BP_EF_Avaritelia_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_EF_Avaritelia_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function BP_EF_Avaritelia.BP_EF_Avaritelia_C.PartsLoaded
// 0x0001 (0x0001 - 0x0000)
struct BP_EF_Avaritelia_C_PartsLoaded final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EF_Avaritelia_C_PartsLoaded) == 0x000001, "Wrong alignment on BP_EF_Avaritelia_C_PartsLoaded");
static_assert(sizeof(BP_EF_Avaritelia_C_PartsLoaded) == 0x000001, "Wrong size on BP_EF_Avaritelia_C_PartsLoaded");
static_assert(offsetof(BP_EF_Avaritelia_C_PartsLoaded, Result) == 0x000000, "Member 'BP_EF_Avaritelia_C_PartsLoaded::Result' has a wrong offset!");

// Function BP_EF_Avaritelia.BP_EF_Avaritelia_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_EF_Avaritelia_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EF_Avaritelia_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_EF_Avaritelia_C_ReceiveTick");
static_assert(sizeof(BP_EF_Avaritelia_C_ReceiveTick) == 0x000004, "Wrong size on BP_EF_Avaritelia_C_ReceiveTick");
static_assert(offsetof(BP_EF_Avaritelia_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_EF_Avaritelia_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_EF_Avaritelia.BP_EF_Avaritelia_C.CreateCoAvaritiaMID
// 0x0060 (0x0060 - 0x0000)
struct BP_EF_Avaritelia_C_CreateCoAvaritiaMID final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7CED[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_GetAttachParent_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkinnedMeshComponent*                  K2Node_DynamicCast_AsSkinned_Mesh_Component;       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7CEE[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMaterialInterface*>             CallFunc_GetMaterials_ReturnValue;                 // 0x0028(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7CEF[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     CallFunc_Array_Get_Item;                           // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7CF0[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EF_Avaritelia_C_CreateCoAvaritiaMID) == 0x000008, "Wrong alignment on BP_EF_Avaritelia_C_CreateCoAvaritiaMID");
static_assert(sizeof(BP_EF_Avaritelia_C_CreateCoAvaritiaMID) == 0x000060, "Wrong size on BP_EF_Avaritelia_C_CreateCoAvaritiaMID");
static_assert(offsetof(BP_EF_Avaritelia_C_CreateCoAvaritiaMID, Temp_int_Array_Index_Variable) == 0x000000, "Member 'BP_EF_Avaritelia_C_CreateCoAvaritiaMID::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_EF_Avaritelia_C_CreateCoAvaritiaMID, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'BP_EF_Avaritelia_C_CreateCoAvaritiaMID::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_EF_Avaritelia_C_CreateCoAvaritiaMID, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BP_EF_Avaritelia_C_CreateCoAvaritiaMID::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Avaritelia_C_CreateCoAvaritiaMID, CallFunc_GetAttachParent_ReturnValue) == 0x000010, "Member 'BP_EF_Avaritelia_C_CreateCoAvaritiaMID::CallFunc_GetAttachParent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Avaritelia_C_CreateCoAvaritiaMID, K2Node_DynamicCast_AsSkinned_Mesh_Component) == 0x000018, "Member 'BP_EF_Avaritelia_C_CreateCoAvaritiaMID::K2Node_DynamicCast_AsSkinned_Mesh_Component' has a wrong offset!");
static_assert(offsetof(BP_EF_Avaritelia_C_CreateCoAvaritiaMID, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_EF_Avaritelia_C_CreateCoAvaritiaMID::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_EF_Avaritelia_C_CreateCoAvaritiaMID, CallFunc_GetMaterials_ReturnValue) == 0x000028, "Member 'BP_EF_Avaritelia_C_CreateCoAvaritiaMID::CallFunc_GetMaterials_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Avaritelia_C_CreateCoAvaritiaMID, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'BP_EF_Avaritelia_C_CreateCoAvaritiaMID::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Avaritelia_C_CreateCoAvaritiaMID, CallFunc_Array_Get_Item) == 0x000040, "Member 'BP_EF_Avaritelia_C_CreateCoAvaritiaMID::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_EF_Avaritelia_C_CreateCoAvaritiaMID, CallFunc_Less_IntInt_ReturnValue) == 0x000048, "Member 'BP_EF_Avaritelia_C_CreateCoAvaritiaMID::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Avaritelia_C_CreateCoAvaritiaMID, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000050, "Member 'BP_EF_Avaritelia_C_CreateCoAvaritiaMID::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Avaritelia_C_CreateCoAvaritiaMID, CallFunc_Array_Add_ReturnValue) == 0x000058, "Member 'BP_EF_Avaritelia_C_CreateCoAvaritiaMID::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function BP_EF_Avaritelia.BP_EF_Avaritelia_C.SetCoAvaritiaParam
// 0x0078 (0x0078 - 0x0000)
struct BP_EF_Avaritelia_C_SetCoAvaritiaParam final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_GetAttachParent_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7CF1[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue;            // 0x002C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_Conv_VectorToLinearColor_ReturnValue;     // 0x003C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7CF2[0x3];                                     // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_Array_Get_Item_1;                         // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7CF3[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_Array_Get_Item_2;                         // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7CF4[0x3];                                     // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EF_Avaritelia_C_SetCoAvaritiaParam) == 0x000008, "Wrong alignment on BP_EF_Avaritelia_C_SetCoAvaritiaParam");
static_assert(sizeof(BP_EF_Avaritelia_C_SetCoAvaritiaParam) == 0x000078, "Wrong size on BP_EF_Avaritelia_C_SetCoAvaritiaParam");
static_assert(offsetof(BP_EF_Avaritelia_C_SetCoAvaritiaParam, Temp_int_Variable) == 0x000000, "Member 'BP_EF_Avaritelia_C_SetCoAvaritiaParam::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_EF_Avaritelia_C_SetCoAvaritiaParam, Temp_int_Variable_1) == 0x000004, "Member 'BP_EF_Avaritelia_C_SetCoAvaritiaParam::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_EF_Avaritelia_C_SetCoAvaritiaParam, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BP_EF_Avaritelia_C_SetCoAvaritiaParam::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Avaritelia_C_SetCoAvaritiaParam, CallFunc_Add_IntInt_ReturnValue_1) == 0x00000C, "Member 'BP_EF_Avaritelia_C_SetCoAvaritiaParam::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EF_Avaritelia_C_SetCoAvaritiaParam, Temp_int_Variable_2) == 0x000010, "Member 'BP_EF_Avaritelia_C_SetCoAvaritiaParam::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_EF_Avaritelia_C_SetCoAvaritiaParam, CallFunc_Add_IntInt_ReturnValue_2) == 0x000014, "Member 'BP_EF_Avaritelia_C_SetCoAvaritiaParam::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_EF_Avaritelia_C_SetCoAvaritiaParam, CallFunc_GetAttachParent_ReturnValue) == 0x000018, "Member 'BP_EF_Avaritelia_C_SetCoAvaritiaParam::CallFunc_GetAttachParent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Avaritelia_C_SetCoAvaritiaParam, CallFunc_Array_Get_Item) == 0x000020, "Member 'BP_EF_Avaritelia_C_SetCoAvaritiaParam::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_EF_Avaritelia_C_SetCoAvaritiaParam, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'BP_EF_Avaritelia_C_SetCoAvaritiaParam::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Avaritelia_C_SetCoAvaritiaParam, CallFunc_GetSocketLocation_ReturnValue) == 0x00002C, "Member 'BP_EF_Avaritelia_C_SetCoAvaritiaParam::CallFunc_GetSocketLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Avaritelia_C_SetCoAvaritiaParam, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'BP_EF_Avaritelia_C_SetCoAvaritiaParam::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Avaritelia_C_SetCoAvaritiaParam, CallFunc_Conv_VectorToLinearColor_ReturnValue) == 0x00003C, "Member 'BP_EF_Avaritelia_C_SetCoAvaritiaParam::CallFunc_Conv_VectorToLinearColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Avaritelia_C_SetCoAvaritiaParam, CallFunc_Less_IntInt_ReturnValue) == 0x00004C, "Member 'BP_EF_Avaritelia_C_SetCoAvaritiaParam::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Avaritelia_C_SetCoAvaritiaParam, CallFunc_Array_Get_Item_1) == 0x000050, "Member 'BP_EF_Avaritelia_C_SetCoAvaritiaParam::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_EF_Avaritelia_C_SetCoAvaritiaParam, CallFunc_Array_Length_ReturnValue_1) == 0x000058, "Member 'BP_EF_Avaritelia_C_SetCoAvaritiaParam::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EF_Avaritelia_C_SetCoAvaritiaParam, CallFunc_Array_Get_Item_2) == 0x000060, "Member 'BP_EF_Avaritelia_C_SetCoAvaritiaParam::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(BP_EF_Avaritelia_C_SetCoAvaritiaParam, CallFunc_Less_IntInt_ReturnValue_1) == 0x000068, "Member 'BP_EF_Avaritelia_C_SetCoAvaritiaParam::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EF_Avaritelia_C_SetCoAvaritiaParam, CallFunc_Array_Length_ReturnValue_2) == 0x00006C, "Member 'BP_EF_Avaritelia_C_SetCoAvaritiaParam::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_EF_Avaritelia_C_SetCoAvaritiaParam, CallFunc_Less_IntInt_ReturnValue_2) == 0x000070, "Member 'BP_EF_Avaritelia_C_SetCoAvaritiaParam::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");

// Function BP_EF_Avaritelia.BP_EF_Avaritelia_C.SpawnAravitiaEffect
// 0x0068 (0x0068 - 0x0000)
struct BP_EF_Avaritelia_C_SpawnAravitiaEffect final
{
public:
	class USceneComponent*                        CallFunc_GetAttachParent_ReturnValue;              // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_DynamicCast_AsPrimitive_Component;          // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7CF5[0x2];                                     // 0x0022(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0028(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x0034(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x0040(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_FloatToVector_ReturnValue;           // 0x004C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue;         // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EF_Avaritelia_C_SpawnAravitiaEffect) == 0x000008, "Wrong alignment on BP_EF_Avaritelia_C_SpawnAravitiaEffect");
static_assert(sizeof(BP_EF_Avaritelia_C_SpawnAravitiaEffect) == 0x000068, "Wrong size on BP_EF_Avaritelia_C_SpawnAravitiaEffect");
static_assert(offsetof(BP_EF_Avaritelia_C_SpawnAravitiaEffect, CallFunc_GetAttachParent_ReturnValue) == 0x000000, "Member 'BP_EF_Avaritelia_C_SpawnAravitiaEffect::CallFunc_GetAttachParent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Avaritelia_C_SpawnAravitiaEffect, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'BP_EF_Avaritelia_C_SpawnAravitiaEffect::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Avaritelia_C_SpawnAravitiaEffect, CallFunc_GetOwner_ReturnValue_1) == 0x000010, "Member 'BP_EF_Avaritelia_C_SpawnAravitiaEffect::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EF_Avaritelia_C_SpawnAravitiaEffect, K2Node_DynamicCast_AsPrimitive_Component) == 0x000018, "Member 'BP_EF_Avaritelia_C_SpawnAravitiaEffect::K2Node_DynamicCast_AsPrimitive_Component' has a wrong offset!");
static_assert(offsetof(BP_EF_Avaritelia_C_SpawnAravitiaEffect, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_EF_Avaritelia_C_SpawnAravitiaEffect::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_EF_Avaritelia_C_SpawnAravitiaEffect, CallFunc_IsValid_ReturnValue) == 0x000021, "Member 'BP_EF_Avaritelia_C_SpawnAravitiaEffect::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Avaritelia_C_SpawnAravitiaEffect, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000024, "Member 'BP_EF_Avaritelia_C_SpawnAravitiaEffect::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Avaritelia_C_SpawnAravitiaEffect, CallFunc_BreakTransform_Location) == 0x000028, "Member 'BP_EF_Avaritelia_C_SpawnAravitiaEffect::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(BP_EF_Avaritelia_C_SpawnAravitiaEffect, CallFunc_BreakTransform_Rotation) == 0x000034, "Member 'BP_EF_Avaritelia_C_SpawnAravitiaEffect::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(BP_EF_Avaritelia_C_SpawnAravitiaEffect, CallFunc_BreakTransform_Scale) == 0x000040, "Member 'BP_EF_Avaritelia_C_SpawnAravitiaEffect::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(BP_EF_Avaritelia_C_SpawnAravitiaEffect, CallFunc_Conv_FloatToVector_ReturnValue) == 0x00004C, "Member 'BP_EF_Avaritelia_C_SpawnAravitiaEffect::CallFunc_Conv_FloatToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Avaritelia_C_SpawnAravitiaEffect, CallFunc_SpawnEmitterAttached_ReturnValue) == 0x000058, "Member 'BP_EF_Avaritelia_C_SpawnAravitiaEffect::CallFunc_SpawnEmitterAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Avaritelia_C_SpawnAravitiaEffect, CallFunc_Array_Add_ReturnValue) == 0x000060, "Member 'BP_EF_Avaritelia_C_SpawnAravitiaEffect::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Avaritelia_C_SpawnAravitiaEffect, CallFunc_IsValid_ReturnValue_1) == 0x000064, "Member 'BP_EF_Avaritelia_C_SpawnAravitiaEffect::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function BP_EF_Avaritelia.BP_EF_Avaritelia_C.SetAvaritiaEffectTransform
// 0x00A0 (0x00A0 - 0x0000)
struct BP_EF_Avaritelia_C_SetAvaritiaEffectTransform final
{
public:
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7CF6[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               CallFunc_Array_Get_Item;                           // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7CF7[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetRelativeTransform_SweepHitResult;   // 0x0014(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_EF_Avaritelia_C_SetAvaritiaEffectTransform) == 0x000008, "Wrong alignment on BP_EF_Avaritelia_C_SetAvaritiaEffectTransform");
static_assert(sizeof(BP_EF_Avaritelia_C_SetAvaritiaEffectTransform) == 0x0000A0, "Wrong size on BP_EF_Avaritelia_C_SetAvaritiaEffectTransform");
static_assert(offsetof(BP_EF_Avaritelia_C_SetAvaritiaEffectTransform, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000000, "Member 'BP_EF_Avaritelia_C_SetAvaritiaEffectTransform::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Avaritelia_C_SetAvaritiaEffectTransform, CallFunc_Array_Get_Item) == 0x000008, "Member 'BP_EF_Avaritelia_C_SetAvaritiaEffectTransform::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_EF_Avaritelia_C_SetAvaritiaEffectTransform, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'BP_EF_Avaritelia_C_SetAvaritiaEffectTransform::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Avaritelia_C_SetAvaritiaEffectTransform, CallFunc_K2_SetRelativeTransform_SweepHitResult) == 0x000014, "Member 'BP_EF_Avaritelia_C_SetAvaritiaEffectTransform::CallFunc_K2_SetRelativeTransform_SweepHitResult' has a wrong offset!");

// Function BP_EF_Avaritelia.BP_EF_Avaritelia_C.ActivateAvariteliaEffect
// 0x0028 (0x0028 - 0x0000)
struct BP_EF_Avaritelia_C_ActivateAvariteliaEffect final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7CF8[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7CF9[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EF_Avaritelia_C_ActivateAvariteliaEffect) == 0x000008, "Wrong alignment on BP_EF_Avaritelia_C_ActivateAvariteliaEffect");
static_assert(sizeof(BP_EF_Avaritelia_C_ActivateAvariteliaEffect) == 0x000028, "Wrong size on BP_EF_Avaritelia_C_ActivateAvariteliaEffect");
static_assert(offsetof(BP_EF_Avaritelia_C_ActivateAvariteliaEffect, Temp_int_Array_Index_Variable) == 0x000000, "Member 'BP_EF_Avaritelia_C_ActivateAvariteliaEffect::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_EF_Avaritelia_C_ActivateAvariteliaEffect, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'BP_EF_Avaritelia_C_ActivateAvariteliaEffect::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_EF_Avaritelia_C_ActivateAvariteliaEffect, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BP_EF_Avaritelia_C_ActivateAvariteliaEffect::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Avaritelia_C_ActivateAvariteliaEffect, CallFunc_Not_PreBool_ReturnValue) == 0x00000C, "Member 'BP_EF_Avaritelia_C_ActivateAvariteliaEffect::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Avaritelia_C_ActivateAvariteliaEffect, CallFunc_Array_Get_Item) == 0x000010, "Member 'BP_EF_Avaritelia_C_ActivateAvariteliaEffect::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_EF_Avaritelia_C_ActivateAvariteliaEffect, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'BP_EF_Avaritelia_C_ActivateAvariteliaEffect::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Avaritelia_C_ActivateAvariteliaEffect, CallFunc_Array_Length_ReturnValue) == 0x00001C, "Member 'BP_EF_Avaritelia_C_ActivateAvariteliaEffect::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Avaritelia_C_ActivateAvariteliaEffect, CallFunc_Less_IntInt_ReturnValue) == 0x000020, "Member 'BP_EF_Avaritelia_C_ActivateAvariteliaEffect::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function BP_EF_Avaritelia.BP_EF_Avaritelia_C.DeactivateAvariteliaEffect
// 0x0020 (0x0020 - 0x0000)
struct BP_EF_Avaritelia_C_DeactivateAvariteliaEffect final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7CFA[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EF_Avaritelia_C_DeactivateAvariteliaEffect) == 0x000008, "Wrong alignment on BP_EF_Avaritelia_C_DeactivateAvariteliaEffect");
static_assert(sizeof(BP_EF_Avaritelia_C_DeactivateAvariteliaEffect) == 0x000020, "Wrong size on BP_EF_Avaritelia_C_DeactivateAvariteliaEffect");
static_assert(offsetof(BP_EF_Avaritelia_C_DeactivateAvariteliaEffect, Temp_int_Array_Index_Variable) == 0x000000, "Member 'BP_EF_Avaritelia_C_DeactivateAvariteliaEffect::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_EF_Avaritelia_C_DeactivateAvariteliaEffect, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'BP_EF_Avaritelia_C_DeactivateAvariteliaEffect::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_EF_Avaritelia_C_DeactivateAvariteliaEffect, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BP_EF_Avaritelia_C_DeactivateAvariteliaEffect::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Avaritelia_C_DeactivateAvariteliaEffect, CallFunc_Array_Get_Item) == 0x000010, "Member 'BP_EF_Avaritelia_C_DeactivateAvariteliaEffect::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_EF_Avaritelia_C_DeactivateAvariteliaEffect, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'BP_EF_Avaritelia_C_DeactivateAvariteliaEffect::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Avaritelia_C_DeactivateAvariteliaEffect, CallFunc_IsValid_ReturnValue) == 0x00001C, "Member 'BP_EF_Avaritelia_C_DeactivateAvariteliaEffect::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Avaritelia_C_DeactivateAvariteliaEffect, CallFunc_Less_IntInt_ReturnValue) == 0x00001D, "Member 'BP_EF_Avaritelia_C_DeactivateAvariteliaEffect::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function BP_EF_Avaritelia.BP_EF_Avaritelia_C.DestroyAvariteliaEffect
// 0x0020 (0x0020 - 0x0000)
struct BP_EF_Avaritelia_C_DestroyAvariteliaEffect final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7CFB[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EF_Avaritelia_C_DestroyAvariteliaEffect) == 0x000008, "Wrong alignment on BP_EF_Avaritelia_C_DestroyAvariteliaEffect");
static_assert(sizeof(BP_EF_Avaritelia_C_DestroyAvariteliaEffect) == 0x000020, "Wrong size on BP_EF_Avaritelia_C_DestroyAvariteliaEffect");
static_assert(offsetof(BP_EF_Avaritelia_C_DestroyAvariteliaEffect, Temp_int_Array_Index_Variable) == 0x000000, "Member 'BP_EF_Avaritelia_C_DestroyAvariteliaEffect::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_EF_Avaritelia_C_DestroyAvariteliaEffect, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'BP_EF_Avaritelia_C_DestroyAvariteliaEffect::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_EF_Avaritelia_C_DestroyAvariteliaEffect, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BP_EF_Avaritelia_C_DestroyAvariteliaEffect::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Avaritelia_C_DestroyAvariteliaEffect, CallFunc_Array_Get_Item) == 0x000010, "Member 'BP_EF_Avaritelia_C_DestroyAvariteliaEffect::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_EF_Avaritelia_C_DestroyAvariteliaEffect, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'BP_EF_Avaritelia_C_DestroyAvariteliaEffect::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Avaritelia_C_DestroyAvariteliaEffect, CallFunc_IsValid_ReturnValue) == 0x00001C, "Member 'BP_EF_Avaritelia_C_DestroyAvariteliaEffect::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Avaritelia_C_DestroyAvariteliaEffect, CallFunc_Less_IntInt_ReturnValue) == 0x00001D, "Member 'BP_EF_Avaritelia_C_DestroyAvariteliaEffect::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function BP_EF_Avaritelia.BP_EF_Avaritelia_C.CheckOwnerHidden
// 0x0010 (0x0010 - 0x0000)
struct BP_EF_Avaritelia_C_CheckOwnerHidden final
{
public:
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EF_Avaritelia_C_CheckOwnerHidden) == 0x000008, "Wrong alignment on BP_EF_Avaritelia_C_CheckOwnerHidden");
static_assert(sizeof(BP_EF_Avaritelia_C_CheckOwnerHidden) == 0x000010, "Wrong size on BP_EF_Avaritelia_C_CheckOwnerHidden");
static_assert(offsetof(BP_EF_Avaritelia_C_CheckOwnerHidden, CallFunc_GetOwner_ReturnValue) == 0x000000, "Member 'BP_EF_Avaritelia_C_CheckOwnerHidden::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Avaritelia_C_CheckOwnerHidden, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'BP_EF_Avaritelia_C_CheckOwnerHidden::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_EF_Avaritelia.BP_EF_Avaritelia_C.PlaySound
// 0x0010 (0x0010 - 0x0000)
struct BP_EF_Avaritelia_C_PlaySound final
{
public:
	class UAkAudioEvent*                          PlayEventa;                                        // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostAkEventBySceneComponent_Simple_ReturnValue; // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EF_Avaritelia_C_PlaySound) == 0x000008, "Wrong alignment on BP_EF_Avaritelia_C_PlaySound");
static_assert(sizeof(BP_EF_Avaritelia_C_PlaySound) == 0x000010, "Wrong size on BP_EF_Avaritelia_C_PlaySound");
static_assert(offsetof(BP_EF_Avaritelia_C_PlaySound, PlayEventa) == 0x000000, "Member 'BP_EF_Avaritelia_C_PlaySound::PlayEventa' has a wrong offset!");
static_assert(offsetof(BP_EF_Avaritelia_C_PlaySound, CallFunc_PostAkEventBySceneComponent_Simple_ReturnValue) == 0x000008, "Member 'BP_EF_Avaritelia_C_PlaySound::CallFunc_PostAkEventBySceneComponent_Simple_ReturnValue' has a wrong offset!");

// Function BP_EF_Avaritelia.BP_EF_Avaritelia_C.StopSound
// 0x0004 (0x0004 - 0x0000)
struct BP_EF_Avaritelia_C_StopSound final
{
public:
	int32                                         CallFunc_PostAkEventBySceneComponent_Simple_ReturnValue; // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EF_Avaritelia_C_StopSound) == 0x000004, "Wrong alignment on BP_EF_Avaritelia_C_StopSound");
static_assert(sizeof(BP_EF_Avaritelia_C_StopSound) == 0x000004, "Wrong size on BP_EF_Avaritelia_C_StopSound");
static_assert(offsetof(BP_EF_Avaritelia_C_StopSound, CallFunc_PostAkEventBySceneComponent_Simple_ReturnValue) == 0x000000, "Member 'BP_EF_Avaritelia_C_StopSound::CallFunc_PostAkEventBySceneComponent_Simple_ReturnValue' has a wrong offset!");

}

