#pragma once

 

// Package: MapWidget_WarpPointIcon

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.OnPressed__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct MapWidget_WarpPointIcon_C_OnPressed__DelegateSignature final
{
public:
	class UMapWidget_WarpPointIcon_C*             InWarpPointIcon;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_WarpPointIcon_C_OnPressed__DelegateSignature) == 0x000008, "Wrong alignment on MapWidget_WarpPointIcon_C_OnPressed__DelegateSignature");
static_assert(sizeof(MapWidget_WarpPointIcon_C_OnPressed__DelegateSignature) == 0x000008, "Wrong size on MapWidget_WarpPointIcon_C_OnPressed__DelegateSignature");
static_assert(offsetof(MapWidget_WarpPointIcon_C_OnPressed__DelegateSignature, InWarpPointIcon) == 0x000000, "Member 'MapWidget_WarpPointIcon_C_OnPressed__DelegateSignature::InWarpPointIcon' has a wrong offset!");

// Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.ExecuteUbergraph_MapWidget_WarpPointIcon
// 0x0008 (0x0008 - 0x0000)
struct MapWidget_WarpPointIcon_C_ExecuteUbergraph_MapWidget_WarpPointIcon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_WarpPointIcon_C_ExecuteUbergraph_MapWidget_WarpPointIcon) == 0x000004, "Wrong alignment on MapWidget_WarpPointIcon_C_ExecuteUbergraph_MapWidget_WarpPointIcon");
static_assert(sizeof(MapWidget_WarpPointIcon_C_ExecuteUbergraph_MapWidget_WarpPointIcon) == 0x000008, "Wrong size on MapWidget_WarpPointIcon_C_ExecuteUbergraph_MapWidget_WarpPointIcon");
static_assert(offsetof(MapWidget_WarpPointIcon_C_ExecuteUbergraph_MapWidget_WarpPointIcon, EntryPoint) == 0x000000, "Member 'MapWidget_WarpPointIcon_C_ExecuteUbergraph_MapWidget_WarpPointIcon::EntryPoint' has a wrong offset!");
static_assert(offsetof(MapWidget_WarpPointIcon_C_ExecuteUbergraph_MapWidget_WarpPointIcon, CallFunc_PlaySE_ReturnValue) == 0x000004, "Member 'MapWidget_WarpPointIcon_C_ExecuteUbergraph_MapWidget_WarpPointIcon::CallFunc_PlaySE_ReturnValue' has a wrong offset!");

// Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.SetWarpPoint
// 0x00C0 (0x00C0 - 0x0000)
struct MapWidget_WarpPointIcon_C_SetWarpPoint final
{
public:
	struct FSBMasterWarpPoint                     InWarpPointData;                                   // 0x0000(0x0068)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          IsCity;                                            // 0x0068(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F70[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 TmpPortal;                                         // 0x0070(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class UMapWidget_IconTooltipWarpPoint1_C*     CallFunc_Create_ReturnValue;                       // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCurrentGameContentId_ReturnValue;       // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F71[0x3];                                     // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x008C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7F72[0x4];                                     // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetWarpPointName_ReturnValue;             // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00A8(0x0018)()
};
static_assert(alignof(MapWidget_WarpPointIcon_C_SetWarpPoint) == 0x000008, "Wrong alignment on MapWidget_WarpPointIcon_C_SetWarpPoint");
static_assert(sizeof(MapWidget_WarpPointIcon_C_SetWarpPoint) == 0x0000C0, "Wrong size on MapWidget_WarpPointIcon_C_SetWarpPoint");
static_assert(offsetof(MapWidget_WarpPointIcon_C_SetWarpPoint, InWarpPointData) == 0x000000, "Member 'MapWidget_WarpPointIcon_C_SetWarpPoint::InWarpPointData' has a wrong offset!");
static_assert(offsetof(MapWidget_WarpPointIcon_C_SetWarpPoint, IsCity) == 0x000068, "Member 'MapWidget_WarpPointIcon_C_SetWarpPoint::IsCity' has a wrong offset!");
static_assert(offsetof(MapWidget_WarpPointIcon_C_SetWarpPoint, TmpPortal) == 0x000070, "Member 'MapWidget_WarpPointIcon_C_SetWarpPoint::TmpPortal' has a wrong offset!");
static_assert(offsetof(MapWidget_WarpPointIcon_C_SetWarpPoint, CallFunc_Create_ReturnValue) == 0x000080, "Member 'MapWidget_WarpPointIcon_C_SetWarpPoint::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_WarpPointIcon_C_SetWarpPoint, CallFunc_IsCurrentGameContentId_ReturnValue) == 0x000088, "Member 'MapWidget_WarpPointIcon_C_SetWarpPoint::CallFunc_IsCurrentGameContentId_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_WarpPointIcon_C_SetWarpPoint, CallFunc_Conv_StringToName_ReturnValue) == 0x00008C, "Member 'MapWidget_WarpPointIcon_C_SetWarpPoint::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_WarpPointIcon_C_SetWarpPoint, CallFunc_GetWarpPointName_ReturnValue) == 0x000098, "Member 'MapWidget_WarpPointIcon_C_SetWarpPoint::CallFunc_GetWarpPointName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_WarpPointIcon_C_SetWarpPoint, CallFunc_Conv_StringToText_ReturnValue) == 0x0000A8, "Member 'MapWidget_WarpPointIcon_C_SetWarpPoint::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.SetActive
// 0x0002 (0x0002 - 0x0000)
struct MapWidget_WarpPointIcon_C_SetActive final
{
public:
	bool                                          IsActive;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_WarpPointIcon_C_SetActive) == 0x000001, "Wrong alignment on MapWidget_WarpPointIcon_C_SetActive");
