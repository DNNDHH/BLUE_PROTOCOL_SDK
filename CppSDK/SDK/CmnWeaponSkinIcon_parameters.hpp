#pragma once

 

// Package: CmnWeaponSkinIcon

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function CmnWeaponSkinIcon.CmnWeaponSkinIcon_C.SetWeaponSkinInfo
// 0x0250 (0x0250 - 0x0000)
struct CmnWeaponSkinIcon_C_SetWeaponSkinInfo final
{
public:
	struct FSBWeaponItemData                      InWeaponItemData;                                  // 0x0000(0x0050)(BlueprintVisible, BlueprintReadOnly, Parm)
	EAppearanceWeaponStickerType                  LocalStickerType;                                  // 0x0050(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_820B[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        LocalWeaponSkinItemMaster;                         // 0x0058(0x00D0)(Edit, BlueprintVisible)
	int32                                         LocalWeaponSkinId;                                 // 0x0128(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_820C[0x4];                                     // 0x012C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              LocalExpiryDateTime;                               // 0x0130(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          LocalIsTermLimited;                                // 0x0138(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalIsSkinAttached;                               // 0x0139(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x013A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x013B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x013C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_820D[0x3];                                     // 0x013D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable;                               // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_1;                             // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0149(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x014A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindItemMaster_bIsValid;                  // 0x014B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_820E[0x4];                                     // 0x014C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_FindItemMaster_ItemMaster;                // 0x0150(0x00D0)()
	float                                         K2Node_Select_Default;                             // 0x0220(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0224(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x0225(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0226(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_820F[0x1];                                     // 0x0227(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakColor_R;                             // 0x0228(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_G;                             // 0x022C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_B;                             // 0x0230(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_A;                             // 0x0234(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0238(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8210[0x3];                                     // 0x0239(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_MakeColor_ReturnValue;                    // 0x023C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CmnWeaponSkinIcon_C_SetWeaponSkinInfo) == 0x000008, "Wrong alignment on CmnWeaponSkinIcon_C_SetWeaponSkinInfo");
static_assert(sizeof(CmnWeaponSkinIcon_C_SetWeaponSkinInfo) == 0x000250, "Wrong size on CmnWeaponSkinIcon_C_SetWeaponSkinInfo");
static_assert(offsetof(CmnWeaponSkinIcon_C_SetWeaponSkinInfo, InWeaponItemData) == 0x000000, "Member 'CmnWeaponSkinIcon_C_SetWeaponSkinInfo::InWeaponItemData' has a wrong offset!");
static_assert(offsetof(CmnWeaponSkinIcon_C_SetWeaponSkinInfo, LocalStickerType) == 0x000050, "Member 'CmnWeaponSkinIcon_C_SetWeaponSkinInfo::LocalStickerType' has a wrong offset!");
static_assert(offsetof(CmnWeaponSkinIcon_C_SetWeaponSkinInfo, LocalWeaponSkinItemMaster) == 0x000058, "Member 'CmnWeaponSkinIcon_C_SetWeaponSkinInfo::LocalWeaponSkinItemMaster' has a wrong offset!");
static_assert(offsetof(CmnWeaponSkinIcon_C_SetWeaponSkinInfo, LocalWeaponSkinId) == 0x000128, "Member 'CmnWeaponSkinIcon_C_SetWeaponSkinInfo::LocalWeaponSkinId' has a wrong offset!");
static_assert(offsetof(CmnWeaponSkinIcon_C_SetWeaponSkinInfo, LocalExpiryDateTime) == 0x000130, "Member 'CmnWeaponSkinIcon_C_SetWeaponSkinInfo::LocalExpiryDateTime' has a wrong offset!");
static_assert(offsetof(CmnWeaponSkinIcon_C_SetWeaponSkinInfo, LocalIsTermLimited) == 0x000138, "Member 'CmnWeaponSkinIcon_C_SetWeaponSkinInfo::LocalIsTermLimited' has a wrong offset!");
static_assert(offsetof(CmnWeaponSkinIcon_C_SetWeaponSkinInfo, LocalIsSkinAttached) == 0x000139, "Member 'CmnWeaponSkinIcon_C_SetWeaponSkinInfo::LocalIsSkinAttached' has a wrong offset!");
static_assert(offsetof(CmnWeaponSkinIcon_C_SetWeaponSkinInfo, Temp_bool_Variable) == 0x00013A, "Member 'CmnWeaponSkinIcon_C_SetWeaponSkinInfo::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CmnWeaponSkinIcon_C_SetWeaponSkinInfo, Temp_byte_Variable) == 0x00013B, "Member 'CmnWeaponSkinIcon_C_SetWeaponSkinInfo::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CmnWeaponSkinIcon_C_SetWeaponSkinInfo, Temp_byte_Variable_1) == 0x00013C, "Member 'CmnWeaponSkinIcon_C_SetWeaponSkinInfo::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(CmnWeaponSkinIcon_C_SetWeaponSkinInfo, Temp_float_Variable) == 0x000140, "Member 'CmnWeaponSkinIcon_C_SetWeaponSkinInfo::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(CmnWeaponSkinIcon_C_SetWeaponSkinInfo, Temp_float_Variable_1) == 0x000144, "Member 'CmnWeaponSkinIcon_C_SetWeaponSkinInfo::Temp_float_Variable_1' has a wrong offset!");
static_assert(offsetof(CmnWeaponSkinIcon_C_SetWeaponSkinInfo, CallFunc_IsValid_ReturnValue) == 0x000148, "Member 'CmnWeaponSkinIcon_C_SetWeaponSkinInfo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnWeaponSkinIcon_C_SetWeaponSkinInfo, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000149, "Member 'CmnWeaponSkinIcon_C_SetWeaponSkinInfo::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnWeaponSkinIcon_C_SetWeaponSkinInfo, Temp_bool_Variable_1) == 0x00014A, "Member 'CmnWeaponSkinIcon_C_SetWeaponSkinInfo::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(CmnWeaponSkinIcon_C_SetWeaponSkinInfo, CallFunc_FindItemMaster_bIsValid) == 0x00014B, "Member 'CmnWeaponSkinIcon_C_SetWeaponSkinInfo::CallFunc_FindItemMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(CmnWeaponSkinIcon_C_SetWeaponSkinInfo, CallFunc_FindItemMaster_ItemMaster) == 0x000150, "Member 'CmnWeaponSkinIcon_C_SetWeaponSkinInfo::CallFunc_FindItemMaster_ItemMaster' has a wrong offset!");
static_assert(offsetof(CmnWeaponSkinIcon_C_SetWeaponSkinInfo, K2Node_Select_Default) == 0x000220, "Member 'CmnWeaponSkinIcon_C_SetWeaponSkinInfo::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CmnWeaponSkinIcon_C_SetWeaponSkinInfo, K2Node_Select_Default_1) == 0x000224, "Member 'CmnWeaponSkinIcon_C_SetWeaponSkinInfo::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(CmnWeaponSkinIcon_C_SetWeaponSkinInfo, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x000225, "Member 'CmnWeaponSkinIcon_C_SetWeaponSkinInfo::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CmnWeaponSkinIcon_C_SetWeaponSkinInfo, CallFunc_IsValid_ReturnValue_1) == 0x000226, "Member 'CmnWeaponSkinIcon_C_SetWeaponSkinInfo::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CmnWeaponSkinIcon_C_SetWeaponSkinInfo, CallFunc_BreakColor_R) == 0x000228, "Member 'CmnWeaponSkinIcon_C_SetWeaponSkinInfo::CallFunc_BreakColor_R' has a wrong offset!");
static_assert(offsetof(CmnWeaponSkinIcon_C_SetWeaponSkinInfo, CallFunc_BreakColor_G) == 0x00022C, "Member 'CmnWeaponSkinIcon_C_SetWeaponSkinInfo::CallFunc_BreakColor_G' has a wrong offset!");
static_assert(offsetof(CmnWeaponSkinIcon_C_SetWeaponSkinInfo, CallFunc_BreakColor_B) == 0x000230, "Member 'CmnWeaponSkinIcon_C_SetWeaponSkinInfo::CallFunc_BreakColor_B' has a wrong offset!");
static_assert(offsetof(CmnWeaponSkinIcon_C_SetWeaponSkinInfo, CallFunc_BreakColor_A) == 0x000234, "Member 'CmnWeaponSkinIcon_C_SetWeaponSkinInfo::CallFunc_BreakColor_A' has a wrong offset!");
static_assert(offsetof(CmnWeaponSkinIcon_C_SetWeaponSkinInfo, CallFunc_IsValid_ReturnValue_2) == 0x000238, "Member 'CmnWeaponSkinIcon_C_SetWeaponSkinInfo::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CmnWeaponSkinIcon_C_SetWeaponSkinInfo, CallFunc_MakeColor_ReturnValue) == 0x00023C, "Member 'CmnWeaponSkinIcon_C_SetWeaponSkinInfo::CallFunc_MakeColor_ReturnValue' has a wrong offset!");

// Function CmnWeaponSkinIcon.CmnWeaponSkinIcon_C.CreateTooltipWidget
// 0x0078 (0x0078 - 0x0000)
struct CmnWeaponSkinIcon_C_CreateTooltipWidget final
{
public:
	bool                                          InIsSkinAttached;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8211[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InWeaponSkinId;                                    // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InIsTermLimited;                                   // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8212[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              InExpiryDateTime;                                  // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          LocalIsSkinAttached;                               // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8213[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_CommonToolTipText_Variable_C*      K2Node_DynamicCast_AsWBP_Common_Tool_Tip_Text_Variable; // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8214[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_CommonToolTipDetail_Fixed_C*       K2Node_DynamicCast_AsWBP_Common_Tool_Tip_Detail_Fixed; // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8215[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_CommonToolTipDetail_Fixed_C*       K2Node_DynamicCast_AsWBP_Common_Tool_Tip_Detail_Fixed_1; // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8216[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_CommonToolTipText_Variable_C*      K2Node_DynamicCast_AsWBP_Common_Tool_Tip_Text_Variable_1; // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8217[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_CommonToolTipDetail_Fixed_C*       CallFunc_Create_ReturnValue;                       // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_CommonToolTipText_Variable_C*      CallFunc_Create_ReturnValue_1;                     // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CmnWeaponSkinIcon_C_CreateTooltipWidget) == 0x000008, "Wrong alignment on CmnWeaponSkinIcon_C_CreateTooltipWidget");
static_assert(sizeof(CmnWeaponSkinIcon_C_CreateTooltipWidget) == 0x000078, "Wrong size on CmnWeaponSkinIcon_C_CreateTooltipWidget");
static_assert(offsetof(CmnWeaponSkinIcon_C_CreateTooltipWidget, InIsSkinAttached) == 0x000000, "Member 'CmnWeaponSkinIcon_C_CreateTooltipWidget::InIsSkinAttached' has a wrong offset!");
static_assert(offsetof(CmnWeaponSkinIcon_C_CreateTooltipWidget, InWeaponSkinId) == 0x000004, "Member 'CmnWeaponSkinIcon_C_CreateTooltipWidget::InWeaponSkinId' has a wrong offset!");
static_assert(offsetof(CmnWeaponSkinIcon_C_CreateTooltipWidget, InIsTermLimited) == 0x000008, "Member 'CmnWeaponSkinIcon_C_CreateTooltipWidget::InIsTermLimited' has a wrong offset!");
static_assert(offsetof(CmnWeaponSkinIcon_C_CreateTooltipWidget, InExpiryDateTime) == 0x000010, "Member 'CmnWeaponSkinIcon_C_CreateTooltipWidget::InExpiryDateTime' has a wrong offset!");
static_assert(offsetof(CmnWeaponSkinIcon_C_CreateTooltipWidget, LocalIsSkinAttached) == 0x000018, "Member 'CmnWeaponSkinIcon_C_CreateTooltipWidget::LocalIsSkinAttached' has a wrong offset!");
static_assert(offsetof(CmnWeaponSkinIcon_C_CreateTooltipWidget, K2Node_DynamicCast_AsWBP_Common_Tool_Tip_Text_Variable) == 0x000020, "Member 'CmnWeaponSkinIcon_C_CreateTooltipWidget::K2Node_DynamicCast_AsWBP_Common_Tool_Tip_Text_Variable' has a wrong offset!");
static_assert(offsetof(CmnWeaponSkinIcon_C_CreateTooltipWidget, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'CmnWeaponSkinIcon_C_CreateTooltipWidget::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CmnWeaponSkinIcon_C_CreateTooltipWidget, K2Node_DynamicCast_AsWBP_Common_Tool_Tip_Detail_Fixed) == 0x000030, "Member 'CmnWeaponSkinIcon_C_CreateTooltipWidget::K2Node_DynamicCast_AsWBP_Common_Tool_Tip_Detail_Fixed' has a wrong offset!");
static_assert(offsetof(CmnWeaponSkinIcon_C_CreateTooltipWidget, K2Node_DynamicCast_bSuccess_1) == 0x000038, "Member 'CmnWeaponSkinIcon_C_CreateTooltipWidget::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(CmnWeaponSkinIcon_C_CreateTooltipWidget, K2Node_DynamicCast_AsWBP_Common_Tool_Tip_Detail_Fixed_1) == 0x000040, "Member 'CmnWeaponSkinIcon_C_CreateTooltipWidget::K2Node_DynamicCast_AsWBP_Common_Tool_Tip_Detail_Fixed_1' has a wrong offset!");
static_assert(offsetof(CmnWeaponSkinIcon_C_CreateTooltipWidget, K2Node_DynamicCast_bSuccess_2) == 0x000048, "Member 'CmnWeaponSkinIcon_C_CreateTooltipWidget::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(CmnWeaponSkinIcon_C_CreateTooltipWidget, K2Node_DynamicCast_AsWBP_Common_Tool_Tip_Text_Variable_1) == 0x000050, "Member 'CmnWeaponSkinIcon_C_CreateTooltipWidget::K2Node_DynamicCast_AsWBP_Common_Tool_Tip_Text_Variable_1' has a wrong offset!");
static_assert(offsetof(CmnWeaponSkinIcon_C_CreateTooltipWidget, K2Node_DynamicCast_bSuccess_3) == 0x000058, "Member 'CmnWeaponSkinIcon_C_CreateTooltipWidget::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(CmnWeaponSkinIcon_C_CreateTooltipWidget, CallFunc_Create_ReturnValue) == 0x000060, "Member 'CmnWeaponSkinIcon_C_CreateTooltipWidget::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnWeaponSkinIcon_C_CreateTooltipWidget, CallFunc_Create_ReturnValue_1) == 0x000068, "Member 'CmnWeaponSkinIcon_C_CreateTooltipWidget::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CmnWeaponSkinIcon_C_CreateTooltipWidget, CallFunc_IsValid_ReturnValue) == 0x000070, "Member 'CmnWeaponSkinIcon_C_CreateTooltipWidget::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

