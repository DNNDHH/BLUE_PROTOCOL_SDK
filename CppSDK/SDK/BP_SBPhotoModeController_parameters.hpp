#pragma once

 

// Package: BP_SBPhotoModeController

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.ExecuteUbergraph_BP_SBPhotoModeController
// 0x1980 (0x1980 - 0x0000)
struct BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8CFB[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x0008(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8CFC[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class AActor*>                         K2Node_MakeArray_Array_1;                          // 0x0040(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item_1;                         // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue_1;        // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue_1;                    // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8CFD[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayName_ReturnValue_1;             // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_Value_6;                        // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_Value_5;                        // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_Value_4;                        // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESkillActionPosition                          K2Node_CustomEvent_Position;                       // 0x0085(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bPressed;                       // 0x0086(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8CFE[0x1];                                     // 0x0087(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_CustomEvent_Value_3;                        // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_Value_2;                        // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_Value_1;                        // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8CFF[0xC];                                     // 0x0094(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPostProcessSettings                   K2Node_MakeStruct_PostProcessSettings;             // 0x00A0(0x0780)()
	class FString                                 CallFunc_Conv_FloatToString_ReturnValue;           // 0x0820(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_Value;                          // 0x0830(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8D00[0x4];                                     // 0x0834(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0838(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_FloatToString_ReturnValue_1;         // 0x0848(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0858(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bValue;                         // 0x0868(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D01[0x7];                                     // 0x0869(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPostProcessSettings                   K2Node_MakeStruct_PostProcessSettings_1;           // 0x0870(0x0780)()
	bool                                          K2Node_CustomEvent_bFocusToPlayer;                 // 0x0FF0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x0FF1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EYesNoDialogResult                            K2Node_CustomEvent_Result;                         // 0x0FF2(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0FF3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D02[0x4];                                     // 0x0FF4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0FF8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerState*                         CallFunc_GetSBPlayerState_ReturnValue;             // 0x1000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPhotoModeImageComponent*             CallFunc_GetPhotoModeImageComponent_ReturnValue;   // 0x1008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x1010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bResult;                        // 0x1020(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_UploadImage_Request_ReturnValue;          // 0x1021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D03[0x2];                                     // 0x1022(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_GetControlRotation_ReturnValue;           // 0x1024(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TDelegate<void(bool bResult)>                 K2Node_CreateDelegate_OutputDelegate;              // 0x1030(0x0010)(ZeroConstructor, NoDestructor)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x1040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x1044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x1048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x104C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_1;      // 0x1058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPhotoModeImageComponent*             CallFunc_GetPhotoModeImageComponent_ReturnValue_1; // 0x1060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bValue;                               // 0x1068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D04[0x7];                                     // 0x1069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      K2Node_Event_OriginalPC_2;                         // 0x1070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      K2Node_Event_RestoredPC;                           // 0x1078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_PossessedPawn;                        // 0x1080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_SBPhotoModePawn_C*                  K2Node_CustomEvent_PhotoModePawn;                  // 0x1088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x1090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_GetControlRotation_ReturnValue_1;         // 0x1094(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class APlayerController*                      K2Node_Event_OriginalPC_1;                         // 0x10A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x10A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x10B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D05[0x7];                                     // 0x10B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      K2Node_Event_OriginalPC;                           // 0x10B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerPhotoModeComponent*            CallFunc_GetPhotoModeComponent_ReturnValue;        // 0x10C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bInPlayerControlMode;                 // 0x10C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bPreChange_1;                         // 0x10C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x10CA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bInTalkMode;                          // 0x10CB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bPreChange;                           // 0x10CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x10CD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x10CE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x10CF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GetCameraResetViewPoint_OutLocation;      // 0x10D0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_GetCameraResetViewPoint_OutRotation;      // 0x10DC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_Value;                                // 0x10E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bByUi;                                // 0x10EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D06[0x3];                                     // 0x10ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x10F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x1100(0x0018)()
	struct FRotator                               CallFunc_GetControlRotation_ReturnValue_2;         // 0x1118(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x1124(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D07[0x3];                                     // 0x1125(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x1128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Roll_1;                      // 0x1130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch_1;                     // 0x1134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw_1;                       // 0x1138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDontDisplayThePhotoModeQuitConfirmDialog_ReturnValue; // 0x113C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D08[0x3];                                     // 0x113D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_MakeRotator_ReturnValue_1;                // 0x1140(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x114C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x114D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x114E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D09[0x1];                                     // 0x114F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_1;     // 0x1150(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FPostProcessSettings                   K2Node_Select_Default;                             // 0x1160(0x0780)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x18E0(0x0018)()
	bool                                          CallFunc_GetConfigSaveManager_IsValid_1;           // 0x18F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D0A[0x7];                                     // 0x18F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_1;       // 0x1900(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x1908(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESBConfigSaveDataResult                       CallFunc_SaveGeneralConfigData_ReturnValue;        // 0x1918(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsShowConfirmQuitDialog_ReturnValue;      // 0x1919(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x191A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D0B[0x5];                                     // 0x191B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBShowYesNoDialog2Impl*                CallFunc_ShowYesNoDialog2_ReturnValue;             // 0x1920(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x1928(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D0C[0x3];                                     // 0x1929(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetCameraLocation_ReturnValue;            // 0x192C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetOriginLocation_ReturnValue;            // 0x1938(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x1944(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x1950(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D0D[0x3];                                     // 0x1951(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_GetControlRotation_ReturnValue_3;         // 0x1954(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakRotator_Roll_2;                      // 0x1960(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch_2;                     // 0x1964(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw_2;                       // 0x1968(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue_2;                // 0x196C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UUMG_PhotoModeControllMenu_C*           CallFunc_Create_ReturnValue;                       // 0x1978(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController) == 0x000010, "Wrong alignment on BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController");
static_assert(sizeof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController) == 0x001980, "Wrong size on BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, EntryPoint) == 0x000000, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, CallFunc_MakeLiteralByte_ReturnValue) == 0x000004, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, K2Node_MakeArray_Array) == 0x000008, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, CallFunc_Array_Get_Item) == 0x000018, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, CallFunc_IsEmpty_ReturnValue) == 0x000020, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000028, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, CallFunc_GetDisplayName_ReturnValue) == 0x000030, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, K2Node_MakeArray_Array_1) == 0x000040, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, CallFunc_Array_Get_Item_1) == 0x000050, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, CallFunc_K2_GetRootComponent_ReturnValue_1) == 0x000058, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::CallFunc_K2_GetRootComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, CallFunc_IsEmpty_ReturnValue_1) == 0x000060, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::CallFunc_IsEmpty_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, CallFunc_GetDisplayName_ReturnValue_1) == 0x000068, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::CallFunc_GetDisplayName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, K2Node_CustomEvent_Value_6) == 0x000078, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::K2Node_CustomEvent_Value_6' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, K2Node_CustomEvent_Value_5) == 0x00007C, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::K2Node_CustomEvent_Value_5' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, K2Node_CustomEvent_Value_4) == 0x000080, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::K2Node_CustomEvent_Value_4' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000084, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, K2Node_CustomEvent_Position) == 0x000085, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::K2Node_CustomEvent_Position' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, K2Node_CustomEvent_bPressed) == 0x000086, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::K2Node_CustomEvent_bPressed' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, K2Node_CustomEvent_Value_3) == 0x000088, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::K2Node_CustomEvent_Value_3' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, K2Node_CustomEvent_Value_2) == 0x00008C, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::K2Node_CustomEvent_Value_2' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, K2Node_CustomEvent_Value_1) == 0x000090, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::K2Node_CustomEvent_Value_1' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, K2Node_MakeStruct_PostProcessSettings) == 0x0000A0, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::K2Node_MakeStruct_PostProcessSettings' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, CallFunc_Conv_FloatToString_ReturnValue) == 0x000820, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::CallFunc_Conv_FloatToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, K2Node_CustomEvent_Value) == 0x000830, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::K2Node_CustomEvent_Value' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, CallFunc_Concat_StrStr_ReturnValue) == 0x000838, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, CallFunc_Conv_FloatToString_ReturnValue_1) == 0x000848, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::CallFunc_Conv_FloatToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000858, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, K2Node_CustomEvent_bValue) == 0x000868, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::K2Node_CustomEvent_bValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, K2Node_MakeStruct_PostProcessSettings_1) == 0x000870, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::K2Node_MakeStruct_PostProcessSettings_1' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, K2Node_CustomEvent_bFocusToPlayer) == 0x000FF0, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::K2Node_CustomEvent_bFocusToPlayer' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x000FF1, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, K2Node_CustomEvent_Result) == 0x000FF2, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000FF3, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, CallFunc_GetSBPlayerController_ReturnValue) == 0x000FF8, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, CallFunc_GetSBPlayerState_ReturnValue) == 0x001000, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::CallFunc_GetSBPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, CallFunc_GetPhotoModeImageComponent_ReturnValue) == 0x001008, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::CallFunc_GetPhotoModeImageComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, CallFunc_GetCharacterId_ReturnValue) == 0x001010, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, K2Node_CustomEvent_bResult) == 0x001020, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::K2Node_CustomEvent_bResult' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, CallFunc_UploadImage_Request_ReturnValue) == 0x001021, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::CallFunc_UploadImage_Request_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, CallFunc_GetControlRotation_ReturnValue) == 0x001024, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::CallFunc_GetControlRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, K2Node_CreateDelegate_OutputDelegate) == 0x001030, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, CallFunc_BreakRotator_Roll) == 0x001040, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, CallFunc_BreakRotator_Pitch) == 0x001044, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, CallFunc_BreakRotator_Yaw) == 0x001048, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, CallFunc_MakeRotator_ReturnValue) == 0x00104C, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, CallFunc_GetSBPlayerController_ReturnValue_1) == 0x001058, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::CallFunc_GetSBPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, CallFunc_GetPhotoModeImageComponent_ReturnValue_1) == 0x001060, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::CallFunc_GetPhotoModeImageComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, K2Node_Event_bValue) == 0x001068, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::K2Node_Event_bValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, K2Node_Event_OriginalPC_2) == 0x001070, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::K2Node_Event_OriginalPC_2' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, K2Node_Event_RestoredPC) == 0x001078, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::K2Node_Event_RestoredPC' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, K2Node_Event_PossessedPawn) == 0x001080, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::K2Node_Event_PossessedPawn' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, K2Node_CustomEvent_PhotoModePawn) == 0x001088, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::K2Node_CustomEvent_PhotoModePawn' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, K2Node_Event_DeltaSeconds) == 0x001090, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, CallFunc_GetControlRotation_ReturnValue_1) == 0x001094, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::CallFunc_GetControlRotation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, K2Node_Event_OriginalPC_1) == 0x0010A0, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::K2Node_Event_OriginalPC_1' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x0010A8, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, K2Node_DynamicCast_bSuccess) == 0x0010B0, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, K2Node_Event_OriginalPC) == 0x0010B8, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::K2Node_Event_OriginalPC' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, CallFunc_GetPhotoModeComponent_ReturnValue) == 0x0010C0, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::CallFunc_GetPhotoModeComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, K2Node_Event_bInPlayerControlMode) == 0x0010C8, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::K2Node_Event_bInPlayerControlMode' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, K2Node_Event_bPreChange_1) == 0x0010C9, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::K2Node_Event_bPreChange_1' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, CallFunc_Not_PreBool_ReturnValue) == 0x0010CA, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, K2Node_Event_bInTalkMode) == 0x0010CB, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::K2Node_Event_bInTalkMode' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, K2Node_Event_bPreChange) == 0x0010CC, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::K2Node_Event_bPreChange' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, CallFunc_Not_PreBool_ReturnValue_1) == 0x0010CD, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, K2Node_Event_EndPlayReason) == 0x0010CE, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, CallFunc_IsValid_ReturnValue) == 0x0010CF, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, CallFunc_GetCameraResetViewPoint_OutLocation) == 0x0010D0, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::CallFunc_GetCameraResetViewPoint_OutLocation' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, CallFunc_GetCameraResetViewPoint_OutRotation) == 0x0010DC, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::CallFunc_GetCameraResetViewPoint_OutRotation' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, K2Node_Event_Value) == 0x0010E8, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::K2Node_Event_Value' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, K2Node_Event_bByUi) == 0x0010EC, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::K2Node_Event_bByUi' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x0010F0, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, CallFunc_Conv_StringToText_ReturnValue) == 0x001100, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, CallFunc_GetControlRotation_ReturnValue_2) == 0x001118, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::CallFunc_GetControlRotation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, CallFunc_GetConfigSaveManager_IsValid) == 0x001124, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, CallFunc_GetConfigSaveManager_ReturnValue) == 0x001128, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, CallFunc_BreakRotator_Roll_1) == 0x001130, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::CallFunc_BreakRotator_Roll_1' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, CallFunc_BreakRotator_Pitch_1) == 0x001134, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::CallFunc_BreakRotator_Pitch_1' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, CallFunc_BreakRotator_Yaw_1) == 0x001138, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::CallFunc_BreakRotator_Yaw_1' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, CallFunc_IsDontDisplayThePhotoModeQuitConfirmDialog_ReturnValue) == 0x00113C, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::CallFunc_IsDontDisplayThePhotoModeQuitConfirmDialog_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, CallFunc_MakeRotator_ReturnValue_1) == 0x001140, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::CallFunc_MakeRotator_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, CallFunc_Not_PreBool_ReturnValue_2) == 0x00114C, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x00114D, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, Temp_bool_Variable) == 0x00114E, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, CallFunc_GetTextFromAssetByName_ReturnValue_1) == 0x001150, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::CallFunc_GetTextFromAssetByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, K2Node_Select_Default) == 0x001160, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0018E0, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, CallFunc_GetConfigSaveManager_IsValid_1) == 0x0018F8, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::CallFunc_GetConfigSaveManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, CallFunc_GetConfigSaveManager_ReturnValue_1) == 0x001900, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::CallFunc_GetConfigSaveManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, CallFunc_GetPlayerId_ReturnValue) == 0x001908, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, CallFunc_SaveGeneralConfigData_ReturnValue) == 0x001918, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::CallFunc_SaveGeneralConfigData_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, CallFunc_IsShowConfirmQuitDialog_ReturnValue) == 0x001919, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::CallFunc_IsShowConfirmQuitDialog_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, CallFunc_BooleanOR_ReturnValue) == 0x00191A, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, CallFunc_ShowYesNoDialog2_ReturnValue) == 0x001920, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::CallFunc_ShowYesNoDialog2_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, K2Node_SwitchEnum_CmpSuccess) == 0x001928, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, CallFunc_GetCameraLocation_ReturnValue) == 0x00192C, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::CallFunc_GetCameraLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, CallFunc_GetOriginLocation_ReturnValue) == 0x001938, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::CallFunc_GetOriginLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, CallFunc_Subtract_VectorVector_ReturnValue) == 0x001944, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, CallFunc_IsValid_ReturnValue_1) == 0x001950, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, CallFunc_GetControlRotation_ReturnValue_3) == 0x001954, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::CallFunc_GetControlRotation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, CallFunc_BreakRotator_Roll_2) == 0x001960, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::CallFunc_BreakRotator_Roll_2' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, CallFunc_BreakRotator_Pitch_2) == 0x001964, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::CallFunc_BreakRotator_Pitch_2' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, CallFunc_BreakRotator_Yaw_2) == 0x001968, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::CallFunc_BreakRotator_Yaw_2' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, CallFunc_MakeRotator_ReturnValue_2) == 0x00196C, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::CallFunc_MakeRotator_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController, CallFunc_Create_ReturnValue) == 0x001978, "Member 'BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController::CallFunc_Create_ReturnValue' has a wrong offset!");

// Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.OnChangeFov
// 0x0008 (0x0008 - 0x0000)
struct BP_SBPhotoModeController_C_OnChangeFov final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bByUi;                                             // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SBPhotoModeController_C_OnChangeFov) == 0x000004, "Wrong alignment on BP_SBPhotoModeController_C_OnChangeFov");
static_assert(sizeof(BP_SBPhotoModeController_C_OnChangeFov) == 0x000008, "Wrong size on BP_SBPhotoModeController_C_OnChangeFov");
static_assert(offsetof(BP_SBPhotoModeController_C_OnChangeFov, Value) == 0x000000, "Member 'BP_SBPhotoModeController_C_OnChangeFov::Value' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_OnChangeFov, bByUi) == 0x000004, "Member 'BP_SBPhotoModeController_C_OnChangeFov::bByUi' has a wrong offset!");

// Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_SBPhotoModeController_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SBPhotoModeController_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_SBPhotoModeController_C_ReceiveEndPlay");
static_assert(sizeof(BP_SBPhotoModeController_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_SBPhotoModeController_C_ReceiveEndPlay");
static_assert(offsetof(BP_SBPhotoModeController_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_SBPhotoModeController_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.OnChangeTalkMode
// 0x0002 (0x0002 - 0x0000)
struct BP_SBPhotoModeController_C_OnChangeTalkMode final
{
public:
	bool                                          bInTalkMode;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bPreChange;                                        // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SBPhotoModeController_C_OnChangeTalkMode) == 0x000001, "Wrong alignment on BP_SBPhotoModeController_C_OnChangeTalkMode");
static_assert(sizeof(BP_SBPhotoModeController_C_OnChangeTalkMode) == 0x000002, "Wrong size on BP_SBPhotoModeController_C_OnChangeTalkMode");
static_assert(offsetof(BP_SBPhotoModeController_C_OnChangeTalkMode, bInTalkMode) == 0x000000, "Member 'BP_SBPhotoModeController_C_OnChangeTalkMode::bInTalkMode' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_OnChangeTalkMode, bPreChange) == 0x000001, "Member 'BP_SBPhotoModeController_C_OnChangeTalkMode::bPreChange' has a wrong offset!");

// Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.OnChangeControlMode
// 0x0002 (0x0002 - 0x0000)
struct BP_SBPhotoModeController_C_OnChangeControlMode final
{
public:
	bool                                          bInPlayerControlMode;                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bPreChange;                                        // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SBPhotoModeController_C_OnChangeControlMode) == 0x000001, "Wrong alignment on BP_SBPhotoModeController_C_OnChangeControlMode");
static_assert(sizeof(BP_SBPhotoModeController_C_OnChangeControlMode) == 0x000002, "Wrong size on BP_SBPhotoModeController_C_OnChangeControlMode");
static_assert(offsetof(BP_SBPhotoModeController_C_OnChangeControlMode, bInPlayerControlMode) == 0x000000, "Member 'BP_SBPhotoModeController_C_OnChangeControlMode::bInPlayerControlMode' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_OnChangeControlMode, bPreChange) == 0x000001, "Member 'BP_SBPhotoModeController_C_OnChangeControlMode::bPreChange' has a wrong offset!");

// Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.ReceiveOnPreDeactivate
// 0x0008 (0x0008 - 0x0000)
struct BP_SBPhotoModeController_C_ReceiveOnPreDeactivate final
{
public:
	class APlayerController*                      OriginalPC;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SBPhotoModeController_C_ReceiveOnPreDeactivate) == 0x000008, "Wrong alignment on BP_SBPhotoModeController_C_ReceiveOnPreDeactivate");
static_assert(sizeof(BP_SBPhotoModeController_C_ReceiveOnPreDeactivate) == 0x000008, "Wrong size on BP_SBPhotoModeController_C_ReceiveOnPreDeactivate");
static_assert(offsetof(BP_SBPhotoModeController_C_ReceiveOnPreDeactivate, OriginalPC) == 0x000000, "Member 'BP_SBPhotoModeController_C_ReceiveOnPreDeactivate::OriginalPC' has a wrong offset!");

// Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.ReceiveOnPostActivate
// 0x0008 (0x0008 - 0x0000)
struct BP_SBPhotoModeController_C_ReceiveOnPostActivate final
{
public:
	class APlayerController*                      OriginalPC;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SBPhotoModeController_C_ReceiveOnPostActivate) == 0x000008, "Wrong alignment on BP_SBPhotoModeController_C_ReceiveOnPostActivate");
static_assert(sizeof(BP_SBPhotoModeController_C_ReceiveOnPostActivate) == 0x000008, "Wrong size on BP_SBPhotoModeController_C_ReceiveOnPostActivate");
static_assert(offsetof(BP_SBPhotoModeController_C_ReceiveOnPostActivate, OriginalPC) == 0x000000, "Member 'BP_SBPhotoModeController_C_ReceiveOnPostActivate::OriginalPC' has a wrong offset!");

// Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_SBPhotoModeController_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SBPhotoModeController_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_SBPhotoModeController_C_ReceiveTick");
static_assert(sizeof(BP_SBPhotoModeController_C_ReceiveTick) == 0x000004, "Wrong size on BP_SBPhotoModeController_C_ReceiveTick");
static_assert(offsetof(BP_SBPhotoModeController_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_SBPhotoModeController_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.OnPossessPhotoModePawn
// 0x0008 (0x0008 - 0x0000)
struct BP_SBPhotoModeController_C_OnPossessPhotoModePawn final
{
public:
	class ABP_SBPhotoModePawn_C*                  Param_PhotoModePawn;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SBPhotoModeController_C_OnPossessPhotoModePawn) == 0x000008, "Wrong alignment on BP_SBPhotoModeController_C_OnPossessPhotoModePawn");
static_assert(sizeof(BP_SBPhotoModeController_C_OnPossessPhotoModePawn) == 0x000008, "Wrong size on BP_SBPhotoModeController_C_OnPossessPhotoModePawn");
static_assert(offsetof(BP_SBPhotoModeController_C_OnPossessPhotoModePawn, Param_PhotoModePawn) == 0x000000, "Member 'BP_SBPhotoModeController_C_OnPossessPhotoModePawn::Param_PhotoModePawn' has a wrong offset!");

// Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.ReceivePossess
// 0x0008 (0x0008 - 0x0000)
struct BP_SBPhotoModeController_C_ReceivePossess final
{
public:
	class APawn*                                  PossessedPawn;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SBPhotoModeController_C_ReceivePossess) == 0x000008, "Wrong alignment on BP_SBPhotoModeController_C_ReceivePossess");
static_assert(sizeof(BP_SBPhotoModeController_C_ReceivePossess) == 0x000008, "Wrong size on BP_SBPhotoModeController_C_ReceivePossess");
static_assert(offsetof(BP_SBPhotoModeController_C_ReceivePossess, PossessedPawn) == 0x000000, "Member 'BP_SBPhotoModeController_C_ReceivePossess::PossessedPawn' has a wrong offset!");

// Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.ReceiveOnDeactivate
// 0x0008 (0x0008 - 0x0000)
struct BP_SBPhotoModeController_C_ReceiveOnDeactivate final
{
public:
	class APlayerController*                      RestoredPC;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SBPhotoModeController_C_ReceiveOnDeactivate) == 0x000008, "Wrong alignment on BP_SBPhotoModeController_C_ReceiveOnDeactivate");
static_assert(sizeof(BP_SBPhotoModeController_C_ReceiveOnDeactivate) == 0x000008, "Wrong size on BP_SBPhotoModeController_C_ReceiveOnDeactivate");
static_assert(offsetof(BP_SBPhotoModeController_C_ReceiveOnDeactivate, RestoredPC) == 0x000000, "Member 'BP_SBPhotoModeController_C_ReceiveOnDeactivate::RestoredPC' has a wrong offset!");

// Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.ReceiveOnActivate
// 0x0008 (0x0008 - 0x0000)
struct BP_SBPhotoModeController_C_ReceiveOnActivate final
{
public:
	class APlayerController*                      OriginalPC;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SBPhotoModeController_C_ReceiveOnActivate) == 0x000008, "Wrong alignment on BP_SBPhotoModeController_C_ReceiveOnActivate");
static_assert(sizeof(BP_SBPhotoModeController_C_ReceiveOnActivate) == 0x000008, "Wrong size on BP_SBPhotoModeController_C_ReceiveOnActivate");
static_assert(offsetof(BP_SBPhotoModeController_C_ReceiveOnActivate, OriginalPC) == 0x000000, "Member 'BP_SBPhotoModeController_C_ReceiveOnActivate::OriginalPC' has a wrong offset!");

// Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.OnChangeLookAtPlayer
// 0x0001 (0x0001 - 0x0000)
struct BP_SBPhotoModeController_C_OnChangeLookAtPlayer final
{
public:
	bool                                          bValue;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SBPhotoModeController_C_OnChangeLookAtPlayer) == 0x000001, "Wrong alignment on BP_SBPhotoModeController_C_OnChangeLookAtPlayer");
static_assert(sizeof(BP_SBPhotoModeController_C_OnChangeLookAtPlayer) == 0x000001, "Wrong size on BP_SBPhotoModeController_C_OnChangeLookAtPlayer");
static_assert(offsetof(BP_SBPhotoModeController_C_OnChangeLookAtPlayer, bValue) == 0x000000, "Member 'BP_SBPhotoModeController_C_OnChangeLookAtPlayer::bValue' has a wrong offset!");

// Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.OnUploadPhotoModeImageDelegate
// 0x0001 (0x0001 - 0x0000)
struct BP_SBPhotoModeController_C_OnUploadPhotoModeImageDelegate final
{
public:
	bool                                          bResult;                                           // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SBPhotoModeController_C_OnUploadPhotoModeImageDelegate) == 0x000001, "Wrong alignment on BP_SBPhotoModeController_C_OnUploadPhotoModeImageDelegate");
static_assert(sizeof(BP_SBPhotoModeController_C_OnUploadPhotoModeImageDelegate) == 0x000001, "Wrong size on BP_SBPhotoModeController_C_OnUploadPhotoModeImageDelegate");
static_assert(offsetof(BP_SBPhotoModeController_C_OnUploadPhotoModeImageDelegate, bResult) == 0x000000, "Member 'BP_SBPhotoModeController_C_OnUploadPhotoModeImageDelegate::bResult' has a wrong offset!");

// Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.OnEndDialogScreenshotCaptuerd
// 0x0001 (0x0001 - 0x0000)
struct BP_SBPhotoModeController_C_OnEndDialogScreenshotCaptuerd final
{
public:
	EYesNoDialogResult                            Result;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SBPhotoModeController_C_OnEndDialogScreenshotCaptuerd) == 0x000001, "Wrong alignment on BP_SBPhotoModeController_C_OnEndDialogScreenshotCaptuerd");
static_assert(sizeof(BP_SBPhotoModeController_C_OnEndDialogScreenshotCaptuerd) == 0x000001, "Wrong size on BP_SBPhotoModeController_C_OnEndDialogScreenshotCaptuerd");
static_assert(offsetof(BP_SBPhotoModeController_C_OnEndDialogScreenshotCaptuerd, Result) == 0x000000, "Member 'BP_SBPhotoModeController_C_OnEndDialogScreenshotCaptuerd::Result' has a wrong offset!");

// Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.SetFocusToPlayer
// 0x0001 (0x0001 - 0x0000)
struct BP_SBPhotoModeController_C_SetFocusToPlayer final
{
public:
	bool                                          Param_bFocusToPlayer;                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SBPhotoModeController_C_SetFocusToPlayer) == 0x000001, "Wrong alignment on BP_SBPhotoModeController_C_SetFocusToPlayer");
static_assert(sizeof(BP_SBPhotoModeController_C_SetFocusToPlayer) == 0x000001, "Wrong size on BP_SBPhotoModeController_C_SetFocusToPlayer");
static_assert(offsetof(BP_SBPhotoModeController_C_SetFocusToPlayer, Param_bFocusToPlayer) == 0x000000, "Member 'BP_SBPhotoModeController_C_SetFocusToPlayer::Param_bFocusToPlayer' has a wrong offset!");

// Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.SetEnableDOF
// 0x0001 (0x0001 - 0x0000)
struct BP_SBPhotoModeController_C_SetEnableDOF final
{
public:
	bool                                          bValue;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SBPhotoModeController_C_SetEnableDOF) == 0x000001, "Wrong alignment on BP_SBPhotoModeController_C_SetEnableDOF");
static_assert(sizeof(BP_SBPhotoModeController_C_SetEnableDOF) == 0x000001, "Wrong size on BP_SBPhotoModeController_C_SetEnableDOF");
static_assert(offsetof(BP_SBPhotoModeController_C_SetEnableDOF, bValue) == 0x000000, "Member 'BP_SBPhotoModeController_C_SetEnableDOF::bValue' has a wrong offset!");

// Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.SetMaxBackgroundRadius
// 0x0004 (0x0004 - 0x0000)
struct BP_SBPhotoModeController_C_SetMaxBackgroundRadius final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SBPhotoModeController_C_SetMaxBackgroundRadius) == 0x000004, "Wrong alignment on BP_SBPhotoModeController_C_SetMaxBackgroundRadius");
static_assert(sizeof(BP_SBPhotoModeController_C_SetMaxBackgroundRadius) == 0x000004, "Wrong size on BP_SBPhotoModeController_C_SetMaxBackgroundRadius");
static_assert(offsetof(BP_SBPhotoModeController_C_SetMaxBackgroundRadius, Value) == 0x000000, "Member 'BP_SBPhotoModeController_C_SetMaxBackgroundRadius::Value' has a wrong offset!");

// Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.SetMaxForegroundRadius
// 0x0004 (0x0004 - 0x0000)
struct BP_SBPhotoModeController_C_SetMaxForegroundRadius final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SBPhotoModeController_C_SetMaxForegroundRadius) == 0x000004, "Wrong alignment on BP_SBPhotoModeController_C_SetMaxForegroundRadius");
static_assert(sizeof(BP_SBPhotoModeController_C_SetMaxForegroundRadius) == 0x000004, "Wrong size on BP_SBPhotoModeController_C_SetMaxForegroundRadius");
static_assert(offsetof(BP_SBPhotoModeController_C_SetMaxForegroundRadius, Value) == 0x000000, "Member 'BP_SBPhotoModeController_C_SetMaxForegroundRadius::Value' has a wrong offset!");

// Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.SetAperture
// 0x0004 (0x0004 - 0x0000)
struct BP_SBPhotoModeController_C_SetAperture final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SBPhotoModeController_C_SetAperture) == 0x000004, "Wrong alignment on BP_SBPhotoModeController_C_SetAperture");
static_assert(sizeof(BP_SBPhotoModeController_C_SetAperture) == 0x000004, "Wrong size on BP_SBPhotoModeController_C_SetAperture");
static_assert(offsetof(BP_SBPhotoModeController_C_SetAperture, Value) == 0x000000, "Member 'BP_SBPhotoModeController_C_SetAperture::Value' has a wrong offset!");

// Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.SetFocalDistance
// 0x0004 (0x0004 - 0x0000)
struct BP_SBPhotoModeController_C_SetFocalDistance final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SBPhotoModeController_C_SetFocalDistance) == 0x000004, "Wrong alignment on BP_SBPhotoModeController_C_SetFocalDistance");
static_assert(sizeof(BP_SBPhotoModeController_C_SetFocalDistance) == 0x000004, "Wrong size on BP_SBPhotoModeController_C_SetFocalDistance");
static_assert(offsetof(BP_SBPhotoModeController_C_SetFocalDistance, Value) == 0x000000, "Member 'BP_SBPhotoModeController_C_SetFocalDistance::Value' has a wrong offset!");

// Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.RequestSkillAction
// 0x0002 (0x0002 - 0x0000)
struct BP_SBPhotoModeController_C_RequestSkillAction final
{
public:
	ESkillActionPosition                          Position;                                          // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bPressed;                                          // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SBPhotoModeController_C_RequestSkillAction) == 0x000001, "Wrong alignment on BP_SBPhotoModeController_C_RequestSkillAction");
static_assert(sizeof(BP_SBPhotoModeController_C_RequestSkillAction) == 0x000002, "Wrong size on BP_SBPhotoModeController_C_RequestSkillAction");
static_assert(offsetof(BP_SBPhotoModeController_C_RequestSkillAction, Position) == 0x000000, "Member 'BP_SBPhotoModeController_C_RequestSkillAction::Position' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_RequestSkillAction, bPressed) == 0x000001, "Member 'BP_SBPhotoModeController_C_RequestSkillAction::bPressed' has a wrong offset!");

// Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.SetCameraRotationYaw
// 0x0004 (0x0004 - 0x0000)
struct BP_SBPhotoModeController_C_SetCameraRotationYaw final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SBPhotoModeController_C_SetCameraRotationYaw) == 0x000004, "Wrong alignment on BP_SBPhotoModeController_C_SetCameraRotationYaw");
static_assert(sizeof(BP_SBPhotoModeController_C_SetCameraRotationYaw) == 0x000004, "Wrong size on BP_SBPhotoModeController_C_SetCameraRotationYaw");
static_assert(offsetof(BP_SBPhotoModeController_C_SetCameraRotationYaw, Value) == 0x000000, "Member 'BP_SBPhotoModeController_C_SetCameraRotationYaw::Value' has a wrong offset!");

// Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.SetCameraRotationPitch
// 0x0004 (0x0004 - 0x0000)
struct BP_SBPhotoModeController_C_SetCameraRotationPitch final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SBPhotoModeController_C_SetCameraRotationPitch) == 0x000004, "Wrong alignment on BP_SBPhotoModeController_C_SetCameraRotationPitch");
static_assert(sizeof(BP_SBPhotoModeController_C_SetCameraRotationPitch) == 0x000004, "Wrong size on BP_SBPhotoModeController_C_SetCameraRotationPitch");
static_assert(offsetof(BP_SBPhotoModeController_C_SetCameraRotationPitch, Value) == 0x000000, "Member 'BP_SBPhotoModeController_C_SetCameraRotationPitch::Value' has a wrong offset!");

// Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.SetCameraRotationRoll
// 0x0004 (0x0004 - 0x0000)
struct BP_SBPhotoModeController_C_SetCameraRotationRoll final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SBPhotoModeController_C_SetCameraRotationRoll) == 0x000004, "Wrong alignment on BP_SBPhotoModeController_C_SetCameraRotationRoll");
static_assert(sizeof(BP_SBPhotoModeController_C_SetCameraRotationRoll) == 0x000004, "Wrong size on BP_SBPhotoModeController_C_SetCameraRotationRoll");
static_assert(offsetof(BP_SBPhotoModeController_C_SetCameraRotationRoll, Value) == 0x000000, "Member 'BP_SBPhotoModeController_C_SetCameraRotationRoll::Value' has a wrong offset!");

// Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.SetControlRotationByUi
// 0x000C (0x000C - 0x0000)
struct BP_SBPhotoModeController_C_SetControlRotationByUi final
{
public:
	struct FRotator                               NewRotation;                                       // 0x0000(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SBPhotoModeController_C_SetControlRotationByUi) == 0x000004, "Wrong alignment on BP_SBPhotoModeController_C_SetControlRotationByUi");
static_assert(sizeof(BP_SBPhotoModeController_C_SetControlRotationByUi) == 0x00000C, "Wrong size on BP_SBPhotoModeController_C_SetControlRotationByUi");
static_assert(offsetof(BP_SBPhotoModeController_C_SetControlRotationByUi, NewRotation) == 0x000000, "Member 'BP_SBPhotoModeController_C_SetControlRotationByUi::NewRotation' has a wrong offset!");

// Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.Tick_Internal
// 0x0068 (0x0068 - 0x0000)
struct BP_SBPhotoModeController_C_Tick_Internal final
{
public:
	struct FVector                                CallFunc_GetOriginLocation_ReturnValue;            // 0x0000(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetCameraLocation_ReturnValue;            // 0x000C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0018(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_VectorVector_ReturnValue;        // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D0E[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0028(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0034(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue_1;      // 0x0040(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D0F[0x3];                                     // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_VSize_ReturnValue;                        // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPhotoMode_ReturnValue;                  // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLookAtPlayer_ReturnValue;               // 0x0055(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0056(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D10[0x1];                                     // 0x0057(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_GetControlRotation_ReturnValue;           // 0x0058(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_RotatorRotator_ReturnValue;      // 0x0065(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SBPhotoModeController_C_Tick_Internal) == 0x000004, "Wrong alignment on BP_SBPhotoModeController_C_Tick_Internal");
static_assert(sizeof(BP_SBPhotoModeController_C_Tick_Internal) == 0x000068, "Wrong size on BP_SBPhotoModeController_C_Tick_Internal");
static_assert(offsetof(BP_SBPhotoModeController_C_Tick_Internal, CallFunc_GetOriginLocation_ReturnValue) == 0x000000, "Member 'BP_SBPhotoModeController_C_Tick_Internal::CallFunc_GetOriginLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_Tick_Internal, CallFunc_GetCameraLocation_ReturnValue) == 0x00000C, "Member 'BP_SBPhotoModeController_C_Tick_Internal::CallFunc_GetCameraLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_Tick_Internal, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000018, "Member 'BP_SBPhotoModeController_C_Tick_Internal::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_Tick_Internal, CallFunc_NotEqual_VectorVector_ReturnValue) == 0x000024, "Member 'BP_SBPhotoModeController_C_Tick_Internal::CallFunc_NotEqual_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_Tick_Internal, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000028, "Member 'BP_SBPhotoModeController_C_Tick_Internal::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_Tick_Internal, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000034, "Member 'BP_SBPhotoModeController_C_Tick_Internal::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_Tick_Internal, CallFunc_Subtract_VectorVector_ReturnValue_1) == 0x000040, "Member 'BP_SBPhotoModeController_C_Tick_Internal::CallFunc_Subtract_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_Tick_Internal, CallFunc_IsValid_ReturnValue) == 0x00004C, "Member 'BP_SBPhotoModeController_C_Tick_Internal::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_Tick_Internal, CallFunc_VSize_ReturnValue) == 0x000050, "Member 'BP_SBPhotoModeController_C_Tick_Internal::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_Tick_Internal, CallFunc_IsPhotoMode_ReturnValue) == 0x000054, "Member 'BP_SBPhotoModeController_C_Tick_Internal::CallFunc_IsPhotoMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_Tick_Internal, CallFunc_IsLookAtPlayer_ReturnValue) == 0x000055, "Member 'BP_SBPhotoModeController_C_Tick_Internal::CallFunc_IsLookAtPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_Tick_Internal, CallFunc_Not_PreBool_ReturnValue) == 0x000056, "Member 'BP_SBPhotoModeController_C_Tick_Internal::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_Tick_Internal, CallFunc_GetControlRotation_ReturnValue) == 0x000058, "Member 'BP_SBPhotoModeController_C_Tick_Internal::CallFunc_GetControlRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_Tick_Internal, CallFunc_BooleanAND_ReturnValue) == 0x000064, "Member 'BP_SBPhotoModeController_C_Tick_Internal::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_Tick_Internal, CallFunc_NotEqual_RotatorRotator_ReturnValue) == 0x000065, "Member 'BP_SBPhotoModeController_C_Tick_Internal::CallFunc_NotEqual_RotatorRotator_ReturnValue' has a wrong offset!");

// Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.SpawnBpPlayerSceneCapture2d
// 0x0050 (0x0050 - 0x0000)
struct BP_SBPhotoModeController_C_SpawnBpPlayerSceneCapture2d final
{
public:
	struct FTransform                             SpawnTransform;                                    // 0x0000(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	class ASBPlayerCharacter*                     BasePlayerCharacter;                               // 0x0030(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerSceneCapture2D_C*             ReturnValue;                                       // 0x0038(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerSceneCapture2D_C*             CallFunc_FinishSpawningActor_ReturnValue;          // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SBPhotoModeController_C_SpawnBpPlayerSceneCapture2d) == 0x000010, "Wrong alignment on BP_SBPhotoModeController_C_SpawnBpPlayerSceneCapture2d");
static_assert(sizeof(BP_SBPhotoModeController_C_SpawnBpPlayerSceneCapture2d) == 0x000050, "Wrong size on BP_SBPhotoModeController_C_SpawnBpPlayerSceneCapture2d");
static_assert(offsetof(BP_SBPhotoModeController_C_SpawnBpPlayerSceneCapture2d, SpawnTransform) == 0x000000, "Member 'BP_SBPhotoModeController_C_SpawnBpPlayerSceneCapture2d::SpawnTransform' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_SpawnBpPlayerSceneCapture2d, BasePlayerCharacter) == 0x000030, "Member 'BP_SBPhotoModeController_C_SpawnBpPlayerSceneCapture2d::BasePlayerCharacter' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_SpawnBpPlayerSceneCapture2d, ReturnValue) == 0x000038, "Member 'BP_SBPhotoModeController_C_SpawnBpPlayerSceneCapture2d::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_SpawnBpPlayerSceneCapture2d, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000040, "Member 'BP_SBPhotoModeController_C_SpawnBpPlayerSceneCapture2d::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModeController_C_SpawnBpPlayerSceneCapture2d, CallFunc_FinishSpawningActor_ReturnValue) == 0x000048, "Member 'BP_SBPhotoModeController_C_SpawnBpPlayerSceneCapture2d::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");

// Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.GetImage_PNGData
// 0x0010 (0x0010 - 0x0000)
struct BP_SBPhotoModeController_C_GetImage_PNGData final
{
public:
	TArray<uint8>                                 Param_Image_PNGData;                               // 0x0000(0x0010)(Parm, OutParm)
};
static_assert(alignof(BP_SBPhotoModeController_C_GetImage_PNGData) == 0x000008, "Wrong alignment on BP_SBPhotoModeController_C_GetImage_PNGData");
static_assert(sizeof(BP_SBPhotoModeController_C_GetImage_PNGData) == 0x000010, "Wrong size on BP_SBPhotoModeController_C_GetImage_PNGData");
static_assert(offsetof(BP_SBPhotoModeController_C_GetImage_PNGData, Param_Image_PNGData) == 0x000000, "Member 'BP_SBPhotoModeController_C_GetImage_PNGData::Param_Image_PNGData' has a wrong offset!");

}

