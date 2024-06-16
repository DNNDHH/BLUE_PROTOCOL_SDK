#pragma once

 

// Package: UMG_CaptureStudio

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "InventoryItemData_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function UMG_CaptureStudio.UMG_CaptureStudio_C.OnCaptureStudioConstructed__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UMG_CaptureStudio_C_OnCaptureStudioConstructed__DelegateSignature final
{
public:
	class ABP_CaptureStudioBase_C*                InConstructedCaptureStudio;                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_CaptureStudio_C_OnCaptureStudioConstructed__DelegateSignature) == 0x000008, "Wrong alignment on UMG_CaptureStudio_C_OnCaptureStudioConstructed__DelegateSignature");
static_assert(sizeof(UMG_CaptureStudio_C_OnCaptureStudioConstructed__DelegateSignature) == 0x000008, "Wrong size on UMG_CaptureStudio_C_OnCaptureStudioConstructed__DelegateSignature");
static_assert(offsetof(UMG_CaptureStudio_C_OnCaptureStudioConstructed__DelegateSignature, InConstructedCaptureStudio) == 0x000000, "Member 'UMG_CaptureStudio_C_OnCaptureStudioConstructed__DelegateSignature::InConstructedCaptureStudio' has a wrong offset!");

// Function UMG_CaptureStudio.UMG_CaptureStudio_C.ExecuteUbergraph_UMG_CaptureStudio
// 0x0150 (0x0150 - 0x0000)
struct UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9B8F[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EItemType                                     Temp_byte_Variable_1;                              // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9B90[0x2];                                     // 0x001A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x001C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x002C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x003C(0x0010)(ZeroConstructor, NoDestructor)
	EItemType                                     Temp_byte_Variable_2;                              // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x004D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_4;                              // 0x004E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_5;                              // 0x004F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_6;                              // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_7;                              // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_8;                              // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_9;                              // 0x0053(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_10;                             // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0055(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0056(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0057(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_11;                             // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_12;                             // 0x005A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x005B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_13;                             // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9B91[0x3];                                     // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCurrentLevelName_ReturnValue;          // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_Find_Map_Spawn_Location_for_Item_Detail_Capture_OutTransform; // 0x0070(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1; // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_WeaponForCapture_Studio_C*          CallFunc_FinishSpawningActor_ReturnValue;          // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_MannequinForCapture_Studio_C*       CallFunc_FinishSpawningActor_ReturnValue_1;        // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2; // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3; // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_MountImagineForCapture_Studio_C*    CallFunc_FinishSpawningActor_ReturnValue_2;        // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_ImagineForCapture_Studio_C*         CallFunc_FinishSpawningActor_ReturnValue_3;        // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_14;                             // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_15;                             // 0x00E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00E2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B92[0x5];                                     // 0x00E3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_MountImagineForCapture_Studio_C*    K2Node_DynamicCast_AsBP_Mount_Imagine_for_Capture_Studio; // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x00F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EItemType                                     Temp_byte_Variable_16;                             // 0x00F2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x00F3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B93[0x4];                                     // 0x00F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_MannequinForCapture_Studio_C*       K2Node_DynamicCast_AsBP_Mannequin_for_Capture_Studio; // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Load_Costume_Asset_Result;                // 0x0101(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x0102(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_17;                             // 0x0103(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_18;                             // 0x0104(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_19;                             // 0x0105(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_20;                             // 0x0106(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_21;                             // 0x0107(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_22;                             // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_23;                             // 0x0109(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemType                                     Temp_byte_Variable_24;                             // 0x010A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Enable;                         // 0x010B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_25;                             // 0x010C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemType                                     K2Node_Select_Default_1;                           // 0x010D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_26;                             // 0x010E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_27;                             // 0x010F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x0111(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B94[0x6];                                     // 0x0112(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_WeaponForCapture_Studio_C*          K2Node_DynamicCast_AsBP_Weapon_for_Capture_Studio; // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_7;                    // 0x0121(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_28;                             // 0x0122(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_29;                             // 0x0123(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_8;                    // 0x0124(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B95[0x3];                                     // 0x0125(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_ImagineForCapture_Studio_C*         K2Node_DynamicCast_AsBP_Imagine_for_Capture_Studio; // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_9;                    // 0x0131(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_30;                             // 0x0132(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_31;                             // 0x0133(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_32;                             // 0x0134(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemType                                     Temp_byte_Variable_33;                             // 0x0135(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_34;                             // 0x0136(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_3;                           // 0x0137(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_35;                             // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9B96[0x3];                                     // 0x0139(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               K2Node_CustomEvent_Rotation;                       // 0x013C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_36;                             // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0149(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x014A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_4;                           // 0x014B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_10;                   // 0x014C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio) == 0x000010, "Wrong alignment on UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio");
static_assert(sizeof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio) == 0x000150, "Wrong size on UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, EntryPoint) == 0x000000, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::EntryPoint' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, Temp_byte_Variable) == 0x000004, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, Temp_bool_Variable) == 0x000018, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, Temp_byte_Variable_1) == 0x000019, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, K2Node_CreateDelegate_OutputDelegate_1) == 0x00001C, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, K2Node_CreateDelegate_OutputDelegate_2) == 0x00002C, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, K2Node_CreateDelegate_OutputDelegate_3) == 0x00003C, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, Temp_byte_Variable_2) == 0x00004C, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, Temp_byte_Variable_3) == 0x00004D, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, Temp_byte_Variable_4) == 0x00004E, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, Temp_byte_Variable_5) == 0x00004F, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, Temp_byte_Variable_6) == 0x000050, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, Temp_byte_Variable_7) == 0x000051, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, Temp_byte_Variable_8) == 0x000052, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::Temp_byte_Variable_8' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, Temp_byte_Variable_9) == 0x000053, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::Temp_byte_Variable_9' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, Temp_byte_Variable_10) == 0x000054, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::Temp_byte_Variable_10' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, K2Node_Select_Default) == 0x000055, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, CallFunc_IsValid_ReturnValue) == 0x000056, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, K2Node_SwitchEnum_CmpSuccess) == 0x000057, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, Temp_byte_Variable_11) == 0x000058, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::Temp_byte_Variable_11' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, CallFunc_IsValid_ReturnValue_1) == 0x000059, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, Temp_byte_Variable_12) == 0x00005A, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::Temp_byte_Variable_12' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, K2Node_SwitchEnum_CmpSuccess_1) == 0x00005B, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, Temp_byte_Variable_13) == 0x00005C, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::Temp_byte_Variable_13' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, CallFunc_GetCurrentLevelName_ReturnValue) == 0x000060, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::CallFunc_GetCurrentLevelName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, CallFunc_Find_Map_Spawn_Location_for_Item_Detail_Capture_OutTransform) == 0x000070, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::CallFunc_Find_Map_Spawn_Location_for_Item_Detail_Capture_OutTransform' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x0000A0, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1) == 0x0000A8, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, CallFunc_FinishSpawningActor_ReturnValue) == 0x0000B0, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, CallFunc_FinishSpawningActor_ReturnValue_1) == 0x0000B8, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::CallFunc_FinishSpawningActor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2) == 0x0000C0, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3) == 0x0000C8, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, CallFunc_FinishSpawningActor_ReturnValue_2) == 0x0000D0, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::CallFunc_FinishSpawningActor_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, CallFunc_FinishSpawningActor_ReturnValue_3) == 0x0000D8, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::CallFunc_FinishSpawningActor_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, Temp_byte_Variable_14) == 0x0000E0, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::Temp_byte_Variable_14' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, Temp_byte_Variable_15) == 0x0000E1, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::Temp_byte_Variable_15' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, CallFunc_IsValid_ReturnValue_2) == 0x0000E2, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, K2Node_DynamicCast_AsBP_Mount_Imagine_for_Capture_Studio) == 0x0000E8, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::K2Node_DynamicCast_AsBP_Mount_Imagine_for_Capture_Studio' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, K2Node_DynamicCast_bSuccess) == 0x0000F0, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, CallFunc_IsValid_ReturnValue_3) == 0x0000F1, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, Temp_byte_Variable_16) == 0x0000F2, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::Temp_byte_Variable_16' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, CallFunc_IsValid_ReturnValue_4) == 0x0000F3, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, K2Node_DynamicCast_AsBP_Mannequin_for_Capture_Studio) == 0x0000F8, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::K2Node_DynamicCast_AsBP_Mannequin_for_Capture_Studio' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, K2Node_DynamicCast_bSuccess_1) == 0x000100, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, CallFunc_Load_Costume_Asset_Result) == 0x000101, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::CallFunc_Load_Costume_Asset_Result' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, CallFunc_IsValid_ReturnValue_5) == 0x000102, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, Temp_byte_Variable_17) == 0x000103, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::Temp_byte_Variable_17' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, Temp_byte_Variable_18) == 0x000104, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::Temp_byte_Variable_18' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, Temp_byte_Variable_19) == 0x000105, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::Temp_byte_Variable_19' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, Temp_byte_Variable_20) == 0x000106, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::Temp_byte_Variable_20' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, Temp_byte_Variable_21) == 0x000107, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::Temp_byte_Variable_21' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, Temp_byte_Variable_22) == 0x000108, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::Temp_byte_Variable_22' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, Temp_byte_Variable_23) == 0x000109, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::Temp_byte_Variable_23' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, Temp_byte_Variable_24) == 0x00010A, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::Temp_byte_Variable_24' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, K2Node_CustomEvent_Enable) == 0x00010B, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::K2Node_CustomEvent_Enable' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, Temp_byte_Variable_25) == 0x00010C, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::Temp_byte_Variable_25' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, K2Node_Select_Default_1) == 0x00010D, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, Temp_byte_Variable_26) == 0x00010E, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::Temp_byte_Variable_26' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, Temp_byte_Variable_27) == 0x00010F, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::Temp_byte_Variable_27' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, K2Node_Select_Default_2) == 0x000110, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, CallFunc_IsValid_ReturnValue_6) == 0x000111, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, K2Node_DynamicCast_AsBP_Weapon_for_Capture_Studio) == 0x000118, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::K2Node_DynamicCast_AsBP_Weapon_for_Capture_Studio' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, K2Node_DynamicCast_bSuccess_2) == 0x000120, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, CallFunc_IsValid_ReturnValue_7) == 0x000121, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, Temp_byte_Variable_28) == 0x000122, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::Temp_byte_Variable_28' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, Temp_byte_Variable_29) == 0x000123, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::Temp_byte_Variable_29' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, CallFunc_IsValid_ReturnValue_8) == 0x000124, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::CallFunc_IsValid_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, K2Node_DynamicCast_AsBP_Imagine_for_Capture_Studio) == 0x000128, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::K2Node_DynamicCast_AsBP_Imagine_for_Capture_Studio' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, K2Node_DynamicCast_bSuccess_3) == 0x000130, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, CallFunc_IsValid_ReturnValue_9) == 0x000131, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::CallFunc_IsValid_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, Temp_byte_Variable_30) == 0x000132, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::Temp_byte_Variable_30' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, Temp_byte_Variable_31) == 0x000133, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::Temp_byte_Variable_31' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, Temp_byte_Variable_32) == 0x000134, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::Temp_byte_Variable_32' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, Temp_byte_Variable_33) == 0x000135, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::Temp_byte_Variable_33' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, Temp_byte_Variable_34) == 0x000136, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::Temp_byte_Variable_34' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, K2Node_Select_Default_3) == 0x000137, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, Temp_byte_Variable_35) == 0x000138, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::Temp_byte_Variable_35' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, K2Node_CustomEvent_Rotation) == 0x00013C, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::K2Node_CustomEvent_Rotation' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, Temp_byte_Variable_36) == 0x000148, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::Temp_byte_Variable_36' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000149, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, CallFunc_BooleanAND_ReturnValue) == 0x00014A, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, K2Node_Select_Default_4) == 0x00014B, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio, CallFunc_IsValid_ReturnValue_10) == 0x00014C, "Member 'UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio::CallFunc_IsValid_ReturnValue_10' has a wrong offset!");

// Function UMG_CaptureStudio.UMG_CaptureStudio_C.SetExternalDirectionalLightRotation
// 0x000C (0x000C - 0x0000)
struct UMG_CaptureStudio_C_SetExternalDirectionalLightRotation final
{
public:
	struct FRotator                               Rotation;                                          // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_CaptureStudio_C_SetExternalDirectionalLightRotation) == 0x000004, "Wrong alignment on UMG_CaptureStudio_C_SetExternalDirectionalLightRotation");
static_assert(sizeof(UMG_CaptureStudio_C_SetExternalDirectionalLightRotation) == 0x00000C, "Wrong size on UMG_CaptureStudio_C_SetExternalDirectionalLightRotation");
static_assert(offsetof(UMG_CaptureStudio_C_SetExternalDirectionalLightRotation, Rotation) == 0x000000, "Member 'UMG_CaptureStudio_C_SetExternalDirectionalLightRotation::Rotation' has a wrong offset!");

// Function UMG_CaptureStudio.UMG_CaptureStudio_C.SetEnableCaptureStudio
// 0x0001 (0x0001 - 0x0000)
struct UMG_CaptureStudio_C_SetEnableCaptureStudio final
{
public:
	bool                                          Enable;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_CaptureStudio_C_SetEnableCaptureStudio) == 0x000001, "Wrong alignment on UMG_CaptureStudio_C_SetEnableCaptureStudio");
static_assert(sizeof(UMG_CaptureStudio_C_SetEnableCaptureStudio) == 0x000001, "Wrong size on UMG_CaptureStudio_C_SetEnableCaptureStudio");
static_assert(offsetof(UMG_CaptureStudio_C_SetEnableCaptureStudio, Enable) == 0x000000, "Member 'UMG_CaptureStudio_C_SetEnableCaptureStudio::Enable' has a wrong offset!");

// Function UMG_CaptureStudio.UMG_CaptureStudio_C.SetCaptureMoveActive
// 0x0001 (0x0001 - 0x0000)
struct UMG_CaptureStudio_C_SetCaptureMoveActive final
{
public:
	bool                                          Param_ActiveMove;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_CaptureStudio_C_SetCaptureMoveActive) == 0x000001, "Wrong alignment on UMG_CaptureStudio_C_SetCaptureMoveActive");
