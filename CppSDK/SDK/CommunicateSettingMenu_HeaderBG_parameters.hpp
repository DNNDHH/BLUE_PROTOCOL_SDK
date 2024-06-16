#pragma once

 

// Package: CommunicateSettingMenu_HeaderBG

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function CommunicateSettingMenu_HeaderBG.CommunicateSettingMenu_HeaderBG_C.ExecuteUbergraph_CommunicateSettingMenu_HeaderBG
// 0x0178 (0x0178 - 0x0000)
struct CommunicateSettingMenu_HeaderBG_C_ExecuteUbergraph_CommunicateSettingMenu_HeaderBG final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_82C0[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_InURL;                          // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_InScale;                        // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              K2Node_CustomEvent_InPosition;                     // 0x001C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_82C1[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanel*                           K2Node_CustomEvent_InCanvasPanel;                  // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBDownloadImageImpl*                   CallFunc_DownloadImage_ReturnValue;                // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_82C2[0x5];                                     // 0x003B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_LocationName_1;                 // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_CustomEvent_ZoneId_1;                       // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_CustomEvent_ContentId_1;                    // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBPlatformInfo                        K2Node_CustomEvent_PlatformInfo_1;                 // 0x0070(0x0020)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0090(0x0088)()
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0118(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsShowPlayerLocationUI;         // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_InActive;                       // 0x0121(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_82C3[0x6];                                     // 0x0122(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_LocationName;                   // 0x0128(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_CustomEvent_ZoneId;                         // 0x0138(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_CustomEvent_ContentId;                      // 0x0148(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBPlatformInfo                        K2Node_CustomEvent_PlatformInfo;                   // 0x0158(0x0020)()
};
static_assert(alignof(CommunicateSettingMenu_HeaderBG_C_ExecuteUbergraph_CommunicateSettingMenu_HeaderBG) == 0x000008, "Wrong alignment on CommunicateSettingMenu_HeaderBG_C_ExecuteUbergraph_CommunicateSettingMenu_HeaderBG");
static_assert(sizeof(CommunicateSettingMenu_HeaderBG_C_ExecuteUbergraph_CommunicateSettingMenu_HeaderBG) == 0x000178, "Wrong size on CommunicateSettingMenu_HeaderBG_C_ExecuteUbergraph_CommunicateSettingMenu_HeaderBG");
static_assert(offsetof(CommunicateSettingMenu_HeaderBG_C_ExecuteUbergraph_CommunicateSettingMenu_HeaderBG, EntryPoint) == 0x000000, "Member 'CommunicateSettingMenu_HeaderBG_C_ExecuteUbergraph_CommunicateSettingMenu_HeaderBG::EntryPoint' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_HeaderBG_C_ExecuteUbergraph_CommunicateSettingMenu_HeaderBG, K2Node_CustomEvent_InURL) == 0x000008, "Member 'CommunicateSettingMenu_HeaderBG_C_ExecuteUbergraph_CommunicateSettingMenu_HeaderBG::K2Node_CustomEvent_InURL' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_HeaderBG_C_ExecuteUbergraph_CommunicateSettingMenu_HeaderBG, K2Node_CustomEvent_InScale) == 0x000018, "Member 'CommunicateSettingMenu_HeaderBG_C_ExecuteUbergraph_CommunicateSettingMenu_HeaderBG::K2Node_CustomEvent_InScale' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_HeaderBG_C_ExecuteUbergraph_CommunicateSettingMenu_HeaderBG, K2Node_CustomEvent_InPosition) == 0x00001C, "Member 'CommunicateSettingMenu_HeaderBG_C_ExecuteUbergraph_CommunicateSettingMenu_HeaderBG::K2Node_CustomEvent_InPosition' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_HeaderBG_C_ExecuteUbergraph_CommunicateSettingMenu_HeaderBG, K2Node_CustomEvent_InCanvasPanel) == 0x000028, "Member 'CommunicateSettingMenu_HeaderBG_C_ExecuteUbergraph_CommunicateSettingMenu_HeaderBG::K2Node_CustomEvent_InCanvasPanel' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_HeaderBG_C_ExecuteUbergraph_CommunicateSettingMenu_HeaderBG, CallFunc_DownloadImage_ReturnValue) == 0x000030, "Member 'CommunicateSettingMenu_HeaderBG_C_ExecuteUbergraph_CommunicateSettingMenu_HeaderBG::CallFunc_DownloadImage_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_HeaderBG_C_ExecuteUbergraph_CommunicateSettingMenu_HeaderBG, CallFunc_IsEmpty_ReturnValue) == 0x000038, "Member 'CommunicateSettingMenu_HeaderBG_C_ExecuteUbergraph_CommunicateSettingMenu_HeaderBG::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_HeaderBG_C_ExecuteUbergraph_CommunicateSettingMenu_HeaderBG, CallFunc_IsValid_ReturnValue) == 0x000039, "Member 'CommunicateSettingMenu_HeaderBG_C_ExecuteUbergraph_CommunicateSettingMenu_HeaderBG::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_HeaderBG_C_ExecuteUbergraph_CommunicateSettingMenu_HeaderBG, CallFunc_Not_PreBool_ReturnValue) == 0x00003A, "Member 'CommunicateSettingMenu_HeaderBG_C_ExecuteUbergraph_CommunicateSettingMenu_HeaderBG::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_HeaderBG_C_ExecuteUbergraph_CommunicateSettingMenu_HeaderBG, K2Node_CustomEvent_LocationName_1) == 0x000040, "Member 'CommunicateSettingMenu_HeaderBG_C_ExecuteUbergraph_CommunicateSettingMenu_HeaderBG::K2Node_CustomEvent_LocationName_1' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_HeaderBG_C_ExecuteUbergraph_CommunicateSettingMenu_HeaderBG, K2Node_CustomEvent_ZoneId_1) == 0x000050, "Member 'CommunicateSettingMenu_HeaderBG_C_ExecuteUbergraph_CommunicateSettingMenu_HeaderBG::K2Node_CustomEvent_ZoneId_1' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_HeaderBG_C_ExecuteUbergraph_CommunicateSettingMenu_HeaderBG, K2Node_CustomEvent_ContentId_1) == 0x000060, "Member 'CommunicateSettingMenu_HeaderBG_C_ExecuteUbergraph_CommunicateSettingMenu_HeaderBG::K2Node_CustomEvent_ContentId_1' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_HeaderBG_C_ExecuteUbergraph_CommunicateSettingMenu_HeaderBG, K2Node_CustomEvent_PlatformInfo_1) == 0x000070, "Member 'CommunicateSettingMenu_HeaderBG_C_ExecuteUbergraph_CommunicateSettingMenu_HeaderBG::K2Node_CustomEvent_PlatformInfo_1' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_HeaderBG_C_ExecuteUbergraph_CommunicateSettingMenu_HeaderBG, K2Node_MakeStruct_SlateBrush) == 0x000090, "Member 'CommunicateSettingMenu_HeaderBG_C_ExecuteUbergraph_CommunicateSettingMenu_HeaderBG::K2Node_MakeStruct_SlateBrush' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_HeaderBG_C_ExecuteUbergraph_CommunicateSettingMenu_HeaderBG, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000118, "Member 'CommunicateSettingMenu_HeaderBG_C_ExecuteUbergraph_CommunicateSettingMenu_HeaderBG::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_HeaderBG_C_ExecuteUbergraph_CommunicateSettingMenu_HeaderBG, K2Node_CustomEvent_IsShowPlayerLocationUI) == 0x000120, "Member 'CommunicateSettingMenu_HeaderBG_C_ExecuteUbergraph_CommunicateSettingMenu_HeaderBG::K2Node_CustomEvent_IsShowPlayerLocationUI' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_HeaderBG_C_ExecuteUbergraph_CommunicateSettingMenu_HeaderBG, K2Node_CustomEvent_InActive) == 0x000121, "Member 'CommunicateSettingMenu_HeaderBG_C_ExecuteUbergraph_CommunicateSettingMenu_HeaderBG::K2Node_CustomEvent_InActive' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_HeaderBG_C_ExecuteUbergraph_CommunicateSettingMenu_HeaderBG, K2Node_CustomEvent_LocationName) == 0x000128, "Member 'CommunicateSettingMenu_HeaderBG_C_ExecuteUbergraph_CommunicateSettingMenu_HeaderBG::K2Node_CustomEvent_LocationName' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_HeaderBG_C_ExecuteUbergraph_CommunicateSettingMenu_HeaderBG, K2Node_CustomEvent_ZoneId) == 0x000138, "Member 'CommunicateSettingMenu_HeaderBG_C_ExecuteUbergraph_CommunicateSettingMenu_HeaderBG::K2Node_CustomEvent_ZoneId' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_HeaderBG_C_ExecuteUbergraph_CommunicateSettingMenu_HeaderBG, K2Node_CustomEvent_ContentId) == 0x000148, "Member 'CommunicateSettingMenu_HeaderBG_C_ExecuteUbergraph_CommunicateSettingMenu_HeaderBG::K2Node_CustomEvent_ContentId' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_HeaderBG_C_ExecuteUbergraph_CommunicateSettingMenu_HeaderBG, K2Node_CustomEvent_PlatformInfo) == 0x000158, "Member 'CommunicateSettingMenu_HeaderBG_C_ExecuteUbergraph_CommunicateSettingMenu_HeaderBG::K2Node_CustomEvent_PlatformInfo' has a wrong offset!");

