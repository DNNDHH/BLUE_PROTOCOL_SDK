#pragma once

 

// Package: LibraryMenu_EnemyCaptureStudio

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.OnCaptureStudioConstructed__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct LibraryMenu_EnemyCaptureStudio_C_OnCaptureStudioConstructed__DelegateSignature final
{
public:
	class ABP_CaptureStudioBase_C*                InConstructedCaptureStudio;                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_EnemyCaptureStudio_C_OnCaptureStudioConstructed__DelegateSignature) == 0x000008, "Wrong alignment on LibraryMenu_EnemyCaptureStudio_C_OnCaptureStudioConstructed__DelegateSignature");
static_assert(sizeof(LibraryMenu_EnemyCaptureStudio_C_OnCaptureStudioConstructed__DelegateSignature) == 0x000008, "Wrong size on LibraryMenu_EnemyCaptureStudio_C_OnCaptureStudioConstructed__DelegateSignature");
static_assert(offsetof(LibraryMenu_EnemyCaptureStudio_C_OnCaptureStudioConstructed__DelegateSignature, InConstructedCaptureStudio) == 0x000000, "Member 'LibraryMenu_EnemyCaptureStudio_C_OnCaptureStudioConstructed__DelegateSignature::InConstructedCaptureStudio' has a wrong offset!");

// Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.ExecuteUbergraph_LibraryMenu_EnemyCaptureStudio
// 0x00D0 (0x00D0 - 0x0000)
struct LibraryMenu_EnemyCaptureStudio_C_ExecuteUbergraph_LibraryMenu_EnemyCaptureStudio final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4BDE[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ALibraryMenu_Studio_C*                  K2Node_DynamicCast_AsLibrary_Menu_Studio;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BDF[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetModelActor_Actor;                      // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BE0[0x6];                                     // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UCapsuleComponent*                      CallFunc_GetComponentByClass_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEnemySceneComponent*                 K2Node_DynamicCast_AsSBEnemy_Scene_Component;      // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BE1[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x003C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x004C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_4BE2[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_EnemyCharacterId;               // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESBLibraryEnemyViewSetting                    K2Node_CustomEvent_ViewSetting;                    // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBLibraryEnemyWeaponSetting                  K2Node_CustomEvent_WeaponSetting;                  // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0072(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_Enable;                         // 0x0073(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               K2Node_CustomEvent_Rotation;                       // 0x0074(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BE3[0xF];                                     // 0x0081(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0090(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALibraryMenu_CaptureStudio_C*           CallFunc_FinishSpawningActor_ReturnValue;          // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_EnemyCaptureStudio_C_ExecuteUbergraph_LibraryMenu_EnemyCaptureStudio) == 0x000010, "Wrong alignment on LibraryMenu_EnemyCaptureStudio_C_ExecuteUbergraph_LibraryMenu_EnemyCaptureStudio");
static_assert(sizeof(LibraryMenu_EnemyCaptureStudio_C_ExecuteUbergraph_LibraryMenu_EnemyCaptureStudio) == 0x0000D0, "Wrong size on LibraryMenu_EnemyCaptureStudio_C_ExecuteUbergraph_LibraryMenu_EnemyCaptureStudio");
static_assert(offsetof(LibraryMenu_EnemyCaptureStudio_C_ExecuteUbergraph_LibraryMenu_EnemyCaptureStudio, EntryPoint) == 0x000000, "Member 'LibraryMenu_EnemyCaptureStudio_C_ExecuteUbergraph_LibraryMenu_EnemyCaptureStudio::EntryPoint' has a wrong offset!");
static_assert(offsetof(LibraryMenu_EnemyCaptureStudio_C_ExecuteUbergraph_LibraryMenu_EnemyCaptureStudio, K2Node_DynamicCast_AsLibrary_Menu_Studio) == 0x000008, "Member 'LibraryMenu_EnemyCaptureStudio_C_ExecuteUbergraph_LibraryMenu_EnemyCaptureStudio::K2Node_DynamicCast_AsLibrary_Menu_Studio' has a wrong offset!");
static_assert(offsetof(LibraryMenu_EnemyCaptureStudio_C_ExecuteUbergraph_LibraryMenu_EnemyCaptureStudio, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'LibraryMenu_EnemyCaptureStudio_C_ExecuteUbergraph_LibraryMenu_EnemyCaptureStudio::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(LibraryMenu_EnemyCaptureStudio_C_ExecuteUbergraph_LibraryMenu_EnemyCaptureStudio, CallFunc_GetModelActor_Actor) == 0x000018, "Member 'LibraryMenu_EnemyCaptureStudio_C_ExecuteUbergraph_LibraryMenu_EnemyCaptureStudio::CallFunc_GetModelActor_Actor' has a wrong offset!");
static_assert(offsetof(LibraryMenu_EnemyCaptureStudio_C_ExecuteUbergraph_LibraryMenu_EnemyCaptureStudio, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'LibraryMenu_EnemyCaptureStudio_C_ExecuteUbergraph_LibraryMenu_EnemyCaptureStudio::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_EnemyCaptureStudio_C_ExecuteUbergraph_LibraryMenu_EnemyCaptureStudio, CallFunc_IsValid_ReturnValue_1) == 0x000021, "Member 'LibraryMenu_EnemyCaptureStudio_C_ExecuteUbergraph_LibraryMenu_EnemyCaptureStudio::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_EnemyCaptureStudio_C_ExecuteUbergraph_LibraryMenu_EnemyCaptureStudio, CallFunc_GetComponentByClass_ReturnValue) == 0x000028, "Member 'LibraryMenu_EnemyCaptureStudio_C_ExecuteUbergraph_LibraryMenu_EnemyCaptureStudio::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_EnemyCaptureStudio_C_ExecuteUbergraph_LibraryMenu_EnemyCaptureStudio, K2Node_DynamicCast_AsSBEnemy_Scene_Component) == 0x000030, "Member 'LibraryMenu_EnemyCaptureStudio_C_ExecuteUbergraph_LibraryMenu_EnemyCaptureStudio::K2Node_DynamicCast_AsSBEnemy_Scene_Component' has a wrong offset!");
static_assert(offsetof(LibraryMenu_EnemyCaptureStudio_C_ExecuteUbergraph_LibraryMenu_EnemyCaptureStudio, K2Node_DynamicCast_bSuccess_1) == 0x000038, "Member 'LibraryMenu_EnemyCaptureStudio_C_ExecuteUbergraph_LibraryMenu_EnemyCaptureStudio::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_EnemyCaptureStudio_C_ExecuteUbergraph_LibraryMenu_EnemyCaptureStudio, K2Node_CreateDelegate_OutputDelegate) == 0x00003C, "Member 'LibraryMenu_EnemyCaptureStudio_C_ExecuteUbergraph_LibraryMenu_EnemyCaptureStudio::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(LibraryMenu_EnemyCaptureStudio_C_ExecuteUbergraph_LibraryMenu_EnemyCaptureStudio, K2Node_CreateDelegate_OutputDelegate_1) == 0x00004C, "Member 'LibraryMenu_EnemyCaptureStudio_C_ExecuteUbergraph_LibraryMenu_EnemyCaptureStudio::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_EnemyCaptureStudio_C_ExecuteUbergraph_LibraryMenu_EnemyCaptureStudio, K2Node_CustomEvent_EnemyCharacterId) == 0x000060, "Member 'LibraryMenu_EnemyCaptureStudio_C_ExecuteUbergraph_LibraryMenu_EnemyCaptureStudio::K2Node_CustomEvent_EnemyCharacterId' has a wrong offset!");
static_assert(offsetof(LibraryMenu_EnemyCaptureStudio_C_ExecuteUbergraph_LibraryMenu_EnemyCaptureStudio, K2Node_CustomEvent_ViewSetting) == 0x000070, "Member 'LibraryMenu_EnemyCaptureStudio_C_ExecuteUbergraph_LibraryMenu_EnemyCaptureStudio::K2Node_CustomEvent_ViewSetting' has a wrong offset!");
static_assert(offsetof(LibraryMenu_EnemyCaptureStudio_C_ExecuteUbergraph_LibraryMenu_EnemyCaptureStudio, K2Node_CustomEvent_WeaponSetting) == 0x000071, "Member 'LibraryMenu_EnemyCaptureStudio_C_ExecuteUbergraph_LibraryMenu_EnemyCaptureStudio::K2Node_CustomEvent_WeaponSetting' has a wrong offset!");
static_assert(offsetof(LibraryMenu_EnemyCaptureStudio_C_ExecuteUbergraph_LibraryMenu_EnemyCaptureStudio, CallFunc_IsValid_ReturnValue_2) == 0x000072, "Member 'LibraryMenu_EnemyCaptureStudio_C_ExecuteUbergraph_LibraryMenu_EnemyCaptureStudio::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_EnemyCaptureStudio_C_ExecuteUbergraph_LibraryMenu_EnemyCaptureStudio, K2Node_CustomEvent_Enable) == 0x000073, "Member 'LibraryMenu_EnemyCaptureStudio_C_ExecuteUbergraph_LibraryMenu_EnemyCaptureStudio::K2Node_CustomEvent_Enable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_EnemyCaptureStudio_C_ExecuteUbergraph_LibraryMenu_EnemyCaptureStudio, K2Node_CustomEvent_Rotation) == 0x000074, "Member 'LibraryMenu_EnemyCaptureStudio_C_ExecuteUbergraph_LibraryMenu_EnemyCaptureStudio::K2Node_CustomEvent_Rotation' has a wrong offset!");
static_assert(offsetof(LibraryMenu_EnemyCaptureStudio_C_ExecuteUbergraph_LibraryMenu_EnemyCaptureStudio, CallFunc_IsValid_ReturnValue_3) == 0x000080, "Member 'LibraryMenu_EnemyCaptureStudio_C_ExecuteUbergraph_LibraryMenu_EnemyCaptureStudio::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_EnemyCaptureStudio_C_ExecuteUbergraph_LibraryMenu_EnemyCaptureStudio, CallFunc_MakeTransform_ReturnValue) == 0x000090, "Member 'LibraryMenu_EnemyCaptureStudio_C_ExecuteUbergraph_LibraryMenu_EnemyCaptureStudio::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_EnemyCaptureStudio_C_ExecuteUbergraph_LibraryMenu_EnemyCaptureStudio, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x0000C0, "Member 'LibraryMenu_EnemyCaptureStudio_C_ExecuteUbergraph_LibraryMenu_EnemyCaptureStudio::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_EnemyCaptureStudio_C_ExecuteUbergraph_LibraryMenu_EnemyCaptureStudio, CallFunc_FinishSpawningActor_ReturnValue) == 0x0000C8, "Member 'LibraryMenu_EnemyCaptureStudio_C_ExecuteUbergraph_LibraryMenu_EnemyCaptureStudio::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");

// Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.SetExternalDirectionalLightRotation
// 0x000C (0x000C - 0x0000)
struct LibraryMenu_EnemyCaptureStudio_C_SetExternalDirectionalLightRotation final
{
public:
	struct FRotator                               Rotation;                                          // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_EnemyCaptureStudio_C_SetExternalDirectionalLightRotation) == 0x000004, "Wrong alignment on LibraryMenu_EnemyCaptureStudio_C_SetExternalDirectionalLightRotation");
static_assert(sizeof(LibraryMenu_EnemyCaptureStudio_C_SetExternalDirectionalLightRotation) == 0x00000C, "Wrong size on LibraryMenu_EnemyCaptureStudio_C_SetExternalDirectionalLightRotation");
static_assert(offsetof(LibraryMenu_EnemyCaptureStudio_C_SetExternalDirectionalLightRotation, Rotation) == 0x000000, "Member 'LibraryMenu_EnemyCaptureStudio_C_SetExternalDirectionalLightRotation::Rotation' has a wrong offset!");

// Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.SetEnableCaptureStudio
// 0x0001 (0x0001 - 0x0000)
struct LibraryMenu_EnemyCaptureStudio_C_SetEnableCaptureStudio final
{
public:
	bool                                          Enable;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_EnemyCaptureStudio_C_SetEnableCaptureStudio) == 0x000001, "Wrong alignment on LibraryMenu_EnemyCaptureStudio_C_SetEnableCaptureStudio");
static_assert(sizeof(LibraryMenu_EnemyCaptureStudio_C_SetEnableCaptureStudio) == 0x000001, "Wrong size on LibraryMenu_EnemyCaptureStudio_C_SetEnableCaptureStudio");
static_assert(offsetof(LibraryMenu_EnemyCaptureStudio_C_SetEnableCaptureStudio, Enable) == 0x000000, "Member 'LibraryMenu_EnemyCaptureStudio_C_SetEnableCaptureStudio::Enable' has a wrong offset!");

// Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.LoadAsset
// 0x0018 (0x0018 - 0x0000)
struct LibraryMenu_EnemyCaptureStudio_C_LoadAsset final
{
public:
	class FString                                 EnemyCharacterId;                                  // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESBLibraryEnemyViewSetting                    ViewSetting;                                       // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBLibraryEnemyWeaponSetting                  WeaponSetting;                                     // 0x0011(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_EnemyCaptureStudio_C_LoadAsset) == 0x000008, "Wrong alignment on LibraryMenu_EnemyCaptureStudio_C_LoadAsset");
static_assert(sizeof(LibraryMenu_EnemyCaptureStudio_C_LoadAsset) == 0x000018, "Wrong size on LibraryMenu_EnemyCaptureStudio_C_LoadAsset");
static_assert(offsetof(LibraryMenu_EnemyCaptureStudio_C_LoadAsset, EnemyCharacterId) == 0x000000, "Member 'LibraryMenu_EnemyCaptureStudio_C_LoadAsset::EnemyCharacterId' has a wrong offset!");
static_assert(offsetof(LibraryMenu_EnemyCaptureStudio_C_LoadAsset, ViewSetting) == 0x000010, "Member 'LibraryMenu_EnemyCaptureStudio_C_LoadAsset::ViewSetting' has a wrong offset!");
static_assert(offsetof(LibraryMenu_EnemyCaptureStudio_C_LoadAsset, WeaponSetting) == 0x000011, "Member 'LibraryMenu_EnemyCaptureStudio_C_LoadAsset::WeaponSetting' has a wrong offset!");

// Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.SetCaptureMoveActive
// 0x0002 (0x0002 - 0x0000)
struct LibraryMenu_EnemyCaptureStudio_C_SetCaptureMoveActive final
{
public:
	bool                                          Param_ActiveMove;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_EnemyCaptureStudio_C_SetCaptureMoveActive) == 0x000001, "Wrong alignment on LibraryMenu_EnemyCaptureStudio_C_SetCaptureMoveActive");
static_assert(sizeof(LibraryMenu_EnemyCaptureStudio_C_SetCaptureMoveActive) == 0x000002, "Wrong size on LibraryMenu_EnemyCaptureStudio_C_SetCaptureMoveActive");
static_assert(offsetof(LibraryMenu_EnemyCaptureStudio_C_SetCaptureMoveActive, Param_ActiveMove) == 0x000000, "Member 'LibraryMenu_EnemyCaptureStudio_C_SetCaptureMoveActive::Param_ActiveMove' has a wrong offset!");
static_assert(offsetof(LibraryMenu_EnemyCaptureStudio_C_SetCaptureMoveActive, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'LibraryMenu_EnemyCaptureStudio_C_SetCaptureMoveActive::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.SetCaptureRotateActive
// 0x0002 (0x0002 - 0x0000)
struct LibraryMenu_EnemyCaptureStudio_C_SetCaptureRotateActive final
{
public:
	bool                                          Param_ActiveRotate;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_EnemyCaptureStudio_C_SetCaptureRotateActive) == 0x000001, "Wrong alignment on LibraryMenu_EnemyCaptureStudio_C_SetCaptureRotateActive");
static_assert(sizeof(LibraryMenu_EnemyCaptureStudio_C_SetCaptureRotateActive) == 0x000002, "Wrong size on LibraryMenu_EnemyCaptureStudio_C_SetCaptureRotateActive");
static_assert(offsetof(LibraryMenu_EnemyCaptureStudio_C_SetCaptureRotateActive, Param_ActiveRotate) == 0x000000, "Member 'LibraryMenu_EnemyCaptureStudio_C_SetCaptureRotateActive::Param_ActiveRotate' has a wrong offset!");
static_assert(offsetof(LibraryMenu_EnemyCaptureStudio_C_SetCaptureRotateActive, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'LibraryMenu_EnemyCaptureStudio_C_SetCaptureRotateActive::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.SetCaptureZoomActive
// 0x0002 (0x0002 - 0x0000)
struct LibraryMenu_EnemyCaptureStudio_C_SetCaptureZoomActive final
{
public:
	bool                                          Param_ActiveZoom;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_EnemyCaptureStudio_C_SetCaptureZoomActive) == 0x000001, "Wrong alignment on LibraryMenu_EnemyCaptureStudio_C_SetCaptureZoomActive");
static_assert(sizeof(LibraryMenu_EnemyCaptureStudio_C_SetCaptureZoomActive) == 0x000002, "Wrong size on LibraryMenu_EnemyCaptureStudio_C_SetCaptureZoomActive");
static_assert(offsetof(LibraryMenu_EnemyCaptureStudio_C_SetCaptureZoomActive, Param_ActiveZoom) == 0x000000, "Member 'LibraryMenu_EnemyCaptureStudio_C_SetCaptureZoomActive::Param_ActiveZoom' has a wrong offset!");
static_assert(offsetof(LibraryMenu_EnemyCaptureStudio_C_SetCaptureZoomActive, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'LibraryMenu_EnemyCaptureStudio_C_SetCaptureZoomActive::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.SetStudioVisibility
// 0x0005 (0x0005 - 0x0000)
struct LibraryMenu_EnemyCaptureStudio_C_SetStudioVisibility final
{
public:
	bool                                          InIsVisible;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_EnemyCaptureStudio_C_SetStudioVisibility) == 0x000001, "Wrong alignment on LibraryMenu_EnemyCaptureStudio_C_SetStudioVisibility");
static_assert(sizeof(LibraryMenu_EnemyCaptureStudio_C_SetStudioVisibility) == 0x000005, "Wrong size on LibraryMenu_EnemyCaptureStudio_C_SetStudioVisibility");
static_assert(offsetof(LibraryMenu_EnemyCaptureStudio_C_SetStudioVisibility, InIsVisible) == 0x000000, "Member 'LibraryMenu_EnemyCaptureStudio_C_SetStudioVisibility::InIsVisible' has a wrong offset!");
static_assert(offsetof(LibraryMenu_EnemyCaptureStudio_C_SetStudioVisibility, Temp_byte_Variable) == 0x000001, "Member 'LibraryMenu_EnemyCaptureStudio_C_SetStudioVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_EnemyCaptureStudio_C_SetStudioVisibility, Temp_byte_Variable_1) == 0x000002, "Member 'LibraryMenu_EnemyCaptureStudio_C_SetStudioVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_EnemyCaptureStudio_C_SetStudioVisibility, Temp_bool_Variable) == 0x000003, "Member 'LibraryMenu_EnemyCaptureStudio_C_SetStudioVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_EnemyCaptureStudio_C_SetStudioVisibility, K2Node_Select_Default) == 0x000004, "Member 'LibraryMenu_EnemyCaptureStudio_C_SetStudioVisibility::K2Node_Select_Default' has a wrong offset!");

// Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.Setup and Load Asset
// 0x00B0 (0x00B0 - 0x0000)
struct LibraryMenu_EnemyCaptureStudio_C_Setup_and_Load_Asset final
{
public:
	TDelegate<void()>                             LoadCompleteEvent;                                 // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	struct FSBLibraryEnemyAppearanceData          EnemyData;                                         // 0x0010(0x0090)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_EnemyCaptureStudio_C_Setup_and_Load_Asset) == 0x000008, "Wrong alignment on LibraryMenu_EnemyCaptureStudio_C_Setup_and_Load_Asset");
static_assert(sizeof(LibraryMenu_EnemyCaptureStudio_C_Setup_and_Load_Asset) == 0x0000B0, "Wrong size on LibraryMenu_EnemyCaptureStudio_C_Setup_and_Load_Asset");
static_assert(offsetof(LibraryMenu_EnemyCaptureStudio_C_Setup_and_Load_Asset, LoadCompleteEvent) == 0x000000, "Member 'LibraryMenu_EnemyCaptureStudio_C_Setup_and_Load_Asset::LoadCompleteEvent' has a wrong offset!");
static_assert(offsetof(LibraryMenu_EnemyCaptureStudio_C_Setup_and_Load_Asset, EnemyData) == 0x000010, "Member 'LibraryMenu_EnemyCaptureStudio_C_Setup_and_Load_Asset::EnemyData' has a wrong offset!");
static_assert(offsetof(LibraryMenu_EnemyCaptureStudio_C_Setup_and_Load_Asset, CallFunc_Conv_NameToString_ReturnValue) == 0x0000A0, "Member 'LibraryMenu_EnemyCaptureStudio_C_Setup_and_Load_Asset::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");

// Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.SetStudioHidden
// 0x0002 (0x0002 - 0x0000)
struct LibraryMenu_EnemyCaptureStudio_C_SetStudioHidden final
{
public:
	bool                                          InIsHidden;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_EnemyCaptureStudio_C_SetStudioHidden) == 0x000001, "Wrong alignment on LibraryMenu_EnemyCaptureStudio_C_SetStudioHidden");
static_assert(sizeof(LibraryMenu_EnemyCaptureStudio_C_SetStudioHidden) == 0x000002, "Wrong size on LibraryMenu_EnemyCaptureStudio_C_SetStudioHidden");
static_assert(offsetof(LibraryMenu_EnemyCaptureStudio_C_SetStudioHidden, InIsHidden) == 0x000000, "Member 'LibraryMenu_EnemyCaptureStudio_C_SetStudioHidden::InIsHidden' has a wrong offset!");
static_assert(offsetof(LibraryMenu_EnemyCaptureStudio_C_SetStudioHidden, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'LibraryMenu_EnemyCaptureStudio_C_SetStudioHidden::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.GetCaptureModel
// 0x0018 (0x0018 - 0x0000)
struct LibraryMenu_EnemyCaptureStudio_C_GetCaptureModel final
{
public:
	class ASBEnemyCharacter*                      EnemyCharacter;                                    // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBEnemyCharacter*                      CallFunc_GetCaptureModel_EnemyCharacter;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_EnemyCaptureStudio_C_GetCaptureModel) == 0x000008, "Wrong alignment on LibraryMenu_EnemyCaptureStudio_C_GetCaptureModel");
static_assert(sizeof(LibraryMenu_EnemyCaptureStudio_C_GetCaptureModel) == 0x000018, "Wrong size on LibraryMenu_EnemyCaptureStudio_C_GetCaptureModel");
static_assert(offsetof(LibraryMenu_EnemyCaptureStudio_C_GetCaptureModel, EnemyCharacter) == 0x000000, "Member 'LibraryMenu_EnemyCaptureStudio_C_GetCaptureModel::EnemyCharacter' has a wrong offset!");
static_assert(offsetof(LibraryMenu_EnemyCaptureStudio_C_GetCaptureModel, CallFunc_GetCaptureModel_EnemyCharacter) == 0x000008, "Member 'LibraryMenu_EnemyCaptureStudio_C_GetCaptureModel::CallFunc_GetCaptureModel_EnemyCharacter' has a wrong offset!");
static_assert(offsetof(LibraryMenu_EnemyCaptureStudio_C_GetCaptureModel, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'LibraryMenu_EnemyCaptureStudio_C_GetCaptureModel::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.ModelDelete
// 0x0001 (0x0001 - 0x0000)
struct LibraryMenu_EnemyCaptureStudio_C_ModelDelete final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_EnemyCaptureStudio_C_ModelDelete) == 0x000001, "Wrong alignment on LibraryMenu_EnemyCaptureStudio_C_ModelDelete");
static_assert(sizeof(LibraryMenu_EnemyCaptureStudio_C_ModelDelete) == 0x000001, "Wrong size on LibraryMenu_EnemyCaptureStudio_C_ModelDelete");
static_assert(offsetof(LibraryMenu_EnemyCaptureStudio_C_ModelDelete, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'LibraryMenu_EnemyCaptureStudio_C_ModelDelete::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.SetEnemyModelCameraState
// 0x0010 (0x0010 - 0x0000)
struct LibraryMenu_EnemyCaptureStudio_C_SetEnemyModelCameraState final
{
public:
	float                                         Scale;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Rotate;                                            // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CameraHeight;                                      // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SideOffset;                                        // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_EnemyCaptureStudio_C_SetEnemyModelCameraState) == 0x000004, "Wrong alignment on LibraryMenu_EnemyCaptureStudio_C_SetEnemyModelCameraState");
static_assert(sizeof(LibraryMenu_EnemyCaptureStudio_C_SetEnemyModelCameraState) == 0x000010, "Wrong size on LibraryMenu_EnemyCaptureStudio_C_SetEnemyModelCameraState");
static_assert(offsetof(LibraryMenu_EnemyCaptureStudio_C_SetEnemyModelCameraState, Scale) == 0x000000, "Member 'LibraryMenu_EnemyCaptureStudio_C_SetEnemyModelCameraState::Scale' has a wrong offset!");
static_assert(offsetof(LibraryMenu_EnemyCaptureStudio_C_SetEnemyModelCameraState, Rotate) == 0x000004, "Member 'LibraryMenu_EnemyCaptureStudio_C_SetEnemyModelCameraState::Rotate' has a wrong offset!");
static_assert(offsetof(LibraryMenu_EnemyCaptureStudio_C_SetEnemyModelCameraState, CameraHeight) == 0x000008, "Member 'LibraryMenu_EnemyCaptureStudio_C_SetEnemyModelCameraState::CameraHeight' has a wrong offset!");
static_assert(offsetof(LibraryMenu_EnemyCaptureStudio_C_SetEnemyModelCameraState, SideOffset) == 0x00000C, "Member 'LibraryMenu_EnemyCaptureStudio_C_SetEnemyModelCameraState::SideOffset' has a wrong offset!");

}

