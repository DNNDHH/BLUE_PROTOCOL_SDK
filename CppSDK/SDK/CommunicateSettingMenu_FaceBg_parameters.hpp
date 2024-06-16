#pragma once

 

// Package: CommunicateSettingMenu_FaceBg

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function CommunicateSettingMenu_FaceBg.CommunicateSettingMenu_FaceBg_C.ExecuteUbergraph_CommunicateSettingMenu_FaceBg
// 0x00C0 (0x00C0 - 0x0000)
struct CommunicateSettingMenu_FaceBg_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBg final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_InScale;                        // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              K2Node_CustomEvent_InPosition;                     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_CustomEvent_URL;                            // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class USBDownloadImageImpl*                   CallFunc_DownloadImage_ReturnValue;                // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_541A[0x5];                                     // 0x002B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0038(0x0088)()
};
static_assert(alignof(CommunicateSettingMenu_FaceBg_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBg) == 0x000008, "Wrong alignment on CommunicateSettingMenu_FaceBg_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBg");
static_assert(sizeof(CommunicateSettingMenu_FaceBg_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBg) == 0x0000C0, "Wrong size on CommunicateSettingMenu_FaceBg_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBg");
static_assert(offsetof(CommunicateSettingMenu_FaceBg_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBg, EntryPoint) == 0x000000, "Member 'CommunicateSettingMenu_FaceBg_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBg::EntryPoint' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_FaceBg_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBg, K2Node_CustomEvent_InScale) == 0x000004, "Member 'CommunicateSettingMenu_FaceBg_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBg::K2Node_CustomEvent_InScale' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_FaceBg_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBg, K2Node_CustomEvent_InPosition) == 0x000008, "Member 'CommunicateSettingMenu_FaceBg_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBg::K2Node_CustomEvent_InPosition' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_FaceBg_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBg, K2Node_CustomEvent_URL) == 0x000010, "Member 'CommunicateSettingMenu_FaceBg_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBg::K2Node_CustomEvent_URL' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_FaceBg_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBg, CallFunc_DownloadImage_ReturnValue) == 0x000020, "Member 'CommunicateSettingMenu_FaceBg_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBg::CallFunc_DownloadImage_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_FaceBg_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBg, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'CommunicateSettingMenu_FaceBg_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBg::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_FaceBg_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBg, CallFunc_IsEmpty_ReturnValue) == 0x000029, "Member 'CommunicateSettingMenu_FaceBg_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBg::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_FaceBg_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBg, CallFunc_Not_PreBool_ReturnValue) == 0x00002A, "Member 'CommunicateSettingMenu_FaceBg_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBg::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_FaceBg_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBg, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000030, "Member 'CommunicateSettingMenu_FaceBg_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBg::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_FaceBg_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBg, K2Node_MakeStruct_SlateBrush) == 0x000038, "Member 'CommunicateSettingMenu_FaceBg_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBg::K2Node_MakeStruct_SlateBrush' has a wrong offset!");

// Function CommunicateSettingMenu_FaceBg.CommunicateSettingMenu_FaceBg_C.SetData
// 0x0020 (0x0020 - 0x0000)
struct CommunicateSettingMenu_FaceBg_C_SetData final
{
public:
	float                                         InScale;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              InPosition;                                        // 0x0004(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_541B[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 URL;                                               // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(CommunicateSettingMenu_FaceBg_C_SetData) == 0x000008, "Wrong alignment on CommunicateSettingMenu_FaceBg_C_SetData");
static_assert(sizeof(CommunicateSettingMenu_FaceBg_C_SetData) == 0x000020, "Wrong size on CommunicateSettingMenu_FaceBg_C_SetData");
static_assert(offsetof(CommunicateSettingMenu_FaceBg_C_SetData, InScale) == 0x000000, "Member 'CommunicateSettingMenu_FaceBg_C_SetData::InScale' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_FaceBg_C_SetData, InPosition) == 0x000004, "Member 'CommunicateSettingMenu_FaceBg_C_SetData::InPosition' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_FaceBg_C_SetData, URL) == 0x000010, "Member 'CommunicateSettingMenu_FaceBg_C_SetData::URL' has a wrong offset!");

}

