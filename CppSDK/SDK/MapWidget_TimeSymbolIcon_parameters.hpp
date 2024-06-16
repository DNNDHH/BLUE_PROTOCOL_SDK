#pragma once

 

// Package: MapWidget_TimeSymbolIcon

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function MapWidget_TimeSymbolIcon.MapWidget_TimeSymbolIcon_C.OnOpenTimeEnd__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct MapWidget_TimeSymbolIcon_C_OnOpenTimeEnd__DelegateSignature final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_126C[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapWidget_TimeSymbolIcon_C*            Widget;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_TimeSymbolIcon_C_OnOpenTimeEnd__DelegateSignature) == 0x000008, "Wrong alignment on MapWidget_TimeSymbolIcon_C_OnOpenTimeEnd__DelegateSignature");
static_assert(sizeof(MapWidget_TimeSymbolIcon_C_OnOpenTimeEnd__DelegateSignature) == 0x000010, "Wrong size on MapWidget_TimeSymbolIcon_C_OnOpenTimeEnd__DelegateSignature");
static_assert(offsetof(MapWidget_TimeSymbolIcon_C_OnOpenTimeEnd__DelegateSignature, Param_Index) == 0x000000, "Member 'MapWidget_TimeSymbolIcon_C_OnOpenTimeEnd__DelegateSignature::Param_Index' has a wrong offset!");
static_assert(offsetof(MapWidget_TimeSymbolIcon_C_OnOpenTimeEnd__DelegateSignature, Widget) == 0x000008, "Member 'MapWidget_TimeSymbolIcon_C_OnOpenTimeEnd__DelegateSignature::Widget' has a wrong offset!");