// Function CommunicateSettingMenu_HeaderBG.CommunicateSettingMenu_HeaderBG_C.SetOtherLocationText
// 0x0058 (0x0058 - 0x0000)
struct CommunicateSettingMenu_HeaderBG_C_SetOtherLocationText final
{
public:
	bool                                          Inactive;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_82C4[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 LocationName;                                      // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 ZoneId;                                            // 0x0018(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 ContentId;                                         // 0x0028(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FSBPlatformInfo                        PlatformInfo;                                      // 0x0038(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(CommunicateSettingMenu_HeaderBG_C_SetOtherLocationText) == 0x000008, "Wrong alignment on CommunicateSettingMenu_HeaderBG_C_SetOtherLocationText");
static_assert(sizeof(CommunicateSettingMenu_HeaderBG_C_SetOtherLocationText) == 0x000058, "Wrong size on CommunicateSettingMenu_HeaderBG_C_SetOtherLocationText");
static_assert(offsetof(CommunicateSettingMenu_HeaderBG_C_SetOtherLocationText, Inactive) == 0x000000, "Member 'CommunicateSettingMenu_HeaderBG_C_SetOtherLocationText::Inactive' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_HeaderBG_C_SetOtherLocationText, LocationName) == 0x000008, "Member 'CommunicateSettingMenu_HeaderBG_C_SetOtherLocationText::LocationName' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_HeaderBG_C_SetOtherLocationText, ZoneId) == 0x000018, "Member 'CommunicateSettingMenu_HeaderBG_C_SetOtherLocationText::ZoneId' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_HeaderBG_C_SetOtherLocationText, ContentId) == 0x000028, "Member 'CommunicateSettingMenu_HeaderBG_C_SetOtherLocationText::ContentId' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_HeaderBG_C_SetOtherLocationText, PlatformInfo) == 0x000038, "Member 'CommunicateSettingMenu_HeaderBG_C_SetOtherLocationText::PlatformInfo' has a wrong offset!");

