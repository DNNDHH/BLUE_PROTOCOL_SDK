#pragma once

 

// Package: BP_TreasureBoxTarget

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.ExecuteUbergraph_BP_TreasureBoxTarget
// 0x0840 (0x0840 - 0x0000)
struct BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9A69[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_InOtherActor;                         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               K2Node_Event_ViewRotation;                         // 0x0010(0x000C)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TDelegate<void(class ASBDestructible* Myself)> K2Node_CreateDelegate_OutputDelegate;              // 0x001C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_9A6A[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBTreasureBoxLotResult                       K2Node_Event_Result;                               // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9A6B[0x6];                                     // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBTreasureBoxLotResult>        K2Node_Event_LotResults;                           // 0x0040(0x0010)(ConstParm, ReferenceParm)
	class FName                                   K2Node_Event_TextId;                               // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetSystemMessage_ReturnValue;             // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class USBPlayerTreasureBoxComponent*          CallFunc_GetPlayerTreasureBoxComponent_ReturnValue; // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0070(0x0018)()
	bool                                          CallFunc_GetIsAutoAllOpenTreasureBox_ReturnValue;  // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x008A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDropPlaySE;                         // 0x008B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetStatus_ReturnValue;                    // 0x008D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetStatus_ReturnValue_1;                  // 0x008E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A6C[0x1];                                     // 0x008F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystem*                        CallFunc_GetDisappearParticle_Particle;            // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A6D[0x3];                                     // 0x009D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x00A0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9A6E[0x4];                                     // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x00B0(0x0030)(IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x00E0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x00EC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x00F8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x0104(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	uint8                                         Pad_9A6F[0x4];                                     // 0x018C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x0190(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            CallFunc_GetStaticMeshLower_StaticMesh;            // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetStaticMesh_ReturnValue;                // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x01A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A70[0x6];                                     // 0x01A2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMesh*                            CallFunc_GetStaticMeshUpper_StaticMesh;            // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult_1;  // 0x01B0(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_SetStaticMesh_ReturnValue_1;              // 0x0238(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0239(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A71[0x6];                                     // 0x023A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystem*                        CallFunc_GetSpawnParticle_Particle;                // 0x0240(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          CallFunc_GetSpawnParticle_DropSE;                  // 0x0248(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        CallFunc_GetSpawnLidParticle_Particle;             // 0x0250(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAkEventVariables                      K2Node_MakeStruct_AkEventVariables;                // 0x0258(0x0040)()
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue;         // 0x0298(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x02A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x02A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A72[0x6];                                     // 0x02A2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_Simple_ReturnValue;  // 0x02A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x02B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A73[0x7];                                     // 0x02B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          CallFunc_GetDisappearSound_AkAudioEvent;           // 0x02B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAkEventVariables                      K2Node_MakeStruct_AkEventVariables_1;              // 0x02C0(0x0040)()
	class UStaticMesh*                            CallFunc_GetStaticMeshLower_StaticMesh_1;          // 0x0300(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostAkEventBySceneComponent_ReturnValue;  // 0x0308(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetStaticMesh_ReturnValue_2;              // 0x030C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_7;                    // 0x030D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A74[0x2];                                     // 0x030E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PostAkEventBySceneComponent_ReturnValue_1; // 0x0310(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0314(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBDestructible*                        K2Node_CustomEvent_Myself;                         // 0x0320(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0328(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0334(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x0340(0x0010)(ConstParm, ReferenceParm)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;           // 0x0350(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_LineTraceSingle_OutHit;                   // 0x035C(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingle_ReturnValue;              // 0x03E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x03E5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x03E6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A75[0x1];                                     // 0x03E7(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x03E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x03EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x03F0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x03FC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x0408(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0414(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0420(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0428(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0430(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0438(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0440(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x0444(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0448(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x044C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0458(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9A76[0x4];                                     // 0x0464(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0468(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBDestructible*                        K2Node_DynamicCast_AsSBDestructible;               // 0x0470(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0478(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A77[0x7];                                     // 0x0479(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0480(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0488(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A78[0x7];                                     // 0x0489(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0490(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x0498(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_8;                    // 0x04A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A79[0x3];                                     // 0x04A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_2;           // 0x04A8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9A7A[0x4];                                     // 0x04B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFallDeadTriggerBox_C*                  K2Node_DynamicCast_AsFall_Dead_Trigger_Box;        // 0x04B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x04C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_9;                    // 0x04C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ActorHasTag_ReturnValue;                  // 0x04C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_10;                   // 0x04C3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A7B[0x4];                                     // 0x04C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTag_ReturnValue;                       // 0x04C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class USBActorVisibilityComponent*            CallFunc_AddComponentByClass_ReturnValue;          // 0x04D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x04E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A7C[0x7];                                     // 0x04E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         Temp_object_Variable_1;                            // 0x04E8(0x0010)(ConstParm, ReferenceParm)
	struct FHitResult                             CallFunc_LineTraceSingle_OutHit_1;                 // 0x04F8(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingle_ReturnValue_1;            // 0x0580(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bBlockingHit_1;            // 0x0581(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap_1;         // 0x0582(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A7D[0x1];                                     // 0x0583(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time_1;                    // 0x0584(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance_1;                // 0x0588(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location_1;                // 0x058C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint_1;             // 0x0598(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal_1;                  // 0x05A4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal_1;            // 0x05B0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9A7E[0x4];                                     // 0x05BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat_1;                 // 0x05C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor_1;                // 0x05C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent_1;            // 0x05D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName_1;             // 0x05D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem_1;                 // 0x05E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex_1;            // 0x05E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex_1;               // 0x05E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart_1;              // 0x05EC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd_1;                // 0x05F8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x0604(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue;          // 0x068C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x068D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A7F[0x2];                                     // 0x068E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         Temp_object_Variable_2;                            // 0x0690(0x0010)(ConstParm, ReferenceParm)
	struct FHitResult                             CallFunc_LineTraceSingle_OutHit_2;                 // 0x06A0(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingle_ReturnValue_2;            // 0x0728(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bBlockingHit_2;            // 0x0729(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap_2;         // 0x072A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A80[0x1];                                     // 0x072B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time_2;                    // 0x072C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance_2;                // 0x0730(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location_2;                // 0x0734(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint_2;             // 0x0740(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal_2;                  // 0x074C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal_2;            // 0x0758(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9A81[0x4];                                     // 0x0764(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat_2;                 // 0x0768(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor_2;                // 0x0770(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent_2;            // 0x0778(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName_2;             // 0x0780(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem_2;                 // 0x0788(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex_2;            // 0x078C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex_2;               // 0x0790(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart_2;              // 0x0794(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd_2;                // 0x07A0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult_1;     // 0x07AC(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue_1;        // 0x0834(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget) == 0x000010, "Wrong alignment on BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget");
static_assert(sizeof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget) == 0x000840, "Wrong size on BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, EntryPoint) == 0x000000, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, K2Node_Event_InOtherActor) == 0x000008, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::K2Node_Event_InOtherActor' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, K2Node_Event_ViewRotation) == 0x000010, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::K2Node_Event_ViewRotation' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, K2Node_CreateDelegate_OutputDelegate) == 0x00001C, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000030, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, K2Node_Event_Result) == 0x000039, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::K2Node_Event_Result' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, K2Node_Event_LotResults) == 0x000040, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::K2Node_Event_LotResults' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, K2Node_Event_TextId) == 0x000050, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::K2Node_Event_TextId' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_GetSystemMessage_ReturnValue) == 0x000058, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_GetSystemMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_GetPlayerTreasureBoxComponent_ReturnValue) == 0x000068, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_GetPlayerTreasureBoxComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_Conv_StringToText_ReturnValue) == 0x000070, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_GetIsAutoAllOpenTreasureBox_ReturnValue) == 0x000088, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_GetIsAutoAllOpenTreasureBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000089, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x00008A, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, K2Node_Event_IsDropPlaySE) == 0x00008B, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::K2Node_Event_IsDropPlaySE' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_IsValid_ReturnValue) == 0x00008C, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_SetStatus_ReturnValue) == 0x00008D, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_SetStatus_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_SetStatus_ReturnValue_1) == 0x00008E, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_SetStatus_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_GetDisappearParticle_Particle) == 0x000090, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_GetDisappearParticle_Particle' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000098, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_IsValid_ReturnValue_1) == 0x00009C, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_MakeVector_ReturnValue) == 0x0000A0, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_K2_GetComponentToWorld_ReturnValue) == 0x0000B0, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_K2_GetComponentToWorld_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_BreakTransform_Location) == 0x0000E0, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_BreakTransform_Rotation) == 0x0000EC, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_BreakTransform_Scale) == 0x0000F8, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x000104, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_SpawnEmitterAtLocation_ReturnValue) == 0x000190, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_SpawnEmitterAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_GetStaticMeshLower_StaticMesh) == 0x000198, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_GetStaticMeshLower_StaticMesh' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_SetStaticMesh_ReturnValue) == 0x0001A0, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_SetStaticMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_IsValid_ReturnValue_2) == 0x0001A1, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_GetStaticMeshUpper_StaticMesh) == 0x0001A8, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_GetStaticMeshUpper_StaticMesh' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_K2_SetRelativeLocation_SweepHitResult_1) == 0x0001B0, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_K2_SetRelativeLocation_SweepHitResult_1' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_SetStaticMesh_ReturnValue_1) == 0x000238, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_SetStaticMesh_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_IsValid_ReturnValue_3) == 0x000239, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_GetSpawnParticle_Particle) == 0x000240, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_GetSpawnParticle_Particle' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_GetSpawnParticle_DropSE) == 0x000248, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_GetSpawnParticle_DropSE' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_GetSpawnLidParticle_Particle) == 0x000250, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_GetSpawnLidParticle_Particle' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, K2Node_MakeStruct_AkEventVariables) == 0x000258, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::K2Node_MakeStruct_AkEventVariables' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_SpawnEmitterAttached_ReturnValue) == 0x000298, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_SpawnEmitterAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_IsValid_ReturnValue_4) == 0x0002A0, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_IsValid_ReturnValue_5) == 0x0002A1, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_SpawnEmitterAttached_Simple_ReturnValue) == 0x0002A8, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_SpawnEmitterAttached_Simple_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_IsValid_ReturnValue_6) == 0x0002B0, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_GetDisappearSound_AkAudioEvent) == 0x0002B8, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_GetDisappearSound_AkAudioEvent' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, K2Node_MakeStruct_AkEventVariables_1) == 0x0002C0, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::K2Node_MakeStruct_AkEventVariables_1' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_GetStaticMeshLower_StaticMesh_1) == 0x000300, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_GetStaticMeshLower_StaticMesh_1' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_PostAkEventBySceneComponent_ReturnValue) == 0x000308, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_PostAkEventBySceneComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_SetStaticMesh_ReturnValue_2) == 0x00030C, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_SetStaticMesh_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_IsValid_ReturnValue_7) == 0x00030D, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_PostAkEventBySceneComponent_ReturnValue_1) == 0x000310, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_PostAkEventBySceneComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000314, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, K2Node_CustomEvent_Myself) == 0x000320, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::K2Node_CustomEvent_Myself' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_Add_VectorVector_ReturnValue) == 0x000328, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000334, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, Temp_object_Variable) == 0x000340, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_Add_VectorVector_ReturnValue_1) == 0x000350, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_LineTraceSingle_OutHit) == 0x00035C, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_LineTraceSingle_OutHit' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_LineTraceSingle_ReturnValue) == 0x0003E4, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_LineTraceSingle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_BreakHitResult_bBlockingHit) == 0x0003E5, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_BreakHitResult_bInitialOverlap) == 0x0003E6, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_BreakHitResult_Time) == 0x0003E8, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_BreakHitResult_Distance) == 0x0003EC, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_BreakHitResult_Location) == 0x0003F0, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_BreakHitResult_ImpactPoint) == 0x0003FC, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_BreakHitResult_Normal) == 0x000408, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_BreakHitResult_ImpactNormal) == 0x000414, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_BreakHitResult_PhysMat) == 0x000420, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_BreakHitResult_HitActor) == 0x000428, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_BreakHitResult_HitComponent) == 0x000430, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_BreakHitResult_HitBoneName) == 0x000438, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_BreakHitResult_HitItem) == 0x000440, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_BreakHitResult_ElementIndex) == 0x000444, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_BreakHitResult_FaceIndex) == 0x000448, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_BreakHitResult_TraceStart) == 0x00044C, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_BreakHitResult_TraceEnd) == 0x000458, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_GetOwner_ReturnValue) == 0x000468, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, K2Node_DynamicCast_AsSBDestructible) == 0x000470, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::K2Node_DynamicCast_AsSBDestructible' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, K2Node_DynamicCast_bSuccess_1) == 0x000478, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000480, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, K2Node_DynamicCast_bSuccess_2) == 0x000488, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000490, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_K2_GetActorLocation_ReturnValue_2) == 0x000498, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_K2_GetActorLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_IsValid_ReturnValue_8) == 0x0004A4, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_IsValid_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_Add_VectorVector_ReturnValue_2) == 0x0004A8, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_Add_VectorVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, K2Node_DynamicCast_AsFall_Dead_Trigger_Box) == 0x0004B8, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::K2Node_DynamicCast_AsFall_Dead_Trigger_Box' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, K2Node_DynamicCast_bSuccess_3) == 0x0004C0, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_IsValid_ReturnValue_9) == 0x0004C1, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_IsValid_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_ActorHasTag_ReturnValue) == 0x0004C2, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_ActorHasTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_IsValid_ReturnValue_10) == 0x0004C3, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_IsValid_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_GetTag_ReturnValue) == 0x0004C8, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_GetTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_AddComponentByClass_ReturnValue) == 0x0004D8, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_AddComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x0004E0, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, Temp_object_Variable_1) == 0x0004E8, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_LineTraceSingle_OutHit_1) == 0x0004F8, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_LineTraceSingle_OutHit_1' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_LineTraceSingle_ReturnValue_1) == 0x000580, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_LineTraceSingle_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_BreakHitResult_bBlockingHit_1) == 0x000581, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_BreakHitResult_bBlockingHit_1' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_BreakHitResult_bInitialOverlap_1) == 0x000582, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_BreakHitResult_bInitialOverlap_1' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_BreakHitResult_Time_1) == 0x000584, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_BreakHitResult_Time_1' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_BreakHitResult_Distance_1) == 0x000588, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_BreakHitResult_Distance_1' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_BreakHitResult_Location_1) == 0x00058C, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_BreakHitResult_Location_1' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_BreakHitResult_ImpactPoint_1) == 0x000598, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_BreakHitResult_ImpactPoint_1' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_BreakHitResult_Normal_1) == 0x0005A4, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_BreakHitResult_Normal_1' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_BreakHitResult_ImpactNormal_1) == 0x0005B0, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_BreakHitResult_ImpactNormal_1' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_BreakHitResult_PhysMat_1) == 0x0005C0, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_BreakHitResult_PhysMat_1' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_BreakHitResult_HitActor_1) == 0x0005C8, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_BreakHitResult_HitActor_1' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_BreakHitResult_HitComponent_1) == 0x0005D0, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_BreakHitResult_HitComponent_1' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_BreakHitResult_HitBoneName_1) == 0x0005D8, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_BreakHitResult_HitBoneName_1' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_BreakHitResult_HitItem_1) == 0x0005E0, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_BreakHitResult_HitItem_1' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_BreakHitResult_ElementIndex_1) == 0x0005E4, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_BreakHitResult_ElementIndex_1' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_BreakHitResult_FaceIndex_1) == 0x0005E8, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_BreakHitResult_FaceIndex_1' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_BreakHitResult_TraceStart_1) == 0x0005EC, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_BreakHitResult_TraceStart_1' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_BreakHitResult_TraceEnd_1) == 0x0005F8, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_BreakHitResult_TraceEnd_1' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_K2_SetActorLocation_SweepHitResult) == 0x000604, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_K2_SetActorLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_K2_SetActorLocation_ReturnValue) == 0x00068C, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_K2_SetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_IsDedicatedServer_ReturnValue) == 0x00068D, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, Temp_object_Variable_2) == 0x000690, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_LineTraceSingle_OutHit_2) == 0x0006A0, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_LineTraceSingle_OutHit_2' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_LineTraceSingle_ReturnValue_2) == 0x000728, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_LineTraceSingle_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_BreakHitResult_bBlockingHit_2) == 0x000729, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_BreakHitResult_bBlockingHit_2' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_BreakHitResult_bInitialOverlap_2) == 0x00072A, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_BreakHitResult_bInitialOverlap_2' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_BreakHitResult_Time_2) == 0x00072C, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_BreakHitResult_Time_2' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_BreakHitResult_Distance_2) == 0x000730, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_BreakHitResult_Distance_2' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_BreakHitResult_Location_2) == 0x000734, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_BreakHitResult_Location_2' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_BreakHitResult_ImpactPoint_2) == 0x000740, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_BreakHitResult_ImpactPoint_2' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_BreakHitResult_Normal_2) == 0x00074C, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_BreakHitResult_Normal_2' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_BreakHitResult_ImpactNormal_2) == 0x000758, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_BreakHitResult_ImpactNormal_2' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_BreakHitResult_PhysMat_2) == 0x000768, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_BreakHitResult_PhysMat_2' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_BreakHitResult_HitActor_2) == 0x000770, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_BreakHitResult_HitActor_2' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_BreakHitResult_HitComponent_2) == 0x000778, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_BreakHitResult_HitComponent_2' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_BreakHitResult_HitBoneName_2) == 0x000780, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_BreakHitResult_HitBoneName_2' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_BreakHitResult_HitItem_2) == 0x000788, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_BreakHitResult_HitItem_2' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_BreakHitResult_ElementIndex_2) == 0x00078C, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_BreakHitResult_ElementIndex_2' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_BreakHitResult_FaceIndex_2) == 0x000790, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_BreakHitResult_FaceIndex_2' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_BreakHitResult_TraceStart_2) == 0x000794, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_BreakHitResult_TraceStart_2' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_BreakHitResult_TraceEnd_2) == 0x0007A0, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_BreakHitResult_TraceEnd_2' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_K2_SetActorLocation_SweepHitResult_1) == 0x0007AC, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_K2_SetActorLocation_SweepHitResult_1' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget, CallFunc_K2_SetActorLocation_ReturnValue_1) == 0x000834, "Member 'BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget::CallFunc_K2_SetActorLocation_ReturnValue_1' has a wrong offset!");

// Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.DestructAfterSetLocation
// 0x0008 (0x0008 - 0x0000)
struct BP_TreasureBoxTarget_C_DestructAfterSetLocation final
{
public:
	class ASBDestructible*                        Myself;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_TreasureBoxTarget_C_DestructAfterSetLocation) == 0x000008, "Wrong alignment on BP_TreasureBoxTarget_C_DestructAfterSetLocation");
