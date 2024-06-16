#pragma once

 

// Package: UMG_PhotoModeControllMenu

#include "Basic.hpp"

#include "EPhotoModeUploadList_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "InputCore_structs.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.ExecuteUbergraph_UMG_PhotoModeControllMenu
// 0x0488 (0x0488 - 0x0000)
struct UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPhotoModeUploadList                          Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsCopyPose_ReturnValue;                   // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsMotionStop_ReturnValue;                 // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidCloneCharacter_ReturnValue;        // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_94F1[0x2];                                     // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetOverrideTime_ReturnValue;              // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEnableOverrideTime_ReturnValue;         // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsShowDebugUi_ReturnValue;                // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_94F2[0x2];                                     // 0x0012(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_GetControlRotation_ReturnValue;           // 0x0014(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_GetFOV_ReturnValue;                       // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_94F3[0x2];                                     // 0x0032(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Temp_name_Variable;                                // 0x0034(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_1;                              // 0x003C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_94F4[0x3];                                     // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_Select_Default;                             // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_2;                              // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_3;                              // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_94F5[0x3];                                     // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_Select_Default_1;                           // 0x0064(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_4;                              // 0x006C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_5;                              // 0x0074(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x007C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x008C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          Temp_bool_Variable_3;                              // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EUMGSequencePlayMode                          Temp_byte_Variable_1;                              // 0x009D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          Temp_byte_Variable_2;                              // 0x009E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_4;                              // 0x009F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EUMGSequencePlayMode                          Temp_byte_Variable_3;                              // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          Temp_byte_Variable_4;                              // 0x00A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          K2Node_Select_Default_2;                           // 0x00A3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_5;                              // 0x00A5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EUMGSequencePlayMode                          Temp_byte_Variable_5;                              // 0x00A6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          Temp_byte_Variable_6;                              // 0x00A7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          K2Node_Select_Default_3;                           // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPhotoModeUploadList                          Temp_byte_Variable_7;                              // 0x00AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_94F6[0x1];                                     // 0x00AB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_6;                              // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_94F7[0x3];                                     // 0x00B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_7;                              // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x00BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_8;                              // 0x00BB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x00BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_4;                           // 0x00BD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_4;            // 0x00BE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_5;            // 0x00BF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_6;            // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_9;                              // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_10;                             // 0x00C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_5;                           // 0x00C3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsClickCheck_outIsClickOk;                // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_94F8[0x3];                                     // 0x00C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSlateBrush>                    CallFunc_GetThumbnailImageList_outThumbnailImage;  // 0x00C8(0x0010)(ReferenceParm)
	TArray<bool>                                  CallFunc_GetThumbnailImageList_outReturnValue;     // 0x00D8(0x0010)(ReferenceParm)
	bool                                          CallFunc_IsClickCheck_outIsClickOk_1;              // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EPhotoModeUploadList                          K2Node_Select_Default_6;                           // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_94F9[0x2];                                     // 0x00EA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_ComponentBoundEvent_Value_10;               // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSaveUploadImage_ReturnValue;            // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_94FA[0x7];                                     // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UTexture2DDynamic*>              CallFunc_GetSaveUploadImageTextureAll_ReturnValue; // 0x00F8(0x0010)(ReferenceParm)
	float                                         K2Node_ComponentBoundEvent_Value_9;                // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_ComponentBoundEvent_Value_8;                // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked_4;           // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_94FB[0x3];                                     // 0x0111(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;  // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_ComponentBoundEvent_Value_7;                // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_ComponentBoundEvent_Value_6;                // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_94FC[0x4];                                     // 0x0124(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_CustomEvent_Widget_1;                       // 0x0128(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCharaCreateClassSkillMenuItem_C*       K2Node_ComponentBoundEvent_Sender_1;               // 0x0130(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCharaCreateClassSkillMenuItem_C*       K2Node_ComponentBoundEvent_Sender;                 // 0x0138(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPhotoModePlayerControlData*          CallFunc_GetOriginalPlayerControlData_ReturnValue; // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_ComponentBoundEvent_Value_5;                // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked_3;           // 0x014C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsChecked_ReturnValue;                    // 0x014D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_94FD[0x2];                                     // 0x014E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_ComponentBoundEvent_Value_4;                // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_ComponentBoundEvent_Value_3;                // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bLookAtPlayer;                  // 0x015C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_94FE[0x3];                                     // 0x015D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBSelectableTextButton_C*              CallFunc_Array_Get_Item;                           // 0x0160(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_3;                // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_94FF[0x3];                                     // 0x0169(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x016C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_7;            // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked_2;           // 0x0171(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9500[0x2];                                     // 0x0172(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_CustomEvent_Value_2;                        // 0x0174(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_Value_1;                        // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               K2Node_CustomEvent_Value;                          // 0x017C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakRotator_Roll_1;                      // 0x0188(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch_1;                     // 0x018C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw_1;                       // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9501[0x4];                                     // 0x0194(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPhotoModePlayerControlData*          CallFunc_GetOriginalPlayerControlData_ReturnValue_1; // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPhotoModePlayerControlData*          CallFunc_GetSelectedPlayerControlData_ReturnValue; // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_8;            // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9502[0x7];                                     // 0x01A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_CustomEvent_Widget;                         // 0x01B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x01B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9503[0x4];                                     // 0x01BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBSelectableTextButton_C*              CallFunc_Array_Get_Item_1;                         // 0x01C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Find_ReturnValue_1;                 // 0x01C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x01CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBSelectableTextButton_C*              CallFunc_Array_Get_Item_2;                         // 0x01D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x01D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9504[0x3];                                     // 0x01D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_ComponentBoundEvent_EmotionId;              // 0x01DC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBFacialType                                 K2Node_ComponentBoundEvent_FacialType;             // 0x01E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked_1;           // 0x01E5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x01E6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9505[0x1];                                     // 0x01E7(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_CameraYawToUiYaw_ReturnValue;             // 0x01E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_UiYawToCameraYaw_ReturnValue;             // 0x01EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_ComponentBoundEvent_Value_2;                // 0x01F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked;             // 0x01F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9506[0x3];                                     // 0x01F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_ComponentBoundEvent_Value_1;                // 0x01F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_ComponentBoundEvent_Value;                  // 0x01FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBLipSyncType                                K2Node_ComponentBoundEvent_LipSyncType;            // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bCloseEyes;             // 0x0201(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_4;                // 0x0202(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_9;            // 0x0203(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9507[0x4];                                     // 0x0204(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_SBPhotoModeController_C*            K2Node_CustomEvent_PMC;                            // 0x0208(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0210(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bPlayerControlMode;             // 0x0211(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0212(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsCityCurrentMapLevel_ReturnValue;        // 0x0213(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_5;                // 0x0214(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bTalkMode;                      // 0x0215(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsKeyboardMode_ReturnValue;               // 0x0216(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9508[0x1];                                     // 0x0217(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_Select_Default_7;                           // 0x0218(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue;                // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0221(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_6;                // 0x0222(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9509[0x5];                                     // 0x0223(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue;         // 0x0228(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0230(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetVisibleSetting_ReturnValue;            // 0x0231(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBUIType                                     K2Node_CustomEvent_InUIType;                       // 0x0232(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bInVisibility;                  // 0x0233(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bInInstantly;                   // 0x0234(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_10;           // 0x0235(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          K2Node_Select_Default_8;                           // 0x0236(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0237(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0238(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue_1;       // 0x0240(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0248(0x0010)(ZeroConstructor, NoDestructor)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0258(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0268(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0280(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x02C0(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x02D0(0x0018)()
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x02E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_1;     // 0x02F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x0300(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0308(0x0018)()
	bool                                          Temp_bool_Variable_11;                             // 0x0320(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_950A[0x7];                                     // 0x0321(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0328(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x0368(0x0010)(ReferenceParm)
	ESlateVisibility                              K2Node_Select_Default_9;                           // 0x0378(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_950B[0x7];                                     // 0x0379(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x0380(0x0018)()
	class USBPhotoModePlayerControlData*          CallFunc_GetSelectedPlayerControlData_ReturnValue_1; // 0x0398(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x03A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPhotoModeImageComponent*             CallFunc_GetPhotoModeImageComponent_ReturnValue;   // 0x03A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UTexture2DDynamic*>              CallFunc_GetSaveUploadImageTextureAll_ReturnValue_1; // 0x03B0(0x0010)(ReferenceParm)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x03C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_950C[0x3];                                     // 0x03C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x03C4(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_GetUIManager_IsValid;                     // 0x03D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_950D[0x3];                                     // 0x03D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue;                 // 0x03D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLookAtPlayer_ReturnValue;               // 0x03E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_11;           // 0x03E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_950E[0x2];                                     // 0x03E2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x03E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_10;                          // 0x03E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x03E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_950F[0x2];                                     // 0x03EA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x03EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsGamepadMode_ReturnValue;                // 0x03F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x03F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_7;                // 0x03F2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9510[0x5];                                     // 0x03F3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWidget*>                        K2Node_MakeArray_Array_2;                          // 0x03F8(0x0010)(ReferenceParm, ContainsInstancedReference)
	ESlateVisibility                              K2Node_Select_Default_11;                          // 0x0408(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9511[0x7];                                     // 0x0409(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           K2Node_MakeArray_Array_3;                          // 0x0410(0x0010)(ReferenceParm)
	TArray<class USBSelectableTextButton_C*>      K2Node_MakeArray_Array_4;                          // 0x0420(0x0010)(ReferenceParm, ContainsInstancedReference)
	TArray<class FName>                           K2Node_MakeArray_Array_5;                          // 0x0430(0x0010)(ReferenceParm)
	TArray<class UWidget*>                        K2Node_MakeArray_Array_6;                          // 0x0440(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0450(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9512[0x4];                                     // 0x0454(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USBSelectableTextButton_C*>      K2Node_MakeArray_Array_7;                          // 0x0458(0x0010)(ReferenceParm, ContainsInstancedReference)
	class USBSelectableTextButton_C*              CallFunc_Array_Get_Item_3;                         // 0x0468(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_12;                             // 0x0470(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_12;                          // 0x0471(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9513[0x6];                                     // 0x0472(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameUserSettings*                      CallFunc_GetGameUserSettings_ReturnValue;          // 0x0478(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetPostProcessingQuality_ReturnValue;     // 0x0480(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0484(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu) == 0x000008, "Wrong alignment on UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu");
