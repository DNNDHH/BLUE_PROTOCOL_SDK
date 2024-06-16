#pragma once

 

// Package: BP_LayoutBlueprintFunctionLibrary

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function BP_LayoutBlueprintFunctionLibrary.BP_LayoutBlueprintFunctionLibrary_C.ApplyLayout
// 0x0050 (0x0050 - 0x0000)
struct BP_LayoutBlueprintFunctionLibrary_C_ApplyLayout final
{
public:
	class FString                                 Key;                                               // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UUserWidget*                            Widget;                                            // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 PresetData;                                        // 0x0020(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class USBConfigureSaveManager*                Manager;                                           // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCustomHudLayoutSlot                        LocalSlotType;                                     // 0x0038(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9F35[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 LocalKey;                                          // 0x0040(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LayoutBlueprintFunctionLibrary_C_ApplyLayout) == 0x000008, "Wrong alignment on BP_LayoutBlueprintFunctionLibrary_C_ApplyLayout");
static_assert(sizeof(BP_LayoutBlueprintFunctionLibrary_C_ApplyLayout) == 0x000050, "Wrong size on BP_LayoutBlueprintFunctionLibrary_C_ApplyLayout");
static_assert(offsetof(BP_LayoutBlueprintFunctionLibrary_C_ApplyLayout, Key) == 0x000000, "Member 'BP_LayoutBlueprintFunctionLibrary_C_ApplyLayout::Key' has a wrong offset!");
static_assert(offsetof(BP_LayoutBlueprintFunctionLibrary_C_ApplyLayout, Widget) == 0x000010, "Member 'BP_LayoutBlueprintFunctionLibrary_C_ApplyLayout::Widget' has a wrong offset!");
static_assert(offsetof(BP_LayoutBlueprintFunctionLibrary_C_ApplyLayout, __WorldContext) == 0x000018, "Member 'BP_LayoutBlueprintFunctionLibrary_C_ApplyLayout::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_LayoutBlueprintFunctionLibrary_C_ApplyLayout, PresetData) == 0x000020, "Member 'BP_LayoutBlueprintFunctionLibrary_C_ApplyLayout::PresetData' has a wrong offset!");
static_assert(offsetof(BP_LayoutBlueprintFunctionLibrary_C_ApplyLayout, Manager) == 0x000030, "Member 'BP_LayoutBlueprintFunctionLibrary_C_ApplyLayout::Manager' has a wrong offset!");
static_assert(offsetof(BP_LayoutBlueprintFunctionLibrary_C_ApplyLayout, LocalSlotType) == 0x000038, "Member 'BP_LayoutBlueprintFunctionLibrary_C_ApplyLayout::LocalSlotType' has a wrong offset!");
static_assert(offsetof(BP_LayoutBlueprintFunctionLibrary_C_ApplyLayout, LocalKey) == 0x000040, "Member 'BP_LayoutBlueprintFunctionLibrary_C_ApplyLayout::LocalKey' has a wrong offset!");

// Function BP_LayoutBlueprintFunctionLibrary.BP_LayoutBlueprintFunctionLibrary_C.ApplyClassHUD
// 0x0050 (0x0050 - 0x0000)
struct BP_LayoutBlueprintFunctionLibrary_C_ApplyClassHUD final
{
public:
	class UUserWidget*                            Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 Param_Name;                                        // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHUD*                                   CallFunc_GetHUD_ReturnValue;                       // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F36[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBClassHudInterface>  K2Node_DynamicCast_AsSBClass_Hud_Interface;        // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_DoesImplementInterface_ReturnValue;       // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_LayoutBlueprintFunctionLibrary_C_ApplyClassHUD) == 0x000008, "Wrong alignment on BP_LayoutBlueprintFunctionLibrary_C_ApplyClassHUD");
static_assert(sizeof(BP_LayoutBlueprintFunctionLibrary_C_ApplyClassHUD) == 0x000050, "Wrong size on BP_LayoutBlueprintFunctionLibrary_C_ApplyClassHUD");
static_assert(offsetof(BP_LayoutBlueprintFunctionLibrary_C_ApplyClassHUD, Widget) == 0x000000, "Member 'BP_LayoutBlueprintFunctionLibrary_C_ApplyClassHUD::Widget' has a wrong offset!");
static_assert(offsetof(BP_LayoutBlueprintFunctionLibrary_C_ApplyClassHUD, Param_Name) == 0x000008, "Member 'BP_LayoutBlueprintFunctionLibrary_C_ApplyClassHUD::Param_Name' has a wrong offset!");
static_assert(offsetof(BP_LayoutBlueprintFunctionLibrary_C_ApplyClassHUD, __WorldContext) == 0x000018, "Member 'BP_LayoutBlueprintFunctionLibrary_C_ApplyClassHUD::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_LayoutBlueprintFunctionLibrary_C_ApplyClassHUD, CallFunc_GetPlayerController_ReturnValue) == 0x000020, "Member 'BP_LayoutBlueprintFunctionLibrary_C_ApplyClassHUD::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LayoutBlueprintFunctionLibrary_C_ApplyClassHUD, CallFunc_GetHUD_ReturnValue) == 0x000028, "Member 'BP_LayoutBlueprintFunctionLibrary_C_ApplyClassHUD::CallFunc_GetHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LayoutBlueprintFunctionLibrary_C_ApplyClassHUD, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'BP_LayoutBlueprintFunctionLibrary_C_ApplyClassHUD::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LayoutBlueprintFunctionLibrary_C_ApplyClassHUD, K2Node_DynamicCast_AsSBClass_Hud_Interface) == 0x000038, "Member 'BP_LayoutBlueprintFunctionLibrary_C_ApplyClassHUD::K2Node_DynamicCast_AsSBClass_Hud_Interface' has a wrong offset!");
static_assert(offsetof(BP_LayoutBlueprintFunctionLibrary_C_ApplyClassHUD, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'BP_LayoutBlueprintFunctionLibrary_C_ApplyClassHUD::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_LayoutBlueprintFunctionLibrary_C_ApplyClassHUD, CallFunc_DoesImplementInterface_ReturnValue) == 0x000049, "Member 'BP_LayoutBlueprintFunctionLibrary_C_ApplyClassHUD::CallFunc_DoesImplementInterface_ReturnValue' has a wrong offset!");

// Function BP_LayoutBlueprintFunctionLibrary.BP_LayoutBlueprintFunctionLibrary_C.RemoveLayoutFromHUD
// 0x0050 (0x0050 - 0x0000)
struct BP_LayoutBlueprintFunctionLibrary_C_RemoveLayoutFromHUD final
{
public:
	class FString                                 Param_Name;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsRegisted;                                        // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F37[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHUD*                                   CallFunc_GetHUD_ReturnValue;                       // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F38[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBClassHudInterface>  K2Node_DynamicCast_AsSBClass_Hud_Interface;        // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_UnregistClassHud_ReturnValue;             // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_DoesImplementInterface_ReturnValue;       // 0x004B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_LayoutBlueprintFunctionLibrary_C_RemoveLayoutFromHUD) == 0x000008, "Wrong alignment on BP_LayoutBlueprintFunctionLibrary_C_RemoveLayoutFromHUD");
static_assert(sizeof(BP_LayoutBlueprintFunctionLibrary_C_RemoveLayoutFromHUD) == 0x000050, "Wrong size on BP_LayoutBlueprintFunctionLibrary_C_RemoveLayoutFromHUD");
static_assert(offsetof(BP_LayoutBlueprintFunctionLibrary_C_RemoveLayoutFromHUD, Param_Name) == 0x000000, "Member 'BP_LayoutBlueprintFunctionLibrary_C_RemoveLayoutFromHUD::Param_Name' has a wrong offset!");
static_assert(offsetof(BP_LayoutBlueprintFunctionLibrary_C_RemoveLayoutFromHUD, __WorldContext) == 0x000010, "Member 'BP_LayoutBlueprintFunctionLibrary_C_RemoveLayoutFromHUD::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_LayoutBlueprintFunctionLibrary_C_RemoveLayoutFromHUD, IsRegisted) == 0x000018, "Member 'BP_LayoutBlueprintFunctionLibrary_C_RemoveLayoutFromHUD::IsRegisted' has a wrong offset!");
static_assert(offsetof(BP_LayoutBlueprintFunctionLibrary_C_RemoveLayoutFromHUD, CallFunc_GetPlayerController_ReturnValue) == 0x000020, "Member 'BP_LayoutBlueprintFunctionLibrary_C_RemoveLayoutFromHUD::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LayoutBlueprintFunctionLibrary_C_RemoveLayoutFromHUD, CallFunc_GetHUD_ReturnValue) == 0x000028, "Member 'BP_LayoutBlueprintFunctionLibrary_C_RemoveLayoutFromHUD::CallFunc_GetHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LayoutBlueprintFunctionLibrary_C_RemoveLayoutFromHUD, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'BP_LayoutBlueprintFunctionLibrary_C_RemoveLayoutFromHUD::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LayoutBlueprintFunctionLibrary_C_RemoveLayoutFromHUD, K2Node_DynamicCast_AsSBClass_Hud_Interface) == 0x000038, "Member 'BP_LayoutBlueprintFunctionLibrary_C_RemoveLayoutFromHUD::K2Node_DynamicCast_AsSBClass_Hud_Interface' has a wrong offset!");
static_assert(offsetof(BP_LayoutBlueprintFunctionLibrary_C_RemoveLayoutFromHUD, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'BP_LayoutBlueprintFunctionLibrary_C_RemoveLayoutFromHUD::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_LayoutBlueprintFunctionLibrary_C_RemoveLayoutFromHUD, CallFunc_UnregistClassHud_ReturnValue) == 0x000049, "Member 'BP_LayoutBlueprintFunctionLibrary_C_RemoveLayoutFromHUD::CallFunc_UnregistClassHud_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LayoutBlueprintFunctionLibrary_C_RemoveLayoutFromHUD, CallFunc_IsValid_ReturnValue_1) == 0x00004A, "Member 'BP_LayoutBlueprintFunctionLibrary_C_RemoveLayoutFromHUD::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_LayoutBlueprintFunctionLibrary_C_RemoveLayoutFromHUD, CallFunc_DoesImplementInterface_ReturnValue) == 0x00004B, "Member 'BP_LayoutBlueprintFunctionLibrary_C_RemoveLayoutFromHUD::CallFunc_DoesImplementInterface_ReturnValue' has a wrong offset!");

}

