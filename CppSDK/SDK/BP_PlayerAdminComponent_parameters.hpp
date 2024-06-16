#pragma once

 

// Package: BP_PlayerAdminComponent

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_PlayerAdminComponent.BP_PlayerAdminComponent_C.ExecuteUbergraph_BP_PlayerAdminComponent
// 0x0830 (0x0830 - 0x0000)
struct BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D14[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBAdminBookmarkMisc*                   CallFunc_GetBookmarkMisc_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x0010(0x0010)(ConstParm, ReferenceParm)
	TDelegate<void(EYesNoDialogResult Result)>    K2Node_CreateDelegate_OutputDelegate;              // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	struct FVector2D                              K2Node_Event_WorldLocation2d;                      // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EYesNoDialogResult                            K2Node_CustomEvent_Result_1;                       // 0x0038(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D15[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakVector2D_X;                          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D16[0x3];                                     // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0048(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue_1;                 // 0x0054(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x0060(0x0018)()
	bool                                          CallFunc_IsAdminFuncUnlocked_ReturnValue;          // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAdminFuncUnlocked_ReturnValue_1;        // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D17[0x6];                                     // 0x007A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bWasSuccessful;                 // 0x0088(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D18[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPlayerProfileMenuDetailData           K2Node_CustomEvent_PlayerProfileDetailMenuData;    // 0x0090(0x03F8)(ConstParm)
	int32                                         K2Node_CustomEvent_RetCode;                        // 0x0488(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D19[0x4];                                     // 0x048C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0490(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0498(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D1A[0x7];                                     // 0x0499(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerConcernedList*                 CallFunc_GetConcernedList_ReturnValue;             // 0x04A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_Event_CharacterId_1;                        // 0x04A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FVector                                K2Node_Event_WorldLocation;                        // 0x04B8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAdminFuncUnlocked_ReturnValue_2;        // 0x04C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D1B[0x3];                                     // 0x04C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x04C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_Event_CharacterId;                          // 0x04D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x04E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_CustomEvent_CharacterId;                    // 0x04F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class AActor*>                         Temp_object_Variable_1;                            // 0x0508(0x0010)(ConstParm, ReferenceParm)
	struct FHitResult                             CallFunc_LineTraceSingle_OutHit;                   // 0x0518(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingle_ReturnValue;              // 0x05A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x05A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x05A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D1C[0x1];                                     // 0x05A3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x05A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x05A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x05AC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x05B8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x05C4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x05D0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D1D[0x4];                                     // 0x05DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x05E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x05E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x05F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x05F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0600(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x0604(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0608(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x060C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0618(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0624(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     CallFunc_FindPlayerCharacter_ReturnValue;          // 0x0630(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0638(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D1E[0x3];                                     // 0x0639(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x063C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool bWasSuccessful, struct FPlayerProfileMenuDetailData& PlayerProfileDetailMenuData, int32 RetCode)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0648(0x0010)(ZeroConstructor, NoDestructor)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0658(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_DeprojectMousePositionToWorld_WorldLocation; // 0x0660(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_DeprojectMousePositionToWorld_WorldDirection; // 0x066C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_DeprojectMousePositionToWorld_ReturnValue; // 0x0678(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D1F[0x3];                                     // 0x0679(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x067C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;           // 0x0688(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EYesNoDialogResult Result)>    K2Node_CreateDelegate_OutputDelegate_2;            // 0x0694(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_1D20[0x4];                                     // 0x06A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDialog*                              CallFunc_ShowYesNoDialog_ReturnValue;              // 0x06A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x06B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D21[0x7];                                     // 0x06B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBAdminGotoBookmarkItem*               K2Node_Event_BookmarkData;                         // 0x06B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<EObjectTypeQuery>                      K2Node_MakeArray_Array;                            // 0x06C0(0x0010)(ConstParm, ReferenceParm)
	EYesNoDialogResult                            K2Node_CustomEvent_Result;                         // 0x06D0(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D22[0x3];                                     // 0x06D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_LineTraceSingleForObjects_OutHit;         // 0x06D4(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingleForObjects_ReturnValue;    // 0x075C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x075D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bBlockingHit_1;            // 0x075E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap_1;         // 0x075F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakHitResult_Time_1;                    // 0x0760(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance_1;                // 0x0764(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location_1;                // 0x0768(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint_1;             // 0x0774(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal_1;                  // 0x0780(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal_1;            // 0x078C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat_1;                 // 0x0798(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor_1;                // 0x07A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent_1;            // 0x07A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName_1;             // 0x07B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem_1;                 // 0x07B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex_1;            // 0x07BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex_1;               // 0x07C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart_1;              // 0x07C4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd_1;                // 0x07D0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D23[0x4];                                     // 0x07DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_MakeLiteralText_ReturnValue_1;            // 0x07E0(0x0018)()
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x07F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0800(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D24[0x7];                                     // 0x0801(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDialog*                              CallFunc_ShowYesNoDialog_ReturnValue_1;            // 0x0808(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State;               // 0x0810(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0818(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D25[0x7];                                     // 0x0819(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0820(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent) == 0x000008, "Wrong alignment on BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent");
static_assert(sizeof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent) == 0x000830, "Wrong size on BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, EntryPoint) == 0x000000, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, CallFunc_GetBookmarkMisc_ReturnValue) == 0x000008, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::CallFunc_GetBookmarkMisc_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, Temp_object_Variable) == 0x000010, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, K2Node_CreateDelegate_OutputDelegate) == 0x000020, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, K2Node_Event_WorldLocation2d) == 0x000030, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::K2Node_Event_WorldLocation2d' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, K2Node_CustomEvent_Result_1) == 0x000038, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::K2Node_CustomEvent_Result_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, CallFunc_BreakVector2D_X) == 0x00003C, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, CallFunc_BreakVector2D_Y) == 0x000040, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, K2Node_SwitchEnum_CmpSuccess) == 0x000044, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, CallFunc_MakeVector_ReturnValue) == 0x000048, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, CallFunc_MakeVector_ReturnValue_1) == 0x000054, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::CallFunc_MakeVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, CallFunc_MakeLiteralText_ReturnValue) == 0x000060, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, CallFunc_IsAdminFuncUnlocked_ReturnValue) == 0x000078, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::CallFunc_IsAdminFuncUnlocked_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, CallFunc_IsAdminFuncUnlocked_ReturnValue_1) == 0x000079, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::CallFunc_IsAdminFuncUnlocked_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, CallFunc_GetPlayerController_ReturnValue) == 0x000080, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, K2Node_CustomEvent_bWasSuccessful) == 0x000088, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::K2Node_CustomEvent_bWasSuccessful' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, K2Node_CustomEvent_PlayerProfileDetailMenuData) == 0x000090, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::K2Node_CustomEvent_PlayerProfileDetailMenuData' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, K2Node_CustomEvent_RetCode) == 0x000488, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::K2Node_CustomEvent_RetCode' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000490, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, K2Node_DynamicCast_bSuccess) == 0x000498, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, CallFunc_GetConcernedList_ReturnValue) == 0x0004A0, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::CallFunc_GetConcernedList_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, K2Node_Event_CharacterId_1) == 0x0004A8, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::K2Node_Event_CharacterId_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, K2Node_Event_WorldLocation) == 0x0004B8, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::K2Node_Event_WorldLocation' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, CallFunc_IsAdminFuncUnlocked_ReturnValue_2) == 0x0004C4, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::CallFunc_IsAdminFuncUnlocked_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, CallFunc_Concat_StrStr_ReturnValue) == 0x0004C8, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, K2Node_Event_CharacterId) == 0x0004D8, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::K2Node_Event_CharacterId' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0004E8, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, K2Node_CustomEvent_CharacterId) == 0x0004F8, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::K2Node_CustomEvent_CharacterId' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, Temp_object_Variable_1) == 0x000508, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, CallFunc_LineTraceSingle_OutHit) == 0x000518, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::CallFunc_LineTraceSingle_OutHit' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, CallFunc_LineTraceSingle_ReturnValue) == 0x0005A0, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::CallFunc_LineTraceSingle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, CallFunc_BreakHitResult_bBlockingHit) == 0x0005A1, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, CallFunc_BreakHitResult_bInitialOverlap) == 0x0005A2, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, CallFunc_BreakHitResult_Time) == 0x0005A4, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, CallFunc_BreakHitResult_Distance) == 0x0005A8, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, CallFunc_BreakHitResult_Location) == 0x0005AC, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, CallFunc_BreakHitResult_ImpactPoint) == 0x0005B8, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, CallFunc_BreakHitResult_Normal) == 0x0005C4, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, CallFunc_BreakHitResult_ImpactNormal) == 0x0005D0, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, CallFunc_BreakHitResult_PhysMat) == 0x0005E0, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, CallFunc_BreakHitResult_HitActor) == 0x0005E8, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, CallFunc_BreakHitResult_HitComponent) == 0x0005F0, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, CallFunc_BreakHitResult_HitBoneName) == 0x0005F8, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, CallFunc_BreakHitResult_HitItem) == 0x000600, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, CallFunc_BreakHitResult_ElementIndex) == 0x000604, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, CallFunc_BreakHitResult_FaceIndex) == 0x000608, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, CallFunc_BreakHitResult_TraceStart) == 0x00060C, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, CallFunc_BreakHitResult_TraceEnd) == 0x000618, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, CallFunc_Add_VectorVector_ReturnValue) == 0x000624, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, CallFunc_FindPlayerCharacter_ReturnValue) == 0x000630, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::CallFunc_FindPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, CallFunc_IsValid_ReturnValue) == 0x000638, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, CallFunc_K2_GetActorLocation_ReturnValue) == 0x00063C, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, K2Node_CreateDelegate_OutputDelegate_1) == 0x000648, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, CallFunc_GetPlayerController_ReturnValue_1) == 0x000658, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, CallFunc_DeprojectMousePositionToWorld_WorldLocation) == 0x000660, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::CallFunc_DeprojectMousePositionToWorld_WorldLocation' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, CallFunc_DeprojectMousePositionToWorld_WorldDirection) == 0x00066C, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::CallFunc_DeprojectMousePositionToWorld_WorldDirection' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, CallFunc_DeprojectMousePositionToWorld_ReturnValue) == 0x000678, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::CallFunc_DeprojectMousePositionToWorld_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x00067C, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, CallFunc_Add_VectorVector_ReturnValue_1) == 0x000688, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, K2Node_CreateDelegate_OutputDelegate_2) == 0x000694, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, CallFunc_ShowYesNoDialog_ReturnValue) == 0x0006A8, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::CallFunc_ShowYesNoDialog_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, CallFunc_MakeLiteralByte_ReturnValue) == 0x0006B0, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, K2Node_Event_BookmarkData) == 0x0006B8, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::K2Node_Event_BookmarkData' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, K2Node_MakeArray_Array) == 0x0006C0, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, K2Node_CustomEvent_Result) == 0x0006D0, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, CallFunc_LineTraceSingleForObjects_OutHit) == 0x0006D4, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::CallFunc_LineTraceSingleForObjects_OutHit' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, CallFunc_LineTraceSingleForObjects_ReturnValue) == 0x00075C, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::CallFunc_LineTraceSingleForObjects_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, K2Node_SwitchEnum_CmpSuccess_1) == 0x00075D, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, CallFunc_BreakHitResult_bBlockingHit_1) == 0x00075E, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::CallFunc_BreakHitResult_bBlockingHit_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, CallFunc_BreakHitResult_bInitialOverlap_1) == 0x00075F, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::CallFunc_BreakHitResult_bInitialOverlap_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, CallFunc_BreakHitResult_Time_1) == 0x000760, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::CallFunc_BreakHitResult_Time_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, CallFunc_BreakHitResult_Distance_1) == 0x000764, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::CallFunc_BreakHitResult_Distance_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, CallFunc_BreakHitResult_Location_1) == 0x000768, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::CallFunc_BreakHitResult_Location_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, CallFunc_BreakHitResult_ImpactPoint_1) == 0x000774, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::CallFunc_BreakHitResult_ImpactPoint_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, CallFunc_BreakHitResult_Normal_1) == 0x000780, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::CallFunc_BreakHitResult_Normal_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, CallFunc_BreakHitResult_ImpactNormal_1) == 0x00078C, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::CallFunc_BreakHitResult_ImpactNormal_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, CallFunc_BreakHitResult_PhysMat_1) == 0x000798, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::CallFunc_BreakHitResult_PhysMat_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, CallFunc_BreakHitResult_HitActor_1) == 0x0007A0, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::CallFunc_BreakHitResult_HitActor_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, CallFunc_BreakHitResult_HitComponent_1) == 0x0007A8, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::CallFunc_BreakHitResult_HitComponent_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, CallFunc_BreakHitResult_HitBoneName_1) == 0x0007B0, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::CallFunc_BreakHitResult_HitBoneName_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, CallFunc_BreakHitResult_HitItem_1) == 0x0007B8, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::CallFunc_BreakHitResult_HitItem_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, CallFunc_BreakHitResult_ElementIndex_1) == 0x0007BC, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::CallFunc_BreakHitResult_ElementIndex_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, CallFunc_BreakHitResult_FaceIndex_1) == 0x0007C0, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::CallFunc_BreakHitResult_FaceIndex_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, CallFunc_BreakHitResult_TraceStart_1) == 0x0007C4, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::CallFunc_BreakHitResult_TraceStart_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, CallFunc_BreakHitResult_TraceEnd_1) == 0x0007D0, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::CallFunc_BreakHitResult_TraceEnd_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, CallFunc_MakeLiteralText_ReturnValue_1) == 0x0007E0, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::CallFunc_MakeLiteralText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, K2Node_DynamicCast_AsSBPlayer_Character) == 0x0007F8, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, K2Node_DynamicCast_bSuccess_1) == 0x000800, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, CallFunc_ShowYesNoDialog_ReturnValue_1) == 0x000808, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::CallFunc_ShowYesNoDialog_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, K2Node_DynamicCast_AsSBPlayer_State) == 0x000810, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::K2Node_DynamicCast_AsSBPlayer_State' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, K2Node_DynamicCast_bSuccess_2) == 0x000818, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent, CallFunc_GetCharacterId_ReturnValue) == 0x000820, "Member 'BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");

// Function BP_PlayerAdminComponent.BP_PlayerAdminComponent_C.OnCanfirmGotoBookmarkMapJamp
// 0x0001 (0x0001 - 0x0000)
struct BP_PlayerAdminComponent_C_OnCanfirmGotoBookmarkMapJamp final
{
public:
	EYesNoDialogResult                            Result;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerAdminComponent_C_OnCanfirmGotoBookmarkMapJamp) == 0x000001, "Wrong alignment on BP_PlayerAdminComponent_C_OnCanfirmGotoBookmarkMapJamp");
static_assert(sizeof(BP_PlayerAdminComponent_C_OnCanfirmGotoBookmarkMapJamp) == 0x000001, "Wrong size on BP_PlayerAdminComponent_C_OnCanfirmGotoBookmarkMapJamp");
static_assert(offsetof(BP_PlayerAdminComponent_C_OnCanfirmGotoBookmarkMapJamp, Result) == 0x000000, "Member 'BP_PlayerAdminComponent_C_OnCanfirmGotoBookmarkMapJamp::Result' has a wrong offset!");

// Function BP_PlayerAdminComponent.BP_PlayerAdminComponent_C.ExecuteGotoBookmarkSub
// 0x0008 (0x0008 - 0x0000)
struct BP_PlayerAdminComponent_C_ExecuteGotoBookmarkSub final
{
public:
	class USBAdminGotoBookmarkItem*               BookmarkData;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerAdminComponent_C_ExecuteGotoBookmarkSub) == 0x000008, "Wrong alignment on BP_PlayerAdminComponent_C_ExecuteGotoBookmarkSub");