// Function CommunicateSettingMenu_HeaderBG.CommunicateSettingMenu_HeaderBG_C.SetLocationFollowerUIVisible
// 0x0001 (0x0001 - 0x0000)
struct CommunicateSettingMenu_HeaderBG_C_SetLocationFollowerUIVisible final
{
public:
	bool                                          IsShowPlayerLocationUI;                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommunicateSettingMenu_HeaderBG_C_SetLocationFollowerUIVisible) == 0x000001, "Wrong alignment on CommunicateSettingMenu_HeaderBG_C_SetLocationFollowerUIVisible");
static_assert(sizeof(CommunicateSettingMenu_HeaderBG_C_SetLocationFollowerUIVisible) == 0x000001, "Wrong size on CommunicateSettingMenu_HeaderBG_C_SetLocationFollowerUIVisible");
static_assert(offsetof(CommunicateSettingMenu_HeaderBG_C_SetLocationFollowerUIVisible, IsShowPlayerLocationUI) == 0x000000, "Member 'CommunicateSettingMenu_HeaderBG_C_SetLocationFollowerUIVisible::IsShowPlayerLocationUI' has a wrong offset!");

// Function CommunicateSettingMenu_HeaderBG.CommunicateSettingMenu_HeaderBG_C.SetLocationText
// 0x0050 (0x0050 - 0x0000)
struct CommunicateSettingMenu_HeaderBG_C_SetLocationText final
{
public:
	class FString                                 LocationName;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 ZoneId;                                            // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 ContentId;                                         // 0x0020(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FSBPlatformInfo                        PlatformInfo;                                      // 0x0030(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(CommunicateSettingMenu_HeaderBG_C_SetLocationText) == 0x000008, "Wrong alignment on CommunicateSettingMenu_HeaderBG_C_SetLocationText");
static_assert(sizeof(CommunicateSettingMenu_HeaderBG_C_SetLocationText) == 0x000050, "Wrong size on CommunicateSettingMenu_HeaderBG_C_SetLocationText");
static_assert(offsetof(CommunicateSettingMenu_HeaderBG_C_SetLocationText, LocationName) == 0x000000, "Member 'CommunicateSettingMenu_HeaderBG_C_SetLocationText::LocationName' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_HeaderBG_C_SetLocationText, ZoneId) == 0x000010, "Member 'CommunicateSettingMenu_HeaderBG_C_SetLocationText::ZoneId' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_HeaderBG_C_SetLocationText, ContentId) == 0x000020, "Member 'CommunicateSettingMenu_HeaderBG_C_SetLocationText::ContentId' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_HeaderBG_C_SetLocationText, PlatformInfo) == 0x000030, "Member 'CommunicateSettingMenu_HeaderBG_C_SetLocationText::PlatformInfo' has a wrong offset!");

// Function CommunicateSettingMenu_HeaderBG.CommunicateSettingMenu_HeaderBG_C.SetData
// 0x0028 (0x0028 - 0x0000)
struct CommunicateSettingMenu_HeaderBG_C_SetData final
{
public:
	class FString                                 InURL;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	float                                         InScale;                                           // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              InPosition;                                        // 0x0014(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_82C5[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanel*                           InCanvasPanel;                                     // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommunicateSettingMenu_HeaderBG_C_SetData) == 0x000008, "Wrong alignment on CommunicateSettingMenu_HeaderBG_C_SetData");
static_assert(sizeof(CommunicateSettingMenu_HeaderBG_C_SetData) == 0x000028, "Wrong size on CommunicateSettingMenu_HeaderBG_C_SetData");
static_assert(offsetof(CommunicateSettingMenu_HeaderBG_C_SetData, InURL) == 0x000000, "Member 'CommunicateSettingMenu_HeaderBG_C_SetData::InURL' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_HeaderBG_C_SetData, InScale) == 0x000010, "Member 'CommunicateSettingMenu_HeaderBG_C_SetData::InScale' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_HeaderBG_C_SetData, InPosition) == 0x000014, "Member 'CommunicateSettingMenu_HeaderBG_C_SetData::InPosition' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_HeaderBG_C_SetData, InCanvasPanel) == 0x000020, "Member 'CommunicateSettingMenu_HeaderBG_C_SetData::InCanvasPanel' has a wrong offset!");

}