static_assert(sizeof(BP_TreasureBoxTarget_C_DestructAfterSetLocation) == 0x000008, "Wrong size on BP_TreasureBoxTarget_C_DestructAfterSetLocation");
static_assert(offsetof(BP_TreasureBoxTarget_C_DestructAfterSetLocation, Myself) == 0x000000, "Member 'BP_TreasureBoxTarget_C_DestructAfterSetLocation::Myself' has a wrong offset!");

// Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.Appear
// 0x0001 (0x0001 - 0x0000)
struct BP_TreasureBoxTarget_C_Appear final
{
public:
	bool                                          IsDropPlaySE;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_TreasureBoxTarget_C_Appear) == 0x000001, "Wrong alignment on BP_TreasureBoxTarget_C_Appear");
static_assert(sizeof(BP_TreasureBoxTarget_C_Appear) == 0x000001, "Wrong size on BP_TreasureBoxTarget_C_Appear");
static_assert(offsetof(BP_TreasureBoxTarget_C_Appear, IsDropPlaySE) == 0x000000, "Member 'BP_TreasureBoxTarget_C_Appear::IsDropPlaySE' has a wrong offset!");

// Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.PostOpenBox
// 0x0020 (0x0020 - 0x0000)
struct BP_TreasureBoxTarget_C_PostOpenBox final
{
public:
	ESBTreasureBoxLotResult                       Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9A82[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBTreasureBoxLotResult>        LotResults;                                        // 0x0008(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FName                                   TextId;                                            // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_TreasureBoxTarget_C_PostOpenBox) == 0x000008, "Wrong alignment on BP_TreasureBoxTarget_C_PostOpenBox");
static_assert(sizeof(BP_TreasureBoxTarget_C_PostOpenBox) == 0x000020, "Wrong size on BP_TreasureBoxTarget_C_PostOpenBox");
static_assert(offsetof(BP_TreasureBoxTarget_C_PostOpenBox, Result) == 0x000000, "Member 'BP_TreasureBoxTarget_C_PostOpenBox::Result' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_PostOpenBox, LotResults) == 0x000008, "Member 'BP_TreasureBoxTarget_C_PostOpenBox::LotResults' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_PostOpenBox, TextId) == 0x000018, "Member 'BP_TreasureBoxTarget_C_PostOpenBox::TextId' has a wrong offset!");

// Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.PreOpenBox
// 0x0018 (0x0018 - 0x0000)
struct BP_TreasureBoxTarget_C_PreOpenBox final
{
public:
	class AActor*                                 InOtherActor;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               ViewRotation;                                      // 0x0008(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_TreasureBoxTarget_C_PreOpenBox) == 0x000008, "Wrong alignment on BP_TreasureBoxTarget_C_PreOpenBox");
static_assert(sizeof(BP_TreasureBoxTarget_C_PreOpenBox) == 0x000018, "Wrong size on BP_TreasureBoxTarget_C_PreOpenBox");
static_assert(offsetof(BP_TreasureBoxTarget_C_PreOpenBox, InOtherActor) == 0x000000, "Member 'BP_TreasureBoxTarget_C_PreOpenBox::InOtherActor' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_PreOpenBox, ViewRotation) == 0x000008, "Member 'BP_TreasureBoxTarget_C_PreOpenBox::ViewRotation' has a wrong offset!");

// Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.BoxOpenEffectFunc
// 0x0070 (0x0070 - 0x0000)
struct BP_TreasureBoxTarget_C_BoxOpenEffectFunc final
{
public:
	bool                                          IsAutoAllOpenTreasureBox;                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A83[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          CallFunc_GetOpenSound_AkAudioEvent;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAkEventVariables                      K2Node_MakeStruct_AkEventVariables;                // 0x0010(0x0040)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A84[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PostAkEventBySceneComponent_ReturnValue;  // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        CallFunc_GetOpenParticle_Particle;                 // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue;         // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_TreasureBoxTarget_C_BoxOpenEffectFunc) == 0x000008, "Wrong alignment on BP_TreasureBoxTarget_C_BoxOpenEffectFunc");
static_assert(sizeof(BP_TreasureBoxTarget_C_BoxOpenEffectFunc) == 0x000070, "Wrong size on BP_TreasureBoxTarget_C_BoxOpenEffectFunc");
static_assert(offsetof(BP_TreasureBoxTarget_C_BoxOpenEffectFunc, IsAutoAllOpenTreasureBox) == 0x000000, "Member 'BP_TreasureBoxTarget_C_BoxOpenEffectFunc::IsAutoAllOpenTreasureBox' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_BoxOpenEffectFunc, CallFunc_GetOpenSound_AkAudioEvent) == 0x000008, "Member 'BP_TreasureBoxTarget_C_BoxOpenEffectFunc::CallFunc_GetOpenSound_AkAudioEvent' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_BoxOpenEffectFunc, K2Node_MakeStruct_AkEventVariables) == 0x000010, "Member 'BP_TreasureBoxTarget_C_BoxOpenEffectFunc::K2Node_MakeStruct_AkEventVariables' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_BoxOpenEffectFunc, CallFunc_IsValid_ReturnValue) == 0x000050, "Member 'BP_TreasureBoxTarget_C_BoxOpenEffectFunc::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_BoxOpenEffectFunc, CallFunc_PostAkEventBySceneComponent_ReturnValue) == 0x000054, "Member 'BP_TreasureBoxTarget_C_BoxOpenEffectFunc::CallFunc_PostAkEventBySceneComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_BoxOpenEffectFunc, CallFunc_GetOpenParticle_Particle) == 0x000058, "Member 'BP_TreasureBoxTarget_C_BoxOpenEffectFunc::CallFunc_GetOpenParticle_Particle' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_BoxOpenEffectFunc, CallFunc_SpawnEmitterAttached_ReturnValue) == 0x000060, "Member 'BP_TreasureBoxTarget_C_BoxOpenEffectFunc::CallFunc_SpawnEmitterAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_BoxOpenEffectFunc, CallFunc_IsValid_ReturnValue_1) == 0x000068, "Member 'BP_TreasureBoxTarget_C_BoxOpenEffectFunc::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_BoxOpenEffectFunc, CallFunc_IsValid_ReturnValue_2) == 0x000069, "Member 'BP_TreasureBoxTarget_C_BoxOpenEffectFunc::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");

// Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.GetStaticMeshLower
// 0x0010 (0x0010 - 0x0000)
struct BP_TreasureBoxTarget_C_GetStaticMeshLower final
{
public:
	class UStaticMesh*                            StaticMesh;                                        // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_TreasureBoxTarget_C_GetStaticMeshLower) == 0x000008, "Wrong alignment on BP_TreasureBoxTarget_C_GetStaticMeshLower");
static_assert(sizeof(BP_TreasureBoxTarget_C_GetStaticMeshLower) == 0x000010, "Wrong size on BP_TreasureBoxTarget_C_GetStaticMeshLower");
static_assert(offsetof(BP_TreasureBoxTarget_C_GetStaticMeshLower, StaticMesh) == 0x000000, "Member 'BP_TreasureBoxTarget_C_GetStaticMeshLower::StaticMesh' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_GetStaticMeshLower, K2Node_SwitchEnum_CmpSuccess) == 0x000008, "Member 'BP_TreasureBoxTarget_C_GetStaticMeshLower::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.GetStaticMeshUpper
// 0x0010 (0x0010 - 0x0000)
struct BP_TreasureBoxTarget_C_GetStaticMeshUpper final
{
public:
	class UStaticMesh*                            StaticMesh;                                        // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_TreasureBoxTarget_C_GetStaticMeshUpper) == 0x000008, "Wrong alignment on BP_TreasureBoxTarget_C_GetStaticMeshUpper");
static_assert(sizeof(BP_TreasureBoxTarget_C_GetStaticMeshUpper) == 0x000010, "Wrong size on BP_TreasureBoxTarget_C_GetStaticMeshUpper");
static_assert(offsetof(BP_TreasureBoxTarget_C_GetStaticMeshUpper, StaticMesh) == 0x000000, "Member 'BP_TreasureBoxTarget_C_GetStaticMeshUpper::StaticMesh' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_GetStaticMeshUpper, K2Node_SwitchEnum_CmpSuccess) == 0x000008, "Member 'BP_TreasureBoxTarget_C_GetStaticMeshUpper::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.GetSpawnParticle
// 0x0020 (0x0020 - 0x0000)
struct BP_TreasureBoxTarget_C_GetSpawnParticle final
{
public:
	class UAkAudioEvent*                          DropSE1;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        Particle;                                          // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          DropSE;                                            // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_TreasureBoxTarget_C_GetSpawnParticle) == 0x000008, "Wrong alignment on BP_TreasureBoxTarget_C_GetSpawnParticle");
static_assert(sizeof(BP_TreasureBoxTarget_C_GetSpawnParticle) == 0x000020, "Wrong size on BP_TreasureBoxTarget_C_GetSpawnParticle");
static_assert(offsetof(BP_TreasureBoxTarget_C_GetSpawnParticle, DropSE1) == 0x000000, "Member 'BP_TreasureBoxTarget_C_GetSpawnParticle::DropSE1' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_GetSpawnParticle, Particle) == 0x000008, "Member 'BP_TreasureBoxTarget_C_GetSpawnParticle::Particle' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_GetSpawnParticle, DropSE) == 0x000010, "Member 'BP_TreasureBoxTarget_C_GetSpawnParticle::DropSE' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_GetSpawnParticle, K2Node_SwitchEnum_CmpSuccess) == 0x000018, "Member 'BP_TreasureBoxTarget_C_GetSpawnParticle::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.GetSpawnLidParticle
// 0x0010 (0x0010 - 0x0000)
struct BP_TreasureBoxTarget_C_GetSpawnLidParticle final
{
public:
	class UParticleSystem*                        Particle;                                          // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_TreasureBoxTarget_C_GetSpawnLidParticle) == 0x000008, "Wrong alignment on BP_TreasureBoxTarget_C_GetSpawnLidParticle");
static_assert(sizeof(BP_TreasureBoxTarget_C_GetSpawnLidParticle) == 0x000010, "Wrong size on BP_TreasureBoxTarget_C_GetSpawnLidParticle");
static_assert(offsetof(BP_TreasureBoxTarget_C_GetSpawnLidParticle, Particle) == 0x000000, "Member 'BP_TreasureBoxTarget_C_GetSpawnLidParticle::Particle' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_GetSpawnLidParticle, K2Node_SwitchEnum_CmpSuccess) == 0x000008, "Member 'BP_TreasureBoxTarget_C_GetSpawnLidParticle::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.GetOpenParticle
// 0x0010 (0x0010 - 0x0000)
struct BP_TreasureBoxTarget_C_GetOpenParticle final
{
public:
	class UParticleSystem*                        Particle;                                          // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_TreasureBoxTarget_C_GetOpenParticle) == 0x000008, "Wrong alignment on BP_TreasureBoxTarget_C_GetOpenParticle");
static_assert(sizeof(BP_TreasureBoxTarget_C_GetOpenParticle) == 0x000010, "Wrong size on BP_TreasureBoxTarget_C_GetOpenParticle");
static_assert(offsetof(BP_TreasureBoxTarget_C_GetOpenParticle, Particle) == 0x000000, "Member 'BP_TreasureBoxTarget_C_GetOpenParticle::Particle' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_GetOpenParticle, K2Node_SwitchEnum_CmpSuccess) == 0x000008, "Member 'BP_TreasureBoxTarget_C_GetOpenParticle::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.GetOpenSound
// 0x0010 (0x0010 - 0x0000)
struct BP_TreasureBoxTarget_C_GetOpenSound final
{
public:
	class UAkAudioEvent*                          AkAudioEvent;                                      // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_TreasureBoxTarget_C_GetOpenSound) == 0x000008, "Wrong alignment on BP_TreasureBoxTarget_C_GetOpenSound");
static_assert(sizeof(BP_TreasureBoxTarget_C_GetOpenSound) == 0x000010, "Wrong size on BP_TreasureBoxTarget_C_GetOpenSound");
static_assert(offsetof(BP_TreasureBoxTarget_C_GetOpenSound, AkAudioEvent) == 0x000000, "Member 'BP_TreasureBoxTarget_C_GetOpenSound::AkAudioEvent' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_GetOpenSound, K2Node_SwitchEnum_CmpSuccess) == 0x000008, "Member 'BP_TreasureBoxTarget_C_GetOpenSound::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.GetDisappearParticle
// 0x0010 (0x0010 - 0x0000)
struct BP_TreasureBoxTarget_C_GetDisappearParticle final
{
public:
	class UParticleSystem*                        Particle;                                          // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_TreasureBoxTarget_C_GetDisappearParticle) == 0x000008, "Wrong alignment on BP_TreasureBoxTarget_C_GetDisappearParticle");
static_assert(sizeof(BP_TreasureBoxTarget_C_GetDisappearParticle) == 0x000010, "Wrong size on BP_TreasureBoxTarget_C_GetDisappearParticle");
static_assert(offsetof(BP_TreasureBoxTarget_C_GetDisappearParticle, Particle) == 0x000000, "Member 'BP_TreasureBoxTarget_C_GetDisappearParticle::Particle' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxTarget_C_GetDisappearParticle, K2Node_SwitchEnum_CmpSuccess) == 0x000008, "Member 'BP_TreasureBoxTarget_C_GetDisappearParticle::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.GetDisappearSound
// 0x0008 (0x0008 - 0x0000)
struct BP_TreasureBoxTarget_C_GetDisappearSound final
{
public:
	class UAkAudioEvent*                          AkAudioEvent;                                      // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_TreasureBoxTarget_C_GetDisappearSound) == 0x000008, "Wrong alignment on BP_TreasureBoxTarget_C_GetDisappearSound");
static_assert(sizeof(BP_TreasureBoxTarget_C_GetDisappearSound) == 0x000008, "Wrong size on BP_TreasureBoxTarget_C_GetDisappearSound");
static_assert(offsetof(BP_TreasureBoxTarget_C_GetDisappearSound, AkAudioEvent) == 0x000000, "Member 'BP_TreasureBoxTarget_C_GetDisappearSound::AkAudioEvent' has a wrong offset!");

}