// Function MapWidget_TimeSymbolIcon.MapWidget_TimeSymbolIcon_C.ExecuteUbergraph_MapWidget_TimeSymbolIcon
// 0x0038 (0x0038 - 0x0000)
struct MapWidget_TimeSymbolIcon_C_ExecuteUbergraph_MapWidget_TimeSymbolIcon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_126D[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0018(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_126E[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapWidget_TimeTooltip_C*               CallFunc_Create_ReturnValue;                       // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_TimeSymbolIcon_C_ExecuteUbergraph_MapWidget_TimeSymbolIcon) == 0x000008, "Wrong alignment on MapWidget_TimeSymbolIcon_C_ExecuteUbergraph_MapWidget_TimeSymbolIcon");
static_assert(sizeof(MapWidget_TimeSymbolIcon_C_ExecuteUbergraph_MapWidget_TimeSymbolIcon) == 0x000038, "Wrong size on MapWidget_TimeSymbolIcon_C_ExecuteUbergraph_MapWidget_TimeSymbolIcon");
static_assert(offsetof(MapWidget_TimeSymbolIcon_C_ExecuteUbergraph_MapWidget_TimeSymbolIcon, EntryPoint) == 0x000000, "Member 'MapWidget_TimeSymbolIcon_C_ExecuteUbergraph_MapWidget_TimeSymbolIcon::EntryPoint' has a wrong offset!");
static_assert(offsetof(MapWidget_TimeSymbolIcon_C_ExecuteUbergraph_MapWidget_TimeSymbolIcon, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'MapWidget_TimeSymbolIcon_C_ExecuteUbergraph_MapWidget_TimeSymbolIcon::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(MapWidget_TimeSymbolIcon_C_ExecuteUbergraph_MapWidget_TimeSymbolIcon, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000018, "Member 'MapWidget_TimeSymbolIcon_C_ExecuteUbergraph_MapWidget_TimeSymbolIcon::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_TimeSymbolIcon_C_ExecuteUbergraph_MapWidget_TimeSymbolIcon, CallFunc_IsEmpty_ReturnValue) == 0x000020, "Member 'MapWidget_TimeSymbolIcon_C_ExecuteUbergraph_MapWidget_TimeSymbolIcon::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_TimeSymbolIcon_C_ExecuteUbergraph_MapWidget_TimeSymbolIcon, CallFunc_Create_ReturnValue) == 0x000028, "Member 'MapWidget_TimeSymbolIcon_C_ExecuteUbergraph_MapWidget_TimeSymbolIcon::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_TimeSymbolIcon_C_ExecuteUbergraph_MapWidget_TimeSymbolIcon, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'MapWidget_TimeSymbolIcon_C_ExecuteUbergraph_MapWidget_TimeSymbolIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function MapWidget_TimeSymbolIcon.MapWidget_TimeSymbolIcon_C.GetToolTipWidget_0
// 0x0008 (0x0008 - 0x0000)
struct MapWidget_TimeSymbolIcon_C_GetToolTipWidget_0 final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_TimeSymbolIcon_C_GetToolTipWidget_0) == 0x000008, "Wrong alignment on MapWidget_TimeSymbolIcon_C_GetToolTipWidget_0");
static_assert(sizeof(MapWidget_TimeSymbolIcon_C_GetToolTipWidget_0) == 0x000008, "Wrong size on MapWidget_TimeSymbolIcon_C_GetToolTipWidget_0");
static_assert(offsetof(MapWidget_TimeSymbolIcon_C_GetToolTipWidget_0, ReturnValue) == 0x000000, "Member 'MapWidget_TimeSymbolIcon_C_GetToolTipWidget_0::ReturnValue' has a wrong offset!");

// Function MapWidget_TimeSymbolIcon.MapWidget_TimeSymbolIcon_C.SetTooltipEnable
// 0x0001 (0x0001 - 0x0000)
struct MapWidget_TimeSymbolIcon_C_SetTooltipEnable final
{
public:
	bool                                          IsEnable;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_TimeSymbolIcon_C_SetTooltipEnable) == 0x000001, "Wrong alignment on MapWidget_TimeSymbolIcon_C_SetTooltipEnable");
static_assert(sizeof(MapWidget_TimeSymbolIcon_C_SetTooltipEnable) == 0x000001, "Wrong size on MapWidget_TimeSymbolIcon_C_SetTooltipEnable");
static_assert(offsetof(MapWidget_TimeSymbolIcon_C_SetTooltipEnable, IsEnable) == 0x000000, "Member 'MapWidget_TimeSymbolIcon_C_SetTooltipEnable::IsEnable' has a wrong offset!");

// Function MapWidget_TimeSymbolIcon.MapWidget_TimeSymbolIcon_C.SetTextToTooltip
// 0x0020 (0x0020 - 0x0000)
struct MapWidget_TimeSymbolIcon_C_SetTextToTooltip final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_TimeSymbolIcon_C_SetTextToTooltip) == 0x000008, "Wrong alignment on MapWidget_TimeSymbolIcon_C_SetTextToTooltip");
static_assert(sizeof(MapWidget_TimeSymbolIcon_C_SetTextToTooltip) == 0x000020, "Wrong size on MapWidget_TimeSymbolIcon_C_SetTextToTooltip");
static_assert(offsetof(MapWidget_TimeSymbolIcon_C_SetTextToTooltip, InText) == 0x000000, "Member 'MapWidget_TimeSymbolIcon_C_SetTextToTooltip::InText' has a wrong offset!");
static_assert(offsetof(MapWidget_TimeSymbolIcon_C_SetTextToTooltip, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'MapWidget_TimeSymbolIcon_C_SetTextToTooltip::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function MapWidget_TimeSymbolIcon.MapWidget_TimeSymbolIcon_C.SetIconTexture
// 0x0010 (0x0010 - 0x0000)
struct MapWidget_TimeSymbolIcon_C_SetIconTexture final
{
public:
	class UTexture2D*                             InTexture;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_TimeSymbolIcon_C_SetIconTexture) == 0x000008, "Wrong alignment on MapWidget_TimeSymbolIcon_C_SetIconTexture");
static_assert(sizeof(MapWidget_TimeSymbolIcon_C_SetIconTexture) == 0x000010, "Wrong size on MapWidget_TimeSymbolIcon_C_SetIconTexture");
static_assert(offsetof(MapWidget_TimeSymbolIcon_C_SetIconTexture, InTexture) == 0x000000, "Member 'MapWidget_TimeSymbolIcon_C_SetIconTexture::InTexture' has a wrong offset!");
static_assert(offsetof(MapWidget_TimeSymbolIcon_C_SetIconTexture, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'MapWidget_TimeSymbolIcon_C_SetIconTexture::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function MapWidget_TimeSymbolIcon.MapWidget_TimeSymbolIcon_C.SetIconTextureBySymbolIconType
// 0x0010 (0x0010 - 0x0000)
struct MapWidget_TimeSymbolIcon_C_SetIconTextureBySymbolIconType final
{
public:
	EMapSymbolIconType                            InSymbolIconType;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_126F[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             CallFunc_GetMapSymbolIconTexture_OutSymbolIconTexture; // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_TimeSymbolIcon_C_SetIconTextureBySymbolIconType) == 0x000008, "Wrong alignment on MapWidget_TimeSymbolIcon_C_SetIconTextureBySymbolIconType");
static_assert(sizeof(MapWidget_TimeSymbolIcon_C_SetIconTextureBySymbolIconType) == 0x000010, "Wrong size on MapWidget_TimeSymbolIcon_C_SetIconTextureBySymbolIconType");
static_assert(offsetof(MapWidget_TimeSymbolIcon_C_SetIconTextureBySymbolIconType, InSymbolIconType) == 0x000000, "Member 'MapWidget_TimeSymbolIcon_C_SetIconTextureBySymbolIconType::InSymbolIconType' has a wrong offset!");
static_assert(offsetof(MapWidget_TimeSymbolIcon_C_SetIconTextureBySymbolIconType, CallFunc_GetMapSymbolIconTexture_OutSymbolIconTexture) == 0x000008, "Member 'MapWidget_TimeSymbolIcon_C_SetIconTextureBySymbolIconType::CallFunc_GetMapSymbolIconTexture_OutSymbolIconTexture' has a wrong offset!");

// Function MapWidget_TimeSymbolIcon.MapWidget_TimeSymbolIcon_C.GetTooltipText
// 0x0010 (0x0010 - 0x0000)
struct MapWidget_TimeSymbolIcon_C_GetTooltipText final
{
public:
	class FString                                 OutTooltipText;                                    // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_TimeSymbolIcon_C_GetTooltipText) == 0x000008, "Wrong alignment on MapWidget_TimeSymbolIcon_C_GetTooltipText");
static_assert(sizeof(MapWidget_TimeSymbolIcon_C_GetTooltipText) == 0x000010, "Wrong size on MapWidget_TimeSymbolIcon_C_GetTooltipText");
static_assert(offsetof(MapWidget_TimeSymbolIcon_C_GetTooltipText, OutTooltipText) == 0x000000, "Member 'MapWidget_TimeSymbolIcon_C_GetTooltipText::OutTooltipText' has a wrong offset!");

// Function MapWidget_TimeSymbolIcon.MapWidget_TimeSymbolIcon_C.SetTimeData
// 0x0048 (0x0048 - 0x0000)
struct MapWidget_TimeSymbolIcon_C_SetTimeData final
{
public:
	class FString                                 TermId;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FDateTime                              EndTime_local;                                     // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_MakeDateTime_ReturnValue;                 // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_DateTimeDateTime_ReturnValue;    // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1270[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBGameInstance*                        CallFunc_GetSBGameInstance_ReturnValue;            // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventScheduler*                      CallFunc_GetEventScheduler_ReturnValue;            // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_GetEventTermNextOffLabelDataTimeToNowTime_OutEndTime; // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetEventTermNextOffLabelDataTimeToNowTime_ReturnValue; // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEventTermNoneLimmitBP_ReturnValue;      // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_TimeSymbolIcon_C_SetTimeData) == 0x000008, "Wrong alignment on MapWidget_TimeSymbolIcon_C_SetTimeData");
static_assert(sizeof(MapWidget_TimeSymbolIcon_C_SetTimeData) == 0x000048, "Wrong size on MapWidget_TimeSymbolIcon_C_SetTimeData");
static_assert(offsetof(MapWidget_TimeSymbolIcon_C_SetTimeData, TermId) == 0x000000, "Member 'MapWidget_TimeSymbolIcon_C_SetTimeData::TermId' has a wrong offset!");
static_assert(offsetof(MapWidget_TimeSymbolIcon_C_SetTimeData, EndTime_local) == 0x000010, "Member 'MapWidget_TimeSymbolIcon_C_SetTimeData::EndTime_local' has a wrong offset!");
static_assert(offsetof(MapWidget_TimeSymbolIcon_C_SetTimeData, CallFunc_MakeDateTime_ReturnValue) == 0x000018, "Member 'MapWidget_TimeSymbolIcon_C_SetTimeData::CallFunc_MakeDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_TimeSymbolIcon_C_SetTimeData, CallFunc_NotEqual_DateTimeDateTime_ReturnValue) == 0x000020, "Member 'MapWidget_TimeSymbolIcon_C_SetTimeData::CallFunc_NotEqual_DateTimeDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_TimeSymbolIcon_C_SetTimeData, CallFunc_GetSBGameInstance_ReturnValue) == 0x000028, "Member 'MapWidget_TimeSymbolIcon_C_SetTimeData::CallFunc_GetSBGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_TimeSymbolIcon_C_SetTimeData, CallFunc_GetEventScheduler_ReturnValue) == 0x000030, "Member 'MapWidget_TimeSymbolIcon_C_SetTimeData::CallFunc_GetEventScheduler_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_TimeSymbolIcon_C_SetTimeData, CallFunc_GetEventTermNextOffLabelDataTimeToNowTime_OutEndTime) == 0x000038, "Member 'MapWidget_TimeSymbolIcon_C_SetTimeData::CallFunc_GetEventTermNextOffLabelDataTimeToNowTime_OutEndTime' has a wrong offset!");
static_assert(offsetof(MapWidget_TimeSymbolIcon_C_SetTimeData, CallFunc_GetEventTermNextOffLabelDataTimeToNowTime_ReturnValue) == 0x000040, "Member 'MapWidget_TimeSymbolIcon_C_SetTimeData::CallFunc_GetEventTermNextOffLabelDataTimeToNowTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_TimeSymbolIcon_C_SetTimeData, CallFunc_IsEventTermNoneLimmitBP_ReturnValue) == 0x000041, "Member 'MapWidget_TimeSymbolIcon_C_SetTimeData::CallFunc_IsEventTermNoneLimmitBP_ReturnValue' has a wrong offset!");

// Function MapWidget_TimeSymbolIcon.MapWidget_TimeSymbolIcon_C.IconStateCheck
// 0x0038 (0x0038 - 0x0000)
struct MapWidget_TimeSymbolIcon_C_IconStateCheck final
{
public:
	float                                         Minutes;                                           // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CheckMinutes;                                      // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              NowTime;                                           // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1271[0x5];                                     // 0x0013(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_SBUtcNow_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimespan                              CallFunc_Subtract_DateTimeDateTime_ReturnValue;    // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTotalMinutes_ReturnValue;              // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DateTimeDateTime_ReturnValue; // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_TimeSymbolIcon_C_IconStateCheck) == 0x000008, "Wrong alignment on MapWidget_TimeSymbolIcon_C_IconStateCheck");
static_assert(sizeof(MapWidget_TimeSymbolIcon_C_IconStateCheck) == 0x000038, "Wrong size on MapWidget_TimeSymbolIcon_C_IconStateCheck");
static_assert(offsetof(MapWidget_TimeSymbolIcon_C_IconStateCheck, Minutes) == 0x000000, "Member 'MapWidget_TimeSymbolIcon_C_IconStateCheck::Minutes' has a wrong offset!");
static_assert(offsetof(MapWidget_TimeSymbolIcon_C_IconStateCheck, CheckMinutes) == 0x000004, "Member 'MapWidget_TimeSymbolIcon_C_IconStateCheck::CheckMinutes' has a wrong offset!");
static_assert(offsetof(MapWidget_TimeSymbolIcon_C_IconStateCheck, NowTime) == 0x000008, "Member 'MapWidget_TimeSymbolIcon_C_IconStateCheck::NowTime' has a wrong offset!");
static_assert(offsetof(MapWidget_TimeSymbolIcon_C_IconStateCheck, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x000010, "Member 'MapWidget_TimeSymbolIcon_C_IconStateCheck::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_TimeSymbolIcon_C_IconStateCheck, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x000011, "Member 'MapWidget_TimeSymbolIcon_C_IconStateCheck::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_TimeSymbolIcon_C_IconStateCheck, CallFunc_BooleanAND_ReturnValue) == 0x000012, "Member 'MapWidget_TimeSymbolIcon_C_IconStateCheck::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_TimeSymbolIcon_C_IconStateCheck, CallFunc_SBUtcNow_ReturnValue) == 0x000018, "Member 'MapWidget_TimeSymbolIcon_C_IconStateCheck::CallFunc_SBUtcNow_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_TimeSymbolIcon_C_IconStateCheck, CallFunc_PlayAnimation_ReturnValue) == 0x000020, "Member 'MapWidget_TimeSymbolIcon_C_IconStateCheck::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_TimeSymbolIcon_C_IconStateCheck, CallFunc_Subtract_DateTimeDateTime_ReturnValue) == 0x000028, "Member 'MapWidget_TimeSymbolIcon_C_IconStateCheck::CallFunc_Subtract_DateTimeDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_TimeSymbolIcon_C_IconStateCheck, CallFunc_GetTotalMinutes_ReturnValue) == 0x000030, "Member 'MapWidget_TimeSymbolIcon_C_IconStateCheck::CallFunc_GetTotalMinutes_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_TimeSymbolIcon_C_IconStateCheck, CallFunc_GreaterEqual_DateTimeDateTime_ReturnValue) == 0x000034, "Member 'MapWidget_TimeSymbolIcon_C_IconStateCheck::CallFunc_GreaterEqual_DateTimeDateTime_ReturnValue' has a wrong offset!");

}