static_assert(sizeof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu) == 0x000488, "Wrong size on UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, EntryPoint) == 0x000000, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, Temp_byte_Variable) == 0x000004, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_IsValid_ReturnValue) == 0x000005, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_IsCopyPose_ReturnValue) == 0x000006, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_IsCopyPose_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_IsMotionStop_ReturnValue) == 0x000007, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_IsMotionStop_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_IsValid_ReturnValue_1) == 0x000008, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_IsValidCloneCharacter_ReturnValue) == 0x000009, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_IsValidCloneCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_GetOverrideTime_ReturnValue) == 0x00000C, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_GetOverrideTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_IsEnableOverrideTime_ReturnValue) == 0x000010, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_IsEnableOverrideTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_IsShowDebugUi_ReturnValue) == 0x000011, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_IsShowDebugUi_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_GetControlRotation_ReturnValue) == 0x000014, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_GetControlRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_GetFOV_ReturnValue) == 0x000020, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_GetFOV_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_BreakRotator_Roll) == 0x000024, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_BreakRotator_Pitch) == 0x000028, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_BreakRotator_Yaw) == 0x00002C, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_Not_PreBool_ReturnValue) == 0x000030, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, Temp_bool_Variable) == 0x000031, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, Temp_name_Variable) == 0x000034, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, Temp_name_Variable_1) == 0x00003C, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::Temp_name_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, Temp_bool_Variable_1) == 0x000044, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, K2Node_Select_Default) == 0x000048, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, Temp_name_Variable_2) == 0x000050, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::Temp_name_Variable_2' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, Temp_name_Variable_3) == 0x000058, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::Temp_name_Variable_3' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, Temp_bool_Variable_2) == 0x000060, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, K2Node_Select_Default_1) == 0x000064, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, Temp_name_Variable_4) == 0x00006C, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::Temp_name_Variable_4' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, Temp_name_Variable_5) == 0x000074, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::Temp_name_Variable_5' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, K2Node_CreateDelegate_OutputDelegate) == 0x00007C, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, K2Node_CreateDelegate_OutputDelegate_1) == 0x00008C, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, Temp_bool_Variable_3) == 0x00009C, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, Temp_byte_Variable_1) == 0x00009D, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, Temp_byte_Variable_2) == 0x00009E, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, Temp_bool_Variable_4) == 0x00009F, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_Not_PreBool_ReturnValue_1) == 0x0000A0, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, Temp_byte_Variable_3) == 0x0000A1, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, Temp_byte_Variable_4) == 0x0000A2, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, K2Node_Select_Default_2) == 0x0000A3, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_Not_PreBool_ReturnValue_2) == 0x0000A4, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, Temp_bool_Variable_5) == 0x0000A5, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, Temp_byte_Variable_5) == 0x0000A6, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, Temp_byte_Variable_6) == 0x0000A7, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, K2Node_Select_Default_3) == 0x0000A8, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_MakeLiteralByte_ReturnValue) == 0x0000A9, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, Temp_byte_Variable_7) == 0x0000AA, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, Temp_int_Loop_Counter_Variable) == 0x0000AC, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, Temp_bool_Variable_6) == 0x0000B0, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::Temp_bool_Variable_6' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_Add_IntInt_ReturnValue) == 0x0000B4, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, Temp_bool_Variable_7) == 0x0000B8, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::Temp_bool_Variable_7' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x0000B9, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x0000BA, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, Temp_bool_Variable_8) == 0x0000BB, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::Temp_bool_Variable_8' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x0000BC, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, K2Node_Select_Default_4) == 0x0000BD, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_MakeLiteralByte_ReturnValue_4) == 0x0000BE, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_MakeLiteralByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_MakeLiteralByte_ReturnValue_5) == 0x0000BF, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_MakeLiteralByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_MakeLiteralByte_ReturnValue_6) == 0x0000C0, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_MakeLiteralByte_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, Temp_bool_Variable_9) == 0x0000C1, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::Temp_bool_Variable_9' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, Temp_bool_Variable_10) == 0x0000C2, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::Temp_bool_Variable_10' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, K2Node_Select_Default_5) == 0x0000C3, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_IsClickCheck_outIsClickOk) == 0x0000C4, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_IsClickCheck_outIsClickOk' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_GetThumbnailImageList_outThumbnailImage) == 0x0000C8, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_GetThumbnailImageList_outThumbnailImage' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_GetThumbnailImageList_outReturnValue) == 0x0000D8, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_GetThumbnailImageList_outReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_IsClickCheck_outIsClickOk_1) == 0x0000E8, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_IsClickCheck_outIsClickOk_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, K2Node_Select_Default_6) == 0x0000E9, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::K2Node_Select_Default_6' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, K2Node_ComponentBoundEvent_Value_10) == 0x0000EC, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::K2Node_ComponentBoundEvent_Value_10' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_IsSaveUploadImage_ReturnValue) == 0x0000F0, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_IsSaveUploadImage_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_GetSaveUploadImageTextureAll_ReturnValue) == 0x0000F8, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_GetSaveUploadImageTextureAll_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, K2Node_ComponentBoundEvent_Value_9) == 0x000108, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::K2Node_ComponentBoundEvent_Value_9' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, K2Node_ComponentBoundEvent_Value_8) == 0x00010C, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::K2Node_ComponentBoundEvent_Value_8' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, K2Node_ComponentBoundEvent_bIsChecked_4) == 0x000110, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::K2Node_ComponentBoundEvent_bIsChecked_4' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_MultiplyMultiply_FloatFloat_ReturnValue) == 0x000114, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_MultiplyMultiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000118, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, K2Node_ComponentBoundEvent_Value_7) == 0x00011C, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::K2Node_ComponentBoundEvent_Value_7' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, K2Node_ComponentBoundEvent_Value_6) == 0x000120, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::K2Node_ComponentBoundEvent_Value_6' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, K2Node_CustomEvent_Widget_1) == 0x000128, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::K2Node_CustomEvent_Widget_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, K2Node_ComponentBoundEvent_Sender_1) == 0x000130, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::K2Node_ComponentBoundEvent_Sender_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, K2Node_ComponentBoundEvent_Sender) == 0x000138, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::K2Node_ComponentBoundEvent_Sender' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_GetOriginalPlayerControlData_ReturnValue) == 0x000140, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_GetOriginalPlayerControlData_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, K2Node_ComponentBoundEvent_Value_5) == 0x000148, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::K2Node_ComponentBoundEvent_Value_5' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, K2Node_ComponentBoundEvent_bIsChecked_3) == 0x00014C, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::K2Node_ComponentBoundEvent_bIsChecked_3' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_IsChecked_ReturnValue) == 0x00014D, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_IsChecked_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, K2Node_ComponentBoundEvent_Value_4) == 0x000150, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::K2Node_ComponentBoundEvent_Value_4' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, K2Node_ComponentBoundEvent_Value_3) == 0x000154, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::K2Node_ComponentBoundEvent_Value_3' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_Array_Find_ReturnValue) == 0x000158, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, K2Node_CustomEvent_bLookAtPlayer) == 0x00015C, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::K2Node_CustomEvent_bLookAtPlayer' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_Array_Get_Item) == 0x000160, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_Not_PreBool_ReturnValue_3) == 0x000168, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_Not_PreBool_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_Array_Length_ReturnValue) == 0x00016C, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_MakeLiteralByte_ReturnValue_7) == 0x000170, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_MakeLiteralByte_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, K2Node_ComponentBoundEvent_bIsChecked_2) == 0x000171, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::K2Node_ComponentBoundEvent_bIsChecked_2' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, K2Node_CustomEvent_Value_2) == 0x000174, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::K2Node_CustomEvent_Value_2' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, K2Node_CustomEvent_Value_1) == 0x000178, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::K2Node_CustomEvent_Value_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, K2Node_CustomEvent_Value) == 0x00017C, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::K2Node_CustomEvent_Value' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_BreakRotator_Roll_1) == 0x000188, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_BreakRotator_Roll_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_BreakRotator_Pitch_1) == 0x00018C, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_BreakRotator_Pitch_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_BreakRotator_Yaw_1) == 0x000190, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_BreakRotator_Yaw_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_GetOriginalPlayerControlData_ReturnValue_1) == 0x000198, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_GetOriginalPlayerControlData_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_GetSelectedPlayerControlData_ReturnValue) == 0x0001A0, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_GetSelectedPlayerControlData_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_MakeLiteralByte_ReturnValue_8) == 0x0001A8, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_MakeLiteralByte_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, K2Node_CustomEvent_Widget) == 0x0001B0, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::K2Node_CustomEvent_Widget' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, Temp_int_Array_Index_Variable) == 0x0001B8, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_Array_Get_Item_1) == 0x0001C0, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_Array_Find_ReturnValue_1) == 0x0001C8, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_Array_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_Array_Length_ReturnValue_1) == 0x0001CC, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_Array_Get_Item_2) == 0x0001D0, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_Less_IntInt_ReturnValue) == 0x0001D8, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, K2Node_ComponentBoundEvent_EmotionId) == 0x0001DC, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::K2Node_ComponentBoundEvent_EmotionId' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, K2Node_ComponentBoundEvent_FacialType) == 0x0001E4, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::K2Node_ComponentBoundEvent_FacialType' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, K2Node_ComponentBoundEvent_bIsChecked_1) == 0x0001E5, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::K2Node_ComponentBoundEvent_bIsChecked_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x0001E6, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_CameraYawToUiYaw_ReturnValue) == 0x0001E8, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_CameraYawToUiYaw_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_UiYawToCameraYaw_ReturnValue) == 0x0001EC, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_UiYawToCameraYaw_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, K2Node_ComponentBoundEvent_Value_2) == 0x0001F0, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::K2Node_ComponentBoundEvent_Value_2' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, K2Node_ComponentBoundEvent_bIsChecked) == 0x0001F4, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::K2Node_ComponentBoundEvent_bIsChecked' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, K2Node_ComponentBoundEvent_Value_1) == 0x0001F8, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::K2Node_ComponentBoundEvent_Value_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, K2Node_ComponentBoundEvent_Value) == 0x0001FC, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::K2Node_ComponentBoundEvent_Value' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, K2Node_ComponentBoundEvent_LipSyncType) == 0x000200, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::K2Node_ComponentBoundEvent_LipSyncType' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, K2Node_ComponentBoundEvent_bCloseEyes) == 0x000201, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::K2Node_ComponentBoundEvent_bCloseEyes' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_Not_PreBool_ReturnValue_4) == 0x000202, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_Not_PreBool_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_MakeLiteralByte_ReturnValue_9) == 0x000203, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_MakeLiteralByte_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, K2Node_CustomEvent_PMC) == 0x000208, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::K2Node_CustomEvent_PMC' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, K2Node_Event_IsDesignTime) == 0x000210, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, K2Node_CustomEvent_bPlayerControlMode) == 0x000211, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::K2Node_CustomEvent_bPlayerControlMode' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_BooleanAND_ReturnValue) == 0x000212, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_IsCityCurrentMapLevel_ReturnValue) == 0x000213, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_IsCityCurrentMapLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_Not_PreBool_ReturnValue_5) == 0x000214, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_Not_PreBool_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, K2Node_CustomEvent_bTalkMode) == 0x000215, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::K2Node_CustomEvent_bTalkMode' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_IsKeyboardMode_ReturnValue) == 0x000216, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_IsKeyboardMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, K2Node_Select_Default_7) == 0x000218, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::K2Node_Select_Default_7' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_GetVisibility_ReturnValue) == 0x000220, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_GetVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000221, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_Not_PreBool_ReturnValue_6) == 0x000222, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_Not_PreBool_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_GetUIVisibleSettings_ReturnValue) == 0x000228, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_GetUIVisibleSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_BooleanAND_ReturnValue_1) == 0x000230, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_GetVisibleSetting_ReturnValue) == 0x000231, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_GetVisibleSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, K2Node_CustomEvent_InUIType) == 0x000232, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::K2Node_CustomEvent_InUIType' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, K2Node_CustomEvent_bInVisibility) == 0x000233, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::K2Node_CustomEvent_bInVisibility' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, K2Node_CustomEvent_bInInstantly) == 0x000234, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::K2Node_CustomEvent_bInInstantly' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_MakeLiteralByte_ReturnValue_10) == 0x000235, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_MakeLiteralByte_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, K2Node_Select_Default_8) == 0x000236, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::K2Node_Select_Default_8' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000237, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_PlayAnimation_ReturnValue) == 0x000238, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_GetUIVisibleSettings_ReturnValue_1) == 0x000240, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_GetUIVisibleSettings_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, K2Node_CreateDelegate_OutputDelegate_2) == 0x000248, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000258, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_Conv_StringToText_ReturnValue) == 0x000268, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, K2Node_MakeStruct_FormatArgumentData) == 0x000280, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, K2Node_MakeArray_Array) == 0x0002C0, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_Format_ReturnValue) == 0x0002D0, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_PlayAnimation_ReturnValue_1) == 0x0002E8, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_GetTextFromAssetByName_ReturnValue_1) == 0x0002F0, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_GetTextFromAssetByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_PlayAnimation_ReturnValue_2) == 0x000300, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000308, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, Temp_bool_Variable_11) == 0x000320, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::Temp_bool_Variable_11' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, K2Node_MakeStruct_FormatArgumentData_1) == 0x000328, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, K2Node_MakeArray_Array_1) == 0x000368, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, K2Node_Select_Default_9) == 0x000378, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::K2Node_Select_Default_9' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_Format_ReturnValue_1) == 0x000380, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_GetSelectedPlayerControlData_ReturnValue_1) == 0x000398, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_GetSelectedPlayerControlData_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_GetSBPlayerController_ReturnValue) == 0x0003A0, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_GetPhotoModeImageComponent_ReturnValue) == 0x0003A8, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_GetPhotoModeImageComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_GetSaveUploadImageTextureAll_ReturnValue_1) == 0x0003B0, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_GetSaveUploadImageTextureAll_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_IsValid_ReturnValue_2) == 0x0003C0, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, K2Node_CreateDelegate_OutputDelegate_3) == 0x0003C4, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_GetUIManager_IsValid) == 0x0003D4, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_GetUIManager_IsValid' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_GetUIManager_ReturnValue) == 0x0003D8, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_GetUIManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_IsLookAtPlayer_ReturnValue) == 0x0003E0, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_IsLookAtPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_MakeLiteralByte_ReturnValue_11) == 0x0003E1, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_MakeLiteralByte_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, Temp_int_Loop_Counter_Variable_1) == 0x0003E4, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, K2Node_Select_Default_10) == 0x0003E8, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::K2Node_Select_Default_10' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_Less_IntInt_ReturnValue_1) == 0x0003E9, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_Add_IntInt_ReturnValue_1) == 0x0003EC, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_IsGamepadMode_ReturnValue) == 0x0003F0, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_IsGamepadMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_BooleanAND_ReturnValue_2) == 0x0003F1, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_Not_PreBool_ReturnValue_7) == 0x0003F2, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_Not_PreBool_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, K2Node_MakeArray_Array_2) == 0x0003F8, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, K2Node_Select_Default_11) == 0x000408, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::K2Node_Select_Default_11' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, K2Node_MakeArray_Array_3) == 0x000410, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::K2Node_MakeArray_Array_3' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, K2Node_MakeArray_Array_4) == 0x000420, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::K2Node_MakeArray_Array_4' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, K2Node_MakeArray_Array_5) == 0x000430, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::K2Node_MakeArray_Array_5' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, K2Node_MakeArray_Array_6) == 0x000440, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::K2Node_MakeArray_Array_6' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, Temp_int_Array_Index_Variable_1) == 0x000450, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, K2Node_MakeArray_Array_7) == 0x000458, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::K2Node_MakeArray_Array_7' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_Array_Get_Item_3) == 0x000468, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, Temp_bool_Variable_12) == 0x000470, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::Temp_bool_Variable_12' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, K2Node_Select_Default_12) == 0x000471, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::K2Node_Select_Default_12' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_GetGameUserSettings_ReturnValue) == 0x000478, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_GetGameUserSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_GetPostProcessingQuality_ReturnValue) == 0x000480, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_GetPostProcessingQuality_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000484, "Member 'UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");

// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.OnChangeVisibleSetting
// 0x0003 (0x0003 - 0x0000)
struct UMG_PhotoModeControllMenu_C_OnChangeVisibleSetting final
{
public:
	ESBUIType                                     InUIType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInVisibility;                                     // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bInInstantly;                                      // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_PhotoModeControllMenu_C_OnChangeVisibleSetting) == 0x000001, "Wrong alignment on UMG_PhotoModeControllMenu_C_OnChangeVisibleSetting");
static_assert(sizeof(UMG_PhotoModeControllMenu_C_OnChangeVisibleSetting) == 0x000003, "Wrong size on UMG_PhotoModeControllMenu_C_OnChangeVisibleSetting");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_OnChangeVisibleSetting, InUIType) == 0x000000, "Member 'UMG_PhotoModeControllMenu_C_OnChangeVisibleSetting::InUIType' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_OnChangeVisibleSetting, bInVisibility) == 0x000001, "Member 'UMG_PhotoModeControllMenu_C_OnChangeVisibleSetting::bInVisibility' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_OnChangeVisibleSetting, bInInstantly) == 0x000002, "Member 'UMG_PhotoModeControllMenu_C_OnChangeVisibleSetting::bInInstantly' has a wrong offset!");

// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.SetTalkMode
// 0x0001 (0x0001 - 0x0000)
struct UMG_PhotoModeControllMenu_C_SetTalkMode final
{
public:
	bool                                          Param_bTalkMode;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_PhotoModeControllMenu_C_SetTalkMode) == 0x000001, "Wrong alignment on UMG_PhotoModeControllMenu_C_SetTalkMode");
static_assert(sizeof(UMG_PhotoModeControllMenu_C_SetTalkMode) == 0x000001, "Wrong size on UMG_PhotoModeControllMenu_C_SetTalkMode");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_SetTalkMode, Param_bTalkMode) == 0x000000, "Member 'UMG_PhotoModeControllMenu_C_SetTalkMode::Param_bTalkMode' has a wrong offset!");

// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.SetControlMode
// 0x0001 (0x0001 - 0x0000)
struct UMG_PhotoModeControllMenu_C_SetControlMode final
{
public:
	bool                                          Param_bPlayerControlMode;                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_PhotoModeControllMenu_C_SetControlMode) == 0x000001, "Wrong alignment on UMG_PhotoModeControllMenu_C_SetControlMode");
static_assert(sizeof(UMG_PhotoModeControllMenu_C_SetControlMode) == 0x000001, "Wrong size on UMG_PhotoModeControllMenu_C_SetControlMode");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_SetControlMode, Param_bPlayerControlMode) == 0x000000, "Member 'UMG_PhotoModeControllMenu_C_SetControlMode::Param_bPlayerControlMode' has a wrong offset!");

// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UMG_PhotoModeControllMenu_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_PhotoModeControllMenu_C_PreConstruct) == 0x000001, "Wrong alignment on UMG_PhotoModeControllMenu_C_PreConstruct");
static_assert(sizeof(UMG_PhotoModeControllMenu_C_PreConstruct) == 0x000001, "Wrong size on UMG_PhotoModeControllMenu_C_PreConstruct");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'UMG_PhotoModeControllMenu_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.SetPhotoModeContoller
// 0x0008 (0x0008 - 0x0000)
struct UMG_PhotoModeControllMenu_C_SetPhotoModeContoller final
{
public:
	class ABP_SBPhotoModeController_C*            PMC;                                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_PhotoModeControllMenu_C_SetPhotoModeContoller) == 0x000008, "Wrong alignment on UMG_PhotoModeControllMenu_C_SetPhotoModeContoller");
static_assert(sizeof(UMG_PhotoModeControllMenu_C_SetPhotoModeContoller) == 0x000008, "Wrong size on UMG_PhotoModeControllMenu_C_SetPhotoModeContoller");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_SetPhotoModeContoller, PMC) == 0x000000, "Member 'UMG_PhotoModeControllMenu_C_SetPhotoModeContoller::PMC' has a wrong offset!");

// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_36_OnChangeCloseEyes__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_36_OnChangeCloseEyes__DelegateSignature final
{
public:
	bool                                          bCloseEyes;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_36_OnChangeCloseEyes__DelegateSignature) == 0x000001, "Wrong alignment on UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_36_OnChangeCloseEyes__DelegateSignature");
static_assert(sizeof(UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_36_OnChangeCloseEyes__DelegateSignature) == 0x000001, "Wrong size on UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_36_OnChangeCloseEyes__DelegateSignature");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_36_OnChangeCloseEyes__DelegateSignature, bCloseEyes) == 0x000000, "Member 'UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_36_OnChangeCloseEyes__DelegateSignature::bCloseEyes' has a wrong offset!");

// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_31_OnChangeLipSync__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_31_OnChangeLipSync__DelegateSignature final
{
public:
	ESBLipSyncType                                LipSyncType;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_31_OnChangeLipSync__DelegateSignature) == 0x000001, "Wrong alignment on UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_31_OnChangeLipSync__DelegateSignature");
static_assert(sizeof(UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_31_OnChangeLipSync__DelegateSignature) == 0x000001, "Wrong size on UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_31_OnChangeLipSync__DelegateSignature");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_31_OnChangeLipSync__DelegateSignature, LipSyncType) == 0x000000, "Member 'UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_31_OnChangeLipSync__DelegateSignature::LipSyncType' has a wrong offset!");

// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_34_OnChangePale__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_34_OnChangePale__DelegateSignature final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_34_OnChangePale__DelegateSignature) == 0x000004, "Wrong alignment on UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_34_OnChangePale__DelegateSignature");
static_assert(sizeof(UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_34_OnChangePale__DelegateSignature) == 0x000004, "Wrong size on UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_34_OnChangePale__DelegateSignature");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_34_OnChangePale__DelegateSignature, Value) == 0x000000, "Member 'UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_34_OnChangePale__DelegateSignature::Value' has a wrong offset!");

// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_29_OnChangeBlush__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_29_OnChangeBlush__DelegateSignature final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_29_OnChangeBlush__DelegateSignature) == 0x000004, "Wrong alignment on UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_29_OnChangeBlush__DelegateSignature");
static_assert(sizeof(UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_29_OnChangeBlush__DelegateSignature) == 0x000004, "Wrong size on UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_29_OnChangeBlush__DelegateSignature");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_29_OnChangeBlush__DelegateSignature, Value) == 0x000000, "Member 'UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_29_OnChangeBlush__DelegateSignature::Value' has a wrong offset!");

// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_SBCheckBoxCmnCheckBox01_DebugOverideTime_K2Node_ComponentBoundEvent_26_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_SBCheckBoxCmnCheckBox01_DebugOverideTime_K2Node_ComponentBoundEvent_26_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_SBCheckBoxCmnCheckBox01_DebugOverideTime_K2Node_ComponentBoundEvent_26_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_SBCheckBoxCmnCheckBox01_DebugOverideTime_K2Node_ComponentBoundEvent_26_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_SBCheckBoxCmnCheckBox01_DebugOverideTime_K2Node_ComponentBoundEvent_26_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_SBCheckBoxCmnCheckBox01_DebugOverideTime_K2Node_ComponentBoundEvent_26_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_SBCheckBoxCmnCheckBox01_DebugOverideTime_K2Node_ComponentBoundEvent_26_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_SBCheckBoxCmnCheckBox01_DebugOverideTime_K2Node_ComponentBoundEvent_26_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_Slider_DebugOverrideTime_K2Node_ComponentBoundEvent_23_OnValueChanged__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_Slider_DebugOverrideTime_K2Node_ComponentBoundEvent_23_OnValueChanged__DelegateSignature final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_Slider_DebugOverrideTime_K2Node_ComponentBoundEvent_23_OnValueChanged__DelegateSignature) == 0x000004, "Wrong alignment on UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_Slider_DebugOverrideTime_K2Node_ComponentBoundEvent_23_OnValueChanged__DelegateSignature");
static_assert(sizeof(UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_Slider_DebugOverrideTime_K2Node_ComponentBoundEvent_23_OnValueChanged__DelegateSignature) == 0x000004, "Wrong size on UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_Slider_DebugOverrideTime_K2Node_ComponentBoundEvent_23_OnValueChanged__DelegateSignature");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_Slider_DebugOverrideTime_K2Node_ComponentBoundEvent_23_OnValueChanged__DelegateSignature, Value) == 0x000000, "Member 'UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_Slider_DebugOverrideTime_K2Node_ComponentBoundEvent_23_OnValueChanged__DelegateSignature::Value' has a wrong offset!");

// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_33_OnClickEnableFacial__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_33_OnClickEnableFacial__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_33_OnClickEnableFacial__DelegateSignature) == 0x000001, "Wrong alignment on UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_33_OnClickEnableFacial__DelegateSignature");
static_assert(sizeof(UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_33_OnClickEnableFacial__DelegateSignature) == 0x000001, "Wrong size on UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_33_OnClickEnableFacial__DelegateSignature");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_33_OnClickEnableFacial__DelegateSignature, bIsChecked) == 0x000000, "Member 'UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_33_OnClickEnableFacial__DelegateSignature::bIsChecked' has a wrong offset!");

// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_32_OnChangeFacialComboBox__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_32_OnChangeFacialComboBox__DelegateSignature final
{
public:
	ESBFacialType                                 FacialType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_32_OnChangeFacialComboBox__DelegateSignature) == 0x000001, "Wrong alignment on UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_32_OnChangeFacialComboBox__DelegateSignature");
static_assert(sizeof(UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_32_OnChangeFacialComboBox__DelegateSignature) == 0x000001, "Wrong size on UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_32_OnChangeFacialComboBox__DelegateSignature");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_32_OnChangeFacialComboBox__DelegateSignature, FacialType) == 0x000000, "Member 'UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_32_OnChangeFacialComboBox__DelegateSignature::FacialType' has a wrong offset!");

// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_30_OnRequestEmote__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_30_OnRequestEmote__DelegateSignature final
{
public:
	class FName                                   EmotionId;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_30_OnRequestEmote__DelegateSignature) == 0x000004, "Wrong alignment on UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_30_OnRequestEmote__DelegateSignature");
static_assert(sizeof(UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_30_OnRequestEmote__DelegateSignature) == 0x000008, "Wrong size on UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_30_OnRequestEmote__DelegateSignature");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_30_OnRequestEmote__DelegateSignature, EmotionId) == 0x000000, "Member 'UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_30_OnRequestEmote__DelegateSignature::EmotionId' has a wrong offset!");

// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.SetActivePlayerControlViewWidget
// 0x0008 (0x0008 - 0x0000)
struct UMG_PhotoModeControllMenu_C_SetActivePlayerControlViewWidget final
{
public:
	class UWidget*                                Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_PhotoModeControllMenu_C_SetActivePlayerControlViewWidget) == 0x000008, "Wrong alignment on UMG_PhotoModeControllMenu_C_SetActivePlayerControlViewWidget");
static_assert(sizeof(UMG_PhotoModeControllMenu_C_SetActivePlayerControlViewWidget) == 0x000008, "Wrong size on UMG_PhotoModeControllMenu_C_SetActivePlayerControlViewWidget");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_SetActivePlayerControlViewWidget, Widget) == 0x000000, "Member 'UMG_PhotoModeControllMenu_C_SetActivePlayerControlViewWidget::Widget' has a wrong offset!");

// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.SetRotation
// 0x000C (0x000C - 0x0000)
struct UMG_PhotoModeControllMenu_C_SetRotation final
{
public:
	struct FRotator                               Value;                                             // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_PhotoModeControllMenu_C_SetRotation) == 0x000004, "Wrong alignment on UMG_PhotoModeControllMenu_C_SetRotation");
static_assert(sizeof(UMG_PhotoModeControllMenu_C_SetRotation) == 0x00000C, "Wrong size on UMG_PhotoModeControllMenu_C_SetRotation");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_SetRotation, Value) == 0x000000, "Member 'UMG_PhotoModeControllMenu_C_SetRotation::Value' has a wrong offset!");

// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.SetFOV
// 0x0004 (0x0004 - 0x0000)
struct UMG_PhotoModeControllMenu_C_SetFOV final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_PhotoModeControllMenu_C_SetFOV) == 0x000004, "Wrong alignment on UMG_PhotoModeControllMenu_C_SetFOV");
static_assert(sizeof(UMG_PhotoModeControllMenu_C_SetFOV) == 0x000004, "Wrong size on UMG_PhotoModeControllMenu_C_SetFOV");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_SetFOV, Value) == 0x000000, "Member 'UMG_PhotoModeControllMenu_C_SetFOV::Value' has a wrong offset!");

// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.SetFocalDistance
// 0x0004 (0x0004 - 0x0000)
struct UMG_PhotoModeControllMenu_C_SetFocalDistance final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_PhotoModeControllMenu_C_SetFocalDistance) == 0x000004, "Wrong alignment on UMG_PhotoModeControllMenu_C_SetFocalDistance");
static_assert(sizeof(UMG_PhotoModeControllMenu_C_SetFocalDistance) == 0x000004, "Wrong size on UMG_PhotoModeControllMenu_C_SetFocalDistance");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_SetFocalDistance, Value) == 0x000000, "Member 'UMG_PhotoModeControllMenu_C_SetFocalDistance::Value' has a wrong offset!");

// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_CheckBox_FocusToPlayer_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_CheckBox_FocusToPlayer_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_CheckBox_FocusToPlayer_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_CheckBox_FocusToPlayer_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature");
static_assert(sizeof(UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_CheckBox_FocusToPlayer_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature) == 0x000001, "Wrong size on UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_CheckBox_FocusToPlayer_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_CheckBox_FocusToPlayer_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_CheckBox_FocusToPlayer_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.SetLookAtPlayer
// 0x0001 (0x0001 - 0x0000)
struct UMG_PhotoModeControllMenu_C_SetLookAtPlayer final
{
public:
	bool                                          bLookAtPlayer;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_PhotoModeControllMenu_C_SetLookAtPlayer) == 0x000001, "Wrong alignment on UMG_PhotoModeControllMenu_C_SetLookAtPlayer");
static_assert(sizeof(UMG_PhotoModeControllMenu_C_SetLookAtPlayer) == 0x000001, "Wrong size on UMG_PhotoModeControllMenu_C_SetLookAtPlayer");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_SetLookAtPlayer, bLookAtPlayer) == 0x000000, "Member 'UMG_PhotoModeControllMenu_C_SetLookAtPlayer::bLookAtPlayer' has a wrong offset!");

// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__MaxForegroundRadius_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct UMG_PhotoModeControllMenu_C_BndEvt__MaxForegroundRadius_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_PhotoModeControllMenu_C_BndEvt__MaxForegroundRadius_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature) == 0x000004, "Wrong alignment on UMG_PhotoModeControllMenu_C_BndEvt__MaxForegroundRadius_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature");
static_assert(sizeof(UMG_PhotoModeControllMenu_C_BndEvt__MaxForegroundRadius_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature) == 0x000004, "Wrong size on UMG_PhotoModeControllMenu_C_BndEvt__MaxForegroundRadius_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_BndEvt__MaxForegroundRadius_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature, Value) == 0x000000, "Member 'UMG_PhotoModeControllMenu_C_BndEvt__MaxForegroundRadius_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature::Value' has a wrong offset!");

// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__MaxBackgroundRadius_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct UMG_PhotoModeControllMenu_C_BndEvt__MaxBackgroundRadius_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_PhotoModeControllMenu_C_BndEvt__MaxBackgroundRadius_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature) == 0x000004, "Wrong alignment on UMG_PhotoModeControllMenu_C_BndEvt__MaxBackgroundRadius_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature");
static_assert(sizeof(UMG_PhotoModeControllMenu_C_BndEvt__MaxBackgroundRadius_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature) == 0x000004, "Wrong size on UMG_PhotoModeControllMenu_C_BndEvt__MaxBackgroundRadius_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_BndEvt__MaxBackgroundRadius_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature, Value) == 0x000000, "Member 'UMG_PhotoModeControllMenu_C_BndEvt__MaxBackgroundRadius_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature::Value' has a wrong offset!");

// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__SBCheckBox_C_293_K2Node_ComponentBoundEvent_38_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct UMG_PhotoModeControllMenu_C_BndEvt__SBCheckBox_C_293_K2Node_ComponentBoundEvent_38_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_PhotoModeControllMenu_C_BndEvt__SBCheckBox_C_293_K2Node_ComponentBoundEvent_38_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on UMG_PhotoModeControllMenu_C_BndEvt__SBCheckBox_C_293_K2Node_ComponentBoundEvent_38_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(UMG_PhotoModeControllMenu_C_BndEvt__SBCheckBox_C_293_K2Node_ComponentBoundEvent_38_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on UMG_PhotoModeControllMenu_C_BndEvt__SBCheckBox_C_293_K2Node_ComponentBoundEvent_38_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_BndEvt__SBCheckBox_C_293_K2Node_ComponentBoundEvent_38_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'UMG_PhotoModeControllMenu_C_BndEvt__SBCheckBox_C_293_K2Node_ComponentBoundEvent_38_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__Slider_FOV_2_K2Node_ComponentBoundEvent_37_OnValueChanged__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct UMG_PhotoModeControllMenu_C_BndEvt__Slider_FOV_2_K2Node_ComponentBoundEvent_37_OnValueChanged__DelegateSignature final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_PhotoModeControllMenu_C_BndEvt__Slider_FOV_2_K2Node_ComponentBoundEvent_37_OnValueChanged__DelegateSignature) == 0x000004, "Wrong alignment on UMG_PhotoModeControllMenu_C_BndEvt__Slider_FOV_2_K2Node_ComponentBoundEvent_37_OnValueChanged__DelegateSignature");
static_assert(sizeof(UMG_PhotoModeControllMenu_C_BndEvt__Slider_FOV_2_K2Node_ComponentBoundEvent_37_OnValueChanged__DelegateSignature) == 0x000004, "Wrong size on UMG_PhotoModeControllMenu_C_BndEvt__Slider_FOV_2_K2Node_ComponentBoundEvent_37_OnValueChanged__DelegateSignature");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_BndEvt__Slider_FOV_2_K2Node_ComponentBoundEvent_37_OnValueChanged__DelegateSignature, Value) == 0x000000, "Member 'UMG_PhotoModeControllMenu_C_BndEvt__Slider_FOV_2_K2Node_ComponentBoundEvent_37_OnValueChanged__DelegateSignature::Value' has a wrong offset!");

// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControlMenuSkillList_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControlMenuSkillList_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature final
{
public:
	class UCharaCreateClassSkillMenuItem_C*       Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControlMenuSkillList_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature) == 0x000008, "Wrong alignment on UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControlMenuSkillList_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature");
static_assert(sizeof(UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControlMenuSkillList_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature) == 0x000008, "Wrong size on UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControlMenuSkillList_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControlMenuSkillList_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature, Sender) == 0x000000, "Member 'UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControlMenuSkillList_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature::Sender' has a wrong offset!");

// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControlMenuSkillList_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControlMenuSkillList_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature final
{
public:
	class UCharaCreateClassSkillMenuItem_C*       Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControlMenuSkillList_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature) == 0x000008, "Wrong alignment on UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControlMenuSkillList_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature");