static_assert(sizeof(UMG_CaptureStudio_C_SetCaptureMoveActive) == 0x000001, "Wrong size on UMG_CaptureStudio_C_SetCaptureMoveActive");
static_assert(offsetof(UMG_CaptureStudio_C_SetCaptureMoveActive, Param_ActiveMove) == 0x000000, "Member 'UMG_CaptureStudio_C_SetCaptureMoveActive::Param_ActiveMove' has a wrong offset!");

// Function UMG_CaptureStudio.UMG_CaptureStudio_C.SetCaptureRotateActive
// 0x0002 (0x0002 - 0x0000)
struct UMG_CaptureStudio_C_SetCaptureRotateActive final
{
public:
	bool                                          Param_ActiveRotate;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_CaptureStudio_C_SetCaptureRotateActive) == 0x000001, "Wrong alignment on UMG_CaptureStudio_C_SetCaptureRotateActive");
static_assert(sizeof(UMG_CaptureStudio_C_SetCaptureRotateActive) == 0x000002, "Wrong size on UMG_CaptureStudio_C_SetCaptureRotateActive");
static_assert(offsetof(UMG_CaptureStudio_C_SetCaptureRotateActive, Param_ActiveRotate) == 0x000000, "Member 'UMG_CaptureStudio_C_SetCaptureRotateActive::Param_ActiveRotate' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_SetCaptureRotateActive, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'UMG_CaptureStudio_C_SetCaptureRotateActive::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function UMG_CaptureStudio.UMG_CaptureStudio_C.SetDrawMode
// 0x00A8 (0x00A8 - 0x0000)
struct UMG_CaptureStudio_C_SetDrawMode final
{
public:
	EItemType                                     Param_ItemType;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsVisible_ReturnValue_1;                  // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsVisible_ReturnValue_2;                  // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsVisible_ReturnValue_3;                  // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_3;                // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B97[0x2];                                     // 0x000E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BP_FindCostumeMaster_IsExist;             // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B98[0x5];                                     // 0x001B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterCostume                       CallFunc_BP_FindCostumeMaster_ReturnValue;         // 0x0020(0x0088)()
};
static_assert(alignof(UMG_CaptureStudio_C_SetDrawMode) == 0x000008, "Wrong alignment on UMG_CaptureStudio_C_SetDrawMode");
static_assert(sizeof(UMG_CaptureStudio_C_SetDrawMode) == 0x0000A8, "Wrong size on UMG_CaptureStudio_C_SetDrawMode");
static_assert(offsetof(UMG_CaptureStudio_C_SetDrawMode, Param_ItemType) == 0x000000, "Member 'UMG_CaptureStudio_C_SetDrawMode::Param_ItemType' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_SetDrawMode, K2Node_SwitchEnum_CmpSuccess) == 0x000001, "Member 'UMG_CaptureStudio_C_SetDrawMode::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_SetDrawMode, CallFunc_IsVisible_ReturnValue) == 0x000002, "Member 'UMG_CaptureStudio_C_SetDrawMode::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_SetDrawMode, CallFunc_IsVisible_ReturnValue_1) == 0x000003, "Member 'UMG_CaptureStudio_C_SetDrawMode::CallFunc_IsVisible_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_SetDrawMode, CallFunc_Not_PreBool_ReturnValue) == 0x000004, "Member 'UMG_CaptureStudio_C_SetDrawMode::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_SetDrawMode, CallFunc_Not_PreBool_ReturnValue_1) == 0x000005, "Member 'UMG_CaptureStudio_C_SetDrawMode::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_SetDrawMode, CallFunc_IsVisible_ReturnValue_2) == 0x000006, "Member 'UMG_CaptureStudio_C_SetDrawMode::CallFunc_IsVisible_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_SetDrawMode, CallFunc_IsVisible_ReturnValue_3) == 0x000007, "Member 'UMG_CaptureStudio_C_SetDrawMode::CallFunc_IsVisible_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_SetDrawMode, CallFunc_Not_PreBool_ReturnValue_2) == 0x000008, "Member 'UMG_CaptureStudio_C_SetDrawMode::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_SetDrawMode, CallFunc_Not_PreBool_ReturnValue_3) == 0x000009, "Member 'UMG_CaptureStudio_C_SetDrawMode::CallFunc_Not_PreBool_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_SetDrawMode, CallFunc_BooleanAND_ReturnValue) == 0x00000A, "Member 'UMG_CaptureStudio_C_SetDrawMode::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_SetDrawMode, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x00000B, "Member 'UMG_CaptureStudio_C_SetDrawMode::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_SetDrawMode, CallFunc_BooleanAND_ReturnValue_1) == 0x00000C, "Member 'UMG_CaptureStudio_C_SetDrawMode::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_SetDrawMode, CallFunc_GetMasterDataManager_IsValid) == 0x00000D, "Member 'UMG_CaptureStudio_C_SetDrawMode::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_SetDrawMode, CallFunc_GetMasterDataManager_ReturnValue) == 0x000010, "Member 'UMG_CaptureStudio_C_SetDrawMode::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_SetDrawMode, CallFunc_BooleanAND_ReturnValue_2) == 0x000018, "Member 'UMG_CaptureStudio_C_SetDrawMode::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_SetDrawMode, CallFunc_BooleanOR_ReturnValue) == 0x000019, "Member 'UMG_CaptureStudio_C_SetDrawMode::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_SetDrawMode, CallFunc_BP_FindCostumeMaster_IsExist) == 0x00001A, "Member 'UMG_CaptureStudio_C_SetDrawMode::CallFunc_BP_FindCostumeMaster_IsExist' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_SetDrawMode, CallFunc_BP_FindCostumeMaster_ReturnValue) == 0x000020, "Member 'UMG_CaptureStudio_C_SetDrawMode::CallFunc_BP_FindCostumeMaster_ReturnValue' has a wrong offset!");