static_assert(sizeof(BP_PlayerAdminComponent_C_ExecuteGotoBookmarkSub) == 0x000008, "Wrong size on BP_PlayerAdminComponent_C_ExecuteGotoBookmarkSub");
static_assert(offsetof(BP_PlayerAdminComponent_C_ExecuteGotoBookmarkSub, BookmarkData) == 0x000000, "Member 'BP_PlayerAdminComponent_C_ExecuteGotoBookmarkSub::BookmarkData' has a wrong offset!");

// Function BP_PlayerAdminComponent.BP_PlayerAdminComponent_C.SearchPlayerProfile
// 0x0010 (0x0010 - 0x0000)
struct BP_PlayerAdminComponent_C_SearchPlayerProfile final
{
public:
	class FString                                 CharacterId;                                       // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerAdminComponent_C_SearchPlayerProfile) == 0x000008, "Wrong alignment on BP_PlayerAdminComponent_C_SearchPlayerProfile");
static_assert(sizeof(BP_PlayerAdminComponent_C_SearchPlayerProfile) == 0x000010, "Wrong size on BP_PlayerAdminComponent_C_SearchPlayerProfile");
static_assert(offsetof(BP_PlayerAdminComponent_C_SearchPlayerProfile, CharacterId) == 0x000000, "Member 'BP_PlayerAdminComponent_C_SearchPlayerProfile::CharacterId' has a wrong offset!");

// Function BP_PlayerAdminComponent.BP_PlayerAdminComponent_C.TravelMapToCharacter
// 0x0010 (0x0010 - 0x0000)
struct BP_PlayerAdminComponent_C_TravelMapToCharacter final
{
public:
	class FString                                 CharacterId;                                       // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerAdminComponent_C_TravelMapToCharacter) == 0x000008, "Wrong alignment on BP_PlayerAdminComponent_C_TravelMapToCharacter");
static_assert(sizeof(BP_PlayerAdminComponent_C_TravelMapToCharacter) == 0x000010, "Wrong size on BP_PlayerAdminComponent_C_TravelMapToCharacter");
static_assert(offsetof(BP_PlayerAdminComponent_C_TravelMapToCharacter, CharacterId) == 0x000000, "Member 'BP_PlayerAdminComponent_C_TravelMapToCharacter::CharacterId' has a wrong offset!");

// Function BP_PlayerAdminComponent.BP_PlayerAdminComponent_C.OutputFoundPlayerInfo
// 0x0020 (0x0020 - 0x0000)
struct BP_PlayerAdminComponent_C_OutputFoundPlayerInfo final
{
public:
	class FString                                 CharacterId;                                       // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FVector                                WorldLocation;                                     // 0x0010(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerAdminComponent_C_OutputFoundPlayerInfo) == 0x000008, "Wrong alignment on BP_PlayerAdminComponent_C_OutputFoundPlayerInfo");
static_assert(sizeof(BP_PlayerAdminComponent_C_OutputFoundPlayerInfo) == 0x000020, "Wrong size on BP_PlayerAdminComponent_C_OutputFoundPlayerInfo");
static_assert(offsetof(BP_PlayerAdminComponent_C_OutputFoundPlayerInfo, CharacterId) == 0x000000, "Member 'BP_PlayerAdminComponent_C_OutputFoundPlayerInfo::CharacterId' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_OutputFoundPlayerInfo, WorldLocation) == 0x000010, "Member 'BP_PlayerAdminComponent_C_OutputFoundPlayerInfo::WorldLocation' has a wrong offset!");

// Function BP_PlayerAdminComponent.BP_PlayerAdminComponent_C.OnIsGetPlayerProfileDetailMenuDataDelegate_Event
// 0x0408 (0x0408 - 0x0000)
struct BP_PlayerAdminComponent_C_OnIsGetPlayerProfileDetailMenuDataDelegate_Event final
{
public:
	bool                                          bWasSuccessful;                                    // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D26[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPlayerProfileMenuDetailData           PlayerProfileDetailMenuData;                       // 0x0008(0x03F8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         RetCode;                                           // 0x0400(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerAdminComponent_C_OnIsGetPlayerProfileDetailMenuDataDelegate_Event) == 0x000008, "Wrong alignment on BP_PlayerAdminComponent_C_OnIsGetPlayerProfileDetailMenuDataDelegate_Event");
static_assert(sizeof(BP_PlayerAdminComponent_C_OnIsGetPlayerProfileDetailMenuDataDelegate_Event) == 0x000408, "Wrong size on BP_PlayerAdminComponent_C_OnIsGetPlayerProfileDetailMenuDataDelegate_Event");
static_assert(offsetof(BP_PlayerAdminComponent_C_OnIsGetPlayerProfileDetailMenuDataDelegate_Event, bWasSuccessful) == 0x000000, "Member 'BP_PlayerAdminComponent_C_OnIsGetPlayerProfileDetailMenuDataDelegate_Event::bWasSuccessful' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_OnIsGetPlayerProfileDetailMenuDataDelegate_Event, PlayerProfileDetailMenuData) == 0x000008, "Member 'BP_PlayerAdminComponent_C_OnIsGetPlayerProfileDetailMenuDataDelegate_Event::PlayerProfileDetailMenuData' has a wrong offset!");
static_assert(offsetof(BP_PlayerAdminComponent_C_OnIsGetPlayerProfileDetailMenuDataDelegate_Event, RetCode) == 0x000400, "Member 'BP_PlayerAdminComponent_C_OnIsGetPlayerProfileDetailMenuDataDelegate_Event::RetCode' has a wrong offset!");

// Function BP_PlayerAdminComponent.BP_PlayerAdminComponent_C.OnConfirmAdminWarp
// 0x0001 (0x0001 - 0x0000)
struct BP_PlayerAdminComponent_C_OnConfirmAdminWarp final
{
public:
	EYesNoDialogResult                            Result;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerAdminComponent_C_OnConfirmAdminWarp) == 0x000001, "Wrong alignment on BP_PlayerAdminComponent_C_OnConfirmAdminWarp");
static_assert(sizeof(BP_PlayerAdminComponent_C_OnConfirmAdminWarp) == 0x000001, "Wrong size on BP_PlayerAdminComponent_C_OnConfirmAdminWarp");
static_assert(offsetof(BP_PlayerAdminComponent_C_OnConfirmAdminWarp, Result) == 0x000000, "Member 'BP_PlayerAdminComponent_C_OnConfirmAdminWarp::Result' has a wrong offset!");

// Function BP_PlayerAdminComponent.BP_PlayerAdminComponent_C.WarpPlayerByMapClick
// 0x0008 (0x0008 - 0x0000)
struct BP_PlayerAdminComponent_C_WarpPlayerByMapClick final
{
public:
	struct FVector2D                              WorldLocation2d;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerAdminComponent_C_WarpPlayerByMapClick) == 0x000004, "Wrong alignment on BP_PlayerAdminComponent_C_WarpPlayerByMapClick");
static_assert(sizeof(BP_PlayerAdminComponent_C_WarpPlayerByMapClick) == 0x000008, "Wrong size on BP_PlayerAdminComponent_C_WarpPlayerByMapClick");
static_assert(offsetof(BP_PlayerAdminComponent_C_WarpPlayerByMapClick, WorldLocation2d) == 0x000000, "Member 'BP_PlayerAdminComponent_C_WarpPlayerByMapClick::WorldLocation2d' has a wrong offset!");

}

