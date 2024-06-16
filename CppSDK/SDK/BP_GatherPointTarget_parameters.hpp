#pragma once

 

// Package: BP_GatherPointTarget

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "GatherIconInfo_structs.hpp"


namespace SDK::Params
{

// Function BP_GatherPointTarget.BP_GatherPointTarget_C.ExecuteUbergraph_BP_GatherPointTarget
// 0x02A0 (0x02A0 - 0x0000)
struct BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_NotSpawnEffect;                       // 0x0004(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_63A5[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_InOtherActor;                         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               K2Node_Event_ViewRotation;                         // 0x0010(0x000C)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_63A6[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerController_C*                 K2Node_DynamicCast_AsBP_Player_Controller;         // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBGatherPointLotResult                       K2Node_Event_Result;                               // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_63A7[0x6];                                     // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FGatherPointLotResult>          K2Node_Event_LotResults;                           // 0x0038(0x0010)(ConstParm, ReferenceParm)
	class ASBPlayerCharacter*                     CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsMounting_ReturnValue;                   // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_63A8[0x1];                                     // 0x0053(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0058(0x0018)()
	class USBPlayerGatherPointComponent*          CallFunc_GetPlayerGatherPointComponent_ReturnValue; // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0078(0x0040)(HasGetValueTypeHash)
	const class USBNetworkDataCache*              CallFunc_GetNetworkDataCache_ReturnValue;          // 0x00B8(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00C0(0x0010)(ReferenceParm)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_63A9[0x7];                                     // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00D8(0x0018)()
	bool                                          CallFunc_IsLiquidMemoryEfficacyActivated_CategoryAndEfficacyType_ReturnValue; // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_63AA[0x7];                                     // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerController_C*                 K2Node_DynamicCast_AsBP_Player_Controller_1;       // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_63AB[0x3];                                     // 0x0109(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGatherIconInfo                        CallFunc_GetDataTableRowFromName_OutRow;           // 0x010C(0x0008)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0114(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_63AC[0x3];                                     // 0x0115(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGatherPointComponent*          CallFunc_GetPlayerGatherPointComponent_ReturnValue_1; // 0x0118(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsElable;                       // 0x0120(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0121(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_63AD[0x2];                                     // 0x0122(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0124(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x0130(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x013C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x0148(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue;          // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_63AE[0x3];                                     // 0x01D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetGatheringMotionReducedTime_ReturnValue; // 0x01D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x01D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EGatherHeight                                 CallFunc_GetGatherPosition_ReturnValue;            // 0x01DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x01DD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_63AF[0x2];                                     // 0x01DE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PostAkEventByActor_Simple_ReturnValue;    // 0x01E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_63B0[0x4];                                     // 0x01E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_GetUserWidgetObject_ReturnValue;          // 0x01E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGatherIcon_C*                          K2Node_DynamicCast_AsGather_Icon;                  // 0x01F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_63B1[0x3];                                     // 0x01F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x01FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_63B2[0x7];                                     // 0x0201(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue_1;         // 0x0208(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerCharacter_C*                  K2Node_DynamicCast_AsBP_Player_Character;          // 0x0210(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_63B3[0x7];                                     // 0x0219(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_GetUserWidgetObject_ReturnValue_1;        // 0x0220(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGatherIcon_C*                          K2Node_DynamicCast_AsGather_Icon_1;                // 0x0228(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x0230(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0231(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_63B4[0x2];                                     // 0x0232(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool IsElable)>                K2Node_CreateDelegate_OutputDelegate;              // 0x0234(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_63B5[0x4];                                     // 0x0244(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_GetUserWidgetObject_ReturnValue_2;        // 0x0248(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGatherIcon_C*                          K2Node_DynamicCast_AsGather_Icon_2;                // 0x0250(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_5;                     // 0x0258(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_63B6[0x7];                                     // 0x0259(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_GetUserWidgetObject_ReturnValue_3;        // 0x0260(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGatherIcon_C*                          K2Node_DynamicCast_AsGather_Icon_3;                // 0x0268(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_6;                     // 0x0270(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_63B7[0x3];                                     // 0x0271(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0274(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0280(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetPlayerInteractCriterionLocation_ReturnValue; // 0x0288(0x000C)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Vector_Distance_ReturnValue;              // 0x0294(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0298(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget) == 0x000008, "Wrong alignment on BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget");
static_assert(sizeof(BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget) == 0x0002A0, "Wrong size on BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget");
static_assert(offsetof(BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget, EntryPoint) == 0x000000, "Member 'BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget, K2Node_Event_NotSpawnEffect) == 0x000004, "Member 'BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget::K2Node_Event_NotSpawnEffect' has a wrong offset!");
static_assert(offsetof(BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget, K2Node_Event_InOtherActor) == 0x000008, "Member 'BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget::K2Node_Event_InOtherActor' has a wrong offset!");
static_assert(offsetof(BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget, K2Node_Event_ViewRotation) == 0x000010, "Member 'BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget::K2Node_Event_ViewRotation' has a wrong offset!");
static_assert(offsetof(BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget, CallFunc_GetPlayerController_ReturnValue) == 0x000020, "Member 'BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget, K2Node_DynamicCast_AsBP_Player_Controller) == 0x000028, "Member 'BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget::K2Node_DynamicCast_AsBP_Player_Controller' has a wrong offset!");
static_assert(offsetof(BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget, K2Node_Event_Result) == 0x000031, "Member 'BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget::K2Node_Event_Result' has a wrong offset!");
static_assert(offsetof(BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget, K2Node_Event_LotResults) == 0x000038, "Member 'BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget::K2Node_Event_LotResults' has a wrong offset!");
static_assert(offsetof(BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000048, "Member 'BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000050, "Member 'BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget, CallFunc_IsMounting_ReturnValue) == 0x000051, "Member 'BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget::CallFunc_IsMounting_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000052, "Member 'BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000054, "Member 'BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget, CallFunc_Conv_IntToText_ReturnValue) == 0x000058, "Member 'BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget, CallFunc_GetPlayerGatherPointComponent_ReturnValue) == 0x000070, "Member 'BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget::CallFunc_GetPlayerGatherPointComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget, K2Node_MakeStruct_FormatArgumentData) == 0x000078, "Member 'BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget, CallFunc_GetNetworkDataCache_ReturnValue) == 0x0000B8, "Member 'BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget, K2Node_MakeArray_Array) == 0x0000C0, "Member 'BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget, CallFunc_IsValid_ReturnValue) == 0x0000D0, "Member 'BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget, CallFunc_Format_ReturnValue) == 0x0000D8, "Member 'BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget, CallFunc_IsLiquidMemoryEfficacyActivated_CategoryAndEfficacyType_ReturnValue) == 0x0000F0, "Member 'BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget::CallFunc_IsLiquidMemoryEfficacyActivated_CategoryAndEfficacyType_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget, CallFunc_GetPlayerController_ReturnValue_1) == 0x0000F8, "Member 'BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget, K2Node_DynamicCast_AsBP_Player_Controller_1) == 0x000100, "Member 'BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget::K2Node_DynamicCast_AsBP_Player_Controller_1' has a wrong offset!");
static_assert(offsetof(BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget, K2Node_DynamicCast_bSuccess_1) == 0x000108, "Member 'BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget, CallFunc_GetDataTableRowFromName_OutRow) == 0x00010C, "Member 'BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000114, "Member 'BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget, CallFunc_GetPlayerGatherPointComponent_ReturnValue_1) == 0x000118, "Member 'BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget::CallFunc_GetPlayerGatherPointComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget, K2Node_CustomEvent_IsElable) == 0x000120, "Member 'BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget::K2Node_CustomEvent_IsElable' has a wrong offset!");
static_assert(offsetof(BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget, K2Node_SwitchEnum_CmpSuccess) == 0x000121, "Member 'BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget, CallFunc_BreakTransform_Location) == 0x000124, "Member 'BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget, CallFunc_BreakTransform_Rotation) == 0x000130, "Member 'BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget, CallFunc_BreakTransform_Scale) == 0x00013C, "Member 'BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget, CallFunc_K2_SetActorLocation_SweepHitResult) == 0x000148, "Member 'BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget::CallFunc_K2_SetActorLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget, CallFunc_K2_SetActorLocation_ReturnValue) == 0x0001D0, "Member 'BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget::CallFunc_K2_SetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget, CallFunc_GetGatheringMotionReducedTime_ReturnValue) == 0x0001D4, "Member 'BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget::CallFunc_GetGatheringMotionReducedTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x0001D8, "Member 'BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget, CallFunc_GetGatherPosition_ReturnValue) == 0x0001DC, "Member 'BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget::CallFunc_GetGatherPosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget, K2Node_SwitchEnum_CmpSuccess_1) == 0x0001DD, "Member 'BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget, CallFunc_PostAkEventByActor_Simple_ReturnValue) == 0x0001E0, "Member 'BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget::CallFunc_PostAkEventByActor_Simple_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget, CallFunc_GetUserWidgetObject_ReturnValue) == 0x0001E8, "Member 'BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget::CallFunc_GetUserWidgetObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget, K2Node_DynamicCast_AsGather_Icon) == 0x0001F0, "Member 'BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget::K2Node_DynamicCast_AsGather_Icon' has a wrong offset!");
static_assert(offsetof(BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget, K2Node_DynamicCast_bSuccess_2) == 0x0001F8, "Member 'BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget, K2Node_Event_DeltaSeconds) == 0x0001FC, "Member 'BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget, CallFunc_IsValid_ReturnValue_1) == 0x000200, "Member 'BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget, CallFunc_GetPlayerCharacter_ReturnValue_1) == 0x000208, "Member 'BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget::CallFunc_GetPlayerCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget, K2Node_DynamicCast_AsBP_Player_Character) == 0x000210, "Member 'BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget::K2Node_DynamicCast_AsBP_Player_Character' has a wrong offset!");
static_assert(offsetof(BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget, K2Node_DynamicCast_bSuccess_3) == 0x000218, "Member 'BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget, CallFunc_GetUserWidgetObject_ReturnValue_1) == 0x000220, "Member 'BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget::CallFunc_GetUserWidgetObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget, K2Node_DynamicCast_AsGather_Icon_1) == 0x000228, "Member 'BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget::K2Node_DynamicCast_AsGather_Icon_1' has a wrong offset!");
static_assert(offsetof(BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget, K2Node_DynamicCast_bSuccess_4) == 0x000230, "Member 'BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget, CallFunc_IsValid_ReturnValue_2) == 0x000231, "Member 'BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget, K2Node_CreateDelegate_OutputDelegate) == 0x000234, "Member 'BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget, CallFunc_GetUserWidgetObject_ReturnValue_2) == 0x000248, "Member 'BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget::CallFunc_GetUserWidgetObject_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget, K2Node_DynamicCast_AsGather_Icon_2) == 0x000250, "Member 'BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget::K2Node_DynamicCast_AsGather_Icon_2' has a wrong offset!");
static_assert(offsetof(BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget, K2Node_DynamicCast_bSuccess_5) == 0x000258, "Member 'BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget, CallFunc_GetUserWidgetObject_ReturnValue_3) == 0x000260, "Member 'BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget::CallFunc_GetUserWidgetObject_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget, K2Node_DynamicCast_AsGather_Icon_3) == 0x000268, "Member 'BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget::K2Node_DynamicCast_AsGather_Icon_3' has a wrong offset!");
static_assert(offsetof(BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget, K2Node_DynamicCast_bSuccess_6) == 0x000270, "Member 'BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget::K2Node_DynamicCast_bSuccess_6' has a wrong offset!");
static_assert(offsetof(BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000274, "Member 'BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000280, "Member 'BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget, CallFunc_GetPlayerInteractCriterionLocation_ReturnValue) == 0x000288, "Member 'BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget::CallFunc_GetPlayerInteractCriterionLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget, CallFunc_Vector_Distance_ReturnValue) == 0x000294, "Member 'BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget::CallFunc_Vector_Distance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000298, "Member 'BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");

// Function BP_GatherPointTarget.BP_GatherPointTarget_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_GatherPointTarget_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GatherPointTarget_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_GatherPointTarget_C_ReceiveTick");
static_assert(sizeof(BP_GatherPointTarget_C_ReceiveTick) == 0x000004, "Wrong size on BP_GatherPointTarget_C_ReceiveTick");
static_assert(offsetof(BP_GatherPointTarget_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_GatherPointTarget_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_GatherPointTarget.BP_GatherPointTarget_C.OnGatherPointEnableDelegate
// 0x0001 (0x0001 - 0x0000)
struct BP_GatherPointTarget_C_OnGatherPointEnableDelegate final
{
public:
	bool                                          IsElable;                                          // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_GatherPointTarget_C_OnGatherPointEnableDelegate) == 0x000001, "Wrong alignment on BP_GatherPointTarget_C_OnGatherPointEnableDelegate");
static_assert(sizeof(BP_GatherPointTarget_C_OnGatherPointEnableDelegate) == 0x000001, "Wrong size on BP_GatherPointTarget_C_OnGatherPointEnableDelegate");
static_assert(offsetof(BP_GatherPointTarget_C_OnGatherPointEnableDelegate, IsElable) == 0x000000, "Member 'BP_GatherPointTarget_C_OnGatherPointEnableDelegate::IsElable' has a wrong offset!");

// Function BP_GatherPointTarget.BP_GatherPointTarget_C.PostInteractPoint
// 0x0018 (0x0018 - 0x0000)
struct BP_GatherPointTarget_C_PostInteractPoint final
{
public:
	ESBGatherPointLotResult                       Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_63B8[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FGatherPointLotResult>          LotResults;                                        // 0x0008(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BP_GatherPointTarget_C_PostInteractPoint) == 0x000008, "Wrong alignment on BP_GatherPointTarget_C_PostInteractPoint");
static_assert(sizeof(BP_GatherPointTarget_C_PostInteractPoint) == 0x000018, "Wrong size on BP_GatherPointTarget_C_PostInteractPoint");
static_assert(offsetof(BP_GatherPointTarget_C_PostInteractPoint, Result) == 0x000000, "Member 'BP_GatherPointTarget_C_PostInteractPoint::Result' has a wrong offset!");
static_assert(offsetof(BP_GatherPointTarget_C_PostInteractPoint, LotResults) == 0x000008, "Member 'BP_GatherPointTarget_C_PostInteractPoint::LotResults' has a wrong offset!");

// Function BP_GatherPointTarget.BP_GatherPointTarget_C.InteractPoint
// 0x0018 (0x0018 - 0x0000)
struct BP_GatherPointTarget_C_InteractPoint final
{
public:
	class AActor*                                 InOtherActor;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               ViewRotation;                                      // 0x0008(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_GatherPointTarget_C_InteractPoint) == 0x000008, "Wrong alignment on BP_GatherPointTarget_C_InteractPoint");
static_assert(sizeof(BP_GatherPointTarget_C_InteractPoint) == 0x000018, "Wrong size on BP_GatherPointTarget_C_InteractPoint");
static_assert(offsetof(BP_GatherPointTarget_C_InteractPoint, InOtherActor) == 0x000000, "Member 'BP_GatherPointTarget_C_InteractPoint::InOtherActor' has a wrong offset!");
static_assert(offsetof(BP_GatherPointTarget_C_InteractPoint, ViewRotation) == 0x000008, "Member 'BP_GatherPointTarget_C_InteractPoint::ViewRotation' has a wrong offset!");

// Function BP_GatherPointTarget.BP_GatherPointTarget_C.Appear
// 0x0001 (0x0001 - 0x0000)
struct BP_GatherPointTarget_C_Appear final
{
public:
	bool                                          NotSpawnEffect;                                    // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_GatherPointTarget_C_Appear) == 0x000001, "Wrong alignment on BP_GatherPointTarget_C_Appear");
static_assert(sizeof(BP_GatherPointTarget_C_Appear) == 0x000001, "Wrong size on BP_GatherPointTarget_C_Appear");
static_assert(offsetof(BP_GatherPointTarget_C_Appear, NotSpawnEffect) == 0x000000, "Member 'BP_GatherPointTarget_C_Appear::NotSpawnEffect' has a wrong offset!");

// Function BP_GatherPointTarget.BP_GatherPointTarget_C.SetVisualHeight
// 0x0128 (0x0128 - 0x0000)
struct BP_GatherPointTarget_C_SetVisualHeight final
{
public:
	struct FVector                                ParticleHeight;                                    // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                InteractCursorHeight;                              // 0x000C(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x0018(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult_1;  // 0x00A0(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_GatherPointTarget_C_SetVisualHeight) == 0x000004, "Wrong alignment on BP_GatherPointTarget_C_SetVisualHeight");
static_assert(sizeof(BP_GatherPointTarget_C_SetVisualHeight) == 0x000128, "Wrong size on BP_GatherPointTarget_C_SetVisualHeight");
static_assert(offsetof(BP_GatherPointTarget_C_SetVisualHeight, ParticleHeight) == 0x000000, "Member 'BP_GatherPointTarget_C_SetVisualHeight::ParticleHeight' has a wrong offset!");
static_assert(offsetof(BP_GatherPointTarget_C_SetVisualHeight, InteractCursorHeight) == 0x00000C, "Member 'BP_GatherPointTarget_C_SetVisualHeight::InteractCursorHeight' has a wrong offset!");
static_assert(offsetof(BP_GatherPointTarget_C_SetVisualHeight, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x000018, "Member 'BP_GatherPointTarget_C_SetVisualHeight::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_GatherPointTarget_C_SetVisualHeight, CallFunc_K2_SetRelativeLocation_SweepHitResult_1) == 0x0000A0, "Member 'BP_GatherPointTarget_C_SetVisualHeight::CallFunc_K2_SetRelativeLocation_SweepHitResult_1' has a wrong offset!");

}