// Function UMG_CaptureStudio.UMG_CaptureStudio_C.SetWeaponId
// 0x00C8 (0x00C8 - 0x0000)
struct UMG_CaptureStudio_C_SetWeaponId final
{
public:
	int32                                         Param_WeaponItemId;                                // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsExist;                                           // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B99[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetWeaponMasterData_IsExists;             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B9A[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponMasterData                    CallFunc_GetWeaponMasterData_ReturnValue;          // 0x0018(0x00B0)()
};
static_assert(alignof(UMG_CaptureStudio_C_SetWeaponId) == 0x000008, "Wrong alignment on UMG_CaptureStudio_C_SetWeaponId");
static_assert(sizeof(UMG_CaptureStudio_C_SetWeaponId) == 0x0000C8, "Wrong size on UMG_CaptureStudio_C_SetWeaponId");
static_assert(offsetof(UMG_CaptureStudio_C_SetWeaponId, Param_WeaponItemId) == 0x000000, "Member 'UMG_CaptureStudio_C_SetWeaponId::Param_WeaponItemId' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_SetWeaponId, IsExist) == 0x000004, "Member 'UMG_CaptureStudio_C_SetWeaponId::IsExist' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_SetWeaponId, CallFunc_GetMasterDataManager_IsValid) == 0x000005, "Member 'UMG_CaptureStudio_C_SetWeaponId::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_SetWeaponId, CallFunc_GetMasterDataManager_ReturnValue) == 0x000008, "Member 'UMG_CaptureStudio_C_SetWeaponId::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_SetWeaponId, CallFunc_GetWeaponMasterData_IsExists) == 0x000010, "Member 'UMG_CaptureStudio_C_SetWeaponId::CallFunc_GetWeaponMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_SetWeaponId, CallFunc_GetWeaponMasterData_ReturnValue) == 0x000018, "Member 'UMG_CaptureStudio_C_SetWeaponId::CallFunc_GetWeaponMasterData_ReturnValue' has a wrong offset!");

