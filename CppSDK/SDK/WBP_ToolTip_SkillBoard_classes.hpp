#pragma once

 

// Package: WBP_ToolTip_SkillBoard

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ToolTip_SkillBoard.WBP_ToolTip_SkillBoard_C
// 0x0070 (0x02E8 - 0x0278)
class UWBP_ToolTip_SkillBoard_C final : public UUserWidget
{
public:
	class UImage*                                 BG;                                                // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageLine1;                                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageLine2;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageLine3;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ImagineGrp2;                                       // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ImagineGrp2_Ability;                               // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ImagineGrp2_Lv2;                                   // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ImagineGrp2_Lv3;                                   // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRichTextBlock*                       LabelDescription_Ability;                          // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRichTextBlock*                       LabelDescription_Lv1;                              // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRichTextBlock*                       LabelDescription_Lv2;                              // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRichTextBlock*                       LabelDescription_Lv3;                              // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_3;                              // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtName;                                           // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Set_Skill(int32 SkillId, int32 SkillLevel);
	void GetSkillDataText(const struct FSBSkillDataMasterData& InSkillData, int32 InLevel, class FText* OutText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ToolTip_SkillBoard_C">();
	}
	static class UWBP_ToolTip_SkillBoard_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ToolTip_SkillBoard_C>();
	}
};
static_assert(alignof(UWBP_ToolTip_SkillBoard_C) == 0x000008, "Wrong alignment on UWBP_ToolTip_SkillBoard_C");
static_assert(sizeof(UWBP_ToolTip_SkillBoard_C) == 0x0002E8, "Wrong size on UWBP_ToolTip_SkillBoard_C");
static_assert(offsetof(UWBP_ToolTip_SkillBoard_C, BG) == 0x000278, "Member 'UWBP_ToolTip_SkillBoard_C::BG' has a wrong offset!");
static_assert(offsetof(UWBP_ToolTip_SkillBoard_C, ImageLine1) == 0x000280, "Member 'UWBP_ToolTip_SkillBoard_C::ImageLine1' has a wrong offset!");
static_assert(offsetof(UWBP_ToolTip_SkillBoard_C, ImageLine2) == 0x000288, "Member 'UWBP_ToolTip_SkillBoard_C::ImageLine2' has a wrong offset!");
static_assert(offsetof(UWBP_ToolTip_SkillBoard_C, ImageLine3) == 0x000290, "Member 'UWBP_ToolTip_SkillBoard_C::ImageLine3' has a wrong offset!");
static_assert(offsetof(UWBP_ToolTip_SkillBoard_C, ImagineGrp2) == 0x000298, "Member 'UWBP_ToolTip_SkillBoard_C::ImagineGrp2' has a wrong offset!");
static_assert(offsetof(UWBP_ToolTip_SkillBoard_C, ImagineGrp2_Ability) == 0x0002A0, "Member 'UWBP_ToolTip_SkillBoard_C::ImagineGrp2_Ability' has a wrong offset!");
static_assert(offsetof(UWBP_ToolTip_SkillBoard_C, ImagineGrp2_Lv2) == 0x0002A8, "Member 'UWBP_ToolTip_SkillBoard_C::ImagineGrp2_Lv2' has a wrong offset!");
static_assert(offsetof(UWBP_ToolTip_SkillBoard_C, ImagineGrp2_Lv3) == 0x0002B0, "Member 'UWBP_ToolTip_SkillBoard_C::ImagineGrp2_Lv3' has a wrong offset!");
static_assert(offsetof(UWBP_ToolTip_SkillBoard_C, LabelDescription_Ability) == 0x0002B8, "Member 'UWBP_ToolTip_SkillBoard_C::LabelDescription_Ability' has a wrong offset!");
static_assert(offsetof(UWBP_ToolTip_SkillBoard_C, LabelDescription_Lv1) == 0x0002C0, "Member 'UWBP_ToolTip_SkillBoard_C::LabelDescription_Lv1' has a wrong offset!");
static_assert(offsetof(UWBP_ToolTip_SkillBoard_C, LabelDescription_Lv2) == 0x0002C8, "Member 'UWBP_ToolTip_SkillBoard_C::LabelDescription_Lv2' has a wrong offset!");
static_assert(offsetof(UWBP_ToolTip_SkillBoard_C, LabelDescription_Lv3) == 0x0002D0, "Member 'UWBP_ToolTip_SkillBoard_C::LabelDescription_Lv3' has a wrong offset!");
static_assert(offsetof(UWBP_ToolTip_SkillBoard_C, SBRuntimeTextBlock_3) == 0x0002D8, "Member 'UWBP_ToolTip_SkillBoard_C::SBRuntimeTextBlock_3' has a wrong offset!");
static_assert(offsetof(UWBP_ToolTip_SkillBoard_C, TxtName) == 0x0002E0, "Member 'UWBP_ToolTip_SkillBoard_C::TxtName' has a wrong offset!");

}

