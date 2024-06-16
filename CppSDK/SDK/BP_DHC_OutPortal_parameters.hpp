#pragma once

 

// Package: BP_DHC_OutPortal

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_DHC_OutPortal.BP_DHC_OutPortal_C.ExecuteUbergraph_BP_DHC_OutPortal
// 0x00B8 (0x00B8 - 0x0000)
struct BP_DHC_OutPortal_C_ExecuteUbergraph_BP_DHC_OutPortal final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6384[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x000C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_6385[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_Other_Actor;                          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               K2Node_Event_View_Rotation;                        // 0x0028(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6386[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6387[0x6];                                     // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class APlayerController*>              K2Node_CustomEvent_PlayerMembers;                  // 0x0048(0x0010)(ConstParm, ReferenceParm)
	class APlayerController*                      CallFunc_Array_Get_Item;                           // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6388[0x4];                                     // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6389[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerCharacter_C*                  K2Node_DynamicCast_AsBP_Player_Character;          // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_638A[0x3];                                     // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        CallFunc_Array_Random_OutItem;                     // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Random_OutIndex;                    // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_638B[0x3];                                     // 0x0095(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_K2_GetComponentRotation_ReturnValue;      // 0x0098(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x00A4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RequestLocalWarpToLocation_ReturnValue;   // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_DHC_OutPortal_C_ExecuteUbergraph_BP_DHC_OutPortal) == 0x000008, "Wrong alignment on BP_DHC_OutPortal_C_ExecuteUbergraph_BP_DHC_OutPortal");
static_assert(sizeof(BP_DHC_OutPortal_C_ExecuteUbergraph_BP_DHC_OutPortal) == 0x0000B8, "Wrong size on BP_DHC_OutPortal_C_ExecuteUbergraph_BP_DHC_OutPortal");
static_assert(offsetof(BP_DHC_OutPortal_C_ExecuteUbergraph_BP_DHC_OutPortal, EntryPoint) == 0x000000, "Member 'BP_DHC_OutPortal_C_ExecuteUbergraph_BP_DHC_OutPortal::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_DHC_OutPortal_C_ExecuteUbergraph_BP_DHC_OutPortal, CallFunc_IsDedicatedServer_ReturnValue) == 0x000004, "Member 'BP_DHC_OutPortal_C_ExecuteUbergraph_BP_DHC_OutPortal::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHC_OutPortal_C_ExecuteUbergraph_BP_DHC_OutPortal, Temp_int_Array_Index_Variable) == 0x000008, "Member 'BP_DHC_OutPortal_C_ExecuteUbergraph_BP_DHC_OutPortal::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_DHC_OutPortal_C_ExecuteUbergraph_BP_DHC_OutPortal, K2Node_CreateDelegate_OutputDelegate) == 0x00000C, "Member 'BP_DHC_OutPortal_C_ExecuteUbergraph_BP_DHC_OutPortal::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_DHC_OutPortal_C_ExecuteUbergraph_BP_DHC_OutPortal, K2Node_Event_Other_Actor) == 0x000020, "Member 'BP_DHC_OutPortal_C_ExecuteUbergraph_BP_DHC_OutPortal::K2Node_Event_Other_Actor' has a wrong offset!");
static_assert(offsetof(BP_DHC_OutPortal_C_ExecuteUbergraph_BP_DHC_OutPortal, K2Node_Event_View_Rotation) == 0x000028, "Member 'BP_DHC_OutPortal_C_ExecuteUbergraph_BP_DHC_OutPortal::K2Node_Event_View_Rotation' has a wrong offset!");
static_assert(offsetof(BP_DHC_OutPortal_C_ExecuteUbergraph_BP_DHC_OutPortal, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000038, "Member 'BP_DHC_OutPortal_C_ExecuteUbergraph_BP_DHC_OutPortal::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(BP_DHC_OutPortal_C_ExecuteUbergraph_BP_DHC_OutPortal, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'BP_DHC_OutPortal_C_ExecuteUbergraph_BP_DHC_OutPortal::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_DHC_OutPortal_C_ExecuteUbergraph_BP_DHC_OutPortal, CallFunc_IsValid_ReturnValue) == 0x000041, "Member 'BP_DHC_OutPortal_C_ExecuteUbergraph_BP_DHC_OutPortal::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHC_OutPortal_C_ExecuteUbergraph_BP_DHC_OutPortal, K2Node_CustomEvent_PlayerMembers) == 0x000048, "Member 'BP_DHC_OutPortal_C_ExecuteUbergraph_BP_DHC_OutPortal::K2Node_CustomEvent_PlayerMembers' has a wrong offset!");
static_assert(offsetof(BP_DHC_OutPortal_C_ExecuteUbergraph_BP_DHC_OutPortal, CallFunc_Array_Get_Item) == 0x000058, "Member 'BP_DHC_OutPortal_C_ExecuteUbergraph_BP_DHC_OutPortal::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_DHC_OutPortal_C_ExecuteUbergraph_BP_DHC_OutPortal, CallFunc_Array_Length_ReturnValue) == 0x000060, "Member 'BP_DHC_OutPortal_C_ExecuteUbergraph_BP_DHC_OutPortal::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHC_OutPortal_C_ExecuteUbergraph_BP_DHC_OutPortal, CallFunc_K2_GetPawn_ReturnValue) == 0x000068, "Member 'BP_DHC_OutPortal_C_ExecuteUbergraph_BP_DHC_OutPortal::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHC_OutPortal_C_ExecuteUbergraph_BP_DHC_OutPortal, CallFunc_IsValid_ReturnValue_1) == 0x000070, "Member 'BP_DHC_OutPortal_C_ExecuteUbergraph_BP_DHC_OutPortal::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DHC_OutPortal_C_ExecuteUbergraph_BP_DHC_OutPortal, K2Node_DynamicCast_AsBP_Player_Character) == 0x000078, "Member 'BP_DHC_OutPortal_C_ExecuteUbergraph_BP_DHC_OutPortal::K2Node_DynamicCast_AsBP_Player_Character' has a wrong offset!");
static_assert(offsetof(BP_DHC_OutPortal_C_ExecuteUbergraph_BP_DHC_OutPortal, K2Node_DynamicCast_bSuccess_1) == 0x000080, "Member 'BP_DHC_OutPortal_C_ExecuteUbergraph_BP_DHC_OutPortal::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_DHC_OutPortal_C_ExecuteUbergraph_BP_DHC_OutPortal, Temp_int_Loop_Counter_Variable) == 0x000084, "Member 'BP_DHC_OutPortal_C_ExecuteUbergraph_BP_DHC_OutPortal::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_DHC_OutPortal_C_ExecuteUbergraph_BP_DHC_OutPortal, CallFunc_Array_Random_OutItem) == 0x000088, "Member 'BP_DHC_OutPortal_C_ExecuteUbergraph_BP_DHC_OutPortal::CallFunc_Array_Random_OutItem' has a wrong offset!");
static_assert(offsetof(BP_DHC_OutPortal_C_ExecuteUbergraph_BP_DHC_OutPortal, CallFunc_Array_Random_OutIndex) == 0x000090, "Member 'BP_DHC_OutPortal_C_ExecuteUbergraph_BP_DHC_OutPortal::CallFunc_Array_Random_OutIndex' has a wrong offset!");
static_assert(offsetof(BP_DHC_OutPortal_C_ExecuteUbergraph_BP_DHC_OutPortal, CallFunc_Less_IntInt_ReturnValue) == 0x000094, "Member 'BP_DHC_OutPortal_C_ExecuteUbergraph_BP_DHC_OutPortal::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHC_OutPortal_C_ExecuteUbergraph_BP_DHC_OutPortal, CallFunc_K2_GetComponentRotation_ReturnValue) == 0x000098, "Member 'BP_DHC_OutPortal_C_ExecuteUbergraph_BP_DHC_OutPortal::CallFunc_K2_GetComponentRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHC_OutPortal_C_ExecuteUbergraph_BP_DHC_OutPortal, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x0000A4, "Member 'BP_DHC_OutPortal_C_ExecuteUbergraph_BP_DHC_OutPortal::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHC_OutPortal_C_ExecuteUbergraph_BP_DHC_OutPortal, CallFunc_Add_IntInt_ReturnValue) == 0x0000B0, "Member 'BP_DHC_OutPortal_C_ExecuteUbergraph_BP_DHC_OutPortal::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHC_OutPortal_C_ExecuteUbergraph_BP_DHC_OutPortal, CallFunc_RequestLocalWarpToLocation_ReturnValue) == 0x0000B4, "Member 'BP_DHC_OutPortal_C_ExecuteUbergraph_BP_DHC_OutPortal::CallFunc_RequestLocalWarpToLocation_ReturnValue' has a wrong offset!");

// Function BP_DHC_OutPortal.BP_DHC_OutPortal_C.TeleportOut
// 0x0010 (0x0010 - 0x0000)
struct BP_DHC_OutPortal_C_TeleportOut final
{
public:
	TArray<class APlayerController*>              Param_PlayerMembers;                               // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BP_DHC_OutPortal_C_TeleportOut) == 0x000008, "Wrong alignment on BP_DHC_OutPortal_C_TeleportOut");
static_assert(sizeof(BP_DHC_OutPortal_C_TeleportOut) == 0x000010, "Wrong size on BP_DHC_OutPortal_C_TeleportOut");
static_assert(offsetof(BP_DHC_OutPortal_C_TeleportOut, Param_PlayerMembers) == 0x000000, "Member 'BP_DHC_OutPortal_C_TeleportOut::Param_PlayerMembers' has a wrong offset!");

// Function BP_DHC_OutPortal.BP_DHC_OutPortal_C.Interacted
// 0x0018 (0x0018 - 0x0000)
struct BP_DHC_OutPortal_C_Interacted final
{
public:
	class AActor*                                 Other_Actor;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               View_Rotation;                                     // 0x0008(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_DHC_OutPortal_C_Interacted) == 0x000008, "Wrong alignment on BP_DHC_OutPortal_C_Interacted");
static_assert(sizeof(BP_DHC_OutPortal_C_Interacted) == 0x000018, "Wrong size on BP_DHC_OutPortal_C_Interacted");
static_assert(offsetof(BP_DHC_OutPortal_C_Interacted, Other_Actor) == 0x000000, "Member 'BP_DHC_OutPortal_C_Interacted::Other_Actor' has a wrong offset!");
static_assert(offsetof(BP_DHC_OutPortal_C_Interacted, View_Rotation) == 0x000008, "Member 'BP_DHC_OutPortal_C_Interacted::View_Rotation' has a wrong offset!");

}