// Function UMG_CaptureStudio.UMG_CaptureStudio_C.SetCostumeItemID
// 0x00B8 (0x00B8 - 0x0000)
struct UMG_CaptureStudio_C_SetCostumeItemID final
{
public:
	int32                                         Param_CostumeItemId;                               // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9B9B[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Param_CostumeUniqueID;                             // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         Param_CostumeStorageNumber;                        // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B9C[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindCostumeMaster_IsExist;             // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B9D[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterCostume                       CallFunc_BP_FindCostumeMaster_ReturnValue;         // 0x0030(0x0088)()
};
static_assert(alignof(UMG_CaptureStudio_C_SetCostumeItemID) == 0x000008, "Wrong alignment on UMG_CaptureStudio_C_SetCostumeItemID");
static_assert(sizeof(UMG_CaptureStudio_C_SetCostumeItemID) == 0x0000B8, "Wrong size on UMG_CaptureStudio_C_SetCostumeItemID");
static_assert(offsetof(UMG_CaptureStudio_C_SetCostumeItemID, Param_CostumeItemId) == 0x000000, "Member 'UMG_CaptureStudio_C_SetCostumeItemID::Param_CostumeItemId' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_SetCostumeItemID, Param_CostumeUniqueID) == 0x000008, "Member 'UMG_CaptureStudio_C_SetCostumeItemID::Param_CostumeUniqueID' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_SetCostumeItemID, Param_CostumeStorageNumber) == 0x000018, "Member 'UMG_CaptureStudio_C_SetCostumeItemID::Param_CostumeStorageNumber' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_SetCostumeItemID, CallFunc_GetMasterDataManager_IsValid) == 0x00001C, "Member 'UMG_CaptureStudio_C_SetCostumeItemID::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_SetCostumeItemID, CallFunc_GetMasterDataManager_ReturnValue) == 0x000020, "Member 'UMG_CaptureStudio_C_SetCostumeItemID::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_SetCostumeItemID, CallFunc_BP_FindCostumeMaster_IsExist) == 0x000028, "Member 'UMG_CaptureStudio_C_SetCostumeItemID::CallFunc_BP_FindCostumeMaster_IsExist' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_SetCostumeItemID, CallFunc_BP_FindCostumeMaster_ReturnValue) == 0x000030, "Member 'UMG_CaptureStudio_C_SetCostumeItemID::CallFunc_BP_FindCostumeMaster_ReturnValue' has a wrong offset!");

// Function UMG_CaptureStudio.UMG_CaptureStudio_C.SetCaptureZoomActive
// 0x0001 (0x0001 - 0x0000)
struct UMG_CaptureStudio_C_SetCaptureZoomActive final
{
public:
	bool                                          Param_ActiveZoom;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_CaptureStudio_C_SetCaptureZoomActive) == 0x000001, "Wrong alignment on UMG_CaptureStudio_C_SetCaptureZoomActive");