static_assert(sizeof(MapWidget_WarpPointIcon_C_SetActive) == 0x000002, "Wrong size on MapWidget_WarpPointIcon_C_SetActive");
static_assert(offsetof(MapWidget_WarpPointIcon_C_SetActive, IsActive) == 0x000000, "Member 'MapWidget_WarpPointIcon_C_SetActive::IsActive' has a wrong offset!");
static_assert(offsetof(MapWidget_WarpPointIcon_C_SetActive, CallFunc_Not_PreBool_ReturnValue) == 0x000001, "Member 'MapWidget_WarpPointIcon_C_SetActive::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.SetIconImage
// 0x0040 (0x0040 - 0x0000)
struct MapWidget_WarpPointIcon_C_SetIconImage final
{
public:
	bool                                          Param_IsLocalWarpIcon;                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Param_IsHovered;                                   // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F73[0x5];                                     // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_1;                            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F74[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             Temp_object_Variable_2;                            // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_3;                            // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_Select_Default;                             // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_Select_Default_1;                           // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_WarpPointIcon_C_SetIconImage) == 0x000008, "Wrong alignment on MapWidget_WarpPointIcon_C_SetIconImage");
static_assert(sizeof(MapWidget_WarpPointIcon_C_SetIconImage) == 0x000040, "Wrong size on MapWidget_WarpPointIcon_C_SetIconImage");
static_assert(offsetof(MapWidget_WarpPointIcon_C_SetIconImage, Param_IsLocalWarpIcon) == 0x000000, "Member 'MapWidget_WarpPointIcon_C_SetIconImage::Param_IsLocalWarpIcon' has a wrong offset!");
static_assert(offsetof(MapWidget_WarpPointIcon_C_SetIconImage, Param_IsHovered) == 0x000001, "Member 'MapWidget_WarpPointIcon_C_SetIconImage::Param_IsHovered' has a wrong offset!");
static_assert(offsetof(MapWidget_WarpPointIcon_C_SetIconImage, Temp_bool_Variable) == 0x000002, "Member 'MapWidget_WarpPointIcon_C_SetIconImage::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_WarpPointIcon_C_SetIconImage, Temp_object_Variable) == 0x000008, "Member 'MapWidget_WarpPointIcon_C_SetIconImage::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_WarpPointIcon_C_SetIconImage, Temp_object_Variable_1) == 0x000010, "Member 'MapWidget_WarpPointIcon_C_SetIconImage::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(MapWidget_WarpPointIcon_C_SetIconImage, Temp_bool_Variable_1) == 0x000018, "Member 'MapWidget_WarpPointIcon_C_SetIconImage::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(MapWidget_WarpPointIcon_C_SetIconImage, Temp_object_Variable_2) == 0x000020, "Member 'MapWidget_WarpPointIcon_C_SetIconImage::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(MapWidget_WarpPointIcon_C_SetIconImage, Temp_object_Variable_3) == 0x000028, "Member 'MapWidget_WarpPointIcon_C_SetIconImage::Temp_object_Variable_3' has a wrong offset!");
static_assert(offsetof(MapWidget_WarpPointIcon_C_SetIconImage, K2Node_Select_Default) == 0x000030, "Member 'MapWidget_WarpPointIcon_C_SetIconImage::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MapWidget_WarpPointIcon_C_SetIconImage, K2Node_Select_Default_1) == 0x000038, "Member 'MapWidget_WarpPointIcon_C_SetIconImage::K2Node_Select_Default_1' has a wrong offset!");

// Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.SetButtonPressEnable
// 0x000A (0x000A - 0x0000)
struct MapWidget_WarpPointIcon_C_SetButtonPressEnable final
{
public:
	bool                                          IsEnable;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESystemSE                                     Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESystemSE                                     Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESystemSE                                     Temp_byte_Variable_2;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESystemSE                                     Temp_byte_Variable_3;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESystemSE                                     K2Node_Select_Default;                             // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESystemSE                                     K2Node_Select_Default_1;                           // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_WarpPointIcon_C_SetButtonPressEnable) == 0x000001, "Wrong alignment on MapWidget_WarpPointIcon_C_SetButtonPressEnable");
static_assert(sizeof(MapWidget_WarpPointIcon_C_SetButtonPressEnable) == 0x00000A, "Wrong size on MapWidget_WarpPointIcon_C_SetButtonPressEnable");
static_assert(offsetof(MapWidget_WarpPointIcon_C_SetButtonPressEnable, IsEnable) == 0x000000, "Member 'MapWidget_WarpPointIcon_C_SetButtonPressEnable::IsEnable' has a wrong offset!");
static_assert(offsetof(MapWidget_WarpPointIcon_C_SetButtonPressEnable, Temp_bool_Variable) == 0x000001, "Member 'MapWidget_WarpPointIcon_C_SetButtonPressEnable::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_WarpPointIcon_C_SetButtonPressEnable, Temp_byte_Variable) == 0x000002, "Member 'MapWidget_WarpPointIcon_C_SetButtonPressEnable::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_WarpPointIcon_C_SetButtonPressEnable, Temp_byte_Variable_1) == 0x000003, "Member 'MapWidget_WarpPointIcon_C_SetButtonPressEnable::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(MapWidget_WarpPointIcon_C_SetButtonPressEnable, Temp_bool_Variable_1) == 0x000004, "Member 'MapWidget_WarpPointIcon_C_SetButtonPressEnable::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(MapWidget_WarpPointIcon_C_SetButtonPressEnable, Temp_byte_Variable_2) == 0x000005, "Member 'MapWidget_WarpPointIcon_C_SetButtonPressEnable::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(MapWidget_WarpPointIcon_C_SetButtonPressEnable, Temp_byte_Variable_3) == 0x000006, "Member 'MapWidget_WarpPointIcon_C_SetButtonPressEnable::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(MapWidget_WarpPointIcon_C_SetButtonPressEnable, K2Node_Select_Default) == 0x000007, "Member 'MapWidget_WarpPointIcon_C_SetButtonPressEnable::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MapWidget_WarpPointIcon_C_SetButtonPressEnable, K2Node_Select_Default_1) == 0x000008, "Member 'MapWidget_WarpPointIcon_C_SetButtonPressEnable::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(MapWidget_WarpPointIcon_C_SetButtonPressEnable, CallFunc_IsValid_ReturnValue) == 0x000009, "Member 'MapWidget_WarpPointIcon_C_SetButtonPressEnable::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.GetToolTipWidget_0
// 0x0028 (0x0028 - 0x0000)
struct MapWidget_WarpPointIcon_C_GetToolTipWidget_0 final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F75[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                Temp_object_Variable;                              // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F76[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_Select_Default;                             // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_WarpPointIcon_C_GetToolTipWidget_0) == 0x000008, "Wrong alignment on MapWidget_WarpPointIcon_C_GetToolTipWidget_0");
static_assert(sizeof(MapWidget_WarpPointIcon_C_GetToolTipWidget_0) == 0x000028, "Wrong size on MapWidget_WarpPointIcon_C_GetToolTipWidget_0");
static_assert(offsetof(MapWidget_WarpPointIcon_C_GetToolTipWidget_0, ReturnValue) == 0x000000, "Member 'MapWidget_WarpPointIcon_C_GetToolTipWidget_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_WarpPointIcon_C_GetToolTipWidget_0, Temp_bool_Variable) == 0x000008, "Member 'MapWidget_WarpPointIcon_C_GetToolTipWidget_0::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_WarpPointIcon_C_GetToolTipWidget_0, Temp_object_Variable) == 0x000010, "Member 'MapWidget_WarpPointIcon_C_GetToolTipWidget_0::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_WarpPointIcon_C_GetToolTipWidget_0, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'MapWidget_WarpPointIcon_C_GetToolTipWidget_0::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_WarpPointIcon_C_GetToolTipWidget_0, K2Node_Select_Default) == 0x000020, "Member 'MapWidget_WarpPointIcon_C_GetToolTipWidget_0::K2Node_Select_Default' has a wrong offset!");

// Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.SetIconNormalTintColor
// 0x0010 (0x0010 - 0x0000)
struct MapWidget_WarpPointIcon_C_SetIconNormalTintColor final
{
public:
	struct FLinearColor                           InColor;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_WarpPointIcon_C_SetIconNormalTintColor) == 0x000004, "Wrong alignment on MapWidget_WarpPointIcon_C_SetIconNormalTintColor");
static_assert(sizeof(MapWidget_WarpPointIcon_C_SetIconNormalTintColor) == 0x000010, "Wrong size on MapWidget_WarpPointIcon_C_SetIconNormalTintColor");
static_assert(offsetof(MapWidget_WarpPointIcon_C_SetIconNormalTintColor, InColor) == 0x000000, "Member 'MapWidget_WarpPointIcon_C_SetIconNormalTintColor::InColor' has a wrong offset!");

// Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.SetPressedSoundId
// 0x0002 (0x0002 - 0x0000)
struct MapWidget_WarpPointIcon_C_SetPressedSoundId final
{
public:
	ESystemSE                                     InSoundId;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_WarpPointIcon_C_SetPressedSoundId) == 0x000001, "Wrong alignment on MapWidget_WarpPointIcon_C_SetPressedSoundId");
static_assert(sizeof(MapWidget_WarpPointIcon_C_SetPressedSoundId) == 0x000002, "Wrong size on MapWidget_WarpPointIcon_C_SetPressedSoundId");
static_assert(offsetof(MapWidget_WarpPointIcon_C_SetPressedSoundId, InSoundId) == 0x000000, "Member 'MapWidget_WarpPointIcon_C_SetPressedSoundId::InSoundId' has a wrong offset!");
static_assert(offsetof(MapWidget_WarpPointIcon_C_SetPressedSoundId, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'MapWidget_WarpPointIcon_C_SetPressedSoundId::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.SetHoveredSoundId
// 0x0002 (0x0002 - 0x0000)
struct MapWidget_WarpPointIcon_C_SetHoveredSoundId final
{
public:
	ESystemSE                                     InSoundId;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_WarpPointIcon_C_SetHoveredSoundId) == 0x000001, "Wrong alignment on MapWidget_WarpPointIcon_C_SetHoveredSoundId");
static_assert(sizeof(MapWidget_WarpPointIcon_C_SetHoveredSoundId) == 0x000002, "Wrong size on MapWidget_WarpPointIcon_C_SetHoveredSoundId");
static_assert(offsetof(MapWidget_WarpPointIcon_C_SetHoveredSoundId, InSoundId) == 0x000000, "Member 'MapWidget_WarpPointIcon_C_SetHoveredSoundId::InSoundId' has a wrong offset!");
static_assert(offsetof(MapWidget_WarpPointIcon_C_SetHoveredSoundId, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'MapWidget_WarpPointIcon_C_SetHoveredSoundId::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.SetGrayOut
// 0x0034 (0x0034 - 0x0000)
struct MapWidget_WarpPointIcon_C_SetGrayOut final
{
public:
	bool                                          Param_IsGrayOut;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F77[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x0004(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor_1;                   // 0x0014(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select_Default;                             // 0x0024(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_WarpPointIcon_C_SetGrayOut) == 0x000004, "Wrong alignment on MapWidget_WarpPointIcon_C_SetGrayOut");
static_assert(sizeof(MapWidget_WarpPointIcon_C_SetGrayOut) == 0x000034, "Wrong size on MapWidget_WarpPointIcon_C_SetGrayOut");
static_assert(offsetof(MapWidget_WarpPointIcon_C_SetGrayOut, Param_IsGrayOut) == 0x000000, "Member 'MapWidget_WarpPointIcon_C_SetGrayOut::Param_IsGrayOut' has a wrong offset!");
static_assert(offsetof(MapWidget_WarpPointIcon_C_SetGrayOut, Temp_bool_Variable) == 0x000001, "Member 'MapWidget_WarpPointIcon_C_SetGrayOut::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_WarpPointIcon_C_SetGrayOut, K2Node_MakeStruct_LinearColor) == 0x000004, "Member 'MapWidget_WarpPointIcon_C_SetGrayOut::K2Node_MakeStruct_LinearColor' has a wrong offset!");
static_assert(offsetof(MapWidget_WarpPointIcon_C_SetGrayOut, K2Node_MakeStruct_LinearColor_1) == 0x000014, "Member 'MapWidget_WarpPointIcon_C_SetGrayOut::K2Node_MakeStruct_LinearColor_1' has a wrong offset!");
static_assert(offsetof(MapWidget_WarpPointIcon_C_SetGrayOut, K2Node_Select_Default) == 0x000024, "Member 'MapWidget_WarpPointIcon_C_SetGrayOut::K2Node_Select_Default' has a wrong offset!");

// Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.SetIconImageEx
// 0x0020 (0x0020 - 0x0000)
struct MapWidget_WarpPointIcon_C_SetIconImageEx final
{
public:
	bool                                          Param_IsLocalWarpIcon;                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Param_IsHovered;                                   // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F78[0x5];                                     // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_1;                            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_Select_Default;                             // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_WarpPointIcon_C_SetIconImageEx) == 0x000008, "Wrong alignment on MapWidget_WarpPointIcon_C_SetIconImageEx");
static_assert(sizeof(MapWidget_WarpPointIcon_C_SetIconImageEx) == 0x000020, "Wrong size on MapWidget_WarpPointIcon_C_SetIconImageEx");
static_assert(offsetof(MapWidget_WarpPointIcon_C_SetIconImageEx, Param_IsLocalWarpIcon) == 0x000000, "Member 'MapWidget_WarpPointIcon_C_SetIconImageEx::Param_IsLocalWarpIcon' has a wrong offset!");
static_assert(offsetof(MapWidget_WarpPointIcon_C_SetIconImageEx, Param_IsHovered) == 0x000001, "Member 'MapWidget_WarpPointIcon_C_SetIconImageEx::Param_IsHovered' has a wrong offset!");
static_assert(offsetof(MapWidget_WarpPointIcon_C_SetIconImageEx, Temp_bool_Variable) == 0x000002, "Member 'MapWidget_WarpPointIcon_C_SetIconImageEx::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_WarpPointIcon_C_SetIconImageEx, Temp_object_Variable) == 0x000008, "Member 'MapWidget_WarpPointIcon_C_SetIconImageEx::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_WarpPointIcon_C_SetIconImageEx, Temp_object_Variable_1) == 0x000010, "Member 'MapWidget_WarpPointIcon_C_SetIconImageEx::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(MapWidget_WarpPointIcon_C_SetIconImageEx, K2Node_Select_Default) == 0x000018, "Member 'MapWidget_WarpPointIcon_C_SetIconImageEx::K2Node_Select_Default' has a wrong offset!");

// Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.SetWarpPointEx
// 0x0080 (0x0080 - 0x0000)
struct MapWidget_WarpPointIcon_C_SetWarpPointEx final
{
public:
	struct FSBMasterWarpPoint                     InWarpPointData;                                   // 0x0000(0x0068)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          IsCity;                                            // 0x0068(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F79[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 TmpPortal;                                         // 0x0070(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_WarpPointIcon_C_SetWarpPointEx) == 0x000008, "Wrong alignment on MapWidget_WarpPointIcon_C_SetWarpPointEx");
static_assert(sizeof(MapWidget_WarpPointIcon_C_SetWarpPointEx) == 0x000080, "Wrong size on MapWidget_WarpPointIcon_C_SetWarpPointEx");
static_assert(offsetof(MapWidget_WarpPointIcon_C_SetWarpPointEx, InWarpPointData) == 0x000000, "Member 'MapWidget_WarpPointIcon_C_SetWarpPointEx::InWarpPointData' has a wrong offset!");
static_assert(offsetof(MapWidget_WarpPointIcon_C_SetWarpPointEx, IsCity) == 0x000068, "Member 'MapWidget_WarpPointIcon_C_SetWarpPointEx::IsCity' has a wrong offset!");
static_assert(offsetof(MapWidget_WarpPointIcon_C_SetWarpPointEx, TmpPortal) == 0x000070, "Member 'MapWidget_WarpPointIcon_C_SetWarpPointEx::TmpPortal' has a wrong offset!");

// Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.SetDungeonMode
// 0x0001 (0x0001 - 0x0000)
struct MapWidget_WarpPointIcon_C_SetDungeonMode final
{
public:
	bool                                          InDungeonMode;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_WarpPointIcon_C_SetDungeonMode) == 0x000001, "Wrong alignment on MapWidget_WarpPointIcon_C_SetDungeonMode");
static_assert(sizeof(MapWidget_WarpPointIcon_C_SetDungeonMode) == 0x000001, "Wrong size on MapWidget_WarpPointIcon_C_SetDungeonMode");
static_assert(offsetof(MapWidget_WarpPointIcon_C_SetDungeonMode, InDungeonMode) == 0x000000, "Member 'MapWidget_WarpPointIcon_C_SetDungeonMode::InDungeonMode' has a wrong offset!");

// Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.ChangeTooltipText
// 0x0028 (0x0028 - 0x0000)
struct MapWidget_WarpPointIcon_C_ChangeTooltipText final
{
public:
	class FString                                 InToolTipText;                                     // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0010(0x0018)()
};
static_assert(alignof(MapWidget_WarpPointIcon_C_ChangeTooltipText) == 0x000008, "Wrong alignment on MapWidget_WarpPointIcon_C_ChangeTooltipText");
static_assert(sizeof(MapWidget_WarpPointIcon_C_ChangeTooltipText) == 0x000028, "Wrong size on MapWidget_WarpPointIcon_C_ChangeTooltipText");
static_assert(offsetof(MapWidget_WarpPointIcon_C_ChangeTooltipText, InToolTipText) == 0x000000, "Member 'MapWidget_WarpPointIcon_C_ChangeTooltipText::InToolTipText' has a wrong offset!");
static_assert(offsetof(MapWidget_WarpPointIcon_C_ChangeTooltipText, CallFunc_Conv_StringToText_ReturnValue) == 0x000010, "Member 'MapWidget_WarpPointIcon_C_ChangeTooltipText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

}