static_assert(sizeof(UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControlMenuSkillList_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature) == 0x000008, "Wrong size on UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControlMenuSkillList_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControlMenuSkillList_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature, Sender) == 0x000000, "Member 'UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControlMenuSkillList_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature::Sender' has a wrong offset!");

// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.SetActiveCameraControlViewWidget
// 0x0008 (0x0008 - 0x0000)
struct UMG_PhotoModeControllMenu_C_SetActiveCameraControlViewWidget final
{
public:
	class UWidget*                                Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_PhotoModeControllMenu_C_SetActiveCameraControlViewWidget) == 0x000008, "Wrong alignment on UMG_PhotoModeControllMenu_C_SetActiveCameraControlViewWidget");
static_assert(sizeof(UMG_PhotoModeControllMenu_C_SetActiveCameraControlViewWidget) == 0x000008, "Wrong size on UMG_PhotoModeControllMenu_C_SetActiveCameraControlViewWidget");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_SetActiveCameraControlViewWidget, Widget) == 0x000000, "Member 'UMG_PhotoModeControllMenu_C_SetActiveCameraControlViewWidget::Widget' has a wrong offset!");

// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__Slider_RotationYow_K2Node_ComponentBoundEvent_14_OnValueChanged__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct UMG_PhotoModeControllMenu_C_BndEvt__Slider_RotationYow_K2Node_ComponentBoundEvent_14_OnValueChanged__DelegateSignature final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_PhotoModeControllMenu_C_BndEvt__Slider_RotationYow_K2Node_ComponentBoundEvent_14_OnValueChanged__DelegateSignature) == 0x000004, "Wrong alignment on UMG_PhotoModeControllMenu_C_BndEvt__Slider_RotationYow_K2Node_ComponentBoundEvent_14_OnValueChanged__DelegateSignature");
static_assert(sizeof(UMG_PhotoModeControllMenu_C_BndEvt__Slider_RotationYow_K2Node_ComponentBoundEvent_14_OnValueChanged__DelegateSignature) == 0x000004, "Wrong size on UMG_PhotoModeControllMenu_C_BndEvt__Slider_RotationYow_K2Node_ComponentBoundEvent_14_OnValueChanged__DelegateSignature");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_BndEvt__Slider_RotationYow_K2Node_ComponentBoundEvent_14_OnValueChanged__DelegateSignature, Value) == 0x000000, "Member 'UMG_PhotoModeControllMenu_C_BndEvt__Slider_RotationYow_K2Node_ComponentBoundEvent_14_OnValueChanged__DelegateSignature::Value' has a wrong offset!");

// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__Slider_RotationPitch_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct UMG_PhotoModeControllMenu_C_BndEvt__Slider_RotationPitch_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_PhotoModeControllMenu_C_BndEvt__Slider_RotationPitch_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature) == 0x000004, "Wrong alignment on UMG_PhotoModeControllMenu_C_BndEvt__Slider_RotationPitch_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature");
static_assert(sizeof(UMG_PhotoModeControllMenu_C_BndEvt__Slider_RotationPitch_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature) == 0x000004, "Wrong size on UMG_PhotoModeControllMenu_C_BndEvt__Slider_RotationPitch_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_BndEvt__Slider_RotationPitch_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature, Value) == 0x000000, "Member 'UMG_PhotoModeControllMenu_C_BndEvt__Slider_RotationPitch_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature::Value' has a wrong offset!");

// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__CheckBox_DOF_K2Node_ComponentBoundEvent_7_OnCheckStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct UMG_PhotoModeControllMenu_C_BndEvt__CheckBox_DOF_K2Node_ComponentBoundEvent_7_OnCheckStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_PhotoModeControllMenu_C_BndEvt__CheckBox_DOF_K2Node_ComponentBoundEvent_7_OnCheckStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on UMG_PhotoModeControllMenu_C_BndEvt__CheckBox_DOF_K2Node_ComponentBoundEvent_7_OnCheckStateChanged__DelegateSignature");
static_assert(sizeof(UMG_PhotoModeControllMenu_C_BndEvt__CheckBox_DOF_K2Node_ComponentBoundEvent_7_OnCheckStateChanged__DelegateSignature) == 0x000001, "Wrong size on UMG_PhotoModeControllMenu_C_BndEvt__CheckBox_DOF_K2Node_ComponentBoundEvent_7_OnCheckStateChanged__DelegateSignature");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_BndEvt__CheckBox_DOF_K2Node_ComponentBoundEvent_7_OnCheckStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'UMG_PhotoModeControllMenu_C_BndEvt__CheckBox_DOF_K2Node_ComponentBoundEvent_7_OnCheckStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__Slider_Aperture_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct UMG_PhotoModeControllMenu_C_BndEvt__Slider_Aperture_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_PhotoModeControllMenu_C_BndEvt__Slider_Aperture_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature) == 0x000004, "Wrong alignment on UMG_PhotoModeControllMenu_C_BndEvt__Slider_Aperture_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature");
static_assert(sizeof(UMG_PhotoModeControllMenu_C_BndEvt__Slider_Aperture_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature) == 0x000004, "Wrong size on UMG_PhotoModeControllMenu_C_BndEvt__Slider_Aperture_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_BndEvt__Slider_Aperture_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature, Value) == 0x000000, "Member 'UMG_PhotoModeControllMenu_C_BndEvt__Slider_Aperture_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature::Value' has a wrong offset!");

// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__Slider_FocalDistance_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct UMG_PhotoModeControllMenu_C_BndEvt__Slider_FocalDistance_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_PhotoModeControllMenu_C_BndEvt__Slider_FocalDistance_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature) == 0x000004, "Wrong alignment on UMG_PhotoModeControllMenu_C_BndEvt__Slider_FocalDistance_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature");
static_assert(sizeof(UMG_PhotoModeControllMenu_C_BndEvt__Slider_FocalDistance_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature) == 0x000004, "Wrong size on UMG_PhotoModeControllMenu_C_BndEvt__Slider_FocalDistance_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_BndEvt__Slider_FocalDistance_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature, Value) == 0x000000, "Member 'UMG_PhotoModeControllMenu_C_BndEvt__Slider_FocalDistance_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature::Value' has a wrong offset!");

// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__Slider_Roll_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct UMG_PhotoModeControllMenu_C_BndEvt__Slider_Roll_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_PhotoModeControllMenu_C_BndEvt__Slider_Roll_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature) == 0x000004, "Wrong alignment on UMG_PhotoModeControllMenu_C_BndEvt__Slider_Roll_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature");
static_assert(sizeof(UMG_PhotoModeControllMenu_C_BndEvt__Slider_Roll_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature) == 0x000004, "Wrong size on UMG_PhotoModeControllMenu_C_BndEvt__Slider_Roll_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_BndEvt__Slider_Roll_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature, Value) == 0x000000, "Member 'UMG_PhotoModeControllMenu_C_BndEvt__Slider_Roll_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature::Value' has a wrong offset!");

// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.OnMouseButtonDown
// 0x02D0 (0x02D0 - 0x0000)
struct UMG_PhotoModeControllMenu_C_OnMouseButtonDown final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00A8(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x0160(0x00B8)()
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0218(0x00B8)()
};
static_assert(alignof(UMG_PhotoModeControllMenu_C_OnMouseButtonDown) == 0x000008, "Wrong alignment on UMG_PhotoModeControllMenu_C_OnMouseButtonDown");
static_assert(sizeof(UMG_PhotoModeControllMenu_C_OnMouseButtonDown) == 0x0002D0, "Wrong size on UMG_PhotoModeControllMenu_C_OnMouseButtonDown");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_OnMouseButtonDown, MyGeometry) == 0x000000, "Member 'UMG_PhotoModeControllMenu_C_OnMouseButtonDown::MyGeometry' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_OnMouseButtonDown, MouseEvent) == 0x000038, "Member 'UMG_PhotoModeControllMenu_C_OnMouseButtonDown::MouseEvent' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_OnMouseButtonDown, ReturnValue) == 0x0000A8, "Member 'UMG_PhotoModeControllMenu_C_OnMouseButtonDown::ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_OnMouseButtonDown, CallFunc_Unhandled_ReturnValue) == 0x000160, "Member 'UMG_PhotoModeControllMenu_C_OnMouseButtonDown::CallFunc_Unhandled_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_OnMouseButtonDown, CallFunc_Handled_ReturnValue) == 0x000218, "Member 'UMG_PhotoModeControllMenu_C_OnMouseButtonDown::CallFunc_Handled_ReturnValue' has a wrong offset!");

// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.OnDragOver
// 0x00B8 (0x00B8 - 0x0000)
struct UMG_PhotoModeControllMenu_C_OnDragOver final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          PointerEvent;                                      // 0x0038(0x0070)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation*                     Operation;                                         // 0x00A8(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x00B0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_PhotoModeControllMenu_C_OnDragOver) == 0x000008, "Wrong alignment on UMG_PhotoModeControllMenu_C_OnDragOver");
static_assert(sizeof(UMG_PhotoModeControllMenu_C_OnDragOver) == 0x0000B8, "Wrong size on UMG_PhotoModeControllMenu_C_OnDragOver");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_OnDragOver, MyGeometry) == 0x000000, "Member 'UMG_PhotoModeControllMenu_C_OnDragOver::MyGeometry' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_OnDragOver, PointerEvent) == 0x000038, "Member 'UMG_PhotoModeControllMenu_C_OnDragOver::PointerEvent' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_OnDragOver, Operation) == 0x0000A8, "Member 'UMG_PhotoModeControllMenu_C_OnDragOver::Operation' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_OnDragOver, ReturnValue) == 0x0000B0, "Member 'UMG_PhotoModeControllMenu_C_OnDragOver::ReturnValue' has a wrong offset!");

// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.OnDrop
// 0x00B8 (0x00B8 - 0x0000)
struct UMG_PhotoModeControllMenu_C_OnDrop final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          PointerEvent;                                      // 0x0038(0x0070)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation*                     Operation;                                         // 0x00A8(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x00B0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_PhotoModeControllMenu_C_OnDrop) == 0x000008, "Wrong alignment on UMG_PhotoModeControllMenu_C_OnDrop");
static_assert(sizeof(UMG_PhotoModeControllMenu_C_OnDrop) == 0x0000B8, "Wrong size on UMG_PhotoModeControllMenu_C_OnDrop");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_OnDrop, MyGeometry) == 0x000000, "Member 'UMG_PhotoModeControllMenu_C_OnDrop::MyGeometry' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_OnDrop, PointerEvent) == 0x000038, "Member 'UMG_PhotoModeControllMenu_C_OnDrop::PointerEvent' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_OnDrop, Operation) == 0x0000A8, "Member 'UMG_PhotoModeControllMenu_C_OnDrop::Operation' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_OnDrop, ReturnValue) == 0x0000B0, "Member 'UMG_PhotoModeControllMenu_C_OnDrop::ReturnValue' has a wrong offset!");

// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.On_DropHitBG_MouseButtonDown
// 0x0218 (0x0218 - 0x0000)
struct UMG_PhotoModeControllMenu_C_On_DropHitBG_MouseButtonDown final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00A8(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x0160(0x00B8)()
};
static_assert(alignof(UMG_PhotoModeControllMenu_C_On_DropHitBG_MouseButtonDown) == 0x000008, "Wrong alignment on UMG_PhotoModeControllMenu_C_On_DropHitBG_MouseButtonDown");
static_assert(sizeof(UMG_PhotoModeControllMenu_C_On_DropHitBG_MouseButtonDown) == 0x000218, "Wrong size on UMG_PhotoModeControllMenu_C_On_DropHitBG_MouseButtonDown");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_On_DropHitBG_MouseButtonDown, MyGeometry) == 0x000000, "Member 'UMG_PhotoModeControllMenu_C_On_DropHitBG_MouseButtonDown::MyGeometry' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_On_DropHitBG_MouseButtonDown, MouseEvent) == 0x000038, "Member 'UMG_PhotoModeControllMenu_C_On_DropHitBG_MouseButtonDown::MouseEvent' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_On_DropHitBG_MouseButtonDown, ReturnValue) == 0x0000A8, "Member 'UMG_PhotoModeControllMenu_C_On_DropHitBG_MouseButtonDown::ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_On_DropHitBG_MouseButtonDown, CallFunc_Unhandled_ReturnValue) == 0x000160, "Member 'UMG_PhotoModeControllMenu_C_On_DropHitBG_MouseButtonDown::CallFunc_Unhandled_ReturnValue' has a wrong offset!");

// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.IsKeyboardMode
// 0x0058 (0x0058 - 0x0000)
struct UMG_PhotoModeControllMenu_C_IsKeyboardMode final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9514[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x0008(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9515[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9516[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBOperateMode                                CallFunc_GetOperateMode_ReturnValue;               // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_PhotoModeControllMenu_C_IsKeyboardMode) == 0x000008, "Wrong alignment on UMG_PhotoModeControllMenu_C_IsKeyboardMode");
static_assert(sizeof(UMG_PhotoModeControllMenu_C_IsKeyboardMode) == 0x000058, "Wrong size on UMG_PhotoModeControllMenu_C_IsKeyboardMode");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_IsKeyboardMode, ReturnValue) == 0x000000, "Member 'UMG_PhotoModeControllMenu_C_IsKeyboardMode::ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_IsKeyboardMode, K2Node_MakeArray_Array) == 0x000008, "Member 'UMG_PhotoModeControllMenu_C_IsKeyboardMode::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_IsKeyboardMode, CallFunc_Array_Get_Item) == 0x000018, "Member 'UMG_PhotoModeControllMenu_C_IsKeyboardMode::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_IsKeyboardMode, CallFunc_IsEmpty_ReturnValue) == 0x000020, "Member 'UMG_PhotoModeControllMenu_C_IsKeyboardMode::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_IsKeyboardMode, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000028, "Member 'UMG_PhotoModeControllMenu_C_IsKeyboardMode::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_IsKeyboardMode, CallFunc_GetDisplayName_ReturnValue) == 0x000030, "Member 'UMG_PhotoModeControllMenu_C_IsKeyboardMode::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_IsKeyboardMode, CallFunc_GetConfigSaveManager_IsValid) == 0x000040, "Member 'UMG_PhotoModeControllMenu_C_IsKeyboardMode::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_IsKeyboardMode, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000048, "Member 'UMG_PhotoModeControllMenu_C_IsKeyboardMode::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_IsKeyboardMode, CallFunc_GetOperateMode_ReturnValue) == 0x000050, "Member 'UMG_PhotoModeControllMenu_C_IsKeyboardMode::CallFunc_GetOperateMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_IsKeyboardMode, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000051, "Member 'UMG_PhotoModeControllMenu_C_IsKeyboardMode::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.InitKeyGuidText
// 0x0660 (0x0660 - 0x0000)
struct UMG_PhotoModeControllMenu_C_InitKeyGuidText final
{
public:
	bool                                          bIsKeyboardMode;                                   // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9517[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Temp_name_Variable;                                // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_1;                              // 0x000C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9518[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   CallFunc_GamepadKeyToKey_ReturnValue;              // 0x0018(0x0018)(HasGetValueTypeHash)
	struct FKey                                   CallFunc_GamepadKeyToKey_ReturnValue_1;            // 0x0030(0x0018)(HasGetValueTypeHash)
	class FString                                 CallFunc_GetKeyTextByKey_ReturnValue;              // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetKeyTextByKey_ReturnValue_1;            // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_1;     // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayTextByAction_ReturnValue;       // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0098(0x0018)()
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x00B0(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x00C8(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0108(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0118(0x0018)()
	class FString                                 CallFunc_GetKeyTextByKey_ReturnValue_2;            // 0x0130(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0140(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0158(0x0040)(HasGetValueTypeHash)
	class FString                                 CallFunc_GetKeyTextByKey_ReturnValue_3;            // 0x0198(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayTextByAction_ReturnValue_1;     // 0x01A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x01B8(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x01D0(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x01E8(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_3;            // 0x0228(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x0268(0x0010)(ReferenceParm)
	class FName                                   K2Node_Select_Default;                             // 0x0278(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_2;     // 0x0280(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_3;     // 0x0290(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_4;          // 0x02A0(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_5;          // 0x02B8(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x02D0(0x0018)()
	class FString                                 CallFunc_GetDisplayTextByAction_ReturnValue_2;     // 0x02E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x02F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9519[0x7];                                     // 0x02F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_6;          // 0x0300(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_4;            // 0x0318(0x0040)(HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default_1;                           // 0x0358(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_2;                          // 0x0368(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_7;          // 0x0378(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue_2;                     // 0x0390(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_5;            // 0x03A8(0x0040)(HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayTextByAction_ReturnValue_3;     // 0x03E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_3;                          // 0x03F8(0x0010)(ReferenceParm)
	class FString                                 CallFunc_GetDisplayTextByAction_ReturnValue_4;     // 0x0408(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Format_ReturnValue_3;                     // 0x0418(0x0018)()
	class FString                                 CallFunc_GetDisplayTextByAction_ReturnValue_5;     // 0x0430(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayTextByAction_ReturnValue_6;     // 0x0440(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0450(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_951A[0x7];                                     // 0x0451(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0458(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0468(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default_2;                           // 0x0478(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0488(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_8;          // 0x0498(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_9;          // 0x04B0(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_6;            // 0x04C8(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_7;            // 0x0508(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_4;                          // 0x0548(0x0010)(ReferenceParm)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_5;                          // 0x0558(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_4;                     // 0x0568(0x0018)()
	bool                                          CallFunc_IsKeyboardMode_ReturnValue;               // 0x0580(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_951B[0x7];                                     // 0x0581(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayTextByAction_ReturnValue_7;     // 0x0588(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_10;         // 0x0598(0x0018)()
	class FText                                   CallFunc_GetText_ReturnValue_1;                    // 0x05B0(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_8;            // 0x05C8(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_6;                          // 0x0608(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_5;                     // 0x0618(0x0018)()
	class FText                                   CallFunc_GetText_ReturnValue_2;                    // 0x0630(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue_6;                     // 0x0648(0x0018)()
};
static_assert(alignof(UMG_PhotoModeControllMenu_C_InitKeyGuidText) == 0x000008, "Wrong alignment on UMG_PhotoModeControllMenu_C_InitKeyGuidText");
static_assert(sizeof(UMG_PhotoModeControllMenu_C_InitKeyGuidText) == 0x000660, "Wrong size on UMG_PhotoModeControllMenu_C_InitKeyGuidText");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_InitKeyGuidText, bIsKeyboardMode) == 0x000000, "Member 'UMG_PhotoModeControllMenu_C_InitKeyGuidText::bIsKeyboardMode' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_InitKeyGuidText, Temp_bool_Variable) == 0x000001, "Member 'UMG_PhotoModeControllMenu_C_InitKeyGuidText::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_InitKeyGuidText, Temp_name_Variable) == 0x000004, "Member 'UMG_PhotoModeControllMenu_C_InitKeyGuidText::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_InitKeyGuidText, Temp_name_Variable_1) == 0x00000C, "Member 'UMG_PhotoModeControllMenu_C_InitKeyGuidText::Temp_name_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_InitKeyGuidText, CallFunc_GamepadKeyToKey_ReturnValue) == 0x000018, "Member 'UMG_PhotoModeControllMenu_C_InitKeyGuidText::CallFunc_GamepadKeyToKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_InitKeyGuidText, CallFunc_GamepadKeyToKey_ReturnValue_1) == 0x000030, "Member 'UMG_PhotoModeControllMenu_C_InitKeyGuidText::CallFunc_GamepadKeyToKey_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_InitKeyGuidText, CallFunc_GetKeyTextByKey_ReturnValue) == 0x000048, "Member 'UMG_PhotoModeControllMenu_C_InitKeyGuidText::CallFunc_GetKeyTextByKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_InitKeyGuidText, CallFunc_GetKeyTextByKey_ReturnValue_1) == 0x000058, "Member 'UMG_PhotoModeControllMenu_C_InitKeyGuidText::CallFunc_GetKeyTextByKey_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_InitKeyGuidText, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000068, "Member 'UMG_PhotoModeControllMenu_C_InitKeyGuidText::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_InitKeyGuidText, CallFunc_GetTextFromAssetByName_ReturnValue_1) == 0x000078, "Member 'UMG_PhotoModeControllMenu_C_InitKeyGuidText::CallFunc_GetTextFromAssetByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_InitKeyGuidText, CallFunc_GetDisplayTextByAction_ReturnValue) == 0x000088, "Member 'UMG_PhotoModeControllMenu_C_InitKeyGuidText::CallFunc_GetDisplayTextByAction_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_InitKeyGuidText, CallFunc_Conv_StringToText_ReturnValue) == 0x000098, "Member 'UMG_PhotoModeControllMenu_C_InitKeyGuidText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_InitKeyGuidText, CallFunc_GetText_ReturnValue) == 0x0000B0, "Member 'UMG_PhotoModeControllMenu_C_InitKeyGuidText::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_InitKeyGuidText, K2Node_MakeStruct_FormatArgumentData) == 0x0000C8, "Member 'UMG_PhotoModeControllMenu_C_InitKeyGuidText::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_InitKeyGuidText, K2Node_MakeArray_Array) == 0x000108, "Member 'UMG_PhotoModeControllMenu_C_InitKeyGuidText::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_InitKeyGuidText, CallFunc_Format_ReturnValue) == 0x000118, "Member 'UMG_PhotoModeControllMenu_C_InitKeyGuidText::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_InitKeyGuidText, CallFunc_GetKeyTextByKey_ReturnValue_2) == 0x000130, "Member 'UMG_PhotoModeControllMenu_C_InitKeyGuidText::CallFunc_GetKeyTextByKey_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_InitKeyGuidText, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000140, "Member 'UMG_PhotoModeControllMenu_C_InitKeyGuidText::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_InitKeyGuidText, K2Node_MakeStruct_FormatArgumentData_1) == 0x000158, "Member 'UMG_PhotoModeControllMenu_C_InitKeyGuidText::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_InitKeyGuidText, CallFunc_GetKeyTextByKey_ReturnValue_3) == 0x000198, "Member 'UMG_PhotoModeControllMenu_C_InitKeyGuidText::CallFunc_GetKeyTextByKey_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_InitKeyGuidText, CallFunc_GetDisplayTextByAction_ReturnValue_1) == 0x0001A8, "Member 'UMG_PhotoModeControllMenu_C_InitKeyGuidText::CallFunc_GetDisplayTextByAction_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_InitKeyGuidText, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0001B8, "Member 'UMG_PhotoModeControllMenu_C_InitKeyGuidText::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_InitKeyGuidText, CallFunc_Conv_StringToText_ReturnValue_3) == 0x0001D0, "Member 'UMG_PhotoModeControllMenu_C_InitKeyGuidText::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_InitKeyGuidText, K2Node_MakeStruct_FormatArgumentData_2) == 0x0001E8, "Member 'UMG_PhotoModeControllMenu_C_InitKeyGuidText::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_InitKeyGuidText, K2Node_MakeStruct_FormatArgumentData_3) == 0x000228, "Member 'UMG_PhotoModeControllMenu_C_InitKeyGuidText::K2Node_MakeStruct_FormatArgumentData_3' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_InitKeyGuidText, K2Node_MakeArray_Array_1) == 0x000268, "Member 'UMG_PhotoModeControllMenu_C_InitKeyGuidText::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_InitKeyGuidText, K2Node_Select_Default) == 0x000278, "Member 'UMG_PhotoModeControllMenu_C_InitKeyGuidText::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_InitKeyGuidText, CallFunc_GetTextFromAssetByName_ReturnValue_2) == 0x000280, "Member 'UMG_PhotoModeControllMenu_C_InitKeyGuidText::CallFunc_GetTextFromAssetByName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_InitKeyGuidText, CallFunc_GetTextFromAssetByName_ReturnValue_3) == 0x000290, "Member 'UMG_PhotoModeControllMenu_C_InitKeyGuidText::CallFunc_GetTextFromAssetByName_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_InitKeyGuidText, CallFunc_Conv_StringToText_ReturnValue_4) == 0x0002A0, "Member 'UMG_PhotoModeControllMenu_C_InitKeyGuidText::CallFunc_Conv_StringToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_InitKeyGuidText, CallFunc_Conv_StringToText_ReturnValue_5) == 0x0002B8, "Member 'UMG_PhotoModeControllMenu_C_InitKeyGuidText::CallFunc_Conv_StringToText_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_InitKeyGuidText, CallFunc_Format_ReturnValue_1) == 0x0002D0, "Member 'UMG_PhotoModeControllMenu_C_InitKeyGuidText::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_InitKeyGuidText, CallFunc_GetDisplayTextByAction_ReturnValue_2) == 0x0002E8, "Member 'UMG_PhotoModeControllMenu_C_InitKeyGuidText::CallFunc_GetDisplayTextByAction_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_InitKeyGuidText, Temp_bool_Variable_1) == 0x0002F8, "Member 'UMG_PhotoModeControllMenu_C_InitKeyGuidText::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_InitKeyGuidText, CallFunc_Conv_StringToText_ReturnValue_6) == 0x000300, "Member 'UMG_PhotoModeControllMenu_C_InitKeyGuidText::CallFunc_Conv_StringToText_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_InitKeyGuidText, K2Node_MakeStruct_FormatArgumentData_4) == 0x000318, "Member 'UMG_PhotoModeControllMenu_C_InitKeyGuidText::K2Node_MakeStruct_FormatArgumentData_4' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_InitKeyGuidText, K2Node_Select_Default_1) == 0x000358, "Member 'UMG_PhotoModeControllMenu_C_InitKeyGuidText::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_InitKeyGuidText, K2Node_MakeArray_Array_2) == 0x000368, "Member 'UMG_PhotoModeControllMenu_C_InitKeyGuidText::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_InitKeyGuidText, CallFunc_Conv_StringToText_ReturnValue_7) == 0x000378, "Member 'UMG_PhotoModeControllMenu_C_InitKeyGuidText::CallFunc_Conv_StringToText_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_InitKeyGuidText, CallFunc_Format_ReturnValue_2) == 0x000390, "Member 'UMG_PhotoModeControllMenu_C_InitKeyGuidText::CallFunc_Format_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_InitKeyGuidText, K2Node_MakeStruct_FormatArgumentData_5) == 0x0003A8, "Member 'UMG_PhotoModeControllMenu_C_InitKeyGuidText::K2Node_MakeStruct_FormatArgumentData_5' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_InitKeyGuidText, CallFunc_GetDisplayTextByAction_ReturnValue_3) == 0x0003E8, "Member 'UMG_PhotoModeControllMenu_C_InitKeyGuidText::CallFunc_GetDisplayTextByAction_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_InitKeyGuidText, K2Node_MakeArray_Array_3) == 0x0003F8, "Member 'UMG_PhotoModeControllMenu_C_InitKeyGuidText::K2Node_MakeArray_Array_3' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_InitKeyGuidText, CallFunc_GetDisplayTextByAction_ReturnValue_4) == 0x000408, "Member 'UMG_PhotoModeControllMenu_C_InitKeyGuidText::CallFunc_GetDisplayTextByAction_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_InitKeyGuidText, CallFunc_Format_ReturnValue_3) == 0x000418, "Member 'UMG_PhotoModeControllMenu_C_InitKeyGuidText::CallFunc_Format_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_InitKeyGuidText, CallFunc_GetDisplayTextByAction_ReturnValue_5) == 0x000430, "Member 'UMG_PhotoModeControllMenu_C_InitKeyGuidText::CallFunc_GetDisplayTextByAction_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_InitKeyGuidText, CallFunc_GetDisplayTextByAction_ReturnValue_6) == 0x000440, "Member 'UMG_PhotoModeControllMenu_C_InitKeyGuidText::CallFunc_GetDisplayTextByAction_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_InitKeyGuidText, Temp_bool_Variable_2) == 0x000450, "Member 'UMG_PhotoModeControllMenu_C_InitKeyGuidText::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_InitKeyGuidText, CallFunc_Concat_StrStr_ReturnValue) == 0x000458, "Member 'UMG_PhotoModeControllMenu_C_InitKeyGuidText::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_InitKeyGuidText, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000468, "Member 'UMG_PhotoModeControllMenu_C_InitKeyGuidText::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_InitKeyGuidText, K2Node_Select_Default_2) == 0x000478, "Member 'UMG_PhotoModeControllMenu_C_InitKeyGuidText::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_InitKeyGuidText, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000488, "Member 'UMG_PhotoModeControllMenu_C_InitKeyGuidText::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_InitKeyGuidText, CallFunc_Conv_StringToText_ReturnValue_8) == 0x000498, "Member 'UMG_PhotoModeControllMenu_C_InitKeyGuidText::CallFunc_Conv_StringToText_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_InitKeyGuidText, CallFunc_Conv_StringToText_ReturnValue_9) == 0x0004B0, "Member 'UMG_PhotoModeControllMenu_C_InitKeyGuidText::CallFunc_Conv_StringToText_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_InitKeyGuidText, K2Node_MakeStruct_FormatArgumentData_6) == 0x0004C8, "Member 'UMG_PhotoModeControllMenu_C_InitKeyGuidText::K2Node_MakeStruct_FormatArgumentData_6' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_InitKeyGuidText, K2Node_MakeStruct_FormatArgumentData_7) == 0x000508, "Member 'UMG_PhotoModeControllMenu_C_InitKeyGuidText::K2Node_MakeStruct_FormatArgumentData_7' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_InitKeyGuidText, K2Node_MakeArray_Array_4) == 0x000548, "Member 'UMG_PhotoModeControllMenu_C_InitKeyGuidText::K2Node_MakeArray_Array_4' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_InitKeyGuidText, K2Node_MakeArray_Array_5) == 0x000558, "Member 'UMG_PhotoModeControllMenu_C_InitKeyGuidText::K2Node_MakeArray_Array_5' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_InitKeyGuidText, CallFunc_Format_ReturnValue_4) == 0x000568, "Member 'UMG_PhotoModeControllMenu_C_InitKeyGuidText::CallFunc_Format_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_InitKeyGuidText, CallFunc_IsKeyboardMode_ReturnValue) == 0x000580, "Member 'UMG_PhotoModeControllMenu_C_InitKeyGuidText::CallFunc_IsKeyboardMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_InitKeyGuidText, CallFunc_GetDisplayTextByAction_ReturnValue_7) == 0x000588, "Member 'UMG_PhotoModeControllMenu_C_InitKeyGuidText::CallFunc_GetDisplayTextByAction_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_InitKeyGuidText, CallFunc_Conv_StringToText_ReturnValue_10) == 0x000598, "Member 'UMG_PhotoModeControllMenu_C_InitKeyGuidText::CallFunc_Conv_StringToText_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_InitKeyGuidText, CallFunc_GetText_ReturnValue_1) == 0x0005B0, "Member 'UMG_PhotoModeControllMenu_C_InitKeyGuidText::CallFunc_GetText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_InitKeyGuidText, K2Node_MakeStruct_FormatArgumentData_8) == 0x0005C8, "Member 'UMG_PhotoModeControllMenu_C_InitKeyGuidText::K2Node_MakeStruct_FormatArgumentData_8' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_InitKeyGuidText, K2Node_MakeArray_Array_6) == 0x000608, "Member 'UMG_PhotoModeControllMenu_C_InitKeyGuidText::K2Node_MakeArray_Array_6' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_InitKeyGuidText, CallFunc_Format_ReturnValue_5) == 0x000618, "Member 'UMG_PhotoModeControllMenu_C_InitKeyGuidText::CallFunc_Format_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_InitKeyGuidText, CallFunc_GetText_ReturnValue_2) == 0x000630, "Member 'UMG_PhotoModeControllMenu_C_InitKeyGuidText::CallFunc_GetText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_InitKeyGuidText, CallFunc_Format_ReturnValue_6) == 0x000648, "Member 'UMG_PhotoModeControllMenu_C_InitKeyGuidText::CallFunc_Format_ReturnValue_6' has a wrong offset!");

// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.SetRootVisible
// 0x0028 (0x0028 - 0x0000)
struct UMG_PhotoModeControllMenu_C_SetRootVisible final
{
public:
	bool                                          bVisible;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         Temp_float_Variable;                               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_1;                             // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_951C[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default;                             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_951D[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_PhotoModeControllMenu_C_SetRootVisible) == 0x000004, "Wrong alignment on UMG_PhotoModeControllMenu_C_SetRootVisible");
static_assert(sizeof(UMG_PhotoModeControllMenu_C_SetRootVisible) == 0x000028, "Wrong size on UMG_PhotoModeControllMenu_C_SetRootVisible");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_SetRootVisible, bVisible) == 0x000000, "Member 'UMG_PhotoModeControllMenu_C_SetRootVisible::bVisible' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_SetRootVisible, CallFunc_MakeLiteralByte_ReturnValue) == 0x000001, "Member 'UMG_PhotoModeControllMenu_C_SetRootVisible::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_SetRootVisible, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000002, "Member 'UMG_PhotoModeControllMenu_C_SetRootVisible::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_SetRootVisible, Temp_bool_Variable) == 0x000003, "Member 'UMG_PhotoModeControllMenu_C_SetRootVisible::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_SetRootVisible, Temp_float_Variable) == 0x000004, "Member 'UMG_PhotoModeControllMenu_C_SetRootVisible::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_SetRootVisible, Temp_float_Variable_1) == 0x000008, "Member 'UMG_PhotoModeControllMenu_C_SetRootVisible::Temp_float_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_SetRootVisible, Temp_bool_Variable_1) == 0x00000C, "Member 'UMG_PhotoModeControllMenu_C_SetRootVisible::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_SetRootVisible, K2Node_Select_Default) == 0x000010, "Member 'UMG_PhotoModeControllMenu_C_SetRootVisible::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_SetRootVisible, K2Node_Select_Default_1) == 0x000014, "Member 'UMG_PhotoModeControllMenu_C_SetRootVisible::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_SetRootVisible, K2Node_MakeStruct_LinearColor) == 0x000018, "Member 'UMG_PhotoModeControllMenu_C_SetRootVisible::K2Node_MakeStruct_LinearColor' has a wrong offset!");

// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.IsGamepadMode
// 0x0018 (0x0018 - 0x0000)
struct UMG_PhotoModeControllMenu_C_IsGamepadMode final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_951E[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBOperateMode                                CallFunc_GetOperateMode_ReturnValue;               // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_PhotoModeControllMenu_C_IsGamepadMode) == 0x000008, "Wrong alignment on UMG_PhotoModeControllMenu_C_IsGamepadMode");
static_assert(sizeof(UMG_PhotoModeControllMenu_C_IsGamepadMode) == 0x000018, "Wrong size on UMG_PhotoModeControllMenu_C_IsGamepadMode");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_IsGamepadMode, ReturnValue) == 0x000000, "Member 'UMG_PhotoModeControllMenu_C_IsGamepadMode::ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_IsGamepadMode, CallFunc_GetConfigSaveManager_IsValid) == 0x000001, "Member 'UMG_PhotoModeControllMenu_C_IsGamepadMode::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_IsGamepadMode, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000008, "Member 'UMG_PhotoModeControllMenu_C_IsGamepadMode::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_IsGamepadMode, CallFunc_GetOperateMode_ReturnValue) == 0x000010, "Member 'UMG_PhotoModeControllMenu_C_IsGamepadMode::CallFunc_GetOperateMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_IsGamepadMode, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000011, "Member 'UMG_PhotoModeControllMenu_C_IsGamepadMode::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.Create Tool Tip
// 0x0050 (0x0050 - 0x0000)
struct UMG_PhotoModeControllMenu_C_Create_Tool_Tip final
{
public:
	class FName                                   TextId;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                Param_TabButtonToolTip;                            // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
	class UWBP_CommonToolTipText_Variable_C*      CallFunc_Create_ReturnValue;                       // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_CommonToolTipText_Variable_C*      K2Node_DynamicCast_AsWBP_Common_Tool_Tip_Text_Variable; // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_PhotoModeControllMenu_C_Create_Tool_Tip) == 0x000008, "Wrong alignment on UMG_PhotoModeControllMenu_C_Create_Tool_Tip");
static_assert(sizeof(UMG_PhotoModeControllMenu_C_Create_Tool_Tip) == 0x000050, "Wrong size on UMG_PhotoModeControllMenu_C_Create_Tool_Tip");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_Create_Tool_Tip, TextId) == 0x000000, "Member 'UMG_PhotoModeControllMenu_C_Create_Tool_Tip::TextId' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_Create_Tool_Tip, Param_TabButtonToolTip) == 0x000008, "Member 'UMG_PhotoModeControllMenu_C_Create_Tool_Tip::Param_TabButtonToolTip' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_Create_Tool_Tip, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000010, "Member 'UMG_PhotoModeControllMenu_C_Create_Tool_Tip::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_Create_Tool_Tip, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'UMG_PhotoModeControllMenu_C_Create_Tool_Tip::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_Create_Tool_Tip, CallFunc_Create_ReturnValue) == 0x000038, "Member 'UMG_PhotoModeControllMenu_C_Create_Tool_Tip::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_Create_Tool_Tip, K2Node_DynamicCast_AsWBP_Common_Tool_Tip_Text_Variable) == 0x000040, "Member 'UMG_PhotoModeControllMenu_C_Create_Tool_Tip::K2Node_DynamicCast_AsWBP_Common_Tool_Tip_Text_Variable' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_Create_Tool_Tip, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'UMG_PhotoModeControllMenu_C_Create_Tool_Tip::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_Create_Tool_Tip, CallFunc_IsValid_ReturnValue) == 0x000049, "Member 'UMG_PhotoModeControllMenu_C_Create_Tool_Tip::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.Get_SBButton_TabRotation_ToolTipWidget_0
// 0x0028 (0x0028 - 0x0000)
struct UMG_PhotoModeControllMenu_C_Get_SBButton_TabRotation_ToolTipWidget_0 final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   NewLocalVar_0;                                     // 0x0008(0x0018)(Edit, BlueprintVisible)
	class UWidget*                                CallFunc_Create_Tool_Tip_TabButtonToolTip;         // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_PhotoModeControllMenu_C_Get_SBButton_TabRotation_ToolTipWidget_0) == 0x000008, "Wrong alignment on UMG_PhotoModeControllMenu_C_Get_SBButton_TabRotation_ToolTipWidget_0");
static_assert(sizeof(UMG_PhotoModeControllMenu_C_Get_SBButton_TabRotation_ToolTipWidget_0) == 0x000028, "Wrong size on UMG_PhotoModeControllMenu_C_Get_SBButton_TabRotation_ToolTipWidget_0");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_Get_SBButton_TabRotation_ToolTipWidget_0, ReturnValue) == 0x000000, "Member 'UMG_PhotoModeControllMenu_C_Get_SBButton_TabRotation_ToolTipWidget_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_Get_SBButton_TabRotation_ToolTipWidget_0, NewLocalVar_0) == 0x000008, "Member 'UMG_PhotoModeControllMenu_C_Get_SBButton_TabRotation_ToolTipWidget_0::NewLocalVar_0' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_Get_SBButton_TabRotation_ToolTipWidget_0, CallFunc_Create_Tool_Tip_TabButtonToolTip) == 0x000020, "Member 'UMG_PhotoModeControllMenu_C_Get_SBButton_TabRotation_ToolTipWidget_0::CallFunc_Create_Tool_Tip_TabButtonToolTip' has a wrong offset!");

// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.Get_SBButton_TabZoom_ToolTipWidget_0
// 0x0010 (0x0010 - 0x0000)
struct UMG_PhotoModeControllMenu_C_Get_SBButton_TabZoom_ToolTipWidget_0 final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_Create_Tool_Tip_TabButtonToolTip;         // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_PhotoModeControllMenu_C_Get_SBButton_TabZoom_ToolTipWidget_0) == 0x000008, "Wrong alignment on UMG_PhotoModeControllMenu_C_Get_SBButton_TabZoom_ToolTipWidget_0");
static_assert(sizeof(UMG_PhotoModeControllMenu_C_Get_SBButton_TabZoom_ToolTipWidget_0) == 0x000010, "Wrong size on UMG_PhotoModeControllMenu_C_Get_SBButton_TabZoom_ToolTipWidget_0");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_Get_SBButton_TabZoom_ToolTipWidget_0, ReturnValue) == 0x000000, "Member 'UMG_PhotoModeControllMenu_C_Get_SBButton_TabZoom_ToolTipWidget_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_Get_SBButton_TabZoom_ToolTipWidget_0, CallFunc_Create_Tool_Tip_TabButtonToolTip) == 0x000008, "Member 'UMG_PhotoModeControllMenu_C_Get_SBButton_TabZoom_ToolTipWidget_0::CallFunc_Create_Tool_Tip_TabButtonToolTip' has a wrong offset!");

// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.Get_SBButton_TabLookAt_ToolTipWidget_0
// 0x0010 (0x0010 - 0x0000)
struct UMG_PhotoModeControllMenu_C_Get_SBButton_TabLookAt_ToolTipWidget_0 final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_Create_Tool_Tip_TabButtonToolTip;         // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_PhotoModeControllMenu_C_Get_SBButton_TabLookAt_ToolTipWidget_0) == 0x000008, "Wrong alignment on UMG_PhotoModeControllMenu_C_Get_SBButton_TabLookAt_ToolTipWidget_0");
static_assert(sizeof(UMG_PhotoModeControllMenu_C_Get_SBButton_TabLookAt_ToolTipWidget_0) == 0x000010, "Wrong size on UMG_PhotoModeControllMenu_C_Get_SBButton_TabLookAt_ToolTipWidget_0");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_Get_SBButton_TabLookAt_ToolTipWidget_0, ReturnValue) == 0x000000, "Member 'UMG_PhotoModeControllMenu_C_Get_SBButton_TabLookAt_ToolTipWidget_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_Get_SBButton_TabLookAt_ToolTipWidget_0, CallFunc_Create_Tool_Tip_TabButtonToolTip) == 0x000008, "Member 'UMG_PhotoModeControllMenu_C_Get_SBButton_TabLookAt_ToolTipWidget_0::CallFunc_Create_Tool_Tip_TabButtonToolTip' has a wrong offset!");

// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.Get_SBButton_TabGesture_ToolTipWidget_0
// 0x0010 (0x0010 - 0x0000)
struct UMG_PhotoModeControllMenu_C_Get_SBButton_TabGesture_ToolTipWidget_0 final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_Create_Tool_Tip_TabButtonToolTip;         // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_PhotoModeControllMenu_C_Get_SBButton_TabGesture_ToolTipWidget_0) == 0x000008, "Wrong alignment on UMG_PhotoModeControllMenu_C_Get_SBButton_TabGesture_ToolTipWidget_0");
static_assert(sizeof(UMG_PhotoModeControllMenu_C_Get_SBButton_TabGesture_ToolTipWidget_0) == 0x000010, "Wrong size on UMG_PhotoModeControllMenu_C_Get_SBButton_TabGesture_ToolTipWidget_0");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_Get_SBButton_TabGesture_ToolTipWidget_0, ReturnValue) == 0x000000, "Member 'UMG_PhotoModeControllMenu_C_Get_SBButton_TabGesture_ToolTipWidget_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_Get_SBButton_TabGesture_ToolTipWidget_0, CallFunc_Create_Tool_Tip_TabButtonToolTip) == 0x000008, "Member 'UMG_PhotoModeControllMenu_C_Get_SBButton_TabGesture_ToolTipWidget_0::CallFunc_Create_Tool_Tip_TabButtonToolTip' has a wrong offset!");

// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.Get_SBButton_TabSkill_ToolTipWidget_0
// 0x0010 (0x0010 - 0x0000)
struct UMG_PhotoModeControllMenu_C_Get_SBButton_TabSkill_ToolTipWidget_0 final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_Create_Tool_Tip_TabButtonToolTip;         // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_PhotoModeControllMenu_C_Get_SBButton_TabSkill_ToolTipWidget_0) == 0x000008, "Wrong alignment on UMG_PhotoModeControllMenu_C_Get_SBButton_TabSkill_ToolTipWidget_0");
static_assert(sizeof(UMG_PhotoModeControllMenu_C_Get_SBButton_TabSkill_ToolTipWidget_0) == 0x000010, "Wrong size on UMG_PhotoModeControllMenu_C_Get_SBButton_TabSkill_ToolTipWidget_0");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_Get_SBButton_TabSkill_ToolTipWidget_0, ReturnValue) == 0x000000, "Member 'UMG_PhotoModeControllMenu_C_Get_SBButton_TabSkill_ToolTipWidget_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllMenu_C_Get_SBButton_TabSkill_ToolTipWidget_0, CallFunc_Create_Tool_Tip_TabButtonToolTip) == 0x000008, "Member 'UMG_PhotoModeControllMenu_C_Get_SBButton_TabSkill_ToolTipWidget_0::CallFunc_Create_Tool_Tip_TabButtonToolTip' has a wrong offset!");

}