static_assert(sizeof(UMG_CaptureStudio_C_SetCaptureZoomActive) == 0x000001, "Wrong size on UMG_CaptureStudio_C_SetCaptureZoomActive");
static_assert(offsetof(UMG_CaptureStudio_C_SetCaptureZoomActive, Param_ActiveZoom) == 0x000000, "Member 'UMG_CaptureStudio_C_SetCaptureZoomActive::Param_ActiveZoom' has a wrong offset!");

// Function UMG_CaptureStudio.UMG_CaptureStudio_C.IsCostumeValid
// 0x00A0 (0x00A0 - 0x0000)
struct UMG_CaptureStudio_C_IsCostumeValid final
{
public:
	bool                                          IsValid;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B9E[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindCostumeMaster_IsExist;             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B9F[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterCostume                       CallFunc_BP_FindCostumeMaster_ReturnValue;         // 0x0018(0x0088)()
};
static_assert(alignof(UMG_CaptureStudio_C_IsCostumeValid) == 0x000008, "Wrong alignment on UMG_CaptureStudio_C_IsCostumeValid");
static_assert(sizeof(UMG_CaptureStudio_C_IsCostumeValid) == 0x0000A0, "Wrong size on UMG_CaptureStudio_C_IsCostumeValid");
static_assert(offsetof(UMG_CaptureStudio_C_IsCostumeValid, IsValid) == 0x000000, "Member 'UMG_CaptureStudio_C_IsCostumeValid::IsValid' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_IsCostumeValid, CallFunc_GetMasterDataManager_IsValid) == 0x000001, "Member 'UMG_CaptureStudio_C_IsCostumeValid::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_IsCostumeValid, CallFunc_GetMasterDataManager_ReturnValue) == 0x000008, "Member 'UMG_CaptureStudio_C_IsCostumeValid::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_IsCostumeValid, CallFunc_BP_FindCostumeMaster_IsExist) == 0x000010, "Member 'UMG_CaptureStudio_C_IsCostumeValid::CallFunc_BP_FindCostumeMaster_IsExist' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_IsCostumeValid, CallFunc_BP_FindCostumeMaster_ReturnValue) == 0x000018, "Member 'UMG_CaptureStudio_C_IsCostumeValid::CallFunc_BP_FindCostumeMaster_ReturnValue' has a wrong offset!");

// Function UMG_CaptureStudio.UMG_CaptureStudio_C.SetImagineId
// 0x00C8 (0x00C8 - 0x0000)
struct UMG_CaptureStudio_C_SetImagineId final
{
public:
	int32                                         ImaginetemId;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsExist;                                           // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9BA0[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindMasterImagineData_IsExists;           // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9BA1[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterImagine                       CallFunc_FindMasterImagineData_ReturnValue;        // 0x0018(0x00B0)()
};
static_assert(alignof(UMG_CaptureStudio_C_SetImagineId) == 0x000008, "Wrong alignment on UMG_CaptureStudio_C_SetImagineId");
static_assert(sizeof(UMG_CaptureStudio_C_SetImagineId) == 0x0000C8, "Wrong size on UMG_CaptureStudio_C_SetImagineId");
static_assert(offsetof(UMG_CaptureStudio_C_SetImagineId, ImaginetemId) == 0x000000, "Member 'UMG_CaptureStudio_C_SetImagineId::ImaginetemId' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_SetImagineId, IsExist) == 0x000004, "Member 'UMG_CaptureStudio_C_SetImagineId::IsExist' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_SetImagineId, CallFunc_GetMasterDataManager_IsValid) == 0x000005, "Member 'UMG_CaptureStudio_C_SetImagineId::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_SetImagineId, CallFunc_GetMasterDataManager_ReturnValue) == 0x000008, "Member 'UMG_CaptureStudio_C_SetImagineId::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_SetImagineId, CallFunc_FindMasterImagineData_IsExists) == 0x000010, "Member 'UMG_CaptureStudio_C_SetImagineId::CallFunc_FindMasterImagineData_IsExists' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_SetImagineId, CallFunc_FindMasterImagineData_ReturnValue) == 0x000018, "Member 'UMG_CaptureStudio_C_SetImagineId::CallFunc_FindMasterImagineData_ReturnValue' has a wrong offset!");

// Function UMG_CaptureStudio.UMG_CaptureStudio_C.SetStudioVisibility
// 0x0006 (0x0006 - 0x0000)
struct UMG_CaptureStudio_C_SetStudioVisibility final
{
public:
	bool                                          InIsVisible;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_CaptureStudio_C_SetStudioVisibility) == 0x000001, "Wrong alignment on UMG_CaptureStudio_C_SetStudioVisibility");
static_assert(sizeof(UMG_CaptureStudio_C_SetStudioVisibility) == 0x000006, "Wrong size on UMG_CaptureStudio_C_SetStudioVisibility");
static_assert(offsetof(UMG_CaptureStudio_C_SetStudioVisibility, InIsVisible) == 0x000000, "Member 'UMG_CaptureStudio_C_SetStudioVisibility::InIsVisible' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_SetStudioVisibility, Temp_bool_Variable) == 0x000001, "Member 'UMG_CaptureStudio_C_SetStudioVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_SetStudioVisibility, Temp_byte_Variable) == 0x000002, "Member 'UMG_CaptureStudio_C_SetStudioVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_SetStudioVisibility, Temp_byte_Variable_1) == 0x000003, "Member 'UMG_CaptureStudio_C_SetStudioVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_SetStudioVisibility, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'UMG_CaptureStudio_C_SetStudioVisibility::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_SetStudioVisibility, K2Node_Select_Default) == 0x000005, "Member 'UMG_CaptureStudio_C_SetStudioVisibility::K2Node_Select_Default' has a wrong offset!");

// Function UMG_CaptureStudio.UMG_CaptureStudio_C.Load Costume Asset
// 0x0210 (0x0210 - 0x0000)
struct UMG_CaptureStudio_C_Load_Costume_Asset final
{
public:
	class ABP_MannequinForCapture_Studio_C*       MannequiCaptionStudio;                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             Event;                                             // 0x0008(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	bool                                          Result;                                            // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9BA2[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CostumeMaterialId;                                 // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CostumeColorValue;                                 // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CostumeColorSaturation;                            // 0x0024(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CostumeColorId;                                    // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9BA3[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharacterGender                            CallFunc_GetGender_ReturnValue;                    // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9BA4[0x6];                                     // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetStorage_ReturnValue;                   // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist;         // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9BA5[0x6];                                     // 0x004A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue;       // 0x0050(0x0118)(ConstParm)
	bool                                          Temp_bool_Variable_1;                              // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x0169(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x016A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9BA6[0x5];                                     // 0x016B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindCostumeMaster_IsExist;             // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9BA7[0x7];                                     // 0x0179(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterCostume                       CallFunc_BP_FindCostumeMaster_ReturnValue;         // 0x0180(0x0088)()
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x0209(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default;                             // 0x020A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_CaptureStudio_C_Load_Costume_Asset) == 0x000008, "Wrong alignment on UMG_CaptureStudio_C_Load_Costume_Asset");
static_assert(sizeof(UMG_CaptureStudio_C_Load_Costume_Asset) == 0x000210, "Wrong size on UMG_CaptureStudio_C_Load_Costume_Asset");
static_assert(offsetof(UMG_CaptureStudio_C_Load_Costume_Asset, MannequiCaptionStudio) == 0x000000, "Member 'UMG_CaptureStudio_C_Load_Costume_Asset::MannequiCaptionStudio' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_Load_Costume_Asset, Event) == 0x000008, "Member 'UMG_CaptureStudio_C_Load_Costume_Asset::Event' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_Load_Costume_Asset, Result) == 0x000018, "Member 'UMG_CaptureStudio_C_Load_Costume_Asset::Result' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_Load_Costume_Asset, CostumeMaterialId) == 0x00001C, "Member 'UMG_CaptureStudio_C_Load_Costume_Asset::CostumeMaterialId' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_Load_Costume_Asset, CostumeColorValue) == 0x000020, "Member 'UMG_CaptureStudio_C_Load_Costume_Asset::CostumeColorValue' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_Load_Costume_Asset, CostumeColorSaturation) == 0x000024, "Member 'UMG_CaptureStudio_C_Load_Costume_Asset::CostumeColorSaturation' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_Load_Costume_Asset, CostumeColorId) == 0x000028, "Member 'UMG_CaptureStudio_C_Load_Costume_Asset::CostumeColorId' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_Load_Costume_Asset, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000030, "Member 'UMG_CaptureStudio_C_Load_Costume_Asset::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_Load_Costume_Asset, CallFunc_GetGender_ReturnValue) == 0x000038, "Member 'UMG_CaptureStudio_C_Load_Costume_Asset::CallFunc_GetGender_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_Load_Costume_Asset, K2Node_SwitchEnum_CmpSuccess) == 0x000039, "Member 'UMG_CaptureStudio_C_Load_Costume_Asset::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_Load_Costume_Asset, CallFunc_GetStorage_ReturnValue) == 0x000040, "Member 'UMG_CaptureStudio_C_Load_Costume_Asset::CallFunc_GetStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_Load_Costume_Asset, Temp_bool_Variable) == 0x000048, "Member 'UMG_CaptureStudio_C_Load_Costume_Asset::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_Load_Costume_Asset, CallFunc_BP_FindItem_ByUniqueId_bOutExist) == 0x000049, "Member 'UMG_CaptureStudio_C_Load_Costume_Asset::CallFunc_BP_FindItem_ByUniqueId_bOutExist' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_Load_Costume_Asset, CallFunc_BP_FindItem_ByUniqueId_ReturnValue) == 0x000050, "Member 'UMG_CaptureStudio_C_Load_Costume_Asset::CallFunc_BP_FindItem_ByUniqueId_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_Load_Costume_Asset, Temp_bool_Variable_1) == 0x000168, "Member 'UMG_CaptureStudio_C_Load_Costume_Asset::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_Load_Costume_Asset, Temp_bool_Variable_2) == 0x000169, "Member 'UMG_CaptureStudio_C_Load_Costume_Asset::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_Load_Costume_Asset, CallFunc_GetMasterDataManager_IsValid) == 0x00016A, "Member 'UMG_CaptureStudio_C_Load_Costume_Asset::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_Load_Costume_Asset, CallFunc_GetMasterDataManager_ReturnValue) == 0x000170, "Member 'UMG_CaptureStudio_C_Load_Costume_Asset::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_Load_Costume_Asset, CallFunc_BP_FindCostumeMaster_IsExist) == 0x000178, "Member 'UMG_CaptureStudio_C_Load_Costume_Asset::CallFunc_BP_FindCostumeMaster_IsExist' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_Load_Costume_Asset, CallFunc_BP_FindCostumeMaster_ReturnValue) == 0x000180, "Member 'UMG_CaptureStudio_C_Load_Costume_Asset::CallFunc_BP_FindCostumeMaster_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_Load_Costume_Asset, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000208, "Member 'UMG_CaptureStudio_C_Load_Costume_Asset::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_Load_Costume_Asset, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x000209, "Member 'UMG_CaptureStudio_C_Load_Costume_Asset::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_Load_Costume_Asset, K2Node_Select_Default) == 0x00020A, "Member 'UMG_CaptureStudio_C_Load_Costume_Asset::K2Node_Select_Default' has a wrong offset!");

// Function UMG_CaptureStudio.UMG_CaptureStudio_C.SetupAndLoadAsset
// 0x0078 (0x0078 - 0x0000)
struct UMG_CaptureStudio_C_SetupAndLoadAsset final
{
public:
	TDelegate<void()>                             LoadCompleteEvent;                                 // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	struct FInventoryItemData                     InInventoryItemData;                               // 0x0010(0x0060)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          CallFunc_SetMountImagineId_isExist;                // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetImagineId_isExist;                     // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetWeaponId_isExist;                      // 0x0072(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0073(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_CaptureStudio_C_SetupAndLoadAsset) == 0x000008, "Wrong alignment on UMG_CaptureStudio_C_SetupAndLoadAsset");
static_assert(sizeof(UMG_CaptureStudio_C_SetupAndLoadAsset) == 0x000078, "Wrong size on UMG_CaptureStudio_C_SetupAndLoadAsset");
static_assert(offsetof(UMG_CaptureStudio_C_SetupAndLoadAsset, LoadCompleteEvent) == 0x000000, "Member 'UMG_CaptureStudio_C_SetupAndLoadAsset::LoadCompleteEvent' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_SetupAndLoadAsset, InInventoryItemData) == 0x000010, "Member 'UMG_CaptureStudio_C_SetupAndLoadAsset::InInventoryItemData' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_SetupAndLoadAsset, CallFunc_SetMountImagineId_isExist) == 0x000070, "Member 'UMG_CaptureStudio_C_SetupAndLoadAsset::CallFunc_SetMountImagineId_isExist' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_SetupAndLoadAsset, CallFunc_SetImagineId_isExist) == 0x000071, "Member 'UMG_CaptureStudio_C_SetupAndLoadAsset::CallFunc_SetImagineId_isExist' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_SetupAndLoadAsset, CallFunc_SetWeaponId_isExist) == 0x000072, "Member 'UMG_CaptureStudio_C_SetupAndLoadAsset::CallFunc_SetWeaponId_isExist' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_SetupAndLoadAsset, K2Node_SwitchEnum_CmpSuccess) == 0x000073, "Member 'UMG_CaptureStudio_C_SetupAndLoadAsset::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function UMG_CaptureStudio.UMG_CaptureStudio_C.SetStudioHidden
// 0x0002 (0x0002 - 0x0000)
struct UMG_CaptureStudio_C_SetStudioHidden final
{
public:
	bool                                          InIsHidden;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_CaptureStudio_C_SetStudioHidden) == 0x000001, "Wrong alignment on UMG_CaptureStudio_C_SetStudioHidden");
static_assert(sizeof(UMG_CaptureStudio_C_SetStudioHidden) == 0x000002, "Wrong size on UMG_CaptureStudio_C_SetStudioHidden");
static_assert(offsetof(UMG_CaptureStudio_C_SetStudioHidden, InIsHidden) == 0x000000, "Member 'UMG_CaptureStudio_C_SetStudioHidden::InIsHidden' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_SetStudioHidden, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'UMG_CaptureStudio_C_SetStudioHidden::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function UMG_CaptureStudio.UMG_CaptureStudio_C.DebugPrintObjectPath
// 0x0058 (0x0058 - 0x0000)
struct UMG_CaptureStudio_C_DebugPrintObjectPath final
{
public:
	class FString                                 WorkString;                                        // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                WorkObject;                                        // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_GetOuterObject_ReturnValue;               // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9BA8[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_CaptureStudio_C_DebugPrintObjectPath) == 0x000008, "Wrong alignment on UMG_CaptureStudio_C_DebugPrintObjectPath");
static_assert(sizeof(UMG_CaptureStudio_C_DebugPrintObjectPath) == 0x000058, "Wrong size on UMG_CaptureStudio_C_DebugPrintObjectPath");
static_assert(offsetof(UMG_CaptureStudio_C_DebugPrintObjectPath, WorkString) == 0x000000, "Member 'UMG_CaptureStudio_C_DebugPrintObjectPath::WorkString' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_DebugPrintObjectPath, WorkObject) == 0x000010, "Member 'UMG_CaptureStudio_C_DebugPrintObjectPath::WorkObject' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_DebugPrintObjectPath, CallFunc_Concat_StrStr_ReturnValue) == 0x000018, "Member 'UMG_CaptureStudio_C_DebugPrintObjectPath::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_DebugPrintObjectPath, CallFunc_GetOuterObject_ReturnValue) == 0x000028, "Member 'UMG_CaptureStudio_C_DebugPrintObjectPath::CallFunc_GetOuterObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_DebugPrintObjectPath, CallFunc_GetDisplayName_ReturnValue) == 0x000030, "Member 'UMG_CaptureStudio_C_DebugPrintObjectPath::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_DebugPrintObjectPath, CallFunc_IsValid_ReturnValue) == 0x000040, "Member 'UMG_CaptureStudio_C_DebugPrintObjectPath::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_DebugPrintObjectPath, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000048, "Member 'UMG_CaptureStudio_C_DebugPrintObjectPath::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");

// Function UMG_CaptureStudio.UMG_CaptureStudio_C.SetMountImagineId
// 0x0088 (0x0088 - 0x0000)
struct UMG_CaptureStudio_C_SetMountImagineId final
{
public:
	int32                                         ImaginetemId;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsExist;                                           // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9BA9[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindMasterMountImagineData_bOutExist;  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9BAA[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterMountImagine                  CallFunc_BP_FindMasterMountImagineData_ReturnValue; // 0x0018(0x0070)()
};
static_assert(alignof(UMG_CaptureStudio_C_SetMountImagineId) == 0x000008, "Wrong alignment on UMG_CaptureStudio_C_SetMountImagineId");
static_assert(sizeof(UMG_CaptureStudio_C_SetMountImagineId) == 0x000088, "Wrong size on UMG_CaptureStudio_C_SetMountImagineId");
static_assert(offsetof(UMG_CaptureStudio_C_SetMountImagineId, ImaginetemId) == 0x000000, "Member 'UMG_CaptureStudio_C_SetMountImagineId::ImaginetemId' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_SetMountImagineId, IsExist) == 0x000004, "Member 'UMG_CaptureStudio_C_SetMountImagineId::IsExist' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_SetMountImagineId, CallFunc_GetMasterDataManager_IsValid) == 0x000005, "Member 'UMG_CaptureStudio_C_SetMountImagineId::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_SetMountImagineId, CallFunc_GetMasterDataManager_ReturnValue) == 0x000008, "Member 'UMG_CaptureStudio_C_SetMountImagineId::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_SetMountImagineId, CallFunc_BP_FindMasterMountImagineData_bOutExist) == 0x000010, "Member 'UMG_CaptureStudio_C_SetMountImagineId::CallFunc_BP_FindMasterMountImagineData_bOutExist' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_SetMountImagineId, CallFunc_BP_FindMasterMountImagineData_ReturnValue) == 0x000018, "Member 'UMG_CaptureStudio_C_SetMountImagineId::CallFunc_BP_FindMasterMountImagineData_ReturnValue' has a wrong offset!");

// Function UMG_CaptureStudio.UMG_CaptureStudio_C.ResetWeaponMeshAndCameraTransform
// 0x0010 (0x0010 - 0x0000)
struct UMG_CaptureStudio_C_ResetWeaponMeshAndCameraTransform final
{
public:
	class ABP_WeaponForCapture_Studio_C*          K2Node_DynamicCast_AsBP_Weapon_for_Capture_Studio; // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_CaptureStudio_C_ResetWeaponMeshAndCameraTransform) == 0x000008, "Wrong alignment on UMG_CaptureStudio_C_ResetWeaponMeshAndCameraTransform");
static_assert(sizeof(UMG_CaptureStudio_C_ResetWeaponMeshAndCameraTransform) == 0x000010, "Wrong size on UMG_CaptureStudio_C_ResetWeaponMeshAndCameraTransform");
static_assert(offsetof(UMG_CaptureStudio_C_ResetWeaponMeshAndCameraTransform, K2Node_DynamicCast_AsBP_Weapon_for_Capture_Studio) == 0x000000, "Member 'UMG_CaptureStudio_C_ResetWeaponMeshAndCameraTransform::K2Node_DynamicCast_AsBP_Weapon_for_Capture_Studio' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ResetWeaponMeshAndCameraTransform, K2Node_DynamicCast_bSuccess) == 0x000008, "Member 'UMG_CaptureStudio_C_ResetWeaponMeshAndCameraTransform::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ResetWeaponMeshAndCameraTransform, CallFunc_IsValid_ReturnValue) == 0x000009, "Member 'UMG_CaptureStudio_C_ResetWeaponMeshAndCameraTransform::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ResetWeaponMeshAndCameraTransform, CallFunc_IsValid_ReturnValue_1) == 0x00000A, "Member 'UMG_CaptureStudio_C_ResetWeaponMeshAndCameraTransform::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function UMG_CaptureStudio.UMG_CaptureStudio_C.ResetMountImagineMeshAndCameraTransform
// 0x0010 (0x0010 - 0x0000)
struct UMG_CaptureStudio_C_ResetMountImagineMeshAndCameraTransform final
{
public:
	class ABP_MountImagineForCapture_Studio_C*    K2Node_DynamicCast_AsBP_Mount_Imagine_for_Capture_Studio; // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_CaptureStudio_C_ResetMountImagineMeshAndCameraTransform) == 0x000008, "Wrong alignment on UMG_CaptureStudio_C_ResetMountImagineMeshAndCameraTransform");
static_assert(sizeof(UMG_CaptureStudio_C_ResetMountImagineMeshAndCameraTransform) == 0x000010, "Wrong size on UMG_CaptureStudio_C_ResetMountImagineMeshAndCameraTransform");
static_assert(offsetof(UMG_CaptureStudio_C_ResetMountImagineMeshAndCameraTransform, K2Node_DynamicCast_AsBP_Mount_Imagine_for_Capture_Studio) == 0x000000, "Member 'UMG_CaptureStudio_C_ResetMountImagineMeshAndCameraTransform::K2Node_DynamicCast_AsBP_Mount_Imagine_for_Capture_Studio' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ResetMountImagineMeshAndCameraTransform, K2Node_DynamicCast_bSuccess) == 0x000008, "Member 'UMG_CaptureStudio_C_ResetMountImagineMeshAndCameraTransform::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ResetMountImagineMeshAndCameraTransform, CallFunc_IsValid_ReturnValue) == 0x000009, "Member 'UMG_CaptureStudio_C_ResetMountImagineMeshAndCameraTransform::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_ResetMountImagineMeshAndCameraTransform, CallFunc_IsValid_ReturnValue_1) == 0x00000A, "Member 'UMG_CaptureStudio_C_ResetMountImagineMeshAndCameraTransform::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function UMG_CaptureStudio.UMG_CaptureStudio_C.SetLightEnable
// 0x0002 (0x0002 - 0x0000)
struct UMG_CaptureStudio_C_SetLightEnable final
{
public:
	bool                                          bIsEnable;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_CaptureStudio_C_SetLightEnable) == 0x000001, "Wrong alignment on UMG_CaptureStudio_C_SetLightEnable");
static_assert(sizeof(UMG_CaptureStudio_C_SetLightEnable) == 0x000002, "Wrong size on UMG_CaptureStudio_C_SetLightEnable");
static_assert(offsetof(UMG_CaptureStudio_C_SetLightEnable, bIsEnable) == 0x000000, "Member 'UMG_CaptureStudio_C_SetLightEnable::bIsEnable' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_SetLightEnable, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'UMG_CaptureStudio_C_SetLightEnable::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function UMG_CaptureStudio.UMG_CaptureStudio_C.SetOwnItem
// 0x0240 (0x0240 - 0x0000)
struct UMG_CaptureStudio_C_SetOwnItem final
{
public:
	struct FOwnItemInfo                           InOwnItem;                                         // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         LocalItemId;                                       // 0x0118(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9BAB[0x4];                                     // 0x011C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           LocalOwnItem;                                      // 0x0120(0x0118)(Edit, BlueprintVisible)
	bool                                          CallFunc_SetMountImagineId_isExist;                // 0x0238(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetImagineId_isExist;                     // 0x0239(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetWeaponId_isExist;                      // 0x023A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x023B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_CaptureStudio_C_SetOwnItem) == 0x000008, "Wrong alignment on UMG_CaptureStudio_C_SetOwnItem");
static_assert(sizeof(UMG_CaptureStudio_C_SetOwnItem) == 0x000240, "Wrong size on UMG_CaptureStudio_C_SetOwnItem");
static_assert(offsetof(UMG_CaptureStudio_C_SetOwnItem, InOwnItem) == 0x000000, "Member 'UMG_CaptureStudio_C_SetOwnItem::InOwnItem' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_SetOwnItem, LocalItemId) == 0x000118, "Member 'UMG_CaptureStudio_C_SetOwnItem::LocalItemId' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_SetOwnItem, LocalOwnItem) == 0x000120, "Member 'UMG_CaptureStudio_C_SetOwnItem::LocalOwnItem' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_SetOwnItem, CallFunc_SetMountImagineId_isExist) == 0x000238, "Member 'UMG_CaptureStudio_C_SetOwnItem::CallFunc_SetMountImagineId_isExist' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_SetOwnItem, CallFunc_SetImagineId_isExist) == 0x000239, "Member 'UMG_CaptureStudio_C_SetOwnItem::CallFunc_SetImagineId_isExist' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_SetOwnItem, CallFunc_SetWeaponId_isExist) == 0x00023A, "Member 'UMG_CaptureStudio_C_SetOwnItem::CallFunc_SetWeaponId_isExist' has a wrong offset!");
static_assert(offsetof(UMG_CaptureStudio_C_SetOwnItem, K2Node_SwitchEnum_CmpSuccess) == 0x00023B, "Member 'UMG_CaptureStudio_C_SetOwnItem::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

}

